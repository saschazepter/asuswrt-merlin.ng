/*
<:copyright-BRCM:2018:DUAL/GPL:standard

   Copyright (c) 2018 Broadcom 
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:>
*/

/*
 * Broadcom FlexRM Driver
 *
 * Each Broadcom SPU2 offload engine is implemented as an
 * extension to Broadcom FlexRM ring manager. The FlexRM ring
 * manager provides a set of rings which can be used to submit
 * work to a SPU2 offload engine.
 *
 * This driver creates a controller using a set of FlexRM
 * rings where each channel represents a separate FlexRM ring.
 */

//#define DEBUG

#include <asm/barrier.h>
#include <asm/byteorder.h>
#include <linux/atomic.h>
#include <linux/debugfs.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/dma-mapping.h>
#include <linux/dmapool.h>
#include <linux/err.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/of_address.h>
#include <linux/of_irq.h>
#include <linux/platform_device.h>
#include <linux/spinlock.h>
#include <linux/version.h>

#include <bcmspumsg.h>
#include "pmc_spu.h"
#if defined(CONFIG_BCM_SPU_HW_OFFLOAD) && (defined(CONFIG_BCM_RDPA) || defined(CONFIG_BCM_RDPA_MODULE))
#define FLEXRM_OFFLOAD
#include <rdpa_api.h>
#endif

#include "bcm/flexrmdefs.h"

/* The default ring size can handle at most 512 descriptors (4KB)
 * but the block has the capability of extending the ring beyond
 * 4KB by putting a special "next descriptor" at the end of the ring
 * and extend the ring by another 4KB. This extension can go on until
 * a maximum of 16KB of memory space for each ring. The following
 * compile flag controls if the ring will be extneded to 16KB. By
 * default, this feature is disabled because the extra logic needed
 * to deal with the extended ring reduces the performance of the driver.
 * For TCP where the sliding window will adapt to the shortest pipe in
 * the path, the default size is more than capable to handle typical
 * data flow. */
//#define FLEXRM_EXTENDED_RING

#ifndef FLEXRM_EXTENDED_RING
/* Doorbell mode is only supported if the rings are NOT extended.
 * Doorbell mode is more efficient than toggle mode, because doorbell
 * mode eliminates 1) the need of making each crypto request cache
 * aligned and 2) the need of tracking and manipulating the toggle
 * bit in every request. */
#define DOORBELL_MODE
#endif

/* ====== FlexRM register defines ===== */

/* FlexRM configuration */
#define RING_REGS_SIZE					0x10000
#define RING_DESC_SIZE					8
#define RING_DESC_INDEX(offset)				\
			((offset) / RING_DESC_SIZE)
#define RING_DESC_OFFSET(index)				\
			((index) * RING_DESC_SIZE)
#ifdef FLEXRM_EXTENDED_RING
#define RING_MAX_REQ_COUNT				1024
#else
#define RING_MAX_REQ_COUNT				512
#endif
#define RING_BD_ALIGN_ORDER				12
#define RING_BD_ALIGN_CHECK(addr)			\
			(!((addr) & ((0x1 << RING_BD_ALIGN_ORDER) - 1)))
#ifndef DOORBELL_MODE
#define RING_BD_TOGGLE_INVALID(offset)			\
			(((offset) >> RING_BD_ALIGN_ORDER) & 0x1)
#define RING_BD_TOGGLE_VALID(offset)			\
			(!RING_BD_TOGGLE_INVALID(offset))
#else
#define RING_BD_TOGGLE_INVALID(offset)			0
#define RING_BD_TOGGLE_VALID(offset) 			0
#endif
#ifdef FLEXRM_EXTENDED_RING
#define RING_BD_DESC_PER_REQ				32
#else
#define RING_BD_DESC_PER_REQ				1
#endif
#define RING_BD_DESC_COUNT				\
			(RING_MAX_REQ_COUNT * RING_BD_DESC_PER_REQ)
#define RING_BD_SIZE					\
			(RING_BD_DESC_COUNT * RING_DESC_SIZE)
#define RING_CMPL_ALIGN_ORDER				13
#ifdef FLEXRM_EXTENDED_RING
#define RING_CMPL_DESC_COUNT				RING_MAX_REQ_COUNT
#else
#define RING_CMPL_DESC_COUNT				1024
#endif
#define RING_CMPL_SIZE					\
			(RING_CMPL_DESC_COUNT * RING_DESC_SIZE)
#define RING_VER_MAGIC					0x76303031
#define AE_MAX_COUNT					2
#define RING_MAX_COUNT					4
#define FLEXRM_RX_BUDGET				32

#ifdef FLEXRM_EXTENDED_RING
#if defined (FLEXRM_OFFLOAD)
#error SPU HW offloading not supported in extended ring mode
#endif
#else
#define RING_OFFLOAD_BD_PER_REQ			7
#define RING_OFFLOAD_NUM_BD			512
#define RING_OFFLOAD_MAX_REQ			RING_OFFLOAD_NUM_BD / RING_OFFLOAD_BD_PER_REQ
#endif
#define RING_OFFLOAD_BD_SIZE			RING_OFFLOAD_NUM_BD * RING_DESC_SIZE
#define RING_OFFLOAD_NUM_ALIGN_SWITCH	RING_OFFLOAD_BD_SIZE >> RING_BD_ALIGN_ORDER

/* allocate bigger of the two values for now */
#if RING_BD_SIZE > RING_OFFLOAD_BD_SIZE
#define RING_BD_ALLOC_SIZE              RING_BD_SIZE
#else
#define RING_BD_ALLOC_SIZE              RING_OFFLOAD_BD_SIZE
#endif

/* Per-Ring register offsets */
#define RING_VER					0x000
#define RING_BD_START_ADDR				0x004
#define RING_BD_READ_PTR				0x008
#define RING_BD_WRITE_PTR				0x00c
#define RING_BD_READ_PTR_DDR_LS				0x010
#define RING_BD_READ_PTR_DDR_MS				0x014
#define RING_CMPL_START_ADDR				0x018
#define RING_CMPL_WRITE_PTR				0x01c
#define RING_NUM_REQ_RECV_LS				0x020
#define RING_NUM_REQ_RECV_MS				0x024
#define RING_NUM_REQ_TRANS_LS				0x028
#define RING_NUM_REQ_TRANS_MS				0x02c
#define RING_NUM_REQ_OUTSTAND				0x030
#define RING_CONTROL					0x034
#define RING_FLUSH_DONE					0x038
#define RING_MSI_ADDR_LS				0x03c
#define RING_MSI_ADDR_MS				0x040
#define RING_MSI_CONTROL				0x048
#define RING_BD_READ_PTR_DDR_CONTROL			0x04c
#define RING_MSI_DATA_VALUE				0x064

/* Register RING_BD_START_ADDR fields */
#define BD_LAST_UPDATE_HW_SHIFT				28
#define BD_LAST_UPDATE_HW_MASK				0x1
#define BD_START_ADDR_VALUE(pa)				\
	((u32)((((dma_addr_t)(pa)) >> RING_BD_ALIGN_ORDER) & 0x0fffffff))
#define BD_START_ADDR_DECODE(val)			\
	((dma_addr_t)((val) & 0x0fffffff) << RING_BD_ALIGN_ORDER)

/* Register RING_CMPL_START_ADDR fields */
#define CMPL_START_ADDR_VALUE(pa)			\
	((u32)((((u64)(pa)) >> RING_CMPL_ALIGN_ORDER) & 0x07ffffff))

/* Register RING_CONTROL fields */
#define CONTROL_MASK_DISABLE_CONTROL			12
#define CONTROL_FLUSH_SHIFT				5
#define CONTROL_ACTIVE_SHIFT				4
#define CONTROL_RATE_ADAPT_MASK				0xf
#define CONTROL_RATE_DYNAMIC				0x0
#define CONTROL_RATE_FAST				0x8
#define CONTROL_RATE_MEDIUM				0x9
#define CONTROL_RATE_SLOW				0xa
#define CONTROL_RATE_IDLE				0xb

/* Register RING_FLUSH_DONE fields */
#define FLUSH_DONE_MASK					0x1

/* Register RING_MSI_CONTROL fields */
#define MSI_TIMER_VAL_SHIFT				16
#define MSI_TIMER_VAL_MASK				0xffff
#define MSI_ENABLE_SHIFT				15
#define MSI_ENABLE_MASK					0x1
#define MSI_COUNT_SHIFT					0
#define MSI_COUNT_MASK					0x3ff

/* Register RING_BD_READ_PTR_DDR_CONTROL fields */
#define BD_READ_PTR_DDR_TIMER_VAL_SHIFT			16
#define BD_READ_PTR_DDR_TIMER_VAL_MASK			0xffff
#define BD_READ_PTR_DDR_ENABLE_SHIFT			15
#define BD_READ_PTR_DDR_ENABLE_MASK			0x1


/* AE Registers offsets */
#define AEx_BASE(__i)					(0x00202000 + ((__i) * 0x100))
#define AEx_CONTROL_REGISTER(__i)			(AEx_BASE(__i))

/* Register AEx_CONTROL_REGISTER fields */
#define AEx_CONTROL_REGISTER__ACTIVE_SHIFT              4


/* DME Registers offsets */
#define DMEx_BASE(__i)					(0x00280000 + ((__i) * 0x1000))
#define DMEx_AXI_CONTROL(__i)				(DMEx_BASE(__i) + 0x4)
#define DMEx_WR_FIFO_THRESHOLD(__i)			(DMEx_BASE(__i) + 0xc)
#define DMEx_RD_FIFO_THRESHOLD(__i)			(DMEx_BASE(__i) + 0x14)

/* Register DMEx_WR/RD_FIFO_THRESHOLD fields */
#define DMEx_FIFO_THRESHOLD__MIN_SHIFT			0
#define DMEx_FIFO_THRESHOLD__MAX_SHIFT			10


/* Ring manager Registers offsets */
#define COMM_RINGx_RM_RING_COMMON_CONTROL(__i)		(0x00200000 + ((__i) * 0x100))
#define COMM_RINGx_RING_MSI_DEVICE_ID(__i)		(0x00200004 + ((__i) * 0x100))
#define COMM_RM_RING_SECURITY_SETTING			0x00203000
#define COMM_RM_CONTROL_REGISTER			0x00203008
#define COMM_RM_RING_TIMER_CONTROL_0			0x0020300c
#define COMM_RM_RING_TIMER_CONTROL_1			0x00203010
#define COMM_RM_BD_THRESHOLD				0x00203014
#define COMM_RM_BURST_LENGTH				0x00203018
#define COMM_RM_FIFO_FULL_THRESHOLD			0x0020301c
#define COMM_AE_TIMEOUT					0x00203024
#define COMM_RING_FLUSH_TIMEOUT				0x0020302c
#define COMM_RM_MEMORY_CONFIGURATION			0x00203030
#define COMM_RM_AXI_CONTROL				0x00203034
#define COMM_CONFIG_INTERRUPT_STATUS_CLEAR		0x00203048
#define COMM_RM_AXI_READ_BURST_THRESHOLD		0x002030c8
#define COMM_RM_GROUP_RING_COUNT			0x002030cc
#define COMM_RM_MAIN_HW_INIT_DONE			0x0020312c

/* Register COMM_RM_CONTROL_REGISTER fields */
#define COMM_RM_CONTROL_REGISTER__AE_LOCKING_SHIFT	7
#define COMM_RM_CONTROL_REGISTER__MODE_MASK		0x3
#define COMM_RM_CONTROL_REGISTER__CONFIG_DONE_SHIFT	2
#ifdef CONFIG_BCM_FLEXRM_V1_DOORBELL_MODE
#define COMM_RM_CONTROL_REGISTER__DOORBELL_OLD	11
#endif

/* Register COMM_RINGx_RM_RING_COMMON_CONTROL fields */
#define COMM_RINGx_RM_RING_COMMON_CONTROL__AXI_ID_SHIFT	8

/* Register COMM_RM_MAIN_HW_INIT_DONE */
#define COMM_RM_MAIN_HW_INIT_DONE__HW_INIT_DONE_MASK	1


/* CTRLREGS Registers */
#define CTRLREGS_CONTROL				0x00210000
#define CTRLREGS_STATUS					0x00210008

/* Register CTRLREGS_CONTROL fields */
#define CTRLREGS_CONTROL__PROT_OR_AND_MASK		0x3f000000

/* Register CTRLREGS_STATUS fields */
#define CTRLREGS_STATUS__SECURE				0x00537063
#define CTRLREGS_STATUS__NON_SECURE			0x88537063

/* CPUIF Registers */
#define CPUIF_MASK					0x00211000
#define CPUIF_CPUIRQCLR				0x00211004
#define CPUIF_CPUIRQSET				0x00211008
#ifdef CONFIG_BCM_FLEXRM_V2_IRQ
#define CPUIF_MASKCLR				0x0021100c
#define CPUIF_MASKSET				0x00211010
#endif

/* RMIF Registers */
#define RMIF_IRQCLR					0x00212004
#define RMIF_IRQSET					0x00212008

#define SPUx_BASE(__i)					(0x002C0000 + ((__i) * 0x1000))
#define SPUx_IVGEN_KEY0(__i)				(SPUx_BASE(__i) + 0x0)

/* ====== FlexRM ring descriptor defines ===== */

/* Completion descriptor format */
#define CMPL_OPAQUE_SHIFT			0
#define CMPL_OPAQUE_MASK			0xffff
#define CMPL_ENGINE_STATUS_SHIFT		16
#define CMPL_ENGINE_STATUS_MASK			0xffff
#define CMPL_DME_STATUS_SHIFT			32
#define CMPL_DME_STATUS_MASK			0xffff
#define CMPL_RM_STATUS_SHIFT			48
#define CMPL_RM_STATUS_MASK			0xffff

/* Completion DME status code */
#define DME_STATUS_MEM_COR_ERR			BIT(0)
#define DME_STATUS_MEM_UCOR_ERR			BIT(1)
#define DME_STATUS_FIFO_UNDERFLOW		BIT(2)
#define DME_STATUS_FIFO_OVERFLOW		BIT(3)
#define DME_STATUS_RRESP_ERR			BIT(4)
#define DME_STATUS_BRESP_ERR			BIT(5)
#define DME_STATUS_ERROR_MASK			(DME_STATUS_MEM_COR_ERR | \
						 DME_STATUS_MEM_UCOR_ERR | \
						 DME_STATUS_FIFO_UNDERFLOW | \
						 DME_STATUS_FIFO_OVERFLOW | \
						 DME_STATUS_RRESP_ERR | \
						 DME_STATUS_BRESP_ERR)

/* Completion RM status code */
#define RM_STATUS_CODE_SHIFT			0
#define RM_STATUS_CODE_MASK			0xffc0
#define RM_STATUS_CODE_GOOD			0x0
#define RM_STATUS_CODE_AE_TIMEOUT		0xffc0
#define RM_STATUS_CODE_AE_ID_MASK		0x003f

/* General descriptor format */
#define DESC_TYPE_SHIFT				60
#define DESC_TYPE_MASK				0xf
#define DESC_PAYLOAD_SHIFT			0
#define DESC_PAYLOAD_MASK			0x0fffffffffffffff

/* Null descriptor format  */
#define NULL_TYPE				0
#define NULL_TOGGLE_SHIFT			58
#define NULL_TOGGLE_MASK			0x1

/* Header descriptor format */
#define HEADER_TYPE				1
#define HEADER_TOGGLE_SHIFT			58
#define HEADER_TOGGLE_MASK			0x1
#define HEADER_ENDPKT_SHIFT			57
#define HEADER_ENDPKT_MASK			0x1
#define HEADER_STARTPKT_SHIFT			56
#define HEADER_STARTPKT_MASK			0x1
#define HEADER_BDCOUNT_SHIFT			36
#define HEADER_BDCOUNT_MASK			0x1f
#define HEADER_BDCOUNT_MAX			HEADER_BDCOUNT_MASK
#define HEADER_FLAGS_SHIFT			16
#define HEADER_FLAGS_MASK			0xffff
#define HEADER_OPAQUE_SHIFT			0
#define HEADER_OPAQUE_MASK			0xffff

/* Source (SRC) descriptor format */
#define SRC_TYPE				2
#define SRC_LENGTH_SHIFT			44
#define SRC_LENGTH_MASK				0xffff
#define SRC_ADDR_SHIFT				0
#define SRC_ADDR_MASK				0x00000fffffffffff

/* Destination (DST) descriptor format */
#define DST_TYPE				3
#define DST_LENGTH_SHIFT			44
#define DST_LENGTH_MASK				0xffff
#define DST_ADDR_SHIFT				0
#define DST_ADDR_MASK				0x00000fffffffffff

/* Immediate (IMM) descriptor format */
#define IMM_TYPE				4
#define IMM_DATA_SHIFT				0
#define IMM_DATA_MASK				0x0fffffffffffffff

/* Next pointer (NPTR) descriptor format */
#define NPTR_TYPE				5
#define NPTR_TOGGLE_SHIFT			58
#define NPTR_TOGGLE_MASK			0x1
#define NPTR_ADDR_SHIFT				0
#define NPTR_ADDR_MASK				0x00000fffffffffff

/* Mega source (MSRC) descriptor format */
#define MSRC_TYPE				6
#define MSRC_LENGTH_SHIFT			44
#define MSRC_LENGTH_MASK			0xffff
#define MSRC_ADDR_SHIFT				0
#define MSRC_ADDR_MASK				0x00000fffffffffff

/* Mega destination (MDST) descriptor format */
#define MDST_TYPE				7
#define MDST_LENGTH_SHIFT			44
#define MDST_LENGTH_MASK			0xffff
#define MDST_ADDR_SHIFT				0
#define MDST_ADDR_MASK				0x00000fffffffffff

/* Descriptor helper macros */
#define DESC_DEC(_d, _s, _m)			(((_d) >> (_s)) & (_m))
#define DESC_ENC(_d, _v, _s, _m)		\
			do { \
				(_d) &= ~((u64)(_m) << (_s)); \
				(_d) |= (((u64)(_v) & (_m)) << (_s)); \
			} while (0)

/* ring options - for offload reserved rings */
#if defined (FLEXRM_OFFLOAD)
#define OFFLOAD_RESERVED	0x1 /* Ring reserved for SPU HW offload */
#define RESP_OFFLOAD		0x2 /* offload ring response will be handled on Runner */
#define SPU_RESP_ON_RUNNER

/* memory for responses on offload reserved rings
 * 128 bytes for each response:
 * response header is always 32 bytes
 * associate data is 24 bytes (4 byte SPI + 4 byte seqno + fixed 16 byte IV)
 * digest + status (12 minimum + 2 bytes), digest size is variable (assumeup to 32)
 * 90 bytes required for each response, make it cache line aligned */
#define MEM_OFFLOAD_RESPONSE	128

/* plus extra for shared state memory between Runner and the host */
#define STATE_MEMORY_SHARED	8

#define NUM_OFFLOAD_RESERVED	1
#else
#define NUM_OFFLOAD_RESERVED	0
#endif

#define CS_OFF 0
#define CS_ON  1
/* ====== FlexRM data structures ===== */

struct flexrm_ring {
	/* Unprotected members */
	char *name;
	int num;
	void __iomem *regs;
	bool irq_requested;
	unsigned int irq;
	cpumask_t irq_aff_hint;
	unsigned int msi_timer_val;
	unsigned int msi_count_threshold;
	struct bcmspu_message *requests[RING_MAX_REQ_COUNT];
	unsigned int reqid;
	unsigned int req_in_transit;
	void *bd_base;
	dma_addr_t bd_dma_base;

	// protect bd write/read offset
	spinlock_t bd_lock;
	u32 bd_write_offset;
	u32 bd_read_offset;

	void *cmpl_base;
	dma_addr_t cmpl_dma_base;
#ifndef FLEXRM_EXTENDED_RING
	unsigned long toggle;
#endif
	void *resp_base;
	dma_addr_t resp_dma_base;
#if defined (FLEXRM_OFFLOAD)
	u32 ring_config;
	u32 *rd_idx_p;
#endif
	/* Atomic stats */
	atomic_t irq_count;
	atomic_t batch_watermark;
	atomic_t msg_send_count;
	atomic_t msg_cmpl_count;
	atomic_t ae_cmpl_count[AE_MAX_COUNT];
	/* Protected members */
	spinlock_t lock;
	u32 cmpl_read_offset;
};

struct flexrm_power_t {
	spinlock_t lock;
	atomic_t in_progress;
	SPU_PWR_STATUS status;
};

struct flexrm_global {
	struct device *dev;
	void __iomem *regs;
	u32 phyaddr_base;
	u32 num_rings;
	u32 num_aes;
	atomic_t next_chan;
	u32 irq_mask;
	struct flexrm_ring *rings;
	struct dma_pool *bd_pool;
	struct dma_pool *cmpl_pool;
	struct dentry *root;
	struct dentry *config;
	struct dentry *stats;
	struct flexrm_power_t power_ctrl;
};

struct flexrm_global *flexrm_g = NULL;

/*===================== Chardev Interface =============*/
static int flex_major = -1;
static struct class *flexchardev_class = NULL;
/*=====================================================*/

#if defined (FLEXRM_OFFLOAD)
static spu_offload_cbk spu_offload_callback = NULL;
#endif

/* ====== FlexRM ring descriptor helper routines ===== */

static inline u64 flexrm_read_desc(void *desc_ptr)
{
	return le64_to_cpu(*((u64 *)desc_ptr));
}

static inline void flexrm_write_desc(void *desc_ptr, u64 desc)
{
	*((u64 *)desc_ptr) = cpu_to_le64(desc);
}

static inline u32 flexrm_cmpl_desc_to_reqid(u64 cmpl_desc)
{
	return (u32)(cmpl_desc & CMPL_OPAQUE_MASK);
}

static inline u32 flexrm_cmpl_desc_to_aeid(u64 cmpl_desc)
{
	u32 aeid;

	aeid = DESC_DEC(cmpl_desc, CMPL_RM_STATUS_SHIFT,
			CMPL_RM_STATUS_MASK);
	aeid &= RM_STATUS_CODE_AE_ID_MASK;
	return aeid;
}

static inline int flexrm_cmpl_desc_to_error(u64 cmpl_desc)
{
	u32 status;

	status = DESC_DEC(cmpl_desc, CMPL_DME_STATUS_SHIFT,
			  CMPL_DME_STATUS_MASK);
	if (status & DME_STATUS_ERROR_MASK)
		return -EIO;

	status = DESC_DEC(cmpl_desc, CMPL_RM_STATUS_SHIFT,
			  CMPL_RM_STATUS_MASK);
	status &= RM_STATUS_CODE_MASK;
	if (status == RM_STATUS_CODE_AE_TIMEOUT)
		return -ETIMEDOUT;

	return 0;
}

#ifdef FLEXRM_EXTENDED_RING
static inline bool flexrm_is_next_table_desc(void *desc_ptr)
{
	u64 desc = flexrm_read_desc(desc_ptr);
	u32 type = DESC_DEC(desc, DESC_TYPE_SHIFT, DESC_TYPE_MASK);

	return (type == NPTR_TYPE) ? true : false;
}
#endif

#if defined(FLEXRM_EXTENDED_RING) || defined(FLEXRM_OFFLOAD)
static inline u64 flexrm_next_table_desc(u32 toggle, dma_addr_t next_addr)
{
	u64 desc = 0;

	DESC_ENC(desc, NPTR_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
#ifndef DOORBELL_MODE
	DESC_ENC(desc, toggle, NPTR_TOGGLE_SHIFT, NPTR_TOGGLE_MASK);
#endif
	DESC_ENC(desc, next_addr, NPTR_ADDR_SHIFT, NPTR_ADDR_MASK);

	return desc;
}
#endif

static inline u64 flexrm_null_desc(u32 toggle)
{
	u64 desc = 0;
#ifndef DOORBELL_MODE
	DESC_ENC(desc, NULL_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
	DESC_ENC(desc, toggle, NULL_TOGGLE_SHIFT, NULL_TOGGLE_MASK);
#endif
	return desc;
}

static inline u32 flexrm_estimate_header_desc_count(u32 nhcnt)
{
	u32 hcnt = nhcnt / HEADER_BDCOUNT_MAX;

	if (!hcnt)
		hcnt += 1;

	return hcnt;
}

#ifndef DOORBELL_MODE
static inline void flexrm_flip_header_toggle(void *desc_ptr)
{
	u64 desc = flexrm_read_desc(desc_ptr);

	if (desc & ((u64)0x1 << HEADER_TOGGLE_SHIFT))
		desc &= ~((u64)0x1 << HEADER_TOGGLE_SHIFT);
	else
		desc |= ((u64)0x1 << HEADER_TOGGLE_SHIFT);

	flexrm_write_desc(desc_ptr, desc);
}
#endif

static inline u64 flexrm_header_desc(u32 toggle, u32 startpkt, u32 endpkt,
				     u32 bdcount, u32 flags, u32 opaque)
{
	u64 desc = 0;

	DESC_ENC(desc, HEADER_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
#ifndef DOORBELL_MODE
	DESC_ENC(desc, toggle, HEADER_TOGGLE_SHIFT, HEADER_TOGGLE_MASK);
#endif
	DESC_ENC(desc, startpkt, HEADER_STARTPKT_SHIFT, HEADER_STARTPKT_MASK);
	DESC_ENC(desc, endpkt, HEADER_ENDPKT_SHIFT, HEADER_ENDPKT_MASK);
	DESC_ENC(desc, bdcount, HEADER_BDCOUNT_SHIFT, HEADER_BDCOUNT_MASK);
	DESC_ENC(desc, flags, HEADER_FLAGS_SHIFT, HEADER_FLAGS_MASK);
	DESC_ENC(desc, opaque, HEADER_OPAQUE_SHIFT, HEADER_OPAQUE_MASK);

	return desc;
}

static void flexrm_enqueue_desc(u32 nhpos, u32 nhcnt, u32 reqid,
				 u64 desc, void **desc_ptr, u32 *toggle,
				 void *start_desc, void *end_desc)
{
	u64 d;
	u32 nhavail, _toggle, _startpkt, _endpkt, _bdcount;

	/* Sanity check */
	if (nhcnt <= nhpos)
		return;

	/*
	 * Each request or packet start with a HEADER descriptor followed
	 * by one or more non-HEADER descriptors (SRC, SRCT, MSRC, DST,
	 * DSTT, MDST, IMM, and IMMT). The number of non-HEADER descriptors
	 * following a HEADER descriptor is represented by BDCOUNT field
	 * of HEADER descriptor. The max value of BDCOUNT field is 31 which
	 * means we can only have 31 non-HEADER descriptors following one
	 * HEADER descriptor.
	 *
	 * In general use, number of non-HEADER descriptors can easily go
	 * beyond 31. To tackle this situation, we have packet (or request)
	 * extenstion bits (STARTPKT and ENDPKT) in the HEADER descriptor.
	 *
	 * To use packet extension, the first HEADER descriptor of request
	 * (or packet) will have STARTPKT=1 and ENDPKT=0. The intermediate
	 * HEADER descriptors will have STARTPKT=0 and ENDPKT=0. The last
	 * HEADER descriptor will have STARTPKT=0 and ENDPKT=1. Also, the
	 * TOGGLE bit of the first HEADER will be set to invalid state to
	 * ensure that FlexRM does not start fetching descriptors till all
	 * descriptors are enqueued. The user of this function will flip
	 * the TOGGLE bit of first HEADER after all descriptors are
	 * enqueued.
	 */

	if ((nhpos % HEADER_BDCOUNT_MAX == 0) && (nhcnt - nhpos)) {
		/* Prepare the header descriptor */
		nhavail = (nhcnt - nhpos);
#ifndef DOORBELL_MODE
		_toggle = (nhpos == 0) ? !(*toggle) : (*toggle);
#endif
		_startpkt = (nhpos == 0) ? 0x1 : 0x0;
		_endpkt = (nhavail <= HEADER_BDCOUNT_MAX) ? 0x1 : 0x0;
		_bdcount = (nhavail <= HEADER_BDCOUNT_MAX) ?
				nhavail : HEADER_BDCOUNT_MAX;
		if (nhavail <= HEADER_BDCOUNT_MAX)
			_bdcount = nhavail;
		else
			_bdcount = HEADER_BDCOUNT_MAX;
		d = flexrm_header_desc(_toggle, _startpkt, _endpkt,
					_bdcount, 0x0, reqid);

		/* Write header descriptor */
		flexrm_write_desc(*desc_ptr, d);

		/* Point to next descriptor */
		*desc_ptr += sizeof(desc);
		if (*desc_ptr == end_desc) {
			*desc_ptr = start_desc;
#ifndef FLEXRM_EXTENDED_RING
			*toggle = (*toggle) ? 0 : 1;
#endif
                }

#ifdef FLEXRM_EXTENDED_RING
		/* Skip next pointer descriptors */
		while (flexrm_is_next_table_desc(*desc_ptr)) {
#ifndef DOORBELL_MODE
			*toggle = (*toggle) ? 0 : 1;
#endif
			*desc_ptr += sizeof(desc);
			if (*desc_ptr == end_desc)
				*desc_ptr = start_desc;
		}
#endif
	}

	/* Write desired descriptor */
	flexrm_write_desc(*desc_ptr, desc);

	/* Point to next descriptor */
	*desc_ptr += sizeof(desc);
	if (*desc_ptr == end_desc) {
		*desc_ptr = start_desc;
#ifndef FLEXRM_EXTENDED_RING
		*toggle = (*toggle) ? 0 : 1;
#endif
        }

#ifdef FLEXRM_EXTENDED_RING
	/* Skip next pointer descriptors */
	while (flexrm_is_next_table_desc(*desc_ptr)) {
#ifndef DOORBELL_MODE
		*toggle = (*toggle) ? 0 : 1;
#endif
		*desc_ptr += sizeof(desc);
		if (*desc_ptr == end_desc)
			*desc_ptr = start_desc;
	}
#endif
}

static u64 flexrm_src_desc(dma_addr_t addr, unsigned int length)
{
	u64 desc = 0;

	DESC_ENC(desc, SRC_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
	DESC_ENC(desc, length, SRC_LENGTH_SHIFT, SRC_LENGTH_MASK);
	DESC_ENC(desc, addr, SRC_ADDR_SHIFT, SRC_ADDR_MASK);

	return desc;
}

static u64 flexrm_msrc_desc(dma_addr_t addr, unsigned int length_div_16)
{
	u64 desc = 0;

	DESC_ENC(desc, MSRC_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
	DESC_ENC(desc, length_div_16, MSRC_LENGTH_SHIFT, MSRC_LENGTH_MASK);
	DESC_ENC(desc, addr, MSRC_ADDR_SHIFT, MSRC_ADDR_MASK);

	return desc;
}

static u64 flexrm_dst_desc(dma_addr_t addr, unsigned int length)
{
	u64 desc = 0;

	DESC_ENC(desc, DST_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
	DESC_ENC(desc, length, DST_LENGTH_SHIFT, DST_LENGTH_MASK);
	DESC_ENC(desc, addr, DST_ADDR_SHIFT, DST_ADDR_MASK);

	return desc;
}

static u64 flexrm_mdst_desc(dma_addr_t addr, unsigned int length_div_16)
{
	u64 desc = 0;

	DESC_ENC(desc, MDST_TYPE, DESC_TYPE_SHIFT, DESC_TYPE_MASK);
	DESC_ENC(desc, length_div_16, MDST_LENGTH_SHIFT, MDST_LENGTH_MASK);
	DESC_ENC(desc, addr, MDST_ADDR_SHIFT, MDST_ADDR_MASK);

	return desc;
}

#if defined (FLEXRM_OFFLOAD) && !defined(SPU_RESP_ON_RUNNER)
static dma_addr_t flexrm_data_desc_to_addr(u64 desc)
{
	return (dma_addr_t)(desc & DST_ADDR_MASK);
}

static u32 flexrm_data_desc_to_len(u64 desc)
{
	return DESC_DEC(desc, DST_LENGTH_SHIFT, DST_LENGTH_MASK);
}
#endif

static bool flexrm_sanity_check(struct bcmspu_message *msg)
{
	struct scatterlist *sg;

	if (!msg || !msg->src || !msg->dst)
		return false;
	for (sg = msg->src; sg; sg = sg_next(sg)) {
		if (sg->length & 0xf) {
			if (sg->length > SRC_LENGTH_MASK)
				return false;
		} else {
			if (sg->length > (MSRC_LENGTH_MASK * 16))
				return false;
		}
	}
	for (sg = msg->dst; sg; sg = sg_next(sg)) {
		if (sg->length & 0xf) {
			if (sg->length > DST_LENGTH_MASK)
				return false;
		} else {
			if (sg->length > (MDST_LENGTH_MASK * 16))
				return false;
		}
	}

	return true;
}

static u32 flexrm_estimate_nonheader_desc_count(struct bcmspu_message *msg)
{
	u32 cnt = 0;
	unsigned int dst_target = 0;
	struct scatterlist *src_sg, *dst_sg;

	if (msg) {
		src_sg = msg->src;
		dst_sg = msg->dst;
		while (src_sg || dst_sg) {
			if (src_sg) {
				cnt++;
				dst_target = src_sg->length;
				src_sg = sg_next(src_sg);
			} else
				dst_target = UINT_MAX;

			while (dst_target && dst_sg) {
				cnt++;
				if (dst_sg->length < dst_target)
					dst_target -= dst_sg->length;
				else
					dst_target = 0;
				dst_sg = sg_next(dst_sg);
			}
		}
	}
	return cnt;
}

static void *flexrm_write_descs(struct bcmspu_message *msg, u32 nhcnt, u32 pcnt,
				     u32 reqid, void *desc_ptr, u32 toggle,
				     void *start_desc, void *end_desc)
{
	u64 d;
	u32 nhpos = 0;
	unsigned int dst_target = 0;
	struct scatterlist *src_sg, *dst_sg;

	if (!msg || !desc_ptr || !start_desc || !end_desc)
		return ERR_PTR(-ENOTSUPP);

	if ((desc_ptr < start_desc) || (end_desc <= desc_ptr))
		return ERR_PTR(-ERANGE);

	src_sg = msg->src;
	dst_sg = msg->dst;
	while (src_sg || dst_sg) {
		if (src_sg) {
			if (sg_dma_len(src_sg) & 0xf)
				d = flexrm_src_desc(sg_dma_address(src_sg),
						     sg_dma_len(src_sg));
			else
				d = flexrm_msrc_desc(sg_dma_address(src_sg),
						      sg_dma_len(src_sg)/16);
			flexrm_enqueue_desc(nhpos, nhcnt, reqid,
					     d, &desc_ptr, &toggle,
					     start_desc, end_desc);
			nhpos++;
			dst_target = sg_dma_len(src_sg);
			src_sg = sg_next(src_sg);
		} else
			dst_target = UINT_MAX;
#ifndef DOORBELL_MODE
		/* patch null descriptor(s) between src and dst descriptors */
		d = flexrm_null_desc(toggle);
		while (pcnt) {
			flexrm_enqueue_desc(nhpos, nhcnt, reqid,
					     d, &desc_ptr, &toggle,
					     start_desc, end_desc);
			nhpos++;
			pcnt--;
		}
#endif
		while (dst_target && dst_sg) {
			if (sg_dma_len(dst_sg) & 0xf)
				d = flexrm_dst_desc(sg_dma_address(dst_sg),
						     sg_dma_len(dst_sg));
			else
				d = flexrm_mdst_desc(sg_dma_address(dst_sg),
						      sg_dma_len(dst_sg)/16);
			flexrm_enqueue_desc(nhpos, nhcnt, reqid,
					     d, &desc_ptr, &toggle,
					     start_desc, end_desc);
			nhpos++;
			if (sg_dma_len(dst_sg) < dst_target)
				dst_target -= sg_dma_len(dst_sg);
			else
				dst_target = 0;
			dst_sg = sg_next(dst_sg);
		}
	}

	return desc_ptr;
}

u32 flexrm_ops_in_transit(int chan)
{
	struct flexrm_ring *ring = &flexrm_g->rings[chan];
#if defined (FLEXRM_OFFLOAD)
	if (ring->ring_config & OFFLOAD_RESERVED)
	{
		/* if this is the offload ring, just assume there are packets to handle */
		return 1;
	}
	else
#endif
	{
		return (u32)atomic_read(&ring->msg_send_count) - (u32)atomic_read(&ring->msg_cmpl_count);
	}
}
EXPORT_SYMBOL(flexrm_ops_in_transit);

/* ====== FlexRM Debugfs callbacks ====== */
/**
 * @brief 
 * @note must be disabled while SPU is off
 * @param file 
 * @param offset 
 * @return int 
 */
static int flexrm_debugfs_conf_show(struct seq_file *file, void *offset)
{
	/* Write config in file */
	int i;
	const char *state;
	struct flexrm_ring *ring;

	seq_printf(file, "%-5s %-9s %-18s %-10s %-18s %-10s\n",
		   "Ring#", "State", "BD_Addr", "BD_Size",
		   "Cmpl_Addr", "Cmpl_Size");

	for (i = 0; i < flexrm_g->num_rings; i++) {
		ring = &flexrm_g->rings[i];
		if ((ring->regs) && /* preventing crash when SPU is off */
		    (readl(ring->regs + RING_CONTROL) & BIT(CONTROL_ACTIVE_SHIFT)))
			state = "active";
		else
			state = "inactive";
		seq_printf(file,
			   "%-5d %-9s 0x%016llx 0x%08x 0x%016llx 0x%08x\n",
			   ring->num, state,
			   (unsigned long long)ring->bd_dma_base,
			   (u32)RING_BD_SIZE,
			   (unsigned long long)ring->cmpl_dma_base,
			   (u32)RING_CMPL_SIZE);
	}
	return 0;
}
/**
 * @brief 
 * @note should be desabled while SPU is off
 * @param file 
 * @param offset 
 * @return int 
 */
static int flexrm_debugfs_stats_show(struct seq_file *file, void *offset)
{
	/* Write stats in file */
	int i, j;
	u32 val, bd_read_offset;
	struct flexrm_ring *ring;
	u32 sent, compl, bd_write;

	seq_printf(file, "%-5s %-18s %-10s %-10s %-10s %-10s %-10s %-11s %-11s %-11s %-11s %-11s",
		   "Ring#", "BD_DMA_BASE", "BD_Read", "BD_Read_SW", "BD_Write",
		   "Cmpl_Read", "Cmpl_Write", "Submitted", "Completed", "InTransit", "IRQ", "Batchmark");
	for (j = 0; j < AE_MAX_COUNT; j++) {
		seq_printf(file, " AE[%d]      ", j);
	}
	seq_printf(file, "\n");

	for (i = 0; i < flexrm_g->num_rings; i++) {

		bd_write = 0;
		ring = &flexrm_g->rings[i];
		if (ring->regs) {

			bd_read_offset = readl_relaxed(ring->regs + RING_BD_READ_PTR);
			val = readl_relaxed(ring->regs + RING_BD_START_ADDR);
			bd_read_offset *= RING_DESC_SIZE;
			bd_read_offset += (u32)(BD_START_ADDR_DECODE(val) -
						ring->bd_dma_base);

			bd_write = readl_relaxed(ring->regs + RING_CMPL_WRITE_PTR) * RING_DESC_SIZE;
		}
		sent = (u32)atomic_read(&ring->msg_send_count);
#if defined (FLEXRM_OFFLOAD)
		/* work around for good looking stats:
		 * requests are submitted by Runner so assuming nothing is in transit */
		if (ring->ring_config & OFFLOAD_RESERVED)
			sent = (u32)atomic_read(&ring->msg_cmpl_count);
#endif
		compl = (u32)atomic_read(&ring->msg_cmpl_count);
		seq_printf(file, "%-5d 0x%px 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x %-11d %-11d %-11d %-11d %-11d",
			   ring->num, ring->bd_base,
			   (u32)bd_read_offset,
			   (u32)ring->bd_read_offset,
			   (u32)ring->bd_write_offset,
			   (u32)ring->cmpl_read_offset,
			   bd_write,
			   sent, compl, sent - compl,
			   (u32)atomic_read(&ring->irq_count),
			   (u32)atomic_read(&ring->batch_watermark));
		for (j = 0; j < AE_MAX_COUNT; j++) {
			seq_printf(file, " %-11d",
			   (u32)atomic_read(&ring->ae_cmpl_count[j]));

		}
		seq_printf(file, "\n");
	}
	return 0;
}

/* ====== FlexRM interrupt handler ===== */

static irqreturn_t flexrm_irq_event(int irq, void *dev)
{
	struct flexrm_ring *ring = (struct flexrm_ring*) dev;

#ifdef CONFIG_BCM_FLEXRM_V2_IRQ
	writel_relaxed(BIT(ring->num), flexrm_g->regs + CPUIF_MASKCLR);
#else
	disable_irq_nosync(ring->irq);
#endif
	writel_relaxed(BIT(ring->num), flexrm_g->regs + CPUIF_CPUIRQCLR);
	atomic_inc(&ring->irq_count);
	return IRQ_WAKE_THREAD;
}

#if defined (FLEXRM_OFFLOAD)
#if !defined(SPU_RESP_ON_RUNNER)
/* This following function call is for debugging purpose */
static int flexrm_offload_ring_response(struct flexrm_ring *ring, u32 reqid, u64 comp_desc)
{
	struct bcmspu_offload_resp resp_info;
	int err;
	u32 ring_rd_idx, ring_read_offset;
	u64 desc;

	/* use of 7 descriptors per offloaded request is fixed as follows:
	 *	0. header pd with context id and buffer information
	 *	1. src request header
	 *	2. key buffer
	 *	3. DS: dest header and assoc data, US: src assoc
	 *	4. dest data (decrypt / encrypt in place)
	 *	5. DS: src associate data + source data, US: src data
	 *	6. dest digest and status
	 */
	ring_rd_idx = *ring->rd_idx_p;
	ring_read_offset = ring_rd_idx * RING_DESC_SIZE;

	/* get the reserved info regarding session id and fpm info */
	desc = flexrm_read_desc((void *)(ring->bd_base + ring_read_offset + 0*RING_DESC_SIZE));
	resp_info.session_buff_info = be32_to_cpu((uint32_t)desc);

	/* buffer used by the src request header is the buffer that needs to be recycled */
	desc = flexrm_read_desc((void *)(ring->bd_base + ring_read_offset + 1*RING_DESC_SIZE));
	resp_info.bufp = phys_to_virt(flexrm_data_desc_to_addr(desc));

	desc = flexrm_read_desc((void *)(ring->bd_base + ring_read_offset + 4*RING_DESC_SIZE));
	resp_info.data = phys_to_virt(flexrm_data_desc_to_addr(desc));
	resp_info.data_len = flexrm_data_desc_to_len(desc);

	desc = flexrm_read_desc((void *)(ring->bd_base + ring_read_offset + 6*RING_DESC_SIZE));
	resp_info.dest_digest = phys_to_virt(flexrm_data_desc_to_addr(desc));
	resp_info.digest_len = flexrm_data_desc_to_len(desc);

	err = spu_offload_callback(&resp_info);

	if (err) {
		dev_warn(flexrm_g->dev,
			"ring%d offload response callback error %d comp_desc 0x%lx\n",
			ring->num, err, (unsigned long)comp_desc);
	}

	ring_rd_idx += RING_OFFLOAD_BD_PER_REQ;
	if (ring_rd_idx == (RING_OFFLOAD_NUM_BD-1))
		ring_rd_idx = 0;
	*ring->rd_idx_p = ring_rd_idx;
	return err;
}
#else
/* when SPU offload response is handled on Runner, this function should not be called */
static int flexrm_offload_ring_response(struct flexrm_ring *ring, u32 reqid, u64 comp_desc) { return -1; } 
#endif //SPU_RESP_ON_RUNNER
#endif //FLEXRM_OFFLOAD

static int flexrm_ring_response (struct flexrm_ring *ring, u32 reqid, u64 comp_desc)
{
	struct bcmspu_message *msg = NULL;
	int err;

	/* Determine message pointer based on reqid */
	msg = ring->requests[reqid];

	if (!msg) {
		dev_warn(flexrm_g->dev,
		"ring%d null msg pointer for completion desc=0x%lx\n",
		ring->num, (unsigned long)comp_desc);
		return -1;
	}

	/* Release reqid for recycling */
	ring->requests[reqid] = NULL;
	spin_lock_bh(&ring->bd_lock);
	ring->bd_read_offset = (unsigned long)(msg->next_ptr - ring->bd_base);
	ring->req_in_transit--;
	spin_unlock_bh(&ring->bd_lock);

	/* Give-back message to client */
	msg->error = err;
	msg->rx_callback(msg);

	return 0;
}

static irqreturn_t flexrm_irq_thread(int irq, void *dev)
{
	u64 desc;
	int err, count = 0;
	struct flexrm_ring *ring = (struct flexrm_ring*) dev;
	u32 reqid, aeid, cmpl_read_offset, cmpl_write_offset;

	/* For each completed request notify clients */
	reqid = 0;
	while ((count < FLEXRM_RX_BUDGET) && flexrm_ops_in_transit(ring->num))
	{
		spin_lock(&ring->lock);

		/*
		 * Get current completion read and write offset
		 *
		 * Note: We should read completion write pointer atleast once
		 * after we get a MSI interrupt because HW maintains internal
		 * MSI status which will allow next MSI interrupt only after
		 * completion write pointer is read.
		 */
		cmpl_write_offset = readl_relaxed(ring->regs + RING_CMPL_WRITE_PTR);
		cmpl_write_offset *= RING_DESC_SIZE;
		cmpl_read_offset = ring->cmpl_read_offset;
		ring->cmpl_read_offset = cmpl_write_offset;

		spin_unlock(&ring->lock);

		if (cmpl_read_offset == cmpl_write_offset)
			break;

		while (cmpl_read_offset != cmpl_write_offset) {
			/* Dequeue next completion descriptor */
			desc = *((u64 *)(ring->cmpl_base + cmpl_read_offset));

			/* Next read offset */
			cmpl_read_offset += RING_DESC_SIZE;
			if (cmpl_read_offset == RING_CMPL_SIZE)
				cmpl_read_offset = 0;

			/* Decode error from completion descriptor */
			err = flexrm_cmpl_desc_to_error(desc);
			if (err < 0) {
				dev_warn(flexrm_g->dev,
				"ring%d got completion desc=0x%lx with error %d\n",
				ring->num, (unsigned long)desc, err);
				continue;
			}

			/* Determine request id and AE id from completion descriptor */
			reqid = flexrm_cmpl_desc_to_reqid(desc);
			aeid = flexrm_cmpl_desc_to_aeid(desc);
			atomic_inc(&ring->ae_cmpl_count[aeid]);

#if defined(FLEXRM_OFFLOAD)
			if (ring->ring_config & OFFLOAD_RESERVED)
			{
				err = flexrm_offload_ring_response(ring, reqid, desc);
			}
			else
#endif
				err = flexrm_ring_response (ring, reqid, desc);

			if (err < 0)
				continue; /* break the loop upon detection of errors */

			/* Increment number of completions processed */
			atomic_inc_return(&ring->msg_cmpl_count);
			count++;
		}
	}

	if (atomic_read(&ring->batch_watermark) < count)
		atomic_set(&ring->batch_watermark, count);

#ifdef CONFIG_BCM_FLEXRM_V2_IRQ
	writel_relaxed(BIT(ring->num), flexrm_g->regs + CPUIF_MASKSET);
#else
	enable_irq(ring->irq);
#endif

	return IRQ_HANDLED;
}

int flexrm_select_channel(void)
{
	int num_rings = flexrm_g->num_rings - NUM_OFFLOAD_RESERVED;
	return (atomic_inc_return(&flexrm_g->next_chan)) % num_rings;
}
EXPORT_SYMBOL(flexrm_select_channel);

int flexrm_get_max_channel(void)
{
	return flexrm_g->num_rings - NUM_OFFLOAD_RESERVED;
}
EXPORT_SYMBOL(flexrm_get_max_channel);

/* ====== FlexRM callbacks ===== */

int flexrm_send_data(int chan, struct bcmspu_message *msg)
{
	struct flexrm_ring *ring = &flexrm_g->rings[chan];
	void *next;
	u32 count, nhcnt, pcnt, write_offset;
	bool exit_cleanup = false;
	int ret = 0, reqid;
	struct bcmspu_message *first_msg = msg;
	u32 i, msg_cnt = 1, toggle;

	if (msg->type == BRCM_MESSAGE_BATCH ||
	    msg->type == BRCM_MESSAGE_BATCH_PREP_ONLY) {
		msg_cnt = msg->batch_count;
	} else if (msg->type == BRCM_MESSAGE_BATCH_TOGGLE_ONLY) {
		msg_cnt = 0;
	}

	spin_lock_bh(&ring->bd_lock);
	for (i = 0; i < msg_cnt; i++) {
		exit_cleanup = false;
		pcnt = 0;
#ifdef FLEXRM_EXTENDED_RING
		toggle = RING_BD_TOGGLE_VALID(ring->bd_write_offset);
#else
		toggle = ring->toggle;
#endif
		msg->desc_ptr = ring->bd_base + ring->bd_write_offset;

		/* Do sanity check on message */
		if (!flexrm_sanity_check(msg)) {
			spin_unlock_bh(&ring->bd_lock);
			return -EIO;
		}
		msg->error = 0;

		/* If no requests possible then save data pointer and goto done. */
		if (ring->req_in_transit > RING_MAX_REQ_COUNT)
			reqid = -1;
		else {
			reqid = (int)(ring->reqid & (RING_MAX_REQ_COUNT-1));
			ring->reqid++;
			ring->req_in_transit++;
		}
		if (reqid < 0) {
			spin_unlock_bh(&ring->bd_lock);
			return -ENOSPC;
		}
		ring->requests[reqid] = msg;

		/*
		 * Number required descriptors = number of non-header descriptors +
		 *				 number of header descriptors +
		 *				 1x null descriptor
		 */
		nhcnt = flexrm_estimate_nonheader_desc_count(msg);
		count = flexrm_estimate_header_desc_count(nhcnt) + nhcnt + 1;

#ifndef DOORBELL_MODE
		/* determine number of additional null descriptors needed to
		   ensure that each crypto request is cache aligned */
		if ((count * RING_DESC_SIZE) % L1_CACHE_BYTES)
			pcnt = (L1_CACHE_BYTES/RING_DESC_SIZE) -
				(((count * RING_DESC_SIZE) % L1_CACHE_BYTES) / RING_DESC_SIZE) + 1;
		count += pcnt;
#endif

		/* Check for available descriptor space. */
		write_offset = ring->bd_write_offset;
		while (count) {
#ifdef FLEXRM_EXTENDED_RING
			if (!flexrm_is_next_table_desc(ring->bd_base + write_offset))
				count--;
			else {
#ifndef DOORBELL_MODE
				/* adjust the padding null descriptor count if
				   a next pointer descriptor is hit */
				if (pcnt)
					pcnt--;
				else {
					pcnt = L1_CACHE_BYTES / RING_DESC_SIZE;
					count += pcnt;
				}
#endif
			}
#endif
			write_offset += RING_DESC_SIZE;
			if (write_offset == RING_BD_SIZE)
				write_offset = 0x0;
			if (write_offset == ring->bd_read_offset)
				break;
#ifndef FLEXRM_EXTENDED_RING
			count--;
#endif
		}
		if (count) {
			ret = -ENOSPC;
			exit_cleanup = true;
			goto exit;
		}

		/* Write descriptors to ring */
		next = flexrm_write_descs(msg, nhcnt + pcnt, pcnt, reqid, msg->desc_ptr,
				toggle,
				ring->bd_base, ring->bd_base + RING_BD_SIZE);
		if (IS_ERR(next)) {
			ret = -PTR_ERR(next);
			exit_cleanup = true;
			goto exit;
		}
		msg->next_ptr = next;

#ifndef DOORBELL_MODE
		/* Null descriptor with invalid toggle bit */
		flexrm_write_desc(next, flexrm_null_desc(!toggle));
		/* Flip header's toggle bit except for the first packet.
		   The toggle bit of the first pakcet is flipped AFTER the rest of
		   the packets were queued for the best raw performance */
		if (i)
			flexrm_flip_header_toggle(msg->desc_ptr);
#endif
		/* Save ring BD write offset */
#ifndef FLEXRM_EXTENDED_RING
		if (next < msg->desc_ptr)
			change_bit(0, &ring->toggle);
#endif
		ring->bd_write_offset = (unsigned long)(next - ring->bd_base);

		/* Increment number of messages sent */
		atomic_inc_return(&ring->msg_send_count);

exit:
		/* Update error status in message */
		msg->error = ret;

		if (ret && msg == first_msg)
			first_msg = NULL;

		/* Cleanup if we failed */
		if (exit_cleanup) {
			ring->requests[reqid] = NULL;
			ring->req_in_transit--;
			ring->reqid--;
			break;
		}

		msg++;
	}

	/* Ensure that descriptors have been written to memory */
	wmb();

	if (first_msg && first_msg->type != BRCM_MESSAGE_BATCH_PREP_ONLY) {
#ifdef DOORBELL_MODE
		int wr_ptr_offset = ((ring->bd_write_offset / RING_DESC_SIZE) %
					RING_MAX_REQ_COUNT);
		writel_relaxed(wr_ptr_offset, ring->regs + RING_BD_WRITE_PTR);
#else
		/* Flip toggle bit in header */
		flexrm_flip_header_toggle(first_msg->desc_ptr);
#endif
	}
	spin_unlock_bh(&ring->bd_lock);
	return ret;
}
EXPORT_SYMBOL(flexrm_send_data);

#if defined(FLEXRM_OFFLOAD)
static int flexrm_offload_prefill_resp_bds (struct flexrm_ring *ring)
{
	int i;
	u64 d;
	u32 off;

	if (!ring->resp_base) {
		/* channel reserved for runner offloading */
		ring->resp_base = dma_alloc_coherent(flexrm_g->dev, RING_OFFLOAD_MAX_REQ * MEM_OFFLOAD_RESPONSE + STATE_MEMORY_SHARED,
							&ring->resp_dma_base, GFP_KERNEL);
	}
	if (!ring->resp_base) {
		dev_err(flexrm_g->dev, "can't allocate response data memory for ring%d\n",
			ring->num);
		return -ENOMEM;
	}
	/* ring read index is after the response memory */
	ring->rd_idx_p = (u32 *)(ring->resp_base + RING_OFFLOAD_MAX_REQ * MEM_OFFLOAD_RESPONSE);

	/* use of 7 descriptors per offloaded request is fixed as follows:
	 *	0. header pd with context id and buffer information
	 *	1. src request header
	 *	2. key buffer
	 *	3. DS: dest header and assoc data, US: src assoc
	 *	4. dest data (decrypt / encrypt in place)
	 *	5. DS: src associate data + source data, US: src data
	 *	6. dest digest and status
	 */
	/* fill in host allocated response buffer addresses in each request */
	for (i = 0; i < RING_OFFLOAD_MAX_REQ; i++) {
		off = (i*RING_OFFLOAD_BD_PER_REQ + 0)* RING_DESC_SIZE;
		flexrm_write_desc(ring->bd_base + off, 0xFFFFFFFF);
		/* PD 6: dest digest and status (32 + 2 bytes) */
		off = (i*RING_OFFLOAD_BD_PER_REQ + 6)* RING_DESC_SIZE;
		d = flexrm_dst_desc(ring->resp_dma_base + (i*MEM_OFFLOAD_RESPONSE), 34);
		flexrm_write_desc(ring->bd_base + off, d);
	}
	/* take the last PD in the ring as reserved */
	d = flexrm_dst_desc(ring->resp_dma_base, 0);
	off = (RING_OFFLOAD_NUM_BD - 1) * RING_DESC_SIZE;
	flexrm_write_desc(ring->bd_base + off, d);

	return 0;
}
#endif

static int flexrm_ring_initialize_bd(int chan)
{
	int ret = 0;
	u64 d;
	u32 off, ring_size;
	struct flexrm_ring *ring = &flexrm_g->rings[chan];

	ring_size = RING_BD_SIZE;

#if defined(FLEXRM_OFFLOAD)
	if (ring->ring_config & OFFLOAD_RESERVED)
		ring_size = RING_OFFLOAD_BD_SIZE;
#endif

	/* Configure next table pointer entries in BD memory */
	for (off = 0; off < ring_size; off += RING_DESC_SIZE) {
#ifdef FLEXRM_EXTENDED_RING
		dma_addr_t next_addr = off + RING_DESC_SIZE;
		if (next_addr == ring_size)
			next_addr = 0;
		next_addr += ring->bd_dma_base;
		if (RING_BD_ALIGN_CHECK(next_addr))
			d = flexrm_next_table_desc(RING_BD_TOGGLE_VALID(off),
						    next_addr);
		else
			d = flexrm_null_desc(RING_BD_TOGGLE_INVALID(off));
#else
		d = flexrm_null_desc(0);
#endif
		flexrm_write_desc(ring->bd_base + off, d);
	}

#if defined(FLEXRM_OFFLOAD)
	if (ring->ring_config & OFFLOAD_RESERVED)
		ret = flexrm_offload_prefill_resp_bds(ring);
#endif
	return ret;
}

static int flexrm_ring_startup(int chan)
{
	u32 val, i, cpumask;
	int ret = 0;
	struct flexrm_ring *ring = &flexrm_g->rings[chan];

	/* Initialize members of driver ring structs */
	ring->num = chan;
	ring->regs = flexrm_g->regs + (RING_REGS_SIZE * chan);
	ring->irq_requested = false;
	ring->msi_timer_val = 0xff00;
	ring->msi_count_threshold = 0x1;
	memset(ring->requests, 0, sizeof(ring->requests));
	ring->bd_base = NULL;
	ring->bd_dma_base = 0;
	ring->cmpl_base = NULL;
	ring->cmpl_dma_base = 0;
	ring->resp_base = NULL;
	ring->resp_dma_base = 0;
	atomic_set(&ring->irq_count, 0);
	atomic_set(&ring->batch_watermark, 0);
	atomic_set(&ring->msg_send_count, 0);
	atomic_set(&ring->msg_cmpl_count, 0);
#ifndef FLEXRM_EXTENDED_RING
	ring->toggle = 1;
#endif
	spin_lock_init(&ring->lock);
	ring->reqid = 0;
	ring->req_in_transit = 0;
	ring->cmpl_read_offset = 0;

	/* assign an unique thread name to each ring */
	if ((!ring->name) && 
	    (ring->name = kzalloc(strlen(FLEXRM_MODNAME) + 3, GFP_ATOMIC)) == NULL) {
		dev_err(flexrm_g->dev,
			"can't allocate memory for naming ring%d\n",
			ring->num);
		return -ENOMEM;
	}
	sprintf(ring->name, "%s-%d", FLEXRM_MODNAME, ring->num);

	/* Allocate BD memory */
	if (!ring->bd_base) {
		ring->bd_base = dma_pool_alloc(flexrm_g->bd_pool,
						GFP_KERNEL, &ring->bd_dma_base);
	}
	if (!ring->bd_base) {
		dev_err(flexrm_g->dev,
			"can't allocate BD memory for ring%d\n",
			ring->num);
		ret = -ENOMEM;
		goto fail;
	}

	if (flexrm_ring_initialize_bd(chan)) {
		ret = -ENOMEM;
		goto fail_free_bd_memory;
	}

	/* Allocate completion memory */
	if (!ring->cmpl_base) {
		ring->cmpl_base = dma_pool_zalloc(flexrm_g->cmpl_pool,
						GFP_KERNEL, &ring->cmpl_dma_base);
	}
	if (!ring->cmpl_base) {
		dev_err(flexrm_g->dev,
			"can't allocate completion memory for ring%d\n",
			ring->num);
		ret = -ENOMEM;
		goto fail_free_resp_memory;
	}

#if defined (FLEXRM_OFFLOAD)
	/* Request IRQ for non offload reserved rings */
	if ((ring->ring_config & OFFLOAD_RESERVED) &&
	    (ring->ring_config & RESP_OFFLOAD))
		goto done_host_irq;
#endif

	ring->irq = irq_of_parse_and_map(flexrm_g->dev->of_node, chan);

	ret = request_threaded_irq(ring->irq, flexrm_irq_event,
				flexrm_irq_thread, 0, ring->name, ring);
	if (ret) {
		dev_err(flexrm_g->dev,
			"failed to request IRQ# %d for ring #%d\n", ring->irq, ring->num);
		goto fail_free_cmpl_memory;
	} 
	ring->irq_requested = true;

	/* Set IRQ affinity hint */
#if defined(CONFIG_BRCM_IKOS)
	cpumask = (ring->num % num_online_cpus());
#else
	/* since bcmsw_rx is bound to CPU0, hint ring0->CPU1, ring1->CPU2, etc.*/
	cpumask = (ring->num % (num_online_cpus() - 1)) + 1;
#endif
	cpumask_set_cpu(cpumask, &ring->irq_aff_hint);
	ret = irq_set_affinity_hint(ring->irq, &ring->irq_aff_hint);
	if (ret) {
		dev_err(flexrm_g->dev,
			"failed to set IRQ affinity hint for ring%d\n",
			ring->num);
		goto fail_free_irq;
	} 
#ifdef CONFIG_BCM_FLEXRM_V2_IRQ
	writel_relaxed(BIT(chan), flexrm_g->regs + CPUIF_MASKSET);
#else
	/* use interrupt mode instead of MSI mode */
	val = readl_relaxed(flexrm_g->regs + CPUIF_MASK);
	val |= BIT(chan);
	writel_relaxed(val, flexrm_g->regs + CPUIF_MASK);
#endif

#if defined (FLEXRM_OFFLOAD)
done_host_irq:
#endif
	/* Make all rings non-secured */
	val = readl_relaxed(flexrm_g->regs + COMM_RM_RING_SECURITY_SETTING);
	val |= BIT(chan);
	writel_relaxed(val, flexrm_g->regs + COMM_RM_RING_SECURITY_SETTING);

	/* Set start stream-id for rings */
	/* RM_SSID_CONTROL - default is good */

	/* Configure AXI ID for each ring */

	/* Configure MSI And AXI ID for each ring */
	writel_relaxed(0x00004100, flexrm_g->regs + COMM_RINGx_RING_MSI_DEVICE_ID(chan));

	val = chan << COMM_RINGx_RM_RING_COMMON_CONTROL__AXI_ID_SHIFT;
	writel_relaxed(val, flexrm_g->regs + COMM_RINGx_RM_RING_COMMON_CONTROL(chan));

	/* Ring Control and MSI configuration starts here */

	/* Disable/inactivate ring */
	writel_relaxed(0x0, ring->regs + RING_CONTROL);

#if defined(FLEXRM_OFFLOAD)
	/* program reserved ring information on Runner */
	if (ring->ring_config & OFFLOAD_RESERVED) {
		rdpa_spu_pd_ring_info_t info = {};

		info.bd_base = ring->bd_dma_base;
		info.cmpl_base = ring->cmpl_dma_base;
		info.rd_idx_ddr_addr = ring->resp_dma_base + RING_OFFLOAD_MAX_REQ * MEM_OFFLOAD_RESPONSE;
		info.doorbell_reg = (uint32_t)(flexrm_g->phyaddr_base + (RING_REGS_SIZE * chan) + RING_BD_WRITE_PTR);
		info.cmpl_wr_ptr_reg = (uint32_t)(flexrm_g->phyaddr_base + (RING_REGS_SIZE * chan) + RING_CMPL_WRITE_PTR);

		rdpa_spu_set_pd_ring(&info);
	}
	/* Configure MSI address/data/control */
	if ((ring->ring_config & OFFLOAD_RESERVED) &&
	    (ring->ring_config & RESP_OFFLOAD)) 
	{
		rdpa_spu_resp_wakeup_info_t wakeup_info;
		uint64_t reg_addr;
		/* use MSI mode for offloading ring */
		val = BIT(chan);
		writel_relaxed(val, flexrm_g->regs + CPUIF_MASKCLR);
		if (rdpa_spu_resp_wakeup_information_get(&wakeup_info))
		{
			reg_addr = (uint64_t)wakeup_info.wakeup_register;
			/* ring reserved for offloading will wakeup an XRDP task instead of the ARM */
			writel_relaxed((uint32_t)reg_addr, ring->regs + RING_MSI_ADDR_LS);
			writel_relaxed((uint32_t)(reg_addr >> 32), ring->regs + RING_MSI_ADDR_MS);
			writel_relaxed(wakeup_info.wakeup_value, ring->regs + RING_MSI_DATA_VALUE);
		}
	}
	else
#endif
	{
		writel_relaxed(flexrm_g->phyaddr_base + RMIF_IRQSET, ring->regs + RING_MSI_ADDR_LS);
		writel_relaxed(0          , ring->regs + RING_MSI_ADDR_MS);
		writel_relaxed(BIT(chan)  , ring->regs + RING_MSI_DATA_VALUE);
	}
	val = (ring->msi_timer_val << MSI_TIMER_VAL_SHIFT);
	val |= BIT(MSI_ENABLE_SHIFT);
	val |= (ring->msi_count_threshold & MSI_COUNT_MASK) << MSI_COUNT_SHIFT;
	writel_relaxed(val, ring->regs + RING_MSI_CONTROL); // RING_COMPLETION_WRITE_POINTER_DDR_UPDATE_CONTROL

	/* Program BD start address */
	val = BD_START_ADDR_VALUE(ring->bd_dma_base);
	writel_relaxed(val, ring->regs + RING_BD_START_ADDR);

	/* BD write pointer will be same as HW write pointer */
	spin_lock_init(&ring->bd_lock);
	ring->bd_write_offset =
			readl_relaxed(ring->regs + RING_BD_WRITE_PTR);
	ring->bd_write_offset *= RING_DESC_SIZE;
	ring->bd_read_offset =
			readl_relaxed(ring->regs + RING_BD_READ_PTR);
	ring->bd_read_offset *= RING_DESC_SIZE;

	/* Program completion start address */
	val = CMPL_START_ADDR_VALUE(ring->cmpl_dma_base);
	writel_relaxed(val, ring->regs + RING_CMPL_START_ADDR);

	/* Completion read pointer will be same as HW write pointer */
	ring->cmpl_read_offset =
			readl_relaxed(ring->regs + RING_CMPL_WRITE_PTR);
	ring->cmpl_read_offset *= RING_DESC_SIZE;

	/* Read ring Tx, Rx, and Outstanding counts to clear */
	readl_relaxed(ring->regs + RING_NUM_REQ_RECV_LS);
	readl_relaxed(ring->regs + RING_NUM_REQ_RECV_MS);
	readl_relaxed(ring->regs + RING_NUM_REQ_TRANS_LS);
	readl_relaxed(ring->regs + RING_NUM_REQ_TRANS_MS);
	readl_relaxed(ring->regs + RING_NUM_REQ_OUTSTAND);

	/* Enable/activate ring */
	val = BIT(CONTROL_ACTIVE_SHIFT);
	writel_relaxed(val, ring->regs + RING_CONTROL);

	for (i=0; i < AE_MAX_COUNT; i++) {
		atomic_set(&ring->ae_cmpl_count[i], 0);
	}

	return 0;

fail_free_irq:
	free_irq(ring->irq, ring);
	ring->irq_requested = false;
fail_free_cmpl_memory:
	dma_pool_free(flexrm_g->cmpl_pool,
		      ring->cmpl_base, ring->cmpl_dma_base);
	ring->cmpl_base = NULL;
	ring->cmpl_dma_base = 0;
fail_free_resp_memory:

#if defined (FLEXRM_OFFLOAD)
	if (ring->resp_base) {
		dma_free_coherent(flexrm_g->dev, RING_OFFLOAD_MAX_REQ*MEM_OFFLOAD_RESPONSE+STATE_MEMORY_SHARED,
				  ring->resp_base, ring->resp_dma_base);
	}
#endif
	ring->resp_base = NULL;
	ring->resp_dma_base = 0;
fail_free_bd_memory:
	dma_pool_free(flexrm_g->bd_pool,
		      ring->bd_base, ring->bd_dma_base);
	ring->bd_base = NULL;
fail:
	if (ring->name)
		kfree(ring->name);
	ring->name = NULL;
	return ret;
}

static void flexrm_ring_shutdown(int chan)
{
	u32 reqid;
	unsigned int timeout;
	struct bcmspu_message *msg;
	struct flexrm_ring *ring = &flexrm_g->rings[chan];

	/* Avoid double shutdown eventually causing crash */
	if (!ring || !ring->regs)
		return;

	spin_lock(&ring->lock);
	/* Disable/inactivate ring */
	writel_relaxed(0x0, ring->regs + RING_CONTROL);
	spin_unlock(&ring->lock);

	/* Set ring flush state */
	timeout = 1000; /* timeout of 1s */
	writel_relaxed(BIT(CONTROL_FLUSH_SHIFT),
			ring->regs + RING_CONTROL);
	do {
		if (readl_relaxed(ring->regs + RING_FLUSH_DONE) &
		    FLUSH_DONE_MASK)
			break;
		mdelay(1);
	} while (--timeout);
	if (!timeout)
		dev_err(flexrm_g->dev,
			"setting ring%d flush state timedout\n", ring->num);

	/* Clear ring flush state */
	timeout = 1000; /* timeout of 1s */
	writel_relaxed(0x0, ring->regs + RING_CONTROL);
	do {
		if (!(readl_relaxed(ring->regs + RING_FLUSH_DONE) &
		      FLUSH_DONE_MASK))
			break;
		mdelay(1);
	} while (--timeout);
	if (!timeout)
		dev_err(flexrm_g->dev,
			"clearing ring%d flush state timedout\n", ring->num);

	/* Abort all in-flight requests */
	for (reqid = 0; reqid < RING_MAX_REQ_COUNT; reqid++) {
		msg = ring->requests[reqid];
		if (!msg)
			continue;

		/* Release reqid for recycling */
		ring->requests[reqid] = NULL;

		/* Give-back message to client */
		msg->error = -EIO;
		msg->rx_callback(msg);
	}

	/* Clear requests bitmap */
	ring->reqid = 0;
	ring->req_in_transit = 0;

	/* Release IRQ */
	if (ring->irq_requested) {
		irq_set_affinity_hint(ring->irq, NULL);
		free_irq(ring->irq, ring);
		ring->irq_requested = false;
	}

	/* Free-up completion descriptor ring */
	if (ring->cmpl_base) {
		dma_pool_free(flexrm_g->cmpl_pool,
			      ring->cmpl_base, ring->cmpl_dma_base);
		ring->cmpl_base = NULL;
		ring->cmpl_dma_base = 0;
	}

	/* Free-up BD descriptor ring */
	if (ring->bd_base) {
		dma_pool_free(flexrm_g->bd_pool,
			      ring->bd_base, ring->bd_dma_base);
		ring->bd_base = NULL;
		ring->bd_dma_base = 0;
	}

	if (ring->resp_base) {
#if defined (FLEXRM_OFFLOAD)
		dma_free_coherent(flexrm_g->dev, RING_OFFLOAD_MAX_REQ*MEM_OFFLOAD_RESPONSE+STATE_MEMORY_SHARED,
				  ring->resp_base, ring->resp_dma_base);
#endif
		ring->resp_base = NULL;
		ring->resp_dma_base = 0;
	}

	/* Free-up memory allocated for naming the IRQ thread */
	if (ring->name)
		kfree(ring->name);
	ring->name = NULL;

	/* Avoid double shutdown, reasigned in flexrm_ring_startup */
	ring->regs = NULL;
}

#if defined (FLEXRM_OFFLOAD)
void flexrm_register_offload_callback (spu_offload_cbk callback)
{
	spu_offload_callback = callback;
}
EXPORT_SYMBOL (flexrm_register_offload_callback);
#endif

/**
 * @brief releases memory allocated for DMA pools
 * 
 */
static void clean_dma_pools(void)
{
	if (flexrm_g->cmpl_pool)
		dma_pool_destroy(flexrm_g->cmpl_pool);
	flexrm_g->cmpl_pool = NULL;
	if (flexrm_g->bd_pool)
		dma_pool_destroy(flexrm_g->bd_pool);
	flexrm_g->bd_pool = NULL;
}

/**
 * @brief update SPU power status
 * @param status 
 */
static void flexrm_pwr_status_set(const SPU_PWR_STATUS status)
{
	flexrm_g->power_ctrl.status = status;
}

/**
 * @brief get SPU pwr mode status
 * @return SPU_PWR_STATUS 
 */
SPU_PWR_STATUS flexrm_pwr_status_get(void)
{
	return flexrm_g->power_ctrl.status;
}

EXPORT_SYMBOL(flexrm_pwr_status_get);

/**
 * @brief turns SPU power on, configures the latter and turns related DMA rings on
 * @return int 0 for success, negative error code otherwise 
 */
int flexrm_spu_and_rings_on(void)
{
	int index, ret = -1;
	struct device *dev = flexrm_g->dev;
	u32 val;
	struct timespec64 ts;	

	spin_lock(&flexrm_g->power_ctrl.lock);
	while(CS_ON == atomic_read(&flexrm_g->power_ctrl.in_progress)) {

		spin_unlock(&flexrm_g->power_ctrl.lock);
		udelay(1);
		spin_lock(&flexrm_g->power_ctrl.lock);
	}
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_ON);
	spin_unlock(&flexrm_g->power_ctrl.lock);

	/* things might change while you're asleep */
	if (SPU_PWR_STATUS_ON == flexrm_pwr_status_get()) {
		atomic_set(&flexrm_g->power_ctrl.in_progress, CS_OFF);
		return 0;
	}

	ret = pmc_spu_power_up();
	if (ret) {
		dev_crit(dev, "FlexRM device failed to power up. Error %d.", ret);
		ret = -ENODEV;
		goto fail;
	}

	/* treat all transactions as secured */
	val = readl_relaxed(flexrm_g->regs + CTRLREGS_CONTROL);
	val &= ~CTRLREGS_CONTROL__PROT_OR_AND_MASK;
	writel_relaxed(val, flexrm_g->regs + CTRLREGS_CONTROL);
	/* read back to make sure the write went through */
	val = readl_relaxed(flexrm_g->regs + CTRLREGS_CONTROL);	
	val = readl_relaxed(flexrm_g->regs + CTRLREGS_STATUS);
	if (CTRLREGS_STATUS__SECURE != val) {
		ret = -ENODEV;
		goto fail;
	} 

	/* check if block came out from reset state properly */
	val = readl_relaxed(flexrm_g->regs + COMM_RM_MAIN_HW_INIT_DONE);
	if (!(val & COMM_RM_MAIN_HW_INIT_DONE__HW_INIT_DONE_MASK)) {
		dev_crit(dev, "%s HW initialization failed!", __func__);
		ret = -ENODEV;
		goto fail;
	}

	/* Create DMA pool for ring BD memory */
	if (!flexrm_g->bd_pool)
		flexrm_g->bd_pool = dma_pool_create("bd", dev, RING_BD_ALLOC_SIZE,
						1 << RING_BD_ALIGN_ORDER, 0);
	if (!flexrm_g->bd_pool) {
		ret = -ENOMEM;
		goto fail;
	}

	/* Create DMA pool for ring completion memory */
	if (!flexrm_g->cmpl_pool)
		flexrm_g->cmpl_pool = dma_pool_create("cmpl", dev, RING_CMPL_SIZE,
						  1 << RING_CMPL_ALIGN_ORDER, 0);
	if (!flexrm_g->cmpl_pool) {
		ret = -ENOMEM;
		goto fail;
	}

	/* Set timer configuration */
	writel_relaxed(0x01380271, flexrm_g->regs + COMM_RM_RING_TIMER_CONTROL_0);
	writel_relaxed(0x04e209c4, flexrm_g->regs + COMM_RM_RING_TIMER_CONTROL_1);
	writel_relaxed(0x0000f424, flexrm_g->regs + COMM_RING_FLUSH_TIMEOUT);

	/* Set burst length and fifo threshold */
	writel_relaxed(0x00080008, flexrm_g->regs + COMM_RM_BD_THRESHOLD);
	writel_relaxed(0x00080008, flexrm_g->regs + COMM_RM_BURST_LENGTH);
	writel_relaxed(0x00670018, flexrm_g->regs + COMM_RM_FIFO_FULL_THRESHOLD);

	/* Set memory configuration */
	/* COMM_RM_MEMORY_CONFIGURATION - default is good */

	/* AXI configurations */
	writel_relaxed(0x110022ef, flexrm_g->regs + COMM_RM_AXI_CONTROL);
	writel_relaxed(0x00100010, flexrm_g->regs + COMM_RM_AXI_READ_BURST_THRESHOLD);

	/*
	 * Due to HW issue spurious interrupts are getting generated.
	 * To fix sw needs to clear the config status interrupts
	 * before setting CONFIG_DONE.
	 */
	writel_relaxed(0xffffffff, flexrm_g->regs + COMM_CONFIG_INTERRUPT_STATUS_CLEAR);

	/* Configure RM control */
	val = readl_relaxed(flexrm_g->regs + COMM_RM_CONTROL_REGISTER);
	val |= BIT(COMM_RM_CONTROL_REGISTER__AE_LOCKING_SHIFT);
#ifdef DOORBELL_MODE
	val &= ~COMM_RM_CONTROL_REGISTER__MODE_MASK;
#ifdef CONFIG_BCM_FLEXRM_V1_DOORBELL_MODE
	val |= BIT(COMM_RM_CONTROL_REGISTER__DOORBELL_OLD);
#endif
#endif
	writel_relaxed(val, flexrm_g->regs + COMM_RM_CONTROL_REGISTER);
	val |= BIT(COMM_RM_CONTROL_REGISTER__CONFIG_DONE_SHIFT);
	writel_relaxed(val, flexrm_g->regs + COMM_RM_CONTROL_REGISTER);

	/* Configure AE timeout */
	writel_relaxed(0x00003fff, flexrm_g->regs + COMM_AE_TIMEOUT);

	/* Configure AE and DME and SPU IV GEN*/
	ktime_get_real_ts64(&ts); /* use real time to for GENIV initialization */
	for (index = 0; index < flexrm_g->num_aes; index ++) {
		/* configure DMEs and put them into Group 0 by default */
		writel_relaxed(0x110000ff, flexrm_g->regs + DMEx_AXI_CONTROL(index));
		writel_relaxed(((8 << DMEx_FIFO_THRESHOLD__MAX_SHIFT) | 8),
			flexrm_g->regs + DMEx_WR_FIFO_THRESHOLD(index));
		writel_relaxed(((8 << DMEx_FIFO_THRESHOLD__MAX_SHIFT) | 8),
			flexrm_g->regs + DMEx_RD_FIFO_THRESHOLD(index));
		/* put all AEs into Group 0 by default and activate it */
		writel_relaxed(BIT(AEx_CONTROL_REGISTER__ACTIVE_SHIFT),
			flexrm_g->regs + AEx_CONTROL_REGISTER(index));
		/* initialize GENIV HW */
		writel_relaxed((u32)ts.tv_nsec*(index+1),
			flexrm_g->regs + SPUx_IVGEN_KEY0(index) + (4*index));
	}

	for (index = 0; index < flexrm_g->num_rings; index++) {
		ret = flexrm_ring_startup(index);
		if (ret)
			goto fail;
	}
	
	flexrm_pwr_status_set(SPU_PWR_STATUS_ON);
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_OFF);
	return 0;

fail:
	dev_err(dev, "Failed!");
	clean_dma_pools();
	{
		int rc;
		if (0 != (rc = pmc_spu_power_down())) {
			dev_crit(flexrm_g->dev, "FlexRM device failed to power down. Error %d.", rc);
		}
	}

	flexrm_pwr_status_set(SPU_PWR_STATUS_OFF);
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_OFF);
	return ret;
}
EXPORT_SYMBOL(flexrm_spu_and_rings_on);

/**
 * @brief shuts dowm DMA rings, cleans DMA pools and  shuts the SPU power down 
 * @return int 
 */
int flexrm_spu_and_rings_shutdown(void)
{
	int index, ret = 0;

	spin_lock(&flexrm_g->power_ctrl.lock);
	while(CS_ON == atomic_read(&flexrm_g->power_ctrl.in_progress)) {
		spin_unlock(&flexrm_g->power_ctrl.lock);
		udelay(1);
		spin_lock(&flexrm_g->power_ctrl.lock);
	}
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_ON);
	spin_unlock(&flexrm_g->power_ctrl.lock);

	/* things might change while you're asleep */
	if (SPU_PWR_STATUS_ON == flexrm_pwr_status_get()) {

		for (index = 0; index < flexrm_g->num_rings; index++) {
			flexrm_ring_shutdown(index);
		}
		clean_dma_pools();
		if (0 != (ret = pmc_spu_power_down())) {
			dev_crit(flexrm_g->dev, "FlexRM device failed to power down. Error %d.", ret);
		}
		flexrm_pwr_status_set(SPU_PWR_STATUS_OFF);
	}
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_OFF);

	return ret;
}

EXPORT_SYMBOL(flexrm_spu_and_rings_shutdown);

/* ====== FlexRM platform driver ===== */
static int flexrm_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct resource *iomem;
	struct device *dev = &pdev->dev;
	const void *dt_val_ptr;

	dev_info(dev, "FlexRM probing...");

	if (!of_device_is_available(dev->of_node)) {
		dev_crit(dev, "FlexRM device not available");
		ret = -ENODEV;
		goto fail;
	}

	/* Allocate driver struct */
	flexrm_g = devm_kzalloc(dev, sizeof(*flexrm_g), GFP_KERNEL);
	if (!flexrm_g) {
		ret = -ENOMEM;
		goto fail;
	}
	flexrm_g->dev = dev;
	platform_set_drvdata(pdev, flexrm_g);

	/* Get resource for registers */
	iomem = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!iomem ) {
		ret = -ENODEV;
		goto fail;
	}

	/* Map registers of all rings */
	flexrm_g->phyaddr_base = iomem->start;
	flexrm_g->regs = devm_ioremap_resource(&pdev->dev, iomem);
	if (IS_ERR(flexrm_g->regs)) {
		ret = PTR_ERR(flexrm_g->regs);
		dev_err(dev, "Failed to remap regs: %d\n", ret);
		goto fail;
	}

	/* Scan and count available rings and AEs */
	dt_val_ptr = of_get_property(dev->of_node, "brcm,num_chan", NULL);
	if (!dt_val_ptr) {
		dev_crit(dev,
			"%s failed to get num_chan from device tree",
			__func__);
		flexrm_g->num_rings = 1; /* assume one channel */
	} else {
		flexrm_g->num_rings = be32_to_cpup(dt_val_ptr);
		dev_info(dev, "Device tree specified %d rings",
			flexrm_g->num_rings);
		if (flexrm_g->num_rings > RING_MAX_COUNT) {
			dev_crit(dev, "Driver can support at most has %d ring.",
				RING_MAX_COUNT);
			dev_crit(dev, "Default to 1 ring");
			flexrm_g->num_rings = 1;
		}
	}
	atomic_set(&flexrm_g->next_chan, -1);

	dt_val_ptr = of_get_property(dev->of_node, "brcm,num_ae", NULL);
	if (!dt_val_ptr) {
		dev_crit(dev,
			"%s failed to get num_ae from device tree",
			__func__);
		flexrm_g->num_aes = 1; /* assume one AE */
	} else {
		flexrm_g->num_aes = be32_to_cpup(dt_val_ptr);
		dev_info(dev, "Device tree specified %d AEs",
			flexrm_g->num_aes);
		if (flexrm_g->num_aes > AE_MAX_COUNT) {
			dev_crit(dev, "Driver can support at most %d AEs.",
				AE_MAX_COUNT);
			dev_crit(dev, "Default to 1 AE");
			flexrm_g->num_aes = 1;
		}
	}

	ret = dma_set_mask_and_coherent(dev, DMA_BIT_MASK(64));
	if (ret) {
		dev_info(dev, "DMA bit mask 64 failed");
		goto fail;
	}
	
	/* Check availability of debugfs */
	if (!debugfs_initialized())
		goto skip_debugfs;

	/* Create debugfs root entry */
	flexrm_g->root = debugfs_create_dir(KBUILD_MODNAME, NULL);
	if (IS_ERR_OR_NULL(flexrm_g->root)) {
		ret = PTR_ERR_OR_ZERO(flexrm_g->root);
		goto fail;
	}

#if (LINUX_VERSION_CODE < KERNEL_VERSION(5,15,0))
	/* Create debugfs config entry */
	flexrm_g->config = debugfs_create_devm_seqfile(flexrm_g->dev,
						   "config", flexrm_g->root,
						   flexrm_debugfs_conf_show);
	if (IS_ERR_OR_NULL(flexrm_g->config)) {
		ret = PTR_ERR_OR_ZERO(flexrm_g->config);
		goto fail_free_debugfs_root;
	}

	/* Create debugfs stats entry */
	flexrm_g->stats = debugfs_create_devm_seqfile(flexrm_g->dev,
						  "stats", flexrm_g->root,
						  flexrm_debugfs_stats_show);
	if (IS_ERR_OR_NULL(flexrm_g->stats)) {
		ret = PTR_ERR_OR_ZERO(flexrm_g->stats);
		goto fail_free_debugfs_root;
	}
#else
	debugfs_create_devm_seqfile(flexrm_g->dev, "config", flexrm_g->root,
						   flexrm_debugfs_conf_show);
	debugfs_create_devm_seqfile(flexrm_g->dev, "stats", flexrm_g->root,
						  flexrm_debugfs_stats_show);

#endif
skip_debugfs:

	/* Initialize rings  */
	flexrm_g->rings = devm_kcalloc(dev, flexrm_g->num_rings,
				sizeof(*flexrm_g->rings), GFP_KERNEL);
	if (!flexrm_g->rings) {
		ret = -ENOMEM;
		goto fail_free_debugfs_root;
	}
#if defined(FLEXRM_OFFLOAD)
	{
		int index;
		/* reserve Runner Offload rings, from the last */
		for (index = 0; index < NUM_OFFLOAD_RESERVED; index++) {
			flexrm_g->rings[flexrm_g->num_rings-1-index].ring_config = OFFLOAD_RESERVED;
#if defined(SPU_RESP_ON_RUNNER)
			flexrm_g->rings[flexrm_g->num_rings-1-index].ring_config |= RESP_OFFLOAD;
#endif
		}
	}
#endif

	spin_lock_init(&flexrm_g->power_ctrl.lock);
	atomic_set(&flexrm_g->power_ctrl.in_progress, CS_OFF);
	flexrm_pwr_status_set(SPU_PWR_STATUS_OFF);
	dev_info(dev, "loaded successfully!");
	return 0;

fail_free_debugfs_root:
	if (flexrm_g->root)
		debugfs_remove_recursive(flexrm_g->root);
	flexrm_g->root = NULL;

fail:
	dev_err(dev, "probe failed!");
	return ret;
}

static int flexrm_remove(struct platform_device *pdev)
{
	if (flexrm_g->root)
		debugfs_remove_recursive(flexrm_g->root);
	flexrm_spu_and_rings_shutdown();

	return 0;
}

static const struct of_device_id flexrm_of_match[] = {
	{ .compatible = "brcm,spu-flexrm", },
	{},
};
MODULE_DEVICE_TABLE(of, flexrm_of_match);

static struct platform_driver flexrm_driver = {
	.driver = {
		.name = FLEXRM_MODNAME,
		.owner = THIS_MODULE,
		.of_match_table = flexrm_of_match,
	},
	.probe		= flexrm_probe,
	.remove		= flexrm_remove,
};
/**
 * @brief character device file operations set definition
 */
static struct file_operations fops =
{
	.owner      = THIS_MODULE,
};
/**
 * @brief charcter device removal operations
 */
static void flexrmchardev_cleanup(void)
{
	if (0 <= flex_major) {

		if (NULL != flexchardev_class) {

			device_destroy(flexchardev_class, MKDEV(flex_major, 0));
			class_destroy(flexchardev_class);
			flexchardev_class = NULL;
		}
		unregister_chrdev(flex_major, FLEX_CHAR_DEV_NAME);
		flex_major = -1;
	}
}
/**
 * @brief flexrm driver system entry point
 * @return int -1 load failure, success otherwise
 */
static int __init __flexrm_init(void)
{
	int res = -1;

	if (0 > (res = __platform_driver_register(&flexrm_driver, THIS_MODULE))) {

		printk("%d|ERROR|Failed to register platform flex driver\n", __LINE__);
	} else if (0 > (flex_major = register_chrdev(0, FLEX_CHAR_DEV_NAME, &fops))) {

		printk("%d|ERROR|Failed to register char flex device\n", __LINE__);
	} else if (NULL == (flexchardev_class = class_create(THIS_MODULE, FLEX_CHAR_DEV_NAME))) {

		printk("%d|ERROR|Failed to create char flex class\n", __LINE__);
	} else {

		device_create(flexchardev_class, NULL, MKDEV(flex_major, 0), NULL, FLEX_CHAR_DEV_NAME);
	}

	if ((0 > flex_major) || (NULL == flexchardev_class)) {

		flexrmchardev_cleanup();
		res = -1;
	}

	return res;
}
/**
 * @brief flexrm driver system removal point
 */
static void __exit __flexrm_cleanup(void)
{
	platform_driver_unregister(&flexrm_driver);
	flexrmchardev_cleanup();
}

module_init(__flexrm_init);
module_exit(__flexrm_cleanup);

MODULE_AUTHOR("Broadcom");
MODULE_DESCRIPTION("Broadcom FlexRM driver");
MODULE_LICENSE("GPL v2");

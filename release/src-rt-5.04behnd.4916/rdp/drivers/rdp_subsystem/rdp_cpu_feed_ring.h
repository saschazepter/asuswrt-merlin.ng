/*
* <:copyright-BRCM:2022:DUAL/GPL:standard
* 
*    Copyright (c) 2022 Broadcom 
*    All Rights Reserved
* 
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License, version 2, as published by
* the Free Software Foundation (the "GPL").
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* 
* A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
* writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
* 
* :>
*/

#ifndef _RDP_CPU_FEED_RING_H_
#define _RDP_CPU_FEED_RING_H_

#if defined(CONFIG_RNR_FEED_RING)
#if defined(__KERNEL__)
#include <bcm_mm.h>
#endif
#include "rdpa_types.h"
#include "rdpa_cpu_basic.h"
#include "rdd.h"


#include "rdpa_cpu.h"
#include "bdmf_system.h"
#include "bdmf_session.h"
#include "bdmf_shell.h"
#include "bdmf_dev.h"

extern ring_descriptor_t host_ring[D_NUM_OF_RING_DESCRIPTORS];
#define FEED_RING_SIZE     (DEF_DATA_RING_SIZE * RDD_CPU_RING_DESCRIPTORS_TABLE_SIZE)

extern bdmf_fastlock feed_ring_lock;
int bdmf_cpu_ring_shell_print_pd(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms);
void rdp_cpu_feed_pd_print_fields(void *shell_priv, CPU_FEED_DESCRIPTOR_STRUCT *pdPtr);
extern uint32_t feed_ring_max_buffers;
#if defined(CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC)
extern atomic_t allocated_buffers;
extern uint32_t threshold_recycle;
static inline int assign_packets_to_feed_ring(int num);
#endif
static inline int rdp_cpu_get_feed_read_idx(uint32_t ring_id, uint16_t *read_idx)
{
    int rc = BDMF_ERR_OK;

    *read_idx = swap2bytes(*host_ring[ring_id].read_idx);

    return rc;
}
static inline void __rdp_prepare_feed_desc(void *pdata_buf, CPU_FEED_DESCRIPTOR_STRUCT *src, CPU_FEED_DESCRIPTOR_STRUCT *dst)
{
    uintptr_t phys_addr = RDD_VIRT_TO_PHYS(pdata_buf);
    GET_ADDR_HIGH_LOW(src->ptr_hi, src->ptr_low, phys_addr);

    src->type = ABS_TYPE;

#if defined(CONFIG_DEBUG_FEED_DATA)
    src->valid_flag_0 = 0xA5B5;
    src->valid_flag_1 = 5;
#else
    src->valid_flag_0 = 0;
    src->valid_flag_1 = 0;
#endif

#ifdef CONFIG_ARM64
    *((uint64_t *)&dst->word_32[0]) = swap4bytes64(*((uint64_t*)&src->word_32[0]));
#else
    dst->word_32[0] = swap4bytes(src->word_32[0]);
    dst->word_32[1] = swap4bytes(src->word_32[1]);
#endif
}

static inline int __rdp_recycle_buf_to_feed(void *pdata_buf)
{
    ring_descriptor_t *feed_ring_descr = &host_ring[FEED_RING_ID];
    uint16_t write_idx = feed_ring_descr->shadow_write_idx;
    uint16_t read_idx = feed_ring_descr->shadow_read_idx;
    CPU_FEED_DESCRIPTOR_STRUCT feed_descr;

    if ((write_idx + 1) % feed_ring_descr->num_of_entries == read_idx)
    {
        rdp_cpu_get_feed_read_idx(FEED_RING_ID,  &read_idx);
        if (read_idx == feed_ring_descr->shadow_read_idx)
        {
#if !defined(RDP_SIM)
#if (defined(CONFIG_BCM_BPM) || defined(CONFIG_BCM_BPM_MODULE))
            /* Feed ring is full return to BPM */
            gbpm_free_buf((void *)pdata_buf);
#if defined(CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC)
            atomic_dec(&allocated_buffers);
#endif /* CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC */
#else
            kfree((void *)PDATA_TO_PFKBUFF(pdata_buf, BCM_PKT_HEADROOM));
#endif
#endif
            return 1;
        }
        else
            feed_ring_descr->shadow_read_idx = read_idx;
    }
    __rdp_prepare_feed_desc(pdata_buf, &feed_descr, &((CPU_FEED_DESCRIPTOR_STRUCT *)feed_ring_descr->base)[write_idx]);

    feed_ring_descr->shadow_write_idx = (++write_idx)%feed_ring_descr->num_of_entries;

    return 0;
}

static inline int alloc_and_assign_packet_to_feed_ring(void)
{
    ring_descriptor_t *feed_ring_descr = &host_ring[FEED_RING_ID];
    uint32_t read_idx = feed_ring_descr->shadow_read_idx;
    uint32_t write_idx = feed_ring_descr->shadow_write_idx;
    CPU_FEED_DESCRIPTOR_STRUCT feed_descr;
    void *buf;


    if ((write_idx + 1)%feed_ring_descr->num_of_entries == read_idx)
    {
        /* Feed ring is full */
        return BDMF_ERR_NO_MORE;
    }

    buf = feed_ring_descr->databuf_alloc(feed_ring_descr);
    if (!buf)
    {
#ifdef RDP_SIM
        bdmf_trace("failed to allocate SoftBPM to Feed Ring\n");
#else
        DO_DEBUG(feed_ring_descr->stats_buff_err++);
#endif
        return BDMF_ERR_NOMEM;
    }

    __rdp_prepare_feed_desc(buf, &feed_descr, &((CPU_FEED_DESCRIPTOR_STRUCT *)feed_ring_descr->base)[write_idx]);

    feed_ring_descr->shadow_write_idx = (++write_idx)%feed_ring_descr->num_of_entries;
    return 0;
}

#if defined(CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC)
extern int feed_ring_low_threshold;
extern int feed_min_buffers_in_ring;
extern atomic_t allocated_buffers;
extern int max_allocated_buffers;
void rdpa_feed_ring_refill_kick(void);
extern int refill_every;

static inline int is_rdp_cpu_feed_ring_occupancy_below_threshold(uint16_t read_idx, uint16_t write_idx, uint16_t num_entries)
{
    uint16_t packets;
    if ((read_idx <= write_idx))
    {
        packets = write_idx - read_idx;
    }
    else
    {
        packets = (num_entries - read_idx) + write_idx;
    }
    if (packets < feed_ring_low_threshold)
        return 1;
    else
        return 0;
}

static inline int rdp_cpu_fill_feed_ring_burst(void)
{
    int i = 0;

    i = assign_packets_to_feed_ring(CONFIG_BCM_RUNNER_FEED_RING_ALLOC_BATCH);
    threshold_recycle += i;
    if (WRITE_IDX_UPDATE_THR <= threshold_recycle)
    {
#ifdef CONFIG_BCM_CACHE_COHERENCY
        dma_wmb();
#endif
        rdd_cpu_inc_feed_ring_write_idx(threshold_recycle);
        threshold_recycle = 0;
    }
    return 0;
}
static inline int assign_packets_to_feed_ring(int num)
{
    ring_descriptor_t *feed_ring_descr = &host_ring[FEED_RING_ID];
    uint32_t write_idx = feed_ring_descr->shadow_write_idx;
    CPU_FEED_DESCRIPTOR_STRUCT feed_descr;
    void *buf;
    int i = 0, alloc_num = 0;
    alloc_num = feed_ring_max_buffers - atomic_read(&allocated_buffers);
    if (alloc_num > num)
        alloc_num = num;

    for (i=0; i<alloc_num; i++)
    {
        buf = feed_ring_descr->databuf_alloc(feed_ring_descr);
        if (!buf)
        {
#ifdef RDP_SIM
            bdmf_trace("failed to allocate SoftBPM to Feed Ring\n");
#else
            DO_DEBUG(feed_ring_descr->stats_buff_err++);
#endif
            break;
        }
        /* track_alloc(buf); */
        __rdp_prepare_feed_desc(buf, &feed_descr, &((CPU_FEED_DESCRIPTOR_STRUCT *)feed_ring_descr->base)[write_idx++]);

        write_idx = (write_idx)%feed_ring_descr->num_of_entries;
    }
    feed_ring_descr->shadow_write_idx = (write_idx);
    atomic_add(i, &allocated_buffers);
    if (max_allocated_buffers < atomic_read(&allocated_buffers))
        max_allocated_buffers = atomic_read(&allocated_buffers);
    return i;
}
#endif /* CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC */
#endif /* CONFIG_RNR_FEED_RING */
#endif /* _RDP_CPU_FEED_RING_H_ */

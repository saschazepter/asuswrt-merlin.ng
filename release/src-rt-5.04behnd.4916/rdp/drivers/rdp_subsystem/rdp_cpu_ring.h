/*
    <:copyright-BRCM:2013:DUAL/GPL:standard
    
       Copyright (c) 2013 Broadcom 
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

/******************************************************************************/
/*                                                                            */
/* File Description:                                                          */
/*                                                                            */
/* This file contains the implementation of the Runner CPU ring interface     */
/*                                                                            */
/******************************************************************************/

#ifndef _RDP_CPU_RING_H_
#define _RDP_CPU_RING_H_

#if defined(__KERNEL__)
#include<bcm_pkt_lengths.h>
#include <bcm_mm.h>
#endif

#include "rdpa_types.h"
#include "rdpa_cpu_basic.h"
#include "rdd.h"

#include "rdpa_cpu.h"
#include "bdmf_system.h"
#include "bdmf_shell.h"
#include "bdmf_dev.h"

#define WRITE_IDX_UPDATE_THR (128)
typedef enum
{
   FPM_TYPE,
   ABS_TYPE
}rdp_feed_buffer_type;

#include "rdd_cpu_rx.h"
#define RDPA_PKT_MIN_ALIGN 128
#ifndef RDP_SIM
#define DEF_DATA_RING_SIZE  1024
#else
#define DEF_DATA_RING_SIZE  128
#endif

#define RECYCLE_RING_SIZE  (DEF_DATA_RING_SIZE * RDD_CPU_RING_DESCRIPTORS_TABLE_SIZE)
#define rdp_cpu_shell_print(priv, format, ...) bdmf_session_print((bdmf_session_handle)priv, format, ##__VA_ARGS__)

/* extern const bdmf_attr_enum_table_t rdpa_cpu_reason_enum_table; */

#ifdef RDP_SIM
#include "rdp_cpu_sim.h"
#define BCM_PKTBUF_SIZE 2048
#endif

#ifdef CPU_RING_DEBUG
    #define DO_DEBUG(a_) a_
#else
    #define DO_DEBUG(a_) 
#endif

#define MAX_BUFS_IN_CACHE 32

struct ring_descriptor;

typedef void* (*databuf_alloc_func)(struct ring_descriptor *pDescriptor);
typedef void (*databuf_free_func)(void *pBuf, uint32_t context, struct ring_descriptor *pDescriptor);
typedef void (*data_dump_func)(uint32_t rindId, rdpa_cpu_rx_info_t *info);
typedef void* (*memory_create_func)(struct ring_descriptor *pDescriptor);
typedef void (*memory_delete_func)(void *buffMem);

struct ring_descriptor
{
    uint32_t ring_id;
    uint32_t ring_prio; 
    uint32_t num_of_entries;
    uint32_t num_of_entries_mask;
    uint32_t size_of_entry;
    rdpa_ring_type_t type;
    void *base;
    bdmf_phys_addr_t base_phys;
    uint32_t ring_ddr_size;
    uint32_t buff_cache_cnt;
    uint8_t **buff_cache;
    void *buff_mem_context;
    databuf_alloc_func databuf_alloc;
    databuf_free_func databuf_free;
    data_dump_func data_dump;
    memory_create_func memory_create;
    memory_delete_func memory_delete;
    uint16_t shadow_read_idx;
    uint16_t shadow_write_idx;
    uint16_t accum_inc;
    uint16_t lowest_filling_level;
    uint16_t *read_idx;
    uint16_t *write_idx;
    bdmf_fastlock ring_lock; /* lock of ring init/update, for now used by cpu_tx */
#ifdef CPU_RING_DEBUG
    uint32_t stats_received; /* for every queue */
    uint32_t stats_dropped;  /* for every queue */
    uint32_t stats_buff_err; /* buffer allocation failure */
    int dump_enable;
#endif /* CPU_RING_DEBUG */
};

typedef struct ring_descriptor ring_descriptor_t;


typedef struct
{
    data_dump_func data_dump;
    void *buff_mem_context;
} RING_CB_FUNC;

void rdp_cpu_reason_stat_cb(uint32_t *stat, rdpa_cpu_reason_index_t *rindex);

void rdp_cpu_rxq_stat_cb(int qid, extern_rxq_stat_t *stat, bdmf_boolean clear);

void rdp_cpu_dump_data_cb(bdmf_index queue, bdmf_boolean enabled);

int rdp_cpu_ring_read_packet_refill(uint32_t ring_id, rdpa_cpu_rx_info_t *info);

int rdp_cpu_ring_recycle_free_host_buf(int ring_id, int budget);

void rdp_cpu_tx_rings_indices_alloc(void);

int rdp_cpu_ring_create_ring(uint32_t ring_id,
                             uint8_t ring_type,
                             uint32_t entries,
                             bdmf_phys_addr_t *ring_head,
                             RING_CB_FUNC *cbFunc,
                             uint32_t prio);

int	rdp_cpu_ring_create_ring_ex(uint32_t ring_id,
                                uint8_t ring_type,
                                uint32_t entries,
                                bdmf_phys_addr_t* ring_head,
                                bdmf_phys_addr_t* rw_idx_addr,
                                RING_CB_FUNC* ringCb,
                                uint32_t prio);

int rdp_cpu_ring_delete_ring(uint32_t ringId);

int rdp_cpu_ring_get_queued(uint32_t ringId);

int rdp_cpu_ring_flush(uint32_t ringId);

int rdp_cpu_ring_not_empty(uint32_t ringId);

int rdp_cpu_ring_is_full(uint32_t ringId);

int cpu_ring_shell_list_rings(void *shell_priv, int start_from);

int cpu_ring_shell_print_pd(void *shell_priv, uint32_t ring_id, uint32_t pdIndex);

int cpu_ring_shell_admin_ring(void *shell_priv, uint32_t ring_id, uint32_t admin_status);

/* Callback Functions */

void rdp_packet_dump(uint32_t ringId, rdpa_cpu_rx_info_t *info);

/* BPM (or CFE)*/

void* rdp_databuf_alloc(ring_descriptor_t *pDescriptor);

void rdp_databuf_free(void *pBuf, uint32_t context, ring_descriptor_t *pDescriptor);

/* Kmem_Cache */

void rdp_cpu_ring_read_idx_ddr_sync(uint32_t ring_id);

/*array of possible rings private data*/
#define D_NUM_OF_RING_DESCRIPTORS RING_ID_NUM_OF
uint32_t rdp_cpu_packets_count(ring_descriptor_t *rd, uint16_t read_idx, uint16_t write_idx);
static inline void __rdp_prepare_ptr_address(void *idx_address, uint32_t *addr_l, uint32_t *addr_h)
{
    uintptr_t phy_addr, address;
    address = (uintptr_t)idx_address;

    phy_addr = RDD_VIRT_TO_PHYS(address); 

    GET_ADDR_HIGH_LOW((*addr_h), (*addr_l), phy_addr);
}
void rdp_cpu_ring_print_phys_addr(void *shell_priv, uint32_t addr_hi, uint32_t addr_low);
extern void rdp_runner_cpu_task_wakeup(uint32_t runner_id, uint32_t task_id);

#endif /* _RDP_CPU_RING_H_ */

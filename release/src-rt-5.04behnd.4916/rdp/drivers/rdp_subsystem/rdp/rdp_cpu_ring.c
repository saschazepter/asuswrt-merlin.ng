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

/*****************************************************************************/
/*                                                                           */
/* Include files                                                             */
/*                                                                           */
/*****************************************************************************/
#ifdef RDP_SIM
#define INTERN_PRINT bdmf_trace
#define ____cacheline_aligned 
#else
#define INTERN_PRINT printk
#endif

#if !defined(RDP_SIM)
#include "rdp_cpu_ring.h"
#include "rdp_cpu_ring_inline.h"
#include "rdp_mm.h"


#include "rdpa_cpu_helper.h"


static uint32_t init_shell = 0;
int stats_reason[rdpa_cpu_reason__num_of]  = {}; /* reason statistics for US/DS */
EXPORT_SYMBOL(stats_reason);

#define RW_INDEX_SIZE (sizeof(uint16_t))

#define shell_print(priv,format, ...) bdmf_session_print((bdmf_session_handle)priv,format,##__VA_ARGS__)

#if !defined(__KERNEL__)
#error "rdp_cpu_ring is supported only in Kernel modules or XRDP simulator"
#endif

RING_DESCTIPTOR ____cacheline_aligned host_ring[D_NUM_OF_RING_DESCRIPTORS]  = {};
EXPORT_SYMBOL(host_ring);

int cpu_ring_shell_list_rings(void *shell_priv, int start_from)
{
    uint32_t cntr;
    uint32_t first = 0, last = D_NUM_OF_RING_DESCRIPTORS;

    shell_print(shell_priv, "CPU RX Ring Descriptors \n" );
    shell_print(shell_priv, "------------------------------\n" );

    if (start_from != -1)
    {
        first = start_from;
        last = first + 1;
    }

    for (cntr = first; cntr < last; cntr++)
    {
        char *ring_type;
        if (!host_ring[cntr].num_of_entries) 
            continue;

        ring_type = "RX";

        shell_print(shell_priv, "CPU %s Ring Queue = %d:\n", ring_type, cntr );
        shell_print(shell_priv, "\tCPU %s Ring Queue id= %d\n",ring_type, host_ring[cntr].ring_id );
        shell_print(shell_priv, "\tNumber of entries = %d\n", host_ring[cntr].num_of_entries );
        shell_print(shell_priv, "\tSize of entry = %d bytes\n", host_ring[cntr].size_of_entry );
        shell_print(shell_priv, "\tRing Base address = 0x%px\n", host_ring[cntr].base );
        shell_print(shell_priv, "\tRing Head address = 0x%px\n", host_ring[cntr].head );
        shell_print(shell_priv, "\tRing Head position = %ld\n",
            (long)(host_ring[cntr].head - (CPU_RX_DESCRIPTOR *)host_ring[cntr].base));
        shell_print(shell_priv, "\tCurrently Queued = %d\n", rdp_cpu_ring_get_queued(cntr));

#if defined(CONFIG_BCM_RUNNER_FEED_RING_DYNAMIC)
        if (host_ring[cntr].type == rdpa_ring_feed)
        {
            shell_print(shell_priv, "\tfeed_ring_low_threshold  = %d\n", feed_ring_low_threshold);
            shell_print(shell_priv, "\tfeed_min_buffers_in_ring = %d\n", feed_min_buffers_in_ring);
        }
#endif
        shell_print(shell_priv, "-------------------------------\n" );
        shell_print(shell_priv, "\n\n" );
    }

    return 0;
}

static void cpu_ring_pd_print_fields(void *shell_priv, CPU_RX_DESCRIPTOR* pdPtr)
{
    shell_print(shell_priv, "descriptor fields:\n");
    shell_print(shell_priv, "\townership: %s\n", pdPtr->ownership ? "Host":"Runner");
    shell_print(shell_priv, "\tpacket DDR uncached address: 0x%pK\n", (void*)PHYS_TO_UNCACHED(pdPtr->host_buffer_data_pointer));
    shell_print(shell_priv, "\tpacket len: %d\n", pdPtr->packet_length);

    if(pdPtr->ownership != OWNERSHIP_HOST)
        return;

    shell_print(shell_priv, "\tdescriptor type: %d\n", pdPtr->descriptor_type);
    shell_print(shell_priv, "\tsource port: %d\n", pdPtr->source_port );
    shell_print(shell_priv, "\tflow_id: %d\n", pdPtr->flow_id);
    shell_print(shell_priv, "\twl chain id: %d\n", pdPtr->wl_metadata & 0xFF);
    shell_print(shell_priv, "\twl priority: %d\n", (pdPtr->wl_metadata & 0xFF00) >> 8);
}

int cpu_ring_shell_print_pd(void *shell_priv, uint32_t ring_id, uint32_t pdIndex)
{
    CPU_RX_DESCRIPTOR host_ring_desc;

    memcpy(&host_ring_desc, (CPU_RX_DESCRIPTOR *)host_ring[ring_id].base + pdIndex, sizeof(CPU_RX_DESCRIPTOR));

    shell_print(shell_priv, "descriptor unswapped: %08x %08x %08x %08x\n",
        host_ring_desc.word0, host_ring_desc.word1, host_ring_desc.word2,
        host_ring_desc.word3 );

    host_ring_desc.word0 = swap4bytes(host_ring_desc.word0);
    host_ring_desc.word1 = swap4bytes(host_ring_desc.word1);
    host_ring_desc.word2 = swap4bytes(host_ring_desc.word2);
    host_ring_desc.word3 = swap4bytes(host_ring_desc.word3);

    shell_print(shell_priv, "descriptor swapped  : %08x %08x %08x %08x\n", 
        host_ring_desc.word0, host_ring_desc.word1, host_ring_desc.word2,
        host_ring_desc.word3 );

    cpu_ring_pd_print_fields(shell_priv, &host_ring_desc);

    return 0;
}

/*bdmf shell is compiling only for RDPA */
#define MAKE_BDMF_SHELL_CMD_NOPARM(dir, cmd, help, cb) \
    bdmfmon_cmd_add(dir, cmd, cb, help, BDMF_ACCESS_ADMIN, NULL, NULL)

#define MAKE_BDMF_SHELL_CMD(dir, cmd, help, cb, parms...)   \
{                                                           \
    static bdmfmon_cmd_parm_t cmd_parms[]={                 \
        parms,                                              \
        BDMFMON_PARM_LIST_TERMINATOR                        \
    };                                                      \
    bdmfmon_cmd_add(dir, cmd, cb, help, BDMF_ACCESS_ADMIN, NULL, cmd_parms); \
}

static int bdmf_cpu_ring_shell_list_rings( bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms )
{
    int start_from = -1;

    if (n_parms == 1)
        start_from = (uint32_t)parm[0].value.unumber;

    return cpu_ring_shell_list_rings(session, start_from);
}

static int bdmf_cpu_ring_shell_print_pd(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    return cpu_ring_shell_print_pd(session, (uint32_t)parm[0].value.unumber, (uint32_t)parm[1].value.unumber);
}

#define MAKE_BDMF_SHELL_CMD_NOPARM(dir, cmd, help, cb) \
    bdmfmon_cmd_add(dir, cmd, cb, help, BDMF_ACCESS_ADMIN, NULL, NULL)

#define MAKE_BDMF_SHELL_CMD(dir, cmd, help, cb, parms...)   \
{                                                           \
    static bdmfmon_cmd_parm_t cmd_parms[]={                 \
        parms,                                              \
        BDMFMON_PARM_LIST_TERMINATOR                        \
    };                                                      \
    bdmfmon_cmd_add(dir, cmd, cb, help, BDMF_ACCESS_ADMIN, NULL, cmd_parms); \
}
int ring_make_shell_commands ( void )
{
    bdmfmon_handle_t driver_dir, cpu_dir;

    if ( !( driver_dir = bdmfmon_dir_find ( NULL, "driver" ) ) )
    {
        driver_dir = bdmfmon_dir_add ( NULL, "driver", "Device Drivers", BDMF_ACCESS_ADMIN, NULL );

        if ( !driver_dir )
            return ( 1 );
    }

    cpu_dir = bdmfmon_dir_add ( driver_dir, "cpur", "CPU Ring Interface Driver", BDMF_ACCESS_ADMIN, NULL );

    if ( !cpu_dir )
        return ( 1 );


    MAKE_BDMF_SHELL_CMD( cpu_dir, "sar",   "Show available rings", bdmf_cpu_ring_shell_list_rings,
        BDMFMON_MAKE_PARM_RANGE( "ring_id", "ring id", BDMFMON_PARM_NUMBER, BDMFMON_PARM_FLAG_OPTIONAL, 0, D_NUM_OF_RING_DESCRIPTORS) );

    MAKE_BDMF_SHELL_CMD( cpu_dir, "vrpd",     "View Ring packet descriptor", bdmf_cpu_ring_shell_print_pd,
        BDMFMON_MAKE_PARM_RANGE( "ring_id", "ring id", BDMFMON_PARM_NUMBER, 0, 0, D_NUM_OF_RING_DESCRIPTORS ),
        BDMFMON_MAKE_PARM_RANGE( "descriptor", "packet descriptor index ", BDMFMON_PARM_NUMBER, 0, 0, RDPA_CPU_QUEUE_MAX_SIZE) );

    return 0;
}

/*delete a preallocated ring*/
int	rdp_cpu_ring_delete_ring(uint32_t ring_id)
{
    RING_DESCTIPTOR*			pDescriptor;
    int rc;

    pDescriptor = &host_ring[ring_id];
    if(!pDescriptor->num_of_entries)
    {
        INTERN_PRINT("ERROR:deleting ring_id %d which does not exists!",ring_id);
        return -1;
    }

    rc = rdp_cpu_ring_buffers_free(pDescriptor);
    if (rc)
    {
        INTERN_PRINT("ERROR: failed free ring buffers ring_id %d, err %d\n", ring_id, rc);
        return rc;
    }

    /* free any buffers in buff_cache */
    while(pDescriptor->buff_cache_cnt)
    {
        pDescriptor->databuf_free(pDescriptor->buff_cache[--pDescriptor->buff_cache_cnt], 0, pDescriptor);
    }

    /*free buff_cache */
    if(pDescriptor->buff_cache)
        CACHED_FREE(pDescriptor->buff_cache);

    /*delete the ring of descriptors in case of non-coherent*/
#ifndef RDP_SIM
    if (pDescriptor->base)
    {
        rdp_mm_aligned_free((void*)NONCACHE_TO_CACHE(pDescriptor->base),
            pDescriptor->num_of_entries * pDescriptor->size_of_entry);
    }
#endif
    pDescriptor->num_of_entries = 0;

    return 0;
}
EXPORT_SYMBOL(rdp_cpu_ring_delete_ring);

int	rdp_cpu_ring_create_ring(uint32_t ring_id,
    uint8_t ring_type,
    uint32_t entries,
    bdmf_phys_addr_t* ring_head,
    RING_CB_FUNC* ringCb,
    uint32_t ring_prio)
{
    return rdp_cpu_ring_create_ring_ex(ring_id, ring_type, entries, ring_head, NULL, ringCb, ring_prio);
}
EXPORT_SYMBOL(rdp_cpu_ring_create_ring);




int	rdp_cpu_ring_create_ring_ex(uint32_t ring_id,
    uint8_t ring_type,
    uint32_t entries,
    bdmf_phys_addr_t* ring_head,
    bdmf_phys_addr_t* rw_idx_addr,
    RING_CB_FUNC* ringCb,
    uint32_t ring_prio)
{
    RING_DESCTIPTOR* pDescriptor;
    bdmf_phys_addr_t phy_addr = 0;

    if (ring_id >= RING_ID_NUM_OF)
    {
        INTERN_PRINT("ERROR: ring_id %d out of range(%d)", ring_id, RING_ID_NUM_OF);
        return -1;
    }

    pDescriptor = &host_ring[ring_id];

    if(pDescriptor->num_of_entries)
    {
        INTERN_PRINT("ERROR: ring_id %d already exists! must be deleted first",ring_id);
        return -1;
    }

    if(!entries)
    {
        INTERN_PRINT("ERROR: can't create ring with 0 packets\n");
        return -1;
    }

    /*set ring parameters*/
    pDescriptor->ring_id = ring_id;
    pDescriptor->num_of_entries = entries;
    pDescriptor->num_of_entries_mask = pDescriptor->num_of_entries - 1;
    pDescriptor->ring_prio = ring_prio;

    pDescriptor->size_of_entry		= sizeof(CPU_RX_DESCRIPTOR);

    INTERN_PRINT("Creating CPU ring for queue number %d with %d packets descriptor=0x%px, size_of_entry %d\n",
        ring_id, entries, pDescriptor, pDescriptor->size_of_entry);

    pDescriptor->buff_cache_cnt = 0;
    pDescriptor->type = ring_type;

    pDescriptor->databuf_alloc  = rdp_databuf_alloc;
    pDescriptor->databuf_free   = rdp_databuf_free;
    pDescriptor->data_dump = rdp_packet_dump;
    
    if (ringCb) /* overwrite if needed */
    {
        pDescriptor->data_dump = ringCb->data_dump;
        pDescriptor->buff_mem_context = ringCb->buff_mem_context;
        pDescriptor->databuf_alloc  = ringCb->databuf_alloc;
        pDescriptor->databuf_free   = ringCb->databuf_free;
    }

    /*TODO:update the comment  allocate buff_cache which helps to reduce the overhead of when 
     * allocating data buffers to ring descriptor */
    pDescriptor->buff_cache = (uint8_t **)(CACHED_MALLOC_ATOMIC(sizeof(uint8_t *) * MAX_BUFS_IN_CACHE));
    if( pDescriptor->buff_cache == NULL )
    {
        INTERN_PRINT("failed to allocate memory for cache of data buffers \n");
        return -1;
    }

    /*allocate ring descriptors - must be non-cacheable memory*/
    pDescriptor->base =  rdp_mm_aligned_alloc((pDescriptor->size_of_entry * entries), &phy_addr);
    if( pDescriptor->base == NULL)
    {
        INTERN_PRINT("%s:%d:Failed to allocate memory for ring descriptor\n",__FUNCTION__,__LINE__);
        rdp_cpu_ring_delete_ring(ring_id);
        return -1;
    }

    if (rdp_cpu_ring_buffers_init(pDescriptor, ring_id))
        return -1;

    /*set the ring header to the first entry*/
    pDescriptor->head = (CPU_RX_DESCRIPTOR *)pDescriptor->base;

    /*using pointer arithmetics calculate the end of the ring*/
    pDescriptor->end = (CPU_RX_DESCRIPTOR *)pDescriptor->base + entries;

    *ring_head = phy_addr;

    INTERN_PRINT("Done initializing Ring %d Base=0x%pK End=0x%pK "
        "calculated entries= %ld RDD Base=%lxK descriptor=0x%px\n", ring_id,
        pDescriptor->base, pDescriptor->end, (long)(pDescriptor->end - (CPU_RX_DESCRIPTOR *)pDescriptor->base), 
        (unsigned long)phy_addr, pDescriptor);

    if (!init_shell)
    {
        if (ring_make_shell_commands())
        {	
            INTERN_PRINT("Failed to create ring bdmf shell commands\n");
            return 1;
        }

        init_shell = 1;
    }

    return 0;
}
EXPORT_SYMBOL(rdp_cpu_ring_create_ring_ex);

#ifdef CPU_RING_DEBUG
void rdp_cpu_dump_data_cb(bdmf_index queue, bdmf_boolean enabled)
{
    host_ring[queue].dump_enable = enabled;
}
EXPORT_SYMBOL(rdp_cpu_dump_data_cb);
#endif

void rdp_cpu_rxq_stat_cb(int qid, extern_rxq_stat_t *stat, bdmf_boolean clear)
{
    RING_DESCTIPTOR *pDescriptor     = &host_ring[qid];

    if (!stat)
        return;

    stat->received = pDescriptor->stats_received;
    stat->dropped = pDescriptor->stats_dropped;
    stat->queued  = rdp_cpu_ring_get_queued(qid);

    if (clear)
        pDescriptor->stats_received = pDescriptor->stats_dropped = 0;
}
EXPORT_SYMBOL(rdp_cpu_rxq_stat_cb);

void rdp_cpu_reason_stat_cb(uint32_t *stat, rdpa_cpu_reason_index_t *rindex)
{
    if ((!stat) || (!rindex))
        return;

    *stat = stats_reason[rindex->reason];
    stats_reason[rindex->reason] = 0;
}
EXPORT_SYMBOL(rdp_cpu_reason_stat_cb);


/*this function if for debug purposes and should not be called during runtime*/
/*TODO:Add mutex to protect when reading while packets read from another context*/
int	rdp_cpu_ring_get_queued(uint32_t ring_idx)
{
    RING_DESCTIPTOR*			pDescriptor = &host_ring[ ring_idx ];
    uint32_t                    packets     = 0;
    volatile CPU_RX_DESCRIPTOR*	pTravel		= pDescriptor->base;
    volatile CPU_RX_DESCRIPTOR*	pEnd		= pDescriptor->end;

    if(pDescriptor->num_of_entries == 0)
        return 0;

    while (pTravel != pEnd)
    {
        if (rdp_cpu_ring_is_ownership_host(pTravel))
            packets++;
        pTravel++;
    }

    return packets;
}
 
int	rdp_cpu_ring_flush(uint32_t ring_id)
{
    RING_DESCTIPTOR*			pDescriptor = &host_ring[ ring_id ];
    volatile CPU_RX_DESCRIPTOR*	pTravel		= pDescriptor->base;
    volatile CPU_RX_DESCRIPTOR*	pEnd		= pDescriptor->end;


    while (pTravel != pEnd)
    {
        rdp_cpu_ring_set_ownership_runner(pTravel);
        pTravel++;
    }

    pDescriptor->head = (CPU_RX_DESCRIPTOR *)pDescriptor->base;

    INTERN_PRINT("cpu Ring %d has been flushed\n",ring_id);

    return 0;
}

int	rdp_cpu_ring_not_empty(uint32_t ring_id)
{
    RING_DESCTIPTOR*			pDescriptor = &host_ring[ ring_id ];
    CPU_RX_DESCRIPTOR*	pTravel		= (pDescriptor->head );

    return rdp_cpu_ring_is_ownership_host(pTravel);
}

int rdp_cpu_ring_is_full(uint32_t ring_id)
{
    INTERN_PRINT("%s NOT IMPLEMENTED \n",__FUNCTION__);
    return 0;
}

/*this API get the pointer of the next available packet and reallocate buffer in ring
 * in the descriptor is optimized to 16 bytes cache line, 6838 has 16 bytes cache line
 * while 68500 has 32 bytes cache line, so we don't prefetch the descriptor to cache
 * Also on ARM platform we are not sure of how to skip L2 cache, and use only L1 cache
 * so for now  always use uncached accesses to Packet Descriptor(pTravel)
 */

inline int rdp_cpu_ring_read_packet_refill(uint32_t ring_id, rdpa_cpu_rx_info_t *info)
{
    uint32_t                     ret;
    RING_DESCTIPTOR *pDescriptor     = &host_ring[ring_id];
    volatile CPU_RX_DESCRIPTOR* pTravel = (volatile CPU_RX_DESCRIPTOR*)pDescriptor->head;

    void *pNewBuf = NULL;

    ret = ReadPacketFromRing(pDescriptor, pTravel, info);
    if (ret)
    {
        return  ret;
    }

    /* A valid packet is recieved try to allocate a new data buffer and
     * refill the ring before giving the packet to upper layers
     */

    pNewBuf  = pDescriptor->databuf_alloc(pDescriptor);

    /*validate allocation*/
    if (unlikely(!pNewBuf))
    {
        //printk("ERROR:system buffer allocation failed!\n");
        /*assign old data buffer back to ring*/
        pNewBuf   = info->data;
        info->data = NULL;
        ret = 1;
    }

    AssignPacketBuffertoRing(pDescriptor, pTravel, pNewBuf);
    return ret;
}

/* Callback Functions */

void rdp_packet_dump(uint32_t ringId, rdpa_cpu_rx_info_t *info)
{
    char name[10];

    sprintf(name, "Queue-%d", ringId);
#ifdef __KERNEL__
    rdpa_cpu_rx_dump_packet(name, rdpa_cpu_host, ringId, info, 0);
#endif
}
EXPORT_SYMBOL(rdp_packet_dump);


/* BPM */

void* rdp_databuf_alloc(RING_DESCTIPTOR *pDescriptor)
{
    if (likely(pDescriptor->buff_cache_cnt))
    {
        return (void *)(pDescriptor->buff_cache[--pDescriptor->buff_cache_cnt]);
    }
    else
    {
        uint32_t alloc_cnt = 0;

        /* refill the local cache from global pool */
        alloc_cnt = bdmf_sysb_databuf_alloc((void **)pDescriptor->buff_cache, MAX_BUFS_IN_CACHE, pDescriptor->ring_prio, 0);

        if (alloc_cnt)
        {
            pDescriptor->buff_cache_cnt = alloc_cnt;
            return (void *)(pDescriptor->buff_cache[--pDescriptor->buff_cache_cnt]);
        }
    }
    return NULL;
}
EXPORT_SYMBOL(rdp_databuf_alloc);

void rdp_databuf_free(void *pBuf, uint32_t context, RING_DESCTIPTOR *pDescriptor)
{
    bdmf_sysb_databuf_free(pBuf, context);
}
EXPORT_SYMBOL(rdp_databuf_free);

void rdp_cpu_ring_read_idx_ddr_sync(uint32_t ring_id)
{
}


#endif

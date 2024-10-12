/*
   Copyright (c) 2015 Broadcom Corporation
   All Rights Reserved

    <:label-BRCM:2015:DUAL/GPL:standard
    
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

#ifndef _RDD_CPU_TX_H_
#define _RDD_CPU_TX_H_


typedef union
{
    uint32_t bn1_or_abs2_or_1588:18 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    uint32_t data_1588:18 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
#ifndef FIRMWARE_LITTLE_ENDIAN
    struct
    {
        uint32_t ssid:4 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t fpm_fallback:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t sbpm_copy:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t bn1_or_abs2:12 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#else
    struct
    {
        uint32_t bn1_or_abs2:12 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t sbpm_copy:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t fpm_fallback:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t ssid:4 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#endif
#ifndef FIRMWARE_LITTLE_ENDIAN
    struct
    {
        uint32_t lag_index:2 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t reserved2:16 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#else
    struct
    {
        uint32_t reserved2:16 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint32_t lag_index:2 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#endif
} cpu_tx_bn1_or_abs2_or_1588;


typedef union
{
    uint8_t wan_flow_source_port:8 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
#ifndef FIRMWARE_LITTLE_ENDIAN
    struct
    {
        uint8_t is_vport:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint8_t flow_or_port_id:7 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#else
    struct
    {
        uint8_t flow_or_port_id:7 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
        uint8_t is_vport:1 __PACKING_ATTRIBUTE_FIELD_LEVEL__;
    };
#endif
} cpu_tx_wan_flow_source_port;



static inline void rdd_cpu_tx_set_ring_descriptor(const rdpa_cpu_tx_info_t *info, pbuf_t *pbuf, RING_CPU_TX_DESCRIPTOR_STRUCT *ring_cpu_tx_descriptor)
{
    uintptr_t data_phys_addr;
    uintptr_t sysb_phys_addr;

    ring_cpu_tx_descriptor->abs = pbuf->abs_flag;
    ring_cpu_tx_descriptor->fpm_fallback = pbuf->fpm_fallback;
    ring_cpu_tx_descriptor->sbpm_copy = pbuf->sbpm_copy;
    ring_cpu_tx_descriptor->packet_length = pbuf->length;

#if defined(CONFIG_BCM_SPDSVC_SUPPORT)
    if (info->spdt_so_mark)
    {
        /* set 1588 bit (dont drop) -> must be copied to FPM buffer */
        ring_cpu_tx_descriptor->egress_dont_drop = 1;
        ring_cpu_tx_descriptor->sbpm_copy = 0;
    }
#endif

#if defined(CONFIG_RUNNER_GDX_SUPPORT) /* RX */
    ring_cpu_tx_descriptor->l3_packet = info->l3_packet;
#else
    ring_cpu_tx_descriptor->target_mem_0 = 0;
#endif
    if (!ring_cpu_tx_descriptor->abs)
    {
        ring_cpu_tx_descriptor->sk_buf_ptr_high = 0;
        ring_cpu_tx_descriptor->sk_buf_ptr_low = 0;
        ring_cpu_tx_descriptor->bn_fpm_num = pbuf->fpm_bn;
        ring_cpu_tx_descriptor->bn_fpm_pool = pbuf->fpm_pool_id;
        ring_cpu_tx_descriptor->fpm_sop = pbuf->offset;
        ring_cpu_tx_descriptor->bufmng_cnt_id = pbuf->bufmng_cnt_id;

#if defined(CONFIG_BCM_PTP_1588)
        if (unlikely(info->ptp_info))
        {
            ring_cpu_tx_descriptor->flag_1588 = 1;
            ring_cpu_tx_descriptor->sbpm_copy = 0;
            ring_cpu_tx_descriptor->data_1588 = info->ptp_info;
        }
#endif        
    }
    else
    {
        data_phys_addr = RDD_VIRT_TO_PHYS(pbuf->data);
        sysb_phys_addr = RDD_VIRT_TO_PHYS(pbuf->sysb);
        GET_ADDR_HIGH_LOW(ring_cpu_tx_descriptor->pkt_buf_ptr_high, ring_cpu_tx_descriptor->pkt_buf_ptr_low, data_phys_addr);
        GET_ADDR_HIGH_LOW(ring_cpu_tx_descriptor->sk_buf_ptr_high, ring_cpu_tx_descriptor->sk_buf_ptr_low, sysb_phys_addr);
    }
}
#endif /* _RDD_CPU_TX_H_ */

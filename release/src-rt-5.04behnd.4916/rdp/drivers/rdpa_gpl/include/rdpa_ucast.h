/*
* <:copyright-BRCM:2013:DUAL/GPL:standard
* 
*    Copyright (c) 2013 Broadcom 
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

#ifndef _RDPA_UCAST_H_
#define _RDPA_UCAST_H_

#include <bdmf_interface.h>
#include "rdpa_ip_class_basic.h"
#include "rdpa_mcast_basic.h"
#include "rdpa_egress_tm.h"
#include "rdpa_cmd_list.h"

#if defined(CONFIG_RUNNER_SPU_OFFLOAD)
#include "rdpa_spu_offload.h"
#endif

#if defined(XRDP)
#define DRV_PARSER_DA_FILTER_NUM                    9
#endif

#define RDPA_UCAST_IP_ADDRESSES_TABLE_SIZE           4
#define RDPA_UCAST_IP_ADDRESSES_TABLE_INDEX_INVALID  RDPA_UCAST_IP_ADDRESSES_TABLE_SIZE

#define RDPA_UCAST_MAX_DS_WAN_UDP_FILTERS            32

#ifndef CONFIG_BCM_RUNNER_MAX_FLOWS
#if defined(CONFIG_BCM_RDPA_CNTXT_EXT_SUPPORT)
#define RDPA_L3_UCAST_MAX_FLOWS     (2*16*1024)
#else
#define RDPA_L3_UCAST_MAX_FLOWS     (16*1024)
#endif
#else
#if defined(CONFIG_BCM_RDPA_CNTXT_EXT_SUPPORT)
#define RDPA_L3_UCAST_MAX_FLOWS     (2*CONFIG_BCM_RUNNER_MAX_FLOWS)
#else
#define RDPA_L3_UCAST_MAX_FLOWS     (CONFIG_BCM_RUNNER_MAX_FLOWS)
#endif
#endif

#if ((defined(LEGACY_RDP)) && ((RDPA_L3_UCAST_MAX_FLOWS) > (16*1024)))
#error " Number of runner flows for RDP platforms cann't exceed 16K !"
#endif


/** 5-tuple based IP flow classifaction result.\n
 * Each result determines L2/3/4 header manipulation, forwarding decision and QoS mapping information.\n
 */
typedef struct {
    bdmf_object_handle port_egress_obj;                    /**< RDPA Egress Interface */
    uint32_t queue_id;                                     /**< Egress queue id */
    uint8_t service_q_id;                                  /**< Service queue id */
    uint8_t is_service_queue;                              /**< Service queue */
    int wan_flow;                                          /**< DSL ATM/PTM US channel */
    int wan_flow_mode;                                          /**< DSL ATM/PTM US channel */
    uint8_t is_routed;                                     /**< 1: Routed Flow; 0: Bridged Flow */
    uint8_t is_l2_accel;                                   /**< 1: L2 acceleratd Flow; 0: L3 accelerated Flow */
    uint8_t is_tcpspdtest;                                 /**< 1: TCPSPD_test; 0: No TCPSPD_test */
#if defined(XRDP)
    uint8_t spdtest_stream_id;                          /**< 1: TCPSPD_test; 0: No TCPSPD_test */    
    uint8_t tcpspdtest_is_upload;                          /**< 1: TCPSPD_test; 0: No TCPSPD_test */
#endif
    uint8_t is_hit_trap;                                   /**< 1: Trap to cpu; 0: forwarding */
    uint8_t tc;                                            /**< 6-bit traffic class value */
    uint8_t is_wred_high_prio;                             /**< 1: WRED High Priority class, 0: WRED Low Priority class */
    uint8_t is_ingqos_high_prio;                           /**< 1: Ingress QoS High Priority, 0: Low Priority */
    uint8_t is_mapt_us;                                    /**< 1: MAP-T Upstream Flow; 0: Not MAP-T Upstream Flow */
    uint8_t is_tunnel;                                     /**< 1: Downstream tunnel flow DSLITE/GRE/VXLAN/MAPT */
    bdmf_object_handle policer_obj;                        /**< Policer Object used if ::rdpa_fc_action_policer is set (supported for downstream traffic only).*/
    uint8_t drop;                                          /**< 1: Drop packets; 0: Forward packets */
    uint8_t ip_addresses_table_index;                      /**< IP Addresses Table index assigned to flow */
#ifdef XRDP
    uint16_t max_pkt_len;                                  /**< Max packet size according to Egress Port MTU */
#else
    uint16_t mtu;                                          /**< Egress Port MTU */
#endif
    uint8_t tos;                                           /**< Learned RX ToS value */
#if defined(CONFIG_MULTI_IMP_SF2_LAG_PORT_SUPPORT)
    uint8_t lag_port;                                      /**< Runner Egress LAG Port */
#endif
    union {
        uint32_t wl_metadata;                              /**< WL metadata */
        rdpa_wfd_t wfd;
        rdpa_rnr_t rnr;
    };
    uint8_t cpu_reason;                                    /**< CPU_rx trap reason */    
    uint8_t pathstat_idx;                                  /**< Pathstat counter index */
    uint8_t spdsvc;                                        /**< flow dedicated for speed service */    
    uint8_t cntxt_ext;                                     /**< 1: Context extended to another flow */    
    uint8_t cmd_list_data_length;                          /**< (XPE) length of data in the command list */    
    uint8_t tx_adjust;                                     /**< tx adjust */    
    uint8_t cmd_list_length;                               /**< Command List Length, in bytes */
    uint32_t cmd_list[RDPA_CMD_LIST_UCAST_LIST_SIZE_32];   /**< Command List */
    int is_group_master; /**< Indicates whether flow is master or not field */
    uint32_t clients_vector[RDPA_MASTER_MC_FLOW_CACHE_CONTEXT_ENTRY_CLIENT_IDX_VECTOR_NUMBER]; /**< Indicates which client is set in Multicast flow one per bit read-only field */
    uint8_t fwd_and_trap;                                  /**< 1: Fwd and Trap to cpu; 0: Fwd only */
#ifdef RDP_UFC_TUNNEL    
    uint8_t tunnel_type;
    uint8_t tunnel_inner_packet_offset;
    uint8_t tunnel_key_offset;
    uint32_t tunnel_key[4];
    uint32_t tunnel_key_mask;
    uint8_t tunnel_index_ref;
#endif
    uint8_t esp_o_udp;
#if defined(CONFIG_RUNNER_SPU_OFFLOAD)
    uint8_t spu;
    uint8_t crypto_session_id;
#endif
#if defined(CONFIG_RUNNER_GDX_SUPPORT) /* TX */
    uint8_t is_gdx_tx;
    uint8_t gdx_prio;
    uint16_t gdx_ctx_data;
#endif
    uint8_t is_flood;   /**< in case of l2 flow indicate flooding flow */
#if defined(CONFIG_RUNNER_FWD_FLOW_CSO)
    uint8_t is_hw_cso;  /**< forwarded packet with HW CSO */
#endif
#if defined(CONFIG_RUNNER_FPI)
    uint8_t vtag_check;
    uint16_t vtag_value;
#endif
} rdpa_ip_flow_result_t;

/** 5-tuple based IP flow classifaction info (key + result).\n
 */
typedef struct {
    uint32_t  hw_flow_id;            /**< 5-tuple based IP flow HW flow ID */
    rdpa_ip_flow_key_t key;          /**< 5-tuple based IP flow key */
    rdpa_ip_flow_result_t result;    /**< 5-tuple based IP flow result */
} rdpa_ip_flow_info_t;

/** IP SA/DA Address Table.\n
 */
typedef struct
{
    bdmf_ip_t src_addr;
    bdmf_ip_t dst_addr;
    uint16_t reference_count;
    uint16_t sram_address;
} rdpa_ip_addresses_table_t;

/** IP SA/DA Address Table.\n
 */
typedef struct
{
    uint32_t offset;
    uint32_t value;
    uint32_t mask;
    uint32_t hits;
} rdpa_ds_wan_udp_filter_t;


/** Flow Cache Global Configuration.\n
 */
typedef struct
{
    uint8_t  fc_accel_mode;
    uint8_t  fc_tcp_ack_mflows;
    uint8_t  fc_tos_mflows;
    uint8_t  fc_pbit_key_mode;
} rdpa_fc_global_cfg_t;

/** @} end of ip_class Doxygen group. */

int rdd_ucast_context_entry_get(bdmf_index flow_entry_index, void *context, uint32_t cntx_size);

#if defined(RDP_UFC)
#define RDPA_MAX_TUNNELS 16 /* should match the TUNNEL_INVALID_NUMBER */
#endif

#endif /* _RDPA_UCAST_H_ */

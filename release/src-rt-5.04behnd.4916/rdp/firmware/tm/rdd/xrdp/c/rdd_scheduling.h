/*
    <:copyright-BRCM:2015:DUAL/GPL:standard
    
       Copyright (c) 2015 Broadcom 
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


#ifndef _SCHEDULING_H
#define _SCHEDULING_H

#include "bdmf_errno.h"
#include "rdd_defs.h"
#include "rdp_platform.h"
#include "rdpa_rate_limit.h"

#if defined(BCM_DSL_XRDP)
#define RDD_ETH_TM_AQM_QUEUE_TABLE_PTR                            RDD_DS_TM_AQM_QUEUE_TABLE_PTR
#define RDD_ETH_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_PTR       RDD_DS_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_PTR
#define RDD_ETH_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_SIZE      RDD_DS_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_SIZE
#define RDD_ETH_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_PTR       RDD_DS_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_PTR
#define RDD_ETH_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_SIZE      RDD_DS_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_SIZE
#define RDD_ETH_TM_RATE_LIMITER_PROFILE_RESIDUE_TABLE_ADDRESS_ARR RDD_DS_TM_RATE_LIMITER_PROFILE_RESIDUE_TABLE_ADDRESS_ARR
#define RDD_ETH_TM_RATE_LIMITER_PROFILE_TABLE_ADDRESS_ARR         RDD_DS_TM_RATE_LIMITER_PROFILE_TABLE_ADDRESS_ARR
#define RDD_ETH_TM_RATE_LIMITER_PROFILE_TABLE_SIZE                RDD_DS_TM_RATE_LIMITER_PROFILE_TABLE_SIZE
#define RDD_ETH_TM_RATE_LIMITER_VALID_PTR                         RDD_DS_TM_RATE_LIMITER_VALID_PTR
#define RDD_ETH_TM_RATE_LIMITER_VALID_SIZE                        RDD_DS_TM_RATE_LIMITER_VALID_SIZE
#define RDD_ETH_TM_RATE_LIMITER_BUDGET_VALID_PTR                  RDD_DS_TM_RATE_LIMITER_BUDGET_VALID_PTR
#define RDD_ETH_TM_RATE_LIMITER_BUDGET_VALID_SIZE                 RDD_DS_TM_RATE_LIMITER_BUDGET_VALID_SIZE
#define RDD_ETH_TM_SCHEDULER_POOL_PTR                             RDD_DS_TM_SCHEDULER_POOL_PTR
#define RDD_ETH_TM_SCHEDULER_TABLE_PTR                            RDD_DS_TM_SCHEDULER_TABLE_PTR
#define RDD_ETH_TM_SCHEDULER_TABLE_SIZE                           RDD_DS_TM_SCHEDULER_TABLE_SIZE
#define RDD_ETH_TM_SCHEDULING_QUEUE_TABLE_PTR                     RDD_DS_TM_SCHEDULING_QUEUE_TABLE_PTR
#define RDD_ETH_TM_SCHEDULING_QUEUE_TABLE_SIZE                    RDD_DS_TM_SCHEDULING_QUEUE_TABLE_SIZE
#define RDD_ETH_TM_SECONDARY_SCHEDULER_TABLE_PTR                  RDD_DS_TM_SECONDARY_SCHEDULER_TABLE_PTR
#define RDD_ETH_TM_SECONDARY_SCHEDULER_TABLE_SIZE                 RDD_DS_TM_SECONDARY_SCHEDULER_TABLE_SIZE
#define RDD_PON_TM_AQM_QUEUE_TABLE_PTR                            RDD_US_TM_AQM_QUEUE_TABLE_PTR
#define RDD_PON_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_PTR       RDD_US_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_PTR
#define RDD_PON_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_SIZE      RDD_US_TM_RATE_LIMITER_BUDGET_DESCRIPTOR_TABLE_SIZE
#define RDD_PON_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_PTR       RDD_US_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_PTR
#define RDD_PON_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_SIZE      RDD_US_TM_RATE_LIMITER_PARAMS_DESCRIPTOR_TABLE_SIZE
#define RDD_PON_TM_RATE_LIMITER_PROFILE_RESIDUE_TABLE_ADDRESS_ARR RDD_US_TM_RATE_LIMITER_PROFILE_RESIDUE_TABLE_ADDRESS_ARR
#define RDD_PON_TM_RATE_LIMITER_PROFILE_TABLE_ADDRESS_ARR         RDD_US_TM_RATE_LIMITER_PROFILE_TABLE_ADDRESS_ARR
#define RDD_PON_TM_RATE_LIMITER_VALID_PTR                         RDD_US_TM_RATE_LIMITER_VALID_PTR
#define RDD_PON_TM_RATE_LIMITER_VALID_SIZE                        RDD_US_TM_RATE_LIMITER_VALID_SIZE
#define RDD_PON_TM_RATE_LIMITER_BUDGET_VALID_PTR                  RDD_US_TM_RATE_LIMITER_BUDGET_VALID_PTR
#define RDD_PON_TM_RATE_LIMITER_BUDGET_VALID_SIZE                 RDD_US_TM_RATE_LIMITER_BUDGET_VALID_SIZE
#define RDD_PON_TM_SCHEDULER_POOL_PTR                             RDD_US_TM_SCHEDULER_POOL_PTR
#define RDD_PON_TM_SCHEDULER_TABLE_PTR                            RDD_US_TM_SCHEDULER_TABLE_PTR
#define RDD_PON_TM_SCHEDULER_TABLE_SIZE                           RDD_US_TM_SCHEDULER_TABLE_SIZE
#define RDD_PON_TM_SCHEDULING_QUEUE_TABLE_PTR                     RDD_US_TM_SCHEDULING_QUEUE_TABLE_PTR
#define RDD_PON_TM_SCHEDULING_QUEUE_TABLE_SIZE                    RDD_US_TM_SCHEDULING_QUEUE_TABLE_SIZE
#define RDD_PON_TM_SECONDARY_SCHEDULER_TABLE_PTR                  RDD_US_TM_SECONDARY_SCHEDULER_TABLE_PTR
#define RDD_PON_TM_SECONDARY_SCHEDULER_TABLE_SIZE                 RDD_US_TM_SECONDARY_SCHEDULER_TABLE_SIZE
#endif

/* A number representing the maximum number of schedulers per type. It is direction inclusive.
 * I.e.: MAX_NUM_SCHEDULERS_PER_TYPE > MAX(TOTAL PRIMARY SCHEDULERS in DS and US, TOTAL SECONDARY SCHEDULERS in DS and US)
 */
#define MAX_NUM_SCHEDULERS_PER_TYPE (64)

typedef enum
{
    scheduler_full_dwrr = 0,
    scheduler_2sp = 1,
    scheduler_4sp = 2,
    scheduler_8sp = 3,
    scheduler_16sp = 4,
    scheduler_full_sp = 5,
    scheduler_num_of_dwrr_offset
} scheduler_dwrr_offset_t;

typedef struct
{
    uint8_t dwrr_offset;
    uint8_t bbh_queue_index;
    uint8_t hw_bbh_qid;
    uint16_t first_q_index;
    uint8_t is_sq;
    /* secondary scheduler fields */
    uint8_t primary_scheduler_index;
    uint8_t primary_scheduler_slot_index;
    rdpa_tm_rl_rate_mode rl_rate_mode;
} scheduler_cfg_t;

typedef struct
{
    uint16_t qm_queue_index;
    uint8_t queue_scheduler_index;
    quantum_number_t quantum_number;
} scheduler_queue_t;

typedef enum
{
    rdd_basic_rl_queue = 0,
    rdd_basic_rl_basic_scheduler = 1,
    num_of_rdd_basic_rl_block = 2
} rdd_basic_rl_block_t;

typedef struct
{
    uint32_t rate;
    uint32_t limit;
    uint32_t residue;
    rdd_basic_rl_block_t type;
    uint32_t block_index;
} rdd_basic_rl_cfg_t;

typedef struct
{
    uint32_t scheduler_table_size;
    uint8_t *scheduler_table_p;
    uint32_t secondary_scheduler_table_size;
    uint8_t *secondary_scheduler_table_p;
    uint32_t rl_params_table_size;
    uint8_t *rl_params_table_p;
    uint32_t rl_budget_valid_max;
    uint8_t *rl_budget_valid_table_p;
    uint8_t *scheduler_pool_p;
    uint32_t rl_budget_desc_table_size;
    uint8_t *rl_budget_desc_table_p;
    uint32_t bbh_queue_descriptor_table_size;
    uint8_t *bbh_queue_descriptor_table_p;
    uint8_t *probability_calc_desc_table_p;
    uint8_t *laqm_debug_table_p;
    uint32_t queue_descriptor_table_size;
    uint8_t *queue_descriptor_table_p;
    uint8_t *aqm_queue_descriptor_table_p;
    uint8_t *queue_pool_p;
    uint32_t qm_queue_start;
    uint32_t qm_queue_end;
    uint8_t  bbh_bound;
} rdd_tm_entity_info;

/* generic API to get\set any scheduler_descriptor */
bdmf_error_t rdd_scheduler_descriptor_set(tm_identifier_e tm_identity, uint8_t scheduler_index, SCHEDULER_DESCRIPTOR_STRUCT *scheduler_descriptor, int only_enable_bit);
bdmf_error_t rdd_scheduler_descriptor_get(tm_identifier_e tm_identity, uint8_t scheduler_index, SCHEDULER_DESCRIPTOR_STRUCT *scheduler_descriptor);

/* generic API to get\set any bbh queue descriptor */
bdmf_error_t rdd_bbh_queue_descriptor_get(tm_identifier_e tm_identity, uint8_t bbh_q_index, BBH_QUEUE_DESCRIPTOR_STRUCT *bbh_queue_descriptor);
bdmf_error_t rdd_bbh_queue_descriptor_set(tm_identifier_e tm_identity, uint8_t bbh_q_index, BBH_QUEUE_DESCRIPTOR_STRUCT *bbh_queue_descriptor);

/* initlize scheduler - to be called on create, init sched structure and bbh queue descriptor */
bdmf_error_t rdd_scheduler_init(tm_identifier_e tm_identity, int16_t channel_id, uint8_t scheduler_index, 
    rdpa_rdd_sched_type_t scheduler_type, scheduler_cfg_t *cfg, rdpa_port_type port_type);

/* configure\remove scheduler queue */
bdmf_error_t rdd_scheduler_queue_cfg(tm_identifier_e tm_identity, int16_t channel_id, uint8_t scheduler_index, rdpa_rdd_sched_type_t scheduler_type, scheduler_queue_t *queue);
bdmf_error_t rdd_scheduler_queue_remove(tm_identifier_e tm_identity, int16_t channel_id, uint8_t scheduler_index, 
rdpa_rdd_sched_type_t scheduler_type, uint8_t queue_scheduler_index, rdpa_port_type port_type);
bdmf_error_t rdd_scheduler_queue_wrr_set(tm_identifier_e tm_identity, uint16_t queue_index, uint8_t quantum_number);

/* API to rate limiter module - still not implemented correct*/
bdmf_error_t _rdd_rate_limiter_cfg(const rdpa_tm_rl_cfg_t *rl_object, rdpa_tm_rl_rate_mode supported_rl_rate_mode, rdpa_tm_rl_rate_mode rl_rate_mode, tm_identifier_e tm_identity, 
    int16_t rl_index, rdd_basic_rl_cfg_t *rl_cfg, int new_conf, uint8_t sir_pir);
bdmf_error_t rdd_rate_limiter_remove(tm_identifier_e tm_identity, int16_t rl_index);

bdmf_error_t rdd_rate_limiter_params_descriptor_set(tm_identifier_e tm_identity, uint8_t rl_index, RATE_LIMITER_PARAMS_DESCRIPTOR_STRUCT *rl_params_descriptor);
bdmf_error_t rdd_rate_limiter_params_descriptor_get(tm_identifier_e tm_identity, uint8_t rl_index, RATE_LIMITER_PARAMS_DESCRIPTOR_STRUCT *rl_params_descriptor);

/* API to RDPA level */
void rdd_set_queue_enable(uint32_t qm_queue_index, bdmf_boolean enable);
void rdd_scheduler_aqm_stats_write(tm_identifier_e tm_identity, uint8_t scheduler_index, rdpa_rdd_sched_type_t scheduler_type, int enable);

/* Internal RDD init function */
/* init bbh queues */
void rdd_bbh_queue_init(void);

/* initialize a general timer action */
void rdd_general_timer_set(uint16_t core_index, uint16_t func_pointer, uint32_t timer_period, uint32_t timer_action);

/* init epon in case epon active */
bdmf_error_t rdd_tm_epon_cfg(void);

/* get drop count */
bdmf_error_t rdd_tx_queue_drop_count_get(uint16_t queue_index, uint32_t *p_packets, uint32_t *p_bytes, bdmf_boolean reset);

void rdd_scheduler_wake_up_bbh_init_data_structure(void);
/* init scheduling tables */
bdmf_error_t rdd_scheduling_init(void);

static inline int channel_is_eth(tm_identifier_e tm_identity)
{
    return (tm_identity >= TM_ETH_START) && (tm_identity <= TM_ETH_END);
}

static inline int channel_is_pon(tm_identifier_e tm_identity)
{
    return (tm_identity == TM_PON_DSL_AE);
}

static inline int channel_is_eth_sq(tm_identifier_e tm_identity)
{
    return (tm_identity == TM_ETH_SQ);
}

static inline rdpa_traffic_dir channel_to_dir(tm_identifier_e tm_identity)
{
    if ((tm_identity >= TM_ETH_START) && (tm_identity <= TM_ETH_END))
        return rdpa_dir_ds;
    else
        return rdpa_dir_us;
}

void rdd_scheduling_conf_init(void);

#if defined(G9991_FC)
int rdd_g9991_vport_to_emac_mapping_cfg(rdd_rdd_vport vport, rdpa_emac emac);
int rdd_g9991_control_sid_set(rdd_rdd_vport vport, rdpa_emac emac);
#endif

#endif

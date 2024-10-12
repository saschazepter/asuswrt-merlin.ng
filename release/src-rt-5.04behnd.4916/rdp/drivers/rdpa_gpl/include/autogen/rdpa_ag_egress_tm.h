// <:copyright-BRCM:2013:DUAL/GPL:standard
// 
//    Copyright (c) 2013 Broadcom 
//    All Rights Reserved
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License, version 2, as published by
// the Free Software Foundation (the "GPL").
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// 
// A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
// writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.
// 
// :>
/*
 * egress_tm object header file.
 * This header file is generated automatically. Do not edit!
 */
#ifndef _RDPA_AG_EGRESS_TM_H_
#define _RDPA_AG_EGRESS_TM_H_

/** \addtogroup egress_tm
 * @{
 */


/** Get egress_tm type handle.
 *
 * This handle should be passed to bdmf_new_and_set() function in
 * order to create an egress_tm object.
 * \return egress_tm type handle
 */
bdmf_type_handle rdpa_egress_tm_drv(void);

/* egress_tm: Attribute types */
typedef enum {
    rdpa_egress_tm_attr_dir = 0, /* dir : R : enum : Traffic Direction */
    rdpa_egress_tm_attr_index = 2, /* index : KRI : number : Egress-TM Index */
    rdpa_egress_tm_attr_level = 3, /* level : RI : enum : Egress-TM Next Level */
    rdpa_egress_tm_attr_mode = 4, /* mode : RI : enum : Scheduler Operating Mode */
    rdpa_egress_tm_attr_overall_rl = 5, /* overall_rl : RI : bool : Overall Rate Limiter */
    rdpa_egress_tm_attr_service_queue = 6, /* service_queue : RI : aggregate service_queue_cfg(rdpa_tm_service_queue_t) : Service Queue Parameters Configuration */
    rdpa_egress_tm_attr_rl_rate_mode = 7, /* rl_rate_mode : RI : enum : Subsidiary Rate Limiter Rate Mode */
    rdpa_egress_tm_attr_rate_limit = 8, /* rate_limit : RW : object : Rate Limit object handle */
    rdpa_egress_tm_attr_num_queues = 9, /* num_queues : RI : number : Number of Queues */
    rdpa_egress_tm_attr_num_sp_elements = 10, /* num_sp_elements : RW : enum : Number of SP Scheduling Elements for SP_WRR Scheduling Mode */
    rdpa_egress_tm_attr_queue_cfg = 11, /* queue_cfg : RWDF : aggregate[] tm_queue_cfg(rdpa_tm_queue_cfg_t) : Queue Parameters Configuration */
    rdpa_egress_tm_attr_queue_stat = 12, /* queue_stat : RWF : aggregate[] rdpa_stat_1way(rdpa_stat_1way_t) : Retrieve Egress Queue Statistics */
    rdpa_egress_tm_attr_queue_occupancy = 13, /* queue_occupancy : RF : aggregate[] rdpa_stat(rdpa_stat_t) : Retrieve Egress Queue Occupancy */
    rdpa_egress_tm_attr_subsidiary = 14, /* subsidiary : RWF : object[] : Next Level Egress-TM */
    rdpa_egress_tm_attr_weight = 15, /* weight : RW : number : Weight for WRR scheduling (0 for unset) */
    rdpa_egress_tm_attr_queue_location = 16, /* queue_location : RF : aggregate[] rdpa_tm_queue_location(rdpa_tm_queue_location_t) : Get queue location by qid */
    rdpa_egress_tm_attr_aqm_stats = 17, /* aqm_stats : RW : bool : Collect AQM statistics */
} rdpa_egress_tm_attr_types;

extern int (*f_rdpa_egress_tm_get)(bdmf_number index_, bdmf_object_handle *pmo);

/** Get egress_tm object by key.

 * This function returns egress_tm object instance by key.
 * \param[in] index_    Object key
 * \param[out] egress_tm_obj    Object handle
 * \return    0=OK or error <0
 */
int rdpa_egress_tm_get(bdmf_number index_, bdmf_object_handle *egress_tm_obj);

/** Get egress_tm/dir attribute.
 *
 * Get Traffic Direction.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  dir_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_dir_get(bdmf_object_handle mo_, rdpa_traffic_dir *dir_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_dir, &_nn_);
    *dir_ = (rdpa_traffic_dir)_nn_;
    return _rc_;
}


/** Get egress_tm/index attribute.
 *
 * Get Egress-TM Index.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  index_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_index_get(bdmf_object_handle mo_, bdmf_number *index_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_index, &_nn_);
    *index_ = (bdmf_number)_nn_;
    return _rc_;
}


/** Set egress_tm/index attribute.
 *
 * Set Egress-TM Index.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   index_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_index_set(bdmf_object_handle mo_, bdmf_number index_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_index, index_);
}


/** Get egress_tm/level attribute.
 *
 * Get Egress-TM Next Level.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  level_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_level_get(bdmf_object_handle mo_, rdpa_tm_level_type *level_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_level, &_nn_);
    *level_ = (rdpa_tm_level_type)_nn_;
    return _rc_;
}


/** Set egress_tm/level attribute.
 *
 * Set Egress-TM Next Level.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   level_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_level_set(bdmf_object_handle mo_, rdpa_tm_level_type level_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_level, level_);
}


/** Get egress_tm/mode attribute.
 *
 * Get Scheduler Operating Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  mode_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_mode_get(bdmf_object_handle mo_, rdpa_tm_sched_mode *mode_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_mode, &_nn_);
    *mode_ = (rdpa_tm_sched_mode)_nn_;
    return _rc_;
}


/** Set egress_tm/mode attribute.
 *
 * Set Scheduler Operating Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   mode_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_mode_set(bdmf_object_handle mo_, rdpa_tm_sched_mode mode_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_mode, mode_);
}


/** Get egress_tm/overall_rl attribute.
 *
 * Get Overall Rate Limiter.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  overall_rl_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_overall_rl_get(bdmf_object_handle mo_, bdmf_boolean *overall_rl_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_overall_rl, &_nn_);
    *overall_rl_ = (bdmf_boolean)_nn_;
    return _rc_;
}


/** Set egress_tm/overall_rl attribute.
 *
 * Set Overall Rate Limiter.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   overall_rl_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_overall_rl_set(bdmf_object_handle mo_, bdmf_boolean overall_rl_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_overall_rl, overall_rl_);
}


/** Get egress_tm/service_queue attribute.
 *
 * Get Service Queue Parameters Configuration.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  service_queue_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_service_queue_get(bdmf_object_handle mo_, rdpa_tm_service_queue_t * service_queue_)
{
    return bdmf_attr_get_as_buf(mo_, rdpa_egress_tm_attr_service_queue, service_queue_, sizeof(*service_queue_));
}


/** Set egress_tm/service_queue attribute.
 *
 * Set Service Queue Parameters Configuration.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   service_queue_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_service_queue_set(bdmf_object_handle mo_, const rdpa_tm_service_queue_t * service_queue_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_egress_tm_attr_service_queue, service_queue_, sizeof(*service_queue_));
}


/** Get egress_tm/rl_rate_mode attribute.
 *
 * Get Subsidiary Rate Limiter Rate Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  rl_rate_mode_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_rl_rate_mode_get(bdmf_object_handle mo_, rdpa_tm_rl_rate_mode *rl_rate_mode_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_rl_rate_mode, &_nn_);
    *rl_rate_mode_ = (rdpa_tm_rl_rate_mode)_nn_;
    return _rc_;
}


/** Set egress_tm/rl_rate_mode attribute.
 *
 * Set Subsidiary Rate Limiter Rate Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   rl_rate_mode_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_rl_rate_mode_set(bdmf_object_handle mo_, rdpa_tm_rl_rate_mode rl_rate_mode_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_rl_rate_mode, rl_rate_mode_);
}


/** Get egress_tm/rate_limit attribute.
 *
 * Get Rate Limit object handle.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  rate_limit_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_rate_limit_get(bdmf_object_handle mo_, bdmf_object_handle *rate_limit_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_rate_limit, &_nn_);
    *rate_limit_ = (bdmf_object_handle)(long)_nn_;
    return _rc_;
}


/** Set egress_tm/rate_limit attribute.
 *
 * Set Rate Limit object handle.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   rate_limit_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_rate_limit_set(bdmf_object_handle mo_, bdmf_object_handle rate_limit_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_rate_limit, (long)rate_limit_);
}


/** Get egress_tm/num_queues attribute.
 *
 * Get Number of Queues.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  num_queues_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_num_queues_get(bdmf_object_handle mo_, uint8_t *num_queues_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_num_queues, &_nn_);
    *num_queues_ = (uint8_t)_nn_;
    return _rc_;
}


/** Set egress_tm/num_queues attribute.
 *
 * Set Number of Queues.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   num_queues_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_egress_tm_num_queues_set(bdmf_object_handle mo_, uint8_t num_queues_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_num_queues, num_queues_);
}


/** Get egress_tm/num_sp_elements attribute.
 *
 * Get Number of SP Scheduling Elements for SP_WRR Scheduling Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  num_sp_elements_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_num_sp_elements_get(bdmf_object_handle mo_, rdpa_tm_num_sp_elem *num_sp_elements_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_num_sp_elements, &_nn_);
    *num_sp_elements_ = (rdpa_tm_num_sp_elem)_nn_;
    return _rc_;
}


/** Set egress_tm/num_sp_elements attribute.
 *
 * Set Number of SP Scheduling Elements for SP_WRR Scheduling Mode.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   num_sp_elements_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_num_sp_elements_set(bdmf_object_handle mo_, rdpa_tm_num_sp_elem num_sp_elements_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_num_sp_elements, num_sp_elements_);
}


/** Get egress_tm/queue_cfg attribute entry.
 *
 * Get Queue Parameters Configuration.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  queue_cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_cfg_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tm_queue_cfg_t * queue_cfg_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_egress_tm_attr_queue_cfg, (bdmf_index)ai_, queue_cfg_, sizeof(*queue_cfg_));
}


/** Set egress_tm/queue_cfg attribute entry.
 *
 * Set Queue Parameters Configuration.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   queue_cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_cfg_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tm_queue_cfg_t * queue_cfg_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_egress_tm_attr_queue_cfg, (bdmf_index)ai_, queue_cfg_, sizeof(*queue_cfg_));
}


/** Delete egress_tm/queue_cfg attribute entry.
 *
 * Delete Queue Parameters Configuration.
 * \param[in]   mo_ egress_tm object handle
 * \param[in]   ai_ Attribute array index
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_cfg_delete(bdmf_object_handle mo_, bdmf_index ai_)
{
    return bdmf_attrelem_delete(mo_, rdpa_egress_tm_attr_queue_cfg, (bdmf_index)ai_);
}


/** Get egress_tm/queue_stat attribute entry.
 *
 * Get Retrieve Egress Queue Statistics.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  queue_stat_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_stat_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_stat_1way_t * queue_stat_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_egress_tm_attr_queue_stat, (bdmf_index)ai_, queue_stat_, sizeof(*queue_stat_));
}


/** Set egress_tm/queue_stat attribute entry.
 *
 * Set Retrieve Egress Queue Statistics.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   queue_stat_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_stat_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_stat_1way_t * queue_stat_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_egress_tm_attr_queue_stat, (bdmf_index)ai_, queue_stat_, sizeof(*queue_stat_));
}


/** Get egress_tm/queue_occupancy attribute entry.
 *
 * Get Retrieve Egress Queue Occupancy.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  queue_occupancy_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_occupancy_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_stat_t * queue_occupancy_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_egress_tm_attr_queue_occupancy, (bdmf_index)ai_, queue_occupancy_, sizeof(*queue_occupancy_));
}


/** Get egress_tm/subsidiary attribute entry.
 *
 * Get Next Level Egress-TM.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  subsidiary_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_subsidiary_get(bdmf_object_handle mo_, bdmf_index ai_, bdmf_object_handle *subsidiary_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attrelem_get_as_num(mo_, rdpa_egress_tm_attr_subsidiary, (bdmf_index)ai_, &_nn_);
    *subsidiary_ = (bdmf_object_handle)(long)_nn_;
    return _rc_;
}


/** Set egress_tm/subsidiary attribute entry.
 *
 * Set Next Level Egress-TM.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   subsidiary_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_subsidiary_set(bdmf_object_handle mo_, bdmf_index ai_, bdmf_object_handle subsidiary_)
{
    return bdmf_attrelem_set_as_num(mo_, rdpa_egress_tm_attr_subsidiary, (bdmf_index)ai_, (long)subsidiary_);
}


/** Find egress_tm/subsidiary attribute entry.
 *
 * Find Next Level Egress-TM.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in,out]   ai_ Attribute array index
 * \param[in,out]   subsidiary_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_subsidiary_find(bdmf_object_handle mo_, bdmf_index * ai_, bdmf_object_handle *subsidiary_)
{
    int rc;
    rc = bdmf_attrelem_find(mo_, rdpa_egress_tm_attr_subsidiary, (bdmf_index *)ai_, subsidiary_, sizeof(*subsidiary_));
    return rc;
}


/** Get egress_tm/weight attribute.
 *
 * Get Weight for WRR scheduling (0 for unset).
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  weight_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_weight_get(bdmf_object_handle mo_, bdmf_number *weight_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_weight, &_nn_);
    *weight_ = (bdmf_number)_nn_;
    return _rc_;
}


/** Set egress_tm/weight attribute.
 *
 * Set Weight for WRR scheduling (0 for unset).
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   weight_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_weight_set(bdmf_object_handle mo_, bdmf_number weight_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_weight, weight_);
}


/** Get egress_tm/queue_location attribute entry.
 *
 * Get Get queue location by qid.

 * \deprecated This function has been deprecated.
 *
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  queue_location_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_queue_location_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tm_queue_location_t * queue_location_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_egress_tm_attr_queue_location, (bdmf_index)ai_, queue_location_, sizeof(*queue_location_));
}


/** Get egress_tm/aqm_stats attribute.
 *
 * Get Collect AQM statistics.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[out]  aqm_stats_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_aqm_stats_get(bdmf_object_handle mo_, bdmf_boolean *aqm_stats_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_egress_tm_attr_aqm_stats, &_nn_);
    *aqm_stats_ = (bdmf_boolean)_nn_;
    return _rc_;
}


/** Set egress_tm/aqm_stats attribute.
 *
 * Set Collect AQM statistics.
 * \param[in]   mo_ egress_tm object handle or mattr transaction handle
 * \param[in]   aqm_stats_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_egress_tm_aqm_stats_set(bdmf_object_handle mo_, bdmf_boolean aqm_stats_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_egress_tm_attr_aqm_stats, aqm_stats_);
}

/** @} end of egress_tm Doxygen group */




#endif /* _RDPA_AG_EGRESS_TM_H_ */

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
 * rate_limit object header file.
 * This header file is generated automatically. Do not edit!
 */
#ifndef _RDPA_AG_RATE_LIMIT_H_
#define _RDPA_AG_RATE_LIMIT_H_

/** \addtogroup rate_limit
 * @{
 */


/** Get rate_limit type handle.
 *
 * This handle should be passed to bdmf_new_and_set() function in
 * order to create a rate_limit object.
 * \return rate_limit type handle
 */
bdmf_type_handle rdpa_rate_limit_drv(void);

/* rate_limit: Attribute types */
typedef enum {
    rdpa_rate_limit_attr_index = 0, /* index : KRI : number : Rate_limit Index */
    rdpa_rate_limit_attr_cfg = 1, /* cfg : RW : aggregate tm_rate_limit_cfg(rdpa_rl_cfg_t) : Configuration */
} rdpa_rate_limit_attr_types;

extern int (*f_rdpa_rate_limit_get)(bdmf_number index_, bdmf_object_handle *pmo);

/** Get rate_limit object by key.

 * This function returns rate_limit object instance by key.
 * \param[in] index_    Object key
 * \param[out] rate_limit_obj    Object handle
 * \return    0=OK or error <0
 */
int rdpa_rate_limit_get(bdmf_number index_, bdmf_object_handle *rate_limit_obj);

/** Get rate_limit/index attribute.
 *
 * Get Rate_limit Index.
 * \param[in]   mo_ rate_limit object handle or mattr transaction handle
 * \param[out]  index_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_rate_limit_index_get(bdmf_object_handle mo_, bdmf_number *index_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_rate_limit_attr_index, &_nn_);
    *index_ = (bdmf_number)_nn_;
    return _rc_;
}


/** Set rate_limit/index attribute.
 *
 * Set Rate_limit Index.
 * \param[in]   mo_ rate_limit object handle or mattr transaction handle
 * \param[in]   index_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_rate_limit_index_set(bdmf_object_handle mo_, bdmf_number index_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_rate_limit_attr_index, index_);
}


/** Get rate_limit/cfg attribute.
 *
 * Get Configuration.
 * \param[in]   mo_ rate_limit object handle or mattr transaction handle
 * \param[out]  cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_rate_limit_cfg_get(bdmf_object_handle mo_, rdpa_rl_cfg_t * cfg_)
{
    return bdmf_attr_get_as_buf(mo_, rdpa_rate_limit_attr_cfg, cfg_, sizeof(*cfg_));
}


/** Set rate_limit/cfg attribute.
 *
 * Set Configuration.
 * \param[in]   mo_ rate_limit object handle or mattr transaction handle
 * \param[in]   cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_rate_limit_cfg_set(bdmf_object_handle mo_, const rdpa_rl_cfg_t * cfg_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_rate_limit_attr_cfg, cfg_, sizeof(*cfg_));
}

/** @} end of rate_limit Doxygen group */




#endif /* _RDPA_AG_RATE_LIMIT_H_ */

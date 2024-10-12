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
 * buffer object header file.
 * This header file is generated automatically. Do not edit!
 */
#ifndef _RDPA_AG_BUFFER_H_
#define _RDPA_AG_BUFFER_H_

/** \addtogroup buffer
 * @{
 */


/** Get buffer type handle.
 *
 * This handle should be passed to bdmf_new_and_set() function in
 * order to create a buffer object.
 * \return buffer type handle
 */
bdmf_type_handle rdpa_buffer_drv(void);

/* buffer: Attribute types */
typedef enum {
    rdpa_buffer_attr_index = 0, /* index : KR : number : RDPA Buffer Index */
    rdpa_buffer_attr_init_cfg = 1, /* init_cfg : MRI : aggregate rdpa_buffer_init_cfg(rdpa_buffer_init_cfg_t) : Initial RDPA Buffer Configuration */
} rdpa_buffer_attr_types;

extern int (*f_rdpa_buffer_get)(bdmf_number index_, bdmf_object_handle *pmo);

/** Get buffer object by key.

 * This function returns buffer object instance by key.
 * \param[in] index_    Object key
 * \param[out] buffer_obj    Object handle
 * \return    0=OK or error <0
 */
int rdpa_buffer_get(bdmf_number index_, bdmf_object_handle *buffer_obj);

/** Get buffer/index attribute.
 *
 * Get RDPA Buffer Index.
 * \param[in]   mo_ buffer object handle or mattr transaction handle
 * \param[out]  index_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_buffer_index_get(bdmf_object_handle mo_, bdmf_number *index_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_buffer_attr_index, &_nn_);
    *index_ = (bdmf_number)_nn_;
    return _rc_;
}


/** Get buffer/init_cfg attribute.
 *
 * Get Initial RDPA Buffer Configuration.
 * \param[in]   mo_ buffer object handle or mattr transaction handle
 * \param[out]  init_cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_buffer_init_cfg_get(bdmf_object_handle mo_, rdpa_buffer_init_cfg_t * init_cfg_)
{
    return bdmf_attr_get_as_buf(mo_, rdpa_buffer_attr_init_cfg, init_cfg_, sizeof(*init_cfg_));
}


/** Set buffer/init_cfg attribute.
 *
 * Set Initial RDPA Buffer Configuration.
 * \param[in]   mo_ buffer object handle or mattr transaction handle
 * \param[in]   init_cfg_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_buffer_init_cfg_set(bdmf_object_handle mo_, const rdpa_buffer_init_cfg_t * init_cfg_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_buffer_attr_init_cfg, init_cfg_, sizeof(*init_cfg_));
}

/** @} end of buffer Doxygen group */




#endif /* _RDPA_AG_BUFFER_H_ */

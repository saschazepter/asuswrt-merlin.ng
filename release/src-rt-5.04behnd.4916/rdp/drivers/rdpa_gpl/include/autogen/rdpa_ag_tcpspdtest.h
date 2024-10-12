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
 * tcpspdtest object header file.
 * This header file is generated automatically. Do not edit!
 */
#ifndef _RDPA_AG_TCPSPDTEST_H_
#define _RDPA_AG_TCPSPDTEST_H_

/** \addtogroup tcpspdtest
 * @{
 */


/** Get tcpspdtest type handle.
 *
 * This handle should be passed to bdmf_new_and_set() function in
 * order to create a tcpspdtest object.
 * \return tcpspdtest type handle
 */
bdmf_type_handle rdpa_tcpspdtest_drv(void);

/* tcpspdtest: Attribute types */
typedef enum {
    rdpa_tcpspdtest_attr_engine_global_info = 0, /* engine_global_info : RW : aggregate tcpspdtest_engine_global_info(rdpa_tcpspdtest_engine_global_info_t) : Tcp speed test engin */
    rdpa_tcpspdtest_attr_engine_conn_info = 1, /* engine_conn_info : RWF : aggregate[] tcpspdtest_engine_conn_info(rdpa_tcpspdtest_engine_conn_info_t) : Tcp speed test engine c */
    rdpa_tcpspdtest_attr_engine_tcb = 2, /* engine_tcb : RWF : aggregate[] tcpspdtest_engine_tcb(rdpa_tcpspdtest_engine_tcb_t) : Tcp speed test engine TCB */
    rdpa_tcpspdtest_attr_engine_ref_pkt_hdr = 3, /* engine_ref_pkt_hdr : RWF : aggregate[] tcpspdtest_engine_ref_pkt_hdr(rdpa_tcpspdtest_engine_ref_pkt_hdr_t) : Tcp speed test en */
    rdpa_tcpspdtest_attr_engine_pkt_drop = 4, /* engine_pkt_drop : RWF : aggregate[] tcpspdtest_engine_pkt_drop(rdpa_tcpspdtest_engine_pkt_drop_t) : Tcp speed test engine pack */
    rdpa_tcpspdtest_attr_engine_ring = 5, /* engine_ring : RWADF : aggregate[] tcpspdtest_engine_ring(rdpa_tcpspdtest_engine_ring_t) : Tcp speed test engine ring */
    rdpa_tcpspdtest_attr_engine_ring_dn = 6, /* engine_ring_dn : RWADF : aggregate[] tcpspdtest_engine_ring_dn(rdpa_tcpspdtest_engine_ring_dn_t) : Tcp speed test engine ring_ */
    rdpa_tcpspdtest_attr_engine_ref_pkt = 7, /* engine_ref_pkt : RWF : aggregate[] spdtest_ref_pkt(rdpa_spdtest_ref_pkt_t) : Tcp speed test engine reference packet (upload) */
    rdpa_tcpspdtest_attr_engine_ref_pkts_clr = 8, /* engine_ref_pkts_clr : W : bool : Clear all tcp speed test engine reference packet (end of the test) */
    rdpa_tcpspdtest_attr_start_stream = 9, /* start_stream : W : aggregate tcpspdtest_stream_info(rdpa_tcpspdtest_stream_info_t) : Start stream download/upload */
    rdpa_tcpspdtest_attr_stop_stream = 10, /* stop_stream : W : aggregate tcpspdtest_stream_info(rdpa_tcpspdtest_stream_info_t) : Stop stream download/upload */
    rdpa_tcpspdtest_attr_is_on = 12, /* is_on : RW : bool : TCP speed test mode (on/off) */
} rdpa_tcpspdtest_attr_types;

extern int (*f_rdpa_tcpspdtest_get)(bdmf_object_handle *pmo);

/** Get tcpspdtest object.

 * This function returns tcpspdtest object instance.
 * \param[out] tcpspdtest_obj    Object handle
 * \return    0=OK or error <0
 */
int rdpa_tcpspdtest_get(bdmf_object_handle *tcpspdtest_obj);

/** Get tcpspdtest/engine_global_info attribute.
 *
 * Get Tcp speed test engine global info.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[out]  engine_global_info_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_global_info_get(bdmf_object_handle mo_, rdpa_tcpspdtest_engine_global_info_t * engine_global_info_)
{
    return bdmf_attr_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_global_info, engine_global_info_, sizeof(*engine_global_info_));
}


/** Set tcpspdtest/engine_global_info attribute.
 *
 * Set Tcp speed test engine global info.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   engine_global_info_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_global_info_set(bdmf_object_handle mo_, const rdpa_tcpspdtest_engine_global_info_t * engine_global_info_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_global_info, engine_global_info_, sizeof(*engine_global_info_));
}


/** Get tcpspdtest/engine_conn_info attribute entry.
 *
 * Get Tcp speed test engine connection info.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_conn_info_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_conn_info_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_conn_info_t * engine_conn_info_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_conn_info, (bdmf_index)ai_, engine_conn_info_, sizeof(*engine_conn_info_));
}


/** Set tcpspdtest/engine_conn_info attribute entry.
 *
 * Set Tcp speed test engine connection info.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_conn_info_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_conn_info_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_conn_info_t * engine_conn_info_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_conn_info, (bdmf_index)ai_, engine_conn_info_, sizeof(*engine_conn_info_));
}


/** Get tcpspdtest/engine_tcb attribute entry.
 *
 * Get Tcp speed test engine TCB.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_tcb_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_tcpspdtest_engine_tcb_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_tcb_t * engine_tcb_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_tcb, (bdmf_index)ai_, engine_tcb_, sizeof(*engine_tcb_));
}


/** Set tcpspdtest/engine_tcb attribute entry.
 *
 * Set Tcp speed test engine TCB.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_tcb_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task and softirq contexts.
 */
static inline int rdpa_tcpspdtest_engine_tcb_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_tcb_t * engine_tcb_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_tcb, (bdmf_index)ai_, engine_tcb_, sizeof(*engine_tcb_));
}


/** Get tcpspdtest/engine_ref_pkt_hdr attribute entry.
 *
 * Get Tcp speed test engine reference packet header.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_ref_pkt_hdr_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ref_pkt_hdr_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_ref_pkt_hdr_t * engine_ref_pkt_hdr_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ref_pkt_hdr, (bdmf_index)ai_, engine_ref_pkt_hdr_, sizeof(*engine_ref_pkt_hdr_));
}


/** Set tcpspdtest/engine_ref_pkt_hdr attribute entry.
 *
 * Set Tcp speed test engine reference packet header.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_ref_pkt_hdr_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ref_pkt_hdr_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_ref_pkt_hdr_t * engine_ref_pkt_hdr_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ref_pkt_hdr, (bdmf_index)ai_, engine_ref_pkt_hdr_, sizeof(*engine_ref_pkt_hdr_));
}


/** Get tcpspdtest/engine_pkt_drop attribute entry.
 *
 * Get Tcp speed test engine packet drop.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_pkt_drop_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_pkt_drop_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_pkt_drop_t * engine_pkt_drop_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_pkt_drop, (bdmf_index)ai_, engine_pkt_drop_, sizeof(*engine_pkt_drop_));
}


/** Set tcpspdtest/engine_pkt_drop attribute entry.
 *
 * Set Tcp speed test engine packet drop.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_pkt_drop_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_pkt_drop_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_pkt_drop_t * engine_pkt_drop_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_pkt_drop, (bdmf_index)ai_, engine_pkt_drop_, sizeof(*engine_pkt_drop_));
}


/** Get tcpspdtest/engine_ring attribute entry.
 *
 * Get Tcp speed test engine ring.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_ring_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_ring_t * engine_ring_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring, (bdmf_index)ai_, engine_ring_, sizeof(*engine_ring_));
}


/** Set tcpspdtest/engine_ring attribute entry.
 *
 * Set Tcp speed test engine ring.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_ring_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_ring_t * engine_ring_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring, (bdmf_index)ai_, engine_ring_, sizeof(*engine_ring_));
}


/** Add tcpspdtest/engine_ring attribute entry.
 *
 * Add Tcp speed test engine ring.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in,out]   ai_ Attribute array index
 * \param[in]   engine_ring_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_add(bdmf_object_handle mo_, bdmf_index * ai_, const rdpa_tcpspdtest_engine_ring_t * engine_ring_)
{
    int rc;
    rc = bdmf_attrelem_add_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring, (bdmf_index *)ai_, engine_ring_, sizeof(*engine_ring_));
    return rc;
}


/** Delete tcpspdtest/engine_ring attribute entry.
 *
 * Delete Tcp speed test engine ring.
 * \param[in]   mo_ tcpspdtest object handle
 * \param[in]   ai_ Attribute array index
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_delete(bdmf_object_handle mo_, bdmf_index ai_)
{
    return bdmf_attrelem_delete(mo_, rdpa_tcpspdtest_attr_engine_ring, (bdmf_index)ai_);
}


/** Get tcpspdtest/engine_ring_dn attribute entry.
 *
 * Get Tcp speed test engine ring_dn.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_ring_dn_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_dn_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_tcpspdtest_engine_ring_dn_t * engine_ring_dn_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring_dn, (bdmf_index)ai_, engine_ring_dn_, sizeof(*engine_ring_dn_));
}


/** Set tcpspdtest/engine_ring_dn attribute entry.
 *
 * Set Tcp speed test engine ring_dn.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_ring_dn_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_dn_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_tcpspdtest_engine_ring_dn_t * engine_ring_dn_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring_dn, (bdmf_index)ai_, engine_ring_dn_, sizeof(*engine_ring_dn_));
}


/** Add tcpspdtest/engine_ring_dn attribute entry.
 *
 * Add Tcp speed test engine ring_dn.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in,out]   ai_ Attribute array index
 * \param[in]   engine_ring_dn_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_dn_add(bdmf_object_handle mo_, bdmf_index * ai_, const rdpa_tcpspdtest_engine_ring_dn_t * engine_ring_dn_)
{
    int rc;
    rc = bdmf_attrelem_add_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ring_dn, (bdmf_index *)ai_, engine_ring_dn_, sizeof(*engine_ring_dn_));
    return rc;
}


/** Delete tcpspdtest/engine_ring_dn attribute entry.
 *
 * Delete Tcp speed test engine ring_dn.
 * \param[in]   mo_ tcpspdtest object handle
 * \param[in]   ai_ Attribute array index
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ring_dn_delete(bdmf_object_handle mo_, bdmf_index ai_)
{
    return bdmf_attrelem_delete(mo_, rdpa_tcpspdtest_attr_engine_ring_dn, (bdmf_index)ai_);
}


/** Get tcpspdtest/engine_ref_pkt attribute entry.
 *
 * Get Tcp speed test engine reference packet (upload).
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[out]  engine_ref_pkt_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ref_pkt_get(bdmf_object_handle mo_, bdmf_index ai_, rdpa_spdtest_ref_pkt_t * engine_ref_pkt_)
{
    return bdmf_attrelem_get_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ref_pkt, (bdmf_index)ai_, engine_ref_pkt_, sizeof(*engine_ref_pkt_));
}


/** Set tcpspdtest/engine_ref_pkt attribute entry.
 *
 * Set Tcp speed test engine reference packet (upload).
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   ai_ Attribute array index
 * \param[in]   engine_ref_pkt_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ref_pkt_set(bdmf_object_handle mo_, bdmf_index ai_, const rdpa_spdtest_ref_pkt_t * engine_ref_pkt_)
{
    return bdmf_attrelem_set_as_buf(mo_, rdpa_tcpspdtest_attr_engine_ref_pkt, (bdmf_index)ai_, engine_ref_pkt_, sizeof(*engine_ref_pkt_));
}


/** Invoke tcpspdtest/engine_ref_pkts_clr attribute.
 *
 * Invoke Clear all tcp speed test engine reference packet (end of the test).
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_engine_ref_pkts_clr(bdmf_object_handle mo_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_tcpspdtest_attr_engine_ref_pkts_clr, 1);
}


/** Set tcpspdtest/start_stream attribute.
 *
 * Set Start stream download/upload.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   start_stream_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_start_stream_set(bdmf_object_handle mo_, const rdpa_tcpspdtest_stream_info_t * start_stream_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_tcpspdtest_attr_start_stream, start_stream_, sizeof(*start_stream_));
}


/** Set tcpspdtest/stop_stream attribute.
 *
 * Set Stop stream download/upload.
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   stop_stream_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_stop_stream_set(bdmf_object_handle mo_, const rdpa_tcpspdtest_stream_info_t * stop_stream_)
{
    return bdmf_attr_set_as_buf(mo_, rdpa_tcpspdtest_attr_stop_stream, stop_stream_, sizeof(*stop_stream_));
}


/** Get tcpspdtest/is_on attribute.
 *
 * Get TCP speed test mode (on/off).
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[out]  is_on_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_is_on_get(bdmf_object_handle mo_, bdmf_boolean *is_on_)
{
    bdmf_number _nn_;
    int _rc_;
    _rc_ = bdmf_attr_get_as_num(mo_, rdpa_tcpspdtest_attr_is_on, &_nn_);
    *is_on_ = (bdmf_boolean)_nn_;
    return _rc_;
}


/** Set tcpspdtest/is_on attribute.
 *
 * Set TCP speed test mode (on/off).
 * \param[in]   mo_ tcpspdtest object handle or mattr transaction handle
 * \param[in]   is_on_ Attribute value
 * \return 0 or error code < 0
 * The function can be called in task context only.
 */
static inline int rdpa_tcpspdtest_is_on_set(bdmf_object_handle mo_, bdmf_boolean is_on_)
{
    return bdmf_attr_set_as_num(mo_, rdpa_tcpspdtest_attr_is_on, is_on_);
}

/** @} end of tcpspdtest Doxygen group */




#endif /* _RDPA_AG_TCPSPDTEST_H_ */

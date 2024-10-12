/*
 *  Copyright: (c) 2020 Broadcom.
 *  All rights reserved.
 *
 * <:label-BRCM:2022:DUAL/GPL:standard
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

#ifndef XFLOW_MACSEC_FIRELIGHT_H
#define XFLOW_MACSEC_FIRELIGHT_H

#include <xflow_macsec_common.h>

#define FL_MACSEC_MAX_PORT_NUM                  48
#define _XFLOW_MACSEC_FL_RESERVED_POLICY_INDEX  255
#define XFLOW_MACSEC_UDF_NUM_BITS 416

/* Macros for register MACSEC_INTR_ENABLE. */
#define XFLOW_MACSEC_ENCRYPT_INTR_SA_EXP_NON_EMPTY  0 /* Bit 0 */
#define XFLOW_MACSEC_DECRYPT_INTR_SA_EXP_NON_EMPTY  1 /* Bit 1 */
#define XFLOW_MACSEC_NUM_INTR                       2 /* Number of
                                                      interrupts enabled.*/

extern int
xflow_macsec_firelight_init(int unit);

extern int
xflow_macsec_firelight_cleanup(int unit);

extern void
xflow_macsec_fl_process_ecc_intr(int unit, void* data);

extern int
xflow_macsec_firelight_mac_addr_control_set(int unit, uint32 flags,
                                xflow_macsec_mac_addr_control_t type,
                                bcm_mac_t mac_addr, bcm_ethertype_t value);
extern int
xflow_macsec_firelight_mac_addr_control_get(int unit, uint32 flags,
                                  xflow_macsec_mac_addr_control_t type,
                                  bcm_mac_t *mac_addr, bcm_ethertype_t *value);
extern int
xflow_macsec_firelight_port_control_set(int unit, uint32 flags,
                        bcm_port_t port,
                        xflow_macsec_port_control_t type,
                        uint64 value);
extern int
xflow_macsec_firelight_port_control_get(int unit, uint32 flags,
                        bcm_port_t port,
                        xflow_macsec_port_control_t type,
                        uint64 *value);
extern int
xflow_macsec_firelight_flow_default_policy_get (int,
                        xflow_macsec_policy_id_t *);
extern int
xflow_macsec_firelight_control_set(int, uint32,
                             xflow_macsec_control_t, uint64);
extern int
xflow_macsec_firelight_control_get(int, uint32,
                             xflow_macsec_control_t, uint64 *);
extern int
xflow_macsec_firelight_sc_set(int unit, uint32 oper, int sc_hw_index,
                              xflow_macsec_secure_chan_info_t *sc_info);
extern int
xflow_macsec_firelight_sc_get(int unit, uint32 oper, int sc_hw_index,
                              xflow_macsec_secure_chan_info_t *sc_info);
extern int
xflow_macsec_firelight_policy_set(int unit,
                        int policy_index,
                        xflow_macsec_policy_info_t *policy_info);
extern int
xflow_macsec_firelight_policy_get(int unit, int policy_index,
                        xflow_macsec_policy_info_t *policy_info);
extern int
xflow_macsec_firelight_flow_set(int unit,
                            int sp_tcam_index,
                            xflow_macsec_flow_info_t *flow_info);
extern int
xflow_macsec_firelight_flow_get(int unit,
                            int sp_tcam_index,
                            xflow_macsec_flow_info_t *flow_info);
extern int
xflow_macsec_firelight_flow_enable_set(int unit,
                                       int sp_tcam_index, int enable);
extern int
xflow_macsec_firelight_flow_enable_get(int unit,
                                       int sp_tcam_index, int *enable);
extern int
_xflow_macsec_firelight_counters_init (int unit);

extern int
_xflow_macsec_firelight_counters_cleanup (int unit);

extern int
_xflow_macsec_fl_stat_skip(int unit, xflow_macsec_stat_type_t stat_type,
                           int *skip);
extern int
xflow_macsec_fl_port_rsvd_sc_get (int unit, int oper, int lport,
                            xflow_macsec_secure_chan_id_t *chan_id);

extern int
xflow_macsec_fl_flow_destroy (int unit, int sp_tcam_index);

extern int
xflow_macsec_fl_sp_tcam_move_single_entry (int unit, int to_index,
                                           int from_index);
extern int
xflow_macsec_firelight_port_info_get(int unit, bcm_port_t port,
                                   int *macsec_port,
                                   xflow_macsec_port_info_t *port_info);
extern int
xflow_macsec_fl_sectag_etype_set (int unit, int flags, uint32 sectag_etype,
                               xflow_macsec_sectag_ethertype_t *sectag_etype_sel);

extern int
xflow_macsec_fl_sectag_etype_get (int unit,
                                  xflow_macsec_sectag_ethertype_t sectag_etype_sel,
                                  uint32 *sectag_etype);
extern int
xflow_fl_macsec_port_map_info_get(int unit, uint32 flags, int lport,
                                  xflow_macsec_port_map_info_t *port_map_info);

#endif /* XFLOW_MACSEC_FIRELIGHT_H */

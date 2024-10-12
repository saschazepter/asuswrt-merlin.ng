/*
   Copyright (c) 2015 Broadcom
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


#ifndef _XRDP_DRV_UBUS_RESP_AG_H_
#define _XRDP_DRV_UBUS_RESP_AG_H_

#include <ru.h>
#include <bdmf_interface.h>
#include <rdp_common.h>

#ifdef USE_BDMF_SHELL
#include <bdmf_shell.h>
#endif


/**********************************************************************************************************************
 * start: 
 *     Start address
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_vpb_start_set(uint32_t start);
bdmf_error_t ag_drv_ubus_resp_vpb_start_get(uint32_t *start);

/**********************************************************************************************************************
 * end: 
 *     end addresws
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_vpb_end_set(uint32_t end);
bdmf_error_t ag_drv_ubus_resp_vpb_end_get(uint32_t *end);

/**********************************************************************************************************************
 * start: 
 *     Start address
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_apb_start_set(uint32_t start);
bdmf_error_t ag_drv_ubus_resp_apb_start_get(uint32_t *start);

/**********************************************************************************************************************
 * end: 
 *     end addresws
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_apb_end_set(uint32_t end);
bdmf_error_t ag_drv_ubus_resp_apb_end_get(uint32_t *end);

/**********************************************************************************************************************
 * start: 
 *     Start address
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_0_start_set(uint32_t start);
bdmf_error_t ag_drv_ubus_resp_device_0_start_get(uint32_t *start);

/**********************************************************************************************************************
 * end: 
 *     end addresws
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_0_end_set(uint32_t end);
bdmf_error_t ag_drv_ubus_resp_device_0_end_get(uint32_t *end);

/**********************************************************************************************************************
 * start: 
 *     Start address
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_1_start_set(uint32_t start);
bdmf_error_t ag_drv_ubus_resp_device_1_start_get(uint32_t *start);

/**********************************************************************************************************************
 * end: 
 *     end addresws
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_1_end_set(uint32_t end);
bdmf_error_t ag_drv_ubus_resp_device_1_end_get(uint32_t *end);

/**********************************************************************************************************************
 * start: 
 *     Start address
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_2_start_set(uint32_t start);
bdmf_error_t ag_drv_ubus_resp_device_2_start_get(uint32_t *start);

/**********************************************************************************************************************
 * end: 
 *     end addresws
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_device_2_end_set(uint32_t end);
bdmf_error_t ag_drv_ubus_resp_device_2_end_get(uint32_t *end);

/**********************************************************************************************************************
 * ist: 
 *     ISR - 32bit RNR INT
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_isr_set(uint32_t ist);
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_isr_get(uint32_t *ist);

/**********************************************************************************************************************
 * ism: 
 *     Status Masked of corresponding interrupt source in the ISR
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_ism_get(uint32_t *ism);

/**********************************************************************************************************************
 * iem: 
 *     Each bit in the mask controls the corresponding interrupt source in the IER
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_ier_set(uint32_t iem);
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_ier_get(uint32_t *iem);

/**********************************************************************************************************************
 * ist: 
 *     Each bit in the mask tests the corresponding interrupt source in the ISR
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_itr_set(uint32_t ist);
bdmf_error_t ag_drv_ubus_resp_rnr_intr_ctrl_itr_get(uint32_t *ist);

/**********************************************************************************************************************
 * counter_enable: 
 *     Enable free-running counter
 * profiling_start: 
 *     Start profiling window.
 * manual_stop_mode: 
 *     Enable manual stop mode
 * do_manual_stop: 
 *     Stop window now
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_cfg_set(bdmf_boolean counter_enable, bdmf_boolean profiling_start, bdmf_boolean manual_stop_mode, bdmf_boolean do_manual_stop);
bdmf_error_t ag_drv_ubus_resp_profiling_cfg_get(bdmf_boolean *counter_enable, bdmf_boolean *profiling_start, bdmf_boolean *manual_stop_mode, bdmf_boolean *do_manual_stop);

/**********************************************************************************************************************
 * profiling_on: 
 *     Profiling is currently on
 * cycles_counter: 
 *     Current value of profiling window cycles counter (bits [30:0]
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_status_get(bdmf_boolean *profiling_on, uint32_t *cycles_counter);

/**********************************************************************************************************************
 * val: 
 *     Value
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_counter_get(uint32_t *val);

/**********************************************************************************************************************
 * val: 
 *     Value
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_start_value_get(uint32_t *val);

/**********************************************************************************************************************
 * val: 
 *     Value
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_stop_value_get(uint32_t *val);

/**********************************************************************************************************************
 * profiling_cycles_num: 
 *     Length of profiling window in 500MHz clock cycles
 **********************************************************************************************************************/
bdmf_error_t ag_drv_ubus_resp_profiling_cycle_num_set(uint32_t profiling_cycles_num);
bdmf_error_t ag_drv_ubus_resp_profiling_cycle_num_get(uint32_t *profiling_cycles_num);

#ifdef USE_BDMF_SHELL
enum
{
    cli_ubus_resp_vpb_start,
    cli_ubus_resp_vpb_end,
    cli_ubus_resp_apb_start,
    cli_ubus_resp_apb_end,
    cli_ubus_resp_device_0_start,
    cli_ubus_resp_device_0_end,
    cli_ubus_resp_device_1_start,
    cli_ubus_resp_device_1_end,
    cli_ubus_resp_device_2_start,
    cli_ubus_resp_device_2_end,
    cli_ubus_resp_rnr_intr_ctrl_isr,
    cli_ubus_resp_rnr_intr_ctrl_ism,
    cli_ubus_resp_rnr_intr_ctrl_ier,
    cli_ubus_resp_rnr_intr_ctrl_itr,
    cli_ubus_resp_profiling_cfg,
    cli_ubus_resp_profiling_status,
    cli_ubus_resp_profiling_counter,
    cli_ubus_resp_profiling_start_value,
    cli_ubus_resp_profiling_stop_value,
    cli_ubus_resp_profiling_cycle_num,
};

int bcm_ubus_resp_cli_get(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms);
bdmfmon_handle_t ag_drv_ubus_resp_cli_init(bdmfmon_handle_t root_dir);

#endif
#endif

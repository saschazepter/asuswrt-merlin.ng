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

#ifndef _DRV_EPON_EPON_TOP_AG_H_
#define _DRV_EPON_EPON_TOP_AG_H_

#include "access_macros.h"
#if !defined(_CFE_)
#include "bdmf_interface.h"
#else
#include "bdmf_data_types.h"
#include "bdmf_errno.h"
#endif
#ifdef USE_BDMF_SHELL
#include "bdmf_shell.h"
#endif
typedef struct
{
    bdmf_boolean xpcsrxrst_n;
    bdmf_boolean xpcstxrst_n;
    bdmf_boolean xifrst_n;
    bdmf_boolean todrst_n;
    bdmf_boolean clkprgrst_n;
    bdmf_boolean ncorst_n;
    bdmf_boolean lifrst_n;
    bdmf_boolean epnrst_n;
} epon_top_reset;

typedef struct
{
    bdmf_boolean int_1pps;
    bdmf_boolean int_xpcs_tx;
    bdmf_boolean int_xpcs_rx;
    bdmf_boolean int_xif;
    bdmf_boolean int_nco;
    bdmf_boolean int_lif;
    bdmf_boolean int_epn;
} epon_top_interrupt;

typedef struct
{
    bdmf_boolean int_1pps_mask;
    bdmf_boolean int_xpcs_tx_mask;
    bdmf_boolean int_xpcs_rx_mask;
    bdmf_boolean int_xif_mask;
    bdmf_boolean int_nco_mask;
    bdmf_boolean int_lif_mask;
    bdmf_boolean int_epn_mask;
} epon_top_interrupt_mask;

typedef struct
{
    bdmf_boolean cfgepontxclk125_322;
    uint8_t cfgepontxclk125;
    bdmf_boolean cfgtwogigpondns;
    bdmf_boolean cfgtengigponup;
    bdmf_boolean cfgtengigdns;
} epon_top_control;

typedef struct
{
    bdmf_boolean cfg_tod_load_ns;
    bdmf_boolean cfg_tod_5g;
    bdmf_boolean cfg_tod_read;
    uint8_t cfg_tod_read_sel;
    bdmf_boolean cfg_tod_pps_clear;
    bdmf_boolean cfg_tod_load;
    uint32_t cfg_tod_seconds;
} epon_top_tod_config;

bdmf_error_t ag_drv_epon_top_scratch_set(uint32_t scratch);
bdmf_error_t ag_drv_epon_top_scratch_get(uint32_t *scratch);
bdmf_error_t ag_drv_epon_top_reset_set(const epon_top_reset *reset);
bdmf_error_t ag_drv_epon_top_reset_get(epon_top_reset *reset);
bdmf_error_t ag_drv_epon_top_interrupt_set(const epon_top_interrupt *interrupt);
bdmf_error_t ag_drv_epon_top_interrupt_get(epon_top_interrupt *interrupt);
bdmf_error_t ag_drv_epon_top_interrupt_mask_set(const epon_top_interrupt_mask *interrupt_mask);
bdmf_error_t ag_drv_epon_top_interrupt_mask_get(epon_top_interrupt_mask *interrupt_mask);
bdmf_error_t ag_drv_epon_top_control_set(const epon_top_control *control);
bdmf_error_t ag_drv_epon_top_control_get(epon_top_control *control);
bdmf_error_t ag_drv_epon_top_one_pps_mpcp_offset_set(uint32_t cfg_1pps_mpcp_offset);
bdmf_error_t ag_drv_epon_top_one_pps_mpcp_offset_get(uint32_t *cfg_1pps_mpcp_offset);
bdmf_error_t ag_drv_epon_top_one_pps_captured_mpcp_time_get(uint32_t *capture_1pps_mpcp_time);
bdmf_error_t ag_drv_epon_top_tod_config_set(const epon_top_tod_config *tod_config);
bdmf_error_t ag_drv_epon_top_tod_config_get(epon_top_tod_config *tod_config);
bdmf_error_t ag_drv_epon_top_tod_ns_set(uint32_t cfg_tod_ns);
bdmf_error_t ag_drv_epon_top_tod_ns_get(uint32_t *cfg_tod_ns);
bdmf_error_t ag_drv_epon_top_tod_mpcp_set(uint32_t cfg_tod_mpcp);
bdmf_error_t ag_drv_epon_top_tod_mpcp_get(uint32_t *cfg_tod_mpcp);
bdmf_error_t ag_drv_epon_top_ts48_msb_get(uint16_t *ts48_epon_read_msb);
bdmf_error_t ag_drv_epon_top_ts48_lsb_get(uint32_t *ts48_epon_read_lsb);
bdmf_error_t ag_drv_epon_top_tsec_get(uint32_t *tsec_epon_read);
bdmf_error_t ag_drv_epon_top_tns_epon_get(uint32_t *tns_epon_read);

#ifdef USE_BDMF_SHELL
bdmfmon_handle_t ag_drv_epon_top_cli_init(bdmfmon_handle_t driver_dir);
#endif


#endif


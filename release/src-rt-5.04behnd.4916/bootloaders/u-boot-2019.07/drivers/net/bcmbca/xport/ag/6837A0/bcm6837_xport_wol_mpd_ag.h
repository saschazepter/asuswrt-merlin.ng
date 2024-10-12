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

#ifndef _BCM6837_XPORT_WOL_MPD_AG_H_
#define _BCM6837_XPORT_WOL_MPD_AG_H_

int ag_drv_xport_wol_mpd_config_set(uint8_t xlmac_id, uint8_t psw_en, uint8_t mseq_len);
int ag_drv_xport_wol_mpd_config_get(uint8_t xlmac_id, uint8_t *psw_en, uint8_t *mseq_len);
int ag_drv_xport_wol_mpd_control_set(uint8_t xlmac_id, uint8_t mpd_en);
int ag_drv_xport_wol_mpd_control_get(uint8_t xlmac_id, uint8_t *mpd_en);
int ag_drv_xport_wol_mpd_status_get(uint8_t xlmac_id, uint8_t *mp_detected);
int ag_drv_xport_wol_mpd_mseq_mac_da_low_set(uint8_t xlmac_id, uint32_t mac_da_31_0);
int ag_drv_xport_wol_mpd_mseq_mac_da_low_get(uint8_t xlmac_id, uint32_t *mac_da_31_0);
int ag_drv_xport_wol_mpd_mseq_mac_da_hi_set(uint8_t xlmac_id, uint16_t mac_da_47_32);
int ag_drv_xport_wol_mpd_mseq_mac_da_hi_get(uint8_t xlmac_id, uint16_t *mac_da_47_32);
int ag_drv_xport_wol_mpd_psw_low_set(uint8_t xlmac_id, uint32_t psw_31_0);
int ag_drv_xport_wol_mpd_psw_low_get(uint8_t xlmac_id, uint32_t *psw_31_0);
int ag_drv_xport_wol_mpd_psw_hi_set(uint8_t xlmac_id, uint16_t psw_47_32);
int ag_drv_xport_wol_mpd_psw_hi_get(uint8_t xlmac_id, uint16_t *psw_47_32);

#ifdef USE_BDMF_SHELL
bdmfmon_handle_t ag_drv_xport_wol_mpd_cli_init(bdmfmon_handle_t driver_dir);
#endif


#endif


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

#include "bcm6837_drivers_xport_ag.h"
#include "bcm6837_xport_wol_ard_ag.h"

#define BLOCK_ADDR_COUNT 3

int ag_drv_xport_wol_ard_config_set(uint8_t xlmac_id, uint8_t has_brcm_tag)
{
    uint32_t reg_config=0;

#ifdef VALIDATE_PARMS
    if((xlmac_id >= BLOCK_ADDR_COUNT) ||
       (has_brcm_tag >= _1BITS_MAX_VAL_))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    reg_config = RU_FIELD_SET(xlmac_id, XPORT_WOL_ARD, CONFIG, HAS_BRCM_TAG, reg_config, has_brcm_tag);

    RU_REG_WRITE(xlmac_id, XPORT_WOL_ARD, CONFIG, reg_config);

    return 0;
}

int ag_drv_xport_wol_ard_config_get(uint8_t xlmac_id, uint8_t *has_brcm_tag)
{
    uint32_t reg_config=0;

#ifdef VALIDATE_PARMS
    if(!has_brcm_tag)
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 2);
        return 2;
    }
    if((xlmac_id >= BLOCK_ADDR_COUNT))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    RU_REG_READ(xlmac_id, XPORT_WOL_ARD, CONFIG, reg_config);

    *has_brcm_tag = RU_FIELD_GET(xlmac_id, XPORT_WOL_ARD, CONFIG, HAS_BRCM_TAG, reg_config);

    return 0;
}

int ag_drv_xport_wol_ard_control_set(uint8_t xlmac_id, uint8_t ard_en)
{
    uint32_t reg_control=0;

#ifdef VALIDATE_PARMS
    if((xlmac_id >= BLOCK_ADDR_COUNT) ||
       (ard_en >= _1BITS_MAX_VAL_))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    reg_control = RU_FIELD_SET(xlmac_id, XPORT_WOL_ARD, CONTROL, ARD_EN, reg_control, ard_en);

    RU_REG_WRITE(xlmac_id, XPORT_WOL_ARD, CONTROL, reg_control);

    return 0;
}

int ag_drv_xport_wol_ard_control_get(uint8_t xlmac_id, uint8_t *ard_en)
{
    uint32_t reg_control=0;

#ifdef VALIDATE_PARMS
    if(!ard_en)
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 2);
        return 2;
    }
    if((xlmac_id >= BLOCK_ADDR_COUNT))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    RU_REG_READ(xlmac_id, XPORT_WOL_ARD, CONTROL, reg_control);

    *ard_en = RU_FIELD_GET(xlmac_id, XPORT_WOL_ARD, CONTROL, ARD_EN, reg_control);

    return 0;
}

int ag_drv_xport_wol_ard_status_get(uint8_t xlmac_id, uint8_t *ar_detected)
{
    uint32_t reg_status=0;

#ifdef VALIDATE_PARMS
    if(!ar_detected)
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 2);
        return 2;
    }
    if((xlmac_id >= BLOCK_ADDR_COUNT))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    RU_REG_READ(xlmac_id, XPORT_WOL_ARD, STATUS, reg_status);

    *ar_detected = RU_FIELD_GET(xlmac_id, XPORT_WOL_ARD, STATUS, AR_DETECTED, reg_status);

    return 0;
}

int ag_drv_xport_wol_ard_custom_tag_cfg_set(uint8_t xlmac_id, uint16_t ethertype1, uint16_t ethertype2)
{
    uint32_t reg_custom_tag_cfg=0;

#ifdef VALIDATE_PARMS
    if((xlmac_id >= BLOCK_ADDR_COUNT))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    reg_custom_tag_cfg = RU_FIELD_SET(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, ETHERTYPE1, reg_custom_tag_cfg, ethertype1);
    reg_custom_tag_cfg = RU_FIELD_SET(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, ETHERTYPE2, reg_custom_tag_cfg, ethertype2);

    RU_REG_WRITE(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, reg_custom_tag_cfg);

    return 0;
}

int ag_drv_xport_wol_ard_custom_tag_cfg_get(uint8_t xlmac_id, uint16_t *ethertype1, uint16_t *ethertype2)
{
    uint32_t reg_custom_tag_cfg=0;

#ifdef VALIDATE_PARMS
    if(!ethertype1 || !ethertype2)
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 2);
        return 2;
    }
    if((xlmac_id >= BLOCK_ADDR_COUNT))
    {
        pr_err("ERROR driver %s:%u|(%d)\n", __FILE__, __LINE__, 0);
        return 0;
    }
#endif

    RU_REG_READ(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, reg_custom_tag_cfg);

    *ethertype1 = RU_FIELD_GET(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, ETHERTYPE1, reg_custom_tag_cfg);
    *ethertype2 = RU_FIELD_GET(xlmac_id, XPORT_WOL_ARD, CUSTOM_TAG_CFG, ETHERTYPE2, reg_custom_tag_cfg);

    return 0;
}


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

#include <linux/delay.h>
#include "common/srds_api_err_code.h"
#include "merlin_mptwo_functions.c"
#include "phy_drv.h"

#define PMD_DEV                 1

static phy_dev_t *g_phy_dev;

DEFINE_SPINLOCK(serdes_lock);

err_code_t merlin_mptwo_pmd_rdt_reg(uint16_t address, uint16_t *val)
{
    return phy_dev_c45_read(g_phy_dev, PMD_DEV, address, val);
}

err_code_t merlin_mptwo_pmd_wr_reg(uint16_t address, uint16_t val)
{
    return phy_dev_c45_write(g_phy_dev, PMD_DEV, address, val);
}

err_code_t merlin_mptwo_pmd_rdt_reg_addr32(uint32_t address, uint16_t *val)
{
    return phy_dev_c45_read(g_phy_dev, PMD_DEV, address, val);
}

err_code_t merlin_mptwo_pmd_mwr_reg(uint16_t address, uint16_t mask, uint8_t lsb, uint16_t val)
{
    return phy_dev_c45_write_mask(g_phy_dev, PMD_DEV, address, mask, lsb, val);
}

err_code_t merlin_mptwo_pmd_mwr_reg_addr32(uint32_t address, uint16_t mask, uint8_t lsb, uint16_t val)
{
    return merlin_mptwo_pmd_mwr_reg(address, mask, lsb, val);
}

err_code_t merlin_mptwo_delay_us(uint32_t delay_us)
{
    udelay(delay_us);

    return ERR_CODE_NONE;
}

err_code_t merlin_mptwo_delay_ns(uint16_t delay_ns)
{
    ndelay(delay_ns);

    return ERR_CODE_NONE;
}

uint8_t merlin_mptwo_get_core(void)
{
    return g_phy_dev->core_index;
}

uint8_t merlin_mptwo_get_lane(void)
{
    return g_phy_dev->lane_index;
}

err_code_t merlin_mptwo_uc_lane_idx_to_system_id(char string[16], uint8_t uc_lane_idx)
{
    sprintf(string, "%u", uc_lane_idx);
    return ERR_CODE_NONE;
}

static void serdes_wrapper_lock(phy_dev_t *phy_dev)
{
    spin_lock_bh(&serdes_lock);
    g_phy_dev = phy_dev;
}

static void serdes_wrapper_unlock(void)
{
    spin_unlock_bh(&serdes_lock);
}

int merlin_mptwo_wrapper_display_diag_data(phy_dev_t *phy_dev, uint32_t level)
{
    err_code_t ret;

    serdes_wrapper_lock(phy_dev);

    ret = merlin_mptwo_display_diag_data(level);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_ucode_mdio_load(phy_dev_t *phy_dev, uint8_t *ucode_image, uint16_t ucode_len)
{
    err_code_t ret;

    serdes_wrapper_lock(phy_dev);

    merlin_mptwo_uc_reset(1); 
    ret = merlin_mptwo_ucode_mdio_load(ucode_image, ucode_len);
    merlin_mptwo_uc_active_enable(1); 
    merlin_mptwo_uc_reset(0);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_ucode_ram_read(phy_dev_t *phy_dev, uint16_t size, uint16_t addr, uint16_t *val)
{
    err_code_t ret;

    serdes_wrapper_lock(phy_dev);

    if (size > 1)
        *val = merlin_mptwo_rdw_uc_ram(&ret, addr);
    else
        *val = merlin_mptwo_rdb_uc_ram(&ret, addr);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_ucode_ram_write(phy_dev_t *phy_dev, uint16_t size, uint16_t addr, uint16_t val)
{
    err_code_t ret;

    serdes_wrapper_lock(phy_dev);

    if (size > 1)
        ret = merlin_mptwo_wrw_uc_ram(addr, val);
    else
        ret = merlin_mptwo_wrb_uc_ram(addr, val);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_txfir_cfg_get(phy_dev_t *phy_dev, int8_t *pre, int8_t *main, int8_t *post1, int8_t *post2)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_read_tx_afe(TX_AFE_PRE, pre);
    ret |= merlin_mptwo_read_tx_afe(TX_AFE_MAIN, main);
    ret |= merlin_mptwo_read_tx_afe(TX_AFE_POST1, post1);
    ret |= merlin_mptwo_read_tx_afe(TX_AFE_POST2, post2);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_txfir_cfg_set(phy_dev_t *phy_dev, int8_t pre, int8_t main, int8_t post1, int8_t post2)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_apply_txfir_cfg(pre, main, post1, post2);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_tx_hpf_get(phy_dev_t *phy_dev, uint8_t *val)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_rd_tx_hpf_config(val);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_tx_hpf_set(phy_dev_t *phy_dev, uint8_t val)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_config_tx_hpf(val);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_get_uc_lane_cfg(phy_dev_t *phy_dev, struct merlin_mptwo_uc_lane_config_st *val)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_get_uc_lane_cfg(val);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrapper_set_uc_lane_cfg(phy_dev_t *phy_dev, struct merlin_mptwo_uc_lane_config_st val)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_set_uc_lane_cfg(val);

    serdes_wrapper_unlock();

    return ret;
}

int merlin_mptwo_wrppaer_lane_pwrdn(phy_dev_t *phy_dev, enum srds_core_pwrdn_mode_enum mode)
{
    err_code_t ret = 0;

    serdes_wrapper_lock(phy_dev);

    ret |= merlin_mptwo_lane_pwrdn(mode);

    serdes_wrapper_unlock();

    return ret;
}

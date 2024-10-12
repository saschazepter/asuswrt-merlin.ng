/*
   Copyright (c) 2013 Broadcom Corporation
   All Rights Reserved

    <:label-BRCM:2013:DUAL/GPL:standard
    
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

/*
 *  Created on: Nov 2016
 *      Author: steven.hsieh@broadcom.com
 */

/*
 * MDIO driver for StarFighter2 - 4908/63138/63148/63158
 */

#include "mdio_drv_sf2.h"
#include "dt_access.h"

#include <linux/spinlock.h>
DEFINE_SPINLOCK(mdio_access);

static void __iomem *  switch_mdio_base;
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM94908)
static void __iomem *  switch_reg_base;
#endif

#define SWITCH_MDIO_BASE        (void *)switch_mdio_base
#define SWITCH_REG_BASE         (void *)switch_reg_base

uint16_t slow_clock_divider;
uint16_t fast_clock_divider;

static int mdio_probe(dt_device_t *pdev)
{
    int ret = 0;
    dt_handle_t dt_handle = dt_dev_get_handle(pdev);

    slow_clock_divider = dt_property_read_u32_default(dt_handle, "clock-divider", 12);
    fast_clock_divider = dt_property_read_u32_default(dt_handle, "clock-divider-fast", FAST_CLOCK_DIVIDER);

    switch_mdio_base = dt_dev_remap_resource(pdev, 0);
    if (IS_ERR(switch_mdio_base))
    {
        ret = PTR_ERR(switch_mdio_base);
        switch_mdio_base = NULL;
        dev_err(&pdev->dev, "Missing switch_mdio_base entry\n");
        goto Exit;
    }
    dev_dbg(&pdev->dev, "switch_mdio_base=0x%px\n", switch_mdio_base);

#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM94908)
    switch_reg_base = dt_dev_remap_resource(pdev, 1);
    if (IS_ERR(switch_reg_base))
    {
        ret = PTR_ERR(switch_reg_base);
        switch_reg_base = NULL;
        dev_err(&pdev->dev, "Missing switch_reg_base entry\n");
        goto Exit;
    }
    dev_dbg(&pdev->dev, "switch_reg_base=0x%px\n", switch_reg_base);
#endif

    dev_info(&pdev->dev, "registered\n");

    ret += mdio_cfg_set(SWITCH_MDIO_BASE + 4, 0, slow_clock_divider);

Exit:
    return ret;
}

static const struct of_device_id of_platform_table[] = {
    { .compatible = "brcm,mdio-sf2" },
    { /* end of list */ },
};

static struct platform_driver of_platform_driver = {
    .driver = {
        .name = "brcm-mdio",
        .of_match_table = of_platform_table,
    },
    .probe = mdio_probe,
};
module_platform_driver(of_platform_driver);

#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM94908)
#define SF2_MDIO_MASTER                     0x01

static void sf2_mdio_master_enable(void)
{
    volatile uint32_t *sw_ctrl_reg = (void *)(SWITCH_REG_BASE);
    uint32_t val32 = *sw_ctrl_reg;
    
    val32 |= SF2_MDIO_MASTER;
    *sw_ctrl_reg = val32;
}

static void sf2_mdio_master_disable(void)
{
    volatile uint32_t *sw_ctrl_reg = (void *)(SWITCH_REG_BASE);
    uint32_t val32 = *sw_ctrl_reg;
    val32 &= ~SF2_MDIO_MASTER;
    *sw_ctrl_reg = val32;
}
#else
#define sf2_mdio_master_enable()
#define sf2_mdio_master_disable()
#endif

int32_t mdio_config_get(uint16_t *probe_mode, uint16_t *fast_mode)
{
    uint16_t _probe_mode, _clock_divider;

    mdio_cfg_get(SWITCH_MDIO_BASE + 4, &_probe_mode, &_clock_divider);

    *probe_mode = _probe_mode;
    *fast_mode = _clock_divider != slow_clock_divider;

    return 0;
}

int32_t mdio_config_set(uint16_t probe_mode, uint16_t fast_mode)
{
    uint16_t _probe_mode, _clock_divider;

    _probe_mode = probe_mode;
    _clock_divider = fast_mode ? fast_clock_divider : slow_clock_divider;

    mdio_cfg_set(SWITCH_MDIO_BASE + 4, _probe_mode, _clock_divider);

    return 0;
}

int32_t mdio_read_c22_register(uint32_t addr, uint32_t reg, uint16_t *val)
{
    int ret = MDIO_OK;

    spin_lock_bh(&mdio_access);
    sf2_mdio_master_disable();

    /* Read twice for DSL based chip requested by hardware */
    ret = mdio_cmd_read_22((void *)SWITCH_MDIO_BASE, addr, reg, val);
    ret += mdio_cmd_read_22((void *)SWITCH_MDIO_BASE, addr, reg, val);

    sf2_mdio_master_enable();
    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_read_c22_register);

int32_t mdio_write_c22_register(uint32_t addr, uint32_t reg, uint16_t val)
{
    int ret = MDIO_OK;

    spin_lock_bh(&mdio_access);
    sf2_mdio_master_disable();

    ret = mdio_cmd_write_22((void *)SWITCH_MDIO_BASE, addr, reg, val);

    sf2_mdio_master_enable();
    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_write_c22_register);

int32_t mdio_read_c45_register(uint32_t addr, uint32_t dev, uint16_t reg, uint16_t *val)
{
    int ret = MDIO_OK;

    spin_lock_bh(&mdio_access);
    sf2_mdio_master_disable();

    ret = mdio_cmd_read_45((void *)SWITCH_MDIO_BASE, addr, dev, reg, val);

    sf2_mdio_master_enable();
    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_read_c45_register);

int32_t mdio_comp_read_c45_register(uint32_t addr, uint32_t dev, uint16_t reg, uint16_t *val, int regIn[], int regOut[])
{
    int ret = MDIO_OK;
    int i;

    spin_lock_bh(&mdio_access);

    for (i=0; regIn[i] != -1; i += 3)
        ret += mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, regIn[i], regIn[i+1], regIn[i+2]);

    ret += mdio_cmd_read_45((void *)SWITCH_MDIO_BASE, addr, dev, reg, val);

    for (i=0; regOut[i] != -1; i += 3)
        ret += mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, regOut[i], regOut[i+1], regOut[i+2]);

    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_comp_read_c45_register);

int32_t mdio_write_c45_register(uint32_t addr, uint32_t dev, uint16_t reg, uint16_t val)
{
    int ret = MDIO_OK;

    spin_lock_bh(&mdio_access);
    sf2_mdio_master_disable();

    ret = mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, dev, reg, val);

    sf2_mdio_master_enable();
    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_write_c45_register);

int32_t mdio_comp_write_c45_register(uint32_t addr, uint32_t dev, uint16_t reg, uint16_t val, int regIn[], int regOut[])
{
    int ret = MDIO_OK;
    int i;

    spin_lock_bh(&mdio_access);

    for (i=0; regIn[i] != -1; i += 3)
        ret += mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, regIn[i], regIn[i+1], regIn[i+2]);

    ret += mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, dev, reg, val);

    for (i=0; regOut[i] != -1; i += 3)
        ret += mdio_cmd_write_45((void *)SWITCH_MDIO_BASE, addr, regOut[i], regOut[i+1], regOut[i+2]);

    spin_unlock_bh(&mdio_access);

    return ret;
}
EXPORT_SYMBOL(mdio_comp_write_c45_register);


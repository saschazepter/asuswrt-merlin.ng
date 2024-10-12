/* SPDX-License-Identifier: GPL-2.0+
 *
 * Copyright 2019 Broadcom Ltd.
 */
/*
   <:copyright-BRCM:2013:DUAL/GPL:standard
   
      Copyright (c) 2013 Broadcom 
      All Rights Reserved
   
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

/*****************************************************************************
 *  Description:
 *      Code for PMC Linux device tree parsing
 *****************************************************************************/

#include "pmc_drv.h"
#include "BPCM.h"
#include <linux/of_device.h>
#include <linux/of_address.h>
#include <linux/slab.h>
#include <linux/of_fdt.h>
#include <linux/libfdt.h>
#include <linux/of_irq.h>
#include <dt-bindings/interrupt-controller/arm-gic.h>
#include "bcm_strap_drv.h"

#ifdef  CONFIG_BRCM_IKOS
#define PMC_RESOURCE_PRINT(fmt, ...)
#else
#define PMC_RESOURCE_PRINT(fmt, ...) printk(fmt, ##__VA_ARGS__)
#endif

struct g_pmc_t *g_pmc = NULL;

static int __init fdt_get_reg_prop(unsigned long node, int index, uint64_t* base, uint64_t* size)
{
    const __be32 *endp, *reg, *as;
    int regsize, offset, addr_cells, size_cells;
    int idx = 0;
    uint64_t value;

    reg = of_get_flat_dt_prop(node, "reg", &regsize);
    if (reg == NULL)
        return 0;
    endp = reg + (regsize / sizeof(__be32));

    offset = fdt_parent_offset(initial_boot_params, node);
    as = of_get_flat_dt_prop(offset, "#size-cells", NULL);
    if (as)
        size_cells = be32_to_cpup(as);
    else
        size_cells = dt_root_size_cells;

    as = of_get_flat_dt_prop(offset, "#address-cells", NULL);
    if (as)
        addr_cells = be32_to_cpup(as);
    else
        addr_cells = dt_root_addr_cells;

    while ((endp - reg) >= (addr_cells + size_cells))
    {
        value = dt_mem_next_cell(addr_cells, &reg);
        if (base)
            *base = value;
        value = dt_mem_next_cell(size_cells, &reg);
        if (size)
            *size = value;
        if (idx == index)
            return 1;

        idx++;
    }

    return 0;
}

static int __init fdt_get_resource_byname(unsigned long node, const char *name, uint64_t *base, uint64_t *size)
{
    const char *resource_name;
    int ret_size = 0;
    int idx = 0;
    int found = 0;

    resource_name = of_get_flat_dt_prop(node, "reg-names", &ret_size);
    while (ret_size > 0)
    {
        if (strncmp(resource_name, name, ret_size) == 0)
        {
            found = 1;
            break;
        }
        idx++;
        resource_name += (strlen(resource_name) + 1);
        ret_size -= (strlen(resource_name) + 1);
    }
    if (!found)
        return -ENODEV;

    *base = of_flat_dt_translate_address_idx(node, idx);
    if (*base == OF_BAD_ADDR)
    {
        printk("Failed to translate %s base address\n", name);
        return -ENXIO;
    }

    found = fdt_get_reg_prop(node, idx, NULL, size);
    if (!found)
        return -EINVAL;

    return 0;
}

static void pmc_1_x_unmap(struct g_pmc_t *g_pmc)
{
    if (!IS_ERR_OR_NULL(g_pmc->pmc_base))
        iounmap(g_pmc->pmc_base);

    if (!IS_ERR_OR_NULL(g_pmc->procmon_base))
        iounmap(g_pmc->procmon_base);
}

static __init int dt_parse_1_x(unsigned long node, struct g_pmc_t *g_pmc)
{
    int ret;
    uint64_t base, size;

    g_pmc->unmap = pmc_1_x_unmap;

    ret = fdt_get_resource_byname(node, "pmc", &base, &size);
    if (ret)
    {
        printk("Failed to find pmc resource\n");
        return ret;
    }

    g_pmc->pmc_base = ioremap(base, size);
    if (IS_ERR(g_pmc->pmc_base)) 
    {
        printk("Failed to map the pmc resource\n");
        return -ENXIO;
    }

    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->pmc_base, size);
    ret = fdt_get_resource_byname(node, "procmon", &base, &size);
    if (ret)
    {
        printk("Failed to find procmon resource\n");
        return ret;
    }

    g_pmc->procmon_base = ioremap(base, size);
    if (IS_ERR(g_pmc->procmon_base)) 
    {
        printk("Failed to map the procmon resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->procmon_base, size);

    g_pmc->strap = bcm_strap_get_val();

    return 0;
}

static void pmc_3_x_unmap(struct g_pmc_t *g_pmc)
{
    if (!IS_ERR_OR_NULL(g_pmc->pmc_base))
        iounmap(g_pmc->pmc_base);

    if (!IS_ERR_OR_NULL(g_pmc->procmon_base))
        iounmap(g_pmc->procmon_base);

    if (!IS_ERR_OR_NULL(g_pmc->maestro_base))
        iounmap(g_pmc->maestro_base);

#if defined(PMC_LOG_IN_DTCM)
    if (!IS_ERR(g_pmc->dtcm_base))
        iounmap(g_pmc->dtcm_base);
#endif
}

static __init int dt_parse_3_x(unsigned long node, struct g_pmc_t *g_pmc)
{
    int ret;
    uint64_t base, size;

    g_pmc->unmap = pmc_3_x_unmap;

    ret = fdt_get_resource_byname(node, "pmc", &base, &size);
    if (ret)
    {
        printk("Failed to find pmc resource\n");
        return ret;
    }

    g_pmc->pmc_base = ioremap(base, size);
    if (IS_ERR(g_pmc->pmc_base)) 
    {
        printk("Failed to map the pmc resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->pmc_base, size);

    ret = fdt_get_resource_byname(node, "procmon", &base, &size);
    if (ret)
    {
        printk("Failed to find procmon resource\n");
        return ret;
    }

    g_pmc->procmon_base = ioremap(base, size);
    if (IS_ERR(g_pmc->procmon_base)) 
    {
        printk("Failed to map the procmon resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->procmon_base, size);

    ret = fdt_get_resource_byname(node, "maestro", &base, &size);
    if (ret)
    {
        printk("Failed to find maestro resource\n");
        return ret;
    }

    g_pmc->maestro_base = ioremap(base, size);
    if (IS_ERR(g_pmc->maestro_base))
    {
        printk("Failed to map the maestro resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->maestro_base, size);

#if defined(PMC_LOG_IN_DTCM)
    ret = fdt_get_resource_byname(node, "dtcm", &base, &size);
    if (ret)
    {
        printk("Failed to find dtcm resource\n");
        return ret;
    }

    g_pmc->dtcm_base = ioremap(base, size);
    if (IS_ERR(g_pmc->dtcm_base)) 
    {
        printk("Failed to map the dtcm resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->dtcm_base, size);
#endif

    return 0;
}

static void pmc_lite_unmap(struct g_pmc_t *g_pmc)
{
    if (!IS_ERR_OR_NULL(g_pmc->pmc_base))
        iounmap(g_pmc->pmc_base);
}

static __init  int dt_parse_lite(unsigned long node, struct g_pmc_t *g_pmc)
{
    int ret;
    uint64_t base, size;

    g_pmc->unmap = pmc_lite_unmap;

    ret = fdt_get_resource_byname(node, "pmc", &base, &size);
    if (ret)
    {
        printk("Failed to find pmc resource\n");
        return ret;
    }

    g_pmc->pmc_base = ioremap(base, size);
    if (IS_ERR(g_pmc->pmc_base)) 
    {
        printk("Failed to map the pmc resource\n");
        return -ENXIO;
    }
    PMC_RESOURCE_PRINT("     0x%016llx 0x%016llx 0x%08llx\n", base, (uint64_t)(uintptr_t)g_pmc->pmc_base, size);

    return 0;
}

static struct of_device_id const bcm_pmc_of_match[] = {
    { .compatible = "brcm,bca-pmc-1-x" , .data = (void*)dt_parse_1_x, },
    { .compatible = "brcm,bca-pmc-3-1", .data = (void*)dt_parse_3_x, },
    { .compatible = "brcm,bca-pmc-3-2", .data = (void*)dt_parse_3_x, },
    { .compatible = "brcm,bca-pmc-lite", .data = (void*)dt_parse_lite, },
    {}
};

MODULE_DEVICE_TABLE(of, bcm_pmc_of_match);

static const struct of_device_id* fdt_match_node(unsigned long node, const struct of_device_id * match_table)
{
    if (!match_table)
        return NULL;

    while (match_table->compatible[0])
    {
        if (of_flat_dt_is_compatible(node, match_table->compatible))
            return match_table;
        match_table++;
    }

    return NULL;
}

/* Scan function return zero to continue scan the next node and non-zero value
 * stop the scan. Return positive value for successful and otherwise failed case
 */
int __init bcm_pmc_early_scan_dt(unsigned long node, const char *uname, int depth, void *data)
{
    const struct of_device_id *match;
    int(*parse_func)(unsigned long, struct g_pmc_t *);
    int rc = 0;

    if (strncmp(uname, "pmc", strlen(uname)) != 0)
        return 0;

    match = fdt_match_node(node, bcm_pmc_of_match);
    if (!match)
    {
        printk("%s not match PMC\n", uname);
        return 0;
    }
    else 
    {
        printk("%s match PMC %s\n", uname, match->compatible);
    }

    PMC_RESOURCE_PRINT("     Remapping PMC IO memories...\n");
    PMC_RESOURCE_PRINT("             phys              virt          size\n");
    parse_func = (int(*)(unsigned long, struct g_pmc_t *))match->data;

    rc = parse_func(node, g_pmc) ? -ENXIO : 1;
    return rc;
}

void install_pmc_isr(uint32_t virq);
void install_pmc_temp_warn_isr(uint32_t virq);

static int bcm_pmc_probe(struct platform_device *pdev)
{
    int virq;

    virq = platform_get_irq_byname(pdev, "pmc-irq");
    if (virq > 0)
    {
        printk("IRQ virt [%d] registered as pmc interrupt\n", virq);
        install_pmc_isr(virq);
    }

    virq = platform_get_irq_byname(pdev, "pmc-temp-irq");
    if (virq > 0)
    {
        printk("IRQ virt [%d] registered as pmc temp warning interrupt\n", virq);
        install_pmc_temp_warn_isr(virq);
    }
    return 0;
}

static struct platform_driver bca_pmc_driver = {
	.driver = {
			.name = "bca_pmc",
			.of_match_table = bcm_pmc_of_match,
	},
	.probe = bcm_pmc_probe,
};

static int __init bcm_pmc_drv_reg(void)
{
    int ret;

    printk("PMC driver initcall\n");
    g_pmc = kzalloc(sizeof(*g_pmc), GFP_KERNEL);
    if (!g_pmc)
    {
        printk("PMC driver: Failed to allocate memory \n");
        ret = -ENOMEM;
        goto error;
    }

    printk("PMC driver scanning DT\n");
    ret = of_scan_flat_dt(bcm_pmc_early_scan_dt, NULL);
    if (ret < 0)
        goto error;

#if defined(PMC_CPUTEMP_SUPPORT)
    g_pmc->bac_cpu_base = ioremap(BAC_CPU_REG_OFFSET, BAC_CPU_REG_SIZE);
    if (IS_ERR(g_pmc->bac_cpu_base)) 
    {
        printk("Failed to map the BIU BAC resource\n");
        ret = IS_ERR(g_pmc->bac_cpu_base);
        g_pmc->bac_cpu_base = NULL;
        goto error; 
    }
#endif

    pmc_init();

    return platform_driver_register(&bca_pmc_driver);

error:

    BUG();

    if (g_pmc)
    {
        if (g_pmc->unmap)
            g_pmc->unmap(g_pmc);
#if defined(PMC_CPUTEMP_SUPPORT)
        if (g_pmc->bac_cpu_base)
            iounmap(g_pmc->bac_cpu_base); 
#endif
        kfree(g_pmc);
    }

    return ret;
}

postcore_initcall(bcm_pmc_drv_reg);

MODULE_DESCRIPTION("Broadcom BCA PMC Driver");
MODULE_LICENSE("GPL v2");

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
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/delay.h>


#include "pmc_drv.h"
#include "pmc_pcie.h"
#include "BPCM.h"
#include "bcm_ubus4.h"

/* Power Down bits in SOFT_RESET register */
#define SOFT_RST_PCIE_PD            (1 << 2)   /* Power Down IDDQ only */
#define SOFT_RST_PCIE_PLL_PD        (1 << 29)  /* Power Down PLL */
#define SOFT_RST_PCIE_PLL_LDO_PD    (1 << 30)  /* Power Down PLL LDO */

typedef struct {
    int pmb_addr;    /* PMB Address */
    int pll;         /* TRUE: port uses GEN3 PLL */
} port_info_t;

static const port_info_t pmc_pcie_port_info[]= {
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM96846) || defined(CONFIG_BCM96855)
	{ PMB_ADDR_PCIE0, FALSE },
	{ PMB_ADDR_PCIE1, FALSE }
#elif defined(CONFIG_BCM94908) || defined(CONFIG_BCM96856) || defined(CONFIG_BCM963146)
	{ PMB_ADDR_PCIE0, FALSE },
	{ PMB_ADDR_PCIE1, FALSE },
	{ PMB_ADDR_PCIE2, FALSE }
#elif defined(CONFIG_BCM963158)
	{ PMB_ADDR_PCIE0, FALSE },
	{ PMB_ADDR_PCIE1, FALSE },
	{ PMB_ADDR_PCIE2, FALSE },
	{ PMB_ADDR_PCIE3, TRUE }    /* GEN3, PLL */
#elif defined(CONFIG_BCM94912) || defined(CONFIG_BCM96813)
	{ PMB_ADDR_PCIE0, FALSE },
	{ PMB_ADDR_PCIE1, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE2, FALSE },
	{ PMB_ADDR_PCIE3, TRUE }    /* GEN3, PLL */
#elif defined(CONFIG_BCM96858)
	{ PMB_ADDR_PCIE0, FALSE },
	{ PMB_ADDR_PCIE1, FALSE },
	{ PMB_ADDR_PCIE_UBUS, FALSE }
#elif defined(CONFIG_BCM96888)
	{ PMB_ADDR_PCIE0, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE1, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE2, FALSE },
	{ PMB_ADDR_PCIE3, TRUE }     /* GEN3, PLL */   
#elif defined(CONFIG_BCM968880) || defined(CONFIG_BCM96837) 
	{ PMB_ADDR_PCIE0, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE1, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE2, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE3, TRUE }     /* GEN3, PLL */   
#elif defined(CONFIG_BCM96765) || defined(CONFIG_BCM96766)
	{ PMB_ADDR_PCIE0, TRUE },    /* GEN3, PLL */
	{ PMB_ADDR_PCIE1, TRUE }     /* GEN3, PLL */
#else /* CONFIG_BCM963178, CONFIG_BCM947622, CONFIG_BCM96878,CONFIG_BCM96756,CONFIG_BCM96764 */
	{ PMB_ADDR_PCIE0, FALSE }
#endif
};

#define MAX_PCIE_UNIT	(sizeof(pmc_pcie_port_info)/sizeof(port_info_t))

#if defined (CONFIG_BCM96858) || defined(CONFIG_BCM96856)
/* registration/deregistration is automatic enable if needed */
//#define UBUS_NODE_REGISTRATION            1
#endif

#define PCIE_INVALID_PORT                 0
#define PCIE_STANDALONE_PORT              1
#define PCIE_BIFURCATED_PORT              2

typedef struct {
    int port_type;
    int slv_node;
    int mst_node;
} ubus_node_info_t;

/* PCIe port UBUS */
static const ubus_node_info_t pmc_pcie_ubus_node[] = {
#if defined (CONFIG_BCM96858)
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0},
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0},
	{PCIE_STANDALONE_PORT, UCB_NODE_ID_SLV_PCIE2, UCB_NODE_ID_MST_PCIE2}
#elif defined(CONFIG_BCM96856)
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0},
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0},
	{PCIE_INVALID_PORT, -1, -1},
#elif defined(CONFIG_BCM96846)
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0},
	{PCIE_BIFURCATED_PORT, UCB_NODE_ID_SLV_PCIE0, UCB_NODE_ID_MST_PCIE0}
#else
	/* SoC that does not require UBUS registration */
	{PCIE_INVALID_PORT, -1, -1},
	{PCIE_INVALID_PORT, -1, -1},
	{PCIE_INVALID_PORT, -1, -1},
	{PCIE_INVALID_PORT, -1, -1}
#endif
};

void pmc_pcie_register_ubus(int unit)
{
	/* Skip registration for ubus earlier than UBUS4 */
	if (pmc_pcie_ubus_node[unit].port_type == PCIE_INVALID_PORT) {
	    return;
	}

#if defined(UBUS_NODE_REGISTRATION)
	/* Register slave node */
	ubus_register_port(pmc_pcie_ubus_node[unit].slv_node);

	/* Register master node */
	ubus_register_port(pmc_pcie_ubus_node[unit].mst_node);
#endif /* UBUS_NODE_REGISTRATION */

	return;
}

void pmc_pcie_deregister_ubus(int unit)
{

	/* Skip deregistration for ubus earlier than UBUS4 */
	/* skip deregister for bifurcated ports */
	if (pmc_pcie_ubus_node[unit].port_type != PCIE_STANDALONE_PORT) {
	    return;
	}

#if defined(UBUS_NODE_REGISTRATION)
	/* unegister slave node */
	ubus_deregister_port(pmc_pcie_ubus_node[unit].slv_node);

	/* Unegister master node */
	ubus_deregister_port(pmc_pcie_ubus_node[unit].mst_node);
#endif /* UBUS_NODE_REGISTRATION */

	return;
}

/**
 * Re-configure UBUS4 for the given PCI-E core.
 * - master token credits for PCIE -> Runner access
 * - master decode window
 */
static void pmc_pcie_ubus_init(int unit)
{
#if defined(CONFIG_BCM96858)
    int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE2};
    /* These credits of PCIe to Runner quads are requiered to Wakeup runner
     * in case of DHD Offload RxComplete */
    apply_ubus_credit_each_master(unit2mst_node_tbl[unit]);

#elif defined(CONFIG_BCM96846)
    /*In 6846 both PCIe shares the same UBUS Master*/
    int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE0};
    ubus_master_set_token_credits(unit2mst_node_tbl[unit], 9, 1);
#elif defined(CONFIG_BCM963158)
    /*In 63158 PCIe#0,1 are bifurcated ports and shares the same UBUS Master */
    int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE2, UBUS_PORT_ID_PCIE3};
    apply_ubus_credit_each_master(unit2mst_node_tbl[unit]);
#elif defined(CONFIG_BCM96856)
    int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE2};
#elif defined(CONFIG_BCM963178) || defined(CONFIG_BCM947622) || defined(CONFIG_BCM96756) || defined(CONFIG_BCM96878) || defined(CONFIG_BCM96855)
    int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0};
#elif defined(CONFIG_BCM963146)
    __attribute__((unused)) int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE1, UBUS_PORT_ID_PCIE2};
#elif defined(CONFIG_BCM94912) || defined(CONFIG_BCM96813) || defined(CONFIG_BCM96888) || defined(CONFIG_BCM968880) || defined(CONFIG_BCM96837)
    __attribute__((unused)) int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE1, UBUS_PORT_ID_PCIE2, UBUS_PORT_ID_PCIE3};
#elif  defined(CONFIG_BCM96765) || defined(CONFIG_BCM96766)
	int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0, UBUS_PORT_ID_PCIE1};
#elif  defined(CONFIG_BCM96764)
	int unit2mst_node_tbl[] = {UBUS_PORT_ID_PCIE0};
#endif

#if defined(CONFIG_BCM_UBUS4_DCM)
    ubus_cong_threshold_wr(unit2mst_node_tbl[unit], 0);
#endif

#if defined(CONFIG_BCM_UBUS_DECODE_REMAP)
    ubus_master_remap_port(unit2mst_node_tbl[unit]);
#endif

#if defined(CONFIG_BCM96856) || defined(CONFIG_BCM96878) || defined(CONFIG_BCM96855)
/* These credits of PCIe to Runner VPB are requiered to wakeup Runner in case of DHD Offload RxComplete */    
    ubus_master_set_token_credits(unit2mst_node_tbl[unit], UBUS_PORT_ID_VPB, 1);
#endif

}

int pmc_pcie_power_up(int unit, int is_dual_lane)
{
	uint32_t sr_ctrl = 0; // Only iddq
	int dual_lane = is_dual_lane;
	int addr;


	if (unit >= MAX_PCIE_UNIT) {
	    printk("Error: PCIe%d >= MAX %d\n", unit, (int)MAX_PCIE_UNIT);
	    return -1;
	}

	addr = pmc_pcie_port_info[unit].pmb_addr;

	if (PowerOnZone(addr, 0)) {
	    printk("Error: PCIe%d, PowerOnZone(%d, 0) failed\n", unit, addr);
	    return -1;
	}

	mdelay(10);

	pmc_pcie_register_ubus(unit);

	if (dual_lane) {
#if defined(CONFIG_BCM963158)
	    int bifur_addr;

	    /* Power up the other bi-furcated port */
	    bifur_addr = pmc_pcie_port_info[unit+1].pmb_addr;
	    if (PowerOnZone(bifur_addr, 0)) {
	        printk("Error: PCIe%d, PowerOnZone(%d, 0) failed\n",
	            unit+1, bifur_addr);
	        return -1;
	    }

	    mdelay(10);
	    if (WriteBPCMRegister(bifur_addr, BPCMRegOffset(sr_control), sr_ctrl)) {
	        printk("Error: PCIe%d, WriteBPCMRegister(%d, 0x%x) failed\n",
	            unit+1, bifur_addr, sr_ctrl);
	        return -1;
	    }
#endif
	    sr_ctrl = 0x80; /* bit7: 1 - Strap override for dual lane support */
	                          /* bit6: Strap value, 0 - dual lane, 1 - single lane */
	    /* reset */
	    if (WriteBPCMRegister(addr, BPCMRegOffset(sr_control), 0xff)) {
	        printk("Error: PCIe%d, WriteBPCMRegister(%d, 0x%x) failed\n",
	            unit, addr, sr_ctrl);
	        return -1;
	    }

	    mdelay(10);
	}

	if (WriteBPCMRegister(addr, BPCMRegOffset(sr_control), sr_ctrl)) {
	    printk("Error: PCIe%d, WriteBPCMRegister(%d, 0x%x) failed\n",
	        unit, addr, sr_ctrl);
	    return -1;
	}

	pmc_pcie_ubus_init(unit);

    return 0;
}

int pmc_pcie_power_down(int unit, int is_dual_lane)
{
	uint32_t sr_ctrl = SOFT_RST_PCIE_PD; // Only iddq
	int addr;

	if (unit >= MAX_PCIE_UNIT)
        return -1;

	addr = pmc_pcie_port_info[unit].pmb_addr;

#if	 defined(CONFIG_BCM96858) || defined(CONFIG_BCM96856) || defined(CONFIG_BCM96846)
	/*On Bifurcation mode we must not shut down and de-register the ubus port of
	 * bifurcated port (0) since we don't know the future status of core 1 */
	if (pmc_pcie_ubus_node[unit].port_type == PCIE_BIFURCATED_PORT)
		return 0;
#endif

	if (pmc_pcie_port_info[unit].pll == TRUE) {
		// To power down PLL and PLL-LDO for PCIe gen 3
		sr_ctrl |= (SOFT_RST_PCIE_PLL_PD | SOFT_RST_PCIE_PLL_LDO_PD);
	}

#if defined(CONFIG_BCM963158) || defined(CONFIG_BCM96855)
	{
		int dual_lane = is_dual_lane;
		int bifur_addr;

		if (dual_lane) {
			/* Identify other bifurcated port address */
			bifur_addr = pmc_pcie_port_info[unit+1].pmb_addr;
			if (WriteBPCMRegister(bifur_addr, BPCMRegOffset(sr_control), sr_ctrl))
                return -1;
			if (PowerOffZone(bifur_addr, 0))
                return -1;
		}
	}
#endif

	if (WriteBPCMRegister(addr, BPCMRegOffset(sr_control), sr_ctrl))
        return -1;

	mdelay(10);

	pmc_pcie_deregister_ubus(unit);

	if (PowerOffZone(addr, 0))
        return -1;

    return 0;
}

EXPORT_SYMBOL(pmc_pcie_power_up);
EXPORT_SYMBOL(pmc_pcie_power_down);

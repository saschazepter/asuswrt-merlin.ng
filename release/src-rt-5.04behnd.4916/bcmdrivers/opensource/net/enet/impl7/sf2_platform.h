/*
   <:copyright-BRCM:2015:DUAL/GPL:standard
   
      Copyright (c) 2015 Broadcom 
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

/*
 *  Created on: May/2017
 *      Author: steven.hsieh@broadcom.com
 */

#ifndef _SF2_platform_H_
#define _SF2_platform_H_

#include "bcmethsw.h"

#if defined(SF2_DUAL)
extern int ext_sw_imp_port;
#define platform_imp_port(u)    ((u)? ext_sw_imp_port : IMP_PORT_ID)
#define LS_PORT_TXQ_OFFSET      4
#else
#define platform_imp_port(u)    IMP_PORT_ID
#endif

inline void platform_set_imp_speed(enetx_port_t *self)
{
#if defined(SF2_EXTERNAL) || defined(SF2_DUAL)
    int unit = IS_ROOT_SW(self)?0:1;
    uint32 val32;
    phy_dev_t *phy_dev;
    phy_drv_t *phy_drv;

    // if sf2 connect thru serdes program SGMII sequences
    if (!self->s.parent_port)
        return;

    phy_dev = self->s.parent_port->p.phy? self->s.parent_port->p.phy : self->s.parent_port->p.delayed_phy;
    if (!phy_dev)
        return;
    phy_drv = phy_dev->phy_drv;

    if (phy_drv->phy_type == PHY_TYPE_6756CLASS_SERDES ||
        phy_drv->phy_type == PHY_TYPE_146CLASS_SERDES ||
        phy_drv->phy_type == PHY_TYPE_138CLASS_SERDES)
    {
        // program 53134 IMP SMGII force 2.5G fiber (sequence provided by 53134 AE)
        val32 = 0x0001; SF2SW_WREG(unit, 0xe6, 0x00, &val32, 1);
        val32 = 0x8000; SF2SW_WREG(unit, 0x14, 0x3e, &val32, 2);  // BLK0 Block Address
        val32 = 0x0c2f; SF2SW_WREG(unit, 0x14, 0x20, &val32, 2);  // disable pll start sequencer
        val32 = 0x8300; SF2SW_WREG(unit, 0x14, 0x3e, &val32, 2);  // Digital Block Address
        val32 = 0x010d; SF2SW_WREG(unit, 0x14, 0x20, &val32, 2);  // enable fiber mode
        val32 = 0xc010; SF2SW_WREG(unit, 0x14, 0x30, &val32, 2);  // force 2.5G fiber enable, 50Mhz refclk

        val32 = 0x8340; SF2SW_WREG(unit, 0x14, 0x3e, &val32, 2);  // Digital5 Block Addres
        val32 = 0x0001; SF2SW_WREG(unit, 0x14, 0x34, &val32, 2);  // set os2 mode
        val32 = 0x8000; SF2SW_WREG(unit, 0x14, 0x3e, &val32, 2);  // BLK0 Block Address
        val32 = 0x0140; SF2SW_WREG(unit, 0x14, 0x00, &val32, 2);  // disable AN, set 1G mode
        val32 = 0x2c2f; SF2SW_WREG(unit, 0x14, 0x20, &val32, 2);  // enable pll start sequencer

        // override p5 & IMP port status
        val32 = 0x004a; SF2SW_WREG(unit, PAGE_CONTROL, 0x5d, &val32, 1);  // port 5 override  no override
        val32 = 0x008b; SF2SW_WREG(unit, PAGE_CONTROL, 0x0e, &val32, 1);  // imp port override 2.5g duplex link up
#if defined(SF2_DUAL)
        if (ext_sw_imp_port != IMP_PORT_ID) {
            val32 = 0x004b; SF2SW_WREG(unit, PAGE_CONTROL, 0x5d, &val32, 1);  // port 5 override  2.5g duplex link up
        }
#endif
    }
    
#else //!SF2_EXTERNAL
    // based on impl5/bcmsw.c:sf2_enable_2_5g()
    volatile u32 *sw_ctrl_reg = (void *)(SWITCH_REG_BASE);
    uint32 val32 = *sw_ctrl_reg;
#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM94908)
    val32 |= SF2_IMP_2_5G_EN;
#elif defined(CONFIG_BCM963158)
    val32 &= ~(IMP_SPEED_MASK);
    val32 |= DEFAULT_IMP_SPEEDS;
#endif
    *sw_ctrl_reg = val32;
#endif //!SF2_EXTERNAL

    if (SWITCH_ETH_MISC_BASE)
        *SWITCH_ETH_MISC_CLKRST_CNTRL |= ETH_MISC_CLKRST_CNTRL_IMP_CLK_SEL;
}

inline void platform_enable_p8_rdp_sel(void)
{
#if defined(CONFIG_BCM94908)
    volatile u32 *sw_ctrl_reg = (void *)(SWITCH_REG_BASE);
    uint32 val32 = *sw_ctrl_reg;
    val32 |= 1<<16; /* P8_RDP_SEL valid in 4908 */
    *sw_ctrl_reg = val32;
#elif defined(CONFIG_BCM963158)
    uint32 val32 = *SWITCH_CROSSBAR_REG;
 #if !defined(ARCHER_DEVICE)
    val32 |= 1<<5; /* P8_MUX_SEL 0=SysPort, 1=XRDP */
 #else
    val32 &= ~(1<<5); /* for runner disabled platforms use sysport instead of XRDP */
 #endif

    *SWITCH_CROSSBAR_REG = val32;
#endif
}

inline void platform_set_clock_normal(int unit)
{
    uint32 reg_val32;

#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM94908)
    /* From PLL low power mode to Normal mode */
    reg_val32 = 0xc0;
    SF2SW_WREG(unit, PAGE_CONTROL, 0xdc, &reg_val32, 4);   // TODO_DUAL: deep green mode in 6756 internal sf2?
    reg_val32 = 0x0;
    SF2SW_WREG(unit, PAGE_CONTROL, 0xdc, &reg_val32, 4);

    /* Bring back system clock and mac clocks */
    SF2SW_RREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
    reg_val32 &= ~(REG_LOW_POWER_CTR_SLEEP_P8     | REG_LOW_POWER_CTR_SLEEP_P5                 |
                   REG_LOW_POWER_CTR_SLEEP_P4     | REG_LOW_POWER_CTR_TIMER_DISABLE            |
                   REG_LOW_POWER_CTR_EN_LOW_POWER | REG_LOW_POWER_CTR_LOW_POWER_DIVIDER_6P25MHZ);
    SF2SW_WREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
#else
    /* change switch clock back to operation mode */
#if defined(CONFIG_BCM963158)
    pmc_switch_clock_lowpower_mode (0);
#elif defined(CONFIG_BCM963178)
    /* Return to fixed clocks */
    reg_val32 = *ETHSW_SWITCH_CTRL_REG &
      ~(ETHSW_SWITCH_CTRL_SWITCH_CLK_SEL_MASK |
        ETHSW_SWITCH_CTRL_SYSPORT_CLK_SEL_MASK |
        ETHSW_SWITCH_CTRL_P8_CLK_SEL_MASK);
    *ETHSW_SWITCH_CTRL_REG = reg_val32 |
      (2<<ETHSW_SWITCH_CTRL_SWITCH_CLK_SEL_SHIFT) |
      (2<<ETHSW_SWITCH_CTRL_SYSPORT_CLK_SEL_SHIFT) |
      (3<<ETHSW_SWITCH_CTRL_P8_CLK_SEL_SHIFT);
#endif

    /* Bring back system clock and mac clocks */
    SF2SW_RREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
    reg_val32 &= ~(REG_LOW_POWER_CTR_TIMER_DISABLE);
    SF2SW_WREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
#endif
}

inline void platform_set_clock_slow(int unit)
{
    uint32 reg_val32;

#if defined(CONFIG_BCM963138) || defined(CONFIG_BCM963148) || defined(CONFIG_BCM94908)
    /* Slow down system clock, stop port5 and port 8 mac clock */
    SF2SW_RREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
    reg_val32 |= REG_LOW_POWER_CTR_SLEEP_P8     | REG_LOW_POWER_CTR_SLEEP_P5                 |
                 REG_LOW_POWER_CTR_SLEEP_P4     | REG_LOW_POWER_CTR_TIMER_DISABLE            |
                 REG_LOW_POWER_CTR_EN_LOW_POWER | REG_LOW_POWER_CTR_LOW_POWER_DIVIDER_6P25MHZ;
    SF2SW_WREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);

    /* Shut Down Channel 2 PLL */
    reg_val32 = 0x1f;
    SF2SW_WREG(unit, PAGE_CONTROL, 0xdc, &reg_val32, 4);
#else /* defined(CONFIG_BCM963158) || defined(CONFIG_BCM963158) */
    /* Slow down system clock */
    SF2SW_RREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);
    reg_val32 |= REG_LOW_POWER_CTR_TIMER_DISABLE;
    SF2SW_WREG(unit, PAGE_CONTROL, REG_LOW_POWER_CTRL, &reg_val32, 4);

    /* change switch clock back to lowpower mode */
#if defined(CONFIG_BCM963158)
    pmc_switch_clock_lowpower_mode (1);
#elif defined(CONFIG_BCM963178)
    /* Use preprogrammed variable speed clock */
    *ETHSW_SWITCH_CTRL_REG &=
      ~(ETHSW_SWITCH_CTRL_SWITCH_CLK_SEL_MASK |
        ETHSW_SWITCH_CTRL_SYSPORT_CLK_SEL_MASK |
        ETHSW_SWITCH_CTRL_P8_CLK_SEL_MASK);
#endif
#endif
}

// ============================================================================
#if   defined(CONFIG_BCM963138)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)

// ============================================================================
#elif defined(CONFIG_BCM963148)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)

// ============================================================================
#elif defined(CONFIG_BCM94908)

#if defined(CONFIG_BCM_ENET_MULTI_IMP_SUPPORT)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS|PBMAP_P5_IMP|PBMAP_P4_IMP)
    const int imp_to_emac[MAX_SWITCH_PORTS+1] = {-1,-1,-1,-1, 2, 1,-1,-1, 0};

    /* Below mapping is used when P7 comes up at 2.5G link speed */
    int port_imp_map_2_5g[MAX_SWITCH_PORTS+1] = 
                        {
                            /* P0 */  P4_PORT_ID,
                            /* P1 */  P5_PORT_ID,
                            /* P2 */  P5_PORT_ID,
                            /* P3 */  P5_PORT_ID, /* 5 /*/
                            /* P4 */  -1,   /* IMP Port */
                            /* P5 */  -1,   /* IMP Port */
                            /* P6 */  -1,   /* Unused/undefined switch port */
                            /* P7 */  IMP_PORT_ID, /* 8 */
                            /* P8 */  -1,   /* IMP Port */
                        };
    /* Below mapping is used when P7 comes up at below 2.5G link speed */
    int port_imp_map_non_2_5g[MAX_SWITCH_PORTS+1] = 
                        {
                            /* P0 */  P4_PORT_ID,
                            /* P1 */  P5_PORT_ID,
                            /* P2 */  P5_PORT_ID,
                            /* P3 */  IMP_PORT_ID, /* 8 /*/
                            /* P4 */  -1,   /* IMP Port */
                            /* P5 */  -1,   /* IMP Port */
                            /* P6 */  -1,   /* Unused/undefined switch port */
                            /* P7 */  IMP_PORT_ID, /* 8 */
                            /* P8 */  -1,   /* IMP Port */
                        };

uint32_t imp_pbmap[MAX_SWITCHES] = {[0 ... (MAX_SWITCHES-1)] = DEFAULT_IMP_PBMAP};
static int port_imp_emac_map[MAX_SWITCH_PORTS+1] = {[0 ... MAX_SWITCH_PORTS] = -1}; 

#endif //CONFIG_BCM_ENET_MULTI_IMP_SUPPORT

// ============================================================================
#elif defined(CONFIG_BCM963158)

#if defined(CONFIG_BCM_ENET_MULTI_IMP_SUPPORT)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS|PBMAP_P7_IMP|PBMAP_P5_IMP)
    const int imp_to_emac[MAX_SWITCH_PORTS+1] = {-1,-1,-1,-1,-1, 1,-1, 2, 0};

    int port_imp_map_2_5g[MAX_SWITCH_PORTS+1] = 
                        {
                            /* P0 */  P5_PORT_ID,
                            /* P1 */  P5_PORT_ID,
                            /* P2 */  P5_PORT_ID,
                            /* P3 */  P7_PORT_ID,
                            /* P4 */  P7_PORT_ID,
                            /* P5 */  -1,   /* IMP Port */
                            /* P6 */  IMP_PORT_ID, /* 8 */
                            /* P7 */  -1,   /* IMP Port */
                            /* P8 */  -1,   /* IMP Port */
                        };

    /* for 653158, both map_2_5g and map_non_2_5g are the same */
    #define port_imp_map_non_2_5g   port_imp_map_2_5g

uint32_t imp_pbmap[MAX_SWITCHES] = {[0 ... (MAX_SWITCHES-1)] = DEFAULT_IMP_PBMAP};
static int port_imp_emac_map[MAX_SWITCH_PORTS+1] = {[0 ... MAX_SWITCH_PORTS] = -1}; 

#else
    #define DEFAULT_IMP_PBMAP       (PBMAP_P8_IMP)
#endif //CONFIG_BCM_ENET_MULTI_IMP_SUPPORT

// ============================================================================
#elif defined(CONFIG_BCM963178)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)
    
    // In 63178, there are 28 tx queues given max 6 outward facing ports 5px4q+1px8q=28q
    // one port can have 8 tx queues, most likely this is WAN port.
    // Port to queue assignment can only be configured during init and can't be changed.
    // Following compile time define will set specified port to use 8Qs so no remapping.
    // Adjust this port number to match WAN port port number.
#if !defined(CONFIG_BCM_HND_EAP)
    #define PORT_WITH_8TXQ          4
#endif

// ============================================================================
#elif defined(CONFIG_BCM96756)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)
    
    // In 6756, there are 28 tx queues. Following 63178, only WAN port will support 8Qs
    // Port to queue assignment can only be configured during init and can't be changed.
    // Following compile time define will set specified port to use 8Qs so no remapping.
    // Adjust this port number to match WAN port port number.
#if !defined(CONFIG_BCM_HND_EAP)
    #define PORT_WITH_8TXQ          0
#endif

// ============================================================================
#elif defined(CONFIG_BCM947622)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)

// ============================================================================
#elif defined(CONFIG_BCM96765)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)
    
    //  24 tx queues  
    //      use case 1: 8 ACB queues x 2 ports (total 16)
    //      use case 2: 8 ACB queues forWAN port, 4x4 queues for others
#if !defined(CONFIG_BCM_HND_EAP)
    #define PORT_WITH_8TXQ          0
#endif
// ============================================================================
#elif defined(CONFIG_BCM96766) || defined(CONFIG_BCM96764)
    #define DEFAULT_IMP_PBMAP       (PBMAP_MIPS)
    
    //  28 tx queues  
    //      max use case p0_WAN 8q + p5_sw_4p 4x4q + p6 4q (total 28)
#if !defined(CONFIG_BCM_HND_EAP)
    #define PORT_WITH_8TXQ          0
#endif
#endif

/************************************************************
 * SF2 Queue Hardware Constants                            *
 ************************************************************/
#if defined(CONFIG_BCM963178)
    #define SF2_MAX_BUFFER_IN_PAGE          0x200   // 128K buffers
#elif defined(CONFIG_BCM96756) || defined(CONFIG_BCM96764)
    #define SF2_MAX_BUFFER_IN_PAGE          0x300   // 192k buffers
#elif defined(CONFIG_BCM96765) || defined(CONFIG_BCM96766)
    #define SF2_MAX_BUFFER_IN_PAGE          0x400   // 256k buffers
#else 
    #define SF2_MAX_BUFFER_IN_PAGE          0x600   // 384k buffers
#endif

    #define SF2_BYTES_PER_PAGE              0x100

#endif


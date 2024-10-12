/*
   Copyright (c) 2016 Broadcom Corporation
   All Rights Reserved

    <:label-BRCM:2021:DUAL/GPL:standard
    
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

#include <linux/ioport.h>
#include <linux/io.h>
#include "os_dep.h"
#include "bcm_bca_leds_dt_bindings.h"
#include "bcm_bca_leds.h"
#include "dt_access.h"

#define MAX_LED_SW_NUM             2
#define MAX_LED_PORT_NUM           8

typedef union {
    struct {
        uint32_t no_link_encode            :2 ; // [01:00]
        uint32_t m10_encode                :2 ; // [03:02]
        uint32_t m100_encode               :2 ; // [05:04]
        uint32_t m1000_encode              :2 ; // [07:06]
        uint32_t sel_no_link_encode        :2 ; // [09:08] 
        uint32_t sel_10m_encode            :2 ; // [11:10]
        uint32_t sel_100m_encode           :2 ; // [13:12]
        uint32_t sel_1000m_encode          :2 ; // [15:14]	  
        uint32_t rx_dv_en                  :1 ; // [16:16]
        uint32_t tx_en_en                  :1 ; // [17:17]
        uint32_t spdlnk_led0_act_sel       :2 ; // [19:18]
        uint32_t spdlnk_led1_act_sel       :2 ; // [21:20]
        uint32_t act_led_act_sel           :2 ; // [23:22]
        uint32_t spdlnk_src_sel            :1 ; // [24:24]	  
        uint32_t spdlnk_led0_act_pol_sel   :1 ; // [25:25]
        uint32_t spdlnk_led1_act_pol_sel   :1 ; // [26:26]
        uint32_t act_led_pol_sel           :1 ; // [27:27]
        uint32_t r1                        :4 ; // [31:28]
    }Bits;
    uint32_t Reg32;
}EPHY_LED_CTRL;

#define LED_REG  EPHY_LED_CTRL

static int driver_init_done=0;
struct EphyLedRegs {
    int                               max_led_regs;
    LED_REG                           **led_reg;
} EphyLedRegs;

#define PEPHY_LED            ((volatile struct EphyLedRegs * const) &EphyLedRegs)

/*
 * mapping for the led reg idx based on led port info(sw:port). See ephyled node 
 * in the chip.dtsi for led idx. Each led register used has the name of led_reg_<idx>.
 */
int led_port2idx_map[MAX_LED_SW_NUM][MAX_LED_PORT_NUM] = {
    /* sw 0 rnr: only port 0 connects to crossbar as wan port*/
    {  5, -1, -1, -1,  -1,  -1, -1, -1 },
    /* sw 1 sf2: port 0-4 map to sw led reg */
    {  0,  1,  2,  3,  4, -1, -1, -1 }
};

static int ephyled_probe(dt_device_t *pdev)
{
    int ret;
    struct resource res;
    int index=0;
    char led_reg_str[25];


    PEPHY_LED->max_led_regs=dt_property_read_u32(dt_dev_get_handle(pdev), "led_reg_max");
    // assume that there is only 1 led_reg if led_reg_max is not defined
    if(PEPHY_LED->max_led_regs == -1)
        PEPHY_LED->max_led_regs=1;


    PEPHY_LED->led_reg = calloc(PEPHY_LED->max_led_regs*sizeof(LED_REG*), PEPHY_LED->max_led_regs);
    if(PEPHY_LED->led_reg == NULL)
    {
        dev_err(&pdev->dev, "memory allocation failed for led_reg\n");
        return -ENOMEM;
    }
    do
    {
        sprintf(led_reg_str, "led_reg_%d", index);
        ret = dev_read_resource_byname(pdev, led_reg_str, &res);
        if (ret)
        {
            PEPHY_LED->led_reg[index]=NULL;
            continue;
        }
        PEPHY_LED->led_reg[index] = devm_ioremap(pdev, res.start, resource_size(&res));
    } while(++index < PEPHY_LED->max_led_regs);

    dev_info(&pdev->dev, "registered\n");

    driver_init_done=1;

    return 0;
}


static const struct udevice_id ephyled_ids[] = {
    { .compatible = "brcm,ephy-led" },
    { /* end of list */ },
};

U_BOOT_DRIVER(brcm_ephyled) = {
    .name	= "brcm-ephyled",
    .id	= UCLASS_MISC,
    .of_match = ephyled_ids,
    .probe = ephyled_probe,
};

int ephy_leds_init(void *_leds_info)
{
    bca_leds_info_t *leds_info = (bca_leds_info_t *)_leds_info;
    int ret = 0;
    int j;
    EPHY_LED_CTRL led_ctrl;
    uint32_t port;
    uint8_t activity;

    if (driver_init_done == 0)
       return -1;
	
    if (leds_info == NULL)
       return -1;

    port = leds_info->port_id;

    if(port == 0xff || port >= PEPHY_LED->max_led_regs
        || PEPHY_LED->led_reg == NULL ||  PEPHY_LED->led_reg[port] == NULL )
    {
        /*No Led data provided */
        return 0;
    }
    
    led_ctrl.Reg32 = PEPHY_LED->led_reg[port]->Reg32;

    led_ctrl.Bits.sel_1000m_encode = 0;
    led_ctrl.Bits.sel_100m_encode = 0;
    led_ctrl.Bits.sel_10m_encode = 0;
    led_ctrl.Bits.sel_no_link_encode = 0;

    led_ctrl.Bits.m1000_encode = 3;
    led_ctrl.Bits.m100_encode = 3;
    led_ctrl.Bits.m10_encode = 3;
    led_ctrl.Bits.no_link_encode = 3;

    for (j = 0; j < 2; j++)
    {
        uint32_t led_mux = leds_info->link[j];
        uint32_t led_activity = leds_info->activity[j];
        activity = 0;

        if (led_mux & LED_SPEED_1G)
            led_ctrl.Bits.m1000_encode &= ~(1<<j);
        if (led_mux & LED_SPEED_100)
            led_ctrl.Bits.m100_encode &= ~(1<<j);
        if (led_mux & LED_SPEED_10)
            led_ctrl.Bits.m10_encode &= ~(1<<j);

        if (led_activity & LED_SPEED_1G)
            led_ctrl.Bits.sel_1000m_encode |= (1<<j);
        if (led_activity & LED_SPEED_100)
            led_ctrl.Bits.sel_100m_encode |= (1<<j);
        if (led_activity & LED_SPEED_10)
            led_ctrl.Bits.sel_10m_encode |= (1<<j);

        /* to configure the speed led to show activity only for specified
           speeds */
        if (led_activity && !(led_mux & led_activity))
            activity = 2;

        switch (j)
        {
        case 0:
            led_ctrl.Bits.spdlnk_led0_act_sel = activity;
            break;
        case 1:
            led_ctrl.Bits.spdlnk_led1_act_sel = activity;
            break;
        }
    }

    if (leds_info->activity[2] || leds_info->link[2])
        led_ctrl.Bits.act_led_act_sel = leds_info->link[2] ? 0 : 2;


    PEPHY_LED->led_reg[port]->Reg32 = led_ctrl.Reg32;
    printk("%s Port %d port %d configured to 0x%08x\n",
        __FUNCTION__, port, port, led_ctrl.Reg32);

    return ret;
}

int ephy_init(void)
{
	struct udevice* dev;
	return uclass_get_device_by_driver(UCLASS_MISC, DM_GET_DRIVER(brcm_ephyled), &dev);
}

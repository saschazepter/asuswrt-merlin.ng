/*
<:copyright-BRCM:2020:DUAL/GPL:standard 

   Copyright (c) 2020 Broadcom 
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
#include <linux/types.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/io.h>
#include <linux/module.h>
#include <linux/version.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <linux/clkdev.h>
#include <linux/delay.h>
#include <linux/clk.h>
#include <linux/bug.h>
#include <linux/of_device.h>
#include <linux/of_address.h>

#include <pmc_usb.h>
#include "bcm_bca_usb_ctrl.h"
#include "bcm_bca_usb_utils.h"

typedef struct usb_ctrl{
    uint32_t setup;
#define USBH_IPP                (1<<5)
#define USBH_IOC                (1<<4)
#define USB_DEVICE_SEL          (1<<11)
    uint32_t pll_ctl;
    uint32_t fladj_value;
    uint32_t bridge_ctl;
#define EHCI_ENDIAN_SWAP        (1<<3)
#define EHCI_DATA_SWAP          (1<<2)
#define OHCI_ENDIAN_SWAP        (1<<1)
#define OHCI_DATA_SWAP          (1<<0)
    uint32_t spare1;
    uint32_t mdio;
#define MDIO_USB3   (1 << 31)
    uint32_t mdio2;
    uint32_t test_port_control;
    uint32_t usb_simctl;
#define USBH_OHCI_MEM_REQ_DIS   (1<<1)
    uint32_t usb_testctl;
    uint32_t usb_testmon;
    uint32_t utmi_ctl_1;
    uint32_t spare2;
    uint32_t usb_pm;
    uint32_t usb_pm_status;
    uint32_t spare3;
    uint32_t pll_ldo_ctl;
    uint32_t pll_ldo_pllbias;
    uint32_t pll_afe_bg_cntl;
    uint32_t afe_usbio_tst;
    uint32_t pll_ndiv_frac;
    uint32_t spare4[3];
    uint32_t usb30_ctl1;
#define PHY3_PLL_SEQ_START      (1<<4)
#define XHC_SOFT_RESETB         (1<<17)
#define USB3_IOC                (1<<28)
    uint32_t usb30_ctl2;
    uint32_t usb30_ctl3;
    uint32_t usb30_ctl4;
    uint32_t usb30_pctl;
    uint32_t usb30_ctl5;
    uint32_t spare5;
} usb_ctrl_t;

static void usb3_pll_fix(uint32_t *mdio)
{
    /* Updating USB 3.0 PHY registers */
    usb_mdio_write(mdio, 0x1f, 0x8000, MDIO_USB3);
    usb_mdio_write(mdio, 0x07, 0x1503, MDIO_USB3);
}

int hw_init(struct bcm_bca_usb_ctrl *bca_usb)
{
    usb_ctrl_t *usb_ctrl = (usb_ctrl_t *)bca_usb->usb_ctrl;
    uint32_t val;
    dev_info(&bca_usb->pdev->dev, "---- Powering up USB blocks\n");

    if(pmc_usb_power_up(PMC_USB_HOST_ALL))
    {
        dev_err(&bca_usb->pdev->dev,"+++ Failed to Power Up USB Host\n");
        return -1;
    }

    mdelay(1);

    if (bca_usb->pwrflt_p_high)
        usb_ctrl->setup &= ~(USBH_IOC);
    else
        usb_ctrl->setup |= USBH_IOC;

    if (bca_usb->pwron_p_high)
        usb_ctrl->setup &= ~(USBH_IPP);
    else
        usb_ctrl->setup |= USBH_IPP;

    if (bca_usb->xhci_enable)
    {
        /*enable SSC for usb3.0 */
        usb3_ssc_enable(&usb_ctrl->mdio);

        mdelay(300);
        /*initialize XHCI settings*/
        usb_ctrl->usb30_ctl1 |= USB3_IOC;
        usb_ctrl->usb30_ctl1 |= XHC_SOFT_RESETB;
        usb_ctrl->usb30_ctl1 |= PHY3_PLL_SEQ_START;
    }
    else
    {
        mdelay(300);
        usb_ctrl->usb30_ctl1 |= USB3_IOC;
        usb_ctrl->usb30_ctl1 &= ~XHC_SOFT_RESETB;
    }

    /*adjust the default AFE settings for better eye diagrams */
    usb2_eye_fix(&usb_ctrl->mdio);

    /*initialize EHCI & OHCI settings*/
    usb_ctrl->bridge_ctl &= ~(EHCI_ENDIAN_SWAP | OHCI_ENDIAN_SWAP);

    /* reset host controllers for possible fake overcurrent indications */ 
    val = usb_ctrl->usb_pm;
    usb_ctrl->usb_pm = 0;
    usb_ctrl->usb_pm = val;
    mdelay(1);

    if (bca_usb->xhci_enable)
        usb3_pll_fix(&usb_ctrl->mdio);

    return 0;
}

void hw_uninit(struct bcm_bca_usb_ctrl *bca_usb)
{
    pmc_usb_power_down(PMC_USB_HOST_ALL);
    mdelay(1);
}


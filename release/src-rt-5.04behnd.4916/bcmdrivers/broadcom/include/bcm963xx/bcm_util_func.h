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

#ifndef _BCM_UTIL_FUNC_H
#define _BCM_UTIL_FUNC_H

#if defined(CONFIG_BLOG)
struct blog_t;
typedef struct blog_t Blog_t;

#include "bcm_rdp_arch.h"

#if defined(RDP_ARCH_SIM)
static inline int __isEnetWanPort(Blog_t *blog_p, int is_rx)
{
    if ((is_rx && blog_p->rx.info.phyHdrType != BLOG_ENETPHY) ||
        (!is_rx && blog_p->tx.info.phyHdrType != BLOG_ENETPHY))
    {
        return 0;
    }

    return rdpa_blog_is_wan_port(blog_p, is_rx);
}

static inline int __isEnetBondedLanWanPort(uint32_t logicalPort)
{
   return 0;
}

static inline int __isWanPort(Blog_t *blog_p, int is_rx)
{
    return rdpa_blog_is_wan_port(blog_p, is_rx);
}

struct net_device;
static inline const char *dev_name_or_null(struct net_device *d) {
    return "NULL";
}

#elif defined(RDP_ARCH_BOARD) || defined (RDP_ARCH_QEMU_SIM)

#if !(defined(CONFIG_BRCM_QEMU) && (defined(CONFIG_BCM96878) || defined(CONFIG_BCM96855) || defined(CONFIG_BCM96888)))

static inline int __isEnetWanPort(Blog_t *blog_p, int is_rx)
{
    int is_wan_port = 0;

    bcmFun_t *enet_is_wan_port_fun = bcmFun_get(BCM_FUN_ID_ENET_IS_WAN_PORT);
    void *ctx = NULL;

    uint32_t logical_port = is_rx ? blog_p->rx.info.channel : blog_p->tx.info.channel;
    ctx = &logical_port;

    BCM_ASSERT(enet_is_wan_port_fun != NULL);

    if ((is_rx && blog_p->rx.info.phyHdrType != BLOG_ENETPHY) ||
        (!is_rx && blog_p->tx.info.phyHdrType != BLOG_ENETPHY))
    {
        return 0;
    }

    is_wan_port = enet_is_wan_port_fun(ctx);
    return is_wan_port;
}

/* Returns TRUE if LAN/SF2-Port is bonded with Runner WAN port */
static inline int __isEnetBondedLanWanPort(uint32_t logicalPort)
{
   int ret_val = FALSE;

#if defined(CONFIG_BCM_DSL_RDP)
  /* Only 63138/148/4908 support LAN/SF2-Port bonded to WAN */
  bcmFun_t *enetFunc = bcmFun_get(BCM_FUN_ID_ENET_IS_BONDED_LAN_WAN_PORT);

  if (enetFunc == NULL)
      return FALSE;

  ret_val = enetFunc(&logicalPort);
#endif

   return (ret_val);
}

static inline int __isWanPort(Blog_t *blog_p, int is_rx)
{
    struct net_device *dev_p;
    uint8_t phyHdrType;
    int chk_netdev_wan_flag = 0;

    if ( is_rx )
    {
        dev_p = blog_p->rx_dev_p;
        phyHdrType = blog_p->rx.info.phyHdrType;
    }
    else
    {
        dev_p = blog_p->tx_dev_p;
        phyHdrType = blog_p->tx.info.phyHdrType;
    }

    /* For PON platforms always check the netdev WAN flag */
#ifdef CONFIG_BCM_PON
    chk_netdev_wan_flag = 1;
#else
   /* For other platforms, check the netdev WAN flag for phy types
       except ENET. For ENET phy, call the ethernet driver
       __isEnetWanPort() function to check if this is a WAN device */
    if (phyHdrType == BLOG_XTMPHY  ||   /* XTM-WAN */
        phyHdrType == BLOG_EPONPHY ||  /* EPON */
        phyHdrType == BLOG_GPONPHY ||  /* GPON */
        phyHdrType == BLOG_USBPHY ||  /* USB */
        phyHdrType == BLOG_GENPHY ||  /* GENERIC */
        phyHdrType == BLOG_WLANPHY)   /* WLAN_PHY*/
    {
        chk_netdev_wan_flag = 1;
    }
#endif

    if (chk_netdev_wan_flag)
    {
        return is_netdev_wan(dev_p);
    }

    if (phyHdrType == BLOG_ENETPHY)
    {
        return __isEnetWanPort(blog_p, is_rx);
    }
    if (phyHdrType == BLOG_SPU_DS || phyHdrType == BLOG_SPDTST)
    {
        /* SPU / SPDTST offloading flows */
        return 0;
    }
    printk("%s Unknown Phy type %d\n", __func__, phyHdrType);
    return 0;
}

#else

static inline int __isEnetWanPort(Blog_t *blog_p, int is_rx)
{
    return 0;
}

static inline int __isEnetBondedLanWanPort(uint32_t logicalPort)
{
    return 0;
}

static inline int __isWanPort(Blog_t *blog_p, int is_rx)
{
    return 0;
}

#endif /* ! CONFIG_BRCM_QEMU */

static inline const char *dev_name_or_null(struct net_device *d) {
    return d ? d->name : "NULL";
}

#else /* no RDP arch */
#error "no arch defined"
#endif /* RDP_ARCH_SIM */

static inline int __is_enet_wlan_port(Blog_t *blog_p, int is_rx)
{
    if (is_rx)
    {
        return (blog_p->rx.info.phyHdrType == BLOG_WLANPHY);
    }
    return (blog_p->tx.info.phyHdrType == BLOG_WLANPHY);
}
#endif

#define __isRxEnetWanPort(b) __isEnetWanPort(b, 1)
#define __isTxEnetWanPort(b) __isEnetWanPort(b, 0)

#define __isRxWanPort(b) __isWanPort(b, 1)
#define __isTxWanPort(b) __isWanPort(b, 0)

#endif /* _BCM_UTIL_FUNC_H */

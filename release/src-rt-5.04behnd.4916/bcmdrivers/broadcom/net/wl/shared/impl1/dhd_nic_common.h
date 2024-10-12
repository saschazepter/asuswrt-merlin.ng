/*
    Copyright (c) 2017 Broadcom
    All Rights Reserved

    <:label-BRCM:2017:DUAL/GPL:standard
    
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

#ifndef __DHD_NIC_COMMON_H__
#define __DHD_NIC_COMMON_H__

#include <linux/netdevice.h>
#include <linux/skbuff.h>
#if defined(BCM_BLOG)
#include <linux/blog.h>
#include <nbuff_pkt.h>
#endif

typedef struct {
    uint tx_tag_nobuf;
    uint tx_fkb_pool_nobuf;
    uint tx_dup_nobuf;
} nbuff_counters_t;

typedef struct {
	osl_pubinfo_t pub;
	nbuff_counters_t nbuff_counters;
	uint16 unit;
	uint16 reg_swizzle;
	int databuf_cache_idx;
	void **databuf_cache;
} osl_pubinfo_nbuff_t;

#ifdef BCM_NBUFF_WLMCAST
enum WLEMF_CMD {
    WLEMF_CMD_GETIGSC,         //get igsc instance
    WLEMF_CMD_SCBFIND,     //find scb by mac
    WLEMF_CMD_GETDEV,
    WLEMF_CMD_PKTDUP,
    WLEMF_CMD_ADD_STA_IP,
    WLEMF_CMD_STA_OFFLOAD_CHECK,   //to check if sta is using hw_ring for multicast
    WLEMF_CMD_PKTFREE
};
#endif

#ifndef netdev_wlan_set
#define netdev_wlan_set(_dev)           (_dev)->priv_flags |= IFF_BCM_WLANDEV
#endif

#ifndef netdev_wlan_unset
#define netdev_wlan_unset(_dev)         (_dev)->priv_flags &= ~IFF_BCM_WLANDEV
#endif

#ifndef is_netdev_wlan
#define is_netdev_wlan(_dev)            ((_dev)->priv_flags & IFF_BCM_WLANDEV)
#endif

#ifndef netdev_wlan_client_get_info
#define netdev_wlan_client_get_info(dev) ((dev)->wlan_client_get_info)
#endif

#ifdef bcm_netdev_ext_field_get
#define bcm_netdev_blog_stats_flags(dev)  bcm_netdev_ext_field_get(dev, blog_stats_flags)
#else
#define bcm_netdev_blog_stats_flags(dev)  (dev)->blog_stats_flags
#endif

#ifndef skbuff_bcm_ext_wlan_get
#define skbuff_bcm_ext_wlan_get(skb, f)  (skb)->f
#endif

/* DWDS related macros */
#ifndef netdev_wlan_set_dwds_ap
#define netdev_wlan_set_dwds_ap(wlif) \
		((wlif) ? ((wlif)->flags |= D3FWD_WLIF_FLAGS_DWDS_AP) : BCM_REFERENCE(wlif))
#endif
#ifndef netdev_wlan_unset_dwds_ap
#define netdev_wlan_unset_dwds_ap(wlif) \
		((wlif) ? ((wlif)->flags &= ~D3FWD_WLIF_FLAGS_DWDS_AP) : BCM_REFERENCE(wlif))
#endif
#ifndef is_netdev_wlan_dwds_ap
#define is_netdev_wlan_dwds_ap(wlif)  ((wlif) ? ((wlif)->flags & D3FWD_WLIF_FLAGS_DWDS_AP) : false)
#endif

#ifndef netdev_wlan_set_dwds_client
#define netdev_wlan_set_dwds_client(wlif) \
		((wlif) ? ((wlif)->flags |= D3FWD_WLIF_FLAGS_DWDS_CLIENT) : BCM_REFERENCE(wlif))
#endif
#ifndef netdev_wlan_unset_dwds_client
#define netdev_wlan_unset_dwds_client(wlif) \
		((wlif) ? ((wlif)->flags &= ~D3FWD_WLIF_FLAGS_DWDS_CLIENT) : BCM_REFERENCE(wlif))
#endif
#ifndef is_netdev_wlan_dwds_client
#define is_netdev_wlan_dwds_client(wlif) \
		((wlif) ? ((wlif)->flags & D3FWD_WLIF_FLAGS_DWDS_CLIENT) : false)
#endif

/* interface up/down macros */
#ifndef netdev_wlan_set_if_up
#define netdev_wlan_set_if_up(wlif) \
		((wlif) ? ((wlif)->flags |= D3FWD_WLIF_FLAGS_UP) : BCM_REFERENCE(wlif))
#endif
#ifndef netdev_wlan_unset_if_up
#define netdev_wlan_unset_if_up(wlif) \
		((wlif) ? ((wlif)->flags &= ~D3FWD_WLIF_FLAGS_UP) : BCM_REFERENCE(wlif))
#endif
#ifndef is_netdev_wlan_if_up
#define is_netdev_wlan_if_up(wlif) \
		((wlif) ? ((wlif)->flags & D3FWD_WLIF_FLAGS_UP) : false)
#endif

#ifndef netdev_wlan_set_dwds_disconnected
#define netdev_wlan_set_dwds_disconnected(wlif) \
	((wlif) ? ((wlif)->flags |= D3FWD_WLIF_FLAGS_DWDS_DISCONNECTED) : BCM_REFERENCE(wlif))
#endif
#ifndef netdev_wlan_unset_dwds_disconnected
#define netdev_wlan_unset_dwds_disconnected(wlif) \
	((wlif) ? ((wlif)->flags &= ~D3FWD_WLIF_FLAGS_DWDS_DISCONNECTED) : BCM_REFERENCE(wlif))
#endif
#ifndef is_netdev_wlan_dwds_disconnected
#define is_netdev_wlan_dwds_disconnected(wlif) \
	((wlif) ? ((wlif)->flags & D3FWD_WLIF_FLAGS_DWDS_DISCONNECTED) : false)
#endif

#if defined(BCM_DHD_LOCK) && defined(BCMDONGLEHOST)
#define DHD_LOCK(dhdp)        dhd_perim_lock(dhdp)
#define DHD_UNLOCK(dhdp)      dhd_perim_unlock(dhdp)
#endif /* BCM_DHD_LOCK && BCMDONGLEHOST */

#ifndef BCM_AWL
extern int inject_to_fastpath;
#endif

#if defined(BCM_WLAN_MCAST_BLOG_SHARED_INFO) && defined(BCM_BLOG)
#define wl_mcast_blog_client_handler(sdu) \
	do { \
		if (IS_SKBUFF_PTR(sdu) && PKTISBLOG_CLONED(sdu)) { \
			blog_inc_wlan_mcast_client_count(sdu); \
			PKTCLRBLOG_CLONED(sdu); \
		} \
	} while (0)

#define wl_mcast_blog_clone_handler(sdu, sdu2) \
	do {\
		if (IS_SKBUFF_PTR(sdu) && \
			!blog_clone_wlan((struct sk_buff *)sdu, (struct sk_buff *)sdu2)) { \
			PKTSETBLOG_CLONED(sdu2); \
		} \
	} while (0)
#else
#define wl_mcast_blog_client_handler(sdu) do {} while (0)
#define wl_mcast_blog_clone_handler(sdu) do {} while (0)
#endif /* BCM_WLAN_MCAST_BLOG_SHARED_INFO && BCM_BLOG */

#endif /* __DHD_NIC_COMMON_H__ */

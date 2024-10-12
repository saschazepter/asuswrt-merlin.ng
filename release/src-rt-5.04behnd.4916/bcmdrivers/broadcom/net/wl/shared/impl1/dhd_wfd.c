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

#include <linux/skbuff.h>
#include <linux/netdevice.h>
#if defined(BCM_NBUFF)
#include <linux/nbuff.h>
#endif
#include <bcmutils.h>
#include <dngl_stats.h>
#include <dhd_dbg.h>
#include <dhd.h>
#include <dhd_linux.h>
#include <dhd_flowring.h>
#include <dhd_bus.h>
#include <dhd_wfd.h>
#include <dhd_wmf_linux.h>

#if defined(BCM_BLOG)
#include <linux/blog.h>
#include <dhd_blog.h>
#endif

#ifdef BCM_PKTFWD
#include <bcm_pktfwd.h>
#include <dhd_pktfwd.h>
#include <wl_pktc.h>
#endif /* BCM_PKTFWD */

#if defined(BCM_AWL)
#include <dhd_awl.h>
#endif /* BCM_AWL */

#if defined(BCM_WLAN_FPI)
#include <fpi_wlan.h>
#endif /* BCM_WLAN_FPI */

#if defined(BCM_DHD_RUNNER)
/* compare two ethernet addresses - assumes the pointers can be referenced as shorts */
#define dhd_eacmp(a, b) ((((const uint16 *)(a))[0] ^ ((const uint16 *)(b))[0]) | \
			 (((const uint16 *)(a))[1] ^ ((const uint16 *)(b))[1]) | \
			 (((const uint16 *)(a))[2] ^ ((const uint16 *)(b))[2]))

static ulong tx_flowring_mismatch_drop_wfd[FWDER_MAX_RADIO] = { 0 };
#endif /* BCM_DHD_RUNNER */
extern const uint8 prio2ac[8];

static inline void map_ssid_vector_to_ssid_index(uint16_t *
						 bridge_port_ssid_vector,
						 uint32_t * wifi_drv_ssid_index)
{
	*wifi_drv_ssid_index = __ffs(*bridge_port_ssid_vector);
}

int
dhd_handle_wfd_blog(dhd_pub_t * dhdp, struct net_device *net, int ifidx,
	void *pktbuf, int b_wmf_unicast)
{
	uint prio = 0, flowid = 0;
	int ret = 0;
	struct sk_buff *skb = NULL;
	struct fkbuff *fkb = NULL;
	bool b_skb_fc_unhandled = FALSE;
#ifdef BCM_PKTFWD
	uint32 pktfwd_key;
#endif /* BCM_PKTFWD */
	struct ether_header *eh;
	struct blog_t *blog_p = NULL;
	bool b_pkt_mc;
	uint32_t hw_port;

#if defined(BCM_NBUFF)
	if (IS_FKBUFF_PTR(pktbuf)) {
		fkb = PNBUFF_2_FKBUFF(pktbuf);
		flowid = PKTFLOWID(pktbuf);
		blog_p = fkb->blog_p;
		b_skb_fc_unhandled = (DHD_PKT_GET_FKB_FLOW_UNHANDLED(pktbuf) ||
			flowid >= (dhdp->num_flow_rings));
	} else {
		skb = PNBUFF_2_SKBUFF(pktbuf);
		blog_p = skb->blog_p;
		b_skb_fc_unhandled = !DHD_PKT_GET_SKB_FLOW_HANDLED(pktbuf);
	}
#endif /* BCM_NBUFF */

	prio = PKTPRIO(pktbuf);

	/* when wlan_mark is not marked, do WFD and blog for skb
	 * or for FKB, do it when it is wmf unicast from flowcache.
	 */
	if (b_skb_fc_unhandled || b_wmf_unicast) {
		ret = dhd_flowid_update(dhdp, ifidx, dhdp->flow_prio_map[prio], pktbuf);
		if (ret != BCME_OK) {
#if defined(BCM_BLOG_UNKNOWN_UCAST)
			if (DHD_IF_ROLE_AP(dhdp, ifidx) && (ret == BCME_NOTASSOCIATED)) {
				/* Notify blog of dropping unknown UCAST packets in acceleration */
				dhd_handle_blog_emit_drop(dhdp, net, ifidx, pktbuf);
			}
#endif /* BCM_BLOG_UNKNOWN_UCAST */
			PKTFREE(dhdp->osh, pktbuf, FALSE);
			DHD_INFO(("%s : dhd_flowid_update failure\n", __FUNCTION__));
			return ret;
		}
		flowid = PKTFLOWID(pktbuf);	/* get flowid after updated */
		/* save as the format of prio + flowid */
		PKTSETPRIO(pktbuf, prio);
	}
#if defined(BCM_BLOG)
#ifdef BCM_WLAN_PER_CLIENT_FLOW_LEARNING
	if (b_skb_fc_unhandled) {
#else
	if (!b_wmf_unicast && b_skb_fc_unhandled) {
#endif

		eh = (struct ether_header *)PKTDATA(dhdp->osh, pktbuf);
		b_pkt_mc = ETHER_ISMULTI((char *)&eh->ether_dhost);
		if (blog_p != NULL) {
#if defined(BCM_DHD_RUNNER)
			flow_ring_node_t *flow_ring_node;
#endif
#ifdef BCM_WLAN_MCAST_BLOG_SHARED_INFO
			wl_mcast_blog_client_handler(pktbuf);
#endif
			blog_p->wfd.dhd_ucast.is_tx_hw_acc_en = 0;
			blog_p->wfd.dhd_ucast.is_wfd = 0;

#if defined(BCM_DHD_RUNNER)
			flow_ring_node =
			    &(((flow_ring_node_t *) (dhdp->
						     flow_ring_table))[flowid]);

#ifdef BCM_WLAN_PER_CLIENT_FLOW_LEARNING
			if (DHD_FLOWRING_RNR_OFFL(flow_ring_node))
#else
			if (DHD_FLOWRING_RNR_OFFL(flow_ring_node) && !b_pkt_mc)
#endif
			{
				blog_p->rnr.is_tx_hw_acc_en = 1;
				blog_p->rnr.is_wfd = 0;
				blog_p->rnr.flowring_idx = PKTFLOWID(pktbuf);
				blog_p->rnr.ssid = ifidx;
				blog_p->rnr.priority = prio;
				blog_p->rnr.radio_idx = dhdp->unit;
				blog_p->rnr.flow_prio = ((prio2ac[prio] == AC_VI) ||
					(prio2ac[prio] == AC_VO)) ? flow_prio_exclusive :
					flow_prio_normal;
				/* If blog_p->iq_prio is set then the minimum
				 * flow_prio is flow_prio_high.
				 */
				if ((blog_p->iq_prio == BLOG_IQ_PRIO_HIGH) &&
						(blog_p->rnr.flow_prio < flow_prio_high)) {
					blog_p->rnr.flow_prio = flow_prio_high;
				}
				/* The opposite is also true. If the flow_prio is
				 * flow_prio_high or above, the blog_p->iq_prio should be set
				 */
				if (blog_p->rnr.flow_prio >= flow_prio_high) {
					/* Don't drop packets in IQ if DHD
					 * determines they are high priority.
					 */
					blog_p->iq_prio = BLOG_IQ_PRIO_HIGH;
				}
				blog_p->rnr.llcsnap_flag =
				    DHDHDR_SUPPORT(dhdp) ? 1 : 0;
			} else
#endif /* BCM_DHD_RUNNER */
			if (WLAN_WFD_ENABLED(dhdp->wfd_idx)) {
				blog_p->wfd.dhd_ucast.is_tx_hw_acc_en = 1;
				blog_p->wfd.dhd_ucast.is_wfd = 1;
				if (!b_pkt_mc) {
#ifdef BCM_PKTFWD
					/* Insert D3lut element */
					pktfwd_key = dhd_pktc_req_hook(PKTC_TBL_UPDATE,
						(unsigned long)&eh->ether_dhost,
						(unsigned long)net, (unsigned long)TRUE);
					if (pktfwd_key != DHD_PKTFWD_KEY_INVALID_UL) {
						dhd_pktfwd_set_keymap(dhdp->unit, pktfwd_key,
							flowid, prio);
					} else {
						blog_p->wfd.dhd_ucast.is_tx_hw_acc_en = 0;
						blog_p->wfd.dhd_ucast.is_wfd = 0;
					}
#endif /* ! BCM_PKTFWD */
					blog_p->wfd.dhd_ucast.wfd_idx = dhdp->wfd_idx;
					blog_p->wfd.dhd_ucast.flowring_idx = flowid;
					blog_p->wfd.dhd_ucast.is_chain = 0;
					blog_p->wfd.dhd_ucast.priority = prio;
					blog_p->wfd.dhd_ucast.ssid = ifidx;
					blog_p->wfd.dhd_ucast.wfd_prio = blog_p->iq_prio;
				} else {
					blog_p->wfd.mcast.is_chain = 0;
					blog_p->wfd.mcast.ssid = ifidx;
					blog_p->wfd.mcast.wfd_prio = blog_p->iq_prio;
					blog_p->wfd.mcast.wfd_idx = dhdp->wfd_idx;
				}
			}
			DHD_UNLOCK(dhdp);

			hw_port = netdev_path_get_hw_port(dhd_idx2net(dhdp, ifidx));
#ifdef BCM_WLAN_PER_CLIENT_FLOW_LEARNING
			if (blog_emit(pktbuf, dhd_idx2net(dhdp, ifidx), TYPE_ETH,
					hw_port, BLOG_WLANPHY) == PKT_DROP) {
				PKTFREE(dhdp->osh, pktbuf, TRUE);
				DHD_LOCK(dhdp);
				return BCME_ERROR;
			}
#else
			blog_emit(pktbuf, dhd_idx2net(dhdp, ifidx), TYPE_ETH,
					hw_port, BLOG_WLANPHY);
#endif

#if defined(BCM_DHD_RUNNER) && !defined(BCM_COUNTER_EXTSTATS)
			/* when RUNNER accelerate flow, stats will not be availabe until
			 * put_stats is called blog has to fill vir_dev in order to get
			 * put_stats called, so call this blog_link() to fill vir_dev
			 */
			blog_lock();
			blog_link(IF_DEVICE, blog_p, (void *)net,
					DIR_TX, PKTLEN(dhdp->osh, pktbuf));
			blog_unlock();
#endif /* BCM_DHD_RUNNER && !BCM_COUNTER_EXTSTATS */
			DHD_LOCK(dhdp);
		}
#if defined(BCM_EAPFWD)
		else {
			/* when Flow cache is disabled and there is no blog, datapaths such
			 * as EAPFWD-DHD need the D3LUT populated and the dhd_pktfwd_set_keymap
			 * to be populated
			 */
			if (!(b_pkt_mc || b_wmf_unicast)) {
				/* Insert D3lut element */
				pktfwd_key = dhd_pktc_req_hook(PKTC_TBL_UPDATE,
						(unsigned long)&eh->ether_dhost,
						(unsigned long)net, (unsigned long)TRUE);
				if (pktfwd_key != DHD_PKTFWD_KEY_INVALID_UL) {
					dhd_pktfwd_set_keymap(dhdp->unit, pktfwd_key, flowid, prio);
				} else {
					DHD_INFO(("%s: Invalid Key " MACF, __FUNCTION__,
						ETHERP_TO_MACF(eh->ether_dhost)));
				}
			}	/* if (!(b_pkt_mc || b_wmf_unicast)) */
		}		/* if (blog_p != NULL) */
#endif /* ! BCM_EAPFWD */
	}

	if (skb && DHD_PKT_GET_SKB_FLOW_HANDLED(pktbuf))
		DHD_PKT_CLR_SKB_FLOW_HANDLED(pktbuf);

	if (fkb && DHD_PKT_GET_FKB_FLOW_UNHANDLED(pktbuf))
		DHD_PKT_CLR_FKB_FLOW_UNHANDLED(pktbuf);
#endif /* BCM_BLOG */

	return ret;
}


#if defined(BCM_WLAN_FPI)
/*
 * Get WiFi (DHD) metadata for flow provisioning interface driver
 *
 * Input:
 *  net:  net device,
 *  sa:   source mac address (not used),
 *  da:   destination mac address (associated station or endpoint behind
 *        AP/repeater)
 *  prio: priority (0-7)
 *  data: metadata pointer to fill
 *
 * Return:
 *   0:    Success, 'data' will be updated with valid metadata
 *  <0:    Failure, 'data' will be 0
 */
int dhd_wfd_get_fpi_metadata(struct net_device *net, u8 *sa, u8 *da, u8 prio,
	u32 *data)
{
	fpi_wl_metadata_t metadata;
	int rc;
	dhd_pub_t *dhdp = dhd_dev_get_dhdpub(net);
	int ifidx = dhd_dev_get_ifidx(net);
	uint16 flowid = 0;
	flow_ring_node_t *flow_ring_node;
	uint32 pktfwd_key = 0;

	metadata.wl = 0;
	*data = metadata.wl;

	/*
	 * Input parameter validation
	 */
	/* Check if priority parameter is valid */
	if (prio >= PKTFWD_PRIO_MAX) {
		DHD_ERROR(("%s: Invalid prio (%d)\n", __FUNCTION__, prio));
		return BCME_ERROR;
	}

	/* Check if dhd public context  is valid */
	if (!dhdp) {
		DHD_ERROR(("%s: net device (0x%px) dhdp is NULL\n", __FUNCTION__, net));
		return BCME_ERROR;
	}

	/* Check if interface index is in range */
	if (ifidx >= DHD_MAX_IFS) {
		DHD_ERROR(("%s: Invalid net device (0x%px) invalid ifidx (%d)\n",
			__FUNCTION__, net, ifidx));
		return BCME_ERROR;
	}

	DHD_INFO(("wl[%d.%d]: %s(0x%px, "MACDBG", "MACDBG" , %d)\n", dhdp->unit,
		ifidx, __FUNCTION__, net, MAC2STRDBG(sa), MAC2STRDBG(da), prio));

	/* Broadcast/multicast DA is not supported */
	if (ETHER_ISMULTI(da)) {
		DHD_ERROR(("%s: ["MACDBG"] is not unicast address\n",
			__FUNCTION__, MAC2STRDBG(da)));
		return BCME_UNSUPPORTED;
	}

	/*
	 * dhd_get_flowid will do a lookup for existing flow-ring, if not
	 * create a new one if station is associated
	 */
	DHD_LOCK(dhdp);
	rc = dhd_get_flowid(dhdp, ifidx, prio, sa, da, &flowid);
	DHD_UNLOCK(dhdp);
	if (rc != BCME_OK) {
		DHD_ERROR(("wl[%d.%d]: Failed to get flow ring id, rc = (%d)\n",
			dhdp->unit, ifidx, rc));
		return BCME_NOTASSOCIATED;
	}

	flow_ring_node = &(((flow_ring_node_t *) (dhdp->flow_ring_table))[flowid]);

#if defined(BCM_DHD_OFFLOAD) || defined(BCM_DHD_RUNNER)
	if (DHD_FLOWRING_RNR_OFFL(flow_ring_node)) {

		/* Hardware accelerated and Offloaded */
		metadata.hwo.is_tx_hw_acc_en = 1;
		metadata.hwo.is_wfd = 0;
		metadata.hwo.flowring_idx = flowid;
		metadata.hwo.ssid = ifidx;
		metadata.hwo.priority = prio;
		metadata.hwo.radio_idx = dhdp->unit;

		metadata.hwo.flow_prio = ((prio2ac[prio] == AC_VI) ||
			(prio2ac[prio] == AC_VO)) ? flow_prio_exclusive : flow_prio_normal;
		metadata.hwo.llcsnap_flag = DHDHDR_SUPPORT(dhdp) ? 1 : 0;

		goto valid_metadata;
	}
#endif /* BCM_DHD_OFFLOAD || BCM_DHD_RUNNER */

	if (WLAN_WFD_ENABLED(dhdp->wfd_idx)) {

		/* Hardware accelerated */
		/* Insert D3lut element first */
		DHD_LOCK(dhdp);
		pktfwd_key = dhd_pktc_req_hook(PKTC_TBL_UPDATE,
			(unsigned long)da, (unsigned long)net, (unsigned long)TRUE);
		DHD_UNLOCK(dhdp);
		if (pktfwd_key == DHD_PKTFWD_KEY_INVALID_UL) {
			DHD_ERROR(("wl[%d.%d]: %s PKTFWD key is invalid\n", dhdp->unit,
				ifidx, __FUNCTION__));
			return BCME_NORESOURCE;
		}
		dhd_pktfwd_set_keymap(dhdp->unit, pktfwd_key, flowid, prio);
	}

	if (pktfwd_key != 0) {
		metadata.wfd.dhd_ucast.is_tx_hw_acc_en = 1;
		metadata.wfd.dhd_ucast.is_wfd = 1;
		metadata.wfd.dhd_ucast.wfd_idx = dhdp->wfd_idx;
		metadata.wfd.dhd_ucast.flowring_idx = flowid;
		metadata.wfd.dhd_ucast.is_chain = 0;
		metadata.wfd.dhd_ucast.priority = prio;
		metadata.wfd.dhd_ucast.ssid = ifidx;
		/* fixing wfd_prio to normal */
		metadata.wfd.dhd_ucast.wfd_prio = 0;

		goto valid_metadata;
	} else {
		DHD_ERROR(("wl[%d.%d]: %s nonDoL, nonWFD mode not supported\n",
				dhdp->unit, ifidx, __FUNCTION__));
		/* non-DoL, non-WFD software acceleration is not supported */
		return BCME_UNSUPPORTED;
	}

valid_metadata:
	*data = metadata.wl;

	DHD_ERROR(("wl[%d.%d]: %s(0x%px, "MACDBG" , "MACDBG" , %d) = 0x%x\n",
		dhdp->unit, ifidx, __FUNCTION__, net, MAC2STRDBG(sa), MAC2STRDBG(da),
		prio, *data));

	return BCME_OK;
}
#endif /* BCM_WLAN_FPI */

#ifndef BCM_PKTFWD
static int BCMFASTPATH
dhd_wfd_forward(unsigned int pkt_cnt, void **pkts, unsigned long wl_radio_idx,
		unsigned long dummy)
{
	int cnt;
	int ifidx;
	uint16 flowid;
	dhd_pub_t *dhdp;
	FkBuff_t *fkb_p;
	pNBuff_t pNBuf;
	int ret;
	flow_ring_node_t *fr_node;

	dhdp = g_dhd_info[wl_radio_idx];
	DHD_LOCK(dhdp);

	for (cnt = 0; cnt < pkt_cnt; cnt++) {	/* Process the array of packets */

		fkb_p = (FkBuff_t *) pkts[cnt];
		pNBuf = FKBUFF_2_PNBUFF((FkBuff_t *) fkb_p);
		ifidx = fkb_p->wl.ucast.dhd.ssid;

#if (defined(DSLCPE) && defined(BCM_NBUFF)) || defined(BCM_NBUFF_WLMCAST)
		if (PKTATTACHTAG(dhdp->osh, pNBuf)) {
			PKTFREE(dhdp->osh, pNBuf, FALSE);
			dhdp->tx_dropped++;
			dhdp->tx_packets_dropped_wfd++;
			dhd_if_inc_txpkt_drop_cnt(dhdp, ifidx);
			continue;
		}
		/* for unicast, it is master fkb, to clear dhdhdr bit */
		dhd_clr_fkb_dhdhdr_flag(fkb_p);
#endif /* DSLCPE && BCM_NBUFF || BCM_NBUFF_WLMCAST */

		flowid = fkb_p->wl.ucast.dhd.flowring_idx;

		/* tag this packet as coming from wfd */
		DHD_PKT_SET_WFD_BUF(pNBuf);

		/* Save the flowid and the dataoff in the skb's pkttag */
		DHD_PKT_SET_FLOWID(pNBuf, flowid);

		fr_node = DHD_FLOW_RING(dhdp, flowid);
		if ((fr_node->status != FLOW_RING_STATUS_PENDING) &&
		    (fr_node->status != FLOW_RING_STATUS_OPEN)) {
			DHD_INFO(("%s: on flowid %d when flow ring status is %d\r\n", __FUNCTION__,
				flowid, fr_node->status));
			ret = BCME_NOTREADY;
		} else {
#if defined(BCM_DHD_RUNNER)
			struct ether_header *eh;

			/* At present we do not have any mechanism to flush runner/wfd
			 * rings when a STA disassociates. So runner can still feed some
			 * packets with an old flowid when that STA has left and flowid
			 * is allocated to some other STA. Drop the packets here to avoid
			 * scb mismatch in wl
			 */
			eh = (struct ether_header *)PKTDATA(dhdp->osh, pNBuf);
			if ((DHD_IF_ROLE_AP(dhdp, ifidx) &&
				dhd_eacmp(eh->ether_dhost, fr_node->flow_info.da)) ||
				(dhdp->flow_prio_map[(PKTPRIO(pNBuf))] != fr_node->flow_info.tid)) {
				DHD_INFO(("dhd%d: dhd_wfd_forward: Wrong flow dst mac " MACF ""
					"ring mac " MACF " status %d active %d\n",
					dhdp->unit, ETHERP_TO_MACF(eh->ether_dhost),
					ETHERP_TO_MACF(fr_node->flow_info.da), fr_node->status,
					fr_node->active));

				tx_flowring_mismatch_drop_wfd[dhdp->unit]++;
				ret = BCME_ERROR;
			} else
#endif /* BCM_DHD_RUNNER */
				ret = dhd_bus_txqueue_enqueue(dhdp->bus, pNBuf, flowid);
		}
		if (!ret) {
#ifdef WLCSM_DEBUG
			wlcsm_dbg_inc(11, 1);
#endif
			dhdp->tx_packets++;
			dhdp->tx_packets_wfd++;
#ifndef BCM_DHD_RUNNER
			dhd_if_inc_txpkt_cnt(dhdp, ifidx, pNBuf);
#endif
		} else {
			PKTFREE(dhdp->osh, pNBuf, FALSE);
			dhdp->tx_dropped++;
			dhdp->tx_packets_dropped_wfd++;
			dhd_if_inc_txpkt_drop_cnt(dhdp, ifidx);
		}

	}			/* for cnt */

	/* Flush all pending tx queued packets in bus(s) managed on this CPU core */
	dhd_wfd_invoke_func(wl_radio_idx, dhd_bus_txqueue_flush);

	DHD_UNLOCK(dhdp);

	return 0;
}

static void BCMFASTPATH dhd_send_all(unsigned int dummy)
{
	/* dummy function for now */
}

static void BCMFASTPATH
_dhd_wfd_mcasthandler(uint32_t wl_radio_idx, uint32_t ifidx, void *fkb)
{
	pNBuff_t *pNBuf = FKBUFF_2_PNBUFF((FkBuff_t *) fkb);
	int ret = 0;
	dhd_pub_t *dhdp;
#ifdef DHD_WMF
	dhd_wmf_t *wmf;
#endif
#if defined(DSLCPE) && defined(BCM_COUNTER_EXTSTATS)
	int pktlen;
#endif

	dhdp = g_dhd_info[wl_radio_idx];
	DHD_LOCK(dhdp);
	if (dhd_idx2net(dhdp, ifidx) == NULL)
		goto free_drop;
#if (defined(DSLCPE) && defined(BCM_NBUFF))|| defined(BCM_NBUFF_WLMCAST)

	if (PKTATTACHTAG(dhdp->osh, pNBuf)) {
		DHD_ERROR(("%s : pcie is still in suspend state!!\n", __FUNCTION__));
		goto free_drop;
	}
#endif /* DSLCPE && BCM_NBUFF || defined(BCM_NBUFF_WLMCAST */

#if (defined(DSLCPE) && defined(BCM_DHD_RUNNER)) || defined(BCM_NBUFF_WLMCAST)
	/*  when DHD_RUNNER offloading is enabled, the N and M station priority has to be the same
	 *  otherwize, there is a chance N station will recevied duplicated pkt.
	 */
	if (g_multicast_priority > 0) {
		PKTSETPRIO(pNBuf, g_multicast_priority);
	} else
#endif /* DSLCPE && BCM_DHD_RUNNER || defined(BCM_NBUFF_WLMCAST */
	if (!PKTPRIO(pNBuf)) {
		pktsetprio(pNBuf, FALSE);
#ifndef BCM_WLAN_PER_CLIENT_FLOW_LEARNING
		if (!PKTPRIO(pNBuf))
			PKTSETPRIO(pNBuf, PRIO_8021D_VI);
#endif
	}
#ifdef DHD_WMF
	wmf = dhd_wmf_conf(dhdp, ifidx);
	if (wmf->wmf_enable) {
		/* set  WAN multicast indication before sending to EMF module */
		DHD_PKT_SET_WFD_BUF(pNBuf);
		DHD_PKT_SET_WAN_MCAST(pNBuf);
		DHD_INFO(("%s: pakcet:%px from WMF MCAST and is WANMCAST:%d\n",
			__FUNCTION__, pNBuf, DHD_PKT_GET_WAN_MCAST(pNBuf)));
		ret = dhd_wmf_packets_handle(dhdp, pNBuf, NULL, ifidx, 0);
		if (ret == WMF_TAKEN)
			goto succ_count;
		else if (ret == WMF_DROP)
			goto free_drop;
	}
#endif /* DHD_WMF */
	DHD_PKT_CLR_WFD_BUF(pNBuf);
	ret = dhd_flowid_update(dhdp, ifidx, dhdp->flow_prio_map[(PKTPRIO(pNBuf))], pNBuf);
	if (ret == BCME_OK) {
#if defined(DSLCPE) && defined(BCM_COUNTER_EXTSTATS)
		pktlen = PKTLEN(dhdp->osh, pNBuf);
#endif
		ret = dhd_sendpkt(dhdp, ifidx, pNBuf);
		if (ret)
			goto mcast_drop;
		else {
#if defined(DSLCPE) && defined(BCM_BLOG) && defined(BCM_COUNTER_EXTSTATS)
			dhd_if_inc_txpkt_mcnt(dhdp, ifidx, pktlen);
#endif
			goto mcast_count;
		}
	}
free_drop:
	PKTFREE(dhdp->osh, pNBuf, FALSE);
mcast_drop:
	dhd_if_inc_txpkt_drop_cnt(dhdp, ifidx);
	dhdp->tx_dropped++;
	dhdp->tx_packets_dropped_wfd_mcast++;
	goto unlock;
succ_count:
	dhdp->tx_multicast++;
mcast_count:
	dhdp->tx_packets_wfd_mcast++;
unlock:
	DHD_UNLOCK(dhdp);
	return;
}

static void BCMFASTPATH
dhd_wfd_mcasthandler(uint32_t wl_radio_idx, unsigned long fkb, qunsigned long p_ssid_vector)
{

	uint32_t wl_if_index;
	void *fkb_cloned = NULL;
	int orig_packet_used = 0;
	uint16_t ssid_vector = *(uint16_t *) p_ssid_vector;

	/* clear fkb dhdhdr,all fkb is master fkb here */
	dhd_clr_fkb_dhdhdr_flag((void *)fkb);

	while (ssid_vector) {
		map_ssid_vector_to_ssid_index(&ssid_vector, &wl_if_index);

		/* Clear the bit we found */
		ssid_vector &= ~(1 << wl_if_index);
#if !defined(BCM_AWL) && defined(BCM_WFD)
		if (!wfd_dev_by_id_get(wl_radio_idx, wl_if_index))
			continue;
#endif

		if (ssid_vector) {	/* Don't make a copy for only/last interface */
			fkb_cloned = fkb_clone((void *)fkb);
			if (fkb_cloned == (FkBuff_t *) NULL) {
				printk("%s %s: Failed to clone fkb\n", __FILE__,
				       __FUNCTION__);
				break;
			}
		} else {
			orig_packet_used = 1;
			fkb_cloned = (void *)fkb;
		}
		_dhd_wfd_mcasthandler(wl_radio_idx, wl_if_index, FKBUFF_2_PNBUFF(fkb_cloned));
	}

	if (!orig_packet_used) {
		nbuff_free(FKBUFF_2_PNBUFF(fkb));
	}
}

int dhd_wfd_bind(struct net_device *net, unsigned int unit)
{
	int wfd_idx = WLAN_WFD_INVALID_IDX;
	struct pktlist_context *pktlist_context_null = NULL;

	wfd_idx = wfd_bind(net, pktlist_context_null, WFD_WL_FWD_HOOKTYPE_FKB, true,
			(HOOK4PARM) dhd_wfd_forward, (HOOK32) dhd_send_all,
			(HOOK3PARM) dhd_wfd_mcasthandler, (HOOK3PARM) NULL, unit);
	if (wfd_idx == WFD_NOT_SUPPORTED) {
		/* Radio is not supported by WFD, lets disable WFD */
		wfd_idx = WLAN_WFD_DISABLE_IDX;
		DHD_ERROR(("%s: dhd<%d> WFD not supported, disabled\n", __FUNCTION__, unit));
	} else if (wfd_idx < 0) {
		wfd_idx = WLAN_WFD_INVALID_IDX;
		DHD_ERROR(("%s: Error in binding WFD.\n", __FUNCTION__));
	}

	return wfd_idx;
}

void dhd_wfd_unbind(int wfd_idx)
{
	if (!WLAN_WFD_ENABLED(wfd_idx)) {
		/* Nothing to do */
		return;
	}
	wfd_unbind(wfd_idx, WFD_WL_FWD_HOOKTYPE_FKB);
}
#else
int dhd_wfd_bind(struct net_device *net, unsigned int unit)
{
	int wfd_idx = WLAN_WFD_INVALID_IDX;
	pktlist_context_t *dhd_pktlist_context;

	if (unit >= DHD_PKTFWD_RADIOS) {
		DHD_ERROR(("%s: dhd<%d> WFD not supported, disabled\n", __FUNCTION__, unit));
		wfd_idx = WLAN_WFD_DISABLE_IDX;
		goto dhd_wfd_bind_failure;
	}

	PKTFWD_TRACE("wl%d", unit);
	dhd_pktlist_context = (pktlist_context_t *)
	    dhd_pktfwd_request(dhd_pktfwd_req_pktlist_e, unit, 0, 0);
	if (dhd_pktlist_context == PKTLIST_CONTEXT_NULL) {
		DHD_ERROR(("%s: dhd<%d> dhd_pktlist_context NULL\n", __FUNCTION__, unit));
		goto dhd_wfd_bind_failure;
	}
#if defined(BCM_AWL)
	/* On Archer based platforms, Archer driver directly provides WFD services */
	wfd_idx = dhd_awl_wfd_bind(net, dhd_pktlist_context, ARCHER_WLAN_RADIO_MODE_FKB,
			(HOOK32) dhd_pktfwd_xfer_callback, unit);
#else
	wfd_idx = wfd_bind(net, dhd_pktlist_context, WFD_WL_FWD_HOOKTYPE_FKB, true,
			(HOOK4PARM) NULL, (HOOK32) dhd_pktfwd_xfer_callback,
			(HOOK3PARM) NULL, (HOOK3PARM) NULL, unit);
#endif /* !BCM_AWL */

	if (wfd_idx == WFD_NOT_SUPPORTED) {
		/* Radio is not supported by WFD, lets disable WFD */
		wfd_idx = WLAN_WFD_DISABLE_IDX;
		DHD_ERROR(("%s: dhd<%d> WFD not supported, disabled\n", __FUNCTION__, unit));
		goto dhd_wfd_bind_failure;
	} else if (wfd_idx < 0) {
		wfd_idx = WLAN_WFD_INVALID_IDX;
		PKTFWD_ERROR("wl%d wfd_idx %d failure", unit, wfd_idx);
		goto dhd_wfd_bind_failure;
	} else
		PKTFWD_PRINT("wl%d wfd_idx %d success", unit, wfd_idx);

	if (wfd_idx != unit) {
		PKTFWD_ERROR("wl%d wfd_idx %d mismatch", unit, wfd_idx);
		wfd_idx = WLAN_WFD_INVALID_IDX;
	} else {
		dhd_pktfwd_wfd_ins(net, wfd_idx, unit);
#if defined(BCM_WLAN_FPI)
		/* Register DHD with flow provisioning interface (fpi) driver */
		fpi_register_dhd_get_metadata(dhd_wfd_get_fpi_metadata);
#endif /* BCM_WLAN_FPI */
	}

dhd_wfd_bind_failure:
	PKTFWD_ASSERT(wfd_idx != WLAN_WFD_INVALID_IDX);
	return wfd_idx;
} /* dhd_wfd_bind */

void dhd_wfd_unbind(int wfd_idx, int unit)
{
	if (!WLAN_WFD_ENABLED(wfd_idx)) {
		/* Nothing to do */
		return;
	}

#if defined(BCM_WLAN_FPI)
	fpi_register_dhd_get_metadata(NULL);
#endif /* BCM_WLAN_FPI */

#if defined(BCM_AWL)
	dhd_awl_wfd_unbind(unit);
#else
	wfd_unbind(wfd_idx, WFD_WL_FWD_HOOKTYPE_SKB);
#endif /* !BCM_AWL */

	dhd_pktfwd_wfd_del(unit);
}				/* dhd_wfd_unbind */
#endif /* BCM_PKTFWD */

int dhd_wfd_registerdevice(int wfd_idx, struct net_device *dev)
{
#if !defined(BCM_AWL)
	int ret = 0;
	int ifidx = WLAN_NETDEVPATH_SSID(netdev_path_get_hw_port(dev));

	if (!WLAN_WFD_ENABLED(wfd_idx)) {
		/* Nothing to do */
		return 0;
	}

	ret = wfd_registerdevice(wfd_idx, ifidx, dev);
	if (ret != 0) {
		DHD_ERROR(("%s failed wfd_idx %d, ifidx %d\n", __FUNCTION__, wfd_idx, ifidx));
	}
	return ret;
#else /* BCM_AWL */
	return dhd_awl_register_dev(dev);
#endif /* BCM_AWL */
}

int dhd_wfd_unregisterdevice(int wfd_idx, struct net_device *dev)
{
#if !defined(BCM_AWL)
	dhd_pub_t *dhdp = dhd_dev_get_dhdpub(dev);
	int ret = 0;
	int ifidx = WLAN_NETDEVPATH_SSID(netdev_path_get_hw_port(dev));

	if (!WLAN_WFD_ENABLED(wfd_idx)) {
		/* Nothing to do */
		return 0;
	}

	DHD_UNLOCK(dhdp);
	ret = wfd_unregisterdevice(wfd_idx, ifidx);
	DHD_LOCK(dhdp);
	if (ret != 0) {
		DHD_ERROR(("%s failed wfd_idx %d ifidx %d\n", __FUNCTION__, wfd_idx, ifidx));
	}

	return ret;
#else /* BCM_AWL */
	return dhd_awl_unregister_dev(dev);
#endif /* BCM_AWL */
}

/* Add wfd dump output to a buffer */
void dhd_wfd_dump(dhd_pub_t * dhdp, struct bcmstrbuf *strbuf)
{
#if defined(BCM_DHD_RUNNER)
	bcm_bprintf(strbuf, "\ntx_packets_wfd  %lu tx_packets_dropped_wfd %lu"
			" tx_flowring_mismatch_drop_wfd %lu\n",
			dhdp->tx_packets_wfd, dhdp->tx_packets_dropped_wfd,
			tx_flowring_mismatch_drop_wfd[dhdp->unit]);
#else
	bcm_bprintf(strbuf, "\ntx_packets_wfd  %lu tx_packets_dropped_wfd %lu\n",
			dhdp->tx_packets_wfd, dhdp->tx_packets_dropped_wfd);
#endif
	bcm_bprintf(strbuf, "tx_packets_wfd_mcast  %lu tx_packets_dropped_wfd_mcast %lu\n",
			dhdp->tx_packets_wfd_mcast, dhdp->tx_packets_dropped_wfd_mcast);

	return;
}

/* Clear wfd stats */
void dhd_wfd_clear_dump(dhd_pub_t * dhdp)
{
	dhdp->tx_packets_wfd = 0;
	dhdp->tx_packets_dropped_wfd = 0;
	dhdp->tx_packets_wfd_mcast = 0;
	dhdp->tx_packets_dropped_wfd_mcast = 0;
#if defined(BCM_DHD_RUNNER)
	tx_flowring_mismatch_drop_wfd[dhdp->unit] = 0;
#endif
	return;
}

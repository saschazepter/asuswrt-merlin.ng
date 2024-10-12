/*
 * <:copyright-BRCM:2020:DUAL/GPL:standard
 * 
 *    Copyright (c) 2020 Broadcom 
 *    All Rights Reserved
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation (the "GPL").
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * 
 * A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
 * writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 * :>
 */

#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/skbuff.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <linux/if_ether.h>
#include <linux/etherdevice.h>
#include <linux/netfilter_ipv6.h>
#include <linux/netfilter_bridge.h>
#include <linux/netlink.h>
#include <linux/timer.h>
#include <linux/proc_fs.h>
#include <linux/udp.h>
#include <net/arp.h>
#include <net/dst.h>
#include <net/ipv6.h>
#include <net/neighbour.h>
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_conntrack_acct.h>
#include <net/xfrm.h>
#include <linux/bcm_netlink.h>
#if IS_ENABLED(CONFIG_BCM_DPI)
#include <linux/dpi.h>
#endif
#include <linux/ndi.h>
#include <bcmpcap.h>
#include "ndi_local.h"

/* ----- functions ----- */
static unsigned int ndi_nf_hook(void *priv, struct sk_buff *skb,
				const struct nf_hook_state *state);

/* ----- variables ----- */
#define DECLARE_HOOK(_fun, _pf, _hooknum, _priority) \
	{ \
		.hook		= _fun, \
		.pf		= _pf, \
		.hooknum	= _hooknum, \
		.priority	= _priority, \
	}
static struct nf_hook_ops hooks[] __read_mostly = {
	DECLARE_HOOK(ndi_nf_hook, NFPROTO_INET, NF_INET_PRE_ROUTING, NF_IP_PRI_FILTER),
	DECLARE_HOOK(ndi_nf_hook, NFPROTO_BRIDGE, NF_INET_PRE_ROUTING, NF_IP_PRI_FILTER),
};

/* Every device gets probed if there is no activity from that device for 30
 * seconds. If there is still no activity for another 90 seconds, the device
 * is reported as inactive. The device will continue to get probed every 30
 * seconds for another 2 mins and if there is still no activity detected, the
 * device is considered offline. With this scheme, an offline device is
 * considered inactive after 2 minutes and is reported as offline in about
 * 20 minutes.
 */
#define PROBE_PERIOD_SEC		30
#define DEV_PROBING_MAX			3
#define DEV_INACTIVE_MAX		39
static int ndi_timer_delay = (PROBE_PERIOD_SEC * HZ);
static struct timer_list ndi_timer;
static struct dentry *pcap;

DEFINE_SPINLOCK(nl_bcast_lock);
LIST_HEAD(nl_bcast_list);
struct proc_dir_entry *ndi_dir;
struct ndi_stats stats;

static const int ndi_max_pkt = 3;

/* ----- local functions ----- */
static inline int ignore_packet(struct ndi_classify *p)
{
	enum ip_conntrack_info ctinfo;
	struct ethhdr *h;

	if (unlikely(!p->skb))
		return 1;

	p->ct = nf_ct_get(p->skb, &ctinfo);
	if (p->ct && test_bit(NDI_FINISHED_BIT, &p->ct->bcm_ext.ndi.flags))
		return 1;

	if (unlikely(!p->skb->dev && !secpath_exists(p->skb))) {
		p->ignore_reason = IGN_NO_DEV;
		return 1;
	}

	if (p->skb->protocol != htons(ETH_P_IP) &&
	    p->skb->protocol != htons(ETH_P_IPV6) &&
	    p->skb->protocol != htons(ETH_P_ARP) &&
	    p->skb->protocol != htons(ETH_P_RARP)) {
		p->ignore_reason = IGN_INVAL_L3_PROTO;
		return 1;
	}

	if (is_netdev_wan(p->skb->dev) && !secpath_exists(p->skb)) {
		p->ignore_reason = IGN_WAN_DEV;
		return 1;
	}

	if (is_netdev_dummy_dev(p->skb->dev))
		return 1;


	h = eth_hdr(p->skb);
	if (!skb_mac_header_was_set(p->skb) ||
	    is_zero_ether_addr(h->h_source)) {
		p->ignore_reason = IGN_NO_MAC;
		return 1;
	}

	return 0;
}

static inline int ignore_device(struct ndi_classify *p)
{
	struct sk_buff *skb = p->skb;

	if (skb->protocol == htons(ETH_P_IP) &&
	    (ipv4_is_multicast(ip_hdr(skb)->saddr) ||
	     ipv4_is_multicast(ip_hdr(skb)->daddr) ||
	     ipv4_is_zeronet(ip_hdr(skb)->saddr))) {
		p->ignore_reason = IGN_IP4_MULTICAST;
		return 1;
	}
	if (skb->protocol == htons(ETH_P_IPV6) &&
	    (ipv6_addr_is_multicast(&ipv6_hdr(skb)->saddr) ||
	     ipv6_addr_is_multicast(&ipv6_hdr(skb)->daddr) ||
	     ipv6_addr_any(&ipv6_hdr(skb)->saddr))) {
		p->ignore_reason = IGN_IP6_MULTICAST;
		return 1;
	}

	return 0;
}

static u64 pkt_count(struct nf_conn *ct)
{
	struct nf_conn_acct *acct;
	struct nf_conn_counter *ctr;

	if (!ct)
		return 0;

	acct = nf_conn_acct_find(ct);
	if (!acct)
		return 0;

	ctr = acct->counter;
	return atomic64_read(&ctr[0].packets) + atomic64_read(&ctr[1].packets);
}

static void classify_secpath_device(struct ndi_classify *p)
{
#if IS_ENABLED(CONFIG_XFRM)
	struct ndi_dev *dev;

	if (!secpath_exists(p->skb))
		return;

	dev = dev_find_or_new_for_secpath(p->skb->sp, p->dev);
	if (dev != p->dev) {
		p->dev = dev;
		set_bit(UPDATED_BIT, &p->local_flags);
	}
#endif
}

static void classify_device(struct ndi_classify *p)
{
	struct ndi_ip *ip = NULL;

	if (p->dev || ignore_device(p))
		return;

	/*
	 * For saved IPs, use the saved MAC.
	 * For LAN-initiated flows, use the source MAC.
	 * For WAN-initiated flows, we have to try a neighbour lookup from the
	 * destination IP to find a appropriate MAC.
	 */
	ip = ip_find_by_skb(p->skb);
	if (ip) {
		p->dev	= dev_find_or_new(ip->mac, p->skb);
	} else if (!is_netdev_wan(p->skb->dev)) {
		u8 *mac	= eth_hdr(p->skb)->h_source;
		p->dev	= dev_find_or_new(mac, p->skb);
	}

	if (p->dev && dev_ip_update(p->dev, p->skb))
		set_bit(UPDATED_BIT, &p->local_flags);
}

static void save_classifications(struct ndi_classify *p)
{
	if (!p->ct)
		return;
	p->ct->bcm_ext.ndi.dev = p->dev;
}

static void classify_prepare(struct ndi_classify *p, struct sk_buff *skb,
			     const struct nf_hook_state *state)
{
	enum ip_conntrack_info ctinfo;
	struct nf_conn *ctm;

	p->ct	= nf_ct_get(skb, &ctinfo);
	p->hook	= state->hook;

	/* populate classification data based on the conntrack entry */
	if (p->ct) {
		p->dev = p->ct->bcm_ext.ndi.dev;
		p->flags = p->ct->bcm_ext.ndi.flags;
	}

	/* if the parent conntrack has classification data and we don't, copy
	 * the classification data to the child */
	ctm = p->ct ? p->ct->master : NULL;
	if (ctm) {
		p->dev = p->dev ? : ctm->bcm_ext.ndi.dev;
		p->flags = p->flags ? : ctm->bcm_ext.ndi.flags;
	}
}

static void classify(struct ndi_classify *p)
{
	stats.scanned_pkts++;

	if (is_dhcp(p->skb) || is_dhcp6(p->skb))
		ndi_parse_dhcp(p);
	if (is_arp(p->skb))
		ndi_parse_arp(p);

	classify_secpath_device(p);
	classify_device(p);

	if (pkt_count(p->ct) > ndi_max_pkt)
		set_bit(NDI_FINISHED_BIT, &p->ct->bcm_ext.ndi.flags);
}

static void classify_post(struct ndi_classify *p)
{
	if (!p->dev)
		return;

	save_classifications(p);
	probe_set_online(p);

	if (test_bit(UPDATED_BIT, &p->local_flags)) {
		pr_debug("%s NDI update of classification data\n",
			 ndi_dev_name(p->dev));
		stats.netlink_broadcasts++;
		ndi_dev_nl_event(p->dev, NDINL_NEWDEVICE);
	}
}

static int pcap_dump_ndi(struct cap_pkt_state *s)
{
	struct ndi_classify *p = s->data;
	struct cap_buf *cb = s->cb;
	struct ndi_sa *sa = NULL;
	int ret = 0;
	int i;

	if (secpath_exists(s->skb)) {
		pcap_write_str(cb, "\n");
		for (i = 0; i < s->skb->sp->len; i++) {
			pcap_write_str(cb, "%sxfrm %x%s", i ? ", " : "",
				       s->skb->sp->xvec[i]);
			sa = sa_find(s->skb->sp->xvec[i]);
			if (!sa)
				continue;
		}
		ret |= pcap_write_str(cb, "\nsa %x", sa ? sa->x : 0);
	}

	if (p->ignore_reason)
		ret |= pcap_write_str(cb, "\nignore_reason %d",
				      p->ignore_reason);

	return ret;
}

static unsigned int
ndi_nf_hook(void *priv, struct sk_buff *skb, const struct nf_hook_state *state)
{
	struct ndi_classify p = {
		.skb = skb
	};

	if (unlikely(!skb))
		goto out;

	stats.seen_pkts++;

	if (ignore_packet(&p))
		goto out;

	classify_prepare(&p, skb, state);
	classify(&p);
	classify_post(&p);

out:
	pcap_packet(pcap, skb, state->hook, &p, pcap_dump_ndi);
	return NF_ACCEPT;
}

#if IS_ENABLED(CONFIG_BCM_DPI)
static void
update_dpi_device_info(struct dpi_dev *dpi)
{
	struct ndi_dev *ndi;

	ndi = dev_find_by_id(dpi->ndi_id);
	if (!ndi) {
		if (dpi->ndi_id != -1)
			pr_err("[%pM] DPI update, but no NDI device with id %d found\n",
			       dpi->mac, dpi->ndi_id);
		return;
	}

	memcpy(&ndi->dpi, dpi, sizeof(ndi->dpi));
	pr_debug("%s DPI update of classification data\n", ndi_dev_name(ndi));
	ndi_dev_nl_event(ndi, NDINL_NEWDEVICE);
}

static int
ndi_dpi_event(struct notifier_block *nb, unsigned long event, void *data)
{
	if (event == DPI_NOTIFY_DEVICE)
		update_dpi_device_info(data);

	return NOTIFY_OK;
}
static struct notifier_block dpi_nb = {
	.notifier_call = ndi_dpi_event,
};
#endif /* IS_ENABLED(CONFIG_BCM_DPI) */

static int __net_init ndi_pernet_init(struct net *net)
{
	struct nl_bcast_entry *entry;
	struct netlink_kernel_cfg cfg = {
		.groups	= NDINLGRP_MAX,
		.input	= ndi_nl_rcv,
		.flags	= NL_CFG_F_NONROOT_RECV,
	};
	int ret = -ENOMEM;

	entry = kzalloc(sizeof(*entry), GFP_ATOMIC);
	if (!entry) {
		pr_err("cannot allocate socket entry\n");
		goto err;
	}

	ret = nf_register_net_hooks(net, hooks, ARRAY_SIZE(hooks));
	if (ret < 0) {
		pr_err("cannot register netfilter hooks\n");
		goto err_free_entry;
	}

	entry->socket = netlink_kernel_create(net, NETLINK_NDI, &cfg);
	if (!entry->socket) {
		pr_err("failed to create kernel netlink socket\n");
		goto err_unreg_nf_hooks;
	}
	entry->net = net;
	spin_lock_bh(&nl_bcast_lock);
	list_add(&entry->node, &nl_bcast_list);
	spin_unlock_bh(&nl_bcast_lock);

	return 0;

err_unreg_nf_hooks:
	nf_unregister_net_hooks(net, hooks, ARRAY_SIZE(hooks));
err_free_entry:
	kfree(entry);
err:
	return ret;
}

static void __net_exit ndi_pernet_exit(struct net *net)
{
	struct nl_bcast_entry *entry, *tmp;

	spin_lock_bh(&nl_bcast_lock);
	list_for_each_entry_safe(entry, tmp, &nl_bcast_list, node) {
		if (entry->net != net)
			continue;

		list_del(&entry->node);
		break;
	}
	spin_unlock_bh(&nl_bcast_lock);

	if (entry) {
		netlink_kernel_release(entry->socket);
		kfree(entry);
	}

	nf_unregister_net_hooks(net, hooks, ARRAY_SIZE(hooks));
}

static struct pernet_operations ndi_net_ops = {
	.init	= ndi_pernet_init,
	.exit	= ndi_pernet_exit,
};

static void probe_send_arp(struct ndi_dev *dev)
{
	if (!IS_ENABLED(CONFIG_BCM_SGS))
		return;

	if (dev->state != DEV_PROBING && dev->state != DEV_INACTIVE)
		return;

	/* For IPv4, use ARP probes to check devices state, whether it's online
	 * or offline.
	 */
	if (dev->ip4.s_addr) {
		dev->probe_count++;
		arp_send(ARPOP_REQUEST, ETH_P_ARP, dev->ip4.s_addr,
			 dev->netdev, 0, NULL, dev->netdev->dev_addr, NULL);
		pr_debug("%s state %d on %s [%pM]\n", ndi_dev_name(dev),
			 dev->state, dev->netdev->name, dev->netdev->dev_addr);

		stats.arp_probes++;
	} else {
		/* TODO: ipv6 supported to be added
		 * for now, skip probing and inactive stages if the device
		 * doesn't have an IPv4 address assigned
		 */
		dev->probe_count = DEV_INACTIVE_MAX;
	}
}

void probe_set_online(struct ndi_classify *p)
{
	struct net_device *netdev = NULL;
	struct ndi_dev *dev;

	if (!IS_ENABLED(CONFIG_BCM_SGS))
		return;

	dev = p->dev;
	if (!dev)
		return;

	/* a device is considered online only if it's been detected
	 * sending traffic
	 */
	if (!ether_addr_equal(dev->mac, eth_hdr(p->skb)->h_source))
		return;

	netdev = p->skb->bcm_ext.in_dev ? : p->skb->dev;
	if (netdev != dev->netdev) {
		if (dev->netdev)
			dev_put(dev->netdev);
		dev_hold(netdev);
		dev->netdev = netdev;
		set_bit(UPDATED_BIT, &p->local_flags);
	}

	if (!dev->netdev || dev->state == DEV_ONLINE)
		return;

	if (dev->state == DEV_INACTIVE) {
		pr_debug("%s on %s was inactive for %d sec and is back online\n",
			 ndi_dev_name(dev), dev->netdev->name,
			 (dev->probe_count + 1) * PROBE_PERIOD_SEC);
	} else if (dev->state == DEV_OFFLINE) {
		pr_debug("%s on %s is now online\n", ndi_dev_name(dev),
			 dev->netdev->name);
	}
	set_bit(UPDATED_BIT, &p->local_flags);
	dev->state = DEV_ONLINE;
	clear_bit(NDI_DEV_STALE_BIT, &dev->flags);
}

static void probe_single_device(struct ndi_dev *dev)
{
	if (test_bit(NDI_DEV_IS_XFRM_BIT, &dev->flags))
		return;

	if (!dev->netdev && dev->state != DEV_OFFLINE) {
		pr_err("%s is in the wrong state %d\n", ndi_dev_name(dev),
		       dev->state);
		dev->state = DEV_OFFLINE;
		return;
	}

	/* All devices will go through the following state:
	 *    ONLINE --> MONITOR --> PROBING --> INACTIVE --> OFFLINE
	 * where   ONLINE   = A device moves to this state as soon as NDI
	 *                    sees traffic originated from the device
	 *         MONITOR  = A device moves to this state when it is
	 *                    being monitored for activities
	 *         PROBING  = This state indicates that no activity was
	 *                    detected by NDI during the monitoring period.
	 *                    ARP probes will been sent against the device
	 *                    every ndi_timer_delay seconds. If there is no
	 *                    activity from the device during the entire
	 *                    probing period (ndi_timer_delay * DEV_PROBING_MAX
	 *                    secs), the device will transition to the INACTIVE
	 *                    state.
	 *         INACTIVE = This state indicates that no activity has been
	 *                    detected by NDI during the entire probing period.
	 *                    ARP probes will be sent against the device every
	 *                    ndi_timer_delay seconds. If there is no activity
	 *                    from the device for another (ndi_timer_delay *
	 *                    (DEV_INACTIVE_MAX - DEV_PROBING_MAX)) seconds,
	 *                    the device will transition to the OFFLINE state.
	 *         OFFLINE  = This state indicates that the device didn't
	 *                    respond to the arp probe and there was no network
	 *                    activity detected from the device for an extended
	 *                    period. The device is considered offline.
	*/
	switch (dev->state) {
	case DEV_ONLINE:
		dev->state = DEV_MONITOR;
		pr_debug("%s on %s is being monitored\n", ndi_dev_name(dev),
			 dev->netdev->name);
		break;
	case DEV_MONITOR:
		dev->state = DEV_PROBING;
		dev->probe_count = 0;
		pr_debug("%s on %s is in probing state\n", ndi_dev_name(dev),
			 dev->netdev->name);
		break;
	case DEV_PROBING:
		if (dev->probe_count < DEV_PROBING_MAX)
			break;
		dev->state = DEV_INACTIVE;
		pr_debug("%s on %s is now inactive\n", ndi_dev_name(dev),
			 dev->netdev->name);
		break;
	case DEV_INACTIVE:
		if (dev->probe_count < DEV_INACTIVE_MAX)
			break;
		dev->state = DEV_OFFLINE;
		pr_debug("%s on %s is now offline\n", ndi_dev_name(dev),
			 dev->netdev->name);
		dev_put(dev->netdev);
		dev->netdev = NULL;
		ndi_dev_nl_event(dev, NDINL_NEWDEVICE);
		break;
	case DEV_OFFLINE:
		pr_debug("%s is offline\n", ndi_dev_name(dev));
		break;
	default:
		pr_err("%s is in an unknown state\n", ndi_dev_name(dev));
		break;
	}
}

static void ndi_probe_devices(void)
{
	struct ndi_dev *dev;
	struct hlist_node *tmp;
	int bkt;

	if (!IS_ENABLED(CONFIG_BCM_SGS))
		return;

	spin_lock_bh(&devices.lock);

	ndi_devs_for_each_entry_safe(dev, tmp, bkt) {
		if (should_ignore_ndi_dev(dev))
			continue;
		probe_single_device(dev);
		probe_send_arp(dev);
	}

	spin_unlock_bh(&devices.lock);
}

static void ndi_timer_cb(struct timer_list *t)
{
	int ret;

	ndi_probe_devices();

	ret = mod_timer(&ndi_timer, jiffies + ndi_timer_delay);
	if (ret)
		pr_err("Failed to reschedule ndi_timer!\n");
}

static int
netdev_notify(struct notifier_block *nb, unsigned long event, void *ptr)
{
	struct net_device *netdev = netdev_notifier_info_to_dev(ptr);
	struct ndi_dev *dev;
	struct netdev_hw_addr *ha;
	int bkt;

	stats.netdev_notify_events++;

	/* set local hw addresses to ignore/unignore */
	switch (event) {
	case NETDEV_REGISTER:
	case NETDEV_UNREGISTER:
	case NETDEV_UP:
		netdev_hw_addr_list_for_each(ha, &netdev->dev_addrs) {
			dev = dev_find_or_new_ignored(ha->addr, NULL);
			if (!dev)
				continue;

			if (event == NETDEV_UNREGISTER) {
				clear_bit(NDI_DEV_IGNORE_BIT, &dev->flags);
				set_bit(NDI_DEV_STALE_BIT, &dev->flags);
			} else {
				set_bit(NDI_DEV_IGNORE_BIT, &dev->flags);
				clear_bit(NDI_DEV_STALE_BIT, &dev->flags);
			}
		}
		break;
	default:
		break;
	}

	/* if a netdev is unregistering, remove all references to it */
	if (event == NETDEV_UNREGISTER) {
		spin_lock_bh(&devices.lock);
		ndi_devs_for_each_entry(dev, bkt) {
			if (dev->netdev != netdev)
				continue;
			dev_put(dev->netdev);
			dev->netdev = NULL;
			set_bit(NDI_DEV_STALE_BIT, &dev->flags);
		}
		spin_unlock_bh(&devices.lock);
	}

	return NOTIFY_DONE;
}

static struct notifier_block netdev_notifier = {
	.notifier_call = netdev_notify,
};

static int __maybe_unused
xfrm_notify(struct xfrm_state *x, const struct km_event *c)
{
	struct ndi_sa *sa;

	stats.xfrm_notify_events++;
	switch (c->event) {
	case XFRM_MSG_DELSA:
		sa = sa_find(x);
		sa_delete(sa);
		break;
	case XFRM_MSG_NEWSA:
		sa_find_or_new(x);
		break;
	case XFRM_MSG_EXPIRE:
	case XFRM_MSG_UPDSA:
	case XFRM_MSG_FLUSHSA:
	case XFRM_MSG_NEWAE:
		break;
	default:
		pr_err("xfrm_notify: unknown SA event %d\n", c->event);
		break;
	}

	return 0;
}

static struct xfrm_mgr ndi_xfrm_mgr __maybe_unused = {
	.notify		= xfrm_notify,
};

static int ndi_stat_seq_show(struct seq_file *s, void *v)
{
	seq_printf(s, "        packets seen: %llu\n", stats.seen_pkts);
	seq_printf(s, "     packets scanned: %llu\n", stats.scanned_pkts);
	seq_printf(s, "          arp probes: %llu\n", stats.arp_probes);
	seq_printf(s, "netdev notify events: %llu\n", stats.netdev_notify_events);
	seq_printf(s, "  xfrm notify events: %llu\n", stats.xfrm_notify_events);
	seq_printf(s, "  netlink broadcasts: %llu\n", stats.netlink_broadcasts);

	return 0;
}
static int ndi_stat_open(struct inode *inode, struct file *file)
{
	return single_open(file, ndi_stat_seq_show, NULL);
};
static const struct file_operations ndi_stats_fops = {
	.open		= ndi_stat_open,
	.read		= seq_read,
	.llseek		= seq_lseek,
	.release	= single_release
};

static int __init ndi_init(void)
{
	struct proc_dir_entry *pde;
	int ret = -EINVAL;

	ndi_dir = proc_mkdir("ndi", NULL);
	if (!ndi_dir) {
		pr_err("couldn't create ndi proc directory\n");
		goto err;
	}

	pde = proc_create("stats", 0440, ndi_dir, &ndi_stats_fops);
	if (!pde) {
		pr_err("couldn't create proc entry 'stats'\n");
		ret = -EINVAL;
		goto err;
	}

	ret = ndi_tables_init();
	if (ret < 0)
		goto err_free_proc_stats;

	ret = register_netdevice_notifier(&netdev_notifier);
	if (ret < 0)
		goto err_free_tables;

	ret = register_pernet_subsys(&ndi_net_ops);
	if (ret < 0)
		goto err_unregister_netdev_notifier;

#if IS_ENABLED(CONFIG_BCM_DPI)
	ret = dpi_register_notifier(&dpi_nb);
	if (ret < 0)
		goto err_unregister_pernet;
#endif

	pcap = pcap_register("ndi");
	if (ret)
		goto err_unregister_dpi_notifier;

	ret = ndi_dev_nl_init();
	if (ret < 0)
		goto err_unregister_pcap;

#if IS_ENABLED(CONFIG_XFRM)
	ret = xfrm_register_km(&ndi_xfrm_mgr);
	if (ret < 0)
		goto err_free_dev_nl;
#endif

	timer_setup(&ndi_timer, ndi_timer_cb, 0);
	ret = mod_timer(&ndi_timer, jiffies + ndi_timer_delay);
	if (ret)
		goto err_unregister_xfrm;

	return 0;

err_unregister_xfrm:
#if IS_ENABLED(CONFIG_XFRM)
	xfrm_unregister_km(&ndi_xfrm_mgr);
err_free_dev_nl:
#endif
	ndi_dev_nl_exit();
err_unregister_pcap:
	pcap_unregister(pcap);
err_unregister_dpi_notifier:
#if IS_ENABLED(CONFIG_BCM_DPI)
	dpi_unregister_notifier(&dpi_nb);
err_unregister_pernet:
#endif
	unregister_pernet_subsys(&ndi_net_ops);
err_unregister_netdev_notifier:
	unregister_netdevice_notifier(&netdev_notifier);
err_free_tables:
	ndi_tables_exit();
err_free_proc_stats:
	remove_proc_entry("stats", ndi_dir);
err:
	return ret;
}

static void __exit ndi_exit(void)
{
	del_timer_sync(&ndi_timer);
#if IS_ENABLED(CONFIG_XFRM)
	xfrm_unregister_km(&ndi_xfrm_mgr);
#endif
	ndi_dev_nl_exit();
	pcap_unregister(pcap);
#if IS_ENABLED(CONFIG_BCM_DPI)
	dpi_unregister_notifier(&dpi_nb);
#endif
	unregister_pernet_subsys(&ndi_net_ops);
	unregister_netdevice_notifier(&netdev_notifier);
	ndi_tables_exit();
	proc_remove(ndi_dir);
}

module_init(ndi_init);
module_exit(ndi_exit);
MODULE_LICENSE("GPL");

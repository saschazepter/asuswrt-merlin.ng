/*
* <:copyright-BRCM:2012:DUAL/GPL:standard
* 
*    Copyright (c) 2012 Broadcom 
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
:>
*/

#ifndef _BCM_NF_CONNTRACK_H
#define _BCM_NF_CONNTRACK_H

#include <linux/types.h>
#include <linux/netfilter/nf_conntrack_common.h>
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_conntrack_helper.h>

#include <linux/blog.h>
#include <linux/dpi.h>
#include <linux/iqos.h>

#if IS_ENABLED(CONFIG_BCM_HW_FIREWALL)
typedef int (*bcm_hwf_ct_event_t)(enum ip_conntrack_events, struct nf_conn *, struct sk_buff *);
extern bcm_hwf_ct_event_t __rcu bcm_hwf_ct_event_fn;
#endif

#if defined(CONFIG_BLOG)
static inline void bcm_nf_blog_ct_init(struct nf_conn *ct)
{
	/* no blog lock needed here */
	set_bit(IPS_BLOG_BIT, &ct->status);  /* Enable conntrack blogging */
	ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL] = BLOG_KEY_FC_INVALID;
	ct->bcm_ext.blog_key[IP_CT_DIR_REPLY]    = BLOG_KEY_FC_INVALID;
	ct->bcm_ext.blog_learned = 0;
} 


static inline int bcm_nf_blog_destroy_conntrack(struct nf_conn *ct)
{
	blog_lock();
	pr_debug("%s(%px) blog keys[0x%08x,0x%08x]\n", __func__,
		ct, ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL],
		ct->bcm_ext.blog_key[IP_CT_DIR_REPLY]);


	/* Conntrack going away, notify blog client */
	if ((ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL] != BLOG_KEY_FC_INVALID) ||
			(ct->bcm_ext.blog_key[IP_CT_DIR_REPLY] != BLOG_KEY_FC_INVALID)) {

		blog_notify(DESTROY_FLOWTRACK, (void*)ct,
					(uint32_t)ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL],
					(uint32_t)ct->bcm_ext.blog_key[IP_CT_DIR_REPLY]);
	}

	clear_bit(IPS_BLOG_BIT, &ct->status);	/* Disable further blogging */
	blog_unlock();

	return 0;
}

static inline int bcm_nf_blog_link_ct(struct nf_conn *ct, enum ip_conntrack_info ctinfo,
			 struct sk_buff *skb, u_int16_t l3num, u_int8_t protonum)
{

	/* here we dont need blog lock as this blog is owned by this skb */

	struct nf_conn_help * help = nfct_help(ct);


    if ( help && help->helper &&
	     strcmp(help->helper->name, "BCM-NAT")) {
		pr_debug("nf_conntrack_in: skb<%px> ct<%px> helper<%s> found\n",
				skb, ct, help->helper->name);
		clear_bit(IPS_BLOG_BIT, &ct->status);
	}

	if (test_bit(IPS_BLOG_BIT, &ct->status)) {	/* OK to blog ? */
		pr_debug("nf_conntrack_in: skb<%px> blog<%px> ct<%px>\n",
				skb, blog_ptr(skb), ct);

		blog_link(FLOWTRACK, blog_ptr(skb),
				(void*)ct, CTINFO2DIR(ctinfo), 0);
	} else {
		pr_debug("nf_conntrack_in: skb<%px> ct<%px> NOT BLOGible<%px>\n",
				skb, ct, blog_ptr(skb));
		blog_skip(skb, blog_skip_reason_ct_status_donot_blog); /* No blogging */
	}

	return 0;
}

static inline int bcm_nf_blog_update_timeout(struct nf_conn *ct, unsigned long extra_jiffies)
{
	blog_lock();
	
	if ((ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL] != BLOG_KEY_FC_INVALID) ||
			(ct->bcm_ext.blog_key[IP_CT_DIR_REPLY] != BLOG_KEY_FC_INVALID)) {

		unsigned int blog_key = (ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL] != BLOG_KEY_FC_INVALID) ? 
						ct->bcm_ext.blog_key[IP_CT_DIR_ORIGINAL] : ct->bcm_ext.blog_key[IP_CT_DIR_REPLY];

		blog_notify(UPDATE_FLOWTRACK_IDLE_TIMEOUT, (void*)ct,
					blog_key, (uint32_t)(extra_jiffies/HZ));
	}
	blog_unlock();

	return 0;
}

#endif /*CONFIG_BLOG */

#if IS_ENABLED(CONFIG_BCM_NF_SCS)
static inline void bcm_nf_scs_destroy_conntrack(struct nf_conn *ct)
{
    spinlock_t *lock;
    
    local_bh_disable();
    
    lock = ct->bcm_ext.scs.lock;
    if (lock) {
        spin_lock_bh(lock);
        list_del(&ct->bcm_ext.scs.entry);
        ct->bcm_ext.scs.lock = NULL;
        spin_unlock_bh(lock);
    }
        
    local_bh_enable();
}
#endif /* CONFIG_BCM_NF_SCS */

#if IS_ENABLED(CONFIG_NF_MSCS)
static inline void bcm_nf_mscs_destroy_conntrack(struct nf_conn *ct)
{
    spinlock_t *lock;
    
    local_bh_disable();
    
    lock = ct->bcm_ext.mscs.lock;
    if (lock) {
        spin_lock_bh(lock);
        list_del(&ct->bcm_ext.mscs.entry);
        ct->bcm_ext.mscs.lock = NULL;
        spin_unlock_bh(lock);
    }
        
    local_bh_enable();
}
#endif /* CONFIG_NF_MSCS */

static inline int nf_conntrack_ipv6_is_multicast(const __be32 ip6[4])
{
	return ((ip6[0] & htonl(0xFF000000)) == htonl(0xFF000000));
}

static inline void bcm_nf_conn_set_iq_prio(struct nf_conn *ct, struct sk_buff *skb)
{
#if IS_ENABLED(CONFIG_BCM_INGQOS)
#if defined(CONFIG_BLOG)
	if (skb != NULL && skb->blog_p != NULL ) 
		ct->bcm_ext.iq_prio = (blog_iq(skb) == BLOG_IQ_PRIO_HIGH) ? IQOS_PRIO_HIGH : IQOS_PRIO_LOW;
	else
#endif
	{

		switch (nf_ct_l3num(ct)) {
			case AF_INET:
				ct->bcm_ext.iq_prio = ipv4_is_multicast(ct->tuplehash[IP_CT_DIR_ORIGINAL].tuple.dst.u3.ip) ? IQOS_PRIO_HIGH : IQOS_PRIO_LOW;
				break;
			case AF_INET6:
				ct->bcm_ext.iq_prio = nf_conntrack_ipv6_is_multicast(ct->tuplehash[IP_CT_DIR_ORIGINAL].tuple.dst.u3.ip6) ? IQOS_PRIO_HIGH : IQOS_PRIO_LOW;
				break;
			default:
				ct->bcm_ext.iq_prio = IQOS_PRIO_LOW;
		}
	}	
#endif
}

static inline void bcm_nf_iqos_destroy_conntrack(struct nf_conn *ct)
{
#if IS_ENABLED(CONFIG_BCM_INGQOS)
	if (test_bit(IPS_IQOS_BIT,&ct->status)) {
		clear_bit(IPS_IQOS_BIT, &ct->status);	
		iqos_rem_L4port(ct->tuplehash[IP_CT_DIR_ORIGINAL].tuple.dst.protonum,
				ntohs(ct->tuplehash[IP_CT_DIR_ORIGINAL].tuple.dst.u.all), IQOS_ENT_DYN);
		iqos_rem_L4port(ct->tuplehash[IP_CT_DIR_REPLY].tuple.dst.protonum,
				ntohs(ct->tuplehash[IP_CT_DIR_REPLY].tuple.dst.u.all), IQOS_ENT_DYN);
	}
#endif
}

#if defined(CONFIG_BCM_NF_DERIVED_CONN)
static inline void bcm_nf_ct_derived_list_add(struct nf_conn *ct)
{
 	BCM_DERIVED_CONN_LOCK_BH();

	 /* master ref count incremneted before calling this fcuntion */
	/* via exp->master safe, refcnt bumped in nf_ct_find_expectation */
	if(ct->master){

		list_add(&ct->bcm_ext.derived_list,
			 &ct->master->bcm_ext.derived_connections);
	}
	
 	BCM_DERIVED_CONN_UNLOCK_BH();
}

static inline void bcm_nf_ct_derived_list_del(struct nf_conn *ct)
{
 	BCM_DERIVED_CONN_LOCK_BH();
	if(ct->master){
		list_del(&ct->bcm_ext.derived_list);
	}
	
 	BCM_DERIVED_CONN_UNLOCK_BH();
}
static inline void bcm_nf_ct_derived_conn_init(struct nf_conn *ct)
{
	INIT_LIST_HEAD(&ct->bcm_ext.derived_connections);
	INIT_LIST_HEAD(&ct->bcm_ext.derived_list);
	ct->bcm_ext.derived_timeout = 0;
}
#else

static inline void bcm_nf_ct_derived_list_add(struct nf_conn *ct){};
static inline void bcm_nf_ct_derived_list_del(struct nf_conn *ct){};
static inline void bcm_nf_ct_derived_conn_init(struct nf_conn *ct){};
#endif


static inline unsigned long bcm_nf_ct_refresh(struct nf_conn *ct,
			  unsigned long extra_jiffies)
{
#if defined(CONFIG_BCM_NF_DERIVED_CONN)
	/* when derived time out is set always use it */
	if(ct->bcm_ext.derived_timeout)
		extra_jiffies = ct->bcm_ext.derived_timeout;
#endif

#if defined(CONFIG_BLOG)
	if(ct->bcm_ext.extra_jiffies != extra_jiffies) {
		ct->bcm_ext.extra_jiffies = extra_jiffies;
		/*notify accelerator */
		bcm_nf_blog_update_timeout(ct, extra_jiffies);
	}
#endif

	return extra_jiffies;
}

static inline void bcm_conntrack_init_end(void)
{
#if IS_ENABLED(CONFIG_BCM_DPI)
	dpi_conntrack_init();
#endif
}

static inline void bcm_conntrack_cleanup_end(void)
{
#if IS_ENABLED(CONFIG_BCM_DPI)
	dpi_conntrack_cleanup();
#endif
}

static inline void bcm_nf_ct_alloc(struct nf_conn *ct, struct sk_buff *skb)
{
#if defined(CONFIG_BLOG)
	bcm_nf_blog_ct_init(ct);
#endif
	/* REGARDLESS_DROP */
	INIT_LIST_HEAD(&ct->bcm_ext.safe_list);

	bcm_nf_ct_derived_conn_init(ct);
	bcm_nf_conn_set_iq_prio(ct, skb);

#if IS_ENABLED(CONFIG_BCM_DPI)
	memset(&ct->bcm_ext.dpi, 0, sizeof(ct->bcm_ext.dpi));
#define EG_PRIO_NORMAL 2 /* Taken from bcmdpi.h */
	ct->bcm_ext.dpi.eg_prio = EG_PRIO_NORMAL;
	if (skb && skb->dev && is_netdev_wan(skb->dev))
		set_bit(DPI_CT_INIT_FROM_WAN_BIT, &ct->bcm_ext.dpi.flags);
#endif

#if IS_ENABLED(CONFIG_BCM_SGS)
	memset(&ct->bcm_ext.sgs, 0, sizeof(ct->bcm_ext.sgs));
#endif

#if IS_ENABLED(CONFIG_BCM_NDI)
	memset(&ct->bcm_ext.ndi, 0, sizeof(ct->bcm_ext.ndi));
#endif

#if IS_ENABLED(CONFIG_NF_DYNDSCP)
	/* initialize dynamic dscp inheritance fields */
	ct->bcm_ext.dyndscp.status = 0;
	ct->bcm_ext.dyndscp.dscp[0] = 0;
	ct->bcm_ext.dyndscp.dscp[1] = 0;
#endif

#if IS_ENABLED(CONFIG_BCM_NF_SCS)
	ct->bcm_ext.scs.lock = NULL;
#endif
#if IS_ENABLED(CONFIG_NF_MSCS)
	ct->bcm_ext.mscs.lock = NULL;
#endif
}

static inline void bcm_nf_ct_init(struct nf_conn *ct)
{
	bcm_nf_ct_derived_list_add(ct);
}

static inline void bcm_nf_ct_confirm(struct nf_conn *ct, struct sk_buff *skb)
{
#if IS_ENABLED(CONFIG_BCM_HW_FIREWALL)
	{
		bcm_hwf_ct_event_t fn;

		rcu_read_lock();
		fn = rcu_dereference(bcm_hwf_ct_event_fn);
		if(fn)
			fn((1<<IPCT_NEW), ct, skb); 
		rcu_read_unlock();
	}
#endif
}

static inline void bcm_nf_ct_seenreply(struct nf_conn *ct, struct sk_buff *skb)
{
#if IS_ENABLED(CONFIG_BCM_HW_FIREWALL)
	{
		bcm_hwf_ct_event_t fn;

		rcu_read_lock();
		fn = rcu_dereference(bcm_hwf_ct_event_fn);
		if(fn)
			fn((1<<IPCT_REPLY), ct, skb);
		rcu_read_unlock();
	}
#endif
}

static inline void bcm_nf_ct_delete_from_lists(struct nf_conn *ct)
{
#if IS_ENABLED(CONFIG_BCM_DPI)
	dpi_nf_ct_delete_from_lists(ct);
#endif
#if IS_ENABLED(CONFIG_BCM_SGS)
	sgs_nf_ct_delete_from_lists(ct);
#endif

}

static inline void bcm_nf_ct_destroy(struct nf_conn *ct)
{
#if IS_ENABLED(CONFIG_BCM_HW_FIREWALL)
	{
		bcm_hwf_ct_event_t fn;

		rcu_read_lock();
		fn = rcu_dereference(bcm_hwf_ct_event_fn);
		if(fn)
			fn((1<<IPCT_DESTROY), ct, NULL);
		rcu_read_unlock();
	}
#endif

#if defined(CONFIG_BLOG)
	bcm_nf_blog_destroy_conntrack(ct);
#endif
#if IS_ENABLED(CONFIG_BCM_NF_SCS)
    bcm_nf_scs_destroy_conntrack(ct);
#endif
#if IS_ENABLED(CONFIG_NF_MSCS)
    bcm_nf_mscs_destroy_conntrack(ct);
#endif
	bcm_nf_iqos_destroy_conntrack(ct);
	bcm_nf_ct_derived_list_del(ct);
}

#endif /* _BCM_NF_CONNTRACK_H */

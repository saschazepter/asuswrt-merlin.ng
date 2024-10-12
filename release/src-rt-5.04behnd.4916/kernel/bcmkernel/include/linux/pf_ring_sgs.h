/*
 * <:copyright-BRCM:2021:DUAL/GPL:standard
 * 
 *    Copyright (c) 2021 Broadcom 
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

#ifndef _PF_RING_SGS_H_
#define _PF_RING_SGS_H_

#include <linux/netfilter/nf_conntrack_tuple_common.h>


#define PF_RING_IOCTL_WAKEUP	0
#define PF_RING_IOCTL_EVICT	1

#define PF_SGS_INIT_FROM_WAN_BIT	0
#define PF_SGS_IS_LOCAL_BIT		1
#define PF_SGS_NO_RESPONSE_BIT		2
#define PF_SGS_CT_FROM_SGS_BIT		3

enum sgs_cmd {
	SGS_CMD_TERMINATE,
	SGS_CMD_ACCELERATE
};

enum sgs_status {
	PF_FLOW_BLOCK_BIT,
	PF_FLOW_ACCEL_BIT,
	PF_PACKET_DROP_BIT
};

struct dpi_dev_info {
	u_int32_t	dev_id;
	u_int16_t	category;
	u_int16_t	family;
	u_int16_t	vendor;
	u_int16_t	os;
	u_int16_t	os_class;
	u_int16_t	prio;
};

struct flow_stat_dir {
	u_int64_t	packets;
	u_int64_t	bytes;
};

struct flow_stat {
	struct flow_stat_dir	counters[IP_CT_DIR_MAX];
};

struct sgs_pkthdr {
	u_int32_t		skb_len;
	u_int32_t		dir;
	u_int64_t		mac;
	u_int64_t		skb;
	u_int64_t		ct;
	/* per-connection info */
	u_int32_t		packet_count;
	struct flow_stat	stat;
	u_int32_t		app_id;
	u_int32_t		ndi_id;
	u_int32_t		flags;
	u_int64_t		start_time; /* start time of the nf_conntrack */
};


#if defined(CONFIG_BCM_KF_SGS)
struct locked_list {
	struct spinlock		lock;
	struct list_head	head;
	unsigned int		size;
};

#define DEFINE_LOCKED_LIST(name) \
	struct locked_list name = { \
		.lock = __SPIN_LOCK_UNLOCKED(name.lock), \
		.head = LIST_HEAD_INIT(name.head), \
	}

struct sgs_pfr_socket {
	char			name[128];
	struct locked_list	skb_list;
	struct sk_buff		*cmd_skb;
	long			seq_num;
	struct proc_dir_entry	*dir;
	struct task_struct	*response_thread;
	wait_queue_head_t	wait_queue;
};
#endif

#endif /* _PF_RING_SGS_H_ */

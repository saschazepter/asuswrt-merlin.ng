#if defined(CONFIG_BCM_KF_DPI)
#ifndef _LINUX_DPI_H
#define _LINUX_DPI_H

#include <linux/if_ether.h>
#include <linux/list.h>
#include <linux/if.h>
#include <linux/in.h>

#define DPI_APPID_IDENTIFIED_BIT	0
#define DPI_APPID_FINAL_BIT		1
#define DPI_APPID_STOP_CLASSIFY_BIT	2
#define DPI_DEVID_STOP_CLASSIFY_BIT	3
#define DPI_URL_STOP_CLASSIFY_BIT	4
#define DPI_CLASSIFICATION_STOP_BIT	5
#define DPI_CT_INIT_FROM_WAN_BIT	6
#define DPI_CT_DS_BYPASS_BIT		29
#define DPI_CT_US_BYPASS_BIT		30
#define DPI_CT_BLOCK_BIT		31

#define DPI_NL_CHANGE_MASK		(1 << DPI_CT_BLOCK_BIT)

/* 256 was chosen as the max length of a hostname in a DHCP packet is 255. */
#define DPI_HOSTNAME_MAX_LEN		256

#define dpi_ct_init_from_wan(ct) \
	test_bit(DPI_CT_INIT_FROM_WAN_BIT, &(ct)->bcm_ext.dpi.flags)

struct dpi_ct_stats {
	u64	pkts;
	u64	bytes;
};

struct dpi_app {
	u64			app_id;
	atomic_t		refcount;
	struct hlist_node	node;
};

struct dpi_dev {
	u8			mac[ETH_ALEN];
	u8			ignore;

	u32			dev_id;
	u16			category;
	u16			family;
	u16			vendor;
	u16			os;
	u16			os_class;
	u16			prio;
	char			hostname[DPI_HOSTNAME_MAX_LEN];
	char			intf[IFNAMSIZ];
	u32			flags;

	struct dpi_ct_stats	us;
	struct dpi_ct_stats	ds;

	u32			ndi_id;
	atomic_t		refcount;
	struct hlist_node	node;
};

struct dpi_appinst {
	struct dpi_app		*app;
	struct dpi_dev		*dev;
	struct dpi_ct_stats	us;
	struct dpi_ct_stats	ds;
	atomic_t		refcount;
	struct hlist_node	node;
};

struct dpi_url {
	u32			len;
	char			hostname[DPI_HOSTNAME_MAX_LEN];
	u64			app_id;
	u64			hits;
	atomic_t		refcount;
	struct hlist_node	node;
};

struct dpi_ip {
	union {
		struct in_addr	ip;
		struct in6_addr	ip6;
	};
	u8			l3proto;
	u64			app_id;
	atomic_t		refcount;
	struct hlist_node	node;
	struct list_head	lru_node;
};

struct dpi_info {
	struct dpi_dev		*dev;
	struct dpi_app		*app;
	struct dpi_appinst	*appinst;
	struct dpi_url		*url;
	struct dpi_ip		*ip;
	unsigned long		flags;
	u8			eg_prio;
	struct net_device	*net_dev;
};

struct nf_conn;

struct dpi_core_hooks {
	void (*delete)(struct nf_conn *ct);
};

struct dpi_ct_hooks {
	int (*event_report)(int eventmask, struct nf_conn *ct, u32 portid,
			    int report);
};

/* ----- dpi functions ----- */
struct dpi_info *dpi_info_get(struct nf_conn *conn);
u32 dpi_app_id(struct dpi_app *app);
u32 dpi_dev_id(struct dpi_dev *dev);
u8 *dpi_mac(struct dpi_dev *dev);
int dpi_url_len(struct dpi_url *url);
char *dpi_url(struct dpi_url *url);
struct dpi_ct_stats *dpi_appinst_stats(struct nf_conn *ct, int dir);
struct dpi_ct_stats *dpi_dev_stats(struct nf_conn *ct, int dir);
void dpi_block(struct nf_conn *conn);
void dpi_nf_ct_delete_from_lists(struct nf_conn *ct);
int dpi_core_hooks_register(struct dpi_core_hooks *h);
void dpi_core_hooks_unregister(void);
int dpi_nf_ct_event_report(struct nf_conn *ct, u32 portid);
void dpi_conntrack_init(void);
void dpi_conntrack_cleanup(void);

/* dpi notification chain */
struct notifier_block;
enum {
	DPI_NOTIFY_DEVICE,
};
int dpi_register_notifier(struct notifier_block *nb);
int dpi_unregister_notifier(struct notifier_block *nb);
int dpi_notify(long event, void *data);

extern int (*dpi_tdts_shell_dpi_l3_skb)(struct sk_buff *skb, void *p);
extern int (*dpi_tdts_shell_system_setting_tcp_conn_max_get)(unsigned *p);
extern int (*dpi_tdts_shell_system_setting_tcp_conn_timeout_get)(unsigned *p);
extern int (*dpi_tdts_shell_system_setting_udp_conn_max_get)(unsigned *p);
extern int (*dpi_tdts_shell_tcp_conn_remove)(uint8_t ip_ver, uint8_t *sip,
		uint8_t *dip, uint16_t sport, uint16_t dport);
extern int (*dpi_tdts_shell_udp_conn_remove)(uint8_t ip_ver, uint8_t *sip,
		uint8_t *dip, uint16_t sport, uint16_t dport);
#endif /* _LINUX_DPI_H */
#endif /* defined(CONFIG_BCM_KF_DPI) */

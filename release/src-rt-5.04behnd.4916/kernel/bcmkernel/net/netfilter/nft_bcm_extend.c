/*
*    Copyright (c) 2003-2018 Broadcom Corporation
*    All Rights Reserved
*
<:label-BRCM:2018:DUAL/GPL:standard

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
#include <net/netfilter/nf_tables.h>
#include <linux/tcp.h>

#if defined(CONFIG_BLOG)
#include <linux/blog.h>
#endif

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Broadcom");
MODULE_DESCRIPTION("nft stop logging module");
MODULE_ALIAS("nft_bcm_ext");

enum nft_bcm_ext_attributes {
	NFTA_BCM_EXT_UNSPEC,
	NFTA_BCM_EXT_TEXT,
	__NFTA_BCM_EXT_MAX,
};
#define NFTA_BCM_EXT_MAX (__NFTA_BCM_EXT_MAX - 1)

#define BCM_EXT_TEXT_SIZE 128
struct nft_bcm_ext {
	char text[BCM_EXT_TEXT_SIZE];
	int len;
};

static const struct nla_policy nft_bcm_ext_policy[NFTA_BCM_EXT_MAX + 1] = {
	[NFTA_BCM_EXT_TEXT]		= { .type = NLA_STRING, .len = BCM_EXT_TEXT_SIZE },
};

static void nft_bcm_ext_eval(const struct nft_expr *expr, struct nft_regs *regs, const struct nft_pktinfo *pkt) {
	struct nft_bcm_ext *priv = nft_expr_priv(expr);
#if defined(CONFIG_BLOG)
	struct sk_buff *skb = pkt->skb;
#endif


        if (!strcmp(priv->text, "skiplog"))
	{
#if defined(CONFIG_BLOG)
	    blog_skip(skb, blog_skip_reason_nf_xt_skiplog);
#endif
            regs->verdict.code = NFT_CONTINUE;
	}
	else if (!strcmp(priv->text, "tcp-pure-ack"))
	{
#if defined(CONFIG_BLOG)
	    if (skb->blog_p) {
		if (skb->blog_p->key.tcp_pure_ack)
		    regs->verdict.code = NFT_CONTINUE;
		else
		    regs->verdict.code = NFT_BREAK;
	    }
            else
#endif
		regs->verdict.code = NFT_BREAK;
	}
	else if (!strcmp(priv->text, "not-tcp-pure-ack"))
	{
#if defined(CONFIG_BLOG)
	    if (skb->blog_p) {
		if (skb->blog_p->key.tcp_pure_ack)
		    regs->verdict.code = NFT_BREAK;
		else
		    regs->verdict.code = NFT_CONTINUE;
	    }
            else
#endif
		    regs->verdict.code = NFT_CONTINUE;
	}
	else 
	{
	    //printk("--- nft_bcm_ext_eval : Unknown bcm_ext cmd\n");
	    regs->verdict.code = NFT_CONTINUE;
	}
}

static int nft_bcm_ext_init(const struct nft_ctx *ctx, const struct nft_expr *expr, const struct nlattr * const tb[]) {
	struct nft_bcm_ext *priv = nft_expr_priv(expr);
	if (tb[NFTA_BCM_EXT_TEXT] == NULL)
		return -EINVAL;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5, 15, 0))	
	nla_strscpy(priv->text, tb[NFTA_BCM_EXT_TEXT], BCM_EXT_TEXT_SIZE);
#else
	nla_strlcpy(priv->text, tb[NFTA_BCM_EXT_TEXT], BCM_EXT_TEXT_SIZE);
#endif	
	priv->len = strlen(priv->text);
	return 0;
}

static int nft_bcm_ext_dump(struct sk_buff *skb, const struct nft_expr *expr) {
	const struct nft_bcm_ext *priv = nft_expr_priv(expr);
	if (nla_put_string(skb, NFTA_BCM_EXT_TEXT, priv->text))
		return -1;
	return 0;
}
static struct nft_expr_type nft_bcm_ext_type;
static const struct nft_expr_ops nft_bcm_ext_op = {
	.eval = nft_bcm_ext_eval,
	.size = sizeof(struct nft_bcm_ext),
	.init = nft_bcm_ext_init,
	.dump = nft_bcm_ext_dump,
	.type = &nft_bcm_ext_type,
};
static struct nft_expr_type nft_bcm_ext_type __read_mostly =  {
	.ops = &nft_bcm_ext_op,
	.name = "bcm_ext",
	.owner = THIS_MODULE,
	.policy = nft_bcm_ext_policy,
	.maxattr = NFTA_BCM_EXT_MAX,
};

static int __init nft_bcm_ext_module_init(void)
{       
	return nft_register_expr(&nft_bcm_ext_type);
}

static void __exit nft_bcm_ext_module_exit(void)
{
	nft_unregister_expr(&nft_bcm_ext_type);
}

module_init(nft_bcm_ext_module_init);
module_exit(nft_bcm_ext_module_exit);


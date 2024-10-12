/*
   <:copyright-BRCM:2021:DUAL/GPL:standard
   
      Copyright (c) 2021 Broadcom 
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

/****************************************************************************/
/**                                                                        **/
/** Generic Device Accelerator (GDX) Driver                                **/
/**                                                                        **/
/** Title:                                                                 **/
/**                                                                        **/
/**   Generic device accelerator interface.                                **/
/**                                                                        **/
/** Abstract:                                                              **/
/**                                                                        **/
/**   GDX driver functions common to both hardware and software            **/
/**   acceleration                                                         **/
/**                                                                        **/
/** Allocated requirements:                                                **/
/**                                                                        **/
/** Allocated resources:                                                   **/
/**                                                                        **/
/**                                                                        **/
/**                                                                        **/
/****************************************************************************/

#include "gdx.h"

extern int  gdx_priv_init(uint32_t page_size, uint32_t max_skb_frags);
extern void gdx_priv_uninit(void);

int (*gdx_hw_accel_loopbk_fn)(struct sk_buff *skb, bool l3_packet) = NULL;

int gdx_print_lvl = GDX_PRINT_LVL_ERROR;

/* GDX debug mask 
 * bit[0] - force nonlinear packets to the GDX 
 * bit[1] - force l3 packets to the GDX 
 * bit[24:16] - hdrlen in case of nonlinear packet, this hdrlen will be in
 * skb->data reset will be in frags */
int gdx_dbg_mask = 0;
int gdx_dbg_force_nonlinear_pkts = 0;
int gdx_dbg_nonlinear_hdrlen     = 0;
int gdx_dbg_force_l3_pkts        = 0;

#if !defined(CONFIG_BCM_GDX_HW)
/* GDX HW Acceleration not supported. Declare dummy functions */
int gdx_hw_init(void)
{
    return 0;
}

void gdx_hw_uninit(void)
{
    return;
}
#else
extern int  gdx_hw_init(void);
extern void gdx_hw_uninit(void);
#endif

/*
 * Check if frag gather is supported in hardware accelerator 
 * for the input device.
 */
int gdx_is_hw_frag_gather_supported(void)
{
#if defined(CONFIG_BCM_RUNNER_FRAG_GATHER)
    return 1;
#endif
    return 0;
}

/*
 * Check if there is any difference in the netdev offset between gdx 
 * binary and the opensource. Helps detect any mismatch when patches 
 * are provided to customers. 
 * Note: The fields that are checked here are the ones that are 
 * accessed by the GDX binary.
 */
int gdx_netdev_offset_check(gdx_netdev_field_offset_t *netdev_field_offset_p)
{
    /* Compare the netdev field offsets between the
       opensource and GDX binary */
    GDX_CHECK_NETDEV_OFFSET_RET(netdev_field_offset_p, tx_dropped);
    GDX_CHECK_NETDEV_OFFSET_RET(netdev_field_offset_p, type);
    GDX_CHECK_NETDEVEXT_OFFSET_RET(netdev_field_offset_p, iff_flags);
    return 0;
}

/*
 * Check if there is any difference in the skb offset between gdx 
 * binary and the opensource. Helps detect any mismatch when patches 
 * are provided to customers. 
 * Note: The fields that are checked here are the ones that are 
 * accessed by the GDX binary.
 */
int gdx_skb_offset_check(gdx_skb_field_offset_t *skb_field_offset_p)
{
    /* Compare the skb field offsets between the
       opensource and GDX binary */
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, data);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, __pkt_type_offset);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, protocol);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, head);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, transport_header);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, network_header);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, dev);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, bcm_ext);
    GDX_CHECK_SKBEXT_OFFSET_RET(skb_field_offset_p, flags);
    GDX_CHECK_SKB_OFFSET_RET(skb_field_offset_p, truesize);
    return 0;
}

/*
 * GDX driver initialization function
 */
static int gdx_init(void)
{
    /* First do the private initialization and check whether the skb and
       netdev offsets are ok before proceeding with other initialization */
    if (gdx_priv_init(PAGE_SIZE, MAX_SKB_FRAGS) != 0)
    {
        GDX_PRINT_ERROR("gdx_priv_init failure");
        return GDX_FAILURE;
    }

    if (gdx_hw_init() != 0)
    {
        GDX_PRINT_ERROR("gdx_hw_init failure");
        return GDX_FAILURE;
    }

    return 0;
}

/*
 * GDX driver uninitialization function
 */
static void gdx_uninit(void)
{
    gdx_hw_uninit();

    gdx_priv_uninit();
}

MODULE_DESCRIPTION("Generic Device Accelerator (GDX) Driver");
MODULE_AUTHOR("Broadcom");
MODULE_LICENSE("Proprietary");

module_init(gdx_init);
module_exit(gdx_uninit);

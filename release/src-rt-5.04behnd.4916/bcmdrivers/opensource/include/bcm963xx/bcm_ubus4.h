/*
 * <:copyright-BRCM:2017:DUAL/GPL:standard
 * 
 *    Copyright (c) 2017 Broadcom 
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

#ifndef __BCM_UBUS4_H__
#define __BCM_UBUS4_H__

#ifndef IS_BCMCHIP
#define IS_BCMCHIP(num) (defined(_BCM9##num##_)||defined(CONFIG_BCM9##num)|| defined(CONFIG_BCM##num))
#endif

#include "bcm_ubus4_id.h"

#ifdef CONFIG_BCM_GLB_COHERENCY
#define IS_DDR_COHERENT 1
#else
#define IS_DDR_COHERENT 0
#endif

#define DECODE_CFG_SIZE_MASK        0xff00
#define DECODE_CFG_SIZE_SHIFT       8
#define DECODE_CFG_ENABLE_MASK      0x60000
#define DECODE_CFG_ENABLE_SHIFT     17
#define DECODE_CFG_CACHE_BITS_MASK  0x380000
#define DECODE_CFG_CACHE_BITS_SHIFT 19
#define DECODE_CFG_CMD_DTA_MASK     0x10000
#define DECODE_CFG_CMD_DTA_SHIFT    16
#define DECODE_CFG_STRICT_MASK      0x400000
#define DECODE_CFG_STRICT_SHIFT     22
#define DECODE_CFG_PORT_ID_MASK     0xff
#define DECODE_CFG_PORT_ID_SHIFT    0
#define DECODE_CFG_CTRL_CACHE_SEL_SHIFT 4
#define DECODE_CFG_CTRL_CACHE_SEL_MASK  (0x3<<DECODE_CFG_CTRL_CACHE_SEL_SHIFT)

#define DECODE_CFG_ENABLE_OFF       (0 << DECODE_CFG_ENABLE_SHIFT)

#define DECODE_CFG_ENABLE_ADDR_ONLY (1 << DECODE_CFG_ENABLE_SHIFT)
#define DECODE_CFG_ENABLE_CDSM_0    (2 << DECODE_CFG_ENABLE_SHIFT)
#define DECODE_CFG_ENABLE_CDSM_1    (3 << DECODE_CFG_ENABLE_SHIFT)
#define DECODE_CFG_CACHE_BITS       (1 << DECODE_CFG_CACHE_BITS_SHIFT)

#define DECODE_CFG_CTRL_CACHE_SEL_DEF     (0x0<<DECODE_CFG_CTRL_CACHE_SEL_SHIFT)
#define DECODE_CFG_CTRL_CACHE_SEL_INPUT   (0x1<<DECODE_CFG_CTRL_CACHE_SEL_SHIFT)
#define DECODE_CFG_CTRL_CACHE_SEL_CFG_REG (0x2<<DECODE_CFG_CTRL_CACHE_SEL_SHIFT)


#if IS_BCMCHIP(6858)
int ubus_master_set_rte_addr(int master_port_id, int port, int val);
#endif

#if IS_BCMCHIP(6846) || IS_BCMCHIP(6856) || IS_BCMCHIP(6855) || IS_BCMCHIP(6888)
extern unsigned int g_board_size_power_of_2;
#endif

void bcm_ubus_config(void);
void ubus_cong_threshold_wr(int port_id, unsigned int val);
int ubus_master_remap_port(int master_port_id);
int log2_32 (unsigned long long value);
int ubus_master_set_token_credits(int master_port_id, int token, int credits);
void ubus_deregister_port(int ucbid);
void ubus_register_port(int ucbid);
int ubus_master_decode_cfg_set_ctrl(int master_port_id, unsigned int val);
#if IS_BCMCHIP(63158) || IS_BCMCHIP(6858)
void apply_ubus_credit_each_master(int master);
#endif
#if IS_BCMCHIP(6858)
void ubus_master_rte_cfg(void);
#endif
#if IS_BCMCHIP(63178)
void configure_ubus_sar_reg_decode(void);
#endif
void ubus_master_cpu_enable_axi_write_cache(int enable);
#if IS_BCMCHIP(6878)
void configure_ubus_biu_fpm_decode(void);
#endif
#endif

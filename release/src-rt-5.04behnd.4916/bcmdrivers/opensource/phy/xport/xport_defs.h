/*
   Copyright (c) 2017 Broadcom Corporation
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
/*
 * xport_defs.h
 *
 */

#ifndef _XPORT_DEFS_H_
#define _XPORT_DEFS_H_


//defines
#if defined(CONFIG_BCM94912) || defined(CONFIG_BCM96813)
#define XPORT_NUM_OF_PORTS_PER_XLMAC    4
#define XPORT_NUM_OF_XLMACS             2
#define XPORT_NUM_M                     3
#define XLMAC_NUM_S                     2
#elif defined(CONFIG_BCM96888) || defined(CONFIG_BCM968880) || defined(CONFIG_BCM96837)
#define XPORT_NUM_OF_PORTS_PER_XLMAC    4
#define XPORT_NUM_OF_XLMACS             3
#define XPORT_NUM_M                     3
#define XLMAC_NUM_S                     2
#elif defined(CONFIG_BCM963158)
#define XPORT_NUM_OF_PORTS_PER_XLMAC    2
#define XPORT_NUM_OF_XLMACS             1
#define XPORT_NUM_M                     1
#define XLMAC_NUM_S                     1
#define XPORT_PORT_ID_AE                0
#else
#error undefined chip
#endif
/* ONLY port#0 and port#1 are used */
#define XPORT_NUM_OF_PORTS ((XPORT_NUM_OF_XLMACS * XPORT_NUM_OF_PORTS_PER_XLMAC))

#define PID_XPORT_NUM(_id)   (_id & XPORT_NUM_M)
#define PID_XLMAC_NUM(_id)   (_id >> XLMAC_NUM_S)

#include <linux/types.h>
#include <linux/bug.h>
#include <linux/bcm_log.h>

#define xport_assert(cond)                                  \
    if ( !cond ) {                                          \
        printk("XPORT ASSERT %s : " #cond , __FUNCTION__ ); \
        BUG();                                              \
    }

//typedefs
typedef enum
{
    XPORT_ERR_OK = 0,
    XPORT_ERR_PARAM = -1,
    XPORT_ERR_STATE = -2,
    XPORT_ERR_IO = -3,
    XPORT_ERR_RANGE = -3,
    XPORT_ERR_FIFO_EMPTY = -4,
    XPORT_ERR_INVALID = -5,
}XPORT_RC;

typedef int XPORT_PORT_ID;

#define XPORT_PORT_VALID(_port) ( (_port) >= 0 && (_port) < XPORT_NUM_OF_PORTS)

typedef enum
{
    XPORT_RATE_UNKNOWN = 0,
    XPORT_RATE_10MB,
    XPORT_RATE_100MB,
    XPORT_RATE_1000MB,
    XPORT_RATE_2500MB,
    XPORT_RATE_10G,
    XPORT_RATE_5G,
}XPORT_PORT_RATE;

typedef enum
{ /* From data sheet */
    XLMAC_PORT_SPEED_10MB   = 0,
    XLMAC_PORT_SPEED_100MB  = 1,
    XLMAC_PORT_SPEED_1000MB = 2,
    XLMAC_PORT_SPEED_2500MB = 3,
    XLMAC_PORT_SPEED_10G    = 4,
    XLMAC_PORT_SPEED_5G     = 5,
}XLMAC_PORT_SPEED_ENCODING;

typedef enum
{
    XPORT_HALF_DUPLEX,
    XPORT_FULL_DUPLEX
}XPORT_PORT_DUPLEX;

typedef enum 
{ /* From spec */
    XLMAC_TX_CTRL_CRC_MODE_APPEND, 
    XLMAC_TX_CTRL_CRC_MODE_FORWARD,
    XLMAC_TX_CTRL_CRC_MODE_REPLACE,
    XLMAC_TX_CTRL_CRC_MODE_PER_PKT  /* XRDP indicates per packet about CRC MODE */
}XLMAC_TX_CTRL_CRC_MODE;

typedef struct
{
    uint8_t local_loopback;
    uint8_t remote_loopback;
    uint8_t pad_en;
    uint8_t pad_threashold;
    uint8_t average_igp;
    uint8_t tx_threshold;
    uint8_t tx_preamble_len;
    XPORT_PORT_RATE speed;
}xport_port_cfg_s;

typedef struct
{
    uint64_t tx_ctrl_sa;
    uint64_t rx_ctrl_sa;
    uint8_t  rx_pass_ctrl;
    uint8_t  rx_pass_pause;
    uint16_t pause_xoff_timer;
    uint8_t  rx_pause_en;
    uint8_t  tx_pause_en;
    uint8_t  pause_refresh_en;
    uint16_t pause_refresh_timer;
}xport_flow_ctrl_cfg_s;

typedef struct
{
    uint8_t autoneg_en;
    uint8_t port_up;
    XPORT_PORT_RATE rate;
    XPORT_PORT_DUPLEX duplex;
    uint8_t rx_pause_en;
    uint8_t tx_pause_en;
    uint8_t mac_rx_en;
    uint8_t mac_tx_en;
    uint8_t mac_lpbk;
}xport_port_status_s;

typedef struct
{
    uint8_t autoneg_en;
    uint8_t port_up;
    uint32_t rate_adv_map;
    XPORT_PORT_DUPLEX duplex;
    uint8_t rx_pause_en;
    uint8_t tx_pause_en;
}xport_port_phycfg_s;

typedef struct
{
    XPORT_PORT_ID       xport_port_id;
    XPORT_PORT_RATE     port_rate;
    XPORT_PORT_DUPLEX   port_duplex;
	int					xgmii_mode;
}xport_xlmac_port_info_s;

typedef struct
{
    xport_xlmac_port_info_s port_info[XPORT_NUM_OF_PORTS];
}xport_info_s;

#define __xportDebug(fmt, arg...)   BCM_LOG_DEBUG(BCM_LOG_ID_XPORT, fmt, ##arg)
#define __xportInfo(fmt, arg...)    BCM_LOG_INFO(BCM_LOG_ID_XPORT, fmt, ##arg)
#define __xportNotice(fmt, arg...)  BCM_LOG_NOTICE(BCM_LOG_ID_XPORT, fmt, ##arg)
#define __xportError(fmt, arg...)   BCM_LOG_ERROR(BCM_LOG_ID_XPORT, fmt, ##arg)

#endif /* _XPORT_DEFS_H_ */

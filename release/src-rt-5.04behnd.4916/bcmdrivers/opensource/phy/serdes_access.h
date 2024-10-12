/*
   Copyright (c) 2016 Broadcom Corporation
   All Rights Reserved

    <:label-BRCM:2016:DUAL/GPL:standard
    
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
 *  Created on: Apr 2021
 *      Author: yuval.raviv@broadcom.com
 */

/*
 * Merlin SerDes registers access for 6858, 6888, 6756, 63146, 4912, 6813, 68880, 6837
 */

#ifndef __SERDES_ACCESS_H__
#define __SERDES_ACCESS_H__

#if defined(CONFIG_BCM96858)
#include "serdes_access_6858.h"
#endif

#if defined(CONFIG_BCM96888)
#include "serdes_access_6888.h"
#endif

#if defined(CONFIG_BCM96756)
#include "serdes_access_6756.h"
#endif

#if defined(CONFIG_BCM96765)
#include "serdes_access_6765.h"
#endif

#if defined(CONFIG_BCM96766)
#include "serdes_access_6766.h"
#endif

#if defined(CONFIG_BCM96764)
#include "serdes_access_6764.h"
#endif

#if defined(CONFIG_BCM963146)
#include "serdes_access_63146.h"
#endif

#if defined(CONFIG_BCM94912)
#include "serdes_access_4912.h"
#endif

#if defined(CONFIG_BCM96813)
#include "serdes_access_6813.h"
#endif

#if defined(CONFIG_BCM968880)
#include "serdes_access_68880.h"
#endif

#if defined(CONFIG_BCM96837)
#include "serdes_access_6837.h"
#endif

#define MASK_BIT(a) (1<<(a))
#define MASK_BITS_TO(x) ((1<<(x))-1)
#define MASK_BITS_BETWEEN(l, h) (MASK_BITS_TO(((h)+1)) & ~(MASK_BITS_TO(l)))
#define MASK_ALL_BITS_16 (0xFFFF)

int serdes_access_read_mask(phy_dev_t *phy_dev, uint16_t dev, uint16_t reg, uint16_t mask, uint16_t shift, uint16_t *value);
int serdes_access_write_mask(phy_dev_t *phy_dev, uint16_t dev, uint16_t reg, uint16_t mask, uint16_t shift, uint16_t value);
int serdes_access_read(phy_dev_t *phy_dev, uint16_t dev, uint16_t reg, uint16_t *val);
int serdes_access_write(phy_dev_t *phy_dev, uint16_t dev, uint16_t reg, uint16_t val);
int serdes_access_wait_pll_lock(phy_dev_t *phy_dev);
int serdes_access_wait_link_status(phy_dev_t *phy_dev);
int serdes_access_config(phy_dev_t *phy_dev, int enable);
int serdes_access_get_status(phy_dev_t *phy_dev, uint8_t *link_status, uint8_t *module_detect);
int serdes_access_get_an_status(phy_dev_t *phy_dev, uint8_t *an_link_status);
int serdes_access_get_speed(phy_dev_t *phy_dev, phy_speed_t *speed);
int serdes_access_lane_tx_enable(phy_dev_t *phy_dev, int enable);

typedef enum {
    SERDES_MODE_UNKNOWN,
    SERDES_MODE_FORCE_10G_USXGMII_MP,
    SERDES_MODE_FORCE_5G_USXGMII_MP,
    SERDES_MODE_FORCE_2P5G_USXGMII_MP,
    SERDES_MODE_FORCE_1G_USXGMII_MP,
    SERDES_MODE_FORCE_100M_USXGMII_MP,
    SERDES_MODE_FORCE_10M_USXGMII_MP,
    SERDES_MODE_FORCE_10G_USXGMII,
    SERDES_MODE_FORCE_5G_USXGMII,
    SERDES_MODE_FORCE_2P5G_USXGMII,
    SERDES_MODE_FORCE_1G_USXGMII,
    SERDES_MODE_FORCE_100M_USXGMII,
    SERDES_MODE_FORCE_10M_USXGMII,
    SERDES_MODE_FORCE_10G_R,
    SERDES_MODE_FORCE_5G_R,
    SERDES_MODE_FORCE_2P5G_R,
    SERDES_MODE_FORCE_1G_R,
    SERDES_MODE_FORCE_10G,
    SERDES_MODE_FORCE_5G,
    SERDES_MODE_FORCE_2P5G,
    SERDES_MODE_FORCE_1G,
    SERDES_MODE_FORCE_100M,
    SERDES_MODE_AN_1G_SGMII,
    SERDES_MODE_AN_SGMII_SLAVE,
    SERDES_MODE_AN_1G_IEEE_CL37,
    SERDES_MODE_AN_1G_USER_CL37,
    SERDES_MODE_AN_10G_KR_IEEE_CL73,
    SERDES_MODE_AN_USXGMII_SLAVE,
    SERDES_MODE_AN_USXGMII_MASTER,
    SERDES_MODE_AN_USXGMII_MP_SLAVE,
    SERDES_MODE_AN_USXGMII_MP_MASTER,
    SERDES_MODE_SFI
} serdes_mode_t;

#endif

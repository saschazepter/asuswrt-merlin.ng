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

#ifndef BCM_OTP_MAP_H
#define BCM_OTP_MAP_H

#include "../bcm_otp_v2_map.h"

#define CHIP_63152_ID_HEX 0x63152

#define SOTP_OTP_REG_RD_LOCK_OFF               0x3c

/* row 8 */
#define OTP_CPU_CORE_CFG_ROW                    8
#define OTP_CPU_CORE_CFG_SHIFT                  28
#define OTP_CPU_CORE_CFG_MASK                   (0x3 << OTP_CPU_CORE_CFG_SHIFT)

/* row 9 */
#define OTP_CPU_CLOCK_FREQ_ROW                  9
#define OTP_CPU_CLOCK_FREQ_SHIFT                0
#define OTP_CPU_CLOCK_FREQ_MASK                 (0x7 << OTP_CPU_CLOCK_FREQ_SHIFT)

/* row 14 */
#define OTP_PCM_DISABLE_ROW                     14
#define OTP_PCM_DISABLE_SHIFT                   13
#define OTP_PCM_DISABLE_MASK                    (0x1 << OTP_PCM_DISABLE_SHIFT)

/* row 14 */
#define OTP_SATA_DISABLE_ROW                    14
#define OTP_SATA_DISABLE_SHIFT                  28
#define OTP_SATA_DISABLE_MASK                   (0x1 << OTP_SATA_DISABLE_SHIFT)

/* row 17 */
#define OTP_BRCM_BTRM_BOOT_ENABLE_ROW           17
#define OTP_BRCM_BTRM_BOOT_ENABLE_SHIFT         3
#define OTP_BRCM_BTRM_BOOT_ENABLE_MASK          (1 << OTP_BRCM_BTRM_BOOT_ENABLE_SHIFT)

/* row 18 */
#define OTP_CUST_BTRM_BOOT_ENABLE_ROW           18
#define OTP_CUST_BTRM_BOOT_ENABLE_SHIFT         15
#define OTP_CUST_BTRM_BOOT_ENABLE_MASK          (7 << OTP_CUST_BTRM_BOOT_ENABLE_SHIFT)

/* row 18 */
#define OTP_CUST_BTRM_UART_DISABLE_ROW          18
#define OTP_CUST_BTRM_UART_DISABLE_SHIFT        18
#define OTP_CUST_BTRM_UART_DISABLE_MASK         (1 << OTP_CUST_BTRM_UART_DISABLE_SHIFT)

/* row 23 */
#define OTP_CUST_MFG_MRKTID_ROW                 23
#define OTP_CUST_MFG_MRKTID_SHIFT               0
#define OTP_CUST_MFG_MRKTID_MASK                (0xffff << OTP_CUST_MFG_MRKTID_SHIFT)


/* row 26 */
#define OTP_BOOT_SW_ENET_BOOT_DIS_ROW           26
#define OTP_BOOT_SW_ENET_BOOT_DIS_SHIFT         0
#define OTP_BOOT_SW_ENET_BOOT_DIS_MASK          (7 << OTP_BOOT_SW_ENET_BOOT_DIS_SHIFT)
#define OTP_BOOT_SW_ENET_BOOT_FALLBACK_SHIFT    3
#define OTP_BOOT_SW_ENET_BOOT_FALLBACK_MASK     (7 << OTP_BOOT_SW_ENET_BOOT_FALLBACK_SHIFT)
#define OTP_BOOT_SW_ENET_RGMII_SHIFT            6
#define OTP_BOOT_SW_ENET_RGMII_MASK             (7 << OTP_BOOT_SW_ENET_RGMII_SHIFT)

#endif

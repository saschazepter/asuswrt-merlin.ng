/*---------------------------------------------------------------------------

<:copyright-BRCM:2013:DUAL/GPL:standard

   Copyright (c) 2013 Broadcom 
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
 ------------------------------------------------------------------------- */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/path.h>
#include <linux/namei.h>
#include <linux/fs.h>
#include <bcm_OS_Deps.h>
#include <linux/bcm_log.h>


#define PIN_MUX_SIZE              60
#define OTP_SIZE                  96
#define MISC_SIZE                 64
#define BSL_SIZE                  40
#define CRT_SIZE                  44
#define ADF_SIZE                  88
#define APD_ADC_SIZE              44
#define LD_LIA_SIZE               256
#define ESC_SIZE                  80
#define LDC_SIZE                  236
#define LRL_SIZE                  32
#define TMON_SIZE                 88

#define PMD_DEBUG_ADDR            0x8000
#define PMD_CONFIG_REC_ADDR       0x2000
#define PMD_STAT_REC_ADDR         0x3000

#define PMD_DEBUG_SIZE            0x148
#define PMD_CONFIG_REC_SIZE       553
#define PMD_STAT_REC_SIZE         212

#define NUM_OF_REG_MODULS         12
#define NUM_OF_STRUCTS             4

typedef struct
{
    char name[20];
    uint32_t addres;
    uint32_t len;
    pmd_dev_client client;
} pmd_dumpdata_struct;







/*
   Copyright (c) 2015 Broadcom
   All Rights Reserved

    <:label-BRCM:2015:DUAL/GPL:standard
    
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


#ifndef _XRDP_DRV_DRIVERS_COMMON_AG_H_
#define _XRDP_DRV_DRIVERS_COMMON_AG_H_


#ifdef USE_BDMF_SHELL
#include <bdmf_shell.h>
#endif

#include "ru.h"
#include "ru_chip.h"
#include "bdmf_data_types.h"


#define _1BITS_MAX_VAL_ (1U<<1)
#define _2BITS_MAX_VAL_ (1U<<2)
#define _3BITS_MAX_VAL_ (1U<<3)
#define _4BITS_MAX_VAL_ (1U<<4)
#define _5BITS_MAX_VAL_ (1U<<5)
#define _6BITS_MAX_VAL_ (1U<<6)
#define _7BITS_MAX_VAL_ (1U<<7)
#define _9BITS_MAX_VAL_ (1U<<9)
#define _10BITS_MAX_VAL_ (1U<<10)
#define _11BITS_MAX_VAL_ (1U<<11)
#define _12BITS_MAX_VAL_ (1U<<12)
#define _13BITS_MAX_VAL_ (1U<<13)
#define _14BITS_MAX_VAL_ (1U<<14)
#define _15BITS_MAX_VAL_ (1U<<15)
#define _17BITS_MAX_VAL_ (1U<<17)
#define _18BITS_MAX_VAL_ (1U<<18)
#define _19BITS_MAX_VAL_ (1U<<19)
#define _20BITS_MAX_VAL_ (1U<<20)
#define _21BITS_MAX_VAL_ (1U<<21)
#define _22BITS_MAX_VAL_ (1U<<22)
#define _23BITS_MAX_VAL_ (1U<<23)
#define _24BITS_MAX_VAL_ (1U<<24)
#define _25BITS_MAX_VAL_ (1U<<25)
#define _26BITS_MAX_VAL_ (1U<<26)
#define _27BITS_MAX_VAL_ (1U<<27)
#define _28BITS_MAX_VAL_ (1U<<28)
#define _29BITS_MAX_VAL_ (1U<<29)
#define _30BITS_MAX_VAL_ (1U<<30)
#define _31BITS_MAX_VAL_ (1U<<31)


typedef enum
{
    bdmf_test_method_low,
    bdmf_test_method_mid,
    bdmf_test_method_high,
}
bdmf_test_method;

uint32_t gtmv(bdmf_test_method method, uint8_t bits);


#endif

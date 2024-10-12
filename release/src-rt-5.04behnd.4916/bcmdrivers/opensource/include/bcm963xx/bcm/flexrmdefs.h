/*
* <:copyright-BRCM:2022:DUAL/GPL:standard
* 
*    Copyright (c) 2022 Broadcom 
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

/*****************************************************************************
 *
 * Copyright (c) 2022 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *****************************************************************************/
/**
 * @file flexrmdefs.h
 * @author Yoel Tulatov (yoel.tulatov@broadcom.com)
 * @brief Inter space common flexrm definitions 
 * @date 2022-12-06
 */

#ifndef ___FLEXRMDEFS_H___
#define ___FLEXRMDEFS_H___

#define FLEXRM_MODNAME "bcmflex"
#define FLEX_CHAR_DEV_NAME FLEXRM_MODNAME
#define FLEX_CHAR_DEV_PATH "/dev/" FLEX_CHAR_DEV_NAME

typedef enum {
	SPU_PWR_STATUS_OFF = 0x00,
	SPU_PWR_STATUS_ON
} SPU_PWR_STATUS;

#endif /*___FLEXRMDEFS_H___*/
/*
   Copyright (c) 2015 Broadcom Corporation
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

/**************************************************************************************
 **************************************************************************************
 *  File Name     :  merlin16_shasta_field_access.c                                        *
 *  Created On    :  29/04/2013                                                       *
 *  Created By    :  Kiran Divakar                                                    *
 *  Description   :  APIs to access Serdes IP Registers and Reg fields                *
 *  Revision      :   *
 *                                                                                    *
 **************************************************************************************
 **************************************************************************************/

/** @file merlin16_shasta_field_access.c
 * Registers and field access
 */

#include "merlin16_shasta_field_access.h"
#include "merlin16_shasta_functions.h"
#include "merlin16_shasta_internal.h"
#include "merlin16_shasta_internal_error.h"



/* Function prototype for local function merlin16_shasta_INTERNAL_print_err_msg_dependency().
 *   Print errors for calls to API Dedendency functions which return error codes other then ERR_CODE_NONE.
 *   Always returns known API Serdes Access violation error code ERR_CODE_SRDS_REG_ACCESS_FAIL.
 */
err_code_t merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code_t dep_err_code, const char *filename, const char *func_name,
                                                    const char *dep_func_name, uint16_t addr, uint16_t valu16);


/*  This function is DEPRECATED and UNUSED in the API!
 */
err_code_t _merlin16_shasta_pmd_rdt_field(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, uint16_t *valu16_p)
{
    err_code_t err_code;

    err_code = merlin16_shasta_pmd_rdt_reg(sa__, addr, valu16_p);
    if (ERR_CODE_NONE != err_code) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, *valu16_p);
    }
    *valu16_p = (uint16_t)(*valu16_p << shift_left);    /* Move the MSB to the left most      [shift_left  = (15-msb)]     */
    *valu16_p = (uint16_t)(*valu16_p >> shift_right);   /* Right shift entire field to bit 0  [shift_right = (15-msb+lsb)] */

    return (ERR_CODE_NONE);
}

/*  This function is DEPRECATED and UNUSED in the API!
 */
err_code_t _merlin16_shasta_pmd_rdt_field_signed(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, int16_t *vals16_p)
{
    err_code_t err_code;

    err_code = merlin16_shasta_pmd_rdt_reg(sa__, addr, (uint16_t *)vals16_p);
    if (ERR_CODE_NONE != err_code) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, (uint16_t) *vals16_p);
    }
    *vals16_p = (int16_t)(*vals16_p << shift_left);     /* Move the sign bit to the left most [shift_left  = (15-msb)]     */
    *vals16_p = (int16_t)(*vals16_p >> shift_right);    /* Right shift entire field to bit 0  [shift_right = (15-msb+lsb)] */

    return (ERR_CODE_NONE);
}

/*-------------------------------*/
/* Byte Write and Read Functions */
/*-------------------------------*/

err_code_t _merlin16_shasta_pmd_mwr_reg_byte(srds_access_t *sa__, uint16_t addr, uint16_t mask, uint8_t lsb, uint8_t valu8)
{
    return merlin16_shasta_acc_mwr_reg(sa__, addr, mask, lsb, (uint16_t) valu8);
}


/*  This function is DEPRECATED and UNUSED in the API!
 */
err_code_t _merlin16_shasta_pmd_rdt_field_byte(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, uint8_t *valu8_p)
{
    uint16_t valu16 = 0;
    err_code_t err_code;

    err_code = merlin16_shasta_pmd_rdt_reg(sa__, addr, &valu16);
    if (ERR_CODE_NONE != err_code) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, valu16);
    }
    valu16 = (uint16_t)(valu16 << shift_left);          /* Move the MSB to the left most      [shift_left  = (15-msb)]     */
    valu16 = (uint16_t)(valu16 >> shift_right);         /* Right shift entire field to bit 0  [shift_right = (15-msb+lsb)] */
    *valu8_p = (uint8_t) valu16;

    return (ERR_CODE_NONE);
}


/*  This function is DEPRECATED and UNUSED in the API!
 */
err_code_t _merlin16_shasta_pmd_rdt_field_signed_byte(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, int8_t *vals8_p)
{
    int16_t vals16 = 0;
    err_code_t err_code;

    err_code = merlin16_shasta_pmd_rdt_reg(sa__, addr, (uint16_t *) &vals16);
    if (ERR_CODE_NONE != err_code) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, (uint16_t)vals16);
    }
    vals16 = (int16_t)(vals16 << shift_left);           /* Move the sign bit to the left most [shift_left  = (15-msb)]     */
    vals16 = (int16_t)(vals16 >> shift_right);          /* Right shift entire field to bit 0  [shift_right = (15-msb+lsb)] */
    *vals8_p = (int8_t) vals16;

    return (ERR_CODE_NONE);
}

/* "Serdes ACCess" 'base' API dependency wrapper function. Retaining original function name. */
uint16_t _merlin16_shasta_pmd_rde_reg(srds_access_t *sa__, uint16_t addr, err_code_t *err_code_p)
{
    uint16_t valu16 = 0;

    if (ERR_CODE_NONE != (*err_code_p = merlin16_shasta_pmd_rdt_reg(sa__, addr, &valu16))) {
        *err_code_p = merlin16_shasta_INTERNAL_print_err_msg_dependency(*err_code_p, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, valu16);
    }
    return valu16;
}

uint16_t _merlin16_shasta_pmd_rde_field(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p)
{
    uint16_t valu16 = 0;

    *err_code_p = merlin16_shasta_pmd_rdt_reg(sa__, addr, &valu16);
    if (ERR_CODE_NONE != *err_code_p) {
        *err_code_p = merlin16_shasta_INTERNAL_print_err_msg_dependency(*err_code_p, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, valu16);
    }
    valu16 = (uint16_t)(valu16 << shift_left);          /* Move the sign bit to the left most [shift_left  = (15-msb)] */
    valu16 = (uint16_t)(valu16 >> shift_right);         /* Right shift entire field to bit 0  [shift_right = (15-msb+lsb)] */

    return valu16;
}


int16_t _merlin16_shasta_pmd_rde_field_signed(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p)
{
    int16_t vals16 = 0;

    *err_code_p = merlin16_shasta_pmd_rdt_reg(sa__, addr, (uint16_t *) &vals16);
    if (ERR_CODE_NONE != *err_code_p) {
        *err_code_p = merlin16_shasta_INTERNAL_print_err_msg_dependency(*err_code_p, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, (uint16_t)vals16);
    }
    vals16 = (int16_t)(vals16 << shift_left);               /* Move the sign bit to the left most    [shift_left  = (15-msb)] */
    vals16 = (int16_t)(vals16 >> shift_right);              /* Move to the right with sign extension [shift_right = (15-msb+lsb)] */

    return vals16;
}

uint8_t _merlin16_shasta_pmd_rde_field_byte(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p)
{
    return ((uint8_t) _merlin16_shasta_pmd_rde_field(sa__, addr, shift_left, shift_right, err_code_p));
}

int8_t _merlin16_shasta_pmd_rde_field_signed_byte(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p)
{
    return ((int8_t) _merlin16_shasta_pmd_rde_field_signed(sa__, addr, shift_left, shift_right, err_code_p));
}


/*------------------------------------------------------------------------------------------------*/
/* New "Serdes ACCess" (_acc_) 'base' API dependency wrapper functions.                           */
/* These trap unknown error codes from Dependency functions, and return a known API error code.   */
/* Implemented to correct recursive error handling where global API error values are not allowed. */
/*------------------------------------------------------------------------------------------------*/

err_code_t merlin16_shasta_acc_rdt_reg(srds_access_t *sa__, uint16_t addr, uint16_t *valu16_p)
{
    err_code_t dep_err_code;

    if (ERR_CODE_NONE != (dep_err_code = merlin16_shasta_pmd_rdt_reg(sa__, addr, valu16_p))) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(dep_err_code, __FILE__, API_FUNCTION_NAME, "_pmd_rdt_reg", addr, *valu16_p);
    }
    return (ERR_CODE_NONE);
}

err_code_t merlin16_shasta_acc_wr_reg(srds_access_t *sa__, uint16_t addr, uint16_t valu16)
{
    err_code_t dep_err_code;

    if (ERR_CODE_NONE != (dep_err_code = merlin16_shasta_pmd_wr_reg(sa__, addr, valu16))) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(dep_err_code, __FILE__, API_FUNCTION_NAME, "_pmd_wr_reg", addr, valu16);
    } else
        return (ERR_CODE_NONE);
}

err_code_t merlin16_shasta_acc_mwr_reg(srds_access_t *sa__, uint16_t addr, uint16_t mask, uint8_t lsb, uint16_t valu16)
{
    err_code_t dep_err_code;

    if (ERR_CODE_NONE != (dep_err_code = merlin16_shasta_pmd_mwr_reg(sa__, addr, mask, lsb, valu16))) {
        return merlin16_shasta_INTERNAL_print_err_msg_dependency(dep_err_code, __FILE__, API_FUNCTION_NAME, "_pmd_mwr_reg", addr, valu16);
    } else
        return (ERR_CODE_NONE);
}

/*
 * merlin16_shasta_INTERNAL_print_err_msg_dependency() -
 *   Print errors for calls to API Dedendency functions which return error codes other then ERR_CODE_NONE.
 *   Always returns known API Serdes Access violation error code ERR_CODE_SRDS_REG_ACCESS_FAIL.
 */
err_code_t merlin16_shasta_INTERNAL_print_err_msg_dependency(err_code_t dep_err_code, const char *filename, const char *func_name,
                                                    const char *dep_func_name, uint16_t addr, uint16_t valu16)
{
    USR_PRINTF(("ERROR:%s->%s(): API Dependency .. %s() returned error code %d {Address:0x%04X, Data:0x%04X}\n",
                filename, func_name, dep_func_name, dep_err_code, addr, valu16));
    return (ERR_CODE_SRDS_REG_ACCESS_FAIL);
}


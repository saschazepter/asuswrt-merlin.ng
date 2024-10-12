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


#include "XRDP_NATC_CFG_AG.h"

/******************************************************************************
 * Register: NAME: NATC_KEY_MASK, TYPE: Type_NAT_KEY_MASK
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: KEY_MASK *****/
const ru_field_rec NATC_KEY_MASK_KEY_MASK_FIELD =
{
    "KEY_MASK",
#if RU_INCLUDE_DESC
    "",
    "Specifies the key mask for each bit in the key.\nFor 16-byte key, there are corresponding 4 KEY_MASK registers.\nFor 32-byte key, there are corresponding 8 KEY_MASK registers.\nEach bit in each KEY_MASK register corresponds to one bit in the key.\n0 enables the compare and 1 disables the compare.\nbit 0 of KEY_MASK register[0] corresponds to key bit 0.\nbit 1 of KEY_MASK register[0] corresponds to key bit 1.\nbit 2 of KEY_MASK register[0] corresponds to key bit 2.\n......................\nbit 31 of KEY_MASK register [0] corresponds to key bit 31.\nbit 0 of KEY_MASK register[1] corresponds to key bit 32.\nbit 1 of KEY_MASK register[1] corresponds to key bit 33.\nbit 2 of KEY_MASK register[1] corresponds to key bit 34.\n......................\nbit 31 of KEY_MASK register [1] corresponds to key bit 63.\n......................\nbit 0 of KEY_MASK register[7] corresponds to key bit 224.\nbit 1 of KEY_MASK register[7] corresponds to key bit 225.\nbit 2 of KEY_MASK register[7] corresponds to key bit 226.\n......................\nbit 31 of KEY_MASK register [7] corresponds to key bit 255.\n",
#endif
    { NATC_KEY_MASK_KEY_MASK_FIELD_MASK },
    0,
    { NATC_KEY_MASK_KEY_MASK_FIELD_WIDTH },
    { NATC_KEY_MASK_KEY_MASK_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *NATC_KEY_MASK_FIELDS[] =
{
    &NATC_KEY_MASK_KEY_MASK_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: NATC_KEY_MASK *****/
const ru_reg_rec NATC_KEY_MASK_REG =
{
    "MASK",
#if RU_INCLUDE_DESC
    "NAT table 0 key mask register",
    "NAT Cache key Mask Register\n",
#endif
    { NATC_KEY_MASK_REG_OFFSET },
    NATC_KEY_MASK_REG_RAM_CNT,
    4,
    600,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    NATC_KEY_MASK_FIELDS,
#endif
};

unsigned long NATC_KEY_ADDRS[] =
{
    0x82950000,
    0x82950020,
    0x82950040,
    0x82950060,
    0x82950080,
    0x829500A0,
    0x829500C0,
    0x829500E0,
};

static const ru_reg_rec *NATC_KEY_REGS[] =
{
    &NATC_KEY_MASK_REG,
};

const ru_block_rec NATC_KEY_BLOCK =
{
    "NATC_KEY",
    NATC_KEY_ADDRS,
    8,
    1,
    NATC_KEY_REGS,
};
/******************************************************************************
 * Register: NAME: NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER, TYPE: Type_NATC_DDR_KEY_BASE_ADDRESS_LOWER
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: ZEROS *****/
const ru_field_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_ZEROS_FIELD =
{
    "ZEROS",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_ZEROS_FIELD_MASK },
    0,
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_ZEROS_FIELD_WIDTH },
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_ZEROS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: BAR *****/
const ru_field_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_BAR_FIELD =
{
    "BAR",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_BAR_FIELD_MASK },
    0,
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_BAR_FIELD_WIDTH },
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_BAR_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_FIELDS[] =
{
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_ZEROS_FIELD,
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_BAR_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER *****/
const ru_reg_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_REG =
{
    "DDR_KEY_BASE_ADDRESS_LOWER",
#if RU_INCLUDE_DESC
    "Lower 32-bit of NAT table 0  key base address NAT table 0 in DDR",
    "Lower 32-bit of the base address of DDR key table\nAddress must be 64-bit aligned (bit 2 through 0 are zero's)\nIn order maximum number of key fetches,\nfor 16-byte key, bit 3 should be 0 to align at 16 byte boundary\nfor 32-byte key, bit 3 and 4 should be 0 to align at 32 bytes boundary\n",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_REG_OFFSET },
    0,
    0,
    601,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER, TYPE: Type_NATC_DDR_KEY_BASE_ADDRESS_UPPER
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: BAR *****/
const ru_field_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_BAR_FIELD =
{
    "BAR",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_BAR_FIELD_MASK },
    0,
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_BAR_FIELD_WIDTH },
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_BAR_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: ZEROS *****/
const ru_field_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_ZEROS_FIELD =
{
    "ZEROS",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_ZEROS_FIELD_MASK },
    0,
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_ZEROS_FIELD_WIDTH },
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_ZEROS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_FIELDS[] =
{
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_BAR_FIELD,
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_ZEROS_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER *****/
const ru_reg_rec NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_REG =
{
    "DDR_KEY_BASE_ADDRESS_UPPER",
#if RU_INCLUDE_DESC
    "Upper 32-bit of NAT table 0 key base address NAT table 0 in DDR",
    "Upper 8-bit of the base address of DDR key table\nFor 32-bit system this field should be left as 0\n",
#endif
    { NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_REG_OFFSET },
    0,
    0,
    602,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER, TYPE: Type_NATC_DDR_RESULT_BASE_ADDRESS_LOWER
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: ZEROS *****/
const ru_field_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_ZEROS_FIELD =
{
    "ZEROS",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_ZEROS_FIELD_MASK },
    0,
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_ZEROS_FIELD_WIDTH },
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_ZEROS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: BAR *****/
const ru_field_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_FIELD =
{
    "BAR",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_FIELD_MASK },
    0,
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_FIELD_WIDTH },
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_FIELDS[] =
{
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_ZEROS_FIELD,
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER *****/
const ru_reg_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_REG =
{
    "DDR_RESULT_BASE_ADDRESS_LOWER",
#if RU_INCLUDE_DESC
    "Lower 32-bit of NAT table 0 result base address NAT table 0 in DDR",
    "Lower 32-bit of the base address of DDR context table\nAddress must be 64-bit aligned (bit 2 through 0 are zero's)\n",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_REG_OFFSET },
    0,
    0,
    603,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER, TYPE: Type_NATC_DDR_RESULT_BASE_ADDRESS_UPPER
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: BAR *****/
const ru_field_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_FIELD =
{
    "BAR",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_FIELD_MASK },
    0,
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_FIELD_WIDTH },
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: ZEROS *****/
const ru_field_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_ZEROS_FIELD =
{
    "ZEROS",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_ZEROS_FIELD_MASK },
    0,
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_ZEROS_FIELD_WIDTH },
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_ZEROS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_FIELDS[] =
{
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_FIELD,
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_ZEROS_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER *****/
const ru_reg_rec NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_REG =
{
    "DDR_RESULT_BASE_ADDRESS_UPPER",
#if RU_INCLUDE_DESC
    "Upper 32-bit of NAT table 0 result base address NAT table 0 in DDR",
    "Upper 8-bit of the base address of DDR context table\nFor 32-bit system this field should be left as 0\n",
#endif
    { NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_REG_OFFSET },
    0,
    0,
    604,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_FIELDS,
#endif
};

unsigned long NATC_TBL_ADDRS[] =
{
    0x82950000,
    0x82950010,
    0x82950020,
    0x82950030,
    0x82950040,
    0x82950050,
    0x82950060,
    0x82950070,
};

static const ru_reg_rec *NATC_TBL_REGS[] =
{
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_LOWER_REG,
    &NATC_TBL_DDR_KEY_BASE_ADDRESS_UPPER_REG,
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_LOWER_REG,
    &NATC_TBL_DDR_RESULT_BASE_ADDRESS_UPPER_REG,
};

const ru_block_rec NATC_TBL_BLOCK =
{
    "NATC_TBL",
    NATC_TBL_ADDRS,
    8,
    4,
    NATC_TBL_REGS,
};

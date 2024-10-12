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


#include "XRDP_FPM_FPMINI_AG.h"

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_LVL_2_MEM_L2, TYPE: Type_FPMINI_BLOCK_FPMINI_LVL_2_MEM_L2
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: DATA *****/
const ru_field_rec FPM_FPMINI_FPMINI_LVL_2_MEM_L2_DATA_FIELD =
{
    "DATA",
#if RU_INCLUDE_DESC
    "",
    "data\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_2_MEM_L2_DATA_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_LVL_2_MEM_L2_DATA_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_LVL_2_MEM_L2_DATA_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_LVL_2_MEM_L2_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_LVL_2_MEM_L2_DATA_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_LVL_2_MEM_L2 *****/
const ru_reg_rec FPM_FPMINI_FPMINI_LVL_2_MEM_L2_REG =
{
    "FPMINI_LVL_2_MEM_L2",
#if RU_INCLUDE_DESC
    "MEM_ENTRY 0..511 Register",
    "mem_entry\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_2_MEM_L2_REG_OFFSET },
    FPM_FPMINI_FPMINI_LVL_2_MEM_L2_REG_RAM_CNT,
    4,
    529,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_LVL_2_MEM_L2_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_LVL_1_REGS_L1, TYPE: Type_FPMINI_BLOCK_FPMINI_LVL_1_REGS_L1
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: L1 *****/
const ru_field_rec FPM_FPMINI_FPMINI_LVL_1_REGS_L1_L1_FIELD =
{
    "L1",
#if RU_INCLUDE_DESC
    "",
    "data\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_1_REGS_L1_L1_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_LVL_1_REGS_L1_L1_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_LVL_1_REGS_L1_L1_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_LVL_1_REGS_L1_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_LVL_1_REGS_L1_L1_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_LVL_1_REGS_L1 *****/
const ru_reg_rec FPM_FPMINI_FPMINI_LVL_1_REGS_L1_REG =
{
    "FPMINI_LVL_1_REGS_L1",
#if RU_INCLUDE_DESC
    "MEM_ENTRY 0..15 Register",
    "mem_entry\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_1_REGS_L1_REG_OFFSET },
    FPM_FPMINI_FPMINI_LVL_1_REGS_L1_REG_RAM_CNT,
    4,
    530,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_LVL_1_REGS_L1_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_LVL_0_REG_L0, TYPE: Type_FPMINI_BLOCK_FPMINI_LVL_0_REG_L0
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: DATA *****/
const ru_field_rec FPM_FPMINI_FPMINI_LVL_0_REG_L0_DATA_FIELD =
{
    "DATA",
#if RU_INCLUDE_DESC
    "",
    "data\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_0_REG_L0_DATA_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_LVL_0_REG_L0_DATA_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_LVL_0_REG_L0_DATA_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_LVL_0_REG_L0_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_LVL_0_REG_L0_DATA_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_LVL_0_REG_L0 *****/
const ru_reg_rec FPM_FPMINI_FPMINI_LVL_0_REG_L0_REG =
{
    "FPMINI_LVL_0_REG_L0",
#if RU_INCLUDE_DESC
    "MEM_ENTRY Register",
    "mem_entry\n",
#endif
    { FPM_FPMINI_FPMINI_LVL_0_REG_L0_REG_OFFSET },
    0,
    0,
    531,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_LVL_0_REG_L0_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_CFG0_L2_INIT, TYPE: Type_FPMINI_BLOCK_FPMINI_CFG0_L2_INIT
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: INIT *****/
const ru_field_rec FPM_FPMINI_FPMINI_CFG0_L2_INIT_INIT_FIELD =
{
    "INIT",
#if RU_INCLUDE_DESC
    "",
    "init\n",
#endif
    { FPM_FPMINI_FPMINI_CFG0_L2_INIT_INIT_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_CFG0_L2_INIT_INIT_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_CFG0_L2_INIT_INIT_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_CFG0_L2_INIT_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_CFG0_L2_INIT_INIT_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_CFG0_L2_INIT *****/
const ru_reg_rec FPM_FPMINI_FPMINI_CFG0_L2_INIT_REG =
{
    "FPMINI_CFG0_L2_INIT",
#if RU_INCLUDE_DESC
    "L2_MEM_INIT Register",
    "initialization for l2 memory.\nwr 1 to start init, poll for 0 for done.\n\nL0/L1 have reset value, that will propagate to L2 when enabling l2_mem_init bit\nChange in configuration value of L0 will automatically change also value of L1, and then this will propagate to L2 when enabling l2_mem_init bit\n\n",
#endif
    { FPM_FPMINI_FPMINI_CFG0_L2_INIT_REG_OFFSET },
    0,
    0,
    532,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_CFG0_L2_INIT_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK, TYPE: Type_FPMINI_BLOCK_FPMINI_CFG0_ALLC_FAST_ACK
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: EN *****/
const ru_field_rec FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_EN_FIELD =
{
    "EN",
#if RU_INCLUDE_DESC
    "",
    "0: dis\n1: en\n",
#endif
    { FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_EN_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_EN_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_EN_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_EN_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK *****/
const ru_reg_rec FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_REG =
{
    "FPMINI_CFG0_ALLC_FAST_ACK",
#if RU_INCLUDE_DESC
    "ALLC_FAST_ACK Register",
    "alloc fast ack.\n0: nack when L0 indicates no tokens\n1: nack when no tokens in prealloc fifo\n",
#endif
    { FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_REG_OFFSET },
    0,
    0,
    533,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS, TYPE: Type_FPMINI_BLOCK_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VAL *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_VAL_FIELD =
{
    "VAL",
#if RU_INCLUDE_DESC
    "",
    "value\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_VAL_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_VAL_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_VAL_FIELD_SHIFT },
    16384,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_VAL_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS *****/
const ru_reg_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_REG =
{
    "FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS",
#if RU_INCLUDE_DESC
    "NUM_AVAIL_TOKENS Register",
    "number of available tokens.\ndecrement when allocating by client (not pre-fetch fifo),\nincrement when freed by client.\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_REG_OFFSET },
    0,
    0,
    534,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM, TYPE: Type_FPMINI_BLOCK_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VAL *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_VAL_FIELD =
{
    "VAL",
#if RU_INCLUDE_DESC
    "",
    "value\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_VAL_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_VAL_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_VAL_FIELD_SHIFT },
    16384,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_VAL_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM *****/
const ru_reg_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_REG =
{
    "FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM",
#if RU_INCLUDE_DESC
    "NUM_AVAIL_TOKENS_LOW_WM Register",
    "number of available tokens low watermark.\nstart from max value, and decremented when getting lower value of available tokens.\nThis register allows software to read the lowest value the NUM_AVAIL_TOKENS count reached since the last time it was cleared. Any write to this register will reset the value back to the maximum number of tokens.\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_REG_OFFSET },
    0,
    0,
    535,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR, TYPE: Type_FPMINI_BLOCK_FPMINI_PRFM_CNTRS_FREE_ERR
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VAL *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_VAL_FIELD =
{
    "VAL",
#if RU_INCLUDE_DESC
    "",
    "value\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_VAL_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_VAL_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_VAL_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_VAL_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR *****/
const ru_reg_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_REG =
{
    "FPMINI_PRFM_CNTRS_FREE_ERR",
#if RU_INCLUDE_DESC
    "FREE_ERR_CNTR Register",
    "free cmd for unallocated token\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_REG_OFFSET },
    0,
    0,
    536,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG, TYPE: Type_FPMINI_BLOCK_FPMINI_PRFM_CNTRS_GEN_CFG
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: RD_CLR *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_RD_CLR_FIELD =
{
    "RD_CLR",
#if RU_INCLUDE_DESC
    "",
    "read clear bit\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_RD_CLR_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_RD_CLR_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_RD_CLR_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: WRAP *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_WRAP_FIELD =
{
    "WRAP",
#if RU_INCLUDE_DESC
    "",
    "read clear bit\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_WRAP_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_WRAP_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_WRAP_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: MSK_FREE_ERR *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_FREE_ERR_FIELD =
{
    "MSK_FREE_ERR",
#if RU_INCLUDE_DESC
    "",
    "mask_fpmini_free error\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_FREE_ERR_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_FREE_ERR_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_FREE_ERR_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: MSK_MC_INC_ERR *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_INC_ERR_FIELD =
{
    "MSK_MC_INC_ERR",
#if RU_INCLUDE_DESC
    "",
    "mask_fpmcast_mc_inc error\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_INC_ERR_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_INC_ERR_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_INC_ERR_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
/***** Field: MSK_MC_DEC_ERR *****/
const ru_field_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_DEC_ERR_FIELD =
{
    "MSK_MC_DEC_ERR",
#if RU_INCLUDE_DESC
    "",
    "mask_fpmcast_mc_dec error\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_DEC_ERR_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_DEC_ERR_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_DEC_ERR_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_RD_CLR_FIELD,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_WRAP_FIELD,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_FREE_ERR_FIELD,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_INC_ERR_FIELD,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_MSK_MC_DEC_ERR_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG *****/
const ru_reg_rec FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_REG =
{
    "FPMINI_PRFM_CNTRS_GEN_CFG",
#if RU_INCLUDE_DESC
    "GENERAL_CONFIG Register",
    "bits rd_clr and wrap for the pm counters(above), masks for error counters.\nRelevant also for fpmcast performance counters.\n\n",
#endif
    { FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_REG_OFFSET },
    0,
    0,
    537,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    5,
    FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_DEBUG_DBGSEL, TYPE: Type_FPMINI_BLOCK_FPMINI_DEBUG_DBGSEL
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VS *****/
const ru_field_rec FPM_FPMINI_FPMINI_DEBUG_DBGSEL_VS_FIELD =
{
    "VS",
#if RU_INCLUDE_DESC
    "",
    "selects th debug vector\n",
#endif
    { FPM_FPMINI_FPMINI_DEBUG_DBGSEL_VS_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_DEBUG_DBGSEL_VS_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_DEBUG_DBGSEL_VS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_DEBUG_DBGSEL_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_DEBUG_DBGSEL_VS_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_DEBUG_DBGSEL *****/
const ru_reg_rec FPM_FPMINI_FPMINI_DEBUG_DBGSEL_REG =
{
    "FPMINI_DEBUG_DBGSEL",
#if RU_INCLUDE_DESC
    "DBG_MUX_SEL Register",
    "selects the debug vector.\nFirst 32 addresses dedicated to cmd fifo, next 32 addresses dedicated to alloc fifo, and from 0x40 debug of internal signals.\n",
#endif
    { FPM_FPMINI_FPMINI_DEBUG_DBGSEL_REG_OFFSET },
    0,
    0,
    538,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_DEBUG_DBGSEL_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMINI_DEBUG_DBGBUS, TYPE: Type_FPMINI_BLOCK_FPMINI_DEBUG_DBGBUS
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VB *****/
const ru_field_rec FPM_FPMINI_FPMINI_DEBUG_DBGBUS_VB_FIELD =
{
    "VB",
#if RU_INCLUDE_DESC
    "",
    "debug vector\n",
#endif
    { FPM_FPMINI_FPMINI_DEBUG_DBGBUS_VB_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMINI_DEBUG_DBGBUS_VB_FIELD_WIDTH },
    { FPM_FPMINI_FPMINI_DEBUG_DBGBUS_VB_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMINI_DEBUG_DBGBUS_FIELDS[] =
{
    &FPM_FPMINI_FPMINI_DEBUG_DBGBUS_VB_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMINI_DEBUG_DBGBUS *****/
const ru_reg_rec FPM_FPMINI_FPMINI_DEBUG_DBGBUS_REG =
{
    "FPMINI_DEBUG_DBGBUS",
#if RU_INCLUDE_DESC
    "DBG_BUS Register",
    "the debug bus\n",
#endif
    { FPM_FPMINI_FPMINI_DEBUG_DBGBUS_REG_OFFSET },
    0,
    0,
    539,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMINI_DEBUG_DBGBUS_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_MC_MEM_MC, TYPE: Type_FPMINI_BLOCK_FPMCAST_MC_MEM_MC
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: DATA *****/
const ru_field_rec FPM_FPMINI_FPMCAST_MC_MEM_MC_DATA_FIELD =
{
    "DATA",
#if RU_INCLUDE_DESC
    "",
    "data\n",
#endif
    { FPM_FPMINI_FPMCAST_MC_MEM_MC_DATA_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_MC_MEM_MC_DATA_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_MC_MEM_MC_DATA_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_MC_MEM_MC_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_MC_MEM_MC_DATA_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_MC_MEM_MC *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_MC_MEM_MC_REG =
{
    "FPMCAST_MC_MEM_MC",
#if RU_INCLUDE_DESC
    "MEM_ENTRY 0..2047 Register",
    "mem_entry\n",
#endif
    { FPM_FPMINI_FPMCAST_MC_MEM_MC_REG_OFFSET },
    FPM_FPMINI_FPMCAST_MC_MEM_MC_REG_RAM_CNT,
    4,
    540,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_MC_MEM_MC_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_CFG0_MC_INIT, TYPE: Type_FPMINI_BLOCK_FPMCAST_CFG0_MC_INIT
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: INIT *****/
const ru_field_rec FPM_FPMINI_FPMCAST_CFG0_MC_INIT_INIT_FIELD =
{
    "INIT",
#if RU_INCLUDE_DESC
    "",
    "init\n",
#endif
    { FPM_FPMINI_FPMCAST_CFG0_MC_INIT_INIT_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_CFG0_MC_INIT_INIT_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_CFG0_MC_INIT_INIT_FIELD_SHIFT },
    1,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_CFG0_MC_INIT_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_CFG0_MC_INIT_INIT_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_CFG0_MC_INIT *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_CFG0_MC_INIT_REG =
{
    "FPMCAST_CFG0_MC_INIT",
#if RU_INCLUDE_DESC
    "MC_MEM_INIT Register",
    "initialization for mc memory.\nwr 1 to start init, poll for 0 for done.\n",
#endif
    { FPM_FPMINI_FPMCAST_CFG0_MC_INIT_REG_OFFSET },
    0,
    0,
    541,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_CFG0_MC_INIT_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC, TYPE: Type_FPMINI_BLOCK_FPMCAST_CFG0_FREE_BP_MC
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: EN *****/
const ru_field_rec FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_EN_FIELD =
{
    "EN",
#if RU_INCLUDE_DESC
    "",
    "0: dis\n1: en\n",
#endif
    { FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_EN_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_EN_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_EN_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_EN_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_REG =
{
    "FPMCAST_CFG0_FREE_BP_MC",
#if RU_INCLUDE_DESC
    "FREE_BYPASS_MC Register",
    "free commands bypass mc logic.\n0: free first accesses mc mem, and if needed frees the token\n1: dqm debug mode: free directly accesses free token logic. no access to mc mem.\n",
#endif
    { FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_REG_OFFSET },
    0,
    0,
    542,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR, TYPE: Type_FPMINI_BLOCK_FPMCAST_PRFM_CNTRS_MC_INC_ERR
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VAL *****/
const ru_field_rec FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_VAL_FIELD =
{
    "VAL",
#if RU_INCLUDE_DESC
    "",
    "value\n",
#endif
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_VAL_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_VAL_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_VAL_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_VAL_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_REG =
{
    "FPMCAST_PRFM_CNTRS_MC_INC_ERR",
#if RU_INCLUDE_DESC
    "MC_INC_ERR_CNTR Register",
    "mc inc cmd new value is above 15.\nnew value will not be written.\n",
#endif
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_REG_OFFSET },
    0,
    0,
    543,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR, TYPE: Type_FPMINI_BLOCK_FPMCAST_PRFM_CNTRS_MC_DEC_ERR
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VAL *****/
const ru_field_rec FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_VAL_FIELD =
{
    "VAL",
#if RU_INCLUDE_DESC
    "",
    "value\n",
#endif
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_VAL_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_VAL_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_VAL_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_VAL_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_REG =
{
    "FPMCAST_PRFM_CNTRS_MC_DEC_ERR",
#if RU_INCLUDE_DESC
    "MC_DEC_ERR_CNTR Register",
    "mc dec cmd new value is below 0.\nnew value will not be written.\n",
#endif
    { FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_REG_OFFSET },
    0,
    0,
    544,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_DEBUG_DBGSEL, TYPE: Type_FPMINI_BLOCK_FPMCAST_DEBUG_DBGSEL
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VS *****/
const ru_field_rec FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_VS_FIELD =
{
    "VS",
#if RU_INCLUDE_DESC
    "",
    "selects th debug vector\n",
#endif
    { FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_VS_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_VS_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_VS_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_VS_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_DEBUG_DBGSEL *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_REG =
{
    "FPMCAST_DEBUG_DBGSEL",
#if RU_INCLUDE_DESC
    "DBG_MUX_SEL Register",
    "selects the debug vector.\nFirst 32 addresses dedicated to cmd fifo, and from 0x40 debug of internal signals.\n",
#endif
    { FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_REG_OFFSET },
    0,
    0,
    545,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_FIELDS,
#endif
};

/******************************************************************************
 * Register: NAME: FPM_FPMINI_FPMCAST_DEBUG_DBGBUS, TYPE: Type_FPMINI_BLOCK_FPMCAST_DEBUG_DBGBUS
 ******************************************************************************/

#if RU_INCLUDE_FIELD_DB
/***** Field: VB *****/
const ru_field_rec FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_VB_FIELD =
{
    "VB",
#if RU_INCLUDE_DESC
    "",
    "debug vector\n",
#endif
    { FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_VB_FIELD_MASK },
    0,
    { FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_VB_FIELD_WIDTH },
    { FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_VB_FIELD_SHIFT },
    0,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
};
#endif

#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_FIELDS[] =
{
    &FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_VB_FIELD,
};
#endif /* RU_INCLUDE_FIELD_DB */

/***** Register struct: FPM_FPMINI_FPMCAST_DEBUG_DBGBUS *****/
const ru_reg_rec FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_REG =
{
    "FPMCAST_DEBUG_DBGBUS",
#if RU_INCLUDE_DESC
    "DBG_BUS Register",
    "the debug bus\n",
#endif
    { FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_REG_OFFSET },
    0,
    0,
    546,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_FIELDS,
#endif
};

unsigned long FPM_FPMINI_ADDRS[] =
{
    0x82B00000,
};

static const ru_reg_rec *FPM_FPMINI_REGS[] =
{
    &FPM_FPMINI_FPMINI_LVL_2_MEM_L2_REG,
    &FPM_FPMINI_FPMINI_LVL_1_REGS_L1_REG,
    &FPM_FPMINI_FPMINI_LVL_0_REG_L0_REG,
    &FPM_FPMINI_FPMINI_CFG0_L2_INIT_REG,
    &FPM_FPMINI_FPMINI_CFG0_ALLC_FAST_ACK_REG,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_REG,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_NUM_AVAIL_TKNS_LOW_WM_REG,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_FREE_ERR_REG,
    &FPM_FPMINI_FPMINI_PRFM_CNTRS_GEN_CFG_REG,
    &FPM_FPMINI_FPMINI_DEBUG_DBGSEL_REG,
    &FPM_FPMINI_FPMINI_DEBUG_DBGBUS_REG,
    &FPM_FPMINI_FPMCAST_MC_MEM_MC_REG,
    &FPM_FPMINI_FPMCAST_CFG0_MC_INIT_REG,
    &FPM_FPMINI_FPMCAST_CFG0_FREE_BP_MC_REG,
    &FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_INC_ERR_REG,
    &FPM_FPMINI_FPMCAST_PRFM_CNTRS_MC_DEC_ERR_REG,
    &FPM_FPMINI_FPMCAST_DEBUG_DBGSEL_REG,
    &FPM_FPMINI_FPMCAST_DEBUG_DBGBUS_REG,
};

const ru_block_rec FPM_FPMINI_BLOCK =
{
    "FPM_FPMINI",
    FPM_FPMINI_ADDRS,
    1,
    18,
    FPM_FPMINI_REGS,
};

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


#ifndef _XRDP_DRV_NATC_DDR_CFG_AG_H_
#define _XRDP_DRV_NATC_DDR_CFG_AG_H_

#include <ru.h>
#include <bdmf_interface.h>
#include <rdp_common.h>

#ifdef USE_BDMF_SHELL
#include <bdmf_shell.h>
#endif

typedef struct
{
    uint8_t ddr_size_tbl0;
    uint8_t ddr_size_tbl1;
    uint8_t ddr_size_tbl2;
    uint8_t ddr_size_tbl3;
    uint8_t ddr_size_tbl4;
    uint8_t ddr_size_tbl5;
    uint8_t ddr_size_tbl6;
    uint8_t ddr_size_tbl7;
} natc_ddr_cfg_natc_ddr_size;

typedef struct
{
    uint8_t total_len_tbl0;
    uint8_t total_len_tbl1;
    uint8_t total_len_tbl2;
    uint8_t total_len_tbl3;
    uint8_t total_len_tbl4;
    uint8_t total_len_tbl5;
    uint8_t total_len_tbl6;
    uint8_t total_len_tbl7;
} natc_ddr_cfg_total_len;

typedef struct
{
    uint16_t nat_state;
    bdmf_boolean wb_state;
    bdmf_boolean runner_cmd_state;
    uint8_t ddr_rep_state;
    uint8_t ddr_req_state;
    uint8_t apb_state;
    uint8_t debug_sel;
} natc_ddr_cfg_sm_status;

typedef struct
{
    uint8_t ddr_hash_mode_tbl0;
    uint8_t ddr_hash_mode_tbl1;
    uint8_t ddr_hash_mode_tbl2;
    uint8_t ddr_hash_mode_tbl3;
    uint8_t ddr_hash_mode_tbl4;
    uint8_t ddr_hash_mode_tbl5;
    uint8_t ddr_hash_mode_tbl6;
    uint8_t ddr_hash_mode_tbl7;
} natc_ddr_cfg_ddr_hash_mode;


/**********************************************************************************************************************
 * ddr_size_tbl0: 
 *     Number of entries in DDR table 0
 *     Value of 6 or above is invalid
 *     To compute the actual size of the table, add DDR_BINS_PER_BUCKET field
 *     to the table size selection;
 *     For instance, if DDR_BINS_PER_BUCKET is 3 (4 bins per bucket)
 *     and DDR_size is 3 (64k entries), the actual size of the table in DDR is
 *     (64*1024+3) multiply by total length (TOTAL_LEN) of key and context in bytes
 *     Extra 3 entries are used to store collided entries of the last entry
 * ddr_size_tbl1: 
 *     Number of entries in DDR table 1
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 *     See description of DDR_SIZE_TBL0
 * ddr_size_tbl2: 
 *     Number of entries in DDR table 2
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 * ddr_size_tbl3: 
 *     Number of entries in DDR table 3
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 * ddr_size_tbl4: 
 *     Number of entries in DDR table 4
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 * ddr_size_tbl5: 
 *     Number of entries in DDR table 5
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 * ddr_size_tbl6: 
 *     Number of entries in DDR table 6
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 * ddr_size_tbl7: 
 *     Number of entries in DDR table 7
 *     See description of DDR_SIZE_TBL0
 *     0=8k; 1=16k; 2=32k; 3=64k; 4=128k; 5=256k; 6=invalid; 7=invalid
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_natc_ddr_size_set(const natc_ddr_cfg_natc_ddr_size *natc_ddr_size);
bdmf_error_t ag_drv_natc_ddr_cfg_natc_ddr_size_get(natc_ddr_cfg_natc_ddr_size *natc_ddr_size);

/**********************************************************************************************************************
 * ddr_bins_per_bucket_tbl0: 
 *     Number of entries per bucket in DDR table 0
 *     This is limited by bus max burst size.  For instance, if
 *     UBUS supports max burst size of 128 bytes, key length is 16
 *     bytes, maximum DDR_BINS_PER_BUCKET that can be programmed
 *     is 128 bytes / 16-bytes (bytes per bin) = 8 entries
 *     0h: 1 entry
 *     1h: 2 entries
 *     2h: 3 entries
 *     3h: 4 entries
 *     4h: 5 entries
 *     5h: 6 entries
 *     6h: 7 entries
 *     7h: 8 entries
 *     .............
 * ddr_bins_per_bucket_tbl1: 
 *     Number of entries per bucket in DDR table 1
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 * ddr_bins_per_bucket_tbl2: 
 *     Number of entries per bucket in DDR table 2
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 * ddr_bins_per_bucket_tbl3: 
 *     Number of entries per bucket in DDR table 3
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_bins_per_bucket_0_set(uint8_t ddr_bins_per_bucket_tbl0, uint8_t ddr_bins_per_bucket_tbl1, uint8_t ddr_bins_per_bucket_tbl2, uint8_t ddr_bins_per_bucket_tbl3);
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_bins_per_bucket_0_get(uint8_t *ddr_bins_per_bucket_tbl0, uint8_t *ddr_bins_per_bucket_tbl1, uint8_t *ddr_bins_per_bucket_tbl2, uint8_t *ddr_bins_per_bucket_tbl3);

/**********************************************************************************************************************
 * ddr_bins_per_bucket_tbl4: 
 *     Number of entries per bucket in DDR table 4
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 * ddr_bins_per_bucket_tbl5: 
 *     Number of entries per bucket in DDR table 5
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 * ddr_bins_per_bucket_tbl6: 
 *     Number of entries per bucket in DDR table 6
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 * ddr_bins_per_bucket_tbl7: 
 *     Number of entries per bucket in DDR table 7
 *     See description of DDR_BINS_PER_BUCKET_TBL0
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_bins_per_bucket_1_set(uint8_t ddr_bins_per_bucket_tbl4, uint8_t ddr_bins_per_bucket_tbl5, uint8_t ddr_bins_per_bucket_tbl6, uint8_t ddr_bins_per_bucket_tbl7);
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_bins_per_bucket_1_get(uint8_t *ddr_bins_per_bucket_tbl4, uint8_t *ddr_bins_per_bucket_tbl5, uint8_t *ddr_bins_per_bucket_tbl6, uint8_t *ddr_bins_per_bucket_tbl7);

/**********************************************************************************************************************
 * total_len_tbl0: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 0
 *     The context length (including 8-byte counters) is calculated by TOTAL_LEN minus KEY_LEN
 *     The maximum value should not exceed hardware capability.
 *     For instance, most projects have max of 80-bytes and BCM63158 has max value of 144-byte.
 *     0h: 48-byte
 *     1h: 64-byte
 *     2h: 80-byte
 *     3h: 96-byte
 *     4h: 112-byte
 *     5h: 128-byte
 *     6h: 144-byte
 *     7h: 160-byte
 * total_len_tbl1: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 1
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl2: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 2
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl3: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 3
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl4: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 4
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl5: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 5
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl6: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 6
 *     See description of TOTAL_LEN_TBL0.
 * total_len_tbl7: 
 *     Length of the lookup key plus context (including 8-byte counters) in DDR table 7
 *     See description of TOTAL_LEN_TBL0.
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_total_len_set(const natc_ddr_cfg_total_len *total_len);
bdmf_error_t ag_drv_natc_ddr_cfg_total_len_get(natc_ddr_cfg_total_len *total_len);

/**********************************************************************************************************************
 * nat_state: 
 *     Nat state machine.
 *     15'b000000000000000: NAT_ST_IDLE.
 *     15'b000000000000001: NAT_ST_IDLE_WRITE_SMEM.
 *     15'b000000000000010: NAT_ST_IDLE_DDR_PENDING.
 *     15'b000000000000100: NAT_ST_HASH.
 *     15'b000000000001000: NAT_ST_NAT_MEM_READ_REQ.
 *     15'b000000000010000: NAT_ST_NAT_MEM_WRITE_REQ.
 *     15'b000000000100000: NAT_ST_READ_SMEM.
 *     15'b000000001000000: NAT_ST_UPDATE_DDR.
 *     15'b000000010000000: NAT_ST_IDLE_BLOCKING_PENDING.
 *     15'b000000100000000: NAT_ST_EVICT_WAIT.
 *     15'b000001000000000: NAT_ST_CHECK_NON_CACHEABLE.
 *     15'b000010000000000: NAT_ST_WAIT.
 *     15'b000100000000000: NAT_ST_WAIT_NATC_MEM_REQ_DONE.
 *     15'b001000000000000: NAT_ST_CACHE_FLUSH.
 *     15'b010000000000000: NAT_ST_DDR_MISS_0.
 *     15'b100000000000000: NAT_ST_DDR_MISS_1.
 * wb_state: 
 *     Write-back state machine.
 *     1'b0: WB_ST_IDLE.
 *     1'b1: WB_ST_WRITE_BACIF.
 * runner_cmd_state: 
 *     Runner command state machine.
 *     1'b0: RUNNER_CMD_ST_IDLE.
 *     1'b1: RUNNER_CMD_ST_WRITE_RUNNER_FIFO.
 * ddr_rep_state: 
 *     DDR reply state machine.
 *     3'b000: DDR_REP_ST_IDLE.
 *     3'b001: DDR_REP_ST_READ_DATA.
 *     3'b010: DDR_REP_ST_READ_RESULT.
 *     3'b011: DDR_REP_ST_READ_WAIT.
 *     3'b100: DDR_REP_ST_EVICT_WR_NON_CACHEABLE.
 * ddr_req_state: 
 *     DDR request state machine.
 *     2'b00: DDR_REQ_ST_IDLE.
 *     2'b01: DDR_REQ_ST_WRITE_HEADER.
 *     2'b10: DDR_REQ_ST_WRITE_HEADER_DELAY.
 * apb_state: 
 *     APB to RBUS bridge state machine.
 *     2'b00: APB_ST_IDLE.
 *     2'b01: APB_ST_RW.
 *     2'b10: AOB_ST_END.
 * debug_sel: 
 *     Debug bus select.
 *     2'b00: prb_nat_control.
 *     2'b01: prb_cmd_control.
 *     2'b10: prb_wb_control.
 *     2'b11: prb_ddr_control.
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_sm_status_set(const natc_ddr_cfg_sm_status *sm_status);
bdmf_error_t ag_drv_natc_ddr_cfg_sm_status_get(natc_ddr_cfg_sm_status *sm_status);

/**********************************************************************************************************************
 * ddr_hash_mode_tbl0: 
 *     Hash algorithm used for DDR table 0 lookup.
 *     Hash value is DDR table size dependent.
 *     0h: 32-bit rolling XOR hash is used as DDR hash function. It is reduced to N-bit
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     1h: CRC32 hash is used as DDR hash function. CRC32 is reduced to N-bit using
 *     the same method as in 32-bit rolling XOR hash.
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     2h: CRC32 hash is used as DDR hash function. CRC32[N:0] is used as hash value
 *     DDR table size is 8K,   N = 12.
 *     DDR table size is 16K,  N = 13.
 *     DDR table size is 32K,  N = 14.
 *     DDR table size is 64K,  N = 15.
 *     DDR table size is 128K, N = 16.
 *     DDR table size is 256K, N = 17.
 *     3h: CRC32 hash is used as DDR hash function. CRC32[31:N] is used as hash value
 *     DDR table size is 8K,   N = 19.
 *     DDR table size is 16K,  N = 18.
 *     DDR table size is 32K,  N = 17.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 15.
 *     DDR table size is 256K, N = 14.
 *     4h: RSS hash is used as DDR hash function using secret key 0. RSS[N:0] is used as hash value.
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     5h: RSS hash is used as DDR hash function using secret key 1. RSS[N:0] is used as hash value.
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     6h: RSS hash is used as DDR hash function using secret key 2. RSS[N:0] is used as hash value.
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     7h: RSS hash is used as DDR hash function using secret key 3. RSS[N:0] is used as hash value.
 *     DDR table size is 8K,   N = 13.
 *     DDR table size is 16K,  N = 14.
 *     DDR table size is 32K,  N = 15.
 *     DDR table size is 64K,  N = 16.
 *     DDR table size is 128K, N = 17.
 *     DDR table size is 256K, N = 18.
 *     8h: Key[N:4] is used as hash value.
 *     DDR table size is 8K,   N = 16.
 *     DDR table size is 16K,  N = 17.
 *     DDR table size is 32K,  N = 18.
 *     DDR table size is 64K,  N = 19.
 *     DDR table size is 128K, N = 20.
 *     DDR table size is 256K, N = 21.
 * ddr_hash_mode_tbl1: 
 *     Hash algorithm used for DDR table 1 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl2: 
 *     Hash algorithm used for DDR table 2 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl3: 
 *     Hash algorithm used for DDR table 3 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl4: 
 *     Hash algorithm used for DDR table 4 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl5: 
 *     Hash algorithm used for DDR table 5 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl6: 
 *     Hash algorithm used for DDR table 6 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 * ddr_hash_mode_tbl7: 
 *     Hash algorithm used for DDR table 7 lookup.
 *     See description of DDR_HASH_MODE_TBL0.
 **********************************************************************************************************************/
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_hash_mode_set(const natc_ddr_cfg_ddr_hash_mode *ddr_hash_mode);
bdmf_error_t ag_drv_natc_ddr_cfg_ddr_hash_mode_get(natc_ddr_cfg_ddr_hash_mode *ddr_hash_mode);

#ifdef USE_BDMF_SHELL
enum
{
    cli_natc_ddr_cfg_natc_ddr_size,
    cli_natc_ddr_cfg_ddr_bins_per_bucket_0,
    cli_natc_ddr_cfg_ddr_bins_per_bucket_1,
    cli_natc_ddr_cfg_total_len,
    cli_natc_ddr_cfg_sm_status,
    cli_natc_ddr_cfg_ddr_hash_mode,
};

int bcm_natc_ddr_cfg_cli_get(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms);
bdmfmon_handle_t ag_drv_natc_ddr_cfg_cli_init(bdmfmon_handle_t root_dir);

#endif
#endif

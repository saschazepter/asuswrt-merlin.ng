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

/******************************************************************************/
/*                                                                            */
/* File Description:                                                          */
/*                                                                            */
/* This file contains the implementation of the Runner CPU feed ring interface     */
/*                                                                            */
/******************************************************************************/

/*****************************************************************************/
/*                                                                           */
/* Include files                                                             */
/*                                                                           */
/*****************************************************************************/
#if defined(CONFIG_RNR_FEED_RING) /* otherwise do nothing */
#include <bdmf_interface.h>

#include "rdp_cpu_ring.h"
#include "rdp_cpu_feed_ring.h"
#include "rdd_cpu_rx.h"
#include "rdp_drv_proj_cntr.h"
#include "rdd_runner_proj_defs.h"
#include "rdp_cpu_ring_inline.h"
#include "rdp_mm.h"
#include "rdp_drv_xpm.h"
#include "bdmf_system.h"
#ifndef RDP_SIM
#include "xrdp_drv_rnr_regs_ag.h"
#endif

bdmf_fastlock feed_ring_lock;    
void rdp_recycle_buf_to_feed(void *pFkb);
uint32_t threshold_recycle = 0;
#define WRITE_IDX_UPDATE_THR (128)

void rdp_recycle_buf_to_feed(void *pFkb)
{
    int rc = 0;

    bdmf_fastlock_lock(&feed_ring_lock);
    rc = __rdp_recycle_buf_to_feed((void *)(PFKBUFF_TO_PDATA(pFkb, BCM_PKT_HEADROOM)));
    if (rc == 0)
    {
       threshold_recycle++;
    }

    if (WRITE_IDX_UPDATE_THR <= threshold_recycle) 
    {
#ifdef CONFIG_BCM_CACHE_COHERENCY
        dma_wmb();
#endif
        rdd_cpu_inc_feed_ring_write_idx(threshold_recycle);
        threshold_recycle = 0; 
    }
    bdmf_fastlock_unlock(&feed_ring_lock);
}

EXPORT_SYMBOL(rdp_recycle_buf_to_feed);

int bdmf_cpu_ring_shell_print_pd(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    return cpu_ring_shell_print_pd(session, (uint32_t)parm[0].value.unumber, (uint32_t)parm[1].value.unumber);
}

void rdp_cpu_feed_pd_print_fields(void *shell_priv, CPU_FEED_DESCRIPTOR_STRUCT *pdPtr)
{
    rdp_cpu_shell_print(shell_priv, "Feed descriptor fields:\n");
    rdp_cpu_ring_print_phys_addr(shell_priv, pdPtr->ptr_hi, pdPtr->ptr_low);

    rdp_cpu_shell_print(shell_priv, "\tpacket type: %d\n", pdPtr->type);
    rdp_cpu_shell_print(shell_priv, "\tvalid_flag: 0x%x 0x%x\n", pdPtr->valid_flag_1, pdPtr->valid_flag_0);
}
#endif /* CONFIG_RNR_FEED_RING */

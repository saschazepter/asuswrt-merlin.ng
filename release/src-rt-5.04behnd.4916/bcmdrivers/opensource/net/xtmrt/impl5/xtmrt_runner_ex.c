/*
<:copyright-BRCM:2018:DUAL/GPL:standard

   Copyright (c) 2018 Broadcom 
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

#include <linux/version.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/init.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <linux/ppp_channel.h>
#include <linux/blog.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/ip.h>
#include <linux/bcm_log.h>
#include <bcmtypes.h>
#include "bcmnet.h"
#include "bcmxtmrt.h"
#include <linux/nbuff.h>
#include "bcmxtmrtimpl.h"
#include "xtmrt_runner.h"

extern bdmf_object_handle rdpa_cpu_xtm_obj;
extern int g_xtm_rxq_stats_received[];
extern int g_xtm_rxq_stats_dropped[];
int xtm_dump_rx;

#ifdef CONFIG_BCM_XRDP
static void xtm_rdpa_rx_dump_data_cb(bdmf_index queue, bdmf_boolean enabled);
#else
static void xtm_rdpa_rxq_stat_cb(int qid, extern_rxq_stat_t *stat, bdmf_boolean clear);
static inline int xtm_rdpa_rxq_queued_get(int qidx);
RING_DESCRIPTOR_S xtm_ring[XTM_RNR_CPU_RX_QUEUES]  = {};
#endif

static int txq_info_open(struct inode *inode, struct file *file);

#if (LINUX_VERSION_CODE > KERNEL_VERSION(5, 10, 0))
static struct proc_ops tx_queue_info_proc = {
   .proc_open = txq_info_open,
   .proc_read = seq_read,
   .proc_lseek = seq_lseek,
   .proc_release = single_release,
};
#else
static struct file_operations tx_queue_info_proc = {
   .open = txq_info_open,
   .read = seq_read,
   .llseek = seq_lseek,
   .release = single_release,
};
#endif

                           /* RDP functions are listed here */
#ifndef CONFIG_BCM_XRDP

/*---------------------------------------------------------------------------
 * int xtm_rdpa_rxq_queued_get(void)
 * Description:
 *    Get the number of packets queued in the ring
 * Returns:
 *    0 or error code
 *---------------------------------------------------------------------------
 */
static inline int xtm_rdpa_rxq_queued_get(int qidx)
{
    CPU_RX_DESCRIPTOR *p;
    int count;

    //walk over the ring and check the onwership flag.
    for (p = xtm_ring[qidx].base, count = 0; p != xtm_ring[qidx].end; p++)
        count += (swap4bytes(p->word2) & 0x80000000) ? 1 : 0;
    return count;
} 

/*---------------------------------------------------------------------------
 * int xtm_rdpa_rxq_stat_cb(void)
 * Description:
 *    Get the Queue stats
 * Returns:
 *    0 or error code
 *---------------------------------------------------------------------------
 */
static void xtm_rdpa_rxq_stat_cb(int qid, extern_rxq_stat_t *stat, bdmf_boolean clear)
{
    int queue_idx = qid -  RDPA_XTM_CPU_LO_RX_QUEUE_ID;

    if (!stat)
        return;

    stat->received = g_xtm_rxq_stats_received[queue_idx];
    stat->dropped = g_xtm_rxq_stats_dropped[queue_idx];
    stat->queued  = xtm_rdpa_rxq_queued_get(queue_idx);

    if (clear)
        g_xtm_rxq_stats_received[queue_idx] = g_xtm_rxq_stats_dropped[queue_idx] = 0;
}

/*---------------------------------------------------------------------------
 * int bcmxapiex_cpu_object_get(void)
 * Description:
 *    Called to get the CPU object
 * Returns:
 *    0 or error status
 *---------------------------------------------------------------------------
 */

int  bcmxapiex_cpu_object_get (bdmf_object_handle  *xtm_obj)
{
   int rc= 0;

   if (rdpa_cpu_get(XTM_RDPA_CPU_PORT, xtm_obj))
      rc = -ESRCH;
   return (rc) ;
}

int bcmxapiex_ring_create_delete(int q_id, int q_size, rdpa_cpu_rxq_cfg_t *rxq_cfg)
{
   int rc = 0;
   uint32_t *ring_base = NULL;

   rc = rdpa_cpu_rx_create_ring(&xtm_ring[q_id - RDPA_XTM_CPU_RX_QUEUE_ID_BASE],q_size,&ring_base);
   rxq_cfg->ring_head = ring_base;
   rxq_cfg->rxq_stat = xtm_rdpa_rxq_stat_cb;
   return rc;
}

int bcmxapiex_get_pkt_from_ring(int hw_q_id, FkBuff_t **ppFkb, rdpa_cpu_rx_info_t *info)
{
   int rc ;

   rc = rdpa_cpu_get_pkt_from_ring (&xtm_ring[XTM_RDPA_CPU_RX_QUEUE_IDX(hw_q_id)], ppFkb, info);
   return (rc) ;
}

/*---------------------------------------------------------------------------
 * int bcmxapi_add_proc_files(void)
 * Description:
 *    Adds proc file system directories and entries.
 * Returns:
 *    0 if successful or error status
 *---------------------------------------------------------------------------
 */
int bcmxapiex_add_proc_files(struct proc_dir_entry *dir)
{
   struct proc_dir_entry *entry;

   entry = proc_create("txqinfo", S_IRUGO, dir,
                                &tx_queue_info_proc);
   if (!entry) {
      pr_err("%s: could not create proc entry for txqinfo\n",
                __func__);
      return -1;
   }

   return 0;
}

/*---------------------------------------------------------------------------
 * int bcmxapiex_del_proc_files(void)
 * Description:
 *    Deletes proc file system directories and entries.
 * Returns:
 *    0 if successful or error status
 *---------------------------------------------------------------------------
 */
int bcmxapiex_del_proc_files(struct proc_dir_entry *dir)
{   
   remove_proc_entry("txqinfo", dir);
   return 0;
} /* bcmxapi_del_proc_files() */


int bcmxapiex_runner_xtm_objects_init(bdmf_object_handle wan)
{
   return (0);
}

int bcmxapiex_cfg_cpu_ds_queues (rdpa_cpu_reason reason, uint8_t tc, uint8_t queue_id)
{
   int rc;

   rdpa_cpu_reason_cfg_t   reason_cfg = {};
   rdpa_cpu_reason_index_t cpu_reason;

   cpu_reason.reason = reason;
   cpu_reason.dir    = rdpa_dir_ds;
   cpu_reason.table_index = CPU_REASON_WAN0_TABLE_INDEX;
   reason_cfg.queue  = queue_id; 
   reason_cfg.meter  = BDMF_INDEX_UNASSIGNED; 
   rc = rdpa_cpu_reason_cfg_set(rdpa_cpu_xtm_obj, &cpu_reason, &reason_cfg);

   return rc;
   
}

void bcmxapiex_SetOrStartTxQueue (rdpa_tm_queue_cfg_t *pQueueCfg, bdmf_object_handle egress_tm)
{
}

void bcmxapiex_StopTxQueue (rdpa_tm_queue_cfg_t *pQueueCfg, bdmf_object_handle egress_tm)
{
}

int bcmxapiex_dpi_egress_tm_rl_rate_mode_set(bdmf_object_handle tm_attr,
		rdpa_tm_rl_rate_mode rl_rate_mode)
{
   return 0;
}

int bcmxapiex_dpi_add_best_effort_sub_queues(bdmf_object_handle owner,
                rdpa_tm_queue_cfg_t *parent_queue, bdmf_index idx)
{
   return 0;
}

#else

                                    /* xRDP functions are listed here */

static void xtm_rdpa_rx_dump_data_cb(bdmf_index queue, bdmf_boolean enabled)
{
    xtm_dump_rx = enabled;
}

/*---------------------------------------------------------------------------
 * int bcmxapiex_cpu_object_get(void)
 * Description:
 *    Called to get the CPU object
 * Returns:
 *    0 or error status
 *---------------------------------------------------------------------------
 */

int  bcmxapiex_cpu_object_get (bdmf_object_handle  *xtm_obj)
{
   int rc = 0;

   BDMF_MATTR_ALLOC(cpu_xtm_attrs, rdpa_cpu_drv());

   /* create cpu port instance for xtm */
   rdpa_cpu_index_set(cpu_xtm_attrs, XTM_RDPA_CPU_PORT) ;

   rdpa_cpu_num_queues_set(cpu_xtm_attrs, XTM_RNR_CPU_RX_QUEUES);

   if ((rc = bdmf_new_and_set(rdpa_cpu_drv(), NULL, cpu_xtm_attrs, xtm_obj)))
   {
      BCM_XTM_ERROR("%s:%s Failed to create cpu xtm%d object rc(%d)", __FILE__, __FUNCTION__, XTM_RDPA_CPU_PORT, rc);
   }

   if ((rc = rdpa_cpu_int_connect_set(rdpa_cpu_xtm_obj, 1 /*true*/)) && rc != BDMF_ERR_ALREADY)
   {
      BCM_XTM_ERROR("XTM : Failed to connect cpu interrupts rc(%d)", rc);
   }

   BDMF_MATTR_FREE(cpu_xtm_attrs);
   return (rc);
}

int bcmxapiex_ring_create_delete(int q_id, int q_size, rdpa_cpu_rxq_cfg_t *rxq_cfg)
{
   int rc = 0;

   rxq_cfg->ring_head = NULL; /* NULL required by RDPA to create AND REMOVE rdp_ring */
   rxq_cfg->rx_dump_data_cb = xtm_rdpa_rx_dump_data_cb;
   return rc;
}

int bcmxapiex_get_pkt_from_ring(int hw_q_id, FkBuff_t **ppFkb, rdpa_cpu_rx_info_t *info)
{
   int rc ;
   rc = rdpa_cpu_packet_get(XTM_RDPA_CPU_PORT, hw_q_id, info);
   if (!rc) {
      *ppFkb = fkb_init((uint8_t *)info->data , BCM_PKT_HEADROOM, (uint8_t *)(info->data + info->data_offset), info->size);
      (*ppFkb)->recycle_hook = (RecycleFuncP)bdmf_sysb_recycle;
      if (unlikely(xtm_dump_rx))
         rdpa_cpu_rx_dump_packet("xtm_rx", XTM_RDPA_CPU_PORT, hw_q_id, info, 0);
   }
   return (rc) ;
}

int bcmxapiex_add_proc_files(struct proc_dir_entry *dir)
{
   struct proc_dir_entry *entry;

   entry = proc_create("txqinfo", S_IRUGO, dir,
                                &tx_queue_info_proc);
   if (!entry) {
      pr_err("%s: could not create proc entry for txqinfo\n",
                __func__);
      return -1;
   }

  return 0;
}

int bcmxapiex_del_proc_files(struct proc_dir_entry *dir)
{
    remove_proc_entry("txqinfo", dir);

    return 0;
}

int bcmxapiex_runner_xtm_objects_init(bdmf_object_handle wan)
{
   int rc;
   bdmf_object_handle cpu_obj = NULL;

   rc = rdpa_cpu_get(XTM_RDPA_CPU_PORT, &cpu_obj);
   rc = rc ? rc : rdpa_port_cpu_obj_set(wan, cpu_obj);
   if (rc) {
      BCM_XTM_ERROR(CARDNAME "Failed to set CPU object for port %s, error %d", bdmf_object_name(wan), rc);
   }

   return rc;
}

int bcmxapiex_cfg_cpu_ds_queues (rdpa_cpu_reason reason, uint8_t tc, uint8_t queue_id)
{
   int rc ;

   rc = rdpa_cpu_tc_to_rxq_set (rdpa_cpu_xtm_obj, tc, queue_id);
   return rc;
}

void bcmxapiex_SetOrStartTxQueue (rdpa_tm_queue_cfg_t *pQueueCfg, bdmf_object_handle egress_tm)
{
}

void bcmxapiex_StopTxQueue (rdpa_tm_queue_cfg_t *pQueueCfg, bdmf_object_handle egress_tm)
{
}

int bcmxapiex_dpi_egress_tm_rl_rate_mode_set(bdmf_object_handle tm_attr,
		rdpa_tm_rl_rate_mode rl_rate_mode)
{
#if IS_ENABLED(CONFIG_BCM_DPI)
   return rdpa_egress_tm_rl_rate_mode_set(tm_attr, rl_rate_mode);
#else
   return 0;
#endif // #if IS_ENABLED(CONFIG_BCM_DPI)
}

#if IS_ENABLED(CONFIG_BCM_DPI)
static int configure_dpi_best_effort_sub_queues(bdmf_object_handle egress_tm,
                rdpa_tm_queue_cfg_t *parent_queue)
{
   int ret = BDMF_ERR_OK;
   int idx;

   /* add queues under service queue scheduler */
   for (idx = 0; idx < EG_PRIO_MAX + 1; idx++) {
      rdpa_tm_queue_cfg_t queue_cfg = {
         .queue_id       = idx + DPI_XRDP_US_SQ_OFFSET,
         .drop_alg       = rdpa_tm_drop_alg_dt,
         .drop_threshold = parent_queue->drop_threshold,
         .stat_enable    = 1,
         .reserved_packet_buffers = parent_queue->reserved_packet_buffers,
      };

      ret = rdpa_egress_tm_queue_cfg_set(egress_tm, idx, &queue_cfg);

      if (ret)
         break;
   }

   return ret;
}
#endif // #if IS_ENABLED(CONFIG_BCM_DPI)

int bcmxapiex_dpi_add_best_effort_sub_queues(bdmf_object_handle owner,
                rdpa_tm_queue_cfg_t *parent_queue, bdmf_index idx)
{
   int ret = BDMF_ERR_OK;
#if IS_ENABLED(CONFIG_BCM_DPI)
   rdpa_tm_service_queue_t service_queue = {.enable = RDPA_TM_SECONDARY_SERVICE_QUEUE_ENABLE};
   bdmf_object_handle egress_tm;
   bdmf_mattr_handle mattr;

   if (!rdpa_egress_tm_subsidiary_get(owner, idx, &egress_tm))
      return configure_dpi_best_effort_sub_queues(egress_tm, parent_queue);

   mattr = bdmf_mattr_alloc(rdpa_egress_tm_drv());
   if (!mattr) {
      BDMF_TRACE_ERR("bdmf_mattr_alloc failed\n");
      ret = BDMF_ERR_NOMEM;
      goto err;
   }

#define run_or_err(expr, errlabel) do {                  \
   ret = expr;                                           \
   if (ret) {                                            \
      BDMF_TRACE_ERR(#expr " failed, ret %d\n", ret);    \
      goto errlabel;                                     \
   }                                                     \
} while (0)

   /* create queues */
   run_or_err(rdpa_egress_tm_level_set(mattr, RDPA_TM_SECONDARY_LEVEL), err_free_mattr);
   run_or_err(rdpa_egress_tm_mode_set(mattr, RDPA_TM_SECONDARY_SCHEDULER_MODE), err_free_mattr);
   run_or_err(rdpa_egress_tm_service_queue_set(mattr, &service_queue), err_free_mattr);
   run_or_err(rdpa_egress_tm_overall_rl_set(mattr, FALSE), err_free_mattr);
   run_or_err(rdpa_egress_tm_num_queues_set(mattr, RDPA_TM_SECONDARY_NUM_QUEUES), err_free_mattr);
   if (parent_queue->weight)
   {
      run_or_err(rdpa_egress_tm_weight_set(mattr, parent_queue->weight), err_free_mattr);
   }
   else
   {
      run_or_err(rdpa_egress_tm_weight_set(mattr, RDPA_TM_SECONDARY_DEFAULT_WEIGHT), err_free_mattr);
   }

#ifdef RDPA_TM_SECONDARY_SP_ELEMENTS 
   run_or_err(rdpa_egress_tm_num_sp_elements_set(mattr, RDPA_TM_SECONDARY_SP_ELEMENTS), err_free_mattr);
#endif
   run_or_err(rdpa_egress_tm_rl_rate_mode_set(mattr, rdpa_tm_rl_dual_rate), err_free_mattr);

   run_or_err(bdmf_new_and_set(rdpa_egress_tm_drv(), owner, mattr, &egress_tm), err_free_mattr);

   run_or_err(rdpa_egress_tm_subsidiary_set(owner, idx, egress_tm), err_free_sched);
   run_or_err(configure_dpi_best_effort_sub_queues(egress_tm, parent_queue), err_free_sched);

   return BDMF_ERR_OK;

err_free_sched:
   bdmf_destroy(egress_tm);
err_free_mattr:
   bdmf_mattr_free(mattr);
err:
#endif // #if IS_ENABLED(CONFIG_BCM_DPI)
   return ret;
}

#endif /* #ifndef CONFIG_BCM_XRDP */

void bcmxapiex_ShutdownTxQueue (UINT32 queueIdx, bdmf_object_handle egress_tm)
{
   int rc ;
   rdpa_stat_t          queue_stat ;
   PBCMXTMRT_GLOBAL_INFO pGi = &g_GlobalInfo;
   BcmXtmQDbgStatus   *pQDbgStatus ;
      
   pQDbgStatus  = &pGi->qDbgStatus[pGi->qLogCurrIndex] ;

   memset (&queue_stat, 0, sizeof (rdpa_stat_t)) ;

   if ((rc = rdpa_egress_tm_queue_occupancy_get (egress_tm, queueIdx, &queue_stat) == 0)) {

      BCM_XTM_NOTICE("bcmxtmrt: Egress TM Q %d Occupancy Pre %d ", (unsigned int) queueIdx, (UINT32) queue_stat.packets) ;

      BCM_XTM_NOTICE("bcmxtmrt: Egress TM Q %d Flush/Shutdown %d ", (unsigned int) queueIdx, (UINT32) jiffies) ;

      if ((rc = rdpa_egress_tm_queue_cfg_delete(egress_tm, 0)))
         BCM_XTM_ERROR(CARDNAME "Delete TxQueue: rdpa_egress_tm_queue_cfg_delete error rc=%d", rc) ;
 
      pQDbgStatus->qId = queueIdx ;
      pQDbgStatus->status = rc ;
      pQDbgStatus->occupancy = queue_stat.packets ;
      pQDbgStatus->jiffies = jiffies ;
      pQDbgStatus->operation = Q_SHUTDOWN ;

      pGi->qLogCurrIndex++ ;
      if (pGi->qLogCurrIndex == MAX_Q_LOGS)
         pGi->qLogCurrIndex = 0 ;
   }

   if (!rc)
      BCM_XTM_NOTICE("bcmxtmrt: Egress TM Q %d Flush & Shutdown Done. %d ", (unsigned int) queueIdx, (UINT32) jiffies) ;
   else
      BCM_XTM_ERROR("bcmxtmrt: Egress TM Q %d Flush & Shutdown Error. %d ", (unsigned int) queueIdx, rc) ;
}

static int txq_info_dump(struct seq_file *m, void *v)
{
   PBCMXTMRT_GLOBAL_INFO pGi = &g_GlobalInfo;
   BcmXtmQDbgStatus *pQDbgStatus;
   int i, dis;
      
   seq_printf(m, "XTM Tx Queue Information (in Reverse historical order - from new to old) \n");
   seq_printf(m, "==========================\n");
   seq_printf(m, "QDbgCurrIndex %d\n", pGi->qLogCurrIndex);
   seq_printf(m, "QId\t status\t occupancy\t time\t\t Operation\n");

   /* Display from current event in reverse order for history.
    * Current event index is the new event that is going to be recorded when it happens so we traverse from one older event.
    *
    * Also, display the events which have been recorded & not the invalid ones.
    */

   dis = (pGi->qLogCurrIndex==0) ? MAX_Q_LOGS-1 : pGi->qLogCurrIndex-1 ;

   for (i = 0; i < MAX_Q_LOGS; i++)
   {
	   pQDbgStatus = &pGi->qDbgStatus[dis];

	   if (pQDbgStatus->jiffies != 0)
		   seq_printf(m, "%d\t %d\t %d\t\t %d\t\t   %d\t\n", pQDbgStatus->qId,
				   pQDbgStatus->status, pQDbgStatus->occupancy,
				   pQDbgStatus->jiffies, pQDbgStatus->operation);

	   dis = (dis==0) ? MAX_Q_LOGS-1 : dis-1 ;
   } /* for i */

   return 0;
} /* __ProcTxQueueInfo() */

/***************************************************************************
 * Function Name: txq_info 
 * Description  : Displays information about Tx Queues (setup/shutdown)
 * Returns      : 0 if successful or error status
 ***************************************************************************/
static int txq_info_open(struct inode *inode, struct file *file)
{
   return single_open(file, txq_info_dump, PDE_DATA(inode));
}


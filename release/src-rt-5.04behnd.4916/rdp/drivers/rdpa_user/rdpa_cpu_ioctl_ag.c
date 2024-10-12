// <:copyright-BRCM:2013:DUAL/GPL:standard
// 
//    Copyright (c) 2013 Broadcom 
//    All Rights Reserved
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License, version 2, as published by
// the Free Software Foundation (the "GPL").
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// 
// A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
// writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.
// 
// :>
/*
 * cpu object ioctl functions implementation file.
 * This ioctl file is generated automatically. Do not edit!
 */
#include "rdpa_api.h"
#include "rdpa_user.h"
#include "rdpa_user_int.h"
#include "rdpa_cpu_user_ioctl_ag.h"

static int rdpa_user_cpu_drv(rdpa_ioctl_cmd_t *pa)
{
	BDMF_TRACE_DBG("inside rdpa_user_cpu_drv\n");

	if (!(pa->drv = rdpa_cpu_drv()))
	{
		BDMF_TRACE_DBG("rdpa_cpu_drv failed\n");
	}

	return 0;
}

static int rdpa_user_cpu_get(rdpa_ioctl_cmd_t *pa)
{
	BDMF_TRACE_DBG("inside rdpa_user_cpu_drv\n");

	if ((pa->ret = rdpa_cpu_get((rdpa_cpu_port)(long)pa->parm, &pa->mo)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_get failed ret: %d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_index_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_port parm;

	BDMF_TRACE_DBG("inside cpu_user_index_get\n");

	if ((pa->ret = rdpa_cpu_index_get(pa->mo, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_index_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(rdpa_cpu_port)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_index_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_index_set\n");

	if ((pa->ret = rdpa_cpu_index_set(pa->mo, (rdpa_cpu_port)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_index_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_num_queues_get(rdpa_ioctl_cmd_t *pa)
{
	bdmf_number parm;

	BDMF_TRACE_DBG("inside cpu_user_num_queues_get\n");

	if ((pa->ret = rdpa_cpu_num_queues_get(pa->mo, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_num_queues_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_num_queues_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_num_queues_set\n");

	if ((pa->ret = rdpa_cpu_num_queues_set(pa->mo, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_num_queues_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_rxq_flush_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_rxq_flush_set\n");

	if ((pa->ret = rdpa_cpu_rxq_flush_set(pa->mo, pa->ai, (bdmf_boolean)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_rxq_flush_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_rxq_stat_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_rx_stat_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_rxq_stat_get\n");

	if ((pa->ret = rdpa_cpu_rxq_stat_get(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_rxq_stat_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(rdpa_cpu_rx_stat_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_rxq_stat_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_rx_stat_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_rxq_stat_set\n");

	if (copy_from_user((void *)&parm, (void *)(long)pa->ptr, sizeof(rdpa_cpu_rx_stat_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_rxq_stat_set(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_rxq_stat_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_meter_cfg_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_meter_cfg_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_meter_cfg_get\n");

	if ((pa->ret = rdpa_cpu_meter_cfg_get(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_meter_cfg_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(rdpa_cpu_meter_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_meter_cfg_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_meter_cfg_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_meter_cfg_set\n");

	if (copy_from_user((void *)&parm, (void *)(long)pa->ptr, sizeof(rdpa_cpu_meter_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_meter_cfg_set(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_meter_cfg_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_meter_stat_get(rdpa_ioctl_cmd_t *pa)
{
	bdmf_number parm;

	BDMF_TRACE_DBG("inside cpu_user_meter_stat_get\n");

	if ((pa->ret = rdpa_cpu_meter_stat_get(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_meter_stat_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_meter_stat_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_meter_stat_set\n");

	if ((pa->ret = rdpa_cpu_meter_stat_set(pa->mo, pa->ai, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_meter_stat_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_reason_cfg_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;
	rdpa_cpu_reason_cfg_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_reason_cfg_get\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_cfg_get(pa->mo, &ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_cfg_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(rdpa_cpu_reason_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_reason_cfg_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;
	rdpa_cpu_reason_cfg_t  parm;

	BDMF_TRACE_DBG("inside cpu_user_reason_cfg_set\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if (copy_from_user((void *)&parm, (void *)(long)pa->ptr, sizeof(rdpa_cpu_reason_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_cfg_set(pa->mo, &ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_cfg_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_reason_cfg_get_next(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;

	BDMF_TRACE_DBG("inside cpu_user_reason_cfg_get_next\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_cfg_get_next(pa->mo, &ai)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_cfg_get_next failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ai_ptr, (void *)&ai, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_reason_stat_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;
	bdmf_number parm;

	BDMF_TRACE_DBG("inside cpu_user_reason_stat_get\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_stat_get(pa->mo, &ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_stat_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_reason_stat_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;

	BDMF_TRACE_DBG("inside cpu_user_reason_stat_set\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_stat_set(pa->mo, &ai, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_stat_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_reason_stat_get_next(rdpa_ioctl_cmd_t *pa)
{
	rdpa_cpu_reason_index_t  ai;

	BDMF_TRACE_DBG("inside cpu_user_reason_stat_get_next\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_cpu_reason_stat_get_next(pa->mo, &ai)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_reason_stat_get_next failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ai_ptr, (void *)&ai, sizeof(rdpa_cpu_reason_index_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_int_connect_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_int_connect_set\n");

	if ((pa->ret = rdpa_cpu_int_connect_set(pa->mo, (bdmf_boolean)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_int_connect_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_cpu_tc_to_rxq_get(rdpa_ioctl_cmd_t *pa)
{
	bdmf_number parm;

	BDMF_TRACE_DBG("inside cpu_user_tc_to_rxq_get\n");

	if ((pa->ret = rdpa_cpu_tc_to_rxq_get(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_tc_to_rxq_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_cpu_tc_to_rxq_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside cpu_user_tc_to_rxq_set\n");

	if ((pa->ret = rdpa_cpu_tc_to_rxq_set(pa->mo, pa->ai, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_cpu_tc_to_rxq_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

long rdpa_cpu_ag_ioctl(unsigned int op, rdpa_ioctl_cmd_t *pa)
{
	int ret;

	switch (op){
		case RDPA_CPU_DRV:
			ret = rdpa_user_cpu_drv(pa);
			break;

		case RDPA_CPU_GET:
			ret = rdpa_user_cpu_get(pa);
			break;

		case RDPA_CPU_INDEX_GET:
			ret = rdpa_user_cpu_index_get(pa);
			break;

		case RDPA_CPU_INDEX_SET:
			ret = rdpa_user_cpu_index_set(pa);
			break;

		case RDPA_CPU_NUM_QUEUES_GET:
			ret = rdpa_user_cpu_num_queues_get(pa);
			break;

		case RDPA_CPU_NUM_QUEUES_SET:
			ret = rdpa_user_cpu_num_queues_set(pa);
			break;

		case RDPA_CPU_RXQ_FLUSH_SET:
			ret = rdpa_user_cpu_rxq_flush_set(pa);
			break;

		case RDPA_CPU_RXQ_STAT_GET:
			ret = rdpa_user_cpu_rxq_stat_get(pa);
			break;

		case RDPA_CPU_RXQ_STAT_SET:
			ret = rdpa_user_cpu_rxq_stat_set(pa);
			break;

		case RDPA_CPU_METER_CFG_GET:
			ret = rdpa_user_cpu_meter_cfg_get(pa);
			break;

		case RDPA_CPU_METER_CFG_SET:
			ret = rdpa_user_cpu_meter_cfg_set(pa);
			break;

		case RDPA_CPU_METER_STAT_GET:
			ret = rdpa_user_cpu_meter_stat_get(pa);
			break;

		case RDPA_CPU_METER_STAT_SET:
			ret = rdpa_user_cpu_meter_stat_set(pa);
			break;

		case RDPA_CPU_REASON_CFG_GET:
			ret = rdpa_user_cpu_reason_cfg_get(pa);
			break;

		case RDPA_CPU_REASON_CFG_SET:
			ret = rdpa_user_cpu_reason_cfg_set(pa);
			break;

		case RDPA_CPU_REASON_CFG_GET_NEXT:
			ret = rdpa_user_cpu_reason_cfg_get_next(pa);
			break;

		case RDPA_CPU_REASON_STAT_GET:
			ret = rdpa_user_cpu_reason_stat_get(pa);
			break;

		case RDPA_CPU_REASON_STAT_SET:
			ret = rdpa_user_cpu_reason_stat_set(pa);
			break;

		case RDPA_CPU_REASON_STAT_GET_NEXT:
			ret = rdpa_user_cpu_reason_stat_get_next(pa);
			break;

		case RDPA_CPU_INT_CONNECT_SET:
			ret = rdpa_user_cpu_int_connect_set(pa);
			break;

		case RDPA_CPU_TC_TO_RXQ_GET:
			ret = rdpa_user_cpu_tc_to_rxq_get(pa);
			break;

		case RDPA_CPU_TC_TO_RXQ_SET:
			ret = rdpa_user_cpu_tc_to_rxq_set(pa);
			break;

		default:
			BDMF_TRACE_ERR("no such ioctl cmd: %u\n", op);
			ret = EINVAL;
		}

	return ret;
}

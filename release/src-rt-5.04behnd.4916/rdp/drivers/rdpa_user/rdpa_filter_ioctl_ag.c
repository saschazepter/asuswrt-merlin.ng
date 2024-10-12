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
 * filter object ioctl functions implementation file.
 * This ioctl file is generated automatically. Do not edit!
 */
#include "rdpa_api.h"
#include "rdpa_user.h"
#include "rdpa_user_int.h"
#include "rdpa_filter_user_ioctl_ag.h"

static int rdpa_user_filter_drv(rdpa_ioctl_cmd_t *pa)
{
	BDMF_TRACE_DBG("inside rdpa_user_filter_drv\n");

	if (!(pa->drv = rdpa_filter_drv()))
	{
		BDMF_TRACE_DBG("rdpa_filter_drv failed\n");
	}

	return 0;
}

static int rdpa_user_filter_get(rdpa_ioctl_cmd_t *pa)
{
	BDMF_TRACE_DBG("inside rdpa_user_filter_drv\n");

	if ((pa->ret = rdpa_filter_get(&pa->mo)))
	{
		BDMF_TRACE_DBG("rdpa_filter_get failed ret: %d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_filter_global_cfg_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_filter_global_cfg_t  parm;

	BDMF_TRACE_DBG("inside filter_user_global_cfg_get\n");

	if ((pa->ret = rdpa_filter_global_cfg_get(pa->mo, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_global_cfg_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(rdpa_filter_global_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_filter_global_cfg_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_filter_global_cfg_t  parm;

	BDMF_TRACE_DBG("inside filter_user_global_cfg_set\n");

	if (copy_from_user((void *)&parm, (void *)(long)pa->ptr, sizeof(rdpa_filter_global_cfg_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_filter_global_cfg_set(pa->mo, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_global_cfg_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_filter_etype_udef_get(rdpa_ioctl_cmd_t *pa)
{
	bdmf_number parm;

	BDMF_TRACE_DBG("inside filter_user_etype_udef_get\n");

	if ((pa->ret = rdpa_filter_etype_udef_get(pa->mo, pa->ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_etype_udef_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_filter_etype_udef_set(rdpa_ioctl_cmd_t *pa)
{

	BDMF_TRACE_DBG("inside filter_user_etype_udef_set\n");

	if ((pa->ret = rdpa_filter_etype_udef_set(pa->mo, pa->ai, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_etype_udef_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_filter_etype_udef_get_next(rdpa_ioctl_cmd_t *pa)
{
	bdmf_index  ai;

	BDMF_TRACE_DBG("inside filter_user_etype_udef_get_next\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(bdmf_index )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_filter_etype_udef_get_next(pa->mo, &ai)))
	{
		BDMF_TRACE_DBG("rdpa_filter_etype_udef_get_next failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ai_ptr, (void *)&ai, sizeof(bdmf_index )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_filter_stats_get(rdpa_ioctl_cmd_t *pa)
{
	rdpa_filter_stats_key_t  ai;
	bdmf_number parm;

	BDMF_TRACE_DBG("inside filter_user_stats_get\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_filter_stats_key_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_filter_stats_get(pa->mo, &ai, &parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_stats_get failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ptr, (void *)&parm, sizeof(bdmf_number)))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

static int rdpa_user_filter_stats_set(rdpa_ioctl_cmd_t *pa)
{
	rdpa_filter_stats_key_t  ai;

	BDMF_TRACE_DBG("inside filter_user_stats_set\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_filter_stats_key_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_filter_stats_set(pa->mo, &ai, (bdmf_number)(long)pa->parm)))
	{
		BDMF_TRACE_DBG("rdpa_filter_stats_set failed, ret:%d\n", pa->ret);
	}

	return 0;
}

static int rdpa_user_filter_stats_get_next(rdpa_ioctl_cmd_t *pa)
{
	rdpa_filter_stats_key_t  ai;

	BDMF_TRACE_DBG("inside filter_user_stats_get_next\n");

	if (copy_from_user((void *)&ai, (void *)(long)pa->ai_ptr, sizeof(rdpa_filter_stats_key_t )))
	{
		BDMF_TRACE_ERR("failed to copy from user\n");
		return -1;
	}

	if ((pa->ret = rdpa_filter_stats_get_next(pa->mo, &ai)))
	{
		BDMF_TRACE_DBG("rdpa_filter_stats_get_next failed, ret:%d\n", pa->ret);
	}

	if (copy_to_user((void *)(long)pa->ai_ptr, (void *)&ai, sizeof(rdpa_filter_stats_key_t )))
	{
		BDMF_TRACE_ERR("failed to copy to user\n");
		return -1;
	}

	return 0;
}

long rdpa_filter_ag_ioctl(unsigned int op, rdpa_ioctl_cmd_t *pa)
{
	int ret;

	switch (op){
		case RDPA_FILTER_DRV:
			ret = rdpa_user_filter_drv(pa);
			break;

		case RDPA_FILTER_GET:
			ret = rdpa_user_filter_get(pa);
			break;

		case RDPA_FILTER_GLOBAL_CFG_GET:
			ret = rdpa_user_filter_global_cfg_get(pa);
			break;

		case RDPA_FILTER_GLOBAL_CFG_SET:
			ret = rdpa_user_filter_global_cfg_set(pa);
			break;

		case RDPA_FILTER_ETYPE_UDEF_GET:
			ret = rdpa_user_filter_etype_udef_get(pa);
			break;

		case RDPA_FILTER_ETYPE_UDEF_SET:
			ret = rdpa_user_filter_etype_udef_set(pa);
			break;

		case RDPA_FILTER_ETYPE_UDEF_GET_NEXT:
			ret = rdpa_user_filter_etype_udef_get_next(pa);
			break;

		case RDPA_FILTER_STATS_GET:
			ret = rdpa_user_filter_stats_get(pa);
			break;

		case RDPA_FILTER_STATS_SET:
			ret = rdpa_user_filter_stats_set(pa);
			break;

		case RDPA_FILTER_STATS_GET_NEXT:
			ret = rdpa_user_filter_stats_get_next(pa);
			break;

		default:
			BDMF_TRACE_ERR("no such ioctl cmd: %u\n", op);
			ret = EINVAL;
		}

	return ret;
}

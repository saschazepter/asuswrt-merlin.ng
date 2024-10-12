/*
<:copyright-BRCM:2022:DUAL/GPL:standard

   Copyright (c) 2022 Broadcom 
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
/****************************************************************************
 * AVS RPC Service Driver
 *
 * Author: Samyon Furman <samyon.furman@broadcom.com>
*****************************************************************************/
#include <linux/types.h>
#include <linux/slab.h>
#include <itc_rpc.h>
#include <avs_svc.h>
#include <pmc_rpc.h>

static char* avs_err2str(uint32_t error)
{
    switch (error)
    {
    case RSP_INVALID:
        return "Invalid";
    case RSP_NO_SUPPORT:
        return "Not Supported";
    case RSP_NO_MAP:
        return "Cannot get PMAP, PMAP not set";
    case RSP_MAP_SET:
        return "Set Mode command ignored, Already Set.";
    default:
        return "Unknown.";
    }
}

static uint8_t avs_svc_host_cmd_get_retcode(rpc_msg *msg)
{
    return 0;
}

static int send_avs_host_cmd(uint32_t command, uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *status){
    rpc_msg msg;
    avs_host_cmd_t *p_cmd = NULL;
    uint64_t p_cmd_phys;
    int ret = 0;

    p_cmd = rpc_dma_alloc(sizeof(avs_host_cmd_t), &p_cmd_phys, GFP_DMA32);
    if (!p_cmd)
        return -ENOMEM;

    rpc_msg_init(&msg, RPC_SERVICE_AVS, AVS_SVC_HOST_CMD ,RPC_SERVICE_VER_AVS_HOST_CMD, 0, 0, 0);
    msg.data[2] = (uint32_t)(p_cmd_phys);
    msg.data[1] = (uint32_t)(p_cmd_phys >> 8);

    p_cmd->command = command;
    if (p0)
        p_cmd->command_p0 = *p0;
    if (p1)
        p_cmd->command_p1 = *p1;
    if (p2)
        p_cmd->command_p2 = *p2;
    if (p3)
        p_cmd->command_p3 = *p3;

    ret = avs_svc_request(&msg, avs_svc_host_cmd_get_retcode);
    if (ret)
    {
        printk("ERROR: avs_svc: failure (%d)\n", ret);
        goto exit;
    }
    
    if (status)
        *status = p_cmd->status;

    if (p_cmd->status != RSP_SUCCESS)
    {
        goto exit;
    }

    if (p0)
        *p0 = p_cmd->command_p0;
    if (p1)
        *p1 = p_cmd->command_p1;
    if (p2)
        *p2 = p_cmd->command_p2;
    if (p3)
        *p3 = p_cmd->command_p3;

exit:
    rpc_dma_free(sizeof(avs_host_cmd_t), p_cmd, p_cmd_phys);
    return ret;
} 

int bcm68xx_get_pmap(uint32_t *mode, uint32_t *pmap, uint32_t *cur_pstate, uint32_t *total_pstates, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = 0, p2 = 0, p3 = 0;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_GET_P_MAP, &p0, NULL, &p2, &p3, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: GET_P_MAP CMD %s 0x%x\n", avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
        goto exit;
    }

    if (mode)
        *mode = (p0 >> CMD_GET_P_PMAP_AVSMODE_SHIFT) & CMD_GET_P_PMAP_AVSMODE_MASK;
    if (pmap)
        *pmap = (p0 >> CMD_GET_P_PMAP_PMAPID_SHIFT) & CMD_GET_P_PMAP_PMAPID_MASK;
    if (cur_pstate)
        *cur_pstate = p3;
    if (total_pstates)
        *total_pstates = p2;

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_get_pmap);

int bcm68xx_set_pmap(uint32_t mode, uint32_t init_pstate, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = mode;
    uint32_t p3 = init_pstate;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_SET_P_MAP, &p0, NULL, NULL, &p3, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: SET_P_MAP CMD %s 0x%x\n", avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
    }

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_set_pmap);

int bcm68xx_get_pstate(uint32_t *cur_pstate, uint32_t *total_pstates, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = 0;
    uint32_t p1 = 0;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_GET_P_STATE, &p0, &p1, NULL, NULL, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: GET_P_STATE CMD %s 0x%x\n", avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
        goto exit;
    }

    if (cur_pstate)
        *cur_pstate = p0;
    if (total_pstates)
        *total_pstates = (p1 >> 8) & 0xff;

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_get_pstate);

int bcm68xx_set_pstate(uint32_t new_pstate, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = new_pstate & 0xff;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_SET_P_STATE, &p0, NULL, NULL, NULL, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: SET_P_STATE CMD %s 0x%x\n", avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
    }

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_set_pstate);

int bcm68xx_get_cpu_freq(uint32_t for_pstate, uint32_t *cpu_freq, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = for_pstate;
    uint32_t p1 = 0;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_CALC_FREQ, &p0, &p1, NULL, NULL, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: CALC_FREQ CMD %s 0x%x\n", avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
        goto exit;
    }

    if (cpu_freq)
        *cpu_freq = p1;

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_get_cpu_freq);

int bcm68xx_get_sensor(uint32_t sensor, uint32_t *val, uint32_t *status)
{
    int ret = 0;
    uint32_t p0 = sensor;
    uint32_t p1 = 0;
    uint32_t cmd_status;

    ret = send_avs_host_cmd(CMD_READ_SENSOR, &p0, &p1, NULL, NULL, &cmd_status); 
    if (ret)
    {
        printk("ERROR: avs_host_cmd: failure (%d)\n", ret);
        goto exit;
    }

    if (status)
        *status = cmd_status;

    if (cmd_status != RSP_SUCCESS)
    {
        printk("ERROR: READ_SENSOR %d CMD %s 0x%x\n", sensor, avs_err2str(cmd_status) , cmd_status);
        ret = -EINVAL;
        goto exit;
    }

    if (val)
        *val = p1;

exit:
    return ret;
}
EXPORT_SYMBOL(bcm68xx_get_sensor);


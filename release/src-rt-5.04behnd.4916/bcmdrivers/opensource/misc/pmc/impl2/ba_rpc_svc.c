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
 * Power RPC Service Driver
 *
 * Author: Dima Mamut <dima.mamut@broadcom.com>
*****************************************************************************/


#include <asm/cacheflush.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <itc_rpc.h>
#include <ba_rpc_svc.h>
#include <pmc_rpc.h>

//#define DEBUG
static uint8_t ba_svc_msg_get_retcode(rpc_msg *msg)
{
    struct ba_msg *ba_msg = (struct ba_msg *)msg;
    return ba_msg->rc;
}

int bcm_rpc_ba_xport_set_state( uint8_t port_id, uint8_t enable)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_XPORT_SET_PWR, RPC_SERVICE_VER_BA_XPORT_SET_PWR, 0, 0, 0);

    ba_msg.cpu_id = port_id;
    ba_msg.rs_id = enable;

    ret = pmc_svc_request(msg, ba_svc_msg_get_retcode);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

#ifdef DEBUG
    printk("%s:%d : DEBUG: port_id[%d] enable[0x%x] \n",__FUNCTION__, __LINE__, port_id, enable);
#endif

    return ret;
}

int bcm_rpc_ba_notify_runner_load_sram_done(void)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_RNR_SRAM_DONE, RPC_SERVICE_VER_BA_RNR_SRAM_DONE, 0, 0, 0);

    ret = pmc_svc_request(msg, ba_svc_msg_get_retcode);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return ret;
}
EXPORT_SYMBOL(bcm_rpc_ba_notify_runner_load_sram_done);

int bcm_rpc_ba_setup_wake_trigger(wake_type_t wake_type, int param)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_SETUP_TRIGGER, RPC_SERVICE_VER_BA_SETUP_TRIGGER, 0, wake_type, param);

    ret = pmc_svc_request(msg, ba_svc_msg_get_retcode);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return ret;
}
EXPORT_SYMBOL(bcm_rpc_ba_setup_wake_trigger);

int bcm_rpc_ba_setup_pwr_pin(uint32_t pin_number, uint32_t polarity)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_SETUP_PWR_PIN, RPC_SERVICE_VER_BA_SETUP_PWR_PIN, pin_number, polarity, 0);

    ret = pmc_svc_request(msg, ba_svc_msg_get_retcode);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return ret;
}
EXPORT_SYMBOL(bcm_rpc_ba_setup_pwr_pin);

int bcm_rpc_ba_deep_sleep(void)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_DEEP_SLEEP, RPC_SERVICE_VER_BA_DEEP_SLEEP, 0, 0, 0);

    ret = pmc_svc_request(msg, ba_svc_msg_get_retcode);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return ret;
}
EXPORT_SYMBOL(bcm_rpc_ba_deep_sleep);

int bcm_rpc_ba_get_smcbl_ver(smcbl_ver_t  *smcbl_ver)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_GET_SMCBL_VER, RPC_SERVICE_VER_BA_GET_SMCBL_VER, 0, 0, 0);
    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    smcbl_ver->smcbl_major_ver  = ((msg->data[0] >> 16) & 0xffff);
    smcbl_ver->smcbl_minor_ver  = ((msg->data[0]) & 0xffff);
    smcbl_ver->smcbl_rev        = (msg->data[1]);
    smcbl_ver->ponbl_major_ver  = ((msg->data[2] >> 16) & 0xffff);
    smcbl_ver->ponbl_minor_ver  = ((msg->data[2]) & 0xffff);

    memset(msg , 0 , sizeof(struct ba_msg));
    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_GET_SMCBL_VER_HASH, RPC_SERVICE_VER_BA_GET_SMCBL_VER_HASH, 0, 0, 0);
    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    strncpy(&smcbl_ver->smcbl_ver_hash[0], (char*)&(msg->data[0]), HASH_SHORT_SIZE);

#ifdef DEBUG
    printk("SMC_BL v.%d.%d.%d.%d.%d hash(%s)\n", smcbl_ver->smcbl_major_ver, 
                                                 smcbl_ver->smcbl_minor_ver,
                                                 smcbl_ver->smcbl_rev,
                                                 smcbl_ver->ponbl_major_ver,
                                                 smcbl_ver->ponbl_minor_ver,
                                                 smcbl_ver->smcbl_ver_hash);
#endif

    return ret;
}

int bcm_rpc_ba_get_smcos_ver(smcos_ver_t  *smcos_ver)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("%s:%d:DEBUG:\n",__FUNCTION__, __LINE__);
#endif

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_GET_SMCOS_VER, RPC_SERVICE_VER_BA_GET_SMCOS_VER, 0, 0, 0);
    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    smcos_ver->smcos_major_ver  = ((msg->data[0] >> 16 ) & 0xffff);
    smcos_ver->smcos_minor_ver  = ((msg->data[0]) & 0xffff);
    smcos_ver->smcos_rev        = ((msg->data[1] >> 16) & 0xffff);
    smcos_ver->pon_major_ver    = ((msg->data[1] ) & 0xffff);
    smcos_ver->pon_minor_ver    = ((msg->data[2] >> 16 ) & 0xffff);
    smcos_ver->pon_patch_ver    = ((msg->data[2]) & 0xffff);

    memset(msg , 0 , sizeof(struct ba_msg));
    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_GET_SMCOS_VER_HASH, RPC_SERVICE_VER_BA_GET_SMCOS_VER_HASH, 0, 0, 0);
    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    strncpy(&smcos_ver->smcos_ver_hash[0], (char*)&(msg->data[0]), HASH_SHORT_SIZE);

#ifdef DEBUG
    printk("SMC_OS v%d.%d.%d.%d.%d.%d hash(%s)\n",  smcos_ver->smcos_major_ver, 
                                                    smcos_ver->smcos_minor_ver,
                                                    smcos_ver->smcos_rev,
                                                    smcos_ver->pon_major_ver,
                                                    smcos_ver->pon_minor_ver,
                                                    smcos_ver->pon_patch_ver,
                                                    smcos_ver->smcos_ver_hash);
#endif

    return ret;
}

int bcm_rpc_ba_report_boot_success(uint32_t flags)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

#ifdef DEBUG
    printk("[%s:%d]\n",__FUNCTION__, __LINE__);
#endif
    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_RPRT_BOOT_SUCCESS, RPC_SERVICE_VER_BA_RPRT_BOOT_SUCCESS, flags, 0, 0);

    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return ret;
}

int bcm_rpc_ba_get_boot_fail_cnt(void)
{
    int ret = 0;
    struct ba_msg ba_msg;
    rpc_msg *msg = (rpc_msg *)&ba_msg;

    rpc_msg_init(msg, RPC_SERVICE_BA, BA_SVC_GET_BOOT_FAIL_CNT, RPC_SERVICE_VER_BA_SVC_GET_BOOT_FAIL_CNT, 0, 0, 0);
    ret = pmc_svc_request(msg, NULL);
    if (ret)
    {
        printk("%s:%d : ERROR: pmc_svc_request\n",__FUNCTION__, __LINE__);
        return -1;
    }

    return msg->data[0];
}

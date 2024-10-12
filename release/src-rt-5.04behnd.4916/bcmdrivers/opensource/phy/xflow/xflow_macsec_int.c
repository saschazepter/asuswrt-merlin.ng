/***********************************************************************
 *
 *  Copyright (c) 2021  Broadcom Corporation
 *  All Rights Reserved
 *
 * <:label-BRCM:2012:DUAL/GPL:standard
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
 *
 ************************************************************************/

#include <linux/slab.h>

#include "soc/mcm/enum_max.h"
#include "soc/mcm/enum_types.h"
#include "soc/mem.h"
#include "soc/memory.h"
#include "soc/field.h"
#include <soc/mcm/allenum.h>
#include "soc/mcm/memregs.h"
#include "soc/feature.h"
#include "xflow_macsec_defs.h"
#include "xflow_macsec.h"
#include "xflow_macsec_common.h"
#include "xflow_macsec_firelight.h"
#include "xflow_macsec_cfg_params.h"
#include "macsec_dev.h"
#include "macsec_types.h"
#include "macsec_macros.h"

int bcm_port_local_get(int unit, bcm_gport_t gport, bcm_port_t *local_port)
{
    return 0;
}

void *sal_alloc(int size, char *name)
{
    return kmalloc(size, GFP_KERNEL);
}

void sal_free(void *mem)
{
    kfree(mem);
}

void *soc_cm_salloc(int unit, int size, char *name)
{
    return kmalloc(size, GFP_KERNEL);
}

void soc_cm_sfree(int unit, void *mem)
{
    kfree(mem);
}

unsigned int cmbb_soc_property_get(int unit, int param_type)
{
    unsigned int param_val = 0;

    switch(param_type)
    {
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_NON_KAY_MGMT_COPY_TO_CPU):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_NON_KAY_MGMT_COPY_TO_CPU);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_KAY_COPY_TO_CPU):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_KAY_COPY_TO_CPU);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_AUTO_SECURE_ASSOC_INVALIDATE):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_AUTO_SECURE_ASSOC_INVALIDATE);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_UNKNOWN_POLICY_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_UNKNOWN_POLICY_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_TAG_CTRL_PORT_ERROR_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_TAG_CTRL_PORT_ERROR_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_UNTAG_CTRL_PORT_ERROR_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_UNTAG_CTRL_PORT_ERROR_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_IPV4_MPLS_ERROR_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_IPV4_MPLS_ERROR_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_INVALID_SECTAG_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_INVALID_SECTAG_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_UNKNOWN_SECURE_CHAN_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_UNKNOWN_SECURE_CHAN_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_UNKNOWN_SECURE_ASSOC_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_UNKNOWN_SECURE_ASSOC_DROP);
            break;
        case CBB_GEN_MACSEC_PARAM_TYPE(XFLOW_MACSEC_DECRYPT_REPLAY_FAILURE_DROP):
            param_val = CBB_GEN_MACSEC_PARAM(XFLOW_MACSEC_DECRYPT_REPLAY_FAILURE_DROP);
            break;
        case spn_XFLOW_MACSEC_SKIP_DECRYPT_PKT_PARSER:
            param_val = 0;
            break;
        default:
            printk("^^^^^^^WARNING: parameter type %d is not defined^^^^^^^^\n", param_type);
            param_val = -1;
            break;
    }

    return param_val;
}

unsigned int cmbb_soc_property_port_get(int unit, int port, int param_type)
{
    unsigned int param_val = 0;

    switch(param_type)
    {
        case CBB_PORT_MACSEC_PARAM_TYPE(XFLOW_MACSEC_ENCRYPT_DROP_SVTAG_ERROR_PACKET):
            param_val = CBB_PORT_MACSEC_PARAM(XFLOW_MACSEC_ENCRYPT_DROP_SVTAG_ERROR_PACKET);
            break;
        case CBB_PORT_MACSEC_PARAM_TYPE(XFLOW_MACSEC_ENCRYPT_PHY_PORT_BASED_MACSEC):
            param_val = CBB_PORT_MACSEC_PARAM(XFLOW_MACSEC_ENCRYPT_PHY_PORT_BASED_MACSEC);
            break;
        default:
            param_val = -1;
            break;
    }

    return param_val;
}

int soc_feature(int unit, int feature)
{
    int ret = 0;

    switch (feature)
    {
        case soc_feature_xflow_macsec:
        case soc_feature_xflow_macsec_stat:
        case soc_feature_xflow_macsec_inline:
        case soc_feature_xflow_macsec_crypto_aes_256:
        case soc_feature_xy_tcam_direct:
        case soc_feature_xy_tcam_lpt:
        case soc_feature_xy_tcam_28nm:
        case soc_feature_xflow_macsec_restricted_move:
            ret = TRUE;
            break;
        case soc_feature_xflow_macsec_sa_expiry_war:
        case soc_feature_xflow_macsec_sa_next_pn_update_error_war:
            ret = FALSE;
            break;
        default:
            printk("ERROR: Unrecognized feature! %d\n", feature);
            ret = FALSE;
            break;
    }

    return ret;
}

/*
<:copyright-BRCM:2020:DUAL/GPL:standard

   Copyright (c) 2020 Broadcom 
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

#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/device.h>
#include "trx_descr.h"
#include "trxbus.h"

#define TRX_DESC(p) (p)
#define TRX_DEFINE \
    TRX_DESCRIPTOR *trx = NULL;\
    int trx_ret;
#define TRX_GET_RET\
    if ((trx_ret = get_bus(bus, &trx)))\
        return trx_ret;

static int get_bus(int bus, TRX_DESCRIPTOR **trxp)
{
    TRX_DESCRIPTOR *trx = trxbus_opticaldet_desc_get(bus);

    if (!TRX_DESC(trx))
        return OPTICALDET_NOBUS;

    *trxp = trx;
    return 0;
}

int _trx_get_tx_sd_polarity(TRX_DESCRIPTOR *desc, TRX_SIG_ACTIVE_POLARITY *tx_sd_polarity_p)
{ 
    if (!desc)
        return -1;

    *tx_sd_polarity_p = desc->tx_sd_polarity;
    return 0;
}

int _trx_get_supported_wan_type_bm(TRX_DESCRIPTOR *desc, SUPPORTED_WAN_TYPES_BITMAP *wan_type_bm)
{
    *wan_type_bm = SUPPORTED_WAN_TYPES_AUTO_SENSE_UNAVAILABLE;
    if (!desc)
        return -1;

    *wan_type_bm = desc->wan_types_bitmap;
    return 0;
}

int _trx_get_tx_sd_supported(TRX_DESCRIPTOR *desc, TRX_SIG_PRESENCE *signal_supported_p)
{
    if (!desc)
        return -1;

    *signal_supported_p = desc->tx_sd_supported;
    return 0;
}

int _trx_get_lbe_polarity(TRX_DESCRIPTOR *desc, TRX_SIG_ACTIVE_POLARITY *lbe_polarity_p)
{
    if (!desc)
        return -1;

    *lbe_polarity_p = desc->lbe_polarity;
    return 0;
}
EXPORT_SYMBOL(_trx_get_lbe_polarity);

int _trx_get_type(TRX_DESCRIPTOR *desc, TRX_TYPE *trx_type)
{
    if (!desc)
        return -1;

    *trx_type = desc->type;
    return 0;
}

int trx_get_tx_sd_polarity(int bus, TRX_SIG_ACTIVE_POLARITY *tx_sd_polarity_p)
{ 
    TRX_DEFINE;
    TRX_GET_RET;

    _trx_get_tx_sd_polarity(TRX_DESC(trx), tx_sd_polarity_p);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_tx_sd_polarity);

int trx_get_supported_wan_type_bm(int bus, SUPPORTED_WAN_TYPES_BITMAP *wan_type_bm)
{
    TRX_DEFINE;

    *wan_type_bm = SUPPORTED_WAN_TYPES_AUTO_SENSE_UNAVAILABLE;
    TRX_GET_RET;

    _trx_get_supported_wan_type_bm(TRX_DESC(trx), wan_type_bm);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_supported_wan_type_bm);

int trx_get_tx_sd_supported(int bus, TRX_SIG_PRESENCE *signal_supported_p)
{
    TRX_DEFINE;
    TRX_GET_RET;

    _trx_get_tx_sd_supported(TRX_DESC(trx), signal_supported_p);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_tx_sd_supported);

#define MIN(a,b)  ((a) <= (b)? (a):(b))

int trx_get_full_info(int bus, TRX_INFOMATION *trx_info)
{
    int len;
    char *str;
    unsigned long wavelen;
    TRX_DEFINE;
    TRX_GET_RET;

    if (TRX_DESC(trx)->form_factor == TRX_PMD)
    {
        strncpy(trx_info->vendor_name, TRX_DESC(trx)->vendor_name, sizeof(trx_info->vendor_name));
        strncpy(trx_info->vendor_pn, TRX_DESC(trx)->vendor_pn, sizeof(trx_info->vendor_pn));
        strcpy(trx_info->vendor_sn, "");
        strcpy(trx_info->date_code, "");
    }
    else
    {
        trxbus_mon_read_buf(bus, bcmsfp_mon_id_vendor_name, 0, &str, &len);
        strncpy(trx_info->vendor_name, str, MIN(len, sizeof(trx_info->vendor_name)));

        trxbus_mon_read_buf(bus, bcmsfp_mon_id_vendor_pn, 0, &str, &len);
        strncpy(trx_info->vendor_pn, str, MIN(len, sizeof(trx_info->vendor_pn)));

        trxbus_mon_read_buf(bus, bcmsfp_mon_id_vendor_sn, 0, &str, &len);
        strncpy(trx_info->vendor_sn, str, MIN(len, sizeof(trx_info->vendor_sn)));

        trxbus_mon_read_buf(bus, bcmsfp_mon_id_date_code, 0, &str, &len);
        strncpy(trx_info->date_code, str, MIN(len, sizeof(trx_info->date_code)));

        trxbus_mon_read_buf(bus, bcmsfp_mon_id_vendor_rev, 0, &str, &len);
        strncpy(trx_info->vendor_rev, str, MIN(len, sizeof(trx_info->vendor_rev)));

        trxbus_mon_read(bus, bcmsfp_mon_id_optical_wavelength, 0, &wavelen);
        trx_info->tx_wavlen = wavelen;
    }

    trx_info->form_factor = TRX_DESC(trx)->form_factor;
    trx_info->type = TRX_DESC(trx)->type;
    trx_info->wan_types_bitmap = TRX_DESC(trx)->wan_types_bitmap;
    trx_info->power_budget = TRX_DESC(trx)->power_budget;
    trx_info->rx_wavlen = TRX_DESC(trx)->rx_wavlen;

    return OPTICALDET_SUCCESS;
}

/* XXX: remove from epon */
int trx_get_lbe_polarity(int bus, TRX_SIG_ACTIVE_POLARITY *lbe_polarity_p)
{
    TRX_DEFINE;
    TRX_GET_RET;

    _trx_get_lbe_polarity(TRX_DESC(trx), lbe_polarity_p);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_lbe_polarity);

int trx_get_los(int bus, unsigned long *los_p)
{
    trxbus_mon_read(bus, bcmsfp_mon_los, 0, los_p);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_los);

int trx_get_type(int bus, TRX_TYPE *trx_type)
{
    TRX_DEFINE;
    TRX_GET_RET;

    _trx_get_type(TRX_DESC(trx), trx_type);
    return OPTICALDET_SUCCESS;
}
EXPORT_SYMBOL(trx_get_type);


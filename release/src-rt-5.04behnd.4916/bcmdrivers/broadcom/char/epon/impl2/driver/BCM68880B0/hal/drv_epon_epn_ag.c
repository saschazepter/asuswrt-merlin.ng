/*
   Copyright (c) 2015 Broadcom Corporation
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

#include "drivers_epon_ag.h"
#include "drv_epon_epn_ag.h"
bdmf_error_t ag_drv_epn_control_0_set(const epn_control_0 *control_0)
{
    uint32_t reg_control_0=0;

#ifdef VALIDATE_PARMS
    if(!control_0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((control_0->cfgen1588ts >= _1BITS_MAX_VAL_) ||
       (control_0->cfgreplaceupfcs >= _1BITS_MAX_VAL_) ||
       (control_0->cfgappendupfcs >= _1BITS_MAX_VAL_) ||
       (control_0->cfgdropscb >= _1BITS_MAX_VAL_) ||
       (control_0->moduncappedreportlimit >= _1BITS_MAX_VAL_) ||
       (control_0->modmpquesetfirst >= _1BITS_MAX_VAL_) ||
       (control_0->prvlocalmpcppropagation >= _1BITS_MAX_VAL_) ||
       (control_0->prvtekmodeprefetch >= _1BITS_MAX_VAL_) ||
       (control_0->prvincnonzeroaccum >= _1BITS_MAX_VAL_) ||
       (control_0->prvnounmapppedfcs >= _1BITS_MAX_VAL_) ||
       (control_0->prvsupressdiscen >= _1BITS_MAX_VAL_) ||
       (control_0->cfgvlanmax >= _1BITS_MAX_VAL_) ||
       (control_0->fcserronlydatafr >= _1BITS_MAX_VAL_) ||
       (control_0->prvdropunmapppedllid >= _1BITS_MAX_VAL_) ||
       (control_0->prvsuppressllidmodebit >= _1BITS_MAX_VAL_) ||
       (control_0->moddiscoverydafilteren >= _1BITS_MAX_VAL_) ||
       (control_0->rptselect >= _2BITS_MAX_VAL_) ||
       (control_0->prvdisablesvaquestatusbp >= _1BITS_MAX_VAL_) ||
       (control_0->utxloopback >= _1BITS_MAX_VAL_) ||
       (control_0->utxen >= _1BITS_MAX_VAL_) ||
       (control_0->utxrst_pre_n >= _1BITS_MAX_VAL_) ||
       (control_0->cfgdisabledns >= _1BITS_MAX_VAL_) ||
       (control_0->drxloopback >= _1BITS_MAX_VAL_) ||
       (control_0->drxen >= _1BITS_MAX_VAL_) ||
       (control_0->drxrst_pre_n >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGEN1588TS, reg_control_0, control_0->cfgen1588ts);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGREPLACEUPFCS, reg_control_0, control_0->cfgreplaceupfcs);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGAPPENDUPFCS, reg_control_0, control_0->cfgappendupfcs);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGDROPSCB, reg_control_0, control_0->cfgdropscb);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, MODUNCAPPEDREPORTLIMIT, reg_control_0, control_0->moduncappedreportlimit);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, MODMPQUESETFIRST, reg_control_0, control_0->modmpquesetfirst);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVLOCALMPCPPROPAGATION, reg_control_0, control_0->prvlocalmpcppropagation);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVTEKMODEPREFETCH, reg_control_0, control_0->prvtekmodeprefetch);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVINCNONZEROACCUM, reg_control_0, control_0->prvincnonzeroaccum);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVNOUNMAPPPEDFCS, reg_control_0, control_0->prvnounmapppedfcs);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVSUPRESSDISCEN, reg_control_0, control_0->prvsupressdiscen);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGVLANMAX, reg_control_0, control_0->cfgvlanmax);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, FCSERRONLYDATAFR, reg_control_0, control_0->fcserronlydatafr);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVDROPUNMAPPPEDLLID, reg_control_0, control_0->prvdropunmapppedllid);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVSUPPRESSLLIDMODEBIT, reg_control_0, control_0->prvsuppressllidmodebit);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, MODDISCOVERYDAFILTEREN, reg_control_0, control_0->moddiscoverydafilteren);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, RPTSELECT, reg_control_0, control_0->rptselect);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, PRVDISABLESVAQUESTATUSBP, reg_control_0, control_0->prvdisablesvaquestatusbp);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, UTXLOOPBACK, reg_control_0, control_0->utxloopback);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, UTXEN, reg_control_0, control_0->utxen);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, UTXRST_PRE_N, reg_control_0, control_0->utxrst_pre_n);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, CFGDISABLEDNS, reg_control_0, control_0->cfgdisabledns);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, DRXLOOPBACK, reg_control_0, control_0->drxloopback);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, DRXEN, reg_control_0, control_0->drxen);
    reg_control_0 = RU_FIELD_SET(0, EPN, CONTROL_0, DRXRST_PRE_N, reg_control_0, control_0->drxrst_pre_n);

    RU_REG_WRITE(0, EPN, CONTROL_0, reg_control_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_control_0_get(epn_control_0 *control_0)
{
    uint32_t reg_control_0=0;

#ifdef VALIDATE_PARMS
    if(!control_0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, CONTROL_0, reg_control_0);

    control_0->cfgen1588ts = RU_FIELD_GET(0, EPN, CONTROL_0, CFGEN1588TS, reg_control_0);
    control_0->cfgreplaceupfcs = RU_FIELD_GET(0, EPN, CONTROL_0, CFGREPLACEUPFCS, reg_control_0);
    control_0->cfgappendupfcs = RU_FIELD_GET(0, EPN, CONTROL_0, CFGAPPENDUPFCS, reg_control_0);
    control_0->cfgdropscb = RU_FIELD_GET(0, EPN, CONTROL_0, CFGDROPSCB, reg_control_0);
    control_0->moduncappedreportlimit = RU_FIELD_GET(0, EPN, CONTROL_0, MODUNCAPPEDREPORTLIMIT, reg_control_0);
    control_0->modmpquesetfirst = RU_FIELD_GET(0, EPN, CONTROL_0, MODMPQUESETFIRST, reg_control_0);
    control_0->prvlocalmpcppropagation = RU_FIELD_GET(0, EPN, CONTROL_0, PRVLOCALMPCPPROPAGATION, reg_control_0);
    control_0->prvtekmodeprefetch = RU_FIELD_GET(0, EPN, CONTROL_0, PRVTEKMODEPREFETCH, reg_control_0);
    control_0->prvincnonzeroaccum = RU_FIELD_GET(0, EPN, CONTROL_0, PRVINCNONZEROACCUM, reg_control_0);
    control_0->prvnounmapppedfcs = RU_FIELD_GET(0, EPN, CONTROL_0, PRVNOUNMAPPPEDFCS, reg_control_0);
    control_0->prvsupressdiscen = RU_FIELD_GET(0, EPN, CONTROL_0, PRVSUPRESSDISCEN, reg_control_0);
    control_0->cfgvlanmax = RU_FIELD_GET(0, EPN, CONTROL_0, CFGVLANMAX, reg_control_0);
    control_0->fcserronlydatafr = RU_FIELD_GET(0, EPN, CONTROL_0, FCSERRONLYDATAFR, reg_control_0);
    control_0->prvdropunmapppedllid = RU_FIELD_GET(0, EPN, CONTROL_0, PRVDROPUNMAPPPEDLLID, reg_control_0);
    control_0->prvsuppressllidmodebit = RU_FIELD_GET(0, EPN, CONTROL_0, PRVSUPPRESSLLIDMODEBIT, reg_control_0);
    control_0->moddiscoverydafilteren = RU_FIELD_GET(0, EPN, CONTROL_0, MODDISCOVERYDAFILTEREN, reg_control_0);
    control_0->rptselect = RU_FIELD_GET(0, EPN, CONTROL_0, RPTSELECT, reg_control_0);
    control_0->prvdisablesvaquestatusbp = RU_FIELD_GET(0, EPN, CONTROL_0, PRVDISABLESVAQUESTATUSBP, reg_control_0);
    control_0->utxloopback = RU_FIELD_GET(0, EPN, CONTROL_0, UTXLOOPBACK, reg_control_0);
    control_0->utxen = RU_FIELD_GET(0, EPN, CONTROL_0, UTXEN, reg_control_0);
    control_0->utxrst_pre_n = RU_FIELD_GET(0, EPN, CONTROL_0, UTXRST_PRE_N, reg_control_0);
    control_0->cfgdisabledns = RU_FIELD_GET(0, EPN, CONTROL_0, CFGDISABLEDNS, reg_control_0);
    control_0->drxloopback = RU_FIELD_GET(0, EPN, CONTROL_0, DRXLOOPBACK, reg_control_0);
    control_0->drxen = RU_FIELD_GET(0, EPN, CONTROL_0, DRXEN, reg_control_0);
    control_0->drxrst_pre_n = RU_FIELD_GET(0, EPN, CONTROL_0, DRXRST_PRE_N, reg_control_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_control_1_set(const epn_control_1 *control_1)
{
    uint32_t reg_control_1=0;

#ifdef VALIDATE_PARMS
    if(!control_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((control_1->cfgbypassbbhpacketrequestbuffer >= _1BITS_MAX_VAL_) ||
       (control_1->cfgidlepackettxenable >= _1BITS_MAX_VAL_) ||
       (control_1->cfgdisablempcpcorrectiondithering >= _1BITS_MAX_VAL_) ||
       (control_1->prvoverlappedgntenable >= _1BITS_MAX_VAL_) ||
       (control_1->rstmisalignthr >= _1BITS_MAX_VAL_) ||
       (control_1->cfgstalegntchk >= _1BITS_MAX_VAL_) ||
       (control_1->fecrpten >= _1BITS_MAX_VAL_) ||
       (control_1->cfgl1l2truestrict >= _1BITS_MAX_VAL_) ||
       (control_1->cfgctcrpt >= _2BITS_MAX_VAL_) ||
       (control_1->cfgtscorrdis >= _1BITS_MAX_VAL_) ||
       (control_1->cfgnodiscrpt >= _1BITS_MAX_VAL_) ||
       (control_1->disablediscscale >= _1BITS_MAX_VAL_) ||
       (control_1->clronrd >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGBYPASSBBHPACKETREQUESTBUFFER, reg_control_1, control_1->cfgbypassbbhpacketrequestbuffer);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGIDLEPACKETTXENABLE, reg_control_1, control_1->cfgidlepackettxenable);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGDISABLEMPCPCORRECTIONDITHERING, reg_control_1, control_1->cfgdisablempcpcorrectiondithering);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, PRVOVERLAPPEDGNTENABLE, reg_control_1, control_1->prvoverlappedgntenable);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, RSTMISALIGNTHR, reg_control_1, control_1->rstmisalignthr);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGSTALEGNTCHK, reg_control_1, control_1->cfgstalegntchk);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, FECRPTEN, reg_control_1, control_1->fecrpten);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGL1L2TRUESTRICT, reg_control_1, control_1->cfgl1l2truestrict);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGCTCRPT, reg_control_1, control_1->cfgctcrpt);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGTSCORRDIS, reg_control_1, control_1->cfgtscorrdis);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CFGNODISCRPT, reg_control_1, control_1->cfgnodiscrpt);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, DISABLEDISCSCALE, reg_control_1, control_1->disablediscscale);
    reg_control_1 = RU_FIELD_SET(0, EPN, CONTROL_1, CLRONRD, reg_control_1, control_1->clronrd);

    RU_REG_WRITE(0, EPN, CONTROL_1, reg_control_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_control_1_get(epn_control_1 *control_1)
{
    uint32_t reg_control_1=0;

#ifdef VALIDATE_PARMS
    if(!control_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, CONTROL_1, reg_control_1);

    control_1->cfgbypassbbhpacketrequestbuffer = RU_FIELD_GET(0, EPN, CONTROL_1, CFGBYPASSBBHPACKETREQUESTBUFFER, reg_control_1);
    control_1->cfgidlepackettxenable = RU_FIELD_GET(0, EPN, CONTROL_1, CFGIDLEPACKETTXENABLE, reg_control_1);
    control_1->cfgdisablempcpcorrectiondithering = RU_FIELD_GET(0, EPN, CONTROL_1, CFGDISABLEMPCPCORRECTIONDITHERING, reg_control_1);
    control_1->prvoverlappedgntenable = RU_FIELD_GET(0, EPN, CONTROL_1, PRVOVERLAPPEDGNTENABLE, reg_control_1);
    control_1->rstmisalignthr = RU_FIELD_GET(0, EPN, CONTROL_1, RSTMISALIGNTHR, reg_control_1);
    control_1->cfgstalegntchk = RU_FIELD_GET(0, EPN, CONTROL_1, CFGSTALEGNTCHK, reg_control_1);
    control_1->fecrpten = RU_FIELD_GET(0, EPN, CONTROL_1, FECRPTEN, reg_control_1);
    control_1->cfgl1l2truestrict = RU_FIELD_GET(0, EPN, CONTROL_1, CFGL1L2TRUESTRICT, reg_control_1);
    control_1->cfgctcrpt = RU_FIELD_GET(0, EPN, CONTROL_1, CFGCTCRPT, reg_control_1);
    control_1->cfgtscorrdis = RU_FIELD_GET(0, EPN, CONTROL_1, CFGTSCORRDIS, reg_control_1);
    control_1->cfgnodiscrpt = RU_FIELD_GET(0, EPN, CONTROL_1, CFGNODISCRPT, reg_control_1);
    control_1->disablediscscale = RU_FIELD_GET(0, EPN, CONTROL_1, DISABLEDISCSCALE, reg_control_1);
    control_1->clronrd = RU_FIELD_GET(0, EPN, CONTROL_1, CLRONRD, reg_control_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_grants_set(uint8_t link_idx, bdmf_boolean grant_en)
{
    uint32_t reg_enable_grants=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, ENABLE_GRANTS, reg_enable_grants);

    RDP_FIELD_SET(reg_enable_grants, (link_idx % 32) *1, 0x1, grant_en);

    RU_REG_WRITE(0, EPN, ENABLE_GRANTS, reg_enable_grants);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_grants_get(uint8_t link_idx, bdmf_boolean *grant_en)
{
    uint32_t reg_enable_grants=0;

#ifdef VALIDATE_PARMS
    if(!grant_en)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ENABLE_GRANTS, reg_enable_grants);

    *grant_en = RDP_FIELD_GET(reg_enable_grants, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drop_disc_gates_set(uint8_t link_idx, bdmf_boolean linkDiscGates_en)
{
    uint32_t reg_drop_disc_gates=0;

#ifdef VALIDATE_PARMS
    if((linkDiscGates_en >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, DROP_DISC_GATES, reg_drop_disc_gates);

    RDP_FIELD_SET(reg_drop_disc_gates, (link_idx % 32) *1, 0x1, linkDiscGates_en);

    RU_REG_WRITE(0, EPN, DROP_DISC_GATES, reg_drop_disc_gates);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drop_disc_gates_get(uint8_t link_idx, bdmf_boolean *linkDiscGates_en)
{
    uint32_t reg_drop_disc_gates=0;

#ifdef VALIDATE_PARMS
    if(!linkDiscGates_en)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DROP_DISC_GATES, reg_drop_disc_gates);

    *linkDiscGates_en = RDP_FIELD_GET(reg_drop_disc_gates, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dis_fcs_chk_set(uint8_t link_idx, bdmf_boolean disableFcsChk)
{
    uint32_t reg_dis_fcs_chk=0;

#ifdef VALIDATE_PARMS
    if((disableFcsChk >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, DIS_FCS_CHK, reg_dis_fcs_chk);

    RDP_FIELD_SET(reg_dis_fcs_chk, (link_idx % 32) *1, 0x1, disableFcsChk);

    RU_REG_WRITE(0, EPN, DIS_FCS_CHK, reg_dis_fcs_chk);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dis_fcs_chk_get(uint8_t link_idx, bdmf_boolean *disableFcsChk)
{
    uint32_t reg_dis_fcs_chk=0;

#ifdef VALIDATE_PARMS
    if(!disableFcsChk)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DIS_FCS_CHK, reg_dis_fcs_chk);

    *disableFcsChk = RDP_FIELD_GET(reg_dis_fcs_chk, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_pass_gates_set(uint8_t link_idx, bdmf_boolean passGates)
{
    uint32_t reg_pass_gates=0;

#ifdef VALIDATE_PARMS
    if((passGates >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, PASS_GATES, reg_pass_gates);

    RDP_FIELD_SET(reg_pass_gates, (link_idx % 32) *1, 0x1, passGates);

    RU_REG_WRITE(0, EPN, PASS_GATES, reg_pass_gates);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_pass_gates_get(uint8_t link_idx, bdmf_boolean *passGates)
{
    uint32_t reg_pass_gates=0;

#ifdef VALIDATE_PARMS
    if(!passGates)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, PASS_GATES, reg_pass_gates);

    *passGates = RDP_FIELD_GET(reg_pass_gates, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_cfg_misalgn_fb_set(uint8_t link_idx, bdmf_boolean cfgMisalignFeedback)
{
    uint32_t reg_cfg_misalgn_fb=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, CFG_MISALGN_FB, reg_cfg_misalgn_fb);

    RDP_FIELD_SET(reg_cfg_misalgn_fb, (link_idx % 32) *1, 0x1, cfgMisalignFeedback);

    RU_REG_WRITE(0, EPN, CFG_MISALGN_FB, reg_cfg_misalgn_fb);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_cfg_misalgn_fb_get(uint8_t link_idx, bdmf_boolean *cfgMisalignFeedback)
{
    uint32_t reg_cfg_misalgn_fb=0;

#ifdef VALIDATE_PARMS
    if(!cfgMisalignFeedback)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, CFG_MISALGN_FB, reg_cfg_misalgn_fb);

    *cfgMisalignFeedback = RDP_FIELD_GET(reg_cfg_misalgn_fb, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_discovery_filter_set(uint16_t prvdiscinfomask, uint16_t prvdiscinfovalue)
{
    uint32_t reg_discovery_filter=0;

#ifdef VALIDATE_PARMS
#endif

    reg_discovery_filter = RU_FIELD_SET(0, EPN, DISCOVERY_FILTER, PRVDISCINFOMASK, reg_discovery_filter, prvdiscinfomask);
    reg_discovery_filter = RU_FIELD_SET(0, EPN, DISCOVERY_FILTER, PRVDISCINFOVALUE, reg_discovery_filter, prvdiscinfovalue);

    RU_REG_WRITE(0, EPN, DISCOVERY_FILTER, reg_discovery_filter);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_discovery_filter_get(uint16_t *prvdiscinfomask, uint16_t *prvdiscinfovalue)
{
    uint32_t reg_discovery_filter=0;

#ifdef VALIDATE_PARMS
    if(!prvdiscinfomask || !prvdiscinfovalue)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DISCOVERY_FILTER, reg_discovery_filter);

    *prvdiscinfomask = RU_FIELD_GET(0, EPN, DISCOVERY_FILTER, PRVDISCINFOMASK, reg_discovery_filter);
    *prvdiscinfovalue = RU_FIELD_GET(0, EPN, DISCOVERY_FILTER, PRVDISCINFOVALUE, reg_discovery_filter);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_minimum_grant_setup_set(uint16_t cfgmingrantsetup)
{
    uint32_t reg_minimum_grant_setup=0;

#ifdef VALIDATE_PARMS
#endif

    reg_minimum_grant_setup = RU_FIELD_SET(0, EPN, MINIMUM_GRANT_SETUP, CFGMINGRANTSETUP, reg_minimum_grant_setup, cfgmingrantsetup);

    RU_REG_WRITE(0, EPN, MINIMUM_GRANT_SETUP, reg_minimum_grant_setup);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_minimum_grant_setup_get(uint16_t *cfgmingrantsetup)
{
    uint32_t reg_minimum_grant_setup=0;

#ifdef VALIDATE_PARMS
    if(!cfgmingrantsetup)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MINIMUM_GRANT_SETUP, reg_minimum_grant_setup);

    *cfgmingrantsetup = RU_FIELD_GET(0, EPN, MINIMUM_GRANT_SETUP, CFGMINGRANTSETUP, reg_minimum_grant_setup);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_gnt_fifo_set(uint8_t link_idx, bdmf_boolean rstGntFifo)
{
    uint32_t reg_reset_gnt_fifo=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, RESET_GNT_FIFO, reg_reset_gnt_fifo);

    RDP_FIELD_SET(reg_reset_gnt_fifo, (link_idx % 32) *1, 0x1, rstGntFifo);

    RU_REG_WRITE(0, EPN, RESET_GNT_FIFO, reg_reset_gnt_fifo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_gnt_fifo_get(uint8_t link_idx, bdmf_boolean *rstGntFifo)
{
    uint32_t reg_reset_gnt_fifo=0;

#ifdef VALIDATE_PARMS
    if(!rstGntFifo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RESET_GNT_FIFO, reg_reset_gnt_fifo);

    *rstGntFifo = RDP_FIELD_GET(reg_reset_gnt_fifo, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_l1_accumulator_set(uint16_t cfgl1sclracum)
{
    uint32_t reg_reset_l1_accumulator=0;

#ifdef VALIDATE_PARMS
#endif

    reg_reset_l1_accumulator = RU_FIELD_SET(0, EPN, RESET_L1_ACCUMULATOR, CFGL1SCLRACUM, reg_reset_l1_accumulator, cfgl1sclracum);

    RU_REG_WRITE(0, EPN, RESET_L1_ACCUMULATOR, reg_reset_l1_accumulator);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_l1_accumulator_get(uint16_t *cfgl1sclracum)
{
    uint32_t reg_reset_l1_accumulator=0;

#ifdef VALIDATE_PARMS
    if(!cfgl1sclracum)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RESET_L1_ACCUMULATOR, reg_reset_l1_accumulator);

    *cfgl1sclracum = RU_FIELD_GET(0, EPN, RESET_L1_ACCUMULATOR, CFGL1SCLRACUM, reg_reset_l1_accumulator);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_accumulator_sel_set(uint8_t cfgl1suvasizesel, uint8_t cfgl1ssvasizesel)
{
    uint32_t reg_l1_accumulator_sel=0;

#ifdef VALIDATE_PARMS
    if((cfgl1suvasizesel >= _5BITS_MAX_VAL_) ||
       (cfgl1ssvasizesel >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_l1_accumulator_sel = RU_FIELD_SET(0, EPN, L1_ACCUMULATOR_SEL, CFGL1SUVASIZESEL, reg_l1_accumulator_sel, cfgl1suvasizesel);
    reg_l1_accumulator_sel = RU_FIELD_SET(0, EPN, L1_ACCUMULATOR_SEL, CFGL1SSVASIZESEL, reg_l1_accumulator_sel, cfgl1ssvasizesel);

    RU_REG_WRITE(0, EPN, L1_ACCUMULATOR_SEL, reg_l1_accumulator_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_accumulator_sel_get(uint8_t *cfgl1suvasizesel, uint8_t *cfgl1ssvasizesel)
{
    uint32_t reg_l1_accumulator_sel=0;

#ifdef VALIDATE_PARMS
    if(!cfgl1suvasizesel || !cfgl1ssvasizesel)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L1_ACCUMULATOR_SEL, reg_l1_accumulator_sel);

    *cfgl1suvasizesel = RU_FIELD_GET(0, EPN, L1_ACCUMULATOR_SEL, CFGL1SUVASIZESEL, reg_l1_accumulator_sel);
    *cfgl1ssvasizesel = RU_FIELD_GET(0, EPN, L1_ACCUMULATOR_SEL, CFGL1SSVASIZESEL, reg_l1_accumulator_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_sva_bytes_get(uint32_t *l1ssvasize)
{
    uint32_t reg_l1_sva_bytes=0;

#ifdef VALIDATE_PARMS
    if(!l1ssvasize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L1_SVA_BYTES, reg_l1_sva_bytes);

    *l1ssvasize = RU_FIELD_GET(0, EPN, L1_SVA_BYTES, L1SSVASIZE, reg_l1_sva_bytes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_uva_bytes_get(uint32_t *l1suvasize)
{
    uint32_t reg_l1_uva_bytes=0;

#ifdef VALIDATE_PARMS
    if(!l1suvasize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L1_UVA_BYTES, reg_l1_uva_bytes);

    *l1suvasize = RU_FIELD_GET(0, EPN, L1_UVA_BYTES, L1SUVASIZE, reg_l1_uva_bytes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_sva_overflow_get(uint16_t *l1ssvaoverflow)
{
    uint32_t reg_l1_sva_overflow=0;

#ifdef VALIDATE_PARMS
    if(!l1ssvaoverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L1_SVA_OVERFLOW, reg_l1_sva_overflow);

    *l1ssvaoverflow = RU_FIELD_GET(0, EPN, L1_SVA_OVERFLOW, L1SSVAOVERFLOW, reg_l1_sva_overflow);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l1_uva_overflow_get(uint16_t *l1suvaoverflow)
{
    uint32_t reg_l1_uva_overflow=0;

#ifdef VALIDATE_PARMS
    if(!l1suvaoverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L1_UVA_OVERFLOW, reg_l1_uva_overflow);

    *l1suvaoverflow = RU_FIELD_GET(0, EPN, L1_UVA_OVERFLOW, L1SUVAOVERFLOW, reg_l1_uva_overflow);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_rpt_pri_set(const epn_reset_rpt_pri *reset_rpt_pri)
{
    uint32_t reg_reset_rpt_pri=0;

#ifdef VALIDATE_PARMS
    if(!reset_rpt_pri)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((reset_rpt_pri->nullrptpri15 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri14 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri13 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri12 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri11 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri10 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri9 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri8 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri7 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri6 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri5 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri4 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri3 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri2 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri1 >= _1BITS_MAX_VAL_) ||
       (reset_rpt_pri->nullrptpri0 >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI15, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri15);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI14, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri14);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI13, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri13);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI12, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri12);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI11, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri11);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI10, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri10);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI9, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri9);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI8, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri8);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI7, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri7);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI6, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri6);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI5, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri5);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI4, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri4);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI3, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri3);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI2, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri2);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI1, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri1);
    reg_reset_rpt_pri = RU_FIELD_SET(0, EPN, RESET_RPT_PRI, NULLRPTPRI0, reg_reset_rpt_pri, reset_rpt_pri->nullrptpri0);

    RU_REG_WRITE(0, EPN, RESET_RPT_PRI, reg_reset_rpt_pri);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_rpt_pri_get(epn_reset_rpt_pri *reset_rpt_pri)
{
    uint32_t reg_reset_rpt_pri=0;

#ifdef VALIDATE_PARMS
    if(!reset_rpt_pri)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RESET_RPT_PRI, reg_reset_rpt_pri);

    reset_rpt_pri->nullrptpri15 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI15, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri14 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI14, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri13 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI13, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri12 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI12, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri11 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI11, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri10 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI10, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri9 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI9, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri8 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI8, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri7 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI7, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri6 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI6, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri5 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI5, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri4 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI4, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri3 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI3, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri2 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI2, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri1 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI1, reg_reset_rpt_pri);
    reset_rpt_pri->nullrptpri0 = RU_FIELD_GET(0, EPN, RESET_RPT_PRI, NULLRPTPRI0, reg_reset_rpt_pri);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_l2_rpt_fifo_set(uint8_t link_idx, bdmf_boolean cfgL2SClrQue)
{
    uint32_t reg_reset_l2_rpt_fifo=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, RESET_L2_RPT_FIFO, reg_reset_l2_rpt_fifo);

    RDP_FIELD_SET(reg_reset_l2_rpt_fifo, (link_idx % 32) *1, 0x1, cfgL2SClrQue);

    RU_REG_WRITE(0, EPN, RESET_L2_RPT_FIFO, reg_reset_l2_rpt_fifo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_reset_l2_rpt_fifo_get(uint8_t link_idx, bdmf_boolean *cfgL2SClrQue)
{
    uint32_t reg_reset_l2_rpt_fifo=0;

#ifdef VALIDATE_PARMS
    if(!cfgL2SClrQue)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RESET_L2_RPT_FIFO, reg_reset_l2_rpt_fifo);

    *cfgL2SClrQue = RDP_FIELD_GET(reg_reset_l2_rpt_fifo, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_upstream_set(uint8_t link_idx, bdmf_boolean cfgEnableUpstream)
{
    uint32_t reg_enable_upstream=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, ENABLE_UPSTREAM, reg_enable_upstream);

    RDP_FIELD_SET(reg_enable_upstream, (link_idx % 32) *1, 0x1, cfgEnableUpstream);

    RU_REG_WRITE(0, EPN, ENABLE_UPSTREAM, reg_enable_upstream);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_upstream_get(uint8_t link_idx, bdmf_boolean *cfgEnableUpstream)
{
    uint32_t reg_enable_upstream=0;

#ifdef VALIDATE_PARMS
    if(!cfgEnableUpstream)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ENABLE_UPSTREAM, reg_enable_upstream);

    *cfgEnableUpstream = RDP_FIELD_GET(reg_enable_upstream, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_upstream_fb_get(uint8_t link_idx, bdmf_boolean *cfgEnableUpstreamFeedBack)
{
    uint32_t reg_enable_upstream_fb=0;

#ifdef VALIDATE_PARMS
    if(!cfgEnableUpstreamFeedBack)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ENABLE_UPSTREAM_FB, reg_enable_upstream_fb);

    *cfgEnableUpstreamFeedBack = RDP_FIELD_GET(reg_enable_upstream_fb, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_upstream_fec_set(uint8_t link_idx, bdmf_boolean upstreamFecEn)
{
    uint32_t reg_enable_upstream_fec=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, ENABLE_UPSTREAM_FEC, reg_enable_upstream_fec);

    RDP_FIELD_SET(reg_enable_upstream_fec, (link_idx % 32) *1, 0x1, upstreamFecEn);

    RU_REG_WRITE(0, EPN, ENABLE_UPSTREAM_FEC, reg_enable_upstream_fec);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_enable_upstream_fec_get(uint8_t link_idx, bdmf_boolean *upstreamFecEn)
{
    uint32_t reg_enable_upstream_fec=0;

#ifdef VALIDATE_PARMS
    if(!upstreamFecEn)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ENABLE_UPSTREAM_FEC, reg_enable_upstream_fec);

    *upstreamFecEn = RDP_FIELD_GET(reg_enable_upstream_fec, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_report_byte_length_set(uint8_t prvrptbytelen)
{
    uint32_t reg_report_byte_length=0;

#ifdef VALIDATE_PARMS
#endif

    reg_report_byte_length = RU_FIELD_SET(0, EPN, REPORT_BYTE_LENGTH, PRVRPTBYTELEN, reg_report_byte_length, prvrptbytelen);

    RU_REG_WRITE(0, EPN, REPORT_BYTE_LENGTH, reg_report_byte_length);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_report_byte_length_get(uint8_t *prvrptbytelen)
{
    uint32_t reg_report_byte_length=0;

#ifdef VALIDATE_PARMS
    if(!prvrptbytelen)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, REPORT_BYTE_LENGTH, reg_report_byte_length);

    *prvrptbytelen = RU_FIELD_GET(0, EPN, REPORT_BYTE_LENGTH, PRVRPTBYTELEN, reg_report_byte_length);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_main_int_status_set(const epn_main_int_status *main_int_status)
{
    uint32_t reg_main_int_status=0;

#ifdef VALIDATE_PARMS
    if(!main_int_status)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((main_int_status->intbbhupfrabort >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcol2sburstcapoverflowpres >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcoemptyrpt >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcodrxerrabortpres >= _1BITS_MAX_VAL_) ||
       (main_int_status->intl2sfifooverrun >= _1BITS_MAX_VAL_) ||
       (main_int_status->intco1588tsint >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcorptpres >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntpres >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcodelstalegnt >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntnonpoll >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntmisalign >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcognttoofar >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntinterval >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntdiscovery >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntmissabort >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcogntfullabort >= _1BITS_MAX_VAL_) ||
       (main_int_status->intbadupfrlen >= _1BITS_MAX_VAL_) ||
       (main_int_status->intuptardypacket >= _1BITS_MAX_VAL_) ||
       (main_int_status->intuprptfrxmt >= _1BITS_MAX_VAL_) ||
       (main_int_status->intbififooverrun >= _1BITS_MAX_VAL_) ||
       (main_int_status->intburstgnttoobig >= _1BITS_MAX_VAL_) ||
       (main_int_status->intwrgnttoobig >= _1BITS_MAX_VAL_) ||
       (main_int_status->intrcvgnttoobig >= _1BITS_MAX_VAL_) ||
       (main_int_status->intdnstatsoverrun >= _1BITS_MAX_VAL_) ||
       (main_int_status->intupstatsoverrun >= _1BITS_MAX_VAL_) ||
       (main_int_status->intdnoutoforder >= _1BITS_MAX_VAL_) ||
       (main_int_status->inttruantbbhhalt >= _1BITS_MAX_VAL_) ||
       (main_int_status->intupinvldgntlen >= _1BITS_MAX_VAL_) ||
       (main_int_status->intcobbhupsfault >= _1BITS_MAX_VAL_) ||
       (main_int_status->intdntimeinsync >= _1BITS_MAX_VAL_) ||
       (main_int_status->intdntimenotinsync >= _1BITS_MAX_VAL_) ||
       (main_int_status->intdportrdy >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTBBHUPFRABORT, reg_main_int_status, main_int_status->intbbhupfrabort);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOL2SBURSTCAPOVERFLOWPRES, reg_main_int_status, main_int_status->intcol2sburstcapoverflowpres);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOEMPTYRPT, reg_main_int_status, main_int_status->intcoemptyrpt);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCODRXERRABORTPRES, reg_main_int_status, main_int_status->intcodrxerrabortpres);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTL2SFIFOOVERRUN, reg_main_int_status, main_int_status->intl2sfifooverrun);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCO1588TSINT, reg_main_int_status, main_int_status->intco1588tsint);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCORPTPRES, reg_main_int_status, main_int_status->intcorptpres);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTPRES, reg_main_int_status, main_int_status->intcogntpres);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCODELSTALEGNT, reg_main_int_status, main_int_status->intcodelstalegnt);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTNONPOLL, reg_main_int_status, main_int_status->intcogntnonpoll);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTMISALIGN, reg_main_int_status, main_int_status->intcogntmisalign);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTTOOFAR, reg_main_int_status, main_int_status->intcognttoofar);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTINTERVAL, reg_main_int_status, main_int_status->intcogntinterval);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTDISCOVERY, reg_main_int_status, main_int_status->intcogntdiscovery);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTMISSABORT, reg_main_int_status, main_int_status->intcogntmissabort);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOGNTFULLABORT, reg_main_int_status, main_int_status->intcogntfullabort);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTBADUPFRLEN, reg_main_int_status, main_int_status->intbadupfrlen);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTUPTARDYPACKET, reg_main_int_status, main_int_status->intuptardypacket);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTUPRPTFRXMT, reg_main_int_status, main_int_status->intuprptfrxmt);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTBIFIFOOVERRUN, reg_main_int_status, main_int_status->intbififooverrun);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTBURSTGNTTOOBIG, reg_main_int_status, main_int_status->intburstgnttoobig);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTWRGNTTOOBIG, reg_main_int_status, main_int_status->intwrgnttoobig);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTRCVGNTTOOBIG, reg_main_int_status, main_int_status->intrcvgnttoobig);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTDNSTATSOVERRUN, reg_main_int_status, main_int_status->intdnstatsoverrun);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTUPSTATSOVERRUN, reg_main_int_status, main_int_status->intupstatsoverrun);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTDNOUTOFORDER, reg_main_int_status, main_int_status->intdnoutoforder);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTTRUANTBBHHALT, reg_main_int_status, main_int_status->inttruantbbhhalt);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTUPINVLDGNTLEN, reg_main_int_status, main_int_status->intupinvldgntlen);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTCOBBHUPSFAULT, reg_main_int_status, main_int_status->intcobbhupsfault);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTDNTIMEINSYNC, reg_main_int_status, main_int_status->intdntimeinsync);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTDNTIMENOTINSYNC, reg_main_int_status, main_int_status->intdntimenotinsync);
    reg_main_int_status = RU_FIELD_SET(0, EPN, MAIN_INT_STATUS, INTDPORTRDY, reg_main_int_status, main_int_status->intdportrdy);

    RU_REG_WRITE(0, EPN, MAIN_INT_STATUS, reg_main_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_main_int_status_get(epn_main_int_status *main_int_status)
{
    uint32_t reg_main_int_status=0;

#ifdef VALIDATE_PARMS
    if(!main_int_status)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MAIN_INT_STATUS, reg_main_int_status);

    main_int_status->intbbhupfrabort = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTBBHUPFRABORT, reg_main_int_status);
    main_int_status->intcol2sburstcapoverflowpres = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOL2SBURSTCAPOVERFLOWPRES, reg_main_int_status);
    main_int_status->intcoemptyrpt = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOEMPTYRPT, reg_main_int_status);
    main_int_status->intcodrxerrabortpres = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCODRXERRABORTPRES, reg_main_int_status);
    main_int_status->intl2sfifooverrun = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTL2SFIFOOVERRUN, reg_main_int_status);
    main_int_status->intco1588tsint = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCO1588TSINT, reg_main_int_status);
    main_int_status->intcorptpres = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCORPTPRES, reg_main_int_status);
    main_int_status->intcogntpres = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTPRES, reg_main_int_status);
    main_int_status->intcodelstalegnt = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCODELSTALEGNT, reg_main_int_status);
    main_int_status->intcogntnonpoll = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTNONPOLL, reg_main_int_status);
    main_int_status->intcogntmisalign = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTMISALIGN, reg_main_int_status);
    main_int_status->intcognttoofar = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTTOOFAR, reg_main_int_status);
    main_int_status->intcogntinterval = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTINTERVAL, reg_main_int_status);
    main_int_status->intcogntdiscovery = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTDISCOVERY, reg_main_int_status);
    main_int_status->intcogntmissabort = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTMISSABORT, reg_main_int_status);
    main_int_status->intcogntfullabort = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOGNTFULLABORT, reg_main_int_status);
    main_int_status->intbadupfrlen = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTBADUPFRLEN, reg_main_int_status);
    main_int_status->intuptardypacket = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTUPTARDYPACKET, reg_main_int_status);
    main_int_status->intuprptfrxmt = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTUPRPTFRXMT, reg_main_int_status);
    main_int_status->intbififooverrun = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTBIFIFOOVERRUN, reg_main_int_status);
    main_int_status->intburstgnttoobig = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTBURSTGNTTOOBIG, reg_main_int_status);
    main_int_status->intwrgnttoobig = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTWRGNTTOOBIG, reg_main_int_status);
    main_int_status->intrcvgnttoobig = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTRCVGNTTOOBIG, reg_main_int_status);
    main_int_status->intdnstatsoverrun = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTDNSTATSOVERRUN, reg_main_int_status);
    main_int_status->intupstatsoverrun = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTUPSTATSOVERRUN, reg_main_int_status);
    main_int_status->intdnoutoforder = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTDNOUTOFORDER, reg_main_int_status);
    main_int_status->inttruantbbhhalt = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTTRUANTBBHHALT, reg_main_int_status);
    main_int_status->intupinvldgntlen = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTUPINVLDGNTLEN, reg_main_int_status);
    main_int_status->intcobbhupsfault = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTCOBBHUPSFAULT, reg_main_int_status);
    main_int_status->intdntimeinsync = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTDNTIMEINSYNC, reg_main_int_status);
    main_int_status->intdntimenotinsync = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTDNTIMENOTINSYNC, reg_main_int_status);
    main_int_status->intdportrdy = RU_FIELD_GET(0, EPN, MAIN_INT_STATUS, INTDPORTRDY, reg_main_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_full_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntFullAbort)
{
    uint32_t reg_gnt_full_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntFullAbort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_full_int_status, (link_idx % 32) *1, 0x1, intDnGntFullAbort);

    RU_REG_WRITE(0, EPN, GNT_FULL_INT_STATUS, reg_gnt_full_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_full_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntFullAbort)
{
    uint32_t reg_gnt_full_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntFullAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FULL_INT_STATUS, reg_gnt_full_int_status);

    *intDnGntFullAbort = RDP_FIELD_GET(reg_gnt_full_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_full_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDnGntFullAbort)
{
    uint32_t reg_gnt_full_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDnGntFullAbort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FULL_INT_MASK, reg_gnt_full_int_mask);

    RDP_FIELD_SET(reg_gnt_full_int_mask, (link_idx % 32) *1, 0x1, maskIntDnGntFullAbort);

    RU_REG_WRITE(0, EPN, GNT_FULL_INT_MASK, reg_gnt_full_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_full_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDnGntFullAbort)
{
    uint32_t reg_gnt_full_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDnGntFullAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FULL_INT_MASK, reg_gnt_full_int_mask);

    *maskIntDnGntFullAbort = RDP_FIELD_GET(reg_gnt_full_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_miss_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntMissAbort)
{
    uint32_t reg_gnt_miss_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntMissAbort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_miss_int_status, (link_idx % 32) *1, 0x1, intDnGntMissAbort);

    RU_REG_WRITE(0, EPN, GNT_MISS_INT_STATUS, reg_gnt_miss_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_miss_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntMissAbort)
{
    uint32_t reg_gnt_miss_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntMissAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISS_INT_STATUS, reg_gnt_miss_int_status);

    *intDnGntMissAbort = RDP_FIELD_GET(reg_gnt_miss_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_miss_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDnGntMissAbort)
{
    uint32_t reg_gnt_miss_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDnGntMissAbort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISS_INT_MASK, reg_gnt_miss_int_mask);

    RDP_FIELD_SET(reg_gnt_miss_int_mask, (link_idx % 32) *1, 0x1, maskIntDnGntMissAbort);

    RU_REG_WRITE(0, EPN, GNT_MISS_INT_MASK, reg_gnt_miss_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_miss_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDnGntMissAbort)
{
    uint32_t reg_gnt_miss_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDnGntMissAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISS_INT_MASK, reg_gnt_miss_int_mask);

    *maskIntDnGntMissAbort = RDP_FIELD_GET(reg_gnt_miss_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_rx_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntDiscovery)
{
    uint32_t reg_disc_rx_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntDiscovery >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_disc_rx_int_status, (link_idx % 32) *1, 0x1, intDnGntDiscovery);

    RU_REG_WRITE(0, EPN, DISC_RX_INT_STATUS, reg_disc_rx_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_rx_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntDiscovery)
{
    uint32_t reg_disc_rx_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntDiscovery)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DISC_RX_INT_STATUS, reg_disc_rx_int_status);

    *intDnGntDiscovery = RDP_FIELD_GET(reg_disc_rx_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_rx_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDnGntDiscovery)
{
    uint32_t reg_disc_rx_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDnGntDiscovery >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, DISC_RX_INT_MASK, reg_disc_rx_int_mask);

    RDP_FIELD_SET(reg_disc_rx_int_mask, (link_idx % 32) *1, 0x1, maskIntDnGntDiscovery);

    RU_REG_WRITE(0, EPN, DISC_RX_INT_MASK, reg_disc_rx_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_rx_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDnGntDiscovery)
{
    uint32_t reg_disc_rx_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDnGntDiscovery)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DISC_RX_INT_MASK, reg_disc_rx_int_mask);

    *maskIntDnGntDiscovery = RDP_FIELD_GET(reg_disc_rx_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_intv_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntInterval)
{
    uint32_t reg_gnt_intv_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntInterval >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_intv_int_status, (link_idx % 32) *1, 0x1, intDnGntInterval);

    RU_REG_WRITE(0, EPN, GNT_INTV_INT_STATUS, reg_gnt_intv_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_intv_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntInterval)
{
    uint32_t reg_gnt_intv_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntInterval)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_INTV_INT_STATUS, reg_gnt_intv_int_status);

    *intDnGntInterval = RDP_FIELD_GET(reg_gnt_intv_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_intv_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDnGntInterval)
{
    uint32_t reg_gnt_intv_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDnGntInterval >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_INTV_INT_MASK, reg_gnt_intv_int_mask);

    RDP_FIELD_SET(reg_gnt_intv_int_mask, (link_idx % 32) *1, 0x1, maskIntDnGntInterval);

    RU_REG_WRITE(0, EPN, GNT_INTV_INT_MASK, reg_gnt_intv_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_intv_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDnGntInterval)
{
    uint32_t reg_gnt_intv_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDnGntInterval)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_INTV_INT_MASK, reg_gnt_intv_int_mask);

    *maskIntDnGntInterval = RDP_FIELD_GET(reg_gnt_intv_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_far_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntTooFar)
{
    uint32_t reg_gnt_far_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntTooFar >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_far_int_status, (link_idx % 32) *1, 0x1, intDnGntTooFar);

    RU_REG_WRITE(0, EPN, GNT_FAR_INT_STATUS, reg_gnt_far_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_far_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntTooFar)
{
    uint32_t reg_gnt_far_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntTooFar)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FAR_INT_STATUS, reg_gnt_far_int_status);

    *intDnGntTooFar = RDP_FIELD_GET(reg_gnt_far_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_far_int_mask_set(uint8_t link_idx, bdmf_boolean maskDnGntTooFar)
{
    uint32_t reg_gnt_far_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskDnGntTooFar >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FAR_INT_MASK, reg_gnt_far_int_mask);

    RDP_FIELD_SET(reg_gnt_far_int_mask, (link_idx % 32) *1, 0x1, maskDnGntTooFar);

    RU_REG_WRITE(0, EPN, GNT_FAR_INT_MASK, reg_gnt_far_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_far_int_mask_get(uint8_t link_idx, bdmf_boolean *maskDnGntTooFar)
{
    uint32_t reg_gnt_far_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskDnGntTooFar)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_FAR_INT_MASK, reg_gnt_far_int_mask);

    *maskDnGntTooFar = RDP_FIELD_GET(reg_gnt_far_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_misalgn_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntMisalign)
{
    uint32_t reg_gnt_misalgn_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntMisalign >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_misalgn_int_status, (link_idx % 32) *1, 0x1, intDnGntMisalign);

    RU_REG_WRITE(0, EPN, GNT_MISALGN_INT_STATUS, reg_gnt_misalgn_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_misalgn_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntMisalign)
{
    uint32_t reg_gnt_misalgn_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntMisalign)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISALGN_INT_STATUS, reg_gnt_misalgn_int_status);

    *intDnGntMisalign = RDP_FIELD_GET(reg_gnt_misalgn_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_misalgn_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDnGntMisalign)
{
    uint32_t reg_gnt_misalgn_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDnGntMisalign >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISALGN_INT_MASK, reg_gnt_misalgn_int_mask);

    RDP_FIELD_SET(reg_gnt_misalgn_int_mask, (link_idx % 32) *1, 0x1, maskIntDnGntMisalign);

    RU_REG_WRITE(0, EPN, GNT_MISALGN_INT_MASK, reg_gnt_misalgn_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_misalgn_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDnGntMisalign)
{
    uint32_t reg_gnt_misalgn_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDnGntMisalign)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_MISALGN_INT_MASK, reg_gnt_misalgn_int_mask);

    *maskIntDnGntMisalign = RDP_FIELD_GET(reg_gnt_misalgn_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_np_gnt_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntNonPoll)
{
    uint32_t reg_np_gnt_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntNonPoll >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_np_gnt_int_status, (link_idx % 32) *1, 0x1, intDnGntNonPoll);

    RU_REG_WRITE(0, EPN, NP_GNT_INT_STATUS, reg_np_gnt_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_np_gnt_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntNonPoll)
{
    uint32_t reg_np_gnt_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntNonPoll)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, NP_GNT_INT_STATUS, reg_np_gnt_int_status);

    *intDnGntNonPoll = RDP_FIELD_GET(reg_np_gnt_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_np_gnt_int_mask_set(uint8_t link_idx, bdmf_boolean maskDnGntNonPoll)
{
    uint32_t reg_np_gnt_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskDnGntNonPoll >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, NP_GNT_INT_MASK, reg_np_gnt_int_mask);

    RDP_FIELD_SET(reg_np_gnt_int_mask, (link_idx % 32) *1, 0x1, maskDnGntNonPoll);

    RU_REG_WRITE(0, EPN, NP_GNT_INT_MASK, reg_np_gnt_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_np_gnt_int_mask_get(uint8_t link_idx, bdmf_boolean *maskDnGntNonPoll)
{
    uint32_t reg_np_gnt_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskDnGntNonPoll)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, NP_GNT_INT_MASK, reg_np_gnt_int_mask);

    *maskDnGntNonPoll = RDP_FIELD_GET(reg_np_gnt_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_del_stale_int_status_set(uint8_t link_idx, bdmf_boolean intDelStaleGnt)
{
    uint32_t reg_del_stale_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDelStaleGnt >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_del_stale_int_status, (link_idx % 32) *1, 0x1, intDelStaleGnt);

    RU_REG_WRITE(0, EPN, DEL_STALE_INT_STATUS, reg_del_stale_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_del_stale_int_status_get(uint8_t link_idx, bdmf_boolean *intDelStaleGnt)
{
    uint32_t reg_del_stale_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDelStaleGnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DEL_STALE_INT_STATUS, reg_del_stale_int_status);

    *intDelStaleGnt = RDP_FIELD_GET(reg_del_stale_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_del_stale_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDelStaleGnt)
{
    uint32_t reg_del_stale_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskIntDelStaleGnt >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, DEL_STALE_INT_MASK, reg_del_stale_int_mask);

    RDP_FIELD_SET(reg_del_stale_int_mask, (link_idx % 32) *1, 0x1, maskIntDelStaleGnt);

    RU_REG_WRITE(0, EPN, DEL_STALE_INT_MASK, reg_del_stale_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_del_stale_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDelStaleGnt)
{
    uint32_t reg_del_stale_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDelStaleGnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DEL_STALE_INT_MASK, reg_del_stale_int_mask);

    *maskIntDelStaleGnt = RDP_FIELD_GET(reg_del_stale_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_pres_int_status_set(uint8_t link_idx, bdmf_boolean intDnGntRdy)
{
    uint32_t reg_gnt_pres_int_status=0;

#ifdef VALIDATE_PARMS
    if((intDnGntRdy >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif


    RDP_FIELD_SET(reg_gnt_pres_int_status, (link_idx % 32) *1, 0x1, intDnGntRdy);

    RU_REG_WRITE(0, EPN, GNT_PRES_INT_STATUS, reg_gnt_pres_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_pres_int_status_get(uint8_t link_idx, bdmf_boolean *intDnGntRdy)
{
    uint32_t reg_gnt_pres_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDnGntRdy)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_PRES_INT_STATUS, reg_gnt_pres_int_status);

    *intDnGntRdy = RDP_FIELD_GET(reg_gnt_pres_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_pres_int_mask_set(uint8_t link_idx, bdmf_boolean maskDnGntRdy)
{
    uint32_t reg_gnt_pres_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskDnGntRdy >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(0, EPN, GNT_PRES_INT_MASK, reg_gnt_pres_int_mask);

    RDP_FIELD_SET(reg_gnt_pres_int_mask, (link_idx % 32) *1, 0x1, maskDnGntRdy);

    RU_REG_WRITE(0, EPN, GNT_PRES_INT_MASK, reg_gnt_pres_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_pres_int_mask_get(uint8_t link_idx, bdmf_boolean *maskDnGntRdy)
{
    uint32_t reg_gnt_pres_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskDnGntRdy)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_PRES_INT_MASK, reg_gnt_pres_int_mask);

    *maskDnGntRdy = RDP_FIELD_GET(reg_gnt_pres_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_rpt_pres_int_status_set(uint8_t link_idx, bdmf_boolean intUpRptFifo)
{
    uint32_t reg_rpt_pres_int_status=0;

#ifdef VALIDATE_PARMS
#endif


    RDP_FIELD_SET(reg_rpt_pres_int_status, (link_idx % 32) *1, 0x1, intUpRptFifo);

    RU_REG_WRITE(0, EPN, RPT_PRES_INT_STATUS, reg_rpt_pres_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_rpt_pres_int_status_get(uint8_t link_idx, bdmf_boolean *intUpRptFifo)
{
    uint32_t reg_rpt_pres_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intUpRptFifo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RPT_PRES_INT_STATUS, reg_rpt_pres_int_status);

    *intUpRptFifo = RDP_FIELD_GET(reg_rpt_pres_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_rpt_pres_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntUpRptFifo)
{
    uint32_t reg_rpt_pres_int_mask=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, RPT_PRES_INT_MASK, reg_rpt_pres_int_mask);

    RDP_FIELD_SET(reg_rpt_pres_int_mask, (link_idx % 32) *1, 0x1, maskIntUpRptFifo);

    RU_REG_WRITE(0, EPN, RPT_PRES_INT_MASK, reg_rpt_pres_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_rpt_pres_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntUpRptFifo)
{
    uint32_t reg_rpt_pres_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntUpRptFifo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, RPT_PRES_INT_MASK, reg_rpt_pres_int_mask);

    *maskIntUpRptFifo = RDP_FIELD_GET(reg_rpt_pres_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drx_abort_int_status_set(uint8_t link_idx, bdmf_boolean intDrxErrAbort)
{
    uint32_t reg_drx_abort_int_status=0;

#ifdef VALIDATE_PARMS
#endif


    RDP_FIELD_SET(reg_drx_abort_int_status, (link_idx % 32) *1, 0x1, intDrxErrAbort);

    RU_REG_WRITE(0, EPN, DRX_ABORT_INT_STATUS, reg_drx_abort_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drx_abort_int_status_get(uint8_t link_idx, bdmf_boolean *intDrxErrAbort)
{
    uint32_t reg_drx_abort_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intDrxErrAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DRX_ABORT_INT_STATUS, reg_drx_abort_int_status);

    *intDrxErrAbort = RDP_FIELD_GET(reg_drx_abort_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drx_abort_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntDrxErrAbort)
{
    uint32_t reg_drx_abort_int_mask=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, DRX_ABORT_INT_MASK, reg_drx_abort_int_mask);

    RDP_FIELD_SET(reg_drx_abort_int_mask, (link_idx % 32) *1, 0x1, maskIntDrxErrAbort);

    RU_REG_WRITE(0, EPN, DRX_ABORT_INT_MASK, reg_drx_abort_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_drx_abort_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntDrxErrAbort)
{
    uint32_t reg_drx_abort_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntDrxErrAbort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DRX_ABORT_INT_MASK, reg_drx_abort_int_mask);

    *maskIntDrxErrAbort = RDP_FIELD_GET(reg_drx_abort_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_empty_rpt_int_status_set(uint8_t link_idx, bdmf_boolean intEmptyRpt)
{
    uint32_t reg_empty_rpt_int_status=0;

#ifdef VALIDATE_PARMS
#endif


    RDP_FIELD_SET(reg_empty_rpt_int_status, (link_idx % 32) *1, 0x1, intEmptyRpt);

    RU_REG_WRITE(0, EPN, EMPTY_RPT_INT_STATUS, reg_empty_rpt_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_empty_rpt_int_status_get(uint8_t link_idx, bdmf_boolean *intEmptyRpt)
{
    uint32_t reg_empty_rpt_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intEmptyRpt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, EMPTY_RPT_INT_STATUS, reg_empty_rpt_int_status);

    *intEmptyRpt = RDP_FIELD_GET(reg_empty_rpt_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_empty_rpt_int_mask_set(uint8_t link_idx, bdmf_boolean  maskIntEmptyRpt)
{
    uint32_t reg_empty_rpt_int_mask=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, EMPTY_RPT_INT_MASK, reg_empty_rpt_int_mask);

    RDP_FIELD_SET(reg_empty_rpt_int_mask, (link_idx % 32) *1, 0x1,  maskIntEmptyRpt);

    RU_REG_WRITE(0, EPN, EMPTY_RPT_INT_MASK, reg_empty_rpt_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_empty_rpt_int_mask_get(uint8_t link_idx, bdmf_boolean * maskIntEmptyRpt)
{
    uint32_t reg_empty_rpt_int_mask=0;

#ifdef VALIDATE_PARMS
    if(! maskIntEmptyRpt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, EMPTY_RPT_INT_MASK, reg_empty_rpt_int_mask);

    * maskIntEmptyRpt = RDP_FIELD_GET(reg_empty_rpt_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bcap_overflow_int_status_set(uint8_t l2_acc_idx, bdmf_boolean intl2sBurstCapOverFlow)
{
    uint32_t reg_bcap_overflow_int_status=0;

#ifdef VALIDATE_PARMS
#endif


    RDP_FIELD_SET(reg_bcap_overflow_int_status, (l2_acc_idx % 32) *1, 0x1, intl2sBurstCapOverFlow);

    RU_REG_WRITE(0, EPN, BCAP_OVERFLOW_INT_STATUS, reg_bcap_overflow_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bcap_overflow_int_status_get(uint8_t l2_acc_idx, bdmf_boolean *intl2sBurstCapOverFlow)
{
    uint32_t reg_bcap_overflow_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intl2sBurstCapOverFlow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BCAP_OVERFLOW_INT_STATUS, reg_bcap_overflow_int_status);

    *intl2sBurstCapOverFlow = RDP_FIELD_GET(reg_bcap_overflow_int_status, (l2_acc_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bcap_overflow_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntl2sBurstCapOverFlow)
{
    uint32_t reg_bcap_overflow_int_mask=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, BCAP_OVERFLOW_INT_MASK, reg_bcap_overflow_int_mask);

    RDP_FIELD_SET(reg_bcap_overflow_int_mask, (link_idx % 32) *1, 0x1, maskIntl2sBurstCapOverFlow);

    RU_REG_WRITE(0, EPN, BCAP_OVERFLOW_INT_MASK, reg_bcap_overflow_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bcap_overflow_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntl2sBurstCapOverFlow)
{
    uint32_t reg_bcap_overflow_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntl2sBurstCapOverFlow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BCAP_OVERFLOW_INT_MASK, reg_bcap_overflow_int_mask);

    *maskIntl2sBurstCapOverFlow = RDP_FIELD_GET(reg_bcap_overflow_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_dns_fault_int_status_set(bdmf_boolean intbbhdnsoverflow)
{
    uint32_t reg_bbh_dns_fault_int_status=0;

#ifdef VALIDATE_PARMS
    if((intbbhdnsoverflow >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_dns_fault_int_status = RU_FIELD_SET(0, EPN, BBH_DNS_FAULT_INT_STATUS, INTBBHDNSOVERFLOW, reg_bbh_dns_fault_int_status, intbbhdnsoverflow);

    RU_REG_WRITE(0, EPN, BBH_DNS_FAULT_INT_STATUS, reg_bbh_dns_fault_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_dns_fault_int_status_get(bdmf_boolean *intbbhdnsoverflow)
{
    uint32_t reg_bbh_dns_fault_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intbbhdnsoverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_DNS_FAULT_INT_STATUS, reg_bbh_dns_fault_int_status);

    *intbbhdnsoverflow = RU_FIELD_GET(0, EPN, BBH_DNS_FAULT_INT_STATUS, INTBBHDNSOVERFLOW, reg_bbh_dns_fault_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_dns_fault_int_mask_set(bdmf_boolean maskintbbhdnsoverflow)
{
    uint32_t reg_bbh_dns_fault_int_mask=0;

#ifdef VALIDATE_PARMS
    if((maskintbbhdnsoverflow >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_dns_fault_int_mask = RU_FIELD_SET(0, EPN, BBH_DNS_FAULT_INT_MASK, MASKINTBBHDNSOVERFLOW, reg_bbh_dns_fault_int_mask, maskintbbhdnsoverflow);

    RU_REG_WRITE(0, EPN, BBH_DNS_FAULT_INT_MASK, reg_bbh_dns_fault_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_dns_fault_int_mask_get(bdmf_boolean *maskintbbhdnsoverflow)
{
    uint32_t reg_bbh_dns_fault_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskintbbhdnsoverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_DNS_FAULT_INT_MASK, reg_bbh_dns_fault_int_mask);

    *maskintbbhdnsoverflow = RU_FIELD_GET(0, EPN, BBH_DNS_FAULT_INT_MASK, MASKINTBBHDNSOVERFLOW, reg_bbh_dns_fault_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_fault_int_status_set(uint8_t link_idx, bdmf_boolean intBbhUpsFault)
{
    uint32_t reg_bbh_ups_fault_int_status=0;

#ifdef VALIDATE_PARMS
#endif


    RDP_FIELD_SET(reg_bbh_ups_fault_int_status, (link_idx % 32) *1, 0x1, intBbhUpsFault);

    RU_REG_WRITE(0, EPN, BBH_UPS_FAULT_INT_STATUS, reg_bbh_ups_fault_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_fault_int_status_get(uint8_t link_idx, bdmf_boolean *intBbhUpsFault)
{
    uint32_t reg_bbh_ups_fault_int_status=0;

#ifdef VALIDATE_PARMS
    if(!intBbhUpsFault)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UPS_FAULT_INT_STATUS, reg_bbh_ups_fault_int_status);

    *intBbhUpsFault = RDP_FIELD_GET(reg_bbh_ups_fault_int_status, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_fault_int_mask_set(uint8_t link_idx, bdmf_boolean maskIntBbhUpsFault)
{
    uint32_t reg_bbh_ups_fault_int_mask=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, BBH_UPS_FAULT_INT_MASK, reg_bbh_ups_fault_int_mask);

    RDP_FIELD_SET(reg_bbh_ups_fault_int_mask, (link_idx % 32) *1, 0x1, maskIntBbhUpsFault);

    RU_REG_WRITE(0, EPN, BBH_UPS_FAULT_INT_MASK, reg_bbh_ups_fault_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_fault_int_mask_get(uint8_t link_idx, bdmf_boolean *maskIntBbhUpsFault)
{
    uint32_t reg_bbh_ups_fault_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!maskIntBbhUpsFault)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UPS_FAULT_INT_MASK, reg_bbh_ups_fault_int_mask);

    *maskIntBbhUpsFault = RDP_FIELD_GET(reg_bbh_ups_fault_int_mask, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_abort_int_status_set(bdmf_boolean tardybbhabort)
{
    uint32_t reg_bbh_ups_abort_int_status=0;

#ifdef VALIDATE_PARMS
    if((tardybbhabort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_ups_abort_int_status = RU_FIELD_SET(0, EPN, BBH_UPS_ABORT_INT_STATUS, TARDYBBHABORT, reg_bbh_ups_abort_int_status, tardybbhabort);

    RU_REG_WRITE(0, EPN, BBH_UPS_ABORT_INT_STATUS, reg_bbh_ups_abort_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_abort_int_status_get(bdmf_boolean *tardybbhabort)
{
    uint32_t reg_bbh_ups_abort_int_status=0;

#ifdef VALIDATE_PARMS
    if(!tardybbhabort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UPS_ABORT_INT_STATUS, reg_bbh_ups_abort_int_status);

    *tardybbhabort = RU_FIELD_GET(0, EPN, BBH_UPS_ABORT_INT_STATUS, TARDYBBHABORT, reg_bbh_ups_abort_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_abort_int_mask_set(bdmf_boolean masktardybbhabort)
{
    uint32_t reg_bbh_ups_abort_int_mask=0;

#ifdef VALIDATE_PARMS
    if((masktardybbhabort >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_ups_abort_int_mask = RU_FIELD_SET(0, EPN, BBH_UPS_ABORT_INT_MASK, MASKTARDYBBHABORT, reg_bbh_ups_abort_int_mask, masktardybbhabort);

    RU_REG_WRITE(0, EPN, BBH_UPS_ABORT_INT_MASK, reg_bbh_ups_abort_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_ups_abort_int_mask_get(bdmf_boolean *masktardybbhabort)
{
    uint32_t reg_bbh_ups_abort_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!masktardybbhabort)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UPS_ABORT_INT_MASK, reg_bbh_ups_abort_int_mask);

    *masktardybbhabort = RU_FIELD_GET(0, EPN, BBH_UPS_ABORT_INT_MASK, MASKTARDYBBHABORT, reg_bbh_ups_abort_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_main_int_mask_set(const epn_main_int_mask *main_int_mask)
{
    uint32_t reg_main_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!main_int_mask)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((main_int_mask->bbhupfrabortmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intl2sburstcapoverflowmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcoemptyrptmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intdrxerrabortmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intl2sfifooverrunmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intco1588tsmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcorptpresmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntpresmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcodelstalegntmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntnonpollmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntmisalignmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcognttoofarmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntintervalmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntdiscoverymask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntmissabortmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcogntfullabortmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->badupfrlenmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->uptardypacketmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->uprptfrxmtmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intbififooverrunmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->burstgnttoobigmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->wrgnttoobigmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->rcvgnttoobigmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->dnstatsoverrunmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intupstatsoverrunmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->dnoutofordermask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->truantbbhhaltmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->upinvldgntlenmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->intcobbhupsfaultmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->dntimeinsyncmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->dntimenotinsyncmask >= _1BITS_MAX_VAL_) ||
       (main_int_mask->dportrdymask >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, BBHUPFRABORTMASK, reg_main_int_mask, main_int_mask->bbhupfrabortmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTL2SBURSTCAPOVERFLOWMASK, reg_main_int_mask, main_int_mask->intl2sburstcapoverflowmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOEMPTYRPTMASK, reg_main_int_mask, main_int_mask->intcoemptyrptmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTDRXERRABORTMASK, reg_main_int_mask, main_int_mask->intdrxerrabortmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTL2SFIFOOVERRUNMASK, reg_main_int_mask, main_int_mask->intl2sfifooverrunmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCO1588TSMASK, reg_main_int_mask, main_int_mask->intco1588tsmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCORPTPRESMASK, reg_main_int_mask, main_int_mask->intcorptpresmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTPRESMASK, reg_main_int_mask, main_int_mask->intcogntpresmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCODELSTALEGNTMASK, reg_main_int_mask, main_int_mask->intcodelstalegntmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTNONPOLLMASK, reg_main_int_mask, main_int_mask->intcogntnonpollmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTMISALIGNMASK, reg_main_int_mask, main_int_mask->intcogntmisalignmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTTOOFARMASK, reg_main_int_mask, main_int_mask->intcognttoofarmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTINTERVALMASK, reg_main_int_mask, main_int_mask->intcogntintervalmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTDISCOVERYMASK, reg_main_int_mask, main_int_mask->intcogntdiscoverymask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTMISSABORTMASK, reg_main_int_mask, main_int_mask->intcogntmissabortmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOGNTFULLABORTMASK, reg_main_int_mask, main_int_mask->intcogntfullabortmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, BADUPFRLENMASK, reg_main_int_mask, main_int_mask->badupfrlenmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, UPTARDYPACKETMASK, reg_main_int_mask, main_int_mask->uptardypacketmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, UPRPTFRXMTMASK, reg_main_int_mask, main_int_mask->uprptfrxmtmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTBIFIFOOVERRUNMASK, reg_main_int_mask, main_int_mask->intbififooverrunmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, BURSTGNTTOOBIGMASK, reg_main_int_mask, main_int_mask->burstgnttoobigmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, WRGNTTOOBIGMASK, reg_main_int_mask, main_int_mask->wrgnttoobigmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, RCVGNTTOOBIGMASK, reg_main_int_mask, main_int_mask->rcvgnttoobigmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, DNSTATSOVERRUNMASK, reg_main_int_mask, main_int_mask->dnstatsoverrunmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTUPSTATSOVERRUNMASK, reg_main_int_mask, main_int_mask->intupstatsoverrunmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, DNOUTOFORDERMASK, reg_main_int_mask, main_int_mask->dnoutofordermask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, TRUANTBBHHALTMASK, reg_main_int_mask, main_int_mask->truantbbhhaltmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, UPINVLDGNTLENMASK, reg_main_int_mask, main_int_mask->upinvldgntlenmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, INTCOBBHUPSFAULTMASK, reg_main_int_mask, main_int_mask->intcobbhupsfaultmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, DNTIMEINSYNCMASK, reg_main_int_mask, main_int_mask->dntimeinsyncmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, DNTIMENOTINSYNCMASK, reg_main_int_mask, main_int_mask->dntimenotinsyncmask);
    reg_main_int_mask = RU_FIELD_SET(0, EPN, MAIN_INT_MASK, DPORTRDYMASK, reg_main_int_mask, main_int_mask->dportrdymask);

    RU_REG_WRITE(0, EPN, MAIN_INT_MASK, reg_main_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_main_int_mask_get(epn_main_int_mask *main_int_mask)
{
    uint32_t reg_main_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!main_int_mask)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MAIN_INT_MASK, reg_main_int_mask);

    main_int_mask->bbhupfrabortmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, BBHUPFRABORTMASK, reg_main_int_mask);
    main_int_mask->intl2sburstcapoverflowmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTL2SBURSTCAPOVERFLOWMASK, reg_main_int_mask);
    main_int_mask->intcoemptyrptmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOEMPTYRPTMASK, reg_main_int_mask);
    main_int_mask->intdrxerrabortmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTDRXERRABORTMASK, reg_main_int_mask);
    main_int_mask->intl2sfifooverrunmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTL2SFIFOOVERRUNMASK, reg_main_int_mask);
    main_int_mask->intco1588tsmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCO1588TSMASK, reg_main_int_mask);
    main_int_mask->intcorptpresmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCORPTPRESMASK, reg_main_int_mask);
    main_int_mask->intcogntpresmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTPRESMASK, reg_main_int_mask);
    main_int_mask->intcodelstalegntmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCODELSTALEGNTMASK, reg_main_int_mask);
    main_int_mask->intcogntnonpollmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTNONPOLLMASK, reg_main_int_mask);
    main_int_mask->intcogntmisalignmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTMISALIGNMASK, reg_main_int_mask);
    main_int_mask->intcognttoofarmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTTOOFARMASK, reg_main_int_mask);
    main_int_mask->intcogntintervalmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTINTERVALMASK, reg_main_int_mask);
    main_int_mask->intcogntdiscoverymask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTDISCOVERYMASK, reg_main_int_mask);
    main_int_mask->intcogntmissabortmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTMISSABORTMASK, reg_main_int_mask);
    main_int_mask->intcogntfullabortmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOGNTFULLABORTMASK, reg_main_int_mask);
    main_int_mask->badupfrlenmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, BADUPFRLENMASK, reg_main_int_mask);
    main_int_mask->uptardypacketmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, UPTARDYPACKETMASK, reg_main_int_mask);
    main_int_mask->uprptfrxmtmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, UPRPTFRXMTMASK, reg_main_int_mask);
    main_int_mask->intbififooverrunmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTBIFIFOOVERRUNMASK, reg_main_int_mask);
    main_int_mask->burstgnttoobigmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, BURSTGNTTOOBIGMASK, reg_main_int_mask);
    main_int_mask->wrgnttoobigmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, WRGNTTOOBIGMASK, reg_main_int_mask);
    main_int_mask->rcvgnttoobigmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, RCVGNTTOOBIGMASK, reg_main_int_mask);
    main_int_mask->dnstatsoverrunmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, DNSTATSOVERRUNMASK, reg_main_int_mask);
    main_int_mask->intupstatsoverrunmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTUPSTATSOVERRUNMASK, reg_main_int_mask);
    main_int_mask->dnoutofordermask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, DNOUTOFORDERMASK, reg_main_int_mask);
    main_int_mask->truantbbhhaltmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, TRUANTBBHHALTMASK, reg_main_int_mask);
    main_int_mask->upinvldgntlenmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, UPINVLDGNTLENMASK, reg_main_int_mask);
    main_int_mask->intcobbhupsfaultmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, INTCOBBHUPSFAULTMASK, reg_main_int_mask);
    main_int_mask->dntimeinsyncmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, DNTIMEINSYNCMASK, reg_main_int_mask);
    main_int_mask->dntimenotinsyncmask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, DNTIMENOTINSYNCMASK, reg_main_int_mask);
    main_int_mask->dportrdymask = RU_FIELD_GET(0, EPN, MAIN_INT_MASK, DPORTRDYMASK, reg_main_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_max_gnt_size_set(uint16_t maxgntsize)
{
    uint32_t reg_max_gnt_size=0;

#ifdef VALIDATE_PARMS
#endif

    reg_max_gnt_size = RU_FIELD_SET(0, EPN, MAX_GNT_SIZE, MAXGNTSIZE, reg_max_gnt_size, maxgntsize);

    RU_REG_WRITE(0, EPN, MAX_GNT_SIZE, reg_max_gnt_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_max_gnt_size_get(uint16_t *maxgntsize)
{
    uint32_t reg_max_gnt_size=0;

#ifdef VALIDATE_PARMS
    if(!maxgntsize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MAX_GNT_SIZE, reg_max_gnt_size);

    *maxgntsize = RU_FIELD_GET(0, EPN, MAX_GNT_SIZE, MAXGNTSIZE, reg_max_gnt_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_max_frame_size_set(uint16_t cfgmaxframesize)
{
    uint32_t reg_max_frame_size=0;

#ifdef VALIDATE_PARMS
    if((cfgmaxframesize >= _14BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_max_frame_size = RU_FIELD_SET(0, EPN, MAX_FRAME_SIZE, CFGMAXFRAMESIZE, reg_max_frame_size, cfgmaxframesize);

    RU_REG_WRITE(0, EPN, MAX_FRAME_SIZE, reg_max_frame_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_max_frame_size_get(uint16_t *cfgmaxframesize)
{
    uint32_t reg_max_frame_size=0;

#ifdef VALIDATE_PARMS
    if(!cfgmaxframesize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MAX_FRAME_SIZE, reg_max_frame_size);

    *cfgmaxframesize = RU_FIELD_GET(0, EPN, MAX_FRAME_SIZE, CFGMAXFRAMESIZE, reg_max_frame_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_grant_ovr_hd_set(uint16_t gntovrhdfec, uint16_t gntovrhd)
{
    uint32_t reg_grant_ovr_hd=0;

#ifdef VALIDATE_PARMS
#endif

    reg_grant_ovr_hd = RU_FIELD_SET(0, EPN, GRANT_OVR_HD, GNTOVRHDFEC, reg_grant_ovr_hd, gntovrhdfec);
    reg_grant_ovr_hd = RU_FIELD_SET(0, EPN, GRANT_OVR_HD, GNTOVRHD, reg_grant_ovr_hd, gntovrhd);

    RU_REG_WRITE(0, EPN, GRANT_OVR_HD, reg_grant_ovr_hd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_grant_ovr_hd_get(uint16_t *gntovrhdfec, uint16_t *gntovrhd)
{
    uint32_t reg_grant_ovr_hd=0;

#ifdef VALIDATE_PARMS
    if(!gntovrhdfec || !gntovrhd)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GRANT_OVR_HD, reg_grant_ovr_hd);

    *gntovrhdfec = RU_FIELD_GET(0, EPN, GRANT_OVR_HD, GNTOVRHDFEC, reg_grant_ovr_hd);
    *gntovrhd = RU_FIELD_GET(0, EPN, GRANT_OVR_HD, GNTOVRHD, reg_grant_ovr_hd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_poll_size_set(uint16_t pollsizefec, uint16_t pollsize)
{
    uint32_t reg_poll_size=0;

#ifdef VALIDATE_PARMS
#endif

    reg_poll_size = RU_FIELD_SET(0, EPN, POLL_SIZE, POLLSIZEFEC, reg_poll_size, pollsizefec);
    reg_poll_size = RU_FIELD_SET(0, EPN, POLL_SIZE, POLLSIZE, reg_poll_size, pollsize);

    RU_REG_WRITE(0, EPN, POLL_SIZE, reg_poll_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_poll_size_get(uint16_t *pollsizefec, uint16_t *pollsize)
{
    uint32_t reg_poll_size=0;

#ifdef VALIDATE_PARMS
    if(!pollsizefec || !pollsize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, POLL_SIZE, reg_poll_size);

    *pollsizefec = RU_FIELD_GET(0, EPN, POLL_SIZE, POLLSIZEFEC, reg_poll_size);
    *pollsize = RU_FIELD_GET(0, EPN, POLL_SIZE, POLLSIZE, reg_poll_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_rd_gnt_margin_set(uint16_t rdgntstartmargin)
{
    uint32_t reg_dn_rd_gnt_margin=0;

#ifdef VALIDATE_PARMS
#endif

    reg_dn_rd_gnt_margin = RU_FIELD_SET(0, EPN, DN_RD_GNT_MARGIN, RDGNTSTARTMARGIN, reg_dn_rd_gnt_margin, rdgntstartmargin);

    RU_REG_WRITE(0, EPN, DN_RD_GNT_MARGIN, reg_dn_rd_gnt_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_rd_gnt_margin_get(uint16_t *rdgntstartmargin)
{
    uint32_t reg_dn_rd_gnt_margin=0;

#ifdef VALIDATE_PARMS
    if(!rdgntstartmargin)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_RD_GNT_MARGIN, reg_dn_rd_gnt_margin);

    *rdgntstartmargin = RU_FIELD_GET(0, EPN, DN_RD_GNT_MARGIN, RDGNTSTARTMARGIN, reg_dn_rd_gnt_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_time_start_delta_set(uint16_t gntstarttimedelta)
{
    uint32_t reg_gnt_time_start_delta=0;

#ifdef VALIDATE_PARMS
#endif

    reg_gnt_time_start_delta = RU_FIELD_SET(0, EPN, GNT_TIME_START_DELTA, GNTSTARTTIMEDELTA, reg_gnt_time_start_delta, gntstarttimedelta);

    RU_REG_WRITE(0, EPN, GNT_TIME_START_DELTA, reg_gnt_time_start_delta);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_time_start_delta_get(uint16_t *gntstarttimedelta)
{
    uint32_t reg_gnt_time_start_delta=0;

#ifdef VALIDATE_PARMS
    if(!gntstarttimedelta)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_TIME_START_DELTA, reg_gnt_time_start_delta);

    *gntstarttimedelta = RU_FIELD_GET(0, EPN, GNT_TIME_START_DELTA, GNTSTARTTIMEDELTA, reg_gnt_time_start_delta);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_time_stamp_diff_set(uint16_t timestampdiffdelta)
{
    uint32_t reg_time_stamp_diff=0;

#ifdef VALIDATE_PARMS
#endif

    reg_time_stamp_diff = RU_FIELD_SET(0, EPN, TIME_STAMP_DIFF, TIMESTAMPDIFFDELTA, reg_time_stamp_diff, timestampdiffdelta);

    RU_REG_WRITE(0, EPN, TIME_STAMP_DIFF, reg_time_stamp_diff);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_time_stamp_diff_get(uint16_t *timestampdiffdelta)
{
    uint32_t reg_time_stamp_diff=0;

#ifdef VALIDATE_PARMS
    if(!timestampdiffdelta)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TIME_STAMP_DIFF, reg_time_stamp_diff);

    *timestampdiffdelta = RU_FIELD_GET(0, EPN, TIME_STAMP_DIFF, TIMESTAMPDIFFDELTA, reg_time_stamp_diff);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_time_stamp_off_set(uint16_t timestampoffsetfec, uint16_t timestampoffset)
{
    uint32_t reg_up_time_stamp_off=0;

#ifdef VALIDATE_PARMS
#endif

    reg_up_time_stamp_off = RU_FIELD_SET(0, EPN, UP_TIME_STAMP_OFF, TIMESTAMPOFFSETFEC, reg_up_time_stamp_off, timestampoffsetfec);
    reg_up_time_stamp_off = RU_FIELD_SET(0, EPN, UP_TIME_STAMP_OFF, TIMESTAMPOFFSET, reg_up_time_stamp_off, timestampoffset);

    RU_REG_WRITE(0, EPN, UP_TIME_STAMP_OFF, reg_up_time_stamp_off);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_time_stamp_off_get(uint16_t *timestampoffsetfec, uint16_t *timestampoffset)
{
    uint32_t reg_up_time_stamp_off=0;

#ifdef VALIDATE_PARMS
    if(!timestampoffsetfec || !timestampoffset)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UP_TIME_STAMP_OFF, reg_up_time_stamp_off);

    *timestampoffsetfec = RU_FIELD_GET(0, EPN, UP_TIME_STAMP_OFF, TIMESTAMPOFFSETFEC, reg_up_time_stamp_off);
    *timestampoffset = RU_FIELD_GET(0, EPN, UP_TIME_STAMP_OFF, TIMESTAMPOFFSET, reg_up_time_stamp_off);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_interval_set(uint16_t gntinterval)
{
    uint32_t reg_gnt_interval=0;

#ifdef VALIDATE_PARMS
#endif

    reg_gnt_interval = RU_FIELD_SET(0, EPN, GNT_INTERVAL, GNTINTERVAL, reg_gnt_interval, gntinterval);

    RU_REG_WRITE(0, EPN, GNT_INTERVAL, reg_gnt_interval);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_gnt_interval_get(uint16_t *gntinterval)
{
    uint32_t reg_gnt_interval=0;

#ifdef VALIDATE_PARMS
    if(!gntinterval)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GNT_INTERVAL, reg_gnt_interval);

    *gntinterval = RU_FIELD_GET(0, EPN, GNT_INTERVAL, GNTINTERVAL, reg_gnt_interval);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_gnt_misalign_thr_set(uint16_t prvunusedgntthreshold, uint16_t gntmisalignthresh)
{
    uint32_t reg_dn_gnt_misalign_thr=0;

#ifdef VALIDATE_PARMS
    if((gntmisalignthresh >= _10BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_dn_gnt_misalign_thr = RU_FIELD_SET(0, EPN, DN_GNT_MISALIGN_THR, PRVUNUSEDGNTTHRESHOLD, reg_dn_gnt_misalign_thr, prvunusedgntthreshold);
    reg_dn_gnt_misalign_thr = RU_FIELD_SET(0, EPN, DN_GNT_MISALIGN_THR, GNTMISALIGNTHRESH, reg_dn_gnt_misalign_thr, gntmisalignthresh);

    RU_REG_WRITE(0, EPN, DN_GNT_MISALIGN_THR, reg_dn_gnt_misalign_thr);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_gnt_misalign_thr_get(uint16_t *prvunusedgntthreshold, uint16_t *gntmisalignthresh)
{
    uint32_t reg_dn_gnt_misalign_thr=0;

#ifdef VALIDATE_PARMS
    if(!prvunusedgntthreshold || !gntmisalignthresh)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_GNT_MISALIGN_THR, reg_dn_gnt_misalign_thr);

    *prvunusedgntthreshold = RU_FIELD_GET(0, EPN, DN_GNT_MISALIGN_THR, PRVUNUSEDGNTTHRESHOLD, reg_dn_gnt_misalign_thr);
    *gntmisalignthresh = RU_FIELD_GET(0, EPN, DN_GNT_MISALIGN_THR, GNTMISALIGNTHRESH, reg_dn_gnt_misalign_thr);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_gnt_misalign_pause_set(uint16_t gntmisalignpause)
{
    uint32_t reg_dn_gnt_misalign_pause=0;

#ifdef VALIDATE_PARMS
#endif

    reg_dn_gnt_misalign_pause = RU_FIELD_SET(0, EPN, DN_GNT_MISALIGN_PAUSE, GNTMISALIGNPAUSE, reg_dn_gnt_misalign_pause, gntmisalignpause);

    RU_REG_WRITE(0, EPN, DN_GNT_MISALIGN_PAUSE, reg_dn_gnt_misalign_pause);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_gnt_misalign_pause_get(uint16_t *gntmisalignpause)
{
    uint32_t reg_dn_gnt_misalign_pause=0;

#ifdef VALIDATE_PARMS
    if(!gntmisalignpause)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_GNT_MISALIGN_PAUSE, reg_dn_gnt_misalign_pause);

    *gntmisalignpause = RU_FIELD_GET(0, EPN, DN_GNT_MISALIGN_PAUSE, GNTMISALIGNPAUSE, reg_dn_gnt_misalign_pause);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_non_poll_intv_set(uint16_t nonpollgntintv)
{
    uint32_t reg_non_poll_intv=0;

#ifdef VALIDATE_PARMS
#endif

    reg_non_poll_intv = RU_FIELD_SET(0, EPN, NON_POLL_INTV, NONPOLLGNTINTV, reg_non_poll_intv, nonpollgntintv);

    RU_REG_WRITE(0, EPN, NON_POLL_INTV, reg_non_poll_intv);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_non_poll_intv_get(uint16_t *nonpollgntintv)
{
    uint32_t reg_non_poll_intv=0;

#ifdef VALIDATE_PARMS
    if(!nonpollgntintv)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, NON_POLL_INTV, reg_non_poll_intv);

    *nonpollgntintv = RU_FIELD_GET(0, EPN, NON_POLL_INTV, NONPOLLGNTINTV, reg_non_poll_intv);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_force_fcs_err_set(uint8_t link_idx, bdmf_boolean forceFcsErr)
{
    uint32_t reg_force_fcs_err=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, FORCE_FCS_ERR, reg_force_fcs_err);

    RDP_FIELD_SET(reg_force_fcs_err, (link_idx % 32) *1, 0x1, forceFcsErr);

    RU_REG_WRITE(0, EPN, FORCE_FCS_ERR, reg_force_fcs_err);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_force_fcs_err_get(uint8_t link_idx, bdmf_boolean *forceFcsErr)
{
    uint32_t reg_force_fcs_err=0;

#ifdef VALIDATE_PARMS
    if(!forceFcsErr)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FORCE_FCS_ERR, reg_force_fcs_err);

    *forceFcsErr = RDP_FIELD_GET(reg_force_fcs_err, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_grant_overlap_limit_set(uint16_t prvgrantoverlaplimit)
{
    uint32_t reg_grant_overlap_limit=0;

#ifdef VALIDATE_PARMS
#endif

    reg_grant_overlap_limit = RU_FIELD_SET(0, EPN, GRANT_OVERLAP_LIMIT, PRVGRANTOVERLAPLIMIT, reg_grant_overlap_limit, prvgrantoverlaplimit);

    RU_REG_WRITE(0, EPN, GRANT_OVERLAP_LIMIT, reg_grant_overlap_limit);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_grant_overlap_limit_get(uint16_t *prvgrantoverlaplimit)
{
    uint32_t reg_grant_overlap_limit=0;

#ifdef VALIDATE_PARMS
    if(!prvgrantoverlaplimit)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, GRANT_OVERLAP_LIMIT, reg_grant_overlap_limit);

    *prvgrantoverlaplimit = RU_FIELD_GET(0, EPN, GRANT_OVERLAP_LIMIT, PRVGRANTOVERLAPLIMIT, reg_grant_overlap_limit);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_aes_configuration_0_set(uint8_t link_idx, uint8_t prvUpstreamAesMode_0)
{
    uint32_t reg_aes_configuration_0=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, AES_CONFIGURATION_0, reg_aes_configuration_0);

    RDP_FIELD_SET(reg_aes_configuration_0, (link_idx % 16) *2, 0x2, prvUpstreamAesMode_0);

    RU_REG_WRITE(0, EPN, AES_CONFIGURATION_0, reg_aes_configuration_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_aes_configuration_0_get(uint8_t link_idx, uint8_t *prvUpstreamAesMode_0)
{
    uint32_t reg_aes_configuration_0=0;

#ifdef VALIDATE_PARMS
    if(!prvUpstreamAesMode_0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, AES_CONFIGURATION_0, reg_aes_configuration_0);

    *prvUpstreamAesMode_0 = RDP_FIELD_GET(reg_aes_configuration_0, (link_idx % 16) *2, 0x2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_grant_ovr_hd_set(uint16_t discgntovrhd)
{
    uint32_t reg_disc_grant_ovr_hd=0;

#ifdef VALIDATE_PARMS
#endif

    reg_disc_grant_ovr_hd = RU_FIELD_SET(0, EPN, DISC_GRANT_OVR_HD, DISCGNTOVRHD, reg_disc_grant_ovr_hd, discgntovrhd);

    RU_REG_WRITE(0, EPN, DISC_GRANT_OVR_HD, reg_disc_grant_ovr_hd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_disc_grant_ovr_hd_get(uint16_t *discgntovrhd)
{
    uint32_t reg_disc_grant_ovr_hd=0;

#ifdef VALIDATE_PARMS
    if(!discgntovrhd)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DISC_GRANT_OVR_HD, reg_disc_grant_ovr_hd);

    *discgntovrhd = RU_FIELD_GET(0, EPN, DISC_GRANT_OVR_HD, DISCGNTOVRHD, reg_disc_grant_ovr_hd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_seed_set(uint16_t cfgdiscseed)
{
    uint32_t reg_dn_discovery_seed=0;

#ifdef VALIDATE_PARMS
    if((cfgdiscseed >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_dn_discovery_seed = RU_FIELD_SET(0, EPN, DN_DISCOVERY_SEED, CFGDISCSEED, reg_dn_discovery_seed, cfgdiscseed);

    RU_REG_WRITE(0, EPN, DN_DISCOVERY_SEED, reg_dn_discovery_seed);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_seed_get(uint16_t *cfgdiscseed)
{
    uint32_t reg_dn_discovery_seed=0;

#ifdef VALIDATE_PARMS
    if(!cfgdiscseed)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_DISCOVERY_SEED, reg_dn_discovery_seed);

    *cfgdiscseed = RU_FIELD_GET(0, EPN, DN_DISCOVERY_SEED, CFGDISCSEED, reg_dn_discovery_seed);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_inc_set(uint16_t cfgdiscinc)
{
    uint32_t reg_dn_discovery_inc=0;

#ifdef VALIDATE_PARMS
    if((cfgdiscinc >= _10BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_dn_discovery_inc = RU_FIELD_SET(0, EPN, DN_DISCOVERY_INC, CFGDISCINC, reg_dn_discovery_inc, cfgdiscinc);

    RU_REG_WRITE(0, EPN, DN_DISCOVERY_INC, reg_dn_discovery_inc);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_inc_get(uint16_t *cfgdiscinc)
{
    uint32_t reg_dn_discovery_inc=0;

#ifdef VALIDATE_PARMS
    if(!cfgdiscinc)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_DISCOVERY_INC, reg_dn_discovery_inc);

    *cfgdiscinc = RU_FIELD_GET(0, EPN, DN_DISCOVERY_INC, CFGDISCINC, reg_dn_discovery_inc);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_size_set(uint16_t cfgdiscsize)
{
    uint32_t reg_dn_discovery_size=0;

#ifdef VALIDATE_PARMS
#endif

    reg_dn_discovery_size = RU_FIELD_SET(0, EPN, DN_DISCOVERY_SIZE, CFGDISCSIZE, reg_dn_discovery_size, cfgdiscsize);

    RU_REG_WRITE(0, EPN, DN_DISCOVERY_SIZE, reg_dn_discovery_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_discovery_size_get(uint16_t *cfgdiscsize)
{
    uint32_t reg_dn_discovery_size=0;

#ifdef VALIDATE_PARMS
    if(!cfgdiscsize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_DISCOVERY_SIZE, reg_dn_discovery_size);

    *cfgdiscsize = RU_FIELD_GET(0, EPN, DN_DISCOVERY_SIZE, CFGDISCSIZE, reg_dn_discovery_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fec_ipg_length_set(uint8_t modipgpreamblebytes, uint8_t cfgrptlen, uint8_t cfgfecrptlength, uint8_t cfgfecipglength)
{
    uint32_t reg_fec_ipg_length=0;

#ifdef VALIDATE_PARMS
    if((modipgpreamblebytes >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_fec_ipg_length = RU_FIELD_SET(0, EPN, FEC_IPG_LENGTH, MODIPGPREAMBLEBYTES, reg_fec_ipg_length, modipgpreamblebytes);
    reg_fec_ipg_length = RU_FIELD_SET(0, EPN, FEC_IPG_LENGTH, CFGRPTLEN, reg_fec_ipg_length, cfgrptlen);
    reg_fec_ipg_length = RU_FIELD_SET(0, EPN, FEC_IPG_LENGTH, CFGFECRPTLENGTH, reg_fec_ipg_length, cfgfecrptlength);
    reg_fec_ipg_length = RU_FIELD_SET(0, EPN, FEC_IPG_LENGTH, CFGFECIPGLENGTH, reg_fec_ipg_length, cfgfecipglength);

    RU_REG_WRITE(0, EPN, FEC_IPG_LENGTH, reg_fec_ipg_length);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fec_ipg_length_get(uint8_t *modipgpreamblebytes, uint8_t *cfgrptlen, uint8_t *cfgfecrptlength, uint8_t *cfgfecipglength)
{
    uint32_t reg_fec_ipg_length=0;

#ifdef VALIDATE_PARMS
    if(!modipgpreamblebytes || !cfgrptlen || !cfgfecrptlength || !cfgfecipglength)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FEC_IPG_LENGTH, reg_fec_ipg_length);

    *modipgpreamblebytes = RU_FIELD_GET(0, EPN, FEC_IPG_LENGTH, MODIPGPREAMBLEBYTES, reg_fec_ipg_length);
    *cfgrptlen = RU_FIELD_GET(0, EPN, FEC_IPG_LENGTH, CFGRPTLEN, reg_fec_ipg_length);
    *cfgfecrptlength = RU_FIELD_GET(0, EPN, FEC_IPG_LENGTH, CFGFECRPTLENGTH, reg_fec_ipg_length);
    *cfgfecipglength = RU_FIELD_GET(0, EPN, FEC_IPG_LENGTH, CFGFECIPGLENGTH, reg_fec_ipg_length);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fake_report_value_en_set(uint32_t fakereportvalueen)
{
    uint32_t reg_fake_report_value_en=0;

#ifdef VALIDATE_PARMS
#endif

    reg_fake_report_value_en = RU_FIELD_SET(0, EPN, FAKE_REPORT_VALUE_EN, FAKEREPORTVALUEEN, reg_fake_report_value_en, fakereportvalueen);

    RU_REG_WRITE(0, EPN, FAKE_REPORT_VALUE_EN, reg_fake_report_value_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fake_report_value_en_get(uint32_t *fakereportvalueen)
{
    uint32_t reg_fake_report_value_en=0;

#ifdef VALIDATE_PARMS
    if(!fakereportvalueen)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FAKE_REPORT_VALUE_EN, reg_fake_report_value_en);

    *fakereportvalueen = RU_FIELD_GET(0, EPN, FAKE_REPORT_VALUE_EN, FAKEREPORTVALUEEN, reg_fake_report_value_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fake_report_value_set(uint32_t fakereportvalue)
{
    uint32_t reg_fake_report_value=0;

#ifdef VALIDATE_PARMS
    if((fakereportvalue >= _21BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_fake_report_value = RU_FIELD_SET(0, EPN, FAKE_REPORT_VALUE, FAKEREPORTVALUE, reg_fake_report_value, fakereportvalue);

    RU_REG_WRITE(0, EPN, FAKE_REPORT_VALUE, reg_fake_report_value);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fake_report_value_get(uint32_t *fakereportvalue)
{
    uint32_t reg_fake_report_value=0;

#ifdef VALIDATE_PARMS
    if(!fakereportvalue)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FAKE_REPORT_VALUE, reg_fake_report_value);

    *fakereportvalue = RU_FIELD_GET(0, EPN, FAKE_REPORT_VALUE, FAKEREPORTVALUE, reg_fake_report_value);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_valid_opcode_map_set(uint16_t prvvalidmpcpopcodes)
{
    uint32_t reg_valid_opcode_map=0;

#ifdef VALIDATE_PARMS
#endif

    reg_valid_opcode_map = RU_FIELD_SET(0, EPN, VALID_OPCODE_MAP, PRVVALIDMPCPOPCODES, reg_valid_opcode_map, prvvalidmpcpopcodes);

    RU_REG_WRITE(0, EPN, VALID_OPCODE_MAP, reg_valid_opcode_map);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_valid_opcode_map_get(uint16_t *prvvalidmpcpopcodes)
{
    uint32_t reg_valid_opcode_map=0;

#ifdef VALIDATE_PARMS
    if(!prvvalidmpcpopcodes)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, VALID_OPCODE_MAP, reg_valid_opcode_map);

    *prvvalidmpcpopcodes = RU_FIELD_GET(0, EPN, VALID_OPCODE_MAP, PRVVALIDMPCPOPCODES, reg_valid_opcode_map);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_packet_tx_margin_set(uint16_t uppackettxmargin)
{
    uint32_t reg_up_packet_tx_margin=0;

#ifdef VALIDATE_PARMS
#endif

    reg_up_packet_tx_margin = RU_FIELD_SET(0, EPN, UP_PACKET_TX_MARGIN, UPPACKETTXMARGIN, reg_up_packet_tx_margin, uppackettxmargin);

    RU_REG_WRITE(0, EPN, UP_PACKET_TX_MARGIN, reg_up_packet_tx_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_packet_tx_margin_get(uint16_t *uppackettxmargin)
{
    uint32_t reg_up_packet_tx_margin=0;

#ifdef VALIDATE_PARMS
    if(!uppackettxmargin)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UP_PACKET_TX_MARGIN, reg_up_packet_tx_margin);

    *uppackettxmargin = RU_FIELD_GET(0, EPN, UP_PACKET_TX_MARGIN, UPPACKETTXMARGIN, reg_up_packet_tx_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_multi_pri_cfg_0_set(const epn_multi_pri_cfg_0 *multi_pri_cfg_0)
{
    uint32_t reg_multi_pri_cfg_0=0;

#ifdef VALIDATE_PARMS
    if(!multi_pri_cfg_0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((multi_pri_cfg_0->cfgctcschdeficiten >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->prvzeroburstcapoverridemode >= _2BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgsharedl2 >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgsharedburstcap >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgrptgntsoutst0 >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgrpthiprifirst0 >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgrptswapqs0 >= _1BITS_MAX_VAL_) ||
       (multi_pri_cfg_0->cfgrptmultipri0 >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGCTCSCHDEFICITEN, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgctcschdeficiten);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, PRVZEROBURSTCAPOVERRIDEMODE, reg_multi_pri_cfg_0, multi_pri_cfg_0->prvzeroburstcapoverridemode);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGSHAREDL2, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgsharedl2);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGSHAREDBURSTCAP, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgsharedburstcap);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGRPTGNTSOUTST0, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgrptgntsoutst0);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGRPTHIPRIFIRST0, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgrpthiprifirst0);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGRPTSWAPQS0, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgrptswapqs0);
    reg_multi_pri_cfg_0 = RU_FIELD_SET(0, EPN, MULTI_PRI_CFG_0, CFGRPTMULTIPRI0, reg_multi_pri_cfg_0, multi_pri_cfg_0->cfgrptmultipri0);

    RU_REG_WRITE(0, EPN, MULTI_PRI_CFG_0, reg_multi_pri_cfg_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_multi_pri_cfg_0_get(epn_multi_pri_cfg_0 *multi_pri_cfg_0)
{
    uint32_t reg_multi_pri_cfg_0=0;

#ifdef VALIDATE_PARMS
    if(!multi_pri_cfg_0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MULTI_PRI_CFG_0, reg_multi_pri_cfg_0);

    multi_pri_cfg_0->cfgctcschdeficiten = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGCTCSCHDEFICITEN, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->prvzeroburstcapoverridemode = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, PRVZEROBURSTCAPOVERRIDEMODE, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgsharedl2 = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGSHAREDL2, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgsharedburstcap = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGSHAREDBURSTCAP, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgrptgntsoutst0 = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGRPTGNTSOUTST0, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgrpthiprifirst0 = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGRPTHIPRIFIRST0, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgrptswapqs0 = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGRPTSWAPQS0, reg_multi_pri_cfg_0);
    multi_pri_cfg_0->cfgrptmultipri0 = RU_FIELD_GET(0, EPN, MULTI_PRI_CFG_0, CFGRPTMULTIPRI0, reg_multi_pri_cfg_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_shared_bcap_ovrflow_get(uint16_t *sharedburstcapoverflow)
{
    uint32_t reg_shared_bcap_ovrflow=0;

#ifdef VALIDATE_PARMS
    if(!sharedburstcapoverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, SHARED_BCAP_OVRFLOW, reg_shared_bcap_ovrflow);

    *sharedburstcapoverflow = RU_FIELD_GET(0, EPN, SHARED_BCAP_OVRFLOW, SHAREDBURSTCAPOVERFLOW, reg_shared_bcap_ovrflow);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_forced_report_en_set(uint8_t link_idx, bdmf_boolean cfgForceReportEn)
{
    uint32_t reg_forced_report_en=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, FORCED_REPORT_EN, reg_forced_report_en);

    RDP_FIELD_SET(reg_forced_report_en, (link_idx % 32) *1, 0x1, cfgForceReportEn);

    RU_REG_WRITE(0, EPN, FORCED_REPORT_EN, reg_forced_report_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_forced_report_en_get(uint8_t link_idx, bdmf_boolean *cfgForceReportEn)
{
    uint32_t reg_forced_report_en=0;

#ifdef VALIDATE_PARMS
    if(!cfgForceReportEn)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FORCED_REPORT_EN, reg_forced_report_en);

    *cfgForceReportEn = RDP_FIELD_GET(reg_forced_report_en, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_forced_report_max_interval_set(uint8_t cfgmaxreportinterval)
{
    uint32_t reg_forced_report_max_interval=0;

#ifdef VALIDATE_PARMS
    if((cfgmaxreportinterval >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_forced_report_max_interval = RU_FIELD_SET(0, EPN, FORCED_REPORT_MAX_INTERVAL, CFGMAXREPORTINTERVAL, reg_forced_report_max_interval, cfgmaxreportinterval);

    RU_REG_WRITE(0, EPN, FORCED_REPORT_MAX_INTERVAL, reg_forced_report_max_interval);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_forced_report_max_interval_get(uint8_t *cfgmaxreportinterval)
{
    uint32_t reg_forced_report_max_interval=0;

#ifdef VALIDATE_PARMS
    if(!cfgmaxreportinterval)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FORCED_REPORT_MAX_INTERVAL, reg_forced_report_max_interval);

    *cfgmaxreportinterval = RU_FIELD_GET(0, EPN, FORCED_REPORT_MAX_INTERVAL, CFGMAXREPORTINTERVAL, reg_forced_report_max_interval);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l2s_flush_config_set(bdmf_boolean cfgflushl2sen, bdmf_boolean flushl2sdone, uint8_t cfgflushl2ssel)
{
    uint32_t reg_l2s_flush_config=0;

#ifdef VALIDATE_PARMS
    if((cfgflushl2sen >= _1BITS_MAX_VAL_) ||
       (flushl2sdone >= _1BITS_MAX_VAL_) ||
       (cfgflushl2ssel >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_l2s_flush_config = RU_FIELD_SET(0, EPN, L2S_FLUSH_CONFIG, CFGFLUSHL2SEN, reg_l2s_flush_config, cfgflushl2sen);
    reg_l2s_flush_config = RU_FIELD_SET(0, EPN, L2S_FLUSH_CONFIG, FLUSHL2SDONE, reg_l2s_flush_config, flushl2sdone);
    reg_l2s_flush_config = RU_FIELD_SET(0, EPN, L2S_FLUSH_CONFIG, CFGFLUSHL2SSEL, reg_l2s_flush_config, cfgflushl2ssel);

    RU_REG_WRITE(0, EPN, L2S_FLUSH_CONFIG, reg_l2s_flush_config);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_l2s_flush_config_get(bdmf_boolean *cfgflushl2sen, bdmf_boolean *flushl2sdone, uint8_t *cfgflushl2ssel)
{
    uint32_t reg_l2s_flush_config=0;

#ifdef VALIDATE_PARMS
    if(!cfgflushl2sen || !flushl2sdone || !cfgflushl2ssel)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, L2S_FLUSH_CONFIG, reg_l2s_flush_config);

    *cfgflushl2sen = RU_FIELD_GET(0, EPN, L2S_FLUSH_CONFIG, CFGFLUSHL2SEN, reg_l2s_flush_config);
    *flushl2sdone = RU_FIELD_GET(0, EPN, L2S_FLUSH_CONFIG, FLUSHL2SDONE, reg_l2s_flush_config);
    *cfgflushl2ssel = RU_FIELD_GET(0, EPN, L2S_FLUSH_CONFIG, CFGFLUSHL2SSEL, reg_l2s_flush_config);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_command_set(bdmf_boolean dportbusy, uint8_t dportselect, bdmf_boolean dportcontrol)
{
    uint32_t reg_data_port_command=0;

#ifdef VALIDATE_PARMS
    if((dportbusy >= _1BITS_MAX_VAL_) ||
       (dportselect >= _5BITS_MAX_VAL_) ||
       (dportcontrol >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_data_port_command = RU_FIELD_SET(0, EPN, DATA_PORT_COMMAND, DPORTBUSY, reg_data_port_command, dportbusy);
    reg_data_port_command = RU_FIELD_SET(0, EPN, DATA_PORT_COMMAND, DPORTSELECT, reg_data_port_command, dportselect);
    reg_data_port_command = RU_FIELD_SET(0, EPN, DATA_PORT_COMMAND, DPORTCONTROL, reg_data_port_command, dportcontrol);

    RU_REG_WRITE(0, EPN, DATA_PORT_COMMAND, reg_data_port_command);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_command_get(bdmf_boolean *dportbusy, uint8_t *dportselect, bdmf_boolean *dportcontrol)
{
    uint32_t reg_data_port_command=0;

#ifdef VALIDATE_PARMS
    if(!dportbusy || !dportselect || !dportcontrol)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DATA_PORT_COMMAND, reg_data_port_command);

    *dportbusy = RU_FIELD_GET(0, EPN, DATA_PORT_COMMAND, DPORTBUSY, reg_data_port_command);
    *dportselect = RU_FIELD_GET(0, EPN, DATA_PORT_COMMAND, DPORTSELECT, reg_data_port_command);
    *dportcontrol = RU_FIELD_GET(0, EPN, DATA_PORT_COMMAND, DPORTCONTROL, reg_data_port_command);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_address_set(uint16_t dportaddr)
{
    uint32_t reg_data_port_address=0;

#ifdef VALIDATE_PARMS
    if((dportaddr >= _14BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_data_port_address = RU_FIELD_SET(0, EPN, DATA_PORT_ADDRESS, DPORTADDR, reg_data_port_address, dportaddr);

    RU_REG_WRITE(0, EPN, DATA_PORT_ADDRESS, reg_data_port_address);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_address_get(uint16_t *dportaddr)
{
    uint32_t reg_data_port_address=0;

#ifdef VALIDATE_PARMS
    if(!dportaddr)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DATA_PORT_ADDRESS, reg_data_port_address);

    *dportaddr = RU_FIELD_GET(0, EPN, DATA_PORT_ADDRESS, DPORTADDR, reg_data_port_address);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_data_0_set(uint32_t dportdata0)
{
    uint32_t reg_data_port_data_0=0;

#ifdef VALIDATE_PARMS
#endif

    reg_data_port_data_0 = RU_FIELD_SET(0, EPN, DATA_PORT_DATA_0, DPORTDATA0, reg_data_port_data_0, dportdata0);

    RU_REG_WRITE(0, EPN, DATA_PORT_DATA_0, reg_data_port_data_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_data_port_data_0_get(uint32_t *dportdata0)
{
    uint32_t reg_data_port_data_0=0;

#ifdef VALIDATE_PARMS
    if(!dportdata0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DATA_PORT_DATA_0, reg_data_port_data_0);

    *dportdata0 = RU_FIELD_GET(0, EPN, DATA_PORT_DATA_0, DPORTDATA0, reg_data_port_data_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_big_cnt_set(uint32_t unmapbigerrcnt)
{
    uint32_t reg_unmap_big_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_big_cnt = RU_FIELD_SET(0, EPN, UNMAP_BIG_CNT, UNMAPBIGERRCNT, reg_unmap_big_cnt, unmapbigerrcnt);

    RU_REG_WRITE(0, EPN, UNMAP_BIG_CNT, reg_unmap_big_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_big_cnt_get(uint32_t *unmapbigerrcnt)
{
    uint32_t reg_unmap_big_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapbigerrcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_BIG_CNT, reg_unmap_big_cnt);

    *unmapbigerrcnt = RU_FIELD_GET(0, EPN, UNMAP_BIG_CNT, UNMAPBIGERRCNT, reg_unmap_big_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_frame_cnt_set(uint32_t unmapfrcnt)
{
    uint32_t reg_unmap_frame_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_frame_cnt = RU_FIELD_SET(0, EPN, UNMAP_FRAME_CNT, UNMAPFRCNT, reg_unmap_frame_cnt, unmapfrcnt);

    RU_REG_WRITE(0, EPN, UNMAP_FRAME_CNT, reg_unmap_frame_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_frame_cnt_get(uint32_t *unmapfrcnt)
{
    uint32_t reg_unmap_frame_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapfrcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_FRAME_CNT, reg_unmap_frame_cnt);

    *unmapfrcnt = RU_FIELD_GET(0, EPN, UNMAP_FRAME_CNT, UNMAPFRCNT, reg_unmap_frame_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_fcs_cnt_set(uint32_t unmapfcserrcnt)
{
    uint32_t reg_unmap_fcs_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_fcs_cnt = RU_FIELD_SET(0, EPN, UNMAP_FCS_CNT, UNMAPFCSERRCNT, reg_unmap_fcs_cnt, unmapfcserrcnt);

    RU_REG_WRITE(0, EPN, UNMAP_FCS_CNT, reg_unmap_fcs_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_fcs_cnt_get(uint32_t *unmapfcserrcnt)
{
    uint32_t reg_unmap_fcs_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapfcserrcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_FCS_CNT, reg_unmap_fcs_cnt);

    *unmapfcserrcnt = RU_FIELD_GET(0, EPN, UNMAP_FCS_CNT, UNMAPFCSERRCNT, reg_unmap_fcs_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_gate_cnt_set(uint32_t unmapgatecnt)
{
    uint32_t reg_unmap_gate_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_gate_cnt = RU_FIELD_SET(0, EPN, UNMAP_GATE_CNT, UNMAPGATECNT, reg_unmap_gate_cnt, unmapgatecnt);

    RU_REG_WRITE(0, EPN, UNMAP_GATE_CNT, reg_unmap_gate_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_gate_cnt_get(uint32_t *unmapgatecnt)
{
    uint32_t reg_unmap_gate_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapgatecnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_GATE_CNT, reg_unmap_gate_cnt);

    *unmapgatecnt = RU_FIELD_GET(0, EPN, UNMAP_GATE_CNT, UNMAPGATECNT, reg_unmap_gate_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_oam_cnt_set(uint32_t unmapoamcnt)
{
    uint32_t reg_unmap_oam_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_oam_cnt = RU_FIELD_SET(0, EPN, UNMAP_OAM_CNT, UNMAPOAMCNT, reg_unmap_oam_cnt, unmapoamcnt);

    RU_REG_WRITE(0, EPN, UNMAP_OAM_CNT, reg_unmap_oam_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_oam_cnt_get(uint32_t *unmapoamcnt)
{
    uint32_t reg_unmap_oam_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapoamcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_OAM_CNT, reg_unmap_oam_cnt);

    *unmapoamcnt = RU_FIELD_GET(0, EPN, UNMAP_OAM_CNT, UNMAPOAMCNT, reg_unmap_oam_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_small_cnt_set(uint32_t unmapsmallerrcnt)
{
    uint32_t reg_unmap_small_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unmap_small_cnt = RU_FIELD_SET(0, EPN, UNMAP_SMALL_CNT, UNMAPSMALLERRCNT, reg_unmap_small_cnt, unmapsmallerrcnt);

    RU_REG_WRITE(0, EPN, UNMAP_SMALL_CNT, reg_unmap_small_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unmap_small_cnt_get(uint32_t *unmapsmallerrcnt)
{
    uint32_t reg_unmap_small_cnt=0;

#ifdef VALIDATE_PARMS
    if(!unmapsmallerrcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNMAP_SMALL_CNT, reg_unmap_small_cnt);

    *unmapsmallerrcnt = RU_FIELD_GET(0, EPN, UNMAP_SMALL_CNT, UNMAPSMALLERRCNT, reg_unmap_small_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fif_dequeue_event_cnt_set(uint32_t fifdequeueeventcnt)
{
    uint32_t reg_fif_dequeue_event_cnt=0;

#ifdef VALIDATE_PARMS
#endif

    reg_fif_dequeue_event_cnt = RU_FIELD_SET(0, EPN, FIF_DEQUEUE_EVENT_CNT, FIFDEQUEUEEVENTCNT, reg_fif_dequeue_event_cnt, fifdequeueeventcnt);

    RU_REG_WRITE(0, EPN, FIF_DEQUEUE_EVENT_CNT, reg_fif_dequeue_event_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_fif_dequeue_event_cnt_get(uint32_t *fifdequeueeventcnt)
{
    uint32_t reg_fif_dequeue_event_cnt=0;

#ifdef VALIDATE_PARMS
    if(!fifdequeueeventcnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, FIF_DEQUEUE_EVENT_CNT, reg_fif_dequeue_event_cnt);

    *fifdequeueeventcnt = RU_FIELD_GET(0, EPN, FIF_DEQUEUE_EVENT_CNT, FIFDEQUEUEEVENTCNT, reg_fif_dequeue_event_cnt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_up_fault_halt_en_set(uint8_t link_idx, bdmf_boolean bbhUpsFaultHaltEn)
{
    uint32_t reg_bbh_up_fault_halt_en=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, BBH_UP_FAULT_HALT_EN, reg_bbh_up_fault_halt_en);

    RDP_FIELD_SET(reg_bbh_up_fault_halt_en, (link_idx % 32) *1, 0x1, bbhUpsFaultHaltEn);

    RU_REG_WRITE(0, EPN, BBH_UP_FAULT_HALT_EN, reg_bbh_up_fault_halt_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_up_fault_halt_en_get(uint8_t link_idx, bdmf_boolean *bbhUpsFaultHaltEn)
{
    uint32_t reg_bbh_up_fault_halt_en=0;

#ifdef VALIDATE_PARMS
    if(!bbhUpsFaultHaltEn)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UP_FAULT_HALT_EN, reg_bbh_up_fault_halt_en);

    *bbhUpsFaultHaltEn = RDP_FIELD_GET(reg_bbh_up_fault_halt_en, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_up_tardy_halt_en_set(bdmf_boolean fataltardybbhaborten)
{
    uint32_t reg_bbh_up_tardy_halt_en=0;

#ifdef VALIDATE_PARMS
    if((fataltardybbhaborten >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_up_tardy_halt_en = RU_FIELD_SET(0, EPN, BBH_UP_TARDY_HALT_EN, FATALTARDYBBHABORTEN, reg_bbh_up_tardy_halt_en, fataltardybbhaborten);

    RU_REG_WRITE(0, EPN, BBH_UP_TARDY_HALT_EN, reg_bbh_up_tardy_halt_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_up_tardy_halt_en_get(bdmf_boolean *fataltardybbhaborten)
{
    uint32_t reg_bbh_up_tardy_halt_en=0;

#ifdef VALIDATE_PARMS
    if(!fataltardybbhaborten)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_UP_TARDY_HALT_EN, reg_bbh_up_tardy_halt_en);

    *fataltardybbhaborten = RU_FIELD_GET(0, EPN, BBH_UP_TARDY_HALT_EN, FATALTARDYBBHABORTEN, reg_bbh_up_tardy_halt_en);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_debug_status_0_get(uint8_t *l2squefulldebug, bdmf_boolean *dndlufull, bdmf_boolean *dnsecfull, bdmf_boolean *epnliffifofull)
{
    uint32_t reg_debug_status_0=0;

#ifdef VALIDATE_PARMS
    if(!l2squefulldebug || !dndlufull || !dnsecfull || !epnliffifofull)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DEBUG_STATUS_0, reg_debug_status_0);

    *l2squefulldebug = RU_FIELD_GET(0, EPN, DEBUG_STATUS_0, L2SQUEFULLDEBUG, reg_debug_status_0);
    *dndlufull = RU_FIELD_GET(0, EPN, DEBUG_STATUS_0, DNDLUFULL, reg_debug_status_0);
    *dnsecfull = RU_FIELD_GET(0, EPN, DEBUG_STATUS_0, DNSECFULL, reg_debug_status_0);
    *epnliffifofull = RU_FIELD_GET(0, EPN, DEBUG_STATUS_0, EPNLIFFIFOFULL, reg_debug_status_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_debug_status_1_get(uint8_t link_idx, bdmf_boolean *gntRdy)
{
    uint32_t reg_debug_status_1=0;

#ifdef VALIDATE_PARMS
    if(!gntRdy)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DEBUG_STATUS_1, reg_debug_status_1);

    *gntRdy = RDP_FIELD_GET(reg_debug_status_1, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_debug_l2s_ptr_sel_set(uint8_t cfgl2sdebugptrsel, uint16_t l2sdebugptrstate)
{
    uint32_t reg_debug_l2s_ptr_sel=0;

#ifdef VALIDATE_PARMS
    if((cfgl2sdebugptrsel >= _3BITS_MAX_VAL_) ||
       (l2sdebugptrstate >= _15BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_debug_l2s_ptr_sel = RU_FIELD_SET(0, EPN, DEBUG_L2S_PTR_SEL, CFGL2SDEBUGPTRSEL, reg_debug_l2s_ptr_sel, cfgl2sdebugptrsel);
    reg_debug_l2s_ptr_sel = RU_FIELD_SET(0, EPN, DEBUG_L2S_PTR_SEL, L2SDEBUGPTRSTATE, reg_debug_l2s_ptr_sel, l2sdebugptrstate);

    RU_REG_WRITE(0, EPN, DEBUG_L2S_PTR_SEL, reg_debug_l2s_ptr_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_debug_l2s_ptr_sel_get(uint8_t *cfgl2sdebugptrsel, uint16_t *l2sdebugptrstate)
{
    uint32_t reg_debug_l2s_ptr_sel=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2sdebugptrsel || !l2sdebugptrstate)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DEBUG_L2S_PTR_SEL, reg_debug_l2s_ptr_sel);

    *cfgl2sdebugptrsel = RU_FIELD_GET(0, EPN, DEBUG_L2S_PTR_SEL, CFGL2SDEBUGPTRSEL, reg_debug_l2s_ptr_sel);
    *l2sdebugptrstate = RU_FIELD_GET(0, EPN, DEBUG_L2S_PTR_SEL, L2SDEBUGPTRSTATE, reg_debug_l2s_ptr_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_olt_mac_addr_lo_set(uint32_t oltaddrlo)
{
    uint32_t reg_olt_mac_addr_lo=0;

#ifdef VALIDATE_PARMS
#endif

    reg_olt_mac_addr_lo = RU_FIELD_SET(0, EPN, OLT_MAC_ADDR_LO, OLTADDRLO, reg_olt_mac_addr_lo, oltaddrlo);

    RU_REG_WRITE(0, EPN, OLT_MAC_ADDR_LO, reg_olt_mac_addr_lo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_olt_mac_addr_lo_get(uint32_t *oltaddrlo)
{
    uint32_t reg_olt_mac_addr_lo=0;

#ifdef VALIDATE_PARMS
    if(!oltaddrlo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, OLT_MAC_ADDR_LO, reg_olt_mac_addr_lo);

    *oltaddrlo = RU_FIELD_GET(0, EPN, OLT_MAC_ADDR_LO, OLTADDRLO, reg_olt_mac_addr_lo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_olt_mac_addr_hi_set(uint16_t oltaddrhi)
{
    uint32_t reg_olt_mac_addr_hi=0;

#ifdef VALIDATE_PARMS
#endif

    reg_olt_mac_addr_hi = RU_FIELD_SET(0, EPN, OLT_MAC_ADDR_HI, OLTADDRHI, reg_olt_mac_addr_hi, oltaddrhi);

    RU_REG_WRITE(0, EPN, OLT_MAC_ADDR_HI, reg_olt_mac_addr_hi);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_olt_mac_addr_hi_get(uint16_t *oltaddrhi)
{
    uint32_t reg_olt_mac_addr_hi=0;

#ifdef VALIDATE_PARMS
    if(!oltaddrhi)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, OLT_MAC_ADDR_HI, reg_olt_mac_addr_hi);

    *oltaddrhi = RU_FIELD_GET(0, EPN, OLT_MAC_ADDR_HI, OLTADDRHI, reg_olt_mac_addr_hi);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_dqu_empty_get(uint8_t l1_acc_idx, bdmf_boolean *l1sDquQueEmpty)
{
    uint32_t reg_tx_l1s_shp_dqu_empty=0;

#ifdef VALIDATE_PARMS
    if(!l1sDquQueEmpty)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_DQU_EMPTY, reg_tx_l1s_shp_dqu_empty);

    *l1sDquQueEmpty = RDP_FIELD_GET(reg_tx_l1s_shp_dqu_empty, (l1_acc_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_unshaped_empty_get(uint8_t l1_acc_idx, bdmf_boolean *l1sUnshapedQueEmpty)
{
    uint32_t reg_tx_l1s_unshaped_empty=0;

#ifdef VALIDATE_PARMS
    if(!l1sUnshapedQueEmpty)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_UNSHAPED_EMPTY, reg_tx_l1s_unshaped_empty);

    *l1sUnshapedQueEmpty = RDP_FIELD_GET(reg_tx_l1s_unshaped_empty, (l1_acc_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_empty_get(uint8_t l2_queue_idx, bdmf_boolean *l2sQueEmpty)
{
    uint32_t reg_tx_l2s_que_empty=0;

#ifdef VALIDATE_PARMS
    if(!l2sQueEmpty)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_EMPTY, reg_tx_l2s_que_empty);

    *l2sQueEmpty = RDP_FIELD_GET(reg_tx_l2s_que_empty, (l2_queue_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_full_get(uint8_t l2_queue_idx, bdmf_boolean *l2sQueFull)
{
    uint32_t reg_tx_l2s_que_full=0;

#ifdef VALIDATE_PARMS
    if(!l2sQueFull)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_FULL, reg_tx_l2s_que_full);

    *l2sQueFull = RDP_FIELD_GET(reg_tx_l2s_que_full, (l2_queue_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_stopped_get(uint8_t l2_queue_idx, bdmf_boolean *l2sStoppedQueues)
{
    uint32_t reg_tx_l2s_que_stopped=0;

#ifdef VALIDATE_PARMS
    if(!l2sStoppedQueues)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_STOPPED, reg_tx_l2s_que_stopped);

    *l2sStoppedQueues = RDP_FIELD_GET(reg_tx_l2s_que_stopped, (l2_queue_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_max_outstanding_tardy_packets_set(uint16_t cfgmaxoutstandingtardypackets)
{
    uint32_t reg_bbh_max_outstanding_tardy_packets=0;

#ifdef VALIDATE_PARMS
    if((cfgmaxoutstandingtardypackets >= _10BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_bbh_max_outstanding_tardy_packets = RU_FIELD_SET(0, EPN, BBH_MAX_OUTSTANDING_TARDY_PACKETS, CFGMAXOUTSTANDINGTARDYPACKETS, reg_bbh_max_outstanding_tardy_packets, cfgmaxoutstandingtardypackets);

    RU_REG_WRITE(0, EPN, BBH_MAX_OUTSTANDING_TARDY_PACKETS, reg_bbh_max_outstanding_tardy_packets);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_max_outstanding_tardy_packets_get(uint16_t *cfgmaxoutstandingtardypackets)
{
    uint32_t reg_bbh_max_outstanding_tardy_packets=0;

#ifdef VALIDATE_PARMS
    if(!cfgmaxoutstandingtardypackets)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_MAX_OUTSTANDING_TARDY_PACKETS, reg_bbh_max_outstanding_tardy_packets);

    *cfgmaxoutstandingtardypackets = RU_FIELD_GET(0, EPN, BBH_MAX_OUTSTANDING_TARDY_PACKETS, CFGMAXOUTSTANDINGTARDYPACKETS, reg_bbh_max_outstanding_tardy_packets);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_min_report_value_difference_set(uint16_t prvminreportdiff)
{
    uint32_t reg_min_report_value_difference=0;

#ifdef VALIDATE_PARMS
    if((prvminreportdiff >= _14BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_min_report_value_difference = RU_FIELD_SET(0, EPN, MIN_REPORT_VALUE_DIFFERENCE, PRVMINREPORTDIFF, reg_min_report_value_difference, prvminreportdiff);

    RU_REG_WRITE(0, EPN, MIN_REPORT_VALUE_DIFFERENCE, reg_min_report_value_difference);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_min_report_value_difference_get(uint16_t *prvminreportdiff)
{
    uint32_t reg_min_report_value_difference=0;

#ifdef VALIDATE_PARMS
    if(!prvminreportdiff)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, MIN_REPORT_VALUE_DIFFERENCE, reg_min_report_value_difference);

    *prvminreportdiff = RU_FIELD_GET(0, EPN, MIN_REPORT_VALUE_DIFFERENCE, PRVMINREPORTDIFF, reg_min_report_value_difference);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_bbh_status_fifo_overflow_get(uint8_t bbh_queue_idx, bdmf_boolean *utxBbhStatusFifoOverflow)
{
    uint32_t reg_bbh_status_fifo_overflow=0;

#ifdef VALIDATE_PARMS
    if(!utxBbhStatusFifoOverflow)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BBH_STATUS_FIFO_OVERFLOW, reg_bbh_status_fifo_overflow);

    *utxBbhStatusFifoOverflow = RDP_FIELD_GET(reg_bbh_status_fifo_overflow, (bbh_queue_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_spare_ctl_set(uint32_t cfgepnspare, bdmf_boolean ecoutxsnfenable, bdmf_boolean ecojira758enable)
{
    uint32_t reg_spare_ctl=0;

#ifdef VALIDATE_PARMS
    if((cfgepnspare >= _30BITS_MAX_VAL_) ||
       (ecoutxsnfenable >= _1BITS_MAX_VAL_) ||
       (ecojira758enable >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_spare_ctl = RU_FIELD_SET(0, EPN, SPARE_CTL, CFGEPNSPARE, reg_spare_ctl, cfgepnspare);
    reg_spare_ctl = RU_FIELD_SET(0, EPN, SPARE_CTL, ECOUTXSNFENABLE, reg_spare_ctl, ecoutxsnfenable);
    reg_spare_ctl = RU_FIELD_SET(0, EPN, SPARE_CTL, ECOJIRA758ENABLE, reg_spare_ctl, ecojira758enable);

    RU_REG_WRITE(0, EPN, SPARE_CTL, reg_spare_ctl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_spare_ctl_get(uint32_t *cfgepnspare, bdmf_boolean *ecoutxsnfenable, bdmf_boolean *ecojira758enable)
{
    uint32_t reg_spare_ctl=0;

#ifdef VALIDATE_PARMS
    if(!cfgepnspare || !ecoutxsnfenable || !ecojira758enable)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, SPARE_CTL, reg_spare_ctl);

    *cfgepnspare = RU_FIELD_GET(0, EPN, SPARE_CTL, CFGEPNSPARE, reg_spare_ctl);
    *ecoutxsnfenable = RU_FIELD_GET(0, EPN, SPARE_CTL, ECOUTXSNFENABLE, reg_spare_ctl);
    *ecojira758enable = RU_FIELD_GET(0, EPN, SPARE_CTL, ECOJIRA758ENABLE, reg_spare_ctl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_ts_sync_offset_set(bdmf_boolean cfg_ts48_sync_ns_increment, uint16_t cfgtssyncoffset_312, uint16_t cfgtssyncoffset_125)
{
    uint32_t reg_ts_sync_offset=0;

#ifdef VALIDATE_PARMS
    if((cfg_ts48_sync_ns_increment >= _1BITS_MAX_VAL_) ||
       (cfgtssyncoffset_312 >= _9BITS_MAX_VAL_) ||
       (cfgtssyncoffset_125 >= _9BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_ts_sync_offset = RU_FIELD_SET(0, EPN, TS_SYNC_OFFSET, CFG_TS48_SYNC_NS_INCREMENT, reg_ts_sync_offset, cfg_ts48_sync_ns_increment);
    reg_ts_sync_offset = RU_FIELD_SET(0, EPN, TS_SYNC_OFFSET, CFGTSSYNCOFFSET_312, reg_ts_sync_offset, cfgtssyncoffset_312);
    reg_ts_sync_offset = RU_FIELD_SET(0, EPN, TS_SYNC_OFFSET, CFGTSSYNCOFFSET_125, reg_ts_sync_offset, cfgtssyncoffset_125);

    RU_REG_WRITE(0, EPN, TS_SYNC_OFFSET, reg_ts_sync_offset);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_ts_sync_offset_get(bdmf_boolean *cfg_ts48_sync_ns_increment, uint16_t *cfgtssyncoffset_312, uint16_t *cfgtssyncoffset_125)
{
    uint32_t reg_ts_sync_offset=0;

#ifdef VALIDATE_PARMS
    if(!cfg_ts48_sync_ns_increment || !cfgtssyncoffset_312 || !cfgtssyncoffset_125)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TS_SYNC_OFFSET, reg_ts_sync_offset);

    *cfg_ts48_sync_ns_increment = RU_FIELD_GET(0, EPN, TS_SYNC_OFFSET, CFG_TS48_SYNC_NS_INCREMENT, reg_ts_sync_offset);
    *cfgtssyncoffset_312 = RU_FIELD_GET(0, EPN, TS_SYNC_OFFSET, CFGTSSYNCOFFSET_312, reg_ts_sync_offset);
    *cfgtssyncoffset_125 = RU_FIELD_GET(0, EPN, TS_SYNC_OFFSET, CFGTSSYNCOFFSET_125, reg_ts_sync_offset);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_ts_offset_set(uint32_t cfgdntsoffset)
{
    uint32_t reg_dn_ts_offset=0;

#ifdef VALIDATE_PARMS
#endif

    reg_dn_ts_offset = RU_FIELD_SET(0, EPN, DN_TS_OFFSET, CFGDNTSOFFSET, reg_dn_ts_offset, cfgdntsoffset);

    RU_REG_WRITE(0, EPN, DN_TS_OFFSET, reg_dn_ts_offset);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_ts_offset_get(uint32_t *cfgdntsoffset)
{
    uint32_t reg_dn_ts_offset=0;

#ifdef VALIDATE_PARMS
    if(!cfgdntsoffset)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_TS_OFFSET, reg_dn_ts_offset);

    *cfgdntsoffset = RU_FIELD_GET(0, EPN, DN_TS_OFFSET, CFGDNTSOFFSET, reg_dn_ts_offset);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_ts_offset_lo_set(uint32_t cfguptsoffset_lo)
{
    uint32_t reg_up_ts_offset_lo=0;

#ifdef VALIDATE_PARMS
#endif

    reg_up_ts_offset_lo = RU_FIELD_SET(0, EPN, UP_TS_OFFSET_LO, CFGUPTSOFFSET_LO, reg_up_ts_offset_lo, cfguptsoffset_lo);

    RU_REG_WRITE(0, EPN, UP_TS_OFFSET_LO, reg_up_ts_offset_lo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_ts_offset_lo_get(uint32_t *cfguptsoffset_lo)
{
    uint32_t reg_up_ts_offset_lo=0;

#ifdef VALIDATE_PARMS
    if(!cfguptsoffset_lo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UP_TS_OFFSET_LO, reg_up_ts_offset_lo);

    *cfguptsoffset_lo = RU_FIELD_GET(0, EPN, UP_TS_OFFSET_LO, CFGUPTSOFFSET_LO, reg_up_ts_offset_lo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_ts_offset_hi_set(uint16_t cfguptsoffset_hi)
{
    uint32_t reg_up_ts_offset_hi=0;

#ifdef VALIDATE_PARMS
#endif

    reg_up_ts_offset_hi = RU_FIELD_SET(0, EPN, UP_TS_OFFSET_HI, CFGUPTSOFFSET_HI, reg_up_ts_offset_hi, cfguptsoffset_hi);

    RU_REG_WRITE(0, EPN, UP_TS_OFFSET_HI, reg_up_ts_offset_hi);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_ts_offset_hi_get(uint16_t *cfguptsoffset_hi)
{
    uint32_t reg_up_ts_offset_hi=0;

#ifdef VALIDATE_PARMS
    if(!cfguptsoffset_hi)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UP_TS_OFFSET_HI, reg_up_ts_offset_hi);

    *cfguptsoffset_hi = RU_FIELD_GET(0, EPN, UP_TS_OFFSET_HI, CFGUPTSOFFSET_HI, reg_up_ts_offset_hi);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_two_step_ts_ctl_set(bdmf_boolean twostepffrd, uint8_t twostepffentries)
{
    uint32_t reg_two_step_ts_ctl=0;

#ifdef VALIDATE_PARMS
    if((twostepffrd >= _1BITS_MAX_VAL_) ||
       (twostepffentries >= _3BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_two_step_ts_ctl = RU_FIELD_SET(0, EPN, TWO_STEP_TS_CTL, TWOSTEPFFRD, reg_two_step_ts_ctl, twostepffrd);
    reg_two_step_ts_ctl = RU_FIELD_SET(0, EPN, TWO_STEP_TS_CTL, TWOSTEPFFENTRIES, reg_two_step_ts_ctl, twostepffentries);

    RU_REG_WRITE(0, EPN, TWO_STEP_TS_CTL, reg_two_step_ts_ctl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_two_step_ts_ctl_get(bdmf_boolean *twostepffrd, uint8_t *twostepffentries)
{
    uint32_t reg_two_step_ts_ctl=0;

#ifdef VALIDATE_PARMS
    if(!twostepffrd || !twostepffentries)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TWO_STEP_TS_CTL, reg_two_step_ts_ctl);

    *twostepffrd = RU_FIELD_GET(0, EPN, TWO_STEP_TS_CTL, TWOSTEPFFRD, reg_two_step_ts_ctl);
    *twostepffentries = RU_FIELD_GET(0, EPN, TWO_STEP_TS_CTL, TWOSTEPFFENTRIES, reg_two_step_ts_ctl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_two_step_ts_value_lo_get(uint32_t *twosteptimestamp_lo)
{
    uint32_t reg_two_step_ts_value_lo=0;

#ifdef VALIDATE_PARMS
    if(!twosteptimestamp_lo)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TWO_STEP_TS_VALUE_LO, reg_two_step_ts_value_lo);

    *twosteptimestamp_lo = RU_FIELD_GET(0, EPN, TWO_STEP_TS_VALUE_LO, TWOSTEPTIMESTAMP_LO, reg_two_step_ts_value_lo);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_two_step_ts_value_hi_get(uint16_t *twosteptimestamp_hi)
{
    uint32_t reg_two_step_ts_value_hi=0;

#ifdef VALIDATE_PARMS
    if(!twosteptimestamp_hi)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TWO_STEP_TS_VALUE_HI, reg_two_step_ts_value_hi);

    *twosteptimestamp_hi = RU_FIELD_GET(0, EPN, TWO_STEP_TS_VALUE_HI, TWOSTEPTIMESTAMP_HI, reg_two_step_ts_value_hi);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_1588_timestamp_int_status_set(bdmf_boolean int1588pktabort, bdmf_boolean int1588twostepffint)
{
    uint32_t reg_1588_timestamp_int_status=0;

#ifdef VALIDATE_PARMS
    if((int1588pktabort >= _1BITS_MAX_VAL_) ||
       (int1588twostepffint >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_1588_timestamp_int_status = RU_FIELD_SET(0, EPN, 1588_TIMESTAMP_INT_STATUS, INT1588PKTABORT, reg_1588_timestamp_int_status, int1588pktabort);
    reg_1588_timestamp_int_status = RU_FIELD_SET(0, EPN, 1588_TIMESTAMP_INT_STATUS, INT1588TWOSTEPFFINT, reg_1588_timestamp_int_status, int1588twostepffint);

    RU_REG_WRITE(0, EPN, 1588_TIMESTAMP_INT_STATUS, reg_1588_timestamp_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_1588_timestamp_int_status_get(bdmf_boolean *int1588pktabort, bdmf_boolean *int1588twostepffint)
{
    uint32_t reg_1588_timestamp_int_status=0;

#ifdef VALIDATE_PARMS
    if(!int1588pktabort || !int1588twostepffint)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 1588_TIMESTAMP_INT_STATUS, reg_1588_timestamp_int_status);

    *int1588pktabort = RU_FIELD_GET(0, EPN, 1588_TIMESTAMP_INT_STATUS, INT1588PKTABORT, reg_1588_timestamp_int_status);
    *int1588twostepffint = RU_FIELD_GET(0, EPN, 1588_TIMESTAMP_INT_STATUS, INT1588TWOSTEPFFINT, reg_1588_timestamp_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_1588_timestamp_int_mask_set(bdmf_boolean ts1588pktabort_mask, bdmf_boolean ts1588twostepff_mask)
{
    uint32_t reg_1588_timestamp_int_mask=0;

#ifdef VALIDATE_PARMS
    if((ts1588pktabort_mask >= _1BITS_MAX_VAL_) ||
       (ts1588twostepff_mask >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_1588_timestamp_int_mask = RU_FIELD_SET(0, EPN, 1588_TIMESTAMP_INT_MASK, TS1588PKTABORT_MASK, reg_1588_timestamp_int_mask, ts1588pktabort_mask);
    reg_1588_timestamp_int_mask = RU_FIELD_SET(0, EPN, 1588_TIMESTAMP_INT_MASK, TS1588TWOSTEPFF_MASK, reg_1588_timestamp_int_mask, ts1588twostepff_mask);

    RU_REG_WRITE(0, EPN, 1588_TIMESTAMP_INT_MASK, reg_1588_timestamp_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_1588_timestamp_int_mask_get(bdmf_boolean *ts1588pktabort_mask, bdmf_boolean *ts1588twostepff_mask)
{
    uint32_t reg_1588_timestamp_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!ts1588pktabort_mask || !ts1588twostepff_mask)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 1588_TIMESTAMP_INT_MASK, reg_1588_timestamp_int_mask);

    *ts1588pktabort_mask = RU_FIELD_GET(0, EPN, 1588_TIMESTAMP_INT_MASK, TS1588PKTABORT_MASK, reg_1588_timestamp_int_mask);
    *ts1588twostepff_mask = RU_FIELD_GET(0, EPN, 1588_TIMESTAMP_INT_MASK, TS1588TWOSTEPFF_MASK, reg_1588_timestamp_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_packet_fetch_margin_set(uint16_t uppacketfetchmargin)
{
    uint32_t reg_up_packet_fetch_margin=0;

#ifdef VALIDATE_PARMS
#endif

    reg_up_packet_fetch_margin = RU_FIELD_SET(0, EPN, UP_PACKET_FETCH_MARGIN, UPPACKETFETCHMARGIN, reg_up_packet_fetch_margin, uppacketfetchmargin);

    RU_REG_WRITE(0, EPN, UP_PACKET_FETCH_MARGIN, reg_up_packet_fetch_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_up_packet_fetch_margin_get(uint16_t *uppacketfetchmargin)
{
    uint32_t reg_up_packet_fetch_margin=0;

#ifdef VALIDATE_PARMS
    if(!uppacketfetchmargin)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UP_PACKET_FETCH_MARGIN, reg_up_packet_fetch_margin);

    *uppacketfetchmargin = RU_FIELD_GET(0, EPN, UP_PACKET_FETCH_MARGIN, UPPACKETFETCHMARGIN, reg_up_packet_fetch_margin);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dn_1588_timestamp_get(uint32_t *dn_1588_ts)
{
    uint32_t reg_dn_1588_timestamp=0;

#ifdef VALIDATE_PARMS
    if(!dn_1588_ts)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DN_1588_TIMESTAMP, reg_dn_1588_timestamp);

    *dn_1588_ts = RU_FIELD_GET(0, EPN, DN_1588_TIMESTAMP, DN_1588_TS, reg_dn_1588_timestamp);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_cfg_set(uint16_t cfgpersrptduration, uint16_t cfgpersrptticksize)
{
    uint32_t reg_persistent_report_cfg=0;

#ifdef VALIDATE_PARMS
    if((cfgpersrptduration >= _10BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_persistent_report_cfg = RU_FIELD_SET(0, EPN, PERSISTENT_REPORT_CFG, CFGPERSRPTDURATION, reg_persistent_report_cfg, cfgpersrptduration);
    reg_persistent_report_cfg = RU_FIELD_SET(0, EPN, PERSISTENT_REPORT_CFG, CFGPERSRPTTICKSIZE, reg_persistent_report_cfg, cfgpersrptticksize);

    RU_REG_WRITE(0, EPN, PERSISTENT_REPORT_CFG, reg_persistent_report_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_cfg_get(uint16_t *cfgpersrptduration, uint16_t *cfgpersrptticksize)
{
    uint32_t reg_persistent_report_cfg=0;

#ifdef VALIDATE_PARMS
    if(!cfgpersrptduration || !cfgpersrptticksize)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, PERSISTENT_REPORT_CFG, reg_persistent_report_cfg);

    *cfgpersrptduration = RU_FIELD_GET(0, EPN, PERSISTENT_REPORT_CFG, CFGPERSRPTDURATION, reg_persistent_report_cfg);
    *cfgpersrptticksize = RU_FIELD_GET(0, EPN, PERSISTENT_REPORT_CFG, CFGPERSRPTTICKSIZE, reg_persistent_report_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_enables_set(uint8_t link_idx, bdmf_boolean cfgPersRptEnable)
{
    uint32_t reg_persistent_report_enables=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, PERSISTENT_REPORT_ENABLES, reg_persistent_report_enables);

    RDP_FIELD_SET(reg_persistent_report_enables, (link_idx % 32) *1, 0x1, cfgPersRptEnable);

    RU_REG_WRITE(0, EPN, PERSISTENT_REPORT_ENABLES, reg_persistent_report_enables);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_enables_get(uint8_t link_idx, bdmf_boolean *cfgPersRptEnable)
{
    uint32_t reg_persistent_report_enables=0;

#ifdef VALIDATE_PARMS
    if(!cfgPersRptEnable)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, PERSISTENT_REPORT_ENABLES, reg_persistent_report_enables);

    *cfgPersRptEnable = RDP_FIELD_GET(reg_persistent_report_enables, (link_idx % 32) *1, 0x1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_request_size_set(uint16_t cfgpersrptreqtq)
{
    uint32_t reg_persistent_report_request_size=0;

#ifdef VALIDATE_PARMS
#endif

    reg_persistent_report_request_size = RU_FIELD_SET(0, EPN, PERSISTENT_REPORT_REQUEST_SIZE, CFGPERSRPTREQTQ, reg_persistent_report_request_size, cfgpersrptreqtq);

    RU_REG_WRITE(0, EPN, PERSISTENT_REPORT_REQUEST_SIZE, reg_persistent_report_request_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_persistent_report_request_size_get(uint16_t *cfgpersrptreqtq)
{
    uint32_t reg_persistent_report_request_size=0;

#ifdef VALIDATE_PARMS
    if(!cfgpersrptreqtq)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, PERSISTENT_REPORT_REQUEST_SIZE, reg_persistent_report_request_size);

    *cfgpersrptreqtq = RU_FIELD_GET(0, EPN, PERSISTENT_REPORT_REQUEST_SIZE, CFGPERSRPTREQTQ, reg_persistent_report_request_size);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_aes_configuration_1_set(uint8_t link_idx, uint8_t prvUpstreamAesMode_1)
{
    uint32_t reg_aes_configuration_1=0;

#ifdef VALIDATE_PARMS
#endif

    RU_REG_READ(0, EPN, AES_CONFIGURATION_1, reg_aes_configuration_1);

    RDP_FIELD_SET(reg_aes_configuration_1, (link_idx % 16) *2, 0x2, prvUpstreamAesMode_1);

    RU_REG_WRITE(0, EPN, AES_CONFIGURATION_1, reg_aes_configuration_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_aes_configuration_1_get(uint8_t link_idx, uint8_t *prvUpstreamAesMode_1)
{
    uint32_t reg_aes_configuration_1=0;

#ifdef VALIDATE_PARMS
    if(!prvUpstreamAesMode_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, AES_CONFIGURATION_1, reg_aes_configuration_1);

    *prvUpstreamAesMode_1 = RDP_FIELD_GET(reg_aes_configuration_1, (link_idx % 16) *2, 0x2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_onu_pause_pfc_cfg_set(const epn_onu_pause_pfc_cfg *onu_pause_pfc_cfg)
{
    uint32_t reg_onu_pause_pfc_cfg=0;

#ifdef VALIDATE_PARMS
    if(!onu_pause_pfc_cfg)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((onu_pause_pfc_cfg->cfgupfrefreshen >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupfforcexoff >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupfgengo >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupfoveride >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupftype >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupfen >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgupfasyncbypassen >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfpfcusesa >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfforcexon >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfenable >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfoperatingmode >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfpacketpassthroughen >= _1BITS_MAX_VAL_) ||
       (onu_pause_pfc_cfg->cfgdpfasyncbypassen >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFREFRESHEN, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfrefreshen);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFFORCEXOFF, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfforcexoff);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFGENGO, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfgengo);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFOVERIDE, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfoveride);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFTYPE, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupftype);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFEN, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfen);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFASYNCBYPASSEN, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgupfasyncbypassen);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFPFCUSESA, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfpfcusesa);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFFORCEXON, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfforcexon);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFENABLE, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfenable);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFOPERATINGMODE, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfoperatingmode);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFPACKETPASSTHROUGHEN, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfpacketpassthroughen);
    reg_onu_pause_pfc_cfg = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFASYNCBYPASSEN, reg_onu_pause_pfc_cfg, onu_pause_pfc_cfg->cfgdpfasyncbypassen);

    RU_REG_WRITE(0, EPN, ONU_PAUSE_PFC_CFG, reg_onu_pause_pfc_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_onu_pause_pfc_cfg_get(epn_onu_pause_pfc_cfg *onu_pause_pfc_cfg)
{
    uint32_t reg_onu_pause_pfc_cfg=0;

#ifdef VALIDATE_PARMS
    if(!onu_pause_pfc_cfg)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ONU_PAUSE_PFC_CFG, reg_onu_pause_pfc_cfg);

    onu_pause_pfc_cfg->cfgupfrefreshen = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFREFRESHEN, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupfforcexoff = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFFORCEXOFF, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupfgengo = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFGENGO, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupfoveride = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFOVERIDE, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupftype = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFTYPE, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupfen = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFEN, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgupfasyncbypassen = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGUPFASYNCBYPASSEN, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfpfcusesa = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFPFCUSESA, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfforcexon = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFFORCEXON, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfenable = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFENABLE, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfoperatingmode = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFOPERATINGMODE, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfpacketpassthroughen = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFPACKETPASSTHROUGHEN, reg_onu_pause_pfc_cfg);
    onu_pause_pfc_cfg->cfgdpfasyncbypassen = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_CFG, CFGDPFASYNCBYPASSEN, reg_onu_pause_pfc_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_onu_pause_pfc_time_scale_set(uint8_t cfgdpftimescale)
{
    uint32_t reg_onu_pause_pfc_time_scale=0;

#ifdef VALIDATE_PARMS
    if((cfgdpftimescale >= _4BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_onu_pause_pfc_time_scale = RU_FIELD_SET(0, EPN, ONU_PAUSE_PFC_TIME_SCALE, CFGDPFTIMESCALE, reg_onu_pause_pfc_time_scale, cfgdpftimescale);

    RU_REG_WRITE(0, EPN, ONU_PAUSE_PFC_TIME_SCALE, reg_onu_pause_pfc_time_scale);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_onu_pause_pfc_time_scale_get(uint8_t *cfgdpftimescale)
{
    uint32_t reg_onu_pause_pfc_time_scale=0;

#ifdef VALIDATE_PARMS
    if(!cfgdpftimescale)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, ONU_PAUSE_PFC_TIME_SCALE, reg_onu_pause_pfc_time_scale);

    *cfgdpftimescale = RU_FIELD_GET(0, EPN, ONU_PAUSE_PFC_TIME_SCALE, CFGDPFTIMESCALE, reg_onu_pause_pfc_time_scale);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dpf_int_status_set(const epn_dpf_int_status *dpf_int_status)
{
    uint32_t reg_dpf_int_status=0;

#ifdef VALIDATE_PARMS
    if(!dpf_int_status)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((dpf_int_status->intupfframesent >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intupfrefresh >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intupfreqcol >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intupfreqstatus >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intdpfrxframedropped >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intdpfrxframeabort >= _1BITS_MAX_VAL_) ||
       (dpf_int_status->intdpfrxframe >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTUPFFRAMESENT, reg_dpf_int_status, dpf_int_status->intupfframesent);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTUPFREFRESH, reg_dpf_int_status, dpf_int_status->intupfrefresh);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTUPFREQCOL, reg_dpf_int_status, dpf_int_status->intupfreqcol);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTUPFREQSTATUS, reg_dpf_int_status, dpf_int_status->intupfreqstatus);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAMEDROPPED, reg_dpf_int_status, dpf_int_status->intdpfrxframedropped);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAMEABORT, reg_dpf_int_status, dpf_int_status->intdpfrxframeabort);
    reg_dpf_int_status = RU_FIELD_SET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAME, reg_dpf_int_status, dpf_int_status->intdpfrxframe);

    RU_REG_WRITE(0, EPN, DPF_INT_STATUS, reg_dpf_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dpf_int_status_get(epn_dpf_int_status *dpf_int_status)
{
    uint32_t reg_dpf_int_status=0;

#ifdef VALIDATE_PARMS
    if(!dpf_int_status)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DPF_INT_STATUS, reg_dpf_int_status);

    dpf_int_status->intupfframesent = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTUPFFRAMESENT, reg_dpf_int_status);
    dpf_int_status->intupfrefresh = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTUPFREFRESH, reg_dpf_int_status);
    dpf_int_status->intupfreqcol = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTUPFREQCOL, reg_dpf_int_status);
    dpf_int_status->intupfreqstatus = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTUPFREQSTATUS, reg_dpf_int_status);
    dpf_int_status->intdpfrxframedropped = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAMEDROPPED, reg_dpf_int_status);
    dpf_int_status->intdpfrxframeabort = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAMEABORT, reg_dpf_int_status);
    dpf_int_status->intdpfrxframe = RU_FIELD_GET(0, EPN, DPF_INT_STATUS, INTDPFRXFRAME, reg_dpf_int_status);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dpf_int_mask_set(const epn_dpf_int_mask *dpf_int_mask)
{
    uint32_t reg_dpf_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!dpf_int_mask)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if((dpf_int_mask->intupfframesentmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intupfrefreshmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intupfreqcolmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intupfreqstatusmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intdpfrxframedroppedmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intdpfrxframeabortmask >= _1BITS_MAX_VAL_) ||
       (dpf_int_mask->intdpfrxframemask >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTUPFFRAMESENTMASK, reg_dpf_int_mask, dpf_int_mask->intupfframesentmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTUPFREFRESHMASK, reg_dpf_int_mask, dpf_int_mask->intupfrefreshmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTUPFREQCOLMASK, reg_dpf_int_mask, dpf_int_mask->intupfreqcolmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTUPFREQSTATUSMASK, reg_dpf_int_mask, dpf_int_mask->intupfreqstatusmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEDROPPEDMASK, reg_dpf_int_mask, dpf_int_mask->intdpfrxframedroppedmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEABORTMASK, reg_dpf_int_mask, dpf_int_mask->intdpfrxframeabortmask);
    reg_dpf_int_mask = RU_FIELD_SET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEMASK, reg_dpf_int_mask, dpf_int_mask->intdpfrxframemask);

    RU_REG_WRITE(0, EPN, DPF_INT_MASK, reg_dpf_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_dpf_int_mask_get(epn_dpf_int_mask *dpf_int_mask)
{
    uint32_t reg_dpf_int_mask=0;

#ifdef VALIDATE_PARMS
    if(!dpf_int_mask)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, DPF_INT_MASK, reg_dpf_int_mask);

    dpf_int_mask->intupfframesentmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTUPFFRAMESENTMASK, reg_dpf_int_mask);
    dpf_int_mask->intupfrefreshmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTUPFREFRESHMASK, reg_dpf_int_mask);
    dpf_int_mask->intupfreqcolmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTUPFREQCOLMASK, reg_dpf_int_mask);
    dpf_int_mask->intupfreqstatusmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTUPFREQSTATUSMASK, reg_dpf_int_mask);
    dpf_int_mask->intdpfrxframedroppedmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEDROPPEDMASK, reg_dpf_int_mask);
    dpf_int_mask->intdpfrxframeabortmask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEABORTMASK, reg_dpf_int_mask);
    dpf_int_mask->intdpfrxframemask = RU_FIELD_GET(0, EPN, DPF_INT_MASK, INTDPFRXFRAMEMASK, reg_dpf_int_mask);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_0_set(uint32_t burstcap0)
{
    uint32_t reg_burst_cap_0=0;

#ifdef VALIDATE_PARMS
    if((burstcap0 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_0 = RU_FIELD_SET(0, EPN, BURST_CAP_0, BURSTCAP0, reg_burst_cap_0, burstcap0);

    RU_REG_WRITE(0, EPN, BURST_CAP_0, reg_burst_cap_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_0_get(uint32_t *burstcap0)
{
    uint32_t reg_burst_cap_0=0;

#ifdef VALIDATE_PARMS
    if(!burstcap0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_0, reg_burst_cap_0);

    *burstcap0 = RU_FIELD_GET(0, EPN, BURST_CAP_0, BURSTCAP0, reg_burst_cap_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_1_set(uint32_t burstcap1)
{
    uint32_t reg_burst_cap_1=0;

#ifdef VALIDATE_PARMS
    if((burstcap1 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_1 = RU_FIELD_SET(0, EPN, BURST_CAP_1, BURSTCAP1, reg_burst_cap_1, burstcap1);

    RU_REG_WRITE(0, EPN, BURST_CAP_1, reg_burst_cap_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_1_get(uint32_t *burstcap1)
{
    uint32_t reg_burst_cap_1=0;

#ifdef VALIDATE_PARMS
    if(!burstcap1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_1, reg_burst_cap_1);

    *burstcap1 = RU_FIELD_GET(0, EPN, BURST_CAP_1, BURSTCAP1, reg_burst_cap_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_2_set(uint32_t burstcap2)
{
    uint32_t reg_burst_cap_2=0;

#ifdef VALIDATE_PARMS
    if((burstcap2 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_2 = RU_FIELD_SET(0, EPN, BURST_CAP_2, BURSTCAP2, reg_burst_cap_2, burstcap2);

    RU_REG_WRITE(0, EPN, BURST_CAP_2, reg_burst_cap_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_2_get(uint32_t *burstcap2)
{
    uint32_t reg_burst_cap_2=0;

#ifdef VALIDATE_PARMS
    if(!burstcap2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_2, reg_burst_cap_2);

    *burstcap2 = RU_FIELD_GET(0, EPN, BURST_CAP_2, BURSTCAP2, reg_burst_cap_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_3_set(uint32_t burstcap3)
{
    uint32_t reg_burst_cap_3=0;

#ifdef VALIDATE_PARMS
    if((burstcap3 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_3 = RU_FIELD_SET(0, EPN, BURST_CAP_3, BURSTCAP3, reg_burst_cap_3, burstcap3);

    RU_REG_WRITE(0, EPN, BURST_CAP_3, reg_burst_cap_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_3_get(uint32_t *burstcap3)
{
    uint32_t reg_burst_cap_3=0;

#ifdef VALIDATE_PARMS
    if(!burstcap3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_3, reg_burst_cap_3);

    *burstcap3 = RU_FIELD_GET(0, EPN, BURST_CAP_3, BURSTCAP3, reg_burst_cap_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_4_set(uint32_t burstcap4)
{
    uint32_t reg_burst_cap_4=0;

#ifdef VALIDATE_PARMS
    if((burstcap4 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_4 = RU_FIELD_SET(0, EPN, BURST_CAP_4, BURSTCAP4, reg_burst_cap_4, burstcap4);

    RU_REG_WRITE(0, EPN, BURST_CAP_4, reg_burst_cap_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_4_get(uint32_t *burstcap4)
{
    uint32_t reg_burst_cap_4=0;

#ifdef VALIDATE_PARMS
    if(!burstcap4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_4, reg_burst_cap_4);

    *burstcap4 = RU_FIELD_GET(0, EPN, BURST_CAP_4, BURSTCAP4, reg_burst_cap_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_5_set(uint32_t burstcap5)
{
    uint32_t reg_burst_cap_5=0;

#ifdef VALIDATE_PARMS
    if((burstcap5 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_5 = RU_FIELD_SET(0, EPN, BURST_CAP_5, BURSTCAP5, reg_burst_cap_5, burstcap5);

    RU_REG_WRITE(0, EPN, BURST_CAP_5, reg_burst_cap_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_5_get(uint32_t *burstcap5)
{
    uint32_t reg_burst_cap_5=0;

#ifdef VALIDATE_PARMS
    if(!burstcap5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_5, reg_burst_cap_5);

    *burstcap5 = RU_FIELD_GET(0, EPN, BURST_CAP_5, BURSTCAP5, reg_burst_cap_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_6_set(uint32_t burstcap6)
{
    uint32_t reg_burst_cap_6=0;

#ifdef VALIDATE_PARMS
    if((burstcap6 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_6 = RU_FIELD_SET(0, EPN, BURST_CAP_6, BURSTCAP6, reg_burst_cap_6, burstcap6);

    RU_REG_WRITE(0, EPN, BURST_CAP_6, reg_burst_cap_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_6_get(uint32_t *burstcap6)
{
    uint32_t reg_burst_cap_6=0;

#ifdef VALIDATE_PARMS
    if(!burstcap6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_6, reg_burst_cap_6);

    *burstcap6 = RU_FIELD_GET(0, EPN, BURST_CAP_6, BURSTCAP6, reg_burst_cap_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_7_set(uint32_t burstcap7)
{
    uint32_t reg_burst_cap_7=0;

#ifdef VALIDATE_PARMS
    if((burstcap7 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_7 = RU_FIELD_SET(0, EPN, BURST_CAP_7, BURSTCAP7, reg_burst_cap_7, burstcap7);

    RU_REG_WRITE(0, EPN, BURST_CAP_7, reg_burst_cap_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_7_get(uint32_t *burstcap7)
{
    uint32_t reg_burst_cap_7=0;

#ifdef VALIDATE_PARMS
    if(!burstcap7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_7, reg_burst_cap_7);

    *burstcap7 = RU_FIELD_GET(0, EPN, BURST_CAP_7, BURSTCAP7, reg_burst_cap_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_0_set(uint8_t quellidmap0)
{
    uint32_t reg_queue_llid_map_0=0;

#ifdef VALIDATE_PARMS
    if((quellidmap0 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_0 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_0, QUELLIDMAP0, reg_queue_llid_map_0, quellidmap0);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_0, reg_queue_llid_map_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_0_get(uint8_t *quellidmap0)
{
    uint32_t reg_queue_llid_map_0=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_0, reg_queue_llid_map_0);

    *quellidmap0 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_0, QUELLIDMAP0, reg_queue_llid_map_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_1_set(uint8_t quellidmap1)
{
    uint32_t reg_queue_llid_map_1=0;

#ifdef VALIDATE_PARMS
    if((quellidmap1 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_1 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_1, QUELLIDMAP1, reg_queue_llid_map_1, quellidmap1);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_1, reg_queue_llid_map_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_1_get(uint8_t *quellidmap1)
{
    uint32_t reg_queue_llid_map_1=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_1, reg_queue_llid_map_1);

    *quellidmap1 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_1, QUELLIDMAP1, reg_queue_llid_map_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_2_set(uint8_t quellidmap2)
{
    uint32_t reg_queue_llid_map_2=0;

#ifdef VALIDATE_PARMS
    if((quellidmap2 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_2 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_2, QUELLIDMAP2, reg_queue_llid_map_2, quellidmap2);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_2, reg_queue_llid_map_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_2_get(uint8_t *quellidmap2)
{
    uint32_t reg_queue_llid_map_2=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_2, reg_queue_llid_map_2);

    *quellidmap2 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_2, QUELLIDMAP2, reg_queue_llid_map_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_3_set(uint8_t quellidmap3)
{
    uint32_t reg_queue_llid_map_3=0;

#ifdef VALIDATE_PARMS
    if((quellidmap3 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_3 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_3, QUELLIDMAP3, reg_queue_llid_map_3, quellidmap3);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_3, reg_queue_llid_map_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_3_get(uint8_t *quellidmap3)
{
    uint32_t reg_queue_llid_map_3=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_3, reg_queue_llid_map_3);

    *quellidmap3 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_3, QUELLIDMAP3, reg_queue_llid_map_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_4_set(uint8_t quellidmap4)
{
    uint32_t reg_queue_llid_map_4=0;

#ifdef VALIDATE_PARMS
    if((quellidmap4 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_4 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_4, QUELLIDMAP4, reg_queue_llid_map_4, quellidmap4);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_4, reg_queue_llid_map_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_4_get(uint8_t *quellidmap4)
{
    uint32_t reg_queue_llid_map_4=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_4, reg_queue_llid_map_4);

    *quellidmap4 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_4, QUELLIDMAP4, reg_queue_llid_map_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_5_set(uint8_t quellidmap5)
{
    uint32_t reg_queue_llid_map_5=0;

#ifdef VALIDATE_PARMS
    if((quellidmap5 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_5 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_5, QUELLIDMAP5, reg_queue_llid_map_5, quellidmap5);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_5, reg_queue_llid_map_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_5_get(uint8_t *quellidmap5)
{
    uint32_t reg_queue_llid_map_5=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_5, reg_queue_llid_map_5);

    *quellidmap5 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_5, QUELLIDMAP5, reg_queue_llid_map_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_6_set(uint8_t quellidmap6)
{
    uint32_t reg_queue_llid_map_6=0;

#ifdef VALIDATE_PARMS
    if((quellidmap6 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_6 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_6, QUELLIDMAP6, reg_queue_llid_map_6, quellidmap6);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_6, reg_queue_llid_map_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_6_get(uint8_t *quellidmap6)
{
    uint32_t reg_queue_llid_map_6=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_6, reg_queue_llid_map_6);

    *quellidmap6 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_6, QUELLIDMAP6, reg_queue_llid_map_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_7_set(uint8_t quellidmap7)
{
    uint32_t reg_queue_llid_map_7=0;

#ifdef VALIDATE_PARMS
    if((quellidmap7 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_7 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_7, QUELLIDMAP7, reg_queue_llid_map_7, quellidmap7);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_7, reg_queue_llid_map_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_7_get(uint8_t *quellidmap7)
{
    uint32_t reg_queue_llid_map_7=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_7, reg_queue_llid_map_7);

    *quellidmap7 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_7, QUELLIDMAP7, reg_queue_llid_map_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt0_set(uint32_t unusedtqcnt0)
{
    uint32_t reg_unused_tq_cnt0=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt0 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT0, UNUSEDTQCNT0, reg_unused_tq_cnt0, unusedtqcnt0);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT0, reg_unused_tq_cnt0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt0_get(uint32_t *unusedtqcnt0)
{
    uint32_t reg_unused_tq_cnt0=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT0, reg_unused_tq_cnt0);

    *unusedtqcnt0 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT0, UNUSEDTQCNT0, reg_unused_tq_cnt0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt1_set(uint32_t unusedtqcnt1)
{
    uint32_t reg_unused_tq_cnt1=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt1 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT1, UNUSEDTQCNT1, reg_unused_tq_cnt1, unusedtqcnt1);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT1, reg_unused_tq_cnt1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt1_get(uint32_t *unusedtqcnt1)
{
    uint32_t reg_unused_tq_cnt1=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT1, reg_unused_tq_cnt1);

    *unusedtqcnt1 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT1, UNUSEDTQCNT1, reg_unused_tq_cnt1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt2_set(uint32_t unusedtqcnt2)
{
    uint32_t reg_unused_tq_cnt2=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt2 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT2, UNUSEDTQCNT2, reg_unused_tq_cnt2, unusedtqcnt2);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT2, reg_unused_tq_cnt2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt2_get(uint32_t *unusedtqcnt2)
{
    uint32_t reg_unused_tq_cnt2=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT2, reg_unused_tq_cnt2);

    *unusedtqcnt2 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT2, UNUSEDTQCNT2, reg_unused_tq_cnt2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt3_set(uint32_t unusedtqcnt3)
{
    uint32_t reg_unused_tq_cnt3=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt3 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT3, UNUSEDTQCNT3, reg_unused_tq_cnt3, unusedtqcnt3);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT3, reg_unused_tq_cnt3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt3_get(uint32_t *unusedtqcnt3)
{
    uint32_t reg_unused_tq_cnt3=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT3, reg_unused_tq_cnt3);

    *unusedtqcnt3 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT3, UNUSEDTQCNT3, reg_unused_tq_cnt3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt4_set(uint32_t unusedtqcnt4)
{
    uint32_t reg_unused_tq_cnt4=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt4 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT4, UNUSEDTQCNT4, reg_unused_tq_cnt4, unusedtqcnt4);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT4, reg_unused_tq_cnt4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt4_get(uint32_t *unusedtqcnt4)
{
    uint32_t reg_unused_tq_cnt4=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT4, reg_unused_tq_cnt4);

    *unusedtqcnt4 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT4, UNUSEDTQCNT4, reg_unused_tq_cnt4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt5_set(uint32_t unusedtqcnt5)
{
    uint32_t reg_unused_tq_cnt5=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt5 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT5, UNUSEDTQCNT5, reg_unused_tq_cnt5, unusedtqcnt5);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT5, reg_unused_tq_cnt5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt5_get(uint32_t *unusedtqcnt5)
{
    uint32_t reg_unused_tq_cnt5=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT5, reg_unused_tq_cnt5);

    *unusedtqcnt5 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT5, UNUSEDTQCNT5, reg_unused_tq_cnt5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt6_set(uint32_t unusedtqcnt6)
{
    uint32_t reg_unused_tq_cnt6=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt6 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT6, UNUSEDTQCNT6, reg_unused_tq_cnt6, unusedtqcnt6);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT6, reg_unused_tq_cnt6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt6_get(uint32_t *unusedtqcnt6)
{
    uint32_t reg_unused_tq_cnt6=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT6, reg_unused_tq_cnt6);

    *unusedtqcnt6 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT6, UNUSEDTQCNT6, reg_unused_tq_cnt6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt7_set(uint32_t unusedtqcnt7)
{
    uint32_t reg_unused_tq_cnt7=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt7 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT7, UNUSEDTQCNT7, reg_unused_tq_cnt7, unusedtqcnt7);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT7, reg_unused_tq_cnt7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt7_get(uint32_t *unusedtqcnt7)
{
    uint32_t reg_unused_tq_cnt7=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT7, reg_unused_tq_cnt7);

    *unusedtqcnt7 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT7, UNUSEDTQCNT7, reg_unused_tq_cnt7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_0_set(uint16_t cfgshpmask0)
{
    uint32_t reg_tx_l1s_shp_que_mask_0=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_0 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_0, CFGSHPMASK0, reg_tx_l1s_shp_que_mask_0, cfgshpmask0);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_0, reg_tx_l1s_shp_que_mask_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_0_get(uint16_t *cfgshpmask0)
{
    uint32_t reg_tx_l1s_shp_que_mask_0=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_0, reg_tx_l1s_shp_que_mask_0);

    *cfgshpmask0 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_0, CFGSHPMASK0, reg_tx_l1s_shp_que_mask_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_1_set(uint16_t cfgshpmask1)
{
    uint32_t reg_tx_l1s_shp_que_mask_1=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_1 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_1, CFGSHPMASK1, reg_tx_l1s_shp_que_mask_1, cfgshpmask1);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_1, reg_tx_l1s_shp_que_mask_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_1_get(uint16_t *cfgshpmask1)
{
    uint32_t reg_tx_l1s_shp_que_mask_1=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_1, reg_tx_l1s_shp_que_mask_1);

    *cfgshpmask1 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_1, CFGSHPMASK1, reg_tx_l1s_shp_que_mask_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_2_set(uint16_t cfgshpmask2)
{
    uint32_t reg_tx_l1s_shp_que_mask_2=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_2 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_2, CFGSHPMASK2, reg_tx_l1s_shp_que_mask_2, cfgshpmask2);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_2, reg_tx_l1s_shp_que_mask_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_2_get(uint16_t *cfgshpmask2)
{
    uint32_t reg_tx_l1s_shp_que_mask_2=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_2, reg_tx_l1s_shp_que_mask_2);

    *cfgshpmask2 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_2, CFGSHPMASK2, reg_tx_l1s_shp_que_mask_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_3_set(uint16_t cfgshpmask3)
{
    uint32_t reg_tx_l1s_shp_que_mask_3=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_3 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_3, CFGSHPMASK3, reg_tx_l1s_shp_que_mask_3, cfgshpmask3);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_3, reg_tx_l1s_shp_que_mask_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_3_get(uint16_t *cfgshpmask3)
{
    uint32_t reg_tx_l1s_shp_que_mask_3=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_3, reg_tx_l1s_shp_que_mask_3);

    *cfgshpmask3 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_3, CFGSHPMASK3, reg_tx_l1s_shp_que_mask_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_4_set(uint16_t cfgshpmask4)
{
    uint32_t reg_tx_l1s_shp_que_mask_4=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_4 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_4, CFGSHPMASK4, reg_tx_l1s_shp_que_mask_4, cfgshpmask4);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_4, reg_tx_l1s_shp_que_mask_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_4_get(uint16_t *cfgshpmask4)
{
    uint32_t reg_tx_l1s_shp_que_mask_4=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_4, reg_tx_l1s_shp_que_mask_4);

    *cfgshpmask4 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_4, CFGSHPMASK4, reg_tx_l1s_shp_que_mask_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_5_set(uint16_t cfgshpmask5)
{
    uint32_t reg_tx_l1s_shp_que_mask_5=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_5 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_5, CFGSHPMASK5, reg_tx_l1s_shp_que_mask_5, cfgshpmask5);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_5, reg_tx_l1s_shp_que_mask_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_5_get(uint16_t *cfgshpmask5)
{
    uint32_t reg_tx_l1s_shp_que_mask_5=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_5, reg_tx_l1s_shp_que_mask_5);

    *cfgshpmask5 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_5, CFGSHPMASK5, reg_tx_l1s_shp_que_mask_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_6_set(uint16_t cfgshpmask6)
{
    uint32_t reg_tx_l1s_shp_que_mask_6=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_6 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_6, CFGSHPMASK6, reg_tx_l1s_shp_que_mask_6, cfgshpmask6);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_6, reg_tx_l1s_shp_que_mask_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_6_get(uint16_t *cfgshpmask6)
{
    uint32_t reg_tx_l1s_shp_que_mask_6=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_6, reg_tx_l1s_shp_que_mask_6);

    *cfgshpmask6 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_6, CFGSHPMASK6, reg_tx_l1s_shp_que_mask_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_7_set(uint16_t cfgshpmask7)
{
    uint32_t reg_tx_l1s_shp_que_mask_7=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_7 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_7, CFGSHPMASK7, reg_tx_l1s_shp_que_mask_7, cfgshpmask7);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_7, reg_tx_l1s_shp_que_mask_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_7_get(uint16_t *cfgshpmask7)
{
    uint32_t reg_tx_l1s_shp_que_mask_7=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_7, reg_tx_l1s_shp_que_mask_7);

    *cfgshpmask7 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_7, CFGSHPMASK7, reg_tx_l1s_shp_que_mask_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_0_set(uint16_t cfgl2squeend0, uint16_t cfgl2squestart0)
{
    uint32_t reg_tx_l2s_que_config_0=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend0 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart0 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_0 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_0, CFGL2SQUEEND0, reg_tx_l2s_que_config_0, cfgl2squeend0);
    reg_tx_l2s_que_config_0 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_0, CFGL2SQUESTART0, reg_tx_l2s_que_config_0, cfgl2squestart0);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_0, reg_tx_l2s_que_config_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_0_get(uint16_t *cfgl2squeend0, uint16_t *cfgl2squestart0)
{
    uint32_t reg_tx_l2s_que_config_0=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend0 || !cfgl2squestart0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_0, reg_tx_l2s_que_config_0);

    *cfgl2squeend0 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_0, CFGL2SQUEEND0, reg_tx_l2s_que_config_0);
    *cfgl2squestart0 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_0, CFGL2SQUESTART0, reg_tx_l2s_que_config_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_1_set(uint16_t cfgl2squeend1, uint16_t cfgl2squestart1)
{
    uint32_t reg_tx_l2s_que_config_1=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend1 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart1 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_1 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_1, CFGL2SQUEEND1, reg_tx_l2s_que_config_1, cfgl2squeend1);
    reg_tx_l2s_que_config_1 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_1, CFGL2SQUESTART1, reg_tx_l2s_que_config_1, cfgl2squestart1);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_1, reg_tx_l2s_que_config_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_1_get(uint16_t *cfgl2squeend1, uint16_t *cfgl2squestart1)
{
    uint32_t reg_tx_l2s_que_config_1=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend1 || !cfgl2squestart1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_1, reg_tx_l2s_que_config_1);

    *cfgl2squeend1 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_1, CFGL2SQUEEND1, reg_tx_l2s_que_config_1);
    *cfgl2squestart1 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_1, CFGL2SQUESTART1, reg_tx_l2s_que_config_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_2_set(uint16_t cfgl2squeend2, uint16_t cfgl2squestart2)
{
    uint32_t reg_tx_l2s_que_config_2=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend2 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart2 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_2 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_2, CFGL2SQUEEND2, reg_tx_l2s_que_config_2, cfgl2squeend2);
    reg_tx_l2s_que_config_2 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_2, CFGL2SQUESTART2, reg_tx_l2s_que_config_2, cfgl2squestart2);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_2, reg_tx_l2s_que_config_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_2_get(uint16_t *cfgl2squeend2, uint16_t *cfgl2squestart2)
{
    uint32_t reg_tx_l2s_que_config_2=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend2 || !cfgl2squestart2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_2, reg_tx_l2s_que_config_2);

    *cfgl2squeend2 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_2, CFGL2SQUEEND2, reg_tx_l2s_que_config_2);
    *cfgl2squestart2 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_2, CFGL2SQUESTART2, reg_tx_l2s_que_config_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_3_set(uint16_t cfgl2squeend3, uint16_t cfgl2squestart3)
{
    uint32_t reg_tx_l2s_que_config_3=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend3 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart3 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_3 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_3, CFGL2SQUEEND3, reg_tx_l2s_que_config_3, cfgl2squeend3);
    reg_tx_l2s_que_config_3 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_3, CFGL2SQUESTART3, reg_tx_l2s_que_config_3, cfgl2squestart3);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_3, reg_tx_l2s_que_config_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_3_get(uint16_t *cfgl2squeend3, uint16_t *cfgl2squestart3)
{
    uint32_t reg_tx_l2s_que_config_3=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend3 || !cfgl2squestart3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_3, reg_tx_l2s_que_config_3);

    *cfgl2squeend3 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_3, CFGL2SQUEEND3, reg_tx_l2s_que_config_3);
    *cfgl2squestart3 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_3, CFGL2SQUESTART3, reg_tx_l2s_que_config_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_4_set(uint16_t cfgl2squeend4, uint16_t cfgl2squestart4)
{
    uint32_t reg_tx_l2s_que_config_4=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend4 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart4 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_4 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_4, CFGL2SQUEEND4, reg_tx_l2s_que_config_4, cfgl2squeend4);
    reg_tx_l2s_que_config_4 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_4, CFGL2SQUESTART4, reg_tx_l2s_que_config_4, cfgl2squestart4);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_4, reg_tx_l2s_que_config_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_4_get(uint16_t *cfgl2squeend4, uint16_t *cfgl2squestart4)
{
    uint32_t reg_tx_l2s_que_config_4=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend4 || !cfgl2squestart4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_4, reg_tx_l2s_que_config_4);

    *cfgl2squeend4 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_4, CFGL2SQUEEND4, reg_tx_l2s_que_config_4);
    *cfgl2squestart4 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_4, CFGL2SQUESTART4, reg_tx_l2s_que_config_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_5_set(uint16_t cfgl2squeend5, uint16_t cfgl2squestart5)
{
    uint32_t reg_tx_l2s_que_config_5=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend5 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart5 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_5 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_5, CFGL2SQUEEND5, reg_tx_l2s_que_config_5, cfgl2squeend5);
    reg_tx_l2s_que_config_5 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_5, CFGL2SQUESTART5, reg_tx_l2s_que_config_5, cfgl2squestart5);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_5, reg_tx_l2s_que_config_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_5_get(uint16_t *cfgl2squeend5, uint16_t *cfgl2squestart5)
{
    uint32_t reg_tx_l2s_que_config_5=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend5 || !cfgl2squestart5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_5, reg_tx_l2s_que_config_5);

    *cfgl2squeend5 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_5, CFGL2SQUEEND5, reg_tx_l2s_que_config_5);
    *cfgl2squestart5 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_5, CFGL2SQUESTART5, reg_tx_l2s_que_config_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_6_set(uint16_t cfgl2squeend6, uint16_t cfgl2squestart6)
{
    uint32_t reg_tx_l2s_que_config_6=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend6 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart6 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_6 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_6, CFGL2SQUEEND6, reg_tx_l2s_que_config_6, cfgl2squeend6);
    reg_tx_l2s_que_config_6 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_6, CFGL2SQUESTART6, reg_tx_l2s_que_config_6, cfgl2squestart6);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_6, reg_tx_l2s_que_config_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_6_get(uint16_t *cfgl2squeend6, uint16_t *cfgl2squestart6)
{
    uint32_t reg_tx_l2s_que_config_6=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend6 || !cfgl2squestart6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_6, reg_tx_l2s_que_config_6);

    *cfgl2squeend6 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_6, CFGL2SQUEEND6, reg_tx_l2s_que_config_6);
    *cfgl2squestart6 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_6, CFGL2SQUESTART6, reg_tx_l2s_que_config_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_7_set(uint16_t cfgl2squeend7, uint16_t cfgl2squestart7)
{
    uint32_t reg_tx_l2s_que_config_7=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend7 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart7 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_7 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_7, CFGL2SQUEEND7, reg_tx_l2s_que_config_7, cfgl2squeend7);
    reg_tx_l2s_que_config_7 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_7, CFGL2SQUESTART7, reg_tx_l2s_que_config_7, cfgl2squestart7);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_7, reg_tx_l2s_que_config_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_7_get(uint16_t *cfgl2squeend7, uint16_t *cfgl2squestart7)
{
    uint32_t reg_tx_l2s_que_config_7=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend7 || !cfgl2squestart7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_7, reg_tx_l2s_que_config_7);

    *cfgl2squeend7 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_7, CFGL2SQUEEND7, reg_tx_l2s_que_config_7);
    *cfgl2squestart7 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_7, CFGL2SQUESTART7, reg_tx_l2s_que_config_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_0_set(uint32_t prvburstlimit0)
{
    uint32_t reg_tx_ctc_burst_limit_0=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit0 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_0 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_0, PRVBURSTLIMIT0, reg_tx_ctc_burst_limit_0, prvburstlimit0);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_0, reg_tx_ctc_burst_limit_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_0_get(uint32_t *prvburstlimit0)
{
    uint32_t reg_tx_ctc_burst_limit_0=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit0)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_0, reg_tx_ctc_burst_limit_0);

    *prvburstlimit0 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_0, PRVBURSTLIMIT0, reg_tx_ctc_burst_limit_0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_1_set(uint32_t prvburstlimit1)
{
    uint32_t reg_tx_ctc_burst_limit_1=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit1 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_1 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_1, PRVBURSTLIMIT1, reg_tx_ctc_burst_limit_1, prvburstlimit1);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_1, reg_tx_ctc_burst_limit_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_1_get(uint32_t *prvburstlimit1)
{
    uint32_t reg_tx_ctc_burst_limit_1=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_1, reg_tx_ctc_burst_limit_1);

    *prvburstlimit1 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_1, PRVBURSTLIMIT1, reg_tx_ctc_burst_limit_1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_2_set(uint32_t prvburstlimit2)
{
    uint32_t reg_tx_ctc_burst_limit_2=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit2 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_2 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_2, PRVBURSTLIMIT2, reg_tx_ctc_burst_limit_2, prvburstlimit2);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_2, reg_tx_ctc_burst_limit_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_2_get(uint32_t *prvburstlimit2)
{
    uint32_t reg_tx_ctc_burst_limit_2=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_2, reg_tx_ctc_burst_limit_2);

    *prvburstlimit2 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_2, PRVBURSTLIMIT2, reg_tx_ctc_burst_limit_2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_3_set(uint32_t prvburstlimit3)
{
    uint32_t reg_tx_ctc_burst_limit_3=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit3 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_3 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_3, PRVBURSTLIMIT3, reg_tx_ctc_burst_limit_3, prvburstlimit3);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_3, reg_tx_ctc_burst_limit_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_3_get(uint32_t *prvburstlimit3)
{
    uint32_t reg_tx_ctc_burst_limit_3=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_3, reg_tx_ctc_burst_limit_3);

    *prvburstlimit3 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_3, PRVBURSTLIMIT3, reg_tx_ctc_burst_limit_3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_4_set(uint32_t prvburstlimit4)
{
    uint32_t reg_tx_ctc_burst_limit_4=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit4 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_4 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_4, PRVBURSTLIMIT4, reg_tx_ctc_burst_limit_4, prvburstlimit4);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_4, reg_tx_ctc_burst_limit_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_4_get(uint32_t *prvburstlimit4)
{
    uint32_t reg_tx_ctc_burst_limit_4=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit4)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_4, reg_tx_ctc_burst_limit_4);

    *prvburstlimit4 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_4, PRVBURSTLIMIT4, reg_tx_ctc_burst_limit_4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_5_set(uint32_t prvburstlimit5)
{
    uint32_t reg_tx_ctc_burst_limit_5=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit5 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_5 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_5, PRVBURSTLIMIT5, reg_tx_ctc_burst_limit_5, prvburstlimit5);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_5, reg_tx_ctc_burst_limit_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_5_get(uint32_t *prvburstlimit5)
{
    uint32_t reg_tx_ctc_burst_limit_5=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit5)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_5, reg_tx_ctc_burst_limit_5);

    *prvburstlimit5 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_5, PRVBURSTLIMIT5, reg_tx_ctc_burst_limit_5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_6_set(uint32_t prvburstlimit6)
{
    uint32_t reg_tx_ctc_burst_limit_6=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit6 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_6 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_6, PRVBURSTLIMIT6, reg_tx_ctc_burst_limit_6, prvburstlimit6);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_6, reg_tx_ctc_burst_limit_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_6_get(uint32_t *prvburstlimit6)
{
    uint32_t reg_tx_ctc_burst_limit_6=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit6)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_6, reg_tx_ctc_burst_limit_6);

    *prvburstlimit6 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_6, PRVBURSTLIMIT6, reg_tx_ctc_burst_limit_6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_7_set(uint32_t prvburstlimit7)
{
    uint32_t reg_tx_ctc_burst_limit_7=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit7 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_7 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_7, PRVBURSTLIMIT7, reg_tx_ctc_burst_limit_7, prvburstlimit7);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_7, reg_tx_ctc_burst_limit_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_7_get(uint32_t *prvburstlimit7)
{
    uint32_t reg_tx_ctc_burst_limit_7=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit7)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_7, reg_tx_ctc_burst_limit_7);

    *prvburstlimit7 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_7, PRVBURSTLIMIT7, reg_tx_ctc_burst_limit_7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_8_set(uint32_t burstcap8)
{
    uint32_t reg_burst_cap_8=0;

#ifdef VALIDATE_PARMS
    if((burstcap8 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_8 = RU_FIELD_SET(0, EPN, BURST_CAP_8, BURSTCAP8, reg_burst_cap_8, burstcap8);

    RU_REG_WRITE(0, EPN, BURST_CAP_8, reg_burst_cap_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_8_get(uint32_t *burstcap8)
{
    uint32_t reg_burst_cap_8=0;

#ifdef VALIDATE_PARMS
    if(!burstcap8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_8, reg_burst_cap_8);

    *burstcap8 = RU_FIELD_GET(0, EPN, BURST_CAP_8, BURSTCAP8, reg_burst_cap_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_9_set(uint32_t burstcap9)
{
    uint32_t reg_burst_cap_9=0;

#ifdef VALIDATE_PARMS
    if((burstcap9 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_9 = RU_FIELD_SET(0, EPN, BURST_CAP_9, BURSTCAP9, reg_burst_cap_9, burstcap9);

    RU_REG_WRITE(0, EPN, BURST_CAP_9, reg_burst_cap_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_9_get(uint32_t *burstcap9)
{
    uint32_t reg_burst_cap_9=0;

#ifdef VALIDATE_PARMS
    if(!burstcap9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_9, reg_burst_cap_9);

    *burstcap9 = RU_FIELD_GET(0, EPN, BURST_CAP_9, BURSTCAP9, reg_burst_cap_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_10_set(uint32_t burstcap10)
{
    uint32_t reg_burst_cap_10=0;

#ifdef VALIDATE_PARMS
    if((burstcap10 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_10 = RU_FIELD_SET(0, EPN, BURST_CAP_10, BURSTCAP10, reg_burst_cap_10, burstcap10);

    RU_REG_WRITE(0, EPN, BURST_CAP_10, reg_burst_cap_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_10_get(uint32_t *burstcap10)
{
    uint32_t reg_burst_cap_10=0;

#ifdef VALIDATE_PARMS
    if(!burstcap10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_10, reg_burst_cap_10);

    *burstcap10 = RU_FIELD_GET(0, EPN, BURST_CAP_10, BURSTCAP10, reg_burst_cap_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_11_set(uint32_t burstcap11)
{
    uint32_t reg_burst_cap_11=0;

#ifdef VALIDATE_PARMS
    if((burstcap11 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_11 = RU_FIELD_SET(0, EPN, BURST_CAP_11, BURSTCAP11, reg_burst_cap_11, burstcap11);

    RU_REG_WRITE(0, EPN, BURST_CAP_11, reg_burst_cap_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_11_get(uint32_t *burstcap11)
{
    uint32_t reg_burst_cap_11=0;

#ifdef VALIDATE_PARMS
    if(!burstcap11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_11, reg_burst_cap_11);

    *burstcap11 = RU_FIELD_GET(0, EPN, BURST_CAP_11, BURSTCAP11, reg_burst_cap_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_12_set(uint32_t burstcap12)
{
    uint32_t reg_burst_cap_12=0;

#ifdef VALIDATE_PARMS
    if((burstcap12 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_12 = RU_FIELD_SET(0, EPN, BURST_CAP_12, BURSTCAP12, reg_burst_cap_12, burstcap12);

    RU_REG_WRITE(0, EPN, BURST_CAP_12, reg_burst_cap_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_12_get(uint32_t *burstcap12)
{
    uint32_t reg_burst_cap_12=0;

#ifdef VALIDATE_PARMS
    if(!burstcap12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_12, reg_burst_cap_12);

    *burstcap12 = RU_FIELD_GET(0, EPN, BURST_CAP_12, BURSTCAP12, reg_burst_cap_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_13_set(uint32_t burstcap13)
{
    uint32_t reg_burst_cap_13=0;

#ifdef VALIDATE_PARMS
    if((burstcap13 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_13 = RU_FIELD_SET(0, EPN, BURST_CAP_13, BURSTCAP13, reg_burst_cap_13, burstcap13);

    RU_REG_WRITE(0, EPN, BURST_CAP_13, reg_burst_cap_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_13_get(uint32_t *burstcap13)
{
    uint32_t reg_burst_cap_13=0;

#ifdef VALIDATE_PARMS
    if(!burstcap13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_13, reg_burst_cap_13);

    *burstcap13 = RU_FIELD_GET(0, EPN, BURST_CAP_13, BURSTCAP13, reg_burst_cap_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_14_set(uint32_t burstcap14)
{
    uint32_t reg_burst_cap_14=0;

#ifdef VALIDATE_PARMS
    if((burstcap14 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_14 = RU_FIELD_SET(0, EPN, BURST_CAP_14, BURSTCAP14, reg_burst_cap_14, burstcap14);

    RU_REG_WRITE(0, EPN, BURST_CAP_14, reg_burst_cap_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_14_get(uint32_t *burstcap14)
{
    uint32_t reg_burst_cap_14=0;

#ifdef VALIDATE_PARMS
    if(!burstcap14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_14, reg_burst_cap_14);

    *burstcap14 = RU_FIELD_GET(0, EPN, BURST_CAP_14, BURSTCAP14, reg_burst_cap_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_15_set(uint32_t burstcap15)
{
    uint32_t reg_burst_cap_15=0;

#ifdef VALIDATE_PARMS
    if((burstcap15 >= _20BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_burst_cap_15 = RU_FIELD_SET(0, EPN, BURST_CAP_15, BURSTCAP15, reg_burst_cap_15, burstcap15);

    RU_REG_WRITE(0, EPN, BURST_CAP_15, reg_burst_cap_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_burst_cap_15_get(uint32_t *burstcap15)
{
    uint32_t reg_burst_cap_15=0;

#ifdef VALIDATE_PARMS
    if(!burstcap15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, BURST_CAP_15, reg_burst_cap_15);

    *burstcap15 = RU_FIELD_GET(0, EPN, BURST_CAP_15, BURSTCAP15, reg_burst_cap_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_8_set(uint8_t quellidmap8)
{
    uint32_t reg_queue_llid_map_8=0;

#ifdef VALIDATE_PARMS
    if((quellidmap8 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_8 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_8, QUELLIDMAP8, reg_queue_llid_map_8, quellidmap8);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_8, reg_queue_llid_map_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_8_get(uint8_t *quellidmap8)
{
    uint32_t reg_queue_llid_map_8=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_8, reg_queue_llid_map_8);

    *quellidmap8 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_8, QUELLIDMAP8, reg_queue_llid_map_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_9_set(uint8_t quellidmap9)
{
    uint32_t reg_queue_llid_map_9=0;

#ifdef VALIDATE_PARMS
    if((quellidmap9 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_9 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_9, QUELLIDMAP9, reg_queue_llid_map_9, quellidmap9);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_9, reg_queue_llid_map_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_9_get(uint8_t *quellidmap9)
{
    uint32_t reg_queue_llid_map_9=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_9, reg_queue_llid_map_9);

    *quellidmap9 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_9, QUELLIDMAP9, reg_queue_llid_map_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_10_set(uint8_t quellidmap10)
{
    uint32_t reg_queue_llid_map_10=0;

#ifdef VALIDATE_PARMS
    if((quellidmap10 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_10 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_10, QUELLIDMAP10, reg_queue_llid_map_10, quellidmap10);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_10, reg_queue_llid_map_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_10_get(uint8_t *quellidmap10)
{
    uint32_t reg_queue_llid_map_10=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_10, reg_queue_llid_map_10);

    *quellidmap10 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_10, QUELLIDMAP10, reg_queue_llid_map_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_11_set(uint8_t quellidmap11)
{
    uint32_t reg_queue_llid_map_11=0;

#ifdef VALIDATE_PARMS
    if((quellidmap11 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_11 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_11, QUELLIDMAP11, reg_queue_llid_map_11, quellidmap11);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_11, reg_queue_llid_map_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_11_get(uint8_t *quellidmap11)
{
    uint32_t reg_queue_llid_map_11=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_11, reg_queue_llid_map_11);

    *quellidmap11 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_11, QUELLIDMAP11, reg_queue_llid_map_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_12_set(uint8_t quellidmap12)
{
    uint32_t reg_queue_llid_map_12=0;

#ifdef VALIDATE_PARMS
    if((quellidmap12 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_12 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_12, QUELLIDMAP12, reg_queue_llid_map_12, quellidmap12);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_12, reg_queue_llid_map_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_12_get(uint8_t *quellidmap12)
{
    uint32_t reg_queue_llid_map_12=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_12, reg_queue_llid_map_12);

    *quellidmap12 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_12, QUELLIDMAP12, reg_queue_llid_map_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_13_set(uint8_t quellidmap13)
{
    uint32_t reg_queue_llid_map_13=0;

#ifdef VALIDATE_PARMS
    if((quellidmap13 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_13 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_13, QUELLIDMAP13, reg_queue_llid_map_13, quellidmap13);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_13, reg_queue_llid_map_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_13_get(uint8_t *quellidmap13)
{
    uint32_t reg_queue_llid_map_13=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_13, reg_queue_llid_map_13);

    *quellidmap13 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_13, QUELLIDMAP13, reg_queue_llid_map_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_14_set(uint8_t quellidmap14)
{
    uint32_t reg_queue_llid_map_14=0;

#ifdef VALIDATE_PARMS
    if((quellidmap14 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_14 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_14, QUELLIDMAP14, reg_queue_llid_map_14, quellidmap14);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_14, reg_queue_llid_map_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_14_get(uint8_t *quellidmap14)
{
    uint32_t reg_queue_llid_map_14=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_14, reg_queue_llid_map_14);

    *quellidmap14 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_14, QUELLIDMAP14, reg_queue_llid_map_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_15_set(uint8_t quellidmap15)
{
    uint32_t reg_queue_llid_map_15=0;

#ifdef VALIDATE_PARMS
    if((quellidmap15 >= _5BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_queue_llid_map_15 = RU_FIELD_SET(0, EPN, QUEUE_LLID_MAP_15, QUELLIDMAP15, reg_queue_llid_map_15, quellidmap15);

    RU_REG_WRITE(0, EPN, QUEUE_LLID_MAP_15, reg_queue_llid_map_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_queue_llid_map_15_get(uint8_t *quellidmap15)
{
    uint32_t reg_queue_llid_map_15=0;

#ifdef VALIDATE_PARMS
    if(!quellidmap15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, QUEUE_LLID_MAP_15, reg_queue_llid_map_15);

    *quellidmap15 = RU_FIELD_GET(0, EPN, QUEUE_LLID_MAP_15, QUELLIDMAP15, reg_queue_llid_map_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt8_set(uint32_t unusedtqcnt8)
{
    uint32_t reg_unused_tq_cnt8=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt8 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT8, UNUSEDTQCNT8, reg_unused_tq_cnt8, unusedtqcnt8);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT8, reg_unused_tq_cnt8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt8_get(uint32_t *unusedtqcnt8)
{
    uint32_t reg_unused_tq_cnt8=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT8, reg_unused_tq_cnt8);

    *unusedtqcnt8 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT8, UNUSEDTQCNT8, reg_unused_tq_cnt8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt9_set(uint32_t unusedtqcnt9)
{
    uint32_t reg_unused_tq_cnt9=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt9 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT9, UNUSEDTQCNT9, reg_unused_tq_cnt9, unusedtqcnt9);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT9, reg_unused_tq_cnt9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt9_get(uint32_t *unusedtqcnt9)
{
    uint32_t reg_unused_tq_cnt9=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT9, reg_unused_tq_cnt9);

    *unusedtqcnt9 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT9, UNUSEDTQCNT9, reg_unused_tq_cnt9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt10_set(uint32_t unusedtqcnt10)
{
    uint32_t reg_unused_tq_cnt10=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt10 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT10, UNUSEDTQCNT10, reg_unused_tq_cnt10, unusedtqcnt10);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT10, reg_unused_tq_cnt10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt10_get(uint32_t *unusedtqcnt10)
{
    uint32_t reg_unused_tq_cnt10=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT10, reg_unused_tq_cnt10);

    *unusedtqcnt10 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT10, UNUSEDTQCNT10, reg_unused_tq_cnt10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt11_set(uint32_t unusedtqcnt11)
{
    uint32_t reg_unused_tq_cnt11=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt11 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT11, UNUSEDTQCNT11, reg_unused_tq_cnt11, unusedtqcnt11);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT11, reg_unused_tq_cnt11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt11_get(uint32_t *unusedtqcnt11)
{
    uint32_t reg_unused_tq_cnt11=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT11, reg_unused_tq_cnt11);

    *unusedtqcnt11 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT11, UNUSEDTQCNT11, reg_unused_tq_cnt11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt12_set(uint32_t unusedtqcnt12)
{
    uint32_t reg_unused_tq_cnt12=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt12 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT12, UNUSEDTQCNT12, reg_unused_tq_cnt12, unusedtqcnt12);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT12, reg_unused_tq_cnt12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt12_get(uint32_t *unusedtqcnt12)
{
    uint32_t reg_unused_tq_cnt12=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT12, reg_unused_tq_cnt12);

    *unusedtqcnt12 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT12, UNUSEDTQCNT12, reg_unused_tq_cnt12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt13_set(uint32_t unusedtqcnt13)
{
    uint32_t reg_unused_tq_cnt13=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt13 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT13, UNUSEDTQCNT13, reg_unused_tq_cnt13, unusedtqcnt13);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT13, reg_unused_tq_cnt13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt13_get(uint32_t *unusedtqcnt13)
{
    uint32_t reg_unused_tq_cnt13=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT13, reg_unused_tq_cnt13);

    *unusedtqcnt13 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT13, UNUSEDTQCNT13, reg_unused_tq_cnt13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt14_set(uint32_t unusedtqcnt14)
{
    uint32_t reg_unused_tq_cnt14=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt14 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT14, UNUSEDTQCNT14, reg_unused_tq_cnt14, unusedtqcnt14);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT14, reg_unused_tq_cnt14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt14_get(uint32_t *unusedtqcnt14)
{
    uint32_t reg_unused_tq_cnt14=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT14, reg_unused_tq_cnt14);

    *unusedtqcnt14 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT14, UNUSEDTQCNT14, reg_unused_tq_cnt14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt15_set(uint32_t unusedtqcnt15)
{
    uint32_t reg_unused_tq_cnt15=0;

#ifdef VALIDATE_PARMS
#endif

    reg_unused_tq_cnt15 = RU_FIELD_SET(0, EPN, UNUSED_TQ_CNT15, UNUSEDTQCNT15, reg_unused_tq_cnt15, unusedtqcnt15);

    RU_REG_WRITE(0, EPN, UNUSED_TQ_CNT15, reg_unused_tq_cnt15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_unused_tq_cnt15_get(uint32_t *unusedtqcnt15)
{
    uint32_t reg_unused_tq_cnt15=0;

#ifdef VALIDATE_PARMS
    if(!unusedtqcnt15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, UNUSED_TQ_CNT15, reg_unused_tq_cnt15);

    *unusedtqcnt15 = RU_FIELD_GET(0, EPN, UNUSED_TQ_CNT15, UNUSEDTQCNT15, reg_unused_tq_cnt15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_8_set(uint16_t cfgshpmask8)
{
    uint32_t reg_tx_l1s_shp_que_mask_8=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_8 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_8, CFGSHPMASK8, reg_tx_l1s_shp_que_mask_8, cfgshpmask8);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_8, reg_tx_l1s_shp_que_mask_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_8_get(uint16_t *cfgshpmask8)
{
    uint32_t reg_tx_l1s_shp_que_mask_8=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_8, reg_tx_l1s_shp_que_mask_8);

    *cfgshpmask8 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_8, CFGSHPMASK8, reg_tx_l1s_shp_que_mask_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_9_set(uint16_t cfgshpmask9)
{
    uint32_t reg_tx_l1s_shp_que_mask_9=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_9 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_9, CFGSHPMASK9, reg_tx_l1s_shp_que_mask_9, cfgshpmask9);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_9, reg_tx_l1s_shp_que_mask_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_9_get(uint16_t *cfgshpmask9)
{
    uint32_t reg_tx_l1s_shp_que_mask_9=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_9, reg_tx_l1s_shp_que_mask_9);

    *cfgshpmask9 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_9, CFGSHPMASK9, reg_tx_l1s_shp_que_mask_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_10_set(uint16_t cfgshpmask10)
{
    uint32_t reg_tx_l1s_shp_que_mask_10=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_10 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_10, CFGSHPMASK10, reg_tx_l1s_shp_que_mask_10, cfgshpmask10);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_10, reg_tx_l1s_shp_que_mask_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_10_get(uint16_t *cfgshpmask10)
{
    uint32_t reg_tx_l1s_shp_que_mask_10=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_10, reg_tx_l1s_shp_que_mask_10);

    *cfgshpmask10 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_10, CFGSHPMASK10, reg_tx_l1s_shp_que_mask_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_11_set(uint16_t cfgshpmask11)
{
    uint32_t reg_tx_l1s_shp_que_mask_11=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_11 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_11, CFGSHPMASK11, reg_tx_l1s_shp_que_mask_11, cfgshpmask11);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_11, reg_tx_l1s_shp_que_mask_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_11_get(uint16_t *cfgshpmask11)
{
    uint32_t reg_tx_l1s_shp_que_mask_11=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_11, reg_tx_l1s_shp_que_mask_11);

    *cfgshpmask11 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_11, CFGSHPMASK11, reg_tx_l1s_shp_que_mask_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_12_set(uint16_t cfgshpmask12)
{
    uint32_t reg_tx_l1s_shp_que_mask_12=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_12 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_12, CFGSHPMASK12, reg_tx_l1s_shp_que_mask_12, cfgshpmask12);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_12, reg_tx_l1s_shp_que_mask_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_12_get(uint16_t *cfgshpmask12)
{
    uint32_t reg_tx_l1s_shp_que_mask_12=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_12, reg_tx_l1s_shp_que_mask_12);

    *cfgshpmask12 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_12, CFGSHPMASK12, reg_tx_l1s_shp_que_mask_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_13_set(uint16_t cfgshpmask13)
{
    uint32_t reg_tx_l1s_shp_que_mask_13=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_13 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_13, CFGSHPMASK13, reg_tx_l1s_shp_que_mask_13, cfgshpmask13);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_13, reg_tx_l1s_shp_que_mask_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_13_get(uint16_t *cfgshpmask13)
{
    uint32_t reg_tx_l1s_shp_que_mask_13=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_13, reg_tx_l1s_shp_que_mask_13);

    *cfgshpmask13 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_13, CFGSHPMASK13, reg_tx_l1s_shp_que_mask_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_14_set(uint16_t cfgshpmask14)
{
    uint32_t reg_tx_l1s_shp_que_mask_14=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_14 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_14, CFGSHPMASK14, reg_tx_l1s_shp_que_mask_14, cfgshpmask14);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_14, reg_tx_l1s_shp_que_mask_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_14_get(uint16_t *cfgshpmask14)
{
    uint32_t reg_tx_l1s_shp_que_mask_14=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_14, reg_tx_l1s_shp_que_mask_14);

    *cfgshpmask14 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_14, CFGSHPMASK14, reg_tx_l1s_shp_que_mask_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_15_set(uint16_t cfgshpmask15)
{
    uint32_t reg_tx_l1s_shp_que_mask_15=0;

#ifdef VALIDATE_PARMS
#endif

    reg_tx_l1s_shp_que_mask_15 = RU_FIELD_SET(0, EPN, TX_L1S_SHP_QUE_MASK_15, CFGSHPMASK15, reg_tx_l1s_shp_que_mask_15, cfgshpmask15);

    RU_REG_WRITE(0, EPN, TX_L1S_SHP_QUE_MASK_15, reg_tx_l1s_shp_que_mask_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l1s_shp_que_mask_15_get(uint16_t *cfgshpmask15)
{
    uint32_t reg_tx_l1s_shp_que_mask_15=0;

#ifdef VALIDATE_PARMS
    if(!cfgshpmask15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L1S_SHP_QUE_MASK_15, reg_tx_l1s_shp_que_mask_15);

    *cfgshpmask15 = RU_FIELD_GET(0, EPN, TX_L1S_SHP_QUE_MASK_15, CFGSHPMASK15, reg_tx_l1s_shp_que_mask_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_8_set(uint16_t cfgl2squeend8, uint16_t cfgl2squestart8)
{
    uint32_t reg_tx_l2s_que_config_8=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend8 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart8 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_8 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_8, CFGL2SQUEEND8, reg_tx_l2s_que_config_8, cfgl2squeend8);
    reg_tx_l2s_que_config_8 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_8, CFGL2SQUESTART8, reg_tx_l2s_que_config_8, cfgl2squestart8);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_8, reg_tx_l2s_que_config_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_8_get(uint16_t *cfgl2squeend8, uint16_t *cfgl2squestart8)
{
    uint32_t reg_tx_l2s_que_config_8=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend8 || !cfgl2squestart8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_8, reg_tx_l2s_que_config_8);

    *cfgl2squeend8 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_8, CFGL2SQUEEND8, reg_tx_l2s_que_config_8);
    *cfgl2squestart8 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_8, CFGL2SQUESTART8, reg_tx_l2s_que_config_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_9_set(uint16_t cfgl2squeend9, uint16_t cfgl2squestart9)
{
    uint32_t reg_tx_l2s_que_config_9=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend9 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart9 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_9 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_9, CFGL2SQUEEND9, reg_tx_l2s_que_config_9, cfgl2squeend9);
    reg_tx_l2s_que_config_9 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_9, CFGL2SQUESTART9, reg_tx_l2s_que_config_9, cfgl2squestart9);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_9, reg_tx_l2s_que_config_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_9_get(uint16_t *cfgl2squeend9, uint16_t *cfgl2squestart9)
{
    uint32_t reg_tx_l2s_que_config_9=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend9 || !cfgl2squestart9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_9, reg_tx_l2s_que_config_9);

    *cfgl2squeend9 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_9, CFGL2SQUEEND9, reg_tx_l2s_que_config_9);
    *cfgl2squestart9 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_9, CFGL2SQUESTART9, reg_tx_l2s_que_config_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_10_set(uint16_t cfgl2squeend10, uint16_t cfgl2squestart10)
{
    uint32_t reg_tx_l2s_que_config_10=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend10 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart10 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_10 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_10, CFGL2SQUEEND10, reg_tx_l2s_que_config_10, cfgl2squeend10);
    reg_tx_l2s_que_config_10 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_10, CFGL2SQUESTART10, reg_tx_l2s_que_config_10, cfgl2squestart10);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_10, reg_tx_l2s_que_config_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_10_get(uint16_t *cfgl2squeend10, uint16_t *cfgl2squestart10)
{
    uint32_t reg_tx_l2s_que_config_10=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend10 || !cfgl2squestart10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_10, reg_tx_l2s_que_config_10);

    *cfgl2squeend10 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_10, CFGL2SQUEEND10, reg_tx_l2s_que_config_10);
    *cfgl2squestart10 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_10, CFGL2SQUESTART10, reg_tx_l2s_que_config_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_11_set(uint16_t cfgl2squeend11, uint16_t cfgl2squestart11)
{
    uint32_t reg_tx_l2s_que_config_11=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend11 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart11 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_11 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_11, CFGL2SQUEEND11, reg_tx_l2s_que_config_11, cfgl2squeend11);
    reg_tx_l2s_que_config_11 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_11, CFGL2SQUESTART11, reg_tx_l2s_que_config_11, cfgl2squestart11);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_11, reg_tx_l2s_que_config_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_11_get(uint16_t *cfgl2squeend11, uint16_t *cfgl2squestart11)
{
    uint32_t reg_tx_l2s_que_config_11=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend11 || !cfgl2squestart11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_11, reg_tx_l2s_que_config_11);

    *cfgl2squeend11 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_11, CFGL2SQUEEND11, reg_tx_l2s_que_config_11);
    *cfgl2squestart11 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_11, CFGL2SQUESTART11, reg_tx_l2s_que_config_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_12_set(uint16_t cfgl2squeend12, uint16_t cfgl2squestart12)
{
    uint32_t reg_tx_l2s_que_config_12=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend12 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart12 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_12 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_12, CFGL2SQUEEND12, reg_tx_l2s_que_config_12, cfgl2squeend12);
    reg_tx_l2s_que_config_12 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_12, CFGL2SQUESTART12, reg_tx_l2s_que_config_12, cfgl2squestart12);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_12, reg_tx_l2s_que_config_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_12_get(uint16_t *cfgl2squeend12, uint16_t *cfgl2squestart12)
{
    uint32_t reg_tx_l2s_que_config_12=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend12 || !cfgl2squestart12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_12, reg_tx_l2s_que_config_12);

    *cfgl2squeend12 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_12, CFGL2SQUEEND12, reg_tx_l2s_que_config_12);
    *cfgl2squestart12 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_12, CFGL2SQUESTART12, reg_tx_l2s_que_config_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_13_set(uint16_t cfgl2squeend13, uint16_t cfgl2squestart13)
{
    uint32_t reg_tx_l2s_que_config_13=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend13 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart13 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_13 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_13, CFGL2SQUEEND13, reg_tx_l2s_que_config_13, cfgl2squeend13);
    reg_tx_l2s_que_config_13 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_13, CFGL2SQUESTART13, reg_tx_l2s_que_config_13, cfgl2squestart13);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_13, reg_tx_l2s_que_config_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_13_get(uint16_t *cfgl2squeend13, uint16_t *cfgl2squestart13)
{
    uint32_t reg_tx_l2s_que_config_13=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend13 || !cfgl2squestart13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_13, reg_tx_l2s_que_config_13);

    *cfgl2squeend13 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_13, CFGL2SQUEEND13, reg_tx_l2s_que_config_13);
    *cfgl2squestart13 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_13, CFGL2SQUESTART13, reg_tx_l2s_que_config_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_14_set(uint16_t cfgl2squeend14, uint16_t cfgl2squestart14)
{
    uint32_t reg_tx_l2s_que_config_14=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend14 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart14 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_14 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_14, CFGL2SQUEEND14, reg_tx_l2s_que_config_14, cfgl2squeend14);
    reg_tx_l2s_que_config_14 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_14, CFGL2SQUESTART14, reg_tx_l2s_que_config_14, cfgl2squestart14);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_14, reg_tx_l2s_que_config_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_14_get(uint16_t *cfgl2squeend14, uint16_t *cfgl2squestart14)
{
    uint32_t reg_tx_l2s_que_config_14=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend14 || !cfgl2squestart14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_14, reg_tx_l2s_que_config_14);

    *cfgl2squeend14 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_14, CFGL2SQUEEND14, reg_tx_l2s_que_config_14);
    *cfgl2squestart14 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_14, CFGL2SQUESTART14, reg_tx_l2s_que_config_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_15_set(uint16_t cfgl2squeend15, uint16_t cfgl2squestart15)
{
    uint32_t reg_tx_l2s_que_config_15=0;

#ifdef VALIDATE_PARMS
    if((cfgl2squeend15 >= _12BITS_MAX_VAL_) ||
       (cfgl2squestart15 >= _12BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_l2s_que_config_15 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_15, CFGL2SQUEEND15, reg_tx_l2s_que_config_15, cfgl2squeend15);
    reg_tx_l2s_que_config_15 = RU_FIELD_SET(0, EPN, TX_L2S_QUE_CONFIG_15, CFGL2SQUESTART15, reg_tx_l2s_que_config_15, cfgl2squestart15);

    RU_REG_WRITE(0, EPN, TX_L2S_QUE_CONFIG_15, reg_tx_l2s_que_config_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_l2s_que_config_15_get(uint16_t *cfgl2squeend15, uint16_t *cfgl2squestart15)
{
    uint32_t reg_tx_l2s_que_config_15=0;

#ifdef VALIDATE_PARMS
    if(!cfgl2squeend15 || !cfgl2squestart15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_L2S_QUE_CONFIG_15, reg_tx_l2s_que_config_15);

    *cfgl2squeend15 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_15, CFGL2SQUEEND15, reg_tx_l2s_que_config_15);
    *cfgl2squestart15 = RU_FIELD_GET(0, EPN, TX_L2S_QUE_CONFIG_15, CFGL2SQUESTART15, reg_tx_l2s_que_config_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_8_set(uint32_t prvburstlimit8)
{
    uint32_t reg_tx_ctc_burst_limit_8=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit8 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_8 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_8, PRVBURSTLIMIT8, reg_tx_ctc_burst_limit_8, prvburstlimit8);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_8, reg_tx_ctc_burst_limit_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_8_get(uint32_t *prvburstlimit8)
{
    uint32_t reg_tx_ctc_burst_limit_8=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit8)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_8, reg_tx_ctc_burst_limit_8);

    *prvburstlimit8 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_8, PRVBURSTLIMIT8, reg_tx_ctc_burst_limit_8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_9_set(uint32_t prvburstlimit9)
{
    uint32_t reg_tx_ctc_burst_limit_9=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit9 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_9 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_9, PRVBURSTLIMIT9, reg_tx_ctc_burst_limit_9, prvburstlimit9);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_9, reg_tx_ctc_burst_limit_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_9_get(uint32_t *prvburstlimit9)
{
    uint32_t reg_tx_ctc_burst_limit_9=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit9)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_9, reg_tx_ctc_burst_limit_9);

    *prvburstlimit9 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_9, PRVBURSTLIMIT9, reg_tx_ctc_burst_limit_9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_10_set(uint32_t prvburstlimit10)
{
    uint32_t reg_tx_ctc_burst_limit_10=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit10 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_10 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_10, PRVBURSTLIMIT10, reg_tx_ctc_burst_limit_10, prvburstlimit10);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_10, reg_tx_ctc_burst_limit_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_10_get(uint32_t *prvburstlimit10)
{
    uint32_t reg_tx_ctc_burst_limit_10=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit10)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_10, reg_tx_ctc_burst_limit_10);

    *prvburstlimit10 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_10, PRVBURSTLIMIT10, reg_tx_ctc_burst_limit_10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_11_set(uint32_t prvburstlimit11)
{
    uint32_t reg_tx_ctc_burst_limit_11=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit11 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_11 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_11, PRVBURSTLIMIT11, reg_tx_ctc_burst_limit_11, prvburstlimit11);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_11, reg_tx_ctc_burst_limit_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_11_get(uint32_t *prvburstlimit11)
{
    uint32_t reg_tx_ctc_burst_limit_11=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit11)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_11, reg_tx_ctc_burst_limit_11);

    *prvburstlimit11 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_11, PRVBURSTLIMIT11, reg_tx_ctc_burst_limit_11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_12_set(uint32_t prvburstlimit12)
{
    uint32_t reg_tx_ctc_burst_limit_12=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit12 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_12 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_12, PRVBURSTLIMIT12, reg_tx_ctc_burst_limit_12, prvburstlimit12);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_12, reg_tx_ctc_burst_limit_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_12_get(uint32_t *prvburstlimit12)
{
    uint32_t reg_tx_ctc_burst_limit_12=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit12)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_12, reg_tx_ctc_burst_limit_12);

    *prvburstlimit12 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_12, PRVBURSTLIMIT12, reg_tx_ctc_burst_limit_12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_13_set(uint32_t prvburstlimit13)
{
    uint32_t reg_tx_ctc_burst_limit_13=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit13 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_13 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_13, PRVBURSTLIMIT13, reg_tx_ctc_burst_limit_13, prvburstlimit13);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_13, reg_tx_ctc_burst_limit_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_13_get(uint32_t *prvburstlimit13)
{
    uint32_t reg_tx_ctc_burst_limit_13=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit13)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_13, reg_tx_ctc_burst_limit_13);

    *prvburstlimit13 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_13, PRVBURSTLIMIT13, reg_tx_ctc_burst_limit_13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_14_set(uint32_t prvburstlimit14)
{
    uint32_t reg_tx_ctc_burst_limit_14=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit14 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_14 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_14, PRVBURSTLIMIT14, reg_tx_ctc_burst_limit_14, prvburstlimit14);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_14, reg_tx_ctc_burst_limit_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_14_get(uint32_t *prvburstlimit14)
{
    uint32_t reg_tx_ctc_burst_limit_14=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit14)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_14, reg_tx_ctc_burst_limit_14);

    *prvburstlimit14 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_14, PRVBURSTLIMIT14, reg_tx_ctc_burst_limit_14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_15_set(uint32_t prvburstlimit15)
{
    uint32_t reg_tx_ctc_burst_limit_15=0;

#ifdef VALIDATE_PARMS
    if((prvburstlimit15 >= _18BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_tx_ctc_burst_limit_15 = RU_FIELD_SET(0, EPN, TX_CTC_BURST_LIMIT_15, PRVBURSTLIMIT15, reg_tx_ctc_burst_limit_15, prvburstlimit15);

    RU_REG_WRITE(0, EPN, TX_CTC_BURST_LIMIT_15, reg_tx_ctc_burst_limit_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_tx_ctc_burst_limit_15_get(uint32_t *prvburstlimit15)
{
    uint32_t reg_tx_ctc_burst_limit_15=0;

#ifdef VALIDATE_PARMS
    if(!prvburstlimit15)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, TX_CTC_BURST_LIMIT_15, reg_tx_ctc_burst_limit_15);

    *prvburstlimit15 = RU_FIELD_GET(0, EPN, TX_CTC_BURST_LIMIT_15, PRVBURSTLIMIT15, reg_tx_ctc_burst_limit_15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size0_set(uint16_t cfgaddburstcap0_2, uint16_t cfgaddburstcap0_1)
{
    uint32_t reg_10g_abc_size0=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size0 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE0, CFGADDBURSTCAP0_2, reg_10g_abc_size0, cfgaddburstcap0_2);
    reg_10g_abc_size0 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE0, CFGADDBURSTCAP0_1, reg_10g_abc_size0, cfgaddburstcap0_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE0, reg_10g_abc_size0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size0_get(uint16_t *cfgaddburstcap0_2, uint16_t *cfgaddburstcap0_1)
{
    uint32_t reg_10g_abc_size0=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap0_2 || !cfgaddburstcap0_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE0, reg_10g_abc_size0);

    *cfgaddburstcap0_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE0, CFGADDBURSTCAP0_2, reg_10g_abc_size0);
    *cfgaddburstcap0_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE0, CFGADDBURSTCAP0_1, reg_10g_abc_size0);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size1_set(uint16_t cfgaddburstcap1_1, uint16_t cfgaddburstcap0_3)
{
    uint32_t reg_10g_abc_size1=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size1 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE1, CFGADDBURSTCAP1_1, reg_10g_abc_size1, cfgaddburstcap1_1);
    reg_10g_abc_size1 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE1, CFGADDBURSTCAP0_3, reg_10g_abc_size1, cfgaddburstcap0_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE1, reg_10g_abc_size1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size1_get(uint16_t *cfgaddburstcap1_1, uint16_t *cfgaddburstcap0_3)
{
    uint32_t reg_10g_abc_size1=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap1_1 || !cfgaddburstcap0_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE1, reg_10g_abc_size1);

    *cfgaddburstcap1_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE1, CFGADDBURSTCAP1_1, reg_10g_abc_size1);
    *cfgaddburstcap0_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE1, CFGADDBURSTCAP0_3, reg_10g_abc_size1);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size2_set(uint16_t cfgaddburstcap1_3, uint16_t cfgaddburstcap1_2)
{
    uint32_t reg_10g_abc_size2=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size2 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE2, CFGADDBURSTCAP1_3, reg_10g_abc_size2, cfgaddburstcap1_3);
    reg_10g_abc_size2 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE2, CFGADDBURSTCAP1_2, reg_10g_abc_size2, cfgaddburstcap1_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE2, reg_10g_abc_size2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size2_get(uint16_t *cfgaddburstcap1_3, uint16_t *cfgaddburstcap1_2)
{
    uint32_t reg_10g_abc_size2=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap1_3 || !cfgaddburstcap1_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE2, reg_10g_abc_size2);

    *cfgaddburstcap1_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE2, CFGADDBURSTCAP1_3, reg_10g_abc_size2);
    *cfgaddburstcap1_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE2, CFGADDBURSTCAP1_2, reg_10g_abc_size2);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size3_set(uint16_t cfgaddburstcap2_2, uint16_t cfgaddburstcap2_1)
{
    uint32_t reg_10g_abc_size3=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size3 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE3, CFGADDBURSTCAP2_2, reg_10g_abc_size3, cfgaddburstcap2_2);
    reg_10g_abc_size3 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE3, CFGADDBURSTCAP2_1, reg_10g_abc_size3, cfgaddburstcap2_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE3, reg_10g_abc_size3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size3_get(uint16_t *cfgaddburstcap2_2, uint16_t *cfgaddburstcap2_1)
{
    uint32_t reg_10g_abc_size3=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap2_2 || !cfgaddburstcap2_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE3, reg_10g_abc_size3);

    *cfgaddburstcap2_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE3, CFGADDBURSTCAP2_2, reg_10g_abc_size3);
    *cfgaddburstcap2_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE3, CFGADDBURSTCAP2_1, reg_10g_abc_size3);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size4_set(uint16_t cfgaddburstcap3_1, uint16_t cfgaddburstcap2_3)
{
    uint32_t reg_10g_abc_size4=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size4 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE4, CFGADDBURSTCAP3_1, reg_10g_abc_size4, cfgaddburstcap3_1);
    reg_10g_abc_size4 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE4, CFGADDBURSTCAP2_3, reg_10g_abc_size4, cfgaddburstcap2_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE4, reg_10g_abc_size4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size4_get(uint16_t *cfgaddburstcap3_1, uint16_t *cfgaddburstcap2_3)
{
    uint32_t reg_10g_abc_size4=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap3_1 || !cfgaddburstcap2_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE4, reg_10g_abc_size4);

    *cfgaddburstcap3_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE4, CFGADDBURSTCAP3_1, reg_10g_abc_size4);
    *cfgaddburstcap2_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE4, CFGADDBURSTCAP2_3, reg_10g_abc_size4);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size5_set(uint16_t cfgaddburstcap3_3, uint16_t cfgaddburstcap3_2)
{
    uint32_t reg_10g_abc_size5=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size5 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE5, CFGADDBURSTCAP3_3, reg_10g_abc_size5, cfgaddburstcap3_3);
    reg_10g_abc_size5 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE5, CFGADDBURSTCAP3_2, reg_10g_abc_size5, cfgaddburstcap3_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE5, reg_10g_abc_size5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size5_get(uint16_t *cfgaddburstcap3_3, uint16_t *cfgaddburstcap3_2)
{
    uint32_t reg_10g_abc_size5=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap3_3 || !cfgaddburstcap3_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE5, reg_10g_abc_size5);

    *cfgaddburstcap3_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE5, CFGADDBURSTCAP3_3, reg_10g_abc_size5);
    *cfgaddburstcap3_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE5, CFGADDBURSTCAP3_2, reg_10g_abc_size5);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size6_set(uint16_t cfgaddburstcap4_2, uint16_t cfgaddburstcap4_1)
{
    uint32_t reg_10g_abc_size6=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size6 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE6, CFGADDBURSTCAP4_2, reg_10g_abc_size6, cfgaddburstcap4_2);
    reg_10g_abc_size6 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE6, CFGADDBURSTCAP4_1, reg_10g_abc_size6, cfgaddburstcap4_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE6, reg_10g_abc_size6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size6_get(uint16_t *cfgaddburstcap4_2, uint16_t *cfgaddburstcap4_1)
{
    uint32_t reg_10g_abc_size6=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap4_2 || !cfgaddburstcap4_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE6, reg_10g_abc_size6);

    *cfgaddburstcap4_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE6, CFGADDBURSTCAP4_2, reg_10g_abc_size6);
    *cfgaddburstcap4_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE6, CFGADDBURSTCAP4_1, reg_10g_abc_size6);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size7_set(uint16_t cfgaddburstcap5_1, uint16_t cfgaddburstcap4_3)
{
    uint32_t reg_10g_abc_size7=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size7 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE7, CFGADDBURSTCAP5_1, reg_10g_abc_size7, cfgaddburstcap5_1);
    reg_10g_abc_size7 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE7, CFGADDBURSTCAP4_3, reg_10g_abc_size7, cfgaddburstcap4_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE7, reg_10g_abc_size7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size7_get(uint16_t *cfgaddburstcap5_1, uint16_t *cfgaddburstcap4_3)
{
    uint32_t reg_10g_abc_size7=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap5_1 || !cfgaddburstcap4_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE7, reg_10g_abc_size7);

    *cfgaddburstcap5_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE7, CFGADDBURSTCAP5_1, reg_10g_abc_size7);
    *cfgaddburstcap4_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE7, CFGADDBURSTCAP4_3, reg_10g_abc_size7);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size8_set(uint16_t cfgaddburstcap5_3, uint16_t cfgaddburstcap5_2)
{
    uint32_t reg_10g_abc_size8=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size8 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE8, CFGADDBURSTCAP5_3, reg_10g_abc_size8, cfgaddburstcap5_3);
    reg_10g_abc_size8 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE8, CFGADDBURSTCAP5_2, reg_10g_abc_size8, cfgaddburstcap5_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE8, reg_10g_abc_size8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size8_get(uint16_t *cfgaddburstcap5_3, uint16_t *cfgaddburstcap5_2)
{
    uint32_t reg_10g_abc_size8=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap5_3 || !cfgaddburstcap5_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE8, reg_10g_abc_size8);

    *cfgaddburstcap5_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE8, CFGADDBURSTCAP5_3, reg_10g_abc_size8);
    *cfgaddburstcap5_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE8, CFGADDBURSTCAP5_2, reg_10g_abc_size8);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size9_set(uint16_t cfgaddburstcap6_2, uint16_t cfgaddburstcap6_1)
{
    uint32_t reg_10g_abc_size9=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size9 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE9, CFGADDBURSTCAP6_2, reg_10g_abc_size9, cfgaddburstcap6_2);
    reg_10g_abc_size9 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE9, CFGADDBURSTCAP6_1, reg_10g_abc_size9, cfgaddburstcap6_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE9, reg_10g_abc_size9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size9_get(uint16_t *cfgaddburstcap6_2, uint16_t *cfgaddburstcap6_1)
{
    uint32_t reg_10g_abc_size9=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap6_2 || !cfgaddburstcap6_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE9, reg_10g_abc_size9);

    *cfgaddburstcap6_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE9, CFGADDBURSTCAP6_2, reg_10g_abc_size9);
    *cfgaddburstcap6_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE9, CFGADDBURSTCAP6_1, reg_10g_abc_size9);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size10_set(uint16_t cfgaddburstcap7_1, uint16_t cfgaddburstcap6_3)
{
    uint32_t reg_10g_abc_size10=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size10 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE10, CFGADDBURSTCAP7_1, reg_10g_abc_size10, cfgaddburstcap7_1);
    reg_10g_abc_size10 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE10, CFGADDBURSTCAP6_3, reg_10g_abc_size10, cfgaddburstcap6_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE10, reg_10g_abc_size10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size10_get(uint16_t *cfgaddburstcap7_1, uint16_t *cfgaddburstcap6_3)
{
    uint32_t reg_10g_abc_size10=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap7_1 || !cfgaddburstcap6_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE10, reg_10g_abc_size10);

    *cfgaddburstcap7_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE10, CFGADDBURSTCAP7_1, reg_10g_abc_size10);
    *cfgaddburstcap6_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE10, CFGADDBURSTCAP6_3, reg_10g_abc_size10);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size11_set(uint16_t cfgaddburstcap7_3, uint16_t cfgaddburstcap7_2)
{
    uint32_t reg_10g_abc_size11=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size11 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE11, CFGADDBURSTCAP7_3, reg_10g_abc_size11, cfgaddburstcap7_3);
    reg_10g_abc_size11 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE11, CFGADDBURSTCAP7_2, reg_10g_abc_size11, cfgaddburstcap7_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE11, reg_10g_abc_size11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size11_get(uint16_t *cfgaddburstcap7_3, uint16_t *cfgaddburstcap7_2)
{
    uint32_t reg_10g_abc_size11=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap7_3 || !cfgaddburstcap7_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE11, reg_10g_abc_size11);

    *cfgaddburstcap7_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE11, CFGADDBURSTCAP7_3, reg_10g_abc_size11);
    *cfgaddburstcap7_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE11, CFGADDBURSTCAP7_2, reg_10g_abc_size11);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size12_set(uint16_t cfgaddburstcap8_2, uint16_t cfgaddburstcap8_1)
{
    uint32_t reg_10g_abc_size12=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size12 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE12, CFGADDBURSTCAP8_2, reg_10g_abc_size12, cfgaddburstcap8_2);
    reg_10g_abc_size12 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE12, CFGADDBURSTCAP8_1, reg_10g_abc_size12, cfgaddburstcap8_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE12, reg_10g_abc_size12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size12_get(uint16_t *cfgaddburstcap8_2, uint16_t *cfgaddburstcap8_1)
{
    uint32_t reg_10g_abc_size12=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap8_2 || !cfgaddburstcap8_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE12, reg_10g_abc_size12);

    *cfgaddburstcap8_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE12, CFGADDBURSTCAP8_2, reg_10g_abc_size12);
    *cfgaddburstcap8_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE12, CFGADDBURSTCAP8_1, reg_10g_abc_size12);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size13_set(uint16_t cfgaddburstcap9_1, uint16_t cfgaddburstcap8_3)
{
    uint32_t reg_10g_abc_size13=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size13 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE13, CFGADDBURSTCAP9_1, reg_10g_abc_size13, cfgaddburstcap9_1);
    reg_10g_abc_size13 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE13, CFGADDBURSTCAP8_3, reg_10g_abc_size13, cfgaddburstcap8_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE13, reg_10g_abc_size13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size13_get(uint16_t *cfgaddburstcap9_1, uint16_t *cfgaddburstcap8_3)
{
    uint32_t reg_10g_abc_size13=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap9_1 || !cfgaddburstcap8_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE13, reg_10g_abc_size13);

    *cfgaddburstcap9_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE13, CFGADDBURSTCAP9_1, reg_10g_abc_size13);
    *cfgaddburstcap8_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE13, CFGADDBURSTCAP8_3, reg_10g_abc_size13);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size14_set(uint16_t cfgaddburstcap9_3, uint16_t cfgaddburstcap9_2)
{
    uint32_t reg_10g_abc_size14=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size14 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE14, CFGADDBURSTCAP9_3, reg_10g_abc_size14, cfgaddburstcap9_3);
    reg_10g_abc_size14 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE14, CFGADDBURSTCAP9_2, reg_10g_abc_size14, cfgaddburstcap9_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE14, reg_10g_abc_size14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size14_get(uint16_t *cfgaddburstcap9_3, uint16_t *cfgaddburstcap9_2)
{
    uint32_t reg_10g_abc_size14=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap9_3 || !cfgaddburstcap9_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE14, reg_10g_abc_size14);

    *cfgaddburstcap9_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE14, CFGADDBURSTCAP9_3, reg_10g_abc_size14);
    *cfgaddburstcap9_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE14, CFGADDBURSTCAP9_2, reg_10g_abc_size14);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size15_set(uint16_t cfgaddburstcap10_2, uint16_t cfgaddburstcap10_1)
{
    uint32_t reg_10g_abc_size15=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size15 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE15, CFGADDBURSTCAP10_2, reg_10g_abc_size15, cfgaddburstcap10_2);
    reg_10g_abc_size15 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE15, CFGADDBURSTCAP10_1, reg_10g_abc_size15, cfgaddburstcap10_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE15, reg_10g_abc_size15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size15_get(uint16_t *cfgaddburstcap10_2, uint16_t *cfgaddburstcap10_1)
{
    uint32_t reg_10g_abc_size15=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap10_2 || !cfgaddburstcap10_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE15, reg_10g_abc_size15);

    *cfgaddburstcap10_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE15, CFGADDBURSTCAP10_2, reg_10g_abc_size15);
    *cfgaddburstcap10_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE15, CFGADDBURSTCAP10_1, reg_10g_abc_size15);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size16_set(uint16_t cfgaddburstcap11_1, uint16_t cfgaddburstcap10_3)
{
    uint32_t reg_10g_abc_size16=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size16 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE16, CFGADDBURSTCAP11_1, reg_10g_abc_size16, cfgaddburstcap11_1);
    reg_10g_abc_size16 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE16, CFGADDBURSTCAP10_3, reg_10g_abc_size16, cfgaddburstcap10_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE16, reg_10g_abc_size16);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size16_get(uint16_t *cfgaddburstcap11_1, uint16_t *cfgaddburstcap10_3)
{
    uint32_t reg_10g_abc_size16=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap11_1 || !cfgaddburstcap10_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE16, reg_10g_abc_size16);

    *cfgaddburstcap11_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE16, CFGADDBURSTCAP11_1, reg_10g_abc_size16);
    *cfgaddburstcap10_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE16, CFGADDBURSTCAP10_3, reg_10g_abc_size16);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size17_set(uint16_t cfgaddburstcap11_3, uint16_t cfgaddburstcap11_2)
{
    uint32_t reg_10g_abc_size17=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size17 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE17, CFGADDBURSTCAP11_3, reg_10g_abc_size17, cfgaddburstcap11_3);
    reg_10g_abc_size17 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE17, CFGADDBURSTCAP11_2, reg_10g_abc_size17, cfgaddburstcap11_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE17, reg_10g_abc_size17);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size17_get(uint16_t *cfgaddburstcap11_3, uint16_t *cfgaddburstcap11_2)
{
    uint32_t reg_10g_abc_size17=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap11_3 || !cfgaddburstcap11_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE17, reg_10g_abc_size17);

    *cfgaddburstcap11_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE17, CFGADDBURSTCAP11_3, reg_10g_abc_size17);
    *cfgaddburstcap11_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE17, CFGADDBURSTCAP11_2, reg_10g_abc_size17);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size18_set(uint16_t cfgaddburstcap12_2, uint16_t cfgaddburstcap12_1)
{
    uint32_t reg_10g_abc_size18=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size18 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE18, CFGADDBURSTCAP12_2, reg_10g_abc_size18, cfgaddburstcap12_2);
    reg_10g_abc_size18 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE18, CFGADDBURSTCAP12_1, reg_10g_abc_size18, cfgaddburstcap12_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE18, reg_10g_abc_size18);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size18_get(uint16_t *cfgaddburstcap12_2, uint16_t *cfgaddburstcap12_1)
{
    uint32_t reg_10g_abc_size18=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap12_2 || !cfgaddburstcap12_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE18, reg_10g_abc_size18);

    *cfgaddburstcap12_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE18, CFGADDBURSTCAP12_2, reg_10g_abc_size18);
    *cfgaddburstcap12_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE18, CFGADDBURSTCAP12_1, reg_10g_abc_size18);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size19_set(uint16_t cfgaddburstcap13_1, uint16_t cfgaddburstcap12_3)
{
    uint32_t reg_10g_abc_size19=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size19 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE19, CFGADDBURSTCAP13_1, reg_10g_abc_size19, cfgaddburstcap13_1);
    reg_10g_abc_size19 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE19, CFGADDBURSTCAP12_3, reg_10g_abc_size19, cfgaddburstcap12_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE19, reg_10g_abc_size19);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size19_get(uint16_t *cfgaddburstcap13_1, uint16_t *cfgaddburstcap12_3)
{
    uint32_t reg_10g_abc_size19=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap13_1 || !cfgaddburstcap12_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE19, reg_10g_abc_size19);

    *cfgaddburstcap13_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE19, CFGADDBURSTCAP13_1, reg_10g_abc_size19);
    *cfgaddburstcap12_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE19, CFGADDBURSTCAP12_3, reg_10g_abc_size19);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size20_set(uint16_t cfgaddburstcap13_3, uint16_t cfgaddburstcap13_2)
{
    uint32_t reg_10g_abc_size20=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size20 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE20, CFGADDBURSTCAP13_3, reg_10g_abc_size20, cfgaddburstcap13_3);
    reg_10g_abc_size20 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE20, CFGADDBURSTCAP13_2, reg_10g_abc_size20, cfgaddburstcap13_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE20, reg_10g_abc_size20);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size20_get(uint16_t *cfgaddburstcap13_3, uint16_t *cfgaddburstcap13_2)
{
    uint32_t reg_10g_abc_size20=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap13_3 || !cfgaddburstcap13_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE20, reg_10g_abc_size20);

    *cfgaddburstcap13_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE20, CFGADDBURSTCAP13_3, reg_10g_abc_size20);
    *cfgaddburstcap13_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE20, CFGADDBURSTCAP13_2, reg_10g_abc_size20);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size21_set(uint16_t cfgaddburstcap14_2, uint16_t cfgaddburstcap14_1)
{
    uint32_t reg_10g_abc_size21=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size21 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE21, CFGADDBURSTCAP14_2, reg_10g_abc_size21, cfgaddburstcap14_2);
    reg_10g_abc_size21 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE21, CFGADDBURSTCAP14_1, reg_10g_abc_size21, cfgaddburstcap14_1);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE21, reg_10g_abc_size21);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size21_get(uint16_t *cfgaddburstcap14_2, uint16_t *cfgaddburstcap14_1)
{
    uint32_t reg_10g_abc_size21=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap14_2 || !cfgaddburstcap14_1)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE21, reg_10g_abc_size21);

    *cfgaddburstcap14_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE21, CFGADDBURSTCAP14_2, reg_10g_abc_size21);
    *cfgaddburstcap14_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE21, CFGADDBURSTCAP14_1, reg_10g_abc_size21);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size22_set(uint16_t cfgaddburstcap15_1, uint16_t cfgaddburstcap14_3)
{
    uint32_t reg_10g_abc_size22=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size22 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE22, CFGADDBURSTCAP15_1, reg_10g_abc_size22, cfgaddburstcap15_1);
    reg_10g_abc_size22 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE22, CFGADDBURSTCAP14_3, reg_10g_abc_size22, cfgaddburstcap14_3);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE22, reg_10g_abc_size22);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size22_get(uint16_t *cfgaddburstcap15_1, uint16_t *cfgaddburstcap14_3)
{
    uint32_t reg_10g_abc_size22=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap15_1 || !cfgaddburstcap14_3)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE22, reg_10g_abc_size22);

    *cfgaddburstcap15_1 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE22, CFGADDBURSTCAP15_1, reg_10g_abc_size22);
    *cfgaddburstcap14_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE22, CFGADDBURSTCAP14_3, reg_10g_abc_size22);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size23_set(uint16_t cfgaddburstcap15_3, uint16_t cfgaddburstcap15_2)
{
    uint32_t reg_10g_abc_size23=0;

#ifdef VALIDATE_PARMS
#endif

    reg_10g_abc_size23 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE23, CFGADDBURSTCAP15_3, reg_10g_abc_size23, cfgaddburstcap15_3);
    reg_10g_abc_size23 = RU_FIELD_SET(0, EPN, 10G_ABC_SIZE23, CFGADDBURSTCAP15_2, reg_10g_abc_size23, cfgaddburstcap15_2);

    RU_REG_WRITE(0, EPN, 10G_ABC_SIZE23, reg_10g_abc_size23);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_epn_10g_abc_size23_get(uint16_t *cfgaddburstcap15_3, uint16_t *cfgaddburstcap15_2)
{
    uint32_t reg_10g_abc_size23=0;

#ifdef VALIDATE_PARMS
    if(!cfgaddburstcap15_3 || !cfgaddburstcap15_2)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
#endif

    RU_REG_READ(0, EPN, 10G_ABC_SIZE23, reg_10g_abc_size23);

    *cfgaddburstcap15_3 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE23, CFGADDBURSTCAP15_3, reg_10g_abc_size23);
    *cfgaddburstcap15_2 = RU_FIELD_GET(0, EPN, 10G_ABC_SIZE23, CFGADDBURSTCAP15_2, reg_10g_abc_size23);

    return BDMF_ERR_OK;
}

#ifdef USE_BDMF_SHELL
enum
{
    BDMF_control_0,
    BDMF_control_1,
    BDMF_enable_grants,
    BDMF_drop_disc_gates,
    BDMF_dis_fcs_chk,
    BDMF_pass_gates,
    BDMF_cfg_misalgn_fb,
    BDMF_discovery_filter,
    BDMF_minimum_grant_setup,
    BDMF_reset_gnt_fifo,
    BDMF_reset_l1_accumulator,
    BDMF_l1_accumulator_sel,
    BDMF_l1_sva_bytes,
    BDMF_l1_uva_bytes,
    BDMF_l1_sva_overflow,
    BDMF_l1_uva_overflow,
    BDMF_reset_rpt_pri,
    BDMF_reset_l2_rpt_fifo,
    BDMF_enable_upstream,
    BDMF_enable_upstream_fb,
    BDMF_enable_upstream_fec,
    BDMF_report_byte_length,
    BDMF_main_int_status,
    BDMF_gnt_full_int_status,
    BDMF_gnt_full_int_mask,
    BDMF_gnt_miss_int_status,
    BDMF_gnt_miss_int_mask,
    BDMF_disc_rx_int_status,
    BDMF_disc_rx_int_mask,
    BDMF_gnt_intv_int_status,
    BDMF_gnt_intv_int_mask,
    BDMF_gnt_far_int_status,
    BDMF_gnt_far_int_mask,
    BDMF_gnt_misalgn_int_status,
    BDMF_gnt_misalgn_int_mask,
    BDMF_np_gnt_int_status,
    BDMF_np_gnt_int_mask,
    BDMF_del_stale_int_status,
    BDMF_del_stale_int_mask,
    BDMF_gnt_pres_int_status,
    BDMF_gnt_pres_int_mask,
    BDMF_rpt_pres_int_status,
    BDMF_rpt_pres_int_mask,
    BDMF_drx_abort_int_status,
    BDMF_drx_abort_int_mask,
    BDMF_empty_rpt_int_status,
    BDMF_empty_rpt_int_mask,
    BDMF_bcap_overflow_int_status,
    BDMF_bcap_overflow_int_mask,
    BDMF_bbh_dns_fault_int_status,
    BDMF_bbh_dns_fault_int_mask,
    BDMF_bbh_ups_fault_int_status,
    BDMF_bbh_ups_fault_int_mask,
    BDMF_bbh_ups_abort_int_status,
    BDMF_bbh_ups_abort_int_mask,
    BDMF_main_int_mask,
    BDMF_max_gnt_size,
    BDMF_max_frame_size,
    BDMF_grant_ovr_hd,
    BDMF_poll_size,
    BDMF_dn_rd_gnt_margin,
    BDMF_gnt_time_start_delta,
    BDMF_time_stamp_diff,
    BDMF_up_time_stamp_off,
    BDMF_gnt_interval,
    BDMF_dn_gnt_misalign_thr,
    BDMF_dn_gnt_misalign_pause,
    BDMF_non_poll_intv,
    BDMF_force_fcs_err,
    BDMF_grant_overlap_limit,
    BDMF_aes_configuration_0,
    BDMF_disc_grant_ovr_hd,
    BDMF_dn_discovery_seed,
    BDMF_dn_discovery_inc,
    BDMF_dn_discovery_size,
    BDMF_fec_ipg_length,
    BDMF_fake_report_value_en,
    BDMF_fake_report_value,
    BDMF_valid_opcode_map,
    BDMF_up_packet_tx_margin,
    BDMF_multi_pri_cfg_0,
    BDMF_shared_bcap_ovrflow,
    BDMF_forced_report_en,
    BDMF_forced_report_max_interval,
    BDMF_l2s_flush_config,
    BDMF_data_port_command,
    BDMF_data_port_address,
    BDMF_data_port_data_0,
    BDMF_unmap_big_cnt,
    BDMF_unmap_frame_cnt,
    BDMF_unmap_fcs_cnt,
    BDMF_unmap_gate_cnt,
    BDMF_unmap_oam_cnt,
    BDMF_unmap_small_cnt,
    BDMF_fif_dequeue_event_cnt,
    BDMF_bbh_up_fault_halt_en,
    BDMF_bbh_up_tardy_halt_en,
    BDMF_debug_status_0,
    BDMF_debug_status_1,
    BDMF_debug_l2s_ptr_sel,
    BDMF_olt_mac_addr_lo,
    BDMF_olt_mac_addr_hi,
    BDMF_tx_l1s_shp_dqu_empty,
    BDMF_tx_l1s_unshaped_empty,
    BDMF_tx_l2s_que_empty,
    BDMF_tx_l2s_que_full,
    BDMF_tx_l2s_que_stopped,
    BDMF_bbh_max_outstanding_tardy_packets,
    BDMF_min_report_value_difference,
    BDMF_bbh_status_fifo_overflow,
    BDMF_spare_ctl,
    BDMF_ts_sync_offset,
    BDMF_dn_ts_offset,
    BDMF_up_ts_offset_lo,
    BDMF_up_ts_offset_hi,
    BDMF_two_step_ts_ctl,
    BDMF_two_step_ts_value_lo,
    BDMF_two_step_ts_value_hi,
    BDMF_1588_timestamp_int_status,
    BDMF_1588_timestamp_int_mask,
    BDMF_up_packet_fetch_margin,
    BDMF_dn_1588_timestamp,
    BDMF_persistent_report_cfg,
    BDMF_persistent_report_enables,
    BDMF_persistent_report_request_size,
    BDMF_aes_configuration_1,
    BDMF_onu_pause_pfc_cfg,
    BDMF_onu_pause_pfc_time_scale,
    BDMF_dpf_int_status,
    BDMF_dpf_int_mask,
    BDMF_burst_cap_0,
    BDMF_burst_cap_1,
    BDMF_burst_cap_2,
    BDMF_burst_cap_3,
    BDMF_burst_cap_4,
    BDMF_burst_cap_5,
    BDMF_burst_cap_6,
    BDMF_burst_cap_7,
    BDMF_queue_llid_map_0,
    BDMF_queue_llid_map_1,
    BDMF_queue_llid_map_2,
    BDMF_queue_llid_map_3,
    BDMF_queue_llid_map_4,
    BDMF_queue_llid_map_5,
    BDMF_queue_llid_map_6,
    BDMF_queue_llid_map_7,
    BDMF_unused_tq_cnt0,
    BDMF_unused_tq_cnt1,
    BDMF_unused_tq_cnt2,
    BDMF_unused_tq_cnt3,
    BDMF_unused_tq_cnt4,
    BDMF_unused_tq_cnt5,
    BDMF_unused_tq_cnt6,
    BDMF_unused_tq_cnt7,
    BDMF_tx_l1s_shp_que_mask_0,
    BDMF_tx_l1s_shp_que_mask_1,
    BDMF_tx_l1s_shp_que_mask_2,
    BDMF_tx_l1s_shp_que_mask_3,
    BDMF_tx_l1s_shp_que_mask_4,
    BDMF_tx_l1s_shp_que_mask_5,
    BDMF_tx_l1s_shp_que_mask_6,
    BDMF_tx_l1s_shp_que_mask_7,
    BDMF_tx_l2s_que_config_0,
    BDMF_tx_l2s_que_config_1,
    BDMF_tx_l2s_que_config_2,
    BDMF_tx_l2s_que_config_3,
    BDMF_tx_l2s_que_config_4,
    BDMF_tx_l2s_que_config_5,
    BDMF_tx_l2s_que_config_6,
    BDMF_tx_l2s_que_config_7,
    BDMF_tx_ctc_burst_limit_0,
    BDMF_tx_ctc_burst_limit_1,
    BDMF_tx_ctc_burst_limit_2,
    BDMF_tx_ctc_burst_limit_3,
    BDMF_tx_ctc_burst_limit_4,
    BDMF_tx_ctc_burst_limit_5,
    BDMF_tx_ctc_burst_limit_6,
    BDMF_tx_ctc_burst_limit_7,
    BDMF_burst_cap_8,
    BDMF_burst_cap_9,
    BDMF_burst_cap_10,
    BDMF_burst_cap_11,
    BDMF_burst_cap_12,
    BDMF_burst_cap_13,
    BDMF_burst_cap_14,
    BDMF_burst_cap_15,
    BDMF_queue_llid_map_8,
    BDMF_queue_llid_map_9,
    BDMF_queue_llid_map_10,
    BDMF_queue_llid_map_11,
    BDMF_queue_llid_map_12,
    BDMF_queue_llid_map_13,
    BDMF_queue_llid_map_14,
    BDMF_queue_llid_map_15,
    BDMF_unused_tq_cnt8,
    BDMF_unused_tq_cnt9,
    BDMF_unused_tq_cnt10,
    BDMF_unused_tq_cnt11,
    BDMF_unused_tq_cnt12,
    BDMF_unused_tq_cnt13,
    BDMF_unused_tq_cnt14,
    BDMF_unused_tq_cnt15,
    BDMF_tx_l1s_shp_que_mask_8,
    BDMF_tx_l1s_shp_que_mask_9,
    BDMF_tx_l1s_shp_que_mask_10,
    BDMF_tx_l1s_shp_que_mask_11,
    BDMF_tx_l1s_shp_que_mask_12,
    BDMF_tx_l1s_shp_que_mask_13,
    BDMF_tx_l1s_shp_que_mask_14,
    BDMF_tx_l1s_shp_que_mask_15,
    BDMF_tx_l2s_que_config_8,
    BDMF_tx_l2s_que_config_9,
    BDMF_tx_l2s_que_config_10,
    BDMF_tx_l2s_que_config_11,
    BDMF_tx_l2s_que_config_12,
    BDMF_tx_l2s_que_config_13,
    BDMF_tx_l2s_que_config_14,
    BDMF_tx_l2s_que_config_15,
    BDMF_tx_ctc_burst_limit_8,
    BDMF_tx_ctc_burst_limit_9,
    BDMF_tx_ctc_burst_limit_10,
    BDMF_tx_ctc_burst_limit_11,
    BDMF_tx_ctc_burst_limit_12,
    BDMF_tx_ctc_burst_limit_13,
    BDMF_tx_ctc_burst_limit_14,
    BDMF_tx_ctc_burst_limit_15,
    BDMF_10g_abc_size0,
    BDMF_10g_abc_size1,
    BDMF_10g_abc_size2,
    BDMF_10g_abc_size3,
    BDMF_10g_abc_size4,
    BDMF_10g_abc_size5,
    BDMF_10g_abc_size6,
    BDMF_10g_abc_size7,
    BDMF_10g_abc_size8,
    BDMF_10g_abc_size9,
    BDMF_10g_abc_size10,
    BDMF_10g_abc_size11,
    BDMF_10g_abc_size12,
    BDMF_10g_abc_size13,
    BDMF_10g_abc_size14,
    BDMF_10g_abc_size15,
    BDMF_10g_abc_size16,
    BDMF_10g_abc_size17,
    BDMF_10g_abc_size18,
    BDMF_10g_abc_size19,
    BDMF_10g_abc_size20,
    BDMF_10g_abc_size21,
    BDMF_10g_abc_size22,
    BDMF_10g_abc_size23,
};

typedef enum
{
    bdmf_address_control_0,
    bdmf_address_control_1,
    bdmf_address_enable_grants,
    bdmf_address_drop_disc_gates,
    bdmf_address_dis_fcs_chk,
    bdmf_address_pass_gates,
    bdmf_address_cfg_misalgn_fb,
    bdmf_address_discovery_filter,
    bdmf_address_minimum_grant_setup,
    bdmf_address_reset_gnt_fifo,
    bdmf_address_reset_l1_accumulator,
    bdmf_address_l1_accumulator_sel,
    bdmf_address_l1_sva_bytes,
    bdmf_address_l1_uva_bytes,
    bdmf_address_l1_sva_overflow,
    bdmf_address_l1_uva_overflow,
    bdmf_address_reset_rpt_pri,
    bdmf_address_reset_l2_rpt_fifo,
    bdmf_address_enable_upstream,
    bdmf_address_enable_upstream_fb,
    bdmf_address_enable_upstream_fec,
    bdmf_address_report_byte_length,
    bdmf_address_main_int_status,
    bdmf_address_gnt_full_int_status,
    bdmf_address_gnt_full_int_mask,
    bdmf_address_gnt_miss_int_status,
    bdmf_address_gnt_miss_int_mask,
    bdmf_address_disc_rx_int_status,
    bdmf_address_disc_rx_int_mask,
    bdmf_address_gnt_intv_int_status,
    bdmf_address_gnt_intv_int_mask,
    bdmf_address_gnt_far_int_status,
    bdmf_address_gnt_far_int_mask,
    bdmf_address_gnt_misalgn_int_status,
    bdmf_address_gnt_misalgn_int_mask,
    bdmf_address_np_gnt_int_status,
    bdmf_address_np_gnt_int_mask,
    bdmf_address_del_stale_int_status,
    bdmf_address_del_stale_int_mask,
    bdmf_address_gnt_pres_int_status,
    bdmf_address_gnt_pres_int_mask,
    bdmf_address_rpt_pres_int_status,
    bdmf_address_rpt_pres_int_mask,
    bdmf_address_drx_abort_int_status,
    bdmf_address_drx_abort_int_mask,
    bdmf_address_empty_rpt_int_status,
    bdmf_address_empty_rpt_int_mask,
    bdmf_address_bcap_overflow_int_status,
    bdmf_address_bcap_overflow_int_mask,
    bdmf_address_bbh_dns_fault_int_status,
    bdmf_address_bbh_dns_fault_int_mask,
    bdmf_address_bbh_ups_fault_int_status,
    bdmf_address_bbh_ups_fault_int_mask,
    bdmf_address_bbh_ups_abort_int_status,
    bdmf_address_bbh_ups_abort_int_mask,
    bdmf_address_main_int_mask,
    bdmf_address_max_gnt_size,
    bdmf_address_max_frame_size,
    bdmf_address_grant_ovr_hd,
    bdmf_address_poll_size,
    bdmf_address_dn_rd_gnt_margin,
    bdmf_address_gnt_time_start_delta,
    bdmf_address_time_stamp_diff,
    bdmf_address_up_time_stamp_off,
    bdmf_address_gnt_interval,
    bdmf_address_dn_gnt_misalign_thr,
    bdmf_address_dn_gnt_misalign_pause,
    bdmf_address_non_poll_intv,
    bdmf_address_force_fcs_err,
    bdmf_address_grant_overlap_limit,
    bdmf_address_aes_configuration_0,
    bdmf_address_disc_grant_ovr_hd,
    bdmf_address_dn_discovery_seed,
    bdmf_address_dn_discovery_inc,
    bdmf_address_dn_discovery_size,
    bdmf_address_fec_ipg_length,
    bdmf_address_fake_report_value_en,
    bdmf_address_fake_report_value,
    bdmf_address_valid_opcode_map,
    bdmf_address_up_packet_tx_margin,
    bdmf_address_multi_pri_cfg_0,
    bdmf_address_shared_bcap_ovrflow,
    bdmf_address_forced_report_en,
    bdmf_address_forced_report_max_interval,
    bdmf_address_l2s_flush_config,
    bdmf_address_data_port_command,
    bdmf_address_data_port_address,
    bdmf_address_data_port_data_0,
    bdmf_address_unmap_big_cnt,
    bdmf_address_unmap_frame_cnt,
    bdmf_address_unmap_fcs_cnt,
    bdmf_address_unmap_gate_cnt,
    bdmf_address_unmap_oam_cnt,
    bdmf_address_unmap_small_cnt,
    bdmf_address_fif_dequeue_event_cnt,
    bdmf_address_bbh_up_fault_halt_en,
    bdmf_address_bbh_up_tardy_halt_en,
    bdmf_address_debug_status_0,
    bdmf_address_debug_status_1,
    bdmf_address_debug_l2s_ptr_sel,
    bdmf_address_olt_mac_addr_lo,
    bdmf_address_olt_mac_addr_hi,
    bdmf_address_tx_l1s_shp_dqu_empty,
    bdmf_address_tx_l1s_unshaped_empty,
    bdmf_address_tx_l2s_que_empty,
    bdmf_address_tx_l2s_que_full,
    bdmf_address_tx_l2s_que_stopped,
    bdmf_address_bbh_max_outstanding_tardy_packets,
    bdmf_address_min_report_value_difference,
    bdmf_address_bbh_status_fifo_overflow,
    bdmf_address_spare_ctl,
    bdmf_address_ts_sync_offset,
    bdmf_address_dn_ts_offset,
    bdmf_address_up_ts_offset_lo,
    bdmf_address_up_ts_offset_hi,
    bdmf_address_two_step_ts_ctl,
    bdmf_address_two_step_ts_value_lo,
    bdmf_address_two_step_ts_value_hi,
    bdmf_address_1588_timestamp_int_status,
    bdmf_address_1588_timestamp_int_mask,
    bdmf_address_up_packet_fetch_margin,
    bdmf_address_dn_1588_timestamp,
    bdmf_address_persistent_report_cfg,
    bdmf_address_persistent_report_enables,
    bdmf_address_persistent_report_request_size,
    bdmf_address_aes_configuration_1,
    bdmf_address_onu_pause_pfc_cfg,
    bdmf_address_onu_pause_pfc_time_scale,
    bdmf_address_dpf_int_status,
    bdmf_address_dpf_int_mask,
    bdmf_address_burst_cap_0,
    bdmf_address_burst_cap_1,
    bdmf_address_burst_cap_2,
    bdmf_address_burst_cap_3,
    bdmf_address_burst_cap_4,
    bdmf_address_burst_cap_5,
    bdmf_address_burst_cap_6,
    bdmf_address_burst_cap_7,
    bdmf_address_queue_llid_map_0,
    bdmf_address_queue_llid_map_1,
    bdmf_address_queue_llid_map_2,
    bdmf_address_queue_llid_map_3,
    bdmf_address_queue_llid_map_4,
    bdmf_address_queue_llid_map_5,
    bdmf_address_queue_llid_map_6,
    bdmf_address_queue_llid_map_7,
    bdmf_address_unused_tq_cnt0,
    bdmf_address_unused_tq_cnt1,
    bdmf_address_unused_tq_cnt2,
    bdmf_address_unused_tq_cnt3,
    bdmf_address_unused_tq_cnt4,
    bdmf_address_unused_tq_cnt5,
    bdmf_address_unused_tq_cnt6,
    bdmf_address_unused_tq_cnt7,
    bdmf_address_tx_l1s_shp_que_mask_0,
    bdmf_address_tx_l1s_shp_que_mask_1,
    bdmf_address_tx_l1s_shp_que_mask_2,
    bdmf_address_tx_l1s_shp_que_mask_3,
    bdmf_address_tx_l1s_shp_que_mask_4,
    bdmf_address_tx_l1s_shp_que_mask_5,
    bdmf_address_tx_l1s_shp_que_mask_6,
    bdmf_address_tx_l1s_shp_que_mask_7,
    bdmf_address_tx_l2s_que_config_0,
    bdmf_address_tx_l2s_que_config_1,
    bdmf_address_tx_l2s_que_config_2,
    bdmf_address_tx_l2s_que_config_3,
    bdmf_address_tx_l2s_que_config_4,
    bdmf_address_tx_l2s_que_config_5,
    bdmf_address_tx_l2s_que_config_6,
    bdmf_address_tx_l2s_que_config_7,
    bdmf_address_tx_ctc_burst_limit_0,
    bdmf_address_tx_ctc_burst_limit_1,
    bdmf_address_tx_ctc_burst_limit_2,
    bdmf_address_tx_ctc_burst_limit_3,
    bdmf_address_tx_ctc_burst_limit_4,
    bdmf_address_tx_ctc_burst_limit_5,
    bdmf_address_tx_ctc_burst_limit_6,
    bdmf_address_tx_ctc_burst_limit_7,
    bdmf_address_burst_cap_8,
    bdmf_address_burst_cap_9,
    bdmf_address_burst_cap_10,
    bdmf_address_burst_cap_11,
    bdmf_address_burst_cap_12,
    bdmf_address_burst_cap_13,
    bdmf_address_burst_cap_14,
    bdmf_address_burst_cap_15,
    bdmf_address_queue_llid_map_8,
    bdmf_address_queue_llid_map_9,
    bdmf_address_queue_llid_map_10,
    bdmf_address_queue_llid_map_11,
    bdmf_address_queue_llid_map_12,
    bdmf_address_queue_llid_map_13,
    bdmf_address_queue_llid_map_14,
    bdmf_address_queue_llid_map_15,
    bdmf_address_unused_tq_cnt8,
    bdmf_address_unused_tq_cnt9,
    bdmf_address_unused_tq_cnt10,
    bdmf_address_unused_tq_cnt11,
    bdmf_address_unused_tq_cnt12,
    bdmf_address_unused_tq_cnt13,
    bdmf_address_unused_tq_cnt14,
    bdmf_address_unused_tq_cnt15,
    bdmf_address_tx_l1s_shp_que_mask_8,
    bdmf_address_tx_l1s_shp_que_mask_9,
    bdmf_address_tx_l1s_shp_que_mask_10,
    bdmf_address_tx_l1s_shp_que_mask_11,
    bdmf_address_tx_l1s_shp_que_mask_12,
    bdmf_address_tx_l1s_shp_que_mask_13,
    bdmf_address_tx_l1s_shp_que_mask_14,
    bdmf_address_tx_l1s_shp_que_mask_15,
    bdmf_address_tx_l2s_que_config_8,
    bdmf_address_tx_l2s_que_config_9,
    bdmf_address_tx_l2s_que_config_10,
    bdmf_address_tx_l2s_que_config_11,
    bdmf_address_tx_l2s_que_config_12,
    bdmf_address_tx_l2s_que_config_13,
    bdmf_address_tx_l2s_que_config_14,
    bdmf_address_tx_l2s_que_config_15,
    bdmf_address_tx_ctc_burst_limit_8,
    bdmf_address_tx_ctc_burst_limit_9,
    bdmf_address_tx_ctc_burst_limit_10,
    bdmf_address_tx_ctc_burst_limit_11,
    bdmf_address_tx_ctc_burst_limit_12,
    bdmf_address_tx_ctc_burst_limit_13,
    bdmf_address_tx_ctc_burst_limit_14,
    bdmf_address_tx_ctc_burst_limit_15,
    bdmf_address_10g_abc_size0,
    bdmf_address_10g_abc_size1,
    bdmf_address_10g_abc_size2,
    bdmf_address_10g_abc_size3,
    bdmf_address_10g_abc_size4,
    bdmf_address_10g_abc_size5,
    bdmf_address_10g_abc_size6,
    bdmf_address_10g_abc_size7,
    bdmf_address_10g_abc_size8,
    bdmf_address_10g_abc_size9,
    bdmf_address_10g_abc_size10,
    bdmf_address_10g_abc_size11,
    bdmf_address_10g_abc_size12,
    bdmf_address_10g_abc_size13,
    bdmf_address_10g_abc_size14,
    bdmf_address_10g_abc_size15,
    bdmf_address_10g_abc_size16,
    bdmf_address_10g_abc_size17,
    bdmf_address_10g_abc_size18,
    bdmf_address_10g_abc_size19,
    bdmf_address_10g_abc_size20,
    bdmf_address_10g_abc_size21,
    bdmf_address_10g_abc_size22,
    bdmf_address_10g_abc_size23,
}
bdmf_address;

static int bcm_epn_cli_set(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_error_t err;

    switch(parm[0].value.unumber)
    {
    case BDMF_control_0:
    {
        epn_control_0 control_0 = { .cfgen1588ts=parm[1].value.unumber, .cfgreplaceupfcs=parm[2].value.unumber, .cfgappendupfcs=parm[3].value.unumber, .cfgdropscb=parm[4].value.unumber, .moduncappedreportlimit=parm[5].value.unumber, .modmpquesetfirst=parm[6].value.unumber, .prvlocalmpcppropagation=parm[7].value.unumber, .prvtekmodeprefetch=parm[8].value.unumber, .prvincnonzeroaccum=parm[9].value.unumber, .prvnounmapppedfcs=parm[10].value.unumber, .prvsupressdiscen=parm[11].value.unumber, .cfgvlanmax=parm[12].value.unumber, .fcserronlydatafr=parm[13].value.unumber, .prvdropunmapppedllid=parm[14].value.unumber, .prvsuppressllidmodebit=parm[15].value.unumber, .moddiscoverydafilteren=parm[16].value.unumber, .rptselect=parm[17].value.unumber, .prvdisablesvaquestatusbp=parm[18].value.unumber, .utxloopback=parm[19].value.unumber, .utxen=parm[20].value.unumber, .utxrst_pre_n=parm[21].value.unumber, .cfgdisabledns=parm[22].value.unumber, .drxloopback=parm[23].value.unumber, .drxen=parm[24].value.unumber, .drxrst_pre_n=parm[25].value.unumber};
        err = ag_drv_epn_control_0_set(&control_0);
        break;
    }
    case BDMF_control_1:
    {
        epn_control_1 control_1 = { .cfgbypassbbhpacketrequestbuffer=parm[1].value.unumber, .cfgidlepackettxenable=parm[2].value.unumber, .cfgdisablempcpcorrectiondithering=parm[3].value.unumber, .prvoverlappedgntenable=parm[4].value.unumber, .rstmisalignthr=parm[5].value.unumber, .cfgstalegntchk=parm[6].value.unumber, .fecrpten=parm[7].value.unumber, .cfgl1l2truestrict=parm[8].value.unumber, .cfgctcrpt=parm[9].value.unumber, .cfgtscorrdis=parm[10].value.unumber, .cfgnodiscrpt=parm[11].value.unumber, .disablediscscale=parm[12].value.unumber, .clronrd=parm[13].value.unumber};
        err = ag_drv_epn_control_1_set(&control_1);
        break;
    }
    case BDMF_enable_grants:
        err = ag_drv_epn_enable_grants_set(parm[1].value.unumber, parm[2].value.unumber);
        break;
    case BDMF_drop_disc_gates:
        err = ag_drv_epn_drop_disc_gates_set(parm[2].value.unumber, parm[3].value.unumber);
        break;
    case BDMF_dis_fcs_chk:
        err = ag_drv_epn_dis_fcs_chk_set(parm[3].value.unumber, parm[4].value.unumber);
        break;
    case BDMF_pass_gates:
        err = ag_drv_epn_pass_gates_set(parm[4].value.unumber, parm[5].value.unumber);
        break;
    case BDMF_cfg_misalgn_fb:
        err = ag_drv_epn_cfg_misalgn_fb_set(parm[5].value.unumber, parm[6].value.unumber);
        break;
    case BDMF_discovery_filter:
        err = ag_drv_epn_discovery_filter_set(parm[6].value.unumber, parm[7].value.unumber);
        break;
    case BDMF_minimum_grant_setup:
        err = ag_drv_epn_minimum_grant_setup_set(parm[6].value.unumber);
        break;
    case BDMF_reset_gnt_fifo:
        err = ag_drv_epn_reset_gnt_fifo_set(parm[6].value.unumber, parm[7].value.unumber);
        break;
    case BDMF_reset_l1_accumulator:
        err = ag_drv_epn_reset_l1_accumulator_set(parm[7].value.unumber);
        break;
    case BDMF_l1_accumulator_sel:
        err = ag_drv_epn_l1_accumulator_sel_set(parm[7].value.unumber, parm[8].value.unumber);
        break;
    case BDMF_reset_rpt_pri:
    {
        epn_reset_rpt_pri reset_rpt_pri = { .nullrptpri15=parm[7].value.unumber, .nullrptpri14=parm[8].value.unumber, .nullrptpri13=parm[9].value.unumber, .nullrptpri12=parm[10].value.unumber, .nullrptpri11=parm[11].value.unumber, .nullrptpri10=parm[12].value.unumber, .nullrptpri9=parm[13].value.unumber, .nullrptpri8=parm[14].value.unumber, .nullrptpri7=parm[15].value.unumber, .nullrptpri6=parm[16].value.unumber, .nullrptpri5=parm[17].value.unumber, .nullrptpri4=parm[18].value.unumber, .nullrptpri3=parm[19].value.unumber, .nullrptpri2=parm[20].value.unumber, .nullrptpri1=parm[21].value.unumber, .nullrptpri0=parm[22].value.unumber};
        err = ag_drv_epn_reset_rpt_pri_set(&reset_rpt_pri);
        break;
    }
    case BDMF_reset_l2_rpt_fifo:
        err = ag_drv_epn_reset_l2_rpt_fifo_set(parm[7].value.unumber, parm[8].value.unumber);
        break;
    case BDMF_enable_upstream:
        err = ag_drv_epn_enable_upstream_set(parm[8].value.unumber, parm[9].value.unumber);
        break;
    case BDMF_enable_upstream_fec:
        err = ag_drv_epn_enable_upstream_fec_set(parm[9].value.unumber, parm[10].value.unumber);
        break;
    case BDMF_report_byte_length:
        err = ag_drv_epn_report_byte_length_set(parm[10].value.unumber);
        break;
    case BDMF_main_int_status:
    {
        epn_main_int_status main_int_status = { .intbbhupfrabort=parm[10].value.unumber, .intcol2sburstcapoverflowpres=parm[11].value.unumber, .intcoemptyrpt=parm[12].value.unumber, .intcodrxerrabortpres=parm[13].value.unumber, .intl2sfifooverrun=parm[14].value.unumber, .intco1588tsint=parm[15].value.unumber, .intcorptpres=parm[16].value.unumber, .intcogntpres=parm[17].value.unumber, .intcodelstalegnt=parm[18].value.unumber, .intcogntnonpoll=parm[19].value.unumber, .intcogntmisalign=parm[20].value.unumber, .intcognttoofar=parm[21].value.unumber, .intcogntinterval=parm[22].value.unumber, .intcogntdiscovery=parm[23].value.unumber, .intcogntmissabort=parm[24].value.unumber, .intcogntfullabort=parm[25].value.unumber, .intbadupfrlen=parm[26].value.unumber, .intuptardypacket=parm[27].value.unumber, .intuprptfrxmt=parm[28].value.unumber, .intbififooverrun=parm[29].value.unumber, .intburstgnttoobig=parm[30].value.unumber, .intwrgnttoobig=parm[31].value.unumber, .intrcvgnttoobig=parm[32].value.unumber, .intdnstatsoverrun=parm[33].value.unumber, .intupstatsoverrun=parm[34].value.unumber, .intdnoutoforder=parm[35].value.unumber, .inttruantbbhhalt=parm[36].value.unumber, .intupinvldgntlen=parm[37].value.unumber, .intcobbhupsfault=parm[38].value.unumber, .intdntimeinsync=parm[39].value.unumber, .intdntimenotinsync=parm[40].value.unumber, .intdportrdy=parm[41].value.unumber};
        err = ag_drv_epn_main_int_status_set(&main_int_status);
        break;
    }
    case BDMF_gnt_full_int_status:
        err = ag_drv_epn_gnt_full_int_status_set(parm[10].value.unumber, parm[11].value.unumber);
        break;
    case BDMF_gnt_full_int_mask:
        err = ag_drv_epn_gnt_full_int_mask_set(parm[11].value.unumber, parm[12].value.unumber);
        break;
    case BDMF_gnt_miss_int_status:
        err = ag_drv_epn_gnt_miss_int_status_set(parm[12].value.unumber, parm[13].value.unumber);
        break;
    case BDMF_gnt_miss_int_mask:
        err = ag_drv_epn_gnt_miss_int_mask_set(parm[13].value.unumber, parm[14].value.unumber);
        break;
    case BDMF_disc_rx_int_status:
        err = ag_drv_epn_disc_rx_int_status_set(parm[14].value.unumber, parm[15].value.unumber);
        break;
    case BDMF_disc_rx_int_mask:
        err = ag_drv_epn_disc_rx_int_mask_set(parm[15].value.unumber, parm[16].value.unumber);
        break;
    case BDMF_gnt_intv_int_status:
        err = ag_drv_epn_gnt_intv_int_status_set(parm[16].value.unumber, parm[17].value.unumber);
        break;
    case BDMF_gnt_intv_int_mask:
        err = ag_drv_epn_gnt_intv_int_mask_set(parm[17].value.unumber, parm[18].value.unumber);
        break;
    case BDMF_gnt_far_int_status:
        err = ag_drv_epn_gnt_far_int_status_set(parm[18].value.unumber, parm[19].value.unumber);
        break;
    case BDMF_gnt_far_int_mask:
        err = ag_drv_epn_gnt_far_int_mask_set(parm[19].value.unumber, parm[20].value.unumber);
        break;
    case BDMF_gnt_misalgn_int_status:
        err = ag_drv_epn_gnt_misalgn_int_status_set(parm[20].value.unumber, parm[21].value.unumber);
        break;
    case BDMF_gnt_misalgn_int_mask:
        err = ag_drv_epn_gnt_misalgn_int_mask_set(parm[21].value.unumber, parm[22].value.unumber);
        break;
    case BDMF_np_gnt_int_status:
        err = ag_drv_epn_np_gnt_int_status_set(parm[22].value.unumber, parm[23].value.unumber);
        break;
    case BDMF_np_gnt_int_mask:
        err = ag_drv_epn_np_gnt_int_mask_set(parm[23].value.unumber, parm[24].value.unumber);
        break;
    case BDMF_del_stale_int_status:
        err = ag_drv_epn_del_stale_int_status_set(parm[24].value.unumber, parm[25].value.unumber);
        break;
    case BDMF_del_stale_int_mask:
        err = ag_drv_epn_del_stale_int_mask_set(parm[25].value.unumber, parm[26].value.unumber);
        break;
    case BDMF_gnt_pres_int_status:
        err = ag_drv_epn_gnt_pres_int_status_set(parm[26].value.unumber, parm[27].value.unumber);
        break;
    case BDMF_gnt_pres_int_mask:
        err = ag_drv_epn_gnt_pres_int_mask_set(parm[27].value.unumber, parm[28].value.unumber);
        break;
    case BDMF_rpt_pres_int_status:
        err = ag_drv_epn_rpt_pres_int_status_set(parm[28].value.unumber, parm[29].value.unumber);
        break;
    case BDMF_rpt_pres_int_mask:
        err = ag_drv_epn_rpt_pres_int_mask_set(parm[29].value.unumber, parm[30].value.unumber);
        break;
    case BDMF_drx_abort_int_status:
        err = ag_drv_epn_drx_abort_int_status_set(parm[30].value.unumber, parm[31].value.unumber);
        break;
    case BDMF_drx_abort_int_mask:
        err = ag_drv_epn_drx_abort_int_mask_set(parm[31].value.unumber, parm[32].value.unumber);
        break;
    case BDMF_empty_rpt_int_status:
        err = ag_drv_epn_empty_rpt_int_status_set(parm[32].value.unumber, parm[33].value.unumber);
        break;
    case BDMF_empty_rpt_int_mask:
        err = ag_drv_epn_empty_rpt_int_mask_set(parm[33].value.unumber, parm[34].value.unumber);
        break;
    case BDMF_bcap_overflow_int_status:
        err = ag_drv_epn_bcap_overflow_int_status_set(parm[34].value.unumber, parm[35].value.unumber);
        break;
    case BDMF_bcap_overflow_int_mask:
        err = ag_drv_epn_bcap_overflow_int_mask_set(parm[35].value.unumber, parm[36].value.unumber);
        break;
    case BDMF_bbh_dns_fault_int_status:
        err = ag_drv_epn_bbh_dns_fault_int_status_set(parm[36].value.unumber);
        break;
    case BDMF_bbh_dns_fault_int_mask:
        err = ag_drv_epn_bbh_dns_fault_int_mask_set(parm[36].value.unumber);
        break;
    case BDMF_bbh_ups_fault_int_status:
        err = ag_drv_epn_bbh_ups_fault_int_status_set(parm[36].value.unumber, parm[37].value.unumber);
        break;
    case BDMF_bbh_ups_fault_int_mask:
        err = ag_drv_epn_bbh_ups_fault_int_mask_set(parm[37].value.unumber, parm[38].value.unumber);
        break;
    case BDMF_bbh_ups_abort_int_status:
        err = ag_drv_epn_bbh_ups_abort_int_status_set(parm[38].value.unumber);
        break;
    case BDMF_bbh_ups_abort_int_mask:
        err = ag_drv_epn_bbh_ups_abort_int_mask_set(parm[38].value.unumber);
        break;
    case BDMF_main_int_mask:
    {
        epn_main_int_mask main_int_mask = { .bbhupfrabortmask=parm[38].value.unumber, .intl2sburstcapoverflowmask=parm[39].value.unumber, .intcoemptyrptmask=parm[40].value.unumber, .intdrxerrabortmask=parm[41].value.unumber, .intl2sfifooverrunmask=parm[42].value.unumber, .intco1588tsmask=parm[43].value.unumber, .intcorptpresmask=parm[44].value.unumber, .intcogntpresmask=parm[45].value.unumber, .intcodelstalegntmask=parm[46].value.unumber, .intcogntnonpollmask=parm[47].value.unumber, .intcogntmisalignmask=parm[48].value.unumber, .intcognttoofarmask=parm[49].value.unumber, .intcogntintervalmask=parm[50].value.unumber, .intcogntdiscoverymask=parm[51].value.unumber, .intcogntmissabortmask=parm[52].value.unumber, .intcogntfullabortmask=parm[53].value.unumber, .badupfrlenmask=parm[54].value.unumber, .uptardypacketmask=parm[55].value.unumber, .uprptfrxmtmask=parm[56].value.unumber, .intbififooverrunmask=parm[57].value.unumber, .burstgnttoobigmask=parm[58].value.unumber, .wrgnttoobigmask=parm[59].value.unumber, .rcvgnttoobigmask=parm[60].value.unumber, .dnstatsoverrunmask=parm[61].value.unumber, .intupstatsoverrunmask=parm[62].value.unumber, .dnoutofordermask=parm[63].value.unumber, .truantbbhhaltmask=parm[64].value.unumber, .upinvldgntlenmask=parm[65].value.unumber, .intcobbhupsfaultmask=parm[66].value.unumber, .dntimeinsyncmask=parm[67].value.unumber, .dntimenotinsyncmask=parm[68].value.unumber, .dportrdymask=parm[69].value.unumber};
        err = ag_drv_epn_main_int_mask_set(&main_int_mask);
        break;
    }
    case BDMF_max_gnt_size:
        err = ag_drv_epn_max_gnt_size_set(parm[38].value.unumber);
        break;
    case BDMF_max_frame_size:
        err = ag_drv_epn_max_frame_size_set(parm[38].value.unumber);
        break;
    case BDMF_grant_ovr_hd:
        err = ag_drv_epn_grant_ovr_hd_set(parm[38].value.unumber, parm[39].value.unumber);
        break;
    case BDMF_poll_size:
        err = ag_drv_epn_poll_size_set(parm[38].value.unumber, parm[39].value.unumber);
        break;
    case BDMF_dn_rd_gnt_margin:
        err = ag_drv_epn_dn_rd_gnt_margin_set(parm[38].value.unumber);
        break;
    case BDMF_gnt_time_start_delta:
        err = ag_drv_epn_gnt_time_start_delta_set(parm[38].value.unumber);
        break;
    case BDMF_time_stamp_diff:
        err = ag_drv_epn_time_stamp_diff_set(parm[38].value.unumber);
        break;
    case BDMF_up_time_stamp_off:
        err = ag_drv_epn_up_time_stamp_off_set(parm[38].value.unumber, parm[39].value.unumber);
        break;
    case BDMF_gnt_interval:
        err = ag_drv_epn_gnt_interval_set(parm[38].value.unumber);
        break;
    case BDMF_dn_gnt_misalign_thr:
        err = ag_drv_epn_dn_gnt_misalign_thr_set(parm[38].value.unumber, parm[39].value.unumber);
        break;
    case BDMF_dn_gnt_misalign_pause:
        err = ag_drv_epn_dn_gnt_misalign_pause_set(parm[38].value.unumber);
        break;
    case BDMF_non_poll_intv:
        err = ag_drv_epn_non_poll_intv_set(parm[38].value.unumber);
        break;
    case BDMF_force_fcs_err:
        err = ag_drv_epn_force_fcs_err_set(parm[38].value.unumber, parm[39].value.unumber);
        break;
    case BDMF_grant_overlap_limit:
        err = ag_drv_epn_grant_overlap_limit_set(parm[39].value.unumber);
        break;
    case BDMF_aes_configuration_0:
        err = ag_drv_epn_aes_configuration_0_set(parm[39].value.unumber, parm[40].value.unumber);
        break;
    case BDMF_disc_grant_ovr_hd:
        err = ag_drv_epn_disc_grant_ovr_hd_set(parm[40].value.unumber);
        break;
    case BDMF_dn_discovery_seed:
        err = ag_drv_epn_dn_discovery_seed_set(parm[40].value.unumber);
        break;
    case BDMF_dn_discovery_inc:
        err = ag_drv_epn_dn_discovery_inc_set(parm[40].value.unumber);
        break;
    case BDMF_dn_discovery_size:
        err = ag_drv_epn_dn_discovery_size_set(parm[40].value.unumber);
        break;
    case BDMF_fec_ipg_length:
        err = ag_drv_epn_fec_ipg_length_set(parm[40].value.unumber, parm[41].value.unumber, parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_fake_report_value_en:
        err = ag_drv_epn_fake_report_value_en_set(parm[40].value.unumber);
        break;
    case BDMF_fake_report_value:
        err = ag_drv_epn_fake_report_value_set(parm[40].value.unumber);
        break;
    case BDMF_valid_opcode_map:
        err = ag_drv_epn_valid_opcode_map_set(parm[40].value.unumber);
        break;
    case BDMF_up_packet_tx_margin:
        err = ag_drv_epn_up_packet_tx_margin_set(parm[40].value.unumber);
        break;
    case BDMF_multi_pri_cfg_0:
    {
        epn_multi_pri_cfg_0 multi_pri_cfg_0 = { .cfgctcschdeficiten=parm[40].value.unumber, .prvzeroburstcapoverridemode=parm[41].value.unumber, .cfgsharedl2=parm[42].value.unumber, .cfgsharedburstcap=parm[43].value.unumber, .cfgrptgntsoutst0=parm[44].value.unumber, .cfgrpthiprifirst0=parm[45].value.unumber, .cfgrptswapqs0=parm[46].value.unumber, .cfgrptmultipri0=parm[47].value.unumber};
        err = ag_drv_epn_multi_pri_cfg_0_set(&multi_pri_cfg_0);
        break;
    }
    case BDMF_forced_report_en:
        err = ag_drv_epn_forced_report_en_set(parm[40].value.unumber, parm[41].value.unumber);
        break;
    case BDMF_forced_report_max_interval:
        err = ag_drv_epn_forced_report_max_interval_set(parm[41].value.unumber);
        break;
    case BDMF_l2s_flush_config:
        err = ag_drv_epn_l2s_flush_config_set(parm[41].value.unumber, parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_data_port_command:
        err = ag_drv_epn_data_port_command_set(parm[41].value.unumber, parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_data_port_address:
        err = ag_drv_epn_data_port_address_set(parm[41].value.unumber);
        break;
    case BDMF_data_port_data_0:
        err = ag_drv_epn_data_port_data_0_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_big_cnt:
        err = ag_drv_epn_unmap_big_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_frame_cnt:
        err = ag_drv_epn_unmap_frame_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_fcs_cnt:
        err = ag_drv_epn_unmap_fcs_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_gate_cnt:
        err = ag_drv_epn_unmap_gate_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_oam_cnt:
        err = ag_drv_epn_unmap_oam_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_unmap_small_cnt:
        err = ag_drv_epn_unmap_small_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_fif_dequeue_event_cnt:
        err = ag_drv_epn_fif_dequeue_event_cnt_set(parm[41].value.unumber);
        break;
    case BDMF_bbh_up_fault_halt_en:
        err = ag_drv_epn_bbh_up_fault_halt_en_set(parm[41].value.unumber, parm[42].value.unumber);
        break;
    case BDMF_bbh_up_tardy_halt_en:
        err = ag_drv_epn_bbh_up_tardy_halt_en_set(parm[42].value.unumber);
        break;
    case BDMF_debug_l2s_ptr_sel:
        err = ag_drv_epn_debug_l2s_ptr_sel_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_olt_mac_addr_lo:
        err = ag_drv_epn_olt_mac_addr_lo_set(parm[42].value.unumber);
        break;
    case BDMF_olt_mac_addr_hi:
        err = ag_drv_epn_olt_mac_addr_hi_set(parm[42].value.unumber);
        break;
    case BDMF_bbh_max_outstanding_tardy_packets:
        err = ag_drv_epn_bbh_max_outstanding_tardy_packets_set(parm[42].value.unumber);
        break;
    case BDMF_min_report_value_difference:
        err = ag_drv_epn_min_report_value_difference_set(parm[42].value.unumber);
        break;
    case BDMF_spare_ctl:
        err = ag_drv_epn_spare_ctl_set(parm[42].value.unumber, parm[43].value.unumber, parm[44].value.unumber);
        break;
    case BDMF_ts_sync_offset:
        err = ag_drv_epn_ts_sync_offset_set(parm[42].value.unumber, parm[43].value.unumber, parm[44].value.unumber);
        break;
    case BDMF_dn_ts_offset:
        err = ag_drv_epn_dn_ts_offset_set(parm[42].value.unumber);
        break;
    case BDMF_up_ts_offset_lo:
        err = ag_drv_epn_up_ts_offset_lo_set(parm[42].value.unumber);
        break;
    case BDMF_up_ts_offset_hi:
        err = ag_drv_epn_up_ts_offset_hi_set(parm[42].value.unumber);
        break;
    case BDMF_two_step_ts_ctl:
        err = ag_drv_epn_two_step_ts_ctl_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_1588_timestamp_int_status:
        err = ag_drv_epn_1588_timestamp_int_status_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_1588_timestamp_int_mask:
        err = ag_drv_epn_1588_timestamp_int_mask_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_up_packet_fetch_margin:
        err = ag_drv_epn_up_packet_fetch_margin_set(parm[42].value.unumber);
        break;
    case BDMF_persistent_report_cfg:
        err = ag_drv_epn_persistent_report_cfg_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_persistent_report_enables:
        err = ag_drv_epn_persistent_report_enables_set(parm[42].value.unumber, parm[43].value.unumber);
        break;
    case BDMF_persistent_report_request_size:
        err = ag_drv_epn_persistent_report_request_size_set(parm[43].value.unumber);
        break;
    case BDMF_aes_configuration_1:
        err = ag_drv_epn_aes_configuration_1_set(parm[43].value.unumber, parm[44].value.unumber);
        break;
    case BDMF_onu_pause_pfc_cfg:
    {
        epn_onu_pause_pfc_cfg onu_pause_pfc_cfg = { .cfgupfrefreshen=parm[44].value.unumber, .cfgupfforcexoff=parm[45].value.unumber, .cfgupfgengo=parm[46].value.unumber, .cfgupfoveride=parm[47].value.unumber, .cfgupftype=parm[48].value.unumber, .cfgupfen=parm[49].value.unumber, .cfgupfasyncbypassen=parm[50].value.unumber, .cfgdpfpfcusesa=parm[51].value.unumber, .cfgdpfforcexon=parm[52].value.unumber, .cfgdpfenable=parm[53].value.unumber, .cfgdpfoperatingmode=parm[54].value.unumber, .cfgdpfpacketpassthroughen=parm[55].value.unumber, .cfgdpfasyncbypassen=parm[56].value.unumber};
        err = ag_drv_epn_onu_pause_pfc_cfg_set(&onu_pause_pfc_cfg);
        break;
    }
    case BDMF_onu_pause_pfc_time_scale:
        err = ag_drv_epn_onu_pause_pfc_time_scale_set(parm[44].value.unumber);
        break;
    case BDMF_dpf_int_status:
    {
        epn_dpf_int_status dpf_int_status = { .intupfframesent=parm[44].value.unumber, .intupfrefresh=parm[45].value.unumber, .intupfreqcol=parm[46].value.unumber, .intupfreqstatus=parm[47].value.unumber, .intdpfrxframedropped=parm[48].value.unumber, .intdpfrxframeabort=parm[49].value.unumber, .intdpfrxframe=parm[50].value.unumber};
        err = ag_drv_epn_dpf_int_status_set(&dpf_int_status);
        break;
    }
    case BDMF_dpf_int_mask:
    {
        epn_dpf_int_mask dpf_int_mask = { .intupfframesentmask=parm[44].value.unumber, .intupfrefreshmask=parm[45].value.unumber, .intupfreqcolmask=parm[46].value.unumber, .intupfreqstatusmask=parm[47].value.unumber, .intdpfrxframedroppedmask=parm[48].value.unumber, .intdpfrxframeabortmask=parm[49].value.unumber, .intdpfrxframemask=parm[50].value.unumber};
        err = ag_drv_epn_dpf_int_mask_set(&dpf_int_mask);
        break;
    }
    case BDMF_burst_cap_0:
        err = ag_drv_epn_burst_cap_0_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_1:
        err = ag_drv_epn_burst_cap_1_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_2:
        err = ag_drv_epn_burst_cap_2_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_3:
        err = ag_drv_epn_burst_cap_3_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_4:
        err = ag_drv_epn_burst_cap_4_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_5:
        err = ag_drv_epn_burst_cap_5_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_6:
        err = ag_drv_epn_burst_cap_6_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_7:
        err = ag_drv_epn_burst_cap_7_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_0:
        err = ag_drv_epn_queue_llid_map_0_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_1:
        err = ag_drv_epn_queue_llid_map_1_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_2:
        err = ag_drv_epn_queue_llid_map_2_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_3:
        err = ag_drv_epn_queue_llid_map_3_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_4:
        err = ag_drv_epn_queue_llid_map_4_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_5:
        err = ag_drv_epn_queue_llid_map_5_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_6:
        err = ag_drv_epn_queue_llid_map_6_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_7:
        err = ag_drv_epn_queue_llid_map_7_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt0:
        err = ag_drv_epn_unused_tq_cnt0_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt1:
        err = ag_drv_epn_unused_tq_cnt1_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt2:
        err = ag_drv_epn_unused_tq_cnt2_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt3:
        err = ag_drv_epn_unused_tq_cnt3_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt4:
        err = ag_drv_epn_unused_tq_cnt4_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt5:
        err = ag_drv_epn_unused_tq_cnt5_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt6:
        err = ag_drv_epn_unused_tq_cnt6_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt7:
        err = ag_drv_epn_unused_tq_cnt7_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_0:
        err = ag_drv_epn_tx_l1s_shp_que_mask_0_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_1:
        err = ag_drv_epn_tx_l1s_shp_que_mask_1_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_2:
        err = ag_drv_epn_tx_l1s_shp_que_mask_2_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_3:
        err = ag_drv_epn_tx_l1s_shp_que_mask_3_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_4:
        err = ag_drv_epn_tx_l1s_shp_que_mask_4_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_5:
        err = ag_drv_epn_tx_l1s_shp_que_mask_5_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_6:
        err = ag_drv_epn_tx_l1s_shp_que_mask_6_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_7:
        err = ag_drv_epn_tx_l1s_shp_que_mask_7_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_0:
        err = ag_drv_epn_tx_l2s_que_config_0_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_1:
        err = ag_drv_epn_tx_l2s_que_config_1_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_2:
        err = ag_drv_epn_tx_l2s_que_config_2_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_3:
        err = ag_drv_epn_tx_l2s_que_config_3_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_4:
        err = ag_drv_epn_tx_l2s_que_config_4_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_5:
        err = ag_drv_epn_tx_l2s_que_config_5_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_6:
        err = ag_drv_epn_tx_l2s_que_config_6_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_7:
        err = ag_drv_epn_tx_l2s_que_config_7_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_0:
        err = ag_drv_epn_tx_ctc_burst_limit_0_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_1:
        err = ag_drv_epn_tx_ctc_burst_limit_1_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_2:
        err = ag_drv_epn_tx_ctc_burst_limit_2_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_3:
        err = ag_drv_epn_tx_ctc_burst_limit_3_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_4:
        err = ag_drv_epn_tx_ctc_burst_limit_4_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_5:
        err = ag_drv_epn_tx_ctc_burst_limit_5_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_6:
        err = ag_drv_epn_tx_ctc_burst_limit_6_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_7:
        err = ag_drv_epn_tx_ctc_burst_limit_7_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_8:
        err = ag_drv_epn_burst_cap_8_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_9:
        err = ag_drv_epn_burst_cap_9_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_10:
        err = ag_drv_epn_burst_cap_10_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_11:
        err = ag_drv_epn_burst_cap_11_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_12:
        err = ag_drv_epn_burst_cap_12_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_13:
        err = ag_drv_epn_burst_cap_13_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_14:
        err = ag_drv_epn_burst_cap_14_set(parm[44].value.unumber);
        break;
    case BDMF_burst_cap_15:
        err = ag_drv_epn_burst_cap_15_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_8:
        err = ag_drv_epn_queue_llid_map_8_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_9:
        err = ag_drv_epn_queue_llid_map_9_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_10:
        err = ag_drv_epn_queue_llid_map_10_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_11:
        err = ag_drv_epn_queue_llid_map_11_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_12:
        err = ag_drv_epn_queue_llid_map_12_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_13:
        err = ag_drv_epn_queue_llid_map_13_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_14:
        err = ag_drv_epn_queue_llid_map_14_set(parm[44].value.unumber);
        break;
    case BDMF_queue_llid_map_15:
        err = ag_drv_epn_queue_llid_map_15_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt8:
        err = ag_drv_epn_unused_tq_cnt8_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt9:
        err = ag_drv_epn_unused_tq_cnt9_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt10:
        err = ag_drv_epn_unused_tq_cnt10_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt11:
        err = ag_drv_epn_unused_tq_cnt11_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt12:
        err = ag_drv_epn_unused_tq_cnt12_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt13:
        err = ag_drv_epn_unused_tq_cnt13_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt14:
        err = ag_drv_epn_unused_tq_cnt14_set(parm[44].value.unumber);
        break;
    case BDMF_unused_tq_cnt15:
        err = ag_drv_epn_unused_tq_cnt15_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_8:
        err = ag_drv_epn_tx_l1s_shp_que_mask_8_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_9:
        err = ag_drv_epn_tx_l1s_shp_que_mask_9_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_10:
        err = ag_drv_epn_tx_l1s_shp_que_mask_10_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_11:
        err = ag_drv_epn_tx_l1s_shp_que_mask_11_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_12:
        err = ag_drv_epn_tx_l1s_shp_que_mask_12_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_13:
        err = ag_drv_epn_tx_l1s_shp_que_mask_13_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_14:
        err = ag_drv_epn_tx_l1s_shp_que_mask_14_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l1s_shp_que_mask_15:
        err = ag_drv_epn_tx_l1s_shp_que_mask_15_set(parm[44].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_8:
        err = ag_drv_epn_tx_l2s_que_config_8_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_9:
        err = ag_drv_epn_tx_l2s_que_config_9_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_10:
        err = ag_drv_epn_tx_l2s_que_config_10_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_11:
        err = ag_drv_epn_tx_l2s_que_config_11_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_12:
        err = ag_drv_epn_tx_l2s_que_config_12_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_13:
        err = ag_drv_epn_tx_l2s_que_config_13_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_14:
        err = ag_drv_epn_tx_l2s_que_config_14_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_l2s_que_config_15:
        err = ag_drv_epn_tx_l2s_que_config_15_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_8:
        err = ag_drv_epn_tx_ctc_burst_limit_8_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_9:
        err = ag_drv_epn_tx_ctc_burst_limit_9_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_10:
        err = ag_drv_epn_tx_ctc_burst_limit_10_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_11:
        err = ag_drv_epn_tx_ctc_burst_limit_11_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_12:
        err = ag_drv_epn_tx_ctc_burst_limit_12_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_13:
        err = ag_drv_epn_tx_ctc_burst_limit_13_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_14:
        err = ag_drv_epn_tx_ctc_burst_limit_14_set(parm[44].value.unumber);
        break;
    case BDMF_tx_ctc_burst_limit_15:
        err = ag_drv_epn_tx_ctc_burst_limit_15_set(parm[44].value.unumber);
        break;
    case BDMF_10g_abc_size0:
        err = ag_drv_epn_10g_abc_size0_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size1:
        err = ag_drv_epn_10g_abc_size1_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size2:
        err = ag_drv_epn_10g_abc_size2_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size3:
        err = ag_drv_epn_10g_abc_size3_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size4:
        err = ag_drv_epn_10g_abc_size4_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size5:
        err = ag_drv_epn_10g_abc_size5_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size6:
        err = ag_drv_epn_10g_abc_size6_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size7:
        err = ag_drv_epn_10g_abc_size7_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size8:
        err = ag_drv_epn_10g_abc_size8_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size9:
        err = ag_drv_epn_10g_abc_size9_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size10:
        err = ag_drv_epn_10g_abc_size10_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size11:
        err = ag_drv_epn_10g_abc_size11_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size12:
        err = ag_drv_epn_10g_abc_size12_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size13:
        err = ag_drv_epn_10g_abc_size13_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size14:
        err = ag_drv_epn_10g_abc_size14_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size15:
        err = ag_drv_epn_10g_abc_size15_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size16:
        err = ag_drv_epn_10g_abc_size16_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size17:
        err = ag_drv_epn_10g_abc_size17_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size18:
        err = ag_drv_epn_10g_abc_size18_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size19:
        err = ag_drv_epn_10g_abc_size19_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size20:
        err = ag_drv_epn_10g_abc_size20_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size21:
        err = ag_drv_epn_10g_abc_size21_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size22:
        err = ag_drv_epn_10g_abc_size22_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    case BDMF_10g_abc_size23:
        err = ag_drv_epn_10g_abc_size23_set(parm[44].value.unumber, parm[45].value.unumber);
        break;
    default:
        err = BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    return err;
}

static int bcm_epn_cli_get(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_error_t err;

    switch(parm[0].value.unumber)
    {
    case BDMF_control_0:
    {
        epn_control_0 control_0;
        err = ag_drv_epn_control_0_get(&control_0);
        bdmf_session_print(session, "cfgen1588ts = %u = 0x%x\n", control_0.cfgen1588ts, control_0.cfgen1588ts);
        bdmf_session_print(session, "cfgreplaceupfcs = %u = 0x%x\n", control_0.cfgreplaceupfcs, control_0.cfgreplaceupfcs);
        bdmf_session_print(session, "cfgappendupfcs = %u = 0x%x\n", control_0.cfgappendupfcs, control_0.cfgappendupfcs);
        bdmf_session_print(session, "cfgdropscb = %u = 0x%x\n", control_0.cfgdropscb, control_0.cfgdropscb);
        bdmf_session_print(session, "moduncappedreportlimit = %u = 0x%x\n", control_0.moduncappedreportlimit, control_0.moduncappedreportlimit);
        bdmf_session_print(session, "modmpquesetfirst = %u = 0x%x\n", control_0.modmpquesetfirst, control_0.modmpquesetfirst);
        bdmf_session_print(session, "prvlocalmpcppropagation = %u = 0x%x\n", control_0.prvlocalmpcppropagation, control_0.prvlocalmpcppropagation);
        bdmf_session_print(session, "prvtekmodeprefetch = %u = 0x%x\n", control_0.prvtekmodeprefetch, control_0.prvtekmodeprefetch);
        bdmf_session_print(session, "prvincnonzeroaccum = %u = 0x%x\n", control_0.prvincnonzeroaccum, control_0.prvincnonzeroaccum);
        bdmf_session_print(session, "prvnounmapppedfcs = %u = 0x%x\n", control_0.prvnounmapppedfcs, control_0.prvnounmapppedfcs);
        bdmf_session_print(session, "prvsupressdiscen = %u = 0x%x\n", control_0.prvsupressdiscen, control_0.prvsupressdiscen);
        bdmf_session_print(session, "cfgvlanmax = %u = 0x%x\n", control_0.cfgvlanmax, control_0.cfgvlanmax);
        bdmf_session_print(session, "fcserronlydatafr = %u = 0x%x\n", control_0.fcserronlydatafr, control_0.fcserronlydatafr);
        bdmf_session_print(session, "prvdropunmapppedllid = %u = 0x%x\n", control_0.prvdropunmapppedllid, control_0.prvdropunmapppedllid);
        bdmf_session_print(session, "prvsuppressllidmodebit = %u = 0x%x\n", control_0.prvsuppressllidmodebit, control_0.prvsuppressllidmodebit);
        bdmf_session_print(session, "moddiscoverydafilteren = %u = 0x%x\n", control_0.moddiscoverydafilteren, control_0.moddiscoverydafilteren);
        bdmf_session_print(session, "rptselect = %u = 0x%x\n", control_0.rptselect, control_0.rptselect);
        bdmf_session_print(session, "prvdisablesvaquestatusbp = %u = 0x%x\n", control_0.prvdisablesvaquestatusbp, control_0.prvdisablesvaquestatusbp);
        bdmf_session_print(session, "utxloopback = %u = 0x%x\n", control_0.utxloopback, control_0.utxloopback);
        bdmf_session_print(session, "utxen = %u = 0x%x\n", control_0.utxen, control_0.utxen);
        bdmf_session_print(session, "utxrst_pre_n = %u = 0x%x\n", control_0.utxrst_pre_n, control_0.utxrst_pre_n);
        bdmf_session_print(session, "cfgdisabledns = %u = 0x%x\n", control_0.cfgdisabledns, control_0.cfgdisabledns);
        bdmf_session_print(session, "drxloopback = %u = 0x%x\n", control_0.drxloopback, control_0.drxloopback);
        bdmf_session_print(session, "drxen = %u = 0x%x\n", control_0.drxen, control_0.drxen);
        bdmf_session_print(session, "drxrst_pre_n = %u = 0x%x\n", control_0.drxrst_pre_n, control_0.drxrst_pre_n);
        break;
    }
    case BDMF_control_1:
    {
        epn_control_1 control_1;
        err = ag_drv_epn_control_1_get(&control_1);
        bdmf_session_print(session, "cfgbypassbbhpacketrequestbuffer = %u = 0x%x\n", control_1.cfgbypassbbhpacketrequestbuffer, control_1.cfgbypassbbhpacketrequestbuffer);
        bdmf_session_print(session, "cfgidlepackettxenable = %u = 0x%x\n", control_1.cfgidlepackettxenable, control_1.cfgidlepackettxenable);
        bdmf_session_print(session, "cfgdisablempcpcorrectiondithering = %u = 0x%x\n", control_1.cfgdisablempcpcorrectiondithering, control_1.cfgdisablempcpcorrectiondithering);
        bdmf_session_print(session, "prvoverlappedgntenable = %u = 0x%x\n", control_1.prvoverlappedgntenable, control_1.prvoverlappedgntenable);
        bdmf_session_print(session, "rstmisalignthr = %u = 0x%x\n", control_1.rstmisalignthr, control_1.rstmisalignthr);
        bdmf_session_print(session, "cfgstalegntchk = %u = 0x%x\n", control_1.cfgstalegntchk, control_1.cfgstalegntchk);
        bdmf_session_print(session, "fecrpten = %u = 0x%x\n", control_1.fecrpten, control_1.fecrpten);
        bdmf_session_print(session, "cfgl1l2truestrict = %u = 0x%x\n", control_1.cfgl1l2truestrict, control_1.cfgl1l2truestrict);
        bdmf_session_print(session, "cfgctcrpt = %u = 0x%x\n", control_1.cfgctcrpt, control_1.cfgctcrpt);
        bdmf_session_print(session, "cfgtscorrdis = %u = 0x%x\n", control_1.cfgtscorrdis, control_1.cfgtscorrdis);
        bdmf_session_print(session, "cfgnodiscrpt = %u = 0x%x\n", control_1.cfgnodiscrpt, control_1.cfgnodiscrpt);
        bdmf_session_print(session, "disablediscscale = %u = 0x%x\n", control_1.disablediscscale, control_1.disablediscscale);
        bdmf_session_print(session, "clronrd = %u = 0x%x\n", control_1.clronrd, control_1.clronrd);
        break;
    }
    case BDMF_enable_grants:
    {
        bdmf_boolean grant_en;
        err = ag_drv_epn_enable_grants_get(parm[1].value.unumber, &grant_en);
        bdmf_session_print(session, "grant_en = %u = 0x%x\n", grant_en, grant_en);
        break;
    }
    case BDMF_drop_disc_gates:
    {
        bdmf_boolean linkDiscGates_en;
        err = ag_drv_epn_drop_disc_gates_get(parm[1].value.unumber, &linkDiscGates_en);
        bdmf_session_print(session, "linkDiscGates_en = %u = 0x%x\n", linkDiscGates_en, linkDiscGates_en);
        break;
    }
    case BDMF_dis_fcs_chk:
    {
        bdmf_boolean disableFcsChk;
        err = ag_drv_epn_dis_fcs_chk_get(parm[1].value.unumber, &disableFcsChk);
        bdmf_session_print(session, "disableFcsChk = %u = 0x%x\n", disableFcsChk, disableFcsChk);
        break;
    }
    case BDMF_pass_gates:
    {
        bdmf_boolean passGates;
        err = ag_drv_epn_pass_gates_get(parm[1].value.unumber, &passGates);
        bdmf_session_print(session, "passGates = %u = 0x%x\n", passGates, passGates);
        break;
    }
    case BDMF_cfg_misalgn_fb:
    {
        bdmf_boolean cfgMisalignFeedback;
        err = ag_drv_epn_cfg_misalgn_fb_get(parm[1].value.unumber, &cfgMisalignFeedback);
        bdmf_session_print(session, "cfgMisalignFeedback = %u = 0x%x\n", cfgMisalignFeedback, cfgMisalignFeedback);
        break;
    }
    case BDMF_discovery_filter:
    {
        uint16_t prvdiscinfomask;
        uint16_t prvdiscinfovalue;
        err = ag_drv_epn_discovery_filter_get(&prvdiscinfomask, &prvdiscinfovalue);
        bdmf_session_print(session, "prvdiscinfomask = %u = 0x%x\n", prvdiscinfomask, prvdiscinfomask);
        bdmf_session_print(session, "prvdiscinfovalue = %u = 0x%x\n", prvdiscinfovalue, prvdiscinfovalue);
        break;
    }
    case BDMF_minimum_grant_setup:
    {
        uint16_t cfgmingrantsetup;
        err = ag_drv_epn_minimum_grant_setup_get(&cfgmingrantsetup);
        bdmf_session_print(session, "cfgmingrantsetup = %u = 0x%x\n", cfgmingrantsetup, cfgmingrantsetup);
        break;
    }
    case BDMF_reset_gnt_fifo:
    {
        bdmf_boolean rstGntFifo;
        err = ag_drv_epn_reset_gnt_fifo_get(parm[1].value.unumber, &rstGntFifo);
        bdmf_session_print(session, "rstGntFifo = %u = 0x%x\n", rstGntFifo, rstGntFifo);
        break;
    }
    case BDMF_reset_l1_accumulator:
    {
        uint16_t cfgl1sclracum;
        err = ag_drv_epn_reset_l1_accumulator_get(&cfgl1sclracum);
        bdmf_session_print(session, "cfgl1sclracum = %u = 0x%x\n", cfgl1sclracum, cfgl1sclracum);
        break;
    }
    case BDMF_l1_accumulator_sel:
    {
        uint8_t cfgl1suvasizesel;
        uint8_t cfgl1ssvasizesel;
        err = ag_drv_epn_l1_accumulator_sel_get(&cfgl1suvasizesel, &cfgl1ssvasizesel);
        bdmf_session_print(session, "cfgl1suvasizesel = %u = 0x%x\n", cfgl1suvasizesel, cfgl1suvasizesel);
        bdmf_session_print(session, "cfgl1ssvasizesel = %u = 0x%x\n", cfgl1ssvasizesel, cfgl1ssvasizesel);
        break;
    }
    case BDMF_l1_sva_bytes:
    {
        uint32_t l1ssvasize;
        err = ag_drv_epn_l1_sva_bytes_get(&l1ssvasize);
        bdmf_session_print(session, "l1ssvasize = %u = 0x%x\n", l1ssvasize, l1ssvasize);
        break;
    }
    case BDMF_l1_uva_bytes:
    {
        uint32_t l1suvasize;
        err = ag_drv_epn_l1_uva_bytes_get(&l1suvasize);
        bdmf_session_print(session, "l1suvasize = %u = 0x%x\n", l1suvasize, l1suvasize);
        break;
    }
    case BDMF_l1_sva_overflow:
    {
        uint16_t l1ssvaoverflow;
        err = ag_drv_epn_l1_sva_overflow_get(&l1ssvaoverflow);
        bdmf_session_print(session, "l1ssvaoverflow = %u = 0x%x\n", l1ssvaoverflow, l1ssvaoverflow);
        break;
    }
    case BDMF_l1_uva_overflow:
    {
        uint16_t l1suvaoverflow;
        err = ag_drv_epn_l1_uva_overflow_get(&l1suvaoverflow);
        bdmf_session_print(session, "l1suvaoverflow = %u = 0x%x\n", l1suvaoverflow, l1suvaoverflow);
        break;
    }
    case BDMF_reset_rpt_pri:
    {
        epn_reset_rpt_pri reset_rpt_pri;
        err = ag_drv_epn_reset_rpt_pri_get(&reset_rpt_pri);
        bdmf_session_print(session, "nullrptpri15 = %u = 0x%x\n", reset_rpt_pri.nullrptpri15, reset_rpt_pri.nullrptpri15);
        bdmf_session_print(session, "nullrptpri14 = %u = 0x%x\n", reset_rpt_pri.nullrptpri14, reset_rpt_pri.nullrptpri14);
        bdmf_session_print(session, "nullrptpri13 = %u = 0x%x\n", reset_rpt_pri.nullrptpri13, reset_rpt_pri.nullrptpri13);
        bdmf_session_print(session, "nullrptpri12 = %u = 0x%x\n", reset_rpt_pri.nullrptpri12, reset_rpt_pri.nullrptpri12);
        bdmf_session_print(session, "nullrptpri11 = %u = 0x%x\n", reset_rpt_pri.nullrptpri11, reset_rpt_pri.nullrptpri11);
        bdmf_session_print(session, "nullrptpri10 = %u = 0x%x\n", reset_rpt_pri.nullrptpri10, reset_rpt_pri.nullrptpri10);
        bdmf_session_print(session, "nullrptpri9 = %u = 0x%x\n", reset_rpt_pri.nullrptpri9, reset_rpt_pri.nullrptpri9);
        bdmf_session_print(session, "nullrptpri8 = %u = 0x%x\n", reset_rpt_pri.nullrptpri8, reset_rpt_pri.nullrptpri8);
        bdmf_session_print(session, "nullrptpri7 = %u = 0x%x\n", reset_rpt_pri.nullrptpri7, reset_rpt_pri.nullrptpri7);
        bdmf_session_print(session, "nullrptpri6 = %u = 0x%x\n", reset_rpt_pri.nullrptpri6, reset_rpt_pri.nullrptpri6);
        bdmf_session_print(session, "nullrptpri5 = %u = 0x%x\n", reset_rpt_pri.nullrptpri5, reset_rpt_pri.nullrptpri5);
        bdmf_session_print(session, "nullrptpri4 = %u = 0x%x\n", reset_rpt_pri.nullrptpri4, reset_rpt_pri.nullrptpri4);
        bdmf_session_print(session, "nullrptpri3 = %u = 0x%x\n", reset_rpt_pri.nullrptpri3, reset_rpt_pri.nullrptpri3);
        bdmf_session_print(session, "nullrptpri2 = %u = 0x%x\n", reset_rpt_pri.nullrptpri2, reset_rpt_pri.nullrptpri2);
        bdmf_session_print(session, "nullrptpri1 = %u = 0x%x\n", reset_rpt_pri.nullrptpri1, reset_rpt_pri.nullrptpri1);
        bdmf_session_print(session, "nullrptpri0 = %u = 0x%x\n", reset_rpt_pri.nullrptpri0, reset_rpt_pri.nullrptpri0);
        break;
    }
    case BDMF_reset_l2_rpt_fifo:
    {
        bdmf_boolean cfgL2SClrQue;
        err = ag_drv_epn_reset_l2_rpt_fifo_get(parm[1].value.unumber, &cfgL2SClrQue);
        bdmf_session_print(session, "cfgL2SClrQue = %u = 0x%x\n", cfgL2SClrQue, cfgL2SClrQue);
        break;
    }
    case BDMF_enable_upstream:
    {
        bdmf_boolean cfgEnableUpstream;
        err = ag_drv_epn_enable_upstream_get(parm[1].value.unumber, &cfgEnableUpstream);
        bdmf_session_print(session, "cfgEnableUpstream = %u = 0x%x\n", cfgEnableUpstream, cfgEnableUpstream);
        break;
    }
    case BDMF_enable_upstream_fb:
    {
        bdmf_boolean cfgEnableUpstreamFeedBack;
        err = ag_drv_epn_enable_upstream_fb_get(parm[1].value.unumber, &cfgEnableUpstreamFeedBack);
        bdmf_session_print(session, "cfgEnableUpstreamFeedBack = %u = 0x%x\n", cfgEnableUpstreamFeedBack, cfgEnableUpstreamFeedBack);
        break;
    }
    case BDMF_enable_upstream_fec:
    {
        bdmf_boolean upstreamFecEn;
        err = ag_drv_epn_enable_upstream_fec_get(parm[1].value.unumber, &upstreamFecEn);
        bdmf_session_print(session, "upstreamFecEn = %u = 0x%x\n", upstreamFecEn, upstreamFecEn);
        break;
    }
    case BDMF_report_byte_length:
    {
        uint8_t prvrptbytelen;
        err = ag_drv_epn_report_byte_length_get(&prvrptbytelen);
        bdmf_session_print(session, "prvrptbytelen = %u = 0x%x\n", prvrptbytelen, prvrptbytelen);
        break;
    }
    case BDMF_main_int_status:
    {
        epn_main_int_status main_int_status;
        err = ag_drv_epn_main_int_status_get(&main_int_status);
        bdmf_session_print(session, "intbbhupfrabort = %u = 0x%x\n", main_int_status.intbbhupfrabort, main_int_status.intbbhupfrabort);
        bdmf_session_print(session, "intcol2sburstcapoverflowpres = %u = 0x%x\n", main_int_status.intcol2sburstcapoverflowpres, main_int_status.intcol2sburstcapoverflowpres);
        bdmf_session_print(session, "intcoemptyrpt = %u = 0x%x\n", main_int_status.intcoemptyrpt, main_int_status.intcoemptyrpt);
        bdmf_session_print(session, "intcodrxerrabortpres = %u = 0x%x\n", main_int_status.intcodrxerrabortpres, main_int_status.intcodrxerrabortpres);
        bdmf_session_print(session, "intl2sfifooverrun = %u = 0x%x\n", main_int_status.intl2sfifooverrun, main_int_status.intl2sfifooverrun);
        bdmf_session_print(session, "intco1588tsint = %u = 0x%x\n", main_int_status.intco1588tsint, main_int_status.intco1588tsint);
        bdmf_session_print(session, "intcorptpres = %u = 0x%x\n", main_int_status.intcorptpres, main_int_status.intcorptpres);
        bdmf_session_print(session, "intcogntpres = %u = 0x%x\n", main_int_status.intcogntpres, main_int_status.intcogntpres);
        bdmf_session_print(session, "intcodelstalegnt = %u = 0x%x\n", main_int_status.intcodelstalegnt, main_int_status.intcodelstalegnt);
        bdmf_session_print(session, "intcogntnonpoll = %u = 0x%x\n", main_int_status.intcogntnonpoll, main_int_status.intcogntnonpoll);
        bdmf_session_print(session, "intcogntmisalign = %u = 0x%x\n", main_int_status.intcogntmisalign, main_int_status.intcogntmisalign);
        bdmf_session_print(session, "intcognttoofar = %u = 0x%x\n", main_int_status.intcognttoofar, main_int_status.intcognttoofar);
        bdmf_session_print(session, "intcogntinterval = %u = 0x%x\n", main_int_status.intcogntinterval, main_int_status.intcogntinterval);
        bdmf_session_print(session, "intcogntdiscovery = %u = 0x%x\n", main_int_status.intcogntdiscovery, main_int_status.intcogntdiscovery);
        bdmf_session_print(session, "intcogntmissabort = %u = 0x%x\n", main_int_status.intcogntmissabort, main_int_status.intcogntmissabort);
        bdmf_session_print(session, "intcogntfullabort = %u = 0x%x\n", main_int_status.intcogntfullabort, main_int_status.intcogntfullabort);
        bdmf_session_print(session, "intbadupfrlen = %u = 0x%x\n", main_int_status.intbadupfrlen, main_int_status.intbadupfrlen);
        bdmf_session_print(session, "intuptardypacket = %u = 0x%x\n", main_int_status.intuptardypacket, main_int_status.intuptardypacket);
        bdmf_session_print(session, "intuprptfrxmt = %u = 0x%x\n", main_int_status.intuprptfrxmt, main_int_status.intuprptfrxmt);
        bdmf_session_print(session, "intbififooverrun = %u = 0x%x\n", main_int_status.intbififooverrun, main_int_status.intbififooverrun);
        bdmf_session_print(session, "intburstgnttoobig = %u = 0x%x\n", main_int_status.intburstgnttoobig, main_int_status.intburstgnttoobig);
        bdmf_session_print(session, "intwrgnttoobig = %u = 0x%x\n", main_int_status.intwrgnttoobig, main_int_status.intwrgnttoobig);
        bdmf_session_print(session, "intrcvgnttoobig = %u = 0x%x\n", main_int_status.intrcvgnttoobig, main_int_status.intrcvgnttoobig);
        bdmf_session_print(session, "intdnstatsoverrun = %u = 0x%x\n", main_int_status.intdnstatsoverrun, main_int_status.intdnstatsoverrun);
        bdmf_session_print(session, "intupstatsoverrun = %u = 0x%x\n", main_int_status.intupstatsoverrun, main_int_status.intupstatsoverrun);
        bdmf_session_print(session, "intdnoutoforder = %u = 0x%x\n", main_int_status.intdnoutoforder, main_int_status.intdnoutoforder);
        bdmf_session_print(session, "inttruantbbhhalt = %u = 0x%x\n", main_int_status.inttruantbbhhalt, main_int_status.inttruantbbhhalt);
        bdmf_session_print(session, "intupinvldgntlen = %u = 0x%x\n", main_int_status.intupinvldgntlen, main_int_status.intupinvldgntlen);
        bdmf_session_print(session, "intcobbhupsfault = %u = 0x%x\n", main_int_status.intcobbhupsfault, main_int_status.intcobbhupsfault);
        bdmf_session_print(session, "intdntimeinsync = %u = 0x%x\n", main_int_status.intdntimeinsync, main_int_status.intdntimeinsync);
        bdmf_session_print(session, "intdntimenotinsync = %u = 0x%x\n", main_int_status.intdntimenotinsync, main_int_status.intdntimenotinsync);
        bdmf_session_print(session, "intdportrdy = %u = 0x%x\n", main_int_status.intdportrdy, main_int_status.intdportrdy);
        break;
    }
    case BDMF_gnt_full_int_status:
    {
        bdmf_boolean intDnGntFullAbort;
        err = ag_drv_epn_gnt_full_int_status_get(parm[1].value.unumber, &intDnGntFullAbort);
        bdmf_session_print(session, "intDnGntFullAbort = %u = 0x%x\n", intDnGntFullAbort, intDnGntFullAbort);
        break;
    }
    case BDMF_gnt_full_int_mask:
    {
        bdmf_boolean maskIntDnGntFullAbort;
        err = ag_drv_epn_gnt_full_int_mask_get(parm[1].value.unumber, &maskIntDnGntFullAbort);
        bdmf_session_print(session, "maskIntDnGntFullAbort = %u = 0x%x\n", maskIntDnGntFullAbort, maskIntDnGntFullAbort);
        break;
    }
    case BDMF_gnt_miss_int_status:
    {
        bdmf_boolean intDnGntMissAbort;
        err = ag_drv_epn_gnt_miss_int_status_get(parm[1].value.unumber, &intDnGntMissAbort);
        bdmf_session_print(session, "intDnGntMissAbort = %u = 0x%x\n", intDnGntMissAbort, intDnGntMissAbort);
        break;
    }
    case BDMF_gnt_miss_int_mask:
    {
        bdmf_boolean maskIntDnGntMissAbort;
        err = ag_drv_epn_gnt_miss_int_mask_get(parm[1].value.unumber, &maskIntDnGntMissAbort);
        bdmf_session_print(session, "maskIntDnGntMissAbort = %u = 0x%x\n", maskIntDnGntMissAbort, maskIntDnGntMissAbort);
        break;
    }
    case BDMF_disc_rx_int_status:
    {
        bdmf_boolean intDnGntDiscovery;
        err = ag_drv_epn_disc_rx_int_status_get(parm[1].value.unumber, &intDnGntDiscovery);
        bdmf_session_print(session, "intDnGntDiscovery = %u = 0x%x\n", intDnGntDiscovery, intDnGntDiscovery);
        break;
    }
    case BDMF_disc_rx_int_mask:
    {
        bdmf_boolean maskIntDnGntDiscovery;
        err = ag_drv_epn_disc_rx_int_mask_get(parm[1].value.unumber, &maskIntDnGntDiscovery);
        bdmf_session_print(session, "maskIntDnGntDiscovery = %u = 0x%x\n", maskIntDnGntDiscovery, maskIntDnGntDiscovery);
        break;
    }
    case BDMF_gnt_intv_int_status:
    {
        bdmf_boolean intDnGntInterval;
        err = ag_drv_epn_gnt_intv_int_status_get(parm[1].value.unumber, &intDnGntInterval);
        bdmf_session_print(session, "intDnGntInterval = %u = 0x%x\n", intDnGntInterval, intDnGntInterval);
        break;
    }
    case BDMF_gnt_intv_int_mask:
    {
        bdmf_boolean maskIntDnGntInterval;
        err = ag_drv_epn_gnt_intv_int_mask_get(parm[1].value.unumber, &maskIntDnGntInterval);
        bdmf_session_print(session, "maskIntDnGntInterval = %u = 0x%x\n", maskIntDnGntInterval, maskIntDnGntInterval);
        break;
    }
    case BDMF_gnt_far_int_status:
    {
        bdmf_boolean intDnGntTooFar;
        err = ag_drv_epn_gnt_far_int_status_get(parm[1].value.unumber, &intDnGntTooFar);
        bdmf_session_print(session, "intDnGntTooFar = %u = 0x%x\n", intDnGntTooFar, intDnGntTooFar);
        break;
    }
    case BDMF_gnt_far_int_mask:
    {
        bdmf_boolean maskDnGntTooFar;
        err = ag_drv_epn_gnt_far_int_mask_get(parm[1].value.unumber, &maskDnGntTooFar);
        bdmf_session_print(session, "maskDnGntTooFar = %u = 0x%x\n", maskDnGntTooFar, maskDnGntTooFar);
        break;
    }
    case BDMF_gnt_misalgn_int_status:
    {
        bdmf_boolean intDnGntMisalign;
        err = ag_drv_epn_gnt_misalgn_int_status_get(parm[1].value.unumber, &intDnGntMisalign);
        bdmf_session_print(session, "intDnGntMisalign = %u = 0x%x\n", intDnGntMisalign, intDnGntMisalign);
        break;
    }
    case BDMF_gnt_misalgn_int_mask:
    {
        bdmf_boolean maskIntDnGntMisalign;
        err = ag_drv_epn_gnt_misalgn_int_mask_get(parm[1].value.unumber, &maskIntDnGntMisalign);
        bdmf_session_print(session, "maskIntDnGntMisalign = %u = 0x%x\n", maskIntDnGntMisalign, maskIntDnGntMisalign);
        break;
    }
    case BDMF_np_gnt_int_status:
    {
        bdmf_boolean intDnGntNonPoll;
        err = ag_drv_epn_np_gnt_int_status_get(parm[1].value.unumber, &intDnGntNonPoll);
        bdmf_session_print(session, "intDnGntNonPoll = %u = 0x%x\n", intDnGntNonPoll, intDnGntNonPoll);
        break;
    }
    case BDMF_np_gnt_int_mask:
    {
        bdmf_boolean maskDnGntNonPoll;
        err = ag_drv_epn_np_gnt_int_mask_get(parm[1].value.unumber, &maskDnGntNonPoll);
        bdmf_session_print(session, "maskDnGntNonPoll = %u = 0x%x\n", maskDnGntNonPoll, maskDnGntNonPoll);
        break;
    }
    case BDMF_del_stale_int_status:
    {
        bdmf_boolean intDelStaleGnt;
        err = ag_drv_epn_del_stale_int_status_get(parm[1].value.unumber, &intDelStaleGnt);
        bdmf_session_print(session, "intDelStaleGnt = %u = 0x%x\n", intDelStaleGnt, intDelStaleGnt);
        break;
    }
    case BDMF_del_stale_int_mask:
    {
        bdmf_boolean maskIntDelStaleGnt;
        err = ag_drv_epn_del_stale_int_mask_get(parm[1].value.unumber, &maskIntDelStaleGnt);
        bdmf_session_print(session, "maskIntDelStaleGnt = %u = 0x%x\n", maskIntDelStaleGnt, maskIntDelStaleGnt);
        break;
    }
    case BDMF_gnt_pres_int_status:
    {
        bdmf_boolean intDnGntRdy;
        err = ag_drv_epn_gnt_pres_int_status_get(parm[1].value.unumber, &intDnGntRdy);
        bdmf_session_print(session, "intDnGntRdy = %u = 0x%x\n", intDnGntRdy, intDnGntRdy);
        break;
    }
    case BDMF_gnt_pres_int_mask:
    {
        bdmf_boolean maskDnGntRdy;
        err = ag_drv_epn_gnt_pres_int_mask_get(parm[1].value.unumber, &maskDnGntRdy);
        bdmf_session_print(session, "maskDnGntRdy = %u = 0x%x\n", maskDnGntRdy, maskDnGntRdy);
        break;
    }
    case BDMF_rpt_pres_int_status:
    {
        bdmf_boolean intUpRptFifo;
        err = ag_drv_epn_rpt_pres_int_status_get(parm[1].value.unumber, &intUpRptFifo);
        bdmf_session_print(session, "intUpRptFifo = %u = 0x%x\n", intUpRptFifo, intUpRptFifo);
        break;
    }
    case BDMF_rpt_pres_int_mask:
    {
        bdmf_boolean maskIntUpRptFifo;
        err = ag_drv_epn_rpt_pres_int_mask_get(parm[1].value.unumber, &maskIntUpRptFifo);
        bdmf_session_print(session, "maskIntUpRptFifo = %u = 0x%x\n", maskIntUpRptFifo, maskIntUpRptFifo);
        break;
    }
    case BDMF_drx_abort_int_status:
    {
        bdmf_boolean intDrxErrAbort;
        err = ag_drv_epn_drx_abort_int_status_get(parm[1].value.unumber, &intDrxErrAbort);
        bdmf_session_print(session, "intDrxErrAbort = %u = 0x%x\n", intDrxErrAbort, intDrxErrAbort);
        break;
    }
    case BDMF_drx_abort_int_mask:
    {
        bdmf_boolean maskIntDrxErrAbort;
        err = ag_drv_epn_drx_abort_int_mask_get(parm[1].value.unumber, &maskIntDrxErrAbort);
        bdmf_session_print(session, "maskIntDrxErrAbort = %u = 0x%x\n", maskIntDrxErrAbort, maskIntDrxErrAbort);
        break;
    }
    case BDMF_empty_rpt_int_status:
    {
        bdmf_boolean intEmptyRpt;
        err = ag_drv_epn_empty_rpt_int_status_get(parm[1].value.unumber, &intEmptyRpt);
        bdmf_session_print(session, "intEmptyRpt = %u = 0x%x\n", intEmptyRpt, intEmptyRpt);
        break;
    }
    case BDMF_empty_rpt_int_mask:
    {
        bdmf_boolean  maskIntEmptyRpt;
        err = ag_drv_epn_empty_rpt_int_mask_get(parm[1].value.unumber, & maskIntEmptyRpt);
        bdmf_session_print(session, " maskIntEmptyRpt = %u = 0x%x\n",  maskIntEmptyRpt,  maskIntEmptyRpt);
        break;
    }
    case BDMF_bcap_overflow_int_status:
    {
        bdmf_boolean intl2sBurstCapOverFlow;
        err = ag_drv_epn_bcap_overflow_int_status_get(parm[1].value.unumber, &intl2sBurstCapOverFlow);
        bdmf_session_print(session, "intl2sBurstCapOverFlow = %u = 0x%x\n", intl2sBurstCapOverFlow, intl2sBurstCapOverFlow);
        break;
    }
    case BDMF_bcap_overflow_int_mask:
    {
        bdmf_boolean maskIntl2sBurstCapOverFlow;
        err = ag_drv_epn_bcap_overflow_int_mask_get(parm[1].value.unumber, &maskIntl2sBurstCapOverFlow);
        bdmf_session_print(session, "maskIntl2sBurstCapOverFlow = %u = 0x%x\n", maskIntl2sBurstCapOverFlow, maskIntl2sBurstCapOverFlow);
        break;
    }
    case BDMF_bbh_dns_fault_int_status:
    {
        bdmf_boolean intbbhdnsoverflow;
        err = ag_drv_epn_bbh_dns_fault_int_status_get(&intbbhdnsoverflow);
        bdmf_session_print(session, "intbbhdnsoverflow = %u = 0x%x\n", intbbhdnsoverflow, intbbhdnsoverflow);
        break;
    }
    case BDMF_bbh_dns_fault_int_mask:
    {
        bdmf_boolean maskintbbhdnsoverflow;
        err = ag_drv_epn_bbh_dns_fault_int_mask_get(&maskintbbhdnsoverflow);
        bdmf_session_print(session, "maskintbbhdnsoverflow = %u = 0x%x\n", maskintbbhdnsoverflow, maskintbbhdnsoverflow);
        break;
    }
    case BDMF_bbh_ups_fault_int_status:
    {
        bdmf_boolean intBbhUpsFault;
        err = ag_drv_epn_bbh_ups_fault_int_status_get(parm[1].value.unumber, &intBbhUpsFault);
        bdmf_session_print(session, "intBbhUpsFault = %u = 0x%x\n", intBbhUpsFault, intBbhUpsFault);
        break;
    }
    case BDMF_bbh_ups_fault_int_mask:
    {
        bdmf_boolean maskIntBbhUpsFault;
        err = ag_drv_epn_bbh_ups_fault_int_mask_get(parm[1].value.unumber, &maskIntBbhUpsFault);
        bdmf_session_print(session, "maskIntBbhUpsFault = %u = 0x%x\n", maskIntBbhUpsFault, maskIntBbhUpsFault);
        break;
    }
    case BDMF_bbh_ups_abort_int_status:
    {
        bdmf_boolean tardybbhabort;
        err = ag_drv_epn_bbh_ups_abort_int_status_get(&tardybbhabort);
        bdmf_session_print(session, "tardybbhabort = %u = 0x%x\n", tardybbhabort, tardybbhabort);
        break;
    }
    case BDMF_bbh_ups_abort_int_mask:
    {
        bdmf_boolean masktardybbhabort;
        err = ag_drv_epn_bbh_ups_abort_int_mask_get(&masktardybbhabort);
        bdmf_session_print(session, "masktardybbhabort = %u = 0x%x\n", masktardybbhabort, masktardybbhabort);
        break;
    }
    case BDMF_main_int_mask:
    {
        epn_main_int_mask main_int_mask;
        err = ag_drv_epn_main_int_mask_get(&main_int_mask);
        bdmf_session_print(session, "bbhupfrabortmask = %u = 0x%x\n", main_int_mask.bbhupfrabortmask, main_int_mask.bbhupfrabortmask);
        bdmf_session_print(session, "intl2sburstcapoverflowmask = %u = 0x%x\n", main_int_mask.intl2sburstcapoverflowmask, main_int_mask.intl2sburstcapoverflowmask);
        bdmf_session_print(session, "intcoemptyrptmask = %u = 0x%x\n", main_int_mask.intcoemptyrptmask, main_int_mask.intcoemptyrptmask);
        bdmf_session_print(session, "intdrxerrabortmask = %u = 0x%x\n", main_int_mask.intdrxerrabortmask, main_int_mask.intdrxerrabortmask);
        bdmf_session_print(session, "intl2sfifooverrunmask = %u = 0x%x\n", main_int_mask.intl2sfifooverrunmask, main_int_mask.intl2sfifooverrunmask);
        bdmf_session_print(session, "intco1588tsmask = %u = 0x%x\n", main_int_mask.intco1588tsmask, main_int_mask.intco1588tsmask);
        bdmf_session_print(session, "intcorptpresmask = %u = 0x%x\n", main_int_mask.intcorptpresmask, main_int_mask.intcorptpresmask);
        bdmf_session_print(session, "intcogntpresmask = %u = 0x%x\n", main_int_mask.intcogntpresmask, main_int_mask.intcogntpresmask);
        bdmf_session_print(session, "intcodelstalegntmask = %u = 0x%x\n", main_int_mask.intcodelstalegntmask, main_int_mask.intcodelstalegntmask);
        bdmf_session_print(session, "intcogntnonpollmask = %u = 0x%x\n", main_int_mask.intcogntnonpollmask, main_int_mask.intcogntnonpollmask);
        bdmf_session_print(session, "intcogntmisalignmask = %u = 0x%x\n", main_int_mask.intcogntmisalignmask, main_int_mask.intcogntmisalignmask);
        bdmf_session_print(session, "intcognttoofarmask = %u = 0x%x\n", main_int_mask.intcognttoofarmask, main_int_mask.intcognttoofarmask);
        bdmf_session_print(session, "intcogntintervalmask = %u = 0x%x\n", main_int_mask.intcogntintervalmask, main_int_mask.intcogntintervalmask);
        bdmf_session_print(session, "intcogntdiscoverymask = %u = 0x%x\n", main_int_mask.intcogntdiscoverymask, main_int_mask.intcogntdiscoverymask);
        bdmf_session_print(session, "intcogntmissabortmask = %u = 0x%x\n", main_int_mask.intcogntmissabortmask, main_int_mask.intcogntmissabortmask);
        bdmf_session_print(session, "intcogntfullabortmask = %u = 0x%x\n", main_int_mask.intcogntfullabortmask, main_int_mask.intcogntfullabortmask);
        bdmf_session_print(session, "badupfrlenmask = %u = 0x%x\n", main_int_mask.badupfrlenmask, main_int_mask.badupfrlenmask);
        bdmf_session_print(session, "uptardypacketmask = %u = 0x%x\n", main_int_mask.uptardypacketmask, main_int_mask.uptardypacketmask);
        bdmf_session_print(session, "uprptfrxmtmask = %u = 0x%x\n", main_int_mask.uprptfrxmtmask, main_int_mask.uprptfrxmtmask);
        bdmf_session_print(session, "intbififooverrunmask = %u = 0x%x\n", main_int_mask.intbififooverrunmask, main_int_mask.intbififooverrunmask);
        bdmf_session_print(session, "burstgnttoobigmask = %u = 0x%x\n", main_int_mask.burstgnttoobigmask, main_int_mask.burstgnttoobigmask);
        bdmf_session_print(session, "wrgnttoobigmask = %u = 0x%x\n", main_int_mask.wrgnttoobigmask, main_int_mask.wrgnttoobigmask);
        bdmf_session_print(session, "rcvgnttoobigmask = %u = 0x%x\n", main_int_mask.rcvgnttoobigmask, main_int_mask.rcvgnttoobigmask);
        bdmf_session_print(session, "dnstatsoverrunmask = %u = 0x%x\n", main_int_mask.dnstatsoverrunmask, main_int_mask.dnstatsoverrunmask);
        bdmf_session_print(session, "intupstatsoverrunmask = %u = 0x%x\n", main_int_mask.intupstatsoverrunmask, main_int_mask.intupstatsoverrunmask);
        bdmf_session_print(session, "dnoutofordermask = %u = 0x%x\n", main_int_mask.dnoutofordermask, main_int_mask.dnoutofordermask);
        bdmf_session_print(session, "truantbbhhaltmask = %u = 0x%x\n", main_int_mask.truantbbhhaltmask, main_int_mask.truantbbhhaltmask);
        bdmf_session_print(session, "upinvldgntlenmask = %u = 0x%x\n", main_int_mask.upinvldgntlenmask, main_int_mask.upinvldgntlenmask);
        bdmf_session_print(session, "intcobbhupsfaultmask = %u = 0x%x\n", main_int_mask.intcobbhupsfaultmask, main_int_mask.intcobbhupsfaultmask);
        bdmf_session_print(session, "dntimeinsyncmask = %u = 0x%x\n", main_int_mask.dntimeinsyncmask, main_int_mask.dntimeinsyncmask);
        bdmf_session_print(session, "dntimenotinsyncmask = %u = 0x%x\n", main_int_mask.dntimenotinsyncmask, main_int_mask.dntimenotinsyncmask);
        bdmf_session_print(session, "dportrdymask = %u = 0x%x\n", main_int_mask.dportrdymask, main_int_mask.dportrdymask);
        break;
    }
    case BDMF_max_gnt_size:
    {
        uint16_t maxgntsize;
        err = ag_drv_epn_max_gnt_size_get(&maxgntsize);
        bdmf_session_print(session, "maxgntsize = %u = 0x%x\n", maxgntsize, maxgntsize);
        break;
    }
    case BDMF_max_frame_size:
    {
        uint16_t cfgmaxframesize;
        err = ag_drv_epn_max_frame_size_get(&cfgmaxframesize);
        bdmf_session_print(session, "cfgmaxframesize = %u = 0x%x\n", cfgmaxframesize, cfgmaxframesize);
        break;
    }
    case BDMF_grant_ovr_hd:
    {
        uint16_t gntovrhdfec;
        uint16_t gntovrhd;
        err = ag_drv_epn_grant_ovr_hd_get(&gntovrhdfec, &gntovrhd);
        bdmf_session_print(session, "gntovrhdfec = %u = 0x%x\n", gntovrhdfec, gntovrhdfec);
        bdmf_session_print(session, "gntovrhd = %u = 0x%x\n", gntovrhd, gntovrhd);
        break;
    }
    case BDMF_poll_size:
    {
        uint16_t pollsizefec;
        uint16_t pollsize;
        err = ag_drv_epn_poll_size_get(&pollsizefec, &pollsize);
        bdmf_session_print(session, "pollsizefec = %u = 0x%x\n", pollsizefec, pollsizefec);
        bdmf_session_print(session, "pollsize = %u = 0x%x\n", pollsize, pollsize);
        break;
    }
    case BDMF_dn_rd_gnt_margin:
    {
        uint16_t rdgntstartmargin;
        err = ag_drv_epn_dn_rd_gnt_margin_get(&rdgntstartmargin);
        bdmf_session_print(session, "rdgntstartmargin = %u = 0x%x\n", rdgntstartmargin, rdgntstartmargin);
        break;
    }
    case BDMF_gnt_time_start_delta:
    {
        uint16_t gntstarttimedelta;
        err = ag_drv_epn_gnt_time_start_delta_get(&gntstarttimedelta);
        bdmf_session_print(session, "gntstarttimedelta = %u = 0x%x\n", gntstarttimedelta, gntstarttimedelta);
        break;
    }
    case BDMF_time_stamp_diff:
    {
        uint16_t timestampdiffdelta;
        err = ag_drv_epn_time_stamp_diff_get(&timestampdiffdelta);
        bdmf_session_print(session, "timestampdiffdelta = %u = 0x%x\n", timestampdiffdelta, timestampdiffdelta);
        break;
    }
    case BDMF_up_time_stamp_off:
    {
        uint16_t timestampoffsetfec;
        uint16_t timestampoffset;
        err = ag_drv_epn_up_time_stamp_off_get(&timestampoffsetfec, &timestampoffset);
        bdmf_session_print(session, "timestampoffsetfec = %u = 0x%x\n", timestampoffsetfec, timestampoffsetfec);
        bdmf_session_print(session, "timestampoffset = %u = 0x%x\n", timestampoffset, timestampoffset);
        break;
    }
    case BDMF_gnt_interval:
    {
        uint16_t gntinterval;
        err = ag_drv_epn_gnt_interval_get(&gntinterval);
        bdmf_session_print(session, "gntinterval = %u = 0x%x\n", gntinterval, gntinterval);
        break;
    }
    case BDMF_dn_gnt_misalign_thr:
    {
        uint16_t prvunusedgntthreshold;
        uint16_t gntmisalignthresh;
        err = ag_drv_epn_dn_gnt_misalign_thr_get(&prvunusedgntthreshold, &gntmisalignthresh);
        bdmf_session_print(session, "prvunusedgntthreshold = %u = 0x%x\n", prvunusedgntthreshold, prvunusedgntthreshold);
        bdmf_session_print(session, "gntmisalignthresh = %u = 0x%x\n", gntmisalignthresh, gntmisalignthresh);
        break;
    }
    case BDMF_dn_gnt_misalign_pause:
    {
        uint16_t gntmisalignpause;
        err = ag_drv_epn_dn_gnt_misalign_pause_get(&gntmisalignpause);
        bdmf_session_print(session, "gntmisalignpause = %u = 0x%x\n", gntmisalignpause, gntmisalignpause);
        break;
    }
    case BDMF_non_poll_intv:
    {
        uint16_t nonpollgntintv;
        err = ag_drv_epn_non_poll_intv_get(&nonpollgntintv);
        bdmf_session_print(session, "nonpollgntintv = %u = 0x%x\n", nonpollgntintv, nonpollgntintv);
        break;
    }
    case BDMF_force_fcs_err:
    {
        bdmf_boolean forceFcsErr;
        err = ag_drv_epn_force_fcs_err_get(parm[1].value.unumber, &forceFcsErr);
        bdmf_session_print(session, "forceFcsErr = %u = 0x%x\n", forceFcsErr, forceFcsErr);
        break;
    }
    case BDMF_grant_overlap_limit:
    {
        uint16_t prvgrantoverlaplimit;
        err = ag_drv_epn_grant_overlap_limit_get(&prvgrantoverlaplimit);
        bdmf_session_print(session, "prvgrantoverlaplimit = %u = 0x%x\n", prvgrantoverlaplimit, prvgrantoverlaplimit);
        break;
    }
    case BDMF_aes_configuration_0:
    {
        uint8_t prvUpstreamAesMode_0;
        err = ag_drv_epn_aes_configuration_0_get(parm[1].value.unumber, &prvUpstreamAesMode_0);
        bdmf_session_print(session, "prvUpstreamAesMode_0 = %u = 0x%x\n", prvUpstreamAesMode_0, prvUpstreamAesMode_0);
        break;
    }
    case BDMF_disc_grant_ovr_hd:
    {
        uint16_t discgntovrhd;
        err = ag_drv_epn_disc_grant_ovr_hd_get(&discgntovrhd);
        bdmf_session_print(session, "discgntovrhd = %u = 0x%x\n", discgntovrhd, discgntovrhd);
        break;
    }
    case BDMF_dn_discovery_seed:
    {
        uint16_t cfgdiscseed;
        err = ag_drv_epn_dn_discovery_seed_get(&cfgdiscseed);
        bdmf_session_print(session, "cfgdiscseed = %u = 0x%x\n", cfgdiscseed, cfgdiscseed);
        break;
    }
    case BDMF_dn_discovery_inc:
    {
        uint16_t cfgdiscinc;
        err = ag_drv_epn_dn_discovery_inc_get(&cfgdiscinc);
        bdmf_session_print(session, "cfgdiscinc = %u = 0x%x\n", cfgdiscinc, cfgdiscinc);
        break;
    }
    case BDMF_dn_discovery_size:
    {
        uint16_t cfgdiscsize;
        err = ag_drv_epn_dn_discovery_size_get(&cfgdiscsize);
        bdmf_session_print(session, "cfgdiscsize = %u = 0x%x\n", cfgdiscsize, cfgdiscsize);
        break;
    }
    case BDMF_fec_ipg_length:
    {
        uint8_t modipgpreamblebytes;
        uint8_t cfgrptlen;
        uint8_t cfgfecrptlength;
        uint8_t cfgfecipglength;
        err = ag_drv_epn_fec_ipg_length_get(&modipgpreamblebytes, &cfgrptlen, &cfgfecrptlength, &cfgfecipglength);
        bdmf_session_print(session, "modipgpreamblebytes = %u = 0x%x\n", modipgpreamblebytes, modipgpreamblebytes);
        bdmf_session_print(session, "cfgrptlen = %u = 0x%x\n", cfgrptlen, cfgrptlen);
        bdmf_session_print(session, "cfgfecrptlength = %u = 0x%x\n", cfgfecrptlength, cfgfecrptlength);
        bdmf_session_print(session, "cfgfecipglength = %u = 0x%x\n", cfgfecipglength, cfgfecipglength);
        break;
    }
    case BDMF_fake_report_value_en:
    {
        uint32_t fakereportvalueen;
        err = ag_drv_epn_fake_report_value_en_get(&fakereportvalueen);
        bdmf_session_print(session, "fakereportvalueen = %u = 0x%x\n", fakereportvalueen, fakereportvalueen);
        break;
    }
    case BDMF_fake_report_value:
    {
        uint32_t fakereportvalue;
        err = ag_drv_epn_fake_report_value_get(&fakereportvalue);
        bdmf_session_print(session, "fakereportvalue = %u = 0x%x\n", fakereportvalue, fakereportvalue);
        break;
    }
    case BDMF_valid_opcode_map:
    {
        uint16_t prvvalidmpcpopcodes;
        err = ag_drv_epn_valid_opcode_map_get(&prvvalidmpcpopcodes);
        bdmf_session_print(session, "prvvalidmpcpopcodes = %u = 0x%x\n", prvvalidmpcpopcodes, prvvalidmpcpopcodes);
        break;
    }
    case BDMF_up_packet_tx_margin:
    {
        uint16_t uppackettxmargin;
        err = ag_drv_epn_up_packet_tx_margin_get(&uppackettxmargin);
        bdmf_session_print(session, "uppackettxmargin = %u = 0x%x\n", uppackettxmargin, uppackettxmargin);
        break;
    }
    case BDMF_multi_pri_cfg_0:
    {
        epn_multi_pri_cfg_0 multi_pri_cfg_0;
        err = ag_drv_epn_multi_pri_cfg_0_get(&multi_pri_cfg_0);
        bdmf_session_print(session, "cfgctcschdeficiten = %u = 0x%x\n", multi_pri_cfg_0.cfgctcschdeficiten, multi_pri_cfg_0.cfgctcschdeficiten);
        bdmf_session_print(session, "prvzeroburstcapoverridemode = %u = 0x%x\n", multi_pri_cfg_0.prvzeroburstcapoverridemode, multi_pri_cfg_0.prvzeroburstcapoverridemode);
        bdmf_session_print(session, "cfgsharedl2 = %u = 0x%x\n", multi_pri_cfg_0.cfgsharedl2, multi_pri_cfg_0.cfgsharedl2);
        bdmf_session_print(session, "cfgsharedburstcap = %u = 0x%x\n", multi_pri_cfg_0.cfgsharedburstcap, multi_pri_cfg_0.cfgsharedburstcap);
        bdmf_session_print(session, "cfgrptgntsoutst0 = %u = 0x%x\n", multi_pri_cfg_0.cfgrptgntsoutst0, multi_pri_cfg_0.cfgrptgntsoutst0);
        bdmf_session_print(session, "cfgrpthiprifirst0 = %u = 0x%x\n", multi_pri_cfg_0.cfgrpthiprifirst0, multi_pri_cfg_0.cfgrpthiprifirst0);
        bdmf_session_print(session, "cfgrptswapqs0 = %u = 0x%x\n", multi_pri_cfg_0.cfgrptswapqs0, multi_pri_cfg_0.cfgrptswapqs0);
        bdmf_session_print(session, "cfgrptmultipri0 = %u = 0x%x\n", multi_pri_cfg_0.cfgrptmultipri0, multi_pri_cfg_0.cfgrptmultipri0);
        break;
    }
    case BDMF_shared_bcap_ovrflow:
    {
        uint16_t sharedburstcapoverflow;
        err = ag_drv_epn_shared_bcap_ovrflow_get(&sharedburstcapoverflow);
        bdmf_session_print(session, "sharedburstcapoverflow = %u = 0x%x\n", sharedburstcapoverflow, sharedburstcapoverflow);
        break;
    }
    case BDMF_forced_report_en:
    {
        bdmf_boolean cfgForceReportEn;
        err = ag_drv_epn_forced_report_en_get(parm[1].value.unumber, &cfgForceReportEn);
        bdmf_session_print(session, "cfgForceReportEn = %u = 0x%x\n", cfgForceReportEn, cfgForceReportEn);
        break;
    }
    case BDMF_forced_report_max_interval:
    {
        uint8_t cfgmaxreportinterval;
        err = ag_drv_epn_forced_report_max_interval_get(&cfgmaxreportinterval);
        bdmf_session_print(session, "cfgmaxreportinterval = %u = 0x%x\n", cfgmaxreportinterval, cfgmaxreportinterval);
        break;
    }
    case BDMF_l2s_flush_config:
    {
        bdmf_boolean cfgflushl2sen;
        bdmf_boolean flushl2sdone;
        uint8_t cfgflushl2ssel;
        err = ag_drv_epn_l2s_flush_config_get(&cfgflushl2sen, &flushl2sdone, &cfgflushl2ssel);
        bdmf_session_print(session, "cfgflushl2sen = %u = 0x%x\n", cfgflushl2sen, cfgflushl2sen);
        bdmf_session_print(session, "flushl2sdone = %u = 0x%x\n", flushl2sdone, flushl2sdone);
        bdmf_session_print(session, "cfgflushl2ssel = %u = 0x%x\n", cfgflushl2ssel, cfgflushl2ssel);
        break;
    }
    case BDMF_data_port_command:
    {
        bdmf_boolean dportbusy;
        uint8_t dportselect;
        bdmf_boolean dportcontrol;
        err = ag_drv_epn_data_port_command_get(&dportbusy, &dportselect, &dportcontrol);
        bdmf_session_print(session, "dportbusy = %u = 0x%x\n", dportbusy, dportbusy);
        bdmf_session_print(session, "dportselect = %u = 0x%x\n", dportselect, dportselect);
        bdmf_session_print(session, "dportcontrol = %u = 0x%x\n", dportcontrol, dportcontrol);
        break;
    }
    case BDMF_data_port_address:
    {
        uint16_t dportaddr;
        err = ag_drv_epn_data_port_address_get(&dportaddr);
        bdmf_session_print(session, "dportaddr = %u = 0x%x\n", dportaddr, dportaddr);
        break;
    }
    case BDMF_data_port_data_0:
    {
        uint32_t dportdata0;
        err = ag_drv_epn_data_port_data_0_get(&dportdata0);
        bdmf_session_print(session, "dportdata0 = %u = 0x%x\n", dportdata0, dportdata0);
        break;
    }
    case BDMF_unmap_big_cnt:
    {
        uint32_t unmapbigerrcnt;
        err = ag_drv_epn_unmap_big_cnt_get(&unmapbigerrcnt);
        bdmf_session_print(session, "unmapbigerrcnt = %u = 0x%x\n", unmapbigerrcnt, unmapbigerrcnt);
        break;
    }
    case BDMF_unmap_frame_cnt:
    {
        uint32_t unmapfrcnt;
        err = ag_drv_epn_unmap_frame_cnt_get(&unmapfrcnt);
        bdmf_session_print(session, "unmapfrcnt = %u = 0x%x\n", unmapfrcnt, unmapfrcnt);
        break;
    }
    case BDMF_unmap_fcs_cnt:
    {
        uint32_t unmapfcserrcnt;
        err = ag_drv_epn_unmap_fcs_cnt_get(&unmapfcserrcnt);
        bdmf_session_print(session, "unmapfcserrcnt = %u = 0x%x\n", unmapfcserrcnt, unmapfcserrcnt);
        break;
    }
    case BDMF_unmap_gate_cnt:
    {
        uint32_t unmapgatecnt;
        err = ag_drv_epn_unmap_gate_cnt_get(&unmapgatecnt);
        bdmf_session_print(session, "unmapgatecnt = %u = 0x%x\n", unmapgatecnt, unmapgatecnt);
        break;
    }
    case BDMF_unmap_oam_cnt:
    {
        uint32_t unmapoamcnt;
        err = ag_drv_epn_unmap_oam_cnt_get(&unmapoamcnt);
        bdmf_session_print(session, "unmapoamcnt = %u = 0x%x\n", unmapoamcnt, unmapoamcnt);
        break;
    }
    case BDMF_unmap_small_cnt:
    {
        uint32_t unmapsmallerrcnt;
        err = ag_drv_epn_unmap_small_cnt_get(&unmapsmallerrcnt);
        bdmf_session_print(session, "unmapsmallerrcnt = %u = 0x%x\n", unmapsmallerrcnt, unmapsmallerrcnt);
        break;
    }
    case BDMF_fif_dequeue_event_cnt:
    {
        uint32_t fifdequeueeventcnt;
        err = ag_drv_epn_fif_dequeue_event_cnt_get(&fifdequeueeventcnt);
        bdmf_session_print(session, "fifdequeueeventcnt = %u = 0x%x\n", fifdequeueeventcnt, fifdequeueeventcnt);
        break;
    }
    case BDMF_bbh_up_fault_halt_en:
    {
        bdmf_boolean bbhUpsFaultHaltEn;
        err = ag_drv_epn_bbh_up_fault_halt_en_get(parm[1].value.unumber, &bbhUpsFaultHaltEn);
        bdmf_session_print(session, "bbhUpsFaultHaltEn = %u = 0x%x\n", bbhUpsFaultHaltEn, bbhUpsFaultHaltEn);
        break;
    }
    case BDMF_bbh_up_tardy_halt_en:
    {
        bdmf_boolean fataltardybbhaborten;
        err = ag_drv_epn_bbh_up_tardy_halt_en_get(&fataltardybbhaborten);
        bdmf_session_print(session, "fataltardybbhaborten = %u = 0x%x\n", fataltardybbhaborten, fataltardybbhaborten);
        break;
    }
    case BDMF_debug_status_0:
    {
        uint8_t l2squefulldebug;
        bdmf_boolean dndlufull;
        bdmf_boolean dnsecfull;
        bdmf_boolean epnliffifofull;
        err = ag_drv_epn_debug_status_0_get(&l2squefulldebug, &dndlufull, &dnsecfull, &epnliffifofull);
        bdmf_session_print(session, "l2squefulldebug = %u = 0x%x\n", l2squefulldebug, l2squefulldebug);
        bdmf_session_print(session, "dndlufull = %u = 0x%x\n", dndlufull, dndlufull);
        bdmf_session_print(session, "dnsecfull = %u = 0x%x\n", dnsecfull, dnsecfull);
        bdmf_session_print(session, "epnliffifofull = %u = 0x%x\n", epnliffifofull, epnliffifofull);
        break;
    }
    case BDMF_debug_status_1:
    {
        bdmf_boolean gntRdy;
        err = ag_drv_epn_debug_status_1_get(parm[1].value.unumber, &gntRdy);
        bdmf_session_print(session, "gntRdy = %u = 0x%x\n", gntRdy, gntRdy);
        break;
    }
    case BDMF_debug_l2s_ptr_sel:
    {
        uint8_t cfgl2sdebugptrsel;
        uint16_t l2sdebugptrstate;
        err = ag_drv_epn_debug_l2s_ptr_sel_get(&cfgl2sdebugptrsel, &l2sdebugptrstate);
        bdmf_session_print(session, "cfgl2sdebugptrsel = %u = 0x%x\n", cfgl2sdebugptrsel, cfgl2sdebugptrsel);
        bdmf_session_print(session, "l2sdebugptrstate = %u = 0x%x\n", l2sdebugptrstate, l2sdebugptrstate);
        break;
    }
    case BDMF_olt_mac_addr_lo:
    {
        uint32_t oltaddrlo;
        err = ag_drv_epn_olt_mac_addr_lo_get(&oltaddrlo);
        bdmf_session_print(session, "oltaddrlo = %u = 0x%x\n", oltaddrlo, oltaddrlo);
        break;
    }
    case BDMF_olt_mac_addr_hi:
    {
        uint16_t oltaddrhi;
        err = ag_drv_epn_olt_mac_addr_hi_get(&oltaddrhi);
        bdmf_session_print(session, "oltaddrhi = %u = 0x%x\n", oltaddrhi, oltaddrhi);
        break;
    }
    case BDMF_tx_l1s_shp_dqu_empty:
    {
        bdmf_boolean l1sDquQueEmpty;
        err = ag_drv_epn_tx_l1s_shp_dqu_empty_get(parm[1].value.unumber, &l1sDquQueEmpty);
        bdmf_session_print(session, "l1sDquQueEmpty = %u = 0x%x\n", l1sDquQueEmpty, l1sDquQueEmpty);
        break;
    }
    case BDMF_tx_l1s_unshaped_empty:
    {
        bdmf_boolean l1sUnshapedQueEmpty;
        err = ag_drv_epn_tx_l1s_unshaped_empty_get(parm[1].value.unumber, &l1sUnshapedQueEmpty);
        bdmf_session_print(session, "l1sUnshapedQueEmpty = %u = 0x%x\n", l1sUnshapedQueEmpty, l1sUnshapedQueEmpty);
        break;
    }
    case BDMF_tx_l2s_que_empty:
    {
        bdmf_boolean l2sQueEmpty;
        err = ag_drv_epn_tx_l2s_que_empty_get(parm[1].value.unumber, &l2sQueEmpty);
        bdmf_session_print(session, "l2sQueEmpty = %u = 0x%x\n", l2sQueEmpty, l2sQueEmpty);
        break;
    }
    case BDMF_tx_l2s_que_full:
    {
        bdmf_boolean l2sQueFull;
        err = ag_drv_epn_tx_l2s_que_full_get(parm[1].value.unumber, &l2sQueFull);
        bdmf_session_print(session, "l2sQueFull = %u = 0x%x\n", l2sQueFull, l2sQueFull);
        break;
    }
    case BDMF_tx_l2s_que_stopped:
    {
        bdmf_boolean l2sStoppedQueues;
        err = ag_drv_epn_tx_l2s_que_stopped_get(parm[1].value.unumber, &l2sStoppedQueues);
        bdmf_session_print(session, "l2sStoppedQueues = %u = 0x%x\n", l2sStoppedQueues, l2sStoppedQueues);
        break;
    }
    case BDMF_bbh_max_outstanding_tardy_packets:
    {
        uint16_t cfgmaxoutstandingtardypackets;
        err = ag_drv_epn_bbh_max_outstanding_tardy_packets_get(&cfgmaxoutstandingtardypackets);
        bdmf_session_print(session, "cfgmaxoutstandingtardypackets = %u = 0x%x\n", cfgmaxoutstandingtardypackets, cfgmaxoutstandingtardypackets);
        break;
    }
    case BDMF_min_report_value_difference:
    {
        uint16_t prvminreportdiff;
        err = ag_drv_epn_min_report_value_difference_get(&prvminreportdiff);
        bdmf_session_print(session, "prvminreportdiff = %u = 0x%x\n", prvminreportdiff, prvminreportdiff);
        break;
    }
    case BDMF_bbh_status_fifo_overflow:
    {
        bdmf_boolean utxBbhStatusFifoOverflow;
        err = ag_drv_epn_bbh_status_fifo_overflow_get(parm[1].value.unumber, &utxBbhStatusFifoOverflow);
        bdmf_session_print(session, "utxBbhStatusFifoOverflow = %u = 0x%x\n", utxBbhStatusFifoOverflow, utxBbhStatusFifoOverflow);
        break;
    }
    case BDMF_spare_ctl:
    {
        uint32_t cfgepnspare;
        bdmf_boolean ecoutxsnfenable;
        bdmf_boolean ecojira758enable;
        err = ag_drv_epn_spare_ctl_get(&cfgepnspare, &ecoutxsnfenable, &ecojira758enable);
        bdmf_session_print(session, "cfgepnspare = %u = 0x%x\n", cfgepnspare, cfgepnspare);
        bdmf_session_print(session, "ecoutxsnfenable = %u = 0x%x\n", ecoutxsnfenable, ecoutxsnfenable);
        bdmf_session_print(session, "ecojira758enable = %u = 0x%x\n", ecojira758enable, ecojira758enable);
        break;
    }
    case BDMF_ts_sync_offset:
    {
        bdmf_boolean cfg_ts48_sync_ns_increment;
        uint16_t cfgtssyncoffset_312;
        uint16_t cfgtssyncoffset_125;
        err = ag_drv_epn_ts_sync_offset_get(&cfg_ts48_sync_ns_increment, &cfgtssyncoffset_312, &cfgtssyncoffset_125);
        bdmf_session_print(session, "cfg_ts48_sync_ns_increment = %u = 0x%x\n", cfg_ts48_sync_ns_increment, cfg_ts48_sync_ns_increment);
        bdmf_session_print(session, "cfgtssyncoffset_312 = %u = 0x%x\n", cfgtssyncoffset_312, cfgtssyncoffset_312);
        bdmf_session_print(session, "cfgtssyncoffset_125 = %u = 0x%x\n", cfgtssyncoffset_125, cfgtssyncoffset_125);
        break;
    }
    case BDMF_dn_ts_offset:
    {
        uint32_t cfgdntsoffset;
        err = ag_drv_epn_dn_ts_offset_get(&cfgdntsoffset);
        bdmf_session_print(session, "cfgdntsoffset = %u = 0x%x\n", cfgdntsoffset, cfgdntsoffset);
        break;
    }
    case BDMF_up_ts_offset_lo:
    {
        uint32_t cfguptsoffset_lo;
        err = ag_drv_epn_up_ts_offset_lo_get(&cfguptsoffset_lo);
        bdmf_session_print(session, "cfguptsoffset_lo = %u = 0x%x\n", cfguptsoffset_lo, cfguptsoffset_lo);
        break;
    }
    case BDMF_up_ts_offset_hi:
    {
        uint16_t cfguptsoffset_hi;
        err = ag_drv_epn_up_ts_offset_hi_get(&cfguptsoffset_hi);
        bdmf_session_print(session, "cfguptsoffset_hi = %u = 0x%x\n", cfguptsoffset_hi, cfguptsoffset_hi);
        break;
    }
    case BDMF_two_step_ts_ctl:
    {
        bdmf_boolean twostepffrd;
        uint8_t twostepffentries;
        err = ag_drv_epn_two_step_ts_ctl_get(&twostepffrd, &twostepffentries);
        bdmf_session_print(session, "twostepffrd = %u = 0x%x\n", twostepffrd, twostepffrd);
        bdmf_session_print(session, "twostepffentries = %u = 0x%x\n", twostepffentries, twostepffentries);
        break;
    }
    case BDMF_two_step_ts_value_lo:
    {
        uint32_t twosteptimestamp_lo;
        err = ag_drv_epn_two_step_ts_value_lo_get(&twosteptimestamp_lo);
        bdmf_session_print(session, "twosteptimestamp_lo = %u = 0x%x\n", twosteptimestamp_lo, twosteptimestamp_lo);
        break;
    }
    case BDMF_two_step_ts_value_hi:
    {
        uint16_t twosteptimestamp_hi;
        err = ag_drv_epn_two_step_ts_value_hi_get(&twosteptimestamp_hi);
        bdmf_session_print(session, "twosteptimestamp_hi = %u = 0x%x\n", twosteptimestamp_hi, twosteptimestamp_hi);
        break;
    }
    case BDMF_1588_timestamp_int_status:
    {
        bdmf_boolean int1588pktabort;
        bdmf_boolean int1588twostepffint;
        err = ag_drv_epn_1588_timestamp_int_status_get(&int1588pktabort, &int1588twostepffint);
        bdmf_session_print(session, "int1588pktabort = %u = 0x%x\n", int1588pktabort, int1588pktabort);
        bdmf_session_print(session, "int1588twostepffint = %u = 0x%x\n", int1588twostepffint, int1588twostepffint);
        break;
    }
    case BDMF_1588_timestamp_int_mask:
    {
        bdmf_boolean ts1588pktabort_mask;
        bdmf_boolean ts1588twostepff_mask;
        err = ag_drv_epn_1588_timestamp_int_mask_get(&ts1588pktabort_mask, &ts1588twostepff_mask);
        bdmf_session_print(session, "ts1588pktabort_mask = %u = 0x%x\n", ts1588pktabort_mask, ts1588pktabort_mask);
        bdmf_session_print(session, "ts1588twostepff_mask = %u = 0x%x\n", ts1588twostepff_mask, ts1588twostepff_mask);
        break;
    }
    case BDMF_up_packet_fetch_margin:
    {
        uint16_t uppacketfetchmargin;
        err = ag_drv_epn_up_packet_fetch_margin_get(&uppacketfetchmargin);
        bdmf_session_print(session, "uppacketfetchmargin = %u = 0x%x\n", uppacketfetchmargin, uppacketfetchmargin);
        break;
    }
    case BDMF_dn_1588_timestamp:
    {
        uint32_t dn_1588_ts;
        err = ag_drv_epn_dn_1588_timestamp_get(&dn_1588_ts);
        bdmf_session_print(session, "dn_1588_ts = %u = 0x%x\n", dn_1588_ts, dn_1588_ts);
        break;
    }
    case BDMF_persistent_report_cfg:
    {
        uint16_t cfgpersrptduration;
        uint16_t cfgpersrptticksize;
        err = ag_drv_epn_persistent_report_cfg_get(&cfgpersrptduration, &cfgpersrptticksize);
        bdmf_session_print(session, "cfgpersrptduration = %u = 0x%x\n", cfgpersrptduration, cfgpersrptduration);
        bdmf_session_print(session, "cfgpersrptticksize = %u = 0x%x\n", cfgpersrptticksize, cfgpersrptticksize);
        break;
    }
    case BDMF_persistent_report_enables:
    {
        bdmf_boolean cfgPersRptEnable;
        err = ag_drv_epn_persistent_report_enables_get(parm[1].value.unumber, &cfgPersRptEnable);
        bdmf_session_print(session, "cfgPersRptEnable = %u = 0x%x\n", cfgPersRptEnable, cfgPersRptEnable);
        break;
    }
    case BDMF_persistent_report_request_size:
    {
        uint16_t cfgpersrptreqtq;
        err = ag_drv_epn_persistent_report_request_size_get(&cfgpersrptreqtq);
        bdmf_session_print(session, "cfgpersrptreqtq = %u = 0x%x\n", cfgpersrptreqtq, cfgpersrptreqtq);
        break;
    }
    case BDMF_aes_configuration_1:
    {
        uint8_t prvUpstreamAesMode_1;
        err = ag_drv_epn_aes_configuration_1_get(parm[1].value.unumber, &prvUpstreamAesMode_1);
        bdmf_session_print(session, "prvUpstreamAesMode_1 = %u = 0x%x\n", prvUpstreamAesMode_1, prvUpstreamAesMode_1);
        break;
    }
    case BDMF_onu_pause_pfc_cfg:
    {
        epn_onu_pause_pfc_cfg onu_pause_pfc_cfg;
        err = ag_drv_epn_onu_pause_pfc_cfg_get(&onu_pause_pfc_cfg);
        bdmf_session_print(session, "cfgupfrefreshen = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfrefreshen, onu_pause_pfc_cfg.cfgupfrefreshen);
        bdmf_session_print(session, "cfgupfforcexoff = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfforcexoff, onu_pause_pfc_cfg.cfgupfforcexoff);
        bdmf_session_print(session, "cfgupfgengo = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfgengo, onu_pause_pfc_cfg.cfgupfgengo);
        bdmf_session_print(session, "cfgupfoveride = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfoveride, onu_pause_pfc_cfg.cfgupfoveride);
        bdmf_session_print(session, "cfgupftype = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupftype, onu_pause_pfc_cfg.cfgupftype);
        bdmf_session_print(session, "cfgupfen = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfen, onu_pause_pfc_cfg.cfgupfen);
        bdmf_session_print(session, "cfgupfasyncbypassen = %u = 0x%x\n", onu_pause_pfc_cfg.cfgupfasyncbypassen, onu_pause_pfc_cfg.cfgupfasyncbypassen);
        bdmf_session_print(session, "cfgdpfpfcusesa = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfpfcusesa, onu_pause_pfc_cfg.cfgdpfpfcusesa);
        bdmf_session_print(session, "cfgdpfforcexon = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfforcexon, onu_pause_pfc_cfg.cfgdpfforcexon);
        bdmf_session_print(session, "cfgdpfenable = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfenable, onu_pause_pfc_cfg.cfgdpfenable);
        bdmf_session_print(session, "cfgdpfoperatingmode = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfoperatingmode, onu_pause_pfc_cfg.cfgdpfoperatingmode);
        bdmf_session_print(session, "cfgdpfpacketpassthroughen = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfpacketpassthroughen, onu_pause_pfc_cfg.cfgdpfpacketpassthroughen);
        bdmf_session_print(session, "cfgdpfasyncbypassen = %u = 0x%x\n", onu_pause_pfc_cfg.cfgdpfasyncbypassen, onu_pause_pfc_cfg.cfgdpfasyncbypassen);
        break;
    }
    case BDMF_onu_pause_pfc_time_scale:
    {
        uint8_t cfgdpftimescale;
        err = ag_drv_epn_onu_pause_pfc_time_scale_get(&cfgdpftimescale);
        bdmf_session_print(session, "cfgdpftimescale = %u = 0x%x\n", cfgdpftimescale, cfgdpftimescale);
        break;
    }
    case BDMF_dpf_int_status:
    {
        epn_dpf_int_status dpf_int_status;
        err = ag_drv_epn_dpf_int_status_get(&dpf_int_status);
        bdmf_session_print(session, "intupfframesent = %u = 0x%x\n", dpf_int_status.intupfframesent, dpf_int_status.intupfframesent);
        bdmf_session_print(session, "intupfrefresh = %u = 0x%x\n", dpf_int_status.intupfrefresh, dpf_int_status.intupfrefresh);
        bdmf_session_print(session, "intupfreqcol = %u = 0x%x\n", dpf_int_status.intupfreqcol, dpf_int_status.intupfreqcol);
        bdmf_session_print(session, "intupfreqstatus = %u = 0x%x\n", dpf_int_status.intupfreqstatus, dpf_int_status.intupfreqstatus);
        bdmf_session_print(session, "intdpfrxframedropped = %u = 0x%x\n", dpf_int_status.intdpfrxframedropped, dpf_int_status.intdpfrxframedropped);
        bdmf_session_print(session, "intdpfrxframeabort = %u = 0x%x\n", dpf_int_status.intdpfrxframeabort, dpf_int_status.intdpfrxframeabort);
        bdmf_session_print(session, "intdpfrxframe = %u = 0x%x\n", dpf_int_status.intdpfrxframe, dpf_int_status.intdpfrxframe);
        break;
    }
    case BDMF_dpf_int_mask:
    {
        epn_dpf_int_mask dpf_int_mask;
        err = ag_drv_epn_dpf_int_mask_get(&dpf_int_mask);
        bdmf_session_print(session, "intupfframesentmask = %u = 0x%x\n", dpf_int_mask.intupfframesentmask, dpf_int_mask.intupfframesentmask);
        bdmf_session_print(session, "intupfrefreshmask = %u = 0x%x\n", dpf_int_mask.intupfrefreshmask, dpf_int_mask.intupfrefreshmask);
        bdmf_session_print(session, "intupfreqcolmask = %u = 0x%x\n", dpf_int_mask.intupfreqcolmask, dpf_int_mask.intupfreqcolmask);
        bdmf_session_print(session, "intupfreqstatusmask = %u = 0x%x\n", dpf_int_mask.intupfreqstatusmask, dpf_int_mask.intupfreqstatusmask);
        bdmf_session_print(session, "intdpfrxframedroppedmask = %u = 0x%x\n", dpf_int_mask.intdpfrxframedroppedmask, dpf_int_mask.intdpfrxframedroppedmask);
        bdmf_session_print(session, "intdpfrxframeabortmask = %u = 0x%x\n", dpf_int_mask.intdpfrxframeabortmask, dpf_int_mask.intdpfrxframeabortmask);
        bdmf_session_print(session, "intdpfrxframemask = %u = 0x%x\n", dpf_int_mask.intdpfrxframemask, dpf_int_mask.intdpfrxframemask);
        break;
    }
    case BDMF_burst_cap_0:
    {
        uint32_t burstcap0;
        err = ag_drv_epn_burst_cap_0_get(&burstcap0);
        bdmf_session_print(session, "burstcap0 = %u = 0x%x\n", burstcap0, burstcap0);
        break;
    }
    case BDMF_burst_cap_1:
    {
        uint32_t burstcap1;
        err = ag_drv_epn_burst_cap_1_get(&burstcap1);
        bdmf_session_print(session, "burstcap1 = %u = 0x%x\n", burstcap1, burstcap1);
        break;
    }
    case BDMF_burst_cap_2:
    {
        uint32_t burstcap2;
        err = ag_drv_epn_burst_cap_2_get(&burstcap2);
        bdmf_session_print(session, "burstcap2 = %u = 0x%x\n", burstcap2, burstcap2);
        break;
    }
    case BDMF_burst_cap_3:
    {
        uint32_t burstcap3;
        err = ag_drv_epn_burst_cap_3_get(&burstcap3);
        bdmf_session_print(session, "burstcap3 = %u = 0x%x\n", burstcap3, burstcap3);
        break;
    }
    case BDMF_burst_cap_4:
    {
        uint32_t burstcap4;
        err = ag_drv_epn_burst_cap_4_get(&burstcap4);
        bdmf_session_print(session, "burstcap4 = %u = 0x%x\n", burstcap4, burstcap4);
        break;
    }
    case BDMF_burst_cap_5:
    {
        uint32_t burstcap5;
        err = ag_drv_epn_burst_cap_5_get(&burstcap5);
        bdmf_session_print(session, "burstcap5 = %u = 0x%x\n", burstcap5, burstcap5);
        break;
    }
    case BDMF_burst_cap_6:
    {
        uint32_t burstcap6;
        err = ag_drv_epn_burst_cap_6_get(&burstcap6);
        bdmf_session_print(session, "burstcap6 = %u = 0x%x\n", burstcap6, burstcap6);
        break;
    }
    case BDMF_burst_cap_7:
    {
        uint32_t burstcap7;
        err = ag_drv_epn_burst_cap_7_get(&burstcap7);
        bdmf_session_print(session, "burstcap7 = %u = 0x%x\n", burstcap7, burstcap7);
        break;
    }
    case BDMF_queue_llid_map_0:
    {
        uint8_t quellidmap0;
        err = ag_drv_epn_queue_llid_map_0_get(&quellidmap0);
        bdmf_session_print(session, "quellidmap0 = %u = 0x%x\n", quellidmap0, quellidmap0);
        break;
    }
    case BDMF_queue_llid_map_1:
    {
        uint8_t quellidmap1;
        err = ag_drv_epn_queue_llid_map_1_get(&quellidmap1);
        bdmf_session_print(session, "quellidmap1 = %u = 0x%x\n", quellidmap1, quellidmap1);
        break;
    }
    case BDMF_queue_llid_map_2:
    {
        uint8_t quellidmap2;
        err = ag_drv_epn_queue_llid_map_2_get(&quellidmap2);
        bdmf_session_print(session, "quellidmap2 = %u = 0x%x\n", quellidmap2, quellidmap2);
        break;
    }
    case BDMF_queue_llid_map_3:
    {
        uint8_t quellidmap3;
        err = ag_drv_epn_queue_llid_map_3_get(&quellidmap3);
        bdmf_session_print(session, "quellidmap3 = %u = 0x%x\n", quellidmap3, quellidmap3);
        break;
    }
    case BDMF_queue_llid_map_4:
    {
        uint8_t quellidmap4;
        err = ag_drv_epn_queue_llid_map_4_get(&quellidmap4);
        bdmf_session_print(session, "quellidmap4 = %u = 0x%x\n", quellidmap4, quellidmap4);
        break;
    }
    case BDMF_queue_llid_map_5:
    {
        uint8_t quellidmap5;
        err = ag_drv_epn_queue_llid_map_5_get(&quellidmap5);
        bdmf_session_print(session, "quellidmap5 = %u = 0x%x\n", quellidmap5, quellidmap5);
        break;
    }
    case BDMF_queue_llid_map_6:
    {
        uint8_t quellidmap6;
        err = ag_drv_epn_queue_llid_map_6_get(&quellidmap6);
        bdmf_session_print(session, "quellidmap6 = %u = 0x%x\n", quellidmap6, quellidmap6);
        break;
    }
    case BDMF_queue_llid_map_7:
    {
        uint8_t quellidmap7;
        err = ag_drv_epn_queue_llid_map_7_get(&quellidmap7);
        bdmf_session_print(session, "quellidmap7 = %u = 0x%x\n", quellidmap7, quellidmap7);
        break;
    }
    case BDMF_unused_tq_cnt0:
    {
        uint32_t unusedtqcnt0;
        err = ag_drv_epn_unused_tq_cnt0_get(&unusedtqcnt0);
        bdmf_session_print(session, "unusedtqcnt0 = %u = 0x%x\n", unusedtqcnt0, unusedtqcnt0);
        break;
    }
    case BDMF_unused_tq_cnt1:
    {
        uint32_t unusedtqcnt1;
        err = ag_drv_epn_unused_tq_cnt1_get(&unusedtqcnt1);
        bdmf_session_print(session, "unusedtqcnt1 = %u = 0x%x\n", unusedtqcnt1, unusedtqcnt1);
        break;
    }
    case BDMF_unused_tq_cnt2:
    {
        uint32_t unusedtqcnt2;
        err = ag_drv_epn_unused_tq_cnt2_get(&unusedtqcnt2);
        bdmf_session_print(session, "unusedtqcnt2 = %u = 0x%x\n", unusedtqcnt2, unusedtqcnt2);
        break;
    }
    case BDMF_unused_tq_cnt3:
    {
        uint32_t unusedtqcnt3;
        err = ag_drv_epn_unused_tq_cnt3_get(&unusedtqcnt3);
        bdmf_session_print(session, "unusedtqcnt3 = %u = 0x%x\n", unusedtqcnt3, unusedtqcnt3);
        break;
    }
    case BDMF_unused_tq_cnt4:
    {
        uint32_t unusedtqcnt4;
        err = ag_drv_epn_unused_tq_cnt4_get(&unusedtqcnt4);
        bdmf_session_print(session, "unusedtqcnt4 = %u = 0x%x\n", unusedtqcnt4, unusedtqcnt4);
        break;
    }
    case BDMF_unused_tq_cnt5:
    {
        uint32_t unusedtqcnt5;
        err = ag_drv_epn_unused_tq_cnt5_get(&unusedtqcnt5);
        bdmf_session_print(session, "unusedtqcnt5 = %u = 0x%x\n", unusedtqcnt5, unusedtqcnt5);
        break;
    }
    case BDMF_unused_tq_cnt6:
    {
        uint32_t unusedtqcnt6;
        err = ag_drv_epn_unused_tq_cnt6_get(&unusedtqcnt6);
        bdmf_session_print(session, "unusedtqcnt6 = %u = 0x%x\n", unusedtqcnt6, unusedtqcnt6);
        break;
    }
    case BDMF_unused_tq_cnt7:
    {
        uint32_t unusedtqcnt7;
        err = ag_drv_epn_unused_tq_cnt7_get(&unusedtqcnt7);
        bdmf_session_print(session, "unusedtqcnt7 = %u = 0x%x\n", unusedtqcnt7, unusedtqcnt7);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_0:
    {
        uint16_t cfgshpmask0;
        err = ag_drv_epn_tx_l1s_shp_que_mask_0_get(&cfgshpmask0);
        bdmf_session_print(session, "cfgshpmask0 = %u = 0x%x\n", cfgshpmask0, cfgshpmask0);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_1:
    {
        uint16_t cfgshpmask1;
        err = ag_drv_epn_tx_l1s_shp_que_mask_1_get(&cfgshpmask1);
        bdmf_session_print(session, "cfgshpmask1 = %u = 0x%x\n", cfgshpmask1, cfgshpmask1);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_2:
    {
        uint16_t cfgshpmask2;
        err = ag_drv_epn_tx_l1s_shp_que_mask_2_get(&cfgshpmask2);
        bdmf_session_print(session, "cfgshpmask2 = %u = 0x%x\n", cfgshpmask2, cfgshpmask2);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_3:
    {
        uint16_t cfgshpmask3;
        err = ag_drv_epn_tx_l1s_shp_que_mask_3_get(&cfgshpmask3);
        bdmf_session_print(session, "cfgshpmask3 = %u = 0x%x\n", cfgshpmask3, cfgshpmask3);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_4:
    {
        uint16_t cfgshpmask4;
        err = ag_drv_epn_tx_l1s_shp_que_mask_4_get(&cfgshpmask4);
        bdmf_session_print(session, "cfgshpmask4 = %u = 0x%x\n", cfgshpmask4, cfgshpmask4);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_5:
    {
        uint16_t cfgshpmask5;
        err = ag_drv_epn_tx_l1s_shp_que_mask_5_get(&cfgshpmask5);
        bdmf_session_print(session, "cfgshpmask5 = %u = 0x%x\n", cfgshpmask5, cfgshpmask5);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_6:
    {
        uint16_t cfgshpmask6;
        err = ag_drv_epn_tx_l1s_shp_que_mask_6_get(&cfgshpmask6);
        bdmf_session_print(session, "cfgshpmask6 = %u = 0x%x\n", cfgshpmask6, cfgshpmask6);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_7:
    {
        uint16_t cfgshpmask7;
        err = ag_drv_epn_tx_l1s_shp_que_mask_7_get(&cfgshpmask7);
        bdmf_session_print(session, "cfgshpmask7 = %u = 0x%x\n", cfgshpmask7, cfgshpmask7);
        break;
    }
    case BDMF_tx_l2s_que_config_0:
    {
        uint16_t cfgl2squeend0;
        uint16_t cfgl2squestart0;
        err = ag_drv_epn_tx_l2s_que_config_0_get(&cfgl2squeend0, &cfgl2squestart0);
        bdmf_session_print(session, "cfgl2squeend0 = %u = 0x%x\n", cfgl2squeend0, cfgl2squeend0);
        bdmf_session_print(session, "cfgl2squestart0 = %u = 0x%x\n", cfgl2squestart0, cfgl2squestart0);
        break;
    }
    case BDMF_tx_l2s_que_config_1:
    {
        uint16_t cfgl2squeend1;
        uint16_t cfgl2squestart1;
        err = ag_drv_epn_tx_l2s_que_config_1_get(&cfgl2squeend1, &cfgl2squestart1);
        bdmf_session_print(session, "cfgl2squeend1 = %u = 0x%x\n", cfgl2squeend1, cfgl2squeend1);
        bdmf_session_print(session, "cfgl2squestart1 = %u = 0x%x\n", cfgl2squestart1, cfgl2squestart1);
        break;
    }
    case BDMF_tx_l2s_que_config_2:
    {
        uint16_t cfgl2squeend2;
        uint16_t cfgl2squestart2;
        err = ag_drv_epn_tx_l2s_que_config_2_get(&cfgl2squeend2, &cfgl2squestart2);
        bdmf_session_print(session, "cfgl2squeend2 = %u = 0x%x\n", cfgl2squeend2, cfgl2squeend2);
        bdmf_session_print(session, "cfgl2squestart2 = %u = 0x%x\n", cfgl2squestart2, cfgl2squestart2);
        break;
    }
    case BDMF_tx_l2s_que_config_3:
    {
        uint16_t cfgl2squeend3;
        uint16_t cfgl2squestart3;
        err = ag_drv_epn_tx_l2s_que_config_3_get(&cfgl2squeend3, &cfgl2squestart3);
        bdmf_session_print(session, "cfgl2squeend3 = %u = 0x%x\n", cfgl2squeend3, cfgl2squeend3);
        bdmf_session_print(session, "cfgl2squestart3 = %u = 0x%x\n", cfgl2squestart3, cfgl2squestart3);
        break;
    }
    case BDMF_tx_l2s_que_config_4:
    {
        uint16_t cfgl2squeend4;
        uint16_t cfgl2squestart4;
        err = ag_drv_epn_tx_l2s_que_config_4_get(&cfgl2squeend4, &cfgl2squestart4);
        bdmf_session_print(session, "cfgl2squeend4 = %u = 0x%x\n", cfgl2squeend4, cfgl2squeend4);
        bdmf_session_print(session, "cfgl2squestart4 = %u = 0x%x\n", cfgl2squestart4, cfgl2squestart4);
        break;
    }
    case BDMF_tx_l2s_que_config_5:
    {
        uint16_t cfgl2squeend5;
        uint16_t cfgl2squestart5;
        err = ag_drv_epn_tx_l2s_que_config_5_get(&cfgl2squeend5, &cfgl2squestart5);
        bdmf_session_print(session, "cfgl2squeend5 = %u = 0x%x\n", cfgl2squeend5, cfgl2squeend5);
        bdmf_session_print(session, "cfgl2squestart5 = %u = 0x%x\n", cfgl2squestart5, cfgl2squestart5);
        break;
    }
    case BDMF_tx_l2s_que_config_6:
    {
        uint16_t cfgl2squeend6;
        uint16_t cfgl2squestart6;
        err = ag_drv_epn_tx_l2s_que_config_6_get(&cfgl2squeend6, &cfgl2squestart6);
        bdmf_session_print(session, "cfgl2squeend6 = %u = 0x%x\n", cfgl2squeend6, cfgl2squeend6);
        bdmf_session_print(session, "cfgl2squestart6 = %u = 0x%x\n", cfgl2squestart6, cfgl2squestart6);
        break;
    }
    case BDMF_tx_l2s_que_config_7:
    {
        uint16_t cfgl2squeend7;
        uint16_t cfgl2squestart7;
        err = ag_drv_epn_tx_l2s_que_config_7_get(&cfgl2squeend7, &cfgl2squestart7);
        bdmf_session_print(session, "cfgl2squeend7 = %u = 0x%x\n", cfgl2squeend7, cfgl2squeend7);
        bdmf_session_print(session, "cfgl2squestart7 = %u = 0x%x\n", cfgl2squestart7, cfgl2squestart7);
        break;
    }
    case BDMF_tx_ctc_burst_limit_0:
    {
        uint32_t prvburstlimit0;
        err = ag_drv_epn_tx_ctc_burst_limit_0_get(&prvburstlimit0);
        bdmf_session_print(session, "prvburstlimit0 = %u = 0x%x\n", prvburstlimit0, prvburstlimit0);
        break;
    }
    case BDMF_tx_ctc_burst_limit_1:
    {
        uint32_t prvburstlimit1;
        err = ag_drv_epn_tx_ctc_burst_limit_1_get(&prvburstlimit1);
        bdmf_session_print(session, "prvburstlimit1 = %u = 0x%x\n", prvburstlimit1, prvburstlimit1);
        break;
    }
    case BDMF_tx_ctc_burst_limit_2:
    {
        uint32_t prvburstlimit2;
        err = ag_drv_epn_tx_ctc_burst_limit_2_get(&prvburstlimit2);
        bdmf_session_print(session, "prvburstlimit2 = %u = 0x%x\n", prvburstlimit2, prvburstlimit2);
        break;
    }
    case BDMF_tx_ctc_burst_limit_3:
    {
        uint32_t prvburstlimit3;
        err = ag_drv_epn_tx_ctc_burst_limit_3_get(&prvburstlimit3);
        bdmf_session_print(session, "prvburstlimit3 = %u = 0x%x\n", prvburstlimit3, prvburstlimit3);
        break;
    }
    case BDMF_tx_ctc_burst_limit_4:
    {
        uint32_t prvburstlimit4;
        err = ag_drv_epn_tx_ctc_burst_limit_4_get(&prvburstlimit4);
        bdmf_session_print(session, "prvburstlimit4 = %u = 0x%x\n", prvburstlimit4, prvburstlimit4);
        break;
    }
    case BDMF_tx_ctc_burst_limit_5:
    {
        uint32_t prvburstlimit5;
        err = ag_drv_epn_tx_ctc_burst_limit_5_get(&prvburstlimit5);
        bdmf_session_print(session, "prvburstlimit5 = %u = 0x%x\n", prvburstlimit5, prvburstlimit5);
        break;
    }
    case BDMF_tx_ctc_burst_limit_6:
    {
        uint32_t prvburstlimit6;
        err = ag_drv_epn_tx_ctc_burst_limit_6_get(&prvburstlimit6);
        bdmf_session_print(session, "prvburstlimit6 = %u = 0x%x\n", prvburstlimit6, prvburstlimit6);
        break;
    }
    case BDMF_tx_ctc_burst_limit_7:
    {
        uint32_t prvburstlimit7;
        err = ag_drv_epn_tx_ctc_burst_limit_7_get(&prvburstlimit7);
        bdmf_session_print(session, "prvburstlimit7 = %u = 0x%x\n", prvburstlimit7, prvburstlimit7);
        break;
    }
    case BDMF_burst_cap_8:
    {
        uint32_t burstcap8;
        err = ag_drv_epn_burst_cap_8_get(&burstcap8);
        bdmf_session_print(session, "burstcap8 = %u = 0x%x\n", burstcap8, burstcap8);
        break;
    }
    case BDMF_burst_cap_9:
    {
        uint32_t burstcap9;
        err = ag_drv_epn_burst_cap_9_get(&burstcap9);
        bdmf_session_print(session, "burstcap9 = %u = 0x%x\n", burstcap9, burstcap9);
        break;
    }
    case BDMF_burst_cap_10:
    {
        uint32_t burstcap10;
        err = ag_drv_epn_burst_cap_10_get(&burstcap10);
        bdmf_session_print(session, "burstcap10 = %u = 0x%x\n", burstcap10, burstcap10);
        break;
    }
    case BDMF_burst_cap_11:
    {
        uint32_t burstcap11;
        err = ag_drv_epn_burst_cap_11_get(&burstcap11);
        bdmf_session_print(session, "burstcap11 = %u = 0x%x\n", burstcap11, burstcap11);
        break;
    }
    case BDMF_burst_cap_12:
    {
        uint32_t burstcap12;
        err = ag_drv_epn_burst_cap_12_get(&burstcap12);
        bdmf_session_print(session, "burstcap12 = %u = 0x%x\n", burstcap12, burstcap12);
        break;
    }
    case BDMF_burst_cap_13:
    {
        uint32_t burstcap13;
        err = ag_drv_epn_burst_cap_13_get(&burstcap13);
        bdmf_session_print(session, "burstcap13 = %u = 0x%x\n", burstcap13, burstcap13);
        break;
    }
    case BDMF_burst_cap_14:
    {
        uint32_t burstcap14;
        err = ag_drv_epn_burst_cap_14_get(&burstcap14);
        bdmf_session_print(session, "burstcap14 = %u = 0x%x\n", burstcap14, burstcap14);
        break;
    }
    case BDMF_burst_cap_15:
    {
        uint32_t burstcap15;
        err = ag_drv_epn_burst_cap_15_get(&burstcap15);
        bdmf_session_print(session, "burstcap15 = %u = 0x%x\n", burstcap15, burstcap15);
        break;
    }
    case BDMF_queue_llid_map_8:
    {
        uint8_t quellidmap8;
        err = ag_drv_epn_queue_llid_map_8_get(&quellidmap8);
        bdmf_session_print(session, "quellidmap8 = %u = 0x%x\n", quellidmap8, quellidmap8);
        break;
    }
    case BDMF_queue_llid_map_9:
    {
        uint8_t quellidmap9;
        err = ag_drv_epn_queue_llid_map_9_get(&quellidmap9);
        bdmf_session_print(session, "quellidmap9 = %u = 0x%x\n", quellidmap9, quellidmap9);
        break;
    }
    case BDMF_queue_llid_map_10:
    {
        uint8_t quellidmap10;
        err = ag_drv_epn_queue_llid_map_10_get(&quellidmap10);
        bdmf_session_print(session, "quellidmap10 = %u = 0x%x\n", quellidmap10, quellidmap10);
        break;
    }
    case BDMF_queue_llid_map_11:
    {
        uint8_t quellidmap11;
        err = ag_drv_epn_queue_llid_map_11_get(&quellidmap11);
        bdmf_session_print(session, "quellidmap11 = %u = 0x%x\n", quellidmap11, quellidmap11);
        break;
    }
    case BDMF_queue_llid_map_12:
    {
        uint8_t quellidmap12;
        err = ag_drv_epn_queue_llid_map_12_get(&quellidmap12);
        bdmf_session_print(session, "quellidmap12 = %u = 0x%x\n", quellidmap12, quellidmap12);
        break;
    }
    case BDMF_queue_llid_map_13:
    {
        uint8_t quellidmap13;
        err = ag_drv_epn_queue_llid_map_13_get(&quellidmap13);
        bdmf_session_print(session, "quellidmap13 = %u = 0x%x\n", quellidmap13, quellidmap13);
        break;
    }
    case BDMF_queue_llid_map_14:
    {
        uint8_t quellidmap14;
        err = ag_drv_epn_queue_llid_map_14_get(&quellidmap14);
        bdmf_session_print(session, "quellidmap14 = %u = 0x%x\n", quellidmap14, quellidmap14);
        break;
    }
    case BDMF_queue_llid_map_15:
    {
        uint8_t quellidmap15;
        err = ag_drv_epn_queue_llid_map_15_get(&quellidmap15);
        bdmf_session_print(session, "quellidmap15 = %u = 0x%x\n", quellidmap15, quellidmap15);
        break;
    }
    case BDMF_unused_tq_cnt8:
    {
        uint32_t unusedtqcnt8;
        err = ag_drv_epn_unused_tq_cnt8_get(&unusedtqcnt8);
        bdmf_session_print(session, "unusedtqcnt8 = %u = 0x%x\n", unusedtqcnt8, unusedtqcnt8);
        break;
    }
    case BDMF_unused_tq_cnt9:
    {
        uint32_t unusedtqcnt9;
        err = ag_drv_epn_unused_tq_cnt9_get(&unusedtqcnt9);
        bdmf_session_print(session, "unusedtqcnt9 = %u = 0x%x\n", unusedtqcnt9, unusedtqcnt9);
        break;
    }
    case BDMF_unused_tq_cnt10:
    {
        uint32_t unusedtqcnt10;
        err = ag_drv_epn_unused_tq_cnt10_get(&unusedtqcnt10);
        bdmf_session_print(session, "unusedtqcnt10 = %u = 0x%x\n", unusedtqcnt10, unusedtqcnt10);
        break;
    }
    case BDMF_unused_tq_cnt11:
    {
        uint32_t unusedtqcnt11;
        err = ag_drv_epn_unused_tq_cnt11_get(&unusedtqcnt11);
        bdmf_session_print(session, "unusedtqcnt11 = %u = 0x%x\n", unusedtqcnt11, unusedtqcnt11);
        break;
    }
    case BDMF_unused_tq_cnt12:
    {
        uint32_t unusedtqcnt12;
        err = ag_drv_epn_unused_tq_cnt12_get(&unusedtqcnt12);
        bdmf_session_print(session, "unusedtqcnt12 = %u = 0x%x\n", unusedtqcnt12, unusedtqcnt12);
        break;
    }
    case BDMF_unused_tq_cnt13:
    {
        uint32_t unusedtqcnt13;
        err = ag_drv_epn_unused_tq_cnt13_get(&unusedtqcnt13);
        bdmf_session_print(session, "unusedtqcnt13 = %u = 0x%x\n", unusedtqcnt13, unusedtqcnt13);
        break;
    }
    case BDMF_unused_tq_cnt14:
    {
        uint32_t unusedtqcnt14;
        err = ag_drv_epn_unused_tq_cnt14_get(&unusedtqcnt14);
        bdmf_session_print(session, "unusedtqcnt14 = %u = 0x%x\n", unusedtqcnt14, unusedtqcnt14);
        break;
    }
    case BDMF_unused_tq_cnt15:
    {
        uint32_t unusedtqcnt15;
        err = ag_drv_epn_unused_tq_cnt15_get(&unusedtqcnt15);
        bdmf_session_print(session, "unusedtqcnt15 = %u = 0x%x\n", unusedtqcnt15, unusedtqcnt15);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_8:
    {
        uint16_t cfgshpmask8;
        err = ag_drv_epn_tx_l1s_shp_que_mask_8_get(&cfgshpmask8);
        bdmf_session_print(session, "cfgshpmask8 = %u = 0x%x\n", cfgshpmask8, cfgshpmask8);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_9:
    {
        uint16_t cfgshpmask9;
        err = ag_drv_epn_tx_l1s_shp_que_mask_9_get(&cfgshpmask9);
        bdmf_session_print(session, "cfgshpmask9 = %u = 0x%x\n", cfgshpmask9, cfgshpmask9);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_10:
    {
        uint16_t cfgshpmask10;
        err = ag_drv_epn_tx_l1s_shp_que_mask_10_get(&cfgshpmask10);
        bdmf_session_print(session, "cfgshpmask10 = %u = 0x%x\n", cfgshpmask10, cfgshpmask10);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_11:
    {
        uint16_t cfgshpmask11;
        err = ag_drv_epn_tx_l1s_shp_que_mask_11_get(&cfgshpmask11);
        bdmf_session_print(session, "cfgshpmask11 = %u = 0x%x\n", cfgshpmask11, cfgshpmask11);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_12:
    {
        uint16_t cfgshpmask12;
        err = ag_drv_epn_tx_l1s_shp_que_mask_12_get(&cfgshpmask12);
        bdmf_session_print(session, "cfgshpmask12 = %u = 0x%x\n", cfgshpmask12, cfgshpmask12);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_13:
    {
        uint16_t cfgshpmask13;
        err = ag_drv_epn_tx_l1s_shp_que_mask_13_get(&cfgshpmask13);
        bdmf_session_print(session, "cfgshpmask13 = %u = 0x%x\n", cfgshpmask13, cfgshpmask13);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_14:
    {
        uint16_t cfgshpmask14;
        err = ag_drv_epn_tx_l1s_shp_que_mask_14_get(&cfgshpmask14);
        bdmf_session_print(session, "cfgshpmask14 = %u = 0x%x\n", cfgshpmask14, cfgshpmask14);
        break;
    }
    case BDMF_tx_l1s_shp_que_mask_15:
    {
        uint16_t cfgshpmask15;
        err = ag_drv_epn_tx_l1s_shp_que_mask_15_get(&cfgshpmask15);
        bdmf_session_print(session, "cfgshpmask15 = %u = 0x%x\n", cfgshpmask15, cfgshpmask15);
        break;
    }
    case BDMF_tx_l2s_que_config_8:
    {
        uint16_t cfgl2squeend8;
        uint16_t cfgl2squestart8;
        err = ag_drv_epn_tx_l2s_que_config_8_get(&cfgl2squeend8, &cfgl2squestart8);
        bdmf_session_print(session, "cfgl2squeend8 = %u = 0x%x\n", cfgl2squeend8, cfgl2squeend8);
        bdmf_session_print(session, "cfgl2squestart8 = %u = 0x%x\n", cfgl2squestart8, cfgl2squestart8);
        break;
    }
    case BDMF_tx_l2s_que_config_9:
    {
        uint16_t cfgl2squeend9;
        uint16_t cfgl2squestart9;
        err = ag_drv_epn_tx_l2s_que_config_9_get(&cfgl2squeend9, &cfgl2squestart9);
        bdmf_session_print(session, "cfgl2squeend9 = %u = 0x%x\n", cfgl2squeend9, cfgl2squeend9);
        bdmf_session_print(session, "cfgl2squestart9 = %u = 0x%x\n", cfgl2squestart9, cfgl2squestart9);
        break;
    }
    case BDMF_tx_l2s_que_config_10:
    {
        uint16_t cfgl2squeend10;
        uint16_t cfgl2squestart10;
        err = ag_drv_epn_tx_l2s_que_config_10_get(&cfgl2squeend10, &cfgl2squestart10);
        bdmf_session_print(session, "cfgl2squeend10 = %u = 0x%x\n", cfgl2squeend10, cfgl2squeend10);
        bdmf_session_print(session, "cfgl2squestart10 = %u = 0x%x\n", cfgl2squestart10, cfgl2squestart10);
        break;
    }
    case BDMF_tx_l2s_que_config_11:
    {
        uint16_t cfgl2squeend11;
        uint16_t cfgl2squestart11;
        err = ag_drv_epn_tx_l2s_que_config_11_get(&cfgl2squeend11, &cfgl2squestart11);
        bdmf_session_print(session, "cfgl2squeend11 = %u = 0x%x\n", cfgl2squeend11, cfgl2squeend11);
        bdmf_session_print(session, "cfgl2squestart11 = %u = 0x%x\n", cfgl2squestart11, cfgl2squestart11);
        break;
    }
    case BDMF_tx_l2s_que_config_12:
    {
        uint16_t cfgl2squeend12;
        uint16_t cfgl2squestart12;
        err = ag_drv_epn_tx_l2s_que_config_12_get(&cfgl2squeend12, &cfgl2squestart12);
        bdmf_session_print(session, "cfgl2squeend12 = %u = 0x%x\n", cfgl2squeend12, cfgl2squeend12);
        bdmf_session_print(session, "cfgl2squestart12 = %u = 0x%x\n", cfgl2squestart12, cfgl2squestart12);
        break;
    }
    case BDMF_tx_l2s_que_config_13:
    {
        uint16_t cfgl2squeend13;
        uint16_t cfgl2squestart13;
        err = ag_drv_epn_tx_l2s_que_config_13_get(&cfgl2squeend13, &cfgl2squestart13);
        bdmf_session_print(session, "cfgl2squeend13 = %u = 0x%x\n", cfgl2squeend13, cfgl2squeend13);
        bdmf_session_print(session, "cfgl2squestart13 = %u = 0x%x\n", cfgl2squestart13, cfgl2squestart13);
        break;
    }
    case BDMF_tx_l2s_que_config_14:
    {
        uint16_t cfgl2squeend14;
        uint16_t cfgl2squestart14;
        err = ag_drv_epn_tx_l2s_que_config_14_get(&cfgl2squeend14, &cfgl2squestart14);
        bdmf_session_print(session, "cfgl2squeend14 = %u = 0x%x\n", cfgl2squeend14, cfgl2squeend14);
        bdmf_session_print(session, "cfgl2squestart14 = %u = 0x%x\n", cfgl2squestart14, cfgl2squestart14);
        break;
    }
    case BDMF_tx_l2s_que_config_15:
    {
        uint16_t cfgl2squeend15;
        uint16_t cfgl2squestart15;
        err = ag_drv_epn_tx_l2s_que_config_15_get(&cfgl2squeend15, &cfgl2squestart15);
        bdmf_session_print(session, "cfgl2squeend15 = %u = 0x%x\n", cfgl2squeend15, cfgl2squeend15);
        bdmf_session_print(session, "cfgl2squestart15 = %u = 0x%x\n", cfgl2squestart15, cfgl2squestart15);
        break;
    }
    case BDMF_tx_ctc_burst_limit_8:
    {
        uint32_t prvburstlimit8;
        err = ag_drv_epn_tx_ctc_burst_limit_8_get(&prvburstlimit8);
        bdmf_session_print(session, "prvburstlimit8 = %u = 0x%x\n", prvburstlimit8, prvburstlimit8);
        break;
    }
    case BDMF_tx_ctc_burst_limit_9:
    {
        uint32_t prvburstlimit9;
        err = ag_drv_epn_tx_ctc_burst_limit_9_get(&prvburstlimit9);
        bdmf_session_print(session, "prvburstlimit9 = %u = 0x%x\n", prvburstlimit9, prvburstlimit9);
        break;
    }
    case BDMF_tx_ctc_burst_limit_10:
    {
        uint32_t prvburstlimit10;
        err = ag_drv_epn_tx_ctc_burst_limit_10_get(&prvburstlimit10);
        bdmf_session_print(session, "prvburstlimit10 = %u = 0x%x\n", prvburstlimit10, prvburstlimit10);
        break;
    }
    case BDMF_tx_ctc_burst_limit_11:
    {
        uint32_t prvburstlimit11;
        err = ag_drv_epn_tx_ctc_burst_limit_11_get(&prvburstlimit11);
        bdmf_session_print(session, "prvburstlimit11 = %u = 0x%x\n", prvburstlimit11, prvburstlimit11);
        break;
    }
    case BDMF_tx_ctc_burst_limit_12:
    {
        uint32_t prvburstlimit12;
        err = ag_drv_epn_tx_ctc_burst_limit_12_get(&prvburstlimit12);
        bdmf_session_print(session, "prvburstlimit12 = %u = 0x%x\n", prvburstlimit12, prvburstlimit12);
        break;
    }
    case BDMF_tx_ctc_burst_limit_13:
    {
        uint32_t prvburstlimit13;
        err = ag_drv_epn_tx_ctc_burst_limit_13_get(&prvburstlimit13);
        bdmf_session_print(session, "prvburstlimit13 = %u = 0x%x\n", prvburstlimit13, prvburstlimit13);
        break;
    }
    case BDMF_tx_ctc_burst_limit_14:
    {
        uint32_t prvburstlimit14;
        err = ag_drv_epn_tx_ctc_burst_limit_14_get(&prvburstlimit14);
        bdmf_session_print(session, "prvburstlimit14 = %u = 0x%x\n", prvburstlimit14, prvburstlimit14);
        break;
    }
    case BDMF_tx_ctc_burst_limit_15:
    {
        uint32_t prvburstlimit15;
        err = ag_drv_epn_tx_ctc_burst_limit_15_get(&prvburstlimit15);
        bdmf_session_print(session, "prvburstlimit15 = %u = 0x%x\n", prvburstlimit15, prvburstlimit15);
        break;
    }
    case BDMF_10g_abc_size0:
    {
        uint16_t cfgaddburstcap0_2;
        uint16_t cfgaddburstcap0_1;
        err = ag_drv_epn_10g_abc_size0_get(&cfgaddburstcap0_2, &cfgaddburstcap0_1);
        bdmf_session_print(session, "cfgaddburstcap0_2 = %u = 0x%x\n", cfgaddburstcap0_2, cfgaddburstcap0_2);
        bdmf_session_print(session, "cfgaddburstcap0_1 = %u = 0x%x\n", cfgaddburstcap0_1, cfgaddburstcap0_1);
        break;
    }
    case BDMF_10g_abc_size1:
    {
        uint16_t cfgaddburstcap1_1;
        uint16_t cfgaddburstcap0_3;
        err = ag_drv_epn_10g_abc_size1_get(&cfgaddburstcap1_1, &cfgaddburstcap0_3);
        bdmf_session_print(session, "cfgaddburstcap1_1 = %u = 0x%x\n", cfgaddburstcap1_1, cfgaddburstcap1_1);
        bdmf_session_print(session, "cfgaddburstcap0_3 = %u = 0x%x\n", cfgaddburstcap0_3, cfgaddburstcap0_3);
        break;
    }
    case BDMF_10g_abc_size2:
    {
        uint16_t cfgaddburstcap1_3;
        uint16_t cfgaddburstcap1_2;
        err = ag_drv_epn_10g_abc_size2_get(&cfgaddburstcap1_3, &cfgaddburstcap1_2);
        bdmf_session_print(session, "cfgaddburstcap1_3 = %u = 0x%x\n", cfgaddburstcap1_3, cfgaddburstcap1_3);
        bdmf_session_print(session, "cfgaddburstcap1_2 = %u = 0x%x\n", cfgaddburstcap1_2, cfgaddburstcap1_2);
        break;
    }
    case BDMF_10g_abc_size3:
    {
        uint16_t cfgaddburstcap2_2;
        uint16_t cfgaddburstcap2_1;
        err = ag_drv_epn_10g_abc_size3_get(&cfgaddburstcap2_2, &cfgaddburstcap2_1);
        bdmf_session_print(session, "cfgaddburstcap2_2 = %u = 0x%x\n", cfgaddburstcap2_2, cfgaddburstcap2_2);
        bdmf_session_print(session, "cfgaddburstcap2_1 = %u = 0x%x\n", cfgaddburstcap2_1, cfgaddburstcap2_1);
        break;
    }
    case BDMF_10g_abc_size4:
    {
        uint16_t cfgaddburstcap3_1;
        uint16_t cfgaddburstcap2_3;
        err = ag_drv_epn_10g_abc_size4_get(&cfgaddburstcap3_1, &cfgaddburstcap2_3);
        bdmf_session_print(session, "cfgaddburstcap3_1 = %u = 0x%x\n", cfgaddburstcap3_1, cfgaddburstcap3_1);
        bdmf_session_print(session, "cfgaddburstcap2_3 = %u = 0x%x\n", cfgaddburstcap2_3, cfgaddburstcap2_3);
        break;
    }
    case BDMF_10g_abc_size5:
    {
        uint16_t cfgaddburstcap3_3;
        uint16_t cfgaddburstcap3_2;
        err = ag_drv_epn_10g_abc_size5_get(&cfgaddburstcap3_3, &cfgaddburstcap3_2);
        bdmf_session_print(session, "cfgaddburstcap3_3 = %u = 0x%x\n", cfgaddburstcap3_3, cfgaddburstcap3_3);
        bdmf_session_print(session, "cfgaddburstcap3_2 = %u = 0x%x\n", cfgaddburstcap3_2, cfgaddburstcap3_2);
        break;
    }
    case BDMF_10g_abc_size6:
    {
        uint16_t cfgaddburstcap4_2;
        uint16_t cfgaddburstcap4_1;
        err = ag_drv_epn_10g_abc_size6_get(&cfgaddburstcap4_2, &cfgaddburstcap4_1);
        bdmf_session_print(session, "cfgaddburstcap4_2 = %u = 0x%x\n", cfgaddburstcap4_2, cfgaddburstcap4_2);
        bdmf_session_print(session, "cfgaddburstcap4_1 = %u = 0x%x\n", cfgaddburstcap4_1, cfgaddburstcap4_1);
        break;
    }
    case BDMF_10g_abc_size7:
    {
        uint16_t cfgaddburstcap5_1;
        uint16_t cfgaddburstcap4_3;
        err = ag_drv_epn_10g_abc_size7_get(&cfgaddburstcap5_1, &cfgaddburstcap4_3);
        bdmf_session_print(session, "cfgaddburstcap5_1 = %u = 0x%x\n", cfgaddburstcap5_1, cfgaddburstcap5_1);
        bdmf_session_print(session, "cfgaddburstcap4_3 = %u = 0x%x\n", cfgaddburstcap4_3, cfgaddburstcap4_3);
        break;
    }
    case BDMF_10g_abc_size8:
    {
        uint16_t cfgaddburstcap5_3;
        uint16_t cfgaddburstcap5_2;
        err = ag_drv_epn_10g_abc_size8_get(&cfgaddburstcap5_3, &cfgaddburstcap5_2);
        bdmf_session_print(session, "cfgaddburstcap5_3 = %u = 0x%x\n", cfgaddburstcap5_3, cfgaddburstcap5_3);
        bdmf_session_print(session, "cfgaddburstcap5_2 = %u = 0x%x\n", cfgaddburstcap5_2, cfgaddburstcap5_2);
        break;
    }
    case BDMF_10g_abc_size9:
    {
        uint16_t cfgaddburstcap6_2;
        uint16_t cfgaddburstcap6_1;
        err = ag_drv_epn_10g_abc_size9_get(&cfgaddburstcap6_2, &cfgaddburstcap6_1);
        bdmf_session_print(session, "cfgaddburstcap6_2 = %u = 0x%x\n", cfgaddburstcap6_2, cfgaddburstcap6_2);
        bdmf_session_print(session, "cfgaddburstcap6_1 = %u = 0x%x\n", cfgaddburstcap6_1, cfgaddburstcap6_1);
        break;
    }
    case BDMF_10g_abc_size10:
    {
        uint16_t cfgaddburstcap7_1;
        uint16_t cfgaddburstcap6_3;
        err = ag_drv_epn_10g_abc_size10_get(&cfgaddburstcap7_1, &cfgaddburstcap6_3);
        bdmf_session_print(session, "cfgaddburstcap7_1 = %u = 0x%x\n", cfgaddburstcap7_1, cfgaddburstcap7_1);
        bdmf_session_print(session, "cfgaddburstcap6_3 = %u = 0x%x\n", cfgaddburstcap6_3, cfgaddburstcap6_3);
        break;
    }
    case BDMF_10g_abc_size11:
    {
        uint16_t cfgaddburstcap7_3;
        uint16_t cfgaddburstcap7_2;
        err = ag_drv_epn_10g_abc_size11_get(&cfgaddburstcap7_3, &cfgaddburstcap7_2);
        bdmf_session_print(session, "cfgaddburstcap7_3 = %u = 0x%x\n", cfgaddburstcap7_3, cfgaddburstcap7_3);
        bdmf_session_print(session, "cfgaddburstcap7_2 = %u = 0x%x\n", cfgaddburstcap7_2, cfgaddburstcap7_2);
        break;
    }
    case BDMF_10g_abc_size12:
    {
        uint16_t cfgaddburstcap8_2;
        uint16_t cfgaddburstcap8_1;
        err = ag_drv_epn_10g_abc_size12_get(&cfgaddburstcap8_2, &cfgaddburstcap8_1);
        bdmf_session_print(session, "cfgaddburstcap8_2 = %u = 0x%x\n", cfgaddburstcap8_2, cfgaddburstcap8_2);
        bdmf_session_print(session, "cfgaddburstcap8_1 = %u = 0x%x\n", cfgaddburstcap8_1, cfgaddburstcap8_1);
        break;
    }
    case BDMF_10g_abc_size13:
    {
        uint16_t cfgaddburstcap9_1;
        uint16_t cfgaddburstcap8_3;
        err = ag_drv_epn_10g_abc_size13_get(&cfgaddburstcap9_1, &cfgaddburstcap8_3);
        bdmf_session_print(session, "cfgaddburstcap9_1 = %u = 0x%x\n", cfgaddburstcap9_1, cfgaddburstcap9_1);
        bdmf_session_print(session, "cfgaddburstcap8_3 = %u = 0x%x\n", cfgaddburstcap8_3, cfgaddburstcap8_3);
        break;
    }
    case BDMF_10g_abc_size14:
    {
        uint16_t cfgaddburstcap9_3;
        uint16_t cfgaddburstcap9_2;
        err = ag_drv_epn_10g_abc_size14_get(&cfgaddburstcap9_3, &cfgaddburstcap9_2);
        bdmf_session_print(session, "cfgaddburstcap9_3 = %u = 0x%x\n", cfgaddburstcap9_3, cfgaddburstcap9_3);
        bdmf_session_print(session, "cfgaddburstcap9_2 = %u = 0x%x\n", cfgaddburstcap9_2, cfgaddburstcap9_2);
        break;
    }
    case BDMF_10g_abc_size15:
    {
        uint16_t cfgaddburstcap10_2;
        uint16_t cfgaddburstcap10_1;
        err = ag_drv_epn_10g_abc_size15_get(&cfgaddburstcap10_2, &cfgaddburstcap10_1);
        bdmf_session_print(session, "cfgaddburstcap10_2 = %u = 0x%x\n", cfgaddburstcap10_2, cfgaddburstcap10_2);
        bdmf_session_print(session, "cfgaddburstcap10_1 = %u = 0x%x\n", cfgaddburstcap10_1, cfgaddburstcap10_1);
        break;
    }
    case BDMF_10g_abc_size16:
    {
        uint16_t cfgaddburstcap11_1;
        uint16_t cfgaddburstcap10_3;
        err = ag_drv_epn_10g_abc_size16_get(&cfgaddburstcap11_1, &cfgaddburstcap10_3);
        bdmf_session_print(session, "cfgaddburstcap11_1 = %u = 0x%x\n", cfgaddburstcap11_1, cfgaddburstcap11_1);
        bdmf_session_print(session, "cfgaddburstcap10_3 = %u = 0x%x\n", cfgaddburstcap10_3, cfgaddburstcap10_3);
        break;
    }
    case BDMF_10g_abc_size17:
    {
        uint16_t cfgaddburstcap11_3;
        uint16_t cfgaddburstcap11_2;
        err = ag_drv_epn_10g_abc_size17_get(&cfgaddburstcap11_3, &cfgaddburstcap11_2);
        bdmf_session_print(session, "cfgaddburstcap11_3 = %u = 0x%x\n", cfgaddburstcap11_3, cfgaddburstcap11_3);
        bdmf_session_print(session, "cfgaddburstcap11_2 = %u = 0x%x\n", cfgaddburstcap11_2, cfgaddburstcap11_2);
        break;
    }
    case BDMF_10g_abc_size18:
    {
        uint16_t cfgaddburstcap12_2;
        uint16_t cfgaddburstcap12_1;
        err = ag_drv_epn_10g_abc_size18_get(&cfgaddburstcap12_2, &cfgaddburstcap12_1);
        bdmf_session_print(session, "cfgaddburstcap12_2 = %u = 0x%x\n", cfgaddburstcap12_2, cfgaddburstcap12_2);
        bdmf_session_print(session, "cfgaddburstcap12_1 = %u = 0x%x\n", cfgaddburstcap12_1, cfgaddburstcap12_1);
        break;
    }
    case BDMF_10g_abc_size19:
    {
        uint16_t cfgaddburstcap13_1;
        uint16_t cfgaddburstcap12_3;
        err = ag_drv_epn_10g_abc_size19_get(&cfgaddburstcap13_1, &cfgaddburstcap12_3);
        bdmf_session_print(session, "cfgaddburstcap13_1 = %u = 0x%x\n", cfgaddburstcap13_1, cfgaddburstcap13_1);
        bdmf_session_print(session, "cfgaddburstcap12_3 = %u = 0x%x\n", cfgaddburstcap12_3, cfgaddburstcap12_3);
        break;
    }
    case BDMF_10g_abc_size20:
    {
        uint16_t cfgaddburstcap13_3;
        uint16_t cfgaddburstcap13_2;
        err = ag_drv_epn_10g_abc_size20_get(&cfgaddburstcap13_3, &cfgaddburstcap13_2);
        bdmf_session_print(session, "cfgaddburstcap13_3 = %u = 0x%x\n", cfgaddburstcap13_3, cfgaddburstcap13_3);
        bdmf_session_print(session, "cfgaddburstcap13_2 = %u = 0x%x\n", cfgaddburstcap13_2, cfgaddburstcap13_2);
        break;
    }
    case BDMF_10g_abc_size21:
    {
        uint16_t cfgaddburstcap14_2;
        uint16_t cfgaddburstcap14_1;
        err = ag_drv_epn_10g_abc_size21_get(&cfgaddburstcap14_2, &cfgaddburstcap14_1);
        bdmf_session_print(session, "cfgaddburstcap14_2 = %u = 0x%x\n", cfgaddburstcap14_2, cfgaddburstcap14_2);
        bdmf_session_print(session, "cfgaddburstcap14_1 = %u = 0x%x\n", cfgaddburstcap14_1, cfgaddburstcap14_1);
        break;
    }
    case BDMF_10g_abc_size22:
    {
        uint16_t cfgaddburstcap15_1;
        uint16_t cfgaddburstcap14_3;
        err = ag_drv_epn_10g_abc_size22_get(&cfgaddburstcap15_1, &cfgaddburstcap14_3);
        bdmf_session_print(session, "cfgaddburstcap15_1 = %u = 0x%x\n", cfgaddburstcap15_1, cfgaddburstcap15_1);
        bdmf_session_print(session, "cfgaddburstcap14_3 = %u = 0x%x\n", cfgaddburstcap14_3, cfgaddburstcap14_3);
        break;
    }
    case BDMF_10g_abc_size23:
    {
        uint16_t cfgaddburstcap15_3;
        uint16_t cfgaddburstcap15_2;
        err = ag_drv_epn_10g_abc_size23_get(&cfgaddburstcap15_3, &cfgaddburstcap15_2);
        bdmf_session_print(session, "cfgaddburstcap15_3 = %u = 0x%x\n", cfgaddburstcap15_3, cfgaddburstcap15_3);
        bdmf_session_print(session, "cfgaddburstcap15_2 = %u = 0x%x\n", cfgaddburstcap15_2, cfgaddburstcap15_2);
        break;
    }
    default:
        err = BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    return err;
}

static int bcm_epn_cli_test(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_test_method m = parm[0].value.unumber;
    bdmf_error_t err = BDMF_ERR_OK;

    {
        epn_control_0 control_0 = {.cfgen1588ts=gtmv(m, 1), .cfgreplaceupfcs=gtmv(m, 1), .cfgappendupfcs=gtmv(m, 1), .cfgdropscb=gtmv(m, 1), .moduncappedreportlimit=gtmv(m, 1), .modmpquesetfirst=gtmv(m, 1), .prvlocalmpcppropagation=gtmv(m, 1), .prvtekmodeprefetch=gtmv(m, 1), .prvincnonzeroaccum=gtmv(m, 1), .prvnounmapppedfcs=gtmv(m, 1), .prvsupressdiscen=gtmv(m, 1), .cfgvlanmax=gtmv(m, 1), .fcserronlydatafr=gtmv(m, 1), .prvdropunmapppedllid=gtmv(m, 1), .prvsuppressllidmodebit=gtmv(m, 1), .moddiscoverydafilteren=gtmv(m, 1), .rptselect=gtmv(m, 2), .prvdisablesvaquestatusbp=gtmv(m, 1), .utxloopback=gtmv(m, 1), .utxen=gtmv(m, 1), .utxrst_pre_n=gtmv(m, 1), .cfgdisabledns=gtmv(m, 1), .drxloopback=gtmv(m, 1), .drxen=gtmv(m, 1), .drxrst_pre_n=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_control_0_set( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", control_0.cfgen1588ts, control_0.cfgreplaceupfcs, control_0.cfgappendupfcs, control_0.cfgdropscb, control_0.moduncappedreportlimit, control_0.modmpquesetfirst, control_0.prvlocalmpcppropagation, control_0.prvtekmodeprefetch, control_0.prvincnonzeroaccum, control_0.prvnounmapppedfcs, control_0.prvsupressdiscen, control_0.cfgvlanmax, control_0.fcserronlydatafr, control_0.prvdropunmapppedllid, control_0.prvsuppressllidmodebit, control_0.moddiscoverydafilteren, control_0.rptselect, control_0.prvdisablesvaquestatusbp, control_0.utxloopback, control_0.utxen, control_0.utxrst_pre_n, control_0.cfgdisabledns, control_0.drxloopback, control_0.drxen, control_0.drxrst_pre_n);
        if(!err) ag_drv_epn_control_0_set(&control_0);
        if(!err) ag_drv_epn_control_0_get( &control_0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_control_0_get( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", control_0.cfgen1588ts, control_0.cfgreplaceupfcs, control_0.cfgappendupfcs, control_0.cfgdropscb, control_0.moduncappedreportlimit, control_0.modmpquesetfirst, control_0.prvlocalmpcppropagation, control_0.prvtekmodeprefetch, control_0.prvincnonzeroaccum, control_0.prvnounmapppedfcs, control_0.prvsupressdiscen, control_0.cfgvlanmax, control_0.fcserronlydatafr, control_0.prvdropunmapppedllid, control_0.prvsuppressllidmodebit, control_0.moddiscoverydafilteren, control_0.rptselect, control_0.prvdisablesvaquestatusbp, control_0.utxloopback, control_0.utxen, control_0.utxrst_pre_n, control_0.cfgdisabledns, control_0.drxloopback, control_0.drxen, control_0.drxrst_pre_n);
        if(err || control_0.cfgen1588ts!=gtmv(m, 1) || control_0.cfgreplaceupfcs!=gtmv(m, 1) || control_0.cfgappendupfcs!=gtmv(m, 1) || control_0.cfgdropscb!=gtmv(m, 1) || control_0.moduncappedreportlimit!=gtmv(m, 1) || control_0.modmpquesetfirst!=gtmv(m, 1) || control_0.prvlocalmpcppropagation!=gtmv(m, 1) || control_0.prvtekmodeprefetch!=gtmv(m, 1) || control_0.prvincnonzeroaccum!=gtmv(m, 1) || control_0.prvnounmapppedfcs!=gtmv(m, 1) || control_0.prvsupressdiscen!=gtmv(m, 1) || control_0.cfgvlanmax!=gtmv(m, 1) || control_0.fcserronlydatafr!=gtmv(m, 1) || control_0.prvdropunmapppedllid!=gtmv(m, 1) || control_0.prvsuppressllidmodebit!=gtmv(m, 1) || control_0.moddiscoverydafilteren!=gtmv(m, 1) || control_0.rptselect!=gtmv(m, 2) || control_0.prvdisablesvaquestatusbp!=gtmv(m, 1) || control_0.utxloopback!=gtmv(m, 1) || control_0.utxen!=gtmv(m, 1) || control_0.utxrst_pre_n!=gtmv(m, 1) || control_0.cfgdisabledns!=gtmv(m, 1) || control_0.drxloopback!=gtmv(m, 1) || control_0.drxen!=gtmv(m, 1) || control_0.drxrst_pre_n!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_control_1 control_1 = {.cfgbypassbbhpacketrequestbuffer=gtmv(m, 1), .cfgidlepackettxenable=gtmv(m, 1), .cfgdisablempcpcorrectiondithering=gtmv(m, 1), .prvoverlappedgntenable=gtmv(m, 1), .rstmisalignthr=gtmv(m, 1), .cfgstalegntchk=gtmv(m, 1), .fecrpten=gtmv(m, 1), .cfgl1l2truestrict=gtmv(m, 1), .cfgctcrpt=gtmv(m, 2), .cfgtscorrdis=gtmv(m, 1), .cfgnodiscrpt=gtmv(m, 1), .disablediscscale=gtmv(m, 1), .clronrd=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_control_1_set( %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", control_1.cfgbypassbbhpacketrequestbuffer, control_1.cfgidlepackettxenable, control_1.cfgdisablempcpcorrectiondithering, control_1.prvoverlappedgntenable, control_1.rstmisalignthr, control_1.cfgstalegntchk, control_1.fecrpten, control_1.cfgl1l2truestrict, control_1.cfgctcrpt, control_1.cfgtscorrdis, control_1.cfgnodiscrpt, control_1.disablediscscale, control_1.clronrd);
        if(!err) ag_drv_epn_control_1_set(&control_1);
        if(!err) ag_drv_epn_control_1_get( &control_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_control_1_get( %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", control_1.cfgbypassbbhpacketrequestbuffer, control_1.cfgidlepackettxenable, control_1.cfgdisablempcpcorrectiondithering, control_1.prvoverlappedgntenable, control_1.rstmisalignthr, control_1.cfgstalegntchk, control_1.fecrpten, control_1.cfgl1l2truestrict, control_1.cfgctcrpt, control_1.cfgtscorrdis, control_1.cfgnodiscrpt, control_1.disablediscscale, control_1.clronrd);
        if(err || control_1.cfgbypassbbhpacketrequestbuffer!=gtmv(m, 1) || control_1.cfgidlepackettxenable!=gtmv(m, 1) || control_1.cfgdisablempcpcorrectiondithering!=gtmv(m, 1) || control_1.prvoverlappedgntenable!=gtmv(m, 1) || control_1.rstmisalignthr!=gtmv(m, 1) || control_1.cfgstalegntchk!=gtmv(m, 1) || control_1.fecrpten!=gtmv(m, 1) || control_1.cfgl1l2truestrict!=gtmv(m, 1) || control_1.cfgctcrpt!=gtmv(m, 2) || control_1.cfgtscorrdis!=gtmv(m, 1) || control_1.cfgnodiscrpt!=gtmv(m, 1) || control_1.disablediscscale!=gtmv(m, 1) || control_1.clronrd!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean grant_en=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_grants_set( %u %u)\n", link_idx, grant_en);
        if(!err) ag_drv_epn_enable_grants_set(link_idx, grant_en);
        if(!err) ag_drv_epn_enable_grants_get( link_idx, &grant_en);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_grants_get( %u %u)\n", link_idx, grant_en);
        if(err || grant_en!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean linkDiscGates_en=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drop_disc_gates_set( %u %u)\n", link_idx, linkDiscGates_en);
        if(!err) ag_drv_epn_drop_disc_gates_set(link_idx, linkDiscGates_en);
        if(!err) ag_drv_epn_drop_disc_gates_get( link_idx, &linkDiscGates_en);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drop_disc_gates_get( %u %u)\n", link_idx, linkDiscGates_en);
        if(err || linkDiscGates_en!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean disableFcsChk=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dis_fcs_chk_set( %u %u)\n", link_idx, disableFcsChk);
        if(!err) ag_drv_epn_dis_fcs_chk_set(link_idx, disableFcsChk);
        if(!err) ag_drv_epn_dis_fcs_chk_get( link_idx, &disableFcsChk);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dis_fcs_chk_get( %u %u)\n", link_idx, disableFcsChk);
        if(err || disableFcsChk!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean passGates=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_pass_gates_set( %u %u)\n", link_idx, passGates);
        if(!err) ag_drv_epn_pass_gates_set(link_idx, passGates);
        if(!err) ag_drv_epn_pass_gates_get( link_idx, &passGates);
        if(!err) bdmf_session_print(session, "ag_drv_epn_pass_gates_get( %u %u)\n", link_idx, passGates);
        if(err || passGates!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgMisalignFeedback=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_cfg_misalgn_fb_set( %u %u)\n", link_idx, cfgMisalignFeedback);
        if(!err) ag_drv_epn_cfg_misalgn_fb_set(link_idx, cfgMisalignFeedback);
        if(!err) ag_drv_epn_cfg_misalgn_fb_get( link_idx, &cfgMisalignFeedback);
        if(!err) bdmf_session_print(session, "ag_drv_epn_cfg_misalgn_fb_get( %u %u)\n", link_idx, cfgMisalignFeedback);
        if(err || cfgMisalignFeedback!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t prvdiscinfomask=gtmv(m, 16);
        uint16_t prvdiscinfovalue=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_discovery_filter_set( %u %u)\n", prvdiscinfomask, prvdiscinfovalue);
        if(!err) ag_drv_epn_discovery_filter_set(prvdiscinfomask, prvdiscinfovalue);
        if(!err) ag_drv_epn_discovery_filter_get( &prvdiscinfomask, &prvdiscinfovalue);
        if(!err) bdmf_session_print(session, "ag_drv_epn_discovery_filter_get( %u %u)\n", prvdiscinfomask, prvdiscinfovalue);
        if(err || prvdiscinfomask!=gtmv(m, 16) || prvdiscinfovalue!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgmingrantsetup=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_minimum_grant_setup_set( %u)\n", cfgmingrantsetup);
        if(!err) ag_drv_epn_minimum_grant_setup_set(cfgmingrantsetup);
        if(!err) ag_drv_epn_minimum_grant_setup_get( &cfgmingrantsetup);
        if(!err) bdmf_session_print(session, "ag_drv_epn_minimum_grant_setup_get( %u)\n", cfgmingrantsetup);
        if(err || cfgmingrantsetup!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean rstGntFifo=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_gnt_fifo_set( %u %u)\n", link_idx, rstGntFifo);
        if(!err) ag_drv_epn_reset_gnt_fifo_set(link_idx, rstGntFifo);
        if(!err) ag_drv_epn_reset_gnt_fifo_get( link_idx, &rstGntFifo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_gnt_fifo_get( %u %u)\n", link_idx, rstGntFifo);
        if(err || rstGntFifo!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl1sclracum=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_l1_accumulator_set( %u)\n", cfgl1sclracum);
        if(!err) ag_drv_epn_reset_l1_accumulator_set(cfgl1sclracum);
        if(!err) ag_drv_epn_reset_l1_accumulator_get( &cfgl1sclracum);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_l1_accumulator_get( %u)\n", cfgl1sclracum);
        if(err || cfgl1sclracum!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t cfgl1suvasizesel=gtmv(m, 5);
        uint8_t cfgl1ssvasizesel=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_accumulator_sel_set( %u %u)\n", cfgl1suvasizesel, cfgl1ssvasizesel);
        if(!err) ag_drv_epn_l1_accumulator_sel_set(cfgl1suvasizesel, cfgl1ssvasizesel);
        if(!err) ag_drv_epn_l1_accumulator_sel_get( &cfgl1suvasizesel, &cfgl1ssvasizesel);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_accumulator_sel_get( %u %u)\n", cfgl1suvasizesel, cfgl1ssvasizesel);
        if(err || cfgl1suvasizesel!=gtmv(m, 5) || cfgl1ssvasizesel!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t l1ssvasize=gtmv(m, 30);
        if(!err) ag_drv_epn_l1_sva_bytes_get( &l1ssvasize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_sva_bytes_get( %u)\n", l1ssvasize);
    }
    {
        uint32_t l1suvasize=gtmv(m, 30);
        if(!err) ag_drv_epn_l1_uva_bytes_get( &l1suvasize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_uva_bytes_get( %u)\n", l1suvasize);
    }
    {
        uint16_t l1ssvaoverflow=gtmv(m, 16);
        if(!err) ag_drv_epn_l1_sva_overflow_get( &l1ssvaoverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_sva_overflow_get( %u)\n", l1ssvaoverflow);
    }
    {
        uint16_t l1suvaoverflow=gtmv(m, 16);
        if(!err) ag_drv_epn_l1_uva_overflow_get( &l1suvaoverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l1_uva_overflow_get( %u)\n", l1suvaoverflow);
    }
    {
        epn_reset_rpt_pri reset_rpt_pri = {.nullrptpri15=gtmv(m, 1), .nullrptpri14=gtmv(m, 1), .nullrptpri13=gtmv(m, 1), .nullrptpri12=gtmv(m, 1), .nullrptpri11=gtmv(m, 1), .nullrptpri10=gtmv(m, 1), .nullrptpri9=gtmv(m, 1), .nullrptpri8=gtmv(m, 1), .nullrptpri7=gtmv(m, 1), .nullrptpri6=gtmv(m, 1), .nullrptpri5=gtmv(m, 1), .nullrptpri4=gtmv(m, 1), .nullrptpri3=gtmv(m, 1), .nullrptpri2=gtmv(m, 1), .nullrptpri1=gtmv(m, 1), .nullrptpri0=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_rpt_pri_set( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", reset_rpt_pri.nullrptpri15, reset_rpt_pri.nullrptpri14, reset_rpt_pri.nullrptpri13, reset_rpt_pri.nullrptpri12, reset_rpt_pri.nullrptpri11, reset_rpt_pri.nullrptpri10, reset_rpt_pri.nullrptpri9, reset_rpt_pri.nullrptpri8, reset_rpt_pri.nullrptpri7, reset_rpt_pri.nullrptpri6, reset_rpt_pri.nullrptpri5, reset_rpt_pri.nullrptpri4, reset_rpt_pri.nullrptpri3, reset_rpt_pri.nullrptpri2, reset_rpt_pri.nullrptpri1, reset_rpt_pri.nullrptpri0);
        if(!err) ag_drv_epn_reset_rpt_pri_set(&reset_rpt_pri);
        if(!err) ag_drv_epn_reset_rpt_pri_get( &reset_rpt_pri);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_rpt_pri_get( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", reset_rpt_pri.nullrptpri15, reset_rpt_pri.nullrptpri14, reset_rpt_pri.nullrptpri13, reset_rpt_pri.nullrptpri12, reset_rpt_pri.nullrptpri11, reset_rpt_pri.nullrptpri10, reset_rpt_pri.nullrptpri9, reset_rpt_pri.nullrptpri8, reset_rpt_pri.nullrptpri7, reset_rpt_pri.nullrptpri6, reset_rpt_pri.nullrptpri5, reset_rpt_pri.nullrptpri4, reset_rpt_pri.nullrptpri3, reset_rpt_pri.nullrptpri2, reset_rpt_pri.nullrptpri1, reset_rpt_pri.nullrptpri0);
        if(err || reset_rpt_pri.nullrptpri15!=gtmv(m, 1) || reset_rpt_pri.nullrptpri14!=gtmv(m, 1) || reset_rpt_pri.nullrptpri13!=gtmv(m, 1) || reset_rpt_pri.nullrptpri12!=gtmv(m, 1) || reset_rpt_pri.nullrptpri11!=gtmv(m, 1) || reset_rpt_pri.nullrptpri10!=gtmv(m, 1) || reset_rpt_pri.nullrptpri9!=gtmv(m, 1) || reset_rpt_pri.nullrptpri8!=gtmv(m, 1) || reset_rpt_pri.nullrptpri7!=gtmv(m, 1) || reset_rpt_pri.nullrptpri6!=gtmv(m, 1) || reset_rpt_pri.nullrptpri5!=gtmv(m, 1) || reset_rpt_pri.nullrptpri4!=gtmv(m, 1) || reset_rpt_pri.nullrptpri3!=gtmv(m, 1) || reset_rpt_pri.nullrptpri2!=gtmv(m, 1) || reset_rpt_pri.nullrptpri1!=gtmv(m, 1) || reset_rpt_pri.nullrptpri0!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgL2SClrQue=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_l2_rpt_fifo_set( %u %u)\n", link_idx, cfgL2SClrQue);
        if(!err) ag_drv_epn_reset_l2_rpt_fifo_set(link_idx, cfgL2SClrQue);
        if(!err) ag_drv_epn_reset_l2_rpt_fifo_get( link_idx, &cfgL2SClrQue);
        if(!err) bdmf_session_print(session, "ag_drv_epn_reset_l2_rpt_fifo_get( %u %u)\n", link_idx, cfgL2SClrQue);
        if(err || cfgL2SClrQue!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgEnableUpstream=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_upstream_set( %u %u)\n", link_idx, cfgEnableUpstream);
        if(!err) ag_drv_epn_enable_upstream_set(link_idx, cfgEnableUpstream);
        if(!err) ag_drv_epn_enable_upstream_get( link_idx, &cfgEnableUpstream);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_upstream_get( %u %u)\n", link_idx, cfgEnableUpstream);
        if(err || cfgEnableUpstream!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgEnableUpstreamFeedBack=gtmv(m, 1);
        if(!err) ag_drv_epn_enable_upstream_fb_get( link_idx, &cfgEnableUpstreamFeedBack);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_upstream_fb_get( %u %u)\n", link_idx, cfgEnableUpstreamFeedBack);
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean upstreamFecEn=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_upstream_fec_set( %u %u)\n", link_idx, upstreamFecEn);
        if(!err) ag_drv_epn_enable_upstream_fec_set(link_idx, upstreamFecEn);
        if(!err) ag_drv_epn_enable_upstream_fec_get( link_idx, &upstreamFecEn);
        if(!err) bdmf_session_print(session, "ag_drv_epn_enable_upstream_fec_get( %u %u)\n", link_idx, upstreamFecEn);
        if(err || upstreamFecEn!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t prvrptbytelen=gtmv(m, 8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_report_byte_length_set( %u)\n", prvrptbytelen);
        if(!err) ag_drv_epn_report_byte_length_set(prvrptbytelen);
        if(!err) ag_drv_epn_report_byte_length_get( &prvrptbytelen);
        if(!err) bdmf_session_print(session, "ag_drv_epn_report_byte_length_get( %u)\n", prvrptbytelen);
        if(err || prvrptbytelen!=gtmv(m, 8))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_main_int_status main_int_status = {.intbbhupfrabort=gtmv(m, 1), .intcol2sburstcapoverflowpres=gtmv(m, 1), .intcoemptyrpt=gtmv(m, 1), .intcodrxerrabortpres=gtmv(m, 1), .intl2sfifooverrun=gtmv(m, 1), .intco1588tsint=gtmv(m, 1), .intcorptpres=gtmv(m, 1), .intcogntpres=gtmv(m, 1), .intcodelstalegnt=gtmv(m, 1), .intcogntnonpoll=gtmv(m, 1), .intcogntmisalign=gtmv(m, 1), .intcognttoofar=gtmv(m, 1), .intcogntinterval=gtmv(m, 1), .intcogntdiscovery=gtmv(m, 1), .intcogntmissabort=gtmv(m, 1), .intcogntfullabort=gtmv(m, 1), .intbadupfrlen=gtmv(m, 1), .intuptardypacket=gtmv(m, 1), .intuprptfrxmt=gtmv(m, 1), .intbififooverrun=gtmv(m, 1), .intburstgnttoobig=gtmv(m, 1), .intwrgnttoobig=gtmv(m, 1), .intrcvgnttoobig=gtmv(m, 1), .intdnstatsoverrun=gtmv(m, 1), .intupstatsoverrun=gtmv(m, 1), .intdnoutoforder=gtmv(m, 1), .inttruantbbhhalt=gtmv(m, 1), .intupinvldgntlen=gtmv(m, 1), .intcobbhupsfault=gtmv(m, 1), .intdntimeinsync=gtmv(m, 1), .intdntimenotinsync=gtmv(m, 1), .intdportrdy=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_main_int_status_set( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", main_int_status.intbbhupfrabort, main_int_status.intcol2sburstcapoverflowpres, main_int_status.intcoemptyrpt, main_int_status.intcodrxerrabortpres, main_int_status.intl2sfifooverrun, main_int_status.intco1588tsint, main_int_status.intcorptpres, main_int_status.intcogntpres, main_int_status.intcodelstalegnt, main_int_status.intcogntnonpoll, main_int_status.intcogntmisalign, main_int_status.intcognttoofar, main_int_status.intcogntinterval, main_int_status.intcogntdiscovery, main_int_status.intcogntmissabort, main_int_status.intcogntfullabort, main_int_status.intbadupfrlen, main_int_status.intuptardypacket, main_int_status.intuprptfrxmt, main_int_status.intbififooverrun, main_int_status.intburstgnttoobig, main_int_status.intwrgnttoobig, main_int_status.intrcvgnttoobig, main_int_status.intdnstatsoverrun, main_int_status.intupstatsoverrun, main_int_status.intdnoutoforder, main_int_status.inttruantbbhhalt, main_int_status.intupinvldgntlen, main_int_status.intcobbhupsfault, main_int_status.intdntimeinsync, main_int_status.intdntimenotinsync, main_int_status.intdportrdy);
        if(!err) ag_drv_epn_main_int_status_set(&main_int_status);
        if(!err) ag_drv_epn_main_int_status_get( &main_int_status);
        if(!err) bdmf_session_print(session, "ag_drv_epn_main_int_status_get( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", main_int_status.intbbhupfrabort, main_int_status.intcol2sburstcapoverflowpres, main_int_status.intcoemptyrpt, main_int_status.intcodrxerrabortpres, main_int_status.intl2sfifooverrun, main_int_status.intco1588tsint, main_int_status.intcorptpres, main_int_status.intcogntpres, main_int_status.intcodelstalegnt, main_int_status.intcogntnonpoll, main_int_status.intcogntmisalign, main_int_status.intcognttoofar, main_int_status.intcogntinterval, main_int_status.intcogntdiscovery, main_int_status.intcogntmissabort, main_int_status.intcogntfullabort, main_int_status.intbadupfrlen, main_int_status.intuptardypacket, main_int_status.intuprptfrxmt, main_int_status.intbififooverrun, main_int_status.intburstgnttoobig, main_int_status.intwrgnttoobig, main_int_status.intrcvgnttoobig, main_int_status.intdnstatsoverrun, main_int_status.intupstatsoverrun, main_int_status.intdnoutoforder, main_int_status.inttruantbbhhalt, main_int_status.intupinvldgntlen, main_int_status.intcobbhupsfault, main_int_status.intdntimeinsync, main_int_status.intdntimenotinsync, main_int_status.intdportrdy);
        if(err || main_int_status.intbbhupfrabort!=gtmv(m, 1) || main_int_status.intcol2sburstcapoverflowpres!=gtmv(m, 1) || main_int_status.intcoemptyrpt!=gtmv(m, 1) || main_int_status.intcodrxerrabortpres!=gtmv(m, 1) || main_int_status.intl2sfifooverrun!=gtmv(m, 1) || main_int_status.intco1588tsint!=gtmv(m, 1) || main_int_status.intcorptpres!=gtmv(m, 1) || main_int_status.intcogntpres!=gtmv(m, 1) || main_int_status.intcodelstalegnt!=gtmv(m, 1) || main_int_status.intcogntnonpoll!=gtmv(m, 1) || main_int_status.intcogntmisalign!=gtmv(m, 1) || main_int_status.intcognttoofar!=gtmv(m, 1) || main_int_status.intcogntinterval!=gtmv(m, 1) || main_int_status.intcogntdiscovery!=gtmv(m, 1) || main_int_status.intcogntmissabort!=gtmv(m, 1) || main_int_status.intcogntfullabort!=gtmv(m, 1) || main_int_status.intbadupfrlen!=gtmv(m, 1) || main_int_status.intuptardypacket!=gtmv(m, 1) || main_int_status.intuprptfrxmt!=gtmv(m, 1) || main_int_status.intbififooverrun!=gtmv(m, 1) || main_int_status.intburstgnttoobig!=gtmv(m, 1) || main_int_status.intwrgnttoobig!=gtmv(m, 1) || main_int_status.intrcvgnttoobig!=gtmv(m, 1) || main_int_status.intdnstatsoverrun!=gtmv(m, 1) || main_int_status.intupstatsoverrun!=gtmv(m, 1) || main_int_status.intdnoutoforder!=gtmv(m, 1) || main_int_status.inttruantbbhhalt!=gtmv(m, 1) || main_int_status.intupinvldgntlen!=gtmv(m, 1) || main_int_status.intcobbhupsfault!=gtmv(m, 1) || main_int_status.intdntimeinsync!=gtmv(m, 1) || main_int_status.intdntimenotinsync!=gtmv(m, 1) || main_int_status.intdportrdy!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntFullAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_full_int_status_set( %u %u)\n", link_idx, intDnGntFullAbort);
        if(!err) ag_drv_epn_gnt_full_int_status_set(link_idx, intDnGntFullAbort);
        if(!err) ag_drv_epn_gnt_full_int_status_get( link_idx, &intDnGntFullAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_full_int_status_get( %u %u)\n", link_idx, intDnGntFullAbort);
        if(err || intDnGntFullAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDnGntFullAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_full_int_mask_set( %u %u)\n", link_idx, maskIntDnGntFullAbort);
        if(!err) ag_drv_epn_gnt_full_int_mask_set(link_idx, maskIntDnGntFullAbort);
        if(!err) ag_drv_epn_gnt_full_int_mask_get( link_idx, &maskIntDnGntFullAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_full_int_mask_get( %u %u)\n", link_idx, maskIntDnGntFullAbort);
        if(err || maskIntDnGntFullAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntMissAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_miss_int_status_set( %u %u)\n", link_idx, intDnGntMissAbort);
        if(!err) ag_drv_epn_gnt_miss_int_status_set(link_idx, intDnGntMissAbort);
        if(!err) ag_drv_epn_gnt_miss_int_status_get( link_idx, &intDnGntMissAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_miss_int_status_get( %u %u)\n", link_idx, intDnGntMissAbort);
        if(err || intDnGntMissAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDnGntMissAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_miss_int_mask_set( %u %u)\n", link_idx, maskIntDnGntMissAbort);
        if(!err) ag_drv_epn_gnt_miss_int_mask_set(link_idx, maskIntDnGntMissAbort);
        if(!err) ag_drv_epn_gnt_miss_int_mask_get( link_idx, &maskIntDnGntMissAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_miss_int_mask_get( %u %u)\n", link_idx, maskIntDnGntMissAbort);
        if(err || maskIntDnGntMissAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntDiscovery=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_rx_int_status_set( %u %u)\n", link_idx, intDnGntDiscovery);
        if(!err) ag_drv_epn_disc_rx_int_status_set(link_idx, intDnGntDiscovery);
        if(!err) ag_drv_epn_disc_rx_int_status_get( link_idx, &intDnGntDiscovery);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_rx_int_status_get( %u %u)\n", link_idx, intDnGntDiscovery);
        if(err || intDnGntDiscovery!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDnGntDiscovery=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_rx_int_mask_set( %u %u)\n", link_idx, maskIntDnGntDiscovery);
        if(!err) ag_drv_epn_disc_rx_int_mask_set(link_idx, maskIntDnGntDiscovery);
        if(!err) ag_drv_epn_disc_rx_int_mask_get( link_idx, &maskIntDnGntDiscovery);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_rx_int_mask_get( %u %u)\n", link_idx, maskIntDnGntDiscovery);
        if(err || maskIntDnGntDiscovery!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntInterval=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_intv_int_status_set( %u %u)\n", link_idx, intDnGntInterval);
        if(!err) ag_drv_epn_gnt_intv_int_status_set(link_idx, intDnGntInterval);
        if(!err) ag_drv_epn_gnt_intv_int_status_get( link_idx, &intDnGntInterval);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_intv_int_status_get( %u %u)\n", link_idx, intDnGntInterval);
        if(err || intDnGntInterval!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDnGntInterval=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_intv_int_mask_set( %u %u)\n", link_idx, maskIntDnGntInterval);
        if(!err) ag_drv_epn_gnt_intv_int_mask_set(link_idx, maskIntDnGntInterval);
        if(!err) ag_drv_epn_gnt_intv_int_mask_get( link_idx, &maskIntDnGntInterval);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_intv_int_mask_get( %u %u)\n", link_idx, maskIntDnGntInterval);
        if(err || maskIntDnGntInterval!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntTooFar=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_far_int_status_set( %u %u)\n", link_idx, intDnGntTooFar);
        if(!err) ag_drv_epn_gnt_far_int_status_set(link_idx, intDnGntTooFar);
        if(!err) ag_drv_epn_gnt_far_int_status_get( link_idx, &intDnGntTooFar);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_far_int_status_get( %u %u)\n", link_idx, intDnGntTooFar);
        if(err || intDnGntTooFar!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskDnGntTooFar=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_far_int_mask_set( %u %u)\n", link_idx, maskDnGntTooFar);
        if(!err) ag_drv_epn_gnt_far_int_mask_set(link_idx, maskDnGntTooFar);
        if(!err) ag_drv_epn_gnt_far_int_mask_get( link_idx, &maskDnGntTooFar);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_far_int_mask_get( %u %u)\n", link_idx, maskDnGntTooFar);
        if(err || maskDnGntTooFar!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntMisalign=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_misalgn_int_status_set( %u %u)\n", link_idx, intDnGntMisalign);
        if(!err) ag_drv_epn_gnt_misalgn_int_status_set(link_idx, intDnGntMisalign);
        if(!err) ag_drv_epn_gnt_misalgn_int_status_get( link_idx, &intDnGntMisalign);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_misalgn_int_status_get( %u %u)\n", link_idx, intDnGntMisalign);
        if(err || intDnGntMisalign!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDnGntMisalign=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_misalgn_int_mask_set( %u %u)\n", link_idx, maskIntDnGntMisalign);
        if(!err) ag_drv_epn_gnt_misalgn_int_mask_set(link_idx, maskIntDnGntMisalign);
        if(!err) ag_drv_epn_gnt_misalgn_int_mask_get( link_idx, &maskIntDnGntMisalign);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_misalgn_int_mask_get( %u %u)\n", link_idx, maskIntDnGntMisalign);
        if(err || maskIntDnGntMisalign!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntNonPoll=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_np_gnt_int_status_set( %u %u)\n", link_idx, intDnGntNonPoll);
        if(!err) ag_drv_epn_np_gnt_int_status_set(link_idx, intDnGntNonPoll);
        if(!err) ag_drv_epn_np_gnt_int_status_get( link_idx, &intDnGntNonPoll);
        if(!err) bdmf_session_print(session, "ag_drv_epn_np_gnt_int_status_get( %u %u)\n", link_idx, intDnGntNonPoll);
        if(err || intDnGntNonPoll!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskDnGntNonPoll=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_np_gnt_int_mask_set( %u %u)\n", link_idx, maskDnGntNonPoll);
        if(!err) ag_drv_epn_np_gnt_int_mask_set(link_idx, maskDnGntNonPoll);
        if(!err) ag_drv_epn_np_gnt_int_mask_get( link_idx, &maskDnGntNonPoll);
        if(!err) bdmf_session_print(session, "ag_drv_epn_np_gnt_int_mask_get( %u %u)\n", link_idx, maskDnGntNonPoll);
        if(err || maskDnGntNonPoll!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDelStaleGnt=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_del_stale_int_status_set( %u %u)\n", link_idx, intDelStaleGnt);
        if(!err) ag_drv_epn_del_stale_int_status_set(link_idx, intDelStaleGnt);
        if(!err) ag_drv_epn_del_stale_int_status_get( link_idx, &intDelStaleGnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_del_stale_int_status_get( %u %u)\n", link_idx, intDelStaleGnt);
        if(err || intDelStaleGnt!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDelStaleGnt=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_del_stale_int_mask_set( %u %u)\n", link_idx, maskIntDelStaleGnt);
        if(!err) ag_drv_epn_del_stale_int_mask_set(link_idx, maskIntDelStaleGnt);
        if(!err) ag_drv_epn_del_stale_int_mask_get( link_idx, &maskIntDelStaleGnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_del_stale_int_mask_get( %u %u)\n", link_idx, maskIntDelStaleGnt);
        if(err || maskIntDelStaleGnt!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDnGntRdy=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_pres_int_status_set( %u %u)\n", link_idx, intDnGntRdy);
        if(!err) ag_drv_epn_gnt_pres_int_status_set(link_idx, intDnGntRdy);
        if(!err) ag_drv_epn_gnt_pres_int_status_get( link_idx, &intDnGntRdy);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_pres_int_status_get( %u %u)\n", link_idx, intDnGntRdy);
        if(err || intDnGntRdy!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskDnGntRdy=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_pres_int_mask_set( %u %u)\n", link_idx, maskDnGntRdy);
        if(!err) ag_drv_epn_gnt_pres_int_mask_set(link_idx, maskDnGntRdy);
        if(!err) ag_drv_epn_gnt_pres_int_mask_get( link_idx, &maskDnGntRdy);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_pres_int_mask_get( %u %u)\n", link_idx, maskDnGntRdy);
        if(err || maskDnGntRdy!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intUpRptFifo=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_rpt_pres_int_status_set( %u %u)\n", link_idx, intUpRptFifo);
        if(!err) ag_drv_epn_rpt_pres_int_status_set(link_idx, intUpRptFifo);
        if(!err) ag_drv_epn_rpt_pres_int_status_get( link_idx, &intUpRptFifo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_rpt_pres_int_status_get( %u %u)\n", link_idx, intUpRptFifo);
        if(err || intUpRptFifo!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntUpRptFifo=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_rpt_pres_int_mask_set( %u %u)\n", link_idx, maskIntUpRptFifo);
        if(!err) ag_drv_epn_rpt_pres_int_mask_set(link_idx, maskIntUpRptFifo);
        if(!err) ag_drv_epn_rpt_pres_int_mask_get( link_idx, &maskIntUpRptFifo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_rpt_pres_int_mask_get( %u %u)\n", link_idx, maskIntUpRptFifo);
        if(err || maskIntUpRptFifo!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intDrxErrAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drx_abort_int_status_set( %u %u)\n", link_idx, intDrxErrAbort);
        if(!err) ag_drv_epn_drx_abort_int_status_set(link_idx, intDrxErrAbort);
        if(!err) ag_drv_epn_drx_abort_int_status_get( link_idx, &intDrxErrAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drx_abort_int_status_get( %u %u)\n", link_idx, intDrxErrAbort);
        if(err || intDrxErrAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntDrxErrAbort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drx_abort_int_mask_set( %u %u)\n", link_idx, maskIntDrxErrAbort);
        if(!err) ag_drv_epn_drx_abort_int_mask_set(link_idx, maskIntDrxErrAbort);
        if(!err) ag_drv_epn_drx_abort_int_mask_get( link_idx, &maskIntDrxErrAbort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_drx_abort_int_mask_get( %u %u)\n", link_idx, maskIntDrxErrAbort);
        if(err || maskIntDrxErrAbort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intEmptyRpt=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_empty_rpt_int_status_set( %u %u)\n", link_idx, intEmptyRpt);
        if(!err) ag_drv_epn_empty_rpt_int_status_set(link_idx, intEmptyRpt);
        if(!err) ag_drv_epn_empty_rpt_int_status_get( link_idx, &intEmptyRpt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_empty_rpt_int_status_get( %u %u)\n", link_idx, intEmptyRpt);
        if(err || intEmptyRpt!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean  maskIntEmptyRpt=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_empty_rpt_int_mask_set( %u %u)\n", link_idx,  maskIntEmptyRpt);
        if(!err) ag_drv_epn_empty_rpt_int_mask_set(link_idx,  maskIntEmptyRpt);
        if(!err) ag_drv_epn_empty_rpt_int_mask_get( link_idx, & maskIntEmptyRpt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_empty_rpt_int_mask_get( %u %u)\n", link_idx,  maskIntEmptyRpt);
        if(err ||  maskIntEmptyRpt!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t l2_acc_idx=gtmv(m, 5);
        bdmf_boolean intl2sBurstCapOverFlow=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bcap_overflow_int_status_set( %u %u)\n", l2_acc_idx, intl2sBurstCapOverFlow);
        if(!err) ag_drv_epn_bcap_overflow_int_status_set(l2_acc_idx, intl2sBurstCapOverFlow);
        if(!err) ag_drv_epn_bcap_overflow_int_status_get( l2_acc_idx, &intl2sBurstCapOverFlow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bcap_overflow_int_status_get( %u %u)\n", l2_acc_idx, intl2sBurstCapOverFlow);
        if(err || intl2sBurstCapOverFlow!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntl2sBurstCapOverFlow=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bcap_overflow_int_mask_set( %u %u)\n", link_idx, maskIntl2sBurstCapOverFlow);
        if(!err) ag_drv_epn_bcap_overflow_int_mask_set(link_idx, maskIntl2sBurstCapOverFlow);
        if(!err) ag_drv_epn_bcap_overflow_int_mask_get( link_idx, &maskIntl2sBurstCapOverFlow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bcap_overflow_int_mask_get( %u %u)\n", link_idx, maskIntl2sBurstCapOverFlow);
        if(err || maskIntl2sBurstCapOverFlow!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean intbbhdnsoverflow=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_dns_fault_int_status_set( %u)\n", intbbhdnsoverflow);
        if(!err) ag_drv_epn_bbh_dns_fault_int_status_set(intbbhdnsoverflow);
        if(!err) ag_drv_epn_bbh_dns_fault_int_status_get( &intbbhdnsoverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_dns_fault_int_status_get( %u)\n", intbbhdnsoverflow);
        if(err || intbbhdnsoverflow!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean maskintbbhdnsoverflow=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_dns_fault_int_mask_set( %u)\n", maskintbbhdnsoverflow);
        if(!err) ag_drv_epn_bbh_dns_fault_int_mask_set(maskintbbhdnsoverflow);
        if(!err) ag_drv_epn_bbh_dns_fault_int_mask_get( &maskintbbhdnsoverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_dns_fault_int_mask_get( %u)\n", maskintbbhdnsoverflow);
        if(err || maskintbbhdnsoverflow!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean intBbhUpsFault=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_fault_int_status_set( %u %u)\n", link_idx, intBbhUpsFault);
        if(!err) ag_drv_epn_bbh_ups_fault_int_status_set(link_idx, intBbhUpsFault);
        if(!err) ag_drv_epn_bbh_ups_fault_int_status_get( link_idx, &intBbhUpsFault);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_fault_int_status_get( %u %u)\n", link_idx, intBbhUpsFault);
        if(err || intBbhUpsFault!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean maskIntBbhUpsFault=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_fault_int_mask_set( %u %u)\n", link_idx, maskIntBbhUpsFault);
        if(!err) ag_drv_epn_bbh_ups_fault_int_mask_set(link_idx, maskIntBbhUpsFault);
        if(!err) ag_drv_epn_bbh_ups_fault_int_mask_get( link_idx, &maskIntBbhUpsFault);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_fault_int_mask_get( %u %u)\n", link_idx, maskIntBbhUpsFault);
        if(err || maskIntBbhUpsFault!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean tardybbhabort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_abort_int_status_set( %u)\n", tardybbhabort);
        if(!err) ag_drv_epn_bbh_ups_abort_int_status_set(tardybbhabort);
        if(!err) ag_drv_epn_bbh_ups_abort_int_status_get( &tardybbhabort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_abort_int_status_get( %u)\n", tardybbhabort);
        if(err || tardybbhabort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean masktardybbhabort=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_abort_int_mask_set( %u)\n", masktardybbhabort);
        if(!err) ag_drv_epn_bbh_ups_abort_int_mask_set(masktardybbhabort);
        if(!err) ag_drv_epn_bbh_ups_abort_int_mask_get( &masktardybbhabort);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_ups_abort_int_mask_get( %u)\n", masktardybbhabort);
        if(err || masktardybbhabort!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_main_int_mask main_int_mask = {.bbhupfrabortmask=gtmv(m, 1), .intl2sburstcapoverflowmask=gtmv(m, 1), .intcoemptyrptmask=gtmv(m, 1), .intdrxerrabortmask=gtmv(m, 1), .intl2sfifooverrunmask=gtmv(m, 1), .intco1588tsmask=gtmv(m, 1), .intcorptpresmask=gtmv(m, 1), .intcogntpresmask=gtmv(m, 1), .intcodelstalegntmask=gtmv(m, 1), .intcogntnonpollmask=gtmv(m, 1), .intcogntmisalignmask=gtmv(m, 1), .intcognttoofarmask=gtmv(m, 1), .intcogntintervalmask=gtmv(m, 1), .intcogntdiscoverymask=gtmv(m, 1), .intcogntmissabortmask=gtmv(m, 1), .intcogntfullabortmask=gtmv(m, 1), .badupfrlenmask=gtmv(m, 1), .uptardypacketmask=gtmv(m, 1), .uprptfrxmtmask=gtmv(m, 1), .intbififooverrunmask=gtmv(m, 1), .burstgnttoobigmask=gtmv(m, 1), .wrgnttoobigmask=gtmv(m, 1), .rcvgnttoobigmask=gtmv(m, 1), .dnstatsoverrunmask=gtmv(m, 1), .intupstatsoverrunmask=gtmv(m, 1), .dnoutofordermask=gtmv(m, 1), .truantbbhhaltmask=gtmv(m, 1), .upinvldgntlenmask=gtmv(m, 1), .intcobbhupsfaultmask=gtmv(m, 1), .dntimeinsyncmask=gtmv(m, 1), .dntimenotinsyncmask=gtmv(m, 1), .dportrdymask=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_main_int_mask_set( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", main_int_mask.bbhupfrabortmask, main_int_mask.intl2sburstcapoverflowmask, main_int_mask.intcoemptyrptmask, main_int_mask.intdrxerrabortmask, main_int_mask.intl2sfifooverrunmask, main_int_mask.intco1588tsmask, main_int_mask.intcorptpresmask, main_int_mask.intcogntpresmask, main_int_mask.intcodelstalegntmask, main_int_mask.intcogntnonpollmask, main_int_mask.intcogntmisalignmask, main_int_mask.intcognttoofarmask, main_int_mask.intcogntintervalmask, main_int_mask.intcogntdiscoverymask, main_int_mask.intcogntmissabortmask, main_int_mask.intcogntfullabortmask, main_int_mask.badupfrlenmask, main_int_mask.uptardypacketmask, main_int_mask.uprptfrxmtmask, main_int_mask.intbififooverrunmask, main_int_mask.burstgnttoobigmask, main_int_mask.wrgnttoobigmask, main_int_mask.rcvgnttoobigmask, main_int_mask.dnstatsoverrunmask, main_int_mask.intupstatsoverrunmask, main_int_mask.dnoutofordermask, main_int_mask.truantbbhhaltmask, main_int_mask.upinvldgntlenmask, main_int_mask.intcobbhupsfaultmask, main_int_mask.dntimeinsyncmask, main_int_mask.dntimenotinsyncmask, main_int_mask.dportrdymask);
        if(!err) ag_drv_epn_main_int_mask_set(&main_int_mask);
        if(!err) ag_drv_epn_main_int_mask_get( &main_int_mask);
        if(!err) bdmf_session_print(session, "ag_drv_epn_main_int_mask_get( %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", main_int_mask.bbhupfrabortmask, main_int_mask.intl2sburstcapoverflowmask, main_int_mask.intcoemptyrptmask, main_int_mask.intdrxerrabortmask, main_int_mask.intl2sfifooverrunmask, main_int_mask.intco1588tsmask, main_int_mask.intcorptpresmask, main_int_mask.intcogntpresmask, main_int_mask.intcodelstalegntmask, main_int_mask.intcogntnonpollmask, main_int_mask.intcogntmisalignmask, main_int_mask.intcognttoofarmask, main_int_mask.intcogntintervalmask, main_int_mask.intcogntdiscoverymask, main_int_mask.intcogntmissabortmask, main_int_mask.intcogntfullabortmask, main_int_mask.badupfrlenmask, main_int_mask.uptardypacketmask, main_int_mask.uprptfrxmtmask, main_int_mask.intbififooverrunmask, main_int_mask.burstgnttoobigmask, main_int_mask.wrgnttoobigmask, main_int_mask.rcvgnttoobigmask, main_int_mask.dnstatsoverrunmask, main_int_mask.intupstatsoverrunmask, main_int_mask.dnoutofordermask, main_int_mask.truantbbhhaltmask, main_int_mask.upinvldgntlenmask, main_int_mask.intcobbhupsfaultmask, main_int_mask.dntimeinsyncmask, main_int_mask.dntimenotinsyncmask, main_int_mask.dportrdymask);
        if(err || main_int_mask.bbhupfrabortmask!=gtmv(m, 1) || main_int_mask.intl2sburstcapoverflowmask!=gtmv(m, 1) || main_int_mask.intcoemptyrptmask!=gtmv(m, 1) || main_int_mask.intdrxerrabortmask!=gtmv(m, 1) || main_int_mask.intl2sfifooverrunmask!=gtmv(m, 1) || main_int_mask.intco1588tsmask!=gtmv(m, 1) || main_int_mask.intcorptpresmask!=gtmv(m, 1) || main_int_mask.intcogntpresmask!=gtmv(m, 1) || main_int_mask.intcodelstalegntmask!=gtmv(m, 1) || main_int_mask.intcogntnonpollmask!=gtmv(m, 1) || main_int_mask.intcogntmisalignmask!=gtmv(m, 1) || main_int_mask.intcognttoofarmask!=gtmv(m, 1) || main_int_mask.intcogntintervalmask!=gtmv(m, 1) || main_int_mask.intcogntdiscoverymask!=gtmv(m, 1) || main_int_mask.intcogntmissabortmask!=gtmv(m, 1) || main_int_mask.intcogntfullabortmask!=gtmv(m, 1) || main_int_mask.badupfrlenmask!=gtmv(m, 1) || main_int_mask.uptardypacketmask!=gtmv(m, 1) || main_int_mask.uprptfrxmtmask!=gtmv(m, 1) || main_int_mask.intbififooverrunmask!=gtmv(m, 1) || main_int_mask.burstgnttoobigmask!=gtmv(m, 1) || main_int_mask.wrgnttoobigmask!=gtmv(m, 1) || main_int_mask.rcvgnttoobigmask!=gtmv(m, 1) || main_int_mask.dnstatsoverrunmask!=gtmv(m, 1) || main_int_mask.intupstatsoverrunmask!=gtmv(m, 1) || main_int_mask.dnoutofordermask!=gtmv(m, 1) || main_int_mask.truantbbhhaltmask!=gtmv(m, 1) || main_int_mask.upinvldgntlenmask!=gtmv(m, 1) || main_int_mask.intcobbhupsfaultmask!=gtmv(m, 1) || main_int_mask.dntimeinsyncmask!=gtmv(m, 1) || main_int_mask.dntimenotinsyncmask!=gtmv(m, 1) || main_int_mask.dportrdymask!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t maxgntsize=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_max_gnt_size_set( %u)\n", maxgntsize);
        if(!err) ag_drv_epn_max_gnt_size_set(maxgntsize);
        if(!err) ag_drv_epn_max_gnt_size_get( &maxgntsize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_max_gnt_size_get( %u)\n", maxgntsize);
        if(err || maxgntsize!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgmaxframesize=gtmv(m, 14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_max_frame_size_set( %u)\n", cfgmaxframesize);
        if(!err) ag_drv_epn_max_frame_size_set(cfgmaxframesize);
        if(!err) ag_drv_epn_max_frame_size_get( &cfgmaxframesize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_max_frame_size_get( %u)\n", cfgmaxframesize);
        if(err || cfgmaxframesize!=gtmv(m, 14))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t gntovrhdfec=gtmv(m, 16);
        uint16_t gntovrhd=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_grant_ovr_hd_set( %u %u)\n", gntovrhdfec, gntovrhd);
        if(!err) ag_drv_epn_grant_ovr_hd_set(gntovrhdfec, gntovrhd);
        if(!err) ag_drv_epn_grant_ovr_hd_get( &gntovrhdfec, &gntovrhd);
        if(!err) bdmf_session_print(session, "ag_drv_epn_grant_ovr_hd_get( %u %u)\n", gntovrhdfec, gntovrhd);
        if(err || gntovrhdfec!=gtmv(m, 16) || gntovrhd!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t pollsizefec=gtmv(m, 16);
        uint16_t pollsize=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_poll_size_set( %u %u)\n", pollsizefec, pollsize);
        if(!err) ag_drv_epn_poll_size_set(pollsizefec, pollsize);
        if(!err) ag_drv_epn_poll_size_get( &pollsizefec, &pollsize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_poll_size_get( %u %u)\n", pollsizefec, pollsize);
        if(err || pollsizefec!=gtmv(m, 16) || pollsize!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t rdgntstartmargin=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_rd_gnt_margin_set( %u)\n", rdgntstartmargin);
        if(!err) ag_drv_epn_dn_rd_gnt_margin_set(rdgntstartmargin);
        if(!err) ag_drv_epn_dn_rd_gnt_margin_get( &rdgntstartmargin);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_rd_gnt_margin_get( %u)\n", rdgntstartmargin);
        if(err || rdgntstartmargin!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t gntstarttimedelta=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_time_start_delta_set( %u)\n", gntstarttimedelta);
        if(!err) ag_drv_epn_gnt_time_start_delta_set(gntstarttimedelta);
        if(!err) ag_drv_epn_gnt_time_start_delta_get( &gntstarttimedelta);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_time_start_delta_get( %u)\n", gntstarttimedelta);
        if(err || gntstarttimedelta!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t timestampdiffdelta=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_time_stamp_diff_set( %u)\n", timestampdiffdelta);
        if(!err) ag_drv_epn_time_stamp_diff_set(timestampdiffdelta);
        if(!err) ag_drv_epn_time_stamp_diff_get( &timestampdiffdelta);
        if(!err) bdmf_session_print(session, "ag_drv_epn_time_stamp_diff_get( %u)\n", timestampdiffdelta);
        if(err || timestampdiffdelta!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t timestampoffsetfec=gtmv(m, 16);
        uint16_t timestampoffset=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_time_stamp_off_set( %u %u)\n", timestampoffsetfec, timestampoffset);
        if(!err) ag_drv_epn_up_time_stamp_off_set(timestampoffsetfec, timestampoffset);
        if(!err) ag_drv_epn_up_time_stamp_off_get( &timestampoffsetfec, &timestampoffset);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_time_stamp_off_get( %u %u)\n", timestampoffsetfec, timestampoffset);
        if(err || timestampoffsetfec!=gtmv(m, 16) || timestampoffset!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t gntinterval=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_interval_set( %u)\n", gntinterval);
        if(!err) ag_drv_epn_gnt_interval_set(gntinterval);
        if(!err) ag_drv_epn_gnt_interval_get( &gntinterval);
        if(!err) bdmf_session_print(session, "ag_drv_epn_gnt_interval_get( %u)\n", gntinterval);
        if(err || gntinterval!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t prvunusedgntthreshold=gtmv(m, 16);
        uint16_t gntmisalignthresh=gtmv(m, 10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_gnt_misalign_thr_set( %u %u)\n", prvunusedgntthreshold, gntmisalignthresh);
        if(!err) ag_drv_epn_dn_gnt_misalign_thr_set(prvunusedgntthreshold, gntmisalignthresh);
        if(!err) ag_drv_epn_dn_gnt_misalign_thr_get( &prvunusedgntthreshold, &gntmisalignthresh);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_gnt_misalign_thr_get( %u %u)\n", prvunusedgntthreshold, gntmisalignthresh);
        if(err || prvunusedgntthreshold!=gtmv(m, 16) || gntmisalignthresh!=gtmv(m, 10))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t gntmisalignpause=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_gnt_misalign_pause_set( %u)\n", gntmisalignpause);
        if(!err) ag_drv_epn_dn_gnt_misalign_pause_set(gntmisalignpause);
        if(!err) ag_drv_epn_dn_gnt_misalign_pause_get( &gntmisalignpause);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_gnt_misalign_pause_get( %u)\n", gntmisalignpause);
        if(err || gntmisalignpause!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t nonpollgntintv=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_non_poll_intv_set( %u)\n", nonpollgntintv);
        if(!err) ag_drv_epn_non_poll_intv_set(nonpollgntintv);
        if(!err) ag_drv_epn_non_poll_intv_get( &nonpollgntintv);
        if(!err) bdmf_session_print(session, "ag_drv_epn_non_poll_intv_get( %u)\n", nonpollgntintv);
        if(err || nonpollgntintv!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean forceFcsErr=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_force_fcs_err_set( %u %u)\n", link_idx, forceFcsErr);
        if(!err) ag_drv_epn_force_fcs_err_set(link_idx, forceFcsErr);
        if(!err) ag_drv_epn_force_fcs_err_get( link_idx, &forceFcsErr);
        if(!err) bdmf_session_print(session, "ag_drv_epn_force_fcs_err_get( %u %u)\n", link_idx, forceFcsErr);
        if(err || forceFcsErr!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t prvgrantoverlaplimit=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_grant_overlap_limit_set( %u)\n", prvgrantoverlaplimit);
        if(!err) ag_drv_epn_grant_overlap_limit_set(prvgrantoverlaplimit);
        if(!err) ag_drv_epn_grant_overlap_limit_get( &prvgrantoverlaplimit);
        if(!err) bdmf_session_print(session, "ag_drv_epn_grant_overlap_limit_get( %u)\n", prvgrantoverlaplimit);
        if(err || prvgrantoverlaplimit!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 4);
        uint8_t prvUpstreamAesMode_0=gtmv(m, 2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_aes_configuration_0_set( %u %u)\n", link_idx, prvUpstreamAesMode_0);
        if(!err) ag_drv_epn_aes_configuration_0_set(link_idx, prvUpstreamAesMode_0);
        if(!err) ag_drv_epn_aes_configuration_0_get( link_idx, &prvUpstreamAesMode_0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_aes_configuration_0_get( %u %u)\n", link_idx, prvUpstreamAesMode_0);
        if(err || prvUpstreamAesMode_0!=gtmv(m, 2))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t discgntovrhd=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_grant_ovr_hd_set( %u)\n", discgntovrhd);
        if(!err) ag_drv_epn_disc_grant_ovr_hd_set(discgntovrhd);
        if(!err) ag_drv_epn_disc_grant_ovr_hd_get( &discgntovrhd);
        if(!err) bdmf_session_print(session, "ag_drv_epn_disc_grant_ovr_hd_get( %u)\n", discgntovrhd);
        if(err || discgntovrhd!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgdiscseed=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_seed_set( %u)\n", cfgdiscseed);
        if(!err) ag_drv_epn_dn_discovery_seed_set(cfgdiscseed);
        if(!err) ag_drv_epn_dn_discovery_seed_get( &cfgdiscseed);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_seed_get( %u)\n", cfgdiscseed);
        if(err || cfgdiscseed!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgdiscinc=gtmv(m, 10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_inc_set( %u)\n", cfgdiscinc);
        if(!err) ag_drv_epn_dn_discovery_inc_set(cfgdiscinc);
        if(!err) ag_drv_epn_dn_discovery_inc_get( &cfgdiscinc);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_inc_get( %u)\n", cfgdiscinc);
        if(err || cfgdiscinc!=gtmv(m, 10))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgdiscsize=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_size_set( %u)\n", cfgdiscsize);
        if(!err) ag_drv_epn_dn_discovery_size_set(cfgdiscsize);
        if(!err) ag_drv_epn_dn_discovery_size_get( &cfgdiscsize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_discovery_size_get( %u)\n", cfgdiscsize);
        if(err || cfgdiscsize!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t modipgpreamblebytes=gtmv(m, 5);
        uint8_t cfgrptlen=gtmv(m, 8);
        uint8_t cfgfecrptlength=gtmv(m, 8);
        uint8_t cfgfecipglength=gtmv(m, 8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fec_ipg_length_set( %u %u %u %u)\n", modipgpreamblebytes, cfgrptlen, cfgfecrptlength, cfgfecipglength);
        if(!err) ag_drv_epn_fec_ipg_length_set(modipgpreamblebytes, cfgrptlen, cfgfecrptlength, cfgfecipglength);
        if(!err) ag_drv_epn_fec_ipg_length_get( &modipgpreamblebytes, &cfgrptlen, &cfgfecrptlength, &cfgfecipglength);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fec_ipg_length_get( %u %u %u %u)\n", modipgpreamblebytes, cfgrptlen, cfgfecrptlength, cfgfecipglength);
        if(err || modipgpreamblebytes!=gtmv(m, 5) || cfgrptlen!=gtmv(m, 8) || cfgfecrptlength!=gtmv(m, 8) || cfgfecipglength!=gtmv(m, 8))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t fakereportvalueen=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fake_report_value_en_set( %u)\n", fakereportvalueen);
        if(!err) ag_drv_epn_fake_report_value_en_set(fakereportvalueen);
        if(!err) ag_drv_epn_fake_report_value_en_get( &fakereportvalueen);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fake_report_value_en_get( %u)\n", fakereportvalueen);
        if(err || fakereportvalueen!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t fakereportvalue=gtmv(m, 21);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fake_report_value_set( %u)\n", fakereportvalue);
        if(!err) ag_drv_epn_fake_report_value_set(fakereportvalue);
        if(!err) ag_drv_epn_fake_report_value_get( &fakereportvalue);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fake_report_value_get( %u)\n", fakereportvalue);
        if(err || fakereportvalue!=gtmv(m, 21))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t prvvalidmpcpopcodes=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_valid_opcode_map_set( %u)\n", prvvalidmpcpopcodes);
        if(!err) ag_drv_epn_valid_opcode_map_set(prvvalidmpcpopcodes);
        if(!err) ag_drv_epn_valid_opcode_map_get( &prvvalidmpcpopcodes);
        if(!err) bdmf_session_print(session, "ag_drv_epn_valid_opcode_map_get( %u)\n", prvvalidmpcpopcodes);
        if(err || prvvalidmpcpopcodes!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t uppackettxmargin=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_packet_tx_margin_set( %u)\n", uppackettxmargin);
        if(!err) ag_drv_epn_up_packet_tx_margin_set(uppackettxmargin);
        if(!err) ag_drv_epn_up_packet_tx_margin_get( &uppackettxmargin);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_packet_tx_margin_get( %u)\n", uppackettxmargin);
        if(err || uppackettxmargin!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_multi_pri_cfg_0 multi_pri_cfg_0 = {.cfgctcschdeficiten=gtmv(m, 1), .prvzeroburstcapoverridemode=gtmv(m, 2), .cfgsharedl2=gtmv(m, 1), .cfgsharedburstcap=gtmv(m, 1), .cfgrptgntsoutst0=gtmv(m, 1), .cfgrpthiprifirst0=gtmv(m, 1), .cfgrptswapqs0=gtmv(m, 1), .cfgrptmultipri0=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_multi_pri_cfg_0_set( %u %u %u %u %u %u %u %u)\n", multi_pri_cfg_0.cfgctcschdeficiten, multi_pri_cfg_0.prvzeroburstcapoverridemode, multi_pri_cfg_0.cfgsharedl2, multi_pri_cfg_0.cfgsharedburstcap, multi_pri_cfg_0.cfgrptgntsoutst0, multi_pri_cfg_0.cfgrpthiprifirst0, multi_pri_cfg_0.cfgrptswapqs0, multi_pri_cfg_0.cfgrptmultipri0);
        if(!err) ag_drv_epn_multi_pri_cfg_0_set(&multi_pri_cfg_0);
        if(!err) ag_drv_epn_multi_pri_cfg_0_get( &multi_pri_cfg_0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_multi_pri_cfg_0_get( %u %u %u %u %u %u %u %u)\n", multi_pri_cfg_0.cfgctcschdeficiten, multi_pri_cfg_0.prvzeroburstcapoverridemode, multi_pri_cfg_0.cfgsharedl2, multi_pri_cfg_0.cfgsharedburstcap, multi_pri_cfg_0.cfgrptgntsoutst0, multi_pri_cfg_0.cfgrpthiprifirst0, multi_pri_cfg_0.cfgrptswapqs0, multi_pri_cfg_0.cfgrptmultipri0);
        if(err || multi_pri_cfg_0.cfgctcschdeficiten!=gtmv(m, 1) || multi_pri_cfg_0.prvzeroburstcapoverridemode!=gtmv(m, 2) || multi_pri_cfg_0.cfgsharedl2!=gtmv(m, 1) || multi_pri_cfg_0.cfgsharedburstcap!=gtmv(m, 1) || multi_pri_cfg_0.cfgrptgntsoutst0!=gtmv(m, 1) || multi_pri_cfg_0.cfgrpthiprifirst0!=gtmv(m, 1) || multi_pri_cfg_0.cfgrptswapqs0!=gtmv(m, 1) || multi_pri_cfg_0.cfgrptmultipri0!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t sharedburstcapoverflow=gtmv(m, 11);
        if(!err) ag_drv_epn_shared_bcap_ovrflow_get( &sharedburstcapoverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_shared_bcap_ovrflow_get( %u)\n", sharedburstcapoverflow);
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgForceReportEn=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_forced_report_en_set( %u %u)\n", link_idx, cfgForceReportEn);
        if(!err) ag_drv_epn_forced_report_en_set(link_idx, cfgForceReportEn);
        if(!err) ag_drv_epn_forced_report_en_get( link_idx, &cfgForceReportEn);
        if(!err) bdmf_session_print(session, "ag_drv_epn_forced_report_en_get( %u %u)\n", link_idx, cfgForceReportEn);
        if(err || cfgForceReportEn!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t cfgmaxreportinterval=gtmv(m, 6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_forced_report_max_interval_set( %u)\n", cfgmaxreportinterval);
        if(!err) ag_drv_epn_forced_report_max_interval_set(cfgmaxreportinterval);
        if(!err) ag_drv_epn_forced_report_max_interval_get( &cfgmaxreportinterval);
        if(!err) bdmf_session_print(session, "ag_drv_epn_forced_report_max_interval_get( %u)\n", cfgmaxreportinterval);
        if(err || cfgmaxreportinterval!=gtmv(m, 6))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean cfgflushl2sen=gtmv(m, 1);
        bdmf_boolean flushl2sdone=gtmv(m, 1);
        uint8_t cfgflushl2ssel=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l2s_flush_config_set( %u %u %u)\n", cfgflushl2sen, flushl2sdone, cfgflushl2ssel);
        if(!err) ag_drv_epn_l2s_flush_config_set(cfgflushl2sen, flushl2sdone, cfgflushl2ssel);
        if(!err) ag_drv_epn_l2s_flush_config_get( &cfgflushl2sen, &flushl2sdone, &cfgflushl2ssel);
        if(!err) bdmf_session_print(session, "ag_drv_epn_l2s_flush_config_get( %u %u %u)\n", cfgflushl2sen, flushl2sdone, cfgflushl2ssel);
        if(err || cfgflushl2sen!=gtmv(m, 1) || flushl2sdone!=gtmv(m, 1) || cfgflushl2ssel!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean dportbusy=gtmv(m, 1);
        uint8_t dportselect=gtmv(m, 5);
        bdmf_boolean dportcontrol=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_command_set( %u %u %u)\n", dportbusy, dportselect, dportcontrol);
        if(!err) ag_drv_epn_data_port_command_set(dportbusy, dportselect, dportcontrol);
        if(!err) ag_drv_epn_data_port_command_get( &dportbusy, &dportselect, &dportcontrol);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_command_get( %u %u %u)\n", dportbusy, dportselect, dportcontrol);
        if(err || dportbusy!=gtmv(m, 1) || dportselect!=gtmv(m, 5) || dportcontrol!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t dportaddr=gtmv(m, 14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_address_set( %u)\n", dportaddr);
        if(!err) ag_drv_epn_data_port_address_set(dportaddr);
        if(!err) ag_drv_epn_data_port_address_get( &dportaddr);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_address_get( %u)\n", dportaddr);
        if(err || dportaddr!=gtmv(m, 14))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t dportdata0=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_data_0_set( %u)\n", dportdata0);
        if(!err) ag_drv_epn_data_port_data_0_set(dportdata0);
        if(!err) ag_drv_epn_data_port_data_0_get( &dportdata0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_data_port_data_0_get( %u)\n", dportdata0);
        if(err || dportdata0!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapbigerrcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_big_cnt_set( %u)\n", unmapbigerrcnt);
        if(!err) ag_drv_epn_unmap_big_cnt_set(unmapbigerrcnt);
        if(!err) ag_drv_epn_unmap_big_cnt_get( &unmapbigerrcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_big_cnt_get( %u)\n", unmapbigerrcnt);
        if(err || unmapbigerrcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapfrcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_frame_cnt_set( %u)\n", unmapfrcnt);
        if(!err) ag_drv_epn_unmap_frame_cnt_set(unmapfrcnt);
        if(!err) ag_drv_epn_unmap_frame_cnt_get( &unmapfrcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_frame_cnt_get( %u)\n", unmapfrcnt);
        if(err || unmapfrcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapfcserrcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_fcs_cnt_set( %u)\n", unmapfcserrcnt);
        if(!err) ag_drv_epn_unmap_fcs_cnt_set(unmapfcserrcnt);
        if(!err) ag_drv_epn_unmap_fcs_cnt_get( &unmapfcserrcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_fcs_cnt_get( %u)\n", unmapfcserrcnt);
        if(err || unmapfcserrcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapgatecnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_gate_cnt_set( %u)\n", unmapgatecnt);
        if(!err) ag_drv_epn_unmap_gate_cnt_set(unmapgatecnt);
        if(!err) ag_drv_epn_unmap_gate_cnt_get( &unmapgatecnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_gate_cnt_get( %u)\n", unmapgatecnt);
        if(err || unmapgatecnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapoamcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_oam_cnt_set( %u)\n", unmapoamcnt);
        if(!err) ag_drv_epn_unmap_oam_cnt_set(unmapoamcnt);
        if(!err) ag_drv_epn_unmap_oam_cnt_get( &unmapoamcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_oam_cnt_get( %u)\n", unmapoamcnt);
        if(err || unmapoamcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unmapsmallerrcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_small_cnt_set( %u)\n", unmapsmallerrcnt);
        if(!err) ag_drv_epn_unmap_small_cnt_set(unmapsmallerrcnt);
        if(!err) ag_drv_epn_unmap_small_cnt_get( &unmapsmallerrcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unmap_small_cnt_get( %u)\n", unmapsmallerrcnt);
        if(err || unmapsmallerrcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t fifdequeueeventcnt=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fif_dequeue_event_cnt_set( %u)\n", fifdequeueeventcnt);
        if(!err) ag_drv_epn_fif_dequeue_event_cnt_set(fifdequeueeventcnt);
        if(!err) ag_drv_epn_fif_dequeue_event_cnt_get( &fifdequeueeventcnt);
        if(!err) bdmf_session_print(session, "ag_drv_epn_fif_dequeue_event_cnt_get( %u)\n", fifdequeueeventcnt);
        if(err || fifdequeueeventcnt!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean bbhUpsFaultHaltEn=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_up_fault_halt_en_set( %u %u)\n", link_idx, bbhUpsFaultHaltEn);
        if(!err) ag_drv_epn_bbh_up_fault_halt_en_set(link_idx, bbhUpsFaultHaltEn);
        if(!err) ag_drv_epn_bbh_up_fault_halt_en_get( link_idx, &bbhUpsFaultHaltEn);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_up_fault_halt_en_get( %u %u)\n", link_idx, bbhUpsFaultHaltEn);
        if(err || bbhUpsFaultHaltEn!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean fataltardybbhaborten=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_up_tardy_halt_en_set( %u)\n", fataltardybbhaborten);
        if(!err) ag_drv_epn_bbh_up_tardy_halt_en_set(fataltardybbhaborten);
        if(!err) ag_drv_epn_bbh_up_tardy_halt_en_get( &fataltardybbhaborten);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_up_tardy_halt_en_get( %u)\n", fataltardybbhaborten);
        if(err || fataltardybbhaborten!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t l2squefulldebug=gtmv(m, 8);
        bdmf_boolean dndlufull=gtmv(m, 1);
        bdmf_boolean dnsecfull=gtmv(m, 1);
        bdmf_boolean epnliffifofull=gtmv(m, 1);
        if(!err) ag_drv_epn_debug_status_0_get( &l2squefulldebug, &dndlufull, &dnsecfull, &epnliffifofull);
        if(!err) bdmf_session_print(session, "ag_drv_epn_debug_status_0_get( %u %u %u %u)\n", l2squefulldebug, dndlufull, dnsecfull, epnliffifofull);
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean gntRdy=gtmv(m, 1);
        if(!err) ag_drv_epn_debug_status_1_get( link_idx, &gntRdy);
        if(!err) bdmf_session_print(session, "ag_drv_epn_debug_status_1_get( %u %u)\n", link_idx, gntRdy);
    }
    {
        uint8_t cfgl2sdebugptrsel=gtmv(m, 3);
        uint16_t l2sdebugptrstate=gtmv(m, 15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_debug_l2s_ptr_sel_set( %u %u)\n", cfgl2sdebugptrsel, l2sdebugptrstate);
        if(!err) ag_drv_epn_debug_l2s_ptr_sel_set(cfgl2sdebugptrsel, l2sdebugptrstate);
        if(!err) ag_drv_epn_debug_l2s_ptr_sel_get( &cfgl2sdebugptrsel, &l2sdebugptrstate);
        if(!err) bdmf_session_print(session, "ag_drv_epn_debug_l2s_ptr_sel_get( %u %u)\n", cfgl2sdebugptrsel, l2sdebugptrstate);
        if(err || cfgl2sdebugptrsel!=gtmv(m, 3) || l2sdebugptrstate!=gtmv(m, 15))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t oltaddrlo=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_olt_mac_addr_lo_set( %u)\n", oltaddrlo);
        if(!err) ag_drv_epn_olt_mac_addr_lo_set(oltaddrlo);
        if(!err) ag_drv_epn_olt_mac_addr_lo_get( &oltaddrlo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_olt_mac_addr_lo_get( %u)\n", oltaddrlo);
        if(err || oltaddrlo!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t oltaddrhi=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_olt_mac_addr_hi_set( %u)\n", oltaddrhi);
        if(!err) ag_drv_epn_olt_mac_addr_hi_set(oltaddrhi);
        if(!err) ag_drv_epn_olt_mac_addr_hi_get( &oltaddrhi);
        if(!err) bdmf_session_print(session, "ag_drv_epn_olt_mac_addr_hi_get( %u)\n", oltaddrhi);
        if(err || oltaddrhi!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t l1_acc_idx=gtmv(m, 5);
        bdmf_boolean l1sDquQueEmpty=gtmv(m, 1);
        if(!err) ag_drv_epn_tx_l1s_shp_dqu_empty_get( l1_acc_idx, &l1sDquQueEmpty);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_dqu_empty_get( %u %u)\n", l1_acc_idx, l1sDquQueEmpty);
    }
    {
        uint8_t l1_acc_idx=gtmv(m, 5);
        bdmf_boolean l1sUnshapedQueEmpty=gtmv(m, 1);
        if(!err) ag_drv_epn_tx_l1s_unshaped_empty_get( l1_acc_idx, &l1sUnshapedQueEmpty);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_unshaped_empty_get( %u %u)\n", l1_acc_idx, l1sUnshapedQueEmpty);
    }
    {
        uint8_t l2_queue_idx=gtmv(m, 5);
        bdmf_boolean l2sQueEmpty=gtmv(m, 1);
        if(!err) ag_drv_epn_tx_l2s_que_empty_get( l2_queue_idx, &l2sQueEmpty);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_empty_get( %u %u)\n", l2_queue_idx, l2sQueEmpty);
    }
    {
        uint8_t l2_queue_idx=gtmv(m, 5);
        bdmf_boolean l2sQueFull=gtmv(m, 1);
        if(!err) ag_drv_epn_tx_l2s_que_full_get( l2_queue_idx, &l2sQueFull);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_full_get( %u %u)\n", l2_queue_idx, l2sQueFull);
    }
    {
        uint8_t l2_queue_idx=gtmv(m, 5);
        bdmf_boolean l2sStoppedQueues=gtmv(m, 1);
        if(!err) ag_drv_epn_tx_l2s_que_stopped_get( l2_queue_idx, &l2sStoppedQueues);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_stopped_get( %u %u)\n", l2_queue_idx, l2sStoppedQueues);
    }
    {
        uint16_t cfgmaxoutstandingtardypackets=gtmv(m, 10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_max_outstanding_tardy_packets_set( %u)\n", cfgmaxoutstandingtardypackets);
        if(!err) ag_drv_epn_bbh_max_outstanding_tardy_packets_set(cfgmaxoutstandingtardypackets);
        if(!err) ag_drv_epn_bbh_max_outstanding_tardy_packets_get( &cfgmaxoutstandingtardypackets);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_max_outstanding_tardy_packets_get( %u)\n", cfgmaxoutstandingtardypackets);
        if(err || cfgmaxoutstandingtardypackets!=gtmv(m, 10))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t prvminreportdiff=gtmv(m, 14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_min_report_value_difference_set( %u)\n", prvminreportdiff);
        if(!err) ag_drv_epn_min_report_value_difference_set(prvminreportdiff);
        if(!err) ag_drv_epn_min_report_value_difference_get( &prvminreportdiff);
        if(!err) bdmf_session_print(session, "ag_drv_epn_min_report_value_difference_get( %u)\n", prvminreportdiff);
        if(err || prvminreportdiff!=gtmv(m, 14))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t bbh_queue_idx=gtmv(m, 5);
        bdmf_boolean utxBbhStatusFifoOverflow=gtmv(m, 1);
        if(!err) ag_drv_epn_bbh_status_fifo_overflow_get( bbh_queue_idx, &utxBbhStatusFifoOverflow);
        if(!err) bdmf_session_print(session, "ag_drv_epn_bbh_status_fifo_overflow_get( %u %u)\n", bbh_queue_idx, utxBbhStatusFifoOverflow);
    }
    {
        uint32_t cfgepnspare=gtmv(m, 30);
        bdmf_boolean ecoutxsnfenable=gtmv(m, 1);
        bdmf_boolean ecojira758enable=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_spare_ctl_set( %u %u %u)\n", cfgepnspare, ecoutxsnfenable, ecojira758enable);
        if(!err) ag_drv_epn_spare_ctl_set(cfgepnspare, ecoutxsnfenable, ecojira758enable);
        if(!err) ag_drv_epn_spare_ctl_get( &cfgepnspare, &ecoutxsnfenable, &ecojira758enable);
        if(!err) bdmf_session_print(session, "ag_drv_epn_spare_ctl_get( %u %u %u)\n", cfgepnspare, ecoutxsnfenable, ecojira758enable);
        if(err || cfgepnspare!=gtmv(m, 30) || ecoutxsnfenable!=gtmv(m, 1) || ecojira758enable!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean cfg_ts48_sync_ns_increment=gtmv(m, 1);
        uint16_t cfgtssyncoffset_312=gtmv(m, 9);
        uint16_t cfgtssyncoffset_125=gtmv(m, 9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_ts_sync_offset_set( %u %u %u)\n", cfg_ts48_sync_ns_increment, cfgtssyncoffset_312, cfgtssyncoffset_125);
        if(!err) ag_drv_epn_ts_sync_offset_set(cfg_ts48_sync_ns_increment, cfgtssyncoffset_312, cfgtssyncoffset_125);
        if(!err) ag_drv_epn_ts_sync_offset_get( &cfg_ts48_sync_ns_increment, &cfgtssyncoffset_312, &cfgtssyncoffset_125);
        if(!err) bdmf_session_print(session, "ag_drv_epn_ts_sync_offset_get( %u %u %u)\n", cfg_ts48_sync_ns_increment, cfgtssyncoffset_312, cfgtssyncoffset_125);
        if(err || cfg_ts48_sync_ns_increment!=gtmv(m, 1) || cfgtssyncoffset_312!=gtmv(m, 9) || cfgtssyncoffset_125!=gtmv(m, 9))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t cfgdntsoffset=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_ts_offset_set( %u)\n", cfgdntsoffset);
        if(!err) ag_drv_epn_dn_ts_offset_set(cfgdntsoffset);
        if(!err) ag_drv_epn_dn_ts_offset_get( &cfgdntsoffset);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_ts_offset_get( %u)\n", cfgdntsoffset);
        if(err || cfgdntsoffset!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t cfguptsoffset_lo=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_ts_offset_lo_set( %u)\n", cfguptsoffset_lo);
        if(!err) ag_drv_epn_up_ts_offset_lo_set(cfguptsoffset_lo);
        if(!err) ag_drv_epn_up_ts_offset_lo_get( &cfguptsoffset_lo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_ts_offset_lo_get( %u)\n", cfguptsoffset_lo);
        if(err || cfguptsoffset_lo!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfguptsoffset_hi=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_ts_offset_hi_set( %u)\n", cfguptsoffset_hi);
        if(!err) ag_drv_epn_up_ts_offset_hi_set(cfguptsoffset_hi);
        if(!err) ag_drv_epn_up_ts_offset_hi_get( &cfguptsoffset_hi);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_ts_offset_hi_get( %u)\n", cfguptsoffset_hi);
        if(err || cfguptsoffset_hi!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean twostepffrd=gtmv(m, 1);
        uint8_t twostepffentries=gtmv(m, 3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_two_step_ts_ctl_set( %u %u)\n", twostepffrd, twostepffentries);
        if(!err) ag_drv_epn_two_step_ts_ctl_set(twostepffrd, twostepffentries);
        if(!err) ag_drv_epn_two_step_ts_ctl_get( &twostepffrd, &twostepffentries);
        if(!err) bdmf_session_print(session, "ag_drv_epn_two_step_ts_ctl_get( %u %u)\n", twostepffrd, twostepffentries);
        if(err || twostepffrd!=gtmv(m, 1) || twostepffentries!=gtmv(m, 3))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t twosteptimestamp_lo=gtmv(m, 32);
        if(!err) ag_drv_epn_two_step_ts_value_lo_get( &twosteptimestamp_lo);
        if(!err) bdmf_session_print(session, "ag_drv_epn_two_step_ts_value_lo_get( %u)\n", twosteptimestamp_lo);
    }
    {
        uint16_t twosteptimestamp_hi=gtmv(m, 16);
        if(!err) ag_drv_epn_two_step_ts_value_hi_get( &twosteptimestamp_hi);
        if(!err) bdmf_session_print(session, "ag_drv_epn_two_step_ts_value_hi_get( %u)\n", twosteptimestamp_hi);
    }
    {
        bdmf_boolean int1588pktabort=gtmv(m, 1);
        bdmf_boolean int1588twostepffint=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_1588_timestamp_int_status_set( %u %u)\n", int1588pktabort, int1588twostepffint);
        if(!err) ag_drv_epn_1588_timestamp_int_status_set(int1588pktabort, int1588twostepffint);
        if(!err) ag_drv_epn_1588_timestamp_int_status_get( &int1588pktabort, &int1588twostepffint);
        if(!err) bdmf_session_print(session, "ag_drv_epn_1588_timestamp_int_status_get( %u %u)\n", int1588pktabort, int1588twostepffint);
        if(err || int1588pktabort!=gtmv(m, 1) || int1588twostepffint!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        bdmf_boolean ts1588pktabort_mask=gtmv(m, 1);
        bdmf_boolean ts1588twostepff_mask=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_1588_timestamp_int_mask_set( %u %u)\n", ts1588pktabort_mask, ts1588twostepff_mask);
        if(!err) ag_drv_epn_1588_timestamp_int_mask_set(ts1588pktabort_mask, ts1588twostepff_mask);
        if(!err) ag_drv_epn_1588_timestamp_int_mask_get( &ts1588pktabort_mask, &ts1588twostepff_mask);
        if(!err) bdmf_session_print(session, "ag_drv_epn_1588_timestamp_int_mask_get( %u %u)\n", ts1588pktabort_mask, ts1588twostepff_mask);
        if(err || ts1588pktabort_mask!=gtmv(m, 1) || ts1588twostepff_mask!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t uppacketfetchmargin=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_packet_fetch_margin_set( %u)\n", uppacketfetchmargin);
        if(!err) ag_drv_epn_up_packet_fetch_margin_set(uppacketfetchmargin);
        if(!err) ag_drv_epn_up_packet_fetch_margin_get( &uppacketfetchmargin);
        if(!err) bdmf_session_print(session, "ag_drv_epn_up_packet_fetch_margin_get( %u)\n", uppacketfetchmargin);
        if(err || uppacketfetchmargin!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t dn_1588_ts=gtmv(m, 32);
        if(!err) ag_drv_epn_dn_1588_timestamp_get( &dn_1588_ts);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dn_1588_timestamp_get( %u)\n", dn_1588_ts);
    }
    {
        uint16_t cfgpersrptduration=gtmv(m, 10);
        uint16_t cfgpersrptticksize=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_cfg_set( %u %u)\n", cfgpersrptduration, cfgpersrptticksize);
        if(!err) ag_drv_epn_persistent_report_cfg_set(cfgpersrptduration, cfgpersrptticksize);
        if(!err) ag_drv_epn_persistent_report_cfg_get( &cfgpersrptduration, &cfgpersrptticksize);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_cfg_get( %u %u)\n", cfgpersrptduration, cfgpersrptticksize);
        if(err || cfgpersrptduration!=gtmv(m, 10) || cfgpersrptticksize!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 5);
        bdmf_boolean cfgPersRptEnable=gtmv(m, 1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_enables_set( %u %u)\n", link_idx, cfgPersRptEnable);
        if(!err) ag_drv_epn_persistent_report_enables_set(link_idx, cfgPersRptEnable);
        if(!err) ag_drv_epn_persistent_report_enables_get( link_idx, &cfgPersRptEnable);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_enables_get( %u %u)\n", link_idx, cfgPersRptEnable);
        if(err || cfgPersRptEnable!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgpersrptreqtq=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_request_size_set( %u)\n", cfgpersrptreqtq);
        if(!err) ag_drv_epn_persistent_report_request_size_set(cfgpersrptreqtq);
        if(!err) ag_drv_epn_persistent_report_request_size_get( &cfgpersrptreqtq);
        if(!err) bdmf_session_print(session, "ag_drv_epn_persistent_report_request_size_get( %u)\n", cfgpersrptreqtq);
        if(err || cfgpersrptreqtq!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t link_idx=gtmv(m, 4);
        uint8_t prvUpstreamAesMode_1=gtmv(m, 2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_aes_configuration_1_set( %u %u)\n", link_idx, prvUpstreamAesMode_1);
        if(!err) ag_drv_epn_aes_configuration_1_set(link_idx, prvUpstreamAesMode_1);
        if(!err) ag_drv_epn_aes_configuration_1_get( link_idx, &prvUpstreamAesMode_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_aes_configuration_1_get( %u %u)\n", link_idx, prvUpstreamAesMode_1);
        if(err || prvUpstreamAesMode_1!=gtmv(m, 2))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_onu_pause_pfc_cfg onu_pause_pfc_cfg = {.cfgupfrefreshen=gtmv(m, 1), .cfgupfforcexoff=gtmv(m, 1), .cfgupfgengo=gtmv(m, 1), .cfgupfoveride=gtmv(m, 1), .cfgupftype=gtmv(m, 1), .cfgupfen=gtmv(m, 1), .cfgupfasyncbypassen=gtmv(m, 1), .cfgdpfpfcusesa=gtmv(m, 1), .cfgdpfforcexon=gtmv(m, 1), .cfgdpfenable=gtmv(m, 1), .cfgdpfoperatingmode=gtmv(m, 1), .cfgdpfpacketpassthroughen=gtmv(m, 1), .cfgdpfasyncbypassen=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_onu_pause_pfc_cfg_set( %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", onu_pause_pfc_cfg.cfgupfrefreshen, onu_pause_pfc_cfg.cfgupfforcexoff, onu_pause_pfc_cfg.cfgupfgengo, onu_pause_pfc_cfg.cfgupfoveride, onu_pause_pfc_cfg.cfgupftype, onu_pause_pfc_cfg.cfgupfen, onu_pause_pfc_cfg.cfgupfasyncbypassen, onu_pause_pfc_cfg.cfgdpfpfcusesa, onu_pause_pfc_cfg.cfgdpfforcexon, onu_pause_pfc_cfg.cfgdpfenable, onu_pause_pfc_cfg.cfgdpfoperatingmode, onu_pause_pfc_cfg.cfgdpfpacketpassthroughen, onu_pause_pfc_cfg.cfgdpfasyncbypassen);
        if(!err) ag_drv_epn_onu_pause_pfc_cfg_set(&onu_pause_pfc_cfg);
        if(!err) ag_drv_epn_onu_pause_pfc_cfg_get( &onu_pause_pfc_cfg);
        if(!err) bdmf_session_print(session, "ag_drv_epn_onu_pause_pfc_cfg_get( %u %u %u %u %u %u %u %u %u %u %u %u %u)\n", onu_pause_pfc_cfg.cfgupfrefreshen, onu_pause_pfc_cfg.cfgupfforcexoff, onu_pause_pfc_cfg.cfgupfgengo, onu_pause_pfc_cfg.cfgupfoveride, onu_pause_pfc_cfg.cfgupftype, onu_pause_pfc_cfg.cfgupfen, onu_pause_pfc_cfg.cfgupfasyncbypassen, onu_pause_pfc_cfg.cfgdpfpfcusesa, onu_pause_pfc_cfg.cfgdpfforcexon, onu_pause_pfc_cfg.cfgdpfenable, onu_pause_pfc_cfg.cfgdpfoperatingmode, onu_pause_pfc_cfg.cfgdpfpacketpassthroughen, onu_pause_pfc_cfg.cfgdpfasyncbypassen);
        if(err || onu_pause_pfc_cfg.cfgupfrefreshen!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupfforcexoff!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupfgengo!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupfoveride!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupftype!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupfen!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgupfasyncbypassen!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfpfcusesa!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfforcexon!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfenable!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfoperatingmode!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfpacketpassthroughen!=gtmv(m, 1) || onu_pause_pfc_cfg.cfgdpfasyncbypassen!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t cfgdpftimescale=gtmv(m, 4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_onu_pause_pfc_time_scale_set( %u)\n", cfgdpftimescale);
        if(!err) ag_drv_epn_onu_pause_pfc_time_scale_set(cfgdpftimescale);
        if(!err) ag_drv_epn_onu_pause_pfc_time_scale_get( &cfgdpftimescale);
        if(!err) bdmf_session_print(session, "ag_drv_epn_onu_pause_pfc_time_scale_get( %u)\n", cfgdpftimescale);
        if(err || cfgdpftimescale!=gtmv(m, 4))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_dpf_int_status dpf_int_status = {.intupfframesent=gtmv(m, 1), .intupfrefresh=gtmv(m, 1), .intupfreqcol=gtmv(m, 1), .intupfreqstatus=gtmv(m, 1), .intdpfrxframedropped=gtmv(m, 1), .intdpfrxframeabort=gtmv(m, 1), .intdpfrxframe=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_dpf_int_status_set( %u %u %u %u %u %u %u)\n", dpf_int_status.intupfframesent, dpf_int_status.intupfrefresh, dpf_int_status.intupfreqcol, dpf_int_status.intupfreqstatus, dpf_int_status.intdpfrxframedropped, dpf_int_status.intdpfrxframeabort, dpf_int_status.intdpfrxframe);
        if(!err) ag_drv_epn_dpf_int_status_set(&dpf_int_status);
        if(!err) ag_drv_epn_dpf_int_status_get( &dpf_int_status);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dpf_int_status_get( %u %u %u %u %u %u %u)\n", dpf_int_status.intupfframesent, dpf_int_status.intupfrefresh, dpf_int_status.intupfreqcol, dpf_int_status.intupfreqstatus, dpf_int_status.intdpfrxframedropped, dpf_int_status.intdpfrxframeabort, dpf_int_status.intdpfrxframe);
        if(err || dpf_int_status.intupfframesent!=gtmv(m, 1) || dpf_int_status.intupfrefresh!=gtmv(m, 1) || dpf_int_status.intupfreqcol!=gtmv(m, 1) || dpf_int_status.intupfreqstatus!=gtmv(m, 1) || dpf_int_status.intdpfrxframedropped!=gtmv(m, 1) || dpf_int_status.intdpfrxframeabort!=gtmv(m, 1) || dpf_int_status.intdpfrxframe!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        epn_dpf_int_mask dpf_int_mask = {.intupfframesentmask=gtmv(m, 1), .intupfrefreshmask=gtmv(m, 1), .intupfreqcolmask=gtmv(m, 1), .intupfreqstatusmask=gtmv(m, 1), .intdpfrxframedroppedmask=gtmv(m, 1), .intdpfrxframeabortmask=gtmv(m, 1), .intdpfrxframemask=gtmv(m, 1)};
        if(!err) bdmf_session_print(session, "ag_drv_epn_dpf_int_mask_set( %u %u %u %u %u %u %u)\n", dpf_int_mask.intupfframesentmask, dpf_int_mask.intupfrefreshmask, dpf_int_mask.intupfreqcolmask, dpf_int_mask.intupfreqstatusmask, dpf_int_mask.intdpfrxframedroppedmask, dpf_int_mask.intdpfrxframeabortmask, dpf_int_mask.intdpfrxframemask);
        if(!err) ag_drv_epn_dpf_int_mask_set(&dpf_int_mask);
        if(!err) ag_drv_epn_dpf_int_mask_get( &dpf_int_mask);
        if(!err) bdmf_session_print(session, "ag_drv_epn_dpf_int_mask_get( %u %u %u %u %u %u %u)\n", dpf_int_mask.intupfframesentmask, dpf_int_mask.intupfrefreshmask, dpf_int_mask.intupfreqcolmask, dpf_int_mask.intupfreqstatusmask, dpf_int_mask.intdpfrxframedroppedmask, dpf_int_mask.intdpfrxframeabortmask, dpf_int_mask.intdpfrxframemask);
        if(err || dpf_int_mask.intupfframesentmask!=gtmv(m, 1) || dpf_int_mask.intupfrefreshmask!=gtmv(m, 1) || dpf_int_mask.intupfreqcolmask!=gtmv(m, 1) || dpf_int_mask.intupfreqstatusmask!=gtmv(m, 1) || dpf_int_mask.intdpfrxframedroppedmask!=gtmv(m, 1) || dpf_int_mask.intdpfrxframeabortmask!=gtmv(m, 1) || dpf_int_mask.intdpfrxframemask!=gtmv(m, 1))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap0=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_0_set( %u)\n", burstcap0);
        if(!err) ag_drv_epn_burst_cap_0_set(burstcap0);
        if(!err) ag_drv_epn_burst_cap_0_get( &burstcap0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_0_get( %u)\n", burstcap0);
        if(err || burstcap0!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap1=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_1_set( %u)\n", burstcap1);
        if(!err) ag_drv_epn_burst_cap_1_set(burstcap1);
        if(!err) ag_drv_epn_burst_cap_1_get( &burstcap1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_1_get( %u)\n", burstcap1);
        if(err || burstcap1!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap2=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_2_set( %u)\n", burstcap2);
        if(!err) ag_drv_epn_burst_cap_2_set(burstcap2);
        if(!err) ag_drv_epn_burst_cap_2_get( &burstcap2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_2_get( %u)\n", burstcap2);
        if(err || burstcap2!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap3=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_3_set( %u)\n", burstcap3);
        if(!err) ag_drv_epn_burst_cap_3_set(burstcap3);
        if(!err) ag_drv_epn_burst_cap_3_get( &burstcap3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_3_get( %u)\n", burstcap3);
        if(err || burstcap3!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap4=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_4_set( %u)\n", burstcap4);
        if(!err) ag_drv_epn_burst_cap_4_set(burstcap4);
        if(!err) ag_drv_epn_burst_cap_4_get( &burstcap4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_4_get( %u)\n", burstcap4);
        if(err || burstcap4!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap5=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_5_set( %u)\n", burstcap5);
        if(!err) ag_drv_epn_burst_cap_5_set(burstcap5);
        if(!err) ag_drv_epn_burst_cap_5_get( &burstcap5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_5_get( %u)\n", burstcap5);
        if(err || burstcap5!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap6=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_6_set( %u)\n", burstcap6);
        if(!err) ag_drv_epn_burst_cap_6_set(burstcap6);
        if(!err) ag_drv_epn_burst_cap_6_get( &burstcap6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_6_get( %u)\n", burstcap6);
        if(err || burstcap6!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap7=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_7_set( %u)\n", burstcap7);
        if(!err) ag_drv_epn_burst_cap_7_set(burstcap7);
        if(!err) ag_drv_epn_burst_cap_7_get( &burstcap7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_7_get( %u)\n", burstcap7);
        if(err || burstcap7!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap0=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_0_set( %u)\n", quellidmap0);
        if(!err) ag_drv_epn_queue_llid_map_0_set(quellidmap0);
        if(!err) ag_drv_epn_queue_llid_map_0_get( &quellidmap0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_0_get( %u)\n", quellidmap0);
        if(err || quellidmap0!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap1=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_1_set( %u)\n", quellidmap1);
        if(!err) ag_drv_epn_queue_llid_map_1_set(quellidmap1);
        if(!err) ag_drv_epn_queue_llid_map_1_get( &quellidmap1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_1_get( %u)\n", quellidmap1);
        if(err || quellidmap1!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap2=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_2_set( %u)\n", quellidmap2);
        if(!err) ag_drv_epn_queue_llid_map_2_set(quellidmap2);
        if(!err) ag_drv_epn_queue_llid_map_2_get( &quellidmap2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_2_get( %u)\n", quellidmap2);
        if(err || quellidmap2!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap3=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_3_set( %u)\n", quellidmap3);
        if(!err) ag_drv_epn_queue_llid_map_3_set(quellidmap3);
        if(!err) ag_drv_epn_queue_llid_map_3_get( &quellidmap3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_3_get( %u)\n", quellidmap3);
        if(err || quellidmap3!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap4=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_4_set( %u)\n", quellidmap4);
        if(!err) ag_drv_epn_queue_llid_map_4_set(quellidmap4);
        if(!err) ag_drv_epn_queue_llid_map_4_get( &quellidmap4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_4_get( %u)\n", quellidmap4);
        if(err || quellidmap4!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap5=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_5_set( %u)\n", quellidmap5);
        if(!err) ag_drv_epn_queue_llid_map_5_set(quellidmap5);
        if(!err) ag_drv_epn_queue_llid_map_5_get( &quellidmap5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_5_get( %u)\n", quellidmap5);
        if(err || quellidmap5!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap6=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_6_set( %u)\n", quellidmap6);
        if(!err) ag_drv_epn_queue_llid_map_6_set(quellidmap6);
        if(!err) ag_drv_epn_queue_llid_map_6_get( &quellidmap6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_6_get( %u)\n", quellidmap6);
        if(err || quellidmap6!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap7=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_7_set( %u)\n", quellidmap7);
        if(!err) ag_drv_epn_queue_llid_map_7_set(quellidmap7);
        if(!err) ag_drv_epn_queue_llid_map_7_get( &quellidmap7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_7_get( %u)\n", quellidmap7);
        if(err || quellidmap7!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt0=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt0_set( %u)\n", unusedtqcnt0);
        if(!err) ag_drv_epn_unused_tq_cnt0_set(unusedtqcnt0);
        if(!err) ag_drv_epn_unused_tq_cnt0_get( &unusedtqcnt0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt0_get( %u)\n", unusedtqcnt0);
        if(err || unusedtqcnt0!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt1=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt1_set( %u)\n", unusedtqcnt1);
        if(!err) ag_drv_epn_unused_tq_cnt1_set(unusedtqcnt1);
        if(!err) ag_drv_epn_unused_tq_cnt1_get( &unusedtqcnt1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt1_get( %u)\n", unusedtqcnt1);
        if(err || unusedtqcnt1!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt2=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt2_set( %u)\n", unusedtqcnt2);
        if(!err) ag_drv_epn_unused_tq_cnt2_set(unusedtqcnt2);
        if(!err) ag_drv_epn_unused_tq_cnt2_get( &unusedtqcnt2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt2_get( %u)\n", unusedtqcnt2);
        if(err || unusedtqcnt2!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt3=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt3_set( %u)\n", unusedtqcnt3);
        if(!err) ag_drv_epn_unused_tq_cnt3_set(unusedtqcnt3);
        if(!err) ag_drv_epn_unused_tq_cnt3_get( &unusedtqcnt3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt3_get( %u)\n", unusedtqcnt3);
        if(err || unusedtqcnt3!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt4=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt4_set( %u)\n", unusedtqcnt4);
        if(!err) ag_drv_epn_unused_tq_cnt4_set(unusedtqcnt4);
        if(!err) ag_drv_epn_unused_tq_cnt4_get( &unusedtqcnt4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt4_get( %u)\n", unusedtqcnt4);
        if(err || unusedtqcnt4!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt5=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt5_set( %u)\n", unusedtqcnt5);
        if(!err) ag_drv_epn_unused_tq_cnt5_set(unusedtqcnt5);
        if(!err) ag_drv_epn_unused_tq_cnt5_get( &unusedtqcnt5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt5_get( %u)\n", unusedtqcnt5);
        if(err || unusedtqcnt5!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt6=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt6_set( %u)\n", unusedtqcnt6);
        if(!err) ag_drv_epn_unused_tq_cnt6_set(unusedtqcnt6);
        if(!err) ag_drv_epn_unused_tq_cnt6_get( &unusedtqcnt6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt6_get( %u)\n", unusedtqcnt6);
        if(err || unusedtqcnt6!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt7=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt7_set( %u)\n", unusedtqcnt7);
        if(!err) ag_drv_epn_unused_tq_cnt7_set(unusedtqcnt7);
        if(!err) ag_drv_epn_unused_tq_cnt7_get( &unusedtqcnt7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt7_get( %u)\n", unusedtqcnt7);
        if(err || unusedtqcnt7!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask0=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_0_set( %u)\n", cfgshpmask0);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_0_set(cfgshpmask0);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_0_get( &cfgshpmask0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_0_get( %u)\n", cfgshpmask0);
        if(err || cfgshpmask0!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_1_set( %u)\n", cfgshpmask1);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_1_set(cfgshpmask1);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_1_get( &cfgshpmask1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_1_get( %u)\n", cfgshpmask1);
        if(err || cfgshpmask1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_2_set( %u)\n", cfgshpmask2);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_2_set(cfgshpmask2);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_2_get( &cfgshpmask2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_2_get( %u)\n", cfgshpmask2);
        if(err || cfgshpmask2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_3_set( %u)\n", cfgshpmask3);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_3_set(cfgshpmask3);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_3_get( &cfgshpmask3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_3_get( %u)\n", cfgshpmask3);
        if(err || cfgshpmask3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask4=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_4_set( %u)\n", cfgshpmask4);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_4_set(cfgshpmask4);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_4_get( &cfgshpmask4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_4_get( %u)\n", cfgshpmask4);
        if(err || cfgshpmask4!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask5=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_5_set( %u)\n", cfgshpmask5);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_5_set(cfgshpmask5);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_5_get( &cfgshpmask5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_5_get( %u)\n", cfgshpmask5);
        if(err || cfgshpmask5!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask6=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_6_set( %u)\n", cfgshpmask6);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_6_set(cfgshpmask6);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_6_get( &cfgshpmask6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_6_get( %u)\n", cfgshpmask6);
        if(err || cfgshpmask6!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask7=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_7_set( %u)\n", cfgshpmask7);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_7_set(cfgshpmask7);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_7_get( &cfgshpmask7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_7_get( %u)\n", cfgshpmask7);
        if(err || cfgshpmask7!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend0=gtmv(m, 12);
        uint16_t cfgl2squestart0=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_0_set( %u %u)\n", cfgl2squeend0, cfgl2squestart0);
        if(!err) ag_drv_epn_tx_l2s_que_config_0_set(cfgl2squeend0, cfgl2squestart0);
        if(!err) ag_drv_epn_tx_l2s_que_config_0_get( &cfgl2squeend0, &cfgl2squestart0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_0_get( %u %u)\n", cfgl2squeend0, cfgl2squestart0);
        if(err || cfgl2squeend0!=gtmv(m, 12) || cfgl2squestart0!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend1=gtmv(m, 12);
        uint16_t cfgl2squestart1=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_1_set( %u %u)\n", cfgl2squeend1, cfgl2squestart1);
        if(!err) ag_drv_epn_tx_l2s_que_config_1_set(cfgl2squeend1, cfgl2squestart1);
        if(!err) ag_drv_epn_tx_l2s_que_config_1_get( &cfgl2squeend1, &cfgl2squestart1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_1_get( %u %u)\n", cfgl2squeend1, cfgl2squestart1);
        if(err || cfgl2squeend1!=gtmv(m, 12) || cfgl2squestart1!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend2=gtmv(m, 12);
        uint16_t cfgl2squestart2=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_2_set( %u %u)\n", cfgl2squeend2, cfgl2squestart2);
        if(!err) ag_drv_epn_tx_l2s_que_config_2_set(cfgl2squeend2, cfgl2squestart2);
        if(!err) ag_drv_epn_tx_l2s_que_config_2_get( &cfgl2squeend2, &cfgl2squestart2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_2_get( %u %u)\n", cfgl2squeend2, cfgl2squestart2);
        if(err || cfgl2squeend2!=gtmv(m, 12) || cfgl2squestart2!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend3=gtmv(m, 12);
        uint16_t cfgl2squestart3=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_3_set( %u %u)\n", cfgl2squeend3, cfgl2squestart3);
        if(!err) ag_drv_epn_tx_l2s_que_config_3_set(cfgl2squeend3, cfgl2squestart3);
        if(!err) ag_drv_epn_tx_l2s_que_config_3_get( &cfgl2squeend3, &cfgl2squestart3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_3_get( %u %u)\n", cfgl2squeend3, cfgl2squestart3);
        if(err || cfgl2squeend3!=gtmv(m, 12) || cfgl2squestart3!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend4=gtmv(m, 12);
        uint16_t cfgl2squestart4=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_4_set( %u %u)\n", cfgl2squeend4, cfgl2squestart4);
        if(!err) ag_drv_epn_tx_l2s_que_config_4_set(cfgl2squeend4, cfgl2squestart4);
        if(!err) ag_drv_epn_tx_l2s_que_config_4_get( &cfgl2squeend4, &cfgl2squestart4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_4_get( %u %u)\n", cfgl2squeend4, cfgl2squestart4);
        if(err || cfgl2squeend4!=gtmv(m, 12) || cfgl2squestart4!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend5=gtmv(m, 12);
        uint16_t cfgl2squestart5=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_5_set( %u %u)\n", cfgl2squeend5, cfgl2squestart5);
        if(!err) ag_drv_epn_tx_l2s_que_config_5_set(cfgl2squeend5, cfgl2squestart5);
        if(!err) ag_drv_epn_tx_l2s_que_config_5_get( &cfgl2squeend5, &cfgl2squestart5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_5_get( %u %u)\n", cfgl2squeend5, cfgl2squestart5);
        if(err || cfgl2squeend5!=gtmv(m, 12) || cfgl2squestart5!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend6=gtmv(m, 12);
        uint16_t cfgl2squestart6=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_6_set( %u %u)\n", cfgl2squeend6, cfgl2squestart6);
        if(!err) ag_drv_epn_tx_l2s_que_config_6_set(cfgl2squeend6, cfgl2squestart6);
        if(!err) ag_drv_epn_tx_l2s_que_config_6_get( &cfgl2squeend6, &cfgl2squestart6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_6_get( %u %u)\n", cfgl2squeend6, cfgl2squestart6);
        if(err || cfgl2squeend6!=gtmv(m, 12) || cfgl2squestart6!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend7=gtmv(m, 12);
        uint16_t cfgl2squestart7=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_7_set( %u %u)\n", cfgl2squeend7, cfgl2squestart7);
        if(!err) ag_drv_epn_tx_l2s_que_config_7_set(cfgl2squeend7, cfgl2squestart7);
        if(!err) ag_drv_epn_tx_l2s_que_config_7_get( &cfgl2squeend7, &cfgl2squestart7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_7_get( %u %u)\n", cfgl2squeend7, cfgl2squestart7);
        if(err || cfgl2squeend7!=gtmv(m, 12) || cfgl2squestart7!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit0=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_0_set( %u)\n", prvburstlimit0);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_0_set(prvburstlimit0);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_0_get( &prvburstlimit0);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_0_get( %u)\n", prvburstlimit0);
        if(err || prvburstlimit0!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit1=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_1_set( %u)\n", prvburstlimit1);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_1_set(prvburstlimit1);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_1_get( &prvburstlimit1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_1_get( %u)\n", prvburstlimit1);
        if(err || prvburstlimit1!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit2=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_2_set( %u)\n", prvburstlimit2);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_2_set(prvburstlimit2);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_2_get( &prvburstlimit2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_2_get( %u)\n", prvburstlimit2);
        if(err || prvburstlimit2!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit3=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_3_set( %u)\n", prvburstlimit3);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_3_set(prvburstlimit3);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_3_get( &prvburstlimit3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_3_get( %u)\n", prvburstlimit3);
        if(err || prvburstlimit3!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit4=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_4_set( %u)\n", prvburstlimit4);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_4_set(prvburstlimit4);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_4_get( &prvburstlimit4);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_4_get( %u)\n", prvburstlimit4);
        if(err || prvburstlimit4!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit5=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_5_set( %u)\n", prvburstlimit5);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_5_set(prvburstlimit5);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_5_get( &prvburstlimit5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_5_get( %u)\n", prvburstlimit5);
        if(err || prvburstlimit5!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit6=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_6_set( %u)\n", prvburstlimit6);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_6_set(prvburstlimit6);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_6_get( &prvburstlimit6);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_6_get( %u)\n", prvburstlimit6);
        if(err || prvburstlimit6!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit7=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_7_set( %u)\n", prvburstlimit7);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_7_set(prvburstlimit7);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_7_get( &prvburstlimit7);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_7_get( %u)\n", prvburstlimit7);
        if(err || prvburstlimit7!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap8=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_8_set( %u)\n", burstcap8);
        if(!err) ag_drv_epn_burst_cap_8_set(burstcap8);
        if(!err) ag_drv_epn_burst_cap_8_get( &burstcap8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_8_get( %u)\n", burstcap8);
        if(err || burstcap8!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap9=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_9_set( %u)\n", burstcap9);
        if(!err) ag_drv_epn_burst_cap_9_set(burstcap9);
        if(!err) ag_drv_epn_burst_cap_9_get( &burstcap9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_9_get( %u)\n", burstcap9);
        if(err || burstcap9!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap10=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_10_set( %u)\n", burstcap10);
        if(!err) ag_drv_epn_burst_cap_10_set(burstcap10);
        if(!err) ag_drv_epn_burst_cap_10_get( &burstcap10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_10_get( %u)\n", burstcap10);
        if(err || burstcap10!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap11=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_11_set( %u)\n", burstcap11);
        if(!err) ag_drv_epn_burst_cap_11_set(burstcap11);
        if(!err) ag_drv_epn_burst_cap_11_get( &burstcap11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_11_get( %u)\n", burstcap11);
        if(err || burstcap11!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap12=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_12_set( %u)\n", burstcap12);
        if(!err) ag_drv_epn_burst_cap_12_set(burstcap12);
        if(!err) ag_drv_epn_burst_cap_12_get( &burstcap12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_12_get( %u)\n", burstcap12);
        if(err || burstcap12!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap13=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_13_set( %u)\n", burstcap13);
        if(!err) ag_drv_epn_burst_cap_13_set(burstcap13);
        if(!err) ag_drv_epn_burst_cap_13_get( &burstcap13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_13_get( %u)\n", burstcap13);
        if(err || burstcap13!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap14=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_14_set( %u)\n", burstcap14);
        if(!err) ag_drv_epn_burst_cap_14_set(burstcap14);
        if(!err) ag_drv_epn_burst_cap_14_get( &burstcap14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_14_get( %u)\n", burstcap14);
        if(err || burstcap14!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t burstcap15=gtmv(m, 20);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_15_set( %u)\n", burstcap15);
        if(!err) ag_drv_epn_burst_cap_15_set(burstcap15);
        if(!err) ag_drv_epn_burst_cap_15_get( &burstcap15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_burst_cap_15_get( %u)\n", burstcap15);
        if(err || burstcap15!=gtmv(m, 20))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap8=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_8_set( %u)\n", quellidmap8);
        if(!err) ag_drv_epn_queue_llid_map_8_set(quellidmap8);
        if(!err) ag_drv_epn_queue_llid_map_8_get( &quellidmap8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_8_get( %u)\n", quellidmap8);
        if(err || quellidmap8!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap9=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_9_set( %u)\n", quellidmap9);
        if(!err) ag_drv_epn_queue_llid_map_9_set(quellidmap9);
        if(!err) ag_drv_epn_queue_llid_map_9_get( &quellidmap9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_9_get( %u)\n", quellidmap9);
        if(err || quellidmap9!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap10=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_10_set( %u)\n", quellidmap10);
        if(!err) ag_drv_epn_queue_llid_map_10_set(quellidmap10);
        if(!err) ag_drv_epn_queue_llid_map_10_get( &quellidmap10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_10_get( %u)\n", quellidmap10);
        if(err || quellidmap10!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap11=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_11_set( %u)\n", quellidmap11);
        if(!err) ag_drv_epn_queue_llid_map_11_set(quellidmap11);
        if(!err) ag_drv_epn_queue_llid_map_11_get( &quellidmap11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_11_get( %u)\n", quellidmap11);
        if(err || quellidmap11!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap12=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_12_set( %u)\n", quellidmap12);
        if(!err) ag_drv_epn_queue_llid_map_12_set(quellidmap12);
        if(!err) ag_drv_epn_queue_llid_map_12_get( &quellidmap12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_12_get( %u)\n", quellidmap12);
        if(err || quellidmap12!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap13=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_13_set( %u)\n", quellidmap13);
        if(!err) ag_drv_epn_queue_llid_map_13_set(quellidmap13);
        if(!err) ag_drv_epn_queue_llid_map_13_get( &quellidmap13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_13_get( %u)\n", quellidmap13);
        if(err || quellidmap13!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap14=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_14_set( %u)\n", quellidmap14);
        if(!err) ag_drv_epn_queue_llid_map_14_set(quellidmap14);
        if(!err) ag_drv_epn_queue_llid_map_14_get( &quellidmap14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_14_get( %u)\n", quellidmap14);
        if(err || quellidmap14!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint8_t quellidmap15=gtmv(m, 5);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_15_set( %u)\n", quellidmap15);
        if(!err) ag_drv_epn_queue_llid_map_15_set(quellidmap15);
        if(!err) ag_drv_epn_queue_llid_map_15_get( &quellidmap15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_queue_llid_map_15_get( %u)\n", quellidmap15);
        if(err || quellidmap15!=gtmv(m, 5))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt8=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt8_set( %u)\n", unusedtqcnt8);
        if(!err) ag_drv_epn_unused_tq_cnt8_set(unusedtqcnt8);
        if(!err) ag_drv_epn_unused_tq_cnt8_get( &unusedtqcnt8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt8_get( %u)\n", unusedtqcnt8);
        if(err || unusedtqcnt8!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt9=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt9_set( %u)\n", unusedtqcnt9);
        if(!err) ag_drv_epn_unused_tq_cnt9_set(unusedtqcnt9);
        if(!err) ag_drv_epn_unused_tq_cnt9_get( &unusedtqcnt9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt9_get( %u)\n", unusedtqcnt9);
        if(err || unusedtqcnt9!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt10=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt10_set( %u)\n", unusedtqcnt10);
        if(!err) ag_drv_epn_unused_tq_cnt10_set(unusedtqcnt10);
        if(!err) ag_drv_epn_unused_tq_cnt10_get( &unusedtqcnt10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt10_get( %u)\n", unusedtqcnt10);
        if(err || unusedtqcnt10!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt11=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt11_set( %u)\n", unusedtqcnt11);
        if(!err) ag_drv_epn_unused_tq_cnt11_set(unusedtqcnt11);
        if(!err) ag_drv_epn_unused_tq_cnt11_get( &unusedtqcnt11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt11_get( %u)\n", unusedtqcnt11);
        if(err || unusedtqcnt11!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt12=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt12_set( %u)\n", unusedtqcnt12);
        if(!err) ag_drv_epn_unused_tq_cnt12_set(unusedtqcnt12);
        if(!err) ag_drv_epn_unused_tq_cnt12_get( &unusedtqcnt12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt12_get( %u)\n", unusedtqcnt12);
        if(err || unusedtqcnt12!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt13=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt13_set( %u)\n", unusedtqcnt13);
        if(!err) ag_drv_epn_unused_tq_cnt13_set(unusedtqcnt13);
        if(!err) ag_drv_epn_unused_tq_cnt13_get( &unusedtqcnt13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt13_get( %u)\n", unusedtqcnt13);
        if(err || unusedtqcnt13!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt14=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt14_set( %u)\n", unusedtqcnt14);
        if(!err) ag_drv_epn_unused_tq_cnt14_set(unusedtqcnt14);
        if(!err) ag_drv_epn_unused_tq_cnt14_get( &unusedtqcnt14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt14_get( %u)\n", unusedtqcnt14);
        if(err || unusedtqcnt14!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t unusedtqcnt15=gtmv(m, 32);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt15_set( %u)\n", unusedtqcnt15);
        if(!err) ag_drv_epn_unused_tq_cnt15_set(unusedtqcnt15);
        if(!err) ag_drv_epn_unused_tq_cnt15_get( &unusedtqcnt15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_unused_tq_cnt15_get( %u)\n", unusedtqcnt15);
        if(err || unusedtqcnt15!=gtmv(m, 32))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask8=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_8_set( %u)\n", cfgshpmask8);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_8_set(cfgshpmask8);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_8_get( &cfgshpmask8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_8_get( %u)\n", cfgshpmask8);
        if(err || cfgshpmask8!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask9=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_9_set( %u)\n", cfgshpmask9);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_9_set(cfgshpmask9);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_9_get( &cfgshpmask9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_9_get( %u)\n", cfgshpmask9);
        if(err || cfgshpmask9!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask10=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_10_set( %u)\n", cfgshpmask10);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_10_set(cfgshpmask10);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_10_get( &cfgshpmask10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_10_get( %u)\n", cfgshpmask10);
        if(err || cfgshpmask10!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask11=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_11_set( %u)\n", cfgshpmask11);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_11_set(cfgshpmask11);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_11_get( &cfgshpmask11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_11_get( %u)\n", cfgshpmask11);
        if(err || cfgshpmask11!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask12=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_12_set( %u)\n", cfgshpmask12);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_12_set(cfgshpmask12);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_12_get( &cfgshpmask12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_12_get( %u)\n", cfgshpmask12);
        if(err || cfgshpmask12!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask13=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_13_set( %u)\n", cfgshpmask13);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_13_set(cfgshpmask13);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_13_get( &cfgshpmask13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_13_get( %u)\n", cfgshpmask13);
        if(err || cfgshpmask13!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask14=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_14_set( %u)\n", cfgshpmask14);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_14_set(cfgshpmask14);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_14_get( &cfgshpmask14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_14_get( %u)\n", cfgshpmask14);
        if(err || cfgshpmask14!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgshpmask15=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_15_set( %u)\n", cfgshpmask15);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_15_set(cfgshpmask15);
        if(!err) ag_drv_epn_tx_l1s_shp_que_mask_15_get( &cfgshpmask15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l1s_shp_que_mask_15_get( %u)\n", cfgshpmask15);
        if(err || cfgshpmask15!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend8=gtmv(m, 12);
        uint16_t cfgl2squestart8=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_8_set( %u %u)\n", cfgl2squeend8, cfgl2squestart8);
        if(!err) ag_drv_epn_tx_l2s_que_config_8_set(cfgl2squeend8, cfgl2squestart8);
        if(!err) ag_drv_epn_tx_l2s_que_config_8_get( &cfgl2squeend8, &cfgl2squestart8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_8_get( %u %u)\n", cfgl2squeend8, cfgl2squestart8);
        if(err || cfgl2squeend8!=gtmv(m, 12) || cfgl2squestart8!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend9=gtmv(m, 12);
        uint16_t cfgl2squestart9=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_9_set( %u %u)\n", cfgl2squeend9, cfgl2squestart9);
        if(!err) ag_drv_epn_tx_l2s_que_config_9_set(cfgl2squeend9, cfgl2squestart9);
        if(!err) ag_drv_epn_tx_l2s_que_config_9_get( &cfgl2squeend9, &cfgl2squestart9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_9_get( %u %u)\n", cfgl2squeend9, cfgl2squestart9);
        if(err || cfgl2squeend9!=gtmv(m, 12) || cfgl2squestart9!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend10=gtmv(m, 12);
        uint16_t cfgl2squestart10=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_10_set( %u %u)\n", cfgl2squeend10, cfgl2squestart10);
        if(!err) ag_drv_epn_tx_l2s_que_config_10_set(cfgl2squeend10, cfgl2squestart10);
        if(!err) ag_drv_epn_tx_l2s_que_config_10_get( &cfgl2squeend10, &cfgl2squestart10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_10_get( %u %u)\n", cfgl2squeend10, cfgl2squestart10);
        if(err || cfgl2squeend10!=gtmv(m, 12) || cfgl2squestart10!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend11=gtmv(m, 12);
        uint16_t cfgl2squestart11=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_11_set( %u %u)\n", cfgl2squeend11, cfgl2squestart11);
        if(!err) ag_drv_epn_tx_l2s_que_config_11_set(cfgl2squeend11, cfgl2squestart11);
        if(!err) ag_drv_epn_tx_l2s_que_config_11_get( &cfgl2squeend11, &cfgl2squestart11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_11_get( %u %u)\n", cfgl2squeend11, cfgl2squestart11);
        if(err || cfgl2squeend11!=gtmv(m, 12) || cfgl2squestart11!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend12=gtmv(m, 12);
        uint16_t cfgl2squestart12=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_12_set( %u %u)\n", cfgl2squeend12, cfgl2squestart12);
        if(!err) ag_drv_epn_tx_l2s_que_config_12_set(cfgl2squeend12, cfgl2squestart12);
        if(!err) ag_drv_epn_tx_l2s_que_config_12_get( &cfgl2squeend12, &cfgl2squestart12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_12_get( %u %u)\n", cfgl2squeend12, cfgl2squestart12);
        if(err || cfgl2squeend12!=gtmv(m, 12) || cfgl2squestart12!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend13=gtmv(m, 12);
        uint16_t cfgl2squestart13=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_13_set( %u %u)\n", cfgl2squeend13, cfgl2squestart13);
        if(!err) ag_drv_epn_tx_l2s_que_config_13_set(cfgl2squeend13, cfgl2squestart13);
        if(!err) ag_drv_epn_tx_l2s_que_config_13_get( &cfgl2squeend13, &cfgl2squestart13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_13_get( %u %u)\n", cfgl2squeend13, cfgl2squestart13);
        if(err || cfgl2squeend13!=gtmv(m, 12) || cfgl2squestart13!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend14=gtmv(m, 12);
        uint16_t cfgl2squestart14=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_14_set( %u %u)\n", cfgl2squeend14, cfgl2squestart14);
        if(!err) ag_drv_epn_tx_l2s_que_config_14_set(cfgl2squeend14, cfgl2squestart14);
        if(!err) ag_drv_epn_tx_l2s_que_config_14_get( &cfgl2squeend14, &cfgl2squestart14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_14_get( %u %u)\n", cfgl2squeend14, cfgl2squestart14);
        if(err || cfgl2squeend14!=gtmv(m, 12) || cfgl2squestart14!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgl2squeend15=gtmv(m, 12);
        uint16_t cfgl2squestart15=gtmv(m, 12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_15_set( %u %u)\n", cfgl2squeend15, cfgl2squestart15);
        if(!err) ag_drv_epn_tx_l2s_que_config_15_set(cfgl2squeend15, cfgl2squestart15);
        if(!err) ag_drv_epn_tx_l2s_que_config_15_get( &cfgl2squeend15, &cfgl2squestart15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_l2s_que_config_15_get( %u %u)\n", cfgl2squeend15, cfgl2squestart15);
        if(err || cfgl2squeend15!=gtmv(m, 12) || cfgl2squestart15!=gtmv(m, 12))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit8=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_8_set( %u)\n", prvburstlimit8);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_8_set(prvburstlimit8);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_8_get( &prvburstlimit8);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_8_get( %u)\n", prvburstlimit8);
        if(err || prvburstlimit8!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit9=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_9_set( %u)\n", prvburstlimit9);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_9_set(prvburstlimit9);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_9_get( &prvburstlimit9);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_9_get( %u)\n", prvburstlimit9);
        if(err || prvburstlimit9!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit10=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_10_set( %u)\n", prvburstlimit10);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_10_set(prvburstlimit10);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_10_get( &prvburstlimit10);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_10_get( %u)\n", prvburstlimit10);
        if(err || prvburstlimit10!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit11=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_11_set( %u)\n", prvburstlimit11);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_11_set(prvburstlimit11);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_11_get( &prvburstlimit11);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_11_get( %u)\n", prvburstlimit11);
        if(err || prvburstlimit11!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit12=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_12_set( %u)\n", prvburstlimit12);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_12_set(prvburstlimit12);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_12_get( &prvburstlimit12);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_12_get( %u)\n", prvburstlimit12);
        if(err || prvburstlimit12!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit13=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_13_set( %u)\n", prvburstlimit13);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_13_set(prvburstlimit13);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_13_get( &prvburstlimit13);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_13_get( %u)\n", prvburstlimit13);
        if(err || prvburstlimit13!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit14=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_14_set( %u)\n", prvburstlimit14);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_14_set(prvburstlimit14);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_14_get( &prvburstlimit14);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_14_get( %u)\n", prvburstlimit14);
        if(err || prvburstlimit14!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint32_t prvburstlimit15=gtmv(m, 18);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_15_set( %u)\n", prvburstlimit15);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_15_set(prvburstlimit15);
        if(!err) ag_drv_epn_tx_ctc_burst_limit_15_get( &prvburstlimit15);
        if(!err) bdmf_session_print(session, "ag_drv_epn_tx_ctc_burst_limit_15_get( %u)\n", prvburstlimit15);
        if(err || prvburstlimit15!=gtmv(m, 18))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap0_2=gtmv(m, 16);
        uint16_t cfgaddburstcap0_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size0_set( %u %u)\n", cfgaddburstcap0_2, cfgaddburstcap0_1);
        if(!err) ag_drv_epn_10g_abc_size0_set(cfgaddburstcap0_2, cfgaddburstcap0_1);
        if(!err) ag_drv_epn_10g_abc_size0_get( &cfgaddburstcap0_2, &cfgaddburstcap0_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size0_get( %u %u)\n", cfgaddburstcap0_2, cfgaddburstcap0_1);
        if(err || cfgaddburstcap0_2!=gtmv(m, 16) || cfgaddburstcap0_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap1_1=gtmv(m, 16);
        uint16_t cfgaddburstcap0_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size1_set( %u %u)\n", cfgaddburstcap1_1, cfgaddburstcap0_3);
        if(!err) ag_drv_epn_10g_abc_size1_set(cfgaddburstcap1_1, cfgaddburstcap0_3);
        if(!err) ag_drv_epn_10g_abc_size1_get( &cfgaddburstcap1_1, &cfgaddburstcap0_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size1_get( %u %u)\n", cfgaddburstcap1_1, cfgaddburstcap0_3);
        if(err || cfgaddburstcap1_1!=gtmv(m, 16) || cfgaddburstcap0_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap1_3=gtmv(m, 16);
        uint16_t cfgaddburstcap1_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size2_set( %u %u)\n", cfgaddburstcap1_3, cfgaddburstcap1_2);
        if(!err) ag_drv_epn_10g_abc_size2_set(cfgaddburstcap1_3, cfgaddburstcap1_2);
        if(!err) ag_drv_epn_10g_abc_size2_get( &cfgaddburstcap1_3, &cfgaddburstcap1_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size2_get( %u %u)\n", cfgaddburstcap1_3, cfgaddburstcap1_2);
        if(err || cfgaddburstcap1_3!=gtmv(m, 16) || cfgaddburstcap1_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap2_2=gtmv(m, 16);
        uint16_t cfgaddburstcap2_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size3_set( %u %u)\n", cfgaddburstcap2_2, cfgaddburstcap2_1);
        if(!err) ag_drv_epn_10g_abc_size3_set(cfgaddburstcap2_2, cfgaddburstcap2_1);
        if(!err) ag_drv_epn_10g_abc_size3_get( &cfgaddburstcap2_2, &cfgaddburstcap2_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size3_get( %u %u)\n", cfgaddburstcap2_2, cfgaddburstcap2_1);
        if(err || cfgaddburstcap2_2!=gtmv(m, 16) || cfgaddburstcap2_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap3_1=gtmv(m, 16);
        uint16_t cfgaddburstcap2_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size4_set( %u %u)\n", cfgaddburstcap3_1, cfgaddburstcap2_3);
        if(!err) ag_drv_epn_10g_abc_size4_set(cfgaddburstcap3_1, cfgaddburstcap2_3);
        if(!err) ag_drv_epn_10g_abc_size4_get( &cfgaddburstcap3_1, &cfgaddburstcap2_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size4_get( %u %u)\n", cfgaddburstcap3_1, cfgaddburstcap2_3);
        if(err || cfgaddburstcap3_1!=gtmv(m, 16) || cfgaddburstcap2_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap3_3=gtmv(m, 16);
        uint16_t cfgaddburstcap3_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size5_set( %u %u)\n", cfgaddburstcap3_3, cfgaddburstcap3_2);
        if(!err) ag_drv_epn_10g_abc_size5_set(cfgaddburstcap3_3, cfgaddburstcap3_2);
        if(!err) ag_drv_epn_10g_abc_size5_get( &cfgaddburstcap3_3, &cfgaddburstcap3_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size5_get( %u %u)\n", cfgaddburstcap3_3, cfgaddburstcap3_2);
        if(err || cfgaddburstcap3_3!=gtmv(m, 16) || cfgaddburstcap3_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap4_2=gtmv(m, 16);
        uint16_t cfgaddburstcap4_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size6_set( %u %u)\n", cfgaddburstcap4_2, cfgaddburstcap4_1);
        if(!err) ag_drv_epn_10g_abc_size6_set(cfgaddburstcap4_2, cfgaddburstcap4_1);
        if(!err) ag_drv_epn_10g_abc_size6_get( &cfgaddburstcap4_2, &cfgaddburstcap4_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size6_get( %u %u)\n", cfgaddburstcap4_2, cfgaddburstcap4_1);
        if(err || cfgaddburstcap4_2!=gtmv(m, 16) || cfgaddburstcap4_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap5_1=gtmv(m, 16);
        uint16_t cfgaddburstcap4_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size7_set( %u %u)\n", cfgaddburstcap5_1, cfgaddburstcap4_3);
        if(!err) ag_drv_epn_10g_abc_size7_set(cfgaddburstcap5_1, cfgaddburstcap4_3);
        if(!err) ag_drv_epn_10g_abc_size7_get( &cfgaddburstcap5_1, &cfgaddburstcap4_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size7_get( %u %u)\n", cfgaddburstcap5_1, cfgaddburstcap4_3);
        if(err || cfgaddburstcap5_1!=gtmv(m, 16) || cfgaddburstcap4_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap5_3=gtmv(m, 16);
        uint16_t cfgaddburstcap5_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size8_set( %u %u)\n", cfgaddburstcap5_3, cfgaddburstcap5_2);
        if(!err) ag_drv_epn_10g_abc_size8_set(cfgaddburstcap5_3, cfgaddburstcap5_2);
        if(!err) ag_drv_epn_10g_abc_size8_get( &cfgaddburstcap5_3, &cfgaddburstcap5_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size8_get( %u %u)\n", cfgaddburstcap5_3, cfgaddburstcap5_2);
        if(err || cfgaddburstcap5_3!=gtmv(m, 16) || cfgaddburstcap5_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap6_2=gtmv(m, 16);
        uint16_t cfgaddburstcap6_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size9_set( %u %u)\n", cfgaddburstcap6_2, cfgaddburstcap6_1);
        if(!err) ag_drv_epn_10g_abc_size9_set(cfgaddburstcap6_2, cfgaddburstcap6_1);
        if(!err) ag_drv_epn_10g_abc_size9_get( &cfgaddburstcap6_2, &cfgaddburstcap6_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size9_get( %u %u)\n", cfgaddburstcap6_2, cfgaddburstcap6_1);
        if(err || cfgaddburstcap6_2!=gtmv(m, 16) || cfgaddburstcap6_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap7_1=gtmv(m, 16);
        uint16_t cfgaddburstcap6_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size10_set( %u %u)\n", cfgaddburstcap7_1, cfgaddburstcap6_3);
        if(!err) ag_drv_epn_10g_abc_size10_set(cfgaddburstcap7_1, cfgaddburstcap6_3);
        if(!err) ag_drv_epn_10g_abc_size10_get( &cfgaddburstcap7_1, &cfgaddburstcap6_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size10_get( %u %u)\n", cfgaddburstcap7_1, cfgaddburstcap6_3);
        if(err || cfgaddburstcap7_1!=gtmv(m, 16) || cfgaddburstcap6_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap7_3=gtmv(m, 16);
        uint16_t cfgaddburstcap7_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size11_set( %u %u)\n", cfgaddburstcap7_3, cfgaddburstcap7_2);
        if(!err) ag_drv_epn_10g_abc_size11_set(cfgaddburstcap7_3, cfgaddburstcap7_2);
        if(!err) ag_drv_epn_10g_abc_size11_get( &cfgaddburstcap7_3, &cfgaddburstcap7_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size11_get( %u %u)\n", cfgaddburstcap7_3, cfgaddburstcap7_2);
        if(err || cfgaddburstcap7_3!=gtmv(m, 16) || cfgaddburstcap7_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap8_2=gtmv(m, 16);
        uint16_t cfgaddburstcap8_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size12_set( %u %u)\n", cfgaddburstcap8_2, cfgaddburstcap8_1);
        if(!err) ag_drv_epn_10g_abc_size12_set(cfgaddburstcap8_2, cfgaddburstcap8_1);
        if(!err) ag_drv_epn_10g_abc_size12_get( &cfgaddburstcap8_2, &cfgaddburstcap8_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size12_get( %u %u)\n", cfgaddburstcap8_2, cfgaddburstcap8_1);
        if(err || cfgaddburstcap8_2!=gtmv(m, 16) || cfgaddburstcap8_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap9_1=gtmv(m, 16);
        uint16_t cfgaddburstcap8_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size13_set( %u %u)\n", cfgaddburstcap9_1, cfgaddburstcap8_3);
        if(!err) ag_drv_epn_10g_abc_size13_set(cfgaddburstcap9_1, cfgaddburstcap8_3);
        if(!err) ag_drv_epn_10g_abc_size13_get( &cfgaddburstcap9_1, &cfgaddburstcap8_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size13_get( %u %u)\n", cfgaddburstcap9_1, cfgaddburstcap8_3);
        if(err || cfgaddburstcap9_1!=gtmv(m, 16) || cfgaddburstcap8_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap9_3=gtmv(m, 16);
        uint16_t cfgaddburstcap9_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size14_set( %u %u)\n", cfgaddburstcap9_3, cfgaddburstcap9_2);
        if(!err) ag_drv_epn_10g_abc_size14_set(cfgaddburstcap9_3, cfgaddburstcap9_2);
        if(!err) ag_drv_epn_10g_abc_size14_get( &cfgaddburstcap9_3, &cfgaddburstcap9_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size14_get( %u %u)\n", cfgaddburstcap9_3, cfgaddburstcap9_2);
        if(err || cfgaddburstcap9_3!=gtmv(m, 16) || cfgaddburstcap9_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap10_2=gtmv(m, 16);
        uint16_t cfgaddburstcap10_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size15_set( %u %u)\n", cfgaddburstcap10_2, cfgaddburstcap10_1);
        if(!err) ag_drv_epn_10g_abc_size15_set(cfgaddburstcap10_2, cfgaddburstcap10_1);
        if(!err) ag_drv_epn_10g_abc_size15_get( &cfgaddburstcap10_2, &cfgaddburstcap10_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size15_get( %u %u)\n", cfgaddburstcap10_2, cfgaddburstcap10_1);
        if(err || cfgaddburstcap10_2!=gtmv(m, 16) || cfgaddburstcap10_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap11_1=gtmv(m, 16);
        uint16_t cfgaddburstcap10_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size16_set( %u %u)\n", cfgaddburstcap11_1, cfgaddburstcap10_3);
        if(!err) ag_drv_epn_10g_abc_size16_set(cfgaddburstcap11_1, cfgaddburstcap10_3);
        if(!err) ag_drv_epn_10g_abc_size16_get( &cfgaddburstcap11_1, &cfgaddburstcap10_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size16_get( %u %u)\n", cfgaddburstcap11_1, cfgaddburstcap10_3);
        if(err || cfgaddburstcap11_1!=gtmv(m, 16) || cfgaddburstcap10_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap11_3=gtmv(m, 16);
        uint16_t cfgaddburstcap11_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size17_set( %u %u)\n", cfgaddburstcap11_3, cfgaddburstcap11_2);
        if(!err) ag_drv_epn_10g_abc_size17_set(cfgaddburstcap11_3, cfgaddburstcap11_2);
        if(!err) ag_drv_epn_10g_abc_size17_get( &cfgaddburstcap11_3, &cfgaddburstcap11_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size17_get( %u %u)\n", cfgaddburstcap11_3, cfgaddburstcap11_2);
        if(err || cfgaddburstcap11_3!=gtmv(m, 16) || cfgaddburstcap11_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap12_2=gtmv(m, 16);
        uint16_t cfgaddburstcap12_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size18_set( %u %u)\n", cfgaddburstcap12_2, cfgaddburstcap12_1);
        if(!err) ag_drv_epn_10g_abc_size18_set(cfgaddburstcap12_2, cfgaddburstcap12_1);
        if(!err) ag_drv_epn_10g_abc_size18_get( &cfgaddburstcap12_2, &cfgaddburstcap12_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size18_get( %u %u)\n", cfgaddburstcap12_2, cfgaddburstcap12_1);
        if(err || cfgaddburstcap12_2!=gtmv(m, 16) || cfgaddburstcap12_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap13_1=gtmv(m, 16);
        uint16_t cfgaddburstcap12_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size19_set( %u %u)\n", cfgaddburstcap13_1, cfgaddburstcap12_3);
        if(!err) ag_drv_epn_10g_abc_size19_set(cfgaddburstcap13_1, cfgaddburstcap12_3);
        if(!err) ag_drv_epn_10g_abc_size19_get( &cfgaddburstcap13_1, &cfgaddburstcap12_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size19_get( %u %u)\n", cfgaddburstcap13_1, cfgaddburstcap12_3);
        if(err || cfgaddburstcap13_1!=gtmv(m, 16) || cfgaddburstcap12_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap13_3=gtmv(m, 16);
        uint16_t cfgaddburstcap13_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size20_set( %u %u)\n", cfgaddburstcap13_3, cfgaddburstcap13_2);
        if(!err) ag_drv_epn_10g_abc_size20_set(cfgaddburstcap13_3, cfgaddburstcap13_2);
        if(!err) ag_drv_epn_10g_abc_size20_get( &cfgaddburstcap13_3, &cfgaddburstcap13_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size20_get( %u %u)\n", cfgaddburstcap13_3, cfgaddburstcap13_2);
        if(err || cfgaddburstcap13_3!=gtmv(m, 16) || cfgaddburstcap13_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap14_2=gtmv(m, 16);
        uint16_t cfgaddburstcap14_1=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size21_set( %u %u)\n", cfgaddburstcap14_2, cfgaddburstcap14_1);
        if(!err) ag_drv_epn_10g_abc_size21_set(cfgaddburstcap14_2, cfgaddburstcap14_1);
        if(!err) ag_drv_epn_10g_abc_size21_get( &cfgaddburstcap14_2, &cfgaddburstcap14_1);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size21_get( %u %u)\n", cfgaddburstcap14_2, cfgaddburstcap14_1);
        if(err || cfgaddburstcap14_2!=gtmv(m, 16) || cfgaddburstcap14_1!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap15_1=gtmv(m, 16);
        uint16_t cfgaddburstcap14_3=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size22_set( %u %u)\n", cfgaddburstcap15_1, cfgaddburstcap14_3);
        if(!err) ag_drv_epn_10g_abc_size22_set(cfgaddburstcap15_1, cfgaddburstcap14_3);
        if(!err) ag_drv_epn_10g_abc_size22_get( &cfgaddburstcap15_1, &cfgaddburstcap14_3);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size22_get( %u %u)\n", cfgaddburstcap15_1, cfgaddburstcap14_3);
        if(err || cfgaddburstcap15_1!=gtmv(m, 16) || cfgaddburstcap14_3!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    {
        uint16_t cfgaddburstcap15_3=gtmv(m, 16);
        uint16_t cfgaddburstcap15_2=gtmv(m, 16);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size23_set( %u %u)\n", cfgaddburstcap15_3, cfgaddburstcap15_2);
        if(!err) ag_drv_epn_10g_abc_size23_set(cfgaddburstcap15_3, cfgaddburstcap15_2);
        if(!err) ag_drv_epn_10g_abc_size23_get( &cfgaddburstcap15_3, &cfgaddburstcap15_2);
        if(!err) bdmf_session_print(session, "ag_drv_epn_10g_abc_size23_get( %u %u)\n", cfgaddburstcap15_3, cfgaddburstcap15_2);
        if(err || cfgaddburstcap15_3!=gtmv(m, 16) || cfgaddburstcap15_2!=gtmv(m, 16))
            return err ? err : BDMF_ERR_IO;
    }
    return err;
}

static int bcm_epn_cli_address(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    uint32_t i;
    uint32_t j;
    uint32_t index1_start=0;
    uint32_t index1_stop;
    uint32_t index2_start=0;
    uint32_t index2_stop;
    bdmfmon_cmd_parm_t * bdmf_parm;
    const ru_reg_rec * reg;
    const ru_block_rec * blk;
    const char * enum_string = bdmfmon_enum_parm_stringval(session, 0, parm[0].value.unumber);

    if(!enum_string)
        return BDMF_ERR_INTERNAL;

    switch (parm[0].value.unumber)
    {
    case bdmf_address_control_0 : reg = &RU_REG(EPN, CONTROL_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_control_1 : reg = &RU_REG(EPN, CONTROL_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_enable_grants : reg = &RU_REG(EPN, ENABLE_GRANTS); blk = &RU_BLK(EPN); break;
    case bdmf_address_drop_disc_gates : reg = &RU_REG(EPN, DROP_DISC_GATES); blk = &RU_BLK(EPN); break;
    case bdmf_address_dis_fcs_chk : reg = &RU_REG(EPN, DIS_FCS_CHK); blk = &RU_BLK(EPN); break;
    case bdmf_address_pass_gates : reg = &RU_REG(EPN, PASS_GATES); blk = &RU_BLK(EPN); break;
    case bdmf_address_cfg_misalgn_fb : reg = &RU_REG(EPN, CFG_MISALGN_FB); blk = &RU_BLK(EPN); break;
    case bdmf_address_discovery_filter : reg = &RU_REG(EPN, DISCOVERY_FILTER); blk = &RU_BLK(EPN); break;
    case bdmf_address_minimum_grant_setup : reg = &RU_REG(EPN, MINIMUM_GRANT_SETUP); blk = &RU_BLK(EPN); break;
    case bdmf_address_reset_gnt_fifo : reg = &RU_REG(EPN, RESET_GNT_FIFO); blk = &RU_BLK(EPN); break;
    case bdmf_address_reset_l1_accumulator : reg = &RU_REG(EPN, RESET_L1_ACCUMULATOR); blk = &RU_BLK(EPN); break;
    case bdmf_address_l1_accumulator_sel : reg = &RU_REG(EPN, L1_ACCUMULATOR_SEL); blk = &RU_BLK(EPN); break;
    case bdmf_address_l1_sva_bytes : reg = &RU_REG(EPN, L1_SVA_BYTES); blk = &RU_BLK(EPN); break;
    case bdmf_address_l1_uva_bytes : reg = &RU_REG(EPN, L1_UVA_BYTES); blk = &RU_BLK(EPN); break;
    case bdmf_address_l1_sva_overflow : reg = &RU_REG(EPN, L1_SVA_OVERFLOW); blk = &RU_BLK(EPN); break;
    case bdmf_address_l1_uva_overflow : reg = &RU_REG(EPN, L1_UVA_OVERFLOW); blk = &RU_BLK(EPN); break;
    case bdmf_address_reset_rpt_pri : reg = &RU_REG(EPN, RESET_RPT_PRI); blk = &RU_BLK(EPN); break;
    case bdmf_address_reset_l2_rpt_fifo : reg = &RU_REG(EPN, RESET_L2_RPT_FIFO); blk = &RU_BLK(EPN); break;
    case bdmf_address_enable_upstream : reg = &RU_REG(EPN, ENABLE_UPSTREAM); blk = &RU_BLK(EPN); break;
    case bdmf_address_enable_upstream_fb : reg = &RU_REG(EPN, ENABLE_UPSTREAM_FB); blk = &RU_BLK(EPN); break;
    case bdmf_address_enable_upstream_fec : reg = &RU_REG(EPN, ENABLE_UPSTREAM_FEC); blk = &RU_BLK(EPN); break;
    case bdmf_address_report_byte_length : reg = &RU_REG(EPN, REPORT_BYTE_LENGTH); blk = &RU_BLK(EPN); break;
    case bdmf_address_main_int_status : reg = &RU_REG(EPN, MAIN_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_full_int_status : reg = &RU_REG(EPN, GNT_FULL_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_full_int_mask : reg = &RU_REG(EPN, GNT_FULL_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_miss_int_status : reg = &RU_REG(EPN, GNT_MISS_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_miss_int_mask : reg = &RU_REG(EPN, GNT_MISS_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_disc_rx_int_status : reg = &RU_REG(EPN, DISC_RX_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_disc_rx_int_mask : reg = &RU_REG(EPN, DISC_RX_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_intv_int_status : reg = &RU_REG(EPN, GNT_INTV_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_intv_int_mask : reg = &RU_REG(EPN, GNT_INTV_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_far_int_status : reg = &RU_REG(EPN, GNT_FAR_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_far_int_mask : reg = &RU_REG(EPN, GNT_FAR_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_misalgn_int_status : reg = &RU_REG(EPN, GNT_MISALGN_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_misalgn_int_mask : reg = &RU_REG(EPN, GNT_MISALGN_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_np_gnt_int_status : reg = &RU_REG(EPN, NP_GNT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_np_gnt_int_mask : reg = &RU_REG(EPN, NP_GNT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_del_stale_int_status : reg = &RU_REG(EPN, DEL_STALE_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_del_stale_int_mask : reg = &RU_REG(EPN, DEL_STALE_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_pres_int_status : reg = &RU_REG(EPN, GNT_PRES_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_pres_int_mask : reg = &RU_REG(EPN, GNT_PRES_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_rpt_pres_int_status : reg = &RU_REG(EPN, RPT_PRES_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_rpt_pres_int_mask : reg = &RU_REG(EPN, RPT_PRES_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_drx_abort_int_status : reg = &RU_REG(EPN, DRX_ABORT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_drx_abort_int_mask : reg = &RU_REG(EPN, DRX_ABORT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_empty_rpt_int_status : reg = &RU_REG(EPN, EMPTY_RPT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_empty_rpt_int_mask : reg = &RU_REG(EPN, EMPTY_RPT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_bcap_overflow_int_status : reg = &RU_REG(EPN, BCAP_OVERFLOW_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_bcap_overflow_int_mask : reg = &RU_REG(EPN, BCAP_OVERFLOW_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_dns_fault_int_status : reg = &RU_REG(EPN, BBH_DNS_FAULT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_dns_fault_int_mask : reg = &RU_REG(EPN, BBH_DNS_FAULT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_ups_fault_int_status : reg = &RU_REG(EPN, BBH_UPS_FAULT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_ups_fault_int_mask : reg = &RU_REG(EPN, BBH_UPS_FAULT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_ups_abort_int_status : reg = &RU_REG(EPN, BBH_UPS_ABORT_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_ups_abort_int_mask : reg = &RU_REG(EPN, BBH_UPS_ABORT_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_main_int_mask : reg = &RU_REG(EPN, MAIN_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_max_gnt_size : reg = &RU_REG(EPN, MAX_GNT_SIZE); blk = &RU_BLK(EPN); break;
    case bdmf_address_max_frame_size : reg = &RU_REG(EPN, MAX_FRAME_SIZE); blk = &RU_BLK(EPN); break;
    case bdmf_address_grant_ovr_hd : reg = &RU_REG(EPN, GRANT_OVR_HD); blk = &RU_BLK(EPN); break;
    case bdmf_address_poll_size : reg = &RU_REG(EPN, POLL_SIZE); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_rd_gnt_margin : reg = &RU_REG(EPN, DN_RD_GNT_MARGIN); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_time_start_delta : reg = &RU_REG(EPN, GNT_TIME_START_DELTA); blk = &RU_BLK(EPN); break;
    case bdmf_address_time_stamp_diff : reg = &RU_REG(EPN, TIME_STAMP_DIFF); blk = &RU_BLK(EPN); break;
    case bdmf_address_up_time_stamp_off : reg = &RU_REG(EPN, UP_TIME_STAMP_OFF); blk = &RU_BLK(EPN); break;
    case bdmf_address_gnt_interval : reg = &RU_REG(EPN, GNT_INTERVAL); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_gnt_misalign_thr : reg = &RU_REG(EPN, DN_GNT_MISALIGN_THR); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_gnt_misalign_pause : reg = &RU_REG(EPN, DN_GNT_MISALIGN_PAUSE); blk = &RU_BLK(EPN); break;
    case bdmf_address_non_poll_intv : reg = &RU_REG(EPN, NON_POLL_INTV); blk = &RU_BLK(EPN); break;
    case bdmf_address_force_fcs_err : reg = &RU_REG(EPN, FORCE_FCS_ERR); blk = &RU_BLK(EPN); break;
    case bdmf_address_grant_overlap_limit : reg = &RU_REG(EPN, GRANT_OVERLAP_LIMIT); blk = &RU_BLK(EPN); break;
    case bdmf_address_aes_configuration_0 : reg = &RU_REG(EPN, AES_CONFIGURATION_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_disc_grant_ovr_hd : reg = &RU_REG(EPN, DISC_GRANT_OVR_HD); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_discovery_seed : reg = &RU_REG(EPN, DN_DISCOVERY_SEED); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_discovery_inc : reg = &RU_REG(EPN, DN_DISCOVERY_INC); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_discovery_size : reg = &RU_REG(EPN, DN_DISCOVERY_SIZE); blk = &RU_BLK(EPN); break;
    case bdmf_address_fec_ipg_length : reg = &RU_REG(EPN, FEC_IPG_LENGTH); blk = &RU_BLK(EPN); break;
    case bdmf_address_fake_report_value_en : reg = &RU_REG(EPN, FAKE_REPORT_VALUE_EN); blk = &RU_BLK(EPN); break;
    case bdmf_address_fake_report_value : reg = &RU_REG(EPN, FAKE_REPORT_VALUE); blk = &RU_BLK(EPN); break;
    case bdmf_address_valid_opcode_map : reg = &RU_REG(EPN, VALID_OPCODE_MAP); blk = &RU_BLK(EPN); break;
    case bdmf_address_up_packet_tx_margin : reg = &RU_REG(EPN, UP_PACKET_TX_MARGIN); blk = &RU_BLK(EPN); break;
    case bdmf_address_multi_pri_cfg_0 : reg = &RU_REG(EPN, MULTI_PRI_CFG_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_shared_bcap_ovrflow : reg = &RU_REG(EPN, SHARED_BCAP_OVRFLOW); blk = &RU_BLK(EPN); break;
    case bdmf_address_forced_report_en : reg = &RU_REG(EPN, FORCED_REPORT_EN); blk = &RU_BLK(EPN); break;
    case bdmf_address_forced_report_max_interval : reg = &RU_REG(EPN, FORCED_REPORT_MAX_INTERVAL); blk = &RU_BLK(EPN); break;
    case bdmf_address_l2s_flush_config : reg = &RU_REG(EPN, L2S_FLUSH_CONFIG); blk = &RU_BLK(EPN); break;
    case bdmf_address_data_port_command : reg = &RU_REG(EPN, DATA_PORT_COMMAND); blk = &RU_BLK(EPN); break;
    case bdmf_address_data_port_address : reg = &RU_REG(EPN, DATA_PORT_ADDRESS); blk = &RU_BLK(EPN); break;
    case bdmf_address_data_port_data_0 : reg = &RU_REG(EPN, DATA_PORT_DATA_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_big_cnt : reg = &RU_REG(EPN, UNMAP_BIG_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_frame_cnt : reg = &RU_REG(EPN, UNMAP_FRAME_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_fcs_cnt : reg = &RU_REG(EPN, UNMAP_FCS_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_gate_cnt : reg = &RU_REG(EPN, UNMAP_GATE_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_oam_cnt : reg = &RU_REG(EPN, UNMAP_OAM_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_unmap_small_cnt : reg = &RU_REG(EPN, UNMAP_SMALL_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_fif_dequeue_event_cnt : reg = &RU_REG(EPN, FIF_DEQUEUE_EVENT_CNT); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_up_fault_halt_en : reg = &RU_REG(EPN, BBH_UP_FAULT_HALT_EN); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_up_tardy_halt_en : reg = &RU_REG(EPN, BBH_UP_TARDY_HALT_EN); blk = &RU_BLK(EPN); break;
    case bdmf_address_debug_status_0 : reg = &RU_REG(EPN, DEBUG_STATUS_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_debug_status_1 : reg = &RU_REG(EPN, DEBUG_STATUS_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_debug_l2s_ptr_sel : reg = &RU_REG(EPN, DEBUG_L2S_PTR_SEL); blk = &RU_BLK(EPN); break;
    case bdmf_address_olt_mac_addr_lo : reg = &RU_REG(EPN, OLT_MAC_ADDR_LO); blk = &RU_BLK(EPN); break;
    case bdmf_address_olt_mac_addr_hi : reg = &RU_REG(EPN, OLT_MAC_ADDR_HI); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_dqu_empty : reg = &RU_REG(EPN, TX_L1S_SHP_DQU_EMPTY); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_unshaped_empty : reg = &RU_REG(EPN, TX_L1S_UNSHAPED_EMPTY); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_empty : reg = &RU_REG(EPN, TX_L2S_QUE_EMPTY); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_full : reg = &RU_REG(EPN, TX_L2S_QUE_FULL); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_stopped : reg = &RU_REG(EPN, TX_L2S_QUE_STOPPED); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_max_outstanding_tardy_packets : reg = &RU_REG(EPN, BBH_MAX_OUTSTANDING_TARDY_PACKETS); blk = &RU_BLK(EPN); break;
    case bdmf_address_min_report_value_difference : reg = &RU_REG(EPN, MIN_REPORT_VALUE_DIFFERENCE); blk = &RU_BLK(EPN); break;
    case bdmf_address_bbh_status_fifo_overflow : reg = &RU_REG(EPN, BBH_STATUS_FIFO_OVERFLOW); blk = &RU_BLK(EPN); break;
    case bdmf_address_spare_ctl : reg = &RU_REG(EPN, SPARE_CTL); blk = &RU_BLK(EPN); break;
    case bdmf_address_ts_sync_offset : reg = &RU_REG(EPN, TS_SYNC_OFFSET); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_ts_offset : reg = &RU_REG(EPN, DN_TS_OFFSET); blk = &RU_BLK(EPN); break;
    case bdmf_address_up_ts_offset_lo : reg = &RU_REG(EPN, UP_TS_OFFSET_LO); blk = &RU_BLK(EPN); break;
    case bdmf_address_up_ts_offset_hi : reg = &RU_REG(EPN, UP_TS_OFFSET_HI); blk = &RU_BLK(EPN); break;
    case bdmf_address_two_step_ts_ctl : reg = &RU_REG(EPN, TWO_STEP_TS_CTL); blk = &RU_BLK(EPN); break;
    case bdmf_address_two_step_ts_value_lo : reg = &RU_REG(EPN, TWO_STEP_TS_VALUE_LO); blk = &RU_BLK(EPN); break;
    case bdmf_address_two_step_ts_value_hi : reg = &RU_REG(EPN, TWO_STEP_TS_VALUE_HI); blk = &RU_BLK(EPN); break;
    case bdmf_address_1588_timestamp_int_status : reg = &RU_REG(EPN, 1588_TIMESTAMP_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_1588_timestamp_int_mask : reg = &RU_REG(EPN, 1588_TIMESTAMP_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_up_packet_fetch_margin : reg = &RU_REG(EPN, UP_PACKET_FETCH_MARGIN); blk = &RU_BLK(EPN); break;
    case bdmf_address_dn_1588_timestamp : reg = &RU_REG(EPN, DN_1588_TIMESTAMP); blk = &RU_BLK(EPN); break;
    case bdmf_address_persistent_report_cfg : reg = &RU_REG(EPN, PERSISTENT_REPORT_CFG); blk = &RU_BLK(EPN); break;
    case bdmf_address_persistent_report_enables : reg = &RU_REG(EPN, PERSISTENT_REPORT_ENABLES); blk = &RU_BLK(EPN); break;
    case bdmf_address_persistent_report_request_size : reg = &RU_REG(EPN, PERSISTENT_REPORT_REQUEST_SIZE); blk = &RU_BLK(EPN); break;
    case bdmf_address_aes_configuration_1 : reg = &RU_REG(EPN, AES_CONFIGURATION_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_onu_pause_pfc_cfg : reg = &RU_REG(EPN, ONU_PAUSE_PFC_CFG); blk = &RU_BLK(EPN); break;
    case bdmf_address_onu_pause_pfc_time_scale : reg = &RU_REG(EPN, ONU_PAUSE_PFC_TIME_SCALE); blk = &RU_BLK(EPN); break;
    case bdmf_address_dpf_int_status : reg = &RU_REG(EPN, DPF_INT_STATUS); blk = &RU_BLK(EPN); break;
    case bdmf_address_dpf_int_mask : reg = &RU_REG(EPN, DPF_INT_MASK); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_0 : reg = &RU_REG(EPN, BURST_CAP_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_1 : reg = &RU_REG(EPN, BURST_CAP_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_2 : reg = &RU_REG(EPN, BURST_CAP_2); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_3 : reg = &RU_REG(EPN, BURST_CAP_3); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_4 : reg = &RU_REG(EPN, BURST_CAP_4); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_5 : reg = &RU_REG(EPN, BURST_CAP_5); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_6 : reg = &RU_REG(EPN, BURST_CAP_6); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_7 : reg = &RU_REG(EPN, BURST_CAP_7); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_0 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_1 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_2 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_2); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_3 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_3); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_4 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_4); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_5 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_5); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_6 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_6); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_7 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_7); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt0 : reg = &RU_REG(EPN, UNUSED_TQ_CNT0); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt1 : reg = &RU_REG(EPN, UNUSED_TQ_CNT1); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt2 : reg = &RU_REG(EPN, UNUSED_TQ_CNT2); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt3 : reg = &RU_REG(EPN, UNUSED_TQ_CNT3); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt4 : reg = &RU_REG(EPN, UNUSED_TQ_CNT4); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt5 : reg = &RU_REG(EPN, UNUSED_TQ_CNT5); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt6 : reg = &RU_REG(EPN, UNUSED_TQ_CNT6); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt7 : reg = &RU_REG(EPN, UNUSED_TQ_CNT7); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_0 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_1 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_2 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_2); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_3 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_3); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_4 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_4); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_5 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_5); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_6 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_6); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_7 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_7); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_0 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_1 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_2 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_2); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_3 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_3); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_4 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_4); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_5 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_5); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_6 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_6); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_7 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_7); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_0 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_0); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_1 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_1); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_2 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_2); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_3 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_3); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_4 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_4); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_5 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_5); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_6 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_6); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_7 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_7); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_8 : reg = &RU_REG(EPN, BURST_CAP_8); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_9 : reg = &RU_REG(EPN, BURST_CAP_9); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_10 : reg = &RU_REG(EPN, BURST_CAP_10); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_11 : reg = &RU_REG(EPN, BURST_CAP_11); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_12 : reg = &RU_REG(EPN, BURST_CAP_12); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_13 : reg = &RU_REG(EPN, BURST_CAP_13); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_14 : reg = &RU_REG(EPN, BURST_CAP_14); blk = &RU_BLK(EPN); break;
    case bdmf_address_burst_cap_15 : reg = &RU_REG(EPN, BURST_CAP_15); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_8 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_8); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_9 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_9); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_10 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_10); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_11 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_11); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_12 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_12); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_13 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_13); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_14 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_14); blk = &RU_BLK(EPN); break;
    case bdmf_address_queue_llid_map_15 : reg = &RU_REG(EPN, QUEUE_LLID_MAP_15); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt8 : reg = &RU_REG(EPN, UNUSED_TQ_CNT8); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt9 : reg = &RU_REG(EPN, UNUSED_TQ_CNT9); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt10 : reg = &RU_REG(EPN, UNUSED_TQ_CNT10); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt11 : reg = &RU_REG(EPN, UNUSED_TQ_CNT11); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt12 : reg = &RU_REG(EPN, UNUSED_TQ_CNT12); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt13 : reg = &RU_REG(EPN, UNUSED_TQ_CNT13); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt14 : reg = &RU_REG(EPN, UNUSED_TQ_CNT14); blk = &RU_BLK(EPN); break;
    case bdmf_address_unused_tq_cnt15 : reg = &RU_REG(EPN, UNUSED_TQ_CNT15); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_8 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_8); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_9 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_9); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_10 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_10); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_11 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_11); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_12 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_12); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_13 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_13); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_14 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_14); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l1s_shp_que_mask_15 : reg = &RU_REG(EPN, TX_L1S_SHP_QUE_MASK_15); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_8 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_8); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_9 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_9); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_10 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_10); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_11 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_11); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_12 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_12); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_13 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_13); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_14 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_14); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_l2s_que_config_15 : reg = &RU_REG(EPN, TX_L2S_QUE_CONFIG_15); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_8 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_8); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_9 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_9); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_10 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_10); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_11 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_11); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_12 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_12); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_13 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_13); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_14 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_14); blk = &RU_BLK(EPN); break;
    case bdmf_address_tx_ctc_burst_limit_15 : reg = &RU_REG(EPN, TX_CTC_BURST_LIMIT_15); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size0 : reg = &RU_REG(EPN, 10G_ABC_SIZE0); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size1 : reg = &RU_REG(EPN, 10G_ABC_SIZE1); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size2 : reg = &RU_REG(EPN, 10G_ABC_SIZE2); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size3 : reg = &RU_REG(EPN, 10G_ABC_SIZE3); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size4 : reg = &RU_REG(EPN, 10G_ABC_SIZE4); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size5 : reg = &RU_REG(EPN, 10G_ABC_SIZE5); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size6 : reg = &RU_REG(EPN, 10G_ABC_SIZE6); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size7 : reg = &RU_REG(EPN, 10G_ABC_SIZE7); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size8 : reg = &RU_REG(EPN, 10G_ABC_SIZE8); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size9 : reg = &RU_REG(EPN, 10G_ABC_SIZE9); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size10 : reg = &RU_REG(EPN, 10G_ABC_SIZE10); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size11 : reg = &RU_REG(EPN, 10G_ABC_SIZE11); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size12 : reg = &RU_REG(EPN, 10G_ABC_SIZE12); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size13 : reg = &RU_REG(EPN, 10G_ABC_SIZE13); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size14 : reg = &RU_REG(EPN, 10G_ABC_SIZE14); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size15 : reg = &RU_REG(EPN, 10G_ABC_SIZE15); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size16 : reg = &RU_REG(EPN, 10G_ABC_SIZE16); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size17 : reg = &RU_REG(EPN, 10G_ABC_SIZE17); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size18 : reg = &RU_REG(EPN, 10G_ABC_SIZE18); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size19 : reg = &RU_REG(EPN, 10G_ABC_SIZE19); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size20 : reg = &RU_REG(EPN, 10G_ABC_SIZE20); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size21 : reg = &RU_REG(EPN, 10G_ABC_SIZE21); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size22 : reg = &RU_REG(EPN, 10G_ABC_SIZE22); blk = &RU_BLK(EPN); break;
    case bdmf_address_10g_abc_size23 : reg = &RU_REG(EPN, 10G_ABC_SIZE23); blk = &RU_BLK(EPN); break;
    default :
        return BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    if((bdmf_parm = bdmfmon_find_named_parm(session,"index1")))
    {
        index1_start = bdmf_parm->value.unumber;
        index1_stop = index1_start + 1;
    }
    else
        index1_stop = blk->addr_count;
    if((bdmf_parm = bdmfmon_find_named_parm(session,"index2")))
    {
        index2_start = bdmf_parm->value.unumber;
        index2_stop = index2_start + 1;
    }
    else
        index2_stop = reg->ram_count + 1;
    if(index1_stop > blk->addr_count)
    {
        bdmf_session_print(session, "index1 (%u) is out of range (%u).\n", index1_stop, blk->addr_count);
        return BDMF_ERR_RANGE;
    }
    if(index2_stop > (reg->ram_count + 1))
    {
        bdmf_session_print(session, "index2 (%u) is out of range (%u).\n", index2_stop, reg->ram_count + 1);
        return BDMF_ERR_RANGE;
    }
    if(reg->ram_count)
        for (i = index1_start; i < index1_stop; i++)
        {
            bdmf_session_print(session, "index1 = %u\n", i);
            for (j = index2_start; j < index2_stop; j++)
                bdmf_session_print(session, 	 "(%5u) 0x%08X\n", j, (uint32_t)((uint32_t*)(blk->addr[i] + reg->addr) + j));
        }
    else
        for (i = index1_start; i < index1_stop; i++)
            bdmf_session_print(session, "(%3u) 0x%08X\n", i, (uint32_t)((uint32_t*)(blk->addr[i] + reg->addr)));
    return 0;
}

bdmfmon_handle_t ag_drv_epn_cli_init(bdmfmon_handle_t driver_dir)
{
    bdmfmon_handle_t dir;

    if ((dir = bdmfmon_dir_find(driver_dir, "epn"))!=NULL)
        return dir;
    dir = bdmfmon_dir_add(driver_dir, "epn", "epn", BDMF_ACCESS_ADMIN, NULL);

    {
        static bdmfmon_cmd_parm_t set_control_0[]={
            BDMFMON_MAKE_PARM("cfgen1588ts", "cfgen1588ts", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgreplaceupfcs", "cfgreplaceupfcs", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgappendupfcs", "cfgappendupfcs", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdropscb", "cfgdropscb", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("moduncappedreportlimit", "moduncappedreportlimit", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("modmpquesetfirst", "modmpquesetfirst", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvlocalmpcppropagation", "prvlocalmpcppropagation", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvtekmodeprefetch", "prvtekmodeprefetch", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvincnonzeroaccum", "prvincnonzeroaccum", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvnounmapppedfcs", "prvnounmapppedfcs", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvsupressdiscen", "prvsupressdiscen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgvlanmax", "cfgvlanmax", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("fcserronlydatafr", "fcserronlydatafr", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvdropunmapppedllid", "prvdropunmapppedllid", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvsuppressllidmodebit", "prvsuppressllidmodebit", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("moddiscoverydafilteren", "moddiscoverydafilteren", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("rptselect", "rptselect", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvdisablesvaquestatusbp", "prvdisablesvaquestatusbp", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("utxloopback", "utxloopback", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("utxen", "utxen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("utxrst_pre_n", "utxrst_pre_n", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdisabledns", "cfgdisabledns", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("drxloopback", "drxloopback", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("drxen", "drxen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("drxrst_pre_n", "drxrst_pre_n", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_control_1[]={
            BDMFMON_MAKE_PARM("cfgbypassbbhpacketrequestbuffer", "cfgbypassbbhpacketrequestbuffer", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgidlepackettxenable", "cfgidlepackettxenable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdisablempcpcorrectiondithering", "cfgdisablempcpcorrectiondithering", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvoverlappedgntenable", "prvoverlappedgntenable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("rstmisalignthr", "rstmisalignthr", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgstalegntchk", "cfgstalegntchk", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("fecrpten", "fecrpten", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl1l2truestrict", "cfgl1l2truestrict", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgctcrpt", "cfgctcrpt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgtscorrdis", "cfgtscorrdis", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgnodiscrpt", "cfgnodiscrpt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("disablediscscale", "disablediscscale", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("clronrd", "clronrd", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_enable_grants[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("grant_en", "grant_en", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_drop_disc_gates[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("linkdiscgates_en", "linkdiscgates_en", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dis_fcs_chk[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("disablefcschk", "disablefcschk", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_pass_gates[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("passgates", "passgates", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_cfg_misalgn_fb[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgmisalignfeedback", "cfgmisalignfeedback", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_discovery_filter[]={
            BDMFMON_MAKE_PARM("prvdiscinfomask", "prvdiscinfomask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvdiscinfovalue", "prvdiscinfovalue", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_minimum_grant_setup[]={
            BDMFMON_MAKE_PARM("cfgmingrantsetup", "cfgmingrantsetup", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_reset_gnt_fifo[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("rstgntfifo", "rstgntfifo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_reset_l1_accumulator[]={
            BDMFMON_MAKE_PARM("cfgl1sclracum", "cfgl1sclracum", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_l1_accumulator_sel[]={
            BDMFMON_MAKE_PARM("cfgl1suvasizesel", "cfgl1suvasizesel", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl1ssvasizesel", "cfgl1ssvasizesel", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_reset_rpt_pri[]={
            BDMFMON_MAKE_PARM("nullrptpri15", "nullrptpri15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri14", "nullrptpri14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri13", "nullrptpri13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri12", "nullrptpri12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri11", "nullrptpri11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri10", "nullrptpri10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri9", "nullrptpri9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri8", "nullrptpri8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri7", "nullrptpri7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri6", "nullrptpri6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri5", "nullrptpri5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri4", "nullrptpri4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri3", "nullrptpri3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri2", "nullrptpri2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri1", "nullrptpri1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("nullrptpri0", "nullrptpri0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_reset_l2_rpt_fifo[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2sclrque", "cfgl2sclrque", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_enable_upstream[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgenableupstream", "cfgenableupstream", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_enable_upstream_fec[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("upstreamfecen", "upstreamfecen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_report_byte_length[]={
            BDMFMON_MAKE_PARM("prvrptbytelen", "prvrptbytelen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_main_int_status[]={
            BDMFMON_MAKE_PARM("intbbhupfrabort", "intbbhupfrabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcol2sburstcapoverflowpres", "intcol2sburstcapoverflowpres", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcoemptyrpt", "intcoemptyrpt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcodrxerrabortpres", "intcodrxerrabortpres", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intl2sfifooverrun", "intl2sfifooverrun", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intco1588tsint", "intco1588tsint", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcorptpres", "intcorptpres", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntpres", "intcogntpres", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcodelstalegnt", "intcodelstalegnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntnonpoll", "intcogntnonpoll", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntmisalign", "intcogntmisalign", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcognttoofar", "intcognttoofar", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntinterval", "intcogntinterval", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntdiscovery", "intcogntdiscovery", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntmissabort", "intcogntmissabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntfullabort", "intcogntfullabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intbadupfrlen", "intbadupfrlen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intuptardypacket", "intuptardypacket", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intuprptfrxmt", "intuprptfrxmt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intbififooverrun", "intbififooverrun", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intburstgnttoobig", "intburstgnttoobig", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intwrgnttoobig", "intwrgnttoobig", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intrcvgnttoobig", "intrcvgnttoobig", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdnstatsoverrun", "intdnstatsoverrun", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupstatsoverrun", "intupstatsoverrun", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdnoutoforder", "intdnoutoforder", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("inttruantbbhhalt", "inttruantbbhhalt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupinvldgntlen", "intupinvldgntlen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcobbhupsfault", "intcobbhupsfault", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdntimeinsync", "intdntimeinsync", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdntimenotinsync", "intdntimenotinsync", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdportrdy", "intdportrdy", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_full_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntfullabort", "intdngntfullabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_full_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdngntfullabort", "maskintdngntfullabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_miss_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntmissabort", "intdngntmissabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_miss_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdngntmissabort", "maskintdngntmissabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_disc_rx_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntdiscovery", "intdngntdiscovery", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_disc_rx_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdngntdiscovery", "maskintdngntdiscovery", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_intv_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntinterval", "intdngntinterval", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_intv_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdngntinterval", "maskintdngntinterval", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_far_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngnttoofar", "intdngnttoofar", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_far_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskdngnttoofar", "maskdngnttoofar", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_misalgn_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntmisalign", "intdngntmisalign", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_misalgn_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdngntmisalign", "maskintdngntmisalign", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_np_gnt_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntnonpoll", "intdngntnonpoll", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_np_gnt_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskdngntnonpoll", "maskdngntnonpoll", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_del_stale_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdelstalegnt", "intdelstalegnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_del_stale_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdelstalegnt", "maskintdelstalegnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_pres_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdngntrdy", "intdngntrdy", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_pres_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskdngntrdy", "maskdngntrdy", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_rpt_pres_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intuprptfifo", "intuprptfifo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_rpt_pres_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintuprptfifo", "maskintuprptfifo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_drx_abort_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdrxerrabort", "intdrxerrabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_drx_abort_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintdrxerrabort", "maskintdrxerrabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_empty_rpt_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intemptyrpt", "intemptyrpt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_empty_rpt_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM(" maskintemptyrpt", " maskintemptyrpt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bcap_overflow_int_status[]={
            BDMFMON_MAKE_PARM("l2_acc_idx", "l2_acc_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intl2sburstcapoverflow", "intl2sburstcapoverflow", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bcap_overflow_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintl2sburstcapoverflow", "maskintl2sburstcapoverflow", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_dns_fault_int_status[]={
            BDMFMON_MAKE_PARM("intbbhdnsoverflow", "intbbhdnsoverflow", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_dns_fault_int_mask[]={
            BDMFMON_MAKE_PARM("maskintbbhdnsoverflow", "maskintbbhdnsoverflow", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_ups_fault_int_status[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intbbhupsfault", "intbbhupsfault", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_ups_fault_int_mask[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("maskintbbhupsfault", "maskintbbhupsfault", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_ups_abort_int_status[]={
            BDMFMON_MAKE_PARM("tardybbhabort", "tardybbhabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_ups_abort_int_mask[]={
            BDMFMON_MAKE_PARM("masktardybbhabort", "masktardybbhabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_main_int_mask[]={
            BDMFMON_MAKE_PARM("bbhupfrabortmask", "bbhupfrabortmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intl2sburstcapoverflowmask", "intl2sburstcapoverflowmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcoemptyrptmask", "intcoemptyrptmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdrxerrabortmask", "intdrxerrabortmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intl2sfifooverrunmask", "intl2sfifooverrunmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intco1588tsmask", "intco1588tsmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcorptpresmask", "intcorptpresmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntpresmask", "intcogntpresmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcodelstalegntmask", "intcodelstalegntmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntnonpollmask", "intcogntnonpollmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntmisalignmask", "intcogntmisalignmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcognttoofarmask", "intcognttoofarmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntintervalmask", "intcogntintervalmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntdiscoverymask", "intcogntdiscoverymask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntmissabortmask", "intcogntmissabortmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcogntfullabortmask", "intcogntfullabortmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("badupfrlenmask", "badupfrlenmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("uptardypacketmask", "uptardypacketmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("uprptfrxmtmask", "uprptfrxmtmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intbififooverrunmask", "intbififooverrunmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("burstgnttoobigmask", "burstgnttoobigmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("wrgnttoobigmask", "wrgnttoobigmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("rcvgnttoobigmask", "rcvgnttoobigmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dnstatsoverrunmask", "dnstatsoverrunmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupstatsoverrunmask", "intupstatsoverrunmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dnoutofordermask", "dnoutofordermask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("truantbbhhaltmask", "truantbbhhaltmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("upinvldgntlenmask", "upinvldgntlenmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intcobbhupsfaultmask", "intcobbhupsfaultmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dntimeinsyncmask", "dntimeinsyncmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dntimenotinsyncmask", "dntimenotinsyncmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dportrdymask", "dportrdymask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_max_gnt_size[]={
            BDMFMON_MAKE_PARM("maxgntsize", "maxgntsize", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_max_frame_size[]={
            BDMFMON_MAKE_PARM("cfgmaxframesize", "cfgmaxframesize", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_grant_ovr_hd[]={
            BDMFMON_MAKE_PARM("gntovrhdfec", "gntovrhdfec", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("gntovrhd", "gntovrhd", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_poll_size[]={
            BDMFMON_MAKE_PARM("pollsizefec", "pollsizefec", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("pollsize", "pollsize", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_rd_gnt_margin[]={
            BDMFMON_MAKE_PARM("rdgntstartmargin", "rdgntstartmargin", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_time_start_delta[]={
            BDMFMON_MAKE_PARM("gntstarttimedelta", "gntstarttimedelta", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_time_stamp_diff[]={
            BDMFMON_MAKE_PARM("timestampdiffdelta", "timestampdiffdelta", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_up_time_stamp_off[]={
            BDMFMON_MAKE_PARM("timestampoffsetfec", "timestampoffsetfec", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("timestampoffset", "timestampoffset", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_gnt_interval[]={
            BDMFMON_MAKE_PARM("gntinterval", "gntinterval", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_gnt_misalign_thr[]={
            BDMFMON_MAKE_PARM("prvunusedgntthreshold", "prvunusedgntthreshold", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("gntmisalignthresh", "gntmisalignthresh", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_gnt_misalign_pause[]={
            BDMFMON_MAKE_PARM("gntmisalignpause", "gntmisalignpause", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_non_poll_intv[]={
            BDMFMON_MAKE_PARM("nonpollgntintv", "nonpollgntintv", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_force_fcs_err[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("forcefcserr", "forcefcserr", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_grant_overlap_limit[]={
            BDMFMON_MAKE_PARM("prvgrantoverlaplimit", "prvgrantoverlaplimit", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_aes_configuration_0[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvupstreamaesmode_0", "prvupstreamaesmode_0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_disc_grant_ovr_hd[]={
            BDMFMON_MAKE_PARM("discgntovrhd", "discgntovrhd", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_discovery_seed[]={
            BDMFMON_MAKE_PARM("cfgdiscseed", "cfgdiscseed", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_discovery_inc[]={
            BDMFMON_MAKE_PARM("cfgdiscinc", "cfgdiscinc", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_discovery_size[]={
            BDMFMON_MAKE_PARM("cfgdiscsize", "cfgdiscsize", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_fec_ipg_length[]={
            BDMFMON_MAKE_PARM("modipgpreamblebytes", "modipgpreamblebytes", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgrptlen", "cfgrptlen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgfecrptlength", "cfgfecrptlength", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgfecipglength", "cfgfecipglength", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_fake_report_value_en[]={
            BDMFMON_MAKE_PARM("fakereportvalueen", "fakereportvalueen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_fake_report_value[]={
            BDMFMON_MAKE_PARM("fakereportvalue", "fakereportvalue", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_valid_opcode_map[]={
            BDMFMON_MAKE_PARM("prvvalidmpcpopcodes", "prvvalidmpcpopcodes", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_up_packet_tx_margin[]={
            BDMFMON_MAKE_PARM("uppackettxmargin", "uppackettxmargin", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_multi_pri_cfg_0[]={
            BDMFMON_MAKE_PARM("cfgctcschdeficiten", "cfgctcschdeficiten", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvzeroburstcapoverridemode", "prvzeroburstcapoverridemode", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgsharedl2", "cfgsharedl2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgsharedburstcap", "cfgsharedburstcap", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgrptgntsoutst0", "cfgrptgntsoutst0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgrpthiprifirst0", "cfgrpthiprifirst0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgrptswapqs0", "cfgrptswapqs0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgrptmultipri0", "cfgrptmultipri0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_forced_report_en[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgforcereporten", "cfgforcereporten", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_forced_report_max_interval[]={
            BDMFMON_MAKE_PARM("cfgmaxreportinterval", "cfgmaxreportinterval", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_l2s_flush_config[]={
            BDMFMON_MAKE_PARM("cfgflushl2sen", "cfgflushl2sen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("flushl2sdone", "flushl2sdone", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgflushl2ssel", "cfgflushl2ssel", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_data_port_command[]={
            BDMFMON_MAKE_PARM("dportbusy", "dportbusy", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dportselect", "dportselect", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("dportcontrol", "dportcontrol", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_data_port_address[]={
            BDMFMON_MAKE_PARM("dportaddr", "dportaddr", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_data_port_data_0[]={
            BDMFMON_MAKE_PARM("dportdata0", "dportdata0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_big_cnt[]={
            BDMFMON_MAKE_PARM("unmapbigerrcnt", "unmapbigerrcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_frame_cnt[]={
            BDMFMON_MAKE_PARM("unmapfrcnt", "unmapfrcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_fcs_cnt[]={
            BDMFMON_MAKE_PARM("unmapfcserrcnt", "unmapfcserrcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_gate_cnt[]={
            BDMFMON_MAKE_PARM("unmapgatecnt", "unmapgatecnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_oam_cnt[]={
            BDMFMON_MAKE_PARM("unmapoamcnt", "unmapoamcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unmap_small_cnt[]={
            BDMFMON_MAKE_PARM("unmapsmallerrcnt", "unmapsmallerrcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_fif_dequeue_event_cnt[]={
            BDMFMON_MAKE_PARM("fifdequeueeventcnt", "fifdequeueeventcnt", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_up_fault_halt_en[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("bbhupsfaulthalten", "bbhupsfaulthalten", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_up_tardy_halt_en[]={
            BDMFMON_MAKE_PARM("fataltardybbhaborten", "fataltardybbhaborten", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_debug_l2s_ptr_sel[]={
            BDMFMON_MAKE_PARM("cfgl2sdebugptrsel", "cfgl2sdebugptrsel", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("l2sdebugptrstate", "l2sdebugptrstate", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_olt_mac_addr_lo[]={
            BDMFMON_MAKE_PARM("oltaddrlo", "oltaddrlo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_olt_mac_addr_hi[]={
            BDMFMON_MAKE_PARM("oltaddrhi", "oltaddrhi", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_bbh_max_outstanding_tardy_packets[]={
            BDMFMON_MAKE_PARM("cfgmaxoutstandingtardypackets", "cfgmaxoutstandingtardypackets", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_min_report_value_difference[]={
            BDMFMON_MAKE_PARM("prvminreportdiff", "prvminreportdiff", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_spare_ctl[]={
            BDMFMON_MAKE_PARM("cfgepnspare", "cfgepnspare", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("ecoutxsnfenable", "ecoutxsnfenable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("ecojira758enable", "ecojira758enable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_ts_sync_offset[]={
            BDMFMON_MAKE_PARM("cfg_ts48_sync_ns_increment", "cfg_ts48_sync_ns_increment", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgtssyncoffset_312", "cfgtssyncoffset_312", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgtssyncoffset_125", "cfgtssyncoffset_125", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dn_ts_offset[]={
            BDMFMON_MAKE_PARM("cfgdntsoffset", "cfgdntsoffset", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_up_ts_offset_lo[]={
            BDMFMON_MAKE_PARM("cfguptsoffset_lo", "cfguptsoffset_lo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_up_ts_offset_hi[]={
            BDMFMON_MAKE_PARM("cfguptsoffset_hi", "cfguptsoffset_hi", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_two_step_ts_ctl[]={
            BDMFMON_MAKE_PARM("twostepffrd", "twostepffrd", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("twostepffentries", "twostepffentries", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_1588_timestamp_int_status[]={
            BDMFMON_MAKE_PARM("int1588pktabort", "int1588pktabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("int1588twostepffint", "int1588twostepffint", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_1588_timestamp_int_mask[]={
            BDMFMON_MAKE_PARM("ts1588pktabort_mask", "ts1588pktabort_mask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("ts1588twostepff_mask", "ts1588twostepff_mask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_up_packet_fetch_margin[]={
            BDMFMON_MAKE_PARM("uppacketfetchmargin", "uppacketfetchmargin", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_persistent_report_cfg[]={
            BDMFMON_MAKE_PARM("cfgpersrptduration", "cfgpersrptduration", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgpersrptticksize", "cfgpersrptticksize", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_persistent_report_enables[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgpersrptenable", "cfgpersrptenable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_persistent_report_request_size[]={
            BDMFMON_MAKE_PARM("cfgpersrptreqtq", "cfgpersrptreqtq", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_aes_configuration_1[]={
            BDMFMON_MAKE_PARM("link_idx", "link_idx", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("prvupstreamaesmode_1", "prvupstreamaesmode_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_onu_pause_pfc_cfg[]={
            BDMFMON_MAKE_PARM("cfgupfrefreshen", "cfgupfrefreshen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupfforcexoff", "cfgupfforcexoff", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupfgengo", "cfgupfgengo", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupfoveride", "cfgupfoveride", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupftype", "cfgupftype", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupfen", "cfgupfen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgupfasyncbypassen", "cfgupfasyncbypassen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfpfcusesa", "cfgdpfpfcusesa", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfforcexon", "cfgdpfforcexon", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfenable", "cfgdpfenable", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfoperatingmode", "cfgdpfoperatingmode", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfpacketpassthroughen", "cfgdpfpacketpassthroughen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgdpfasyncbypassen", "cfgdpfasyncbypassen", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_onu_pause_pfc_time_scale[]={
            BDMFMON_MAKE_PARM("cfgdpftimescale", "cfgdpftimescale", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dpf_int_status[]={
            BDMFMON_MAKE_PARM("intupfframesent", "intupfframesent", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfrefresh", "intupfrefresh", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfreqcol", "intupfreqcol", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfreqstatus", "intupfreqstatus", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframedropped", "intdpfrxframedropped", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframeabort", "intdpfrxframeabort", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframe", "intdpfrxframe", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_dpf_int_mask[]={
            BDMFMON_MAKE_PARM("intupfframesentmask", "intupfframesentmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfrefreshmask", "intupfrefreshmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfreqcolmask", "intupfreqcolmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intupfreqstatusmask", "intupfreqstatusmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframedroppedmask", "intdpfrxframedroppedmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframeabortmask", "intdpfrxframeabortmask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("intdpfrxframemask", "intdpfrxframemask", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_0[]={
            BDMFMON_MAKE_PARM("burstcap0", "burstcap0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_1[]={
            BDMFMON_MAKE_PARM("burstcap1", "burstcap1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_2[]={
            BDMFMON_MAKE_PARM("burstcap2", "burstcap2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_3[]={
            BDMFMON_MAKE_PARM("burstcap3", "burstcap3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_4[]={
            BDMFMON_MAKE_PARM("burstcap4", "burstcap4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_5[]={
            BDMFMON_MAKE_PARM("burstcap5", "burstcap5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_6[]={
            BDMFMON_MAKE_PARM("burstcap6", "burstcap6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_7[]={
            BDMFMON_MAKE_PARM("burstcap7", "burstcap7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_0[]={
            BDMFMON_MAKE_PARM("quellidmap0", "quellidmap0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_1[]={
            BDMFMON_MAKE_PARM("quellidmap1", "quellidmap1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_2[]={
            BDMFMON_MAKE_PARM("quellidmap2", "quellidmap2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_3[]={
            BDMFMON_MAKE_PARM("quellidmap3", "quellidmap3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_4[]={
            BDMFMON_MAKE_PARM("quellidmap4", "quellidmap4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_5[]={
            BDMFMON_MAKE_PARM("quellidmap5", "quellidmap5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_6[]={
            BDMFMON_MAKE_PARM("quellidmap6", "quellidmap6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_7[]={
            BDMFMON_MAKE_PARM("quellidmap7", "quellidmap7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt0[]={
            BDMFMON_MAKE_PARM("unusedtqcnt0", "unusedtqcnt0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt1[]={
            BDMFMON_MAKE_PARM("unusedtqcnt1", "unusedtqcnt1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt2[]={
            BDMFMON_MAKE_PARM("unusedtqcnt2", "unusedtqcnt2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt3[]={
            BDMFMON_MAKE_PARM("unusedtqcnt3", "unusedtqcnt3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt4[]={
            BDMFMON_MAKE_PARM("unusedtqcnt4", "unusedtqcnt4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt5[]={
            BDMFMON_MAKE_PARM("unusedtqcnt5", "unusedtqcnt5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt6[]={
            BDMFMON_MAKE_PARM("unusedtqcnt6", "unusedtqcnt6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt7[]={
            BDMFMON_MAKE_PARM("unusedtqcnt7", "unusedtqcnt7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_0[]={
            BDMFMON_MAKE_PARM("cfgshpmask0", "cfgshpmask0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_1[]={
            BDMFMON_MAKE_PARM("cfgshpmask1", "cfgshpmask1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_2[]={
            BDMFMON_MAKE_PARM("cfgshpmask2", "cfgshpmask2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_3[]={
            BDMFMON_MAKE_PARM("cfgshpmask3", "cfgshpmask3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_4[]={
            BDMFMON_MAKE_PARM("cfgshpmask4", "cfgshpmask4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_5[]={
            BDMFMON_MAKE_PARM("cfgshpmask5", "cfgshpmask5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_6[]={
            BDMFMON_MAKE_PARM("cfgshpmask6", "cfgshpmask6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_7[]={
            BDMFMON_MAKE_PARM("cfgshpmask7", "cfgshpmask7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_0[]={
            BDMFMON_MAKE_PARM("cfgl2squeend0", "cfgl2squeend0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart0", "cfgl2squestart0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_1[]={
            BDMFMON_MAKE_PARM("cfgl2squeend1", "cfgl2squeend1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart1", "cfgl2squestart1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_2[]={
            BDMFMON_MAKE_PARM("cfgl2squeend2", "cfgl2squeend2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart2", "cfgl2squestart2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_3[]={
            BDMFMON_MAKE_PARM("cfgl2squeend3", "cfgl2squeend3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart3", "cfgl2squestart3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_4[]={
            BDMFMON_MAKE_PARM("cfgl2squeend4", "cfgl2squeend4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart4", "cfgl2squestart4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_5[]={
            BDMFMON_MAKE_PARM("cfgl2squeend5", "cfgl2squeend5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart5", "cfgl2squestart5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_6[]={
            BDMFMON_MAKE_PARM("cfgl2squeend6", "cfgl2squeend6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart6", "cfgl2squestart6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_7[]={
            BDMFMON_MAKE_PARM("cfgl2squeend7", "cfgl2squeend7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart7", "cfgl2squestart7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_0[]={
            BDMFMON_MAKE_PARM("prvburstlimit0", "prvburstlimit0", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_1[]={
            BDMFMON_MAKE_PARM("prvburstlimit1", "prvburstlimit1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_2[]={
            BDMFMON_MAKE_PARM("prvburstlimit2", "prvburstlimit2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_3[]={
            BDMFMON_MAKE_PARM("prvburstlimit3", "prvburstlimit3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_4[]={
            BDMFMON_MAKE_PARM("prvburstlimit4", "prvburstlimit4", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_5[]={
            BDMFMON_MAKE_PARM("prvburstlimit5", "prvburstlimit5", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_6[]={
            BDMFMON_MAKE_PARM("prvburstlimit6", "prvburstlimit6", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_7[]={
            BDMFMON_MAKE_PARM("prvburstlimit7", "prvburstlimit7", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_8[]={
            BDMFMON_MAKE_PARM("burstcap8", "burstcap8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_9[]={
            BDMFMON_MAKE_PARM("burstcap9", "burstcap9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_10[]={
            BDMFMON_MAKE_PARM("burstcap10", "burstcap10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_11[]={
            BDMFMON_MAKE_PARM("burstcap11", "burstcap11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_12[]={
            BDMFMON_MAKE_PARM("burstcap12", "burstcap12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_13[]={
            BDMFMON_MAKE_PARM("burstcap13", "burstcap13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_14[]={
            BDMFMON_MAKE_PARM("burstcap14", "burstcap14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_burst_cap_15[]={
            BDMFMON_MAKE_PARM("burstcap15", "burstcap15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_8[]={
            BDMFMON_MAKE_PARM("quellidmap8", "quellidmap8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_9[]={
            BDMFMON_MAKE_PARM("quellidmap9", "quellidmap9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_10[]={
            BDMFMON_MAKE_PARM("quellidmap10", "quellidmap10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_11[]={
            BDMFMON_MAKE_PARM("quellidmap11", "quellidmap11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_12[]={
            BDMFMON_MAKE_PARM("quellidmap12", "quellidmap12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_13[]={
            BDMFMON_MAKE_PARM("quellidmap13", "quellidmap13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_14[]={
            BDMFMON_MAKE_PARM("quellidmap14", "quellidmap14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_queue_llid_map_15[]={
            BDMFMON_MAKE_PARM("quellidmap15", "quellidmap15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt8[]={
            BDMFMON_MAKE_PARM("unusedtqcnt8", "unusedtqcnt8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt9[]={
            BDMFMON_MAKE_PARM("unusedtqcnt9", "unusedtqcnt9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt10[]={
            BDMFMON_MAKE_PARM("unusedtqcnt10", "unusedtqcnt10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt11[]={
            BDMFMON_MAKE_PARM("unusedtqcnt11", "unusedtqcnt11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt12[]={
            BDMFMON_MAKE_PARM("unusedtqcnt12", "unusedtqcnt12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt13[]={
            BDMFMON_MAKE_PARM("unusedtqcnt13", "unusedtqcnt13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt14[]={
            BDMFMON_MAKE_PARM("unusedtqcnt14", "unusedtqcnt14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_unused_tq_cnt15[]={
            BDMFMON_MAKE_PARM("unusedtqcnt15", "unusedtqcnt15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_8[]={
            BDMFMON_MAKE_PARM("cfgshpmask8", "cfgshpmask8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_9[]={
            BDMFMON_MAKE_PARM("cfgshpmask9", "cfgshpmask9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_10[]={
            BDMFMON_MAKE_PARM("cfgshpmask10", "cfgshpmask10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_11[]={
            BDMFMON_MAKE_PARM("cfgshpmask11", "cfgshpmask11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_12[]={
            BDMFMON_MAKE_PARM("cfgshpmask12", "cfgshpmask12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_13[]={
            BDMFMON_MAKE_PARM("cfgshpmask13", "cfgshpmask13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_14[]={
            BDMFMON_MAKE_PARM("cfgshpmask14", "cfgshpmask14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l1s_shp_que_mask_15[]={
            BDMFMON_MAKE_PARM("cfgshpmask15", "cfgshpmask15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_8[]={
            BDMFMON_MAKE_PARM("cfgl2squeend8", "cfgl2squeend8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart8", "cfgl2squestart8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_9[]={
            BDMFMON_MAKE_PARM("cfgl2squeend9", "cfgl2squeend9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart9", "cfgl2squestart9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_10[]={
            BDMFMON_MAKE_PARM("cfgl2squeend10", "cfgl2squeend10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart10", "cfgl2squestart10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_11[]={
            BDMFMON_MAKE_PARM("cfgl2squeend11", "cfgl2squeend11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart11", "cfgl2squestart11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_12[]={
            BDMFMON_MAKE_PARM("cfgl2squeend12", "cfgl2squeend12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart12", "cfgl2squestart12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_13[]={
            BDMFMON_MAKE_PARM("cfgl2squeend13", "cfgl2squeend13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart13", "cfgl2squestart13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_14[]={
            BDMFMON_MAKE_PARM("cfgl2squeend14", "cfgl2squeend14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart14", "cfgl2squestart14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_l2s_que_config_15[]={
            BDMFMON_MAKE_PARM("cfgl2squeend15", "cfgl2squeend15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgl2squestart15", "cfgl2squestart15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_8[]={
            BDMFMON_MAKE_PARM("prvburstlimit8", "prvburstlimit8", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_9[]={
            BDMFMON_MAKE_PARM("prvburstlimit9", "prvburstlimit9", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_10[]={
            BDMFMON_MAKE_PARM("prvburstlimit10", "prvburstlimit10", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_11[]={
            BDMFMON_MAKE_PARM("prvburstlimit11", "prvburstlimit11", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_12[]={
            BDMFMON_MAKE_PARM("prvburstlimit12", "prvburstlimit12", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_13[]={
            BDMFMON_MAKE_PARM("prvburstlimit13", "prvburstlimit13", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_14[]={
            BDMFMON_MAKE_PARM("prvburstlimit14", "prvburstlimit14", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_tx_ctc_burst_limit_15[]={
            BDMFMON_MAKE_PARM("prvburstlimit15", "prvburstlimit15", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size0[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap0_2", "cfgaddburstcap0_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap0_1", "cfgaddburstcap0_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size1[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap1_1", "cfgaddburstcap1_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap0_3", "cfgaddburstcap0_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size2[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap1_3", "cfgaddburstcap1_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap1_2", "cfgaddburstcap1_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size3[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap2_2", "cfgaddburstcap2_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap2_1", "cfgaddburstcap2_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size4[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap3_1", "cfgaddburstcap3_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap2_3", "cfgaddburstcap2_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size5[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap3_3", "cfgaddburstcap3_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap3_2", "cfgaddburstcap3_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size6[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap4_2", "cfgaddburstcap4_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap4_1", "cfgaddburstcap4_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size7[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap5_1", "cfgaddburstcap5_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap4_3", "cfgaddburstcap4_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size8[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap5_3", "cfgaddburstcap5_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap5_2", "cfgaddburstcap5_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size9[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap6_2", "cfgaddburstcap6_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap6_1", "cfgaddburstcap6_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size10[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap7_1", "cfgaddburstcap7_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap6_3", "cfgaddburstcap6_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size11[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap7_3", "cfgaddburstcap7_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap7_2", "cfgaddburstcap7_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size12[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap8_2", "cfgaddburstcap8_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap8_1", "cfgaddburstcap8_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size13[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap9_1", "cfgaddburstcap9_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap8_3", "cfgaddburstcap8_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size14[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap9_3", "cfgaddburstcap9_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap9_2", "cfgaddburstcap9_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size15[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap10_2", "cfgaddburstcap10_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap10_1", "cfgaddburstcap10_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size16[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap11_1", "cfgaddburstcap11_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap10_3", "cfgaddburstcap10_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size17[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap11_3", "cfgaddburstcap11_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap11_2", "cfgaddburstcap11_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size18[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap12_2", "cfgaddburstcap12_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap12_1", "cfgaddburstcap12_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size19[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap13_1", "cfgaddburstcap13_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap12_3", "cfgaddburstcap12_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size20[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap13_3", "cfgaddburstcap13_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap13_2", "cfgaddburstcap13_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size21[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap14_2", "cfgaddburstcap14_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap14_1", "cfgaddburstcap14_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size22[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap15_1", "cfgaddburstcap15_1", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap14_3", "cfgaddburstcap14_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_10g_abc_size23[]={
            BDMFMON_MAKE_PARM("cfgaddburstcap15_3", "cfgaddburstcap15_3", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_MAKE_PARM("cfgaddburstcap15_2", "cfgaddburstcap15_2", BDMFMON_PARM_NUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_enum_val_t selector_table[] = {
            { .name="control_0", .val=BDMF_control_0, .parms=set_control_0 },
            { .name="control_1", .val=BDMF_control_1, .parms=set_control_1 },
            { .name="enable_grants", .val=BDMF_enable_grants, .parms=set_enable_grants },
            { .name="drop_disc_gates", .val=BDMF_drop_disc_gates, .parms=set_drop_disc_gates },
            { .name="dis_fcs_chk", .val=BDMF_dis_fcs_chk, .parms=set_dis_fcs_chk },
            { .name="pass_gates", .val=BDMF_pass_gates, .parms=set_pass_gates },
            { .name="cfg_misalgn_fb", .val=BDMF_cfg_misalgn_fb, .parms=set_cfg_misalgn_fb },
            { .name="discovery_filter", .val=BDMF_discovery_filter, .parms=set_discovery_filter },
            { .name="minimum_grant_setup", .val=BDMF_minimum_grant_setup, .parms=set_minimum_grant_setup },
            { .name="reset_gnt_fifo", .val=BDMF_reset_gnt_fifo, .parms=set_reset_gnt_fifo },
            { .name="reset_l1_accumulator", .val=BDMF_reset_l1_accumulator, .parms=set_reset_l1_accumulator },
            { .name="l1_accumulator_sel", .val=BDMF_l1_accumulator_sel, .parms=set_l1_accumulator_sel },
            { .name="reset_rpt_pri", .val=BDMF_reset_rpt_pri, .parms=set_reset_rpt_pri },
            { .name="reset_l2_rpt_fifo", .val=BDMF_reset_l2_rpt_fifo, .parms=set_reset_l2_rpt_fifo },
            { .name="enable_upstream", .val=BDMF_enable_upstream, .parms=set_enable_upstream },
            { .name="enable_upstream_fec", .val=BDMF_enable_upstream_fec, .parms=set_enable_upstream_fec },
            { .name="report_byte_length", .val=BDMF_report_byte_length, .parms=set_report_byte_length },
            { .name="main_int_status", .val=BDMF_main_int_status, .parms=set_main_int_status },
            { .name="gnt_full_int_status", .val=BDMF_gnt_full_int_status, .parms=set_gnt_full_int_status },
            { .name="gnt_full_int_mask", .val=BDMF_gnt_full_int_mask, .parms=set_gnt_full_int_mask },
            { .name="gnt_miss_int_status", .val=BDMF_gnt_miss_int_status, .parms=set_gnt_miss_int_status },
            { .name="gnt_miss_int_mask", .val=BDMF_gnt_miss_int_mask, .parms=set_gnt_miss_int_mask },
            { .name="disc_rx_int_status", .val=BDMF_disc_rx_int_status, .parms=set_disc_rx_int_status },
            { .name="disc_rx_int_mask", .val=BDMF_disc_rx_int_mask, .parms=set_disc_rx_int_mask },
            { .name="gnt_intv_int_status", .val=BDMF_gnt_intv_int_status, .parms=set_gnt_intv_int_status },
            { .name="gnt_intv_int_mask", .val=BDMF_gnt_intv_int_mask, .parms=set_gnt_intv_int_mask },
            { .name="gnt_far_int_status", .val=BDMF_gnt_far_int_status, .parms=set_gnt_far_int_status },
            { .name="gnt_far_int_mask", .val=BDMF_gnt_far_int_mask, .parms=set_gnt_far_int_mask },
            { .name="gnt_misalgn_int_status", .val=BDMF_gnt_misalgn_int_status, .parms=set_gnt_misalgn_int_status },
            { .name="gnt_misalgn_int_mask", .val=BDMF_gnt_misalgn_int_mask, .parms=set_gnt_misalgn_int_mask },
            { .name="np_gnt_int_status", .val=BDMF_np_gnt_int_status, .parms=set_np_gnt_int_status },
            { .name="np_gnt_int_mask", .val=BDMF_np_gnt_int_mask, .parms=set_np_gnt_int_mask },
            { .name="del_stale_int_status", .val=BDMF_del_stale_int_status, .parms=set_del_stale_int_status },
            { .name="del_stale_int_mask", .val=BDMF_del_stale_int_mask, .parms=set_del_stale_int_mask },
            { .name="gnt_pres_int_status", .val=BDMF_gnt_pres_int_status, .parms=set_gnt_pres_int_status },
            { .name="gnt_pres_int_mask", .val=BDMF_gnt_pres_int_mask, .parms=set_gnt_pres_int_mask },
            { .name="rpt_pres_int_status", .val=BDMF_rpt_pres_int_status, .parms=set_rpt_pres_int_status },
            { .name="rpt_pres_int_mask", .val=BDMF_rpt_pres_int_mask, .parms=set_rpt_pres_int_mask },
            { .name="drx_abort_int_status", .val=BDMF_drx_abort_int_status, .parms=set_drx_abort_int_status },
            { .name="drx_abort_int_mask", .val=BDMF_drx_abort_int_mask, .parms=set_drx_abort_int_mask },
            { .name="empty_rpt_int_status", .val=BDMF_empty_rpt_int_status, .parms=set_empty_rpt_int_status },
            { .name="empty_rpt_int_mask", .val=BDMF_empty_rpt_int_mask, .parms=set_empty_rpt_int_mask },
            { .name="bcap_overflow_int_status", .val=BDMF_bcap_overflow_int_status, .parms=set_bcap_overflow_int_status },
            { .name="bcap_overflow_int_mask", .val=BDMF_bcap_overflow_int_mask, .parms=set_bcap_overflow_int_mask },
            { .name="bbh_dns_fault_int_status", .val=BDMF_bbh_dns_fault_int_status, .parms=set_bbh_dns_fault_int_status },
            { .name="bbh_dns_fault_int_mask", .val=BDMF_bbh_dns_fault_int_mask, .parms=set_bbh_dns_fault_int_mask },
            { .name="bbh_ups_fault_int_status", .val=BDMF_bbh_ups_fault_int_status, .parms=set_bbh_ups_fault_int_status },
            { .name="bbh_ups_fault_int_mask", .val=BDMF_bbh_ups_fault_int_mask, .parms=set_bbh_ups_fault_int_mask },
            { .name="bbh_ups_abort_int_status", .val=BDMF_bbh_ups_abort_int_status, .parms=set_bbh_ups_abort_int_status },
            { .name="bbh_ups_abort_int_mask", .val=BDMF_bbh_ups_abort_int_mask, .parms=set_bbh_ups_abort_int_mask },
            { .name="main_int_mask", .val=BDMF_main_int_mask, .parms=set_main_int_mask },
            { .name="max_gnt_size", .val=BDMF_max_gnt_size, .parms=set_max_gnt_size },
            { .name="max_frame_size", .val=BDMF_max_frame_size, .parms=set_max_frame_size },
            { .name="grant_ovr_hd", .val=BDMF_grant_ovr_hd, .parms=set_grant_ovr_hd },
            { .name="poll_size", .val=BDMF_poll_size, .parms=set_poll_size },
            { .name="dn_rd_gnt_margin", .val=BDMF_dn_rd_gnt_margin, .parms=set_dn_rd_gnt_margin },
            { .name="gnt_time_start_delta", .val=BDMF_gnt_time_start_delta, .parms=set_gnt_time_start_delta },
            { .name="time_stamp_diff", .val=BDMF_time_stamp_diff, .parms=set_time_stamp_diff },
            { .name="up_time_stamp_off", .val=BDMF_up_time_stamp_off, .parms=set_up_time_stamp_off },
            { .name="gnt_interval", .val=BDMF_gnt_interval, .parms=set_gnt_interval },
            { .name="dn_gnt_misalign_thr", .val=BDMF_dn_gnt_misalign_thr, .parms=set_dn_gnt_misalign_thr },
            { .name="dn_gnt_misalign_pause", .val=BDMF_dn_gnt_misalign_pause, .parms=set_dn_gnt_misalign_pause },
            { .name="non_poll_intv", .val=BDMF_non_poll_intv, .parms=set_non_poll_intv },
            { .name="force_fcs_err", .val=BDMF_force_fcs_err, .parms=set_force_fcs_err },
            { .name="grant_overlap_limit", .val=BDMF_grant_overlap_limit, .parms=set_grant_overlap_limit },
            { .name="aes_configuration_0", .val=BDMF_aes_configuration_0, .parms=set_aes_configuration_0 },
            { .name="disc_grant_ovr_hd", .val=BDMF_disc_grant_ovr_hd, .parms=set_disc_grant_ovr_hd },
            { .name="dn_discovery_seed", .val=BDMF_dn_discovery_seed, .parms=set_dn_discovery_seed },
            { .name="dn_discovery_inc", .val=BDMF_dn_discovery_inc, .parms=set_dn_discovery_inc },
            { .name="dn_discovery_size", .val=BDMF_dn_discovery_size, .parms=set_dn_discovery_size },
            { .name="fec_ipg_length", .val=BDMF_fec_ipg_length, .parms=set_fec_ipg_length },
            { .name="fake_report_value_en", .val=BDMF_fake_report_value_en, .parms=set_fake_report_value_en },
            { .name="fake_report_value", .val=BDMF_fake_report_value, .parms=set_fake_report_value },
            { .name="valid_opcode_map", .val=BDMF_valid_opcode_map, .parms=set_valid_opcode_map },
            { .name="up_packet_tx_margin", .val=BDMF_up_packet_tx_margin, .parms=set_up_packet_tx_margin },
            { .name="multi_pri_cfg_0", .val=BDMF_multi_pri_cfg_0, .parms=set_multi_pri_cfg_0 },
            { .name="forced_report_en", .val=BDMF_forced_report_en, .parms=set_forced_report_en },
            { .name="forced_report_max_interval", .val=BDMF_forced_report_max_interval, .parms=set_forced_report_max_interval },
            { .name="l2s_flush_config", .val=BDMF_l2s_flush_config, .parms=set_l2s_flush_config },
            { .name="data_port_command", .val=BDMF_data_port_command, .parms=set_data_port_command },
            { .name="data_port_address", .val=BDMF_data_port_address, .parms=set_data_port_address },
            { .name="data_port_data_0", .val=BDMF_data_port_data_0, .parms=set_data_port_data_0 },
            { .name="unmap_big_cnt", .val=BDMF_unmap_big_cnt, .parms=set_unmap_big_cnt },
            { .name="unmap_frame_cnt", .val=BDMF_unmap_frame_cnt, .parms=set_unmap_frame_cnt },
            { .name="unmap_fcs_cnt", .val=BDMF_unmap_fcs_cnt, .parms=set_unmap_fcs_cnt },
            { .name="unmap_gate_cnt", .val=BDMF_unmap_gate_cnt, .parms=set_unmap_gate_cnt },
            { .name="unmap_oam_cnt", .val=BDMF_unmap_oam_cnt, .parms=set_unmap_oam_cnt },
            { .name="unmap_small_cnt", .val=BDMF_unmap_small_cnt, .parms=set_unmap_small_cnt },
            { .name="fif_dequeue_event_cnt", .val=BDMF_fif_dequeue_event_cnt, .parms=set_fif_dequeue_event_cnt },
            { .name="bbh_up_fault_halt_en", .val=BDMF_bbh_up_fault_halt_en, .parms=set_bbh_up_fault_halt_en },
            { .name="bbh_up_tardy_halt_en", .val=BDMF_bbh_up_tardy_halt_en, .parms=set_bbh_up_tardy_halt_en },
            { .name="debug_l2s_ptr_sel", .val=BDMF_debug_l2s_ptr_sel, .parms=set_debug_l2s_ptr_sel },
            { .name="olt_mac_addr_lo", .val=BDMF_olt_mac_addr_lo, .parms=set_olt_mac_addr_lo },
            { .name="olt_mac_addr_hi", .val=BDMF_olt_mac_addr_hi, .parms=set_olt_mac_addr_hi },
            { .name="bbh_max_outstanding_tardy_packets", .val=BDMF_bbh_max_outstanding_tardy_packets, .parms=set_bbh_max_outstanding_tardy_packets },
            { .name="min_report_value_difference", .val=BDMF_min_report_value_difference, .parms=set_min_report_value_difference },
            { .name="spare_ctl", .val=BDMF_spare_ctl, .parms=set_spare_ctl },
            { .name="ts_sync_offset", .val=BDMF_ts_sync_offset, .parms=set_ts_sync_offset },
            { .name="dn_ts_offset", .val=BDMF_dn_ts_offset, .parms=set_dn_ts_offset },
            { .name="up_ts_offset_lo", .val=BDMF_up_ts_offset_lo, .parms=set_up_ts_offset_lo },
            { .name="up_ts_offset_hi", .val=BDMF_up_ts_offset_hi, .parms=set_up_ts_offset_hi },
            { .name="two_step_ts_ctl", .val=BDMF_two_step_ts_ctl, .parms=set_two_step_ts_ctl },
            { .name="1588_timestamp_int_status", .val=BDMF_1588_timestamp_int_status, .parms=set_1588_timestamp_int_status },
            { .name="1588_timestamp_int_mask", .val=BDMF_1588_timestamp_int_mask, .parms=set_1588_timestamp_int_mask },
            { .name="up_packet_fetch_margin", .val=BDMF_up_packet_fetch_margin, .parms=set_up_packet_fetch_margin },
            { .name="persistent_report_cfg", .val=BDMF_persistent_report_cfg, .parms=set_persistent_report_cfg },
            { .name="persistent_report_enables", .val=BDMF_persistent_report_enables, .parms=set_persistent_report_enables },
            { .name="persistent_report_request_size", .val=BDMF_persistent_report_request_size, .parms=set_persistent_report_request_size },
            { .name="aes_configuration_1", .val=BDMF_aes_configuration_1, .parms=set_aes_configuration_1 },
            { .name="onu_pause_pfc_cfg", .val=BDMF_onu_pause_pfc_cfg, .parms=set_onu_pause_pfc_cfg },
            { .name="onu_pause_pfc_time_scale", .val=BDMF_onu_pause_pfc_time_scale, .parms=set_onu_pause_pfc_time_scale },
            { .name="dpf_int_status", .val=BDMF_dpf_int_status, .parms=set_dpf_int_status },
            { .name="dpf_int_mask", .val=BDMF_dpf_int_mask, .parms=set_dpf_int_mask },
            { .name="burst_cap_0", .val=BDMF_burst_cap_0, .parms=set_burst_cap_0 },
            { .name="burst_cap_1", .val=BDMF_burst_cap_1, .parms=set_burst_cap_1 },
            { .name="burst_cap_2", .val=BDMF_burst_cap_2, .parms=set_burst_cap_2 },
            { .name="burst_cap_3", .val=BDMF_burst_cap_3, .parms=set_burst_cap_3 },
            { .name="burst_cap_4", .val=BDMF_burst_cap_4, .parms=set_burst_cap_4 },
            { .name="burst_cap_5", .val=BDMF_burst_cap_5, .parms=set_burst_cap_5 },
            { .name="burst_cap_6", .val=BDMF_burst_cap_6, .parms=set_burst_cap_6 },
            { .name="burst_cap_7", .val=BDMF_burst_cap_7, .parms=set_burst_cap_7 },
            { .name="queue_llid_map_0", .val=BDMF_queue_llid_map_0, .parms=set_queue_llid_map_0 },
            { .name="queue_llid_map_1", .val=BDMF_queue_llid_map_1, .parms=set_queue_llid_map_1 },
            { .name="queue_llid_map_2", .val=BDMF_queue_llid_map_2, .parms=set_queue_llid_map_2 },
            { .name="queue_llid_map_3", .val=BDMF_queue_llid_map_3, .parms=set_queue_llid_map_3 },
            { .name="queue_llid_map_4", .val=BDMF_queue_llid_map_4, .parms=set_queue_llid_map_4 },
            { .name="queue_llid_map_5", .val=BDMF_queue_llid_map_5, .parms=set_queue_llid_map_5 },
            { .name="queue_llid_map_6", .val=BDMF_queue_llid_map_6, .parms=set_queue_llid_map_6 },
            { .name="queue_llid_map_7", .val=BDMF_queue_llid_map_7, .parms=set_queue_llid_map_7 },
            { .name="unused_tq_cnt0", .val=BDMF_unused_tq_cnt0, .parms=set_unused_tq_cnt0 },
            { .name="unused_tq_cnt1", .val=BDMF_unused_tq_cnt1, .parms=set_unused_tq_cnt1 },
            { .name="unused_tq_cnt2", .val=BDMF_unused_tq_cnt2, .parms=set_unused_tq_cnt2 },
            { .name="unused_tq_cnt3", .val=BDMF_unused_tq_cnt3, .parms=set_unused_tq_cnt3 },
            { .name="unused_tq_cnt4", .val=BDMF_unused_tq_cnt4, .parms=set_unused_tq_cnt4 },
            { .name="unused_tq_cnt5", .val=BDMF_unused_tq_cnt5, .parms=set_unused_tq_cnt5 },
            { .name="unused_tq_cnt6", .val=BDMF_unused_tq_cnt6, .parms=set_unused_tq_cnt6 },
            { .name="unused_tq_cnt7", .val=BDMF_unused_tq_cnt7, .parms=set_unused_tq_cnt7 },
            { .name="tx_l1s_shp_que_mask_0", .val=BDMF_tx_l1s_shp_que_mask_0, .parms=set_tx_l1s_shp_que_mask_0 },
            { .name="tx_l1s_shp_que_mask_1", .val=BDMF_tx_l1s_shp_que_mask_1, .parms=set_tx_l1s_shp_que_mask_1 },
            { .name="tx_l1s_shp_que_mask_2", .val=BDMF_tx_l1s_shp_que_mask_2, .parms=set_tx_l1s_shp_que_mask_2 },
            { .name="tx_l1s_shp_que_mask_3", .val=BDMF_tx_l1s_shp_que_mask_3, .parms=set_tx_l1s_shp_que_mask_3 },
            { .name="tx_l1s_shp_que_mask_4", .val=BDMF_tx_l1s_shp_que_mask_4, .parms=set_tx_l1s_shp_que_mask_4 },
            { .name="tx_l1s_shp_que_mask_5", .val=BDMF_tx_l1s_shp_que_mask_5, .parms=set_tx_l1s_shp_que_mask_5 },
            { .name="tx_l1s_shp_que_mask_6", .val=BDMF_tx_l1s_shp_que_mask_6, .parms=set_tx_l1s_shp_que_mask_6 },
            { .name="tx_l1s_shp_que_mask_7", .val=BDMF_tx_l1s_shp_que_mask_7, .parms=set_tx_l1s_shp_que_mask_7 },
            { .name="tx_l2s_que_config_0", .val=BDMF_tx_l2s_que_config_0, .parms=set_tx_l2s_que_config_0 },
            { .name="tx_l2s_que_config_1", .val=BDMF_tx_l2s_que_config_1, .parms=set_tx_l2s_que_config_1 },
            { .name="tx_l2s_que_config_2", .val=BDMF_tx_l2s_que_config_2, .parms=set_tx_l2s_que_config_2 },
            { .name="tx_l2s_que_config_3", .val=BDMF_tx_l2s_que_config_3, .parms=set_tx_l2s_que_config_3 },
            { .name="tx_l2s_que_config_4", .val=BDMF_tx_l2s_que_config_4, .parms=set_tx_l2s_que_config_4 },
            { .name="tx_l2s_que_config_5", .val=BDMF_tx_l2s_que_config_5, .parms=set_tx_l2s_que_config_5 },
            { .name="tx_l2s_que_config_6", .val=BDMF_tx_l2s_que_config_6, .parms=set_tx_l2s_que_config_6 },
            { .name="tx_l2s_que_config_7", .val=BDMF_tx_l2s_que_config_7, .parms=set_tx_l2s_que_config_7 },
            { .name="tx_ctc_burst_limit_0", .val=BDMF_tx_ctc_burst_limit_0, .parms=set_tx_ctc_burst_limit_0 },
            { .name="tx_ctc_burst_limit_1", .val=BDMF_tx_ctc_burst_limit_1, .parms=set_tx_ctc_burst_limit_1 },
            { .name="tx_ctc_burst_limit_2", .val=BDMF_tx_ctc_burst_limit_2, .parms=set_tx_ctc_burst_limit_2 },
            { .name="tx_ctc_burst_limit_3", .val=BDMF_tx_ctc_burst_limit_3, .parms=set_tx_ctc_burst_limit_3 },
            { .name="tx_ctc_burst_limit_4", .val=BDMF_tx_ctc_burst_limit_4, .parms=set_tx_ctc_burst_limit_4 },
            { .name="tx_ctc_burst_limit_5", .val=BDMF_tx_ctc_burst_limit_5, .parms=set_tx_ctc_burst_limit_5 },
            { .name="tx_ctc_burst_limit_6", .val=BDMF_tx_ctc_burst_limit_6, .parms=set_tx_ctc_burst_limit_6 },
            { .name="tx_ctc_burst_limit_7", .val=BDMF_tx_ctc_burst_limit_7, .parms=set_tx_ctc_burst_limit_7 },
            { .name="burst_cap_8", .val=BDMF_burst_cap_8, .parms=set_burst_cap_8 },
            { .name="burst_cap_9", .val=BDMF_burst_cap_9, .parms=set_burst_cap_9 },
            { .name="burst_cap_10", .val=BDMF_burst_cap_10, .parms=set_burst_cap_10 },
            { .name="burst_cap_11", .val=BDMF_burst_cap_11, .parms=set_burst_cap_11 },
            { .name="burst_cap_12", .val=BDMF_burst_cap_12, .parms=set_burst_cap_12 },
            { .name="burst_cap_13", .val=BDMF_burst_cap_13, .parms=set_burst_cap_13 },
            { .name="burst_cap_14", .val=BDMF_burst_cap_14, .parms=set_burst_cap_14 },
            { .name="burst_cap_15", .val=BDMF_burst_cap_15, .parms=set_burst_cap_15 },
            { .name="queue_llid_map_8", .val=BDMF_queue_llid_map_8, .parms=set_queue_llid_map_8 },
            { .name="queue_llid_map_9", .val=BDMF_queue_llid_map_9, .parms=set_queue_llid_map_9 },
            { .name="queue_llid_map_10", .val=BDMF_queue_llid_map_10, .parms=set_queue_llid_map_10 },
            { .name="queue_llid_map_11", .val=BDMF_queue_llid_map_11, .parms=set_queue_llid_map_11 },
            { .name="queue_llid_map_12", .val=BDMF_queue_llid_map_12, .parms=set_queue_llid_map_12 },
            { .name="queue_llid_map_13", .val=BDMF_queue_llid_map_13, .parms=set_queue_llid_map_13 },
            { .name="queue_llid_map_14", .val=BDMF_queue_llid_map_14, .parms=set_queue_llid_map_14 },
            { .name="queue_llid_map_15", .val=BDMF_queue_llid_map_15, .parms=set_queue_llid_map_15 },
            { .name="unused_tq_cnt8", .val=BDMF_unused_tq_cnt8, .parms=set_unused_tq_cnt8 },
            { .name="unused_tq_cnt9", .val=BDMF_unused_tq_cnt9, .parms=set_unused_tq_cnt9 },
            { .name="unused_tq_cnt10", .val=BDMF_unused_tq_cnt10, .parms=set_unused_tq_cnt10 },
            { .name="unused_tq_cnt11", .val=BDMF_unused_tq_cnt11, .parms=set_unused_tq_cnt11 },
            { .name="unused_tq_cnt12", .val=BDMF_unused_tq_cnt12, .parms=set_unused_tq_cnt12 },
            { .name="unused_tq_cnt13", .val=BDMF_unused_tq_cnt13, .parms=set_unused_tq_cnt13 },
            { .name="unused_tq_cnt14", .val=BDMF_unused_tq_cnt14, .parms=set_unused_tq_cnt14 },
            { .name="unused_tq_cnt15", .val=BDMF_unused_tq_cnt15, .parms=set_unused_tq_cnt15 },
            { .name="tx_l1s_shp_que_mask_8", .val=BDMF_tx_l1s_shp_que_mask_8, .parms=set_tx_l1s_shp_que_mask_8 },
            { .name="tx_l1s_shp_que_mask_9", .val=BDMF_tx_l1s_shp_que_mask_9, .parms=set_tx_l1s_shp_que_mask_9 },
            { .name="tx_l1s_shp_que_mask_10", .val=BDMF_tx_l1s_shp_que_mask_10, .parms=set_tx_l1s_shp_que_mask_10 },
            { .name="tx_l1s_shp_que_mask_11", .val=BDMF_tx_l1s_shp_que_mask_11, .parms=set_tx_l1s_shp_que_mask_11 },
            { .name="tx_l1s_shp_que_mask_12", .val=BDMF_tx_l1s_shp_que_mask_12, .parms=set_tx_l1s_shp_que_mask_12 },
            { .name="tx_l1s_shp_que_mask_13", .val=BDMF_tx_l1s_shp_que_mask_13, .parms=set_tx_l1s_shp_que_mask_13 },
            { .name="tx_l1s_shp_que_mask_14", .val=BDMF_tx_l1s_shp_que_mask_14, .parms=set_tx_l1s_shp_que_mask_14 },
            { .name="tx_l1s_shp_que_mask_15", .val=BDMF_tx_l1s_shp_que_mask_15, .parms=set_tx_l1s_shp_que_mask_15 },
            { .name="tx_l2s_que_config_8", .val=BDMF_tx_l2s_que_config_8, .parms=set_tx_l2s_que_config_8 },
            { .name="tx_l2s_que_config_9", .val=BDMF_tx_l2s_que_config_9, .parms=set_tx_l2s_que_config_9 },
            { .name="tx_l2s_que_config_10", .val=BDMF_tx_l2s_que_config_10, .parms=set_tx_l2s_que_config_10 },
            { .name="tx_l2s_que_config_11", .val=BDMF_tx_l2s_que_config_11, .parms=set_tx_l2s_que_config_11 },
            { .name="tx_l2s_que_config_12", .val=BDMF_tx_l2s_que_config_12, .parms=set_tx_l2s_que_config_12 },
            { .name="tx_l2s_que_config_13", .val=BDMF_tx_l2s_que_config_13, .parms=set_tx_l2s_que_config_13 },
            { .name="tx_l2s_que_config_14", .val=BDMF_tx_l2s_que_config_14, .parms=set_tx_l2s_que_config_14 },
            { .name="tx_l2s_que_config_15", .val=BDMF_tx_l2s_que_config_15, .parms=set_tx_l2s_que_config_15 },
            { .name="tx_ctc_burst_limit_8", .val=BDMF_tx_ctc_burst_limit_8, .parms=set_tx_ctc_burst_limit_8 },
            { .name="tx_ctc_burst_limit_9", .val=BDMF_tx_ctc_burst_limit_9, .parms=set_tx_ctc_burst_limit_9 },
            { .name="tx_ctc_burst_limit_10", .val=BDMF_tx_ctc_burst_limit_10, .parms=set_tx_ctc_burst_limit_10 },
            { .name="tx_ctc_burst_limit_11", .val=BDMF_tx_ctc_burst_limit_11, .parms=set_tx_ctc_burst_limit_11 },
            { .name="tx_ctc_burst_limit_12", .val=BDMF_tx_ctc_burst_limit_12, .parms=set_tx_ctc_burst_limit_12 },
            { .name="tx_ctc_burst_limit_13", .val=BDMF_tx_ctc_burst_limit_13, .parms=set_tx_ctc_burst_limit_13 },
            { .name="tx_ctc_burst_limit_14", .val=BDMF_tx_ctc_burst_limit_14, .parms=set_tx_ctc_burst_limit_14 },
            { .name="tx_ctc_burst_limit_15", .val=BDMF_tx_ctc_burst_limit_15, .parms=set_tx_ctc_burst_limit_15 },
            { .name="10g_abc_size0", .val=BDMF_10g_abc_size0, .parms=set_10g_abc_size0 },
            { .name="10g_abc_size1", .val=BDMF_10g_abc_size1, .parms=set_10g_abc_size1 },
            { .name="10g_abc_size2", .val=BDMF_10g_abc_size2, .parms=set_10g_abc_size2 },
            { .name="10g_abc_size3", .val=BDMF_10g_abc_size3, .parms=set_10g_abc_size3 },
            { .name="10g_abc_size4", .val=BDMF_10g_abc_size4, .parms=set_10g_abc_size4 },
            { .name="10g_abc_size5", .val=BDMF_10g_abc_size5, .parms=set_10g_abc_size5 },
            { .name="10g_abc_size6", .val=BDMF_10g_abc_size6, .parms=set_10g_abc_size6 },
            { .name="10g_abc_size7", .val=BDMF_10g_abc_size7, .parms=set_10g_abc_size7 },
            { .name="10g_abc_size8", .val=BDMF_10g_abc_size8, .parms=set_10g_abc_size8 },
            { .name="10g_abc_size9", .val=BDMF_10g_abc_size9, .parms=set_10g_abc_size9 },
            { .name="10g_abc_size10", .val=BDMF_10g_abc_size10, .parms=set_10g_abc_size10 },
            { .name="10g_abc_size11", .val=BDMF_10g_abc_size11, .parms=set_10g_abc_size11 },
            { .name="10g_abc_size12", .val=BDMF_10g_abc_size12, .parms=set_10g_abc_size12 },
            { .name="10g_abc_size13", .val=BDMF_10g_abc_size13, .parms=set_10g_abc_size13 },
            { .name="10g_abc_size14", .val=BDMF_10g_abc_size14, .parms=set_10g_abc_size14 },
            { .name="10g_abc_size15", .val=BDMF_10g_abc_size15, .parms=set_10g_abc_size15 },
            { .name="10g_abc_size16", .val=BDMF_10g_abc_size16, .parms=set_10g_abc_size16 },
            { .name="10g_abc_size17", .val=BDMF_10g_abc_size17, .parms=set_10g_abc_size17 },
            { .name="10g_abc_size18", .val=BDMF_10g_abc_size18, .parms=set_10g_abc_size18 },
            { .name="10g_abc_size19", .val=BDMF_10g_abc_size19, .parms=set_10g_abc_size19 },
            { .name="10g_abc_size20", .val=BDMF_10g_abc_size20, .parms=set_10g_abc_size20 },
            { .name="10g_abc_size21", .val=BDMF_10g_abc_size21, .parms=set_10g_abc_size21 },
            { .name="10g_abc_size22", .val=BDMF_10g_abc_size22, .parms=set_10g_abc_size22 },
            { .name="10g_abc_size23", .val=BDMF_10g_abc_size23, .parms=set_10g_abc_size23 },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "set", "set", bcm_epn_cli_set,
            BDMFMON_MAKE_PARM_SELECTOR("purpose", "purpose", selector_table, 0));
    }
    {
        static bdmfmon_cmd_parm_t set_default[]={
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_enum_val_t selector_table[] = {
            { .name="control_0", .val=BDMF_control_0, .parms=set_default },
            { .name="control_1", .val=BDMF_control_1, .parms=set_default },
            { .name="enable_grants", .val=BDMF_enable_grants, .parms=set_default },
            { .name="drop_disc_gates", .val=BDMF_drop_disc_gates, .parms=set_default },
            { .name="dis_fcs_chk", .val=BDMF_dis_fcs_chk, .parms=set_default },
            { .name="pass_gates", .val=BDMF_pass_gates, .parms=set_default },
            { .name="cfg_misalgn_fb", .val=BDMF_cfg_misalgn_fb, .parms=set_default },
            { .name="discovery_filter", .val=BDMF_discovery_filter, .parms=set_default },
            { .name="minimum_grant_setup", .val=BDMF_minimum_grant_setup, .parms=set_default },
            { .name="reset_gnt_fifo", .val=BDMF_reset_gnt_fifo, .parms=set_default },
            { .name="reset_l1_accumulator", .val=BDMF_reset_l1_accumulator, .parms=set_default },
            { .name="l1_accumulator_sel", .val=BDMF_l1_accumulator_sel, .parms=set_default },
            { .name="l1_sva_bytes", .val=BDMF_l1_sva_bytes, .parms=set_default },
            { .name="l1_uva_bytes", .val=BDMF_l1_uva_bytes, .parms=set_default },
            { .name="l1_sva_overflow", .val=BDMF_l1_sva_overflow, .parms=set_default },
            { .name="l1_uva_overflow", .val=BDMF_l1_uva_overflow, .parms=set_default },
            { .name="reset_rpt_pri", .val=BDMF_reset_rpt_pri, .parms=set_default },
            { .name="reset_l2_rpt_fifo", .val=BDMF_reset_l2_rpt_fifo, .parms=set_default },
            { .name="enable_upstream", .val=BDMF_enable_upstream, .parms=set_default },
            { .name="enable_upstream_fb", .val=BDMF_enable_upstream_fb, .parms=set_default },
            { .name="enable_upstream_fec", .val=BDMF_enable_upstream_fec, .parms=set_default },
            { .name="report_byte_length", .val=BDMF_report_byte_length, .parms=set_default },
            { .name="main_int_status", .val=BDMF_main_int_status, .parms=set_default },
            { .name="gnt_full_int_status", .val=BDMF_gnt_full_int_status, .parms=set_default },
            { .name="gnt_full_int_mask", .val=BDMF_gnt_full_int_mask, .parms=set_default },
            { .name="gnt_miss_int_status", .val=BDMF_gnt_miss_int_status, .parms=set_default },
            { .name="gnt_miss_int_mask", .val=BDMF_gnt_miss_int_mask, .parms=set_default },
            { .name="disc_rx_int_status", .val=BDMF_disc_rx_int_status, .parms=set_default },
            { .name="disc_rx_int_mask", .val=BDMF_disc_rx_int_mask, .parms=set_default },
            { .name="gnt_intv_int_status", .val=BDMF_gnt_intv_int_status, .parms=set_default },
            { .name="gnt_intv_int_mask", .val=BDMF_gnt_intv_int_mask, .parms=set_default },
            { .name="gnt_far_int_status", .val=BDMF_gnt_far_int_status, .parms=set_default },
            { .name="gnt_far_int_mask", .val=BDMF_gnt_far_int_mask, .parms=set_default },
            { .name="gnt_misalgn_int_status", .val=BDMF_gnt_misalgn_int_status, .parms=set_default },
            { .name="gnt_misalgn_int_mask", .val=BDMF_gnt_misalgn_int_mask, .parms=set_default },
            { .name="np_gnt_int_status", .val=BDMF_np_gnt_int_status, .parms=set_default },
            { .name="np_gnt_int_mask", .val=BDMF_np_gnt_int_mask, .parms=set_default },
            { .name="del_stale_int_status", .val=BDMF_del_stale_int_status, .parms=set_default },
            { .name="del_stale_int_mask", .val=BDMF_del_stale_int_mask, .parms=set_default },
            { .name="gnt_pres_int_status", .val=BDMF_gnt_pres_int_status, .parms=set_default },
            { .name="gnt_pres_int_mask", .val=BDMF_gnt_pres_int_mask, .parms=set_default },
            { .name="rpt_pres_int_status", .val=BDMF_rpt_pres_int_status, .parms=set_default },
            { .name="rpt_pres_int_mask", .val=BDMF_rpt_pres_int_mask, .parms=set_default },
            { .name="drx_abort_int_status", .val=BDMF_drx_abort_int_status, .parms=set_default },
            { .name="drx_abort_int_mask", .val=BDMF_drx_abort_int_mask, .parms=set_default },
            { .name="empty_rpt_int_status", .val=BDMF_empty_rpt_int_status, .parms=set_default },
            { .name="empty_rpt_int_mask", .val=BDMF_empty_rpt_int_mask, .parms=set_default },
            { .name="bcap_overflow_int_status", .val=BDMF_bcap_overflow_int_status, .parms=set_default },
            { .name="bcap_overflow_int_mask", .val=BDMF_bcap_overflow_int_mask, .parms=set_default },
            { .name="bbh_dns_fault_int_status", .val=BDMF_bbh_dns_fault_int_status, .parms=set_default },
            { .name="bbh_dns_fault_int_mask", .val=BDMF_bbh_dns_fault_int_mask, .parms=set_default },
            { .name="bbh_ups_fault_int_status", .val=BDMF_bbh_ups_fault_int_status, .parms=set_default },
            { .name="bbh_ups_fault_int_mask", .val=BDMF_bbh_ups_fault_int_mask, .parms=set_default },
            { .name="bbh_ups_abort_int_status", .val=BDMF_bbh_ups_abort_int_status, .parms=set_default },
            { .name="bbh_ups_abort_int_mask", .val=BDMF_bbh_ups_abort_int_mask, .parms=set_default },
            { .name="main_int_mask", .val=BDMF_main_int_mask, .parms=set_default },
            { .name="max_gnt_size", .val=BDMF_max_gnt_size, .parms=set_default },
            { .name="max_frame_size", .val=BDMF_max_frame_size, .parms=set_default },
            { .name="grant_ovr_hd", .val=BDMF_grant_ovr_hd, .parms=set_default },
            { .name="poll_size", .val=BDMF_poll_size, .parms=set_default },
            { .name="dn_rd_gnt_margin", .val=BDMF_dn_rd_gnt_margin, .parms=set_default },
            { .name="gnt_time_start_delta", .val=BDMF_gnt_time_start_delta, .parms=set_default },
            { .name="time_stamp_diff", .val=BDMF_time_stamp_diff, .parms=set_default },
            { .name="up_time_stamp_off", .val=BDMF_up_time_stamp_off, .parms=set_default },
            { .name="gnt_interval", .val=BDMF_gnt_interval, .parms=set_default },
            { .name="dn_gnt_misalign_thr", .val=BDMF_dn_gnt_misalign_thr, .parms=set_default },
            { .name="dn_gnt_misalign_pause", .val=BDMF_dn_gnt_misalign_pause, .parms=set_default },
            { .name="non_poll_intv", .val=BDMF_non_poll_intv, .parms=set_default },
            { .name="force_fcs_err", .val=BDMF_force_fcs_err, .parms=set_default },
            { .name="grant_overlap_limit", .val=BDMF_grant_overlap_limit, .parms=set_default },
            { .name="aes_configuration_0", .val=BDMF_aes_configuration_0, .parms=set_default },
            { .name="disc_grant_ovr_hd", .val=BDMF_disc_grant_ovr_hd, .parms=set_default },
            { .name="dn_discovery_seed", .val=BDMF_dn_discovery_seed, .parms=set_default },
            { .name="dn_discovery_inc", .val=BDMF_dn_discovery_inc, .parms=set_default },
            { .name="dn_discovery_size", .val=BDMF_dn_discovery_size, .parms=set_default },
            { .name="fec_ipg_length", .val=BDMF_fec_ipg_length, .parms=set_default },
            { .name="fake_report_value_en", .val=BDMF_fake_report_value_en, .parms=set_default },
            { .name="fake_report_value", .val=BDMF_fake_report_value, .parms=set_default },
            { .name="valid_opcode_map", .val=BDMF_valid_opcode_map, .parms=set_default },
            { .name="up_packet_tx_margin", .val=BDMF_up_packet_tx_margin, .parms=set_default },
            { .name="multi_pri_cfg_0", .val=BDMF_multi_pri_cfg_0, .parms=set_default },
            { .name="shared_bcap_ovrflow", .val=BDMF_shared_bcap_ovrflow, .parms=set_default },
            { .name="forced_report_en", .val=BDMF_forced_report_en, .parms=set_default },
            { .name="forced_report_max_interval", .val=BDMF_forced_report_max_interval, .parms=set_default },
            { .name="l2s_flush_config", .val=BDMF_l2s_flush_config, .parms=set_default },
            { .name="data_port_command", .val=BDMF_data_port_command, .parms=set_default },
            { .name="data_port_address", .val=BDMF_data_port_address, .parms=set_default },
            { .name="data_port_data_0", .val=BDMF_data_port_data_0, .parms=set_default },
            { .name="unmap_big_cnt", .val=BDMF_unmap_big_cnt, .parms=set_default },
            { .name="unmap_frame_cnt", .val=BDMF_unmap_frame_cnt, .parms=set_default },
            { .name="unmap_fcs_cnt", .val=BDMF_unmap_fcs_cnt, .parms=set_default },
            { .name="unmap_gate_cnt", .val=BDMF_unmap_gate_cnt, .parms=set_default },
            { .name="unmap_oam_cnt", .val=BDMF_unmap_oam_cnt, .parms=set_default },
            { .name="unmap_small_cnt", .val=BDMF_unmap_small_cnt, .parms=set_default },
            { .name="fif_dequeue_event_cnt", .val=BDMF_fif_dequeue_event_cnt, .parms=set_default },
            { .name="bbh_up_fault_halt_en", .val=BDMF_bbh_up_fault_halt_en, .parms=set_default },
            { .name="bbh_up_tardy_halt_en", .val=BDMF_bbh_up_tardy_halt_en, .parms=set_default },
            { .name="debug_status_0", .val=BDMF_debug_status_0, .parms=set_default },
            { .name="debug_status_1", .val=BDMF_debug_status_1, .parms=set_default },
            { .name="debug_l2s_ptr_sel", .val=BDMF_debug_l2s_ptr_sel, .parms=set_default },
            { .name="olt_mac_addr_lo", .val=BDMF_olt_mac_addr_lo, .parms=set_default },
            { .name="olt_mac_addr_hi", .val=BDMF_olt_mac_addr_hi, .parms=set_default },
            { .name="tx_l1s_shp_dqu_empty", .val=BDMF_tx_l1s_shp_dqu_empty, .parms=set_default },
            { .name="tx_l1s_unshaped_empty", .val=BDMF_tx_l1s_unshaped_empty, .parms=set_default },
            { .name="tx_l2s_que_empty", .val=BDMF_tx_l2s_que_empty, .parms=set_default },
            { .name="tx_l2s_que_full", .val=BDMF_tx_l2s_que_full, .parms=set_default },
            { .name="tx_l2s_que_stopped", .val=BDMF_tx_l2s_que_stopped, .parms=set_default },
            { .name="bbh_max_outstanding_tardy_packets", .val=BDMF_bbh_max_outstanding_tardy_packets, .parms=set_default },
            { .name="min_report_value_difference", .val=BDMF_min_report_value_difference, .parms=set_default },
            { .name="bbh_status_fifo_overflow", .val=BDMF_bbh_status_fifo_overflow, .parms=set_default },
            { .name="spare_ctl", .val=BDMF_spare_ctl, .parms=set_default },
            { .name="ts_sync_offset", .val=BDMF_ts_sync_offset, .parms=set_default },
            { .name="dn_ts_offset", .val=BDMF_dn_ts_offset, .parms=set_default },
            { .name="up_ts_offset_lo", .val=BDMF_up_ts_offset_lo, .parms=set_default },
            { .name="up_ts_offset_hi", .val=BDMF_up_ts_offset_hi, .parms=set_default },
            { .name="two_step_ts_ctl", .val=BDMF_two_step_ts_ctl, .parms=set_default },
            { .name="two_step_ts_value_lo", .val=BDMF_two_step_ts_value_lo, .parms=set_default },
            { .name="two_step_ts_value_hi", .val=BDMF_two_step_ts_value_hi, .parms=set_default },
            { .name="1588_timestamp_int_status", .val=BDMF_1588_timestamp_int_status, .parms=set_default },
            { .name="1588_timestamp_int_mask", .val=BDMF_1588_timestamp_int_mask, .parms=set_default },
            { .name="up_packet_fetch_margin", .val=BDMF_up_packet_fetch_margin, .parms=set_default },
            { .name="dn_1588_timestamp", .val=BDMF_dn_1588_timestamp, .parms=set_default },
            { .name="persistent_report_cfg", .val=BDMF_persistent_report_cfg, .parms=set_default },
            { .name="persistent_report_enables", .val=BDMF_persistent_report_enables, .parms=set_default },
            { .name="persistent_report_request_size", .val=BDMF_persistent_report_request_size, .parms=set_default },
            { .name="aes_configuration_1", .val=BDMF_aes_configuration_1, .parms=set_default },
            { .name="onu_pause_pfc_cfg", .val=BDMF_onu_pause_pfc_cfg, .parms=set_default },
            { .name="onu_pause_pfc_time_scale", .val=BDMF_onu_pause_pfc_time_scale, .parms=set_default },
            { .name="dpf_int_status", .val=BDMF_dpf_int_status, .parms=set_default },
            { .name="dpf_int_mask", .val=BDMF_dpf_int_mask, .parms=set_default },
            { .name="burst_cap_0", .val=BDMF_burst_cap_0, .parms=set_default },
            { .name="burst_cap_1", .val=BDMF_burst_cap_1, .parms=set_default },
            { .name="burst_cap_2", .val=BDMF_burst_cap_2, .parms=set_default },
            { .name="burst_cap_3", .val=BDMF_burst_cap_3, .parms=set_default },
            { .name="burst_cap_4", .val=BDMF_burst_cap_4, .parms=set_default },
            { .name="burst_cap_5", .val=BDMF_burst_cap_5, .parms=set_default },
            { .name="burst_cap_6", .val=BDMF_burst_cap_6, .parms=set_default },
            { .name="burst_cap_7", .val=BDMF_burst_cap_7, .parms=set_default },
            { .name="queue_llid_map_0", .val=BDMF_queue_llid_map_0, .parms=set_default },
            { .name="queue_llid_map_1", .val=BDMF_queue_llid_map_1, .parms=set_default },
            { .name="queue_llid_map_2", .val=BDMF_queue_llid_map_2, .parms=set_default },
            { .name="queue_llid_map_3", .val=BDMF_queue_llid_map_3, .parms=set_default },
            { .name="queue_llid_map_4", .val=BDMF_queue_llid_map_4, .parms=set_default },
            { .name="queue_llid_map_5", .val=BDMF_queue_llid_map_5, .parms=set_default },
            { .name="queue_llid_map_6", .val=BDMF_queue_llid_map_6, .parms=set_default },
            { .name="queue_llid_map_7", .val=BDMF_queue_llid_map_7, .parms=set_default },
            { .name="unused_tq_cnt0", .val=BDMF_unused_tq_cnt0, .parms=set_default },
            { .name="unused_tq_cnt1", .val=BDMF_unused_tq_cnt1, .parms=set_default },
            { .name="unused_tq_cnt2", .val=BDMF_unused_tq_cnt2, .parms=set_default },
            { .name="unused_tq_cnt3", .val=BDMF_unused_tq_cnt3, .parms=set_default },
            { .name="unused_tq_cnt4", .val=BDMF_unused_tq_cnt4, .parms=set_default },
            { .name="unused_tq_cnt5", .val=BDMF_unused_tq_cnt5, .parms=set_default },
            { .name="unused_tq_cnt6", .val=BDMF_unused_tq_cnt6, .parms=set_default },
            { .name="unused_tq_cnt7", .val=BDMF_unused_tq_cnt7, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_0", .val=BDMF_tx_l1s_shp_que_mask_0, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_1", .val=BDMF_tx_l1s_shp_que_mask_1, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_2", .val=BDMF_tx_l1s_shp_que_mask_2, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_3", .val=BDMF_tx_l1s_shp_que_mask_3, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_4", .val=BDMF_tx_l1s_shp_que_mask_4, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_5", .val=BDMF_tx_l1s_shp_que_mask_5, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_6", .val=BDMF_tx_l1s_shp_que_mask_6, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_7", .val=BDMF_tx_l1s_shp_que_mask_7, .parms=set_default },
            { .name="tx_l2s_que_config_0", .val=BDMF_tx_l2s_que_config_0, .parms=set_default },
            { .name="tx_l2s_que_config_1", .val=BDMF_tx_l2s_que_config_1, .parms=set_default },
            { .name="tx_l2s_que_config_2", .val=BDMF_tx_l2s_que_config_2, .parms=set_default },
            { .name="tx_l2s_que_config_3", .val=BDMF_tx_l2s_que_config_3, .parms=set_default },
            { .name="tx_l2s_que_config_4", .val=BDMF_tx_l2s_que_config_4, .parms=set_default },
            { .name="tx_l2s_que_config_5", .val=BDMF_tx_l2s_que_config_5, .parms=set_default },
            { .name="tx_l2s_que_config_6", .val=BDMF_tx_l2s_que_config_6, .parms=set_default },
            { .name="tx_l2s_que_config_7", .val=BDMF_tx_l2s_que_config_7, .parms=set_default },
            { .name="tx_ctc_burst_limit_0", .val=BDMF_tx_ctc_burst_limit_0, .parms=set_default },
            { .name="tx_ctc_burst_limit_1", .val=BDMF_tx_ctc_burst_limit_1, .parms=set_default },
            { .name="tx_ctc_burst_limit_2", .val=BDMF_tx_ctc_burst_limit_2, .parms=set_default },
            { .name="tx_ctc_burst_limit_3", .val=BDMF_tx_ctc_burst_limit_3, .parms=set_default },
            { .name="tx_ctc_burst_limit_4", .val=BDMF_tx_ctc_burst_limit_4, .parms=set_default },
            { .name="tx_ctc_burst_limit_5", .val=BDMF_tx_ctc_burst_limit_5, .parms=set_default },
            { .name="tx_ctc_burst_limit_6", .val=BDMF_tx_ctc_burst_limit_6, .parms=set_default },
            { .name="tx_ctc_burst_limit_7", .val=BDMF_tx_ctc_burst_limit_7, .parms=set_default },
            { .name="burst_cap_8", .val=BDMF_burst_cap_8, .parms=set_default },
            { .name="burst_cap_9", .val=BDMF_burst_cap_9, .parms=set_default },
            { .name="burst_cap_10", .val=BDMF_burst_cap_10, .parms=set_default },
            { .name="burst_cap_11", .val=BDMF_burst_cap_11, .parms=set_default },
            { .name="burst_cap_12", .val=BDMF_burst_cap_12, .parms=set_default },
            { .name="burst_cap_13", .val=BDMF_burst_cap_13, .parms=set_default },
            { .name="burst_cap_14", .val=BDMF_burst_cap_14, .parms=set_default },
            { .name="burst_cap_15", .val=BDMF_burst_cap_15, .parms=set_default },
            { .name="queue_llid_map_8", .val=BDMF_queue_llid_map_8, .parms=set_default },
            { .name="queue_llid_map_9", .val=BDMF_queue_llid_map_9, .parms=set_default },
            { .name="queue_llid_map_10", .val=BDMF_queue_llid_map_10, .parms=set_default },
            { .name="queue_llid_map_11", .val=BDMF_queue_llid_map_11, .parms=set_default },
            { .name="queue_llid_map_12", .val=BDMF_queue_llid_map_12, .parms=set_default },
            { .name="queue_llid_map_13", .val=BDMF_queue_llid_map_13, .parms=set_default },
            { .name="queue_llid_map_14", .val=BDMF_queue_llid_map_14, .parms=set_default },
            { .name="queue_llid_map_15", .val=BDMF_queue_llid_map_15, .parms=set_default },
            { .name="unused_tq_cnt8", .val=BDMF_unused_tq_cnt8, .parms=set_default },
            { .name="unused_tq_cnt9", .val=BDMF_unused_tq_cnt9, .parms=set_default },
            { .name="unused_tq_cnt10", .val=BDMF_unused_tq_cnt10, .parms=set_default },
            { .name="unused_tq_cnt11", .val=BDMF_unused_tq_cnt11, .parms=set_default },
            { .name="unused_tq_cnt12", .val=BDMF_unused_tq_cnt12, .parms=set_default },
            { .name="unused_tq_cnt13", .val=BDMF_unused_tq_cnt13, .parms=set_default },
            { .name="unused_tq_cnt14", .val=BDMF_unused_tq_cnt14, .parms=set_default },
            { .name="unused_tq_cnt15", .val=BDMF_unused_tq_cnt15, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_8", .val=BDMF_tx_l1s_shp_que_mask_8, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_9", .val=BDMF_tx_l1s_shp_que_mask_9, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_10", .val=BDMF_tx_l1s_shp_que_mask_10, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_11", .val=BDMF_tx_l1s_shp_que_mask_11, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_12", .val=BDMF_tx_l1s_shp_que_mask_12, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_13", .val=BDMF_tx_l1s_shp_que_mask_13, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_14", .val=BDMF_tx_l1s_shp_que_mask_14, .parms=set_default },
            { .name="tx_l1s_shp_que_mask_15", .val=BDMF_tx_l1s_shp_que_mask_15, .parms=set_default },
            { .name="tx_l2s_que_config_8", .val=BDMF_tx_l2s_que_config_8, .parms=set_default },
            { .name="tx_l2s_que_config_9", .val=BDMF_tx_l2s_que_config_9, .parms=set_default },
            { .name="tx_l2s_que_config_10", .val=BDMF_tx_l2s_que_config_10, .parms=set_default },
            { .name="tx_l2s_que_config_11", .val=BDMF_tx_l2s_que_config_11, .parms=set_default },
            { .name="tx_l2s_que_config_12", .val=BDMF_tx_l2s_que_config_12, .parms=set_default },
            { .name="tx_l2s_que_config_13", .val=BDMF_tx_l2s_que_config_13, .parms=set_default },
            { .name="tx_l2s_que_config_14", .val=BDMF_tx_l2s_que_config_14, .parms=set_default },
            { .name="tx_l2s_que_config_15", .val=BDMF_tx_l2s_que_config_15, .parms=set_default },
            { .name="tx_ctc_burst_limit_8", .val=BDMF_tx_ctc_burst_limit_8, .parms=set_default },
            { .name="tx_ctc_burst_limit_9", .val=BDMF_tx_ctc_burst_limit_9, .parms=set_default },
            { .name="tx_ctc_burst_limit_10", .val=BDMF_tx_ctc_burst_limit_10, .parms=set_default },
            { .name="tx_ctc_burst_limit_11", .val=BDMF_tx_ctc_burst_limit_11, .parms=set_default },
            { .name="tx_ctc_burst_limit_12", .val=BDMF_tx_ctc_burst_limit_12, .parms=set_default },
            { .name="tx_ctc_burst_limit_13", .val=BDMF_tx_ctc_burst_limit_13, .parms=set_default },
            { .name="tx_ctc_burst_limit_14", .val=BDMF_tx_ctc_burst_limit_14, .parms=set_default },
            { .name="tx_ctc_burst_limit_15", .val=BDMF_tx_ctc_burst_limit_15, .parms=set_default },
            { .name="10g_abc_size0", .val=BDMF_10g_abc_size0, .parms=set_default },
            { .name="10g_abc_size1", .val=BDMF_10g_abc_size1, .parms=set_default },
            { .name="10g_abc_size2", .val=BDMF_10g_abc_size2, .parms=set_default },
            { .name="10g_abc_size3", .val=BDMF_10g_abc_size3, .parms=set_default },
            { .name="10g_abc_size4", .val=BDMF_10g_abc_size4, .parms=set_default },
            { .name="10g_abc_size5", .val=BDMF_10g_abc_size5, .parms=set_default },
            { .name="10g_abc_size6", .val=BDMF_10g_abc_size6, .parms=set_default },
            { .name="10g_abc_size7", .val=BDMF_10g_abc_size7, .parms=set_default },
            { .name="10g_abc_size8", .val=BDMF_10g_abc_size8, .parms=set_default },
            { .name="10g_abc_size9", .val=BDMF_10g_abc_size9, .parms=set_default },
            { .name="10g_abc_size10", .val=BDMF_10g_abc_size10, .parms=set_default },
            { .name="10g_abc_size11", .val=BDMF_10g_abc_size11, .parms=set_default },
            { .name="10g_abc_size12", .val=BDMF_10g_abc_size12, .parms=set_default },
            { .name="10g_abc_size13", .val=BDMF_10g_abc_size13, .parms=set_default },
            { .name="10g_abc_size14", .val=BDMF_10g_abc_size14, .parms=set_default },
            { .name="10g_abc_size15", .val=BDMF_10g_abc_size15, .parms=set_default },
            { .name="10g_abc_size16", .val=BDMF_10g_abc_size16, .parms=set_default },
            { .name="10g_abc_size17", .val=BDMF_10g_abc_size17, .parms=set_default },
            { .name="10g_abc_size18", .val=BDMF_10g_abc_size18, .parms=set_default },
            { .name="10g_abc_size19", .val=BDMF_10g_abc_size19, .parms=set_default },
            { .name="10g_abc_size20", .val=BDMF_10g_abc_size20, .parms=set_default },
            { .name="10g_abc_size21", .val=BDMF_10g_abc_size21, .parms=set_default },
            { .name="10g_abc_size22", .val=BDMF_10g_abc_size22, .parms=set_default },
            { .name="10g_abc_size23", .val=BDMF_10g_abc_size23, .parms=set_default },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "get", "get", bcm_epn_cli_get,
            BDMFMON_MAKE_PARM_SELECTOR("purpose", "purpose", selector_table, 0));
    }
    {
        static bdmfmon_enum_val_t enum_table_test_method[] = {
            { .name="low" , .val=bdmf_test_method_low },
            { .name="mid" , .val=bdmf_test_method_mid },
            { .name="high" , .val=bdmf_test_method_high },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "test", "test", bcm_epn_cli_test,
            BDMFMON_MAKE_PARM_ENUM("method", "low: 0000, mid: 1000, high: 1111", enum_table_test_method, 0));
    }
    {
        static bdmfmon_enum_val_t enum_table_address[] = {
            { .name="CONTROL_0" , .val=bdmf_address_control_0 },
            { .name="CONTROL_1" , .val=bdmf_address_control_1 },
            { .name="ENABLE_GRANTS" , .val=bdmf_address_enable_grants },
            { .name="DROP_DISC_GATES" , .val=bdmf_address_drop_disc_gates },
            { .name="DIS_FCS_CHK" , .val=bdmf_address_dis_fcs_chk },
            { .name="PASS_GATES" , .val=bdmf_address_pass_gates },
            { .name="CFG_MISALGN_FB" , .val=bdmf_address_cfg_misalgn_fb },
            { .name="DISCOVERY_FILTER" , .val=bdmf_address_discovery_filter },
            { .name="MINIMUM_GRANT_SETUP" , .val=bdmf_address_minimum_grant_setup },
            { .name="RESET_GNT_FIFO" , .val=bdmf_address_reset_gnt_fifo },
            { .name="RESET_L1_ACCUMULATOR" , .val=bdmf_address_reset_l1_accumulator },
            { .name="L1_ACCUMULATOR_SEL" , .val=bdmf_address_l1_accumulator_sel },
            { .name="L1_SVA_BYTES" , .val=bdmf_address_l1_sva_bytes },
            { .name="L1_UVA_BYTES" , .val=bdmf_address_l1_uva_bytes },
            { .name="L1_SVA_OVERFLOW" , .val=bdmf_address_l1_sva_overflow },
            { .name="L1_UVA_OVERFLOW" , .val=bdmf_address_l1_uva_overflow },
            { .name="RESET_RPT_PRI" , .val=bdmf_address_reset_rpt_pri },
            { .name="RESET_L2_RPT_FIFO" , .val=bdmf_address_reset_l2_rpt_fifo },
            { .name="ENABLE_UPSTREAM" , .val=bdmf_address_enable_upstream },
            { .name="ENABLE_UPSTREAM_FB" , .val=bdmf_address_enable_upstream_fb },
            { .name="ENABLE_UPSTREAM_FEC" , .val=bdmf_address_enable_upstream_fec },
            { .name="REPORT_BYTE_LENGTH" , .val=bdmf_address_report_byte_length },
            { .name="MAIN_INT_STATUS" , .val=bdmf_address_main_int_status },
            { .name="GNT_FULL_INT_STATUS" , .val=bdmf_address_gnt_full_int_status },
            { .name="GNT_FULL_INT_MASK" , .val=bdmf_address_gnt_full_int_mask },
            { .name="GNT_MISS_INT_STATUS" , .val=bdmf_address_gnt_miss_int_status },
            { .name="GNT_MISS_INT_MASK" , .val=bdmf_address_gnt_miss_int_mask },
            { .name="DISC_RX_INT_STATUS" , .val=bdmf_address_disc_rx_int_status },
            { .name="DISC_RX_INT_MASK" , .val=bdmf_address_disc_rx_int_mask },
            { .name="GNT_INTV_INT_STATUS" , .val=bdmf_address_gnt_intv_int_status },
            { .name="GNT_INTV_INT_MASK" , .val=bdmf_address_gnt_intv_int_mask },
            { .name="GNT_FAR_INT_STATUS" , .val=bdmf_address_gnt_far_int_status },
            { .name="GNT_FAR_INT_MASK" , .val=bdmf_address_gnt_far_int_mask },
            { .name="GNT_MISALGN_INT_STATUS" , .val=bdmf_address_gnt_misalgn_int_status },
            { .name="GNT_MISALGN_INT_MASK" , .val=bdmf_address_gnt_misalgn_int_mask },
            { .name="NP_GNT_INT_STATUS" , .val=bdmf_address_np_gnt_int_status },
            { .name="NP_GNT_INT_MASK" , .val=bdmf_address_np_gnt_int_mask },
            { .name="DEL_STALE_INT_STATUS" , .val=bdmf_address_del_stale_int_status },
            { .name="DEL_STALE_INT_MASK" , .val=bdmf_address_del_stale_int_mask },
            { .name="GNT_PRES_INT_STATUS" , .val=bdmf_address_gnt_pres_int_status },
            { .name="GNT_PRES_INT_MASK" , .val=bdmf_address_gnt_pres_int_mask },
            { .name="RPT_PRES_INT_STATUS" , .val=bdmf_address_rpt_pres_int_status },
            { .name="RPT_PRES_INT_MASK" , .val=bdmf_address_rpt_pres_int_mask },
            { .name="DRX_ABORT_INT_STATUS" , .val=bdmf_address_drx_abort_int_status },
            { .name="DRX_ABORT_INT_MASK" , .val=bdmf_address_drx_abort_int_mask },
            { .name="EMPTY_RPT_INT_STATUS" , .val=bdmf_address_empty_rpt_int_status },
            { .name="EMPTY_RPT_INT_MASK" , .val=bdmf_address_empty_rpt_int_mask },
            { .name="BCAP_OVERFLOW_INT_STATUS" , .val=bdmf_address_bcap_overflow_int_status },
            { .name="BCAP_OVERFLOW_INT_MASK" , .val=bdmf_address_bcap_overflow_int_mask },
            { .name="BBH_DNS_FAULT_INT_STATUS" , .val=bdmf_address_bbh_dns_fault_int_status },
            { .name="BBH_DNS_FAULT_INT_MASK" , .val=bdmf_address_bbh_dns_fault_int_mask },
            { .name="BBH_UPS_FAULT_INT_STATUS" , .val=bdmf_address_bbh_ups_fault_int_status },
            { .name="BBH_UPS_FAULT_INT_MASK" , .val=bdmf_address_bbh_ups_fault_int_mask },
            { .name="BBH_UPS_ABORT_INT_STATUS" , .val=bdmf_address_bbh_ups_abort_int_status },
            { .name="BBH_UPS_ABORT_INT_MASK" , .val=bdmf_address_bbh_ups_abort_int_mask },
            { .name="MAIN_INT_MASK" , .val=bdmf_address_main_int_mask },
            { .name="MAX_GNT_SIZE" , .val=bdmf_address_max_gnt_size },
            { .name="MAX_FRAME_SIZE" , .val=bdmf_address_max_frame_size },
            { .name="GRANT_OVR_HD" , .val=bdmf_address_grant_ovr_hd },
            { .name="POLL_SIZE" , .val=bdmf_address_poll_size },
            { .name="DN_RD_GNT_MARGIN" , .val=bdmf_address_dn_rd_gnt_margin },
            { .name="GNT_TIME_START_DELTA" , .val=bdmf_address_gnt_time_start_delta },
            { .name="TIME_STAMP_DIFF" , .val=bdmf_address_time_stamp_diff },
            { .name="UP_TIME_STAMP_OFF" , .val=bdmf_address_up_time_stamp_off },
            { .name="GNT_INTERVAL" , .val=bdmf_address_gnt_interval },
            { .name="DN_GNT_MISALIGN_THR" , .val=bdmf_address_dn_gnt_misalign_thr },
            { .name="DN_GNT_MISALIGN_PAUSE" , .val=bdmf_address_dn_gnt_misalign_pause },
            { .name="NON_POLL_INTV" , .val=bdmf_address_non_poll_intv },
            { .name="FORCE_FCS_ERR" , .val=bdmf_address_force_fcs_err },
            { .name="GRANT_OVERLAP_LIMIT" , .val=bdmf_address_grant_overlap_limit },
            { .name="AES_CONFIGURATION_0" , .val=bdmf_address_aes_configuration_0 },
            { .name="DISC_GRANT_OVR_HD" , .val=bdmf_address_disc_grant_ovr_hd },
            { .name="DN_DISCOVERY_SEED" , .val=bdmf_address_dn_discovery_seed },
            { .name="DN_DISCOVERY_INC" , .val=bdmf_address_dn_discovery_inc },
            { .name="DN_DISCOVERY_SIZE" , .val=bdmf_address_dn_discovery_size },
            { .name="FEC_IPG_LENGTH" , .val=bdmf_address_fec_ipg_length },
            { .name="FAKE_REPORT_VALUE_EN" , .val=bdmf_address_fake_report_value_en },
            { .name="FAKE_REPORT_VALUE" , .val=bdmf_address_fake_report_value },
            { .name="VALID_OPCODE_MAP" , .val=bdmf_address_valid_opcode_map },
            { .name="UP_PACKET_TX_MARGIN" , .val=bdmf_address_up_packet_tx_margin },
            { .name="MULTI_PRI_CFG_0" , .val=bdmf_address_multi_pri_cfg_0 },
            { .name="SHARED_BCAP_OVRFLOW" , .val=bdmf_address_shared_bcap_ovrflow },
            { .name="FORCED_REPORT_EN" , .val=bdmf_address_forced_report_en },
            { .name="FORCED_REPORT_MAX_INTERVAL" , .val=bdmf_address_forced_report_max_interval },
            { .name="L2S_FLUSH_CONFIG" , .val=bdmf_address_l2s_flush_config },
            { .name="DATA_PORT_COMMAND" , .val=bdmf_address_data_port_command },
            { .name="DATA_PORT_ADDRESS" , .val=bdmf_address_data_port_address },
            { .name="DATA_PORT_DATA_0" , .val=bdmf_address_data_port_data_0 },
            { .name="UNMAP_BIG_CNT" , .val=bdmf_address_unmap_big_cnt },
            { .name="UNMAP_FRAME_CNT" , .val=bdmf_address_unmap_frame_cnt },
            { .name="UNMAP_FCS_CNT" , .val=bdmf_address_unmap_fcs_cnt },
            { .name="UNMAP_GATE_CNT" , .val=bdmf_address_unmap_gate_cnt },
            { .name="UNMAP_OAM_CNT" , .val=bdmf_address_unmap_oam_cnt },
            { .name="UNMAP_SMALL_CNT" , .val=bdmf_address_unmap_small_cnt },
            { .name="FIF_DEQUEUE_EVENT_CNT" , .val=bdmf_address_fif_dequeue_event_cnt },
            { .name="BBH_UP_FAULT_HALT_EN" , .val=bdmf_address_bbh_up_fault_halt_en },
            { .name="BBH_UP_TARDY_HALT_EN" , .val=bdmf_address_bbh_up_tardy_halt_en },
            { .name="DEBUG_STATUS_0" , .val=bdmf_address_debug_status_0 },
            { .name="DEBUG_STATUS_1" , .val=bdmf_address_debug_status_1 },
            { .name="DEBUG_L2S_PTR_SEL" , .val=bdmf_address_debug_l2s_ptr_sel },
            { .name="OLT_MAC_ADDR_LO" , .val=bdmf_address_olt_mac_addr_lo },
            { .name="OLT_MAC_ADDR_HI" , .val=bdmf_address_olt_mac_addr_hi },
            { .name="TX_L1S_SHP_DQU_EMPTY" , .val=bdmf_address_tx_l1s_shp_dqu_empty },
            { .name="TX_L1S_UNSHAPED_EMPTY" , .val=bdmf_address_tx_l1s_unshaped_empty },
            { .name="TX_L2S_QUE_EMPTY" , .val=bdmf_address_tx_l2s_que_empty },
            { .name="TX_L2S_QUE_FULL" , .val=bdmf_address_tx_l2s_que_full },
            { .name="TX_L2S_QUE_STOPPED" , .val=bdmf_address_tx_l2s_que_stopped },
            { .name="BBH_MAX_OUTSTANDING_TARDY_PACKETS" , .val=bdmf_address_bbh_max_outstanding_tardy_packets },
            { .name="MIN_REPORT_VALUE_DIFFERENCE" , .val=bdmf_address_min_report_value_difference },
            { .name="BBH_STATUS_FIFO_OVERFLOW" , .val=bdmf_address_bbh_status_fifo_overflow },
            { .name="SPARE_CTL" , .val=bdmf_address_spare_ctl },
            { .name="TS_SYNC_OFFSET" , .val=bdmf_address_ts_sync_offset },
            { .name="DN_TS_OFFSET" , .val=bdmf_address_dn_ts_offset },
            { .name="UP_TS_OFFSET_LO" , .val=bdmf_address_up_ts_offset_lo },
            { .name="UP_TS_OFFSET_HI" , .val=bdmf_address_up_ts_offset_hi },
            { .name="TWO_STEP_TS_CTL" , .val=bdmf_address_two_step_ts_ctl },
            { .name="TWO_STEP_TS_VALUE_LO" , .val=bdmf_address_two_step_ts_value_lo },
            { .name="TWO_STEP_TS_VALUE_HI" , .val=bdmf_address_two_step_ts_value_hi },
            { .name="1588_TIMESTAMP_INT_STATUS" , .val=bdmf_address_1588_timestamp_int_status },
            { .name="1588_TIMESTAMP_INT_MASK" , .val=bdmf_address_1588_timestamp_int_mask },
            { .name="UP_PACKET_FETCH_MARGIN" , .val=bdmf_address_up_packet_fetch_margin },
            { .name="DN_1588_TIMESTAMP" , .val=bdmf_address_dn_1588_timestamp },
            { .name="PERSISTENT_REPORT_CFG" , .val=bdmf_address_persistent_report_cfg },
            { .name="PERSISTENT_REPORT_ENABLES" , .val=bdmf_address_persistent_report_enables },
            { .name="PERSISTENT_REPORT_REQUEST_SIZE" , .val=bdmf_address_persistent_report_request_size },
            { .name="AES_CONFIGURATION_1" , .val=bdmf_address_aes_configuration_1 },
            { .name="ONU_PAUSE_PFC_CFG" , .val=bdmf_address_onu_pause_pfc_cfg },
            { .name="ONU_PAUSE_PFC_TIME_SCALE" , .val=bdmf_address_onu_pause_pfc_time_scale },
            { .name="DPF_INT_STATUS" , .val=bdmf_address_dpf_int_status },
            { .name="DPF_INT_MASK" , .val=bdmf_address_dpf_int_mask },
            { .name="BURST_CAP_0" , .val=bdmf_address_burst_cap_0 },
            { .name="BURST_CAP_1" , .val=bdmf_address_burst_cap_1 },
            { .name="BURST_CAP_2" , .val=bdmf_address_burst_cap_2 },
            { .name="BURST_CAP_3" , .val=bdmf_address_burst_cap_3 },
            { .name="BURST_CAP_4" , .val=bdmf_address_burst_cap_4 },
            { .name="BURST_CAP_5" , .val=bdmf_address_burst_cap_5 },
            { .name="BURST_CAP_6" , .val=bdmf_address_burst_cap_6 },
            { .name="BURST_CAP_7" , .val=bdmf_address_burst_cap_7 },
            { .name="QUEUE_LLID_MAP_0" , .val=bdmf_address_queue_llid_map_0 },
            { .name="QUEUE_LLID_MAP_1" , .val=bdmf_address_queue_llid_map_1 },
            { .name="QUEUE_LLID_MAP_2" , .val=bdmf_address_queue_llid_map_2 },
            { .name="QUEUE_LLID_MAP_3" , .val=bdmf_address_queue_llid_map_3 },
            { .name="QUEUE_LLID_MAP_4" , .val=bdmf_address_queue_llid_map_4 },
            { .name="QUEUE_LLID_MAP_5" , .val=bdmf_address_queue_llid_map_5 },
            { .name="QUEUE_LLID_MAP_6" , .val=bdmf_address_queue_llid_map_6 },
            { .name="QUEUE_LLID_MAP_7" , .val=bdmf_address_queue_llid_map_7 },
            { .name="UNUSED_TQ_CNT0" , .val=bdmf_address_unused_tq_cnt0 },
            { .name="UNUSED_TQ_CNT1" , .val=bdmf_address_unused_tq_cnt1 },
            { .name="UNUSED_TQ_CNT2" , .val=bdmf_address_unused_tq_cnt2 },
            { .name="UNUSED_TQ_CNT3" , .val=bdmf_address_unused_tq_cnt3 },
            { .name="UNUSED_TQ_CNT4" , .val=bdmf_address_unused_tq_cnt4 },
            { .name="UNUSED_TQ_CNT5" , .val=bdmf_address_unused_tq_cnt5 },
            { .name="UNUSED_TQ_CNT6" , .val=bdmf_address_unused_tq_cnt6 },
            { .name="UNUSED_TQ_CNT7" , .val=bdmf_address_unused_tq_cnt7 },
            { .name="TX_L1S_SHP_QUE_MASK_0" , .val=bdmf_address_tx_l1s_shp_que_mask_0 },
            { .name="TX_L1S_SHP_QUE_MASK_1" , .val=bdmf_address_tx_l1s_shp_que_mask_1 },
            { .name="TX_L1S_SHP_QUE_MASK_2" , .val=bdmf_address_tx_l1s_shp_que_mask_2 },
            { .name="TX_L1S_SHP_QUE_MASK_3" , .val=bdmf_address_tx_l1s_shp_que_mask_3 },
            { .name="TX_L1S_SHP_QUE_MASK_4" , .val=bdmf_address_tx_l1s_shp_que_mask_4 },
            { .name="TX_L1S_SHP_QUE_MASK_5" , .val=bdmf_address_tx_l1s_shp_que_mask_5 },
            { .name="TX_L1S_SHP_QUE_MASK_6" , .val=bdmf_address_tx_l1s_shp_que_mask_6 },
            { .name="TX_L1S_SHP_QUE_MASK_7" , .val=bdmf_address_tx_l1s_shp_que_mask_7 },
            { .name="TX_L2S_QUE_CONFIG_0" , .val=bdmf_address_tx_l2s_que_config_0 },
            { .name="TX_L2S_QUE_CONFIG_1" , .val=bdmf_address_tx_l2s_que_config_1 },
            { .name="TX_L2S_QUE_CONFIG_2" , .val=bdmf_address_tx_l2s_que_config_2 },
            { .name="TX_L2S_QUE_CONFIG_3" , .val=bdmf_address_tx_l2s_que_config_3 },
            { .name="TX_L2S_QUE_CONFIG_4" , .val=bdmf_address_tx_l2s_que_config_4 },
            { .name="TX_L2S_QUE_CONFIG_5" , .val=bdmf_address_tx_l2s_que_config_5 },
            { .name="TX_L2S_QUE_CONFIG_6" , .val=bdmf_address_tx_l2s_que_config_6 },
            { .name="TX_L2S_QUE_CONFIG_7" , .val=bdmf_address_tx_l2s_que_config_7 },
            { .name="TX_CTC_BURST_LIMIT_0" , .val=bdmf_address_tx_ctc_burst_limit_0 },
            { .name="TX_CTC_BURST_LIMIT_1" , .val=bdmf_address_tx_ctc_burst_limit_1 },
            { .name="TX_CTC_BURST_LIMIT_2" , .val=bdmf_address_tx_ctc_burst_limit_2 },
            { .name="TX_CTC_BURST_LIMIT_3" , .val=bdmf_address_tx_ctc_burst_limit_3 },
            { .name="TX_CTC_BURST_LIMIT_4" , .val=bdmf_address_tx_ctc_burst_limit_4 },
            { .name="TX_CTC_BURST_LIMIT_5" , .val=bdmf_address_tx_ctc_burst_limit_5 },
            { .name="TX_CTC_BURST_LIMIT_6" , .val=bdmf_address_tx_ctc_burst_limit_6 },
            { .name="TX_CTC_BURST_LIMIT_7" , .val=bdmf_address_tx_ctc_burst_limit_7 },
            { .name="BURST_CAP_8" , .val=bdmf_address_burst_cap_8 },
            { .name="BURST_CAP_9" , .val=bdmf_address_burst_cap_9 },
            { .name="BURST_CAP_10" , .val=bdmf_address_burst_cap_10 },
            { .name="BURST_CAP_11" , .val=bdmf_address_burst_cap_11 },
            { .name="BURST_CAP_12" , .val=bdmf_address_burst_cap_12 },
            { .name="BURST_CAP_13" , .val=bdmf_address_burst_cap_13 },
            { .name="BURST_CAP_14" , .val=bdmf_address_burst_cap_14 },
            { .name="BURST_CAP_15" , .val=bdmf_address_burst_cap_15 },
            { .name="QUEUE_LLID_MAP_8" , .val=bdmf_address_queue_llid_map_8 },
            { .name="QUEUE_LLID_MAP_9" , .val=bdmf_address_queue_llid_map_9 },
            { .name="QUEUE_LLID_MAP_10" , .val=bdmf_address_queue_llid_map_10 },
            { .name="QUEUE_LLID_MAP_11" , .val=bdmf_address_queue_llid_map_11 },
            { .name="QUEUE_LLID_MAP_12" , .val=bdmf_address_queue_llid_map_12 },
            { .name="QUEUE_LLID_MAP_13" , .val=bdmf_address_queue_llid_map_13 },
            { .name="QUEUE_LLID_MAP_14" , .val=bdmf_address_queue_llid_map_14 },
            { .name="QUEUE_LLID_MAP_15" , .val=bdmf_address_queue_llid_map_15 },
            { .name="UNUSED_TQ_CNT8" , .val=bdmf_address_unused_tq_cnt8 },
            { .name="UNUSED_TQ_CNT9" , .val=bdmf_address_unused_tq_cnt9 },
            { .name="UNUSED_TQ_CNT10" , .val=bdmf_address_unused_tq_cnt10 },
            { .name="UNUSED_TQ_CNT11" , .val=bdmf_address_unused_tq_cnt11 },
            { .name="UNUSED_TQ_CNT12" , .val=bdmf_address_unused_tq_cnt12 },
            { .name="UNUSED_TQ_CNT13" , .val=bdmf_address_unused_tq_cnt13 },
            { .name="UNUSED_TQ_CNT14" , .val=bdmf_address_unused_tq_cnt14 },
            { .name="UNUSED_TQ_CNT15" , .val=bdmf_address_unused_tq_cnt15 },
            { .name="TX_L1S_SHP_QUE_MASK_8" , .val=bdmf_address_tx_l1s_shp_que_mask_8 },
            { .name="TX_L1S_SHP_QUE_MASK_9" , .val=bdmf_address_tx_l1s_shp_que_mask_9 },
            { .name="TX_L1S_SHP_QUE_MASK_10" , .val=bdmf_address_tx_l1s_shp_que_mask_10 },
            { .name="TX_L1S_SHP_QUE_MASK_11" , .val=bdmf_address_tx_l1s_shp_que_mask_11 },
            { .name="TX_L1S_SHP_QUE_MASK_12" , .val=bdmf_address_tx_l1s_shp_que_mask_12 },
            { .name="TX_L1S_SHP_QUE_MASK_13" , .val=bdmf_address_tx_l1s_shp_que_mask_13 },
            { .name="TX_L1S_SHP_QUE_MASK_14" , .val=bdmf_address_tx_l1s_shp_que_mask_14 },
            { .name="TX_L1S_SHP_QUE_MASK_15" , .val=bdmf_address_tx_l1s_shp_que_mask_15 },
            { .name="TX_L2S_QUE_CONFIG_8" , .val=bdmf_address_tx_l2s_que_config_8 },
            { .name="TX_L2S_QUE_CONFIG_9" , .val=bdmf_address_tx_l2s_que_config_9 },
            { .name="TX_L2S_QUE_CONFIG_10" , .val=bdmf_address_tx_l2s_que_config_10 },
            { .name="TX_L2S_QUE_CONFIG_11" , .val=bdmf_address_tx_l2s_que_config_11 },
            { .name="TX_L2S_QUE_CONFIG_12" , .val=bdmf_address_tx_l2s_que_config_12 },
            { .name="TX_L2S_QUE_CONFIG_13" , .val=bdmf_address_tx_l2s_que_config_13 },
            { .name="TX_L2S_QUE_CONFIG_14" , .val=bdmf_address_tx_l2s_que_config_14 },
            { .name="TX_L2S_QUE_CONFIG_15" , .val=bdmf_address_tx_l2s_que_config_15 },
            { .name="TX_CTC_BURST_LIMIT_8" , .val=bdmf_address_tx_ctc_burst_limit_8 },
            { .name="TX_CTC_BURST_LIMIT_9" , .val=bdmf_address_tx_ctc_burst_limit_9 },
            { .name="TX_CTC_BURST_LIMIT_10" , .val=bdmf_address_tx_ctc_burst_limit_10 },
            { .name="TX_CTC_BURST_LIMIT_11" , .val=bdmf_address_tx_ctc_burst_limit_11 },
            { .name="TX_CTC_BURST_LIMIT_12" , .val=bdmf_address_tx_ctc_burst_limit_12 },
            { .name="TX_CTC_BURST_LIMIT_13" , .val=bdmf_address_tx_ctc_burst_limit_13 },
            { .name="TX_CTC_BURST_LIMIT_14" , .val=bdmf_address_tx_ctc_burst_limit_14 },
            { .name="TX_CTC_BURST_LIMIT_15" , .val=bdmf_address_tx_ctc_burst_limit_15 },
            { .name="10G_ABC_SIZE0" , .val=bdmf_address_10g_abc_size0 },
            { .name="10G_ABC_SIZE1" , .val=bdmf_address_10g_abc_size1 },
            { .name="10G_ABC_SIZE2" , .val=bdmf_address_10g_abc_size2 },
            { .name="10G_ABC_SIZE3" , .val=bdmf_address_10g_abc_size3 },
            { .name="10G_ABC_SIZE4" , .val=bdmf_address_10g_abc_size4 },
            { .name="10G_ABC_SIZE5" , .val=bdmf_address_10g_abc_size5 },
            { .name="10G_ABC_SIZE6" , .val=bdmf_address_10g_abc_size6 },
            { .name="10G_ABC_SIZE7" , .val=bdmf_address_10g_abc_size7 },
            { .name="10G_ABC_SIZE8" , .val=bdmf_address_10g_abc_size8 },
            { .name="10G_ABC_SIZE9" , .val=bdmf_address_10g_abc_size9 },
            { .name="10G_ABC_SIZE10" , .val=bdmf_address_10g_abc_size10 },
            { .name="10G_ABC_SIZE11" , .val=bdmf_address_10g_abc_size11 },
            { .name="10G_ABC_SIZE12" , .val=bdmf_address_10g_abc_size12 },
            { .name="10G_ABC_SIZE13" , .val=bdmf_address_10g_abc_size13 },
            { .name="10G_ABC_SIZE14" , .val=bdmf_address_10g_abc_size14 },
            { .name="10G_ABC_SIZE15" , .val=bdmf_address_10g_abc_size15 },
            { .name="10G_ABC_SIZE16" , .val=bdmf_address_10g_abc_size16 },
            { .name="10G_ABC_SIZE17" , .val=bdmf_address_10g_abc_size17 },
            { .name="10G_ABC_SIZE18" , .val=bdmf_address_10g_abc_size18 },
            { .name="10G_ABC_SIZE19" , .val=bdmf_address_10g_abc_size19 },
            { .name="10G_ABC_SIZE20" , .val=bdmf_address_10g_abc_size20 },
            { .name="10G_ABC_SIZE21" , .val=bdmf_address_10g_abc_size21 },
            { .name="10G_ABC_SIZE22" , .val=bdmf_address_10g_abc_size22 },
            { .name="10G_ABC_SIZE23" , .val=bdmf_address_10g_abc_size23 },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "address", "address", bcm_epn_cli_address,
            BDMFMON_MAKE_PARM_ENUM("method", "method", enum_table_address, 0),
            BDMFMON_MAKE_PARM("index2", "onu_id/alloc_id/port_id/etc...", BDMFMON_PARM_NUMBER, BDMFMON_PARM_FLAG_OPTIONAL));
    }
    return dir;
}
#endif /* USE_BDMF_SHELL */


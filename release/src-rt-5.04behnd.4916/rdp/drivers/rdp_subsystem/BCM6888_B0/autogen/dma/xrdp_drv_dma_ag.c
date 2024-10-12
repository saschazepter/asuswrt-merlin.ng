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


#include "xrdp_drv_drivers_common_ag.h"
#include "xrdp_drv_dma_ag.h"

#define BLOCK_ADDR_COUNT_BITS 2
#define BLOCK_ADDR_COUNT (1<<BLOCK_ADDR_COUNT_BITS)

bdmf_error_t ag_drv_dma_debug_info_set(uint8_t dma_id, const dma_debug_info *debug_info)
{
    uint32_t reg_debug_nempty = 0;
    uint32_t reg_debug_urgnt = 0;
    uint32_t reg_debug_selsrc = 0;
    uint32_t reg_debug_rdadd = 0;
    uint32_t reg_debug_rdvalid = 0;
    uint32_t reg_debug_rddatardy = 0;

#ifdef VALIDATE_PARMS
    if(!debug_info)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (debug_info->sel_src >= _6BITS_MAX_VAL_) ||
       (debug_info->address >= _10BITS_MAX_VAL_) ||
       (debug_info->datacs >= _1BITS_MAX_VAL_) ||
       (debug_info->cdcs >= _1BITS_MAX_VAL_) ||
       (debug_info->rrcs >= _1BITS_MAX_VAL_) ||
       (debug_info->valid >= _1BITS_MAX_VAL_) ||
       (debug_info->ready >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_debug_nempty = RU_FIELD_SET(dma_id, DMA, DEBUG_NEMPTY, NEMPTY, reg_debug_nempty, debug_info->nempty);
    reg_debug_urgnt = RU_FIELD_SET(dma_id, DMA, DEBUG_URGNT, URGNT, reg_debug_urgnt, debug_info->urgnt);
    reg_debug_selsrc = RU_FIELD_SET(dma_id, DMA, DEBUG_SELSRC, SEL_SRC, reg_debug_selsrc, debug_info->sel_src);
    reg_debug_rdadd = RU_FIELD_SET(dma_id, DMA, DEBUG_RDADD, ADDRESS, reg_debug_rdadd, debug_info->address);
    reg_debug_rdadd = RU_FIELD_SET(dma_id, DMA, DEBUG_RDADD, DATACS, reg_debug_rdadd, debug_info->datacs);
    reg_debug_rdadd = RU_FIELD_SET(dma_id, DMA, DEBUG_RDADD, CDCS, reg_debug_rdadd, debug_info->cdcs);
    reg_debug_rdadd = RU_FIELD_SET(dma_id, DMA, DEBUG_RDADD, RRCS, reg_debug_rdadd, debug_info->rrcs);
    reg_debug_rdvalid = RU_FIELD_SET(dma_id, DMA, DEBUG_RDVALID, VALID, reg_debug_rdvalid, debug_info->valid);
    reg_debug_rddatardy = RU_FIELD_SET(dma_id, DMA, DEBUG_RDDATARDY, READY, reg_debug_rddatardy, debug_info->ready);

    RU_REG_WRITE(dma_id, DMA, DEBUG_NEMPTY, reg_debug_nempty);
    RU_REG_WRITE(dma_id, DMA, DEBUG_URGNT, reg_debug_urgnt);
    RU_REG_WRITE(dma_id, DMA, DEBUG_SELSRC, reg_debug_selsrc);
    RU_REG_WRITE(dma_id, DMA, DEBUG_RDADD, reg_debug_rdadd);
    RU_REG_WRITE(dma_id, DMA, DEBUG_RDVALID, reg_debug_rdvalid);
    RU_REG_WRITE(dma_id, DMA, DEBUG_RDDATARDY, reg_debug_rddatardy);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_info_get(uint8_t dma_id, dma_debug_info *debug_info)
{
    uint32_t reg_debug_nempty;
    uint32_t reg_debug_urgnt;
    uint32_t reg_debug_selsrc;
    uint32_t reg_debug_rdadd;
    uint32_t reg_debug_rdvalid;
    uint32_t reg_debug_rddatardy;

#ifdef VALIDATE_PARMS
    if (!debug_info)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_NEMPTY, reg_debug_nempty);
    RU_REG_READ(dma_id, DMA, DEBUG_URGNT, reg_debug_urgnt);
    RU_REG_READ(dma_id, DMA, DEBUG_SELSRC, reg_debug_selsrc);
    RU_REG_READ(dma_id, DMA, DEBUG_RDADD, reg_debug_rdadd);
    RU_REG_READ(dma_id, DMA, DEBUG_RDVALID, reg_debug_rdvalid);
    RU_REG_READ(dma_id, DMA, DEBUG_RDDATARDY, reg_debug_rddatardy);

    debug_info->nempty = RU_FIELD_GET(dma_id, DMA, DEBUG_NEMPTY, NEMPTY, reg_debug_nempty);
    debug_info->urgnt = RU_FIELD_GET(dma_id, DMA, DEBUG_URGNT, URGNT, reg_debug_urgnt);
    debug_info->sel_src = RU_FIELD_GET(dma_id, DMA, DEBUG_SELSRC, SEL_SRC, reg_debug_selsrc);
    debug_info->address = RU_FIELD_GET(dma_id, DMA, DEBUG_RDADD, ADDRESS, reg_debug_rdadd);
    debug_info->datacs = RU_FIELD_GET(dma_id, DMA, DEBUG_RDADD, DATACS, reg_debug_rdadd);
    debug_info->cdcs = RU_FIELD_GET(dma_id, DMA, DEBUG_RDADD, CDCS, reg_debug_rdadd);
    debug_info->rrcs = RU_FIELD_GET(dma_id, DMA, DEBUG_RDADD, RRCS, reg_debug_rdadd);
    debug_info->valid = RU_FIELD_GET(dma_id, DMA, DEBUG_RDVALID, VALID, reg_debug_rdvalid);
    debug_info->ready = RU_FIELD_GET(dma_id, DMA, DEBUG_RDDATARDY, READY, reg_debug_rddatardy);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_num_of_writes_set(uint8_t dma_id, uint8_t emac_index, uint8_t numofbuff)
{
    uint32_t reg_config_num_of_writes = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (numofbuff >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_num_of_writes = RU_FIELD_SET(dma_id, DMA, CONFIG_NUM_OF_WRITES, NUMOFBUFF, reg_config_num_of_writes, numofbuff);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_NUM_OF_WRITES, reg_config_num_of_writes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_num_of_writes_get(uint8_t dma_id, uint8_t emac_index, uint8_t *numofbuff)
{
    uint32_t reg_config_num_of_writes;

#ifdef VALIDATE_PARMS
    if (!numofbuff)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_NUM_OF_WRITES, reg_config_num_of_writes);

    *numofbuff = RU_FIELD_GET(dma_id, DMA, CONFIG_NUM_OF_WRITES, NUMOFBUFF, reg_config_num_of_writes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_num_of_reads_set(uint8_t dma_id, uint8_t emac_index, uint8_t rr_num)
{
    uint32_t reg_config_num_of_reads = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (rr_num >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_num_of_reads = RU_FIELD_SET(dma_id, DMA, CONFIG_NUM_OF_READS, RR_NUM, reg_config_num_of_reads, rr_num);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_NUM_OF_READS, reg_config_num_of_reads);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_num_of_reads_get(uint8_t dma_id, uint8_t emac_index, uint8_t *rr_num)
{
    uint32_t reg_config_num_of_reads;

#ifdef VALIDATE_PARMS
    if (!rr_num)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_NUM_OF_READS, reg_config_num_of_reads);

    *rr_num = RU_FIELD_GET(dma_id, DMA, CONFIG_NUM_OF_READS, RR_NUM, reg_config_num_of_reads);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_u_thresh_set(uint8_t dma_id, uint8_t emac_index, uint8_t into_u, uint8_t out_of_u)
{
    uint32_t reg_config_u_thresh = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (into_u >= _6BITS_MAX_VAL_) ||
       (out_of_u >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_u_thresh = RU_FIELD_SET(dma_id, DMA, CONFIG_U_THRESH, INTO_U, reg_config_u_thresh, into_u);
    reg_config_u_thresh = RU_FIELD_SET(dma_id, DMA, CONFIG_U_THRESH, OUT_OF_U, reg_config_u_thresh, out_of_u);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_U_THRESH, reg_config_u_thresh);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_u_thresh_get(uint8_t dma_id, uint8_t emac_index, uint8_t *into_u, uint8_t *out_of_u)
{
    uint32_t reg_config_u_thresh;

#ifdef VALIDATE_PARMS
    if (!into_u || !out_of_u)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_U_THRESH, reg_config_u_thresh);

    *into_u = RU_FIELD_GET(dma_id, DMA, CONFIG_U_THRESH, INTO_U, reg_config_u_thresh);
    *out_of_u = RU_FIELD_GET(dma_id, DMA, CONFIG_U_THRESH, OUT_OF_U, reg_config_u_thresh);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_pri_set(uint8_t dma_id, uint8_t emac_index, uint8_t rxpri, uint8_t txpri)
{
    uint32_t reg_config_pri = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (rxpri >= _4BITS_MAX_VAL_) ||
       (txpri >= _4BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_pri = RU_FIELD_SET(dma_id, DMA, CONFIG_PRI, RXPRI, reg_config_pri, rxpri);
    reg_config_pri = RU_FIELD_SET(dma_id, DMA, CONFIG_PRI, TXPRI, reg_config_pri, txpri);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_PRI, reg_config_pri);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_pri_get(uint8_t dma_id, uint8_t emac_index, uint8_t *rxpri, uint8_t *txpri)
{
    uint32_t reg_config_pri;

#ifdef VALIDATE_PARMS
    if (!rxpri || !txpri)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_PRI, reg_config_pri);

    *rxpri = RU_FIELD_GET(dma_id, DMA, CONFIG_PRI, RXPRI, reg_config_pri);
    *txpri = RU_FIELD_GET(dma_id, DMA, CONFIG_PRI, TXPRI, reg_config_pri);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_weight_set(uint8_t dma_id, uint8_t emac_index, uint8_t rxweight, uint8_t txweight)
{
    uint32_t reg_config_weight = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (rxweight >= _3BITS_MAX_VAL_) ||
       (txweight >= _3BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_weight = RU_FIELD_SET(dma_id, DMA, CONFIG_WEIGHT, RXWEIGHT, reg_config_weight, rxweight);
    reg_config_weight = RU_FIELD_SET(dma_id, DMA, CONFIG_WEIGHT, TXWEIGHT, reg_config_weight, txweight);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_WEIGHT, reg_config_weight);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_weight_get(uint8_t dma_id, uint8_t emac_index, uint8_t *rxweight, uint8_t *txweight)
{
    uint32_t reg_config_weight;

#ifdef VALIDATE_PARMS
    if (!rxweight || !txweight)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_WEIGHT, reg_config_weight);

    *rxweight = RU_FIELD_GET(dma_id, DMA, CONFIG_WEIGHT, RXWEIGHT, reg_config_weight);
    *txweight = RU_FIELD_GET(dma_id, DMA, CONFIG_WEIGHT, TXWEIGHT, reg_config_weight);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_periph_source_set(uint8_t dma_id, uint8_t emac_index, uint8_t rxsource, uint8_t txsource)
{
    uint32_t reg_config_periph_source = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (rxsource >= _6BITS_MAX_VAL_) ||
       (txsource >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_periph_source = RU_FIELD_SET(dma_id, DMA, CONFIG_PERIPH_SOURCE, RXSOURCE, reg_config_periph_source, rxsource);
    reg_config_periph_source = RU_FIELD_SET(dma_id, DMA, CONFIG_PERIPH_SOURCE, TXSOURCE, reg_config_periph_source, txsource);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_PERIPH_SOURCE, reg_config_periph_source);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_periph_source_get(uint8_t dma_id, uint8_t emac_index, uint8_t *rxsource, uint8_t *txsource)
{
    uint32_t reg_config_periph_source;

#ifdef VALIDATE_PARMS
    if (!rxsource || !txsource)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_PERIPH_SOURCE, reg_config_periph_source);

    *rxsource = RU_FIELD_GET(dma_id, DMA, CONFIG_PERIPH_SOURCE, RXSOURCE, reg_config_periph_source);
    *txsource = RU_FIELD_GET(dma_id, DMA, CONFIG_PERIPH_SOURCE, TXSOURCE, reg_config_periph_source);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_target_mem_set(uint8_t dma_id, uint8_t emac_index, bdmf_boolean rxtmem, bdmf_boolean txtmem)
{
    uint32_t reg_config_target_mem = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8) ||
       (rxtmem >= _1BITS_MAX_VAL_) ||
       (txtmem >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_target_mem = RU_FIELD_SET(dma_id, DMA, CONFIG_TARGET_MEM, RXTMEM, reg_config_target_mem, rxtmem);
    reg_config_target_mem = RU_FIELD_SET(dma_id, DMA, CONFIG_TARGET_MEM, TXTMEM, reg_config_target_mem, txtmem);

    RU_REG_RAM_WRITE(dma_id, emac_index, DMA, CONFIG_TARGET_MEM, reg_config_target_mem);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_target_mem_get(uint8_t dma_id, uint8_t emac_index, bdmf_boolean *rxtmem, bdmf_boolean *txtmem)
{
    uint32_t reg_config_target_mem;

#ifdef VALIDATE_PARMS
    if (!rxtmem || !txtmem)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, CONFIG_TARGET_MEM, reg_config_target_mem);

    *rxtmem = RU_FIELD_GET(dma_id, DMA, CONFIG_TARGET_MEM, RXTMEM, reg_config_target_mem);
    *txtmem = RU_FIELD_GET(dma_id, DMA, CONFIG_TARGET_MEM, TXTMEM, reg_config_target_mem);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ptrrst_set(uint8_t dma_id, uint16_t rstvec)
{
    uint32_t reg_config_ptrrst = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_ptrrst = RU_FIELD_SET(dma_id, DMA, CONFIG_PTRRST, RSTVEC, reg_config_ptrrst, rstvec);

    RU_REG_WRITE(dma_id, DMA, CONFIG_PTRRST, reg_config_ptrrst);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ptrrst_get(uint8_t dma_id, uint16_t *rstvec)
{
    uint32_t reg_config_ptrrst;

#ifdef VALIDATE_PARMS
    if (!rstvec)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_PTRRST, reg_config_ptrrst);

    *rstvec = RU_FIELD_GET(dma_id, DMA, CONFIG_PTRRST, RSTVEC, reg_config_ptrrst);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_bbrouteovrd_set(uint8_t dma_id, uint8_t dest, uint16_t route, bdmf_boolean ovrd)
{
    uint32_t reg_config_bbrouteovrd = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (dest >= _6BITS_MAX_VAL_) ||
       (route >= _10BITS_MAX_VAL_) ||
       (ovrd >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_bbrouteovrd = RU_FIELD_SET(dma_id, DMA, CONFIG_BBROUTEOVRD, DEST, reg_config_bbrouteovrd, dest);
    reg_config_bbrouteovrd = RU_FIELD_SET(dma_id, DMA, CONFIG_BBROUTEOVRD, ROUTE, reg_config_bbrouteovrd, route);
    reg_config_bbrouteovrd = RU_FIELD_SET(dma_id, DMA, CONFIG_BBROUTEOVRD, OVRD, reg_config_bbrouteovrd, ovrd);

    RU_REG_WRITE(dma_id, DMA, CONFIG_BBROUTEOVRD, reg_config_bbrouteovrd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_bbrouteovrd_get(uint8_t dma_id, uint8_t *dest, uint16_t *route, bdmf_boolean *ovrd)
{
    uint32_t reg_config_bbrouteovrd;

#ifdef VALIDATE_PARMS
    if (!dest || !route || !ovrd)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_BBROUTEOVRD, reg_config_bbrouteovrd);

    *dest = RU_FIELD_GET(dma_id, DMA, CONFIG_BBROUTEOVRD, DEST, reg_config_bbrouteovrd);
    *route = RU_FIELD_GET(dma_id, DMA, CONFIG_BBROUTEOVRD, ROUTE, reg_config_bbrouteovrd);
    *ovrd = RU_FIELD_GET(dma_id, DMA, CONFIG_BBROUTEOVRD, OVRD, reg_config_bbrouteovrd);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_clk_gate_cntrl_set(uint8_t dma_id, const dma_config_clk_gate_cntrl *config_clk_gate_cntrl)
{
    uint32_t reg_config_clk_gate_cntrl = 0;

#ifdef VALIDATE_PARMS
    if(!config_clk_gate_cntrl)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (config_clk_gate_cntrl->bypass_clk_gate >= _1BITS_MAX_VAL_) ||
       (config_clk_gate_cntrl->keep_alive_en >= _1BITS_MAX_VAL_) ||
       (config_clk_gate_cntrl->keep_alive_intrvl >= _3BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_clk_gate_cntrl = RU_FIELD_SET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, BYPASS_CLK_GATE, reg_config_clk_gate_cntrl, config_clk_gate_cntrl->bypass_clk_gate);
    reg_config_clk_gate_cntrl = RU_FIELD_SET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, TIMER_VAL, reg_config_clk_gate_cntrl, config_clk_gate_cntrl->timer_val);
    reg_config_clk_gate_cntrl = RU_FIELD_SET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_EN, reg_config_clk_gate_cntrl, config_clk_gate_cntrl->keep_alive_en);
    reg_config_clk_gate_cntrl = RU_FIELD_SET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_INTRVL, reg_config_clk_gate_cntrl, config_clk_gate_cntrl->keep_alive_intrvl);
    reg_config_clk_gate_cntrl = RU_FIELD_SET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_CYC, reg_config_clk_gate_cntrl, config_clk_gate_cntrl->keep_alive_cyc);

    RU_REG_WRITE(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, reg_config_clk_gate_cntrl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_clk_gate_cntrl_get(uint8_t dma_id, dma_config_clk_gate_cntrl *config_clk_gate_cntrl)
{
    uint32_t reg_config_clk_gate_cntrl;

#ifdef VALIDATE_PARMS
    if (!config_clk_gate_cntrl)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, reg_config_clk_gate_cntrl);

    config_clk_gate_cntrl->bypass_clk_gate = RU_FIELD_GET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, BYPASS_CLK_GATE, reg_config_clk_gate_cntrl);
    config_clk_gate_cntrl->timer_val = RU_FIELD_GET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, TIMER_VAL, reg_config_clk_gate_cntrl);
    config_clk_gate_cntrl->keep_alive_en = RU_FIELD_GET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_EN, reg_config_clk_gate_cntrl);
    config_clk_gate_cntrl->keep_alive_intrvl = RU_FIELD_GET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_INTRVL, reg_config_clk_gate_cntrl);
    config_clk_gate_cntrl->keep_alive_cyc = RU_FIELD_GET(dma_id, DMA, CONFIG_CLK_GATE_CNTRL, KEEP_ALIVE_CYC, reg_config_clk_gate_cntrl);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ubus_dpids_set(uint8_t dma_id, uint8_t ddr, uint8_t sram)
{
    uint32_t reg_config_ubus_dpids = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_ubus_dpids = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_DPIDS, DDR, reg_config_ubus_dpids, ddr);
    reg_config_ubus_dpids = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_DPIDS, SRAM, reg_config_ubus_dpids, sram);

    RU_REG_WRITE(dma_id, DMA, CONFIG_UBUS_DPIDS, reg_config_ubus_dpids);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ubus_dpids_get(uint8_t dma_id, uint8_t *ddr, uint8_t *sram)
{
    uint32_t reg_config_ubus_dpids;

#ifdef VALIDATE_PARMS
    if (!ddr || !sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_UBUS_DPIDS, reg_config_ubus_dpids);

    *ddr = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_DPIDS, DDR, reg_config_ubus_dpids);
    *sram = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_DPIDS, SRAM, reg_config_ubus_dpids);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_max_otf_bytes_set(uint8_t dma_id, uint16_t max_ddr, uint16_t max_sram)
{
    uint32_t reg_config_max_otf_bytes = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_max_otf_bytes = RU_FIELD_SET(dma_id, DMA, CONFIG_MAX_OTF_BYTES, MAX_DDR, reg_config_max_otf_bytes, max_ddr);
    reg_config_max_otf_bytes = RU_FIELD_SET(dma_id, DMA, CONFIG_MAX_OTF_BYTES, MAX_SRAM, reg_config_max_otf_bytes, max_sram);

    RU_REG_WRITE(dma_id, DMA, CONFIG_MAX_OTF_BYTES, reg_config_max_otf_bytes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_max_otf_bytes_get(uint8_t dma_id, uint16_t *max_ddr, uint16_t *max_sram)
{
    uint32_t reg_config_max_otf_bytes;

#ifdef VALIDATE_PARMS
    if (!max_ddr || !max_sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_MAX_OTF_BYTES, reg_config_max_otf_bytes);

    *max_ddr = RU_FIELD_GET(dma_id, DMA, CONFIG_MAX_OTF_BYTES, MAX_DDR, reg_config_max_otf_bytes);
    *max_sram = RU_FIELD_GET(dma_id, DMA, CONFIG_MAX_OTF_BYTES, MAX_SRAM, reg_config_max_otf_bytes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ubus_credits_set(uint8_t dma_id, const dma_config_ubus_credits *config_ubus_credits)
{
    uint32_t reg_config_ubus_credits = 0;

#ifdef VALIDATE_PARMS
    if(!config_ubus_credits)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (config_ubus_credits->ddr >= _5BITS_MAX_VAL_) ||
       (config_ubus_credits->sram >= _5BITS_MAX_VAL_) ||
       (config_ubus_credits->ddr_set >= _1BITS_MAX_VAL_) ||
       (config_ubus_credits->sram_set >= _1BITS_MAX_VAL_) ||
       (config_ubus_credits->dspace_full_thrsh >= _9BITS_MAX_VAL_) ||
       (config_ubus_credits->hspace_full_thrsh >= _9BITS_MAX_VAL_) ||
       (config_ubus_credits->ddrch >= _1BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDR, reg_config_ubus_credits, config_ubus_credits->ddr);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, SRAM, reg_config_ubus_credits, config_ubus_credits->sram);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDR_SET, reg_config_ubus_credits, config_ubus_credits->ddr_set);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, SRAM_SET, reg_config_ubus_credits, config_ubus_credits->sram_set);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, DSPACE_FULL_THRSH, reg_config_ubus_credits, config_ubus_credits->dspace_full_thrsh);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, HSPACE_FULL_THRSH, reg_config_ubus_credits, config_ubus_credits->hspace_full_thrsh);
    reg_config_ubus_credits = RU_FIELD_SET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDRCH, reg_config_ubus_credits, config_ubus_credits->ddrch);

    RU_REG_WRITE(dma_id, DMA, CONFIG_UBUS_CREDITS, reg_config_ubus_credits);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ubus_credits_get(uint8_t dma_id, dma_config_ubus_credits *config_ubus_credits)
{
    uint32_t reg_config_ubus_credits;

#ifdef VALIDATE_PARMS
    if (!config_ubus_credits)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_UBUS_CREDITS, reg_config_ubus_credits);

    config_ubus_credits->ddr = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDR, reg_config_ubus_credits);
    config_ubus_credits->sram = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, SRAM, reg_config_ubus_credits);
    config_ubus_credits->ddr_set = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDR_SET, reg_config_ubus_credits);
    config_ubus_credits->sram_set = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, SRAM_SET, reg_config_ubus_credits);
    config_ubus_credits->dspace_full_thrsh = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, DSPACE_FULL_THRSH, reg_config_ubus_credits);
    config_ubus_credits->hspace_full_thrsh = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, HSPACE_FULL_THRSH, reg_config_ubus_credits);
    config_ubus_credits->ddrch = RU_FIELD_GET(dma_id, DMA, CONFIG_UBUS_CREDITS, DDRCH, reg_config_ubus_credits);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_psram_base_set(uint8_t dma_id, uint32_t base)
{
    uint32_t reg_config_psram_base = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_psram_base = RU_FIELD_SET(dma_id, DMA, CONFIG_PSRAM_BASE, BASE, reg_config_psram_base, base);

    RU_REG_WRITE(dma_id, DMA, CONFIG_PSRAM_BASE, reg_config_psram_base);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_psram_base_get(uint8_t dma_id, uint32_t *base)
{
    uint32_t reg_config_psram_base;

#ifdef VALIDATE_PARMS
    if (!base)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_PSRAM_BASE, reg_config_psram_base);

    *base = RU_FIELD_GET(dma_id, DMA, CONFIG_PSRAM_BASE, BASE, reg_config_psram_base);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ddr_base_set(uint8_t dma_id, uint32_t base)
{
    uint32_t reg_config_ddr_base = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_ddr_base = RU_FIELD_SET(dma_id, DMA, CONFIG_DDR_BASE, BASE, reg_config_ddr_base, base);

    RU_REG_WRITE(dma_id, DMA, CONFIG_DDR_BASE, reg_config_ddr_base);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_ddr_base_get(uint8_t dma_id, uint32_t *base)
{
    uint32_t reg_config_ddr_base;

#ifdef VALIDATE_PARMS
    if (!base)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_DDR_BASE, reg_config_ddr_base);

    *base = RU_FIELD_GET(dma_id, DMA, CONFIG_DDR_BASE, BASE, reg_config_ddr_base);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_gen_cfg_set(uint8_t dma_id, bdmf_boolean pair256, uint32_t r)
{
    uint32_t reg_config_gen_cfg = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (pair256 >= _1BITS_MAX_VAL_) ||
       (r >= _31BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_gen_cfg = RU_FIELD_SET(dma_id, DMA, CONFIG_GEN_CFG, PAIR256, reg_config_gen_cfg, pair256);
    reg_config_gen_cfg = RU_FIELD_SET(dma_id, DMA, CONFIG_GEN_CFG, R, reg_config_gen_cfg, r);

    RU_REG_WRITE(dma_id, DMA, CONFIG_GEN_CFG, reg_config_gen_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_gen_cfg_get(uint8_t dma_id, bdmf_boolean *pair256, uint32_t *r)
{
    uint32_t reg_config_gen_cfg;

#ifdef VALIDATE_PARMS
    if (!pair256 || !r)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_GEN_CFG, reg_config_gen_cfg);

    *pair256 = RU_FIELD_GET(dma_id, DMA, CONFIG_GEN_CFG, PAIR256, reg_config_gen_cfg);
    *r = RU_FIELD_GET(dma_id, DMA, CONFIG_GEN_CFG, R, reg_config_gen_cfg);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_max_otf_req_set(uint8_t dma_id, uint8_t max_ddr, uint8_t max_sram)
{
    uint32_t reg_config_max_otf_req = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (max_ddr >= _6BITS_MAX_VAL_) ||
       (max_sram >= _6BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_config_max_otf_req = RU_FIELD_SET(dma_id, DMA, CONFIG_MAX_OTF_REQ, MAX_DDR, reg_config_max_otf_req, max_ddr);
    reg_config_max_otf_req = RU_FIELD_SET(dma_id, DMA, CONFIG_MAX_OTF_REQ, MAX_SRAM, reg_config_max_otf_req, max_sram);

    RU_REG_WRITE(dma_id, DMA, CONFIG_MAX_OTF_REQ, reg_config_max_otf_req);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_config_max_otf_req_get(uint8_t dma_id, uint8_t *max_ddr, uint8_t *max_sram)
{
    uint32_t reg_config_max_otf_req;

#ifdef VALIDATE_PARMS
    if (!max_ddr || !max_sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, CONFIG_MAX_OTF_REQ, reg_config_max_otf_req);

    *max_ddr = RU_FIELD_GET(dma_id, DMA, CONFIG_MAX_OTF_REQ, MAX_DDR, reg_config_max_otf_req);
    *max_sram = RU_FIELD_GET(dma_id, DMA, CONFIG_MAX_OTF_REQ, MAX_SRAM, reg_config_max_otf_req);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_req_cnt_rx_get(uint8_t dma_id, uint8_t emac_index, uint8_t *req_cnt)
{
    uint32_t reg_debug_req_cnt_rx;

#ifdef VALIDATE_PARMS
    if (!req_cnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, DEBUG_REQ_CNT_RX, reg_debug_req_cnt_rx);

    *req_cnt = RU_FIELD_GET(dma_id, DMA, DEBUG_REQ_CNT_RX, REQ_CNT, reg_debug_req_cnt_rx);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_req_cnt_tx_get(uint8_t dma_id, uint8_t emac_index, uint8_t *req_cnt)
{
    uint32_t reg_debug_req_cnt_tx;

#ifdef VALIDATE_PARMS
    if (!req_cnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, DEBUG_REQ_CNT_TX, reg_debug_req_cnt_tx);

    *req_cnt = RU_FIELD_GET(dma_id, DMA, DEBUG_REQ_CNT_TX, REQ_CNT, reg_debug_req_cnt_tx);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_req_cnt_rx_acc_get(uint8_t dma_id, uint8_t emac_index, uint32_t *req_cnt)
{
    uint32_t reg_debug_req_cnt_rx_acc;

#ifdef VALIDATE_PARMS
    if (!req_cnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, DEBUG_REQ_CNT_RX_ACC, reg_debug_req_cnt_rx_acc);

    *req_cnt = RU_FIELD_GET(dma_id, DMA, DEBUG_REQ_CNT_RX_ACC, REQ_CNT, reg_debug_req_cnt_rx_acc);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_req_cnt_tx_acc_get(uint8_t dma_id, uint8_t emac_index, uint32_t *req_cnt)
{
    uint32_t reg_debug_req_cnt_tx_acc;

#ifdef VALIDATE_PARMS
    if (!req_cnt)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (emac_index >= 8))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, emac_index, DMA, DEBUG_REQ_CNT_TX_ACC, reg_debug_req_cnt_tx_acc);

    *req_cnt = RU_FIELD_GET(dma_id, DMA, DEBUG_REQ_CNT_TX_ACC, REQ_CNT, reg_debug_req_cnt_tx_acc);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_ubuscrdt_get(uint8_t dma_id, uint8_t *ddr, uint8_t *sram)
{
    uint32_t reg_debug_ubuscrdt;

#ifdef VALIDATE_PARMS
    if (!ddr || !sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_UBUSCRDT, reg_debug_ubuscrdt);

    *ddr = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSCRDT, DDR, reg_debug_ubuscrdt);
    *sram = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSCRDT, SRAM, reg_debug_ubuscrdt);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_ubusbytes_get(uint8_t dma_id, uint16_t *ddr, uint16_t *sram)
{
    uint32_t reg_debug_ubusbytes;

#ifdef VALIDATE_PARMS
    if (!ddr || !sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_UBUSBYTES, reg_debug_ubusbytes);

    *ddr = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSBYTES, DDR, reg_debug_ubusbytes);
    *sram = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSBYTES, SRAM, reg_debug_ubusbytes);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_on_the_fly_get(uint8_t dma_id, uint8_t *otf)
{
    uint32_t reg_debug_on_the_fly;

#ifdef VALIDATE_PARMS
    if (!otf)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_ON_THE_FLY, reg_debug_on_the_fly);

    *otf = RU_FIELD_GET(dma_id, DMA, DEBUG_ON_THE_FLY, OTF, reg_debug_on_the_fly);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_dbg_sel_set(uint8_t dma_id, uint8_t dbgsel)
{
    uint32_t reg_debug_dbg_sel = 0;

#ifdef VALIDATE_PARMS
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (dbgsel >= _3BITS_MAX_VAL_))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    reg_debug_dbg_sel = RU_FIELD_SET(dma_id, DMA, DEBUG_DBG_SEL, DBGSEL, reg_debug_dbg_sel, dbgsel);

    RU_REG_WRITE(dma_id, DMA, DEBUG_DBG_SEL, reg_debug_dbg_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_dbg_sel_get(uint8_t dma_id, uint8_t *dbgsel)
{
    uint32_t reg_debug_dbg_sel;

#ifdef VALIDATE_PARMS
    if (!dbgsel)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_DBG_SEL, reg_debug_dbg_sel);

    *dbgsel = RU_FIELD_GET(dma_id, DMA, DEBUG_DBG_SEL, DBGSEL, reg_debug_dbg_sel);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_debugout_get(uint8_t dma_id, uint32_t *dbg)
{
    uint32_t reg_debug_debugout;

#ifdef VALIDATE_PARMS
    if (!dbg)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_DEBUGOUT, reg_debug_debugout);

    *dbg = RU_FIELD_GET(dma_id, DMA, DEBUG_DEBUGOUT, DBG, reg_debug_debugout);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_ubusreq_get(uint8_t dma_id, uint8_t *ddr, uint8_t *sram)
{
    uint32_t reg_debug_ubusreq;

#ifdef VALIDATE_PARMS
    if (!ddr || !sram)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_READ(dma_id, DMA, DEBUG_UBUSREQ, reg_debug_ubusreq);

    *ddr = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSREQ, DDR, reg_debug_ubusreq);
    *sram = RU_FIELD_GET(dma_id, DMA, DEBUG_UBUSREQ, SRAM, reg_debug_ubusreq);

    return BDMF_ERR_OK;
}

bdmf_error_t ag_drv_dma_debug_rddata_get(uint8_t dma_id, uint8_t word_index, uint32_t *data)
{
    uint32_t reg_debug_rddata;

#ifdef VALIDATE_PARMS
    if (!data)
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_PARM), BDMF_ERR_PARM);
        return BDMF_ERR_PARM;
    }
    if ((dma_id >= BLOCK_ADDR_COUNT) ||
       (word_index >= 4))
    {
        bdmf_trace("ERROR driver %s:%u| err=%s (%d)\n", __FILE__, __LINE__, bdmf_strerror(BDMF_ERR_RANGE), BDMF_ERR_RANGE);
        return BDMF_ERR_RANGE;
    }
#endif

    RU_REG_RAM_READ(dma_id, word_index, DMA, DEBUG_RDDATA, reg_debug_rddata);

    *data = RU_FIELD_GET(dma_id, DMA, DEBUG_RDDATA, DATA, reg_debug_rddata);

    return BDMF_ERR_OK;
}

#ifdef USE_BDMF_SHELL

typedef enum
{
    bdmf_address_config_num_of_writes,
    bdmf_address_config_num_of_reads,
    bdmf_address_config_u_thresh,
    bdmf_address_config_pri,
    bdmf_address_config_weight,
    bdmf_address_config_periph_source,
    bdmf_address_config_target_mem,
    bdmf_address_config_ptrrst,
    bdmf_address_config_bbrouteovrd,
    bdmf_address_config_clk_gate_cntrl,
    bdmf_address_config_ubus_dpids,
    bdmf_address_config_max_otf_bytes,
    bdmf_address_config_ubus_credits,
    bdmf_address_config_psram_base,
    bdmf_address_config_ddr_base,
    bdmf_address_config_gen_cfg,
    bdmf_address_config_max_otf_req,
    bdmf_address_debug_nempty,
    bdmf_address_debug_urgnt,
    bdmf_address_debug_selsrc,
    bdmf_address_debug_req_cnt_rx,
    bdmf_address_debug_req_cnt_tx,
    bdmf_address_debug_req_cnt_rx_acc,
    bdmf_address_debug_req_cnt_tx_acc,
    bdmf_address_debug_ubuscrdt,
    bdmf_address_debug_ubusbytes,
    bdmf_address_debug_on_the_fly,
    bdmf_address_debug_dbg_sel,
    bdmf_address_debug_debugout,
    bdmf_address_debug_ubusreq,
    bdmf_address_debug_rdadd,
    bdmf_address_debug_rdvalid,
    bdmf_address_debug_rddatardy,
    bdmf_address_debug_rddata,
}
bdmf_address;

static int ag_drv_dma_cli_set(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_error_t ag_err;

    switch (parm[0].value.unumber)
    {
    case cli_dma_debug_info:
    {
        dma_debug_info debug_info = { .nempty = parm[2].value.unumber, .urgnt = parm[3].value.unumber, .sel_src = parm[4].value.unumber, .address = parm[5].value.unumber, .datacs = parm[6].value.unumber, .cdcs = parm[7].value.unumber, .rrcs = parm[8].value.unumber, .valid = parm[9].value.unumber, .ready = parm[10].value.unumber};
        ag_err = ag_drv_dma_debug_info_set(parm[1].value.unumber, &debug_info);
        break;
    }
    case cli_dma_config_num_of_writes:
        ag_err = ag_drv_dma_config_num_of_writes_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_config_num_of_reads:
        ag_err = ag_drv_dma_config_num_of_reads_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_config_u_thresh:
        ag_err = ag_drv_dma_config_u_thresh_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_pri:
        ag_err = ag_drv_dma_config_pri_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_weight:
        ag_err = ag_drv_dma_config_weight_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_periph_source:
        ag_err = ag_drv_dma_config_periph_source_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_target_mem:
        ag_err = ag_drv_dma_config_target_mem_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_ptrrst:
        ag_err = ag_drv_dma_config_ptrrst_set(parm[1].value.unumber, parm[2].value.unumber);
        break;
    case cli_dma_config_bbrouteovrd:
        ag_err = ag_drv_dma_config_bbrouteovrd_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber, parm[4].value.unumber);
        break;
    case cli_dma_config_clk_gate_cntrl:
    {
        dma_config_clk_gate_cntrl config_clk_gate_cntrl = { .bypass_clk_gate = parm[2].value.unumber, .timer_val = parm[3].value.unumber, .keep_alive_en = parm[4].value.unumber, .keep_alive_intrvl = parm[5].value.unumber, .keep_alive_cyc = parm[6].value.unumber};
        ag_err = ag_drv_dma_config_clk_gate_cntrl_set(parm[1].value.unumber, &config_clk_gate_cntrl);
        break;
    }
    case cli_dma_config_ubus_dpids:
        ag_err = ag_drv_dma_config_ubus_dpids_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_config_max_otf_bytes:
        ag_err = ag_drv_dma_config_max_otf_bytes_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_config_ubus_credits:
    {
        dma_config_ubus_credits config_ubus_credits = { .ddr = parm[2].value.unumber, .sram = parm[3].value.unumber, .ddr_set = parm[4].value.unumber, .sram_set = parm[5].value.unumber, .dspace_full_thrsh = parm[6].value.unumber, .hspace_full_thrsh = parm[7].value.unumber, .ddrch = parm[8].value.unumber};
        ag_err = ag_drv_dma_config_ubus_credits_set(parm[1].value.unumber, &config_ubus_credits);
        break;
    }
    case cli_dma_config_psram_base:
        ag_err = ag_drv_dma_config_psram_base_set(parm[1].value.unumber, parm[2].value.unumber);
        break;
    case cli_dma_config_ddr_base:
        ag_err = ag_drv_dma_config_ddr_base_set(parm[1].value.unumber, parm[2].value.unumber);
        break;
    case cli_dma_config_gen_cfg:
        ag_err = ag_drv_dma_config_gen_cfg_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_config_max_otf_req:
        ag_err = ag_drv_dma_config_max_otf_req_set(parm[1].value.unumber, parm[2].value.unumber, parm[3].value.unumber);
        break;
    case cli_dma_debug_dbg_sel:
        ag_err = ag_drv_dma_debug_dbg_sel_set(parm[1].value.unumber, parm[2].value.unumber);
        break;
    default:
        ag_err = BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    return ag_err;
}

int bcm_dma_cli_get(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_error_t ag_err;

    switch (parm[0].value.unumber)
    {
    case cli_dma_debug_info:
    {
        dma_debug_info debug_info;
        ag_err = ag_drv_dma_debug_info_get(parm[1].value.unumber, &debug_info);
        bdmf_session_print(session, "nempty = %u = 0x%x\n", debug_info.nempty, debug_info.nempty);
        bdmf_session_print(session, "urgnt = %u = 0x%x\n", debug_info.urgnt, debug_info.urgnt);
        bdmf_session_print(session, "sel_src = %u = 0x%x\n", debug_info.sel_src, debug_info.sel_src);
        bdmf_session_print(session, "address = %u = 0x%x\n", debug_info.address, debug_info.address);
        bdmf_session_print(session, "datacs = %u = 0x%x\n", debug_info.datacs, debug_info.datacs);
        bdmf_session_print(session, "cdcs = %u = 0x%x\n", debug_info.cdcs, debug_info.cdcs);
        bdmf_session_print(session, "rrcs = %u = 0x%x\n", debug_info.rrcs, debug_info.rrcs);
        bdmf_session_print(session, "valid = %u = 0x%x\n", debug_info.valid, debug_info.valid);
        bdmf_session_print(session, "ready = %u = 0x%x\n", debug_info.ready, debug_info.ready);
        break;
    }
    case cli_dma_config_num_of_writes:
    {
        uint8_t numofbuff;
        ag_err = ag_drv_dma_config_num_of_writes_get(parm[1].value.unumber, parm[2].value.unumber, &numofbuff);
        bdmf_session_print(session, "numofbuff = %u = 0x%x\n", numofbuff, numofbuff);
        break;
    }
    case cli_dma_config_num_of_reads:
    {
        uint8_t rr_num;
        ag_err = ag_drv_dma_config_num_of_reads_get(parm[1].value.unumber, parm[2].value.unumber, &rr_num);
        bdmf_session_print(session, "rr_num = %u = 0x%x\n", rr_num, rr_num);
        break;
    }
    case cli_dma_config_u_thresh:
    {
        uint8_t into_u;
        uint8_t out_of_u;
        ag_err = ag_drv_dma_config_u_thresh_get(parm[1].value.unumber, parm[2].value.unumber, &into_u, &out_of_u);
        bdmf_session_print(session, "into_u = %u = 0x%x\n", into_u, into_u);
        bdmf_session_print(session, "out_of_u = %u = 0x%x\n", out_of_u, out_of_u);
        break;
    }
    case cli_dma_config_pri:
    {
        uint8_t rxpri;
        uint8_t txpri;
        ag_err = ag_drv_dma_config_pri_get(parm[1].value.unumber, parm[2].value.unumber, &rxpri, &txpri);
        bdmf_session_print(session, "rxpri = %u = 0x%x\n", rxpri, rxpri);
        bdmf_session_print(session, "txpri = %u = 0x%x\n", txpri, txpri);
        break;
    }
    case cli_dma_config_weight:
    {
        uint8_t rxweight;
        uint8_t txweight;
        ag_err = ag_drv_dma_config_weight_get(parm[1].value.unumber, parm[2].value.unumber, &rxweight, &txweight);
        bdmf_session_print(session, "rxweight = %u = 0x%x\n", rxweight, rxweight);
        bdmf_session_print(session, "txweight = %u = 0x%x\n", txweight, txweight);
        break;
    }
    case cli_dma_config_periph_source:
    {
        uint8_t rxsource;
        uint8_t txsource;
        ag_err = ag_drv_dma_config_periph_source_get(parm[1].value.unumber, parm[2].value.unumber, &rxsource, &txsource);
        bdmf_session_print(session, "rxsource = %u = 0x%x\n", rxsource, rxsource);
        bdmf_session_print(session, "txsource = %u = 0x%x\n", txsource, txsource);
        break;
    }
    case cli_dma_config_target_mem:
    {
        bdmf_boolean rxtmem;
        bdmf_boolean txtmem;
        ag_err = ag_drv_dma_config_target_mem_get(parm[1].value.unumber, parm[2].value.unumber, &rxtmem, &txtmem);
        bdmf_session_print(session, "rxtmem = %u = 0x%x\n", rxtmem, rxtmem);
        bdmf_session_print(session, "txtmem = %u = 0x%x\n", txtmem, txtmem);
        break;
    }
    case cli_dma_config_ptrrst:
    {
        uint16_t rstvec;
        ag_err = ag_drv_dma_config_ptrrst_get(parm[1].value.unumber, &rstvec);
        bdmf_session_print(session, "rstvec = %u = 0x%x\n", rstvec, rstvec);
        break;
    }
    case cli_dma_config_bbrouteovrd:
    {
        uint8_t dest;
        uint16_t route;
        bdmf_boolean ovrd;
        ag_err = ag_drv_dma_config_bbrouteovrd_get(parm[1].value.unumber, &dest, &route, &ovrd);
        bdmf_session_print(session, "dest = %u = 0x%x\n", dest, dest);
        bdmf_session_print(session, "route = %u = 0x%x\n", route, route);
        bdmf_session_print(session, "ovrd = %u = 0x%x\n", ovrd, ovrd);
        break;
    }
    case cli_dma_config_clk_gate_cntrl:
    {
        dma_config_clk_gate_cntrl config_clk_gate_cntrl;
        ag_err = ag_drv_dma_config_clk_gate_cntrl_get(parm[1].value.unumber, &config_clk_gate_cntrl);
        bdmf_session_print(session, "bypass_clk_gate = %u = 0x%x\n", config_clk_gate_cntrl.bypass_clk_gate, config_clk_gate_cntrl.bypass_clk_gate);
        bdmf_session_print(session, "timer_val = %u = 0x%x\n", config_clk_gate_cntrl.timer_val, config_clk_gate_cntrl.timer_val);
        bdmf_session_print(session, "keep_alive_en = %u = 0x%x\n", config_clk_gate_cntrl.keep_alive_en, config_clk_gate_cntrl.keep_alive_en);
        bdmf_session_print(session, "keep_alive_intrvl = %u = 0x%x\n", config_clk_gate_cntrl.keep_alive_intrvl, config_clk_gate_cntrl.keep_alive_intrvl);
        bdmf_session_print(session, "keep_alive_cyc = %u = 0x%x\n", config_clk_gate_cntrl.keep_alive_cyc, config_clk_gate_cntrl.keep_alive_cyc);
        break;
    }
    case cli_dma_config_ubus_dpids:
    {
        uint8_t ddr;
        uint8_t sram;
        ag_err = ag_drv_dma_config_ubus_dpids_get(parm[1].value.unumber, &ddr, &sram);
        bdmf_session_print(session, "ddr = %u = 0x%x\n", ddr, ddr);
        bdmf_session_print(session, "sram = %u = 0x%x\n", sram, sram);
        break;
    }
    case cli_dma_config_max_otf_bytes:
    {
        uint16_t max_ddr;
        uint16_t max_sram;
        ag_err = ag_drv_dma_config_max_otf_bytes_get(parm[1].value.unumber, &max_ddr, &max_sram);
        bdmf_session_print(session, "max_ddr = %u = 0x%x\n", max_ddr, max_ddr);
        bdmf_session_print(session, "max_sram = %u = 0x%x\n", max_sram, max_sram);
        break;
    }
    case cli_dma_config_ubus_credits:
    {
        dma_config_ubus_credits config_ubus_credits;
        ag_err = ag_drv_dma_config_ubus_credits_get(parm[1].value.unumber, &config_ubus_credits);
        bdmf_session_print(session, "ddr = %u = 0x%x\n", config_ubus_credits.ddr, config_ubus_credits.ddr);
        bdmf_session_print(session, "sram = %u = 0x%x\n", config_ubus_credits.sram, config_ubus_credits.sram);
        bdmf_session_print(session, "ddr_set = %u = 0x%x\n", config_ubus_credits.ddr_set, config_ubus_credits.ddr_set);
        bdmf_session_print(session, "sram_set = %u = 0x%x\n", config_ubus_credits.sram_set, config_ubus_credits.sram_set);
        bdmf_session_print(session, "dspace_full_thrsh = %u = 0x%x\n", config_ubus_credits.dspace_full_thrsh, config_ubus_credits.dspace_full_thrsh);
        bdmf_session_print(session, "hspace_full_thrsh = %u = 0x%x\n", config_ubus_credits.hspace_full_thrsh, config_ubus_credits.hspace_full_thrsh);
        bdmf_session_print(session, "ddrch = %u = 0x%x\n", config_ubus_credits.ddrch, config_ubus_credits.ddrch);
        break;
    }
    case cli_dma_config_psram_base:
    {
        uint32_t base;
        ag_err = ag_drv_dma_config_psram_base_get(parm[1].value.unumber, &base);
        bdmf_session_print(session, "base = %u = 0x%x\n", base, base);
        break;
    }
    case cli_dma_config_ddr_base:
    {
        uint32_t base;
        ag_err = ag_drv_dma_config_ddr_base_get(parm[1].value.unumber, &base);
        bdmf_session_print(session, "base = %u = 0x%x\n", base, base);
        break;
    }
    case cli_dma_config_gen_cfg:
    {
        bdmf_boolean pair256;
        uint32_t r;
        ag_err = ag_drv_dma_config_gen_cfg_get(parm[1].value.unumber, &pair256, &r);
        bdmf_session_print(session, "pair256 = %u = 0x%x\n", pair256, pair256);
        bdmf_session_print(session, "r = %u = 0x%x\n", r, r);
        break;
    }
    case cli_dma_config_max_otf_req:
    {
        uint8_t max_ddr;
        uint8_t max_sram;
        ag_err = ag_drv_dma_config_max_otf_req_get(parm[1].value.unumber, &max_ddr, &max_sram);
        bdmf_session_print(session, "max_ddr = %u = 0x%x\n", max_ddr, max_ddr);
        bdmf_session_print(session, "max_sram = %u = 0x%x\n", max_sram, max_sram);
        break;
    }
    case cli_dma_debug_req_cnt_rx:
    {
        uint8_t req_cnt;
        ag_err = ag_drv_dma_debug_req_cnt_rx_get(parm[1].value.unumber, parm[2].value.unumber, &req_cnt);
        bdmf_session_print(session, "req_cnt = %u = 0x%x\n", req_cnt, req_cnt);
        break;
    }
    case cli_dma_debug_req_cnt_tx:
    {
        uint8_t req_cnt;
        ag_err = ag_drv_dma_debug_req_cnt_tx_get(parm[1].value.unumber, parm[2].value.unumber, &req_cnt);
        bdmf_session_print(session, "req_cnt = %u = 0x%x\n", req_cnt, req_cnt);
        break;
    }
    case cli_dma_debug_req_cnt_rx_acc:
    {
        uint32_t req_cnt;
        ag_err = ag_drv_dma_debug_req_cnt_rx_acc_get(parm[1].value.unumber, parm[2].value.unumber, &req_cnt);
        bdmf_session_print(session, "req_cnt = %u = 0x%x\n", req_cnt, req_cnt);
        break;
    }
    case cli_dma_debug_req_cnt_tx_acc:
    {
        uint32_t req_cnt;
        ag_err = ag_drv_dma_debug_req_cnt_tx_acc_get(parm[1].value.unumber, parm[2].value.unumber, &req_cnt);
        bdmf_session_print(session, "req_cnt = %u = 0x%x\n", req_cnt, req_cnt);
        break;
    }
    case cli_dma_debug_ubuscrdt:
    {
        uint8_t ddr;
        uint8_t sram;
        ag_err = ag_drv_dma_debug_ubuscrdt_get(parm[1].value.unumber, &ddr, &sram);
        bdmf_session_print(session, "ddr = %u = 0x%x\n", ddr, ddr);
        bdmf_session_print(session, "sram = %u = 0x%x\n", sram, sram);
        break;
    }
    case cli_dma_debug_ubusbytes:
    {
        uint16_t ddr;
        uint16_t sram;
        ag_err = ag_drv_dma_debug_ubusbytes_get(parm[1].value.unumber, &ddr, &sram);
        bdmf_session_print(session, "ddr = %u = 0x%x\n", ddr, ddr);
        bdmf_session_print(session, "sram = %u = 0x%x\n", sram, sram);
        break;
    }
    case cli_dma_debug_on_the_fly:
    {
        uint8_t otf;
        ag_err = ag_drv_dma_debug_on_the_fly_get(parm[1].value.unumber, &otf);
        bdmf_session_print(session, "otf = %u = 0x%x\n", otf, otf);
        break;
    }
    case cli_dma_debug_dbg_sel:
    {
        uint8_t dbgsel;
        ag_err = ag_drv_dma_debug_dbg_sel_get(parm[1].value.unumber, &dbgsel);
        bdmf_session_print(session, "dbgsel = %u = 0x%x\n", dbgsel, dbgsel);
        break;
    }
    case cli_dma_debug_debugout:
    {
        uint32_t dbg;
        ag_err = ag_drv_dma_debug_debugout_get(parm[1].value.unumber, &dbg);
        bdmf_session_print(session, "dbg = %u = 0x%x\n", dbg, dbg);
        break;
    }
    case cli_dma_debug_ubusreq:
    {
        uint8_t ddr;
        uint8_t sram;
        ag_err = ag_drv_dma_debug_ubusreq_get(parm[1].value.unumber, &ddr, &sram);
        bdmf_session_print(session, "ddr = %u = 0x%x\n", ddr, ddr);
        bdmf_session_print(session, "sram = %u = 0x%x\n", sram, sram);
        break;
    }
    case cli_dma_debug_rddata:
    {
        uint32_t data;
        ag_err = ag_drv_dma_debug_rddata_get(parm[1].value.unumber, parm[2].value.unumber, &data);
        bdmf_session_print(session, "data = %u = 0x%x\n", data, data);
        break;
    }
    default:
        ag_err = BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    return ag_err;
}

#ifdef HAL_DRV_TEST_ENABLE
static int ag_drv_dma_cli_test(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_test_method m = parm[0].value.unumber;
    uint8_t dma_id = parm[1].value.unumber;
    bdmf_error_t ag_err = BDMF_ERR_OK;
    uint32_t test_success_cnt = 0;
    uint32_t test_failure_cnt = 0;

    {
        dma_debug_info debug_info = {.nempty = gtmv(m, 16), .urgnt = gtmv(m, 16), .sel_src = gtmv(m, 6), .address = gtmv(m, 10), .datacs = gtmv(m, 1), .cdcs = gtmv(m, 1), .rrcs = gtmv(m, 1), .valid = gtmv(m, 1), .ready = gtmv(m, 1)};
        bdmf_session_print(session, "ag_drv_dma_debug_info_set(%u %u %u %u %u %u %u %u %u %u)\n", dma_id,
            debug_info.nempty, debug_info.urgnt, debug_info.sel_src, debug_info.address, 
            debug_info.datacs, debug_info.cdcs, debug_info.rrcs, debug_info.valid, 
            debug_info.ready);
        ag_err = ag_drv_dma_debug_info_set(dma_id, &debug_info);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_info_get(dma_id, &debug_info);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_info_get(%u %u %u %u %u %u %u %u %u %u)\n", dma_id,
                debug_info.nempty, debug_info.urgnt, debug_info.sel_src, debug_info.address, 
                debug_info.datacs, debug_info.cdcs, debug_info.rrcs, debug_info.valid, 
                debug_info.ready);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (debug_info.nempty != gtmv(m, 16) || debug_info.urgnt != gtmv(m, 16) || debug_info.sel_src != gtmv(m, 6) || debug_info.address != gtmv(m, 10) || debug_info.datacs != gtmv(m, 1) || debug_info.cdcs != gtmv(m, 1) || debug_info.rrcs != gtmv(m, 1) || debug_info.valid != gtmv(m, 1) || debug_info.ready != gtmv(m, 1))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t numofbuff = gtmv(m, 6);
        bdmf_session_print(session, "ag_drv_dma_config_num_of_writes_set(%u %u %u)\n", dma_id, emac_index,
            numofbuff);
        ag_err = ag_drv_dma_config_num_of_writes_set(dma_id, emac_index, numofbuff);
        if (!ag_err)
            ag_err = ag_drv_dma_config_num_of_writes_get(dma_id, emac_index, &numofbuff);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_writes_get(%u %u %u)\n", dma_id, emac_index,
                numofbuff);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (numofbuff != gtmv(m, 6))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rr_num = gtmv(m, 6);
        bdmf_session_print(session, "ag_drv_dma_config_num_of_reads_set(%u %u %u)\n", dma_id, emac_index,
            rr_num);
        ag_err = ag_drv_dma_config_num_of_reads_set(dma_id, emac_index, rr_num);
        if (!ag_err)
            ag_err = ag_drv_dma_config_num_of_reads_get(dma_id, emac_index, &rr_num);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_reads_get(%u %u %u)\n", dma_id, emac_index,
                rr_num);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rr_num != gtmv(m, 6))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t into_u = gtmv(m, 6);
        uint8_t out_of_u = gtmv(m, 6);
        bdmf_session_print(session, "ag_drv_dma_config_u_thresh_set(%u %u %u %u)\n", dma_id, emac_index,
            into_u, out_of_u);
        ag_err = ag_drv_dma_config_u_thresh_set(dma_id, emac_index, into_u, out_of_u);
        if (!ag_err)
            ag_err = ag_drv_dma_config_u_thresh_get(dma_id, emac_index, &into_u, &out_of_u);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_u_thresh_get(%u %u %u %u)\n", dma_id, emac_index,
                into_u, out_of_u);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (into_u != gtmv(m, 6) || out_of_u != gtmv(m, 6))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxpri = gtmv(m, 4);
        uint8_t txpri = gtmv(m, 4);
        bdmf_session_print(session, "ag_drv_dma_config_pri_set(%u %u %u %u)\n", dma_id, emac_index,
            rxpri, txpri);
        ag_err = ag_drv_dma_config_pri_set(dma_id, emac_index, rxpri, txpri);
        if (!ag_err)
            ag_err = ag_drv_dma_config_pri_get(dma_id, emac_index, &rxpri, &txpri);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_pri_get(%u %u %u %u)\n", dma_id, emac_index,
                rxpri, txpri);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rxpri != gtmv(m, 4) || txpri != gtmv(m, 4))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxweight = gtmv(m, 3);
        uint8_t txweight = gtmv(m, 3);
        bdmf_session_print(session, "ag_drv_dma_config_weight_set(%u %u %u %u)\n", dma_id, emac_index,
            rxweight, txweight);
        ag_err = ag_drv_dma_config_weight_set(dma_id, emac_index, rxweight, txweight);
        if (!ag_err)
            ag_err = ag_drv_dma_config_weight_get(dma_id, emac_index, &rxweight, &txweight);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_weight_get(%u %u %u %u)\n", dma_id, emac_index,
                rxweight, txweight);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rxweight != gtmv(m, 3) || txweight != gtmv(m, 3))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxsource = gtmv(m, 6);
        uint8_t txsource = gtmv(m, 6);
        bdmf_session_print(session, "ag_drv_dma_config_periph_source_set(%u %u %u %u)\n", dma_id, emac_index,
            rxsource, txsource);
        ag_err = ag_drv_dma_config_periph_source_set(dma_id, emac_index, rxsource, txsource);
        if (!ag_err)
            ag_err = ag_drv_dma_config_periph_source_get(dma_id, emac_index, &rxsource, &txsource);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_periph_source_get(%u %u %u %u)\n", dma_id, emac_index,
                rxsource, txsource);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rxsource != gtmv(m, 6) || txsource != gtmv(m, 6))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        bdmf_boolean rxtmem = gtmv(m, 1);
        bdmf_boolean txtmem = gtmv(m, 1);
        bdmf_session_print(session, "ag_drv_dma_config_target_mem_set(%u %u %u %u)\n", dma_id, emac_index,
            rxtmem, txtmem);
        ag_err = ag_drv_dma_config_target_mem_set(dma_id, emac_index, rxtmem, txtmem);
        if (!ag_err)
            ag_err = ag_drv_dma_config_target_mem_get(dma_id, emac_index, &rxtmem, &txtmem);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_target_mem_get(%u %u %u %u)\n", dma_id, emac_index,
                rxtmem, txtmem);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rxtmem != gtmv(m, 1) || txtmem != gtmv(m, 1))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint16_t rstvec = gtmv(m, 16);
        bdmf_session_print(session, "ag_drv_dma_config_ptrrst_set(%u %u)\n", dma_id,
            rstvec);
        ag_err = ag_drv_dma_config_ptrrst_set(dma_id, rstvec);
        if (!ag_err)
            ag_err = ag_drv_dma_config_ptrrst_get(dma_id, &rstvec);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_ptrrst_get(%u %u)\n", dma_id,
                rstvec);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (rstvec != gtmv(m, 16))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t dest = gtmv(m, 6);
        uint16_t route = gtmv(m, 10);
        bdmf_boolean ovrd = gtmv(m, 1);
        bdmf_session_print(session, "ag_drv_dma_config_bbrouteovrd_set(%u %u %u %u)\n", dma_id,
            dest, route, ovrd);
        ag_err = ag_drv_dma_config_bbrouteovrd_set(dma_id, dest, route, ovrd);
        if (!ag_err)
            ag_err = ag_drv_dma_config_bbrouteovrd_get(dma_id, &dest, &route, &ovrd);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_bbrouteovrd_get(%u %u %u %u)\n", dma_id,
                dest, route, ovrd);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (dest != gtmv(m, 6) || route != gtmv(m, 10) || ovrd != gtmv(m, 1))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        dma_config_clk_gate_cntrl config_clk_gate_cntrl = {.bypass_clk_gate = gtmv(m, 1), .timer_val = gtmv(m, 8), .keep_alive_en = gtmv(m, 1), .keep_alive_intrvl = gtmv(m, 3), .keep_alive_cyc = gtmv(m, 8)};
        bdmf_session_print(session, "ag_drv_dma_config_clk_gate_cntrl_set(%u %u %u %u %u %u)\n", dma_id,
            config_clk_gate_cntrl.bypass_clk_gate, config_clk_gate_cntrl.timer_val, config_clk_gate_cntrl.keep_alive_en, config_clk_gate_cntrl.keep_alive_intrvl, 
            config_clk_gate_cntrl.keep_alive_cyc);
        ag_err = ag_drv_dma_config_clk_gate_cntrl_set(dma_id, &config_clk_gate_cntrl);
        if (!ag_err)
            ag_err = ag_drv_dma_config_clk_gate_cntrl_get(dma_id, &config_clk_gate_cntrl);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_clk_gate_cntrl_get(%u %u %u %u %u %u)\n", dma_id,
                config_clk_gate_cntrl.bypass_clk_gate, config_clk_gate_cntrl.timer_val, config_clk_gate_cntrl.keep_alive_en, config_clk_gate_cntrl.keep_alive_intrvl, 
                config_clk_gate_cntrl.keep_alive_cyc);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (config_clk_gate_cntrl.bypass_clk_gate != gtmv(m, 1) || config_clk_gate_cntrl.timer_val != gtmv(m, 8) || config_clk_gate_cntrl.keep_alive_en != gtmv(m, 1) || config_clk_gate_cntrl.keep_alive_intrvl != gtmv(m, 3) || config_clk_gate_cntrl.keep_alive_cyc != gtmv(m, 8))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t ddr = gtmv(m, 8);
        uint8_t sram = gtmv(m, 8);
        bdmf_session_print(session, "ag_drv_dma_config_ubus_dpids_set(%u %u %u)\n", dma_id,
            ddr, sram);
        ag_err = ag_drv_dma_config_ubus_dpids_set(dma_id, ddr, sram);
        if (!ag_err)
            ag_err = ag_drv_dma_config_ubus_dpids_get(dma_id, &ddr, &sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_ubus_dpids_get(%u %u %u)\n", dma_id,
                ddr, sram);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (ddr != gtmv(m, 8) || sram != gtmv(m, 8))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint16_t max_ddr = gtmv(m, 16);
        uint16_t max_sram = gtmv(m, 16);
        bdmf_session_print(session, "ag_drv_dma_config_max_otf_bytes_set(%u %u %u)\n", dma_id,
            max_ddr, max_sram);
        ag_err = ag_drv_dma_config_max_otf_bytes_set(dma_id, max_ddr, max_sram);
        if (!ag_err)
            ag_err = ag_drv_dma_config_max_otf_bytes_get(dma_id, &max_ddr, &max_sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_max_otf_bytes_get(%u %u %u)\n", dma_id,
                max_ddr, max_sram);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (max_ddr != gtmv(m, 16) || max_sram != gtmv(m, 16))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        dma_config_ubus_credits config_ubus_credits = {.ddr = gtmv(m, 5), .sram = gtmv(m, 5), .ddr_set = gtmv(m, 1), .sram_set = gtmv(m, 1), .dspace_full_thrsh = gtmv(m, 9), .hspace_full_thrsh = gtmv(m, 9), .ddrch = gtmv(m, 1)};
        bdmf_session_print(session, "ag_drv_dma_config_ubus_credits_set(%u %u %u %u %u %u %u %u)\n", dma_id,
            config_ubus_credits.ddr, config_ubus_credits.sram, config_ubus_credits.ddr_set, config_ubus_credits.sram_set, 
            config_ubus_credits.dspace_full_thrsh, config_ubus_credits.hspace_full_thrsh, config_ubus_credits.ddrch);
        ag_err = ag_drv_dma_config_ubus_credits_set(dma_id, &config_ubus_credits);
        if (!ag_err)
            ag_err = ag_drv_dma_config_ubus_credits_get(dma_id, &config_ubus_credits);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_ubus_credits_get(%u %u %u %u %u %u %u %u)\n", dma_id,
                config_ubus_credits.ddr, config_ubus_credits.sram, config_ubus_credits.ddr_set, config_ubus_credits.sram_set, 
                config_ubus_credits.dspace_full_thrsh, config_ubus_credits.hspace_full_thrsh, config_ubus_credits.ddrch);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (config_ubus_credits.ddr != gtmv(m, 5) || config_ubus_credits.sram != gtmv(m, 5) || config_ubus_credits.ddr_set != gtmv(m, 1) || config_ubus_credits.sram_set != gtmv(m, 1) || config_ubus_credits.dspace_full_thrsh != gtmv(m, 9) || config_ubus_credits.hspace_full_thrsh != gtmv(m, 9) || config_ubus_credits.ddrch != gtmv(m, 1))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint32_t base = gtmv(m, 32);
        bdmf_session_print(session, "ag_drv_dma_config_psram_base_set(%u %u)\n", dma_id,
            base);
        ag_err = ag_drv_dma_config_psram_base_set(dma_id, base);
        if (!ag_err)
            ag_err = ag_drv_dma_config_psram_base_get(dma_id, &base);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_psram_base_get(%u %u)\n", dma_id,
                base);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (base != gtmv(m, 32))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint32_t base = gtmv(m, 32);
        bdmf_session_print(session, "ag_drv_dma_config_ddr_base_set(%u %u)\n", dma_id,
            base);
        ag_err = ag_drv_dma_config_ddr_base_set(dma_id, base);
        if (!ag_err)
            ag_err = ag_drv_dma_config_ddr_base_get(dma_id, &base);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_ddr_base_get(%u %u)\n", dma_id,
                base);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (base != gtmv(m, 32))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        bdmf_boolean pair256 = gtmv(m, 1);
        uint32_t r = gtmv(m, 31);
        bdmf_session_print(session, "ag_drv_dma_config_gen_cfg_set(%u %u %u)\n", dma_id,
            pair256, r);
        ag_err = ag_drv_dma_config_gen_cfg_set(dma_id, pair256, r);
        if (!ag_err)
            ag_err = ag_drv_dma_config_gen_cfg_get(dma_id, &pair256, &r);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_gen_cfg_get(%u %u %u)\n", dma_id,
                pair256, r);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (pair256 != gtmv(m, 1) || r != gtmv(m, 31))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t max_ddr = gtmv(m, 6);
        uint8_t max_sram = gtmv(m, 6);
        bdmf_session_print(session, "ag_drv_dma_config_max_otf_req_set(%u %u %u)\n", dma_id,
            max_ddr, max_sram);
        ag_err = ag_drv_dma_config_max_otf_req_set(dma_id, max_ddr, max_sram);
        if (!ag_err)
            ag_err = ag_drv_dma_config_max_otf_req_get(dma_id, &max_ddr, &max_sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_config_max_otf_req_get(%u %u %u)\n", dma_id,
                max_ddr, max_sram);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (max_ddr != gtmv(m, 6) || max_sram != gtmv(m, 6))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t req_cnt = gtmv(m, 6);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_req_cnt_rx_get(dma_id, emac_index, &req_cnt);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_req_cnt_rx_get(%u %u %u)\n", dma_id, emac_index,
                req_cnt);
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint8_t req_cnt = gtmv(m, 6);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_req_cnt_tx_get(dma_id, emac_index, &req_cnt);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_req_cnt_tx_get(%u %u %u)\n", dma_id, emac_index,
                req_cnt);
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint32_t req_cnt = gtmv(m, 32);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_req_cnt_rx_acc_get(dma_id, emac_index, &req_cnt);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_req_cnt_rx_acc_get(%u %u %u)\n", dma_id, emac_index,
                req_cnt);
        }
    }

    {
        uint8_t emac_index = gtmv(m, 3);
        uint32_t req_cnt = gtmv(m, 32);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_req_cnt_tx_acc_get(dma_id, emac_index, &req_cnt);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_req_cnt_tx_acc_get(%u %u %u)\n", dma_id, emac_index,
                req_cnt);
        }
    }

    {
        uint8_t ddr = gtmv(m, 5);
        uint8_t sram = gtmv(m, 5);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_ubuscrdt_get(dma_id, &ddr, &sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_ubuscrdt_get(%u %u %u)\n", dma_id,
                ddr, sram);
        }
    }

    {
        uint16_t ddr = gtmv(m, 16);
        uint16_t sram = gtmv(m, 16);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_ubusbytes_get(dma_id, &ddr, &sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_ubusbytes_get(%u %u %u)\n", dma_id,
                ddr, sram);
        }
    }

    {
        uint8_t otf = gtmv(m, 6);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_on_the_fly_get(dma_id, &otf);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_on_the_fly_get(%u %u)\n", dma_id,
                otf);
        }
    }

    {
        uint8_t dbgsel = gtmv(m, 3);
        bdmf_session_print(session, "ag_drv_dma_debug_dbg_sel_set(%u %u)\n", dma_id,
            dbgsel);
        ag_err = ag_drv_dma_debug_dbg_sel_set(dma_id, dbgsel);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_dbg_sel_get(dma_id, &dbgsel);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_dbg_sel_get(%u %u)\n", dma_id,
                dbgsel);
        }
        else
        {
            return BDMF_ERR_IO;
        }

        if (dbgsel != gtmv(m, 3))
        {
            test_failure_cnt++;
            bdmf_session_print(session, "  register failed match; failures=%u\n", test_failure_cnt);        }
        else
        {
            test_success_cnt++;
        }
    }

    {
        uint32_t dbg = gtmv(m, 32);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_debugout_get(dma_id, &dbg);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_debugout_get(%u %u)\n", dma_id,
                dbg);
        }
    }

    {
        uint8_t ddr = gtmv(m, 6);
        uint8_t sram = gtmv(m, 6);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_ubusreq_get(dma_id, &ddr, &sram);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_ubusreq_get(%u %u %u)\n", dma_id,
                ddr, sram);
        }
    }

    {
        uint8_t word_index = gtmv(m, 2);
        uint32_t data = gtmv(m, 32);
        if (!ag_err)
            ag_err = ag_drv_dma_debug_rddata_get(dma_id, word_index, &data);

        if (!ag_err)
        {
            bdmf_session_print(session, "ag_drv_dma_debug_rddata_get(%u %u %u)\n", dma_id, word_index,
                data);
        }
    }

    bdmf_session_print(session, "successes=%u failures=%u\n", test_success_cnt, test_failure_cnt);

    return ag_err;
}
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

#ifdef HAL_DRV_TEST_ENABLE
static int ag_drv_dma_cli_ext_test(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    bdmf_test_method m, input_method = parm[0].value.unumber;
    uint8_t dma_id = parm[2].value.unumber;
    bdmfmon_cmd_parm_t *p_start, *p_stop;
    bdmf_error_t ag_err = BDMF_ERR_OK;
    uint32_t ext_test_success_cnt = 0;
    uint32_t ext_test_failure_cnt = 0;
    uint32_t start_idx = 0;
    uint32_t stop_idx = 0;

    p_start = bdmfmon_cmd_find(session, "start_idx");
    p_stop = bdmfmon_cmd_find(session, "stop_idx");

    if (p_start)
        start_idx = p_start->value.unumber;
    if (p_stop)
        stop_idx = p_stop->value.unumber;

    if ((start_idx > stop_idx) && (stop_idx != 0))
    {
        bdmf_session_print(session, "ERROR: start_idx must be less than stop_idx\n");
        return BDMF_ERR_PARM;
    }

    m = bdmf_test_method_high; /* "Initialization" method */
    switch (parm[1].value.unumber)
    {
    case cli_dma_config_num_of_writes:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t numofbuff = gtmv(m, 6);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_writes_set(%u %u %u)\n", dma_id, emac_index,
                numofbuff);
            ag_err = ag_drv_dma_config_num_of_writes_set(dma_id, emac_index, numofbuff);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        numofbuff = gtmv(m, 6);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_writes_set(%u %u %u)\n", dma_id, emac_index,
                numofbuff);
            ag_err = ag_drv_dma_config_num_of_writes_set(dma_id, emac_index, numofbuff);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_num_of_writes_get(dma_id, emac_index, &numofbuff);

            bdmf_session_print(session, "ag_drv_dma_config_num_of_writes_get(%u %u %u)\n", dma_id, emac_index,
                numofbuff);

            if (numofbuff != gtmv(m, 6) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_num_of_writes completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_num_of_reads:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rr_num = gtmv(m, 6);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_reads_set(%u %u %u)\n", dma_id, emac_index,
                rr_num);
            ag_err = ag_drv_dma_config_num_of_reads_set(dma_id, emac_index, rr_num);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        rr_num = gtmv(m, 6);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_num_of_reads_set(%u %u %u)\n", dma_id, emac_index,
                rr_num);
            ag_err = ag_drv_dma_config_num_of_reads_set(dma_id, emac_index, rr_num);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_num_of_reads_get(dma_id, emac_index, &rr_num);

            bdmf_session_print(session, "ag_drv_dma_config_num_of_reads_get(%u %u %u)\n", dma_id, emac_index,
                rr_num);

            if (rr_num != gtmv(m, 6) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_num_of_reads completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_u_thresh:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t into_u = gtmv(m, 6);
        uint8_t out_of_u = gtmv(m, 6);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_u_thresh_set(%u %u %u %u)\n", dma_id, emac_index,
                into_u, out_of_u);
            ag_err = ag_drv_dma_config_u_thresh_set(dma_id, emac_index, into_u, out_of_u);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        into_u = gtmv(m, 6);
        out_of_u = gtmv(m, 6);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_u_thresh_set(%u %u %u %u)\n", dma_id, emac_index,
                into_u, out_of_u);
            ag_err = ag_drv_dma_config_u_thresh_set(dma_id, emac_index, into_u, out_of_u);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_u_thresh_get(dma_id, emac_index, &into_u, &out_of_u);

            bdmf_session_print(session, "ag_drv_dma_config_u_thresh_get(%u %u %u %u)\n", dma_id, emac_index,
                into_u, out_of_u);

            if (into_u != gtmv(m, 6) || out_of_u != gtmv(m, 6) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_u_thresh completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_pri:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxpri = gtmv(m, 4);
        uint8_t txpri = gtmv(m, 4);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_pri_set(%u %u %u %u)\n", dma_id, emac_index,
                rxpri, txpri);
            ag_err = ag_drv_dma_config_pri_set(dma_id, emac_index, rxpri, txpri);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        rxpri = gtmv(m, 4);
        txpri = gtmv(m, 4);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_pri_set(%u %u %u %u)\n", dma_id, emac_index,
                rxpri, txpri);
            ag_err = ag_drv_dma_config_pri_set(dma_id, emac_index, rxpri, txpri);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_pri_get(dma_id, emac_index, &rxpri, &txpri);

            bdmf_session_print(session, "ag_drv_dma_config_pri_get(%u %u %u %u)\n", dma_id, emac_index,
                rxpri, txpri);

            if (rxpri != gtmv(m, 4) || txpri != gtmv(m, 4) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_pri completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_weight:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxweight = gtmv(m, 3);
        uint8_t txweight = gtmv(m, 3);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_weight_set(%u %u %u %u)\n", dma_id, emac_index,
                rxweight, txweight);
            ag_err = ag_drv_dma_config_weight_set(dma_id, emac_index, rxweight, txweight);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        rxweight = gtmv(m, 3);
        txweight = gtmv(m, 3);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_weight_set(%u %u %u %u)\n", dma_id, emac_index,
                rxweight, txweight);
            ag_err = ag_drv_dma_config_weight_set(dma_id, emac_index, rxweight, txweight);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_weight_get(dma_id, emac_index, &rxweight, &txweight);

            bdmf_session_print(session, "ag_drv_dma_config_weight_get(%u %u %u %u)\n", dma_id, emac_index,
                rxweight, txweight);

            if (rxweight != gtmv(m, 3) || txweight != gtmv(m, 3) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_weight completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_periph_source:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        uint8_t rxsource = gtmv(m, 6);
        uint8_t txsource = gtmv(m, 6);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_periph_source_set(%u %u %u %u)\n", dma_id, emac_index,
                rxsource, txsource);
            ag_err = ag_drv_dma_config_periph_source_set(dma_id, emac_index, rxsource, txsource);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        rxsource = gtmv(m, 6);
        txsource = gtmv(m, 6);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_periph_source_set(%u %u %u %u)\n", dma_id, emac_index,
                rxsource, txsource);
            ag_err = ag_drv_dma_config_periph_source_set(dma_id, emac_index, rxsource, txsource);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_periph_source_get(dma_id, emac_index, &rxsource, &txsource);

            bdmf_session_print(session, "ag_drv_dma_config_periph_source_get(%u %u %u %u)\n", dma_id, emac_index,
                rxsource, txsource);

            if (rxsource != gtmv(m, 6) || txsource != gtmv(m, 6) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_periph_source completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    case cli_dma_config_target_mem:
    {
        uint8_t max_emac_index = 8;
        uint8_t emac_index = gtmv(m, 3);
        bdmf_boolean rxtmem = gtmv(m, 1);
        bdmf_boolean txtmem = gtmv(m, 1);

        if ((start_idx >= max_emac_index) || (stop_idx >= max_emac_index))
        {
            bdmf_session_print(session, "ERROR: start_idx and stop_idx must be < %u\n", max_emac_index);
            return BDMF_ERR_PARM;
        }

        bdmf_session_print(session, "\n ======== Set all array entries to the init values ========\n");
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_target_mem_set(%u %u %u %u)\n", dma_id, emac_index,
                rxtmem, txtmem);
            ag_err = ag_drv_dma_config_target_mem_set(dma_id, emac_index, rxtmem, txtmem);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting init value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Set the specified entries [%u..%u] ========\n", start_idx, stop_idx);
        /* Set the specified entries to values according to the method */
        m = input_method;
        rxtmem = gtmv(m, 1);
        txtmem = gtmv(m, 1);

        for (emac_index = start_idx; emac_index <= stop_idx; emac_index++)
        {
            bdmf_session_print(session, "ag_drv_dma_config_target_mem_set(%u %u %u %u)\n", dma_id, emac_index,
                rxtmem, txtmem);
            ag_err = ag_drv_dma_config_target_mem_set(dma_id, emac_index, rxtmem, txtmem);
            if (ag_err)
            {
                bdmf_session_print(session, "Error on setting value to array entry %u\n", emac_index);
                return BDMF_ERR_IO;
            }
        }

        bdmf_session_print(session, "\n ======== Read and check all array entries ========\n");
        input_method = m; 
        for (emac_index = 0; emac_index < max_emac_index; emac_index++)
        {
            if (emac_index < start_idx || emac_index > stop_idx)
                m = ag_drv_cli_test_method_high; /* method for checking "unchanged" entries */
            else
                m = input_method; /* method for checking entries [start_idx..stop_idx] */

            ag_err = ag_drv_dma_config_target_mem_get(dma_id, emac_index, &rxtmem, &txtmem);

            bdmf_session_print(session, "ag_drv_dma_config_target_mem_get(%u %u %u %u)\n", dma_id, emac_index,
                rxtmem, txtmem);

            if (rxtmem != gtmv(m, 1) || txtmem != gtmv(m, 1) || 0)
            {
                bdmf_session_print(session, "Test failed on comparing set and get results of entry %u\n", emac_index);
                ext_test_failure_cnt++;
            }
            else
            {
                ext_test_success_cnt++;
            }
        }

        bdmf_session_print(session, "========================================================================\n");
        bdmf_session_print(session, "Test of config_target_mem completed. Number of tested entries %u.\n", max_emac_index);
        bdmf_session_print(session, "SUCCESSES: %u, FAILURES: %u\n", ext_test_success_cnt, ext_test_failure_cnt);
        bdmf_session_print(session, "========================================================================\n\n");

        break;
    }
    default:
        ag_err = BDMF_ERR_NOT_SUPPORTED;
        break;
    }

    return ag_err;
}
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

#ifdef HAL_DRV_TEST_ENABLE
static int ag_drv_dma_cli_address(bdmf_session_handle session, const bdmfmon_cmd_parm_t parm[], uint16_t n_parms)
{
    int chip_rev_idx = RU_CHIP_REV_IDX_GET();
    uint32_t i;
    uint32_t j;
    uint32_t index1_start = 0;
    uint32_t index1_stop;
    uint32_t index2_start = 0;
    uint32_t index2_stop;
    bdmfmon_cmd_parm_t *cliparm;
    const ru_reg_rec *reg;
    const ru_block_rec *blk;
    const char *enum_string = bdmfmon_enum_parm_stringval(session, &parm[0]);

    if(!enum_string)
        return BDMF_ERR_INTERNAL;

    switch (parm[0].value.unumber)
    {
    case bdmf_address_config_num_of_writes: reg = &RU_REG(DMA, CONFIG_NUM_OF_WRITES); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_num_of_reads: reg = &RU_REG(DMA, CONFIG_NUM_OF_READS); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_u_thresh: reg = &RU_REG(DMA, CONFIG_U_THRESH); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_pri: reg = &RU_REG(DMA, CONFIG_PRI); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_weight: reg = &RU_REG(DMA, CONFIG_WEIGHT); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_periph_source: reg = &RU_REG(DMA, CONFIG_PERIPH_SOURCE); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_target_mem: reg = &RU_REG(DMA, CONFIG_TARGET_MEM); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_ptrrst: reg = &RU_REG(DMA, CONFIG_PTRRST); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_bbrouteovrd: reg = &RU_REG(DMA, CONFIG_BBROUTEOVRD); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_clk_gate_cntrl: reg = &RU_REG(DMA, CONFIG_CLK_GATE_CNTRL); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_ubus_dpids: reg = &RU_REG(DMA, CONFIG_UBUS_DPIDS); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_max_otf_bytes: reg = &RU_REG(DMA, CONFIG_MAX_OTF_BYTES); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_ubus_credits: reg = &RU_REG(DMA, CONFIG_UBUS_CREDITS); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_psram_base: reg = &RU_REG(DMA, CONFIG_PSRAM_BASE); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_ddr_base: reg = &RU_REG(DMA, CONFIG_DDR_BASE); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_gen_cfg: reg = &RU_REG(DMA, CONFIG_GEN_CFG); blk = &RU_BLK(DMA); break;
    case bdmf_address_config_max_otf_req: reg = &RU_REG(DMA, CONFIG_MAX_OTF_REQ); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_nempty: reg = &RU_REG(DMA, DEBUG_NEMPTY); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_urgnt: reg = &RU_REG(DMA, DEBUG_URGNT); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_selsrc: reg = &RU_REG(DMA, DEBUG_SELSRC); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_req_cnt_rx: reg = &RU_REG(DMA, DEBUG_REQ_CNT_RX); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_req_cnt_tx: reg = &RU_REG(DMA, DEBUG_REQ_CNT_TX); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_req_cnt_rx_acc: reg = &RU_REG(DMA, DEBUG_REQ_CNT_RX_ACC); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_req_cnt_tx_acc: reg = &RU_REG(DMA, DEBUG_REQ_CNT_TX_ACC); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_ubuscrdt: reg = &RU_REG(DMA, DEBUG_UBUSCRDT); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_ubusbytes: reg = &RU_REG(DMA, DEBUG_UBUSBYTES); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_on_the_fly: reg = &RU_REG(DMA, DEBUG_ON_THE_FLY); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_dbg_sel: reg = &RU_REG(DMA, DEBUG_DBG_SEL); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_debugout: reg = &RU_REG(DMA, DEBUG_DEBUGOUT); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_ubusreq: reg = &RU_REG(DMA, DEBUG_UBUSREQ); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_rdadd: reg = &RU_REG(DMA, DEBUG_RDADD); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_rdvalid: reg = &RU_REG(DMA, DEBUG_RDVALID); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_rddatardy: reg = &RU_REG(DMA, DEBUG_RDDATARDY); blk = &RU_BLK(DMA); break;
    case bdmf_address_debug_rddata: reg = &RU_REG(DMA, DEBUG_RDDATA); blk = &RU_BLK(DMA); break;
    default :
        return BDMF_ERR_NOT_SUPPORTED;
        break;
    }
    if ((cliparm = bdmfmon_cmd_find(session, "index1")))
    {
        index1_start = cliparm->value.unumber;
        index1_stop = index1_start + 1;
    }
    else
        index1_stop = blk->addr_count;
    if ((cliparm = bdmfmon_cmd_find(session, "index2")))
    {
        index2_start = cliparm->value.unumber;
        index2_stop = index2_start + 1;
    }
    else
        index2_stop = reg->ram_count;
    if (index1_stop > blk->addr_count)
    {
        bdmf_session_print(session, "index1 (%u) is out of range (%u).\n", index1_stop, blk->addr_count);
        return BDMF_ERR_RANGE;
    }
    if (index2_stop > (reg->ram_count))
    {
        bdmf_session_print(session, "index2 (%u) is out of range (%u).\n", index2_stop, reg->ram_count);
        return BDMF_ERR_RANGE;
    }
    if (reg->ram_count)
        for (i = index1_start; i < index1_stop; i++)
        {
            bdmf_session_print(session, "index1 = %u\n", i);
            for (j = index2_start; j < index2_stop; j++)
                bdmf_session_print(session, TAB "(%5u) 0x%08X\n", j, ((blk->addr[i] + reg->addr[chip_rev_idx]) + j));
        }
    else
        for (i = index1_start; i < index1_stop; i++)
            bdmf_session_print(session, "(%3u) 0x%08X\n", i, blk->addr[i]+reg->addr[chip_rev_idx]);
    return 0;
}
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

bdmfmon_handle_t ag_drv_dma_cli_init(bdmfmon_handle_t root_dir)
{
    bdmfmon_handle_t dir;

    dir = bdmfmon_dir_add(root_dir, "dma", "dma", BDMF_ACCESS_ADMIN, NULL);
    BUG_ON(dir == NULL);

    {
        static bdmfmon_cmd_parm_t set_debug_info[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("nempty", "nempty", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("urgnt", "urgnt", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("sel_src", "sel_src", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("address", "address", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("datacs", "datacs", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("cdcs", "cdcs", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rrcs", "rrcs", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("valid", "valid", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ready", "ready", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_num_of_writes[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("numofbuff", "numofbuff", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_num_of_reads[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rr_num", "rr_num", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_u_thresh[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("into_u", "into_u", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("out_of_u", "out_of_u", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_pri[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rxpri", "rxpri", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("txpri", "txpri", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_weight[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rxweight", "rxweight", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("txweight", "txweight", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_periph_source[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rxsource", "rxsource", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("txsource", "txsource", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_target_mem[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rxtmem", "rxtmem", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("txtmem", "txtmem", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_ptrrst[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("rstvec", "rstvec", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_bbrouteovrd[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("dest", "dest", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("route", "route", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ovrd", "ovrd", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_clk_gate_cntrl[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("bypass_clk_gate", "bypass_clk_gate", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("timer_val", "timer_val", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("keep_alive_en", "keep_alive_en", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("keep_alive_intrvl", "keep_alive_intrvl", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("keep_alive_cyc", "keep_alive_cyc", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_ubus_dpids[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ddr", "ddr", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("sram", "sram", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_max_otf_bytes[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("max_ddr", "max_ddr", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("max_sram", "max_sram", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_ubus_credits[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ddr", "ddr", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("sram", "sram", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ddr_set", "ddr_set", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("sram_set", "sram_set", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("dspace_full_thrsh", "dspace_full_thrsh", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("hspace_full_thrsh", "hspace_full_thrsh", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("ddrch", "ddrch", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_psram_base[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("base", "base", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_ddr_base[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("base", "base", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_gen_cfg[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("pair256", "pair256", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("r", "r", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_config_max_otf_req[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("max_ddr", "max_ddr", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("max_sram", "max_sram", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t set_debug_dbg_sel[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("dbgsel", "dbgsel", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_enum_val_t selector_table[] = {
            { .name = "debug_info", .val = cli_dma_debug_info, .parms = set_debug_info },
            { .name = "config_num_of_writes", .val = cli_dma_config_num_of_writes, .parms = set_config_num_of_writes },
            { .name = "config_num_of_reads", .val = cli_dma_config_num_of_reads, .parms = set_config_num_of_reads },
            { .name = "config_u_thresh", .val = cli_dma_config_u_thresh, .parms = set_config_u_thresh },
            { .name = "config_pri", .val = cli_dma_config_pri, .parms = set_config_pri },
            { .name = "config_weight", .val = cli_dma_config_weight, .parms = set_config_weight },
            { .name = "config_periph_source", .val = cli_dma_config_periph_source, .parms = set_config_periph_source },
            { .name = "config_target_mem", .val = cli_dma_config_target_mem, .parms = set_config_target_mem },
            { .name = "config_ptrrst", .val = cli_dma_config_ptrrst, .parms = set_config_ptrrst },
            { .name = "config_bbrouteovrd", .val = cli_dma_config_bbrouteovrd, .parms = set_config_bbrouteovrd },
            { .name = "config_clk_gate_cntrl", .val = cli_dma_config_clk_gate_cntrl, .parms = set_config_clk_gate_cntrl },
            { .name = "config_ubus_dpids", .val = cli_dma_config_ubus_dpids, .parms = set_config_ubus_dpids },
            { .name = "config_max_otf_bytes", .val = cli_dma_config_max_otf_bytes, .parms = set_config_max_otf_bytes },
            { .name = "config_ubus_credits", .val = cli_dma_config_ubus_credits, .parms = set_config_ubus_credits },
            { .name = "config_psram_base", .val = cli_dma_config_psram_base, .parms = set_config_psram_base },
            { .name = "config_ddr_base", .val = cli_dma_config_ddr_base, .parms = set_config_ddr_base },
            { .name = "config_gen_cfg", .val = cli_dma_config_gen_cfg, .parms = set_config_gen_cfg },
            { .name = "config_max_otf_req", .val = cli_dma_config_max_otf_req, .parms = set_config_max_otf_req },
            { .name = "debug_dbg_sel", .val = cli_dma_debug_dbg_sel, .parms = set_debug_dbg_sel },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "set", "set", ag_drv_dma_cli_set,
            BDMFMON_MAKE_PARM_SELECTOR("purpose", "purpose", selector_table, 0));
    }
    {
        static bdmfmon_cmd_parm_t get_default[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_num_of_writes[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_num_of_reads[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_u_thresh[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_pri[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_weight[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_periph_source[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_config_target_mem[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_debug_req_cnt_rx[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_debug_req_cnt_tx[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_debug_req_cnt_rx_acc[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_debug_req_cnt_tx_acc[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("emac_index", "emac_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_cmd_parm_t get_debug_rddata[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_MAKE_PARM("word_index", "word_index", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_enum_val_t selector_table[] = {
            { .name = "debug_info", .val = cli_dma_debug_info, .parms = get_default },
            { .name = "config_num_of_writes", .val = cli_dma_config_num_of_writes, .parms = get_config_num_of_writes },
            { .name = "config_num_of_reads", .val = cli_dma_config_num_of_reads, .parms = get_config_num_of_reads },
            { .name = "config_u_thresh", .val = cli_dma_config_u_thresh, .parms = get_config_u_thresh },
            { .name = "config_pri", .val = cli_dma_config_pri, .parms = get_config_pri },
            { .name = "config_weight", .val = cli_dma_config_weight, .parms = get_config_weight },
            { .name = "config_periph_source", .val = cli_dma_config_periph_source, .parms = get_config_periph_source },
            { .name = "config_target_mem", .val = cli_dma_config_target_mem, .parms = get_config_target_mem },
            { .name = "config_ptrrst", .val = cli_dma_config_ptrrst, .parms = get_default },
            { .name = "config_bbrouteovrd", .val = cli_dma_config_bbrouteovrd, .parms = get_default },
            { .name = "config_clk_gate_cntrl", .val = cli_dma_config_clk_gate_cntrl, .parms = get_default },
            { .name = "config_ubus_dpids", .val = cli_dma_config_ubus_dpids, .parms = get_default },
            { .name = "config_max_otf_bytes", .val = cli_dma_config_max_otf_bytes, .parms = get_default },
            { .name = "config_ubus_credits", .val = cli_dma_config_ubus_credits, .parms = get_default },
            { .name = "config_psram_base", .val = cli_dma_config_psram_base, .parms = get_default },
            { .name = "config_ddr_base", .val = cli_dma_config_ddr_base, .parms = get_default },
            { .name = "config_gen_cfg", .val = cli_dma_config_gen_cfg, .parms = get_default },
            { .name = "config_max_otf_req", .val = cli_dma_config_max_otf_req, .parms = get_default },
            { .name = "debug_req_cnt_rx", .val = cli_dma_debug_req_cnt_rx, .parms = get_debug_req_cnt_rx },
            { .name = "debug_req_cnt_tx", .val = cli_dma_debug_req_cnt_tx, .parms = get_debug_req_cnt_tx },
            { .name = "debug_req_cnt_rx_acc", .val = cli_dma_debug_req_cnt_rx_acc, .parms = get_debug_req_cnt_rx_acc },
            { .name = "debug_req_cnt_tx_acc", .val = cli_dma_debug_req_cnt_tx_acc, .parms = get_debug_req_cnt_tx_acc },
            { .name = "debug_ubuscrdt", .val = cli_dma_debug_ubuscrdt, .parms = get_default },
            { .name = "debug_ubusbytes", .val = cli_dma_debug_ubusbytes, .parms = get_default },
            { .name = "debug_on_the_fly", .val = cli_dma_debug_on_the_fly, .parms = get_default },
            { .name = "debug_dbg_sel", .val = cli_dma_debug_dbg_sel, .parms = get_default },
            { .name = "debug_debugout", .val = cli_dma_debug_debugout, .parms = get_default },
            { .name = "debug_ubusreq", .val = cli_dma_debug_ubusreq, .parms = get_default },
            { .name = "debug_rddata", .val = cli_dma_debug_rddata, .parms = get_debug_rddata },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_CMD(dir, "get", "get", bcm_dma_cli_get,
            BDMFMON_MAKE_PARM_SELECTOR("purpose", "purpose", selector_table, 0));
    }
#ifdef HAL_DRV_TEST_ENABLE
    {
        static bdmfmon_enum_val_t enum_table_test_method[] = {
            { .name = "low", .val = ag_drv_cli_test_method_low },
            { .name = "mid", .val = ag_drv_cli_test_method_mid },
            { .name = "high", .val = ag_drv_cli_test_method_high },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_PARM(dir, "test", "test", ag_drv_dma_cli_test,
            BDMFMON_MAKE_PARM_ENUM("method", "low: 0000, mid: 1000, high: 1111", enum_table_test_method, 0)            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0));
    }
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

#ifdef HAL_DRV_TEST_ENABLE
    {
        static bdmfmon_cmd_parm_t ext_test_default[] = {
            BDMFMON_MAKE_PARM("dma_id", "dma_id", BDMFMON_PARM_UNUMBER, 0),
            BDMFMON_PARM_LIST_TERMINATOR
        };
        static bdmfmon_enum_val_t selector_table[] = {
            { .name = "config_num_of_writes", .val = cli_dma_config_num_of_writes, .parms = ext_test_default},
            { .name = "config_num_of_reads", .val = cli_dma_config_num_of_reads, .parms = ext_test_default},
            { .name = "config_u_thresh", .val = cli_dma_config_u_thresh, .parms = ext_test_default},
            { .name = "config_pri", .val = cli_dma_config_pri, .parms = ext_test_default},
            { .name = "config_weight", .val = cli_dma_config_weight, .parms = ext_test_default},
            { .name = "config_periph_source", .val = cli_dma_config_periph_source, .parms = ext_test_default},
            { .name = "config_target_mem", .val = cli_dma_config_target_mem, .parms = ext_test_default},
            BDMFMON_ENUM_LAST
        };
        static bdmfmon_enum_val_t enum_table_test_method[] = {
            { .name = "low", .val = ag_drv_cli_test_method_low },
            { .name = "mid", .val = ag_drv_cli_test_method_mid },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_PARM(dir, "ext_test", "ext_test", ag_drv_dma_cli_ext_test,
            BDMFMON_MAKE_PARM_ENUM("method", "low: 0000, mid: 1000, high: 1111", enum_table_test_method, 0),
            BDMFMON_MAKE_PARM_SELECTOR("purpose", "purpose", selector_table, 0),
            BDMFMON_MAKE_PARM("start_idx", "array index to start test", BDMFMON_PARM_UNUMBER, BDMFMON_PARM_FLAG_OPTIONAL),
            BDMFMON_MAKE_PARM("stop_idx", "array index to stop test", BDMFMON_PARM_UNUMBER, BDMFMON_PARM_FLAG_OPTIONAL));
    }
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

#ifdef HAL_DRV_TEST_ENABLE
    {
        static bdmfmon_enum_val_t enum_table_address[] = {
            { .name = "CONFIG_NUM_OF_WRITES", .val = bdmf_address_config_num_of_writes },
            { .name = "CONFIG_NUM_OF_READS", .val = bdmf_address_config_num_of_reads },
            { .name = "CONFIG_U_THRESH", .val = bdmf_address_config_u_thresh },
            { .name = "CONFIG_PRI", .val = bdmf_address_config_pri },
            { .name = "CONFIG_WEIGHT", .val = bdmf_address_config_weight },
            { .name = "CONFIG_PERIPH_SOURCE", .val = bdmf_address_config_periph_source },
            { .name = "CONFIG_TARGET_MEM", .val = bdmf_address_config_target_mem },
            { .name = "CONFIG_PTRRST", .val = bdmf_address_config_ptrrst },
            { .name = "CONFIG_BBROUTEOVRD", .val = bdmf_address_config_bbrouteovrd },
            { .name = "CONFIG_CLK_GATE_CNTRL", .val = bdmf_address_config_clk_gate_cntrl },
            { .name = "CONFIG_UBUS_DPIDS", .val = bdmf_address_config_ubus_dpids },
            { .name = "CONFIG_MAX_OTF_BYTES", .val = bdmf_address_config_max_otf_bytes },
            { .name = "CONFIG_UBUS_CREDITS", .val = bdmf_address_config_ubus_credits },
            { .name = "CONFIG_PSRAM_BASE", .val = bdmf_address_config_psram_base },
            { .name = "CONFIG_DDR_BASE", .val = bdmf_address_config_ddr_base },
            { .name = "CONFIG_GEN_CFG", .val = bdmf_address_config_gen_cfg },
            { .name = "CONFIG_MAX_OTF_REQ", .val = bdmf_address_config_max_otf_req },
            { .name = "DEBUG_NEMPTY", .val = bdmf_address_debug_nempty },
            { .name = "DEBUG_URGNT", .val = bdmf_address_debug_urgnt },
            { .name = "DEBUG_SELSRC", .val = bdmf_address_debug_selsrc },
            { .name = "DEBUG_REQ_CNT_RX", .val = bdmf_address_debug_req_cnt_rx },
            { .name = "DEBUG_REQ_CNT_TX", .val = bdmf_address_debug_req_cnt_tx },
            { .name = "DEBUG_REQ_CNT_RX_ACC", .val = bdmf_address_debug_req_cnt_rx_acc },
            { .name = "DEBUG_REQ_CNT_TX_ACC", .val = bdmf_address_debug_req_cnt_tx_acc },
            { .name = "DEBUG_UBUSCRDT", .val = bdmf_address_debug_ubuscrdt },
            { .name = "DEBUG_UBUSBYTES", .val = bdmf_address_debug_ubusbytes },
            { .name = "DEBUG_ON_THE_FLY", .val = bdmf_address_debug_on_the_fly },
            { .name = "DEBUG_DBG_SEL", .val = bdmf_address_debug_dbg_sel },
            { .name = "DEBUG_DEBUGOUT", .val = bdmf_address_debug_debugout },
            { .name = "DEBUG_UBUSREQ", .val = bdmf_address_debug_ubusreq },
            { .name = "DEBUG_RDADD", .val = bdmf_address_debug_rdadd },
            { .name = "DEBUG_RDVALID", .val = bdmf_address_debug_rdvalid },
            { .name = "DEBUG_RDDATARDY", .val = bdmf_address_debug_rddatardy },
            { .name = "DEBUG_RDDATA", .val = bdmf_address_debug_rddata },
            BDMFMON_ENUM_LAST
        };
        BDMFMON_MAKE_PARM(dir, "address", "address", bcm_dma_cli_address,
            BDMFMON_MAKE_PARM_ENUM("method", "method", enum_table_address, 0),
            BDMFMON_MAKE_PARM("index1", "dma_id", BDMFMON_PARM_UNUMBER, BDMFMON_PARM_FLAG_OPTIONAL),
            BDMFMON_MAKE_PARM("index2", "onu_id/alloc_id/port_id/etc...", BDMFMON_PARM_UNUMBER, BDMFMON_PARM_FLAG_OPTIONAL));
    }
#endif /* #ifdef HAL_DRV_TEST_ENABLE */

    return dir;
}
#endif /* #ifdef USE_BDMF_SHELL */

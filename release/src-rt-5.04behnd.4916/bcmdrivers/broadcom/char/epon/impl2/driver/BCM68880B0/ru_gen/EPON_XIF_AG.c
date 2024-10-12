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

#include "ru.h"

#if RU_INCLUDE_FIELD_DB
/******************************************************************************
 * Field: XIF_CTL_RXENCRYPTEN
 ******************************************************************************/
const ru_field_rec XIF_CTL_RXENCRYPTEN_FIELD =
{
    "RXENCRYPTEN",
#if RU_INCLUDE_DESC
    "",
    "Global downstream receive encryption enable : 0 - Normal operation;"
    "1 - Enable encryption.",
#endif
    XIF_CTL_RXENCRYPTEN_FIELD_MASK,
    0,
    XIF_CTL_RXENCRYPTEN_FIELD_WIDTH,
    XIF_CTL_RXENCRYPTEN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGDISRXDASAENCRPT
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGDISRXDASAENCRPT_FIELD =
{
    "CFGDISRXDASAENCRPT",
#if RU_INCLUDE_DESC
    "",
    "Disable DA/SA downstream decryption : 0 - Normal operation; 1 -"
    "Disable DA/SA decryption.",
#endif
    XIF_CTL_CFGDISRXDASAENCRPT_FIELD_MASK,
    0,
    XIF_CTL_CFGDISRXDASAENCRPT_FIELD_WIDTH,
    XIF_CTL_CFGDISRXDASAENCRPT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_RXENCRYPTMODE
 ******************************************************************************/
const ru_field_rec XIF_CTL_RXENCRYPTMODE_FIELD =
{
    "RXENCRYPTMODE",
#if RU_INCLUDE_DESC
    "",
    "Downstream receive security mode : 0 - Zero overhead; 2 - 802.1ae; 3"
    "- 3Churn.",
#endif
    XIF_CTL_RXENCRYPTMODE_FIELD_MASK,
    0,
    XIF_CTL_RXENCRYPTMODE_FIELD_WIDTH,
    XIF_CTL_RXENCRYPTMODE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_TXENCRYPTEN
 ******************************************************************************/
const ru_field_rec XIF_CTL_TXENCRYPTEN_FIELD =
{
    "TXENCRYPTEN",
#if RU_INCLUDE_DESC
    "",
    "Global upstream transmit encryption enable : 0 - Normal operation;"
    "1 - Enable encryption.",
#endif
    XIF_CTL_TXENCRYPTEN_FIELD_MASK,
    0,
    XIF_CTL_TXENCRYPTEN_FIELD_WIDTH,
    XIF_CTL_TXENCRYPTEN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGDISTXDASAENCRPT
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGDISTXDASAENCRPT_FIELD =
{
    "CFGDISTXDASAENCRPT",
#if RU_INCLUDE_DESC
    "",
    "Disable DA/SA upstream encryption : 0 - Normal operation; 1 -"
    "Disable DA/SA encryption.",
#endif
    XIF_CTL_CFGDISTXDASAENCRPT_FIELD_MASK,
    0,
    XIF_CTL_CFGDISTXDASAENCRPT_FIELD_WIDTH,
    XIF_CTL_CFGDISTXDASAENCRPT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_TXENCRYPTMODE
 ******************************************************************************/
const ru_field_rec XIF_CTL_TXENCRYPTMODE_FIELD =
{
    "TXENCRYPTMODE",
#if RU_INCLUDE_DESC
    "",
    "Upstream transmit security mode : 0 - Zero overhead; 2 - 802.1ae.",
#endif
    XIF_CTL_TXENCRYPTMODE_FIELD_MASK,
    0,
    XIF_CTL_TXENCRYPTMODE_FIELD_WIDTH,
    XIF_CTL_TXENCRYPTMODE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_CTL_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_CTL_RESERVED0_FIELD_MASK,
    0,
    XIF_CTL_RESERVED0_FIELD_WIDTH,
    XIF_CTL_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGLLIDMODEMSK
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGLLIDMODEMSK_FIELD =
{
    "CFGLLIDMODEMSK",
#if RU_INCLUDE_DESC
    "",
    "Masks MSB of 16 bit raw LLID for Index translation."
    "0: Don't mask, look at full 16 bits."
    "1: Mask bit[15], map based on [14:0].",
#endif
    XIF_CTL_CFGLLIDMODEMSK_FIELD_MASK,
    0,
    XIF_CTL_CFGLLIDMODEMSK_FIELD_WIDTH,
    XIF_CTL_CFGLLIDMODEMSK_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGXPNBADCRC32
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGXPNBADCRC32_FIELD =
{
    "CFGXPNBADCRC32",
#if RU_INCLUDE_DESC
    "",
    "Enable bad upstream FCS generation :  0 - Normal operation; 1 -"
    "Enable bad FCS generation of 0's.",
#endif
    XIF_CTL_CFGXPNBADCRC32_FIELD_MASK,
    0,
    XIF_CTL_CFGXPNBADCRC32_FIELD_WIDTH,
    XIF_CTL_CFGXPNBADCRC32_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGDISDISCINFO
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGDISDISCINFO_FIELD =
{
    "CFGDISDISCINFO",
#if RU_INCLUDE_DESC
    "",
    "Disable Discovery Info field : 0 - Normal operation; 1 - Disable"
    "DISCOVERY info.",
#endif
    XIF_CTL_CFGDISDISCINFO_FIELD_MASK,
    0,
    XIF_CTL_CFGDISDISCINFO_FIELD_WIDTH,
    XIF_CTL_CFGDISDISCINFO_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGPMCTX2RXLPBK
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGPMCTX2RXLPBK_FIELD =
{
    "CFGPMCTX2RXLPBK",
#if RU_INCLUDE_DESC
    "",
    "Enable PMC loopback : 0 - Normal operation; 1 - Loopback.  NOT"
    "APPLICABLE in ONU since Tx/Rx clocks are not the same clock.",
#endif
    XIF_CTL_CFGPMCTX2RXLPBK_FIELD_MASK,
    0,
    XIF_CTL_CFGPMCTX2RXLPBK_FIELD_WIDTH,
    XIF_CTL_CFGPMCTX2RXLPBK_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGPMCTXENCRC8BAD
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGPMCTXENCRC8BAD_FIELD =
{
    "CFGPMCTXENCRC8BAD",
#if RU_INCLUDE_DESC
    "",
    "Enable upstream bad CRC8 transmission : 0 - Normal operation; 1 -"
    "Enable bad CRC8 generation.",
#endif
    XIF_CTL_CFGPMCTXENCRC8BAD_FIELD_MASK,
    0,
    XIF_CTL_CFGPMCTXENCRC8BAD_FIELD_WIDTH,
    XIF_CTL_CFGPMCTXENCRC8BAD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGENP2P
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGENP2P_FIELD =
{
    "CFGENP2P",
#if RU_INCLUDE_DESC
    "",
    "Enable point-2-point mode for downstream and upstream :"
    "0 - PON mode. Upstream's preamble will be of type 0x55_55_d5_55."
    "Downstream expects the same preamble type else packet will be"
    "aborted. CRC8 checking is configurable by bit \"cfgPmcRxEnCrc8Chk\"."
    "1 - P2P mode.  Upstream's preamble will be of type 0x55_55_55_55."
    "Downstream expects the same preamble type else packet will be"
    "aborted.  CRC8 checking will be disabled.",
#endif
    XIF_CTL_CFGENP2P_FIELD_MASK,
    0,
    XIF_CTL_CFGENP2P_FIELD_WIDTH,
    XIF_CTL_CFGENP2P_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGLLIDPROMISCUOUSMODE
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGLLIDPROMISCUOUSMODE_FIELD =
{
    "CFGLLIDPROMISCUOUSMODE",
#if RU_INCLUDE_DESC
    "",
    "All unmapped LLIDs will be redirected and mapped to Index 0"
    "0: Unmapped LLIDs will appear to be unmapped to EPN;"
    "1: Unmapped LLIs will appear on Index 0 to EPN.\",",
#endif
    XIF_CTL_CFGLLIDPROMISCUOUSMODE_FIELD_MASK,
    0,
    XIF_CTL_CFGLLIDPROMISCUOUSMODE_FIELD_WIDTH,
    XIF_CTL_CFGLLIDPROMISCUOUSMODE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGENIDLEPKTSUP
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGENIDLEPKTSUP_FIELD =
{
    "CFGENIDLEPKTSUP",
#if RU_INCLUDE_DESC
    "",
    "Enable IDLE packet support to prevent upstream underrun.",
#endif
    XIF_CTL_CFGENIDLEPKTSUP_FIELD_MASK,
    0,
    XIF_CTL_CFGENIDLEPKTSUP_FIELD_WIDTH,
    XIF_CTL_CFGENIDLEPKTSUP_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGPMCRXENCRC8CHK
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGPMCRXENCRC8CHK_FIELD =
{
    "CFGPMCRXENCRC8CHK",
#if RU_INCLUDE_DESC
    "",
    "Enable PMC-RX checking of CRC8 : 0 - Disable; 1 - Enable.",
#endif
    XIF_CTL_CFGPMCRXENCRC8CHK_FIELD_MASK,
    0,
    XIF_CTL_CFGPMCRXENCRC8CHK_FIELD_WIDTH,
    XIF_CTL_CFGPMCRXENCRC8CHK_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGEN1STIDLEPKTCONVERT
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGEN1STIDLEPKTCONVERT_FIELD =
{
    "CFGEN1STIDLEPKTCONVERT",
#if RU_INCLUDE_DESC
    "",
    "Enable 1st IDLE packet in a burst to be converted to IDLEs.",
#endif
    XIF_CTL_CFGEN1STIDLEPKTCONVERT_FIELD_MASK,
    0,
    XIF_CTL_CFGEN1STIDLEPKTCONVERT_FIELD_WIDTH,
    XIF_CTL_CFGEN1STIDLEPKTCONVERT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGFECEN
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGFECEN_FIELD =
{
    "CFGFECEN",
#if RU_INCLUDE_DESC
    "",
    "Enable upstream FEC : 0 - no FEC.  1 - FEC.",
#endif
    XIF_CTL_CFGFECEN_FIELD_MASK,
    0,
    XIF_CTL_CFGFECEN_FIELD_WIDTH,
    XIF_CTL_CFGFECEN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGLEGACYRCVTSUPD
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGLEGACYRCVTSUPD_FIELD =
{
    "CFGLEGACYRCVTSUPD",
#if RU_INCLUDE_DESC
    "",
    "Enable legacy receive timestamp update.",
#endif
    XIF_CTL_CFGLEGACYRCVTSUPD_FIELD_MASK,
    0,
    XIF_CTL_CFGLEGACYRCVTSUPD_FIELD_WIDTH,
    XIF_CTL_CFGLEGACYRCVTSUPD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGXPNENCRCPASSTHRU
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGXPNENCRCPASSTHRU_FIELD =
{
    "CFGXPNENCRCPASSTHRU",
#if RU_INCLUDE_DESC
    "",
    "Enable FCS pass through : 0 - Modify packet's FCS; 1 - Pass through"
    "with no FCS modification. Feature is only supported in A0.",
#endif
    XIF_CTL_CFGXPNENCRCPASSTHRU_FIELD_MASK,
    0,
    XIF_CTL_CFGXPNENCRCPASSTHRU_FIELD_WIDTH,
    XIF_CTL_CFGXPNENCRCPASSTHRU_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGXPNDISTIMESTAMPMOD
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGXPNDISTIMESTAMPMOD_FIELD =
{
    "CFGXPNDISTIMESTAMPMOD",
#if RU_INCLUDE_DESC
    "",
    "Debug function to disable timestamp modification of MPCP packet. 0 -"
    "Normal Operation; 1 - Disable timestamp modification.",
#endif
    XIF_CTL_CFGXPNDISTIMESTAMPMOD_FIELD_MASK,
    0,
    XIF_CTL_CFGXPNDISTIMESTAMPMOD_FIELD_WIDTH,
    XIF_CTL_CFGXPNDISTIMESTAMPMOD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_XIFNOTRDY
 ******************************************************************************/
const ru_field_rec XIF_CTL_XIFNOTRDY_FIELD =
{
    "XIFNOTRDY",
#if RU_INCLUDE_DESC
    "",
    "XIF not ready indication due to RAM init :  1 - Not ready. 0 - Ready"
    "for operation.  All RAMs are initialized to 0's.",
#endif
    XIF_CTL_XIFNOTRDY_FIELD_MASK,
    0,
    XIF_CTL_XIFNOTRDY_FIELD_WIDTH,
    XIF_CTL_XIFNOTRDY_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_XIFDTPORTRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_XIFDTPORTRSTN_FIELD =
{
    "XIFDTPORTRSTN",
#if RU_INCLUDE_DESC
    "",
    "Active low reset for RAM data port. RAM init starts upon"
    "deassertion.  Bit xifNotRdy is to be polled for completion",
#endif
    XIF_CTL_XIFDTPORTRSTN_FIELD_MASK,
    0,
    XIF_CTL_XIFDTPORTRSTN_FIELD_WIDTH,
    XIF_CTL_XIFDTPORTRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_XPNTXRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_XPNTXRSTN_FIELD =
{
    "XPNTXRSTN",
#if RU_INCLUDE_DESC
    "",
    "Reset control for transmit XPN module.0 - Reset. 1 - Normal"
    "Operation.",
#endif
    XIF_CTL_XPNTXRSTN_FIELD_MASK,
    0,
    XIF_CTL_XPNTXRSTN_FIELD_WIDTH,
    XIF_CTL_XPNTXRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_PMCTXRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_PMCTXRSTN_FIELD =
{
    "PMCTXRSTN",
#if RU_INCLUDE_DESC
    "",
    "Reset control for transmit PMC module.0 - Reset. 1 - Normal"
    "Operation.",
#endif
    XIF_CTL_PMCTXRSTN_FIELD_MASK,
    0,
    XIF_CTL_PMCTXRSTN_FIELD_WIDTH,
    XIF_CTL_PMCTXRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_SECTXRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_SECTXRSTN_FIELD =
{
    "SECTXRSTN",
#if RU_INCLUDE_DESC
    "",
    "Reset control for transmit security module. 0 - Reset. 1 - Normal"
    "Operation.",
#endif
    XIF_CTL_SECTXRSTN_FIELD_MASK,
    0,
    XIF_CTL_SECTXRSTN_FIELD_WIDTH,
    XIF_CTL_SECTXRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGDISTXOAMENCRPT
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGDISTXOAMENCRPT_FIELD =
{
    "CFGDISTXOAMENCRPT",
#if RU_INCLUDE_DESC
    "",
    "Disable OAM encryption. 0 - Normal Operation.  1 - Disable MPCP"
    "encryption.",
#endif
    XIF_CTL_CFGDISTXOAMENCRPT_FIELD_MASK,
    0,
    XIF_CTL_CFGDISTXOAMENCRPT_FIELD_WIDTH,
    XIF_CTL_CFGDISTXOAMENCRPT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_CFGDISTXMPCPENCRPT
 ******************************************************************************/
const ru_field_rec XIF_CTL_CFGDISTXMPCPENCRPT_FIELD =
{
    "CFGDISTXMPCPENCRPT",
#if RU_INCLUDE_DESC
    "",
    "Disable MPCP encryption. 0 - Normal Operation.  1 - Disable MPCP"
    "encryption.",
#endif
    XIF_CTL_CFGDISTXMPCPENCRPT_FIELD_MASK,
    0,
    XIF_CTL_CFGDISTXMPCPENCRPT_FIELD_WIDTH,
    XIF_CTL_CFGDISTXMPCPENCRPT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_PMCRXRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_PMCRXRSTN_FIELD =
{
    "PMCRXRSTN",
#if RU_INCLUDE_DESC
    "",
    "Reset control for receive PMC module.0 - Reset. 1 - Normal"
    "Operation.",
#endif
    XIF_CTL_PMCRXRSTN_FIELD_MASK,
    0,
    XIF_CTL_PMCRXRSTN_FIELD_WIDTH,
    XIF_CTL_PMCRXRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_SECRXRSTN
 ******************************************************************************/
const ru_field_rec XIF_CTL_SECRXRSTN_FIELD =
{
    "SECRXRSTN",
#if RU_INCLUDE_DESC
    "",
    "Reset control for receive security module. 0 - Reset. 1 - Normal"
    "Operation.",
#endif
    XIF_CTL_SECRXRSTN_FIELD_MASK,
    0,
    XIF_CTL_SECRXRSTN_FIELD_WIDTH,
    XIF_CTL_SECRXRSTN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_STATUS_RESERVED0_FIELD_MASK,
    0,
    XIF_INT_STATUS_RESERVED0_FIELD_WIDTH,
    XIF_INT_STATUS_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_TS1588PKTABORT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_TS1588PKTABORT_FIELD =
{
    "TS1588PKTABORT",
#if RU_INCLUDE_DESC
    "",
    "Indicated 1588 timestamp packet was aborted due to illegal checksum"
    "or timestamp offsets.",
#endif
    XIF_INT_STATUS_TS1588PKTABORT_FIELD_MASK,
    0,
    XIF_INT_STATUS_TS1588PKTABORT_FIELD_WIDTH,
    XIF_INT_STATUS_TS1588PKTABORT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_TS1588TWOSTEPFF
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_TS1588TWOSTEPFF_FIELD =
{
    "TS1588TWOSTEPFF",
#if RU_INCLUDE_DESC
    "",
    "Indicates timestamp in two step FIFO is available for reading. The"
    "48-bits value is provided by registers"
    "XIF_DN_1588_TWO_STEP_TS_VALUE_HI/XIF_DN_1588_TWO_STEP_TS_VALUE_LO.",
#endif
    XIF_INT_STATUS_TS1588TWOSTEPFF_FIELD_MASK,
    0,
    XIF_INT_STATUS_TS1588TWOSTEPFF_FIELD_WIDTH,
    XIF_INT_STATUS_TS1588TWOSTEPFF_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_STATUS_RESERVED1_FIELD_MASK,
    0,
    XIF_INT_STATUS_RESERVED1_FIELD_WIDTH,
    XIF_INT_STATUS_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT_FIELD =
{
    "SECRXRPLYPRTCTABRTINT",
#if RU_INCLUDE_DESC
    "",
    "[NON-FATAL] Applicable only in 802.1ae security.  Indicates the"
    "received packet was aborted due to replay protection.",
#endif
    XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT_FIELD_WIDTH,
    XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_SECTXPKTNUMMAXINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_SECTXPKTNUMMAXINT_FIELD =
{
    "SECTXPKTNUMMAXINT",
#if RU_INCLUDE_DESC
    "",
    "[NON-FATAL] Applicable only in 802.1ae security.  Indicates the"
    "transmit packet number exceeded the maxifum threshold and about to"
    "overflow.  Threshold is programmed in register XIF_AE_PKTNUM_THRESH.",
#endif
    XIF_INT_STATUS_SECTXPKTNUMMAXINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_SECTXPKTNUMMAXINT_FIELD_WIDTH,
    XIF_INT_STATUS_SECTXPKTNUMMAXINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_RESERVED2
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_RESERVED2_FIELD =
{
    "RESERVED2",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_STATUS_RESERVED2_FIELD_MASK,
    0,
    XIF_INT_STATUS_RESERVED2_FIELD_WIDTH,
    XIF_INT_STATUS_RESERVED2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_TSFULLUPDINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_TSFULLUPDINT_FIELD =
{
    "TSFULLUPDINT",
#if RU_INCLUDE_DESC
    "",
    "Indicates full MPCP timestamp update due to value greater than"
    "threshold programmed into cfgTsFullUpdThr in register XIF_TS_UPDATE.",
#endif
    XIF_INT_STATUS_TSFULLUPDINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_TSFULLUPDINT_FIELD_WIDTH,
    XIF_INT_STATUS_TSFULLUPDINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_TXHANGINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_TXHANGINT_FIELD =
{
    "TXHANGINT",
#if RU_INCLUDE_DESC
    "",
    "[FATAL] Indicates request to transmit never got serviced.",
#endif
    XIF_INT_STATUS_TXHANGINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_TXHANGINT_FIELD_WIDTH,
    XIF_INT_STATUS_TXHANGINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_NEGTIMEINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_NEGTIMEINT_FIELD =
{
    "NEGTIMEINT",
#if RU_INCLUDE_DESC
    "",
    "[FATAL] Indicates scheduled transmit time is negative, relative to"
    "the current MPCP time.",
#endif
    XIF_INT_STATUS_NEGTIMEINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_NEGTIMEINT_FIELD_WIDTH,
    XIF_INT_STATUS_NEGTIMEINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_PMCTSJTTRINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_PMCTSJTTRINT_FIELD =
{
    "PMCTSJTTRINT",
#if RU_INCLUDE_DESC
    "",
    "[NON-FATAL] Indicates the magnitude of the MPCP timestamp updated"
    "exceeded the value programmed into XIF_TS_JITTER_THRESH register.",
#endif
    XIF_INT_STATUS_PMCTSJTTRINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_PMCTSJTTRINT_FIELD_WIDTH,
    XIF_INT_STATUS_PMCTSJTTRINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_STATUS_SECRXOUTFFOVRFLWINT
 ******************************************************************************/
const ru_field_rec XIF_INT_STATUS_SECRXOUTFFOVRFLWINT_FIELD =
{
    "SECRXOUTFFOVRFLWINT",
#if RU_INCLUDE_DESC
    "",
    "[FATAL] Indicates SEC-RX output FIFO overflowed.",
#endif
    XIF_INT_STATUS_SECRXOUTFFOVRFLWINT_FIELD_MASK,
    0,
    XIF_INT_STATUS_SECRXOUTFFOVRFLWINT_FIELD_WIDTH,
    XIF_INT_STATUS_SECRXOUTFFOVRFLWINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_MASK_RESERVED0_FIELD_MASK,
    0,
    XIF_INT_MASK_RESERVED0_FIELD_WIDTH,
    XIF_INT_MASK_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKTS1588PKTABORT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKTS1588PKTABORT_FIELD =
{
    "MSKTS1588PKTABORT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKTS1588PKTABORT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKTS1588PKTABORT_FIELD_WIDTH,
    XIF_INT_MASK_MSKTS1588PKTABORT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKTS1588TWOSTEPFF
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKTS1588TWOSTEPFF_FIELD =
{
    "MSKTS1588TWOSTEPFF",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKTS1588TWOSTEPFF_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKTS1588TWOSTEPFF_FIELD_WIDTH,
    XIF_INT_MASK_MSKTS1588TWOSTEPFF_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_MASK_RESERVED1_FIELD_MASK,
    0,
    XIF_INT_MASK_RESERVED1_FIELD_WIDTH,
    XIF_INT_MASK_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT_FIELD =
{
    "MSKSECRXREPLAYPROTCTABORT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT_FIELD_WIDTH,
    XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKPKTNUMTHRESHINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKPKTNUMTHRESHINT_FIELD =
{
    "MSKPKTNUMTHRESHINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKPKTNUMTHRESHINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKPKTNUMTHRESHINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKPKTNUMTHRESHINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_RESERVED2
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_RESERVED2_FIELD =
{
    "RESERVED2",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_INT_MASK_RESERVED2_FIELD_MASK,
    0,
    XIF_INT_MASK_RESERVED2_FIELD_WIDTH,
    XIF_INT_MASK_RESERVED2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKTSFULLUPDINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKTSFULLUPDINT_FIELD =
{
    "MSKTSFULLUPDINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKTSFULLUPDINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKTSFULLUPDINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKTSFULLUPDINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKTXHANGINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKTXHANGINT_FIELD =
{
    "MSKTXHANGINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKTXHANGINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKTXHANGINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKTXHANGINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKNEGTIMEINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKNEGTIMEINT_FIELD =
{
    "MSKNEGTIMEINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKNEGTIMEINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKNEGTIMEINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKNEGTIMEINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKPMCTSJTTRINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKPMCTSJTTRINT_FIELD =
{
    "MSKPMCTSJTTRINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKPMCTSJTTRINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKPMCTSJTTRINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKPMCTSJTTRINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_INT_MASK_MSKSECRXOUTFFINT
 ******************************************************************************/
const ru_field_rec XIF_INT_MASK_MSKSECRXOUTFFINT_FIELD =
{
    "MSKSECRXOUTFFINT",
#if RU_INCLUDE_DESC
    "",
    "Interrupt mask, active low.",
#endif
    XIF_INT_MASK_MSKSECRXOUTFFINT_FIELD_MASK,
    0,
    XIF_INT_MASK_MSKSECRXOUTFFINT_FIELD_WIDTH,
    XIF_INT_MASK_MSKSECRXOUTFFINT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_COMMAND_DATAPORTBUSY
 ******************************************************************************/
const ru_field_rec XIF_PORT_COMMAND_DATAPORTBUSY_FIELD =
{
    "DATAPORTBUSY",
#if RU_INCLUDE_DESC
    "",
    "Indicates dataPort access is in progress.  Bit must be cleared"
    "before the next dataPort access can be issued.",
#endif
    XIF_PORT_COMMAND_DATAPORTBUSY_FIELD_MASK,
    0,
    XIF_PORT_COMMAND_DATAPORTBUSY_FIELD_WIDTH,
    XIF_PORT_COMMAND_DATAPORTBUSY_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_COMMAND_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_PORT_COMMAND_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_PORT_COMMAND_RESERVED0_FIELD_MASK,
    0,
    XIF_PORT_COMMAND_RESERVED0_FIELD_WIDTH,
    XIF_PORT_COMMAND_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_COMMAND_PORTSELECT
 ******************************************************************************/
const ru_field_rec XIF_PORT_COMMAND_PORTSELECT_FIELD =
{
    "PORTSELECT",
#if RU_INCLUDE_DESC
    "",
    "Selects the RAM for access :"
    "0 - RX 128-bits key."
    "Even/odd keys have to be written to support key swich.  For LLID"
    "X, the corresponding"
    "RAM offset for even key is (X*2), and odd key is (X*2)+1."
    ""
    "1 - RX 256-bits key"
    "Even/odd keys have to be written to support key swich.  For LLID"
    "X, the corresponding"
    "RAM offset for even key is (X*4), and odd key is (X*4)+2.  The"
    "number of supported LLID"
    "is reduced by half."
    ""
    "2 - TX 128-bits key"
    "For LLID X, the corresponding RAM offset for key is X."
    ""
    "3 - TX 256-bits key"
    "For LLID X, the corresponding RAM offset for key is (X*2).  The"
    "number of supported"
    "LLID is reduced by half."
    ""
    "4 - RX IV"
    ""
    "5 - TX IV",
#endif
    XIF_PORT_COMMAND_PORTSELECT_FIELD_MASK,
    0,
    XIF_PORT_COMMAND_PORTSELECT_FIELD_WIDTH,
    XIF_PORT_COMMAND_PORTSELECT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_COMMAND_PORTOPCODE
 ******************************************************************************/
const ru_field_rec XIF_PORT_COMMAND_PORTOPCODE_FIELD =
{
    "PORTOPCODE",
#if RU_INCLUDE_DESC
    "",
    "Indicates write access : 0 - read; 1 - write.",
#endif
    XIF_PORT_COMMAND_PORTOPCODE_FIELD_MASK,
    0,
    XIF_PORT_COMMAND_PORTOPCODE_FIELD_WIDTH,
    XIF_PORT_COMMAND_PORTOPCODE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_COMMAND_PORTADDRESS
 ******************************************************************************/
const ru_field_rec XIF_PORT_COMMAND_PORTADDRESS_FIELD =
{
    "PORTADDRESS",
#if RU_INCLUDE_DESC
    "",
    "Specifies the RAM address for access.",
#endif
    XIF_PORT_COMMAND_PORTADDRESS_FIELD_MASK,
    0,
    XIF_PORT_COMMAND_PORTADDRESS_FIELD_WIDTH,
    XIF_PORT_COMMAND_PORTADDRESS_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_0_PORTDATA0
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_0_PORTDATA0_FIELD =
{
    "PORTDATA0",
#if RU_INCLUDE_DESC
    "",
    "TX/RX SEC key RAM, key[31:0].",
#endif
    XIF_PORT_DATA_0_PORTDATA0_FIELD_MASK,
    0,
    XIF_PORT_DATA_0_PORTDATA0_FIELD_WIDTH,
    XIF_PORT_DATA_0_PORTDATA0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_1_PORTDATA1
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_1_PORTDATA1_FIELD =
{
    "PORTDATA1",
#if RU_INCLUDE_DESC
    "",
    "TX/RX SEC key RAM, key[63:32]",
#endif
    XIF_PORT_DATA_1_PORTDATA1_FIELD_MASK,
    0,
    XIF_PORT_DATA_1_PORTDATA1_FIELD_WIDTH,
    XIF_PORT_DATA_1_PORTDATA1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_2_PORTDATA2
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_2_PORTDATA2_FIELD =
{
    "PORTDATA2",
#if RU_INCLUDE_DESC
    "",
    "TX/RX SEC key RAM, key[95:64]",
#endif
    XIF_PORT_DATA_2_PORTDATA2_FIELD_MASK,
    0,
    XIF_PORT_DATA_2_PORTDATA2_FIELD_WIDTH,
    XIF_PORT_DATA_2_PORTDATA2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_3_PORTDATA3
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_3_PORTDATA3_FIELD =
{
    "PORTDATA3",
#if RU_INCLUDE_DESC
    "",
    "TX/RX SEC key RAM, key[127:96]",
#endif
    XIF_PORT_DATA_3_PORTDATA3_FIELD_MASK,
    0,
    XIF_PORT_DATA_3_PORTDATA3_FIELD_WIDTH,
    XIF_PORT_DATA_3_PORTDATA3_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_4_PORTDATA4
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_4_PORTDATA4_FIELD =
{
    "PORTDATA4",
#if RU_INCLUDE_DESC
    "",
    "RX security"
    "portData4 - implicit SCI[31:0]."
    ""
    "TX security"
    "portData4 - explicit SCI[31:0].",
#endif
    XIF_PORT_DATA_4_PORTDATA4_FIELD_MASK,
    0,
    XIF_PORT_DATA_4_PORTDATA4_FIELD_WIDTH,
    XIF_PORT_DATA_4_PORTDATA4_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_5_PORTDATA5
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_5_PORTDATA5_FIELD =
{
    "PORTDATA5",
#if RU_INCLUDE_DESC
    "",
    "RX security"
    "portData5 - implicit SCI[63:32]."
    ""
    "TX security"
    "portData5 - explicit SCI[63:32].",
#endif
    XIF_PORT_DATA_5_PORTDATA5_FIELD_MASK,
    0,
    XIF_PORT_DATA_5_PORTDATA5_FIELD_WIDTH,
    XIF_PORT_DATA_5_PORTDATA5_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_6_PORTDATA6
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_6_PORTDATA6_FIELD =
{
    "PORTDATA6",
#if RU_INCLUDE_DESC
    "",
    "Initial packet number, [31:0].",
#endif
    XIF_PORT_DATA_6_PORTDATA6_FIELD_MASK,
    0,
    XIF_PORT_DATA_6_PORTDATA6_FIELD_WIDTH,
    XIF_PORT_DATA_6_PORTDATA6_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_7_PORTDATA7
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_7_PORTDATA7_FIELD =
{
    "PORTDATA7",
#if RU_INCLUDE_DESC
    "",
    "RX security"
    "portData7[0] - encryption enable."
    ""
    "TX security"
    "portData7[7:0] - TCI[7:0] for 802.1ae security."
    "TCI[1:0] - key number.  In PON mode, only TCI[0] is utilized for"
    "even/odd key."
    "Must match key number specified in portData7[8].  In"
    "P2P mode, TCI[1:0]"
    "specifies 1 of 4 keys."
    "TCI[3:2] - encryption mode bits : TCI[3] - E encryption bit;"
    "TCI[2] - C change bit."
    "- E=0; C=0 : Authentication only.  Data is not"
    "encryption."
    "Only ICV is inserted at the end of packet."
    "- E=0; C=1 : Reserved."
    "- E=1; C=0 : Reserved."
    "- E=1; C=1 : Encryption/authentication.  Data is"
    "encrypted and ICV inserted."
    "TCI[4]   - single copy broadcast. Set to 0."
    "TCI[5]   - SC specifies whether SecTag's SCI is"
    "implicit(0)/explicit(1)."
    "TCI[6]   - ES end station byte.  Set to 0."
    "TCI[7]   - V version number.  Set to 0."
    ""
    "portData7[8] - key number"
    "portData7[9] - encryption enable.",
#endif
    XIF_PORT_DATA_7_PORTDATA7_FIELD_MASK,
    0,
    XIF_PORT_DATA_7_PORTDATA7_FIELD_WIDTH,
    XIF_PORT_DATA_7_PORTDATA7_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MACSEC_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_MACSEC_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_MACSEC_RESERVED0_FIELD_MASK,
    0,
    XIF_MACSEC_RESERVED0_FIELD_WIDTH,
    XIF_MACSEC_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MACSEC_CFGMACSECETHERTYPE
 ******************************************************************************/
const ru_field_rec XIF_MACSEC_CFGMACSECETHERTYPE_FIELD =
{
    "CFGMACSECETHERTYPE",
#if RU_INCLUDE_DESC
    "",
    "Defines the MacSec Ethertype.",
#endif
    XIF_MACSEC_CFGMACSECETHERTYPE_FIELD_MASK,
    0,
    XIF_MACSEC_CFGMACSECETHERTYPE_FIELD_WIDTH,
    XIF_MACSEC_CFGMACSECETHERTYPE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_XPN_XMT_OFFSET_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_XPN_XMT_OFFSET_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_XPN_XMT_OFFSET_RESERVED0_FIELD_MASK,
    0,
    XIF_XPN_XMT_OFFSET_RESERVED0_FIELD_WIDTH,
    XIF_XPN_XMT_OFFSET_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET
 ******************************************************************************/
const ru_field_rec XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET_FIELD =
{
    "CFGXPNXMTOFFSET",
#if RU_INCLUDE_DESC
    "",
    "Specifies the transmit offset, to account for the delay through"
    "SEC-TX and PMC-TX.",
#endif
    XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET_FIELD_MASK,
    0,
    XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET_FIELD_WIDTH,
    XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET
 ******************************************************************************/
const ru_field_rec XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET_FIELD =
{
    "CFGXPNMPCPTSOFFSET",
#if RU_INCLUDE_DESC
    "",
    "Debug funtion to add the offset to the regenerated MPCP's timestamp.",
#endif
    XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET_FIELD_MASK,
    0,
    XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET_FIELD_WIDTH,
    XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_JITTER_THRESH_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_TS_JITTER_THRESH_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_TS_JITTER_THRESH_RESERVED0_FIELD_MASK,
    0,
    XIF_TS_JITTER_THRESH_RESERVED0_FIELD_WIDTH,
    XIF_TS_JITTER_THRESH_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH
 ******************************************************************************/
const ru_field_rec XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH_FIELD =
{
    "CFGTSJTTRTHRESH",
#if RU_INCLUDE_DESC
    "",
    "Defines the value to generate jitter interrupt when timestamp update"
    "exceeds this threshold.",
#endif
    XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH_FIELD_MASK,
    0,
    XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH_FIELD_WIDTH,
    XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_UPDATE_CFGTSFULLUPDTHR
 ******************************************************************************/
const ru_field_rec XIF_TS_UPDATE_CFGTSFULLUPDTHR_FIELD =
{
    "CFGTSFULLUPDTHR",
#if RU_INCLUDE_DESC
    "",
    "Defines the full update threshold.  Timestamp update is done in 1 TQ"
    "increment.  If update is equal to or greater than threshold, full"
    "update will result.",
#endif
    XIF_TS_UPDATE_CFGTSFULLUPDTHR_FIELD_MASK,
    0,
    XIF_TS_UPDATE_CFGTSFULLUPDTHR_FIELD_WIDTH,
    XIF_TS_UPDATE_CFGTSFULLUPDTHR_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_UPDATE_CFGENAUTOTSUPD
 ******************************************************************************/
const ru_field_rec XIF_TS_UPDATE_CFGENAUTOTSUPD_FIELD =
{
    "CFGENAUTOTSUPD",
#if RU_INCLUDE_DESC
    "",
    "Provides auto timestamp update for debugging.  This is to test for"
    "timestamp jitter.",
#endif
    XIF_TS_UPDATE_CFGENAUTOTSUPD_FIELD_MASK,
    0,
    XIF_TS_UPDATE_CFGENAUTOTSUPD_FIELD_WIDTH,
    XIF_TS_UPDATE_CFGENAUTOTSUPD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_UPDATE_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_TS_UPDATE_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_TS_UPDATE_RESERVED0_FIELD_MASK,
    0,
    XIF_TS_UPDATE_RESERVED0_FIELD_WIDTH,
    XIF_TS_UPDATE_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TS_UPDATE_CFGTSUPDPER
 ******************************************************************************/
const ru_field_rec XIF_TS_UPDATE_CFGTSUPDPER_FIELD =
{
    "CFGTSUPDPER",
#if RU_INCLUDE_DESC
    "",
    "Defines the period between MPCP timestamp update.",
#endif
    XIF_TS_UPDATE_CFGTSUPDPER_FIELD_MASK,
    0,
    XIF_TS_UPDATE_CFGTSUPDPER_FIELD_WIDTH,
    XIF_TS_UPDATE_CFGTSUPDPER_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_GNT_OVERHEAD_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_GNT_OVERHEAD_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_GNT_OVERHEAD_RESERVED0_FIELD_MASK,
    0,
    XIF_GNT_OVERHEAD_RESERVED0_FIELD_WIDTH,
    XIF_GNT_OVERHEAD_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_GNT_OVERHEAD_CFGGNTOH
 ******************************************************************************/
const ru_field_rec XIF_GNT_OVERHEAD_CFGGNTOH_FIELD =
{
    "CFGGNTOH",
#if RU_INCLUDE_DESC
    "",
    "Burst overhead of laser_on + sync_time.",
#endif
    XIF_GNT_OVERHEAD_CFGGNTOH_FIELD_MASK,
    0,
    XIF_GNT_OVERHEAD_CFGGNTOH_FIELD_WIDTH,
    XIF_GNT_OVERHEAD_CFGGNTOH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_DISCOVER_OVERHEAD_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_DISCOVER_OVERHEAD_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_DISCOVER_OVERHEAD_RESERVED0_FIELD_MASK,
    0,
    XIF_DISCOVER_OVERHEAD_RESERVED0_FIELD_WIDTH,
    XIF_DISCOVER_OVERHEAD_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_DISCOVER_OVERHEAD_CFGDISCOH
 ******************************************************************************/
const ru_field_rec XIF_DISCOVER_OVERHEAD_CFGDISCOH_FIELD =
{
    "CFGDISCOH",
#if RU_INCLUDE_DESC
    "",
    "Burst overhead of laser_on + sync_time.",
#endif
    XIF_DISCOVER_OVERHEAD_CFGDISCOH_FIELD_MASK,
    0,
    XIF_DISCOVER_OVERHEAD_CFGDISCOH_FIELD_WIDTH,
    XIF_DISCOVER_OVERHEAD_CFGDISCOH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_DISCOVER_INFO_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_DISCOVER_INFO_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_DISCOVER_INFO_RESERVED0_FIELD_MASK,
    0,
    XIF_DISCOVER_INFO_RESERVED0_FIELD_WIDTH,
    XIF_DISCOVER_INFO_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_DISCOVER_INFO_CFGDISCINFOFLD
 ******************************************************************************/
const ru_field_rec XIF_DISCOVER_INFO_CFGDISCINFOFLD_FIELD =
{
    "CFGDISCINFOFLD",
#if RU_INCLUDE_DESC
    "",
    "Defines the discovery info field : 0 - upstream 1G; 1 - upstream"
    "10G; 4 - open 1G window; 5 - open 10G window.",
#endif
    XIF_DISCOVER_INFO_CFGDISCINFOFLD_FIELD_MASK,
    0,
    XIF_DISCOVER_INFO_CFGDISCINFOFLD_FIELD_WIDTH,
    XIF_DISCOVER_INFO_CFGDISCINFOFLD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_XPN_OVERSIZE_THRESH_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_XPN_OVERSIZE_THRESH_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_XPN_OVERSIZE_THRESH_RESERVED0_FIELD_MASK,
    0,
    XIF_XPN_OVERSIZE_THRESH_RESERVED0_FIELD_WIDTH,
    XIF_XPN_OVERSIZE_THRESH_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH
 ******************************************************************************/
const ru_field_rec XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH_FIELD =
{
    "CFGXPNOVRSZTHRESH",
#if RU_INCLUDE_DESC
    "",
    "Increments oversize stat when packet's size is greater than or equal"
    "to threshold.",
#endif
    XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH_FIELD_MASK,
    0,
    XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH_FIELD_WIDTH,
    XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SECRX_KEYNUM_KEYSTATRX
 ******************************************************************************/
const ru_field_rec XIF_SECRX_KEYNUM_KEYSTATRX_FIELD =
{
    "KEYSTATRX",
#if RU_INCLUDE_DESC
    "",
    "This register is a read-only status of the last downstream key"
    "selected on the 32 downstream LLIDs. This register allows for"
    "software to detect a key switchover or to determine the current"
    "downstream key."
    ""
    "In 802.1ae, it provides the lower bif of TCI's AN[1:0].  The mapping"
    "to even/odd key, based on AN[1:0], is provided by cfgKeyNum_4_AN_0 -"
    "cfgKeyNum_4_AN_3.",
#endif
    XIF_SECRX_KEYNUM_KEYSTATRX_FIELD_MASK,
    0,
    XIF_SECRX_KEYNUM_KEYSTATRX_FIELD_WIDTH,
    XIF_SECRX_KEYNUM_KEYSTATRX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_SECRX_ENCRYPT_ENCRSTATRX
 ******************************************************************************/
const ru_field_rec XIF_SECRX_ENCRYPT_ENCRSTATRX_FIELD =
{
    "ENCRSTATRX",
#if RU_INCLUDE_DESC
    "",
    "Encryption stat.",
#endif
    XIF_SECRX_ENCRYPT_ENCRSTATRX_FIELD_MASK,
    0,
    XIF_SECRX_ENCRYPT_ENCRSTATRX_FIELD_WIDTH,
    XIF_SECRX_ENCRYPT_ENCRSTATRX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT_FIELD =
{
    "PMCRXFRAMECNT",
#if RU_INCLUDE_DESC
    "",
    "Frame count stat.  Peg at max value.",
#endif
    XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT_FIELD_MASK,
    0,
    XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT_FIELD_WIDTH,
    XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT_FIELD =
{
    "PMCRXBYTECNT",
#if RU_INCLUDE_DESC
    "",
    "Byte count stat.  Peg at max value.",
#endif
    XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT_FIELD_MASK,
    0,
    XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT_FIELD_WIDTH,
    XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT_FIELD =
{
    "PMCRXRUNTCNT",
#if RU_INCLUDE_DESC
    "",
    "Runt count stat.  Peg at max value.",
#endif
    XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT_FIELD_MASK,
    0,
    XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT_FIELD_WIDTH,
    XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT_FIELD =
{
    "PMCRXCWERRCNT",
#if RU_INCLUDE_DESC
    "",
    "Codeword error stat.  Peg at max value.",
#endif
    XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT_FIELD_MASK,
    0,
    XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT_FIELD_WIDTH,
    XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT_FIELD =
{
    "PMCRXCRC8ERRCNT",
#if RU_INCLUDE_DESC
    "",
    "CRC-8 error stat.  Peg at max value.",
#endif
    XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT_FIELD_MASK,
    0,
    XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT_FIELD_WIDTH,
    XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT_FIELD =
{
    "XPNDTFRAMECNT",
#if RU_INCLUDE_DESC
    "",
    "Data frame count stat, excluding MPCP/OAM.  Peg at max.",
#endif
    XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT_FIELD_MASK,
    0,
    XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT_FIELD_WIDTH,
    XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT_FIELD =
{
    "XPNDTBYTECNT",
#if RU_INCLUDE_DESC
    "",
    "Data byte count stat, excluding MPCP/OAM.  Peg at max.",
#endif
    XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT_FIELD_MASK,
    0,
    XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT_FIELD_WIDTH,
    XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT_FIELD =
{
    "XPNMPCPFRAMECNT",
#if RU_INCLUDE_DESC
    "",
    "MPCP frame count stat.  Peg at max.",
#endif
    XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT_FIELD_MASK,
    0,
    XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT_FIELD_WIDTH,
    XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT_FIELD =
{
    "XPNOAMFRAMECNT",
#if RU_INCLUDE_DESC
    "",
    "MPCP frame count stat.  Peg at max.",
#endif
    XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT_FIELD_MASK,
    0,
    XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT_FIELD_WIDTH,
    XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT_FIELD =
{
    "XPNOAMBYTECNT",
#if RU_INCLUDE_DESC
    "",
    "OAM byte count stat.  Peg at max.",
#endif
    XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT_FIELD_MASK,
    0,
    XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT_FIELD_WIDTH,
    XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT_FIELD =
{
    "XPNDTOVERSIZECNT",
#if RU_INCLUDE_DESC
    "",
    "Oversize frame, as defined by XIF_XPN_OVERSIZE_THRESH register.",
#endif
    XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT_FIELD_MASK,
    0,
    XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT_FIELD_WIDTH,
    XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT
 ******************************************************************************/
const ru_field_rec XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT_FIELD =
{
    "SECRXABORTFRMCNT",
#if RU_INCLUDE_DESC
    "",
    "Abort frame stat.  Peg at max.",
#endif
    XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT_FIELD_MASK,
    0,
    XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT_FIELD_WIDTH,
    XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0_FIELD_MASK,
    0,
    XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0_FIELD_WIDTH,
    XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT
 ******************************************************************************/
const ru_field_rec XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT_FIELD =
{
    "PMCTXNEGEVENTCNT",
#if RU_INCLUDE_DESC
    "",
    "Negative event count stat.  Peg at max value.",
#endif
    XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT_FIELD_MASK,
    0,
    XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT_FIELD_WIDTH,
    XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_IDLE_PKT_CNT_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_XPN_IDLE_PKT_CNT_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_XPN_IDLE_PKT_CNT_RESERVED0_FIELD_MASK,
    0,
    XIF_XPN_IDLE_PKT_CNT_RESERVED0_FIELD_WIDTH,
    XIF_XPN_IDLE_PKT_CNT_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT
 ******************************************************************************/
const ru_field_rec XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT_FIELD =
{
    "XPNIDLEFRAMECNT",
#if RU_INCLUDE_DESC
    "",
    "Idle packet count stat.  Peg at max value.",
#endif
    XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT_FIELD_MASK,
    0,
    XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT_FIELD_WIDTH,
    XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_LLID_0_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_0_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_0_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_0_RESERVED0_FIELD_WIDTH,
    XIF_LLID_0_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_0_CFGONULLID0
 ******************************************************************************/
const ru_field_rec XIF_LLID_0_CFGONULLID0_FIELD =
{
    "CFGONULLID0",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 0 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 0.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_0_CFGONULLID0_FIELD_MASK,
    0,
    XIF_LLID_0_CFGONULLID0_FIELD_WIDTH,
    XIF_LLID_0_CFGONULLID0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_1_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_1_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_1_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_1_RESERVED0_FIELD_WIDTH,
    XIF_LLID_1_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_1_CFGONULLID1
 ******************************************************************************/
const ru_field_rec XIF_LLID_1_CFGONULLID1_FIELD =
{
    "CFGONULLID1",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 1 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 1.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_1_CFGONULLID1_FIELD_MASK,
    0,
    XIF_LLID_1_CFGONULLID1_FIELD_WIDTH,
    XIF_LLID_1_CFGONULLID1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_2_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_2_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_2_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_2_RESERVED0_FIELD_WIDTH,
    XIF_LLID_2_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_2_CFGONULLID2
 ******************************************************************************/
const ru_field_rec XIF_LLID_2_CFGONULLID2_FIELD =
{
    "CFGONULLID2",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 2 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 2.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_2_CFGONULLID2_FIELD_MASK,
    0,
    XIF_LLID_2_CFGONULLID2_FIELD_WIDTH,
    XIF_LLID_2_CFGONULLID2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_3_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_3_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_3_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_3_RESERVED0_FIELD_WIDTH,
    XIF_LLID_3_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_3_CFGONULLID3
 ******************************************************************************/
const ru_field_rec XIF_LLID_3_CFGONULLID3_FIELD =
{
    "CFGONULLID3",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 3 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 3.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_3_CFGONULLID3_FIELD_MASK,
    0,
    XIF_LLID_3_CFGONULLID3_FIELD_WIDTH,
    XIF_LLID_3_CFGONULLID3_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_4_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_4_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_4_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_4_RESERVED0_FIELD_WIDTH,
    XIF_LLID_4_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_4_CFGONULLID4
 ******************************************************************************/
const ru_field_rec XIF_LLID_4_CFGONULLID4_FIELD =
{
    "CFGONULLID4",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 4 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 4.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_4_CFGONULLID4_FIELD_MASK,
    0,
    XIF_LLID_4_CFGONULLID4_FIELD_WIDTH,
    XIF_LLID_4_CFGONULLID4_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_5_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_5_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_5_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_5_RESERVED0_FIELD_WIDTH,
    XIF_LLID_5_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_5_CFGONULLID5
 ******************************************************************************/
const ru_field_rec XIF_LLID_5_CFGONULLID5_FIELD =
{
    "CFGONULLID5",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 5 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 5.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_5_CFGONULLID5_FIELD_MASK,
    0,
    XIF_LLID_5_CFGONULLID5_FIELD_WIDTH,
    XIF_LLID_5_CFGONULLID5_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_6_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_6_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_6_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_6_RESERVED0_FIELD_WIDTH,
    XIF_LLID_6_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_6_CFGONULLID6
 ******************************************************************************/
const ru_field_rec XIF_LLID_6_CFGONULLID6_FIELD =
{
    "CFGONULLID6",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 6 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 6.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_6_CFGONULLID6_FIELD_MASK,
    0,
    XIF_LLID_6_CFGONULLID6_FIELD_WIDTH,
    XIF_LLID_6_CFGONULLID6_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_7_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_7_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_7_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_7_RESERVED0_FIELD_WIDTH,
    XIF_LLID_7_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_7_CFGONULLID7
 ******************************************************************************/
const ru_field_rec XIF_LLID_7_CFGONULLID7_FIELD =
{
    "CFGONULLID7",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 7 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 7.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_7_CFGONULLID7_FIELD_MASK,
    0,
    XIF_LLID_7_CFGONULLID7_FIELD_WIDTH,
    XIF_LLID_7_CFGONULLID7_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_8_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_8_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_8_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_8_RESERVED0_FIELD_WIDTH,
    XIF_LLID_8_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_8_CFGONULLID8
 ******************************************************************************/
const ru_field_rec XIF_LLID_8_CFGONULLID8_FIELD =
{
    "CFGONULLID8",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 8 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 8.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_8_CFGONULLID8_FIELD_MASK,
    0,
    XIF_LLID_8_CFGONULLID8_FIELD_WIDTH,
    XIF_LLID_8_CFGONULLID8_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_9_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_9_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_9_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_9_RESERVED0_FIELD_WIDTH,
    XIF_LLID_9_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_9_CFGONULLID9
 ******************************************************************************/
const ru_field_rec XIF_LLID_9_CFGONULLID9_FIELD =
{
    "CFGONULLID9",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 9 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 9.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_9_CFGONULLID9_FIELD_MASK,
    0,
    XIF_LLID_9_CFGONULLID9_FIELD_WIDTH,
    XIF_LLID_9_CFGONULLID9_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_10_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_10_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_10_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_10_RESERVED0_FIELD_WIDTH,
    XIF_LLID_10_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_10_CFGONULLID10
 ******************************************************************************/
const ru_field_rec XIF_LLID_10_CFGONULLID10_FIELD =
{
    "CFGONULLID10",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 10 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 10.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_10_CFGONULLID10_FIELD_MASK,
    0,
    XIF_LLID_10_CFGONULLID10_FIELD_WIDTH,
    XIF_LLID_10_CFGONULLID10_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_11_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_11_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_11_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_11_RESERVED0_FIELD_WIDTH,
    XIF_LLID_11_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_11_CFGONULLID11
 ******************************************************************************/
const ru_field_rec XIF_LLID_11_CFGONULLID11_FIELD =
{
    "CFGONULLID11",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 11 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 11.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_11_CFGONULLID11_FIELD_MASK,
    0,
    XIF_LLID_11_CFGONULLID11_FIELD_WIDTH,
    XIF_LLID_11_CFGONULLID11_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_12_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_12_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_12_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_12_RESERVED0_FIELD_WIDTH,
    XIF_LLID_12_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_12_CFGONULLID12
 ******************************************************************************/
const ru_field_rec XIF_LLID_12_CFGONULLID12_FIELD =
{
    "CFGONULLID12",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 12 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 12.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_12_CFGONULLID12_FIELD_MASK,
    0,
    XIF_LLID_12_CFGONULLID12_FIELD_WIDTH,
    XIF_LLID_12_CFGONULLID12_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_13_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_13_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_13_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_13_RESERVED0_FIELD_WIDTH,
    XIF_LLID_13_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_13_CFGONULLID13
 ******************************************************************************/
const ru_field_rec XIF_LLID_13_CFGONULLID13_FIELD =
{
    "CFGONULLID13",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 13 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 13.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_13_CFGONULLID13_FIELD_MASK,
    0,
    XIF_LLID_13_CFGONULLID13_FIELD_WIDTH,
    XIF_LLID_13_CFGONULLID13_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_14_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_14_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_14_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_14_RESERVED0_FIELD_WIDTH,
    XIF_LLID_14_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_14_CFGONULLID14
 ******************************************************************************/
const ru_field_rec XIF_LLID_14_CFGONULLID14_FIELD =
{
    "CFGONULLID14",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 14 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 14.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_14_CFGONULLID14_FIELD_MASK,
    0,
    XIF_LLID_14_CFGONULLID14_FIELD_WIDTH,
    XIF_LLID_14_CFGONULLID14_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_15_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_15_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_15_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_15_RESERVED0_FIELD_WIDTH,
    XIF_LLID_15_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_15_CFGONULLID15
 ******************************************************************************/
const ru_field_rec XIF_LLID_15_CFGONULLID15_FIELD =
{
    "CFGONULLID15",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 15 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides lookup with"
    "VLAN's VID to index 15.  In downstream P2P, 802.1ae mode, registers"
    "XIF_P2P_AE_SCI_LO[0:15]/XIF_P2P_AE_SCI_HI[0:15] provide lookup with"
    "packet's explicit SCI to an index.",
#endif
    XIF_LLID_15_CFGONULLID15_FIELD_MASK,
    0,
    XIF_LLID_15_CFGONULLID15_FIELD_WIDTH,
    XIF_LLID_15_CFGONULLID15_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_16_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_16_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_16_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_16_RESERVED0_FIELD_WIDTH,
    XIF_LLID_16_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_16_CFGONULLID16
 ******************************************************************************/
const ru_field_rec XIF_LLID_16_CFGONULLID16_FIELD =
{
    "CFGONULLID16",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 16 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 16.",
#endif
    XIF_LLID_16_CFGONULLID16_FIELD_MASK,
    0,
    XIF_LLID_16_CFGONULLID16_FIELD_WIDTH,
    XIF_LLID_16_CFGONULLID16_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_17_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_17_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_17_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_17_RESERVED0_FIELD_WIDTH,
    XIF_LLID_17_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_17_CFGONULLID17
 ******************************************************************************/
const ru_field_rec XIF_LLID_17_CFGONULLID17_FIELD =
{
    "CFGONULLID17",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 17 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 17.",
#endif
    XIF_LLID_17_CFGONULLID17_FIELD_MASK,
    0,
    XIF_LLID_17_CFGONULLID17_FIELD_WIDTH,
    XIF_LLID_17_CFGONULLID17_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_18_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_18_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_18_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_18_RESERVED0_FIELD_WIDTH,
    XIF_LLID_18_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_18_CFGONULLID18
 ******************************************************************************/
const ru_field_rec XIF_LLID_18_CFGONULLID18_FIELD =
{
    "CFGONULLID18",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 18 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 18.",
#endif
    XIF_LLID_18_CFGONULLID18_FIELD_MASK,
    0,
    XIF_LLID_18_CFGONULLID18_FIELD_WIDTH,
    XIF_LLID_18_CFGONULLID18_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_19_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_19_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_19_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_19_RESERVED0_FIELD_WIDTH,
    XIF_LLID_19_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_19_CFGONULLID19
 ******************************************************************************/
const ru_field_rec XIF_LLID_19_CFGONULLID19_FIELD =
{
    "CFGONULLID19",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 19 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 19.",
#endif
    XIF_LLID_19_CFGONULLID19_FIELD_MASK,
    0,
    XIF_LLID_19_CFGONULLID19_FIELD_WIDTH,
    XIF_LLID_19_CFGONULLID19_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_20_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_20_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_20_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_20_RESERVED0_FIELD_WIDTH,
    XIF_LLID_20_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_20_CFGONULLID20
 ******************************************************************************/
const ru_field_rec XIF_LLID_20_CFGONULLID20_FIELD =
{
    "CFGONULLID20",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 20 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 20.",
#endif
    XIF_LLID_20_CFGONULLID20_FIELD_MASK,
    0,
    XIF_LLID_20_CFGONULLID20_FIELD_WIDTH,
    XIF_LLID_20_CFGONULLID20_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_21_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_21_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_21_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_21_RESERVED0_FIELD_WIDTH,
    XIF_LLID_21_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_21_CFGONULLID21
 ******************************************************************************/
const ru_field_rec XIF_LLID_21_CFGONULLID21_FIELD =
{
    "CFGONULLID21",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 21 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 21.",
#endif
    XIF_LLID_21_CFGONULLID21_FIELD_MASK,
    0,
    XIF_LLID_21_CFGONULLID21_FIELD_WIDTH,
    XIF_LLID_21_CFGONULLID21_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_22_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_22_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_22_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_22_RESERVED0_FIELD_WIDTH,
    XIF_LLID_22_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_22_CFGONULLID22
 ******************************************************************************/
const ru_field_rec XIF_LLID_22_CFGONULLID22_FIELD =
{
    "CFGONULLID22",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 22 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 22.",
#endif
    XIF_LLID_22_CFGONULLID22_FIELD_MASK,
    0,
    XIF_LLID_22_CFGONULLID22_FIELD_WIDTH,
    XIF_LLID_22_CFGONULLID22_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_23_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_23_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_23_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_23_RESERVED0_FIELD_WIDTH,
    XIF_LLID_23_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_23_CFGONULLID23
 ******************************************************************************/
const ru_field_rec XIF_LLID_23_CFGONULLID23_FIELD =
{
    "CFGONULLID23",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 23 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 23.",
#endif
    XIF_LLID_23_CFGONULLID23_FIELD_MASK,
    0,
    XIF_LLID_23_CFGONULLID23_FIELD_WIDTH,
    XIF_LLID_23_CFGONULLID23_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_24_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_24_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_24_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_24_RESERVED0_FIELD_WIDTH,
    XIF_LLID_24_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_24_CFGONULLID24
 ******************************************************************************/
const ru_field_rec XIF_LLID_24_CFGONULLID24_FIELD =
{
    "CFGONULLID24",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 24 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 24.",
#endif
    XIF_LLID_24_CFGONULLID24_FIELD_MASK,
    0,
    XIF_LLID_24_CFGONULLID24_FIELD_WIDTH,
    XIF_LLID_24_CFGONULLID24_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_25_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_25_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_25_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_25_RESERVED0_FIELD_WIDTH,
    XIF_LLID_25_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_25_CFGONULLID25
 ******************************************************************************/
const ru_field_rec XIF_LLID_25_CFGONULLID25_FIELD =
{
    "CFGONULLID25",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 25 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 25.",
#endif
    XIF_LLID_25_CFGONULLID25_FIELD_MASK,
    0,
    XIF_LLID_25_CFGONULLID25_FIELD_WIDTH,
    XIF_LLID_25_CFGONULLID25_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_26_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_26_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_26_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_26_RESERVED0_FIELD_WIDTH,
    XIF_LLID_26_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_26_CFGONULLID26
 ******************************************************************************/
const ru_field_rec XIF_LLID_26_CFGONULLID26_FIELD =
{
    "CFGONULLID26",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 26 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 26.",
#endif
    XIF_LLID_26_CFGONULLID26_FIELD_MASK,
    0,
    XIF_LLID_26_CFGONULLID26_FIELD_WIDTH,
    XIF_LLID_26_CFGONULLID26_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_27_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_27_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_27_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_27_RESERVED0_FIELD_WIDTH,
    XIF_LLID_27_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_27_CFGONULLID27
 ******************************************************************************/
const ru_field_rec XIF_LLID_27_CFGONULLID27_FIELD =
{
    "CFGONULLID27",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 27 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 27.",
#endif
    XIF_LLID_27_CFGONULLID27_FIELD_MASK,
    0,
    XIF_LLID_27_CFGONULLID27_FIELD_WIDTH,
    XIF_LLID_27_CFGONULLID27_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_28_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_28_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_28_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_28_RESERVED0_FIELD_WIDTH,
    XIF_LLID_28_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_28_CFGONULLID28
 ******************************************************************************/
const ru_field_rec XIF_LLID_28_CFGONULLID28_FIELD =
{
    "CFGONULLID28",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 28 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 28.",
#endif
    XIF_LLID_28_CFGONULLID28_FIELD_MASK,
    0,
    XIF_LLID_28_CFGONULLID28_FIELD_WIDTH,
    XIF_LLID_28_CFGONULLID28_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_29_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_29_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_29_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_29_RESERVED0_FIELD_WIDTH,
    XIF_LLID_29_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_29_CFGONULLID29
 ******************************************************************************/
const ru_field_rec XIF_LLID_29_CFGONULLID29_FIELD =
{
    "CFGONULLID29",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 29 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 29.",
#endif
    XIF_LLID_29_CFGONULLID29_FIELD_MASK,
    0,
    XIF_LLID_29_CFGONULLID29_FIELD_WIDTH,
    XIF_LLID_29_CFGONULLID29_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_30_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_30_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_30_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_30_RESERVED0_FIELD_WIDTH,
    XIF_LLID_30_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_30_CFGONULLID30
 ******************************************************************************/
const ru_field_rec XIF_LLID_30_CFGONULLID30_FIELD =
{
    "CFGONULLID30",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 30 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 30.",
#endif
    XIF_LLID_30_CFGONULLID30_FIELD_MASK,
    0,
    XIF_LLID_30_CFGONULLID30_FIELD_WIDTH,
    XIF_LLID_30_CFGONULLID30_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_31_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_LLID_31_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_LLID_31_RESERVED0_FIELD_MASK,
    0,
    XIF_LLID_31_RESERVED0_FIELD_WIDTH,
    XIF_LLID_31_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_LLID_31_CFGONULLID31
 ******************************************************************************/
const ru_field_rec XIF_LLID_31_CFGONULLID31_FIELD =
{
    "CFGONULLID31",
#if RU_INCLUDE_DESC
    "",
    "Defines the 16-bits LLID for index 31 : [15:0] - LLID; [16] - enable"
    "LLID.  In upstream P2P, 802.1ae mode, bit[11:0] provides upstream"
    "lookup with VLAN's VID to index 31.",
#endif
    XIF_LLID_31_CFGONULLID31_FIELD_MASK,
    0,
    XIF_LLID_31_CFGONULLID31_FIELD_WIDTH,
    XIF_LLID_31_CFGONULLID31_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD
 ******************************************************************************/
const ru_field_rec XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD_FIELD =
{
    "CFGMAXPOSMPCPUPD",
#if RU_INCLUDE_DESC
    "",
    "Maxifum MPCP update value.",
#endif
    XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD_FIELD_MASK,
    0,
    XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD_FIELD_WIDTH,
    XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_IPG_INSERTION_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_IPG_INSERTION_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_IPG_INSERTION_RESERVED0_FIELD_MASK,
    0,
    XIF_IPG_INSERTION_RESERVED0_FIELD_WIDTH,
    XIF_IPG_INSERTION_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_IPG_INSERTION_CFGSHORTIPG
 ******************************************************************************/
const ru_field_rec XIF_IPG_INSERTION_CFGSHORTIPG_FIELD =
{
    "CFGSHORTIPG",
#if RU_INCLUDE_DESC
    "",
    "Enable short IPG insertion, average of 8 bytes.  Should only be"
    "enabled only in FEC mode.  Otherwise, average of 12 bytes is"
    "inserted.",
#endif
    XIF_IPG_INSERTION_CFGSHORTIPG_FIELD_MASK,
    0,
    XIF_IPG_INSERTION_CFGSHORTIPG_FIELD_WIDTH,
    XIF_IPG_INSERTION_CFGSHORTIPG_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_IPG_INSERTION_CFGINSERTIPG
 ******************************************************************************/
const ru_field_rec XIF_IPG_INSERTION_CFGINSERTIPG_FIELD =
{
    "CFGINSERTIPG",
#if RU_INCLUDE_DESC
    "",
    "Debug function to enable IPG insertion.",
#endif
    XIF_IPG_INSERTION_CFGINSERTIPG_FIELD_MASK,
    0,
    XIF_IPG_INSERTION_CFGINSERTIPG_FIELD_WIDTH,
    XIF_IPG_INSERTION_CFGINSERTIPG_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_IPG_INSERTION_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_IPG_INSERTION_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_IPG_INSERTION_RESERVED1_FIELD_MASK,
    0,
    XIF_IPG_INSERTION_RESERVED1_FIELD_WIDTH,
    XIF_IPG_INSERTION_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_IPG_INSERTION_CFGIPGWORD
 ******************************************************************************/
const ru_field_rec XIF_IPG_INSERTION_CFGIPGWORD_FIELD =
{
    "CFGIPGWORD",
#if RU_INCLUDE_DESC
    "",
    "Configure the number of IPG word (2 bytes) to insert.  Only valid"
    "when cfgInsertIpg is asserted.",
#endif
    XIF_IPG_INSERTION_CFGIPGWORD_FIELD_MASK,
    0,
    XIF_IPG_INSERTION_CFGIPGWORD_FIELD_WIDTH,
    XIF_IPG_INSERTION_CFGIPGWORD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_TRANSPORT_TIME_CFTRANSPORTTIME
 ******************************************************************************/
const ru_field_rec XIF_TRANSPORT_TIME_CFTRANSPORTTIME_FIELD =
{
    "CFTRANSPORTTIME",
#if RU_INCLUDE_DESC
    "",
    "PPS is generated when the current MPCP is equal to the programmed"
    "value.",
#endif
    XIF_TRANSPORT_TIME_CFTRANSPORTTIME_FIELD_MASK,
    0,
    XIF_TRANSPORT_TIME_CFTRANSPORTTIME_FIELD_WIDTH,
    XIF_TRANSPORT_TIME_CFTRANSPORTTIME_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MPCP_TIME_CURMPCPTS
 ******************************************************************************/
const ru_field_rec XIF_MPCP_TIME_CURMPCPTS_FIELD =
{
    "CURMPCPTS",
#if RU_INCLUDE_DESC
    "",
    "Current MPCP time.",
#endif
    XIF_MPCP_TIME_CURMPCPTS_FIELD_MASK,
    0,
    XIF_MPCP_TIME_CURMPCPTS_FIELD_WIDTH,
    XIF_MPCP_TIME_CURMPCPTS_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_OVERLAP_GNT_OH_CFGOVRLPOH
 ******************************************************************************/
const ru_field_rec XIF_OVERLAP_GNT_OH_CFGOVRLPOH_FIELD =
{
    "CFGOVRLPOH",
#if RU_INCLUDE_DESC
    "",
    "Provides the amount the laser_on time and laser_off time may"
    "overlap.",
#endif
    XIF_OVERLAP_GNT_OH_CFGOVRLPOH_FIELD_MASK,
    0,
    XIF_OVERLAP_GNT_OH_CFGOVRLPOH_FIELD_WIDTH,
    XIF_OVERLAP_GNT_OH_CFGOVRLPOH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MAC_MODE_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_MAC_MODE_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_MAC_MODE_RESERVED0_FIELD_MASK,
    0,
    XIF_MAC_MODE_RESERVED0_FIELD_WIDTH,
    XIF_MAC_MODE_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_MAC_MODE_CFGENNOGNTXMT
 ******************************************************************************/
const ru_field_rec XIF_MAC_MODE_CFGENNOGNTXMT_FIELD =
{
    "CFGENNOGNTXMT",
#if RU_INCLUDE_DESC
    "",
    "Enable point-2-point transmission without grant. Must also set bit"
    "cfgEnP2P.",
#endif
    XIF_MAC_MODE_CFGENNOGNTXMT_FIELD_MASK,
    0,
    XIF_MAC_MODE_CFGENNOGNTXMT_FIELD_WIDTH,
    XIF_MAC_MODE_CFGENNOGNTXMT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_PMCTX_CTL_RESERVED0_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_RESERVED0_FIELD_WIDTH,
    XIF_PMCTX_CTL_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGMPCPUPDPERIOD
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGMPCPUPDPERIOD_FIELD =
{
    "CFGMPCPUPDPERIOD",
#if RU_INCLUDE_DESC
    "",
    "Define the MPCP update period. A value of 0xff disables update.",
#endif
    XIF_PMCTX_CTL_CFGMPCPUPDPERIOD_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGMPCPUPDPERIOD_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGMPCPUPDPERIOD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_PMCTX_CTL_RESERVED1_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_RESERVED1_FIELD_WIDTH,
    XIF_PMCTX_CTL_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR_FIELD =
{
    "CFGDIS4IDLEB4STARTCHAR",
#if RU_INCLUDE_DESC
    "",
    "Disable the requirement of 4 IDLEs preceeding start character to"
    "consider packet valid.",
#endif
    XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGENIDLEDSCRD
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGENIDLEDSCRD_FIELD =
{
    "CFGENIDLEDSCRD",
#if RU_INCLUDE_DESC
    "",
    "Enable upstream IDLE discard",
#endif
    XIF_PMCTX_CTL_CFGENIDLEDSCRD_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGENIDLEDSCRD_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGENIDLEDSCRD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGSELTXPONTIME
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGSELTXPONTIME_FIELD =
{
    "CFGSELTXPONTIME",
#if RU_INCLUDE_DESC
    "",
    "Selects the source of transmit MPCP time : 0 - RX; 1 - TX.",
#endif
    XIF_PMCTX_CTL_CFGSELTXPONTIME_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGSELTXPONTIME_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGSELTXPONTIME_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGMPCPCONTUPD
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGMPCPCONTUPD_FIELD =
{
    "CFGMPCPCONTUPD",
#if RU_INCLUDE_DESC
    "",
    "Enable continous MPCP update.",
#endif
    XIF_PMCTX_CTL_CFGMPCPCONTUPD_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGMPCPCONTUPD_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGMPCPCONTUPD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGENMAXMPCPUPD
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGENMAXMPCPUPD_FIELD =
{
    "CFGENMAXMPCPUPD",
#if RU_INCLUDE_DESC
    "",
    "Enable the restriction of positive MPCP update, limitted by"
    "cfgMaxPosMpcpUpd value set in register XIF_MAX_MPCP_UPDATE.",
#endif
    XIF_PMCTX_CTL_CFGENMAXMPCPUPD_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGENMAXMPCPUPD_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGENMAXMPCPUPD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PMCTX_CTL_CFGENNEGTIMEABORT
 ******************************************************************************/
const ru_field_rec XIF_PMCTX_CTL_CFGENNEGTIMEABORT_FIELD =
{
    "CFGENNEGTIMEABORT",
#if RU_INCLUDE_DESC
    "",
    "Enable the discard of packet with negative scheduled transmit time,"
    "relative to the current MPCP.",
#endif
    XIF_PMCTX_CTL_CFGENNEGTIMEABORT_FIELD_MASK,
    0,
    XIF_PMCTX_CTL_CFGENNEGTIMEABORT_FIELD_WIDTH,
    XIF_PMCTX_CTL_CFGENNEGTIMEABORT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_SEC_CTL_RESERVED0_FIELD_MASK,
    0,
    XIF_SEC_CTL_RESERVED0_FIELD_WIDTH,
    XIF_SEC_CTL_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGENAES_256_RX
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGENAES_256_RX_FIELD =
{
    "CFGENAES_256_RX",
#if RU_INCLUDE_DESC
    "",
    "Enables downstream 256 AES encryption : 0 - 128; 1 - 256.",
#endif
    XIF_SEC_CTL_CFGENAES_256_RX_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGENAES_256_RX_FIELD_WIDTH,
    XIF_SEC_CTL_CFGENAES_256_RX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGENAES_256_TX
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGENAES_256_TX_FIELD =
{
    "CFGENAES_256_TX",
#if RU_INCLUDE_DESC
    "",
    "Enables upstream 256 AES encryption : 0 - 128; 1 - 256.",
#endif
    XIF_SEC_CTL_CFGENAES_256_TX_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGENAES_256_TX_FIELD_WIDTH,
    XIF_SEC_CTL_CFGENAES_256_TX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFG_MACSEC_XPN_TX
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFG_MACSEC_XPN_TX_FIELD =
{
    "CFG_MACSEC_XPN_TX",
#if RU_INCLUDE_DESC
    "",
    "Enables upstream 802.1ae extended packet numbering. Registers"
    "XIF_SEC_TX_SSCI/XIF_SEC_TX_SALT_0_2 will need to be programmed.",
#endif
    XIF_SEC_CTL_CFG_MACSEC_XPN_TX_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFG_MACSEC_XPN_TX_FIELD_WIDTH,
    XIF_SEC_CTL_CFG_MACSEC_XPN_TX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFG_MACSEC_XPN_RX
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFG_MACSEC_XPN_RX_FIELD =
{
    "CFG_MACSEC_XPN_RX",
#if RU_INCLUDE_DESC
    "",
    "Enables downstream 802.1ae extended packet numbering. Registers"
    "XIF_SEC_RX_SSCI/XIF_SEC_RX_SALT_0_2 will need to be programmed.",
#endif
    XIF_SEC_CTL_CFG_MACSEC_XPN_RX_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFG_MACSEC_XPN_RX_FIELD_WIDTH,
    XIF_SEC_CTL_CFG_MACSEC_XPN_RX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGKEYNUM_4_AN_3
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGKEYNUM_4_AN_3_FIELD =
{
    "CFGKEYNUM_4_AN_3",
#if RU_INCLUDE_DESC
    "",
    "Applicable only for 802.1ae RX.  Defines the key number mapping for"
    "TCI's association number 3, AN[1:0].",
#endif
    XIF_SEC_CTL_CFGKEYNUM_4_AN_3_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_3_FIELD_WIDTH,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_3_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGKEYNUM_4_AN_2
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGKEYNUM_4_AN_2_FIELD =
{
    "CFGKEYNUM_4_AN_2",
#if RU_INCLUDE_DESC
    "",
    "Applicable only for 802.1ae RX.  Defines the key number mapping for"
    "TCI's association number 2, AN[1:0].",
#endif
    XIF_SEC_CTL_CFGKEYNUM_4_AN_2_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_2_FIELD_WIDTH,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGKEYNUM_4_AN_1
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGKEYNUM_4_AN_1_FIELD =
{
    "CFGKEYNUM_4_AN_1",
#if RU_INCLUDE_DESC
    "",
    "Applicable only for 802.1ae RX.  Defines the key number mapping for"
    "TCI's association number 1, AN[1:0].",
#endif
    XIF_SEC_CTL_CFGKEYNUM_4_AN_1_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_1_FIELD_WIDTH,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGKEYNUM_4_AN_0
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGKEYNUM_4_AN_0_FIELD =
{
    "CFGKEYNUM_4_AN_0",
#if RU_INCLUDE_DESC
    "",
    "Applicable only for 802.1ae RX.  Defines the key number mapping for"
    "TCI's association number 0, AN[1:0].",
#endif
    XIF_SEC_CTL_CFGKEYNUM_4_AN_0_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_0_FIELD_WIDTH,
    XIF_SEC_CTL_CFGKEYNUM_4_AN_0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_SEC_CTL_RESERVED1_FIELD_MASK,
    0,
    XIF_SEC_CTL_RESERVED1_FIELD_WIDTH,
    XIF_SEC_CTL_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGSECRXENSHORTLEN
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGSECRXENSHORTLEN_FIELD =
{
    "CFGSECRXENSHORTLEN",
#if RU_INCLUDE_DESC
    "",
    "[A0 BUG] - HWBCM6858-457"
    ""
    "Enables downstream short length support. This feature cannot be"
    "supported in"
    "A0. The workaround would be to disable this feature by clearing the"
    "bit.",
#endif
    XIF_SEC_CTL_CFGSECRXENSHORTLEN_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGSECRXENSHORTLEN_FIELD_WIDTH,
    XIF_SEC_CTL_CFGSECRXENSHORTLEN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGENSECTXFAKEAES
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGENSECTXFAKEAES_FIELD =
{
    "CFGENSECTXFAKEAES",
#if RU_INCLUDE_DESC
    "",
    "Enable fake AES on TX security.",
#endif
    XIF_SEC_CTL_CFGENSECTXFAKEAES_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGENSECTXFAKEAES_FIELD_WIDTH,
    XIF_SEC_CTL_CFGENSECTXFAKEAES_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGENSECRXFAKEAES
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGENSECRXFAKEAES_FIELD =
{
    "CFGENSECRXFAKEAES",
#if RU_INCLUDE_DESC
    "",
    "Enable fake AES on RX security.",
#endif
    XIF_SEC_CTL_CFGENSECRXFAKEAES_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGENSECRXFAKEAES_FIELD_WIDTH,
    XIF_SEC_CTL_CFGENSECRXFAKEAES_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR_FIELD =
{
    "CFGSECRXENPKTNUMRLOVR",
#if RU_INCLUDE_DESC
    "",
    "Enables packet number rollover on receive.",
#endif
    XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR_FIELD_WIDTH,
    XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_RESERVED2
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_RESERVED2_FIELD =
{
    "RESERVED2",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_SEC_CTL_RESERVED2_FIELD_MASK,
    0,
    XIF_SEC_CTL_RESERVED2_FIELD_WIDTH,
    XIF_SEC_CTL_RESERVED2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR_FIELD =
{
    "CFGSECTXENPKTNUMRLOVR",
#if RU_INCLUDE_DESC
    "",
    "Enables packet number rollover on transmit.",
#endif
    XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR_FIELD_WIDTH,
    XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_CTL_CFGENAEREPLAYPRCT
 ******************************************************************************/
const ru_field_rec XIF_SEC_CTL_CFGENAEREPLAYPRCT_FIELD =
{
    "CFGENAEREPLAYPRCT",
#if RU_INCLUDE_DESC
    "",
    "Enables replay protection on RX security.",
#endif
    XIF_SEC_CTL_CFGENAEREPLAYPRCT_FIELD_MASK,
    0,
    XIF_SEC_CTL_CFGENAEREPLAYPRCT_FIELD_WIDTH,
    XIF_SEC_CTL_CFGENAEREPLAYPRCT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND_FIELD =
{
    "CFGAEPKTNUMWND",
#if RU_INCLUDE_DESC
    "",
    "In replay protection, the packet number is checked against the"
    "expected packet number.  If it is greater than or equal to, packet"
    "will be accepted.  Otherwise, it will be discarded. This register"
    "provides the tolerance by subtracting the current expected packet"
    "number by this amount.",
#endif
    XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND_FIELD_WIDTH,
    XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH_FIELD =
{
    "CFGPKTNUMMAXTHRESH",
#if RU_INCLUDE_DESC
    "",
    "Defines the threshold of impending packet number rollover.",
#endif
    XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH_FIELD_WIDTH,
    XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SECTX_KEYNUM_KEYSTATTX
 ******************************************************************************/
const ru_field_rec XIF_SECTX_KEYNUM_KEYSTATTX_FIELD =
{
    "KEYSTATTX",
#if RU_INCLUDE_DESC
    "",
    "KeyNumber stat",
#endif
    XIF_SECTX_KEYNUM_KEYSTATTX_FIELD_MASK,
    0,
    XIF_SECTX_KEYNUM_KEYSTATTX_FIELD_WIDTH,
    XIF_SECTX_KEYNUM_KEYSTATTX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_SECTX_ENCRYPT_ENCRSTATTX
 ******************************************************************************/
const ru_field_rec XIF_SECTX_ENCRYPT_ENCRSTATTX_FIELD =
{
    "ENCRSTATTX",
#if RU_INCLUDE_DESC
    "",
    "Encryption stat.",
#endif
    XIF_SECTX_ENCRYPT_ENCRSTATTX_FIELD_MASK,
    0,
    XIF_SECTX_ENCRYPT_ENCRSTATTX_FIELD_WIDTH,
    XIF_SECTX_ENCRYPT_ENCRSTATTX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_STAT_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_STAT_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_AE_PKTNUM_STAT_RESERVED0_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_STAT_RESERVED0_FIELD_WIDTH,
    XIF_AE_PKTNUM_STAT_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX_FIELD =
{
    "SECTXINDXWTPKTNUMMAX",
#if RU_INCLUDE_DESC
    "",
    "Provides the LLID index whose packet number exceeded the maxifum"
    "packet number threhsold.",
#endif
    XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX_FIELD_WIDTH,
    XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_STAT_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_STAT_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_AE_PKTNUM_STAT_RESERVED1_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_STAT_RESERVED1_FIELD_WIDTH,
    XIF_AE_PKTNUM_STAT_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT
 ******************************************************************************/
const ru_field_rec XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT_FIELD =
{
    "SECRXINDXWTPKTNUMABORT",
#if RU_INCLUDE_DESC
    "",
    "Provides the LLID index that was aborted due to replay protection.",
#endif
    XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT_FIELD_MASK,
    0,
    XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT_FIELD_WIDTH,
    XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_MPCP_UPDATE_MPCPUPDPERIOD
 ******************************************************************************/
const ru_field_rec XIF_MPCP_UPDATE_MPCPUPDPERIOD_FIELD =
{
    "MPCPUPDPERIOD",
#if RU_INCLUDE_DESC
    "",
    "Time between MPCP updates.",
#endif
    XIF_MPCP_UPDATE_MPCPUPDPERIOD_FIELD_MASK,
    0,
    XIF_MPCP_UPDATE_MPCPUPDPERIOD_FIELD_WIDTH,
    XIF_MPCP_UPDATE_MPCPUPDPERIOD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET
 ******************************************************************************/
const ru_field_rec XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET_FIELD =
{
    "CFGBURSTPRELAUNCHOFFSET",
#if RU_INCLUDE_DESC
    "",
    "Defines the prelaunch time of burst data, in unit of TQ.",
#endif
    XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET_FIELD_MASK,
    0,
    XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET_FIELD_WIDTH,
    XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_VLAN_TYPE_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_VLAN_TYPE_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_VLAN_TYPE_RESERVED0_FIELD_MASK,
    0,
    XIF_VLAN_TYPE_RESERVED0_FIELD_WIDTH,
    XIF_VLAN_TYPE_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_VLAN_TYPE_CFGVLANTYPE
 ******************************************************************************/
const ru_field_rec XIF_VLAN_TYPE_CFGVLANTYPE_FIELD =
{
    "CFGVLANTYPE",
#if RU_INCLUDE_DESC
    "",
    "Defines a VLAN type, in addition to 0x8100.",
#endif
    XIF_VLAN_TYPE_CFGVLANTYPE_FIELD_MASK,
    0,
    XIF_VLAN_TYPE_CFGVLANTYPE_FIELD_WIDTH,
    XIF_VLAN_TYPE_CFGVLANTYPE_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_EN_CFGP2PSCIEN
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_EN_CFGP2PSCIEN_FIELD =
{
    "CFGP2PSCIEN",
#if RU_INCLUDE_DESC
    "",
    "Enables SCI lookup, via"
    "XIF_P2P_AE_SCI_LO[0:31]/XIF_P2P_AE_SCI_HI[0:31] registers. Each bit"
    "corresponds to index 0 - 31.",
#endif
    XIF_P2P_AE_SCI_EN_CFGP2PSCIEN_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_EN_CFGP2PSCIEN_FIELD_WIDTH,
    XIF_P2P_AE_SCI_EN_CFGP2PSCIEN_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0_FIELD =
{
    "CFGP2PSCI_LO_0",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 0.",
#endif
    XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0_FIELD =
{
    "CFGP2PSCI_HI_0",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 0.",
#endif
    XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1_FIELD =
{
    "CFGP2PSCI_LO_1",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 1.",
#endif
    XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1_FIELD =
{
    "CFGP2PSCI_HI_1",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 1.",
#endif
    XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2_FIELD =
{
    "CFGP2PSCI_LO_2",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 2.",
#endif
    XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2_FIELD =
{
    "CFGP2PSCI_HI_2",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 2.",
#endif
    XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3_FIELD =
{
    "CFGP2PSCI_LO_3",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 3.",
#endif
    XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3_FIELD =
{
    "CFGP2PSCI_HI_3",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 3.",
#endif
    XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4_FIELD =
{
    "CFGP2PSCI_LO_4",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 4.",
#endif
    XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4_FIELD =
{
    "CFGP2PSCI_HI_4",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 4.",
#endif
    XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5_FIELD =
{
    "CFGP2PSCI_LO_5",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 5.",
#endif
    XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5_FIELD =
{
    "CFGP2PSCI_HI_5",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 5.",
#endif
    XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6_FIELD =
{
    "CFGP2PSCI_LO_6",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 6.",
#endif
    XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6_FIELD =
{
    "CFGP2PSCI_HI_6",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 6.",
#endif
    XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7_FIELD =
{
    "CFGP2PSCI_LO_7",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 7.",
#endif
    XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7_FIELD =
{
    "CFGP2PSCI_HI_7",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 7.",
#endif
    XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8_FIELD =
{
    "CFGP2PSCI_LO_8",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 8.",
#endif
    XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8_FIELD =
{
    "CFGP2PSCI_HI_8",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 8.",
#endif
    XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9_FIELD =
{
    "CFGP2PSCI_LO_9",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 9.",
#endif
    XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9_FIELD =
{
    "CFGP2PSCI_HI_9",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 9.",
#endif
    XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10_FIELD =
{
    "CFGP2PSCI_LO_10",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 10.",
#endif
    XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10_FIELD =
{
    "CFGP2PSCI_HI_10",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 10.",
#endif
    XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11_FIELD =
{
    "CFGP2PSCI_LO_11",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 11.",
#endif
    XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11_FIELD =
{
    "CFGP2PSCI_HI_11",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 11.",
#endif
    XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12_FIELD =
{
    "CFGP2PSCI_LO_12",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 12.",
#endif
    XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12_FIELD =
{
    "CFGP2PSCI_HI_12",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 12.",
#endif
    XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13_FIELD =
{
    "CFGP2PSCI_LO_13",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 13.",
#endif
    XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13_FIELD =
{
    "CFGP2PSCI_HI_13",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 13.",
#endif
    XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14_FIELD =
{
    "CFGP2PSCI_LO_14",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 14.",
#endif
    XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14_FIELD =
{
    "CFGP2PSCI_HI_14",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 14.",
#endif
    XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15_FIELD =
{
    "CFGP2PSCI_LO_15",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 15.",
#endif
    XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15_FIELD =
{
    "CFGP2PSCI_HI_15",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 15.",
#endif
    XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SECRX_KEYNUM_1_KEYSTATRX_HI
 ******************************************************************************/
const ru_field_rec XIF_SECRX_KEYNUM_1_KEYSTATRX_HI_FIELD =
{
    "KEYSTATRX_HI",
#if RU_INCLUDE_DESC
    "",
    "In 802.1ae mode, this register provides the upper bit of TCI's"
    "AN[1:0].  The mapping to even/odd key, based on AN[1:0], is provided"
    "by cfgKeyNum_4_AN_0 - cfgKeyNum_4_AN_3.",
#endif
    XIF_SECRX_KEYNUM_1_KEYSTATRX_HI_FIELD_MASK,
    0,
    XIF_SECRX_KEYNUM_1_KEYSTATRX_HI_FIELD_WIDTH,
    XIF_SECRX_KEYNUM_1_KEYSTATRX_HI_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_CTL_2_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_CTL_2_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_CTL_2_RESERVED0_FIELD_MASK,
    0,
    XIF_CTL_2_RESERVED0_FIELD_WIDTH,
    XIF_CTL_2_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_2_CFGEN1588ADJ4PARB4DA
 ******************************************************************************/
const ru_field_rec XIF_CTL_2_CFGEN1588ADJ4PARB4DA_FIELD =
{
    "CFGEN1588ADJ4PARB4DA",
#if RU_INCLUDE_DESC
    "",
    "Enable 1588 adjustment for parity inserted before DA.",
#endif
    XIF_CTL_2_CFGEN1588ADJ4PARB4DA_FIELD_MASK,
    0,
    XIF_CTL_2_CFGEN1588ADJ4PARB4DA_FIELD_WIDTH,
    XIF_CTL_2_CFGEN1588ADJ4PARB4DA_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_2_CFGENTX1588
 ******************************************************************************/
const ru_field_rec XIF_CTL_2_CFGENTX1588_FIELD =
{
    "CFGENTX1588",
#if RU_INCLUDE_DESC
    "",
    "Enable upstream 1588 timestamping.",
#endif
    XIF_CTL_2_CFGENTX1588_FIELD_MASK,
    0,
    XIF_CTL_2_CFGENTX1588_FIELD_WIDTH,
    XIF_CTL_2_CFGENTX1588_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_2_CFGDISP2PDNINDEXMAP
 ******************************************************************************/
const ru_field_rec XIF_CTL_2_CFGDISP2PDNINDEXMAP_FIELD =
{
    "CFGDISP2PDNINDEXMAP",
#if RU_INCLUDE_DESC
    "",
    "Disable P2P downstream index mapping, default to index 0.",
#endif
    XIF_CTL_2_CFGDISP2PDNINDEXMAP_FIELD_MASK,
    0,
    XIF_CTL_2_CFGDISP2PDNINDEXMAP_FIELD_WIDTH,
    XIF_CTL_2_CFGDISP2PDNINDEXMAP_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_CTL_2_CFGDISP2PUPINDEXMAP
 ******************************************************************************/
const ru_field_rec XIF_CTL_2_CFGDISP2PUPINDEXMAP_FIELD =
{
    "CFGDISP2PUPINDEXMAP",
#if RU_INCLUDE_DESC
    "",
    "Disable P2P upstream index mapping, default to index 0.",
#endif
    XIF_CTL_2_CFGDISP2PUPINDEXMAP_FIELD_MASK,
    0,
    XIF_CTL_2_CFGDISP2PUPINDEXMAP_FIELD_WIDTH,
    XIF_CTL_2_CFGDISP2PUPINDEXMAP_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_VLAN_TYPE_1_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_VLAN_TYPE_1_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_VLAN_TYPE_1_RESERVED0_FIELD_MASK,
    0,
    XIF_VLAN_TYPE_1_RESERVED0_FIELD_WIDTH,
    XIF_VLAN_TYPE_1_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_VLAN_TYPE_1_CFGVLANTYPE_1
 ******************************************************************************/
const ru_field_rec XIF_VLAN_TYPE_1_CFGVLANTYPE_1_FIELD =
{
    "CFGVLANTYPE_1",
#if RU_INCLUDE_DESC
    "",
    "Defines a VLAN type.",
#endif
    XIF_VLAN_TYPE_1_CFGVLANTYPE_1_FIELD_MASK,
    0,
    XIF_VLAN_TYPE_1_CFGVLANTYPE_1_FIELD_WIDTH,
    XIF_VLAN_TYPE_1_CFGVLANTYPE_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16_FIELD =
{
    "CFGP2PSCI_LO_16",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 16.",
#endif
    XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16_FIELD =
{
    "CFGP2PSCI_HI_16",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 16.",
#endif
    XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17_FIELD =
{
    "CFGP2PSCI_LO_17",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 17.",
#endif
    XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17_FIELD =
{
    "CFGP2PSCI_HI_17",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 17.",
#endif
    XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18_FIELD =
{
    "CFGP2PSCI_LO_18",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 18.",
#endif
    XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18_FIELD =
{
    "CFGP2PSCI_HI_18",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 18.",
#endif
    XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19_FIELD =
{
    "CFGP2PSCI_LO_19",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 19.",
#endif
    XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19_FIELD =
{
    "CFGP2PSCI_HI_19",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 19.",
#endif
    XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20_FIELD =
{
    "CFGP2PSCI_LO_20",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 20.",
#endif
    XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20_FIELD =
{
    "CFGP2PSCI_HI_20",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 20.",
#endif
    XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21_FIELD =
{
    "CFGP2PSCI_LO_21",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 21.",
#endif
    XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21_FIELD =
{
    "CFGP2PSCI_HI_21",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 21.",
#endif
    XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22_FIELD =
{
    "CFGP2PSCI_LO_22",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 22.",
#endif
    XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22_FIELD =
{
    "CFGP2PSCI_HI_22",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 22.",
#endif
    XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23_FIELD =
{
    "CFGP2PSCI_LO_23",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 23.",
#endif
    XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23_FIELD =
{
    "CFGP2PSCI_HI_23",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 23.",
#endif
    XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24_FIELD =
{
    "CFGP2PSCI_LO_24",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 24.",
#endif
    XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24_FIELD =
{
    "CFGP2PSCI_HI_24",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 24.",
#endif
    XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25_FIELD =
{
    "CFGP2PSCI_LO_25",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 25.",
#endif
    XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25_FIELD =
{
    "CFGP2PSCI_HI_25",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 25.",
#endif
    XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26_FIELD =
{
    "CFGP2PSCI_LO_26",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 26.",
#endif
    XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26_FIELD =
{
    "CFGP2PSCI_HI_26",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 26.",
#endif
    XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27_FIELD =
{
    "CFGP2PSCI_LO_27",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 27.",
#endif
    XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27_FIELD =
{
    "CFGP2PSCI_HI_27",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 27.",
#endif
    XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28_FIELD =
{
    "CFGP2PSCI_LO_28",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 28.",
#endif
    XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28_FIELD =
{
    "CFGP2PSCI_HI_28",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 28.",
#endif
    XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29_FIELD =
{
    "CFGP2PSCI_LO_29",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 29.",
#endif
    XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29_FIELD =
{
    "CFGP2PSCI_HI_29",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 29.",
#endif
    XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30_FIELD =
{
    "CFGP2PSCI_LO_30",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 30.",
#endif
    XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30_FIELD =
{
    "CFGP2PSCI_HI_30",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 30.",
#endif
    XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31_FIELD =
{
    "CFGP2PSCI_LO_31",
#if RU_INCLUDE_DESC
    "",
    "Defines the lower 32-bits lookup value of SCI to index 31.",
#endif
    XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31_FIELD_WIDTH,
    XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31
 ******************************************************************************/
const ru_field_rec XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31_FIELD =
{
    "CFGP2PSCI_HI_31",
#if RU_INCLUDE_DESC
    "",
    "Defines the upper 32-bits lookup value of SCI to index 31.",
#endif
    XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31_FIELD_MASK,
    0,
    XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31_FIELD_WIDTH,
    XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO_FIELD =
{
    "CFGUP1588TSOFFSET_LO",
#if RU_INCLUDE_DESC
    "",
    "Provides signed offset for upstream packet timestamping.",
#endif
    XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO_FIELD_MASK,
    0,
    XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO_FIELD_WIDTH,
    XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TS_OFFSET_HI_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TS_OFFSET_HI_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_UP_1588_TS_OFFSET_HI_RESERVED0_FIELD_MASK,
    0,
    XIF_UP_1588_TS_OFFSET_HI_RESERVED0_FIELD_WIDTH,
    XIF_UP_1588_TS_OFFSET_HI_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET_FIELD =
{
    "CFGCMHOFFSET",
#if RU_INCLUDE_DESC
    "",
    "Provides CMH offset where 48-bits nanosecond correction field"
    "resides.",
#endif
    XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET_FIELD_MASK,
    0,
    XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET_FIELD_WIDTH,
    XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI_FIELD =
{
    "CFGUP1588TSOFFSET_HI",
#if RU_INCLUDE_DESC
    "",
    "Provides signed offset for upstream packet timestamping.",
#endif
    XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI_FIELD_MASK,
    0,
    XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI_FIELD_WIDTH,
    XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD_FIELD =
{
    "TWOSTEPFFRD",
#if RU_INCLUDE_DESC
    "",
    "Provides the reading of the upstream two step timestamp FIFO.  A"
    "write value of 1 will advance the FIFO to the next entry.  The"
    "48-bits value is provided by registers"
    "XIF_UP_1588_TWO_STEP_TS_VALUE_HI/XIF_UP_1588_TWO_STEP_TS_VALUE_LO.",
#endif
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES_FIELD =
{
    "TWOSTEPFFENTRIES",
#if RU_INCLUDE_DESC
    "",
    "Indicates the number of entries in the two step timestamp FIFO.",
#endif
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO_FIELD =
{
    "TWOSTEPTIMESTAMP_LO",
#if RU_INCLUDE_DESC
    "",
    "Lower 32-bits of two-step timestamp value for IEEE 1588"
    "timestamping.",
#endif
    XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI
 ******************************************************************************/
const ru_field_rec XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI_FIELD =
{
    "TWOSTEPTIMESTAMP_HI",
#if RU_INCLUDE_DESC
    "",
    "Upper 16-bits of two-step timestamp value for IEEE 1588"
    "timestamping.",
#endif
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI_FIELD_MASK,
    0,
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI_FIELD_WIDTH,
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_read
#endif
};

/******************************************************************************
 * Field: XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT
 ******************************************************************************/
const ru_field_rec XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT_FIELD =
{
    "CFG_TS48_SYNC_NS_INCREMENT",
#if RU_INCLUDE_DESC
    "",
    "Selects the synchronized TS48 nanosecond increment : 0 - 8ns unit; 1"
    "- 16s unit. Should be set in 5G active Ethernet mode.",
#endif
    XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT_FIELD_MASK,
    0,
    XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT_FIELD_WIDTH,
    XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_1588_TS_SYNC_OFFSET_RESERVED0
 ******************************************************************************/
const ru_field_rec XIF_1588_TS_SYNC_OFFSET_RESERVED0_FIELD =
{
    "RESERVED0",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_1588_TS_SYNC_OFFSET_RESERVED0_FIELD_MASK,
    0,
    XIF_1588_TS_SYNC_OFFSET_RESERVED0_FIELD_WIDTH,
    XIF_1588_TS_SYNC_OFFSET_RESERVED0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161
 ******************************************************************************/
const ru_field_rec XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161_FIELD =
{
    "CFGTSSYNCOFFSET_161",
#if RU_INCLUDE_DESC
    "",
    "Provides lowest 9 bits of timestamp synchronizer, from 250 MHz"
    "domain to 161 MHz.  Should be set accordingly to"
    "cfg_ts48_sync_ns_inrement configuration : 0 - 0x10; 1 - 0x20.",
#endif
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161_FIELD_MASK,
    0,
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161_FIELD_WIDTH,
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_1588_TS_SYNC_OFFSET_RESERVED1
 ******************************************************************************/
const ru_field_rec XIF_1588_TS_SYNC_OFFSET_RESERVED1_FIELD =
{
    "RESERVED1",
#if RU_INCLUDE_DESC
    "",
    "",
#endif
    XIF_1588_TS_SYNC_OFFSET_RESERVED1_FIELD_MASK,
    0,
    XIF_1588_TS_SYNC_OFFSET_RESERVED1_FIELD_WIDTH,
    XIF_1588_TS_SYNC_OFFSET_RESERVED1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125
 ******************************************************************************/
const ru_field_rec XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125_FIELD =
{
    "CFGTSSYNCOFFSET_125",
#if RU_INCLUDE_DESC
    "",
    "Provides lowest 9 bits of timestamp synchronizer, from 250 MHz"
    "domain to 125 MHz.  Should be set accordingly to"
    "cfg_ts48_sync_ns_inrement configuration : 0 - 0x10; 1 - 0x20.",
#endif
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125_FIELD_MASK,
    0,
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125_FIELD_WIDTH,
    XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET
 ******************************************************************************/
const ru_field_rec XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET_FIELD =
{
    "CFGSECRXMPCPOFFSET",
#if RU_INCLUDE_DESC
    "",
    "Provides MPCP adjustment for ZOH security.",
#endif
    XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET_FIELD_MASK,
    0,
    XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET_FIELD_WIDTH,
    XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_8_PORTDATA8
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_8_PORTDATA8_FIELD =
{
    "PORTDATA8",
#if RU_INCLUDE_DESC
    "",
    "Security key[159:128].",
#endif
    XIF_PORT_DATA_8_PORTDATA8_FIELD_MASK,
    0,
    XIF_PORT_DATA_8_PORTDATA8_FIELD_WIDTH,
    XIF_PORT_DATA_8_PORTDATA8_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_9_PORTDATA9
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_9_PORTDATA9_FIELD =
{
    "PORTDATA9",
#if RU_INCLUDE_DESC
    "",
    "Security key[191:160].",
#endif
    XIF_PORT_DATA_9_PORTDATA9_FIELD_MASK,
    0,
    XIF_PORT_DATA_9_PORTDATA9_FIELD_WIDTH,
    XIF_PORT_DATA_9_PORTDATA9_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_10_PORTDATA10
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_10_PORTDATA10_FIELD =
{
    "PORTDATA10",
#if RU_INCLUDE_DESC
    "",
    "Security key[223:192].",
#endif
    XIF_PORT_DATA_10_PORTDATA10_FIELD_MASK,
    0,
    XIF_PORT_DATA_10_PORTDATA10_FIELD_WIDTH,
    XIF_PORT_DATA_10_PORTDATA10_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_PORT_DATA_11_PORTDATA11
 ******************************************************************************/
const ru_field_rec XIF_PORT_DATA_11_PORTDATA11_FIELD =
{
    "PORTDATA11",
#if RU_INCLUDE_DESC
    "",
    "Security key[255:224].",
#endif
    XIF_PORT_DATA_11_PORTDATA11_FIELD_MASK,
    0,
    XIF_PORT_DATA_11_PORTDATA11_FIELD_WIDTH,
    XIF_PORT_DATA_11_PORTDATA11_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI
 ******************************************************************************/
const ru_field_rec XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI_FIELD =
{
    "CFG_MACSEC_XPN_TX_SSCI",
#if RU_INCLUDE_DESC
    "",
    "SSCI[31:0].",
#endif
    XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI_FIELD_MASK,
    0,
    XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI_FIELD_WIDTH,
    XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0
 ******************************************************************************/
const ru_field_rec XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0_FIELD =
{
    "CFG_MACSEC_XPN_TX_SALT_0",
#if RU_INCLUDE_DESC
    "",
    "SALT[31:0].",
#endif
    XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0_FIELD_MASK,
    0,
    XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0_FIELD_WIDTH,
    XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1
 ******************************************************************************/
const ru_field_rec XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1_FIELD =
{
    "CFG_MACSEC_XPN_TX_SALT_1",
#if RU_INCLUDE_DESC
    "",
    "SALT[63:32].",
#endif
    XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1_FIELD_MASK,
    0,
    XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1_FIELD_WIDTH,
    XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2
 ******************************************************************************/
const ru_field_rec XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2_FIELD =
{
    "CFG_MACSEC_XPN_TX_SALT_2",
#if RU_INCLUDE_DESC
    "",
    "SALT[95:64].",
#endif
    XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2_FIELD_MASK,
    0,
    XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2_FIELD_WIDTH,
    XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI
 ******************************************************************************/
const ru_field_rec XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI_FIELD =
{
    "CFG_MACSEC_XPN_RX_SSCI",
#if RU_INCLUDE_DESC
    "",
    "SSCI[31:0].",
#endif
    XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI_FIELD_MASK,
    0,
    XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI_FIELD_WIDTH,
    XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0
 ******************************************************************************/
const ru_field_rec XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0_FIELD =
{
    "CFG_MACSEC_XPN_RX_SALT_0",
#if RU_INCLUDE_DESC
    "",
    "SALT[31:0].",
#endif
    XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0_FIELD_MASK,
    0,
    XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0_FIELD_WIDTH,
    XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1
 ******************************************************************************/
const ru_field_rec XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1_FIELD =
{
    "CFG_MACSEC_XPN_RX_SALT_1",
#if RU_INCLUDE_DESC
    "",
    "SALT[63:32].",
#endif
    XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1_FIELD_MASK,
    0,
    XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1_FIELD_WIDTH,
    XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

/******************************************************************************
 * Field: XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2
 ******************************************************************************/
const ru_field_rec XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2_FIELD =
{
    "CFG_MACSEC_XPN_RX_SALT_2",
#if RU_INCLUDE_DESC
    "",
    "SALT[95:64].",
#endif
    XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2_FIELD_MASK,
    0,
    XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2_FIELD_WIDTH,
    XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2_FIELD_SHIFT,
#if RU_INCLUDE_ACCESS
    ru_access_rw
#endif
};

#endif /* RU_INCLUDE_FIELD_DB */

/******************************************************************************
 * Register: XIF_CTL
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_CTL_FIELDS[] =
{
    &XIF_CTL_RXENCRYPTEN_FIELD,
    &XIF_CTL_CFGDISRXDASAENCRPT_FIELD,
    &XIF_CTL_RXENCRYPTMODE_FIELD,
    &XIF_CTL_TXENCRYPTEN_FIELD,
    &XIF_CTL_CFGDISTXDASAENCRPT_FIELD,
    &XIF_CTL_TXENCRYPTMODE_FIELD,
    &XIF_CTL_RESERVED0_FIELD,
    &XIF_CTL_CFGLLIDMODEMSK_FIELD,
    &XIF_CTL_CFGXPNBADCRC32_FIELD,
    &XIF_CTL_CFGDISDISCINFO_FIELD,
    &XIF_CTL_CFGPMCTX2RXLPBK_FIELD,
    &XIF_CTL_CFGPMCTXENCRC8BAD_FIELD,
    &XIF_CTL_CFGENP2P_FIELD,
    &XIF_CTL_CFGLLIDPROMISCUOUSMODE_FIELD,
    &XIF_CTL_CFGENIDLEPKTSUP_FIELD,
    &XIF_CTL_CFGPMCRXENCRC8CHK_FIELD,
    &XIF_CTL_CFGEN1STIDLEPKTCONVERT_FIELD,
    &XIF_CTL_CFGFECEN_FIELD,
    &XIF_CTL_CFGLEGACYRCVTSUPD_FIELD,
    &XIF_CTL_CFGXPNENCRCPASSTHRU_FIELD,
    &XIF_CTL_CFGXPNDISTIMESTAMPMOD_FIELD,
    &XIF_CTL_XIFNOTRDY_FIELD,
    &XIF_CTL_XIFDTPORTRSTN_FIELD,
    &XIF_CTL_XPNTXRSTN_FIELD,
    &XIF_CTL_PMCTXRSTN_FIELD,
    &XIF_CTL_SECTXRSTN_FIELD,
    &XIF_CTL_CFGDISTXOAMENCRPT_FIELD,
    &XIF_CTL_CFGDISTXMPCPENCRPT_FIELD,
    &XIF_CTL_PMCRXRSTN_FIELD,
    &XIF_CTL_SECRXRSTN_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_CTL_REG = 
{
    "CTL",
#if RU_INCLUDE_DESC
    "XIF_CTL Register",
    "XIF control register.",
#endif
    XIF_CTL_REG_OFFSET,
    0,
    0,
    479,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    30,
    XIF_CTL_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_INT_STATUS
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_INT_STATUS_FIELDS[] =
{
    &XIF_INT_STATUS_RESERVED0_FIELD,
    &XIF_INT_STATUS_TS1588PKTABORT_FIELD,
    &XIF_INT_STATUS_TS1588TWOSTEPFF_FIELD,
    &XIF_INT_STATUS_RESERVED1_FIELD,
    &XIF_INT_STATUS_SECRXRPLYPRTCTABRTINT_FIELD,
    &XIF_INT_STATUS_SECTXPKTNUMMAXINT_FIELD,
    &XIF_INT_STATUS_RESERVED2_FIELD,
    &XIF_INT_STATUS_TSFULLUPDINT_FIELD,
    &XIF_INT_STATUS_TXHANGINT_FIELD,
    &XIF_INT_STATUS_NEGTIMEINT_FIELD,
    &XIF_INT_STATUS_PMCTSJTTRINT_FIELD,
    &XIF_INT_STATUS_SECRXOUTFFOVRFLWINT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_INT_STATUS_REG = 
{
    "INT_STATUS",
#if RU_INCLUDE_DESC
    "XIF_INT_STATUS Register",
    "Interrupts.",
#endif
    XIF_INT_STATUS_REG_OFFSET,
    0,
    0,
    480,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    12,
    XIF_INT_STATUS_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_INT_MASK
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_INT_MASK_FIELDS[] =
{
    &XIF_INT_MASK_RESERVED0_FIELD,
    &XIF_INT_MASK_MSKTS1588PKTABORT_FIELD,
    &XIF_INT_MASK_MSKTS1588TWOSTEPFF_FIELD,
    &XIF_INT_MASK_RESERVED1_FIELD,
    &XIF_INT_MASK_MSKSECRXREPLAYPROTCTABORT_FIELD,
    &XIF_INT_MASK_MSKPKTNUMTHRESHINT_FIELD,
    &XIF_INT_MASK_RESERVED2_FIELD,
    &XIF_INT_MASK_MSKTSFULLUPDINT_FIELD,
    &XIF_INT_MASK_MSKTXHANGINT_FIELD,
    &XIF_INT_MASK_MSKNEGTIMEINT_FIELD,
    &XIF_INT_MASK_MSKPMCTSJTTRINT_FIELD,
    &XIF_INT_MASK_MSKSECRXOUTFFINT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_INT_MASK_REG = 
{
    "INT_MASK",
#if RU_INCLUDE_DESC
    "XIF_INT_MASK Register",
    "Interrupt masks, active low : 0 - mask interrupt; 1 - enable interrupt.",
#endif
    XIF_INT_MASK_REG_OFFSET,
    0,
    0,
    481,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    12,
    XIF_INT_MASK_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_COMMAND
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_COMMAND_FIELDS[] =
{
    &XIF_PORT_COMMAND_DATAPORTBUSY_FIELD,
    &XIF_PORT_COMMAND_RESERVED0_FIELD,
    &XIF_PORT_COMMAND_PORTSELECT_FIELD,
    &XIF_PORT_COMMAND_PORTOPCODE_FIELD,
    &XIF_PORT_COMMAND_PORTADDRESS_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_COMMAND_REG = 
{
    "PORT_COMMAND",
#if RU_INCLUDE_DESC
    "XIF_PORT_COMMAND Register",
    "Provides dataPort read/write access to various RAMs.",
#endif
    XIF_PORT_COMMAND_REG_OFFSET,
    0,
    0,
    482,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    5,
    XIF_PORT_COMMAND_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_0_FIELDS[] =
{
    &XIF_PORT_DATA_0_PORTDATA0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_0_REG = 
{
    "PORT_DATA_0",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_0 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_0_REG_OFFSET,
    0,
    0,
    483,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_1_FIELDS[] =
{
    &XIF_PORT_DATA_1_PORTDATA1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_1_REG = 
{
    "PORT_DATA_1",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_1 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_1_REG_OFFSET,
    0,
    0,
    484,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_2_FIELDS[] =
{
    &XIF_PORT_DATA_2_PORTDATA2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_2_REG = 
{
    "PORT_DATA_2",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_2 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_2_REG_OFFSET,
    0,
    0,
    485,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_3
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_3_FIELDS[] =
{
    &XIF_PORT_DATA_3_PORTDATA3_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_3_REG = 
{
    "PORT_DATA_3",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_3 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_3_REG_OFFSET,
    0,
    0,
    486,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_3_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_4
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_4_FIELDS[] =
{
    &XIF_PORT_DATA_4_PORTDATA4_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_4_REG = 
{
    "PORT_DATA_4",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_4 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_4_REG_OFFSET,
    0,
    0,
    487,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_4_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_5
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_5_FIELDS[] =
{
    &XIF_PORT_DATA_5_PORTDATA5_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_5_REG = 
{
    "PORT_DATA_5",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_5 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_5_REG_OFFSET,
    0,
    0,
    488,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_5_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_6
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_6_FIELDS[] =
{
    &XIF_PORT_DATA_6_PORTDATA6_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_6_REG = 
{
    "PORT_DATA_6",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_6 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_6_REG_OFFSET,
    0,
    0,
    489,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_6_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_7
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_7_FIELDS[] =
{
    &XIF_PORT_DATA_7_PORTDATA7_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_7_REG = 
{
    "PORT_DATA_7",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_7 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_7_REG_OFFSET,
    0,
    0,
    490,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_7_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_MACSEC
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_MACSEC_FIELDS[] =
{
    &XIF_MACSEC_RESERVED0_FIELD,
    &XIF_MACSEC_CFGMACSECETHERTYPE_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_MACSEC_REG = 
{
    "MACSEC",
#if RU_INCLUDE_DESC
    "XIF_MACSEC Register",
    "This register specifies the 802.1ae MacSec Ethertype to be inserted"
    "into the packet.",
#endif
    XIF_MACSEC_REG_OFFSET,
    0,
    0,
    491,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_MACSEC_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_XMT_OFFSET
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_XMT_OFFSET_FIELDS[] =
{
    &XIF_XPN_XMT_OFFSET_RESERVED0_FIELD,
    &XIF_XPN_XMT_OFFSET_CFGXPNXMTOFFSET_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_XMT_OFFSET_REG = 
{
    "XPN_XMT_OFFSET",
#if RU_INCLUDE_DESC
    "XIF_XPN_XMT_OFFSET Register",
    "Specifies the transmit offset, relative to the current MPCP.",
#endif
    XIF_XPN_XMT_OFFSET_REG_OFFSET,
    0,
    0,
    492,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_XPN_XMT_OFFSET_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_TIMESTAMP_OFFSET
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_TIMESTAMP_OFFSET_FIELDS[] =
{
    &XIF_XPN_TIMESTAMP_OFFSET_CFGXPNMPCPTSOFFSET_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_TIMESTAMP_OFFSET_REG = 
{
    "XPN_TIMESTAMP_OFFSET",
#if RU_INCLUDE_DESC
    "XIF_XPN_TIMESTAMP_OFFSET Register",
    "Specifies the offset to add to MPCP's timestamp.",
#endif
    XIF_XPN_TIMESTAMP_OFFSET_REG_OFFSET,
    0,
    0,
    493,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_TIMESTAMP_OFFSET_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_TS_JITTER_THRESH
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_TS_JITTER_THRESH_FIELDS[] =
{
    &XIF_TS_JITTER_THRESH_RESERVED0_FIELD,
    &XIF_TS_JITTER_THRESH_CFGTSJTTRTHRESH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_TS_JITTER_THRESH_REG = 
{
    "TS_JITTER_THRESH",
#if RU_INCLUDE_DESC
    "XIF_TS_JITTER_THRESH Register",
    "Specifies the threshold to generate pmcRxTsJitter interrupt.",
#endif
    XIF_TS_JITTER_THRESH_REG_OFFSET,
    0,
    0,
    494,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_TS_JITTER_THRESH_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_TS_UPDATE
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_TS_UPDATE_FIELDS[] =
{
    &XIF_TS_UPDATE_CFGTSFULLUPDTHR_FIELD,
    &XIF_TS_UPDATE_CFGENAUTOTSUPD_FIELD,
    &XIF_TS_UPDATE_RESERVED0_FIELD,
    &XIF_TS_UPDATE_CFGTSUPDPER_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_TS_UPDATE_REG = 
{
    "TS_UPDATE",
#if RU_INCLUDE_DESC
    "XIF_TS_UPDATE Register",
    "Provides timestamp update control.",
#endif
    XIF_TS_UPDATE_REG_OFFSET,
    0,
    0,
    495,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    4,
    XIF_TS_UPDATE_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_GNT_OVERHEAD
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_GNT_OVERHEAD_FIELDS[] =
{
    &XIF_GNT_OVERHEAD_RESERVED0_FIELD,
    &XIF_GNT_OVERHEAD_CFGGNTOH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_GNT_OVERHEAD_REG = 
{
    "GNT_OVERHEAD",
#if RU_INCLUDE_DESC
    "XIF_GNT_OVERHEAD Register",
    "Specifies the burst overhead for normal grant.",
#endif
    XIF_GNT_OVERHEAD_REG_OFFSET,
    0,
    0,
    496,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_GNT_OVERHEAD_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_DISCOVER_OVERHEAD
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_DISCOVER_OVERHEAD_FIELDS[] =
{
    &XIF_DISCOVER_OVERHEAD_RESERVED0_FIELD,
    &XIF_DISCOVER_OVERHEAD_CFGDISCOH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_DISCOVER_OVERHEAD_REG = 
{
    "DISCOVER_OVERHEAD",
#if RU_INCLUDE_DESC
    "XIF_DISCOVER_OVERHEAD Register",
    "Specifies the burst overhead for discovery grant.",
#endif
    XIF_DISCOVER_OVERHEAD_REG_OFFSET,
    0,
    0,
    497,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_DISCOVER_OVERHEAD_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_DISCOVER_INFO
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_DISCOVER_INFO_FIELDS[] =
{
    &XIF_DISCOVER_INFO_RESERVED0_FIELD,
    &XIF_DISCOVER_INFO_CFGDISCINFOFLD_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_DISCOVER_INFO_REG = 
{
    "DISCOVER_INFO",
#if RU_INCLUDE_DESC
    "XIF_DISCOVER_INFO Register",
    "Specifies the discovery information field.",
#endif
    XIF_DISCOVER_INFO_REG_OFFSET,
    0,
    0,
    498,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_DISCOVER_INFO_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_OVERSIZE_THRESH
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_OVERSIZE_THRESH_FIELDS[] =
{
    &XIF_XPN_OVERSIZE_THRESH_RESERVED0_FIELD,
    &XIF_XPN_OVERSIZE_THRESH_CFGXPNOVRSZTHRESH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_OVERSIZE_THRESH_REG = 
{
    "XPN_OVERSIZE_THRESH",
#if RU_INCLUDE_DESC
    "XIF_XPN_OVERSIZE_THRESH Register",
    "Specifies the oversize threshold to increment oversize stat.",
#endif
    XIF_XPN_OVERSIZE_THRESH_REG_OFFSET,
    0,
    0,
    499,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_XPN_OVERSIZE_THRESH_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SECRX_KEYNUM
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SECRX_KEYNUM_FIELDS[] =
{
    &XIF_SECRX_KEYNUM_KEYSTATRX_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SECRX_KEYNUM_REG = 
{
    "SECRX_KEYNUM",
#if RU_INCLUDE_DESC
    "XIF_SECRX_KEYNUM Register",
    "Provides downstream encryption key number stat, per LLID.",
#endif
    XIF_SECRX_KEYNUM_REG_OFFSET,
    0,
    0,
    500,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SECRX_KEYNUM_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SECRX_ENCRYPT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SECRX_ENCRYPT_FIELDS[] =
{
    &XIF_SECRX_ENCRYPT_ENCRSTATRX_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SECRX_ENCRYPT_REG = 
{
    "SECRX_ENCRYPT",
#if RU_INCLUDE_DESC
    "XIF_SECRX_ENCRYPT Register",
    "Provides downstream encryption stat, per LLID.",
#endif
    XIF_SECRX_ENCRYPT_REG_OFFSET,
    0,
    0,
    501,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SECRX_ENCRYPT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_FRAME_RX_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_FRAME_RX_CNT_FIELDS[] =
{
    &XIF_PMC_FRAME_RX_CNT_PMCRXFRAMECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_FRAME_RX_CNT_REG = 
{
    "PMC_FRAME_RX_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_FRAME_RX_CNT Register",
    "PMC-RX receive frame count stat.",
#endif
    XIF_PMC_FRAME_RX_CNT_REG_OFFSET,
    0,
    0,
    502,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PMC_FRAME_RX_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_BYTE_RX_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_BYTE_RX_CNT_FIELDS[] =
{
    &XIF_PMC_BYTE_RX_CNT_PMCRXBYTECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_BYTE_RX_CNT_REG = 
{
    "PMC_BYTE_RX_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_BYTE_RX_CNT Register",
    "PMC-RX byte count stat.",
#endif
    XIF_PMC_BYTE_RX_CNT_REG_OFFSET,
    0,
    0,
    503,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PMC_BYTE_RX_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_RUNT_RX_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_RUNT_RX_CNT_FIELDS[] =
{
    &XIF_PMC_RUNT_RX_CNT_PMCRXRUNTCNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_RUNT_RX_CNT_REG = 
{
    "PMC_RUNT_RX_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_RUNT_RX_CNT Register",
    "PMC-RX runt count stat.",
#endif
    XIF_PMC_RUNT_RX_CNT_REG_OFFSET,
    0,
    0,
    504,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PMC_RUNT_RX_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_CW_ERR_RX_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_CW_ERR_RX_CNT_FIELDS[] =
{
    &XIF_PMC_CW_ERR_RX_CNT_PMCRXCWERRCNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_CW_ERR_RX_CNT_REG = 
{
    "PMC_CW_ERR_RX_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_CW_ERR_RX_CNT Register",
    "PMC-RX code word error stat.",
#endif
    XIF_PMC_CW_ERR_RX_CNT_REG_OFFSET,
    0,
    0,
    505,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PMC_CW_ERR_RX_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_CRC8_ERR_RX_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_CRC8_ERR_RX_CNT_FIELDS[] =
{
    &XIF_PMC_CRC8_ERR_RX_CNT_PMCRXCRC8ERRCNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_CRC8_ERR_RX_CNT_REG = 
{
    "PMC_CRC8_ERR_RX_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_CRC8_ERR_RX_CNT Register",
    "PMC-RX crc8 error stat.",
#endif
    XIF_PMC_CRC8_ERR_RX_CNT_REG_OFFSET,
    0,
    0,
    506,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PMC_CRC8_ERR_RX_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_DATA_FRM_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_DATA_FRM_CNT_FIELDS[] =
{
    &XIF_XPN_DATA_FRM_CNT_XPNDTFRAMECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_DATA_FRM_CNT_REG = 
{
    "XPN_DATA_FRM_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_DATA_FRM_CNT Register",
    "XPN transmit data frame count.",
#endif
    XIF_XPN_DATA_FRM_CNT_REG_OFFSET,
    0,
    0,
    507,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_DATA_FRM_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_DATA_BYTE_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_DATA_BYTE_CNT_FIELDS[] =
{
    &XIF_XPN_DATA_BYTE_CNT_XPNDTBYTECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_DATA_BYTE_CNT_REG = 
{
    "XPN_DATA_BYTE_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_DATA_BYTE_CNT Register",
    "XPN transmit data byte count.",
#endif
    XIF_XPN_DATA_BYTE_CNT_REG_OFFSET,
    0,
    0,
    508,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_DATA_BYTE_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_MPCP_FRM_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_MPCP_FRM_CNT_FIELDS[] =
{
    &XIF_XPN_MPCP_FRM_CNT_XPNMPCPFRAMECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_MPCP_FRM_CNT_REG = 
{
    "XPN_MPCP_FRM_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_MPCP_FRM_CNT Register",
    "XPN transmit MPCP frame count.",
#endif
    XIF_XPN_MPCP_FRM_CNT_REG_OFFSET,
    0,
    0,
    509,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_MPCP_FRM_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_OAM_FRM_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_OAM_FRM_CNT_FIELDS[] =
{
    &XIF_XPN_OAM_FRM_CNT_XPNOAMFRAMECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_OAM_FRM_CNT_REG = 
{
    "XPN_OAM_FRM_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_OAM_FRM_CNT Register",
    "XPN transmit OAM frame count.",
#endif
    XIF_XPN_OAM_FRM_CNT_REG_OFFSET,
    0,
    0,
    510,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_OAM_FRM_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_OAM_BYTE_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_OAM_BYTE_CNT_FIELDS[] =
{
    &XIF_XPN_OAM_BYTE_CNT_XPNOAMBYTECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_OAM_BYTE_CNT_REG = 
{
    "XPN_OAM_BYTE_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_OAM_BYTE_CNT Register",
    "XPN transmit OAM byte count.",
#endif
    XIF_XPN_OAM_BYTE_CNT_REG_OFFSET,
    0,
    0,
    511,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_OAM_BYTE_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_OVERSIZE_FRM_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_OVERSIZE_FRM_CNT_FIELDS[] =
{
    &XIF_XPN_OVERSIZE_FRM_CNT_XPNDTOVERSIZECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_OVERSIZE_FRM_CNT_REG = 
{
    "XPN_OVERSIZE_FRM_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_OVERSIZE_FRM_CNT Register",
    "XPN transmit oversize frame stat.",
#endif
    XIF_XPN_OVERSIZE_FRM_CNT_REG_OFFSET,
    0,
    0,
    512,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_XPN_OVERSIZE_FRM_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_ABORT_FRM_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_ABORT_FRM_CNT_FIELDS[] =
{
    &XIF_SEC_ABORT_FRM_CNT_SECRXABORTFRMCNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_ABORT_FRM_CNT_REG = 
{
    "SEC_ABORT_FRM_CNT",
#if RU_INCLUDE_DESC
    "XIF_SEC_ABORT_FRM_CNT Register",
    "SEC-RX abort frame stat.",
#endif
    XIF_SEC_ABORT_FRM_CNT_REG_OFFSET,
    0,
    0,
    513,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_ABORT_FRM_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMC_TX_NEG_EVENT_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMC_TX_NEG_EVENT_CNT_FIELDS[] =
{
    &XIF_PMC_TX_NEG_EVENT_CNT_RESERVED0_FIELD,
    &XIF_PMC_TX_NEG_EVENT_CNT_PMCTXNEGEVENTCNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMC_TX_NEG_EVENT_CNT_REG = 
{
    "PMC_TX_NEG_EVENT_CNT",
#if RU_INCLUDE_DESC
    "XIF_PMC_TX_NEG_EVENT_CNT Register",
    "PMC-TX negative transmit time event.",
#endif
    XIF_PMC_TX_NEG_EVENT_CNT_REG_OFFSET,
    0,
    0,
    514,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_PMC_TX_NEG_EVENT_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_XPN_IDLE_PKT_CNT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_XPN_IDLE_PKT_CNT_FIELDS[] =
{
    &XIF_XPN_IDLE_PKT_CNT_RESERVED0_FIELD,
    &XIF_XPN_IDLE_PKT_CNT_XPNIDLEFRAMECNT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_XPN_IDLE_PKT_CNT_REG = 
{
    "XPN_IDLE_PKT_CNT",
#if RU_INCLUDE_DESC
    "XIF_XPN_IDLE_PKT_CNT Register",
    "Idle packet count.",
#endif
    XIF_XPN_IDLE_PKT_CNT_REG_OFFSET,
    0,
    0,
    515,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_XPN_IDLE_PKT_CNT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_0_FIELDS[] =
{
    &XIF_LLID_0_RESERVED0_FIELD,
    &XIF_LLID_0_CFGONULLID0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_0_REG = 
{
    "LLID_0",
#if RU_INCLUDE_DESC
    "XIF_LLID_0 Register",
    "Configures LLID index 0 translation.",
#endif
    XIF_LLID_0_REG_OFFSET,
    0,
    0,
    516,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_1_FIELDS[] =
{
    &XIF_LLID_1_RESERVED0_FIELD,
    &XIF_LLID_1_CFGONULLID1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_1_REG = 
{
    "LLID_1",
#if RU_INCLUDE_DESC
    "XIF_LLID_1 Register",
    "Configures LLID index 1 translation.",
#endif
    XIF_LLID_1_REG_OFFSET,
    0,
    0,
    517,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_2_FIELDS[] =
{
    &XIF_LLID_2_RESERVED0_FIELD,
    &XIF_LLID_2_CFGONULLID2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_2_REG = 
{
    "LLID_2",
#if RU_INCLUDE_DESC
    "XIF_LLID_2 Register",
    "Configures LLID index 2 translation.",
#endif
    XIF_LLID_2_REG_OFFSET,
    0,
    0,
    518,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_3
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_3_FIELDS[] =
{
    &XIF_LLID_3_RESERVED0_FIELD,
    &XIF_LLID_3_CFGONULLID3_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_3_REG = 
{
    "LLID_3",
#if RU_INCLUDE_DESC
    "XIF_LLID_3 Register",
    "Configures LLID index 3 translation.",
#endif
    XIF_LLID_3_REG_OFFSET,
    0,
    0,
    519,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_3_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_4
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_4_FIELDS[] =
{
    &XIF_LLID_4_RESERVED0_FIELD,
    &XIF_LLID_4_CFGONULLID4_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_4_REG = 
{
    "LLID_4",
#if RU_INCLUDE_DESC
    "XIF_LLID_4 Register",
    "Configures LLID index 4 translation.",
#endif
    XIF_LLID_4_REG_OFFSET,
    0,
    0,
    520,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_4_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_5
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_5_FIELDS[] =
{
    &XIF_LLID_5_RESERVED0_FIELD,
    &XIF_LLID_5_CFGONULLID5_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_5_REG = 
{
    "LLID_5",
#if RU_INCLUDE_DESC
    "XIF_LLID_5 Register",
    "Configures LLID index 5 translation.",
#endif
    XIF_LLID_5_REG_OFFSET,
    0,
    0,
    521,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_5_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_6
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_6_FIELDS[] =
{
    &XIF_LLID_6_RESERVED0_FIELD,
    &XIF_LLID_6_CFGONULLID6_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_6_REG = 
{
    "LLID_6",
#if RU_INCLUDE_DESC
    "XIF_LLID_6 Register",
    "Configures LLID index 6 translation.",
#endif
    XIF_LLID_6_REG_OFFSET,
    0,
    0,
    522,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_6_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_7
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_7_FIELDS[] =
{
    &XIF_LLID_7_RESERVED0_FIELD,
    &XIF_LLID_7_CFGONULLID7_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_7_REG = 
{
    "LLID_7",
#if RU_INCLUDE_DESC
    "XIF_LLID_7 Register",
    "Configures LLID index 7 translation.",
#endif
    XIF_LLID_7_REG_OFFSET,
    0,
    0,
    523,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_7_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_8
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_8_FIELDS[] =
{
    &XIF_LLID_8_RESERVED0_FIELD,
    &XIF_LLID_8_CFGONULLID8_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_8_REG = 
{
    "LLID_8",
#if RU_INCLUDE_DESC
    "XIF_LLID_8 Register",
    "Configures LLID index 8 translation.",
#endif
    XIF_LLID_8_REG_OFFSET,
    0,
    0,
    524,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_8_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_9
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_9_FIELDS[] =
{
    &XIF_LLID_9_RESERVED0_FIELD,
    &XIF_LLID_9_CFGONULLID9_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_9_REG = 
{
    "LLID_9",
#if RU_INCLUDE_DESC
    "XIF_LLID_9 Register",
    "Configures LLID index 9 translation.",
#endif
    XIF_LLID_9_REG_OFFSET,
    0,
    0,
    525,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_9_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_10
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_10_FIELDS[] =
{
    &XIF_LLID_10_RESERVED0_FIELD,
    &XIF_LLID_10_CFGONULLID10_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_10_REG = 
{
    "LLID_10",
#if RU_INCLUDE_DESC
    "XIF_LLID_10 Register",
    "Configures LLID index 10 translation.",
#endif
    XIF_LLID_10_REG_OFFSET,
    0,
    0,
    526,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_10_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_11
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_11_FIELDS[] =
{
    &XIF_LLID_11_RESERVED0_FIELD,
    &XIF_LLID_11_CFGONULLID11_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_11_REG = 
{
    "LLID_11",
#if RU_INCLUDE_DESC
    "XIF_LLID_11 Register",
    "Configures LLID index 11 translation.",
#endif
    XIF_LLID_11_REG_OFFSET,
    0,
    0,
    527,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_11_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_12
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_12_FIELDS[] =
{
    &XIF_LLID_12_RESERVED0_FIELD,
    &XIF_LLID_12_CFGONULLID12_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_12_REG = 
{
    "LLID_12",
#if RU_INCLUDE_DESC
    "XIF_LLID_12 Register",
    "Configures LLID index 12 translation.",
#endif
    XIF_LLID_12_REG_OFFSET,
    0,
    0,
    528,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_12_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_13
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_13_FIELDS[] =
{
    &XIF_LLID_13_RESERVED0_FIELD,
    &XIF_LLID_13_CFGONULLID13_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_13_REG = 
{
    "LLID_13",
#if RU_INCLUDE_DESC
    "XIF_LLID_13 Register",
    "Configures LLID index 13 translation.",
#endif
    XIF_LLID_13_REG_OFFSET,
    0,
    0,
    529,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_13_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_14
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_14_FIELDS[] =
{
    &XIF_LLID_14_RESERVED0_FIELD,
    &XIF_LLID_14_CFGONULLID14_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_14_REG = 
{
    "LLID_14",
#if RU_INCLUDE_DESC
    "XIF_LLID_14 Register",
    "Configures LLID index 14 translation.",
#endif
    XIF_LLID_14_REG_OFFSET,
    0,
    0,
    530,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_14_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_15
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_15_FIELDS[] =
{
    &XIF_LLID_15_RESERVED0_FIELD,
    &XIF_LLID_15_CFGONULLID15_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_15_REG = 
{
    "LLID_15",
#if RU_INCLUDE_DESC
    "XIF_LLID_15 Register",
    "Configures LLID index 15 translation.",
#endif
    XIF_LLID_15_REG_OFFSET,
    0,
    0,
    531,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_15_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_16
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_16_FIELDS[] =
{
    &XIF_LLID_16_RESERVED0_FIELD,
    &XIF_LLID_16_CFGONULLID16_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_16_REG = 
{
    "LLID_16",
#if RU_INCLUDE_DESC
    "XIF_LLID_16 Register",
    "Configures LLID index 16 translation.",
#endif
    XIF_LLID_16_REG_OFFSET,
    0,
    0,
    532,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_16_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_17
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_17_FIELDS[] =
{
    &XIF_LLID_17_RESERVED0_FIELD,
    &XIF_LLID_17_CFGONULLID17_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_17_REG = 
{
    "LLID_17",
#if RU_INCLUDE_DESC
    "XIF_LLID_17 Register",
    "Configures LLID index 17 translation.",
#endif
    XIF_LLID_17_REG_OFFSET,
    0,
    0,
    533,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_17_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_18
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_18_FIELDS[] =
{
    &XIF_LLID_18_RESERVED0_FIELD,
    &XIF_LLID_18_CFGONULLID18_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_18_REG = 
{
    "LLID_18",
#if RU_INCLUDE_DESC
    "XIF_LLID_18 Register",
    "Configures LLID index 18 translation.",
#endif
    XIF_LLID_18_REG_OFFSET,
    0,
    0,
    534,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_18_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_19
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_19_FIELDS[] =
{
    &XIF_LLID_19_RESERVED0_FIELD,
    &XIF_LLID_19_CFGONULLID19_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_19_REG = 
{
    "LLID_19",
#if RU_INCLUDE_DESC
    "XIF_LLID_19 Register",
    "Configures LLID index 19 translation.",
#endif
    XIF_LLID_19_REG_OFFSET,
    0,
    0,
    535,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_19_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_20
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_20_FIELDS[] =
{
    &XIF_LLID_20_RESERVED0_FIELD,
    &XIF_LLID_20_CFGONULLID20_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_20_REG = 
{
    "LLID_20",
#if RU_INCLUDE_DESC
    "XIF_LLID_20 Register",
    "Configures LLID index 20 translation.",
#endif
    XIF_LLID_20_REG_OFFSET,
    0,
    0,
    536,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_20_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_21
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_21_FIELDS[] =
{
    &XIF_LLID_21_RESERVED0_FIELD,
    &XIF_LLID_21_CFGONULLID21_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_21_REG = 
{
    "LLID_21",
#if RU_INCLUDE_DESC
    "XIF_LLID_21 Register",
    "Configures LLID index 21 translation.",
#endif
    XIF_LLID_21_REG_OFFSET,
    0,
    0,
    537,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_21_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_22
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_22_FIELDS[] =
{
    &XIF_LLID_22_RESERVED0_FIELD,
    &XIF_LLID_22_CFGONULLID22_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_22_REG = 
{
    "LLID_22",
#if RU_INCLUDE_DESC
    "XIF_LLID_22 Register",
    "Configures LLID index 22 translation.",
#endif
    XIF_LLID_22_REG_OFFSET,
    0,
    0,
    538,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_22_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_23
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_23_FIELDS[] =
{
    &XIF_LLID_23_RESERVED0_FIELD,
    &XIF_LLID_23_CFGONULLID23_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_23_REG = 
{
    "LLID_23",
#if RU_INCLUDE_DESC
    "XIF_LLID_23 Register",
    "Configures LLID index 23 translation.",
#endif
    XIF_LLID_23_REG_OFFSET,
    0,
    0,
    539,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_23_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_24
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_24_FIELDS[] =
{
    &XIF_LLID_24_RESERVED0_FIELD,
    &XIF_LLID_24_CFGONULLID24_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_24_REG = 
{
    "LLID_24",
#if RU_INCLUDE_DESC
    "XIF_LLID_24 Register",
    "Configures LLID index 24 translation.",
#endif
    XIF_LLID_24_REG_OFFSET,
    0,
    0,
    540,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_24_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_25
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_25_FIELDS[] =
{
    &XIF_LLID_25_RESERVED0_FIELD,
    &XIF_LLID_25_CFGONULLID25_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_25_REG = 
{
    "LLID_25",
#if RU_INCLUDE_DESC
    "XIF_LLID_25 Register",
    "Configures LLID index 25 translation.",
#endif
    XIF_LLID_25_REG_OFFSET,
    0,
    0,
    541,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_25_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_26
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_26_FIELDS[] =
{
    &XIF_LLID_26_RESERVED0_FIELD,
    &XIF_LLID_26_CFGONULLID26_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_26_REG = 
{
    "LLID_26",
#if RU_INCLUDE_DESC
    "XIF_LLID_26 Register",
    "Configures LLID index 26 translation.",
#endif
    XIF_LLID_26_REG_OFFSET,
    0,
    0,
    542,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_26_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_27
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_27_FIELDS[] =
{
    &XIF_LLID_27_RESERVED0_FIELD,
    &XIF_LLID_27_CFGONULLID27_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_27_REG = 
{
    "LLID_27",
#if RU_INCLUDE_DESC
    "XIF_LLID_27 Register",
    "Configures LLID index 27 translation.",
#endif
    XIF_LLID_27_REG_OFFSET,
    0,
    0,
    543,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_27_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_28
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_28_FIELDS[] =
{
    &XIF_LLID_28_RESERVED0_FIELD,
    &XIF_LLID_28_CFGONULLID28_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_28_REG = 
{
    "LLID_28",
#if RU_INCLUDE_DESC
    "XIF_LLID_28 Register",
    "Configures LLID index 28 translation.",
#endif
    XIF_LLID_28_REG_OFFSET,
    0,
    0,
    544,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_28_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_29
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_29_FIELDS[] =
{
    &XIF_LLID_29_RESERVED0_FIELD,
    &XIF_LLID_29_CFGONULLID29_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_29_REG = 
{
    "LLID_29",
#if RU_INCLUDE_DESC
    "XIF_LLID_29 Register",
    "Configures LLID index 29 translation.",
#endif
    XIF_LLID_29_REG_OFFSET,
    0,
    0,
    545,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_29_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_30
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_30_FIELDS[] =
{
    &XIF_LLID_30_RESERVED0_FIELD,
    &XIF_LLID_30_CFGONULLID30_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_30_REG = 
{
    "LLID_30",
#if RU_INCLUDE_DESC
    "XIF_LLID_30 Register",
    "Configures LLID index 30 translation.",
#endif
    XIF_LLID_30_REG_OFFSET,
    0,
    0,
    546,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_30_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_LLID_31
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_LLID_31_FIELDS[] =
{
    &XIF_LLID_31_RESERVED0_FIELD,
    &XIF_LLID_31_CFGONULLID31_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_LLID_31_REG = 
{
    "LLID_31",
#if RU_INCLUDE_DESC
    "XIF_LLID_31 Register",
    "Configures LLID index 31 translation.",
#endif
    XIF_LLID_31_REG_OFFSET,
    0,
    0,
    547,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_LLID_31_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_MAX_MPCP_UPDATE
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_MAX_MPCP_UPDATE_FIELDS[] =
{
    &XIF_MAX_MPCP_UPDATE_CFGMAXPOSMPCPUPD_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_MAX_MPCP_UPDATE_REG = 
{
    "MAX_MPCP_UPDATE",
#if RU_INCLUDE_DESC
    "XIF_MAX_MPCP_UPDATE Register",
    "Specifies the maxifum MPCP update.",
#endif
    XIF_MAX_MPCP_UPDATE_REG_OFFSET,
    0,
    0,
    548,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_MAX_MPCP_UPDATE_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_IPG_INSERTION
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_IPG_INSERTION_FIELDS[] =
{
    &XIF_IPG_INSERTION_RESERVED0_FIELD,
    &XIF_IPG_INSERTION_CFGSHORTIPG_FIELD,
    &XIF_IPG_INSERTION_CFGINSERTIPG_FIELD,
    &XIF_IPG_INSERTION_RESERVED1_FIELD,
    &XIF_IPG_INSERTION_CFGIPGWORD_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_IPG_INSERTION_REG = 
{
    "IPG_INSERTION",
#if RU_INCLUDE_DESC
    "XIF_IPG_INSERTION Register",
    "Specifies the IPG insertion between packets.",
#endif
    XIF_IPG_INSERTION_REG_OFFSET,
    0,
    0,
    549,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    5,
    XIF_IPG_INSERTION_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_TRANSPORT_TIME
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_TRANSPORT_TIME_FIELDS[] =
{
    &XIF_TRANSPORT_TIME_CFTRANSPORTTIME_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_TRANSPORT_TIME_REG = 
{
    "TRANSPORT_TIME",
#if RU_INCLUDE_DESC
    "XIF_TRANSPORT_TIME Register",
    "Specifies the MPCP time to generate a one pulse per second (PPS)"
    "signal.",
#endif
    XIF_TRANSPORT_TIME_REG_OFFSET,
    0,
    0,
    550,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_TRANSPORT_TIME_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_MPCP_TIME
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_MPCP_TIME_FIELDS[] =
{
    &XIF_MPCP_TIME_CURMPCPTS_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_MPCP_TIME_REG = 
{
    "MPCP_TIME",
#if RU_INCLUDE_DESC
    "XIF_MPCP_TIME Register",
    "Provides the current MPCP time.",
#endif
    XIF_MPCP_TIME_REG_OFFSET,
    0,
    0,
    551,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_MPCP_TIME_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_OVERLAP_GNT_OH
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_OVERLAP_GNT_OH_FIELDS[] =
{
    &XIF_OVERLAP_GNT_OH_CFGOVRLPOH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_OVERLAP_GNT_OH_REG = 
{
    "OVERLAP_GNT_OH",
#if RU_INCLUDE_DESC
    "XIF_OVERLAP_GNT_OH Register",
    "Provides the overhead for overlapping grant.",
#endif
    XIF_OVERLAP_GNT_OH_REG_OFFSET,
    0,
    0,
    552,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_OVERLAP_GNT_OH_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_MAC_MODE
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_MAC_MODE_FIELDS[] =
{
    &XIF_MAC_MODE_RESERVED0_FIELD,
    &XIF_MAC_MODE_CFGENNOGNTXMT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_MAC_MODE_REG = 
{
    "MAC_MODE",
#if RU_INCLUDE_DESC
    "XIF_MAC_MODE Register",
    "Specifies the MAC mode of operation.",
#endif
    XIF_MAC_MODE_REG_OFFSET,
    0,
    0,
    553,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_MAC_MODE_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PMCTX_CTL
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PMCTX_CTL_FIELDS[] =
{
    &XIF_PMCTX_CTL_RESERVED0_FIELD,
    &XIF_PMCTX_CTL_CFGMPCPUPDPERIOD_FIELD,
    &XIF_PMCTX_CTL_RESERVED1_FIELD,
    &XIF_PMCTX_CTL_CFGDIS4IDLEB4STARTCHAR_FIELD,
    &XIF_PMCTX_CTL_CFGENIDLEDSCRD_FIELD,
    &XIF_PMCTX_CTL_CFGSELTXPONTIME_FIELD,
    &XIF_PMCTX_CTL_CFGMPCPCONTUPD_FIELD,
    &XIF_PMCTX_CTL_CFGENMAXMPCPUPD_FIELD,
    &XIF_PMCTX_CTL_CFGENNEGTIMEABORT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PMCTX_CTL_REG = 
{
    "PMCTX_CTL",
#if RU_INCLUDE_DESC
    "XIF_PMCTX_CTL Register",
    "Provides the control for PMC.",
#endif
    XIF_PMCTX_CTL_REG_OFFSET,
    0,
    0,
    554,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    9,
    XIF_PMCTX_CTL_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_CTL
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_CTL_FIELDS[] =
{
    &XIF_SEC_CTL_RESERVED0_FIELD,
    &XIF_SEC_CTL_CFGENAES_256_RX_FIELD,
    &XIF_SEC_CTL_CFGENAES_256_TX_FIELD,
    &XIF_SEC_CTL_CFG_MACSEC_XPN_TX_FIELD,
    &XIF_SEC_CTL_CFG_MACSEC_XPN_RX_FIELD,
    &XIF_SEC_CTL_CFGKEYNUM_4_AN_3_FIELD,
    &XIF_SEC_CTL_CFGKEYNUM_4_AN_2_FIELD,
    &XIF_SEC_CTL_CFGKEYNUM_4_AN_1_FIELD,
    &XIF_SEC_CTL_CFGKEYNUM_4_AN_0_FIELD,
    &XIF_SEC_CTL_RESERVED1_FIELD,
    &XIF_SEC_CTL_CFGSECRXENSHORTLEN_FIELD,
    &XIF_SEC_CTL_CFGENSECTXFAKEAES_FIELD,
    &XIF_SEC_CTL_CFGENSECRXFAKEAES_FIELD,
    &XIF_SEC_CTL_CFGSECRXENPKTNUMRLOVR_FIELD,
    &XIF_SEC_CTL_RESERVED2_FIELD,
    &XIF_SEC_CTL_CFGSECTXENPKTNUMRLOVR_FIELD,
    &XIF_SEC_CTL_CFGENAEREPLAYPRCT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_CTL_REG = 
{
    "SEC_CTL",
#if RU_INCLUDE_DESC
    "XIF_SEC_CTL Register",
    "Provides control for security.",
#endif
    XIF_SEC_CTL_REG_OFFSET,
    0,
    0,
    555,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    17,
    XIF_SEC_CTL_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_AE_PKTNUM_WINDOW
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_AE_PKTNUM_WINDOW_FIELDS[] =
{
    &XIF_AE_PKTNUM_WINDOW_CFGAEPKTNUMWND_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_AE_PKTNUM_WINDOW_REG = 
{
    "AE_PKTNUM_WINDOW",
#if RU_INCLUDE_DESC
    "XIF_AE_PKTNUM_WINDOW Register",
    "Provides the tolerance for packet number reception in replay protection"
    "mode.  Only applicable in 802.1ae security mode.",
#endif
    XIF_AE_PKTNUM_WINDOW_REG_OFFSET,
    0,
    0,
    556,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_AE_PKTNUM_WINDOW_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_AE_PKTNUM_THRESH
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_AE_PKTNUM_THRESH_FIELDS[] =
{
    &XIF_AE_PKTNUM_THRESH_CFGPKTNUMMAXTHRESH_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_AE_PKTNUM_THRESH_REG = 
{
    "AE_PKTNUM_THRESH",
#if RU_INCLUDE_DESC
    "XIF_AE_PKTNUM_THRESH Register",
    "Provides the threshold to warn of impending packet number rollover on"
    "transmit.",
#endif
    XIF_AE_PKTNUM_THRESH_REG_OFFSET,
    0,
    0,
    557,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_AE_PKTNUM_THRESH_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SECTX_KEYNUM
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SECTX_KEYNUM_FIELDS[] =
{
    &XIF_SECTX_KEYNUM_KEYSTATTX_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SECTX_KEYNUM_REG = 
{
    "SECTX_KEYNUM",
#if RU_INCLUDE_DESC
    "XIF_SECTX_KEYNUM Register",
    "Provides upstream encryption key number stat, per LLID.",
#endif
    XIF_SECTX_KEYNUM_REG_OFFSET,
    0,
    0,
    558,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SECTX_KEYNUM_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SECTX_ENCRYPT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SECTX_ENCRYPT_FIELDS[] =
{
    &XIF_SECTX_ENCRYPT_ENCRSTATTX_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SECTX_ENCRYPT_REG = 
{
    "SECTX_ENCRYPT",
#if RU_INCLUDE_DESC
    "XIF_SECTX_ENCRYPT Register",
    "Provides upstream encryption  stat, per LLID.",
#endif
    XIF_SECTX_ENCRYPT_REG_OFFSET,
    0,
    0,
    559,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SECTX_ENCRYPT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_AE_PKTNUM_STAT
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_AE_PKTNUM_STAT_FIELDS[] =
{
    &XIF_AE_PKTNUM_STAT_RESERVED0_FIELD,
    &XIF_AE_PKTNUM_STAT_SECTXINDXWTPKTNUMMAX_FIELD,
    &XIF_AE_PKTNUM_STAT_RESERVED1_FIELD,
    &XIF_AE_PKTNUM_STAT_SECRXINDXWTPKTNUMABORT_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_AE_PKTNUM_STAT_REG = 
{
    "AE_PKTNUM_STAT",
#if RU_INCLUDE_DESC
    "XIF_AE_PKTNUM_STAT Register",
    "Provides packet number status.",
#endif
    XIF_AE_PKTNUM_STAT_REG_OFFSET,
    0,
    0,
    560,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    4,
    XIF_AE_PKTNUM_STAT_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_MPCP_UPDATE
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_MPCP_UPDATE_FIELDS[] =
{
    &XIF_MPCP_UPDATE_MPCPUPDPERIOD_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_MPCP_UPDATE_REG = 
{
    "MPCP_UPDATE",
#if RU_INCLUDE_DESC
    "XIF_MPCP_UPDATE Register",
    "Debug register showing time between MPCP updates.",
#endif
    XIF_MPCP_UPDATE_REG_OFFSET,
    0,
    0,
    561,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_MPCP_UPDATE_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_BURST_PRELAUNCH_OFFSET
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_BURST_PRELAUNCH_OFFSET_FIELDS[] =
{
    &XIF_BURST_PRELAUNCH_OFFSET_CFGBURSTPRELAUNCHOFFSET_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_BURST_PRELAUNCH_OFFSET_REG = 
{
    "BURST_PRELAUNCH_OFFSET",
#if RU_INCLUDE_DESC
    "XIF_BURST_PRELAUNCH_OFFSET Register",
    "Provides prelaunch time of burst data from ONU, relative to the"
    "grant-start-time.",
#endif
    XIF_BURST_PRELAUNCH_OFFSET_REG_OFFSET,
    0,
    0,
    562,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_BURST_PRELAUNCH_OFFSET_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_VLAN_TYPE
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_VLAN_TYPE_FIELDS[] =
{
    &XIF_VLAN_TYPE_RESERVED0_FIELD,
    &XIF_VLAN_TYPE_CFGVLANTYPE_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_VLAN_TYPE_REG = 
{
    "VLAN_TYPE",
#if RU_INCLUDE_DESC
    "XIF_VLAN_TYPE Register",
    "Provides a programmable VLAN type identifier for upstream P2P traffic.",
#endif
    XIF_VLAN_TYPE_REG_OFFSET,
    0,
    0,
    563,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_VLAN_TYPE_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_EN
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_EN_FIELDS[] =
{
    &XIF_P2P_AE_SCI_EN_CFGP2PSCIEN_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_EN_REG = 
{
    "P2P_AE_SCI_EN",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_EN Register",
    "Enables SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_EN_REG_OFFSET,
    0,
    0,
    564,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_EN_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_0_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_0_CFGP2PSCI_LO_0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_0_REG = 
{
    "P2P_AE_SCI_LO_0",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_0 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_0_REG_OFFSET,
    0,
    0,
    565,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_0_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_0_CFGP2PSCI_HI_0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_0_REG = 
{
    "P2P_AE_SCI_HI_0",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_0 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_0_REG_OFFSET,
    0,
    0,
    566,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_1_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_1_CFGP2PSCI_LO_1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_1_REG = 
{
    "P2P_AE_SCI_LO_1",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_1 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_1_REG_OFFSET,
    0,
    0,
    567,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_1_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_1_CFGP2PSCI_HI_1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_1_REG = 
{
    "P2P_AE_SCI_HI_1",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_1 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_1_REG_OFFSET,
    0,
    0,
    568,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_2_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_2_CFGP2PSCI_LO_2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_2_REG = 
{
    "P2P_AE_SCI_LO_2",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_2 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_2_REG_OFFSET,
    0,
    0,
    569,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_2_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_2_CFGP2PSCI_HI_2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_2_REG = 
{
    "P2P_AE_SCI_HI_2",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_2 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_2_REG_OFFSET,
    0,
    0,
    570,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_3
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_3_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_3_CFGP2PSCI_LO_3_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_3_REG = 
{
    "P2P_AE_SCI_LO_3",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_3 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_3_REG_OFFSET,
    0,
    0,
    571,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_3_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_3
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_3_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_3_CFGP2PSCI_HI_3_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_3_REG = 
{
    "P2P_AE_SCI_HI_3",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_3 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_3_REG_OFFSET,
    0,
    0,
    572,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_3_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_4
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_4_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_4_CFGP2PSCI_LO_4_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_4_REG = 
{
    "P2P_AE_SCI_LO_4",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_4 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_4_REG_OFFSET,
    0,
    0,
    573,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_4_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_4
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_4_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_4_CFGP2PSCI_HI_4_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_4_REG = 
{
    "P2P_AE_SCI_HI_4",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_4 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_4_REG_OFFSET,
    0,
    0,
    574,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_4_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_5
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_5_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_5_CFGP2PSCI_LO_5_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_5_REG = 
{
    "P2P_AE_SCI_LO_5",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_5 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_5_REG_OFFSET,
    0,
    0,
    575,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_5_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_5
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_5_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_5_CFGP2PSCI_HI_5_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_5_REG = 
{
    "P2P_AE_SCI_HI_5",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_5 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_5_REG_OFFSET,
    0,
    0,
    576,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_5_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_6
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_6_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_6_CFGP2PSCI_LO_6_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_6_REG = 
{
    "P2P_AE_SCI_LO_6",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_6 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_6_REG_OFFSET,
    0,
    0,
    577,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_6_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_6
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_6_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_6_CFGP2PSCI_HI_6_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_6_REG = 
{
    "P2P_AE_SCI_HI_6",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_6 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_6_REG_OFFSET,
    0,
    0,
    578,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_6_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_7
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_7_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_7_CFGP2PSCI_LO_7_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_7_REG = 
{
    "P2P_AE_SCI_LO_7",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_7 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_7_REG_OFFSET,
    0,
    0,
    579,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_7_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_7
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_7_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_7_CFGP2PSCI_HI_7_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_7_REG = 
{
    "P2P_AE_SCI_HI_7",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_7 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_7_REG_OFFSET,
    0,
    0,
    580,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_7_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_8
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_8_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_8_CFGP2PSCI_LO_8_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_8_REG = 
{
    "P2P_AE_SCI_LO_8",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_8 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_8_REG_OFFSET,
    0,
    0,
    581,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_8_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_8
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_8_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_8_CFGP2PSCI_HI_8_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_8_REG = 
{
    "P2P_AE_SCI_HI_8",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_8 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_8_REG_OFFSET,
    0,
    0,
    582,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_8_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_9
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_9_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_9_CFGP2PSCI_LO_9_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_9_REG = 
{
    "P2P_AE_SCI_LO_9",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_9 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_9_REG_OFFSET,
    0,
    0,
    583,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_9_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_9
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_9_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_9_CFGP2PSCI_HI_9_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_9_REG = 
{
    "P2P_AE_SCI_HI_9",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_9 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_9_REG_OFFSET,
    0,
    0,
    584,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_9_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_10
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_10_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_10_CFGP2PSCI_LO_10_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_10_REG = 
{
    "P2P_AE_SCI_LO_10",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_10 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_10_REG_OFFSET,
    0,
    0,
    585,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_10_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_10
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_10_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_10_CFGP2PSCI_HI_10_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_10_REG = 
{
    "P2P_AE_SCI_HI_10",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_10 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_10_REG_OFFSET,
    0,
    0,
    586,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_10_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_11
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_11_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_11_CFGP2PSCI_LO_11_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_11_REG = 
{
    "P2P_AE_SCI_LO_11",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_11 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_11_REG_OFFSET,
    0,
    0,
    587,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_11_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_11
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_11_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_11_CFGP2PSCI_HI_11_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_11_REG = 
{
    "P2P_AE_SCI_HI_11",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_11 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_11_REG_OFFSET,
    0,
    0,
    588,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_11_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_12
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_12_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_12_CFGP2PSCI_LO_12_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_12_REG = 
{
    "P2P_AE_SCI_LO_12",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_12 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_12_REG_OFFSET,
    0,
    0,
    589,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_12_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_12
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_12_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_12_CFGP2PSCI_HI_12_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_12_REG = 
{
    "P2P_AE_SCI_HI_12",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_12 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_12_REG_OFFSET,
    0,
    0,
    590,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_12_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_13
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_13_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_13_CFGP2PSCI_LO_13_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_13_REG = 
{
    "P2P_AE_SCI_LO_13",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_13 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_13_REG_OFFSET,
    0,
    0,
    591,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_13_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_13
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_13_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_13_CFGP2PSCI_HI_13_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_13_REG = 
{
    "P2P_AE_SCI_HI_13",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_13 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_13_REG_OFFSET,
    0,
    0,
    592,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_13_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_14
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_14_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_14_CFGP2PSCI_LO_14_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_14_REG = 
{
    "P2P_AE_SCI_LO_14",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_14 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_14_REG_OFFSET,
    0,
    0,
    593,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_14_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_14
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_14_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_14_CFGP2PSCI_HI_14_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_14_REG = 
{
    "P2P_AE_SCI_HI_14",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_14 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_14_REG_OFFSET,
    0,
    0,
    594,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_14_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_15
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_15_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_15_CFGP2PSCI_LO_15_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_15_REG = 
{
    "P2P_AE_SCI_LO_15",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_15 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_15_REG_OFFSET,
    0,
    0,
    595,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_15_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_15
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_15_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_15_CFGP2PSCI_HI_15_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_15_REG = 
{
    "P2P_AE_SCI_HI_15",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_15 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_15_REG_OFFSET,
    0,
    0,
    596,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_15_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SECRX_KEYNUM_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SECRX_KEYNUM_1_FIELDS[] =
{
    &XIF_SECRX_KEYNUM_1_KEYSTATRX_HI_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SECRX_KEYNUM_1_REG = 
{
    "SECRX_KEYNUM_1",
#if RU_INCLUDE_DESC
    "XIF_SECRX_KEYNUM_1 Register",
    "Provides addition per-LLID status of downstream security key for"
    "802.1ae P2P.",
#endif
    XIF_SECRX_KEYNUM_1_REG_OFFSET,
    0,
    0,
    597,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SECRX_KEYNUM_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_CTL_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_CTL_2_FIELDS[] =
{
    &XIF_CTL_2_RESERVED0_FIELD,
    &XIF_CTL_2_CFGEN1588ADJ4PARB4DA_FIELD,
    &XIF_CTL_2_CFGENTX1588_FIELD,
    &XIF_CTL_2_CFGDISP2PDNINDEXMAP_FIELD,
    &XIF_CTL_2_CFGDISP2PUPINDEXMAP_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_CTL_2_REG = 
{
    "CTL_2",
#if RU_INCLUDE_DESC
    "XIF_CTL_2 Register",
    "XIF control register.",
#endif
    XIF_CTL_2_REG_OFFSET,
    0,
    0,
    598,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    5,
    XIF_CTL_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_VLAN_TYPE_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_VLAN_TYPE_1_FIELDS[] =
{
    &XIF_VLAN_TYPE_1_RESERVED0_FIELD,
    &XIF_VLAN_TYPE_1_CFGVLANTYPE_1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_VLAN_TYPE_1_REG = 
{
    "VLAN_TYPE_1",
#if RU_INCLUDE_DESC
    "XIF_VLAN_TYPE_1 Register",
    "Provides a programmable VLAN type identifier for upstream P2P traffic.",
#endif
    XIF_VLAN_TYPE_1_REG_OFFSET,
    0,
    0,
    599,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_VLAN_TYPE_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_16
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_16_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_16_CFGP2PSCI_LO_16_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_16_REG = 
{
    "P2P_AE_SCI_LO_16",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_16 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_16_REG_OFFSET,
    0,
    0,
    600,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_16_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_16
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_16_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_16_CFGP2PSCI_HI_16_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_16_REG = 
{
    "P2P_AE_SCI_HI_16",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_16 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_16_REG_OFFSET,
    0,
    0,
    601,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_16_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_17
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_17_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_17_CFGP2PSCI_LO_17_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_17_REG = 
{
    "P2P_AE_SCI_LO_17",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_17 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_17_REG_OFFSET,
    0,
    0,
    602,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_17_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_17
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_17_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_17_CFGP2PSCI_HI_17_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_17_REG = 
{
    "P2P_AE_SCI_HI_17",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_17 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_17_REG_OFFSET,
    0,
    0,
    603,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_17_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_18
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_18_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_18_CFGP2PSCI_LO_18_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_18_REG = 
{
    "P2P_AE_SCI_LO_18",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_18 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_18_REG_OFFSET,
    0,
    0,
    604,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_18_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_18
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_18_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_18_CFGP2PSCI_HI_18_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_18_REG = 
{
    "P2P_AE_SCI_HI_18",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_18 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_18_REG_OFFSET,
    0,
    0,
    605,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_18_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_19
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_19_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_19_CFGP2PSCI_LO_19_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_19_REG = 
{
    "P2P_AE_SCI_LO_19",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_19 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_19_REG_OFFSET,
    0,
    0,
    606,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_19_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_19
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_19_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_19_CFGP2PSCI_HI_19_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_19_REG = 
{
    "P2P_AE_SCI_HI_19",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_19 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_19_REG_OFFSET,
    0,
    0,
    607,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_19_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_20
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_20_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_20_CFGP2PSCI_LO_20_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_20_REG = 
{
    "P2P_AE_SCI_LO_20",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_20 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_20_REG_OFFSET,
    0,
    0,
    608,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_20_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_20
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_20_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_20_CFGP2PSCI_HI_20_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_20_REG = 
{
    "P2P_AE_SCI_HI_20",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_20 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_20_REG_OFFSET,
    0,
    0,
    609,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_20_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_21
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_21_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_21_CFGP2PSCI_LO_21_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_21_REG = 
{
    "P2P_AE_SCI_LO_21",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_21 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_21_REG_OFFSET,
    0,
    0,
    610,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_21_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_21
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_21_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_21_CFGP2PSCI_HI_21_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_21_REG = 
{
    "P2P_AE_SCI_HI_21",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_21 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_21_REG_OFFSET,
    0,
    0,
    611,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_21_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_22
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_22_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_22_CFGP2PSCI_LO_22_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_22_REG = 
{
    "P2P_AE_SCI_LO_22",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_22 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_22_REG_OFFSET,
    0,
    0,
    612,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_22_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_22
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_22_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_22_CFGP2PSCI_HI_22_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_22_REG = 
{
    "P2P_AE_SCI_HI_22",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_22 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_22_REG_OFFSET,
    0,
    0,
    613,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_22_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_23
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_23_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_23_CFGP2PSCI_LO_23_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_23_REG = 
{
    "P2P_AE_SCI_LO_23",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_23 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_23_REG_OFFSET,
    0,
    0,
    614,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_23_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_23
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_23_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_23_CFGP2PSCI_HI_23_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_23_REG = 
{
    "P2P_AE_SCI_HI_23",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_23 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_23_REG_OFFSET,
    0,
    0,
    615,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_23_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_24
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_24_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_24_CFGP2PSCI_LO_24_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_24_REG = 
{
    "P2P_AE_SCI_LO_24",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_24 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_24_REG_OFFSET,
    0,
    0,
    616,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_24_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_24
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_24_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_24_CFGP2PSCI_HI_24_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_24_REG = 
{
    "P2P_AE_SCI_HI_24",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_24 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_24_REG_OFFSET,
    0,
    0,
    617,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_24_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_25
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_25_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_25_CFGP2PSCI_LO_25_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_25_REG = 
{
    "P2P_AE_SCI_LO_25",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_25 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_25_REG_OFFSET,
    0,
    0,
    618,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_25_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_25
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_25_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_25_CFGP2PSCI_HI_25_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_25_REG = 
{
    "P2P_AE_SCI_HI_25",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_25 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_25_REG_OFFSET,
    0,
    0,
    619,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_25_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_26
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_26_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_26_CFGP2PSCI_LO_26_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_26_REG = 
{
    "P2P_AE_SCI_LO_26",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_26 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_26_REG_OFFSET,
    0,
    0,
    620,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_26_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_26
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_26_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_26_CFGP2PSCI_HI_26_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_26_REG = 
{
    "P2P_AE_SCI_HI_26",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_26 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_26_REG_OFFSET,
    0,
    0,
    621,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_26_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_27
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_27_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_27_CFGP2PSCI_LO_27_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_27_REG = 
{
    "P2P_AE_SCI_LO_27",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_27 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_27_REG_OFFSET,
    0,
    0,
    622,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_27_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_27
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_27_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_27_CFGP2PSCI_HI_27_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_27_REG = 
{
    "P2P_AE_SCI_HI_27",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_27 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_27_REG_OFFSET,
    0,
    0,
    623,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_27_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_28
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_28_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_28_CFGP2PSCI_LO_28_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_28_REG = 
{
    "P2P_AE_SCI_LO_28",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_28 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_28_REG_OFFSET,
    0,
    0,
    624,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_28_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_28
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_28_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_28_CFGP2PSCI_HI_28_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_28_REG = 
{
    "P2P_AE_SCI_HI_28",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_28 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_28_REG_OFFSET,
    0,
    0,
    625,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_28_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_29
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_29_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_29_CFGP2PSCI_LO_29_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_29_REG = 
{
    "P2P_AE_SCI_LO_29",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_29 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_29_REG_OFFSET,
    0,
    0,
    626,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_29_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_29
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_29_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_29_CFGP2PSCI_HI_29_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_29_REG = 
{
    "P2P_AE_SCI_HI_29",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_29 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_29_REG_OFFSET,
    0,
    0,
    627,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_29_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_30
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_30_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_30_CFGP2PSCI_LO_30_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_30_REG = 
{
    "P2P_AE_SCI_LO_30",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_30 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_30_REG_OFFSET,
    0,
    0,
    628,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_30_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_30
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_30_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_30_CFGP2PSCI_HI_30_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_30_REG = 
{
    "P2P_AE_SCI_HI_30",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_30 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_30_REG_OFFSET,
    0,
    0,
    629,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_30_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_LO_31
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_LO_31_FIELDS[] =
{
    &XIF_P2P_AE_SCI_LO_31_CFGP2PSCI_LO_31_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_LO_31_REG = 
{
    "P2P_AE_SCI_LO_31",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_LO_31 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_LO_31_REG_OFFSET,
    0,
    0,
    630,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_LO_31_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_P2P_AE_SCI_HI_31
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_P2P_AE_SCI_HI_31_FIELDS[] =
{
    &XIF_P2P_AE_SCI_HI_31_CFGP2PSCI_HI_31_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_P2P_AE_SCI_HI_31_REG = 
{
    "P2P_AE_SCI_HI_31",
#if RU_INCLUDE_DESC
    "XIF_P2P_AE_SCI_HI_31 Register",
    "Provides SCI lookup for 802.1ae, P2P downstream traffic.",
#endif
    XIF_P2P_AE_SCI_HI_31_REG_OFFSET,
    0,
    0,
    631,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_P2P_AE_SCI_HI_31_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_UP_1588_TS_OFFSET_LO
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_UP_1588_TS_OFFSET_LO_FIELDS[] =
{
    &XIF_UP_1588_TS_OFFSET_LO_CFGUP1588TSOFFSET_LO_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_UP_1588_TS_OFFSET_LO_REG = 
{
    "UP_1588_TS_OFFSET_LO",
#if RU_INCLUDE_DESC
    "XIF_UP_1588_TS_OFFSET_LO Register",
    "Upstream 1588 timestamp offset, lower 32 bits.",
#endif
    XIF_UP_1588_TS_OFFSET_LO_REG_OFFSET,
    0,
    0,
    632,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_UP_1588_TS_OFFSET_LO_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_UP_1588_TS_OFFSET_HI
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_UP_1588_TS_OFFSET_HI_FIELDS[] =
{
    &XIF_UP_1588_TS_OFFSET_HI_RESERVED0_FIELD,
    &XIF_UP_1588_TS_OFFSET_HI_CFGCMHOFFSET_FIELD,
    &XIF_UP_1588_TS_OFFSET_HI_CFGUP1588TSOFFSET_HI_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_UP_1588_TS_OFFSET_HI_REG = 
{
    "UP_1588_TS_OFFSET_HI",
#if RU_INCLUDE_DESC
    "XIF_UP_1588_TS_OFFSET_HI Register",
    "Upstream 1588 timestamp offset, upper 16 bits.",
#endif
    XIF_UP_1588_TS_OFFSET_HI_REG_OFFSET,
    0,
    0,
    633,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    3,
    XIF_UP_1588_TS_OFFSET_HI_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_UP_1588_TWO_STEP_TS_CTL
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_UP_1588_TWO_STEP_TS_CTL_FIELDS[] =
{
    &XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFRD_FIELD,
    &XIF_UP_1588_TWO_STEP_TS_CTL_RESERVED0_FIELD,
    &XIF_UP_1588_TWO_STEP_TS_CTL_TWOSTEPFFENTRIES_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_UP_1588_TWO_STEP_TS_CTL_REG = 
{
    "UP_1588_TWO_STEP_TS_CTL",
#if RU_INCLUDE_DESC
    "XIF_UP_1588_TWO_STEP_TS_CTL Register",
    "Provides control for the reading of 1588 upstream two step timestamp"
    "FIFO, 4 entries deep.",
#endif
    XIF_UP_1588_TWO_STEP_TS_CTL_REG_OFFSET,
    0,
    0,
    634,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    3,
    XIF_UP_1588_TWO_STEP_TS_CTL_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_UP_1588_TWO_STEP_TS_VALUE_LO
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_UP_1588_TWO_STEP_TS_VALUE_LO_FIELDS[] =
{
    &XIF_UP_1588_TWO_STEP_TS_VALUE_LO_TWOSTEPTIMESTAMP_LO_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_UP_1588_TWO_STEP_TS_VALUE_LO_REG = 
{
    "UP_1588_TWO_STEP_TS_VALUE_LO",
#if RU_INCLUDE_DESC
    "XIF_UP_1588_TWO_STEP_TS_VALUE_LO Register",
    "Lower 32-bits of 48-bits timestamp value, applicable for upstream two"
    "step timestamping.",
#endif
    XIF_UP_1588_TWO_STEP_TS_VALUE_LO_REG_OFFSET,
    0,
    0,
    635,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_UP_1588_TWO_STEP_TS_VALUE_LO_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_UP_1588_TWO_STEP_TS_VALUE_HI
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_UP_1588_TWO_STEP_TS_VALUE_HI_FIELDS[] =
{
    &XIF_UP_1588_TWO_STEP_TS_VALUE_HI_RESERVED0_FIELD,
    &XIF_UP_1588_TWO_STEP_TS_VALUE_HI_TWOSTEPTIMESTAMP_HI_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_UP_1588_TWO_STEP_TS_VALUE_HI_REG = 
{
    "UP_1588_TWO_STEP_TS_VALUE_HI",
#if RU_INCLUDE_DESC
    "XIF_UP_1588_TWO_STEP_TS_VALUE_HI Register",
    "Upper 16-bits of 48-bits timestamp value, applicable for upstream two"
    "step timestamping.",
#endif
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_REG_OFFSET,
    0,
    0,
    636,
#if RU_INCLUDE_ACCESS
    ru_access_read,
#endif
#if RU_INCLUDE_FIELD_DB
    2,
    XIF_UP_1588_TWO_STEP_TS_VALUE_HI_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_1588_TS_SYNC_OFFSET
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_1588_TS_SYNC_OFFSET_FIELDS[] =
{
    &XIF_1588_TS_SYNC_OFFSET_CFG_TS48_SYNC_NS_INCREMENT_FIELD,
    &XIF_1588_TS_SYNC_OFFSET_RESERVED0_FIELD,
    &XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_161_FIELD,
    &XIF_1588_TS_SYNC_OFFSET_RESERVED1_FIELD,
    &XIF_1588_TS_SYNC_OFFSET_CFGTSSYNCOFFSET_125_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_1588_TS_SYNC_OFFSET_REG = 
{
    "1588_TS_SYNC_OFFSET",
#if RU_INCLUDE_DESC
    "XIF_1588_TS_SYNC_OFFSET Register",
    "Timestamp synchronizer offset.",
#endif
    XIF_1588_TS_SYNC_OFFSET_REG_OFFSET,
    0,
    0,
    637,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    5,
    XIF_1588_TS_SYNC_OFFSET_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_MPCP_OFFSET
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_MPCP_OFFSET_FIELDS[] =
{
    &XIF_SEC_MPCP_OFFSET_CFGSECRXMPCPOFFSET_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_MPCP_OFFSET_REG = 
{
    "SEC_MPCP_OFFSET",
#if RU_INCLUDE_DESC
    "XIF_SEC_MPCP_OFFSET Register",
    "Offset for downstream MPCP adjustment.",
#endif
    XIF_SEC_MPCP_OFFSET_REG_OFFSET,
    0,
    0,
    638,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_MPCP_OFFSET_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_8
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_8_FIELDS[] =
{
    &XIF_PORT_DATA_8_PORTDATA8_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_8_REG = 
{
    "PORT_DATA_8",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_8 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_8_REG_OFFSET,
    0,
    0,
    639,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_8_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_9
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_9_FIELDS[] =
{
    &XIF_PORT_DATA_9_PORTDATA9_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_9_REG = 
{
    "PORT_DATA_9",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_9 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_9_REG_OFFSET,
    0,
    0,
    640,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_9_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_10
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_10_FIELDS[] =
{
    &XIF_PORT_DATA_10_PORTDATA10_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_10_REG = 
{
    "PORT_DATA_10",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_10 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_10_REG_OFFSET,
    0,
    0,
    641,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_10_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_PORT_DATA_11
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_PORT_DATA_11_FIELDS[] =
{
    &XIF_PORT_DATA_11_PORTDATA11_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_PORT_DATA_11_REG = 
{
    "PORT_DATA_11",
#if RU_INCLUDE_DESC
    "XIF_PORT_DATA_11 Register",
    "Stores the pre-write data for writing; and the post-read data for"
    "reading.",
#endif
    XIF_PORT_DATA_11_REG_OFFSET,
    0,
    0,
    642,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_PORT_DATA_11_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_TX_SSCI
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_TX_SSCI_FIELDS[] =
{
    &XIF_SEC_TX_SSCI_CFG_MACSEC_XPN_TX_SSCI_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_TX_SSCI_REG = 
{
    "SEC_TX_SSCI",
#if RU_INCLUDE_DESC
    "XIF_SEC_TX_SSCI Register",
    "Upstream SSCI for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_TX_SSCI_REG_OFFSET,
    0,
    0,
    643,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_TX_SSCI_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_TX_SALT_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_TX_SALT_0_FIELDS[] =
{
    &XIF_SEC_TX_SALT_0_CFG_MACSEC_XPN_TX_SALT_0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_TX_SALT_0_REG = 
{
    "SEC_TX_SALT_0",
#if RU_INCLUDE_DESC
    "XIF_SEC_TX_SALT_0 Register",
    "Upstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_TX_SALT_0_REG_OFFSET,
    0,
    0,
    644,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_TX_SALT_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_TX_SALT_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_TX_SALT_1_FIELDS[] =
{
    &XIF_SEC_TX_SALT_1_CFG_MACSEC_XPN_TX_SALT_1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_TX_SALT_1_REG = 
{
    "SEC_TX_SALT_1",
#if RU_INCLUDE_DESC
    "XIF_SEC_TX_SALT_1 Register",
    "Upstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_TX_SALT_1_REG_OFFSET,
    0,
    0,
    645,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_TX_SALT_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_TX_SALT_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_TX_SALT_2_FIELDS[] =
{
    &XIF_SEC_TX_SALT_2_CFG_MACSEC_XPN_TX_SALT_2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_TX_SALT_2_REG = 
{
    "SEC_TX_SALT_2",
#if RU_INCLUDE_DESC
    "XIF_SEC_TX_SALT_2 Register",
    "Upsstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_TX_SALT_2_REG_OFFSET,
    0,
    0,
    646,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_TX_SALT_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_RX_SSCI
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_RX_SSCI_FIELDS[] =
{
    &XIF_SEC_RX_SSCI_CFG_MACSEC_XPN_RX_SSCI_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_RX_SSCI_REG = 
{
    "SEC_RX_SSCI",
#if RU_INCLUDE_DESC
    "XIF_SEC_RX_SSCI Register",
    "Downstream SSCI for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_RX_SSCI_REG_OFFSET,
    0,
    0,
    647,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_RX_SSCI_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_RX_SALT_0
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_RX_SALT_0_FIELDS[] =
{
    &XIF_SEC_RX_SALT_0_CFG_MACSEC_XPN_RX_SALT_0_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_RX_SALT_0_REG = 
{
    "SEC_RX_SALT_0",
#if RU_INCLUDE_DESC
    "XIF_SEC_RX_SALT_0 Register",
    "Downstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_RX_SALT_0_REG_OFFSET,
    0,
    0,
    648,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_RX_SALT_0_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_RX_SALT_1
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_RX_SALT_1_FIELDS[] =
{
    &XIF_SEC_RX_SALT_1_CFG_MACSEC_XPN_RX_SALT_1_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_RX_SALT_1_REG = 
{
    "SEC_RX_SALT_1",
#if RU_INCLUDE_DESC
    "XIF_SEC_RX_SALT_1 Register",
    "Downstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_RX_SALT_1_REG_OFFSET,
    0,
    0,
    649,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_RX_SALT_1_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Register: XIF_SEC_RX_SALT_2
 ******************************************************************************/
#if RU_INCLUDE_FIELD_DB
static const ru_field_rec *XIF_SEC_RX_SALT_2_FIELDS[] =
{
    &XIF_SEC_RX_SALT_2_CFG_MACSEC_XPN_RX_SALT_2_FIELD,
};

#endif /* RU_INCLUDE_FIELD_DB */

const ru_reg_rec XIF_SEC_RX_SALT_2_REG = 
{
    "SEC_RX_SALT_2",
#if RU_INCLUDE_DESC
    "XIF_SEC_RX_SALT_2 Register",
    "Downstream 96-bits SALT for 802.1ae extended packet numbering.",
#endif
    XIF_SEC_RX_SALT_2_REG_OFFSET,
    0,
    0,
    650,
#if RU_INCLUDE_ACCESS
    ru_access_rw,
#endif
#if RU_INCLUDE_FIELD_DB
    1,
    XIF_SEC_RX_SALT_2_FIELDS,
#endif /* RU_INCLUDE_FIELD_DB */
    ru_reg_size_32
};

/******************************************************************************
 * Block: XIF
 ******************************************************************************/
static const ru_reg_rec *XIF_REGS[] =
{
    &XIF_CTL_REG,
    &XIF_INT_STATUS_REG,
    &XIF_INT_MASK_REG,
    &XIF_PORT_COMMAND_REG,
    &XIF_PORT_DATA_0_REG,
    &XIF_PORT_DATA_1_REG,
    &XIF_PORT_DATA_2_REG,
    &XIF_PORT_DATA_3_REG,
    &XIF_PORT_DATA_4_REG,
    &XIF_PORT_DATA_5_REG,
    &XIF_PORT_DATA_6_REG,
    &XIF_PORT_DATA_7_REG,
    &XIF_MACSEC_REG,
    &XIF_XPN_XMT_OFFSET_REG,
    &XIF_XPN_TIMESTAMP_OFFSET_REG,
    &XIF_TS_JITTER_THRESH_REG,
    &XIF_TS_UPDATE_REG,
    &XIF_GNT_OVERHEAD_REG,
    &XIF_DISCOVER_OVERHEAD_REG,
    &XIF_DISCOVER_INFO_REG,
    &XIF_XPN_OVERSIZE_THRESH_REG,
    &XIF_SECRX_KEYNUM_REG,
    &XIF_SECRX_ENCRYPT_REG,
    &XIF_PMC_FRAME_RX_CNT_REG,
    &XIF_PMC_BYTE_RX_CNT_REG,
    &XIF_PMC_RUNT_RX_CNT_REG,
    &XIF_PMC_CW_ERR_RX_CNT_REG,
    &XIF_PMC_CRC8_ERR_RX_CNT_REG,
    &XIF_XPN_DATA_FRM_CNT_REG,
    &XIF_XPN_DATA_BYTE_CNT_REG,
    &XIF_XPN_MPCP_FRM_CNT_REG,
    &XIF_XPN_OAM_FRM_CNT_REG,
    &XIF_XPN_OAM_BYTE_CNT_REG,
    &XIF_XPN_OVERSIZE_FRM_CNT_REG,
    &XIF_SEC_ABORT_FRM_CNT_REG,
    &XIF_PMC_TX_NEG_EVENT_CNT_REG,
    &XIF_XPN_IDLE_PKT_CNT_REG,
    &XIF_LLID_0_REG,
    &XIF_LLID_1_REG,
    &XIF_LLID_2_REG,
    &XIF_LLID_3_REG,
    &XIF_LLID_4_REG,
    &XIF_LLID_5_REG,
    &XIF_LLID_6_REG,
    &XIF_LLID_7_REG,
    &XIF_LLID_8_REG,
    &XIF_LLID_9_REG,
    &XIF_LLID_10_REG,
    &XIF_LLID_11_REG,
    &XIF_LLID_12_REG,
    &XIF_LLID_13_REG,
    &XIF_LLID_14_REG,
    &XIF_LLID_15_REG,
    &XIF_LLID_16_REG,
    &XIF_LLID_17_REG,
    &XIF_LLID_18_REG,
    &XIF_LLID_19_REG,
    &XIF_LLID_20_REG,
    &XIF_LLID_21_REG,
    &XIF_LLID_22_REG,
    &XIF_LLID_23_REG,
    &XIF_LLID_24_REG,
    &XIF_LLID_25_REG,
    &XIF_LLID_26_REG,
    &XIF_LLID_27_REG,
    &XIF_LLID_28_REG,
    &XIF_LLID_29_REG,
    &XIF_LLID_30_REG,
    &XIF_LLID_31_REG,
    &XIF_MAX_MPCP_UPDATE_REG,
    &XIF_IPG_INSERTION_REG,
    &XIF_TRANSPORT_TIME_REG,
    &XIF_MPCP_TIME_REG,
    &XIF_OVERLAP_GNT_OH_REG,
    &XIF_MAC_MODE_REG,
    &XIF_PMCTX_CTL_REG,
    &XIF_SEC_CTL_REG,
    &XIF_AE_PKTNUM_WINDOW_REG,
    &XIF_AE_PKTNUM_THRESH_REG,
    &XIF_SECTX_KEYNUM_REG,
    &XIF_SECTX_ENCRYPT_REG,
    &XIF_AE_PKTNUM_STAT_REG,
    &XIF_MPCP_UPDATE_REG,
    &XIF_BURST_PRELAUNCH_OFFSET_REG,
    &XIF_VLAN_TYPE_REG,
    &XIF_P2P_AE_SCI_EN_REG,
    &XIF_P2P_AE_SCI_LO_0_REG,
    &XIF_P2P_AE_SCI_HI_0_REG,
    &XIF_P2P_AE_SCI_LO_1_REG,
    &XIF_P2P_AE_SCI_HI_1_REG,
    &XIF_P2P_AE_SCI_LO_2_REG,
    &XIF_P2P_AE_SCI_HI_2_REG,
    &XIF_P2P_AE_SCI_LO_3_REG,
    &XIF_P2P_AE_SCI_HI_3_REG,
    &XIF_P2P_AE_SCI_LO_4_REG,
    &XIF_P2P_AE_SCI_HI_4_REG,
    &XIF_P2P_AE_SCI_LO_5_REG,
    &XIF_P2P_AE_SCI_HI_5_REG,
    &XIF_P2P_AE_SCI_LO_6_REG,
    &XIF_P2P_AE_SCI_HI_6_REG,
    &XIF_P2P_AE_SCI_LO_7_REG,
    &XIF_P2P_AE_SCI_HI_7_REG,
    &XIF_P2P_AE_SCI_LO_8_REG,
    &XIF_P2P_AE_SCI_HI_8_REG,
    &XIF_P2P_AE_SCI_LO_9_REG,
    &XIF_P2P_AE_SCI_HI_9_REG,
    &XIF_P2P_AE_SCI_LO_10_REG,
    &XIF_P2P_AE_SCI_HI_10_REG,
    &XIF_P2P_AE_SCI_LO_11_REG,
    &XIF_P2P_AE_SCI_HI_11_REG,
    &XIF_P2P_AE_SCI_LO_12_REG,
    &XIF_P2P_AE_SCI_HI_12_REG,
    &XIF_P2P_AE_SCI_LO_13_REG,
    &XIF_P2P_AE_SCI_HI_13_REG,
    &XIF_P2P_AE_SCI_LO_14_REG,
    &XIF_P2P_AE_SCI_HI_14_REG,
    &XIF_P2P_AE_SCI_LO_15_REG,
    &XIF_P2P_AE_SCI_HI_15_REG,
    &XIF_SECRX_KEYNUM_1_REG,
    &XIF_CTL_2_REG,
    &XIF_VLAN_TYPE_1_REG,
    &XIF_P2P_AE_SCI_LO_16_REG,
    &XIF_P2P_AE_SCI_HI_16_REG,
    &XIF_P2P_AE_SCI_LO_17_REG,
    &XIF_P2P_AE_SCI_HI_17_REG,
    &XIF_P2P_AE_SCI_LO_18_REG,
    &XIF_P2P_AE_SCI_HI_18_REG,
    &XIF_P2P_AE_SCI_LO_19_REG,
    &XIF_P2P_AE_SCI_HI_19_REG,
    &XIF_P2P_AE_SCI_LO_20_REG,
    &XIF_P2P_AE_SCI_HI_20_REG,
    &XIF_P2P_AE_SCI_LO_21_REG,
    &XIF_P2P_AE_SCI_HI_21_REG,
    &XIF_P2P_AE_SCI_LO_22_REG,
    &XIF_P2P_AE_SCI_HI_22_REG,
    &XIF_P2P_AE_SCI_LO_23_REG,
    &XIF_P2P_AE_SCI_HI_23_REG,
    &XIF_P2P_AE_SCI_LO_24_REG,
    &XIF_P2P_AE_SCI_HI_24_REG,
    &XIF_P2P_AE_SCI_LO_25_REG,
    &XIF_P2P_AE_SCI_HI_25_REG,
    &XIF_P2P_AE_SCI_LO_26_REG,
    &XIF_P2P_AE_SCI_HI_26_REG,
    &XIF_P2P_AE_SCI_LO_27_REG,
    &XIF_P2P_AE_SCI_HI_27_REG,
    &XIF_P2P_AE_SCI_LO_28_REG,
    &XIF_P2P_AE_SCI_HI_28_REG,
    &XIF_P2P_AE_SCI_LO_29_REG,
    &XIF_P2P_AE_SCI_HI_29_REG,
    &XIF_P2P_AE_SCI_LO_30_REG,
    &XIF_P2P_AE_SCI_HI_30_REG,
    &XIF_P2P_AE_SCI_LO_31_REG,
    &XIF_P2P_AE_SCI_HI_31_REG,
    &XIF_UP_1588_TS_OFFSET_LO_REG,
    &XIF_UP_1588_TS_OFFSET_HI_REG,
    &XIF_UP_1588_TWO_STEP_TS_CTL_REG,
    &XIF_UP_1588_TWO_STEP_TS_VALUE_LO_REG,
    &XIF_UP_1588_TWO_STEP_TS_VALUE_HI_REG,
    &XIF_1588_TS_SYNC_OFFSET_REG,
    &XIF_SEC_MPCP_OFFSET_REG,
    &XIF_PORT_DATA_8_REG,
    &XIF_PORT_DATA_9_REG,
    &XIF_PORT_DATA_10_REG,
    &XIF_PORT_DATA_11_REG,
    &XIF_SEC_TX_SSCI_REG,
    &XIF_SEC_TX_SALT_0_REG,
    &XIF_SEC_TX_SALT_1_REG,
    &XIF_SEC_TX_SALT_2_REG,
    &XIF_SEC_RX_SSCI_REG,
    &XIF_SEC_RX_SALT_0_REG,
    &XIF_SEC_RX_SALT_1_REG,
    &XIF_SEC_RX_SALT_2_REG,
};

static unsigned long XIF_ADDRS[] =
{
    0x80102800,
};

const ru_block_rec XIF_BLOCK = 
{
    "XIF",
    XIF_ADDRS,
    1,
    172,
    XIF_REGS
};

/* End of file EPON_XIF.c */

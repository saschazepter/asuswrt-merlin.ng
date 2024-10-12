/*
  <:copyright-BRCM:2023:DUAL/GPL:standard 
  
     Copyright (c) 2023 Broadcom 
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

#ifndef __6766_CROSSBOW_RDB_H__
#define __6766_CROSSBOW_RDB_H__

#define CROSSBOW_CNP_PHYS_ADDR                             0x80200000
#define CROSSBOW_NATC_PHYS_ADDR                            0x80230000
#define CROSSBOW_CM7_PHYS_ADDR                             0x80300000

#define CNP_TOP_CNP_REV                                    0x80200000
#define CNP_TOP_TIMER_TICK_CONTROL                         0x80200004
#define CNP_TOP_TIMER_PERIOD_0                             0x80200008
#define CNP_TOP_TIMER_PERIOD_1                             0x80200010
#define CNP_TOP_MISC_CFG                                   0x80200014
#define CNP_TOP_UBUS_MISC_CONTROL                          0x8020001c

#define CNP_CLKRST_CLOCK_CNTRL                             0x80200100
#define CNP_CLKRST_RX_FLUSH_CNTRL                          0x80200104
#define CNP_CLKRST_TX_FLUSH_CNTRL                          0x80200108
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL         0x80200110
#define CNP_CLKRST_CAIB_CPM_DEBOUNCE_TIMER                 0x80200114
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL       0x80200118
#define CNP_CLKRST_IPA_RX_CPM_DEBOUNCE_TIMER               0x8020011c
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL          0x80200120
#define CNP_CLKRST_DIB_CPM_DEBOUNCE_TIMER                  0x80200124
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL 0x80200130
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_DEBOUNCE_TIMER        0x80200134
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL          0x80200138
#define CNP_CLKRST_RDS_CPM_DEBOUNCE_TIMER                  0x8020013c
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL          0x80200140
#define CNP_CLKRST_PDP_CPM_DEBOUNCE_TIMER                  0x80200144
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL         0x80200148
#define CNP_CLKRST_HASH_CPM_DEBOUNCE_TIMER                 0x8020014c
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL         0x80200150
#define CNP_CLKRST_NATC_CPM_DEBOUNCE_TIMER                 0x80200154
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL         0x80200158
#define CNP_CLKRST_ICPE_CPM_DEBOUNCE_TIMER                 0x8020015c
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL          0x80200160
#define CNP_CLKRST_PFR_CPM_DEBOUNCE_TIMER                  0x80200164
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL         0x80200168
#define CNP_CLKRST_SVQP_CPM_DEBOUNCE_TIMER                 0x8020016c
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL          0x80200170
#define CNP_CLKRST_TAM_CPM_DEBOUNCE_TIMER                  0x80200174
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL 0x80200178
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_DEBOUNCE_TIMER        0x8020017c
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL         0x80200180
#define CNP_CLKRST_ECPE_CPM_DEBOUNCE_TIMER                 0x80200184
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL        0x80200190
#define CNP_CLKRST_SGDMA_CPM_DEBOUNCE_TIMER                0x80200194
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0         0x80200198
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1         0x8020019c
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER0                 0x802001a0
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER1                 0x802001a4
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS             0x802001a8
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0        0x802001ac
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1        0x802001b0

#define CNP_COMMON_RX_BUFFER_CONTROL                       0x80200300
#define CNP_COMMON_MPM_GLOBAL_CONFIG                       0x80200304
#define CNP_COMMON_WQ_CONFIG                               0x80200308
#define CNP_COMMON_WQ_RING_0                               0x8020030c
#define CNP_COMMON_WQ_RING_1                               0x80200310
#define CNP_COMMON_WQ_HDR                                  0x80200314
#define CNP_COMMON_WQ_HDR_LEN                              0x80200318
#define CNP_COMMON_WQ_IG_DESC                              0x8020031c
#define CNP_COMMON_WQ_RSB0                                 0x80200320
#define CNP_COMMON_WQ_RSB1                                 0x80200324

#define CAIB_CONTROL                                       0x80200600
#define CAIB_DESC_RING_ACQ0                                0x80200604
#define CAIB_DESC_RING_ACQ1                                0x80200608
#define CAIB_DESC_RING_ACQ2                                0x8020060c
#define CAIB_DESC_RING_ACQ3                                0x80200610
#define CAIB_DESC_RING_ACQ4                                0x80200614
#define CAIB_DESC_RING_ACQ5                                0x80200618
#define CAIB_DESC_RING_ACQ6                                0x8020061c
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ0                  0x80200620
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ1                  0x80200624
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ2                  0x80200628
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ3                  0x8020062c
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ4                  0x80200630
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ5                  0x80200634
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ6                  0x80200638
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ0                  0x8020063c
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ1                  0x80200640
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ2                  0x80200644
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ3                  0x80200648
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ4                  0x8020064c
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ5                  0x80200650
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ6                  0x80200654
#define CAIB_DDR_RING_START_ADDR_LO_ACQ0                   0x80200658
#define CAIB_DDR_RING_START_ADDR_LO_ACQ1                   0x8020065c
#define CAIB_DDR_RING_START_ADDR_LO_ACQ2                   0x80200660
#define CAIB_DDR_RING_START_ADDR_LO_ACQ3                   0x80200664
#define CAIB_DDR_RING_START_ADDR_LO_ACQ4                   0x80200668
#define CAIB_DDR_RING_START_ADDR_LO_ACQ5                   0x8020066c
#define CAIB_DDR_RING_START_ADDR_LO_ACQ6                   0x80200670
#define CAIB_DDR_RING_START_ADDR_HI_ACQ0                   0x80200674
#define CAIB_DDR_RING_START_ADDR_HI_ACQ1                   0x80200678
#define CAIB_DDR_RING_START_ADDR_HI_ACQ2                   0x8020067c
#define CAIB_DDR_RING_START_ADDR_HI_ACQ3                   0x80200680
#define CAIB_DDR_RING_START_ADDR_HI_ACQ4                   0x80200684
#define CAIB_DDR_RING_START_ADDR_HI_ACQ5                   0x80200688
#define CAIB_DDR_RING_START_ADDR_HI_ACQ6                   0x8020068c
#define CAIB_DDR_RING_SIZE_ACQ0                            0x80200690
#define CAIB_DDR_RING_SIZE_ACQ1                            0x80200694
#define CAIB_DDR_RING_SIZE_ACQ2                            0x80200698
#define CAIB_DDR_RING_SIZE_ACQ3                            0x8020069c
#define CAIB_DDR_RING_SIZE_ACQ4                            0x802006a0
#define CAIB_DDR_RING_SIZE_ACQ5                            0x802006a4
#define CAIB_DDR_RING_SIZE_ACQ6                            0x802006a8
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ0                 0x802006ac
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ1                 0x802006b0
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ2                 0x802006b4
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ3                 0x802006b8
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ4                 0x802006bc
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ5                 0x802006c0
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ6                 0x802006c4
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ0                 0x802006c8
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ1                 0x802006cc
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ2                 0x802006d0
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ3                 0x802006d4
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ4                 0x802006d8
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ5                 0x802006dc
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ6                 0x802006e0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ0                 0x802006e4
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ1                 0x802006e8
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ2                 0x802006ec
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ3                 0x802006f0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ4                 0x802006f4
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ5                 0x802006f8
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ6                 0x802006fc
#define CAIB_DDR_RING_BURST_CTRL_ACQ                       0x80200700
#define CAIB_DDR_RING_ARB_CTRL                             0x80200704
#define CAIB_LOCAL_RING_ARB_CTRL                           0x80200708

#define IPA_CONFIG                                         0x80200b00
#define IPA_SIB_CTRL                                       0x80200b04

#define RDS_CONFIG                                         0x80200b20

#define PDP_CONTROL                                        0x80200c00
#define PDP_SID_TO_CPU_MAP                                 0x80200c04
#define PDP_INIT                                           0x80200c08
#define PDP_WQ_FREE_POINTER_0                              0x80200c0c
#define PDP_WQ_FREE_POINTER_1                              0x80200c10
#define PDP_WQ_FREE_COUNT_0                                0x80200c14
#define PDP_WQ_FREE_COUNT_1                                0x80200c18
#define PDP_RQ_ADDR_0                                      0x80200c1c
#define PDP_RQ_ADDR_1                                      0x80200c20
#define PDP_RQ_WR_PTR_0                                    0x80200c24
#define PDP_RQ_WR_PTR_1                                    0x80200c28
#define PDP_WQ_ADDR_0                                      0x80200c2c
#define PDP_WQ_ADDR_1                                      0x80200c30
#define PDP_RQ_INDEX_0                                     0x80200c34
#define PDP_RQ_INDEX_1                                     0x80200c38
#define PDP_WQ_INDEX_0                                     0x80200c3c
#define PDP_WQ_INDEX_1                                     0x80200c40
#define PDP_BACKPRESSURE_COUNTER                           0x80200c44
#define PDP_BACKPRESSURE_DURATION                          0x80200c48
#define PDP_MAILBOX_OUT0_0                                 0x80200c4c
#define PDP_MAILBOX_OUT1_0                                 0x80200c50
#define PDP_MAILBOX_OUT2_0                                 0x80200c54
#define PDP_MAILBOX_OUT3_0                                 0x80200c58
#define PDP_MAILBOX_OUT4_0                                 0x80200c5c
#define PDP_MAILBOX_OUT5_0                                 0x80200c60
#define PDP_MAILBOX_OUT6_0                                 0x80200c64
#define PDP_MAILBOX_OUT7_0                                 0x80200c68
#define PDP_MAILBOX_OUT0_1                                 0x80200c6c
#define PDP_MAILBOX_OUT1_1                                 0x80200c70
#define PDP_MAILBOX_OUT2_1                                 0x80200c74
#define PDP_MAILBOX_OUT3_1                                 0x80200c78
#define PDP_MAILBOX_OUT4_1                                 0x80200c7c
#define PDP_MAILBOX_OUT5_1                                 0x80200c80
#define PDP_MAILBOX_OUT6_1                                 0x80200c84
#define PDP_MAILBOX_OUT7_1                                 0x80200c88
#define PDP_MAILBOX_IN0_0                                  0x80200c8c
#define PDP_MAILBOX_IN1_0                                  0x80200c90
#define PDP_MAILBOX_IN2_0                                  0x80200c94
#define PDP_MAILBOX_IN3_0                                  0x80200c98
#define PDP_MAILBOX_IN4_0                                  0x80200c9c
#define PDP_MAILBOX_IN5_0                                  0x80200ca0
#define PDP_MAILBOX_IN6_0                                  0x80200ca4
#define PDP_MAILBOX_IN7_0                                  0x80200ca8
#define PDP_MAILBOX_IN0_1                                  0x80200cac
#define PDP_MAILBOX_IN1_1                                  0x80200cb0
#define PDP_MAILBOX_IN2_1                                  0x80200cb4
#define PDP_MAILBOX_IN3_1                                  0x80200cb8
#define PDP_MAILBOX_IN4_1                                  0x80200cbc
#define PDP_MAILBOX_IN5_1                                  0x80200cc0
#define PDP_MAILBOX_IN6_1                                  0x80200cc4
#define PDP_MAILBOX_IN7_1                                  0x80200cc8
#define PDP_TIMER0_0                                       0x80200ccc
#define PDP_TIMER1_0                                       0x80200cd0
#define PDP_TIMER2_0                                       0x80200cd4
#define PDP_TIMER3_0                                       0x80200cd8
#define PDP_TIMER0_1                                       0x80200cdc
#define PDP_TIMER1_1                                       0x80200ce0
#define PDP_TIMER2_1                                       0x80200ce4
#define PDP_TIMER3_1                                       0x80200ce8
#define PDP_TIMER_CTRL_0                                   0x80200cec
#define PDP_TIMER_CTRL_1                                   0x80200cf0

#define HASH_HASH_CNTRL                                    0x80200d00
#define HASH_HASH_WORK_QUEUE_HASH_OFFSET                   0x80200d04
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS0                  0x80200d10
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS1                  0x80200d14
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER0            0x80200d18
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER1            0x80200d1c
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0 0x80200d20
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1 0x80200d24

#define ICPE_CONFIG                                        0x80200e00
#define ICPE_NOP_COMMAND                                   0x80200e04
#define ICPE_RESP_QUEUE_ADDR0                              0x80200e10
#define ICPE_RESP_QUEUE_ADDR1                              0x80200e14
#define ICPE_RESP_QUEUE_ADDR2                              0x80200e18
#define ICPE_RESP_QUEUE_ADDR3                              0x80200e1c
#define ICPE_RESP_QUEUE_ADDR4                              0x80200e20
#define ICPE_RESP_QUEUE_ADDR5                              0x80200e24
#define ICPE_RESP_QUEUE_ADDR6                              0x80200e28
#define ICPE_RESP_QUEUE_ADDR7                              0x80200e2c
#define ICPE_RESP_QUEUE_WR_PTR0                            0x80200e30
#define ICPE_RESP_QUEUE_WR_PTR1                            0x80200e34
#define ICPE_RESP_QUEUE_WR_PTR2                            0x80200e38
#define ICPE_RESP_QUEUE_WR_PTR3                            0x80200e3c
#define ICPE_RESP_QUEUE_WR_PTR4                            0x80200e40
#define ICPE_RESP_QUEUE_WR_PTR5                            0x80200e44
#define ICPE_RESP_QUEUE_WR_PTR6                            0x80200e48
#define ICPE_RESP_QUEUE_WR_PTR7                            0x80200e4c
#define ICPE_RESP_QUEUE_PINDEX0                            0x80200e50
#define ICPE_RESP_QUEUE_PINDEX1                            0x80200e54
#define ICPE_RESP_QUEUE_PINDEX2                            0x80200e58
#define ICPE_RESP_QUEUE_PINDEX3                            0x80200e5c
#define ICPE_RESP_QUEUE_PINDEX4                            0x80200e60
#define ICPE_RESP_QUEUE_PINDEX5                            0x80200e64
#define ICPE_RESP_QUEUE_PINDEX6                            0x80200e68
#define ICPE_RESP_QUEUE_PINDEX7                            0x80200e6c

#define PFR_CONTROL                                        0x80201000
#define PFR_WQ_FWD_INFO_OFFSET                             0x80201004
#define PFR_RXQ_TO_TXQ_STATUS                              0x80201008
#define PFR_ACQ_TO_TXQ_STATUS                              0x8020100c
#define PFR_RXQ_DISCARD_COUNTER_0                          0x80201010
#define PFR_RXQ_DISCARD_COUNTER_1                          0x80201014
#define PFR_FWQ_DISCARD_COUNTER_0                          0x80201018
#define PFR_FWQ_DISCARD_COUNTER_1                          0x8020101c
#define PFR_FWQ_DISCARD_COUNTER_2                          0x80201020
#define PFR_FWQ_DISCARD_COUNTER_3                          0x80201024
#define PFR_FWQ_DISCARD_COUNTER_4                          0x80201028
#define PFR_FWQ_DISCARD_COUNTER_5                          0x8020102c
#define PFR_FWQ_DISCARD_COUNTER_6                          0x80201030
#define PFR_SW_REQUESTED_DISCARD_COUNTER                   0x80201034
#define PFR_STQ_STALL_COUNTER_0                            0x80201038
#define PFR_STQ_STALL_COUNTER_1                            0x8020103c
#define PFR_STQ_STALL_COUNTER_2                            0x80201040
#define PFR_STQ_STALL_COUNTER_3                            0x80201044
#define PFR_STQ_STALL_COUNTER_4                            0x80201048
#define PFR_STQ_STALL_COUNTER_5                            0x8020104c
#define PFR_STQ_STALL_COUNTER_6                            0x80201050
#define PFR_STQ_WATERMARK_COUNTER_0                        0x80201054
#define PFR_STQ_WATERMARK_COUNTER_1                        0x80201058
#define PFR_STQ_WATERMARK_COUNTER_2                        0x8020105c
#define PFR_STQ_WATERMARK_COUNTER_3                        0x80201060
#define PFR_STQ_WATERMARK_COUNTER_4                        0x80201064
#define PFR_STQ_WATERMARK_COUNTER_5                        0x80201068
#define PFR_STQ_WATERMARK_COUNTER_6                        0x8020106c
#define PFR_STALL_COUNTER                                  0x80201070
#define PFR_WATERMARK_COUNTER                              0x80201074
#define PFR_RSB_PREPEND_CONTROL                            0x80201078
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_0              0x80201084
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_1              0x80201088
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_0           0x8020108c
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_1           0x80201090
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_0          0x80201094
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_1          0x80201098
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_0       0x8020109c
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_1       0x802010a0
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_0      0x802010a4
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_1      0x802010a8
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_0             0x802010ac
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_1             0x802010b0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_0 0x802010b4
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_1 0x802010b8
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_0 0x802010bc
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_1 0x802010c0
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_0              0x802010c4
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_1              0x802010c8
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_2              0x802010cc
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_3              0x802010d0
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_4              0x802010d4
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_5              0x802010d8
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_6              0x802010dc
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_0           0x802010e0
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_1           0x802010e4
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_2           0x802010e8
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_3           0x802010ec
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_4           0x802010f0
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_5           0x802010f4
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_6           0x802010f8
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_0          0x802010fc
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_1          0x80201100
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_2          0x80201104
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_3          0x80201108
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_4          0x8020110c
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_5          0x80201110
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_6          0x80201114
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_0             0x80201118
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_1             0x8020111c
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_2             0x80201120
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_3             0x80201124
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_4             0x80201128
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_5             0x8020112c
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_6             0x80201130
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_0 0x80201134
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_1 0x80201138
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_2 0x8020113c
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_3 0x80201140
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_4 0x80201144
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_5 0x80201148
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_6 0x8020114c
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_0 0x80201150
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_1 0x80201154
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_2 0x80201158
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_3 0x8020115c
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_4 0x80201160
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_5 0x80201164
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_6 0x80201168
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_0              0x8020116c
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_1              0x80201170
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_2              0x80201174
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_3              0x80201178
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_4              0x8020117c
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_5              0x80201180
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_6              0x80201184
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_0           0x80201188
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_1           0x8020118c
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_2           0x80201190
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_3           0x80201194
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_4           0x80201198
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_5           0x8020119c
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_6           0x802011a0
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_0          0x802011a4
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_1          0x802011a8
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_2          0x802011ac
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_3          0x802011b0
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_4          0x802011b4
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_5          0x802011b8
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_6          0x802011bc
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_0             0x802011c0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_1             0x802011c4
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_2             0x802011c8
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_3             0x802011cc
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_4             0x802011d0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_5             0x802011d4
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_6             0x802011d8
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_0 0x802011dc
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_1 0x802011e0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_2 0x802011e4
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_3 0x802011e8
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_4 0x802011ec
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_5 0x802011f0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_6 0x802011f4
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_0   0x802011f8
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_1   0x802011fc
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_2   0x80201200
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_3   0x80201204
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_4   0x80201208
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_5   0x8020120c
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_6   0x80201210
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_0 0x80201214
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_1 0x80201218
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_2 0x8020121c
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_3 0x80201220
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_4 0x80201224
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_5 0x80201228
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_6 0x8020122c
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_0                  0x80201230
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_1                  0x80201234
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_2                  0x80201238
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_3                  0x8020123c
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_4                  0x80201240
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_5                  0x80201244
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_6                  0x80201248
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_0                  0x8020124c
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_1                  0x80201250
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_2                  0x80201254
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_3                  0x80201258
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_4                  0x8020125c
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_5                  0x80201260
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_6                  0x80201264
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_0                  0x80201268
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_1                  0x8020126c
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_2                  0x80201270
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_3                  0x80201274
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_4                  0x80201278
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_5                  0x8020127c
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_6                  0x80201280
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_0                  0x80201284
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_1                  0x80201288
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_2                  0x8020128c
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_3                  0x80201290
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_4                  0x80201294
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_5                  0x80201298
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_6                  0x8020129c
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_0                  0x802012a0
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_1                  0x802012a4
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_0                  0x802012a8
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_1                  0x802012ac
#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL    0x802012b0
#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL    0x802012b4
#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL    0x802012b8
#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL    0x802012bc
#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL                  0x802012c0
#define PFR_RESPONSE_QUEUE_ADDRESS_0                       0x802012c4
#define PFR_RESPONSE_QUEUE_ADDRESS_1                       0x802012c8
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_0                 0x802012cc
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_1                 0x802012d0
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_0       0x802012d4
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_1       0x802012d8

#define SVQP_CONTROL                                       0x80204000
#define SVQP_SHAPER_GLOBAL_CONFIG                          0x80204004
#define SVQP_SHAPER_CTRL_0                                 0x80204008
#define SVQP_SHAPER_CTRL_1                                 0x8020400c
#define SVQP_SHAPER_CTRL_2                                 0x80204010
#define SVQP_SHAPER_CTRL_3                                 0x80204014
#define SVQP_SHAPER_CTRL_4                                 0x80204018
#define SVQP_SHAPER_CTRL_5                                 0x8020401c
#define SVQP_SHAPER_CTRL_6                                 0x80204020
#define SVQP_SHAPER_CTRL_7                                 0x80204024
#define SVQP_SHAPER_CTRL_8                                 0x80204028
#define SVQP_SHAPER_CTRL_9                                 0x8020402c
#define SVQP_SHAPER_CTRL_10                                0x80204030
#define SVQP_SHAPER_CTRL_11                                0x80204034
#define SVQP_SHAPER_CTRL_12                                0x80204038
#define SVQP_SHAPER_CTRL_13                                0x8020403c
#define SVQP_SHAPER_CTRL_14                                0x80204040
#define SVQP_SHAPER_CTRL_15                                0x80204044
#define SVQP_SHAPER_CTRL_16                                0x80204048
#define SVQP_SHAPER_CTRL_17                                0x8020404c
#define SVQP_SHAPER_CTRL_18                                0x80204050
#define SVQP_SHAPER_CTRL_19                                0x80204054
#define SVQP_SHAPER_REFRESH_0                              0x80204100
#define SVQP_SHAPER_REFRESH_1                              0x80204104
#define SVQP_SHAPER_REFRESH_2                              0x80204108
#define SVQP_SHAPER_REFRESH_3                              0x8020410c
#define SVQP_SHAPER_REFRESH_4                              0x80204110
#define SVQP_SHAPER_REFRESH_5                              0x80204114
#define SVQP_SHAPER_REFRESH_6                              0x80204118
#define SVQP_SHAPER_REFRESH_7                              0x8020411c
#define SVQP_SHAPER_REFRESH_8                              0x80204120
#define SVQP_SHAPER_REFRESH_9                              0x80204124
#define SVQP_SHAPER_REFRESH_10                             0x80204128
#define SVQP_SHAPER_REFRESH_11                             0x8020412c
#define SVQP_SHAPER_REFRESH_12                             0x80204130
#define SVQP_SHAPER_REFRESH_13                             0x80204134
#define SVQP_SHAPER_REFRESH_14                             0x80204138
#define SVQP_SHAPER_REFRESH_15                             0x8020413c
#define SVQP_SHAPER_REFRESH_16                             0x80204140
#define SVQP_SHAPER_REFRESH_17                             0x80204144
#define SVQP_SHAPER_REFRESH_18                             0x80204148
#define SVQP_SHAPER_REFRESH_19                             0x8020414c
#define SVQP_SHAPER_EBS_THRESHOLD_0                        0x80204200
#define SVQP_SHAPER_EBS_THRESHOLD_1                        0x80204204
#define SVQP_SHAPER_EBS_THRESHOLD_2                        0x80204208
#define SVQP_SHAPER_EBS_THRESHOLD_3                        0x8020420c
#define SVQP_SHAPER_EBS_THRESHOLD_4                        0x80204210
#define SVQP_SHAPER_EBS_THRESHOLD_5                        0x80204214
#define SVQP_SHAPER_EBS_THRESHOLD_6                        0x80204218
#define SVQP_SHAPER_EBS_THRESHOLD_7                        0x8020421c
#define SVQP_SHAPER_EBS_THRESHOLD_8                        0x80204220
#define SVQP_SHAPER_EBS_THRESHOLD_9                        0x80204224
#define SVQP_SHAPER_EBS_THRESHOLD_10                       0x80204228
#define SVQP_SHAPER_EBS_THRESHOLD_11                       0x8020422c
#define SVQP_SHAPER_EBS_THRESHOLD_12                       0x80204230
#define SVQP_SHAPER_EBS_THRESHOLD_13                       0x80204234
#define SVQP_SHAPER_EBS_THRESHOLD_14                       0x80204238
#define SVQP_SHAPER_EBS_THRESHOLD_15                       0x8020423c
#define SVQP_SHAPER_EBS_THRESHOLD_16                       0x80204240
#define SVQP_SHAPER_EBS_THRESHOLD_17                       0x80204244
#define SVQP_SHAPER_EBS_THRESHOLD_18                       0x80204248
#define SVQP_SHAPER_EBS_THRESHOLD_19                       0x8020424c
#define SVQP_SHAPER_CBS_THRESHOLD_0                        0x80204300
#define SVQP_SHAPER_CBS_THRESHOLD_1                        0x80204304
#define SVQP_SHAPER_CBS_THRESHOLD_2                        0x80204308
#define SVQP_SHAPER_CBS_THRESHOLD_3                        0x8020430c
#define SVQP_SHAPER_CBS_THRESHOLD_4                        0x80204310
#define SVQP_SHAPER_CBS_THRESHOLD_5                        0x80204314
#define SVQP_SHAPER_CBS_THRESHOLD_6                        0x80204318
#define SVQP_SHAPER_CBS_THRESHOLD_7                        0x8020431c
#define SVQP_SHAPER_CBS_THRESHOLD_8                        0x80204320
#define SVQP_SHAPER_CBS_THRESHOLD_9                        0x80204324
#define SVQP_SHAPER_CBS_THRESHOLD_10                       0x80204328
#define SVQP_SHAPER_CBS_THRESHOLD_11                       0x8020432c
#define SVQP_SHAPER_CBS_THRESHOLD_12                       0x80204330
#define SVQP_SHAPER_CBS_THRESHOLD_13                       0x80204334
#define SVQP_SHAPER_CBS_THRESHOLD_14                       0x80204338
#define SVQP_SHAPER_CBS_THRESHOLD_15                       0x8020433c
#define SVQP_SHAPER_CBS_THRESHOLD_16                       0x80204340
#define SVQP_SHAPER_CBS_THRESHOLD_17                       0x80204344
#define SVQP_SHAPER_CBS_THRESHOLD_18                       0x80204348
#define SVQP_SHAPER_CBS_THRESHOLD_19                       0x8020434c
#define SVQP_SHAPER_EIR_COUNT_0                            0x80204400
#define SVQP_SHAPER_EIR_COUNT_1                            0x80204404
#define SVQP_SHAPER_EIR_COUNT_2                            0x80204408
#define SVQP_SHAPER_EIR_COUNT_3                            0x8020440c
#define SVQP_SHAPER_EIR_COUNT_4                            0x80204410
#define SVQP_SHAPER_EIR_COUNT_5                            0x80204414
#define SVQP_SHAPER_EIR_COUNT_6                            0x80204418
#define SVQP_SHAPER_EIR_COUNT_7                            0x8020441c
#define SVQP_SHAPER_EIR_COUNT_8                            0x80204420
#define SVQP_SHAPER_EIR_COUNT_9                            0x80204424
#define SVQP_SHAPER_EIR_COUNT_10                           0x80204428
#define SVQP_SHAPER_EIR_COUNT_11                           0x8020442c
#define SVQP_SHAPER_EIR_COUNT_12                           0x80204430
#define SVQP_SHAPER_EIR_COUNT_13                           0x80204434
#define SVQP_SHAPER_EIR_COUNT_14                           0x80204438
#define SVQP_SHAPER_EIR_COUNT_15                           0x8020443c
#define SVQP_SHAPER_EIR_COUNT_16                           0x80204440
#define SVQP_SHAPER_EIR_COUNT_17                           0x80204444
#define SVQP_SHAPER_EIR_COUNT_18                           0x80204448
#define SVQP_SHAPER_EIR_COUNT_19                           0x8020444c
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_0                 0x80204500
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_1                 0x80204504
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_2                 0x80204508
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_3                 0x8020450c
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_4                 0x80204510
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_5                 0x80204514
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_6                 0x80204518
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_7                 0x8020451c
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_8                 0x80204520
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_9                 0x80204524
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10                0x80204528
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11                0x8020452c
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12                0x80204530
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13                0x80204534
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14                0x80204538
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15                0x8020453c
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16                0x80204540
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17                0x80204544
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18                0x80204548
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19                0x8020454c
#define SVQP_SHAPER_OVERHEAD_CORRECTION_0                  0x80204600
#define SVQP_SHAPER_OVERHEAD_CORRECTION_1                  0x80204604
#define SVQP_SHAPER_OVERHEAD_CORRECTION_2                  0x80204608
#define SVQP_SHAPER_OVERHEAD_CORRECTION_3                  0x8020460c
#define SVQP_SHAPER_OVERHEAD_CORRECTION_4                  0x80204610
#define SVQP_SHAPER_OVERHEAD_CORRECTION_5                  0x80204614
#define SVQP_SHAPER_OVERHEAD_CORRECTION_6                  0x80204618
#define SVQP_SHAPER_OVERHEAD_CORRECTION_7                  0x8020461c
#define SVQP_SHAPER_OVERHEAD_CORRECTION_8                  0x80204620
#define SVQP_SHAPER_OVERHEAD_CORRECTION_9                  0x80204624
#define SVQP_SHAPER_OVERHEAD_CORRECTION_10                 0x80204628
#define SVQP_SHAPER_OVERHEAD_CORRECTION_11                 0x8020462c
#define SVQP_SHAPER_OVERHEAD_CORRECTION_12                 0x80204630
#define SVQP_SHAPER_OVERHEAD_CORRECTION_13                 0x80204634
#define SVQP_SHAPER_OVERHEAD_CORRECTION_14                 0x80204638
#define SVQP_SHAPER_OVERHEAD_CORRECTION_15                 0x8020463c
#define SVQP_SHAPER_OVERHEAD_CORRECTION_16                 0x80204640
#define SVQP_SHAPER_OVERHEAD_CORRECTION_17                 0x80204644
#define SVQP_SHAPER_OVERHEAD_CORRECTION_18                 0x80204648
#define SVQP_SHAPER_OVERHEAD_CORRECTION_19                 0x8020464c
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_0                   0x80204700
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_1                   0x80204704
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_2                   0x80204708
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_3                   0x8020470c
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_4                   0x80204710
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_5                   0x80204714
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_6                   0x80204718
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_7                   0x8020471c
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_8                   0x80204720
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_9                   0x80204724
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_10                  0x80204728
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_11                  0x8020472c
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_12                  0x80204730
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_13                  0x80204734
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_14                  0x80204738
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_15                  0x8020473c
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_16                  0x80204740
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_17                  0x80204744
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_18                  0x80204748
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_19                  0x8020474c
#define SVQP_SVG_MAX_RATE_METER_CTRL0_0                    0x80204800
#define SVQP_SVG_MAX_RATE_METER_CTRL0_1                    0x80204804
#define SVQP_SVG_MAX_RATE_METER_CTRL0_2                    0x80204808
#define SVQP_SVG_MAX_RATE_METER_CTRL0_3                    0x8020480c
#define SVQP_SVG_MAX_RATE_METER_CTRL0_4                    0x80204810
#define SVQP_SVG_MAX_RATE_METER_CTRL0_5                    0x80204814
#define SVQP_SVG_MAX_RATE_METER_CTRL0_6                    0x80204818
#define SVQP_SVG_MAX_RATE_METER_CTRL0_7                    0x8020481c
#define SVQP_SVG_MAX_RATE_METER_CTRL0_8                    0x80204820
#define SVQP_SVG_MAX_RATE_METER_CTRL1_0                    0x80204840
#define SVQP_SVG_MAX_RATE_METER_CTRL1_1                    0x80204844
#define SVQP_SVG_MAX_RATE_METER_CTRL1_2                    0x80204848
#define SVQP_SVG_MAX_RATE_METER_CTRL1_3                    0x8020484c
#define SVQP_SVG_MAX_RATE_METER_CTRL1_4                    0x80204850
#define SVQP_SVG_MAX_RATE_METER_CTRL1_5                    0x80204854
#define SVQP_SVG_MAX_RATE_METER_CTRL1_6                    0x80204858
#define SVQP_SVG_MAX_RATE_METER_CTRL1_7                    0x8020485c
#define SVQP_SVG_MAX_RATE_METER_CTRL1_8                    0x80204860
#define SVQP_SVG_MAX_RATE_METER_STATUS_0                   0x80204880
#define SVQP_SVG_MAX_RATE_METER_STATUS_1                   0x80204884
#define SVQP_SVG_MAX_RATE_METER_STATUS_2                   0x80204888
#define SVQP_SVG_MAX_RATE_METER_STATUS_3                   0x8020488c
#define SVQP_SVG_MAX_RATE_METER_STATUS_4                   0x80204890
#define SVQP_SVG_MAX_RATE_METER_STATUS_5                   0x80204894
#define SVQP_SVG_MAX_RATE_METER_STATUS_6                   0x80204898
#define SVQP_SVG_MAX_RATE_METER_STATUS_7                   0x8020489c
#define SVQP_SVG_MAX_RATE_METER_STATUS_8                   0x802048a0
#define SVQP_SVG_ARB_MAPPING_0                             0x802048c0
#define SVQP_SVG_ARB_MAPPING_1                             0x802048c4
#define SVQP_SVG_ARB_MAPPING_2                             0x802048c8
#define SVQP_SVG_ARB_MAPPING_3                             0x802048cc
#define SVQP_SVG_ARB_MAPPING_4                             0x802048d0
#define SVQP_SVG_ARB_MAPPING_5                             0x802048d4
#define SVQP_SVG_ARB_MAPPING_6                             0x802048d8
#define SVQP_SVG_ARB_MAPPING_7                             0x802048dc
#define SVQP_SVG_ARB_MAPPING_8                             0x802048e0
#define SVQP_SVG_ARB_CTRL_0                                0x80204940
#define SVQP_SVG_ARB_CTRL_1                                0x80204944
#define SVQP_SVG_ARB_CTRL_2                                0x80204948
#define SVQP_SVG_ARB_CTRL_3                                0x8020494c
#define SVQP_SVG_ARB_CTRL_4                                0x80204950
#define SVQP_SVG_ARB_CTRL_5                                0x80204954
#define SVQP_SVG_ARB_CTRL_6                                0x80204958
#define SVQP_SVG_ARB_CTRL_7                                0x8020495c
#define SVQP_SVG_ARB_CTRL_8                                0x80204960
#define SVQP_SVQ_DESC_RING_CTRL_0                          0x80204a00
#define SVQP_SVQ_DESC_RING_CTRL_1                          0x80204a04
#define SVQP_SVQ_DESC_RING_CTRL_2                          0x80204a08
#define SVQP_SVQ_DESC_RING_CTRL_3                          0x80204a0c
#define SVQP_SVQ_DESC_RING_CTRL_4                          0x80204a10
#define SVQP_SVQ_DESC_RING_CTRL_5                          0x80204a14
#define SVQP_SVQ_DESC_RING_CTRL_6                          0x80204a18
#define SVQP_SVQ_DESC_RING_CTRL_7                          0x80204a1c
#define SVQP_SVQ_DESC_RING_CTRL_8                          0x80204a20
#define SVQP_SVQ_DESC_RING_CTRL_9                          0x80204a24
#define SVQP_SVQ_DESC_RING_CTRL_10                         0x80204a28
#define SVQP_SVQ_DESC_RING_CTRL_11                         0x80204a2c
#define SVQP_SVQ_DESC_RING_CTRL_12                         0x80204a30
#define SVQP_SVQ_DESC_RING_CTRL_13                         0x80204a34
#define SVQP_SVQ_DESC_RING_CTRL_14                         0x80204a38
#define SVQP_SVQ_DESC_RING_CTRL_15                         0x80204a3c
#define SVQP_SVQ_DESC_RING_CTRL_16                         0x80204a40
#define SVQP_SVQ_DESC_RING_CTRL_17                         0x80204a44
#define SVQP_SVQ_DESC_RING_CTRL_18                         0x80204a48
#define SVQP_SVQ_DESC_RING_CTRL_19                         0x80204a4c
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_0        0x80204b00
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_1        0x80204b04
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_2        0x80204b08
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_3        0x80204b0c
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_4        0x80204b10
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_5        0x80204b14
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_6        0x80204b18
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_7        0x80204b1c
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_8        0x80204b20
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_9        0x80204b24
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_10       0x80204b28
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_11       0x80204b2c
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_12       0x80204b30
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_13       0x80204b34
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_14       0x80204b38
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_15       0x80204b3c
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_16       0x80204b40
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_17       0x80204b44
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_18       0x80204b48
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_19       0x80204b4c
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_0                  0x80204c00
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_1                  0x80204c04
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_2                  0x80204c08
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_3                  0x80204c0c
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_4                  0x80204c10
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_5                  0x80204c14
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_6                  0x80204c18
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_7                  0x80204c1c
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_8                  0x80204c20
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_9                  0x80204c24
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_10                 0x80204c28
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_11                 0x80204c2c
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_12                 0x80204c30
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_13                 0x80204c34
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_14                 0x80204c38
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_15                 0x80204c3c
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_16                 0x80204c40
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_17                 0x80204c44
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_18                 0x80204c48
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_19                 0x80204c4c
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_0                  0x80204d00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_1                  0x80204d04
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_2                  0x80204d08
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_3                  0x80204d0c
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_4                  0x80204d10
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_5                  0x80204d14
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_6                  0x80204d18
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_7                  0x80204d1c
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_8                  0x80204d20
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_9                  0x80204d24
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_10                 0x80204d28
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_11                 0x80204d2c
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_12                 0x80204d30
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_13                 0x80204d34
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_14                 0x80204d38
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_15                 0x80204d3c
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_16                 0x80204d40
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_17                 0x80204d44
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_18                 0x80204d48
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_19                 0x80204d4c
#define SVQP_SVQ_DDR_RING_SIZE_0                           0x80204e00
#define SVQP_SVQ_DDR_RING_SIZE_1                           0x80204e04
#define SVQP_SVQ_DDR_RING_SIZE_2                           0x80204e08
#define SVQP_SVQ_DDR_RING_SIZE_3                           0x80204e0c
#define SVQP_SVQ_DDR_RING_SIZE_4                           0x80204e10
#define SVQP_SVQ_DDR_RING_SIZE_5                           0x80204e14
#define SVQP_SVQ_DDR_RING_SIZE_6                           0x80204e18
#define SVQP_SVQ_DDR_RING_SIZE_7                           0x80204e1c
#define SVQP_SVQ_DDR_RING_SIZE_8                           0x80204e20
#define SVQP_SVQ_DDR_RING_SIZE_9                           0x80204e24
#define SVQP_SVQ_DDR_RING_SIZE_10                          0x80204e28
#define SVQP_SVQ_DDR_RING_SIZE_11                          0x80204e2c
#define SVQP_SVQ_DDR_RING_SIZE_12                          0x80204e30
#define SVQP_SVQ_DDR_RING_SIZE_13                          0x80204e34
#define SVQP_SVQ_DDR_RING_SIZE_14                          0x80204e38
#define SVQP_SVQ_DDR_RING_SIZE_15                          0x80204e3c
#define SVQP_SVQ_DDR_RING_SIZE_16                          0x80204e40
#define SVQP_SVQ_DDR_RING_SIZE_17                          0x80204e44
#define SVQP_SVQ_DDR_RING_SIZE_18                          0x80204e48
#define SVQP_SVQ_DDR_RING_SIZE_19                          0x80204e4c
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_0                     0x80204f00
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_1                     0x80204f04
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_2                     0x80204f08
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_3                     0x80204f0c
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_4                     0x80204f10
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_5                     0x80204f14
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_6                     0x80204f18
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_7                     0x80204f1c
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_8                     0x80204f20
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_9                     0x80204f24
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_10                    0x80204f28
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_11                    0x80204f2c
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_12                    0x80204f30
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_13                    0x80204f34
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_14                    0x80204f38
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_15                    0x80204f3c
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_16                    0x80204f40
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_17                    0x80204f44
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_18                    0x80204f48
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_19                    0x80204f4c
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_0                  0x80205000
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_1                  0x80205004
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_2                  0x80205008
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_3                  0x8020500c
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_4                  0x80205010
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_5                  0x80205014
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_6                  0x80205018
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_7                  0x8020501c
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_8                  0x80205020
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_9                  0x80205024
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_10                 0x80205028
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_11                 0x8020502c
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_12                 0x80205030
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_13                 0x80205034
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_14                 0x80205038
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_15                 0x8020503c
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_16                 0x80205040
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_17                 0x80205044
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_18                 0x80205048
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_19                 0x8020504c
#define SVQP_SVQ_DDR_RING_BURST_CTRL                       0x80205100
#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL                      0x80205104
#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL                      0x80205108

#define TAM_CONFIG                                         0x80206000
#define TAM_STAT_CFG                                       0x80206008
#define TAM_ARB_CFG                                        0x80206010
#define TAM_ARB_WEIGHT_PFR                                 0x80206014
#define TAM_ARB_WEIGHT_SVQP                                0x80206018
#define TAM_ARB_WEIGHT_ATXQ                                0x8020601c
#define TAM_TM_TXQ_DESC_RING_CTRL0                         0x80206020
#define TAM_TM_TXQ_DESC_RING_CTRL1                         0x80206024
#define TAM_TM_TXQ_DESC_RING_CTRL2                         0x80206028
#define TAM_TM_TXQ_DESC_RING_CTRL3                         0x8020602c
#define TAM_TM_TXQ_DESC_RING_CTRL4                         0x80206030
#define TAM_TM_TXQ_DESC_RING_CTRL5                         0x80206034
#define TAM_TM_TXQ_DESC_RING_CTRL6                         0x80206038
#define TAM_TM_TXQ_DESC_RING_CTRL7                         0x8020603c
#define TAM_TM_TXQ_DESC_RING_CTRL8                         0x80206040
#define TAM_TM_TXQ_DESC_RING_CTRL9                         0x80206044
#define TAM_TM_TXQ_DESC_RING_CTRL10                        0x80206048
#define TAM_TM_TXQ_DESC_RING_CTRL11                        0x8020604c
#define TAM_TM_TXQ_DESC_RING_CTRL12                        0x80206050
#define TAM_TM_TXQ_DESC_RING_CTRL13                        0x80206054
#define TAM_TM_TXQ_DESC_RING_CTRL14                        0x80206058
#define TAM_TM_TXQ_DESC_RING_CTRL15                        0x8020605c
#define TAM_TM_TXQ_DESC_RING_CTRL16                        0x80206060
#define TAM_TM_TXQ_DESC_RING_CTRL17                        0x80206064
#define TAM_TM_TXQ_DESC_RING_CTRL18                        0x80206068
#define TAM_TM_TXQ_DESC_RING_CTRL19                        0x8020606c
#define TAM_TM_TXQ_DESC_RING_CTRL20                        0x80206070
#define TAM_TM_TXQ_DESC_RING_CTRL21                        0x80206074
#define TAM_TM_TXQ_DESC_RING_CTRL22                        0x80206078
#define TAM_TM_TXQ_DESC_RING_CTRL23                        0x8020607c
#define TAM_TM_TXQ_DESC_RING_CTRL24                        0x80206080
#define TAM_TM_TXQ_DESC_RING_CTRL25                        0x80206084
#define TAM_TM_TXQ_DESC_RING_CTRL26                        0x80206088
#define TAM_TM_TXQ_DESC_RING_CTRL27                        0x8020608c
#define TAM_TM_TXQ_DESC_RING_CTRL28                        0x80206090
#define TAM_TM_TXQ_DESC_RING_CTRL29                        0x80206094
#define TAM_TM_TXQ_DESC_RING_CTRL30                        0x80206098
#define TAM_TM_TXQ_DESC_RING_CTRL31                        0x8020609c
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER0            0x802060a0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER1            0x802060a4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER2            0x802060a8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER3            0x802060ac
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER4            0x802060b0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER5            0x802060b4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER6            0x802060b8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER7            0x802060bc
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER8            0x802060c0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER9            0x802060c4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER10           0x802060c8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER11           0x802060cc
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER12           0x802060d0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER13           0x802060d4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER14           0x802060d8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER15           0x802060dc
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER16           0x802060e0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER17           0x802060e4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER18           0x802060e8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER19           0x802060ec
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER20           0x802060f0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER21           0x802060f4
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER22           0x802060f8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER23           0x802060fc
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER24           0x80206100
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER25           0x80206104
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER26           0x80206108
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER27           0x8020610c
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER28           0x80206110
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER29           0x80206114
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER30           0x80206118
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER31           0x8020611c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER0                   0x80206120
#define TAM_TM_TXQ_RING_DISCARD_COUNTER1                   0x80206124
#define TAM_TM_TXQ_RING_DISCARD_COUNTER2                   0x80206128
#define TAM_TM_TXQ_RING_DISCARD_COUNTER3                   0x8020612c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER4                   0x80206130
#define TAM_TM_TXQ_RING_DISCARD_COUNTER5                   0x80206134
#define TAM_TM_TXQ_RING_DISCARD_COUNTER6                   0x80206138
#define TAM_TM_TXQ_RING_DISCARD_COUNTER7                   0x8020613c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER8                   0x80206140
#define TAM_TM_TXQ_RING_DISCARD_COUNTER9                   0x80206144
#define TAM_TM_TXQ_RING_DISCARD_COUNTER10                  0x80206148
#define TAM_TM_TXQ_RING_DISCARD_COUNTER11                  0x8020614c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER12                  0x80206150
#define TAM_TM_TXQ_RING_DISCARD_COUNTER13                  0x80206154
#define TAM_TM_TXQ_RING_DISCARD_COUNTER14                  0x80206158
#define TAM_TM_TXQ_RING_DISCARD_COUNTER15                  0x8020615c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER16                  0x80206160
#define TAM_TM_TXQ_RING_DISCARD_COUNTER17                  0x80206164
#define TAM_TM_TXQ_RING_DISCARD_COUNTER18                  0x80206168
#define TAM_TM_TXQ_RING_DISCARD_COUNTER19                  0x8020616c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER20                  0x80206170
#define TAM_TM_TXQ_RING_DISCARD_COUNTER21                  0x80206174
#define TAM_TM_TXQ_RING_DISCARD_COUNTER22                  0x80206178
#define TAM_TM_TXQ_RING_DISCARD_COUNTER23                  0x8020617c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER24                  0x80206180
#define TAM_TM_TXQ_RING_DISCARD_COUNTER25                  0x80206184
#define TAM_TM_TXQ_RING_DISCARD_COUNTER26                  0x80206188
#define TAM_TM_TXQ_RING_DISCARD_COUNTER27                  0x8020618c
#define TAM_TM_TXQ_RING_DISCARD_COUNTER28                  0x80206190
#define TAM_TM_TXQ_RING_DISCARD_COUNTER29                  0x80206194
#define TAM_TM_TXQ_RING_DISCARD_COUNTER30                  0x80206198
#define TAM_TM_TXQ_RING_DISCARD_COUNTER31                  0x8020619c
#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL             0x802061a0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG                0x802061a4
#define TAM_ATXQ_DESC_RING_CTRL                            0x802061b0
#define TAM_TXQ_DDR_DESC_RING_PRODUCER_INDEX               0x802061b4
#define TAM_TXQ_DDR_DESC_RING_CONSUMER_INDEX               0x802061b8
#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_LOW            0x802061bc
#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_HIGH           0x802061c0
#define TAM_TXQ_DDR_DESC_RING_SIZE                         0x802061c4
#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL                0x802061c8
#define TAM_TXQ_DDR_DESC_RING_RD_PUSH_TIMER                0x802061cc
#define TAM_TXQ_INTR_CFG                                   0x802061d0
#define TAM_TM_TXQ_LOCRAM_RING_FULL                        0x802061e0
#define TAM_TM_TXQ_SYSRAM_RING_FULL                        0x802061e4
#define TAM_TM_TXQ_LOCRAM_RING_EMPTY                       0x802061e8
#define TAM_TM_TXQ_SYSRAM_RING_EMPTY                       0x802061ec
#define TAM_ATXQ_RING_EMPTY                                0x802061f0

#define UBUS_ACCESS_P0_CLIENT_EN                           0x80208000
#define UBUS_ACCESS_P1_CLIENT_EN                           0x80208004
#define UBUS_ACCESS_P0_WR_ENDREPLY_EN                      0x80208008
#define UBUS_ACCESS_P1_WR_ENDREPLY_EN                      0x8020800c
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN              0x80208010
#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN              0x80208014
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRBUF      0x80208020
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRDSC      0x80208024
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRRXQD       0x80208028
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRSTQ        0x8020802c
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTTX_WRRRD      0x80208030
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_MPMBA_WRRNG      0x80208034
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRMISC       0x80208038
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRREC        0x8020803c
#define UBUS_ACCESS_CLIENT_PRIO0                           0x80208040
#define UBUS_ACCESS_CLIENT_PRIO1                           0x80208044
#define UBUS_ACCESS_CLIENT_PRIO2                           0x80208048
#define UBUS_ACCESS_CLIENT_PRIO3                           0x8020804c
#define UBUS_ACCESS_CLIENT_PRIO4                           0x80208050
#define UBUS_ACCESS_CLIENT_PRIO5                           0x80208054
#define UBUS_ACCESS_CLIENT_PRIO6                           0x80208058
#define UBUS_ACCESS_CLIENT_PRIO7                           0x8020805c
#define UBUS_ACCESS_CLIENT_PRIO8                           0x80208060
#define UBUS_ACCESS_CLIENT_PRIO9                           0x80208064
#define UBUS_ACCESS_CLIENT_PRIO10                          0x80208068
#define UBUS_ACCESS_CLIENT_PRIO11                          0x8020806c
#define UBUS_ACCESS_CLIENT_PRIO12                          0x80208070
#define UBUS_ACCESS_CLIENT_PRIO13                          0x80208074
#define UBUS_ACCESS_CLIENT_PRIO14                          0x80208078
#define UBUS_ACCESS_CLIENT_PRIO15                          0x8020807c
#define UBUS_ACCESS_CLIENT_PRIO16                          0x80208080
#define UBUS_ACCESS_CLIENT_PRIO17                          0x80208084
#define UBUS_ACCESS_CLIENT_PRIO18                          0x80208088
#define UBUS_ACCESS_CLIENT_PRIO19                          0x8020808c
#define UBUS_ACCESS_CLIENT_PRIO20                          0x80208090
#define UBUS_ACCESS_CLIENT_PRIO21                          0x80208094
#define UBUS_ACCESS_CLIENT_PRIO22                          0x80208098
#define UBUS_ACCESS_CLIENT_PRIO23                          0x8020809c
#define UBUS_ACCESS_CLIENT_PRIO24                          0x802080a0
#define UBUS_ACCESS_CLIENT_PRIO25                          0x802080a4
#define UBUS_ACCESS_CLIENT_PRIO26                          0x802080a8
#define UBUS_ACCESS_CLIENT_PRIO27                          0x802080ac
#define UBUS_ACCESS_CLIENT_PRIO28                          0x802080b0
#define UBUS_ACCESS_CLIENT_PRIO29                          0x802080b4
#define UBUS_ACCESS_CLIENT_PRIO30                          0x802080b8
#define UBUS_ACCESS_CLIENT_PRIO31                          0x802080bc
#define UBUS_ACCESS_CLIENT_PRIO32                          0x802080c0
#define UBUS_ACCESS_CLIENT_PRIO33                          0x802080c4
#define UBUS_ACCESS_CGROUP_EN_UBUS0                        0x80208140
#define UBUS_ACCESS_CGROUP_EN_UBUS1                        0x80208144
#define UBUS_ACCESS_ARB_TYPE_UBUS0                         0x80208150
#define UBUS_ACCESS_ARB_TYPE_UBUS1                         0x80208154
#define UBUS_ACCESS_CGROUP_ARB_TYPE0                       0x80208160
#define UBUS_ACCESS_CGROUP_ARB_TYPE1                       0x80208164
#define UBUS_ACCESS_CGROUP_ARB_TYPE2                       0x80208168
#define UBUS_ACCESS_CGROUP_PRIO0                           0x80208170
#define UBUS_ACCESS_CGROUP_PRIO1                           0x80208174
#define UBUS_ACCESS_CGROUP_PRIO2                           0x80208178
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0                   0x80208180
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1                   0x80208184
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2                   0x80208188
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0                   0x80208190
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1                   0x80208194
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2                   0x80208198
#define UBUS_ACCESS_DIAG_UBUS0                             0x802081a0
#define UBUS_ACCESS_DIAG_UBUS1                             0x802081a4

#define SGDMA_CONTROL                                      0x80208600
#define SGDMA_WQ_DMA_CMDLIST_OFFSET                        0x80208604
#define SGDMA_RESPONSE_QUEUE_ADDRESS_0                     0x80208610
#define SGDMA_RESPONSE_QUEUE_ADDRESS_1                     0x80208614
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_0               0x80208618
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_1               0x8020861c
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_0     0x80208620
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_1     0x80208624
#define SGDMA_GP_RQ_CONTROL                                0x80208628
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_1                    0x80208630
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_2                    0x80208634
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_3                    0x80208638
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_4                    0x8020863c
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_5                    0x80208640
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_6                    0x80208644
#define SGDMA_GP_DMA_0_CMDLIST_OFFSET_7                    0x80208648
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_1                    0x80208650
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_2                    0x80208654
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_3                    0x80208658
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_4                    0x8020865c
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_5                    0x80208660
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_6                    0x80208664
#define SGDMA_GP_DMA_1_CMDLIST_OFFSET_7                    0x80208668
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_0                  0x80208670
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_1                  0x80208674
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_0            0x80208678
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_1            0x8020867c
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_0  0x80208680
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_1  0x80208684
#define SGDMA_GP_RQ_SIZE_0                                 0x80208688
#define SGDMA_GP_RQ_SIZE_1                                 0x8020868c
#define SGDMA_DBG_CTRL                                     0x802086a0
#define SGDMA_DBG_CTRL2                                    0x802086a4
#define SGDMA_DBG_DIN_REG                                  0x802086a8
#define SGDMA_DBG_DIN_REG2                                 0x802086ac
#define SGDMA_DBG_DOUT_REG                                 0x802086b0
#define SGDMA_DBG_DOUT_REG2                                0x802086b4
#define SGDMA_OSTD_CNT                                     0x802086b8
#define SGDMA_SLOT_AVAIL_CNT                               0x802086bc
#define SGDMA_DBG_STATUS_REG                               0x802086c0
#define SGDMA_DBG_STATUS_REG2                              0x802086c4

#define CCAM_CONTROL                                       0x80208800

#define DIB_COMMON_CONFIGURATION                           0x80208a00
#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION 0x80208a04
#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION            0x80208a08
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION 0x80208a0c
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION 0x80208a10
#define DIB_RX_POST_RING_CONFIGURATION_0                   0x80208a14
#define DIB_RX_POST_RING_CONFIGURATION_1                   0x80208a18
#define DIB_RX_POST_RING_CONTROL_0                         0x80208a1c
#define DIB_RX_POST_RING_CONTROL_1                         0x80208a20
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_0                 0x80208a24
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_1                 0x80208a28
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_0                0x80208a2c
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_1                0x80208a30
#define DIB_RX_POST_RING_READ_INDEX_0                      0x80208a34
#define DIB_RX_POST_RING_READ_INDEX_1                      0x80208a38
#define DIB_RX_POST_RING_WRITE_INDEX_0                     0x80208a3c
#define DIB_RX_POST_RING_WRITE_INDEX_1                     0x80208a40
#define DIB_RX_POST_RING_PRODUCER_INDEX_0                  0x80208a44
#define DIB_RX_POST_RING_PRODUCER_INDEX_1                  0x80208a48
#define DIB_RX_POST_RING_CONSUMER_INDEX_0                  0x80208a4c
#define DIB_RX_POST_RING_CONSUMER_INDEX_1                  0x80208a50
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_0     0x80208a54
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_1     0x80208a58
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_0    0x80208a5c
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_1    0x80208a60
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_0      0x80208a64
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_1      0x80208a68
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_0     0x80208a6c
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_1     0x80208a70
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_0 0x80208a74
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_1 0x80208a78
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_0 0x80208a7c
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_1 0x80208a80
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_0            0x80208a84
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_1            0x80208a88
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_0 0x80208a8c
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_1 0x80208a90
#define DIB_RX_POST_RING_STATUS0_0                         0x80208a94
#define DIB_RX_POST_RING_STATUS0_1                         0x80208a98
#define DIB_TX_COMPLETE_RING_CONFIGURATION_0               0x80208a9c
#define DIB_TX_COMPLETE_RING_CONFIGURATION_1               0x80208aa0
#define DIB_TX_COMPLETE_RING_CONTROL_0                     0x80208aa4
#define DIB_TX_COMPLETE_RING_CONTROL_1                     0x80208aa8
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_0             0x80208aac
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_1             0x80208ab0
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_0            0x80208ab4
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_1            0x80208ab8
#define DIB_TX_COMPLETE_RING_READ_INDEX_0                  0x80208abc
#define DIB_TX_COMPLETE_RING_READ_INDEX_1                  0x80208ac0
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_0                 0x80208ac4
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_1                 0x80208ac8
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_0              0x80208acc
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_1              0x80208ad0
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_0              0x80208ad4
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_1              0x80208ad8
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_0 0x80208adc
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_1 0x80208ae0
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_0 0x80208ae4
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_1 0x80208ae8
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_0  0x80208aec
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_1  0x80208af0
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_0 0x80208af4
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_1 0x80208af8
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_0 0x80208afc
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_1 0x80208b00
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_0 0x80208b04
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_1 0x80208b08
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_0        0x80208b0c
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_1        0x80208b10
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_0 0x80208b14
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_1 0x80208b18
#define DIB_TX_COMPLETE_RING_STATUS0_0                     0x80208b1c
#define DIB_TX_COMPLETE_RING_STATUS0_1                     0x80208b20
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_0 0x80208b24
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_1 0x80208b28
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_0        0x80208b2c
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_1        0x80208b30
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_0 0x80208b34
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_1 0x80208b38
#define DIB_RECYCLE_RING_CONFIGURATION_0                   0x80208b3c
#define DIB_RECYCLE_RING_CONFIGURATION_1                   0x80208b40
#define DIB_RECYCLE_RING_CONTROL_0                         0x80208b44
#define DIB_RECYCLE_RING_CONTROL_1                         0x80208b48
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_0                 0x80208b4c
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_1                 0x80208b50
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_0                0x80208b54
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_1                0x80208b58
#define DIB_RECYCLE_RING_PRODUCER_INDEX_0                  0x80208b5c
#define DIB_RECYCLE_RING_PRODUCER_INDEX_1                  0x80208b60
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_0  0x80208b64
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_1  0x80208b68
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_0 0x80208b6c
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_1 0x80208b70
#define DIB_RECYCLE_RING_CONSUMER_INDEX_0                  0x80208b74
#define DIB_RECYCLE_RING_CONSUMER_INDEX_1                  0x80208b78
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_0         0x80208b7c
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_1         0x80208b80
#define DIB_RECYCLE_RING_STATUS0_0                         0x80208b84
#define DIB_RECYCLE_RING_STATUS0_1                         0x80208b88

#define NATCACHE_NATC_CONTROL_STATUS                       0x80230000
#define NATCACHE_NATC_CONTROL_STATUS2                      0x80230004
#define NATCACHE_NATC_TABLE_CONTROL                        0x80230008
#define NATCACHE_NAT0_COMMAND_STATUS                       0x80230010
#define NATCACHE_NAT0_HASH                                 0x80230014
#define NATCACHE_NAT0_HIT_COUNT                            0x80230018
#define NATCACHE_NAT0_BYTE_COUNT                           0x8023001c
#define NATCACHE_NAT0_PKT_LEN                              0x80230020
#define NATCACHE_NAT0_KEY_RESULT0                          0x80230030
#define NATCACHE_NAT0_KEY_RESULT1                          0x80230034
#define NATCACHE_NAT0_KEY_RESULT2                          0x80230038
#define NATCACHE_NAT0_KEY_RESULT3                          0x8023003c
#define NATCACHE_NAT0_KEY_RESULT4                          0x80230040
#define NATCACHE_NAT0_KEY_RESULT5                          0x80230044
#define NATCACHE_NAT0_KEY_RESULT6                          0x80230048
#define NATCACHE_NAT0_KEY_RESULT7                          0x8023004c
#define NATCACHE_NAT0_KEY_RESULT8                          0x80230050
#define NATCACHE_NAT0_KEY_RESULT9                          0x80230054
#define NATCACHE_NAT0_KEY_RESULT10                         0x80230058
#define NATCACHE_NAT0_KEY_RESULT11                         0x8023005c
#define NATCACHE_NAT0_KEY_RESULT12                         0x80230060
#define NATCACHE_NAT0_KEY_RESULT13                         0x80230064
#define NATCACHE_NAT0_KEY_RESULT14                         0x80230068
#define NATCACHE_NAT0_KEY_RESULT15                         0x8023006c
#define NATCACHE_NAT0_KEY_RESULT16                         0x80230070
#define NATCACHE_NAT0_KEY_RESULT17                         0x80230074
#define NATCACHE_NAT0_KEY_RESULT18                         0x80230078
#define NATCACHE_NAT0_KEY_RESULT19                         0x8023007c
#define NATCACHE_NAT0_KEY_RESULT20                         0x80230080
#define NATCACHE_NAT0_KEY_RESULT21                         0x80230084
#define NATCACHE_NAT0_KEY_RESULT22                         0x80230088
#define NATCACHE_NAT0_KEY_RESULT23                         0x8023008c
#define NATCACHE_NAT0_KEY_RESULT24                         0x80230090
#define NATCACHE_NAT0_KEY_RESULT25                         0x80230094
#define NATCACHE_NAT0_KEY_RESULT26                         0x80230098
#define NATCACHE_NAT0_KEY_RESULT27                         0x8023009c
#define NATCACHE_NAT0_KEY_RESULT28                         0x802300a0
#define NATCACHE_NAT0_KEY_RESULT29                         0x802300a4
#define NATCACHE_NAT0_KEY_RESULT30                         0x802300a8
#define NATCACHE_NAT0_KEY_RESULT31                         0x802300ac
#define NATCACHE_NAT0_KEY_RESULT32                         0x802300b0
#define NATCACHE_NAT0_KEY_RESULT33                         0x802300b4
#define NATCACHE_NAT0_KEY_RESULT34                         0x802300b8
#define NATCACHE_NAT0_KEY_RESULT35                         0x802300bc
#define NATCACHE_NAT0_KEY_RESULT36                         0x802300c0
#define NATCACHE_NAT0_KEY_RESULT37                         0x802300c4
#define NATCACHE_NAT0_KEY_RESULT38                         0x802300c8
#define NATCACHE_NAT0_KEY_RESULT39                         0x802300cc
#define NATCACHE_NAT0_KEY_RESULT40                         0x802300d0
#define NATCACHE_NAT0_KEY_RESULT41                         0x802300d4
#define NATCACHE_NAT0_KEY_RESULT42                         0x802300d8
#define NATCACHE_NAT0_KEY_RESULT43                         0x802300dc
#define NATCACHE_NAT0_KEY_RESULT44                         0x802300e0
#define NATCACHE_NAT0_KEY_RESULT45                         0x802300e4
#define NATCACHE_NAT0_KEY_RESULT46                         0x802300e8
#define NATCACHE_NAT0_KEY_RESULT47                         0x802300ec
#define NATCACHE_NAT0_KEY_RESULT48                         0x802300f0
#define NATCACHE_NAT0_KEY_RESULT49                         0x802300f4
#define NATCACHE_NAT0_KEY_RESULT50                         0x802300f8
#define NATCACHE_NAT0_KEY_RESULT51                         0x802300fc
#define NATCACHE_NAT0_KEY_RESULT52                         0x80230100
#define NATCACHE_NAT0_KEY_RESULT53                         0x80230104
#define NATCACHE_NAT0_KEY_RESULT54                         0x80230108
#define NATCACHE_NAT0_KEY_RESULT55                         0x8023010c
#define NATCACHE_NAT0_KEY_RESULT56                         0x80230110
#define NATCACHE_NAT0_KEY_RESULT57                         0x80230114
#define NATCACHE_NAT0_KEY_RESULT58                         0x80230118
#define NATCACHE_NAT0_KEY_RESULT59                         0x8023011c
#define NATCACHE_NAT0_KEY_RESULT60                         0x80230120
#define NATCACHE_NAT0_KEY_RESULT61                         0x80230124
#define NATCACHE_NAT1_COMMAND_STATUS                       0x80230130
#define NATCACHE_NAT1_HASH                                 0x80230134
#define NATCACHE_NAT1_HIT_COUNT                            0x80230138
#define NATCACHE_NAT1_BYTE_COUNT                           0x8023013c
#define NATCACHE_NAT1_PKT_LEN                              0x80230140
#define NATCACHE_NAT1_KEY_RESULT0                          0x80230150
#define NATCACHE_NAT1_KEY_RESULT1                          0x80230154
#define NATCACHE_NAT1_KEY_RESULT2                          0x80230158
#define NATCACHE_NAT1_KEY_RESULT3                          0x8023015c
#define NATCACHE_NAT1_KEY_RESULT4                          0x80230160
#define NATCACHE_NAT1_KEY_RESULT5                          0x80230164
#define NATCACHE_NAT1_KEY_RESULT6                          0x80230168
#define NATCACHE_NAT1_KEY_RESULT7                          0x8023016c
#define NATCACHE_NAT1_KEY_RESULT8                          0x80230170
#define NATCACHE_NAT1_KEY_RESULT9                          0x80230174
#define NATCACHE_NAT1_KEY_RESULT10                         0x80230178
#define NATCACHE_NAT1_KEY_RESULT11                         0x8023017c
#define NATCACHE_NAT1_KEY_RESULT12                         0x80230180
#define NATCACHE_NAT1_KEY_RESULT13                         0x80230184
#define NATCACHE_NAT1_KEY_RESULT14                         0x80230188
#define NATCACHE_NAT1_KEY_RESULT15                         0x8023018c
#define NATCACHE_NAT1_KEY_RESULT16                         0x80230190
#define NATCACHE_NAT1_KEY_RESULT17                         0x80230194
#define NATCACHE_NAT1_KEY_RESULT18                         0x80230198
#define NATCACHE_NAT1_KEY_RESULT19                         0x8023019c
#define NATCACHE_NAT1_KEY_RESULT20                         0x802301a0
#define NATCACHE_NAT1_KEY_RESULT21                         0x802301a4
#define NATCACHE_NAT1_KEY_RESULT22                         0x802301a8
#define NATCACHE_NAT1_KEY_RESULT23                         0x802301ac
#define NATCACHE_NAT1_KEY_RESULT24                         0x802301b0
#define NATCACHE_NAT1_KEY_RESULT25                         0x802301b4
#define NATCACHE_NAT1_KEY_RESULT26                         0x802301b8
#define NATCACHE_NAT1_KEY_RESULT27                         0x802301bc
#define NATCACHE_NAT1_KEY_RESULT28                         0x802301c0
#define NATCACHE_NAT1_KEY_RESULT29                         0x802301c4
#define NATCACHE_NAT1_KEY_RESULT30                         0x802301c8
#define NATCACHE_NAT1_KEY_RESULT31                         0x802301cc
#define NATCACHE_NAT1_KEY_RESULT32                         0x802301d0
#define NATCACHE_NAT1_KEY_RESULT33                         0x802301d4
#define NATCACHE_NAT1_KEY_RESULT34                         0x802301d8
#define NATCACHE_NAT1_KEY_RESULT35                         0x802301dc
#define NATCACHE_NAT1_KEY_RESULT36                         0x802301e0
#define NATCACHE_NAT1_KEY_RESULT37                         0x802301e4
#define NATCACHE_NAT1_KEY_RESULT38                         0x802301e8
#define NATCACHE_NAT1_KEY_RESULT39                         0x802301ec
#define NATCACHE_NAT1_KEY_RESULT40                         0x802301f0
#define NATCACHE_NAT1_KEY_RESULT41                         0x802301f4
#define NATCACHE_NAT1_KEY_RESULT42                         0x802301f8
#define NATCACHE_NAT1_KEY_RESULT43                         0x802301fc
#define NATCACHE_NAT1_KEY_RESULT44                         0x80230200
#define NATCACHE_NAT1_KEY_RESULT45                         0x80230204
#define NATCACHE_NAT1_KEY_RESULT46                         0x80230208
#define NATCACHE_NAT1_KEY_RESULT47                         0x8023020c
#define NATCACHE_NAT1_KEY_RESULT48                         0x80230210
#define NATCACHE_NAT1_KEY_RESULT49                         0x80230214
#define NATCACHE_NAT1_KEY_RESULT50                         0x80230218
#define NATCACHE_NAT1_KEY_RESULT51                         0x8023021c
#define NATCACHE_NAT1_KEY_RESULT52                         0x80230220
#define NATCACHE_NAT1_KEY_RESULT53                         0x80230224
#define NATCACHE_NAT1_KEY_RESULT54                         0x80230228
#define NATCACHE_NAT1_KEY_RESULT55                         0x8023022c
#define NATCACHE_NAT1_KEY_RESULT56                         0x80230230
#define NATCACHE_NAT1_KEY_RESULT57                         0x80230234
#define NATCACHE_NAT1_KEY_RESULT58                         0x80230238
#define NATCACHE_NAT1_KEY_RESULT59                         0x8023023c
#define NATCACHE_NAT1_KEY_RESULT60                         0x80230240
#define NATCACHE_NAT1_KEY_RESULT61                         0x80230244
#define NATCACHE_NAT2_COMMAND_STATUS                       0x80230250
#define NATCACHE_NAT2_HASH                                 0x80230254
#define NATCACHE_NAT2_HIT_COUNT                            0x80230258
#define NATCACHE_NAT2_BYTE_COUNT                           0x8023025c
#define NATCACHE_NAT2_PKT_LEN                              0x80230260
#define NATCACHE_NAT2_KEY_RESULT0                          0x80230270
#define NATCACHE_NAT2_KEY_RESULT1                          0x80230274
#define NATCACHE_NAT2_KEY_RESULT2                          0x80230278
#define NATCACHE_NAT2_KEY_RESULT3                          0x8023027c
#define NATCACHE_NAT2_KEY_RESULT4                          0x80230280
#define NATCACHE_NAT2_KEY_RESULT5                          0x80230284
#define NATCACHE_NAT2_KEY_RESULT6                          0x80230288
#define NATCACHE_NAT2_KEY_RESULT7                          0x8023028c
#define NATCACHE_NAT2_KEY_RESULT8                          0x80230290
#define NATCACHE_NAT2_KEY_RESULT9                          0x80230294
#define NATCACHE_NAT2_KEY_RESULT10                         0x80230298
#define NATCACHE_NAT2_KEY_RESULT11                         0x8023029c
#define NATCACHE_NAT2_KEY_RESULT12                         0x802302a0
#define NATCACHE_NAT2_KEY_RESULT13                         0x802302a4
#define NATCACHE_NAT2_KEY_RESULT14                         0x802302a8
#define NATCACHE_NAT2_KEY_RESULT15                         0x802302ac
#define NATCACHE_NAT2_KEY_RESULT16                         0x802302b0
#define NATCACHE_NAT2_KEY_RESULT17                         0x802302b4
#define NATCACHE_NAT2_KEY_RESULT18                         0x802302b8
#define NATCACHE_NAT2_KEY_RESULT19                         0x802302bc
#define NATCACHE_NAT2_KEY_RESULT20                         0x802302c0
#define NATCACHE_NAT2_KEY_RESULT21                         0x802302c4
#define NATCACHE_NAT2_KEY_RESULT22                         0x802302c8
#define NATCACHE_NAT2_KEY_RESULT23                         0x802302cc
#define NATCACHE_NAT2_KEY_RESULT24                         0x802302d0
#define NATCACHE_NAT2_KEY_RESULT25                         0x802302d4
#define NATCACHE_NAT2_KEY_RESULT26                         0x802302d8
#define NATCACHE_NAT2_KEY_RESULT27                         0x802302dc
#define NATCACHE_NAT2_KEY_RESULT28                         0x802302e0
#define NATCACHE_NAT2_KEY_RESULT29                         0x802302e4
#define NATCACHE_NAT2_KEY_RESULT30                         0x802302e8
#define NATCACHE_NAT2_KEY_RESULT31                         0x802302ec
#define NATCACHE_NAT2_KEY_RESULT32                         0x802302f0
#define NATCACHE_NAT2_KEY_RESULT33                         0x802302f4
#define NATCACHE_NAT2_KEY_RESULT34                         0x802302f8
#define NATCACHE_NAT2_KEY_RESULT35                         0x802302fc
#define NATCACHE_NAT2_KEY_RESULT36                         0x80230300
#define NATCACHE_NAT2_KEY_RESULT37                         0x80230304
#define NATCACHE_NAT2_KEY_RESULT38                         0x80230308
#define NATCACHE_NAT2_KEY_RESULT39                         0x8023030c
#define NATCACHE_NAT2_KEY_RESULT40                         0x80230310
#define NATCACHE_NAT2_KEY_RESULT41                         0x80230314
#define NATCACHE_NAT2_KEY_RESULT42                         0x80230318
#define NATCACHE_NAT2_KEY_RESULT43                         0x8023031c
#define NATCACHE_NAT2_KEY_RESULT44                         0x80230320
#define NATCACHE_NAT2_KEY_RESULT45                         0x80230324
#define NATCACHE_NAT2_KEY_RESULT46                         0x80230328
#define NATCACHE_NAT2_KEY_RESULT47                         0x8023032c
#define NATCACHE_NAT2_KEY_RESULT48                         0x80230330
#define NATCACHE_NAT2_KEY_RESULT49                         0x80230334
#define NATCACHE_NAT2_KEY_RESULT50                         0x80230338
#define NATCACHE_NAT2_KEY_RESULT51                         0x8023033c
#define NATCACHE_NAT2_KEY_RESULT52                         0x80230340
#define NATCACHE_NAT2_KEY_RESULT53                         0x80230344
#define NATCACHE_NAT2_KEY_RESULT54                         0x80230348
#define NATCACHE_NAT2_KEY_RESULT55                         0x8023034c
#define NATCACHE_NAT2_KEY_RESULT56                         0x80230350
#define NATCACHE_NAT2_KEY_RESULT57                         0x80230354
#define NATCACHE_NAT2_KEY_RESULT58                         0x80230358
#define NATCACHE_NAT2_KEY_RESULT59                         0x8023035c
#define NATCACHE_NAT2_KEY_RESULT60                         0x80230360
#define NATCACHE_NAT2_KEY_RESULT61                         0x80230364
#define NATCACHE_NAT3_COMMAND_STATUS                       0x80230370
#define NATCACHE_NAT3_HASH                                 0x80230374
#define NATCACHE_NAT3_HIT_COUNT                            0x80230378
#define NATCACHE_NAT3_BYTE_COUNT                           0x8023037c
#define NATCACHE_NAT3_PKT_LEN                              0x80230380
#define NATCACHE_NAT3_KEY_RESULT0                          0x80230390
#define NATCACHE_NAT3_KEY_RESULT1                          0x80230394
#define NATCACHE_NAT3_KEY_RESULT2                          0x80230398
#define NATCACHE_NAT3_KEY_RESULT3                          0x8023039c
#define NATCACHE_NAT3_KEY_RESULT4                          0x802303a0
#define NATCACHE_NAT3_KEY_RESULT5                          0x802303a4
#define NATCACHE_NAT3_KEY_RESULT6                          0x802303a8
#define NATCACHE_NAT3_KEY_RESULT7                          0x802303ac
#define NATCACHE_NAT3_KEY_RESULT8                          0x802303b0
#define NATCACHE_NAT3_KEY_RESULT9                          0x802303b4
#define NATCACHE_NAT3_KEY_RESULT10                         0x802303b8
#define NATCACHE_NAT3_KEY_RESULT11                         0x802303bc
#define NATCACHE_NAT3_KEY_RESULT12                         0x802303c0
#define NATCACHE_NAT3_KEY_RESULT13                         0x802303c4
#define NATCACHE_NAT3_KEY_RESULT14                         0x802303c8
#define NATCACHE_NAT3_KEY_RESULT15                         0x802303cc
#define NATCACHE_NAT3_KEY_RESULT16                         0x802303d0
#define NATCACHE_NAT3_KEY_RESULT17                         0x802303d4
#define NATCACHE_NAT3_KEY_RESULT18                         0x802303d8
#define NATCACHE_NAT3_KEY_RESULT19                         0x802303dc
#define NATCACHE_NAT3_KEY_RESULT20                         0x802303e0
#define NATCACHE_NAT3_KEY_RESULT21                         0x802303e4
#define NATCACHE_NAT3_KEY_RESULT22                         0x802303e8
#define NATCACHE_NAT3_KEY_RESULT23                         0x802303ec
#define NATCACHE_NAT3_KEY_RESULT24                         0x802303f0
#define NATCACHE_NAT3_KEY_RESULT25                         0x802303f4
#define NATCACHE_NAT3_KEY_RESULT26                         0x802303f8
#define NATCACHE_NAT3_KEY_RESULT27                         0x802303fc
#define NATCACHE_NAT3_KEY_RESULT28                         0x80230400
#define NATCACHE_NAT3_KEY_RESULT29                         0x80230404
#define NATCACHE_NAT3_KEY_RESULT30                         0x80230408
#define NATCACHE_NAT3_KEY_RESULT31                         0x8023040c
#define NATCACHE_NAT3_KEY_RESULT32                         0x80230410
#define NATCACHE_NAT3_KEY_RESULT33                         0x80230414
#define NATCACHE_NAT3_KEY_RESULT34                         0x80230418
#define NATCACHE_NAT3_KEY_RESULT35                         0x8023041c
#define NATCACHE_NAT3_KEY_RESULT36                         0x80230420
#define NATCACHE_NAT3_KEY_RESULT37                         0x80230424
#define NATCACHE_NAT3_KEY_RESULT38                         0x80230428
#define NATCACHE_NAT3_KEY_RESULT39                         0x8023042c
#define NATCACHE_NAT3_KEY_RESULT40                         0x80230430
#define NATCACHE_NAT3_KEY_RESULT41                         0x80230434
#define NATCACHE_NAT3_KEY_RESULT42                         0x80230438
#define NATCACHE_NAT3_KEY_RESULT43                         0x8023043c
#define NATCACHE_NAT3_KEY_RESULT44                         0x80230440
#define NATCACHE_NAT3_KEY_RESULT45                         0x80230444
#define NATCACHE_NAT3_KEY_RESULT46                         0x80230448
#define NATCACHE_NAT3_KEY_RESULT47                         0x8023044c
#define NATCACHE_NAT3_KEY_RESULT48                         0x80230450
#define NATCACHE_NAT3_KEY_RESULT49                         0x80230454
#define NATCACHE_NAT3_KEY_RESULT50                         0x80230458
#define NATCACHE_NAT3_KEY_RESULT51                         0x8023045c
#define NATCACHE_NAT3_KEY_RESULT52                         0x80230460
#define NATCACHE_NAT3_KEY_RESULT53                         0x80230464
#define NATCACHE_NAT3_KEY_RESULT54                         0x80230468
#define NATCACHE_NAT3_KEY_RESULT55                         0x8023046c
#define NATCACHE_NAT3_KEY_RESULT56                         0x80230470
#define NATCACHE_NAT3_KEY_RESULT57                         0x80230474
#define NATCACHE_NAT3_KEY_RESULT58                         0x80230478
#define NATCACHE_NAT3_KEY_RESULT59                         0x8023047c
#define NATCACHE_NAT3_KEY_RESULT60                         0x80230480
#define NATCACHE_NAT3_KEY_RESULT61                         0x80230484
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_LOWER      0x80230490
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_UPPER      0x80230494
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_LOWER   0x80230498
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_UPPER   0x8023049c
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_LOWER      0x802304a0
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_UPPER      0x802304a4
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304a8
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304ac
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_LOWER      0x802304b0
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_UPPER      0x802304b4
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304b8
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304bc
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_LOWER      0x802304c0
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_UPPER      0x802304c4
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304c8
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304cc
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_LOWER      0x802304d0
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_UPPER      0x802304d4
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304d8
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304dc
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_LOWER      0x802304e0
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_UPPER      0x802304e4
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304e8
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304ec
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_LOWER      0x802304f0
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_UPPER      0x802304f4
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_LOWER   0x802304f8
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_UPPER   0x802304fc
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_LOWER      0x80230500
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_UPPER      0x80230504
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_LOWER   0x80230508
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_UPPER   0x8023050c
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_0               0x80230510
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_1               0x80230514
#define NATCACHE_NATC_CACHE_HIT_COUNT                      0x80230518
#define NATCACHE_NATC_CACHE_MISS_COUNT                     0x8023051c
#define NATCACHE_NATC_DDR_REQUEST_COUNT                    0x80230520
#define NATCACHE_NATC_DDR_EVICT_COUNT                      0x80230524
#define NATCACHE_NATC_DDR_BLOCK_COUNT                      0x80230528
#define NATCACHE_NATC_DDR_SIZE                             0x8023052c
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_0                0x80230530
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_1                0x80230534
#define NATCACHE_NATC_TOTAL_LEN                            0x80230538
#define NATCACHE_NATC_SM_STATUS                            0x8023053c
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_0            0x80230540
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_1            0x80230544
#define NATCACHE_NATC_TBL0_KEY_MASK0                       0x80230550
#define NATCACHE_NATC_TBL0_KEY_MASK1                       0x80230554
#define NATCACHE_NATC_TBL0_KEY_MASK2                       0x80230558
#define NATCACHE_NATC_TBL0_KEY_MASK3                       0x8023055c
#define NATCACHE_NATC_TBL0_KEY_MASK4                       0x80230560
#define NATCACHE_NATC_TBL0_KEY_MASK5                       0x80230564
#define NATCACHE_NATC_TBL0_KEY_MASK6                       0x80230568
#define NATCACHE_NATC_TBL0_KEY_MASK7                       0x8023056c
#define NATCACHE_NATC_TBL1_KEY_MASK0                       0x80230570
#define NATCACHE_NATC_TBL1_KEY_MASK1                       0x80230574
#define NATCACHE_NATC_TBL1_KEY_MASK2                       0x80230578
#define NATCACHE_NATC_TBL1_KEY_MASK3                       0x8023057c
#define NATCACHE_NATC_TBL1_KEY_MASK4                       0x80230580
#define NATCACHE_NATC_TBL1_KEY_MASK5                       0x80230584
#define NATCACHE_NATC_TBL1_KEY_MASK6                       0x80230588
#define NATCACHE_NATC_TBL1_KEY_MASK7                       0x8023058c
#define NATCACHE_NATC_TBL2_KEY_MASK0                       0x80230590
#define NATCACHE_NATC_TBL2_KEY_MASK1                       0x80230594
#define NATCACHE_NATC_TBL2_KEY_MASK2                       0x80230598
#define NATCACHE_NATC_TBL2_KEY_MASK3                       0x8023059c
#define NATCACHE_NATC_TBL2_KEY_MASK4                       0x802305a0
#define NATCACHE_NATC_TBL2_KEY_MASK5                       0x802305a4
#define NATCACHE_NATC_TBL2_KEY_MASK6                       0x802305a8
#define NATCACHE_NATC_TBL2_KEY_MASK7                       0x802305ac
#define NATCACHE_NATC_TBL3_KEY_MASK0                       0x802305b0
#define NATCACHE_NATC_TBL3_KEY_MASK1                       0x802305b4
#define NATCACHE_NATC_TBL3_KEY_MASK2                       0x802305b8
#define NATCACHE_NATC_TBL3_KEY_MASK3                       0x802305bc
#define NATCACHE_NATC_TBL3_KEY_MASK4                       0x802305c0
#define NATCACHE_NATC_TBL3_KEY_MASK5                       0x802305c4
#define NATCACHE_NATC_TBL3_KEY_MASK6                       0x802305c8
#define NATCACHE_NATC_TBL3_KEY_MASK7                       0x802305cc
#define NATCACHE_NATC_TBL4_KEY_MASK0                       0x802305d0
#define NATCACHE_NATC_TBL4_KEY_MASK1                       0x802305d4
#define NATCACHE_NATC_TBL4_KEY_MASK2                       0x802305d8
#define NATCACHE_NATC_TBL4_KEY_MASK3                       0x802305dc
#define NATCACHE_NATC_TBL4_KEY_MASK4                       0x802305e0
#define NATCACHE_NATC_TBL4_KEY_MASK5                       0x802305e4
#define NATCACHE_NATC_TBL4_KEY_MASK6                       0x802305e8
#define NATCACHE_NATC_TBL4_KEY_MASK7                       0x802305ec
#define NATCACHE_NATC_TBL5_KEY_MASK0                       0x802305f0
#define NATCACHE_NATC_TBL5_KEY_MASK1                       0x802305f4
#define NATCACHE_NATC_TBL5_KEY_MASK2                       0x802305f8
#define NATCACHE_NATC_TBL5_KEY_MASK3                       0x802305fc
#define NATCACHE_NATC_TBL5_KEY_MASK4                       0x80230600
#define NATCACHE_NATC_TBL5_KEY_MASK5                       0x80230604
#define NATCACHE_NATC_TBL5_KEY_MASK6                       0x80230608
#define NATCACHE_NATC_TBL5_KEY_MASK7                       0x8023060c
#define NATCACHE_NATC_TBL6_KEY_MASK0                       0x80230610
#define NATCACHE_NATC_TBL6_KEY_MASK1                       0x80230614
#define NATCACHE_NATC_TBL6_KEY_MASK2                       0x80230618
#define NATCACHE_NATC_TBL6_KEY_MASK3                       0x8023061c
#define NATCACHE_NATC_TBL6_KEY_MASK4                       0x80230620
#define NATCACHE_NATC_TBL6_KEY_MASK5                       0x80230624
#define NATCACHE_NATC_TBL6_KEY_MASK6                       0x80230628
#define NATCACHE_NATC_TBL6_KEY_MASK7                       0x8023062c
#define NATCACHE_NATC_TBL7_KEY_MASK0                       0x80230630
#define NATCACHE_NATC_TBL7_KEY_MASK1                       0x80230634
#define NATCACHE_NATC_TBL7_KEY_MASK2                       0x80230638
#define NATCACHE_NATC_TBL7_KEY_MASK3                       0x8023063c
#define NATCACHE_NATC_TBL7_KEY_MASK4                       0x80230640
#define NATCACHE_NATC_TBL7_KEY_MASK5                       0x80230644
#define NATCACHE_NATC_TBL7_KEY_MASK6                       0x80230648
#define NATCACHE_NATC_TBL7_KEY_MASK7                       0x8023064c
#define NATCACHE_NATC_DDR_HASH_MODE                        0x80230650
#define NATCACHE_NATC_FLOW_CNTR_CNTL                       0x80230654
#define NATCACHE_NATC_CNTRL                                0x80230658
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_KEY_OFFSET         0x8023065c
#define NATCACHE_NATC_WORK_QUEUE_DATA_LENGTH_OFFSET        0x80230660
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_RESULT_OFFSET      0x80230664
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0 0x80230670
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1 0x80230674
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2 0x80230678
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3 0x8023067c
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4 0x80230680
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5 0x80230684
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6 0x80230688
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7 0x8023068c
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS0              0x80230694
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS1              0x80230698
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER0        0x8023069c
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER1        0x802306a0
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0 0x802306a4
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1 0x802306a8

#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG              0x80230700
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG0             0x80230710
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG1             0x80230714
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG2             0x80230718
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG3             0x8023071c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG4             0x80230720
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG5             0x80230724
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG6             0x80230728
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG7             0x8023072c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG8             0x80230730
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG9             0x80230734
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG10            0x80230738
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG11            0x8023073c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG12            0x80230740
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG13            0x80230744
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG14            0x80230748
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG15            0x8023074c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG16            0x80230750
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG17            0x80230754
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG18            0x80230758
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG19            0x8023075c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG20            0x80230760
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG21            0x80230764
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG22            0x80230768
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG23            0x8023076c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG24            0x80230770
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG25            0x80230774
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG26            0x80230778
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG27            0x8023077c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG28            0x80230780
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG29            0x80230784
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG30            0x80230788
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG31            0x8023078c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG32            0x80230790
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG33            0x80230794
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG34            0x80230798
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG35            0x8023079c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG36            0x802307a0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG37            0x802307a4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG38            0x802307a8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG39            0x802307ac
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG40            0x802307b0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG41            0x802307b4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG42            0x802307b8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG43            0x802307bc
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG44            0x802307c0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG45            0x802307c4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG46            0x802307c8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG47            0x802307cc
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG48            0x802307d0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG49            0x802307d4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG50            0x802307d8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG51            0x802307dc
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG52            0x802307e0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG53            0x802307e4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG54            0x802307e8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG55            0x802307ec
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG56            0x802307f0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG57            0x802307f4
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG58            0x802307f8
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG59            0x802307fc
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG60            0x80230800
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG61            0x80230804
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG62            0x80230808
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG63            0x8023080c
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG64            0x80230810
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG    0x80230820
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG0   0x80230824
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG1   0x80230828

#define CM7_0_ITCM_MEM_START                               0x80300000
#define CM7_0_ITCM_MEM_END                                 0x80307ffc

#define CM7_0_DTCM_MEM_START                               0x80310000
#define CM7_0_DTCM_MEM_END                                 0x80317ffc

#define CM7_1_ITCM_MEM_START                               0x80320000
#define CM7_1_ITCM_MEM_END                                 0x80327ffc

#define CM7_1_DTCM_MEM_START                               0x80330000
#define CM7_1_DTCM_MEM_END                                 0x80337ffc

#define ACM7C_CONTROL_0                                    0x80340000
#define ACM7C_CONTROL_1                                    0x80340004
#define ACM7C_VECTOR_TABLE_OFFSET_0                        0x80340008
#define ACM7C_VECTOR_TABLE_OFFSET_1                        0x8034000c
#define ACM7C_CONTROL_SELECT                               0x80340010
#define ACM7C_R2AHBS_BRIDGE_CONTROL                        0x80340014
#define ACM7C_R2AHBS_BRIDGE_STATUS                         0x80340018
#define ACM7C_MPMB_CTRL                                    0x8034001c
#define ACM7C_DAP_CTRL0                                    0x80340020
#define ACM7C_DAP_CTRL1                                    0x80340024

#define DBG_TOP_AHBP_DBG_CFG                               0x80351000
#define DBG_TOP_DTCM_DBG_CFG                               0x80351004
#define DBG_TOP_DBG_CTRL                                   0x80351008
#define DBG_TOP_DBG_STATUS                                 0x8035100c
#define DBG_TOP_DTCMA_CAP_CFG                              0x80351010

#define FUNNELM_Ctrl_Reg                                   0x80352000
#define FUNNELM_Priority_Ctrl_Reg                          0x80352004
#define FUNNELM_ITATBDATA0                                 0x80352eec
#define FUNNELM_ITATBCTR2                                  0x80352ef0
#define FUNNELM_ITATBCTR1                                  0x80352ef4
#define FUNNELM_ITATBCTR0                                  0x80352ef8
#define FUNNELM_ITCTRL                                     0x80352f00
#define FUNNELM_CLAIMSET                                   0x80352fa0
#define FUNNELM_CLAIMCLR                                   0x80352fa4
#define FUNNELM_LOCKACCESS                                 0x80352fb0
#define FUNNELM_LOCKSTATUS                                 0x80352fb4
#define FUNNELM_AUTHSTATUS                                 0x80352fb8
#define FUNNELM_DEVID                                      0x80352fc8
#define FUNNELM_DEVTYPE                                    0x80352fcc
#define FUNNELM_PIDR4                                      0x80352fd0
#define FUNNELM_PERIPHID5                                  0x80352fd4
#define FUNNELM_PERIPHID6                                  0x80352fd8
#define FUNNELM_PERIPHID7                                  0x80352fdc
#define FUNNELM_PIDR0                                      0x80352fe0
#define FUNNELM_PIDR1                                      0x80352fe4
#define FUNNELM_PIDR2                                      0x80352fe8
#define FUNNELM_PIDR3                                      0x80352fec
#define FUNNELM_CID0                                       0x80352ff0
#define FUNNELM_CID1                                       0x80352ff4
#define FUNNELM_CID2                                       0x80352ff8
#define FUNNELM_CID3                                       0x80352ffc

#define ETB_RDP                                            0x80353004
#define ETB_STS                                            0x8035300c
#define ETB_RRD                                            0x80353010
#define ETB_RRP                                            0x80353014
#define ETB_RWP                                            0x80353018
#define ETB_TRG                                            0x8035301c
#define ETB_CTL                                            0x80353020
#define ETB_RWD                                            0x80353024
#define ETB_FFSR                                           0x80353300
#define ETB_FFCR                                           0x80353304
#define ETB_ITMISCOP0                                      0x80353ee0
#define ETB_ITTRFLINACK                                    0x80353ee4
#define ETB_ITTRFLIN                                       0x80353ee8
#define ETB_ITATBDATA0                                     0x80353eec
#define ETB_ITATBCTR2                                      0x80353ef0
#define ETB_ITATBCTR1                                      0x80353ef4
#define ETB_ITATBCTR0                                      0x80353ef8
#define ETB_ITCTRL                                         0x80353f00
#define ETB_CLAIMSET                                       0x80353fa0
#define ETB_CLAIMCLR                                       0x80353fa4
#define ETB_LAR                                            0x80353fb0
#define ETB_LSR                                            0x80353fb4
#define ETB_AUTHSTATUS                                     0x80353fb8
#define ETB_DEVID                                          0x80353fc8
#define ETB_DEVTYPE                                        0x80353fcc
#define ETB_PERIPHID4                                      0x80353fd0
#define ETB_PERIPHID5                                      0x80353fd4
#define ETB_PERIPHID6                                      0x80353fd8
#define ETB_PERIPHID7                                      0x80353fdc
#define ETB_PERIPHID0                                      0x80353fe0
#define ETB_PERIPHID1                                      0x80353fe4
#define ETB_PERIPHID2                                      0x80353fe8
#define ETB_PERIPHID3                                      0x80353fec
#define ETB_COMPID0                                        0x80353ff0
#define ETB_COMPID1                                        0x80353ff4
#define ETB_COMPID2                                        0x80353ff8
#define ETB_COMPID3                                        0x80353ffc

#define TSGEN_CNTCR                                        0x80354000
#define TSGEN_CNTSR                                        0x80354004
#define TSGEN_CNTCVL                                       0x80354008
#define TSGEN_CNTCVU                                       0x8035400c
#define TSGEN_CNTFID0                                      0x80354020
#define TSGEN_PIDR4                                        0x80354fd0
#define TSGEN_PIDR5                                        0x80354fd4
#define TSGEN_PIDR6                                        0x80354fd8
#define TSGEN_PIDR7                                        0x80354fdc
#define TSGEN_PIDR0                                        0x80354fe0
#define TSGEN_PIDR1                                        0x80354fe4
#define TSGEN_PIDR2                                        0x80354fe8
#define TSGEN_PIDR3                                        0x80354fec
#define TSGEN_CIDR0                                        0x80354ff0
#define TSGEN_CIDR1                                        0x80354ff4
#define TSGEN_CIDR2                                        0x80354ff8
#define TSGEN_CIDR3                                        0x80354ffc

#define CM7_0_AHBP_CAP_HTMGLBCTRL                          0x80355000
#define CM7_0_AHBP_CAP_HTMSTATUS                           0x80355004
#define CM7_0_AHBP_CAP_HTMCFGCODE                          0x80355008
#define CM7_0_AHBP_CAP_HTMCFGCODE2                         0x8035500c
#define CM7_0_AHBP_CAP_HTMCONTROL                          0x80355010
#define CM7_0_AHBP_CAP_HTMTRIGEVT                          0x80355014
#define CM7_0_AHBP_CAP_HTMTRIGSTATE                        0x80355018
#define CM7_0_AHBP_CAP_HTMAUXSEL                           0x8035501c
#define CM7_0_AHBP_CAP_HTMSYNCRELOAD                       0x80355020
#define CM7_0_AHBP_CAP_HTMSYNCCOUNT                        0x80355024
#define CM7_0_AHBP_CAP_HTMFIFOLEVEL                        0x80355028
#define CM7_0_AHBP_CAP_HTMSTARTSTOP                        0x80355030
#define CM7_0_AHBP_CAP_HTMCTRL2                            0x80355034
#define CM7_0_AHBP_CAP_HTMTRACEEVT                         0x80355038
#define CM7_0_AHBP_CAP_HTMTRACECTRL                        0x8035503c
#define CM7_0_AHBP_CAP_HTMSSTATE                           0x80355040
#define CM7_0_AHBP_CAP_HTMASICCTRL                         0x80355044
#define CM7_0_AHBP_CAP_HTMBUSSELECT                        0x80355048
#define CM7_0_AHBP_CAP_HTMADDR_0                           0x80355080
#define CM7_0_AHBP_CAP_HTMADDR_1                           0x80355084
#define CM7_0_AHBP_CAP_HTMADDR_2                           0x80355088
#define CM7_0_AHBP_CAP_HTMADDR_3                           0x8035508c
#define CM7_0_AHBP_CAP_HTMADDR_4                           0x80355090
#define CM7_0_AHBP_CAP_HTMADDR_5                           0x80355094
#define CM7_0_AHBP_CAP_HTMADDR_6                           0x80355098
#define CM7_0_AHBP_CAP_HTMADDR_7                           0x8035509c
#define CM7_0_AHBP_CAP_HTMADDR_8                           0x803550a0
#define CM7_0_AHBP_CAP_HTMADDR_9                           0x803550a4
#define CM7_0_AHBP_CAP_HTMADDR_10                          0x803550a8
#define CM7_0_AHBP_CAP_HTMADDR_11                          0x803550ac
#define CM7_0_AHBP_CAP_HTMADDR_12                          0x803550b0
#define CM7_0_AHBP_CAP_HTMADDR_13                          0x803550b4
#define CM7_0_AHBP_CAP_HTMADDR_14                          0x803550b8
#define CM7_0_AHBP_CAP_HTMADDR_15                          0x803550bc
#define CM7_0_AHBP_CAP_HTMADDRTYPE_0                       0x803550c0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_1                       0x803550c4
#define CM7_0_AHBP_CAP_HTMADDRTYPE_2                       0x803550c8
#define CM7_0_AHBP_CAP_HTMADDRTYPE_3                       0x803550cc
#define CM7_0_AHBP_CAP_HTMADDRTYPE_4                       0x803550d0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_5                       0x803550d4
#define CM7_0_AHBP_CAP_HTMADDRTYPE_6                       0x803550d8
#define CM7_0_AHBP_CAP_HTMADDRTYPE_7                       0x803550dc
#define CM7_0_AHBP_CAP_HTMADDRTYPE_8                       0x803550e0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_9                       0x803550e4
#define CM7_0_AHBP_CAP_HTMADDRTYPE_10                      0x803550e8
#define CM7_0_AHBP_CAP_HTMADDRTYPE_11                      0x803550ec
#define CM7_0_AHBP_CAP_HTMADDRTYPE_12                      0x803550f0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_13                      0x803550f4
#define CM7_0_AHBP_CAP_HTMADDRTYPE_14                      0x803550f8
#define CM7_0_AHBP_CAP_HTMADDRTYPE_15                      0x803550fc
#define CM7_0_AHBP_CAP_HTMHCTRLSEL_0                       0x80355200
#define CM7_0_AHBP_CAP_HTMHCTRLVAL_0                       0x80355220
#define CM7_0_AHBP_CAP_HTMHCTRLMASK_0                      0x80355240
#define CM7_0_AHBP_CAP_HTMCNTRELDVAL_0                     0x80355280
#define CM7_0_AHBP_CAP_HTMCNTENABLE_0                      0x80355290
#define CM7_0_AHBP_CAP_HTMCNTRELDEVT_0                     0x803552a0
#define CM7_0_AHBP_CAP_HTMCNTVALUE_0                       0x803552b0
#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_0                      0x80355380
#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_1                      0x80355384
#define CM7_0_AHBP_CAP_HTMATIDOUT                          0x80355400
#define CM7_0_AHBP_CAP_HTMCLAIMTAGSET                      0x80355fa0
#define CM7_0_AHBP_CAP_HTMCLAIMTAGCLR                      0x80355fa4
#define CM7_0_AHBP_CAP_HTMLOCK_ACCESS                      0x80355fb0
#define CM7_0_AHBP_CAP_HTMLOCK_STATUS                      0x80355fb4
#define CM7_0_AHBP_CAP_HTMAUTHSTATUS                       0x80355fb8
#define CM7_0_AHBP_CAP_HTMDEVID                            0x80355fc8
#define CM7_0_AHBP_CAP_HTMDEV_TYPE                         0x80355fcc
#define CM7_0_AHBP_CAP_HTMPERIPHID4                        0x80355fd0
#define CM7_0_AHBP_CAP_HTMPERIPHID0                        0x80355fe0
#define CM7_0_AHBP_CAP_HTMPERIPHID1                        0x80355fe4
#define CM7_0_AHBP_CAP_HTMPERIPHID2                        0x80355fe8
#define CM7_0_AHBP_CAP_HTMPERIPHID3                        0x80355fec
#define CM7_0_AHBP_CAP_HTMCOMPONID0                        0x80355ff0
#define CM7_0_AHBP_CAP_HTMCOMPONID1                        0x80355ff4
#define CM7_0_AHBP_CAP_HTMCOMPONID2                        0x80355ff8
#define CM7_0_AHBP_CAP_HTMCOMPONID3                        0x80355ffc

#define CM7_1_AHBP_CAP_HTMGLBCTRL                          0x80356000
#define CM7_1_AHBP_CAP_HTMSTATUS                           0x80356004
#define CM7_1_AHBP_CAP_HTMCFGCODE                          0x80356008
#define CM7_1_AHBP_CAP_HTMCFGCODE2                         0x8035600c
#define CM7_1_AHBP_CAP_HTMCONTROL                          0x80356010
#define CM7_1_AHBP_CAP_HTMTRIGEVT                          0x80356014
#define CM7_1_AHBP_CAP_HTMTRIGSTATE                        0x80356018
#define CM7_1_AHBP_CAP_HTMAUXSEL                           0x8035601c
#define CM7_1_AHBP_CAP_HTMSYNCRELOAD                       0x80356020
#define CM7_1_AHBP_CAP_HTMSYNCCOUNT                        0x80356024
#define CM7_1_AHBP_CAP_HTMFIFOLEVEL                        0x80356028
#define CM7_1_AHBP_CAP_HTMSTARTSTOP                        0x80356030
#define CM7_1_AHBP_CAP_HTMCTRL2                            0x80356034
#define CM7_1_AHBP_CAP_HTMTRACEEVT                         0x80356038
#define CM7_1_AHBP_CAP_HTMTRACECTRL                        0x8035603c
#define CM7_1_AHBP_CAP_HTMSSTATE                           0x80356040
#define CM7_1_AHBP_CAP_HTMASICCTRL                         0x80356044
#define CM7_1_AHBP_CAP_HTMBUSSELECT                        0x80356048
#define CM7_1_AHBP_CAP_HTMADDR_0                           0x80356080
#define CM7_1_AHBP_CAP_HTMADDR_1                           0x80356084
#define CM7_1_AHBP_CAP_HTMADDR_2                           0x80356088
#define CM7_1_AHBP_CAP_HTMADDR_3                           0x8035608c
#define CM7_1_AHBP_CAP_HTMADDR_4                           0x80356090
#define CM7_1_AHBP_CAP_HTMADDR_5                           0x80356094
#define CM7_1_AHBP_CAP_HTMADDR_6                           0x80356098
#define CM7_1_AHBP_CAP_HTMADDR_7                           0x8035609c
#define CM7_1_AHBP_CAP_HTMADDR_8                           0x803560a0
#define CM7_1_AHBP_CAP_HTMADDR_9                           0x803560a4
#define CM7_1_AHBP_CAP_HTMADDR_10                          0x803560a8
#define CM7_1_AHBP_CAP_HTMADDR_11                          0x803560ac
#define CM7_1_AHBP_CAP_HTMADDR_12                          0x803560b0
#define CM7_1_AHBP_CAP_HTMADDR_13                          0x803560b4
#define CM7_1_AHBP_CAP_HTMADDR_14                          0x803560b8
#define CM7_1_AHBP_CAP_HTMADDR_15                          0x803560bc
#define CM7_1_AHBP_CAP_HTMADDRTYPE_0                       0x803560c0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_1                       0x803560c4
#define CM7_1_AHBP_CAP_HTMADDRTYPE_2                       0x803560c8
#define CM7_1_AHBP_CAP_HTMADDRTYPE_3                       0x803560cc
#define CM7_1_AHBP_CAP_HTMADDRTYPE_4                       0x803560d0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_5                       0x803560d4
#define CM7_1_AHBP_CAP_HTMADDRTYPE_6                       0x803560d8
#define CM7_1_AHBP_CAP_HTMADDRTYPE_7                       0x803560dc
#define CM7_1_AHBP_CAP_HTMADDRTYPE_8                       0x803560e0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_9                       0x803560e4
#define CM7_1_AHBP_CAP_HTMADDRTYPE_10                      0x803560e8
#define CM7_1_AHBP_CAP_HTMADDRTYPE_11                      0x803560ec
#define CM7_1_AHBP_CAP_HTMADDRTYPE_12                      0x803560f0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_13                      0x803560f4
#define CM7_1_AHBP_CAP_HTMADDRTYPE_14                      0x803560f8
#define CM7_1_AHBP_CAP_HTMADDRTYPE_15                      0x803560fc
#define CM7_1_AHBP_CAP_HTMHCTRLSEL_0                       0x80356200
#define CM7_1_AHBP_CAP_HTMHCTRLVAL_0                       0x80356220
#define CM7_1_AHBP_CAP_HTMHCTRLMASK_0                      0x80356240
#define CM7_1_AHBP_CAP_HTMCNTRELDVAL_0                     0x80356280
#define CM7_1_AHBP_CAP_HTMCNTENABLE_0                      0x80356290
#define CM7_1_AHBP_CAP_HTMCNTRELDEVT_0                     0x803562a0
#define CM7_1_AHBP_CAP_HTMCNTVALUE_0                       0x803562b0
#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_0                      0x80356380
#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_1                      0x80356384
#define CM7_1_AHBP_CAP_HTMATIDOUT                          0x80356400
#define CM7_1_AHBP_CAP_HTMCLAIMTAGSET                      0x80356fa0
#define CM7_1_AHBP_CAP_HTMCLAIMTAGCLR                      0x80356fa4
#define CM7_1_AHBP_CAP_HTMLOCK_ACCESS                      0x80356fb0
#define CM7_1_AHBP_CAP_HTMLOCK_STATUS                      0x80356fb4
#define CM7_1_AHBP_CAP_HTMAUTHSTATUS                       0x80356fb8
#define CM7_1_AHBP_CAP_HTMDEVID                            0x80356fc8
#define CM7_1_AHBP_CAP_HTMDEV_TYPE                         0x80356fcc
#define CM7_1_AHBP_CAP_HTMPERIPHID4                        0x80356fd0
#define CM7_1_AHBP_CAP_HTMPERIPHID0                        0x80356fe0
#define CM7_1_AHBP_CAP_HTMPERIPHID1                        0x80356fe4
#define CM7_1_AHBP_CAP_HTMPERIPHID2                        0x80356fe8
#define CM7_1_AHBP_CAP_HTMPERIPHID3                        0x80356fec
#define CM7_1_AHBP_CAP_HTMCOMPONID0                        0x80356ff0
#define CM7_1_AHBP_CAP_HTMCOMPONID1                        0x80356ff4
#define CM7_1_AHBP_CAP_HTMCOMPONID2                        0x80356ff8
#define CM7_1_AHBP_CAP_HTMCOMPONID3                        0x80356ffc

#define CM7_0_DTCM_CAP_HTMGLBCTRL                          0x80357000
#define CM7_0_DTCM_CAP_HTMSTATUS                           0x80357004
#define CM7_0_DTCM_CAP_HTMCFGCODE                          0x80357008
#define CM7_0_DTCM_CAP_HTMCFGCODE2                         0x8035700c
#define CM7_0_DTCM_CAP_HTMCONTROL                          0x80357010
#define CM7_0_DTCM_CAP_HTMTRIGEVT                          0x80357014
#define CM7_0_DTCM_CAP_HTMTRIGSTATE                        0x80357018
#define CM7_0_DTCM_CAP_HTMAUXSEL                           0x8035701c
#define CM7_0_DTCM_CAP_HTMSYNCRELOAD                       0x80357020
#define CM7_0_DTCM_CAP_HTMSYNCCOUNT                        0x80357024
#define CM7_0_DTCM_CAP_HTMFIFOLEVEL                        0x80357028
#define CM7_0_DTCM_CAP_HTMSTARTSTOP                        0x80357030
#define CM7_0_DTCM_CAP_HTMCTRL2                            0x80357034
#define CM7_0_DTCM_CAP_HTMTRACEEVT                         0x80357038
#define CM7_0_DTCM_CAP_HTMTRACECTRL                        0x8035703c
#define CM7_0_DTCM_CAP_HTMSSTATE                           0x80357040
#define CM7_0_DTCM_CAP_HTMASICCTRL                         0x80357044
#define CM7_0_DTCM_CAP_HTMBUSSELECT                        0x80357048
#define CM7_0_DTCM_CAP_HTMADDR_0                           0x80357080
#define CM7_0_DTCM_CAP_HTMADDR_1                           0x80357084
#define CM7_0_DTCM_CAP_HTMADDR_2                           0x80357088
#define CM7_0_DTCM_CAP_HTMADDR_3                           0x8035708c
#define CM7_0_DTCM_CAP_HTMADDR_4                           0x80357090
#define CM7_0_DTCM_CAP_HTMADDR_5                           0x80357094
#define CM7_0_DTCM_CAP_HTMADDR_6                           0x80357098
#define CM7_0_DTCM_CAP_HTMADDR_7                           0x8035709c
#define CM7_0_DTCM_CAP_HTMADDR_8                           0x803570a0
#define CM7_0_DTCM_CAP_HTMADDR_9                           0x803570a4
#define CM7_0_DTCM_CAP_HTMADDR_10                          0x803570a8
#define CM7_0_DTCM_CAP_HTMADDR_11                          0x803570ac
#define CM7_0_DTCM_CAP_HTMADDR_12                          0x803570b0
#define CM7_0_DTCM_CAP_HTMADDR_13                          0x803570b4
#define CM7_0_DTCM_CAP_HTMADDR_14                          0x803570b8
#define CM7_0_DTCM_CAP_HTMADDR_15                          0x803570bc
#define CM7_0_DTCM_CAP_HTMADDRTYPE_0                       0x803570c0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_1                       0x803570c4
#define CM7_0_DTCM_CAP_HTMADDRTYPE_2                       0x803570c8
#define CM7_0_DTCM_CAP_HTMADDRTYPE_3                       0x803570cc
#define CM7_0_DTCM_CAP_HTMADDRTYPE_4                       0x803570d0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_5                       0x803570d4
#define CM7_0_DTCM_CAP_HTMADDRTYPE_6                       0x803570d8
#define CM7_0_DTCM_CAP_HTMADDRTYPE_7                       0x803570dc
#define CM7_0_DTCM_CAP_HTMADDRTYPE_8                       0x803570e0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_9                       0x803570e4
#define CM7_0_DTCM_CAP_HTMADDRTYPE_10                      0x803570e8
#define CM7_0_DTCM_CAP_HTMADDRTYPE_11                      0x803570ec
#define CM7_0_DTCM_CAP_HTMADDRTYPE_12                      0x803570f0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_13                      0x803570f4
#define CM7_0_DTCM_CAP_HTMADDRTYPE_14                      0x803570f8
#define CM7_0_DTCM_CAP_HTMADDRTYPE_15                      0x803570fc
#define CM7_0_DTCM_CAP_HTMHCTRLSEL_0                       0x80357200
#define CM7_0_DTCM_CAP_HTMHCTRLVAL_0                       0x80357220
#define CM7_0_DTCM_CAP_HTMHCTRLMASK_0                      0x80357240
#define CM7_0_DTCM_CAP_HTMCNTRELDVAL_0                     0x80357280
#define CM7_0_DTCM_CAP_HTMCNTENABLE_0                      0x80357290
#define CM7_0_DTCM_CAP_HTMCNTRELDEVT_0                     0x803572a0
#define CM7_0_DTCM_CAP_HTMCNTVALUE_0                       0x803572b0
#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_0                      0x80357380
#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_1                      0x80357384
#define CM7_0_DTCM_CAP_HTMATIDOUT                          0x80357400
#define CM7_0_DTCM_CAP_HTMCLAIMTAGSET                      0x80357fa0
#define CM7_0_DTCM_CAP_HTMCLAIMTAGCLR                      0x80357fa4
#define CM7_0_DTCM_CAP_HTMLOCK_ACCESS                      0x80357fb0
#define CM7_0_DTCM_CAP_HTMLOCK_STATUS                      0x80357fb4
#define CM7_0_DTCM_CAP_HTMAUTHSTATUS                       0x80357fb8
#define CM7_0_DTCM_CAP_HTMDEVID                            0x80357fc8
#define CM7_0_DTCM_CAP_HTMDEV_TYPE                         0x80357fcc
#define CM7_0_DTCM_CAP_HTMPERIPHID4                        0x80357fd0
#define CM7_0_DTCM_CAP_HTMPERIPHID0                        0x80357fe0
#define CM7_0_DTCM_CAP_HTMPERIPHID1                        0x80357fe4
#define CM7_0_DTCM_CAP_HTMPERIPHID2                        0x80357fe8
#define CM7_0_DTCM_CAP_HTMPERIPHID3                        0x80357fec
#define CM7_0_DTCM_CAP_HTMCOMPONID0                        0x80357ff0
#define CM7_0_DTCM_CAP_HTMCOMPONID1                        0x80357ff4
#define CM7_0_DTCM_CAP_HTMCOMPONID2                        0x80357ff8
#define CM7_0_DTCM_CAP_HTMCOMPONID3                        0x80357ffc

#define CM7_1_DTCM_CAP_HTMGLBCTRL                          0x80358000
#define CM7_1_DTCM_CAP_HTMSTATUS                           0x80358004
#define CM7_1_DTCM_CAP_HTMCFGCODE                          0x80358008
#define CM7_1_DTCM_CAP_HTMCFGCODE2                         0x8035800c
#define CM7_1_DTCM_CAP_HTMCONTROL                          0x80358010
#define CM7_1_DTCM_CAP_HTMTRIGEVT                          0x80358014
#define CM7_1_DTCM_CAP_HTMTRIGSTATE                        0x80358018
#define CM7_1_DTCM_CAP_HTMAUXSEL                           0x8035801c
#define CM7_1_DTCM_CAP_HTMSYNCRELOAD                       0x80358020
#define CM7_1_DTCM_CAP_HTMSYNCCOUNT                        0x80358024
#define CM7_1_DTCM_CAP_HTMFIFOLEVEL                        0x80358028
#define CM7_1_DTCM_CAP_HTMSTARTSTOP                        0x80358030
#define CM7_1_DTCM_CAP_HTMCTRL2                            0x80358034
#define CM7_1_DTCM_CAP_HTMTRACEEVT                         0x80358038
#define CM7_1_DTCM_CAP_HTMTRACECTRL                        0x8035803c
#define CM7_1_DTCM_CAP_HTMSSTATE                           0x80358040
#define CM7_1_DTCM_CAP_HTMASICCTRL                         0x80358044
#define CM7_1_DTCM_CAP_HTMBUSSELECT                        0x80358048
#define CM7_1_DTCM_CAP_HTMADDR_0                           0x80358080
#define CM7_1_DTCM_CAP_HTMADDR_1                           0x80358084
#define CM7_1_DTCM_CAP_HTMADDR_2                           0x80358088
#define CM7_1_DTCM_CAP_HTMADDR_3                           0x8035808c
#define CM7_1_DTCM_CAP_HTMADDR_4                           0x80358090
#define CM7_1_DTCM_CAP_HTMADDR_5                           0x80358094
#define CM7_1_DTCM_CAP_HTMADDR_6                           0x80358098
#define CM7_1_DTCM_CAP_HTMADDR_7                           0x8035809c
#define CM7_1_DTCM_CAP_HTMADDR_8                           0x803580a0
#define CM7_1_DTCM_CAP_HTMADDR_9                           0x803580a4
#define CM7_1_DTCM_CAP_HTMADDR_10                          0x803580a8
#define CM7_1_DTCM_CAP_HTMADDR_11                          0x803580ac
#define CM7_1_DTCM_CAP_HTMADDR_12                          0x803580b0
#define CM7_1_DTCM_CAP_HTMADDR_13                          0x803580b4
#define CM7_1_DTCM_CAP_HTMADDR_14                          0x803580b8
#define CM7_1_DTCM_CAP_HTMADDR_15                          0x803580bc
#define CM7_1_DTCM_CAP_HTMADDRTYPE_0                       0x803580c0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_1                       0x803580c4
#define CM7_1_DTCM_CAP_HTMADDRTYPE_2                       0x803580c8
#define CM7_1_DTCM_CAP_HTMADDRTYPE_3                       0x803580cc
#define CM7_1_DTCM_CAP_HTMADDRTYPE_4                       0x803580d0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_5                       0x803580d4
#define CM7_1_DTCM_CAP_HTMADDRTYPE_6                       0x803580d8
#define CM7_1_DTCM_CAP_HTMADDRTYPE_7                       0x803580dc
#define CM7_1_DTCM_CAP_HTMADDRTYPE_8                       0x803580e0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_9                       0x803580e4
#define CM7_1_DTCM_CAP_HTMADDRTYPE_10                      0x803580e8
#define CM7_1_DTCM_CAP_HTMADDRTYPE_11                      0x803580ec
#define CM7_1_DTCM_CAP_HTMADDRTYPE_12                      0x803580f0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_13                      0x803580f4
#define CM7_1_DTCM_CAP_HTMADDRTYPE_14                      0x803580f8
#define CM7_1_DTCM_CAP_HTMADDRTYPE_15                      0x803580fc
#define CM7_1_DTCM_CAP_HTMHCTRLSEL_0                       0x80358200
#define CM7_1_DTCM_CAP_HTMHCTRLVAL_0                       0x80358220
#define CM7_1_DTCM_CAP_HTMHCTRLMASK_0                      0x80358240
#define CM7_1_DTCM_CAP_HTMCNTRELDVAL_0                     0x80358280
#define CM7_1_DTCM_CAP_HTMCNTENABLE_0                      0x80358290
#define CM7_1_DTCM_CAP_HTMCNTRELDEVT_0                     0x803582a0
#define CM7_1_DTCM_CAP_HTMCNTVALUE_0                       0x803582b0
#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_0                      0x80358380
#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_1                      0x80358384
#define CM7_1_DTCM_CAP_HTMATIDOUT                          0x80358400
#define CM7_1_DTCM_CAP_HTMCLAIMTAGSET                      0x80358fa0
#define CM7_1_DTCM_CAP_HTMCLAIMTAGCLR                      0x80358fa4
#define CM7_1_DTCM_CAP_HTMLOCK_ACCESS                      0x80358fb0
#define CM7_1_DTCM_CAP_HTMLOCK_STATUS                      0x80358fb4
#define CM7_1_DTCM_CAP_HTMAUTHSTATUS                       0x80358fb8
#define CM7_1_DTCM_CAP_HTMDEVID                            0x80358fc8
#define CM7_1_DTCM_CAP_HTMDEV_TYPE                         0x80358fcc
#define CM7_1_DTCM_CAP_HTMPERIPHID4                        0x80358fd0
#define CM7_1_DTCM_CAP_HTMPERIPHID0                        0x80358fe0
#define CM7_1_DTCM_CAP_HTMPERIPHID1                        0x80358fe4
#define CM7_1_DTCM_CAP_HTMPERIPHID2                        0x80358fe8
#define CM7_1_DTCM_CAP_HTMPERIPHID3                        0x80358fec
#define CM7_1_DTCM_CAP_HTMCOMPONID0                        0x80358ff0
#define CM7_1_DTCM_CAP_HTMCOMPONID1                        0x80358ff4
#define CM7_1_DTCM_CAP_HTMCOMPONID2                        0x80358ff8
#define CM7_1_DTCM_CAP_HTMCOMPONID3                        0x80358ffc

#define CNP_TOP_CNP_REV_reserved0_MASK                             0xffff0000
#define CNP_TOP_CNP_REV_reserved0_SHIFT                            16

#define CNP_TOP_CNP_REV_CNP_REV_MASK                               0x0000ffff
#define CNP_TOP_CNP_REV_CNP_REV_SHIFT                              0

#define CNP_TOP_TIMER_TICK_CONTROL_RDIV_MASK                       0xff000000
#define CNP_TOP_TIMER_TICK_CONTROL_RDIV_SHIFT                      24

#define CNP_TOP_TIMER_TICK_CONTROL_SDIV_MASK                       0x00ff0000
#define CNP_TOP_TIMER_TICK_CONTROL_SDIV_SHIFT                      16

#define CNP_TOP_TIMER_TICK_CONTROL_NDIV_MASK                       0x0000ffff
#define CNP_TOP_TIMER_TICK_CONTROL_NDIV_SHIFT                      0

#define CNP_TOP_TIMER_PERIOD_i_TIMEOUT_MASK                        0xffffffff
#define CNP_TOP_TIMER_PERIOD_i_TIMEOUT_SHIFT                       0

#define CNP_TOP_MISC_CFG_reserved0_MASK                            0xffffff00
#define CNP_TOP_MISC_CFG_reserved0_SHIFT                           8

#define CNP_TOP_MISC_CFG_SVQP_RING_FULL_SEL_MASK                   0x00000080
#define CNP_TOP_MISC_CFG_SVQP_RING_FULL_SEL_SHIFT                  7

#define CNP_TOP_MISC_CFG_UNUSED_FIELD_1_MASK                       0x00000040
#define CNP_TOP_MISC_CFG_UNUSED_FIELD_1_SHIFT                      6

#define CNP_TOP_MISC_CFG_reserved1_MASK                            0x00000030
#define CNP_TOP_MISC_CFG_reserved1_SHIFT                           4

#define CNP_TOP_MISC_CFG_PFR_FWQ_RING_FULL_SEL_MASK                0x00000008
#define CNP_TOP_MISC_CFG_PFR_FWQ_RING_FULL_SEL_SHIFT               3

#define CNP_TOP_MISC_CFG_TAM_FORCE_DETOUR_TO_SYSRAM_MASK           0x00000004
#define CNP_TOP_MISC_CFG_TAM_FORCE_DETOUR_TO_SYSRAM_SHIFT          2

#define CNP_TOP_MISC_CFG_PFR_RXQ_RING_FULL_SEL_MASK                0x00000002
#define CNP_TOP_MISC_CFG_PFR_RXQ_RING_FULL_SEL_SHIFT               1

#define CNP_TOP_MISC_CFG_SVQP_FORCE_DETOUR_TO_SYSRAM_MASK          0x00000001
#define CNP_TOP_MISC_CFG_SVQP_FORCE_DETOUR_TO_SYSRAM_SHIFT         0

#define CNP_TOP_UBUS_MISC_CONTROL_reserved0_MASK                   0xfffffff0
#define CNP_TOP_UBUS_MISC_CONTROL_reserved0_SHIFT                  4

#define CNP_TOP_UBUS_MISC_CONTROL_RFU_MASK                         0x00000008
#define CNP_TOP_UBUS_MISC_CONTROL_RFU_SHIFT                        3

#define CNP_TOP_UBUS_MISC_CONTROL_UBUS_DEV_ERR_EN_MASK             0x00000004
#define CNP_TOP_UBUS_MISC_CONTROL_UBUS_DEV_ERR_EN_SHIFT            2

#define CNP_TOP_UBUS_MISC_CONTROL_UBUS_REPOUT_ERR_EN_MASK          0x00000003
#define CNP_TOP_UBUS_MISC_CONTROL_UBUS_REPOUT_ERR_EN_SHIFT         0

#define CNP_CLKRST_CLOCK_CNTRL_reserved0_MASK                      0xfffc0000
#define CNP_CLKRST_CLOCK_CNTRL_reserved0_SHIFT                     18

#define CNP_CLKRST_CLOCK_CNTRL_CM7_CLK_MUX_CTL_MASK                0x00020000
#define CNP_CLKRST_CLOCK_CNTRL_CM7_CLK_MUX_CTL_SHIFT               17

#define CNP_CLKRST_CLOCK_CNTRL_CM7_CLK_SEL_MASK                    0x00010000
#define CNP_CLKRST_CLOCK_CNTRL_CM7_CLK_SEL_SHIFT                   16

#define CNP_CLKRST_CLOCK_CNTRL_reserved1_MASK                      0x0000ffff
#define CNP_CLKRST_CLOCK_CNTRL_reserved1_SHIFT                     0

#define CNP_CLKRST_RX_FLUSH_CNTRL_reserved0_MASK                   0xfffffffe
#define CNP_CLKRST_RX_FLUSH_CNTRL_reserved0_SHIFT                  1

#define CNP_CLKRST_RX_FLUSH_CNTRL_RX_FLUSH_MASK                    0x00000001
#define CNP_CLKRST_RX_FLUSH_CNTRL_RX_FLUSH_SHIFT                   0

#define CNP_CLKRST_TX_FLUSH_CNTRL_reserved0_MASK                   0xfffffffe
#define CNP_CLKRST_TX_FLUSH_CNTRL_reserved0_SHIFT                  1

#define CNP_CLKRST_TX_FLUSH_CNTRL_TX_FLUSH_MASK                    0x00000001
#define CNP_CLKRST_TX_FLUSH_CNTRL_TX_FLUSH_SHIFT                   0

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_CAIB_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_CAIB_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_CAIB_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_CAIB_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_CAIB_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK 0xf8000000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK 0x02000000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT 25

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK 0x01ff0000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK 0x00002000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_IPA_RX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_IPA_RX_CPM_DEBOUNCE_TIMER_reserved0_MASK        0xffff0000
#define CNP_CLKRST_IPA_RX_CPM_DEBOUNCE_TIMER_reserved0_SHIFT       16

#define CNP_CLKRST_IPA_RX_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK          0x0000ffff
#define CNP_CLKRST_IPA_RX_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT         0

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK   0xf8000000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT  27

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK  0x04000000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK    0x02000000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT   25

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK   0x01ff0000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT  16

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK   0x00002000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT  13

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_DIB_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_DIB_CPM_DEBOUNCE_TIMER_reserved0_MASK           0xffff0000
#define CNP_CLKRST_DIB_CPM_DEBOUNCE_TIMER_reserved0_SHIFT          16

#define CNP_CLKRST_DIB_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK             0x0000ffff
#define CNP_CLKRST_DIB_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT            0

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK 0xf8000000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK 0x02000000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT 25

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK 0x01ff0000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK 0x00002000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_DEBOUNCE_TIMER_reserved0_MASK 0xffff0000
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_DEBOUNCE_TIMER_reserved0_SHIFT 16

#define CNP_CLKRST_SYSTEMPORT_RX_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK   0x0000ffff
#define CNP_CLKRST_SYSTEMPORT_RX_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT  0

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK   0xf8000000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT  27

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK  0x04000000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK    0x02000000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT   25

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK   0x01ff0000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT  16

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK   0x00002000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT  13

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_RDS_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_RDS_CPM_DEBOUNCE_TIMER_reserved0_MASK           0xffff0000
#define CNP_CLKRST_RDS_CPM_DEBOUNCE_TIMER_reserved0_SHIFT          16

#define CNP_CLKRST_RDS_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK             0x0000ffff
#define CNP_CLKRST_RDS_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT            0

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK   0xf8000000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT  27

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK  0x04000000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK    0x02000000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT   25

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK   0x01ff0000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT  16

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK   0x00002000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT  13

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_PDP_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_PDP_CPM_DEBOUNCE_TIMER_reserved0_MASK           0xffff0000
#define CNP_CLKRST_PDP_CPM_DEBOUNCE_TIMER_reserved0_SHIFT          16

#define CNP_CLKRST_PDP_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK             0x0000ffff
#define CNP_CLKRST_PDP_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT            0

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_HASH_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_HASH_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_HASH_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_HASH_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_HASH_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_NATC_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_NATC_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_NATC_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_NATC_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_NATC_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_ICPE_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_ICPE_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_ICPE_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_ICPE_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_ICPE_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK   0xf8000000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT  27

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK  0x04000000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK    0x02000000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT   25

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK   0x01ff0000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT  16

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK   0x00002000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT  13

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_PFR_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_PFR_CPM_DEBOUNCE_TIMER_reserved0_MASK           0xffff0000
#define CNP_CLKRST_PFR_CPM_DEBOUNCE_TIMER_reserved0_SHIFT          16

#define CNP_CLKRST_PFR_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK             0x0000ffff
#define CNP_CLKRST_PFR_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT            0

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_SVQP_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_SVQP_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_SVQP_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_SVQP_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_SVQP_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK   0xf8000000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT  27

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK  0x04000000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK    0x02000000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT   25

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK   0x01ff0000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT  16

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK   0x00002000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT  13

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_TAM_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_TAM_CPM_DEBOUNCE_TIMER_reserved0_MASK           0xffff0000
#define CNP_CLKRST_TAM_CPM_DEBOUNCE_TIMER_reserved0_SHIFT          16

#define CNP_CLKRST_TAM_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK             0x0000ffff
#define CNP_CLKRST_TAM_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT            0

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK 0xf8000000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK 0x02000000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT 25

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK 0x01ff0000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK 0x00002000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_DEBOUNCE_TIMER_reserved0_MASK 0xffff0000
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_DEBOUNCE_TIMER_reserved0_SHIFT 16

#define CNP_CLKRST_SYSTEMPORT_TX_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK   0x0000ffff
#define CNP_CLKRST_SYSTEMPORT_TX_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT  0

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK  0xf8000000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT  25

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK  0x01ff0000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK  0x00002000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_ECPE_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_ECPE_CPM_DEBOUNCE_TIMER_reserved0_MASK          0xffff0000
#define CNP_CLKRST_ECPE_CPM_DEBOUNCE_TIMER_reserved0_SHIFT         16

#define CNP_CLKRST_ECPE_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_ECPE_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT           0

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved0_MASK 0xf8000000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved0_SHIFT 27

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_MASK  0x02000000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_LP_FORCE_SHIFT 25

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved1_MASK 0x01ff0000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved1_SHIFT 16

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved2_MASK 0x00002000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_reserved2_SHIFT 13

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_SGDMA_CPM_POWER_MANAGEMENT_CNTRL_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_SGDMA_CPM_DEBOUNCE_TIMER_reserved0_MASK         0xffff0000
#define CNP_CLKRST_SGDMA_CPM_DEBOUNCE_TIMER_reserved0_SHIFT        16

#define CNP_CLKRST_SGDMA_CPM_DEBOUNCE_TIMER_TIMEOUT_MASK           0x0000ffff
#define CNP_CLKRST_SGDMA_CPM_DEBOUNCE_TIMER_TIMEOUT_SHIFT          0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ARRAY_BASE      0x80200198
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ARRAY_START     0
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ARRAY_END       1
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ARRAY_ELEMENT_SIZE 32

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved0_MASK  0xe0000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved0_SHIFT 29

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_DEEPSLEEP_EN_MASK 0x10000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_DEEPSLEEP_EN_SHIFT 28

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_GATEHCLK_EN_MASK 0x08000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_GATEHCLK_EN_SHIFT 27

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_FORCE_SHIFT  25

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_MODE_MASK    0x01000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_LP_MODE_SHIFT   24

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved1_MASK  0x00ff0000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved1_SHIFT 16

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved2_MASK  0x00002000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_reserved2_SHIFT 13

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRLi_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved0_MASK  0xe0000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved0_SHIFT 29

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_DEEPSLEEP_EN_MASK 0x10000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_DEEPSLEEP_EN_SHIFT 28

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_GATEHCLK_EN_MASK 0x08000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_GATEHCLK_EN_SHIFT 27

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_FORCE_SHIFT  25

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_MODE_MASK    0x01000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_LP_MODE_SHIFT   24

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved1_MASK  0x00ff0000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved1_SHIFT 16

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved2_MASK  0x00002000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_reserved2_SHIFT 13

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL0_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved0_MASK  0xe0000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved0_SHIFT 29

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_DEEPSLEEP_EN_MASK 0x10000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_DEEPSLEEP_EN_SHIFT 28

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_GATEHCLK_EN_MASK 0x08000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_GATEHCLK_EN_SHIFT 27

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_DISABLE_MASK 0x04000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_DISABLE_SHIFT 26

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_FORCE_MASK   0x02000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_FORCE_SHIFT  25

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_MODE_MASK    0x01000000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_LP_MODE_SHIFT   24

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved1_MASK  0x00ff0000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved1_SHIFT 16

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_DIB_IDLE_EN_MASK 0x00008000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_DIB_IDLE_EN_SHIFT 15

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SGDMA_IDLE_EN_MASK 0x00004000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SGDMA_IDLE_EN_SHIFT 14

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved2_MASK  0x00002000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_reserved2_SHIFT 13

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_ECPE_IDLE_EN_MASK 0x00001000
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_ECPE_IDLE_EN_SHIFT 12

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SYSTEMPORT_TX_IDLE_EN_MASK 0x00000800
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SYSTEMPORT_TX_IDLE_EN_SHIFT 11

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_TAM_IDLE_EN_MASK 0x00000400
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_TAM_IDLE_EN_SHIFT 10

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SVQP_IDLE_EN_MASK 0x00000200
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SVQP_IDLE_EN_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_PFR_IDLE_EN_MASK 0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_PFR_IDLE_EN_SHIFT 8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_ICPE_IDLE_EN_MASK 0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_ICPE_IDLE_EN_SHIFT 7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_NATC_IDLE_EN_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_NATC_IDLE_EN_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_HASH_IDLE_EN_MASK 0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_HASH_IDLE_EN_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_PDP_IDLE_EN_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_PDP_IDLE_EN_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_RDS_IDLE_EN_MASK 0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_RDS_IDLE_EN_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SYSTEMPORT_RX_IDLE_EN_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_SYSTEMPORT_RX_IDLE_EN_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_IPA_RX_IDLE_EN_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_IPA_RX_IDLE_EN_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_CAIB_IDLE_EN_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_CNTRL1_CAIB_IDLE_EN_SHIFT 0

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_ARRAY_BASE              0x802001a0
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_ARRAY_START             0
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_ARRAY_END               1
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_ARRAY_ELEMENT_SIZE      32

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_reserved0_MASK          0xffff0000
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_reserved0_SHIFT         16

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMERi_TIMEOUT_SHIFT           0

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER0_reserved0_MASK          0xffff0000
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER0_reserved0_SHIFT         16

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER0_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER0_TIMEOUT_SHIFT           0

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER1_reserved0_MASK          0xffff0000
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER1_reserved0_SHIFT         16

#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER1_TIMEOUT_MASK            0x0000ffff
#define CNP_CLKRST_CM7_CPM_DEBOUNCE_TIMER1_TIMEOUT_SHIFT           0

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_reserved0_MASK      0xffff0000
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_reserved0_SHIFT     16

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_DIB_IDLE_STATUS_MASK 0x00008000
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_DIB_IDLE_STATUS_SHIFT 15

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SGDMA_IDLE_STATUS_MASK 0x00004000
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SGDMA_IDLE_STATUS_SHIFT 14

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_reserved1_MASK      0x00002000
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_reserved1_SHIFT     13

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_ECPE_IDLE_STATUS_MASK 0x00001000
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_ECPE_IDLE_STATUS_SHIFT 12

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SYSTEMPORT_TX_IDLE_STATUS_MASK 0x00000800
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SYSTEMPORT_TX_IDLE_STATUS_SHIFT 11

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_TAM_IDLE_STATUS_MASK 0x00000400
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_TAM_IDLE_STATUS_SHIFT 10

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SVQP_IDLE_STATUS_MASK 0x00000200
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SVQP_IDLE_STATUS_SHIFT 9

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_PFR_IDLE_STATUS_MASK 0x00000100
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_PFR_IDLE_STATUS_SHIFT 8

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_ICPE_IDLE_STATUS_MASK 0x00000080
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_ICPE_IDLE_STATUS_SHIFT 7

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_NATC_IDLE_STATUS_MASK 0x00000040
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_NATC_IDLE_STATUS_SHIFT 6

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_HASH_IDLE_STATUS_MASK 0x00000020
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_HASH_IDLE_STATUS_SHIFT 5

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_PDP_IDLE_STATUS_MASK 0x00000010
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_PDP_IDLE_STATUS_SHIFT 4

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_RDS_IDLE_STATUS_MASK 0x00000008
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_RDS_IDLE_STATUS_SHIFT 3

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SYSTEMPORT_RX_IDLE_STATUS_MASK 0x00000004
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_SYSTEMPORT_RX_IDLE_STATUS_SHIFT 2

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_IPA_RX_IDLE_STATUS_MASK 0x00000002
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_IPA_RX_IDLE_STATUS_SHIFT 1

#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_CAIB_IDLE_STATUS_MASK 0x00000001
#define CNP_CLKRST_CPM_POWER_MANAGEMENT_STATUS_CAIB_IDLE_STATUS_SHIFT 0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_ARRAY_BASE     0x802001ac
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_ARRAY_START    0
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_ARRAY_END      1
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_ARRAY_ELEMENT_SIZE 32

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_reserved0_MASK 0xfffffe00
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_reserved0_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_WDOGRES_MASK   0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_WDOGRES_SHIFT  8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_LOCKUP_MASK    0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_LOCKUP_SHIFT   7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SYSRESETREQ_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SYSRESETREQ_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPING_MASK  0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPING_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPDEEP_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPDEEP_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_GATEHCLK_MASK  0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_GATEHCLK_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPHOLDACKn_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPHOLDACKn_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPHOLDREQn_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_SLEEPHOLDREQn_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_LP_STATUS_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUSi_LP_STATUS_SHIFT 0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_reserved0_MASK 0xfffffe00
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_reserved0_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_WDOGRES_MASK   0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_WDOGRES_SHIFT  8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_LOCKUP_MASK    0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_LOCKUP_SHIFT   7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SYSRESETREQ_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SYSRESETREQ_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPING_MASK  0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPING_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPDEEP_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPDEEP_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_GATEHCLK_MASK  0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_GATEHCLK_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPHOLDACKn_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPHOLDACKn_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPHOLDREQn_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_SLEEPHOLDREQn_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_LP_STATUS_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS0_LP_STATUS_SHIFT 0

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_reserved0_MASK 0xfffffe00
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_reserved0_SHIFT 9

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_WDOGRES_MASK   0x00000100
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_WDOGRES_SHIFT  8

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_LOCKUP_MASK    0x00000080
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_LOCKUP_SHIFT   7

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SYSRESETREQ_MASK 0x00000040
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SYSRESETREQ_SHIFT 6

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPING_MASK  0x00000020
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPING_SHIFT 5

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPDEEP_MASK 0x00000010
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPDEEP_SHIFT 4

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_GATEHCLK_MASK  0x00000008
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_GATEHCLK_SHIFT 3

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPHOLDACKn_MASK 0x00000004
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPHOLDACKn_SHIFT 2

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPHOLDREQn_MASK 0x00000002
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_SLEEPHOLDREQn_SHIFT 1

#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_LP_STATUS_MASK 0x00000001
#define CNP_CLKRST_CM7_CPM_POWER_MANAGEMENT_STATUS1_LP_STATUS_SHIFT 0

#define CNP_COMMON_RX_BUFFER_CONTROL_reserved0_MASK                0xffff0000
#define CNP_COMMON_RX_BUFFER_CONTROL_reserved0_SHIFT               16

#define CNP_COMMON_RX_BUFFER_CONTROL_BUFF_DATA_OFFSET_MASK         0x0000ffff
#define CNP_COMMON_RX_BUFFER_CONTROL_BUFF_DATA_OFFSET_SHIFT        0

#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved0_MASK                0xfffff800
#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved0_SHIFT               11

#define CNP_COMMON_MPM_GLOBAL_CONFIG_NBUF_ADDR_TYPE_MASK           0x00000700
#define CNP_COMMON_MPM_GLOBAL_CONFIG_NBUF_ADDR_TYPE_SHIFT          8

#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved1_MASK                0x000000e0
#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved1_SHIFT               5

#define CNP_COMMON_MPM_GLOBAL_CONFIG_MPM_INIT_MASK                 0x00000010
#define CNP_COMMON_MPM_GLOBAL_CONFIG_MPM_INIT_SHIFT                4

#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved2_MASK                0x00000008
#define CNP_COMMON_MPM_GLOBAL_CONFIG_reserved2_SHIFT               3

#define CNP_COMMON_MPM_GLOBAL_CONFIG_BUF_ADDR_TYPE_MASK            0x00000007
#define CNP_COMMON_MPM_GLOBAL_CONFIG_BUF_ADDR_TYPE_SHIFT           0

#define CNP_COMMON_WQ_CONFIG_WQ_RECORD_SIZE_MASK                   0xffff0000
#define CNP_COMMON_WQ_CONFIG_WQ_RECORD_SIZE_SHIFT                  16

#define CNP_COMMON_WQ_CONFIG_WQ_BASE_ADDR_MASK                     0x0000ffff
#define CNP_COMMON_WQ_CONFIG_WQ_BASE_ADDR_SHIFT                    0

#define CNP_COMMON_WQ_RING_i_reserved0_MASK                        0xffffff00
#define CNP_COMMON_WQ_RING_i_reserved0_SHIFT                       8

#define CNP_COMMON_WQ_RING_i_WQ_SIZE_MASK                          0x000000ff
#define CNP_COMMON_WQ_RING_i_WQ_SIZE_SHIFT                         0

#define CNP_COMMON_WQ_HDR_HDR_OFFSET_MASK                          0xffff0000
#define CNP_COMMON_WQ_HDR_HDR_OFFSET_SHIFT                         16

#define CNP_COMMON_WQ_HDR_WQ_HDR_OFFSET_MASK                       0x0000ffff
#define CNP_COMMON_WQ_HDR_WQ_HDR_OFFSET_SHIFT                      0

#define CNP_COMMON_WQ_HDR_LEN_reserved0_MASK                       0xffffc000
#define CNP_COMMON_WQ_HDR_LEN_reserved0_SHIFT                      14

#define CNP_COMMON_WQ_HDR_LEN_HDR_LENGTH_MASK                      0x00003fff
#define CNP_COMMON_WQ_HDR_LEN_HDR_LENGTH_SHIFT                     0

#define CNP_COMMON_WQ_IG_DESC_reserved0_MASK                       0xfe000000
#define CNP_COMMON_WQ_IG_DESC_reserved0_SHIFT                      25

#define CNP_COMMON_WQ_IG_DESC_reserved1_MASK                       0x01ff0000
#define CNP_COMMON_WQ_IG_DESC_reserved1_SHIFT                      16

#define CNP_COMMON_WQ_IG_DESC_WQ_DSCR_OFFSET_MASK                  0x0000ffff
#define CNP_COMMON_WQ_IG_DESC_WQ_DSCR_OFFSET_SHIFT                 0

#define CNP_COMMON_WQ_RSB0_reserved0_MASK                          0xffc00000
#define CNP_COMMON_WQ_RSB0_reserved0_SHIFT                         22

#define CNP_COMMON_WQ_RSB0_WQ_RSB0_SIZE_MASK                       0x003f0000
#define CNP_COMMON_WQ_RSB0_WQ_RSB0_SIZE_SHIFT                      16

#define CNP_COMMON_WQ_RSB0_WQ_RSB0_OFFSET_MASK                     0x0000ffff
#define CNP_COMMON_WQ_RSB0_WQ_RSB0_OFFSET_SHIFT                    0

#define CNP_COMMON_WQ_RSB1_reserved0_MASK                          0xffc00000
#define CNP_COMMON_WQ_RSB1_reserved0_SHIFT                         22

#define CNP_COMMON_WQ_RSB1_WQ_RSB1_SIZE_MASK                       0x003f0000
#define CNP_COMMON_WQ_RSB1_WQ_RSB1_SIZE_SHIFT                      16

#define CNP_COMMON_WQ_RSB1_WQ_RSB1_OFFSET_MASK                     0x0000ffff
#define CNP_COMMON_WQ_RSB1_WQ_RSB1_OFFSET_SHIFT                    0

#define CAIB_CONTROL_reserved0_MASK                                0xfffffffe
#define CAIB_CONTROL_reserved0_SHIFT                               1

#define CAIB_CONTROL_CAIB_EN_MASK                                  0x00000001
#define CAIB_CONTROL_CAIB_EN_SHIFT                                 0

#define CAIB_DESC_RING_ACQ0_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ0_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ0_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ0_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ0_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ0_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ0_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ0_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ0_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ0_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ0_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ0_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ1_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ1_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ1_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ1_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ1_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ1_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ1_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ1_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ1_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ1_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ1_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ1_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ2_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ2_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ2_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ2_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ2_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ2_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ2_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ2_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ2_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ2_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ2_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ2_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ3_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ3_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ3_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ3_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ3_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ3_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ3_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ3_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ3_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ3_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ3_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ3_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ4_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ4_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ4_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ4_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ4_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ4_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ4_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ4_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ4_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ4_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ4_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ4_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ5_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ5_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ5_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ5_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ5_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ5_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ5_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ5_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ5_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ5_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ5_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ5_RING_EN_SHIFT                          0

#define CAIB_DESC_RING_ACQ6_reserved0_MASK                         0xffffff80
#define CAIB_DESC_RING_ACQ6_reserved0_SHIFT                        7

#define CAIB_DESC_RING_ACQ6_BPID_EN_MASK                           0x00000040
#define CAIB_DESC_RING_ACQ6_BPID_EN_SHIFT                          6

#define CAIB_DESC_RING_ACQ6_BPID_MASK                              0x00000038
#define CAIB_DESC_RING_ACQ6_BPID_SHIFT                             3

#define CAIB_DESC_RING_ACQ6_ACQ_DSCR_TYPE_MASK                     0x00000004
#define CAIB_DESC_RING_ACQ6_ACQ_DSCR_TYPE_SHIFT                    2

#define CAIB_DESC_RING_ACQ6_FLUSH_MASK                             0x00000002
#define CAIB_DESC_RING_ACQ6_FLUSH_SHIFT                            1

#define CAIB_DESC_RING_ACQ6_RING_EN_MASK                           0x00000001
#define CAIB_DESC_RING_ACQ6_RING_EN_SHIFT                          0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ0_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ0_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ0_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ0_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ1_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ1_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ1_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ1_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ2_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ2_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ2_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ2_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ3_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ3_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ3_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ3_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ4_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ4_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ4_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ4_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ5_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ5_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ5_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ5_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ6_reserved0_MASK           0xffff0000
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ6_reserved0_SHIFT          16

#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ6_PRODUCER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_PRODUCER_INDEX_ACQ6_PRODUCER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ0_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ0_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ0_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ0_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ1_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ1_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ1_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ1_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ2_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ2_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ2_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ2_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ3_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ3_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ3_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ3_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ4_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ4_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ4_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ4_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ5_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ5_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ5_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ5_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ6_PRODUCER_INDEX_MASK      0xffff0000
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ6_PRODUCER_INDEX_SHIFT     16

#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ6_CONSUMER_INDEX_MASK      0x0000ffff
#define CAIB_DDR_RING_CONSUMER_INDEX_ACQ6_CONSUMER_INDEX_SHIFT     0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ0_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ0_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ1_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ1_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ2_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ2_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ3_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ3_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ4_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ4_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ5_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ5_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_LO_ACQ6_DDR_START_ADDR_31_00_MASK 0xffffffff
#define CAIB_DDR_RING_START_ADDR_LO_ACQ6_DDR_START_ADDR_31_00_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ0_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ0_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ0_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ0_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ1_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ1_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ1_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ1_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ2_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ2_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ2_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ2_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ3_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ3_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ3_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ3_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ4_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ4_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ4_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ4_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ5_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ5_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ5_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ5_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_START_ADDR_HI_ACQ6_reserved0_MASK            0xffffff00
#define CAIB_DDR_RING_START_ADDR_HI_ACQ6_reserved0_SHIFT           8

#define CAIB_DDR_RING_START_ADDR_HI_ACQ6_DDR_START_ADDR_39_32_MASK 0x000000ff
#define CAIB_DDR_RING_START_ADDR_HI_ACQ6_DDR_START_ADDR_39_32_SHIFT 0

#define CAIB_DDR_RING_SIZE_ACQ0_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ0_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ0_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ0_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ1_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ1_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ1_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ1_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ2_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ2_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ2_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ2_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ3_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ3_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ3_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ3_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ4_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ4_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ4_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ4_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ5_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ5_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ5_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ5_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_SIZE_ACQ6_reserved0_MASK                     0xfffffff0
#define CAIB_DDR_RING_SIZE_ACQ6_reserved0_SHIFT                    4

#define CAIB_DDR_RING_SIZE_ACQ6_DDR_DESC_RING_SIZE_MASK            0x0000000f
#define CAIB_DDR_RING_SIZE_ACQ6_DDR_DESC_RING_SIZE_SHIFT           0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ0_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ0_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ0_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ0_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ1_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ1_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ1_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ1_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ2_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ2_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ2_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ2_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ3_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ3_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ3_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ3_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ4_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ4_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ4_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ4_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ5_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ5_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ5_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ5_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ6_TIMEOUT_MASK            0xffff0000
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ6_TIMEOUT_SHIFT           16

#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ6_INTR_THRESHOLD_MASK     0x0000ffff
#define CAIB_DDR_RING_INTR_PUSH_TIMER_ACQ6_INTR_THRESHOLD_SHIFT    0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ0_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ0_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ0_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ0_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ1_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ1_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ1_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ1_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ2_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ2_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ2_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ2_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ3_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ3_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ3_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ3_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ4_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ4_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ4_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ4_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ5_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ5_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ5_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ5_TIMEOUT_SHIFT           0

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ6_reserved0_MASK          0xffff0000
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ6_reserved0_SHIFT         16

#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ6_TIMEOUT_MASK            0x0000ffff
#define CAIB_DDR_RING_READ_PUSH_TIMER_ACQ6_TIMEOUT_SHIFT           0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ0_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ0_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ0_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ0_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ1_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ1_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ1_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ1_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ2_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ2_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ2_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ2_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ3_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ3_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ3_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ3_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ4_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ4_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ4_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ4_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ5_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ5_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ5_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ5_ACQ_WEIGHT_SHIFT        0

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ6_reserved0_MASK          0xfffffff0
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ6_reserved0_SHIFT         4

#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ6_ACQ_WEIGHT_MASK         0x0000000f
#define CAIB_LOCAL_RING_RD_ARB_WEIGHT_ACQ6_ACQ_WEIGHT_SHIFT        0

#define CAIB_DDR_RING_BURST_CTRL_ACQ_reserved0_MASK                0xffff0000
#define CAIB_DDR_RING_BURST_CTRL_ACQ_reserved0_SHIFT               16

#define CAIB_DDR_RING_BURST_CTRL_ACQ_RD_MAX_BURST_SIZE_MASK        0x0000ff00
#define CAIB_DDR_RING_BURST_CTRL_ACQ_RD_MAX_BURST_SIZE_SHIFT       8

#define CAIB_DDR_RING_BURST_CTRL_ACQ_RD_MIN_BURST_SIZE_MASK        0x000000ff
#define CAIB_DDR_RING_BURST_CTRL_ACQ_RD_MIN_BURST_SIZE_SHIFT       0

#define CAIB_DDR_RING_ARB_CTRL_reserved0_MASK                      0xfffffff8
#define CAIB_DDR_RING_ARB_CTRL_reserved0_SHIFT                     3

#define CAIB_DDR_RING_ARB_CTRL_WCRR_TPOLL_MODE_MASK                0x00000004
#define CAIB_DDR_RING_ARB_CTRL_WCRR_TPOLL_MODE_SHIFT               2

#define CAIB_DDR_RING_ARB_CTRL_ARB_MODE_MASK                       0x00000002
#define CAIB_DDR_RING_ARB_CTRL_ARB_MODE_SHIFT                      1

#define CAIB_DDR_RING_ARB_CTRL_ARB_EN_MASK                         0x00000001
#define CAIB_DDR_RING_ARB_CTRL_ARB_EN_SHIFT                        0

#define CAIB_LOCAL_RING_ARB_CTRL_reserved0_MASK                    0xfffffff8
#define CAIB_LOCAL_RING_ARB_CTRL_reserved0_SHIFT                   3

#define CAIB_LOCAL_RING_ARB_CTRL_ARB_MODE_MASK                     0x00000006
#define CAIB_LOCAL_RING_ARB_CTRL_ARB_MODE_SHIFT                    1

#define CAIB_LOCAL_RING_ARB_CTRL_ARB_EN_MASK                       0x00000001
#define CAIB_LOCAL_RING_ARB_CTRL_ARB_EN_SHIFT                      0

#define IPA_CONFIG_reserved0_MASK                                  0xfffe0000
#define IPA_CONFIG_reserved0_SHIFT                                 17

#define IPA_CONFIG_CAIB_WEIGHT_MASK                                0x0001f000
#define IPA_CONFIG_CAIB_WEIGHT_SHIFT                               12

#define IPA_CONFIG_reserved1_MASK                                  0x00000e00
#define IPA_CONFIG_reserved1_SHIFT                                 9

#define IPA_CONFIG_SIB_WEIGHT_MASK                                 0x000001f0
#define IPA_CONFIG_SIB_WEIGHT_SHIFT                                4

#define IPA_CONFIG_reserved2_MASK                                  0x00000008
#define IPA_CONFIG_reserved2_SHIFT                                 3

#define IPA_CONFIG_ARB_MODE_MASK                                   0x00000006
#define IPA_CONFIG_ARB_MODE_SHIFT                                  1

#define IPA_CONFIG_ARB_EN_MASK                                     0x00000001
#define IPA_CONFIG_ARB_EN_SHIFT                                    0

#define IPA_SIB_CTRL_reserved0_MASK                                0xfffffffc
#define IPA_SIB_CTRL_reserved0_SHIFT                               2

#define IPA_SIB_CTRL_TX_EN_MASK                                    0x00000002
#define IPA_SIB_CTRL_TX_EN_SHIFT                                   1

#define IPA_SIB_CTRL_RX_EN_MASK                                    0x00000001
#define IPA_SIB_CTRL_RX_EN_SHIFT                                   0

#define RDS_CONFIG_reserved0_MASK                                  0xfffffffe
#define RDS_CONFIG_reserved0_SHIFT                                 1

#define RDS_CONFIG_EN_MASK                                         0x00000001
#define RDS_CONFIG_EN_SHIFT                                        0

#define PDP_CONTROL_reserved0_MASK                                 0xfc000000
#define PDP_CONTROL_reserved0_SHIFT                                26

#define PDP_CONTROL_STAT_CNT_COR_EN_MASK                           0x02000000
#define PDP_CONTROL_STAT_CNT_COR_EN_SHIFT                          25

#define PDP_CONTROL_STAT_CNT_SAT_EN_MASK                           0x01000000
#define PDP_CONTROL_STAT_CNT_SAT_EN_SHIFT                          24

#define PDP_CONTROL_PUSH_TIMER_MASK                                0x00ff0000
#define PDP_CONTROL_PUSH_TIMER_SHIFT                               16

#define PDP_CONTROL_INTR_THRESHOLD_MASK                            0x0000ff00
#define PDP_CONTROL_INTR_THRESHOLD_SHIFT                           8

#define PDP_CONTROL_reserved1_MASK                                 0x000000f0
#define PDP_CONTROL_reserved1_SHIFT                                4

#define PDP_CONTROL_RQ_PRODUCER_IDX_WR_EN_MASK                     0x00000008
#define PDP_CONTROL_RQ_PRODUCER_IDX_WR_EN_SHIFT                    3

#define PDP_CONTROL_WQ_IDX_WR_EN_MASK                              0x00000004
#define PDP_CONTROL_WQ_IDX_WR_EN_SHIFT                             2

#define PDP_CONTROL_reserved2_MASK                                 0x00000002
#define PDP_CONTROL_reserved2_SHIFT                                1

#define PDP_CONTROL_PDP_EN_MASK                                    0x00000001
#define PDP_CONTROL_PDP_EN_SHIFT                                   0

#define PDP_SID_TO_CPU_MAP_reserved0_MASK                          0xffff0000
#define PDP_SID_TO_CPU_MAP_reserved0_SHIFT                         16

#define PDP_SID_TO_CPU_MAP_SID7_MASK                               0x0000c000
#define PDP_SID_TO_CPU_MAP_SID7_SHIFT                              14

#define PDP_SID_TO_CPU_MAP_SID6_MASK                               0x00003000
#define PDP_SID_TO_CPU_MAP_SID6_SHIFT                              12

#define PDP_SID_TO_CPU_MAP_SID5_MASK                               0x00000c00
#define PDP_SID_TO_CPU_MAP_SID5_SHIFT                              10

#define PDP_SID_TO_CPU_MAP_SID4_MASK                               0x00000300
#define PDP_SID_TO_CPU_MAP_SID4_SHIFT                              8

#define PDP_SID_TO_CPU_MAP_SID3_MASK                               0x000000c0
#define PDP_SID_TO_CPU_MAP_SID3_SHIFT                              6

#define PDP_SID_TO_CPU_MAP_SID2_MASK                               0x00000030
#define PDP_SID_TO_CPU_MAP_SID2_SHIFT                              4

#define PDP_SID_TO_CPU_MAP_SID1_MASK                               0x0000000c
#define PDP_SID_TO_CPU_MAP_SID1_SHIFT                              2

#define PDP_SID_TO_CPU_MAP_SID0_MASK                               0x00000003
#define PDP_SID_TO_CPU_MAP_SID0_SHIFT                              0

#define PDP_INIT_reserved0_MASK                                    0xfffffffe
#define PDP_INIT_reserved0_SHIFT                                   1

#define PDP_INIT_PDP_INIT_MASK                                     0x00000001
#define PDP_INIT_PDP_INIT_SHIFT                                    0

#define PDP_WQ_FREE_POINTER_i_reserved0_MASK                       0xffff0000
#define PDP_WQ_FREE_POINTER_i_reserved0_SHIFT                      16

#define PDP_WQ_FREE_POINTER_i_FREE_RING_TAIL_MASK                  0x0000ff00
#define PDP_WQ_FREE_POINTER_i_FREE_RING_TAIL_SHIFT                 8

#define PDP_WQ_FREE_POINTER_i_FREE_RING_HEAD_MASK                  0x000000ff
#define PDP_WQ_FREE_POINTER_i_FREE_RING_HEAD_SHIFT                 0

#define PDP_WQ_FREE_COUNT_i_reserved0_MASK                         0xffffff00
#define PDP_WQ_FREE_COUNT_i_reserved0_SHIFT                        8

#define PDP_WQ_FREE_COUNT_i_FREE_RING_CNT_MASK                     0x000000ff
#define PDP_WQ_FREE_COUNT_i_FREE_RING_CNT_SHIFT                    0

#define PDP_RQ_ADDR_i_RQ_INDEX_ADDR_MASK                           0xffff0000
#define PDP_RQ_ADDR_i_RQ_INDEX_ADDR_SHIFT                          16

#define PDP_RQ_ADDR_i_RQ_ADDR_MASK                                 0x0000ffff
#define PDP_RQ_ADDR_i_RQ_ADDR_SHIFT                                0

#define PDP_RQ_WR_PTR_i_reserved0_MASK                             0xffff0000
#define PDP_RQ_WR_PTR_i_reserved0_SHIFT                            16

#define PDP_RQ_WR_PTR_i_RQ_WR_PTR_MASK                             0x0000ffff
#define PDP_RQ_WR_PTR_i_RQ_WR_PTR_SHIFT                            0

#define PDP_WQ_ADDR_i_reserved0_MASK                               0xffff0000
#define PDP_WQ_ADDR_i_reserved0_SHIFT                              16

#define PDP_WQ_ADDR_i_WQ_INDEX_ADDR_MASK                           0x0000ffff
#define PDP_WQ_ADDR_i_WQ_INDEX_ADDR_SHIFT                          0

#define PDP_RQ_INDEX_i_RQ_PRODUCER_INDEX_MASK                      0xffff0000
#define PDP_RQ_INDEX_i_RQ_PRODUCER_INDEX_SHIFT                     16

#define PDP_RQ_INDEX_i_RQ_CONSUMER_INDEX_MASK                      0x0000ffff
#define PDP_RQ_INDEX_i_RQ_CONSUMER_INDEX_SHIFT                     0

#define PDP_WQ_INDEX_i_WQ_PRODUCER_INDEX_MASK                      0xffff0000
#define PDP_WQ_INDEX_i_WQ_PRODUCER_INDEX_SHIFT                     16

#define PDP_WQ_INDEX_i_WQ_CONSUMER_INDEX_MASK                      0x0000ffff
#define PDP_WQ_INDEX_i_WQ_CONSUMER_INDEX_SHIFT                     0

#define PDP_BACKPRESSURE_COUNTER_COUNT_MASK                        0xffffffff
#define PDP_BACKPRESSURE_COUNTER_COUNT_SHIFT                       0

#define PDP_BACKPRESSURE_DURATION_COUNT_MASK                       0xffffffff
#define PDP_BACKPRESSURE_DURATION_COUNT_SHIFT                      0

#define PDP_MAILBOX_OUT0_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT0_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT1_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT1_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT2_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT2_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT3_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT3_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT4_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT4_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT5_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT5_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT6_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT6_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_OUT7_i_VALUE_MASK                              0xffffffff
#define PDP_MAILBOX_OUT7_i_VALUE_SHIFT                             0

#define PDP_MAILBOX_IN0_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN0_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN1_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN1_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN2_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN2_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN3_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN3_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN4_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN4_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN5_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN5_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN6_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN6_i_VALUE_SHIFT                              0

#define PDP_MAILBOX_IN7_i_VALUE_MASK                               0xffffffff
#define PDP_MAILBOX_IN7_i_VALUE_SHIFT                              0

#define PDP_TIMER0_i_TIMEOUT_MASK                                  0xffffffff
#define PDP_TIMER0_i_TIMEOUT_SHIFT                                 0

#define PDP_TIMER1_i_TIMEOUT_MASK                                  0xffffffff
#define PDP_TIMER1_i_TIMEOUT_SHIFT                                 0

#define PDP_TIMER2_i_TIMEOUT_MASK                                  0xffffffff
#define PDP_TIMER2_i_TIMEOUT_SHIFT                                 0

#define PDP_TIMER3_i_TIMEOUT_MASK                                  0xffffffff
#define PDP_TIMER3_i_TIMEOUT_SHIFT                                 0

#define PDP_TIMER_CTRL_i_reserved0_MASK                            0xffffe000
#define PDP_TIMER_CTRL_i_reserved0_SHIFT                           13

#define PDP_TIMER_CTRL_i_TIMER3_MODE_MASK                          0x00001000
#define PDP_TIMER_CTRL_i_TIMER3_MODE_SHIFT                         12

#define PDP_TIMER_CTRL_i_reserved1_MASK                            0x00000e00
#define PDP_TIMER_CTRL_i_reserved1_SHIFT                           9

#define PDP_TIMER_CTRL_i_TIMER2_MODE_MASK                          0x00000100
#define PDP_TIMER_CTRL_i_TIMER2_MODE_SHIFT                         8

#define PDP_TIMER_CTRL_i_reserved2_MASK                            0x000000e0
#define PDP_TIMER_CTRL_i_reserved2_SHIFT                           5

#define PDP_TIMER_CTRL_i_TIMER1_MODE_MASK                          0x00000010
#define PDP_TIMER_CTRL_i_TIMER1_MODE_SHIFT                         4

#define PDP_TIMER_CTRL_i_reserved3_MASK                            0x0000000e
#define PDP_TIMER_CTRL_i_reserved3_SHIFT                           1

#define PDP_TIMER_CTRL_i_TIMER0_MODE_MASK                          0x00000001
#define PDP_TIMER_CTRL_i_TIMER0_MODE_SHIFT                         0

#define HASH_HASH_CNTRL_reserved0_MASK                             0xff000000
#define HASH_HASH_CNTRL_reserved0_SHIFT                            24

#define HASH_HASH_CNTRL_PUSHER_TIMER_MASK                          0x00ff0000
#define HASH_HASH_CNTRL_PUSHER_TIMER_SHIFT                         16

#define HASH_HASH_CNTRL_INTERRUPT_THRESHOLD_MASK                   0x0000ff00
#define HASH_HASH_CNTRL_INTERRUPT_THRESHOLD_SHIFT                  8

#define HASH_HASH_CNTRL_reserved1_MASK                             0x000000f0
#define HASH_HASH_CNTRL_reserved1_SHIFT                            4

#define HASH_HASH_CNTRL_RQ_PRODUCER_IDX_WR_EN_MASK                 0x00000008
#define HASH_HASH_CNTRL_RQ_PRODUCER_IDX_WR_EN_SHIFT                3

#define HASH_HASH_CNTRL_reserved2_MASK                             0x00000006
#define HASH_HASH_CNTRL_reserved2_SHIFT                            1

#define HASH_HASH_CNTRL_HASH_EN_MASK                               0x00000001
#define HASH_HASH_CNTRL_HASH_EN_SHIFT                              0

#define HASH_HASH_WORK_QUEUE_HASH_OFFSET_reserved0_MASK            0xffff0000
#define HASH_HASH_WORK_QUEUE_HASH_OFFSET_reserved0_SHIFT           16

#define HASH_HASH_WORK_QUEUE_HASH_OFFSET_WQ_HASH_OFFSET_MASK       0x0000ffff
#define HASH_HASH_WORK_QUEUE_HASH_OFFSET_WQ_HASH_OFFSET_SHIFT      0

#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_ARRAY_BASE               0x80200d10
#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_ARRAY_START              0
#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_ARRAY_END                1
#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_ARRAY_ELEMENT_SIZE       32

#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_RQ_INDEX_ADDR_MASK       0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_RQ_INDEX_ADDR_SHIFT      16

#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_RQ_ADDR_MASK             0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_ADDRESSi_RQ_ADDR_SHIFT            0

#define HASH_HASH_RESPONSE_QUEUE_ADDRESS0_RQ_INDEX_ADDR_MASK       0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS0_RQ_INDEX_ADDR_SHIFT      16

#define HASH_HASH_RESPONSE_QUEUE_ADDRESS0_RQ_ADDR_MASK             0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS0_RQ_ADDR_SHIFT            0

#define HASH_HASH_RESPONSE_QUEUE_ADDRESS1_RQ_INDEX_ADDR_MASK       0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS1_RQ_INDEX_ADDR_SHIFT      16

#define HASH_HASH_RESPONSE_QUEUE_ADDRESS1_RQ_ADDR_MASK             0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_ADDRESS1_RQ_ADDR_SHIFT            0

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_BASE         0x80200d18
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_START        0
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_END          1
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_ELEMENT_SIZE 32

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_reserved0_MASK     0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_reserved0_SHIFT    16

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_RQ_WR_PTR_MASK     0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTERi_RQ_WR_PTR_SHIFT    0

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER0_reserved0_MASK     0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER0_reserved0_SHIFT    16

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER0_RQ_WR_PTR_MASK     0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER0_RQ_WR_PTR_SHIFT    0

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER1_reserved0_MASK     0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER1_reserved0_SHIFT    16

#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER1_RQ_WR_PTR_MASK     0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_WRITE_POINTER1_RQ_WR_PTR_SHIFT    0

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_BASE 0x80200d20
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_START 0
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_END 1
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_ELEMENT_SIZE 32

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_PRODUCER_INDEX_SHIFT 16

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_CONSUMER_INDEX_SHIFT 0

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_PRODUCER_INDEX_SHIFT 16

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_CONSUMER_INDEX_SHIFT 0

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_PRODUCER_INDEX_SHIFT 16

#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define HASH_HASH_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_CONSUMER_INDEX_SHIFT 0

#define ICPE_CONFIG_MIN_LENGTH_MASK                                0xff000000
#define ICPE_CONFIG_MIN_LENGTH_SHIFT                               24

#define ICPE_CONFIG_INTR_TIMEOUT_MASK                              0x00ff0000
#define ICPE_CONFIG_INTR_TIMEOUT_SHIFT                             16

#define ICPE_CONFIG_INTR_THRESHOLD_MASK                            0x0000ff00
#define ICPE_CONFIG_INTR_THRESHOLD_SHIFT                           8

#define ICPE_CONFIG_reserved0_MASK                                 0x000000f0
#define ICPE_CONFIG_reserved0_SHIFT                                4

#define ICPE_CONFIG_RESPQ_PINDEX_WR_EN_MASK                        0x00000008
#define ICPE_CONFIG_RESPQ_PINDEX_WR_EN_SHIFT                       3

#define ICPE_CONFIG_reserved1_MASK                                 0x00000004
#define ICPE_CONFIG_reserved1_SHIFT                                2

#define ICPE_CONFIG_ICSUM_CALC_MODE_MASK                           0x00000002
#define ICPE_CONFIG_ICSUM_CALC_MODE_SHIFT                          1

#define ICPE_CONFIG_EN_MASK                                        0x00000001
#define ICPE_CONFIG_EN_SHIFT                                       0

#define ICPE_NOP_COMMAND_NOP_MASK                                  0xffffffff
#define ICPE_NOP_COMMAND_NOP_SHIFT                                 0

#define ICPE_RESP_QUEUE_ADDRi_ARRAY_BASE                           0x80200e10
#define ICPE_RESP_QUEUE_ADDRi_ARRAY_START                          0
#define ICPE_RESP_QUEUE_ADDRi_ARRAY_END                            7
#define ICPE_RESP_QUEUE_ADDRi_ARRAY_ELEMENT_SIZE                   32

#define ICPE_RESP_QUEUE_ADDRi_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDRi_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDRi_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDRi_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR0_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR0_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR0_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR0_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR1_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR1_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR1_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR1_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR2_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR2_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR2_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR2_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR3_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR3_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR3_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR3_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR4_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR4_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR4_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR4_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR5_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR5_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR5_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR5_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR6_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR6_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR6_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR6_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_ADDR7_RESPQ_PINDEX_ADDR_MASK               0xffff0000
#define ICPE_RESP_QUEUE_ADDR7_RESPQ_PINDEX_ADDR_SHIFT              16

#define ICPE_RESP_QUEUE_ADDR7_RESPQ_ADDR_MASK                      0x0000ffff
#define ICPE_RESP_QUEUE_ADDR7_RESPQ_ADDR_SHIFT                     0

#define ICPE_RESP_QUEUE_WR_PTRi_ARRAY_BASE                         0x80200e30
#define ICPE_RESP_QUEUE_WR_PTRi_ARRAY_START                        0
#define ICPE_RESP_QUEUE_WR_PTRi_ARRAY_END                          7
#define ICPE_RESP_QUEUE_WR_PTRi_ARRAY_ELEMENT_SIZE                 32

#define ICPE_RESP_QUEUE_WR_PTRi_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTRi_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTRi_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTRi_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR0_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR0_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR0_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR0_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR1_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR1_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR1_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR1_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR2_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR2_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR2_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR2_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR3_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR3_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR3_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR3_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR4_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR4_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR4_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR4_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR5_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR5_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR5_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR5_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR6_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR6_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR6_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR6_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_WR_PTR7_reserved0_MASK                     0xffff0000
#define ICPE_RESP_QUEUE_WR_PTR7_reserved0_SHIFT                    16

#define ICPE_RESP_QUEUE_WR_PTR7_WR_PTR_MASK                        0x0000ffff
#define ICPE_RESP_QUEUE_WR_PTR7_WR_PTR_SHIFT                       0

#define ICPE_RESP_QUEUE_PINDEXi_ARRAY_BASE                         0x80200e50
#define ICPE_RESP_QUEUE_PINDEXi_ARRAY_START                        0
#define ICPE_RESP_QUEUE_PINDEXi_ARRAY_END                          7
#define ICPE_RESP_QUEUE_PINDEXi_ARRAY_ELEMENT_SIZE                 32

#define ICPE_RESP_QUEUE_PINDEXi_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEXi_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEXi_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEXi_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX0_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX0_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX0_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX0_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX1_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX1_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX1_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX1_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX2_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX2_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX2_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX2_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX3_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX3_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX3_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX3_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX4_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX4_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX4_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX4_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX5_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX5_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX5_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX5_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX6_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX6_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX6_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX6_reserved0_SHIFT                    0

#define ICPE_RESP_QUEUE_PINDEX7_PINDEX_MASK                        0xffff0000
#define ICPE_RESP_QUEUE_PINDEX7_PINDEX_SHIFT                       16

#define ICPE_RESP_QUEUE_PINDEX7_reserved0_MASK                     0x0000ffff
#define ICPE_RESP_QUEUE_PINDEX7_reserved0_SHIFT                    0

#define PFR_CONTROL_reserved0_MASK                                 0xfc000000
#define PFR_CONTROL_reserved0_SHIFT                                26

#define PFR_CONTROL_STAT_CNT_COR_EN_MASK                           0x02000000
#define PFR_CONTROL_STAT_CNT_COR_EN_SHIFT                          25

#define PFR_CONTROL_STAT_CNT_SAT_EN_MASK                           0x01000000
#define PFR_CONTROL_STAT_CNT_SAT_EN_SHIFT                          24

#define PFR_CONTROL_PUSH_TIMER_MASK                                0x00ff0000
#define PFR_CONTROL_PUSH_TIMER_SHIFT                               16

#define PFR_CONTROL_INTERRUPT_THRESHOLD_MASK                       0x0000ff00
#define PFR_CONTROL_INTERRUPT_THRESHOLD_SHIFT                      8

#define PFR_CONTROL_reserved1_MASK                                 0x000000f0
#define PFR_CONTROL_reserved1_SHIFT                                4

#define PFR_CONTROL_RQ_PRODUCER_IDX_WR_EN_MASK                     0x00000008
#define PFR_CONTROL_RQ_PRODUCER_IDX_WR_EN_SHIFT                    3

#define PFR_CONTROL_reserved2_MASK                                 0x00000004
#define PFR_CONTROL_reserved2_SHIFT                                2

#define PFR_CONTROL_SVQP_DROP_EN_MASK                              0x00000002
#define PFR_CONTROL_SVQP_DROP_EN_SHIFT                             1

#define PFR_CONTROL_PFR_EN_MASK                                    0x00000001
#define PFR_CONTROL_PFR_EN_SHIFT                                   0

#define PFR_WQ_FWD_INFO_OFFSET_reserved0_MASK                      0xffff0000
#define PFR_WQ_FWD_INFO_OFFSET_reserved0_SHIFT                     16

#define PFR_WQ_FWD_INFO_OFFSET_WQ_FW_OFFSET_MASK                   0x0000ffff
#define PFR_WQ_FWD_INFO_OFFSET_WQ_FW_OFFSET_SHIFT                  0

#define PFR_RXQ_TO_TXQ_STATUS_reserved0_MASK                       0xffffffc0
#define PFR_RXQ_TO_TXQ_STATUS_reserved0_SHIFT                      6

#define PFR_RXQ_TO_TXQ_STATUS_INSERT_BRCM_TAG_MASK                 0x00000030
#define PFR_RXQ_TO_TXQ_STATUS_INSERT_BRCM_TAG_SHIFT                4

#define PFR_RXQ_TO_TXQ_STATUS_APPEND_CRC_MASK                      0x00000008
#define PFR_RXQ_TO_TXQ_STATUS_APPEND_CRC_SHIFT                     3

#define PFR_RXQ_TO_TXQ_STATUS_reserved1_MASK                       0x00000004
#define PFR_RXQ_TO_TXQ_STATUS_reserved1_SHIFT                      2

#define PFR_RXQ_TO_TXQ_STATUS_INSERT_VLAN_TAG_MASK                 0x00000003
#define PFR_RXQ_TO_TXQ_STATUS_INSERT_VLAN_TAG_SHIFT                0

#define PFR_ACQ_TO_TXQ_STATUS_reserved0_MASK                       0xffffffc0
#define PFR_ACQ_TO_TXQ_STATUS_reserved0_SHIFT                      6

#define PFR_ACQ_TO_TXQ_STATUS_INSERT_BRCM_TAG_MASK                 0x00000030
#define PFR_ACQ_TO_TXQ_STATUS_INSERT_BRCM_TAG_SHIFT                4

#define PFR_ACQ_TO_TXQ_STATUS_APPEND_CRC_MASK                      0x00000008
#define PFR_ACQ_TO_TXQ_STATUS_APPEND_CRC_SHIFT                     3

#define PFR_ACQ_TO_TXQ_STATUS_reserved1_MASK                       0x00000004
#define PFR_ACQ_TO_TXQ_STATUS_reserved1_SHIFT                      2

#define PFR_ACQ_TO_TXQ_STATUS_INSERT_VLAN_TAG_MASK                 0x00000003
#define PFR_ACQ_TO_TXQ_STATUS_INSERT_VLAN_TAG_SHIFT                0

#define PFR_RXQ_DISCARD_COUNTER_i_ARRAY_BASE                       0x80201010
#define PFR_RXQ_DISCARD_COUNTER_i_ARRAY_START                      0
#define PFR_RXQ_DISCARD_COUNTER_i_ARRAY_END                        1
#define PFR_RXQ_DISCARD_COUNTER_i_ARRAY_ELEMENT_SIZE               32

#define PFR_RXQ_DISCARD_COUNTER_i_COUNT_MASK                       0xffffffff
#define PFR_RXQ_DISCARD_COUNTER_i_COUNT_SHIFT                      0

#define PFR_RXQ_DISCARD_COUNTER_i_COUNT_MASK                       0xffffffff
#define PFR_RXQ_DISCARD_COUNTER_i_COUNT_SHIFT                      0

#define PFR_FWQ_DISCARD_COUNTER_i_ARRAY_BASE                       0x80201018
#define PFR_FWQ_DISCARD_COUNTER_i_ARRAY_START                      0
#define PFR_FWQ_DISCARD_COUNTER_i_ARRAY_END                        6
#define PFR_FWQ_DISCARD_COUNTER_i_ARRAY_ELEMENT_SIZE               32

#define PFR_FWQ_DISCARD_COUNTER_i_COUNT_MASK                       0xffffffff
#define PFR_FWQ_DISCARD_COUNTER_i_COUNT_SHIFT                      0

#define PFR_FWQ_DISCARD_COUNTER_i_COUNT_MASK                       0xffffffff
#define PFR_FWQ_DISCARD_COUNTER_i_COUNT_SHIFT                      0

#define PFR_SW_REQUESTED_DISCARD_COUNTER_COUNT_MASK                0xffffffff
#define PFR_SW_REQUESTED_DISCARD_COUNTER_COUNT_SHIFT               0

#define PFR_STQ_STALL_COUNTER_i_ARRAY_BASE                         0x80201038
#define PFR_STQ_STALL_COUNTER_i_ARRAY_START                        0
#define PFR_STQ_STALL_COUNTER_i_ARRAY_END                          6
#define PFR_STQ_STALL_COUNTER_i_ARRAY_ELEMENT_SIZE                 32

#define PFR_STQ_STALL_COUNTER_i_COUNT_MASK                         0xffffffff
#define PFR_STQ_STALL_COUNTER_i_COUNT_SHIFT                        0

#define PFR_STQ_STALL_COUNTER_i_COUNT_MASK                         0xffffffff
#define PFR_STQ_STALL_COUNTER_i_COUNT_SHIFT                        0

#define PFR_STQ_WATERMARK_COUNTER_i_ARRAY_BASE                     0x80201054
#define PFR_STQ_WATERMARK_COUNTER_i_ARRAY_START                    0
#define PFR_STQ_WATERMARK_COUNTER_i_ARRAY_END                      6
#define PFR_STQ_WATERMARK_COUNTER_i_ARRAY_ELEMENT_SIZE             32

#define PFR_STQ_WATERMARK_COUNTER_i_COUNT_MASK                     0xffffffff
#define PFR_STQ_WATERMARK_COUNTER_i_COUNT_SHIFT                    0

#define PFR_STQ_WATERMARK_COUNTER_i_COUNT_MASK                     0xffffffff
#define PFR_STQ_WATERMARK_COUNTER_i_COUNT_SHIFT                    0

#define PFR_STALL_COUNTER_COUNT_MASK                               0xffffffff
#define PFR_STALL_COUNTER_COUNT_SHIFT                              0

#define PFR_WATERMARK_COUNTER_COUNT_MASK                           0xffffffff
#define PFR_WATERMARK_COUNTER_COUNT_SHIFT                          0

#define PFR_RSB_PREPEND_CONTROL_reserved0_MASK                     0xf8000000
#define PFR_RSB_PREPEND_CONTROL_reserved0_SHIFT                    27

#define PFR_RSB_PREPEND_CONTROL_RXQ1_RSB_SIZE_MASK                 0x06000000
#define PFR_RSB_PREPEND_CONTROL_RXQ1_RSB_SIZE_SHIFT                25

#define PFR_RSB_PREPEND_CONTROL_RXQ0_RSB_SIZE_MASK                 0x01800000
#define PFR_RSB_PREPEND_CONTROL_RXQ0_RSB_SIZE_SHIFT                23

#define PFR_RSB_PREPEND_CONTROL_FWQ6_RSB_SIZE_MASK                 0x00600000
#define PFR_RSB_PREPEND_CONTROL_FWQ6_RSB_SIZE_SHIFT                21

#define PFR_RSB_PREPEND_CONTROL_FWQ5_RSB_SIZE_MASK                 0x00180000
#define PFR_RSB_PREPEND_CONTROL_FWQ5_RSB_SIZE_SHIFT                19

#define PFR_RSB_PREPEND_CONTROL_FWQ4_RSB_SIZE_MASK                 0x00060000
#define PFR_RSB_PREPEND_CONTROL_FWQ4_RSB_SIZE_SHIFT                17

#define PFR_RSB_PREPEND_CONTROL_FWQ3_RSB_SIZE_MASK                 0x00018000
#define PFR_RSB_PREPEND_CONTROL_FWQ3_RSB_SIZE_SHIFT                15

#define PFR_RSB_PREPEND_CONTROL_FWQ2_RSB_SIZE_MASK                 0x00006000
#define PFR_RSB_PREPEND_CONTROL_FWQ2_RSB_SIZE_SHIFT                13

#define PFR_RSB_PREPEND_CONTROL_FWQ1_RSB_SIZE_MASK                 0x00001800
#define PFR_RSB_PREPEND_CONTROL_FWQ1_RSB_SIZE_SHIFT                11

#define PFR_RSB_PREPEND_CONTROL_FWQ0_RSB_SIZE_MASK                 0x00000600
#define PFR_RSB_PREPEND_CONTROL_FWQ0_RSB_SIZE_SHIFT                9

#define PFR_RSB_PREPEND_CONTROL_RXQ_RSB_EN_MASK                    0x00000180
#define PFR_RSB_PREPEND_CONTROL_RXQ_RSB_EN_SHIFT                   7

#define PFR_RSB_PREPEND_CONTROL_FWQ_RSB_EN_MASK                    0x0000007f
#define PFR_RSB_PREPEND_CONTROL_FWQ_RSB_EN_SHIFT                   0

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_BASE           0x80201084
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_START          0
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_END            1
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_ELEMENT_SIZE   32

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffff8
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      3

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000004
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          2

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RSB_RING_EN_MASK     0x00000002
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RSB_RING_EN_SHIFT    1

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffff8
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      3

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000004
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          2

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RSB_RING_EN_MASK     0x00000002
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RSB_RING_EN_SHIFT    1

#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_RXQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_BASE        0x8020108c
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_START       0
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_END         1
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_BASE       0x80201094
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_START      0
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_END        1
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_RXQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_BASE    0x8020109c
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_START   0
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_END     1
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_BASE   0x802010a4
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_START  0
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_END    1
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_RXQ_RSB_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_BASE          0x802010ac
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_START         0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_END           1
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_ELEMENT_SIZE  32

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_BASE 0x802010b4
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_START 0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_END 1
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_BASE 0x802010bc
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_START 0
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_END 1
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_RXQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_BASE           0x802010c4
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_START          0
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_END            6
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_ELEMENT_SIZE   32

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffffc
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      2

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000002
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          1

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffffc
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      2

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000002
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          1

#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_FWQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_BASE        0x802010e0
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_START       0
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_END         6
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_BASE       0x802010fc
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_START      0
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_END        6
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_FWQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_BASE          0x80201118
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_START         0
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_END           6
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_ELEMENT_SIZE  32

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_BASE 0x80201134
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_START 0
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_END 6
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_BASE 0x80201150
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_START 0
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_END 6
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_FWQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_BASE           0x8020116c
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_START          0
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_END            6
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_ARRAY_ELEMENT_SIZE   32

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffffc
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      2

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000002
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          1

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_MASK       0xfffffffc
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_reserved0_SHIFT      2

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_MASK           0x00000002
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_FLUSH_SHIFT          1

#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_MASK         0x00000001
#define PFR_STQ_DMA_DESCRIPTOR_RING_CONTROL_i_RING_EN_SHIFT        0

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_BASE        0x80201188
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_START       0
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_END         6
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_MASK 0xffffffff
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_LOW_i_DDR_START_ADDR_LOW_SHIFT 0

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_BASE       0x802011a4
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_START      0
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_END        6
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_MASK   0xffffff00
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_reserved0_SHIFT  8

#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_MASK 0x000000ff
#define PFR_STQ_DMA_DDR_RING_START_ADDRESS_HIGH_i_DDR_START_ADDR_HIGH_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_BASE          0x802011c0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_START         0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_END           6
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_ARRAY_ELEMENT_SIZE  32

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_MASK      0xfffffff0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_reserved0_SHIFT     4

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK 0x0000000f
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_BASE 0x802011dc
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_START 0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_END 6
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_MASK 0xffff0000
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_TIMEOUT_SHIFT 16

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_MASK 0x0000ffff
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_INTERRUPT_CONTROL_i_INTR_THRESHOLD_SHIFT 0

#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_ARRAY_BASE 0x802011f8
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_ARRAY_START 0
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_ARRAY_END 6
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_ARRAY_ELEMENT_SIZE 32

#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_reserved0_MASK 0xffff0000
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_reserved0_SHIFT 16

#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_BP_THRESHOLD_MASK 0x0000ffff
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_BP_THRESHOLD_SHIFT 0

#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_reserved0_MASK 0xffff0000
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_reserved0_SHIFT 16

#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_BP_THRESHOLD_MASK 0x0000ffff
#define PFR_STQ_DESCRIPTOR_RING_BACKPRESSURE_THRESHOLD_i_BP_THRESHOLD_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_BASE 0x80201214
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_START 0
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_END 6
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_ARRAY_ELEMENT_SIZE 32

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_MASK 0xffff0000
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_reserved0_SHIFT 16

#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_MASK 0x0000ffff
#define PFR_STQ_DMA_DDR_DESCRIPTOR_RING_WRITE_PUSH_TIMER_CONTROL_i_TIMEOUT_SHIFT 0

#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_BASE               0x80201230
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_START              0
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_END                6
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_CONSUMER_INDEX_SHIFT 16

#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_PRODUCER_INDEX_SHIFT 0

#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_CONSUMER_INDEX_SHIFT 16

#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_FWQ_DDR_RING_PRODUCER_INDEX_i_FWQ_PRODUCER_INDEX_SHIFT 0

#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_BASE               0x8020124c
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_START              0
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_END                6
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_FWQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_FWQ_CONSUMER_INDEX_SHIFT 0

#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_FWQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_FWQ_DDR_RING_CONSUMER_INDEX_i_FWQ_CONSUMER_INDEX_SHIFT 0

#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_BASE               0x80201268
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_START              0
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_END                6
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_CONSUMER_INDEX_SHIFT 16

#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_PRODUCER_INDEX_SHIFT 0

#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_CONSUMER_INDEX_SHIFT 16

#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_STQ_DDR_RING_PRODUCER_INDEX_i_STQ_PRODUCER_INDEX_SHIFT 0

#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_BASE               0x80201284
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_START              0
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_END                6
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_STQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_STQ_CONSUMER_INDEX_SHIFT 0

#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_STQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_STQ_DDR_RING_CONSUMER_INDEX_i_STQ_CONSUMER_INDEX_SHIFT 0

#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_BASE               0x802012a0
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_START              0
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_END                1
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_CONSUMER_INDEX_SHIFT 16

#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_PRODUCER_INDEX_SHIFT 0

#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_CONSUMER_INDEX_MASK  0xffff0000
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_CONSUMER_INDEX_SHIFT 16

#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_PRODUCER_INDEX_MASK  0x0000ffff
#define PFR_RXQ_DDR_RING_PRODUCER_INDEX_i_RXQ_PRODUCER_INDEX_SHIFT 0

#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_BASE               0x802012a8
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_START              0
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_END                1
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_RXQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_RXQ_CONSUMER_INDEX_SHIFT 0

#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_RXQ_CONSUMER_INDEX_MASK  0x0000ffff
#define PFR_RXQ_DDR_RING_CONSUMER_INDEX_i_RXQ_CONSUMER_INDEX_SHIFT 0

#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_MASK 0xffff0000
#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_SHIFT 16

#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_MASK 0x0000ff00
#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_SHIFT 8

#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_MASK 0x000000ff
#define PFR_FWQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_SHIFT 0

#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_MASK 0xffff0000
#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_SHIFT 16

#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_MASK 0x0000ff00
#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_SHIFT 8

#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_MASK 0x000000ff
#define PFR_STQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_SHIFT 0

#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_MASK 0xffff0000
#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_SHIFT 16

#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_MASK 0x0000ff00
#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_SHIFT 8

#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_MASK 0x000000ff
#define PFR_RXQ_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_SHIFT 0

#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_MASK 0xffff0000
#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_reserved0_SHIFT 16

#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_MASK 0x0000ff00
#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MAX_BURST_SIZE_SHIFT 8

#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_MASK 0x000000ff
#define PFR_RSB_DDR_DESCRIPTOR_RING_WRITE_BURST_CONTROL_WR_MIN_BURST_SIZE_SHIFT 0

#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_reserved0_MASK           0xfffffff8
#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_reserved0_SHIFT          3

#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_WCRR_TPOLL_MODE_MASK     0x00000004
#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_WCRR_TPOLL_MODE_SHIFT    2

#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_ARB_MODE_MASK            0x00000002
#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_ARB_MODE_SHIFT           1

#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_ARB_EN_MASK              0x00000001
#define PFR_DDR_DMA_WRITE_ARBITER_CONTROL_ARB_EN_SHIFT             0

#define PFR_RESPONSE_QUEUE_ADDRESS_i_ARRAY_BASE                    0x802012c4
#define PFR_RESPONSE_QUEUE_ADDRESS_i_ARRAY_START                   0
#define PFR_RESPONSE_QUEUE_ADDRESS_i_ARRAY_END                     1
#define PFR_RESPONSE_QUEUE_ADDRESS_i_ARRAY_ELEMENT_SIZE            32

#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_MASK            0xffff0000
#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_SHIFT           16

#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK                  0x0000ffff
#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT                 0

#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_MASK            0xffff0000
#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_SHIFT           16

#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK                  0x0000ffff
#define PFR_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT                 0

#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_BASE              0x802012cc
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_START             0
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_END               1
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_ELEMENT_SIZE      32

#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK          0xffff0000
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT         16

#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_MASK          0x0000ffff
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_SHIFT         0

#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK          0xffff0000
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT         16

#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_MASK          0x0000ffff
#define PFR_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_SHIFT         0

#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_BASE    0x802012d4
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_START   0
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_END     1
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE 32

#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_SHIFT 16

#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_SHIFT 0

#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_SHIFT 16

#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define PFR_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_SHIFT 0

#define SVQP_CONTROL_reserved0_MASK                                0xfffffff8
#define SVQP_CONTROL_reserved0_SHIFT                               3

#define SVQP_CONTROL_STAT_CNT_COR_EN_MASK                          0x00000004
#define SVQP_CONTROL_STAT_CNT_COR_EN_SHIFT                         2

#define SVQP_CONTROL_STAT_CNT_SAT_EN_MASK                          0x00000002
#define SVQP_CONTROL_STAT_CNT_SAT_EN_SHIFT                         1

#define SVQP_CONTROL_SVQP_EN_MASK                                  0x00000001
#define SVQP_CONTROL_SVQP_EN_SHIFT                                 0

#define SVQP_SHAPER_GLOBAL_CONFIG_reserved0_MASK                   0xfffff000
#define SVQP_SHAPER_GLOBAL_CONFIG_reserved0_SHIFT                  12

#define SVQP_SHAPER_GLOBAL_CONFIG_TOKEN_SIZE_EXP_MASK              0x00000e00
#define SVQP_SHAPER_GLOBAL_CONFIG_TOKEN_SIZE_EXP_SHIFT             9

#define SVQP_SHAPER_GLOBAL_CONFIG_T_REFRESH_MASK                   0x000001ff
#define SVQP_SHAPER_GLOBAL_CONFIG_T_REFRESH_SHIFT                  0

#define SVQP_SHAPER_CTRL_i_ARRAY_BASE                              0x80204008
#define SVQP_SHAPER_CTRL_i_ARRAY_START                             0
#define SVQP_SHAPER_CTRL_i_ARRAY_END                               19
#define SVQP_SHAPER_CTRL_i_ARRAY_ELEMENT_SIZE                      32

#define SVQP_SHAPER_CTRL_i_reserved0_MASK                          0xfffffff8
#define SVQP_SHAPER_CTRL_i_reserved0_SHIFT                         3

#define SVQP_SHAPER_CTRL_i_MAX_RATE_EN_MASK                        0x00000004
#define SVQP_SHAPER_CTRL_i_MAX_RATE_EN_SHIFT                       2

#define SVQP_SHAPER_CTRL_i_MIN_RATE_EN_MASK                        0x00000002
#define SVQP_SHAPER_CTRL_i_MIN_RATE_EN_SHIFT                       1

#define SVQP_SHAPER_CTRL_i_TWO_RATE_EN_MASK                        0x00000001
#define SVQP_SHAPER_CTRL_i_TWO_RATE_EN_SHIFT                       0

#define SVQP_SHAPER_CTRL_i_reserved0_MASK                          0xfffffff8
#define SVQP_SHAPER_CTRL_i_reserved0_SHIFT                         3

#define SVQP_SHAPER_CTRL_i_MAX_RATE_EN_MASK                        0x00000004
#define SVQP_SHAPER_CTRL_i_MAX_RATE_EN_SHIFT                       2

#define SVQP_SHAPER_CTRL_i_MIN_RATE_EN_MASK                        0x00000002
#define SVQP_SHAPER_CTRL_i_MIN_RATE_EN_SHIFT                       1

#define SVQP_SHAPER_CTRL_i_TWO_RATE_EN_MASK                        0x00000001
#define SVQP_SHAPER_CTRL_i_TWO_RATE_EN_SHIFT                       0

#define SVQP_SHAPER_CTRL_10_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_10_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_10_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_10_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_10_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_10_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_10_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_10_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_11_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_11_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_11_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_11_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_11_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_11_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_11_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_11_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_12_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_12_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_12_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_12_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_12_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_12_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_12_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_12_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_13_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_13_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_13_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_13_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_13_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_13_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_13_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_13_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_14_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_14_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_14_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_14_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_14_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_14_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_14_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_14_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_15_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_15_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_15_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_15_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_15_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_15_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_15_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_15_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_16_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_16_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_16_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_16_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_16_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_16_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_16_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_16_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_17_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_17_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_17_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_17_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_17_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_17_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_17_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_17_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_18_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_18_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_18_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_18_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_18_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_18_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_18_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_18_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_CTRL_19_reserved0_MASK                         0xfffffff8
#define SVQP_SHAPER_CTRL_19_reserved0_SHIFT                        3

#define SVQP_SHAPER_CTRL_19_MAX_RATE_EN_MASK                       0x00000004
#define SVQP_SHAPER_CTRL_19_MAX_RATE_EN_SHIFT                      2

#define SVQP_SHAPER_CTRL_19_MIN_RATE_EN_MASK                       0x00000002
#define SVQP_SHAPER_CTRL_19_MIN_RATE_EN_SHIFT                      1

#define SVQP_SHAPER_CTRL_19_TWO_RATE_EN_MASK                       0x00000001
#define SVQP_SHAPER_CTRL_19_TWO_RATE_EN_SHIFT                      0

#define SVQP_SHAPER_REFRESH_i_ARRAY_BASE                           0x80204100
#define SVQP_SHAPER_REFRESH_i_ARRAY_START                          0
#define SVQP_SHAPER_REFRESH_i_ARRAY_END                            19
#define SVQP_SHAPER_REFRESH_i_ARRAY_ELEMENT_SIZE                   32

#define SVQP_SHAPER_REFRESH_i_EIR_REFRESH_MASK                     0xffff0000
#define SVQP_SHAPER_REFRESH_i_EIR_REFRESH_SHIFT                    16

#define SVQP_SHAPER_REFRESH_i_CIR_REFRESH_MASK                     0x0000ffff
#define SVQP_SHAPER_REFRESH_i_CIR_REFRESH_SHIFT                    0

#define SVQP_SHAPER_REFRESH_i_EIR_REFRESH_MASK                     0xffff0000
#define SVQP_SHAPER_REFRESH_i_EIR_REFRESH_SHIFT                    16

#define SVQP_SHAPER_REFRESH_i_CIR_REFRESH_MASK                     0x0000ffff
#define SVQP_SHAPER_REFRESH_i_CIR_REFRESH_SHIFT                    0

#define SVQP_SHAPER_REFRESH_10_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_10_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_10_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_10_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_11_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_11_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_11_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_11_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_12_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_12_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_12_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_12_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_13_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_13_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_13_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_13_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_14_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_14_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_14_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_14_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_15_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_15_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_15_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_15_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_16_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_16_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_16_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_16_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_17_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_17_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_17_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_17_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_18_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_18_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_18_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_18_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_REFRESH_19_EIR_REFRESH_MASK                    0xffff0000
#define SVQP_SHAPER_REFRESH_19_EIR_REFRESH_SHIFT                   16

#define SVQP_SHAPER_REFRESH_19_CIR_REFRESH_MASK                    0x0000ffff
#define SVQP_SHAPER_REFRESH_19_CIR_REFRESH_SHIFT                   0

#define SVQP_SHAPER_EBS_THRESHOLD_i_ARRAY_BASE                     0x80204200
#define SVQP_SHAPER_EBS_THRESHOLD_i_ARRAY_START                    0
#define SVQP_SHAPER_EBS_THRESHOLD_i_ARRAY_END                      19
#define SVQP_SHAPER_EBS_THRESHOLD_i_ARRAY_ELEMENT_SIZE             32

#define SVQP_SHAPER_EBS_THRESHOLD_i_reserved0_MASK                 0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_i_reserved0_SHIFT                29

#define SVQP_SHAPER_EBS_THRESHOLD_i_EBS_THRESHOLD_MASK             0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_i_EBS_THRESHOLD_SHIFT            0

#define SVQP_SHAPER_EBS_THRESHOLD_i_reserved0_MASK                 0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_i_reserved0_SHIFT                29

#define SVQP_SHAPER_EBS_THRESHOLD_i_EBS_THRESHOLD_MASK             0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_i_EBS_THRESHOLD_SHIFT            0

#define SVQP_SHAPER_EBS_THRESHOLD_10_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_10_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_10_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_10_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_11_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_11_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_11_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_11_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_12_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_12_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_12_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_12_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_13_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_13_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_13_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_13_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_14_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_14_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_14_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_14_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_15_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_15_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_15_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_15_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_16_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_16_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_16_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_16_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_17_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_17_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_17_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_17_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_18_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_18_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_18_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_18_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EBS_THRESHOLD_19_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_EBS_THRESHOLD_19_reserved0_SHIFT               29

#define SVQP_SHAPER_EBS_THRESHOLD_19_EBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_EBS_THRESHOLD_19_EBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_i_ARRAY_BASE                     0x80204300
#define SVQP_SHAPER_CBS_THRESHOLD_i_ARRAY_START                    0
#define SVQP_SHAPER_CBS_THRESHOLD_i_ARRAY_END                      19
#define SVQP_SHAPER_CBS_THRESHOLD_i_ARRAY_ELEMENT_SIZE             32

#define SVQP_SHAPER_CBS_THRESHOLD_i_reserved0_MASK                 0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_i_reserved0_SHIFT                29

#define SVQP_SHAPER_CBS_THRESHOLD_i_CBS_THRESHOLD_MASK             0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_i_CBS_THRESHOLD_SHIFT            0

#define SVQP_SHAPER_CBS_THRESHOLD_i_reserved0_MASK                 0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_i_reserved0_SHIFT                29

#define SVQP_SHAPER_CBS_THRESHOLD_i_CBS_THRESHOLD_MASK             0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_i_CBS_THRESHOLD_SHIFT            0

#define SVQP_SHAPER_CBS_THRESHOLD_10_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_10_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_10_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_10_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_11_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_11_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_11_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_11_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_12_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_12_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_12_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_12_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_13_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_13_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_13_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_13_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_14_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_14_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_14_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_14_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_15_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_15_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_15_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_15_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_16_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_16_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_16_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_16_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_17_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_17_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_17_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_17_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_18_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_18_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_18_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_18_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_CBS_THRESHOLD_19_reserved0_MASK                0xe0000000
#define SVQP_SHAPER_CBS_THRESHOLD_19_reserved0_SHIFT               29

#define SVQP_SHAPER_CBS_THRESHOLD_19_CBS_THRESHOLD_MASK            0x1fffffff
#define SVQP_SHAPER_CBS_THRESHOLD_19_CBS_THRESHOLD_SHIFT           0

#define SVQP_SHAPER_EIR_COUNT_i_ARRAY_BASE                         0x80204400
#define SVQP_SHAPER_EIR_COUNT_i_ARRAY_START                        0
#define SVQP_SHAPER_EIR_COUNT_i_ARRAY_END                          19
#define SVQP_SHAPER_EIR_COUNT_i_ARRAY_ELEMENT_SIZE                 32

#define SVQP_SHAPER_EIR_COUNT_i_reserved0_MASK                     0xe0000000
#define SVQP_SHAPER_EIR_COUNT_i_reserved0_SHIFT                    29

#define SVQP_SHAPER_EIR_COUNT_i_EIR_BUCKET_COUNT_MASK              0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_i_EIR_BUCKET_COUNT_SHIFT             0

#define SVQP_SHAPER_EIR_COUNT_i_reserved0_MASK                     0xe0000000
#define SVQP_SHAPER_EIR_COUNT_i_reserved0_SHIFT                    29

#define SVQP_SHAPER_EIR_COUNT_i_EIR_BUCKET_COUNT_MASK              0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_i_EIR_BUCKET_COUNT_SHIFT             0

#define SVQP_SHAPER_EIR_COUNT_10_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_10_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_10_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_10_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_11_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_11_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_11_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_11_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_12_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_12_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_12_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_12_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_13_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_13_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_13_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_13_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_14_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_14_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_14_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_14_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_15_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_15_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_15_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_15_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_16_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_16_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_16_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_16_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_17_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_17_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_17_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_17_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_18_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_18_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_18_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_18_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_EIR_COUNT_19_reserved0_MASK                    0xe0000000
#define SVQP_SHAPER_EIR_COUNT_19_reserved0_SHIFT                   29

#define SVQP_SHAPER_EIR_COUNT_19_EIR_BUCKET_COUNT_MASK             0x1fffffff
#define SVQP_SHAPER_EIR_COUNT_19_EIR_BUCKET_COUNT_SHIFT            0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_ARRAY_BASE              0x80204500
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_ARRAY_START             0
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_ARRAY_END               19
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_ARRAY_ELEMENT_SIZE      32

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_BELOW_MIN_RATE_MASK     0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_BELOW_MIN_RATE_SHIFT    31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IS_GREEN_MASK           0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IS_GREEN_SHIFT          30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IN_PROFILE_MASK         0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IN_PROFILE_SHIFT        29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_CIR_BUCKET_COUNT_MASK   0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_CIR_BUCKET_COUNT_SHIFT  0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_BELOW_MIN_RATE_MASK     0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_BELOW_MIN_RATE_SHIFT    31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IS_GREEN_MASK           0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IS_GREEN_SHIFT          30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IN_PROFILE_MASK         0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_IN_PROFILE_SHIFT        29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_CIR_BUCKET_COUNT_MASK   0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_i_CIR_BUCKET_COUNT_SHIFT  0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_10_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_11_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_12_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_13_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_14_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_15_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_16_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_17_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_18_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_BELOW_MIN_RATE_MASK    0x80000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_BELOW_MIN_RATE_SHIFT   31

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_IS_GREEN_MASK          0x40000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_IS_GREEN_SHIFT         30

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_IN_PROFILE_MASK        0x20000000
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_IN_PROFILE_SHIFT       29

#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_CIR_BUCKET_COUNT_MASK  0x1fffffff
#define SVQP_SHAPER_CIR_COUNT_AND_STATUS_19_CIR_BUCKET_COUNT_SHIFT 0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_ARRAY_BASE               0x80204600
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_ARRAY_START              0
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_ARRAY_END                19
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_ARRAY_ELEMENT_SIZE       32

#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_reserved0_MASK           0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_reserved0_SHIFT          8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_OVERHEAD_MASK            0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_OVERHEAD_SHIFT           0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_reserved0_MASK           0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_reserved0_SHIFT          8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_OVERHEAD_MASK            0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_i_OVERHEAD_SHIFT           0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_10_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_10_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_10_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_10_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_11_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_11_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_11_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_11_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_12_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_12_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_12_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_12_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_13_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_13_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_13_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_13_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_14_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_14_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_14_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_14_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_15_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_15_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_15_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_15_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_16_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_16_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_16_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_16_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_17_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_17_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_17_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_17_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_18_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_18_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_18_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_18_OVERHEAD_SHIFT          0

#define SVQP_SHAPER_OVERHEAD_CORRECTION_19_reserved0_MASK          0xffffff00
#define SVQP_SHAPER_OVERHEAD_CORRECTION_19_reserved0_SHIFT         8

#define SVQP_SHAPER_OVERHEAD_CORRECTION_19_OVERHEAD_MASK           0x000000ff
#define SVQP_SHAPER_OVERHEAD_CORRECTION_19_OVERHEAD_SHIFT          0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_ARRAY_BASE                0x80204700
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_ARRAY_START               0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_ARRAY_END                 19
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_ARRAY_ELEMENT_SIZE        32

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_reserved0_MASK            0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_reserved0_SHIFT           6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_WEIGHT_MASK               0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_WEIGHT_SHIFT              0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_reserved0_MASK            0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_reserved0_SHIFT           6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_WEIGHT_MASK               0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_i_WEIGHT_SHIFT              0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_10_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_10_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_10_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_10_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_11_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_11_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_11_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_11_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_12_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_12_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_12_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_12_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_13_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_13_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_13_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_13_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_14_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_14_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_14_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_14_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_15_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_15_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_15_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_15_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_16_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_16_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_16_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_16_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_17_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_17_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_17_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_17_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_18_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_18_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_18_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_18_WEIGHT_SHIFT             0

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_19_reserved0_MASK           0xffffffc0
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_19_reserved0_SHIFT          6

#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_19_WEIGHT_MASK              0x0000003f
#define SVQP_SVQ_RING_GROUP_ARB_WEIGHT_19_WEIGHT_SHIFT             0

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_ARRAY_BASE                 0x80204800
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_ARRAY_START                0
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_ARRAY_END                  8
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_ARRAY_ELEMENT_SIZE         32

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_reserved0_MASK             0xfffe0000
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_reserved0_SHIFT            17

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_RATE_EN_MASK           0x00010000
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_RATE_EN_SHIFT          16

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_REFRESH_MASK           0x0000ffff
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_REFRESH_SHIFT          0

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_reserved0_MASK             0xfffe0000
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_reserved0_SHIFT            17

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_RATE_EN_MASK           0x00010000
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_RATE_EN_SHIFT          16

#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_REFRESH_MASK           0x0000ffff
#define SVQP_SVG_MAX_RATE_METER_CTRL0_i_MAX_REFRESH_SHIFT          0

#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_ARRAY_BASE                 0x80204840
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_ARRAY_START                0
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_ARRAY_END                  8
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_ARRAY_ELEMENT_SIZE         32

#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_reserved0_MASK             0xe0000000
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_reserved0_SHIFT            29

#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_MAX_THRESHOLD_MASK         0x1fffffff
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_MAX_THRESHOLD_SHIFT        0

#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_reserved0_MASK             0xe0000000
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_reserved0_SHIFT            29

#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_MAX_THRESHOLD_MASK         0x1fffffff
#define SVQP_SVG_MAX_RATE_METER_CTRL1_i_MAX_THRESHOLD_SHIFT        0

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_ARRAY_BASE                0x80204880
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_ARRAY_START               0
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_ARRAY_END                 8
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_ARRAY_ELEMENT_SIZE        32

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_reserved0_MASK            0xc0000000
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_reserved0_SHIFT           30

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_IN_PROFILE_MASK           0x20000000
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_IN_PROFILE_SHIFT          29

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_BUCKET_COUNT_MASK         0x1fffffff
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_BUCKET_COUNT_SHIFT        0

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_reserved0_MASK            0xc0000000
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_reserved0_SHIFT           30

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_IN_PROFILE_MASK           0x20000000
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_IN_PROFILE_SHIFT          29

#define SVQP_SVG_MAX_RATE_METER_STATUS_i_BUCKET_COUNT_MASK         0x1fffffff
#define SVQP_SVG_MAX_RATE_METER_STATUS_i_BUCKET_COUNT_SHIFT        0

#define SVQP_SVG_ARB_MAPPING_i_ARRAY_BASE                          0x802048c0
#define SVQP_SVG_ARB_MAPPING_i_ARRAY_START                         0
#define SVQP_SVG_ARB_MAPPING_i_ARRAY_END                           8
#define SVQP_SVG_ARB_MAPPING_i_ARRAY_ELEMENT_SIZE                  32

#define SVQP_SVG_ARB_MAPPING_i_reserved0_MASK                      0xfff00000
#define SVQP_SVG_ARB_MAPPING_i_reserved0_SHIFT                     20

#define SVQP_SVG_ARB_MAPPING_i_SVQ_EN_MASK                         0x000fffff
#define SVQP_SVG_ARB_MAPPING_i_SVQ_EN_SHIFT                        0

#define SVQP_SVG_ARB_MAPPING_i_reserved0_MASK                      0xfff00000
#define SVQP_SVG_ARB_MAPPING_i_reserved0_SHIFT                     20

#define SVQP_SVG_ARB_MAPPING_i_SVQ_EN_MASK                         0x000fffff
#define SVQP_SVG_ARB_MAPPING_i_SVQ_EN_SHIFT                        0

#define SVQP_SVG_ARB_CTRL_i_ARRAY_BASE                             0x80204940
#define SVQP_SVG_ARB_CTRL_i_ARRAY_START                            0
#define SVQP_SVG_ARB_CTRL_i_ARRAY_END                              8
#define SVQP_SVG_ARB_CTRL_i_ARRAY_ELEMENT_SIZE                     32

#define SVQP_SVG_ARB_CTRL_i_reserved0_MASK                         0xfffffff8
#define SVQP_SVG_ARB_CTRL_i_reserved0_SHIFT                        3

#define SVQP_SVG_ARB_CTRL_i_ARB_MODE_MASK                          0x00000006
#define SVQP_SVG_ARB_CTRL_i_ARB_MODE_SHIFT                         1

#define SVQP_SVG_ARB_CTRL_i_ARB_EN_MASK                            0x00000001
#define SVQP_SVG_ARB_CTRL_i_ARB_EN_SHIFT                           0

#define SVQP_SVG_ARB_CTRL_i_reserved0_MASK                         0xfffffff8
#define SVQP_SVG_ARB_CTRL_i_reserved0_SHIFT                        3

#define SVQP_SVG_ARB_CTRL_i_ARB_MODE_MASK                          0x00000006
#define SVQP_SVG_ARB_CTRL_i_ARB_MODE_SHIFT                         1

#define SVQP_SVG_ARB_CTRL_i_ARB_EN_MASK                            0x00000001
#define SVQP_SVG_ARB_CTRL_i_ARB_EN_SHIFT                           0

#define SVQP_SVQ_DESC_RING_CTRL_i_ARRAY_BASE                       0x80204a00
#define SVQP_SVQ_DESC_RING_CTRL_i_ARRAY_START                      0
#define SVQP_SVQ_DESC_RING_CTRL_i_ARRAY_END                        19
#define SVQP_SVQ_DESC_RING_CTRL_i_ARRAY_ELEMENT_SIZE               32

#define SVQP_SVQ_DESC_RING_CTRL_i_reserved0_MASK                   0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_i_reserved0_SHIFT                  2

#define SVQP_SVQ_DESC_RING_CTRL_i_FLUSH_MASK                       0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_i_FLUSH_SHIFT                      1

#define SVQP_SVQ_DESC_RING_CTRL_i_RING_EN_MASK                     0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_i_RING_EN_SHIFT                    0

#define SVQP_SVQ_DESC_RING_CTRL_i_reserved0_MASK                   0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_i_reserved0_SHIFT                  2

#define SVQP_SVQ_DESC_RING_CTRL_i_FLUSH_MASK                       0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_i_FLUSH_SHIFT                      1

#define SVQP_SVQ_DESC_RING_CTRL_i_RING_EN_MASK                     0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_i_RING_EN_SHIFT                    0

#define SVQP_SVQ_DESC_RING_CTRL_10_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_10_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_10_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_10_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_10_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_10_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_11_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_11_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_11_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_11_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_11_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_11_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_12_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_12_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_12_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_12_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_12_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_12_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_13_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_13_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_13_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_13_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_13_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_13_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_14_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_14_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_14_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_14_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_14_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_14_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_15_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_15_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_15_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_15_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_15_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_15_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_16_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_16_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_16_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_16_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_16_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_16_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_17_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_17_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_17_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_17_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_17_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_17_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_18_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_18_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_18_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_18_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_18_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_18_RING_EN_SHIFT                   0

#define SVQP_SVQ_DESC_RING_CTRL_19_reserved0_MASK                  0xfffffffc
#define SVQP_SVQ_DESC_RING_CTRL_19_reserved0_SHIFT                 2

#define SVQP_SVQ_DESC_RING_CTRL_19_FLUSH_MASK                      0x00000002
#define SVQP_SVQ_DESC_RING_CTRL_19_FLUSH_SHIFT                     1

#define SVQP_SVQ_DESC_RING_CTRL_19_RING_EN_MASK                    0x00000001
#define SVQP_SVQ_DESC_RING_CTRL_19_RING_EN_SHIFT                   0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_ARRAY_BASE     0x80204b00
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_ARRAY_START    0
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_ARRAY_END      19
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE 32

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_i_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_10_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_10_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_10_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_10_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_11_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_11_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_11_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_11_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_12_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_12_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_12_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_12_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_13_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_13_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_13_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_13_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_14_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_14_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_14_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_14_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_15_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_15_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_15_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_15_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_16_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_16_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_16_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_16_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_17_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_17_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_17_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_17_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_18_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_18_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_18_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_18_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_19_PRODUCER_INDEX_MASK 0xffff0000
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_19_PRODUCER_INDEX_SHIFT 16

#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_19_CONSUMER_INDEX_MASK 0x0000ffff
#define SVQP_SVQ_DDR_RING_PRODUCER_CONSUMER_INDEX_19_CONSUMER_INDEX_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_ARRAY_BASE               0x80204c00
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_ARRAY_START              0
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_ARRAY_END                19
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_ARRAY_ELEMENT_SIZE       32

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_i_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_10_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_10_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_11_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_11_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_12_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_12_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_13_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_13_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_14_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_14_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_15_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_15_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_16_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_16_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_17_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_17_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_18_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_18_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_LO_19_DDR_START_ADDR_31_00_MASK 0xffffffff
#define SVQP_SVQ_DDR_RING_START_ADDR_LO_19_DDR_START_ADDR_31_00_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_ARRAY_BASE               0x80204d00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_ARRAY_START              0
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_ARRAY_END                19
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_ARRAY_ELEMENT_SIZE       32

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_reserved0_MASK           0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_reserved0_SHIFT          8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_reserved0_MASK           0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_reserved0_SHIFT          8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_i_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_10_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_10_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_10_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_10_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_11_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_11_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_11_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_11_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_12_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_12_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_12_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_12_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_13_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_13_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_13_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_13_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_14_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_14_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_14_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_14_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_15_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_15_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_15_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_15_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_16_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_16_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_16_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_16_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_17_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_17_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_17_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_17_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_18_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_18_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_18_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_18_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_19_reserved0_MASK          0xffffff00
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_19_reserved0_SHIFT         8

#define SVQP_SVQ_DDR_RING_START_ADDR_HI_19_DDR_START_ADDR_39_32_MASK 0x000000ff
#define SVQP_SVQ_DDR_RING_START_ADDR_HI_19_DDR_START_ADDR_39_32_SHIFT 0

#define SVQP_SVQ_DDR_RING_SIZE_i_ARRAY_BASE                        0x80204e00
#define SVQP_SVQ_DDR_RING_SIZE_i_ARRAY_START                       0
#define SVQP_SVQ_DDR_RING_SIZE_i_ARRAY_END                         19
#define SVQP_SVQ_DDR_RING_SIZE_i_ARRAY_ELEMENT_SIZE                32

#define SVQP_SVQ_DDR_RING_SIZE_i_reserved0_MASK                    0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_i_reserved0_SHIFT                   4

#define SVQP_SVQ_DDR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK           0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT          0

#define SVQP_SVQ_DDR_RING_SIZE_i_reserved0_MASK                    0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_i_reserved0_SHIFT                   4

#define SVQP_SVQ_DDR_RING_SIZE_i_DDR_DESC_RING_SIZE_MASK           0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_i_DDR_DESC_RING_SIZE_SHIFT          0

#define SVQP_SVQ_DDR_RING_SIZE_10_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_10_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_10_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_10_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_11_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_11_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_11_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_11_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_12_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_12_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_12_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_12_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_13_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_13_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_13_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_13_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_14_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_14_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_14_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_14_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_15_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_15_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_15_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_15_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_16_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_16_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_16_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_16_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_17_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_17_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_17_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_17_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_18_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_18_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_18_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_18_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_SIZE_19_reserved0_MASK                   0xfffffff0
#define SVQP_SVQ_DDR_RING_SIZE_19_reserved0_SHIFT                  4

#define SVQP_SVQ_DDR_RING_SIZE_19_DDR_DESC_RING_SIZE_MASK          0x0000000f
#define SVQP_SVQ_DDR_RING_SIZE_19_DDR_DESC_RING_SIZE_SHIFT         0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_ARRAY_BASE                  0x80204f00
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_ARRAY_START                 0
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_ARRAY_END                   19
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_ARRAY_ELEMENT_SIZE          32

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_WR_TIMEOUT_MASK             0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_WR_TIMEOUT_SHIFT            16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_RD_TIMEOUT_MASK             0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_RD_TIMEOUT_SHIFT            0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_WR_TIMEOUT_MASK             0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_WR_TIMEOUT_SHIFT            16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_RD_TIMEOUT_MASK             0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_i_RD_TIMEOUT_SHIFT            0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_10_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_10_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_10_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_10_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_11_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_11_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_11_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_11_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_12_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_12_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_12_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_12_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_13_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_13_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_13_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_13_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_14_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_14_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_14_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_14_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_15_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_15_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_15_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_15_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_16_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_16_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_16_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_16_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_17_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_17_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_17_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_17_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_18_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_18_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_18_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_18_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_19_WR_TIMEOUT_MASK            0xffff0000
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_19_WR_TIMEOUT_SHIFT           16

#define SVQP_SVQ_DDR_RING_PUSH_TIMER_19_RD_TIMEOUT_MASK            0x0000ffff
#define SVQP_SVQ_DDR_RING_PUSH_TIMER_19_RD_TIMEOUT_SHIFT           0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_ARRAY_BASE               0x80205000
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_ARRAY_START              0
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_ARRAY_END                19
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_ARRAY_ELEMENT_SIZE       32

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_COUNT_MASK               0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_COUNT_SHIFT              0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_COUNT_MASK               0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_i_COUNT_SHIFT              0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_10_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_10_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_11_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_11_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_12_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_12_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_13_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_13_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_14_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_14_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_15_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_15_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_16_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_16_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_17_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_17_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_18_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_18_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_19_COUNT_MASK              0xffffffff
#define SVQP_SVQ_DDR_RING_DISCARD_COUNT_19_COUNT_SHIFT             0

#define SVQP_SVQ_DDR_RING_BURST_CTRL_WR_MAX_BURST_SIZE_MASK        0xff000000
#define SVQP_SVQ_DDR_RING_BURST_CTRL_WR_MAX_BURST_SIZE_SHIFT       24

#define SVQP_SVQ_DDR_RING_BURST_CTRL_WR_MIN_BURST_SIZE_MASK        0x00ff0000
#define SVQP_SVQ_DDR_RING_BURST_CTRL_WR_MIN_BURST_SIZE_SHIFT       16

#define SVQP_SVQ_DDR_RING_BURST_CTRL_RD_MAX_BURST_SIZE_MASK        0x0000ff00
#define SVQP_SVQ_DDR_RING_BURST_CTRL_RD_MAX_BURST_SIZE_SHIFT       8

#define SVQP_SVQ_DDR_RING_BURST_CTRL_RD_MIN_BURST_SIZE_MASK        0x000000ff
#define SVQP_SVQ_DDR_RING_BURST_CTRL_RD_MIN_BURST_SIZE_SHIFT       0

#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_reserved0_MASK               0xfffffff8
#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_reserved0_SHIFT              3

#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_WCRR_TPOLL_MODE_MASK         0x00000004
#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_WCRR_TPOLL_MODE_SHIFT        2

#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_ARB_MODE_MASK                0x00000002
#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_ARB_MODE_SHIFT               1

#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_ARB_EN_MASK                  0x00000001
#define SVQP_SVQ_DDR_RING_RD_ARB_CTRL_ARB_EN_SHIFT                 0

#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_reserved0_MASK               0xfffffff8
#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_reserved0_SHIFT              3

#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_WCRR_TPOLL_MODE_MASK         0x00000004
#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_WCRR_TPOLL_MODE_SHIFT        2

#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_ARB_MODE_MASK                0x00000002
#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_ARB_MODE_SHIFT               1

#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_ARB_EN_MASK                  0x00000001
#define SVQP_SVQ_DDR_RING_WR_ARB_CTRL_ARB_EN_SHIFT                 0

#define TAM_CONFIG_reserved0_MASK                                  0xfffffffe
#define TAM_CONFIG_reserved0_SHIFT                                 1

#define TAM_CONFIG_TAM_EN_MASK                                     0x00000001
#define TAM_CONFIG_TAM_EN_SHIFT                                    0

#define TAM_STAT_CFG_reserved0_MASK                                0xfffffff8
#define TAM_STAT_CFG_reserved0_SHIFT                               3

#define TAM_STAT_CFG_STICKY_STS_COR_EN_MASK                        0x00000004
#define TAM_STAT_CFG_STICKY_STS_COR_EN_SHIFT                       2

#define TAM_STAT_CFG_STAT_CNT_COR_EN_MASK                          0x00000002
#define TAM_STAT_CFG_STAT_CNT_COR_EN_SHIFT                         1

#define TAM_STAT_CFG_STAT_CNT_SAT_EN_MASK                          0x00000001
#define TAM_STAT_CFG_STAT_CNT_SAT_EN_SHIFT                         0

#define TAM_ARB_CFG_reserved0_MASK                                 0xfffffff8
#define TAM_ARB_CFG_reserved0_SHIFT                                3

#define TAM_ARB_CFG_ARB_MODE_MASK                                  0x00000006
#define TAM_ARB_CFG_ARB_MODE_SHIFT                                 1

#define TAM_ARB_CFG_ARB_EN_MASK                                    0x00000001
#define TAM_ARB_CFG_ARB_EN_SHIFT                                   0

#define TAM_ARB_WEIGHT_PFR_reserved0_MASK                          0xffffffe0
#define TAM_ARB_WEIGHT_PFR_reserved0_SHIFT                         5

#define TAM_ARB_WEIGHT_PFR_WEIGHT_MASK                             0x0000001f
#define TAM_ARB_WEIGHT_PFR_WEIGHT_SHIFT                            0

#define TAM_ARB_WEIGHT_SVQP_reserved0_MASK                         0xffffffe0
#define TAM_ARB_WEIGHT_SVQP_reserved0_SHIFT                        5

#define TAM_ARB_WEIGHT_SVQP_WEIGHT_MASK                            0x0000001f
#define TAM_ARB_WEIGHT_SVQP_WEIGHT_SHIFT                           0

#define TAM_ARB_WEIGHT_ATXQ_reserved0_MASK                         0xffffffe0
#define TAM_ARB_WEIGHT_ATXQ_reserved0_SHIFT                        5

#define TAM_ARB_WEIGHT_ATXQ_WEIGHT_MASK                            0x0000001f
#define TAM_ARB_WEIGHT_ATXQ_WEIGHT_SHIFT                           0

#define TAM_TM_TXQ_DESC_RING_CTRLi_ARRAY_BASE                      0x80206020
#define TAM_TM_TXQ_DESC_RING_CTRLi_ARRAY_START                     0
#define TAM_TM_TXQ_DESC_RING_CTRLi_ARRAY_END                       31
#define TAM_TM_TXQ_DESC_RING_CTRLi_ARRAY_ELEMENT_SIZE              32

#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRLi_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRLi_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRLi_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRLi_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRLi_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRLi_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRLi_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRLi_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRLi_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL0_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL0_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL0_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL0_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL0_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL0_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL0_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL0_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL0_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL1_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL1_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL1_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL1_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL1_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL1_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL1_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL1_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL1_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL2_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL2_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL2_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL2_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL2_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL2_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL2_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL2_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL2_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL3_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL3_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL3_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL3_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL3_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL3_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL3_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL3_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL3_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL4_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL4_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL4_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL4_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL4_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL4_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL4_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL4_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL4_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL5_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL5_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL5_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL5_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL5_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL5_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL5_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL5_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL5_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL6_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL6_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL6_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL6_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL6_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL6_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL6_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL6_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL6_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL7_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL7_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL7_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL7_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL7_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL7_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL7_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL7_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL7_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL8_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL8_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL8_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL8_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL8_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL8_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL8_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL8_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL8_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved0_MASK                  0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved0_SHIFT                 9

#define TAM_TM_TXQ_DESC_RING_CTRL9_BP_MODE_MASK                    0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL9_BP_MODE_SHIFT                   8

#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved1_MASK                  0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved1_SHIFT                 7

#define TAM_TM_TXQ_DESC_RING_CTRL9_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL9_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved2_MASK                  0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL9_reserved2_SHIFT                 2

#define TAM_TM_TXQ_DESC_RING_CTRL9_FLUSH_MASK                      0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL9_FLUSH_SHIFT                     1

#define TAM_TM_TXQ_DESC_RING_CTRL9_RING_EN_MASK                    0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL9_RING_EN_SHIFT                   0

#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL10_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL10_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL10_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL10_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL10_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL10_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL10_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL10_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL10_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL11_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL11_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL11_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL11_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL11_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL11_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL11_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL11_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL11_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL12_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL12_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL12_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL12_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL12_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL12_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL12_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL12_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL12_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL13_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL13_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL13_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL13_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL13_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL13_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL13_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL13_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL13_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL14_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL14_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL14_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL14_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL14_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL14_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL14_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL14_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL14_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL15_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL15_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL15_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL15_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL15_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL15_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL15_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL15_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL15_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL16_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL16_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL16_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL16_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL16_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL16_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL16_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL16_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL16_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL17_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL17_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL17_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL17_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL17_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL17_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL17_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL17_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL17_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL18_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL18_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL18_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL18_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL18_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL18_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL18_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL18_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL18_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL19_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL19_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL19_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL19_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL19_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL19_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL19_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL19_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL19_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL20_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL20_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL20_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL20_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL20_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL20_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL20_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL20_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL20_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL21_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL21_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL21_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL21_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL21_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL21_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL21_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL21_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL21_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL22_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL22_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL22_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL22_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL22_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL22_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL22_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL22_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL22_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL23_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL23_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL23_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL23_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL23_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL23_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL23_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL23_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL23_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL24_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL24_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL24_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL24_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL24_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL24_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL24_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL24_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL24_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL25_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL25_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL25_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL25_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL25_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL25_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL25_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL25_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL25_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL26_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL26_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL26_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL26_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL26_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL26_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL26_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL26_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL26_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL27_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL27_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL27_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL27_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL27_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL27_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL27_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL27_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL27_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL28_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL28_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL28_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL28_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL28_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL28_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL28_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL28_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL28_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL29_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL29_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL29_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL29_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL29_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL29_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL29_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL29_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL29_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL30_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL30_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL30_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL30_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL30_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL30_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL30_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL30_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL30_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved0_MASK                 0xfffffe00
#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved0_SHIFT                9

#define TAM_TM_TXQ_DESC_RING_CTRL31_BP_MODE_MASK                   0x00000100
#define TAM_TM_TXQ_DESC_RING_CTRL31_BP_MODE_SHIFT                  8

#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved1_MASK                 0x00000080
#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved1_SHIFT                7

#define TAM_TM_TXQ_DESC_RING_CTRL31_SYSRAM_RING_ADMISSION_CTRL_MASK 0x00000070
#define TAM_TM_TXQ_DESC_RING_CTRL31_SYSRAM_RING_ADMISSION_CTRL_SHIFT 4

#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved2_MASK                 0x0000000c
#define TAM_TM_TXQ_DESC_RING_CTRL31_reserved2_SHIFT                2

#define TAM_TM_TXQ_DESC_RING_CTRL31_FLUSH_MASK                     0x00000002
#define TAM_TM_TXQ_DESC_RING_CTRL31_FLUSH_SHIFT                    1

#define TAM_TM_TXQ_DESC_RING_CTRL31_RING_EN_MASK                   0x00000001
#define TAM_TM_TXQ_DESC_RING_CTRL31_RING_EN_SHIFT                  0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_ARRAY_BASE         0x802060a0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_ARRAY_START        0
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_ARRAY_END          31
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_ARRAY_ELEMENT_SIZE 32

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMERi_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER0_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER0_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER0_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER0_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER1_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER1_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER1_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER1_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER2_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER2_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER2_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER2_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER3_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER3_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER3_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER3_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER4_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER4_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER4_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER4_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER5_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER5_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER5_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER5_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER6_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER6_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER6_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER6_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER7_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER7_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER7_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER7_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER8_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER8_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER8_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER8_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER9_reserved0_MASK     0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER9_reserved0_SHIFT    16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER9_TIMEOUT_MASK       0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER9_TIMEOUT_SHIFT      0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER10_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER10_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER10_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER10_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER11_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER11_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER11_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER11_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER12_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER12_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER12_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER12_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER13_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER13_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER13_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER13_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER14_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER14_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER14_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER14_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER15_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER15_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER15_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER15_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER16_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER16_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER16_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER16_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER17_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER17_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER17_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER17_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER18_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER18_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER18_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER18_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER19_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER19_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER19_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER19_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER20_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER20_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER20_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER20_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER21_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER21_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER21_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER21_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER22_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER22_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER22_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER22_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER23_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER23_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER23_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER23_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER24_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER24_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER24_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER24_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER25_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER25_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER25_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER25_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER26_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER26_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER26_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER26_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER27_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER27_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER27_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER27_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER28_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER28_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER28_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER28_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER29_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER29_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER29_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER29_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER30_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER30_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER30_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER30_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER31_reserved0_MASK    0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER31_reserved0_SHIFT   16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER31_TIMEOUT_MASK      0x0000ffff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_PUSH_TIMER31_TIMEOUT_SHIFT     0

#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_ARRAY_BASE                0x80206120
#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_ARRAY_START               0
#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_ARRAY_END                 31
#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_ARRAY_ELEMENT_SIZE        32

#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTERi_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER0_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER0_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER1_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER1_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER2_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER2_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER3_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER3_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER4_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER4_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER5_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER5_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER6_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER6_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER7_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER7_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER8_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER8_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER9_COUNT_MASK                0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER9_COUNT_SHIFT               0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER10_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER10_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER11_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER11_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER12_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER12_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER13_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER13_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER14_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER14_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER15_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER15_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER16_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER16_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER17_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER17_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER18_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER18_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER19_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER19_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER20_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER20_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER21_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER21_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER22_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER22_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER23_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER23_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER24_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER24_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER25_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER25_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER26_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER26_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER27_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER27_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER28_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER28_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER29_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER29_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER30_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER30_COUNT_SHIFT              0

#define TAM_TM_TXQ_RING_DISCARD_COUNTER31_COUNT_MASK               0xffffffff
#define TAM_TM_TXQ_RING_DISCARD_COUNTER31_COUNT_SHIFT              0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_reserved0_MASK      0xffff0000
#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_reserved0_SHIFT     16

#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_WR_MAX_BURST_SIZE_MASK 0x0000ff00
#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_WR_MAX_BURST_SIZE_SHIFT 8

#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_WR_MIN_BURST_SIZE_MASK 0x000000ff
#define TAM_TM_TXQ_DDR_DESC_RING_WR_BURST_CTRL_WR_MIN_BURST_SIZE_SHIFT 0

#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_reserved0_MASK         0xfffffff8
#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_reserved0_SHIFT        3

#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_WCRR_TPOLL_MODE_MASK   0x00000004
#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_WCRR_TPOLL_MODE_SHIFT  2

#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_ARB_MODE_MASK          0x00000002
#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_ARB_MODE_SHIFT         1

#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_ARB_EN_MASK            0x00000001
#define TAM_TM_TXQ_DDR_DESC_RING_WR_ARB_CFG_ARB_EN_SHIFT           0

#define TAM_ATXQ_DESC_RING_CTRL_reserved0_MASK                     0xfffffffc
#define TAM_ATXQ_DESC_RING_CTRL_reserved0_SHIFT                    2

#define TAM_ATXQ_DESC_RING_CTRL_FLUSH_MASK                         0x00000002
#define TAM_ATXQ_DESC_RING_CTRL_FLUSH_SHIFT                        1

#define TAM_ATXQ_DESC_RING_CTRL_RING_EN_MASK                       0x00000001
#define TAM_ATXQ_DESC_RING_CTRL_RING_EN_SHIFT                      0

#define TAM_TXQ_DDR_DESC_RING_PRODUCER_INDEX_reserved0_MASK        0xffff0000
#define TAM_TXQ_DDR_DESC_RING_PRODUCER_INDEX_reserved0_SHIFT       16

#define TAM_TXQ_DDR_DESC_RING_PRODUCER_INDEX_PRODUCER_INDEX_MASK   0x0000ffff
#define TAM_TXQ_DDR_DESC_RING_PRODUCER_INDEX_PRODUCER_INDEX_SHIFT  0

#define TAM_TXQ_DDR_DESC_RING_CONSUMER_INDEX_PRODUCER_INDEX_MASK   0xffff0000
#define TAM_TXQ_DDR_DESC_RING_CONSUMER_INDEX_PRODUCER_INDEX_SHIFT  16

#define TAM_TXQ_DDR_DESC_RING_CONSUMER_INDEX_CONSUMER_INDEX_MASK   0x0000ffff
#define TAM_TXQ_DDR_DESC_RING_CONSUMER_INDEX_CONSUMER_INDEX_SHIFT  0

#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_LOW_DDR_START_ADDR_31_0_MASK 0xffffffff
#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_LOW_DDR_START_ADDR_31_0_SHIFT 0

#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_HIGH_reserved0_MASK    0xffffff00
#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_HIGH_reserved0_SHIFT   8

#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_HIGH_DDR_START_ADDR_39_32_MASK 0x000000ff
#define TAM_TXQ_DDR_DESC_RING_START_ADDRESS_HIGH_DDR_START_ADDR_39_32_SHIFT 0

#define TAM_TXQ_DDR_DESC_RING_SIZE_reserved0_MASK                  0xfffffff0
#define TAM_TXQ_DDR_DESC_RING_SIZE_reserved0_SHIFT                 4

#define TAM_TXQ_DDR_DESC_RING_SIZE_DDR_DESC_RING_SIZE_LOG2_MASK    0x0000000f
#define TAM_TXQ_DDR_DESC_RING_SIZE_DDR_DESC_RING_SIZE_LOG2_SHIFT   0

#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_reserved0_MASK         0xffff0000
#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_reserved0_SHIFT        16

#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_RD_MAX_BURST_SIZE_MASK 0x0000ff00
#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_RD_MAX_BURST_SIZE_SHIFT 8

#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_RD_MIN_BURST_SIZE_MASK 0x000000ff
#define TAM_TXQ_DDR_DESC_RING_RD_BURST_CTRL_RD_MIN_BURST_SIZE_SHIFT 0

#define TAM_TXQ_DDR_DESC_RING_RD_PUSH_TIMER_reserved0_MASK         0xffff0000
#define TAM_TXQ_DDR_DESC_RING_RD_PUSH_TIMER_reserved0_SHIFT        16

#define TAM_TXQ_DDR_DESC_RING_RD_PUSH_TIMER_TIMEOUT_MASK           0x0000ffff
#define TAM_TXQ_DDR_DESC_RING_RD_PUSH_TIMER_TIMEOUT_SHIFT          0

#define TAM_TXQ_INTR_CFG_TIMEOUT_MASK                              0xffff0000
#define TAM_TXQ_INTR_CFG_TIMEOUT_SHIFT                             16

#define TAM_TXQ_INTR_CFG_THRESHOLD_MASK                            0x0000ffff
#define TAM_TXQ_INTR_CFG_THRESHOLD_SHIFT                           0

#define TAM_TM_TXQ_LOCRAM_RING_FULL_LOCRAM_RING_FULL_MASK          0xffffffff
#define TAM_TM_TXQ_LOCRAM_RING_FULL_LOCRAM_RING_FULL_SHIFT         0

#define TAM_TM_TXQ_SYSRAM_RING_FULL_SYSRAM_RING_FULL_MASK          0xffffffff
#define TAM_TM_TXQ_SYSRAM_RING_FULL_SYSRAM_RING_FULL_SHIFT         0

#define TAM_TM_TXQ_LOCRAM_RING_EMPTY_LOCRAM_RING_EMPTY_MASK        0xffffffff
#define TAM_TM_TXQ_LOCRAM_RING_EMPTY_LOCRAM_RING_EMPTY_SHIFT       0

#define TAM_TM_TXQ_SYSRAM_RING_EMPTY_SYSRAM_RING_EMPTY_MASK        0xffffffff
#define TAM_TM_TXQ_SYSRAM_RING_EMPTY_SYSRAM_RING_EMPTY_SHIFT       0

#define TAM_ATXQ_RING_EMPTY_reserved0_MASK                         0xfffffffc
#define TAM_ATXQ_RING_EMPTY_reserved0_SHIFT                        2

#define TAM_ATXQ_RING_EMPTY_LOCRAM_RING_EMPTY_MASK                 0x00000002
#define TAM_ATXQ_RING_EMPTY_LOCRAM_RING_EMPTY_SHIFT                1

#define TAM_ATXQ_RING_EMPTY_SYSRAM_RING_EMPTY_MASK                 0x00000001
#define TAM_ATXQ_RING_EMPTY_SYSRAM_RING_EMPTY_SHIFT                0

#define UBUS_ACCESS_P0_CLIENT_EN_reserved0_MASK                    0xfff00000
#define UBUS_ACCESS_P0_CLIENT_EN_reserved0_SHIFT                   20

#define UBUS_ACCESS_P0_CLIENT_EN_EN_MASK                           0x000fffff
#define UBUS_ACCESS_P0_CLIENT_EN_EN_SHIFT                          0

#define UBUS_ACCESS_P1_CLIENT_EN_reserved0_MASK                    0xffffc000
#define UBUS_ACCESS_P1_CLIENT_EN_reserved0_SHIFT                   14

#define UBUS_ACCESS_P1_CLIENT_EN_EN_MASK                           0x00003fff
#define UBUS_ACCESS_P1_CLIENT_EN_EN_SHIFT                          0

#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_reserved0_MASK               0xfffe0000
#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_reserved0_SHIFT              17

#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_CGRP1_WR_MASK                0x00018000
#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_CGRP1_WR_SHIFT               15

#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_reserved1_MASK               0x00007c00
#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_reserved1_SHIFT              10

#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_CGRP0_WR_MASK                0x000003ff
#define UBUS_ACCESS_P0_WR_ENDREPLY_EN_CGRP0_WR_SHIFT               0

#define UBUS_ACCESS_P1_WR_ENDREPLY_EN_reserved0_MASK               0xffffff00
#define UBUS_ACCESS_P1_WR_ENDREPLY_EN_reserved0_SHIFT              8

#define UBUS_ACCESS_P1_WR_ENDREPLY_EN_CGRP2_WR_MASK                0x000000ff
#define UBUS_ACCESS_P1_WR_ENDREPLY_EN_CGRP2_WR_SHIFT               0

#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved0_MASK       0xfff00000
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved0_SHIFT      20

#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_CGRP1_RD_MASK        0x000e0000
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_CGRP1_RD_SHIFT       17

#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved1_MASK       0x00018000
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved1_SHIFT      15

#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_CGRP0_RD_MASK        0x00007c00
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_CGRP0_RD_SHIFT       10

#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved2_MASK       0x000003ff
#define UBUS_ACCESS_P0_RD_DST_BACKPRESSURE_EN_reserved2_SHIFT      0

#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_reserved0_MASK       0xffffe000
#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_reserved0_SHIFT      13

#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_CGRP2_RD_MASK        0x00001f00
#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_CGRP2_RD_SHIFT       8

#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_reserved1_MASK       0x000000ff
#define UBUS_ACCESS_P1_RD_DST_BACKPRESSURE_EN_reserved1_SHIFT      0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRBUF_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRBUF_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRBUF_THRESH_MASK  0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRBUF_THRESH_SHIFT 0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRDSC_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRDSC_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRDSC_THRESH_MASK  0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTRX_WRDSC_THRESH_SHIFT 0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRRXQD_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRRXQD_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRRXQD_THRESH_MASK   0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRRXQD_THRESH_SHIFT  0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRSTQ_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRSTQ_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRSTQ_THRESH_MASK    0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_PFR_WRSTQ_THRESH_SHIFT   0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTTX_WRRRD_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTTX_WRRRD_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTTX_WRRRD_THRESH_MASK  0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_SPTTX_WRRRD_THRESH_SHIFT 0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_MPMBA_WRRNG_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_MPMBA_WRRNG_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_MPMBA_WRRNG_THRESH_MASK  0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_MPMBA_WRRNG_THRESH_SHIFT 0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRMISC_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRMISC_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRMISC_THRESH_MASK   0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRMISC_THRESH_SHIFT  0

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRREC_reserved0_MASK 0xfffffff0
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRREC_reserved0_SHIFT 4

#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRREC_THRESH_MASK    0x0000000f
#define UBUS_ACCESS_WRBUF_DEQUE_THRESHOLD_DIB_WRREC_THRESH_SHIFT   0

#define UBUS_ACCESS_CLIENT_PRIOi_ARRAY_BASE                        0x80208040
#define UBUS_ACCESS_CLIENT_PRIOi_ARRAY_START                       0
#define UBUS_ACCESS_CLIENT_PRIOi_ARRAY_END                         33
#define UBUS_ACCESS_CLIENT_PRIOi_ARRAY_ELEMENT_SIZE                32

#define UBUS_ACCESS_CLIENT_PRIOi_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIOi_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIOi_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIOi_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO0_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO0_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO0_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO0_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO1_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO1_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO1_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO1_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO2_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO2_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO2_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO2_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO3_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO3_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO3_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO3_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO4_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO4_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO4_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO4_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO5_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO5_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO5_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO5_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO6_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO6_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO6_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO6_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO7_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO7_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO7_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO7_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO8_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO8_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO8_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO8_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO9_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO9_reserved0_SHIFT                   5

#define UBUS_ACCESS_CLIENT_PRIO9_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO9_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CLIENT_PRIO10_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO10_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO10_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO10_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO11_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO11_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO11_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO11_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO12_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO12_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO12_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO12_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO13_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO13_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO13_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO13_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO14_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO14_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO14_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO14_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO15_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO15_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO15_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO15_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO16_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO16_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO16_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO16_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO17_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO17_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO17_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO17_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO18_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO18_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO18_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO18_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO19_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO19_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO19_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO19_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO20_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO20_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO20_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO20_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO21_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO21_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO21_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO21_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO22_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO22_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO22_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO22_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO23_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO23_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO23_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO23_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO24_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO24_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO24_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO24_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO25_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO25_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO25_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO25_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO26_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO26_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO26_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO26_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO27_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO27_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO27_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO27_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO28_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO28_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO28_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO28_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO29_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO29_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO29_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO29_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO30_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO30_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO30_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO30_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO31_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO31_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO31_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO31_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO32_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO32_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO32_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO32_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CLIENT_PRIO33_reserved0_MASK                   0xffffffe0
#define UBUS_ACCESS_CLIENT_PRIO33_reserved0_SHIFT                  5

#define UBUS_ACCESS_CLIENT_PRIO33_PRIO_OR_WEIGHT_MASK              0x0000001f
#define UBUS_ACCESS_CLIENT_PRIO33_PRIO_OR_WEIGHT_SHIFT             0

#define UBUS_ACCESS_CGROUP_EN_UBUS0_reserved0_MASK                 0xfffffff8
#define UBUS_ACCESS_CGROUP_EN_UBUS0_reserved0_SHIFT                3

#define UBUS_ACCESS_CGROUP_EN_UBUS0_EN_MASK                        0x00000007
#define UBUS_ACCESS_CGROUP_EN_UBUS0_EN_SHIFT                       0

#define UBUS_ACCESS_CGROUP_EN_UBUS1_reserved0_MASK                 0xfffffff8
#define UBUS_ACCESS_CGROUP_EN_UBUS1_reserved0_SHIFT                3

#define UBUS_ACCESS_CGROUP_EN_UBUS1_EN_MASK                        0x00000007
#define UBUS_ACCESS_CGROUP_EN_UBUS1_EN_SHIFT                       0

#define UBUS_ACCESS_ARB_TYPE_UBUS0_reserved0_MASK                  0xfffffffc
#define UBUS_ACCESS_ARB_TYPE_UBUS0_reserved0_SHIFT                 2

#define UBUS_ACCESS_ARB_TYPE_UBUS0_ARB_TYPE_MASK                   0x00000003
#define UBUS_ACCESS_ARB_TYPE_UBUS0_ARB_TYPE_SHIFT                  0

#define UBUS_ACCESS_ARB_TYPE_UBUS1_reserved0_MASK                  0xfffffffc
#define UBUS_ACCESS_ARB_TYPE_UBUS1_reserved0_SHIFT                 2

#define UBUS_ACCESS_ARB_TYPE_UBUS1_ARB_TYPE_MASK                   0x00000003
#define UBUS_ACCESS_ARB_TYPE_UBUS1_ARB_TYPE_SHIFT                  0

#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARRAY_BASE                    0x80208160
#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARRAY_START                   0
#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARRAY_END                     2
#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARRAY_ELEMENT_SIZE            32

#define UBUS_ACCESS_CGROUP_ARB_TYPEi_reserved0_MASK                0xfffffffc
#define UBUS_ACCESS_CGROUP_ARB_TYPEi_reserved0_SHIFT               2

#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARB_TYPE_MASK                 0x00000003
#define UBUS_ACCESS_CGROUP_ARB_TYPEi_ARB_TYPE_SHIFT                0

#define UBUS_ACCESS_CGROUP_ARB_TYPE0_reserved0_MASK                0xfffffffc
#define UBUS_ACCESS_CGROUP_ARB_TYPE0_reserved0_SHIFT               2

#define UBUS_ACCESS_CGROUP_ARB_TYPE0_ARB_TYPE_MASK                 0x00000003
#define UBUS_ACCESS_CGROUP_ARB_TYPE0_ARB_TYPE_SHIFT                0

#define UBUS_ACCESS_CGROUP_ARB_TYPE1_reserved0_MASK                0xfffffffc
#define UBUS_ACCESS_CGROUP_ARB_TYPE1_reserved0_SHIFT               2

#define UBUS_ACCESS_CGROUP_ARB_TYPE1_ARB_TYPE_MASK                 0x00000003
#define UBUS_ACCESS_CGROUP_ARB_TYPE1_ARB_TYPE_SHIFT                0

#define UBUS_ACCESS_CGROUP_ARB_TYPE2_reserved0_MASK                0xfffffffc
#define UBUS_ACCESS_CGROUP_ARB_TYPE2_reserved0_SHIFT               2

#define UBUS_ACCESS_CGROUP_ARB_TYPE2_ARB_TYPE_MASK                 0x00000003
#define UBUS_ACCESS_CGROUP_ARB_TYPE2_ARB_TYPE_SHIFT                0

#define UBUS_ACCESS_CGROUP_PRIOi_ARRAY_BASE                        0x80208170
#define UBUS_ACCESS_CGROUP_PRIOi_ARRAY_START                       0
#define UBUS_ACCESS_CGROUP_PRIOi_ARRAY_END                         2
#define UBUS_ACCESS_CGROUP_PRIOi_ARRAY_ELEMENT_SIZE                32

#define UBUS_ACCESS_CGROUP_PRIOi_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CGROUP_PRIOi_reserved0_SHIFT                   5

#define UBUS_ACCESS_CGROUP_PRIOi_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CGROUP_PRIOi_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CGROUP_PRIO0_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CGROUP_PRIO0_reserved0_SHIFT                   5

#define UBUS_ACCESS_CGROUP_PRIO0_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CGROUP_PRIO0_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CGROUP_PRIO1_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CGROUP_PRIO1_reserved0_SHIFT                   5

#define UBUS_ACCESS_CGROUP_PRIO1_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CGROUP_PRIO1_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CGROUP_PRIO2_reserved0_MASK                    0xffffffe0
#define UBUS_ACCESS_CGROUP_PRIO2_reserved0_SHIFT                   5

#define UBUS_ACCESS_CGROUP_PRIO2_PRIO_OR_WEIGHT_MASK               0x0000001f
#define UBUS_ACCESS_CGROUP_PRIO2_PRIO_OR_WEIGHT_SHIFT              0

#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_ARRAY_BASE                0x80208180
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_ARRAY_START               0
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_ARRAY_END                 2
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_ARRAY_ELEMENT_SIZE        32

#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_RD_BURST_CFGi_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG0_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG1_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_RD_BURST_CFG2_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_ARRAY_BASE                0x80208190
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_ARRAY_START               0
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_ARRAY_END                 2
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_ARRAY_ELEMENT_SIZE        32

#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_WR_BURST_CFGi_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG0_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG1_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_reserved0_MASK            0xffffffe0
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_reserved0_SHIFT           5

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_MAX_BURST_SIZE_LOG2_MASK  0x00000018
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_MAX_BURST_SIZE_LOG2_SHIFT 3

#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_MEM_DATA_ALIGN_MASK       0x00000007
#define UBUS_ACCESS_CGROUP_WR_BURST_CFG2_MEM_DATA_ALIGN_SHIFT      0

#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMAWR_PEAK_CNT_MASK 0xff000000
#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMAWR_PEAK_CNT_SHIFT 24

#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMAWR_CNT_MASK     0x00ff0000
#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMAWR_CNT_SHIFT    16

#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMARD_PEAK_CNT_MASK 0x0000ff00
#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMARD_PEAK_CNT_SHIFT 8

#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMARD_CNT_MASK     0x000000ff
#define UBUS_ACCESS_DIAG_UBUS0_DIAG_OUTSTANDING_DMARD_CNT_SHIFT    0

#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMAWR_PEAK_CNT_MASK 0xff000000
#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMAWR_PEAK_CNT_SHIFT 24

#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMAWR_CNT_MASK     0x00ff0000
#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMAWR_CNT_SHIFT    16

#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMARD_PEAK_CNT_MASK 0x0000ff00
#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMARD_PEAK_CNT_SHIFT 8

#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMARD_CNT_MASK     0x000000ff
#define UBUS_ACCESS_DIAG_UBUS1_DIAG_OUTSTANDING_DMARD_CNT_SHIFT    0

#define SGDMA_CONTROL_PUSH_TIMER_MASK                              0xff000000
#define SGDMA_CONTROL_PUSH_TIMER_SHIFT                             24

#define SGDMA_CONTROL_INTERRUPT_THRESHOLD_MASK                     0x00ff0000
#define SGDMA_CONTROL_INTERRUPT_THRESHOLD_SHIFT                    16

#define SGDMA_CONTROL_reserved0_MASK                               0x0000fc00
#define SGDMA_CONTROL_reserved0_SHIFT                              10

#define SGDMA_CONTROL_RQ_PRODUCER_IDX_WR_EN_MASK                   0x00000200
#define SGDMA_CONTROL_RQ_PRODUCER_IDX_WR_EN_SHIFT                  9

#define SGDMA_CONTROL_RQ_CONSUMER_IDX_RD_EN_MASK                   0x00000100
#define SGDMA_CONTROL_RQ_CONSUMER_IDX_RD_EN_SHIFT                  8

#define SGDMA_CONTROL_reserved1_MASK                               0x000000fc
#define SGDMA_CONTROL_reserved1_SHIFT                              2

#define SGDMA_CONTROL_SINGLE_CMD_THREAD_EN_MASK                    0x00000002
#define SGDMA_CONTROL_SINGLE_CMD_THREAD_EN_SHIFT                   1

#define SGDMA_CONTROL_SGDMA_EN_MASK                                0x00000001
#define SGDMA_CONTROL_SGDMA_EN_SHIFT                               0

#define SGDMA_WQ_DMA_CMDLIST_OFFSET_reserved0_MASK                 0xffff0000
#define SGDMA_WQ_DMA_CMDLIST_OFFSET_reserved0_SHIFT                16

#define SGDMA_WQ_DMA_CMDLIST_OFFSET_WQ_SGDMA_OFFSET_MASK           0x0000ffff
#define SGDMA_WQ_DMA_CMDLIST_OFFSET_WQ_SGDMA_OFFSET_SHIFT          0

#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_ARRAY_BASE                  0x80208610
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_ARRAY_START                 0
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_ARRAY_END                   1
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_ARRAY_ELEMENT_SIZE          32

#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_MASK          0xffff0000
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_SHIFT         16

#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK                0x0000ffff
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT               0

#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_MASK          0xffff0000
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_INDEX_ADDR_SHIFT         16

#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK                0x0000ffff
#define SGDMA_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT               0

#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_BASE            0x80208618
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_START           0
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_END             1
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_ELEMENT_SIZE    32

#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK        0xffff0000
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT       16

#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_MASK        0x0000ffff
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_SHIFT       0

#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK        0xffff0000
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT       16

#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_MASK        0x0000ffff
#define SGDMA_RESPONSE_QUEUE_WRITE_POINTER_i_RQ_WR_PTR_SHIFT       0

#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_BASE  0x80208620
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_START 0
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_END   1
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE 32

#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_SHIFT 16

#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_SHIFT 0

#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_PRODUCER_INDEX_SHIFT 16

#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define SGDMA_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_RQ_CONSUMER_INDEX_SHIFT 0

#define SGDMA_GP_RQ_CONTROL_PUSH_TIMER_MASK                        0xff000000
#define SGDMA_GP_RQ_CONTROL_PUSH_TIMER_SHIFT                       24

#define SGDMA_GP_RQ_CONTROL_INTERRUPT_THRESHOLD_MASK               0x00ff0000
#define SGDMA_GP_RQ_CONTROL_INTERRUPT_THRESHOLD_SHIFT              16

#define SGDMA_GP_RQ_CONTROL_reserved0_MASK                         0x0000fffc
#define SGDMA_GP_RQ_CONTROL_reserved0_SHIFT                        2

#define SGDMA_GP_RQ_CONTROL_GP_RQ_PRODUCER_IDX_WR_EN_MASK          0x00000002
#define SGDMA_GP_RQ_CONTROL_GP_RQ_PRODUCER_IDX_WR_EN_SHIFT         1

#define SGDMA_GP_RQ_CONTROL_GP_RQ_CONSUMER_IDX_RD_EN_MASK          0x00000001
#define SGDMA_GP_RQ_CONTROL_GP_RQ_CONSUMER_IDX_RD_EN_SHIFT         0

#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_ARRAY_BASE               0x80208670
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_ARRAY_START              0
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_ARRAY_END                1
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_ARRAY_ELEMENT_SIZE       32

#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_GP_RQ_INDEX_ADDR_MASK    0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_GP_RQ_INDEX_ADDR_SHIFT   16

#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK             0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT            0

#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_GP_RQ_INDEX_ADDR_MASK    0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_GP_RQ_INDEX_ADDR_SHIFT   16

#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_MASK             0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_ADDRESS_i_RQ_ADDR_SHIFT            0

#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_BASE         0x80208678
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_START        0
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_END          1
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_ARRAY_ELEMENT_SIZE 32

#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK     0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT    16

#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_GP_RQ_WR_PTR_MASK  0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_GP_RQ_WR_PTR_SHIFT 0

#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_MASK     0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_reserved0_SHIFT    16

#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_GP_RQ_WR_PTR_MASK  0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_WRITE_POINTER_i_GP_RQ_WR_PTR_SHIFT 0

#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_BASE 0x80208680
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_START 0
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_END 1
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE 32

#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_PRODUCER_INDEX_SHIFT 16

#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_CONSUMER_INDEX_SHIFT 0

#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_PRODUCER_INDEX_SHIFT 16

#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define SGDMA_GP_RESPONSE_QUEUE_PRODUCER_CONSUMER_INDEX_i_GP_RQ_CONSUMER_INDEX_SHIFT 0

#define SGDMA_GP_RQ_SIZE_i_ARRAY_BASE                              0x80208688
#define SGDMA_GP_RQ_SIZE_i_ARRAY_START                             0
#define SGDMA_GP_RQ_SIZE_i_ARRAY_END                               1
#define SGDMA_GP_RQ_SIZE_i_ARRAY_ELEMENT_SIZE                      32

#define SGDMA_GP_RQ_SIZE_i_reserved0_MASK                          0xffffff00
#define SGDMA_GP_RQ_SIZE_i_reserved0_SHIFT                         8

#define SGDMA_GP_RQ_SIZE_i_GP_RQ_SIZE_MASK                         0x000000ff
#define SGDMA_GP_RQ_SIZE_i_GP_RQ_SIZE_SHIFT                        0

#define SGDMA_GP_RQ_SIZE_i_reserved0_MASK                          0xffffff00
#define SGDMA_GP_RQ_SIZE_i_reserved0_SHIFT                         8

#define SGDMA_GP_RQ_SIZE_i_GP_RQ_SIZE_MASK                         0x000000ff
#define SGDMA_GP_RQ_SIZE_i_GP_RQ_SIZE_SHIFT                        0

#define SGDMA_DBG_CTRL_FREEZE_MASK                                 0xf0000000
#define SGDMA_DBG_CTRL_FREEZE_SHIFT                                28

#define SGDMA_DBG_CTRL_MISC_DBG_CTRL_MASK                          0x0fff0000
#define SGDMA_DBG_CTRL_MISC_DBG_CTRL_SHIFT                         16

#define SGDMA_DBG_CTRL_reserved0_MASK                              0x00008000
#define SGDMA_DBG_CTRL_reserved0_SHIFT                             15

#define SGDMA_DBG_CTRL_WORD_NUM_MASK                               0x00007000
#define SGDMA_DBG_CTRL_WORD_NUM_SHIFT                              12

#define SGDMA_DBG_CTRL_reserved1_MASK                              0x00000800
#define SGDMA_DBG_CTRL_reserved1_SHIFT                             11

#define SGDMA_DBG_CTRL_ENTRY_SEL_MASK                              0x000007f0
#define SGDMA_DBG_CTRL_ENTRY_SEL_SHIFT                             4

#define SGDMA_DBG_CTRL_WR_RDB_MASK                                 0x00000008
#define SGDMA_DBG_CTRL_WR_RDB_SHIFT                                3

#define SGDMA_DBG_CTRL_DBG_CTRL_MASK                               0x00000007
#define SGDMA_DBG_CTRL_DBG_CTRL_SHIFT                              0

#define SGDMA_DBG_CTRL2_DBG_CTRL2_MASK                             0xffffffff
#define SGDMA_DBG_CTRL2_DBG_CTRL2_SHIFT                            0

#define SGDMA_DBG_DIN_REG_DBG_DATA_IN_MASK                         0xffffffff
#define SGDMA_DBG_DIN_REG_DBG_DATA_IN_SHIFT                        0

#define SGDMA_DBG_DIN_REG2_DBG_DATA_IN_MASK                        0xffffffff
#define SGDMA_DBG_DIN_REG2_DBG_DATA_IN_SHIFT                       0

#define SGDMA_DBG_DOUT_REG_DBG_DATA_OUT_MASK                       0xffffffff
#define SGDMA_DBG_DOUT_REG_DBG_DATA_OUT_SHIFT                      0

#define SGDMA_DBG_DOUT_REG2_DBG_DATA_OUT_MASK                      0xffffffff
#define SGDMA_DBG_DOUT_REG2_DBG_DATA_OUT_SHIFT                     0

#define SGDMA_OSTD_CNT_OSTD_DTCM_RD_CNT_MASK                       0xff000000
#define SGDMA_OSTD_CNT_OSTD_DTCM_RD_CNT_SHIFT                      24

#define SGDMA_OSTD_CNT_OSTD_DTCM_WR_CNT_MASK                       0x00ff0000
#define SGDMA_OSTD_CNT_OSTD_DTCM_WR_CNT_SHIFT                      16

#define SGDMA_OSTD_CNT_OSTD_GSI_WR_CNT_MASK                        0x0000ff00
#define SGDMA_OSTD_CNT_OSTD_GSI_WR_CNT_SHIFT                       8

#define SGDMA_OSTD_CNT_OSTD_GSI_RD_CNT_MASK                        0x000000ff
#define SGDMA_OSTD_CNT_OSTD_GSI_RD_CNT_SHIFT                       0

#define SGDMA_SLOT_AVAIL_CNT_reserved0_MASK                        0xe0000000
#define SGDMA_SLOT_AVAIL_CNT_reserved0_SHIFT                       29

#define SGDMA_SLOT_AVAIL_CNT_CMD_WQ_AVAIL_CNT_MASK                 0x1f000000
#define SGDMA_SLOT_AVAIL_CNT_CMD_WQ_AVAIL_CNT_SHIFT                24

#define SGDMA_SLOT_AVAIL_CNT_reserved1_MASK                        0x00800000
#define SGDMA_SLOT_AVAIL_CNT_reserved1_SHIFT                       23

#define SGDMA_SLOT_AVAIL_CNT_CMD_DP_AVAIL_CNT_MASK                 0x007f0000
#define SGDMA_SLOT_AVAIL_CNT_CMD_DP_AVAIL_CNT_SHIFT                16

#define SGDMA_SLOT_AVAIL_CNT_reserved2_MASK                        0x0000f000
#define SGDMA_SLOT_AVAIL_CNT_reserved2_SHIFT                       12

#define SGDMA_SLOT_AVAIL_CNT_RD_SLOT_AVAIL_CNT_MASK                0x00000f80
#define SGDMA_SLOT_AVAIL_CNT_RD_SLOT_AVAIL_CNT_SHIFT               7

#define SGDMA_SLOT_AVAIL_CNT_reserved3_MASK                        0x00000060
#define SGDMA_SLOT_AVAIL_CNT_reserved3_SHIFT                       5

#define SGDMA_SLOT_AVAIL_CNT_WR_SLOT_AVAIL_CNT_MASK                0x0000001f
#define SGDMA_SLOT_AVAIL_CNT_WR_SLOT_AVAIL_CNT_SHIFT               0

#define SGDMA_DBG_STATUS_REG_DBG_STATUS_MASK                       0xffffffff
#define SGDMA_DBG_STATUS_REG_DBG_STATUS_SHIFT                      0

#define SGDMA_DBG_STATUS_REG2_DBG_STATUS_MASK                      0xffffffff
#define SGDMA_DBG_STATUS_REG2_DBG_STATUS_SHIFT                     0

#define CCAM_CONTROL_reserved0_MASK                                0xfffe0000
#define CCAM_CONTROL_reserved0_SHIFT                               17

#define CCAM_CONTROL_CAM1_SIZE_MASK                                0x0001f000
#define CCAM_CONTROL_CAM1_SIZE_SHIFT                               12

#define CCAM_CONTROL_reserved1_MASK                                0x00000e00
#define CCAM_CONTROL_reserved1_SHIFT                               9

#define CCAM_CONTROL_CAM0_SIZE_MASK                                0x000001f0
#define CCAM_CONTROL_CAM0_SIZE_SHIFT                               4

#define CCAM_CONTROL_reserved2_MASK                                0x0000000c
#define CCAM_CONTROL_reserved2_SHIFT                               2

#define CCAM_CONTROL_CACHE_DIS_MASK                                0x00000002
#define CCAM_CONTROL_CACHE_DIS_SHIFT                               1

#define CCAM_CONTROL_CCAM_EN_MASK                                  0x00000001
#define CCAM_CONTROL_CCAM_EN_SHIFT                                 0

#define DIB_COMMON_CONFIGURATION_reserved0_MASK                    0xffffffc0
#define DIB_COMMON_CONFIGURATION_reserved0_SHIFT                   6

#define DIB_COMMON_CONFIGURATION_DHD_TX_POST_MPM_BUFFER_VALUE_MASK 0x00000030
#define DIB_COMMON_CONFIGURATION_DHD_TX_POST_MPM_BUFFER_VALUE_SHIFT 4

#define DIB_COMMON_CONFIGURATION_reserved1_MASK                    0x00000008
#define DIB_COMMON_CONFIGURATION_reserved1_SHIFT                   3

#define DIB_COMMON_CONFIGURATION_BUF_ADDR_TYPE_MASK                0x00000007
#define DIB_COMMON_CONFIGURATION_BUF_ADDR_TYPE_SHIFT               0

#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_TIMEOUT_MASK 0xffff0000
#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_TIMEOUT_SHIFT 16

#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_MAX_BURST_SIZE_MASK 0x0000ff00
#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_MAX_BURST_SIZE_SHIFT 8

#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_MIN_BURST_SIZE_MASK 0x000000ff
#define DIB_RX_POST_RING_AND_RECYCLE_RING_WRITE_CONFIGURATION_MIN_BURST_SIZE_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_TIMEOUT_MASK       0xffff0000
#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_TIMEOUT_SHIFT      16

#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_MAX_BURST_SIZE_MASK 0x0000ff00
#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_MAX_BURST_SIZE_SHIFT 8

#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_MIN_BURST_SIZE_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_READ_CONFIGURATION_MIN_BURST_SIZE_SHIFT 0

#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_reserved0_MASK 0xffffffc0
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_reserved0_SHIFT 6

#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_RD_IDX_SWAP_MASK 0x00000020
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_RD_IDX_SWAP_SHIFT 5

#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_WR_IDX_SWAP_MASK 0x00000010
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_WR_IDX_SWAP_SHIFT 4

#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_DOORBELL_SWAP_MASK 0x0000000c
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_DOORBELL_SWAP_SHIFT 2

#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_RX_DESC_SWAP_MASK 0x00000003
#define DIB_RX_POST_RING_SWAPPING_FORMATTING_CONFIGURATION_RX_DESC_SWAP_SHIFT 0

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_reserved0_MASK 0xfffffe00
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_reserved0_SHIFT 9

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_RECYCLE_DESC_SWAP_MASK 0x00000180
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_RECYCLE_DESC_SWAP_SHIFT 7

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_PROD_IDX_SWAP_MASK 0x00000040
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_PROD_IDX_SWAP_SHIFT 6

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_RD_IDX_SWAP_MASK 0x00000020
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_RD_IDX_SWAP_SHIFT 5

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_WR_IDX_SWAP_MASK 0x00000010
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_WR_IDX_SWAP_SHIFT 4

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_DOORBELL_SWAP_MASK 0x0000000c
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_DOORBELL_SWAP_SHIFT 2

#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_TX_DESC_SWAP_MASK 0x00000003
#define DIB_TX_COMPLETE_RING_SWAPPING_FORMATTING_CONFIGURATION_TX_DESC_SWAP_SHIFT 0

#define DIB_RX_POST_RING_CONFIGURATION_i_ARRAY_BASE                0x80208a14
#define DIB_RX_POST_RING_CONFIGURATION_i_ARRAY_START               0
#define DIB_RX_POST_RING_CONFIGURATION_i_ARRAY_END                 1
#define DIB_RX_POST_RING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE        32

#define DIB_RX_POST_RING_CONFIGURATION_i_reserved0_MASK            0xfff00000
#define DIB_RX_POST_RING_CONFIGURATION_i_reserved0_SHIFT           20

#define DIB_RX_POST_RING_CONFIGURATION_i_DATA_OFFSET_MASK          0x000ffc00
#define DIB_RX_POST_RING_CONFIGURATION_i_DATA_OFFSET_SHIFT         10

#define DIB_RX_POST_RING_CONFIGURATION_i_BUF_POOL_ID_MASK          0x00000380
#define DIB_RX_POST_RING_CONFIGURATION_i_BUF_POOL_ID_SHIFT         7

#define DIB_RX_POST_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_RX_POST_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_RX_POST_RING_CONFIGURATION_i_RD_IDX_DDR_RD_SUPRESS_MASK 0x00000002
#define DIB_RX_POST_RING_CONFIGURATION_i_RD_IDX_DDR_RD_SUPRESS_SHIFT 1

#define DIB_RX_POST_RING_CONFIGURATION_i_WR_IDX_DDR_WR_SUPRESS_MASK 0x00000001
#define DIB_RX_POST_RING_CONFIGURATION_i_WR_IDX_DDR_WR_SUPRESS_SHIFT 0

#define DIB_RX_POST_RING_CONFIGURATION_i_reserved0_MASK            0xfff00000
#define DIB_RX_POST_RING_CONFIGURATION_i_reserved0_SHIFT           20

#define DIB_RX_POST_RING_CONFIGURATION_i_DATA_OFFSET_MASK          0x000ffc00
#define DIB_RX_POST_RING_CONFIGURATION_i_DATA_OFFSET_SHIFT         10

#define DIB_RX_POST_RING_CONFIGURATION_i_BUF_POOL_ID_MASK          0x00000380
#define DIB_RX_POST_RING_CONFIGURATION_i_BUF_POOL_ID_SHIFT         7

#define DIB_RX_POST_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_RX_POST_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_RX_POST_RING_CONFIGURATION_i_RD_IDX_DDR_RD_SUPRESS_MASK 0x00000002
#define DIB_RX_POST_RING_CONFIGURATION_i_RD_IDX_DDR_RD_SUPRESS_SHIFT 1

#define DIB_RX_POST_RING_CONFIGURATION_i_WR_IDX_DDR_WR_SUPRESS_MASK 0x00000001
#define DIB_RX_POST_RING_CONFIGURATION_i_WR_IDX_DDR_WR_SUPRESS_SHIFT 0

#define DIB_RX_POST_RING_CONTROL_i_ARRAY_BASE                      0x80208a1c
#define DIB_RX_POST_RING_CONTROL_i_ARRAY_START                     0
#define DIB_RX_POST_RING_CONTROL_i_ARRAY_END                       1
#define DIB_RX_POST_RING_CONTROL_i_ARRAY_ELEMENT_SIZE              32

#define DIB_RX_POST_RING_CONTROL_i_reserved0_MASK                  0xfffffff8
#define DIB_RX_POST_RING_CONTROL_i_reserved0_SHIFT                 3

#define DIB_RX_POST_RING_CONTROL_i_DOORBELL_WR_SUPRESS_MASK        0x00000004
#define DIB_RX_POST_RING_CONTROL_i_DOORBELL_WR_SUPRESS_SHIFT       2

#define DIB_RX_POST_RING_CONTROL_i_RING_INIT_MASK                  0x00000002
#define DIB_RX_POST_RING_CONTROL_i_RING_INIT_SHIFT                 1

#define DIB_RX_POST_RING_CONTROL_i_RING_EN_MASK                    0x00000001
#define DIB_RX_POST_RING_CONTROL_i_RING_EN_SHIFT                   0

#define DIB_RX_POST_RING_CONTROL_i_reserved0_MASK                  0xfffffff8
#define DIB_RX_POST_RING_CONTROL_i_reserved0_SHIFT                 3

#define DIB_RX_POST_RING_CONTROL_i_DOORBELL_WR_SUPRESS_MASK        0x00000004
#define DIB_RX_POST_RING_CONTROL_i_DOORBELL_WR_SUPRESS_SHIFT       2

#define DIB_RX_POST_RING_CONTROL_i_RING_INIT_MASK                  0x00000002
#define DIB_RX_POST_RING_CONTROL_i_RING_INIT_SHIFT                 1

#define DIB_RX_POST_RING_CONTROL_i_RING_EN_MASK                    0x00000001
#define DIB_RX_POST_RING_CONTROL_i_RING_EN_SHIFT                   0

#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_ARRAY_BASE              0x80208a24
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_ARRAY_START             0
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_ARRAY_END               1
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE      32

#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_RX_POST_START_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_RX_POST_START_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_RX_POST_START_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_DDR_ADDRESS_LOW_i_RX_POST_START_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_ARRAY_BASE             0x80208a2c
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_ARRAY_START            0
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_ARRAY_END              1
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE     32

#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK         0xffffff00
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT        8

#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_RX_POST_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_RX_POST_START_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK         0xffffff00
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT        8

#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_RX_POST_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_DDR_ADDRESS_HIGH_i_RX_POST_START_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_READ_INDEX_i_ARRAY_BASE                   0x80208a34
#define DIB_RX_POST_RING_READ_INDEX_i_ARRAY_START                  0
#define DIB_RX_POST_RING_READ_INDEX_i_ARRAY_END                    1
#define DIB_RX_POST_RING_READ_INDEX_i_ARRAY_ELEMENT_SIZE           32

#define DIB_RX_POST_RING_READ_INDEX_i_reserved0_MASK               0xffff0000
#define DIB_RX_POST_RING_READ_INDEX_i_reserved0_SHIFT              16

#define DIB_RX_POST_RING_READ_INDEX_i_RD_IDX_MASK                  0x0000ffff
#define DIB_RX_POST_RING_READ_INDEX_i_RD_IDX_SHIFT                 0

#define DIB_RX_POST_RING_READ_INDEX_i_reserved0_MASK               0xffff0000
#define DIB_RX_POST_RING_READ_INDEX_i_reserved0_SHIFT              16

#define DIB_RX_POST_RING_READ_INDEX_i_RD_IDX_MASK                  0x0000ffff
#define DIB_RX_POST_RING_READ_INDEX_i_RD_IDX_SHIFT                 0

#define DIB_RX_POST_RING_WRITE_INDEX_i_ARRAY_BASE                  0x80208a3c
#define DIB_RX_POST_RING_WRITE_INDEX_i_ARRAY_START                 0
#define DIB_RX_POST_RING_WRITE_INDEX_i_ARRAY_END                   1
#define DIB_RX_POST_RING_WRITE_INDEX_i_ARRAY_ELEMENT_SIZE          32

#define DIB_RX_POST_RING_WRITE_INDEX_i_reserved0_MASK              0xffff0000
#define DIB_RX_POST_RING_WRITE_INDEX_i_reserved0_SHIFT             16

#define DIB_RX_POST_RING_WRITE_INDEX_i_WR_IDX_MASK                 0x0000ffff
#define DIB_RX_POST_RING_WRITE_INDEX_i_WR_IDX_SHIFT                0

#define DIB_RX_POST_RING_WRITE_INDEX_i_reserved0_MASK              0xffff0000
#define DIB_RX_POST_RING_WRITE_INDEX_i_reserved0_SHIFT             16

#define DIB_RX_POST_RING_WRITE_INDEX_i_WR_IDX_MASK                 0x0000ffff
#define DIB_RX_POST_RING_WRITE_INDEX_i_WR_IDX_SHIFT                0

#define DIB_RX_POST_RING_PRODUCER_INDEX_i_ARRAY_BASE               0x80208a44
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_ARRAY_START              0
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_ARRAY_END                1
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define DIB_RX_POST_RING_PRODUCER_INDEX_i_reserved0_MASK           0xfffe0000
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_reserved0_SHIFT          17

#define DIB_RX_POST_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK        0x0001ffff
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT       0

#define DIB_RX_POST_RING_PRODUCER_INDEX_i_reserved0_MASK           0xfffe0000
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_reserved0_SHIFT          17

#define DIB_RX_POST_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK        0x0001ffff
#define DIB_RX_POST_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT       0

#define DIB_RX_POST_RING_CONSUMER_INDEX_i_ARRAY_BASE               0x80208a4c
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_ARRAY_START              0
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_ARRAY_END                1
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define DIB_RX_POST_RING_CONSUMER_INDEX_i_reserved0_MASK           0xfffe0000
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_reserved0_SHIFT          17

#define DIB_RX_POST_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK        0x0001ffff
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT       0

#define DIB_RX_POST_RING_CONSUMER_INDEX_i_reserved0_MASK           0xfffe0000
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_reserved0_SHIFT          17

#define DIB_RX_POST_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK        0x0001ffff
#define DIB_RX_POST_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT       0

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_BASE  0x80208a54
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_END   1
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_RX_POST_WR_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_RX_POST_WR_IDX_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_RX_POST_WR_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_RX_POST_WR_IDX_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_BASE 0x80208a5c
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_END  1
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_WR_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_WR_IDX_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_WR_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_WR_IDX_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_BASE   0x80208a64
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_START  0
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_END    1
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_RX_POST_RD_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_RX_POST_RD_IDX_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_RX_POST_RD_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_LOW_i_RX_POST_RD_IDX_ADDR_LOW_SHIFT 0

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_BASE  0x80208a6c
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_END   1
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_RD_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_RD_IDX_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_RD_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RX_POST_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_RX_POST_RD_IDX_ADDR_HIGH_SHIFT 0

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_BASE 0x80208a74
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_END 1
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_RX_POST_DONGLE_DOORBELL_ADDR_LOW_MASK 0xffffffff
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_RX_POST_DONGLE_DOORBELL_ADDR_LOW_SHIFT 0

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_RX_POST_DONGLE_DOORBELL_ADDR_LOW_MASK 0xffffffff
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_LOW_i_RX_POST_DONGLE_DOORBELL_ADDR_LOW_SHIFT 0

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_BASE 0x80208a7c
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_END 1
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_RX_POST_DONGLE_DOORBELL_ADDR_HIGH_MASK 0x000000ff
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_RX_POST_DONGLE_DOORBELL_ADDR_HIGH_SHIFT 0

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_RX_POST_DONGLE_DOORBELL_ADDR_HIGH_MASK 0x000000ff
#define DIB_WIFI_DONGLE_RX_POST_RING_DOORBELL_ADDRESS_HIGH_i_RX_POST_DONGLE_DOORBELL_ADDR_HIGH_SHIFT 0

#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_ARRAY_BASE         0x80208a84
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_ARRAY_START        0
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_ARRAY_END          1
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_reserved0_MASK     0xffff0000
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_reserved0_SHIFT    16

#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_RX_POST_WRITE_VALUE_MASK 0x0000ffff
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_RX_POST_WRITE_VALUE_SHIFT 0

#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_reserved0_MASK     0xffff0000
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_reserved0_SHIFT    16

#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_RX_POST_WRITE_VALUE_MASK 0x0000ffff
#define DIB_RX_POST_RING_DOORBELL_WRITE_VALUE_i_RX_POST_WRITE_VALUE_SHIFT 0

#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_BASE 0x80208a8c
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_START 0
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_END 1
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE 32

#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_DONGLE_RX_POST_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_RX_POST_RING_STATUS0_i_ARRAY_BASE                      0x80208a94
#define DIB_RX_POST_RING_STATUS0_i_ARRAY_START                     0
#define DIB_RX_POST_RING_STATUS0_i_ARRAY_END                       1
#define DIB_RX_POST_RING_STATUS0_i_ARRAY_ELEMENT_SIZE              32

#define DIB_RX_POST_RING_STATUS0_i_reserved0_MASK                  0xffe00000
#define DIB_RX_POST_RING_STATUS0_i_reserved0_SHIFT                 21

#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_FULL_MASK            0x00100000
#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT           20

#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK           0x00080000
#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT          19

#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_FULL_MASK              0x00040000
#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_FULL_SHIFT             18

#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_EMPTY_MASK             0x00020000
#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT            17

#define DIB_RX_POST_RING_STATUS0_i_RING_LEVEL_MASK                 0x0001ffff
#define DIB_RX_POST_RING_STATUS0_i_RING_LEVEL_SHIFT                0

#define DIB_RX_POST_RING_STATUS0_i_reserved0_MASK                  0xffe00000
#define DIB_RX_POST_RING_STATUS0_i_reserved0_SHIFT                 21

#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_FULL_MASK            0x00100000
#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT           20

#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK           0x00080000
#define DIB_RX_POST_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT          19

#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_FULL_MASK              0x00040000
#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_FULL_SHIFT             18

#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_EMPTY_MASK             0x00020000
#define DIB_RX_POST_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT            17

#define DIB_RX_POST_RING_STATUS0_i_RING_LEVEL_MASK                 0x0001ffff
#define DIB_RX_POST_RING_STATUS0_i_RING_LEVEL_SHIFT                0

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_ARRAY_BASE            0x80208a9c
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_ARRAY_START           0
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_ARRAY_END             1
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE    32

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_reserved0_MASK        0xfffff800
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_reserved0_SHIFT       11

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_COR_EN_MASK  0x00000400
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_COR_EN_SHIFT 10

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_SAT_EN_MASK  0x00000200
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_SAT_EN_SHIFT 9

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_DOORBELL_WR_SUPRESS_MASK 0x00000100
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_DOORBELL_WR_SUPRESS_SHIFT 8

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_TX_COMPLETE_STATUS_FIFO_DIS_MASK 0x00000080
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_TX_COMPLETE_STATUS_FIFO_DIS_SHIFT 7

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_WR_IDX_DDR_RD_SUPRESS_MASK 0x00000002
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_WR_IDX_DDR_RD_SUPRESS_SHIFT 1

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_RD_IDX_DDR_WR_SUPRESS_MASK 0x00000001
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_RD_IDX_DDR_WR_SUPRESS_SHIFT 0

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_reserved0_MASK        0xfffff800
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_reserved0_SHIFT       11

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_COR_EN_MASK  0x00000400
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_COR_EN_SHIFT 10

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_SAT_EN_MASK  0x00000200
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_STAT_CNT_SAT_EN_SHIFT 9

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_DOORBELL_WR_SUPRESS_MASK 0x00000100
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_DOORBELL_WR_SUPRESS_SHIFT 8

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_TX_COMPLETE_STATUS_FIFO_DIS_MASK 0x00000080
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_TX_COMPLETE_STATUS_FIFO_DIS_SHIFT 7

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_WR_IDX_DDR_RD_SUPRESS_MASK 0x00000002
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_WR_IDX_DDR_RD_SUPRESS_SHIFT 1

#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_RD_IDX_DDR_WR_SUPRESS_MASK 0x00000001
#define DIB_TX_COMPLETE_RING_CONFIGURATION_i_RD_IDX_DDR_WR_SUPRESS_SHIFT 0

#define DIB_TX_COMPLETE_RING_CONTROL_i_ARRAY_BASE                  0x80208aa4
#define DIB_TX_COMPLETE_RING_CONTROL_i_ARRAY_START                 0
#define DIB_TX_COMPLETE_RING_CONTROL_i_ARRAY_END                   1
#define DIB_TX_COMPLETE_RING_CONTROL_i_ARRAY_ELEMENT_SIZE          32

#define DIB_TX_COMPLETE_RING_CONTROL_i_reserved0_MASK              0xfffffffc
#define DIB_TX_COMPLETE_RING_CONTROL_i_reserved0_SHIFT             2

#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_INIT_MASK              0x00000002
#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_INIT_SHIFT             1

#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_EN_MASK                0x00000001
#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_EN_SHIFT               0

#define DIB_TX_COMPLETE_RING_CONTROL_i_reserved0_MASK              0xfffffffc
#define DIB_TX_COMPLETE_RING_CONTROL_i_reserved0_SHIFT             2

#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_INIT_MASK              0x00000002
#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_INIT_SHIFT             1

#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_EN_MASK                0x00000001
#define DIB_TX_COMPLETE_RING_CONTROL_i_RING_EN_SHIFT               0

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_ARRAY_BASE          0x80208aac
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_ARRAY_START         0
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_ARRAY_END           1
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE  32

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_TX_COMPLETE_START_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_TX_COMPLETE_START_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_TX_COMPLETE_START_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_LOW_i_TX_COMPLETE_START_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_ARRAY_BASE         0x80208ab4
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_ARRAY_START        0
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_ARRAY_END          1
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK     0xffffff00
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT    8

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_TX_COMPLETE_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_TX_COMPLETE_START_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK     0xffffff00
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT    8

#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_TX_COMPLETE_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_DDR_ADDRESS_HIGH_i_TX_COMPLETE_START_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_INDEX_i_ARRAY_BASE               0x80208abc
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_ARRAY_START              0
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_ARRAY_END                1
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define DIB_TX_COMPLETE_RING_READ_INDEX_i_reserved0_MASK           0xffff0000
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_reserved0_SHIFT          16

#define DIB_TX_COMPLETE_RING_READ_INDEX_i_RD_IDX_MASK              0x0000ffff
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_RD_IDX_SHIFT             0

#define DIB_TX_COMPLETE_RING_READ_INDEX_i_reserved0_MASK           0xffff0000
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_reserved0_SHIFT          16

#define DIB_TX_COMPLETE_RING_READ_INDEX_i_RD_IDX_MASK              0x0000ffff
#define DIB_TX_COMPLETE_RING_READ_INDEX_i_RD_IDX_SHIFT             0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_ARRAY_BASE              0x80208ac4
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_ARRAY_START             0
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_ARRAY_END               1
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_ARRAY_ELEMENT_SIZE      32

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_reserved0_MASK          0xffff0000
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_reserved0_SHIFT         16

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_WR_IDX_MASK             0x0000ffff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_WR_IDX_SHIFT            0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_reserved0_MASK          0xffff0000
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_reserved0_SHIFT         16

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_WR_IDX_MASK             0x0000ffff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_i_WR_IDX_SHIFT            0

#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_ARRAY_BASE           0x80208acc
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_ARRAY_START          0
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_ARRAY_END            1
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE   32

#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_reserved0_MASK       0xfffe0000
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_reserved0_SHIFT      17

#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK    0x0001ffff
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT   0

#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_reserved0_MASK       0xfffe0000
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_reserved0_SHIFT      17

#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK    0x0001ffff
#define DIB_TX_COMPLETE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT   0

#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_ARRAY_BASE           0x80208ad4
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_ARRAY_START          0
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_ARRAY_END            1
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE   32

#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_reserved0_MASK       0xfffe0000
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_reserved0_SHIFT      17

#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK    0x0001ffff
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT   0

#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_reserved0_MASK       0xfffe0000
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_reserved0_SHIFT      17

#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK    0x0001ffff
#define DIB_TX_COMPLETE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT   0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_BASE 0x80208adc
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_WR_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_WR_IDX_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_WR_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_WR_IDX_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_BASE 0x80208ae4
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_WR_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_WR_IDX_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_WR_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_WRITE_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_WR_IDX_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_BASE 0x80208aec
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_RD_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_RD_IDX_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_RD_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_LOW_i_TX_COMPLETE_RD_IDX_ADDR_LOW_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_BASE 0x80208af4
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_RD_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_RD_IDX_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_RD_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_TX_COMPLETE_RING_READ_INDEX_DDR_ADDRESS_HIGH_i_TX_COMPLETE_RD_IDX_ADDR_HIGH_SHIFT 0

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_BASE 0x80208afc
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_END 1
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_LOW_MASK 0xffffffff
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_LOW_SHIFT 0

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_LOW_MASK 0xffffffff
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_LOW_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_LOW_SHIFT 0

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_BASE 0x80208b04
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_END 1
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_HIGH_MASK 0x000000ff
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_HIGH_SHIFT 0

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_HIGH_MASK 0x000000ff
#define DIB_WIFI_DONGLE_TX_COMPLETE_RING_DOORBELL_ADDRESS_HIGH_i_TX_COMPLETE_DONGLE_DOORBELL_ADDR_HIGH_SHIFT 0

#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_ARRAY_BASE     0x80208b0c
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_ARRAY_START    0
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_ARRAY_END      1
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_reserved0_MASK 0xffff0000
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_reserved0_SHIFT 16

#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_TX_COMPLETE_WRITE_VALUE_MASK 0x0000ffff
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_TX_COMPLETE_WRITE_VALUE_SHIFT 0

#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_reserved0_MASK 0xffff0000
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_reserved0_SHIFT 16

#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_TX_COMPLETE_WRITE_VALUE_MASK 0x0000ffff
#define DIB_TX_COMPLETE_RING_DOORBELL_WRITE_VALUE_i_TX_COMPLETE_WRITE_VALUE_SHIFT 0

#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_BASE 0x80208b14
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_START 0
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_END 1
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE 32

#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_DONGLE_TX_COMPLETE_DOORBELL_WRITE_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_TX_COMPLETE_RING_STATUS0_i_ARRAY_BASE                  0x80208b1c
#define DIB_TX_COMPLETE_RING_STATUS0_i_ARRAY_START                 0
#define DIB_TX_COMPLETE_RING_STATUS0_i_ARRAY_END                   1
#define DIB_TX_COMPLETE_RING_STATUS0_i_ARRAY_ELEMENT_SIZE          32

#define DIB_TX_COMPLETE_RING_STATUS0_i_reserved0_MASK              0xffe00000
#define DIB_TX_COMPLETE_RING_STATUS0_i_reserved0_SHIFT             21

#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_FULL_MASK        0x00100000
#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT       20

#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK       0x00080000
#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT      19

#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_FULL_MASK          0x00040000
#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_FULL_SHIFT         18

#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_EMPTY_MASK         0x00020000
#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT        17

#define DIB_TX_COMPLETE_RING_STATUS0_i_RING_LEVEL_MASK             0x0001ffff
#define DIB_TX_COMPLETE_RING_STATUS0_i_RING_LEVEL_SHIFT            0

#define DIB_TX_COMPLETE_RING_STATUS0_i_reserved0_MASK              0xffe00000
#define DIB_TX_COMPLETE_RING_STATUS0_i_reserved0_SHIFT             21

#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_FULL_MASK        0x00100000
#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT       20

#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK       0x00080000
#define DIB_TX_COMPLETE_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT      19

#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_FULL_MASK          0x00040000
#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_FULL_SHIFT         18

#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_EMPTY_MASK         0x00020000
#define DIB_TX_COMPLETE_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT        17

#define DIB_TX_COMPLETE_RING_STATUS0_i_RING_LEVEL_MASK             0x0001ffff
#define DIB_TX_COMPLETE_RING_STATUS0_i_RING_LEVEL_SHIFT            0

#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_ARRAY_BASE 0x80208b24
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_TIMEOUT_MASK 0xffff0000
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_TIMEOUT_SHIFT 16

#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_THRESHOLD_MASK 0x0000ffff
#define DIB_TX_COMPLETE_RING_STATUS_FIFO_INTERRUPT_COALESCING_CONFIGURATION_i_THRESHOLD_SHIFT 0

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_ARRAY_BASE     0x80208b2c
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_ARRAY_START    0
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_ARRAY_END      1
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_COUNT_MASK     0xffffffff
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_COUNT_SHIFT    0

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_COUNT_MASK     0xffffffff
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_COUNTER_i_COUNT_SHIFT    0

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_ARRAY_BASE 0x80208b34
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_ARRAY_START 0
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_ARRAY_END 1
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_ARRAY_ELEMENT_SIZE 32

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_COUNT_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_COUNT_SHIFT 0

#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_COUNT_MASK 0xffffffff
#define DIB_TX_COMPLETE_RING_BACKPRESSURE_DURATION_COUNTER_i_COUNT_SHIFT 0

#define DIB_RECYCLE_RING_CONFIGURATION_i_ARRAY_BASE                0x80208b3c
#define DIB_RECYCLE_RING_CONFIGURATION_i_ARRAY_START               0
#define DIB_RECYCLE_RING_CONFIGURATION_i_ARRAY_END                 1
#define DIB_RECYCLE_RING_CONFIGURATION_i_ARRAY_ELEMENT_SIZE        32

#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved0_MASK            0xffffff80
#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved0_SHIFT           7

#define DIB_RECYCLE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_RECYCLE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved1_MASK            0x00000003
#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved1_SHIFT           0

#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved0_MASK            0xffffff80
#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved0_SHIFT           7

#define DIB_RECYCLE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_MASK 0x0000007c
#define DIB_RECYCLE_RING_CONFIGURATION_i_SYSRAM_RING_SIZE_LOG2_SHIFT 2

#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved1_MASK            0x00000003
#define DIB_RECYCLE_RING_CONFIGURATION_i_reserved1_SHIFT           0

#define DIB_RECYCLE_RING_CONTROL_i_ARRAY_BASE                      0x80208b44
#define DIB_RECYCLE_RING_CONTROL_i_ARRAY_START                     0
#define DIB_RECYCLE_RING_CONTROL_i_ARRAY_END                       1
#define DIB_RECYCLE_RING_CONTROL_i_ARRAY_ELEMENT_SIZE              32

#define DIB_RECYCLE_RING_CONTROL_i_reserved0_MASK                  0xfffffffc
#define DIB_RECYCLE_RING_CONTROL_i_reserved0_SHIFT                 2

#define DIB_RECYCLE_RING_CONTROL_i_RING_INIT_MASK                  0x00000002
#define DIB_RECYCLE_RING_CONTROL_i_RING_INIT_SHIFT                 1

#define DIB_RECYCLE_RING_CONTROL_i_RING_EN_MASK                    0x00000001
#define DIB_RECYCLE_RING_CONTROL_i_RING_EN_SHIFT                   0

#define DIB_RECYCLE_RING_CONTROL_i_reserved0_MASK                  0xfffffffc
#define DIB_RECYCLE_RING_CONTROL_i_reserved0_SHIFT                 2

#define DIB_RECYCLE_RING_CONTROL_i_RING_INIT_MASK                  0x00000002
#define DIB_RECYCLE_RING_CONTROL_i_RING_INIT_SHIFT                 1

#define DIB_RECYCLE_RING_CONTROL_i_RING_EN_MASK                    0x00000001
#define DIB_RECYCLE_RING_CONTROL_i_RING_EN_SHIFT                   0

#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_ARRAY_BASE              0x80208b4c
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_ARRAY_START             0
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_ARRAY_END               1
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE      32

#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_RECYCLE_START_ADDR_LOW_MASK 0xffffffff
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_RECYCLE_START_ADDR_LOW_SHIFT 0

#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_RECYCLE_START_ADDR_LOW_MASK 0xffffffff
#define DIB_RECYCLE_RING_DDR_ADDRESS_LOW_i_RECYCLE_START_ADDR_LOW_SHIFT 0

#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_ARRAY_BASE             0x80208b54
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_ARRAY_START            0
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_ARRAY_END              1
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE     32

#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK         0xffffff00
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT        8

#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_RECYCLE_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_RECYCLE_START_ADDR_HIGH_SHIFT 0

#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_reserved0_MASK         0xffffff00
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_reserved0_SHIFT        8

#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_RECYCLE_START_ADDR_HIGH_MASK 0x000000ff
#define DIB_RECYCLE_RING_DDR_ADDRESS_HIGH_i_RECYCLE_START_ADDR_HIGH_SHIFT 0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_ARRAY_BASE               0x80208b5c
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_ARRAY_START              0
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_ARRAY_END                1
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_CONSUMER_IDX_MASK        0xffff0000
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_CONSUMER_IDX_SHIFT       16

#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK        0x0000ffff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT       0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_CONSUMER_IDX_MASK        0xffff0000
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_CONSUMER_IDX_SHIFT       16

#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_MASK        0x0000ffff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_i_PRODUCER_IDX_SHIFT       0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_ARRAY_BASE 0x80208b64
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_ARRAY_START 0
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_ARRAY_END 1
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_RECYCLE_PRODUCER_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_RECYCLE_PRODUCER_IDX_ADDR_LOW_SHIFT 0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_RECYCLE_PRODUCER_IDX_ADDR_LOW_MASK 0xffffffff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_LOW_i_RECYCLE_PRODUCER_IDX_ADDR_LOW_SHIFT 0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_BASE 0x80208b6c
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_START 0
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_END 1
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_RECYCLE_PRODUCER_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_RECYCLE_PRODUCER_IDX_ADDR_HIGH_SHIFT 0

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_reserved0_MASK 0xffffff00
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_reserved0_SHIFT 8

#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_RECYCLE_PRODUCER_IDX_ADDR_HIGH_MASK 0x000000ff
#define DIB_RECYCLE_RING_PRODUCER_INDEX_DDR_ADDRESS_HIGH_i_RECYCLE_PRODUCER_IDX_ADDR_HIGH_SHIFT 0

#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_ARRAY_BASE               0x80208b74
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_ARRAY_START              0
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_ARRAY_END                1
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_ARRAY_ELEMENT_SIZE       32

#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK        0x0000ffff
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT       0

#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_reserved0_MASK           0xffff0000
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_reserved0_SHIFT          16

#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_MASK        0x0000ffff
#define DIB_RECYCLE_RING_CONSUMER_INDEX_i_CONSUMER_IDX_SHIFT       0

#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_ARRAY_BASE      0x80208b7c
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_ARRAY_START     0
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_ARRAY_END       1
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_ARRAY_ELEMENT_SIZE 32

#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_TIMEOUT_MASK 0xffff0000
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_TIMEOUT_SHIFT 16

#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_THRESHOLD_MASK 0x0000ffff
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_THRESHOLD_SHIFT 0

#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_TIMEOUT_MASK 0xffff0000
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_TIMEOUT_SHIFT 16

#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_THRESHOLD_MASK 0x0000ffff
#define DIB_RECYCLE_RING_INTERRUPT_CONFIGURATION_i_INTR_THRESHOLD_SHIFT 0

#define DIB_RECYCLE_RING_STATUS0_i_ARRAY_BASE                      0x80208b84
#define DIB_RECYCLE_RING_STATUS0_i_ARRAY_START                     0
#define DIB_RECYCLE_RING_STATUS0_i_ARRAY_END                       1
#define DIB_RECYCLE_RING_STATUS0_i_ARRAY_ELEMENT_SIZE              32

#define DIB_RECYCLE_RING_STATUS0_i_reserved0_MASK                  0xffe00000
#define DIB_RECYCLE_RING_STATUS0_i_reserved0_SHIFT                 21

#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_FULL_MASK            0x00100000
#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT           20

#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK           0x00080000
#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT          19

#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_FULL_MASK              0x00040000
#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_FULL_SHIFT             18

#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_EMPTY_MASK             0x00020000
#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT            17

#define DIB_RECYCLE_RING_STATUS0_i_RING_LEVEL_MASK                 0x0001ffff
#define DIB_RECYCLE_RING_STATUS0_i_RING_LEVEL_SHIFT                0

#define DIB_RECYCLE_RING_STATUS0_i_reserved0_MASK                  0xffe00000
#define DIB_RECYCLE_RING_STATUS0_i_reserved0_SHIFT                 21

#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_FULL_MASK            0x00100000
#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_FULL_SHIFT           20

#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_EMPTY_MASK           0x00080000
#define DIB_RECYCLE_RING_STATUS0_i_LOCAL_RING_EMPTY_SHIFT          19

#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_FULL_MASK              0x00040000
#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_FULL_SHIFT             18

#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_EMPTY_MASK             0x00020000
#define DIB_RECYCLE_RING_STATUS0_i_DDR_RING_EMPTY_SHIFT            17

#define DIB_RECYCLE_RING_STATUS0_i_RING_LEVEL_MASK                 0x0001ffff
#define DIB_RECYCLE_RING_STATUS0_i_RING_LEVEL_SHIFT                0

#define NATCACHE_NATC_CONTROL_STATUS_DDR_ENABLE_MASK               0x80000000
#define NATCACHE_NATC_CONTROL_STATUS_DDR_ENABLE_SHIFT              31

#define NATCACHE_NATC_CONTROL_STATUS_NATC_ADD_COMMAND_SPEEDUP_MODE_MASK 0x40000000
#define NATCACHE_NATC_CONTROL_STATUS_NATC_ADD_COMMAND_SPEEDUP_MODE_SHIFT 30

#define NATCACHE_NATC_CONTROL_STATUS_unused0_MASK                  0x20000000
#define NATCACHE_NATC_CONTROL_STATUS_unused0_SHIFT                 29

#define NATCACHE_NATC_CONTROL_STATUS_NATC_INIT_DONE_MASK           0x10000000
#define NATCACHE_NATC_CONTROL_STATUS_NATC_INIT_DONE_SHIFT          28

#define NATCACHE_NATC_CONTROL_STATUS_DDR_64BIT_IN_128BIT_SWAP_CONTROL_MASK 0x08000000
#define NATCACHE_NATC_CONTROL_STATUS_DDR_64BIT_IN_128BIT_SWAP_CONTROL_SHIFT 27

#define NATCACHE_NATC_CONTROL_STATUS_SMEM_32BIT_IN_64BIT_SWAP_CONTROL_MASK 0x04000000
#define NATCACHE_NATC_CONTROL_STATUS_SMEM_32BIT_IN_64BIT_SWAP_CONTROL_SHIFT 26

#define NATCACHE_NATC_CONTROL_STATUS_SMEM_8BIT_IN_32BIT_SWAP_CONTROL_MASK 0x02000000
#define NATCACHE_NATC_CONTROL_STATUS_SMEM_8BIT_IN_32BIT_SWAP_CONTROL_SHIFT 25

#define NATCACHE_NATC_CONTROL_STATUS_DDR_SWAP_ALL_CONTROL_MASK     0x01000000
#define NATCACHE_NATC_CONTROL_STATUS_DDR_SWAP_ALL_CONTROL_SHIFT    24

#define NATCACHE_NATC_CONTROL_STATUS_REPEATED_KEY_DET_EN_MASK      0x00800000
#define NATCACHE_NATC_CONTROL_STATUS_REPEATED_KEY_DET_EN_SHIFT     23

#define NATCACHE_NATC_CONTROL_STATUS_REG_32BIT_IN_64BIT_SWAP_CONTROL_MASK 0x00400000
#define NATCACHE_NATC_CONTROL_STATUS_REG_32BIT_IN_64BIT_SWAP_CONTROL_SHIFT 22

#define NATCACHE_NATC_CONTROL_STATUS_REG_8BIT_IN_32BIT_SWAP_CONTROL_MASK 0x00200000
#define NATCACHE_NATC_CONTROL_STATUS_REG_8BIT_IN_32BIT_SWAP_CONTROL_SHIFT 21

#define NATCACHE_NATC_CONTROL_STATUS_DDR_PENDING_HASH_MODE_MASK    0x001c0000
#define NATCACHE_NATC_CONTROL_STATUS_DDR_PENDING_HASH_MODE_SHIFT   18

#define NATCACHE_NATC_CONTROL_STATUS_PENDING_FIFO_ENTRY_CHECK_ENABLE_MASK 0x00020000
#define NATCACHE_NATC_CONTROL_STATUS_PENDING_FIFO_ENTRY_CHECK_ENABLE_SHIFT 17

#define NATCACHE_NATC_CONTROL_STATUS_CACHE_UPDATE_ON_DDR_MISS_MASK 0x00010000
#define NATCACHE_NATC_CONTROL_STATUS_CACHE_UPDATE_ON_DDR_MISS_SHIFT 16

#define NATCACHE_NATC_CONTROL_STATUS_DDR_DISABLE_ON_REG_LOOKUP_MASK 0x00008000
#define NATCACHE_NATC_CONTROL_STATUS_DDR_DISABLE_ON_REG_LOOKUP_SHIFT 15

#define NATCACHE_NATC_CONTROL_STATUS_NAT_HASH_MODE_MASK            0x00007000
#define NATCACHE_NATC_CONTROL_STATUS_NAT_HASH_MODE_SHIFT           12

#define NATCACHE_NATC_CONTROL_STATUS_MULTI_HASH_LIMIT_MASK         0x00000f00
#define NATCACHE_NATC_CONTROL_STATUS_MULTI_HASH_LIMIT_SHIFT        8

#define NATCACHE_NATC_CONTROL_STATUS_DECR_COUNT_WRAPAROUND_ENABLE_MASK 0x00000080
#define NATCACHE_NATC_CONTROL_STATUS_DECR_COUNT_WRAPAROUND_ENABLE_SHIFT 7

#define NATCACHE_NATC_CONTROL_STATUS_NAT_ARB_ST_MASK               0x00000060
#define NATCACHE_NATC_CONTROL_STATUS_NAT_ARB_ST_SHIFT              5
#define NATCACHE_NATC_CONTROL_STATUS_NAT_ARB_ST_RR                 0
#define NATCACHE_NATC_CONTROL_STATUS_NAT_ARB_ST_Strict             1
#define NATCACHE_NATC_CONTROL_STATUS_NAT_ARB_ST_Strict_R           2

#define NATCACHE_NATC_CONTROL_STATUS_NATC_SMEM_INCREMENT_ON_REG_LOOKUP_MASK 0x00000010
#define NATCACHE_NATC_CONTROL_STATUS_NATC_SMEM_INCREMENT_ON_REG_LOOKUP_SHIFT 4

#define NATCACHE_NATC_CONTROL_STATUS_NATC_SMEM_CLEAR_BY_UPDATE_DISABLE_MASK 0x00000008
#define NATCACHE_NATC_CONTROL_STATUS_NATC_SMEM_CLEAR_BY_UPDATE_DISABLE_SHIFT 3

#define NATCACHE_NATC_CONTROL_STATUS_REGFILE_FIFO_RESET_MASK       0x00000004
#define NATCACHE_NATC_CONTROL_STATUS_REGFILE_FIFO_RESET_SHIFT      2

#define NATCACHE_NATC_CONTROL_STATUS_NATC_ENABLE_MASK              0x00000002
#define NATCACHE_NATC_CONTROL_STATUS_NATC_ENABLE_SHIFT             1

#define NATCACHE_NATC_CONTROL_STATUS_NATC_RESET_MASK               0x00000001
#define NATCACHE_NATC_CONTROL_STATUS_NATC_RESET_SHIFT              0

#define NATCACHE_NATC_CONTROL_STATUS2_unused3_MASK                 0xe0000000
#define NATCACHE_NATC_CONTROL_STATUS2_unused3_SHIFT                29

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_32BIT_IN_64BIT_SWAP_CONTROL_MASK 0x10000000
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_32BIT_IN_64BIT_SWAP_CONTROL_SHIFT 28

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_8BIT_IN_32BIT_SWAP_CONTROL_MASK 0x08000000
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_8BIT_IN_32BIT_SWAP_CONTROL_SHIFT 27

#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_LOOKUP_BLOCKING_MODE_MASK 0x04000000
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_LOOKUP_BLOCKING_MODE_SHIFT 26

#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_TICK_MASK          0x02000000
#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_TICK_SHIFT         25
#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_TICK_CLOCK         0
#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_TICK_PACKET        1

#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_MASK               0x01f00000
#define NATCACHE_NATC_CONTROL_STATUS2_AGE_TIMER_SHIFT              20

#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_MASK              0x000f0000
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_SHIFT             16
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_LRU_THEN_HIT_COUNT 0
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_HIT_COUNT_THEN_LRU 1
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_LRU               2
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_HIT_COUNT         3
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_LRU_THEN_RANDOM   4
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_HIT_COUNT_THEN_RANDOM 5
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_RANDOM            6
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_HIGHEST_HIT_COUNT_THEN_LRU 7
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_LRU_THEN_BYTE_COUNT 8
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_BYTE_COUNT_THEN_LRU 9
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_BYTE_COUNT        10
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_BYTE_COUNT_THEN_RANDOM 11
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_ALGO_HIGHEST_BYTE_COUNT_THEN_LRU 12

#define NATCACHE_NATC_CONTROL_STATUS2_unused2_MASK                 0x0000ff00
#define NATCACHE_NATC_CONTROL_STATUS2_unused2_SHIFT                8

#define NATCACHE_NATC_CONTROL_STATUS2_unused1_MASK                 0x000000c0
#define NATCACHE_NATC_CONTROL_STATUS2_unused1_SHIFT                6

#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_UPDATE_ON_REG_DDR_LOOKUP_MASK 0x00000020
#define NATCACHE_NATC_CONTROL_STATUS2_CACHE_UPDATE_ON_REG_DDR_LOOKUP_SHIFT 5

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_COUNTER_8BIT_IN_32BIT_SWAP_CONTROL_MASK 0x00000010
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_COUNTER_8BIT_IN_32BIT_SWAP_CONTROL_SHIFT 4

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_HASH_SWAP_MASK           0x00000008
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_HASH_SWAP_SHIFT          3

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_REPLACE_DUPLICATED_CACHED_ENTRY_ENABLE_MASK 0x00000004
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_REPLACE_DUPLICATED_CACHED_ENTRY_ENABLE_SHIFT 2

#define NATCACHE_NATC_CONTROL_STATUS2_DDR_LOOKUP_PENDING_FIFO_MODE_DISABLE_MASK 0x00000002
#define NATCACHE_NATC_CONTROL_STATUS2_DDR_LOOKUP_PENDING_FIFO_MODE_DISABLE_SHIFT 1

#define NATCACHE_NATC_CONTROL_STATUS2_unused0_MASK                 0x00000001
#define NATCACHE_NATC_CONTROL_STATUS2_unused0_SHIFT                0

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL7_MASK             0x80000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL7_SHIFT            31

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL6_MASK             0x40000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL6_SHIFT            30

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL5_MASK             0x20000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL5_SHIFT            29

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL4_MASK             0x10000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL4_SHIFT            28

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL3_MASK             0x08000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL3_SHIFT            27

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL2_MASK             0x04000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL2_SHIFT            26

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL1_MASK             0x02000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL1_SHIFT            25

#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL0_MASK             0x01000000
#define NATCACHE_NATC_TABLE_CONTROL_SMEM_DIS_TBL0_SHIFT            24

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL7_MASK   0x00800000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL7_SHIFT  23

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL6_MASK   0x00400000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL6_SHIFT  22

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL5_MASK   0x00200000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL5_SHIFT  21

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL4_MASK   0x00100000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL4_SHIFT  20

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL3_MASK   0x00080000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL3_SHIFT  19

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL2_MASK   0x00040000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL2_SHIFT  18

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL1_MASK   0x00020000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL1_SHIFT  17

#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL0_MASK   0x00010000
#define NATCACHE_NATC_TABLE_CONTROL_VAR_CONTEXT_LEN_EN_TBL0_SHIFT  16

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL7_MASK              0x00008000
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL7_SHIFT             15

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL7_MASK        0x00004000
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL7_SHIFT       14

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL6_MASK              0x00002000
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL6_SHIFT             13

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL6_MASK        0x00001000
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL6_SHIFT       12

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL5_MASK              0x00000800
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL5_SHIFT             11

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL5_MASK        0x00000400
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL5_SHIFT       10

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL4_MASK              0x00000200
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL4_SHIFT             9

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL4_MASK        0x00000100
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL4_SHIFT       8

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL3_MASK              0x00000080
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL3_SHIFT             7

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL3_MASK        0x00000040
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL3_SHIFT       6

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL2_MASK              0x00000020
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL2_SHIFT             5

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL2_MASK        0x00000010
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL2_SHIFT       4

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL1_MASK              0x00000008
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL1_SHIFT             3

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL1_MASK        0x00000004
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL1_SHIFT       2

#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL0_MASK              0x00000002
#define NATCACHE_NATC_TABLE_CONTROL_KEY_LEN_TBL0_SHIFT             1

#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL0_MASK        0x00000001
#define NATCACHE_NATC_TABLE_CONTROL_NON_CACHEABLE_TBL0_SHIFT       0

#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_DDR_MISS_MASK         0x80000000
#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_DDR_MISS_SHIFT        31

#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_DDR_BIN_MASK          0x70000000
#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_DDR_BIN_SHIFT         28

#define NATCACHE_NAT0_COMMAND_STATUS_DEL_CMD_DDR_BIN_MASK          0x0ff00000
#define NATCACHE_NAT0_COMMAND_STATUS_DEL_CMD_DDR_BIN_SHIFT         20

#define NATCACHE_NAT0_COMMAND_STATUS_reserved0_MASK                0x00080000
#define NATCACHE_NAT0_COMMAND_STATUS_reserved0_SHIFT               19

#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_MODE_MASK             0x00040000
#define NATCACHE_NAT0_COMMAND_STATUS_ADD_CMD_MODE_SHIFT            18

#define NATCACHE_NAT0_COMMAND_STATUS_DEL_CMD_MODE_MASK             0x00020000
#define NATCACHE_NAT0_COMMAND_STATUS_DEL_CMD_MODE_SHIFT            17

#define NATCACHE_NAT0_COMMAND_STATUS_CACHE_FLUSH_MASK              0x00010000
#define NATCACHE_NAT0_COMMAND_STATUS_CACHE_FLUSH_SHIFT             16

#define NATCACHE_NAT0_COMMAND_STATUS_DECR_COUNT_MASK               0x00008000
#define NATCACHE_NAT0_COMMAND_STATUS_DECR_COUNT_SHIFT              15

#define NATCACHE_NAT0_COMMAND_STATUS_NAT_TBL_MASK                  0x00007000
#define NATCACHE_NAT0_COMMAND_STATUS_NAT_TBL_SHIFT                 12

#define NATCACHE_NAT0_COMMAND_STATUS_MULTIHASH_COUNT_MASK          0x00000f00
#define NATCACHE_NAT0_COMMAND_STATUS_MULTIHASH_COUNT_SHIFT         8

#define NATCACHE_NAT0_COMMAND_STATUS_CACHE_HIT_MASK                0x00000080
#define NATCACHE_NAT0_COMMAND_STATUS_CACHE_HIT_SHIFT               7

#define NATCACHE_NAT0_COMMAND_STATUS_MISS_MASK                     0x00000040
#define NATCACHE_NAT0_COMMAND_STATUS_MISS_SHIFT                    6

#define NATCACHE_NAT0_COMMAND_STATUS_ERROR_MASK                    0x00000020
#define NATCACHE_NAT0_COMMAND_STATUS_ERROR_SHIFT                   5

#define NATCACHE_NAT0_COMMAND_STATUS_BUSY_MASK                     0x00000010
#define NATCACHE_NAT0_COMMAND_STATUS_BUSY_SHIFT                    4

#define NATCACHE_NAT0_COMMAND_STATUS_unused0_MASK                  0x00000008
#define NATCACHE_NAT0_COMMAND_STATUS_unused0_SHIFT                 3

#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_MASK                  0x00000007
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_SHIFT                 0
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_NOP                   0
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_Lookup                1
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_Add                   2
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_Del                   3
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_Hash                  4
#define NATCACHE_NAT0_COMMAND_STATUS_COMMAND_Cache                 6

#define NATCACHE_NAT0_HASH_HASH_MASK                               0xffffffff
#define NATCACHE_NAT0_HASH_HASH_SHIFT                              0

#define NATCACHE_NAT0_HIT_COUNT_HIT_COUNT_MASK                     0xffffffff
#define NATCACHE_NAT0_HIT_COUNT_HIT_COUNT_SHIFT                    0

#define NATCACHE_NAT0_BYTE_COUNT_BYTE_COUNT_MASK                   0xffffffff
#define NATCACHE_NAT0_BYTE_COUNT_BYTE_COUNT_SHIFT                  0

#define NATCACHE_NAT0_PKT_LEN_unused_MASK                          0xffff0000
#define NATCACHE_NAT0_PKT_LEN_unused_SHIFT                         16

#define NATCACHE_NAT0_PKT_LEN_PKT_LEN_MASK                         0x0000ffff
#define NATCACHE_NAT0_PKT_LEN_PKT_LEN_SHIFT                        0

#define NATCACHE_NAT0_KEY_RESULTi_ARRAY_BASE                       0x80230030
#define NATCACHE_NAT0_KEY_RESULTi_ARRAY_START                      0
#define NATCACHE_NAT0_KEY_RESULTi_ARRAY_END                        61
#define NATCACHE_NAT0_KEY_RESULTi_ARRAY_ELEMENT_SIZE               32

#define NATCACHE_NAT0_KEY_RESULTi_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULTi_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT0_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT0_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT1_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT1_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT2_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT2_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT3_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT3_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT4_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT4_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT5_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT5_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT6_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT6_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT7_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT7_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT8_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT8_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT9_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT0_KEY_RESULT9_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT0_KEY_RESULT10_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT10_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT11_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT11_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT12_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT12_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT13_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT13_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT14_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT14_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT15_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT15_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT16_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT16_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT17_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT17_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT18_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT18_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT19_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT19_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT20_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT20_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT21_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT21_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT22_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT22_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT23_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT23_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT24_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT24_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT25_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT25_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT26_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT26_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT27_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT27_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT28_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT28_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT29_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT29_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT30_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT30_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT31_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT31_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT32_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT32_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT33_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT33_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT34_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT34_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT35_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT35_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT36_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT36_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT37_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT37_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT38_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT38_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT39_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT39_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT40_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT40_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT41_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT41_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT42_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT42_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT43_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT43_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT44_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT44_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT45_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT45_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT46_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT46_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT47_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT47_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT48_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT48_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT49_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT49_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT50_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT50_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT51_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT51_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT52_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT52_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT53_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT53_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT54_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT54_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT55_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT55_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT56_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT56_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT57_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT57_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT58_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT58_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT59_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT59_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT60_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT60_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT0_KEY_RESULT61_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT0_KEY_RESULT61_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_DDR_MISS_MASK         0x80000000
#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_DDR_MISS_SHIFT        31

#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_DDR_BIN_MASK          0x70000000
#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_DDR_BIN_SHIFT         28

#define NATCACHE_NAT1_COMMAND_STATUS_DEL_CMD_DDR_BIN_MASK          0x0ff00000
#define NATCACHE_NAT1_COMMAND_STATUS_DEL_CMD_DDR_BIN_SHIFT         20

#define NATCACHE_NAT1_COMMAND_STATUS_reserved0_MASK                0x00080000
#define NATCACHE_NAT1_COMMAND_STATUS_reserved0_SHIFT               19

#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_MODE_MASK             0x00040000
#define NATCACHE_NAT1_COMMAND_STATUS_ADD_CMD_MODE_SHIFT            18

#define NATCACHE_NAT1_COMMAND_STATUS_DEL_CMD_MODE_MASK             0x00020000
#define NATCACHE_NAT1_COMMAND_STATUS_DEL_CMD_MODE_SHIFT            17

#define NATCACHE_NAT1_COMMAND_STATUS_CACHE_FLUSH_MASK              0x00010000
#define NATCACHE_NAT1_COMMAND_STATUS_CACHE_FLUSH_SHIFT             16

#define NATCACHE_NAT1_COMMAND_STATUS_DECR_COUNT_MASK               0x00008000
#define NATCACHE_NAT1_COMMAND_STATUS_DECR_COUNT_SHIFT              15

#define NATCACHE_NAT1_COMMAND_STATUS_NAT_TBL_MASK                  0x00007000
#define NATCACHE_NAT1_COMMAND_STATUS_NAT_TBL_SHIFT                 12

#define NATCACHE_NAT1_COMMAND_STATUS_MULTIHASH_COUNT_MASK          0x00000f00
#define NATCACHE_NAT1_COMMAND_STATUS_MULTIHASH_COUNT_SHIFT         8

#define NATCACHE_NAT1_COMMAND_STATUS_CACHE_HIT_MASK                0x00000080
#define NATCACHE_NAT1_COMMAND_STATUS_CACHE_HIT_SHIFT               7

#define NATCACHE_NAT1_COMMAND_STATUS_MISS_MASK                     0x00000040
#define NATCACHE_NAT1_COMMAND_STATUS_MISS_SHIFT                    6

#define NATCACHE_NAT1_COMMAND_STATUS_ERROR_MASK                    0x00000020
#define NATCACHE_NAT1_COMMAND_STATUS_ERROR_SHIFT                   5

#define NATCACHE_NAT1_COMMAND_STATUS_BUSY_MASK                     0x00000010
#define NATCACHE_NAT1_COMMAND_STATUS_BUSY_SHIFT                    4

#define NATCACHE_NAT1_COMMAND_STATUS_unused0_MASK                  0x00000008
#define NATCACHE_NAT1_COMMAND_STATUS_unused0_SHIFT                 3

#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_MASK                  0x00000007
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_SHIFT                 0
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_NOP                   0
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_Lookup                1
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_Add                   2
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_Del                   3
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_Hash                  4
#define NATCACHE_NAT1_COMMAND_STATUS_COMMAND_Cache                 6

#define NATCACHE_NAT1_HASH_HASH_MASK                               0xffffffff
#define NATCACHE_NAT1_HASH_HASH_SHIFT                              0

#define NATCACHE_NAT1_HIT_COUNT_HIT_COUNT_MASK                     0xffffffff
#define NATCACHE_NAT1_HIT_COUNT_HIT_COUNT_SHIFT                    0

#define NATCACHE_NAT1_BYTE_COUNT_BYTE_COUNT_MASK                   0xffffffff
#define NATCACHE_NAT1_BYTE_COUNT_BYTE_COUNT_SHIFT                  0

#define NATCACHE_NAT1_PKT_LEN_unused_MASK                          0xffff0000
#define NATCACHE_NAT1_PKT_LEN_unused_SHIFT                         16

#define NATCACHE_NAT1_PKT_LEN_PKT_LEN_MASK                         0x0000ffff
#define NATCACHE_NAT1_PKT_LEN_PKT_LEN_SHIFT                        0

#define NATCACHE_NAT1_KEY_RESULTi_ARRAY_BASE                       0x80230150
#define NATCACHE_NAT1_KEY_RESULTi_ARRAY_START                      0
#define NATCACHE_NAT1_KEY_RESULTi_ARRAY_END                        61
#define NATCACHE_NAT1_KEY_RESULTi_ARRAY_ELEMENT_SIZE               32

#define NATCACHE_NAT1_KEY_RESULTi_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULTi_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT0_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT0_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT1_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT1_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT2_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT2_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT3_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT3_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT4_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT4_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT5_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT5_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT6_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT6_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT7_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT7_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT8_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT8_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT9_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT1_KEY_RESULT9_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT1_KEY_RESULT10_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT10_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT11_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT11_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT12_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT12_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT13_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT13_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT14_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT14_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT15_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT15_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT16_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT16_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT17_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT17_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT18_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT18_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT19_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT19_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT20_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT20_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT21_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT21_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT22_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT22_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT23_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT23_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT24_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT24_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT25_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT25_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT26_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT26_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT27_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT27_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT28_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT28_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT29_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT29_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT30_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT30_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT31_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT31_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT32_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT32_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT33_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT33_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT34_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT34_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT35_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT35_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT36_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT36_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT37_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT37_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT38_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT38_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT39_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT39_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT40_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT40_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT41_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT41_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT42_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT42_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT43_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT43_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT44_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT44_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT45_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT45_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT46_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT46_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT47_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT47_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT48_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT48_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT49_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT49_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT50_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT50_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT51_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT51_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT52_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT52_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT53_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT53_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT54_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT54_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT55_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT55_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT56_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT56_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT57_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT57_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT58_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT58_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT59_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT59_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT60_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT60_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT1_KEY_RESULT61_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT1_KEY_RESULT61_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_DDR_MISS_MASK         0x80000000
#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_DDR_MISS_SHIFT        31

#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_DDR_BIN_MASK          0x70000000
#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_DDR_BIN_SHIFT         28

#define NATCACHE_NAT2_COMMAND_STATUS_DEL_CMD_DDR_BIN_MASK          0x0ff00000
#define NATCACHE_NAT2_COMMAND_STATUS_DEL_CMD_DDR_BIN_SHIFT         20

#define NATCACHE_NAT2_COMMAND_STATUS_reserved0_MASK                0x00080000
#define NATCACHE_NAT2_COMMAND_STATUS_reserved0_SHIFT               19

#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_MODE_MASK             0x00040000
#define NATCACHE_NAT2_COMMAND_STATUS_ADD_CMD_MODE_SHIFT            18

#define NATCACHE_NAT2_COMMAND_STATUS_DEL_CMD_MODE_MASK             0x00020000
#define NATCACHE_NAT2_COMMAND_STATUS_DEL_CMD_MODE_SHIFT            17

#define NATCACHE_NAT2_COMMAND_STATUS_CACHE_FLUSH_MASK              0x00010000
#define NATCACHE_NAT2_COMMAND_STATUS_CACHE_FLUSH_SHIFT             16

#define NATCACHE_NAT2_COMMAND_STATUS_DECR_COUNT_MASK               0x00008000
#define NATCACHE_NAT2_COMMAND_STATUS_DECR_COUNT_SHIFT              15

#define NATCACHE_NAT2_COMMAND_STATUS_NAT_TBL_MASK                  0x00007000
#define NATCACHE_NAT2_COMMAND_STATUS_NAT_TBL_SHIFT                 12

#define NATCACHE_NAT2_COMMAND_STATUS_MULTIHASH_COUNT_MASK          0x00000f00
#define NATCACHE_NAT2_COMMAND_STATUS_MULTIHASH_COUNT_SHIFT         8

#define NATCACHE_NAT2_COMMAND_STATUS_CACHE_HIT_MASK                0x00000080
#define NATCACHE_NAT2_COMMAND_STATUS_CACHE_HIT_SHIFT               7

#define NATCACHE_NAT2_COMMAND_STATUS_MISS_MASK                     0x00000040
#define NATCACHE_NAT2_COMMAND_STATUS_MISS_SHIFT                    6

#define NATCACHE_NAT2_COMMAND_STATUS_ERROR_MASK                    0x00000020
#define NATCACHE_NAT2_COMMAND_STATUS_ERROR_SHIFT                   5

#define NATCACHE_NAT2_COMMAND_STATUS_BUSY_MASK                     0x00000010
#define NATCACHE_NAT2_COMMAND_STATUS_BUSY_SHIFT                    4

#define NATCACHE_NAT2_COMMAND_STATUS_unused0_MASK                  0x00000008
#define NATCACHE_NAT2_COMMAND_STATUS_unused0_SHIFT                 3

#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_MASK                  0x00000007
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_SHIFT                 0
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_NOP                   0
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_Lookup                1
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_Add                   2
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_Del                   3
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_Hash                  4
#define NATCACHE_NAT2_COMMAND_STATUS_COMMAND_Cache                 6

#define NATCACHE_NAT2_HASH_HASH_MASK                               0xffffffff
#define NATCACHE_NAT2_HASH_HASH_SHIFT                              0

#define NATCACHE_NAT2_HIT_COUNT_HIT_COUNT_MASK                     0xffffffff
#define NATCACHE_NAT2_HIT_COUNT_HIT_COUNT_SHIFT                    0

#define NATCACHE_NAT2_BYTE_COUNT_BYTE_COUNT_MASK                   0xffffffff
#define NATCACHE_NAT2_BYTE_COUNT_BYTE_COUNT_SHIFT                  0

#define NATCACHE_NAT2_PKT_LEN_unused_MASK                          0xffff0000
#define NATCACHE_NAT2_PKT_LEN_unused_SHIFT                         16

#define NATCACHE_NAT2_PKT_LEN_PKT_LEN_MASK                         0x0000ffff
#define NATCACHE_NAT2_PKT_LEN_PKT_LEN_SHIFT                        0

#define NATCACHE_NAT2_KEY_RESULTi_ARRAY_BASE                       0x80230270
#define NATCACHE_NAT2_KEY_RESULTi_ARRAY_START                      0
#define NATCACHE_NAT2_KEY_RESULTi_ARRAY_END                        61
#define NATCACHE_NAT2_KEY_RESULTi_ARRAY_ELEMENT_SIZE               32

#define NATCACHE_NAT2_KEY_RESULTi_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULTi_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT0_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT0_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT1_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT1_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT2_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT2_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT3_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT3_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT4_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT4_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT5_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT5_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT6_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT6_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT7_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT7_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT8_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT8_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT9_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT2_KEY_RESULT9_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT2_KEY_RESULT10_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT10_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT11_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT11_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT12_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT12_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT13_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT13_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT14_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT14_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT15_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT15_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT16_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT16_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT17_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT17_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT18_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT18_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT19_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT19_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT20_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT20_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT21_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT21_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT22_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT22_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT23_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT23_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT24_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT24_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT25_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT25_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT26_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT26_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT27_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT27_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT28_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT28_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT29_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT29_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT30_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT30_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT31_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT31_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT32_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT32_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT33_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT33_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT34_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT34_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT35_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT35_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT36_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT36_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT37_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT37_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT38_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT38_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT39_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT39_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT40_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT40_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT41_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT41_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT42_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT42_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT43_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT43_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT44_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT44_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT45_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT45_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT46_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT46_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT47_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT47_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT48_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT48_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT49_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT49_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT50_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT50_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT51_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT51_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT52_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT52_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT53_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT53_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT54_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT54_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT55_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT55_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT56_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT56_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT57_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT57_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT58_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT58_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT59_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT59_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT60_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT60_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT2_KEY_RESULT61_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT2_KEY_RESULT61_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_DDR_MISS_MASK         0x80000000
#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_DDR_MISS_SHIFT        31

#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_DDR_BIN_MASK          0x70000000
#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_DDR_BIN_SHIFT         28

#define NATCACHE_NAT3_COMMAND_STATUS_DEL_CMD_DDR_BIN_MASK          0x0ff00000
#define NATCACHE_NAT3_COMMAND_STATUS_DEL_CMD_DDR_BIN_SHIFT         20

#define NATCACHE_NAT3_COMMAND_STATUS_reserved0_MASK                0x00080000
#define NATCACHE_NAT3_COMMAND_STATUS_reserved0_SHIFT               19

#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_MODE_MASK             0x00040000
#define NATCACHE_NAT3_COMMAND_STATUS_ADD_CMD_MODE_SHIFT            18

#define NATCACHE_NAT3_COMMAND_STATUS_DEL_CMD_MODE_MASK             0x00020000
#define NATCACHE_NAT3_COMMAND_STATUS_DEL_CMD_MODE_SHIFT            17

#define NATCACHE_NAT3_COMMAND_STATUS_CACHE_FLUSH_MASK              0x00010000
#define NATCACHE_NAT3_COMMAND_STATUS_CACHE_FLUSH_SHIFT             16

#define NATCACHE_NAT3_COMMAND_STATUS_DECR_COUNT_MASK               0x00008000
#define NATCACHE_NAT3_COMMAND_STATUS_DECR_COUNT_SHIFT              15

#define NATCACHE_NAT3_COMMAND_STATUS_NAT_TBL_MASK                  0x00007000
#define NATCACHE_NAT3_COMMAND_STATUS_NAT_TBL_SHIFT                 12

#define NATCACHE_NAT3_COMMAND_STATUS_MULTIHASH_COUNT_MASK          0x00000f00
#define NATCACHE_NAT3_COMMAND_STATUS_MULTIHASH_COUNT_SHIFT         8

#define NATCACHE_NAT3_COMMAND_STATUS_CACHE_HIT_MASK                0x00000080
#define NATCACHE_NAT3_COMMAND_STATUS_CACHE_HIT_SHIFT               7

#define NATCACHE_NAT3_COMMAND_STATUS_MISS_MASK                     0x00000040
#define NATCACHE_NAT3_COMMAND_STATUS_MISS_SHIFT                    6

#define NATCACHE_NAT3_COMMAND_STATUS_ERROR_MASK                    0x00000020
#define NATCACHE_NAT3_COMMAND_STATUS_ERROR_SHIFT                   5

#define NATCACHE_NAT3_COMMAND_STATUS_BUSY_MASK                     0x00000010
#define NATCACHE_NAT3_COMMAND_STATUS_BUSY_SHIFT                    4

#define NATCACHE_NAT3_COMMAND_STATUS_unused0_MASK                  0x00000008
#define NATCACHE_NAT3_COMMAND_STATUS_unused0_SHIFT                 3

#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_MASK                  0x00000007
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_SHIFT                 0
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_NOP                   0
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_Lookup                1
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_Add                   2
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_Del                   3
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_Hash                  4
#define NATCACHE_NAT3_COMMAND_STATUS_COMMAND_Cache                 6

#define NATCACHE_NAT3_HASH_HASH_MASK                               0xffffffff
#define NATCACHE_NAT3_HASH_HASH_SHIFT                              0

#define NATCACHE_NAT3_HIT_COUNT_HIT_COUNT_MASK                     0xffffffff
#define NATCACHE_NAT3_HIT_COUNT_HIT_COUNT_SHIFT                    0

#define NATCACHE_NAT3_BYTE_COUNT_BYTE_COUNT_MASK                   0xffffffff
#define NATCACHE_NAT3_BYTE_COUNT_BYTE_COUNT_SHIFT                  0

#define NATCACHE_NAT3_PKT_LEN_unused_MASK                          0xffff0000
#define NATCACHE_NAT3_PKT_LEN_unused_SHIFT                         16

#define NATCACHE_NAT3_PKT_LEN_PKT_LEN_MASK                         0x0000ffff
#define NATCACHE_NAT3_PKT_LEN_PKT_LEN_SHIFT                        0

#define NATCACHE_NAT3_KEY_RESULTi_ARRAY_BASE                       0x80230390
#define NATCACHE_NAT3_KEY_RESULTi_ARRAY_START                      0
#define NATCACHE_NAT3_KEY_RESULTi_ARRAY_END                        61
#define NATCACHE_NAT3_KEY_RESULTi_ARRAY_ELEMENT_SIZE               32

#define NATCACHE_NAT3_KEY_RESULTi_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULTi_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT0_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT0_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT1_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT1_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT2_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT2_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT3_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT3_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT4_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT4_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT5_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT5_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT6_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT6_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT7_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT7_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT8_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT8_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT9_NAT_KEY_RESULT_MASK              0xffffffff
#define NATCACHE_NAT3_KEY_RESULT9_NAT_KEY_RESULT_SHIFT             0

#define NATCACHE_NAT3_KEY_RESULT10_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT10_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT11_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT11_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT12_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT12_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT13_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT13_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT14_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT14_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT15_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT15_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT16_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT16_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT17_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT17_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT18_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT18_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT19_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT19_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT20_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT20_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT21_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT21_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT22_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT22_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT23_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT23_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT24_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT24_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT25_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT25_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT26_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT26_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT27_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT27_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT28_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT28_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT29_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT29_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT30_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT30_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT31_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT31_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT32_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT32_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT33_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT33_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT34_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT34_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT35_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT35_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT36_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT36_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT37_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT37_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT38_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT38_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT39_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT39_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT40_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT40_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT41_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT41_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT42_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT42_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT43_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT43_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT44_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT44_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT45_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT45_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT46_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT46_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT47_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT47_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT48_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT48_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT49_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT49_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT50_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT50_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT51_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT51_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT52_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT52_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT53_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT53_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT54_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT54_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT55_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT55_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT56_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT56_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT57_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT57_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT58_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT58_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT59_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT59_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT60_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT60_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NAT3_KEY_RESULT61_NAT_KEY_RESULT_MASK             0xffffffff
#define NATCACHE_NAT3_KEY_RESULT61_NAT_KEY_RESULT_SHIFT            0

#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL0_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL0_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL1_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL1_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL2_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL2_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL3_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL3_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL4_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL4_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL5_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL5_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL6_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL6_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_LOWER_BAR_MASK     0xfffffff8
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_LOWER_BAR_SHIFT    3

#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_LOWER_zeros_MASK   0x00000007
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_LOWER_zeros_SHIFT  0

#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_UPPER_zeros_MASK   0xffffff00
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_UPPER_zeros_SHIFT  8

#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_UPPER_BAR_MASK     0x000000ff
#define NATCACHE_NATC_TBL7_DDR_KEY_BASE_ADDRESS_UPPER_BAR_SHIFT    0

#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_MASK  0xfffffff8
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_LOWER_BAR_SHIFT 3

#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_MASK 0x00000007
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_LOWER_zeros_SHIFT 0

#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_MASK 0xffffff00
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_UPPER_zeros_SHIFT 8

#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_MASK  0x000000ff
#define NATCACHE_NATC_TBL7_DDR_RESULT_BASE_ADDRESS_UPPER_BAR_SHIFT 0

#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_DDR_EVICT_COUNT_EN_MASK 0xff000000
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_DDR_EVICT_COUNT_EN_SHIFT 24

#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_DDR_REQUEST_COUNT_EN_MASK 0x00ff0000
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_DDR_REQUEST_COUNT_EN_SHIFT 16

#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_CACHE_MISS_COUNT_EN_MASK 0x0000ff00
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_CACHE_MISS_COUNT_EN_SHIFT 8

#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_CACHE_HIT_COUNT_EN_MASK 0x000000ff
#define NATCACHE_NATC_STAT_COUNTER_CONTROL_i_CACHE_HIT_COUNT_EN_SHIFT 0

#define NATCACHE_NATC_CACHE_HIT_COUNT_CACHE_HIT_COUNT_MASK         0xffffffff
#define NATCACHE_NATC_CACHE_HIT_COUNT_CACHE_HIT_COUNT_SHIFT        0

#define NATCACHE_NATC_CACHE_MISS_COUNT_CACHE_MISS_COUNT_MASK       0xffffffff
#define NATCACHE_NATC_CACHE_MISS_COUNT_CACHE_MISS_COUNT_SHIFT      0

#define NATCACHE_NATC_DDR_REQUEST_COUNT_DDR_REQUEST_COUNT_MASK     0xffffffff
#define NATCACHE_NATC_DDR_REQUEST_COUNT_DDR_REQUEST_COUNT_SHIFT    0

#define NATCACHE_NATC_DDR_EVICT_COUNT_DDR_EVICT_COUNT_MASK         0xffffffff
#define NATCACHE_NATC_DDR_EVICT_COUNT_DDR_EVICT_COUNT_SHIFT        0

#define NATCACHE_NATC_DDR_BLOCK_COUNT_DDR_BLOCK_COUNT_MASK         0xffffffff
#define NATCACHE_NATC_DDR_BLOCK_COUNT_DDR_BLOCK_COUNT_SHIFT        0

#define NATCACHE_NATC_DDR_SIZE_reserved0_MASK                      0xff000000
#define NATCACHE_NATC_DDR_SIZE_reserved0_SHIFT                     24

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL7_MASK                  0x00e00000
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL7_SHIFT                 21

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL6_MASK                  0x001c0000
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL6_SHIFT                 18

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL5_MASK                  0x00038000
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL5_SHIFT                 15

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL4_MASK                  0x00007000
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL4_SHIFT                 12

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL3_MASK                  0x00000e00
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL3_SHIFT                 9

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL2_MASK                  0x000001c0
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL2_SHIFT                 6

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL1_MASK                  0x00000038
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL1_SHIFT                 3

#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_MASK                  0x00000007
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_SHIFT                 0
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_256k             5
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_128k             4
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_64k              3
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_32k              2
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_16k              1
#define NATCACHE_NATC_DDR_SIZE_DDR_SIZE_TBL0_size_8k               0

#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL3_MASK 0xff000000
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL3_SHIFT 24

#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL2_MASK 0x00ff0000
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL2_SHIFT 16

#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL1_MASK 0x0000ff00
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL1_SHIFT 8

#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL0_MASK 0x000000ff
#define NATCACHE_NATC_DDR_BINS_PER_BUCKET_i_DDR_BINS_PER_BUCKET_TBL0_SHIFT 0

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL7_MASK                0xf0000000
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL7_SHIFT               28

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL6_MASK                0x0f000000
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL6_SHIFT               24

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL5_MASK                0x00f00000
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL5_SHIFT               20

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL4_MASK                0x000f0000
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL4_SHIFT               16

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL3_MASK                0x0000f000
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL3_SHIFT               12

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL2_MASK                0x00000f00
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL2_SHIFT               8

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL1_MASK                0x000000f0
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL1_SHIFT               4

#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL0_MASK                0x0000000f
#define NATCACHE_NATC_TOTAL_LEN_TOTAL_LEN_TBL0_SHIFT               0

#define NATCACHE_NATC_SM_STATUS_reserved0_MASK                     0xf8000000
#define NATCACHE_NATC_SM_STATUS_reserved0_SHIFT                    27

#define NATCACHE_NATC_SM_STATUS_ctxt_len_less_than_flow_ctx_len_MASK 0x04000000
#define NATCACHE_NATC_SM_STATUS_ctxt_len_less_than_flow_ctx_len_SHIFT 26

#define NATCACHE_NATC_SM_STATUS_debug_sel_MASK                     0x03000000
#define NATCACHE_NATC_SM_STATUS_debug_sel_SHIFT                    24

#define NATCACHE_NATC_SM_STATUS_apb_state_MASK                     0x00c00000
#define NATCACHE_NATC_SM_STATUS_apb_state_SHIFT                    22

#define NATCACHE_NATC_SM_STATUS_ddr_req_state_MASK                 0x00300000
#define NATCACHE_NATC_SM_STATUS_ddr_req_state_SHIFT                20

#define NATCACHE_NATC_SM_STATUS_ddr_rep_state_MASK                 0x000e0000
#define NATCACHE_NATC_SM_STATUS_ddr_rep_state_SHIFT                17

#define NATCACHE_NATC_SM_STATUS_runner_cmd_state_MASK              0x00010000
#define NATCACHE_NATC_SM_STATUS_runner_cmd_state_SHIFT             16

#define NATCACHE_NATC_SM_STATUS_wb_state_MASK                      0x00008000
#define NATCACHE_NATC_SM_STATUS_wb_state_SHIFT                     15

#define NATCACHE_NATC_SM_STATUS_nat_state_MASK                     0x00007fff
#define NATCACHE_NATC_SM_STATUS_nat_state_SHIFT                    0

#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_3_MASK 0xff000000
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_3_SHIFT 24

#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_2_MASK 0x00ff0000
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_2_SHIFT 16

#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_1_MASK 0x0000ff00
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_1_SHIFT 8

#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_0_MASK 0x000000ff
#define NATCACHE_NATC_REGFILE_FIFO_START_ADDR_i_REGFILE_FIFO_START_ADDR_0_SHIFT 0

#define NATCACHE_NATC_TBL0_KEY_MASKi_ARRAY_BASE                    0x80230550
#define NATCACHE_NATC_TBL0_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL0_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL0_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL0_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL0_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL0_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASKi_ARRAY_BASE                    0x80230570
#define NATCACHE_NATC_TBL1_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL1_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL1_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL1_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL1_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL1_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASKi_ARRAY_BASE                    0x80230590
#define NATCACHE_NATC_TBL2_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL2_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL2_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL2_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL2_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL2_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASKi_ARRAY_BASE                    0x802305b0
#define NATCACHE_NATC_TBL3_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL3_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL3_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL3_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL3_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL3_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASKi_ARRAY_BASE                    0x802305d0
#define NATCACHE_NATC_TBL4_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL4_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL4_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL4_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL4_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL4_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASKi_ARRAY_BASE                    0x802305f0
#define NATCACHE_NATC_TBL5_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL5_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL5_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL5_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL5_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL5_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASKi_ARRAY_BASE                    0x80230610
#define NATCACHE_NATC_TBL6_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL6_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL6_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL6_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL6_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL6_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASKi_ARRAY_BASE                    0x80230630
#define NATCACHE_NATC_TBL7_KEY_MASKi_ARRAY_START                   0
#define NATCACHE_NATC_TBL7_KEY_MASKi_ARRAY_END                     7
#define NATCACHE_NATC_TBL7_KEY_MASKi_ARRAY_ELEMENT_SIZE            32

#define NATCACHE_NATC_TBL7_KEY_MASKi_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASKi_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK0_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK0_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK1_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK1_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK2_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK2_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK3_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK3_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK4_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK4_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK5_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK5_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK6_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK6_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_TBL7_KEY_MASK7_KEY_MASK_MASK                 0xffffffff
#define NATCACHE_NATC_TBL7_KEY_MASK7_KEY_MASK_SHIFT                0

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL7_MASK        0xf0000000
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL7_SHIFT       28

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL6_MASK        0x0f000000
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL6_SHIFT       24

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL5_MASK        0x00f00000
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL5_SHIFT       20

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL4_MASK        0x000f0000
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL4_SHIFT       16

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL3_MASK        0x0000f000
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL3_SHIFT       12

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL2_MASK        0x00000f00
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL2_SHIFT       8

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL1_MASK        0x000000f0
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL1_SHIFT       4

#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL0_MASK        0x0000000f
#define NATCACHE_NATC_DDR_HASH_MODE_DDR_HASH_MODE_TBL0_SHIFT       0

#define NATCACHE_NATC_FLOW_CNTR_CNTL_reserved0_MASK                0xfffe0000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_reserved0_SHIFT               17

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_CLR_ON_RD_EN_MASK   0x00010000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_CLR_ON_RD_EN_SHIFT  16

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL7_MASK        0x00008000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL7_SHIFT       15

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL6_MASK        0x00004000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL6_SHIFT       14

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL5_MASK        0x00002000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL5_SHIFT       13

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL4_MASK        0x00001000
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL4_SHIFT       12

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL3_MASK        0x00000800
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL3_SHIFT       11

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL2_MASK        0x00000400
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL2_SHIFT       10

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL1_MASK        0x00000200
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL1_SHIFT       9

#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL0_MASK        0x00000100
#define NATCACHE_NATC_FLOW_CNTR_CNTL_FLOW_CNTR_EN_TBL0_SHIFT       8

#define NATCACHE_NATC_FLOW_CNTR_CNTL_reserved1_MASK                0x00000080
#define NATCACHE_NATC_FLOW_CNTR_CNTL_reserved1_SHIFT               7

#define NATCACHE_NATC_FLOW_CNTR_CNTL_CONTEXT_OFFSET_MASK           0x0000007f
#define NATCACHE_NATC_FLOW_CNTR_CNTL_CONTEXT_OFFSET_SHIFT          0

#define NATCACHE_NATC_CNTRL_reserved0_MASK                         0xff000000
#define NATCACHE_NATC_CNTRL_reserved0_SHIFT                        24

#define NATCACHE_NATC_CNTRL_PUSHER_TIMER_MASK                      0x00ff0000
#define NATCACHE_NATC_CNTRL_PUSHER_TIMER_SHIFT                     16

#define NATCACHE_NATC_CNTRL_INTERRUPT_THRESHOLD_MASK               0x0000ff00
#define NATCACHE_NATC_CNTRL_INTERRUPT_THRESHOLD_SHIFT              8

#define NATCACHE_NATC_CNTRL_reserved1_MASK                         0x000000f0
#define NATCACHE_NATC_CNTRL_reserved1_SHIFT                        4

#define NATCACHE_NATC_CNTRL_RQ_PRODUCER_IDX_WR_EN_MASK             0x00000008
#define NATCACHE_NATC_CNTRL_RQ_PRODUCER_IDX_WR_EN_SHIFT            3

#define NATCACHE_NATC_CNTRL_reserved2_MASK                         0x00000007
#define NATCACHE_NATC_CNTRL_reserved2_SHIFT                        0

#define NATCACHE_NATC_WORK_QUEUE_SEARCH_KEY_OFFSET_WQ_NATC_KEY1_OFFSET_MASK 0xffff0000
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_KEY_OFFSET_WQ_NATC_KEY1_OFFSET_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_SEARCH_KEY_OFFSET_WQ_NATC_KEY0_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_KEY_OFFSET_WQ_NATC_KEY0_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_DATA_LENGTH_OFFSET_reserved0_MASK 0xffff0000
#define NATCACHE_NATC_WORK_QUEUE_DATA_LENGTH_OFFSET_reserved0_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_DATA_LENGTH_OFFSET_WQ_DATA_LENGTH_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_DATA_LENGTH_OFFSET_WQ_DATA_LENGTH_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_SEARCH_RESULT_OFFSET_reserved0_MASK 0xffff0000
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_RESULT_OFFSET_reserved0_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_SEARCH_RESULT_OFFSET_WQ_NATC_RESULT_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_SEARCH_RESULT_OFFSET_WQ_NATC_RESULT_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_ARRAY_BASE 0x80230670
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_ARRAY_START 0
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_ARRAY_END 7
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_ARRAY_ELEMENT_SIZE 32

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSETi_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET0_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET1_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET2_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET3_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET4_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET5_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET6_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_reserved0_MASK 0xff000000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_reserved0_SHIFT 24

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_FLOW_CTX_LENGTH_MASK 0x00ff0000
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_FLOW_CTX_LENGTH_SHIFT 16

#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_WQ_FLOW_CTX_OFFSET_MASK 0x0000ffff
#define NATCACHE_NATC_WORK_QUEUE_FLOW_CONTEXT_SIZE_AND_OFFSET7_WQ_FLOW_CTX_OFFSET_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_ARRAY_BASE           0x80230694
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_ARRAY_START          0
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_ARRAY_END            1
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_ARRAY_ELEMENT_SIZE   32

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_RQ_INDEX_ADDR_MASK   0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_RQ_INDEX_ADDR_SHIFT  16

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_RQ_ADDR_MASK         0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESSi_RQ_ADDR_SHIFT        0

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS0_RQ_INDEX_ADDR_MASK   0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS0_RQ_INDEX_ADDR_SHIFT  16

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS0_RQ_ADDR_MASK         0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS0_RQ_ADDR_SHIFT        0

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS1_RQ_INDEX_ADDR_MASK   0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS1_RQ_INDEX_ADDR_SHIFT  16

#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS1_RQ_ADDR_MASK         0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_ADDRESS1_RQ_ADDR_SHIFT        0

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_BASE     0x8023069c
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_START    0
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_END      1
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_ARRAY_ELEMENT_SIZE 32

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_reserved0_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_reserved0_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_RQ_WR_PTR_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTERi_RQ_WR_PTR_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER0_reserved0_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER0_reserved0_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER0_RQ_WR_PTR_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER0_RQ_WR_PTR_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER1_reserved0_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER1_reserved0_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER1_RQ_WR_PTR_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_WRITE_POINTER1_RQ_WR_PTR_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_BASE 0x802306a4
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_START 0
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_END 1
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_ARRAY_ELEMENT_SIZE 32

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_PRODUCER_INDEX_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEXi_RQ_CONSUMER_INDEX_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_PRODUCER_INDEX_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX0_RQ_CONSUMER_INDEX_SHIFT 0

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_PRODUCER_INDEX_MASK 0xffff0000
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_PRODUCER_INDEX_SHIFT 16

#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_CONSUMER_INDEX_MASK 0x0000ffff
#define NATCACHE_NATC_RESPONSE_QUEUE_PRODUCER_AND_CONSUMER_INDEX1_RQ_CONSUMER_INDEX_SHIFT 0

#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_reserved0_MASK       0xfffff800
#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_reserved0_SHIFT      11

#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_w_r_MASK             0x00000400
#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_w_r_SHIFT            10

#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_natc_entry_MASK      0x000003ff
#define NATCACHE_INDIR_RW_NATC_INDIR_ADDR_REG_natc_entry_SHIFT     0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_ARRAY_BASE          0x80230710
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_ARRAY_START         0
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_ARRAY_END           64
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_ARRAY_ELEMENT_SIZE  32

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REGi_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG0_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG0_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG1_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG1_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG2_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG2_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG3_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG3_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG4_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG4_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG5_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG5_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG6_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG6_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG7_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG7_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG8_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG8_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG9_data_MASK           0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG9_data_SHIFT          0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG10_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG10_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG11_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG11_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG12_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG12_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG13_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG13_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG14_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG14_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG15_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG15_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG16_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG16_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG17_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG17_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG18_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG18_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG19_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG19_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG20_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG20_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG21_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG21_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG22_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG22_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG23_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG23_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG24_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG24_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG25_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG25_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG26_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG26_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG27_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG27_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG28_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG28_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG29_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG29_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG30_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG30_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG31_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG31_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG32_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG32_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG33_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG33_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG34_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG34_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG35_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG35_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG36_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG36_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG37_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG37_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG38_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG38_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG39_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG39_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG40_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG40_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG41_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG41_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG42_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG42_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG43_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG43_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG44_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG44_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG45_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG45_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG46_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG46_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG47_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG47_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG48_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG48_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG49_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG49_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG50_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG50_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG51_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG51_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG52_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG52_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG53_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG53_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG54_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG54_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG55_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG55_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG56_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG56_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG57_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG57_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG58_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG58_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG59_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG59_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG60_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG60_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG61_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG61_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG62_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG62_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG63_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG63_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG64_data_MASK          0xffffffff
#define NATCACHE_INDIR_RW_NATC_INDIR_DATA_REG64_data_SHIFT         0

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_reserved0_MASK 0xfffff800
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_reserved0_SHIFT 11

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_w_r_MASK   0x00000400
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_w_r_SHIFT  10

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_reserved1_MASK 0x00000380
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_reserved1_SHIFT 7

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_flow_cntr_entry_MASK 0x0000007f
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_ADDR_REG_flow_cntr_entry_SHIFT 0

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_ARRAY_BASE 0x80230824
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_ARRAY_START 0
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_ARRAY_END 1
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_ARRAY_ELEMENT_SIZE 32

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_data_MASK 0xffffffff
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REGi_data_SHIFT 0

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG0_data_MASK 0xffffffff
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG0_data_SHIFT 0

#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG1_data_MASK 0xffffffff
#define NATCACHE_INDIR_RW_NATC_FLOW_CNTR_INDIR_DATA_REG1_data_SHIFT 0

#define CM7_i_ITCM_MEM_START_MEM_WORD_MASK                         0xffffffff
#define CM7_i_ITCM_MEM_START_MEM_WORD_SHIFT                        0

#define CM7_i_ITCM_MEM_END_MEM_WORD_MASK                           0xffffffff
#define CM7_i_ITCM_MEM_END_MEM_WORD_SHIFT                          0

#define CM7_i_DTCM_MEM_START_MEM_WORD_MASK                         0xffffffff
#define CM7_i_DTCM_MEM_START_MEM_WORD_SHIFT                        0

#define CM7_i_DTCM_MEM_END_MEM_WORD_MASK                           0xffffffff
#define CM7_i_DTCM_MEM_END_MEM_WORD_SHIFT                          0

#define ACM7C_CONTROL_i_reserved0_MASK                             0xfffff800
#define ACM7C_CONTROL_i_reserved0_SHIFT                            11

#define ACM7C_CONTROL_i_INITRMWEN_MASK                             0x00000600
#define ACM7C_CONTROL_i_INITRMWEN_SHIFT                            9

#define ACM7C_CONTROL_i_INITRETRYEN_MASK                           0x00000180
#define ACM7C_CONTROL_i_INITRETRYEN_SHIFT                          7

#define ACM7C_CONTROL_i_INITCMEN_MASK                              0x00000060
#define ACM7C_CONTROL_i_INITCMEN_SHIFT                             5

#define ACM7C_CONTROL_i_INITAHBPEN_MASK                            0x00000010
#define ACM7C_CONTROL_i_INITAHBPEN_SHIFT                           4

#define ACM7C_CONTROL_i_nDBGETMRESET_MASK                          0x00000008
#define ACM7C_CONTROL_i_nDBGETMRESET_SHIFT                         3

#define ACM7C_CONTROL_i_CPUWAIT_MASK                               0x00000004
#define ACM7C_CONTROL_i_CPUWAIT_SHIFT                              2

#define ACM7C_CONTROL_i_nSYSRESET_MASK                             0x00000002
#define ACM7C_CONTROL_i_nSYSRESET_SHIFT                            1

#define ACM7C_CONTROL_i_nPORESET_MASK                              0x00000001
#define ACM7C_CONTROL_i_nPORESET_SHIFT                             0

#define ACM7C_VECTOR_TABLE_OFFSET_i_reserved0_MASK                 0xfe000000
#define ACM7C_VECTOR_TABLE_OFFSET_i_reserved0_SHIFT                25

#define ACM7C_VECTOR_TABLE_OFFSET_i_INITVTOR_MASK                  0x01ffffff
#define ACM7C_VECTOR_TABLE_OFFSET_i_INITVTOR_SHIFT                 0

#define ACM7C_CONTROL_SELECT_reserved0_MASK                        0xfffffffe
#define ACM7C_CONTROL_SELECT_reserved0_SHIFT                       1

#define ACM7C_CONTROL_SELECT_CONTROL_REG0_EN_MASK                  0x00000001
#define ACM7C_CONTROL_SELECT_CONTROL_REG0_EN_SHIFT                 0

#define ACM7C_R2AHBS_BRIDGE_CONTROL_reserved0_MASK                 0xfffffffc
#define ACM7C_R2AHBS_BRIDGE_CONTROL_reserved0_SHIFT                2

#define ACM7C_R2AHBS_BRIDGE_CONTROL_RBUS_ERR_DIS_MASK              0x00000002
#define ACM7C_R2AHBS_BRIDGE_CONTROL_RBUS_ERR_DIS_SHIFT             1

#define ACM7C_R2AHBS_BRIDGE_CONTROL_AHBS_BCAST_EN_MASK             0x00000001
#define ACM7C_R2AHBS_BRIDGE_CONTROL_AHBS_BCAST_EN_SHIFT            0

#define ACM7C_R2AHBS_BRIDGE_STATUS_reserved0_MASK                  0xfffffc00
#define ACM7C_R2AHBS_BRIDGE_STATUS_reserved0_SHIFT                 10

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_VLD_MASK         0x00000200
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_VLD_SHIFT        9

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_VLD_MASK          0x00000100
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_VLD_SHIFT         8

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_OVF_MASK         0x00000080
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_OVF_SHIFT        7

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_UNDF_MASK        0x00000040
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_DATA_FIFO_UNDF_SHIFT       6

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_OVF_MASK          0x00000020
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_OVF_SHIFT         5

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_UNDF_MASK         0x00000010
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_CMD_FIFO_UNDF_SHIFT        4

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_ERR_STATUS1_MASK           0x0000000c
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_ERR_STATUS1_SHIFT          2

#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_ERR_STATUS0_MASK           0x00000003
#define ACM7C_R2AHBS_BRIDGE_STATUS_AHBS_ERR_STATUS0_SHIFT          0

#define ACM7C_MPMB_CTRL_reserved0_MASK                             0xffff0000
#define ACM7C_MPMB_CTRL_reserved0_SHIFT                            16

#define ACM7C_MPMB_CTRL_reserved1_MASK                             0x0000ffc0
#define ACM7C_MPMB_CTRL_reserved1_SHIFT                            6

#define ACM7C_MPMB_CTRL_FLUSH_MASK                                 0x00000020
#define ACM7C_MPMB_CTRL_FLUSH_SHIFT                                5

#define ACM7C_MPMB_CTRL_MPMB_EN_MASK                               0x0000001f
#define ACM7C_MPMB_CTRL_MPMB_EN_SHIFT                              0

#define ACM7C_DAP_CTRL0_reserved0_MASK                             0xffff0000
#define ACM7C_DAP_CTRL0_reserved0_SHIFT                            16

#define ACM7C_DAP_CTRL0_DAP_ECORE_VNUM_MASK                        0x0000ff00
#define ACM7C_DAP_CTRL0_DAP_ECORE_VNUM_SHIFT                       8

#define ACM7C_DAP_CTRL0_DAP_INST_ID_MASK                           0x000000f0
#define ACM7C_DAP_CTRL0_DAP_INST_ID_SHIFT                          4

#define ACM7C_DAP_CTRL0_reserved1_MASK                             0x00000008
#define ACM7C_DAP_CTRL0_reserved1_SHIFT                            3

#define ACM7C_DAP_CTRL0_DAP_OP_MODE_MASK                           0x00000004
#define ACM7C_DAP_CTRL0_DAP_OP_MODE_SHIFT                          2

#define ACM7C_DAP_CTRL0_TEST_IO_MODE_MASK                          0x00000002
#define ACM7C_DAP_CTRL0_TEST_IO_MODE_SHIFT                         1

#define ACM7C_DAP_CTRL0_DBG_EN_MASK                                0x00000001
#define ACM7C_DAP_CTRL0_DBG_EN_SHIFT                               0

#define ACM7C_DAP_CTRL1_DAP_TARGET_ID_MASK                         0xffffffff
#define ACM7C_DAP_CTRL1_DAP_TARGET_ID_SHIFT                        0

#define DBG_TOP_AHBP_DBG_CFG_reserved0_MASK                        0xffff0000
#define DBG_TOP_AHBP_DBG_CFG_reserved0_SHIFT                       16

#define DBG_TOP_AHBP_DBG_CFG_SPNIDEN_MASK                          0x0000c000
#define DBG_TOP_AHBP_DBG_CFG_SPNIDEN_SHIFT                         14

#define DBG_TOP_AHBP_DBG_CFG_SPIDEN_MASK                           0x00003000
#define DBG_TOP_AHBP_DBG_CFG_SPIDEN_SHIFT                          12

#define DBG_TOP_AHBP_DBG_CFG_NIDEN_MASK                            0x00000c00
#define DBG_TOP_AHBP_DBG_CFG_NIDEN_SHIFT                           10

#define DBG_TOP_AHBP_DBG_CFG_DBGEN_MASK                            0x00000300
#define DBG_TOP_AHBP_DBG_CFG_DBGEN_SHIFT                           8

#define DBG_TOP_AHBP_DBG_CFG_reserved1_MASK                        0x000000f8
#define DBG_TOP_AHBP_DBG_CFG_reserved1_SHIFT                       3

#define DBG_TOP_AHBP_DBG_CFG_TRACE_DISABLE_MASK                    0x00000006
#define DBG_TOP_AHBP_DBG_CFG_TRACE_DISABLE_SHIFT                   1

#define DBG_TOP_AHBP_DBG_CFG_BUSENDIAN_MASK                        0x00000001
#define DBG_TOP_AHBP_DBG_CFG_BUSENDIAN_SHIFT                       0

#define DBG_TOP_DTCM_DBG_CFG_reserved0_MASK                        0xffff0000
#define DBG_TOP_DTCM_DBG_CFG_reserved0_SHIFT                       16

#define DBG_TOP_DTCM_DBG_CFG_SPNIDEN_MASK                          0x0000c000
#define DBG_TOP_DTCM_DBG_CFG_SPNIDEN_SHIFT                         14

#define DBG_TOP_DTCM_DBG_CFG_SPIDEN_MASK                           0x00003000
#define DBG_TOP_DTCM_DBG_CFG_SPIDEN_SHIFT                          12

#define DBG_TOP_DTCM_DBG_CFG_NIDEN_MASK                            0x00000c00
#define DBG_TOP_DTCM_DBG_CFG_NIDEN_SHIFT                           10

#define DBG_TOP_DTCM_DBG_CFG_DBGEN_MASK                            0x00000300
#define DBG_TOP_DTCM_DBG_CFG_DBGEN_SHIFT                           8

#define DBG_TOP_DTCM_DBG_CFG_reserved1_MASK                        0x000000f8
#define DBG_TOP_DTCM_DBG_CFG_reserved1_SHIFT                       3

#define DBG_TOP_DTCM_DBG_CFG_TRACE_DISABLE_MASK                    0x00000006
#define DBG_TOP_DTCM_DBG_CFG_TRACE_DISABLE_SHIFT                   1

#define DBG_TOP_DTCM_DBG_CFG_BUSENDIAN_MASK                        0x00000001
#define DBG_TOP_DTCM_DBG_CFG_BUSENDIAN_SHIFT                       0

#define DBG_TOP_DBG_CTRL_ETB_MANUAL_TRIG_MASK                      0x80000000
#define DBG_TOP_DBG_CTRL_ETB_MANUAL_TRIG_SHIFT                     31

#define DBG_TOP_DBG_CTRL_reserved0_MASK                            0x7ffffe00
#define DBG_TOP_DBG_CTRL_reserved0_SHIFT                           9

#define DBG_TOP_DBG_CTRL_DTCMA_CAP_EN_MASK                         0x000001fc
#define DBG_TOP_DBG_CTRL_DTCMA_CAP_EN_SHIFT                        2

#define DBG_TOP_DBG_CTRL_DTCMA_NO_CAP_EN_MASK                      0x00000002
#define DBG_TOP_DBG_CTRL_DTCMA_NO_CAP_EN_SHIFT                     1

#define DBG_TOP_DBG_CTRL_ETB_FLUSH_MASK                            0x00000001
#define DBG_TOP_DBG_CTRL_ETB_FLUSH_SHIFT                           0

#define DBG_TOP_DBG_STATUS_reserved0_MASK                          0xfffffff8
#define DBG_TOP_DBG_STATUS_reserved0_SHIFT                         3

#define DBG_TOP_DBG_STATUS_DTCMA1_CAP_FULL_MASK                    0x00000004
#define DBG_TOP_DBG_STATUS_DTCMA1_CAP_FULL_SHIFT                   2

#define DBG_TOP_DBG_STATUS_DTCMA0_CAP_FULL_MASK                    0x00000002
#define DBG_TOP_DBG_STATUS_DTCMA0_CAP_FULL_SHIFT                   1

#define DBG_TOP_DBG_STATUS_ETB_FULL_MASK                           0x00000001
#define DBG_TOP_DBG_STATUS_ETB_FULL_SHIFT                          0

#define DBG_TOP_DTCMA_CAP_CFG_NO_CAP_END_MASK                      0xffff0000
#define DBG_TOP_DTCMA_CAP_CFG_NO_CAP_END_SHIFT                     16

#define DBG_TOP_DTCMA_CAP_CFG_NO_CAP_START_MASK                    0x0000ffff
#define DBG_TOP_DTCMA_CAP_CFG_NO_CAP_START_SHIFT                   0

#define FUNNELM_Ctrl_Reg_reserved0_MASK                            0xfffff000
#define FUNNELM_Ctrl_Reg_reserved0_SHIFT                           12

#define FUNNELM_Ctrl_Reg_HT_MASK                                   0x00000f00
#define FUNNELM_Ctrl_Reg_HT_SHIFT                                  8

#define FUNNELM_Ctrl_Reg_EnS7_MASK                                 0x00000080
#define FUNNELM_Ctrl_Reg_EnS7_SHIFT                                7

#define FUNNELM_Ctrl_Reg_EnS6_MASK                                 0x00000040
#define FUNNELM_Ctrl_Reg_EnS6_SHIFT                                6

#define FUNNELM_Ctrl_Reg_EnS5_MASK                                 0x00000020
#define FUNNELM_Ctrl_Reg_EnS5_SHIFT                                5

#define FUNNELM_Ctrl_Reg_EnS4_MASK                                 0x00000010
#define FUNNELM_Ctrl_Reg_EnS4_SHIFT                                4

#define FUNNELM_Ctrl_Reg_EnS3_MASK                                 0x00000008
#define FUNNELM_Ctrl_Reg_EnS3_SHIFT                                3

#define FUNNELM_Ctrl_Reg_EnS2_MASK                                 0x00000004
#define FUNNELM_Ctrl_Reg_EnS2_SHIFT                                2

#define FUNNELM_Ctrl_Reg_EnS1_MASK                                 0x00000002
#define FUNNELM_Ctrl_Reg_EnS1_SHIFT                                1

#define FUNNELM_Ctrl_Reg_EnS0_MASK                                 0x00000001
#define FUNNELM_Ctrl_Reg_EnS0_SHIFT                                0

#define FUNNELM_Priority_Ctrl_Reg_reserved0_MASK                   0xff000000
#define FUNNELM_Priority_Ctrl_Reg_reserved0_SHIFT                  24

#define FUNNELM_Priority_Ctrl_Reg_PriPort7_MASK                    0x00e00000
#define FUNNELM_Priority_Ctrl_Reg_PriPort7_SHIFT                   21

#define FUNNELM_Priority_Ctrl_Reg_PriPort6_MASK                    0x001c0000
#define FUNNELM_Priority_Ctrl_Reg_PriPort6_SHIFT                   18

#define FUNNELM_Priority_Ctrl_Reg_PriPort5_MASK                    0x00038000
#define FUNNELM_Priority_Ctrl_Reg_PriPort5_SHIFT                   15

#define FUNNELM_Priority_Ctrl_Reg_PriPort4_MASK                    0x00007000
#define FUNNELM_Priority_Ctrl_Reg_PriPort4_SHIFT                   12

#define FUNNELM_Priority_Ctrl_Reg_PriPort3_MASK                    0x00000e00
#define FUNNELM_Priority_Ctrl_Reg_PriPort3_SHIFT                   9

#define FUNNELM_Priority_Ctrl_Reg_PriPort2_MASK                    0x000001c0
#define FUNNELM_Priority_Ctrl_Reg_PriPort2_SHIFT                   6

#define FUNNELM_Priority_Ctrl_Reg_PriPort1_MASK                    0x00000038
#define FUNNELM_Priority_Ctrl_Reg_PriPort1_SHIFT                   3

#define FUNNELM_Priority_Ctrl_Reg_PriPort0_MASK                    0x00000007
#define FUNNELM_Priority_Ctrl_Reg_PriPort0_SHIFT                   0

#define FUNNELM_ITATBDATA0_reserved0_MASK                          0xffffffe0
#define FUNNELM_ITATBDATA0_reserved0_SHIFT                         5

#define FUNNELM_ITATBDATA0_ATDATA31_MASK                           0x00000010
#define FUNNELM_ITATBDATA0_ATDATA31_SHIFT                          4

#define FUNNELM_ITATBDATA0_ATDATA23_MASK                           0x00000008
#define FUNNELM_ITATBDATA0_ATDATA23_SHIFT                          3

#define FUNNELM_ITATBDATA0_ATDATA15_MASK                           0x00000004
#define FUNNELM_ITATBDATA0_ATDATA15_SHIFT                          2

#define FUNNELM_ITATBDATA0_ATDATA7_MASK                            0x00000002
#define FUNNELM_ITATBDATA0_ATDATA7_SHIFT                           1

#define FUNNELM_ITATBDATA0_ATDATA0_MASK                            0x00000001
#define FUNNELM_ITATBDATA0_ATDATA0_SHIFT                           0

#define FUNNELM_ITATBCTR2_reserved0_MASK                           0xfffffffc
#define FUNNELM_ITATBCTR2_reserved0_SHIFT                          2

#define FUNNELM_ITATBCTR2_AFVALID_MASK                             0x00000002
#define FUNNELM_ITATBCTR2_AFVALID_SHIFT                            1

#define FUNNELM_ITATBCTR2_ATREADY_MASK                             0x00000001
#define FUNNELM_ITATBCTR2_ATREADY_SHIFT                            0

#define FUNNELM_ITATBCTR1_reserved0_MASK                           0xffffff80
#define FUNNELM_ITATBCTR1_reserved0_SHIFT                          7

#define FUNNELM_ITATBCTR1_ATID_MASK                                0x0000007f
#define FUNNELM_ITATBCTR1_ATID_SHIFT                               0

#define FUNNELM_ITATBCTR0_reserved0_MASK                           0xfffffc00
#define FUNNELM_ITATBCTR0_reserved0_SHIFT                          10

#define FUNNELM_ITATBCTR0_ATBYTES_MASK                             0x00000300
#define FUNNELM_ITATBCTR0_ATBYTES_SHIFT                            8

#define FUNNELM_ITATBCTR0_reserved1_MASK                           0x000000fc
#define FUNNELM_ITATBCTR0_reserved1_SHIFT                          2

#define FUNNELM_ITATBCTR0_AFREADY_MASK                             0x00000002
#define FUNNELM_ITATBCTR0_AFREADY_SHIFT                            1

#define FUNNELM_ITATBCTR0_ATVALID_MASK                             0x00000001
#define FUNNELM_ITATBCTR0_ATVALID_SHIFT                            0

#define FUNNELM_ITCTRL_reserved0_MASK                              0xfffffffe
#define FUNNELM_ITCTRL_reserved0_SHIFT                             1

#define FUNNELM_ITCTRL_Integration_mode_MASK                       0x00000001
#define FUNNELM_ITCTRL_Integration_mode_SHIFT                      0

#define FUNNELM_CLAIMSET_reserved0_MASK                            0xfffffff0
#define FUNNELM_CLAIMSET_reserved0_SHIFT                           4

#define FUNNELM_CLAIMSET_CLAIMSET_MASK                             0x0000000f
#define FUNNELM_CLAIMSET_CLAIMSET_SHIFT                            0

#define FUNNELM_CLAIMCLR_reserved0_MASK                            0xfffffff0
#define FUNNELM_CLAIMCLR_reserved0_SHIFT                           4

#define FUNNELM_CLAIMCLR_CLAIMCLR_MASK                             0x0000000f
#define FUNNELM_CLAIMCLR_CLAIMCLR_SHIFT                            0

#define FUNNELM_LOCKACCESS_KEY_MASK                                0xffffffff
#define FUNNELM_LOCKACCESS_KEY_SHIFT                               0

#define FUNNELM_LOCKSTATUS_reserved0_MASK                          0xfffffff8
#define FUNNELM_LOCKSTATUS_reserved0_SHIFT                         3

#define FUNNELM_LOCKSTATUS_nTT_MASK                                0x00000004
#define FUNNELM_LOCKSTATUS_nTT_SHIFT                               2

#define FUNNELM_LOCKSTATUS_SLK_MASK                                0x00000002
#define FUNNELM_LOCKSTATUS_SLK_SHIFT                               1

#define FUNNELM_LOCKSTATUS_SLI_MASK                                0x00000001
#define FUNNELM_LOCKSTATUS_SLI_SHIFT                               0

#define FUNNELM_AUTHSTATUS_reserved0_MASK                          0xffffff00
#define FUNNELM_AUTHSTATUS_reserved0_SHIFT                         8

#define FUNNELM_AUTHSTATUS_SNID_MASK                               0x000000c0
#define FUNNELM_AUTHSTATUS_SNID_SHIFT                              6

#define FUNNELM_AUTHSTATUS_SID_MASK                                0x00000030
#define FUNNELM_AUTHSTATUS_SID_SHIFT                               4

#define FUNNELM_AUTHSTATUS_NSNID_MASK                              0x0000000c
#define FUNNELM_AUTHSTATUS_NSNID_SHIFT                             2

#define FUNNELM_AUTHSTATUS_NSID_MASK                               0x00000003
#define FUNNELM_AUTHSTATUS_NSID_SHIFT                              0

#define FUNNELM_DEVID_reserved0_MASK                               0xffffff00
#define FUNNELM_DEVID_reserved0_SHIFT                              8

#define FUNNELM_DEVID_SCHEME_MASK                                  0x000000f0
#define FUNNELM_DEVID_SCHEME_SHIFT                                 4

#define FUNNELM_DEVID_PORTCOUNT_MASK                               0x0000000f
#define FUNNELM_DEVID_PORTCOUNT_SHIFT                              0

#define FUNNELM_DEVTYPE_reserved0_MASK                             0xffffff00
#define FUNNELM_DEVTYPE_reserved0_SHIFT                            8

#define FUNNELM_DEVTYPE_Sub_Type_MASK                              0x000000f0
#define FUNNELM_DEVTYPE_Sub_Type_SHIFT                             4

#define FUNNELM_DEVTYPE_Major_Type_MASK                            0x0000000f
#define FUNNELM_DEVTYPE_Major_Type_SHIFT                           0

#define FUNNELM_PIDR4_reserved0_MASK                               0xffffff00
#define FUNNELM_PIDR4_reserved0_SHIFT                              8

#define FUNNELM_PIDR4_FourKB_Count_MASK                            0x000000f0
#define FUNNELM_PIDR4_FourKB_Count_SHIFT                           4

#define FUNNELM_PIDR4_JEP106_cont_MASK                             0x0000000f
#define FUNNELM_PIDR4_JEP106_cont_SHIFT                            0

#define FUNNELM_PERIPHID5_reserved0_MASK                           0xffffffff
#define FUNNELM_PERIPHID5_reserved0_SHIFT                          0

#define FUNNELM_PERIPHID6_reserved0_MASK                           0xffffffff
#define FUNNELM_PERIPHID6_reserved0_SHIFT                          0

#define FUNNELM_PERIPHID7_reserved0_MASK                           0xffffffff
#define FUNNELM_PERIPHID7_reserved0_SHIFT                          0

#define FUNNELM_PIDR0_reserved0_MASK                               0xffffff00
#define FUNNELM_PIDR0_reserved0_SHIFT                              8

#define FUNNELM_PIDR0_Part_Number_bits7to0_MASK                    0x000000ff
#define FUNNELM_PIDR0_Part_Number_bits7to0_SHIFT                   0

#define FUNNELM_PIDR1_reserved0_MASK                               0xffffff00
#define FUNNELM_PIDR1_reserved0_SHIFT                              8

#define FUNNELM_PIDR1_JEP106_bits3to0_MASK                         0x000000f0
#define FUNNELM_PIDR1_JEP106_bits3to0_SHIFT                        4

#define FUNNELM_PIDR1_Part_Number_bits11to8_MASK                   0x0000000f
#define FUNNELM_PIDR1_Part_Number_bits11to8_SHIFT                  0

#define FUNNELM_PIDR2_reserved0_MASK                               0xffffff00
#define FUNNELM_PIDR2_reserved0_SHIFT                              8

#define FUNNELM_PIDR2_Revision_MASK                                0x000000f0
#define FUNNELM_PIDR2_Revision_SHIFT                               4

#define FUNNELM_PIDR2_JEDEC_MASK                                   0x00000008
#define FUNNELM_PIDR2_JEDEC_SHIFT                                  3

#define FUNNELM_PIDR2_JEP106_bits6to4_MASK                         0x00000007
#define FUNNELM_PIDR2_JEP106_bits6to4_SHIFT                        0

#define FUNNELM_PIDR3_reserved0_MASK                               0xffffff00
#define FUNNELM_PIDR3_reserved0_SHIFT                              8

#define FUNNELM_PIDR3_RevAnd_MASK                                  0x000000f0
#define FUNNELM_PIDR3_RevAnd_SHIFT                                 4

#define FUNNELM_PIDR3_Customer_Modified_MASK                       0x0000000f
#define FUNNELM_PIDR3_Customer_Modified_SHIFT                      0

#define FUNNELM_CID0_reserved0_MASK                                0xffffff00
#define FUNNELM_CID0_reserved0_SHIFT                               8

#define FUNNELM_CID0_Preamble_MASK                                 0x000000ff
#define FUNNELM_CID0_Preamble_SHIFT                                0

#define FUNNELM_CID1_reserved0_MASK                                0xffffff00
#define FUNNELM_CID1_reserved0_SHIFT                               8

#define FUNNELM_CID1_Class_MASK                                    0x000000f0
#define FUNNELM_CID1_Class_SHIFT                                   4

#define FUNNELM_CID1_Preamble_MASK                                 0x0000000f
#define FUNNELM_CID1_Preamble_SHIFT                                0

#define FUNNELM_CID2_reserved0_MASK                                0xffffff00
#define FUNNELM_CID2_reserved0_SHIFT                               8

#define FUNNELM_CID2_Preamble_MASK                                 0x000000ff
#define FUNNELM_CID2_Preamble_SHIFT                                0

#define FUNNELM_CID3_reserved0_MASK                                0xffffff00
#define FUNNELM_CID3_reserved0_SHIFT                               8

#define FUNNELM_CID3_Preamble_MASK                                 0x000000ff
#define FUNNELM_CID3_Preamble_SHIFT                                0

#define ETB_RDP_ETB_RAM_DEPTH_MASK                                 0xffffffff
#define ETB_RDP_ETB_RAM_DEPTH_SHIFT                                0

#define ETB_STS_reserved0_MASK                                     0xfffffff0
#define ETB_STS_reserved0_SHIFT                                    4

#define ETB_STS_FtEmpty_MASK                                       0x00000008
#define ETB_STS_FtEmpty_SHIFT                                      3

#define ETB_STS_AcqComp_MASK                                       0x00000004
#define ETB_STS_AcqComp_SHIFT                                      2

#define ETB_STS_Triggered_MASK                                     0x00000002
#define ETB_STS_Triggered_SHIFT                                    1

#define ETB_STS_Full_MASK                                          0x00000001
#define ETB_STS_Full_SHIFT                                         0

#define ETB_RRD_RAM_Read_Data_MASK                                 0xffffffff
#define ETB_RRD_RAM_Read_Data_SHIFT                                0

#define ETB_RRP_reserved0_MASK                                     0xfffffc00
#define ETB_RRP_reserved0_SHIFT                                    10

#define ETB_RRP_RAM_Read_Pointer_MASK                              0x000003ff
#define ETB_RRP_RAM_Read_Pointer_SHIFT                             0

#define ETB_RWP_reserved0_MASK                                     0xfffffc00
#define ETB_RWP_reserved0_SHIFT                                    10

#define ETB_RWP_RAM_Write_Pointer_MASK                             0x000003ff
#define ETB_RWP_RAM_Write_Pointer_SHIFT                            0

#define ETB_TRG_reserved0_MASK                                     0xfffffc00
#define ETB_TRG_reserved0_SHIFT                                    10

#define ETB_TRG_Trigger_Counter_MASK                               0x000003ff
#define ETB_TRG_Trigger_Counter_SHIFT                              0

#define ETB_CTL_reserved0_MASK                                     0xfffffffe
#define ETB_CTL_reserved0_SHIFT                                    1

#define ETB_CTL_TraceCaptEn_MASK                                   0x00000001
#define ETB_CTL_TraceCaptEn_SHIFT                                  0

#define ETB_RWD_RAM_Write_Data_MASK                                0xffffffff
#define ETB_RWD_RAM_Write_Data_SHIFT                               0

#define ETB_FFSR_reserved0_MASK                                    0xfffffffc
#define ETB_FFSR_reserved0_SHIFT                                   2

#define ETB_FFSR_FtStopped_MASK                                    0x00000002
#define ETB_FFSR_FtStopped_SHIFT                                   1

#define ETB_FFSR_FlInProg_MASK                                     0x00000001
#define ETB_FFSR_FlInProg_SHIFT                                    0

#define ETB_FFCR_reserved0_MASK                                    0xffffc000
#define ETB_FFCR_reserved0_SHIFT                                   14

#define ETB_FFCR_StopTrig_MASK                                     0x00002000
#define ETB_FFCR_StopTrig_SHIFT                                    13

#define ETB_FFCR_StopFl_MASK                                       0x00001000
#define ETB_FFCR_StopFl_SHIFT                                      12

#define ETB_FFCR_reserved1_MASK                                    0x00000800
#define ETB_FFCR_reserved1_SHIFT                                   11

#define ETB_FFCR_TrigFl_MASK                                       0x00000400
#define ETB_FFCR_TrigFl_SHIFT                                      10

#define ETB_FFCR_TrigEvt_MASK                                      0x00000200
#define ETB_FFCR_TrigEvt_SHIFT                                     9

#define ETB_FFCR_TrigIn_MASK                                       0x00000100
#define ETB_FFCR_TrigIn_SHIFT                                      8

#define ETB_FFCR_reserved2_MASK                                    0x00000080
#define ETB_FFCR_reserved2_SHIFT                                   7

#define ETB_FFCR_FOnMan_MASK                                       0x00000040
#define ETB_FFCR_FOnMan_SHIFT                                      6

#define ETB_FFCR_FOnTrig_MASK                                      0x00000020
#define ETB_FFCR_FOnTrig_SHIFT                                     5

#define ETB_FFCR_FOnFlIn_MASK                                      0x00000010
#define ETB_FFCR_FOnFlIn_SHIFT                                     4

#define ETB_FFCR_reserved3_MASK                                    0x0000000c
#define ETB_FFCR_reserved3_SHIFT                                   2

#define ETB_FFCR_EnFCont_MASK                                      0x00000002
#define ETB_FFCR_EnFCont_SHIFT                                     1

#define ETB_FFCR_EnFTC_MASK                                        0x00000001
#define ETB_FFCR_EnFTC_SHIFT                                       0

#define ETB_ITMISCOP0_reserved0_MASK                               0xfffffffc
#define ETB_ITMISCOP0_reserved0_SHIFT                              2

#define ETB_ITMISCOP0_FULL_MASK                                    0x00000002
#define ETB_ITMISCOP0_FULL_SHIFT                                   1

#define ETB_ITMISCOP0_ACQCOMP_MASK                                 0x00000001
#define ETB_ITMISCOP0_ACQCOMP_SHIFT                                0

#define ETB_ITTRFLINACK_reserved0_MASK                             0xfffffffc
#define ETB_ITTRFLINACK_reserved0_SHIFT                            2

#define ETB_ITTRFLINACK_FLUSHINACK_MASK                            0x00000002
#define ETB_ITTRFLINACK_FLUSHINACK_SHIFT                           1

#define ETB_ITTRFLINACK_TRIGINACK_MASK                             0x00000001
#define ETB_ITTRFLINACK_TRIGINACK_SHIFT                            0

#define ETB_ITTRFLIN_reserved0_MASK                                0xfffffffc
#define ETB_ITTRFLIN_reserved0_SHIFT                               2

#define ETB_ITTRFLIN_FLUSHIN_MASK                                  0x00000002
#define ETB_ITTRFLIN_FLUSHIN_SHIFT                                 1

#define ETB_ITTRFLIN_TRIGIN_MASK                                   0x00000001
#define ETB_ITTRFLIN_TRIGIN_SHIFT                                  0

#define ETB_ITATBDATA0_reserved0_MASK                              0xffffffe0
#define ETB_ITATBDATA0_reserved0_SHIFT                             5

#define ETB_ITATBDATA0_ATDATA_31_MASK                              0x00000010
#define ETB_ITATBDATA0_ATDATA_31_SHIFT                             4

#define ETB_ITATBDATA0_ATDATA_23_MASK                              0x00000008
#define ETB_ITATBDATA0_ATDATA_23_SHIFT                             3

#define ETB_ITATBDATA0_ATDATA_15_MASK                              0x00000004
#define ETB_ITATBDATA0_ATDATA_15_SHIFT                             2

#define ETB_ITATBDATA0_ATDATA_7_MASK                               0x00000002
#define ETB_ITATBDATA0_ATDATA_7_SHIFT                              1

#define ETB_ITATBDATA0_ATDATA_0_MASK                               0x00000001
#define ETB_ITATBDATA0_ATDATA_0_SHIFT                              0

#define ETB_ITATBCTR2_reserved0_MASK                               0xfffffffc
#define ETB_ITATBCTR2_reserved0_SHIFT                              2

#define ETB_ITATBCTR2_AFVALIDS_MASK                                0x00000002
#define ETB_ITATBCTR2_AFVALIDS_SHIFT                               1

#define ETB_ITATBCTR2_ATREADYS_MASK                                0x00000001
#define ETB_ITATBCTR2_ATREADYS_SHIFT                               0

#define ETB_ITATBCTR1_reserved0_MASK                               0xffffff80
#define ETB_ITATBCTR1_reserved0_SHIFT                              7

#define ETB_ITATBCTR1_ATID_MASK                                    0x0000007f
#define ETB_ITATBCTR1_ATID_SHIFT                                   0

#define ETB_ITATBCTR0_reserved0_MASK                               0xfffffc00
#define ETB_ITATBCTR0_reserved0_SHIFT                              10

#define ETB_ITATBCTR0_ATBYTES_MASK                                 0x00000300
#define ETB_ITATBCTR0_ATBYTES_SHIFT                                8

#define ETB_ITATBCTR0_reserved1_MASK                               0x000000fc
#define ETB_ITATBCTR0_reserved1_SHIFT                              2

#define ETB_ITATBCTR0_AFREADY_MASK                                 0x00000002
#define ETB_ITATBCTR0_AFREADY_SHIFT                                1

#define ETB_ITATBCTR0_ATVALID_MASK                                 0x00000001
#define ETB_ITATBCTR0_ATVALID_SHIFT                                0

#define ETB_ITCTRL_reserved0_MASK                                  0xfffffffe
#define ETB_ITCTRL_reserved0_SHIFT                                 1

#define ETB_ITCTRL_Integration_mode_MASK                           0x00000001
#define ETB_ITCTRL_Integration_mode_SHIFT                          0

#define ETB_CLAIMSET_reserved0_MASK                                0xfffffff0
#define ETB_CLAIMSET_reserved0_SHIFT                               4

#define ETB_CLAIMSET_CLAIMSET_MASK                                 0x0000000f
#define ETB_CLAIMSET_CLAIMSET_SHIFT                                0

#define ETB_CLAIMCLR_reserved0_MASK                                0xfffffff0
#define ETB_CLAIMCLR_reserved0_SHIFT                               4

#define ETB_CLAIMCLR_CLAIMCLR_MASK                                 0x0000000f
#define ETB_CLAIMCLR_CLAIMCLR_SHIFT                                0

#define ETB_LAR_ACCESS_W_MASK                                      0xffffffff
#define ETB_LAR_ACCESS_W_SHIFT                                     0

#define ETB_LSR_reserved0_MASK                                     0xfffffff8
#define ETB_LSR_reserved0_SHIFT                                    3

#define ETB_LSR_LOCKTYPE_MASK                                      0x00000004
#define ETB_LSR_LOCKTYPE_SHIFT                                     2

#define ETB_LSR_LOCKGRANT_MASK                                     0x00000002
#define ETB_LSR_LOCKGRANT_SHIFT                                    1

#define ETB_LSR_LOCKEXIST_MASK                                     0x00000001
#define ETB_LSR_LOCKEXIST_SHIFT                                    0

#define ETB_AUTHSTATUS_reserved0_MASK                              0xffffff00
#define ETB_AUTHSTATUS_reserved0_SHIFT                             8

#define ETB_AUTHSTATUS_SNID_MASK                                   0x000000c0
#define ETB_AUTHSTATUS_SNID_SHIFT                                  6

#define ETB_AUTHSTATUS_SID_MASK                                    0x00000030
#define ETB_AUTHSTATUS_SID_SHIFT                                   4

#define ETB_AUTHSTATUS_NSNID_MASK                                  0x0000000c
#define ETB_AUTHSTATUS_NSNID_SHIFT                                 2

#define ETB_AUTHSTATUS_NSID_MASK                                   0x00000003
#define ETB_AUTHSTATUS_NSID_SHIFT                                  0

#define ETB_DEVID_reserved0_MASK                                   0xffffffc0
#define ETB_DEVID_reserved0_SHIFT                                  6

#define ETB_DEVID_RAMCLK_MASK                                      0x00000020
#define ETB_DEVID_RAMCLK_SHIFT                                     5

#define ETB_DEVID_EXTMUXNUM_MASK                                   0x0000001f
#define ETB_DEVID_EXTMUXNUM_SHIFT                                  0

#define ETB_DEVTYPE_reserved0_MASK                                 0xffffff00
#define ETB_DEVTYPE_reserved0_SHIFT                                8

#define ETB_DEVTYPE_Sub_Type_MASK                                  0x000000f0
#define ETB_DEVTYPE_Sub_Type_SHIFT                                 4

#define ETB_DEVTYPE_Major_Type_MASK                                0x0000000f
#define ETB_DEVTYPE_Major_Type_SHIFT                               0

#define ETB_PERIPHID4_reserved0_MASK                               0xffffff00
#define ETB_PERIPHID4_reserved0_SHIFT                              8

#define ETB_PERIPHID4_SIZE_MASK                                    0x000000f0
#define ETB_PERIPHID4_SIZE_SHIFT                                   4

#define ETB_PERIPHID4_DES_2_MASK                                   0x0000000f
#define ETB_PERIPHID4_DES_2_SHIFT                                  0

#define ETB_PERIPHID5_reserved0_MASK                               0xffffffff
#define ETB_PERIPHID5_reserved0_SHIFT                              0

#define ETB_PERIPHID6_reserved0_MASK                               0xffffffff
#define ETB_PERIPHID6_reserved0_SHIFT                              0

#define ETB_PERIPHID7_reserved0_MASK                               0xffffffff
#define ETB_PERIPHID7_reserved0_SHIFT                              0

#define ETB_PERIPHID0_reserved0_MASK                               0xffffff00
#define ETB_PERIPHID0_reserved0_SHIFT                              8

#define ETB_PERIPHID0_PART_0_MASK                                  0x000000ff
#define ETB_PERIPHID0_PART_0_SHIFT                                 0

#define ETB_PERIPHID1_reserved0_MASK                               0xffffff00
#define ETB_PERIPHID1_reserved0_SHIFT                              8

#define ETB_PERIPHID1_DES_0_MASK                                   0x000000f0
#define ETB_PERIPHID1_DES_0_SHIFT                                  4

#define ETB_PERIPHID1_PART_1_MASK                                  0x0000000f
#define ETB_PERIPHID1_PART_1_SHIFT                                 0

#define ETB_PERIPHID2_reserved0_MASK                               0xffffff00
#define ETB_PERIPHID2_reserved0_SHIFT                              8

#define ETB_PERIPHID2_REVISION_MASK                                0x000000f0
#define ETB_PERIPHID2_REVISION_SHIFT                               4

#define ETB_PERIPHID2_JEDEC_MASK                                   0x00000008
#define ETB_PERIPHID2_JEDEC_SHIFT                                  3

#define ETB_PERIPHID2_DES_1_MASK                                   0x00000007
#define ETB_PERIPHID2_DES_1_SHIFT                                  0

#define ETB_PERIPHID3_reserved0_MASK                               0xffffff00
#define ETB_PERIPHID3_reserved0_SHIFT                              8

#define ETB_PERIPHID3_REVAND_MASK                                  0x000000f0
#define ETB_PERIPHID3_REVAND_SHIFT                                 4

#define ETB_PERIPHID3_CMOD_MASK                                    0x0000000f
#define ETB_PERIPHID3_CMOD_SHIFT                                   0

#define ETB_COMPID0_reserved0_MASK                                 0xffffff00
#define ETB_COMPID0_reserved0_SHIFT                                8

#define ETB_COMPID0_PRMBL_0_MASK                                   0x000000ff
#define ETB_COMPID0_PRMBL_0_SHIFT                                  0

#define ETB_COMPID1_reserved0_MASK                                 0xffffff00
#define ETB_COMPID1_reserved0_SHIFT                                8

#define ETB_COMPID1_CLASS_MASK                                     0x000000f0
#define ETB_COMPID1_CLASS_SHIFT                                    4

#define ETB_COMPID1_PRMBL_1_MASK                                   0x0000000f
#define ETB_COMPID1_PRMBL_1_SHIFT                                  0

#define ETB_COMPID2_reserved0_MASK                                 0xffffff00
#define ETB_COMPID2_reserved0_SHIFT                                8

#define ETB_COMPID2_PRMBL_2_MASK                                   0x000000ff
#define ETB_COMPID2_PRMBL_2_SHIFT                                  0

#define ETB_COMPID3_reserved0_MASK                                 0xffffff00
#define ETB_COMPID3_reserved0_SHIFT                                8

#define ETB_COMPID3_PRMBL_3_MASK                                   0x000000ff
#define ETB_COMPID3_PRMBL_3_SHIFT                                  0

#define TSGEN_CNTCR_reserved0_MASK                                 0xfffffffc
#define TSGEN_CNTCR_reserved0_SHIFT                                2

#define TSGEN_CNTCR_CNTCR_HDBG_MASK                                0x00000002
#define TSGEN_CNTCR_CNTCR_HDBG_SHIFT                               1

#define TSGEN_CNTCR_CNTCR_EN_MASK                                  0x00000001
#define TSGEN_CNTCR_CNTCR_EN_SHIFT                                 0

#define TSGEN_CNTSR_reserved0_MASK                                 0xfffffffc
#define TSGEN_CNTSR_reserved0_SHIFT                                2

#define TSGEN_CNTSR_CNTSR_DBGH_MASK                                0x00000002
#define TSGEN_CNTSR_CNTSR_DBGH_SHIFT                               1

#define TSGEN_CNTSR_reserved1_MASK                                 0x00000001
#define TSGEN_CNTSR_reserved1_SHIFT                                0

#define TSGEN_CNTCVL_CNTCVL_L_32_MASK                              0xffffffff
#define TSGEN_CNTCVL_CNTCVL_L_32_SHIFT                             0

#define TSGEN_CNTCVU_CNTCVU_U_32_MASK                              0xffffffff
#define TSGEN_CNTCVU_CNTCVU_U_32_SHIFT                             0

#define TSGEN_CNTFID0_CNTFID0_MASK                                 0xffffffff
#define TSGEN_CNTFID0_CNTFID0_SHIFT                                0

#define TSGEN_PIDR4_reserved0_MASK                                 0xffffff00
#define TSGEN_PIDR4_reserved0_SHIFT                                8

#define TSGEN_PIDR4_SIZE_MASK                                      0x000000f0
#define TSGEN_PIDR4_SIZE_SHIFT                                     4

#define TSGEN_PIDR4_DES_2_MASK                                     0x0000000f
#define TSGEN_PIDR4_DES_2_SHIFT                                    0

#define TSGEN_PIDR5_reserved0_MASK                                 0xffffffff
#define TSGEN_PIDR5_reserved0_SHIFT                                0

#define TSGEN_PIDR6_reserved0_MASK                                 0xffffffff
#define TSGEN_PIDR6_reserved0_SHIFT                                0

#define TSGEN_PIDR7_reserved0_MASK                                 0xffffffff
#define TSGEN_PIDR7_reserved0_SHIFT                                0

#define TSGEN_PIDR0_reserved0_MASK                                 0xffffff00
#define TSGEN_PIDR0_reserved0_SHIFT                                8

#define TSGEN_PIDR0_PART_0_MASK                                    0x000000ff
#define TSGEN_PIDR0_PART_0_SHIFT                                   0

#define TSGEN_PIDR1_reserved0_MASK                                 0xffffff00
#define TSGEN_PIDR1_reserved0_SHIFT                                8

#define TSGEN_PIDR1_DES_0_MASK                                     0x000000f0
#define TSGEN_PIDR1_DES_0_SHIFT                                    4

#define TSGEN_PIDR1_PART_1_MASK                                    0x0000000f
#define TSGEN_PIDR1_PART_1_SHIFT                                   0

#define TSGEN_PIDR2_reserved0_MASK                                 0xffffff00
#define TSGEN_PIDR2_reserved0_SHIFT                                8

#define TSGEN_PIDR2_REVISION_MASK                                  0x000000f0
#define TSGEN_PIDR2_REVISION_SHIFT                                 4

#define TSGEN_PIDR2_JEDEC_MASK                                     0x00000008
#define TSGEN_PIDR2_JEDEC_SHIFT                                    3

#define TSGEN_PIDR2_DES_1_MASK                                     0x00000007
#define TSGEN_PIDR2_DES_1_SHIFT                                    0

#define TSGEN_PIDR3_reserved0_MASK                                 0xffffff00
#define TSGEN_PIDR3_reserved0_SHIFT                                8

#define TSGEN_PIDR3_REVAND_MASK                                    0x000000f0
#define TSGEN_PIDR3_REVAND_SHIFT                                   4

#define TSGEN_PIDR3_CMOD_MASK                                      0x0000000f
#define TSGEN_PIDR3_CMOD_SHIFT                                     0

#define TSGEN_CIDR0_reserved0_MASK                                 0xffffff00
#define TSGEN_CIDR0_reserved0_SHIFT                                8

#define TSGEN_CIDR0_PRMBL_0_MASK                                   0x000000ff
#define TSGEN_CIDR0_PRMBL_0_SHIFT                                  0

#define TSGEN_CIDR1_reserved0_MASK                                 0xffffff00
#define TSGEN_CIDR1_reserved0_SHIFT                                8

#define TSGEN_CIDR1_CLASS_MASK                                     0x000000f0
#define TSGEN_CIDR1_CLASS_SHIFT                                    4

#define TSGEN_CIDR1_PRMBL_1_MASK                                   0x0000000f
#define TSGEN_CIDR1_PRMBL_1_SHIFT                                  0

#define TSGEN_CIDR2_reserved0_MASK                                 0xffffff00
#define TSGEN_CIDR2_reserved0_SHIFT                                8

#define TSGEN_CIDR2_PRMBL_2_MASK                                   0x000000ff
#define TSGEN_CIDR2_PRMBL_2_SHIFT                                  0

#define TSGEN_CIDR3_reserved0_MASK                                 0xffffff00
#define TSGEN_CIDR3_reserved0_SHIFT                                8

#define TSGEN_CIDR3_PRMBL_3_MASK                                   0x000000ff
#define TSGEN_CIDR3_PRMBL_3_SHIFT                                  0

#define CM7_i_AHBP_CAP_HTMGLBCTRL_reserved0_MASK                   0xfffffffe
#define CM7_i_AHBP_CAP_HTMGLBCTRL_reserved0_SHIFT                  1

#define CM7_i_AHBP_CAP_HTMGLBCTRL_GLBEN_MASK                       0x00000001
#define CM7_i_AHBP_CAP_HTMGLBCTRL_GLBEN_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMSTATUS_reserved0_MASK                    0xffffe000
#define CM7_i_AHBP_CAP_HTMSTATUS_reserved0_SHIFT                   13

#define CM7_i_AHBP_CAP_HTMSTATUS_IDLE_MASK                         0x00001000
#define CM7_i_AHBP_CAP_HTMSTATUS_IDLE_SHIFT                        12

#define CM7_i_AHBP_CAP_HTMSTATUS_EXTDISABLE_MASK                   0x00000800
#define CM7_i_AHBP_CAP_HTMSTATUS_EXTDISABLE_SHIFT                  11

#define CM7_i_AHBP_CAP_HTMSTATUS_BUSENDIAN_MASK                    0x00000400
#define CM7_i_AHBP_CAP_HTMSTATUS_BUSENDIAN_SHIFT                   10

#define CM7_i_AHBP_CAP_HTMSTATUS_DBGPWRDN_MASK                     0x00000200
#define CM7_i_AHBP_CAP_HTMSTATUS_DBGPWRDN_SHIFT                    9

#define CM7_i_AHBP_CAP_HTMSTATUS_AHBPWRDN_MASK                     0x00000100
#define CM7_i_AHBP_CAP_HTMSTATUS_AHBPWRDN_SHIFT                    8

#define CM7_i_AHBP_CAP_HTMSTATUS_AHBRST_MASK                       0x00000080
#define CM7_i_AHBP_CAP_HTMSTATUS_AHBRST_SHIFT                      7

#define CM7_i_AHBP_CAP_HTMSTATUS_SYNCBYPASS_MASK                   0x00000040
#define CM7_i_AHBP_CAP_HTMSTATUS_SYNCBYPASS_SHIFT                  6

#define CM7_i_AHBP_CAP_HTMSTATUS_SPIDEN_MASK                       0x00000020
#define CM7_i_AHBP_CAP_HTMSTATUS_SPIDEN_SHIFT                      5

#define CM7_i_AHBP_CAP_HTMSTATUS_DBGEN_MASK                        0x00000010
#define CM7_i_AHBP_CAP_HTMSTATUS_DBGEN_SHIFT                       4

#define CM7_i_AHBP_CAP_HTMSTATUS_SPNIDEN_MASK                      0x00000008
#define CM7_i_AHBP_CAP_HTMSTATUS_SPNIDEN_SHIFT                     3

#define CM7_i_AHBP_CAP_HTMSTATUS_NIDEN_MASK                        0x00000004
#define CM7_i_AHBP_CAP_HTMSTATUS_NIDEN_SHIFT                       2

#define CM7_i_AHBP_CAP_HTMSTATUS_FIFOEMPTY_MASK                    0x00000002
#define CM7_i_AHBP_CAP_HTMSTATUS_FIFOEMPTY_SHIFT                   1

#define CM7_i_AHBP_CAP_HTMSTATUS_LOCKED_MASK                       0x00000001
#define CM7_i_AHBP_CAP_HTMSTATUS_LOCKED_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_V6SUPPORT_MASK               0x80000000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_V6SUPPORT_SHIFT              31

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_64BIT_MASK                   0x40000000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_64BIT_SHIFT                  30

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_ASIC_MASK                    0x3f000000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_ASIC_SHIFT                   24

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_EXTOUT_MASK                  0x00e00000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_EXTOUT_SHIFT                 21

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_EXTIN_MASK                   0x001c0000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_EXTIN_SHIFT                  18

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_SEQ_MASK                     0x00020000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_SEQ_SHIFT                    17

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_CNTR_MASK                    0x0001c000
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_CNTR_SHIFT                   14

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_HCTRL_MASK                   0x00003c00
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_HCTRL_SHIFT                  10

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_DCOMP_MASK                   0x000003e0
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_DCOMP_SHIFT                  5

#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_ACOMP_MASK                   0x0000001f
#define CM7_i_AHBP_CAP_HTMCFGCODE_CFG_ACOMP_SHIFT                  0

#define CM7_i_AHBP_CAP_HTMCFGCODE2_reserved0_MASK                  0xfffff800
#define CM7_i_AHBP_CAP_HTMCFGCODE2_reserved0_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMCFGCODE2_MAXBUS_MASK                     0x00000700
#define CM7_i_AHBP_CAP_HTMCFGCODE2_MAXBUS_SHIFT                    8

#define CM7_i_AHBP_CAP_HTMCFGCODE2_FIFOSIZE_MASK                   0x000000ff
#define CM7_i_AHBP_CAP_HTMCFGCODE2_FIFOSIZE_SHIFT                  0

#define CM7_i_AHBP_CAP_HTMCONTROL_reserved0_MASK                   0xfffffe00
#define CM7_i_AHBP_CAP_HTMCONTROL_reserved0_SHIFT                  9

#define CM7_i_AHBP_CAP_HTMCONTROL_TRIGMODE_MASK                    0x00000100
#define CM7_i_AHBP_CAP_HTMCONTROL_TRIGMODE_SHIFT                   8

#define CM7_i_AHBP_CAP_HTMCONTROL_SWTRACEDISABLE_MASK              0x00000080
#define CM7_i_AHBP_CAP_HTMCONTROL_SWTRACEDISABLE_SHIFT             7

#define CM7_i_AHBP_CAP_HTMCONTROL_EXTDISABLE_MASK                  0x00000040
#define CM7_i_AHBP_CAP_HTMCONTROL_EXTDISABLE_SHIFT                 6

#define CM7_i_AHBP_CAP_HTMCONTROL_reserved1_MASK                   0x00000020
#define CM7_i_AHBP_CAP_HTMCONTROL_reserved1_SHIFT                  5

#define CM7_i_AHBP_CAP_HTMCONTROL_CYCEN_MASK                       0x00000010
#define CM7_i_AHBP_CAP_HTMCONTROL_CYCEN_SHIFT                      4

#define CM7_i_AHBP_CAP_HTMCONTROL_DATAEN_MASK                      0x00000008
#define CM7_i_AHBP_CAP_HTMCONTROL_DATAEN_SHIFT                     3

#define CM7_i_AHBP_CAP_HTMCONTROL_AUXEN_MASK                       0x00000004
#define CM7_i_AHBP_CAP_HTMCONTROL_AUXEN_SHIFT                      2

#define CM7_i_AHBP_CAP_HTMCONTROL_ADDREN_MASK                      0x00000002
#define CM7_i_AHBP_CAP_HTMCONTROL_ADDREN_SHIFT                     1

#define CM7_i_AHBP_CAP_HTMCONTROL_PROG_MASK                        0x00000001
#define CM7_i_AHBP_CAP_HTMCONTROL_PROG_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMTRIGEVT_reserved0_MASK                   0xfffe0000
#define CM7_i_AHBP_CAP_HTMTRIGEVT_reserved0_SHIFT                  17

#define CM7_i_AHBP_CAP_HTMTRIGEVT_FUNC_MASK                        0x0001c000
#define CM7_i_AHBP_CAP_HTMTRIGEVT_FUNC_SHIFT                       14

#define CM7_i_AHBP_CAP_HTMTRIGEVT_RES_B_MASK                       0x00003f80
#define CM7_i_AHBP_CAP_HTMTRIGEVT_RES_B_SHIFT                      7

#define CM7_i_AHBP_CAP_HTMTRIGEVT_RES_A_MASK                       0x0000007f
#define CM7_i_AHBP_CAP_HTMTRIGEVT_RES_A_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMTRIGSTATE_reserved0_MASK                 0xfffffffe
#define CM7_i_AHBP_CAP_HTMTRIGSTATE_reserved0_SHIFT                1

#define CM7_i_AHBP_CAP_HTMTRIGSTATE_TRIGSTATE_MASK                 0x00000001
#define CM7_i_AHBP_CAP_HTMTRIGSTATE_TRIGSTATE_SHIFT                0

#define CM7_i_AHBP_CAP_HTMAUXSEL_reserved0_MASK                    0xfffffff0
#define CM7_i_AHBP_CAP_HTMAUXSEL_reserved0_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMAUXSEL_AUXSEL_MASK                       0x0000000f
#define CM7_i_AHBP_CAP_HTMAUXSEL_AUXSEL_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMSYNCRELOAD_reserved0_MASK                0xfffff000
#define CM7_i_AHBP_CAP_HTMSYNCRELOAD_reserved0_SHIFT               12

#define CM7_i_AHBP_CAP_HTMSYNCRELOAD_RELOAD_MASK                   0x00000fff
#define CM7_i_AHBP_CAP_HTMSYNCRELOAD_RELOAD_SHIFT                  0

#define CM7_i_AHBP_CAP_HTMSYNCCOUNT_reserved0_MASK                 0xfffff000
#define CM7_i_AHBP_CAP_HTMSYNCCOUNT_reserved0_SHIFT                12

#define CM7_i_AHBP_CAP_HTMSYNCCOUNT_SYNC_CVAL_MASK                 0x00000fff
#define CM7_i_AHBP_CAP_HTMSYNCCOUNT_SYNC_CVAL_SHIFT                0

#define CM7_i_AHBP_CAP_HTMFIFOLEVEL_reserved0_MASK                 0xffffffc0
#define CM7_i_AHBP_CAP_HTMFIFOLEVEL_reserved0_SHIFT                6

#define CM7_i_AHBP_CAP_HTMFIFOLEVEL_LEVEL_MASK                     0x0000003f
#define CM7_i_AHBP_CAP_HTMFIFOLEVEL_LEVEL_SHIFT                    0

#define CM7_i_AHBP_CAP_HTMSTARTSTOP_STOP_CMP_MASK                  0xffff0000
#define CM7_i_AHBP_CAP_HTMSTARTSTOP_STOP_CMP_SHIFT                 16

#define CM7_i_AHBP_CAP_HTMSTARTSTOP_START_CMP_MASK                 0x0000ffff
#define CM7_i_AHBP_CAP_HTMSTARTSTOP_START_CMP_SHIFT                0

#define CM7_i_AHBP_CAP_HTMCTRL2_EXCLUDE_MASK                       0xffff0000
#define CM7_i_AHBP_CAP_HTMCTRL2_EXCLUDE_SHIFT                      16

#define CM7_i_AHBP_CAP_HTMCTRL2_INCLUDE_MASK                       0x0000ffff
#define CM7_i_AHBP_CAP_HTMCTRL2_INCLUDE_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMTRACEEVT_reserved0_MASK                  0xfffe0000
#define CM7_i_AHBP_CAP_HTMTRACEEVT_reserved0_SHIFT                 17

#define CM7_i_AHBP_CAP_HTMTRACEEVT_FUNC_MASK                       0x0001c000
#define CM7_i_AHBP_CAP_HTMTRACEEVT_FUNC_SHIFT                      14

#define CM7_i_AHBP_CAP_HTMTRACEEVT_RES_B_MASK                      0x00003f80
#define CM7_i_AHBP_CAP_HTMTRACEEVT_RES_B_SHIFT                     7

#define CM7_i_AHBP_CAP_HTMTRACEEVT_RES_A_MASK                      0x0000007f
#define CM7_i_AHBP_CAP_HTMTRACEEVT_RES_A_SHIFT                     0

#define CM7_i_AHBP_CAP_HTMTRACECTRL_reserved0_MASK                 0xfffc0000
#define CM7_i_AHBP_CAP_HTMTRACECTRL_reserved0_SHIFT                18

#define CM7_i_AHBP_CAP_HTMTRACECTRL_EXC_ONLY_MASK                  0x00020000
#define CM7_i_AHBP_CAP_HTMTRACECTRL_EXC_ONLY_SHIFT                 17

#define CM7_i_AHBP_CAP_HTMTRACECTRL_SSENABLE_MASK                  0x00010000
#define CM7_i_AHBP_CAP_HTMTRACECTRL_SSENABLE_SHIFT                 16

#define CM7_i_AHBP_CAP_HTMTRACECTRL_RANGE_EXC_MASK                 0x0000ff00
#define CM7_i_AHBP_CAP_HTMTRACECTRL_RANGE_EXC_SHIFT                8

#define CM7_i_AHBP_CAP_HTMTRACECTRL_RANGE_INC_MASK                 0x000000ff
#define CM7_i_AHBP_CAP_HTMTRACECTRL_RANGE_INC_SHIFT                0

#define CM7_i_AHBP_CAP_HTMSSTATE_reserved0_MASK                    0xfffffffe
#define CM7_i_AHBP_CAP_HTMSSTATE_reserved0_SHIFT                   1

#define CM7_i_AHBP_CAP_HTMSSTATE_STATE_MASK                        0x00000001
#define CM7_i_AHBP_CAP_HTMSSTATE_STATE_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMASICCTRL_reserved0_MASK                  0xffffff00
#define CM7_i_AHBP_CAP_HTMASICCTRL_reserved0_SHIFT                 8

#define CM7_i_AHBP_CAP_HTMASICCTRL_ASICCTRL_MASK                   0x000000ff
#define CM7_i_AHBP_CAP_HTMASICCTRL_ASICCTRL_SHIFT                  0

#define CM7_i_AHBP_CAP_HTMBUSSELECT_reserved0_MASK                 0xfffffff8
#define CM7_i_AHBP_CAP_HTMBUSSELECT_reserved0_SHIFT                3

#define CM7_i_AHBP_CAP_HTMBUSSELECT_BUSSELECT_MASK                 0x00000007
#define CM7_i_AHBP_CAP_HTMBUSSELECT_BUSSELECT_SHIFT                0

#define CM7_0_AHBP_CAP_HTMADDR_i_ARRAY_BASE                        0x80355080
#define CM7_0_AHBP_CAP_HTMADDR_i_ARRAY_START                       0
#define CM7_0_AHBP_CAP_HTMADDR_i_ARRAY_END                         15
#define CM7_0_AHBP_CAP_HTMADDR_i_ARRAY_ELEMENT_SIZE                32

#define CM7_i_AHBP_CAP_HTMADDR_i_ADDR_MASK                         0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_i_ADDR_SHIFT                        0

#define CM7_i_AHBP_CAP_HTMADDR_10_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_10_ADDR_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMADDR_11_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_11_ADDR_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMADDR_12_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_12_ADDR_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMADDR_13_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_13_ADDR_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMADDR_14_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_14_ADDR_SHIFT                       0

#define CM7_i_AHBP_CAP_HTMADDR_15_ADDR_MASK                        0xffffffff
#define CM7_i_AHBP_CAP_HTMADDR_15_ADDR_SHIFT                       0

#define CM7_0_AHBP_CAP_HTMADDRTYPE_i_ARRAY_BASE                    0x803550c0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_i_ARRAY_START                   0
#define CM7_0_AHBP_CAP_HTMADDRTYPE_i_ARRAY_END                     15
#define CM7_0_AHBP_CAP_HTMADDRTYPE_i_ARRAY_ELEMENT_SIZE            32

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_reserved0_MASK                0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_reserved0_SHIFT               12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_STICKY_MASK                   0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_STICKY_SHIFT                  11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_HCTRL_SEL_MASK                0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_HCTRL_SEL_SHIFT               8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_HCTRL_EN_MASK                 0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_HCTRL_EN_SHIFT                7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_SIZE_MASK                     0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_SIZE_SHIFT                    4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_DIR_MASK                      0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_DIR_SHIFT                     2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_TYPE_MASK                     0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_i_TYPE_SHIFT                    0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_10_TYPE_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_11_TYPE_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_12_TYPE_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_13_TYPE_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_14_TYPE_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_reserved0_MASK               0xfffff000
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_reserved0_SHIFT              12

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_STICKY_MASK                  0x00000800
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_STICKY_SHIFT                 11

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_HCTRL_SEL_MASK               0x00000700
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_HCTRL_SEL_SHIFT              8

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_HCTRL_EN_MASK                0x00000080
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_HCTRL_EN_SHIFT               7

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_SIZE_MASK                    0x00000070
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_SIZE_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_DIR_MASK                     0x0000000c
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_DIR_SHIFT                    2

#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_TYPE_MASK                    0x00000003
#define CM7_i_AHBP_CAP_HTMADDRTYPE_15_TYPE_SHIFT                   0

#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_BASE                   0x80355380
#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_START                  0
#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_END                    1
#define CM7_0_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_ELEMENT_SIZE           32

#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_reserved0_MASK               0xfffe0000
#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_reserved0_SHIFT              17

#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_FUNC_MASK                    0x0001c000
#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_FUNC_SHIFT                   14

#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_RES_B_MASK                   0x00003f80
#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_RES_B_SHIFT                  7

#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_RES_A_MASK                   0x0000007f
#define CM7_i_AHBP_CAP_HTMEXTOUTEVT_i_RES_A_SHIFT                  0

#define CM7_i_AHBP_CAP_HTMATIDOUT_reserved0_MASK                   0xffffff80
#define CM7_i_AHBP_CAP_HTMATIDOUT_reserved0_SHIFT                  7

#define CM7_i_AHBP_CAP_HTMATIDOUT_IDOUT_MASK                       0x0000007f
#define CM7_i_AHBP_CAP_HTMATIDOUT_IDOUT_SHIFT                      0

#define CM7_i_AHBP_CAP_HTMCLAIMTAGSET_reserved0_MASK               0xfffffff0
#define CM7_i_AHBP_CAP_HTMCLAIMTAGSET_reserved0_SHIFT              4

#define CM7_i_AHBP_CAP_HTMCLAIMTAGSET_CLAIMTAGSET_MASK             0x0000000f
#define CM7_i_AHBP_CAP_HTMCLAIMTAGSET_CLAIMTAGSET_SHIFT            0

#define CM7_i_AHBP_CAP_HTMCLAIMTAGCLR_reserved0_MASK               0xfffffff0
#define CM7_i_AHBP_CAP_HTMCLAIMTAGCLR_reserved0_SHIFT              4

#define CM7_i_AHBP_CAP_HTMCLAIMTAGCLR_CLAIMTAGCLR_MASK             0x0000000f
#define CM7_i_AHBP_CAP_HTMCLAIMTAGCLR_CLAIMTAGCLR_SHIFT            0

#define CM7_i_AHBP_CAP_HTMLOCK_ACCESS_KEY_MASK                     0xffffffff
#define CM7_i_AHBP_CAP_HTMLOCK_ACCESS_KEY_SHIFT                    0

#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_reserved0_MASK               0xfffffff8
#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_reserved0_SHIFT              3

#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_STATUS_MASK                  0x00000002
#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_STATUS_SHIFT                 1

#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_IMP_MASK                     0x00000001
#define CM7_i_AHBP_CAP_HTMLOCK_STATUS_IMP_SHIFT                    0

#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_reserved0_MASK                0xffffff00
#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_reserved0_SHIFT               8

#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_SEC_NONINV_DBG_MASK           0x000000c0
#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_SEC_NONINV_DBG_SHIFT          6

#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_SEC_INV_DBG_MASK              0x00000030
#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_SEC_INV_DBG_SHIFT             4

#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_NONSEC_NONINV_DBG_MASK        0x0000000c
#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_NONSEC_NONINV_DBG_SHIFT       2

#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_NONSEC_INV_SEC_MASK           0x00000003
#define CM7_i_AHBP_CAP_HTMAUTHSTATUS_NONSEC_INV_SEC_SHIFT          0

#define CM7_i_AHBP_CAP_HTMDEVID_DEVID_MASK                         0xffffffff
#define CM7_i_AHBP_CAP_HTMDEVID_DEVID_SHIFT                        0

#define CM7_i_AHBP_CAP_HTMDEV_TYPE_reserved0_MASK                  0xffffff00
#define CM7_i_AHBP_CAP_HTMDEV_TYPE_reserved0_SHIFT                 8

#define CM7_i_AHBP_CAP_HTMDEV_TYPE_SUB_TYPE_MASK                   0x000000f0
#define CM7_i_AHBP_CAP_HTMDEV_TYPE_SUB_TYPE_SHIFT                  4

#define CM7_i_AHBP_CAP_HTMDEV_TYPE_MAIN_CLASS_MASK                 0x0000000f
#define CM7_i_AHBP_CAP_HTMDEV_TYPE_MAIN_CLASS_SHIFT                0

#define CM7_i_AHBP_CAP_HTMPERIPHID4_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMPERIPHID4_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMPERIPHID4_REG_4KB_COUNT_MASK             0x000000f0
#define CM7_i_AHBP_CAP_HTMPERIPHID4_REG_4KB_COUNT_SHIFT            4

#define CM7_i_AHBP_CAP_HTMPERIPHID4_JEP106_CONT_CODE_MASK          0x0000000f
#define CM7_i_AHBP_CAP_HTMPERIPHID4_JEP106_CONT_CODE_SHIFT         0

#define CM7_i_AHBP_CAP_HTMPERIPHID0_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMPERIPHID0_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMPERIPHID1_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMPERIPHID1_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMPERIPHID1_PART_NUM_11_8_MASK             0x0000000f
#define CM7_i_AHBP_CAP_HTMPERIPHID1_PART_NUM_11_8_SHIFT            0

#define CM7_i_AHBP_CAP_HTMPERIPHID2_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMPERIPHID2_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMPERIPHID2_REVISION_MASK                  0x000000f0
#define CM7_i_AHBP_CAP_HTMPERIPHID2_REVISION_SHIFT                 4

#define CM7_i_AHBP_CAP_HTMPERIPHID2_JEP106_INUSE_MASK              0x00000008
#define CM7_i_AHBP_CAP_HTMPERIPHID2_JEP106_INUSE_SHIFT             3

#define CM7_i_AHBP_CAP_HTMPERIPHID3_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMPERIPHID3_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMPERIPHID3_REVAND_MASK                    0x000000f0
#define CM7_i_AHBP_CAP_HTMPERIPHID3_REVAND_SHIFT                   4

#define CM7_i_AHBP_CAP_HTMPERIPHID3_CUSTOM_MASK                    0x0000000f
#define CM7_i_AHBP_CAP_HTMPERIPHID3_CUSTOM_SHIFT                   0

#define CM7_i_AHBP_CAP_HTMCOMPONID0_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMCOMPONID0_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMCOMPONID0_HTMPCOMPONID0_MASK             0x000000ff
#define CM7_i_AHBP_CAP_HTMCOMPONID0_HTMPCOMPONID0_SHIFT            0

#define CM7_i_AHBP_CAP_HTMCOMPONID1_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMCOMPONID1_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMCOMPONID1_HTMPCOMPONID1_MASK             0x000000ff
#define CM7_i_AHBP_CAP_HTMCOMPONID1_HTMPCOMPONID1_SHIFT            0

#define CM7_i_AHBP_CAP_HTMCOMPONID2_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMCOMPONID2_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMCOMPONID2_HTMPCOMPONID2_MASK             0x000000ff
#define CM7_i_AHBP_CAP_HTMCOMPONID2_HTMPCOMPONID2_SHIFT            0

#define CM7_i_AHBP_CAP_HTMCOMPONID3_reserved0_MASK                 0xffffff00
#define CM7_i_AHBP_CAP_HTMCOMPONID3_reserved0_SHIFT                8

#define CM7_i_AHBP_CAP_HTMCOMPONID3_HTMPCOMPONID3_MASK             0x000000ff
#define CM7_i_AHBP_CAP_HTMCOMPONID3_HTMPCOMPONID3_SHIFT            0

#define CM7_1_AHBP_CAP_HTMADDR_i_ARRAY_BASE                        0x80356080
#define CM7_1_AHBP_CAP_HTMADDR_i_ARRAY_START                       0
#define CM7_1_AHBP_CAP_HTMADDR_i_ARRAY_END                         15
#define CM7_1_AHBP_CAP_HTMADDR_i_ARRAY_ELEMENT_SIZE                32

#define CM7_1_AHBP_CAP_HTMADDRTYPE_i_ARRAY_BASE                    0x803560c0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_i_ARRAY_START                   0
#define CM7_1_AHBP_CAP_HTMADDRTYPE_i_ARRAY_END                     15
#define CM7_1_AHBP_CAP_HTMADDRTYPE_i_ARRAY_ELEMENT_SIZE            32

#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_BASE                   0x80356380
#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_START                  0
#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_END                    1
#define CM7_1_AHBP_CAP_HTMEXTOUTEVT_i_ARRAY_ELEMENT_SIZE           32

#define CM7_i_DTCM_CAP_HTMGLBCTRL_reserved0_MASK                   0xfffffffe
#define CM7_i_DTCM_CAP_HTMGLBCTRL_reserved0_SHIFT                  1

#define CM7_i_DTCM_CAP_HTMGLBCTRL_GLBEN_MASK                       0x00000001
#define CM7_i_DTCM_CAP_HTMGLBCTRL_GLBEN_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMSTATUS_reserved0_MASK                    0xffffe000
#define CM7_i_DTCM_CAP_HTMSTATUS_reserved0_SHIFT                   13

#define CM7_i_DTCM_CAP_HTMSTATUS_IDLE_MASK                         0x00001000
#define CM7_i_DTCM_CAP_HTMSTATUS_IDLE_SHIFT                        12

#define CM7_i_DTCM_CAP_HTMSTATUS_EXTDISABLE_MASK                   0x00000800
#define CM7_i_DTCM_CAP_HTMSTATUS_EXTDISABLE_SHIFT                  11

#define CM7_i_DTCM_CAP_HTMSTATUS_BUSENDIAN_MASK                    0x00000400
#define CM7_i_DTCM_CAP_HTMSTATUS_BUSENDIAN_SHIFT                   10

#define CM7_i_DTCM_CAP_HTMSTATUS_DBGPWRDN_MASK                     0x00000200
#define CM7_i_DTCM_CAP_HTMSTATUS_DBGPWRDN_SHIFT                    9

#define CM7_i_DTCM_CAP_HTMSTATUS_AHBPWRDN_MASK                     0x00000100
#define CM7_i_DTCM_CAP_HTMSTATUS_AHBPWRDN_SHIFT                    8

#define CM7_i_DTCM_CAP_HTMSTATUS_AHBRST_MASK                       0x00000080
#define CM7_i_DTCM_CAP_HTMSTATUS_AHBRST_SHIFT                      7

#define CM7_i_DTCM_CAP_HTMSTATUS_SYNCBYPASS_MASK                   0x00000040
#define CM7_i_DTCM_CAP_HTMSTATUS_SYNCBYPASS_SHIFT                  6

#define CM7_i_DTCM_CAP_HTMSTATUS_SPIDEN_MASK                       0x00000020
#define CM7_i_DTCM_CAP_HTMSTATUS_SPIDEN_SHIFT                      5

#define CM7_i_DTCM_CAP_HTMSTATUS_DBGEN_MASK                        0x00000010
#define CM7_i_DTCM_CAP_HTMSTATUS_DBGEN_SHIFT                       4

#define CM7_i_DTCM_CAP_HTMSTATUS_SPNIDEN_MASK                      0x00000008
#define CM7_i_DTCM_CAP_HTMSTATUS_SPNIDEN_SHIFT                     3

#define CM7_i_DTCM_CAP_HTMSTATUS_NIDEN_MASK                        0x00000004
#define CM7_i_DTCM_CAP_HTMSTATUS_NIDEN_SHIFT                       2

#define CM7_i_DTCM_CAP_HTMSTATUS_FIFOEMPTY_MASK                    0x00000002
#define CM7_i_DTCM_CAP_HTMSTATUS_FIFOEMPTY_SHIFT                   1

#define CM7_i_DTCM_CAP_HTMSTATUS_LOCKED_MASK                       0x00000001
#define CM7_i_DTCM_CAP_HTMSTATUS_LOCKED_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_V6SUPPORT_MASK               0x80000000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_V6SUPPORT_SHIFT              31

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_64BIT_MASK                   0x40000000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_64BIT_SHIFT                  30

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_ASIC_MASK                    0x3f000000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_ASIC_SHIFT                   24

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_EXTOUT_MASK                  0x00e00000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_EXTOUT_SHIFT                 21

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_EXTIN_MASK                   0x001c0000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_EXTIN_SHIFT                  18

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_SEQ_MASK                     0x00020000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_SEQ_SHIFT                    17

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_CNTR_MASK                    0x0001c000
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_CNTR_SHIFT                   14

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_HCTRL_MASK                   0x00003c00
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_HCTRL_SHIFT                  10

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_DCOMP_MASK                   0x000003e0
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_DCOMP_SHIFT                  5

#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_ACOMP_MASK                   0x0000001f
#define CM7_i_DTCM_CAP_HTMCFGCODE_CFG_ACOMP_SHIFT                  0

#define CM7_i_DTCM_CAP_HTMCFGCODE2_reserved0_MASK                  0xfffff800
#define CM7_i_DTCM_CAP_HTMCFGCODE2_reserved0_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMCFGCODE2_MAXBUS_MASK                     0x00000700
#define CM7_i_DTCM_CAP_HTMCFGCODE2_MAXBUS_SHIFT                    8

#define CM7_i_DTCM_CAP_HTMCFGCODE2_FIFOSIZE_MASK                   0x000000ff
#define CM7_i_DTCM_CAP_HTMCFGCODE2_FIFOSIZE_SHIFT                  0

#define CM7_i_DTCM_CAP_HTMCONTROL_reserved0_MASK                   0xfffffe00
#define CM7_i_DTCM_CAP_HTMCONTROL_reserved0_SHIFT                  9

#define CM7_i_DTCM_CAP_HTMCONTROL_TRIGMODE_MASK                    0x00000100
#define CM7_i_DTCM_CAP_HTMCONTROL_TRIGMODE_SHIFT                   8

#define CM7_i_DTCM_CAP_HTMCONTROL_SWTRACEDISABLE_MASK              0x00000080
#define CM7_i_DTCM_CAP_HTMCONTROL_SWTRACEDISABLE_SHIFT             7

#define CM7_i_DTCM_CAP_HTMCONTROL_EXTDISABLE_MASK                  0x00000040
#define CM7_i_DTCM_CAP_HTMCONTROL_EXTDISABLE_SHIFT                 6

#define CM7_i_DTCM_CAP_HTMCONTROL_reserved1_MASK                   0x00000020
#define CM7_i_DTCM_CAP_HTMCONTROL_reserved1_SHIFT                  5

#define CM7_i_DTCM_CAP_HTMCONTROL_CYCEN_MASK                       0x00000010
#define CM7_i_DTCM_CAP_HTMCONTROL_CYCEN_SHIFT                      4

#define CM7_i_DTCM_CAP_HTMCONTROL_DATAEN_MASK                      0x00000008
#define CM7_i_DTCM_CAP_HTMCONTROL_DATAEN_SHIFT                     3

#define CM7_i_DTCM_CAP_HTMCONTROL_AUXEN_MASK                       0x00000004
#define CM7_i_DTCM_CAP_HTMCONTROL_AUXEN_SHIFT                      2

#define CM7_i_DTCM_CAP_HTMCONTROL_ADDREN_MASK                      0x00000002
#define CM7_i_DTCM_CAP_HTMCONTROL_ADDREN_SHIFT                     1

#define CM7_i_DTCM_CAP_HTMCONTROL_PROG_MASK                        0x00000001
#define CM7_i_DTCM_CAP_HTMCONTROL_PROG_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMTRIGEVT_reserved0_MASK                   0xfffe0000
#define CM7_i_DTCM_CAP_HTMTRIGEVT_reserved0_SHIFT                  17

#define CM7_i_DTCM_CAP_HTMTRIGEVT_FUNC_MASK                        0x0001c000
#define CM7_i_DTCM_CAP_HTMTRIGEVT_FUNC_SHIFT                       14

#define CM7_i_DTCM_CAP_HTMTRIGEVT_RES_B_MASK                       0x00003f80
#define CM7_i_DTCM_CAP_HTMTRIGEVT_RES_B_SHIFT                      7

#define CM7_i_DTCM_CAP_HTMTRIGEVT_RES_A_MASK                       0x0000007f
#define CM7_i_DTCM_CAP_HTMTRIGEVT_RES_A_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMTRIGSTATE_reserved0_MASK                 0xfffffffe
#define CM7_i_DTCM_CAP_HTMTRIGSTATE_reserved0_SHIFT                1

#define CM7_i_DTCM_CAP_HTMTRIGSTATE_TRIGSTATE_MASK                 0x00000001
#define CM7_i_DTCM_CAP_HTMTRIGSTATE_TRIGSTATE_SHIFT                0

#define CM7_i_DTCM_CAP_HTMAUXSEL_reserved0_MASK                    0xfffffff0
#define CM7_i_DTCM_CAP_HTMAUXSEL_reserved0_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMAUXSEL_AUXSEL_MASK                       0x0000000f
#define CM7_i_DTCM_CAP_HTMAUXSEL_AUXSEL_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMSYNCRELOAD_reserved0_MASK                0xfffff000
#define CM7_i_DTCM_CAP_HTMSYNCRELOAD_reserved0_SHIFT               12

#define CM7_i_DTCM_CAP_HTMSYNCRELOAD_RELOAD_MASK                   0x00000fff
#define CM7_i_DTCM_CAP_HTMSYNCRELOAD_RELOAD_SHIFT                  0

#define CM7_i_DTCM_CAP_HTMSYNCCOUNT_reserved0_MASK                 0xfffff000
#define CM7_i_DTCM_CAP_HTMSYNCCOUNT_reserved0_SHIFT                12

#define CM7_i_DTCM_CAP_HTMSYNCCOUNT_SYNC_CVAL_MASK                 0x00000fff
#define CM7_i_DTCM_CAP_HTMSYNCCOUNT_SYNC_CVAL_SHIFT                0

#define CM7_i_DTCM_CAP_HTMFIFOLEVEL_reserved0_MASK                 0xffffffc0
#define CM7_i_DTCM_CAP_HTMFIFOLEVEL_reserved0_SHIFT                6

#define CM7_i_DTCM_CAP_HTMFIFOLEVEL_LEVEL_MASK                     0x0000003f
#define CM7_i_DTCM_CAP_HTMFIFOLEVEL_LEVEL_SHIFT                    0

#define CM7_i_DTCM_CAP_HTMSTARTSTOP_STOP_CMP_MASK                  0xffff0000
#define CM7_i_DTCM_CAP_HTMSTARTSTOP_STOP_CMP_SHIFT                 16

#define CM7_i_DTCM_CAP_HTMSTARTSTOP_START_CMP_MASK                 0x0000ffff
#define CM7_i_DTCM_CAP_HTMSTARTSTOP_START_CMP_SHIFT                0

#define CM7_i_DTCM_CAP_HTMCTRL2_EXCLUDE_MASK                       0xffff0000
#define CM7_i_DTCM_CAP_HTMCTRL2_EXCLUDE_SHIFT                      16

#define CM7_i_DTCM_CAP_HTMCTRL2_INCLUDE_MASK                       0x0000ffff
#define CM7_i_DTCM_CAP_HTMCTRL2_INCLUDE_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMTRACEEVT_reserved0_MASK                  0xfffe0000
#define CM7_i_DTCM_CAP_HTMTRACEEVT_reserved0_SHIFT                 17

#define CM7_i_DTCM_CAP_HTMTRACEEVT_FUNC_MASK                       0x0001c000
#define CM7_i_DTCM_CAP_HTMTRACEEVT_FUNC_SHIFT                      14

#define CM7_i_DTCM_CAP_HTMTRACEEVT_RES_B_MASK                      0x00003f80
#define CM7_i_DTCM_CAP_HTMTRACEEVT_RES_B_SHIFT                     7

#define CM7_i_DTCM_CAP_HTMTRACEEVT_RES_A_MASK                      0x0000007f
#define CM7_i_DTCM_CAP_HTMTRACEEVT_RES_A_SHIFT                     0

#define CM7_i_DTCM_CAP_HTMTRACECTRL_reserved0_MASK                 0xfffc0000
#define CM7_i_DTCM_CAP_HTMTRACECTRL_reserved0_SHIFT                18

#define CM7_i_DTCM_CAP_HTMTRACECTRL_EXC_ONLY_MASK                  0x00020000
#define CM7_i_DTCM_CAP_HTMTRACECTRL_EXC_ONLY_SHIFT                 17

#define CM7_i_DTCM_CAP_HTMTRACECTRL_SSENABLE_MASK                  0x00010000
#define CM7_i_DTCM_CAP_HTMTRACECTRL_SSENABLE_SHIFT                 16

#define CM7_i_DTCM_CAP_HTMTRACECTRL_RANGE_EXC_MASK                 0x0000ff00
#define CM7_i_DTCM_CAP_HTMTRACECTRL_RANGE_EXC_SHIFT                8

#define CM7_i_DTCM_CAP_HTMTRACECTRL_RANGE_INC_MASK                 0x000000ff
#define CM7_i_DTCM_CAP_HTMTRACECTRL_RANGE_INC_SHIFT                0

#define CM7_i_DTCM_CAP_HTMSSTATE_reserved0_MASK                    0xfffffffe
#define CM7_i_DTCM_CAP_HTMSSTATE_reserved0_SHIFT                   1

#define CM7_i_DTCM_CAP_HTMSSTATE_STATE_MASK                        0x00000001
#define CM7_i_DTCM_CAP_HTMSSTATE_STATE_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMASICCTRL_reserved0_MASK                  0xffffff00
#define CM7_i_DTCM_CAP_HTMASICCTRL_reserved0_SHIFT                 8

#define CM7_i_DTCM_CAP_HTMASICCTRL_ASICCTRL_MASK                   0x000000ff
#define CM7_i_DTCM_CAP_HTMASICCTRL_ASICCTRL_SHIFT                  0

#define CM7_i_DTCM_CAP_HTMBUSSELECT_reserved0_MASK                 0xfffffff8
#define CM7_i_DTCM_CAP_HTMBUSSELECT_reserved0_SHIFT                3

#define CM7_i_DTCM_CAP_HTMBUSSELECT_BUSSELECT_MASK                 0x00000007
#define CM7_i_DTCM_CAP_HTMBUSSELECT_BUSSELECT_SHIFT                0

#define CM7_0_DTCM_CAP_HTMADDR_i_ARRAY_BASE                        0x80357080
#define CM7_0_DTCM_CAP_HTMADDR_i_ARRAY_START                       0
#define CM7_0_DTCM_CAP_HTMADDR_i_ARRAY_END                         15
#define CM7_0_DTCM_CAP_HTMADDR_i_ARRAY_ELEMENT_SIZE                32

#define CM7_i_DTCM_CAP_HTMADDR_i_ADDR_MASK                         0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_i_ADDR_SHIFT                        0

#define CM7_i_DTCM_CAP_HTMADDR_10_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_10_ADDR_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMADDR_11_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_11_ADDR_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMADDR_12_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_12_ADDR_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMADDR_13_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_13_ADDR_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMADDR_14_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_14_ADDR_SHIFT                       0

#define CM7_i_DTCM_CAP_HTMADDR_15_ADDR_MASK                        0xffffffff
#define CM7_i_DTCM_CAP_HTMADDR_15_ADDR_SHIFT                       0

#define CM7_0_DTCM_CAP_HTMADDRTYPE_i_ARRAY_BASE                    0x803570c0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_i_ARRAY_START                   0
#define CM7_0_DTCM_CAP_HTMADDRTYPE_i_ARRAY_END                     15
#define CM7_0_DTCM_CAP_HTMADDRTYPE_i_ARRAY_ELEMENT_SIZE            32

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_reserved0_MASK                0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_reserved0_SHIFT               12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_STICKY_MASK                   0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_STICKY_SHIFT                  11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_HCTRL_SEL_MASK                0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_HCTRL_SEL_SHIFT               8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_HCTRL_EN_MASK                 0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_HCTRL_EN_SHIFT                7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_SIZE_MASK                     0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_SIZE_SHIFT                    4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_DIR_MASK                      0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_DIR_SHIFT                     2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_TYPE_MASK                     0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_i_TYPE_SHIFT                    0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_10_TYPE_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_11_TYPE_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_12_TYPE_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_13_TYPE_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_14_TYPE_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_reserved0_MASK               0xfffff000
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_reserved0_SHIFT              12

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_STICKY_MASK                  0x00000800
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_STICKY_SHIFT                 11

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_HCTRL_SEL_MASK               0x00000700
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_HCTRL_SEL_SHIFT              8

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_HCTRL_EN_MASK                0x00000080
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_HCTRL_EN_SHIFT               7

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_SIZE_MASK                    0x00000070
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_SIZE_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_DIR_MASK                     0x0000000c
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_DIR_SHIFT                    2

#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_TYPE_MASK                    0x00000003
#define CM7_i_DTCM_CAP_HTMADDRTYPE_15_TYPE_SHIFT                   0

#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_BASE                   0x80357380
#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_START                  0
#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_END                    1
#define CM7_0_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_ELEMENT_SIZE           32

#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_reserved0_MASK               0xfffe0000
#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_reserved0_SHIFT              17

#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_FUNC_MASK                    0x0001c000
#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_FUNC_SHIFT                   14

#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_RES_B_MASK                   0x00003f80
#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_RES_B_SHIFT                  7

#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_RES_A_MASK                   0x0000007f
#define CM7_i_DTCM_CAP_HTMEXTOUTEVT_i_RES_A_SHIFT                  0

#define CM7_i_DTCM_CAP_HTMATIDOUT_reserved0_MASK                   0xffffff80
#define CM7_i_DTCM_CAP_HTMATIDOUT_reserved0_SHIFT                  7

#define CM7_i_DTCM_CAP_HTMATIDOUT_IDOUT_MASK                       0x0000007f
#define CM7_i_DTCM_CAP_HTMATIDOUT_IDOUT_SHIFT                      0

#define CM7_i_DTCM_CAP_HTMCLAIMTAGSET_reserved0_MASK               0xfffffff0
#define CM7_i_DTCM_CAP_HTMCLAIMTAGSET_reserved0_SHIFT              4

#define CM7_i_DTCM_CAP_HTMCLAIMTAGSET_CLAIMTAGSET_MASK             0x0000000f
#define CM7_i_DTCM_CAP_HTMCLAIMTAGSET_CLAIMTAGSET_SHIFT            0

#define CM7_i_DTCM_CAP_HTMCLAIMTAGCLR_reserved0_MASK               0xfffffff0
#define CM7_i_DTCM_CAP_HTMCLAIMTAGCLR_reserved0_SHIFT              4

#define CM7_i_DTCM_CAP_HTMCLAIMTAGCLR_CLAIMTAGCLR_MASK             0x0000000f
#define CM7_i_DTCM_CAP_HTMCLAIMTAGCLR_CLAIMTAGCLR_SHIFT            0

#define CM7_i_DTCM_CAP_HTMLOCK_ACCESS_KEY_MASK                     0xffffffff
#define CM7_i_DTCM_CAP_HTMLOCK_ACCESS_KEY_SHIFT                    0

#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_reserved0_MASK               0xfffffff8
#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_reserved0_SHIFT              3

#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_STATUS_MASK                  0x00000002
#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_STATUS_SHIFT                 1

#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_IMP_MASK                     0x00000001
#define CM7_i_DTCM_CAP_HTMLOCK_STATUS_IMP_SHIFT                    0

#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_reserved0_MASK                0xffffff00
#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_reserved0_SHIFT               8

#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_SEC_NONINV_DBG_MASK           0x000000c0
#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_SEC_NONINV_DBG_SHIFT          6

#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_SEC_INV_DBG_MASK              0x00000030
#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_SEC_INV_DBG_SHIFT             4

#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_NONSEC_NONINV_DBG_MASK        0x0000000c
#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_NONSEC_NONINV_DBG_SHIFT       2

#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_NONSEC_INV_SEC_MASK           0x00000003
#define CM7_i_DTCM_CAP_HTMAUTHSTATUS_NONSEC_INV_SEC_SHIFT          0

#define CM7_i_DTCM_CAP_HTMDEVID_DEVID_MASK                         0xffffffff
#define CM7_i_DTCM_CAP_HTMDEVID_DEVID_SHIFT                        0

#define CM7_i_DTCM_CAP_HTMDEV_TYPE_reserved0_MASK                  0xffffff00
#define CM7_i_DTCM_CAP_HTMDEV_TYPE_reserved0_SHIFT                 8

#define CM7_i_DTCM_CAP_HTMDEV_TYPE_SUB_TYPE_MASK                   0x000000f0
#define CM7_i_DTCM_CAP_HTMDEV_TYPE_SUB_TYPE_SHIFT                  4

#define CM7_i_DTCM_CAP_HTMDEV_TYPE_MAIN_CLASS_MASK                 0x0000000f
#define CM7_i_DTCM_CAP_HTMDEV_TYPE_MAIN_CLASS_SHIFT                0

#define CM7_i_DTCM_CAP_HTMPERIPHID4_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMPERIPHID4_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMPERIPHID4_REG_4KB_COUNT_MASK             0x000000f0
#define CM7_i_DTCM_CAP_HTMPERIPHID4_REG_4KB_COUNT_SHIFT            4

#define CM7_i_DTCM_CAP_HTMPERIPHID4_JEP106_CONT_CODE_MASK          0x0000000f
#define CM7_i_DTCM_CAP_HTMPERIPHID4_JEP106_CONT_CODE_SHIFT         0

#define CM7_i_DTCM_CAP_HTMPERIPHID0_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMPERIPHID0_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMPERIPHID1_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMPERIPHID1_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMPERIPHID1_PART_NUM_11_8_MASK             0x0000000f
#define CM7_i_DTCM_CAP_HTMPERIPHID1_PART_NUM_11_8_SHIFT            0

#define CM7_i_DTCM_CAP_HTMPERIPHID2_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMPERIPHID2_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMPERIPHID2_REVISION_MASK                  0x000000f0
#define CM7_i_DTCM_CAP_HTMPERIPHID2_REVISION_SHIFT                 4

#define CM7_i_DTCM_CAP_HTMPERIPHID2_JEP106_INUSE_MASK              0x00000008
#define CM7_i_DTCM_CAP_HTMPERIPHID2_JEP106_INUSE_SHIFT             3

#define CM7_i_DTCM_CAP_HTMPERIPHID3_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMPERIPHID3_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMPERIPHID3_REVAND_MASK                    0x000000f0
#define CM7_i_DTCM_CAP_HTMPERIPHID3_REVAND_SHIFT                   4

#define CM7_i_DTCM_CAP_HTMPERIPHID3_CUSTOM_MASK                    0x0000000f
#define CM7_i_DTCM_CAP_HTMPERIPHID3_CUSTOM_SHIFT                   0

#define CM7_i_DTCM_CAP_HTMCOMPONID0_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMCOMPONID0_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMCOMPONID0_HTMPCOMPONID0_MASK             0x000000ff
#define CM7_i_DTCM_CAP_HTMCOMPONID0_HTMPCOMPONID0_SHIFT            0

#define CM7_i_DTCM_CAP_HTMCOMPONID1_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMCOMPONID1_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMCOMPONID1_HTMPCOMPONID1_MASK             0x000000ff
#define CM7_i_DTCM_CAP_HTMCOMPONID1_HTMPCOMPONID1_SHIFT            0

#define CM7_i_DTCM_CAP_HTMCOMPONID2_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMCOMPONID2_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMCOMPONID2_HTMPCOMPONID2_MASK             0x000000ff
#define CM7_i_DTCM_CAP_HTMCOMPONID2_HTMPCOMPONID2_SHIFT            0

#define CM7_i_DTCM_CAP_HTMCOMPONID3_reserved0_MASK                 0xffffff00
#define CM7_i_DTCM_CAP_HTMCOMPONID3_reserved0_SHIFT                8

#define CM7_i_DTCM_CAP_HTMCOMPONID3_HTMPCOMPONID3_MASK             0x000000ff
#define CM7_i_DTCM_CAP_HTMCOMPONID3_HTMPCOMPONID3_SHIFT            0

#define CM7_1_DTCM_CAP_HTMADDR_i_ARRAY_BASE                        0x80358080
#define CM7_1_DTCM_CAP_HTMADDR_i_ARRAY_START                       0
#define CM7_1_DTCM_CAP_HTMADDR_i_ARRAY_END                         15
#define CM7_1_DTCM_CAP_HTMADDR_i_ARRAY_ELEMENT_SIZE                32

#define CM7_1_DTCM_CAP_HTMADDRTYPE_i_ARRAY_BASE                    0x803580c0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_i_ARRAY_START                   0
#define CM7_1_DTCM_CAP_HTMADDRTYPE_i_ARRAY_END                     15
#define CM7_1_DTCM_CAP_HTMADDRTYPE_i_ARRAY_ELEMENT_SIZE            32

#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_BASE                   0x80358380
#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_START                  0
#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_END                    1
#define CM7_1_DTCM_CAP_HTMEXTOUTEVT_i_ARRAY_ELEMENT_SIZE           32

#endif // __6766_CROSSBOW_RDB_H__

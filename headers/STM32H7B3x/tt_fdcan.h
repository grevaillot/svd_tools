#pragma once 

/* --- TT_FDCAN: FDCAN1 --------------------------------------------- */

/** @defgroup tt_fdcan_registers FDCAN1 Register
@{*/

/** TT_FDCAN_FDCAN_CREL FDCAN Core Release Register **/
#define TT_FDCAN_FDCAN_CREL			MMIO32(TT_FDCAN_BASE + 0x00)
/** TT_FDCAN_FDCAN_ENDN FDCAN Core Release Register **/
#define TT_FDCAN_FDCAN_ENDN			MMIO32(TT_FDCAN_BASE + 0x04)
/** TT_FDCAN_FDCAN_DBTP FDCAN Data Bit Timing and Prescaler Register **/
#define TT_FDCAN_FDCAN_DBTP			MMIO32(TT_FDCAN_BASE + 0x0c)
/** TT_FDCAN_FDCAN_TEST FDCAN Test Register **/
#define TT_FDCAN_FDCAN_TEST			MMIO32(TT_FDCAN_BASE + 0x10)
/** TT_FDCAN_FDCAN_RWD FDCAN RAM Watchdog Register **/
#define TT_FDCAN_FDCAN_RWD			MMIO32(TT_FDCAN_BASE + 0x14)
/** TT_FDCAN_FDCAN_CCCR FDCAN CC Control Register **/
#define TT_FDCAN_FDCAN_CCCR			MMIO32(TT_FDCAN_BASE + 0x18)
/** TT_FDCAN_FDCAN_NBTP FDCAN Nominal Bit Timing and Prescaler Register **/
#define TT_FDCAN_FDCAN_NBTP			MMIO32(TT_FDCAN_BASE + 0x1c)
/** TT_FDCAN_FDCAN_TSCC FDCAN Timestamp Counter Configuration Register **/
#define TT_FDCAN_FDCAN_TSCC			MMIO32(TT_FDCAN_BASE + 0x20)
/** TT_FDCAN_FDCAN_TSCV FDCAN Timestamp Counter Value Register **/
#define TT_FDCAN_FDCAN_TSCV			MMIO32(TT_FDCAN_BASE + 0x24)
/** TT_FDCAN_FDCAN_TOCC FDCAN Timeout Counter Configuration Register **/
#define TT_FDCAN_FDCAN_TOCC			MMIO32(TT_FDCAN_BASE + 0x28)
/** TT_FDCAN_FDCAN_TOCV FDCAN Timeout Counter Value Register **/
#define TT_FDCAN_FDCAN_TOCV			MMIO32(TT_FDCAN_BASE + 0x2c)
/** TT_FDCAN_FDCAN_ECR FDCAN Error Counter Register **/
#define TT_FDCAN_FDCAN_ECR			MMIO32(TT_FDCAN_BASE + 0x40)
/** TT_FDCAN_FDCAN_PSR FDCAN Protocol Status Register **/
#define TT_FDCAN_FDCAN_PSR			MMIO32(TT_FDCAN_BASE + 0x44)
/** TT_FDCAN_FDCAN_TDCR FDCAN Transmitter Delay Compensation Register **/
#define TT_FDCAN_FDCAN_TDCR			MMIO32(TT_FDCAN_BASE + 0x48)
/** TT_FDCAN_FDCAN_IR FDCAN Interrupt Register **/
#define TT_FDCAN_FDCAN_IR			MMIO32(TT_FDCAN_BASE + 0x50)
/** TT_FDCAN_FDCAN_IE FDCAN Interrupt Enable Register **/
#define TT_FDCAN_FDCAN_IE			MMIO32(TT_FDCAN_BASE + 0x54)
/** TT_FDCAN_FDCAN_ILS FDCAN Interrupt Line Select Register **/
#define TT_FDCAN_FDCAN_ILS			MMIO32(TT_FDCAN_BASE + 0x58)
/** TT_FDCAN_FDCAN_ILE FDCAN Interrupt Line Enable Register **/
#define TT_FDCAN_FDCAN_ILE			MMIO32(TT_FDCAN_BASE + 0x5c)
/** TT_FDCAN_FDCAN_GFC FDCAN Global Filter Configuration Register **/
#define TT_FDCAN_FDCAN_GFC			MMIO32(TT_FDCAN_BASE + 0x80)
/** TT_FDCAN_FDCAN_SIDFC FDCAN Standard ID Filter Configuration Register **/
#define TT_FDCAN_FDCAN_SIDFC			MMIO32(TT_FDCAN_BASE + 0x84)
/** TT_FDCAN_FDCAN_XIDFC FDCAN Extended ID Filter Configuration Register **/
#define TT_FDCAN_FDCAN_XIDFC			MMIO32(TT_FDCAN_BASE + 0x88)
/** TT_FDCAN_FDCAN_XIDAM FDCAN Extended ID and Mask Register **/
#define TT_FDCAN_FDCAN_XIDAM			MMIO32(TT_FDCAN_BASE + 0x90)
/** TT_FDCAN_FDCAN_HPMS FDCAN High Priority Message Status Register **/
#define TT_FDCAN_FDCAN_HPMS			MMIO32(TT_FDCAN_BASE + 0x94)
/** TT_FDCAN_FDCAN_NDAT1 FDCAN New Data 1 Register **/
#define TT_FDCAN_FDCAN_NDAT1			MMIO32(TT_FDCAN_BASE + 0x98)
/** TT_FDCAN_FDCAN_NDAT2 FDCAN New Data 2 Register **/
#define TT_FDCAN_FDCAN_NDAT2			MMIO32(TT_FDCAN_BASE + 0x9c)
/** TT_FDCAN_FDCAN_RXF0C FDCAN Rx FIFO 0 Configuration Register **/
#define TT_FDCAN_FDCAN_RXF0C			MMIO32(TT_FDCAN_BASE + 0xa0)
/** TT_FDCAN_FDCAN_RXF0S FDCAN Rx FIFO 0 Status Register **/
#define TT_FDCAN_FDCAN_RXF0S			MMIO32(TT_FDCAN_BASE + 0xa4)
/** TT_FDCAN_FDCAN_RXF0A CAN Rx FIFO 0 Acknowledge Register **/
#define TT_FDCAN_FDCAN_RXF0A			MMIO32(TT_FDCAN_BASE + 0xa8)
/** TT_FDCAN_FDCAN_RXBC FDCAN Rx Buffer Configuration Register **/
#define TT_FDCAN_FDCAN_RXBC			MMIO32(TT_FDCAN_BASE + 0xac)
/** TT_FDCAN_FDCAN_RXF1C FDCAN Rx FIFO 1 Configuration Register **/
#define TT_FDCAN_FDCAN_RXF1C			MMIO32(TT_FDCAN_BASE + 0xb0)
/** TT_FDCAN_FDCAN_RXF1S FDCAN Rx FIFO 1 Status Register **/
#define TT_FDCAN_FDCAN_RXF1S			MMIO32(TT_FDCAN_BASE + 0xb4)
/** TT_FDCAN_FDCAN_RXF1A FDCAN Rx FIFO 1 Acknowledge Register **/
#define TT_FDCAN_FDCAN_RXF1A			MMIO32(TT_FDCAN_BASE + 0xb8)
/** TT_FDCAN_FDCAN_RXESC FDCAN Rx Buffer Element Size Configuration Register **/
#define TT_FDCAN_FDCAN_RXESC			MMIO32(TT_FDCAN_BASE + 0xbc)
/** TT_FDCAN_FDCAN_TXBC FDCAN Tx Buffer Configuration Register **/
#define TT_FDCAN_FDCAN_TXBC			MMIO32(TT_FDCAN_BASE + 0xc0)
/** TT_FDCAN_FDCAN_TXFQS FDCAN Tx FIFO/Queue Status Register **/
#define TT_FDCAN_FDCAN_TXFQS			MMIO32(TT_FDCAN_BASE + 0xc4)
/** TT_FDCAN_FDCAN_TXESC FDCAN Tx Buffer Element Size Configuration Register **/
#define TT_FDCAN_FDCAN_TXESC			MMIO32(TT_FDCAN_BASE + 0xc8)
/** TT_FDCAN_FDCAN_TXBRP FDCAN Tx Buffer Request Pending Register **/
#define TT_FDCAN_FDCAN_TXBRP			MMIO32(TT_FDCAN_BASE + 0xcc)
/** TT_FDCAN_FDCAN_TXBAR FDCAN Tx Buffer Add Request Register **/
#define TT_FDCAN_FDCAN_TXBAR			MMIO32(TT_FDCAN_BASE + 0xd0)
/** TT_FDCAN_FDCAN_TXBCR FDCAN Tx Buffer Cancellation Request Register **/
#define TT_FDCAN_FDCAN_TXBCR			MMIO32(TT_FDCAN_BASE + 0xd4)
/** TT_FDCAN_FDCAN_TXBTO FDCAN Tx Buffer Transmission Occurred Register **/
#define TT_FDCAN_FDCAN_TXBTO			MMIO32(TT_FDCAN_BASE + 0xd8)
/** TT_FDCAN_FDCAN_TXBCF FDCAN Tx Buffer Cancellation Finished Register **/
#define TT_FDCAN_FDCAN_TXBCF			MMIO32(TT_FDCAN_BASE + 0xdc)
/** TT_FDCAN_FDCAN_TXBTIE FDCAN Tx Buffer Transmission Interrupt Enable Register **/
#define TT_FDCAN_FDCAN_TXBTIE			MMIO32(TT_FDCAN_BASE + 0xe0)
/** TT_FDCAN_FDCAN_TXBCIE FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register **/
#define TT_FDCAN_FDCAN_TXBCIE			MMIO32(TT_FDCAN_BASE + 0xe4)
/** TT_FDCAN_FDCAN_TXEFC FDCAN Tx Event FIFO Configuration Register **/
#define TT_FDCAN_FDCAN_TXEFC			MMIO32(TT_FDCAN_BASE + 0xf0)
/** TT_FDCAN_FDCAN_TXEFS FDCAN Tx Event FIFO Status Register **/
#define TT_FDCAN_FDCAN_TXEFS			MMIO32(TT_FDCAN_BASE + 0xf4)
/** TT_FDCAN_FDCAN_TXEFA FDCAN Tx Event FIFO Acknowledge Register **/
#define TT_FDCAN_FDCAN_TXEFA			MMIO32(TT_FDCAN_BASE + 0xf8)
/** TT_FDCAN_FDCAN_TTTMC FDCAN TT Trigger Memory Configuration Register **/
#define TT_FDCAN_FDCAN_TTTMC			MMIO32(TT_FDCAN_BASE + 0x100)
/** TT_FDCAN_FDCAN_TTTS FDCAN TT Trigger Select Register **/
#define TT_FDCAN_FDCAN_TTTS			MMIO32(TT_FDCAN_BASE + 0x100)
/** TT_FDCAN_FDCAN_TTRMC FDCAN TT Reference Message Configuration Register **/
#define TT_FDCAN_FDCAN_TTRMC			MMIO32(TT_FDCAN_BASE + 0x104)
/** TT_FDCAN_FDCAN_TTOCF FDCAN TT Operation Configuration Register **/
#define TT_FDCAN_FDCAN_TTOCF			MMIO32(TT_FDCAN_BASE + 0x108)
/** TT_FDCAN_FDCAN_TTMLM FDCAN TT Matrix Limits Register **/
#define TT_FDCAN_FDCAN_TTMLM			MMIO32(TT_FDCAN_BASE + 0x10c)
/** TT_FDCAN_FDCAN_TURCF FDCAN TUR Configuration Register **/
#define TT_FDCAN_FDCAN_TURCF			MMIO32(TT_FDCAN_BASE + 0x110)
/** TT_FDCAN_FDCAN_TTOCN FDCAN TT Operation Control Register **/
#define TT_FDCAN_FDCAN_TTOCN			MMIO32(TT_FDCAN_BASE + 0x114)
/** TT_FDCAN_CAN_TTGTP FDCAN TT Global Time Preset Register **/
#define TT_FDCAN_CAN_TTGTP			MMIO32(TT_FDCAN_BASE + 0x118)
/** TT_FDCAN_FDCAN_TTTMK FDCAN TT Time Mark Register **/
#define TT_FDCAN_FDCAN_TTTMK			MMIO32(TT_FDCAN_BASE + 0x11c)
/** TT_FDCAN_FDCAN_TTIR FDCAN TT Interrupt Register **/
#define TT_FDCAN_FDCAN_TTIR			MMIO32(TT_FDCAN_BASE + 0x120)
/** TT_FDCAN_FDCAN_TTIE FDCAN TT Interrupt Enable Register **/
#define TT_FDCAN_FDCAN_TTIE			MMIO32(TT_FDCAN_BASE + 0x124)
/** TT_FDCAN_FDCAN_TTILS FDCAN TT Interrupt Line Select Register **/
#define TT_FDCAN_FDCAN_TTILS			MMIO32(TT_FDCAN_BASE + 0x128)
/** TT_FDCAN_FDCAN_TTOST FDCAN TT Operation Status Register **/
#define TT_FDCAN_FDCAN_TTOST			MMIO32(TT_FDCAN_BASE + 0x12c)
/** TT_FDCAN_FDCAN_TURNA FDCAN TUR Numerator Actual Register **/
#define TT_FDCAN_FDCAN_TURNA			MMIO32(TT_FDCAN_BASE + 0x130)
/** TT_FDCAN_FDCAN_TTLGT FDCAN TT Local and Global Time Register **/
#define TT_FDCAN_FDCAN_TTLGT			MMIO32(TT_FDCAN_BASE + 0x134)
/** TT_FDCAN_FDCAN_TTCTC FDCAN TT Cycle Time and Count Register **/
#define TT_FDCAN_FDCAN_TTCTC			MMIO32(TT_FDCAN_BASE + 0x138)
/** TT_FDCAN_FDCAN_TTCPT FDCAN TT Capture Time Register **/
#define TT_FDCAN_FDCAN_TTCPT			MMIO32(TT_FDCAN_BASE + 0x13c)
/** TT_FDCAN_FDCAN_TTCSM FDCAN TT Cycle Sync Mark Register **/
#define TT_FDCAN_FDCAN_TTCSM			MMIO32(TT_FDCAN_BASE + 0x140)

/**@}*/


/** @defgroup tt_fdcan_fdcan_crel FDCANCREL FDCAN Core Release Register
@{*/


#define TT_FDCAN_FDCAN_CREL_REL_SHIFT		28
#define TT_FDCAN_FDCAN_CREL_REL_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_crel_rel REL Core release
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_CREL_STEP_SHIFT		24
#define TT_FDCAN_FDCAN_CREL_STEP_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_crel_step STEP Step of Core release
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_CREL_SUBSTEP_SHIFT		20
#define TT_FDCAN_FDCAN_CREL_SUBSTEP_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_crel_substep SUBSTEP Sub-step of Core release
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_CREL_YEAR_SHIFT		16
#define TT_FDCAN_FDCAN_CREL_YEAR_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_crel_year YEAR Timestamp Year
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_CREL_MON_SHIFT		8
#define TT_FDCAN_FDCAN_CREL_MON_MASK		0xff
/** @defgroup tt_fdcan_fdcan_crel_mon MON Timestamp Month
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_CREL_DAY_SHIFT		0
#define TT_FDCAN_FDCAN_CREL_DAY_MASK		0xff
/** @defgroup tt_fdcan_fdcan_crel_day DAY Timestamp Day
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_endn FDCANENDN FDCAN Core Release Register
@{*/


#define TT_FDCAN_FDCAN_ENDN_ETV_SHIFT		0
#define TT_FDCAN_FDCAN_ENDN_ETV_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_endn_etv ETV Endiannes Test Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_dbtp FDCANDBTP FDCAN Data Bit Timing and Prescaler Register
@{*/

/** TT_FDCAN_FDCAN_DBTP_TDC Transceiver Delay Compensation **/
#define TT_FDCAN_FDCAN_DBTP_TDC		(1 << 23)

#define TT_FDCAN_FDCAN_DBTP_DBRP_SHIFT		16
#define TT_FDCAN_FDCAN_DBTP_DBRP_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_dbtp_dbrp DBRP Data BIt Rate Prescaler
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_DBTP_DTSEG1_SHIFT		8
#define TT_FDCAN_FDCAN_DBTP_DTSEG1_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_dbtp_dtseg1 DTSEG1 Data time segment after sample point
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_DBTP_DTSEG2_SHIFT		4
#define TT_FDCAN_FDCAN_DBTP_DTSEG2_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_dbtp_dtseg2 DTSEG2 Data time segment after sample point
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_DBTP_DSJW_SHIFT		0
#define TT_FDCAN_FDCAN_DBTP_DSJW_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_dbtp_dsjw DSJW Synchronization Jump Width
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_test FDCANTEST FDCAN Test Register
@{*/

/** TT_FDCAN_FDCAN_TEST_RX Control of Transmit Pin **/
#define TT_FDCAN_FDCAN_TEST_RX		(1 << 7)

#define TT_FDCAN_FDCAN_TEST_TX_SHIFT		5
#define TT_FDCAN_FDCAN_TEST_TX_MASK		0x03
/** @defgroup tt_fdcan_fdcan_test_tx TX Loop Back mode
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TEST_LBCK Loop Back mode **/
#define TT_FDCAN_FDCAN_TEST_LBCK		(1 << 4)

/**@}*/

/** @defgroup tt_fdcan_fdcan_rwd FDCANRWD FDCAN RAM Watchdog Register
@{*/


#define TT_FDCAN_FDCAN_RWD_WDV_SHIFT		8
#define TT_FDCAN_FDCAN_RWD_WDV_MASK		0xff
/** @defgroup tt_fdcan_fdcan_rwd_wdv WDV Watchdog value
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RWD_WDC_SHIFT		0
#define TT_FDCAN_FDCAN_RWD_WDC_MASK		0xff
/** @defgroup tt_fdcan_fdcan_rwd_wdc WDC Watchdog configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_cccr FDCANCCCR FDCAN CC Control Register
@{*/

/** TT_FDCAN_FDCAN_CCCR_NISO Non ISO Operation **/
#define TT_FDCAN_FDCAN_CCCR_NISO		(1 << 15)
/** TT_FDCAN_FDCAN_CCCR_TXP TXP **/
#define TT_FDCAN_FDCAN_CCCR_TXP		(1 << 14)
/** TT_FDCAN_FDCAN_CCCR_EFBI Edge Filtering during Bus Integration **/
#define TT_FDCAN_FDCAN_CCCR_EFBI		(1 << 13)
/** TT_FDCAN_FDCAN_CCCR_PXHD Protocol Exception Handling Disable **/
#define TT_FDCAN_FDCAN_CCCR_PXHD		(1 << 12)
/** TT_FDCAN_FDCAN_CCCR_BSE FDCAN Bit Rate Switching **/
#define TT_FDCAN_FDCAN_CCCR_BSE		(1 << 9)
/** TT_FDCAN_FDCAN_CCCR_FDOE FD Operation Enable **/
#define TT_FDCAN_FDCAN_CCCR_FDOE		(1 << 8)
/** TT_FDCAN_FDCAN_CCCR_TEST Test Mode Enable **/
#define TT_FDCAN_FDCAN_CCCR_TEST		(1 << 7)
/** TT_FDCAN_FDCAN_CCCR_DAR Disable Automatic Retransmission **/
#define TT_FDCAN_FDCAN_CCCR_DAR		(1 << 6)
/** TT_FDCAN_FDCAN_CCCR_MON Bus Monitoring Mode **/
#define TT_FDCAN_FDCAN_CCCR_MON		(1 << 5)
/** TT_FDCAN_FDCAN_CCCR_CSR Clock Stop Request **/
#define TT_FDCAN_FDCAN_CCCR_CSR		(1 << 4)
/** TT_FDCAN_FDCAN_CCCR_CSA Clock Stop Acknowledge **/
#define TT_FDCAN_FDCAN_CCCR_CSA		(1 << 3)
/** TT_FDCAN_FDCAN_CCCR_ASM ASM Restricted Operation Mode **/
#define TT_FDCAN_FDCAN_CCCR_ASM		(1 << 2)
/** TT_FDCAN_FDCAN_CCCR_CCE Configuration Change Enable **/
#define TT_FDCAN_FDCAN_CCCR_CCE		(1 << 1)
/** TT_FDCAN_FDCAN_CCCR_INIT Initialization **/
#define TT_FDCAN_FDCAN_CCCR_INIT		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_nbtp FDCANNBTP FDCAN Nominal Bit Timing and Prescaler Register
@{*/


#define TT_FDCAN_FDCAN_NBTP_NSJW_SHIFT		25
#define TT_FDCAN_FDCAN_NBTP_NSJW_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_nbtp_nsjw NSJW NSJW: Nominal (Re)Synchronization Jump Width
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_NBTP_NBRP_SHIFT		16
#define TT_FDCAN_FDCAN_NBTP_NBRP_MASK		0x1ff
/** @defgroup tt_fdcan_fdcan_nbtp_nbrp NBRP Bit Rate Prescaler
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_NBTP_NTSEG1_SHIFT		8
#define TT_FDCAN_FDCAN_NBTP_NTSEG1_MASK		0xff
/** @defgroup tt_fdcan_fdcan_nbtp_ntseg1 NTSEG1 Nominal Time segment before sample point
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_NBTP_TSEG2_SHIFT		0
#define TT_FDCAN_FDCAN_NBTP_TSEG2_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_nbtp_tseg2 TSEG2 Nominal Time segment after sample point
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tscc FDCANTSCC FDCAN Timestamp Counter Configuration Register
@{*/


#define TT_FDCAN_FDCAN_TSCC_TCP_SHIFT		16
#define TT_FDCAN_FDCAN_TSCC_TCP_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_tscc_tcp TCP Timestamp Counter Prescaler
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TSCC_TSS_SHIFT		0
#define TT_FDCAN_FDCAN_TSCC_TSS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_tscc_tss TSS Timestamp Select
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tscv FDCANTSCV FDCAN Timestamp Counter Value Register
@{*/


#define TT_FDCAN_FDCAN_TSCV_TSC_SHIFT		0
#define TT_FDCAN_FDCAN_TSCV_TSC_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_tscv_tsc TSC Timestamp Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tocc FDCANTOCC FDCAN Timeout Counter Configuration Register
@{*/


#define TT_FDCAN_FDCAN_TOCC_TOP_SHIFT		16
#define TT_FDCAN_FDCAN_TOCC_TOP_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_tocc_top TOP Timeout Period
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TOCC_TOS_SHIFT		1
#define TT_FDCAN_FDCAN_TOCC_TOS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_tocc_tos TOS Timeout Select
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TOCC_ETOC Enable Timeout Counter **/
#define TT_FDCAN_FDCAN_TOCC_ETOC		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_tocv FDCANTOCV FDCAN Timeout Counter Value Register
@{*/


#define TT_FDCAN_FDCAN_TOCV_TOC_SHIFT		0
#define TT_FDCAN_FDCAN_TOCV_TOC_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_tocv_toc TOC Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ecr FDCANECR FDCAN Error Counter Register
@{*/


#define TT_FDCAN_FDCAN_ECR_CEL_SHIFT		16
#define TT_FDCAN_FDCAN_ECR_CEL_MASK		0xff
/** @defgroup tt_fdcan_fdcan_ecr_cel CEL AN Error Logging
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_ECR_RP Receive Error Passive **/
#define TT_FDCAN_FDCAN_ECR_RP		(1 << 15)

#define TT_FDCAN_FDCAN_ECR_TREC_SHIFT		8
#define TT_FDCAN_FDCAN_ECR_TREC_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_ecr_trec TREC Receive Error Counter
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_ECR_TEC_SHIFT		0
#define TT_FDCAN_FDCAN_ECR_TEC_MASK		0xff
/** @defgroup tt_fdcan_fdcan_ecr_tec TEC Transmit Error Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_psr FDCANPSR FDCAN Protocol Status Register
@{*/


#define TT_FDCAN_FDCAN_PSR_TDCV_SHIFT		16
#define TT_FDCAN_FDCAN_PSR_TDCV_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_psr_tdcv TDCV Transmitter Delay Compensation Value
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_PSR_PXE Protocol Exception Event **/
#define TT_FDCAN_FDCAN_PSR_PXE		(1 << 14)
/** TT_FDCAN_FDCAN_PSR_REDL Received FDCAN Message **/
#define TT_FDCAN_FDCAN_PSR_REDL		(1 << 13)
/** TT_FDCAN_FDCAN_PSR_RBRS BRS flag of last received FDCAN Message **/
#define TT_FDCAN_FDCAN_PSR_RBRS		(1 << 12)
/** TT_FDCAN_FDCAN_PSR_RESI ESI flag of last received FDCAN Message **/
#define TT_FDCAN_FDCAN_PSR_RESI		(1 << 11)

#define TT_FDCAN_FDCAN_PSR_DLEC_SHIFT		8
#define TT_FDCAN_FDCAN_PSR_DLEC_MASK		0x07
/** @defgroup tt_fdcan_fdcan_psr_dlec DLEC Data Last Error Code
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_PSR_BO Bus_Off Status **/
#define TT_FDCAN_FDCAN_PSR_BO		(1 << 7)
/** TT_FDCAN_FDCAN_PSR_EW Warning Status **/
#define TT_FDCAN_FDCAN_PSR_EW		(1 << 6)
/** TT_FDCAN_FDCAN_PSR_EP Error Passive **/
#define TT_FDCAN_FDCAN_PSR_EP		(1 << 5)

#define TT_FDCAN_FDCAN_PSR_ACT_SHIFT		3
#define TT_FDCAN_FDCAN_PSR_ACT_MASK		0x03
/** @defgroup tt_fdcan_fdcan_psr_act ACT Activity
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_PSR_LEC_SHIFT		0
#define TT_FDCAN_FDCAN_PSR_LEC_MASK		0x07
/** @defgroup tt_fdcan_fdcan_psr_lec LEC Last Error Code
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tdcr FDCANTDCR FDCAN Transmitter Delay Compensation Register
@{*/


#define TT_FDCAN_FDCAN_TDCR_TDCO_SHIFT		8
#define TT_FDCAN_FDCAN_TDCR_TDCO_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_tdcr_tdco TDCO Transmitter Delay Compensation Offset
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TDCR_TDCF_SHIFT		0
#define TT_FDCAN_FDCAN_TDCR_TDCF_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_tdcr_tdcf TDCF Transmitter Delay Compensation Filter Window Length
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ir FDCANIR FDCAN Interrupt Register
@{*/

/** TT_FDCAN_FDCAN_IR_ARA Access to Reserved Address **/
#define TT_FDCAN_FDCAN_IR_ARA		(1 << 29)
/** TT_FDCAN_FDCAN_IR_PED Protocol Error in Data Phase (Data Bit Time is used) **/
#define TT_FDCAN_FDCAN_IR_PED		(1 << 28)
/** TT_FDCAN_FDCAN_IR_PEA Protocol Error in Arbitration Phase (Nominal Bit Time is used) **/
#define TT_FDCAN_FDCAN_IR_PEA		(1 << 27)
/** TT_FDCAN_FDCAN_IR_WDI Watchdog Interrupt **/
#define TT_FDCAN_FDCAN_IR_WDI		(1 << 26)
/** TT_FDCAN_FDCAN_IR_BO Bus_Off Status **/
#define TT_FDCAN_FDCAN_IR_BO		(1 << 25)
/** TT_FDCAN_FDCAN_IR_EW Warning Status **/
#define TT_FDCAN_FDCAN_IR_EW		(1 << 24)
/** TT_FDCAN_FDCAN_IR_EP Error Passive **/
#define TT_FDCAN_FDCAN_IR_EP		(1 << 23)
/** TT_FDCAN_FDCAN_IR_ELO Error Logging Overflow **/
#define TT_FDCAN_FDCAN_IR_ELO		(1 << 22)
/** TT_FDCAN_FDCAN_IR_DRX Message stored to Dedicated Rx Buffer **/
#define TT_FDCAN_FDCAN_IR_DRX		(1 << 19)
/** TT_FDCAN_FDCAN_IR_TOO Timeout Occurred **/
#define TT_FDCAN_FDCAN_IR_TOO		(1 << 18)
/** TT_FDCAN_FDCAN_IR_MRAF Message RAM Access Failure **/
#define TT_FDCAN_FDCAN_IR_MRAF		(1 << 17)
/** TT_FDCAN_FDCAN_IR_TSW Timestamp Wraparound **/
#define TT_FDCAN_FDCAN_IR_TSW		(1 << 16)
/** TT_FDCAN_FDCAN_IR_TEFL Tx Event FIFO Element Lost **/
#define TT_FDCAN_FDCAN_IR_TEFL		(1 << 15)
/** TT_FDCAN_FDCAN_IR_TEFF Tx Event FIFO Full **/
#define TT_FDCAN_FDCAN_IR_TEFF		(1 << 14)
/** TT_FDCAN_FDCAN_IR_TEFW Tx Event FIFO Watermark Reached **/
#define TT_FDCAN_FDCAN_IR_TEFW		(1 << 13)
/** TT_FDCAN_FDCAN_IR_TEFN Tx Event FIFO New Entry **/
#define TT_FDCAN_FDCAN_IR_TEFN		(1 << 12)
/** TT_FDCAN_FDCAN_IR_TEF Tx FIFO Empty **/
#define TT_FDCAN_FDCAN_IR_TEF		(1 << 11)
/** TT_FDCAN_FDCAN_IR_TCF Transmission Cancellation Finished **/
#define TT_FDCAN_FDCAN_IR_TCF		(1 << 10)
/** TT_FDCAN_FDCAN_IR_TC Transmission Completed **/
#define TT_FDCAN_FDCAN_IR_TC		(1 << 9)
/** TT_FDCAN_FDCAN_IR_HPM High Priority Message **/
#define TT_FDCAN_FDCAN_IR_HPM		(1 << 8)
/** TT_FDCAN_FDCAN_IR_RF1L Rx FIFO 1 Message Lost **/
#define TT_FDCAN_FDCAN_IR_RF1L		(1 << 7)
/** TT_FDCAN_FDCAN_IR_RF1F Rx FIFO 1 Watermark Reached **/
#define TT_FDCAN_FDCAN_IR_RF1F		(1 << 6)
/** TT_FDCAN_FDCAN_IR_RF1W Rx FIFO 1 Watermark Reached **/
#define TT_FDCAN_FDCAN_IR_RF1W		(1 << 5)
/** TT_FDCAN_FDCAN_IR_RF1N Rx FIFO 1 New Message **/
#define TT_FDCAN_FDCAN_IR_RF1N		(1 << 4)
/** TT_FDCAN_FDCAN_IR_RF0L Rx FIFO 0 Message Lost **/
#define TT_FDCAN_FDCAN_IR_RF0L		(1 << 3)
/** TT_FDCAN_FDCAN_IR_RF0F Rx FIFO 0 Full **/
#define TT_FDCAN_FDCAN_IR_RF0F		(1 << 2)
/** TT_FDCAN_FDCAN_IR_RF0W Rx FIFO 0 Full **/
#define TT_FDCAN_FDCAN_IR_RF0W		(1 << 1)
/** TT_FDCAN_FDCAN_IR_RF0N Rx FIFO 0 New Message **/
#define TT_FDCAN_FDCAN_IR_RF0N		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ie FDCANIE FDCAN Interrupt Enable Register
@{*/

/** TT_FDCAN_FDCAN_IE_ARAE Access to Reserved Address Enable **/
#define TT_FDCAN_FDCAN_IE_ARAE		(1 << 29)
/** TT_FDCAN_FDCAN_IE_PEDE Protocol Error in Data Phase Enable **/
#define TT_FDCAN_FDCAN_IE_PEDE		(1 << 28)
/** TT_FDCAN_FDCAN_IE_PEAE Protocol Error in Arbitration Phase Enable **/
#define TT_FDCAN_FDCAN_IE_PEAE		(1 << 27)
/** TT_FDCAN_FDCAN_IE_WDIE Watchdog Interrupt Enable **/
#define TT_FDCAN_FDCAN_IE_WDIE		(1 << 26)
/** TT_FDCAN_FDCAN_IE_BOE Bus_Off Status Enable **/
#define TT_FDCAN_FDCAN_IE_BOE		(1 << 25)
/** TT_FDCAN_FDCAN_IE_EWE Warning Status Enable **/
#define TT_FDCAN_FDCAN_IE_EWE		(1 << 24)
/** TT_FDCAN_FDCAN_IE_EPE Error Passive Enable **/
#define TT_FDCAN_FDCAN_IE_EPE		(1 << 23)
/** TT_FDCAN_FDCAN_IE_ELOE Error Logging Overflow Enable **/
#define TT_FDCAN_FDCAN_IE_ELOE		(1 << 22)
/** TT_FDCAN_FDCAN_IE_BEUE Bit Error Uncorrected Interrupt Enable **/
#define TT_FDCAN_FDCAN_IE_BEUE		(1 << 21)
/** TT_FDCAN_FDCAN_IE_BECE Bit Error Corrected Interrupt Enable **/
#define TT_FDCAN_FDCAN_IE_BECE		(1 << 20)
/** TT_FDCAN_FDCAN_IE_DRXE Message stored to Dedicated Rx Buffer Enable **/
#define TT_FDCAN_FDCAN_IE_DRXE		(1 << 19)
/** TT_FDCAN_FDCAN_IE_TOOE Timeout Occurred Enable **/
#define TT_FDCAN_FDCAN_IE_TOOE		(1 << 18)
/** TT_FDCAN_FDCAN_IE_MRAFE Message RAM Access Failure Enable **/
#define TT_FDCAN_FDCAN_IE_MRAFE		(1 << 17)
/** TT_FDCAN_FDCAN_IE_TSWE Timestamp Wraparound Enable **/
#define TT_FDCAN_FDCAN_IE_TSWE		(1 << 16)
/** TT_FDCAN_FDCAN_IE_TEFLE Tx Event FIFO Element Lost Enable **/
#define TT_FDCAN_FDCAN_IE_TEFLE		(1 << 15)
/** TT_FDCAN_FDCAN_IE_TEFFE Tx Event FIFO Full Enable **/
#define TT_FDCAN_FDCAN_IE_TEFFE		(1 << 14)
/** TT_FDCAN_FDCAN_IE_TEFWE Tx Event FIFO Watermark Reached Enable **/
#define TT_FDCAN_FDCAN_IE_TEFWE		(1 << 13)
/** TT_FDCAN_FDCAN_IE_TEFNE Tx Event FIFO New Entry Enable **/
#define TT_FDCAN_FDCAN_IE_TEFNE		(1 << 12)
/** TT_FDCAN_FDCAN_IE_TEFE Tx FIFO Empty Enable **/
#define TT_FDCAN_FDCAN_IE_TEFE		(1 << 11)
/** TT_FDCAN_FDCAN_IE_TCFE Transmission Cancellation Finished Enable **/
#define TT_FDCAN_FDCAN_IE_TCFE		(1 << 10)
/** TT_FDCAN_FDCAN_IE_TCE Transmission Completed Enable **/
#define TT_FDCAN_FDCAN_IE_TCE		(1 << 9)
/** TT_FDCAN_FDCAN_IE_HPME High Priority Message Enable **/
#define TT_FDCAN_FDCAN_IE_HPME		(1 << 8)
/** TT_FDCAN_FDCAN_IE_RF1LE Rx FIFO 1 Message Lost Enable **/
#define TT_FDCAN_FDCAN_IE_RF1LE		(1 << 7)
/** TT_FDCAN_FDCAN_IE_RF1FE Rx FIFO 1 Watermark Reached Enable **/
#define TT_FDCAN_FDCAN_IE_RF1FE		(1 << 6)
/** TT_FDCAN_FDCAN_IE_RF1WE Rx FIFO 1 Watermark Reached Enable **/
#define TT_FDCAN_FDCAN_IE_RF1WE		(1 << 5)
/** TT_FDCAN_FDCAN_IE_RF1NE Rx FIFO 1 New Message Enable **/
#define TT_FDCAN_FDCAN_IE_RF1NE		(1 << 4)
/** TT_FDCAN_FDCAN_IE_RF0LE Rx FIFO 0 Message Lost Enable **/
#define TT_FDCAN_FDCAN_IE_RF0LE		(1 << 3)
/** TT_FDCAN_FDCAN_IE_RF0FE Rx FIFO 0 Full Enable **/
#define TT_FDCAN_FDCAN_IE_RF0FE		(1 << 2)
/** TT_FDCAN_FDCAN_IE_RF0WE Rx FIFO 0 Full Enable **/
#define TT_FDCAN_FDCAN_IE_RF0WE		(1 << 1)
/** TT_FDCAN_FDCAN_IE_RF0NE Rx FIFO 0 New Message Enable **/
#define TT_FDCAN_FDCAN_IE_RF0NE		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ils FDCANILS FDCAN Interrupt Line Select Register
@{*/

/** TT_FDCAN_FDCAN_ILS_ARAL Access to Reserved Address Line **/
#define TT_FDCAN_FDCAN_ILS_ARAL		(1 << 29)
/** TT_FDCAN_FDCAN_ILS_PEDL Protocol Error in Data Phase Line **/
#define TT_FDCAN_FDCAN_ILS_PEDL		(1 << 28)
/** TT_FDCAN_FDCAN_ILS_PEAL Protocol Error in Arbitration Phase Line **/
#define TT_FDCAN_FDCAN_ILS_PEAL		(1 << 27)
/** TT_FDCAN_FDCAN_ILS_WDIL Watchdog Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_WDIL		(1 << 26)
/** TT_FDCAN_FDCAN_ILS_BOL Bus_Off Status **/
#define TT_FDCAN_FDCAN_ILS_BOL		(1 << 25)
/** TT_FDCAN_FDCAN_ILS_EWL Warning Status Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_EWL		(1 << 24)
/** TT_FDCAN_FDCAN_ILS_EPL Error Passive Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_EPL		(1 << 23)
/** TT_FDCAN_FDCAN_ILS_ELOL Error Logging Overflow Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_ELOL		(1 << 22)
/** TT_FDCAN_FDCAN_ILS_BEUL Bit Error Uncorrected Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_BEUL		(1 << 21)
/** TT_FDCAN_FDCAN_ILS_BECL Bit Error Corrected Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_BECL		(1 << 20)
/** TT_FDCAN_FDCAN_ILS_DRXL Message stored to Dedicated Rx Buffer Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_DRXL		(1 << 19)
/** TT_FDCAN_FDCAN_ILS_TOOL Timeout Occurred Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TOOL		(1 << 18)
/** TT_FDCAN_FDCAN_ILS_MRAFL Message RAM Access Failure Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_MRAFL		(1 << 17)
/** TT_FDCAN_FDCAN_ILS_TSWL Timestamp Wraparound Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TSWL		(1 << 16)
/** TT_FDCAN_FDCAN_ILS_TEFLL Tx Event FIFO Element Lost Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TEFLL		(1 << 15)
/** TT_FDCAN_FDCAN_ILS_TEFFL Tx Event FIFO Full Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TEFFL		(1 << 14)
/** TT_FDCAN_FDCAN_ILS_TEFWL Tx Event FIFO Watermark Reached Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TEFWL		(1 << 13)
/** TT_FDCAN_FDCAN_ILS_TEFNL Tx Event FIFO New Entry Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TEFNL		(1 << 12)
/** TT_FDCAN_FDCAN_ILS_TEFL Tx FIFO Empty Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TEFL		(1 << 11)
/** TT_FDCAN_FDCAN_ILS_TCFL Transmission Cancellation Finished Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TCFL		(1 << 10)
/** TT_FDCAN_FDCAN_ILS_TCL Transmission Completed Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_TCL		(1 << 9)
/** TT_FDCAN_FDCAN_ILS_HPML High Priority Message Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_HPML		(1 << 8)
/** TT_FDCAN_FDCAN_ILS_RF1LL Rx FIFO 1 Message Lost Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF1LL		(1 << 7)
/** TT_FDCAN_FDCAN_ILS_RF1FL Rx FIFO 1 Full Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF1FL		(1 << 6)
/** TT_FDCAN_FDCAN_ILS_RF1WL Rx FIFO 1 Watermark Reached Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF1WL		(1 << 5)
/** TT_FDCAN_FDCAN_ILS_RF1NL Rx FIFO 1 New Message Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF1NL		(1 << 4)
/** TT_FDCAN_FDCAN_ILS_RF0LL Rx FIFO 0 Message Lost Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF0LL		(1 << 3)
/** TT_FDCAN_FDCAN_ILS_RF0FL Rx FIFO 0 Full Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF0FL		(1 << 2)
/** TT_FDCAN_FDCAN_ILS_RF0WL Rx FIFO 0 Watermark Reached Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF0WL		(1 << 1)
/** TT_FDCAN_FDCAN_ILS_RF0NL Rx FIFO 0 New Message Interrupt Line **/
#define TT_FDCAN_FDCAN_ILS_RF0NL		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ile FDCANILE FDCAN Interrupt Line Enable Register
@{*/

/** TT_FDCAN_FDCAN_ILE_EINT1 Enable Interrupt Line 1 **/
#define TT_FDCAN_FDCAN_ILE_EINT1		(1 << 1)
/** TT_FDCAN_FDCAN_ILE_EINT0 Enable Interrupt Line 0 **/
#define TT_FDCAN_FDCAN_ILE_EINT0		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_gfc FDCANGFC FDCAN Global Filter Configuration Register
@{*/


#define TT_FDCAN_FDCAN_GFC_ANFS_SHIFT		4
#define TT_FDCAN_FDCAN_GFC_ANFS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_gfc_anfs ANFS Accept Non-matching Frames Standard
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_GFC_ANFE_SHIFT		2
#define TT_FDCAN_FDCAN_GFC_ANFE_MASK		0x03
/** @defgroup tt_fdcan_fdcan_gfc_anfe ANFE Accept Non-matching Frames Extended
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_GFC_RRFS Reject Remote Frames Standard **/
#define TT_FDCAN_FDCAN_GFC_RRFS		(1 << 1)
/** TT_FDCAN_FDCAN_GFC_RRFE Reject Remote Frames Extended **/
#define TT_FDCAN_FDCAN_GFC_RRFE		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_sidfc FDCANSIDFC FDCAN Standard ID Filter Configuration Register
@{*/


#define TT_FDCAN_FDCAN_SIDFC_LSS_SHIFT		16
#define TT_FDCAN_FDCAN_SIDFC_LSS_MASK		0xff
/** @defgroup tt_fdcan_fdcan_sidfc_lss LSS List Size Standard
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_SIDFC_FLSSA_SHIFT		2
#define TT_FDCAN_FDCAN_SIDFC_FLSSA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_sidfc_flssa FLSSA Filter List Standard Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_xidfc FDCANXIDFC FDCAN Extended ID Filter Configuration Register
@{*/


#define TT_FDCAN_FDCAN_XIDFC_LSE_SHIFT		16
#define TT_FDCAN_FDCAN_XIDFC_LSE_MASK		0xff
/** @defgroup tt_fdcan_fdcan_xidfc_lse LSE List Size Extended
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_XIDFC_FLESA_SHIFT		2
#define TT_FDCAN_FDCAN_XIDFC_FLESA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_xidfc_flesa FLESA Filter List Standard Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_xidam FDCANXIDAM FDCAN Extended ID and Mask Register
@{*/


#define TT_FDCAN_FDCAN_XIDAM_EIDM_SHIFT		0
#define TT_FDCAN_FDCAN_XIDAM_EIDM_MASK		0x1fffffff
/** @defgroup tt_fdcan_fdcan_xidam_eidm EIDM Extended ID Mask
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_hpms FDCANHPMS FDCAN High Priority Message Status Register
@{*/

/** TT_FDCAN_FDCAN_HPMS_FLST Filter List **/
#define TT_FDCAN_FDCAN_HPMS_FLST		(1 << 15)

#define TT_FDCAN_FDCAN_HPMS_FIDX_SHIFT		8
#define TT_FDCAN_FDCAN_HPMS_FIDX_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_hpms_fidx FIDX Filter Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_HPMS_MSI_SHIFT		6
#define TT_FDCAN_FDCAN_HPMS_MSI_MASK		0x03
/** @defgroup tt_fdcan_fdcan_hpms_msi MSI Message Storage Indicator
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_HPMS_BIDX_SHIFT		0
#define TT_FDCAN_FDCAN_HPMS_BIDX_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_hpms_bidx BIDX Buffer Index
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ndat1 FDCANNDAT1 FDCAN New Data 1 Register
@{*/

/** TT_FDCAN_FDCAN_NDAT1_ND31 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND31		(1 << 31)
/** TT_FDCAN_FDCAN_NDAT1_ND30 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND30		(1 << 30)
/** TT_FDCAN_FDCAN_NDAT1_ND29 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND29		(1 << 29)
/** TT_FDCAN_FDCAN_NDAT1_ND28 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND28		(1 << 28)
/** TT_FDCAN_FDCAN_NDAT1_ND27 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND27		(1 << 27)
/** TT_FDCAN_FDCAN_NDAT1_ND26 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND26		(1 << 26)
/** TT_FDCAN_FDCAN_NDAT1_ND25 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND25		(1 << 25)
/** TT_FDCAN_FDCAN_NDAT1_ND24 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND24		(1 << 24)
/** TT_FDCAN_FDCAN_NDAT1_ND23 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND23		(1 << 23)
/** TT_FDCAN_FDCAN_NDAT1_ND22 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND22		(1 << 22)
/** TT_FDCAN_FDCAN_NDAT1_ND21 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND21		(1 << 21)
/** TT_FDCAN_FDCAN_NDAT1_ND20 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND20		(1 << 20)
/** TT_FDCAN_FDCAN_NDAT1_ND19 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND19		(1 << 19)
/** TT_FDCAN_FDCAN_NDAT1_ND18 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND18		(1 << 18)
/** TT_FDCAN_FDCAN_NDAT1_ND17 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND17		(1 << 17)
/** TT_FDCAN_FDCAN_NDAT1_ND16 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND16		(1 << 16)
/** TT_FDCAN_FDCAN_NDAT1_ND15 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND15		(1 << 15)
/** TT_FDCAN_FDCAN_NDAT1_ND14 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND14		(1 << 14)
/** TT_FDCAN_FDCAN_NDAT1_ND13 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND13		(1 << 13)
/** TT_FDCAN_FDCAN_NDAT1_ND12 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND12		(1 << 12)
/** TT_FDCAN_FDCAN_NDAT1_ND11 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND11		(1 << 11)
/** TT_FDCAN_FDCAN_NDAT1_ND10 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND10		(1 << 10)
/** TT_FDCAN_FDCAN_NDAT1_ND9 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND9		(1 << 9)
/** TT_FDCAN_FDCAN_NDAT1_ND8 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND8		(1 << 8)
/** TT_FDCAN_FDCAN_NDAT1_ND7 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND7		(1 << 7)
/** TT_FDCAN_FDCAN_NDAT1_ND6 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND6		(1 << 6)
/** TT_FDCAN_FDCAN_NDAT1_ND5 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND5		(1 << 5)
/** TT_FDCAN_FDCAN_NDAT1_ND4 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND4		(1 << 4)
/** TT_FDCAN_FDCAN_NDAT1_ND3 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND3		(1 << 3)
/** TT_FDCAN_FDCAN_NDAT1_ND2 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND2		(1 << 2)
/** TT_FDCAN_FDCAN_NDAT1_ND1 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND1		(1 << 1)
/** TT_FDCAN_FDCAN_NDAT1_ND0 New data **/
#define TT_FDCAN_FDCAN_NDAT1_ND0		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ndat2 FDCANNDAT2 FDCAN New Data 2 Register
@{*/

/** TT_FDCAN_FDCAN_NDAT2_ND63 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND63		(1 << 31)
/** TT_FDCAN_FDCAN_NDAT2_ND62 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND62		(1 << 30)
/** TT_FDCAN_FDCAN_NDAT2_ND61 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND61		(1 << 29)
/** TT_FDCAN_FDCAN_NDAT2_ND60 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND60		(1 << 28)
/** TT_FDCAN_FDCAN_NDAT2_ND59 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND59		(1 << 27)
/** TT_FDCAN_FDCAN_NDAT2_ND58 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND58		(1 << 26)
/** TT_FDCAN_FDCAN_NDAT2_ND57 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND57		(1 << 25)
/** TT_FDCAN_FDCAN_NDAT2_ND56 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND56		(1 << 24)
/** TT_FDCAN_FDCAN_NDAT2_ND55 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND55		(1 << 23)
/** TT_FDCAN_FDCAN_NDAT2_ND54 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND54		(1 << 22)
/** TT_FDCAN_FDCAN_NDAT2_ND53 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND53		(1 << 21)
/** TT_FDCAN_FDCAN_NDAT2_ND52 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND52		(1 << 20)
/** TT_FDCAN_FDCAN_NDAT2_ND51 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND51		(1 << 19)
/** TT_FDCAN_FDCAN_NDAT2_ND50 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND50		(1 << 18)
/** TT_FDCAN_FDCAN_NDAT2_ND49 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND49		(1 << 17)
/** TT_FDCAN_FDCAN_NDAT2_ND48 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND48		(1 << 16)
/** TT_FDCAN_FDCAN_NDAT2_ND47 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND47		(1 << 15)
/** TT_FDCAN_FDCAN_NDAT2_ND46 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND46		(1 << 14)
/** TT_FDCAN_FDCAN_NDAT2_ND45 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND45		(1 << 13)
/** TT_FDCAN_FDCAN_NDAT2_ND44 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND44		(1 << 12)
/** TT_FDCAN_FDCAN_NDAT2_ND43 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND43		(1 << 11)
/** TT_FDCAN_FDCAN_NDAT2_ND42 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND42		(1 << 10)
/** TT_FDCAN_FDCAN_NDAT2_ND41 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND41		(1 << 9)
/** TT_FDCAN_FDCAN_NDAT2_ND40 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND40		(1 << 8)
/** TT_FDCAN_FDCAN_NDAT2_ND39 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND39		(1 << 7)
/** TT_FDCAN_FDCAN_NDAT2_ND38 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND38		(1 << 6)
/** TT_FDCAN_FDCAN_NDAT2_ND37 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND37		(1 << 5)
/** TT_FDCAN_FDCAN_NDAT2_ND36 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND36		(1 << 4)
/** TT_FDCAN_FDCAN_NDAT2_ND35 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND35		(1 << 3)
/** TT_FDCAN_FDCAN_NDAT2_ND34 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND34		(1 << 2)
/** TT_FDCAN_FDCAN_NDAT2_ND33 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND33		(1 << 1)
/** TT_FDCAN_FDCAN_NDAT2_ND32 New data **/
#define TT_FDCAN_FDCAN_NDAT2_ND32		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf0c FDCANRXF0C FDCAN Rx FIFO 0 Configuration Register
@{*/


#define TT_FDCAN_FDCAN_RXF0C_F0WM_SHIFT		24
#define TT_FDCAN_FDCAN_RXF0C_F0WM_MASK		0xff
/** @defgroup tt_fdcan_fdcan_rxf0c_f0wm F0WM FIFO 0 Watermark
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF0C_F0S_SHIFT		16
#define TT_FDCAN_FDCAN_RXF0C_F0S_MASK		0xff
/** @defgroup tt_fdcan_fdcan_rxf0c_f0s F0S Rx FIFO 0 Size
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF0C_F0SA_SHIFT		2
#define TT_FDCAN_FDCAN_RXF0C_F0SA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_rxf0c_f0sa F0SA Rx FIFO 0 Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf0s FDCANRXF0S FDCAN Rx FIFO 0 Status Register
@{*/

/** TT_FDCAN_FDCAN_RXF0S_RF0L Rx FIFO 0 Message Lost **/
#define TT_FDCAN_FDCAN_RXF0S_RF0L		(1 << 25)
/** TT_FDCAN_FDCAN_RXF0S_F0F Rx FIFO 0 Full **/
#define TT_FDCAN_FDCAN_RXF0S_F0F		(1 << 24)

#define TT_FDCAN_FDCAN_RXF0S_F0P_SHIFT		16
#define TT_FDCAN_FDCAN_RXF0S_F0P_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_rxf0s_f0p F0P Rx FIFO 0 Put Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF0S_F0G_SHIFT		8
#define TT_FDCAN_FDCAN_RXF0S_F0G_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_rxf0s_f0g F0G Rx FIFO 0 Get Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF0S_F0FL_SHIFT		0
#define TT_FDCAN_FDCAN_RXF0S_F0FL_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf0s_f0fl F0FL Rx FIFO 0 Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf0a FDCANRXF0A CAN Rx FIFO 0 Acknowledge Register
@{*/


#define TT_FDCAN_FDCAN_RXF0A_FA01_SHIFT		0
#define TT_FDCAN_FDCAN_RXF0A_FA01_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_rxf0a_fa01 FA01 Rx FIFO 0 Acknowledge Index
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxbc FDCANRXBC FDCAN Rx Buffer Configuration Register
@{*/


#define TT_FDCAN_FDCAN_RXBC_RBSA_SHIFT		2
#define TT_FDCAN_FDCAN_RXBC_RBSA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_rxbc_rbsa RBSA Rx Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf1c FDCANRXF1C FDCAN Rx FIFO 1 Configuration Register
@{*/


#define TT_FDCAN_FDCAN_RXF1C_F1WM_SHIFT		24
#define TT_FDCAN_FDCAN_RXF1C_F1WM_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf1c_f1wm F1WM Rx FIFO 1 Watermark
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF1C_F1S_SHIFT		16
#define TT_FDCAN_FDCAN_RXF1C_F1S_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf1c_f1s F1S Rx FIFO 1 Size
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF1C_F1SA_SHIFT		2
#define TT_FDCAN_FDCAN_RXF1C_F1SA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_rxf1c_f1sa F1SA Rx FIFO 1 Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf1s FDCANRXF1S FDCAN Rx FIFO 1 Status Register
@{*/


#define TT_FDCAN_FDCAN_RXF1S_DMS_SHIFT		30
#define TT_FDCAN_FDCAN_RXF1S_DMS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_rxf1s_dms DMS Debug Message Status
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_RXF1S_RF1L Rx FIFO 1 Message Lost **/
#define TT_FDCAN_FDCAN_RXF1S_RF1L		(1 << 25)
/** TT_FDCAN_FDCAN_RXF1S_F1F Rx FIFO 1 Full **/
#define TT_FDCAN_FDCAN_RXF1S_F1F		(1 << 24)

#define TT_FDCAN_FDCAN_RXF1S_F1PI_SHIFT		16
#define TT_FDCAN_FDCAN_RXF1S_F1PI_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf1s_f1pi F1PI Rx FIFO 1 Put Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF1S_F1GI_SHIFT		8
#define TT_FDCAN_FDCAN_RXF1S_F1GI_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf1s_f1gi F1GI Rx FIFO 1 Get Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXF1S_F1FL_SHIFT		0
#define TT_FDCAN_FDCAN_RXF1S_F1FL_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_rxf1s_f1fl F1FL Rx FIFO 1 Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxf1a FDCANRXF1A FDCAN Rx FIFO 1 Acknowledge Register
@{*/


#define TT_FDCAN_FDCAN_RXF1A_F1AI_SHIFT		0
#define TT_FDCAN_FDCAN_RXF1A_F1AI_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_rxf1a_f1ai F1AI Rx FIFO 1 Acknowledge Index
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_rxesc FDCANRXESC FDCAN Rx Buffer Element Size Configuration Register
@{*/


#define TT_FDCAN_FDCAN_RXESC_RBDS_SHIFT		8
#define TT_FDCAN_FDCAN_RXESC_RBDS_MASK		0x07
/** @defgroup tt_fdcan_fdcan_rxesc_rbds RBDS Rx Buffer Data Field Size:
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXESC_F1DS_SHIFT		4
#define TT_FDCAN_FDCAN_RXESC_F1DS_MASK		0x07
/** @defgroup tt_fdcan_fdcan_rxesc_f1ds F1DS Rx FIFO 0 Data Field Size:
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_RXESC_F0DS_SHIFT		0
#define TT_FDCAN_FDCAN_RXESC_F0DS_MASK		0x07
/** @defgroup tt_fdcan_fdcan_rxesc_f0ds F0DS Rx FIFO 1 Data Field Size:
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbc FDCANTXBC FDCAN Tx Buffer Configuration Register
@{*/

/** TT_FDCAN_FDCAN_TXBC_TFQM Tx FIFO/Queue Mode **/
#define TT_FDCAN_FDCAN_TXBC_TFQM		(1 << 30)

#define TT_FDCAN_FDCAN_TXBC_TFQS_SHIFT		24
#define TT_FDCAN_FDCAN_TXBC_TFQS_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txbc_tfqs TFQS Transmit FIFO/Queue Size
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXBC_NDTB_SHIFT		16
#define TT_FDCAN_FDCAN_TXBC_NDTB_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txbc_ndtb NDTB Number of Dedicated Transmit Buffers
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXBC_TBSA_SHIFT		2
#define TT_FDCAN_FDCAN_TXBC_TBSA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_txbc_tbsa TBSA Tx Buffers Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txfqs FDCANTXFQS FDCAN Tx FIFO/Queue Status Register
@{*/

/** TT_FDCAN_FDCAN_TXFQS_TFQF Tx FIFO/Queue Full **/
#define TT_FDCAN_FDCAN_TXFQS_TFQF		(1 << 21)

#define TT_FDCAN_FDCAN_TXFQS_TFQPI_SHIFT		16
#define TT_FDCAN_FDCAN_TXFQS_TFQPI_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_txfqs_tfqpi TFQPI Tx FIFO/Queue Put Index
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXFQS_TFGI_SHIFT		8
#define TT_FDCAN_FDCAN_TXFQS_TFGI_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_txfqs_tfgi TFGI TFGI
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXFQS_TFFL_SHIFT		0
#define TT_FDCAN_FDCAN_TXFQS_TFFL_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txfqs_tffl TFFL Tx FIFO Free Level
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txesc FDCANTXESC FDCAN Tx Buffer Element Size Configuration Register
@{*/


#define TT_FDCAN_FDCAN_TXESC_TBDS_SHIFT		0
#define TT_FDCAN_FDCAN_TXESC_TBDS_MASK		0x07
/** @defgroup tt_fdcan_fdcan_txesc_tbds TBDS Tx Buffer Data Field Size:
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbrp FDCANTXBRP FDCAN Tx Buffer Request Pending Register
@{*/


#define TT_FDCAN_FDCAN_TXBRP_TRP_SHIFT		0
#define TT_FDCAN_FDCAN_TXBRP_TRP_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbrp_trp TRP Transmission Request Pending
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbar FDCANTXBAR FDCAN Tx Buffer Add Request Register
@{*/


#define TT_FDCAN_FDCAN_TXBAR_AR_SHIFT		0
#define TT_FDCAN_FDCAN_TXBAR_AR_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbar_ar AR Add Request
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbcr FDCANTXBCR FDCAN Tx Buffer Cancellation Request Register
@{*/


#define TT_FDCAN_FDCAN_TXBCR_CR_SHIFT		0
#define TT_FDCAN_FDCAN_TXBCR_CR_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbcr_cr CR Cancellation Request
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbto FDCANTXBTO FDCAN Tx Buffer Transmission Occurred Register
@{*/


#define TT_FDCAN_FDCAN_TXBTO_TO_SHIFT		0
#define TT_FDCAN_FDCAN_TXBTO_TO_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbto_to TO Transmission Occurred.
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbcf FDCANTXBCF FDCAN Tx Buffer Cancellation Finished Register
@{*/


#define TT_FDCAN_FDCAN_TXBCF_CF_SHIFT		0
#define TT_FDCAN_FDCAN_TXBCF_CF_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbcf_cf CF Cancellation Finished
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbtie FDCANTXBTIE FDCAN Tx Buffer Transmission Interrupt Enable Register
@{*/


#define TT_FDCAN_FDCAN_TXBTIE_TIE_SHIFT		0
#define TT_FDCAN_FDCAN_TXBTIE_TIE_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbtie_tie TIE Transmission Interrupt Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txbcie FDCANTXBCIE FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
@{*/


#define TT_FDCAN_FDCAN_TXBCIE_CF_SHIFT		0
#define TT_FDCAN_FDCAN_TXBCIE_CF_MASK		0xffffffff
/** @defgroup tt_fdcan_fdcan_txbcie_cf CF Cancellation Finished Interrupt Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txefc FDCANTXEFC FDCAN Tx Event FIFO Configuration Register
@{*/


#define TT_FDCAN_FDCAN_TXEFC_EFWM_SHIFT		24
#define TT_FDCAN_FDCAN_TXEFC_EFWM_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txefc_efwm EFWM Event FIFO Watermark
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXEFC_EFS_SHIFT		16
#define TT_FDCAN_FDCAN_TXEFC_EFS_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txefc_efs EFS Event FIFO Size
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXEFC_EFSA_SHIFT		2
#define TT_FDCAN_FDCAN_TXEFC_EFSA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_txefc_efsa EFSA Event FIFO Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txefs FDCANTXEFS FDCAN Tx Event FIFO Status Register
@{*/

/** TT_FDCAN_FDCAN_TXEFS_TEFL Tx Event FIFO Element Lost. **/
#define TT_FDCAN_FDCAN_TXEFS_TEFL		(1 << 25)
/** TT_FDCAN_FDCAN_TXEFS_EFF Event FIFO Full. **/
#define TT_FDCAN_FDCAN_TXEFS_EFF		(1 << 24)

#define TT_FDCAN_FDCAN_TXEFS_EFGI_SHIFT		8
#define TT_FDCAN_FDCAN_TXEFS_EFGI_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_txefs_efgi EFGI Event FIFO Get Index.
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TXEFS_EFFL_SHIFT		0
#define TT_FDCAN_FDCAN_TXEFS_EFFL_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_txefs_effl EFFL Event FIFO Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_txefa FDCANTXEFA FDCAN Tx Event FIFO Acknowledge Register
@{*/


#define TT_FDCAN_FDCAN_TXEFA_EFAI_SHIFT		0
#define TT_FDCAN_FDCAN_TXEFA_EFAI_MASK		0x1f
/** @defgroup tt_fdcan_fdcan_txefa_efai EFAI Event FIFO Acknowledge Index
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tttmc FDCANTTTMC FDCAN TT Trigger Memory Configuration Register
@{*/


#define TT_FDCAN_FDCAN_TTTMC_TME_SHIFT		16
#define TT_FDCAN_FDCAN_TTTMC_TME_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_tttmc_tme TME Trigger Memory Elements
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTTMC_TMSA_SHIFT		2
#define TT_FDCAN_FDCAN_TTTMC_TMSA_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_tttmc_tmsa TMSA Trigger Memory Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttts FDCANTTTS FDCAN TT Trigger Select Register
@{*/


#define TT_FDCAN_FDCAN_TTTS_EVTSEL_SHIFT		4
#define TT_FDCAN_FDCAN_TTTS_EVTSEL_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttts_evtsel EVTSEL Event trigger input selection
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTTS_SWTDEL_SHIFT		0
#define TT_FDCAN_FDCAN_TTTS_SWTDEL_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttts_swtdel SWTDEL Stop watch trigger input selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttrmc FDCANTTRMC FDCAN TT Reference Message Configuration Register
@{*/

/** TT_FDCAN_FDCAN_TTRMC_RMPS Reference Message Payload Select **/
#define TT_FDCAN_FDCAN_TTRMC_RMPS		(1 << 31)
/** TT_FDCAN_FDCAN_TTRMC_XTD Extended Identifier **/
#define TT_FDCAN_FDCAN_TTRMC_XTD		(1 << 30)

#define TT_FDCAN_FDCAN_TTRMC_RID_SHIFT		0
#define TT_FDCAN_FDCAN_TTRMC_RID_MASK		0x1fffffff
/** @defgroup tt_fdcan_fdcan_ttrmc_rid RID Reference Identifier.
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttocf FDCANTTOCF FDCAN TT Operation Configuration Register
@{*/

/** TT_FDCAN_FDCAN_TTOCF_EVTP Event Trigger Polarity **/
#define TT_FDCAN_FDCAN_TTOCF_EVTP		(1 << 26)
/** TT_FDCAN_FDCAN_TTOCF_ECC Enable Clock Calibration **/
#define TT_FDCAN_FDCAN_TTOCF_ECC		(1 << 25)
/** TT_FDCAN_FDCAN_TTOCF_EGTF Enable Global Time Filtering **/
#define TT_FDCAN_FDCAN_TTOCF_EGTF		(1 << 24)

#define TT_FDCAN_FDCAN_TTOCF_AWL_SHIFT		16
#define TT_FDCAN_FDCAN_TTOCF_AWL_MASK		0xff
/** @defgroup tt_fdcan_fdcan_ttocf_awl AWL Application Watchdog Limit
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOCF_EECS Enable External Clock Synchronization **/
#define TT_FDCAN_FDCAN_TTOCF_EECS		(1 << 15)

#define TT_FDCAN_FDCAN_TTOCF_IRTO_SHIFT		8
#define TT_FDCAN_FDCAN_TTOCF_IRTO_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_ttocf_irto IRTO Initial Reference Trigger Offset
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTOCF_LDSDL_SHIFT		5
#define TT_FDCAN_FDCAN_TTOCF_LDSDL_MASK		0x07
/** @defgroup tt_fdcan_fdcan_ttocf_ldsdl LDSDL LD of Synchronization Deviation Limit
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOCF_TM Time Master **/
#define TT_FDCAN_FDCAN_TTOCF_TM		(1 << 4)
/** TT_FDCAN_FDCAN_TTOCF_GEN Gap Enable **/
#define TT_FDCAN_FDCAN_TTOCF_GEN		(1 << 3)

#define TT_FDCAN_FDCAN_TTOCF_OM_SHIFT		0
#define TT_FDCAN_FDCAN_TTOCF_OM_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttocf_om OM Operation Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttmlm FDCANTTMLM FDCAN TT Matrix Limits Register
@{*/


#define TT_FDCAN_FDCAN_TTMLM_ENTT_SHIFT		16
#define TT_FDCAN_FDCAN_TTMLM_ENTT_MASK		0xfff
/** @defgroup tt_fdcan_fdcan_ttmlm_entt ENTT Expected Number of Tx Triggers
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTMLM_TXEW_SHIFT		8
#define TT_FDCAN_FDCAN_TTMLM_TXEW_MASK		0x0f
/** @defgroup tt_fdcan_fdcan_ttmlm_txew TXEW Tx Enable Window
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTMLM_CSS_SHIFT		6
#define TT_FDCAN_FDCAN_TTMLM_CSS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttmlm_css CSS Cycle Start Synchronization
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTMLM_CCM_SHIFT		0
#define TT_FDCAN_FDCAN_TTMLM_CCM_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_ttmlm_ccm CCM Cycle Count Max
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_turcf FDCANTURCF FDCAN TUR Configuration Register
@{*/

/** TT_FDCAN_FDCAN_TURCF_ELT Enable Local Time **/
#define TT_FDCAN_FDCAN_TURCF_ELT		(1 << 31)

#define TT_FDCAN_FDCAN_TURCF_DC_SHIFT		16
#define TT_FDCAN_FDCAN_TURCF_DC_MASK		0x3fff
/** @defgroup tt_fdcan_fdcan_turcf_dc DC Denominator Configuration.
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TURCF_NCL_SHIFT		0
#define TT_FDCAN_FDCAN_TURCF_NCL_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_turcf_ncl NCL Numerator Configuration Low.
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttocn FDCANTTOCN FDCAN TT Operation Control Register
@{*/

/** TT_FDCAN_FDCAN_TTOCN_LCKC TT Operation Control Register Locked **/
#define TT_FDCAN_FDCAN_TTOCN_LCKC		(1 << 15)
/** TT_FDCAN_FDCAN_TTOCN_ESCN External Synchronization Control **/
#define TT_FDCAN_FDCAN_TTOCN_ESCN		(1 << 13)
/** TT_FDCAN_FDCAN_TTOCN_NIG Next is Gap **/
#define TT_FDCAN_FDCAN_TTOCN_NIG		(1 << 12)
/** TT_FDCAN_FDCAN_TTOCN_TMG Time Mark Gap **/
#define TT_FDCAN_FDCAN_TTOCN_TMG		(1 << 11)
/** TT_FDCAN_FDCAN_TTOCN_FGP Finish Gap. **/
#define TT_FDCAN_FDCAN_TTOCN_FGP		(1 << 10)
/** TT_FDCAN_FDCAN_TTOCN_GCS Gap Control Select **/
#define TT_FDCAN_FDCAN_TTOCN_GCS		(1 << 9)
/** TT_FDCAN_FDCAN_TTOCN_TTIE Trigger Time Mark Interrupt Pulse Enable **/
#define TT_FDCAN_FDCAN_TTOCN_TTIE		(1 << 8)

#define TT_FDCAN_FDCAN_TTOCN_TMC_SHIFT		6
#define TT_FDCAN_FDCAN_TTOCN_TMC_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttocn_tmc TMC Register Time Mark Compare
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOCN_RTIE Register Time Mark Interrupt Pulse Enable **/
#define TT_FDCAN_FDCAN_TTOCN_RTIE		(1 << 5)

#define TT_FDCAN_FDCAN_TTOCN_SWS_SHIFT		3
#define TT_FDCAN_FDCAN_TTOCN_SWS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttocn_sws SWS Stop Watch Source.
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOCN_SWP Stop Watch Polarity **/
#define TT_FDCAN_FDCAN_TTOCN_SWP		(1 << 2)
/** TT_FDCAN_FDCAN_TTOCN_ECS External Clock Synchronization **/
#define TT_FDCAN_FDCAN_TTOCN_ECS		(1 << 1)
/** TT_FDCAN_FDCAN_TTOCN_SGT Set Global time **/
#define TT_FDCAN_FDCAN_TTOCN_SGT		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_can_ttgtp CANTTGTP FDCAN TT Global Time Preset Register
@{*/


#define TT_FDCAN_CAN_TTGTP_CTP_SHIFT		16
#define TT_FDCAN_CAN_TTGTP_CTP_MASK		0xffff
/** @defgroup tt_fdcan_can_ttgtp_ctp CTP Cycle Time Target Phase
@{*/
/**@}*/


#define TT_FDCAN_CAN_TTGTP_NCL_SHIFT		0
#define TT_FDCAN_CAN_TTGTP_NCL_MASK		0xffff
/** @defgroup tt_fdcan_can_ttgtp_ncl NCL Time Preset
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_tttmk FDCANTTTMK FDCAN TT Time Mark Register
@{*/

/** TT_FDCAN_FDCAN_TTTMK_LCKM TT Time Mark Register Locked **/
#define TT_FDCAN_FDCAN_TTTMK_LCKM		(1 << 31)

#define TT_FDCAN_FDCAN_TTTMK_TICC_SHIFT		16
#define TT_FDCAN_FDCAN_TTTMK_TICC_MASK		0x7f
/** @defgroup tt_fdcan_fdcan_tttmk_ticc TICC Time Mark Cycle Code
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTTMK_TM_SHIFT		0
#define TT_FDCAN_FDCAN_TTTMK_TM_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_tttmk_tm TM Time Mark
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttir FDCANTTIR FDCAN TT Interrupt Register
@{*/

/** TT_FDCAN_FDCAN_TTIR_CER Configuration Error **/
#define TT_FDCAN_FDCAN_TTIR_CER		(1 << 18)
/** TT_FDCAN_FDCAN_TTIR_AW Application Watchdog **/
#define TT_FDCAN_FDCAN_TTIR_AW		(1 << 17)
/** TT_FDCAN_FDCAN_TTIR_WT Watch Trigger **/
#define TT_FDCAN_FDCAN_TTIR_WT		(1 << 16)
/** TT_FDCAN_FDCAN_TTIR_IWTG Initialization Watch Trigger **/
#define TT_FDCAN_FDCAN_TTIR_IWTG		(1 << 15)
/** TT_FDCAN_FDCAN_TTIR_ELC Error Level Changed. **/
#define TT_FDCAN_FDCAN_TTIR_ELC		(1 << 14)
/** TT_FDCAN_FDCAN_TTIR_SE2 Scheduling Error 2 **/
#define TT_FDCAN_FDCAN_TTIR_SE2		(1 << 13)
/** TT_FDCAN_FDCAN_TTIR_SE1 Scheduling Error 1 **/
#define TT_FDCAN_FDCAN_TTIR_SE1		(1 << 12)
/** TT_FDCAN_FDCAN_TTIR_TXO Tx Count Overflow **/
#define TT_FDCAN_FDCAN_TTIR_TXO		(1 << 11)
/** TT_FDCAN_FDCAN_TTIR_TXU Tx Count Underflow **/
#define TT_FDCAN_FDCAN_TTIR_TXU		(1 << 10)
/** TT_FDCAN_FDCAN_TTIR_GTE Global Time Error **/
#define TT_FDCAN_FDCAN_TTIR_GTE		(1 << 9)
/** TT_FDCAN_FDCAN_TTIR_GTD Global Time Discontinuity **/
#define TT_FDCAN_FDCAN_TTIR_GTD		(1 << 8)
/** TT_FDCAN_FDCAN_TTIR_GTW Global Time Wrap **/
#define TT_FDCAN_FDCAN_TTIR_GTW		(1 << 7)
/** TT_FDCAN_FDCAN_TTIR_SWE Stop Watch Event **/
#define TT_FDCAN_FDCAN_TTIR_SWE		(1 << 6)
/** TT_FDCAN_FDCAN_TTIR_TTMI Trigger Time Mark Event Internal **/
#define TT_FDCAN_FDCAN_TTIR_TTMI		(1 << 5)
/** TT_FDCAN_FDCAN_TTIR_RTMI Register Time Mark Interrupt. **/
#define TT_FDCAN_FDCAN_TTIR_RTMI		(1 << 4)
/** TT_FDCAN_FDCAN_TTIR_SOG Start of Gap **/
#define TT_FDCAN_FDCAN_TTIR_SOG		(1 << 3)
/** TT_FDCAN_FDCAN_TTIR_CSM Change of Synchronization Mode **/
#define TT_FDCAN_FDCAN_TTIR_CSM		(1 << 2)
/** TT_FDCAN_FDCAN_TTIR_SMC Start of Matrix Cycle **/
#define TT_FDCAN_FDCAN_TTIR_SMC		(1 << 1)
/** TT_FDCAN_FDCAN_TTIR_SBC Start of Basic Cycle **/
#define TT_FDCAN_FDCAN_TTIR_SBC		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ttie FDCANTTIE FDCAN TT Interrupt Enable Register
@{*/

/** TT_FDCAN_FDCAN_TTIE_CERE Configuration Error Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_CERE		(1 << 18)
/** TT_FDCAN_FDCAN_TTIE_AWE Application Watchdog Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_AWE		(1 << 17)
/** TT_FDCAN_FDCAN_TTIE_WTE Watch Trigger Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_WTE		(1 << 16)
/** TT_FDCAN_FDCAN_TTIE_IWTGE Initialization Watch Trigger Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_IWTGE		(1 << 15)
/** TT_FDCAN_FDCAN_TTIE_ELCE Change Error Level Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_ELCE		(1 << 14)
/** TT_FDCAN_FDCAN_TTIE_SE2E Scheduling Error 2 Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SE2E		(1 << 13)
/** TT_FDCAN_FDCAN_TTIE_SE1E Scheduling Error 1 Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SE1E		(1 << 12)
/** TT_FDCAN_FDCAN_TTIE_TXOE Tx Count Overflow Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_TXOE		(1 << 11)
/** TT_FDCAN_FDCAN_TTIE_TXUE Tx Count Underflow Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_TXUE		(1 << 10)
/** TT_FDCAN_FDCAN_TTIE_GTEE Global Time Error Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_GTEE		(1 << 9)
/** TT_FDCAN_FDCAN_TTIE_GTDE Global Time Discontinuity Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_GTDE		(1 << 8)
/** TT_FDCAN_FDCAN_TTIE_GTWE Global Time Wrap Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_GTWE		(1 << 7)
/** TT_FDCAN_FDCAN_TTIE_SWEE Stop Watch Event Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SWEE		(1 << 6)
/** TT_FDCAN_FDCAN_TTIE_TTMIE Trigger Time Mark Event Internal Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_TTMIE		(1 << 5)
/** TT_FDCAN_FDCAN_TTIE_RTMIE Register Time Mark Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_RTMIE		(1 << 4)
/** TT_FDCAN_FDCAN_TTIE_SOGE Start of Gap Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SOGE		(1 << 3)
/** TT_FDCAN_FDCAN_TTIE_CSME Change of Synchronization Mode Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_CSME		(1 << 2)
/** TT_FDCAN_FDCAN_TTIE_SMCE Start of Matrix Cycle Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SMCE		(1 << 1)
/** TT_FDCAN_FDCAN_TTIE_SBCE Start of Basic Cycle Interrupt Enable **/
#define TT_FDCAN_FDCAN_TTIE_SBCE		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ttils FDCANTTILS FDCAN TT Interrupt Line Select Register
@{*/

/** TT_FDCAN_FDCAN_TTILS_CERL Configuration Error Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_CERL		(1 << 18)
/** TT_FDCAN_FDCAN_TTILS_AWL Application Watchdog Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_AWL		(1 << 17)
/** TT_FDCAN_FDCAN_TTILS_WTL Watch Trigger Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_WTL		(1 << 16)
/** TT_FDCAN_FDCAN_TTILS_IWTGL Initialization Watch Trigger Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_IWTGL		(1 << 15)
/** TT_FDCAN_FDCAN_TTILS_ELCL Change Error Level Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_ELCL		(1 << 14)
/** TT_FDCAN_FDCAN_TTILS_SE2L Scheduling Error 2 Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SE2L		(1 << 13)
/** TT_FDCAN_FDCAN_TTILS_SE1L Scheduling Error 1 Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SE1L		(1 << 12)
/** TT_FDCAN_FDCAN_TTILS_TXOL Tx Count Overflow Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_TXOL		(1 << 11)
/** TT_FDCAN_FDCAN_TTILS_TXUL Tx Count Underflow Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_TXUL		(1 << 10)
/** TT_FDCAN_FDCAN_TTILS_GTEL Global Time Error Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_GTEL		(1 << 9)
/** TT_FDCAN_FDCAN_TTILS_GTDL Global Time Discontinuity Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_GTDL		(1 << 8)
/** TT_FDCAN_FDCAN_TTILS_GTWL Global Time Wrap Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_GTWL		(1 << 7)
/** TT_FDCAN_FDCAN_TTILS_SWEL Stop Watch Event Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SWEL		(1 << 6)
/** TT_FDCAN_FDCAN_TTILS_TTMIL Trigger Time Mark Event Internal Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_TTMIL		(1 << 5)
/** TT_FDCAN_FDCAN_TTILS_RTMIL Register Time Mark Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_RTMIL		(1 << 4)
/** TT_FDCAN_FDCAN_TTILS_SOGL Start of Gap Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SOGL		(1 << 3)
/** TT_FDCAN_FDCAN_TTILS_CSML Change of Synchronization Mode Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_CSML		(1 << 2)
/** TT_FDCAN_FDCAN_TTILS_SMCL Start of Matrix Cycle Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SMCL		(1 << 1)
/** TT_FDCAN_FDCAN_TTILS_SBCL Start of Basic Cycle Interrupt Line **/
#define TT_FDCAN_FDCAN_TTILS_SBCL		(1 << 0)

/**@}*/

/** @defgroup tt_fdcan_fdcan_ttost FDCANTTOST FDCAN TT Operation Status Register
@{*/

/** TT_FDCAN_FDCAN_TTOST_SPL Schedule Phase Lock **/
#define TT_FDCAN_FDCAN_TTOST_SPL		(1 << 31)
/** TT_FDCAN_FDCAN_TTOST_WECS Wait for External Clock Synchronization **/
#define TT_FDCAN_FDCAN_TTOST_WECS		(1 << 30)
/** TT_FDCAN_FDCAN_TTOST_AWE Application Watchdog Event **/
#define TT_FDCAN_FDCAN_TTOST_AWE		(1 << 29)
/** TT_FDCAN_FDCAN_TTOST_WFE Wait for Event **/
#define TT_FDCAN_FDCAN_TTOST_WFE		(1 << 28)
/** TT_FDCAN_FDCAN_TTOST_GSI Gap Started Indicator. **/
#define TT_FDCAN_FDCAN_TTOST_GSI		(1 << 27)

#define TT_FDCAN_FDCAN_TTOST_TMP_SHIFT		24
#define TT_FDCAN_FDCAN_TTOST_TMP_MASK		0x07
/** @defgroup tt_fdcan_fdcan_ttost_tmp TMP Time Master Priority
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOST_GFI Gap Finished Indicator. **/
#define TT_FDCAN_FDCAN_TTOST_GFI		(1 << 23)
/** TT_FDCAN_FDCAN_TTOST_WGTD Wait for Global Time Discontinuity **/
#define TT_FDCAN_FDCAN_TTOST_WGTD		(1 << 22)

#define TT_FDCAN_FDCAN_TTOST_RTO_SHIFT		8
#define TT_FDCAN_FDCAN_TTOST_RTO_MASK		0xff
/** @defgroup tt_fdcan_fdcan_ttost_rto RTO Reference Trigger Offset
@{*/
/**@}*/

/** TT_FDCAN_FDCAN_TTOST_QCS Quality of Clock Speed **/
#define TT_FDCAN_FDCAN_TTOST_QCS		(1 << 7)
/** TT_FDCAN_FDCAN_TTOST_GTP Quality of Global Time Phase **/
#define TT_FDCAN_FDCAN_TTOST_GTP		(1 << 6)

#define TT_FDCAN_FDCAN_TTOST_SYS_SHIFT		4
#define TT_FDCAN_FDCAN_TTOST_SYS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttost_sys SYS Synchronization State
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTOST_MS_SHIFT		2
#define TT_FDCAN_FDCAN_TTOST_MS_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttost_ms MS Master State.
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTOST_EL_SHIFT		0
#define TT_FDCAN_FDCAN_TTOST_EL_MASK		0x03
/** @defgroup tt_fdcan_fdcan_ttost_el EL Error Level
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_turna FDCANTURNA FDCAN TUR Numerator Actual Register
@{*/


#define TT_FDCAN_FDCAN_TURNA_NAV_SHIFT		0
#define TT_FDCAN_FDCAN_TURNA_NAV_MASK		0x3ffff
/** @defgroup tt_fdcan_fdcan_turna_nav NAV Numerator Actual Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttlgt FDCANTTLGT FDCAN TT Local and Global Time Register
@{*/


#define TT_FDCAN_FDCAN_TTLGT_GT_SHIFT		16
#define TT_FDCAN_FDCAN_TTLGT_GT_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_ttlgt_gt GT Global Time
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTLGT_LT_SHIFT		0
#define TT_FDCAN_FDCAN_TTLGT_LT_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_ttlgt_lt LT Local Time
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttctc FDCANTTCTC FDCAN TT Cycle Time and Count Register
@{*/


#define TT_FDCAN_FDCAN_TTCTC_CC_SHIFT		16
#define TT_FDCAN_FDCAN_TTCTC_CC_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_ttctc_cc CC Cycle Count
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTCTC_CT_SHIFT		0
#define TT_FDCAN_FDCAN_TTCTC_CT_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_ttctc_ct CT Cycle Time
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttcpt FDCANTTCPT FDCAN TT Capture Time Register
@{*/


#define TT_FDCAN_FDCAN_TTCPT_SWV_SHIFT		16
#define TT_FDCAN_FDCAN_TTCPT_SWV_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_ttcpt_swv SWV Stop Watch Value
@{*/
/**@}*/


#define TT_FDCAN_FDCAN_TTCPT_CT_SHIFT		0
#define TT_FDCAN_FDCAN_TTCPT_CT_MASK		0x3f
/** @defgroup tt_fdcan_fdcan_ttcpt_ct CT Cycle Count Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tt_fdcan_fdcan_ttcsm FDCANTTCSM FDCAN TT Cycle Sync Mark Register
@{*/


#define TT_FDCAN_FDCAN_TTCSM_CSM_SHIFT		0
#define TT_FDCAN_FDCAN_TTCSM_CSM_MASK		0xffff
/** @defgroup tt_fdcan_fdcan_ttcsm_csm CSM Cycle Sync Mark
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- MCAN0: Controller Area Network ------------------------------- */

/** @defgroup mcan0_registers Controller Area Network Register
@{*/

/** MCAN0_MCAN_CREL Core Release Register **/
#define MCAN0_MCAN_CREL			MMIO32(MCAN0_BASE + 0x00)
/** MCAN0_MCAN_ENDN Endian Register **/
#define MCAN0_MCAN_ENDN			MMIO32(MCAN0_BASE + 0x04)
/** MCAN0_MCAN_CUST Customer Register **/
#define MCAN0_MCAN_CUST			MMIO32(MCAN0_BASE + 0x08)
/** MCAN0_MCAN_FBTP Fast Bit Timing and Prescaler Register **/
#define MCAN0_MCAN_FBTP			MMIO32(MCAN0_BASE + 0x0c)
/** MCAN0_MCAN_TEST Test Register **/
#define MCAN0_MCAN_TEST			MMIO32(MCAN0_BASE + 0x10)
/** MCAN0_MCAN_RWD RAM Watchdog Register **/
#define MCAN0_MCAN_RWD			MMIO32(MCAN0_BASE + 0x14)
/** MCAN0_MCAN_CCCR CC Control Register **/
#define MCAN0_MCAN_CCCR			MMIO32(MCAN0_BASE + 0x18)
/** MCAN0_MCAN_BTP Bit Timing and Prescaler Register **/
#define MCAN0_MCAN_BTP			MMIO32(MCAN0_BASE + 0x1c)
/** MCAN0_MCAN_TSCC Timestamp Counter Configuration Register **/
#define MCAN0_MCAN_TSCC			MMIO32(MCAN0_BASE + 0x20)
/** MCAN0_MCAN_TSCV Timestamp Counter Value Register **/
#define MCAN0_MCAN_TSCV			MMIO32(MCAN0_BASE + 0x24)
/** MCAN0_MCAN_TOCC Timeout Counter Configuration Register **/
#define MCAN0_MCAN_TOCC			MMIO32(MCAN0_BASE + 0x28)
/** MCAN0_MCAN_TOCV Timeout Counter Value Register **/
#define MCAN0_MCAN_TOCV			MMIO32(MCAN0_BASE + 0x2c)
/** MCAN0_MCAN_ECR Error Counter Register **/
#define MCAN0_MCAN_ECR			MMIO32(MCAN0_BASE + 0x40)
/** MCAN0_MCAN_PSR Protocol Status Register **/
#define MCAN0_MCAN_PSR			MMIO32(MCAN0_BASE + 0x44)
/** MCAN0_MCAN_IR Interrupt Register **/
#define MCAN0_MCAN_IR			MMIO32(MCAN0_BASE + 0x50)
/** MCAN0_MCAN_IE Interrupt Enable Register **/
#define MCAN0_MCAN_IE			MMIO32(MCAN0_BASE + 0x54)
/** MCAN0_MCAN_ILS Interrupt Line Select Register **/
#define MCAN0_MCAN_ILS			MMIO32(MCAN0_BASE + 0x58)
/** MCAN0_MCAN_ILE Interrupt Line Enable Register **/
#define MCAN0_MCAN_ILE			MMIO32(MCAN0_BASE + 0x5c)
/** MCAN0_MCAN_GFC Global Filter Configuration Register **/
#define MCAN0_MCAN_GFC			MMIO32(MCAN0_BASE + 0x80)
/** MCAN0_MCAN_SIDFC Standard ID Filter Configuration Register **/
#define MCAN0_MCAN_SIDFC			MMIO32(MCAN0_BASE + 0x84)
/** MCAN0_MCAN_XIDFC Extended ID Filter Configuration Register **/
#define MCAN0_MCAN_XIDFC			MMIO32(MCAN0_BASE + 0x88)
/** MCAN0_MCAN_XIDAM Extended ID AND Mask Register **/
#define MCAN0_MCAN_XIDAM			MMIO32(MCAN0_BASE + 0x90)
/** MCAN0_MCAN_HPMS High Priority Message Status Register **/
#define MCAN0_MCAN_HPMS			MMIO32(MCAN0_BASE + 0x94)
/** MCAN0_MCAN_NDAT1 New Data 1 Register **/
#define MCAN0_MCAN_NDAT1			MMIO32(MCAN0_BASE + 0x98)
/** MCAN0_MCAN_NDAT2 New Data 2 Register **/
#define MCAN0_MCAN_NDAT2			MMIO32(MCAN0_BASE + 0x9c)
/** MCAN0_MCAN_RXF0C Receive FIFO 0 Configuration Register **/
#define MCAN0_MCAN_RXF0C			MMIO32(MCAN0_BASE + 0xa0)
/** MCAN0_MCAN_RXF0S Receive FIFO 0 Status Register **/
#define MCAN0_MCAN_RXF0S			MMIO32(MCAN0_BASE + 0xa4)
/** MCAN0_MCAN_RXF0A Receive FIFO 0 Acknowledge Register **/
#define MCAN0_MCAN_RXF0A			MMIO32(MCAN0_BASE + 0xa8)
/** MCAN0_MCAN_RXBC Receive Rx Buffer Configuration Register **/
#define MCAN0_MCAN_RXBC			MMIO32(MCAN0_BASE + 0xac)
/** MCAN0_MCAN_RXF1C Receive FIFO 1 Configuration Register **/
#define MCAN0_MCAN_RXF1C			MMIO32(MCAN0_BASE + 0xb0)
/** MCAN0_MCAN_RXF1S Receive FIFO 1 Status Register **/
#define MCAN0_MCAN_RXF1S			MMIO32(MCAN0_BASE + 0xb4)
/** MCAN0_MCAN_RXF1A Receive FIFO 1 Acknowledge Register **/
#define MCAN0_MCAN_RXF1A			MMIO32(MCAN0_BASE + 0xb8)
/** MCAN0_MCAN_RXESC Receive Buffer / FIFO Element Size Configuration Register **/
#define MCAN0_MCAN_RXESC			MMIO32(MCAN0_BASE + 0xbc)
/** MCAN0_MCAN_TXBC Transmit Buffer Configuration Register **/
#define MCAN0_MCAN_TXBC			MMIO32(MCAN0_BASE + 0xc0)
/** MCAN0_MCAN_TXFQS Transmit FIFO/Queue Status Register **/
#define MCAN0_MCAN_TXFQS			MMIO32(MCAN0_BASE + 0xc4)
/** MCAN0_MCAN_TXESC Transmit Buffer Element Size Configuration Register **/
#define MCAN0_MCAN_TXESC			MMIO32(MCAN0_BASE + 0xc8)
/** MCAN0_MCAN_TXBRP Transmit Buffer Request Pending Register **/
#define MCAN0_MCAN_TXBRP			MMIO32(MCAN0_BASE + 0xcc)
/** MCAN0_MCAN_TXBAR Transmit Buffer Add Request Register **/
#define MCAN0_MCAN_TXBAR			MMIO32(MCAN0_BASE + 0xd0)
/** MCAN0_MCAN_TXBCR Transmit Buffer Cancellation Request Register **/
#define MCAN0_MCAN_TXBCR			MMIO32(MCAN0_BASE + 0xd4)
/** MCAN0_MCAN_TXBTO Transmit Buffer Transmission Occurred Register **/
#define MCAN0_MCAN_TXBTO			MMIO32(MCAN0_BASE + 0xd8)
/** MCAN0_MCAN_TXBCF Transmit Buffer Cancellation Finished Register **/
#define MCAN0_MCAN_TXBCF			MMIO32(MCAN0_BASE + 0xdc)
/** MCAN0_MCAN_TXBTIE Transmit Buffer Transmission Interrupt Enable Register **/
#define MCAN0_MCAN_TXBTIE			MMIO32(MCAN0_BASE + 0xe0)
/** MCAN0_MCAN_TXBCIE Transmit Buffer Cancellation Finished Interrupt Enable Register **/
#define MCAN0_MCAN_TXBCIE			MMIO32(MCAN0_BASE + 0xe4)
/** MCAN0_MCAN_TXEFC Transmit Event FIFO Configuration Register **/
#define MCAN0_MCAN_TXEFC			MMIO32(MCAN0_BASE + 0xf0)
/** MCAN0_MCAN_TXEFS Transmit Event FIFO Status Register **/
#define MCAN0_MCAN_TXEFS			MMIO32(MCAN0_BASE + 0xf4)
/** MCAN0_MCAN_TXEFA Transmit Event FIFO Acknowledge Register **/
#define MCAN0_MCAN_TXEFA			MMIO32(MCAN0_BASE + 0xf8)

/**@}*/


/** @defgroup mcan0_mcan_crel MCANCREL Core Release Register
@{*/


#define MCAN0_MCAN_CREL_REL_SHIFT		28
#define MCAN0_MCAN_CREL_REL_MASK		0x0f
/** @defgroup mcan0_mcan_crel_rel REL Core Release
@{*/
/**@}*/


#define MCAN0_MCAN_CREL_STEP_SHIFT		24
#define MCAN0_MCAN_CREL_STEP_MASK		0x0f
/** @defgroup mcan0_mcan_crel_step STEP Step of Core Release
@{*/
/**@}*/


#define MCAN0_MCAN_CREL_SUBSTEP_SHIFT		20
#define MCAN0_MCAN_CREL_SUBSTEP_MASK		0x0f
/** @defgroup mcan0_mcan_crel_substep SUBSTEP Sub-step of Core Release
@{*/
/**@}*/


#define MCAN0_MCAN_CREL_YEAR_SHIFT		16
#define MCAN0_MCAN_CREL_YEAR_MASK		0x0f
/** @defgroup mcan0_mcan_crel_year YEAR Timestamp Year
@{*/
/**@}*/


#define MCAN0_MCAN_CREL_MON_SHIFT		8
#define MCAN0_MCAN_CREL_MON_MASK		0xff
/** @defgroup mcan0_mcan_crel_mon MON Timestamp Month
@{*/
/**@}*/


#define MCAN0_MCAN_CREL_DAY_SHIFT		0
#define MCAN0_MCAN_CREL_DAY_MASK		0xff
/** @defgroup mcan0_mcan_crel_day DAY Timestamp Day
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_endn MCANENDN Endian Register
@{*/


#define MCAN0_MCAN_ENDN_ETV_SHIFT		0
#define MCAN0_MCAN_ENDN_ETV_MASK		0xffffffff
/** @defgroup mcan0_mcan_endn_etv ETV Endianness Test Value
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_cust MCANCUST Customer Register
@{*/


#define MCAN0_MCAN_CUST_CSV_SHIFT		0
#define MCAN0_MCAN_CUST_CSV_MASK		0xffffffff
/** @defgroup mcan0_mcan_cust_csv CSV Customer-specific Value
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_fbtp MCANFBTP Fast Bit Timing and Prescaler Register
@{*/


#define MCAN0_MCAN_FBTP_TDCO_SHIFT		24
#define MCAN0_MCAN_FBTP_TDCO_MASK		0x1f
/** @defgroup mcan0_mcan_fbtp_tdco TDCO Transceiver Delay Compensation Offset
@{*/
/**@}*/

/** MCAN0_MCAN_FBTP_TDC Transceiver Delay Compensation **/
#define MCAN0_MCAN_FBTP_TDC		(1 << 23)

#define MCAN0_MCAN_FBTP_FBRP_SHIFT		16
#define MCAN0_MCAN_FBTP_FBRP_MASK		0x1f
/** @defgroup mcan0_mcan_fbtp_fbrp FBRP Fast Baud Rate Prescaler
@{*/
/**@}*/


#define MCAN0_MCAN_FBTP_FTSEG1_SHIFT		8
#define MCAN0_MCAN_FBTP_FTSEG1_MASK		0x0f
/** @defgroup mcan0_mcan_fbtp_ftseg1 FTSEG1 Fast Time Segment Before Sample Point
@{*/
/**@}*/


#define MCAN0_MCAN_FBTP_FTSEG2_SHIFT		4
#define MCAN0_MCAN_FBTP_FTSEG2_MASK		0x07
/** @defgroup mcan0_mcan_fbtp_ftseg2 FTSEG2 Fast Time Segment After Sample Point
@{*/
/**@}*/


#define MCAN0_MCAN_FBTP_FSJW_SHIFT		0
#define MCAN0_MCAN_FBTP_FSJW_MASK		0x03
/** @defgroup mcan0_mcan_fbtp_fsjw FSJW Fast (Re) Synchronization Jump Width
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_test MCANTEST Test Register
@{*/


#define MCAN0_MCAN_TEST_TDCV_SHIFT		8
#define MCAN0_MCAN_TEST_TDCV_MASK		0x3f
/** @defgroup mcan0_mcan_test_tdcv TDCV Transceiver Delay Compensation Value (read-only)
@{*/
/**@}*/

/** MCAN0_MCAN_TEST_RX Receive Pin (read-only) **/
#define MCAN0_MCAN_TEST_RX		(1 << 7)

#define MCAN0_MCAN_TEST_TX_SHIFT		5
#define MCAN0_MCAN_TEST_TX_MASK		0x03
/** @defgroup mcan0_mcan_test_tx TX Control of Transmit Pin (read/write)
@{*/
/**@}*/

/** MCAN0_MCAN_TEST_LBCK Loop Back Mode (read/write) **/
#define MCAN0_MCAN_TEST_LBCK		(1 << 4)

/**@}*/

/** @defgroup mcan0_mcan_rwd MCANRWD RAM Watchdog Register
@{*/


#define MCAN0_MCAN_RWD_WDV_SHIFT		8
#define MCAN0_MCAN_RWD_WDV_MASK		0xff
/** @defgroup mcan0_mcan_rwd_wdv WDV Watchdog Value (read-only)
@{*/
/**@}*/


#define MCAN0_MCAN_RWD_WDC_SHIFT		0
#define MCAN0_MCAN_RWD_WDC_MASK		0xff
/** @defgroup mcan0_mcan_rwd_wdc WDC Watchdog Configuration (read/write)
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_cccr MCANCCCR CC Control Register
@{*/

/** MCAN0_MCAN_CCCR_TXP Transmit Pause (read/write, write protection) **/
#define MCAN0_MCAN_CCCR_TXP		(1 << 14)
/** MCAN0_MCAN_CCCR_FDBS CAN FD Bit Rate Switching (read-only) **/
#define MCAN0_MCAN_CCCR_FDBS		(1 << 13)
/** MCAN0_MCAN_CCCR_FDO CAN FD Operation (read-only) **/
#define MCAN0_MCAN_CCCR_FDO		(1 << 12)

#define MCAN0_MCAN_CCCR_CMR_SHIFT		10
#define MCAN0_MCAN_CCCR_CMR_MASK		0x03
/** @defgroup mcan0_mcan_cccr_cmr CMR CAN Mode Request (read/write)
@{*/
/**@}*/


#define MCAN0_MCAN_CCCR_CME_SHIFT		8
#define MCAN0_MCAN_CCCR_CME_MASK		0x03
/** @defgroup mcan0_mcan_cccr_cme CME CAN Mode Enable (read/write, write protection)
@{*/
/**@}*/

/** MCAN0_MCAN_CCCR_TEST Test Mode Enable (read/write, write protection against '1') **/
#define MCAN0_MCAN_CCCR_TEST		(1 << 7)
/** MCAN0_MCAN_CCCR_DAR Disable Automatic Retransmission (read/write, write protection) **/
#define MCAN0_MCAN_CCCR_DAR		(1 << 6)
/** MCAN0_MCAN_CCCR_MON Bus Monitoring Mode (read/write, write protection against '1') **/
#define MCAN0_MCAN_CCCR_MON		(1 << 5)
/** MCAN0_MCAN_CCCR_CSR Clock Stop Request (read/write) **/
#define MCAN0_MCAN_CCCR_CSR		(1 << 4)
/** MCAN0_MCAN_CCCR_CSA Clock Stop Acknowledge (read-only) **/
#define MCAN0_MCAN_CCCR_CSA		(1 << 3)
/** MCAN0_MCAN_CCCR_ASM Restricted Operation Mode (read/write, write protection against '1') **/
#define MCAN0_MCAN_CCCR_ASM		(1 << 2)
/** MCAN0_MCAN_CCCR_CCE Configuration Change Enable (read/write, write protection) **/
#define MCAN0_MCAN_CCCR_CCE		(1 << 1)
/** MCAN0_MCAN_CCCR_INIT Initialization (read/write) **/
#define MCAN0_MCAN_CCCR_INIT		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_btp MCANBTP Bit Timing and Prescaler Register
@{*/


#define MCAN0_MCAN_BTP_BRP_SHIFT		16
#define MCAN0_MCAN_BTP_BRP_MASK		0x3ff
/** @defgroup mcan0_mcan_btp_brp BRP Baud Rate Prescaler
@{*/
/**@}*/


#define MCAN0_MCAN_BTP_TSEG1_SHIFT		8
#define MCAN0_MCAN_BTP_TSEG1_MASK		0x3f
/** @defgroup mcan0_mcan_btp_tseg1 TSEG1 Time Segment Before Sample Point
@{*/
/**@}*/


#define MCAN0_MCAN_BTP_TSEG2_SHIFT		4
#define MCAN0_MCAN_BTP_TSEG2_MASK		0x0f
/** @defgroup mcan0_mcan_btp_tseg2 TSEG2 Time Segment After Sample Point
@{*/
/**@}*/


#define MCAN0_MCAN_BTP_SJW_SHIFT		0
#define MCAN0_MCAN_BTP_SJW_MASK		0x0f
/** @defgroup mcan0_mcan_btp_sjw SJW (Re) Synchronization Jump Width
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_tscc MCANTSCC Timestamp Counter Configuration Register
@{*/


#define MCAN0_MCAN_TSCC_TCP_SHIFT		16
#define MCAN0_MCAN_TSCC_TCP_MASK		0x0f
/** @defgroup mcan0_mcan_tscc_tcp TCP Timestamp Counter Prescaler
@{*/
/**@}*/


#define MCAN0_MCAN_TSCC_TSS_SHIFT		0
#define MCAN0_MCAN_TSCC_TSS_MASK		0x03
/** @defgroup mcan0_mcan_tscc_tss TSS Timestamp Select
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_tscv MCANTSCV Timestamp Counter Value Register
@{*/


#define MCAN0_MCAN_TSCV_TSC_SHIFT		0
#define MCAN0_MCAN_TSCV_TSC_MASK		0xffff
/** @defgroup mcan0_mcan_tscv_tsc TSC Timestamp Counter (cleared on write)
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_tocc MCANTOCC Timeout Counter Configuration Register
@{*/


#define MCAN0_MCAN_TOCC_TOP_SHIFT		16
#define MCAN0_MCAN_TOCC_TOP_MASK		0xffff
/** @defgroup mcan0_mcan_tocc_top TOP Timeout Period
@{*/
/**@}*/


#define MCAN0_MCAN_TOCC_TOS_SHIFT		1
#define MCAN0_MCAN_TOCC_TOS_MASK		0x03
/** @defgroup mcan0_mcan_tocc_tos TOS Timeout Select
@{*/
/**@}*/

/** MCAN0_MCAN_TOCC_ETOC Enable Timeout Counter **/
#define MCAN0_MCAN_TOCC_ETOC		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_tocv MCANTOCV Timeout Counter Value Register
@{*/


#define MCAN0_MCAN_TOCV_TOC_SHIFT		0
#define MCAN0_MCAN_TOCV_TOC_MASK		0xffff
/** @defgroup mcan0_mcan_tocv_toc TOC Timeout Counter (cleared on write)
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_ecr MCANECR Error Counter Register
@{*/


#define MCAN0_MCAN_ECR_CEL_SHIFT		16
#define MCAN0_MCAN_ECR_CEL_MASK		0xff
/** @defgroup mcan0_mcan_ecr_cel CEL CAN Error Logging (cleared on read)
@{*/
/**@}*/

/** MCAN0_MCAN_ECR_RP Receive Error Passive **/
#define MCAN0_MCAN_ECR_RP		(1 << 15)

#define MCAN0_MCAN_ECR_REC_SHIFT		8
#define MCAN0_MCAN_ECR_REC_MASK		0x7f
/** @defgroup mcan0_mcan_ecr_rec REC Receive Error Counter
@{*/
/**@}*/


#define MCAN0_MCAN_ECR_TEC_SHIFT		0
#define MCAN0_MCAN_ECR_TEC_MASK		0xff
/** @defgroup mcan0_mcan_ecr_tec TEC Transmit Error Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_psr MCANPSR Protocol Status Register
@{*/

/** MCAN0_MCAN_PSR_REDL Received a CAN FD Message (cleared on read) **/
#define MCAN0_MCAN_PSR_REDL		(1 << 13)
/** MCAN0_MCAN_PSR_RBRS BRS Flag of Last Received CAN FD Message (cleared on read) **/
#define MCAN0_MCAN_PSR_RBRS		(1 << 12)
/** MCAN0_MCAN_PSR_RESI ESI Flag of Last Received CAN FD Message (cleared on read) **/
#define MCAN0_MCAN_PSR_RESI		(1 << 11)

#define MCAN0_MCAN_PSR_FLEC_SHIFT		8
#define MCAN0_MCAN_PSR_FLEC_MASK		0x07
/** @defgroup mcan0_mcan_psr_flec FLEC Fast Last Error Code (set to 111 on read)
@{*/
/**@}*/

/** MCAN0_MCAN_PSR_BO Bus_Off Status **/
#define MCAN0_MCAN_PSR_BO		(1 << 7)
/** MCAN0_MCAN_PSR_EW Warning Status **/
#define MCAN0_MCAN_PSR_EW		(1 << 6)
/** MCAN0_MCAN_PSR_EP Error Passive **/
#define MCAN0_MCAN_PSR_EP		(1 << 5)

#define MCAN0_MCAN_PSR_ACT_SHIFT		3
#define MCAN0_MCAN_PSR_ACT_MASK		0x03
/** @defgroup mcan0_mcan_psr_act ACT Activity
@{*/
/**@}*/


#define MCAN0_MCAN_PSR_LEC_SHIFT		0
#define MCAN0_MCAN_PSR_LEC_MASK		0x07
/** @defgroup mcan0_mcan_psr_lec LEC Last Error Code (set to 111 on read)
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_ir MCANIR Interrupt Register
@{*/

/** MCAN0_MCAN_IR_STE Stuff Error **/
#define MCAN0_MCAN_IR_STE		(1 << 31)
/** MCAN0_MCAN_IR_FOE Format Error **/
#define MCAN0_MCAN_IR_FOE		(1 << 30)
/** MCAN0_MCAN_IR_ACKE Acknowledge Error **/
#define MCAN0_MCAN_IR_ACKE		(1 << 29)
/** MCAN0_MCAN_IR_BE Bit Error **/
#define MCAN0_MCAN_IR_BE		(1 << 28)
/** MCAN0_MCAN_IR_CRCE CRC Error **/
#define MCAN0_MCAN_IR_CRCE		(1 << 27)
/** MCAN0_MCAN_IR_WDI Watchdog Interrupt **/
#define MCAN0_MCAN_IR_WDI		(1 << 26)
/** MCAN0_MCAN_IR_BO Bus_Off Status **/
#define MCAN0_MCAN_IR_BO		(1 << 25)
/** MCAN0_MCAN_IR_EW Warning Status **/
#define MCAN0_MCAN_IR_EW		(1 << 24)
/** MCAN0_MCAN_IR_EP Error Passive **/
#define MCAN0_MCAN_IR_EP		(1 << 23)
/** MCAN0_MCAN_IR_ELO Error Logging Overflow **/
#define MCAN0_MCAN_IR_ELO		(1 << 22)
/** MCAN0_MCAN_IR_BEU Bit Error Uncorrected **/
#define MCAN0_MCAN_IR_BEU		(1 << 21)
/** MCAN0_MCAN_IR_BEC Bit Error Corrected **/
#define MCAN0_MCAN_IR_BEC		(1 << 20)
/** MCAN0_MCAN_IR_DRX Message stored to Dedicated Receive Buffer **/
#define MCAN0_MCAN_IR_DRX		(1 << 19)
/** MCAN0_MCAN_IR_TOO Timeout Occurred **/
#define MCAN0_MCAN_IR_TOO		(1 << 18)
/** MCAN0_MCAN_IR_MRAF Message RAM Access Failure **/
#define MCAN0_MCAN_IR_MRAF		(1 << 17)
/** MCAN0_MCAN_IR_TSW Timestamp Wraparound **/
#define MCAN0_MCAN_IR_TSW		(1 << 16)
/** MCAN0_MCAN_IR_TEFL Tx Event FIFO Element Lost **/
#define MCAN0_MCAN_IR_TEFL		(1 << 15)
/** MCAN0_MCAN_IR_TEFF Tx Event FIFO Full **/
#define MCAN0_MCAN_IR_TEFF		(1 << 14)
/** MCAN0_MCAN_IR_TEFW Tx Event FIFO Watermark Reached **/
#define MCAN0_MCAN_IR_TEFW		(1 << 13)
/** MCAN0_MCAN_IR_TEFN Tx Event FIFO New Entry **/
#define MCAN0_MCAN_IR_TEFN		(1 << 12)
/** MCAN0_MCAN_IR_TFE Tx FIFO Empty **/
#define MCAN0_MCAN_IR_TFE		(1 << 11)
/** MCAN0_MCAN_IR_TCF Transmission Cancellation Finished **/
#define MCAN0_MCAN_IR_TCF		(1 << 10)
/** MCAN0_MCAN_IR_TC Transmission Completed **/
#define MCAN0_MCAN_IR_TC		(1 << 9)
/** MCAN0_MCAN_IR_HPM High Priority Message **/
#define MCAN0_MCAN_IR_HPM		(1 << 8)
/** MCAN0_MCAN_IR_RF1L Receive FIFO 1 Message Lost **/
#define MCAN0_MCAN_IR_RF1L		(1 << 7)
/** MCAN0_MCAN_IR_RF1F Receive FIFO 1 Full **/
#define MCAN0_MCAN_IR_RF1F		(1 << 6)
/** MCAN0_MCAN_IR_RF1W Receive FIFO 1 Watermark Reached **/
#define MCAN0_MCAN_IR_RF1W		(1 << 5)
/** MCAN0_MCAN_IR_RF1N Receive FIFO 1 New Message **/
#define MCAN0_MCAN_IR_RF1N		(1 << 4)
/** MCAN0_MCAN_IR_RF0L Receive FIFO 0 Message Lost **/
#define MCAN0_MCAN_IR_RF0L		(1 << 3)
/** MCAN0_MCAN_IR_RF0F Receive FIFO 0 Full **/
#define MCAN0_MCAN_IR_RF0F		(1 << 2)
/** MCAN0_MCAN_IR_RF0W Receive FIFO 0 Watermark Reached **/
#define MCAN0_MCAN_IR_RF0W		(1 << 1)
/** MCAN0_MCAN_IR_RF0N Receive FIFO 0 New Message **/
#define MCAN0_MCAN_IR_RF0N		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_ie MCANIE Interrupt Enable Register
@{*/

/** MCAN0_MCAN_IE_STEE Stuff Error Interrupt Enable **/
#define MCAN0_MCAN_IE_STEE		(1 << 31)
/** MCAN0_MCAN_IE_FOEE Format Error Interrupt Enable **/
#define MCAN0_MCAN_IE_FOEE		(1 << 30)
/** MCAN0_MCAN_IE_ACKEE Acknowledge Error Interrupt Enable **/
#define MCAN0_MCAN_IE_ACKEE		(1 << 29)
/** MCAN0_MCAN_IE_BEE Bit Error Interrupt Enable **/
#define MCAN0_MCAN_IE_BEE		(1 << 28)
/** MCAN0_MCAN_IE_CRCEE CRC Error Interrupt Enable **/
#define MCAN0_MCAN_IE_CRCEE		(1 << 27)
/** MCAN0_MCAN_IE_WDIE Watchdog Interrupt Enable **/
#define MCAN0_MCAN_IE_WDIE		(1 << 26)
/** MCAN0_MCAN_IE_BOE Bus_Off Status Interrupt Enable **/
#define MCAN0_MCAN_IE_BOE		(1 << 25)
/** MCAN0_MCAN_IE_EWE Warning Status Interrupt Enable **/
#define MCAN0_MCAN_IE_EWE		(1 << 24)
/** MCAN0_MCAN_IE_EPE Error Passive Interrupt Enable **/
#define MCAN0_MCAN_IE_EPE		(1 << 23)
/** MCAN0_MCAN_IE_ELOE Error Logging Overflow Interrupt Enable **/
#define MCAN0_MCAN_IE_ELOE		(1 << 22)
/** MCAN0_MCAN_IE_BEUE Bit Error Uncorrected Interrupt Enable **/
#define MCAN0_MCAN_IE_BEUE		(1 << 21)
/** MCAN0_MCAN_IE_BECE Bit Error Corrected Interrupt Enable **/
#define MCAN0_MCAN_IE_BECE		(1 << 20)
/** MCAN0_MCAN_IE_DRXE Message stored to Dedicated Receive Buffer Interrupt Enable **/
#define MCAN0_MCAN_IE_DRXE		(1 << 19)
/** MCAN0_MCAN_IE_TOOE Timeout Occurred Interrupt Enable **/
#define MCAN0_MCAN_IE_TOOE		(1 << 18)
/** MCAN0_MCAN_IE_MRAFE Message RAM Access Failure Interrupt Enable **/
#define MCAN0_MCAN_IE_MRAFE		(1 << 17)
/** MCAN0_MCAN_IE_TSWE Timestamp Wraparound Interrupt Enable **/
#define MCAN0_MCAN_IE_TSWE		(1 << 16)
/** MCAN0_MCAN_IE_TEFLE Tx Event FIFO Event Lost Interrupt Enable **/
#define MCAN0_MCAN_IE_TEFLE		(1 << 15)
/** MCAN0_MCAN_IE_TEFFE Tx Event FIFO Full Interrupt Enable **/
#define MCAN0_MCAN_IE_TEFFE		(1 << 14)
/** MCAN0_MCAN_IE_TEFWE Tx Event FIFO Watermark Reached Interrupt Enable **/
#define MCAN0_MCAN_IE_TEFWE		(1 << 13)
/** MCAN0_MCAN_IE_TEFNE Tx Event FIFO New Entry Interrupt Enable **/
#define MCAN0_MCAN_IE_TEFNE		(1 << 12)
/** MCAN0_MCAN_IE_TFEE Tx FIFO Empty Interrupt Enable **/
#define MCAN0_MCAN_IE_TFEE		(1 << 11)
/** MCAN0_MCAN_IE_TCFE Transmission Cancellation Finished Interrupt Enable **/
#define MCAN0_MCAN_IE_TCFE		(1 << 10)
/** MCAN0_MCAN_IE_TCE Transmission Completed Interrupt Enable **/
#define MCAN0_MCAN_IE_TCE		(1 << 9)
/** MCAN0_MCAN_IE_HPME High Priority Message Interrupt Enable **/
#define MCAN0_MCAN_IE_HPME		(1 << 8)
/** MCAN0_MCAN_IE_RF1LE Receive FIFO 1 Message Lost Interrupt Enable **/
#define MCAN0_MCAN_IE_RF1LE		(1 << 7)
/** MCAN0_MCAN_IE_RF1FE Receive FIFO 1 Full Interrupt Enable **/
#define MCAN0_MCAN_IE_RF1FE		(1 << 6)
/** MCAN0_MCAN_IE_RF1WE Receive FIFO 1 Watermark Reached Interrupt Enable **/
#define MCAN0_MCAN_IE_RF1WE		(1 << 5)
/** MCAN0_MCAN_IE_RF1NE Receive FIFO 1 New Message Interrupt Enable **/
#define MCAN0_MCAN_IE_RF1NE		(1 << 4)
/** MCAN0_MCAN_IE_RF0LE Receive FIFO 0 Message Lost Interrupt Enable **/
#define MCAN0_MCAN_IE_RF0LE		(1 << 3)
/** MCAN0_MCAN_IE_RF0FE Receive FIFO 0 Full Interrupt Enable **/
#define MCAN0_MCAN_IE_RF0FE		(1 << 2)
/** MCAN0_MCAN_IE_RF0WE Receive FIFO 0 Watermark Reached Interrupt Enable **/
#define MCAN0_MCAN_IE_RF0WE		(1 << 1)
/** MCAN0_MCAN_IE_RF0NE Receive FIFO 0 New Message Interrupt Enable **/
#define MCAN0_MCAN_IE_RF0NE		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_ils MCANILS Interrupt Line Select Register
@{*/

/** MCAN0_MCAN_ILS_STEL Stuff Error Interrupt Line **/
#define MCAN0_MCAN_ILS_STEL		(1 << 31)
/** MCAN0_MCAN_ILS_FOEL Format Error Interrupt Line **/
#define MCAN0_MCAN_ILS_FOEL		(1 << 30)
/** MCAN0_MCAN_ILS_ACKEL Acknowledge Error Interrupt Line **/
#define MCAN0_MCAN_ILS_ACKEL		(1 << 29)
/** MCAN0_MCAN_ILS_BEL Bit Error Interrupt Line **/
#define MCAN0_MCAN_ILS_BEL		(1 << 28)
/** MCAN0_MCAN_ILS_CRCEL CRC Error Interrupt Line **/
#define MCAN0_MCAN_ILS_CRCEL		(1 << 27)
/** MCAN0_MCAN_ILS_WDIL Watchdog Interrupt Line **/
#define MCAN0_MCAN_ILS_WDIL		(1 << 26)
/** MCAN0_MCAN_ILS_BOL Bus_Off Status Interrupt Line **/
#define MCAN0_MCAN_ILS_BOL		(1 << 25)
/** MCAN0_MCAN_ILS_EWL Warning Status Interrupt Line **/
#define MCAN0_MCAN_ILS_EWL		(1 << 24)
/** MCAN0_MCAN_ILS_EPL Error Passive Interrupt Line **/
#define MCAN0_MCAN_ILS_EPL		(1 << 23)
/** MCAN0_MCAN_ILS_ELOL Error Logging Overflow Interrupt Line **/
#define MCAN0_MCAN_ILS_ELOL		(1 << 22)
/** MCAN0_MCAN_ILS_BEUL Bit Error Uncorrected Interrupt Line **/
#define MCAN0_MCAN_ILS_BEUL		(1 << 21)
/** MCAN0_MCAN_ILS_BECL Bit Error Corrected Interrupt Line **/
#define MCAN0_MCAN_ILS_BECL		(1 << 20)
/** MCAN0_MCAN_ILS_DRXL Message stored to Dedicated Receive Buffer Interrupt Line **/
#define MCAN0_MCAN_ILS_DRXL		(1 << 19)
/** MCAN0_MCAN_ILS_TOOL Timeout Occurred Interrupt Line **/
#define MCAN0_MCAN_ILS_TOOL		(1 << 18)
/** MCAN0_MCAN_ILS_MRAFL Message RAM Access Failure Interrupt Line **/
#define MCAN0_MCAN_ILS_MRAFL		(1 << 17)
/** MCAN0_MCAN_ILS_TSWL Timestamp Wraparound Interrupt Line **/
#define MCAN0_MCAN_ILS_TSWL		(1 << 16)
/** MCAN0_MCAN_ILS_TEFLL Tx Event FIFO Event Lost Interrupt Line **/
#define MCAN0_MCAN_ILS_TEFLL		(1 << 15)
/** MCAN0_MCAN_ILS_TEFFL Tx Event FIFO Full Interrupt Line **/
#define MCAN0_MCAN_ILS_TEFFL		(1 << 14)
/** MCAN0_MCAN_ILS_TEFWL Tx Event FIFO Watermark Reached Interrupt Line **/
#define MCAN0_MCAN_ILS_TEFWL		(1 << 13)
/** MCAN0_MCAN_ILS_TEFNL Tx Event FIFO New Entry Interrupt Line **/
#define MCAN0_MCAN_ILS_TEFNL		(1 << 12)
/** MCAN0_MCAN_ILS_TFEL Tx FIFO Empty Interrupt Line **/
#define MCAN0_MCAN_ILS_TFEL		(1 << 11)
/** MCAN0_MCAN_ILS_TCFL Transmission Cancellation Finished Interrupt Line **/
#define MCAN0_MCAN_ILS_TCFL		(1 << 10)
/** MCAN0_MCAN_ILS_TCL Transmission Completed Interrupt Line **/
#define MCAN0_MCAN_ILS_TCL		(1 << 9)
/** MCAN0_MCAN_ILS_HPML High Priority Message Interrupt Line **/
#define MCAN0_MCAN_ILS_HPML		(1 << 8)
/** MCAN0_MCAN_ILS_RF1LL Receive FIFO 1 Message Lost Interrupt Line **/
#define MCAN0_MCAN_ILS_RF1LL		(1 << 7)
/** MCAN0_MCAN_ILS_RF1FL Receive FIFO 1 Full Interrupt Line **/
#define MCAN0_MCAN_ILS_RF1FL		(1 << 6)
/** MCAN0_MCAN_ILS_RF1WL Receive FIFO 1 Watermark Reached Interrupt Line **/
#define MCAN0_MCAN_ILS_RF1WL		(1 << 5)
/** MCAN0_MCAN_ILS_RF1NL Receive FIFO 1 New Message Interrupt Line **/
#define MCAN0_MCAN_ILS_RF1NL		(1 << 4)
/** MCAN0_MCAN_ILS_RF0LL Receive FIFO 0 Message Lost Interrupt Line **/
#define MCAN0_MCAN_ILS_RF0LL		(1 << 3)
/** MCAN0_MCAN_ILS_RF0FL Receive FIFO 0 Full Interrupt Line **/
#define MCAN0_MCAN_ILS_RF0FL		(1 << 2)
/** MCAN0_MCAN_ILS_RF0WL Receive FIFO 0 Watermark Reached Interrupt Line **/
#define MCAN0_MCAN_ILS_RF0WL		(1 << 1)
/** MCAN0_MCAN_ILS_RF0NL Receive FIFO 0 New Message Interrupt Line **/
#define MCAN0_MCAN_ILS_RF0NL		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_ile MCANILE Interrupt Line Enable Register
@{*/

/** MCAN0_MCAN_ILE_EINT1 Enable Interrupt Line 1 **/
#define MCAN0_MCAN_ILE_EINT1		(1 << 1)
/** MCAN0_MCAN_ILE_EINT0 Enable Interrupt Line 0 **/
#define MCAN0_MCAN_ILE_EINT0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_gfc MCANGFC Global Filter Configuration Register
@{*/


#define MCAN0_MCAN_GFC_ANFS_SHIFT		4
#define MCAN0_MCAN_GFC_ANFS_MASK		0x03
/** @defgroup mcan0_mcan_gfc_anfs ANFS Accept Non-matching Frames Standard
@{*/
/**@}*/


#define MCAN0_MCAN_GFC_ANFE_SHIFT		2
#define MCAN0_MCAN_GFC_ANFE_MASK		0x03
/** @defgroup mcan0_mcan_gfc_anfe ANFE Accept Non-matching Frames Extended
@{*/
/**@}*/

/** MCAN0_MCAN_GFC_RRFS Reject Remote Frames Standard **/
#define MCAN0_MCAN_GFC_RRFS		(1 << 1)
/** MCAN0_MCAN_GFC_RRFE Reject Remote Frames Extended **/
#define MCAN0_MCAN_GFC_RRFE		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_sidfc MCANSIDFC Standard ID Filter Configuration Register
@{*/


#define MCAN0_MCAN_SIDFC_LSS_SHIFT		16
#define MCAN0_MCAN_SIDFC_LSS_MASK		0xff
/** @defgroup mcan0_mcan_sidfc_lss LSS List Size Standard
@{*/
/**@}*/


#define MCAN0_MCAN_SIDFC_FLSSA_SHIFT		2
#define MCAN0_MCAN_SIDFC_FLSSA_MASK		0x3fff
/** @defgroup mcan0_mcan_sidfc_flssa FLSSA Filter List Standard Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_xidfc MCANXIDFC Extended ID Filter Configuration Register
@{*/


#define MCAN0_MCAN_XIDFC_LSE_SHIFT		16
#define MCAN0_MCAN_XIDFC_LSE_MASK		0x7f
/** @defgroup mcan0_mcan_xidfc_lse LSE List Size Extended
@{*/
/**@}*/


#define MCAN0_MCAN_XIDFC_FLESA_SHIFT		2
#define MCAN0_MCAN_XIDFC_FLESA_MASK		0x3fff
/** @defgroup mcan0_mcan_xidfc_flesa FLESA Filter List Extended Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_xidam MCANXIDAM Extended ID AND Mask Register
@{*/


#define MCAN0_MCAN_XIDAM_EIDM_SHIFT		0
#define MCAN0_MCAN_XIDAM_EIDM_MASK		0x1fffffff
/** @defgroup mcan0_mcan_xidam_eidm EIDM Extended ID Mask
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_hpms MCANHPMS High Priority Message Status Register
@{*/

/** MCAN0_MCAN_HPMS_FLST Filter List **/
#define MCAN0_MCAN_HPMS_FLST		(1 << 15)

#define MCAN0_MCAN_HPMS_FIDX_SHIFT		8
#define MCAN0_MCAN_HPMS_FIDX_MASK		0x7f
/** @defgroup mcan0_mcan_hpms_fidx FIDX Filter Index
@{*/
/**@}*/


#define MCAN0_MCAN_HPMS_MSI_SHIFT		6
#define MCAN0_MCAN_HPMS_MSI_MASK		0x03
/** @defgroup mcan0_mcan_hpms_msi MSI Message Storage Indicator
@{*/
/**@}*/


#define MCAN0_MCAN_HPMS_BIDX_SHIFT		0
#define MCAN0_MCAN_HPMS_BIDX_MASK		0x3f
/** @defgroup mcan0_mcan_hpms_bidx BIDX Buffer Index
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_ndat1 MCANNDAT1 New Data 1 Register
@{*/

/** MCAN0_MCAN_NDAT1_ND31 New Data **/
#define MCAN0_MCAN_NDAT1_ND31		(1 << 31)
/** MCAN0_MCAN_NDAT1_ND30 New Data **/
#define MCAN0_MCAN_NDAT1_ND30		(1 << 30)
/** MCAN0_MCAN_NDAT1_ND29 New Data **/
#define MCAN0_MCAN_NDAT1_ND29		(1 << 29)
/** MCAN0_MCAN_NDAT1_ND28 New Data **/
#define MCAN0_MCAN_NDAT1_ND28		(1 << 28)
/** MCAN0_MCAN_NDAT1_ND27 New Data **/
#define MCAN0_MCAN_NDAT1_ND27		(1 << 27)
/** MCAN0_MCAN_NDAT1_ND26 New Data **/
#define MCAN0_MCAN_NDAT1_ND26		(1 << 26)
/** MCAN0_MCAN_NDAT1_ND25 New Data **/
#define MCAN0_MCAN_NDAT1_ND25		(1 << 25)
/** MCAN0_MCAN_NDAT1_ND24 New Data **/
#define MCAN0_MCAN_NDAT1_ND24		(1 << 24)
/** MCAN0_MCAN_NDAT1_ND23 New Data **/
#define MCAN0_MCAN_NDAT1_ND23		(1 << 23)
/** MCAN0_MCAN_NDAT1_ND22 New Data **/
#define MCAN0_MCAN_NDAT1_ND22		(1 << 22)
/** MCAN0_MCAN_NDAT1_ND21 New Data **/
#define MCAN0_MCAN_NDAT1_ND21		(1 << 21)
/** MCAN0_MCAN_NDAT1_ND20 New Data **/
#define MCAN0_MCAN_NDAT1_ND20		(1 << 20)
/** MCAN0_MCAN_NDAT1_ND19 New Data **/
#define MCAN0_MCAN_NDAT1_ND19		(1 << 19)
/** MCAN0_MCAN_NDAT1_ND18 New Data **/
#define MCAN0_MCAN_NDAT1_ND18		(1 << 18)
/** MCAN0_MCAN_NDAT1_ND17 New Data **/
#define MCAN0_MCAN_NDAT1_ND17		(1 << 17)
/** MCAN0_MCAN_NDAT1_ND16 New Data **/
#define MCAN0_MCAN_NDAT1_ND16		(1 << 16)
/** MCAN0_MCAN_NDAT1_ND15 New Data **/
#define MCAN0_MCAN_NDAT1_ND15		(1 << 15)
/** MCAN0_MCAN_NDAT1_ND14 New Data **/
#define MCAN0_MCAN_NDAT1_ND14		(1 << 14)
/** MCAN0_MCAN_NDAT1_ND13 New Data **/
#define MCAN0_MCAN_NDAT1_ND13		(1 << 13)
/** MCAN0_MCAN_NDAT1_ND12 New Data **/
#define MCAN0_MCAN_NDAT1_ND12		(1 << 12)
/** MCAN0_MCAN_NDAT1_ND11 New Data **/
#define MCAN0_MCAN_NDAT1_ND11		(1 << 11)
/** MCAN0_MCAN_NDAT1_ND10 New Data **/
#define MCAN0_MCAN_NDAT1_ND10		(1 << 10)
/** MCAN0_MCAN_NDAT1_ND9 New Data **/
#define MCAN0_MCAN_NDAT1_ND9		(1 << 9)
/** MCAN0_MCAN_NDAT1_ND8 New Data **/
#define MCAN0_MCAN_NDAT1_ND8		(1 << 8)
/** MCAN0_MCAN_NDAT1_ND7 New Data **/
#define MCAN0_MCAN_NDAT1_ND7		(1 << 7)
/** MCAN0_MCAN_NDAT1_ND6 New Data **/
#define MCAN0_MCAN_NDAT1_ND6		(1 << 6)
/** MCAN0_MCAN_NDAT1_ND5 New Data **/
#define MCAN0_MCAN_NDAT1_ND5		(1 << 5)
/** MCAN0_MCAN_NDAT1_ND4 New Data **/
#define MCAN0_MCAN_NDAT1_ND4		(1 << 4)
/** MCAN0_MCAN_NDAT1_ND3 New Data **/
#define MCAN0_MCAN_NDAT1_ND3		(1 << 3)
/** MCAN0_MCAN_NDAT1_ND2 New Data **/
#define MCAN0_MCAN_NDAT1_ND2		(1 << 2)
/** MCAN0_MCAN_NDAT1_ND1 New Data **/
#define MCAN0_MCAN_NDAT1_ND1		(1 << 1)
/** MCAN0_MCAN_NDAT1_ND0 New Data **/
#define MCAN0_MCAN_NDAT1_ND0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_ndat2 MCANNDAT2 New Data 2 Register
@{*/

/** MCAN0_MCAN_NDAT2_ND63 New Data **/
#define MCAN0_MCAN_NDAT2_ND63		(1 << 31)
/** MCAN0_MCAN_NDAT2_ND62 New Data **/
#define MCAN0_MCAN_NDAT2_ND62		(1 << 30)
/** MCAN0_MCAN_NDAT2_ND61 New Data **/
#define MCAN0_MCAN_NDAT2_ND61		(1 << 29)
/** MCAN0_MCAN_NDAT2_ND60 New Data **/
#define MCAN0_MCAN_NDAT2_ND60		(1 << 28)
/** MCAN0_MCAN_NDAT2_ND59 New Data **/
#define MCAN0_MCAN_NDAT2_ND59		(1 << 27)
/** MCAN0_MCAN_NDAT2_ND58 New Data **/
#define MCAN0_MCAN_NDAT2_ND58		(1 << 26)
/** MCAN0_MCAN_NDAT2_ND57 New Data **/
#define MCAN0_MCAN_NDAT2_ND57		(1 << 25)
/** MCAN0_MCAN_NDAT2_ND56 New Data **/
#define MCAN0_MCAN_NDAT2_ND56		(1 << 24)
/** MCAN0_MCAN_NDAT2_ND55 New Data **/
#define MCAN0_MCAN_NDAT2_ND55		(1 << 23)
/** MCAN0_MCAN_NDAT2_ND54 New Data **/
#define MCAN0_MCAN_NDAT2_ND54		(1 << 22)
/** MCAN0_MCAN_NDAT2_ND53 New Data **/
#define MCAN0_MCAN_NDAT2_ND53		(1 << 21)
/** MCAN0_MCAN_NDAT2_ND52 New Data **/
#define MCAN0_MCAN_NDAT2_ND52		(1 << 20)
/** MCAN0_MCAN_NDAT2_ND51 New Data **/
#define MCAN0_MCAN_NDAT2_ND51		(1 << 19)
/** MCAN0_MCAN_NDAT2_ND50 New Data **/
#define MCAN0_MCAN_NDAT2_ND50		(1 << 18)
/** MCAN0_MCAN_NDAT2_ND49 New Data **/
#define MCAN0_MCAN_NDAT2_ND49		(1 << 17)
/** MCAN0_MCAN_NDAT2_ND48 New Data **/
#define MCAN0_MCAN_NDAT2_ND48		(1 << 16)
/** MCAN0_MCAN_NDAT2_ND47 New Data **/
#define MCAN0_MCAN_NDAT2_ND47		(1 << 15)
/** MCAN0_MCAN_NDAT2_ND46 New Data **/
#define MCAN0_MCAN_NDAT2_ND46		(1 << 14)
/** MCAN0_MCAN_NDAT2_ND45 New Data **/
#define MCAN0_MCAN_NDAT2_ND45		(1 << 13)
/** MCAN0_MCAN_NDAT2_ND44 New Data **/
#define MCAN0_MCAN_NDAT2_ND44		(1 << 12)
/** MCAN0_MCAN_NDAT2_ND43 New Data **/
#define MCAN0_MCAN_NDAT2_ND43		(1 << 11)
/** MCAN0_MCAN_NDAT2_ND42 New Data **/
#define MCAN0_MCAN_NDAT2_ND42		(1 << 10)
/** MCAN0_MCAN_NDAT2_ND41 New Data **/
#define MCAN0_MCAN_NDAT2_ND41		(1 << 9)
/** MCAN0_MCAN_NDAT2_ND40 New Data **/
#define MCAN0_MCAN_NDAT2_ND40		(1 << 8)
/** MCAN0_MCAN_NDAT2_ND39 New Data **/
#define MCAN0_MCAN_NDAT2_ND39		(1 << 7)
/** MCAN0_MCAN_NDAT2_ND38 New Data **/
#define MCAN0_MCAN_NDAT2_ND38		(1 << 6)
/** MCAN0_MCAN_NDAT2_ND37 New Data **/
#define MCAN0_MCAN_NDAT2_ND37		(1 << 5)
/** MCAN0_MCAN_NDAT2_ND36 New Data **/
#define MCAN0_MCAN_NDAT2_ND36		(1 << 4)
/** MCAN0_MCAN_NDAT2_ND35 New Data **/
#define MCAN0_MCAN_NDAT2_ND35		(1 << 3)
/** MCAN0_MCAN_NDAT2_ND34 New Data **/
#define MCAN0_MCAN_NDAT2_ND34		(1 << 2)
/** MCAN0_MCAN_NDAT2_ND33 New Data **/
#define MCAN0_MCAN_NDAT2_ND33		(1 << 1)
/** MCAN0_MCAN_NDAT2_ND32 New Data **/
#define MCAN0_MCAN_NDAT2_ND32		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_rxf0c MCANRXF0C Receive FIFO 0 Configuration Register
@{*/

/** MCAN0_MCAN_RXF0C_F0OM FIFO 0 Operation Mode **/
#define MCAN0_MCAN_RXF0C_F0OM		(1 << 31)

#define MCAN0_MCAN_RXF0C_F0WM_SHIFT		24
#define MCAN0_MCAN_RXF0C_F0WM_MASK		0x7f
/** @defgroup mcan0_mcan_rxf0c_f0wm F0WM Receive FIFO 0 Watermark
@{*/
/**@}*/


#define MCAN0_MCAN_RXF0C_F0S_SHIFT		16
#define MCAN0_MCAN_RXF0C_F0S_MASK		0x7f
/** @defgroup mcan0_mcan_rxf0c_f0s F0S Receive FIFO 0 Start Address
@{*/
/**@}*/


#define MCAN0_MCAN_RXF0C_F0SA_SHIFT		2
#define MCAN0_MCAN_RXF0C_F0SA_MASK		0x3fff
/** @defgroup mcan0_mcan_rxf0c_f0sa F0SA Receive FIFO 0 Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxf0s MCANRXF0S Receive FIFO 0 Status Register
@{*/

/** MCAN0_MCAN_RXF0S_RF0L Receive FIFO 0 Message Lost **/
#define MCAN0_MCAN_RXF0S_RF0L		(1 << 25)
/** MCAN0_MCAN_RXF0S_F0F Receive FIFO 0 Fill Level **/
#define MCAN0_MCAN_RXF0S_F0F		(1 << 24)

#define MCAN0_MCAN_RXF0S_F0PI_SHIFT		16
#define MCAN0_MCAN_RXF0S_F0PI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf0s_f0pi F0PI Receive FIFO 0 Put Index
@{*/
/**@}*/


#define MCAN0_MCAN_RXF0S_F0GI_SHIFT		8
#define MCAN0_MCAN_RXF0S_F0GI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf0s_f0gi F0GI Receive FIFO 0 Get Index
@{*/
/**@}*/


#define MCAN0_MCAN_RXF0S_F0FL_SHIFT		0
#define MCAN0_MCAN_RXF0S_F0FL_MASK		0x7f
/** @defgroup mcan0_mcan_rxf0s_f0fl F0FL Receive FIFO 0 Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxf0a MCANRXF0A Receive FIFO 0 Acknowledge Register
@{*/


#define MCAN0_MCAN_RXF0A_F0AI_SHIFT		0
#define MCAN0_MCAN_RXF0A_F0AI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf0a_f0ai F0AI Receive FIFO 0 Acknowledge Index
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxbc MCANRXBC Receive Rx Buffer Configuration Register
@{*/


#define MCAN0_MCAN_RXBC_RBSA_SHIFT		2
#define MCAN0_MCAN_RXBC_RBSA_MASK		0x3fff
/** @defgroup mcan0_mcan_rxbc_rbsa RBSA Receive Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxf1c MCANRXF1C Receive FIFO 1 Configuration Register
@{*/

/** MCAN0_MCAN_RXF1C_F1OM FIFO 1 Operation Mode **/
#define MCAN0_MCAN_RXF1C_F1OM		(1 << 31)

#define MCAN0_MCAN_RXF1C_F1WM_SHIFT		24
#define MCAN0_MCAN_RXF1C_F1WM_MASK		0x7f
/** @defgroup mcan0_mcan_rxf1c_f1wm F1WM Receive FIFO 1 Watermark
@{*/
/**@}*/


#define MCAN0_MCAN_RXF1C_F1S_SHIFT		16
#define MCAN0_MCAN_RXF1C_F1S_MASK		0x7f
/** @defgroup mcan0_mcan_rxf1c_f1s F1S Receive FIFO 1 Start Address
@{*/
/**@}*/


#define MCAN0_MCAN_RXF1C_F1SA_SHIFT		2
#define MCAN0_MCAN_RXF1C_F1SA_MASK		0x3fff
/** @defgroup mcan0_mcan_rxf1c_f1sa F1SA Receive FIFO 1 Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxf1s MCANRXF1S Receive FIFO 1 Status Register
@{*/


#define MCAN0_MCAN_RXF1S_DMS_SHIFT		30
#define MCAN0_MCAN_RXF1S_DMS_MASK		0x03
/** @defgroup mcan0_mcan_rxf1s_dms DMS Debug Message Status
@{*/
/**@}*/

/** MCAN0_MCAN_RXF1S_RF1L Receive FIFO 1 Message Lost **/
#define MCAN0_MCAN_RXF1S_RF1L		(1 << 25)
/** MCAN0_MCAN_RXF1S_F1F Receive FIFO 1 Fill Level **/
#define MCAN0_MCAN_RXF1S_F1F		(1 << 24)

#define MCAN0_MCAN_RXF1S_F1PI_SHIFT		16
#define MCAN0_MCAN_RXF1S_F1PI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf1s_f1pi F1PI Receive FIFO 1 Put Index
@{*/
/**@}*/


#define MCAN0_MCAN_RXF1S_F1GI_SHIFT		8
#define MCAN0_MCAN_RXF1S_F1GI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf1s_f1gi F1GI Receive FIFO 1 Get Index
@{*/
/**@}*/


#define MCAN0_MCAN_RXF1S_F1FL_SHIFT		0
#define MCAN0_MCAN_RXF1S_F1FL_MASK		0x7f
/** @defgroup mcan0_mcan_rxf1s_f1fl F1FL Receive FIFO 1 Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxf1a MCANRXF1A Receive FIFO 1 Acknowledge Register
@{*/


#define MCAN0_MCAN_RXF1A_F1AI_SHIFT		0
#define MCAN0_MCAN_RXF1A_F1AI_MASK		0x3f
/** @defgroup mcan0_mcan_rxf1a_f1ai F1AI Receive FIFO 1 Acknowledge Index
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_rxesc MCANRXESC Receive Buffer / FIFO Element Size Configuration Register
@{*/


#define MCAN0_MCAN_RXESC_RBDS_SHIFT		8
#define MCAN0_MCAN_RXESC_RBDS_MASK		0x07
/** @defgroup mcan0_mcan_rxesc_rbds RBDS Receive Buffer Data Field Size
@{*/
/**@}*/


#define MCAN0_MCAN_RXESC_F1DS_SHIFT		4
#define MCAN0_MCAN_RXESC_F1DS_MASK		0x07
/** @defgroup mcan0_mcan_rxesc_f1ds F1DS Receive FIFO 1 Data Field Size
@{*/
/**@}*/


#define MCAN0_MCAN_RXESC_F0DS_SHIFT		0
#define MCAN0_MCAN_RXESC_F0DS_MASK		0x07
/** @defgroup mcan0_mcan_rxesc_f0ds F0DS Receive FIFO 0 Data Field Size
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txbc MCANTXBC Transmit Buffer Configuration Register
@{*/

/** MCAN0_MCAN_TXBC_TFQM Tx FIFO/Queue Mode **/
#define MCAN0_MCAN_TXBC_TFQM		(1 << 30)

#define MCAN0_MCAN_TXBC_TFQS_SHIFT		24
#define MCAN0_MCAN_TXBC_TFQS_MASK		0x3f
/** @defgroup mcan0_mcan_txbc_tfqs TFQS Transmit FIFO/Queue Size
@{*/
/**@}*/


#define MCAN0_MCAN_TXBC_NDTB_SHIFT		16
#define MCAN0_MCAN_TXBC_NDTB_MASK		0x3f
/** @defgroup mcan0_mcan_txbc_ndtb NDTB Number of Dedicated Transmit Buffers
@{*/
/**@}*/


#define MCAN0_MCAN_TXBC_TBSA_SHIFT		2
#define MCAN0_MCAN_TXBC_TBSA_MASK		0x3fff
/** @defgroup mcan0_mcan_txbc_tbsa TBSA Tx Buffers Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txfqs MCANTXFQS Transmit FIFO/Queue Status Register
@{*/

/** MCAN0_MCAN_TXFQS_TFQF Tx FIFO/Queue Full **/
#define MCAN0_MCAN_TXFQS_TFQF		(1 << 21)

#define MCAN0_MCAN_TXFQS_TFQPI_SHIFT		16
#define MCAN0_MCAN_TXFQS_TFQPI_MASK		0x1f
/** @defgroup mcan0_mcan_txfqs_tfqpi TFQPI Tx FIFO/Queue Put Index
@{*/
/**@}*/


#define MCAN0_MCAN_TXFQS_TFGI_SHIFT		8
#define MCAN0_MCAN_TXFQS_TFGI_MASK		0x1f
/** @defgroup mcan0_mcan_txfqs_tfgi TFGI Tx FIFO Get Index
@{*/
/**@}*/


#define MCAN0_MCAN_TXFQS_TFFL_SHIFT		0
#define MCAN0_MCAN_TXFQS_TFFL_MASK		0x3f
/** @defgroup mcan0_mcan_txfqs_tffl TFFL Tx FIFO Free Level
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txesc MCANTXESC Transmit Buffer Element Size Configuration Register
@{*/


#define MCAN0_MCAN_TXESC_TBDS_SHIFT		0
#define MCAN0_MCAN_TXESC_TBDS_MASK		0x07
/** @defgroup mcan0_mcan_txesc_tbds TBDS Tx Buffer Data Field Size
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txbrp MCANTXBRP Transmit Buffer Request Pending Register
@{*/

/** MCAN0_MCAN_TXBRP_TRP31 Transmission Request Pending for Buffer 31 **/
#define MCAN0_MCAN_TXBRP_TRP31		(1 << 31)
/** MCAN0_MCAN_TXBRP_TRP30 Transmission Request Pending for Buffer 30 **/
#define MCAN0_MCAN_TXBRP_TRP30		(1 << 30)
/** MCAN0_MCAN_TXBRP_TRP29 Transmission Request Pending for Buffer 29 **/
#define MCAN0_MCAN_TXBRP_TRP29		(1 << 29)
/** MCAN0_MCAN_TXBRP_TRP28 Transmission Request Pending for Buffer 28 **/
#define MCAN0_MCAN_TXBRP_TRP28		(1 << 28)
/** MCAN0_MCAN_TXBRP_TRP27 Transmission Request Pending for Buffer 27 **/
#define MCAN0_MCAN_TXBRP_TRP27		(1 << 27)
/** MCAN0_MCAN_TXBRP_TRP26 Transmission Request Pending for Buffer 26 **/
#define MCAN0_MCAN_TXBRP_TRP26		(1 << 26)
/** MCAN0_MCAN_TXBRP_TRP25 Transmission Request Pending for Buffer 25 **/
#define MCAN0_MCAN_TXBRP_TRP25		(1 << 25)
/** MCAN0_MCAN_TXBRP_TRP24 Transmission Request Pending for Buffer 24 **/
#define MCAN0_MCAN_TXBRP_TRP24		(1 << 24)
/** MCAN0_MCAN_TXBRP_TRP23 Transmission Request Pending for Buffer 23 **/
#define MCAN0_MCAN_TXBRP_TRP23		(1 << 23)
/** MCAN0_MCAN_TXBRP_TRP22 Transmission Request Pending for Buffer 22 **/
#define MCAN0_MCAN_TXBRP_TRP22		(1 << 22)
/** MCAN0_MCAN_TXBRP_TRP21 Transmission Request Pending for Buffer 21 **/
#define MCAN0_MCAN_TXBRP_TRP21		(1 << 21)
/** MCAN0_MCAN_TXBRP_TRP20 Transmission Request Pending for Buffer 20 **/
#define MCAN0_MCAN_TXBRP_TRP20		(1 << 20)
/** MCAN0_MCAN_TXBRP_TRP19 Transmission Request Pending for Buffer 19 **/
#define MCAN0_MCAN_TXBRP_TRP19		(1 << 19)
/** MCAN0_MCAN_TXBRP_TRP18 Transmission Request Pending for Buffer 18 **/
#define MCAN0_MCAN_TXBRP_TRP18		(1 << 18)
/** MCAN0_MCAN_TXBRP_TRP17 Transmission Request Pending for Buffer 17 **/
#define MCAN0_MCAN_TXBRP_TRP17		(1 << 17)
/** MCAN0_MCAN_TXBRP_TRP16 Transmission Request Pending for Buffer 16 **/
#define MCAN0_MCAN_TXBRP_TRP16		(1 << 16)
/** MCAN0_MCAN_TXBRP_TRP15 Transmission Request Pending for Buffer 15 **/
#define MCAN0_MCAN_TXBRP_TRP15		(1 << 15)
/** MCAN0_MCAN_TXBRP_TRP14 Transmission Request Pending for Buffer 14 **/
#define MCAN0_MCAN_TXBRP_TRP14		(1 << 14)
/** MCAN0_MCAN_TXBRP_TRP13 Transmission Request Pending for Buffer 13 **/
#define MCAN0_MCAN_TXBRP_TRP13		(1 << 13)
/** MCAN0_MCAN_TXBRP_TRP12 Transmission Request Pending for Buffer 12 **/
#define MCAN0_MCAN_TXBRP_TRP12		(1 << 12)
/** MCAN0_MCAN_TXBRP_TRP11 Transmission Request Pending for Buffer 11 **/
#define MCAN0_MCAN_TXBRP_TRP11		(1 << 11)
/** MCAN0_MCAN_TXBRP_TRP10 Transmission Request Pending for Buffer 10 **/
#define MCAN0_MCAN_TXBRP_TRP10		(1 << 10)
/** MCAN0_MCAN_TXBRP_TRP9 Transmission Request Pending for Buffer 9 **/
#define MCAN0_MCAN_TXBRP_TRP9		(1 << 9)
/** MCAN0_MCAN_TXBRP_TRP8 Transmission Request Pending for Buffer 8 **/
#define MCAN0_MCAN_TXBRP_TRP8		(1 << 8)
/** MCAN0_MCAN_TXBRP_TRP7 Transmission Request Pending for Buffer 7 **/
#define MCAN0_MCAN_TXBRP_TRP7		(1 << 7)
/** MCAN0_MCAN_TXBRP_TRP6 Transmission Request Pending for Buffer 6 **/
#define MCAN0_MCAN_TXBRP_TRP6		(1 << 6)
/** MCAN0_MCAN_TXBRP_TRP5 Transmission Request Pending for Buffer 5 **/
#define MCAN0_MCAN_TXBRP_TRP5		(1 << 5)
/** MCAN0_MCAN_TXBRP_TRP4 Transmission Request Pending for Buffer 4 **/
#define MCAN0_MCAN_TXBRP_TRP4		(1 << 4)
/** MCAN0_MCAN_TXBRP_TRP3 Transmission Request Pending for Buffer 3 **/
#define MCAN0_MCAN_TXBRP_TRP3		(1 << 3)
/** MCAN0_MCAN_TXBRP_TRP2 Transmission Request Pending for Buffer 2 **/
#define MCAN0_MCAN_TXBRP_TRP2		(1 << 2)
/** MCAN0_MCAN_TXBRP_TRP1 Transmission Request Pending for Buffer 1 **/
#define MCAN0_MCAN_TXBRP_TRP1		(1 << 1)
/** MCAN0_MCAN_TXBRP_TRP0 Transmission Request Pending for Buffer 0 **/
#define MCAN0_MCAN_TXBRP_TRP0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbar MCANTXBAR Transmit Buffer Add Request Register
@{*/

/** MCAN0_MCAN_TXBAR_AR31 Add Request for Transmit Buffer 31 **/
#define MCAN0_MCAN_TXBAR_AR31		(1 << 31)
/** MCAN0_MCAN_TXBAR_AR30 Add Request for Transmit Buffer 30 **/
#define MCAN0_MCAN_TXBAR_AR30		(1 << 30)
/** MCAN0_MCAN_TXBAR_AR29 Add Request for Transmit Buffer 29 **/
#define MCAN0_MCAN_TXBAR_AR29		(1 << 29)
/** MCAN0_MCAN_TXBAR_AR28 Add Request for Transmit Buffer 28 **/
#define MCAN0_MCAN_TXBAR_AR28		(1 << 28)
/** MCAN0_MCAN_TXBAR_AR27 Add Request for Transmit Buffer 27 **/
#define MCAN0_MCAN_TXBAR_AR27		(1 << 27)
/** MCAN0_MCAN_TXBAR_AR26 Add Request for Transmit Buffer 26 **/
#define MCAN0_MCAN_TXBAR_AR26		(1 << 26)
/** MCAN0_MCAN_TXBAR_AR25 Add Request for Transmit Buffer 25 **/
#define MCAN0_MCAN_TXBAR_AR25		(1 << 25)
/** MCAN0_MCAN_TXBAR_AR24 Add Request for Transmit Buffer 24 **/
#define MCAN0_MCAN_TXBAR_AR24		(1 << 24)
/** MCAN0_MCAN_TXBAR_AR23 Add Request for Transmit Buffer 23 **/
#define MCAN0_MCAN_TXBAR_AR23		(1 << 23)
/** MCAN0_MCAN_TXBAR_AR22 Add Request for Transmit Buffer 22 **/
#define MCAN0_MCAN_TXBAR_AR22		(1 << 22)
/** MCAN0_MCAN_TXBAR_AR21 Add Request for Transmit Buffer 21 **/
#define MCAN0_MCAN_TXBAR_AR21		(1 << 21)
/** MCAN0_MCAN_TXBAR_AR20 Add Request for Transmit Buffer 20 **/
#define MCAN0_MCAN_TXBAR_AR20		(1 << 20)
/** MCAN0_MCAN_TXBAR_AR19 Add Request for Transmit Buffer 19 **/
#define MCAN0_MCAN_TXBAR_AR19		(1 << 19)
/** MCAN0_MCAN_TXBAR_AR18 Add Request for Transmit Buffer 18 **/
#define MCAN0_MCAN_TXBAR_AR18		(1 << 18)
/** MCAN0_MCAN_TXBAR_AR17 Add Request for Transmit Buffer 17 **/
#define MCAN0_MCAN_TXBAR_AR17		(1 << 17)
/** MCAN0_MCAN_TXBAR_AR16 Add Request for Transmit Buffer 16 **/
#define MCAN0_MCAN_TXBAR_AR16		(1 << 16)
/** MCAN0_MCAN_TXBAR_AR15 Add Request for Transmit Buffer 15 **/
#define MCAN0_MCAN_TXBAR_AR15		(1 << 15)
/** MCAN0_MCAN_TXBAR_AR14 Add Request for Transmit Buffer 14 **/
#define MCAN0_MCAN_TXBAR_AR14		(1 << 14)
/** MCAN0_MCAN_TXBAR_AR13 Add Request for Transmit Buffer 13 **/
#define MCAN0_MCAN_TXBAR_AR13		(1 << 13)
/** MCAN0_MCAN_TXBAR_AR12 Add Request for Transmit Buffer 12 **/
#define MCAN0_MCAN_TXBAR_AR12		(1 << 12)
/** MCAN0_MCAN_TXBAR_AR11 Add Request for Transmit Buffer 11 **/
#define MCAN0_MCAN_TXBAR_AR11		(1 << 11)
/** MCAN0_MCAN_TXBAR_AR10 Add Request for Transmit Buffer 10 **/
#define MCAN0_MCAN_TXBAR_AR10		(1 << 10)
/** MCAN0_MCAN_TXBAR_AR9 Add Request for Transmit Buffer 9 **/
#define MCAN0_MCAN_TXBAR_AR9		(1 << 9)
/** MCAN0_MCAN_TXBAR_AR8 Add Request for Transmit Buffer 8 **/
#define MCAN0_MCAN_TXBAR_AR8		(1 << 8)
/** MCAN0_MCAN_TXBAR_AR7 Add Request for Transmit Buffer 7 **/
#define MCAN0_MCAN_TXBAR_AR7		(1 << 7)
/** MCAN0_MCAN_TXBAR_AR6 Add Request for Transmit Buffer 6 **/
#define MCAN0_MCAN_TXBAR_AR6		(1 << 6)
/** MCAN0_MCAN_TXBAR_AR5 Add Request for Transmit Buffer 5 **/
#define MCAN0_MCAN_TXBAR_AR5		(1 << 5)
/** MCAN0_MCAN_TXBAR_AR4 Add Request for Transmit Buffer 4 **/
#define MCAN0_MCAN_TXBAR_AR4		(1 << 4)
/** MCAN0_MCAN_TXBAR_AR3 Add Request for Transmit Buffer 3 **/
#define MCAN0_MCAN_TXBAR_AR3		(1 << 3)
/** MCAN0_MCAN_TXBAR_AR2 Add Request for Transmit Buffer 2 **/
#define MCAN0_MCAN_TXBAR_AR2		(1 << 2)
/** MCAN0_MCAN_TXBAR_AR1 Add Request for Transmit Buffer 1 **/
#define MCAN0_MCAN_TXBAR_AR1		(1 << 1)
/** MCAN0_MCAN_TXBAR_AR0 Add Request for Transmit Buffer 0 **/
#define MCAN0_MCAN_TXBAR_AR0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbcr MCANTXBCR Transmit Buffer Cancellation Request Register
@{*/

/** MCAN0_MCAN_TXBCR_CR31 Cancellation Request for Transmit Buffer 31 **/
#define MCAN0_MCAN_TXBCR_CR31		(1 << 31)
/** MCAN0_MCAN_TXBCR_CR30 Cancellation Request for Transmit Buffer 30 **/
#define MCAN0_MCAN_TXBCR_CR30		(1 << 30)
/** MCAN0_MCAN_TXBCR_CR29 Cancellation Request for Transmit Buffer 29 **/
#define MCAN0_MCAN_TXBCR_CR29		(1 << 29)
/** MCAN0_MCAN_TXBCR_CR28 Cancellation Request for Transmit Buffer 28 **/
#define MCAN0_MCAN_TXBCR_CR28		(1 << 28)
/** MCAN0_MCAN_TXBCR_CR27 Cancellation Request for Transmit Buffer 27 **/
#define MCAN0_MCAN_TXBCR_CR27		(1 << 27)
/** MCAN0_MCAN_TXBCR_CR26 Cancellation Request for Transmit Buffer 26 **/
#define MCAN0_MCAN_TXBCR_CR26		(1 << 26)
/** MCAN0_MCAN_TXBCR_CR25 Cancellation Request for Transmit Buffer 25 **/
#define MCAN0_MCAN_TXBCR_CR25		(1 << 25)
/** MCAN0_MCAN_TXBCR_CR24 Cancellation Request for Transmit Buffer 24 **/
#define MCAN0_MCAN_TXBCR_CR24		(1 << 24)
/** MCAN0_MCAN_TXBCR_CR23 Cancellation Request for Transmit Buffer 23 **/
#define MCAN0_MCAN_TXBCR_CR23		(1 << 23)
/** MCAN0_MCAN_TXBCR_CR22 Cancellation Request for Transmit Buffer 22 **/
#define MCAN0_MCAN_TXBCR_CR22		(1 << 22)
/** MCAN0_MCAN_TXBCR_CR21 Cancellation Request for Transmit Buffer 21 **/
#define MCAN0_MCAN_TXBCR_CR21		(1 << 21)
/** MCAN0_MCAN_TXBCR_CR20 Cancellation Request for Transmit Buffer 20 **/
#define MCAN0_MCAN_TXBCR_CR20		(1 << 20)
/** MCAN0_MCAN_TXBCR_CR19 Cancellation Request for Transmit Buffer 19 **/
#define MCAN0_MCAN_TXBCR_CR19		(1 << 19)
/** MCAN0_MCAN_TXBCR_CR18 Cancellation Request for Transmit Buffer 18 **/
#define MCAN0_MCAN_TXBCR_CR18		(1 << 18)
/** MCAN0_MCAN_TXBCR_CR17 Cancellation Request for Transmit Buffer 17 **/
#define MCAN0_MCAN_TXBCR_CR17		(1 << 17)
/** MCAN0_MCAN_TXBCR_CR16 Cancellation Request for Transmit Buffer 16 **/
#define MCAN0_MCAN_TXBCR_CR16		(1 << 16)
/** MCAN0_MCAN_TXBCR_CR15 Cancellation Request for Transmit Buffer 15 **/
#define MCAN0_MCAN_TXBCR_CR15		(1 << 15)
/** MCAN0_MCAN_TXBCR_CR14 Cancellation Request for Transmit Buffer 14 **/
#define MCAN0_MCAN_TXBCR_CR14		(1 << 14)
/** MCAN0_MCAN_TXBCR_CR13 Cancellation Request for Transmit Buffer 13 **/
#define MCAN0_MCAN_TXBCR_CR13		(1 << 13)
/** MCAN0_MCAN_TXBCR_CR12 Cancellation Request for Transmit Buffer 12 **/
#define MCAN0_MCAN_TXBCR_CR12		(1 << 12)
/** MCAN0_MCAN_TXBCR_CR11 Cancellation Request for Transmit Buffer 11 **/
#define MCAN0_MCAN_TXBCR_CR11		(1 << 11)
/** MCAN0_MCAN_TXBCR_CR10 Cancellation Request for Transmit Buffer 10 **/
#define MCAN0_MCAN_TXBCR_CR10		(1 << 10)
/** MCAN0_MCAN_TXBCR_CR9 Cancellation Request for Transmit Buffer 9 **/
#define MCAN0_MCAN_TXBCR_CR9		(1 << 9)
/** MCAN0_MCAN_TXBCR_CR8 Cancellation Request for Transmit Buffer 8 **/
#define MCAN0_MCAN_TXBCR_CR8		(1 << 8)
/** MCAN0_MCAN_TXBCR_CR7 Cancellation Request for Transmit Buffer 7 **/
#define MCAN0_MCAN_TXBCR_CR7		(1 << 7)
/** MCAN0_MCAN_TXBCR_CR6 Cancellation Request for Transmit Buffer 6 **/
#define MCAN0_MCAN_TXBCR_CR6		(1 << 6)
/** MCAN0_MCAN_TXBCR_CR5 Cancellation Request for Transmit Buffer 5 **/
#define MCAN0_MCAN_TXBCR_CR5		(1 << 5)
/** MCAN0_MCAN_TXBCR_CR4 Cancellation Request for Transmit Buffer 4 **/
#define MCAN0_MCAN_TXBCR_CR4		(1 << 4)
/** MCAN0_MCAN_TXBCR_CR3 Cancellation Request for Transmit Buffer 3 **/
#define MCAN0_MCAN_TXBCR_CR3		(1 << 3)
/** MCAN0_MCAN_TXBCR_CR2 Cancellation Request for Transmit Buffer 2 **/
#define MCAN0_MCAN_TXBCR_CR2		(1 << 2)
/** MCAN0_MCAN_TXBCR_CR1 Cancellation Request for Transmit Buffer 1 **/
#define MCAN0_MCAN_TXBCR_CR1		(1 << 1)
/** MCAN0_MCAN_TXBCR_CR0 Cancellation Request for Transmit Buffer 0 **/
#define MCAN0_MCAN_TXBCR_CR0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbto MCANTXBTO Transmit Buffer Transmission Occurred Register
@{*/

/** MCAN0_MCAN_TXBTO_TO31 Transmission Occurred for Buffer 31 **/
#define MCAN0_MCAN_TXBTO_TO31		(1 << 31)
/** MCAN0_MCAN_TXBTO_TO30 Transmission Occurred for Buffer 30 **/
#define MCAN0_MCAN_TXBTO_TO30		(1 << 30)
/** MCAN0_MCAN_TXBTO_TO29 Transmission Occurred for Buffer 29 **/
#define MCAN0_MCAN_TXBTO_TO29		(1 << 29)
/** MCAN0_MCAN_TXBTO_TO28 Transmission Occurred for Buffer 28 **/
#define MCAN0_MCAN_TXBTO_TO28		(1 << 28)
/** MCAN0_MCAN_TXBTO_TO27 Transmission Occurred for Buffer 27 **/
#define MCAN0_MCAN_TXBTO_TO27		(1 << 27)
/** MCAN0_MCAN_TXBTO_TO26 Transmission Occurred for Buffer 26 **/
#define MCAN0_MCAN_TXBTO_TO26		(1 << 26)
/** MCAN0_MCAN_TXBTO_TO25 Transmission Occurred for Buffer 25 **/
#define MCAN0_MCAN_TXBTO_TO25		(1 << 25)
/** MCAN0_MCAN_TXBTO_TO24 Transmission Occurred for Buffer 24 **/
#define MCAN0_MCAN_TXBTO_TO24		(1 << 24)
/** MCAN0_MCAN_TXBTO_TO23 Transmission Occurred for Buffer 23 **/
#define MCAN0_MCAN_TXBTO_TO23		(1 << 23)
/** MCAN0_MCAN_TXBTO_TO22 Transmission Occurred for Buffer 22 **/
#define MCAN0_MCAN_TXBTO_TO22		(1 << 22)
/** MCAN0_MCAN_TXBTO_TO21 Transmission Occurred for Buffer 21 **/
#define MCAN0_MCAN_TXBTO_TO21		(1 << 21)
/** MCAN0_MCAN_TXBTO_TO20 Transmission Occurred for Buffer 20 **/
#define MCAN0_MCAN_TXBTO_TO20		(1 << 20)
/** MCAN0_MCAN_TXBTO_TO19 Transmission Occurred for Buffer 19 **/
#define MCAN0_MCAN_TXBTO_TO19		(1 << 19)
/** MCAN0_MCAN_TXBTO_TO18 Transmission Occurred for Buffer 18 **/
#define MCAN0_MCAN_TXBTO_TO18		(1 << 18)
/** MCAN0_MCAN_TXBTO_TO17 Transmission Occurred for Buffer 17 **/
#define MCAN0_MCAN_TXBTO_TO17		(1 << 17)
/** MCAN0_MCAN_TXBTO_TO16 Transmission Occurred for Buffer 16 **/
#define MCAN0_MCAN_TXBTO_TO16		(1 << 16)
/** MCAN0_MCAN_TXBTO_TO15 Transmission Occurred for Buffer 15 **/
#define MCAN0_MCAN_TXBTO_TO15		(1 << 15)
/** MCAN0_MCAN_TXBTO_TO14 Transmission Occurred for Buffer 14 **/
#define MCAN0_MCAN_TXBTO_TO14		(1 << 14)
/** MCAN0_MCAN_TXBTO_TO13 Transmission Occurred for Buffer 13 **/
#define MCAN0_MCAN_TXBTO_TO13		(1 << 13)
/** MCAN0_MCAN_TXBTO_TO12 Transmission Occurred for Buffer 12 **/
#define MCAN0_MCAN_TXBTO_TO12		(1 << 12)
/** MCAN0_MCAN_TXBTO_TO11 Transmission Occurred for Buffer 11 **/
#define MCAN0_MCAN_TXBTO_TO11		(1 << 11)
/** MCAN0_MCAN_TXBTO_TO10 Transmission Occurred for Buffer 10 **/
#define MCAN0_MCAN_TXBTO_TO10		(1 << 10)
/** MCAN0_MCAN_TXBTO_TO9 Transmission Occurred for Buffer 9 **/
#define MCAN0_MCAN_TXBTO_TO9		(1 << 9)
/** MCAN0_MCAN_TXBTO_TO8 Transmission Occurred for Buffer 8 **/
#define MCAN0_MCAN_TXBTO_TO8		(1 << 8)
/** MCAN0_MCAN_TXBTO_TO7 Transmission Occurred for Buffer 7 **/
#define MCAN0_MCAN_TXBTO_TO7		(1 << 7)
/** MCAN0_MCAN_TXBTO_TO6 Transmission Occurred for Buffer 6 **/
#define MCAN0_MCAN_TXBTO_TO6		(1 << 6)
/** MCAN0_MCAN_TXBTO_TO5 Transmission Occurred for Buffer 5 **/
#define MCAN0_MCAN_TXBTO_TO5		(1 << 5)
/** MCAN0_MCAN_TXBTO_TO4 Transmission Occurred for Buffer 4 **/
#define MCAN0_MCAN_TXBTO_TO4		(1 << 4)
/** MCAN0_MCAN_TXBTO_TO3 Transmission Occurred for Buffer 3 **/
#define MCAN0_MCAN_TXBTO_TO3		(1 << 3)
/** MCAN0_MCAN_TXBTO_TO2 Transmission Occurred for Buffer 2 **/
#define MCAN0_MCAN_TXBTO_TO2		(1 << 2)
/** MCAN0_MCAN_TXBTO_TO1 Transmission Occurred for Buffer 1 **/
#define MCAN0_MCAN_TXBTO_TO1		(1 << 1)
/** MCAN0_MCAN_TXBTO_TO0 Transmission Occurred for Buffer 0 **/
#define MCAN0_MCAN_TXBTO_TO0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbcf MCANTXBCF Transmit Buffer Cancellation Finished Register
@{*/

/** MCAN0_MCAN_TXBCF_CF31 Cancellation Finished for Transmit Buffer 31 **/
#define MCAN0_MCAN_TXBCF_CF31		(1 << 31)
/** MCAN0_MCAN_TXBCF_CF30 Cancellation Finished for Transmit Buffer 30 **/
#define MCAN0_MCAN_TXBCF_CF30		(1 << 30)
/** MCAN0_MCAN_TXBCF_CF29 Cancellation Finished for Transmit Buffer 29 **/
#define MCAN0_MCAN_TXBCF_CF29		(1 << 29)
/** MCAN0_MCAN_TXBCF_CF28 Cancellation Finished for Transmit Buffer 28 **/
#define MCAN0_MCAN_TXBCF_CF28		(1 << 28)
/** MCAN0_MCAN_TXBCF_CF27 Cancellation Finished for Transmit Buffer 27 **/
#define MCAN0_MCAN_TXBCF_CF27		(1 << 27)
/** MCAN0_MCAN_TXBCF_CF26 Cancellation Finished for Transmit Buffer 26 **/
#define MCAN0_MCAN_TXBCF_CF26		(1 << 26)
/** MCAN0_MCAN_TXBCF_CF25 Cancellation Finished for Transmit Buffer 25 **/
#define MCAN0_MCAN_TXBCF_CF25		(1 << 25)
/** MCAN0_MCAN_TXBCF_CF24 Cancellation Finished for Transmit Buffer 24 **/
#define MCAN0_MCAN_TXBCF_CF24		(1 << 24)
/** MCAN0_MCAN_TXBCF_CF23 Cancellation Finished for Transmit Buffer 23 **/
#define MCAN0_MCAN_TXBCF_CF23		(1 << 23)
/** MCAN0_MCAN_TXBCF_CF22 Cancellation Finished for Transmit Buffer 22 **/
#define MCAN0_MCAN_TXBCF_CF22		(1 << 22)
/** MCAN0_MCAN_TXBCF_CF21 Cancellation Finished for Transmit Buffer 21 **/
#define MCAN0_MCAN_TXBCF_CF21		(1 << 21)
/** MCAN0_MCAN_TXBCF_CF20 Cancellation Finished for Transmit Buffer 20 **/
#define MCAN0_MCAN_TXBCF_CF20		(1 << 20)
/** MCAN0_MCAN_TXBCF_CF19 Cancellation Finished for Transmit Buffer 19 **/
#define MCAN0_MCAN_TXBCF_CF19		(1 << 19)
/** MCAN0_MCAN_TXBCF_CF18 Cancellation Finished for Transmit Buffer 18 **/
#define MCAN0_MCAN_TXBCF_CF18		(1 << 18)
/** MCAN0_MCAN_TXBCF_CF17 Cancellation Finished for Transmit Buffer 17 **/
#define MCAN0_MCAN_TXBCF_CF17		(1 << 17)
/** MCAN0_MCAN_TXBCF_CF16 Cancellation Finished for Transmit Buffer 16 **/
#define MCAN0_MCAN_TXBCF_CF16		(1 << 16)
/** MCAN0_MCAN_TXBCF_CF15 Cancellation Finished for Transmit Buffer 15 **/
#define MCAN0_MCAN_TXBCF_CF15		(1 << 15)
/** MCAN0_MCAN_TXBCF_CF14 Cancellation Finished for Transmit Buffer 14 **/
#define MCAN0_MCAN_TXBCF_CF14		(1 << 14)
/** MCAN0_MCAN_TXBCF_CF13 Cancellation Finished for Transmit Buffer 13 **/
#define MCAN0_MCAN_TXBCF_CF13		(1 << 13)
/** MCAN0_MCAN_TXBCF_CF12 Cancellation Finished for Transmit Buffer 12 **/
#define MCAN0_MCAN_TXBCF_CF12		(1 << 12)
/** MCAN0_MCAN_TXBCF_CF11 Cancellation Finished for Transmit Buffer 11 **/
#define MCAN0_MCAN_TXBCF_CF11		(1 << 11)
/** MCAN0_MCAN_TXBCF_CF10 Cancellation Finished for Transmit Buffer 10 **/
#define MCAN0_MCAN_TXBCF_CF10		(1 << 10)
/** MCAN0_MCAN_TXBCF_CF9 Cancellation Finished for Transmit Buffer 9 **/
#define MCAN0_MCAN_TXBCF_CF9		(1 << 9)
/** MCAN0_MCAN_TXBCF_CF8 Cancellation Finished for Transmit Buffer 8 **/
#define MCAN0_MCAN_TXBCF_CF8		(1 << 8)
/** MCAN0_MCAN_TXBCF_CF7 Cancellation Finished for Transmit Buffer 7 **/
#define MCAN0_MCAN_TXBCF_CF7		(1 << 7)
/** MCAN0_MCAN_TXBCF_CF6 Cancellation Finished for Transmit Buffer 6 **/
#define MCAN0_MCAN_TXBCF_CF6		(1 << 6)
/** MCAN0_MCAN_TXBCF_CF5 Cancellation Finished for Transmit Buffer 5 **/
#define MCAN0_MCAN_TXBCF_CF5		(1 << 5)
/** MCAN0_MCAN_TXBCF_CF4 Cancellation Finished for Transmit Buffer 4 **/
#define MCAN0_MCAN_TXBCF_CF4		(1 << 4)
/** MCAN0_MCAN_TXBCF_CF3 Cancellation Finished for Transmit Buffer 3 **/
#define MCAN0_MCAN_TXBCF_CF3		(1 << 3)
/** MCAN0_MCAN_TXBCF_CF2 Cancellation Finished for Transmit Buffer 2 **/
#define MCAN0_MCAN_TXBCF_CF2		(1 << 2)
/** MCAN0_MCAN_TXBCF_CF1 Cancellation Finished for Transmit Buffer 1 **/
#define MCAN0_MCAN_TXBCF_CF1		(1 << 1)
/** MCAN0_MCAN_TXBCF_CF0 Cancellation Finished for Transmit Buffer 0 **/
#define MCAN0_MCAN_TXBCF_CF0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbtie MCANTXBTIE Transmit Buffer Transmission Interrupt Enable Register
@{*/

/** MCAN0_MCAN_TXBTIE_TIE31 Transmission Interrupt Enable for Buffer 31 **/
#define MCAN0_MCAN_TXBTIE_TIE31		(1 << 31)
/** MCAN0_MCAN_TXBTIE_TIE30 Transmission Interrupt Enable for Buffer 30 **/
#define MCAN0_MCAN_TXBTIE_TIE30		(1 << 30)
/** MCAN0_MCAN_TXBTIE_TIE29 Transmission Interrupt Enable for Buffer 29 **/
#define MCAN0_MCAN_TXBTIE_TIE29		(1 << 29)
/** MCAN0_MCAN_TXBTIE_TIE28 Transmission Interrupt Enable for Buffer 28 **/
#define MCAN0_MCAN_TXBTIE_TIE28		(1 << 28)
/** MCAN0_MCAN_TXBTIE_TIE27 Transmission Interrupt Enable for Buffer 27 **/
#define MCAN0_MCAN_TXBTIE_TIE27		(1 << 27)
/** MCAN0_MCAN_TXBTIE_TIE26 Transmission Interrupt Enable for Buffer 26 **/
#define MCAN0_MCAN_TXBTIE_TIE26		(1 << 26)
/** MCAN0_MCAN_TXBTIE_TIE25 Transmission Interrupt Enable for Buffer 25 **/
#define MCAN0_MCAN_TXBTIE_TIE25		(1 << 25)
/** MCAN0_MCAN_TXBTIE_TIE24 Transmission Interrupt Enable for Buffer 24 **/
#define MCAN0_MCAN_TXBTIE_TIE24		(1 << 24)
/** MCAN0_MCAN_TXBTIE_TIE23 Transmission Interrupt Enable for Buffer 23 **/
#define MCAN0_MCAN_TXBTIE_TIE23		(1 << 23)
/** MCAN0_MCAN_TXBTIE_TIE22 Transmission Interrupt Enable for Buffer 22 **/
#define MCAN0_MCAN_TXBTIE_TIE22		(1 << 22)
/** MCAN0_MCAN_TXBTIE_TIE21 Transmission Interrupt Enable for Buffer 21 **/
#define MCAN0_MCAN_TXBTIE_TIE21		(1 << 21)
/** MCAN0_MCAN_TXBTIE_TIE20 Transmission Interrupt Enable for Buffer 20 **/
#define MCAN0_MCAN_TXBTIE_TIE20		(1 << 20)
/** MCAN0_MCAN_TXBTIE_TIE19 Transmission Interrupt Enable for Buffer 19 **/
#define MCAN0_MCAN_TXBTIE_TIE19		(1 << 19)
/** MCAN0_MCAN_TXBTIE_TIE18 Transmission Interrupt Enable for Buffer 18 **/
#define MCAN0_MCAN_TXBTIE_TIE18		(1 << 18)
/** MCAN0_MCAN_TXBTIE_TIE17 Transmission Interrupt Enable for Buffer 17 **/
#define MCAN0_MCAN_TXBTIE_TIE17		(1 << 17)
/** MCAN0_MCAN_TXBTIE_TIE16 Transmission Interrupt Enable for Buffer 16 **/
#define MCAN0_MCAN_TXBTIE_TIE16		(1 << 16)
/** MCAN0_MCAN_TXBTIE_TIE15 Transmission Interrupt Enable for Buffer 15 **/
#define MCAN0_MCAN_TXBTIE_TIE15		(1 << 15)
/** MCAN0_MCAN_TXBTIE_TIE14 Transmission Interrupt Enable for Buffer 14 **/
#define MCAN0_MCAN_TXBTIE_TIE14		(1 << 14)
/** MCAN0_MCAN_TXBTIE_TIE13 Transmission Interrupt Enable for Buffer 13 **/
#define MCAN0_MCAN_TXBTIE_TIE13		(1 << 13)
/** MCAN0_MCAN_TXBTIE_TIE12 Transmission Interrupt Enable for Buffer 12 **/
#define MCAN0_MCAN_TXBTIE_TIE12		(1 << 12)
/** MCAN0_MCAN_TXBTIE_TIE11 Transmission Interrupt Enable for Buffer 11 **/
#define MCAN0_MCAN_TXBTIE_TIE11		(1 << 11)
/** MCAN0_MCAN_TXBTIE_TIE10 Transmission Interrupt Enable for Buffer 10 **/
#define MCAN0_MCAN_TXBTIE_TIE10		(1 << 10)
/** MCAN0_MCAN_TXBTIE_TIE9 Transmission Interrupt Enable for Buffer 9 **/
#define MCAN0_MCAN_TXBTIE_TIE9		(1 << 9)
/** MCAN0_MCAN_TXBTIE_TIE8 Transmission Interrupt Enable for Buffer 8 **/
#define MCAN0_MCAN_TXBTIE_TIE8		(1 << 8)
/** MCAN0_MCAN_TXBTIE_TIE7 Transmission Interrupt Enable for Buffer 7 **/
#define MCAN0_MCAN_TXBTIE_TIE7		(1 << 7)
/** MCAN0_MCAN_TXBTIE_TIE6 Transmission Interrupt Enable for Buffer 6 **/
#define MCAN0_MCAN_TXBTIE_TIE6		(1 << 6)
/** MCAN0_MCAN_TXBTIE_TIE5 Transmission Interrupt Enable for Buffer 5 **/
#define MCAN0_MCAN_TXBTIE_TIE5		(1 << 5)
/** MCAN0_MCAN_TXBTIE_TIE4 Transmission Interrupt Enable for Buffer 4 **/
#define MCAN0_MCAN_TXBTIE_TIE4		(1 << 4)
/** MCAN0_MCAN_TXBTIE_TIE3 Transmission Interrupt Enable for Buffer 3 **/
#define MCAN0_MCAN_TXBTIE_TIE3		(1 << 3)
/** MCAN0_MCAN_TXBTIE_TIE2 Transmission Interrupt Enable for Buffer 2 **/
#define MCAN0_MCAN_TXBTIE_TIE2		(1 << 2)
/** MCAN0_MCAN_TXBTIE_TIE1 Transmission Interrupt Enable for Buffer 1 **/
#define MCAN0_MCAN_TXBTIE_TIE1		(1 << 1)
/** MCAN0_MCAN_TXBTIE_TIE0 Transmission Interrupt Enable for Buffer 0 **/
#define MCAN0_MCAN_TXBTIE_TIE0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txbcie MCANTXBCIE Transmit Buffer Cancellation Finished Interrupt Enable Register
@{*/

/** MCAN0_MCAN_TXBCIE_CFIE31 Cancellation Finished Interrupt Enable for Transmit Buffer 31 **/
#define MCAN0_MCAN_TXBCIE_CFIE31		(1 << 31)
/** MCAN0_MCAN_TXBCIE_CFIE30 Cancellation Finished Interrupt Enable for Transmit Buffer 30 **/
#define MCAN0_MCAN_TXBCIE_CFIE30		(1 << 30)
/** MCAN0_MCAN_TXBCIE_CFIE29 Cancellation Finished Interrupt Enable for Transmit Buffer 29 **/
#define MCAN0_MCAN_TXBCIE_CFIE29		(1 << 29)
/** MCAN0_MCAN_TXBCIE_CFIE28 Cancellation Finished Interrupt Enable for Transmit Buffer 28 **/
#define MCAN0_MCAN_TXBCIE_CFIE28		(1 << 28)
/** MCAN0_MCAN_TXBCIE_CFIE27 Cancellation Finished Interrupt Enable for Transmit Buffer 27 **/
#define MCAN0_MCAN_TXBCIE_CFIE27		(1 << 27)
/** MCAN0_MCAN_TXBCIE_CFIE26 Cancellation Finished Interrupt Enable for Transmit Buffer 26 **/
#define MCAN0_MCAN_TXBCIE_CFIE26		(1 << 26)
/** MCAN0_MCAN_TXBCIE_CFIE25 Cancellation Finished Interrupt Enable for Transmit Buffer 25 **/
#define MCAN0_MCAN_TXBCIE_CFIE25		(1 << 25)
/** MCAN0_MCAN_TXBCIE_CFIE24 Cancellation Finished Interrupt Enable for Transmit Buffer 24 **/
#define MCAN0_MCAN_TXBCIE_CFIE24		(1 << 24)
/** MCAN0_MCAN_TXBCIE_CFIE23 Cancellation Finished Interrupt Enable for Transmit Buffer 23 **/
#define MCAN0_MCAN_TXBCIE_CFIE23		(1 << 23)
/** MCAN0_MCAN_TXBCIE_CFIE22 Cancellation Finished Interrupt Enable for Transmit Buffer 22 **/
#define MCAN0_MCAN_TXBCIE_CFIE22		(1 << 22)
/** MCAN0_MCAN_TXBCIE_CFIE21 Cancellation Finished Interrupt Enable for Transmit Buffer 21 **/
#define MCAN0_MCAN_TXBCIE_CFIE21		(1 << 21)
/** MCAN0_MCAN_TXBCIE_CFIE20 Cancellation Finished Interrupt Enable for Transmit Buffer 20 **/
#define MCAN0_MCAN_TXBCIE_CFIE20		(1 << 20)
/** MCAN0_MCAN_TXBCIE_CFIE19 Cancellation Finished Interrupt Enable for Transmit Buffer 19 **/
#define MCAN0_MCAN_TXBCIE_CFIE19		(1 << 19)
/** MCAN0_MCAN_TXBCIE_CFIE18 Cancellation Finished Interrupt Enable for Transmit Buffer 18 **/
#define MCAN0_MCAN_TXBCIE_CFIE18		(1 << 18)
/** MCAN0_MCAN_TXBCIE_CFIE17 Cancellation Finished Interrupt Enable for Transmit Buffer 17 **/
#define MCAN0_MCAN_TXBCIE_CFIE17		(1 << 17)
/** MCAN0_MCAN_TXBCIE_CFIE16 Cancellation Finished Interrupt Enable for Transmit Buffer 16 **/
#define MCAN0_MCAN_TXBCIE_CFIE16		(1 << 16)
/** MCAN0_MCAN_TXBCIE_CFIE15 Cancellation Finished Interrupt Enable for Transmit Buffer 15 **/
#define MCAN0_MCAN_TXBCIE_CFIE15		(1 << 15)
/** MCAN0_MCAN_TXBCIE_CFIE14 Cancellation Finished Interrupt Enable for Transmit Buffer 14 **/
#define MCAN0_MCAN_TXBCIE_CFIE14		(1 << 14)
/** MCAN0_MCAN_TXBCIE_CFIE13 Cancellation Finished Interrupt Enable for Transmit Buffer 13 **/
#define MCAN0_MCAN_TXBCIE_CFIE13		(1 << 13)
/** MCAN0_MCAN_TXBCIE_CFIE12 Cancellation Finished Interrupt Enable for Transmit Buffer 12 **/
#define MCAN0_MCAN_TXBCIE_CFIE12		(1 << 12)
/** MCAN0_MCAN_TXBCIE_CFIE11 Cancellation Finished Interrupt Enable for Transmit Buffer 11 **/
#define MCAN0_MCAN_TXBCIE_CFIE11		(1 << 11)
/** MCAN0_MCAN_TXBCIE_CFIE10 Cancellation Finished Interrupt Enable for Transmit Buffer 10 **/
#define MCAN0_MCAN_TXBCIE_CFIE10		(1 << 10)
/** MCAN0_MCAN_TXBCIE_CFIE9 Cancellation Finished Interrupt Enable for Transmit Buffer 9 **/
#define MCAN0_MCAN_TXBCIE_CFIE9		(1 << 9)
/** MCAN0_MCAN_TXBCIE_CFIE8 Cancellation Finished Interrupt Enable for Transmit Buffer 8 **/
#define MCAN0_MCAN_TXBCIE_CFIE8		(1 << 8)
/** MCAN0_MCAN_TXBCIE_CFIE7 Cancellation Finished Interrupt Enable for Transmit Buffer 7 **/
#define MCAN0_MCAN_TXBCIE_CFIE7		(1 << 7)
/** MCAN0_MCAN_TXBCIE_CFIE6 Cancellation Finished Interrupt Enable for Transmit Buffer 6 **/
#define MCAN0_MCAN_TXBCIE_CFIE6		(1 << 6)
/** MCAN0_MCAN_TXBCIE_CFIE5 Cancellation Finished Interrupt Enable for Transmit Buffer 5 **/
#define MCAN0_MCAN_TXBCIE_CFIE5		(1 << 5)
/** MCAN0_MCAN_TXBCIE_CFIE4 Cancellation Finished Interrupt Enable for Transmit Buffer 4 **/
#define MCAN0_MCAN_TXBCIE_CFIE4		(1 << 4)
/** MCAN0_MCAN_TXBCIE_CFIE3 Cancellation Finished Interrupt Enable for Transmit Buffer 3 **/
#define MCAN0_MCAN_TXBCIE_CFIE3		(1 << 3)
/** MCAN0_MCAN_TXBCIE_CFIE2 Cancellation Finished Interrupt Enable for Transmit Buffer 2 **/
#define MCAN0_MCAN_TXBCIE_CFIE2		(1 << 2)
/** MCAN0_MCAN_TXBCIE_CFIE1 Cancellation Finished Interrupt Enable for Transmit Buffer 1 **/
#define MCAN0_MCAN_TXBCIE_CFIE1		(1 << 1)
/** MCAN0_MCAN_TXBCIE_CFIE0 Cancellation Finished Interrupt Enable for Transmit Buffer 0 **/
#define MCAN0_MCAN_TXBCIE_CFIE0		(1 << 0)

/**@}*/

/** @defgroup mcan0_mcan_txefc MCANTXEFC Transmit Event FIFO Configuration Register
@{*/


#define MCAN0_MCAN_TXEFC_EFWM_SHIFT		24
#define MCAN0_MCAN_TXEFC_EFWM_MASK		0x3f
/** @defgroup mcan0_mcan_txefc_efwm EFWM Event FIFO Watermark
@{*/
/**@}*/


#define MCAN0_MCAN_TXEFC_EFS_SHIFT		16
#define MCAN0_MCAN_TXEFC_EFS_MASK		0x3f
/** @defgroup mcan0_mcan_txefc_efs EFS Event FIFO Size
@{*/
/**@}*/


#define MCAN0_MCAN_TXEFC_EFSA_SHIFT		2
#define MCAN0_MCAN_TXEFC_EFSA_MASK		0x3fff
/** @defgroup mcan0_mcan_txefc_efsa EFSA Event FIFO Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txefs MCANTXEFS Transmit Event FIFO Status Register
@{*/

/** MCAN0_MCAN_TXEFS_TEFL Tx Event FIFO Element Lost **/
#define MCAN0_MCAN_TXEFS_TEFL		(1 << 25)
/** MCAN0_MCAN_TXEFS_EFF Event FIFO Full **/
#define MCAN0_MCAN_TXEFS_EFF		(1 << 24)

#define MCAN0_MCAN_TXEFS_EFPI_SHIFT		16
#define MCAN0_MCAN_TXEFS_EFPI_MASK		0x1f
/** @defgroup mcan0_mcan_txefs_efpi EFPI Event FIFO Put Index
@{*/
/**@}*/


#define MCAN0_MCAN_TXEFS_EFGI_SHIFT		8
#define MCAN0_MCAN_TXEFS_EFGI_MASK		0x1f
/** @defgroup mcan0_mcan_txefs_efgi EFGI Event FIFO Get Index
@{*/
/**@}*/


#define MCAN0_MCAN_TXEFS_EFFL_SHIFT		0
#define MCAN0_MCAN_TXEFS_EFFL_MASK		0x3f
/** @defgroup mcan0_mcan_txefs_effl EFFL Event FIFO Fill Level
@{*/
/**@}*/


/**@}*/

/** @defgroup mcan0_mcan_txefa MCANTXEFA Transmit Event FIFO Acknowledge Register
@{*/


#define MCAN0_MCAN_TXEFA_EFAI_SHIFT		0
#define MCAN0_MCAN_TXEFA_EFAI_MASK		0x1f
/** @defgroup mcan0_mcan_txefa_efai EFAI Event FIFO Acknowledge Index
@{*/
/**@}*/


/**@}*/

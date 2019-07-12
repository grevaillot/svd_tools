#pragma once 

/* --- CEC: HDMI-CEC controller ------------------------------------- */

/** @defgroup cec_registers HDMI-CEC controller Register
@{*/

/** CEC_CR control register **/
#define CEC_CR			MMIO32(CEC_BASE + 0x00)
/** CEC_CFGR configuration register **/
#define CEC_CFGR			MMIO32(CEC_BASE + 0x04)
/** CEC_TXDR Tx data register **/
#define CEC_TXDR			MMIO32(CEC_BASE + 0x08)
/** CEC_RXDR Rx Data Register **/
#define CEC_RXDR			MMIO32(CEC_BASE + 0x0c)
/** CEC_ISR Interrupt and Status Register **/
#define CEC_ISR			MMIO32(CEC_BASE + 0x10)
/** CEC_IER interrupt enable register **/
#define CEC_IER			MMIO32(CEC_BASE + 0x14)

/**@}*/


/** @defgroup cec_cr CR control register
@{*/

/** CEC_CR_TXEOM Tx End Of Message **/
#define CEC_CR_TXEOM		(1 << 2)
/** CEC_CR_TXSOM Tx start of message **/
#define CEC_CR_TXSOM		(1 << 1)
/** CEC_CR_CECEN CEC Enable **/
#define CEC_CR_CECEN		(1 << 0)

/**@}*/

/** @defgroup cec_cfgr CFGR configuration register
@{*/

/** CEC_CFGR_LBPEGEN Generate Error-Bit on Long Bit Period Error **/
#define CEC_CFGR_LBPEGEN		(1 << 11)
/** CEC_CFGR_BREGEN Generate error-bit on bit rising error **/
#define CEC_CFGR_BREGEN		(1 << 10)
/** CEC_CFGR_BRESTP Rx-stop on bit rising error **/
#define CEC_CFGR_BRESTP		(1 << 9)
/** CEC_CFGR_RXTOL Rx-Tolerance **/
#define CEC_CFGR_RXTOL		(1 << 8)

#define CEC_CFGR_SFT_SHIFT		5
#define CEC_CFGR_SFT_MASK		0x07
/** @defgroup cec_cfgr_sft SFT Signal Free Time
@{*/
/**@}*/

/** CEC_CFGR_LSTN Listen mode **/
#define CEC_CFGR_LSTN		(1 << 4)

#define CEC_CFGR_OAR_SHIFT		0
#define CEC_CFGR_OAR_MASK		0x0f
/** @defgroup cec_cfgr_oar OAR Own Address
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_txdr TXDR Tx data register
@{*/


#define CEC_TXDR_TXD_SHIFT		0
#define CEC_TXDR_TXD_MASK		0xff
/** @defgroup cec_txdr_txd TXD Tx Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_rxdr RXDR Rx Data Register
@{*/


#define CEC_RXDR_RXDR_SHIFT		0
#define CEC_RXDR_RXDR_MASK		0xff
/** @defgroup cec_rxdr_rxdr RXDR CEC Rx Data Register
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_isr ISR Interrupt and Status Register
@{*/

/** CEC_ISR_TXACKE Tx-Missing acknowledge error **/
#define CEC_ISR_TXACKE		(1 << 12)
/** CEC_ISR_TXERR Tx-Error **/
#define CEC_ISR_TXERR		(1 << 11)
/** CEC_ISR_TXUDR Tx-Buffer Underrun **/
#define CEC_ISR_TXUDR		(1 << 10)
/** CEC_ISR_TXEND End of Transmission **/
#define CEC_ISR_TXEND		(1 << 9)
/** CEC_ISR_TXBR Tx-Byte Request **/
#define CEC_ISR_TXBR		(1 << 8)
/** CEC_ISR_ARBLST Arbitration Lost **/
#define CEC_ISR_ARBLST		(1 << 7)
/** CEC_ISR_RXACKE Rx-Missing Acknowledge **/
#define CEC_ISR_RXACKE		(1 << 6)
/** CEC_ISR_LBPE Rx-Long Bit Period Error **/
#define CEC_ISR_LBPE		(1 << 5)
/** CEC_ISR_SBPE Rx-Short Bit period error **/
#define CEC_ISR_SBPE		(1 << 4)
/** CEC_ISR_BRE Rx-Bit rising error **/
#define CEC_ISR_BRE		(1 << 3)
/** CEC_ISR_RXOVR Rx-Overrun **/
#define CEC_ISR_RXOVR		(1 << 2)
/** CEC_ISR_RXEND End Of Reception **/
#define CEC_ISR_RXEND		(1 << 1)
/** CEC_ISR_RXBR Rx-Byte Received **/
#define CEC_ISR_RXBR		(1 << 0)

/**@}*/

/** @defgroup cec_ier IER interrupt enable register
@{*/

/** CEC_IER_TXACKIE Tx-Missing Acknowledge Error Interrupt Enable **/
#define CEC_IER_TXACKIE		(1 << 12)
/** CEC_IER_TXERRIE Tx-Error Interrupt Enable **/
#define CEC_IER_TXERRIE		(1 << 11)
/** CEC_IER_TXUDRIE Tx-Underrun interrupt enable **/
#define CEC_IER_TXUDRIE		(1 << 10)
/** CEC_IER_TXENDIE Tx-End of message interrupt enable **/
#define CEC_IER_TXENDIE		(1 << 9)
/** CEC_IER_TXBRIE Tx-Byte Request Interrupt Enable **/
#define CEC_IER_TXBRIE		(1 << 8)
/** CEC_IER_ARBLSTIE Arbitration Lost Interrupt Enable **/
#define CEC_IER_ARBLSTIE		(1 << 7)
/** CEC_IER_RXACKIE Rx-Missing Acknowledge Error Interrupt Enable **/
#define CEC_IER_RXACKIE		(1 << 6)
/** CEC_IER_LBPEIE Long Bit Period Error Interrupt Enable **/
#define CEC_IER_LBPEIE		(1 << 5)
/** CEC_IER_SBPEIE Short Bit Period Error Interrupt Enable **/
#define CEC_IER_SBPEIE		(1 << 4)
/** CEC_IER_BREIE Bit Rising Error Interrupt Enable **/
#define CEC_IER_BREIE		(1 << 3)
/** CEC_IER_RXOVRIE Rx-Buffer Overrun Interrupt Enable **/
#define CEC_IER_RXOVRIE		(1 << 2)
/** CEC_IER_RXENDIE End Of Reception Interrupt Enable **/
#define CEC_IER_RXENDIE		(1 << 1)
/** CEC_IER_RXBRIE Rx-Byte Received Interrupt Enable **/
#define CEC_IER_RXBRIE		(1 << 0)

/**@}*/

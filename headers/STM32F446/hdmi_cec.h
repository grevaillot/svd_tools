#pragma once 

/* --- HDMI_CEC: HDMI-CEC controller -------------------------------- */

/** @defgroup hdmi_cec_registers HDMI-CEC controller Register
@{*/

/** HDMI_CEC_CEC_CR CEC control register **/
#define HDMI_CEC_CEC_CR			MMIO32(HDMI_CEC_BASE + 0x00)
/** HDMI_CEC_CEC_CFGR CEC configuration register **/
#define HDMI_CEC_CEC_CFGR			MMIO32(HDMI_CEC_BASE + 0x04)
/** HDMI_CEC_CEC_TXDR CEC Tx data register **/
#define HDMI_CEC_CEC_TXDR			MMIO32(HDMI_CEC_BASE + 0x08)
/** HDMI_CEC_CEC_RXDR CEC Rx Data Register **/
#define HDMI_CEC_CEC_RXDR			MMIO32(HDMI_CEC_BASE + 0x0c)
/** HDMI_CEC_CEC_ISR CEC Interrupt and Status Register **/
#define HDMI_CEC_CEC_ISR			MMIO32(HDMI_CEC_BASE + 0x10)
/** HDMI_CEC_CEC_IER CEC interrupt enable register **/
#define HDMI_CEC_CEC_IER			MMIO32(HDMI_CEC_BASE + 0x14)

/**@}*/


/** @defgroup hdmi_cec_cec_cr CECCR CEC control register
@{*/

/** HDMI_CEC_CEC_CR_TXEOM Tx End Of Message **/
#define HDMI_CEC_CEC_CR_TXEOM		(1 << 2)
/** HDMI_CEC_CEC_CR_TXSOM Tx Start Of Message **/
#define HDMI_CEC_CEC_CR_TXSOM		(1 << 1)
/** HDMI_CEC_CEC_CR_CECEN CEC Enable **/
#define HDMI_CEC_CEC_CR_CECEN		(1 << 0)

/**@}*/

/** @defgroup hdmi_cec_cec_cfgr CECCFGR CEC configuration register
@{*/

/** HDMI_CEC_CEC_CFGR_LSTN Listen mode **/
#define HDMI_CEC_CEC_CFGR_LSTN		(1 << 31)

#define HDMI_CEC_CEC_CFGR_OAR_SHIFT		16
#define HDMI_CEC_CEC_CFGR_OAR_MASK		0x7fff
/** @defgroup hdmi_cec_cec_cfgr_oar OAR Own addresses configuration
@{*/
/**@}*/

/** HDMI_CEC_CEC_CFGR_SFTOP SFT Option Bit **/
#define HDMI_CEC_CEC_CFGR_SFTOP		(1 << 8)
/** HDMI_CEC_CEC_CFGR_BRDNOGEN Avoid Error-Bit Generation in Broadcast **/
#define HDMI_CEC_CEC_CFGR_BRDNOGEN		(1 << 7)
/** HDMI_CEC_CEC_CFGR_LBPEGEN Generate Error-Bit on Long Bit Period Error **/
#define HDMI_CEC_CEC_CFGR_LBPEGEN		(1 << 6)
/** HDMI_CEC_CEC_CFGR_BREGEN Generate Error-Bit on Bit Rising Error **/
#define HDMI_CEC_CEC_CFGR_BREGEN		(1 << 5)
/** HDMI_CEC_CEC_CFGR_BRESTP Rx-Stop on Bit Rising Error **/
#define HDMI_CEC_CEC_CFGR_BRESTP		(1 << 4)
/** HDMI_CEC_CEC_CFGR_RXTOL Rx-Tolerance **/
#define HDMI_CEC_CEC_CFGR_RXTOL		(1 << 3)

#define HDMI_CEC_CEC_CFGR_SFT_SHIFT		0
#define HDMI_CEC_CEC_CFGR_SFT_MASK		0x07
/** @defgroup hdmi_cec_cec_cfgr_sft SFT Signal Free Time
@{*/
/**@}*/


/**@}*/

/** @defgroup hdmi_cec_cec_txdr CECTXDR CEC Tx data register
@{*/


#define HDMI_CEC_CEC_TXDR_TXD_SHIFT		0
#define HDMI_CEC_CEC_TXDR_TXD_MASK		0xff
/** @defgroup hdmi_cec_cec_txdr_txd TXD Tx Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup hdmi_cec_cec_rxdr CECRXDR CEC Rx Data Register
@{*/


#define HDMI_CEC_CEC_RXDR_RXD_SHIFT		0
#define HDMI_CEC_CEC_RXDR_RXD_MASK		0xff
/** @defgroup hdmi_cec_cec_rxdr_rxd RXD Rx Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup hdmi_cec_cec_isr CECISR CEC Interrupt and Status Register
@{*/

/** HDMI_CEC_CEC_ISR_TXACKE Tx-Missing Acknowledge Error **/
#define HDMI_CEC_CEC_ISR_TXACKE		(1 << 12)
/** HDMI_CEC_CEC_ISR_TXERR Tx-Error **/
#define HDMI_CEC_CEC_ISR_TXERR		(1 << 11)
/** HDMI_CEC_CEC_ISR_TXUDR Tx-Buffer Underrun **/
#define HDMI_CEC_CEC_ISR_TXUDR		(1 << 10)
/** HDMI_CEC_CEC_ISR_TXEND End of Transmission **/
#define HDMI_CEC_CEC_ISR_TXEND		(1 << 9)
/** HDMI_CEC_CEC_ISR_TXBR Tx-Byte Request **/
#define HDMI_CEC_CEC_ISR_TXBR		(1 << 8)
/** HDMI_CEC_CEC_ISR_ARBLST Arbitration Lost **/
#define HDMI_CEC_CEC_ISR_ARBLST		(1 << 7)
/** HDMI_CEC_CEC_ISR_RXACKE Rx-Missing Acknowledge **/
#define HDMI_CEC_CEC_ISR_RXACKE		(1 << 6)
/** HDMI_CEC_CEC_ISR_LBPE Rx-Long Bit Period Error **/
#define HDMI_CEC_CEC_ISR_LBPE		(1 << 5)
/** HDMI_CEC_CEC_ISR_SBPE Rx-Short Bit Period Error **/
#define HDMI_CEC_CEC_ISR_SBPE		(1 << 4)
/** HDMI_CEC_CEC_ISR_BRE Rx-Bit Rising Error **/
#define HDMI_CEC_CEC_ISR_BRE		(1 << 3)
/** HDMI_CEC_CEC_ISR_RXOVR Rx-Overrun **/
#define HDMI_CEC_CEC_ISR_RXOVR		(1 << 2)
/** HDMI_CEC_CEC_ISR_RXEND End Of Reception **/
#define HDMI_CEC_CEC_ISR_RXEND		(1 << 1)
/** HDMI_CEC_CEC_ISR_RXBR Rx-Byte Received **/
#define HDMI_CEC_CEC_ISR_RXBR		(1 << 0)

/**@}*/

/** @defgroup hdmi_cec_cec_ier CECIER CEC interrupt enable register
@{*/

/** HDMI_CEC_CEC_IER_TXACKIE Tx-Missing Acknowledge Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_TXACKIE		(1 << 12)
/** HDMI_CEC_CEC_IER_TXERRIE Tx-Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_TXERRIE		(1 << 11)
/** HDMI_CEC_CEC_IER_TXUDRIE Tx-Underrun Interrupt Enable **/
#define HDMI_CEC_CEC_IER_TXUDRIE		(1 << 10)
/** HDMI_CEC_CEC_IER_TXENDIE Tx-End Of Message Interrupt Enable **/
#define HDMI_CEC_CEC_IER_TXENDIE		(1 << 9)
/** HDMI_CEC_CEC_IER_TXBRIE Tx-Byte Request Interrupt Enable **/
#define HDMI_CEC_CEC_IER_TXBRIE		(1 << 8)
/** HDMI_CEC_CEC_IER_ARBLSTIE Arbitration Lost Interrupt Enable **/
#define HDMI_CEC_CEC_IER_ARBLSTIE		(1 << 7)
/** HDMI_CEC_CEC_IER_RXACKIE Rx-Missing Acknowledge Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_RXACKIE		(1 << 6)
/** HDMI_CEC_CEC_IER_LBPEIE Long Bit Period Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_LBPEIE		(1 << 5)
/** HDMI_CEC_CEC_IER_SBPEIE Short Bit Period Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_SBPEIE		(1 << 4)
/** HDMI_CEC_CEC_IER_BREIE Bit Rising Error Interrupt Enable **/
#define HDMI_CEC_CEC_IER_BREIE		(1 << 3)
/** HDMI_CEC_CEC_IER_RXOVRIE Rx-Buffer Overrun Interrupt Enable **/
#define HDMI_CEC_CEC_IER_RXOVRIE		(1 << 2)
/** HDMI_CEC_CEC_IER_RXENDIE End Of Reception Interrupt Enable **/
#define HDMI_CEC_CEC_IER_RXENDIE		(1 << 1)
/** HDMI_CEC_CEC_IER_RXBRIE Rx-Byte Received Interrupt Enable **/
#define HDMI_CEC_CEC_IER_RXBRIE		(1 << 0)

/**@}*/

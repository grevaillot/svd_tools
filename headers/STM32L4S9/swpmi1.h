#pragma once 

/* --- SWPMI1: Single Wire Protocol Master Interface ---------------- */

/** @defgroup swpmi1_registers Single Wire Protocol Master
      Interface Register
@{*/

/** SWPMI1_CR SWPMI Configuration/Control register **/
#define SWPMI1_CR			MMIO32(SWPMI1_BASE + 0x00)
/** SWPMI1_BRR SWPMI Bitrate register **/
#define SWPMI1_BRR			MMIO32(SWPMI1_BASE + 0x04)
/** SWPMI1_ISR SWPMI Interrupt and Status register **/
#define SWPMI1_ISR			MMIO32(SWPMI1_BASE + 0x0c)
/** SWPMI1_ICR SWPMI Interrupt Flag Clear register **/
#define SWPMI1_ICR			MMIO32(SWPMI1_BASE + 0x10)
/** SWPMI1_IER SWPMI Interrupt Enable register **/
#define SWPMI1_IER			MMIO32(SWPMI1_BASE + 0x14)
/** SWPMI1_RFL SWPMI Receive Frame Length register **/
#define SWPMI1_RFL			MMIO32(SWPMI1_BASE + 0x18)
/** SWPMI1_TDR SWPMI Transmit data register **/
#define SWPMI1_TDR			MMIO32(SWPMI1_BASE + 0x1c)
/** SWPMI1_RDR SWPMI Receive data register **/
#define SWPMI1_RDR			MMIO32(SWPMI1_BASE + 0x20)

/**@}*/


/** @defgroup swpmi1_cr CR SWPMI Configuration/Control register
@{*/

/** SWPMI1_CR_DEACT Single wire protocol master interface deactivate **/
#define SWPMI1_CR_DEACT		(1 << 10)
/** SWPMI1_CR_SWPME Single wire protocol master interface enable **/
#define SWPMI1_CR_SWPME		(1 << 5)
/** SWPMI1_CR_LPBK Loopback mode enable **/
#define SWPMI1_CR_LPBK		(1 << 4)
/** SWPMI1_CR_TXMODE Transmission buffering mode **/
#define SWPMI1_CR_TXMODE		(1 << 3)
/** SWPMI1_CR_RXMODE Reception buffering mode **/
#define SWPMI1_CR_RXMODE		(1 << 2)
/** SWPMI1_CR_TXDMA Transmission DMA enable **/
#define SWPMI1_CR_TXDMA		(1 << 1)
/** SWPMI1_CR_RXDMA Reception DMA enable **/
#define SWPMI1_CR_RXDMA		(1 << 0)

/**@}*/

/** @defgroup swpmi1_brr BRR SWPMI Bitrate register
@{*/


#define SWPMI1_BRR_BR_SHIFT		0
#define SWPMI1_BRR_BR_MASK		0x3f
/** @defgroup swpmi1_brr_br BR Bitrate prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi1_isr ISR SWPMI Interrupt and Status register
@{*/

/** SWPMI1_ISR_DEACTF DEACTIVATED flag **/
#define SWPMI1_ISR_DEACTF		(1 << 10)
/** SWPMI1_ISR_SUSP SUSPEND flag **/
#define SWPMI1_ISR_SUSP		(1 << 9)
/** SWPMI1_ISR_SRF Slave resume flag **/
#define SWPMI1_ISR_SRF		(1 << 8)
/** SWPMI1_ISR_TCF Transfer complete flag **/
#define SWPMI1_ISR_TCF		(1 << 7)
/** SWPMI1_ISR_TXE Transmit data register empty **/
#define SWPMI1_ISR_TXE		(1 << 6)
/** SWPMI1_ISR_RXNE Receive data register not empty **/
#define SWPMI1_ISR_RXNE		(1 << 5)
/** SWPMI1_ISR_TXUNRF Transmit underrun error flag **/
#define SWPMI1_ISR_TXUNRF		(1 << 4)
/** SWPMI1_ISR_RXOVRF Receive overrun error flag **/
#define SWPMI1_ISR_RXOVRF		(1 << 3)
/** SWPMI1_ISR_RXBERF Receive CRC error flag **/
#define SWPMI1_ISR_RXBERF		(1 << 2)
/** SWPMI1_ISR_TXBEF Transmit buffer empty flag **/
#define SWPMI1_ISR_TXBEF		(1 << 1)
/** SWPMI1_ISR_RXBFF Receive buffer full flag **/
#define SWPMI1_ISR_RXBFF		(1 << 0)

/**@}*/

/** @defgroup swpmi1_icr ICR SWPMI Interrupt Flag Clear register
@{*/

/** SWPMI1_ICR_CSRF Clear slave resume flag **/
#define SWPMI1_ICR_CSRF		(1 << 8)
/** SWPMI1_ICR_CTCF Clear transfer complete flag **/
#define SWPMI1_ICR_CTCF		(1 << 7)
/** SWPMI1_ICR_CTXUNRF Clear transmit underrun error flag **/
#define SWPMI1_ICR_CTXUNRF		(1 << 4)
/** SWPMI1_ICR_CRXOVRF Clear receive overrun error flag **/
#define SWPMI1_ICR_CRXOVRF		(1 << 3)
/** SWPMI1_ICR_CRXBERF Clear receive CRC error flag **/
#define SWPMI1_ICR_CRXBERF		(1 << 2)
/** SWPMI1_ICR_CTXBEF Clear transmit buffer empty flag **/
#define SWPMI1_ICR_CTXBEF		(1 << 1)
/** SWPMI1_ICR_CRXBFF Clear receive buffer full flag **/
#define SWPMI1_ICR_CRXBFF		(1 << 0)

/**@}*/

/** @defgroup swpmi1_ier IER SWPMI Interrupt Enable register
@{*/

/** SWPMI1_IER_SRIE Slave resume interrupt enable **/
#define SWPMI1_IER_SRIE		(1 << 8)
/** SWPMI1_IER_TCIE Transmit complete interrupt enable **/
#define SWPMI1_IER_TCIE		(1 << 7)
/** SWPMI1_IER_TIE Transmit interrupt enable **/
#define SWPMI1_IER_TIE		(1 << 6)
/** SWPMI1_IER_RIE Receive interrupt enable **/
#define SWPMI1_IER_RIE		(1 << 5)
/** SWPMI1_IER_TXUNRIE Transmit underrun error interrupt enable **/
#define SWPMI1_IER_TXUNRIE		(1 << 4)
/** SWPMI1_IER_RXOVRIE Receive overrun error interrupt enable **/
#define SWPMI1_IER_RXOVRIE		(1 << 3)
/** SWPMI1_IER_RXBERIE Receive CRC error interrupt enable **/
#define SWPMI1_IER_RXBERIE		(1 << 2)
/** SWPMI1_IER_TXBEIE Transmit buffer empty interrupt enable **/
#define SWPMI1_IER_TXBEIE		(1 << 1)
/** SWPMI1_IER_RXBFIE Receive buffer full interrupt enable **/
#define SWPMI1_IER_RXBFIE		(1 << 0)

/**@}*/

/** @defgroup swpmi1_rfl RFL SWPMI Receive Frame Length register
@{*/


#define SWPMI1_RFL_RFL_SHIFT		0
#define SWPMI1_RFL_RFL_MASK		0x1f
/** @defgroup swpmi1_rfl_rfl RFL Receive frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi1_tdr TDR SWPMI Transmit data register
@{*/


#define SWPMI1_TDR_TD_SHIFT		0
#define SWPMI1_TDR_TD_MASK		0xffffffff
/** @defgroup swpmi1_tdr_td TD Transmit data
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi1_rdr RDR SWPMI Receive data register
@{*/


#define SWPMI1_RDR_RD_SHIFT		0
#define SWPMI1_RDR_RD_MASK		0xffffffff
/** @defgroup swpmi1_rdr_rd RD received data
@{*/
/**@}*/


/**@}*/

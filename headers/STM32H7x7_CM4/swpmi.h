#pragma once 

/* --- SWPMI: Single Wire Protocol Master Interface ----------------- */

/** @defgroup swpmi_registers Single Wire Protocol Master
      Interface Register
@{*/

/** SWPMI_CR SWPMI Configuration/Control register **/
#define SWPMI_CR			MMIO32(SWPMI_BASE + 0x00)
/** SWPMI_BRR SWPMI Bitrate register **/
#define SWPMI_BRR			MMIO32(SWPMI_BASE + 0x04)
/** SWPMI_ISR SWPMI Interrupt and Status register **/
#define SWPMI_ISR			MMIO32(SWPMI_BASE + 0x0c)
/** SWPMI_ICR SWPMI Interrupt Flag Clear register **/
#define SWPMI_ICR			MMIO32(SWPMI_BASE + 0x10)
/** SWPMI_IER SWPMI Interrupt Enable register **/
#define SWPMI_IER			MMIO32(SWPMI_BASE + 0x14)
/** SWPMI_RFL SWPMI Receive Frame Length register **/
#define SWPMI_RFL			MMIO32(SWPMI_BASE + 0x18)
/** SWPMI_TDR SWPMI Transmit data register **/
#define SWPMI_TDR			MMIO32(SWPMI_BASE + 0x1c)
/** SWPMI_RDR SWPMI Receive data register **/
#define SWPMI_RDR			MMIO32(SWPMI_BASE + 0x20)
/** SWPMI_OR SWPMI Option register **/
#define SWPMI_OR			MMIO32(SWPMI_BASE + 0x24)

/**@}*/


/** @defgroup swpmi_cr CR SWPMI Configuration/Control register
@{*/

/** SWPMI_CR_SWPTEN Single wire protocol master transceiver enable **/
#define SWPMI_CR_SWPTEN		(1 << 11)
/** SWPMI_CR_DEACT Single wire protocol master interface deactivate **/
#define SWPMI_CR_DEACT		(1 << 10)
/** SWPMI_CR_SWPACT Single wire protocol master interface activate **/
#define SWPMI_CR_SWPACT		(1 << 5)
/** SWPMI_CR_LPBK Loopback mode enable **/
#define SWPMI_CR_LPBK		(1 << 4)
/** SWPMI_CR_TXMODE Transmission buffering mode **/
#define SWPMI_CR_TXMODE		(1 << 3)
/** SWPMI_CR_RXMODE Reception buffering mode **/
#define SWPMI_CR_RXMODE		(1 << 2)
/** SWPMI_CR_TXDMA Transmission DMA enable **/
#define SWPMI_CR_TXDMA		(1 << 1)
/** SWPMI_CR_RXDMA Reception DMA enable **/
#define SWPMI_CR_RXDMA		(1 << 0)

/**@}*/

/** @defgroup swpmi_brr BRR SWPMI Bitrate register
@{*/


#define SWPMI_BRR_BR_SHIFT		0
#define SWPMI_BRR_BR_MASK		0xff
/** @defgroup swpmi_brr_br BR Bitrate prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi_isr ISR SWPMI Interrupt and Status register
@{*/

/** SWPMI_ISR_RDYF transceiver ready flag **/
#define SWPMI_ISR_RDYF		(1 << 11)
/** SWPMI_ISR_DEACTF DEACTIVATED flag **/
#define SWPMI_ISR_DEACTF		(1 << 10)
/** SWPMI_ISR_SUSP SUSPEND flag **/
#define SWPMI_ISR_SUSP		(1 << 9)
/** SWPMI_ISR_SRF Slave resume flag **/
#define SWPMI_ISR_SRF		(1 << 8)
/** SWPMI_ISR_TCF Transfer complete flag **/
#define SWPMI_ISR_TCF		(1 << 7)
/** SWPMI_ISR_TXE Transmit data register empty **/
#define SWPMI_ISR_TXE		(1 << 6)
/** SWPMI_ISR_RXNE Receive data register not empty **/
#define SWPMI_ISR_RXNE		(1 << 5)
/** SWPMI_ISR_TXUNRF Transmit underrun error flag **/
#define SWPMI_ISR_TXUNRF		(1 << 4)
/** SWPMI_ISR_RXOVRF Receive overrun error flag **/
#define SWPMI_ISR_RXOVRF		(1 << 3)
/** SWPMI_ISR_RXBERF Receive CRC error flag **/
#define SWPMI_ISR_RXBERF		(1 << 2)
/** SWPMI_ISR_TXBEF Transmit buffer empty flag **/
#define SWPMI_ISR_TXBEF		(1 << 1)
/** SWPMI_ISR_RXBFF Receive buffer full flag **/
#define SWPMI_ISR_RXBFF		(1 << 0)

/**@}*/

/** @defgroup swpmi_icr ICR SWPMI Interrupt Flag Clear register
@{*/

/** SWPMI_ICR_CRDYF Clear transceiver ready flag **/
#define SWPMI_ICR_CRDYF		(1 << 11)
/** SWPMI_ICR_CSRF Clear slave resume flag **/
#define SWPMI_ICR_CSRF		(1 << 8)
/** SWPMI_ICR_CTCF Clear transfer complete flag **/
#define SWPMI_ICR_CTCF		(1 << 7)
/** SWPMI_ICR_CTXUNRF Clear transmit underrun error flag **/
#define SWPMI_ICR_CTXUNRF		(1 << 4)
/** SWPMI_ICR_CRXOVRF Clear receive overrun error flag **/
#define SWPMI_ICR_CRXOVRF		(1 << 3)
/** SWPMI_ICR_CRXBERF Clear receive CRC error flag **/
#define SWPMI_ICR_CRXBERF		(1 << 2)
/** SWPMI_ICR_CTXBEF Clear transmit buffer empty flag **/
#define SWPMI_ICR_CTXBEF		(1 << 1)
/** SWPMI_ICR_CRXBFF Clear receive buffer full flag **/
#define SWPMI_ICR_CRXBFF		(1 << 0)

/**@}*/

/** @defgroup swpmi_ier IER SWPMI Interrupt Enable register
@{*/

/** SWPMI_IER_RDYIE Transceiver ready interrupt enable **/
#define SWPMI_IER_RDYIE		(1 << 11)
/** SWPMI_IER_SRIE Slave resume interrupt enable **/
#define SWPMI_IER_SRIE		(1 << 8)
/** SWPMI_IER_TCIE Transmit complete interrupt enable **/
#define SWPMI_IER_TCIE		(1 << 7)
/** SWPMI_IER_TIE Transmit interrupt enable **/
#define SWPMI_IER_TIE		(1 << 6)
/** SWPMI_IER_RIE Receive interrupt enable **/
#define SWPMI_IER_RIE		(1 << 5)
/** SWPMI_IER_TXUNRIE Transmit underrun error interrupt enable **/
#define SWPMI_IER_TXUNRIE		(1 << 4)
/** SWPMI_IER_RXOVRIE Receive overrun error interrupt enable **/
#define SWPMI_IER_RXOVRIE		(1 << 3)
/** SWPMI_IER_RXBERIE Receive CRC error interrupt enable **/
#define SWPMI_IER_RXBERIE		(1 << 2)
/** SWPMI_IER_TXBEIE Transmit buffer empty interrupt enable **/
#define SWPMI_IER_TXBEIE		(1 << 1)
/** SWPMI_IER_RXBFIE Receive buffer full interrupt enable **/
#define SWPMI_IER_RXBFIE		(1 << 0)

/**@}*/

/** @defgroup swpmi_rfl RFL SWPMI Receive Frame Length register
@{*/


#define SWPMI_RFL_RFL_SHIFT		0
#define SWPMI_RFL_RFL_MASK		0x1f
/** @defgroup swpmi_rfl_rfl RFL Receive frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi_tdr TDR SWPMI Transmit data register
@{*/


#define SWPMI_TDR_TD_SHIFT		0
#define SWPMI_TDR_TD_MASK		0xffffffff
/** @defgroup swpmi_tdr_td TD Transmit data
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi_rdr RDR SWPMI Receive data register
@{*/


#define SWPMI_RDR_RD_SHIFT		0
#define SWPMI_RDR_RD_MASK		0xffffffff
/** @defgroup swpmi_rdr_rd RD received data
@{*/
/**@}*/


/**@}*/

/** @defgroup swpmi_or OR SWPMI Option register
@{*/

/** SWPMI_OR_SWP_CLASS SWP class selection **/
#define SWPMI_OR_SWP_CLASS		(1 << 1)
/** SWPMI_OR_SWP_TBYP SWP transceiver bypass **/
#define SWPMI_OR_SWP_TBYP		(1 << 0)

/**@}*/

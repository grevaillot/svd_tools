#pragma once 

/* --- UART0: Universal Asynchronous Receiver Transmitter ----------- */

/** @defgroup uart0_registers Universal Asynchronous Receiver Transmitter Register
@{*/

/** UART0_UART_CR Control Register **/
#define UART0_UART_CR			MMIO32(UART0_BASE + 0x00)
/** UART0_UART_MR Mode Register **/
#define UART0_UART_MR			MMIO32(UART0_BASE + 0x04)
/** UART0_UART_IER Interrupt Enable Register **/
#define UART0_UART_IER			MMIO32(UART0_BASE + 0x08)
/** UART0_UART_IDR Interrupt Disable Register **/
#define UART0_UART_IDR			MMIO32(UART0_BASE + 0x0c)
/** UART0_UART_IMR Interrupt Mask Register **/
#define UART0_UART_IMR			MMIO32(UART0_BASE + 0x10)
/** UART0_UART_SR Status Register **/
#define UART0_UART_SR			MMIO32(UART0_BASE + 0x14)
/** UART0_UART_RHR Receive Holding Register **/
#define UART0_UART_RHR			MMIO32(UART0_BASE + 0x18)
/** UART0_UART_THR Transmit Holding Register **/
#define UART0_UART_THR			MMIO32(UART0_BASE + 0x1c)
/** UART0_UART_BRGR Baud Rate Generator Register **/
#define UART0_UART_BRGR			MMIO32(UART0_BASE + 0x20)
/** UART0_UART_CMPR Comparison Register **/
#define UART0_UART_CMPR			MMIO32(UART0_BASE + 0x24)
/** UART0_UART_WPMR Write Protection Mode Register **/
#define UART0_UART_WPMR			MMIO32(UART0_BASE + 0xe4)

/**@}*/


/** @defgroup uart0_uart_cr UARTCR Control Register
@{*/

/** UART0_UART_CR_REQCLR Request Clear **/
#define UART0_UART_CR_REQCLR		(1 << 12)
/** UART0_UART_CR_RSTSTA Reset Status **/
#define UART0_UART_CR_RSTSTA		(1 << 8)
/** UART0_UART_CR_TXDIS Transmitter Disable **/
#define UART0_UART_CR_TXDIS		(1 << 7)
/** UART0_UART_CR_TXEN Transmitter Enable **/
#define UART0_UART_CR_TXEN		(1 << 6)
/** UART0_UART_CR_RXDIS Receiver Disable **/
#define UART0_UART_CR_RXDIS		(1 << 5)
/** UART0_UART_CR_RXEN Receiver Enable **/
#define UART0_UART_CR_RXEN		(1 << 4)
/** UART0_UART_CR_RSTTX Reset Transmitter **/
#define UART0_UART_CR_RSTTX		(1 << 3)
/** UART0_UART_CR_RSTRX Reset Receiver **/
#define UART0_UART_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup uart0_uart_mr UARTMR Mode Register
@{*/


#define UART0_UART_MR_CHMODE_SHIFT		14
#define UART0_UART_MR_CHMODE_MASK		0x03
/** @defgroup uart0_uart_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/

/** UART0_UART_MR_BRSRCCK Baud Rate Source Clock **/
#define UART0_UART_MR_BRSRCCK		(1 << 12)

#define UART0_UART_MR_PAR_SHIFT		9
#define UART0_UART_MR_PAR_MASK		0x07
/** @defgroup uart0_uart_mr_par PAR Parity Type
@{*/
/**@}*/

/** UART0_UART_MR_FILTER Receiver Digital Filter **/
#define UART0_UART_MR_FILTER		(1 << 4)

/**@}*/

/** @defgroup uart0_uart_ier UARTIER Interrupt Enable Register
@{*/

/** UART0_UART_IER_CMP Enable Comparison Interrupt **/
#define UART0_UART_IER_CMP		(1 << 15)
/** UART0_UART_IER_TXEMPTY Enable TXEMPTY Interrupt **/
#define UART0_UART_IER_TXEMPTY		(1 << 9)
/** UART0_UART_IER_PARE Enable Parity Error Interrupt **/
#define UART0_UART_IER_PARE		(1 << 7)
/** UART0_UART_IER_FRAME Enable Framing Error Interrupt **/
#define UART0_UART_IER_FRAME		(1 << 6)
/** UART0_UART_IER_OVRE Enable Overrun Error Interrupt **/
#define UART0_UART_IER_OVRE		(1 << 5)
/** UART0_UART_IER_TXRDY Enable TXRDY Interrupt **/
#define UART0_UART_IER_TXRDY		(1 << 1)
/** UART0_UART_IER_RXRDY Enable RXRDY Interrupt **/
#define UART0_UART_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_uart_idr UARTIDR Interrupt Disable Register
@{*/

/** UART0_UART_IDR_CMP Disable Comparison Interrupt **/
#define UART0_UART_IDR_CMP		(1 << 15)
/** UART0_UART_IDR_TXEMPTY Disable TXEMPTY Interrupt **/
#define UART0_UART_IDR_TXEMPTY		(1 << 9)
/** UART0_UART_IDR_PARE Disable Parity Error Interrupt **/
#define UART0_UART_IDR_PARE		(1 << 7)
/** UART0_UART_IDR_FRAME Disable Framing Error Interrupt **/
#define UART0_UART_IDR_FRAME		(1 << 6)
/** UART0_UART_IDR_OVRE Disable Overrun Error Interrupt **/
#define UART0_UART_IDR_OVRE		(1 << 5)
/** UART0_UART_IDR_TXRDY Disable TXRDY Interrupt **/
#define UART0_UART_IDR_TXRDY		(1 << 1)
/** UART0_UART_IDR_RXRDY Disable RXRDY Interrupt **/
#define UART0_UART_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_uart_imr UARTIMR Interrupt Mask Register
@{*/

/** UART0_UART_IMR_CMP Mask Comparison Interrupt **/
#define UART0_UART_IMR_CMP		(1 << 15)
/** UART0_UART_IMR_TXEMPTY Mask TXEMPTY Interrupt **/
#define UART0_UART_IMR_TXEMPTY		(1 << 9)
/** UART0_UART_IMR_PARE Mask Parity Error Interrupt **/
#define UART0_UART_IMR_PARE		(1 << 7)
/** UART0_UART_IMR_FRAME Mask Framing Error Interrupt **/
#define UART0_UART_IMR_FRAME		(1 << 6)
/** UART0_UART_IMR_OVRE Mask Overrun Error Interrupt **/
#define UART0_UART_IMR_OVRE		(1 << 5)
/** UART0_UART_IMR_TXRDY Disable TXRDY Interrupt **/
#define UART0_UART_IMR_TXRDY		(1 << 1)
/** UART0_UART_IMR_RXRDY Mask RXRDY Interrupt **/
#define UART0_UART_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_uart_sr UARTSR Status Register
@{*/

/** UART0_UART_SR_CMP Comparison Match **/
#define UART0_UART_SR_CMP		(1 << 15)
/** UART0_UART_SR_TXEMPTY Transmitter Empty **/
#define UART0_UART_SR_TXEMPTY		(1 << 9)
/** UART0_UART_SR_PARE Parity Error **/
#define UART0_UART_SR_PARE		(1 << 7)
/** UART0_UART_SR_FRAME Framing Error **/
#define UART0_UART_SR_FRAME		(1 << 6)
/** UART0_UART_SR_OVRE Overrun Error **/
#define UART0_UART_SR_OVRE		(1 << 5)
/** UART0_UART_SR_TXRDY Transmitter Ready **/
#define UART0_UART_SR_TXRDY		(1 << 1)
/** UART0_UART_SR_RXRDY Receiver Ready **/
#define UART0_UART_SR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_uart_rhr UARTRHR Receive Holding Register
@{*/


#define UART0_UART_RHR_RXCHR_SHIFT		0
#define UART0_UART_RHR_RXCHR_MASK		0xff
/** @defgroup uart0_uart_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_uart_thr UARTTHR Transmit Holding Register
@{*/


#define UART0_UART_THR_TXCHR_SHIFT		0
#define UART0_UART_THR_TXCHR_MASK		0xff
/** @defgroup uart0_uart_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_uart_brgr UARTBRGR Baud Rate Generator Register
@{*/


#define UART0_UART_BRGR_CD_SHIFT		0
#define UART0_UART_BRGR_CD_MASK		0xffff
/** @defgroup uart0_uart_brgr_cd CD Clock Divisor
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_uart_cmpr UARTCMPR Comparison Register
@{*/


#define UART0_UART_CMPR_VAL2_SHIFT		16
#define UART0_UART_CMPR_VAL2_MASK		0xff
/** @defgroup uart0_uart_cmpr_val2 VAL2 Second Comparison Value for Received Character
@{*/
/**@}*/

/** UART0_UART_CMPR_CMPPAR Compare Parity **/
#define UART0_UART_CMPR_CMPPAR		(1 << 14)
/** UART0_UART_CMPR_CMPMODE Comparison Mode **/
#define UART0_UART_CMPR_CMPMODE		(1 << 12)

#define UART0_UART_CMPR_VAL1_SHIFT		0
#define UART0_UART_CMPR_VAL1_MASK		0xff
/** @defgroup uart0_uart_cmpr_val1 VAL1 First Comparison Value for Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_uart_wpmr UARTWPMR Write Protection Mode Register
@{*/


#define UART0_UART_WPMR_WPKEY_SHIFT		8
#define UART0_UART_WPMR_WPKEY_MASK		0xffffff
/** @defgroup uart0_uart_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** UART0_UART_WPMR_WPEN Write Protection Enable **/
#define UART0_UART_WPMR_WPEN		(1 << 0)

/**@}*/

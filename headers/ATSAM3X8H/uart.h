#pragma once 

/* --- UART: Universal Asynchronous Receiver Transmitter ------------ */

/** @defgroup uart_registers Universal Asynchronous Receiver Transmitter Register
@{*/

/** UART_CR Control Register **/
#define UART_CR			MMIO32(UART_BASE + 0x00)
/** UART_MR Mode Register **/
#define UART_MR			MMIO32(UART_BASE + 0x04)
/** UART_IER Interrupt Enable Register **/
#define UART_IER			MMIO32(UART_BASE + 0x08)
/** UART_IDR Interrupt Disable Register **/
#define UART_IDR			MMIO32(UART_BASE + 0x0c)
/** UART_IMR Interrupt Mask Register **/
#define UART_IMR			MMIO32(UART_BASE + 0x10)
/** UART_SR Status Register **/
#define UART_SR			MMIO32(UART_BASE + 0x14)
/** UART_RHR Receive Holding Register **/
#define UART_RHR			MMIO32(UART_BASE + 0x18)
/** UART_THR Transmit Holding Register **/
#define UART_THR			MMIO32(UART_BASE + 0x1c)
/** UART_BRGR Baud Rate Generator Register **/
#define UART_BRGR			MMIO32(UART_BASE + 0x20)
/** UART_RPR Receive Pointer Register **/
#define UART_RPR			MMIO32(UART_BASE + 0x100)
/** UART_RCR Receive Counter Register **/
#define UART_RCR			MMIO32(UART_BASE + 0x104)
/** UART_TPR Transmit Pointer Register **/
#define UART_TPR			MMIO32(UART_BASE + 0x108)
/** UART_TCR Transmit Counter Register **/
#define UART_TCR			MMIO32(UART_BASE + 0x10c)
/** UART_RNPR Receive Next Pointer Register **/
#define UART_RNPR			MMIO32(UART_BASE + 0x110)
/** UART_RNCR Receive Next Counter Register **/
#define UART_RNCR			MMIO32(UART_BASE + 0x114)
/** UART_TNPR Transmit Next Pointer Register **/
#define UART_TNPR			MMIO32(UART_BASE + 0x118)
/** UART_TNCR Transmit Next Counter Register **/
#define UART_TNCR			MMIO32(UART_BASE + 0x11c)
/** UART_PTCR Transfer Control Register **/
#define UART_PTCR			MMIO32(UART_BASE + 0x120)
/** UART_PTSR Transfer Status Register **/
#define UART_PTSR			MMIO32(UART_BASE + 0x124)

/**@}*/


/** @defgroup uart_cr CR Control Register
@{*/

/** UART_CR_RSTSTA Reset Status Bits **/
#define UART_CR_RSTSTA		(1 << 8)
/** UART_CR_TXDIS Transmitter Disable **/
#define UART_CR_TXDIS		(1 << 7)
/** UART_CR_TXEN Transmitter Enable **/
#define UART_CR_TXEN		(1 << 6)
/** UART_CR_RXDIS Receiver Disable **/
#define UART_CR_RXDIS		(1 << 5)
/** UART_CR_RXEN Receiver Enable **/
#define UART_CR_RXEN		(1 << 4)
/** UART_CR_RSTTX Reset Transmitter **/
#define UART_CR_RSTTX		(1 << 3)
/** UART_CR_RSTRX Reset Receiver **/
#define UART_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup uart_mr MR Mode Register
@{*/


#define UART_MR_CHMODE_SHIFT		14
#define UART_MR_CHMODE_MASK		0x03
/** @defgroup uart_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define UART_MR_PAR_SHIFT		9
#define UART_MR_PAR_MASK		0x07
/** @defgroup uart_mr_par PAR Parity Type
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_ier IER Interrupt Enable Register
@{*/

/** UART_IER_RXBUFF Enable Buffer Full Interrupt **/
#define UART_IER_RXBUFF		(1 << 12)
/** UART_IER_TXBUFE Enable Buffer Empty Interrupt **/
#define UART_IER_TXBUFE		(1 << 11)
/** UART_IER_TXEMPTY Enable TXEMPTY Interrupt **/
#define UART_IER_TXEMPTY		(1 << 9)
/** UART_IER_PARE Enable Parity Error Interrupt **/
#define UART_IER_PARE		(1 << 7)
/** UART_IER_FRAME Enable Framing Error Interrupt **/
#define UART_IER_FRAME		(1 << 6)
/** UART_IER_OVRE Enable Overrun Error Interrupt **/
#define UART_IER_OVRE		(1 << 5)
/** UART_IER_ENDTX Enable End of Transmit Interrupt **/
#define UART_IER_ENDTX		(1 << 4)
/** UART_IER_ENDRX Enable End of Receive Transfer Interrupt **/
#define UART_IER_ENDRX		(1 << 3)
/** UART_IER_TXRDY Enable TXRDY Interrupt **/
#define UART_IER_TXRDY		(1 << 1)
/** UART_IER_RXRDY Enable RXRDY Interrupt **/
#define UART_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart_idr IDR Interrupt Disable Register
@{*/

/** UART_IDR_RXBUFF Disable Buffer Full Interrupt **/
#define UART_IDR_RXBUFF		(1 << 12)
/** UART_IDR_TXBUFE Disable Buffer Empty Interrupt **/
#define UART_IDR_TXBUFE		(1 << 11)
/** UART_IDR_TXEMPTY Disable TXEMPTY Interrupt **/
#define UART_IDR_TXEMPTY		(1 << 9)
/** UART_IDR_PARE Disable Parity Error Interrupt **/
#define UART_IDR_PARE		(1 << 7)
/** UART_IDR_FRAME Disable Framing Error Interrupt **/
#define UART_IDR_FRAME		(1 << 6)
/** UART_IDR_OVRE Disable Overrun Error Interrupt **/
#define UART_IDR_OVRE		(1 << 5)
/** UART_IDR_ENDTX Disable End of Transmit Interrupt **/
#define UART_IDR_ENDTX		(1 << 4)
/** UART_IDR_ENDRX Disable End of Receive Transfer Interrupt **/
#define UART_IDR_ENDRX		(1 << 3)
/** UART_IDR_TXRDY Disable TXRDY Interrupt **/
#define UART_IDR_TXRDY		(1 << 1)
/** UART_IDR_RXRDY Disable RXRDY Interrupt **/
#define UART_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart_imr IMR Interrupt Mask Register
@{*/

/** UART_IMR_RXBUFF Mask RXBUFF Interrupt **/
#define UART_IMR_RXBUFF		(1 << 12)
/** UART_IMR_TXBUFE Mask TXBUFE Interrupt **/
#define UART_IMR_TXBUFE		(1 << 11)
/** UART_IMR_TXEMPTY Mask TXEMPTY Interrupt **/
#define UART_IMR_TXEMPTY		(1 << 9)
/** UART_IMR_PARE Mask Parity Error Interrupt **/
#define UART_IMR_PARE		(1 << 7)
/** UART_IMR_FRAME Mask Framing Error Interrupt **/
#define UART_IMR_FRAME		(1 << 6)
/** UART_IMR_OVRE Mask Overrun Error Interrupt **/
#define UART_IMR_OVRE		(1 << 5)
/** UART_IMR_ENDTX Mask End of Transmit Interrupt **/
#define UART_IMR_ENDTX		(1 << 4)
/** UART_IMR_ENDRX Mask End of Receive Transfer Interrupt **/
#define UART_IMR_ENDRX		(1 << 3)
/** UART_IMR_TXRDY Disable TXRDY Interrupt **/
#define UART_IMR_TXRDY		(1 << 1)
/** UART_IMR_RXRDY Mask RXRDY Interrupt **/
#define UART_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart_sr SR Status Register
@{*/

/** UART_SR_RXBUFF Receive Buffer Full **/
#define UART_SR_RXBUFF		(1 << 12)
/** UART_SR_TXBUFE Transmission Buffer Empty **/
#define UART_SR_TXBUFE		(1 << 11)
/** UART_SR_TXEMPTY Transmitter Empty **/
#define UART_SR_TXEMPTY		(1 << 9)
/** UART_SR_PARE Parity Error **/
#define UART_SR_PARE		(1 << 7)
/** UART_SR_FRAME Framing Error **/
#define UART_SR_FRAME		(1 << 6)
/** UART_SR_OVRE Overrun Error **/
#define UART_SR_OVRE		(1 << 5)
/** UART_SR_ENDTX End of Transmitter Transfer **/
#define UART_SR_ENDTX		(1 << 4)
/** UART_SR_ENDRX End of Receiver Transfer **/
#define UART_SR_ENDRX		(1 << 3)
/** UART_SR_TXRDY Transmitter Ready **/
#define UART_SR_TXRDY		(1 << 1)
/** UART_SR_RXRDY Receiver Ready **/
#define UART_SR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart_rhr RHR Receive Holding Register
@{*/


#define UART_RHR_RXCHR_SHIFT		0
#define UART_RHR_RXCHR_MASK		0xff
/** @defgroup uart_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_thr THR Transmit Holding Register
@{*/


#define UART_THR_TXCHR_SHIFT		0
#define UART_THR_TXCHR_MASK		0xff
/** @defgroup uart_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_brgr BRGR Baud Rate Generator Register
@{*/


#define UART_BRGR_CD_SHIFT		0
#define UART_BRGR_CD_MASK		0xffff
/** @defgroup uart_brgr_cd CD Clock Divisor
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_rpr RPR Receive Pointer Register
@{*/


#define UART_RPR_RXPTR_SHIFT		0
#define UART_RPR_RXPTR_MASK		0xffffffff
/** @defgroup uart_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_rcr RCR Receive Counter Register
@{*/


#define UART_RCR_RXCTR_SHIFT		0
#define UART_RCR_RXCTR_MASK		0xffff
/** @defgroup uart_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_tpr TPR Transmit Pointer Register
@{*/


#define UART_TPR_TXPTR_SHIFT		0
#define UART_TPR_TXPTR_MASK		0xffffffff
/** @defgroup uart_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_tcr TCR Transmit Counter Register
@{*/


#define UART_TCR_TXCTR_SHIFT		0
#define UART_TCR_TXCTR_MASK		0xffff
/** @defgroup uart_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_rnpr RNPR Receive Next Pointer Register
@{*/


#define UART_RNPR_RXNPTR_SHIFT		0
#define UART_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup uart_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_rncr RNCR Receive Next Counter Register
@{*/


#define UART_RNCR_RXNCTR_SHIFT		0
#define UART_RNCR_RXNCTR_MASK		0xffff
/** @defgroup uart_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_tnpr TNPR Transmit Next Pointer Register
@{*/


#define UART_TNPR_TXNPTR_SHIFT		0
#define UART_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup uart_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_tncr TNCR Transmit Next Counter Register
@{*/


#define UART_TNCR_TXNCTR_SHIFT		0
#define UART_TNCR_TXNCTR_MASK		0xffff
/** @defgroup uart_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup uart_ptcr PTCR Transfer Control Register
@{*/

/** UART_PTCR_TXTDIS Transmitter Transfer Disable **/
#define UART_PTCR_TXTDIS		(1 << 9)
/** UART_PTCR_TXTEN Transmitter Transfer Enable **/
#define UART_PTCR_TXTEN		(1 << 8)
/** UART_PTCR_RXTDIS Receiver Transfer Disable **/
#define UART_PTCR_RXTDIS		(1 << 1)
/** UART_PTCR_RXTEN Receiver Transfer Enable **/
#define UART_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup uart_ptsr PTSR Transfer Status Register
@{*/

/** UART_PTSR_TXTEN Transmitter Transfer Enable **/
#define UART_PTSR_TXTEN		(1 << 8)
/** UART_PTSR_RXTEN Receiver Transfer Enable **/
#define UART_PTSR_RXTEN		(1 << 0)

/**@}*/

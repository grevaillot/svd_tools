#pragma once 

/* --- UART1: Universal Asynchronous Receiver Transmitter 1 --------- */

/** @defgroup uart1_registers Universal Asynchronous Receiver Transmitter 1 Register
@{*/

/** UART1_CR Control Register **/
#define UART1_CR			MMIO32(UART1_BASE + 0x00)
/** UART1_MR Mode Register **/
#define UART1_MR			MMIO32(UART1_BASE + 0x04)
/** UART1_IER Interrupt Enable Register **/
#define UART1_IER			MMIO32(UART1_BASE + 0x08)
/** UART1_IDR Interrupt Disable Register **/
#define UART1_IDR			MMIO32(UART1_BASE + 0x0c)
/** UART1_IMR Interrupt Mask Register **/
#define UART1_IMR			MMIO32(UART1_BASE + 0x10)
/** UART1_SR Status Register **/
#define UART1_SR			MMIO32(UART1_BASE + 0x14)
/** UART1_RHR Receive Holding Register **/
#define UART1_RHR			MMIO32(UART1_BASE + 0x18)
/** UART1_THR Transmit Holding Register **/
#define UART1_THR			MMIO32(UART1_BASE + 0x1c)
/** UART1_BRGR Baud Rate Generator Register **/
#define UART1_BRGR			MMIO32(UART1_BASE + 0x20)
/** UART1_RPR Receive Pointer Register **/
#define UART1_RPR			MMIO32(UART1_BASE + 0x100)
/** UART1_RCR Receive Counter Register **/
#define UART1_RCR			MMIO32(UART1_BASE + 0x104)
/** UART1_TPR Transmit Pointer Register **/
#define UART1_TPR			MMIO32(UART1_BASE + 0x108)
/** UART1_TCR Transmit Counter Register **/
#define UART1_TCR			MMIO32(UART1_BASE + 0x10c)
/** UART1_RNPR Receive Next Pointer Register **/
#define UART1_RNPR			MMIO32(UART1_BASE + 0x110)
/** UART1_RNCR Receive Next Counter Register **/
#define UART1_RNCR			MMIO32(UART1_BASE + 0x114)
/** UART1_TNPR Transmit Next Pointer Register **/
#define UART1_TNPR			MMIO32(UART1_BASE + 0x118)
/** UART1_TNCR Transmit Next Counter Register **/
#define UART1_TNCR			MMIO32(UART1_BASE + 0x11c)
/** UART1_PTCR Transfer Control Register **/
#define UART1_PTCR			MMIO32(UART1_BASE + 0x120)
/** UART1_PTSR Transfer Status Register **/
#define UART1_PTSR			MMIO32(UART1_BASE + 0x124)

/**@}*/


/** @defgroup uart1_cr CR Control Register
@{*/

/** UART1_CR_RSTSTA Reset Status **/
#define UART1_CR_RSTSTA		(1 << 8)
/** UART1_CR_TXDIS Transmitter Disable **/
#define UART1_CR_TXDIS		(1 << 7)
/** UART1_CR_TXEN Transmitter Enable **/
#define UART1_CR_TXEN		(1 << 6)
/** UART1_CR_RXDIS Receiver Disable **/
#define UART1_CR_RXDIS		(1 << 5)
/** UART1_CR_RXEN Receiver Enable **/
#define UART1_CR_RXEN		(1 << 4)
/** UART1_CR_RSTTX Reset Transmitter **/
#define UART1_CR_RSTTX		(1 << 3)
/** UART1_CR_RSTRX Reset Receiver **/
#define UART1_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup uart1_mr MR Mode Register
@{*/


#define UART1_MR_CHMODE_SHIFT		14
#define UART1_MR_CHMODE_MASK		0x03
/** @defgroup uart1_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define UART1_MR_PAR_SHIFT		9
#define UART1_MR_PAR_MASK		0x07
/** @defgroup uart1_mr_par PAR Parity Type
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_ier IER Interrupt Enable Register
@{*/

/** UART1_IER_RXBUFF Enable Buffer Full Interrupt **/
#define UART1_IER_RXBUFF		(1 << 12)
/** UART1_IER_TXBUFE Enable Buffer Empty Interrupt **/
#define UART1_IER_TXBUFE		(1 << 11)
/** UART1_IER_TXEMPTY Enable TXEMPTY Interrupt **/
#define UART1_IER_TXEMPTY		(1 << 9)
/** UART1_IER_PARE Enable Parity Error Interrupt **/
#define UART1_IER_PARE		(1 << 7)
/** UART1_IER_FRAME Enable Framing Error Interrupt **/
#define UART1_IER_FRAME		(1 << 6)
/** UART1_IER_OVRE Enable Overrun Error Interrupt **/
#define UART1_IER_OVRE		(1 << 5)
/** UART1_IER_ENDTX Enable End of Transmit Interrupt **/
#define UART1_IER_ENDTX		(1 << 4)
/** UART1_IER_ENDRX Enable End of Receive Transfer Interrupt **/
#define UART1_IER_ENDRX		(1 << 3)
/** UART1_IER_TXRDY Enable TXRDY Interrupt **/
#define UART1_IER_TXRDY		(1 << 1)
/** UART1_IER_RXRDY Enable RXRDY Interrupt **/
#define UART1_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart1_idr IDR Interrupt Disable Register
@{*/

/** UART1_IDR_RXBUFF Disable Buffer Full Interrupt **/
#define UART1_IDR_RXBUFF		(1 << 12)
/** UART1_IDR_TXBUFE Disable Buffer Empty Interrupt **/
#define UART1_IDR_TXBUFE		(1 << 11)
/** UART1_IDR_TXEMPTY Disable TXEMPTY Interrupt **/
#define UART1_IDR_TXEMPTY		(1 << 9)
/** UART1_IDR_PARE Disable Parity Error Interrupt **/
#define UART1_IDR_PARE		(1 << 7)
/** UART1_IDR_FRAME Disable Framing Error Interrupt **/
#define UART1_IDR_FRAME		(1 << 6)
/** UART1_IDR_OVRE Disable Overrun Error Interrupt **/
#define UART1_IDR_OVRE		(1 << 5)
/** UART1_IDR_ENDTX Disable End of Transmit Interrupt **/
#define UART1_IDR_ENDTX		(1 << 4)
/** UART1_IDR_ENDRX Disable End of Receive Transfer Interrupt **/
#define UART1_IDR_ENDRX		(1 << 3)
/** UART1_IDR_TXRDY Disable TXRDY Interrupt **/
#define UART1_IDR_TXRDY		(1 << 1)
/** UART1_IDR_RXRDY Disable RXRDY Interrupt **/
#define UART1_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart1_imr IMR Interrupt Mask Register
@{*/

/** UART1_IMR_RXBUFF Mask RXBUFF Interrupt **/
#define UART1_IMR_RXBUFF		(1 << 12)
/** UART1_IMR_TXBUFE Mask TXBUFE Interrupt **/
#define UART1_IMR_TXBUFE		(1 << 11)
/** UART1_IMR_TXEMPTY Mask TXEMPTY Interrupt **/
#define UART1_IMR_TXEMPTY		(1 << 9)
/** UART1_IMR_PARE Mask Parity Error Interrupt **/
#define UART1_IMR_PARE		(1 << 7)
/** UART1_IMR_FRAME Mask Framing Error Interrupt **/
#define UART1_IMR_FRAME		(1 << 6)
/** UART1_IMR_OVRE Mask Overrun Error Interrupt **/
#define UART1_IMR_OVRE		(1 << 5)
/** UART1_IMR_ENDTX Mask End of Transmit Interrupt **/
#define UART1_IMR_ENDTX		(1 << 4)
/** UART1_IMR_ENDRX Mask End of Receive Transfer Interrupt **/
#define UART1_IMR_ENDRX		(1 << 3)
/** UART1_IMR_TXRDY Disable TXRDY Interrupt **/
#define UART1_IMR_TXRDY		(1 << 1)
/** UART1_IMR_RXRDY Mask RXRDY Interrupt **/
#define UART1_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart1_sr SR Status Register
@{*/

/** UART1_SR_RXBUFF Receive Buffer Full **/
#define UART1_SR_RXBUFF		(1 << 12)
/** UART1_SR_TXBUFE Transmission Buffer Empty **/
#define UART1_SR_TXBUFE		(1 << 11)
/** UART1_SR_TXEMPTY Transmitter Empty **/
#define UART1_SR_TXEMPTY		(1 << 9)
/** UART1_SR_PARE Parity Error **/
#define UART1_SR_PARE		(1 << 7)
/** UART1_SR_FRAME Framing Error **/
#define UART1_SR_FRAME		(1 << 6)
/** UART1_SR_OVRE Overrun Error **/
#define UART1_SR_OVRE		(1 << 5)
/** UART1_SR_ENDTX End of Transmitter Transfer **/
#define UART1_SR_ENDTX		(1 << 4)
/** UART1_SR_ENDRX End of Receiver Transfer **/
#define UART1_SR_ENDRX		(1 << 3)
/** UART1_SR_TXRDY Transmitter Ready **/
#define UART1_SR_TXRDY		(1 << 1)
/** UART1_SR_RXRDY Receiver Ready **/
#define UART1_SR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart1_rhr RHR Receive Holding Register
@{*/


#define UART1_RHR_RXCHR_SHIFT		0
#define UART1_RHR_RXCHR_MASK		0xff
/** @defgroup uart1_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_thr THR Transmit Holding Register
@{*/


#define UART1_THR_TXCHR_SHIFT		0
#define UART1_THR_TXCHR_MASK		0xff
/** @defgroup uart1_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_brgr BRGR Baud Rate Generator Register
@{*/


#define UART1_BRGR_CD_SHIFT		0
#define UART1_BRGR_CD_MASK		0xffff
/** @defgroup uart1_brgr_cd CD Clock Divisor
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_rpr RPR Receive Pointer Register
@{*/


#define UART1_RPR_RXPTR_SHIFT		0
#define UART1_RPR_RXPTR_MASK		0xffffffff
/** @defgroup uart1_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_rcr RCR Receive Counter Register
@{*/


#define UART1_RCR_RXCTR_SHIFT		0
#define UART1_RCR_RXCTR_MASK		0xffff
/** @defgroup uart1_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_tpr TPR Transmit Pointer Register
@{*/


#define UART1_TPR_TXPTR_SHIFT		0
#define UART1_TPR_TXPTR_MASK		0xffffffff
/** @defgroup uart1_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_tcr TCR Transmit Counter Register
@{*/


#define UART1_TCR_TXCTR_SHIFT		0
#define UART1_TCR_TXCTR_MASK		0xffff
/** @defgroup uart1_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_rnpr RNPR Receive Next Pointer Register
@{*/


#define UART1_RNPR_RXNPTR_SHIFT		0
#define UART1_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup uart1_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_rncr RNCR Receive Next Counter Register
@{*/


#define UART1_RNCR_RXNCTR_SHIFT		0
#define UART1_RNCR_RXNCTR_MASK		0xffff
/** @defgroup uart1_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_tnpr TNPR Transmit Next Pointer Register
@{*/


#define UART1_TNPR_TXNPTR_SHIFT		0
#define UART1_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup uart1_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_tncr TNCR Transmit Next Counter Register
@{*/


#define UART1_TNCR_TXNCTR_SHIFT		0
#define UART1_TNCR_TXNCTR_MASK		0xffff
/** @defgroup uart1_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup uart1_ptcr PTCR Transfer Control Register
@{*/

/** UART1_PTCR_TXTDIS Transmitter Transfer Disable **/
#define UART1_PTCR_TXTDIS		(1 << 9)
/** UART1_PTCR_TXTEN Transmitter Transfer Enable **/
#define UART1_PTCR_TXTEN		(1 << 8)
/** UART1_PTCR_RXTDIS Receiver Transfer Disable **/
#define UART1_PTCR_RXTDIS		(1 << 1)
/** UART1_PTCR_RXTEN Receiver Transfer Enable **/
#define UART1_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup uart1_ptsr PTSR Transfer Status Register
@{*/

/** UART1_PTSR_TXTEN Transmitter Transfer Enable **/
#define UART1_PTSR_TXTEN		(1 << 8)
/** UART1_PTSR_RXTEN Receiver Transfer Enable **/
#define UART1_PTSR_RXTEN		(1 << 0)

/**@}*/

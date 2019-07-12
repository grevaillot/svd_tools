#pragma once 

/* --- UART0: Universal Asynchronous Receiver Transmitter 0 --------- */

/** @defgroup uart0_registers Universal Asynchronous Receiver Transmitter 0 Register
@{*/

/** UART0_CR Control Register **/
#define UART0_CR			MMIO32(UART0_BASE + 0x00)
/** UART0_MR Mode Register **/
#define UART0_MR			MMIO32(UART0_BASE + 0x04)
/** UART0_IER Interrupt Enable Register **/
#define UART0_IER			MMIO32(UART0_BASE + 0x08)
/** UART0_IDR Interrupt Disable Register **/
#define UART0_IDR			MMIO32(UART0_BASE + 0x0c)
/** UART0_IMR Interrupt Mask Register **/
#define UART0_IMR			MMIO32(UART0_BASE + 0x10)
/** UART0_SR Status Register **/
#define UART0_SR			MMIO32(UART0_BASE + 0x14)
/** UART0_RHR Receive Holding Register **/
#define UART0_RHR			MMIO32(UART0_BASE + 0x18)
/** UART0_THR Transmit Holding Register **/
#define UART0_THR			MMIO32(UART0_BASE + 0x1c)
/** UART0_BRGR Baud Rate Generator Register **/
#define UART0_BRGR			MMIO32(UART0_BASE + 0x20)
/** UART0_RPR Receive Pointer Register **/
#define UART0_RPR			MMIO32(UART0_BASE + 0x100)
/** UART0_RCR Receive Counter Register **/
#define UART0_RCR			MMIO32(UART0_BASE + 0x104)
/** UART0_TPR Transmit Pointer Register **/
#define UART0_TPR			MMIO32(UART0_BASE + 0x108)
/** UART0_TCR Transmit Counter Register **/
#define UART0_TCR			MMIO32(UART0_BASE + 0x10c)
/** UART0_RNPR Receive Next Pointer Register **/
#define UART0_RNPR			MMIO32(UART0_BASE + 0x110)
/** UART0_RNCR Receive Next Counter Register **/
#define UART0_RNCR			MMIO32(UART0_BASE + 0x114)
/** UART0_TNPR Transmit Next Pointer Register **/
#define UART0_TNPR			MMIO32(UART0_BASE + 0x118)
/** UART0_TNCR Transmit Next Counter Register **/
#define UART0_TNCR			MMIO32(UART0_BASE + 0x11c)
/** UART0_PTCR Transfer Control Register **/
#define UART0_PTCR			MMIO32(UART0_BASE + 0x120)
/** UART0_PTSR Transfer Status Register **/
#define UART0_PTSR			MMIO32(UART0_BASE + 0x124)

/**@}*/


/** @defgroup uart0_cr CR Control Register
@{*/

/** UART0_CR_RSTSTA Reset Status Bits **/
#define UART0_CR_RSTSTA		(1 << 8)
/** UART0_CR_TXDIS Transmitter Disable **/
#define UART0_CR_TXDIS		(1 << 7)
/** UART0_CR_TXEN Transmitter Enable **/
#define UART0_CR_TXEN		(1 << 6)
/** UART0_CR_RXDIS Receiver Disable **/
#define UART0_CR_RXDIS		(1 << 5)
/** UART0_CR_RXEN Receiver Enable **/
#define UART0_CR_RXEN		(1 << 4)
/** UART0_CR_RSTTX Reset Transmitter **/
#define UART0_CR_RSTTX		(1 << 3)
/** UART0_CR_RSTRX Reset Receiver **/
#define UART0_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup uart0_mr MR Mode Register
@{*/


#define UART0_MR_CHMODE_SHIFT		14
#define UART0_MR_CHMODE_MASK		0x03
/** @defgroup uart0_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define UART0_MR_PAR_SHIFT		9
#define UART0_MR_PAR_MASK		0x07
/** @defgroup uart0_mr_par PAR Parity Type
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_ier IER Interrupt Enable Register
@{*/

/** UART0_IER_RXBUFF Enable Buffer Full Interrupt **/
#define UART0_IER_RXBUFF		(1 << 12)
/** UART0_IER_TXBUFE Enable Buffer Empty Interrupt **/
#define UART0_IER_TXBUFE		(1 << 11)
/** UART0_IER_TXEMPTY Enable TXEMPTY Interrupt **/
#define UART0_IER_TXEMPTY		(1 << 9)
/** UART0_IER_PARE Enable Parity Error Interrupt **/
#define UART0_IER_PARE		(1 << 7)
/** UART0_IER_FRAME Enable Framing Error Interrupt **/
#define UART0_IER_FRAME		(1 << 6)
/** UART0_IER_OVRE Enable Overrun Error Interrupt **/
#define UART0_IER_OVRE		(1 << 5)
/** UART0_IER_ENDTX Enable End of Transmit Interrupt **/
#define UART0_IER_ENDTX		(1 << 4)
/** UART0_IER_ENDRX Enable End of Receive Transfer Interrupt **/
#define UART0_IER_ENDRX		(1 << 3)
/** UART0_IER_TXRDY Enable TXRDY Interrupt **/
#define UART0_IER_TXRDY		(1 << 1)
/** UART0_IER_RXRDY Enable RXRDY Interrupt **/
#define UART0_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_idr IDR Interrupt Disable Register
@{*/

/** UART0_IDR_RXBUFF Disable Buffer Full Interrupt **/
#define UART0_IDR_RXBUFF		(1 << 12)
/** UART0_IDR_TXBUFE Disable Buffer Empty Interrupt **/
#define UART0_IDR_TXBUFE		(1 << 11)
/** UART0_IDR_TXEMPTY Disable TXEMPTY Interrupt **/
#define UART0_IDR_TXEMPTY		(1 << 9)
/** UART0_IDR_PARE Disable Parity Error Interrupt **/
#define UART0_IDR_PARE		(1 << 7)
/** UART0_IDR_FRAME Disable Framing Error Interrupt **/
#define UART0_IDR_FRAME		(1 << 6)
/** UART0_IDR_OVRE Disable Overrun Error Interrupt **/
#define UART0_IDR_OVRE		(1 << 5)
/** UART0_IDR_ENDTX Disable End of Transmit Interrupt **/
#define UART0_IDR_ENDTX		(1 << 4)
/** UART0_IDR_ENDRX Disable End of Receive Transfer Interrupt **/
#define UART0_IDR_ENDRX		(1 << 3)
/** UART0_IDR_TXRDY Disable TXRDY Interrupt **/
#define UART0_IDR_TXRDY		(1 << 1)
/** UART0_IDR_RXRDY Disable RXRDY Interrupt **/
#define UART0_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_imr IMR Interrupt Mask Register
@{*/

/** UART0_IMR_RXBUFF Mask RXBUFF Interrupt **/
#define UART0_IMR_RXBUFF		(1 << 12)
/** UART0_IMR_TXBUFE Mask TXBUFE Interrupt **/
#define UART0_IMR_TXBUFE		(1 << 11)
/** UART0_IMR_TXEMPTY Mask TXEMPTY Interrupt **/
#define UART0_IMR_TXEMPTY		(1 << 9)
/** UART0_IMR_PARE Mask Parity Error Interrupt **/
#define UART0_IMR_PARE		(1 << 7)
/** UART0_IMR_FRAME Mask Framing Error Interrupt **/
#define UART0_IMR_FRAME		(1 << 6)
/** UART0_IMR_OVRE Mask Overrun Error Interrupt **/
#define UART0_IMR_OVRE		(1 << 5)
/** UART0_IMR_ENDTX Mask End of Transmit Interrupt **/
#define UART0_IMR_ENDTX		(1 << 4)
/** UART0_IMR_ENDRX Mask End of Receive Transfer Interrupt **/
#define UART0_IMR_ENDRX		(1 << 3)
/** UART0_IMR_TXRDY Disable TXRDY Interrupt **/
#define UART0_IMR_TXRDY		(1 << 1)
/** UART0_IMR_RXRDY Mask RXRDY Interrupt **/
#define UART0_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_sr SR Status Register
@{*/

/** UART0_SR_RXBUFF Receive Buffer Full **/
#define UART0_SR_RXBUFF		(1 << 12)
/** UART0_SR_TXBUFE Transmission Buffer Empty **/
#define UART0_SR_TXBUFE		(1 << 11)
/** UART0_SR_TXEMPTY Transmitter Empty **/
#define UART0_SR_TXEMPTY		(1 << 9)
/** UART0_SR_PARE Parity Error **/
#define UART0_SR_PARE		(1 << 7)
/** UART0_SR_FRAME Framing Error **/
#define UART0_SR_FRAME		(1 << 6)
/** UART0_SR_OVRE Overrun Error **/
#define UART0_SR_OVRE		(1 << 5)
/** UART0_SR_ENDTX End of Transmitter Transfer **/
#define UART0_SR_ENDTX		(1 << 4)
/** UART0_SR_ENDRX End of Receiver Transfer **/
#define UART0_SR_ENDRX		(1 << 3)
/** UART0_SR_TXRDY Transmitter Ready **/
#define UART0_SR_TXRDY		(1 << 1)
/** UART0_SR_RXRDY Receiver Ready **/
#define UART0_SR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup uart0_rhr RHR Receive Holding Register
@{*/


#define UART0_RHR_RXCHR_SHIFT		0
#define UART0_RHR_RXCHR_MASK		0xff
/** @defgroup uart0_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_thr THR Transmit Holding Register
@{*/


#define UART0_THR_TXCHR_SHIFT		0
#define UART0_THR_TXCHR_MASK		0xff
/** @defgroup uart0_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_brgr BRGR Baud Rate Generator Register
@{*/


#define UART0_BRGR_CD_SHIFT		0
#define UART0_BRGR_CD_MASK		0xffff
/** @defgroup uart0_brgr_cd CD Clock Divisor
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_rpr RPR Receive Pointer Register
@{*/


#define UART0_RPR_RXPTR_SHIFT		0
#define UART0_RPR_RXPTR_MASK		0xffffffff
/** @defgroup uart0_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_rcr RCR Receive Counter Register
@{*/


#define UART0_RCR_RXCTR_SHIFT		0
#define UART0_RCR_RXCTR_MASK		0xffff
/** @defgroup uart0_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_tpr TPR Transmit Pointer Register
@{*/


#define UART0_TPR_TXPTR_SHIFT		0
#define UART0_TPR_TXPTR_MASK		0xffffffff
/** @defgroup uart0_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_tcr TCR Transmit Counter Register
@{*/


#define UART0_TCR_TXCTR_SHIFT		0
#define UART0_TCR_TXCTR_MASK		0xffff
/** @defgroup uart0_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_rnpr RNPR Receive Next Pointer Register
@{*/


#define UART0_RNPR_RXNPTR_SHIFT		0
#define UART0_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup uart0_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_rncr RNCR Receive Next Counter Register
@{*/


#define UART0_RNCR_RXNCTR_SHIFT		0
#define UART0_RNCR_RXNCTR_MASK		0xffff
/** @defgroup uart0_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_tnpr TNPR Transmit Next Pointer Register
@{*/


#define UART0_TNPR_TXNPTR_SHIFT		0
#define UART0_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup uart0_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_tncr TNCR Transmit Next Counter Register
@{*/


#define UART0_TNCR_TXNCTR_SHIFT		0
#define UART0_TNCR_TXNCTR_MASK		0xffff
/** @defgroup uart0_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup uart0_ptcr PTCR Transfer Control Register
@{*/

/** UART0_PTCR_TXTDIS Transmitter Transfer Disable **/
#define UART0_PTCR_TXTDIS		(1 << 9)
/** UART0_PTCR_TXTEN Transmitter Transfer Enable **/
#define UART0_PTCR_TXTEN		(1 << 8)
/** UART0_PTCR_RXTDIS Receiver Transfer Disable **/
#define UART0_PTCR_RXTDIS		(1 << 1)
/** UART0_PTCR_RXTEN Receiver Transfer Enable **/
#define UART0_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup uart0_ptsr PTSR Transfer Status Register
@{*/

/** UART0_PTSR_TXTEN Transmitter Transfer Enable **/
#define UART0_PTSR_TXTEN		(1 << 8)
/** UART0_PTSR_RXTEN Receiver Transfer Enable **/
#define UART0_PTSR_RXTEN		(1 << 0)

/**@}*/

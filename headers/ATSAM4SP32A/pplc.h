#pragma once 

/* --- PPLC: PRIME Power Line Communication (PPLC) Transceiver ------ */

/** @defgroup pplc_registers PRIME Power Line Communication (PPLC) Transceiver Register
@{*/

/** PPLC_CR Control Register **/
#define PPLC_CR			MMIO32(PPLC_BASE + 0x00)
/** PPLC_MR Mode Register **/
#define PPLC_MR			MMIO32(PPLC_BASE + 0x04)
/** PPLC_RDR Receive Data Register **/
#define PPLC_RDR			MMIO32(PPLC_BASE + 0x08)
/** PPLC_TDR Transmit Data Register **/
#define PPLC_TDR			MMIO32(PPLC_BASE + 0x0c)
/** PPLC_SR Status Register **/
#define PPLC_SR			MMIO32(PPLC_BASE + 0x10)
/** PPLC_IER Interrupt Enable Register **/
#define PPLC_IER			MMIO32(PPLC_BASE + 0x14)
/** PPLC_IDR Interrupt Disable Register **/
#define PPLC_IDR			MMIO32(PPLC_BASE + 0x18)
/** PPLC_IMR Interrupt Mask Register **/
#define PPLC_IMR			MMIO32(PPLC_BASE + 0x1c)
/** PPLC_CSR Chip Select Register **/
#define PPLC_CSR			MMIO32(PPLC_BASE + 0x30)
/** PPLC_WPMR Write Protection Control Register **/
#define PPLC_WPMR			MMIO32(PPLC_BASE + 0xe4)
/** PPLC_WPSR Write Protection Status Register **/
#define PPLC_WPSR			MMIO32(PPLC_BASE + 0xe8)
/** PPLC_RPR Receive Pointer Register **/
#define PPLC_RPR			MMIO32(PPLC_BASE + 0x100)
/** PPLC_RCR Receive Counter Register **/
#define PPLC_RCR			MMIO32(PPLC_BASE + 0x104)
/** PPLC_TPR Transmit Pointer Register **/
#define PPLC_TPR			MMIO32(PPLC_BASE + 0x108)
/** PPLC_TCR Transmit Counter Register **/
#define PPLC_TCR			MMIO32(PPLC_BASE + 0x10c)
/** PPLC_RNPR Receive Next Pointer Register **/
#define PPLC_RNPR			MMIO32(PPLC_BASE + 0x110)
/** PPLC_RNCR Receive Next Counter Register **/
#define PPLC_RNCR			MMIO32(PPLC_BASE + 0x114)
/** PPLC_TNPR Transmit Next Pointer Register **/
#define PPLC_TNPR			MMIO32(PPLC_BASE + 0x118)
/** PPLC_TNCR Transmit Next Counter Register **/
#define PPLC_TNCR			MMIO32(PPLC_BASE + 0x11c)
/** PPLC_PTCR Transfer Control Register **/
#define PPLC_PTCR			MMIO32(PPLC_BASE + 0x120)
/** PPLC_PTSR Transfer Status Register **/
#define PPLC_PTSR			MMIO32(PPLC_BASE + 0x124)

/**@}*/


/** @defgroup pplc_cr CR Control Register
@{*/

/** PPLC_CR_LASTXFER Last Transfer **/
#define PPLC_CR_LASTXFER		(1 << 24)
/** PPLC_CR_SWRST PPLC Software Reset **/
#define PPLC_CR_SWRST		(1 << 7)
/** PPLC_CR_PPLCDIS PPLC Disable **/
#define PPLC_CR_PPLCDIS		(1 << 1)
/** PPLC_CR_PPLCEN PPLC Enable **/
#define PPLC_CR_PPLCEN		(1 << 0)

/**@}*/

/** @defgroup pplc_mr MR Mode Register
@{*/


#define PPLC_MR_DLYBCS_SHIFT		24
#define PPLC_MR_DLYBCS_MASK		0xff
/** @defgroup pplc_mr_dlybcs DLYBCS Delay Between Chip Selects
@{*/
/**@}*/


#define PPLC_MR_PCS_SHIFT		16
#define PPLC_MR_PCS_MASK		0x0f
/** @defgroup pplc_mr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/

/** PPLC_MR_LLB Local Loopback Enable **/
#define PPLC_MR_LLB		(1 << 7)
/** PPLC_MR_WDRBT Wait Data Read Before Transfer **/
#define PPLC_MR_WDRBT		(1 << 5)
/** PPLC_MR_MODFDIS Mode Fault Detection **/
#define PPLC_MR_MODFDIS		(1 << 4)
/** PPLC_MR_PCSDEC Chip Select Decode **/
#define PPLC_MR_PCSDEC		(1 << 2)
/** PPLC_MR_PS Peripheral Select **/
#define PPLC_MR_PS		(1 << 1)
/** PPLC_MR_MSTR Active Mode **/
#define PPLC_MR_MSTR		(1 << 0)

/**@}*/

/** @defgroup pplc_rdr RDR Receive Data Register
@{*/


#define PPLC_RDR_PCS_SHIFT		16
#define PPLC_RDR_PCS_MASK		0x0f
/** @defgroup pplc_rdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define PPLC_RDR_RD_SHIFT		0
#define PPLC_RDR_RD_MASK		0xffff
/** @defgroup pplc_rdr_rd RD Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_tdr TDR Transmit Data Register
@{*/

/** PPLC_TDR_LASTXFER Last Transfer **/
#define PPLC_TDR_LASTXFER		(1 << 24)

#define PPLC_TDR_PCS_SHIFT		16
#define PPLC_TDR_PCS_MASK		0x0f
/** @defgroup pplc_tdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define PPLC_TDR_TD_SHIFT		0
#define PPLC_TDR_TD_MASK		0xffff
/** @defgroup pplc_tdr_td TD Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_sr SR Status Register
@{*/

/** PPLC_SR_PPLCENS PPLC Enable Status **/
#define PPLC_SR_PPLCENS		(1 << 16)
/** PPLC_SR_UNDES Underrun Error Status (Slave Mode Only) **/
#define PPLC_SR_UNDES		(1 << 10)
/** PPLC_SR_TXEMPTY Transmission Registers Empty **/
#define PPLC_SR_TXEMPTY		(1 << 9)
/** PPLC_SR_NSSR NSS Rising **/
#define PPLC_SR_NSSR		(1 << 8)
/** PPLC_SR_TXBUFE TX Buffer Empty **/
#define PPLC_SR_TXBUFE		(1 << 7)
/** PPLC_SR_RXBUFF RX Buffer Full **/
#define PPLC_SR_RXBUFF		(1 << 6)
/** PPLC_SR_ENDTX End of TX buffer **/
#define PPLC_SR_ENDTX		(1 << 5)
/** PPLC_SR_ENDRX End of RX buffer **/
#define PPLC_SR_ENDRX		(1 << 4)
/** PPLC_SR_OVRES Overrun Error Status **/
#define PPLC_SR_OVRES		(1 << 3)
/** PPLC_SR_MODF Mode Fault Error **/
#define PPLC_SR_MODF		(1 << 2)
/** PPLC_SR_TDRE Transmit Data Register Empty **/
#define PPLC_SR_TDRE		(1 << 1)
/** PPLC_SR_RDRF Receive Data Register Full **/
#define PPLC_SR_RDRF		(1 << 0)

/**@}*/

/** @defgroup pplc_ier IER Interrupt Enable Register
@{*/

/** PPLC_IER_UNDES Underrun Error Interrupt Enable **/
#define PPLC_IER_UNDES		(1 << 10)
/** PPLC_IER_TXEMPTY Transmission Registers Empty Enable **/
#define PPLC_IER_TXEMPTY		(1 << 9)
/** PPLC_IER_NSSR NSS Rising Interrupt Enable **/
#define PPLC_IER_NSSR		(1 << 8)
/** PPLC_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define PPLC_IER_TXBUFE		(1 << 7)
/** PPLC_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define PPLC_IER_RXBUFF		(1 << 6)
/** PPLC_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define PPLC_IER_ENDTX		(1 << 5)
/** PPLC_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define PPLC_IER_ENDRX		(1 << 4)
/** PPLC_IER_OVRES Overrun Error Interrupt Enable **/
#define PPLC_IER_OVRES		(1 << 3)
/** PPLC_IER_MODF Mode Fault Error Interrupt Enable **/
#define PPLC_IER_MODF		(1 << 2)
/** PPLC_IER_TDRE PPLC Transmit Data Register Empty Interrupt Enable **/
#define PPLC_IER_TDRE		(1 << 1)
/** PPLC_IER_RDRF Receive Data Register Full Interrupt Enable **/
#define PPLC_IER_RDRF		(1 << 0)

/**@}*/

/** @defgroup pplc_idr IDR Interrupt Disable Register
@{*/

/** PPLC_IDR_UNDES Underrun Error Interrupt Disable **/
#define PPLC_IDR_UNDES		(1 << 10)
/** PPLC_IDR_TXEMPTY Transmission Registers Empty Disable **/
#define PPLC_IDR_TXEMPTY		(1 << 9)
/** PPLC_IDR_NSSR NSS Rising Interrupt Disable **/
#define PPLC_IDR_NSSR		(1 << 8)
/** PPLC_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define PPLC_IDR_TXBUFE		(1 << 7)
/** PPLC_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define PPLC_IDR_RXBUFF		(1 << 6)
/** PPLC_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define PPLC_IDR_ENDTX		(1 << 5)
/** PPLC_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define PPLC_IDR_ENDRX		(1 << 4)
/** PPLC_IDR_OVRES Overrun Error Interrupt Disable **/
#define PPLC_IDR_OVRES		(1 << 3)
/** PPLC_IDR_MODF Mode Fault Error Interrupt Disable **/
#define PPLC_IDR_MODF		(1 << 2)
/** PPLC_IDR_TDRE PPLC Transmit Data Register Empty Interrupt Disable **/
#define PPLC_IDR_TDRE		(1 << 1)
/** PPLC_IDR_RDRF Receive Data Register Full Interrupt Disable **/
#define PPLC_IDR_RDRF		(1 << 0)

/**@}*/

/** @defgroup pplc_imr IMR Interrupt Mask Register
@{*/

/** PPLC_IMR_UNDES Underrun Error Interrupt Mask **/
#define PPLC_IMR_UNDES		(1 << 10)
/** PPLC_IMR_TXEMPTY Transmission Registers Empty Mask **/
#define PPLC_IMR_TXEMPTY		(1 << 9)
/** PPLC_IMR_NSSR NSS Rising Interrupt Mask **/
#define PPLC_IMR_NSSR		(1 << 8)
/** PPLC_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define PPLC_IMR_TXBUFE		(1 << 7)
/** PPLC_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define PPLC_IMR_RXBUFF		(1 << 6)
/** PPLC_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define PPLC_IMR_ENDTX		(1 << 5)
/** PPLC_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define PPLC_IMR_ENDRX		(1 << 4)
/** PPLC_IMR_OVRES Overrun Error Interrupt Mask **/
#define PPLC_IMR_OVRES		(1 << 3)
/** PPLC_IMR_MODF Mode Fault Error Interrupt Mask **/
#define PPLC_IMR_MODF		(1 << 2)
/** PPLC_IMR_TDRE PPLC Transmit Data Register Empty Interrupt Mask **/
#define PPLC_IMR_TDRE		(1 << 1)
/** PPLC_IMR_RDRF Receive Data Register Full Interrupt Mask **/
#define PPLC_IMR_RDRF		(1 << 0)

/**@}*/

/** @defgroup pplc_csr CSR Chip Select Register
@{*/


#define PPLC_CSR_DLYBCT_SHIFT		24
#define PPLC_CSR_DLYBCT_MASK		0xff
/** @defgroup pplc_csr_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define PPLC_CSR_DLYBS_SHIFT		16
#define PPLC_CSR_DLYBS_MASK		0xff
/** @defgroup pplc_csr_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define PPLC_CSR_SCBR_SHIFT		8
#define PPLC_CSR_SCBR_MASK		0xff
/** @defgroup pplc_csr_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/


#define PPLC_CSR_BITS_SHIFT		4
#define PPLC_CSR_BITS_MASK		0x0f
/** @defgroup pplc_csr_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** PPLC_CSR_CSAAT Chip Select Active After Transfer **/
#define PPLC_CSR_CSAAT		(1 << 3)
/** PPLC_CSR_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define PPLC_CSR_CSNAAT		(1 << 2)
/** PPLC_CSR_NCPHA Clock Phase **/
#define PPLC_CSR_NCPHA		(1 << 1)
/** PPLC_CSR_CPOL Clock Polarity **/
#define PPLC_CSR_CPOL		(1 << 0)

/**@}*/

/** @defgroup pplc_wpmr WPMR Write Protection Control Register
@{*/


#define PPLC_WPMR_WPKEY_SHIFT		8
#define PPLC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pplc_wpmr_wpkey WPKEY Write Protection Key Password
@{*/
/**@}*/

/** PPLC_WPMR_WPEN Write Protection Enable **/
#define PPLC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pplc_wpsr WPSR Write Protection Status Register
@{*/


#define PPLC_WPSR_WPVSRC_SHIFT		8
#define PPLC_WPSR_WPVSRC_MASK		0xff
/** @defgroup pplc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** PPLC_WPSR_WPVS Write Protection Violation Status **/
#define PPLC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup pplc_rpr RPR Receive Pointer Register
@{*/


#define PPLC_RPR_RXPTR_SHIFT		0
#define PPLC_RPR_RXPTR_MASK		0xffffffff
/** @defgroup pplc_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_rcr RCR Receive Counter Register
@{*/


#define PPLC_RCR_RXCTR_SHIFT		0
#define PPLC_RCR_RXCTR_MASK		0xffff
/** @defgroup pplc_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_tpr TPR Transmit Pointer Register
@{*/


#define PPLC_TPR_TXPTR_SHIFT		0
#define PPLC_TPR_TXPTR_MASK		0xffffffff
/** @defgroup pplc_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_tcr TCR Transmit Counter Register
@{*/


#define PPLC_TCR_TXCTR_SHIFT		0
#define PPLC_TCR_TXCTR_MASK		0xffff
/** @defgroup pplc_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_rnpr RNPR Receive Next Pointer Register
@{*/


#define PPLC_RNPR_RXNPTR_SHIFT		0
#define PPLC_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup pplc_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_rncr RNCR Receive Next Counter Register
@{*/


#define PPLC_RNCR_RXNCTR_SHIFT		0
#define PPLC_RNCR_RXNCTR_MASK		0xffff
/** @defgroup pplc_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_tnpr TNPR Transmit Next Pointer Register
@{*/


#define PPLC_TNPR_TXNPTR_SHIFT		0
#define PPLC_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup pplc_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_tncr TNCR Transmit Next Counter Register
@{*/


#define PPLC_TNCR_TXNCTR_SHIFT		0
#define PPLC_TNCR_TXNCTR_MASK		0xffff
/** @defgroup pplc_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup pplc_ptcr PTCR Transfer Control Register
@{*/

/** PPLC_PTCR_TXTDIS Transmitter Transfer Disable **/
#define PPLC_PTCR_TXTDIS		(1 << 9)
/** PPLC_PTCR_TXTEN Transmitter Transfer Enable **/
#define PPLC_PTCR_TXTEN		(1 << 8)
/** PPLC_PTCR_RXTDIS Receiver Transfer Disable **/
#define PPLC_PTCR_RXTDIS		(1 << 1)
/** PPLC_PTCR_RXTEN Receiver Transfer Enable **/
#define PPLC_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup pplc_ptsr PTSR Transfer Status Register
@{*/

/** PPLC_PTSR_TXTEN Transmitter Transfer Enable **/
#define PPLC_PTSR_TXTEN		(1 << 8)
/** PPLC_PTSR_RXTEN Receiver Transfer Enable **/
#define PPLC_PTSR_RXTEN		(1 << 0)

/**@}*/

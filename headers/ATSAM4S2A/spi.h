#pragma once 

/* --- SPI: Serial Peripheral Interface ----------------------------- */

/** @defgroup spi_registers Serial Peripheral Interface Register
@{*/

/** SPI_CR Control Register **/
#define SPI_CR			MMIO32(SPI_BASE + 0x00)
/** SPI_MR Mode Register **/
#define SPI_MR			MMIO32(SPI_BASE + 0x04)
/** SPI_RDR Receive Data Register **/
#define SPI_RDR			MMIO32(SPI_BASE + 0x08)
/** SPI_TDR Transmit Data Register **/
#define SPI_TDR			MMIO32(SPI_BASE + 0x0c)
/** SPI_SR Status Register **/
#define SPI_SR			MMIO32(SPI_BASE + 0x10)
/** SPI_IER Interrupt Enable Register **/
#define SPI_IER			MMIO32(SPI_BASE + 0x14)
/** SPI_IDR Interrupt Disable Register **/
#define SPI_IDR			MMIO32(SPI_BASE + 0x18)
/** SPI_IMR Interrupt Mask Register **/
#define SPI_IMR			MMIO32(SPI_BASE + 0x1c)
/** SPI_CSR[0] Chip Select Register **/
#define SPI_CSR[0]			MMIO32(SPI_BASE + 0x30)
/** SPI_CSR[1] Chip Select Register **/
#define SPI_CSR[1]			MMIO32(SPI_BASE + 0x34)
/** SPI_CSR[2] Chip Select Register **/
#define SPI_CSR[2]			MMIO32(SPI_BASE + 0x38)
/** SPI_CSR[3] Chip Select Register **/
#define SPI_CSR[3]			MMIO32(SPI_BASE + 0x3c)
/** SPI_WPMR Write Protection Mode Register **/
#define SPI_WPMR			MMIO32(SPI_BASE + 0xe4)
/** SPI_WPSR Write Protection Status Register **/
#define SPI_WPSR			MMIO32(SPI_BASE + 0xe8)
/** SPI_RPR Receive Pointer Register **/
#define SPI_RPR			MMIO32(SPI_BASE + 0x100)
/** SPI_RCR Receive Counter Register **/
#define SPI_RCR			MMIO32(SPI_BASE + 0x104)
/** SPI_TPR Transmit Pointer Register **/
#define SPI_TPR			MMIO32(SPI_BASE + 0x108)
/** SPI_TCR Transmit Counter Register **/
#define SPI_TCR			MMIO32(SPI_BASE + 0x10c)
/** SPI_RNPR Receive Next Pointer Register **/
#define SPI_RNPR			MMIO32(SPI_BASE + 0x110)
/** SPI_RNCR Receive Next Counter Register **/
#define SPI_RNCR			MMIO32(SPI_BASE + 0x114)
/** SPI_TNPR Transmit Next Pointer Register **/
#define SPI_TNPR			MMIO32(SPI_BASE + 0x118)
/** SPI_TNCR Transmit Next Counter Register **/
#define SPI_TNCR			MMIO32(SPI_BASE + 0x11c)
/** SPI_PTCR Transfer Control Register **/
#define SPI_PTCR			MMIO32(SPI_BASE + 0x120)
/** SPI_PTSR Transfer Status Register **/
#define SPI_PTSR			MMIO32(SPI_BASE + 0x124)

/**@}*/


/** @defgroup spi_cr CR Control Register
@{*/

/** SPI_CR_LASTXFER Last Transfer **/
#define SPI_CR_LASTXFER		(1 << 24)
/** SPI_CR_SWRST SPI Software Reset **/
#define SPI_CR_SWRST		(1 << 7)
/** SPI_CR_SPIDIS SPI Disable **/
#define SPI_CR_SPIDIS		(1 << 1)
/** SPI_CR_SPIEN SPI Enable **/
#define SPI_CR_SPIEN		(1 << 0)

/**@}*/

/** @defgroup spi_mr MR Mode Register
@{*/


#define SPI_MR_DLYBCS_SHIFT		24
#define SPI_MR_DLYBCS_MASK		0xff
/** @defgroup spi_mr_dlybcs DLYBCS Delay Between Chip Selects
@{*/
/**@}*/


#define SPI_MR_PCS_SHIFT		16
#define SPI_MR_PCS_MASK		0x0f
/** @defgroup spi_mr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/

/** SPI_MR_LLB Local Loopback Enable **/
#define SPI_MR_LLB		(1 << 7)
/** SPI_MR_WDRBT Wait Data Read Before Transfer **/
#define SPI_MR_WDRBT		(1 << 5)
/** SPI_MR_MODFDIS Mode Fault Detection **/
#define SPI_MR_MODFDIS		(1 << 4)
/** SPI_MR_PCSDEC Chip Select Decode **/
#define SPI_MR_PCSDEC		(1 << 2)
/** SPI_MR_PS Peripheral Select **/
#define SPI_MR_PS		(1 << 1)
/** SPI_MR_MSTR Master/Slave Mode **/
#define SPI_MR_MSTR		(1 << 0)

/**@}*/

/** @defgroup spi_rdr RDR Receive Data Register
@{*/


#define SPI_RDR_PCS_SHIFT		16
#define SPI_RDR_PCS_MASK		0x0f
/** @defgroup spi_rdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI_RDR_RD_SHIFT		0
#define SPI_RDR_RD_MASK		0xffff
/** @defgroup spi_rdr_rd RD Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_tdr TDR Transmit Data Register
@{*/

/** SPI_TDR_LASTXFER Last Transfer **/
#define SPI_TDR_LASTXFER		(1 << 24)

#define SPI_TDR_PCS_SHIFT		16
#define SPI_TDR_PCS_MASK		0x0f
/** @defgroup spi_tdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI_TDR_TD_SHIFT		0
#define SPI_TDR_TD_MASK		0xffff
/** @defgroup spi_tdr_td TD Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_sr SR Status Register
@{*/

/** SPI_SR_SPIENS SPI Enable Status **/
#define SPI_SR_SPIENS		(1 << 16)
/** SPI_SR_UNDES Underrun Error Status (Slave mode only) (cleared on read) **/
#define SPI_SR_UNDES		(1 << 10)
/** SPI_SR_TXEMPTY Transmission Registers Empty (cleared by writing SPI_TDR) **/
#define SPI_SR_TXEMPTY		(1 << 9)
/** SPI_SR_NSSR NSS Rising (cleared on read) **/
#define SPI_SR_NSSR		(1 << 8)
/** SPI_SR_TXBUFE TX Buffer Empty (cleared by writing SPI_TCR or SPI_TNCR) **/
#define SPI_SR_TXBUFE		(1 << 7)
/** SPI_SR_RXBUFF RX Buffer Full (cleared by writing SPI_RCR or SPI_RNCR) **/
#define SPI_SR_RXBUFF		(1 << 6)
/** SPI_SR_ENDTX End of TX Buffer (cleared by writing SPI_TCR or SPI_TNCR) **/
#define SPI_SR_ENDTX		(1 << 5)
/** SPI_SR_ENDRX End of RX Buffer (cleared by writing SPI_RCR or SPI_RNCR) **/
#define SPI_SR_ENDRX		(1 << 4)
/** SPI_SR_OVRES Overrun Error Status (cleared on read) **/
#define SPI_SR_OVRES		(1 << 3)
/** SPI_SR_MODF Mode Fault Error (cleared on read) **/
#define SPI_SR_MODF		(1 << 2)
/** SPI_SR_TDRE Transmit Data Register Empty (cleared by writing SPI_TDR) **/
#define SPI_SR_TDRE		(1 << 1)
/** SPI_SR_RDRF Receive Data Register Full (cleared by reading SPI_RDR) **/
#define SPI_SR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi_ier IER Interrupt Enable Register
@{*/

/** SPI_IER_UNDES Underrun Error Interrupt Enable **/
#define SPI_IER_UNDES		(1 << 10)
/** SPI_IER_TXEMPTY Transmission Registers Empty Enable **/
#define SPI_IER_TXEMPTY		(1 << 9)
/** SPI_IER_NSSR NSS Rising Interrupt Enable **/
#define SPI_IER_NSSR		(1 << 8)
/** SPI_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define SPI_IER_TXBUFE		(1 << 7)
/** SPI_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define SPI_IER_RXBUFF		(1 << 6)
/** SPI_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define SPI_IER_ENDTX		(1 << 5)
/** SPI_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define SPI_IER_ENDRX		(1 << 4)
/** SPI_IER_OVRES Overrun Error Interrupt Enable **/
#define SPI_IER_OVRES		(1 << 3)
/** SPI_IER_MODF Mode Fault Error Interrupt Enable **/
#define SPI_IER_MODF		(1 << 2)
/** SPI_IER_TDRE SPI Transmit Data Register Empty Interrupt Enable **/
#define SPI_IER_TDRE		(1 << 1)
/** SPI_IER_RDRF Receive Data Register Full Interrupt Enable **/
#define SPI_IER_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi_idr IDR Interrupt Disable Register
@{*/

/** SPI_IDR_UNDES Underrun Error Interrupt Disable **/
#define SPI_IDR_UNDES		(1 << 10)
/** SPI_IDR_TXEMPTY Transmission Registers Empty Disable **/
#define SPI_IDR_TXEMPTY		(1 << 9)
/** SPI_IDR_NSSR NSS Rising Interrupt Disable **/
#define SPI_IDR_NSSR		(1 << 8)
/** SPI_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define SPI_IDR_TXBUFE		(1 << 7)
/** SPI_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define SPI_IDR_RXBUFF		(1 << 6)
/** SPI_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define SPI_IDR_ENDTX		(1 << 5)
/** SPI_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define SPI_IDR_ENDRX		(1 << 4)
/** SPI_IDR_OVRES Overrun Error Interrupt Disable **/
#define SPI_IDR_OVRES		(1 << 3)
/** SPI_IDR_MODF Mode Fault Error Interrupt Disable **/
#define SPI_IDR_MODF		(1 << 2)
/** SPI_IDR_TDRE SPI Transmit Data Register Empty Interrupt Disable **/
#define SPI_IDR_TDRE		(1 << 1)
/** SPI_IDR_RDRF Receive Data Register Full Interrupt Disable **/
#define SPI_IDR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi_imr IMR Interrupt Mask Register
@{*/

/** SPI_IMR_UNDES Underrun Error Interrupt Mask **/
#define SPI_IMR_UNDES		(1 << 10)
/** SPI_IMR_TXEMPTY Transmission Registers Empty Mask **/
#define SPI_IMR_TXEMPTY		(1 << 9)
/** SPI_IMR_NSSR NSS Rising Interrupt Mask **/
#define SPI_IMR_NSSR		(1 << 8)
/** SPI_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define SPI_IMR_TXBUFE		(1 << 7)
/** SPI_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define SPI_IMR_RXBUFF		(1 << 6)
/** SPI_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define SPI_IMR_ENDTX		(1 << 5)
/** SPI_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define SPI_IMR_ENDRX		(1 << 4)
/** SPI_IMR_OVRES Overrun Error Interrupt Mask **/
#define SPI_IMR_OVRES		(1 << 3)
/** SPI_IMR_MODF Mode Fault Error Interrupt Mask **/
#define SPI_IMR_MODF		(1 << 2)
/** SPI_IMR_TDRE SPI Transmit Data Register Empty Interrupt Mask **/
#define SPI_IMR_TDRE		(1 << 1)
/** SPI_IMR_RDRF Receive Data Register Full Interrupt Mask **/
#define SPI_IMR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi_csr[0] CSR[0] Chip Select Register
@{*/


#define SPI_CSR[0]_DLYBCT_SHIFT		24
#define SPI_CSR[0]_DLYBCT_MASK		0xff
/** @defgroup spi_csr[0]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI_CSR[0]_DLYBS_SHIFT		16
#define SPI_CSR[0]_DLYBS_MASK		0xff
/** @defgroup spi_csr[0]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI_CSR[0]_SCBR_SHIFT		8
#define SPI_CSR[0]_SCBR_MASK		0xff
/** @defgroup spi_csr[0]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI_CSR[0]_BITS_SHIFT		4
#define SPI_CSR[0]_BITS_MASK		0x0f
/** @defgroup spi_csr[0]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI_CSR[0]_CSAAT Chip Select Active After Transfer **/
#define SPI_CSR[0]_CSAAT		(1 << 3)
/** SPI_CSR[0]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI_CSR[0]_CSNAAT		(1 << 2)
/** SPI_CSR[0]_NCPHA Clock Phase **/
#define SPI_CSR[0]_NCPHA		(1 << 1)
/** SPI_CSR[0]_CPOL Clock Polarity **/
#define SPI_CSR[0]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi_csr[1] CSR[1] Chip Select Register
@{*/


#define SPI_CSR[1]_DLYBCT_SHIFT		24
#define SPI_CSR[1]_DLYBCT_MASK		0xff
/** @defgroup spi_csr[1]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI_CSR[1]_DLYBS_SHIFT		16
#define SPI_CSR[1]_DLYBS_MASK		0xff
/** @defgroup spi_csr[1]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI_CSR[1]_SCBR_SHIFT		8
#define SPI_CSR[1]_SCBR_MASK		0xff
/** @defgroup spi_csr[1]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI_CSR[1]_BITS_SHIFT		4
#define SPI_CSR[1]_BITS_MASK		0x0f
/** @defgroup spi_csr[1]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI_CSR[1]_CSAAT Chip Select Active After Transfer **/
#define SPI_CSR[1]_CSAAT		(1 << 3)
/** SPI_CSR[1]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI_CSR[1]_CSNAAT		(1 << 2)
/** SPI_CSR[1]_NCPHA Clock Phase **/
#define SPI_CSR[1]_NCPHA		(1 << 1)
/** SPI_CSR[1]_CPOL Clock Polarity **/
#define SPI_CSR[1]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi_csr[2] CSR[2] Chip Select Register
@{*/


#define SPI_CSR[2]_DLYBCT_SHIFT		24
#define SPI_CSR[2]_DLYBCT_MASK		0xff
/** @defgroup spi_csr[2]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI_CSR[2]_DLYBS_SHIFT		16
#define SPI_CSR[2]_DLYBS_MASK		0xff
/** @defgroup spi_csr[2]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI_CSR[2]_SCBR_SHIFT		8
#define SPI_CSR[2]_SCBR_MASK		0xff
/** @defgroup spi_csr[2]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI_CSR[2]_BITS_SHIFT		4
#define SPI_CSR[2]_BITS_MASK		0x0f
/** @defgroup spi_csr[2]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI_CSR[2]_CSAAT Chip Select Active After Transfer **/
#define SPI_CSR[2]_CSAAT		(1 << 3)
/** SPI_CSR[2]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI_CSR[2]_CSNAAT		(1 << 2)
/** SPI_CSR[2]_NCPHA Clock Phase **/
#define SPI_CSR[2]_NCPHA		(1 << 1)
/** SPI_CSR[2]_CPOL Clock Polarity **/
#define SPI_CSR[2]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi_csr[3] CSR[3] Chip Select Register
@{*/


#define SPI_CSR[3]_DLYBCT_SHIFT		24
#define SPI_CSR[3]_DLYBCT_MASK		0xff
/** @defgroup spi_csr[3]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI_CSR[3]_DLYBS_SHIFT		16
#define SPI_CSR[3]_DLYBS_MASK		0xff
/** @defgroup spi_csr[3]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI_CSR[3]_SCBR_SHIFT		8
#define SPI_CSR[3]_SCBR_MASK		0xff
/** @defgroup spi_csr[3]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI_CSR[3]_BITS_SHIFT		4
#define SPI_CSR[3]_BITS_MASK		0x0f
/** @defgroup spi_csr[3]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI_CSR[3]_CSAAT Chip Select Active After Transfer **/
#define SPI_CSR[3]_CSAAT		(1 << 3)
/** SPI_CSR[3]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI_CSR[3]_CSNAAT		(1 << 2)
/** SPI_CSR[3]_NCPHA Clock Phase **/
#define SPI_CSR[3]_NCPHA		(1 << 1)
/** SPI_CSR[3]_CPOL Clock Polarity **/
#define SPI_CSR[3]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi_wpmr WPMR Write Protection Mode Register
@{*/


#define SPI_WPMR_WPKEY_SHIFT		8
#define SPI_WPMR_WPKEY_MASK		0xffffff
/** @defgroup spi_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** SPI_WPMR_WPEN Write Protection Enable **/
#define SPI_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup spi_wpsr WPSR Write Protection Status Register
@{*/


#define SPI_WPSR_WPVSRC_SHIFT		8
#define SPI_WPSR_WPVSRC_MASK		0xff
/** @defgroup spi_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** SPI_WPSR_WPVS Write Protection Violation Status **/
#define SPI_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup spi_rpr RPR Receive Pointer Register
@{*/


#define SPI_RPR_RXPTR_SHIFT		0
#define SPI_RPR_RXPTR_MASK		0xffffffff
/** @defgroup spi_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_rcr RCR Receive Counter Register
@{*/


#define SPI_RCR_RXCTR_SHIFT		0
#define SPI_RCR_RXCTR_MASK		0xffff
/** @defgroup spi_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_tpr TPR Transmit Pointer Register
@{*/


#define SPI_TPR_TXPTR_SHIFT		0
#define SPI_TPR_TXPTR_MASK		0xffffffff
/** @defgroup spi_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_tcr TCR Transmit Counter Register
@{*/


#define SPI_TCR_TXCTR_SHIFT		0
#define SPI_TCR_TXCTR_MASK		0xffff
/** @defgroup spi_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_rnpr RNPR Receive Next Pointer Register
@{*/


#define SPI_RNPR_RXNPTR_SHIFT		0
#define SPI_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup spi_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_rncr RNCR Receive Next Counter Register
@{*/


#define SPI_RNCR_RXNCTR_SHIFT		0
#define SPI_RNCR_RXNCTR_MASK		0xffff
/** @defgroup spi_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_tnpr TNPR Transmit Next Pointer Register
@{*/


#define SPI_TNPR_TXNPTR_SHIFT		0
#define SPI_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup spi_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_tncr TNCR Transmit Next Counter Register
@{*/


#define SPI_TNCR_TXNCTR_SHIFT		0
#define SPI_TNCR_TXNCTR_MASK		0xffff
/** @defgroup spi_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup spi_ptcr PTCR Transfer Control Register
@{*/

/** SPI_PTCR_TXTDIS Transmitter Transfer Disable **/
#define SPI_PTCR_TXTDIS		(1 << 9)
/** SPI_PTCR_TXTEN Transmitter Transfer Enable **/
#define SPI_PTCR_TXTEN		(1 << 8)
/** SPI_PTCR_RXTDIS Receiver Transfer Disable **/
#define SPI_PTCR_RXTDIS		(1 << 1)
/** SPI_PTCR_RXTEN Receiver Transfer Enable **/
#define SPI_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup spi_ptsr PTSR Transfer Status Register
@{*/

/** SPI_PTSR_TXTEN Transmitter Transfer Enable **/
#define SPI_PTSR_TXTEN		(1 << 8)
/** SPI_PTSR_RXTEN Receiver Transfer Enable **/
#define SPI_PTSR_RXTEN		(1 << 0)

/**@}*/

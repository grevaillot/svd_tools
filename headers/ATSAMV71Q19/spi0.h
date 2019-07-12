#pragma once 

/* --- SPI0: Serial Peripheral Interface ---------------------------- */

/** @defgroup spi0_registers Serial Peripheral Interface Register
@{*/

/** SPI0_SPI_CR Control Register **/
#define SPI0_SPI_CR			MMIO32(SPI0_BASE + 0x00)
/** SPI0_SPI_MR Mode Register **/
#define SPI0_SPI_MR			MMIO32(SPI0_BASE + 0x04)
/** SPI0_SPI_RDR Receive Data Register **/
#define SPI0_SPI_RDR			MMIO32(SPI0_BASE + 0x08)
/** SPI0_SPI_TDR Transmit Data Register **/
#define SPI0_SPI_TDR			MMIO32(SPI0_BASE + 0x0c)
/** SPI0_SPI_SR Status Register **/
#define SPI0_SPI_SR			MMIO32(SPI0_BASE + 0x10)
/** SPI0_SPI_IER Interrupt Enable Register **/
#define SPI0_SPI_IER			MMIO32(SPI0_BASE + 0x14)
/** SPI0_SPI_IDR Interrupt Disable Register **/
#define SPI0_SPI_IDR			MMIO32(SPI0_BASE + 0x18)
/** SPI0_SPI_IMR Interrupt Mask Register **/
#define SPI0_SPI_IMR			MMIO32(SPI0_BASE + 0x1c)
/** SPI0_SPI_CSR[0] Chip Select Register (CS_number = 0) 0 **/
#define SPI0_SPI_CSR[0]			MMIO32(SPI0_BASE + 0x30)
/** SPI0_SPI_CSR[1] Chip Select Register (CS_number = 0) 0 **/
#define SPI0_SPI_CSR[1]			MMIO32(SPI0_BASE + 0x34)
/** SPI0_SPI_CSR[2] Chip Select Register (CS_number = 0) 0 **/
#define SPI0_SPI_CSR[2]			MMIO32(SPI0_BASE + 0x38)
/** SPI0_SPI_CSR[3] Chip Select Register (CS_number = 0) 0 **/
#define SPI0_SPI_CSR[3]			MMIO32(SPI0_BASE + 0x3c)
/** SPI0_SPI_WPMR Write Protection Mode Register **/
#define SPI0_SPI_WPMR			MMIO32(SPI0_BASE + 0xe4)
/** SPI0_SPI_WPSR Write Protection Status Register **/
#define SPI0_SPI_WPSR			MMIO32(SPI0_BASE + 0xe8)
/** SPI0_SPI_VERSION Version Register **/
#define SPI0_SPI_VERSION			MMIO32(SPI0_BASE + 0xfc)

/**@}*/


/** @defgroup spi0_spi_cr SPICR Control Register
@{*/

/** SPI0_SPI_CR_FIFODIS FIFO Disable **/
#define SPI0_SPI_CR_FIFODIS		(1 << 31)
/** SPI0_SPI_CR_FIFOEN FIFO Enable **/
#define SPI0_SPI_CR_FIFOEN		(1 << 30)
/** SPI0_SPI_CR_LASTXFER Last Transfer **/
#define SPI0_SPI_CR_LASTXFER		(1 << 24)
/** SPI0_SPI_CR_RXFCLR Receive FIFO Clear **/
#define SPI0_SPI_CR_RXFCLR		(1 << 17)
/** SPI0_SPI_CR_TXFCLR Transmit FIFO Clear **/
#define SPI0_SPI_CR_TXFCLR		(1 << 16)
/** SPI0_SPI_CR_REQCLR Request to Clear the Comparison Trigger **/
#define SPI0_SPI_CR_REQCLR		(1 << 12)
/** SPI0_SPI_CR_SWRST SPI Software Reset **/
#define SPI0_SPI_CR_SWRST		(1 << 7)
/** SPI0_SPI_CR_SPIDIS SPI Disable **/
#define SPI0_SPI_CR_SPIDIS		(1 << 1)
/** SPI0_SPI_CR_SPIEN SPI Enable **/
#define SPI0_SPI_CR_SPIEN		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_mr SPIMR Mode Register
@{*/


#define SPI0_SPI_MR_DLYBCS_SHIFT		24
#define SPI0_SPI_MR_DLYBCS_MASK		0xff
/** @defgroup spi0_spi_mr_dlybcs DLYBCS Delay Between Chip Selects
@{*/
/**@}*/


#define SPI0_SPI_MR_PCS_SHIFT		16
#define SPI0_SPI_MR_PCS_MASK		0x0f
/** @defgroup spi0_spi_mr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/

/** SPI0_SPI_MR_LLB Local Loopback Enable **/
#define SPI0_SPI_MR_LLB		(1 << 7)
/** SPI0_SPI_MR_WDRBT Wait Data Read Before Transfer **/
#define SPI0_SPI_MR_WDRBT		(1 << 5)
/** SPI0_SPI_MR_MODFDIS Mode Fault Detection **/
#define SPI0_SPI_MR_MODFDIS		(1 << 4)
/** SPI0_SPI_MR_PCSDEC Chip Select Decode **/
#define SPI0_SPI_MR_PCSDEC		(1 << 2)
/** SPI0_SPI_MR_PS Peripheral Select **/
#define SPI0_SPI_MR_PS		(1 << 1)
/** SPI0_SPI_MR_MSTR Master/Slave Mode **/
#define SPI0_SPI_MR_MSTR		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_rdr SPIRDR Receive Data Register
@{*/


#define SPI0_SPI_RDR_PCS_SHIFT		16
#define SPI0_SPI_RDR_PCS_MASK		0x0f
/** @defgroup spi0_spi_rdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI0_SPI_RDR_RD_SHIFT		0
#define SPI0_SPI_RDR_RD_MASK		0xffff
/** @defgroup spi0_spi_rdr_rd RD Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi0_spi_tdr SPITDR Transmit Data Register
@{*/

/** SPI0_SPI_TDR_LASTXFER Last Transfer **/
#define SPI0_SPI_TDR_LASTXFER		(1 << 24)

#define SPI0_SPI_TDR_PCS_SHIFT		16
#define SPI0_SPI_TDR_PCS_MASK		0x0f
/** @defgroup spi0_spi_tdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI0_SPI_TDR_TD_SHIFT		0
#define SPI0_SPI_TDR_TD_MASK		0xffff
/** @defgroup spi0_spi_tdr_td TD Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi0_spi_sr SPISR Status Register
@{*/

/** SPI0_SPI_SR_SPIENS SPI Enable Status **/
#define SPI0_SPI_SR_SPIENS		(1 << 16)
/** SPI0_SPI_SR_UNDES Underrun Error Status (Slave mode only) (cleared on read) **/
#define SPI0_SPI_SR_UNDES		(1 << 10)
/** SPI0_SPI_SR_TXEMPTY Transmission Registers Empty (cleared by writing SPI_TDR) **/
#define SPI0_SPI_SR_TXEMPTY		(1 << 9)
/** SPI0_SPI_SR_NSSR NSS Rising (cleared on read) **/
#define SPI0_SPI_SR_NSSR		(1 << 8)
/** SPI0_SPI_SR_OVRES Overrun Error Status (cleared on read) **/
#define SPI0_SPI_SR_OVRES		(1 << 3)
/** SPI0_SPI_SR_MODF Mode Fault Error (cleared on read) **/
#define SPI0_SPI_SR_MODF		(1 << 2)
/** SPI0_SPI_SR_TDRE Transmit Data Register Empty (cleared by writing SPI_TDR) **/
#define SPI0_SPI_SR_TDRE		(1 << 1)
/** SPI0_SPI_SR_RDRF Receive Data Register Full (cleared by reading SPI_RDR) **/
#define SPI0_SPI_SR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_ier SPIIER Interrupt Enable Register
@{*/

/** SPI0_SPI_IER_UNDES Underrun Error Interrupt Enable **/
#define SPI0_SPI_IER_UNDES		(1 << 10)
/** SPI0_SPI_IER_TXEMPTY Transmission Registers Empty Enable **/
#define SPI0_SPI_IER_TXEMPTY		(1 << 9)
/** SPI0_SPI_IER_NSSR NSS Rising Interrupt Enable **/
#define SPI0_SPI_IER_NSSR		(1 << 8)
/** SPI0_SPI_IER_OVRES Overrun Error Interrupt Enable **/
#define SPI0_SPI_IER_OVRES		(1 << 3)
/** SPI0_SPI_IER_MODF Mode Fault Error Interrupt Enable **/
#define SPI0_SPI_IER_MODF		(1 << 2)
/** SPI0_SPI_IER_TDRE SPI Transmit Data Register Empty Interrupt Enable **/
#define SPI0_SPI_IER_TDRE		(1 << 1)
/** SPI0_SPI_IER_RDRF Receive Data Register Full Interrupt Enable **/
#define SPI0_SPI_IER_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_idr SPIIDR Interrupt Disable Register
@{*/

/** SPI0_SPI_IDR_UNDES Underrun Error Interrupt Disable **/
#define SPI0_SPI_IDR_UNDES		(1 << 10)
/** SPI0_SPI_IDR_TXEMPTY Transmission Registers Empty Disable **/
#define SPI0_SPI_IDR_TXEMPTY		(1 << 9)
/** SPI0_SPI_IDR_NSSR NSS Rising Interrupt Disable **/
#define SPI0_SPI_IDR_NSSR		(1 << 8)
/** SPI0_SPI_IDR_OVRES Overrun Error Interrupt Disable **/
#define SPI0_SPI_IDR_OVRES		(1 << 3)
/** SPI0_SPI_IDR_MODF Mode Fault Error Interrupt Disable **/
#define SPI0_SPI_IDR_MODF		(1 << 2)
/** SPI0_SPI_IDR_TDRE SPI Transmit Data Register Empty Interrupt Disable **/
#define SPI0_SPI_IDR_TDRE		(1 << 1)
/** SPI0_SPI_IDR_RDRF Receive Data Register Full Interrupt Disable **/
#define SPI0_SPI_IDR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_imr SPIIMR Interrupt Mask Register
@{*/

/** SPI0_SPI_IMR_UNDES Underrun Error Interrupt Mask **/
#define SPI0_SPI_IMR_UNDES		(1 << 10)
/** SPI0_SPI_IMR_TXEMPTY Transmission Registers Empty Mask **/
#define SPI0_SPI_IMR_TXEMPTY		(1 << 9)
/** SPI0_SPI_IMR_NSSR NSS Rising Interrupt Mask **/
#define SPI0_SPI_IMR_NSSR		(1 << 8)
/** SPI0_SPI_IMR_OVRES Overrun Error Interrupt Mask **/
#define SPI0_SPI_IMR_OVRES		(1 << 3)
/** SPI0_SPI_IMR_MODF Mode Fault Error Interrupt Mask **/
#define SPI0_SPI_IMR_MODF		(1 << 2)
/** SPI0_SPI_IMR_TDRE SPI Transmit Data Register Empty Interrupt Mask **/
#define SPI0_SPI_IMR_TDRE		(1 << 1)
/** SPI0_SPI_IMR_RDRF Receive Data Register Full Interrupt Mask **/
#define SPI0_SPI_IMR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_csr[0] SPICSR[0] Chip Select Register (CS_number = 0) 0
@{*/


#define SPI0_SPI_CSR[0]_DLYBCT_SHIFT		24
#define SPI0_SPI_CSR[0]_DLYBCT_MASK		0xff
/** @defgroup spi0_spi_csr[0]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI0_SPI_CSR[0]_DLYBS_SHIFT		16
#define SPI0_SPI_CSR[0]_DLYBS_MASK		0xff
/** @defgroup spi0_spi_csr[0]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI0_SPI_CSR[0]_SCBR_SHIFT		8
#define SPI0_SPI_CSR[0]_SCBR_MASK		0xff
/** @defgroup spi0_spi_csr[0]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI0_SPI_CSR[0]_BITS_SHIFT		4
#define SPI0_SPI_CSR[0]_BITS_MASK		0x0f
/** @defgroup spi0_spi_csr[0]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI0_SPI_CSR[0]_CSAAT Chip Select Active After Transfer **/
#define SPI0_SPI_CSR[0]_CSAAT		(1 << 3)
/** SPI0_SPI_CSR[0]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI0_SPI_CSR[0]_CSNAAT		(1 << 2)
/** SPI0_SPI_CSR[0]_NCPHA Clock Phase **/
#define SPI0_SPI_CSR[0]_NCPHA		(1 << 1)
/** SPI0_SPI_CSR[0]_CPOL Clock Polarity **/
#define SPI0_SPI_CSR[0]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_csr[1] SPICSR[1] Chip Select Register (CS_number = 0) 0
@{*/


#define SPI0_SPI_CSR[1]_DLYBCT_SHIFT		24
#define SPI0_SPI_CSR[1]_DLYBCT_MASK		0xff
/** @defgroup spi0_spi_csr[1]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI0_SPI_CSR[1]_DLYBS_SHIFT		16
#define SPI0_SPI_CSR[1]_DLYBS_MASK		0xff
/** @defgroup spi0_spi_csr[1]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI0_SPI_CSR[1]_SCBR_SHIFT		8
#define SPI0_SPI_CSR[1]_SCBR_MASK		0xff
/** @defgroup spi0_spi_csr[1]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI0_SPI_CSR[1]_BITS_SHIFT		4
#define SPI0_SPI_CSR[1]_BITS_MASK		0x0f
/** @defgroup spi0_spi_csr[1]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI0_SPI_CSR[1]_CSAAT Chip Select Active After Transfer **/
#define SPI0_SPI_CSR[1]_CSAAT		(1 << 3)
/** SPI0_SPI_CSR[1]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI0_SPI_CSR[1]_CSNAAT		(1 << 2)
/** SPI0_SPI_CSR[1]_NCPHA Clock Phase **/
#define SPI0_SPI_CSR[1]_NCPHA		(1 << 1)
/** SPI0_SPI_CSR[1]_CPOL Clock Polarity **/
#define SPI0_SPI_CSR[1]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_csr[2] SPICSR[2] Chip Select Register (CS_number = 0) 0
@{*/


#define SPI0_SPI_CSR[2]_DLYBCT_SHIFT		24
#define SPI0_SPI_CSR[2]_DLYBCT_MASK		0xff
/** @defgroup spi0_spi_csr[2]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI0_SPI_CSR[2]_DLYBS_SHIFT		16
#define SPI0_SPI_CSR[2]_DLYBS_MASK		0xff
/** @defgroup spi0_spi_csr[2]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI0_SPI_CSR[2]_SCBR_SHIFT		8
#define SPI0_SPI_CSR[2]_SCBR_MASK		0xff
/** @defgroup spi0_spi_csr[2]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI0_SPI_CSR[2]_BITS_SHIFT		4
#define SPI0_SPI_CSR[2]_BITS_MASK		0x0f
/** @defgroup spi0_spi_csr[2]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI0_SPI_CSR[2]_CSAAT Chip Select Active After Transfer **/
#define SPI0_SPI_CSR[2]_CSAAT		(1 << 3)
/** SPI0_SPI_CSR[2]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI0_SPI_CSR[2]_CSNAAT		(1 << 2)
/** SPI0_SPI_CSR[2]_NCPHA Clock Phase **/
#define SPI0_SPI_CSR[2]_NCPHA		(1 << 1)
/** SPI0_SPI_CSR[2]_CPOL Clock Polarity **/
#define SPI0_SPI_CSR[2]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_csr[3] SPICSR[3] Chip Select Register (CS_number = 0) 0
@{*/


#define SPI0_SPI_CSR[3]_DLYBCT_SHIFT		24
#define SPI0_SPI_CSR[3]_DLYBCT_MASK		0xff
/** @defgroup spi0_spi_csr[3]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI0_SPI_CSR[3]_DLYBS_SHIFT		16
#define SPI0_SPI_CSR[3]_DLYBS_MASK		0xff
/** @defgroup spi0_spi_csr[3]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI0_SPI_CSR[3]_SCBR_SHIFT		8
#define SPI0_SPI_CSR[3]_SCBR_MASK		0xff
/** @defgroup spi0_spi_csr[3]_scbr SCBR Serial Clock Bit Rate
@{*/
/**@}*/


#define SPI0_SPI_CSR[3]_BITS_SHIFT		4
#define SPI0_SPI_CSR[3]_BITS_MASK		0x0f
/** @defgroup spi0_spi_csr[3]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI0_SPI_CSR[3]_CSAAT Chip Select Active After Transfer **/
#define SPI0_SPI_CSR[3]_CSAAT		(1 << 3)
/** SPI0_SPI_CSR[3]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI0_SPI_CSR[3]_CSNAAT		(1 << 2)
/** SPI0_SPI_CSR[3]_NCPHA Clock Phase **/
#define SPI0_SPI_CSR[3]_NCPHA		(1 << 1)
/** SPI0_SPI_CSR[3]_CPOL Clock Polarity **/
#define SPI0_SPI_CSR[3]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_wpmr SPIWPMR Write Protection Mode Register
@{*/


#define SPI0_SPI_WPMR_WPKEY_SHIFT		8
#define SPI0_SPI_WPMR_WPKEY_MASK		0xffffff
/** @defgroup spi0_spi_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** SPI0_SPI_WPMR_WPEN Write Protection Enable **/
#define SPI0_SPI_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_wpsr SPIWPSR Write Protection Status Register
@{*/


#define SPI0_SPI_WPSR_WPVSRC_SHIFT		8
#define SPI0_SPI_WPSR_WPVSRC_MASK		0xff
/** @defgroup spi0_spi_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** SPI0_SPI_WPSR_WPVS Write Protection Violation Status **/
#define SPI0_SPI_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup spi0_spi_version SPIVERSION Version Register
@{*/


#define SPI0_SPI_VERSION_MFN_SHIFT		16
#define SPI0_SPI_VERSION_MFN_MASK		0x07
/** @defgroup spi0_spi_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define SPI0_SPI_VERSION_VERSION_SHIFT		0
#define SPI0_SPI_VERSION_VERSION_MASK		0xfff
/** @defgroup spi0_spi_version_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- SPI1: Serial Peripheral Interface 1 -------------------------- */

/** @defgroup spi1_registers Serial Peripheral Interface 1 Register
@{*/

/** SPI1_CR Control Register **/
#define SPI1_CR			MMIO32(SPI1_BASE + 0x00)
/** SPI1_MR Mode Register **/
#define SPI1_MR			MMIO32(SPI1_BASE + 0x04)
/** SPI1_RDR Receive Data Register **/
#define SPI1_RDR			MMIO32(SPI1_BASE + 0x08)
/** SPI1_TDR Transmit Data Register **/
#define SPI1_TDR			MMIO32(SPI1_BASE + 0x0c)
/** SPI1_SR Status Register **/
#define SPI1_SR			MMIO32(SPI1_BASE + 0x10)
/** SPI1_IER Interrupt Enable Register **/
#define SPI1_IER			MMIO32(SPI1_BASE + 0x14)
/** SPI1_IDR Interrupt Disable Register **/
#define SPI1_IDR			MMIO32(SPI1_BASE + 0x18)
/** SPI1_IMR Interrupt Mask Register **/
#define SPI1_IMR			MMIO32(SPI1_BASE + 0x1c)
/** SPI1_CSR[0] Chip Select Register **/
#define SPI1_CSR[0]			MMIO32(SPI1_BASE + 0x30)
/** SPI1_CSR[1] Chip Select Register **/
#define SPI1_CSR[1]			MMIO32(SPI1_BASE + 0x34)
/** SPI1_CSR[2] Chip Select Register **/
#define SPI1_CSR[2]			MMIO32(SPI1_BASE + 0x38)
/** SPI1_CSR[3] Chip Select Register **/
#define SPI1_CSR[3]			MMIO32(SPI1_BASE + 0x3c)
/** SPI1_WPMR Write Protection Control Register **/
#define SPI1_WPMR			MMIO32(SPI1_BASE + 0xe4)
/** SPI1_WPSR Write Protection Status Register **/
#define SPI1_WPSR			MMIO32(SPI1_BASE + 0xe8)

/**@}*/


/** @defgroup spi1_cr CR Control Register
@{*/

/** SPI1_CR_LASTXFER Last Transfer **/
#define SPI1_CR_LASTXFER		(1 << 24)
/** SPI1_CR_SWRST SPI Software Reset **/
#define SPI1_CR_SWRST		(1 << 7)
/** SPI1_CR_SPIDIS SPI Disable **/
#define SPI1_CR_SPIDIS		(1 << 1)
/** SPI1_CR_SPIEN SPI Enable **/
#define SPI1_CR_SPIEN		(1 << 0)

/**@}*/

/** @defgroup spi1_mr MR Mode Register
@{*/


#define SPI1_MR_DLYBCS_SHIFT		24
#define SPI1_MR_DLYBCS_MASK		0xff
/** @defgroup spi1_mr_dlybcs DLYBCS Delay Between Chip Selects
@{*/
/**@}*/


#define SPI1_MR_PCS_SHIFT		16
#define SPI1_MR_PCS_MASK		0x0f
/** @defgroup spi1_mr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/

/** SPI1_MR_LLB Local Loopback Enable **/
#define SPI1_MR_LLB		(1 << 7)
/** SPI1_MR_WDRBT Wait Data Read Before Transfer **/
#define SPI1_MR_WDRBT		(1 << 5)
/** SPI1_MR_MODFDIS Mode Fault Detection **/
#define SPI1_MR_MODFDIS		(1 << 4)
/** SPI1_MR_PCSDEC Chip Select Decode **/
#define SPI1_MR_PCSDEC		(1 << 2)
/** SPI1_MR_PS Peripheral Select **/
#define SPI1_MR_PS		(1 << 1)
/** SPI1_MR_MSTR Master/Slave Mode **/
#define SPI1_MR_MSTR		(1 << 0)

/**@}*/

/** @defgroup spi1_rdr RDR Receive Data Register
@{*/


#define SPI1_RDR_PCS_SHIFT		16
#define SPI1_RDR_PCS_MASK		0x0f
/** @defgroup spi1_rdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI1_RDR_RD_SHIFT		0
#define SPI1_RDR_RD_MASK		0xffff
/** @defgroup spi1_rdr_rd RD Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_tdr TDR Transmit Data Register
@{*/

/** SPI1_TDR_LASTXFER Last Transfer **/
#define SPI1_TDR_LASTXFER		(1 << 24)

#define SPI1_TDR_PCS_SHIFT		16
#define SPI1_TDR_PCS_MASK		0x0f
/** @defgroup spi1_tdr_pcs PCS Peripheral Chip Select
@{*/
/**@}*/


#define SPI1_TDR_TD_SHIFT		0
#define SPI1_TDR_TD_MASK		0xffff
/** @defgroup spi1_tdr_td TD Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_sr SR Status Register
@{*/

/** SPI1_SR_SPIENS SPI Enable Status **/
#define SPI1_SR_SPIENS		(1 << 16)
/** SPI1_SR_UNDES Underrun Error Status (Slave Mode Only) **/
#define SPI1_SR_UNDES		(1 << 10)
/** SPI1_SR_TXEMPTY Transmission Registers Empty **/
#define SPI1_SR_TXEMPTY		(1 << 9)
/** SPI1_SR_NSSR NSS Rising **/
#define SPI1_SR_NSSR		(1 << 8)
/** SPI1_SR_OVRES Overrun Error Status **/
#define SPI1_SR_OVRES		(1 << 3)
/** SPI1_SR_MODF Mode Fault Error **/
#define SPI1_SR_MODF		(1 << 2)
/** SPI1_SR_TDRE Transmit Data Register Empty **/
#define SPI1_SR_TDRE		(1 << 1)
/** SPI1_SR_RDRF Receive Data Register Full **/
#define SPI1_SR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi1_ier IER Interrupt Enable Register
@{*/

/** SPI1_IER_UNDES Underrun Error Interrupt Enable **/
#define SPI1_IER_UNDES		(1 << 10)
/** SPI1_IER_TXEMPTY Transmission Registers Empty Enable **/
#define SPI1_IER_TXEMPTY		(1 << 9)
/** SPI1_IER_NSSR NSS Rising Interrupt Enable **/
#define SPI1_IER_NSSR		(1 << 8)
/** SPI1_IER_OVRES Overrun Error Interrupt Enable **/
#define SPI1_IER_OVRES		(1 << 3)
/** SPI1_IER_MODF Mode Fault Error Interrupt Enable **/
#define SPI1_IER_MODF		(1 << 2)
/** SPI1_IER_TDRE SPI Transmit Data Register Empty Interrupt Enable **/
#define SPI1_IER_TDRE		(1 << 1)
/** SPI1_IER_RDRF Receive Data Register Full Interrupt Enable **/
#define SPI1_IER_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi1_idr IDR Interrupt Disable Register
@{*/

/** SPI1_IDR_UNDES Underrun Error Interrupt Disable **/
#define SPI1_IDR_UNDES		(1 << 10)
/** SPI1_IDR_TXEMPTY Transmission Registers Empty Disable **/
#define SPI1_IDR_TXEMPTY		(1 << 9)
/** SPI1_IDR_NSSR NSS Rising Interrupt Disable **/
#define SPI1_IDR_NSSR		(1 << 8)
/** SPI1_IDR_OVRES Overrun Error Interrupt Disable **/
#define SPI1_IDR_OVRES		(1 << 3)
/** SPI1_IDR_MODF Mode Fault Error Interrupt Disable **/
#define SPI1_IDR_MODF		(1 << 2)
/** SPI1_IDR_TDRE SPI Transmit Data Register Empty Interrupt Disable **/
#define SPI1_IDR_TDRE		(1 << 1)
/** SPI1_IDR_RDRF Receive Data Register Full Interrupt Disable **/
#define SPI1_IDR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi1_imr IMR Interrupt Mask Register
@{*/

/** SPI1_IMR_UNDES Underrun Error Interrupt Mask **/
#define SPI1_IMR_UNDES		(1 << 10)
/** SPI1_IMR_TXEMPTY Transmission Registers Empty Mask **/
#define SPI1_IMR_TXEMPTY		(1 << 9)
/** SPI1_IMR_NSSR NSS Rising Interrupt Mask **/
#define SPI1_IMR_NSSR		(1 << 8)
/** SPI1_IMR_OVRES Overrun Error Interrupt Mask **/
#define SPI1_IMR_OVRES		(1 << 3)
/** SPI1_IMR_MODF Mode Fault Error Interrupt Mask **/
#define SPI1_IMR_MODF		(1 << 2)
/** SPI1_IMR_TDRE SPI Transmit Data Register Empty Interrupt Mask **/
#define SPI1_IMR_TDRE		(1 << 1)
/** SPI1_IMR_RDRF Receive Data Register Full Interrupt Mask **/
#define SPI1_IMR_RDRF		(1 << 0)

/**@}*/

/** @defgroup spi1_csr[0] CSR[0] Chip Select Register
@{*/


#define SPI1_CSR[0]_DLYBCT_SHIFT		24
#define SPI1_CSR[0]_DLYBCT_MASK		0xff
/** @defgroup spi1_csr[0]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI1_CSR[0]_DLYBS_SHIFT		16
#define SPI1_CSR[0]_DLYBS_MASK		0xff
/** @defgroup spi1_csr[0]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI1_CSR[0]_SCBR_SHIFT		8
#define SPI1_CSR[0]_SCBR_MASK		0xff
/** @defgroup spi1_csr[0]_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/


#define SPI1_CSR[0]_BITS_SHIFT		4
#define SPI1_CSR[0]_BITS_MASK		0x0f
/** @defgroup spi1_csr[0]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI1_CSR[0]_CSAAT Chip Select Active After Transfer **/
#define SPI1_CSR[0]_CSAAT		(1 << 3)
/** SPI1_CSR[0]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI1_CSR[0]_CSNAAT		(1 << 2)
/** SPI1_CSR[0]_NCPHA Clock Phase **/
#define SPI1_CSR[0]_NCPHA		(1 << 1)
/** SPI1_CSR[0]_CPOL Clock Polarity **/
#define SPI1_CSR[0]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi1_csr[1] CSR[1] Chip Select Register
@{*/


#define SPI1_CSR[1]_DLYBCT_SHIFT		24
#define SPI1_CSR[1]_DLYBCT_MASK		0xff
/** @defgroup spi1_csr[1]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI1_CSR[1]_DLYBS_SHIFT		16
#define SPI1_CSR[1]_DLYBS_MASK		0xff
/** @defgroup spi1_csr[1]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI1_CSR[1]_SCBR_SHIFT		8
#define SPI1_CSR[1]_SCBR_MASK		0xff
/** @defgroup spi1_csr[1]_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/


#define SPI1_CSR[1]_BITS_SHIFT		4
#define SPI1_CSR[1]_BITS_MASK		0x0f
/** @defgroup spi1_csr[1]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI1_CSR[1]_CSAAT Chip Select Active After Transfer **/
#define SPI1_CSR[1]_CSAAT		(1 << 3)
/** SPI1_CSR[1]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI1_CSR[1]_CSNAAT		(1 << 2)
/** SPI1_CSR[1]_NCPHA Clock Phase **/
#define SPI1_CSR[1]_NCPHA		(1 << 1)
/** SPI1_CSR[1]_CPOL Clock Polarity **/
#define SPI1_CSR[1]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi1_csr[2] CSR[2] Chip Select Register
@{*/


#define SPI1_CSR[2]_DLYBCT_SHIFT		24
#define SPI1_CSR[2]_DLYBCT_MASK		0xff
/** @defgroup spi1_csr[2]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI1_CSR[2]_DLYBS_SHIFT		16
#define SPI1_CSR[2]_DLYBS_MASK		0xff
/** @defgroup spi1_csr[2]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI1_CSR[2]_SCBR_SHIFT		8
#define SPI1_CSR[2]_SCBR_MASK		0xff
/** @defgroup spi1_csr[2]_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/


#define SPI1_CSR[2]_BITS_SHIFT		4
#define SPI1_CSR[2]_BITS_MASK		0x0f
/** @defgroup spi1_csr[2]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI1_CSR[2]_CSAAT Chip Select Active After Transfer **/
#define SPI1_CSR[2]_CSAAT		(1 << 3)
/** SPI1_CSR[2]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI1_CSR[2]_CSNAAT		(1 << 2)
/** SPI1_CSR[2]_NCPHA Clock Phase **/
#define SPI1_CSR[2]_NCPHA		(1 << 1)
/** SPI1_CSR[2]_CPOL Clock Polarity **/
#define SPI1_CSR[2]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi1_csr[3] CSR[3] Chip Select Register
@{*/


#define SPI1_CSR[3]_DLYBCT_SHIFT		24
#define SPI1_CSR[3]_DLYBCT_MASK		0xff
/** @defgroup spi1_csr[3]_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define SPI1_CSR[3]_DLYBS_SHIFT		16
#define SPI1_CSR[3]_DLYBS_MASK		0xff
/** @defgroup spi1_csr[3]_dlybs DLYBS Delay Before SPCK
@{*/
/**@}*/


#define SPI1_CSR[3]_SCBR_SHIFT		8
#define SPI1_CSR[3]_SCBR_MASK		0xff
/** @defgroup spi1_csr[3]_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/


#define SPI1_CSR[3]_BITS_SHIFT		4
#define SPI1_CSR[3]_BITS_MASK		0x0f
/** @defgroup spi1_csr[3]_bits BITS Bits Per Transfer
@{*/
/**@}*/

/** SPI1_CSR[3]_CSAAT Chip Select Active After Transfer **/
#define SPI1_CSR[3]_CSAAT		(1 << 3)
/** SPI1_CSR[3]_CSNAAT Chip Select Not Active After Transfer (Ignored if CSAAT = 1) **/
#define SPI1_CSR[3]_CSNAAT		(1 << 2)
/** SPI1_CSR[3]_NCPHA Clock Phase **/
#define SPI1_CSR[3]_NCPHA		(1 << 1)
/** SPI1_CSR[3]_CPOL Clock Polarity **/
#define SPI1_CSR[3]_CPOL		(1 << 0)

/**@}*/

/** @defgroup spi1_wpmr WPMR Write Protection Control Register
@{*/


#define SPI1_WPMR_WPKEY_SHIFT		8
#define SPI1_WPMR_WPKEY_MASK		0xffffff
/** @defgroup spi1_wpmr_wpkey WPKEY Write Protect Key
@{*/
/**@}*/

/** SPI1_WPMR_WPEN Write Protect Enable **/
#define SPI1_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup spi1_wpsr WPSR Write Protection Status Register
@{*/


#define SPI1_WPSR_WPVSRC_SHIFT		8
#define SPI1_WPSR_WPVSRC_MASK		0xff
/** @defgroup spi1_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** SPI1_WPSR_WPVS Write Protection Violation Status **/
#define SPI1_WPSR_WPVS		(1 << 0)

/**@}*/

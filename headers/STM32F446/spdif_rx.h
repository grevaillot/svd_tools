#pragma once 

/* --- SPDIF_RX: Receiver Interface --------------------------------- */

/** @defgroup spdif_rx_registers Receiver Interface Register
@{*/

/** SPDIF_RX_CR Control register **/
#define SPDIF_RX_CR			MMIO32(SPDIF_RX_BASE + 0x00)
/** SPDIF_RX_IMR Interrupt mask register **/
#define SPDIF_RX_IMR			MMIO32(SPDIF_RX_BASE + 0x04)
/** SPDIF_RX_SR Status register **/
#define SPDIF_RX_SR			MMIO32(SPDIF_RX_BASE + 0x08)
/** SPDIF_RX_IFCR Interrupt Flag Clear register **/
#define SPDIF_RX_IFCR			MMIO32(SPDIF_RX_BASE + 0x0c)
/** SPDIF_RX_DR Data input register **/
#define SPDIF_RX_DR			MMIO32(SPDIF_RX_BASE + 0x10)
/** SPDIF_RX_CSR Channel Status register **/
#define SPDIF_RX_CSR			MMIO32(SPDIF_RX_BASE + 0x14)
/** SPDIF_RX_DIR Debug Information register **/
#define SPDIF_RX_DIR			MMIO32(SPDIF_RX_BASE + 0x18)

/**@}*/


/** @defgroup spdif_rx_cr CR Control register
@{*/


#define SPDIF_RX_CR_INSEL_SHIFT		16
#define SPDIF_RX_CR_INSEL_MASK		0x07
/** @defgroup spdif_rx_cr_insel INSEL input selection
@{*/
/**@}*/

/** SPDIF_RX_CR_WFA Wait For Activity **/
#define SPDIF_RX_CR_WFA		(1 << 14)

#define SPDIF_RX_CR_NBTR_SHIFT		12
#define SPDIF_RX_CR_NBTR_MASK		0x03
/** @defgroup spdif_rx_cr_nbtr NBTR Maximum allowed re-tries during synchronization phase
@{*/
/**@}*/

/** SPDIF_RX_CR_CHSEL Channel Selection **/
#define SPDIF_RX_CR_CHSEL		(1 << 11)
/** SPDIF_RX_CR_CBDMAEN Control Buffer DMA ENable for control flow **/
#define SPDIF_RX_CR_CBDMAEN		(1 << 10)
/** SPDIF_RX_CR_PTMSK Mask of Preamble Type bits **/
#define SPDIF_RX_CR_PTMSK		(1 << 9)
/** SPDIF_RX_CR_CUMSK Mask of channel status and user bits **/
#define SPDIF_RX_CR_CUMSK		(1 << 8)
/** SPDIF_RX_CR_VMSK Mask of Validity bit **/
#define SPDIF_RX_CR_VMSK		(1 << 7)
/** SPDIF_RX_CR_PMSK Mask Parity error bit **/
#define SPDIF_RX_CR_PMSK		(1 << 6)

#define SPDIF_RX_CR_DRFMT_SHIFT		4
#define SPDIF_RX_CR_DRFMT_MASK		0x03
/** @defgroup spdif_rx_cr_drfmt DRFMT RX Data format
@{*/
/**@}*/

/** SPDIF_RX_CR_RXSTEO STerEO Mode **/
#define SPDIF_RX_CR_RXSTEO		(1 << 3)
/** SPDIF_RX_CR_RXDMAEN Receiver DMA ENable for data flow **/
#define SPDIF_RX_CR_RXDMAEN		(1 << 2)

#define SPDIF_RX_CR_SPDIFEN_SHIFT		0
#define SPDIF_RX_CR_SPDIFEN_MASK		0x03
/** @defgroup spdif_rx_cr_spdifen SPDIFEN Peripheral Block Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup spdif_rx_imr IMR Interrupt mask register
@{*/

/** SPDIF_RX_IMR_IFEIE Serial Interface Error Interrupt Enable **/
#define SPDIF_RX_IMR_IFEIE		(1 << 6)
/** SPDIF_RX_IMR_SYNCDIE Synchronization Done **/
#define SPDIF_RX_IMR_SYNCDIE		(1 << 5)
/** SPDIF_RX_IMR_SBLKIE Synchronization Block Detected Interrupt Enable **/
#define SPDIF_RX_IMR_SBLKIE		(1 << 4)
/** SPDIF_RX_IMR_OVRIE Overrun error Interrupt Enable **/
#define SPDIF_RX_IMR_OVRIE		(1 << 3)
/** SPDIF_RX_IMR_PERRIE Parity error interrupt enable **/
#define SPDIF_RX_IMR_PERRIE		(1 << 2)
/** SPDIF_RX_IMR_CSRNEIE Control Buffer Ready Interrupt Enable **/
#define SPDIF_RX_IMR_CSRNEIE		(1 << 1)
/** SPDIF_RX_IMR_RXNEIE RXNE interrupt enable **/
#define SPDIF_RX_IMR_RXNEIE		(1 << 0)

/**@}*/

/** @defgroup spdif_rx_sr SR Status register
@{*/


#define SPDIF_RX_SR_WIDTH5_SHIFT		16
#define SPDIF_RX_SR_WIDTH5_MASK		0x7fff
/** @defgroup spdif_rx_sr_width5 WIDTH5 Duration of 5 symbols counted with SPDIF_CLK
@{*/
/**@}*/

/** SPDIF_RX_SR_TERR Time-out error **/
#define SPDIF_RX_SR_TERR		(1 << 8)
/** SPDIF_RX_SR_SERR Synchronization error **/
#define SPDIF_RX_SR_SERR		(1 << 7)
/** SPDIF_RX_SR_FERR Framing error **/
#define SPDIF_RX_SR_FERR		(1 << 6)
/** SPDIF_RX_SR_SYNCD Synchronization Done **/
#define SPDIF_RX_SR_SYNCD		(1 << 5)
/** SPDIF_RX_SR_SBD Synchronization Block Detected **/
#define SPDIF_RX_SR_SBD		(1 << 4)
/** SPDIF_RX_SR_OVR Overrun error **/
#define SPDIF_RX_SR_OVR		(1 << 3)
/** SPDIF_RX_SR_PERR Parity error **/
#define SPDIF_RX_SR_PERR		(1 << 2)
/** SPDIF_RX_SR_CSRNE Control Buffer register is not empty **/
#define SPDIF_RX_SR_CSRNE		(1 << 1)
/** SPDIF_RX_SR_RXNE Read data register not empty **/
#define SPDIF_RX_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup spdif_rx_ifcr IFCR Interrupt Flag Clear register
@{*/

/** SPDIF_RX_IFCR_SYNCDCF Clears the Synchronization Done flag **/
#define SPDIF_RX_IFCR_SYNCDCF		(1 << 5)
/** SPDIF_RX_IFCR_SBDCF Clears the Synchronization Block Detected flag **/
#define SPDIF_RX_IFCR_SBDCF		(1 << 4)
/** SPDIF_RX_IFCR_OVRCF Clears the Overrun error flag **/
#define SPDIF_RX_IFCR_OVRCF		(1 << 3)
/** SPDIF_RX_IFCR_PERRCF Clears the Parity error flag **/
#define SPDIF_RX_IFCR_PERRCF		(1 << 2)

/**@}*/

/** @defgroup spdif_rx_dr DR Data input register
@{*/


#define SPDIF_RX_DR_PT_SHIFT		28
#define SPDIF_RX_DR_PT_MASK		0x03
/** @defgroup spdif_rx_dr_pt PT Preamble Type
@{*/
/**@}*/

/** SPDIF_RX_DR_C Channel Status bit **/
#define SPDIF_RX_DR_C		(1 << 27)
/** SPDIF_RX_DR_U User bit **/
#define SPDIF_RX_DR_U		(1 << 26)
/** SPDIF_RX_DR_V Validity bit **/
#define SPDIF_RX_DR_V		(1 << 25)
/** SPDIF_RX_DR_PE Parity Error bit **/
#define SPDIF_RX_DR_PE		(1 << 24)

#define SPDIF_RX_DR_DR_SHIFT		0
#define SPDIF_RX_DR_DR_MASK		0xffffff
/** @defgroup spdif_rx_dr_dr DR Parity Error bit
@{*/
/**@}*/


/**@}*/

/** @defgroup spdif_rx_csr CSR Channel Status register
@{*/

/** SPDIF_RX_CSR_SOB Start Of Block **/
#define SPDIF_RX_CSR_SOB		(1 << 24)

#define SPDIF_RX_CSR_CS_SHIFT		16
#define SPDIF_RX_CSR_CS_MASK		0xff
/** @defgroup spdif_rx_csr_cs CS Channel A status information
@{*/
/**@}*/


#define SPDIF_RX_CSR_USR_SHIFT		0
#define SPDIF_RX_CSR_USR_MASK		0xffff
/** @defgroup spdif_rx_csr_usr USR User data information
@{*/
/**@}*/


/**@}*/

/** @defgroup spdif_rx_dir DIR Debug Information register
@{*/


#define SPDIF_RX_DIR_TLO_SHIFT		16
#define SPDIF_RX_DIR_TLO_MASK		0x1fff
/** @defgroup spdif_rx_dir_tlo TLO Threshold LOW
@{*/
/**@}*/


#define SPDIF_RX_DIR_THI_SHIFT		0
#define SPDIF_RX_DIR_THI_MASK		0x1fff
/** @defgroup spdif_rx_dir_thi THI Threshold HIGH
@{*/
/**@}*/


/**@}*/

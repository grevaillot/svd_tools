#pragma once 

/* --- SPDIFRX: Receiver Interface ---------------------------------- */

/** @defgroup spdifrx_registers Receiver Interface Register
@{*/

/** SPDIFRX_CR Control register **/
#define SPDIFRX_CR			MMIO32(SPDIFRX_BASE + 0x00)
/** SPDIFRX_IMR Interrupt mask register **/
#define SPDIFRX_IMR			MMIO32(SPDIFRX_BASE + 0x04)
/** SPDIFRX_SR Status register **/
#define SPDIFRX_SR			MMIO32(SPDIFRX_BASE + 0x08)
/** SPDIFRX_IFCR Interrupt Flag Clear register **/
#define SPDIFRX_IFCR			MMIO32(SPDIFRX_BASE + 0x0c)
/** SPDIFRX_DR Data input register **/
#define SPDIFRX_DR			MMIO32(SPDIFRX_BASE + 0x10)
/** SPDIFRX_CSR Channel Status register **/
#define SPDIFRX_CSR			MMIO32(SPDIFRX_BASE + 0x14)
/** SPDIFRX_DIR Debug Information register **/
#define SPDIFRX_DIR			MMIO32(SPDIFRX_BASE + 0x18)

/**@}*/


/** @defgroup spdifrx_cr CR Control register
@{*/


#define SPDIFRX_CR_INSEL_SHIFT		16
#define SPDIFRX_CR_INSEL_MASK		0x07
/** @defgroup spdifrx_cr_insel INSEL input selection
@{*/
/**@}*/

/** SPDIFRX_CR_WFA Wait For Activity **/
#define SPDIFRX_CR_WFA		(1 << 14)

#define SPDIFRX_CR_NBTR_SHIFT		12
#define SPDIFRX_CR_NBTR_MASK		0x03
/** @defgroup spdifrx_cr_nbtr NBTR Maximum allowed re-tries during synchronization phase
@{*/
/**@}*/

/** SPDIFRX_CR_CHSEL Channel Selection **/
#define SPDIFRX_CR_CHSEL		(1 << 11)
/** SPDIFRX_CR_CBDMAEN Control Buffer DMA ENable for control flow **/
#define SPDIFRX_CR_CBDMAEN		(1 << 10)
/** SPDIFRX_CR_PTMSK Mask of Preamble Type bits **/
#define SPDIFRX_CR_PTMSK		(1 << 9)
/** SPDIFRX_CR_CUMSK Mask of channel status and user bits **/
#define SPDIFRX_CR_CUMSK		(1 << 8)
/** SPDIFRX_CR_VMSK Mask of Validity bit **/
#define SPDIFRX_CR_VMSK		(1 << 7)
/** SPDIFRX_CR_PMSK Mask Parity error bit **/
#define SPDIFRX_CR_PMSK		(1 << 6)

#define SPDIFRX_CR_DRFMT_SHIFT		4
#define SPDIFRX_CR_DRFMT_MASK		0x03
/** @defgroup spdifrx_cr_drfmt DRFMT RX Data format
@{*/
/**@}*/

/** SPDIFRX_CR_RXSTEO STerEO Mode **/
#define SPDIFRX_CR_RXSTEO		(1 << 3)
/** SPDIFRX_CR_RXDMAEN Receiver DMA ENable for data flow **/
#define SPDIFRX_CR_RXDMAEN		(1 << 2)

#define SPDIFRX_CR_SPDIFEN_SHIFT		0
#define SPDIFRX_CR_SPDIFEN_MASK		0x03
/** @defgroup spdifrx_cr_spdifen SPDIFEN Peripheral Block Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup spdifrx_imr IMR Interrupt mask register
@{*/

/** SPDIFRX_IMR_IFEIE Serial Interface Error Interrupt Enable **/
#define SPDIFRX_IMR_IFEIE		(1 << 6)
/** SPDIFRX_IMR_SYNCDIE Synchronization Done **/
#define SPDIFRX_IMR_SYNCDIE		(1 << 5)
/** SPDIFRX_IMR_SBLKIE Synchronization Block Detected Interrupt Enable **/
#define SPDIFRX_IMR_SBLKIE		(1 << 4)
/** SPDIFRX_IMR_OVRIE Overrun error Interrupt Enable **/
#define SPDIFRX_IMR_OVRIE		(1 << 3)
/** SPDIFRX_IMR_PERRIE Parity error interrupt enable **/
#define SPDIFRX_IMR_PERRIE		(1 << 2)
/** SPDIFRX_IMR_CSRNEIE Control Buffer Ready Interrupt Enable **/
#define SPDIFRX_IMR_CSRNEIE		(1 << 1)
/** SPDIFRX_IMR_RXNEIE RXNE interrupt enable **/
#define SPDIFRX_IMR_RXNEIE		(1 << 0)

/**@}*/

/** @defgroup spdifrx_sr SR Status register
@{*/


#define SPDIFRX_SR_WIDTH5_SHIFT		16
#define SPDIFRX_SR_WIDTH5_MASK		0x7fff
/** @defgroup spdifrx_sr_width5 WIDTH5 Duration of 5 symbols counted with SPDIF_CLK
@{*/
/**@}*/

/** SPDIFRX_SR_TERR Time-out error **/
#define SPDIFRX_SR_TERR		(1 << 8)
/** SPDIFRX_SR_SERR Synchronization error **/
#define SPDIFRX_SR_SERR		(1 << 7)
/** SPDIFRX_SR_FERR Framing error **/
#define SPDIFRX_SR_FERR		(1 << 6)
/** SPDIFRX_SR_SYNCD Synchronization Done **/
#define SPDIFRX_SR_SYNCD		(1 << 5)
/** SPDIFRX_SR_SBD Synchronization Block Detected **/
#define SPDIFRX_SR_SBD		(1 << 4)
/** SPDIFRX_SR_OVR Overrun error **/
#define SPDIFRX_SR_OVR		(1 << 3)
/** SPDIFRX_SR_PERR Parity error **/
#define SPDIFRX_SR_PERR		(1 << 2)
/** SPDIFRX_SR_CSRNE Control Buffer register is not empty **/
#define SPDIFRX_SR_CSRNE		(1 << 1)
/** SPDIFRX_SR_RXNE Read data register not empty **/
#define SPDIFRX_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup spdifrx_ifcr IFCR Interrupt Flag Clear register
@{*/

/** SPDIFRX_IFCR_SYNCDCF Clears the Synchronization Done flag **/
#define SPDIFRX_IFCR_SYNCDCF		(1 << 5)
/** SPDIFRX_IFCR_SBDCF Clears the Synchronization Block Detected flag **/
#define SPDIFRX_IFCR_SBDCF		(1 << 4)
/** SPDIFRX_IFCR_OVRCF Clears the Overrun error flag **/
#define SPDIFRX_IFCR_OVRCF		(1 << 3)
/** SPDIFRX_IFCR_PERRCF Clears the Parity error flag **/
#define SPDIFRX_IFCR_PERRCF		(1 << 2)

/**@}*/

/** @defgroup spdifrx_dr DR Data input register
@{*/


#define SPDIFRX_DR_PT_SHIFT		28
#define SPDIFRX_DR_PT_MASK		0x03
/** @defgroup spdifrx_dr_pt PT Preamble Type
@{*/
/**@}*/

/** SPDIFRX_DR_C Channel Status bit **/
#define SPDIFRX_DR_C		(1 << 27)
/** SPDIFRX_DR_U User bit **/
#define SPDIFRX_DR_U		(1 << 26)
/** SPDIFRX_DR_V Validity bit **/
#define SPDIFRX_DR_V		(1 << 25)
/** SPDIFRX_DR_PE Parity Error bit **/
#define SPDIFRX_DR_PE		(1 << 24)

#define SPDIFRX_DR_DR_SHIFT		0
#define SPDIFRX_DR_DR_MASK		0xffffff
/** @defgroup spdifrx_dr_dr DR Parity Error bit
@{*/
/**@}*/


/**@}*/

/** @defgroup spdifrx_csr CSR Channel Status register
@{*/

/** SPDIFRX_CSR_SOB Start Of Block **/
#define SPDIFRX_CSR_SOB		(1 << 24)

#define SPDIFRX_CSR_CS_SHIFT		16
#define SPDIFRX_CSR_CS_MASK		0xff
/** @defgroup spdifrx_csr_cs CS Channel A status information
@{*/
/**@}*/


#define SPDIFRX_CSR_USR_SHIFT		0
#define SPDIFRX_CSR_USR_MASK		0xffff
/** @defgroup spdifrx_csr_usr USR User data information
@{*/
/**@}*/


/**@}*/

/** @defgroup spdifrx_dir DIR Debug Information register
@{*/


#define SPDIFRX_DIR_TLO_SHIFT		16
#define SPDIFRX_DIR_TLO_MASK		0x1fff
/** @defgroup spdifrx_dir_tlo TLO Threshold LOW
@{*/
/**@}*/


#define SPDIFRX_DIR_THI_SHIFT		0
#define SPDIFRX_DIR_THI_MASK		0x1fff
/** @defgroup spdifrx_dir_thi THI Threshold HIGH
@{*/
/**@}*/


/**@}*/

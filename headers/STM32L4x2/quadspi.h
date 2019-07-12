#pragma once 

/* --- QUADSPI: QuadSPI interface ----------------------------------- */

/** @defgroup quadspi_registers QuadSPI interface Register
@{*/

/** QUADSPI_CR control register **/
#define QUADSPI_CR			MMIO32(QUADSPI_BASE + 0x00)
/** QUADSPI_DCR device configuration register **/
#define QUADSPI_DCR			MMIO32(QUADSPI_BASE + 0x04)
/** QUADSPI_SR status register **/
#define QUADSPI_SR			MMIO32(QUADSPI_BASE + 0x08)
/** QUADSPI_FCR flag clear register **/
#define QUADSPI_FCR			MMIO32(QUADSPI_BASE + 0x0c)
/** QUADSPI_DLR data length register **/
#define QUADSPI_DLR			MMIO32(QUADSPI_BASE + 0x10)
/** QUADSPI_CCR communication configuration register **/
#define QUADSPI_CCR			MMIO32(QUADSPI_BASE + 0x14)
/** QUADSPI_AR address register **/
#define QUADSPI_AR			MMIO32(QUADSPI_BASE + 0x18)
/** QUADSPI_ABR ABR **/
#define QUADSPI_ABR			MMIO32(QUADSPI_BASE + 0x1c)
/** QUADSPI_DR data register **/
#define QUADSPI_DR			MMIO32(QUADSPI_BASE + 0x20)
/** QUADSPI_PSMKR polling status mask register **/
#define QUADSPI_PSMKR			MMIO32(QUADSPI_BASE + 0x24)
/** QUADSPI_PSMAR polling status match register **/
#define QUADSPI_PSMAR			MMIO32(QUADSPI_BASE + 0x28)
/** QUADSPI_PIR polling interval register **/
#define QUADSPI_PIR			MMIO32(QUADSPI_BASE + 0x2c)
/** QUADSPI_LPTR low-power timeout register **/
#define QUADSPI_LPTR			MMIO32(QUADSPI_BASE + 0x30)

/**@}*/


/** @defgroup quadspi_cr CR control register
@{*/


#define QUADSPI_CR_PRESCALER_SHIFT		24
#define QUADSPI_CR_PRESCALER_MASK		0xff
/** @defgroup quadspi_cr_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/

/** QUADSPI_CR_PMM Polling match mode **/
#define QUADSPI_CR_PMM		(1 << 23)
/** QUADSPI_CR_APMS Automatic poll mode stop **/
#define QUADSPI_CR_APMS		(1 << 22)
/** QUADSPI_CR_TOIE TimeOut interrupt enable **/
#define QUADSPI_CR_TOIE		(1 << 20)
/** QUADSPI_CR_SMIE Status match interrupt enable **/
#define QUADSPI_CR_SMIE		(1 << 19)
/** QUADSPI_CR_FTIE FIFO threshold interrupt enable **/
#define QUADSPI_CR_FTIE		(1 << 18)
/** QUADSPI_CR_TCIE Transfer complete interrupt enable **/
#define QUADSPI_CR_TCIE		(1 << 17)
/** QUADSPI_CR_TEIE Transfer error interrupt enable **/
#define QUADSPI_CR_TEIE		(1 << 16)

#define QUADSPI_CR_FTHRES_SHIFT		8
#define QUADSPI_CR_FTHRES_MASK		0x1f
/** @defgroup quadspi_cr_fthres FTHRES IFO threshold level
@{*/
/**@}*/

/** QUADSPI_CR_FSEL FLASH memory selection **/
#define QUADSPI_CR_FSEL		(1 << 7)
/** QUADSPI_CR_DFM Dual-flash mode **/
#define QUADSPI_CR_DFM		(1 << 6)
/** QUADSPI_CR_SSHIFT Sample shift **/
#define QUADSPI_CR_SSHIFT		(1 << 4)
/** QUADSPI_CR_TCEN Timeout counter enable **/
#define QUADSPI_CR_TCEN		(1 << 3)
/** QUADSPI_CR_DMAEN DMA enable **/
#define QUADSPI_CR_DMAEN		(1 << 2)
/** QUADSPI_CR_ABORT Abort request **/
#define QUADSPI_CR_ABORT		(1 << 1)
/** QUADSPI_CR_EN Enable **/
#define QUADSPI_CR_EN		(1 << 0)

/**@}*/

/** @defgroup quadspi_dcr DCR device configuration register
@{*/


#define QUADSPI_DCR_FSIZE_SHIFT		16
#define QUADSPI_DCR_FSIZE_MASK		0x1f
/** @defgroup quadspi_dcr_fsize FSIZE FLASH memory size
@{*/
/**@}*/


#define QUADSPI_DCR_CSHT_SHIFT		8
#define QUADSPI_DCR_CSHT_MASK		0x07
/** @defgroup quadspi_dcr_csht CSHT Chip select high time
@{*/
/**@}*/

/** QUADSPI_DCR_CKMODE Mode 0 / mode 3 **/
#define QUADSPI_DCR_CKMODE		(1 << 0)

/**@}*/

/** @defgroup quadspi_sr SR status register
@{*/


#define QUADSPI_SR_FLEVEL_SHIFT		8
#define QUADSPI_SR_FLEVEL_MASK		0x7f
/** @defgroup quadspi_sr_flevel FLEVEL FIFO level
@{*/
/**@}*/

/** QUADSPI_SR_BUSY Busy **/
#define QUADSPI_SR_BUSY		(1 << 5)
/** QUADSPI_SR_TOF Timeout flag **/
#define QUADSPI_SR_TOF		(1 << 4)
/** QUADSPI_SR_SMF Status match flag **/
#define QUADSPI_SR_SMF		(1 << 3)
/** QUADSPI_SR_FTF FIFO threshold flag **/
#define QUADSPI_SR_FTF		(1 << 2)
/** QUADSPI_SR_TCF Transfer complete flag **/
#define QUADSPI_SR_TCF		(1 << 1)
/** QUADSPI_SR_TEF Transfer error flag **/
#define QUADSPI_SR_TEF		(1 << 0)

/**@}*/

/** @defgroup quadspi_fcr FCR flag clear register
@{*/

/** QUADSPI_FCR_CTOF Clear timeout flag **/
#define QUADSPI_FCR_CTOF		(1 << 4)
/** QUADSPI_FCR_CSMF Clear status match flag **/
#define QUADSPI_FCR_CSMF		(1 << 3)
/** QUADSPI_FCR_CTCF Clear transfer complete flag **/
#define QUADSPI_FCR_CTCF		(1 << 1)
/** QUADSPI_FCR_CTEF Clear transfer error flag **/
#define QUADSPI_FCR_CTEF		(1 << 0)

/**@}*/

/** @defgroup quadspi_dlr DLR data length register
@{*/


#define QUADSPI_DLR_DL_SHIFT		0
#define QUADSPI_DLR_DL_MASK		0xffffffff
/** @defgroup quadspi_dlr_dl DL Data length
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_ccr CCR communication configuration register
@{*/

/** QUADSPI_CCR_DDRM Double data rate mode **/
#define QUADSPI_CCR_DDRM		(1 << 31)
/** QUADSPI_CCR_DHHC DDR hold half cycle **/
#define QUADSPI_CCR_DHHC		(1 << 30)
/** QUADSPI_CCR_SIOO Send instruction only once mode **/
#define QUADSPI_CCR_SIOO		(1 << 28)

#define QUADSPI_CCR_FMODE_SHIFT		26
#define QUADSPI_CCR_FMODE_MASK		0x03
/** @defgroup quadspi_ccr_fmode FMODE Functional mode
@{*/
/**@}*/


#define QUADSPI_CCR_DMODE_SHIFT		24
#define QUADSPI_CCR_DMODE_MASK		0x03
/** @defgroup quadspi_ccr_dmode DMODE Data mode
@{*/
/**@}*/


#define QUADSPI_CCR_DCYC_SHIFT		18
#define QUADSPI_CCR_DCYC_MASK		0x1f
/** @defgroup quadspi_ccr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


#define QUADSPI_CCR_ABSIZE_SHIFT		16
#define QUADSPI_CCR_ABSIZE_MASK		0x03
/** @defgroup quadspi_ccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/


#define QUADSPI_CCR_ABMODE_SHIFT		14
#define QUADSPI_CCR_ABMODE_MASK		0x03
/** @defgroup quadspi_ccr_abmode ABMODE Alternate bytes mode
@{*/
/**@}*/


#define QUADSPI_CCR_ADSIZE_SHIFT		12
#define QUADSPI_CCR_ADSIZE_MASK		0x03
/** @defgroup quadspi_ccr_adsize ADSIZE Address size
@{*/
/**@}*/


#define QUADSPI_CCR_ADMODE_SHIFT		10
#define QUADSPI_CCR_ADMODE_MASK		0x03
/** @defgroup quadspi_ccr_admode ADMODE Address mode
@{*/
/**@}*/


#define QUADSPI_CCR_IMODE_SHIFT		8
#define QUADSPI_CCR_IMODE_MASK		0x03
/** @defgroup quadspi_ccr_imode IMODE Instruction mode
@{*/
/**@}*/


#define QUADSPI_CCR_INSTRUCTION_SHIFT		0
#define QUADSPI_CCR_INSTRUCTION_MASK		0xff
/** @defgroup quadspi_ccr_instruction INSTRUCTION Instruction
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_ar AR address register
@{*/


#define QUADSPI_AR_ADDRESS_SHIFT		0
#define QUADSPI_AR_ADDRESS_MASK		0xffffffff
/** @defgroup quadspi_ar_address ADDRESS Address
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_abr ABR ABR
@{*/


#define QUADSPI_ABR_ALTERNATE_SHIFT		0
#define QUADSPI_ABR_ALTERNATE_MASK		0xffffffff
/** @defgroup quadspi_abr_alternate ALTERNATE ALTERNATE
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_dr DR data register
@{*/


#define QUADSPI_DR_DATA_SHIFT		0
#define QUADSPI_DR_DATA_MASK		0xffffffff
/** @defgroup quadspi_dr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_psmkr PSMKR polling status mask register
@{*/


#define QUADSPI_PSMKR_MASK_SHIFT		0
#define QUADSPI_PSMKR_MASK_MASK		0xffffffff
/** @defgroup quadspi_psmkr_mask MASK Status mask
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_psmar PSMAR polling status match register
@{*/


#define QUADSPI_PSMAR_MATCH_SHIFT		0
#define QUADSPI_PSMAR_MATCH_MASK		0xffffffff
/** @defgroup quadspi_psmar_match MATCH Status match
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_pir PIR polling interval register
@{*/


#define QUADSPI_PIR_INTERVAL_SHIFT		0
#define QUADSPI_PIR_INTERVAL_MASK		0xffff
/** @defgroup quadspi_pir_interval INTERVAL Polling interval
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_lptr LPTR low-power timeout register
@{*/


#define QUADSPI_LPTR_TIMEOUT_SHIFT		0
#define QUADSPI_LPTR_TIMEOUT_MASK		0xffff
/** @defgroup quadspi_lptr_timeout TIMEOUT Timeout period
@{*/
/**@}*/


/**@}*/

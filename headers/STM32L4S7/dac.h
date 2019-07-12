#pragma once 

/* --- DAC: Digital-to-analog converter ----------------------------- */

/** @defgroup dac_registers Digital-to-analog converter Register
@{*/

/** DAC_CR control register **/
#define DAC_CR			MMIO32(DAC_BASE + 0x00)
/** DAC_SWTRIGR software trigger register **/
#define DAC_SWTRIGR			MMIO32(DAC_BASE + 0x04)
/** DAC_DHR12R1 channel1 12-bit right-aligned data holding register **/
#define DAC_DHR12R1			MMIO32(DAC_BASE + 0x08)
/** DAC_DHR12L1 channel1 12-bit left-aligned data holding register **/
#define DAC_DHR12L1			MMIO32(DAC_BASE + 0x0c)
/** DAC_DHR8R1 channel1 8-bit right-aligned data holding register **/
#define DAC_DHR8R1			MMIO32(DAC_BASE + 0x10)
/** DAC_DHR12R2 channel2 12-bit right aligned data holding register **/
#define DAC_DHR12R2			MMIO32(DAC_BASE + 0x14)
/** DAC_DHR12L2 channel2 12-bit left aligned data holding register **/
#define DAC_DHR12L2			MMIO32(DAC_BASE + 0x18)
/** DAC_DHR8R2 channel2 8-bit right-aligned data holding register **/
#define DAC_DHR8R2			MMIO32(DAC_BASE + 0x1c)
/** DAC_DHR12RD Dual DAC 12-bit right-aligned data holding register **/
#define DAC_DHR12RD			MMIO32(DAC_BASE + 0x20)
/** DAC_DHR12LD DUAL DAC 12-bit left aligned data holding register **/
#define DAC_DHR12LD			MMIO32(DAC_BASE + 0x24)
/** DAC_DHR8RD DUAL DAC 8-bit right aligned data holding register **/
#define DAC_DHR8RD			MMIO32(DAC_BASE + 0x28)
/** DAC_DOR1 channel1 data output register **/
#define DAC_DOR1			MMIO32(DAC_BASE + 0x2c)
/** DAC_DOR2 channel2 data output register **/
#define DAC_DOR2			MMIO32(DAC_BASE + 0x30)
/** DAC_SR status register **/
#define DAC_SR			MMIO32(DAC_BASE + 0x34)
/** DAC_CCR calibration control register **/
#define DAC_CCR			MMIO32(DAC_BASE + 0x38)
/** DAC_MCR mode control register **/
#define DAC_MCR			MMIO32(DAC_BASE + 0x3c)
/** DAC_SHSR1 Sample and Hold sample time register 1 **/
#define DAC_SHSR1			MMIO32(DAC_BASE + 0x40)
/** DAC_SHSR2 Sample and Hold sample time register 2 **/
#define DAC_SHSR2			MMIO32(DAC_BASE + 0x44)
/** DAC_SHHR Sample and Hold hold time register **/
#define DAC_SHHR			MMIO32(DAC_BASE + 0x48)
/** DAC_SHRR Sample and Hold refresh time register **/
#define DAC_SHRR			MMIO32(DAC_BASE + 0x4c)

/**@}*/


/** @defgroup dac_cr CR control register
@{*/

/** DAC_CR_CEN2 DAC Channel 2 calibration enable **/
#define DAC_CR_CEN2		(1 << 30)
/** DAC_CR_DMAUDRIE2 DAC channel2 DMA underrun interrupt enable **/
#define DAC_CR_DMAUDRIE2		(1 << 29)
/** DAC_CR_DMAEN2 DAC channel2 DMA enable **/
#define DAC_CR_DMAEN2		(1 << 28)

#define DAC_CR_MAMP2_SHIFT		24
#define DAC_CR_MAMP2_MASK		0x0f
/** @defgroup dac_cr_mamp2 MAMP2 DAC channel2 mask/amplitude selector
@{*/
/**@}*/


#define DAC_CR_WAVE2_SHIFT		22
#define DAC_CR_WAVE2_MASK		0x03
/** @defgroup dac_cr_wave2 WAVE2 DAC channel2 noise/triangle wave generation enable
@{*/
/**@}*/


#define DAC_CR_TSEL2_SHIFT		19
#define DAC_CR_TSEL2_MASK		0x07
/** @defgroup dac_cr_tsel2 TSEL2 DAC channel2 trigger selection
@{*/
/**@}*/

/** DAC_CR_TEN2 DAC channel2 trigger enable **/
#define DAC_CR_TEN2		(1 << 18)
/** DAC_CR_EN2 DAC channel2 enable **/
#define DAC_CR_EN2		(1 << 16)
/** DAC_CR_CEN1 DAC Channel 1 calibration enable **/
#define DAC_CR_CEN1		(1 << 14)
/** DAC_CR_DMAUDRIE1 DAC channel1 DMA Underrun Interrupt enable **/
#define DAC_CR_DMAUDRIE1		(1 << 13)
/** DAC_CR_DMAEN1 DAC channel1 DMA enable **/
#define DAC_CR_DMAEN1		(1 << 12)

#define DAC_CR_MAMP1_SHIFT		8
#define DAC_CR_MAMP1_MASK		0x0f
/** @defgroup dac_cr_mamp1 MAMP1 DAC channel1 mask/amplitude selector
@{*/
/**@}*/


#define DAC_CR_WAVE1_SHIFT		6
#define DAC_CR_WAVE1_MASK		0x03
/** @defgroup dac_cr_wave1 WAVE1 DAC channel1 noise/triangle wave generation enable
@{*/
/**@}*/


#define DAC_CR_TSEL1_SHIFT		3
#define DAC_CR_TSEL1_MASK		0x07
/** @defgroup dac_cr_tsel1 TSEL1 DAC channel1 trigger selection
@{*/
/**@}*/

/** DAC_CR_TEN1 DAC channel1 trigger enable **/
#define DAC_CR_TEN1		(1 << 2)
/** DAC_CR_EN1 DAC channel1 enable **/
#define DAC_CR_EN1		(1 << 0)

/**@}*/

/** @defgroup dac_swtrigr SWTRIGR software trigger register
@{*/

/** DAC_SWTRIGR_SWTRIG2 DAC channel2 software trigger **/
#define DAC_SWTRIGR_SWTRIG2		(1 << 1)
/** DAC_SWTRIGR_SWTRIG1 DAC channel1 software trigger **/
#define DAC_SWTRIGR_SWTRIG1		(1 << 0)

/**@}*/

/** @defgroup dac_dhr12r1 DHR12R1 channel1 12-bit right-aligned data holding register
@{*/


#define DAC_DHR12R1_DACC1DHR_SHIFT		0
#define DAC_DHR12R1_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12r1_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12l1 DHR12L1 channel1 12-bit left-aligned data holding register
@{*/


#define DAC_DHR12L1_DACC1DHR_SHIFT		4
#define DAC_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8r1 DHR8R1 channel1 8-bit right-aligned data holding register
@{*/


#define DAC_DHR8R1_DACC1DHR_SHIFT		0
#define DAC_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12r2 DHR12R2 channel2 12-bit right aligned data holding register
@{*/


#define DAC_DHR12R2_DACC2DHR_SHIFT		0
#define DAC_DHR12R2_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12r2_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12l2 DHR12L2 channel2 12-bit left aligned data holding register
@{*/


#define DAC_DHR12L2_DACC2DHR_SHIFT		4
#define DAC_DHR12L2_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12l2_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8r2 DHR8R2 channel2 8-bit right-aligned data holding register
@{*/


#define DAC_DHR8R2_DACC2DHR_SHIFT		0
#define DAC_DHR8R2_DACC2DHR_MASK		0xff
/** @defgroup dac_dhr8r2_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12rd DHR12RD Dual DAC 12-bit right-aligned data holding register
@{*/


#define DAC_DHR12RD_DACC2DHR_SHIFT		16
#define DAC_DHR12RD_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12rd_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


#define DAC_DHR12RD_DACC1DHR_SHIFT		0
#define DAC_DHR12RD_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12rd_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12ld DHR12LD DUAL DAC 12-bit left aligned data holding register
@{*/


#define DAC_DHR12LD_DACC2DHR_SHIFT		20
#define DAC_DHR12LD_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12ld_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data
@{*/
/**@}*/


#define DAC_DHR12LD_DACC1DHR_SHIFT		4
#define DAC_DHR12LD_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12ld_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8rd DHR8RD DUAL DAC 8-bit right aligned data holding register
@{*/


#define DAC_DHR8RD_DACC2DHR_SHIFT		8
#define DAC_DHR8RD_DACC2DHR_MASK		0xff
/** @defgroup dac_dhr8rd_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


#define DAC_DHR8RD_DACC1DHR_SHIFT		0
#define DAC_DHR8RD_DACC1DHR_MASK		0xff
/** @defgroup dac_dhr8rd_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dor1 DOR1 channel1 data output register
@{*/


#define DAC_DOR1_DACC1DOR_SHIFT		0
#define DAC_DOR1_DACC1DOR_MASK		0xfff
/** @defgroup dac_dor1_dacc1dor DACC1DOR DAC channel1 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dor2 DOR2 channel2 data output register
@{*/


#define DAC_DOR2_DACC2DOR_SHIFT		0
#define DAC_DOR2_DACC2DOR_MASK		0xfff
/** @defgroup dac_dor2_dacc2dor DACC2DOR DAC channel2 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_sr SR status register
@{*/

/** DAC_SR_BWST2 DAC Channel 2 busy writing sample time flag **/
#define DAC_SR_BWST2		(1 << 31)
/** DAC_SR_CAL_FLAG2 DAC Channel 2 calibration offset status **/
#define DAC_SR_CAL_FLAG2		(1 << 30)
/** DAC_SR_DMAUDR2 DAC channel2 DMA underrun flag **/
#define DAC_SR_DMAUDR2		(1 << 29)
/** DAC_SR_BWST1 DAC Channel 1 busy writing sample time flag **/
#define DAC_SR_BWST1		(1 << 15)
/** DAC_SR_CAL_FLAG1 DAC Channel 1 calibration offset status **/
#define DAC_SR_CAL_FLAG1		(1 << 14)
/** DAC_SR_DMAUDR1 DAC channel1 DMA underrun flag **/
#define DAC_SR_DMAUDR1		(1 << 13)

/**@}*/

/** @defgroup dac_ccr CCR calibration control register
@{*/


#define DAC_CCR_OTRIM2_SHIFT		16
#define DAC_CCR_OTRIM2_MASK		0x1f
/** @defgroup dac_ccr_otrim2 OTRIM2 DAC Channel 2 offset trimming value
@{*/
/**@}*/


#define DAC_CCR_OTRIM1_SHIFT		0
#define DAC_CCR_OTRIM1_MASK		0x1f
/** @defgroup dac_ccr_otrim1 OTRIM1 DAC Channel 1 offset trimming value
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_mcr MCR mode control register
@{*/


#define DAC_MCR_MODE2_SHIFT		16
#define DAC_MCR_MODE2_MASK		0x07
/** @defgroup dac_mcr_mode2 MODE2 DAC Channel 2 mode
@{*/
/**@}*/


#define DAC_MCR_MODE1_SHIFT		0
#define DAC_MCR_MODE1_MASK		0x07
/** @defgroup dac_mcr_mode1 MODE1 DAC Channel 1 mode
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_shsr1 SHSR1 Sample and Hold sample time register 1
@{*/


#define DAC_SHSR1_TSAMPLE1_SHIFT		0
#define DAC_SHSR1_TSAMPLE1_MASK		0x3ff
/** @defgroup dac_shsr1_tsample1 TSAMPLE1 DAC Channel 1 sample Time
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_shsr2 SHSR2 Sample and Hold sample time register 2
@{*/


#define DAC_SHSR2_TSAMPLE2_SHIFT		0
#define DAC_SHSR2_TSAMPLE2_MASK		0x3ff
/** @defgroup dac_shsr2_tsample2 TSAMPLE2 DAC Channel 2 sample Time
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_shhr SHHR Sample and Hold hold time register
@{*/


#define DAC_SHHR_THOLD2_SHIFT		16
#define DAC_SHHR_THOLD2_MASK		0x3ff
/** @defgroup dac_shhr_thold2 THOLD2 DAC Channel 2 hold time
@{*/
/**@}*/


#define DAC_SHHR_THOLD1_SHIFT		0
#define DAC_SHHR_THOLD1_MASK		0x3ff
/** @defgroup dac_shhr_thold1 THOLD1 DAC Channel 1 hold Time
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_shrr SHRR Sample and Hold refresh time register
@{*/


#define DAC_SHRR_TREFRESH2_SHIFT		16
#define DAC_SHRR_TREFRESH2_MASK		0xff
/** @defgroup dac_shrr_trefresh2 TREFRESH2 DAC Channel 2 refresh Time
@{*/
/**@}*/


#define DAC_SHRR_TREFRESH1_SHIFT		0
#define DAC_SHRR_TREFRESH1_MASK		0xff
/** @defgroup dac_shrr_trefresh1 TREFRESH1 DAC Channel 1 refresh Time
@{*/
/**@}*/


/**@}*/

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
/** DAC_DHR12L1 channel1 12-bit left aligned data holding register **/
#define DAC_DHR12L1			MMIO32(DAC_BASE + 0x0c)
/** DAC_DHR8R1 channel1 8-bit right aligned data holding register **/
#define DAC_DHR8R1			MMIO32(DAC_BASE + 0x10)
/** DAC_DOR1 channel1 data output register **/
#define DAC_DOR1			MMIO32(DAC_BASE + 0x2c)
/** DAC_SR status register **/
#define DAC_SR			MMIO32(DAC_BASE + 0x34)

/**@}*/


/** @defgroup dac_cr CR control register
@{*/

/** DAC_CR_DMAUDRIE1 DAC channel1 DMA Underrun Interrupt enable **/
#define DAC_CR_DMAUDRIE1		(1 << 13)
/** DAC_CR_DMAEN1 DAC channel1 DMA enable **/
#define DAC_CR_DMAEN1		(1 << 12)
/** DAC_CR_TSEL12 DAC channel1 trigger selection **/
#define DAC_CR_TSEL12		(1 << 5)
/** DAC_CR_TSEL11 DAC channel1 trigger selection **/
#define DAC_CR_TSEL11		(1 << 4)
/** DAC_CR_TSEL10 DAC channel1 trigger selection **/
#define DAC_CR_TSEL10		(1 << 3)
/** DAC_CR_TEN1 DAC channel1 trigger enable **/
#define DAC_CR_TEN1		(1 << 2)
/** DAC_CR_BOFF1 DAC channel1 output buffer disable **/
#define DAC_CR_BOFF1		(1 << 1)
/** DAC_CR_EN1 DAC channel1 enable **/
#define DAC_CR_EN1		(1 << 0)

/**@}*/

/** @defgroup dac_swtrigr SWTRIGR software trigger register
@{*/

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

/** @defgroup dac_dhr12l1 DHR12L1 channel1 12-bit left aligned data holding register
@{*/


#define DAC_DHR12L1_DACC1DHR_SHIFT		4
#define DAC_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8r1 DHR8R1 channel1 8-bit right aligned data holding register
@{*/


#define DAC_DHR8R1_DACC1DHR_SHIFT		0
#define DAC_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
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

/** @defgroup dac_sr SR status register
@{*/

/** DAC_SR_DMAUDR2 DAC channel2 DMA underrun flag **/
#define DAC_SR_DMAUDR2		(1 << 29)
/** DAC_SR_DMAUDR1 DAC channel1 DMA underrun flag **/
#define DAC_SR_DMAUDR1		(1 << 13)

/**@}*/

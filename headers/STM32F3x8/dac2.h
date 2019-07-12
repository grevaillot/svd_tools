#pragma once 

/* --- DAC2: Digital-to-analog converter ---------------------------- */

/** @defgroup dac2_registers Digital-to-analog converter Register
@{*/

/** DAC2_CR control register **/
#define DAC2_CR			MMIO32(DAC2_BASE + 0x00)
/** DAC2_SWTRIGR software trigger register **/
#define DAC2_SWTRIGR			MMIO32(DAC2_BASE + 0x04)
/** DAC2_DHR12R1 channel1 12-bit right-aligned data holding register **/
#define DAC2_DHR12R1			MMIO32(DAC2_BASE + 0x08)
/** DAC2_DHR12L1 DAC channel1 12-bit left aligned data holding register **/
#define DAC2_DHR12L1			MMIO32(DAC2_BASE + 0x0c)
/** DAC2_DHR8R1 DAC channel1 8-bit right aligned data holding register **/
#define DAC2_DHR8R1			MMIO32(DAC2_BASE + 0x10)
/** DAC2_DOR1 DAC channel1 data output register **/
#define DAC2_DOR1			MMIO32(DAC2_BASE + 0x2c)
/** DAC2_SR DAC status register **/
#define DAC2_SR			MMIO32(DAC2_BASE + 0x34)

/**@}*/


/** @defgroup dac2_cr CR control register
@{*/

/** DAC2_CR_DMAUDRIE1 DAC channel1 DMA Underrun Interrupt enable **/
#define DAC2_CR_DMAUDRIE1		(1 << 13)
/** DAC2_CR_DMAEN1 DAC channel1 DMA enable **/
#define DAC2_CR_DMAEN1		(1 << 12)
/** DAC2_CR_MAMP13 DAC channel1 mask/amplitude selector **/
#define DAC2_CR_MAMP13		(1 << 11)
/** DAC2_CR_MAMP12 MAMP12 **/
#define DAC2_CR_MAMP12		(1 << 10)
/** DAC2_CR_MAMP11 MAMP11 **/
#define DAC2_CR_MAMP11		(1 << 9)
/** DAC2_CR_MAMP10 MAMP10 **/
#define DAC2_CR_MAMP10		(1 << 8)
/** DAC2_CR_WAVE1 DAC channel1 noise/triangle wave generation enable **/
#define DAC2_CR_WAVE1		(1 << 7)
/** DAC2_CR_WAVE2 WAVE2 **/
#define DAC2_CR_WAVE2		(1 << 6)

#define DAC2_CR_TSEL1_SHIFT		3
#define DAC2_CR_TSEL1_MASK		0x07
/** @defgroup dac2_cr_tsel1 TSEL1 DAC channel1 trigger selection
@{*/
/**@}*/

/** DAC2_CR_TEN1 DAC channel1 trigger enable **/
#define DAC2_CR_TEN1		(1 << 2)
/** DAC2_CR_BOFF1 DAC channel1 output buffer disable **/
#define DAC2_CR_BOFF1		(1 << 1)
/** DAC2_CR_EN1 DAC channel1 enable **/
#define DAC2_CR_EN1		(1 << 0)

/**@}*/

/** @defgroup dac2_swtrigr SWTRIGR software trigger register
@{*/

/** DAC2_SWTRIGR_SWTRIG1 DAC channel1 software trigger **/
#define DAC2_SWTRIGR_SWTRIG1		(1 << 0)

/**@}*/

/** @defgroup dac2_dhr12r1 DHR12R1 channel1 12-bit right-aligned data holding register
@{*/


#define DAC2_DHR12R1_DACC1DHR_SHIFT		0
#define DAC2_DHR12R1_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dhr12r1_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr12l1 DHR12L1 DAC channel1 12-bit left aligned data holding register
@{*/


#define DAC2_DHR12L1_DACC1DHR_SHIFT		4
#define DAC2_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr8r1 DHR8R1 DAC channel1 8-bit right aligned data holding register
@{*/


#define DAC2_DHR8R1_DACC1DHR_SHIFT		0
#define DAC2_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac2_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dor1 DOR1 DAC channel1 data output register
@{*/


#define DAC2_DOR1_DACC1DOR_SHIFT		0
#define DAC2_DOR1_DACC1DOR_MASK		0xfff
/** @defgroup dac2_dor1_dacc1dor DACC1DOR DAC channel1 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_sr SR DAC status register
@{*/

/** DAC2_SR_DMAUDR1 DAC channel1 DMA underrun flag **/
#define DAC2_SR_DMAUDR1		(1 << 13)

/**@}*/

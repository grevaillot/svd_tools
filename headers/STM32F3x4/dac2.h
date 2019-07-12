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
/** DAC2_DHR12L1 channel1 12-bit left aligned data holding register **/
#define DAC2_DHR12L1			MMIO32(DAC2_BASE + 0x0c)
/** DAC2_DHR8R1 channel1 8-bit right aligned data holding register **/
#define DAC2_DHR8R1			MMIO32(DAC2_BASE + 0x10)
/** DAC2_DHR12R2 channel2 12-bit right aligned data holding register **/
#define DAC2_DHR12R2			MMIO32(DAC2_BASE + 0x14)
/** DAC2_DHR12L2 channel2 12-bit left aligned data holding register **/
#define DAC2_DHR12L2			MMIO32(DAC2_BASE + 0x18)
/** DAC2_DHR8R2 channel2 8-bit right-aligned data holding register **/
#define DAC2_DHR8R2			MMIO32(DAC2_BASE + 0x1c)
/** DAC2_DHR12RD Dual DAC 12-bit right-aligned data holding register **/
#define DAC2_DHR12RD			MMIO32(DAC2_BASE + 0x20)
/** DAC2_DHR12LD DUAL DAC 12-bit left aligned data holding register **/
#define DAC2_DHR12LD			MMIO32(DAC2_BASE + 0x24)
/** DAC2_DHR8RD DUAL DAC 8-bit right aligned data holding register **/
#define DAC2_DHR8RD			MMIO32(DAC2_BASE + 0x28)
/** DAC2_DOR1 channel1 data output register **/
#define DAC2_DOR1			MMIO32(DAC2_BASE + 0x2c)
/** DAC2_DOR2 channel2 data output register **/
#define DAC2_DOR2			MMIO32(DAC2_BASE + 0x30)
/** DAC2_SR status register **/
#define DAC2_SR			MMIO32(DAC2_BASE + 0x34)

/**@}*/


/** @defgroup dac2_cr CR control register
@{*/

/** DAC2_CR_DMAUDRIE2 DAC channel2 DMA underrun interrupt enable **/
#define DAC2_CR_DMAUDRIE2		(1 << 29)
/** DAC2_CR_DMAEN2 DAC channel2 DMA enable **/
#define DAC2_CR_DMAEN2		(1 << 28)

#define DAC2_CR_MAMP2_SHIFT		24
#define DAC2_CR_MAMP2_MASK		0x0f
/** @defgroup dac2_cr_mamp2 MAMP2 DAC channel2 mask/amplitude selector
@{*/
/**@}*/


#define DAC2_CR_WAVE2_SHIFT		22
#define DAC2_CR_WAVE2_MASK		0x03
/** @defgroup dac2_cr_wave2 WAVE2 DAC channel2 noise/triangle wave generation enable
@{*/
/**@}*/


#define DAC2_CR_TSEL2_SHIFT		19
#define DAC2_CR_TSEL2_MASK		0x07
/** @defgroup dac2_cr_tsel2 TSEL2 DAC channel2 trigger selection
@{*/
/**@}*/

/** DAC2_CR_TEN2 DAC channel2 trigger enable **/
#define DAC2_CR_TEN2		(1 << 18)
/** DAC2_CR_BOFF2 DAC channel2 output buffer disable **/
#define DAC2_CR_BOFF2		(1 << 17)
/** DAC2_CR_EN2 DAC channel2 enable **/
#define DAC2_CR_EN2		(1 << 16)
/** DAC2_CR_DMAUDRIE1 DAC channel1 DMA Underrun Interrupt enable **/
#define DAC2_CR_DMAUDRIE1		(1 << 13)
/** DAC2_CR_DMAEN1 DAC channel1 DMA enable **/
#define DAC2_CR_DMAEN1		(1 << 12)

#define DAC2_CR_MAMP1_SHIFT		8
#define DAC2_CR_MAMP1_MASK		0x0f
/** @defgroup dac2_cr_mamp1 MAMP1 DAC channel1 mask/amplitude selector
@{*/
/**@}*/


#define DAC2_CR_WAVE1_SHIFT		6
#define DAC2_CR_WAVE1_MASK		0x03
/** @defgroup dac2_cr_wave1 WAVE1 DAC channel1 noise/triangle wave generation enable
@{*/
/**@}*/


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

/** DAC2_SWTRIGR_SWTRIG2 DAC channel2 software trigger **/
#define DAC2_SWTRIGR_SWTRIG2		(1 << 1)
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

/** @defgroup dac2_dhr12l1 DHR12L1 channel1 12-bit left aligned data holding register
@{*/


#define DAC2_DHR12L1_DACC1DHR_SHIFT		4
#define DAC2_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr8r1 DHR8R1 channel1 8-bit right aligned data holding register
@{*/


#define DAC2_DHR8R1_DACC1DHR_SHIFT		0
#define DAC2_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac2_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr12r2 DHR12R2 channel2 12-bit right aligned data holding register
@{*/


#define DAC2_DHR12R2_DACC2DHR_SHIFT		0
#define DAC2_DHR12R2_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dhr12r2_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr12l2 DHR12L2 channel2 12-bit left aligned data holding register
@{*/


#define DAC2_DHR12L2_DACC2DHR_SHIFT		4
#define DAC2_DHR12L2_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dhr12l2_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr8r2 DHR8R2 channel2 8-bit right-aligned data holding register
@{*/


#define DAC2_DHR8R2_DACC2DHR_SHIFT		0
#define DAC2_DHR8R2_DACC2DHR_MASK		0xff
/** @defgroup dac2_dhr8r2_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr12rd DHR12RD Dual DAC 12-bit right-aligned data holding register
@{*/


#define DAC2_DHR12RD_DACC2DHR_SHIFT		16
#define DAC2_DHR12RD_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dhr12rd_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


#define DAC2_DHR12RD_DACC1DHR_SHIFT		0
#define DAC2_DHR12RD_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dhr12rd_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr12ld DHR12LD DUAL DAC 12-bit left aligned data holding register
@{*/


#define DAC2_DHR12LD_DACC2DHR_SHIFT		20
#define DAC2_DHR12LD_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dhr12ld_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data
@{*/
/**@}*/


#define DAC2_DHR12LD_DACC1DHR_SHIFT		4
#define DAC2_DHR12LD_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dhr12ld_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dhr8rd DHR8RD DUAL DAC 8-bit right aligned data holding register
@{*/


#define DAC2_DHR8RD_DACC2DHR_SHIFT		8
#define DAC2_DHR8RD_DACC2DHR_MASK		0xff
/** @defgroup dac2_dhr8rd_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


#define DAC2_DHR8RD_DACC1DHR_SHIFT		0
#define DAC2_DHR8RD_DACC1DHR_MASK		0xff
/** @defgroup dac2_dhr8rd_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dor1 DOR1 channel1 data output register
@{*/


#define DAC2_DOR1_DACC1DOR_SHIFT		0
#define DAC2_DOR1_DACC1DOR_MASK		0xfff
/** @defgroup dac2_dor1_dacc1dor DACC1DOR DAC channel1 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dor2 DOR2 channel2 data output register
@{*/


#define DAC2_DOR2_DACC2DOR_SHIFT		0
#define DAC2_DOR2_DACC2DOR_MASK		0xfff
/** @defgroup dac2_dor2_dacc2dor DACC2DOR DAC channel2 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_sr SR status register
@{*/

/** DAC2_SR_DMAUDR2 DAC channel2 DMA underrun flag **/
#define DAC2_SR_DMAUDR2		(1 << 29)
/** DAC2_SR_DMAUDR1 DAC channel1 DMA underrun flag **/
#define DAC2_SR_DMAUDR1		(1 << 13)

/**@}*/

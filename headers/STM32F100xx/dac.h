#pragma once 

/* --- DAC: Digital to analog converter ----------------------------- */

/** @defgroup dac_registers Digital to analog converter Register
@{*/

/** DAC_CR Control register (DAC_CR) **/
#define DAC_CR			MMIO32(DAC_BASE + 0x00)
/** DAC_SWTRIGR DAC software trigger register (DAC_SWTRIGR) **/
#define DAC_SWTRIGR			MMIO32(DAC_BASE + 0x04)
/** DAC_DHR12R1 DAC channel1 12-bit right-aligned data holding register(DAC_DHR12R1) **/
#define DAC_DHR12R1			MMIO32(DAC_BASE + 0x08)
/** DAC_DHR12L1 DAC channel1 12-bit left aligned data holding register (DAC_DHR12L1) **/
#define DAC_DHR12L1			MMIO32(DAC_BASE + 0x0c)
/** DAC_DHR8R1 DAC channel1 8-bit right aligned data holding register (DAC_DHR8R1) **/
#define DAC_DHR8R1			MMIO32(DAC_BASE + 0x10)
/** DAC_DHR12R2 DAC channel2 12-bit right aligned data holding register (DAC_DHR12R2) **/
#define DAC_DHR12R2			MMIO32(DAC_BASE + 0x14)
/** DAC_DHR12L2 DAC channel2 12-bit left aligned data holding register (DAC_DHR12L2) **/
#define DAC_DHR12L2			MMIO32(DAC_BASE + 0x18)
/** DAC_DHR8R2 DAC channel2 8-bit right-aligned data holding register (DAC_DHR8R2) **/
#define DAC_DHR8R2			MMIO32(DAC_BASE + 0x1c)
/** DAC_DHR12RD Dual DAC 12-bit right-aligned data holding register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12 Reserved **/
#define DAC_DHR12RD			MMIO32(DAC_BASE + 0x20)
/** DAC_DHR12LD DUAL DAC 12-bit left aligned data holding register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0 Reserved **/
#define DAC_DHR12LD			MMIO32(DAC_BASE + 0x24)
/** DAC_DHR8RD DUAL DAC 8-bit right aligned data holding register (DAC_DHR8RD), Bits 31:16 Reserved **/
#define DAC_DHR8RD			MMIO32(DAC_BASE + 0x28)
/** DAC_DOR1 DAC channel1 data output register (DAC_DOR1) **/
#define DAC_DOR1			MMIO32(DAC_BASE + 0x2c)
/** DAC_DOR2 DAC channel2 data output register (DAC_DOR2) **/
#define DAC_DOR2			MMIO32(DAC_BASE + 0x30)
/** DAC_SR DAC status register **/
#define DAC_SR			MMIO32(DAC_BASE + 0x34)

/**@}*/


/** @defgroup dac_cr CR Control register (DAC_CR)
@{*/

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
/** DAC_CR_BOFF2 DAC channel2 output buffer disable **/
#define DAC_CR_BOFF2		(1 << 17)
/** DAC_CR_EN2 DAC channel2 enable **/
#define DAC_CR_EN2		(1 << 16)
/** DAC_CR_DMAUDRIE1 DAC channel1 DMA underrun interrupt enable **/
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
/** DAC_CR_BOFF1 DAC channel1 output buffer disable **/
#define DAC_CR_BOFF1		(1 << 1)
/** DAC_CR_EN1 DAC channel1 enable **/
#define DAC_CR_EN1		(1 << 0)

/**@}*/

/** @defgroup dac_swtrigr SWTRIGR DAC software trigger register (DAC_SWTRIGR)
@{*/

/** DAC_SWTRIGR_SWTRIG2 DAC channel2 software trigger **/
#define DAC_SWTRIGR_SWTRIG2		(1 << 1)
/** DAC_SWTRIGR_SWTRIG1 DAC channel1 software trigger **/
#define DAC_SWTRIGR_SWTRIG1		(1 << 0)

/**@}*/

/** @defgroup dac_dhr12r1 DHR12R1 DAC channel1 12-bit right-aligned data holding register(DAC_DHR12R1)
@{*/


#define DAC_DHR12R1_DACC1DHR_SHIFT		0
#define DAC_DHR12R1_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12r1_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12l1 DHR12L1 DAC channel1 12-bit left aligned data holding register (DAC_DHR12L1)
@{*/


#define DAC_DHR12L1_DACC1DHR_SHIFT		4
#define DAC_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8r1 DHR8R1 DAC channel1 8-bit right aligned data holding register (DAC_DHR8R1)
@{*/


#define DAC_DHR8R1_DACC1DHR_SHIFT		0
#define DAC_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12r2 DHR12R2 DAC channel2 12-bit right aligned data holding register (DAC_DHR12R2)
@{*/


#define DAC_DHR12R2_DACC2DHR_SHIFT		0
#define DAC_DHR12R2_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12r2_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12l2 DHR12L2 DAC channel2 12-bit left aligned data holding register (DAC_DHR12L2)
@{*/


#define DAC_DHR12L2_DACC2DHR_SHIFT		4
#define DAC_DHR12L2_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12l2_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8r2 DHR8R2 DAC channel2 8-bit right-aligned data holding register (DAC_DHR8R2)
@{*/


#define DAC_DHR8R2_DACC2DHR_SHIFT		0
#define DAC_DHR8R2_DACC2DHR_MASK		0xff
/** @defgroup dac_dhr8r2_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr12rd DHR12RD Dual DAC 12-bit right-aligned data holding register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12 Reserved
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

/** @defgroup dac_dhr12ld DHR12LD DUAL DAC 12-bit left aligned data holding register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0 Reserved
@{*/


#define DAC_DHR12LD_DACC2DHR_SHIFT		20
#define DAC_DHR12LD_DACC2DHR_MASK		0xfff
/** @defgroup dac_dhr12ld_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


#define DAC_DHR12LD_DACC1DHR_SHIFT		4
#define DAC_DHR12LD_DACC1DHR_MASK		0xfff
/** @defgroup dac_dhr12ld_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dhr8rd DHR8RD DUAL DAC 8-bit right aligned data holding register (DAC_DHR8RD), Bits 31:16 Reserved
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

/** @defgroup dac_dor1 DOR1 DAC channel1 data output register (DAC_DOR1)
@{*/


#define DAC_DOR1_DACC1DOR_SHIFT		0
#define DAC_DOR1_DACC1DOR_MASK		0xfff
/** @defgroup dac_dor1_dacc1dor DACC1DOR DAC channel1 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dor2 DOR2 DAC channel2 data output register (DAC_DOR2)
@{*/


#define DAC_DOR2_DACC2DOR_SHIFT		0
#define DAC_DOR2_DACC2DOR_MASK		0xfff
/** @defgroup dac_dor2_dacc2dor DACC2DOR DAC channel2 data output
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_sr SR DAC status register
@{*/

/** DAC_SR_DMAUDR2 DAC channel2 DMA underrun flag **/
#define DAC_SR_DMAUDR2		(1 << 29)
/** DAC_SR_DMAUDR1 DAC channel1 DMA underrun flag **/
#define DAC_SR_DMAUDR1		(1 << 13)

/**@}*/

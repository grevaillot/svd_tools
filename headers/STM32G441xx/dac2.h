#pragma once 

/* --- DAC2: Digital-to-analog converter ---------------------------- */

/** @defgroup dac2_registers Digital-to-analog converter Register
@{*/

/** DAC2_DAC_CR DAC control register **/
#define DAC2_DAC_CR			MMIO32(DAC2_BASE + 0x00)
/** DAC2_DAC_SWTRGR DAC software trigger register **/
#define DAC2_DAC_SWTRGR			MMIO32(DAC2_BASE + 0x04)
/** DAC2_DAC_DHR12R1 DAC channel1 12-bit right-aligned data holding register **/
#define DAC2_DAC_DHR12R1			MMIO32(DAC2_BASE + 0x08)
/** DAC2_DAC_DHR12L1 DAC channel1 12-bit left aligned data holding register **/
#define DAC2_DAC_DHR12L1			MMIO32(DAC2_BASE + 0x0c)
/** DAC2_DAC_DHR8R1 DAC channel1 8-bit right aligned data holding register **/
#define DAC2_DAC_DHR8R1			MMIO32(DAC2_BASE + 0x10)
/** DAC2_DAC_DHR12R2 DAC channel2 12-bit right aligned data holding register **/
#define DAC2_DAC_DHR12R2			MMIO32(DAC2_BASE + 0x14)
/** DAC2_DAC_DHR12L2 DAC channel2 12-bit left aligned data holding register **/
#define DAC2_DAC_DHR12L2			MMIO32(DAC2_BASE + 0x18)
/** DAC2_DAC_DHR8R2 DAC channel2 8-bit right-aligned data holding register **/
#define DAC2_DAC_DHR8R2			MMIO32(DAC2_BASE + 0x1c)
/** DAC2_DAC_DHR12RD Dual DAC 12-bit right-aligned data holding register **/
#define DAC2_DAC_DHR12RD			MMIO32(DAC2_BASE + 0x20)
/** DAC2_DAC_DHR12LD DUAL DAC 12-bit left aligned data holding register **/
#define DAC2_DAC_DHR12LD			MMIO32(DAC2_BASE + 0x24)
/** DAC2_DAC_DHR8RD DUAL DAC 8-bit right aligned data holding register **/
#define DAC2_DAC_DHR8RD			MMIO32(DAC2_BASE + 0x28)
/** DAC2_DAC_DOR1 DAC channel1 data output register **/
#define DAC2_DAC_DOR1			MMIO32(DAC2_BASE + 0x2c)
/** DAC2_DAC_DOR2 DAC channel2 data output register **/
#define DAC2_DAC_DOR2			MMIO32(DAC2_BASE + 0x30)
/** DAC2_DAC_SR DAC status register **/
#define DAC2_DAC_SR			MMIO32(DAC2_BASE + 0x34)
/** DAC2_DAC_CCR DAC calibration control register **/
#define DAC2_DAC_CCR			MMIO32(DAC2_BASE + 0x38)
/** DAC2_DAC_MCR DAC mode control register **/
#define DAC2_DAC_MCR			MMIO32(DAC2_BASE + 0x3c)
/** DAC2_DAC_SHSR1 DAC Sample and Hold sample time register 1 **/
#define DAC2_DAC_SHSR1			MMIO32(DAC2_BASE + 0x40)
/** DAC2_DAC_SHSR2 DAC Sample and Hold sample time register 2 **/
#define DAC2_DAC_SHSR2			MMIO32(DAC2_BASE + 0x44)
/** DAC2_DAC_SHHR DAC Sample and Hold hold time register **/
#define DAC2_DAC_SHHR			MMIO32(DAC2_BASE + 0x48)
/** DAC2_DAC_SHRR DAC Sample and Hold refresh time register **/
#define DAC2_DAC_SHRR			MMIO32(DAC2_BASE + 0x4c)
/** DAC2_DAC_STR1 Sawtooth register **/
#define DAC2_DAC_STR1			MMIO32(DAC2_BASE + 0x58)
/** DAC2_DAC_STR2 Sawtooth register **/
#define DAC2_DAC_STR2			MMIO32(DAC2_BASE + 0x5c)
/** DAC2_DAC_STMODR Sawtooth Mode register **/
#define DAC2_DAC_STMODR			MMIO32(DAC2_BASE + 0x60)

/**@}*/


/** @defgroup dac2_dac_cr DACCR DAC control register
@{*/

/** DAC2_DAC_CR_CEN2 DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. **/
#define DAC2_DAC_CR_CEN2		(1 << 30)
/** DAC2_DAC_CR_DMAUDRIE2 DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software. **/
#define DAC2_DAC_CR_DMAUDRIE2		(1 << 29)
/** DAC2_DAC_CR_DMAEN2 DAC channel2 DMA enable This bit is set and cleared by software. **/
#define DAC2_DAC_CR_DMAEN2		(1 << 28)

#define DAC2_DAC_CR_MAMP2_SHIFT		24
#define DAC2_DAC_CR_MAMP2_MASK		0x0f
/** @defgroup dac2_dac_cr_mamp2 MAMP2 DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
@{*/
/**@}*/


#define DAC2_DAC_CR_WAVE2_SHIFT		22
#define DAC2_DAC_CR_WAVE2_MASK		0x03
/** @defgroup dac2_dac_cr_wave2 WAVE2 DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled)
@{*/
/**@}*/


#define DAC2_DAC_CR_TSEL2_SHIFT		18
#define DAC2_DAC_CR_TSEL2_MASK		0x0f
/** @defgroup dac2_dac_cr_tsel2 TSEL2 DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled).
@{*/
/**@}*/

/** DAC2_DAC_CR_TEN2 DAC channel2 trigger enable **/
#define DAC2_DAC_CR_TEN2		(1 << 17)
/** DAC2_DAC_CR_EN2 DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2. **/
#define DAC2_DAC_CR_EN2		(1 << 16)
/** DAC2_DAC_CR_CEN1 DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. **/
#define DAC2_DAC_CR_CEN1		(1 << 14)
/** DAC2_DAC_CR_DMAUDRIE1 DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software. **/
#define DAC2_DAC_CR_DMAUDRIE1		(1 << 13)
/** DAC2_DAC_CR_DMAEN1 DAC channel1 DMA enable This bit is set and cleared by software. **/
#define DAC2_DAC_CR_DMAEN1		(1 << 12)

#define DAC2_DAC_CR_MAMP1_SHIFT		8
#define DAC2_DAC_CR_MAMP1_MASK		0x0f
/** @defgroup dac2_dac_cr_mamp1 MAMP1 DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
@{*/
/**@}*/


#define DAC2_DAC_CR_WAVE1_SHIFT		6
#define DAC2_DAC_CR_WAVE1_MASK		0x03
/** @defgroup dac2_dac_cr_wave1 WAVE1 DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
@{*/
/**@}*/


#define DAC2_DAC_CR_TSEL1_SHIFT		2
#define DAC2_DAC_CR_TSEL1_MASK		0x0f
/** @defgroup dac2_dac_cr_tsel1 TSEL1 DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
@{*/
/**@}*/

/** DAC2_DAC_CR_TEN1 DAC channel1 trigger enable **/
#define DAC2_DAC_CR_TEN1		(1 << 1)
/** DAC2_DAC_CR_EN1 DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1. **/
#define DAC2_DAC_CR_EN1		(1 << 0)

/**@}*/

/** @defgroup dac2_dac_swtrgr DACSWTRGR DAC software trigger register
@{*/

/** DAC2_DAC_SWTRGR_SWTRIGB2 DAC channel2 software trigger B **/
#define DAC2_DAC_SWTRGR_SWTRIGB2		(1 << 17)
/** DAC2_DAC_SWTRGR_SWTRIGB1 DAC channel1 software trigger B **/
#define DAC2_DAC_SWTRGR_SWTRIGB1		(1 << 16)
/** DAC2_DAC_SWTRGR_SWTRIG2 DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register. **/
#define DAC2_DAC_SWTRGR_SWTRIG2		(1 << 1)
/** DAC2_DAC_SWTRGR_SWTRIG1 DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register. **/
#define DAC2_DAC_SWTRGR_SWTRIG1		(1 << 0)

/**@}*/

/** @defgroup dac2_dac_dhr12r1 DACDHR12R1 DAC channel1 12-bit right-aligned data holding register
@{*/


#define DAC2_DAC_DHR12R1_DACC1DHRB_SHIFT		16
#define DAC2_DAC_DHR12R1_DACC1DHRB_MASK		0xfff
/** @defgroup dac2_dac_dhr12r1_dacc1dhrb DACC1DHRB DAC channel1 12-bit right-aligned data B
@{*/
/**@}*/


#define DAC2_DAC_DHR12R1_DACC1DHR_SHIFT		0
#define DAC2_DAC_DHR12R1_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12r1_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr12l1 DACDHR12L1 DAC channel1 12-bit left aligned data holding register
@{*/


#define DAC2_DAC_DHR12L1_DACC1DHRB_SHIFT		20
#define DAC2_DAC_DHR12L1_DACC1DHRB_MASK		0xfff
/** @defgroup dac2_dac_dhr12l1_dacc1dhrb DACC1DHRB DAC channel1 12-bit left-aligned data B
@{*/
/**@}*/


#define DAC2_DAC_DHR12L1_DACC1DHR_SHIFT		4
#define DAC2_DAC_DHR12L1_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12l1_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr8r1 DACDHR8R1 DAC channel1 8-bit right aligned data holding register
@{*/


#define DAC2_DAC_DHR8R1_DACC1DHRB_SHIFT		8
#define DAC2_DAC_DHR8R1_DACC1DHRB_MASK		0xff
/** @defgroup dac2_dac_dhr8r1_dacc1dhrb DACC1DHRB DAC channel1 8-bit right-aligned data
@{*/
/**@}*/


#define DAC2_DAC_DHR8R1_DACC1DHR_SHIFT		0
#define DAC2_DAC_DHR8R1_DACC1DHR_MASK		0xff
/** @defgroup dac2_dac_dhr8r1_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr12r2 DACDHR12R2 DAC channel2 12-bit right aligned data holding register
@{*/


#define DAC2_DAC_DHR12R2_DACC2DHRB_SHIFT		16
#define DAC2_DAC_DHR12R2_DACC2DHRB_MASK		0xfff
/** @defgroup dac2_dac_dhr12r2_dacc2dhrb DACC2DHRB DAC channel2 12-bit right-aligned data
@{*/
/**@}*/


#define DAC2_DAC_DHR12R2_DACC2DHR_SHIFT		0
#define DAC2_DAC_DHR12R2_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12r2_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr12l2 DACDHR12L2 DAC channel2 12-bit left aligned data holding register
@{*/


#define DAC2_DAC_DHR12L2_DACC2DHRB_SHIFT		20
#define DAC2_DAC_DHR12L2_DACC2DHRB_MASK		0xfff
/** @defgroup dac2_dac_dhr12l2_dacc2dhrb DACC2DHRB DAC channel2 12-bit left-aligned data B
@{*/
/**@}*/


#define DAC2_DAC_DHR12L2_DACC2DHR_SHIFT		4
#define DAC2_DAC_DHR12L2_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12l2_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr8r2 DACDHR8R2 DAC channel2 8-bit right-aligned data holding register
@{*/


#define DAC2_DAC_DHR8R2_DACC2DHRB_SHIFT		8
#define DAC2_DAC_DHR8R2_DACC2DHRB_MASK		0xff
/** @defgroup dac2_dac_dhr8r2_dacc2dhrb DACC2DHRB DAC channel2 8-bit right-aligned data
@{*/
/**@}*/


#define DAC2_DAC_DHR8R2_DACC2DHR_SHIFT		0
#define DAC2_DAC_DHR8R2_DACC2DHR_MASK		0xff
/** @defgroup dac2_dac_dhr8r2_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr12rd DACDHR12RD Dual DAC 12-bit right-aligned data holding register
@{*/


#define DAC2_DAC_DHR12RD_DACC2DHR_SHIFT		16
#define DAC2_DAC_DHR12RD_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12rd_dacc2dhr DACC2DHR DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
@{*/
/**@}*/


#define DAC2_DAC_DHR12RD_DACC1DHR_SHIFT		0
#define DAC2_DAC_DHR12RD_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12rd_dacc1dhr DACC1DHR DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr12ld DACDHR12LD DUAL DAC 12-bit left aligned data holding register
@{*/


#define DAC2_DAC_DHR12LD_DACC2DHR_SHIFT		20
#define DAC2_DAC_DHR12LD_DACC2DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12ld_dacc2dhr DACC2DHR DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
@{*/
/**@}*/


#define DAC2_DAC_DHR12LD_DACC1DHR_SHIFT		4
#define DAC2_DAC_DHR12LD_DACC1DHR_MASK		0xfff
/** @defgroup dac2_dac_dhr12ld_dacc1dhr DACC1DHR DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dhr8rd DACDHR8RD DUAL DAC 8-bit right aligned data holding register
@{*/


#define DAC2_DAC_DHR8RD_DACC2DHR_SHIFT		8
#define DAC2_DAC_DHR8RD_DACC2DHR_MASK		0xff
/** @defgroup dac2_dac_dhr8rd_dacc2dhr DACC2DHR DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
@{*/
/**@}*/


#define DAC2_DAC_DHR8RD_DACC1DHR_SHIFT		0
#define DAC2_DAC_DHR8RD_DACC1DHR_MASK		0xff
/** @defgroup dac2_dac_dhr8rd_dacc1dhr DACC1DHR DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dor1 DACDOR1 DAC channel1 data output register
@{*/


#define DAC2_DAC_DOR1_DACC1DORB_SHIFT		16
#define DAC2_DAC_DOR1_DACC1DORB_MASK		0xfff
/** @defgroup dac2_dac_dor1_dacc1dorb DACC1DORB DAC channel1 data output
@{*/
/**@}*/


#define DAC2_DAC_DOR1_DACC1DOR_SHIFT		0
#define DAC2_DAC_DOR1_DACC1DOR_MASK		0xfff
/** @defgroup dac2_dac_dor1_dacc1dor DACC1DOR DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_dor2 DACDOR2 DAC channel2 data output register
@{*/


#define DAC2_DAC_DOR2_DACC2DORB_SHIFT		16
#define DAC2_DAC_DOR2_DACC2DORB_MASK		0xfff
/** @defgroup dac2_dac_dor2_dacc2dorb DACC2DORB DAC channel2 data output
@{*/
/**@}*/


#define DAC2_DAC_DOR2_DACC2DOR_SHIFT		0
#define DAC2_DAC_DOR2_DACC2DOR_MASK		0xfff
/** @defgroup dac2_dac_dor2_dacc2dor DACC2DOR DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_sr DACSR DAC status register
@{*/

/** DAC2_DAC_SR_BWST2 DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization). **/
#define DAC2_DAC_SR_BWST2		(1 << 31)
/** DAC2_DAC_SR_CAL_FLAG2 DAC Channel 2 calibration offset status This bit is set and cleared by hardware **/
#define DAC2_DAC_SR_CAL_FLAG2		(1 << 30)
/** DAC2_DAC_SR_DMAUDR2 DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). **/
#define DAC2_DAC_SR_DMAUDR2		(1 << 29)
/** DAC2_DAC_SR_DORSTAT2 DAC channel 2 output register status bit **/
#define DAC2_DAC_SR_DORSTAT2		(1 << 28)
/** DAC2_DAC_SR_DAC2RDY DAC channel 2 ready status bit **/
#define DAC2_DAC_SR_DAC2RDY		(1 << 27)
/** DAC2_DAC_SR_BWST1 DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization). **/
#define DAC2_DAC_SR_BWST1		(1 << 15)
/** DAC2_DAC_SR_CAL_FLAG1 DAC Channel 1 calibration offset status This bit is set and cleared by hardware **/
#define DAC2_DAC_SR_CAL_FLAG1		(1 << 14)
/** DAC2_DAC_SR_DMAUDR1 DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). **/
#define DAC2_DAC_SR_DMAUDR1		(1 << 13)
/** DAC2_DAC_SR_DORSTAT1 DAC channel1 output register status bit **/
#define DAC2_DAC_SR_DORSTAT1		(1 << 12)
/** DAC2_DAC_SR_DAC1RDY DAC channel1 ready status bit **/
#define DAC2_DAC_SR_DAC1RDY		(1 << 11)

/**@}*/

/** @defgroup dac2_dac_ccr DACCCR DAC calibration control register
@{*/


#define DAC2_DAC_CCR_OTRIM2_SHIFT		16
#define DAC2_DAC_CCR_OTRIM2_MASK		0x1f
/** @defgroup dac2_dac_ccr_otrim2 OTRIM2 DAC Channel 2 offset trimming value
@{*/
/**@}*/


#define DAC2_DAC_CCR_OTRIM1_SHIFT		0
#define DAC2_DAC_CCR_OTRIM1_MASK		0x1f
/** @defgroup dac2_dac_ccr_otrim1 OTRIM1 DAC Channel 1 offset trimming value
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_mcr DACMCR DAC mode control register
@{*/

/** DAC2_DAC_MCR_SINFORMAT2 Enable signed format for DAC channel2 **/
#define DAC2_DAC_MCR_SINFORMAT2		(1 << 25)
/** DAC2_DAC_MCR_DMADOUBLE2 DAC Channel2 DMA double data mode **/
#define DAC2_DAC_MCR_DMADOUBLE2		(1 << 24)

#define DAC2_DAC_MCR_MODE2_SHIFT		16
#define DAC2_DAC_MCR_MODE2_MASK		0x07
/** @defgroup dac2_dac_mcr_mode2 MODE2 DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp; hold mode
@{*/
/**@}*/


#define DAC2_DAC_MCR_HFSEL_SHIFT		14
#define DAC2_DAC_MCR_HFSEL_MASK		0x03
/** @defgroup dac2_dac_mcr_hfsel HFSEL High frequency interface mode selection
@{*/
/**@}*/

/** DAC2_DAC_MCR_SINFORMAT1 Enable signed format for DAC channel1 **/
#define DAC2_DAC_MCR_SINFORMAT1		(1 << 9)
/** DAC2_DAC_MCR_DMADOUBLE1 DAC Channel1 DMA double data mode **/
#define DAC2_DAC_MCR_DMADOUBLE1		(1 << 8)

#define DAC2_DAC_MCR_MODE1_SHIFT		0
#define DAC2_DAC_MCR_MODE1_MASK		0x07
/** @defgroup dac2_dac_mcr_mode1 MODE1 DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp; hold mode
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_shsr1 DACSHSR1 DAC Sample and Hold sample time register 1
@{*/


#define DAC2_DAC_SHSR1_TSAMPLE1_SHIFT		0
#define DAC2_DAC_SHSR1_TSAMPLE1_MASK		0x3ff
/** @defgroup dac2_dac_shsr1_tsample1 TSAMPLE1 DAC Channel 1 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_shsr2 DACSHSR2 DAC Sample and Hold sample time register 2
@{*/


#define DAC2_DAC_SHSR2_TSAMPLE2_SHIFT		0
#define DAC2_DAC_SHSR2_TSAMPLE2_MASK		0x3ff
/** @defgroup dac2_dac_shsr2_tsample2 TSAMPLE2 DAC Channel 2 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored.
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_shhr DACSHHR DAC Sample and Hold hold time register
@{*/


#define DAC2_DAC_SHHR_THOLD2_SHIFT		16
#define DAC2_DAC_SHHR_THOLD2_MASK		0x3ff
/** @defgroup dac2_dac_shhr_thold2 THOLD2 DAC Channel 2 hold time (only valid in sample &amp; hold mode). Hold time= (THOLD[9:0]) x T LSI
@{*/
/**@}*/


#define DAC2_DAC_SHHR_THOLD1_SHIFT		0
#define DAC2_DAC_SHHR_THOLD1_MASK		0x3ff
/** @defgroup dac2_dac_shhr_thold1 THOLD1 DAC Channel 1 hold Time (only valid in sample &amp; hold mode) Hold time= (THOLD[9:0]) x T LSI
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_shrr DACSHRR DAC Sample and Hold refresh time register
@{*/


#define DAC2_DAC_SHRR_TREFRESH2_SHIFT		16
#define DAC2_DAC_SHRR_TREFRESH2_MASK		0xff
/** @defgroup dac2_dac_shrr_trefresh2 TREFRESH2 DAC Channel 2 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
@{*/
/**@}*/


#define DAC2_DAC_SHRR_TREFRESH1_SHIFT		0
#define DAC2_DAC_SHRR_TREFRESH1_MASK		0xff
/** @defgroup dac2_dac_shrr_trefresh1 TREFRESH1 DAC Channel 1 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_str1 DACSTR1 Sawtooth register
@{*/


#define DAC2_DAC_STR1_STINCDATA1_SHIFT		16
#define DAC2_DAC_STR1_STINCDATA1_MASK		0xffff
/** @defgroup dac2_dac_str1_stincdata1 STINCDATA1 DAC CH1 Sawtooth increment value (12.4 bit format)
@{*/
/**@}*/

/** DAC2_DAC_STR1_STDIR1 DAC Channel1 Sawtooth direction setting **/
#define DAC2_DAC_STR1_STDIR1		(1 << 12)

#define DAC2_DAC_STR1_STRSTDATA1_SHIFT		0
#define DAC2_DAC_STR1_STRSTDATA1_MASK		0xfff
/** @defgroup dac2_dac_str1_strstdata1 STRSTDATA1 DAC Channel 1 Sawtooth reset value
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_str2 DACSTR2 Sawtooth register
@{*/


#define DAC2_DAC_STR2_STINCDATA2_SHIFT		16
#define DAC2_DAC_STR2_STINCDATA2_MASK		0xffff
/** @defgroup dac2_dac_str2_stincdata2 STINCDATA2 DAC CH2 Sawtooth increment value (12.4 bit format)
@{*/
/**@}*/

/** DAC2_DAC_STR2_STDIR2 DAC Channel2 Sawtooth direction setting **/
#define DAC2_DAC_STR2_STDIR2		(1 << 12)

#define DAC2_DAC_STR2_STRSTDATA2_SHIFT		0
#define DAC2_DAC_STR2_STRSTDATA2_MASK		0xfff
/** @defgroup dac2_dac_str2_strstdata2 STRSTDATA2 DAC Channel 2 Sawtooth reset value
@{*/
/**@}*/


/**@}*/

/** @defgroup dac2_dac_stmodr DACSTMODR Sawtooth Mode register
@{*/


#define DAC2_DAC_STMODR_STINCTRIGSEL2_SHIFT		24
#define DAC2_DAC_STMODR_STINCTRIGSEL2_MASK		0x0f
/** @defgroup dac2_dac_stmodr_stinctrigsel2 STINCTRIGSEL2 DAC Channel 2 Sawtooth Increment trigger selection
@{*/
/**@}*/


#define DAC2_DAC_STMODR_STRSTTRIGSEL2_SHIFT		16
#define DAC2_DAC_STMODR_STRSTTRIGSEL2_MASK		0x0f
/** @defgroup dac2_dac_stmodr_strsttrigsel2 STRSTTRIGSEL2 DAC Channel 1 Sawtooth Reset trigger selection
@{*/
/**@}*/


#define DAC2_DAC_STMODR_STINCTRIGSEL1_SHIFT		8
#define DAC2_DAC_STMODR_STINCTRIGSEL1_MASK		0x0f
/** @defgroup dac2_dac_stmodr_stinctrigsel1 STINCTRIGSEL1 DAC Channel 1 Sawtooth Increment trigger selection
@{*/
/**@}*/


#define DAC2_DAC_STMODR_STRSTTRIGSEL1_SHIFT		0
#define DAC2_DAC_STMODR_STRSTTRIGSEL1_MASK		0x0f
/** @defgroup dac2_dac_stmodr_strsttrigsel1 STRSTTRIGSEL1 DAC Channel 1 Sawtooth Reset trigger selection
@{*/
/**@}*/


/**@}*/

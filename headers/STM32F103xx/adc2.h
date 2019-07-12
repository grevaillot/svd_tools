#pragma once 

/* --- ADC2: Analog to digital converter ---------------------------- */

/** @defgroup adc2_registers Analog to digital converter Register
@{*/

/** ADC2_SR status register **/
#define ADC2_SR			MMIO32(ADC2_BASE + 0x00)
/** ADC2_CR1 control register 1 **/
#define ADC2_CR1			MMIO32(ADC2_BASE + 0x04)
/** ADC2_CR2 control register 2 **/
#define ADC2_CR2			MMIO32(ADC2_BASE + 0x08)
/** ADC2_SMPR1 sample time register 1 **/
#define ADC2_SMPR1			MMIO32(ADC2_BASE + 0x0c)
/** ADC2_SMPR2 sample time register 2 **/
#define ADC2_SMPR2			MMIO32(ADC2_BASE + 0x10)
/** ADC2_JOFR1 injected channel data offset register x **/
#define ADC2_JOFR1			MMIO32(ADC2_BASE + 0x14)
/** ADC2_JOFR2 injected channel data offset register x **/
#define ADC2_JOFR2			MMIO32(ADC2_BASE + 0x18)
/** ADC2_JOFR3 injected channel data offset register x **/
#define ADC2_JOFR3			MMIO32(ADC2_BASE + 0x1c)
/** ADC2_JOFR4 injected channel data offset register x **/
#define ADC2_JOFR4			MMIO32(ADC2_BASE + 0x20)
/** ADC2_HTR watchdog higher threshold register **/
#define ADC2_HTR			MMIO32(ADC2_BASE + 0x24)
/** ADC2_LTR watchdog lower threshold register **/
#define ADC2_LTR			MMIO32(ADC2_BASE + 0x28)
/** ADC2_SQR1 regular sequence register 1 **/
#define ADC2_SQR1			MMIO32(ADC2_BASE + 0x2c)
/** ADC2_SQR2 regular sequence register 2 **/
#define ADC2_SQR2			MMIO32(ADC2_BASE + 0x30)
/** ADC2_SQR3 regular sequence register 3 **/
#define ADC2_SQR3			MMIO32(ADC2_BASE + 0x34)
/** ADC2_JSQR injected sequence register **/
#define ADC2_JSQR			MMIO32(ADC2_BASE + 0x38)
/** ADC2_JDR1 injected data register x **/
#define ADC2_JDR1			MMIO32(ADC2_BASE + 0x3c)
/** ADC2_JDR2 injected data register x **/
#define ADC2_JDR2			MMIO32(ADC2_BASE + 0x40)
/** ADC2_JDR3 injected data register x **/
#define ADC2_JDR3			MMIO32(ADC2_BASE + 0x44)
/** ADC2_JDR4 injected data register x **/
#define ADC2_JDR4			MMIO32(ADC2_BASE + 0x48)
/** ADC2_DR regular data register **/
#define ADC2_DR			MMIO32(ADC2_BASE + 0x4c)

/**@}*/


/** @defgroup adc2_sr SR status register
@{*/

/** ADC2_SR_STRT Regular channel start flag **/
#define ADC2_SR_STRT		(1 << 4)
/** ADC2_SR_JSTRT Injected channel start flag **/
#define ADC2_SR_JSTRT		(1 << 3)
/** ADC2_SR_JEOC Injected channel end of conversion **/
#define ADC2_SR_JEOC		(1 << 2)
/** ADC2_SR_EOC Regular channel end of conversion **/
#define ADC2_SR_EOC		(1 << 1)
/** ADC2_SR_AWD Analog watchdog flag **/
#define ADC2_SR_AWD		(1 << 0)

/**@}*/

/** @defgroup adc2_cr1 CR1 control register 1
@{*/

/** ADC2_CR1_AWDEN Analog watchdog enable on regular channels **/
#define ADC2_CR1_AWDEN		(1 << 23)
/** ADC2_CR1_JAWDEN Analog watchdog enable on injected channels **/
#define ADC2_CR1_JAWDEN		(1 << 22)

#define ADC2_CR1_DISCNUM_SHIFT		13
#define ADC2_CR1_DISCNUM_MASK		0x07
/** @defgroup adc2_cr1_discnum DISCNUM Discontinuous mode channel count
@{*/
/**@}*/

/** ADC2_CR1_JDISCEN Discontinuous mode on injected channels **/
#define ADC2_CR1_JDISCEN		(1 << 12)
/** ADC2_CR1_DISCEN Discontinuous mode on regular channels **/
#define ADC2_CR1_DISCEN		(1 << 11)
/** ADC2_CR1_JAUTO Automatic injected group conversion **/
#define ADC2_CR1_JAUTO		(1 << 10)
/** ADC2_CR1_AWDSGL Enable the watchdog on a single channel in scan mode **/
#define ADC2_CR1_AWDSGL		(1 << 9)
/** ADC2_CR1_SCAN Scan mode **/
#define ADC2_CR1_SCAN		(1 << 8)
/** ADC2_CR1_JEOCIE Interrupt enable for injected channels **/
#define ADC2_CR1_JEOCIE		(1 << 7)
/** ADC2_CR1_AWDIE Analog watchdog interrupt enable **/
#define ADC2_CR1_AWDIE		(1 << 6)
/** ADC2_CR1_EOCIE Interrupt enable for EOC **/
#define ADC2_CR1_EOCIE		(1 << 5)

#define ADC2_CR1_AWDCH_SHIFT		0
#define ADC2_CR1_AWDCH_MASK		0x1f
/** @defgroup adc2_cr1_awdch AWDCH Analog watchdog channel select bits
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_cr2 CR2 control register 2
@{*/

/** ADC2_CR2_TSVREFE Temperature sensor and VREFINT enable **/
#define ADC2_CR2_TSVREFE		(1 << 23)
/** ADC2_CR2_SWSTART Start conversion of regular channels **/
#define ADC2_CR2_SWSTART		(1 << 22)
/** ADC2_CR2_JSWSTART Start conversion of injected channels **/
#define ADC2_CR2_JSWSTART		(1 << 21)
/** ADC2_CR2_EXTTRIG External trigger conversion mode for regular channels **/
#define ADC2_CR2_EXTTRIG		(1 << 20)

#define ADC2_CR2_EXTSEL_SHIFT		17
#define ADC2_CR2_EXTSEL_MASK		0x07
/** @defgroup adc2_cr2_extsel EXTSEL External event select for regular group
@{*/
/**@}*/

/** ADC2_CR2_JEXTTRIG External trigger conversion mode for injected channels **/
#define ADC2_CR2_JEXTTRIG		(1 << 15)

#define ADC2_CR2_JEXTSEL_SHIFT		12
#define ADC2_CR2_JEXTSEL_MASK		0x07
/** @defgroup adc2_cr2_jextsel JEXTSEL External event select for injected group
@{*/
/**@}*/

/** ADC2_CR2_ALIGN Data alignment **/
#define ADC2_CR2_ALIGN		(1 << 11)
/** ADC2_CR2_DMA Direct memory access mode **/
#define ADC2_CR2_DMA		(1 << 8)
/** ADC2_CR2_RSTCAL Reset calibration **/
#define ADC2_CR2_RSTCAL		(1 << 3)
/** ADC2_CR2_CAL A/D calibration **/
#define ADC2_CR2_CAL		(1 << 2)
/** ADC2_CR2_CONT Continuous conversion **/
#define ADC2_CR2_CONT		(1 << 1)
/** ADC2_CR2_ADON A/D converter ON / OFF **/
#define ADC2_CR2_ADON		(1 << 0)

/**@}*/

/** @defgroup adc2_smpr1 SMPR1 sample time register 1
@{*/


#define ADC2_SMPR1_SMP17_SHIFT		21
#define ADC2_SMPR1_SMP17_MASK		0x07
/** @defgroup adc2_smpr1_smp17 SMP17 Channel 17 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP16_SHIFT		18
#define ADC2_SMPR1_SMP16_MASK		0x07
/** @defgroup adc2_smpr1_smp16 SMP16 Channel 16 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP15_SHIFT		15
#define ADC2_SMPR1_SMP15_MASK		0x07
/** @defgroup adc2_smpr1_smp15 SMP15 Channel 15 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP14_SHIFT		12
#define ADC2_SMPR1_SMP14_MASK		0x07
/** @defgroup adc2_smpr1_smp14 SMP14 Channel 14 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP13_SHIFT		9
#define ADC2_SMPR1_SMP13_MASK		0x07
/** @defgroup adc2_smpr1_smp13 SMP13 Channel 13 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP12_SHIFT		6
#define ADC2_SMPR1_SMP12_MASK		0x07
/** @defgroup adc2_smpr1_smp12 SMP12 Channel 12 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP11_SHIFT		3
#define ADC2_SMPR1_SMP11_MASK		0x07
/** @defgroup adc2_smpr1_smp11 SMP11 Channel 11 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP10_SHIFT		0
#define ADC2_SMPR1_SMP10_MASK		0x07
/** @defgroup adc2_smpr1_smp10 SMP10 Channel 10 sample time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_smpr2 SMPR2 sample time register 2
@{*/


#define ADC2_SMPR2_SMP9_SHIFT		27
#define ADC2_SMPR2_SMP9_MASK		0x07
/** @defgroup adc2_smpr2_smp9 SMP9 Channel 9 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP8_SHIFT		24
#define ADC2_SMPR2_SMP8_MASK		0x07
/** @defgroup adc2_smpr2_smp8 SMP8 Channel 8 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP7_SHIFT		21
#define ADC2_SMPR2_SMP7_MASK		0x07
/** @defgroup adc2_smpr2_smp7 SMP7 Channel 7 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP6_SHIFT		18
#define ADC2_SMPR2_SMP6_MASK		0x07
/** @defgroup adc2_smpr2_smp6 SMP6 Channel 6 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP5_SHIFT		15
#define ADC2_SMPR2_SMP5_MASK		0x07
/** @defgroup adc2_smpr2_smp5 SMP5 Channel 5 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP4_SHIFT		12
#define ADC2_SMPR2_SMP4_MASK		0x07
/** @defgroup adc2_smpr2_smp4 SMP4 Channel 4 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP3_SHIFT		9
#define ADC2_SMPR2_SMP3_MASK		0x07
/** @defgroup adc2_smpr2_smp3 SMP3 Channel 3 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP2_SHIFT		6
#define ADC2_SMPR2_SMP2_MASK		0x07
/** @defgroup adc2_smpr2_smp2 SMP2 Channel 2 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP1_SHIFT		3
#define ADC2_SMPR2_SMP1_MASK		0x07
/** @defgroup adc2_smpr2_smp1 SMP1 Channel 1 sample time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP0_SHIFT		0
#define ADC2_SMPR2_SMP0_MASK		0x07
/** @defgroup adc2_smpr2_smp0 SMP0 Channel 0 sample time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jofr1 JOFR1 injected channel data offset register x
@{*/


#define ADC2_JOFR1_JOFFSET1_SHIFT		0
#define ADC2_JOFR1_JOFFSET1_MASK		0xfff
/** @defgroup adc2_jofr1_joffset1 JOFFSET1 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jofr2 JOFR2 injected channel data offset register x
@{*/


#define ADC2_JOFR2_JOFFSET2_SHIFT		0
#define ADC2_JOFR2_JOFFSET2_MASK		0xfff
/** @defgroup adc2_jofr2_joffset2 JOFFSET2 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jofr3 JOFR3 injected channel data offset register x
@{*/


#define ADC2_JOFR3_JOFFSET3_SHIFT		0
#define ADC2_JOFR3_JOFFSET3_MASK		0xfff
/** @defgroup adc2_jofr3_joffset3 JOFFSET3 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jofr4 JOFR4 injected channel data offset register x
@{*/


#define ADC2_JOFR4_JOFFSET4_SHIFT		0
#define ADC2_JOFR4_JOFFSET4_MASK		0xfff
/** @defgroup adc2_jofr4_joffset4 JOFFSET4 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_htr HTR watchdog higher threshold register
@{*/


#define ADC2_HTR_HT_SHIFT		0
#define ADC2_HTR_HT_MASK		0xfff
/** @defgroup adc2_htr_ht HT Analog watchdog higher threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ltr LTR watchdog lower threshold register
@{*/


#define ADC2_LTR_LT_SHIFT		0
#define ADC2_LTR_LT_MASK		0xfff
/** @defgroup adc2_ltr_lt LT Analog watchdog lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr1 SQR1 regular sequence register 1
@{*/


#define ADC2_SQR1_L_SHIFT		20
#define ADC2_SQR1_L_MASK		0x0f
/** @defgroup adc2_sqr1_l L Regular channel sequence length
@{*/
/**@}*/


#define ADC2_SQR1_SQ16_SHIFT		15
#define ADC2_SQR1_SQ16_MASK		0x1f
/** @defgroup adc2_sqr1_sq16 SQ16 16th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR1_SQ15_SHIFT		10
#define ADC2_SQR1_SQ15_MASK		0x1f
/** @defgroup adc2_sqr1_sq15 SQ15 15th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR1_SQ14_SHIFT		5
#define ADC2_SQR1_SQ14_MASK		0x1f
/** @defgroup adc2_sqr1_sq14 SQ14 14th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR1_SQ13_SHIFT		0
#define ADC2_SQR1_SQ13_MASK		0x1f
/** @defgroup adc2_sqr1_sq13 SQ13 13th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr2 SQR2 regular sequence register 2
@{*/


#define ADC2_SQR2_SQ12_SHIFT		25
#define ADC2_SQR2_SQ12_MASK		0x1f
/** @defgroup adc2_sqr2_sq12 SQ12 12th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR2_SQ11_SHIFT		20
#define ADC2_SQR2_SQ11_MASK		0x1f
/** @defgroup adc2_sqr2_sq11 SQ11 11th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR2_SQ10_SHIFT		15
#define ADC2_SQR2_SQ10_MASK		0x1f
/** @defgroup adc2_sqr2_sq10 SQ10 10th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR2_SQ9_SHIFT		10
#define ADC2_SQR2_SQ9_MASK		0x1f
/** @defgroup adc2_sqr2_sq9 SQ9 9th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR2_SQ8_SHIFT		5
#define ADC2_SQR2_SQ8_MASK		0x1f
/** @defgroup adc2_sqr2_sq8 SQ8 8th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR2_SQ7_SHIFT		0
#define ADC2_SQR2_SQ7_MASK		0x1f
/** @defgroup adc2_sqr2_sq7 SQ7 7th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr3 SQR3 regular sequence register 3
@{*/


#define ADC2_SQR3_SQ6_SHIFT		25
#define ADC2_SQR3_SQ6_MASK		0x1f
/** @defgroup adc2_sqr3_sq6 SQ6 6th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR3_SQ5_SHIFT		20
#define ADC2_SQR3_SQ5_MASK		0x1f
/** @defgroup adc2_sqr3_sq5 SQ5 5th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR3_SQ4_SHIFT		15
#define ADC2_SQR3_SQ4_MASK		0x1f
/** @defgroup adc2_sqr3_sq4 SQ4 4th conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR3_SQ3_SHIFT		10
#define ADC2_SQR3_SQ3_MASK		0x1f
/** @defgroup adc2_sqr3_sq3 SQ3 3rd conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR3_SQ2_SHIFT		5
#define ADC2_SQR3_SQ2_MASK		0x1f
/** @defgroup adc2_sqr3_sq2 SQ2 2nd conversion in regular sequence
@{*/
/**@}*/


#define ADC2_SQR3_SQ1_SHIFT		0
#define ADC2_SQR3_SQ1_MASK		0x1f
/** @defgroup adc2_sqr3_sq1 SQ1 1st conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jsqr JSQR injected sequence register
@{*/


#define ADC2_JSQR_JL_SHIFT		20
#define ADC2_JSQR_JL_MASK		0x03
/** @defgroup adc2_jsqr_jl JL Injected sequence length
@{*/
/**@}*/


#define ADC2_JSQR_JSQ4_SHIFT		15
#define ADC2_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc2_jsqr_jsq4 JSQ4 4th conversion in injected sequence
@{*/
/**@}*/


#define ADC2_JSQR_JSQ3_SHIFT		10
#define ADC2_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc2_jsqr_jsq3 JSQ3 3rd conversion in injected sequence
@{*/
/**@}*/


#define ADC2_JSQR_JSQ2_SHIFT		5
#define ADC2_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc2_jsqr_jsq2 JSQ2 2nd conversion in injected sequence
@{*/
/**@}*/


#define ADC2_JSQR_JSQ1_SHIFT		0
#define ADC2_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc2_jsqr_jsq1 JSQ1 1st conversion in injected sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr1 JDR1 injected data register x
@{*/


#define ADC2_JDR1_JDATA_SHIFT		0
#define ADC2_JDR1_JDATA_MASK		0xffff
/** @defgroup adc2_jdr1_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr2 JDR2 injected data register x
@{*/


#define ADC2_JDR2_JDATA_SHIFT		0
#define ADC2_JDR2_JDATA_MASK		0xffff
/** @defgroup adc2_jdr2_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr3 JDR3 injected data register x
@{*/


#define ADC2_JDR3_JDATA_SHIFT		0
#define ADC2_JDR3_JDATA_MASK		0xffff
/** @defgroup adc2_jdr3_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr4 JDR4 injected data register x
@{*/


#define ADC2_JDR4_JDATA_SHIFT		0
#define ADC2_JDR4_JDATA_MASK		0xffff
/** @defgroup adc2_jdr4_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_dr DR regular data register
@{*/


#define ADC2_DR_DATA_SHIFT		0
#define ADC2_DR_DATA_MASK		0xffff
/** @defgroup adc2_dr_data DATA Regular data
@{*/
/**@}*/


/**@}*/

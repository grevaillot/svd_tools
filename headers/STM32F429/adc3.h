#pragma once 

/* --- ADC3: Analog-to-digital converter ---------------------------- */

/** @defgroup adc3_registers Analog-to-digital converter Register
@{*/

/** ADC3_SR status register **/
#define ADC3_SR			MMIO32(ADC3_BASE + 0x00)
/** ADC3_CR1 control register 1 **/
#define ADC3_CR1			MMIO32(ADC3_BASE + 0x04)
/** ADC3_CR2 control register 2 **/
#define ADC3_CR2			MMIO32(ADC3_BASE + 0x08)
/** ADC3_SMPR1 sample time register 1 **/
#define ADC3_SMPR1			MMIO32(ADC3_BASE + 0x0c)
/** ADC3_SMPR2 sample time register 2 **/
#define ADC3_SMPR2			MMIO32(ADC3_BASE + 0x10)
/** ADC3_JOFR1 injected channel data offset register x **/
#define ADC3_JOFR1			MMIO32(ADC3_BASE + 0x14)
/** ADC3_JOFR2 injected channel data offset register x **/
#define ADC3_JOFR2			MMIO32(ADC3_BASE + 0x18)
/** ADC3_JOFR3 injected channel data offset register x **/
#define ADC3_JOFR3			MMIO32(ADC3_BASE + 0x1c)
/** ADC3_JOFR4 injected channel data offset register x **/
#define ADC3_JOFR4			MMIO32(ADC3_BASE + 0x20)
/** ADC3_HTR watchdog higher threshold register **/
#define ADC3_HTR			MMIO32(ADC3_BASE + 0x24)
/** ADC3_LTR watchdog lower threshold register **/
#define ADC3_LTR			MMIO32(ADC3_BASE + 0x28)
/** ADC3_SQR1 regular sequence register 1 **/
#define ADC3_SQR1			MMIO32(ADC3_BASE + 0x2c)
/** ADC3_SQR2 regular sequence register 2 **/
#define ADC3_SQR2			MMIO32(ADC3_BASE + 0x30)
/** ADC3_SQR3 regular sequence register 3 **/
#define ADC3_SQR3			MMIO32(ADC3_BASE + 0x34)
/** ADC3_JSQR injected sequence register **/
#define ADC3_JSQR			MMIO32(ADC3_BASE + 0x38)
/** ADC3_JDR1 injected data register x **/
#define ADC3_JDR1			MMIO32(ADC3_BASE + 0x3c)
/** ADC3_JDR2 injected data register x **/
#define ADC3_JDR2			MMIO32(ADC3_BASE + 0x40)
/** ADC3_JDR3 injected data register x **/
#define ADC3_JDR3			MMIO32(ADC3_BASE + 0x44)
/** ADC3_JDR4 injected data register x **/
#define ADC3_JDR4			MMIO32(ADC3_BASE + 0x48)
/** ADC3_DR regular data register **/
#define ADC3_DR			MMIO32(ADC3_BASE + 0x4c)

/**@}*/


/** @defgroup adc3_sr SR status register
@{*/

/** ADC3_SR_OVR Overrun **/
#define ADC3_SR_OVR		(1 << 5)
/** ADC3_SR_STRT Regular channel start flag **/
#define ADC3_SR_STRT		(1 << 4)
/** ADC3_SR_JSTRT Injected channel start flag **/
#define ADC3_SR_JSTRT		(1 << 3)
/** ADC3_SR_JEOC Injected channel end of conversion **/
#define ADC3_SR_JEOC		(1 << 2)
/** ADC3_SR_EOC Regular channel end of conversion **/
#define ADC3_SR_EOC		(1 << 1)
/** ADC3_SR_AWD Analog watchdog flag **/
#define ADC3_SR_AWD		(1 << 0)

/**@}*/

/** @defgroup adc3_cr1 CR1 control register 1
@{*/

/** ADC3_CR1_OVRIE Overrun interrupt enable **/
#define ADC3_CR1_OVRIE		(1 << 26)

#define ADC3_CR1_RES_SHIFT		24
#define ADC3_CR1_RES_MASK		0x03
/** @defgroup adc3_cr1_res RES Resolution
@{*/
/**@}*/

/** ADC3_CR1_AWDEN Analog watchdog enable on regular channels **/
#define ADC3_CR1_AWDEN		(1 << 23)
/** ADC3_CR1_JAWDEN Analog watchdog enable on injected channels **/
#define ADC3_CR1_JAWDEN		(1 << 22)

#define ADC3_CR1_DISCNUM_SHIFT		13
#define ADC3_CR1_DISCNUM_MASK		0x07
/** @defgroup adc3_cr1_discnum DISCNUM Discontinuous mode channel count
@{*/
/**@}*/

/** ADC3_CR1_JDISCEN Discontinuous mode on injected channels **/
#define ADC3_CR1_JDISCEN		(1 << 12)
/** ADC3_CR1_DISCEN Discontinuous mode on regular channels **/
#define ADC3_CR1_DISCEN		(1 << 11)
/** ADC3_CR1_JAUTO Automatic injected group conversion **/
#define ADC3_CR1_JAUTO		(1 << 10)
/** ADC3_CR1_AWDSGL Enable the watchdog on a single channel in scan mode **/
#define ADC3_CR1_AWDSGL		(1 << 9)
/** ADC3_CR1_SCAN Scan mode **/
#define ADC3_CR1_SCAN		(1 << 8)
/** ADC3_CR1_JEOCIE Interrupt enable for injected channels **/
#define ADC3_CR1_JEOCIE		(1 << 7)
/** ADC3_CR1_AWDIE Analog watchdog interrupt enable **/
#define ADC3_CR1_AWDIE		(1 << 6)
/** ADC3_CR1_EOCIE Interrupt enable for EOC **/
#define ADC3_CR1_EOCIE		(1 << 5)

#define ADC3_CR1_AWDCH_SHIFT		0
#define ADC3_CR1_AWDCH_MASK		0x1f
/** @defgroup adc3_cr1_awdch AWDCH Analog watchdog channel select bits
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_cr2 CR2 control register 2
@{*/

/** ADC3_CR2_SWSTART Start conversion of regular channels **/
#define ADC3_CR2_SWSTART		(1 << 30)

#define ADC3_CR2_EXTEN_SHIFT		28
#define ADC3_CR2_EXTEN_MASK		0x03
/** @defgroup adc3_cr2_exten EXTEN External trigger enable for regular channels
@{*/
/**@}*/


#define ADC3_CR2_EXTSEL_SHIFT		24
#define ADC3_CR2_EXTSEL_MASK		0x0f
/** @defgroup adc3_cr2_extsel EXTSEL External event select for regular group
@{*/
/**@}*/

/** ADC3_CR2_JSWSTART Start conversion of injected channels **/
#define ADC3_CR2_JSWSTART		(1 << 22)

#define ADC3_CR2_JEXTEN_SHIFT		20
#define ADC3_CR2_JEXTEN_MASK		0x03
/** @defgroup adc3_cr2_jexten JEXTEN External trigger enable for injected channels
@{*/
/**@}*/


#define ADC3_CR2_JEXTSEL_SHIFT		16
#define ADC3_CR2_JEXTSEL_MASK		0x0f
/** @defgroup adc3_cr2_jextsel JEXTSEL External event select for injected group
@{*/
/**@}*/

/** ADC3_CR2_ALIGN Data alignment **/
#define ADC3_CR2_ALIGN		(1 << 11)
/** ADC3_CR2_EOCS End of conversion selection **/
#define ADC3_CR2_EOCS		(1 << 10)
/** ADC3_CR2_DDS DMA disable selection (for single ADC mode) **/
#define ADC3_CR2_DDS		(1 << 9)
/** ADC3_CR2_DMA Direct memory access mode (for single ADC mode) **/
#define ADC3_CR2_DMA		(1 << 8)
/** ADC3_CR2_CONT Continuous conversion **/
#define ADC3_CR2_CONT		(1 << 1)
/** ADC3_CR2_ADON A/D Converter ON / OFF **/
#define ADC3_CR2_ADON		(1 << 0)

/**@}*/

/** @defgroup adc3_smpr1 SMPR1 sample time register 1
@{*/


#define ADC3_SMPR1_SMPx_x_SHIFT		0
#define ADC3_SMPR1_SMPx_x_MASK		0xffffffff
/** @defgroup adc3_smpr1_smpx_x SMPxx Sample time bits
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_smpr2 SMPR2 sample time register 2
@{*/


#define ADC3_SMPR2_SMPx_x_SHIFT		0
#define ADC3_SMPR2_SMPx_x_MASK		0xffffffff
/** @defgroup adc3_smpr2_smpx_x SMPxx Sample time bits
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jofr1 JOFR1 injected channel data offset register x
@{*/


#define ADC3_JOFR1_JOFFSET1_SHIFT		0
#define ADC3_JOFR1_JOFFSET1_MASK		0xfff
/** @defgroup adc3_jofr1_joffset1 JOFFSET1 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jofr2 JOFR2 injected channel data offset register x
@{*/


#define ADC3_JOFR2_JOFFSET2_SHIFT		0
#define ADC3_JOFR2_JOFFSET2_MASK		0xfff
/** @defgroup adc3_jofr2_joffset2 JOFFSET2 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jofr3 JOFR3 injected channel data offset register x
@{*/


#define ADC3_JOFR3_JOFFSET3_SHIFT		0
#define ADC3_JOFR3_JOFFSET3_MASK		0xfff
/** @defgroup adc3_jofr3_joffset3 JOFFSET3 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jofr4 JOFR4 injected channel data offset register x
@{*/


#define ADC3_JOFR4_JOFFSET4_SHIFT		0
#define ADC3_JOFR4_JOFFSET4_MASK		0xfff
/** @defgroup adc3_jofr4_joffset4 JOFFSET4 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_htr HTR watchdog higher threshold register
@{*/


#define ADC3_HTR_HT_SHIFT		0
#define ADC3_HTR_HT_MASK		0xfff
/** @defgroup adc3_htr_ht HT Analog watchdog higher threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_ltr LTR watchdog lower threshold register
@{*/


#define ADC3_LTR_LT_SHIFT		0
#define ADC3_LTR_LT_MASK		0xfff
/** @defgroup adc3_ltr_lt LT Analog watchdog lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_sqr1 SQR1 regular sequence register 1
@{*/


#define ADC3_SQR1_L_SHIFT		20
#define ADC3_SQR1_L_MASK		0x0f
/** @defgroup adc3_sqr1_l L Regular channel sequence length
@{*/
/**@}*/


#define ADC3_SQR1_SQ16_SHIFT		15
#define ADC3_SQR1_SQ16_MASK		0x1f
/** @defgroup adc3_sqr1_sq16 SQ16 16th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR1_SQ15_SHIFT		10
#define ADC3_SQR1_SQ15_MASK		0x1f
/** @defgroup adc3_sqr1_sq15 SQ15 15th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR1_SQ14_SHIFT		5
#define ADC3_SQR1_SQ14_MASK		0x1f
/** @defgroup adc3_sqr1_sq14 SQ14 14th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR1_SQ13_SHIFT		0
#define ADC3_SQR1_SQ13_MASK		0x1f
/** @defgroup adc3_sqr1_sq13 SQ13 13th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_sqr2 SQR2 regular sequence register 2
@{*/


#define ADC3_SQR2_SQ12_SHIFT		25
#define ADC3_SQR2_SQ12_MASK		0x1f
/** @defgroup adc3_sqr2_sq12 SQ12 12th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR2_SQ11_SHIFT		20
#define ADC3_SQR2_SQ11_MASK		0x1f
/** @defgroup adc3_sqr2_sq11 SQ11 11th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR2_SQ10_SHIFT		15
#define ADC3_SQR2_SQ10_MASK		0x1f
/** @defgroup adc3_sqr2_sq10 SQ10 10th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR2_SQ9_SHIFT		10
#define ADC3_SQR2_SQ9_MASK		0x1f
/** @defgroup adc3_sqr2_sq9 SQ9 9th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR2_SQ8_SHIFT		5
#define ADC3_SQR2_SQ8_MASK		0x1f
/** @defgroup adc3_sqr2_sq8 SQ8 8th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR2_SQ7_SHIFT		0
#define ADC3_SQR2_SQ7_MASK		0x1f
/** @defgroup adc3_sqr2_sq7 SQ7 7th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_sqr3 SQR3 regular sequence register 3
@{*/


#define ADC3_SQR3_SQ6_SHIFT		25
#define ADC3_SQR3_SQ6_MASK		0x1f
/** @defgroup adc3_sqr3_sq6 SQ6 6th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR3_SQ5_SHIFT		20
#define ADC3_SQR3_SQ5_MASK		0x1f
/** @defgroup adc3_sqr3_sq5 SQ5 5th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR3_SQ4_SHIFT		15
#define ADC3_SQR3_SQ4_MASK		0x1f
/** @defgroup adc3_sqr3_sq4 SQ4 4th conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR3_SQ3_SHIFT		10
#define ADC3_SQR3_SQ3_MASK		0x1f
/** @defgroup adc3_sqr3_sq3 SQ3 3rd conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR3_SQ2_SHIFT		5
#define ADC3_SQR3_SQ2_MASK		0x1f
/** @defgroup adc3_sqr3_sq2 SQ2 2nd conversion in regular sequence
@{*/
/**@}*/


#define ADC3_SQR3_SQ1_SHIFT		0
#define ADC3_SQR3_SQ1_MASK		0x1f
/** @defgroup adc3_sqr3_sq1 SQ1 1st conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jsqr JSQR injected sequence register
@{*/


#define ADC3_JSQR_JL_SHIFT		20
#define ADC3_JSQR_JL_MASK		0x03
/** @defgroup adc3_jsqr_jl JL Injected sequence length
@{*/
/**@}*/


#define ADC3_JSQR_JSQ4_SHIFT		15
#define ADC3_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc3_jsqr_jsq4 JSQ4 4th conversion in injected sequence
@{*/
/**@}*/


#define ADC3_JSQR_JSQ3_SHIFT		10
#define ADC3_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc3_jsqr_jsq3 JSQ3 3rd conversion in injected sequence
@{*/
/**@}*/


#define ADC3_JSQR_JSQ2_SHIFT		5
#define ADC3_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc3_jsqr_jsq2 JSQ2 2nd conversion in injected sequence
@{*/
/**@}*/


#define ADC3_JSQR_JSQ1_SHIFT		0
#define ADC3_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc3_jsqr_jsq1 JSQ1 1st conversion in injected sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jdr1 JDR1 injected data register x
@{*/


#define ADC3_JDR1_JDATA_SHIFT		0
#define ADC3_JDR1_JDATA_MASK		0xffff
/** @defgroup adc3_jdr1_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jdr2 JDR2 injected data register x
@{*/


#define ADC3_JDR2_JDATA_SHIFT		0
#define ADC3_JDR2_JDATA_MASK		0xffff
/** @defgroup adc3_jdr2_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jdr3 JDR3 injected data register x
@{*/


#define ADC3_JDR3_JDATA_SHIFT		0
#define ADC3_JDR3_JDATA_MASK		0xffff
/** @defgroup adc3_jdr3_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_jdr4 JDR4 injected data register x
@{*/


#define ADC3_JDR4_JDATA_SHIFT		0
#define ADC3_JDR4_JDATA_MASK		0xffff
/** @defgroup adc3_jdr4_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_dr DR regular data register
@{*/


#define ADC3_DR_DATA_SHIFT		0
#define ADC3_DR_DATA_MASK		0xffff
/** @defgroup adc3_dr_data DATA Regular data
@{*/
/**@}*/


/**@}*/

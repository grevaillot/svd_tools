#pragma once 

/* --- ADC: Analog-to-digital converter ----------------------------- */

/** @defgroup adc_registers Analog-to-digital converter Register
@{*/

/** ADC_SR status register **/
#define ADC_SR			MMIO32(ADC_BASE + 0x00)
/** ADC_CR1 control register 1 **/
#define ADC_CR1			MMIO32(ADC_BASE + 0x04)
/** ADC_CR2 control register 2 **/
#define ADC_CR2			MMIO32(ADC_BASE + 0x08)
/** ADC_SMPR1 sample time register 1 **/
#define ADC_SMPR1			MMIO32(ADC_BASE + 0x0c)
/** ADC_SMPR2 sample time register 2 **/
#define ADC_SMPR2			MMIO32(ADC_BASE + 0x10)
/** ADC_SMPR3 sample time register 3 **/
#define ADC_SMPR3			MMIO32(ADC_BASE + 0x14)
/** ADC_JOFR1 injected channel data offset register x **/
#define ADC_JOFR1			MMIO32(ADC_BASE + 0x18)
/** ADC_JOFR2 injected channel data offset register x **/
#define ADC_JOFR2			MMIO32(ADC_BASE + 0x1c)
/** ADC_JOFR3 injected channel data offset register x **/
#define ADC_JOFR3			MMIO32(ADC_BASE + 0x20)
/** ADC_JOFR4 injected channel data offset register x **/
#define ADC_JOFR4			MMIO32(ADC_BASE + 0x24)
/** ADC_HTR watchdog higher threshold register **/
#define ADC_HTR			MMIO32(ADC_BASE + 0x28)
/** ADC_LTR watchdog lower threshold register **/
#define ADC_LTR			MMIO32(ADC_BASE + 0x2c)
/** ADC_SQR1 regular sequence register 1 **/
#define ADC_SQR1			MMIO32(ADC_BASE + 0x30)
/** ADC_SQR2 regular sequence register 2 **/
#define ADC_SQR2			MMIO32(ADC_BASE + 0x34)
/** ADC_SQR3 regular sequence register 3 **/
#define ADC_SQR3			MMIO32(ADC_BASE + 0x38)
/** ADC_SQR4 regular sequence register 4 **/
#define ADC_SQR4			MMIO32(ADC_BASE + 0x3c)
/** ADC_SQR5 regular sequence register 5 **/
#define ADC_SQR5			MMIO32(ADC_BASE + 0x40)
/** ADC_JSQR injected sequence register **/
#define ADC_JSQR			MMIO32(ADC_BASE + 0x44)
/** ADC_JDR1 injected data register x **/
#define ADC_JDR1			MMIO32(ADC_BASE + 0x48)
/** ADC_JDR2 injected data register x **/
#define ADC_JDR2			MMIO32(ADC_BASE + 0x4c)
/** ADC_JDR3 injected data register x **/
#define ADC_JDR3			MMIO32(ADC_BASE + 0x50)
/** ADC_JDR4 injected data register x **/
#define ADC_JDR4			MMIO32(ADC_BASE + 0x54)
/** ADC_DR regular data register **/
#define ADC_DR			MMIO32(ADC_BASE + 0x58)
/** ADC_SMPR0 sample time register 0 **/
#define ADC_SMPR0			MMIO32(ADC_BASE + 0x5c)

/**@}*/


/** @defgroup adc_sr SR status register
@{*/

/** ADC_SR_JCNR Injected channel not ready **/
#define ADC_SR_JCNR		(1 << 9)
/** ADC_SR_RCNR Regular channel not ready **/
#define ADC_SR_RCNR		(1 << 8)
/** ADC_SR_ADONS ADC ON status **/
#define ADC_SR_ADONS		(1 << 6)
/** ADC_SR_OVR Overrun **/
#define ADC_SR_OVR		(1 << 5)
/** ADC_SR_STRT Regular channel start flag **/
#define ADC_SR_STRT		(1 << 4)
/** ADC_SR_JSTRT Injected channel start flag **/
#define ADC_SR_JSTRT		(1 << 3)
/** ADC_SR_JEOC Injected channel end of conversion **/
#define ADC_SR_JEOC		(1 << 2)
/** ADC_SR_EOC Regular channel end of conversion **/
#define ADC_SR_EOC		(1 << 1)
/** ADC_SR_AWD Analog watchdog flag **/
#define ADC_SR_AWD		(1 << 0)

/**@}*/

/** @defgroup adc_cr1 CR1 control register 1
@{*/

/** ADC_CR1_OVRIE Overrun interrupt enable **/
#define ADC_CR1_OVRIE		(1 << 26)

#define ADC_CR1_RES_SHIFT		24
#define ADC_CR1_RES_MASK		0x03
/** @defgroup adc_cr1_res RES Resolution
@{*/
/**@}*/

/** ADC_CR1_AWDEN Analog watchdog enable on regular channels **/
#define ADC_CR1_AWDEN		(1 << 23)
/** ADC_CR1_JAWDEN Analog watchdog enable on injected channels **/
#define ADC_CR1_JAWDEN		(1 << 22)
/** ADC_CR1_PDI Power down during the idle phase **/
#define ADC_CR1_PDI		(1 << 17)
/** ADC_CR1_PDD Power down during the delay phase **/
#define ADC_CR1_PDD		(1 << 16)

#define ADC_CR1_DISCNUM_SHIFT		13
#define ADC_CR1_DISCNUM_MASK		0x07
/** @defgroup adc_cr1_discnum DISCNUM Discontinuous mode channel count
@{*/
/**@}*/

/** ADC_CR1_JDISCEN Discontinuous mode on injected channels **/
#define ADC_CR1_JDISCEN		(1 << 12)
/** ADC_CR1_DISCEN Discontinuous mode on regular channels **/
#define ADC_CR1_DISCEN		(1 << 11)
/** ADC_CR1_JAUTO Automatic injected group conversion **/
#define ADC_CR1_JAUTO		(1 << 10)
/** ADC_CR1_AWDSGL Enable the watchdog on a single channel in scan mode **/
#define ADC_CR1_AWDSGL		(1 << 9)
/** ADC_CR1_SCAN Scan mode **/
#define ADC_CR1_SCAN		(1 << 8)
/** ADC_CR1_JEOCIE Interrupt enable for injected channels **/
#define ADC_CR1_JEOCIE		(1 << 7)
/** ADC_CR1_AWDIE Analog watchdog interrupt enable **/
#define ADC_CR1_AWDIE		(1 << 6)
/** ADC_CR1_EOCIE Interrupt enable for EOC **/
#define ADC_CR1_EOCIE		(1 << 5)

#define ADC_CR1_AWDCH_SHIFT		0
#define ADC_CR1_AWDCH_MASK		0x1f
/** @defgroup adc_cr1_awdch AWDCH Analog watchdog channel select bits
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cr2 CR2 control register 2
@{*/

/** ADC_CR2_SWSTART Start conversion of regular channels **/
#define ADC_CR2_SWSTART		(1 << 30)

#define ADC_CR2_EXTEN_SHIFT		28
#define ADC_CR2_EXTEN_MASK		0x03
/** @defgroup adc_cr2_exten EXTEN External trigger enable for regular channels
@{*/
/**@}*/


#define ADC_CR2_EXTSEL_SHIFT		24
#define ADC_CR2_EXTSEL_MASK		0x0f
/** @defgroup adc_cr2_extsel EXTSEL External event select for regular group
@{*/
/**@}*/

/** ADC_CR2_JSWSTART Start conversion of injected channels **/
#define ADC_CR2_JSWSTART		(1 << 22)

#define ADC_CR2_JEXTEN_SHIFT		20
#define ADC_CR2_JEXTEN_MASK		0x03
/** @defgroup adc_cr2_jexten JEXTEN External trigger enable for injected channels
@{*/
/**@}*/


#define ADC_CR2_JEXTSEL_SHIFT		16
#define ADC_CR2_JEXTSEL_MASK		0x0f
/** @defgroup adc_cr2_jextsel JEXTSEL External event select for injected group
@{*/
/**@}*/

/** ADC_CR2_ALIGN Data alignment **/
#define ADC_CR2_ALIGN		(1 << 11)
/** ADC_CR2_EOCS End of conversion selection **/
#define ADC_CR2_EOCS		(1 << 10)
/** ADC_CR2_DDS DMA disable selection **/
#define ADC_CR2_DDS		(1 << 9)
/** ADC_CR2_DMA Direct memory access mode **/
#define ADC_CR2_DMA		(1 << 8)

#define ADC_CR2_DELS_SHIFT		4
#define ADC_CR2_DELS_MASK		0x07
/** @defgroup adc_cr2_dels DELS Delay selection
@{*/
/**@}*/

/** ADC_CR2_ADC_CFG ADC configuration **/
#define ADC_CR2_ADC_CFG		(1 << 2)
/** ADC_CR2_CONT Continuous conversion **/
#define ADC_CR2_CONT		(1 << 1)
/** ADC_CR2_ADON A/D Converter ON / OFF **/
#define ADC_CR2_ADON		(1 << 0)

/**@}*/

/** @defgroup adc_smpr1 SMPR1 sample time register 1
@{*/


#define ADC_SMPR1_SampletimebitsSMPx_x_SHIFT		0
#define ADC_SMPR1_SampletimebitsSMPx_x_MASK		0xffffffff
/** @defgroup adc_smpr1_sampletimebitssmpx_x SampletimebitsSMPxx Reserved
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_smpr2 SMPR2 sample time register 2
@{*/


#define ADC_SMPR2_SampletimebitsSMPx_x_SHIFT		0
#define ADC_SMPR2_SampletimebitsSMPx_x_MASK		0xffffffff
/** @defgroup adc_smpr2_sampletimebitssmpx_x SampletimebitsSMPxx Reserved
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_smpr3 SMPR3 sample time register 3
@{*/


#define ADC_SMPR3_SampletimebitsSMPx_x_SHIFT		0
#define ADC_SMPR3_SampletimebitsSMPx_x_MASK		0xffffffff
/** @defgroup adc_smpr3_sampletimebitssmpx_x SampletimebitsSMPxx Reserved
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jofr1 JOFR1 injected channel data offset register x
@{*/


#define ADC_JOFR1_JOFFSET1_SHIFT		0
#define ADC_JOFR1_JOFFSET1_MASK		0xfff
/** @defgroup adc_jofr1_joffset1 JOFFSET1 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jofr2 JOFR2 injected channel data offset register x
@{*/


#define ADC_JOFR2_JOFFSET2_SHIFT		0
#define ADC_JOFR2_JOFFSET2_MASK		0xfff
/** @defgroup adc_jofr2_joffset2 JOFFSET2 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jofr3 JOFR3 injected channel data offset register x
@{*/


#define ADC_JOFR3_JOFFSET3_SHIFT		0
#define ADC_JOFR3_JOFFSET3_MASK		0xfff
/** @defgroup adc_jofr3_joffset3 JOFFSET3 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jofr4 JOFR4 injected channel data offset register x
@{*/


#define ADC_JOFR4_JOFFSET4_SHIFT		0
#define ADC_JOFR4_JOFFSET4_MASK		0xfff
/** @defgroup adc_jofr4_joffset4 JOFFSET4 Data offset for injected channel x
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_htr HTR watchdog higher threshold register
@{*/


#define ADC_HTR_HT_SHIFT		0
#define ADC_HTR_HT_MASK		0xfff
/** @defgroup adc_htr_ht HT Analog watchdog higher threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ltr LTR watchdog lower threshold register
@{*/


#define ADC_LTR_LT_SHIFT		0
#define ADC_LTR_LT_MASK		0xfff
/** @defgroup adc_ltr_lt LT Analog watchdog lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr1 SQR1 regular sequence register 1
@{*/


#define ADC_SQR1_L_SHIFT		20
#define ADC_SQR1_L_MASK		0x0f
/** @defgroup adc_sqr1_l L Regular channel sequence length
@{*/
/**@}*/


#define ADC_SQR1_SQ28_SHIFT		15
#define ADC_SQR1_SQ28_MASK		0x1f
/** @defgroup adc_sqr1_sq28 SQ28 28th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ27_SHIFT		10
#define ADC_SQR1_SQ27_MASK		0x1f
/** @defgroup adc_sqr1_sq27 SQ27 27th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ26_SHIFT		5
#define ADC_SQR1_SQ26_MASK		0x1f
/** @defgroup adc_sqr1_sq26 SQ26 26th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ25_SHIFT		0
#define ADC_SQR1_SQ25_MASK		0x1f
/** @defgroup adc_sqr1_sq25 SQ25 25th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr2 SQR2 regular sequence register 2
@{*/


#define ADC_SQR2_SQ24_SHIFT		25
#define ADC_SQR2_SQ24_MASK		0x1f
/** @defgroup adc_sqr2_sq24 SQ24 24th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ23_SHIFT		20
#define ADC_SQR2_SQ23_MASK		0x1f
/** @defgroup adc_sqr2_sq23 SQ23 23rd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ22_SHIFT		15
#define ADC_SQR2_SQ22_MASK		0x1f
/** @defgroup adc_sqr2_sq22 SQ22 22nd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ21_SHIFT		10
#define ADC_SQR2_SQ21_MASK		0x1f
/** @defgroup adc_sqr2_sq21 SQ21 21st conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ20_SHIFT		5
#define ADC_SQR2_SQ20_MASK		0x1f
/** @defgroup adc_sqr2_sq20 SQ20 20th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ19_SHIFT		0
#define ADC_SQR2_SQ19_MASK		0x1f
/** @defgroup adc_sqr2_sq19 SQ19 19th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr3 SQR3 regular sequence register 3
@{*/


#define ADC_SQR3_SQ18_SHIFT		25
#define ADC_SQR3_SQ18_MASK		0x1f
/** @defgroup adc_sqr3_sq18 SQ18 18th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ17_SHIFT		20
#define ADC_SQR3_SQ17_MASK		0x1f
/** @defgroup adc_sqr3_sq17 SQ17 17th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ16_SHIFT		15
#define ADC_SQR3_SQ16_MASK		0x1f
/** @defgroup adc_sqr3_sq16 SQ16 16th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ15_SHIFT		10
#define ADC_SQR3_SQ15_MASK		0x1f
/** @defgroup adc_sqr3_sq15 SQ15 15th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ14_SHIFT		5
#define ADC_SQR3_SQ14_MASK		0x1f
/** @defgroup adc_sqr3_sq14 SQ14 14th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ13_SHIFT		0
#define ADC_SQR3_SQ13_MASK		0x1f
/** @defgroup adc_sqr3_sq13 SQ13 13th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr4 SQR4 regular sequence register 4
@{*/


#define ADC_SQR4_SQ12_SHIFT		25
#define ADC_SQR4_SQ12_MASK		0x1f
/** @defgroup adc_sqr4_sq12 SQ12 12th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ11_SHIFT		20
#define ADC_SQR4_SQ11_MASK		0x1f
/** @defgroup adc_sqr4_sq11 SQ11 11th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ10_SHIFT		15
#define ADC_SQR4_SQ10_MASK		0x1f
/** @defgroup adc_sqr4_sq10 SQ10 10th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ9_SHIFT		10
#define ADC_SQR4_SQ9_MASK		0x1f
/** @defgroup adc_sqr4_sq9 SQ9 9th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ8_SHIFT		5
#define ADC_SQR4_SQ8_MASK		0x1f
/** @defgroup adc_sqr4_sq8 SQ8 8th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ7_SHIFT		0
#define ADC_SQR4_SQ7_MASK		0x1f
/** @defgroup adc_sqr4_sq7 SQ7 7th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr5 SQR5 regular sequence register 5
@{*/


#define ADC_SQR5_SQ6_SHIFT		25
#define ADC_SQR5_SQ6_MASK		0x1f
/** @defgroup adc_sqr5_sq6 SQ6 6th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR5_SQ5_SHIFT		20
#define ADC_SQR5_SQ5_MASK		0x1f
/** @defgroup adc_sqr5_sq5 SQ5 5th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR5_SQ4_SHIFT		15
#define ADC_SQR5_SQ4_MASK		0x1f
/** @defgroup adc_sqr5_sq4 SQ4 4th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR5_SQ3_SHIFT		10
#define ADC_SQR5_SQ3_MASK		0x1f
/** @defgroup adc_sqr5_sq3 SQ3 3rd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR5_SQ2_SHIFT		5
#define ADC_SQR5_SQ2_MASK		0x1f
/** @defgroup adc_sqr5_sq2 SQ2 2nd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR5_SQ1_SHIFT		0
#define ADC_SQR5_SQ1_MASK		0x1f
/** @defgroup adc_sqr5_sq1 SQ1 1st conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jsqr JSQR injected sequence register
@{*/


#define ADC_JSQR_JL_SHIFT		20
#define ADC_JSQR_JL_MASK		0x03
/** @defgroup adc_jsqr_jl JL Injected sequence length
@{*/
/**@}*/


#define ADC_JSQR_JSQ4_SHIFT		15
#define ADC_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc_jsqr_jsq4 JSQ4 4th conversion in injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ3_SHIFT		10
#define ADC_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc_jsqr_jsq3 JSQ3 3rd conversion in injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ2_SHIFT		5
#define ADC_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc_jsqr_jsq2 JSQ2 2nd conversion in injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ1_SHIFT		0
#define ADC_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc_jsqr_jsq1 JSQ1 1st conversion in injected sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr1 JDR1 injected data register x
@{*/


#define ADC_JDR1_JDATA_SHIFT		0
#define ADC_JDR1_JDATA_MASK		0xffff
/** @defgroup adc_jdr1_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr2 JDR2 injected data register x
@{*/


#define ADC_JDR2_JDATA_SHIFT		0
#define ADC_JDR2_JDATA_MASK		0xffff
/** @defgroup adc_jdr2_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr3 JDR3 injected data register x
@{*/


#define ADC_JDR3_JDATA_SHIFT		0
#define ADC_JDR3_JDATA_MASK		0xffff
/** @defgroup adc_jdr3_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr4 JDR4 injected data register x
@{*/


#define ADC_JDR4_JDATA_SHIFT		0
#define ADC_JDR4_JDATA_MASK		0xffff
/** @defgroup adc_jdr4_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_dr DR regular data register
@{*/


#define ADC_DR_RegularDATA_SHIFT		0
#define ADC_DR_RegularDATA_MASK		0xffff
/** @defgroup adc_dr_regulardata RegularDATA Regular data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_smpr0 SMPR0 sample time register 0
@{*/


#define ADC_SMPR0_SampletimebitsSMPx_x_SHIFT		0
#define ADC_SMPR0_SampletimebitsSMPx_x_MASK		0xffffffff
/** @defgroup adc_smpr0_sampletimebitssmpx_x SampletimebitsSMPxx Reserved
@{*/
/**@}*/


/**@}*/

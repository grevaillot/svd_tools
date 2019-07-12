#pragma once 

/* --- ADC2: Analog to Digital Converter ---------------------------- */

/** @defgroup adc2_registers Analog to Digital Converter Register
@{*/

/** ADC2_ISR ADC interrupt and status register **/
#define ADC2_ISR			MMIO32(ADC2_BASE + 0x00)
/** ADC2_IER ADC interrupt enable register **/
#define ADC2_IER			MMIO32(ADC2_BASE + 0x04)
/** ADC2_CR ADC control register **/
#define ADC2_CR			MMIO32(ADC2_BASE + 0x08)
/** ADC2_CFGR ADC configuration register 1 **/
#define ADC2_CFGR			MMIO32(ADC2_BASE + 0x0c)
/** ADC2_CFGR2 ADC configuration register 2 **/
#define ADC2_CFGR2			MMIO32(ADC2_BASE + 0x10)
/** ADC2_SMPR1 ADC sampling time register 1 **/
#define ADC2_SMPR1			MMIO32(ADC2_BASE + 0x14)
/** ADC2_SMPR2 ADC sampling time register 2 **/
#define ADC2_SMPR2			MMIO32(ADC2_BASE + 0x18)
/** ADC2_PCSEL ADC pre channel selection register **/
#define ADC2_PCSEL			MMIO32(ADC2_BASE + 0x1c)
/** ADC2_LTR1 ADC analog watchdog 1 threshold register **/
#define ADC2_LTR1			MMIO32(ADC2_BASE + 0x20)
/** ADC2_LHTR1 ADC analog watchdog 2 threshold register **/
#define ADC2_LHTR1			MMIO32(ADC2_BASE + 0x24)
/** ADC2_SQR1 ADC group regular sequencer ranks register 1 **/
#define ADC2_SQR1			MMIO32(ADC2_BASE + 0x30)
/** ADC2_SQR2 ADC group regular sequencer ranks register 2 **/
#define ADC2_SQR2			MMIO32(ADC2_BASE + 0x34)
/** ADC2_SQR3 ADC group regular sequencer ranks register 3 **/
#define ADC2_SQR3			MMIO32(ADC2_BASE + 0x38)
/** ADC2_SQR4 ADC group regular sequencer ranks register 4 **/
#define ADC2_SQR4			MMIO32(ADC2_BASE + 0x3c)
/** ADC2_DR ADC group regular conversion data register **/
#define ADC2_DR			MMIO32(ADC2_BASE + 0x40)
/** ADC2_JSQR ADC group injected sequencer register **/
#define ADC2_JSQR			MMIO32(ADC2_BASE + 0x4c)
/** ADC2_OFR1 ADC offset number 1 register **/
#define ADC2_OFR1			MMIO32(ADC2_BASE + 0x60)
/** ADC2_OFR2 ADC offset number 2 register **/
#define ADC2_OFR2			MMIO32(ADC2_BASE + 0x64)
/** ADC2_OFR3 ADC offset number 3 register **/
#define ADC2_OFR3			MMIO32(ADC2_BASE + 0x68)
/** ADC2_OFR4 ADC offset number 4 register **/
#define ADC2_OFR4			MMIO32(ADC2_BASE + 0x6c)
/** ADC2_JDR1 ADC group injected sequencer rank 1 register **/
#define ADC2_JDR1			MMIO32(ADC2_BASE + 0x80)
/** ADC2_JDR2 ADC group injected sequencer rank 2 register **/
#define ADC2_JDR2			MMIO32(ADC2_BASE + 0x84)
/** ADC2_JDR3 ADC group injected sequencer rank 3 register **/
#define ADC2_JDR3			MMIO32(ADC2_BASE + 0x88)
/** ADC2_JDR4 ADC group injected sequencer rank 4 register **/
#define ADC2_JDR4			MMIO32(ADC2_BASE + 0x8c)
/** ADC2_AWD2CR ADC analog watchdog 2 configuration register **/
#define ADC2_AWD2CR			MMIO32(ADC2_BASE + 0xa0)
/** ADC2_AWD3CR ADC analog watchdog 3 configuration register **/
#define ADC2_AWD3CR			MMIO32(ADC2_BASE + 0xa4)
/** ADC2_LTR2 ADC watchdog lower threshold register 2 **/
#define ADC2_LTR2			MMIO32(ADC2_BASE + 0xb0)
/** ADC2_HTR2 ADC watchdog higher threshold register 2 **/
#define ADC2_HTR2			MMIO32(ADC2_BASE + 0xb4)
/** ADC2_LTR3 ADC watchdog lower threshold register 3 **/
#define ADC2_LTR3			MMIO32(ADC2_BASE + 0xb8)
/** ADC2_HTR3 ADC watchdog higher threshold register 3 **/
#define ADC2_HTR3			MMIO32(ADC2_BASE + 0xbc)
/** ADC2_DIFSEL ADC channel differential or single-ended mode selection register **/
#define ADC2_DIFSEL			MMIO32(ADC2_BASE + 0xc0)
/** ADC2_CALFACT ADC calibration factors register **/
#define ADC2_CALFACT			MMIO32(ADC2_BASE + 0xc4)
/** ADC2_CALFACT2 ADC Calibration Factor register 2 **/
#define ADC2_CALFACT2			MMIO32(ADC2_BASE + 0xc8)

/**@}*/


/** @defgroup adc2_isr ISR ADC interrupt and status register
@{*/

/** ADC2_ISR_JQOVF ADC group injected contexts queue overflow flag **/
#define ADC2_ISR_JQOVF		(1 << 10)
/** ADC2_ISR_AWD3 ADC analog watchdog 3 flag **/
#define ADC2_ISR_AWD3		(1 << 9)
/** ADC2_ISR_AWD2 ADC analog watchdog 2 flag **/
#define ADC2_ISR_AWD2		(1 << 8)
/** ADC2_ISR_AWD1 ADC analog watchdog 1 flag **/
#define ADC2_ISR_AWD1		(1 << 7)
/** ADC2_ISR_JEOS ADC group injected end of sequence conversions flag **/
#define ADC2_ISR_JEOS		(1 << 6)
/** ADC2_ISR_JEOC ADC group injected end of unitary conversion flag **/
#define ADC2_ISR_JEOC		(1 << 5)
/** ADC2_ISR_OVR ADC group regular overrun flag **/
#define ADC2_ISR_OVR		(1 << 4)
/** ADC2_ISR_EOS ADC group regular end of sequence conversions flag **/
#define ADC2_ISR_EOS		(1 << 3)
/** ADC2_ISR_EOC ADC group regular end of unitary conversion flag **/
#define ADC2_ISR_EOC		(1 << 2)
/** ADC2_ISR_EOSMP ADC group regular end of sampling flag **/
#define ADC2_ISR_EOSMP		(1 << 1)
/** ADC2_ISR_ADRDY ADC ready flag **/
#define ADC2_ISR_ADRDY		(1 << 0)

/**@}*/

/** @defgroup adc2_ier IER ADC interrupt enable register
@{*/

/** ADC2_IER_JQOVFIE ADC group injected contexts queue overflow interrupt **/
#define ADC2_IER_JQOVFIE		(1 << 10)
/** ADC2_IER_AWD3IE ADC analog watchdog 3 interrupt **/
#define ADC2_IER_AWD3IE		(1 << 9)
/** ADC2_IER_AWD2IE ADC analog watchdog 2 interrupt **/
#define ADC2_IER_AWD2IE		(1 << 8)
/** ADC2_IER_AWD1IE ADC analog watchdog 1 interrupt **/
#define ADC2_IER_AWD1IE		(1 << 7)
/** ADC2_IER_JEOSIE ADC group injected end of sequence conversions interrupt **/
#define ADC2_IER_JEOSIE		(1 << 6)
/** ADC2_IER_JEOCIE ADC group injected end of unitary conversion interrupt **/
#define ADC2_IER_JEOCIE		(1 << 5)
/** ADC2_IER_OVRIE ADC group regular overrun interrupt **/
#define ADC2_IER_OVRIE		(1 << 4)
/** ADC2_IER_EOSIE ADC group regular end of sequence conversions interrupt **/
#define ADC2_IER_EOSIE		(1 << 3)
/** ADC2_IER_EOCIE ADC group regular end of unitary conversion interrupt **/
#define ADC2_IER_EOCIE		(1 << 2)
/** ADC2_IER_EOSMPIE ADC group regular end of sampling interrupt **/
#define ADC2_IER_EOSMPIE		(1 << 1)
/** ADC2_IER_ADRDYIE ADC ready interrupt **/
#define ADC2_IER_ADRDYIE		(1 << 0)

/**@}*/

/** @defgroup adc2_cr CR ADC control register
@{*/

/** ADC2_CR_ADCAL ADC calibration **/
#define ADC2_CR_ADCAL		(1 << 31)
/** ADC2_CR_ADCALDIF ADC differential mode for calibration **/
#define ADC2_CR_ADCALDIF		(1 << 30)
/** ADC2_CR_DEEPPWD ADC deep power down enable **/
#define ADC2_CR_DEEPPWD		(1 << 29)
/** ADC2_CR_ADVREGEN ADC voltage regulator enable **/
#define ADC2_CR_ADVREGEN		(1 << 28)
/** ADC2_CR_LINCALRDYW6 Linearity calibration ready Word 6 **/
#define ADC2_CR_LINCALRDYW6		(1 << 27)
/** ADC2_CR_LINCALRDYW5 Linearity calibration ready Word 5 **/
#define ADC2_CR_LINCALRDYW5		(1 << 26)
/** ADC2_CR_LINCALRDYW4 Linearity calibration ready Word 4 **/
#define ADC2_CR_LINCALRDYW4		(1 << 25)
/** ADC2_CR_LINCALRDYW3 Linearity calibration ready Word 3 **/
#define ADC2_CR_LINCALRDYW3		(1 << 24)
/** ADC2_CR_LINCALRDYW2 Linearity calibration ready Word 2 **/
#define ADC2_CR_LINCALRDYW2		(1 << 23)
/** ADC2_CR_LINCALRDYW1 Linearity calibration ready Word 1 **/
#define ADC2_CR_LINCALRDYW1		(1 << 22)
/** ADC2_CR_ADCALLIN Linearity calibration **/
#define ADC2_CR_ADCALLIN		(1 << 16)

#define ADC2_CR_BOOST_SHIFT		8
#define ADC2_CR_BOOST_MASK		0x03
/** @defgroup adc2_cr_boost BOOST Boost mode control
@{*/
/**@}*/

/** ADC2_CR_JADSTP ADC group injected conversion stop **/
#define ADC2_CR_JADSTP		(1 << 5)
/** ADC2_CR_ADSTP ADC group regular conversion stop **/
#define ADC2_CR_ADSTP		(1 << 4)
/** ADC2_CR_JADSTART ADC group injected conversion start **/
#define ADC2_CR_JADSTART		(1 << 3)
/** ADC2_CR_ADSTART ADC group regular conversion start **/
#define ADC2_CR_ADSTART		(1 << 2)
/** ADC2_CR_ADDIS ADC disable **/
#define ADC2_CR_ADDIS		(1 << 1)
/** ADC2_CR_ADEN ADC enable **/
#define ADC2_CR_ADEN		(1 << 0)

/**@}*/

/** @defgroup adc2_cfgr CFGR ADC configuration register 1
@{*/

/** ADC2_CFGR_JQDIS ADC group injected contexts queue disable **/
#define ADC2_CFGR_JQDIS		(1 << 31)

#define ADC2_CFGR_AWDCH1CH_SHIFT		26
#define ADC2_CFGR_AWDCH1CH_MASK		0x1f
/** @defgroup adc2_cfgr_awdch1ch AWDCH1CH ADC analog watchdog 1 monitored channel selection
@{*/
/**@}*/

/** ADC2_CFGR_JAUTO ADC group injected automatic trigger mode **/
#define ADC2_CFGR_JAUTO		(1 << 25)
/** ADC2_CFGR_JAWD1EN ADC analog watchdog 1 enable on scope ADC group injected **/
#define ADC2_CFGR_JAWD1EN		(1 << 24)
/** ADC2_CFGR_AWD1EN ADC analog watchdog 1 enable on scope ADC group regular **/
#define ADC2_CFGR_AWD1EN		(1 << 23)
/** ADC2_CFGR_AWD1SGL ADC analog watchdog 1 monitoring a single channel or all channels **/
#define ADC2_CFGR_AWD1SGL		(1 << 22)
/** ADC2_CFGR_JQM ADC group injected contexts queue mode **/
#define ADC2_CFGR_JQM		(1 << 21)
/** ADC2_CFGR_JDISCEN ADC group injected sequencer discontinuous mode **/
#define ADC2_CFGR_JDISCEN		(1 << 20)

#define ADC2_CFGR_DISCNUM_SHIFT		17
#define ADC2_CFGR_DISCNUM_MASK		0x07
/** @defgroup adc2_cfgr_discnum DISCNUM ADC group regular sequencer discontinuous number of ranks
@{*/
/**@}*/

/** ADC2_CFGR_DISCEN ADC group regular sequencer discontinuous mode **/
#define ADC2_CFGR_DISCEN		(1 << 16)
/** ADC2_CFGR_AUTDLY ADC low power auto wait **/
#define ADC2_CFGR_AUTDLY		(1 << 14)
/** ADC2_CFGR_CONT ADC group regular continuous conversion mode **/
#define ADC2_CFGR_CONT		(1 << 13)
/** ADC2_CFGR_OVRMOD ADC group regular overrun configuration **/
#define ADC2_CFGR_OVRMOD		(1 << 12)

#define ADC2_CFGR_EXTEN_SHIFT		10
#define ADC2_CFGR_EXTEN_MASK		0x03
/** @defgroup adc2_cfgr_exten EXTEN ADC group regular external trigger polarity
@{*/
/**@}*/


#define ADC2_CFGR_EXTSEL_SHIFT		5
#define ADC2_CFGR_EXTSEL_MASK		0x1f
/** @defgroup adc2_cfgr_extsel EXTSEL ADC group regular external trigger source
@{*/
/**@}*/


#define ADC2_CFGR_RES_SHIFT		2
#define ADC2_CFGR_RES_MASK		0x07
/** @defgroup adc2_cfgr_res RES ADC data resolution
@{*/
/**@}*/


#define ADC2_CFGR_DMNGT_SHIFT		0
#define ADC2_CFGR_DMNGT_MASK		0x03
/** @defgroup adc2_cfgr_dmngt DMNGT ADC DMA transfer enable
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_cfgr2 CFGR2 ADC configuration register 2
@{*/


#define ADC2_CFGR2_LSHIFT_SHIFT		28
#define ADC2_CFGR2_LSHIFT_MASK		0x0f
/** @defgroup adc2_cfgr2_lshift LSHIFT Left shift factor
@{*/
/**@}*/


#define ADC2_CFGR2_OSR_SHIFT		16
#define ADC2_CFGR2_OSR_MASK		0x3ff
/** @defgroup adc2_cfgr2_osr OSR Oversampling ratio
@{*/
/**@}*/

/** ADC2_CFGR2_RSHIFT4 Right-shift data after Offset 4 correction **/
#define ADC2_CFGR2_RSHIFT4		(1 << 14)
/** ADC2_CFGR2_RSHIFT3 Right-shift data after Offset 3 correction **/
#define ADC2_CFGR2_RSHIFT3		(1 << 13)
/** ADC2_CFGR2_RSHIFT2 Right-shift data after Offset 2 correction **/
#define ADC2_CFGR2_RSHIFT2		(1 << 12)
/** ADC2_CFGR2_RSHIFT1 Right-shift data after Offset 1 correction **/
#define ADC2_CFGR2_RSHIFT1		(1 << 11)
/** ADC2_CFGR2_ROVSM Regular Oversampling mode **/
#define ADC2_CFGR2_ROVSM		(1 << 10)
/** ADC2_CFGR2_TROVS ADC oversampling discontinuous mode (triggered mode) for ADC group regular **/
#define ADC2_CFGR2_TROVS		(1 << 9)

#define ADC2_CFGR2_OVSS_SHIFT		5
#define ADC2_CFGR2_OVSS_MASK		0x0f
/** @defgroup adc2_cfgr2_ovss OVSS ADC oversampling shift
@{*/
/**@}*/

/** ADC2_CFGR2_JOVSE ADC oversampler enable on scope ADC group injected **/
#define ADC2_CFGR2_JOVSE		(1 << 1)
/** ADC2_CFGR2_ROVSE ADC oversampler enable on scope ADC group regular **/
#define ADC2_CFGR2_ROVSE		(1 << 0)

/**@}*/

/** @defgroup adc2_smpr1 SMPR1 ADC sampling time register 1
@{*/


#define ADC2_SMPR1_SMP9_SHIFT		27
#define ADC2_SMPR1_SMP9_MASK		0x07
/** @defgroup adc2_smpr1_smp9 SMP9 ADC channel 9 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP8_SHIFT		24
#define ADC2_SMPR1_SMP8_MASK		0x07
/** @defgroup adc2_smpr1_smp8 SMP8 ADC channel 8 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP7_SHIFT		21
#define ADC2_SMPR1_SMP7_MASK		0x07
/** @defgroup adc2_smpr1_smp7 SMP7 ADC channel 7 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP6_SHIFT		18
#define ADC2_SMPR1_SMP6_MASK		0x07
/** @defgroup adc2_smpr1_smp6 SMP6 ADC channel 6 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP5_SHIFT		15
#define ADC2_SMPR1_SMP5_MASK		0x07
/** @defgroup adc2_smpr1_smp5 SMP5 ADC channel 5 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP4_SHIFT		12
#define ADC2_SMPR1_SMP4_MASK		0x07
/** @defgroup adc2_smpr1_smp4 SMP4 ADC channel 4 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP3_SHIFT		9
#define ADC2_SMPR1_SMP3_MASK		0x07
/** @defgroup adc2_smpr1_smp3 SMP3 ADC channel 3 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP2_SHIFT		6
#define ADC2_SMPR1_SMP2_MASK		0x07
/** @defgroup adc2_smpr1_smp2 SMP2 ADC channel 2 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR1_SMP1_SHIFT		3
#define ADC2_SMPR1_SMP1_MASK		0x07
/** @defgroup adc2_smpr1_smp1 SMP1 ADC channel 1 sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_smpr2 SMPR2 ADC sampling time register 2
@{*/


#define ADC2_SMPR2_SMP19_SHIFT		27
#define ADC2_SMPR2_SMP19_MASK		0x07
/** @defgroup adc2_smpr2_smp19 SMP19 ADC channel 18 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP18_SHIFT		24
#define ADC2_SMPR2_SMP18_MASK		0x07
/** @defgroup adc2_smpr2_smp18 SMP18 ADC channel 18 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP17_SHIFT		21
#define ADC2_SMPR2_SMP17_MASK		0x07
/** @defgroup adc2_smpr2_smp17 SMP17 ADC channel 17 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP16_SHIFT		18
#define ADC2_SMPR2_SMP16_MASK		0x07
/** @defgroup adc2_smpr2_smp16 SMP16 ADC channel 16 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP15_SHIFT		15
#define ADC2_SMPR2_SMP15_MASK		0x07
/** @defgroup adc2_smpr2_smp15 SMP15 ADC channel 15 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP14_SHIFT		12
#define ADC2_SMPR2_SMP14_MASK		0x07
/** @defgroup adc2_smpr2_smp14 SMP14 ADC channel 14 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP13_SHIFT		9
#define ADC2_SMPR2_SMP13_MASK		0x07
/** @defgroup adc2_smpr2_smp13 SMP13 ADC channel 13 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP12_SHIFT		6
#define ADC2_SMPR2_SMP12_MASK		0x07
/** @defgroup adc2_smpr2_smp12 SMP12 ADC channel 12 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP11_SHIFT		3
#define ADC2_SMPR2_SMP11_MASK		0x07
/** @defgroup adc2_smpr2_smp11 SMP11 ADC channel 11 sampling time selection
@{*/
/**@}*/


#define ADC2_SMPR2_SMP10_SHIFT		0
#define ADC2_SMPR2_SMP10_MASK		0x07
/** @defgroup adc2_smpr2_smp10 SMP10 ADC channel 10 sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_pcsel PCSEL ADC pre channel selection register
@{*/


#define ADC2_PCSEL_PCSEL_SHIFT		0
#define ADC2_PCSEL_PCSEL_MASK		0xfffff
/** @defgroup adc2_pcsel_pcsel PCSEL Channel x (VINP[i]) pre selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ltr1 LTR1 ADC analog watchdog 1 threshold register
@{*/


#define ADC2_LTR1_LTR1_SHIFT		0
#define ADC2_LTR1_LTR1_MASK		0x3ffffff
/** @defgroup adc2_ltr1_ltr1 LTR1 ADC analog watchdog 1 threshold low
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_lhtr1 LHTR1 ADC analog watchdog 2 threshold register
@{*/


#define ADC2_LHTR1_LHTR1_SHIFT		0
#define ADC2_LHTR1_LHTR1_MASK		0x3ffffff
/** @defgroup adc2_lhtr1_lhtr1 LHTR1 ADC analog watchdog 2 threshold low
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr1 SQR1 ADC group regular sequencer ranks register 1
@{*/


#define ADC2_SQR1_SQ4_SHIFT		24
#define ADC2_SQR1_SQ4_MASK		0x1f
/** @defgroup adc2_sqr1_sq4 SQ4 ADC group regular sequencer rank 4
@{*/
/**@}*/


#define ADC2_SQR1_SQ3_SHIFT		18
#define ADC2_SQR1_SQ3_MASK		0x1f
/** @defgroup adc2_sqr1_sq3 SQ3 ADC group regular sequencer rank 3
@{*/
/**@}*/


#define ADC2_SQR1_SQ2_SHIFT		12
#define ADC2_SQR1_SQ2_MASK		0x1f
/** @defgroup adc2_sqr1_sq2 SQ2 ADC group regular sequencer rank 2
@{*/
/**@}*/


#define ADC2_SQR1_SQ1_SHIFT		6
#define ADC2_SQR1_SQ1_MASK		0x1f
/** @defgroup adc2_sqr1_sq1 SQ1 ADC group regular sequencer rank 1
@{*/
/**@}*/


#define ADC2_SQR1_L3_SHIFT		0
#define ADC2_SQR1_L3_MASK		0x0f
/** @defgroup adc2_sqr1_l3 L3 L3
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr2 SQR2 ADC group regular sequencer ranks register 2
@{*/


#define ADC2_SQR2_SQ9_SHIFT		24
#define ADC2_SQR2_SQ9_MASK		0x1f
/** @defgroup adc2_sqr2_sq9 SQ9 ADC group regular sequencer rank 9
@{*/
/**@}*/


#define ADC2_SQR2_SQ8_SHIFT		18
#define ADC2_SQR2_SQ8_MASK		0x1f
/** @defgroup adc2_sqr2_sq8 SQ8 ADC group regular sequencer rank 8
@{*/
/**@}*/


#define ADC2_SQR2_SQ7_SHIFT		12
#define ADC2_SQR2_SQ7_MASK		0x1f
/** @defgroup adc2_sqr2_sq7 SQ7 ADC group regular sequencer rank 7
@{*/
/**@}*/


#define ADC2_SQR2_SQ6_SHIFT		6
#define ADC2_SQR2_SQ6_MASK		0x1f
/** @defgroup adc2_sqr2_sq6 SQ6 ADC group regular sequencer rank 6
@{*/
/**@}*/


#define ADC2_SQR2_SQ5_SHIFT		0
#define ADC2_SQR2_SQ5_MASK		0x1f
/** @defgroup adc2_sqr2_sq5 SQ5 ADC group regular sequencer rank 5
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr3 SQR3 ADC group regular sequencer ranks register 3
@{*/


#define ADC2_SQR3_SQ14_SHIFT		24
#define ADC2_SQR3_SQ14_MASK		0x1f
/** @defgroup adc2_sqr3_sq14 SQ14 ADC group regular sequencer rank 14
@{*/
/**@}*/


#define ADC2_SQR3_SQ13_SHIFT		18
#define ADC2_SQR3_SQ13_MASK		0x1f
/** @defgroup adc2_sqr3_sq13 SQ13 ADC group regular sequencer rank 13
@{*/
/**@}*/


#define ADC2_SQR3_SQ12_SHIFT		12
#define ADC2_SQR3_SQ12_MASK		0x1f
/** @defgroup adc2_sqr3_sq12 SQ12 ADC group regular sequencer rank 12
@{*/
/**@}*/


#define ADC2_SQR3_SQ11_SHIFT		6
#define ADC2_SQR3_SQ11_MASK		0x1f
/** @defgroup adc2_sqr3_sq11 SQ11 ADC group regular sequencer rank 11
@{*/
/**@}*/


#define ADC2_SQR3_SQ10_SHIFT		0
#define ADC2_SQR3_SQ10_MASK		0x1f
/** @defgroup adc2_sqr3_sq10 SQ10 ADC group regular sequencer rank 10
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_sqr4 SQR4 ADC group regular sequencer ranks register 4
@{*/


#define ADC2_SQR4_SQ16_SHIFT		6
#define ADC2_SQR4_SQ16_MASK		0x1f
/** @defgroup adc2_sqr4_sq16 SQ16 ADC group regular sequencer rank 16
@{*/
/**@}*/


#define ADC2_SQR4_SQ15_SHIFT		0
#define ADC2_SQR4_SQ15_MASK		0x1f
/** @defgroup adc2_sqr4_sq15 SQ15 ADC group regular sequencer rank 15
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_dr DR ADC group regular conversion data register
@{*/


#define ADC2_DR_RDATA_SHIFT		0
#define ADC2_DR_RDATA_MASK		0xffff
/** @defgroup adc2_dr_rdata RDATA ADC group regular conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jsqr JSQR ADC group injected sequencer register
@{*/


#define ADC2_JSQR_JSQ4_SHIFT		27
#define ADC2_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc2_jsqr_jsq4 JSQ4 ADC group injected sequencer rank 4
@{*/
/**@}*/


#define ADC2_JSQR_JSQ3_SHIFT		21
#define ADC2_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc2_jsqr_jsq3 JSQ3 ADC group injected sequencer rank 3
@{*/
/**@}*/


#define ADC2_JSQR_JSQ2_SHIFT		15
#define ADC2_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc2_jsqr_jsq2 JSQ2 ADC group injected sequencer rank 2
@{*/
/**@}*/


#define ADC2_JSQR_JSQ1_SHIFT		9
#define ADC2_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc2_jsqr_jsq1 JSQ1 ADC group injected sequencer rank 1
@{*/
/**@}*/


#define ADC2_JSQR_JEXTEN_SHIFT		7
#define ADC2_JSQR_JEXTEN_MASK		0x03
/** @defgroup adc2_jsqr_jexten JEXTEN ADC group injected external trigger polarity
@{*/
/**@}*/


#define ADC2_JSQR_JEXTSEL_SHIFT		2
#define ADC2_JSQR_JEXTSEL_MASK		0x1f
/** @defgroup adc2_jsqr_jextsel JEXTSEL ADC group injected external trigger source
@{*/
/**@}*/


#define ADC2_JSQR_JL_SHIFT		0
#define ADC2_JSQR_JL_MASK		0x03
/** @defgroup adc2_jsqr_jl JL ADC group injected sequencer scan length
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ofr1 OFR1 ADC offset number 1 register
@{*/

/** ADC2_OFR1_SSATE ADC offset number 1 enable **/
#define ADC2_OFR1_SSATE		(1 << 31)

#define ADC2_OFR1_OFFSET1_CH_SHIFT		26
#define ADC2_OFR1_OFFSET1_CH_MASK		0x1f
/** @defgroup adc2_ofr1_offset1_ch OFFSET1CH ADC offset number 1 channel selection
@{*/
/**@}*/


#define ADC2_OFR1_OFFSET1_SHIFT		0
#define ADC2_OFR1_OFFSET1_MASK		0x3ffffff
/** @defgroup adc2_ofr1_offset1 OFFSET1 ADC offset number 1 offset level
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ofr2 OFR2 ADC offset number 2 register
@{*/

/** ADC2_OFR2_SSATE ADC offset number 1 enable **/
#define ADC2_OFR2_SSATE		(1 << 31)

#define ADC2_OFR2_OFFSET1_CH_SHIFT		26
#define ADC2_OFR2_OFFSET1_CH_MASK		0x1f
/** @defgroup adc2_ofr2_offset1_ch OFFSET1CH ADC offset number 1 channel selection
@{*/
/**@}*/


#define ADC2_OFR2_OFFSET1_SHIFT		0
#define ADC2_OFR2_OFFSET1_MASK		0x3ffffff
/** @defgroup adc2_ofr2_offset1 OFFSET1 ADC offset number 1 offset level
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ofr3 OFR3 ADC offset number 3 register
@{*/

/** ADC2_OFR3_SSATE ADC offset number 1 enable **/
#define ADC2_OFR3_SSATE		(1 << 31)

#define ADC2_OFR3_OFFSET1_CH_SHIFT		26
#define ADC2_OFR3_OFFSET1_CH_MASK		0x1f
/** @defgroup adc2_ofr3_offset1_ch OFFSET1CH ADC offset number 1 channel selection
@{*/
/**@}*/


#define ADC2_OFR3_OFFSET1_SHIFT		0
#define ADC2_OFR3_OFFSET1_MASK		0x3ffffff
/** @defgroup adc2_ofr3_offset1 OFFSET1 ADC offset number 1 offset level
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ofr4 OFR4 ADC offset number 4 register
@{*/

/** ADC2_OFR4_SSATE ADC offset number 1 enable **/
#define ADC2_OFR4_SSATE		(1 << 31)

#define ADC2_OFR4_OFFSET1_CH_SHIFT		26
#define ADC2_OFR4_OFFSET1_CH_MASK		0x1f
/** @defgroup adc2_ofr4_offset1_ch OFFSET1CH ADC offset number 1 channel selection
@{*/
/**@}*/


#define ADC2_OFR4_OFFSET1_SHIFT		0
#define ADC2_OFR4_OFFSET1_MASK		0x3ffffff
/** @defgroup adc2_ofr4_offset1 OFFSET1 ADC offset number 1 offset level
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr1 JDR1 ADC group injected sequencer rank 1 register
@{*/


#define ADC2_JDR1_JDATA1_SHIFT		0
#define ADC2_JDR1_JDATA1_MASK		0xffffffff
/** @defgroup adc2_jdr1_jdata1 JDATA1 ADC group injected sequencer rank 1 conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr2 JDR2 ADC group injected sequencer rank 2 register
@{*/


#define ADC2_JDR2_JDATA2_SHIFT		0
#define ADC2_JDR2_JDATA2_MASK		0xffffffff
/** @defgroup adc2_jdr2_jdata2 JDATA2 ADC group injected sequencer rank 2 conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr3 JDR3 ADC group injected sequencer rank 3 register
@{*/


#define ADC2_JDR3_JDATA3_SHIFT		0
#define ADC2_JDR3_JDATA3_MASK		0xffffffff
/** @defgroup adc2_jdr3_jdata3 JDATA3 ADC group injected sequencer rank 3 conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_jdr4 JDR4 ADC group injected sequencer rank 4 register
@{*/


#define ADC2_JDR4_JDATA4_SHIFT		0
#define ADC2_JDR4_JDATA4_MASK		0xffffffff
/** @defgroup adc2_jdr4_jdata4 JDATA4 ADC group injected sequencer rank 4 conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_awd2cr AWD2CR ADC analog watchdog 2 configuration register
@{*/


#define ADC2_AWD2CR_AWD2CH_SHIFT		0
#define ADC2_AWD2CR_AWD2CH_MASK		0xfffff
/** @defgroup adc2_awd2cr_awd2ch AWD2CH ADC analog watchdog 2 monitored channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_awd3cr AWD3CR ADC analog watchdog 3 configuration register
@{*/


#define ADC2_AWD3CR_AWD3CH_SHIFT		1
#define ADC2_AWD3CR_AWD3CH_MASK		0xfffff
/** @defgroup adc2_awd3cr_awd3ch AWD3CH ADC analog watchdog 3 monitored channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ltr2 LTR2 ADC watchdog lower threshold register 2
@{*/


#define ADC2_LTR2_LTR2_SHIFT		0
#define ADC2_LTR2_LTR2_MASK		0x3ffffff
/** @defgroup adc2_ltr2_ltr2 LTR2 Analog watchdog 2 lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_htr2 HTR2 ADC watchdog higher threshold register 2
@{*/


#define ADC2_HTR2_HTR2_SHIFT		0
#define ADC2_HTR2_HTR2_MASK		0x3ffffff
/** @defgroup adc2_htr2_htr2 HTR2 Analog watchdog 2 higher threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_ltr3 LTR3 ADC watchdog lower threshold register 3
@{*/


#define ADC2_LTR3_LTR3_SHIFT		0
#define ADC2_LTR3_LTR3_MASK		0x3ffffff
/** @defgroup adc2_ltr3_ltr3 LTR3 Analog watchdog 3 lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_htr3 HTR3 ADC watchdog higher threshold register 3
@{*/


#define ADC2_HTR3_HTR3_SHIFT		0
#define ADC2_HTR3_HTR3_MASK		0x3ffffff
/** @defgroup adc2_htr3_htr3 HTR3 Analog watchdog 3 higher threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_difsel DIFSEL ADC channel differential or single-ended mode selection register
@{*/


#define ADC2_DIFSEL_DIFSEL_SHIFT		0
#define ADC2_DIFSEL_DIFSEL_MASK		0xfffff
/** @defgroup adc2_difsel_difsel DIFSEL ADC channel differential or single-ended mode for channel
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_calfact CALFACT ADC calibration factors register
@{*/


#define ADC2_CALFACT_CALFACT_D_SHIFT		16
#define ADC2_CALFACT_CALFACT_D_MASK		0x7ff
/** @defgroup adc2_calfact_calfact_d CALFACTD ADC calibration factor in differential mode
@{*/
/**@}*/


#define ADC2_CALFACT_CALFACT_S_SHIFT		0
#define ADC2_CALFACT_CALFACT_S_MASK		0x7ff
/** @defgroup adc2_calfact_calfact_s CALFACTS ADC calibration factor in single-ended mode
@{*/
/**@}*/


/**@}*/

/** @defgroup adc2_calfact2 CALFACT2 ADC Calibration Factor register 2
@{*/


#define ADC2_CALFACT2_LINCALFACT_SHIFT		0
#define ADC2_CALFACT2_LINCALFACT_MASK		0x3fffffff
/** @defgroup adc2_calfact2_lincalfact LINCALFACT Linearity Calibration Factor
@{*/
/**@}*/


/**@}*/
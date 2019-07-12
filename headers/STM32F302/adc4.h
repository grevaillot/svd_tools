#pragma once 

/* --- ADC4: Analog-to-Digital Converter ---------------------------- */

/** @defgroup adc4_registers Analog-to-Digital Converter Register
@{*/

/** ADC4_ISR interrupt and status register **/
#define ADC4_ISR			MMIO32(ADC4_BASE + 0x00)
/** ADC4_IER interrupt enable register **/
#define ADC4_IER			MMIO32(ADC4_BASE + 0x04)
/** ADC4_CR control register **/
#define ADC4_CR			MMIO32(ADC4_BASE + 0x08)
/** ADC4_CFGR configuration register **/
#define ADC4_CFGR			MMIO32(ADC4_BASE + 0x0c)
/** ADC4_SMPR1 sample time register 1 **/
#define ADC4_SMPR1			MMIO32(ADC4_BASE + 0x14)
/** ADC4_SMPR2 sample time register 2 **/
#define ADC4_SMPR2			MMIO32(ADC4_BASE + 0x18)
/** ADC4_TR1 watchdog threshold register 1 **/
#define ADC4_TR1			MMIO32(ADC4_BASE + 0x20)
/** ADC4_TR2 watchdog threshold register **/
#define ADC4_TR2			MMIO32(ADC4_BASE + 0x24)
/** ADC4_TR3 watchdog threshold register 3 **/
#define ADC4_TR3			MMIO32(ADC4_BASE + 0x28)
/** ADC4_SQR1 regular sequence register 1 **/
#define ADC4_SQR1			MMIO32(ADC4_BASE + 0x30)
/** ADC4_SQR2 regular sequence register 2 **/
#define ADC4_SQR2			MMIO32(ADC4_BASE + 0x34)
/** ADC4_SQR3 regular sequence register 3 **/
#define ADC4_SQR3			MMIO32(ADC4_BASE + 0x38)
/** ADC4_SQR4 regular sequence register 4 **/
#define ADC4_SQR4			MMIO32(ADC4_BASE + 0x3c)
/** ADC4_DR regular Data Register **/
#define ADC4_DR			MMIO32(ADC4_BASE + 0x40)
/** ADC4_JSQR injected sequence register **/
#define ADC4_JSQR			MMIO32(ADC4_BASE + 0x4c)
/** ADC4_OFR1 offset register 1 **/
#define ADC4_OFR1			MMIO32(ADC4_BASE + 0x60)
/** ADC4_OFR2 offset register 2 **/
#define ADC4_OFR2			MMIO32(ADC4_BASE + 0x64)
/** ADC4_OFR3 offset register 3 **/
#define ADC4_OFR3			MMIO32(ADC4_BASE + 0x68)
/** ADC4_OFR4 offset register 4 **/
#define ADC4_OFR4			MMIO32(ADC4_BASE + 0x6c)
/** ADC4_JDR1 injected data register 1 **/
#define ADC4_JDR1			MMIO32(ADC4_BASE + 0x80)
/** ADC4_JDR2 injected data register 2 **/
#define ADC4_JDR2			MMIO32(ADC4_BASE + 0x84)
/** ADC4_JDR3 injected data register 3 **/
#define ADC4_JDR3			MMIO32(ADC4_BASE + 0x88)
/** ADC4_JDR4 injected data register 4 **/
#define ADC4_JDR4			MMIO32(ADC4_BASE + 0x8c)
/** ADC4_AWD2CR Analog Watchdog 2 Configuration Register **/
#define ADC4_AWD2CR			MMIO32(ADC4_BASE + 0xa0)
/** ADC4_AWD3CR Analog Watchdog 3 Configuration Register **/
#define ADC4_AWD3CR			MMIO32(ADC4_BASE + 0xa4)
/** ADC4_DIFSEL Differential Mode Selection Register 2 **/
#define ADC4_DIFSEL			MMIO32(ADC4_BASE + 0xb0)
/** ADC4_CALFACT Calibration Factors **/
#define ADC4_CALFACT			MMIO32(ADC4_BASE + 0xb4)

/**@}*/


/** @defgroup adc4_isr ISR interrupt and status register
@{*/

/** ADC4_ISR_JQOVF JQOVF **/
#define ADC4_ISR_JQOVF		(1 << 10)
/** ADC4_ISR_AWD3 AWD3 **/
#define ADC4_ISR_AWD3		(1 << 9)
/** ADC4_ISR_AWD2 AWD2 **/
#define ADC4_ISR_AWD2		(1 << 8)
/** ADC4_ISR_AWD1 AWD1 **/
#define ADC4_ISR_AWD1		(1 << 7)
/** ADC4_ISR_JEOS JEOS **/
#define ADC4_ISR_JEOS		(1 << 6)
/** ADC4_ISR_JEOC JEOC **/
#define ADC4_ISR_JEOC		(1 << 5)
/** ADC4_ISR_OVR OVR **/
#define ADC4_ISR_OVR		(1 << 4)
/** ADC4_ISR_EOS EOS **/
#define ADC4_ISR_EOS		(1 << 3)
/** ADC4_ISR_EOC EOC **/
#define ADC4_ISR_EOC		(1 << 2)
/** ADC4_ISR_EOSMP EOSMP **/
#define ADC4_ISR_EOSMP		(1 << 1)
/** ADC4_ISR_ADRDY ADRDY **/
#define ADC4_ISR_ADRDY		(1 << 0)

/**@}*/

/** @defgroup adc4_ier IER interrupt enable register
@{*/

/** ADC4_IER_JQOVFIE JQOVFIE **/
#define ADC4_IER_JQOVFIE		(1 << 10)
/** ADC4_IER_AWD3IE AWD3IE **/
#define ADC4_IER_AWD3IE		(1 << 9)
/** ADC4_IER_AWD2IE AWD2IE **/
#define ADC4_IER_AWD2IE		(1 << 8)
/** ADC4_IER_AWD1IE AWD1IE **/
#define ADC4_IER_AWD1IE		(1 << 7)
/** ADC4_IER_JEOSIE JEOSIE **/
#define ADC4_IER_JEOSIE		(1 << 6)
/** ADC4_IER_JEOCIE JEOCIE **/
#define ADC4_IER_JEOCIE		(1 << 5)
/** ADC4_IER_OVRIE OVRIE **/
#define ADC4_IER_OVRIE		(1 << 4)
/** ADC4_IER_EOSIE EOSIE **/
#define ADC4_IER_EOSIE		(1 << 3)
/** ADC4_IER_EOCIE EOCIE **/
#define ADC4_IER_EOCIE		(1 << 2)
/** ADC4_IER_EOSMPIE EOSMPIE **/
#define ADC4_IER_EOSMPIE		(1 << 1)
/** ADC4_IER_ADRDYIE ADRDYIE **/
#define ADC4_IER_ADRDYIE		(1 << 0)

/**@}*/

/** @defgroup adc4_cr CR control register
@{*/

/** ADC4_CR_ADCAL ADCAL **/
#define ADC4_CR_ADCAL		(1 << 31)
/** ADC4_CR_ADCALDIF ADCALDIF **/
#define ADC4_CR_ADCALDIF		(1 << 30)
/** ADC4_CR_DEEPPWD DEEPPWD **/
#define ADC4_CR_DEEPPWD		(1 << 29)
/** ADC4_CR_ADVREGEN ADVREGEN **/
#define ADC4_CR_ADVREGEN		(1 << 28)
/** ADC4_CR_JADSTP JADSTP **/
#define ADC4_CR_JADSTP		(1 << 5)
/** ADC4_CR_ADSTP ADSTP **/
#define ADC4_CR_ADSTP		(1 << 4)
/** ADC4_CR_JADSTART JADSTART **/
#define ADC4_CR_JADSTART		(1 << 3)
/** ADC4_CR_ADSTART ADSTART **/
#define ADC4_CR_ADSTART		(1 << 2)
/** ADC4_CR_ADDIS ADDIS **/
#define ADC4_CR_ADDIS		(1 << 1)
/** ADC4_CR_ADEN ADEN **/
#define ADC4_CR_ADEN		(1 << 0)

/**@}*/

/** @defgroup adc4_cfgr CFGR configuration register
@{*/


#define ADC4_CFGR_AWDCH1CH_SHIFT		26
#define ADC4_CFGR_AWDCH1CH_MASK		0x1f
/** @defgroup adc4_cfgr_awdch1ch AWDCH1CH AWDCH1CH
@{*/
/**@}*/

/** ADC4_CFGR_JAUTO JAUTO **/
#define ADC4_CFGR_JAUTO		(1 << 25)
/** ADC4_CFGR_JAWD1EN JAWD1EN **/
#define ADC4_CFGR_JAWD1EN		(1 << 24)
/** ADC4_CFGR_AWD1EN AWD1EN **/
#define ADC4_CFGR_AWD1EN		(1 << 23)
/** ADC4_CFGR_AWD1SGL AWD1SGL **/
#define ADC4_CFGR_AWD1SGL		(1 << 22)
/** ADC4_CFGR_JQM JQM **/
#define ADC4_CFGR_JQM		(1 << 21)
/** ADC4_CFGR_JDISCEN JDISCEN **/
#define ADC4_CFGR_JDISCEN		(1 << 20)

#define ADC4_CFGR_DISCNUM_SHIFT		17
#define ADC4_CFGR_DISCNUM_MASK		0x07
/** @defgroup adc4_cfgr_discnum DISCNUM DISCNUM
@{*/
/**@}*/

/** ADC4_CFGR_DISCEN DISCEN **/
#define ADC4_CFGR_DISCEN		(1 << 16)
/** ADC4_CFGR_AUTOFF AUTOFF **/
#define ADC4_CFGR_AUTOFF		(1 << 15)
/** ADC4_CFGR_AUTDLY AUTDLY **/
#define ADC4_CFGR_AUTDLY		(1 << 14)
/** ADC4_CFGR_CONT CONT **/
#define ADC4_CFGR_CONT		(1 << 13)
/** ADC4_CFGR_OVRMOD OVRMOD **/
#define ADC4_CFGR_OVRMOD		(1 << 12)

#define ADC4_CFGR_EXTEN_SHIFT		10
#define ADC4_CFGR_EXTEN_MASK		0x03
/** @defgroup adc4_cfgr_exten EXTEN EXTEN
@{*/
/**@}*/


#define ADC4_CFGR_EXTSEL_SHIFT		6
#define ADC4_CFGR_EXTSEL_MASK		0x0f
/** @defgroup adc4_cfgr_extsel EXTSEL EXTSEL
@{*/
/**@}*/

/** ADC4_CFGR_ALIGN ALIGN **/
#define ADC4_CFGR_ALIGN		(1 << 5)

#define ADC4_CFGR_RES_SHIFT		3
#define ADC4_CFGR_RES_MASK		0x03
/** @defgroup adc4_cfgr_res RES RES
@{*/
/**@}*/

/** ADC4_CFGR_DMACFG DMACFG **/
#define ADC4_CFGR_DMACFG		(1 << 1)
/** ADC4_CFGR_DMAEN DMAEN **/
#define ADC4_CFGR_DMAEN		(1 << 0)

/**@}*/

/** @defgroup adc4_smpr1 SMPR1 sample time register 1
@{*/


#define ADC4_SMPR1_SMP9_SHIFT		27
#define ADC4_SMPR1_SMP9_MASK		0x07
/** @defgroup adc4_smpr1_smp9 SMP9 SMP9
@{*/
/**@}*/


#define ADC4_SMPR1_SMP8_SHIFT		24
#define ADC4_SMPR1_SMP8_MASK		0x07
/** @defgroup adc4_smpr1_smp8 SMP8 SMP8
@{*/
/**@}*/


#define ADC4_SMPR1_SMP7_SHIFT		21
#define ADC4_SMPR1_SMP7_MASK		0x07
/** @defgroup adc4_smpr1_smp7 SMP7 SMP7
@{*/
/**@}*/


#define ADC4_SMPR1_SMP6_SHIFT		18
#define ADC4_SMPR1_SMP6_MASK		0x07
/** @defgroup adc4_smpr1_smp6 SMP6 SMP6
@{*/
/**@}*/


#define ADC4_SMPR1_SMP5_SHIFT		15
#define ADC4_SMPR1_SMP5_MASK		0x07
/** @defgroup adc4_smpr1_smp5 SMP5 SMP5
@{*/
/**@}*/


#define ADC4_SMPR1_SMP4_SHIFT		12
#define ADC4_SMPR1_SMP4_MASK		0x07
/** @defgroup adc4_smpr1_smp4 SMP4 SMP4
@{*/
/**@}*/


#define ADC4_SMPR1_SMP3_SHIFT		9
#define ADC4_SMPR1_SMP3_MASK		0x07
/** @defgroup adc4_smpr1_smp3 SMP3 SMP3
@{*/
/**@}*/


#define ADC4_SMPR1_SMP2_SHIFT		6
#define ADC4_SMPR1_SMP2_MASK		0x07
/** @defgroup adc4_smpr1_smp2 SMP2 SMP2
@{*/
/**@}*/


#define ADC4_SMPR1_SMP1_SHIFT		3
#define ADC4_SMPR1_SMP1_MASK		0x07
/** @defgroup adc4_smpr1_smp1 SMP1 SMP1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_smpr2 SMPR2 sample time register 2
@{*/


#define ADC4_SMPR2_SMP18_SHIFT		24
#define ADC4_SMPR2_SMP18_MASK		0x07
/** @defgroup adc4_smpr2_smp18 SMP18 SMP18
@{*/
/**@}*/


#define ADC4_SMPR2_SMP17_SHIFT		21
#define ADC4_SMPR2_SMP17_MASK		0x07
/** @defgroup adc4_smpr2_smp17 SMP17 SMP17
@{*/
/**@}*/


#define ADC4_SMPR2_SMP16_SHIFT		18
#define ADC4_SMPR2_SMP16_MASK		0x07
/** @defgroup adc4_smpr2_smp16 SMP16 SMP16
@{*/
/**@}*/


#define ADC4_SMPR2_SMP15_SHIFT		15
#define ADC4_SMPR2_SMP15_MASK		0x07
/** @defgroup adc4_smpr2_smp15 SMP15 SMP15
@{*/
/**@}*/


#define ADC4_SMPR2_SMP14_SHIFT		12
#define ADC4_SMPR2_SMP14_MASK		0x07
/** @defgroup adc4_smpr2_smp14 SMP14 SMP14
@{*/
/**@}*/


#define ADC4_SMPR2_SMP13_SHIFT		9
#define ADC4_SMPR2_SMP13_MASK		0x07
/** @defgroup adc4_smpr2_smp13 SMP13 SMP13
@{*/
/**@}*/


#define ADC4_SMPR2_SMP12_SHIFT		6
#define ADC4_SMPR2_SMP12_MASK		0x07
/** @defgroup adc4_smpr2_smp12 SMP12 SMP12
@{*/
/**@}*/


#define ADC4_SMPR2_SMP11_SHIFT		3
#define ADC4_SMPR2_SMP11_MASK		0x07
/** @defgroup adc4_smpr2_smp11 SMP11 SMP11
@{*/
/**@}*/


#define ADC4_SMPR2_SMP10_SHIFT		0
#define ADC4_SMPR2_SMP10_MASK		0x07
/** @defgroup adc4_smpr2_smp10 SMP10 SMP10
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_tr1 TR1 watchdog threshold register 1
@{*/


#define ADC4_TR1_HT1_SHIFT		16
#define ADC4_TR1_HT1_MASK		0xfff
/** @defgroup adc4_tr1_ht1 HT1 HT1
@{*/
/**@}*/


#define ADC4_TR1_LT1_SHIFT		0
#define ADC4_TR1_LT1_MASK		0xfff
/** @defgroup adc4_tr1_lt1 LT1 LT1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_tr2 TR2 watchdog threshold register
@{*/


#define ADC4_TR2_HT2_SHIFT		16
#define ADC4_TR2_HT2_MASK		0xff
/** @defgroup adc4_tr2_ht2 HT2 HT2
@{*/
/**@}*/


#define ADC4_TR2_LT2_SHIFT		0
#define ADC4_TR2_LT2_MASK		0xff
/** @defgroup adc4_tr2_lt2 LT2 LT2
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_tr3 TR3 watchdog threshold register 3
@{*/


#define ADC4_TR3_HT3_SHIFT		16
#define ADC4_TR3_HT3_MASK		0xff
/** @defgroup adc4_tr3_ht3 HT3 HT3
@{*/
/**@}*/


#define ADC4_TR3_LT3_SHIFT		0
#define ADC4_TR3_LT3_MASK		0xff
/** @defgroup adc4_tr3_lt3 LT3 LT3
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_sqr1 SQR1 regular sequence register 1
@{*/


#define ADC4_SQR1_SQ4_SHIFT		24
#define ADC4_SQR1_SQ4_MASK		0x1f
/** @defgroup adc4_sqr1_sq4 SQ4 SQ4
@{*/
/**@}*/


#define ADC4_SQR1_SQ3_SHIFT		18
#define ADC4_SQR1_SQ3_MASK		0x1f
/** @defgroup adc4_sqr1_sq3 SQ3 SQ3
@{*/
/**@}*/


#define ADC4_SQR1_SQ2_SHIFT		12
#define ADC4_SQR1_SQ2_MASK		0x1f
/** @defgroup adc4_sqr1_sq2 SQ2 SQ2
@{*/
/**@}*/


#define ADC4_SQR1_SQ1_SHIFT		6
#define ADC4_SQR1_SQ1_MASK		0x1f
/** @defgroup adc4_sqr1_sq1 SQ1 SQ1
@{*/
/**@}*/


#define ADC4_SQR1_L3_SHIFT		0
#define ADC4_SQR1_L3_MASK		0x0f
/** @defgroup adc4_sqr1_l3 L3 L3
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_sqr2 SQR2 regular sequence register 2
@{*/


#define ADC4_SQR2_SQ9_SHIFT		24
#define ADC4_SQR2_SQ9_MASK		0x1f
/** @defgroup adc4_sqr2_sq9 SQ9 SQ9
@{*/
/**@}*/


#define ADC4_SQR2_SQ8_SHIFT		18
#define ADC4_SQR2_SQ8_MASK		0x1f
/** @defgroup adc4_sqr2_sq8 SQ8 SQ8
@{*/
/**@}*/


#define ADC4_SQR2_SQ7_SHIFT		12
#define ADC4_SQR2_SQ7_MASK		0x1f
/** @defgroup adc4_sqr2_sq7 SQ7 SQ7
@{*/
/**@}*/


#define ADC4_SQR2_SQ6_SHIFT		6
#define ADC4_SQR2_SQ6_MASK		0x1f
/** @defgroup adc4_sqr2_sq6 SQ6 SQ6
@{*/
/**@}*/


#define ADC4_SQR2_SQ5_SHIFT		0
#define ADC4_SQR2_SQ5_MASK		0x1f
/** @defgroup adc4_sqr2_sq5 SQ5 SQ5
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_sqr3 SQR3 regular sequence register 3
@{*/


#define ADC4_SQR3_SQ14_SHIFT		24
#define ADC4_SQR3_SQ14_MASK		0x1f
/** @defgroup adc4_sqr3_sq14 SQ14 SQ14
@{*/
/**@}*/


#define ADC4_SQR3_SQ13_SHIFT		18
#define ADC4_SQR3_SQ13_MASK		0x1f
/** @defgroup adc4_sqr3_sq13 SQ13 SQ13
@{*/
/**@}*/


#define ADC4_SQR3_SQ12_SHIFT		12
#define ADC4_SQR3_SQ12_MASK		0x1f
/** @defgroup adc4_sqr3_sq12 SQ12 SQ12
@{*/
/**@}*/


#define ADC4_SQR3_SQ11_SHIFT		6
#define ADC4_SQR3_SQ11_MASK		0x1f
/** @defgroup adc4_sqr3_sq11 SQ11 SQ11
@{*/
/**@}*/


#define ADC4_SQR3_SQ10_SHIFT		0
#define ADC4_SQR3_SQ10_MASK		0x1f
/** @defgroup adc4_sqr3_sq10 SQ10 SQ10
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_sqr4 SQR4 regular sequence register 4
@{*/


#define ADC4_SQR4_SQ16_SHIFT		6
#define ADC4_SQR4_SQ16_MASK		0x1f
/** @defgroup adc4_sqr4_sq16 SQ16 SQ16
@{*/
/**@}*/


#define ADC4_SQR4_SQ15_SHIFT		0
#define ADC4_SQR4_SQ15_MASK		0x1f
/** @defgroup adc4_sqr4_sq15 SQ15 SQ15
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_dr DR regular Data Register
@{*/


#define ADC4_DR_regularDATA_SHIFT		0
#define ADC4_DR_regularDATA_MASK		0xffff
/** @defgroup adc4_dr_regulardata regularDATA regularDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_jsqr JSQR injected sequence register
@{*/


#define ADC4_JSQR_JSQ4_SHIFT		26
#define ADC4_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc4_jsqr_jsq4 JSQ4 JSQ4
@{*/
/**@}*/


#define ADC4_JSQR_JSQ3_SHIFT		20
#define ADC4_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc4_jsqr_jsq3 JSQ3 JSQ3
@{*/
/**@}*/


#define ADC4_JSQR_JSQ2_SHIFT		14
#define ADC4_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc4_jsqr_jsq2 JSQ2 JSQ2
@{*/
/**@}*/


#define ADC4_JSQR_JSQ1_SHIFT		8
#define ADC4_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc4_jsqr_jsq1 JSQ1 JSQ1
@{*/
/**@}*/


#define ADC4_JSQR_JEXTEN_SHIFT		6
#define ADC4_JSQR_JEXTEN_MASK		0x03
/** @defgroup adc4_jsqr_jexten JEXTEN JEXTEN
@{*/
/**@}*/


#define ADC4_JSQR_JEXTSEL_SHIFT		2
#define ADC4_JSQR_JEXTSEL_MASK		0x0f
/** @defgroup adc4_jsqr_jextsel JEXTSEL JEXTSEL
@{*/
/**@}*/


#define ADC4_JSQR_JL_SHIFT		0
#define ADC4_JSQR_JL_MASK		0x03
/** @defgroup adc4_jsqr_jl JL JL
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_ofr1 OFR1 offset register 1
@{*/

/** ADC4_OFR1_OFFSET1_EN OFFSET1_EN **/
#define ADC4_OFR1_OFFSET1_EN		(1 << 31)

#define ADC4_OFR1_OFFSET1_CH_SHIFT		26
#define ADC4_OFR1_OFFSET1_CH_MASK		0x1f
/** @defgroup adc4_ofr1_offset1_ch OFFSET1CH OFFSET1_CH
@{*/
/**@}*/


#define ADC4_OFR1_OFFSET1_SHIFT		0
#define ADC4_OFR1_OFFSET1_MASK		0xfff
/** @defgroup adc4_ofr1_offset1 OFFSET1 OFFSET1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_ofr2 OFR2 offset register 2
@{*/

/** ADC4_OFR2_OFFSET2_EN OFFSET2_EN **/
#define ADC4_OFR2_OFFSET2_EN		(1 << 31)

#define ADC4_OFR2_OFFSET2_CH_SHIFT		26
#define ADC4_OFR2_OFFSET2_CH_MASK		0x1f
/** @defgroup adc4_ofr2_offset2_ch OFFSET2CH OFFSET2_CH
@{*/
/**@}*/


#define ADC4_OFR2_OFFSET2_SHIFT		0
#define ADC4_OFR2_OFFSET2_MASK		0xfff
/** @defgroup adc4_ofr2_offset2 OFFSET2 OFFSET2
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_ofr3 OFR3 offset register 3
@{*/

/** ADC4_OFR3_OFFSET3_EN OFFSET3_EN **/
#define ADC4_OFR3_OFFSET3_EN		(1 << 31)

#define ADC4_OFR3_OFFSET3_CH_SHIFT		26
#define ADC4_OFR3_OFFSET3_CH_MASK		0x1f
/** @defgroup adc4_ofr3_offset3_ch OFFSET3CH OFFSET3_CH
@{*/
/**@}*/


#define ADC4_OFR3_OFFSET3_SHIFT		0
#define ADC4_OFR3_OFFSET3_MASK		0xfff
/** @defgroup adc4_ofr3_offset3 OFFSET3 OFFSET3
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_ofr4 OFR4 offset register 4
@{*/

/** ADC4_OFR4_OFFSET4_EN OFFSET4_EN **/
#define ADC4_OFR4_OFFSET4_EN		(1 << 31)

#define ADC4_OFR4_OFFSET4_CH_SHIFT		26
#define ADC4_OFR4_OFFSET4_CH_MASK		0x1f
/** @defgroup adc4_ofr4_offset4_ch OFFSET4CH OFFSET4_CH
@{*/
/**@}*/


#define ADC4_OFR4_OFFSET4_SHIFT		0
#define ADC4_OFR4_OFFSET4_MASK		0xfff
/** @defgroup adc4_ofr4_offset4 OFFSET4 OFFSET4
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_jdr1 JDR1 injected data register 1
@{*/


#define ADC4_JDR1_JDATA1_SHIFT		0
#define ADC4_JDR1_JDATA1_MASK		0xffff
/** @defgroup adc4_jdr1_jdata1 JDATA1 JDATA1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_jdr2 JDR2 injected data register 2
@{*/


#define ADC4_JDR2_JDATA2_SHIFT		0
#define ADC4_JDR2_JDATA2_MASK		0xffff
/** @defgroup adc4_jdr2_jdata2 JDATA2 JDATA2
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_jdr3 JDR3 injected data register 3
@{*/


#define ADC4_JDR3_JDATA3_SHIFT		0
#define ADC4_JDR3_JDATA3_MASK		0xffff
/** @defgroup adc4_jdr3_jdata3 JDATA3 JDATA3
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_jdr4 JDR4 injected data register 4
@{*/


#define ADC4_JDR4_JDATA4_SHIFT		0
#define ADC4_JDR4_JDATA4_MASK		0xffff
/** @defgroup adc4_jdr4_jdata4 JDATA4 JDATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_awd2cr AWD2CR Analog Watchdog 2 Configuration Register
@{*/


#define ADC4_AWD2CR_AWD2CH_SHIFT		1
#define ADC4_AWD2CR_AWD2CH_MASK		0x3ffff
/** @defgroup adc4_awd2cr_awd2ch AWD2CH AWD2CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_awd3cr AWD3CR Analog Watchdog 3 Configuration Register
@{*/


#define ADC4_AWD3CR_AWD3CH_SHIFT		1
#define ADC4_AWD3CR_AWD3CH_MASK		0x3ffff
/** @defgroup adc4_awd3cr_awd3ch AWD3CH AWD3CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_difsel DIFSEL Differential Mode Selection Register 2
@{*/


#define ADC4_DIFSEL_DIFSEL_16_18_SHIFT		16
#define ADC4_DIFSEL_DIFSEL_16_18_MASK		0x07
/** @defgroup adc4_difsel_difsel_16_18 DIFSEL1618 Differential mode for channels 18 to 16
@{*/
/**@}*/


#define ADC4_DIFSEL_DIFSEL_1_15_SHIFT		1
#define ADC4_DIFSEL_DIFSEL_1_15_MASK		0x7fff
/** @defgroup adc4_difsel_difsel_1_15 DIFSEL115 Differential mode for channels 15 to 1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc4_calfact CALFACT Calibration Factors
@{*/


#define ADC4_CALFACT_CALFACT_D_SHIFT		16
#define ADC4_CALFACT_CALFACT_D_MASK		0x7f
/** @defgroup adc4_calfact_calfact_d CALFACTD CALFACT_D
@{*/
/**@}*/


#define ADC4_CALFACT_CALFACT_S_SHIFT		0
#define ADC4_CALFACT_CALFACT_S_MASK		0x7f
/** @defgroup adc4_calfact_calfact_s CALFACTS CALFACT_S
@{*/
/**@}*/


/**@}*/

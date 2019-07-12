#pragma once 

/* --- ADC: Analog to digital converter ----------------------------- */

/** @defgroup adc_registers Analog to digital converter Register
@{*/

/** ADC_ISR ADC interrupt and status register **/
#define ADC_ISR			MMIO32(ADC_BASE + 0x00)
/** ADC_CSR ADC Common status register **/
#define ADC_CSR			MMIO32(ADC_BASE + 0x00)
/** ADC_IER ADC interrupt enable register **/
#define ADC_IER			MMIO32(ADC_BASE + 0x04)
/** ADC_CR ADC control register **/
#define ADC_CR			MMIO32(ADC_BASE + 0x08)
/** ADC_CRR ADC common control register **/
#define ADC_CRR			MMIO32(ADC_BASE + 0x08)
/** ADC_CFGR ADC configuration register **/
#define ADC_CFGR			MMIO32(ADC_BASE + 0x0c)
/** ADC_SMPR1 ADC sample time register 1 **/
#define ADC_SMPR1			MMIO32(ADC_BASE + 0x14)
/** ADC_SMPR2 ADC sample time register 2 **/
#define ADC_SMPR2			MMIO32(ADC_BASE + 0x18)
/** ADC_TR1 ADC watchdog threshold register 1 **/
#define ADC_TR1			MMIO32(ADC_BASE + 0x20)
/** ADC_TR2 ADC watchdog threshold register 2 **/
#define ADC_TR2			MMIO32(ADC_BASE + 0x24)
/** ADC_TR3 read-write **/
#define ADC_TR3			MMIO32(ADC_BASE + 0x28)
/** ADC_SQR1 ADC regular sequence register 1 **/
#define ADC_SQR1			MMIO32(ADC_BASE + 0x30)
/** ADC_SQR2 ADC regular sequence register 2 **/
#define ADC_SQR2			MMIO32(ADC_BASE + 0x34)
/** ADC_SQR3 ADC regular sequence register 3 **/
#define ADC_SQR3			MMIO32(ADC_BASE + 0x38)
/** ADC_SQR4 ADC regular sequence register 4 **/
#define ADC_SQR4			MMIO32(ADC_BASE + 0x3c)
/** ADC_DR ADC regular Data Register **/
#define ADC_DR			MMIO32(ADC_BASE + 0x40)
/** ADC_JSQR ADC injected sequence register **/
#define ADC_JSQR			MMIO32(ADC_BASE + 0x4c)
/** ADC_OFR1 ADC offset register1 **/
#define ADC_OFR1			MMIO32(ADC_BASE + 0x60)
/** ADC_OFR2 ADC offset register2 **/
#define ADC_OFR2			MMIO32(ADC_BASE + 0x64)
/** ADC_OFR3 ADC offset register3 **/
#define ADC_OFR3			MMIO32(ADC_BASE + 0x68)
/** ADC_OFR4 ADC offset register4 **/
#define ADC_OFR4			MMIO32(ADC_BASE + 0x6c)
/** ADC_JDR1 ADC offset register1 **/
#define ADC_JDR1			MMIO32(ADC_BASE + 0x80)
/** ADC_JDR2 ADC offset register2 **/
#define ADC_JDR2			MMIO32(ADC_BASE + 0x84)
/** ADC_JDR3 ADC offset register3 **/
#define ADC_JDR3			MMIO32(ADC_BASE + 0x88)
/** ADC_JDR4 ADC offset register4 **/
#define ADC_JDR4			MMIO32(ADC_BASE + 0x8c)
/** ADC_AWD2CR ADC Analog Watchdog 2 Configuration Register **/
#define ADC_AWD2CR			MMIO32(ADC_BASE + 0xa0)
/** ADC_AWD3CR ADC Analog Watchdog 3 Configuration Register **/
#define ADC_AWD3CR			MMIO32(ADC_BASE + 0xa4)
/** ADC_DIFSEL ADC Differential Mode Selection Register **/
#define ADC_DIFSEL			MMIO32(ADC_BASE + 0xb0)
/** ADC_CALFACT ADC Calibration Factors **/
#define ADC_CALFACT			MMIO32(ADC_BASE + 0xb4)

/**@}*/


/** @defgroup adc_isr ISR ADC interrupt and status register
@{*/

/** ADC_ISR_JQOVF Injected context queue overflow **/
#define ADC_ISR_JQOVF		(1 << 10)
/** ADC_ISR_AWD3 Analog watchdog 3 flag **/
#define ADC_ISR_AWD3		(1 << 9)
/** ADC_ISR_AWD2 Analog watchdog 2 flag **/
#define ADC_ISR_AWD2		(1 << 8)
/** ADC_ISR_AWD1 Analog watchdog 1 flag **/
#define ADC_ISR_AWD1		(1 << 7)
/** ADC_ISR_JEOS Injected channel end of sequence flag **/
#define ADC_ISR_JEOS		(1 << 6)
/** ADC_ISR_JEOC Injected channel end of conversion flag **/
#define ADC_ISR_JEOC		(1 << 5)
/** ADC_ISR_OVR ADC overrun **/
#define ADC_ISR_OVR		(1 << 4)
/** ADC_ISR_EOS End of regular sequence flag **/
#define ADC_ISR_EOS		(1 << 3)
/** ADC_ISR_EOC End of conversion flag **/
#define ADC_ISR_EOC		(1 << 2)
/** ADC_ISR_EOSMP End of sampling flag **/
#define ADC_ISR_EOSMP		(1 << 1)
/** ADC_ISR_ADRDY ADC ready **/
#define ADC_ISR_ADRDY		(1 << 0)

/**@}*/

/** @defgroup adc_csr CSR ADC Common status register
@{*/

/** ADC_CSR_JQOVF_SLV Injected Context Queue Overflow flag of the slave ADC **/
#define ADC_CSR_JQOVF_SLV		(1 << 26)
/** ADC_CSR_AWD3_SLV Analog watchdog 3 flag of the slave ADC **/
#define ADC_CSR_AWD3_SLV		(1 << 25)
/** ADC_CSR_AWD2_SLV Analog watchdog 2 flag of the slave ADC **/
#define ADC_CSR_AWD2_SLV		(1 << 24)
/** ADC_CSR_AWD1_SLV Analog watchdog 1 flag of the slave ADC **/
#define ADC_CSR_AWD1_SLV		(1 << 23)
/** ADC_CSR_JEOS_SLV End of injected sequence flag of the slave ADC **/
#define ADC_CSR_JEOS_SLV		(1 << 22)
/** ADC_CSR_JEOC_SLV End of injected conversion flag of the slave ADC **/
#define ADC_CSR_JEOC_SLV		(1 << 21)
/** ADC_CSR_OVR_SLV Overrun flag of the slave ADC **/
#define ADC_CSR_OVR_SLV		(1 << 20)
/** ADC_CSR_EOS_SLV End of regular sequence flag of the slave ADC **/
#define ADC_CSR_EOS_SLV		(1 << 19)
/** ADC_CSR_EOC_SLV End of regular conversion of the slave ADC **/
#define ADC_CSR_EOC_SLV		(1 << 18)
/** ADC_CSR_EOSMP_SLV End of Sampling phase flag of the slave ADC **/
#define ADC_CSR_EOSMP_SLV		(1 << 17)
/** ADC_CSR_ADRDY_SLV Slave ADC ready **/
#define ADC_CSR_ADRDY_SLV		(1 << 16)
/** ADC_CSR_JQOVF_MST Injected Context Queue Overflow flag of the master ADC **/
#define ADC_CSR_JQOVF_MST		(1 << 10)
/** ADC_CSR_AWD3_MST Analog watchdog 3 flag of the master ADC **/
#define ADC_CSR_AWD3_MST		(1 << 9)
/** ADC_CSR_AWD2_MST Analog watchdog 2 flag of the master ADC **/
#define ADC_CSR_AWD2_MST		(1 << 8)
/** ADC_CSR_AWD1_MST Analog watchdog 1 flag of the master ADC **/
#define ADC_CSR_AWD1_MST		(1 << 7)
/** ADC_CSR_JEOS_MST End of injected sequence flag of the master ADC **/
#define ADC_CSR_JEOS_MST		(1 << 6)
/** ADC_CSR_JEOC_MST End of injected conversion flag of the master ADC **/
#define ADC_CSR_JEOC_MST		(1 << 5)
/** ADC_CSR_OVR_MST Overrun flag of the master ADC **/
#define ADC_CSR_OVR_MST		(1 << 4)
/** ADC_CSR_EOS_MST End of regular sequence flag of the master ADC **/
#define ADC_CSR_EOS_MST		(1 << 3)
/** ADC_CSR_EOC_MST End of regular conversion of the master ADC **/
#define ADC_CSR_EOC_MST		(1 << 2)
/** ADC_CSR_EOSMP_MST End of Sampling phase flag of the master ADC **/
#define ADC_CSR_EOSMP_MST		(1 << 1)
/** ADC_CSR_ADRDY_MST Master ADC ready **/
#define ADC_CSR_ADRDY_MST		(1 << 0)

/**@}*/

/** @defgroup adc_ier IER ADC interrupt enable register
@{*/

/** ADC_IER_JQOVFIE Injected context queue overflow interrupt enable **/
#define ADC_IER_JQOVFIE		(1 << 10)
/** ADC_IER_AWD3IE Analog watchdog 3 interrupt enable **/
#define ADC_IER_AWD3IE		(1 << 9)
/** ADC_IER_AWD2IE Analog watchdog 2 interrupt enable **/
#define ADC_IER_AWD2IE		(1 << 8)
/** ADC_IER_AWD1IE Analog watchdog 1 interrupt enable **/
#define ADC_IER_AWD1IE		(1 << 7)
/** ADC_IER_JEOSIE End of injected sequence of conversions interrupt enable **/
#define ADC_IER_JEOSIE		(1 << 6)
/** ADC_IER_JEOCIE End of injected conversion interrupt enable **/
#define ADC_IER_JEOCIE		(1 << 5)
/** ADC_IER_OVRIE Overrun interrupt enable **/
#define ADC_IER_OVRIE		(1 << 4)
/** ADC_IER_EOSIE End of regular sequence of conversions interrupt enable **/
#define ADC_IER_EOSIE		(1 << 3)
/** ADC_IER_EOCIE End of regular conversion interrupt enable **/
#define ADC_IER_EOCIE		(1 << 2)
/** ADC_IER_EOSMPIE End of sampling flag interrupt enable for regular conversions **/
#define ADC_IER_EOSMPIE		(1 << 1)
/** ADC_IER_ADRDYIE ADC ready interrupt enable **/
#define ADC_IER_ADRDYIE		(1 << 0)

/**@}*/

/** @defgroup adc_cr CR ADC control register
@{*/

/** ADC_CR_ADCAL ADC calibration **/
#define ADC_CR_ADCAL		(1 << 31)
/** ADC_CR_ADCALDIF Differential mode for calibration **/
#define ADC_CR_ADCALDIF		(1 << 30)

#define ADC_CR_ADVREGEN_SHIFT		28
#define ADC_CR_ADVREGEN_MASK		0x03
/** @defgroup adc_cr_advregen ADVREGEN ADC voltage regulator enable
@{*/
/**@}*/

/** ADC_CR_JADST ADC stop of injected conversion command **/
#define ADC_CR_JADST		(1 << 5)
/** ADC_CR_ADSTP ADC stop of regular conversion command **/
#define ADC_CR_ADSTP		(1 << 4)
/** ADC_CR_JADSTART ADC start of injected conversion **/
#define ADC_CR_JADSTART		(1 << 3)
/** ADC_CR_ADSTART ADC start of regular conversion **/
#define ADC_CR_ADSTART		(1 << 2)
/** ADC_CR_ADDIS ADC disable command **/
#define ADC_CR_ADDIS		(1 << 1)
/** ADC_CR_ADEN ADC enable control **/
#define ADC_CR_ADEN		(1 << 0)

/**@}*/

/** @defgroup adc_crr CRR ADC common control register
@{*/

/** ADC_CRR_VBATEN VBATEN **/
#define ADC_CRR_VBATEN		(1 << 24)
/** ADC_CRR_TSEN Temperature sensor enable **/
#define ADC_CRR_TSEN		(1 << 23)
/** ADC_CRR_VREFEN VREFINT enable **/
#define ADC_CRR_VREFEN		(1 << 22)

#define ADC_CRR_CKMODE_SHIFT		16
#define ADC_CRR_CKMODE_MASK		0x03
/** @defgroup adc_crr_ckmode CKMODE ADC clock mode
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cfgr CFGR ADC configuration register
@{*/


#define ADC_CFGR_AWD1CH_SHIFT		26
#define ADC_CFGR_AWD1CH_MASK		0x1f
/** @defgroup adc_cfgr_awd1ch AWD1CH Analog watchdog 1 channel selection
@{*/
/**@}*/

/** ADC_CFGR_JAUTO Automatic injected group conversion **/
#define ADC_CFGR_JAUTO		(1 << 25)
/** ADC_CFGR_JAWD1EN Analog watchdog 1 enable on injected channels **/
#define ADC_CFGR_JAWD1EN		(1 << 24)
/** ADC_CFGR_AWD1EN Analog watchdog 1 enable on regular channels **/
#define ADC_CFGR_AWD1EN		(1 << 23)
/** ADC_CFGR_AWD1SGL Enable the watchdog 1 on a single channel or on all channels **/
#define ADC_CFGR_AWD1SGL		(1 << 22)
/** ADC_CFGR_JQM JSQR queue mode **/
#define ADC_CFGR_JQM		(1 << 21)
/** ADC_CFGR_JDISCEN Discontinuous mode on injected channels **/
#define ADC_CFGR_JDISCEN		(1 << 20)

#define ADC_CFGR_DISCNUM_SHIFT		17
#define ADC_CFGR_DISCNUM_MASK		0x07
/** @defgroup adc_cfgr_discnum DISCNUM Discontinuous mode channel count
@{*/
/**@}*/

/** ADC_CFGR_DISCEN Discontinuous mode for regular channels **/
#define ADC_CFGR_DISCEN		(1 << 16)
/** ADC_CFGR_AUTDLY Delayed conversion mode **/
#define ADC_CFGR_AUTDLY		(1 << 14)
/** ADC_CFGR_CONT Single / continuous conversion mode for regular conversions **/
#define ADC_CFGR_CONT		(1 << 13)
/** ADC_CFGR_OVRMOD Overrun Mode **/
#define ADC_CFGR_OVRMOD		(1 << 12)

#define ADC_CFGR_EXTEN_SHIFT		10
#define ADC_CFGR_EXTEN_MASK		0x03
/** @defgroup adc_cfgr_exten EXTEN External trigger enable and polarity selection for regular channels
@{*/
/**@}*/


#define ADC_CFGR_EXTSEL_SHIFT		6
#define ADC_CFGR_EXTSEL_MASK		0x0f
/** @defgroup adc_cfgr_extsel EXTSEL External trigger selection for regular group
@{*/
/**@}*/

/** ADC_CFGR_ALIGN Data alignment **/
#define ADC_CFGR_ALIGN		(1 << 5)

#define ADC_CFGR_RES_SHIFT		3
#define ADC_CFGR_RES_MASK		0x03
/** @defgroup adc_cfgr_res RES Data resolution
@{*/
/**@}*/

/** ADC_CFGR_DMACFG Direct memory access configuration **/
#define ADC_CFGR_DMACFG		(1 << 1)
/** ADC_CFGR_DMAEN Direct memory access enable **/
#define ADC_CFGR_DMAEN		(1 << 0)

/**@}*/

/** @defgroup adc_smpr1 SMPR1 ADC sample time register 1
@{*/


#define ADC_SMPR1_SMP9_SHIFT		27
#define ADC_SMPR1_SMP9_MASK		0x07
/** @defgroup adc_smpr1_smp9 SMP9 Channel 9 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP8_SHIFT		24
#define ADC_SMPR1_SMP8_MASK		0x07
/** @defgroup adc_smpr1_smp8 SMP8 Channel 8 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP7_SHIFT		21
#define ADC_SMPR1_SMP7_MASK		0x07
/** @defgroup adc_smpr1_smp7 SMP7 Channel 7 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP6_SHIFT		18
#define ADC_SMPR1_SMP6_MASK		0x07
/** @defgroup adc_smpr1_smp6 SMP6 Channel 6 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP5_SHIFT		15
#define ADC_SMPR1_SMP5_MASK		0x07
/** @defgroup adc_smpr1_smp5 SMP5 Channel 5 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP4_SHIFT		12
#define ADC_SMPR1_SMP4_MASK		0x07
/** @defgroup adc_smpr1_smp4 SMP4 Channel 4 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP3_SHIFT		9
#define ADC_SMPR1_SMP3_MASK		0x07
/** @defgroup adc_smpr1_smp3 SMP3 Channel 3 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP2_SHIFT		6
#define ADC_SMPR1_SMP2_MASK		0x07
/** @defgroup adc_smpr1_smp2 SMP2 Channel 2 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR1_SMP1_SHIFT		3
#define ADC_SMPR1_SMP1_MASK		0x07
/** @defgroup adc_smpr1_smp1 SMP1 Channel 1 sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_smpr2 SMPR2 ADC sample time register 2
@{*/


#define ADC_SMPR2_SMP18_SHIFT		24
#define ADC_SMPR2_SMP18_MASK		0x07
/** @defgroup adc_smpr2_smp18 SMP18 Channel 18 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP17_SHIFT		21
#define ADC_SMPR2_SMP17_MASK		0x07
/** @defgroup adc_smpr2_smp17 SMP17 Channel 17 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP16_SHIFT		18
#define ADC_SMPR2_SMP16_MASK		0x07
/** @defgroup adc_smpr2_smp16 SMP16 Channel 16 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP15_SHIFT		15
#define ADC_SMPR2_SMP15_MASK		0x07
/** @defgroup adc_smpr2_smp15 SMP15 Channel 15 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP14_SHIFT		12
#define ADC_SMPR2_SMP14_MASK		0x07
/** @defgroup adc_smpr2_smp14 SMP14 Channel 14 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP13_SHIFT		9
#define ADC_SMPR2_SMP13_MASK		0x07
/** @defgroup adc_smpr2_smp13 SMP13 Channel 13 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP12_SHIFT		6
#define ADC_SMPR2_SMP12_MASK		0x07
/** @defgroup adc_smpr2_smp12 SMP12 Channel 12 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP11_SHIFT		3
#define ADC_SMPR2_SMP11_MASK		0x07
/** @defgroup adc_smpr2_smp11 SMP11 Channel 11 sampling time selection
@{*/
/**@}*/


#define ADC_SMPR2_SMP10_SHIFT		0
#define ADC_SMPR2_SMP10_MASK		0x07
/** @defgroup adc_smpr2_smp10 SMP10 Channel 10 sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_tr1 TR1 ADC watchdog threshold register 1
@{*/


#define ADC_TR1_HT1_SHIFT		16
#define ADC_TR1_HT1_MASK		0xfff
/** @defgroup adc_tr1_ht1 HT1 Analog watchdog 1 higher threshold
@{*/
/**@}*/


#define ADC_TR1_LT1_SHIFT		0
#define ADC_TR1_LT1_MASK		0xfff
/** @defgroup adc_tr1_lt1 LT1 Analog watchdog 1 lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_tr2 TR2 ADC watchdog threshold register 2
@{*/


#define ADC_TR2_HT2_SHIFT		16
#define ADC_TR2_HT2_MASK		0xff
/** @defgroup adc_tr2_ht2 HT2 Analog watchdog 2 higher threshold
@{*/
/**@}*/


#define ADC_TR2_LT2_SHIFT		0
#define ADC_TR2_LT2_MASK		0xff
/** @defgroup adc_tr2_lt2 LT2 Analog watchdog 2 lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_tr3 TR3 read-write
@{*/


#define ADC_TR3_HT3_SHIFT		16
#define ADC_TR3_HT3_MASK		0xff
/** @defgroup adc_tr3_ht3 HT3 Analog watchdog 3 higher threshold
@{*/
/**@}*/


#define ADC_TR3_LT3_SHIFT		0
#define ADC_TR3_LT3_MASK		0xff
/** @defgroup adc_tr3_lt3 LT3 Analog watchdog 3 lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr1 SQR1 ADC regular sequence register 1
@{*/


#define ADC_SQR1_SQ4_SHIFT		24
#define ADC_SQR1_SQ4_MASK		0x1f
/** @defgroup adc_sqr1_sq4 SQ4 4th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ3_SHIFT		18
#define ADC_SQR1_SQ3_MASK		0x1f
/** @defgroup adc_sqr1_sq3 SQ3 3rd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ2_SHIFT		12
#define ADC_SQR1_SQ2_MASK		0x1f
/** @defgroup adc_sqr1_sq2 SQ2 2nd conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_SQ1_SHIFT		6
#define ADC_SQR1_SQ1_MASK		0x1f
/** @defgroup adc_sqr1_sq1 SQ1 1st conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR1_L_SHIFT		0
#define ADC_SQR1_L_MASK		0x0f
/** @defgroup adc_sqr1_l L Regular channel sequence length
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr2 SQR2 ADC regular sequence register 2
@{*/


#define ADC_SQR2_SQ9_SHIFT		24
#define ADC_SQR2_SQ9_MASK		0x1f
/** @defgroup adc_sqr2_sq9 SQ9 9th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ8_SHIFT		18
#define ADC_SQR2_SQ8_MASK		0x1f
/** @defgroup adc_sqr2_sq8 SQ8 8th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ7_SHIFT		12
#define ADC_SQR2_SQ7_MASK		0x1f
/** @defgroup adc_sqr2_sq7 SQ7 7th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ6_SHIFT		6
#define ADC_SQR2_SQ6_MASK		0x1f
/** @defgroup adc_sqr2_sq6 SQ6 6th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR2_SQ5_SHIFT		0
#define ADC_SQR2_SQ5_MASK		0x1f
/** @defgroup adc_sqr2_sq5 SQ5 5th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr3 SQR3 ADC regular sequence register 3
@{*/


#define ADC_SQR3_SQ14_SHIFT		24
#define ADC_SQR3_SQ14_MASK		0x1f
/** @defgroup adc_sqr3_sq14 SQ14 14th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ13_SHIFT		18
#define ADC_SQR3_SQ13_MASK		0x1f
/** @defgroup adc_sqr3_sq13 SQ13 13th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ12_SHIFT		12
#define ADC_SQR3_SQ12_MASK		0x1f
/** @defgroup adc_sqr3_sq12 SQ12 13th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ11_SHIFT		6
#define ADC_SQR3_SQ11_MASK		0x1f
/** @defgroup adc_sqr3_sq11 SQ11 11th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR3_SQ10_SHIFT		0
#define ADC_SQR3_SQ10_MASK		0x1f
/** @defgroup adc_sqr3_sq10 SQ10 10th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sqr4 SQR4 ADC regular sequence register 4
@{*/


#define ADC_SQR4_SQ16_SHIFT		6
#define ADC_SQR4_SQ16_MASK		0x1f
/** @defgroup adc_sqr4_sq16 SQ16 16th conversion in regular sequence
@{*/
/**@}*/


#define ADC_SQR4_SQ15_SHIFT		0
#define ADC_SQR4_SQ15_MASK		0x1f
/** @defgroup adc_sqr4_sq15 SQ15 15th conversion in regular sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_dr DR ADC regular Data Register
@{*/


#define ADC_DR_RDATA_SHIFT		0
#define ADC_DR_RDATA_MASK		0xffff
/** @defgroup adc_dr_rdata RDATA Regular Data converted
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jsqr JSQR ADC injected sequence register
@{*/


#define ADC_JSQR_JSQ4_SHIFT		26
#define ADC_JSQR_JSQ4_MASK		0x1f
/** @defgroup adc_jsqr_jsq4 JSQ4 4th conversion in the injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ3_SHIFT		20
#define ADC_JSQR_JSQ3_MASK		0x1f
/** @defgroup adc_jsqr_jsq3 JSQ3 3rd conversion in the injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ2_SHIFT		14
#define ADC_JSQR_JSQ2_MASK		0x1f
/** @defgroup adc_jsqr_jsq2 JSQ2 2nd conversion in the injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JSQ1_SHIFT		8
#define ADC_JSQR_JSQ1_MASK		0x1f
/** @defgroup adc_jsqr_jsq1 JSQ1 1st conversion in the injected sequence
@{*/
/**@}*/


#define ADC_JSQR_JEXTEN_SHIFT		6
#define ADC_JSQR_JEXTEN_MASK		0x03
/** @defgroup adc_jsqr_jexten JEXTEN External Trigger Enable and Polarity Selection for injected channels
@{*/
/**@}*/


#define ADC_JSQR_JEXTSEL_SHIFT		2
#define ADC_JSQR_JEXTSEL_MASK		0x0f
/** @defgroup adc_jsqr_jextsel JEXTSEL External Trigger Selection for injected group
@{*/
/**@}*/


#define ADC_JSQR_JL_SHIFT		0
#define ADC_JSQR_JL_MASK		0x03
/** @defgroup adc_jsqr_jl JL Injected channel sequence length
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ofr1 OFR1 ADC offset register1
@{*/

/** ADC_OFR1_OFFSET1_EN Offset1 Enable **/
#define ADC_OFR1_OFFSET1_EN		(1 << 31)

#define ADC_OFR1_OFFSET1_CH_SHIFT		26
#define ADC_OFR1_OFFSET1_CH_MASK		0x1f
/** @defgroup adc_ofr1_offset1_ch OFFSET1CH Channel selection for the Data offset 1
@{*/
/**@}*/


#define ADC_OFR1_OFFSET1_SHIFT		0
#define ADC_OFR1_OFFSET1_MASK		0xfff
/** @defgroup adc_ofr1_offset1 OFFSET1 Data offset 1 for the channel programmed into bits OFFSET1_CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ofr2 OFR2 ADC offset register2
@{*/

/** ADC_OFR2_OFFSET2_EN Offset 2 Enable **/
#define ADC_OFR2_OFFSET2_EN		(1 << 31)

#define ADC_OFR2_OFFSET2_CH_SHIFT		26
#define ADC_OFR2_OFFSET2_CH_MASK		0x1f
/** @defgroup adc_ofr2_offset2_ch OFFSET2CH Channel selection for the Data offset 2
@{*/
/**@}*/


#define ADC_OFR2_OFFSET2_SHIFT		0
#define ADC_OFR2_OFFSET2_MASK		0xfff
/** @defgroup adc_ofr2_offset2 OFFSET2 Data offset 2 for the channel programmed into bits OFFSET2_CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ofr3 OFR3 ADC offset register3
@{*/

/** ADC_OFR3_OFFSET3_EN Offset y Enable **/
#define ADC_OFR3_OFFSET3_EN		(1 << 31)

#define ADC_OFR3_OFFSET3_CH_SHIFT		26
#define ADC_OFR3_OFFSET3_CH_MASK		0x1f
/** @defgroup adc_ofr3_offset3_ch OFFSET3CH Channel selection for the Data offset 3
@{*/
/**@}*/


#define ADC_OFR3_OFFSET3_SHIFT		0
#define ADC_OFR3_OFFSET3_MASK		0xfff
/** @defgroup adc_ofr3_offset3 OFFSET3 Data offset 3 for the channel programmed into bits OFFSET3_CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ofr4 OFR4 ADC offset register4
@{*/

/** ADC_OFR4_OFFSET4_EN Offset 4 Enable **/
#define ADC_OFR4_OFFSET4_EN		(1 << 31)

#define ADC_OFR4_OFFSET4_CH_SHIFT		26
#define ADC_OFR4_OFFSET4_CH_MASK		0x1f
/** @defgroup adc_ofr4_offset4_ch OFFSET4CH Channel selection for the Data offset 4
@{*/
/**@}*/


#define ADC_OFR4_OFFSET4_SHIFT		0
#define ADC_OFR4_OFFSET4_MASK		0xfff
/** @defgroup adc_ofr4_offset4 OFFSET4 Data offset 4 for the channel programmed into bits OFFSET4_CH
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr1 JDR1 ADC offset register1
@{*/


#define ADC_JDR1_JDATA_SHIFT		0
#define ADC_JDR1_JDATA_MASK		0xffff
/** @defgroup adc_jdr1_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr2 JDR2 ADC offset register2
@{*/


#define ADC_JDR2_JDATA_SHIFT		0
#define ADC_JDR2_JDATA_MASK		0xffff
/** @defgroup adc_jdr2_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr3 JDR3 ADC offset register3
@{*/


#define ADC_JDR3_JDATA_SHIFT		0
#define ADC_JDR3_JDATA_MASK		0xffff
/** @defgroup adc_jdr3_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_jdr4 JDR4 ADC offset register4
@{*/


#define ADC_JDR4_JDATA_SHIFT		0
#define ADC_JDR4_JDATA_MASK		0xffff
/** @defgroup adc_jdr4_jdata JDATA Injected data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd2cr AWD2CR ADC Analog Watchdog 2 Configuration Register
@{*/


#define ADC_AWD2CR_AWD2CH_SHIFT		1
#define ADC_AWD2CR_AWD2CH_MASK		0x3ffff
/** @defgroup adc_awd2cr_awd2ch AWD2CH Analog watchdog 2 channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd3cr AWD3CR ADC Analog Watchdog 3 Configuration Register
@{*/


#define ADC_AWD3CR_AWD3CH_SHIFT		1
#define ADC_AWD3CR_AWD3CH_MASK		0x3ffff
/** @defgroup adc_awd3cr_awd3ch AWD3CH Analog watchdog 3 channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_difsel DIFSEL ADC Differential Mode Selection Register
@{*/


#define ADC_DIFSEL_DIFSEL_SHIFT		1
#define ADC_DIFSEL_DIFSEL_MASK		0x3ffff
/** @defgroup adc_difsel_difsel DIFSEL Differential mode for channels 15 to 1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_calfact CALFACT ADC Calibration Factors
@{*/


#define ADC_CALFACT_CALFACT_D_SHIFT		16
#define ADC_CALFACT_CALFACT_D_MASK		0x7f
/** @defgroup adc_calfact_calfact_d CALFACTD Calibration Factors in differential mode
@{*/
/**@}*/


#define ADC_CALFACT_CALFACT_S_SHIFT		0
#define ADC_CALFACT_CALFACT_S_MASK		0x7f
/** @defgroup adc_calfact_calfact_s CALFACTS Calibration Factors In Single-Ended mode
@{*/
/**@}*/


/**@}*/

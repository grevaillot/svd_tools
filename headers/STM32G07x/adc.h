#pragma once 

/* --- ADC: Analog to Digital Converter instance 1 ------------------ */

/** @defgroup adc_registers Analog to Digital Converter instance
      1 Register
@{*/

/** ADC_ISR ADC interrupt and status register **/
#define ADC_ISR			MMIO32(ADC_BASE + 0x00)
/** ADC_IER ADC interrupt enable register **/
#define ADC_IER			MMIO32(ADC_BASE + 0x04)
/** ADC_CR ADC control register **/
#define ADC_CR			MMIO32(ADC_BASE + 0x08)
/** ADC_CFGR1 ADC configuration register 1 **/
#define ADC_CFGR1			MMIO32(ADC_BASE + 0x0c)
/** ADC_CFGR2 ADC configuration register 2 **/
#define ADC_CFGR2			MMIO32(ADC_BASE + 0x10)
/** ADC_SMPR ADC sampling time register **/
#define ADC_SMPR			MMIO32(ADC_BASE + 0x14)
/** ADC_AWD1TR watchdog threshold register **/
#define ADC_AWD1TR			MMIO32(ADC_BASE + 0x20)
/** ADC_AWD2TR watchdog threshold register **/
#define ADC_AWD2TR			MMIO32(ADC_BASE + 0x24)
/** ADC_CHSELR channel selection register **/
#define ADC_CHSELR			MMIO32(ADC_BASE + 0x28)
/** ADC_CHSELR_1 channel selection register CHSELRMOD = 1 in ADC_CFGR1 **/
#define ADC_CHSELR_1			MMIO32(ADC_BASE + 0x28)
/** ADC_AWD3TR watchdog threshold register **/
#define ADC_AWD3TR			MMIO32(ADC_BASE + 0x2c)
/** ADC_DR ADC group regular conversion data register **/
#define ADC_DR			MMIO32(ADC_BASE + 0x40)
/** ADC_AWD2CR ADC analog watchdog 2 configuration register **/
#define ADC_AWD2CR			MMIO32(ADC_BASE + 0xa0)
/** ADC_AWD3CR ADC analog watchdog 3 configuration register **/
#define ADC_AWD3CR			MMIO32(ADC_BASE + 0xa4)
/** ADC_CALFACT ADC calibration factors register **/
#define ADC_CALFACT			MMIO32(ADC_BASE + 0xb4)
/** ADC_CCR ADC common control register **/
#define ADC_CCR			MMIO32(ADC_BASE + 0x308)
/** ADC_HWCFGR6 Hardware Configuration Register **/
#define ADC_HWCFGR6			MMIO32(ADC_BASE + 0x3d8)
/** ADC_HWCFGR5 Hardware Configuration Register **/
#define ADC_HWCFGR5			MMIO32(ADC_BASE + 0x3dc)
/** ADC_HWCFGR4 Hardware Configuration Register **/
#define ADC_HWCFGR4			MMIO32(ADC_BASE + 0x3e0)
/** ADC_HWCFGR3 Hardware Configuration Register **/
#define ADC_HWCFGR3			MMIO32(ADC_BASE + 0x3e4)
/** ADC_HWCFGR2 Hardware Configuration Register **/
#define ADC_HWCFGR2			MMIO32(ADC_BASE + 0x3e8)
/** ADC_HWCFGR1 Hardware Configuration Register **/
#define ADC_HWCFGR1			MMIO32(ADC_BASE + 0x3ec)
/** ADC_HWCFGR0 Hardware Configuration Register **/
#define ADC_HWCFGR0			MMIO32(ADC_BASE + 0x3f0)
/** ADC_VERR EXTI IP Version register **/
#define ADC_VERR			MMIO32(ADC_BASE + 0x3f4)
/** ADC_IPIDR EXTI Identification register **/
#define ADC_IPIDR			MMIO32(ADC_BASE + 0x3f8)
/** ADC_SIDR EXTI Size ID register **/
#define ADC_SIDR			MMIO32(ADC_BASE + 0x3fc)

/**@}*/


/** @defgroup adc_isr ISR ADC interrupt and status register
@{*/

/** ADC_ISR_CCRDY Channel Configuration Ready flag **/
#define ADC_ISR_CCRDY		(1 << 13)
/** ADC_ISR_EOCAL End Of Calibration flag **/
#define ADC_ISR_EOCAL		(1 << 11)
/** ADC_ISR_AWD3 ADC analog watchdog 3 flag **/
#define ADC_ISR_AWD3		(1 << 9)
/** ADC_ISR_AWD2 ADC analog watchdog 2 flag **/
#define ADC_ISR_AWD2		(1 << 8)
/** ADC_ISR_AWD1 ADC analog watchdog 1 flag **/
#define ADC_ISR_AWD1		(1 << 7)
/** ADC_ISR_OVR ADC group regular overrun flag **/
#define ADC_ISR_OVR		(1 << 4)
/** ADC_ISR_EOS ADC group regular end of sequence conversions flag **/
#define ADC_ISR_EOS		(1 << 3)
/** ADC_ISR_EOC ADC group regular end of unitary conversion flag **/
#define ADC_ISR_EOC		(1 << 2)
/** ADC_ISR_EOSMP ADC group regular end of sampling flag **/
#define ADC_ISR_EOSMP		(1 << 1)
/** ADC_ISR_ADRDY ADC ready flag **/
#define ADC_ISR_ADRDY		(1 << 0)

/**@}*/

/** @defgroup adc_ier IER ADC interrupt enable register
@{*/

/** ADC_IER_CCRDYIE Channel Configuration Ready Interrupt enable **/
#define ADC_IER_CCRDYIE		(1 << 13)
/** ADC_IER_EOCALIE End of calibration interrupt enable **/
#define ADC_IER_EOCALIE		(1 << 11)
/** ADC_IER_AWD3IE ADC analog watchdog 3 interrupt **/
#define ADC_IER_AWD3IE		(1 << 9)
/** ADC_IER_AWD2IE ADC analog watchdog 2 interrupt **/
#define ADC_IER_AWD2IE		(1 << 8)
/** ADC_IER_AWD1IE ADC analog watchdog 1 interrupt **/
#define ADC_IER_AWD1IE		(1 << 7)
/** ADC_IER_OVRIE ADC group regular overrun interrupt **/
#define ADC_IER_OVRIE		(1 << 4)
/** ADC_IER_EOSIE ADC group regular end of sequence conversions interrupt **/
#define ADC_IER_EOSIE		(1 << 3)
/** ADC_IER_EOCIE ADC group regular end of unitary conversion interrupt **/
#define ADC_IER_EOCIE		(1 << 2)
/** ADC_IER_EOSMPIE ADC group regular end of sampling interrupt **/
#define ADC_IER_EOSMPIE		(1 << 1)
/** ADC_IER_ADRDYIE ADC ready interrupt **/
#define ADC_IER_ADRDYIE		(1 << 0)

/**@}*/

/** @defgroup adc_cr CR ADC control register
@{*/

/** ADC_CR_ADCAL ADC calibration **/
#define ADC_CR_ADCAL		(1 << 31)
/** ADC_CR_ADVREGEN ADC voltage regulator enable **/
#define ADC_CR_ADVREGEN		(1 << 28)
/** ADC_CR_ADSTP ADC group regular conversion stop **/
#define ADC_CR_ADSTP		(1 << 4)
/** ADC_CR_ADSTART ADC group regular conversion start **/
#define ADC_CR_ADSTART		(1 << 2)
/** ADC_CR_ADDIS ADC disable **/
#define ADC_CR_ADDIS		(1 << 1)
/** ADC_CR_ADEN ADC enable **/
#define ADC_CR_ADEN		(1 << 0)

/**@}*/

/** @defgroup adc_cfgr1 CFGR1 ADC configuration register 1
@{*/


#define ADC_CFGR1_AWDCH1CH_SHIFT		26
#define ADC_CFGR1_AWDCH1CH_MASK		0x1f
/** @defgroup adc_cfgr1_awdch1ch AWDCH1CH ADC analog watchdog 1 monitored channel selection
@{*/
/**@}*/

/** ADC_CFGR1_AWD1EN ADC analog watchdog 1 enable on scope ADC group regular **/
#define ADC_CFGR1_AWD1EN		(1 << 23)
/** ADC_CFGR1_AWD1SGL ADC analog watchdog 1 monitoring a single channel or all channels **/
#define ADC_CFGR1_AWD1SGL		(1 << 22)
/** ADC_CFGR1_CHSELRMOD Mode selection of the ADC_CHSELR register **/
#define ADC_CFGR1_CHSELRMOD		(1 << 21)
/** ADC_CFGR1_DISCEN ADC group regular sequencer discontinuous mode **/
#define ADC_CFGR1_DISCEN		(1 << 16)
/** ADC_CFGR1_AUTOFF Auto-off mode **/
#define ADC_CFGR1_AUTOFF		(1 << 15)
/** ADC_CFGR1_WAIT Wait conversion mode **/
#define ADC_CFGR1_WAIT		(1 << 14)
/** ADC_CFGR1_CONT ADC group regular continuous conversion mode **/
#define ADC_CFGR1_CONT		(1 << 13)
/** ADC_CFGR1_OVRMOD ADC group regular overrun configuration **/
#define ADC_CFGR1_OVRMOD		(1 << 12)

#define ADC_CFGR1_EXTEN_SHIFT		10
#define ADC_CFGR1_EXTEN_MASK		0x03
/** @defgroup adc_cfgr1_exten EXTEN ADC group regular external trigger polarity
@{*/
/**@}*/


#define ADC_CFGR1_EXTSEL_SHIFT		6
#define ADC_CFGR1_EXTSEL_MASK		0x07
/** @defgroup adc_cfgr1_extsel EXTSEL ADC group regular external trigger source
@{*/
/**@}*/

/** ADC_CFGR1_ALIGN ADC data alignement **/
#define ADC_CFGR1_ALIGN		(1 << 5)

#define ADC_CFGR1_RES_SHIFT		3
#define ADC_CFGR1_RES_MASK		0x03
/** @defgroup adc_cfgr1_res RES ADC data resolution
@{*/
/**@}*/

/** ADC_CFGR1_SCANDIR Scan sequence direction **/
#define ADC_CFGR1_SCANDIR		(1 << 2)
/** ADC_CFGR1_DMACFG ADC DMA transfer configuration **/
#define ADC_CFGR1_DMACFG		(1 << 1)
/** ADC_CFGR1_DMAEN ADC DMA transfer enable **/
#define ADC_CFGR1_DMAEN		(1 << 0)

/**@}*/

/** @defgroup adc_cfgr2 CFGR2 ADC configuration register 2
@{*/


#define ADC_CFGR2_CKMODE_SHIFT		30
#define ADC_CFGR2_CKMODE_MASK		0x03
/** @defgroup adc_cfgr2_ckmode CKMODE ADC clock mode
@{*/
/**@}*/

/** ADC_CFGR2_LFTRIG Low frequency trigger mode enable **/
#define ADC_CFGR2_LFTRIG		(1 << 29)
/** ADC_CFGR2_TOVS ADC oversampling discontinuous mode (triggered mode) for ADC group regular **/
#define ADC_CFGR2_TOVS		(1 << 9)

#define ADC_CFGR2_OVSS_SHIFT		5
#define ADC_CFGR2_OVSS_MASK		0x0f
/** @defgroup adc_cfgr2_ovss OVSS ADC oversampling shift
@{*/
/**@}*/


#define ADC_CFGR2_OVSR_SHIFT		2
#define ADC_CFGR2_OVSR_MASK		0x07
/** @defgroup adc_cfgr2_ovsr OVSR ADC oversampling ratio
@{*/
/**@}*/

/** ADC_CFGR2_OVSE ADC oversampler enable on scope ADC group regular **/
#define ADC_CFGR2_OVSE		(1 << 0)

/**@}*/

/** @defgroup adc_smpr SMPR ADC sampling time register
@{*/


#define ADC_SMPR_SMPSEL_SHIFT		8
#define ADC_SMPR_SMPSEL_MASK		0x7ffff
/** @defgroup adc_smpr_smpsel SMPSEL Channel sampling time selection
@{*/
/**@}*/


#define ADC_SMPR_SMP2_SHIFT		4
#define ADC_SMPR_SMP2_MASK		0x07
/** @defgroup adc_smpr_smp2 SMP2 Sampling time selection
@{*/
/**@}*/


#define ADC_SMPR_SMP1_SHIFT		0
#define ADC_SMPR_SMP1_MASK		0x07
/** @defgroup adc_smpr_smp1 SMP1 Sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd1tr AWD1TR watchdog threshold register
@{*/


#define ADC_AWD1TR_HT1_SHIFT		16
#define ADC_AWD1TR_HT1_MASK		0xfff
/** @defgroup adc_awd1tr_ht1 HT1 ADC analog watchdog 1 threshold high
@{*/
/**@}*/


#define ADC_AWD1TR_LT1_SHIFT		0
#define ADC_AWD1TR_LT1_MASK		0xfff
/** @defgroup adc_awd1tr_lt1 LT1 ADC analog watchdog 1 threshold low
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd2tr AWD2TR watchdog threshold register
@{*/


#define ADC_AWD2TR_HT2_SHIFT		16
#define ADC_AWD2TR_HT2_MASK		0xfff
/** @defgroup adc_awd2tr_ht2 HT2 ADC analog watchdog 2 threshold high
@{*/
/**@}*/


#define ADC_AWD2TR_LT2_SHIFT		0
#define ADC_AWD2TR_LT2_MASK		0xfff
/** @defgroup adc_awd2tr_lt2 LT2 ADC analog watchdog 2 threshold low
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_chselr CHSELR channel selection register
@{*/


#define ADC_CHSELR_CHSEL_SHIFT		0
#define ADC_CHSELR_CHSEL_MASK		0x7ffff
/** @defgroup adc_chselr_chsel CHSEL Channel-x selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_chselr_1 CHSELR1 channel selection register CHSELRMOD = 1 in ADC_CFGR1
@{*/


#define ADC_CHSELR_1_SQ8_SHIFT		28
#define ADC_CHSELR_1_SQ8_MASK		0x0f
/** @defgroup adc_chselr_1_sq8 SQ8 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ7_SHIFT		24
#define ADC_CHSELR_1_SQ7_MASK		0x0f
/** @defgroup adc_chselr_1_sq7 SQ7 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ6_SHIFT		20
#define ADC_CHSELR_1_SQ6_MASK		0x0f
/** @defgroup adc_chselr_1_sq6 SQ6 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ5_SHIFT		16
#define ADC_CHSELR_1_SQ5_MASK		0x0f
/** @defgroup adc_chselr_1_sq5 SQ5 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ4_SHIFT		12
#define ADC_CHSELR_1_SQ4_MASK		0x0f
/** @defgroup adc_chselr_1_sq4 SQ4 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ3_SHIFT		8
#define ADC_CHSELR_1_SQ3_MASK		0x0f
/** @defgroup adc_chselr_1_sq3 SQ3 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ2_SHIFT		4
#define ADC_CHSELR_1_SQ2_MASK		0x0f
/** @defgroup adc_chselr_1_sq2 SQ2 conversion of the sequence
@{*/
/**@}*/


#define ADC_CHSELR_1_SQ1_SHIFT		0
#define ADC_CHSELR_1_SQ1_MASK		0x0f
/** @defgroup adc_chselr_1_sq1 SQ1 conversion of the sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd3tr AWD3TR watchdog threshold register
@{*/


#define ADC_AWD3TR_HT3_SHIFT		16
#define ADC_AWD3TR_HT3_MASK		0xfff
/** @defgroup adc_awd3tr_ht3 HT3 ADC analog watchdog 3 threshold high
@{*/
/**@}*/


#define ADC_AWD3TR_LT3_SHIFT		0
#define ADC_AWD3TR_LT3_MASK		0xfff
/** @defgroup adc_awd3tr_lt3 LT3 ADC analog watchdog 3 threshold high
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_dr DR ADC group regular conversion data register
@{*/


#define ADC_DR_regularDATA_SHIFT		0
#define ADC_DR_regularDATA_MASK		0xffff
/** @defgroup adc_dr_regulardata regularDATA ADC group regular conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd2cr AWD2CR ADC analog watchdog 2 configuration register
@{*/


#define ADC_AWD2CR_AWD2CH_SHIFT		0
#define ADC_AWD2CR_AWD2CH_MASK		0x7ffff
/** @defgroup adc_awd2cr_awd2ch AWD2CH ADC analog watchdog 2 monitored channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_awd3cr AWD3CR ADC analog watchdog 3 configuration register
@{*/


#define ADC_AWD3CR_AWD3CH_SHIFT		0
#define ADC_AWD3CR_AWD3CH_MASK		0x7ffff
/** @defgroup adc_awd3cr_awd3ch AWD3CH ADC analog watchdog 3 monitored channel selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_calfact CALFACT ADC calibration factors register
@{*/


#define ADC_CALFACT_CALFACT_SHIFT		0
#define ADC_CALFACT_CALFACT_MASK		0x7f
/** @defgroup adc_calfact_calfact CALFACT ADC calibration factor in single-ended mode
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ccr CCR ADC common control register
@{*/

/** ADC_CCR_VBATEN VBAT enable **/
#define ADC_CCR_VBATEN		(1 << 24)
/** ADC_CCR_TSEN Temperature sensor enable **/
#define ADC_CCR_TSEN		(1 << 23)
/** ADC_CCR_VREFEN VREFINT enable **/
#define ADC_CCR_VREFEN		(1 << 22)

#define ADC_CCR_PRESC_SHIFT		18
#define ADC_CCR_PRESC_MASK		0x0f
/** @defgroup adc_ccr_presc PRESC ADC prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr6 HWCFGR6 Hardware Configuration Register
@{*/


#define ADC_HWCFGR6_CHMAP23_SHIFT		24
#define ADC_HWCFGR6_CHMAP23_MASK		0x1f
/** @defgroup adc_hwcfgr6_chmap23 CHMAP23 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR6_CHMAP22_SHIFT		16
#define ADC_HWCFGR6_CHMAP22_MASK		0x1f
/** @defgroup adc_hwcfgr6_chmap22 CHMAP22 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR6_CHMAP21_SHIFT		8
#define ADC_HWCFGR6_CHMAP21_MASK		0x1f
/** @defgroup adc_hwcfgr6_chmap21 CHMAP21 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR6_CHMAP20_SHIFT		0
#define ADC_HWCFGR6_CHMAP20_MASK		0x1f
/** @defgroup adc_hwcfgr6_chmap20 CHMAP20 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr5 HWCFGR5 Hardware Configuration Register
@{*/


#define ADC_HWCFGR5_CHMAP16_SHIFT		24
#define ADC_HWCFGR5_CHMAP16_MASK		0x1f
/** @defgroup adc_hwcfgr5_chmap16 CHMAP16 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR5_CHMAP17_SHIFT		16
#define ADC_HWCFGR5_CHMAP17_MASK		0x1f
/** @defgroup adc_hwcfgr5_chmap17 CHMAP17 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR5_CHMAP18_SHIFT		8
#define ADC_HWCFGR5_CHMAP18_MASK		0x1f
/** @defgroup adc_hwcfgr5_chmap18 CHMAP18 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR5_CHMAP19_SHIFT		0
#define ADC_HWCFGR5_CHMAP19_MASK		0x1f
/** @defgroup adc_hwcfgr5_chmap19 CHMAP19 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr4 HWCFGR4 Hardware Configuration Register
@{*/


#define ADC_HWCFGR4_CHMAP12_SHIFT		24
#define ADC_HWCFGR4_CHMAP12_MASK		0x1f
/** @defgroup adc_hwcfgr4_chmap12 CHMAP12 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR4_CHMAP13_SHIFT		16
#define ADC_HWCFGR4_CHMAP13_MASK		0x1f
/** @defgroup adc_hwcfgr4_chmap13 CHMAP13 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR4_CHMAP14_SHIFT		8
#define ADC_HWCFGR4_CHMAP14_MASK		0x1f
/** @defgroup adc_hwcfgr4_chmap14 CHMAP14 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR4_CHMAP15_SHIFT		0
#define ADC_HWCFGR4_CHMAP15_MASK		0x1f
/** @defgroup adc_hwcfgr4_chmap15 CHMAP15 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr3 HWCFGR3 Hardware Configuration Register
@{*/


#define ADC_HWCFGR3_CHMAP8_SHIFT		24
#define ADC_HWCFGR3_CHMAP8_MASK		0x1f
/** @defgroup adc_hwcfgr3_chmap8 CHMAP8 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR3_CHMAP9_SHIFT		16
#define ADC_HWCFGR3_CHMAP9_MASK		0x1f
/** @defgroup adc_hwcfgr3_chmap9 CHMAP9 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR3_CHMAP10_SHIFT		8
#define ADC_HWCFGR3_CHMAP10_MASK		0x1f
/** @defgroup adc_hwcfgr3_chmap10 CHMAP10 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR3_CHMAP11_SHIFT		0
#define ADC_HWCFGR3_CHMAP11_MASK		0x1f
/** @defgroup adc_hwcfgr3_chmap11 CHMAP11 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr2 HWCFGR2 Hardware Configuration Register
@{*/


#define ADC_HWCFGR2_CHMAP4_SHIFT		24
#define ADC_HWCFGR2_CHMAP4_MASK		0x1f
/** @defgroup adc_hwcfgr2_chmap4 CHMAP4 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR2_CHMAP5_SHIFT		16
#define ADC_HWCFGR2_CHMAP5_MASK		0x1f
/** @defgroup adc_hwcfgr2_chmap5 CHMAP5 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR2_CHMAP6_SHIFT		8
#define ADC_HWCFGR2_CHMAP6_MASK		0x1f
/** @defgroup adc_hwcfgr2_chmap6 CHMAP6 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR2_CHMAP7_SHIFT		0
#define ADC_HWCFGR2_CHMAP7_MASK		0x1f
/** @defgroup adc_hwcfgr2_chmap7 CHMAP7 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr1 HWCFGR1 Hardware Configuration Register
@{*/


#define ADC_HWCFGR1_CHMAP0_SHIFT		24
#define ADC_HWCFGR1_CHMAP0_MASK		0x1f
/** @defgroup adc_hwcfgr1_chmap0 CHMAP0 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR1_CHMAP1_SHIFT		16
#define ADC_HWCFGR1_CHMAP1_MASK		0x1f
/** @defgroup adc_hwcfgr1_chmap1 CHMAP1 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR1_CHMAP2_SHIFT		8
#define ADC_HWCFGR1_CHMAP2_MASK		0x1f
/** @defgroup adc_hwcfgr1_chmap2 CHMAP2 Input channel mapping
@{*/
/**@}*/


#define ADC_HWCFGR1_CHMAP3_SHIFT		0
#define ADC_HWCFGR1_CHMAP3_MASK		0x1f
/** @defgroup adc_hwcfgr1_chmap3 CHMAP3 Input channel mapping
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_hwcfgr0 HWCFGR0 Hardware Configuration Register
@{*/


#define ADC_HWCFGR0_OVS_SHIFT		8
#define ADC_HWCFGR0_OVS_MASK		0x0f
/** @defgroup adc_hwcfgr0_ovs OVS Oversampling
@{*/
/**@}*/


#define ADC_HWCFGR0_EXTRA_AWDS_SHIFT		4
#define ADC_HWCFGR0_EXTRA_AWDS_MASK		0x0f
/** @defgroup adc_hwcfgr0_extra_awds EXTRAAWDS Extra analog watchdog
@{*/
/**@}*/


#define ADC_HWCFGR0_NUM_CHAN_24_SHIFT		0
#define ADC_HWCFGR0_NUM_CHAN_24_MASK		0x0f
/** @defgroup adc_hwcfgr0_num_chan_24 NUMCHAN24 NUM_CHAN_24
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_verr VERR EXTI IP Version register
@{*/


#define ADC_VERR_MAJREV_SHIFT		4
#define ADC_VERR_MAJREV_MASK		0x0f
/** @defgroup adc_verr_majrev MAJREV Major Revision number
@{*/
/**@}*/


#define ADC_VERR_MINREV_SHIFT		0
#define ADC_VERR_MINREV_MASK		0x0f
/** @defgroup adc_verr_minrev MINREV Minor Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ipidr IPIDR EXTI Identification register
@{*/


#define ADC_IPIDR_IPID_SHIFT		0
#define ADC_IPIDR_IPID_MASK		0xffffffff
/** @defgroup adc_ipidr_ipid IPID IP Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sidr SIDR EXTI Size ID register
@{*/


#define ADC_SIDR_SID_SHIFT		0
#define ADC_SIDR_SID_MASK		0xffffffff
/** @defgroup adc_sidr_sid SID Size Identification
@{*/
/**@}*/


/**@}*/

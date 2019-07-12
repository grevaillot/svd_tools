#pragma once 

/* --- ADC: Analog-to-digital converter ----------------------------- */

/** @defgroup adc_registers Analog-to-digital converter Register
@{*/

/** ADC_ISR interrupt and status register **/
#define ADC_ISR			MMIO32(ADC_BASE + 0x00)
/** ADC_IER interrupt enable register **/
#define ADC_IER			MMIO32(ADC_BASE + 0x04)
/** ADC_CR control register **/
#define ADC_CR			MMIO32(ADC_BASE + 0x08)
/** ADC_CFGR1 configuration register 1 **/
#define ADC_CFGR1			MMIO32(ADC_BASE + 0x0c)
/** ADC_CFGR2 configuration register 2 **/
#define ADC_CFGR2			MMIO32(ADC_BASE + 0x10)
/** ADC_SMPR sampling time register **/
#define ADC_SMPR			MMIO32(ADC_BASE + 0x14)
/** ADC_TR watchdog threshold register **/
#define ADC_TR			MMIO32(ADC_BASE + 0x20)
/** ADC_CHSELR channel selection register **/
#define ADC_CHSELR			MMIO32(ADC_BASE + 0x28)
/** ADC_DR data register **/
#define ADC_DR			MMIO32(ADC_BASE + 0x40)
/** ADC_CALFACT ADC Calibration factor **/
#define ADC_CALFACT			MMIO32(ADC_BASE + 0xb4)
/** ADC_CCR ADC common configuration register **/
#define ADC_CCR			MMIO32(ADC_BASE + 0x308)

/**@}*/


/** @defgroup adc_isr ISR interrupt and status register
@{*/

/** ADC_ISR_EOCAL End Of Calibration flag **/
#define ADC_ISR_EOCAL		(1 << 11)
/** ADC_ISR_AWD Analog watchdog flag **/
#define ADC_ISR_AWD		(1 << 7)
/** ADC_ISR_OVR ADC overrun **/
#define ADC_ISR_OVR		(1 << 4)
/** ADC_ISR_EOS End of sequence flag **/
#define ADC_ISR_EOS		(1 << 3)
/** ADC_ISR_EOC End of conversion flag **/
#define ADC_ISR_EOC		(1 << 2)
/** ADC_ISR_EOSMP End of sampling flag **/
#define ADC_ISR_EOSMP		(1 << 1)
/** ADC_ISR_ADRDY ADC ready **/
#define ADC_ISR_ADRDY		(1 << 0)

/**@}*/

/** @defgroup adc_ier IER interrupt enable register
@{*/

/** ADC_IER_EOCALIE End of calibration interrupt enable **/
#define ADC_IER_EOCALIE		(1 << 11)
/** ADC_IER_AWDIE Analog watchdog interrupt enable **/
#define ADC_IER_AWDIE		(1 << 7)
/** ADC_IER_OVRIE Overrun interrupt enable **/
#define ADC_IER_OVRIE		(1 << 4)
/** ADC_IER_EOSIE End of conversion sequence interrupt enable **/
#define ADC_IER_EOSIE		(1 << 3)
/** ADC_IER_EOCIE End of conversion interrupt enable **/
#define ADC_IER_EOCIE		(1 << 2)
/** ADC_IER_EOSMPIE End of sampling flag interrupt enable **/
#define ADC_IER_EOSMPIE		(1 << 1)
/** ADC_IER_ADRDYIE ADC ready interrupt enable **/
#define ADC_IER_ADRDYIE		(1 << 0)

/**@}*/

/** @defgroup adc_cr CR control register
@{*/

/** ADC_CR_ADCAL ADC calibration **/
#define ADC_CR_ADCAL		(1 << 31)
/** ADC_CR_ADVREGEN ADC Voltage Regulator Enable **/
#define ADC_CR_ADVREGEN		(1 << 28)
/** ADC_CR_ADSTP ADC stop conversion command **/
#define ADC_CR_ADSTP		(1 << 4)
/** ADC_CR_ADSTART ADC start conversion command **/
#define ADC_CR_ADSTART		(1 << 2)
/** ADC_CR_ADDIS ADC disable command **/
#define ADC_CR_ADDIS		(1 << 1)
/** ADC_CR_ADEN ADC enable command **/
#define ADC_CR_ADEN		(1 << 0)

/**@}*/

/** @defgroup adc_cfgr1 CFGR1 configuration register 1
@{*/


#define ADC_CFGR1_AWDCH_SHIFT		26
#define ADC_CFGR1_AWDCH_MASK		0x1f
/** @defgroup adc_cfgr1_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/

/** ADC_CFGR1_AWDEN Analog watchdog enable **/
#define ADC_CFGR1_AWDEN		(1 << 23)
/** ADC_CFGR1_AWDSGL Enable the watchdog on a single channel or on all channels **/
#define ADC_CFGR1_AWDSGL		(1 << 22)
/** ADC_CFGR1_DISCEN Discontinuous mode **/
#define ADC_CFGR1_DISCEN		(1 << 16)
/** ADC_CFGR1_AUTOFF Auto-off mode **/
#define ADC_CFGR1_AUTOFF		(1 << 15)
/** ADC_CFGR1_AUTDLY Auto-delayed conversion mode **/
#define ADC_CFGR1_AUTDLY		(1 << 14)
/** ADC_CFGR1_CONT Single / continuous conversion mode **/
#define ADC_CFGR1_CONT		(1 << 13)
/** ADC_CFGR1_OVRMOD Overrun management mode **/
#define ADC_CFGR1_OVRMOD		(1 << 12)

#define ADC_CFGR1_EXTEN_SHIFT		10
#define ADC_CFGR1_EXTEN_MASK		0x03
/** @defgroup adc_cfgr1_exten EXTEN External trigger enable and polarity selection
@{*/
/**@}*/


#define ADC_CFGR1_EXTSEL_SHIFT		6
#define ADC_CFGR1_EXTSEL_MASK		0x07
/** @defgroup adc_cfgr1_extsel EXTSEL External trigger selection
@{*/
/**@}*/

/** ADC_CFGR1_ALIGN Data alignment **/
#define ADC_CFGR1_ALIGN		(1 << 5)

#define ADC_CFGR1_RES_SHIFT		3
#define ADC_CFGR1_RES_MASK		0x03
/** @defgroup adc_cfgr1_res RES Data resolution
@{*/
/**@}*/

/** ADC_CFGR1_SCANDIR Scan sequence direction **/
#define ADC_CFGR1_SCANDIR		(1 << 2)
/** ADC_CFGR1_DMACFG Direct memery access configuration **/
#define ADC_CFGR1_DMACFG		(1 << 1)
/** ADC_CFGR1_DMAEN Direct memory access enable **/
#define ADC_CFGR1_DMAEN		(1 << 0)

/**@}*/

/** @defgroup adc_cfgr2 CFGR2 configuration register 2
@{*/


#define ADC_CFGR2_CKMODE_SHIFT		30
#define ADC_CFGR2_CKMODE_MASK		0x03
/** @defgroup adc_cfgr2_ckmode CKMODE ADC clock mode
@{*/
/**@}*/

/** ADC_CFGR2_TOVS Triggered Oversampling **/
#define ADC_CFGR2_TOVS		(1 << 9)

#define ADC_CFGR2_OVSS_SHIFT		5
#define ADC_CFGR2_OVSS_MASK		0x0f
/** @defgroup adc_cfgr2_ovss OVSS Oversampling shift
@{*/
/**@}*/


#define ADC_CFGR2_OVSR_SHIFT		2
#define ADC_CFGR2_OVSR_MASK		0x07
/** @defgroup adc_cfgr2_ovsr OVSR Oversampling ratio
@{*/
/**@}*/

/** ADC_CFGR2_OVSE Oversampler Enable **/
#define ADC_CFGR2_OVSE		(1 << 0)

/**@}*/

/** @defgroup adc_smpr SMPR sampling time register
@{*/


#define ADC_SMPR_SMPR_SHIFT		0
#define ADC_SMPR_SMPR_MASK		0x07
/** @defgroup adc_smpr_smpr SMPR Sampling time selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_tr TR watchdog threshold register
@{*/


#define ADC_TR_HT_SHIFT		16
#define ADC_TR_HT_MASK		0xfff
/** @defgroup adc_tr_ht HT Analog watchdog higher threshold
@{*/
/**@}*/


#define ADC_TR_LT_SHIFT		0
#define ADC_TR_LT_MASK		0xfff
/** @defgroup adc_tr_lt LT Analog watchdog lower threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_chselr CHSELR channel selection register
@{*/

/** ADC_CHSELR_CHSEL18 Channel-x selection **/
#define ADC_CHSELR_CHSEL18		(1 << 18)
/** ADC_CHSELR_CHSEL17 Channel-x selection **/
#define ADC_CHSELR_CHSEL17		(1 << 17)
/** ADC_CHSELR_CHSEL16 Channel-x selection **/
#define ADC_CHSELR_CHSEL16		(1 << 16)
/** ADC_CHSELR_CHSEL15 Channel-x selection **/
#define ADC_CHSELR_CHSEL15		(1 << 15)
/** ADC_CHSELR_CHSEL14 Channel-x selection **/
#define ADC_CHSELR_CHSEL14		(1 << 14)
/** ADC_CHSELR_CHSEL13 Channel-x selection **/
#define ADC_CHSELR_CHSEL13		(1 << 13)
/** ADC_CHSELR_CHSEL12 Channel-x selection **/
#define ADC_CHSELR_CHSEL12		(1 << 12)
/** ADC_CHSELR_CHSEL11 Channel-x selection **/
#define ADC_CHSELR_CHSEL11		(1 << 11)
/** ADC_CHSELR_CHSEL10 Channel-x selection **/
#define ADC_CHSELR_CHSEL10		(1 << 10)
/** ADC_CHSELR_CHSEL9 Channel-x selection **/
#define ADC_CHSELR_CHSEL9		(1 << 9)
/** ADC_CHSELR_CHSEL8 Channel-x selection **/
#define ADC_CHSELR_CHSEL8		(1 << 8)
/** ADC_CHSELR_CHSEL7 Channel-x selection **/
#define ADC_CHSELR_CHSEL7		(1 << 7)
/** ADC_CHSELR_CHSEL6 Channel-x selection **/
#define ADC_CHSELR_CHSEL6		(1 << 6)
/** ADC_CHSELR_CHSEL5 Channel-x selection **/
#define ADC_CHSELR_CHSEL5		(1 << 5)
/** ADC_CHSELR_CHSEL4 Channel-x selection **/
#define ADC_CHSELR_CHSEL4		(1 << 4)
/** ADC_CHSELR_CHSEL3 Channel-x selection **/
#define ADC_CHSELR_CHSEL3		(1 << 3)
/** ADC_CHSELR_CHSEL2 Channel-x selection **/
#define ADC_CHSELR_CHSEL2		(1 << 2)
/** ADC_CHSELR_CHSEL1 Channel-x selection **/
#define ADC_CHSELR_CHSEL1		(1 << 1)
/** ADC_CHSELR_CHSEL0 Channel-x selection **/
#define ADC_CHSELR_CHSEL0		(1 << 0)

/**@}*/

/** @defgroup adc_dr DR data register
@{*/


#define ADC_DR_DATA_SHIFT		0
#define ADC_DR_DATA_MASK		0xffff
/** @defgroup adc_dr_data DATA Converted data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_calfact CALFACT ADC Calibration factor
@{*/


#define ADC_CALFACT_CALFACT_SHIFT		0
#define ADC_CALFACT_CALFACT_MASK		0x7f
/** @defgroup adc_calfact_calfact CALFACT Calibration factor
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ccr CCR ADC common configuration register
@{*/

/** ADC_CCR_LFMEN Low Frequency Mode enable **/
#define ADC_CCR_LFMEN		(1 << 25)
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

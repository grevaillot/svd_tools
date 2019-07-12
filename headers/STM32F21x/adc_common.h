#pragma once 

/* --- ADC_Common: Common ADC registers ----------------------------- */

/** @defgroup adc_common_registers Common ADC registers Register
@{*/

/** ADC_Common_CSR ADC Common status register **/
#define ADC_Common_CSR			MMIO32(ADC_Common_BASE + 0x00)
/** ADC_Common_CCR ADC common control register **/
#define ADC_Common_CCR			MMIO32(ADC_Common_BASE + 0x04)
/** ADC_Common_CDR ADC common regular data register for dual and triple modes **/
#define ADC_Common_CDR			MMIO32(ADC_Common_BASE + 0x08)

/**@}*/


/** @defgroup adc_common_csr CSR ADC Common status register
@{*/

/** ADC_Common_CSR_OVR3 Overrun flag of ADC3 **/
#define ADC_Common_CSR_OVR3		(1 << 21)
/** ADC_Common_CSR_STRT3 Regular channel Start flag of ADC 3 **/
#define ADC_Common_CSR_STRT3		(1 << 20)
/** ADC_Common_CSR_JSTRT3 Injected channel Start flag of ADC 3 **/
#define ADC_Common_CSR_JSTRT3		(1 << 19)
/** ADC_Common_CSR_JEOC3 Injected channel end of conversion of ADC 3 **/
#define ADC_Common_CSR_JEOC3		(1 << 18)
/** ADC_Common_CSR_EOC3 End of conversion of ADC 3 **/
#define ADC_Common_CSR_EOC3		(1 << 17)
/** ADC_Common_CSR_AWD3 Analog watchdog flag of ADC 3 **/
#define ADC_Common_CSR_AWD3		(1 << 16)
/** ADC_Common_CSR_OVR2 Overrun flag of ADC 2 **/
#define ADC_Common_CSR_OVR2		(1 << 13)
/** ADC_Common_CSR_STRT2 Regular channel Start flag of ADC 2 **/
#define ADC_Common_CSR_STRT2		(1 << 12)
/** ADC_Common_CSR_JSTRT2 Injected channel Start flag of ADC 2 **/
#define ADC_Common_CSR_JSTRT2		(1 << 11)
/** ADC_Common_CSR_JEOC2 Injected channel end of conversion of ADC 2 **/
#define ADC_Common_CSR_JEOC2		(1 << 10)
/** ADC_Common_CSR_EOC2 End of conversion of ADC 2 **/
#define ADC_Common_CSR_EOC2		(1 << 9)
/** ADC_Common_CSR_AWD2 Analog watchdog flag of ADC 2 **/
#define ADC_Common_CSR_AWD2		(1 << 8)
/** ADC_Common_CSR_OVR1 Overrun flag of ADC 1 **/
#define ADC_Common_CSR_OVR1		(1 << 5)
/** ADC_Common_CSR_STRT1 Regular channel Start flag of ADC 1 **/
#define ADC_Common_CSR_STRT1		(1 << 4)
/** ADC_Common_CSR_JSTRT1 Injected channel Start flag of ADC 1 **/
#define ADC_Common_CSR_JSTRT1		(1 << 3)
/** ADC_Common_CSR_JEOC1 Injected channel end of conversion of ADC 1 **/
#define ADC_Common_CSR_JEOC1		(1 << 2)
/** ADC_Common_CSR_EOC1 End of conversion of ADC 1 **/
#define ADC_Common_CSR_EOC1		(1 << 1)
/** ADC_Common_CSR_AWD1 Analog watchdog flag of ADC 1 **/
#define ADC_Common_CSR_AWD1		(1 << 0)

/**@}*/

/** @defgroup adc_common_ccr CCR ADC common control register
@{*/

/** ADC_Common_CCR_TSVREFE Temperature sensor and VREFINT enable **/
#define ADC_Common_CCR_TSVREFE		(1 << 23)
/** ADC_Common_CCR_VBATE VBAT enable **/
#define ADC_Common_CCR_VBATE		(1 << 22)

#define ADC_Common_CCR_ADCPRE_SHIFT		16
#define ADC_Common_CCR_ADCPRE_MASK		0x03
/** @defgroup adc_common_ccr_adcpre ADCPRE ADC prescaler
@{*/
/**@}*/


#define ADC_Common_CCR_DMA_SHIFT		14
#define ADC_Common_CCR_DMA_MASK		0x03
/** @defgroup adc_common_ccr_dma DMA Direct memory access mode for multi ADC mode
@{*/
/**@}*/

/** ADC_Common_CCR_DDS DMA disable selection for multi-ADC mode **/
#define ADC_Common_CCR_DDS		(1 << 13)

#define ADC_Common_CCR_DELAY_SHIFT		8
#define ADC_Common_CCR_DELAY_MASK		0x0f
/** @defgroup adc_common_ccr_delay DELAY Delay between 2 sampling phases
@{*/
/**@}*/


#define ADC_Common_CCR_MULT_SHIFT		0
#define ADC_Common_CCR_MULT_MASK		0x1f
/** @defgroup adc_common_ccr_mult MULT Multi ADC mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_common_cdr CDR ADC common regular data register for dual and triple modes
@{*/


#define ADC_Common_CDR_DATA2_SHIFT		16
#define ADC_Common_CDR_DATA2_MASK		0xffff
/** @defgroup adc_common_cdr_data2 DATA2 2nd data item of a pair of regular conversions
@{*/
/**@}*/


#define ADC_Common_CDR_DATA1_SHIFT		0
#define ADC_Common_CDR_DATA1_MASK		0xffff
/** @defgroup adc_common_cdr_data1 DATA1 1st data item of a pair of regular conversions
@{*/
/**@}*/


/**@}*/

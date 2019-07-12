#pragma once 

/* --- C_ADC: Common ADC registers ---------------------------------- */

/** @defgroup c_adc_registers Common ADC registers Register
@{*/

/** C_ADC_CSR ADC Common status register **/
#define C_ADC_CSR			MMIO32(C_ADC_BASE + 0x00)
/** C_ADC_CCR ADC common control register **/
#define C_ADC_CCR			MMIO32(C_ADC_BASE + 0x04)
/** C_ADC_CDR ADC common regular data register for dual and triple modes **/
#define C_ADC_CDR			MMIO32(C_ADC_BASE + 0x08)

/**@}*/


/** @defgroup c_adc_csr CSR ADC Common status register
@{*/

/** C_ADC_CSR_OVR3 Overrun flag of ADC3 **/
#define C_ADC_CSR_OVR3		(1 << 21)
/** C_ADC_CSR_STRT3 Regular channel Start flag of ADC 3 **/
#define C_ADC_CSR_STRT3		(1 << 20)
/** C_ADC_CSR_JSTRT3 Injected channel Start flag of ADC 3 **/
#define C_ADC_CSR_JSTRT3		(1 << 19)
/** C_ADC_CSR_JEOC3 Injected channel end of conversion of ADC 3 **/
#define C_ADC_CSR_JEOC3		(1 << 18)
/** C_ADC_CSR_EOC3 End of conversion of ADC 3 **/
#define C_ADC_CSR_EOC3		(1 << 17)
/** C_ADC_CSR_AWD3 Analog watchdog flag of ADC 3 **/
#define C_ADC_CSR_AWD3		(1 << 16)
/** C_ADC_CSR_OVR2 Overrun flag of ADC 2 **/
#define C_ADC_CSR_OVR2		(1 << 13)
/** C_ADC_CSR_STRT2 Regular channel Start flag of ADC 2 **/
#define C_ADC_CSR_STRT2		(1 << 12)
/** C_ADC_CSR_JSTRT2 Injected channel Start flag of ADC 2 **/
#define C_ADC_CSR_JSTRT2		(1 << 11)
/** C_ADC_CSR_JEOC2 Injected channel end of conversion of ADC 2 **/
#define C_ADC_CSR_JEOC2		(1 << 10)
/** C_ADC_CSR_EOC2 End of conversion of ADC 2 **/
#define C_ADC_CSR_EOC2		(1 << 9)
/** C_ADC_CSR_AWD2 Analog watchdog flag of ADC 2 **/
#define C_ADC_CSR_AWD2		(1 << 8)
/** C_ADC_CSR_OVR1 Overrun flag of ADC 1 **/
#define C_ADC_CSR_OVR1		(1 << 5)
/** C_ADC_CSR_STRT1 Regular channel Start flag of ADC 1 **/
#define C_ADC_CSR_STRT1		(1 << 4)
/** C_ADC_CSR_JSTRT1 Injected channel Start flag of ADC 1 **/
#define C_ADC_CSR_JSTRT1		(1 << 3)
/** C_ADC_CSR_JEOC1 Injected channel end of conversion of ADC 1 **/
#define C_ADC_CSR_JEOC1		(1 << 2)
/** C_ADC_CSR_EOC1 End of conversion of ADC 1 **/
#define C_ADC_CSR_EOC1		(1 << 1)
/** C_ADC_CSR_AWD1 Analog watchdog flag of ADC 1 **/
#define C_ADC_CSR_AWD1		(1 << 0)

/**@}*/

/** @defgroup c_adc_ccr CCR ADC common control register
@{*/

/** C_ADC_CCR_TSVREFE Temperature sensor and VREFINT enable **/
#define C_ADC_CCR_TSVREFE		(1 << 23)
/** C_ADC_CCR_VBATE VBAT enable **/
#define C_ADC_CCR_VBATE		(1 << 22)

#define C_ADC_CCR_ADCPRE_SHIFT		16
#define C_ADC_CCR_ADCPRE_MASK		0x03
/** @defgroup c_adc_ccr_adcpre ADCPRE ADC prescaler
@{*/
/**@}*/


#define C_ADC_CCR_DMA_SHIFT		14
#define C_ADC_CCR_DMA_MASK		0x03
/** @defgroup c_adc_ccr_dma DMA Direct memory access mode for multi ADC mode
@{*/
/**@}*/

/** C_ADC_CCR_DDS DMA disable selection for multi-ADC mode **/
#define C_ADC_CCR_DDS		(1 << 13)

#define C_ADC_CCR_DELAY_SHIFT		8
#define C_ADC_CCR_DELAY_MASK		0x0f
/** @defgroup c_adc_ccr_delay DELAY Delay between 2 sampling phases
@{*/
/**@}*/


#define C_ADC_CCR_MULT_SHIFT		0
#define C_ADC_CCR_MULT_MASK		0x1f
/** @defgroup c_adc_ccr_mult MULT Multi ADC mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup c_adc_cdr CDR ADC common regular data register for dual and triple modes
@{*/


#define C_ADC_CDR_DATA2_SHIFT		16
#define C_ADC_CDR_DATA2_MASK		0xffff
/** @defgroup c_adc_cdr_data2 DATA2 2nd data item of a pair of regular conversions
@{*/
/**@}*/


#define C_ADC_CDR_DATA1_SHIFT		0
#define C_ADC_CDR_DATA1_MASK		0xffff
/** @defgroup c_adc_cdr_data1 DATA1 1st data item of a pair of regular conversions
@{*/
/**@}*/


/**@}*/

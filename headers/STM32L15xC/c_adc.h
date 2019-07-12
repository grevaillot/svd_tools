#pragma once 

/* --- C_ADC: Common ADC registers ---------------------------------- */

/** @defgroup c_adc_registers Common ADC registers Register
@{*/

/** C_ADC_CSR ADC Common status register **/
#define C_ADC_CSR			MMIO32(C_ADC_BASE + 0x00)
/** C_ADC_CCR ADC common control register **/
#define C_ADC_CCR			MMIO32(C_ADC_BASE + 0x04)

/**@}*/


/** @defgroup c_adc_csr CSR ADC Common status register
@{*/

/** C_ADC_CSR_ADONS1 ADON Status of ADC **/
#define C_ADC_CSR_ADONS1		(1 << 6)
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

#define C_ADC_CCR_ADCPRE_SHIFT		16
#define C_ADC_CCR_ADCPRE_MASK		0x03
/** @defgroup c_adc_ccr_adcpre ADCPRE ADC prescaler
@{*/
/**@}*/


/**@}*/

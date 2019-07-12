#pragma once 

/* --- ADC_Common: ADC common registers ----------------------------- */

/** @defgroup adc_common_registers ADC common registers Register
@{*/

/** ADC_Common_ADC1_CSR ADC Common status register **/
#define ADC_Common_ADC1_CSR			MMIO32(ADC_Common_BASE + 0x00)
/** ADC_Common_ADC1_CCR ADC common control register **/
#define ADC_Common_ADC1_CCR			MMIO32(ADC_Common_BASE + 0x08)
/** ADC_Common_ADC1_CDR ADC common regular data register for dual mode **/
#define ADC_Common_ADC1_CDR			MMIO32(ADC_Common_BASE + 0x0c)

/**@}*/


/** @defgroup adc_common_adc1_csr ADC1CSR ADC Common status register
@{*/

/** ADC_Common_ADC1_CSR_JQOVF_SLV Injected Context Queue Overflow flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_JQOVF_SLV		(1 << 26)
/** ADC_Common_ADC1_CSR_AWD3_SLV Analog watchdog 3 flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_AWD3_SLV		(1 << 25)
/** ADC_Common_ADC1_CSR_AWD2_SLV Analog watchdog 2 flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_AWD2_SLV		(1 << 24)
/** ADC_Common_ADC1_CSR_AWD1_SLV Analog watchdog 1 flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_AWD1_SLV		(1 << 23)
/** ADC_Common_ADC1_CSR_JEOS_SLV End of injected sequence flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_JEOS_SLV		(1 << 22)
/** ADC_Common_ADC1_CSR_JEOC_SLV End of injected conversion flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_JEOC_SLV		(1 << 21)
/** ADC_Common_ADC1_CSR_OVR_SLV Overrun flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_OVR_SLV		(1 << 20)
/** ADC_Common_ADC1_CSR_EOS_SLV End of regular sequence flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_EOS_SLV		(1 << 19)
/** ADC_Common_ADC1_CSR_EOC_SLV End of regular conversion of the slave ADC **/
#define ADC_Common_ADC1_CSR_EOC_SLV		(1 << 18)
/** ADC_Common_ADC1_CSR_EOSMP_SLV End of Sampling phase flag of the slave ADC **/
#define ADC_Common_ADC1_CSR_EOSMP_SLV		(1 << 17)
/** ADC_Common_ADC1_CSR_ADRDY_SLV Slave ADC ready **/
#define ADC_Common_ADC1_CSR_ADRDY_SLV		(1 << 16)
/** ADC_Common_ADC1_CSR_JQOVF_MST Injected Context Queue Overflow flag of the master ADC **/
#define ADC_Common_ADC1_CSR_JQOVF_MST		(1 << 10)
/** ADC_Common_ADC1_CSR_AWD3_MST Analog watchdog 3 flag of the master ADC **/
#define ADC_Common_ADC1_CSR_AWD3_MST		(1 << 9)
/** ADC_Common_ADC1_CSR_AWD2_MST Analog watchdog 2 flag of the master ADC **/
#define ADC_Common_ADC1_CSR_AWD2_MST		(1 << 8)
/** ADC_Common_ADC1_CSR_AWD1_MST Analog watchdog 1 flag of the master ADC **/
#define ADC_Common_ADC1_CSR_AWD1_MST		(1 << 7)
/** ADC_Common_ADC1_CSR_JEOS_MST End of injected sequence flag of the master ADC **/
#define ADC_Common_ADC1_CSR_JEOS_MST		(1 << 6)
/** ADC_Common_ADC1_CSR_JEOC_MST End of injected conversion flag of the master ADC **/
#define ADC_Common_ADC1_CSR_JEOC_MST		(1 << 5)
/** ADC_Common_ADC1_CSR_OVR_MST Overrun flag of the master ADC **/
#define ADC_Common_ADC1_CSR_OVR_MST		(1 << 4)
/** ADC_Common_ADC1_CSR_EOS_MST End of regular sequence flag of the master ADC **/
#define ADC_Common_ADC1_CSR_EOS_MST		(1 << 3)
/** ADC_Common_ADC1_CSR_EOC_MST End of regular conversion of the master ADC **/
#define ADC_Common_ADC1_CSR_EOC_MST		(1 << 2)
/** ADC_Common_ADC1_CSR_EOSMP_MST End of Sampling phase flag of the master ADC **/
#define ADC_Common_ADC1_CSR_EOSMP_MST		(1 << 1)
/** ADC_Common_ADC1_CSR_ADRDY_MST Master ADC ready **/
#define ADC_Common_ADC1_CSR_ADRDY_MST		(1 << 0)

/**@}*/

/** @defgroup adc_common_adc1_ccr ADC1CCR ADC common control register
@{*/

/** ADC_Common_ADC1_CCR_VBATEN VBAT enable **/
#define ADC_Common_ADC1_CCR_VBATEN		(1 << 24)
/** ADC_Common_ADC1_CCR_TSEN Temperature sensor enable **/
#define ADC_Common_ADC1_CCR_TSEN		(1 << 23)
/** ADC_Common_ADC1_CCR_VREFEN VREFINT enable **/
#define ADC_Common_ADC1_CCR_VREFEN		(1 << 22)

#define ADC_Common_ADC1_CCR_CKMODE_SHIFT		16
#define ADC_Common_ADC1_CCR_CKMODE_MASK		0x03
/** @defgroup adc_common_adc1_ccr_ckmode CKMODE ADC clock mode
@{*/
/**@}*/


#define ADC_Common_ADC1_CCR_MDMA_SHIFT		14
#define ADC_Common_ADC1_CCR_MDMA_MASK		0x03
/** @defgroup adc_common_adc1_ccr_mdma MDMA Direct memory access mode for dual ADC mode
@{*/
/**@}*/

/** ADC_Common_ADC1_CCR_DMACFG DMA configuration (for dual ADC mode) **/
#define ADC_Common_ADC1_CCR_DMACFG		(1 << 13)

#define ADC_Common_ADC1_CCR_DELAY_SHIFT		8
#define ADC_Common_ADC1_CCR_DELAY_MASK		0x0f
/** @defgroup adc_common_adc1_ccr_delay DELAY Delay between 2 sampling phases
@{*/
/**@}*/


#define ADC_Common_ADC1_CCR_DUAL_SHIFT		0
#define ADC_Common_ADC1_CCR_DUAL_MASK		0x1f
/** @defgroup adc_common_adc1_ccr_dual DUAL Dual ADC mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_common_adc1_cdr ADC1CDR ADC common regular data register for dual mode
@{*/


#define ADC_Common_ADC1_CDR_RDATA_SLV_SHIFT		16
#define ADC_Common_ADC1_CDR_RDATA_SLV_MASK		0xffff
/** @defgroup adc_common_adc1_cdr_rdata_slv RDATASLV Regular data of the slave ADC
@{*/
/**@}*/


#define ADC_Common_ADC1_CDR_RDATA_MST_SHIFT		0
#define ADC_Common_ADC1_CDR_RDATA_MST_MASK		0xffff
/** @defgroup adc_common_adc1_cdr_rdata_mst RDATAMST Regular data of the master ADC
@{*/
/**@}*/


/**@}*/

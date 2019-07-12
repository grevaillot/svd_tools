#pragma once 

/* --- ADC3_Common: Analog-to-Digital Converter --------------------- */

/** @defgroup adc3_common_registers Analog-to-Digital Converter Register
@{*/

/** ADC3_Common_CSR ADC Common status register **/
#define ADC3_Common_CSR			MMIO32(ADC3_Common_BASE + 0x00)
/** ADC3_Common_CCR ADC common control register **/
#define ADC3_Common_CCR			MMIO32(ADC3_Common_BASE + 0x08)
/** ADC3_Common_CDR ADC common regular data register for dual and triple modes **/
#define ADC3_Common_CDR			MMIO32(ADC3_Common_BASE + 0x0c)

/**@}*/


/** @defgroup adc3_common_csr CSR ADC Common status register
@{*/

/** ADC3_Common_CSR_JQOVF_SLV Injected Context Queue Overflow flag of the slave ADC **/
#define ADC3_Common_CSR_JQOVF_SLV		(1 << 26)
/** ADC3_Common_CSR_AWD3_SLV Analog watchdog 3 flag of the slave ADC **/
#define ADC3_Common_CSR_AWD3_SLV		(1 << 25)
/** ADC3_Common_CSR_AWD2_SLV Analog watchdog 2 flag of the slave ADC **/
#define ADC3_Common_CSR_AWD2_SLV		(1 << 24)
/** ADC3_Common_CSR_AWD1_SLV Analog watchdog 1 flag of the slave ADC **/
#define ADC3_Common_CSR_AWD1_SLV		(1 << 23)
/** ADC3_Common_CSR_JEOS_SLV End of injected sequence flag of the slave ADC **/
#define ADC3_Common_CSR_JEOS_SLV		(1 << 22)
/** ADC3_Common_CSR_JEOC_SLV End of injected conversion flag of the slave ADC **/
#define ADC3_Common_CSR_JEOC_SLV		(1 << 21)
/** ADC3_Common_CSR_OVR_SLV Overrun flag of the slave ADC **/
#define ADC3_Common_CSR_OVR_SLV		(1 << 20)
/** ADC3_Common_CSR_EOS_SLV End of regular sequence flag of the slave ADC **/
#define ADC3_Common_CSR_EOS_SLV		(1 << 19)
/** ADC3_Common_CSR_EOC_SLV End of regular conversion of the slave ADC **/
#define ADC3_Common_CSR_EOC_SLV		(1 << 18)
/** ADC3_Common_CSR_EOSMP_SLV End of Sampling phase flag of the slave ADC **/
#define ADC3_Common_CSR_EOSMP_SLV		(1 << 17)
/** ADC3_Common_CSR_ADRDY_SLV Slave ADC ready **/
#define ADC3_Common_CSR_ADRDY_SLV		(1 << 16)
/** ADC3_Common_CSR_JQOVF_MST Injected Context Queue Overflow flag of the master ADC **/
#define ADC3_Common_CSR_JQOVF_MST		(1 << 10)
/** ADC3_Common_CSR_AWD3_MST Analog watchdog 3 flag of the master ADC **/
#define ADC3_Common_CSR_AWD3_MST		(1 << 9)
/** ADC3_Common_CSR_AWD2_MST Analog watchdog 2 flag of the master ADC **/
#define ADC3_Common_CSR_AWD2_MST		(1 << 8)
/** ADC3_Common_CSR_AWD1_MST Analog watchdog 1 flag of the master ADC **/
#define ADC3_Common_CSR_AWD1_MST		(1 << 7)
/** ADC3_Common_CSR_JEOS_MST End of injected sequence flag of the master ADC **/
#define ADC3_Common_CSR_JEOS_MST		(1 << 6)
/** ADC3_Common_CSR_JEOC_MST End of injected conversion flag of the master ADC **/
#define ADC3_Common_CSR_JEOC_MST		(1 << 5)
/** ADC3_Common_CSR_OVR_MST Overrun flag of the master ADC **/
#define ADC3_Common_CSR_OVR_MST		(1 << 4)
/** ADC3_Common_CSR_EOS_MST End of regular sequence flag of the master ADC **/
#define ADC3_Common_CSR_EOS_MST		(1 << 3)
/** ADC3_Common_CSR_EOC_MST End of regular conversion of the master ADC **/
#define ADC3_Common_CSR_EOC_MST		(1 << 2)
/** ADC3_Common_CSR_EOSMP_MST End of Sampling phase flag of the master ADC **/
#define ADC3_Common_CSR_EOSMP_MST		(1 << 1)
/** ADC3_Common_CSR_ADRDY_MST Master ADC ready **/
#define ADC3_Common_CSR_ADRDY_MST		(1 << 0)

/**@}*/

/** @defgroup adc3_common_ccr CCR ADC common control register
@{*/

/** ADC3_Common_CCR_VBATEN VBAT enable **/
#define ADC3_Common_CCR_VBATEN		(1 << 24)
/** ADC3_Common_CCR_TSEN Temperature sensor enable **/
#define ADC3_Common_CCR_TSEN		(1 << 23)
/** ADC3_Common_CCR_VREFEN VREFINT enable **/
#define ADC3_Common_CCR_VREFEN		(1 << 22)

#define ADC3_Common_CCR_PRESC_SHIFT		18
#define ADC3_Common_CCR_PRESC_MASK		0x0f
/** @defgroup adc3_common_ccr_presc PRESC ADC prescaler
@{*/
/**@}*/


#define ADC3_Common_CCR_CKMODE_SHIFT		16
#define ADC3_Common_CCR_CKMODE_MASK		0x03
/** @defgroup adc3_common_ccr_ckmode CKMODE ADC clock mode
@{*/
/**@}*/


#define ADC3_Common_CCR_DAMDF_SHIFT		14
#define ADC3_Common_CCR_DAMDF_MASK		0x03
/** @defgroup adc3_common_ccr_damdf DAMDF Dual ADC Mode Data Format
@{*/
/**@}*/


#define ADC3_Common_CCR_DELAY_SHIFT		8
#define ADC3_Common_CCR_DELAY_MASK		0x0f
/** @defgroup adc3_common_ccr_delay DELAY Delay between 2 sampling phases
@{*/
/**@}*/


#define ADC3_Common_CCR_DUAL_SHIFT		0
#define ADC3_Common_CCR_DUAL_MASK		0x1f
/** @defgroup adc3_common_ccr_dual DUAL Dual ADC mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_common_cdr CDR ADC common regular data register for dual and triple modes
@{*/


#define ADC3_Common_CDR_RDATA_SLV_SHIFT		16
#define ADC3_Common_CDR_RDATA_SLV_MASK		0xffff
/** @defgroup adc3_common_cdr_rdata_slv RDATASLV Regular data of the slave ADC
@{*/
/**@}*/


#define ADC3_Common_CDR_RDATA_MST_SHIFT		0
#define ADC3_Common_CDR_RDATA_MST_MASK		0xffff
/** @defgroup adc3_common_cdr_rdata_mst RDATAMST Regular data of the master ADC
@{*/
/**@}*/


/**@}*/

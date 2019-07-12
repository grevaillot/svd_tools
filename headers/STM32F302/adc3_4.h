#pragma once 

/* --- ADC3_4: Analog-to-Digital Converter -------------------------- */

/** @defgroup adc3_4_registers Analog-to-Digital Converter Register
@{*/

/** ADC3_4_CSR ADC Common status register **/
#define ADC3_4_CSR			MMIO32(ADC3_4_BASE + 0x00)
/** ADC3_4_CCR ADC common control register **/
#define ADC3_4_CCR			MMIO32(ADC3_4_BASE + 0x08)
/** ADC3_4_CDR ADC common regular data register for dual and triple modes **/
#define ADC3_4_CDR			MMIO32(ADC3_4_BASE + 0x0c)

/**@}*/


/** @defgroup adc3_4_csr CSR ADC Common status register
@{*/

/** ADC3_4_CSR_JQOVF_SLV Injected Context Queue Overflow flag of the slave ADC **/
#define ADC3_4_CSR_JQOVF_SLV		(1 << 26)
/** ADC3_4_CSR_AWD3_SLV Analog watchdog 3 flag of the slave ADC **/
#define ADC3_4_CSR_AWD3_SLV		(1 << 25)
/** ADC3_4_CSR_AWD2_SLV Analog watchdog 2 flag of the slave ADC **/
#define ADC3_4_CSR_AWD2_SLV		(1 << 24)
/** ADC3_4_CSR_AWD1_SLV Analog watchdog 1 flag of the slave ADC **/
#define ADC3_4_CSR_AWD1_SLV		(1 << 23)
/** ADC3_4_CSR_JEOS_SLV End of injected sequence flag of the slave ADC **/
#define ADC3_4_CSR_JEOS_SLV		(1 << 22)
/** ADC3_4_CSR_JEOC_SLV End of injected conversion flag of the slave ADC **/
#define ADC3_4_CSR_JEOC_SLV		(1 << 21)
/** ADC3_4_CSR_OVR_SLV Overrun flag of the slave ADC **/
#define ADC3_4_CSR_OVR_SLV		(1 << 20)
/** ADC3_4_CSR_EOS_SLV End of regular sequence flag of the slave ADC **/
#define ADC3_4_CSR_EOS_SLV		(1 << 19)
/** ADC3_4_CSR_EOC_SLV End of regular conversion of the slave ADC **/
#define ADC3_4_CSR_EOC_SLV		(1 << 18)
/** ADC3_4_CSR_EOSMP_SLV EOSMP_SLV **/
#define ADC3_4_CSR_EOSMP_SLV		(1 << 17)
/** ADC3_4_CSR_ADRDY_SLV ADRDY_SLV **/
#define ADC3_4_CSR_ADRDY_SLV		(1 << 16)
/** ADC3_4_CSR_JQOVF_MST JQOVF_MST **/
#define ADC3_4_CSR_JQOVF_MST		(1 << 10)
/** ADC3_4_CSR_AWD3_MST AWD3_MST **/
#define ADC3_4_CSR_AWD3_MST		(1 << 9)
/** ADC3_4_CSR_AWD2_MST AWD2_MST **/
#define ADC3_4_CSR_AWD2_MST		(1 << 8)
/** ADC3_4_CSR_AWD1_MST AWD1_MST **/
#define ADC3_4_CSR_AWD1_MST		(1 << 7)
/** ADC3_4_CSR_JEOS_MST JEOS_MST **/
#define ADC3_4_CSR_JEOS_MST		(1 << 6)
/** ADC3_4_CSR_JEOC_MST JEOC_MST **/
#define ADC3_4_CSR_JEOC_MST		(1 << 5)
/** ADC3_4_CSR_OVR_MST OVR_MST **/
#define ADC3_4_CSR_OVR_MST		(1 << 4)
/** ADC3_4_CSR_EOS_MST EOS_MST **/
#define ADC3_4_CSR_EOS_MST		(1 << 3)
/** ADC3_4_CSR_EOC_MST EOC_MST **/
#define ADC3_4_CSR_EOC_MST		(1 << 2)
/** ADC3_4_CSR_EOSMP_MST EOSMP_MST **/
#define ADC3_4_CSR_EOSMP_MST		(1 << 1)
/** ADC3_4_CSR_ADDRDY_MST ADDRDY_MST **/
#define ADC3_4_CSR_ADDRDY_MST		(1 << 0)

/**@}*/

/** @defgroup adc3_4_ccr CCR ADC common control register
@{*/

/** ADC3_4_CCR_VBATEN VBAT enable **/
#define ADC3_4_CCR_VBATEN		(1 << 24)
/** ADC3_4_CCR_TSEN Temperature sensor enable **/
#define ADC3_4_CCR_TSEN		(1 << 23)
/** ADC3_4_CCR_VREFEN VREFINT enable **/
#define ADC3_4_CCR_VREFEN		(1 << 22)

#define ADC3_4_CCR_CKMODE_SHIFT		16
#define ADC3_4_CCR_CKMODE_MASK		0x03
/** @defgroup adc3_4_ccr_ckmode CKMODE ADC clock mode
@{*/
/**@}*/


#define ADC3_4_CCR_MDMA_SHIFT		14
#define ADC3_4_CCR_MDMA_MASK		0x03
/** @defgroup adc3_4_ccr_mdma MDMA Direct memory access mode for multi ADC mode
@{*/
/**@}*/

/** ADC3_4_CCR_DMACFG DMA configuration (for multi-ADC mode) **/
#define ADC3_4_CCR_DMACFG		(1 << 13)

#define ADC3_4_CCR_DELAY_SHIFT		8
#define ADC3_4_CCR_DELAY_MASK		0x0f
/** @defgroup adc3_4_ccr_delay DELAY Delay between 2 sampling phases
@{*/
/**@}*/


#define ADC3_4_CCR_MULT_SHIFT		0
#define ADC3_4_CCR_MULT_MASK		0x1f
/** @defgroup adc3_4_ccr_mult MULT Multi ADC mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc3_4_cdr CDR ADC common regular data register for dual and triple modes
@{*/


#define ADC3_4_CDR_RDATA_SLV_SHIFT		16
#define ADC3_4_CDR_RDATA_SLV_MASK		0xffff
/** @defgroup adc3_4_cdr_rdata_slv RDATASLV Regular data of the slave ADC
@{*/
/**@}*/


#define ADC3_4_CDR_RDATA_MST_SHIFT		0
#define ADC3_4_CDR_RDATA_MST_MASK		0xffff
/** @defgroup adc3_4_cdr_rdata_mst RDATAMST Regular data of the master ADC
@{*/
/**@}*/


/**@}*/

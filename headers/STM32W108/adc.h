#pragma once 

/* --- ADC: Analog to Digital Converter ----------------------------- */

/** @defgroup adc_registers Analog to Digital Converter Register
@{*/

/** ADC_ADC_ISR ADC interrupt status register **/
#define ADC_ADC_ISR			MMIO32(ADC_BASE + 0x00)
/** ADC_ADC_IER ADC interrupt enable register **/
#define ADC_ADC_IER			MMIO32(ADC_BASE + 0x40)
/** ADC_ADC_CR ADC control register **/
#define ADC_ADC_CR			MMIO32(ADC_BASE + 0x27f4)
/** ADC_ADC_OFFSETR ADC offset register **/
#define ADC_ADC_OFFSETR			MMIO32(ADC_BASE + 0x27f8)
/** ADC_ADC_GAINR ADC gain register **/
#define ADC_ADC_GAINR			MMIO32(ADC_BASE + 0x27fc)
/** ADC_ADC_DMACR ADC DMA control register **/
#define ADC_ADC_DMACR			MMIO32(ADC_BASE + 0x2800)
/** ADC_ADC_DMASR ADC DMA status register **/
#define ADC_ADC_DMASR			MMIO32(ADC_BASE + 0x2804)
/** ADC_ADC_DMAMSAR ADC DMA memory start address register **/
#define ADC_ADC_DMAMSAR			MMIO32(ADC_BASE + 0x2808)
/** ADC_ADC_DMANDTR ADC DMA number of data to transfer register **/
#define ADC_ADC_DMANDTR			MMIO32(ADC_BASE + 0x280c)
/** ADC_ADC_DMAMNAR ADC DMA memory next address register **/
#define ADC_ADC_DMAMNAR			MMIO32(ADC_BASE + 0x2810)
/** ADC_ADC_DMACNDTR ADC DMA count number of data transferred register **/
#define ADC_ADC_DMACNDTR			MMIO32(ADC_BASE + 0x2814)

/**@}*/


/** @defgroup adc_adc_isr ADCISR ADC interrupt status register
@{*/

/** ADC_ADC_ISR_DMAOVF DMAOVF **/
#define ADC_ADC_ISR_DMAOVF		(1 << 4)
/** ADC_ADC_ISR_SAT SAT **/
#define ADC_ADC_ISR_SAT		(1 << 3)
/** ADC_ADC_ISR_DMABF DMABF **/
#define ADC_ADC_ISR_DMABF		(1 << 2)
/** ADC_ADC_ISR_DMABHF DMABHF **/
#define ADC_ADC_ISR_DMABHF		(1 << 1)

/**@}*/

/** @defgroup adc_adc_ier ADCIER ADC interrupt enable register
@{*/

/** ADC_ADC_IER_DMAOVFIE DMAOVFIE **/
#define ADC_ADC_IER_DMAOVFIE		(1 << 4)
/** ADC_ADC_IER_SATIE SATIE **/
#define ADC_ADC_IER_SATIE		(1 << 3)
/** ADC_ADC_IER_DMABFIE DMABFIE **/
#define ADC_ADC_IER_DMABFIE		(1 << 2)
/** ADC_ADC_IER_DMABHFIE DMABHFIE **/
#define ADC_ADC_IER_DMABHFIE		(1 << 1)

/**@}*/

/** @defgroup adc_adc_cr ADCCR ADC control register
@{*/


#define ADC_ADC_CR_SMP_SHIFT		13
#define ADC_ADC_CR_SMP_MASK		0x07
/** @defgroup adc_adc_cr_smp SMP SMP
@{*/
/**@}*/

/** ADC_ADC_CR_HVSELP HVSELP **/
#define ADC_ADC_CR_HVSELP		(1 << 12)
/** ADC_ADC_CR_HVSELN HVSELN **/
#define ADC_ADC_CR_HVSELN		(1 << 11)

#define ADC_ADC_CR_CHSELP_SHIFT		7
#define ADC_ADC_CR_CHSELP_MASK		0x0f
/** @defgroup adc_adc_cr_chselp CHSELP CHSELP
@{*/
/**@}*/


#define ADC_ADC_CR_CHSELN_SHIFT		3
#define ADC_ADC_CR_CHSELN_MASK		0x0f
/** @defgroup adc_adc_cr_chseln CHSELN CHSELN
@{*/
/**@}*/

/** ADC_ADC_CR_CLK CLK **/
#define ADC_ADC_CR_CLK		(1 << 2)
/** ADC_ADC_CR_ADON ADON **/
#define ADC_ADC_CR_ADON		(1 << 0)

/**@}*/

/** @defgroup adc_adc_offsetr ADCOFFSETR ADC offset register
@{*/


#define ADC_ADC_OFFSETR_OFFSET_SHIFT		0
#define ADC_ADC_OFFSETR_OFFSET_MASK		0xffff
/** @defgroup adc_adc_offsetr_offset OFFSET OFFSET
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_adc_gainr ADCGAINR ADC gain register
@{*/


#define ADC_ADC_GAINR_GAIN_SHIFT		0
#define ADC_ADC_GAINR_GAIN_MASK		0xffff
/** @defgroup adc_adc_gainr_gain GAIN GAIN
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_adc_dmacr ADCDMACR ADC DMA control register
@{*/

/** ADC_ADC_DMACR_RST Write 1 to reset the ADC DMA **/
#define ADC_ADC_DMACR_RST		(1 << 4)
/** ADC_ADC_DMACR_AUTOWRAP Selects DMA mode **/
#define ADC_ADC_DMACR_AUTOWRAP		(1 << 1)
/** ADC_ADC_DMACR_LOAD Loads the DMA buffer **/
#define ADC_ADC_DMACR_LOAD		(1 << 0)

/**@}*/

/** @defgroup adc_adc_dmasr ADCDMASR ADC DMA status register
@{*/

/** ADC_ADC_DMASR_AOVF AOVF **/
#define ADC_ADC_DMASR_AOVF		(1 << 1)
/** ADC_ADC_DMASR_ACT ACT **/
#define ADC_ADC_DMASR_ACT		(1 << 0)

/**@}*/

/** @defgroup adc_adc_dmamsar ADCDMAMSAR ADC DMA memory start address register
@{*/


#define ADC_ADC_DMAMSAR_MSA_SHIFT		0
#define ADC_ADC_DMAMSAR_MSA_MASK		0x1fff
/** @defgroup adc_adc_dmamsar_msa MSA MSA
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_adc_dmandtr ADCDMANDTR ADC DMA number of data to transfer register
@{*/


#define ADC_ADC_DMANDTR_NDT_SHIFT		0
#define ADC_ADC_DMANDTR_NDT_MASK		0x1fff
/** @defgroup adc_adc_dmandtr_ndt NDT NDT
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_adc_dmamnar ADCDMAMNAR ADC DMA memory next address register
@{*/


#define ADC_ADC_DMAMNAR_MNA_SHIFT		1
#define ADC_ADC_DMAMNAR_MNA_MASK		0x1fff
/** @defgroup adc_adc_dmamnar_mna MNA MNA
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_adc_dmacndtr ADCDMACNDTR ADC DMA count number of data transferred register
@{*/


#define ADC_ADC_DMACNDTR_CNDT_SHIFT		0
#define ADC_ADC_DMACNDTR_CNDT_MASK		0x1fff
/** @defgroup adc_adc_dmacndtr_cndt CNDT CNDT
@{*/
/**@}*/


/**@}*/

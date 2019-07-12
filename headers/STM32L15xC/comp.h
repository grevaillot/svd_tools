#pragma once 

/* --- COMP: Comparators -------------------------------------------- */

/** @defgroup comp_registers Comparators Register
@{*/

/** COMP_CSR comparator control and status register **/
#define COMP_CSR			MMIO32(COMP_BASE + 0x00)

/**@}*/


/** @defgroup comp_csr CSR comparator control and status register
@{*/

/** COMP_CSR_TSUSP Suspend Timer Mode **/
#define COMP_CSR_TSUSP		(1 << 31)
/** COMP_CSR_CAIF Channel acquisition interrupt flag **/
#define COMP_CSR_CAIF		(1 << 30)
/** COMP_CSR_CAIE Channel Acquisition Interrupt Enable / Clear **/
#define COMP_CSR_CAIE		(1 << 29)
/** COMP_CSR_RCH13 Select GPIO port PC3 as re-routed ADC input channel CH13. **/
#define COMP_CSR_RCH13		(1 << 28)
/** COMP_CSR_FCH8 Select GPIO port PB0 as fast ADC input channel CH8. **/
#define COMP_CSR_FCH8		(1 << 27)
/** COMP_CSR_FCH3 Select GPIO port PA3 as fast ADC input channel CH3. **/
#define COMP_CSR_FCH3		(1 << 26)

#define COMP_CSR_OUTSEL_SHIFT		21
#define COMP_CSR_OUTSEL_MASK		0x07
/** @defgroup comp_csr_outsel OUTSEL Comparator 2 output selection
@{*/
/**@}*/


#define COMP_CSR_INSEL_SHIFT		18
#define COMP_CSR_INSEL_MASK		0x07
/** @defgroup comp_csr_insel INSEL Inverted input selection
@{*/
/**@}*/

/** COMP_CSR_WNDWE Window mode enable **/
#define COMP_CSR_WNDWE		(1 << 17)
/** COMP_CSR_VREFOUTEN VREFINT output enable **/
#define COMP_CSR_VREFOUTEN		(1 << 16)
/** COMP_CSR_CMP2OUT Comparator 2 output **/
#define COMP_CSR_CMP2OUT		(1 << 13)
/** COMP_CSR_SPEED Comparator 2 speed mode **/
#define COMP_CSR_SPEED		(1 << 12)
/** COMP_CSR_CMP1OUT Comparator 1 output **/
#define COMP_CSR_CMP1OUT		(1 << 7)
/** COMP_CSR_SW1 SW1 analog switch enable **/
#define COMP_CSR_SW1		(1 << 5)
/** COMP_CSR_CMP1EN Comparator 1 enable **/
#define COMP_CSR_CMP1EN		(1 << 4)
/** COMP_CSR_PD400K 400 kO pull-down resistor **/
#define COMP_CSR_PD400K		(1 << 3)
/** COMP_CSR_PD10K 10 kO pull-down resistor **/
#define COMP_CSR_PD10K		(1 << 2)
/** COMP_CSR_PU400K 400 kO pull-up resistor **/
#define COMP_CSR_PU400K		(1 << 1)
/** COMP_CSR_PU10K 10 kO pull-up resistor **/
#define COMP_CSR_PU10K		(1 << 0)

/**@}*/

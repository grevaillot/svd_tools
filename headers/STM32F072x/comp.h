#pragma once 

/* --- COMP: Comparator --------------------------------------------- */

/** @defgroup comp_registers Comparator Register
@{*/

/** COMP_CSR control and status register **/
#define COMP_CSR			MMIO32(COMP_BASE + 0x00)

/**@}*/


/** @defgroup comp_csr CSR control and status register
@{*/

/** COMP_CSR_COMP2LOCK Comparator 2 lock **/
#define COMP_CSR_COMP2LOCK		(1 << 31)
/** COMP_CSR_COMP2OUT Comparator 2 output **/
#define COMP_CSR_COMP2OUT		(1 << 30)

#define COMP_CSR_COMP2HYST_SHIFT		28
#define COMP_CSR_COMP2HYST_MASK		0x03
/** @defgroup comp_csr_comp2hyst COMP2HYST Comparator 2 hysteresis
@{*/
/**@}*/

/** COMP_CSR_COMP2POL Comparator 2 output polarity **/
#define COMP_CSR_COMP2POL		(1 << 27)

#define COMP_CSR_COMP2OUTSEL_SHIFT		24
#define COMP_CSR_COMP2OUTSEL_MASK		0x07
/** @defgroup comp_csr_comp2outsel COMP2OUTSEL Comparator 2 output selection
@{*/
/**@}*/

/** COMP_CSR_WNDWEN Window mode enable **/
#define COMP_CSR_WNDWEN		(1 << 23)

#define COMP_CSR_COMP2INSEL_SHIFT		20
#define COMP_CSR_COMP2INSEL_MASK		0x07
/** @defgroup comp_csr_comp2insel COMP2INSEL Comparator 2 inverting input selection
@{*/
/**@}*/


#define COMP_CSR_COMP2MODE_SHIFT		18
#define COMP_CSR_COMP2MODE_MASK		0x03
/** @defgroup comp_csr_comp2mode COMP2MODE Comparator 2 mode
@{*/
/**@}*/

/** COMP_CSR_COMP2EN Comparator 2 enable **/
#define COMP_CSR_COMP2EN		(1 << 16)
/** COMP_CSR_COMP1LOCK Comparator 1 lock **/
#define COMP_CSR_COMP1LOCK		(1 << 15)
/** COMP_CSR_COMP1OUT Comparator 1 output **/
#define COMP_CSR_COMP1OUT		(1 << 14)

#define COMP_CSR_COMP1HYST_SHIFT		12
#define COMP_CSR_COMP1HYST_MASK		0x03
/** @defgroup comp_csr_comp1hyst COMP1HYST Comparator 1 hysteresis
@{*/
/**@}*/

/** COMP_CSR_COMP1POL Comparator 1 output polarity **/
#define COMP_CSR_COMP1POL		(1 << 11)

#define COMP_CSR_COMP1OUTSEL_SHIFT		8
#define COMP_CSR_COMP1OUTSEL_MASK		0x07
/** @defgroup comp_csr_comp1outsel COMP1OUTSEL Comparator 1 output selection
@{*/
/**@}*/


#define COMP_CSR_COMP1INSEL_SHIFT		4
#define COMP_CSR_COMP1INSEL_MASK		0x07
/** @defgroup comp_csr_comp1insel COMP1INSEL Comparator 1 inverting input selection
@{*/
/**@}*/


#define COMP_CSR_COMP1MODE_SHIFT		2
#define COMP_CSR_COMP1MODE_MASK		0x03
/** @defgroup comp_csr_comp1mode COMP1MODE Comparator 1 mode
@{*/
/**@}*/

/** COMP_CSR_COMP1_INP_DAC COMP1_INP_DAC **/
#define COMP_CSR_COMP1_INP_DAC		(1 << 1)
/** COMP_CSR_COMP1EN Comparator 1 enable **/
#define COMP_CSR_COMP1EN		(1 << 0)

/**@}*/

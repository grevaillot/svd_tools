#pragma once 

/* --- COMP: COMP1 -------------------------------------------------- */

/** @defgroup comp_registers COMP1 Register
@{*/

/** COMP_COMP1_CSR Comparator 1 control and status register **/
#define COMP_COMP1_CSR			MMIO32(COMP_BASE + 0x00)
/** COMP_COMP2_CSR Comparator 2 control and status register **/
#define COMP_COMP2_CSR			MMIO32(COMP_BASE + 0x04)

/**@}*/


/** @defgroup comp_comp1_csr COMP1CSR Comparator 1 control and status register
@{*/

/** COMP_COMP1_CSR_LOCK COMP2_CSR register lock **/
#define COMP_COMP1_CSR_LOCK		(1 << 31)
/** COMP_COMP1_CSR_VALUE Comparator 2 output status **/
#define COMP_COMP1_CSR_VALUE		(1 << 30)

#define COMP_COMP1_CSR_BLANKSEL_SHIFT		20
#define COMP_COMP1_CSR_BLANKSEL_MASK		0x1f
/** @defgroup comp_comp1_csr_blanksel BLANKSEL Comparator 2 blanking source selector
@{*/
/**@}*/


#define COMP_COMP1_CSR_PWRMODE_SHIFT		18
#define COMP_COMP1_CSR_PWRMODE_MASK		0x03
/** @defgroup comp_comp1_csr_pwrmode PWRMODE Comparator 2 power mode selector
@{*/
/**@}*/


#define COMP_COMP1_CSR_HYST_SHIFT		16
#define COMP_COMP1_CSR_HYST_MASK		0x03
/** @defgroup comp_comp1_csr_hyst HYST Comparator 2 hysteresis selector
@{*/
/**@}*/

/** COMP_COMP1_CSR_POLARITY Comparator 2 polarity selector **/
#define COMP_COMP1_CSR_POLARITY		(1 << 15)
/** COMP_COMP1_CSR_WINOUT Comparator 2 output selector **/
#define COMP_COMP1_CSR_WINOUT		(1 << 14)
/** COMP_COMP1_CSR_WINMODE Comparator 2 non-inverting input selector for window mode **/
#define COMP_COMP1_CSR_WINMODE		(1 << 11)

#define COMP_COMP1_CSR_INPSEL_SHIFT		8
#define COMP_COMP1_CSR_INPSEL_MASK		0x03
/** @defgroup comp_comp1_csr_inpsel INPSEL Comparator 2 signal selector for non-inverting input
@{*/
/**@}*/


#define COMP_COMP1_CSR_INMSEL_SHIFT		4
#define COMP_COMP1_CSR_INMSEL_MASK		0x0f
/** @defgroup comp_comp1_csr_inmsel INMSEL Comparator 2 signal selector for inverting input INM
@{*/
/**@}*/

/** COMP_COMP1_CSR_EN COMP channel 1 enable bit **/
#define COMP_COMP1_CSR_EN		(1 << 0)

/**@}*/

/** @defgroup comp_comp2_csr COMP2CSR Comparator 2 control and status register
@{*/

/** COMP_COMP2_CSR_LOCK COMP2_CSR register lock **/
#define COMP_COMP2_CSR_LOCK		(1 << 31)
/** COMP_COMP2_CSR_VALUE Comparator 2 output status **/
#define COMP_COMP2_CSR_VALUE		(1 << 30)

#define COMP_COMP2_CSR_BLANKSEL_SHIFT		20
#define COMP_COMP2_CSR_BLANKSEL_MASK		0x1f
/** @defgroup comp_comp2_csr_blanksel BLANKSEL Comparator 2 blanking source selector
@{*/
/**@}*/


#define COMP_COMP2_CSR_PWRMODE_SHIFT		18
#define COMP_COMP2_CSR_PWRMODE_MASK		0x03
/** @defgroup comp_comp2_csr_pwrmode PWRMODE Comparator 2 power mode selector
@{*/
/**@}*/


#define COMP_COMP2_CSR_HYST_SHIFT		16
#define COMP_COMP2_CSR_HYST_MASK		0x03
/** @defgroup comp_comp2_csr_hyst HYST Comparator 2 hysteresis selector
@{*/
/**@}*/

/** COMP_COMP2_CSR_POLARITY Comparator 2 polarity selector **/
#define COMP_COMP2_CSR_POLARITY		(1 << 15)
/** COMP_COMP2_CSR_WINOUT Comparator 2 output selector **/
#define COMP_COMP2_CSR_WINOUT		(1 << 14)
/** COMP_COMP2_CSR_WINMODE Comparator 2 non-inverting input selector for window mode **/
#define COMP_COMP2_CSR_WINMODE		(1 << 11)

#define COMP_COMP2_CSR_INPSEL_SHIFT		8
#define COMP_COMP2_CSR_INPSEL_MASK		0x03
/** @defgroup comp_comp2_csr_inpsel INPSEL Comparator 2 signal selector for non-inverting input
@{*/
/**@}*/


#define COMP_COMP2_CSR_INMSEL_SHIFT		4
#define COMP_COMP2_CSR_INMSEL_MASK		0x0f
/** @defgroup comp_comp2_csr_inmsel INMSEL Comparator 2 signal selector for inverting input INM
@{*/
/**@}*/

/** COMP_COMP2_CSR_EN COMP channel 1 enable bit **/
#define COMP_COMP2_CSR_EN		(1 << 0)

/**@}*/

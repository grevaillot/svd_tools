#pragma once 

/* --- COMP: Comparator --------------------------------------------- */

/** @defgroup comp_registers Comparator Register
@{*/

/** COMP_COMP1_CSR Comparator 1 control and status register **/
#define COMP_COMP1_CSR			MMIO32(COMP_BASE + 0x00)
/** COMP_COMP2_CSR Comparator 2 control and status register **/
#define COMP_COMP2_CSR			MMIO32(COMP_BASE + 0x04)

/**@}*/


/** @defgroup comp_comp1_csr COMP1CSR Comparator 1 control and status register
@{*/

/** COMP_COMP1_CSR_COMP1_LOCK COMP1_CSR register lock bit **/
#define COMP_COMP1_CSR_COMP1_LOCK		(1 << 31)
/** COMP_COMP1_CSR_COMP1_VALUE Comparator 1 output status bit **/
#define COMP_COMP1_CSR_COMP1_VALUE		(1 << 30)

#define COMP_COMP1_CSR_COMP1_INMESEL_SHIFT		25
#define COMP_COMP1_CSR_COMP1_INMESEL_MASK		0x03
/** @defgroup comp_comp1_csr_comp1_inmesel COMP1INMESEL comparator 1 input minus extended selection bits
@{*/
/**@}*/

/** COMP_COMP1_CSR_COMP1_SCALEN Voltage scaler enable bit **/
#define COMP_COMP1_CSR_COMP1_SCALEN		(1 << 23)
/** COMP_COMP1_CSR_COMP1_BRGEN Scaler bridge enable **/
#define COMP_COMP1_CSR_COMP1_BRGEN		(1 << 22)

#define COMP_COMP1_CSR_COMP1_BLANKING_SHIFT		18
#define COMP_COMP1_CSR_COMP1_BLANKING_MASK		0x07
/** @defgroup comp_comp1_csr_comp1_blanking COMP1BLANKING Comparator 1 blanking source selection bits
@{*/
/**@}*/


#define COMP_COMP1_CSR_COMP1_HYST_SHIFT		16
#define COMP_COMP1_CSR_COMP1_HYST_MASK		0x03
/** @defgroup comp_comp1_csr_comp1_hyst COMP1HYST Comparator 1 hysteresis selection bits
@{*/
/**@}*/

/** COMP_COMP1_CSR_COMP1_POLARITY Comparator 1 polarity selection bit **/
#define COMP_COMP1_CSR_COMP1_POLARITY		(1 << 15)

#define COMP_COMP1_CSR_COMP1_INPSEL_SHIFT		7
#define COMP_COMP1_CSR_COMP1_INPSEL_MASK		0x03
/** @defgroup comp_comp1_csr_comp1_inpsel COMP1INPSEL Comparator1 input plus selection bit
@{*/
/**@}*/


#define COMP_COMP1_CSR_COMP1_INMSEL_SHIFT		4
#define COMP_COMP1_CSR_COMP1_INMSEL_MASK		0x07
/** @defgroup comp_comp1_csr_comp1_inmsel COMP1INMSEL Comparator 1 Input Minus connection configuration bit
@{*/
/**@}*/


#define COMP_COMP1_CSR_COMP1_PWRMODE_SHIFT		2
#define COMP_COMP1_CSR_COMP1_PWRMODE_MASK		0x03
/** @defgroup comp_comp1_csr_comp1_pwrmode COMP1PWRMODE Power Mode of the comparator 1
@{*/
/**@}*/

/** COMP_COMP1_CSR_COMP1_EN Comparator 1 enable bit **/
#define COMP_COMP1_CSR_COMP1_EN		(1 << 0)

/**@}*/

/** @defgroup comp_comp2_csr COMP2CSR Comparator 2 control and status register
@{*/

/** COMP_COMP2_CSR_COMP2_LOCK COMP2_CSR register lock bit **/
#define COMP_COMP2_CSR_COMP2_LOCK		(1 << 31)
/** COMP_COMP2_CSR_COMP2_VALUE Comparator 2 output status bit **/
#define COMP_COMP2_CSR_COMP2_VALUE		(1 << 30)

#define COMP_COMP2_CSR_COMP2_INMESEL_SHIFT		25
#define COMP_COMP2_CSR_COMP2_INMESEL_MASK		0x03
/** @defgroup comp_comp2_csr_comp2_inmesel COMP2INMESEL comparator 2 input minus extended selection bits
@{*/
/**@}*/

/** COMP_COMP2_CSR_COMP2_SCALEN Voltage scaler enable bit **/
#define COMP_COMP2_CSR_COMP2_SCALEN		(1 << 23)
/** COMP_COMP2_CSR_COMP2_BRGEN Scaler bridge enable **/
#define COMP_COMP2_CSR_COMP2_BRGEN		(1 << 22)

#define COMP_COMP2_CSR_COMP2_BLANKING_SHIFT		18
#define COMP_COMP2_CSR_COMP2_BLANKING_MASK		0x07
/** @defgroup comp_comp2_csr_comp2_blanking COMP2BLANKING Comparator 2 blanking source selection bits
@{*/
/**@}*/


#define COMP_COMP2_CSR_COMP2_HYST_SHIFT		16
#define COMP_COMP2_CSR_COMP2_HYST_MASK		0x03
/** @defgroup comp_comp2_csr_comp2_hyst COMP2HYST Comparator 2 hysteresis selection bits
@{*/
/**@}*/

/** COMP_COMP2_CSR_COMP2_POLARITY Comparator 2 polarity selection bit **/
#define COMP_COMP2_CSR_COMP2_POLARITY		(1 << 15)
/** COMP_COMP2_CSR_COMP2_WINMODE Windows mode selection bit **/
#define COMP_COMP2_CSR_COMP2_WINMODE		(1 << 9)

#define COMP_COMP2_CSR_COMP2_INPSEL_SHIFT		7
#define COMP_COMP2_CSR_COMP2_INPSEL_MASK		0x03
/** @defgroup comp_comp2_csr_comp2_inpsel COMP2INPSEL Comparator 2 Input Plus connection configuration bit
@{*/
/**@}*/


#define COMP_COMP2_CSR_COMP2_INMSEL_SHIFT		4
#define COMP_COMP2_CSR_COMP2_INMSEL_MASK		0x07
/** @defgroup comp_comp2_csr_comp2_inmsel COMP2INMSEL Comparator 2 Input Minus connection configuration bit
@{*/
/**@}*/


#define COMP_COMP2_CSR_COMP2_PWRMODE_SHIFT		2
#define COMP_COMP2_CSR_COMP2_PWRMODE_MASK		0x03
/** @defgroup comp_comp2_csr_comp2_pwrmode COMP2PWRMODE Power Mode of the comparator 2
@{*/
/**@}*/

/** COMP_COMP2_CSR_COMP2_EN Comparator 2 enable bit **/
#define COMP_COMP2_CSR_COMP2_EN		(1 << 0)

/**@}*/

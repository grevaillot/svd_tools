#pragma once 

/* --- COMP1: COMP1 ------------------------------------------------- */

/** @defgroup comp1_registers COMP1 Register
@{*/

/** COMP1_SR Comparator status register **/
#define COMP1_SR			MMIO32(COMP1_BASE + 0x00)
/** COMP1_ICFR Comparator interrupt clear flag register **/
#define COMP1_ICFR			MMIO32(COMP1_BASE + 0x04)
/** COMP1_OR Comparator option register **/
#define COMP1_OR			MMIO32(COMP1_BASE + 0x08)
/** COMP1_CFGR1 Comparator configuration register 1 **/
#define COMP1_CFGR1			MMIO32(COMP1_BASE + 0x0c)
/** COMP1_CFGR2 Comparator configuration register 2 **/
#define COMP1_CFGR2			MMIO32(COMP1_BASE + 0x10)

/**@}*/


/** @defgroup comp1_sr SR Comparator status register
@{*/

/** COMP1_SR_C2IF COMP channel 2 Interrupt Flag **/
#define COMP1_SR_C2IF		(1 << 17)
/** COMP1_SR_C1IF COMP channel 1 Interrupt Flag **/
#define COMP1_SR_C1IF		(1 << 16)
/** COMP1_SR_C2VAL COMP channel 2 output status bit **/
#define COMP1_SR_C2VAL		(1 << 1)
/** COMP1_SR_C1VAL COMP channel 1 output status bit **/
#define COMP1_SR_C1VAL		(1 << 0)

/**@}*/

/** @defgroup comp1_icfr ICFR Comparator interrupt clear flag register
@{*/

/** COMP1_ICFR_CC2IF Clear COMP channel 2 Interrupt Flag **/
#define COMP1_ICFR_CC2IF		(1 << 17)
/** COMP1_ICFR_CC1IF Clear COMP channel 1 Interrupt Flag **/
#define COMP1_ICFR_CC1IF		(1 << 16)

/**@}*/

/** @defgroup comp1_or OR Comparator option register
@{*/


#define COMP1_OR_OR_SHIFT		11
#define COMP1_OR_OR_MASK		0x1fffff
/** @defgroup comp1_or_or OR Option Register
@{*/
/**@}*/


#define COMP1_OR_AFOP_SHIFT		0
#define COMP1_OR_AFOP_MASK		0x7ff
/** @defgroup comp1_or_afop AFOP Selection of source for alternate function of output ports
@{*/
/**@}*/


/**@}*/

/** @defgroup comp1_cfgr1 CFGR1 Comparator configuration register 1
@{*/

/** COMP1_CFGR1_LOCK Lock bit **/
#define COMP1_CFGR1_LOCK		(1 << 31)

#define COMP1_CFGR1_BLANKING_SHIFT		24
#define COMP1_CFGR1_BLANKING_MASK		0x0f
/** @defgroup comp1_cfgr1_blanking BLANKING COMP channel 1 blanking source selection bits
@{*/
/**@}*/

/** COMP1_CFGR1_INPSEL COMP channel 1 non-inverting input selection bit **/
#define COMP1_CFGR1_INPSEL		(1 << 20)

#define COMP1_CFGR1_INMSEL_SHIFT		16
#define COMP1_CFGR1_INMSEL_MASK		0x07
/** @defgroup comp1_cfgr1_inmsel INMSEL COMP channel 1 inverting input selection field
@{*/
/**@}*/


#define COMP1_CFGR1_PWRMODE_SHIFT		12
#define COMP1_CFGR1_PWRMODE_MASK		0x03
/** @defgroup comp1_cfgr1_pwrmode PWRMODE Power Mode of the COMP channel 1
@{*/
/**@}*/


#define COMP1_CFGR1_HYST_SHIFT		8
#define COMP1_CFGR1_HYST_MASK		0x03
/** @defgroup comp1_cfgr1_hyst HYST COMP channel 1 hysteresis selection bits
@{*/
/**@}*/

/** COMP1_CFGR1_ITEN COMP channel 1 interrupt enable **/
#define COMP1_CFGR1_ITEN		(1 << 6)
/** COMP1_CFGR1_POLARITY COMP channel 1 polarity selection bit **/
#define COMP1_CFGR1_POLARITY		(1 << 3)
/** COMP1_CFGR1_SCALEN Voltage scaler enable bit **/
#define COMP1_CFGR1_SCALEN		(1 << 2)
/** COMP1_CFGR1_BRGEN Scaler bridge enable **/
#define COMP1_CFGR1_BRGEN		(1 << 1)
/** COMP1_CFGR1_EN COMP channel 1 enable bit **/
#define COMP1_CFGR1_EN		(1 << 0)

/**@}*/

/** @defgroup comp1_cfgr2 CFGR2 Comparator configuration register 2
@{*/

/** COMP1_CFGR2_LOCK Lock bit **/
#define COMP1_CFGR2_LOCK		(1 << 31)

#define COMP1_CFGR2_BLANKING_SHIFT		24
#define COMP1_CFGR2_BLANKING_MASK		0x0f
/** @defgroup comp1_cfgr2_blanking BLANKING COMP channel 1 blanking source selection bits
@{*/
/**@}*/

/** COMP1_CFGR2_INPSEL COMP channel 1 non-inverting input selection bit **/
#define COMP1_CFGR2_INPSEL		(1 << 20)

#define COMP1_CFGR2_INMSEL_SHIFT		16
#define COMP1_CFGR2_INMSEL_MASK		0x07
/** @defgroup comp1_cfgr2_inmsel INMSEL COMP channel 1 inverting input selection field
@{*/
/**@}*/


#define COMP1_CFGR2_PWRMODE_SHIFT		12
#define COMP1_CFGR2_PWRMODE_MASK		0x03
/** @defgroup comp1_cfgr2_pwrmode PWRMODE Power Mode of the COMP channel 1
@{*/
/**@}*/


#define COMP1_CFGR2_HYST_SHIFT		8
#define COMP1_CFGR2_HYST_MASK		0x03
/** @defgroup comp1_cfgr2_hyst HYST COMP channel 1 hysteresis selection bits
@{*/
/**@}*/

/** COMP1_CFGR2_ITEN COMP channel 1 interrupt enable **/
#define COMP1_CFGR2_ITEN		(1 << 6)
/** COMP1_CFGR2_WINMODE Window comparator mode selection bit **/
#define COMP1_CFGR2_WINMODE		(1 << 4)
/** COMP1_CFGR2_POLARITY COMP channel 1 polarity selection bit **/
#define COMP1_CFGR2_POLARITY		(1 << 3)
/** COMP1_CFGR2_SCALEN Voltage scaler enable bit **/
#define COMP1_CFGR2_SCALEN		(1 << 2)
/** COMP1_CFGR2_BRGEN Scaler bridge enable **/
#define COMP1_CFGR2_BRGEN		(1 << 1)
/** COMP1_CFGR2_EN COMP channel 1 enable bit **/
#define COMP1_CFGR2_EN		(1 << 0)

/**@}*/

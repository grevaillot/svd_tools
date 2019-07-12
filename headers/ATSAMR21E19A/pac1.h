#pragma once 

/* --- PAC1: Peripheral Access Controller 1 ------------------------- */

/** @defgroup pac1_registers Peripheral Access Controller 1 Register
@{*/

/** PAC1_WPCLR Write Protection Clear **/
#define PAC1_WPCLR			MMIO32(PAC1_BASE + 0x00)
/** PAC1_WPSET Write Protection Set **/
#define PAC1_WPSET			MMIO32(PAC1_BASE + 0x04)

/**@}*/


/** @defgroup pac1_wpclr WPCLR Write Protection Clear
@{*/


#define PAC1_WPCLR_WP_SHIFT		1
#define PAC1_WPCLR_WP_MASK		0x7fffffff
/** @defgroup pac1_wpclr_wp WP Write Protection Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup pac1_wpset WPSET Write Protection Set
@{*/


#define PAC1_WPSET_WP_SHIFT		1
#define PAC1_WPSET_WP_MASK		0x7fffffff
/** @defgroup pac1_wpset_wp WP Write Protection Set
@{*/
/**@}*/


/**@}*/

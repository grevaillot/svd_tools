#pragma once 

/* --- PAC0: Peripheral Access Controller 0 ------------------------- */

/** @defgroup pac0_registers Peripheral Access Controller 0 Register
@{*/

/** PAC0_WPCLR Write Protection Clear **/
#define PAC0_WPCLR			MMIO32(PAC0_BASE + 0x00)
/** PAC0_WPSET Write Protection Set **/
#define PAC0_WPSET			MMIO32(PAC0_BASE + 0x04)

/**@}*/


/** @defgroup pac0_wpclr WPCLR Write Protection Clear
@{*/


#define PAC0_WPCLR_WP_SHIFT		1
#define PAC0_WPCLR_WP_MASK		0x7fffffff
/** @defgroup pac0_wpclr_wp WP Write Protection Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup pac0_wpset WPSET Write Protection Set
@{*/


#define PAC0_WPSET_WP_SHIFT		1
#define PAC0_WPSET_WP_MASK		0x7fffffff
/** @defgroup pac0_wpset_wp WP Write Protection Set
@{*/
/**@}*/


/**@}*/

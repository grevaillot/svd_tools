#pragma once 

/* --- PAC2: Peripheral Access Controller 2 ------------------------- */

/** @defgroup pac2_registers Peripheral Access Controller 2 Register
@{*/

/** PAC2_WPCLR Write Protection Clear **/
#define PAC2_WPCLR			MMIO32(PAC2_BASE + 0x00)
/** PAC2_WPSET Write Protection Set **/
#define PAC2_WPSET			MMIO32(PAC2_BASE + 0x04)

/**@}*/


/** @defgroup pac2_wpclr WPCLR Write Protection Clear
@{*/


#define PAC2_WPCLR_WP_SHIFT		1
#define PAC2_WPCLR_WP_MASK		0x7fffffff
/** @defgroup pac2_wpclr_wp WP Write Protection Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup pac2_wpset WPSET Write Protection Set
@{*/


#define PAC2_WPSET_WP_SHIFT		1
#define PAC2_WPSET_WP_MASK		0x7fffffff
/** @defgroup pac2_wpset_wp WP Write Protection Set
@{*/
/**@}*/


/**@}*/

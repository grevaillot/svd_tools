#pragma once 

/* --- WWDG: Window watchdog ---------------------------------------- */

/** @defgroup wwdg_registers Window watchdog Register
@{*/

/** WWDG_CR Control register **/
#define WWDG_CR			MMIO32(WWDG_BASE + 0x00)
/** WWDG_CFR Configuration register **/
#define WWDG_CFR			MMIO32(WWDG_BASE + 0x04)
/** WWDG_SR Status register **/
#define WWDG_SR			MMIO32(WWDG_BASE + 0x08)

/**@}*/


/** @defgroup wwdg_cr CR Control register
@{*/

/** WWDG_CR_WDGA Activation bit **/
#define WWDG_CR_WDGA		(1 << 7)

#define WWDG_CR_T_SHIFT		0
#define WWDG_CR_T_MASK		0x7f
/** @defgroup wwdg_cr_t T 7-bit counter (MSB to LSB)
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg_cfr CFR Configuration register
@{*/

/** WWDG_CFR_EWI Early wakeup interrupt **/
#define WWDG_CFR_EWI		(1 << 9)

#define WWDG_CFR_WDGTB_SHIFT		7
#define WWDG_CFR_WDGTB_MASK		0x03
/** @defgroup wwdg_cfr_wdgtb WDGTB Timer base
@{*/
/**@}*/


#define WWDG_CFR_W_SHIFT		0
#define WWDG_CFR_W_MASK		0x7f
/** @defgroup wwdg_cfr_w W 7-bit window value
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg_sr SR Status register
@{*/

/** WWDG_SR_EWIF Early wakeup interrupt flag **/
#define WWDG_SR_EWIF		(1 << 0)

/**@}*/

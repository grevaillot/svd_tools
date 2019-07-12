#pragma once 

/* --- IWDG: System window watchdog --------------------------------- */

/** @defgroup iwdg_registers System window watchdog Register
@{*/

/** IWDG_CR Control register **/
#define IWDG_CR			MMIO32(IWDG_BASE + 0x00)
/** IWDG_CFR Configuration register **/
#define IWDG_CFR			MMIO32(IWDG_BASE + 0x04)
/** IWDG_SR Status register **/
#define IWDG_SR			MMIO32(IWDG_BASE + 0x08)

/**@}*/


/** @defgroup iwdg_cr CR Control register
@{*/

/** IWDG_CR_WDGA Activation bit **/
#define IWDG_CR_WDGA		(1 << 7)

#define IWDG_CR_T_SHIFT		0
#define IWDG_CR_T_MASK		0x7f
/** @defgroup iwdg_cr_t T 7-bit counter (MSB to LSB)
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_cfr CFR Configuration register
@{*/


#define IWDG_CFR_WDGTB_SHIFT		11
#define IWDG_CFR_WDGTB_MASK		0x07
/** @defgroup iwdg_cfr_wdgtb WDGTB Timer base
@{*/
/**@}*/

/** IWDG_CFR_EWI Early wakeup interrupt **/
#define IWDG_CFR_EWI		(1 << 9)

#define IWDG_CFR_W_SHIFT		0
#define IWDG_CFR_W_MASK		0x7f
/** @defgroup iwdg_cfr_w W 7-bit window value
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_sr SR Status register
@{*/

/** IWDG_SR_EWIF Early wakeup interrupt flag **/
#define IWDG_SR_EWIF		(1 << 0)

/**@}*/

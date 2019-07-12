#pragma once 

/* --- WWDG1: WWDG -------------------------------------------------- */

/** @defgroup wwdg1_registers WWDG Register
@{*/

/** WWDG1_WWDG_CR Control register **/
#define WWDG1_WWDG_CR			MMIO32(WWDG1_BASE + 0x00)
/** WWDG1_WWDG_CFR Configuration register **/
#define WWDG1_WWDG_CFR			MMIO32(WWDG1_BASE + 0x04)
/** WWDG1_WWDG_SR Status register **/
#define WWDG1_WWDG_SR			MMIO32(WWDG1_BASE + 0x08)

/**@}*/


/** @defgroup wwdg1_wwdg_cr WWDGCR Control register
@{*/

/** WWDG1_WWDG_CR_WDGA Activation bit This bit is set by software and only cleared by hardware after a reset. When WDGA=1, the watchdog can generate a reset. **/
#define WWDG1_WWDG_CR_WDGA		(1 << 7)

#define WWDG1_WWDG_CR_T_SHIFT		0
#define WWDG1_WWDG_CR_T_MASK		0x7f
/** @defgroup wwdg1_wwdg_cr_t T 7-bit counter (MSB to LSB) These bits contain the value of the watchdog counter. It is decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A reset is produced when it is decremented from 0x40 to 0x3F (T6 becomes cleared).
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg1_wwdg_cfr WWDGCFR Configuration register
@{*/


#define WWDG1_WWDG_CFR_WDGTB_SHIFT		11
#define WWDG1_WWDG_CFR_WDGTB_MASK		0x03
/** @defgroup wwdg1_wwdg_cfr_wdgtb WDGTB Timer base The time base of the prescaler can be modified as follows:
@{*/
/**@}*/

/** WWDG1_WWDG_CFR_EWI Early wakeup interrupt When set, an interrupt occurs whenever the counter reaches the value 0x40. This interrupt is only cleared by hardware after a reset. **/
#define WWDG1_WWDG_CFR_EWI		(1 << 9)

#define WWDG1_WWDG_CFR_W_SHIFT		0
#define WWDG1_WWDG_CFR_W_MASK		0x7f
/** @defgroup wwdg1_wwdg_cfr_w W 7-bit window value These bits contain the window value to be compared to the downcounter.
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg1_wwdg_sr WWDGSR Status register
@{*/

/** WWDG1_WWDG_SR_EWIF Early wakeup interrupt flag This bit is set by hardware when the counter has reached the value 0x40. It must be cleared by software by writing 0. A write of 1 has no effect. This bit is also set if the interrupt is not enabled. **/
#define WWDG1_WWDG_SR_EWIF		(1 << 0)

/**@}*/

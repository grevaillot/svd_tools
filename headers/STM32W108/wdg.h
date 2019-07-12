#pragma once 

/* --- WDG: Watchdog timer ------------------------------------------ */

/** @defgroup wdg_registers Watchdog timer Register
@{*/

/** WDG_WDG_CR WDG configuration register **/
#define WDG_WDG_CR			MMIO32(WDG_BASE + 0x00)
/** WDG_WDG_KR WDG key register **/
#define WDG_WDG_KR			MMIO32(WDG_BASE + 0x04)
/** WDG_WDG_KICKSR WDG kick-start register **/
#define WDG_WDG_KICKSR			MMIO32(WDG_BASE + 0x08)

/**@}*/


/** @defgroup wdg_wdg_cr WDGCR WDG configuration register
@{*/

/** WDG_WDG_CR_WDGDIS WDGDIS **/
#define WDG_WDG_CR_WDGDIS		(1 << 1)
/** WDG_WDG_CR_WDGEN WDGEN **/
#define WDG_WDG_CR_WDGEN		(1 << 0)

/**@}*/

/** @defgroup wdg_wdg_kr WDGKR WDG key register
@{*/


#define WDG_WDG_KR_KEY_SHIFT		0
#define WDG_WDG_KR_KEY_MASK		0xffff
/** @defgroup wdg_wdg_kr_key KEY KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup wdg_wdg_kicksr WDGKICKSR WDG kick-start register
@{*/


#define WDG_WDG_KICKSR_KS_SHIFT		0
#define WDG_WDG_KICKSR_KS_MASK		0xffff
/** @defgroup wdg_wdg_kicksr_ks KS KS
@{*/
/**@}*/


/**@}*/

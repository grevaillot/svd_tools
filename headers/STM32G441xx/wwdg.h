#pragma once 

/* --- WWDG: WinWATCHDOG -------------------------------------------- */

/** @defgroup wwdg_registers WinWATCHDOG Register
@{*/

/** WWDG_KR Key register **/
#define WWDG_KR			MMIO32(WWDG_BASE + 0x00)
/** WWDG_PR Prescaler register **/
#define WWDG_PR			MMIO32(WWDG_BASE + 0x04)
/** WWDG_RLR Reload register **/
#define WWDG_RLR			MMIO32(WWDG_BASE + 0x08)
/** WWDG_SR Status register **/
#define WWDG_SR			MMIO32(WWDG_BASE + 0x0c)
/** WWDG_WINR Window register **/
#define WWDG_WINR			MMIO32(WWDG_BASE + 0x10)

/**@}*/


/** @defgroup wwdg_kr KR Key register
@{*/


#define WWDG_KR_KEY_SHIFT		0
#define WWDG_KR_KEY_MASK		0xffff
/** @defgroup wwdg_kr_key KEY Key value (write only, read 0x0000)
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg_pr PR Prescaler register
@{*/


#define WWDG_PR_PR_SHIFT		0
#define WWDG_PR_PR_MASK		0x07
/** @defgroup wwdg_pr_pr PR Prescaler divider
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg_rlr RLR Reload register
@{*/


#define WWDG_RLR_RL_SHIFT		0
#define WWDG_RLR_RL_MASK		0xfff
/** @defgroup wwdg_rlr_rl RL Watchdog counter reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup wwdg_sr SR Status register
@{*/

/** WWDG_SR_WVU Watchdog counter window value update **/
#define WWDG_SR_WVU		(1 << 2)
/** WWDG_SR_RVU Watchdog counter reload value update **/
#define WWDG_SR_RVU		(1 << 1)
/** WWDG_SR_PVU Watchdog prescaler value update **/
#define WWDG_SR_PVU		(1 << 0)

/**@}*/

/** @defgroup wwdg_winr WINR Window register
@{*/


#define WWDG_WINR_WIN_SHIFT		0
#define WWDG_WINR_WIN_MASK		0xfff
/** @defgroup wwdg_winr_win WIN Watchdog counter window value
@{*/
/**@}*/


/**@}*/

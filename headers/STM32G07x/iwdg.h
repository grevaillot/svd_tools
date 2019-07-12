#pragma once 

/* --- IWDG: Independent watchdog ----------------------------------- */

/** @defgroup iwdg_registers Independent watchdog Register
@{*/

/** IWDG_KR Key register **/
#define IWDG_KR			MMIO32(IWDG_BASE + 0x00)
/** IWDG_PR Prescaler register **/
#define IWDG_PR			MMIO32(IWDG_BASE + 0x04)
/** IWDG_RLR Reload register **/
#define IWDG_RLR			MMIO32(IWDG_BASE + 0x08)
/** IWDG_SR Status register **/
#define IWDG_SR			MMIO32(IWDG_BASE + 0x0c)
/** IWDG_WINR Window register **/
#define IWDG_WINR			MMIO32(IWDG_BASE + 0x10)
/** IWDG_HWCFGR hardware configuration register **/
#define IWDG_HWCFGR			MMIO32(IWDG_BASE + 0x3f0)
/** IWDG_VERR EXTI IP Version register **/
#define IWDG_VERR			MMIO32(IWDG_BASE + 0x3f4)
/** IWDG_IPIDR EXTI Identification register **/
#define IWDG_IPIDR			MMIO32(IWDG_BASE + 0x3f8)
/** IWDG_SIDR EXTI Size ID register **/
#define IWDG_SIDR			MMIO32(IWDG_BASE + 0x3fc)

/**@}*/


/** @defgroup iwdg_kr KR Key register
@{*/


#define IWDG_KR_KEY_SHIFT		0
#define IWDG_KR_KEY_MASK		0xffff
/** @defgroup iwdg_kr_key KEY Key value (write only, read 0x0000)
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_pr PR Prescaler register
@{*/


#define IWDG_PR_PR_SHIFT		0
#define IWDG_PR_PR_MASK		0x07
/** @defgroup iwdg_pr_pr PR Prescaler divider
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_rlr RLR Reload register
@{*/


#define IWDG_RLR_RL_SHIFT		0
#define IWDG_RLR_RL_MASK		0xfff
/** @defgroup iwdg_rlr_rl RL Watchdog counter reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_sr SR Status register
@{*/

/** IWDG_SR_WVU Watchdog counter window value update **/
#define IWDG_SR_WVU		(1 << 2)
/** IWDG_SR_RVU Watchdog counter reload value update **/
#define IWDG_SR_RVU		(1 << 1)
/** IWDG_SR_PVU Watchdog prescaler value update **/
#define IWDG_SR_PVU		(1 << 0)

/**@}*/

/** @defgroup iwdg_winr WINR Window register
@{*/


#define IWDG_WINR_WIN_SHIFT		0
#define IWDG_WINR_WIN_MASK		0xfff
/** @defgroup iwdg_winr_win WIN Watchdog counter window value
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_hwcfgr HWCFGR hardware configuration register
@{*/


#define IWDG_HWCFGR_PR_DEFAULT_SHIFT		4
#define IWDG_HWCFGR_PR_DEFAULT_MASK		0x0f
/** @defgroup iwdg_hwcfgr_pr_default PRDEFAULT Prescaler default value
@{*/
/**@}*/


#define IWDG_HWCFGR_WINDOW_SHIFT		0
#define IWDG_HWCFGR_WINDOW_MASK		0x0f
/** @defgroup iwdg_hwcfgr_window WINDOW Support of Window function
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_verr VERR EXTI IP Version register
@{*/


#define IWDG_VERR_MAJREV_SHIFT		4
#define IWDG_VERR_MAJREV_MASK		0x0f
/** @defgroup iwdg_verr_majrev MAJREV Major Revision number
@{*/
/**@}*/


#define IWDG_VERR_MINREV_SHIFT		0
#define IWDG_VERR_MINREV_MASK		0x0f
/** @defgroup iwdg_verr_minrev MINREV Minor Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_ipidr IPIDR EXTI Identification register
@{*/


#define IWDG_IPIDR_IPID_SHIFT		0
#define IWDG_IPIDR_IPID_MASK		0xffffffff
/** @defgroup iwdg_ipidr_ipid IPID IP Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_sidr SIDR EXTI Size ID register
@{*/


#define IWDG_SIDR_SID_SHIFT		0
#define IWDG_SIDR_SID_MASK		0xffffffff
/** @defgroup iwdg_sidr_sid SID Size Identification
@{*/
/**@}*/


/**@}*/

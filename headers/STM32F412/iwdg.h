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

/**@}*/


/** @defgroup iwdg_kr KR Key register
@{*/


#define IWDG_KR_KEY_SHIFT		0
#define IWDG_KR_KEY_MASK		0xffff
/** @defgroup iwdg_kr_key KEY Key value
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

/** IWDG_SR_RVU Watchdog counter reload value update **/
#define IWDG_SR_RVU		(1 << 1)
/** IWDG_SR_PVU Watchdog prescaler value update **/
#define IWDG_SR_PVU		(1 << 0)

/**@}*/

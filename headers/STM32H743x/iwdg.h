#pragma once 

/* --- IWDG: IWDG --------------------------------------------------- */

/** @defgroup iwdg_registers IWDG Register
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

/**@}*/


/** @defgroup iwdg_kr KR Key register
@{*/


#define IWDG_KR_KEY_SHIFT		0
#define IWDG_KR_KEY_MASK		0xffff
/** @defgroup iwdg_kr_key KEY Key value (write only, read 0x0000) These bits must be written by software at regular intervals with the key value 0xAAAA, otherwise the watchdog generates a reset when the counter reaches 0. Writing the key value 0x5555 to enable access to the IWDG_PR, IWDG_RLR and IWDG_WINR registers (see Section23.3.6: Register access protection) Writing the key value CCCCh starts the watchdog (except if the hardware watchdog option is selected)
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_pr PR Prescaler register
@{*/


#define IWDG_PR_PR_SHIFT		0
#define IWDG_PR_PR_MASK		0x07
/** @defgroup iwdg_pr_pr PR Prescaler divider These bits are write access protected see Section23.3.6: Register access protection. They are written by software to select the prescaler divider feeding the counter clock. PVU bit of IWDG_SR must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the IWDG_SR register is reset.
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_rlr RLR Reload register
@{*/


#define IWDG_RLR_RL_SHIFT		0
#define IWDG_RLR_RL_MASK		0xfff
/** @defgroup iwdg_rlr_rl RL Watchdog counter reload value These bits are write access protected see Section23.3.6. They are written by software to define the value to be loaded in the watchdog counter each time the value 0xAAAA is written in the IWDG_KR register. The watchdog counter counts down from this value. The timeout period is a function of this value and the clock prescaler. Refer to the datasheet for the timeout information. The RVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing on this register. For this reason the value read from this register is valid only when the RVU bit in the IWDG_SR register is reset.
@{*/
/**@}*/


/**@}*/

/** @defgroup iwdg_sr SR Status register
@{*/

/** IWDG_SR_WVU Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Window value can be updated only when WVU bit is reset. This bit is generated only if generic window = 1 **/
#define IWDG_SR_WVU		(1 << 2)
/** IWDG_SR_RVU Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Reload value can be updated only when RVU bit is reset. **/
#define IWDG_SR_RVU		(1 << 1)
/** IWDG_SR_PVU Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Prescaler value can be updated only when PVU bit is reset. **/
#define IWDG_SR_PVU		(1 << 0)

/**@}*/

/** @defgroup iwdg_winr WINR Window register
@{*/


#define IWDG_WINR_WIN_SHIFT		0
#define IWDG_WINR_WIN_MASK		0xfff
/** @defgroup iwdg_winr_win WIN Watchdog counter window value These bits are write access protected see Section23.3.6. These bits contain the high limit of the window value to be compared to the downcounter. To prevent a reset, the downcounter must be reloaded when its value is lower than the window register value and greater than 0x0 The WVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the WVU bit in the IWDG_SR register is reset.
@{*/
/**@}*/


/**@}*/

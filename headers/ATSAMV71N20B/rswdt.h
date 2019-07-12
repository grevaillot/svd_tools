#pragma once 

/* --- RSWDT: Reinforced Safety Watchdog Timer ---------------------- */

/** @defgroup rswdt_registers Reinforced Safety Watchdog Timer Register
@{*/

/** RSWDT_RSWDT_CR Control Register **/
#define RSWDT_RSWDT_CR			MMIO32(RSWDT_BASE + 0x00)
/** RSWDT_RSWDT_MR Mode Register **/
#define RSWDT_RSWDT_MR			MMIO32(RSWDT_BASE + 0x04)
/** RSWDT_RSWDT_SR Status Register **/
#define RSWDT_RSWDT_SR			MMIO32(RSWDT_BASE + 0x08)

/**@}*/


/** @defgroup rswdt_rswdt_cr RSWDTCR Control Register
@{*/


#define RSWDT_RSWDT_CR_KEY_SHIFT		24
#define RSWDT_RSWDT_CR_KEY_MASK		0xff
/** @defgroup rswdt_rswdt_cr_key KEY Password
@{*/
/**@}*/

/** RSWDT_RSWDT_CR_WDRSTT Watchdog Restart **/
#define RSWDT_RSWDT_CR_WDRSTT		(1 << 0)

/**@}*/

/** @defgroup rswdt_rswdt_mr RSWDTMR Mode Register
@{*/

/** RSWDT_RSWDT_MR_WDIDLEHLT Watchdog Idle Halt **/
#define RSWDT_RSWDT_MR_WDIDLEHLT		(1 << 29)
/** RSWDT_RSWDT_MR_WDDBGHLT Watchdog Debug Halt **/
#define RSWDT_RSWDT_MR_WDDBGHLT		(1 << 28)

#define RSWDT_RSWDT_MR_ALLONES_SHIFT		16
#define RSWDT_RSWDT_MR_ALLONES_MASK		0xfff
/** @defgroup rswdt_rswdt_mr_allones ALLONES Must Always Be Written with 0xFFF
@{*/
/**@}*/

/** RSWDT_RSWDT_MR_WDDIS Watchdog Disable **/
#define RSWDT_RSWDT_MR_WDDIS		(1 << 15)
/** RSWDT_RSWDT_MR_WDRSTEN Watchdog Reset Enable **/
#define RSWDT_RSWDT_MR_WDRSTEN		(1 << 13)
/** RSWDT_RSWDT_MR_WDFIEN Watchdog Fault Interrupt Enable **/
#define RSWDT_RSWDT_MR_WDFIEN		(1 << 12)

#define RSWDT_RSWDT_MR_WDV_SHIFT		0
#define RSWDT_RSWDT_MR_WDV_MASK		0xfff
/** @defgroup rswdt_rswdt_mr_wdv WDV Watchdog Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rswdt_rswdt_sr RSWDTSR Status Register
@{*/

/** RSWDT_RSWDT_SR_WDUNF Watchdog Underflow **/
#define RSWDT_RSWDT_SR_WDUNF		(1 << 0)

/**@}*/

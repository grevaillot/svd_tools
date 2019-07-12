#pragma once 

/* --- WDT: Watchdog Timer ------------------------------------------ */

/** @defgroup wdt_registers Watchdog Timer Register
@{*/

/** WDT_WDT_CR Control Register **/
#define WDT_WDT_CR			MMIO32(WDT_BASE + 0x00)
/** WDT_WDT_MR Mode Register **/
#define WDT_WDT_MR			MMIO32(WDT_BASE + 0x04)
/** WDT_WDT_SR Status Register **/
#define WDT_WDT_SR			MMIO32(WDT_BASE + 0x08)

/**@}*/


/** @defgroup wdt_wdt_cr WDTCR Control Register
@{*/


#define WDT_WDT_CR_KEY_SHIFT		24
#define WDT_WDT_CR_KEY_MASK		0xff
/** @defgroup wdt_wdt_cr_key KEY Password
@{*/
/**@}*/

/** WDT_WDT_CR_WDRSTT Watchdog Restart **/
#define WDT_WDT_CR_WDRSTT		(1 << 0)

/**@}*/

/** @defgroup wdt_wdt_mr WDTMR Mode Register
@{*/

/** WDT_WDT_MR_WDIDLEHLT Watchdog Idle Halt **/
#define WDT_WDT_MR_WDIDLEHLT		(1 << 29)
/** WDT_WDT_MR_WDDBGHLT Watchdog Debug Halt **/
#define WDT_WDT_MR_WDDBGHLT		(1 << 28)

#define WDT_WDT_MR_WDD_SHIFT		16
#define WDT_WDT_MR_WDD_MASK		0xfff
/** @defgroup wdt_wdt_mr_wdd WDD Watchdog Delta Value
@{*/
/**@}*/

/** WDT_WDT_MR_WDDIS Watchdog Disable **/
#define WDT_WDT_MR_WDDIS		(1 << 15)
/** WDT_WDT_MR_WDRSTEN Watchdog Reset Enable **/
#define WDT_WDT_MR_WDRSTEN		(1 << 13)
/** WDT_WDT_MR_WDFIEN Watchdog Fault Interrupt Enable **/
#define WDT_WDT_MR_WDFIEN		(1 << 12)

#define WDT_WDT_MR_WDV_SHIFT		0
#define WDT_WDT_MR_WDV_MASK		0xfff
/** @defgroup wdt_wdt_mr_wdv WDV Watchdog Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup wdt_wdt_sr WDTSR Status Register
@{*/

/** WDT_WDT_SR_WDERR Watchdog Error (cleared on read) **/
#define WDT_WDT_SR_WDERR		(1 << 1)
/** WDT_WDT_SR_WDUNF Watchdog Underflow (cleared on read) **/
#define WDT_WDT_SR_WDUNF		(1 << 0)

/**@}*/

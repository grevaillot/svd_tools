#pragma once 

/* --- WDT: Watchdog Timer ------------------------------------------ */

/** @defgroup wdt_registers Watchdog Timer Register
@{*/

/** WDT_CTRLA Control **/
#define WDT_CTRLA			MMIO32(WDT_BASE + 0x00)
/** WDT_CONFIG Configuration **/
#define WDT_CONFIG			MMIO32(WDT_BASE + 0x01)
/** WDT_EWCTRL Early Warning Interrupt Control **/
#define WDT_EWCTRL			MMIO32(WDT_BASE + 0x02)
/** WDT_INTENCLR Interrupt Enable Clear **/
#define WDT_INTENCLR			MMIO32(WDT_BASE + 0x04)
/** WDT_INTENSET Interrupt Enable Set **/
#define WDT_INTENSET			MMIO32(WDT_BASE + 0x05)
/** WDT_INTFLAG Interrupt Flag Status and Clear **/
#define WDT_INTFLAG			MMIO32(WDT_BASE + 0x06)
/** WDT_SYNCBUSY Synchronization Busy **/
#define WDT_SYNCBUSY			MMIO32(WDT_BASE + 0x08)
/** WDT_CLEAR Clear **/
#define WDT_CLEAR			MMIO32(WDT_BASE + 0x0c)

/**@}*/


/** @defgroup wdt_ctrla CTRLA Control
@{*/

/** WDT_CTRLA_ALWAYSON Always-On **/
#define WDT_CTRLA_ALWAYSON		(1 << 7)
/** WDT_CTRLA_WEN Watchdog Timer Window Mode Enable **/
#define WDT_CTRLA_WEN		(1 << 2)
/** WDT_CTRLA_ENABLE Enable **/
#define WDT_CTRLA_ENABLE		(1 << 1)

/**@}*/

/** @defgroup wdt_config CONFIG Configuration
@{*/


#define WDT_CONFIG_WINDOW_SHIFT		4
#define WDT_CONFIG_WINDOW_MASK		0x0f
/** @defgroup wdt_config_window WINDOW Window Mode Time-Out Period
@{*/
/**@}*/


#define WDT_CONFIG_PER_SHIFT		0
#define WDT_CONFIG_PER_MASK		0x0f
/** @defgroup wdt_config_per PER Time-Out Period
@{*/
/**@}*/


/**@}*/

/** @defgroup wdt_ewctrl EWCTRL Early Warning Interrupt Control
@{*/


#define WDT_EWCTRL_EWOFFSET_SHIFT		0
#define WDT_EWCTRL_EWOFFSET_MASK		0x0f
/** @defgroup wdt_ewctrl_ewoffset EWOFFSET Early Warning Interrupt Time Offset
@{*/
/**@}*/


/**@}*/

/** @defgroup wdt_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** WDT_INTENCLR_EW Early Warning Interrupt Enable **/
#define WDT_INTENCLR_EW		(1 << 0)

/**@}*/

/** @defgroup wdt_intenset INTENSET Interrupt Enable Set
@{*/

/** WDT_INTENSET_EW Early Warning Interrupt Enable **/
#define WDT_INTENSET_EW		(1 << 0)

/**@}*/

/** @defgroup wdt_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** WDT_INTFLAG_EW Early Warning **/
#define WDT_INTFLAG_EW		(1 << 0)

/**@}*/

/** @defgroup wdt_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** WDT_SYNCBUSY_CLEAR Clear Busy **/
#define WDT_SYNCBUSY_CLEAR		(1 << 4)
/** WDT_SYNCBUSY_ALWAYSON Always-On Busy **/
#define WDT_SYNCBUSY_ALWAYSON		(1 << 3)
/** WDT_SYNCBUSY_WEN Window Enable Busy **/
#define WDT_SYNCBUSY_WEN		(1 << 2)
/** WDT_SYNCBUSY_ENABLE Enable Busy **/
#define WDT_SYNCBUSY_ENABLE		(1 << 1)

/**@}*/

/** @defgroup wdt_clear CLEAR Clear
@{*/


#define WDT_CLEAR_CLEAR_SHIFT		0
#define WDT_CLEAR_CLEAR_MASK		0xff
/** @defgroup wdt_clear_clear CLEAR Watchdog Clear
@{*/
/**@}*/


/**@}*/

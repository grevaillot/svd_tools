#pragma once 

/* --- DBG: Debug support ------------------------------------------- */

/** @defgroup dbg_registers Debug support Register
@{*/

/** DBG_IDCODE MCU Device ID Code Register **/
#define DBG_IDCODE			MMIO32(DBG_BASE + 0x00)
/** DBG_CR Debug MCU Configuration Register **/
#define DBG_CR			MMIO32(DBG_BASE + 0x04)
/** DBG_APB1_FZ APB Low Freeze Register **/
#define DBG_APB1_FZ			MMIO32(DBG_BASE + 0x08)
/** DBG_APB2_FZ APB High Freeze Register **/
#define DBG_APB2_FZ			MMIO32(DBG_BASE + 0x0c)

/**@}*/


/** @defgroup dbg_idcode IDCODE MCU Device ID Code Register
@{*/


#define DBG_IDCODE_REV_ID_SHIFT		16
#define DBG_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbg_idcode_rev_id REVID Revision Identifier
@{*/
/**@}*/


#define DBG_IDCODE_DEV_ID_SHIFT		0
#define DBG_IDCODE_DEV_ID_MASK		0xfff
/** @defgroup dbg_idcode_dev_id DEVID Device Identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dbg_cr CR Debug MCU Configuration Register
@{*/

/** DBG_CR_DBG_STANDBY Debug Standby Mode **/
#define DBG_CR_DBG_STANDBY		(1 << 2)
/** DBG_CR_DBG_STOP Debug Stop Mode **/
#define DBG_CR_DBG_STOP		(1 << 1)
/** DBG_CR_DBG_SLEEP Debug Sleep Mode **/
#define DBG_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbg_apb1_fz APB1FZ APB Low Freeze Register
@{*/

/** DBG_APB1_FZ_DBG_LPTIMER_STOP LPTIM1 counter stopped when core is halted **/
#define DBG_APB1_FZ_DBG_LPTIMER_STOP		(1 << 31)
/** DBG_APB1_FZ_DBG_I2C2_STOP I2C2 SMBUS timeout mode stopped when core is halted **/
#define DBG_APB1_FZ_DBG_I2C2_STOP		(1 << 22)
/** DBG_APB1_FZ_DBG_I2C1_STOP I2C1 SMBUS timeout mode stopped when core is halted **/
#define DBG_APB1_FZ_DBG_I2C1_STOP		(1 << 21)
/** DBG_APB1_FZ_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBG_APB1_FZ_DBG_IWDG_STOP		(1 << 12)
/** DBG_APB1_FZ_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBG_APB1_FZ_DBG_WWDG_STOP		(1 << 11)
/** DBG_APB1_FZ_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBG_APB1_FZ_DBG_RTC_STOP		(1 << 10)
/** DBG_APB1_FZ_DBG_TIMER6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBG_APB1_FZ_DBG_TIMER6_STOP		(1 << 4)
/** DBG_APB1_FZ_DBG_TIMER2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBG_APB1_FZ_DBG_TIMER2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbg_apb2_fz APB2FZ APB High Freeze Register
@{*/

/** DBG_APB2_FZ_DBG_TIMER22_STO Debug Timer 22 stopped when Core is halted **/
#define DBG_APB2_FZ_DBG_TIMER22_STO		(1 << 6)
/** DBG_APB2_FZ_DBG_TIMER21_STOP Debug Timer 21 stopped when Core is halted **/
#define DBG_APB2_FZ_DBG_TIMER21_STOP		(1 << 2)

/**@}*/

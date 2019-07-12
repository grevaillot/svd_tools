#pragma once 

/* --- DBGMCU: Debug support ---------------------------------------- */

/** @defgroup dbgmcu_registers Debug support Register
@{*/

/** DBGMCU_IDCODE MCU Device ID Code Register **/
#define DBGMCU_IDCODE			MMIO32(DBGMCU_BASE + 0x00)
/** DBGMCU_CR Debug MCU Configuration Register **/
#define DBGMCU_CR			MMIO32(DBGMCU_BASE + 0x04)
/** DBGMCU_APB1_FZ APB Low Freeze Register **/
#define DBGMCU_APB1_FZ			MMIO32(DBGMCU_BASE + 0x08)
/** DBGMCU_APB2_FZ APB High Freeze Register **/
#define DBGMCU_APB2_FZ			MMIO32(DBGMCU_BASE + 0x0c)

/**@}*/


/** @defgroup dbgmcu_idcode IDCODE MCU Device ID Code Register
@{*/


#define DBGMCU_IDCODE_REV_ID_SHIFT		16
#define DBGMCU_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbgmcu_idcode_rev_id REVID Revision Identifier
@{*/
/**@}*/


#define DBGMCU_IDCODE_DEV_ID_SHIFT		0
#define DBGMCU_IDCODE_DEV_ID_MASK		0xfff
/** @defgroup dbgmcu_idcode_dev_id DEVID Device Identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dbgmcu_cr CR Debug MCU Configuration Register
@{*/

/** DBGMCU_CR_DBG_STANDBY Debug Standby Mode **/
#define DBGMCU_CR_DBG_STANDBY		(1 << 2)
/** DBGMCU_CR_DBG_STOP Debug Stop Mode **/
#define DBGMCU_CR_DBG_STOP		(1 << 1)
/** DBGMCU_CR_DBG_SLEEP Debug Sleep Mode **/
#define DBGMCU_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1_fz APB1FZ APB Low Freeze Register
@{*/

/** DBGMCU_APB1_FZ_DBG_LPTIMER_STOP LPTIM1 counter stopped when core is halted **/
#define DBGMCU_APB1_FZ_DBG_LPTIMER_STOP		(1 << 31)
/** DBGMCU_APB1_FZ_DBG_I2C2_STOP I2C2 SMBUS timeout mode stopped when core is halted **/
#define DBGMCU_APB1_FZ_DBG_I2C2_STOP		(1 << 22)
/** DBGMCU_APB1_FZ_DBG_I2C1_STOP I2C1 SMBUS timeout mode stopped when core is halted **/
#define DBGMCU_APB1_FZ_DBG_I2C1_STOP		(1 << 21)
/** DBGMCU_APB1_FZ_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP		(1 << 12)
/** DBGMCU_APB1_FZ_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP		(1 << 11)
/** DBGMCU_APB1_FZ_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBGMCU_APB1_FZ_DBG_RTC_STOP		(1 << 10)
/** DBGMCU_APB1_FZ_DBG_TIMER6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBGMCU_APB1_FZ_DBG_TIMER6_STOP		(1 << 4)
/** DBGMCU_APB1_FZ_DBG_TIMER2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBGMCU_APB1_FZ_DBG_TIMER2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb2_fz APB2FZ APB High Freeze Register
@{*/

/** DBGMCU_APB2_FZ_DBG_TIMER22_STO Debug Timer 22 stopped when Core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIMER22_STO		(1 << 6)
/** DBGMCU_APB2_FZ_DBG_TIMER21_STOP Debug Timer 21 stopped when Core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIMER21_STOP		(1 << 2)

/**@}*/

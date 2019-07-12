#pragma once 

/* --- DBGMCU: Debug support ---------------------------------------- */

/** @defgroup dbgmcu_registers Debug support Register
@{*/

/** DBGMCU_IDCODE MCU Device ID Code Register **/
#define DBGMCU_IDCODE			MMIO32(DBGMCU_BASE + 0x00)
/** DBGMCU_CR Debug MCU Configuration Register **/
#define DBGMCU_CR			MMIO32(DBGMCU_BASE + 0x04)
/** DBGMCU_APBLFZ APB Low Freeze Register **/
#define DBGMCU_APBLFZ			MMIO32(DBGMCU_BASE + 0x08)
/** DBGMCU_APBHFZ APB High Freeze Register **/
#define DBGMCU_APBHFZ			MMIO32(DBGMCU_BASE + 0x0c)

/**@}*/


/** @defgroup dbgmcu_idcode IDCODE MCU Device ID Code Register
@{*/


#define DBGMCU_IDCODE_REV_ID_SHIFT		16
#define DBGMCU_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbgmcu_idcode_rev_id REVID Revision Identifier
@{*/
/**@}*/


#define DBGMCU_IDCODE_DIV_ID_SHIFT		12
#define DBGMCU_IDCODE_DIV_ID_MASK		0x0f
/** @defgroup dbgmcu_idcode_div_id DIVID Division Identifier
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

/**@}*/

/** @defgroup dbgmcu_apblfz APBLFZ APB Low Freeze Register
@{*/

/** DBGMCU_APBLFZ_I2C1_SMBUS_TIMEOUT SMBUS timeout mode stopped when Core is halted **/
#define DBGMCU_APBLFZ_I2C1_SMBUS_TIMEOUT		(1 << 21)
/** DBGMCU_APBLFZ_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_IWDG_STOP		(1 << 12)
/** DBGMCU_APBLFZ_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_WWDG_STOP		(1 << 11)
/** DBGMCU_APBLFZ_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_RTC_STOP		(1 << 10)
/** DBGMCU_APBLFZ_DBG_TIMER14_STOP Debug Timer 14 stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_TIMER14_STOP		(1 << 8)
/** DBGMCU_APBLFZ_DBG_TIMER6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_TIMER6_STOP		(1 << 4)
/** DBGMCU_APBLFZ_DBG_TIMER3_STOP Debug Timer 3 stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_TIMER3_STOP		(1 << 1)
/** DBGMCU_APBLFZ_DBG_TIMER2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBGMCU_APBLFZ_DBG_TIMER2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apbhfz APBHFZ APB High Freeze Register
@{*/

/** DBGMCU_APBHFZ_DBG_TIMER17_STO Debug Timer 17 stopped when Core is halted **/
#define DBGMCU_APBHFZ_DBG_TIMER17_STO		(1 << 18)
/** DBGMCU_APBHFZ_DBG_TIMER16_STO Debug Timer 16 stopped when Core is halted **/
#define DBGMCU_APBHFZ_DBG_TIMER16_STO		(1 << 17)
/** DBGMCU_APBHFZ_DBG_TIMER15_STO Debug Timer 15 stopped when Core is halted **/
#define DBGMCU_APBHFZ_DBG_TIMER15_STO		(1 << 16)
/** DBGMCU_APBHFZ_DBG_TIMER1_STOP Debug Timer 1 stopped when Core is halted **/
#define DBGMCU_APBHFZ_DBG_TIMER1_STOP		(1 << 11)

/**@}*/

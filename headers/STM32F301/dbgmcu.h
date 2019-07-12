#pragma once 

/* --- DBGMCU: Debug support ---------------------------------------- */

/** @defgroup dbgmcu_registers Debug support Register
@{*/

/** DBGMCU_IDCODE MCU Device ID Code Register **/
#define DBGMCU_IDCODE			MMIO32(DBGMCU_BASE + 0x00)
/** DBGMCU_CR Debug MCU Configuration Register **/
#define DBGMCU_CR			MMIO32(DBGMCU_BASE + 0x04)
/** DBGMCU_APB1FZ APB Low Freeze Register **/
#define DBGMCU_APB1FZ			MMIO32(DBGMCU_BASE + 0x08)
/** DBGMCU_APB2FZ APB High Freeze Register **/
#define DBGMCU_APB2FZ			MMIO32(DBGMCU_BASE + 0x0c)

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


#define DBGMCU_CR_TRACE_MODE_SHIFT		6
#define DBGMCU_CR_TRACE_MODE_MASK		0x03
/** @defgroup dbgmcu_cr_trace_mode TRACEMODE Trace pin assignment control
@{*/
/**@}*/

/** DBGMCU_CR_TRACE_IOEN Trace pin assignment control **/
#define DBGMCU_CR_TRACE_IOEN		(1 << 5)
/** DBGMCU_CR_DBG_STANDBY Debug Standby Mode **/
#define DBGMCU_CR_DBG_STANDBY		(1 << 2)
/** DBGMCU_CR_DBG_STOP Debug Stop Mode **/
#define DBGMCU_CR_DBG_STOP		(1 << 1)
/** DBGMCU_CR_DBG_SLEEP Debug Sleep mode **/
#define DBGMCU_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1fz APB1FZ APB Low Freeze Register
@{*/

/** DBGMCU_APB1FZ_DBG_CAN_STOP Debug CAN stopped when core is halted **/
#define DBGMCU_APB1FZ_DBG_CAN_STOP		(1 << 25)
/** DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT SMBUS timeout mode stopped when Core is halted **/
#define DBGMCU_APB1FZ_I2C2_SMBUS_TIMEOUT		(1 << 22)
/** DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT SMBUS timeout mode stopped when Core is halted **/
#define DBGMCU_APB1FZ_I2C1_SMBUS_TIMEOUT		(1 << 21)
/** DBGMCU_APB1FZ_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_IWDG_STOP		(1 << 12)
/** DBGMCU_APB1FZ_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_WWDG_STOP		(1 << 11)
/** DBGMCU_APB1FZ_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_RTC_STOP		(1 << 10)
/** DBGMCU_APB1FZ_DBG_TIM18_STOP Debug Timer 18 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM18_STOP		(1 << 9)
/** DBGMCU_APB1FZ_DBG_TIMER14_STOP Debug Timer 14 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIMER14_STOP		(1 << 8)
/** DBGMCU_APB1FZ_DBG_TIM13_STOP Debug Timer 13 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM13_STOP		(1 << 7)
/** DBGMCU_APB1FZ_DBG_TIM12_STOP Debug Timer 12 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM12_STOP		(1 << 6)
/** DBGMCU_APB1FZ_DBG_TIM7_STOP Debug Timer 7 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM7_STOP		(1 << 5)
/** DBGMCU_APB1FZ_DBG_TIM6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM6_STOP		(1 << 4)
/** DBGMCU_APB1FZ_DBG_TIM5_STOP Debug Timer 5 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM5_STOP		(1 << 3)
/** DBGMCU_APB1FZ_DBG_TIM4_STOP Debug Timer 4 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM4_STOP		(1 << 2)
/** DBGMCU_APB1FZ_DBG_TIM3_STOP Debug Timer 3 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM3_STOP		(1 << 1)
/** DBGMCU_APB1FZ_DBG_TIM2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBGMCU_APB1FZ_DBG_TIM2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb2fz APB2FZ APB High Freeze Register
@{*/

/** DBGMCU_APB2FZ_DBG_TIM19_STOP Debug Timer 19 stopped when Core is halted **/
#define DBGMCU_APB2FZ_DBG_TIM19_STOP		(1 << 5)
/** DBGMCU_APB2FZ_DBG_TIM17_STO Debug Timer 17 stopped when Core is halted **/
#define DBGMCU_APB2FZ_DBG_TIM17_STO		(1 << 4)
/** DBGMCU_APB2FZ_DBG_TIM16_STOP Debug Timer 16 stopped when Core is halted **/
#define DBGMCU_APB2FZ_DBG_TIM16_STOP		(1 << 3)
/** DBGMCU_APB2FZ_DBG_TIM15_STOP Debug Timer 15 stopped when Core is halted **/
#define DBGMCU_APB2FZ_DBG_TIM15_STOP		(1 << 2)

/**@}*/

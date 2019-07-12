#pragma once 

/* --- DBG: Debug support ------------------------------------------- */

/** @defgroup dbg_registers Debug support Register
@{*/

/** DBG_DBGMCU_IDCODE IDCODE **/
#define DBG_DBGMCU_IDCODE			MMIO32(DBG_BASE + 0x00)
/** DBG_DBGMCU_CR Control Register **/
#define DBG_DBGMCU_CR			MMIO32(DBG_BASE + 0x04)
/** DBG_DBGMCU_APB1_FZ Debug MCU APB1 Freeze registe **/
#define DBG_DBGMCU_APB1_FZ			MMIO32(DBG_BASE + 0x08)
/** DBG_DBGMCU_APB2_FZ Debug MCU APB2 Freeze registe **/
#define DBG_DBGMCU_APB2_FZ			MMIO32(DBG_BASE + 0x0c)

/**@}*/


/** @defgroup dbg_dbgmcu_idcode DBGMCUIDCODE IDCODE
@{*/


#define DBG_DBGMCU_IDCODE_REV_ID_SHIFT		16
#define DBG_DBGMCU_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbg_dbgmcu_idcode_rev_id REVID REV_ID
@{*/
/**@}*/


#define DBG_DBGMCU_IDCODE_DEV_ID_SHIFT		0
#define DBG_DBGMCU_IDCODE_DEV_ID_MASK		0xfff
/** @defgroup dbg_dbgmcu_idcode_dev_id DEVID DEV_ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dbg_dbgmcu_cr DBGMCUCR Control Register
@{*/


#define DBG_DBGMCU_CR_TRACE_MODE_SHIFT		6
#define DBG_DBGMCU_CR_TRACE_MODE_MASK		0x03
/** @defgroup dbg_dbgmcu_cr_trace_mode TRACEMODE TRACE_MODE
@{*/
/**@}*/

/** DBG_DBGMCU_CR_TRACE_IOEN TRACE_IOEN **/
#define DBG_DBGMCU_CR_TRACE_IOEN		(1 << 5)
/** DBG_DBGMCU_CR_DBG_STANDBY DBG_STANDBY **/
#define DBG_DBGMCU_CR_DBG_STANDBY		(1 << 2)
/** DBG_DBGMCU_CR_DBG_STOP DBG_STOP **/
#define DBG_DBGMCU_CR_DBG_STOP		(1 << 1)
/** DBG_DBGMCU_CR_DBG_SLEEP DBG_SLEEP **/
#define DBG_DBGMCU_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbg_dbgmcu_apb1_fz DBGMCUAPB1FZ Debug MCU APB1 Freeze registe
@{*/

/** DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT DBG_J2C3SMBUS_TIMEOUT **/
#define DBG_DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT		(1 << 23)
/** DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT DBG_J2C2_SMBUS_TIMEOUT **/
#define DBG_DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT		(1 << 22)
/** DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT DBG_J2C1_SMBUS_TIMEOUT **/
#define DBG_DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT		(1 << 21)
/** DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP DBG_IWDEG_STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_IWDEG_STOP		(1 << 12)
/** DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP DBG_WWDG_STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_WWDG_STOP		(1 << 11)
/** DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop RTC stopped when Core is halted **/
#define DBG_DBGMCU_APB1_FZ_DBG_RTC_Stop		(1 << 10)
/** DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP DBG_TIM5_STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_TIM5_STOP		(1 << 3)
/** DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP DBG_TIM4_STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_TIM4_STOP		(1 << 2)
/** DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP DBG_TIM3 _STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_TIM3_STOP		(1 << 1)
/** DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP DBG_TIM2_STOP **/
#define DBG_DBGMCU_APB1_FZ_DBG_TIM2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbg_dbgmcu_apb2_fz DBGMCUAPB2FZ Debug MCU APB2 Freeze registe
@{*/

/** DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP TIM11 counter stopped when core is halted **/
#define DBG_DBGMCU_APB2_FZ_DBG_TIM11_STOP		(1 << 18)
/** DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP TIM10 counter stopped when core is halted **/
#define DBG_DBGMCU_APB2_FZ_DBG_TIM10_STOP		(1 << 17)
/** DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP TIM9 counter stopped when core is halted **/
#define DBG_DBGMCU_APB2_FZ_DBG_TIM9_STOP		(1 << 16)
/** DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP TIM1 counter stopped when core is halted **/
#define DBG_DBGMCU_APB2_FZ_DBG_TIM1_STOP		(1 << 0)

/**@}*/

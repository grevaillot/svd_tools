#pragma once 

/* --- DBG: Debug support ------------------------------------------- */

/** @defgroup dbg_registers Debug support Register
@{*/

/** DBG_IDCODE DBGMCU_IDCODE **/
#define DBG_IDCODE			MMIO32(DBG_BASE + 0x00)
/** DBG_CR DBGMCU_CR **/
#define DBG_CR			MMIO32(DBG_BASE + 0x04)

/**@}*/


/** @defgroup dbg_idcode IDCODE DBGMCU_IDCODE
@{*/


#define DBG_IDCODE_REV_ID_SHIFT		16
#define DBG_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbg_idcode_rev_id REVID REV_ID
@{*/
/**@}*/


#define DBG_IDCODE_DEV_ID_SHIFT		0
#define DBG_IDCODE_DEV_ID_MASK		0xfff
/** @defgroup dbg_idcode_dev_id DEVID DEV_ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dbg_cr CR DBGMCU_CR
@{*/

/** DBG_CR_DBG_CAN2_STOP DBG_CAN2_STOP **/
#define DBG_CR_DBG_CAN2_STOP		(1 << 21)
/** DBG_CR_DBG_TIM7_STOP DBG_TIM7_STOP **/
#define DBG_CR_DBG_TIM7_STOP		(1 << 20)
/** DBG_CR_DBG_TIM6_STOP DBG_TIM6_STOP **/
#define DBG_CR_DBG_TIM6_STOP		(1 << 19)
/** DBG_CR_DBG_TIM5_STOP DBG_TIM5_STOP **/
#define DBG_CR_DBG_TIM5_STOP		(1 << 18)
/** DBG_CR_DBG_I2C2_SMBUS_TIMEOUT DBG_I2C2_SMBUS_TIMEOUT **/
#define DBG_CR_DBG_I2C2_SMBUS_TIMEOUT		(1 << 16)
/** DBG_CR_DBG_I2C1_SMBUS_TIMEOUT DBG_I2C1_SMBUS_TIMEOUT **/
#define DBG_CR_DBG_I2C1_SMBUS_TIMEOUT		(1 << 15)
/** DBG_CR_DBG_CAN1_STOP DBG_CAN1_STOP **/
#define DBG_CR_DBG_CAN1_STOP		(1 << 14)
/** DBG_CR_DBG_TIM4_STOP DBG_TIM4_STOP **/
#define DBG_CR_DBG_TIM4_STOP		(1 << 13)
/** DBG_CR_DBG_TIM3_STOP DBG_TIM3_STOP **/
#define DBG_CR_DBG_TIM3_STOP		(1 << 12)
/** DBG_CR_DBG_TIM2_STOP DBG_TIM2_STOP **/
#define DBG_CR_DBG_TIM2_STOP		(1 << 11)
/** DBG_CR_DBG_TIM1_STOP DBG_TIM1_STOP **/
#define DBG_CR_DBG_TIM1_STOP		(1 << 10)
/** DBG_CR_DBG_WWDG_STOP DBG_WWDG_STOP **/
#define DBG_CR_DBG_WWDG_STOP		(1 << 9)
/** DBG_CR_DBG_IWDG_STOP DBG_IWDG_STOP **/
#define DBG_CR_DBG_IWDG_STOP		(1 << 8)

#define DBG_CR_TRACE_MODE_SHIFT		6
#define DBG_CR_TRACE_MODE_MASK		0x03
/** @defgroup dbg_cr_trace_mode TRACEMODE TRACE_MODE
@{*/
/**@}*/

/** DBG_CR_TRACE_IOEN TRACE_IOEN **/
#define DBG_CR_TRACE_IOEN		(1 << 5)
/** DBG_CR_DBG_STANDBY DBG_STANDBY **/
#define DBG_CR_DBG_STANDBY		(1 << 2)
/** DBG_CR_DBG_STOP DBG_STOP **/
#define DBG_CR_DBG_STOP		(1 << 1)
/** DBG_CR_DBG_SLEEP DBG_SLEEP **/
#define DBG_CR_DBG_SLEEP		(1 << 0)

/**@}*/

#pragma once 

/* --- DBG: Debug support ------------------------------------------- */

/** @defgroup dbg_registers Debug support Register
@{*/

/** DBG_IDCODE MCU Device ID Code Register **/
#define DBG_IDCODE			MMIO32(DBG_BASE + 0x00)
/** DBG_CR Debug MCU Configuration Register **/
#define DBG_CR			MMIO32(DBG_BASE + 0x04)
/** DBG_APB_FZ1 DBG APB freeze register 1 **/
#define DBG_APB_FZ1			MMIO32(DBG_BASE + 0x08)
/** DBG_APB_FZ2 DBG APB freeze register 2 **/
#define DBG_APB_FZ2			MMIO32(DBG_BASE + 0x0c)

/**@}*/


/** @defgroup dbg_idcode IDCODE MCU Device ID Code Register
@{*/


#define DBG_IDCODE_REV_ID_SHIFT		16
#define DBG_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbg_idcode_rev_id REVID Revision Identifier
@{*/
/**@}*/


#define DBG_IDCODE_DEV_ID_SHIFT		0
#define DBG_IDCODE_DEV_ID_MASK		0xffff
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

/**@}*/

/** @defgroup dbg_apb_fz1 APBFZ1 DBG APB freeze register 1
@{*/

/** DBG_APB_FZ1_DBG_LPTIM1_STOP Clocking of LPTIMER1 counter when the core is halted **/
#define DBG_APB_FZ1_DBG_LPTIM1_STOP		(1 << 31)
/** DBG_APB_FZ1_DBG_LPTIM2_STOP Clocking of LPTIMER2 counter when the core is halted **/
#define DBG_APB_FZ1_DBG_LPTIM2_STOP		(1 << 30)
/** DBG_APB_FZ1_DBG_I2C1_STOP I2C1 SMBUS timeout mode stopped when core is halted **/
#define DBG_APB_FZ1_DBG_I2C1_STOP		(1 << 21)
/** DBG_APB_FZ1_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBG_APB_FZ1_DBG_IWDG_STOP		(1 << 12)
/** DBG_APB_FZ1_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBG_APB_FZ1_DBG_WWDG_STOP		(1 << 11)
/** DBG_APB_FZ1_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBG_APB_FZ1_DBG_RTC_STOP		(1 << 10)
/** DBG_APB_FZ1_DBG_TIM7_STOP TIM7 counter stopped when core is halted **/
#define DBG_APB_FZ1_DBG_TIM7_STOP		(1 << 5)
/** DBG_APB_FZ1_DBG_TIMER6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBG_APB_FZ1_DBG_TIMER6_STOP		(1 << 4)
/** DBG_APB_FZ1_DBG_TIM3_STOP TIM3 counter stopped when core is halted **/
#define DBG_APB_FZ1_DBG_TIM3_STOP		(1 << 1)
/** DBG_APB_FZ1_DBG_TIMER2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBG_APB_FZ1_DBG_TIMER2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbg_apb_fz2 APBFZ2 DBG APB freeze register 2
@{*/

/** DBG_APB_FZ2_DBG_TIM17_STOP DBG_TIM17_STOP **/
#define DBG_APB_FZ2_DBG_TIM17_STOP		(1 << 18)
/** DBG_APB_FZ2_DBG_TIM16_STOP DBG_TIM16_STOP **/
#define DBG_APB_FZ2_DBG_TIM16_STOP		(1 << 17)
/** DBG_APB_FZ2_DBG_TIM15_STOP DBG_TIM15_STOP **/
#define DBG_APB_FZ2_DBG_TIM15_STOP		(1 << 16)
/** DBG_APB_FZ2_DBG_TIM14_STOP DBG_TIM14_STOP **/
#define DBG_APB_FZ2_DBG_TIM14_STOP		(1 << 15)
/** DBG_APB_FZ2_DBG_TIM1_STOP DBG_TIM1_STOP **/
#define DBG_APB_FZ2_DBG_TIM1_STOP		(1 << 11)

/**@}*/

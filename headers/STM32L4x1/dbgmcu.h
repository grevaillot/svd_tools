#pragma once 

/* --- DBGMCU: MCU debug component ---------------------------------- */

/** @defgroup dbgmcu_registers MCU debug component Register
@{*/

/** DBGMCU_IDCODE DBGMCU_IDCODE **/
#define DBGMCU_IDCODE			MMIO32(DBGMCU_BASE + 0x00)
/** DBGMCU_CR Debug MCU configuration register **/
#define DBGMCU_CR			MMIO32(DBGMCU_BASE + 0x04)
/** DBGMCU_APB1FZR1 Debug MCU APB1 freeze register1 **/
#define DBGMCU_APB1FZR1			MMIO32(DBGMCU_BASE + 0x08)
/** DBGMCU_APB1FZR2 Debug MCU APB1 freeze register 2 **/
#define DBGMCU_APB1FZR2			MMIO32(DBGMCU_BASE + 0x0c)
/** DBGMCU_APB2FZR Debug MCU APB2 freeze register **/
#define DBGMCU_APB2FZR			MMIO32(DBGMCU_BASE + 0x10)

/**@}*/


/** @defgroup dbgmcu_idcode IDCODE DBGMCU_IDCODE
@{*/


#define DBGMCU_IDCODE_REV_ID_SHIFT		16
#define DBGMCU_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbgmcu_idcode_rev_id REVID Revision identifie
@{*/
/**@}*/


#define DBGMCU_IDCODE_DEV_ID_SHIFT		0
#define DBGMCU_IDCODE_DEV_ID_MASK		0xfff
/** @defgroup dbgmcu_idcode_dev_id DEVID Device identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dbgmcu_cr CR Debug MCU configuration register
@{*/


#define DBGMCU_CR_TRACE_MODE_SHIFT		6
#define DBGMCU_CR_TRACE_MODE_MASK		0x03
/** @defgroup dbgmcu_cr_trace_mode TRACEMODE Trace pin assignment control
@{*/
/**@}*/

/** DBGMCU_CR_TRACE_IOEN Trace pin assignment control **/
#define DBGMCU_CR_TRACE_IOEN		(1 << 5)
/** DBGMCU_CR_DBG_STANDBY Debug Standby mode **/
#define DBGMCU_CR_DBG_STANDBY		(1 << 2)
/** DBGMCU_CR_DBG_STOP Debug Stop mode **/
#define DBGMCU_CR_DBG_STOP		(1 << 1)
/** DBGMCU_CR_DBG_SLEEP Debug Sleep mode **/
#define DBGMCU_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1fzr1 APB1FZR1 Debug MCU APB1 freeze register1
@{*/

/** DBGMCU_APB1FZR1_DBG_LPTIM1_STOP LPTIM1 counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_LPTIM1_STOP		(1 << 31)
/** DBGMCU_APB1FZR1_DBG_CAN_STOP bxCAN stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_CAN_STOP		(1 << 25)
/** DBGMCU_APB1FZR1_DBG_I2C3_STOP I2C3 SMBUS timeout counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_I2C3_STOP		(1 << 23)
/** DBGMCU_APB1FZR1_DBG_I2C2_STOP I2C2 SMBUS timeout counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_I2C2_STOP		(1 << 22)
/** DBGMCU_APB1FZR1_DBG_I2C1_STOP I2C1 SMBUS timeout counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_I2C1_STOP		(1 << 21)
/** DBGMCU_APB1FZR1_DBG_IWDG_STOP Independent watchdog counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_IWDG_STOP		(1 << 12)
/** DBGMCU_APB1FZR1_DBG_WWDG_STOP Window watchdog counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_WWDG_STOP		(1 << 11)
/** DBGMCU_APB1FZR1_DBG_RTC_STOP RTC counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_RTC_STOP		(1 << 10)
/** DBGMCU_APB1FZR1_DBG_TIM7_STOP TIM7 counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_TIM7_STOP		(1 << 5)
/** DBGMCU_APB1FZR1_DBG_TIM6_STOP TIM6 counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_TIM6_STOP		(1 << 4)
/** DBGMCU_APB1FZR1_DBG_TIM2_STOP TIM2 counter stopped when core is halted **/
#define DBGMCU_APB1FZR1_DBG_TIM2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1fzr2 APB1FZR2 Debug MCU APB1 freeze register 2
@{*/

/** DBGMCU_APB1FZR2_DBG_LPTIM2_STOP LPTIM2 counter stopped when core is halted **/
#define DBGMCU_APB1FZR2_DBG_LPTIM2_STOP		(1 << 5)

/**@}*/

/** @defgroup dbgmcu_apb2fzr APB2FZR Debug MCU APB2 freeze register
@{*/

/** DBGMCU_APB2FZR_DBG_TIM16_STOP TIM16 counter stopped when core is halted **/
#define DBGMCU_APB2FZR_DBG_TIM16_STOP		(1 << 17)
/** DBGMCU_APB2FZR_DBG_TIM15_STOP TIM15 counter stopped when core is halted **/
#define DBGMCU_APB2FZR_DBG_TIM15_STOP		(1 << 16)
/** DBGMCU_APB2FZR_DBG_TIM1_STOP TIM1 counter stopped when core is halted **/
#define DBGMCU_APB2FZR_DBG_TIM1_STOP		(1 << 11)

/**@}*/

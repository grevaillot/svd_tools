#pragma once 

/* --- DBGMCU: Debug support ---------------------------------------- */

/** @defgroup dbgmcu_registers Debug support Register
@{*/

/** DBGMCU_IDCODE MCU Device ID Code Register **/
#define DBGMCU_IDCODE			MMIO32(DBGMCU_BASE + 0x00)
/** DBGMCU_CR Debug MCU Configuration Register **/
#define DBGMCU_CR			MMIO32(DBGMCU_BASE + 0x04)
/** DBGMCU_APB1L_FZ APB Low Freeze Register 1 **/
#define DBGMCU_APB1L_FZ			MMIO32(DBGMCU_BASE + 0x08)
/** DBGMCU_APB1H_FZ APB Low Freeze Register 2 **/
#define DBGMCU_APB1H_FZ			MMIO32(DBGMCU_BASE + 0x0c)
/** DBGMCU_APB2_FZ APB High Freeze Register **/
#define DBGMCU_APB2_FZ			MMIO32(DBGMCU_BASE + 0x10)

/**@}*/


/** @defgroup dbgmcu_idcode IDCODE MCU Device ID Code Register
@{*/


#define DBGMCU_IDCODE_REV_ID_SHIFT		16
#define DBGMCU_IDCODE_REV_ID_MASK		0xffff
/** @defgroup dbgmcu_idcode_rev_id REVID Revision Identifier
@{*/
/**@}*/


#define DBGMCU_IDCODE_DEV_ID_SHIFT		0
#define DBGMCU_IDCODE_DEV_ID_MASK		0xffff
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
/** DBGMCU_CR_DBG_SLEEP Debug Sleep Mode **/
#define DBGMCU_CR_DBG_SLEEP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1l_fz APB1LFZ APB Low Freeze Register 1
@{*/

/** DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP LPTIM1 counter stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP		(1 << 31)
/** DBGMCU_APB1L_FZ_DBG_I2C3_STOP I2C3 SMBUS timeout mode stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_I2C3_STOP		(1 << 30)
/** DBGMCU_APB1L_FZ_DBG_I2C2_STOP I2C2 SMBUS timeout mode stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_I2C2_STOP		(1 << 22)
/** DBGMCU_APB1L_FZ_DBG_I2C1_STOP I2C1 SMBUS timeout mode stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_I2C1_STOP		(1 << 21)
/** DBGMCU_APB1L_FZ_DBG_IWDG_STOP Debug Independent Wachdog stopped when Core is halted **/
#define DBGMCU_APB1L_FZ_DBG_IWDG_STOP		(1 << 12)
/** DBGMCU_APB1L_FZ_DBG_WWDG_STOP Debug Window Wachdog stopped when Core is halted **/
#define DBGMCU_APB1L_FZ_DBG_WWDG_STOP		(1 << 11)
/** DBGMCU_APB1L_FZ_DBG_RTC_STOP Debug RTC stopped when Core is halted **/
#define DBGMCU_APB1L_FZ_DBG_RTC_STOP		(1 << 10)
/** DBGMCU_APB1L_FZ_DBG_TIM7_STOP TIM7 counter stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIM7_STOP		(1 << 5)
/** DBGMCU_APB1L_FZ_DBG_TIMER6_STOP Debug Timer 6 stopped when Core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIMER6_STOP		(1 << 4)
/** DBGMCU_APB1L_FZ_DBG_TIM5_STOP TIM5 counter stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIM5_STOP		(1 << 3)
/** DBGMCU_APB1L_FZ_DBG_TIM4_STOP TIM4 counter stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIM4_STOP		(1 << 2)
/** DBGMCU_APB1L_FZ_DBG_TIM3_STOP TIM3 counter stopped when core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIM3_STOP		(1 << 1)
/** DBGMCU_APB1L_FZ_DBG_TIMER2_STOP Debug Timer 2 stopped when Core is halted **/
#define DBGMCU_APB1L_FZ_DBG_TIMER2_STOP		(1 << 0)

/**@}*/

/** @defgroup dbgmcu_apb1h_fz APB1HFZ APB Low Freeze Register 2
@{*/

/** DBGMCU_APB1H_FZ_DBG_I2C4_STOP DBG_I2C4_STOP **/
#define DBGMCU_APB1H_FZ_DBG_I2C4_STOP		(1 << 1)

/**@}*/

/** @defgroup dbgmcu_apb2_fz APB2FZ APB High Freeze Register
@{*/

/** DBGMCU_APB2_FZ_DBG_HRTIM3_STOP DBG_HRTIM0_STOP **/
#define DBGMCU_APB2_FZ_DBG_HRTIM3_STOP		(1 << 29)
/** DBGMCU_APB2_FZ_DBG_HRTIM2_STOP DBG_HRTIM0_STOP **/
#define DBGMCU_APB2_FZ_DBG_HRTIM2_STOP		(1 << 28)
/** DBGMCU_APB2_FZ_DBG_HRTIM1_STOP DBG_HRTIM0_STOP **/
#define DBGMCU_APB2_FZ_DBG_HRTIM1_STOP		(1 << 27)
/** DBGMCU_APB2_FZ_DBG_HRTIM0_STOP DBG_HRTIM0_STOP **/
#define DBGMCU_APB2_FZ_DBG_HRTIM0_STOP		(1 << 26)
/** DBGMCU_APB2_FZ_DBG_TIM20_STOP TIM20counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM20_STOP		(1 << 20)
/** DBGMCU_APB2_FZ_DBG_TIM17_STOP TIM17 counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM17_STOP		(1 << 18)
/** DBGMCU_APB2_FZ_DBG_TIM16_STOP TIM16 counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM16_STOP		(1 << 17)
/** DBGMCU_APB2_FZ_DBG_TIM15_STOP TIM15 counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM15_STOP		(1 << 16)
/** DBGMCU_APB2_FZ_DBG_TIM8_STOP TIM8 counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM8_STOP		(1 << 13)
/** DBGMCU_APB2_FZ_DBG_TIM1_STOP TIM1 counter stopped when core is halted **/
#define DBGMCU_APB2_FZ_DBG_TIM1_STOP		(1 << 11)

/**@}*/

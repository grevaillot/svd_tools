#pragma once 

/* --- STK: SysTick timer ------------------------------------------- */

/** @defgroup stk_registers SysTick timer Register
@{*/

/** STK_CTRL SysTick control and status register **/
#define STK_CTRL			MMIO32(STK_BASE + 0x00)
/** STK_LOAD SysTick reload value register **/
#define STK_LOAD			MMIO32(STK_BASE + 0x04)
/** STK_VAL SysTick current value register **/
#define STK_VAL			MMIO32(STK_BASE + 0x08)
/** STK_CALIB SysTick calibration value register **/
#define STK_CALIB			MMIO32(STK_BASE + 0x0c)

/**@}*/


/** @defgroup stk_ctrl CTRL SysTick control and status register
@{*/

/** STK_CTRL_COUNTFLAG COUNTFLAG **/
#define STK_CTRL_COUNTFLAG		(1 << 16)
/** STK_CTRL_CLKSOURCE Clock source selection **/
#define STK_CTRL_CLKSOURCE		(1 << 2)
/** STK_CTRL_TICKINT SysTick exception request enable **/
#define STK_CTRL_TICKINT		(1 << 1)
/** STK_CTRL_ENABLE Counter enable **/
#define STK_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup stk_load LOAD SysTick reload value register
@{*/


#define STK_LOAD_RELOAD_SHIFT		0
#define STK_LOAD_RELOAD_MASK		0xffffff
/** @defgroup stk_load_reload RELOAD RELOAD value
@{*/
/**@}*/


/**@}*/

/** @defgroup stk_val VAL SysTick current value register
@{*/


#define STK_VAL_CURRENT_SHIFT		0
#define STK_VAL_CURRENT_MASK		0xffffff
/** @defgroup stk_val_current CURRENT Current counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup stk_calib CALIB SysTick calibration value register
@{*/

/** STK_CALIB_NOREF NOREF flag. Reads as zero **/
#define STK_CALIB_NOREF		(1 << 31)
/** STK_CALIB_SKEW SKEW flag: Indicates whether the TENMS value is exact **/
#define STK_CALIB_SKEW		(1 << 30)

#define STK_CALIB_TENMS_SHIFT		0
#define STK_CALIB_TENMS_MASK		0xffffff
/** @defgroup stk_calib_tenms TENMS Calibration value
@{*/
/**@}*/


/**@}*/

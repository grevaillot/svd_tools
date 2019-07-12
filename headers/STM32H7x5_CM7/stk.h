#pragma once 

/* --- STK: SysTick timer ------------------------------------------- */

/** @defgroup stk_registers SysTick timer Register
@{*/

/** STK_CSR SysTick control and status register **/
#define STK_CSR			MMIO32(STK_BASE + 0x00)
/** STK_RVR SysTick reload value register **/
#define STK_RVR			MMIO32(STK_BASE + 0x04)
/** STK_CVR SysTick current value register **/
#define STK_CVR			MMIO32(STK_BASE + 0x08)
/** STK_CALIB SysTick calibration value register **/
#define STK_CALIB			MMIO32(STK_BASE + 0x0c)

/**@}*/


/** @defgroup stk_csr CSR SysTick control and status register
@{*/

/** STK_CSR_COUNTFLAG COUNTFLAG **/
#define STK_CSR_COUNTFLAG		(1 << 16)
/** STK_CSR_CLKSOURCE Clock source selection **/
#define STK_CSR_CLKSOURCE		(1 << 2)
/** STK_CSR_TICKINT SysTick exception request enable **/
#define STK_CSR_TICKINT		(1 << 1)
/** STK_CSR_ENABLE Counter enable **/
#define STK_CSR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup stk_rvr RVR SysTick reload value register
@{*/


#define STK_RVR_RELOAD_SHIFT		0
#define STK_RVR_RELOAD_MASK		0xffffff
/** @defgroup stk_rvr_reload RELOAD RELOAD value
@{*/
/**@}*/


/**@}*/

/** @defgroup stk_cvr CVR SysTick current value register
@{*/


#define STK_CVR_CURRENT_SHIFT		0
#define STK_CVR_CURRENT_MASK		0xffffff
/** @defgroup stk_cvr_current CURRENT Current counter value
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

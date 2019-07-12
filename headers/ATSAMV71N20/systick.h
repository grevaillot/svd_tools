#pragma once 

/* --- SysTick: System timer ---------------------------------------- */

/** @defgroup systick_registers System timer Register
@{*/

/** SysTick_CSR Control and Status Register **/
#define SysTick_CSR			MMIO32(SysTick_BASE + 0x00)
/** SysTick_RVR Reload Value Register **/
#define SysTick_RVR			MMIO32(SysTick_BASE + 0x04)
/** SysTick_CVR Current Value Register **/
#define SysTick_CVR			MMIO32(SysTick_BASE + 0x08)
/** SysTick_CALIB Calibration Value Register **/
#define SysTick_CALIB			MMIO32(SysTick_BASE + 0x0c)

/**@}*/


/** @defgroup systick_csr CSR Control and Status Register
@{*/

/** SysTick_CSR_COUNTFLAG Returns 1 if timer counted to 0 since last time this was read **/
#define SysTick_CSR_COUNTFLAG		(1 << 16)
/** SysTick_CSR_CLKSOURCE Indicates the clock source **/
#define SysTick_CSR_CLKSOURCE		(1 << 2)
/** SysTick_CSR_TICKINT Enables SysTick exception request **/
#define SysTick_CSR_TICKINT		(1 << 1)
/** SysTick_CSR_ENABLE Enables the counter **/
#define SysTick_CSR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup systick_rvr RVR Reload Value Register
@{*/


#define SysTick_RVR_RELOAD_SHIFT		0
#define SysTick_RVR_RELOAD_MASK		0xffffff
/** @defgroup systick_rvr_reload RELOAD Value to load into the SysTick Current Value Register when the counter reaches 0
@{*/
/**@}*/


/**@}*/

/** @defgroup systick_cvr CVR Current Value Register
@{*/


#define SysTick_CVR_CURRENT_SHIFT		0
#define SysTick_CVR_CURRENT_MASK		0xffffff
/** @defgroup systick_cvr_current CURRENT Current value at the time the register is accessed
@{*/
/**@}*/


/**@}*/

/** @defgroup systick_calib CALIB Calibration Value Register
@{*/

/** SysTick_CALIB_NOREF Indicates whether the device provides a reference clock to the processor **/
#define SysTick_CALIB_NOREF		(1 << 31)
/** SysTick_CALIB_SKEW Indicates whether the TENMS value is exact **/
#define SysTick_CALIB_SKEW		(1 << 30)

#define SysTick_CALIB_TENMS_SHIFT		0
#define SysTick_CALIB_TENMS_MASK		0xffffff
/** @defgroup systick_calib_tenms TENMS Reload value to use for 10ms timing
@{*/
/**@}*/


/**@}*/

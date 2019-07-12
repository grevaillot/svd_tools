#pragma once 

/* --- SysTick_NS: SysTick Timer ------------------------------------ */

/** @defgroup systick_ns_registers SysTick Timer Register
@{*/

/** SysTick_NS_SYST_CSR SysTick Control and Status Register **/
#define SysTick_NS_SYST_CSR			MMIO32(SysTick_NS_BASE + 0x00)
/** SysTick_NS_SYST_RVR SysTick Reload Value Register **/
#define SysTick_NS_SYST_RVR			MMIO32(SysTick_NS_BASE + 0x04)
/** SysTick_NS_SYST_CVR SysTick Current Value Register **/
#define SysTick_NS_SYST_CVR			MMIO32(SysTick_NS_BASE + 0x08)
/** SysTick_NS_SYST_CALIB SysTick Calibration Value Register **/
#define SysTick_NS_SYST_CALIB			MMIO32(SysTick_NS_BASE + 0x0c)

/**@}*/


/** @defgroup systick_ns_syst_csr SYSTCSR SysTick Control and Status Register
@{*/

/** SysTick_NS_SYST_CSR_COUNTFLAG Count flag **/
#define SysTick_NS_SYST_CSR_COUNTFLAG		(1 << 16)
/** SysTick_NS_SYST_CSR_CLKSOURCE Clock source **/
#define SysTick_NS_SYST_CSR_CLKSOURCE		(1 << 2)
/** SysTick_NS_SYST_CSR_TICKINT Tick interrupt **/
#define SysTick_NS_SYST_CSR_TICKINT		(1 << 1)
/** SysTick_NS_SYST_CSR_ENABLE SysTick enable **/
#define SysTick_NS_SYST_CSR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup systick_ns_syst_rvr SYSTRVR SysTick Reload Value Register
@{*/

/** SysTick_NS_SYST_RVR_RELOAD Counter reload value **/
#define SysTick_NS_SYST_RVR_RELOAD		(1 << 24)

/**@}*/

/** @defgroup systick_ns_syst_cvr SYSTCVR SysTick Current Value Register
@{*/

/** SysTick_NS_SYST_CVR_CURRENT Current counter value **/
#define SysTick_NS_SYST_CVR_CURRENT		(1 << 24)

/**@}*/

/** @defgroup systick_ns_syst_calib SYSTCALIB SysTick Calibration Value Register
@{*/

/** SysTick_NS_SYST_CALIB_NOREF No reference **/
#define SysTick_NS_SYST_CALIB_NOREF		(1 << 31)
/** SysTick_NS_SYST_CALIB_SKEW Skew **/
#define SysTick_NS_SYST_CALIB_SKEW		(1 << 30)

#define SysTick_NS_SYST_CALIB_TENMS_SHIFT		0
#define SysTick_NS_SYST_CALIB_TENMS_MASK		0xffffff
/** @defgroup systick_ns_syst_calib_tenms TENMS Ten milliseconds
@{*/
/**@}*/


/**@}*/

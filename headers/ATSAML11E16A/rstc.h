#pragma once 

/* --- RSTC: Reset Controller --------------------------------------- */

/** @defgroup rstc_registers Reset Controller Register
@{*/

/** RSTC_RCAUSE Reset Cause **/
#define RSTC_RCAUSE			MMIO32(RSTC_BASE + 0x00)

/**@}*/


/** @defgroup rstc_rcause RCAUSE Reset Cause
@{*/

/** RSTC_RCAUSE_SYST System Reset Request **/
#define RSTC_RCAUSE_SYST		(1 << 6)
/** RSTC_RCAUSE_WDT Watchdog Reset **/
#define RSTC_RCAUSE_WDT		(1 << 5)
/** RSTC_RCAUSE_EXT External Reset **/
#define RSTC_RCAUSE_EXT		(1 << 4)
/** RSTC_RCAUSE_BODVDD Brown Out VDD Detector Reset **/
#define RSTC_RCAUSE_BODVDD		(1 << 2)
/** RSTC_RCAUSE_BODCORE Brown Out CORE Detector Reset **/
#define RSTC_RCAUSE_BODCORE		(1 << 1)
/** RSTC_RCAUSE_POR Power On Reset **/
#define RSTC_RCAUSE_POR		(1 << 0)

/**@}*/

#pragma once 

/* --- RSTC: Reset Controller --------------------------------------- */

/** @defgroup rstc_registers Reset Controller Register
@{*/

/** RSTC_RCAUSE Reset Cause **/
#define RSTC_RCAUSE			MMIO32(RSTC_BASE + 0x00)
/** RSTC_BKUPEXIT Backup Exit Source **/
#define RSTC_BKUPEXIT			MMIO32(RSTC_BASE + 0x02)
/** RSTC_WKDBCONF Wakeup Debounce Configuration **/
#define RSTC_WKDBCONF			MMIO32(RSTC_BASE + 0x04)
/** RSTC_WKPOL Wakeup Polarity **/
#define RSTC_WKPOL			MMIO32(RSTC_BASE + 0x08)
/** RSTC_WKEN Wakeup Enable **/
#define RSTC_WKEN			MMIO32(RSTC_BASE + 0x0c)
/** RSTC_WKCAUSE Wakeup Cause **/
#define RSTC_WKCAUSE			MMIO32(RSTC_BASE + 0x10)

/**@}*/


/** @defgroup rstc_rcause RCAUSE Reset Cause
@{*/

/** RSTC_RCAUSE_BACKUP Backup Reset **/
#define RSTC_RCAUSE_BACKUP		(1 << 7)
/** RSTC_RCAUSE_SYST System Reset Request **/
#define RSTC_RCAUSE_SYST		(1 << 6)
/** RSTC_RCAUSE_WDT Watchdog Reset **/
#define RSTC_RCAUSE_WDT		(1 << 5)
/** RSTC_RCAUSE_EXT External Reset **/
#define RSTC_RCAUSE_EXT		(1 << 4)
/** RSTC_RCAUSE_BOD33 Brown Out 33 Detector Reset **/
#define RSTC_RCAUSE_BOD33		(1 << 2)
/** RSTC_RCAUSE_BOD12 Brown Out 12 Detector Reset **/
#define RSTC_RCAUSE_BOD12		(1 << 1)
/** RSTC_RCAUSE_POR Power On Reset **/
#define RSTC_RCAUSE_POR		(1 << 0)

/**@}*/

/** @defgroup rstc_bkupexit BKUPEXIT Backup Exit Source
@{*/

/** RSTC_BKUPEXIT_BBPS Battery Backup Power Switch **/
#define RSTC_BKUPEXIT_BBPS		(1 << 2)
/** RSTC_BKUPEXIT_RTC Real Timer Counter Interrupt **/
#define RSTC_BKUPEXIT_RTC		(1 << 1)
/** RSTC_BKUPEXIT_EXTWAKE External Wakeup **/
#define RSTC_BKUPEXIT_EXTWAKE		(1 << 0)

/**@}*/

/** @defgroup rstc_wkdbconf WKDBCONF Wakeup Debounce Configuration
@{*/


#define RSTC_WKDBCONF_WKDBCNT_SHIFT		0
#define RSTC_WKDBCONF_WKDBCNT_MASK		0x1f
/** @defgroup rstc_wkdbconf_wkdbcnt WKDBCNT Wakeup Debounce Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup rstc_wkpol WKPOL Wakeup Polarity
@{*/


#define RSTC_WKPOL_WKPOL_SHIFT		0
#define RSTC_WKPOL_WKPOL_MASK		0xff
/** @defgroup rstc_wkpol_wkpol WKPOL Wakeup Polarity
@{*/
/**@}*/


/**@}*/

/** @defgroup rstc_wken WKEN Wakeup Enable
@{*/


#define RSTC_WKEN_WKEN_SHIFT		0
#define RSTC_WKEN_WKEN_MASK		0xff
/** @defgroup rstc_wken_wken WKEN Wakeup Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup rstc_wkcause WKCAUSE Wakeup Cause
@{*/


#define RSTC_WKCAUSE_WKCAUSE_SHIFT		0
#define RSTC_WKCAUSE_WKCAUSE_MASK		0xffff
/** @defgroup rstc_wkcause_wkcause WKCAUSE Wakeup Cause
@{*/
/**@}*/


/**@}*/

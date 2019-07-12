#pragma once 

/* --- OSC32KCTRL: 32k Oscillators Control -------------------------- */

/** @defgroup osc32kctrl_registers 32k Oscillators Control Register
@{*/

/** OSC32KCTRL_INTENCLR Interrupt Enable Clear **/
#define OSC32KCTRL_INTENCLR			MMIO32(OSC32KCTRL_BASE + 0x00)
/** OSC32KCTRL_INTENSET Interrupt Enable Set **/
#define OSC32KCTRL_INTENSET			MMIO32(OSC32KCTRL_BASE + 0x04)
/** OSC32KCTRL_INTFLAG Interrupt Flag Status and Clear **/
#define OSC32KCTRL_INTFLAG			MMIO32(OSC32KCTRL_BASE + 0x08)
/** OSC32KCTRL_STATUS Power and Clocks Status **/
#define OSC32KCTRL_STATUS			MMIO32(OSC32KCTRL_BASE + 0x0c)
/** OSC32KCTRL_RTCCTRL RTC Clock Selection **/
#define OSC32KCTRL_RTCCTRL			MMIO32(OSC32KCTRL_BASE + 0x10)
/** OSC32KCTRL_XOSC32K 32kHz External Crystal Oscillator (XOSC32K) Control **/
#define OSC32KCTRL_XOSC32K			MMIO32(OSC32KCTRL_BASE + 0x14)
/** OSC32KCTRL_CFDCTRL Clock Failure Detector Control **/
#define OSC32KCTRL_CFDCTRL			MMIO32(OSC32KCTRL_BASE + 0x16)
/** OSC32KCTRL_EVCTRL Event Control **/
#define OSC32KCTRL_EVCTRL			MMIO32(OSC32KCTRL_BASE + 0x17)
/** OSC32KCTRL_OSCULP32K 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control **/
#define OSC32KCTRL_OSCULP32K			MMIO32(OSC32KCTRL_BASE + 0x1c)

/**@}*/


/** @defgroup osc32kctrl_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** OSC32KCTRL_INTENCLR_CLKFAIL XOSC32K Clock Failure Detector Interrupt Enable **/
#define OSC32KCTRL_INTENCLR_CLKFAIL		(1 << 2)
/** OSC32KCTRL_INTENCLR_XOSC32KRDY XOSC32K Ready Interrupt Enable **/
#define OSC32KCTRL_INTENCLR_XOSC32KRDY		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_intenset INTENSET Interrupt Enable Set
@{*/

/** OSC32KCTRL_INTENSET_CLKFAIL XOSC32K Clock Failure Detector Interrupt Enable **/
#define OSC32KCTRL_INTENSET_CLKFAIL		(1 << 2)
/** OSC32KCTRL_INTENSET_XOSC32KRDY XOSC32K Ready Interrupt Enable **/
#define OSC32KCTRL_INTENSET_XOSC32KRDY		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** OSC32KCTRL_INTFLAG_CLKFAIL XOSC32K Clock Failure Detector **/
#define OSC32KCTRL_INTFLAG_CLKFAIL		(1 << 2)
/** OSC32KCTRL_INTFLAG_XOSC32KRDY XOSC32K Ready **/
#define OSC32KCTRL_INTFLAG_XOSC32KRDY		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_status STATUS Power and Clocks Status
@{*/

/** OSC32KCTRL_STATUS_ULP32KSW OSCULP32K Clock Switch **/
#define OSC32KCTRL_STATUS_ULP32KSW		(1 << 4)
/** OSC32KCTRL_STATUS_CLKSW XOSC32K Clock switch **/
#define OSC32KCTRL_STATUS_CLKSW		(1 << 3)
/** OSC32KCTRL_STATUS_CLKFAIL XOSC32K Clock Failure Detector **/
#define OSC32KCTRL_STATUS_CLKFAIL		(1 << 2)
/** OSC32KCTRL_STATUS_XOSC32KRDY XOSC32K Ready **/
#define OSC32KCTRL_STATUS_XOSC32KRDY		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_rtcctrl RTCCTRL RTC Clock Selection
@{*/


#define OSC32KCTRL_RTCCTRL_RTCSEL_SHIFT		0
#define OSC32KCTRL_RTCCTRL_RTCSEL_MASK		0x07
/** @defgroup osc32kctrl_rtcctrl_rtcsel RTCSEL RTC Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup osc32kctrl_xosc32k XOSC32K 32kHz External Crystal Oscillator (XOSC32K) Control
@{*/

/** OSC32KCTRL_XOSC32K_WRTLOCK Write Lock **/
#define OSC32KCTRL_XOSC32K_WRTLOCK		(1 << 12)

#define OSC32KCTRL_XOSC32K_STARTUP_SHIFT		8
#define OSC32KCTRL_XOSC32K_STARTUP_MASK		0x07
/** @defgroup osc32kctrl_xosc32k_startup STARTUP Oscillator Start-Up Time
@{*/
/**@}*/

/** OSC32KCTRL_XOSC32K_ONDEMAND On Demand Control **/
#define OSC32KCTRL_XOSC32K_ONDEMAND		(1 << 7)
/** OSC32KCTRL_XOSC32K_RUNSTDBY Run in Standby **/
#define OSC32KCTRL_XOSC32K_RUNSTDBY		(1 << 6)
/** OSC32KCTRL_XOSC32K_EN1K 1kHz Output Enable **/
#define OSC32KCTRL_XOSC32K_EN1K		(1 << 4)
/** OSC32KCTRL_XOSC32K_EN32K 32kHz Output Enable **/
#define OSC32KCTRL_XOSC32K_EN32K		(1 << 3)
/** OSC32KCTRL_XOSC32K_XTALEN Crystal Oscillator Enable **/
#define OSC32KCTRL_XOSC32K_XTALEN		(1 << 2)
/** OSC32KCTRL_XOSC32K_ENABLE Oscillator Enable **/
#define OSC32KCTRL_XOSC32K_ENABLE		(1 << 1)

/**@}*/

/** @defgroup osc32kctrl_cfdctrl CFDCTRL Clock Failure Detector Control
@{*/

/** OSC32KCTRL_CFDCTRL_CFDPRESC Clock Failure Detector Prescaler **/
#define OSC32KCTRL_CFDCTRL_CFDPRESC		(1 << 2)
/** OSC32KCTRL_CFDCTRL_SWBACK Clock Switch Back **/
#define OSC32KCTRL_CFDCTRL_SWBACK		(1 << 1)
/** OSC32KCTRL_CFDCTRL_CFDEN Clock Failure Detector Enable **/
#define OSC32KCTRL_CFDCTRL_CFDEN		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_evctrl EVCTRL Event Control
@{*/

/** OSC32KCTRL_EVCTRL_CFDEO Clock Failure Detector Event Output Enable **/
#define OSC32KCTRL_EVCTRL_CFDEO		(1 << 0)

/**@}*/

/** @defgroup osc32kctrl_osculp32k OSCULP32K 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
@{*/

/** OSC32KCTRL_OSCULP32K_WRTLOCK Write Lock **/
#define OSC32KCTRL_OSCULP32K_WRTLOCK		(1 << 15)

#define OSC32KCTRL_OSCULP32K_CALIB_SHIFT		8
#define OSC32KCTRL_OSCULP32K_CALIB_MASK		0x1f
/** @defgroup osc32kctrl_osculp32k_calib CALIB Oscillator Calibration
@{*/
/**@}*/

/** OSC32KCTRL_OSCULP32K_ULP32KSW OSCULP32K Clock Switch Enable **/
#define OSC32KCTRL_OSCULP32K_ULP32KSW		(1 << 5)

/**@}*/

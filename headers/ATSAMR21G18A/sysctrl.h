#pragma once 

/* --- SYSCTRL: System Control -------------------------------------- */

/** @defgroup sysctrl_registers System Control Register
@{*/

/** SYSCTRL_INTENCLR Interrupt Enable Clear **/
#define SYSCTRL_INTENCLR			MMIO32(SYSCTRL_BASE + 0x00)
/** SYSCTRL_INTENSET Interrupt Enable Set **/
#define SYSCTRL_INTENSET			MMIO32(SYSCTRL_BASE + 0x04)
/** SYSCTRL_INTFLAG Interrupt Flag Status and Clear **/
#define SYSCTRL_INTFLAG			MMIO32(SYSCTRL_BASE + 0x08)
/** SYSCTRL_PCLKSR Power and Clocks Status **/
#define SYSCTRL_PCLKSR			MMIO32(SYSCTRL_BASE + 0x0c)
/** SYSCTRL_XOSC External Multipurpose Crystal Oscillator (XOSC) Control **/
#define SYSCTRL_XOSC			MMIO32(SYSCTRL_BASE + 0x10)
/** SYSCTRL_XOSC32K 32kHz External Crystal Oscillator (XOSC32K) Control **/
#define SYSCTRL_XOSC32K			MMIO32(SYSCTRL_BASE + 0x14)
/** SYSCTRL_OSC32K 32kHz Internal Oscillator (OSC32K) Control **/
#define SYSCTRL_OSC32K			MMIO32(SYSCTRL_BASE + 0x18)
/** SYSCTRL_OSCULP32K 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control **/
#define SYSCTRL_OSCULP32K			MMIO32(SYSCTRL_BASE + 0x1c)
/** SYSCTRL_OSC8M 8MHz Internal Oscillator (OSC8M) Control **/
#define SYSCTRL_OSC8M			MMIO32(SYSCTRL_BASE + 0x20)
/** SYSCTRL_DFLLCTRL DFLL48M Control **/
#define SYSCTRL_DFLLCTRL			MMIO32(SYSCTRL_BASE + 0x24)
/** SYSCTRL_DFLLVAL DFLL48M Value **/
#define SYSCTRL_DFLLVAL			MMIO32(SYSCTRL_BASE + 0x28)
/** SYSCTRL_DFLLMUL DFLL48M Multiplier **/
#define SYSCTRL_DFLLMUL			MMIO32(SYSCTRL_BASE + 0x2c)
/** SYSCTRL_DFLLSYNC DFLL48M Synchronization **/
#define SYSCTRL_DFLLSYNC			MMIO32(SYSCTRL_BASE + 0x30)
/** SYSCTRL_BOD33 3.3V Brown-Out Detector (BOD33) Control **/
#define SYSCTRL_BOD33			MMIO32(SYSCTRL_BASE + 0x34)
/** SYSCTRL_VREG Voltage Regulator System (VREG) Control **/
#define SYSCTRL_VREG			MMIO32(SYSCTRL_BASE + 0x3c)
/** SYSCTRL_VREF Voltage References System (VREF) Control **/
#define SYSCTRL_VREF			MMIO32(SYSCTRL_BASE + 0x40)
/** SYSCTRL_DPLLCTRLA DPLL Control A **/
#define SYSCTRL_DPLLCTRLA			MMIO32(SYSCTRL_BASE + 0x44)
/** SYSCTRL_DPLLRATIO DPLL Ratio Control **/
#define SYSCTRL_DPLLRATIO			MMIO32(SYSCTRL_BASE + 0x48)
/** SYSCTRL_DPLLCTRLB DPLL Control B **/
#define SYSCTRL_DPLLCTRLB			MMIO32(SYSCTRL_BASE + 0x4c)
/** SYSCTRL_DPLLSTATUS DPLL Status **/
#define SYSCTRL_DPLLSTATUS			MMIO32(SYSCTRL_BASE + 0x50)

/**@}*/


/** @defgroup sysctrl_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** SYSCTRL_INTENCLR_DPLLLTO DPLL Lock Timeout Interrupt Enable **/
#define SYSCTRL_INTENCLR_DPLLLTO		(1 << 17)
/** SYSCTRL_INTENCLR_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define SYSCTRL_INTENCLR_DPLLLCKF		(1 << 16)
/** SYSCTRL_INTENCLR_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define SYSCTRL_INTENCLR_DPLLLCKR		(1 << 15)
/** SYSCTRL_INTENCLR_B33SRDY BOD33 Synchronization Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_B33SRDY		(1 << 11)
/** SYSCTRL_INTENCLR_BOD33DET BOD33 Detection Interrupt Enable **/
#define SYSCTRL_INTENCLR_BOD33DET		(1 << 10)
/** SYSCTRL_INTENCLR_BOD33RDY BOD33 Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_BOD33RDY		(1 << 9)
/** SYSCTRL_INTENCLR_DFLLRCS DFLL Reference Clock Stopped Interrupt Enable **/
#define SYSCTRL_INTENCLR_DFLLRCS		(1 << 8)
/** SYSCTRL_INTENCLR_DFLLLCKC DFLL Lock Coarse Interrupt Enable **/
#define SYSCTRL_INTENCLR_DFLLLCKC		(1 << 7)
/** SYSCTRL_INTENCLR_DFLLLCKF DFLL Lock Fine Interrupt Enable **/
#define SYSCTRL_INTENCLR_DFLLLCKF		(1 << 6)
/** SYSCTRL_INTENCLR_DFLLOOB DFLL Out Of Bounds Interrupt Enable **/
#define SYSCTRL_INTENCLR_DFLLOOB		(1 << 5)
/** SYSCTRL_INTENCLR_DFLLRDY DFLL Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_DFLLRDY		(1 << 4)
/** SYSCTRL_INTENCLR_OSC8MRDY OSC8M Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_OSC8MRDY		(1 << 3)
/** SYSCTRL_INTENCLR_OSC32KRDY OSC32K Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_OSC32KRDY		(1 << 2)
/** SYSCTRL_INTENCLR_XOSC32KRDY XOSC32K Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_XOSC32KRDY		(1 << 1)
/** SYSCTRL_INTENCLR_XOSCRDY XOSC Ready Interrupt Enable **/
#define SYSCTRL_INTENCLR_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup sysctrl_intenset INTENSET Interrupt Enable Set
@{*/

/** SYSCTRL_INTENSET_DPLLLTO DPLL Lock Timeout Interrupt Enable **/
#define SYSCTRL_INTENSET_DPLLLTO		(1 << 17)
/** SYSCTRL_INTENSET_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define SYSCTRL_INTENSET_DPLLLCKF		(1 << 16)
/** SYSCTRL_INTENSET_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define SYSCTRL_INTENSET_DPLLLCKR		(1 << 15)
/** SYSCTRL_INTENSET_B33SRDY BOD33 Synchronization Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_B33SRDY		(1 << 11)
/** SYSCTRL_INTENSET_BOD33DET BOD33 Detection Interrupt Enable **/
#define SYSCTRL_INTENSET_BOD33DET		(1 << 10)
/** SYSCTRL_INTENSET_BOD33RDY BOD33 Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_BOD33RDY		(1 << 9)
/** SYSCTRL_INTENSET_DFLLRCS DFLL Reference Clock Stopped Interrupt Enable **/
#define SYSCTRL_INTENSET_DFLLRCS		(1 << 8)
/** SYSCTRL_INTENSET_DFLLLCKC DFLL Lock Coarse Interrupt Enable **/
#define SYSCTRL_INTENSET_DFLLLCKC		(1 << 7)
/** SYSCTRL_INTENSET_DFLLLCKF DFLL Lock Fine Interrupt Enable **/
#define SYSCTRL_INTENSET_DFLLLCKF		(1 << 6)
/** SYSCTRL_INTENSET_DFLLOOB DFLL Out Of Bounds Interrupt Enable **/
#define SYSCTRL_INTENSET_DFLLOOB		(1 << 5)
/** SYSCTRL_INTENSET_DFLLRDY DFLL Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_DFLLRDY		(1 << 4)
/** SYSCTRL_INTENSET_OSC8MRDY OSC8M Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_OSC8MRDY		(1 << 3)
/** SYSCTRL_INTENSET_OSC32KRDY OSC32K Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_OSC32KRDY		(1 << 2)
/** SYSCTRL_INTENSET_XOSC32KRDY XOSC32K Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_XOSC32KRDY		(1 << 1)
/** SYSCTRL_INTENSET_XOSCRDY XOSC Ready Interrupt Enable **/
#define SYSCTRL_INTENSET_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup sysctrl_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** SYSCTRL_INTFLAG_DPLLLTO DPLL Lock Timeout **/
#define SYSCTRL_INTFLAG_DPLLLTO		(1 << 17)
/** SYSCTRL_INTFLAG_DPLLLCKF DPLL Lock Fall **/
#define SYSCTRL_INTFLAG_DPLLLCKF		(1 << 16)
/** SYSCTRL_INTFLAG_DPLLLCKR DPLL Lock Rise **/
#define SYSCTRL_INTFLAG_DPLLLCKR		(1 << 15)
/** SYSCTRL_INTFLAG_B33SRDY BOD33 Synchronization Ready **/
#define SYSCTRL_INTFLAG_B33SRDY		(1 << 11)
/** SYSCTRL_INTFLAG_BOD33DET BOD33 Detection **/
#define SYSCTRL_INTFLAG_BOD33DET		(1 << 10)
/** SYSCTRL_INTFLAG_BOD33RDY BOD33 Ready **/
#define SYSCTRL_INTFLAG_BOD33RDY		(1 << 9)
/** SYSCTRL_INTFLAG_DFLLRCS DFLL Reference Clock Stopped **/
#define SYSCTRL_INTFLAG_DFLLRCS		(1 << 8)
/** SYSCTRL_INTFLAG_DFLLLCKC DFLL Lock Coarse **/
#define SYSCTRL_INTFLAG_DFLLLCKC		(1 << 7)
/** SYSCTRL_INTFLAG_DFLLLCKF DFLL Lock Fine **/
#define SYSCTRL_INTFLAG_DFLLLCKF		(1 << 6)
/** SYSCTRL_INTFLAG_DFLLOOB DFLL Out Of Bounds **/
#define SYSCTRL_INTFLAG_DFLLOOB		(1 << 5)
/** SYSCTRL_INTFLAG_DFLLRDY DFLL Ready **/
#define SYSCTRL_INTFLAG_DFLLRDY		(1 << 4)
/** SYSCTRL_INTFLAG_OSC8MRDY OSC8M Ready **/
#define SYSCTRL_INTFLAG_OSC8MRDY		(1 << 3)
/** SYSCTRL_INTFLAG_OSC32KRDY OSC32K Ready **/
#define SYSCTRL_INTFLAG_OSC32KRDY		(1 << 2)
/** SYSCTRL_INTFLAG_XOSC32KRDY XOSC32K Ready **/
#define SYSCTRL_INTFLAG_XOSC32KRDY		(1 << 1)
/** SYSCTRL_INTFLAG_XOSCRDY XOSC Ready **/
#define SYSCTRL_INTFLAG_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup sysctrl_pclksr PCLKSR Power and Clocks Status
@{*/

/** SYSCTRL_PCLKSR_DPLLLTO DPLL Lock Timeout **/
#define SYSCTRL_PCLKSR_DPLLLTO		(1 << 17)
/** SYSCTRL_PCLKSR_DPLLLCKF DPLL Lock Fall **/
#define SYSCTRL_PCLKSR_DPLLLCKF		(1 << 16)
/** SYSCTRL_PCLKSR_DPLLLCKR DPLL Lock Rise **/
#define SYSCTRL_PCLKSR_DPLLLCKR		(1 << 15)
/** SYSCTRL_PCLKSR_B33SRDY BOD33 Synchronization Ready **/
#define SYSCTRL_PCLKSR_B33SRDY		(1 << 11)
/** SYSCTRL_PCLKSR_BOD33DET BOD33 Detection **/
#define SYSCTRL_PCLKSR_BOD33DET		(1 << 10)
/** SYSCTRL_PCLKSR_BOD33RDY BOD33 Ready **/
#define SYSCTRL_PCLKSR_BOD33RDY		(1 << 9)
/** SYSCTRL_PCLKSR_DFLLRCS DFLL Reference Clock Stopped **/
#define SYSCTRL_PCLKSR_DFLLRCS		(1 << 8)
/** SYSCTRL_PCLKSR_DFLLLCKC DFLL Lock Coarse **/
#define SYSCTRL_PCLKSR_DFLLLCKC		(1 << 7)
/** SYSCTRL_PCLKSR_DFLLLCKF DFLL Lock Fine **/
#define SYSCTRL_PCLKSR_DFLLLCKF		(1 << 6)
/** SYSCTRL_PCLKSR_DFLLOOB DFLL Out Of Bounds **/
#define SYSCTRL_PCLKSR_DFLLOOB		(1 << 5)
/** SYSCTRL_PCLKSR_DFLLRDY DFLL Ready **/
#define SYSCTRL_PCLKSR_DFLLRDY		(1 << 4)
/** SYSCTRL_PCLKSR_OSC8MRDY OSC8M Ready **/
#define SYSCTRL_PCLKSR_OSC8MRDY		(1 << 3)
/** SYSCTRL_PCLKSR_OSC32KRDY OSC32K Ready **/
#define SYSCTRL_PCLKSR_OSC32KRDY		(1 << 2)
/** SYSCTRL_PCLKSR_XOSC32KRDY XOSC32K Ready **/
#define SYSCTRL_PCLKSR_XOSC32KRDY		(1 << 1)
/** SYSCTRL_PCLKSR_XOSCRDY XOSC Ready **/
#define SYSCTRL_PCLKSR_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup sysctrl_xosc XOSC External Multipurpose Crystal Oscillator (XOSC) Control
@{*/


#define SYSCTRL_XOSC_STARTUP_SHIFT		12
#define SYSCTRL_XOSC_STARTUP_MASK		0x0f
/** @defgroup sysctrl_xosc_startup STARTUP Start-Up Time
@{*/
/**@}*/

/** SYSCTRL_XOSC_AMPGC Automatic Amplitude Gain Control **/
#define SYSCTRL_XOSC_AMPGC		(1 << 11)

#define SYSCTRL_XOSC_GAIN_SHIFT		8
#define SYSCTRL_XOSC_GAIN_MASK		0x07
/** @defgroup sysctrl_xosc_gain GAIN Oscillator Gain
@{*/
/**@}*/

/** SYSCTRL_XOSC_ONDEMAND On Demand Control **/
#define SYSCTRL_XOSC_ONDEMAND		(1 << 7)
/** SYSCTRL_XOSC_RUNSTDBY Run in Standby **/
#define SYSCTRL_XOSC_RUNSTDBY		(1 << 6)
/** SYSCTRL_XOSC_XTALEN Crystal Oscillator Enable **/
#define SYSCTRL_XOSC_XTALEN		(1 << 2)
/** SYSCTRL_XOSC_ENABLE Oscillator Enable **/
#define SYSCTRL_XOSC_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_xosc32k XOSC32K 32kHz External Crystal Oscillator (XOSC32K) Control
@{*/

/** SYSCTRL_XOSC32K_WRTLOCK Write Lock **/
#define SYSCTRL_XOSC32K_WRTLOCK		(1 << 12)

#define SYSCTRL_XOSC32K_STARTUP_SHIFT		8
#define SYSCTRL_XOSC32K_STARTUP_MASK		0x07
/** @defgroup sysctrl_xosc32k_startup STARTUP Oscillator Start-Up Time
@{*/
/**@}*/

/** SYSCTRL_XOSC32K_ONDEMAND On Demand Control **/
#define SYSCTRL_XOSC32K_ONDEMAND		(1 << 7)
/** SYSCTRL_XOSC32K_RUNSTDBY Run in Standby **/
#define SYSCTRL_XOSC32K_RUNSTDBY		(1 << 6)
/** SYSCTRL_XOSC32K_AAMPEN Automatic Amplitude Control Enable **/
#define SYSCTRL_XOSC32K_AAMPEN		(1 << 5)
/** SYSCTRL_XOSC32K_EN1K 1kHz Output Enable **/
#define SYSCTRL_XOSC32K_EN1K		(1 << 4)
/** SYSCTRL_XOSC32K_EN32K 32kHz Output Enable **/
#define SYSCTRL_XOSC32K_EN32K		(1 << 3)
/** SYSCTRL_XOSC32K_XTALEN Crystal Oscillator Enable **/
#define SYSCTRL_XOSC32K_XTALEN		(1 << 2)
/** SYSCTRL_XOSC32K_ENABLE Oscillator Enable **/
#define SYSCTRL_XOSC32K_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_osc32k OSC32K 32kHz Internal Oscillator (OSC32K) Control
@{*/


#define SYSCTRL_OSC32K_CALIB_SHIFT		16
#define SYSCTRL_OSC32K_CALIB_MASK		0x7f
/** @defgroup sysctrl_osc32k_calib CALIB Oscillator Calibration
@{*/
/**@}*/

/** SYSCTRL_OSC32K_WRTLOCK Write Lock **/
#define SYSCTRL_OSC32K_WRTLOCK		(1 << 12)

#define SYSCTRL_OSC32K_STARTUP_SHIFT		8
#define SYSCTRL_OSC32K_STARTUP_MASK		0x07
/** @defgroup sysctrl_osc32k_startup STARTUP Oscillator Start-Up Time
@{*/
/**@}*/

/** SYSCTRL_OSC32K_ONDEMAND On Demand Control **/
#define SYSCTRL_OSC32K_ONDEMAND		(1 << 7)
/** SYSCTRL_OSC32K_RUNSTDBY Run in Standby **/
#define SYSCTRL_OSC32K_RUNSTDBY		(1 << 6)
/** SYSCTRL_OSC32K_EN1K 1kHz Output Enable **/
#define SYSCTRL_OSC32K_EN1K		(1 << 3)
/** SYSCTRL_OSC32K_EN32K 32kHz Output Enable **/
#define SYSCTRL_OSC32K_EN32K		(1 << 2)
/** SYSCTRL_OSC32K_ENABLE Oscillator Enable **/
#define SYSCTRL_OSC32K_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_osculp32k OSCULP32K 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
@{*/

/** SYSCTRL_OSCULP32K_WRTLOCK Write Lock **/
#define SYSCTRL_OSCULP32K_WRTLOCK		(1 << 7)

#define SYSCTRL_OSCULP32K_CALIB_SHIFT		0
#define SYSCTRL_OSCULP32K_CALIB_MASK		0x1f
/** @defgroup sysctrl_osculp32k_calib CALIB Oscillator Calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup sysctrl_osc8m OSC8M 8MHz Internal Oscillator (OSC8M) Control
@{*/


#define SYSCTRL_OSC8M_FRANGE_SHIFT		30
#define SYSCTRL_OSC8M_FRANGE_MASK		0x03
/** @defgroup sysctrl_osc8m_frange FRANGE Oscillator Frequency Range
@{*/
/**@}*/


#define SYSCTRL_OSC8M_CALIB_SHIFT		16
#define SYSCTRL_OSC8M_CALIB_MASK		0xfff
/** @defgroup sysctrl_osc8m_calib CALIB Oscillator Calibration
@{*/
/**@}*/


#define SYSCTRL_OSC8M_PRESC_SHIFT		8
#define SYSCTRL_OSC8M_PRESC_MASK		0x03
/** @defgroup sysctrl_osc8m_presc PRESC Oscillator Prescaler
@{*/
/**@}*/

/** SYSCTRL_OSC8M_ONDEMAND On Demand Control **/
#define SYSCTRL_OSC8M_ONDEMAND		(1 << 7)
/** SYSCTRL_OSC8M_RUNSTDBY Run in Standby **/
#define SYSCTRL_OSC8M_RUNSTDBY		(1 << 6)
/** SYSCTRL_OSC8M_ENABLE Oscillator Enable **/
#define SYSCTRL_OSC8M_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_dfllctrl DFLLCTRL DFLL48M Control
@{*/

/** SYSCTRL_DFLLCTRL_WAITLOCK Wait Lock **/
#define SYSCTRL_DFLLCTRL_WAITLOCK		(1 << 11)
/** SYSCTRL_DFLLCTRL_BPLCKC Bypass Coarse Lock **/
#define SYSCTRL_DFLLCTRL_BPLCKC		(1 << 10)
/** SYSCTRL_DFLLCTRL_QLDIS Quick Lock Disable **/
#define SYSCTRL_DFLLCTRL_QLDIS		(1 << 9)
/** SYSCTRL_DFLLCTRL_CCDIS Chill Cycle Disable **/
#define SYSCTRL_DFLLCTRL_CCDIS		(1 << 8)
/** SYSCTRL_DFLLCTRL_ONDEMAND On Demand Control **/
#define SYSCTRL_DFLLCTRL_ONDEMAND		(1 << 7)
/** SYSCTRL_DFLLCTRL_RUNSTDBY Run in Standby **/
#define SYSCTRL_DFLLCTRL_RUNSTDBY		(1 << 6)
/** SYSCTRL_DFLLCTRL_USBCRM USB Clock Recovery Mode **/
#define SYSCTRL_DFLLCTRL_USBCRM		(1 << 5)
/** SYSCTRL_DFLLCTRL_LLAW Lose Lock After Wake **/
#define SYSCTRL_DFLLCTRL_LLAW		(1 << 4)
/** SYSCTRL_DFLLCTRL_STABLE Stable DFLL Frequency **/
#define SYSCTRL_DFLLCTRL_STABLE		(1 << 3)
/** SYSCTRL_DFLLCTRL_MODE Operating Mode Selection **/
#define SYSCTRL_DFLLCTRL_MODE		(1 << 2)
/** SYSCTRL_DFLLCTRL_ENABLE DFLL Enable **/
#define SYSCTRL_DFLLCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_dfllval DFLLVAL DFLL48M Value
@{*/


#define SYSCTRL_DFLLVAL_DIFF_SHIFT		16
#define SYSCTRL_DFLLVAL_DIFF_MASK		0xffff
/** @defgroup sysctrl_dfllval_diff DIFF Multiplication Ratio Difference
@{*/
/**@}*/


#define SYSCTRL_DFLLVAL_COARSE_SHIFT		10
#define SYSCTRL_DFLLVAL_COARSE_MASK		0x3f
/** @defgroup sysctrl_dfllval_coarse COARSE Coarse Value
@{*/
/**@}*/


#define SYSCTRL_DFLLVAL_FINE_SHIFT		0
#define SYSCTRL_DFLLVAL_FINE_MASK		0x3ff
/** @defgroup sysctrl_dfllval_fine FINE Fine Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sysctrl_dfllmul DFLLMUL DFLL48M Multiplier
@{*/


#define SYSCTRL_DFLLMUL_CSTEP_SHIFT		26
#define SYSCTRL_DFLLMUL_CSTEP_MASK		0x3f
/** @defgroup sysctrl_dfllmul_cstep CSTEP Coarse Maximum Step
@{*/
/**@}*/


#define SYSCTRL_DFLLMUL_FSTEP_SHIFT		16
#define SYSCTRL_DFLLMUL_FSTEP_MASK		0x3ff
/** @defgroup sysctrl_dfllmul_fstep FSTEP Fine Maximum Step
@{*/
/**@}*/


#define SYSCTRL_DFLLMUL_MUL_SHIFT		0
#define SYSCTRL_DFLLMUL_MUL_MASK		0xffff
/** @defgroup sysctrl_dfllmul_mul MUL DFLL Multiply Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup sysctrl_dfllsync DFLLSYNC DFLL48M Synchronization
@{*/

/** SYSCTRL_DFLLSYNC_READREQ Read Request **/
#define SYSCTRL_DFLLSYNC_READREQ		(1 << 7)

/**@}*/

/** @defgroup sysctrl_bod33 BOD33 3.3V Brown-Out Detector (BOD33) Control
@{*/


#define SYSCTRL_BOD33_LEVEL_SHIFT		16
#define SYSCTRL_BOD33_LEVEL_MASK		0x3f
/** @defgroup sysctrl_bod33_level LEVEL BOD33 Threshold Level
@{*/
/**@}*/


#define SYSCTRL_BOD33_PSEL_SHIFT		12
#define SYSCTRL_BOD33_PSEL_MASK		0x0f
/** @defgroup sysctrl_bod33_psel PSEL Prescaler Select
@{*/
/**@}*/

/** SYSCTRL_BOD33_CEN Clock Enable **/
#define SYSCTRL_BOD33_CEN		(1 << 9)
/** SYSCTRL_BOD33_MODE Operation Mode **/
#define SYSCTRL_BOD33_MODE		(1 << 8)
/** SYSCTRL_BOD33_RUNSTDBY Run in Standby **/
#define SYSCTRL_BOD33_RUNSTDBY		(1 << 6)

#define SYSCTRL_BOD33_ACTION_SHIFT		3
#define SYSCTRL_BOD33_ACTION_MASK		0x03
/** @defgroup sysctrl_bod33_action ACTION BOD33 Action
@{*/
/**@}*/

/** SYSCTRL_BOD33_HYST Hysteresis **/
#define SYSCTRL_BOD33_HYST		(1 << 2)
/** SYSCTRL_BOD33_ENABLE Enable **/
#define SYSCTRL_BOD33_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_vreg VREG Voltage Regulator System (VREG) Control
@{*/

/** SYSCTRL_VREG_FORCELDO Force LDO Voltage Regulator **/
#define SYSCTRL_VREG_FORCELDO		(1 << 13)
/** SYSCTRL_VREG_RUNSTDBY Run in Standby **/
#define SYSCTRL_VREG_RUNSTDBY		(1 << 6)

/**@}*/

/** @defgroup sysctrl_vref VREF Voltage References System (VREF) Control
@{*/


#define SYSCTRL_VREF_CALIB_SHIFT		16
#define SYSCTRL_VREF_CALIB_MASK		0x7ff
/** @defgroup sysctrl_vref_calib CALIB Bandgap Voltage Generator Calibration
@{*/
/**@}*/

/** SYSCTRL_VREF_BGOUTEN Bandgap Output Enable **/
#define SYSCTRL_VREF_BGOUTEN		(1 << 2)
/** SYSCTRL_VREF_TSEN Temperature Sensor Enable **/
#define SYSCTRL_VREF_TSEN		(1 << 1)

/**@}*/

/** @defgroup sysctrl_dpllctrla DPLLCTRLA DPLL Control A
@{*/

/** SYSCTRL_DPLLCTRLA_ONDEMAND On Demand Clock Activation **/
#define SYSCTRL_DPLLCTRLA_ONDEMAND		(1 << 7)
/** SYSCTRL_DPLLCTRLA_RUNSTDBY Run in Standby **/
#define SYSCTRL_DPLLCTRLA_RUNSTDBY		(1 << 6)
/** SYSCTRL_DPLLCTRLA_ENABLE DPLL Enable **/
#define SYSCTRL_DPLLCTRLA_ENABLE		(1 << 1)

/**@}*/

/** @defgroup sysctrl_dpllratio DPLLRATIO DPLL Ratio Control
@{*/


#define SYSCTRL_DPLLRATIO_LDRFRAC_SHIFT		16
#define SYSCTRL_DPLLRATIO_LDRFRAC_MASK		0x0f
/** @defgroup sysctrl_dpllratio_ldrfrac LDRFRAC Loop Divider Ratio Fractional Part
@{*/
/**@}*/


#define SYSCTRL_DPLLRATIO_LDR_SHIFT		0
#define SYSCTRL_DPLLRATIO_LDR_MASK		0xfff
/** @defgroup sysctrl_dpllratio_ldr LDR Loop Divider Ratio
@{*/
/**@}*/


/**@}*/

/** @defgroup sysctrl_dpllctrlb DPLLCTRLB DPLL Control B
@{*/


#define SYSCTRL_DPLLCTRLB_DIV_SHIFT		16
#define SYSCTRL_DPLLCTRLB_DIV_MASK		0x7ff
/** @defgroup sysctrl_dpllctrlb_div DIV Clock Divider
@{*/
/**@}*/

/** SYSCTRL_DPLLCTRLB_LBYPASS Lock Bypass **/
#define SYSCTRL_DPLLCTRLB_LBYPASS		(1 << 12)

#define SYSCTRL_DPLLCTRLB_LTIME_SHIFT		8
#define SYSCTRL_DPLLCTRLB_LTIME_MASK		0x07
/** @defgroup sysctrl_dpllctrlb_ltime LTIME Lock Time
@{*/
/**@}*/


#define SYSCTRL_DPLLCTRLB_REFCLK_SHIFT		4
#define SYSCTRL_DPLLCTRLB_REFCLK_MASK		0x03
/** @defgroup sysctrl_dpllctrlb_refclk REFCLK Reference Clock Selection
@{*/
/**@}*/

/** SYSCTRL_DPLLCTRLB_WUF Wake Up Fast **/
#define SYSCTRL_DPLLCTRLB_WUF		(1 << 3)
/** SYSCTRL_DPLLCTRLB_LPEN Low-Power Enable **/
#define SYSCTRL_DPLLCTRLB_LPEN		(1 << 2)

#define SYSCTRL_DPLLCTRLB_FILTER_SHIFT		0
#define SYSCTRL_DPLLCTRLB_FILTER_MASK		0x03
/** @defgroup sysctrl_dpllctrlb_filter FILTER Proportional Integral Filter Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup sysctrl_dpllstatus DPLLSTATUS DPLL Status
@{*/

/** SYSCTRL_DPLLSTATUS_DIV Divider Enable **/
#define SYSCTRL_DPLLSTATUS_DIV		(1 << 3)
/** SYSCTRL_DPLLSTATUS_ENABLE DPLL Enable **/
#define SYSCTRL_DPLLSTATUS_ENABLE		(1 << 2)
/** SYSCTRL_DPLLSTATUS_CLKRDY Output Clock Ready **/
#define SYSCTRL_DPLLSTATUS_CLKRDY		(1 << 1)
/** SYSCTRL_DPLLSTATUS_LOCK DPLL Lock Status **/
#define SYSCTRL_DPLLSTATUS_LOCK		(1 << 0)

/**@}*/

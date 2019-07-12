#pragma once 

/* --- OSCCTRL: Oscillators Control --------------------------------- */

/** @defgroup oscctrl_registers Oscillators Control Register
@{*/

/** OSCCTRL_EVCTRL Event Control **/
#define OSCCTRL_EVCTRL			MMIO32(OSCCTRL_BASE + 0x00)
/** OSCCTRL_INTENCLR Interrupt Enable Clear **/
#define OSCCTRL_INTENCLR			MMIO32(OSCCTRL_BASE + 0x04)
/** OSCCTRL_INTENSET Interrupt Enable Set **/
#define OSCCTRL_INTENSET			MMIO32(OSCCTRL_BASE + 0x08)
/** OSCCTRL_INTFLAG Interrupt Flag Status and Clear **/
#define OSCCTRL_INTFLAG			MMIO32(OSCCTRL_BASE + 0x0c)
/** OSCCTRL_STATUS Status **/
#define OSCCTRL_STATUS			MMIO32(OSCCTRL_BASE + 0x10)
/** OSCCTRL_XOSCCTRL External Multipurpose Crystal Oscillator (XOSC) Control **/
#define OSCCTRL_XOSCCTRL			MMIO32(OSCCTRL_BASE + 0x14)
/** OSCCTRL_CFDPRESC Clock Failure Detector Prescaler **/
#define OSCCTRL_CFDPRESC			MMIO32(OSCCTRL_BASE + 0x16)
/** OSCCTRL_OSC16MCTRL 16MHz Internal Oscillator (OSC16M) Control **/
#define OSCCTRL_OSC16MCTRL			MMIO32(OSCCTRL_BASE + 0x18)
/** OSCCTRL_DFLLULPCTRL DFLLULP Control **/
#define OSCCTRL_DFLLULPCTRL			MMIO32(OSCCTRL_BASE + 0x1c)
/** OSCCTRL_DFLLULPDITHER DFLLULP Dither Control **/
#define OSCCTRL_DFLLULPDITHER			MMIO32(OSCCTRL_BASE + 0x1e)
/** OSCCTRL_DFLLULPRREQ DFLLULP Read Request **/
#define OSCCTRL_DFLLULPRREQ			MMIO32(OSCCTRL_BASE + 0x1f)
/** OSCCTRL_DFLLULPDLY DFLLULP Delay Value **/
#define OSCCTRL_DFLLULPDLY			MMIO32(OSCCTRL_BASE + 0x20)
/** OSCCTRL_DFLLULPRATIO DFLLULP Target Ratio **/
#define OSCCTRL_DFLLULPRATIO			MMIO32(OSCCTRL_BASE + 0x24)
/** OSCCTRL_DFLLULPSYNCBUSY DFLLULP Synchronization Busy **/
#define OSCCTRL_DFLLULPSYNCBUSY			MMIO32(OSCCTRL_BASE + 0x28)
/** OSCCTRL_DPLLCTRLA DPLL Control A **/
#define OSCCTRL_DPLLCTRLA			MMIO32(OSCCTRL_BASE + 0x2c)
/** OSCCTRL_DPLLRATIO DPLL Ratio Control **/
#define OSCCTRL_DPLLRATIO			MMIO32(OSCCTRL_BASE + 0x30)
/** OSCCTRL_DPLLCTRLB DPLL Control B **/
#define OSCCTRL_DPLLCTRLB			MMIO32(OSCCTRL_BASE + 0x34)
/** OSCCTRL_DPLLPRESC DPLL Prescaler **/
#define OSCCTRL_DPLLPRESC			MMIO32(OSCCTRL_BASE + 0x38)
/** OSCCTRL_DPLLSYNCBUSY DPLL Synchronization Busy **/
#define OSCCTRL_DPLLSYNCBUSY			MMIO32(OSCCTRL_BASE + 0x3c)
/** OSCCTRL_DPLLSTATUS DPLL Status **/
#define OSCCTRL_DPLLSTATUS			MMIO32(OSCCTRL_BASE + 0x40)

/**@}*/


/** @defgroup oscctrl_evctrl EVCTRL Event Control
@{*/

/** OSCCTRL_EVCTRL_TUNEINV Tune Event Input Invert **/
#define OSCCTRL_EVCTRL_TUNEINV		(1 << 2)
/** OSCCTRL_EVCTRL_TUNEEI Tune Event Input Enable **/
#define OSCCTRL_EVCTRL_TUNEEI		(1 << 1)
/** OSCCTRL_EVCTRL_CFDEO Clock Failure Detector Event Output Enable **/
#define OSCCTRL_EVCTRL_CFDEO		(1 << 0)

/**@}*/

/** @defgroup oscctrl_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** OSCCTRL_INTENCLR_DPLLLDRTO DPLL Loop Divider Ratio Update Complete Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTENCLR_DPLLLTO DPLL Lock Timeout Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLTO		(1 << 18)
/** OSCCTRL_INTENCLR_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTENCLR_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTENCLR_DFLLULPNOLOCK DFLLULP No Lock Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLULPNOLOCK		(1 << 10)
/** OSCCTRL_INTENCLR_DFLLULPLOCK DFLLULP Lock Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLULPLOCK		(1 << 9)
/** OSCCTRL_INTENCLR_DFLLULPRDY DFLLULP Ready interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLULPRDY		(1 << 8)
/** OSCCTRL_INTENCLR_OSC16MRDY OSC16M Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTENCLR_XOSCFAIL XOSC Clock Failure Detector Interrupt Enable **/
#define OSCCTRL_INTENCLR_XOSCFAIL		(1 << 1)
/** OSCCTRL_INTENCLR_XOSCRDY XOSC Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_intenset INTENSET Interrupt Enable Set
@{*/

/** OSCCTRL_INTENSET_DPLLLDRTO DPLL Loop Divider Ratio Update Complete Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTENSET_DPLLLTO DPLL Lock Timeout Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLTO		(1 << 18)
/** OSCCTRL_INTENSET_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTENSET_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTENSET_DFLLULPNOLOCK DFLLULP No Lock Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLULPNOLOCK		(1 << 10)
/** OSCCTRL_INTENSET_DFLLULPLOCK DFLLULP Lock Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLULPLOCK		(1 << 9)
/** OSCCTRL_INTENSET_DFLLULPRDY DFLLULP Ready interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLULPRDY		(1 << 8)
/** OSCCTRL_INTENSET_OSC16MRDY OSC16M Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTENSET_XOSCFAIL XOSC Clock Failure Detector Interrupt Enable **/
#define OSCCTRL_INTENSET_XOSCFAIL		(1 << 1)
/** OSCCTRL_INTENSET_XOSCRDY XOSC Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** OSCCTRL_INTFLAG_DPLLLDRTO DPLL Loop Divider Ratio Update Complete **/
#define OSCCTRL_INTFLAG_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTFLAG_DPLLLTO DPLL Lock Timeout **/
#define OSCCTRL_INTFLAG_DPLLLTO		(1 << 18)
/** OSCCTRL_INTFLAG_DPLLLCKF DPLL Lock Fall **/
#define OSCCTRL_INTFLAG_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTFLAG_DPLLLCKR DPLL Lock Rise **/
#define OSCCTRL_INTFLAG_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTFLAG_DFLLULPNOLOCK DFLLULP No Lock **/
#define OSCCTRL_INTFLAG_DFLLULPNOLOCK		(1 << 10)
/** OSCCTRL_INTFLAG_DFLLULPLOCK DFLLULP Lock **/
#define OSCCTRL_INTFLAG_DFLLULPLOCK		(1 << 9)
/** OSCCTRL_INTFLAG_DFLLULPRDY DFLLULP Ready **/
#define OSCCTRL_INTFLAG_DFLLULPRDY		(1 << 8)
/** OSCCTRL_INTFLAG_OSC16MRDY OSC16M Ready **/
#define OSCCTRL_INTFLAG_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTFLAG_XOSCFAIL XOSC Clock Failure Detector **/
#define OSCCTRL_INTFLAG_XOSCFAIL		(1 << 1)
/** OSCCTRL_INTFLAG_XOSCRDY XOSC Ready **/
#define OSCCTRL_INTFLAG_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_status STATUS Status
@{*/

/** OSCCTRL_STATUS_DPLLLDRTO DPLL Loop Divider Ratio Update Complete **/
#define OSCCTRL_STATUS_DPLLLDRTO		(1 << 19)
/** OSCCTRL_STATUS_DPLLTO DPLL Lock Timeout **/
#define OSCCTRL_STATUS_DPLLTO		(1 << 18)
/** OSCCTRL_STATUS_DPLLLCKF DPLL Lock Fall **/
#define OSCCTRL_STATUS_DPLLLCKF		(1 << 17)
/** OSCCTRL_STATUS_DPLLLCKR DPLL Lock Rise **/
#define OSCCTRL_STATUS_DPLLLCKR		(1 << 16)
/** OSCCTRL_STATUS_DFLLULPNOLOCK DFLLULP No Lock **/
#define OSCCTRL_STATUS_DFLLULPNOLOCK		(1 << 10)
/** OSCCTRL_STATUS_DFLLULPLOCK DFLLULP Lock **/
#define OSCCTRL_STATUS_DFLLULPLOCK		(1 << 9)
/** OSCCTRL_STATUS_DFLLULPRDY DFLLULP Ready **/
#define OSCCTRL_STATUS_DFLLULPRDY		(1 << 8)
/** OSCCTRL_STATUS_OSC16MRDY OSC16M Ready **/
#define OSCCTRL_STATUS_OSC16MRDY		(1 << 4)
/** OSCCTRL_STATUS_XOSCCKSW XOSC Clock Switch **/
#define OSCCTRL_STATUS_XOSCCKSW		(1 << 2)
/** OSCCTRL_STATUS_XOSCFAIL XOSC Clock Failure Detector **/
#define OSCCTRL_STATUS_XOSCFAIL		(1 << 1)
/** OSCCTRL_STATUS_XOSCRDY XOSC Ready **/
#define OSCCTRL_STATUS_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_xoscctrl XOSCCTRL External Multipurpose Crystal Oscillator (XOSC) Control
@{*/


#define OSCCTRL_XOSCCTRL_STARTUP_SHIFT		12
#define OSCCTRL_XOSCCTRL_STARTUP_MASK		0x0f
/** @defgroup oscctrl_xoscctrl_startup STARTUP Start-Up Time
@{*/
/**@}*/

/** OSCCTRL_XOSCCTRL_AMPGC Automatic Amplitude Gain Control **/
#define OSCCTRL_XOSCCTRL_AMPGC		(1 << 11)

#define OSCCTRL_XOSCCTRL_GAIN_SHIFT		8
#define OSCCTRL_XOSCCTRL_GAIN_MASK		0x07
/** @defgroup oscctrl_xoscctrl_gain GAIN Oscillator Gain
@{*/
/**@}*/

/** OSCCTRL_XOSCCTRL_ONDEMAND On Demand Control **/
#define OSCCTRL_XOSCCTRL_ONDEMAND		(1 << 7)
/** OSCCTRL_XOSCCTRL_RUNSTDBY Run in Standby **/
#define OSCCTRL_XOSCCTRL_RUNSTDBY		(1 << 6)
/** OSCCTRL_XOSCCTRL_SWBEN Xosc Clock Switch Enable **/
#define OSCCTRL_XOSCCTRL_SWBEN		(1 << 4)
/** OSCCTRL_XOSCCTRL_CFDEN Clock Failure Detector Enable **/
#define OSCCTRL_XOSCCTRL_CFDEN		(1 << 3)
/** OSCCTRL_XOSCCTRL_XTALEN Crystal Oscillator Enable **/
#define OSCCTRL_XOSCCTRL_XTALEN		(1 << 2)
/** OSCCTRL_XOSCCTRL_ENABLE Oscillator Enable **/
#define OSCCTRL_XOSCCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_cfdpresc CFDPRESC Clock Failure Detector Prescaler
@{*/


#define OSCCTRL_CFDPRESC_CFDPRESC_SHIFT		0
#define OSCCTRL_CFDPRESC_CFDPRESC_MASK		0x07
/** @defgroup oscctrl_cfdpresc_cfdpresc CFDPRESC Clock Failure Detector Prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_osc16mctrl OSC16MCTRL 16MHz Internal Oscillator (OSC16M) Control
@{*/

/** OSCCTRL_OSC16MCTRL_ONDEMAND On Demand Control **/
#define OSCCTRL_OSC16MCTRL_ONDEMAND		(1 << 7)
/** OSCCTRL_OSC16MCTRL_RUNSTDBY Run in Standby **/
#define OSCCTRL_OSC16MCTRL_RUNSTDBY		(1 << 6)

#define OSCCTRL_OSC16MCTRL_FSEL_SHIFT		2
#define OSCCTRL_OSC16MCTRL_FSEL_MASK		0x03
/** @defgroup oscctrl_osc16mctrl_fsel FSEL Oscillator Frequency Selection
@{*/
/**@}*/

/** OSCCTRL_OSC16MCTRL_ENABLE Oscillator Enable **/
#define OSCCTRL_OSC16MCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dfllulpctrl DFLLULPCTRL DFLLULP Control
@{*/


#define OSCCTRL_DFLLULPCTRL_DIV_SHIFT		8
#define OSCCTRL_DFLLULPCTRL_DIV_MASK		0x07
/** @defgroup oscctrl_dfllulpctrl_div DIV Division Factor
@{*/
/**@}*/

/** OSCCTRL_DFLLULPCTRL_ONDEMAND On Demand **/
#define OSCCTRL_DFLLULPCTRL_ONDEMAND		(1 << 7)
/** OSCCTRL_DFLLULPCTRL_RUNSTDBY Run in Standby **/
#define OSCCTRL_DFLLULPCTRL_RUNSTDBY		(1 << 6)
/** OSCCTRL_DFLLULPCTRL_DITHER Tuner Dither Mode **/
#define OSCCTRL_DFLLULPCTRL_DITHER		(1 << 5)
/** OSCCTRL_DFLLULPCTRL_SAFE Tuner Safe Mode **/
#define OSCCTRL_DFLLULPCTRL_SAFE		(1 << 4)
/** OSCCTRL_DFLLULPCTRL_BINSE Binary Search Enable **/
#define OSCCTRL_DFLLULPCTRL_BINSE		(1 << 3)
/** OSCCTRL_DFLLULPCTRL_ENABLE Enable **/
#define OSCCTRL_DFLLULPCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dfllulpdither DFLLULPDITHER DFLLULP Dither Control
@{*/


#define OSCCTRL_DFLLULPDITHER_PER_SHIFT		4
#define OSCCTRL_DFLLULPDITHER_PER_MASK		0x07
/** @defgroup oscctrl_dfllulpdither_per PER Dither Period
@{*/
/**@}*/


#define OSCCTRL_DFLLULPDITHER_STEP_SHIFT		0
#define OSCCTRL_DFLLULPDITHER_STEP_MASK		0x07
/** @defgroup oscctrl_dfllulpdither_step STEP Dither Step
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dfllulprreq DFLLULPRREQ DFLLULP Read Request
@{*/

/** OSCCTRL_DFLLULPRREQ_RREQ Read Request **/
#define OSCCTRL_DFLLULPRREQ_RREQ		(1 << 7)

/**@}*/

/** @defgroup oscctrl_dfllulpdly DFLLULPDLY DFLLULP Delay Value
@{*/


#define OSCCTRL_DFLLULPDLY_DELAY_SHIFT		0
#define OSCCTRL_DFLLULPDLY_DELAY_MASK		0xff
/** @defgroup oscctrl_dfllulpdly_delay DELAY Delay Value
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dfllulpratio DFLLULPRATIO DFLLULP Target Ratio
@{*/


#define OSCCTRL_DFLLULPRATIO_RATIO_SHIFT		0
#define OSCCTRL_DFLLULPRATIO_RATIO_MASK		0x7ff
/** @defgroup oscctrl_dfllulpratio_ratio RATIO Target Tuner Ratio
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dfllulpsyncbusy DFLLULPSYNCBUSY DFLLULP Synchronization Busy
@{*/

/** OSCCTRL_DFLLULPSYNCBUSY_DELAY Delay Register Synchronization Busy **/
#define OSCCTRL_DFLLULPSYNCBUSY_DELAY		(1 << 3)
/** OSCCTRL_DFLLULPSYNCBUSY_TUNE Tune Bit Synchronization Busy **/
#define OSCCTRL_DFLLULPSYNCBUSY_TUNE		(1 << 2)
/** OSCCTRL_DFLLULPSYNCBUSY_ENABLE Enable Bit Synchronization Busy **/
#define OSCCTRL_DFLLULPSYNCBUSY_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dpllctrla DPLLCTRLA DPLL Control A
@{*/

/** OSCCTRL_DPLLCTRLA_ONDEMAND On Demand Clock Activation **/
#define OSCCTRL_DPLLCTRLA_ONDEMAND		(1 << 7)
/** OSCCTRL_DPLLCTRLA_RUNSTDBY Run in Standby **/
#define OSCCTRL_DPLLCTRLA_RUNSTDBY		(1 << 6)
/** OSCCTRL_DPLLCTRLA_ENABLE DPLL Enable **/
#define OSCCTRL_DPLLCTRLA_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dpllratio DPLLRATIO DPLL Ratio Control
@{*/


#define OSCCTRL_DPLLRATIO_LDRFRAC_SHIFT		16
#define OSCCTRL_DPLLRATIO_LDRFRAC_MASK		0x0f
/** @defgroup oscctrl_dpllratio_ldrfrac LDRFRAC Loop Divider Ratio Fractional Part
@{*/
/**@}*/


#define OSCCTRL_DPLLRATIO_LDR_SHIFT		0
#define OSCCTRL_DPLLRATIO_LDR_MASK		0xfff
/** @defgroup oscctrl_dpllratio_ldr LDR Loop Divider Ratio
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dpllctrlb DPLLCTRLB DPLL Control B
@{*/


#define OSCCTRL_DPLLCTRLB_DIV_SHIFT		16
#define OSCCTRL_DPLLCTRLB_DIV_MASK		0x7ff
/** @defgroup oscctrl_dpllctrlb_div DIV Clock Divider
@{*/
/**@}*/

/** OSCCTRL_DPLLCTRLB_LBYPASS Lock Bypass **/
#define OSCCTRL_DPLLCTRLB_LBYPASS		(1 << 12)

#define OSCCTRL_DPLLCTRLB_LTIME_SHIFT		8
#define OSCCTRL_DPLLCTRLB_LTIME_MASK		0x07
/** @defgroup oscctrl_dpllctrlb_ltime LTIME Lock Time
@{*/
/**@}*/


#define OSCCTRL_DPLLCTRLB_REFCLK_SHIFT		4
#define OSCCTRL_DPLLCTRLB_REFCLK_MASK		0x03
/** @defgroup oscctrl_dpllctrlb_refclk REFCLK Reference Clock Selection
@{*/
/**@}*/

/** OSCCTRL_DPLLCTRLB_WUF Wake Up Fast **/
#define OSCCTRL_DPLLCTRLB_WUF		(1 << 3)
/** OSCCTRL_DPLLCTRLB_LPEN Low-Power Enable **/
#define OSCCTRL_DPLLCTRLB_LPEN		(1 << 2)

#define OSCCTRL_DPLLCTRLB_FILTER_SHIFT		0
#define OSCCTRL_DPLLCTRLB_FILTER_MASK		0x03
/** @defgroup oscctrl_dpllctrlb_filter FILTER Proportional Integral Filter Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dpllpresc DPLLPRESC DPLL Prescaler
@{*/


#define OSCCTRL_DPLLPRESC_PRESC_SHIFT		0
#define OSCCTRL_DPLLPRESC_PRESC_MASK		0x03
/** @defgroup oscctrl_dpllpresc_presc PRESC Output Clock Prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dpllsyncbusy DPLLSYNCBUSY DPLL Synchronization Busy
@{*/

/** OSCCTRL_DPLLSYNCBUSY_DPLLPRESC DPLL Prescaler Synchronization Status **/
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC		(1 << 3)
/** OSCCTRL_DPLLSYNCBUSY_DPLLRATIO DPLL Loop Divider Ratio Synchronization Status **/
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO		(1 << 2)
/** OSCCTRL_DPLLSYNCBUSY_ENABLE DPLL Enable Synchronization Status **/
#define OSCCTRL_DPLLSYNCBUSY_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dpllstatus DPLLSTATUS DPLL Status
@{*/

/** OSCCTRL_DPLLSTATUS_CLKRDY DPLL Clock Ready **/
#define OSCCTRL_DPLLSTATUS_CLKRDY		(1 << 1)
/** OSCCTRL_DPLLSTATUS_LOCK DPLL Lock **/
#define OSCCTRL_DPLLSTATUS_LOCK		(1 << 0)

/**@}*/

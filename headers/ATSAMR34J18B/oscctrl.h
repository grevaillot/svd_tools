#pragma once 

/* --- OSCCTRL: Oscillators Control --------------------------------- */

/** @defgroup oscctrl_registers Oscillators Control Register
@{*/

/** OSCCTRL_INTENCLR Interrupt Enable Clear **/
#define OSCCTRL_INTENCLR			MMIO32(OSCCTRL_BASE + 0x00)
/** OSCCTRL_INTENSET Interrupt Enable Set **/
#define OSCCTRL_INTENSET			MMIO32(OSCCTRL_BASE + 0x04)
/** OSCCTRL_INTFLAG Interrupt Flag Status and Clear **/
#define OSCCTRL_INTFLAG			MMIO32(OSCCTRL_BASE + 0x08)
/** OSCCTRL_STATUS Power and Clocks Status **/
#define OSCCTRL_STATUS			MMIO32(OSCCTRL_BASE + 0x0c)
/** OSCCTRL_XOSCCTRL External Multipurpose Crystal Oscillator (XOSC) Control **/
#define OSCCTRL_XOSCCTRL			MMIO32(OSCCTRL_BASE + 0x10)
/** OSCCTRL_OSC16MCTRL 16MHz Internal Oscillator (OSC16M) Control **/
#define OSCCTRL_OSC16MCTRL			MMIO32(OSCCTRL_BASE + 0x14)
/** OSCCTRL_DFLLCTRL DFLL48M Control **/
#define OSCCTRL_DFLLCTRL			MMIO32(OSCCTRL_BASE + 0x18)
/** OSCCTRL_DFLLVAL DFLL48M Value **/
#define OSCCTRL_DFLLVAL			MMIO32(OSCCTRL_BASE + 0x1c)
/** OSCCTRL_DFLLMUL DFLL48M Multiplier **/
#define OSCCTRL_DFLLMUL			MMIO32(OSCCTRL_BASE + 0x20)
/** OSCCTRL_DFLLSYNC DFLL48M Synchronization **/
#define OSCCTRL_DFLLSYNC			MMIO32(OSCCTRL_BASE + 0x24)
/** OSCCTRL_DPLLCTRLA DPLL Control **/
#define OSCCTRL_DPLLCTRLA			MMIO32(OSCCTRL_BASE + 0x28)
/** OSCCTRL_DPLLRATIO DPLL Ratio Control **/
#define OSCCTRL_DPLLRATIO			MMIO32(OSCCTRL_BASE + 0x2c)
/** OSCCTRL_DPLLCTRLB Digital Core Configuration **/
#define OSCCTRL_DPLLCTRLB			MMIO32(OSCCTRL_BASE + 0x30)
/** OSCCTRL_DPLLPRESC DPLL Prescaler **/
#define OSCCTRL_DPLLPRESC			MMIO32(OSCCTRL_BASE + 0x34)
/** OSCCTRL_DPLLSYNCBUSY DPLL Synchronization Busy **/
#define OSCCTRL_DPLLSYNCBUSY			MMIO32(OSCCTRL_BASE + 0x38)
/** OSCCTRL_DPLLSTATUS DPLL Status **/
#define OSCCTRL_DPLLSTATUS			MMIO32(OSCCTRL_BASE + 0x3c)

/**@}*/


/** @defgroup oscctrl_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** OSCCTRL_INTENCLR_DPLLLDRTO DPLL Ratio Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTENCLR_DPLLLTO DPLL Time Out Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLTO		(1 << 18)
/** OSCCTRL_INTENCLR_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTENCLR_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define OSCCTRL_INTENCLR_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTENCLR_DFLLRCS DFLL Reference Clock Stopped Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLRCS		(1 << 12)
/** OSCCTRL_INTENCLR_DFLLLCKC DFLL Lock Coarse Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLLCKC		(1 << 11)
/** OSCCTRL_INTENCLR_DFLLLCKF DFLL Lock Fine Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLLCKF		(1 << 10)
/** OSCCTRL_INTENCLR_DFLLOOB DFLL Out Of Bounds Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLOOB		(1 << 9)
/** OSCCTRL_INTENCLR_DFLLRDY DFLL Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_DFLLRDY		(1 << 8)
/** OSCCTRL_INTENCLR_OSC16MRDY OSC16M Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTENCLR_XOSCRDY XOSC Ready Interrupt Enable **/
#define OSCCTRL_INTENCLR_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_intenset INTENSET Interrupt Enable Set
@{*/

/** OSCCTRL_INTENSET_DPLLLDRTO DPLL Ratio Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTENSET_DPLLLTO DPLL Time Out Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLTO		(1 << 18)
/** OSCCTRL_INTENSET_DPLLLCKF DPLL Lock Fall Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTENSET_DPLLLCKR DPLL Lock Rise Interrupt Enable **/
#define OSCCTRL_INTENSET_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTENSET_DFLLRCS DFLL Reference Clock Stopped Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLRCS		(1 << 12)
/** OSCCTRL_INTENSET_DFLLLCKC DFLL Lock Coarse Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLLCKC		(1 << 11)
/** OSCCTRL_INTENSET_DFLLLCKF DFLL Lock Fine Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLLCKF		(1 << 10)
/** OSCCTRL_INTENSET_DFLLOOB DFLL Out Of Bounds Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLOOB		(1 << 9)
/** OSCCTRL_INTENSET_DFLLRDY DFLL Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_DFLLRDY		(1 << 8)
/** OSCCTRL_INTENSET_OSC16MRDY OSC16M Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTENSET_XOSCRDY XOSC Ready Interrupt Enable **/
#define OSCCTRL_INTENSET_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** OSCCTRL_INTFLAG_DPLLLDRTO DPLL Ratio Ready **/
#define OSCCTRL_INTFLAG_DPLLLDRTO		(1 << 19)
/** OSCCTRL_INTFLAG_DPLLLTO DPLL Timeout **/
#define OSCCTRL_INTFLAG_DPLLLTO		(1 << 18)
/** OSCCTRL_INTFLAG_DPLLLCKF DPLL Lock Fall **/
#define OSCCTRL_INTFLAG_DPLLLCKF		(1 << 17)
/** OSCCTRL_INTFLAG_DPLLLCKR DPLL Lock Rise **/
#define OSCCTRL_INTFLAG_DPLLLCKR		(1 << 16)
/** OSCCTRL_INTFLAG_DFLLRCS DFLL Reference Clock Stopped **/
#define OSCCTRL_INTFLAG_DFLLRCS		(1 << 12)
/** OSCCTRL_INTFLAG_DFLLLCKC DFLL Lock Coarse **/
#define OSCCTRL_INTFLAG_DFLLLCKC		(1 << 11)
/** OSCCTRL_INTFLAG_DFLLLCKF DFLL Lock Fine **/
#define OSCCTRL_INTFLAG_DFLLLCKF		(1 << 10)
/** OSCCTRL_INTFLAG_DFLLOOB DFLL Out Of Bounds **/
#define OSCCTRL_INTFLAG_DFLLOOB		(1 << 9)
/** OSCCTRL_INTFLAG_DFLLRDY DFLL Ready **/
#define OSCCTRL_INTFLAG_DFLLRDY		(1 << 8)
/** OSCCTRL_INTFLAG_OSC16MRDY OSC16M Ready **/
#define OSCCTRL_INTFLAG_OSC16MRDY		(1 << 4)
/** OSCCTRL_INTFLAG_XOSCRDY XOSC Ready **/
#define OSCCTRL_INTFLAG_XOSCRDY		(1 << 0)

/**@}*/

/** @defgroup oscctrl_status STATUS Power and Clocks Status
@{*/

/** OSCCTRL_STATUS_DPLLLDRTO DPLL Ratio Ready **/
#define OSCCTRL_STATUS_DPLLLDRTO		(1 << 19)
/** OSCCTRL_STATUS_DPLLTO DPLL Timeout **/
#define OSCCTRL_STATUS_DPLLTO		(1 << 18)
/** OSCCTRL_STATUS_DPLLLCKF DPLL Lock Fall **/
#define OSCCTRL_STATUS_DPLLLCKF		(1 << 17)
/** OSCCTRL_STATUS_DPLLLCKR DPLL Lock Rise **/
#define OSCCTRL_STATUS_DPLLLCKR		(1 << 16)
/** OSCCTRL_STATUS_DFLLRCS DFLL Reference Clock Stopped **/
#define OSCCTRL_STATUS_DFLLRCS		(1 << 12)
/** OSCCTRL_STATUS_DFLLLCKC DFLL Lock Coarse **/
#define OSCCTRL_STATUS_DFLLLCKC		(1 << 11)
/** OSCCTRL_STATUS_DFLLLCKF DFLL Lock Fine **/
#define OSCCTRL_STATUS_DFLLLCKF		(1 << 10)
/** OSCCTRL_STATUS_DFLLOOB DFLL Out Of Bounds **/
#define OSCCTRL_STATUS_DFLLOOB		(1 << 9)
/** OSCCTRL_STATUS_DFLLRDY DFLL Ready **/
#define OSCCTRL_STATUS_DFLLRDY		(1 << 8)
/** OSCCTRL_STATUS_OSC16MRDY OSC16M Ready **/
#define OSCCTRL_STATUS_OSC16MRDY		(1 << 4)
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
/** OSCCTRL_XOSCCTRL_XTALEN Crystal Oscillator Enable **/
#define OSCCTRL_XOSCCTRL_XTALEN		(1 << 2)
/** OSCCTRL_XOSCCTRL_ENABLE Oscillator Enable **/
#define OSCCTRL_XOSCCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_osc16mctrl OSC16MCTRL 16MHz Internal Oscillator (OSC16M) Control
@{*/

/** OSCCTRL_OSC16MCTRL_ONDEMAND On Demand Control **/
#define OSCCTRL_OSC16MCTRL_ONDEMAND		(1 << 7)
/** OSCCTRL_OSC16MCTRL_RUNSTDBY Run in Standby **/
#define OSCCTRL_OSC16MCTRL_RUNSTDBY		(1 << 6)

#define OSCCTRL_OSC16MCTRL_FSEL_SHIFT		2
#define OSCCTRL_OSC16MCTRL_FSEL_MASK		0x03
/** @defgroup oscctrl_osc16mctrl_fsel FSEL Oscillator Frequency Select
@{*/
/**@}*/

/** OSCCTRL_OSC16MCTRL_ENABLE Oscillator Enable **/
#define OSCCTRL_OSC16MCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dfllctrl DFLLCTRL DFLL48M Control
@{*/

/** OSCCTRL_DFLLCTRL_WAITLOCK Wait Lock **/
#define OSCCTRL_DFLLCTRL_WAITLOCK		(1 << 11)
/** OSCCTRL_DFLLCTRL_BPLCKC Bypass Coarse Lock **/
#define OSCCTRL_DFLLCTRL_BPLCKC		(1 << 10)
/** OSCCTRL_DFLLCTRL_QLDIS Quick Lock Disable **/
#define OSCCTRL_DFLLCTRL_QLDIS		(1 << 9)
/** OSCCTRL_DFLLCTRL_CCDIS Chill Cycle Disable **/
#define OSCCTRL_DFLLCTRL_CCDIS		(1 << 8)
/** OSCCTRL_DFLLCTRL_ONDEMAND On Demand Control **/
#define OSCCTRL_DFLLCTRL_ONDEMAND		(1 << 7)
/** OSCCTRL_DFLLCTRL_RUNSTDBY Run in Standby **/
#define OSCCTRL_DFLLCTRL_RUNSTDBY		(1 << 6)
/** OSCCTRL_DFLLCTRL_USBCRM USB Clock Recovery Mode **/
#define OSCCTRL_DFLLCTRL_USBCRM		(1 << 5)
/** OSCCTRL_DFLLCTRL_LLAW Lose Lock After Wake **/
#define OSCCTRL_DFLLCTRL_LLAW		(1 << 4)
/** OSCCTRL_DFLLCTRL_STABLE Stable DFLL Frequency **/
#define OSCCTRL_DFLLCTRL_STABLE		(1 << 3)
/** OSCCTRL_DFLLCTRL_MODE Operating Mode Selection **/
#define OSCCTRL_DFLLCTRL_MODE		(1 << 2)
/** OSCCTRL_DFLLCTRL_ENABLE DFLL Enable **/
#define OSCCTRL_DFLLCTRL_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dfllval DFLLVAL DFLL48M Value
@{*/


#define OSCCTRL_DFLLVAL_DIFF_SHIFT		16
#define OSCCTRL_DFLLVAL_DIFF_MASK		0xffff
/** @defgroup oscctrl_dfllval_diff DIFF Multiplication Ratio Difference
@{*/
/**@}*/


#define OSCCTRL_DFLLVAL_COARSE_SHIFT		10
#define OSCCTRL_DFLLVAL_COARSE_MASK		0x3f
/** @defgroup oscctrl_dfllval_coarse COARSE Coarse Value
@{*/
/**@}*/


#define OSCCTRL_DFLLVAL_FINE_SHIFT		0
#define OSCCTRL_DFLLVAL_FINE_MASK		0x3ff
/** @defgroup oscctrl_dfllval_fine FINE Fine Value
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dfllmul DFLLMUL DFLL48M Multiplier
@{*/


#define OSCCTRL_DFLLMUL_CSTEP_SHIFT		26
#define OSCCTRL_DFLLMUL_CSTEP_MASK		0x3f
/** @defgroup oscctrl_dfllmul_cstep CSTEP Coarse Maximum Step
@{*/
/**@}*/


#define OSCCTRL_DFLLMUL_FSTEP_SHIFT		16
#define OSCCTRL_DFLLMUL_FSTEP_MASK		0x3ff
/** @defgroup oscctrl_dfllmul_fstep FSTEP Fine Maximum Step
@{*/
/**@}*/


#define OSCCTRL_DFLLMUL_MUL_SHIFT		0
#define OSCCTRL_DFLLMUL_MUL_MASK		0xffff
/** @defgroup oscctrl_dfllmul_mul MUL DFLL Multiply Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup oscctrl_dfllsync DFLLSYNC DFLL48M Synchronization
@{*/

/** OSCCTRL_DFLLSYNC_READREQ Read Request **/
#define OSCCTRL_DFLLSYNC_READREQ		(1 << 7)

/**@}*/

/** @defgroup oscctrl_dpllctrla DPLLCTRLA DPLL Control
@{*/

/** OSCCTRL_DPLLCTRLA_ONDEMAND On Demand **/
#define OSCCTRL_DPLLCTRLA_ONDEMAND		(1 << 7)
/** OSCCTRL_DPLLCTRLA_RUNSTDBY Run in Standby **/
#define OSCCTRL_DPLLCTRLA_RUNSTDBY		(1 << 6)
/** OSCCTRL_DPLLCTRLA_ENABLE Enable **/
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

/** @defgroup oscctrl_dpllctrlb DPLLCTRLB Digital Core Configuration
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
/** OSCCTRL_DPLLSYNCBUSY_DPLLRATIO DPLL Ratio Synchronization Status **/
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO		(1 << 2)
/** OSCCTRL_DPLLSYNCBUSY_ENABLE DPLL Enable Synchronization Status **/
#define OSCCTRL_DPLLSYNCBUSY_ENABLE		(1 << 1)

/**@}*/

/** @defgroup oscctrl_dpllstatus DPLLSTATUS DPLL Status
@{*/

/** OSCCTRL_DPLLSTATUS_CLKRDY DPLL Clock Ready **/
#define OSCCTRL_DPLLSTATUS_CLKRDY		(1 << 1)
/** OSCCTRL_DPLLSTATUS_LOCK DPLL Lock Status **/
#define OSCCTRL_DPLLSTATUS_LOCK		(1 << 0)

/**@}*/

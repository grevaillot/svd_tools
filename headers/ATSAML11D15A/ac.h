#pragma once 

/* --- AC: Analog Comparators --------------------------------------- */

/** @defgroup ac_registers Analog Comparators Register
@{*/

/** AC_CTRLA Control A **/
#define AC_CTRLA			MMIO32(AC_BASE + 0x00)
/** AC_CTRLB Control B **/
#define AC_CTRLB			MMIO32(AC_BASE + 0x01)
/** AC_EVCTRL Event Control **/
#define AC_EVCTRL			MMIO32(AC_BASE + 0x02)
/** AC_INTENCLR Interrupt Enable Clear **/
#define AC_INTENCLR			MMIO32(AC_BASE + 0x04)
/** AC_INTENSET Interrupt Enable Set **/
#define AC_INTENSET			MMIO32(AC_BASE + 0x05)
/** AC_INTFLAG Interrupt Flag Status and Clear **/
#define AC_INTFLAG			MMIO32(AC_BASE + 0x06)
/** AC_STATUSA Status A **/
#define AC_STATUSA			MMIO32(AC_BASE + 0x07)
/** AC_STATUSB Status B **/
#define AC_STATUSB			MMIO32(AC_BASE + 0x08)
/** AC_DBGCTRL Debug Control **/
#define AC_DBGCTRL			MMIO32(AC_BASE + 0x09)
/** AC_WINCTRL Window Control **/
#define AC_WINCTRL			MMIO32(AC_BASE + 0x0a)
/** AC_SCALER[0] Scaler n **/
#define AC_SCALER[0]			MMIO32(AC_BASE + 0x0c)
/** AC_SCALER[1] Scaler n **/
#define AC_SCALER[1]			MMIO32(AC_BASE + 0x0d)
/** AC_COMPCTRL[0] Comparator Control n **/
#define AC_COMPCTRL[0]			MMIO32(AC_BASE + 0x10)
/** AC_COMPCTRL[1] Comparator Control n **/
#define AC_COMPCTRL[1]			MMIO32(AC_BASE + 0x14)
/** AC_SYNCBUSY Synchronization Busy **/
#define AC_SYNCBUSY			MMIO32(AC_BASE + 0x20)

/**@}*/


/** @defgroup ac_ctrla CTRLA Control A
@{*/

/** AC_CTRLA_ENABLE Enable **/
#define AC_CTRLA_ENABLE		(1 << 1)
/** AC_CTRLA_SWRST Software Reset **/
#define AC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup ac_ctrlb CTRLB Control B
@{*/

/** AC_CTRLB_START1 Comparator 1 Start Comparison **/
#define AC_CTRLB_START1		(1 << 1)
/** AC_CTRLB_START0 Comparator 0 Start Comparison **/
#define AC_CTRLB_START0		(1 << 0)

/**@}*/

/** @defgroup ac_evctrl EVCTRL Event Control
@{*/

/** AC_EVCTRL_INVEI1 Comparator 1 Input Event Invert Enable **/
#define AC_EVCTRL_INVEI1		(1 << 13)
/** AC_EVCTRL_INVEI0 Comparator 0 Input Event Invert Enable **/
#define AC_EVCTRL_INVEI0		(1 << 12)
/** AC_EVCTRL_COMPEI1 Comparator 1 Event Input Enable **/
#define AC_EVCTRL_COMPEI1		(1 << 9)
/** AC_EVCTRL_COMPEI0 Comparator 0 Event Input Enable **/
#define AC_EVCTRL_COMPEI0		(1 << 8)
/** AC_EVCTRL_WINEO0 Window 0 Event Output Enable **/
#define AC_EVCTRL_WINEO0		(1 << 4)
/** AC_EVCTRL_COMPEO1 Comparator 1 Event Output Enable **/
#define AC_EVCTRL_COMPEO1		(1 << 1)
/** AC_EVCTRL_COMPEO0 Comparator 0 Event Output Enable **/
#define AC_EVCTRL_COMPEO0		(1 << 0)

/**@}*/

/** @defgroup ac_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** AC_INTENCLR_WIN0 Window 0 Interrupt Enable **/
#define AC_INTENCLR_WIN0		(1 << 4)
/** AC_INTENCLR_COMP1 Comparator 1 Interrupt Enable **/
#define AC_INTENCLR_COMP1		(1 << 1)
/** AC_INTENCLR_COMP0 Comparator 0 Interrupt Enable **/
#define AC_INTENCLR_COMP0		(1 << 0)

/**@}*/

/** @defgroup ac_intenset INTENSET Interrupt Enable Set
@{*/

/** AC_INTENSET_WIN0 Window 0 Interrupt Enable **/
#define AC_INTENSET_WIN0		(1 << 4)
/** AC_INTENSET_COMP1 Comparator 1 Interrupt Enable **/
#define AC_INTENSET_COMP1		(1 << 1)
/** AC_INTENSET_COMP0 Comparator 0 Interrupt Enable **/
#define AC_INTENSET_COMP0		(1 << 0)

/**@}*/

/** @defgroup ac_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** AC_INTFLAG_WIN0 Window 0 **/
#define AC_INTFLAG_WIN0		(1 << 4)
/** AC_INTFLAG_COMP1 Comparator 1 **/
#define AC_INTFLAG_COMP1		(1 << 1)
/** AC_INTFLAG_COMP0 Comparator 0 **/
#define AC_INTFLAG_COMP0		(1 << 0)

/**@}*/

/** @defgroup ac_statusa STATUSA Status A
@{*/


#define AC_STATUSA_WSTATE0_SHIFT		4
#define AC_STATUSA_WSTATE0_MASK		0x03
/** @defgroup ac_statusa_wstate0 WSTATE0 Window 0 Current State
@{*/
/**@}*/

/** AC_STATUSA_STATE1 Comparator 1 Current State **/
#define AC_STATUSA_STATE1		(1 << 1)
/** AC_STATUSA_STATE0 Comparator 0 Current State **/
#define AC_STATUSA_STATE0		(1 << 0)

/**@}*/

/** @defgroup ac_statusb STATUSB Status B
@{*/

/** AC_STATUSB_READY1 Comparator 1 Ready **/
#define AC_STATUSB_READY1		(1 << 1)
/** AC_STATUSB_READY0 Comparator 0 Ready **/
#define AC_STATUSB_READY0		(1 << 0)

/**@}*/

/** @defgroup ac_dbgctrl DBGCTRL Debug Control
@{*/

/** AC_DBGCTRL_DBGRUN Debug Run **/
#define AC_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup ac_winctrl WINCTRL Window Control
@{*/


#define AC_WINCTRL_WINTSEL0_SHIFT		1
#define AC_WINCTRL_WINTSEL0_MASK		0x03
/** @defgroup ac_winctrl_wintsel0 WINTSEL0 Window 0 Interrupt Selection
@{*/
/**@}*/

/** AC_WINCTRL_WEN0 Window 0 Mode Enable **/
#define AC_WINCTRL_WEN0		(1 << 0)

/**@}*/

/** @defgroup ac_scaler[0] SCALER[0] Scaler n
@{*/


#define AC_SCALER[0]_VALUE_SHIFT		0
#define AC_SCALER[0]_VALUE_MASK		0x3f
/** @defgroup ac_scaler[0]_value VALUE Scaler Value
@{*/
/**@}*/


/**@}*/

/** @defgroup ac_scaler[1] SCALER[1] Scaler n
@{*/


#define AC_SCALER[1]_VALUE_SHIFT		0
#define AC_SCALER[1]_VALUE_MASK		0x3f
/** @defgroup ac_scaler[1]_value VALUE Scaler Value
@{*/
/**@}*/


/**@}*/

/** @defgroup ac_compctrl[0] COMPCTRL[0] Comparator Control n
@{*/


#define AC_COMPCTRL[0]_OUT_SHIFT		28
#define AC_COMPCTRL[0]_OUT_MASK		0x03
/** @defgroup ac_compctrl[0]_out OUT Output
@{*/
/**@}*/


#define AC_COMPCTRL[0]_FLEN_SHIFT		24
#define AC_COMPCTRL[0]_FLEN_MASK		0x07
/** @defgroup ac_compctrl[0]_flen FLEN Filter Length
@{*/
/**@}*/


#define AC_COMPCTRL[0]_HYST_SHIFT		20
#define AC_COMPCTRL[0]_HYST_MASK		0x03
/** @defgroup ac_compctrl[0]_hyst HYST Hysteresis Level
@{*/
/**@}*/

/** AC_COMPCTRL[0]_HYSTEN Hysteresis Enable **/
#define AC_COMPCTRL[0]_HYSTEN		(1 << 19)

#define AC_COMPCTRL[0]_SPEED_SHIFT		16
#define AC_COMPCTRL[0]_SPEED_MASK		0x03
/** @defgroup ac_compctrl[0]_speed SPEED Speed Selection
@{*/
/**@}*/

/** AC_COMPCTRL[0]_SWAP Swap Inputs and Invert **/
#define AC_COMPCTRL[0]_SWAP		(1 << 15)

#define AC_COMPCTRL[0]_MUXPOS_SHIFT		12
#define AC_COMPCTRL[0]_MUXPOS_MASK		0x07
/** @defgroup ac_compctrl[0]_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL[0]_MUXNEG_SHIFT		8
#define AC_COMPCTRL[0]_MUXNEG_MASK		0x07
/** @defgroup ac_compctrl[0]_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/

/** AC_COMPCTRL[0]_RUNSTDBY Run in Standby **/
#define AC_COMPCTRL[0]_RUNSTDBY		(1 << 6)

#define AC_COMPCTRL[0]_INTSEL_SHIFT		3
#define AC_COMPCTRL[0]_INTSEL_MASK		0x03
/** @defgroup ac_compctrl[0]_intsel INTSEL Interrupt Selection
@{*/
/**@}*/

/** AC_COMPCTRL[0]_SINGLE Single-Shot Mode **/
#define AC_COMPCTRL[0]_SINGLE		(1 << 2)
/** AC_COMPCTRL[0]_ENABLE Enable **/
#define AC_COMPCTRL[0]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ac_compctrl[1] COMPCTRL[1] Comparator Control n
@{*/


#define AC_COMPCTRL[1]_OUT_SHIFT		28
#define AC_COMPCTRL[1]_OUT_MASK		0x03
/** @defgroup ac_compctrl[1]_out OUT Output
@{*/
/**@}*/


#define AC_COMPCTRL[1]_FLEN_SHIFT		24
#define AC_COMPCTRL[1]_FLEN_MASK		0x07
/** @defgroup ac_compctrl[1]_flen FLEN Filter Length
@{*/
/**@}*/


#define AC_COMPCTRL[1]_HYST_SHIFT		20
#define AC_COMPCTRL[1]_HYST_MASK		0x03
/** @defgroup ac_compctrl[1]_hyst HYST Hysteresis Level
@{*/
/**@}*/

/** AC_COMPCTRL[1]_HYSTEN Hysteresis Enable **/
#define AC_COMPCTRL[1]_HYSTEN		(1 << 19)

#define AC_COMPCTRL[1]_SPEED_SHIFT		16
#define AC_COMPCTRL[1]_SPEED_MASK		0x03
/** @defgroup ac_compctrl[1]_speed SPEED Speed Selection
@{*/
/**@}*/

/** AC_COMPCTRL[1]_SWAP Swap Inputs and Invert **/
#define AC_COMPCTRL[1]_SWAP		(1 << 15)

#define AC_COMPCTRL[1]_MUXPOS_SHIFT		12
#define AC_COMPCTRL[1]_MUXPOS_MASK		0x07
/** @defgroup ac_compctrl[1]_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL[1]_MUXNEG_SHIFT		8
#define AC_COMPCTRL[1]_MUXNEG_MASK		0x07
/** @defgroup ac_compctrl[1]_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/

/** AC_COMPCTRL[1]_RUNSTDBY Run in Standby **/
#define AC_COMPCTRL[1]_RUNSTDBY		(1 << 6)

#define AC_COMPCTRL[1]_INTSEL_SHIFT		3
#define AC_COMPCTRL[1]_INTSEL_MASK		0x03
/** @defgroup ac_compctrl[1]_intsel INTSEL Interrupt Selection
@{*/
/**@}*/

/** AC_COMPCTRL[1]_SINGLE Single-Shot Mode **/
#define AC_COMPCTRL[1]_SINGLE		(1 << 2)
/** AC_COMPCTRL[1]_ENABLE Enable **/
#define AC_COMPCTRL[1]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ac_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** AC_SYNCBUSY_COMPCTRL1 COMPCTRL 1 Synchronization Busy **/
#define AC_SYNCBUSY_COMPCTRL1		(1 << 4)
/** AC_SYNCBUSY_COMPCTRL0 COMPCTRL 0 Synchronization Busy **/
#define AC_SYNCBUSY_COMPCTRL0		(1 << 3)
/** AC_SYNCBUSY_WINCTRL WINCTRL Synchronization Busy **/
#define AC_SYNCBUSY_WINCTRL		(1 << 2)
/** AC_SYNCBUSY_ENABLE Enable Synchronization Busy **/
#define AC_SYNCBUSY_ENABLE		(1 << 1)
/** AC_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define AC_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

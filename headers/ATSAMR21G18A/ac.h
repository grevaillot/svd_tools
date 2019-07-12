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
#define AC_STATUSA			MMIO32(AC_BASE + 0x08)
/** AC_STATUSB Status B **/
#define AC_STATUSB			MMIO32(AC_BASE + 0x09)
/** AC_STATUSC Status C **/
#define AC_STATUSC			MMIO32(AC_BASE + 0x0a)
/** AC_WINCTRL Window Control **/
#define AC_WINCTRL			MMIO32(AC_BASE + 0x0c)
/** AC_COMPCTRL0 Comparator Control n **/
#define AC_COMPCTRL0			MMIO32(AC_BASE + 0x10)
/** AC_COMPCTRL1 Comparator Control n **/
#define AC_COMPCTRL1			MMIO32(AC_BASE + 0x14)
/** AC_SCALER0 Scaler n **/
#define AC_SCALER0			MMIO32(AC_BASE + 0x20)
/** AC_SCALER1 Scaler n **/
#define AC_SCALER1			MMIO32(AC_BASE + 0x21)

/**@}*/


/** @defgroup ac_ctrla CTRLA Control A
@{*/

/** AC_CTRLA_LPMUX Low-Power Mux **/
#define AC_CTRLA_LPMUX		(1 << 7)
/** AC_CTRLA_RUNSTDBY Run in Standby **/
#define AC_CTRLA_RUNSTDBY		(1 << 2)
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

/** AC_EVCTRL_COMPEI1 Comparator 1 Event Input **/
#define AC_EVCTRL_COMPEI1		(1 << 9)
/** AC_EVCTRL_COMPEI0 Comparator 0 Event Input **/
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

/** AC_STATUSB_SYNCBUSY Synchronization Busy **/
#define AC_STATUSB_SYNCBUSY		(1 << 7)
/** AC_STATUSB_READY1 Comparator 1 Ready **/
#define AC_STATUSB_READY1		(1 << 1)
/** AC_STATUSB_READY0 Comparator 0 Ready **/
#define AC_STATUSB_READY0		(1 << 0)

/**@}*/

/** @defgroup ac_statusc STATUSC Status C
@{*/


#define AC_STATUSC_WSTATE0_SHIFT		4
#define AC_STATUSC_WSTATE0_MASK		0x03
/** @defgroup ac_statusc_wstate0 WSTATE0 Window 0 Current State
@{*/
/**@}*/

/** AC_STATUSC_STATE1 Comparator 1 Current State **/
#define AC_STATUSC_STATE1		(1 << 1)
/** AC_STATUSC_STATE0 Comparator 0 Current State **/
#define AC_STATUSC_STATE0		(1 << 0)

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

/** @defgroup ac_compctrl0 COMPCTRL0 Comparator Control n
@{*/


#define AC_COMPCTRL0_FLEN_SHIFT		24
#define AC_COMPCTRL0_FLEN_MASK		0x07
/** @defgroup ac_compctrl0_flen FLEN Filter Length
@{*/
/**@}*/

/** AC_COMPCTRL0_HYST Hysteresis Enable **/
#define AC_COMPCTRL0_HYST		(1 << 19)

#define AC_COMPCTRL0_OUT_SHIFT		16
#define AC_COMPCTRL0_OUT_MASK		0x03
/** @defgroup ac_compctrl0_out OUT Output
@{*/
/**@}*/

/** AC_COMPCTRL0_SWAP Swap Inputs and Invert **/
#define AC_COMPCTRL0_SWAP		(1 << 15)

#define AC_COMPCTRL0_MUXPOS_SHIFT		12
#define AC_COMPCTRL0_MUXPOS_MASK		0x03
/** @defgroup ac_compctrl0_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL0_MUXNEG_SHIFT		8
#define AC_COMPCTRL0_MUXNEG_MASK		0x07
/** @defgroup ac_compctrl0_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL0_INTSEL_SHIFT		5
#define AC_COMPCTRL0_INTSEL_MASK		0x03
/** @defgroup ac_compctrl0_intsel INTSEL Interrupt Selection
@{*/
/**@}*/


#define AC_COMPCTRL0_SPEED_SHIFT		2
#define AC_COMPCTRL0_SPEED_MASK		0x03
/** @defgroup ac_compctrl0_speed SPEED Speed Selection
@{*/
/**@}*/

/** AC_COMPCTRL0_SINGLE Single-Shot Mode **/
#define AC_COMPCTRL0_SINGLE		(1 << 1)
/** AC_COMPCTRL0_ENABLE Enable **/
#define AC_COMPCTRL0_ENABLE		(1 << 0)

/**@}*/

/** @defgroup ac_compctrl1 COMPCTRL1 Comparator Control n
@{*/


#define AC_COMPCTRL1_FLEN_SHIFT		24
#define AC_COMPCTRL1_FLEN_MASK		0x07
/** @defgroup ac_compctrl1_flen FLEN Filter Length
@{*/
/**@}*/

/** AC_COMPCTRL1_HYST Hysteresis Enable **/
#define AC_COMPCTRL1_HYST		(1 << 19)

#define AC_COMPCTRL1_OUT_SHIFT		16
#define AC_COMPCTRL1_OUT_MASK		0x03
/** @defgroup ac_compctrl1_out OUT Output
@{*/
/**@}*/

/** AC_COMPCTRL1_SWAP Swap Inputs and Invert **/
#define AC_COMPCTRL1_SWAP		(1 << 15)

#define AC_COMPCTRL1_MUXPOS_SHIFT		12
#define AC_COMPCTRL1_MUXPOS_MASK		0x03
/** @defgroup ac_compctrl1_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL1_MUXNEG_SHIFT		8
#define AC_COMPCTRL1_MUXNEG_MASK		0x07
/** @defgroup ac_compctrl1_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/


#define AC_COMPCTRL1_INTSEL_SHIFT		5
#define AC_COMPCTRL1_INTSEL_MASK		0x03
/** @defgroup ac_compctrl1_intsel INTSEL Interrupt Selection
@{*/
/**@}*/


#define AC_COMPCTRL1_SPEED_SHIFT		2
#define AC_COMPCTRL1_SPEED_MASK		0x03
/** @defgroup ac_compctrl1_speed SPEED Speed Selection
@{*/
/**@}*/

/** AC_COMPCTRL1_SINGLE Single-Shot Mode **/
#define AC_COMPCTRL1_SINGLE		(1 << 1)
/** AC_COMPCTRL1_ENABLE Enable **/
#define AC_COMPCTRL1_ENABLE		(1 << 0)

/**@}*/

/** @defgroup ac_scaler0 SCALER0 Scaler n
@{*/


#define AC_SCALER0_VALUE_SHIFT		0
#define AC_SCALER0_VALUE_MASK		0x3f
/** @defgroup ac_scaler0_value VALUE Scaler Value
@{*/
/**@}*/


/**@}*/

/** @defgroup ac_scaler1 SCALER1 Scaler n
@{*/


#define AC_SCALER1_VALUE_SHIFT		0
#define AC_SCALER1_VALUE_MASK		0x3f
/** @defgroup ac_scaler1_value VALUE Scaler Value
@{*/
/**@}*/


/**@}*/

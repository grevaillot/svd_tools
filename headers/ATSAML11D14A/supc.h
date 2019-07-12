#pragma once 

/* --- SUPC: Supply Controller -------------------------------------- */

/** @defgroup supc_registers Supply Controller Register
@{*/

/** SUPC_INTENCLR Interrupt Enable Clear **/
#define SUPC_INTENCLR			MMIO32(SUPC_BASE + 0x00)
/** SUPC_INTENSET Interrupt Enable Set **/
#define SUPC_INTENSET			MMIO32(SUPC_BASE + 0x04)
/** SUPC_INTFLAG Interrupt Flag Status and Clear **/
#define SUPC_INTFLAG			MMIO32(SUPC_BASE + 0x08)
/** SUPC_STATUS Power and Clocks Status **/
#define SUPC_STATUS			MMIO32(SUPC_BASE + 0x0c)
/** SUPC_BOD33 BOD33 Control **/
#define SUPC_BOD33			MMIO32(SUPC_BASE + 0x10)
/** SUPC_BOD12 BOD12 Control **/
#define SUPC_BOD12			MMIO32(SUPC_BASE + 0x14)
/** SUPC_VREG VREG Control **/
#define SUPC_VREG			MMIO32(SUPC_BASE + 0x18)
/** SUPC_VREF VREF Control **/
#define SUPC_VREF			MMIO32(SUPC_BASE + 0x1c)
/** SUPC_EVCTRL Event Control **/
#define SUPC_EVCTRL			MMIO32(SUPC_BASE + 0x2c)
/** SUPC_VREGSUSP VREG Suspend Control **/
#define SUPC_VREGSUSP			MMIO32(SUPC_BASE + 0x30)

/**@}*/


/** @defgroup supc_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** SUPC_INTENCLR_ULPVREFRDY ULPVREF Voltage Reference Ready **/
#define SUPC_INTENCLR_ULPVREFRDY		(1 << 11)
/** SUPC_INTENCLR_VCORERDY VDDCORE Ready **/
#define SUPC_INTENCLR_VCORERDY		(1 << 10)
/** SUPC_INTENCLR_VREGRDY Voltage Regulator Ready **/
#define SUPC_INTENCLR_VREGRDY		(1 << 8)
/** SUPC_INTENCLR_B12SRDY BOD12 Synchronization Ready **/
#define SUPC_INTENCLR_B12SRDY		(1 << 5)
/** SUPC_INTENCLR_BOD12DET BOD12 Detection **/
#define SUPC_INTENCLR_BOD12DET		(1 << 4)
/** SUPC_INTENCLR_BOD12RDY BOD12 Ready **/
#define SUPC_INTENCLR_BOD12RDY		(1 << 3)
/** SUPC_INTENCLR_B33SRDY BOD33 Synchronization Ready **/
#define SUPC_INTENCLR_B33SRDY		(1 << 2)
/** SUPC_INTENCLR_BOD33DET BOD33 Detection **/
#define SUPC_INTENCLR_BOD33DET		(1 << 1)
/** SUPC_INTENCLR_BOD33RDY BOD33 Ready **/
#define SUPC_INTENCLR_BOD33RDY		(1 << 0)

/**@}*/

/** @defgroup supc_intenset INTENSET Interrupt Enable Set
@{*/

/** SUPC_INTENSET_ULPVREFRDY ULPVREF Voltage Reference Ready **/
#define SUPC_INTENSET_ULPVREFRDY		(1 << 11)
/** SUPC_INTENSET_VCORERDY VDDCORE Ready **/
#define SUPC_INTENSET_VCORERDY		(1 << 10)
/** SUPC_INTENSET_VREGRDY Voltage Regulator Ready **/
#define SUPC_INTENSET_VREGRDY		(1 << 8)
/** SUPC_INTENSET_B12SRDY BOD12 Synchronization Ready **/
#define SUPC_INTENSET_B12SRDY		(1 << 5)
/** SUPC_INTENSET_BOD12DET BOD12 Detection **/
#define SUPC_INTENSET_BOD12DET		(1 << 4)
/** SUPC_INTENSET_BOD12RDY BOD12 Ready **/
#define SUPC_INTENSET_BOD12RDY		(1 << 3)
/** SUPC_INTENSET_B33SRDY BOD33 Synchronization Ready **/
#define SUPC_INTENSET_B33SRDY		(1 << 2)
/** SUPC_INTENSET_BOD33DET BOD33 Detection **/
#define SUPC_INTENSET_BOD33DET		(1 << 1)
/** SUPC_INTENSET_BOD33RDY BOD33 Ready **/
#define SUPC_INTENSET_BOD33RDY		(1 << 0)

/**@}*/

/** @defgroup supc_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** SUPC_INTFLAG_ULPVREFRDY ULPVREF Voltage Reference Ready **/
#define SUPC_INTFLAG_ULPVREFRDY		(1 << 11)
/** SUPC_INTFLAG_VCORERDY VDDCORE Ready **/
#define SUPC_INTFLAG_VCORERDY		(1 << 10)
/** SUPC_INTFLAG_VREGRDY Voltage Regulator Ready **/
#define SUPC_INTFLAG_VREGRDY		(1 << 8)
/** SUPC_INTFLAG_B12SRDY BOD12 Synchronization Ready **/
#define SUPC_INTFLAG_B12SRDY		(1 << 5)
/** SUPC_INTFLAG_BOD12DET BOD12 Detection **/
#define SUPC_INTFLAG_BOD12DET		(1 << 4)
/** SUPC_INTFLAG_BOD12RDY BOD12 Ready **/
#define SUPC_INTFLAG_BOD12RDY		(1 << 3)
/** SUPC_INTFLAG_B33SRDY BOD33 Synchronization Ready **/
#define SUPC_INTFLAG_B33SRDY		(1 << 2)
/** SUPC_INTFLAG_BOD33DET BOD33 Detection **/
#define SUPC_INTFLAG_BOD33DET		(1 << 1)
/** SUPC_INTFLAG_BOD33RDY BOD33 Ready **/
#define SUPC_INTFLAG_BOD33RDY		(1 << 0)

/**@}*/

/** @defgroup supc_status STATUS Power and Clocks Status
@{*/

/** SUPC_STATUS_ULPBIASRDY Low Power Voltage Bias Ready **/
#define SUPC_STATUS_ULPBIASRDY		(1 << 13)
/** SUPC_STATUS_ULPVREFRDY Low Power Voltage Reference Ready **/
#define SUPC_STATUS_ULPVREFRDY		(1 << 12)
/** SUPC_STATUS_VCORERDY VDDCORE Ready **/
#define SUPC_STATUS_VCORERDY		(1 << 10)
/** SUPC_STATUS_VREGRDY Voltage Regulator Ready **/
#define SUPC_STATUS_VREGRDY		(1 << 8)
/** SUPC_STATUS_B12SRDY BOD12 Synchronization Ready **/
#define SUPC_STATUS_B12SRDY		(1 << 5)
/** SUPC_STATUS_BOD12DET BOD12 Detection **/
#define SUPC_STATUS_BOD12DET		(1 << 4)
/** SUPC_STATUS_BOD12RDY BOD12 Ready **/
#define SUPC_STATUS_BOD12RDY		(1 << 3)
/** SUPC_STATUS_B33SRDY BOD33 Synchronization Ready **/
#define SUPC_STATUS_B33SRDY		(1 << 2)
/** SUPC_STATUS_BOD33DET BOD33 Detection **/
#define SUPC_STATUS_BOD33DET		(1 << 1)
/** SUPC_STATUS_BOD33RDY BOD33 Ready **/
#define SUPC_STATUS_BOD33RDY		(1 << 0)

/**@}*/

/** @defgroup supc_bod33 BOD33 BOD33 Control
@{*/


#define SUPC_BOD33_LEVEL_SHIFT		16
#define SUPC_BOD33_LEVEL_MASK		0x3f
/** @defgroup supc_bod33_level LEVEL Threshold Level for VDD
@{*/
/**@}*/


#define SUPC_BOD33_PSEL_SHIFT		12
#define SUPC_BOD33_PSEL_MASK		0x0f
/** @defgroup supc_bod33_psel PSEL Prescaler Select
@{*/
/**@}*/

/** SUPC_BOD33_REFSEL BOD33 Voltage Reference Selection **/
#define SUPC_BOD33_REFSEL		(1 << 11)
/** SUPC_BOD33_ACTCFG Configuration in Active mode **/
#define SUPC_BOD33_ACTCFG		(1 << 8)
/** SUPC_BOD33_RUNSTDBY Run during Standby **/
#define SUPC_BOD33_RUNSTDBY		(1 << 6)
/** SUPC_BOD33_STDBYCFG Configuration in Standby mode **/
#define SUPC_BOD33_STDBYCFG		(1 << 5)

#define SUPC_BOD33_ACTION_SHIFT		3
#define SUPC_BOD33_ACTION_MASK		0x03
/** @defgroup supc_bod33_action ACTION Action when Threshold Crossed
@{*/
/**@}*/

/** SUPC_BOD33_HYST Hysteresis Enable **/
#define SUPC_BOD33_HYST		(1 << 2)
/** SUPC_BOD33_ENABLE Enable **/
#define SUPC_BOD33_ENABLE		(1 << 1)

/**@}*/

/** @defgroup supc_bod12 BOD12 BOD12 Control
@{*/


#define SUPC_BOD12_LEVEL_SHIFT		16
#define SUPC_BOD12_LEVEL_MASK		0x3f
/** @defgroup supc_bod12_level LEVEL Threshold Level
@{*/
/**@}*/


#define SUPC_BOD12_PSEL_SHIFT		12
#define SUPC_BOD12_PSEL_MASK		0x0f
/** @defgroup supc_bod12_psel PSEL Prescaler Select
@{*/
/**@}*/

/** SUPC_BOD12_ACTCFG Configuration in Active mode **/
#define SUPC_BOD12_ACTCFG		(1 << 8)
/** SUPC_BOD12_RUNSTDBY Run during Standby **/
#define SUPC_BOD12_RUNSTDBY		(1 << 6)
/** SUPC_BOD12_STDBYCFG Configuration in Standby mode **/
#define SUPC_BOD12_STDBYCFG		(1 << 5)

#define SUPC_BOD12_ACTION_SHIFT		3
#define SUPC_BOD12_ACTION_MASK		0x03
/** @defgroup supc_bod12_action ACTION Action when Threshold Crossed
@{*/
/**@}*/

/** SUPC_BOD12_HYST Hysteresis Enable **/
#define SUPC_BOD12_HYST		(1 << 2)
/** SUPC_BOD12_ENABLE Enable **/
#define SUPC_BOD12_ENABLE		(1 << 1)

/**@}*/

/** @defgroup supc_vreg VREG VREG Control
@{*/


#define SUPC_VREG_VSPER_SHIFT		24
#define SUPC_VREG_VSPER_MASK		0xff
/** @defgroup supc_vreg_vsper VSPER Voltage Scaling Period
@{*/
/**@}*/


#define SUPC_VREG_VSVSTEP_SHIFT		16
#define SUPC_VREG_VSVSTEP_MASK		0x0f
/** @defgroup supc_vreg_vsvstep VSVSTEP Voltage Scaling Voltage Step
@{*/
/**@}*/

/** SUPC_VREG_VREFSEL Voltage Regulator Voltage Reference Selection **/
#define SUPC_VREG_VREFSEL		(1 << 9)
/** SUPC_VREG_LPEFF Low Power efficiency **/
#define SUPC_VREG_LPEFF		(1 << 8)
/** SUPC_VREG_RUNSTDBY Run during Standby **/
#define SUPC_VREG_RUNSTDBY		(1 << 6)
/** SUPC_VREG_STDBYPL0 Standby in PL0 **/
#define SUPC_VREG_STDBYPL0		(1 << 5)

#define SUPC_VREG_SEL_SHIFT		2
#define SUPC_VREG_SEL_MASK		0x03
/** @defgroup supc_vreg_sel SEL Voltage Regulator Selection in active mode
@{*/
/**@}*/

/** SUPC_VREG_ENABLE Enable **/
#define SUPC_VREG_ENABLE		(1 << 1)

/**@}*/

/** @defgroup supc_vref VREF VREF Control
@{*/


#define SUPC_VREF_SEL_SHIFT		16
#define SUPC_VREF_SEL_MASK		0x0f
/** @defgroup supc_vref_sel SEL Voltage Reference Selection
@{*/
/**@}*/

/** SUPC_VREF_ONDEMAND On Demand Control **/
#define SUPC_VREF_ONDEMAND		(1 << 7)
/** SUPC_VREF_RUNSTDBY Run during Standby **/
#define SUPC_VREF_RUNSTDBY		(1 << 6)
/** SUPC_VREF_TSSEL Temperature Sensor Selection **/
#define SUPC_VREF_TSSEL		(1 << 3)
/** SUPC_VREF_VREFOE Voltage Reference Output Enable **/
#define SUPC_VREF_VREFOE		(1 << 2)
/** SUPC_VREF_TSEN Temperature Sensor Output Enable **/
#define SUPC_VREF_TSEN		(1 << 1)

/**@}*/

/** @defgroup supc_evctrl EVCTRL Event Control
@{*/

/** SUPC_EVCTRL_BOD12DETEO BOD12 Detection Event Output Enable **/
#define SUPC_EVCTRL_BOD12DETEO		(1 << 4)
/** SUPC_EVCTRL_BOD33DETEO BOD33 Detection Event Output Enable **/
#define SUPC_EVCTRL_BOD33DETEO		(1 << 1)

/**@}*/

/** @defgroup supc_vregsusp VREGSUSP VREG Suspend Control
@{*/

/** SUPC_VREGSUSP_VREGSEN Enable Voltage Regulator Suspend **/
#define SUPC_VREGSUSP_VREGSEN		(1 << 0)

/**@}*/

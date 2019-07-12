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
/** SUPC_BBPS Battery Backup Power Switch **/
#define SUPC_BBPS			MMIO32(SUPC_BASE + 0x20)
/** SUPC_BKOUT Backup Output Control **/
#define SUPC_BKOUT			MMIO32(SUPC_BASE + 0x24)
/** SUPC_BKIN Backup Input Control **/
#define SUPC_BKIN			MMIO32(SUPC_BASE + 0x28)

/**@}*/


/** @defgroup supc_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** SUPC_INTENCLR_VCORERDY VDDCORE Ready **/
#define SUPC_INTENCLR_VCORERDY		(1 << 10)
/** SUPC_INTENCLR_APWSRDY Automatic Power Switch Ready **/
#define SUPC_INTENCLR_APWSRDY		(1 << 9)
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

/** SUPC_INTENSET_VCORERDY VDDCORE Ready **/
#define SUPC_INTENSET_VCORERDY		(1 << 10)
/** SUPC_INTENSET_APWSRDY Automatic Power Switch Ready **/
#define SUPC_INTENSET_APWSRDY		(1 << 9)
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

/** SUPC_INTFLAG_VCORERDY VDDCORE Ready **/
#define SUPC_INTFLAG_VCORERDY		(1 << 10)
/** SUPC_INTFLAG_APWSRDY Automatic Power Switch Ready **/
#define SUPC_INTFLAG_APWSRDY		(1 << 9)
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

/** SUPC_STATUS_BBPS Battery Backup Power Switch **/
#define SUPC_STATUS_BBPS		(1 << 11)
/** SUPC_STATUS_VCORERDY VDDCORE Ready **/
#define SUPC_STATUS_VCORERDY		(1 << 10)
/** SUPC_STATUS_APWSRDY Automatic Power Switch Ready **/
#define SUPC_STATUS_APWSRDY		(1 << 9)
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


#define SUPC_BOD33_BKUPLEVEL_SHIFT		24
#define SUPC_BOD33_BKUPLEVEL_MASK		0x3f
/** @defgroup supc_bod33_bkuplevel BKUPLEVEL Threshold Level in backup sleep mode or for VBAT
@{*/
/**@}*/


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

/** SUPC_BOD33_VMON Voltage Monitored in active and standby mode **/
#define SUPC_BOD33_VMON		(1 << 10)
/** SUPC_BOD33_ACTCFG Configuration in Active mode **/
#define SUPC_BOD33_ACTCFG		(1 << 8)
/** SUPC_BOD33_RUNBKUP Configuration in Backup mode **/
#define SUPC_BOD33_RUNBKUP		(1 << 7)
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

/** SUPC_VREG_LPEFF Low Power Efficiency **/
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

/** SUPC_VREF_ONDEMAND On Demand Contrl **/
#define SUPC_VREF_ONDEMAND		(1 << 7)
/** SUPC_VREF_RUNSTDBY Run during Standby **/
#define SUPC_VREF_RUNSTDBY		(1 << 6)
/** SUPC_VREF_VREFOE Voltage Reference Output Enable **/
#define SUPC_VREF_VREFOE		(1 << 2)
/** SUPC_VREF_TSEN Temperature Sensor Output Enable **/
#define SUPC_VREF_TSEN		(1 << 1)

/**@}*/

/** @defgroup supc_bbps BBPS Battery Backup Power Switch
@{*/

/** SUPC_BBPS_PSOKEN Power Supply OK Enable **/
#define SUPC_BBPS_PSOKEN		(1 << 3)
/** SUPC_BBPS_WAKEEN Wake Enable **/
#define SUPC_BBPS_WAKEEN		(1 << 2)

#define SUPC_BBPS_CONF_SHIFT		0
#define SUPC_BBPS_CONF_MASK		0x03
/** @defgroup supc_bbps_conf CONF Battery Backup Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup supc_bkout BKOUT Backup Output Control
@{*/


#define SUPC_BKOUT_RTCTGL_SHIFT		24
#define SUPC_BKOUT_RTCTGL_MASK		0x03
/** @defgroup supc_bkout_rtctgl RTCTGL RTC Toggle Output
@{*/
/**@}*/


#define SUPC_BKOUT_SET_SHIFT		16
#define SUPC_BKOUT_SET_MASK		0x03
/** @defgroup supc_bkout_set SET Set Output
@{*/
/**@}*/


#define SUPC_BKOUT_CLR_SHIFT		8
#define SUPC_BKOUT_CLR_MASK		0x03
/** @defgroup supc_bkout_clr CLR Clear Output
@{*/
/**@}*/


#define SUPC_BKOUT_EN_SHIFT		0
#define SUPC_BKOUT_EN_MASK		0x03
/** @defgroup supc_bkout_en EN Enable Output
@{*/
/**@}*/


/**@}*/

/** @defgroup supc_bkin BKIN Backup Input Control
@{*/


#define SUPC_BKIN_BKIN_SHIFT		0
#define SUPC_BKIN_BKIN_MASK		0xff
/** @defgroup supc_bkin_bkin BKIN Backup Input Value
@{*/
/**@}*/


/**@}*/

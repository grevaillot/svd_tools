#pragma once 

/* --- OPAMP: Operational Amplifier --------------------------------- */

/** @defgroup opamp_registers Operational Amplifier Register
@{*/

/** OPAMP_CTRLA Control A **/
#define OPAMP_CTRLA			MMIO32(OPAMP_BASE + 0x00)
/** OPAMP_STATUS Status **/
#define OPAMP_STATUS			MMIO32(OPAMP_BASE + 0x02)
/** OPAMP_OPAMPCTRL[0] OPAMP n Control **/
#define OPAMP_OPAMPCTRL[0]			MMIO32(OPAMP_BASE + 0x04)
/** OPAMP_OPAMPCTRL[1] OPAMP n Control **/
#define OPAMP_OPAMPCTRL[1]			MMIO32(OPAMP_BASE + 0x08)
/** OPAMP_OPAMPCTRL[2] OPAMP n Control **/
#define OPAMP_OPAMPCTRL[2]			MMIO32(OPAMP_BASE + 0x0c)
/** OPAMP_RESCTRL Resister Control **/
#define OPAMP_RESCTRL			MMIO32(OPAMP_BASE + 0x10)

/**@}*/


/** @defgroup opamp_ctrla CTRLA Control A
@{*/

/** OPAMP_CTRLA_LPMUX Low-Power Mux **/
#define OPAMP_CTRLA_LPMUX		(1 << 7)
/** OPAMP_CTRLA_ENABLE Enable **/
#define OPAMP_CTRLA_ENABLE		(1 << 1)
/** OPAMP_CTRLA_SWRST Software Reset **/
#define OPAMP_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup opamp_status STATUS Status
@{*/

/** OPAMP_STATUS_READY2 OPAMP 2 Ready **/
#define OPAMP_STATUS_READY2		(1 << 2)
/** OPAMP_STATUS_READY1 OPAMP 1 Ready **/
#define OPAMP_STATUS_READY1		(1 << 1)
/** OPAMP_STATUS_READY0 OPAMP 0 Ready **/
#define OPAMP_STATUS_READY0		(1 << 0)

/**@}*/

/** @defgroup opamp_opampctrl[0] OPAMPCTRL[0] OPAMP n Control
@{*/


#define OPAMP_OPAMPCTRL[0]_MUXNEG_SHIFT		20
#define OPAMP_OPAMPCTRL[0]_MUXNEG_MASK		0x0f
/** @defgroup opamp_opampctrl[0]_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[0]_MUXPOS_SHIFT		16
#define OPAMP_OPAMPCTRL[0]_MUXPOS_MASK		0x0f
/** @defgroup opamp_opampctrl[0]_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[0]_POTMUX_SHIFT		13
#define OPAMP_OPAMPCTRL[0]_POTMUX_MASK		0x07
/** @defgroup opamp_opampctrl[0]_potmux POTMUX Potentiometer Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[0]_RES1MUX_SHIFT		10
#define OPAMP_OPAMPCTRL[0]_RES1MUX_MASK		0x07
/** @defgroup opamp_opampctrl[0]_res1mux RES1MUX Resistor 1 Mux
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[0]_RES1EN Resistor 1 Enable **/
#define OPAMP_OPAMPCTRL[0]_RES1EN		(1 << 9)
/** OPAMP_OPAMPCTRL[0]_RES2OUT Resistor ladder To Output **/
#define OPAMP_OPAMPCTRL[0]_RES2OUT		(1 << 8)
/** OPAMP_OPAMPCTRL[0]_ONDEMAND On Demand Control **/
#define OPAMP_OPAMPCTRL[0]_ONDEMAND		(1 << 7)
/** OPAMP_OPAMPCTRL[0]_RUNSTDBY Run in Standby **/
#define OPAMP_OPAMPCTRL[0]_RUNSTDBY		(1 << 6)
/** OPAMP_OPAMPCTRL[0]_RES2VCC Resistor ladder To VCC **/
#define OPAMP_OPAMPCTRL[0]_RES2VCC		(1 << 5)

#define OPAMP_OPAMPCTRL[0]_BIAS_SHIFT		3
#define OPAMP_OPAMPCTRL[0]_BIAS_MASK		0x03
/** @defgroup opamp_opampctrl[0]_bias BIAS Bias Selection
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[0]_ANAOUT Analog Output **/
#define OPAMP_OPAMPCTRL[0]_ANAOUT		(1 << 2)
/** OPAMP_OPAMPCTRL[0]_ENABLE Operational Amplifier Enable **/
#define OPAMP_OPAMPCTRL[0]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup opamp_opampctrl[1] OPAMPCTRL[1] OPAMP n Control
@{*/


#define OPAMP_OPAMPCTRL[1]_MUXNEG_SHIFT		20
#define OPAMP_OPAMPCTRL[1]_MUXNEG_MASK		0x0f
/** @defgroup opamp_opampctrl[1]_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[1]_MUXPOS_SHIFT		16
#define OPAMP_OPAMPCTRL[1]_MUXPOS_MASK		0x0f
/** @defgroup opamp_opampctrl[1]_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[1]_POTMUX_SHIFT		13
#define OPAMP_OPAMPCTRL[1]_POTMUX_MASK		0x07
/** @defgroup opamp_opampctrl[1]_potmux POTMUX Potentiometer Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[1]_RES1MUX_SHIFT		10
#define OPAMP_OPAMPCTRL[1]_RES1MUX_MASK		0x07
/** @defgroup opamp_opampctrl[1]_res1mux RES1MUX Resistor 1 Mux
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[1]_RES1EN Resistor 1 Enable **/
#define OPAMP_OPAMPCTRL[1]_RES1EN		(1 << 9)
/** OPAMP_OPAMPCTRL[1]_RES2OUT Resistor ladder To Output **/
#define OPAMP_OPAMPCTRL[1]_RES2OUT		(1 << 8)
/** OPAMP_OPAMPCTRL[1]_ONDEMAND On Demand Control **/
#define OPAMP_OPAMPCTRL[1]_ONDEMAND		(1 << 7)
/** OPAMP_OPAMPCTRL[1]_RUNSTDBY Run in Standby **/
#define OPAMP_OPAMPCTRL[1]_RUNSTDBY		(1 << 6)
/** OPAMP_OPAMPCTRL[1]_RES2VCC Resistor ladder To VCC **/
#define OPAMP_OPAMPCTRL[1]_RES2VCC		(1 << 5)

#define OPAMP_OPAMPCTRL[1]_BIAS_SHIFT		3
#define OPAMP_OPAMPCTRL[1]_BIAS_MASK		0x03
/** @defgroup opamp_opampctrl[1]_bias BIAS Bias Selection
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[1]_ANAOUT Analog Output **/
#define OPAMP_OPAMPCTRL[1]_ANAOUT		(1 << 2)
/** OPAMP_OPAMPCTRL[1]_ENABLE Operational Amplifier Enable **/
#define OPAMP_OPAMPCTRL[1]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup opamp_opampctrl[2] OPAMPCTRL[2] OPAMP n Control
@{*/


#define OPAMP_OPAMPCTRL[2]_MUXNEG_SHIFT		20
#define OPAMP_OPAMPCTRL[2]_MUXNEG_MASK		0x0f
/** @defgroup opamp_opampctrl[2]_muxneg MUXNEG Negative Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[2]_MUXPOS_SHIFT		16
#define OPAMP_OPAMPCTRL[2]_MUXPOS_MASK		0x0f
/** @defgroup opamp_opampctrl[2]_muxpos MUXPOS Positive Input Mux Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[2]_POTMUX_SHIFT		13
#define OPAMP_OPAMPCTRL[2]_POTMUX_MASK		0x07
/** @defgroup opamp_opampctrl[2]_potmux POTMUX Potentiometer Selection
@{*/
/**@}*/


#define OPAMP_OPAMPCTRL[2]_RES1MUX_SHIFT		10
#define OPAMP_OPAMPCTRL[2]_RES1MUX_MASK		0x07
/** @defgroup opamp_opampctrl[2]_res1mux RES1MUX Resistor 1 Mux
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[2]_RES1EN Resistor 1 Enable **/
#define OPAMP_OPAMPCTRL[2]_RES1EN		(1 << 9)
/** OPAMP_OPAMPCTRL[2]_RES2OUT Resistor ladder To Output **/
#define OPAMP_OPAMPCTRL[2]_RES2OUT		(1 << 8)
/** OPAMP_OPAMPCTRL[2]_ONDEMAND On Demand Control **/
#define OPAMP_OPAMPCTRL[2]_ONDEMAND		(1 << 7)
/** OPAMP_OPAMPCTRL[2]_RUNSTDBY Run in Standby **/
#define OPAMP_OPAMPCTRL[2]_RUNSTDBY		(1 << 6)
/** OPAMP_OPAMPCTRL[2]_RES2VCC Resistor ladder To VCC **/
#define OPAMP_OPAMPCTRL[2]_RES2VCC		(1 << 5)

#define OPAMP_OPAMPCTRL[2]_BIAS_SHIFT		3
#define OPAMP_OPAMPCTRL[2]_BIAS_MASK		0x03
/** @defgroup opamp_opampctrl[2]_bias BIAS Bias Selection
@{*/
/**@}*/

/** OPAMP_OPAMPCTRL[2]_ANAOUT Analog Output **/
#define OPAMP_OPAMPCTRL[2]_ANAOUT		(1 << 2)
/** OPAMP_OPAMPCTRL[2]_ENABLE Operational Amplifier Enable **/
#define OPAMP_OPAMPCTRL[2]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup opamp_resctrl RESCTRL Resister Control
@{*/


#define OPAMP_RESCTRL_REFBUFLEVEL_SHIFT		6
#define OPAMP_RESCTRL_REFBUFLEVEL_MASK		0x03
/** @defgroup opamp_resctrl_refbuflevel REFBUFLEVEL Reference output voltage level select
@{*/
/**@}*/


#define OPAMP_RESCTRL_POTMUX_SHIFT		3
#define OPAMP_RESCTRL_POTMUX_MASK		0x07
/** @defgroup opamp_resctrl_potmux POTMUX Potentiometer Selection
@{*/
/**@}*/

/** OPAMP_RESCTRL_RES1MUX Resistor 1 Mux **/
#define OPAMP_RESCTRL_RES1MUX		(1 << 2)
/** OPAMP_RESCTRL_RES1EN Resistor 1 Enable **/
#define OPAMP_RESCTRL_RES1EN		(1 << 1)
/** OPAMP_RESCTRL_RES2OUT Resistor ladder To Output **/
#define OPAMP_RESCTRL_RES2OUT		(1 << 0)

/**@}*/

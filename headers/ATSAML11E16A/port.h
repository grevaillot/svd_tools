#pragma once 

/* --- PORT: Port Module -------------------------------------------- */

/** @defgroup port_registers Port Module Register
@{*/

/** PORT_GROUP[0]_DIR Data Direction **/
#define PORT_GROUP[0]_DIR			MMIO32(PORT_BASE + 0x00)
/** PORT_GROUP[0]_DIRCLR Data Direction Clear **/
#define PORT_GROUP[0]_DIRCLR			MMIO32(PORT_BASE + 0x04)
/** PORT_GROUP[0]_DIRSET Data Direction Set **/
#define PORT_GROUP[0]_DIRSET			MMIO32(PORT_BASE + 0x08)
/** PORT_GROUP[0]_DIRTGL Data Direction Toggle **/
#define PORT_GROUP[0]_DIRTGL			MMIO32(PORT_BASE + 0x0c)
/** PORT_GROUP[0]_OUT Data Output Value **/
#define PORT_GROUP[0]_OUT			MMIO32(PORT_BASE + 0x10)
/** PORT_GROUP[0]_OUTCLR Data Output Value Clear **/
#define PORT_GROUP[0]_OUTCLR			MMIO32(PORT_BASE + 0x14)
/** PORT_GROUP[0]_OUTSET Data Output Value Set **/
#define PORT_GROUP[0]_OUTSET			MMIO32(PORT_BASE + 0x18)
/** PORT_GROUP[0]_OUTTGL Data Output Value Toggle **/
#define PORT_GROUP[0]_OUTTGL			MMIO32(PORT_BASE + 0x1c)
/** PORT_GROUP[0]_IN Data Input Value **/
#define PORT_GROUP[0]_IN			MMIO32(PORT_BASE + 0x20)
/** PORT_GROUP[0]_CTRL Control **/
#define PORT_GROUP[0]_CTRL			MMIO32(PORT_BASE + 0x24)
/** PORT_GROUP[0]_WRCONFIG Write Configuration **/
#define PORT_GROUP[0]_WRCONFIG			MMIO32(PORT_BASE + 0x28)
/** PORT_GROUP[0]_EVCTRL Event Input Control **/
#define PORT_GROUP[0]_EVCTRL			MMIO32(PORT_BASE + 0x2c)
/** PORT_GROUP[0]_PMUX[%s] Peripheral Multiplexing **/
#define PORT_GROUP[0]_PMUX[%s]			MMIO32(PORT_BASE + 0x30)
/** PORT_GROUP[0]_PINCFG[%s] Pin Configuration **/
#define PORT_GROUP[0]_PINCFG[%s]			MMIO32(PORT_BASE + 0x40)
/** PORT_GROUP[0]_INTENCLR Interrupt Enable Clear **/
#define PORT_GROUP[0]_INTENCLR			MMIO32(PORT_BASE + 0x60)
/** PORT_GROUP[0]_INTENSET Interrupt Enable Set **/
#define PORT_GROUP[0]_INTENSET			MMIO32(PORT_BASE + 0x64)
/** PORT_GROUP[0]_INTFLAG Interrupt Flag Status and Clear **/
#define PORT_GROUP[0]_INTFLAG			MMIO32(PORT_BASE + 0x68)
/** PORT_GROUP[0]_NONSEC Security Attribution **/
#define PORT_GROUP[0]_NONSEC			MMIO32(PORT_BASE + 0x6c)
/** PORT_GROUP[0]_NSCHK Security Attribution Check **/
#define PORT_GROUP[0]_NSCHK			MMIO32(PORT_BASE + 0x70)

/**@}*/


/** @defgroup port_group[0]_dir GROUP[0]DIR Data Direction
@{*/


#define PORT_GROUP[0]_DIR_DIR_SHIFT		0
#define PORT_GROUP[0]_DIR_DIR_MASK		0xffffffff
/** @defgroup port_group[0]_dir_dir DIR Port Data Direction
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_dirclr GROUP[0]DIRCLR Data Direction Clear
@{*/


#define PORT_GROUP[0]_DIRCLR_DIRCLR_SHIFT		0
#define PORT_GROUP[0]_DIRCLR_DIRCLR_MASK		0xffffffff
/** @defgroup port_group[0]_dirclr_dirclr DIRCLR Port Data Direction Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_dirset GROUP[0]DIRSET Data Direction Set
@{*/


#define PORT_GROUP[0]_DIRSET_DIRSET_SHIFT		0
#define PORT_GROUP[0]_DIRSET_DIRSET_MASK		0xffffffff
/** @defgroup port_group[0]_dirset_dirset DIRSET Port Data Direction Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_dirtgl GROUP[0]DIRTGL Data Direction Toggle
@{*/


#define PORT_GROUP[0]_DIRTGL_DIRTGL_SHIFT		0
#define PORT_GROUP[0]_DIRTGL_DIRTGL_MASK		0xffffffff
/** @defgroup port_group[0]_dirtgl_dirtgl DIRTGL Port Data Direction Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_out GROUP[0]OUT Data Output Value
@{*/


#define PORT_GROUP[0]_OUT_OUT_SHIFT		0
#define PORT_GROUP[0]_OUT_OUT_MASK		0xffffffff
/** @defgroup port_group[0]_out_out OUT PORT Data Output Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_outclr GROUP[0]OUTCLR Data Output Value Clear
@{*/


#define PORT_GROUP[0]_OUTCLR_OUTCLR_SHIFT		0
#define PORT_GROUP[0]_OUTCLR_OUTCLR_MASK		0xffffffff
/** @defgroup port_group[0]_outclr_outclr OUTCLR PORT Data Output Value Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_outset GROUP[0]OUTSET Data Output Value Set
@{*/


#define PORT_GROUP[0]_OUTSET_OUTSET_SHIFT		0
#define PORT_GROUP[0]_OUTSET_OUTSET_MASK		0xffffffff
/** @defgroup port_group[0]_outset_outset OUTSET PORT Data Output Value Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_outtgl GROUP[0]OUTTGL Data Output Value Toggle
@{*/


#define PORT_GROUP[0]_OUTTGL_OUTTGL_SHIFT		0
#define PORT_GROUP[0]_OUTTGL_OUTTGL_MASK		0xffffffff
/** @defgroup port_group[0]_outtgl_outtgl OUTTGL PORT Data Output Value Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_in GROUP[0]IN Data Input Value
@{*/


#define PORT_GROUP[0]_IN_IN_SHIFT		0
#define PORT_GROUP[0]_IN_IN_MASK		0xffffffff
/** @defgroup port_group[0]_in_in IN PORT Data Input Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_ctrl GROUP[0]CTRL Control
@{*/


#define PORT_GROUP[0]_CTRL_SAMPLING_SHIFT		0
#define PORT_GROUP[0]_CTRL_SAMPLING_MASK		0xffffffff
/** @defgroup port_group[0]_ctrl_sampling SAMPLING Input Sampling Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_wrconfig GROUP[0]WRCONFIG Write Configuration
@{*/

/** PORT_GROUP[0]_WRCONFIG_HWSEL Half-Word Select **/
#define PORT_GROUP[0]_WRCONFIG_HWSEL		(1 << 31)
/** PORT_GROUP[0]_WRCONFIG_WRPINCFG Write PINCFG **/
#define PORT_GROUP[0]_WRCONFIG_WRPINCFG		(1 << 30)
/** PORT_GROUP[0]_WRCONFIG_WRPMUX Write PMUX **/
#define PORT_GROUP[0]_WRCONFIG_WRPMUX		(1 << 28)

#define PORT_GROUP[0]_WRCONFIG_PMUX_SHIFT		24
#define PORT_GROUP[0]_WRCONFIG_PMUX_MASK		0x0f
/** @defgroup port_group[0]_wrconfig_pmux PMUX Peripheral Multiplexing
@{*/
/**@}*/

/** PORT_GROUP[0]_WRCONFIG_DRVSTR Output Driver Strength Selection **/
#define PORT_GROUP[0]_WRCONFIG_DRVSTR		(1 << 22)
/** PORT_GROUP[0]_WRCONFIG_PULLEN Pull Enable **/
#define PORT_GROUP[0]_WRCONFIG_PULLEN		(1 << 18)
/** PORT_GROUP[0]_WRCONFIG_INEN Input Enable **/
#define PORT_GROUP[0]_WRCONFIG_INEN		(1 << 17)
/** PORT_GROUP[0]_WRCONFIG_PMUXEN Peripheral Multiplexer Enable **/
#define PORT_GROUP[0]_WRCONFIG_PMUXEN		(1 << 16)

#define PORT_GROUP[0]_WRCONFIG_PINMASK_SHIFT		0
#define PORT_GROUP[0]_WRCONFIG_PINMASK_MASK		0xffff
/** @defgroup port_group[0]_wrconfig_pinmask PINMASK Pin Mask for Multiple Pin Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_evctrl GROUP[0]EVCTRL Event Input Control
@{*/

/** PORT_GROUP[0]_EVCTRL_PORTEI3 PORT Event Input Enable 3 **/
#define PORT_GROUP[0]_EVCTRL_PORTEI3		(1 << 31)

#define PORT_GROUP[0]_EVCTRL_EVACT3_SHIFT		29
#define PORT_GROUP[0]_EVCTRL_EVACT3_MASK		0x03
/** @defgroup port_group[0]_evctrl_evact3 EVACT3 PORT Event Action 3
@{*/
/**@}*/


#define PORT_GROUP[0]_EVCTRL_PID3_SHIFT		24
#define PORT_GROUP[0]_EVCTRL_PID3_MASK		0x1f
/** @defgroup port_group[0]_evctrl_pid3 PID3 PORT Event Pin Identifier 3
@{*/
/**@}*/

/** PORT_GROUP[0]_EVCTRL_PORTEI2 PORT Event Input Enable 2 **/
#define PORT_GROUP[0]_EVCTRL_PORTEI2		(1 << 23)

#define PORT_GROUP[0]_EVCTRL_EVACT2_SHIFT		21
#define PORT_GROUP[0]_EVCTRL_EVACT2_MASK		0x03
/** @defgroup port_group[0]_evctrl_evact2 EVACT2 PORT Event Action 2
@{*/
/**@}*/


#define PORT_GROUP[0]_EVCTRL_PID2_SHIFT		16
#define PORT_GROUP[0]_EVCTRL_PID2_MASK		0x1f
/** @defgroup port_group[0]_evctrl_pid2 PID2 PORT Event Pin Identifier 2
@{*/
/**@}*/

/** PORT_GROUP[0]_EVCTRL_PORTEI1 PORT Event Input Enable 1 **/
#define PORT_GROUP[0]_EVCTRL_PORTEI1		(1 << 15)

#define PORT_GROUP[0]_EVCTRL_EVACT1_SHIFT		13
#define PORT_GROUP[0]_EVCTRL_EVACT1_MASK		0x03
/** @defgroup port_group[0]_evctrl_evact1 EVACT1 PORT Event Action 1
@{*/
/**@}*/


#define PORT_GROUP[0]_EVCTRL_PID1_SHIFT		8
#define PORT_GROUP[0]_EVCTRL_PID1_MASK		0x1f
/** @defgroup port_group[0]_evctrl_pid1 PID1 PORT Event Pin Identifier 1
@{*/
/**@}*/

/** PORT_GROUP[0]_EVCTRL_PORTEI0 PORT Event Input Enable 0 **/
#define PORT_GROUP[0]_EVCTRL_PORTEI0		(1 << 7)

#define PORT_GROUP[0]_EVCTRL_EVACT0_SHIFT		5
#define PORT_GROUP[0]_EVCTRL_EVACT0_MASK		0x03
/** @defgroup port_group[0]_evctrl_evact0 EVACT0 PORT Event Action 0
@{*/
/**@}*/


#define PORT_GROUP[0]_EVCTRL_PID0_SHIFT		0
#define PORT_GROUP[0]_EVCTRL_PID0_MASK		0x1f
/** @defgroup port_group[0]_evctrl_pid0 PID0 PORT Event Pin Identifier 0
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_pmux[%s] GROUP[0]PMUX[%s] Peripheral Multiplexing
@{*/


#define PORT_GROUP[0]_PMUX[%s]_PMUXO_SHIFT		4
#define PORT_GROUP[0]_PMUX[%s]_PMUXO_MASK		0x0f
/** @defgroup port_group[0]_pmux[%s]_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_GROUP[0]_PMUX[%s]_PMUXE_SHIFT		0
#define PORT_GROUP[0]_PMUX[%s]_PMUXE_MASK		0x0f
/** @defgroup port_group[0]_pmux[%s]_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_pincfg[%s] GROUP[0]PINCFG[%s] Pin Configuration
@{*/

/** PORT_GROUP[0]_PINCFG[%s]_DRVSTR Output Driver Strength Selection **/
#define PORT_GROUP[0]_PINCFG[%s]_DRVSTR		(1 << 6)
/** PORT_GROUP[0]_PINCFG[%s]_PULLEN Pull Enable **/
#define PORT_GROUP[0]_PINCFG[%s]_PULLEN		(1 << 2)
/** PORT_GROUP[0]_PINCFG[%s]_INEN Input Enable **/
#define PORT_GROUP[0]_PINCFG[%s]_INEN		(1 << 1)
/** PORT_GROUP[0]_PINCFG[%s]_PMUXEN Peripheral Multiplexer Enable **/
#define PORT_GROUP[0]_PINCFG[%s]_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_group[0]_intenclr GROUP[0]INTENCLR Interrupt Enable Clear
@{*/

/** PORT_GROUP[0]_INTENCLR_NSCHK Non-Secure Check Interrupt Enable **/
#define PORT_GROUP[0]_INTENCLR_NSCHK		(1 << 0)

/**@}*/

/** @defgroup port_group[0]_intenset GROUP[0]INTENSET Interrupt Enable Set
@{*/

/** PORT_GROUP[0]_INTENSET_NSCHK Non-Secure Check Interrupt Enable **/
#define PORT_GROUP[0]_INTENSET_NSCHK		(1 << 0)

/**@}*/

/** @defgroup port_group[0]_intflag GROUP[0]INTFLAG Interrupt Flag Status and Clear
@{*/

/** PORT_GROUP[0]_INTFLAG_NSCHK Non-Secure Check **/
#define PORT_GROUP[0]_INTFLAG_NSCHK		(1 << 0)

/**@}*/

/** @defgroup port_group[0]_nonsec GROUP[0]NONSEC Security Attribution
@{*/


#define PORT_GROUP[0]_NONSEC_NONSEC_SHIFT		0
#define PORT_GROUP[0]_NONSEC_NONSEC_MASK		0xffffffff
/** @defgroup port_group[0]_nonsec_nonsec NONSEC Port Security Attribution
@{*/
/**@}*/


/**@}*/

/** @defgroup port_group[0]_nschk GROUP[0]NSCHK Security Attribution Check
@{*/


#define PORT_GROUP[0]_NSCHK_NSCHK_SHIFT		0
#define PORT_GROUP[0]_NSCHK_NSCHK_MASK		0xffffffff
/** @defgroup port_group[0]_nschk_nschk NSCHK Port Security Attribution Check
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- EIC: External Interrupt Controller --------------------------- */

/** @defgroup eic_registers External Interrupt Controller Register
@{*/

/** EIC_CTRLA Control A **/
#define EIC_CTRLA			MMIO32(EIC_BASE + 0x00)
/** EIC_NMICTRL Non-Maskable Interrupt Control **/
#define EIC_NMICTRL			MMIO32(EIC_BASE + 0x01)
/** EIC_NMIFLAG Non-Maskable Interrupt Flag Status and Clear **/
#define EIC_NMIFLAG			MMIO32(EIC_BASE + 0x02)
/** EIC_SYNCBUSY Synchronization Busy **/
#define EIC_SYNCBUSY			MMIO32(EIC_BASE + 0x04)
/** EIC_EVCTRL Event Control **/
#define EIC_EVCTRL			MMIO32(EIC_BASE + 0x08)
/** EIC_INTENCLR Interrupt Enable Clear **/
#define EIC_INTENCLR			MMIO32(EIC_BASE + 0x0c)
/** EIC_INTENSET Interrupt Enable Set **/
#define EIC_INTENSET			MMIO32(EIC_BASE + 0x10)
/** EIC_INTFLAG Interrupt Flag Status and Clear **/
#define EIC_INTFLAG			MMIO32(EIC_BASE + 0x14)
/** EIC_ASYNCH External Interrupt Asynchronous Mode **/
#define EIC_ASYNCH			MMIO32(EIC_BASE + 0x18)
/** EIC_CONFIG[0] External Interrupt Sense Configuration **/
#define EIC_CONFIG[0]			MMIO32(EIC_BASE + 0x1c)
/** EIC_DEBOUNCEN Debouncer Enable **/
#define EIC_DEBOUNCEN			MMIO32(EIC_BASE + 0x30)
/** EIC_DPRESCALER Debouncer Prescaler **/
#define EIC_DPRESCALER			MMIO32(EIC_BASE + 0x34)
/** EIC_PINSTATE Pin State **/
#define EIC_PINSTATE			MMIO32(EIC_BASE + 0x38)
/** EIC_NSCHK Non-secure Interrupt Check Enable **/
#define EIC_NSCHK			MMIO32(EIC_BASE + 0x3c)
/** EIC_NONSEC Non-secure Interrupt **/
#define EIC_NONSEC			MMIO32(EIC_BASE + 0x40)

/**@}*/


/** @defgroup eic_ctrla CTRLA Control A
@{*/

/** EIC_CTRLA_CKSEL Clock Selection **/
#define EIC_CTRLA_CKSEL		(1 << 4)
/** EIC_CTRLA_ENABLE Enable **/
#define EIC_CTRLA_ENABLE		(1 << 1)
/** EIC_CTRLA_SWRST Software Reset **/
#define EIC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup eic_nmictrl NMICTRL Non-Maskable Interrupt Control
@{*/

/** EIC_NMICTRL_NMIASYNCH Asynchronous Edge Detection Mode **/
#define EIC_NMICTRL_NMIASYNCH		(1 << 4)
/** EIC_NMICTRL_NMIFILTEN Non-Maskable Interrupt Filter Enable **/
#define EIC_NMICTRL_NMIFILTEN		(1 << 3)

#define EIC_NMICTRL_NMISENSE_SHIFT		0
#define EIC_NMICTRL_NMISENSE_MASK		0x07
/** @defgroup eic_nmictrl_nmisense NMISENSE Non-Maskable Interrupt Sense Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_nmiflag NMIFLAG Non-Maskable Interrupt Flag Status and Clear
@{*/

/** EIC_NMIFLAG_NMI Non-Maskable Interrupt **/
#define EIC_NMIFLAG_NMI		(1 << 0)

/**@}*/

/** @defgroup eic_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** EIC_SYNCBUSY_ENABLE Enable Synchronization Busy Status **/
#define EIC_SYNCBUSY_ENABLE		(1 << 1)
/** EIC_SYNCBUSY_SWRST Software Reset Synchronization Busy Status **/
#define EIC_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup eic_evctrl EVCTRL Event Control
@{*/


#define EIC_EVCTRL_EXTINTEO_SHIFT		0
#define EIC_EVCTRL_EXTINTEO_MASK		0xff
/** @defgroup eic_evctrl_extinteo EXTINTEO External Interrupt Event Output Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** EIC_INTENCLR_NSCHK Non-secure Check Interrupt Enable **/
#define EIC_INTENCLR_NSCHK		(1 << 31)

#define EIC_INTENCLR_EXTINT_SHIFT		0
#define EIC_INTENCLR_EXTINT_MASK		0xff
/** @defgroup eic_intenclr_extint EXTINT External Interrupt Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intenset INTENSET Interrupt Enable Set
@{*/

/** EIC_INTENSET_NSCHK Non-secure Check Interrupt Enable **/
#define EIC_INTENSET_NSCHK		(1 << 31)

#define EIC_INTENSET_EXTINT_SHIFT		0
#define EIC_INTENSET_EXTINT_MASK		0xff
/** @defgroup eic_intenset_extint EXTINT External Interrupt Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** EIC_INTFLAG_NSCHK Non-secure Check Interrupt **/
#define EIC_INTFLAG_NSCHK		(1 << 31)

#define EIC_INTFLAG_EXTINT_SHIFT		0
#define EIC_INTFLAG_EXTINT_MASK		0xff
/** @defgroup eic_intflag_extint EXTINT External Interrupt
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_asynch ASYNCH External Interrupt Asynchronous Mode
@{*/


#define EIC_ASYNCH_ASYNCH_SHIFT		0
#define EIC_ASYNCH_ASYNCH_MASK		0xff
/** @defgroup eic_asynch_asynch ASYNCH Asynchronous Edge Detection Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_config[0] CONFIG[0] External Interrupt Sense Configuration
@{*/

/** EIC_CONFIG[0]_FILTEN7 Filter Enable 7 **/
#define EIC_CONFIG[0]_FILTEN7		(1 << 31)

#define EIC_CONFIG[0]_SENSE7_SHIFT		28
#define EIC_CONFIG[0]_SENSE7_MASK		0x07
/** @defgroup eic_config[0]_sense7 SENSE7 Input Sense Configuration 7
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN6 Filter Enable 6 **/
#define EIC_CONFIG[0]_FILTEN6		(1 << 27)

#define EIC_CONFIG[0]_SENSE6_SHIFT		24
#define EIC_CONFIG[0]_SENSE6_MASK		0x07
/** @defgroup eic_config[0]_sense6 SENSE6 Input Sense Configuration 6
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN5 Filter Enable 5 **/
#define EIC_CONFIG[0]_FILTEN5		(1 << 23)

#define EIC_CONFIG[0]_SENSE5_SHIFT		20
#define EIC_CONFIG[0]_SENSE5_MASK		0x07
/** @defgroup eic_config[0]_sense5 SENSE5 Input Sense Configuration 5
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN4 Filter Enable 4 **/
#define EIC_CONFIG[0]_FILTEN4		(1 << 19)

#define EIC_CONFIG[0]_SENSE4_SHIFT		16
#define EIC_CONFIG[0]_SENSE4_MASK		0x07
/** @defgroup eic_config[0]_sense4 SENSE4 Input Sense Configuration 4
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN3 Filter Enable 3 **/
#define EIC_CONFIG[0]_FILTEN3		(1 << 15)

#define EIC_CONFIG[0]_SENSE3_SHIFT		12
#define EIC_CONFIG[0]_SENSE3_MASK		0x07
/** @defgroup eic_config[0]_sense3 SENSE3 Input Sense Configuration 3
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN2 Filter Enable 2 **/
#define EIC_CONFIG[0]_FILTEN2		(1 << 11)

#define EIC_CONFIG[0]_SENSE2_SHIFT		8
#define EIC_CONFIG[0]_SENSE2_MASK		0x07
/** @defgroup eic_config[0]_sense2 SENSE2 Input Sense Configuration 2
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN1 Filter Enable 1 **/
#define EIC_CONFIG[0]_FILTEN1		(1 << 7)

#define EIC_CONFIG[0]_SENSE1_SHIFT		4
#define EIC_CONFIG[0]_SENSE1_MASK		0x07
/** @defgroup eic_config[0]_sense1 SENSE1 Input Sense Configuration 1
@{*/
/**@}*/

/** EIC_CONFIG[0]_FILTEN0 Filter Enable 0 **/
#define EIC_CONFIG[0]_FILTEN0		(1 << 3)

#define EIC_CONFIG[0]_SENSE0_SHIFT		0
#define EIC_CONFIG[0]_SENSE0_MASK		0x07
/** @defgroup eic_config[0]_sense0 SENSE0 Input Sense Configuration 0
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_debouncen DEBOUNCEN Debouncer Enable
@{*/


#define EIC_DEBOUNCEN_DEBOUNCEN_SHIFT		0
#define EIC_DEBOUNCEN_DEBOUNCEN_MASK		0xff
/** @defgroup eic_debouncen_debouncen DEBOUNCEN Debouncer Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_dprescaler DPRESCALER Debouncer Prescaler
@{*/

/** EIC_DPRESCALER_TICKON Pin Sampler frequency selection **/
#define EIC_DPRESCALER_TICKON		(1 << 16)
/** EIC_DPRESCALER_STATES0 Debouncer number of states **/
#define EIC_DPRESCALER_STATES0		(1 << 3)

#define EIC_DPRESCALER_PRESCALER0_SHIFT		0
#define EIC_DPRESCALER_PRESCALER0_MASK		0x07
/** @defgroup eic_dprescaler_prescaler0 PRESCALER0 Debouncer Prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_pinstate PINSTATE Pin State
@{*/


#define EIC_PINSTATE_PINSTATE_SHIFT		0
#define EIC_PINSTATE_PINSTATE_MASK		0xff
/** @defgroup eic_pinstate_pinstate PINSTATE Pin State
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_nschk NSCHK Non-secure Interrupt Check Enable
@{*/

/** EIC_NSCHK_NMI Non-Maskable External Interrupt Nonsecure Check Enable **/
#define EIC_NSCHK_NMI		(1 << 31)

#define EIC_NSCHK_EXTINT_SHIFT		0
#define EIC_NSCHK_EXTINT_MASK		0xff
/** @defgroup eic_nschk_extint EXTINT External Interrupt Nonsecure Check Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_nonsec NONSEC Non-secure Interrupt
@{*/

/** EIC_NONSEC_NMI Non-Maskable Interrupt Nonsecure Enable **/
#define EIC_NONSEC_NMI		(1 << 31)

#define EIC_NONSEC_EXTINT_SHIFT		0
#define EIC_NONSEC_EXTINT_MASK		0xff
/** @defgroup eic_nonsec_extint EXTINT External Interrupt Nonsecure Enable
@{*/
/**@}*/


/**@}*/

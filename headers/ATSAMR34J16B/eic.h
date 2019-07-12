#pragma once 

/* --- EIC: External Interrupt Controller --------------------------- */

/** @defgroup eic_registers External Interrupt Controller Register
@{*/

/** EIC_CTRLA Control **/
#define EIC_CTRLA			MMIO32(EIC_BASE + 0x00)
/** EIC_NMICTRL NMI Control **/
#define EIC_NMICTRL			MMIO32(EIC_BASE + 0x01)
/** EIC_NMIFLAG NMI Interrupt Flag **/
#define EIC_NMIFLAG			MMIO32(EIC_BASE + 0x02)
/** EIC_SYNCBUSY Syncbusy register **/
#define EIC_SYNCBUSY			MMIO32(EIC_BASE + 0x04)
/** EIC_EVCTRL Event Control **/
#define EIC_EVCTRL			MMIO32(EIC_BASE + 0x08)
/** EIC_INTENCLR Interrupt Enable Clear **/
#define EIC_INTENCLR			MMIO32(EIC_BASE + 0x0c)
/** EIC_INTENSET Interrupt Enable Set **/
#define EIC_INTENSET			MMIO32(EIC_BASE + 0x10)
/** EIC_INTFLAG Interrupt Flag Status and Clear **/
#define EIC_INTFLAG			MMIO32(EIC_BASE + 0x14)
/** EIC_ASYNCH EIC Asynchronous edge Detection Enable **/
#define EIC_ASYNCH			MMIO32(EIC_BASE + 0x18)
/** EIC_CONFIG0 Configuration n **/
#define EIC_CONFIG0			MMIO32(EIC_BASE + 0x1c)
/** EIC_CONFIG1 Configuration n **/
#define EIC_CONFIG1			MMIO32(EIC_BASE + 0x20)

/**@}*/


/** @defgroup eic_ctrla CTRLA Control
@{*/

/** EIC_CTRLA_CKSEL Clock Selection **/
#define EIC_CTRLA_CKSEL		(1 << 4)
/** EIC_CTRLA_ENABLE Enable **/
#define EIC_CTRLA_ENABLE		(1 << 1)
/** EIC_CTRLA_SWRST Software Reset **/
#define EIC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup eic_nmictrl NMICTRL NMI Control
@{*/

/** EIC_NMICTRL_NMIASYNCH NMI Asynchronous edge Detection Enable **/
#define EIC_NMICTRL_NMIASYNCH		(1 << 4)
/** EIC_NMICTRL_NMIFILTEN NMI Filter Enable **/
#define EIC_NMICTRL_NMIFILTEN		(1 << 3)

#define EIC_NMICTRL_NMISENSE_SHIFT		0
#define EIC_NMICTRL_NMISENSE_MASK		0x07
/** @defgroup eic_nmictrl_nmisense NMISENSE NMI Input Sense Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_nmiflag NMIFLAG NMI Interrupt Flag
@{*/

/** EIC_NMIFLAG_NMI NMI Interrupt Flag **/
#define EIC_NMIFLAG_NMI		(1 << 0)

/**@}*/

/** @defgroup eic_syncbusy SYNCBUSY Syncbusy register
@{*/

/** EIC_SYNCBUSY_ENABLE Enable synchronisation **/
#define EIC_SYNCBUSY_ENABLE		(1 << 1)
/** EIC_SYNCBUSY_SWRST Software reset synchronisation **/
#define EIC_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup eic_evctrl EVCTRL Event Control
@{*/


#define EIC_EVCTRL_EXTINTEO_SHIFT		0
#define EIC_EVCTRL_EXTINTEO_MASK		0xffff
/** @defgroup eic_evctrl_extinteo EXTINTEO External Interrupt Event Output Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intenclr INTENCLR Interrupt Enable Clear
@{*/


#define EIC_INTENCLR_EXTINT_SHIFT		0
#define EIC_INTENCLR_EXTINT_MASK		0xffff
/** @defgroup eic_intenclr_extint EXTINT External Interrupt Disable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intenset INTENSET Interrupt Enable Set
@{*/


#define EIC_INTENSET_EXTINT_SHIFT		0
#define EIC_INTENSET_EXTINT_MASK		0xffff
/** @defgroup eic_intenset_extint EXTINT External Interrupt Disable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_intflag INTFLAG Interrupt Flag Status and Clear
@{*/


#define EIC_INTFLAG_EXTINT_SHIFT		0
#define EIC_INTFLAG_EXTINT_MASK		0xffff
/** @defgroup eic_intflag_extint EXTINT External Interrupt Flag
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_asynch ASYNCH EIC Asynchronous edge Detection Enable
@{*/


#define EIC_ASYNCH_ASYNCH_SHIFT		0
#define EIC_ASYNCH_ASYNCH_MASK		0xffff
/** @defgroup eic_asynch_asynch ASYNCH EIC Asynchronous edge Detection Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_config0 CONFIG0 Configuration n
@{*/

/** EIC_CONFIG0_FILTEN7 Filter Enable 7 **/
#define EIC_CONFIG0_FILTEN7		(1 << 31)

#define EIC_CONFIG0_SENSE7_SHIFT		28
#define EIC_CONFIG0_SENSE7_MASK		0x07
/** @defgroup eic_config0_sense7 SENSE7 Input Sense Configuration 7
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN6 Filter Enable 6 **/
#define EIC_CONFIG0_FILTEN6		(1 << 27)

#define EIC_CONFIG0_SENSE6_SHIFT		24
#define EIC_CONFIG0_SENSE6_MASK		0x07
/** @defgroup eic_config0_sense6 SENSE6 Input Sense Configuration 6
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN5 Filter Enable 5 **/
#define EIC_CONFIG0_FILTEN5		(1 << 23)

#define EIC_CONFIG0_SENSE5_SHIFT		20
#define EIC_CONFIG0_SENSE5_MASK		0x07
/** @defgroup eic_config0_sense5 SENSE5 Input Sense Configuration 5
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN4 Filter Enable 4 **/
#define EIC_CONFIG0_FILTEN4		(1 << 19)

#define EIC_CONFIG0_SENSE4_SHIFT		16
#define EIC_CONFIG0_SENSE4_MASK		0x07
/** @defgroup eic_config0_sense4 SENSE4 Input Sense Configuration 4
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN3 Filter Enable 3 **/
#define EIC_CONFIG0_FILTEN3		(1 << 15)

#define EIC_CONFIG0_SENSE3_SHIFT		12
#define EIC_CONFIG0_SENSE3_MASK		0x07
/** @defgroup eic_config0_sense3 SENSE3 Input Sense Configuration 3
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN2 Filter Enable 2 **/
#define EIC_CONFIG0_FILTEN2		(1 << 11)

#define EIC_CONFIG0_SENSE2_SHIFT		8
#define EIC_CONFIG0_SENSE2_MASK		0x07
/** @defgroup eic_config0_sense2 SENSE2 Input Sense Configuration 2
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN1 Filter Enable 1 **/
#define EIC_CONFIG0_FILTEN1		(1 << 7)

#define EIC_CONFIG0_SENSE1_SHIFT		4
#define EIC_CONFIG0_SENSE1_MASK		0x07
/** @defgroup eic_config0_sense1 SENSE1 Input Sense Configuration 1
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN0 Filter Enable 0 **/
#define EIC_CONFIG0_FILTEN0		(1 << 3)

#define EIC_CONFIG0_SENSE0_SHIFT		0
#define EIC_CONFIG0_SENSE0_MASK		0x07
/** @defgroup eic_config0_sense0 SENSE0 Input Sense Configuration 0
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_config1 CONFIG1 Configuration n
@{*/

/** EIC_CONFIG1_FILTEN7 Filter Enable 7 **/
#define EIC_CONFIG1_FILTEN7		(1 << 31)

#define EIC_CONFIG1_SENSE7_SHIFT		28
#define EIC_CONFIG1_SENSE7_MASK		0x07
/** @defgroup eic_config1_sense7 SENSE7 Input Sense Configuration 7
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN6 Filter Enable 6 **/
#define EIC_CONFIG1_FILTEN6		(1 << 27)

#define EIC_CONFIG1_SENSE6_SHIFT		24
#define EIC_CONFIG1_SENSE6_MASK		0x07
/** @defgroup eic_config1_sense6 SENSE6 Input Sense Configuration 6
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN5 Filter Enable 5 **/
#define EIC_CONFIG1_FILTEN5		(1 << 23)

#define EIC_CONFIG1_SENSE5_SHIFT		20
#define EIC_CONFIG1_SENSE5_MASK		0x07
/** @defgroup eic_config1_sense5 SENSE5 Input Sense Configuration 5
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN4 Filter Enable 4 **/
#define EIC_CONFIG1_FILTEN4		(1 << 19)

#define EIC_CONFIG1_SENSE4_SHIFT		16
#define EIC_CONFIG1_SENSE4_MASK		0x07
/** @defgroup eic_config1_sense4 SENSE4 Input Sense Configuration 4
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN3 Filter Enable 3 **/
#define EIC_CONFIG1_FILTEN3		(1 << 15)

#define EIC_CONFIG1_SENSE3_SHIFT		12
#define EIC_CONFIG1_SENSE3_MASK		0x07
/** @defgroup eic_config1_sense3 SENSE3 Input Sense Configuration 3
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN2 Filter Enable 2 **/
#define EIC_CONFIG1_FILTEN2		(1 << 11)

#define EIC_CONFIG1_SENSE2_SHIFT		8
#define EIC_CONFIG1_SENSE2_MASK		0x07
/** @defgroup eic_config1_sense2 SENSE2 Input Sense Configuration 2
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN1 Filter Enable 1 **/
#define EIC_CONFIG1_FILTEN1		(1 << 7)

#define EIC_CONFIG1_SENSE1_SHIFT		4
#define EIC_CONFIG1_SENSE1_MASK		0x07
/** @defgroup eic_config1_sense1 SENSE1 Input Sense Configuration 1
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN0 Filter Enable 0 **/
#define EIC_CONFIG1_FILTEN0		(1 << 3)

#define EIC_CONFIG1_SENSE0_SHIFT		0
#define EIC_CONFIG1_SENSE0_MASK		0x07
/** @defgroup eic_config1_sense0 SENSE0 Input Sense Configuration 0
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- EIC: External Interrupt Controller --------------------------- */

/** @defgroup eic_registers External Interrupt Controller Register
@{*/

/** EIC_CTRL Control **/
#define EIC_CTRL			MMIO32(EIC_BASE + 0x00)
/** EIC_STATUS Status **/
#define EIC_STATUS			MMIO32(EIC_BASE + 0x01)
/** EIC_NMICTRL Non-Maskable Interrupt Control **/
#define EIC_NMICTRL			MMIO32(EIC_BASE + 0x02)
/** EIC_NMIFLAG Non-Maskable Interrupt Flag Status and Clear **/
#define EIC_NMIFLAG			MMIO32(EIC_BASE + 0x03)
/** EIC_EVCTRL Event Control **/
#define EIC_EVCTRL			MMIO32(EIC_BASE + 0x04)
/** EIC_INTENCLR Interrupt Enable Clear **/
#define EIC_INTENCLR			MMIO32(EIC_BASE + 0x08)
/** EIC_INTENSET Interrupt Enable Set **/
#define EIC_INTENSET			MMIO32(EIC_BASE + 0x0c)
/** EIC_INTFLAG Interrupt Flag Status and Clear **/
#define EIC_INTFLAG			MMIO32(EIC_BASE + 0x10)
/** EIC_WAKEUP Wake-Up Enable **/
#define EIC_WAKEUP			MMIO32(EIC_BASE + 0x14)
/** EIC_CONFIG0 Configuration n **/
#define EIC_CONFIG0			MMIO32(EIC_BASE + 0x18)
/** EIC_CONFIG1 Configuration n **/
#define EIC_CONFIG1			MMIO32(EIC_BASE + 0x1c)

/**@}*/


/** @defgroup eic_ctrl CTRL Control
@{*/

/** EIC_CTRL_ENABLE Enable **/
#define EIC_CTRL_ENABLE		(1 << 1)
/** EIC_CTRL_SWRST Software Reset **/
#define EIC_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup eic_status STATUS Status
@{*/

/** EIC_STATUS_SYNCBUSY Synchronization Busy **/
#define EIC_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup eic_nmictrl NMICTRL Non-Maskable Interrupt Control
@{*/

/** EIC_NMICTRL_NMIFILTEN Non-Maskable Interrupt Filter Enable **/
#define EIC_NMICTRL_NMIFILTEN		(1 << 3)

#define EIC_NMICTRL_NMISENSE_SHIFT		0
#define EIC_NMICTRL_NMISENSE_MASK		0x07
/** @defgroup eic_nmictrl_nmisense NMISENSE Non-Maskable Interrupt Sense
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_nmiflag NMIFLAG Non-Maskable Interrupt Flag Status and Clear
@{*/

/** EIC_NMIFLAG_NMI Non-Maskable Interrupt **/
#define EIC_NMIFLAG_NMI		(1 << 0)

/**@}*/

/** @defgroup eic_evctrl EVCTRL Event Control
@{*/

/** EIC_EVCTRL_EXTINTEO15 External Interrupt 15 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO15		(1 << 15)
/** EIC_EVCTRL_EXTINTEO14 External Interrupt 14 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO14		(1 << 14)
/** EIC_EVCTRL_EXTINTEO13 External Interrupt 13 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO13		(1 << 13)
/** EIC_EVCTRL_EXTINTEO12 External Interrupt 12 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO12		(1 << 12)
/** EIC_EVCTRL_EXTINTEO11 External Interrupt 11 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO11		(1 << 11)
/** EIC_EVCTRL_EXTINTEO10 External Interrupt 10 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO10		(1 << 10)
/** EIC_EVCTRL_EXTINTEO9 External Interrupt 9 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO9		(1 << 9)
/** EIC_EVCTRL_EXTINTEO8 External Interrupt 8 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO8		(1 << 8)
/** EIC_EVCTRL_EXTINTEO7 External Interrupt 7 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO7		(1 << 7)
/** EIC_EVCTRL_EXTINTEO6 External Interrupt 6 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO6		(1 << 6)
/** EIC_EVCTRL_EXTINTEO5 External Interrupt 5 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO5		(1 << 5)
/** EIC_EVCTRL_EXTINTEO4 External Interrupt 4 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO4		(1 << 4)
/** EIC_EVCTRL_EXTINTEO3 External Interrupt 3 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO3		(1 << 3)
/** EIC_EVCTRL_EXTINTEO2 External Interrupt 2 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO2		(1 << 2)
/** EIC_EVCTRL_EXTINTEO1 External Interrupt 1 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO1		(1 << 1)
/** EIC_EVCTRL_EXTINTEO0 External Interrupt 0 Event Output Enable **/
#define EIC_EVCTRL_EXTINTEO0		(1 << 0)

/**@}*/

/** @defgroup eic_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** EIC_INTENCLR_EXTINT15 External Interrupt 15 Enable **/
#define EIC_INTENCLR_EXTINT15		(1 << 15)
/** EIC_INTENCLR_EXTINT14 External Interrupt 14 Enable **/
#define EIC_INTENCLR_EXTINT14		(1 << 14)
/** EIC_INTENCLR_EXTINT13 External Interrupt 13 Enable **/
#define EIC_INTENCLR_EXTINT13		(1 << 13)
/** EIC_INTENCLR_EXTINT12 External Interrupt 12 Enable **/
#define EIC_INTENCLR_EXTINT12		(1 << 12)
/** EIC_INTENCLR_EXTINT11 External Interrupt 11 Enable **/
#define EIC_INTENCLR_EXTINT11		(1 << 11)
/** EIC_INTENCLR_EXTINT10 External Interrupt 10 Enable **/
#define EIC_INTENCLR_EXTINT10		(1 << 10)
/** EIC_INTENCLR_EXTINT9 External Interrupt 9 Enable **/
#define EIC_INTENCLR_EXTINT9		(1 << 9)
/** EIC_INTENCLR_EXTINT8 External Interrupt 8 Enable **/
#define EIC_INTENCLR_EXTINT8		(1 << 8)
/** EIC_INTENCLR_EXTINT7 External Interrupt 7 Enable **/
#define EIC_INTENCLR_EXTINT7		(1 << 7)
/** EIC_INTENCLR_EXTINT6 External Interrupt 6 Enable **/
#define EIC_INTENCLR_EXTINT6		(1 << 6)
/** EIC_INTENCLR_EXTINT5 External Interrupt 5 Enable **/
#define EIC_INTENCLR_EXTINT5		(1 << 5)
/** EIC_INTENCLR_EXTINT4 External Interrupt 4 Enable **/
#define EIC_INTENCLR_EXTINT4		(1 << 4)
/** EIC_INTENCLR_EXTINT3 External Interrupt 3 Enable **/
#define EIC_INTENCLR_EXTINT3		(1 << 3)
/** EIC_INTENCLR_EXTINT2 External Interrupt 2 Enable **/
#define EIC_INTENCLR_EXTINT2		(1 << 2)
/** EIC_INTENCLR_EXTINT1 External Interrupt 1 Enable **/
#define EIC_INTENCLR_EXTINT1		(1 << 1)
/** EIC_INTENCLR_EXTINT0 External Interrupt 0 Enable **/
#define EIC_INTENCLR_EXTINT0		(1 << 0)

/**@}*/

/** @defgroup eic_intenset INTENSET Interrupt Enable Set
@{*/

/** EIC_INTENSET_EXTINT15 External Interrupt 15 Enable **/
#define EIC_INTENSET_EXTINT15		(1 << 15)
/** EIC_INTENSET_EXTINT14 External Interrupt 14 Enable **/
#define EIC_INTENSET_EXTINT14		(1 << 14)
/** EIC_INTENSET_EXTINT13 External Interrupt 13 Enable **/
#define EIC_INTENSET_EXTINT13		(1 << 13)
/** EIC_INTENSET_EXTINT12 External Interrupt 12 Enable **/
#define EIC_INTENSET_EXTINT12		(1 << 12)
/** EIC_INTENSET_EXTINT11 External Interrupt 11 Enable **/
#define EIC_INTENSET_EXTINT11		(1 << 11)
/** EIC_INTENSET_EXTINT10 External Interrupt 10 Enable **/
#define EIC_INTENSET_EXTINT10		(1 << 10)
/** EIC_INTENSET_EXTINT9 External Interrupt 9 Enable **/
#define EIC_INTENSET_EXTINT9		(1 << 9)
/** EIC_INTENSET_EXTINT8 External Interrupt 8 Enable **/
#define EIC_INTENSET_EXTINT8		(1 << 8)
/** EIC_INTENSET_EXTINT7 External Interrupt 7 Enable **/
#define EIC_INTENSET_EXTINT7		(1 << 7)
/** EIC_INTENSET_EXTINT6 External Interrupt 6 Enable **/
#define EIC_INTENSET_EXTINT6		(1 << 6)
/** EIC_INTENSET_EXTINT5 External Interrupt 5 Enable **/
#define EIC_INTENSET_EXTINT5		(1 << 5)
/** EIC_INTENSET_EXTINT4 External Interrupt 4 Enable **/
#define EIC_INTENSET_EXTINT4		(1 << 4)
/** EIC_INTENSET_EXTINT3 External Interrupt 3 Enable **/
#define EIC_INTENSET_EXTINT3		(1 << 3)
/** EIC_INTENSET_EXTINT2 External Interrupt 2 Enable **/
#define EIC_INTENSET_EXTINT2		(1 << 2)
/** EIC_INTENSET_EXTINT1 External Interrupt 1 Enable **/
#define EIC_INTENSET_EXTINT1		(1 << 1)
/** EIC_INTENSET_EXTINT0 External Interrupt 0 Enable **/
#define EIC_INTENSET_EXTINT0		(1 << 0)

/**@}*/

/** @defgroup eic_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** EIC_INTFLAG_EXTINT15 External Interrupt 15 **/
#define EIC_INTFLAG_EXTINT15		(1 << 15)
/** EIC_INTFLAG_EXTINT14 External Interrupt 14 **/
#define EIC_INTFLAG_EXTINT14		(1 << 14)
/** EIC_INTFLAG_EXTINT13 External Interrupt 13 **/
#define EIC_INTFLAG_EXTINT13		(1 << 13)
/** EIC_INTFLAG_EXTINT12 External Interrupt 12 **/
#define EIC_INTFLAG_EXTINT12		(1 << 12)
/** EIC_INTFLAG_EXTINT11 External Interrupt 11 **/
#define EIC_INTFLAG_EXTINT11		(1 << 11)
/** EIC_INTFLAG_EXTINT10 External Interrupt 10 **/
#define EIC_INTFLAG_EXTINT10		(1 << 10)
/** EIC_INTFLAG_EXTINT9 External Interrupt 9 **/
#define EIC_INTFLAG_EXTINT9		(1 << 9)
/** EIC_INTFLAG_EXTINT8 External Interrupt 8 **/
#define EIC_INTFLAG_EXTINT8		(1 << 8)
/** EIC_INTFLAG_EXTINT7 External Interrupt 7 **/
#define EIC_INTFLAG_EXTINT7		(1 << 7)
/** EIC_INTFLAG_EXTINT6 External Interrupt 6 **/
#define EIC_INTFLAG_EXTINT6		(1 << 6)
/** EIC_INTFLAG_EXTINT5 External Interrupt 5 **/
#define EIC_INTFLAG_EXTINT5		(1 << 5)
/** EIC_INTFLAG_EXTINT4 External Interrupt 4 **/
#define EIC_INTFLAG_EXTINT4		(1 << 4)
/** EIC_INTFLAG_EXTINT3 External Interrupt 3 **/
#define EIC_INTFLAG_EXTINT3		(1 << 3)
/** EIC_INTFLAG_EXTINT2 External Interrupt 2 **/
#define EIC_INTFLAG_EXTINT2		(1 << 2)
/** EIC_INTFLAG_EXTINT1 External Interrupt 1 **/
#define EIC_INTFLAG_EXTINT1		(1 << 1)
/** EIC_INTFLAG_EXTINT0 External Interrupt 0 **/
#define EIC_INTFLAG_EXTINT0		(1 << 0)

/**@}*/

/** @defgroup eic_wakeup WAKEUP Wake-Up Enable
@{*/

/** EIC_WAKEUP_WAKEUPEN15 External Interrupt 15 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN15		(1 << 15)
/** EIC_WAKEUP_WAKEUPEN14 External Interrupt 14 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN14		(1 << 14)
/** EIC_WAKEUP_WAKEUPEN13 External Interrupt 13 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN13		(1 << 13)
/** EIC_WAKEUP_WAKEUPEN12 External Interrupt 12 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN12		(1 << 12)
/** EIC_WAKEUP_WAKEUPEN11 External Interrupt 11 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN11		(1 << 11)
/** EIC_WAKEUP_WAKEUPEN10 External Interrupt 10 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN10		(1 << 10)
/** EIC_WAKEUP_WAKEUPEN9 External Interrupt 9 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN9		(1 << 9)
/** EIC_WAKEUP_WAKEUPEN8 External Interrupt 8 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN8		(1 << 8)
/** EIC_WAKEUP_WAKEUPEN7 External Interrupt 7 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN7		(1 << 7)
/** EIC_WAKEUP_WAKEUPEN6 External Interrupt 6 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN6		(1 << 6)
/** EIC_WAKEUP_WAKEUPEN5 External Interrupt 5 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN5		(1 << 5)
/** EIC_WAKEUP_WAKEUPEN4 External Interrupt 4 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN4		(1 << 4)
/** EIC_WAKEUP_WAKEUPEN3 External Interrupt 3 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN3		(1 << 3)
/** EIC_WAKEUP_WAKEUPEN2 External Interrupt 2 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN2		(1 << 2)
/** EIC_WAKEUP_WAKEUPEN1 External Interrupt 1 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN1		(1 << 1)
/** EIC_WAKEUP_WAKEUPEN0 External Interrupt 0 Wake-up Enable **/
#define EIC_WAKEUP_WAKEUPEN0		(1 << 0)

/**@}*/

/** @defgroup eic_config0 CONFIG0 Configuration n
@{*/

/** EIC_CONFIG0_FILTEN7 Filter 7 Enable **/
#define EIC_CONFIG0_FILTEN7		(1 << 31)

#define EIC_CONFIG0_SENSE7_SHIFT		28
#define EIC_CONFIG0_SENSE7_MASK		0x07
/** @defgroup eic_config0_sense7 SENSE7 Input Sense 7 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN6 Filter 6 Enable **/
#define EIC_CONFIG0_FILTEN6		(1 << 27)

#define EIC_CONFIG0_SENSE6_SHIFT		24
#define EIC_CONFIG0_SENSE6_MASK		0x07
/** @defgroup eic_config0_sense6 SENSE6 Input Sense 6 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN5 Filter 5 Enable **/
#define EIC_CONFIG0_FILTEN5		(1 << 23)

#define EIC_CONFIG0_SENSE5_SHIFT		20
#define EIC_CONFIG0_SENSE5_MASK		0x07
/** @defgroup eic_config0_sense5 SENSE5 Input Sense 5 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN4 Filter 4 Enable **/
#define EIC_CONFIG0_FILTEN4		(1 << 19)

#define EIC_CONFIG0_SENSE4_SHIFT		16
#define EIC_CONFIG0_SENSE4_MASK		0x07
/** @defgroup eic_config0_sense4 SENSE4 Input Sense 4 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN3 Filter 3 Enable **/
#define EIC_CONFIG0_FILTEN3		(1 << 15)

#define EIC_CONFIG0_SENSE3_SHIFT		12
#define EIC_CONFIG0_SENSE3_MASK		0x07
/** @defgroup eic_config0_sense3 SENSE3 Input Sense 3 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN2 Filter 2 Enable **/
#define EIC_CONFIG0_FILTEN2		(1 << 11)

#define EIC_CONFIG0_SENSE2_SHIFT		8
#define EIC_CONFIG0_SENSE2_MASK		0x07
/** @defgroup eic_config0_sense2 SENSE2 Input Sense 2 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN1 Filter 1 Enable **/
#define EIC_CONFIG0_FILTEN1		(1 << 7)

#define EIC_CONFIG0_SENSE1_SHIFT		4
#define EIC_CONFIG0_SENSE1_MASK		0x07
/** @defgroup eic_config0_sense1 SENSE1 Input Sense 1 Configuration
@{*/
/**@}*/

/** EIC_CONFIG0_FILTEN0 Filter 0 Enable **/
#define EIC_CONFIG0_FILTEN0		(1 << 3)

#define EIC_CONFIG0_SENSE0_SHIFT		0
#define EIC_CONFIG0_SENSE0_MASK		0x07
/** @defgroup eic_config0_sense0 SENSE0 Input Sense 0 Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup eic_config1 CONFIG1 Configuration n
@{*/

/** EIC_CONFIG1_FILTEN7 Filter 7 Enable **/
#define EIC_CONFIG1_FILTEN7		(1 << 31)

#define EIC_CONFIG1_SENSE7_SHIFT		28
#define EIC_CONFIG1_SENSE7_MASK		0x07
/** @defgroup eic_config1_sense7 SENSE7 Input Sense 7 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN6 Filter 6 Enable **/
#define EIC_CONFIG1_FILTEN6		(1 << 27)

#define EIC_CONFIG1_SENSE6_SHIFT		24
#define EIC_CONFIG1_SENSE6_MASK		0x07
/** @defgroup eic_config1_sense6 SENSE6 Input Sense 6 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN5 Filter 5 Enable **/
#define EIC_CONFIG1_FILTEN5		(1 << 23)

#define EIC_CONFIG1_SENSE5_SHIFT		20
#define EIC_CONFIG1_SENSE5_MASK		0x07
/** @defgroup eic_config1_sense5 SENSE5 Input Sense 5 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN4 Filter 4 Enable **/
#define EIC_CONFIG1_FILTEN4		(1 << 19)

#define EIC_CONFIG1_SENSE4_SHIFT		16
#define EIC_CONFIG1_SENSE4_MASK		0x07
/** @defgroup eic_config1_sense4 SENSE4 Input Sense 4 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN3 Filter 3 Enable **/
#define EIC_CONFIG1_FILTEN3		(1 << 15)

#define EIC_CONFIG1_SENSE3_SHIFT		12
#define EIC_CONFIG1_SENSE3_MASK		0x07
/** @defgroup eic_config1_sense3 SENSE3 Input Sense 3 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN2 Filter 2 Enable **/
#define EIC_CONFIG1_FILTEN2		(1 << 11)

#define EIC_CONFIG1_SENSE2_SHIFT		8
#define EIC_CONFIG1_SENSE2_MASK		0x07
/** @defgroup eic_config1_sense2 SENSE2 Input Sense 2 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN1 Filter 1 Enable **/
#define EIC_CONFIG1_FILTEN1		(1 << 7)

#define EIC_CONFIG1_SENSE1_SHIFT		4
#define EIC_CONFIG1_SENSE1_MASK		0x07
/** @defgroup eic_config1_sense1 SENSE1 Input Sense 1 Configuration
@{*/
/**@}*/

/** EIC_CONFIG1_FILTEN0 Filter 0 Enable **/
#define EIC_CONFIG1_FILTEN0		(1 << 3)

#define EIC_CONFIG1_SENSE0_SHIFT		0
#define EIC_CONFIG1_SENSE0_MASK		0x07
/** @defgroup eic_config1_sense0 SENSE0 Input Sense 0 Configuration
@{*/
/**@}*/


/**@}*/

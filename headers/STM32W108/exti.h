#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event
      controller Register
@{*/

/** EXTI_EXTI_PR EXTI pending register **/
#define EXTI_EXTI_PR			MMIO32(EXTI_BASE + 0x00)
/** EXTI_EXTIA_TSR EXTIA trigger source register **/
#define EXTI_EXTIA_TSR			MMIO32(EXTI_BASE + 0x4c)
/** EXTI_EXTIB_TSR EXTIB trigger source register **/
#define EXTI_EXTIB_TSR			MMIO32(EXTI_BASE + 0x50)
/** EXTI_EXTIC_TSR EXTIC trigger source register **/
#define EXTI_EXTIC_TSR			MMIO32(EXTI_BASE + 0x54)
/** EXTI_EXTID_TSR EXTID trigger source register **/
#define EXTI_EXTID_TSR			MMIO32(EXTI_BASE + 0x58)
/** EXTI_EXTIC_CR EXTIC configuration register **/
#define EXTI_EXTIC_CR			MMIO32(EXTI_BASE + 0x1400)
/** EXTI_EXTID_CR EXTID configuration register **/
#define EXTI_EXTID_CR			MMIO32(EXTI_BASE + 0x1404)

/**@}*/


/** @defgroup exti_exti_pr EXTIPR EXTI pending register
@{*/


/**@}*/

/** @defgroup exti_extia_tsr EXTIATSR EXTIA trigger source register
@{*/

/** EXTI_EXTIA_TSR_FILTEN FILTEN **/
#define EXTI_EXTIA_TSR_FILTEN		(1 << 8)

#define EXTI_EXTIA_TSR_INTMOD_SHIFT		5
#define EXTI_EXTIA_TSR_INTMOD_MASK		0x07
/** @defgroup exti_extia_tsr_intmod INTMOD INTMOD
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_extib_tsr EXTIBTSR EXTIB trigger source register
@{*/

/** EXTI_EXTIB_TSR_FILTEN FILTEN **/
#define EXTI_EXTIB_TSR_FILTEN		(1 << 8)

#define EXTI_EXTIB_TSR_INTMOD_SHIFT		5
#define EXTI_EXTIB_TSR_INTMOD_MASK		0x07
/** @defgroup exti_extib_tsr_intmod INTMOD INTMOD
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_extic_tsr EXTICTSR EXTIC trigger source register
@{*/

/** EXTI_EXTIC_TSR_FILTEN FILTEN **/
#define EXTI_EXTIC_TSR_FILTEN		(1 << 8)

#define EXTI_EXTIC_TSR_INTMOD_SHIFT		5
#define EXTI_EXTIC_TSR_INTMOD_MASK		0x07
/** @defgroup exti_extic_tsr_intmod INTMOD INTMOD
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_extid_tsr EXTIDTSR EXTID trigger source register
@{*/

/** EXTI_EXTID_TSR_FILTEN FILTEN **/
#define EXTI_EXTID_TSR_FILTEN		(1 << 8)

#define EXTI_EXTID_TSR_INTMOD_SHIFT		5
#define EXTI_EXTID_TSR_INTMOD_MASK		0x07
/** @defgroup exti_extid_tsr_intmod INTMOD INTMOD
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_extic_cr EXTICCR EXTIC configuration register
@{*/


#define EXTI_EXTIC_CR_GPIO_SEL_SHIFT		0
#define EXTI_EXTIC_CR_GPIO_SEL_MASK		0x1f
/** @defgroup exti_extic_cr_gpio_sel GPIOSEL GPIO_SEL
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_extid_cr EXTIDCR EXTID configuration register
@{*/


#define EXTI_EXTID_CR_GPIO_SEL_SHIFT		0
#define EXTI_EXTID_CR_GPIO_SEL_MASK		0x1f
/** @defgroup exti_extid_cr_gpio_sel GPIOSEL GPIO_SEL
@{*/
/**@}*/


/**@}*/

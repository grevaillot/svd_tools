#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event       controller Register
@{*/

/** EXTI_IMR IMR **/
#define EXTI_IMR			MMIO32(EXTI_BASE + 0x00)
/** EXTI_EMR EMR **/
#define EXTI_EMR			MMIO32(EXTI_BASE + 0x04)
/** EXTI_RTSR RTSR **/
#define EXTI_RTSR			MMIO32(EXTI_BASE + 0x08)
/** EXTI_FTSR FTSR **/
#define EXTI_FTSR			MMIO32(EXTI_BASE + 0x0c)
/** EXTI_SWIER SWIER **/
#define EXTI_SWIER			MMIO32(EXTI_BASE + 0x10)
/** EXTI_PR PR **/
#define EXTI_PR			MMIO32(EXTI_BASE + 0x14)

/**@}*/


/** @defgroup exti_imr IMR IMR
@{*/


#define EXTI_IMR_MR_SHIFT		0
#define EXTI_IMR_MR_MASK		0x7fffff
/** @defgroup exti_imr_mr MR Interrupt mask on line x
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_emr EMR EMR
@{*/


#define EXTI_EMR_MR_SHIFT		0
#define EXTI_EMR_MR_MASK		0x7fffff
/** @defgroup exti_emr_mr MR Event mask on line x
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_rtsr RTSR RTSR
@{*/


#define EXTI_RTSR_TR_SHIFT		0
#define EXTI_RTSR_TR_MASK		0x7fffff
/** @defgroup exti_rtsr_tr TR Rising edge trigger event configuration bit of line x
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_ftsr FTSR FTSR
@{*/


#define EXTI_FTSR_TR_SHIFT		0
#define EXTI_FTSR_TR_MASK		0x7fffff
/** @defgroup exti_ftsr_tr TR Falling edge trigger event configuration bit of line x
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_swier SWIER SWIER
@{*/


#define EXTI_SWIER_SWIER_SHIFT		0
#define EXTI_SWIER_SWIER_MASK		0x7fffff
/** @defgroup exti_swier_swier SWIER Software interrupt on line x
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_pr PR PR
@{*/


#define EXTI_PR_PR_SHIFT		0
#define EXTI_PR_PR_MASK		0x7fffff
/** @defgroup exti_pr_pr PR Pending bit
@{*/
/**@}*/


/**@}*/

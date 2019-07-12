#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event
      controller Register
@{*/

/** EXTI_IMR Interrupt mask register (EXTI_IMR) **/
#define EXTI_IMR			MMIO32(EXTI_BASE + 0x00)
/** EXTI_EMR Event mask register (EXTI_EMR) **/
#define EXTI_EMR			MMIO32(EXTI_BASE + 0x04)
/** EXTI_RTSR Rising Trigger selection register (EXTI_RTSR) **/
#define EXTI_RTSR			MMIO32(EXTI_BASE + 0x08)
/** EXTI_FTSR Falling Trigger selection register (EXTI_FTSR) **/
#define EXTI_FTSR			MMIO32(EXTI_BASE + 0x0c)
/** EXTI_SWIER Software interrupt event register (EXTI_SWIER) **/
#define EXTI_SWIER			MMIO32(EXTI_BASE + 0x10)
/** EXTI_PR Pending register (EXTI_PR) **/
#define EXTI_PR			MMIO32(EXTI_BASE + 0x14)

/**@}*/


/** @defgroup exti_imr IMR Interrupt mask register (EXTI_IMR)
@{*/

/** EXTI_IMR_IM23 Interrupt Mask on line 23 **/
#define EXTI_IMR_IM23		(1 << 23)
/** EXTI_IMR_IM22 Interrupt Mask on line 22 **/
#define EXTI_IMR_IM22		(1 << 22)
/** EXTI_IMR_IM21 Interrupt Mask on line 21 **/
#define EXTI_IMR_IM21		(1 << 21)
/** EXTI_IMR_IM20 Interrupt Mask on line 20 **/
#define EXTI_IMR_IM20		(1 << 20)
/** EXTI_IMR_IM19 Interrupt Mask on line 19 **/
#define EXTI_IMR_IM19		(1 << 19)
/** EXTI_IMR_IM18 Interrupt Mask on line 18 **/
#define EXTI_IMR_IM18		(1 << 18)
/** EXTI_IMR_IM17 Interrupt Mask on line 17 **/
#define EXTI_IMR_IM17		(1 << 17)
/** EXTI_IMR_IM16 Interrupt Mask on line 16 **/
#define EXTI_IMR_IM16		(1 << 16)
/** EXTI_IMR_IM15 Interrupt Mask on line 15 **/
#define EXTI_IMR_IM15		(1 << 15)
/** EXTI_IMR_IM14 Interrupt Mask on line 14 **/
#define EXTI_IMR_IM14		(1 << 14)
/** EXTI_IMR_IM13 Interrupt Mask on line 13 **/
#define EXTI_IMR_IM13		(1 << 13)
/** EXTI_IMR_IM12 Interrupt Mask on line 12 **/
#define EXTI_IMR_IM12		(1 << 12)
/** EXTI_IMR_IM11 Interrupt Mask on line 11 **/
#define EXTI_IMR_IM11		(1 << 11)
/** EXTI_IMR_IM10 Interrupt Mask on line 10 **/
#define EXTI_IMR_IM10		(1 << 10)
/** EXTI_IMR_MI9 Interrupt Mask on line 9 **/
#define EXTI_IMR_MI9		(1 << 9)
/** EXTI_IMR_IM8 Interrupt Mask on line 8 **/
#define EXTI_IMR_IM8		(1 << 8)
/** EXTI_IMR_IM7 Interrupt Mask on line 7 **/
#define EXTI_IMR_IM7		(1 << 7)
/** EXTI_IMR_IM6 Interrupt Mask on line 6 **/
#define EXTI_IMR_IM6		(1 << 6)
/** EXTI_IMR_IM5 Interrupt Mask on line 5 **/
#define EXTI_IMR_IM5		(1 << 5)
/** EXTI_IMR_IM4 Interrupt Mask on line 4 **/
#define EXTI_IMR_IM4		(1 << 4)
/** EXTI_IMR_IM3 Interrupt Mask on line 3 **/
#define EXTI_IMR_IM3		(1 << 3)
/** EXTI_IMR_IM2 Interrupt Mask on line 2 **/
#define EXTI_IMR_IM2		(1 << 2)
/** EXTI_IMR_IM1 Interrupt Mask on line 1 **/
#define EXTI_IMR_IM1		(1 << 1)
/** EXTI_IMR_IM0 Interrupt Mask on line 0 **/
#define EXTI_IMR_IM0		(1 << 0)

/**@}*/

/** @defgroup exti_emr EMR Event mask register (EXTI_EMR)
@{*/

/** EXTI_EMR_EM23 Event Mask on line 23 **/
#define EXTI_EMR_EM23		(1 << 23)
/** EXTI_EMR_EM22 Event Mask on line 22 **/
#define EXTI_EMR_EM22		(1 << 22)
/** EXTI_EMR_EM21 Event Mask on line 21 **/
#define EXTI_EMR_EM21		(1 << 21)
/** EXTI_EMR_EM20 Event Mask on line 20 **/
#define EXTI_EMR_EM20		(1 << 20)
/** EXTI_EMR_EM19 Event Mask on line 19 **/
#define EXTI_EMR_EM19		(1 << 19)
/** EXTI_EMR_EM18 Event Mask on line 18 **/
#define EXTI_EMR_EM18		(1 << 18)
/** EXTI_EMR_EM17 Event Mask on line 17 **/
#define EXTI_EMR_EM17		(1 << 17)
/** EXTI_EMR_EM16 Event Mask on line 16 **/
#define EXTI_EMR_EM16		(1 << 16)
/** EXTI_EMR_EM15 Event Mask on line 15 **/
#define EXTI_EMR_EM15		(1 << 15)
/** EXTI_EMR_EM14 Event Mask on line 14 **/
#define EXTI_EMR_EM14		(1 << 14)
/** EXTI_EMR_EM13 Event Mask on line 13 **/
#define EXTI_EMR_EM13		(1 << 13)
/** EXTI_EMR_EM12 Event Mask on line 12 **/
#define EXTI_EMR_EM12		(1 << 12)
/** EXTI_EMR_EM11 Event Mask on line 11 **/
#define EXTI_EMR_EM11		(1 << 11)
/** EXTI_EMR_EM10 Event Mask on line 10 **/
#define EXTI_EMR_EM10		(1 << 10)
/** EXTI_EMR_EM9 Event Mask on line 9 **/
#define EXTI_EMR_EM9		(1 << 9)
/** EXTI_EMR_EM8 Event Mask on line 8 **/
#define EXTI_EMR_EM8		(1 << 8)
/** EXTI_EMR_EM7 Event Mask on line 7 **/
#define EXTI_EMR_EM7		(1 << 7)
/** EXTI_EMR_EM6 Event Mask on line 6 **/
#define EXTI_EMR_EM6		(1 << 6)
/** EXTI_EMR_EM5 Event Mask on line 5 **/
#define EXTI_EMR_EM5		(1 << 5)
/** EXTI_EMR_EM4 Event Mask on line 4 **/
#define EXTI_EMR_EM4		(1 << 4)
/** EXTI_EMR_EM3 Event Mask on line 3 **/
#define EXTI_EMR_EM3		(1 << 3)
/** EXTI_EMR_EM2 Event Mask on line 2 **/
#define EXTI_EMR_EM2		(1 << 2)
/** EXTI_EMR_EM1 Event Mask on line 1 **/
#define EXTI_EMR_EM1		(1 << 1)
/** EXTI_EMR_EM0 Event Mask on line 0 **/
#define EXTI_EMR_EM0		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr RTSR Rising Trigger selection register (EXTI_RTSR)
@{*/

/** EXTI_RTSR_TR23 Rising trigger event configuration of line 23 **/
#define EXTI_RTSR_TR23		(1 << 23)
/** EXTI_RTSR_TR22 Rising trigger event configuration of line 22 **/
#define EXTI_RTSR_TR22		(1 << 22)
/** EXTI_RTSR_TR21 Rising trigger event configuration of line 21 **/
#define EXTI_RTSR_TR21		(1 << 21)
/** EXTI_RTSR_TR20 Rising trigger event configuration of line 20 **/
#define EXTI_RTSR_TR20		(1 << 20)
/** EXTI_RTSR_TR19 Rising trigger event configuration of line 19 **/
#define EXTI_RTSR_TR19		(1 << 19)
/** EXTI_RTSR_TR18 Rising trigger event configuration of line 18 **/
#define EXTI_RTSR_TR18		(1 << 18)
/** EXTI_RTSR_TR17 Rising trigger event configuration of line 17 **/
#define EXTI_RTSR_TR17		(1 << 17)
/** EXTI_RTSR_TR16 Rising trigger event configuration of line 16 **/
#define EXTI_RTSR_TR16		(1 << 16)
/** EXTI_RTSR_TR15 Rising trigger event configuration of line 15 **/
#define EXTI_RTSR_TR15		(1 << 15)
/** EXTI_RTSR_TR14 Rising trigger event configuration of line 14 **/
#define EXTI_RTSR_TR14		(1 << 14)
/** EXTI_RTSR_TR13 Rising trigger event configuration of line 13 **/
#define EXTI_RTSR_TR13		(1 << 13)
/** EXTI_RTSR_TR12 Rising trigger event configuration of line 12 **/
#define EXTI_RTSR_TR12		(1 << 12)
/** EXTI_RTSR_TR11 Rising trigger event configuration of line 11 **/
#define EXTI_RTSR_TR11		(1 << 11)
/** EXTI_RTSR_TR10 Rising trigger event configuration of line 10 **/
#define EXTI_RTSR_TR10		(1 << 10)
/** EXTI_RTSR_TR9 Rising trigger event configuration of line 9 **/
#define EXTI_RTSR_TR9		(1 << 9)
/** EXTI_RTSR_TR8 Rising trigger event configuration of line 8 **/
#define EXTI_RTSR_TR8		(1 << 8)
/** EXTI_RTSR_TR7 Rising trigger event configuration of line 7 **/
#define EXTI_RTSR_TR7		(1 << 7)
/** EXTI_RTSR_TR6 Rising trigger event configuration of line 6 **/
#define EXTI_RTSR_TR6		(1 << 6)
/** EXTI_RTSR_TR5 Rising trigger event configuration of line 5 **/
#define EXTI_RTSR_TR5		(1 << 5)
/** EXTI_RTSR_TR4 Rising trigger event configuration of line 4 **/
#define EXTI_RTSR_TR4		(1 << 4)
/** EXTI_RTSR_TR3 Rising trigger event configuration of line 3 **/
#define EXTI_RTSR_TR3		(1 << 3)
/** EXTI_RTSR_TR2 Rising trigger event configuration of line 2 **/
#define EXTI_RTSR_TR2		(1 << 2)
/** EXTI_RTSR_TR1 Rising trigger event configuration of line 1 **/
#define EXTI_RTSR_TR1		(1 << 1)
/** EXTI_RTSR_TR0 Rising trigger event configuration of line 0 **/
#define EXTI_RTSR_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr FTSR Falling Trigger selection register (EXTI_FTSR)
@{*/

/** EXTI_FTSR_TR23 Falling trigger event configuration of line 23 **/
#define EXTI_FTSR_TR23		(1 << 23)
/** EXTI_FTSR_TR22 Falling trigger event configuration of line 22 **/
#define EXTI_FTSR_TR22		(1 << 22)
/** EXTI_FTSR_TR21 Falling trigger event configuration of line 21 **/
#define EXTI_FTSR_TR21		(1 << 21)
/** EXTI_FTSR_TR20 Falling trigger event configuration of line 20 **/
#define EXTI_FTSR_TR20		(1 << 20)
/** EXTI_FTSR_TR19 Falling trigger event configuration of line 19 **/
#define EXTI_FTSR_TR19		(1 << 19)
/** EXTI_FTSR_TR18 Falling trigger event configuration of line 18 **/
#define EXTI_FTSR_TR18		(1 << 18)
/** EXTI_FTSR_TR17 Falling trigger event configuration of line 17 **/
#define EXTI_FTSR_TR17		(1 << 17)
/** EXTI_FTSR_TR16 Falling trigger event configuration of line 16 **/
#define EXTI_FTSR_TR16		(1 << 16)
/** EXTI_FTSR_TR15 Falling trigger event configuration of line 15 **/
#define EXTI_FTSR_TR15		(1 << 15)
/** EXTI_FTSR_TR14 Falling trigger event configuration of line 14 **/
#define EXTI_FTSR_TR14		(1 << 14)
/** EXTI_FTSR_TR13 Falling trigger event configuration of line 13 **/
#define EXTI_FTSR_TR13		(1 << 13)
/** EXTI_FTSR_TR12 Falling trigger event configuration of line 12 **/
#define EXTI_FTSR_TR12		(1 << 12)
/** EXTI_FTSR_TR11 Falling trigger event configuration of line 11 **/
#define EXTI_FTSR_TR11		(1 << 11)
/** EXTI_FTSR_TR10 Falling trigger event configuration of line 10 **/
#define EXTI_FTSR_TR10		(1 << 10)
/** EXTI_FTSR_TR9 Falling trigger event configuration of line 9 **/
#define EXTI_FTSR_TR9		(1 << 9)
/** EXTI_FTSR_TR8 Falling trigger event configuration of line 8 **/
#define EXTI_FTSR_TR8		(1 << 8)
/** EXTI_FTSR_TR7 Falling trigger event configuration of line 7 **/
#define EXTI_FTSR_TR7		(1 << 7)
/** EXTI_FTSR_TR6 Falling trigger event configuration of line 6 **/
#define EXTI_FTSR_TR6		(1 << 6)
/** EXTI_FTSR_TR5 Falling trigger event configuration of line 5 **/
#define EXTI_FTSR_TR5		(1 << 5)
/** EXTI_FTSR_TR4 Falling trigger event configuration of line 4 **/
#define EXTI_FTSR_TR4		(1 << 4)
/** EXTI_FTSR_TR3 Falling trigger event configuration of line 3 **/
#define EXTI_FTSR_TR3		(1 << 3)
/** EXTI_FTSR_TR2 Falling trigger event configuration of line 2 **/
#define EXTI_FTSR_TR2		(1 << 2)
/** EXTI_FTSR_TR1 Falling trigger event configuration of line 1 **/
#define EXTI_FTSR_TR1		(1 << 1)
/** EXTI_FTSR_TR0 Falling trigger event configuration of line 0 **/
#define EXTI_FTSR_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_swier SWIER Software interrupt event register (EXTI_SWIER)
@{*/

/** EXTI_SWIER_SWIER23 Software Interrupt on line 22 **/
#define EXTI_SWIER_SWIER23		(1 << 23)
/** EXTI_SWIER_SWIER22 Software Interrupt on line 22 **/
#define EXTI_SWIER_SWIER22		(1 << 22)
/** EXTI_SWIER_SWIER21 Software Interrupt on line 21 **/
#define EXTI_SWIER_SWIER21		(1 << 21)
/** EXTI_SWIER_SWIER20 Software Interrupt on line 20 **/
#define EXTI_SWIER_SWIER20		(1 << 20)
/** EXTI_SWIER_SWIER19 Software Interrupt on line 19 **/
#define EXTI_SWIER_SWIER19		(1 << 19)
/** EXTI_SWIER_SWIER18 Software Interrupt on line 18 **/
#define EXTI_SWIER_SWIER18		(1 << 18)
/** EXTI_SWIER_SWIER17 Software Interrupt on line 17 **/
#define EXTI_SWIER_SWIER17		(1 << 17)
/** EXTI_SWIER_SWIER16 Software Interrupt on line 16 **/
#define EXTI_SWIER_SWIER16		(1 << 16)
/** EXTI_SWIER_SWIER15 Software Interrupt on line 15 **/
#define EXTI_SWIER_SWIER15		(1 << 15)
/** EXTI_SWIER_SWIER14 Software Interrupt on line 14 **/
#define EXTI_SWIER_SWIER14		(1 << 14)
/** EXTI_SWIER_SWIER13 Software Interrupt on line 13 **/
#define EXTI_SWIER_SWIER13		(1 << 13)
/** EXTI_SWIER_SWIER12 Software Interrupt on line 12 **/
#define EXTI_SWIER_SWIER12		(1 << 12)
/** EXTI_SWIER_SWIER11 Software Interrupt on line 11 **/
#define EXTI_SWIER_SWIER11		(1 << 11)
/** EXTI_SWIER_SWIER10 Software Interrupt on line 10 **/
#define EXTI_SWIER_SWIER10		(1 << 10)
/** EXTI_SWIER_SWIER9 Software Interrupt on line 9 **/
#define EXTI_SWIER_SWIER9		(1 << 9)
/** EXTI_SWIER_SWIER8 Software Interrupt on line 8 **/
#define EXTI_SWIER_SWIER8		(1 << 8)
/** EXTI_SWIER_SWIER7 Software Interrupt on line 7 **/
#define EXTI_SWIER_SWIER7		(1 << 7)
/** EXTI_SWIER_SWIER6 Software Interrupt on line 6 **/
#define EXTI_SWIER_SWIER6		(1 << 6)
/** EXTI_SWIER_SWIER5 Software Interrupt on line 5 **/
#define EXTI_SWIER_SWIER5		(1 << 5)
/** EXTI_SWIER_SWIER4 Software Interrupt on line 4 **/
#define EXTI_SWIER_SWIER4		(1 << 4)
/** EXTI_SWIER_SWIER3 Software Interrupt on line 3 **/
#define EXTI_SWIER_SWIER3		(1 << 3)
/** EXTI_SWIER_SWIER2 Software Interrupt on line 2 **/
#define EXTI_SWIER_SWIER2		(1 << 2)
/** EXTI_SWIER_SWIER1 Software Interrupt on line 1 **/
#define EXTI_SWIER_SWIER1		(1 << 1)
/** EXTI_SWIER_SWIER0 Software Interrupt on line 0 **/
#define EXTI_SWIER_SWIER0		(1 << 0)

/**@}*/

/** @defgroup exti_pr PR Pending register (EXTI_PR)
@{*/

/** EXTI_PR_PR23 Pending bit 23 **/
#define EXTI_PR_PR23		(1 << 23)
/** EXTI_PR_PR22 Pending bit 22 **/
#define EXTI_PR_PR22		(1 << 22)
/** EXTI_PR_PR21 Pending bit 21 **/
#define EXTI_PR_PR21		(1 << 21)
/** EXTI_PR_PR20 Pending bit 20 **/
#define EXTI_PR_PR20		(1 << 20)
/** EXTI_PR_PR19 Pending bit 19 **/
#define EXTI_PR_PR19		(1 << 19)
/** EXTI_PR_PR18 Pending bit 18 **/
#define EXTI_PR_PR18		(1 << 18)
/** EXTI_PR_PR17 Pending bit 17 **/
#define EXTI_PR_PR17		(1 << 17)
/** EXTI_PR_PR16 Pending bit 16 **/
#define EXTI_PR_PR16		(1 << 16)
/** EXTI_PR_PR15 Pending bit 15 **/
#define EXTI_PR_PR15		(1 << 15)
/** EXTI_PR_PR14 Pending bit 14 **/
#define EXTI_PR_PR14		(1 << 14)
/** EXTI_PR_PR13 Pending bit 13 **/
#define EXTI_PR_PR13		(1 << 13)
/** EXTI_PR_PR12 Pending bit 12 **/
#define EXTI_PR_PR12		(1 << 12)
/** EXTI_PR_PR11 Pending bit 11 **/
#define EXTI_PR_PR11		(1 << 11)
/** EXTI_PR_PR10 Pending bit 10 **/
#define EXTI_PR_PR10		(1 << 10)
/** EXTI_PR_PR9 Pending bit 9 **/
#define EXTI_PR_PR9		(1 << 9)
/** EXTI_PR_PR8 Pending bit 8 **/
#define EXTI_PR_PR8		(1 << 8)
/** EXTI_PR_PR7 Pending bit 7 **/
#define EXTI_PR_PR7		(1 << 7)
/** EXTI_PR_PR6 Pending bit 6 **/
#define EXTI_PR_PR6		(1 << 6)
/** EXTI_PR_PR5 Pending bit 5 **/
#define EXTI_PR_PR5		(1 << 5)
/** EXTI_PR_PR4 Pending bit 4 **/
#define EXTI_PR_PR4		(1 << 4)
/** EXTI_PR_PR3 Pending bit 3 **/
#define EXTI_PR_PR3		(1 << 3)
/** EXTI_PR_PR2 Pending bit 2 **/
#define EXTI_PR_PR2		(1 << 2)
/** EXTI_PR_PR1 Pending bit 1 **/
#define EXTI_PR_PR1		(1 << 1)
/** EXTI_PR_PR0 Pending bit 0 **/
#define EXTI_PR_PR0		(1 << 0)

/**@}*/
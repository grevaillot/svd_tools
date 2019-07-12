#pragma once 

/* --- EXTI: EXTI --------------------------------------------------- */

/** @defgroup exti_registers EXTI Register
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

/** EXTI_IMR_MR18 Interrupt Mask on line 18 **/
#define EXTI_IMR_MR18		(1 << 18)
/** EXTI_IMR_MR17 Interrupt Mask on line 17 **/
#define EXTI_IMR_MR17		(1 << 17)
/** EXTI_IMR_MR16 Interrupt Mask on line 16 **/
#define EXTI_IMR_MR16		(1 << 16)
/** EXTI_IMR_MR15 Interrupt Mask on line 15 **/
#define EXTI_IMR_MR15		(1 << 15)
/** EXTI_IMR_MR14 Interrupt Mask on line 14 **/
#define EXTI_IMR_MR14		(1 << 14)
/** EXTI_IMR_MR13 Interrupt Mask on line 13 **/
#define EXTI_IMR_MR13		(1 << 13)
/** EXTI_IMR_MR12 Interrupt Mask on line 12 **/
#define EXTI_IMR_MR12		(1 << 12)
/** EXTI_IMR_MR11 Interrupt Mask on line 11 **/
#define EXTI_IMR_MR11		(1 << 11)
/** EXTI_IMR_MR10 Interrupt Mask on line 10 **/
#define EXTI_IMR_MR10		(1 << 10)
/** EXTI_IMR_MR9 Interrupt Mask on line 9 **/
#define EXTI_IMR_MR9		(1 << 9)
/** EXTI_IMR_MR8 Interrupt Mask on line 8 **/
#define EXTI_IMR_MR8		(1 << 8)
/** EXTI_IMR_MR7 Interrupt Mask on line 7 **/
#define EXTI_IMR_MR7		(1 << 7)
/** EXTI_IMR_MR6 Interrupt Mask on line 6 **/
#define EXTI_IMR_MR6		(1 << 6)
/** EXTI_IMR_MR5 Interrupt Mask on line 5 **/
#define EXTI_IMR_MR5		(1 << 5)
/** EXTI_IMR_MR4 Interrupt Mask on line 4 **/
#define EXTI_IMR_MR4		(1 << 4)
/** EXTI_IMR_MR3 Interrupt Mask on line 3 **/
#define EXTI_IMR_MR3		(1 << 3)
/** EXTI_IMR_MR2 Interrupt Mask on line 2 **/
#define EXTI_IMR_MR2		(1 << 2)
/** EXTI_IMR_MR1 Interrupt Mask on line 1 **/
#define EXTI_IMR_MR1		(1 << 1)
/** EXTI_IMR_MR0 Interrupt Mask on line 0 **/
#define EXTI_IMR_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_emr EMR Event mask register (EXTI_EMR)
@{*/

/** EXTI_EMR_MR18 Event Mask on line 18 **/
#define EXTI_EMR_MR18		(1 << 18)
/** EXTI_EMR_MR17 Event Mask on line 17 **/
#define EXTI_EMR_MR17		(1 << 17)
/** EXTI_EMR_MR16 Event Mask on line 16 **/
#define EXTI_EMR_MR16		(1 << 16)
/** EXTI_EMR_MR15 Event Mask on line 15 **/
#define EXTI_EMR_MR15		(1 << 15)
/** EXTI_EMR_MR14 Event Mask on line 14 **/
#define EXTI_EMR_MR14		(1 << 14)
/** EXTI_EMR_MR13 Event Mask on line 13 **/
#define EXTI_EMR_MR13		(1 << 13)
/** EXTI_EMR_MR12 Event Mask on line 12 **/
#define EXTI_EMR_MR12		(1 << 12)
/** EXTI_EMR_MR11 Event Mask on line 11 **/
#define EXTI_EMR_MR11		(1 << 11)
/** EXTI_EMR_MR10 Event Mask on line 10 **/
#define EXTI_EMR_MR10		(1 << 10)
/** EXTI_EMR_MR9 Event Mask on line 9 **/
#define EXTI_EMR_MR9		(1 << 9)
/** EXTI_EMR_MR8 Event Mask on line 8 **/
#define EXTI_EMR_MR8		(1 << 8)
/** EXTI_EMR_MR7 Event Mask on line 7 **/
#define EXTI_EMR_MR7		(1 << 7)
/** EXTI_EMR_MR6 Event Mask on line 6 **/
#define EXTI_EMR_MR6		(1 << 6)
/** EXTI_EMR_MR5 Event Mask on line 5 **/
#define EXTI_EMR_MR5		(1 << 5)
/** EXTI_EMR_MR4 Event Mask on line 4 **/
#define EXTI_EMR_MR4		(1 << 4)
/** EXTI_EMR_MR3 Event Mask on line 3 **/
#define EXTI_EMR_MR3		(1 << 3)
/** EXTI_EMR_MR2 Event Mask on line 2 **/
#define EXTI_EMR_MR2		(1 << 2)
/** EXTI_EMR_MR1 Event Mask on line 1 **/
#define EXTI_EMR_MR1		(1 << 1)
/** EXTI_EMR_MR0 Event Mask on line 0 **/
#define EXTI_EMR_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr RTSR Rising Trigger selection register (EXTI_RTSR)
@{*/

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

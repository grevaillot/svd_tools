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

/** EXTI_IMR_IM29 Interrupt Mask on line 27 **/
#define EXTI_IMR_IM29		(1 << 29)
/** EXTI_IMR_IM28 Interrupt Mask on line 27 **/
#define EXTI_IMR_IM28		(1 << 28)
/** EXTI_IMR_IM26 Interrupt Mask on line 27 **/
#define EXTI_IMR_IM26		(1 << 26)
/** EXTI_IMR_IM25 Interrupt Mask on line 25 **/
#define EXTI_IMR_IM25		(1 << 25)
/** EXTI_IMR_IM24 Interrupt Mask on line 24 **/
#define EXTI_IMR_IM24		(1 << 24)
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
/** EXTI_IMR_IM9 Interrupt Mask on line 9 **/
#define EXTI_IMR_IM9		(1 << 9)
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

/** EXTI_EMR_EM29 Event Mask on line 29 **/
#define EXTI_EMR_EM29		(1 << 29)
/** EXTI_EMR_EM28 Event Mask on line 28 **/
#define EXTI_EMR_EM28		(1 << 28)
/** EXTI_EMR_EM26 Event Mask on line 26 **/
#define EXTI_EMR_EM26		(1 << 26)
/** EXTI_EMR_EM25 Event Mask on line 25 **/
#define EXTI_EMR_EM25		(1 << 25)
/** EXTI_EMR_EM24 Event Mask on line 24 **/
#define EXTI_EMR_EM24		(1 << 24)
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

/** EXTI_RTSR_RT22 Rising trigger event configuration of line 22 **/
#define EXTI_RTSR_RT22		(1 << 22)
/** EXTI_RTSR_RT21 Rising trigger event configuration of line 21 **/
#define EXTI_RTSR_RT21		(1 << 21)
/** EXTI_RTSR_RT20 Rising trigger event configuration of line 20 **/
#define EXTI_RTSR_RT20		(1 << 20)
/** EXTI_RTSR_RT19 Rising trigger event configuration of line 19 **/
#define EXTI_RTSR_RT19		(1 << 19)
/** EXTI_RTSR_RT17 Rising trigger event configuration of line 17 **/
#define EXTI_RTSR_RT17		(1 << 17)
/** EXTI_RTSR_RT16 Rising trigger event configuration of line 16 **/
#define EXTI_RTSR_RT16		(1 << 16)
/** EXTI_RTSR_RT15 Rising trigger event configuration of line 15 **/
#define EXTI_RTSR_RT15		(1 << 15)
/** EXTI_RTSR_RT14 Rising trigger event configuration of line 14 **/
#define EXTI_RTSR_RT14		(1 << 14)
/** EXTI_RTSR_RT13 Rising trigger event configuration of line 13 **/
#define EXTI_RTSR_RT13		(1 << 13)
/** EXTI_RTSR_RT12 Rising trigger event configuration of line 12 **/
#define EXTI_RTSR_RT12		(1 << 12)
/** EXTI_RTSR_RT11 Rising trigger event configuration of line 11 **/
#define EXTI_RTSR_RT11		(1 << 11)
/** EXTI_RTSR_RT10 Rising trigger event configuration of line 10 **/
#define EXTI_RTSR_RT10		(1 << 10)
/** EXTI_RTSR_RT9 Rising trigger event configuration of line 9 **/
#define EXTI_RTSR_RT9		(1 << 9)
/** EXTI_RTSR_RT8 Rising trigger event configuration of line 8 **/
#define EXTI_RTSR_RT8		(1 << 8)
/** EXTI_RTSR_RT7 Rising trigger event configuration of line 7 **/
#define EXTI_RTSR_RT7		(1 << 7)
/** EXTI_RTSR_RT6 Rising trigger event configuration of line 6 **/
#define EXTI_RTSR_RT6		(1 << 6)
/** EXTI_RTSR_RT5 Rising trigger event configuration of line 5 **/
#define EXTI_RTSR_RT5		(1 << 5)
/** EXTI_RTSR_RT4 Rising trigger event configuration of line 4 **/
#define EXTI_RTSR_RT4		(1 << 4)
/** EXTI_RTSR_RT3 Rising trigger event configuration of line 3 **/
#define EXTI_RTSR_RT3		(1 << 3)
/** EXTI_RTSR_RT2 Rising trigger event configuration of line 2 **/
#define EXTI_RTSR_RT2		(1 << 2)
/** EXTI_RTSR_RT1 Rising trigger event configuration of line 1 **/
#define EXTI_RTSR_RT1		(1 << 1)
/** EXTI_RTSR_RT0 Rising trigger event configuration of line 0 **/
#define EXTI_RTSR_RT0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr FTSR Falling Trigger selection register (EXTI_FTSR)
@{*/

/** EXTI_FTSR_FT22 Falling trigger event configuration of line 22 **/
#define EXTI_FTSR_FT22		(1 << 22)
/** EXTI_FTSR_FT21 Falling trigger event configuration of line 21 **/
#define EXTI_FTSR_FT21		(1 << 21)
/** EXTI_FTSR_FT20 Falling trigger event configuration of line 20 **/
#define EXTI_FTSR_FT20		(1 << 20)
/** EXTI_FTSR_FT19 Falling trigger event configuration of line 19 **/
#define EXTI_FTSR_FT19		(1 << 19)
/** EXTI_FTSR_FT17 Falling trigger event configuration of line 17 **/
#define EXTI_FTSR_FT17		(1 << 17)
/** EXTI_FTSR_FT16 Falling trigger event configuration of line 16 **/
#define EXTI_FTSR_FT16		(1 << 16)
/** EXTI_FTSR_FT15 Falling trigger event configuration of line 15 **/
#define EXTI_FTSR_FT15		(1 << 15)
/** EXTI_FTSR_FT14 Falling trigger event configuration of line 14 **/
#define EXTI_FTSR_FT14		(1 << 14)
/** EXTI_FTSR_FT13 Falling trigger event configuration of line 13 **/
#define EXTI_FTSR_FT13		(1 << 13)
/** EXTI_FTSR_FT12 Falling trigger event configuration of line 12 **/
#define EXTI_FTSR_FT12		(1 << 12)
/** EXTI_FTSR_FT11 Falling trigger event configuration of line 11 **/
#define EXTI_FTSR_FT11		(1 << 11)
/** EXTI_FTSR_FT10 Falling trigger event configuration of line 10 **/
#define EXTI_FTSR_FT10		(1 << 10)
/** EXTI_FTSR_FT9 Falling trigger event configuration of line 9 **/
#define EXTI_FTSR_FT9		(1 << 9)
/** EXTI_FTSR_FT8 Falling trigger event configuration of line 8 **/
#define EXTI_FTSR_FT8		(1 << 8)
/** EXTI_FTSR_FT7 Falling trigger event configuration of line 7 **/
#define EXTI_FTSR_FT7		(1 << 7)
/** EXTI_FTSR_FT6 Falling trigger event configuration of line 6 **/
#define EXTI_FTSR_FT6		(1 << 6)
/** EXTI_FTSR_FT5 Falling trigger event configuration of line 5 **/
#define EXTI_FTSR_FT5		(1 << 5)
/** EXTI_FTSR_FT4 Falling trigger event configuration of line 4 **/
#define EXTI_FTSR_FT4		(1 << 4)
/** EXTI_FTSR_FT3 Falling trigger event configuration of line 3 **/
#define EXTI_FTSR_FT3		(1 << 3)
/** EXTI_FTSR_FT2 Falling trigger event configuration of line 2 **/
#define EXTI_FTSR_FT2		(1 << 2)
/** EXTI_FTSR_FT1 Falling trigger event configuration of line 1 **/
#define EXTI_FTSR_FT1		(1 << 1)
/** EXTI_FTSR_FT0 Falling trigger event configuration of line 0 **/
#define EXTI_FTSR_FT0		(1 << 0)

/**@}*/

/** @defgroup exti_swier SWIER Software interrupt event register (EXTI_SWIER)
@{*/

/** EXTI_SWIER_SWI22 Software Interrupt on line 22 **/
#define EXTI_SWIER_SWI22		(1 << 22)
/** EXTI_SWIER_SWI21 Software Interrupt on line 21 **/
#define EXTI_SWIER_SWI21		(1 << 21)
/** EXTI_SWIER_SWI20 Software Interrupt on line 20 **/
#define EXTI_SWIER_SWI20		(1 << 20)
/** EXTI_SWIER_SWI19 Software Interrupt on line 19 **/
#define EXTI_SWIER_SWI19		(1 << 19)
/** EXTI_SWIER_SWI17 Software Interrupt on line 17 **/
#define EXTI_SWIER_SWI17		(1 << 17)
/** EXTI_SWIER_SWI16 Software Interrupt on line 16 **/
#define EXTI_SWIER_SWI16		(1 << 16)
/** EXTI_SWIER_SWI15 Software Interrupt on line 15 **/
#define EXTI_SWIER_SWI15		(1 << 15)
/** EXTI_SWIER_SWI14 Software Interrupt on line 14 **/
#define EXTI_SWIER_SWI14		(1 << 14)
/** EXTI_SWIER_SWI13 Software Interrupt on line 13 **/
#define EXTI_SWIER_SWI13		(1 << 13)
/** EXTI_SWIER_SWI12 Software Interrupt on line 12 **/
#define EXTI_SWIER_SWI12		(1 << 12)
/** EXTI_SWIER_SWI11 Software Interrupt on line 11 **/
#define EXTI_SWIER_SWI11		(1 << 11)
/** EXTI_SWIER_SWI10 Software Interrupt on line 10 **/
#define EXTI_SWIER_SWI10		(1 << 10)
/** EXTI_SWIER_SWI9 Software Interrupt on line 9 **/
#define EXTI_SWIER_SWI9		(1 << 9)
/** EXTI_SWIER_SWI8 Software Interrupt on line 8 **/
#define EXTI_SWIER_SWI8		(1 << 8)
/** EXTI_SWIER_SWI7 Software Interrupt on line 7 **/
#define EXTI_SWIER_SWI7		(1 << 7)
/** EXTI_SWIER_SWI6 Software Interrupt on line 6 **/
#define EXTI_SWIER_SWI6		(1 << 6)
/** EXTI_SWIER_SWI5 Software Interrupt on line 5 **/
#define EXTI_SWIER_SWI5		(1 << 5)
/** EXTI_SWIER_SWI4 Software Interrupt on line 4 **/
#define EXTI_SWIER_SWI4		(1 << 4)
/** EXTI_SWIER_SWI3 Software Interrupt on line 3 **/
#define EXTI_SWIER_SWI3		(1 << 3)
/** EXTI_SWIER_SWI2 Software Interrupt on line 2 **/
#define EXTI_SWIER_SWI2		(1 << 2)
/** EXTI_SWIER_SWI1 Software Interrupt on line 1 **/
#define EXTI_SWIER_SWI1		(1 << 1)
/** EXTI_SWIER_SWI0 Software Interrupt on line 0 **/
#define EXTI_SWIER_SWI0		(1 << 0)

/**@}*/

/** @defgroup exti_pr PR Pending register (EXTI_PR)
@{*/

/** EXTI_PR_PIF22 Pending bit 22 **/
#define EXTI_PR_PIF22		(1 << 22)
/** EXTI_PR_PIF21 Pending bit 21 **/
#define EXTI_PR_PIF21		(1 << 21)
/** EXTI_PR_PIF20 Pending bit 20 **/
#define EXTI_PR_PIF20		(1 << 20)
/** EXTI_PR_PIF19 Pending bit 19 **/
#define EXTI_PR_PIF19		(1 << 19)
/** EXTI_PR_PIF17 Pending bit 17 **/
#define EXTI_PR_PIF17		(1 << 17)
/** EXTI_PR_PIF16 Pending bit 16 **/
#define EXTI_PR_PIF16		(1 << 16)
/** EXTI_PR_PIF15 Pending bit 15 **/
#define EXTI_PR_PIF15		(1 << 15)
/** EXTI_PR_PIF14 Pending bit 14 **/
#define EXTI_PR_PIF14		(1 << 14)
/** EXTI_PR_PIF13 Pending bit 13 **/
#define EXTI_PR_PIF13		(1 << 13)
/** EXTI_PR_PIF12 Pending bit 12 **/
#define EXTI_PR_PIF12		(1 << 12)
/** EXTI_PR_PIF11 Pending bit 11 **/
#define EXTI_PR_PIF11		(1 << 11)
/** EXTI_PR_PIF10 Pending bit 10 **/
#define EXTI_PR_PIF10		(1 << 10)
/** EXTI_PR_PIF9 Pending bit 9 **/
#define EXTI_PR_PIF9		(1 << 9)
/** EXTI_PR_PIF8 Pending bit 8 **/
#define EXTI_PR_PIF8		(1 << 8)
/** EXTI_PR_PIF7 Pending bit 7 **/
#define EXTI_PR_PIF7		(1 << 7)
/** EXTI_PR_PIF6 Pending bit 6 **/
#define EXTI_PR_PIF6		(1 << 6)
/** EXTI_PR_PIF5 Pending bit 5 **/
#define EXTI_PR_PIF5		(1 << 5)
/** EXTI_PR_PIF4 Pending bit 4 **/
#define EXTI_PR_PIF4		(1 << 4)
/** EXTI_PR_PIF3 Pending bit 3 **/
#define EXTI_PR_PIF3		(1 << 3)
/** EXTI_PR_PIF2 Pending bit 2 **/
#define EXTI_PR_PIF2		(1 << 2)
/** EXTI_PR_PIF1 Pending bit 1 **/
#define EXTI_PR_PIF1		(1 << 1)
/** EXTI_PR_PIF0 Pending bit 0 **/
#define EXTI_PR_PIF0		(1 << 0)

/**@}*/

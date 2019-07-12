#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event       controller Register
@{*/

/** EXTI_IMR1 Interrupt mask register **/
#define EXTI_IMR1			MMIO32(EXTI_BASE + 0x00)
/** EXTI_EMR1 Event mask register **/
#define EXTI_EMR1			MMIO32(EXTI_BASE + 0x04)
/** EXTI_RTSR1 Rising Trigger selection register **/
#define EXTI_RTSR1			MMIO32(EXTI_BASE + 0x08)
/** EXTI_FTSR1 Falling Trigger selection register **/
#define EXTI_FTSR1			MMIO32(EXTI_BASE + 0x0c)
/** EXTI_SWIER1 Software interrupt event register **/
#define EXTI_SWIER1			MMIO32(EXTI_BASE + 0x10)
/** EXTI_PR1 Pending register **/
#define EXTI_PR1			MMIO32(EXTI_BASE + 0x14)
/** EXTI_IMR2 Interrupt mask register **/
#define EXTI_IMR2			MMIO32(EXTI_BASE + 0x20)
/** EXTI_EMR2 Event mask register **/
#define EXTI_EMR2			MMIO32(EXTI_BASE + 0x24)
/** EXTI_RTSR2 Rising Trigger selection register **/
#define EXTI_RTSR2			MMIO32(EXTI_BASE + 0x28)
/** EXTI_FTSR2 Falling Trigger selection register **/
#define EXTI_FTSR2			MMIO32(EXTI_BASE + 0x2c)
/** EXTI_SWIER2 Software interrupt event register **/
#define EXTI_SWIER2			MMIO32(EXTI_BASE + 0x30)
/** EXTI_PR2 Pending register **/
#define EXTI_PR2			MMIO32(EXTI_BASE + 0x34)

/**@}*/


/** @defgroup exti_imr1 IMR1 Interrupt mask register
@{*/

/** EXTI_IMR1_IM31 Interrupt Mask on line 31 **/
#define EXTI_IMR1_IM31		(1 << 31)
/** EXTI_IMR1_IM30 Interrupt Mask on line 30 **/
#define EXTI_IMR1_IM30		(1 << 30)
/** EXTI_IMR1_IM29 Interrupt Mask on line 29 **/
#define EXTI_IMR1_IM29		(1 << 29)
/** EXTI_IMR1_IM28 Interrupt Mask on line 28 **/
#define EXTI_IMR1_IM28		(1 << 28)
/** EXTI_IMR1_IM27 Interrupt Mask on line 27 **/
#define EXTI_IMR1_IM27		(1 << 27)
/** EXTI_IMR1_IM26 Interrupt Mask on line 26 **/
#define EXTI_IMR1_IM26		(1 << 26)
/** EXTI_IMR1_IM25 Interrupt Mask on line 25 **/
#define EXTI_IMR1_IM25		(1 << 25)
/** EXTI_IMR1_IM24 Interrupt Mask on line 24 **/
#define EXTI_IMR1_IM24		(1 << 24)
/** EXTI_IMR1_IM23 Interrupt Mask on line 23 **/
#define EXTI_IMR1_IM23		(1 << 23)
/** EXTI_IMR1_IM22 Interrupt Mask on line 22 **/
#define EXTI_IMR1_IM22		(1 << 22)
/** EXTI_IMR1_IM21 Interrupt Mask on line 21 **/
#define EXTI_IMR1_IM21		(1 << 21)
/** EXTI_IMR1_IM20 Interrupt Mask on line 20 **/
#define EXTI_IMR1_IM20		(1 << 20)
/** EXTI_IMR1_IM19 Interrupt Mask on line 19 **/
#define EXTI_IMR1_IM19		(1 << 19)
/** EXTI_IMR1_IM18 Interrupt Mask on line 18 **/
#define EXTI_IMR1_IM18		(1 << 18)
/** EXTI_IMR1_IM17 Interrupt Mask on line 17 **/
#define EXTI_IMR1_IM17		(1 << 17)
/** EXTI_IMR1_IM16 Interrupt Mask on line 16 **/
#define EXTI_IMR1_IM16		(1 << 16)
/** EXTI_IMR1_IM15 Interrupt Mask on line 15 **/
#define EXTI_IMR1_IM15		(1 << 15)
/** EXTI_IMR1_IM14 Interrupt Mask on line 14 **/
#define EXTI_IMR1_IM14		(1 << 14)
/** EXTI_IMR1_IM13 Interrupt Mask on line 13 **/
#define EXTI_IMR1_IM13		(1 << 13)
/** EXTI_IMR1_IM12 Interrupt Mask on line 12 **/
#define EXTI_IMR1_IM12		(1 << 12)
/** EXTI_IMR1_IM11 Interrupt Mask on line 11 **/
#define EXTI_IMR1_IM11		(1 << 11)
/** EXTI_IMR1_IM10 Interrupt Mask on line 10 **/
#define EXTI_IMR1_IM10		(1 << 10)
/** EXTI_IMR1_IM9 Interrupt Mask on line 9 **/
#define EXTI_IMR1_IM9		(1 << 9)
/** EXTI_IMR1_IM8 Interrupt Mask on line 8 **/
#define EXTI_IMR1_IM8		(1 << 8)
/** EXTI_IMR1_IM7 Interrupt Mask on line 7 **/
#define EXTI_IMR1_IM7		(1 << 7)
/** EXTI_IMR1_IM6 Interrupt Mask on line 6 **/
#define EXTI_IMR1_IM6		(1 << 6)
/** EXTI_IMR1_IM5 Interrupt Mask on line 5 **/
#define EXTI_IMR1_IM5		(1 << 5)
/** EXTI_IMR1_IM4 Interrupt Mask on line 4 **/
#define EXTI_IMR1_IM4		(1 << 4)
/** EXTI_IMR1_IM3 Interrupt Mask on line 3 **/
#define EXTI_IMR1_IM3		(1 << 3)
/** EXTI_IMR1_IM2 Interrupt Mask on line 2 **/
#define EXTI_IMR1_IM2		(1 << 2)
/** EXTI_IMR1_IM1 Interrupt Mask on line 1 **/
#define EXTI_IMR1_IM1		(1 << 1)
/** EXTI_IMR1_IM0 Interrupt Mask on line 0 **/
#define EXTI_IMR1_IM0		(1 << 0)

/**@}*/

/** @defgroup exti_emr1 EMR1 Event mask register
@{*/

/** EXTI_EMR1_EM31 Event Mask on line 31 **/
#define EXTI_EMR1_EM31		(1 << 31)
/** EXTI_EMR1_EM30 Event Mask on line 30 **/
#define EXTI_EMR1_EM30		(1 << 30)
/** EXTI_EMR1_EM29 Event Mask on line 29 **/
#define EXTI_EMR1_EM29		(1 << 29)
/** EXTI_EMR1_EM28 Event Mask on line 28 **/
#define EXTI_EMR1_EM28		(1 << 28)
/** EXTI_EMR1_EM27 Event Mask on line 27 **/
#define EXTI_EMR1_EM27		(1 << 27)
/** EXTI_EMR1_EM26 Event Mask on line 26 **/
#define EXTI_EMR1_EM26		(1 << 26)
/** EXTI_EMR1_EM25 Event Mask on line 25 **/
#define EXTI_EMR1_EM25		(1 << 25)
/** EXTI_EMR1_EM24 Event Mask on line 24 **/
#define EXTI_EMR1_EM24		(1 << 24)
/** EXTI_EMR1_EM23 Event Mask on line 23 **/
#define EXTI_EMR1_EM23		(1 << 23)
/** EXTI_EMR1_EM22 Event Mask on line 22 **/
#define EXTI_EMR1_EM22		(1 << 22)
/** EXTI_EMR1_EM21 Event Mask on line 21 **/
#define EXTI_EMR1_EM21		(1 << 21)
/** EXTI_EMR1_EM20 Event Mask on line 20 **/
#define EXTI_EMR1_EM20		(1 << 20)
/** EXTI_EMR1_EM19 Event Mask on line 19 **/
#define EXTI_EMR1_EM19		(1 << 19)
/** EXTI_EMR1_EM18 Event Mask on line 18 **/
#define EXTI_EMR1_EM18		(1 << 18)
/** EXTI_EMR1_EM17 Event Mask on line 17 **/
#define EXTI_EMR1_EM17		(1 << 17)
/** EXTI_EMR1_EM16 Event Mask on line 16 **/
#define EXTI_EMR1_EM16		(1 << 16)
/** EXTI_EMR1_EM15 Event Mask on line 15 **/
#define EXTI_EMR1_EM15		(1 << 15)
/** EXTI_EMR1_EM14 Event Mask on line 14 **/
#define EXTI_EMR1_EM14		(1 << 14)
/** EXTI_EMR1_EM13 Event Mask on line 13 **/
#define EXTI_EMR1_EM13		(1 << 13)
/** EXTI_EMR1_EM12 Event Mask on line 12 **/
#define EXTI_EMR1_EM12		(1 << 12)
/** EXTI_EMR1_EM11 Event Mask on line 11 **/
#define EXTI_EMR1_EM11		(1 << 11)
/** EXTI_EMR1_EM10 Event Mask on line 10 **/
#define EXTI_EMR1_EM10		(1 << 10)
/** EXTI_EMR1_EM9 Event Mask on line 9 **/
#define EXTI_EMR1_EM9		(1 << 9)
/** EXTI_EMR1_EM8 Event Mask on line 8 **/
#define EXTI_EMR1_EM8		(1 << 8)
/** EXTI_EMR1_EM7 Event Mask on line 7 **/
#define EXTI_EMR1_EM7		(1 << 7)
/** EXTI_EMR1_EM6 Event Mask on line 6 **/
#define EXTI_EMR1_EM6		(1 << 6)
/** EXTI_EMR1_EM5 Event Mask on line 5 **/
#define EXTI_EMR1_EM5		(1 << 5)
/** EXTI_EMR1_EM4 Event Mask on line 4 **/
#define EXTI_EMR1_EM4		(1 << 4)
/** EXTI_EMR1_EM3 Event Mask on line 3 **/
#define EXTI_EMR1_EM3		(1 << 3)
/** EXTI_EMR1_EM2 Event Mask on line 2 **/
#define EXTI_EMR1_EM2		(1 << 2)
/** EXTI_EMR1_EM1 Event Mask on line 1 **/
#define EXTI_EMR1_EM1		(1 << 1)
/** EXTI_EMR1_EM0 Event Mask on line 0 **/
#define EXTI_EMR1_EM0		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr1 RTSR1 Rising Trigger selection register
@{*/


#define EXTI_RTSR1_RT_SHIFT		29
#define EXTI_RTSR1_RT_MASK		0x07
/** @defgroup exti_rtsr1_rt RT RT
@{*/
/**@}*/

/** EXTI_RTSR1_RT22 Rising trigger event configuration of line 22 **/
#define EXTI_RTSR1_RT22		(1 << 22)
/** EXTI_RTSR1_RT21 Rising trigger event configuration of line 21 **/
#define EXTI_RTSR1_RT21		(1 << 21)
/** EXTI_RTSR1_RT20 Rising trigger event configuration of line 20 **/
#define EXTI_RTSR1_RT20		(1 << 20)
/** EXTI_RTSR1_RT19 Rising trigger event configuration of line 19 **/
#define EXTI_RTSR1_RT19		(1 << 19)
/** EXTI_RTSR1_RT18 Rising trigger event configuration of line 18 **/
#define EXTI_RTSR1_RT18		(1 << 18)
/** EXTI_RTSR1_RT16 Rising trigger event configuration of line 16 **/
#define EXTI_RTSR1_RT16		(1 << 16)
/** EXTI_RTSR1_RT15 Rising trigger event configuration of line 15 **/
#define EXTI_RTSR1_RT15		(1 << 15)
/** EXTI_RTSR1_RT14 Rising trigger event configuration of line 14 **/
#define EXTI_RTSR1_RT14		(1 << 14)
/** EXTI_RTSR1_RT13 Rising trigger event configuration of line 13 **/
#define EXTI_RTSR1_RT13		(1 << 13)
/** EXTI_RTSR1_RT12 Rising trigger event configuration of line 12 **/
#define EXTI_RTSR1_RT12		(1 << 12)
/** EXTI_RTSR1_RT11 Rising trigger event configuration of line 11 **/
#define EXTI_RTSR1_RT11		(1 << 11)
/** EXTI_RTSR1_RT10 Rising trigger event configuration of line 10 **/
#define EXTI_RTSR1_RT10		(1 << 10)
/** EXTI_RTSR1_RT9 Rising trigger event configuration of line 9 **/
#define EXTI_RTSR1_RT9		(1 << 9)
/** EXTI_RTSR1_RT8 Rising trigger event configuration of line 8 **/
#define EXTI_RTSR1_RT8		(1 << 8)
/** EXTI_RTSR1_RT7 Rising trigger event configuration of line 7 **/
#define EXTI_RTSR1_RT7		(1 << 7)
/** EXTI_RTSR1_RT6 Rising trigger event configuration of line 6 **/
#define EXTI_RTSR1_RT6		(1 << 6)
/** EXTI_RTSR1_RT5 Rising trigger event configuration of line 5 **/
#define EXTI_RTSR1_RT5		(1 << 5)
/** EXTI_RTSR1_RT4 Rising trigger event configuration of line 4 **/
#define EXTI_RTSR1_RT4		(1 << 4)
/** EXTI_RTSR1_RT3 Rising trigger event configuration of line 3 **/
#define EXTI_RTSR1_RT3		(1 << 3)
/** EXTI_RTSR1_RT2 Rising trigger event configuration of line 2 **/
#define EXTI_RTSR1_RT2		(1 << 2)
/** EXTI_RTSR1_RT1 Rising trigger event configuration of line 1 **/
#define EXTI_RTSR1_RT1		(1 << 1)
/** EXTI_RTSR1_RT0 Rising trigger event configuration of line 0 **/
#define EXTI_RTSR1_RT0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr1 FTSR1 Falling Trigger selection register
@{*/

/** EXTI_FTSR1_FT22 Falling trigger event configuration of line 22 **/
#define EXTI_FTSR1_FT22		(1 << 22)
/** EXTI_FTSR1_FT21 Falling trigger event configuration of line 21 **/
#define EXTI_FTSR1_FT21		(1 << 21)
/** EXTI_FTSR1_FT20 Falling trigger event configuration of line 20 **/
#define EXTI_FTSR1_FT20		(1 << 20)
/** EXTI_FTSR1_FT19 Falling trigger event configuration of line 19 **/
#define EXTI_FTSR1_FT19		(1 << 19)
/** EXTI_FTSR1_FT18 Falling trigger event configuration of line 18 **/
#define EXTI_FTSR1_FT18		(1 << 18)
/** EXTI_FTSR1_FT16 Falling trigger event configuration of line 16 **/
#define EXTI_FTSR1_FT16		(1 << 16)
/** EXTI_FTSR1_FT15 Falling trigger event configuration of line 15 **/
#define EXTI_FTSR1_FT15		(1 << 15)
/** EXTI_FTSR1_FT14 Falling trigger event configuration of line 14 **/
#define EXTI_FTSR1_FT14		(1 << 14)
/** EXTI_FTSR1_FT13 Falling trigger event configuration of line 13 **/
#define EXTI_FTSR1_FT13		(1 << 13)
/** EXTI_FTSR1_FT12 Falling trigger event configuration of line 12 **/
#define EXTI_FTSR1_FT12		(1 << 12)
/** EXTI_FTSR1_FT11 Falling trigger event configuration of line 11 **/
#define EXTI_FTSR1_FT11		(1 << 11)
/** EXTI_FTSR1_FT10 Falling trigger event configuration of line 10 **/
#define EXTI_FTSR1_FT10		(1 << 10)
/** EXTI_FTSR1_FT9 Falling trigger event configuration of line 9 **/
#define EXTI_FTSR1_FT9		(1 << 9)
/** EXTI_FTSR1_FT8 Falling trigger event configuration of line 8 **/
#define EXTI_FTSR1_FT8		(1 << 8)
/** EXTI_FTSR1_FT7 Falling trigger event configuration of line 7 **/
#define EXTI_FTSR1_FT7		(1 << 7)
/** EXTI_FTSR1_FT6 Falling trigger event configuration of line 6 **/
#define EXTI_FTSR1_FT6		(1 << 6)
/** EXTI_FTSR1_FT5 Falling trigger event configuration of line 5 **/
#define EXTI_FTSR1_FT5		(1 << 5)
/** EXTI_FTSR1_FT4 Falling trigger event configuration of line 4 **/
#define EXTI_FTSR1_FT4		(1 << 4)
/** EXTI_FTSR1_FT3 Falling trigger event configuration of line 3 **/
#define EXTI_FTSR1_FT3		(1 << 3)
/** EXTI_FTSR1_FT2 Falling trigger event configuration of line 2 **/
#define EXTI_FTSR1_FT2		(1 << 2)
/** EXTI_FTSR1_FT1 Falling trigger event configuration of line 1 **/
#define EXTI_FTSR1_FT1		(1 << 1)
/** EXTI_FTSR1_FT0 Falling trigger event configuration of line 0 **/
#define EXTI_FTSR1_FT0		(1 << 0)

/**@}*/

/** @defgroup exti_swier1 SWIER1 Software interrupt event register
@{*/

/** EXTI_SWIER1_SWI22 Software Interrupt on line 22 **/
#define EXTI_SWIER1_SWI22		(1 << 22)
/** EXTI_SWIER1_SWI21 Software Interrupt on line 21 **/
#define EXTI_SWIER1_SWI21		(1 << 21)
/** EXTI_SWIER1_SWI20 Software Interrupt on line 20 **/
#define EXTI_SWIER1_SWI20		(1 << 20)
/** EXTI_SWIER1_SWI19 Software Interrupt on line 19 **/
#define EXTI_SWIER1_SWI19		(1 << 19)
/** EXTI_SWIER1_SWI18 Software Interrupt on line 18 **/
#define EXTI_SWIER1_SWI18		(1 << 18)
/** EXTI_SWIER1_SWI16 Software Interrupt on line 16 **/
#define EXTI_SWIER1_SWI16		(1 << 16)
/** EXTI_SWIER1_SWI15 Software Interrupt on line 15 **/
#define EXTI_SWIER1_SWI15		(1 << 15)
/** EXTI_SWIER1_SWI14 Software Interrupt on line 14 **/
#define EXTI_SWIER1_SWI14		(1 << 14)
/** EXTI_SWIER1_SWI13 Software Interrupt on line 13 **/
#define EXTI_SWIER1_SWI13		(1 << 13)
/** EXTI_SWIER1_SWI12 Software Interrupt on line 12 **/
#define EXTI_SWIER1_SWI12		(1 << 12)
/** EXTI_SWIER1_SWI11 Software Interrupt on line 11 **/
#define EXTI_SWIER1_SWI11		(1 << 11)
/** EXTI_SWIER1_SWI10 Software Interrupt on line 10 **/
#define EXTI_SWIER1_SWI10		(1 << 10)
/** EXTI_SWIER1_SWI9 Software Interrupt on line 9 **/
#define EXTI_SWIER1_SWI9		(1 << 9)
/** EXTI_SWIER1_SWI8 Software Interrupt on line 8 **/
#define EXTI_SWIER1_SWI8		(1 << 8)
/** EXTI_SWIER1_SWI7 Software Interrupt on line 7 **/
#define EXTI_SWIER1_SWI7		(1 << 7)
/** EXTI_SWIER1_SWI6 Software Interrupt on line 6 **/
#define EXTI_SWIER1_SWI6		(1 << 6)
/** EXTI_SWIER1_SWI5 Software Interrupt on line 5 **/
#define EXTI_SWIER1_SWI5		(1 << 5)
/** EXTI_SWIER1_SWI4 Software Interrupt on line 4 **/
#define EXTI_SWIER1_SWI4		(1 << 4)
/** EXTI_SWIER1_SWI3 Software Interrupt on line 3 **/
#define EXTI_SWIER1_SWI3		(1 << 3)
/** EXTI_SWIER1_SWI2 Software Interrupt on line 2 **/
#define EXTI_SWIER1_SWI2		(1 << 2)
/** EXTI_SWIER1_SWI1 Software Interrupt on line 1 **/
#define EXTI_SWIER1_SWI1		(1 << 1)
/** EXTI_SWIER1_SWI0 Software Interrupt on line 0 **/
#define EXTI_SWIER1_SWI0		(1 << 0)

/**@}*/

/** @defgroup exti_pr1 PR1 Pending register
@{*/

/** EXTI_PR1_PIF22 Pending bit 22 **/
#define EXTI_PR1_PIF22		(1 << 22)
/** EXTI_PR1_PIF21 Pending bit 21 **/
#define EXTI_PR1_PIF21		(1 << 21)
/** EXTI_PR1_PIF20 Pending bit 20 **/
#define EXTI_PR1_PIF20		(1 << 20)
/** EXTI_PR1_PIF19 Pending bit 19 **/
#define EXTI_PR1_PIF19		(1 << 19)
/** EXTI_PR1_PIF18 Pending bit 18 **/
#define EXTI_PR1_PIF18		(1 << 18)
/** EXTI_PR1_PIF16 Pending bit 16 **/
#define EXTI_PR1_PIF16		(1 << 16)
/** EXTI_PR1_PIF15 Pending bit 15 **/
#define EXTI_PR1_PIF15		(1 << 15)
/** EXTI_PR1_PIF14 Pending bit 14 **/
#define EXTI_PR1_PIF14		(1 << 14)
/** EXTI_PR1_PIF13 Pending bit 13 **/
#define EXTI_PR1_PIF13		(1 << 13)
/** EXTI_PR1_PIF12 Pending bit 12 **/
#define EXTI_PR1_PIF12		(1 << 12)
/** EXTI_PR1_PIF11 Pending bit 11 **/
#define EXTI_PR1_PIF11		(1 << 11)
/** EXTI_PR1_PIF10 Pending bit 10 **/
#define EXTI_PR1_PIF10		(1 << 10)
/** EXTI_PR1_PIF9 Pending bit 9 **/
#define EXTI_PR1_PIF9		(1 << 9)
/** EXTI_PR1_PIF8 Pending bit 8 **/
#define EXTI_PR1_PIF8		(1 << 8)
/** EXTI_PR1_PIF7 Pending bit 7 **/
#define EXTI_PR1_PIF7		(1 << 7)
/** EXTI_PR1_PIF6 Pending bit 6 **/
#define EXTI_PR1_PIF6		(1 << 6)
/** EXTI_PR1_PIF5 Pending bit 5 **/
#define EXTI_PR1_PIF5		(1 << 5)
/** EXTI_PR1_PIF4 Pending bit 4 **/
#define EXTI_PR1_PIF4		(1 << 4)
/** EXTI_PR1_PIF3 Pending bit 3 **/
#define EXTI_PR1_PIF3		(1 << 3)
/** EXTI_PR1_PIF2 Pending bit 2 **/
#define EXTI_PR1_PIF2		(1 << 2)
/** EXTI_PR1_PIF1 Pending bit 1 **/
#define EXTI_PR1_PIF1		(1 << 1)
/** EXTI_PR1_PIF0 Pending bit 0 **/
#define EXTI_PR1_PIF0		(1 << 0)

/**@}*/

/** @defgroup exti_imr2 IMR2 Interrupt mask register
@{*/

/** EXTI_IMR2_IM43 Interrupt Mask on external/internal line 43 **/
#define EXTI_IMR2_IM43		(1 << 11)
/** EXTI_IMR2_IM42 Interrupt Mask on external/internal line 42 **/
#define EXTI_IMR2_IM42		(1 << 10)
/** EXTI_IMR2_IM41 Interrupt Mask on external/internal line 41 **/
#define EXTI_IMR2_IM41		(1 << 9)
/** EXTI_IMR2_IM40 Interrupt Mask on external/internal line 40 **/
#define EXTI_IMR2_IM40		(1 << 8)
/** EXTI_IMR2_IM39 Interrupt Mask on external/internal line 39 **/
#define EXTI_IMR2_IM39		(1 << 7)
/** EXTI_IMR2_IM38 Interrupt Mask on external/internal line 38 **/
#define EXTI_IMR2_IM38		(1 << 6)
/** EXTI_IMR2_IM37 Interrupt Mask on external/internal line 37 **/
#define EXTI_IMR2_IM37		(1 << 5)
/** EXTI_IMR2_IM36 Interrupt Mask on external/internal line 36 **/
#define EXTI_IMR2_IM36		(1 << 4)
/** EXTI_IMR2_IM35 Interrupt Mask on external/internal line 35 **/
#define EXTI_IMR2_IM35		(1 << 3)
/** EXTI_IMR2_IM34 Interrupt Mask on external/internal line 34 **/
#define EXTI_IMR2_IM34		(1 << 2)
/** EXTI_IMR2_IM33 Interrupt Mask on external/internal line 33 **/
#define EXTI_IMR2_IM33		(1 << 1)
/** EXTI_IMR2_IM32 Interrupt Mask on external/internal line 32 **/
#define EXTI_IMR2_IM32		(1 << 0)

/**@}*/

/** @defgroup exti_emr2 EMR2 Event mask register
@{*/

/** EXTI_EMR2_EM40 Event mask on external/internal line 40 **/
#define EXTI_EMR2_EM40		(1 << 8)
/** EXTI_EMR2_EM39 Event mask on external/internal line 39 **/
#define EXTI_EMR2_EM39		(1 << 7)
/** EXTI_EMR2_EM38 Event mask on external/internal line 38 **/
#define EXTI_EMR2_EM38		(1 << 6)
/** EXTI_EMR2_EM37 Event mask on external/internal line 37 **/
#define EXTI_EMR2_EM37		(1 << 5)
/** EXTI_EMR2_EM36 Event mask on external/internal line 36 **/
#define EXTI_EMR2_EM36		(1 << 4)
/** EXTI_EMR2_EM35 Event mask on external/internal line 35 **/
#define EXTI_EMR2_EM35		(1 << 3)
/** EXTI_EMR2_EM34 Event mask on external/internal line 34 **/
#define EXTI_EMR2_EM34		(1 << 2)
/** EXTI_EMR2_EM33 Event mask on external/internal line 33 **/
#define EXTI_EMR2_EM33		(1 << 1)
/** EXTI_EMR2_EM32 Event mask on external/internal line 32 **/
#define EXTI_EMR2_EM32		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr2 RTSR2 Rising Trigger selection register
@{*/

/** EXTI_RTSR2_RT41 Rising trigger event configuration bit of line 41 **/
#define EXTI_RTSR2_RT41		(1 << 9)
/** EXTI_RTSR2_RT40 Rising trigger event configuration bit of line 40 **/
#define EXTI_RTSR2_RT40		(1 << 8)
/** EXTI_RTSR2_RT39 Rising trigger event configuration bit of line 39 **/
#define EXTI_RTSR2_RT39		(1 << 7)
/** EXTI_RTSR2_RT38 Rising trigger event configuration bit of line 38 **/
#define EXTI_RTSR2_RT38		(1 << 6)
/** EXTI_RTSR2_RT33 Rising trigger event configuration bit of line 32 **/
#define EXTI_RTSR2_RT33		(1 << 1)
/** EXTI_RTSR2_RT32 Rising trigger event configuration bit of line 32 **/
#define EXTI_RTSR2_RT32		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr2 FTSR2 Falling Trigger selection register
@{*/

/** EXTI_FTSR2_FT38 Falling trigger event configuration bit of line 38 **/
#define EXTI_FTSR2_FT38		(1 << 6)
/** EXTI_FTSR2_FT37 Falling trigger event configuration bit of line 37 **/
#define EXTI_FTSR2_FT37		(1 << 5)
/** EXTI_FTSR2_FT36 Falling trigger event configuration bit of line 36 **/
#define EXTI_FTSR2_FT36		(1 << 4)
/** EXTI_FTSR2_FT35 Falling trigger event configuration bit of line 35 **/
#define EXTI_FTSR2_FT35		(1 << 3)

/**@}*/

/** @defgroup exti_swier2 SWIER2 Software interrupt event register
@{*/

/** EXTI_SWIER2_SWI38 Software interrupt on line 38 **/
#define EXTI_SWIER2_SWI38		(1 << 6)
/** EXTI_SWIER2_SWI37 Software interrupt on line 37 **/
#define EXTI_SWIER2_SWI37		(1 << 5)
/** EXTI_SWIER2_SWI36 Software interrupt on line 36 **/
#define EXTI_SWIER2_SWI36		(1 << 4)
/** EXTI_SWIER2_SWI35 Software interrupt on line 35 **/
#define EXTI_SWIER2_SWI35		(1 << 3)

/**@}*/

/** @defgroup exti_pr2 PR2 Pending register
@{*/

/** EXTI_PR2_PIF38 Pending interrupt flag on line 38 **/
#define EXTI_PR2_PIF38		(1 << 6)
/** EXTI_PR2_PIF37 Pending interrupt flag on line 37 **/
#define EXTI_PR2_PIF37		(1 << 5)
/** EXTI_PR2_PIF36 Pending interrupt flag on line 36 **/
#define EXTI_PR2_PIF36		(1 << 4)
/** EXTI_PR2_PIF35 Pending interrupt flag on line 35 **/
#define EXTI_PR2_PIF35		(1 << 3)

/**@}*/

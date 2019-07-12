#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event
      controller Register
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
#define EXTI_IMR2			MMIO32(EXTI_BASE + 0x18)
/** EXTI_EMR2 Event mask register **/
#define EXTI_EMR2			MMIO32(EXTI_BASE + 0x1c)
/** EXTI_RTSR2 Rising Trigger selection register **/
#define EXTI_RTSR2			MMIO32(EXTI_BASE + 0x20)
/** EXTI_FTSR2 Falling Trigger selection register **/
#define EXTI_FTSR2			MMIO32(EXTI_BASE + 0x24)
/** EXTI_SWIER2 Software interrupt event register **/
#define EXTI_SWIER2			MMIO32(EXTI_BASE + 0x28)
/** EXTI_PR2 Pending register **/
#define EXTI_PR2			MMIO32(EXTI_BASE + 0x2c)

/**@}*/


/** @defgroup exti_imr1 IMR1 Interrupt mask register
@{*/

/** EXTI_IMR1_MR31 Interrupt Mask on line 31 **/
#define EXTI_IMR1_MR31		(1 << 31)
/** EXTI_IMR1_MR30 Interrupt Mask on line 30 **/
#define EXTI_IMR1_MR30		(1 << 30)
/** EXTI_IMR1_MR29 Interrupt Mask on line 29 **/
#define EXTI_IMR1_MR29		(1 << 29)
/** EXTI_IMR1_MR28 Interrupt Mask on line 28 **/
#define EXTI_IMR1_MR28		(1 << 28)
/** EXTI_IMR1_MR27 Interrupt Mask on line 27 **/
#define EXTI_IMR1_MR27		(1 << 27)
/** EXTI_IMR1_MR26 Interrupt Mask on line 26 **/
#define EXTI_IMR1_MR26		(1 << 26)
/** EXTI_IMR1_MR25 Interrupt Mask on line 25 **/
#define EXTI_IMR1_MR25		(1 << 25)
/** EXTI_IMR1_MR24 Interrupt Mask on line 24 **/
#define EXTI_IMR1_MR24		(1 << 24)
/** EXTI_IMR1_MR23 Interrupt Mask on line 23 **/
#define EXTI_IMR1_MR23		(1 << 23)
/** EXTI_IMR1_MR22 Interrupt Mask on line 22 **/
#define EXTI_IMR1_MR22		(1 << 22)
/** EXTI_IMR1_MR21 Interrupt Mask on line 21 **/
#define EXTI_IMR1_MR21		(1 << 21)
/** EXTI_IMR1_MR20 Interrupt Mask on line 20 **/
#define EXTI_IMR1_MR20		(1 << 20)
/** EXTI_IMR1_MR19 Interrupt Mask on line 19 **/
#define EXTI_IMR1_MR19		(1 << 19)
/** EXTI_IMR1_MR18 Interrupt Mask on line 18 **/
#define EXTI_IMR1_MR18		(1 << 18)
/** EXTI_IMR1_MR17 Interrupt Mask on line 17 **/
#define EXTI_IMR1_MR17		(1 << 17)
/** EXTI_IMR1_MR16 Interrupt Mask on line 16 **/
#define EXTI_IMR1_MR16		(1 << 16)
/** EXTI_IMR1_MR15 Interrupt Mask on line 15 **/
#define EXTI_IMR1_MR15		(1 << 15)
/** EXTI_IMR1_MR14 Interrupt Mask on line 14 **/
#define EXTI_IMR1_MR14		(1 << 14)
/** EXTI_IMR1_MR13 Interrupt Mask on line 13 **/
#define EXTI_IMR1_MR13		(1 << 13)
/** EXTI_IMR1_MR12 Interrupt Mask on line 12 **/
#define EXTI_IMR1_MR12		(1 << 12)
/** EXTI_IMR1_MR11 Interrupt Mask on line 11 **/
#define EXTI_IMR1_MR11		(1 << 11)
/** EXTI_IMR1_MR10 Interrupt Mask on line 10 **/
#define EXTI_IMR1_MR10		(1 << 10)
/** EXTI_IMR1_MR9 Interrupt Mask on line 9 **/
#define EXTI_IMR1_MR9		(1 << 9)
/** EXTI_IMR1_MR8 Interrupt Mask on line 8 **/
#define EXTI_IMR1_MR8		(1 << 8)
/** EXTI_IMR1_MR7 Interrupt Mask on line 7 **/
#define EXTI_IMR1_MR7		(1 << 7)
/** EXTI_IMR1_MR6 Interrupt Mask on line 6 **/
#define EXTI_IMR1_MR6		(1 << 6)
/** EXTI_IMR1_MR5 Interrupt Mask on line 5 **/
#define EXTI_IMR1_MR5		(1 << 5)
/** EXTI_IMR1_MR4 Interrupt Mask on line 4 **/
#define EXTI_IMR1_MR4		(1 << 4)
/** EXTI_IMR1_MR3 Interrupt Mask on line 3 **/
#define EXTI_IMR1_MR3		(1 << 3)
/** EXTI_IMR1_MR2 Interrupt Mask on line 2 **/
#define EXTI_IMR1_MR2		(1 << 2)
/** EXTI_IMR1_MR1 Interrupt Mask on line 1 **/
#define EXTI_IMR1_MR1		(1 << 1)
/** EXTI_IMR1_MR0 Interrupt Mask on line 0 **/
#define EXTI_IMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_emr1 EMR1 Event mask register
@{*/

/** EXTI_EMR1_MR31 Event Mask on line 31 **/
#define EXTI_EMR1_MR31		(1 << 31)
/** EXTI_EMR1_MR30 Event Mask on line 30 **/
#define EXTI_EMR1_MR30		(1 << 30)
/** EXTI_EMR1_MR29 Event Mask on line 29 **/
#define EXTI_EMR1_MR29		(1 << 29)
/** EXTI_EMR1_MR28 Event Mask on line 28 **/
#define EXTI_EMR1_MR28		(1 << 28)
/** EXTI_EMR1_MR27 Event Mask on line 27 **/
#define EXTI_EMR1_MR27		(1 << 27)
/** EXTI_EMR1_MR26 Event Mask on line 26 **/
#define EXTI_EMR1_MR26		(1 << 26)
/** EXTI_EMR1_MR25 Event Mask on line 25 **/
#define EXTI_EMR1_MR25		(1 << 25)
/** EXTI_EMR1_MR24 Event Mask on line 24 **/
#define EXTI_EMR1_MR24		(1 << 24)
/** EXTI_EMR1_MR23 Event Mask on line 23 **/
#define EXTI_EMR1_MR23		(1 << 23)
/** EXTI_EMR1_MR22 Event Mask on line 22 **/
#define EXTI_EMR1_MR22		(1 << 22)
/** EXTI_EMR1_MR21 Event Mask on line 21 **/
#define EXTI_EMR1_MR21		(1 << 21)
/** EXTI_EMR1_MR20 Event Mask on line 20 **/
#define EXTI_EMR1_MR20		(1 << 20)
/** EXTI_EMR1_MR19 Event Mask on line 19 **/
#define EXTI_EMR1_MR19		(1 << 19)
/** EXTI_EMR1_MR18 Event Mask on line 18 **/
#define EXTI_EMR1_MR18		(1 << 18)
/** EXTI_EMR1_MR17 Event Mask on line 17 **/
#define EXTI_EMR1_MR17		(1 << 17)
/** EXTI_EMR1_MR16 Event Mask on line 16 **/
#define EXTI_EMR1_MR16		(1 << 16)
/** EXTI_EMR1_MR15 Event Mask on line 15 **/
#define EXTI_EMR1_MR15		(1 << 15)
/** EXTI_EMR1_MR14 Event Mask on line 14 **/
#define EXTI_EMR1_MR14		(1 << 14)
/** EXTI_EMR1_MR13 Event Mask on line 13 **/
#define EXTI_EMR1_MR13		(1 << 13)
/** EXTI_EMR1_MR12 Event Mask on line 12 **/
#define EXTI_EMR1_MR12		(1 << 12)
/** EXTI_EMR1_MR11 Event Mask on line 11 **/
#define EXTI_EMR1_MR11		(1 << 11)
/** EXTI_EMR1_MR10 Event Mask on line 10 **/
#define EXTI_EMR1_MR10		(1 << 10)
/** EXTI_EMR1_MR9 Event Mask on line 9 **/
#define EXTI_EMR1_MR9		(1 << 9)
/** EXTI_EMR1_MR8 Event Mask on line 8 **/
#define EXTI_EMR1_MR8		(1 << 8)
/** EXTI_EMR1_MR7 Event Mask on line 7 **/
#define EXTI_EMR1_MR7		(1 << 7)
/** EXTI_EMR1_MR6 Event Mask on line 6 **/
#define EXTI_EMR1_MR6		(1 << 6)
/** EXTI_EMR1_MR5 Event Mask on line 5 **/
#define EXTI_EMR1_MR5		(1 << 5)
/** EXTI_EMR1_MR4 Event Mask on line 4 **/
#define EXTI_EMR1_MR4		(1 << 4)
/** EXTI_EMR1_MR3 Event Mask on line 3 **/
#define EXTI_EMR1_MR3		(1 << 3)
/** EXTI_EMR1_MR2 Event Mask on line 2 **/
#define EXTI_EMR1_MR2		(1 << 2)
/** EXTI_EMR1_MR1 Event Mask on line 1 **/
#define EXTI_EMR1_MR1		(1 << 1)
/** EXTI_EMR1_MR0 Event Mask on line 0 **/
#define EXTI_EMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr1 RTSR1 Rising Trigger selection register
@{*/

/** EXTI_RTSR1_TR31 Rising trigger event configuration of line 31 **/
#define EXTI_RTSR1_TR31		(1 << 31)
/** EXTI_RTSR1_TR30 Rising trigger event configuration of line 30 **/
#define EXTI_RTSR1_TR30		(1 << 30)
/** EXTI_RTSR1_TR29 Rising trigger event configuration of line 29 **/
#define EXTI_RTSR1_TR29		(1 << 29)
/** EXTI_RTSR1_TR22 Rising trigger event configuration of line 22 **/
#define EXTI_RTSR1_TR22		(1 << 22)
/** EXTI_RTSR1_TR21 Rising trigger event configuration of line 21 **/
#define EXTI_RTSR1_TR21		(1 << 21)
/** EXTI_RTSR1_TR20 Rising trigger event configuration of line 20 **/
#define EXTI_RTSR1_TR20		(1 << 20)
/** EXTI_RTSR1_TR19 Rising trigger event configuration of line 19 **/
#define EXTI_RTSR1_TR19		(1 << 19)
/** EXTI_RTSR1_TR18 Rising trigger event configuration of line 18 **/
#define EXTI_RTSR1_TR18		(1 << 18)
/** EXTI_RTSR1_TR17 Rising trigger event configuration of line 17 **/
#define EXTI_RTSR1_TR17		(1 << 17)
/** EXTI_RTSR1_TR16 Rising trigger event configuration of line 16 **/
#define EXTI_RTSR1_TR16		(1 << 16)
/** EXTI_RTSR1_TR15 Rising trigger event configuration of line 15 **/
#define EXTI_RTSR1_TR15		(1 << 15)
/** EXTI_RTSR1_TR14 Rising trigger event configuration of line 14 **/
#define EXTI_RTSR1_TR14		(1 << 14)
/** EXTI_RTSR1_TR13 Rising trigger event configuration of line 13 **/
#define EXTI_RTSR1_TR13		(1 << 13)
/** EXTI_RTSR1_TR12 Rising trigger event configuration of line 12 **/
#define EXTI_RTSR1_TR12		(1 << 12)
/** EXTI_RTSR1_TR11 Rising trigger event configuration of line 11 **/
#define EXTI_RTSR1_TR11		(1 << 11)
/** EXTI_RTSR1_TR10 Rising trigger event configuration of line 10 **/
#define EXTI_RTSR1_TR10		(1 << 10)
/** EXTI_RTSR1_TR9 Rising trigger event configuration of line 9 **/
#define EXTI_RTSR1_TR9		(1 << 9)
/** EXTI_RTSR1_TR8 Rising trigger event configuration of line 8 **/
#define EXTI_RTSR1_TR8		(1 << 8)
/** EXTI_RTSR1_TR7 Rising trigger event configuration of line 7 **/
#define EXTI_RTSR1_TR7		(1 << 7)
/** EXTI_RTSR1_TR6 Rising trigger event configuration of line 6 **/
#define EXTI_RTSR1_TR6		(1 << 6)
/** EXTI_RTSR1_TR5 Rising trigger event configuration of line 5 **/
#define EXTI_RTSR1_TR5		(1 << 5)
/** EXTI_RTSR1_TR4 Rising trigger event configuration of line 4 **/
#define EXTI_RTSR1_TR4		(1 << 4)
/** EXTI_RTSR1_TR3 Rising trigger event configuration of line 3 **/
#define EXTI_RTSR1_TR3		(1 << 3)
/** EXTI_RTSR1_TR2 Rising trigger event configuration of line 2 **/
#define EXTI_RTSR1_TR2		(1 << 2)
/** EXTI_RTSR1_TR1 Rising trigger event configuration of line 1 **/
#define EXTI_RTSR1_TR1		(1 << 1)
/** EXTI_RTSR1_TR0 Rising trigger event configuration of line 0 **/
#define EXTI_RTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr1 FTSR1 Falling Trigger selection register
@{*/

/** EXTI_FTSR1_TR31 Falling trigger event configuration of line 31 **/
#define EXTI_FTSR1_TR31		(1 << 31)
/** EXTI_FTSR1_TR30 Falling trigger event configuration of line 30. **/
#define EXTI_FTSR1_TR30		(1 << 30)
/** EXTI_FTSR1_TR29 Falling trigger event configuration of line 29 **/
#define EXTI_FTSR1_TR29		(1 << 29)
/** EXTI_FTSR1_TR22 Falling trigger event configuration of line 22 **/
#define EXTI_FTSR1_TR22		(1 << 22)
/** EXTI_FTSR1_TR21 Falling trigger event configuration of line 21 **/
#define EXTI_FTSR1_TR21		(1 << 21)
/** EXTI_FTSR1_TR20 Falling trigger event configuration of line 20 **/
#define EXTI_FTSR1_TR20		(1 << 20)
/** EXTI_FTSR1_TR19 Falling trigger event configuration of line 19 **/
#define EXTI_FTSR1_TR19		(1 << 19)
/** EXTI_FTSR1_TR18 Falling trigger event configuration of line 18 **/
#define EXTI_FTSR1_TR18		(1 << 18)
/** EXTI_FTSR1_TR17 Falling trigger event configuration of line 17 **/
#define EXTI_FTSR1_TR17		(1 << 17)
/** EXTI_FTSR1_TR16 Falling trigger event configuration of line 16 **/
#define EXTI_FTSR1_TR16		(1 << 16)
/** EXTI_FTSR1_TR15 Falling trigger event configuration of line 15 **/
#define EXTI_FTSR1_TR15		(1 << 15)
/** EXTI_FTSR1_TR14 Falling trigger event configuration of line 14 **/
#define EXTI_FTSR1_TR14		(1 << 14)
/** EXTI_FTSR1_TR13 Falling trigger event configuration of line 13 **/
#define EXTI_FTSR1_TR13		(1 << 13)
/** EXTI_FTSR1_TR12 Falling trigger event configuration of line 12 **/
#define EXTI_FTSR1_TR12		(1 << 12)
/** EXTI_FTSR1_TR11 Falling trigger event configuration of line 11 **/
#define EXTI_FTSR1_TR11		(1 << 11)
/** EXTI_FTSR1_TR10 Falling trigger event configuration of line 10 **/
#define EXTI_FTSR1_TR10		(1 << 10)
/** EXTI_FTSR1_TR9 Falling trigger event configuration of line 9 **/
#define EXTI_FTSR1_TR9		(1 << 9)
/** EXTI_FTSR1_TR8 Falling trigger event configuration of line 8 **/
#define EXTI_FTSR1_TR8		(1 << 8)
/** EXTI_FTSR1_TR7 Falling trigger event configuration of line 7 **/
#define EXTI_FTSR1_TR7		(1 << 7)
/** EXTI_FTSR1_TR6 Falling trigger event configuration of line 6 **/
#define EXTI_FTSR1_TR6		(1 << 6)
/** EXTI_FTSR1_TR5 Falling trigger event configuration of line 5 **/
#define EXTI_FTSR1_TR5		(1 << 5)
/** EXTI_FTSR1_TR4 Falling trigger event configuration of line 4 **/
#define EXTI_FTSR1_TR4		(1 << 4)
/** EXTI_FTSR1_TR3 Falling trigger event configuration of line 3 **/
#define EXTI_FTSR1_TR3		(1 << 3)
/** EXTI_FTSR1_TR2 Falling trigger event configuration of line 2 **/
#define EXTI_FTSR1_TR2		(1 << 2)
/** EXTI_FTSR1_TR1 Falling trigger event configuration of line 1 **/
#define EXTI_FTSR1_TR1		(1 << 1)
/** EXTI_FTSR1_TR0 Falling trigger event configuration of line 0 **/
#define EXTI_FTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_swier1 SWIER1 Software interrupt event register
@{*/

/** EXTI_SWIER1_SWIER31 Software Interrupt on line 319 **/
#define EXTI_SWIER1_SWIER31		(1 << 31)
/** EXTI_SWIER1_SWIER30 Software Interrupt on line 309 **/
#define EXTI_SWIER1_SWIER30		(1 << 30)
/** EXTI_SWIER1_SWIER29 Software Interrupt on line 29 **/
#define EXTI_SWIER1_SWIER29		(1 << 29)
/** EXTI_SWIER1_SWIER22 Software Interrupt on line 22 **/
#define EXTI_SWIER1_SWIER22		(1 << 22)
/** EXTI_SWIER1_SWIER21 Software Interrupt on line 21 **/
#define EXTI_SWIER1_SWIER21		(1 << 21)
/** EXTI_SWIER1_SWIER20 Software Interrupt on line 20 **/
#define EXTI_SWIER1_SWIER20		(1 << 20)
/** EXTI_SWIER1_SWIER19 Software Interrupt on line 19 **/
#define EXTI_SWIER1_SWIER19		(1 << 19)
/** EXTI_SWIER1_SWIER18 Software Interrupt on line 18 **/
#define EXTI_SWIER1_SWIER18		(1 << 18)
/** EXTI_SWIER1_SWIER17 Software Interrupt on line 17 **/
#define EXTI_SWIER1_SWIER17		(1 << 17)
/** EXTI_SWIER1_SWIER16 Software Interrupt on line 16 **/
#define EXTI_SWIER1_SWIER16		(1 << 16)
/** EXTI_SWIER1_SWIER15 Software Interrupt on line 15 **/
#define EXTI_SWIER1_SWIER15		(1 << 15)
/** EXTI_SWIER1_SWIER14 Software Interrupt on line 14 **/
#define EXTI_SWIER1_SWIER14		(1 << 14)
/** EXTI_SWIER1_SWIER13 Software Interrupt on line 13 **/
#define EXTI_SWIER1_SWIER13		(1 << 13)
/** EXTI_SWIER1_SWIER12 Software Interrupt on line 12 **/
#define EXTI_SWIER1_SWIER12		(1 << 12)
/** EXTI_SWIER1_SWIER11 Software Interrupt on line 11 **/
#define EXTI_SWIER1_SWIER11		(1 << 11)
/** EXTI_SWIER1_SWIER10 Software Interrupt on line 10 **/
#define EXTI_SWIER1_SWIER10		(1 << 10)
/** EXTI_SWIER1_SWIER9 Software Interrupt on line 9 **/
#define EXTI_SWIER1_SWIER9		(1 << 9)
/** EXTI_SWIER1_SWIER8 Software Interrupt on line 8 **/
#define EXTI_SWIER1_SWIER8		(1 << 8)
/** EXTI_SWIER1_SWIER7 Software Interrupt on line 7 **/
#define EXTI_SWIER1_SWIER7		(1 << 7)
/** EXTI_SWIER1_SWIER6 Software Interrupt on line 6 **/
#define EXTI_SWIER1_SWIER6		(1 << 6)
/** EXTI_SWIER1_SWIER5 Software Interrupt on line 5 **/
#define EXTI_SWIER1_SWIER5		(1 << 5)
/** EXTI_SWIER1_SWIER4 Software Interrupt on line 4 **/
#define EXTI_SWIER1_SWIER4		(1 << 4)
/** EXTI_SWIER1_SWIER3 Software Interrupt on line 3 **/
#define EXTI_SWIER1_SWIER3		(1 << 3)
/** EXTI_SWIER1_SWIER2 Software Interrupt on line 2 **/
#define EXTI_SWIER1_SWIER2		(1 << 2)
/** EXTI_SWIER1_SWIER1 Software Interrupt on line 1 **/
#define EXTI_SWIER1_SWIER1		(1 << 1)
/** EXTI_SWIER1_SWIER0 Software Interrupt on line 0 **/
#define EXTI_SWIER1_SWIER0		(1 << 0)

/**@}*/

/** @defgroup exti_pr1 PR1 Pending register
@{*/

/** EXTI_PR1_PR31 Pending bit 31 **/
#define EXTI_PR1_PR31		(1 << 31)
/** EXTI_PR1_PR30 Pending bit 30 **/
#define EXTI_PR1_PR30		(1 << 30)
/** EXTI_PR1_PR29 Pending bit 29 **/
#define EXTI_PR1_PR29		(1 << 29)
/** EXTI_PR1_PR22 Pending bit 22 **/
#define EXTI_PR1_PR22		(1 << 22)
/** EXTI_PR1_PR21 Pending bit 21 **/
#define EXTI_PR1_PR21		(1 << 21)
/** EXTI_PR1_PR20 Pending bit 20 **/
#define EXTI_PR1_PR20		(1 << 20)
/** EXTI_PR1_PR19 Pending bit 19 **/
#define EXTI_PR1_PR19		(1 << 19)
/** EXTI_PR1_PR18 Pending bit 18 **/
#define EXTI_PR1_PR18		(1 << 18)
/** EXTI_PR1_PR17 Pending bit 17 **/
#define EXTI_PR1_PR17		(1 << 17)
/** EXTI_PR1_PR16 Pending bit 16 **/
#define EXTI_PR1_PR16		(1 << 16)
/** EXTI_PR1_PR15 Pending bit 15 **/
#define EXTI_PR1_PR15		(1 << 15)
/** EXTI_PR1_PR14 Pending bit 14 **/
#define EXTI_PR1_PR14		(1 << 14)
/** EXTI_PR1_PR13 Pending bit 13 **/
#define EXTI_PR1_PR13		(1 << 13)
/** EXTI_PR1_PR12 Pending bit 12 **/
#define EXTI_PR1_PR12		(1 << 12)
/** EXTI_PR1_PR11 Pending bit 11 **/
#define EXTI_PR1_PR11		(1 << 11)
/** EXTI_PR1_PR10 Pending bit 10 **/
#define EXTI_PR1_PR10		(1 << 10)
/** EXTI_PR1_PR9 Pending bit 9 **/
#define EXTI_PR1_PR9		(1 << 9)
/** EXTI_PR1_PR8 Pending bit 8 **/
#define EXTI_PR1_PR8		(1 << 8)
/** EXTI_PR1_PR7 Pending bit 7 **/
#define EXTI_PR1_PR7		(1 << 7)
/** EXTI_PR1_PR6 Pending bit 6 **/
#define EXTI_PR1_PR6		(1 << 6)
/** EXTI_PR1_PR5 Pending bit 5 **/
#define EXTI_PR1_PR5		(1 << 5)
/** EXTI_PR1_PR4 Pending bit 4 **/
#define EXTI_PR1_PR4		(1 << 4)
/** EXTI_PR1_PR3 Pending bit 3 **/
#define EXTI_PR1_PR3		(1 << 3)
/** EXTI_PR1_PR2 Pending bit 2 **/
#define EXTI_PR1_PR2		(1 << 2)
/** EXTI_PR1_PR1 Pending bit 1 **/
#define EXTI_PR1_PR1		(1 << 1)
/** EXTI_PR1_PR0 Pending bit 0 **/
#define EXTI_PR1_PR0		(1 << 0)

/**@}*/

/** @defgroup exti_imr2 IMR2 Interrupt mask register
@{*/

/** EXTI_IMR2_MR35 Interrupt Mask on external/internal line 35 **/
#define EXTI_IMR2_MR35		(1 << 3)
/** EXTI_IMR2_MR34 Interrupt Mask on external/internal line 34 **/
#define EXTI_IMR2_MR34		(1 << 2)
/** EXTI_IMR2_MR33 Interrupt Mask on external/internal line 33 **/
#define EXTI_IMR2_MR33		(1 << 1)
/** EXTI_IMR2_MR32 Interrupt Mask on external/internal line 32 **/
#define EXTI_IMR2_MR32		(1 << 0)

/**@}*/

/** @defgroup exti_emr2 EMR2 Event mask register
@{*/

/** EXTI_EMR2_MR35 Event mask on external/internal line 35 **/
#define EXTI_EMR2_MR35		(1 << 3)
/** EXTI_EMR2_MR34 Event mask on external/internal line 34 **/
#define EXTI_EMR2_MR34		(1 << 2)
/** EXTI_EMR2_MR33 Event mask on external/internal line 33 **/
#define EXTI_EMR2_MR33		(1 << 1)
/** EXTI_EMR2_MR32 Event mask on external/internal line 32 **/
#define EXTI_EMR2_MR32		(1 << 0)

/**@}*/

/** @defgroup exti_rtsr2 RTSR2 Rising Trigger selection register
@{*/

/** EXTI_RTSR2_TR33 Rising trigger event configuration bit of line 33 **/
#define EXTI_RTSR2_TR33		(1 << 1)
/** EXTI_RTSR2_TR32 Rising trigger event configuration bit of line 32 **/
#define EXTI_RTSR2_TR32		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr2 FTSR2 Falling Trigger selection register
@{*/

/** EXTI_FTSR2_TR33 Falling trigger event configuration bit of line 33 **/
#define EXTI_FTSR2_TR33		(1 << 1)
/** EXTI_FTSR2_TR32 Falling trigger event configuration bit of line 32 **/
#define EXTI_FTSR2_TR32		(1 << 0)

/**@}*/

/** @defgroup exti_swier2 SWIER2 Software interrupt event register
@{*/

/** EXTI_SWIER2_SWIER33 Software interrupt on line 33 **/
#define EXTI_SWIER2_SWIER33		(1 << 1)
/** EXTI_SWIER2_SWIER32 Software interrupt on line 32 **/
#define EXTI_SWIER2_SWIER32		(1 << 0)

/**@}*/

/** @defgroup exti_pr2 PR2 Pending register
@{*/

/** EXTI_PR2_PR33 Pending bit on line 33 **/
#define EXTI_PR2_PR33		(1 << 1)
/** EXTI_PR2_PR32 Pending bit on line 32 **/
#define EXTI_PR2_PR32		(1 << 0)

/**@}*/

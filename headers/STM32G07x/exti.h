#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event
      controller Register
@{*/

/** EXTI_RTSR1 EXTI rising trigger selection register **/
#define EXTI_RTSR1			MMIO32(EXTI_BASE + 0x00)
/** EXTI_FTSR1 EXTI falling trigger selection register **/
#define EXTI_FTSR1			MMIO32(EXTI_BASE + 0x04)
/** EXTI_SWIER1 EXTI software interrupt event register **/
#define EXTI_SWIER1			MMIO32(EXTI_BASE + 0x08)
/** EXTI_RPR1 EXTI rising edge pending register **/
#define EXTI_RPR1			MMIO32(EXTI_BASE + 0x0c)
/** EXTI_FPR1 EXTI falling edge pending register **/
#define EXTI_FPR1			MMIO32(EXTI_BASE + 0x10)
/** EXTI_EXTICR1 EXTI external interrupt selection register **/
#define EXTI_EXTICR1			MMIO32(EXTI_BASE + 0x60)
/** EXTI_EXTICR2 EXTI external interrupt selection register **/
#define EXTI_EXTICR2			MMIO32(EXTI_BASE + 0x64)
/** EXTI_EXTICR3 EXTI external interrupt selection register **/
#define EXTI_EXTICR3			MMIO32(EXTI_BASE + 0x68)
/** EXTI_EXTICR4 EXTI external interrupt selection register **/
#define EXTI_EXTICR4			MMIO32(EXTI_BASE + 0x6c)
/** EXTI_IMR1 EXTI CPU wakeup with interrupt mask register **/
#define EXTI_IMR1			MMIO32(EXTI_BASE + 0x80)
/** EXTI_EMR1 EXTI CPU wakeup with event mask register **/
#define EXTI_EMR1			MMIO32(EXTI_BASE + 0x80)
/** EXTI_IMR2 EXTI CPU wakeup with interrupt mask register **/
#define EXTI_IMR2			MMIO32(EXTI_BASE + 0x90)
/** EXTI_EMR2 EXTI CPU wakeup with event mask register **/
#define EXTI_EMR2			MMIO32(EXTI_BASE + 0x94)
/** EXTI_HWCFGR7 Hardware configuration registers **/
#define EXTI_HWCFGR7			MMIO32(EXTI_BASE + 0x3d8)
/** EXTI_HWCFGR6 Hardware configuration registers **/
#define EXTI_HWCFGR6			MMIO32(EXTI_BASE + 0x3dc)
/** EXTI_HWCFGR5 Hardware configuration registers **/
#define EXTI_HWCFGR5			MMIO32(EXTI_BASE + 0x3e0)
/** EXTI_HWCFGR4 Hardware configuration registers **/
#define EXTI_HWCFGR4			MMIO32(EXTI_BASE + 0x3e4)
/** EXTI_HWCFGR3 Hardware configuration registers **/
#define EXTI_HWCFGR3			MMIO32(EXTI_BASE + 0x3e8)
/** EXTI_HWCFGR2 Hardware configuration registers **/
#define EXTI_HWCFGR2			MMIO32(EXTI_BASE + 0x3ec)
/** EXTI_HWCFGR1 Hardware configuration registers **/
#define EXTI_HWCFGR1			MMIO32(EXTI_BASE + 0x3f0)
/** EXTI_VERR AES version register **/
#define EXTI_VERR			MMIO32(EXTI_BASE + 0x3f4)
/** EXTI_IPIDR AES identification register **/
#define EXTI_IPIDR			MMIO32(EXTI_BASE + 0x3f8)
/** EXTI_SIDR AES size ID register **/
#define EXTI_SIDR			MMIO32(EXTI_BASE + 0x3fc)

/**@}*/


/** @defgroup exti_rtsr1 RTSR1 EXTI rising trigger selection register
@{*/

/** EXTI_RTSR1_TR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR18		(1 << 18)
/** EXTI_RTSR1_TR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR17		(1 << 17)
/** EXTI_RTSR1_TR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR16		(1 << 16)
/** EXTI_RTSR1_TR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR15		(1 << 15)
/** EXTI_RTSR1_TR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR14		(1 << 14)
/** EXTI_RTSR1_TR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR13		(1 << 13)
/** EXTI_RTSR1_TR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR12		(1 << 12)
/** EXTI_RTSR1_TR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR11		(1 << 11)
/** EXTI_RTSR1_TR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR10		(1 << 10)
/** EXTI_RTSR1_TR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR9		(1 << 9)
/** EXTI_RTSR1_TR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR8		(1 << 8)
/** EXTI_RTSR1_TR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR7		(1 << 7)
/** EXTI_RTSR1_TR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR6		(1 << 6)
/** EXTI_RTSR1_TR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR5		(1 << 5)
/** EXTI_RTSR1_TR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR4		(1 << 4)
/** EXTI_RTSR1_TR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR3		(1 << 3)
/** EXTI_RTSR1_TR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR2		(1 << 2)
/** EXTI_RTSR1_TR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR1		(1 << 1)
/** EXTI_RTSR1_TR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr1 FTSR1 EXTI falling trigger selection register
@{*/

/** EXTI_FTSR1_TR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR18		(1 << 18)
/** EXTI_FTSR1_TR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR17		(1 << 17)
/** EXTI_FTSR1_TR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR16		(1 << 16)
/** EXTI_FTSR1_TR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR15		(1 << 15)
/** EXTI_FTSR1_TR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR14		(1 << 14)
/** EXTI_FTSR1_TR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR13		(1 << 13)
/** EXTI_FTSR1_TR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR12		(1 << 12)
/** EXTI_FTSR1_TR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR11		(1 << 11)
/** EXTI_FTSR1_TR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR10		(1 << 10)
/** EXTI_FTSR1_TR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR9		(1 << 9)
/** EXTI_FTSR1_TR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR8		(1 << 8)
/** EXTI_FTSR1_TR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR7		(1 << 7)
/** EXTI_FTSR1_TR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR6		(1 << 6)
/** EXTI_FTSR1_TR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR5		(1 << 5)
/** EXTI_FTSR1_TR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR4		(1 << 4)
/** EXTI_FTSR1_TR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR3		(1 << 3)
/** EXTI_FTSR1_TR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR2		(1 << 2)
/** EXTI_FTSR1_TR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR1		(1 << 1)
/** EXTI_FTSR1_TR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_swier1 SWIER1 EXTI software interrupt event register
@{*/

/** EXTI_SWIER1_SWIER18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER18		(1 << 18)
/** EXTI_SWIER1_SWIER17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER17		(1 << 17)
/** EXTI_SWIER1_SWIER16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER16		(1 << 16)
/** EXTI_SWIER1_SWIER15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER15		(1 << 15)
/** EXTI_SWIER1_SWIER14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER14		(1 << 14)
/** EXTI_SWIER1_SWIER13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER13		(1 << 13)
/** EXTI_SWIER1_SWIER12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER12		(1 << 12)
/** EXTI_SWIER1_SWIER11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER11		(1 << 11)
/** EXTI_SWIER1_SWIER10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER10		(1 << 10)
/** EXTI_SWIER1_SWIER9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER9		(1 << 9)
/** EXTI_SWIER1_SWIER8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER8		(1 << 8)
/** EXTI_SWIER1_SWIER7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER7		(1 << 7)
/** EXTI_SWIER1_SWIER6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER6		(1 << 6)
/** EXTI_SWIER1_SWIER5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER5		(1 << 5)
/** EXTI_SWIER1_SWIER4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER4		(1 << 4)
/** EXTI_SWIER1_SWIER3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER3		(1 << 3)
/** EXTI_SWIER1_SWIER2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER2		(1 << 2)
/** EXTI_SWIER1_SWIER1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER1		(1 << 1)
/** EXTI_SWIER1_SWIER0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER0		(1 << 0)

/**@}*/

/** @defgroup exti_rpr1 RPR1 EXTI rising edge pending register
@{*/

/** EXTI_RPR1_RPIF18 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF18		(1 << 18)
/** EXTI_RPR1_RPIF17 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF17		(1 << 17)
/** EXTI_RPR1_RPIF16 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF16		(1 << 16)
/** EXTI_RPR1_RPIF15 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF15		(1 << 15)
/** EXTI_RPR1_RPIF14 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF14		(1 << 14)
/** EXTI_RPR1_RPIF13 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF13		(1 << 13)
/** EXTI_RPR1_RPIF12 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF12		(1 << 12)
/** EXTI_RPR1_RPIF11 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF11		(1 << 11)
/** EXTI_RPR1_RPIF10 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF10		(1 << 10)
/** EXTI_RPR1_RPIF9 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF9		(1 << 9)
/** EXTI_RPR1_RPIF8 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF8		(1 << 8)
/** EXTI_RPR1_RPIF7 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF7		(1 << 7)
/** EXTI_RPR1_RPIF6 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF6		(1 << 6)
/** EXTI_RPR1_RPIF5 configurable event inputs x rising edge Pending bit **/
#define EXTI_RPR1_RPIF5		(1 << 5)
/** EXTI_RPR1_RPIF4 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF4		(1 << 4)
/** EXTI_RPR1_RPIF3 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF3		(1 << 3)
/** EXTI_RPR1_RPIF2 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF2		(1 << 2)
/** EXTI_RPR1_RPIF1 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF1		(1 << 1)
/** EXTI_RPR1_RPIF0 configurable event inputs x rising edge Pending bit. **/
#define EXTI_RPR1_RPIF0		(1 << 0)

/**@}*/

/** @defgroup exti_fpr1 FPR1 EXTI falling edge pending register
@{*/

/** EXTI_FPR1_FPIF18 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF18		(1 << 18)
/** EXTI_FPR1_FPIF17 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF17		(1 << 17)
/** EXTI_FPR1_FPIF16 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF16		(1 << 16)
/** EXTI_FPR1_FPIF15 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF15		(1 << 15)
/** EXTI_FPR1_FPIF14 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF14		(1 << 14)
/** EXTI_FPR1_FPIF13 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF13		(1 << 13)
/** EXTI_FPR1_FPIF12 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF12		(1 << 12)
/** EXTI_FPR1_FPIF11 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF11		(1 << 11)
/** EXTI_FPR1_FPIF10 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF10		(1 << 10)
/** EXTI_FPR1_FPIF9 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF9		(1 << 9)
/** EXTI_FPR1_FPIF8 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF8		(1 << 8)
/** EXTI_FPR1_FPIF7 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF7		(1 << 7)
/** EXTI_FPR1_FPIF6 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF6		(1 << 6)
/** EXTI_FPR1_FPIF5 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF5		(1 << 5)
/** EXTI_FPR1_FPIF4 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF4		(1 << 4)
/** EXTI_FPR1_FPIF3 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF3		(1 << 3)
/** EXTI_FPR1_FPIF2 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF2		(1 << 2)
/** EXTI_FPR1_FPIF1 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF1		(1 << 1)
/** EXTI_FPR1_FPIF0 configurable event inputs x falling edge pending bit. **/
#define EXTI_FPR1_FPIF0		(1 << 0)

/**@}*/

/** @defgroup exti_exticr1 EXTICR1 EXTI external interrupt selection register
@{*/


#define EXTI_EXTICR1_EXTI24_31_SHIFT		24
#define EXTI_EXTICR1_EXTI24_31_MASK		0xff
/** @defgroup exti_exticr1_exti24_31 EXTI2431 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR1_EXTI16_23_SHIFT		16
#define EXTI_EXTICR1_EXTI16_23_MASK		0xff
/** @defgroup exti_exticr1_exti16_23 EXTI1623 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR1_EXTI8_15_SHIFT		8
#define EXTI_EXTICR1_EXTI8_15_MASK		0xff
/** @defgroup exti_exticr1_exti8_15 EXTI815 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR1_EXTI0_7_SHIFT		0
#define EXTI_EXTICR1_EXTI0_7_MASK		0xff
/** @defgroup exti_exticr1_exti0_7 EXTI07 GPIO port selection
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_exticr2 EXTICR2 EXTI external interrupt selection register
@{*/


#define EXTI_EXTICR2_EXTI24_31_SHIFT		24
#define EXTI_EXTICR2_EXTI24_31_MASK		0xff
/** @defgroup exti_exticr2_exti24_31 EXTI2431 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR2_EXTI16_23_SHIFT		16
#define EXTI_EXTICR2_EXTI16_23_MASK		0xff
/** @defgroup exti_exticr2_exti16_23 EXTI1623 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR2_EXTI8_15_SHIFT		8
#define EXTI_EXTICR2_EXTI8_15_MASK		0xff
/** @defgroup exti_exticr2_exti8_15 EXTI815 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR2_EXTI0_7_SHIFT		0
#define EXTI_EXTICR2_EXTI0_7_MASK		0xff
/** @defgroup exti_exticr2_exti0_7 EXTI07 GPIO port selection
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_exticr3 EXTICR3 EXTI external interrupt selection register
@{*/


#define EXTI_EXTICR3_EXTI24_31_SHIFT		24
#define EXTI_EXTICR3_EXTI24_31_MASK		0xff
/** @defgroup exti_exticr3_exti24_31 EXTI2431 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR3_EXTI16_23_SHIFT		16
#define EXTI_EXTICR3_EXTI16_23_MASK		0xff
/** @defgroup exti_exticr3_exti16_23 EXTI1623 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR3_EXTI8_15_SHIFT		8
#define EXTI_EXTICR3_EXTI8_15_MASK		0xff
/** @defgroup exti_exticr3_exti8_15 EXTI815 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR3_EXTI0_7_SHIFT		0
#define EXTI_EXTICR3_EXTI0_7_MASK		0xff
/** @defgroup exti_exticr3_exti0_7 EXTI07 GPIO port selection
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_exticr4 EXTICR4 EXTI external interrupt selection register
@{*/


#define EXTI_EXTICR4_EXTI24_31_SHIFT		24
#define EXTI_EXTICR4_EXTI24_31_MASK		0xff
/** @defgroup exti_exticr4_exti24_31 EXTI2431 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR4_EXTI16_23_SHIFT		16
#define EXTI_EXTICR4_EXTI16_23_MASK		0xff
/** @defgroup exti_exticr4_exti16_23 EXTI1623 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR4_EXTI8_15_SHIFT		8
#define EXTI_EXTICR4_EXTI8_15_MASK		0xff
/** @defgroup exti_exticr4_exti8_15 EXTI815 GPIO port selection
@{*/
/**@}*/


#define EXTI_EXTICR4_EXTI0_7_SHIFT		0
#define EXTI_EXTICR4_EXTI0_7_MASK		0xff
/** @defgroup exti_exticr4_exti0_7 EXTI07 GPIO port selection
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_imr1 IMR1 EXTI CPU wakeup with interrupt mask register
@{*/

/** EXTI_IMR1_IM31 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM31		(1 << 31)
/** EXTI_IMR1_IM30 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM30		(1 << 30)
/** EXTI_IMR1_IM29 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM29		(1 << 29)
/** EXTI_IMR1_IM28 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM28		(1 << 28)
/** EXTI_IMR1_IM27 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM27		(1 << 27)
/** EXTI_IMR1_IM26 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM26		(1 << 26)
/** EXTI_IMR1_IM25 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM25		(1 << 25)
/** EXTI_IMR1_IM24 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM24		(1 << 24)
/** EXTI_IMR1_IM23 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM23		(1 << 23)
/** EXTI_IMR1_IM22 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM22		(1 << 22)
/** EXTI_IMR1_IM21 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM21		(1 << 21)
/** EXTI_IMR1_IM20 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM20		(1 << 20)
/** EXTI_IMR1_IM19 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM19		(1 << 19)
/** EXTI_IMR1_IM18 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM18		(1 << 18)
/** EXTI_IMR1_IM17 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM17		(1 << 17)
/** EXTI_IMR1_IM16 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM16		(1 << 16)
/** EXTI_IMR1_IM15 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM15		(1 << 15)
/** EXTI_IMR1_IM14 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM14		(1 << 14)
/** EXTI_IMR1_IM13 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM13		(1 << 13)
/** EXTI_IMR1_IM12 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM12		(1 << 12)
/** EXTI_IMR1_IM11 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM11		(1 << 11)
/** EXTI_IMR1_IM10 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM10		(1 << 10)
/** EXTI_IMR1_IM9 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM9		(1 << 9)
/** EXTI_IMR1_IM8 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM8		(1 << 8)
/** EXTI_IMR1_IM7 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM7		(1 << 7)
/** EXTI_IMR1_IM6 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM6		(1 << 6)
/** EXTI_IMR1_IM5 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM5		(1 << 5)
/** EXTI_IMR1_IM4 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM4		(1 << 4)
/** EXTI_IMR1_IM3 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM3		(1 << 3)
/** EXTI_IMR1_IM2 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM2		(1 << 2)
/** EXTI_IMR1_IM1 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM1		(1 << 1)
/** EXTI_IMR1_IM0 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR1_IM0		(1 << 0)

/**@}*/

/** @defgroup exti_emr1 EMR1 EXTI CPU wakeup with event mask register
@{*/

/** EXTI_EMR1_EM31 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM31		(1 << 31)
/** EXTI_EMR1_EM30 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM30		(1 << 30)
/** EXTI_EMR1_EM29 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM29		(1 << 29)
/** EXTI_EMR1_EM28 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM28		(1 << 28)
/** EXTI_EMR1_EM27 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM27		(1 << 27)
/** EXTI_EMR1_EM26 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM26		(1 << 26)
/** EXTI_EMR1_EM25 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM25		(1 << 25)
/** EXTI_EMR1_EM23 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM23		(1 << 23)
/** EXTI_EMR1_EM21 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM21		(1 << 21)
/** EXTI_EMR1_EM19 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM19		(1 << 19)
/** EXTI_EMR1_EM18 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM18		(1 << 18)
/** EXTI_EMR1_EM17 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM17		(1 << 17)
/** EXTI_EMR1_EM16 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM16		(1 << 16)
/** EXTI_EMR1_EM15 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM15		(1 << 15)
/** EXTI_EMR1_EM14 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM14		(1 << 14)
/** EXTI_EMR1_EM13 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM13		(1 << 13)
/** EXTI_EMR1_EM12 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM12		(1 << 12)
/** EXTI_EMR1_EM11 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM11		(1 << 11)
/** EXTI_EMR1_EM10 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM10		(1 << 10)
/** EXTI_EMR1_EM9 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM9		(1 << 9)
/** EXTI_EMR1_EM8 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM8		(1 << 8)
/** EXTI_EMR1_EM7 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM7		(1 << 7)
/** EXTI_EMR1_EM6 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM6		(1 << 6)
/** EXTI_EMR1_EM5 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM5		(1 << 5)
/** EXTI_EMR1_EM4 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM4		(1 << 4)
/** EXTI_EMR1_EM3 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM3		(1 << 3)
/** EXTI_EMR1_EM2 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM2		(1 << 2)
/** EXTI_EMR1_EM1 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM1		(1 << 1)
/** EXTI_EMR1_EM0 CPU wakeup with event mask on event input **/
#define EXTI_EMR1_EM0		(1 << 0)

/**@}*/

/** @defgroup exti_imr2 IMR2 EXTI CPU wakeup with interrupt mask register
@{*/

/** EXTI_IMR2_IM33 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR2_IM33		(1 << 1)
/** EXTI_IMR2_IM32 CPU wakeup with interrupt mask on event input **/
#define EXTI_IMR2_IM32		(1 << 0)

/**@}*/

/** @defgroup exti_emr2 EMR2 EXTI CPU wakeup with event mask register
@{*/

/** EXTI_EMR2_EM33 CPU wakeup with event mask on event input **/
#define EXTI_EMR2_EM33		(1 << 1)
/** EXTI_EMR2_EM32 CPU wakeup with event mask on event input **/
#define EXTI_EMR2_EM32		(1 << 0)

/**@}*/

/** @defgroup exti_hwcfgr7 HWCFGR7 Hardware configuration registers
@{*/


#define EXTI_HWCFGR7_CPUEVENT_SHIFT		0
#define EXTI_HWCFGR7_CPUEVENT_MASK		0xffffffff
/** @defgroup exti_hwcfgr7_cpuevent CPUEVENT HW configuration CPU event generation
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr6 HWCFGR6 Hardware configuration registers
@{*/


#define EXTI_HWCFGR6_CPUEVENT_SHIFT		0
#define EXTI_HWCFGR6_CPUEVENT_MASK		0xffffffff
/** @defgroup exti_hwcfgr6_cpuevent CPUEVENT HW configuration CPU event generation
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr5 HWCFGR5 Hardware configuration registers
@{*/


#define EXTI_HWCFGR5_CPUEVENT_SHIFT		0
#define EXTI_HWCFGR5_CPUEVENT_MASK		0xffffffff
/** @defgroup exti_hwcfgr5_cpuevent CPUEVENT HW configuration CPU event generation
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr4 HWCFGR4 Hardware configuration registers
@{*/


#define EXTI_HWCFGR4_EVENT_TRG_SHIFT		0
#define EXTI_HWCFGR4_EVENT_TRG_MASK		0xffffffff
/** @defgroup exti_hwcfgr4_event_trg EVENTTRG HW configuration event trigger type
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr3 HWCFGR3 Hardware configuration registers
@{*/


#define EXTI_HWCFGR3_EVENT_TRG_SHIFT		0
#define EXTI_HWCFGR3_EVENT_TRG_MASK		0xffffffff
/** @defgroup exti_hwcfgr3_event_trg EVENTTRG HW configuration event trigger type
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr2 HWCFGR2 Hardware configuration registers
@{*/


#define EXTI_HWCFGR2_EVENT_TRG_SHIFT		0
#define EXTI_HWCFGR2_EVENT_TRG_MASK		0xffffffff
/** @defgroup exti_hwcfgr2_event_trg EVENTTRG HW configuration event trigger type
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_hwcfgr1 HWCFGR1 Hardware configuration registers
@{*/


#define EXTI_HWCFGR1_NBIOPORT_SHIFT		16
#define EXTI_HWCFGR1_NBIOPORT_MASK		0xff
/** @defgroup exti_hwcfgr1_nbioport NBIOPORT HW configuration of number of IO ports
@{*/
/**@}*/


#define EXTI_HWCFGR1_CPUEVTEN_SHIFT		12
#define EXTI_HWCFGR1_CPUEVTEN_MASK		0x0f
/** @defgroup exti_hwcfgr1_cpuevten CPUEVTEN HW configuration of CPU event output enable
@{*/
/**@}*/


#define EXTI_HWCFGR1_NBCPUS_SHIFT		8
#define EXTI_HWCFGR1_NBCPUS_MASK		0x0f
/** @defgroup exti_hwcfgr1_nbcpus NBCPUS configuration number of CPUs
@{*/
/**@}*/


#define EXTI_HWCFGR1_NBEVENTS_SHIFT		0
#define EXTI_HWCFGR1_NBEVENTS_MASK		0xff
/** @defgroup exti_hwcfgr1_nbevents NBEVENTS configuration number of event
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_verr VERR AES version register
@{*/


#define EXTI_VERR_MAJREV_SHIFT		4
#define EXTI_VERR_MAJREV_MASK		0x0f
/** @defgroup exti_verr_majrev MAJREV Major revision
@{*/
/**@}*/


#define EXTI_VERR_MINREV_SHIFT		0
#define EXTI_VERR_MINREV_MASK		0x0f
/** @defgroup exti_verr_minrev MINREV Minor revision
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_ipidr IPIDR AES identification register
@{*/


#define EXTI_IPIDR_ID_SHIFT		0
#define EXTI_IPIDR_ID_MASK		0xffffffff
/** @defgroup exti_ipidr_id ID Identification code
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_sidr SIDR AES size ID register
@{*/


#define EXTI_SIDR_ID_SHIFT		0
#define EXTI_SIDR_ID_MASK		0xffffffff
/** @defgroup exti_sidr_id ID Size Identification code
@{*/
/**@}*/


/**@}*/

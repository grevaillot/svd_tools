#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt
      Controller Register
@{*/

/** NVIC_ISER Interrupt Set Enable Register **/
#define NVIC_ISER			MMIO32(NVIC_BASE + 0x00)
/** NVIC_ICER Interrupt Clear Enable Register **/
#define NVIC_ICER			MMIO32(NVIC_BASE + 0x80)
/** NVIC_ISPR Interrupt Set-Pending Register **/
#define NVIC_ISPR			MMIO32(NVIC_BASE + 0x100)
/** NVIC_ICPR Interrupt Clear-Pending Register **/
#define NVIC_ICPR			MMIO32(NVIC_BASE + 0x180)
/** NVIC_IPR0 Interrupt Priority Register 0 **/
#define NVIC_IPR0			MMIO32(NVIC_BASE + 0x300)
/** NVIC_IPR1 Interrupt Priority Register 1 **/
#define NVIC_IPR1			MMIO32(NVIC_BASE + 0x304)
/** NVIC_IPR2 Interrupt Priority Register 2 **/
#define NVIC_IPR2			MMIO32(NVIC_BASE + 0x308)
/** NVIC_IPR3 Interrupt Priority Register 3 **/
#define NVIC_IPR3			MMIO32(NVIC_BASE + 0x30c)
/** NVIC_IPR4 Interrupt Priority Register 4 **/
#define NVIC_IPR4			MMIO32(NVIC_BASE + 0x310)
/** NVIC_IPR5 Interrupt Priority Register 5 **/
#define NVIC_IPR5			MMIO32(NVIC_BASE + 0x314)
/** NVIC_IPR6 Interrupt Priority Register 6 **/
#define NVIC_IPR6			MMIO32(NVIC_BASE + 0x318)
/** NVIC_IPR7 Interrupt Priority Register 7 **/
#define NVIC_IPR7			MMIO32(NVIC_BASE + 0x31c)

/**@}*/


/** @defgroup nvic_iser ISER Interrupt Set Enable Register
@{*/


#define NVIC_ISER_SETENA_SHIFT		0
#define NVIC_ISER_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer ICER Interrupt Clear Enable Register
@{*/


#define NVIC_ICER_CLRENA_SHIFT		0
#define NVIC_ICER_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer_clrena CLRENA CLRENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr ISPR Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR_SETPEND_SHIFT		0
#define NVIC_ISPR_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr_setpend SETPEND SETPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr ICPR Interrupt Clear-Pending Register
@{*/


#define NVIC_ICPR_CLRPEND_SHIFT		0
#define NVIC_ICPR_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr_clrpend CLRPEND CLRPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr0 IPR0 Interrupt Priority Register 0
@{*/


#define NVIC_IPR0_PRI_3_SHIFT		24
#define NVIC_IPR0_PRI_3_MASK		0xff
/** @defgroup nvic_ipr0_pri_3 PRI3 priority for interrupt 3
@{*/
/**@}*/


#define NVIC_IPR0_PRI_2_SHIFT		16
#define NVIC_IPR0_PRI_2_MASK		0xff
/** @defgroup nvic_ipr0_pri_2 PRI2 priority for interrupt 2
@{*/
/**@}*/


#define NVIC_IPR0_PRI_1_SHIFT		8
#define NVIC_IPR0_PRI_1_MASK		0xff
/** @defgroup nvic_ipr0_pri_1 PRI1 priority for interrupt 1
@{*/
/**@}*/


#define NVIC_IPR0_PRI_0_SHIFT		0
#define NVIC_IPR0_PRI_0_MASK		0xff
/** @defgroup nvic_ipr0_pri_0 PRI0 priority for interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr1 IPR1 Interrupt Priority Register 1
@{*/


#define NVIC_IPR1_PRI_7_SHIFT		24
#define NVIC_IPR1_PRI_7_MASK		0xff
/** @defgroup nvic_ipr1_pri_7 PRI7 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR1_PRI_6_SHIFT		16
#define NVIC_IPR1_PRI_6_MASK		0xff
/** @defgroup nvic_ipr1_pri_6 PRI6 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR1_PRI_5_SHIFT		8
#define NVIC_IPR1_PRI_5_MASK		0xff
/** @defgroup nvic_ipr1_pri_5 PRI5 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR1_PRI_4_SHIFT		0
#define NVIC_IPR1_PRI_4_MASK		0xff
/** @defgroup nvic_ipr1_pri_4 PRI4 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr2 IPR2 Interrupt Priority Register 2
@{*/


#define NVIC_IPR2_PRI_11_SHIFT		24
#define NVIC_IPR2_PRI_11_MASK		0xff
/** @defgroup nvic_ipr2_pri_11 PRI11 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR2_PRI_10_SHIFT		16
#define NVIC_IPR2_PRI_10_MASK		0xff
/** @defgroup nvic_ipr2_pri_10 PRI10 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR2_PRI_9_SHIFT		8
#define NVIC_IPR2_PRI_9_MASK		0xff
/** @defgroup nvic_ipr2_pri_9 PRI9 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR2_PRI_8_SHIFT		0
#define NVIC_IPR2_PRI_8_MASK		0xff
/** @defgroup nvic_ipr2_pri_8 PRI8 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr3 IPR3 Interrupt Priority Register 3
@{*/


#define NVIC_IPR3_PRI_15_SHIFT		24
#define NVIC_IPR3_PRI_15_MASK		0xff
/** @defgroup nvic_ipr3_pri_15 PRI15 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR3_PRI_14_SHIFT		16
#define NVIC_IPR3_PRI_14_MASK		0xff
/** @defgroup nvic_ipr3_pri_14 PRI14 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR3_PRI_13_SHIFT		8
#define NVIC_IPR3_PRI_13_MASK		0xff
/** @defgroup nvic_ipr3_pri_13 PRI13 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR3_PRI_12_SHIFT		0
#define NVIC_IPR3_PRI_12_MASK		0xff
/** @defgroup nvic_ipr3_pri_12 PRI12 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr4 IPR4 Interrupt Priority Register 4
@{*/


#define NVIC_IPR4_PRI_19_SHIFT		24
#define NVIC_IPR4_PRI_19_MASK		0xff
/** @defgroup nvic_ipr4_pri_19 PRI19 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR4_PRI_18_SHIFT		16
#define NVIC_IPR4_PRI_18_MASK		0xff
/** @defgroup nvic_ipr4_pri_18 PRI18 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR4_PRI_17_SHIFT		8
#define NVIC_IPR4_PRI_17_MASK		0xff
/** @defgroup nvic_ipr4_pri_17 PRI17 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR4_PRI_16_SHIFT		0
#define NVIC_IPR4_PRI_16_MASK		0xff
/** @defgroup nvic_ipr4_pri_16 PRI16 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr5 IPR5 Interrupt Priority Register 5
@{*/


#define NVIC_IPR5_PRI_23_SHIFT		24
#define NVIC_IPR5_PRI_23_MASK		0xff
/** @defgroup nvic_ipr5_pri_23 PRI23 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR5_PRI_22_SHIFT		16
#define NVIC_IPR5_PRI_22_MASK		0xff
/** @defgroup nvic_ipr5_pri_22 PRI22 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR5_PRI_21_SHIFT		8
#define NVIC_IPR5_PRI_21_MASK		0xff
/** @defgroup nvic_ipr5_pri_21 PRI21 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR5_PRI_20_SHIFT		0
#define NVIC_IPR5_PRI_20_MASK		0xff
/** @defgroup nvic_ipr5_pri_20 PRI20 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr6 IPR6 Interrupt Priority Register 6
@{*/


#define NVIC_IPR6_PRI_27_SHIFT		24
#define NVIC_IPR6_PRI_27_MASK		0xff
/** @defgroup nvic_ipr6_pri_27 PRI27 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR6_PRI_26_SHIFT		16
#define NVIC_IPR6_PRI_26_MASK		0xff
/** @defgroup nvic_ipr6_pri_26 PRI26 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR6_PRI_25_SHIFT		8
#define NVIC_IPR6_PRI_25_MASK		0xff
/** @defgroup nvic_ipr6_pri_25 PRI25 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR6_PRI_24_SHIFT		0
#define NVIC_IPR6_PRI_24_MASK		0xff
/** @defgroup nvic_ipr6_pri_24 PRI24 priority for interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr7 IPR7 Interrupt Priority Register 7
@{*/


#define NVIC_IPR7_PRI_31_SHIFT		24
#define NVIC_IPR7_PRI_31_MASK		0xff
/** @defgroup nvic_ipr7_pri_31 PRI31 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR7_PRI_30_SHIFT		16
#define NVIC_IPR7_PRI_30_MASK		0xff
/** @defgroup nvic_ipr7_pri_30 PRI30 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR7_PRI_29_SHIFT		8
#define NVIC_IPR7_PRI_29_MASK		0xff
/** @defgroup nvic_ipr7_pri_29 PRI29 priority for interrupt n
@{*/
/**@}*/


#define NVIC_IPR7_PRI_28_SHIFT		0
#define NVIC_IPR7_PRI_28_MASK		0xff
/** @defgroup nvic_ipr7_pri_28 PRI28 priority for interrupt n
@{*/
/**@}*/


/**@}*/

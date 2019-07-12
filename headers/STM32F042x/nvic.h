#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt       Controller Register
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


#define NVIC_IPR0_PRI_03_SHIFT		30
#define NVIC_IPR0_PRI_03_MASK		0x03
/** @defgroup nvic_ipr0_pri_03 PRI03 PRI_03
@{*/
/**@}*/


#define NVIC_IPR0_PRI_02_SHIFT		22
#define NVIC_IPR0_PRI_02_MASK		0x03
/** @defgroup nvic_ipr0_pri_02 PRI02 PRI_02
@{*/
/**@}*/


#define NVIC_IPR0_PRI_01_SHIFT		14
#define NVIC_IPR0_PRI_01_MASK		0x03
/** @defgroup nvic_ipr0_pri_01 PRI01 PRI_01
@{*/
/**@}*/


#define NVIC_IPR0_PRI_00_SHIFT		6
#define NVIC_IPR0_PRI_00_MASK		0x03
/** @defgroup nvic_ipr0_pri_00 PRI00 PRI_00
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr1 IPR1 Interrupt Priority Register 1
@{*/


#define NVIC_IPR1_PRI_43_SHIFT		30
#define NVIC_IPR1_PRI_43_MASK		0x03
/** @defgroup nvic_ipr1_pri_43 PRI43 PRI_43
@{*/
/**@}*/


#define NVIC_IPR1_PRI_42_SHIFT		22
#define NVIC_IPR1_PRI_42_MASK		0x03
/** @defgroup nvic_ipr1_pri_42 PRI42 PRI_42
@{*/
/**@}*/


#define NVIC_IPR1_PRI_41_SHIFT		14
#define NVIC_IPR1_PRI_41_MASK		0x03
/** @defgroup nvic_ipr1_pri_41 PRI41 PRI_41
@{*/
/**@}*/


#define NVIC_IPR1_PRI_40_SHIFT		6
#define NVIC_IPR1_PRI_40_MASK		0x03
/** @defgroup nvic_ipr1_pri_40 PRI40 PRI_40
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr2 IPR2 Interrupt Priority Register 2
@{*/


#define NVIC_IPR2_PRI_83_SHIFT		30
#define NVIC_IPR2_PRI_83_MASK		0x03
/** @defgroup nvic_ipr2_pri_83 PRI83 PRI_83
@{*/
/**@}*/


#define NVIC_IPR2_PRI_82_SHIFT		22
#define NVIC_IPR2_PRI_82_MASK		0x03
/** @defgroup nvic_ipr2_pri_82 PRI82 PRI_82
@{*/
/**@}*/


#define NVIC_IPR2_PRI_81_SHIFT		14
#define NVIC_IPR2_PRI_81_MASK		0x03
/** @defgroup nvic_ipr2_pri_81 PRI81 PRI_81
@{*/
/**@}*/


#define NVIC_IPR2_PRI_80_SHIFT		6
#define NVIC_IPR2_PRI_80_MASK		0x03
/** @defgroup nvic_ipr2_pri_80 PRI80 PRI_80
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr3 IPR3 Interrupt Priority Register 3
@{*/


#define NVIC_IPR3_PRI_123_SHIFT		30
#define NVIC_IPR3_PRI_123_MASK		0x03
/** @defgroup nvic_ipr3_pri_123 PRI123 PRI_123
@{*/
/**@}*/


#define NVIC_IPR3_PRI_122_SHIFT		22
#define NVIC_IPR3_PRI_122_MASK		0x03
/** @defgroup nvic_ipr3_pri_122 PRI122 PRI_122
@{*/
/**@}*/


#define NVIC_IPR3_PRI_121_SHIFT		14
#define NVIC_IPR3_PRI_121_MASK		0x03
/** @defgroup nvic_ipr3_pri_121 PRI121 PRI_121
@{*/
/**@}*/


#define NVIC_IPR3_PRI_120_SHIFT		6
#define NVIC_IPR3_PRI_120_MASK		0x03
/** @defgroup nvic_ipr3_pri_120 PRI120 PRI_120
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr4 IPR4 Interrupt Priority Register 4
@{*/


#define NVIC_IPR4_PRI_163_SHIFT		30
#define NVIC_IPR4_PRI_163_MASK		0x03
/** @defgroup nvic_ipr4_pri_163 PRI163 PRI_163
@{*/
/**@}*/


#define NVIC_IPR4_PRI_162_SHIFT		22
#define NVIC_IPR4_PRI_162_MASK		0x03
/** @defgroup nvic_ipr4_pri_162 PRI162 PRI_162
@{*/
/**@}*/


#define NVIC_IPR4_PRI_161_SHIFT		14
#define NVIC_IPR4_PRI_161_MASK		0x03
/** @defgroup nvic_ipr4_pri_161 PRI161 PRI_161
@{*/
/**@}*/


#define NVIC_IPR4_PRI_160_SHIFT		6
#define NVIC_IPR4_PRI_160_MASK		0x03
/** @defgroup nvic_ipr4_pri_160 PRI160 PRI_160
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr5 IPR5 Interrupt Priority Register 5
@{*/


#define NVIC_IPR5_PRI_203_SHIFT		30
#define NVIC_IPR5_PRI_203_MASK		0x03
/** @defgroup nvic_ipr5_pri_203 PRI203 PRI_203
@{*/
/**@}*/


#define NVIC_IPR5_PRI_202_SHIFT		22
#define NVIC_IPR5_PRI_202_MASK		0x03
/** @defgroup nvic_ipr5_pri_202 PRI202 PRI_202
@{*/
/**@}*/


#define NVIC_IPR5_PRI_201_SHIFT		14
#define NVIC_IPR5_PRI_201_MASK		0x03
/** @defgroup nvic_ipr5_pri_201 PRI201 PRI_201
@{*/
/**@}*/


#define NVIC_IPR5_PRI_200_SHIFT		6
#define NVIC_IPR5_PRI_200_MASK		0x03
/** @defgroup nvic_ipr5_pri_200 PRI200 PRI_200
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr6 IPR6 Interrupt Priority Register 6
@{*/


#define NVIC_IPR6_PRI_243_SHIFT		30
#define NVIC_IPR6_PRI_243_MASK		0x03
/** @defgroup nvic_ipr6_pri_243 PRI243 PRI_243
@{*/
/**@}*/


#define NVIC_IPR6_PRI_242_SHIFT		22
#define NVIC_IPR6_PRI_242_MASK		0x03
/** @defgroup nvic_ipr6_pri_242 PRI242 PRI_242
@{*/
/**@}*/


#define NVIC_IPR6_PRI_241_SHIFT		14
#define NVIC_IPR6_PRI_241_MASK		0x03
/** @defgroup nvic_ipr6_pri_241 PRI241 PRI_241
@{*/
/**@}*/


#define NVIC_IPR6_PRI_240_SHIFT		6
#define NVIC_IPR6_PRI_240_MASK		0x03
/** @defgroup nvic_ipr6_pri_240 PRI240 PRI_240
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr7 IPR7 Interrupt Priority Register 7
@{*/


#define NVIC_IPR7_PRI_283_SHIFT		30
#define NVIC_IPR7_PRI_283_MASK		0x03
/** @defgroup nvic_ipr7_pri_283 PRI283 PRI_283
@{*/
/**@}*/


#define NVIC_IPR7_PRI_282_SHIFT		22
#define NVIC_IPR7_PRI_282_MASK		0x03
/** @defgroup nvic_ipr7_pri_282 PRI282 PRI_282
@{*/
/**@}*/


#define NVIC_IPR7_PRI_281_SHIFT		14
#define NVIC_IPR7_PRI_281_MASK		0x03
/** @defgroup nvic_ipr7_pri_281 PRI281 PRI_281
@{*/
/**@}*/


#define NVIC_IPR7_PRI_280_SHIFT		6
#define NVIC_IPR7_PRI_280_MASK		0x03
/** @defgroup nvic_ipr7_pri_280 PRI280 PRI_280
@{*/
/**@}*/


/**@}*/

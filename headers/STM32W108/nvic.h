#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt
      Controller Register
@{*/

/** NVIC_ICTR Interrupt Controller Type Register **/
#define NVIC_ICTR			MMIO32(NVIC_BASE + 0x04)
/** NVIC_ISER0 Interrupt Set-Enable Register **/
#define NVIC_ISER0			MMIO32(NVIC_BASE + 0x100)
/** NVIC_ICER0 Interrupt Clear-Enable Register **/
#define NVIC_ICER0			MMIO32(NVIC_BASE + 0x180)
/** NVIC_ISPR0 Interrupt Set-Pending Register **/
#define NVIC_ISPR0			MMIO32(NVIC_BASE + 0x200)
/** NVIC_ICPR0 Interrupt Clear-Pending Register **/
#define NVIC_ICPR0			MMIO32(NVIC_BASE + 0x280)
/** NVIC_IABR0 Interrupt Active Bit Register **/
#define NVIC_IABR0			MMIO32(NVIC_BASE + 0x300)
/** NVIC_IPR0 Interrupt Priority Register **/
#define NVIC_IPR0			MMIO32(NVIC_BASE + 0x400)
/** NVIC_IPR1 Interrupt Priority Register **/
#define NVIC_IPR1			MMIO32(NVIC_BASE + 0x404)
/** NVIC_IPR2 Interrupt Priority Register **/
#define NVIC_IPR2			MMIO32(NVIC_BASE + 0x408)
/** NVIC_IPR3 Interrupt Priority Register **/
#define NVIC_IPR3			MMIO32(NVIC_BASE + 0x40c)
/** NVIC_IPR4 Interrupt Priority Register **/
#define NVIC_IPR4			MMIO32(NVIC_BASE + 0x410)
/** NVIC_STIR Software Triggered Interrupt Register **/
#define NVIC_STIR			MMIO32(NVIC_BASE + 0xf00)

/**@}*/


/** @defgroup nvic_ictr ICTR Interrupt Controller Type Register
@{*/


#define NVIC_ICTR_INTLINESNUM_SHIFT		0
#define NVIC_ICTR_INTLINESNUM_MASK		0x0f
/** @defgroup nvic_ictr_intlinesnum INTLINESNUM Total number of interrupt lines in groups
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser0 ISER0 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER0_SETENA_SHIFT		0
#define NVIC_ISER0_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser0_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer0 ICER0 Interrupt Clear-Enable Register
@{*/


#define NVIC_ICER0_CLRENA_SHIFT		0
#define NVIC_ICER0_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer0_clrena CLRENA CLRENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr0 ISPR0 Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR0_SETPEND_SHIFT		0
#define NVIC_ISPR0_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr0_setpend SETPEND SETPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr0 ICPR0 Interrupt Clear-Pending Register
@{*/


#define NVIC_ICPR0_CLRPEND_SHIFT		0
#define NVIC_ICPR0_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr0_clrpend CLRPEND CLRPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr0 IABR0 Interrupt Active Bit Register
@{*/


#define NVIC_IABR0_ACTIVE_SHIFT		0
#define NVIC_IABR0_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr0_active ACTIVE ACTIVE
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr0 IPR0 Interrupt Priority Register
@{*/


#define NVIC_IPR0_IPR_N3_SHIFT		24
#define NVIC_IPR0_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr0_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR0_IPR_N2_SHIFT		16
#define NVIC_IPR0_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr0_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR0_IPR_N1_SHIFT		8
#define NVIC_IPR0_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr0_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR0_IPR_N0_SHIFT		0
#define NVIC_IPR0_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr0_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr1 IPR1 Interrupt Priority Register
@{*/


#define NVIC_IPR1_IPR_N3_SHIFT		24
#define NVIC_IPR1_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr1_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR1_IPR_N2_SHIFT		16
#define NVIC_IPR1_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr1_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR1_IPR_N1_SHIFT		8
#define NVIC_IPR1_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr1_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR1_IPR_N0_SHIFT		0
#define NVIC_IPR1_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr1_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr2 IPR2 Interrupt Priority Register
@{*/


#define NVIC_IPR2_IPR_N3_SHIFT		24
#define NVIC_IPR2_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr2_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR2_IPR_N2_SHIFT		16
#define NVIC_IPR2_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr2_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR2_IPR_N1_SHIFT		8
#define NVIC_IPR2_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr2_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR2_IPR_N0_SHIFT		0
#define NVIC_IPR2_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr2_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr3 IPR3 Interrupt Priority Register
@{*/


#define NVIC_IPR3_IPR_N3_SHIFT		24
#define NVIC_IPR3_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr3_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR3_IPR_N2_SHIFT		16
#define NVIC_IPR3_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr3_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR3_IPR_N1_SHIFT		8
#define NVIC_IPR3_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr3_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR3_IPR_N0_SHIFT		0
#define NVIC_IPR3_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr3_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr4 IPR4 Interrupt Priority Register
@{*/


#define NVIC_IPR4_IPR_N3_SHIFT		24
#define NVIC_IPR4_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr4_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR4_IPR_N2_SHIFT		16
#define NVIC_IPR4_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr4_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR4_IPR_N1_SHIFT		8
#define NVIC_IPR4_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr4_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR4_IPR_N0_SHIFT		0
#define NVIC_IPR4_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr4_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_stir STIR Software Triggered Interrupt Register
@{*/


#define NVIC_STIR_INTID_SHIFT		0
#define NVIC_STIR_INTID_MASK		0x1ff
/** @defgroup nvic_stir_intid INTID interrupt to be triggered
@{*/
/**@}*/


/**@}*/

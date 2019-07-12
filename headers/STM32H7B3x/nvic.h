#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt
      Controller Register
@{*/

/** NVIC_ISER0 Interrupt Set-Enable Register **/
#define NVIC_ISER0			MMIO32(NVIC_BASE + 0x00)
/** NVIC_ISER1 Interrupt Set-Enable Register **/
#define NVIC_ISER1			MMIO32(NVIC_BASE + 0x04)
/** NVIC_ISER2 Interrupt Set-Enable Register **/
#define NVIC_ISER2			MMIO32(NVIC_BASE + 0x08)
/** NVIC_ICER0 Interrupt Clear-Enable Register **/
#define NVIC_ICER0			MMIO32(NVIC_BASE + 0x80)
/** NVIC_ICER1 Interrupt Clear-Enable Register **/
#define NVIC_ICER1			MMIO32(NVIC_BASE + 0x84)
/** NVIC_ICER2 Interrupt Clear-Enable Register **/
#define NVIC_ICER2			MMIO32(NVIC_BASE + 0x88)
/** NVIC_ISPR0 Interrupt Set-Pending Register **/
#define NVIC_ISPR0			MMIO32(NVIC_BASE + 0x100)
/** NVIC_ISPR1 Interrupt Set-Pending Register **/
#define NVIC_ISPR1			MMIO32(NVIC_BASE + 0x104)
/** NVIC_ISPR2 Interrupt Set-Pending Register **/
#define NVIC_ISPR2			MMIO32(NVIC_BASE + 0x108)
/** NVIC_ICPR0 Interrupt Clear-Pending Register **/
#define NVIC_ICPR0			MMIO32(NVIC_BASE + 0x180)
/** NVIC_ICPR1 Interrupt Clear-Pending Register **/
#define NVIC_ICPR1			MMIO32(NVIC_BASE + 0x184)
/** NVIC_ICPR2 Interrupt Clear-Pending Register **/
#define NVIC_ICPR2			MMIO32(NVIC_BASE + 0x188)
/** NVIC_IABR0 Interrupt Active Bit Register **/
#define NVIC_IABR0			MMIO32(NVIC_BASE + 0x200)
/** NVIC_IABR1 Interrupt Active Bit Register **/
#define NVIC_IABR1			MMIO32(NVIC_BASE + 0x204)
/** NVIC_IABR2 Interrupt Active Bit Register **/
#define NVIC_IABR2			MMIO32(NVIC_BASE + 0x208)
/** NVIC_IPR0 Interrupt Priority Register **/
#define NVIC_IPR0			MMIO32(NVIC_BASE + 0x300)
/** NVIC_IPR1 Interrupt Priority Register **/
#define NVIC_IPR1			MMIO32(NVIC_BASE + 0x304)
/** NVIC_IPR2 Interrupt Priority Register **/
#define NVIC_IPR2			MMIO32(NVIC_BASE + 0x308)
/** NVIC_IPR3 Interrupt Priority Register **/
#define NVIC_IPR3			MMIO32(NVIC_BASE + 0x30c)
/** NVIC_IPR4 Interrupt Priority Register **/
#define NVIC_IPR4			MMIO32(NVIC_BASE + 0x310)
/** NVIC_IPR5 Interrupt Priority Register **/
#define NVIC_IPR5			MMIO32(NVIC_BASE + 0x314)
/** NVIC_IPR6 Interrupt Priority Register **/
#define NVIC_IPR6			MMIO32(NVIC_BASE + 0x318)
/** NVIC_IPR7 Interrupt Priority Register **/
#define NVIC_IPR7			MMIO32(NVIC_BASE + 0x31c)
/** NVIC_IPR8 Interrupt Priority Register **/
#define NVIC_IPR8			MMIO32(NVIC_BASE + 0x320)
/** NVIC_IPR9 Interrupt Priority Register **/
#define NVIC_IPR9			MMIO32(NVIC_BASE + 0x324)
/** NVIC_IPR10 Interrupt Priority Register **/
#define NVIC_IPR10			MMIO32(NVIC_BASE + 0x328)
/** NVIC_IPR11 Interrupt Priority Register **/
#define NVIC_IPR11			MMIO32(NVIC_BASE + 0x32c)
/** NVIC_IPR12 Interrupt Priority Register **/
#define NVIC_IPR12			MMIO32(NVIC_BASE + 0x330)
/** NVIC_IPR13 Interrupt Priority Register **/
#define NVIC_IPR13			MMIO32(NVIC_BASE + 0x334)
/** NVIC_IPR14 Interrupt Priority Register **/
#define NVIC_IPR14			MMIO32(NVIC_BASE + 0x338)
/** NVIC_IPR15 Interrupt Priority Register **/
#define NVIC_IPR15			MMIO32(NVIC_BASE + 0x33c)
/** NVIC_IPR16 Interrupt Priority Register **/
#define NVIC_IPR16			MMIO32(NVIC_BASE + 0x340)
/** NVIC_IPR17 Interrupt Priority Register **/
#define NVIC_IPR17			MMIO32(NVIC_BASE + 0x344)
/** NVIC_IPR18 Interrupt Priority Register **/
#define NVIC_IPR18			MMIO32(NVIC_BASE + 0x348)
/** NVIC_IPR19 Interrupt Priority Register **/
#define NVIC_IPR19			MMIO32(NVIC_BASE + 0x34c)
/** NVIC_IPR20 Interrupt Priority Register **/
#define NVIC_IPR20			MMIO32(NVIC_BASE + 0x350)
/** NVIC_IPR21 Interrupt Priority Register **/
#define NVIC_IPR21			MMIO32(NVIC_BASE + 0x354)
/** NVIC_IPR22 Interrupt Priority Register **/
#define NVIC_IPR22			MMIO32(NVIC_BASE + 0x358)
/** NVIC_IPR23 Interrupt Priority Register **/
#define NVIC_IPR23			MMIO32(NVIC_BASE + 0x35c)
/** NVIC_IPR24 Interrupt Priority Register **/
#define NVIC_IPR24			MMIO32(NVIC_BASE + 0x360)
/** NVIC_IPR25 Interrupt Priority Register **/
#define NVIC_IPR25			MMIO32(NVIC_BASE + 0x364)
/** NVIC_IPR26 Interrupt Priority Register **/
#define NVIC_IPR26			MMIO32(NVIC_BASE + 0x368)
/** NVIC_IPR27 Interrupt Priority Register **/
#define NVIC_IPR27			MMIO32(NVIC_BASE + 0x36c)
/** NVIC_IPR28 Interrupt Priority Register **/
#define NVIC_IPR28			MMIO32(NVIC_BASE + 0x370)
/** NVIC_IPR29 Interrupt Priority Register **/
#define NVIC_IPR29			MMIO32(NVIC_BASE + 0x374)
/** NVIC_IPR30 Interrupt Priority Register **/
#define NVIC_IPR30			MMIO32(NVIC_BASE + 0x378)
/** NVIC_IPR31 Interrupt Priority Register **/
#define NVIC_IPR31			MMIO32(NVIC_BASE + 0x37c)
/** NVIC_IPR32 Interrupt Priority Register **/
#define NVIC_IPR32			MMIO32(NVIC_BASE + 0x380)
/** NVIC_IPR33 Interrupt Priority Register **/
#define NVIC_IPR33			MMIO32(NVIC_BASE + 0x384)
/** NVIC_IPR34 Interrupt Priority Register **/
#define NVIC_IPR34			MMIO32(NVIC_BASE + 0x388)
/** NVIC_IPR35 Interrupt Priority Register **/
#define NVIC_IPR35			MMIO32(NVIC_BASE + 0x38c)
/** NVIC_IPR36 Interrupt Priority Register **/
#define NVIC_IPR36			MMIO32(NVIC_BASE + 0x390)
/** NVIC_IPR37 Interrupt Priority Register **/
#define NVIC_IPR37			MMIO32(NVIC_BASE + 0x394)
/** NVIC_IPR38 Interrupt Priority Register **/
#define NVIC_IPR38			MMIO32(NVIC_BASE + 0x398)
/** NVIC_IPR39 Interrupt Priority Register **/
#define NVIC_IPR39			MMIO32(NVIC_BASE + 0x39c)
/** NVIC_ISER3 Interrupt Set-Enable Register **/
#define NVIC_ISER3			MMIO32(NVIC_BASE + 0x3a0)
/** NVIC_ISER4 Interrupt Set-Enable Register **/
#define NVIC_ISER4			MMIO32(NVIC_BASE + 0x3a4)
/** NVIC_ICER3 Interrupt Clear-Enable Register **/
#define NVIC_ICER3			MMIO32(NVIC_BASE + 0x3a8)
/** NVIC_ICER4 Interrupt Clear-Enable Register **/
#define NVIC_ICER4			MMIO32(NVIC_BASE + 0x3ac)
/** NVIC_ISPR3 Interrupt Set-Pending Register **/
#define NVIC_ISPR3			MMIO32(NVIC_BASE + 0x3b0)
/** NVIC_ISPR4 Interrupt Set-Pending Register **/
#define NVIC_ISPR4			MMIO32(NVIC_BASE + 0x3b4)
/** NVIC_IABR3 Interrupt Active Bit Register **/
#define NVIC_IABR3			MMIO32(NVIC_BASE + 0x3b8)
/** NVIC_IABR4 Interrupt Active Bit Register **/
#define NVIC_IABR4			MMIO32(NVIC_BASE + 0x3bc)
/** NVIC_IPR40 Interrupt Priority Register **/
#define NVIC_IPR40			MMIO32(NVIC_BASE + 0x3c0)

/**@}*/


/** @defgroup nvic_iser0 ISER0 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER0_SETENA_SHIFT		0
#define NVIC_ISER0_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser0_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser1 ISER1 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER1_SETENA_SHIFT		0
#define NVIC_ISER1_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser1_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser2 ISER2 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER2_SETENA_SHIFT		0
#define NVIC_ISER2_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser2_setena SETENA SETENA
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

/** @defgroup nvic_icer1 ICER1 Interrupt Clear-Enable Register
@{*/


#define NVIC_ICER1_CLRENA_SHIFT		0
#define NVIC_ICER1_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer1_clrena CLRENA CLRENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer2 ICER2 Interrupt Clear-Enable Register
@{*/


#define NVIC_ICER2_CLRENA_SHIFT		0
#define NVIC_ICER2_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer2_clrena CLRENA CLRENA
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

/** @defgroup nvic_ispr1 ISPR1 Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR1_SETPEND_SHIFT		0
#define NVIC_ISPR1_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr1_setpend SETPEND SETPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr2 ISPR2 Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR2_SETPEND_SHIFT		0
#define NVIC_ISPR2_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr2_setpend SETPEND SETPEND
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

/** @defgroup nvic_icpr1 ICPR1 Interrupt Clear-Pending Register
@{*/


#define NVIC_ICPR1_CLRPEND_SHIFT		0
#define NVIC_ICPR1_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr1_clrpend CLRPEND CLRPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr2 ICPR2 Interrupt Clear-Pending Register
@{*/


#define NVIC_ICPR2_CLRPEND_SHIFT		0
#define NVIC_ICPR2_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr2_clrpend CLRPEND CLRPEND
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

/** @defgroup nvic_iabr1 IABR1 Interrupt Active Bit Register
@{*/


#define NVIC_IABR1_ACTIVE_SHIFT		0
#define NVIC_IABR1_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr1_active ACTIVE ACTIVE
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr2 IABR2 Interrupt Active Bit Register
@{*/


#define NVIC_IABR2_ACTIVE_SHIFT		0
#define NVIC_IABR2_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr2_active ACTIVE ACTIVE
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

/** @defgroup nvic_ipr5 IPR5 Interrupt Priority Register
@{*/


#define NVIC_IPR5_IPR_N3_SHIFT		24
#define NVIC_IPR5_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr5_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR5_IPR_N2_SHIFT		16
#define NVIC_IPR5_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr5_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR5_IPR_N1_SHIFT		8
#define NVIC_IPR5_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr5_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR5_IPR_N0_SHIFT		0
#define NVIC_IPR5_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr5_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr6 IPR6 Interrupt Priority Register
@{*/


#define NVIC_IPR6_IPR_N3_SHIFT		24
#define NVIC_IPR6_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr6_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR6_IPR_N2_SHIFT		16
#define NVIC_IPR6_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr6_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR6_IPR_N1_SHIFT		8
#define NVIC_IPR6_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr6_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR6_IPR_N0_SHIFT		0
#define NVIC_IPR6_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr6_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr7 IPR7 Interrupt Priority Register
@{*/


#define NVIC_IPR7_IPR_N3_SHIFT		24
#define NVIC_IPR7_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr7_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR7_IPR_N2_SHIFT		16
#define NVIC_IPR7_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr7_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR7_IPR_N1_SHIFT		8
#define NVIC_IPR7_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr7_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR7_IPR_N0_SHIFT		0
#define NVIC_IPR7_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr7_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr8 IPR8 Interrupt Priority Register
@{*/


#define NVIC_IPR8_IPR_N3_SHIFT		24
#define NVIC_IPR8_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr8_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR8_IPR_N2_SHIFT		16
#define NVIC_IPR8_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr8_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR8_IPR_N1_SHIFT		8
#define NVIC_IPR8_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr8_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR8_IPR_N0_SHIFT		0
#define NVIC_IPR8_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr8_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr9 IPR9 Interrupt Priority Register
@{*/


#define NVIC_IPR9_IPR_N3_SHIFT		24
#define NVIC_IPR9_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr9_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR9_IPR_N2_SHIFT		16
#define NVIC_IPR9_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr9_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR9_IPR_N1_SHIFT		8
#define NVIC_IPR9_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr9_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR9_IPR_N0_SHIFT		0
#define NVIC_IPR9_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr9_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr10 IPR10 Interrupt Priority Register
@{*/


#define NVIC_IPR10_IPR_N3_SHIFT		24
#define NVIC_IPR10_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr10_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR10_IPR_N2_SHIFT		16
#define NVIC_IPR10_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr10_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR10_IPR_N1_SHIFT		8
#define NVIC_IPR10_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr10_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR10_IPR_N0_SHIFT		0
#define NVIC_IPR10_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr10_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr11 IPR11 Interrupt Priority Register
@{*/


#define NVIC_IPR11_IPR_N3_SHIFT		24
#define NVIC_IPR11_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr11_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR11_IPR_N2_SHIFT		16
#define NVIC_IPR11_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr11_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR11_IPR_N1_SHIFT		8
#define NVIC_IPR11_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr11_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR11_IPR_N0_SHIFT		0
#define NVIC_IPR11_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr11_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr12 IPR12 Interrupt Priority Register
@{*/


#define NVIC_IPR12_IPR_N3_SHIFT		24
#define NVIC_IPR12_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr12_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR12_IPR_N2_SHIFT		16
#define NVIC_IPR12_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr12_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR12_IPR_N1_SHIFT		8
#define NVIC_IPR12_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr12_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR12_IPR_N0_SHIFT		0
#define NVIC_IPR12_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr12_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr13 IPR13 Interrupt Priority Register
@{*/


#define NVIC_IPR13_IPR_N3_SHIFT		24
#define NVIC_IPR13_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr13_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR13_IPR_N2_SHIFT		16
#define NVIC_IPR13_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr13_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR13_IPR_N1_SHIFT		8
#define NVIC_IPR13_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr13_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR13_IPR_N0_SHIFT		0
#define NVIC_IPR13_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr13_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr14 IPR14 Interrupt Priority Register
@{*/


#define NVIC_IPR14_IPR_N3_SHIFT		24
#define NVIC_IPR14_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr14_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR14_IPR_N2_SHIFT		16
#define NVIC_IPR14_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr14_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR14_IPR_N1_SHIFT		8
#define NVIC_IPR14_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr14_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR14_IPR_N0_SHIFT		0
#define NVIC_IPR14_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr14_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr15 IPR15 Interrupt Priority Register
@{*/


#define NVIC_IPR15_IPR_N3_SHIFT		24
#define NVIC_IPR15_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr15_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR15_IPR_N2_SHIFT		16
#define NVIC_IPR15_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr15_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR15_IPR_N1_SHIFT		8
#define NVIC_IPR15_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr15_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR15_IPR_N0_SHIFT		0
#define NVIC_IPR15_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr15_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr16 IPR16 Interrupt Priority Register
@{*/


#define NVIC_IPR16_IPR_N3_SHIFT		24
#define NVIC_IPR16_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr16_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR16_IPR_N2_SHIFT		16
#define NVIC_IPR16_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr16_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR16_IPR_N1_SHIFT		8
#define NVIC_IPR16_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr16_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR16_IPR_N0_SHIFT		0
#define NVIC_IPR16_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr16_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr17 IPR17 Interrupt Priority Register
@{*/


#define NVIC_IPR17_IPR_N3_SHIFT		24
#define NVIC_IPR17_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr17_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR17_IPR_N2_SHIFT		16
#define NVIC_IPR17_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr17_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR17_IPR_N1_SHIFT		8
#define NVIC_IPR17_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr17_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR17_IPR_N0_SHIFT		0
#define NVIC_IPR17_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr17_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr18 IPR18 Interrupt Priority Register
@{*/


#define NVIC_IPR18_IPR_N3_SHIFT		24
#define NVIC_IPR18_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr18_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR18_IPR_N2_SHIFT		16
#define NVIC_IPR18_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr18_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR18_IPR_N1_SHIFT		8
#define NVIC_IPR18_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr18_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR18_IPR_N0_SHIFT		0
#define NVIC_IPR18_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr18_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr19 IPR19 Interrupt Priority Register
@{*/


#define NVIC_IPR19_IPR_N3_SHIFT		24
#define NVIC_IPR19_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr19_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR19_IPR_N2_SHIFT		16
#define NVIC_IPR19_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr19_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR19_IPR_N1_SHIFT		8
#define NVIC_IPR19_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr19_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR19_IPR_N0_SHIFT		0
#define NVIC_IPR19_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr19_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr20 IPR20 Interrupt Priority Register
@{*/


#define NVIC_IPR20_IPR_N3_SHIFT		24
#define NVIC_IPR20_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr20_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR20_IPR_N2_SHIFT		16
#define NVIC_IPR20_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr20_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR20_IPR_N1_SHIFT		8
#define NVIC_IPR20_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr20_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR20_IPR_N0_SHIFT		0
#define NVIC_IPR20_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr20_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr21 IPR21 Interrupt Priority Register
@{*/


#define NVIC_IPR21_IPR_N3_SHIFT		24
#define NVIC_IPR21_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr21_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR21_IPR_N2_SHIFT		16
#define NVIC_IPR21_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr21_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR21_IPR_N1_SHIFT		8
#define NVIC_IPR21_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr21_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR21_IPR_N0_SHIFT		0
#define NVIC_IPR21_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr21_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr22 IPR22 Interrupt Priority Register
@{*/


#define NVIC_IPR22_IPR_N3_SHIFT		24
#define NVIC_IPR22_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr22_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR22_IPR_N2_SHIFT		16
#define NVIC_IPR22_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr22_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR22_IPR_N1_SHIFT		8
#define NVIC_IPR22_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr22_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR22_IPR_N0_SHIFT		0
#define NVIC_IPR22_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr22_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr23 IPR23 Interrupt Priority Register
@{*/


#define NVIC_IPR23_IPR_N3_SHIFT		24
#define NVIC_IPR23_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr23_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR23_IPR_N2_SHIFT		16
#define NVIC_IPR23_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr23_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR23_IPR_N1_SHIFT		8
#define NVIC_IPR23_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr23_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR23_IPR_N0_SHIFT		0
#define NVIC_IPR23_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr23_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr24 IPR24 Interrupt Priority Register
@{*/


#define NVIC_IPR24_IPR_N3_SHIFT		24
#define NVIC_IPR24_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr24_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR24_IPR_N2_SHIFT		16
#define NVIC_IPR24_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr24_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR24_IPR_N1_SHIFT		8
#define NVIC_IPR24_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr24_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR24_IPR_N0_SHIFT		0
#define NVIC_IPR24_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr24_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr25 IPR25 Interrupt Priority Register
@{*/


#define NVIC_IPR25_IPR_N3_SHIFT		24
#define NVIC_IPR25_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr25_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR25_IPR_N2_SHIFT		16
#define NVIC_IPR25_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr25_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR25_IPR_N1_SHIFT		8
#define NVIC_IPR25_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr25_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR25_IPR_N0_SHIFT		0
#define NVIC_IPR25_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr25_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr26 IPR26 Interrupt Priority Register
@{*/


#define NVIC_IPR26_IPR_N3_SHIFT		24
#define NVIC_IPR26_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr26_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR26_IPR_N2_SHIFT		16
#define NVIC_IPR26_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr26_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR26_IPR_N1_SHIFT		8
#define NVIC_IPR26_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr26_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR26_IPR_N0_SHIFT		0
#define NVIC_IPR26_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr26_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr27 IPR27 Interrupt Priority Register
@{*/


#define NVIC_IPR27_IPR_N3_SHIFT		24
#define NVIC_IPR27_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr27_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR27_IPR_N2_SHIFT		16
#define NVIC_IPR27_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr27_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR27_IPR_N1_SHIFT		8
#define NVIC_IPR27_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr27_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR27_IPR_N0_SHIFT		0
#define NVIC_IPR27_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr27_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr28 IPR28 Interrupt Priority Register
@{*/


#define NVIC_IPR28_IPR_N3_SHIFT		24
#define NVIC_IPR28_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr28_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR28_IPR_N2_SHIFT		16
#define NVIC_IPR28_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr28_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR28_IPR_N1_SHIFT		8
#define NVIC_IPR28_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr28_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR28_IPR_N0_SHIFT		0
#define NVIC_IPR28_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr28_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr29 IPR29 Interrupt Priority Register
@{*/


#define NVIC_IPR29_IPR_N3_SHIFT		24
#define NVIC_IPR29_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr29_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR29_IPR_N2_SHIFT		16
#define NVIC_IPR29_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr29_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR29_IPR_N1_SHIFT		8
#define NVIC_IPR29_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr29_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR29_IPR_N0_SHIFT		0
#define NVIC_IPR29_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr29_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr30 IPR30 Interrupt Priority Register
@{*/


#define NVIC_IPR30_IPR_N3_SHIFT		24
#define NVIC_IPR30_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr30_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR30_IPR_N2_SHIFT		16
#define NVIC_IPR30_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr30_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR30_IPR_N1_SHIFT		8
#define NVIC_IPR30_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr30_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR30_IPR_N0_SHIFT		0
#define NVIC_IPR30_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr30_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr31 IPR31 Interrupt Priority Register
@{*/


#define NVIC_IPR31_IPR_N3_SHIFT		24
#define NVIC_IPR31_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr31_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR31_IPR_N2_SHIFT		16
#define NVIC_IPR31_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr31_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR31_IPR_N1_SHIFT		8
#define NVIC_IPR31_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr31_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR31_IPR_N0_SHIFT		0
#define NVIC_IPR31_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr31_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr32 IPR32 Interrupt Priority Register
@{*/


#define NVIC_IPR32_IPR_N3_SHIFT		24
#define NVIC_IPR32_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr32_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR32_IPR_N2_SHIFT		16
#define NVIC_IPR32_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr32_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR32_IPR_N1_SHIFT		8
#define NVIC_IPR32_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr32_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR32_IPR_N0_SHIFT		0
#define NVIC_IPR32_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr32_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr33 IPR33 Interrupt Priority Register
@{*/


#define NVIC_IPR33_IPR_N3_SHIFT		24
#define NVIC_IPR33_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr33_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR33_IPR_N2_SHIFT		16
#define NVIC_IPR33_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr33_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR33_IPR_N1_SHIFT		8
#define NVIC_IPR33_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr33_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR33_IPR_N0_SHIFT		0
#define NVIC_IPR33_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr33_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr34 IPR34 Interrupt Priority Register
@{*/


#define NVIC_IPR34_IPR_N3_SHIFT		24
#define NVIC_IPR34_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr34_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR34_IPR_N2_SHIFT		16
#define NVIC_IPR34_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr34_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR34_IPR_N1_SHIFT		8
#define NVIC_IPR34_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr34_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR34_IPR_N0_SHIFT		0
#define NVIC_IPR34_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr34_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr35 IPR35 Interrupt Priority Register
@{*/


#define NVIC_IPR35_IPR_N3_SHIFT		24
#define NVIC_IPR35_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr35_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR35_IPR_N2_SHIFT		16
#define NVIC_IPR35_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr35_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR35_IPR_N1_SHIFT		8
#define NVIC_IPR35_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr35_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR35_IPR_N0_SHIFT		0
#define NVIC_IPR35_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr35_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr36 IPR36 Interrupt Priority Register
@{*/


#define NVIC_IPR36_IPR_N3_SHIFT		24
#define NVIC_IPR36_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr36_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR36_IPR_N2_SHIFT		16
#define NVIC_IPR36_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr36_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR36_IPR_N1_SHIFT		8
#define NVIC_IPR36_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr36_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR36_IPR_N0_SHIFT		0
#define NVIC_IPR36_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr36_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr37 IPR37 Interrupt Priority Register
@{*/


#define NVIC_IPR37_IPR_N3_SHIFT		24
#define NVIC_IPR37_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr37_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR37_IPR_N2_SHIFT		16
#define NVIC_IPR37_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr37_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR37_IPR_N1_SHIFT		8
#define NVIC_IPR37_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr37_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR37_IPR_N0_SHIFT		0
#define NVIC_IPR37_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr37_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr38 IPR38 Interrupt Priority Register
@{*/


#define NVIC_IPR38_IPR_N3_SHIFT		24
#define NVIC_IPR38_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr38_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR38_IPR_N2_SHIFT		16
#define NVIC_IPR38_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr38_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR38_IPR_N1_SHIFT		8
#define NVIC_IPR38_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr38_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR38_IPR_N0_SHIFT		0
#define NVIC_IPR38_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr38_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr39 IPR39 Interrupt Priority Register
@{*/


#define NVIC_IPR39_IPR_N3_SHIFT		24
#define NVIC_IPR39_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr39_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR39_IPR_N2_SHIFT		16
#define NVIC_IPR39_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr39_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR39_IPR_N1_SHIFT		8
#define NVIC_IPR39_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr39_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR39_IPR_N0_SHIFT		0
#define NVIC_IPR39_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr39_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser3 ISER3 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER3_SETENA_SHIFT		0
#define NVIC_ISER3_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser3_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser4 ISER4 Interrupt Set-Enable Register
@{*/


#define NVIC_ISER4_SETENA_SHIFT		0
#define NVIC_ISER4_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser4_setena SETENA SETENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer3 ICER3 Interrupt Clear-Enable Register
@{*/


#define NVIC_ICER3_CLRENA_SHIFT		0
#define NVIC_ICER3_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer3_clrena CLRENA CLRENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer4 ICER4 Interrupt Clear-Enable Register
@{*/


#define NVIC_ICER4_CLRENA_SHIFT		0
#define NVIC_ICER4_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer4_clrena CLRENA CLRENA
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr3 ISPR3 Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR3_SETPEND_SHIFT		0
#define NVIC_ISPR3_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr3_setpend SETPEND SETPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr4 ISPR4 Interrupt Set-Pending Register
@{*/


#define NVIC_ISPR4_SETPEND_SHIFT		0
#define NVIC_ISPR4_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr4_setpend SETPEND SETPEND
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr3 IABR3 Interrupt Active Bit Register
@{*/


#define NVIC_IABR3_ACTIVE_SHIFT		0
#define NVIC_IABR3_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr3_active ACTIVE ACTIVE
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr4 IABR4 Interrupt Active Bit Register
@{*/


#define NVIC_IABR4_ACTIVE_SHIFT		0
#define NVIC_IABR4_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr4_active ACTIVE ACTIVE
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ipr40 IPR40 Interrupt Priority Register
@{*/


#define NVIC_IPR40_IPR_N3_SHIFT		24
#define NVIC_IPR40_IPR_N3_MASK		0xff
/** @defgroup nvic_ipr40_ipr_n3 IPRN3 IPR_N3
@{*/
/**@}*/


#define NVIC_IPR40_IPR_N2_SHIFT		16
#define NVIC_IPR40_IPR_N2_MASK		0xff
/** @defgroup nvic_ipr40_ipr_n2 IPRN2 IPR_N2
@{*/
/**@}*/


#define NVIC_IPR40_IPR_N1_SHIFT		8
#define NVIC_IPR40_IPR_N1_MASK		0xff
/** @defgroup nvic_ipr40_ipr_n1 IPRN1 IPR_N1
@{*/
/**@}*/


#define NVIC_IPR40_IPR_N0_SHIFT		0
#define NVIC_IPR40_IPR_N0_MASK		0xff
/** @defgroup nvic_ipr40_ipr_n0 IPRN0 IPR_N0
@{*/
/**@}*/


/**@}*/

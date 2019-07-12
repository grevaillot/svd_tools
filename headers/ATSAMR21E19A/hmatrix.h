#pragma once 

/* --- HMATRIX: HSB Matrix ------------------------------------------ */

/** @defgroup hmatrix_registers HSB Matrix Register
@{*/

/** HMATRIX_PRAS0 Priority A for Slave **/
#define HMATRIX_PRAS0			MMIO32(HMATRIX_BASE + 0x80)
/** HMATRIX_PRBS0 Priority B for Slave **/
#define HMATRIX_PRBS0			MMIO32(HMATRIX_BASE + 0x84)
/** HMATRIX_PRAS1 Priority A for Slave **/
#define HMATRIX_PRAS1			MMIO32(HMATRIX_BASE + 0x88)
/** HMATRIX_PRBS1 Priority B for Slave **/
#define HMATRIX_PRBS1			MMIO32(HMATRIX_BASE + 0x8c)
/** HMATRIX_PRAS2 Priority A for Slave **/
#define HMATRIX_PRAS2			MMIO32(HMATRIX_BASE + 0x90)
/** HMATRIX_PRBS2 Priority B for Slave **/
#define HMATRIX_PRBS2			MMIO32(HMATRIX_BASE + 0x94)
/** HMATRIX_PRAS3 Priority A for Slave **/
#define HMATRIX_PRAS3			MMIO32(HMATRIX_BASE + 0x98)
/** HMATRIX_PRBS3 Priority B for Slave **/
#define HMATRIX_PRBS3			MMIO32(HMATRIX_BASE + 0x9c)
/** HMATRIX_PRAS4 Priority A for Slave **/
#define HMATRIX_PRAS4			MMIO32(HMATRIX_BASE + 0xa0)
/** HMATRIX_PRBS4 Priority B for Slave **/
#define HMATRIX_PRBS4			MMIO32(HMATRIX_BASE + 0xa4)
/** HMATRIX_PRAS5 Priority A for Slave **/
#define HMATRIX_PRAS5			MMIO32(HMATRIX_BASE + 0xa8)
/** HMATRIX_PRBS5 Priority B for Slave **/
#define HMATRIX_PRBS5			MMIO32(HMATRIX_BASE + 0xac)
/** HMATRIX_PRAS6 Priority A for Slave **/
#define HMATRIX_PRAS6			MMIO32(HMATRIX_BASE + 0xb0)
/** HMATRIX_PRBS6 Priority B for Slave **/
#define HMATRIX_PRBS6			MMIO32(HMATRIX_BASE + 0xb4)
/** HMATRIX_PRAS7 Priority A for Slave **/
#define HMATRIX_PRAS7			MMIO32(HMATRIX_BASE + 0xb8)
/** HMATRIX_PRBS7 Priority B for Slave **/
#define HMATRIX_PRBS7			MMIO32(HMATRIX_BASE + 0xbc)
/** HMATRIX_PRAS8 Priority A for Slave **/
#define HMATRIX_PRAS8			MMIO32(HMATRIX_BASE + 0xc0)
/** HMATRIX_PRBS8 Priority B for Slave **/
#define HMATRIX_PRBS8			MMIO32(HMATRIX_BASE + 0xc4)
/** HMATRIX_PRAS9 Priority A for Slave **/
#define HMATRIX_PRAS9			MMIO32(HMATRIX_BASE + 0xc8)
/** HMATRIX_PRBS9 Priority B for Slave **/
#define HMATRIX_PRBS9			MMIO32(HMATRIX_BASE + 0xcc)
/** HMATRIX_PRAS10 Priority A for Slave **/
#define HMATRIX_PRAS10			MMIO32(HMATRIX_BASE + 0xd0)
/** HMATRIX_PRBS10 Priority B for Slave **/
#define HMATRIX_PRBS10			MMIO32(HMATRIX_BASE + 0xd4)
/** HMATRIX_PRAS11 Priority A for Slave **/
#define HMATRIX_PRAS11			MMIO32(HMATRIX_BASE + 0xd8)
/** HMATRIX_PRBS11 Priority B for Slave **/
#define HMATRIX_PRBS11			MMIO32(HMATRIX_BASE + 0xdc)
/** HMATRIX_PRAS12 Priority A for Slave **/
#define HMATRIX_PRAS12			MMIO32(HMATRIX_BASE + 0xe0)
/** HMATRIX_PRBS12 Priority B for Slave **/
#define HMATRIX_PRBS12			MMIO32(HMATRIX_BASE + 0xe4)
/** HMATRIX_PRAS13 Priority A for Slave **/
#define HMATRIX_PRAS13			MMIO32(HMATRIX_BASE + 0xe8)
/** HMATRIX_PRBS13 Priority B for Slave **/
#define HMATRIX_PRBS13			MMIO32(HMATRIX_BASE + 0xec)
/** HMATRIX_PRAS14 Priority A for Slave **/
#define HMATRIX_PRAS14			MMIO32(HMATRIX_BASE + 0xf0)
/** HMATRIX_PRBS14 Priority B for Slave **/
#define HMATRIX_PRBS14			MMIO32(HMATRIX_BASE + 0xf4)
/** HMATRIX_PRAS15 Priority A for Slave **/
#define HMATRIX_PRAS15			MMIO32(HMATRIX_BASE + 0xf8)
/** HMATRIX_PRBS15 Priority B for Slave **/
#define HMATRIX_PRBS15			MMIO32(HMATRIX_BASE + 0xfc)
/** HMATRIX_SFR0 Special Function **/
#define HMATRIX_SFR0			MMIO32(HMATRIX_BASE + 0x110)
/** HMATRIX_SFR1 Special Function **/
#define HMATRIX_SFR1			MMIO32(HMATRIX_BASE + 0x114)
/** HMATRIX_SFR2 Special Function **/
#define HMATRIX_SFR2			MMIO32(HMATRIX_BASE + 0x118)
/** HMATRIX_SFR3 Special Function **/
#define HMATRIX_SFR3			MMIO32(HMATRIX_BASE + 0x11c)
/** HMATRIX_SFR4 Special Function **/
#define HMATRIX_SFR4			MMIO32(HMATRIX_BASE + 0x120)
/** HMATRIX_SFR5 Special Function **/
#define HMATRIX_SFR5			MMIO32(HMATRIX_BASE + 0x124)
/** HMATRIX_SFR6 Special Function **/
#define HMATRIX_SFR6			MMIO32(HMATRIX_BASE + 0x128)
/** HMATRIX_SFR7 Special Function **/
#define HMATRIX_SFR7			MMIO32(HMATRIX_BASE + 0x12c)
/** HMATRIX_SFR8 Special Function **/
#define HMATRIX_SFR8			MMIO32(HMATRIX_BASE + 0x130)
/** HMATRIX_SFR9 Special Function **/
#define HMATRIX_SFR9			MMIO32(HMATRIX_BASE + 0x134)
/** HMATRIX_SFR10 Special Function **/
#define HMATRIX_SFR10			MMIO32(HMATRIX_BASE + 0x138)
/** HMATRIX_SFR11 Special Function **/
#define HMATRIX_SFR11			MMIO32(HMATRIX_BASE + 0x13c)
/** HMATRIX_SFR12 Special Function **/
#define HMATRIX_SFR12			MMIO32(HMATRIX_BASE + 0x140)
/** HMATRIX_SFR13 Special Function **/
#define HMATRIX_SFR13			MMIO32(HMATRIX_BASE + 0x144)
/** HMATRIX_SFR14 Special Function **/
#define HMATRIX_SFR14			MMIO32(HMATRIX_BASE + 0x148)
/** HMATRIX_SFR15 Special Function **/
#define HMATRIX_SFR15			MMIO32(HMATRIX_BASE + 0x14c)

/**@}*/


/** @defgroup hmatrix_pras0 PRAS0 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs0 PRBS0 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras1 PRAS1 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs1 PRBS1 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras2 PRAS2 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs2 PRBS2 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras3 PRAS3 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs3 PRBS3 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras4 PRAS4 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs4 PRBS4 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras5 PRAS5 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs5 PRBS5 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras6 PRAS6 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs6 PRBS6 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras7 PRAS7 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs7 PRBS7 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras8 PRAS8 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs8 PRBS8 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras9 PRAS9 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs9 PRBS9 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras10 PRAS10 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs10 PRBS10 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras11 PRAS11 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs11 PRBS11 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras12 PRAS12 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs12 PRBS12 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras13 PRAS13 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs13 PRBS13 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras14 PRAS14 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs14 PRBS14 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_pras15 PRAS15 Priority A for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_prbs15 PRBS15 Priority B for Slave
@{*/


/**@}*/

/** @defgroup hmatrix_sfr0 SFR0 Special Function
@{*/


#define HMATRIX_SFR0_SFR_SHIFT		0
#define HMATRIX_SFR0_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr0_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr1 SFR1 Special Function
@{*/


#define HMATRIX_SFR1_SFR_SHIFT		0
#define HMATRIX_SFR1_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr1_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr2 SFR2 Special Function
@{*/


#define HMATRIX_SFR2_SFR_SHIFT		0
#define HMATRIX_SFR2_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr2_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr3 SFR3 Special Function
@{*/


#define HMATRIX_SFR3_SFR_SHIFT		0
#define HMATRIX_SFR3_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr3_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr4 SFR4 Special Function
@{*/


#define HMATRIX_SFR4_SFR_SHIFT		0
#define HMATRIX_SFR4_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr4_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr5 SFR5 Special Function
@{*/


#define HMATRIX_SFR5_SFR_SHIFT		0
#define HMATRIX_SFR5_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr5_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr6 SFR6 Special Function
@{*/


#define HMATRIX_SFR6_SFR_SHIFT		0
#define HMATRIX_SFR6_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr6_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr7 SFR7 Special Function
@{*/


#define HMATRIX_SFR7_SFR_SHIFT		0
#define HMATRIX_SFR7_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr7_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr8 SFR8 Special Function
@{*/


#define HMATRIX_SFR8_SFR_SHIFT		0
#define HMATRIX_SFR8_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr8_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr9 SFR9 Special Function
@{*/


#define HMATRIX_SFR9_SFR_SHIFT		0
#define HMATRIX_SFR9_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr9_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr10 SFR10 Special Function
@{*/


#define HMATRIX_SFR10_SFR_SHIFT		0
#define HMATRIX_SFR10_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr10_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr11 SFR11 Special Function
@{*/


#define HMATRIX_SFR11_SFR_SHIFT		0
#define HMATRIX_SFR11_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr11_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr12 SFR12 Special Function
@{*/


#define HMATRIX_SFR12_SFR_SHIFT		0
#define HMATRIX_SFR12_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr12_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr13 SFR13 Special Function
@{*/


#define HMATRIX_SFR13_SFR_SHIFT		0
#define HMATRIX_SFR13_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr13_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr14 SFR14 Special Function
@{*/


#define HMATRIX_SFR14_SFR_SHIFT		0
#define HMATRIX_SFR14_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr14_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hmatrix_sfr15 SFR15 Special Function
@{*/


#define HMATRIX_SFR15_SFR_SHIFT		0
#define HMATRIX_SFR15_SFR_MASK		0xffffffff
/** @defgroup hmatrix_sfr15_sfr SFR Special Function Register
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- SYSCFG: System configuration controller ---------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/

/** SYSCFG_MEMRMP memory remap register **/
#define SYSCFG_MEMRMP			MMIO32(SYSCFG_BASE + 0x00)
/** SYSCFG_CFGR1 configuration register 1 **/
#define SYSCFG_CFGR1			MMIO32(SYSCFG_BASE + 0x04)
/** SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_EXTICR1			MMIO32(SYSCFG_BASE + 0x08)
/** SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_EXTICR2			MMIO32(SYSCFG_BASE + 0x0c)
/** SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_EXTICR3			MMIO32(SYSCFG_BASE + 0x10)
/** SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_EXTICR4			MMIO32(SYSCFG_BASE + 0x14)
/** SYSCFG_SCSR SCSR **/
#define SYSCFG_SCSR			MMIO32(SYSCFG_BASE + 0x18)
/** SYSCFG_CFGR2 CFGR2 **/
#define SYSCFG_CFGR2			MMIO32(SYSCFG_BASE + 0x1c)
/** SYSCFG_SWPR SWPR **/
#define SYSCFG_SWPR			MMIO32(SYSCFG_BASE + 0x20)
/** SYSCFG_SKR SKR **/
#define SYSCFG_SKR			MMIO32(SYSCFG_BASE + 0x24)

/**@}*/


/** @defgroup syscfg_memrmp MEMRMP memory remap register
@{*/

/** SYSCFG_MEMRMP_FB_MODE Flash Bank mode selection **/
#define SYSCFG_MEMRMP_FB_MODE		(1 << 8)
/** SYSCFG_MEMRMP_QFS QUADSPI memory mapping swap **/
#define SYSCFG_MEMRMP_QFS		(1 << 3)

#define SYSCFG_MEMRMP_MEM_MODE_SHIFT		0
#define SYSCFG_MEMRMP_MEM_MODE_MASK		0x07
/** @defgroup syscfg_memrmp_mem_mode MEMMODE Memory mapping selection
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_cfgr1 CFGR1 configuration register 1
@{*/


#define SYSCFG_CFGR1_FPU_IE_SHIFT		26
#define SYSCFG_CFGR1_FPU_IE_MASK		0x3f
/** @defgroup syscfg_cfgr1_fpu_ie FPUIE Floating Point Unit interrupts enable bits
@{*/
/**@}*/

/** SYSCFG_CFGR1_I2C3_FMP I2C3 Fast-mode Plus driving capability activation **/
#define SYSCFG_CFGR1_I2C3_FMP		(1 << 22)
/** SYSCFG_CFGR1_I2C2_FMP I2C2 Fast-mode Plus driving capability activation **/
#define SYSCFG_CFGR1_I2C2_FMP		(1 << 21)
/** SYSCFG_CFGR1_I2C1_FMP I2C1 Fast-mode Plus driving capability activation **/
#define SYSCFG_CFGR1_I2C1_FMP		(1 << 20)
/** SYSCFG_CFGR1_I2C_PB9_FMP Fast-mode Plus (Fm+) driving capability activation on PB9 **/
#define SYSCFG_CFGR1_I2C_PB9_FMP		(1 << 19)
/** SYSCFG_CFGR1_I2C_PB8_FMP Fast-mode Plus (Fm+) driving capability activation on PB8 **/
#define SYSCFG_CFGR1_I2C_PB8_FMP		(1 << 18)
/** SYSCFG_CFGR1_I2C_PB7_FMP Fast-mode Plus (Fm+) driving capability activation on PB7 **/
#define SYSCFG_CFGR1_I2C_PB7_FMP		(1 << 17)
/** SYSCFG_CFGR1_I2C_PB6_FMP Fast-mode Plus (Fm+) driving capability activation on PB6 **/
#define SYSCFG_CFGR1_I2C_PB6_FMP		(1 << 16)
/** SYSCFG_CFGR1_BOOSTEN I/O analog switch voltage booster enable **/
#define SYSCFG_CFGR1_BOOSTEN		(1 << 8)
/** SYSCFG_CFGR1_FWDIS Firewall disable **/
#define SYSCFG_CFGR1_FWDIS		(1 << 0)

/**@}*/

/** @defgroup syscfg_exticr1 EXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_EXTICR1_EXTI3_MASK		0x07
/** @defgroup syscfg_exticr1_exti3 EXTI3 EXTI 3 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_EXTICR1_EXTI2_MASK		0x07
/** @defgroup syscfg_exticr1_exti2 EXTI2 EXTI 2 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_EXTICR1_EXTI1_MASK		0x07
/** @defgroup syscfg_exticr1_exti1 EXTI1 EXTI 1 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_EXTICR1_EXTI0_MASK		0x07
/** @defgroup syscfg_exticr1_exti0 EXTI0 EXTI 0 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr2 EXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_EXTICR2_EXTI7_MASK		0x07
/** @defgroup syscfg_exticr2_exti7 EXTI7 EXTI 7 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_EXTICR2_EXTI6_MASK		0x07
/** @defgroup syscfg_exticr2_exti6 EXTI6 EXTI 6 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_EXTICR2_EXTI5_MASK		0x07
/** @defgroup syscfg_exticr2_exti5 EXTI5 EXTI 5 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_EXTICR2_EXTI4_MASK		0x07
/** @defgroup syscfg_exticr2_exti4 EXTI4 EXTI 4 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr3 EXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_EXTICR3_EXTI11_MASK		0x07
/** @defgroup syscfg_exticr3_exti11 EXTI11 EXTI 11 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_EXTICR3_EXTI10_MASK		0x07
/** @defgroup syscfg_exticr3_exti10 EXTI10 EXTI 10 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_EXTICR3_EXTI9_MASK		0x07
/** @defgroup syscfg_exticr3_exti9 EXTI9 EXTI 9 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_EXTICR3_EXTI8_MASK		0x07
/** @defgroup syscfg_exticr3_exti8 EXTI8 EXTI 8 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr4 EXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_EXTICR4_EXTI15_MASK		0x07
/** @defgroup syscfg_exticr4_exti15 EXTI15 EXTI15 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_EXTICR4_EXTI14_MASK		0x07
/** @defgroup syscfg_exticr4_exti14 EXTI14 EXTI14 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_EXTICR4_EXTI13_MASK		0x07
/** @defgroup syscfg_exticr4_exti13 EXTI13 EXTI13 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_EXTICR4_EXTI12_MASK		0x07
/** @defgroup syscfg_exticr4_exti12 EXTI12 EXTI12 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_scsr SCSR SCSR
@{*/

/** SYSCFG_SCSR_SRAM2BSY SRAM2 busy by erase operation **/
#define SYSCFG_SCSR_SRAM2BSY		(1 << 1)
/** SYSCFG_SCSR_SRAM2ER SRAM2 Erase **/
#define SYSCFG_SCSR_SRAM2ER		(1 << 0)

/**@}*/

/** @defgroup syscfg_cfgr2 CFGR2 CFGR2
@{*/

/** SYSCFG_CFGR2_SPF SRAM2 parity error flag **/
#define SYSCFG_CFGR2_SPF		(1 << 8)
/** SYSCFG_CFGR2_ECCL ECC Lock **/
#define SYSCFG_CFGR2_ECCL		(1 << 3)
/** SYSCFG_CFGR2_PVDL PVD lock enable bit **/
#define SYSCFG_CFGR2_PVDL		(1 << 2)
/** SYSCFG_CFGR2_SPL SRAM2 parity lock bit **/
#define SYSCFG_CFGR2_SPL		(1 << 1)
/** SYSCFG_CFGR2_CLL OCKUP (Hardfault) output enable bit **/
#define SYSCFG_CFGR2_CLL		(1 << 0)

/**@}*/

/** @defgroup syscfg_swpr SWPR SWPR
@{*/

/** SYSCFG_SWPR_P31WP SRAM2 page 31 write protection **/
#define SYSCFG_SWPR_P31WP		(1 << 31)
/** SYSCFG_SWPR_P30WP P30WP **/
#define SYSCFG_SWPR_P30WP		(1 << 30)
/** SYSCFG_SWPR_P29WP P29WP **/
#define SYSCFG_SWPR_P29WP		(1 << 29)
/** SYSCFG_SWPR_P28WP P28WP **/
#define SYSCFG_SWPR_P28WP		(1 << 28)
/** SYSCFG_SWPR_P27WP P27WP **/
#define SYSCFG_SWPR_P27WP		(1 << 27)
/** SYSCFG_SWPR_P26WP P26WP **/
#define SYSCFG_SWPR_P26WP		(1 << 26)
/** SYSCFG_SWPR_P25WP P25WP **/
#define SYSCFG_SWPR_P25WP		(1 << 25)
/** SYSCFG_SWPR_P24WP P24WP **/
#define SYSCFG_SWPR_P24WP		(1 << 24)
/** SYSCFG_SWPR_P23WP P23WP **/
#define SYSCFG_SWPR_P23WP		(1 << 23)
/** SYSCFG_SWPR_P22WP P22WP **/
#define SYSCFG_SWPR_P22WP		(1 << 22)
/** SYSCFG_SWPR_P21WP P21WP **/
#define SYSCFG_SWPR_P21WP		(1 << 21)
/** SYSCFG_SWPR_P20WP P20WP **/
#define SYSCFG_SWPR_P20WP		(1 << 20)
/** SYSCFG_SWPR_P19WP P19WP **/
#define SYSCFG_SWPR_P19WP		(1 << 19)
/** SYSCFG_SWPR_P18WP P18WP **/
#define SYSCFG_SWPR_P18WP		(1 << 18)
/** SYSCFG_SWPR_P17WP P17WP **/
#define SYSCFG_SWPR_P17WP		(1 << 17)
/** SYSCFG_SWPR_P16WP P16WP **/
#define SYSCFG_SWPR_P16WP		(1 << 16)
/** SYSCFG_SWPR_P15WP P15WP **/
#define SYSCFG_SWPR_P15WP		(1 << 15)
/** SYSCFG_SWPR_P14WP P14WP **/
#define SYSCFG_SWPR_P14WP		(1 << 14)
/** SYSCFG_SWPR_P13WP P13WP **/
#define SYSCFG_SWPR_P13WP		(1 << 13)
/** SYSCFG_SWPR_P12WP P12WP **/
#define SYSCFG_SWPR_P12WP		(1 << 12)
/** SYSCFG_SWPR_P11WP P11WP **/
#define SYSCFG_SWPR_P11WP		(1 << 11)
/** SYSCFG_SWPR_P10WP P10WP **/
#define SYSCFG_SWPR_P10WP		(1 << 10)
/** SYSCFG_SWPR_P9WP P9WP **/
#define SYSCFG_SWPR_P9WP		(1 << 9)
/** SYSCFG_SWPR_P8WP P8WP **/
#define SYSCFG_SWPR_P8WP		(1 << 8)
/** SYSCFG_SWPR_P7WP P7WP **/
#define SYSCFG_SWPR_P7WP		(1 << 7)
/** SYSCFG_SWPR_P6WP P6WP **/
#define SYSCFG_SWPR_P6WP		(1 << 6)
/** SYSCFG_SWPR_P5WP P5WP **/
#define SYSCFG_SWPR_P5WP		(1 << 5)
/** SYSCFG_SWPR_P4WP P4WP **/
#define SYSCFG_SWPR_P4WP		(1 << 4)
/** SYSCFG_SWPR_P3WP P3WP **/
#define SYSCFG_SWPR_P3WP		(1 << 3)
/** SYSCFG_SWPR_P2WP P2WP **/
#define SYSCFG_SWPR_P2WP		(1 << 2)
/** SYSCFG_SWPR_P1WP P1WP **/
#define SYSCFG_SWPR_P1WP		(1 << 1)
/** SYSCFG_SWPR_P0WP P0WP **/
#define SYSCFG_SWPR_P0WP		(1 << 0)

/**@}*/

/** @defgroup syscfg_skr SKR SKR
@{*/


#define SYSCFG_SKR_KEY_SHIFT		0
#define SYSCFG_SKR_KEY_MASK		0xff
/** @defgroup syscfg_skr_key KEY SRAM2 write protection key for software erase
@{*/
/**@}*/


/**@}*/

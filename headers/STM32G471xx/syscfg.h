#pragma once 

/* --- SYSCFG: System configuration controller ---------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/

/** SYSCFG_MEMRMP Remap Memory register **/
#define SYSCFG_MEMRMP			MMIO32(SYSCFG_BASE + 0x00)
/** SYSCFG_CFGR1 peripheral mode configuration register **/
#define SYSCFG_CFGR1			MMIO32(SYSCFG_BASE + 0x04)
/** SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_EXTICR1			MMIO32(SYSCFG_BASE + 0x08)
/** SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_EXTICR2			MMIO32(SYSCFG_BASE + 0x0c)
/** SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_EXTICR3			MMIO32(SYSCFG_BASE + 0x10)
/** SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_EXTICR4			MMIO32(SYSCFG_BASE + 0x14)
/** SYSCFG_SCSR CCM SRAM control and status register **/
#define SYSCFG_SCSR			MMIO32(SYSCFG_BASE + 0x18)
/** SYSCFG_CFGR2 configuration register 2 **/
#define SYSCFG_CFGR2			MMIO32(SYSCFG_BASE + 0x1c)
/** SYSCFG_SWPR SRAM Write protection register 1 **/
#define SYSCFG_SWPR			MMIO32(SYSCFG_BASE + 0x20)
/** SYSCFG_SKR SRAM2 Key Register **/
#define SYSCFG_SKR			MMIO32(SYSCFG_BASE + 0x24)

/**@}*/


/** @defgroup syscfg_memrmp MEMRMP Remap Memory register
@{*/

/** SYSCFG_MEMRMP_FB_mode User Flash Bank mode **/
#define SYSCFG_MEMRMP_FB_mode		(1 << 8)

#define SYSCFG_MEMRMP_MEM_MODE_SHIFT		0
#define SYSCFG_MEMRMP_MEM_MODE_MASK		0x07
/** @defgroup syscfg_memrmp_mem_mode MEMMODE Memory mapping selection
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_cfgr1 CFGR1 peripheral mode configuration register
@{*/


#define SYSCFG_CFGR1_FPU_IE_SHIFT		26
#define SYSCFG_CFGR1_FPU_IE_MASK		0x3f
/** @defgroup syscfg_cfgr1_fpu_ie FPUIE FPU Interrupts Enable
@{*/
/**@}*/

/** SYSCFG_CFGR1_I2C4_FMP I2C1 FM+ drive capability enable **/
#define SYSCFG_CFGR1_I2C4_FMP		(1 << 23)
/** SYSCFG_CFGR1_I2C3_FMP I2C1 FM+ drive capability enable **/
#define SYSCFG_CFGR1_I2C3_FMP		(1 << 22)
/** SYSCFG_CFGR1_I2C2_FMP I2C1 FM+ drive capability enable **/
#define SYSCFG_CFGR1_I2C2_FMP		(1 << 21)
/** SYSCFG_CFGR1_I2C1_FMP I2C1 FM+ drive capability enable **/
#define SYSCFG_CFGR1_I2C1_FMP		(1 << 20)
/** SYSCFG_CFGR1_I2C_PB9_FMP FM+ drive capability on PB6 **/
#define SYSCFG_CFGR1_I2C_PB9_FMP		(1 << 19)
/** SYSCFG_CFGR1_I2C_PB8_FMP FM+ drive capability on PB6 **/
#define SYSCFG_CFGR1_I2C_PB8_FMP		(1 << 18)
/** SYSCFG_CFGR1_I2C_PB7_FMP FM+ drive capability on PB6 **/
#define SYSCFG_CFGR1_I2C_PB7_FMP		(1 << 17)
/** SYSCFG_CFGR1_I2C_PB6_FMP FM+ drive capability on PB6 **/
#define SYSCFG_CFGR1_I2C_PB6_FMP		(1 << 16)
/** SYSCFG_CFGR1_ANASWVDD GPIO analog switch control voltage selection **/
#define SYSCFG_CFGR1_ANASWVDD		(1 << 9)
/** SYSCFG_CFGR1_BOOSTEN BOOSTEN **/
#define SYSCFG_CFGR1_BOOSTEN		(1 << 8)

/**@}*/

/** @defgroup syscfg_exticr1 EXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup syscfg_exticr1_exti3 EXTI3 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup syscfg_exticr1_exti2 EXTI2 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup syscfg_exticr1_exti1 EXTI1 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup syscfg_exticr1_exti0 EXTI0 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr2 EXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup syscfg_exticr2_exti7 EXTI7 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup syscfg_exticr2_exti6 EXTI6 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup syscfg_exticr2_exti5 EXTI5 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup syscfg_exticr2_exti4 EXTI4 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr3 EXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup syscfg_exticr3_exti11 EXTI11 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup syscfg_exticr3_exti10 EXTI10 EXTI10
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup syscfg_exticr3_exti9 EXTI9 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup syscfg_exticr3_exti8 EXTI8 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr4 EXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup syscfg_exticr4_exti15 EXTI15 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup syscfg_exticr4_exti14 EXTI14 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup syscfg_exticr4_exti13 EXTI13 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup syscfg_exticr4_exti12 EXTI12 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_scsr SCSR CCM SRAM control and status register
@{*/

/** SYSCFG_SCSR_CCMBSY CCM SRAM busy by erase operation **/
#define SYSCFG_SCSR_CCMBSY		(1 << 1)
/** SYSCFG_SCSR_CCMER CCM SRAM Erase **/
#define SYSCFG_SCSR_CCMER		(1 << 0)

/**@}*/

/** @defgroup syscfg_cfgr2 CFGR2 configuration register 2
@{*/

/** SYSCFG_CFGR2_SPF SRAM Parity Flag **/
#define SYSCFG_CFGR2_SPF		(1 << 8)
/** SYSCFG_CFGR2_ECCL ECC Lock **/
#define SYSCFG_CFGR2_ECCL		(1 << 3)
/** SYSCFG_CFGR2_PVDL PVD Lock **/
#define SYSCFG_CFGR2_PVDL		(1 << 2)
/** SYSCFG_CFGR2_SPL SRAM Parity Lock **/
#define SYSCFG_CFGR2_SPL		(1 << 1)
/** SYSCFG_CFGR2_CLL Core Lockup Lock **/
#define SYSCFG_CFGR2_CLL		(1 << 0)

/**@}*/

/** @defgroup syscfg_swpr SWPR SRAM Write protection register 1
@{*/

/** SYSCFG_SWPR_Page31_WP Write protection **/
#define SYSCFG_SWPR_Page31_WP		(1 << 31)
/** SYSCFG_SWPR_Page30_WP Write protection **/
#define SYSCFG_SWPR_Page30_WP		(1 << 30)
/** SYSCFG_SWPR_Page29_WP Write protection **/
#define SYSCFG_SWPR_Page29_WP		(1 << 29)
/** SYSCFG_SWPR_Page28_WP Write protection **/
#define SYSCFG_SWPR_Page28_WP		(1 << 28)
/** SYSCFG_SWPR_Page27_WP Write protection **/
#define SYSCFG_SWPR_Page27_WP		(1 << 27)
/** SYSCFG_SWPR_Page26_WP Write protection **/
#define SYSCFG_SWPR_Page26_WP		(1 << 26)
/** SYSCFG_SWPR_Page25_WP Write protection **/
#define SYSCFG_SWPR_Page25_WP		(1 << 25)
/** SYSCFG_SWPR_Page24_WP Write protection **/
#define SYSCFG_SWPR_Page24_WP		(1 << 24)
/** SYSCFG_SWPR_Page23_WP Write protection **/
#define SYSCFG_SWPR_Page23_WP		(1 << 23)
/** SYSCFG_SWPR_Page22_WP Write protection **/
#define SYSCFG_SWPR_Page22_WP		(1 << 22)
/** SYSCFG_SWPR_Page21_WP Write protection **/
#define SYSCFG_SWPR_Page21_WP		(1 << 21)
/** SYSCFG_SWPR_Page20_WP Write protection **/
#define SYSCFG_SWPR_Page20_WP		(1 << 20)
/** SYSCFG_SWPR_Page19_WP Write protection **/
#define SYSCFG_SWPR_Page19_WP		(1 << 19)
/** SYSCFG_SWPR_Page18_WP Write protection **/
#define SYSCFG_SWPR_Page18_WP		(1 << 18)
/** SYSCFG_SWPR_Page17_WP Write protection **/
#define SYSCFG_SWPR_Page17_WP		(1 << 17)
/** SYSCFG_SWPR_Page16_WP Write protection **/
#define SYSCFG_SWPR_Page16_WP		(1 << 16)
/** SYSCFG_SWPR_Page15_WP Write protection **/
#define SYSCFG_SWPR_Page15_WP		(1 << 15)
/** SYSCFG_SWPR_Page14_WP Write protection **/
#define SYSCFG_SWPR_Page14_WP		(1 << 14)
/** SYSCFG_SWPR_Page13_WP Write protection **/
#define SYSCFG_SWPR_Page13_WP		(1 << 13)
/** SYSCFG_SWPR_Page12_WP Write protection **/
#define SYSCFG_SWPR_Page12_WP		(1 << 12)
/** SYSCFG_SWPR_Page11_WP Write protection **/
#define SYSCFG_SWPR_Page11_WP		(1 << 11)
/** SYSCFG_SWPR_Page10_WP Write protection **/
#define SYSCFG_SWPR_Page10_WP		(1 << 10)
/** SYSCFG_SWPR_Page9_WP Write protection **/
#define SYSCFG_SWPR_Page9_WP		(1 << 9)
/** SYSCFG_SWPR_Page8_WP Write protection **/
#define SYSCFG_SWPR_Page8_WP		(1 << 8)
/** SYSCFG_SWPR_Page7_WP Write protection **/
#define SYSCFG_SWPR_Page7_WP		(1 << 7)
/** SYSCFG_SWPR_Page6_WP Write protection **/
#define SYSCFG_SWPR_Page6_WP		(1 << 6)
/** SYSCFG_SWPR_Page5_WP Write protection **/
#define SYSCFG_SWPR_Page5_WP		(1 << 5)
/** SYSCFG_SWPR_Page4_WP Write protection **/
#define SYSCFG_SWPR_Page4_WP		(1 << 4)
/** SYSCFG_SWPR_Page3_WP Write protection **/
#define SYSCFG_SWPR_Page3_WP		(1 << 3)
/** SYSCFG_SWPR_Page2_WP Write protection **/
#define SYSCFG_SWPR_Page2_WP		(1 << 2)
/** SYSCFG_SWPR_Page1_WP Write protection **/
#define SYSCFG_SWPR_Page1_WP		(1 << 1)
/** SYSCFG_SWPR_Page0_WP Write protection **/
#define SYSCFG_SWPR_Page0_WP		(1 << 0)

/**@}*/

/** @defgroup syscfg_skr SKR SRAM2 Key Register
@{*/


#define SYSCFG_SKR_KEY_SHIFT		0
#define SYSCFG_SKR_KEY_MASK		0xff
/** @defgroup syscfg_skr_key KEY SRAM2 Key for software erase
@{*/
/**@}*/


/**@}*/

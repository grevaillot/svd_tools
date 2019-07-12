#pragma once 

/* --- SYSCFG: System configuration controller ---------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/

/** SYSCFG_MEMRMP memory remap register **/
#define SYSCFG_MEMRMP			MMIO32(SYSCFG_BASE + 0x00)
/** SYSCFG_PMC peripheral mode configuration register **/
#define SYSCFG_PMC			MMIO32(SYSCFG_BASE + 0x04)
/** SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_EXTICR1			MMIO32(SYSCFG_BASE + 0x08)
/** SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_EXTICR2			MMIO32(SYSCFG_BASE + 0x0c)
/** SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_EXTICR3			MMIO32(SYSCFG_BASE + 0x10)
/** SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_EXTICR4			MMIO32(SYSCFG_BASE + 0x14)
/** SYSCFG_CMPCR Compensation cell control register **/
#define SYSCFG_CMPCR			MMIO32(SYSCFG_BASE + 0x20)

/**@}*/


/** @defgroup syscfg_memrmp MEMRMP memory remap register
@{*/


#define SYSCFG_MEMRMP_SWP_FMC_SHIFT		10
#define SYSCFG_MEMRMP_SWP_FMC_MASK		0x03
/** @defgroup syscfg_memrmp_swp_fmc SWPFMC FMC memory mapping swap
@{*/
/**@}*/

/** SYSCFG_MEMRMP_MEM_BOOT Memory boot mapping **/
#define SYSCFG_MEMRMP_MEM_BOOT		(1 << 0)

/**@}*/

/** @defgroup syscfg_pmc PMC peripheral mode configuration register
@{*/


#define SYSCFG_PMC_ADCDC2_SHIFT		16
#define SYSCFG_PMC_ADCDC2_MASK		0x07
/** @defgroup syscfg_pmc_adcdc2 ADCDC2 ADC3DC2
@{*/
/**@}*/

/** SYSCFG_PMC_PB9_FMP Fast Mode + Enable **/
#define SYSCFG_PMC_PB9_FMP		(1 << 7)
/** SYSCFG_PMC_PB8_FMP PB8_FMP Fast Mode + Enable **/
#define SYSCFG_PMC_PB8_FMP		(1 << 6)
/** SYSCFG_PMC_PB7_FMP PB7_FMP Fast Mode + Enable **/
#define SYSCFG_PMC_PB7_FMP		(1 << 5)
/** SYSCFG_PMC_PB6_FMP PB6_FMP Fast Mode **/
#define SYSCFG_PMC_PB6_FMP		(1 << 4)
/** SYSCFG_PMC_I2C3_FMP I2C3_FMP I2C3 Fast Mode + Enable **/
#define SYSCFG_PMC_I2C3_FMP		(1 << 2)
/** SYSCFG_PMC_I2C2_FMP I2C2_FMP I2C2 Fast Mode + Enable **/
#define SYSCFG_PMC_I2C2_FMP		(1 << 1)
/** SYSCFG_PMC_I2C1_FMP I2C1_FMP I2C1 Fast Mode + Enable **/
#define SYSCFG_PMC_I2C1_FMP		(1 << 0)

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

/** @defgroup syscfg_cmpcr CMPCR Compensation cell control register
@{*/

/** SYSCFG_CMPCR_READY READY **/
#define SYSCFG_CMPCR_READY		(1 << 8)
/** SYSCFG_CMPCR_CMP_PD Compensation cell power-down **/
#define SYSCFG_CMPCR_CMP_PD		(1 << 0)

/**@}*/

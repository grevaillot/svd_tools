#pragma once 

/* --- SYSCFG: System configuration controller ---------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/

/** SYSCFG_CFGR1 configuration register 1 **/
#define SYSCFG_CFGR1			MMIO32(SYSCFG_BASE + 0x00)
/** SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_EXTICR1			MMIO32(SYSCFG_BASE + 0x08)
/** SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_EXTICR2			MMIO32(SYSCFG_BASE + 0x0c)
/** SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_EXTICR3			MMIO32(SYSCFG_BASE + 0x10)
/** SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_EXTICR4			MMIO32(SYSCFG_BASE + 0x14)
/** SYSCFG_CFGR2 configuration register 2 **/
#define SYSCFG_CFGR2			MMIO32(SYSCFG_BASE + 0x18)

/**@}*/


/** @defgroup syscfg_cfgr1 CFGR1 configuration register 1
@{*/

/** SYSCFG_CFGR1_I2C_PB9_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_CFGR1_I2C_PB9_FM		(1 << 19)
/** SYSCFG_CFGR1_I2C_PB8_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_CFGR1_I2C_PB8_FM		(1 << 18)
/** SYSCFG_CFGR1_I2C_PB7_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_CFGR1_I2C_PB7_FM		(1 << 17)
/** SYSCFG_CFGR1_I2C_PB6_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_CFGR1_I2C_PB6_FM		(1 << 16)
/** SYSCFG_CFGR1_TIM17_DMA_RMP TIM17 DMA request remapping bit **/
#define SYSCFG_CFGR1_TIM17_DMA_RMP		(1 << 12)
/** SYSCFG_CFGR1_TIM16_DMA_RMP TIM16 DMA request remapping bit **/
#define SYSCFG_CFGR1_TIM16_DMA_RMP		(1 << 11)
/** SYSCFG_CFGR1_USART1_RX_DMA_RMP USART1_RX DMA request remapping bit **/
#define SYSCFG_CFGR1_USART1_RX_DMA_RMP		(1 << 10)
/** SYSCFG_CFGR1_USART1_TX_DMA_RMP USART1_TX DMA remapping bit **/
#define SYSCFG_CFGR1_USART1_TX_DMA_RMP		(1 << 9)
/** SYSCFG_CFGR1_ADC_DMA_RMP ADC DMA remapping bit **/
#define SYSCFG_CFGR1_ADC_DMA_RMP		(1 << 8)

#define SYSCFG_CFGR1_MEM_MODE_SHIFT		0
#define SYSCFG_CFGR1_MEM_MODE_MASK		0x03
/** @defgroup syscfg_cfgr1_mem_mode MEMMODE Memory mapping selection bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr1 EXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup syscfg_exticr1_exti3 EXTI3 EXTI 3 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup syscfg_exticr1_exti2 EXTI2 EXTI 2 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup syscfg_exticr1_exti1 EXTI1 EXTI 1 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup syscfg_exticr1_exti0 EXTI0 EXTI 0 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr2 EXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup syscfg_exticr2_exti7 EXTI7 EXTI 7 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup syscfg_exticr2_exti6 EXTI6 EXTI 6 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup syscfg_exticr2_exti5 EXTI5 EXTI 5 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup syscfg_exticr2_exti4 EXTI4 EXTI 4 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr3 EXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup syscfg_exticr3_exti11 EXTI11 EXTI 11 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup syscfg_exticr3_exti10 EXTI10 EXTI 10 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup syscfg_exticr3_exti9 EXTI9 EXTI 9 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup syscfg_exticr3_exti8 EXTI8 EXTI 8 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr4 EXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup syscfg_exticr4_exti15 EXTI15 EXTI 15 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup syscfg_exticr4_exti14 EXTI14 EXTI 14 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup syscfg_exticr4_exti13 EXTI13 EXTI 13 configuration bits
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup syscfg_exticr4_exti12 EXTI12 EXTI 12 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_cfgr2 CFGR2 configuration register 2
@{*/

/** SYSCFG_CFGR2_SRAM_PEF SRAM parity flag **/
#define SYSCFG_CFGR2_SRAM_PEF		(1 << 8)
/** SYSCFG_CFGR2_PVD_LOCK PVD lock enable bit **/
#define SYSCFG_CFGR2_PVD_LOCK		(1 << 2)
/** SYSCFG_CFGR2_SRAM_PARITY_LOCK SRAM parity lock bit **/
#define SYSCFG_CFGR2_SRAM_PARITY_LOCK		(1 << 1)
/** SYSCFG_CFGR2_LOCUP_LOCK Cortex-M0 LOCKUP bit enable bit **/
#define SYSCFG_CFGR2_LOCUP_LOCK		(1 << 0)

/**@}*/

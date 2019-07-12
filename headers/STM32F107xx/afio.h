#pragma once 

/* --- AFIO: Alternate function I/O --------------------------------- */

/** @defgroup afio_registers Alternate function I/O Register
@{*/

/** AFIO_EVCR Event Control Register (AFIO_EVCR) **/
#define AFIO_EVCR			MMIO32(AFIO_BASE + 0x00)
/** AFIO_MAPR AF remap and debug I/O configuration register (AFIO_MAPR) **/
#define AFIO_MAPR			MMIO32(AFIO_BASE + 0x04)
/** AFIO_EXTICR1 External interrupt configuration register 1 (AFIO_EXTICR1) **/
#define AFIO_EXTICR1			MMIO32(AFIO_BASE + 0x08)
/** AFIO_EXTICR2 External interrupt configuration register 2 (AFIO_EXTICR2) **/
#define AFIO_EXTICR2			MMIO32(AFIO_BASE + 0x0c)
/** AFIO_EXTICR3 External interrupt configuration register 3 (AFIO_EXTICR3) **/
#define AFIO_EXTICR3			MMIO32(AFIO_BASE + 0x10)
/** AFIO_EXTICR4 External interrupt configuration register 4 (AFIO_EXTICR4) **/
#define AFIO_EXTICR4			MMIO32(AFIO_BASE + 0x14)
/** AFIO_MAPR2 AF remap and debug I/O configuration register **/
#define AFIO_MAPR2			MMIO32(AFIO_BASE + 0x1c)

/**@}*/


/** @defgroup afio_evcr EVCR Event Control Register (AFIO_EVCR)
@{*/

/** AFIO_EVCR_EVOE Event Output Enable **/
#define AFIO_EVCR_EVOE		(1 << 7)

#define AFIO_EVCR_PORT_SHIFT		4
#define AFIO_EVCR_PORT_MASK		0x07
/** @defgroup afio_evcr_port PORT Port selection
@{*/
/**@}*/


#define AFIO_EVCR_PIN_SHIFT		0
#define AFIO_EVCR_PIN_MASK		0x0f
/** @defgroup afio_evcr_pin PIN Pin selection
@{*/
/**@}*/


/**@}*/

/** @defgroup afio_mapr MAPR AF remap and debug I/O configuration register (AFIO_MAPR)
@{*/

/** AFIO_MAPR_PTP_PPS_REMAP Ethernet PTP PPS remapping **/
#define AFIO_MAPR_PTP_PPS_REMAP		(1 << 30)
/** AFIO_MAPR_TIM2ITR1_IREMAP TIM2 internal trigger 1 remapping **/
#define AFIO_MAPR_TIM2ITR1_IREMAP		(1 << 29)
/** AFIO_MAPR_SPI3_REMAP SPI3/I2S3 remapping **/
#define AFIO_MAPR_SPI3_REMAP		(1 << 28)

#define AFIO_MAPR_SWJ_CFG_SHIFT		24
#define AFIO_MAPR_SWJ_CFG_MASK		0x07
/** @defgroup afio_mapr_swj_cfg SWJCFG Serial wire JTAG configuration
@{*/
/**@}*/

/** AFIO_MAPR_MII_RMII_SEL MII or RMII selection **/
#define AFIO_MAPR_MII_RMII_SEL		(1 << 23)
/** AFIO_MAPR_CAN2_REMAP CAN2 I/O remapping **/
#define AFIO_MAPR_CAN2_REMAP		(1 << 22)
/** AFIO_MAPR_ETH_REMAP Ethernet MAC I/O remapping **/
#define AFIO_MAPR_ETH_REMAP		(1 << 21)
/** AFIO_MAPR_TIM5CH4_IREMAP Set and cleared by software **/
#define AFIO_MAPR_TIM5CH4_IREMAP		(1 << 16)
/** AFIO_MAPR_PD01_REMAP Port D0/Port D1 mapping on OSCIN/OSCOUT **/
#define AFIO_MAPR_PD01_REMAP		(1 << 15)

#define AFIO_MAPR_CAN1_REMAP_SHIFT		13
#define AFIO_MAPR_CAN1_REMAP_MASK		0x03
/** @defgroup afio_mapr_can1_remap CAN1REMAP CAN1 remapping
@{*/
/**@}*/

/** AFIO_MAPR_TIM4_REMAP TIM4 remapping **/
#define AFIO_MAPR_TIM4_REMAP		(1 << 12)

#define AFIO_MAPR_TIM3_REMAP_SHIFT		10
#define AFIO_MAPR_TIM3_REMAP_MASK		0x03
/** @defgroup afio_mapr_tim3_remap TIM3REMAP TIM3 remapping
@{*/
/**@}*/


#define AFIO_MAPR_TIM2_REMAP_SHIFT		8
#define AFIO_MAPR_TIM2_REMAP_MASK		0x03
/** @defgroup afio_mapr_tim2_remap TIM2REMAP TIM2 remapping
@{*/
/**@}*/


#define AFIO_MAPR_TIM1_REMAP_SHIFT		6
#define AFIO_MAPR_TIM1_REMAP_MASK		0x03
/** @defgroup afio_mapr_tim1_remap TIM1REMAP TIM1 remapping
@{*/
/**@}*/


#define AFIO_MAPR_USART3_REMAP_SHIFT		4
#define AFIO_MAPR_USART3_REMAP_MASK		0x03
/** @defgroup afio_mapr_usart3_remap USART3REMAP USART3 remapping
@{*/
/**@}*/

/** AFIO_MAPR_USART2_REMAP USART2 remapping **/
#define AFIO_MAPR_USART2_REMAP		(1 << 3)
/** AFIO_MAPR_USART1_REMAP USART1 remapping **/
#define AFIO_MAPR_USART1_REMAP		(1 << 2)
/** AFIO_MAPR_I2C1_REMAP I2C1 remapping **/
#define AFIO_MAPR_I2C1_REMAP		(1 << 1)
/** AFIO_MAPR_SPI1_REMAP SPI1 remapping **/
#define AFIO_MAPR_SPI1_REMAP		(1 << 0)

/**@}*/

/** @defgroup afio_exticr1 EXTICR1 External interrupt configuration register 1 (AFIO_EXTICR1)
@{*/


#define AFIO_EXTICR1_EXTI3_SHIFT		12
#define AFIO_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup afio_exticr1_exti3 EXTI3 EXTI3 configuration
@{*/
/**@}*/


#define AFIO_EXTICR1_EXTI2_SHIFT		8
#define AFIO_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup afio_exticr1_exti2 EXTI2 EXTI2 configuration
@{*/
/**@}*/


#define AFIO_EXTICR1_EXTI1_SHIFT		4
#define AFIO_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup afio_exticr1_exti1 EXTI1 EXTI1 configuration
@{*/
/**@}*/


#define AFIO_EXTICR1_EXTI0_SHIFT		0
#define AFIO_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup afio_exticr1_exti0 EXTI0 EXTI0 configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup afio_exticr2 EXTICR2 External interrupt configuration register 2 (AFIO_EXTICR2)
@{*/


#define AFIO_EXTICR2_EXTI7_SHIFT		12
#define AFIO_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup afio_exticr2_exti7 EXTI7 EXTI7 configuration
@{*/
/**@}*/


#define AFIO_EXTICR2_EXTI6_SHIFT		8
#define AFIO_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup afio_exticr2_exti6 EXTI6 EXTI6 configuration
@{*/
/**@}*/


#define AFIO_EXTICR2_EXTI5_SHIFT		4
#define AFIO_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup afio_exticr2_exti5 EXTI5 EXTI5 configuration
@{*/
/**@}*/


#define AFIO_EXTICR2_EXTI4_SHIFT		0
#define AFIO_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup afio_exticr2_exti4 EXTI4 EXTI4 configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup afio_exticr3 EXTICR3 External interrupt configuration register 3 (AFIO_EXTICR3)
@{*/


#define AFIO_EXTICR3_EXTI11_SHIFT		12
#define AFIO_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup afio_exticr3_exti11 EXTI11 EXTI11 configuration
@{*/
/**@}*/


#define AFIO_EXTICR3_EXTI10_SHIFT		8
#define AFIO_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup afio_exticr3_exti10 EXTI10 EXTI10 configuration
@{*/
/**@}*/


#define AFIO_EXTICR3_EXTI9_SHIFT		4
#define AFIO_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup afio_exticr3_exti9 EXTI9 EXTI9 configuration
@{*/
/**@}*/


#define AFIO_EXTICR3_EXTI8_SHIFT		0
#define AFIO_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup afio_exticr3_exti8 EXTI8 EXTI8 configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup afio_exticr4 EXTICR4 External interrupt configuration register 4 (AFIO_EXTICR4)
@{*/


#define AFIO_EXTICR4_EXTI15_SHIFT		12
#define AFIO_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup afio_exticr4_exti15 EXTI15 EXTI15 configuration
@{*/
/**@}*/


#define AFIO_EXTICR4_EXTI14_SHIFT		8
#define AFIO_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup afio_exticr4_exti14 EXTI14 EXTI14 configuration
@{*/
/**@}*/


#define AFIO_EXTICR4_EXTI13_SHIFT		4
#define AFIO_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup afio_exticr4_exti13 EXTI13 EXTI13 configuration
@{*/
/**@}*/


#define AFIO_EXTICR4_EXTI12_SHIFT		0
#define AFIO_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup afio_exticr4_exti12 EXTI12 EXTI12 configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup afio_mapr2 MAPR2 AF remap and debug I/O configuration register
@{*/

/** AFIO_MAPR2_FSMC_NADV NADV connect/disconnect **/
#define AFIO_MAPR2_FSMC_NADV		(1 << 10)
/** AFIO_MAPR2_TIM14_REMAP TIM14 remapping **/
#define AFIO_MAPR2_TIM14_REMAP		(1 << 9)
/** AFIO_MAPR2_TIM13_REMAP TIM13 remapping **/
#define AFIO_MAPR2_TIM13_REMAP		(1 << 8)
/** AFIO_MAPR2_TIM11_REMAP TIM11 remapping **/
#define AFIO_MAPR2_TIM11_REMAP		(1 << 7)
/** AFIO_MAPR2_TIM10_REMAP TIM10 remapping **/
#define AFIO_MAPR2_TIM10_REMAP		(1 << 6)
/** AFIO_MAPR2_TIM9_REMAP TIM9 remapping **/
#define AFIO_MAPR2_TIM9_REMAP		(1 << 5)

/**@}*/

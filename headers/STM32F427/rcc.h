#pragma once 

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

/** RCC_CR clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_PLLCFGR PLL configuration register **/
#define RCC_PLLCFGR			MMIO32(RCC_BASE + 0x04)
/** RCC_CFGR clock configuration register **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x08)
/** RCC_CIR clock interrupt register **/
#define RCC_CIR			MMIO32(RCC_BASE + 0x0c)
/** RCC_AHB1RSTR AHB1 peripheral reset register **/
#define RCC_AHB1RSTR			MMIO32(RCC_BASE + 0x10)
/** RCC_AHB2RSTR AHB2 peripheral reset register **/
#define RCC_AHB2RSTR			MMIO32(RCC_BASE + 0x14)
/** RCC_AHB3RSTR AHB3 peripheral reset register **/
#define RCC_AHB3RSTR			MMIO32(RCC_BASE + 0x18)
/** RCC_APB1RSTR APB1 peripheral reset register **/
#define RCC_APB1RSTR			MMIO32(RCC_BASE + 0x20)
/** RCC_APB2RSTR APB2 peripheral reset register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x24)
/** RCC_AHB1ENR AHB1 peripheral clock register **/
#define RCC_AHB1ENR			MMIO32(RCC_BASE + 0x30)
/** RCC_AHB2ENR AHB2 peripheral clock enable register **/
#define RCC_AHB2ENR			MMIO32(RCC_BASE + 0x34)
/** RCC_AHB3ENR AHB3 peripheral clock enable register **/
#define RCC_AHB3ENR			MMIO32(RCC_BASE + 0x38)
/** RCC_APB1ENR APB1 peripheral clock enable register **/
#define RCC_APB1ENR			MMIO32(RCC_BASE + 0x40)
/** RCC_APB2ENR APB2 peripheral clock enable register **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0x44)
/** RCC_AHB1LPENR AHB1 peripheral clock enable in low power mode register **/
#define RCC_AHB1LPENR			MMIO32(RCC_BASE + 0x50)
/** RCC_AHB2LPENR AHB2 peripheral clock enable in low power mode register **/
#define RCC_AHB2LPENR			MMIO32(RCC_BASE + 0x54)
/** RCC_AHB3LPENR AHB3 peripheral clock enable in low power mode register **/
#define RCC_AHB3LPENR			MMIO32(RCC_BASE + 0x58)
/** RCC_APB1LPENR APB1 peripheral clock enable in low power mode register **/
#define RCC_APB1LPENR			MMIO32(RCC_BASE + 0x60)
/** RCC_APB2LPENR APB2 peripheral clock enabled in low power mode register **/
#define RCC_APB2LPENR			MMIO32(RCC_BASE + 0x64)
/** RCC_BDCR Backup domain control register **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x70)
/** RCC_CSR clock control & status register **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x74)
/** RCC_SSCGR spread spectrum clock generation register **/
#define RCC_SSCGR			MMIO32(RCC_BASE + 0x80)
/** RCC_PLLI2SCFGR PLLI2S configuration register **/
#define RCC_PLLI2SCFGR			MMIO32(RCC_BASE + 0x84)

/**@}*/


/** @defgroup rcc_cr CR clock control register
@{*/

/** RCC_CR_PLLI2SRDY PLLI2S clock ready flag **/
#define RCC_CR_PLLI2SRDY		(1 << 27)
/** RCC_CR_PLLI2SON PLLI2S enable **/
#define RCC_CR_PLLI2SON		(1 << 26)
/** RCC_CR_PLLRDY Main PLL (PLL) clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON Main PLL (PLL) enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_CSSON Clock security system enable **/
#define RCC_CR_CSSON		(1 << 19)
/** RCC_CR_HSEBYP HSE clock bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)

#define RCC_CR_HSICAL_SHIFT		8
#define RCC_CR_HSICAL_MASK		0xff
/** @defgroup rcc_cr_hsical HSICAL Internal high-speed clock calibration
@{*/
/**@}*/


#define RCC_CR_HSITRIM_SHIFT		3
#define RCC_CR_HSITRIM_MASK		0x1f
/** @defgroup rcc_cr_hsitrim HSITRIM Internal high-speed clock trimming
@{*/
/**@}*/

/** RCC_CR_HSIRDY Internal high-speed clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 1)
/** RCC_CR_HSION Internal high-speed clock enable **/
#define RCC_CR_HSION		(1 << 0)

/**@}*/

/** @defgroup rcc_pllcfgr PLLCFGR PLL configuration register
@{*/

/** RCC_PLLCFGR_PLLQ3 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks **/
#define RCC_PLLCFGR_PLLQ3		(1 << 27)
/** RCC_PLLCFGR_PLLQ2 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks **/
#define RCC_PLLCFGR_PLLQ2		(1 << 26)
/** RCC_PLLCFGR_PLLQ1 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks **/
#define RCC_PLLCFGR_PLLQ1		(1 << 25)
/** RCC_PLLCFGR_PLLQ0 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks **/
#define RCC_PLLCFGR_PLLQ0		(1 << 24)
/** RCC_PLLCFGR_PLLSRC Main PLL(PLL) and audio PLL (PLLI2S) entry clock source **/
#define RCC_PLLCFGR_PLLSRC		(1 << 22)
/** RCC_PLLCFGR_PLLP1 Main PLL (PLL) division factor for main system clock **/
#define RCC_PLLCFGR_PLLP1		(1 << 17)
/** RCC_PLLCFGR_PLLP0 Main PLL (PLL) division factor for main system clock **/
#define RCC_PLLCFGR_PLLP0		(1 << 16)
/** RCC_PLLCFGR_PLLN8 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN8		(1 << 14)
/** RCC_PLLCFGR_PLLN7 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN7		(1 << 13)
/** RCC_PLLCFGR_PLLN6 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN6		(1 << 12)
/** RCC_PLLCFGR_PLLN5 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN5		(1 << 11)
/** RCC_PLLCFGR_PLLN4 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN4		(1 << 10)
/** RCC_PLLCFGR_PLLN3 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN3		(1 << 9)
/** RCC_PLLCFGR_PLLN2 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN2		(1 << 8)
/** RCC_PLLCFGR_PLLN1 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN1		(1 << 7)
/** RCC_PLLCFGR_PLLN0 Main PLL (PLL) multiplication factor for VCO **/
#define RCC_PLLCFGR_PLLN0		(1 << 6)
/** RCC_PLLCFGR_PLLM5 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM5		(1 << 5)
/** RCC_PLLCFGR_PLLM4 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM4		(1 << 4)
/** RCC_PLLCFGR_PLLM3 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM3		(1 << 3)
/** RCC_PLLCFGR_PLLM2 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM2		(1 << 2)
/** RCC_PLLCFGR_PLLM1 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM1		(1 << 1)
/** RCC_PLLCFGR_PLLM0 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock **/
#define RCC_PLLCFGR_PLLM0		(1 << 0)

/**@}*/

/** @defgroup rcc_cfgr CFGR clock configuration register
@{*/


#define RCC_CFGR_MCO2_SHIFT		30
#define RCC_CFGR_MCO2_MASK		0x03
/** @defgroup rcc_cfgr_mco2 MCO2 Microcontroller clock output 2
@{*/
/**@}*/


#define RCC_CFGR_MCO2PRE_SHIFT		27
#define RCC_CFGR_MCO2PRE_MASK		0x07
/** @defgroup rcc_cfgr_mco2pre MCO2PRE MCO2 prescaler
@{*/
/**@}*/


#define RCC_CFGR_MCO1PRE_SHIFT		24
#define RCC_CFGR_MCO1PRE_MASK		0x07
/** @defgroup rcc_cfgr_mco1pre MCO1PRE MCO1 prescaler
@{*/
/**@}*/

/** RCC_CFGR_I2SSRC I2S clock selection **/
#define RCC_CFGR_I2SSRC		(1 << 23)

#define RCC_CFGR_MCO1_SHIFT		21
#define RCC_CFGR_MCO1_MASK		0x03
/** @defgroup rcc_cfgr_mco1 MCO1 Microcontroller clock output 1
@{*/
/**@}*/


#define RCC_CFGR_RTCPRE_SHIFT		16
#define RCC_CFGR_RTCPRE_MASK		0x1f
/** @defgroup rcc_cfgr_rtcpre RTCPRE HSE division factor for RTC clock
@{*/
/**@}*/


#define RCC_CFGR_PPRE2_SHIFT		13
#define RCC_CFGR_PPRE2_MASK		0x07
/** @defgroup rcc_cfgr_ppre2 PPRE2 APB high-speed prescaler (APB2)
@{*/
/**@}*/


#define RCC_CFGR_PPRE1_SHIFT		10
#define RCC_CFGR_PPRE1_MASK		0x07
/** @defgroup rcc_cfgr_ppre1 PPRE1 APB Low speed prescaler (APB1)
@{*/
/**@}*/


#define RCC_CFGR_HPRE_SHIFT		4
#define RCC_CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_cfgr_hpre HPRE AHB prescaler
@{*/
/**@}*/

/** RCC_CFGR_SWS1 System clock switch status **/
#define RCC_CFGR_SWS1		(1 << 3)
/** RCC_CFGR_SWS0 System clock switch status **/
#define RCC_CFGR_SWS0		(1 << 2)
/** RCC_CFGR_SW1 System clock switch **/
#define RCC_CFGR_SW1		(1 << 1)
/** RCC_CFGR_SW0 System clock switch **/
#define RCC_CFGR_SW0		(1 << 0)

/**@}*/

/** @defgroup rcc_cir CIR clock interrupt register
@{*/

/** RCC_CIR_CSSC Clock security system interrupt clear **/
#define RCC_CIR_CSSC		(1 << 23)
/** RCC_CIR_PLLI2SRDYC PLLI2S ready interrupt clear **/
#define RCC_CIR_PLLI2SRDYC		(1 << 21)
/** RCC_CIR_PLLRDYC Main PLL(PLL) ready interrupt clear **/
#define RCC_CIR_PLLRDYC		(1 << 20)
/** RCC_CIR_HSERDYC HSE ready interrupt clear **/
#define RCC_CIR_HSERDYC		(1 << 19)
/** RCC_CIR_HSIRDYC HSI ready interrupt clear **/
#define RCC_CIR_HSIRDYC		(1 << 18)
/** RCC_CIR_LSERDYC LSE ready interrupt clear **/
#define RCC_CIR_LSERDYC		(1 << 17)
/** RCC_CIR_LSIRDYC LSI ready interrupt clear **/
#define RCC_CIR_LSIRDYC		(1 << 16)
/** RCC_CIR_PLLI2SRDYIE PLLI2S ready interrupt enable **/
#define RCC_CIR_PLLI2SRDYIE		(1 << 13)
/** RCC_CIR_PLLRDYIE Main PLL (PLL) ready interrupt enable **/
#define RCC_CIR_PLLRDYIE		(1 << 12)
/** RCC_CIR_HSERDYIE HSE ready interrupt enable **/
#define RCC_CIR_HSERDYIE		(1 << 11)
/** RCC_CIR_HSIRDYIE HSI ready interrupt enable **/
#define RCC_CIR_HSIRDYIE		(1 << 10)
/** RCC_CIR_LSERDYIE LSE ready interrupt enable **/
#define RCC_CIR_LSERDYIE		(1 << 9)
/** RCC_CIR_LSIRDYIE LSI ready interrupt enable **/
#define RCC_CIR_LSIRDYIE		(1 << 8)
/** RCC_CIR_CSSF Clock security system interrupt flag **/
#define RCC_CIR_CSSF		(1 << 7)
/** RCC_CIR_PLLI2SRDYF PLLI2S ready interrupt flag **/
#define RCC_CIR_PLLI2SRDYF		(1 << 5)
/** RCC_CIR_PLLRDYF Main PLL (PLL) ready interrupt flag **/
#define RCC_CIR_PLLRDYF		(1 << 4)
/** RCC_CIR_HSERDYF HSE ready interrupt flag **/
#define RCC_CIR_HSERDYF		(1 << 3)
/** RCC_CIR_HSIRDYF HSI ready interrupt flag **/
#define RCC_CIR_HSIRDYF		(1 << 2)
/** RCC_CIR_LSERDYF LSE ready interrupt flag **/
#define RCC_CIR_LSERDYF		(1 << 1)
/** RCC_CIR_LSIRDYF LSI ready interrupt flag **/
#define RCC_CIR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1rstr AHB1RSTR AHB1 peripheral reset register
@{*/

/** RCC_AHB1RSTR_OTGHSRST USB OTG HS module reset **/
#define RCC_AHB1RSTR_OTGHSRST		(1 << 29)
/** RCC_AHB1RSTR_ETHMACRST Ethernet MAC reset **/
#define RCC_AHB1RSTR_ETHMACRST		(1 << 25)
/** RCC_AHB1RSTR_DMA2RST DMA2 reset **/
#define RCC_AHB1RSTR_DMA2RST		(1 << 22)
/** RCC_AHB1RSTR_DMA1RST DMA2 reset **/
#define RCC_AHB1RSTR_DMA1RST		(1 << 21)
/** RCC_AHB1RSTR_CRCRST CRC reset **/
#define RCC_AHB1RSTR_CRCRST		(1 << 12)
/** RCC_AHB1RSTR_GPIOIRST IO port I reset **/
#define RCC_AHB1RSTR_GPIOIRST		(1 << 8)
/** RCC_AHB1RSTR_GPIOHRST IO port H reset **/
#define RCC_AHB1RSTR_GPIOHRST		(1 << 7)
/** RCC_AHB1RSTR_GPIOGRST IO port G reset **/
#define RCC_AHB1RSTR_GPIOGRST		(1 << 6)
/** RCC_AHB1RSTR_GPIOFRST IO port F reset **/
#define RCC_AHB1RSTR_GPIOFRST		(1 << 5)
/** RCC_AHB1RSTR_GPIOERST IO port E reset **/
#define RCC_AHB1RSTR_GPIOERST		(1 << 4)
/** RCC_AHB1RSTR_GPIODRST IO port D reset **/
#define RCC_AHB1RSTR_GPIODRST		(1 << 3)
/** RCC_AHB1RSTR_GPIOCRST IO port C reset **/
#define RCC_AHB1RSTR_GPIOCRST		(1 << 2)
/** RCC_AHB1RSTR_GPIOBRST IO port B reset **/
#define RCC_AHB1RSTR_GPIOBRST		(1 << 1)
/** RCC_AHB1RSTR_GPIOARST IO port A reset **/
#define RCC_AHB1RSTR_GPIOARST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2rstr AHB2RSTR AHB2 peripheral reset register
@{*/

/** RCC_AHB2RSTR_OTGFSRST USB OTG FS module reset **/
#define RCC_AHB2RSTR_OTGFSRST		(1 << 7)
/** RCC_AHB2RSTR_RNGRST Random number generator module reset **/
#define RCC_AHB2RSTR_RNGRST		(1 << 6)
/** RCC_AHB2RSTR_HSAHRST Hash module reset **/
#define RCC_AHB2RSTR_HSAHRST		(1 << 5)
/** RCC_AHB2RSTR_CRYPRST Cryptographic module reset **/
#define RCC_AHB2RSTR_CRYPRST		(1 << 4)
/** RCC_AHB2RSTR_DCMIRST Camera interface reset **/
#define RCC_AHB2RSTR_DCMIRST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3rstr AHB3RSTR AHB3 peripheral reset register
@{*/

/** RCC_AHB3RSTR_FMCRST Flexible static memory controller module reset **/
#define RCC_AHB3RSTR_FMCRST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr APB1RSTR APB1 peripheral reset register
@{*/

/** RCC_APB1RSTR_UART8RST UART8 reset **/
#define RCC_APB1RSTR_UART8RST		(1 << 31)
/** RCC_APB1RSTR_UART7RST UART7 reset **/
#define RCC_APB1RSTR_UART7RST		(1 << 30)
/** RCC_APB1RSTR_DACRST DAC reset **/
#define RCC_APB1RSTR_DACRST		(1 << 29)
/** RCC_APB1RSTR_PWRRST Power interface reset **/
#define RCC_APB1RSTR_PWRRST		(1 << 28)
/** RCC_APB1RSTR_CAN2RST CAN2 reset **/
#define RCC_APB1RSTR_CAN2RST		(1 << 26)
/** RCC_APB1RSTR_CAN1RST CAN1 reset **/
#define RCC_APB1RSTR_CAN1RST		(1 << 25)
/** RCC_APB1RSTR_I2C3RST I2C3 reset **/
#define RCC_APB1RSTR_I2C3RST		(1 << 23)
/** RCC_APB1RSTR_I2C2RST I2C 2 reset **/
#define RCC_APB1RSTR_I2C2RST		(1 << 22)
/** RCC_APB1RSTR_I2C1RST I2C 1 reset **/
#define RCC_APB1RSTR_I2C1RST		(1 << 21)
/** RCC_APB1RSTR_UART5RST USART 5 reset **/
#define RCC_APB1RSTR_UART5RST		(1 << 20)
/** RCC_APB1RSTR_UART4RST USART 4 reset **/
#define RCC_APB1RSTR_UART4RST		(1 << 19)
/** RCC_APB1RSTR_UART3RST USART 3 reset **/
#define RCC_APB1RSTR_UART3RST		(1 << 18)
/** RCC_APB1RSTR_UART2RST USART 2 reset **/
#define RCC_APB1RSTR_UART2RST		(1 << 17)
/** RCC_APB1RSTR_SPI3RST SPI 3 reset **/
#define RCC_APB1RSTR_SPI3RST		(1 << 15)
/** RCC_APB1RSTR_SPI2RST SPI 2 reset **/
#define RCC_APB1RSTR_SPI2RST		(1 << 14)
/** RCC_APB1RSTR_WWDGRST Window watchdog reset **/
#define RCC_APB1RSTR_WWDGRST		(1 << 11)
/** RCC_APB1RSTR_TIM14RST TIM14 reset **/
#define RCC_APB1RSTR_TIM14RST		(1 << 8)
/** RCC_APB1RSTR_TIM13RST TIM13 reset **/
#define RCC_APB1RSTR_TIM13RST		(1 << 7)
/** RCC_APB1RSTR_TIM12RST TIM12 reset **/
#define RCC_APB1RSTR_TIM12RST		(1 << 6)
/** RCC_APB1RSTR_TIM7RST TIM7 reset **/
#define RCC_APB1RSTR_TIM7RST		(1 << 5)
/** RCC_APB1RSTR_TIM6RST TIM6 reset **/
#define RCC_APB1RSTR_TIM6RST		(1 << 4)
/** RCC_APB1RSTR_TIM5RST TIM5 reset **/
#define RCC_APB1RSTR_TIM5RST		(1 << 3)
/** RCC_APB1RSTR_TIM4RST TIM4 reset **/
#define RCC_APB1RSTR_TIM4RST		(1 << 2)
/** RCC_APB1RSTR_TIM3RST TIM3 reset **/
#define RCC_APB1RSTR_TIM3RST		(1 << 1)
/** RCC_APB1RSTR_TIM2RST TIM2 reset **/
#define RCC_APB1RSTR_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register
@{*/

/** RCC_APB2RSTR_SPI6RST SPI6 reset **/
#define RCC_APB2RSTR_SPI6RST		(1 << 21)
/** RCC_APB2RSTR_SPI5RST SPI5 reset **/
#define RCC_APB2RSTR_SPI5RST		(1 << 20)
/** RCC_APB2RSTR_TIM11RST TIM11 reset **/
#define RCC_APB2RSTR_TIM11RST		(1 << 18)
/** RCC_APB2RSTR_TIM10RST TIM10 reset **/
#define RCC_APB2RSTR_TIM10RST		(1 << 17)
/** RCC_APB2RSTR_TIM9RST TIM9 reset **/
#define RCC_APB2RSTR_TIM9RST		(1 << 16)
/** RCC_APB2RSTR_SYSCFGRST System configuration controller reset **/
#define RCC_APB2RSTR_SYSCFGRST		(1 << 14)
/** RCC_APB2RSTR_SPI4RST SPI4 reset **/
#define RCC_APB2RSTR_SPI4RST		(1 << 13)
/** RCC_APB2RSTR_SPI1RST SPI 1 reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_SDIORST SDIO reset **/
#define RCC_APB2RSTR_SDIORST		(1 << 11)
/** RCC_APB2RSTR_ADCRST ADC interface reset (common to all ADCs) **/
#define RCC_APB2RSTR_ADCRST		(1 << 8)
/** RCC_APB2RSTR_USART6RST USART6 reset **/
#define RCC_APB2RSTR_USART6RST		(1 << 5)
/** RCC_APB2RSTR_USART1RST USART1 reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 4)
/** RCC_APB2RSTR_TIM8RST TIM8 reset **/
#define RCC_APB2RSTR_TIM8RST		(1 << 1)
/** RCC_APB2RSTR_TIM1RST TIM1 reset **/
#define RCC_APB2RSTR_TIM1RST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1enr AHB1ENR AHB1 peripheral clock register
@{*/

/** RCC_AHB1ENR_OTGHSULPIEN USB OTG HSULPI clock enable **/
#define RCC_AHB1ENR_OTGHSULPIEN		(1 << 30)
/** RCC_AHB1ENR_OTGHSEN USB OTG HS clock enable **/
#define RCC_AHB1ENR_OTGHSEN		(1 << 29)
/** RCC_AHB1ENR_ETHMACPTPEN Ethernet PTP clock enable **/
#define RCC_AHB1ENR_ETHMACPTPEN		(1 << 28)
/** RCC_AHB1ENR_ETHMACRXEN Ethernet Reception clock enable **/
#define RCC_AHB1ENR_ETHMACRXEN		(1 << 27)
/** RCC_AHB1ENR_ETHMACTXEN Ethernet Transmission clock enable **/
#define RCC_AHB1ENR_ETHMACTXEN		(1 << 26)
/** RCC_AHB1ENR_ETHMACEN Ethernet MAC clock enable **/
#define RCC_AHB1ENR_ETHMACEN		(1 << 25)
/** RCC_AHB1ENR_DMA2EN DMA2 clock enable **/
#define RCC_AHB1ENR_DMA2EN		(1 << 22)
/** RCC_AHB1ENR_DMA1EN DMA1 clock enable **/
#define RCC_AHB1ENR_DMA1EN		(1 << 21)
/** RCC_AHB1ENR_BKPSRAMEN Backup SRAM interface clock enable **/
#define RCC_AHB1ENR_BKPSRAMEN		(1 << 18)
/** RCC_AHB1ENR_CRCEN CRC clock enable **/
#define RCC_AHB1ENR_CRCEN		(1 << 12)
/** RCC_AHB1ENR_GPIOIEN IO port I clock enable **/
#define RCC_AHB1ENR_GPIOIEN		(1 << 8)
/** RCC_AHB1ENR_GPIOHEN IO port H clock enable **/
#define RCC_AHB1ENR_GPIOHEN		(1 << 7)
/** RCC_AHB1ENR_GPIOGEN IO port G clock enable **/
#define RCC_AHB1ENR_GPIOGEN		(1 << 6)
/** RCC_AHB1ENR_GPIOFEN IO port F clock enable **/
#define RCC_AHB1ENR_GPIOFEN		(1 << 5)
/** RCC_AHB1ENR_GPIOEEN IO port E clock enable **/
#define RCC_AHB1ENR_GPIOEEN		(1 << 4)
/** RCC_AHB1ENR_GPIODEN IO port D clock enable **/
#define RCC_AHB1ENR_GPIODEN		(1 << 3)
/** RCC_AHB1ENR_GPIOCEN IO port C clock enable **/
#define RCC_AHB1ENR_GPIOCEN		(1 << 2)
/** RCC_AHB1ENR_GPIOBEN IO port B clock enable **/
#define RCC_AHB1ENR_GPIOBEN		(1 << 1)
/** RCC_AHB1ENR_GPIOAEN IO port A clock enable **/
#define RCC_AHB1ENR_GPIOAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2enr AHB2ENR AHB2 peripheral clock enable register
@{*/

/** RCC_AHB2ENR_OTGFSEN USB OTG FS clock enable **/
#define RCC_AHB2ENR_OTGFSEN		(1 << 7)
/** RCC_AHB2ENR_RNGEN Random number generator clock enable **/
#define RCC_AHB2ENR_RNGEN		(1 << 6)
/** RCC_AHB2ENR_HASHEN Hash modules clock enable **/
#define RCC_AHB2ENR_HASHEN		(1 << 5)
/** RCC_AHB2ENR_CRYPEN Cryptographic modules clock enable **/
#define RCC_AHB2ENR_CRYPEN		(1 << 4)
/** RCC_AHB2ENR_DCMIEN Camera interface enable **/
#define RCC_AHB2ENR_DCMIEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3enr AHB3ENR AHB3 peripheral clock enable register
@{*/

/** RCC_AHB3ENR_FMCEN Flexible static memory controller module clock enable **/
#define RCC_AHB3ENR_FMCEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr APB1ENR APB1 peripheral clock enable register
@{*/

/** RCC_APB1ENR_UART8ENR UART8 clock enable **/
#define RCC_APB1ENR_UART8ENR		(1 << 31)
/** RCC_APB1ENR_UART7ENR UART7 clock enable **/
#define RCC_APB1ENR_UART7ENR		(1 << 30)
/** RCC_APB1ENR_DACEN DAC interface clock enable **/
#define RCC_APB1ENR_DACEN		(1 << 29)
/** RCC_APB1ENR_PWREN Power interface clock enable **/
#define RCC_APB1ENR_PWREN		(1 << 28)
/** RCC_APB1ENR_CAN2EN CAN 2 clock enable **/
#define RCC_APB1ENR_CAN2EN		(1 << 26)
/** RCC_APB1ENR_CAN1EN CAN 1 clock enable **/
#define RCC_APB1ENR_CAN1EN		(1 << 25)
/** RCC_APB1ENR_I2C3EN I2C3 clock enable **/
#define RCC_APB1ENR_I2C3EN		(1 << 23)
/** RCC_APB1ENR_I2C2EN I2C2 clock enable **/
#define RCC_APB1ENR_I2C2EN		(1 << 22)
/** RCC_APB1ENR_I2C1EN I2C1 clock enable **/
#define RCC_APB1ENR_I2C1EN		(1 << 21)
/** RCC_APB1ENR_UART5EN UART5 clock enable **/
#define RCC_APB1ENR_UART5EN		(1 << 20)
/** RCC_APB1ENR_UART4EN UART4 clock enable **/
#define RCC_APB1ENR_UART4EN		(1 << 19)
/** RCC_APB1ENR_USART3EN USART3 clock enable **/
#define RCC_APB1ENR_USART3EN		(1 << 18)
/** RCC_APB1ENR_USART2EN USART 2 clock enable **/
#define RCC_APB1ENR_USART2EN		(1 << 17)
/** RCC_APB1ENR_SPI3EN SPI3 clock enable **/
#define RCC_APB1ENR_SPI3EN		(1 << 15)
/** RCC_APB1ENR_SPI2EN SPI2 clock enable **/
#define RCC_APB1ENR_SPI2EN		(1 << 14)
/** RCC_APB1ENR_WWDGEN Window watchdog clock enable **/
#define RCC_APB1ENR_WWDGEN		(1 << 11)
/** RCC_APB1ENR_TIM14EN TIM14 clock enable **/
#define RCC_APB1ENR_TIM14EN		(1 << 8)
/** RCC_APB1ENR_TIM13EN TIM13 clock enable **/
#define RCC_APB1ENR_TIM13EN		(1 << 7)
/** RCC_APB1ENR_TIM12EN TIM12 clock enable **/
#define RCC_APB1ENR_TIM12EN		(1 << 6)
/** RCC_APB1ENR_TIM7EN TIM7 clock enable **/
#define RCC_APB1ENR_TIM7EN		(1 << 5)
/** RCC_APB1ENR_TIM6EN TIM6 clock enable **/
#define RCC_APB1ENR_TIM6EN		(1 << 4)
/** RCC_APB1ENR_TIM5EN TIM5 clock enable **/
#define RCC_APB1ENR_TIM5EN		(1 << 3)
/** RCC_APB1ENR_TIM4EN TIM4 clock enable **/
#define RCC_APB1ENR_TIM4EN		(1 << 2)
/** RCC_APB1ENR_TIM3EN TIM3 clock enable **/
#define RCC_APB1ENR_TIM3EN		(1 << 1)
/** RCC_APB1ENR_TIM2EN TIM2 clock enable **/
#define RCC_APB1ENR_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2 peripheral clock enable register
@{*/

/** RCC_APB2ENR_SPI6ENR SPI6 clock enable **/
#define RCC_APB2ENR_SPI6ENR		(1 << 21)
/** RCC_APB2ENR_SPI5ENR SPI5 clock enable **/
#define RCC_APB2ENR_SPI5ENR		(1 << 20)
/** RCC_APB2ENR_TIM11EN TIM11 clock enable **/
#define RCC_APB2ENR_TIM11EN		(1 << 18)
/** RCC_APB2ENR_TIM10EN TIM10 clock enable **/
#define RCC_APB2ENR_TIM10EN		(1 << 17)
/** RCC_APB2ENR_TIM9EN TIM9 clock enable **/
#define RCC_APB2ENR_TIM9EN		(1 << 16)
/** RCC_APB2ENR_SYSCFGEN System configuration controller clock enable **/
#define RCC_APB2ENR_SYSCFGEN		(1 << 14)
/** RCC_APB2ENR_SPI4ENR SPI4 clock enable **/
#define RCC_APB2ENR_SPI4ENR		(1 << 13)
/** RCC_APB2ENR_SPI1EN SPI1 clock enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_SDIOEN SDIO clock enable **/
#define RCC_APB2ENR_SDIOEN		(1 << 11)
/** RCC_APB2ENR_ADC3EN ADC3 clock enable **/
#define RCC_APB2ENR_ADC3EN		(1 << 10)
/** RCC_APB2ENR_ADC2EN ADC2 clock enable **/
#define RCC_APB2ENR_ADC2EN		(1 << 9)
/** RCC_APB2ENR_ADC1EN ADC1 clock enable **/
#define RCC_APB2ENR_ADC1EN		(1 << 8)
/** RCC_APB2ENR_USART6EN USART6 clock enable **/
#define RCC_APB2ENR_USART6EN		(1 << 5)
/** RCC_APB2ENR_USART1EN USART1 clock enable **/
#define RCC_APB2ENR_USART1EN		(1 << 4)
/** RCC_APB2ENR_TIM8EN TIM8 clock enable **/
#define RCC_APB2ENR_TIM8EN		(1 << 1)
/** RCC_APB2ENR_TIM1EN TIM1 clock enable **/
#define RCC_APB2ENR_TIM1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1lpenr AHB1LPENR AHB1 peripheral clock enable in low power mode register
@{*/

/** RCC_AHB1LPENR_OTGHSULPILPEN USB OTG HS ULPI clock enable during Sleep mode **/
#define RCC_AHB1LPENR_OTGHSULPILPEN		(1 << 30)
/** RCC_AHB1LPENR_OTGHSLPEN USB OTG HS clock enable during Sleep mode **/
#define RCC_AHB1LPENR_OTGHSLPEN		(1 << 29)
/** RCC_AHB1LPENR_ETHMACPTPLPEN Ethernet PTP clock enable during Sleep mode **/
#define RCC_AHB1LPENR_ETHMACPTPLPEN		(1 << 28)
/** RCC_AHB1LPENR_ETHMACRXLPEN Ethernet reception clock enable during Sleep mode **/
#define RCC_AHB1LPENR_ETHMACRXLPEN		(1 << 27)
/** RCC_AHB1LPENR_ETHMACTXLPEN Ethernet transmission clock enable during Sleep mode **/
#define RCC_AHB1LPENR_ETHMACTXLPEN		(1 << 26)
/** RCC_AHB1LPENR_ETHMACLPEN Ethernet MAC clock enable during Sleep mode **/
#define RCC_AHB1LPENR_ETHMACLPEN		(1 << 25)
/** RCC_AHB1LPENR_DMA2LPEN DMA2 clock enable during Sleep mode **/
#define RCC_AHB1LPENR_DMA2LPEN		(1 << 22)
/** RCC_AHB1LPENR_DMA1LPEN DMA1 clock enable during Sleep mode **/
#define RCC_AHB1LPENR_DMA1LPEN		(1 << 21)
/** RCC_AHB1LPENR_SRAM3LPEN SRAM 3 interface clock enable during Sleep mode **/
#define RCC_AHB1LPENR_SRAM3LPEN		(1 << 19)
/** RCC_AHB1LPENR_BKPSRAMLPEN Backup SRAM interface clock enable during Sleep mode **/
#define RCC_AHB1LPENR_BKPSRAMLPEN		(1 << 18)
/** RCC_AHB1LPENR_SRAM2LPEN SRAM 2 interface clock enable during Sleep mode **/
#define RCC_AHB1LPENR_SRAM2LPEN		(1 << 17)
/** RCC_AHB1LPENR_SRAM1LPEN SRAM 1interface clock enable during Sleep mode **/
#define RCC_AHB1LPENR_SRAM1LPEN		(1 << 16)
/** RCC_AHB1LPENR_FLITFLPEN Flash interface clock enable during Sleep mode **/
#define RCC_AHB1LPENR_FLITFLPEN		(1 << 15)
/** RCC_AHB1LPENR_CRCLPEN CRC clock enable during Sleep mode **/
#define RCC_AHB1LPENR_CRCLPEN		(1 << 12)
/** RCC_AHB1LPENR_GPIOILPEN IO port I clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOILPEN		(1 << 8)
/** RCC_AHB1LPENR_GPIOHLPEN IO port H clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOHLPEN		(1 << 7)
/** RCC_AHB1LPENR_GPIOGLPEN IO port G clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOGLPEN		(1 << 6)
/** RCC_AHB1LPENR_GPIOFLPEN IO port F clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOFLPEN		(1 << 5)
/** RCC_AHB1LPENR_GPIOELPEN IO port E clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOELPEN		(1 << 4)
/** RCC_AHB1LPENR_GPIODLPEN IO port D clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIODLPEN		(1 << 3)
/** RCC_AHB1LPENR_GPIOCLPEN IO port C clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOCLPEN		(1 << 2)
/** RCC_AHB1LPENR_GPIOBLPEN IO port B clock enable during Sleep mode **/
#define RCC_AHB1LPENR_GPIOBLPEN		(1 << 1)
/** RCC_AHB1LPENR_GPIOALPEN IO port A clock enable during sleep mode **/
#define RCC_AHB1LPENR_GPIOALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2lpenr AHB2LPENR AHB2 peripheral clock enable in low power mode register
@{*/

/** RCC_AHB2LPENR_OTGFSLPEN USB OTG FS clock enable during Sleep mode **/
#define RCC_AHB2LPENR_OTGFSLPEN		(1 << 7)
/** RCC_AHB2LPENR_RNGLPEN Random number generator clock enable during Sleep mode **/
#define RCC_AHB2LPENR_RNGLPEN		(1 << 6)
/** RCC_AHB2LPENR_HASHLPEN Hash modules clock enable during Sleep mode **/
#define RCC_AHB2LPENR_HASHLPEN		(1 << 5)
/** RCC_AHB2LPENR_CRYPLPEN Cryptography modules clock enable during Sleep mode **/
#define RCC_AHB2LPENR_CRYPLPEN		(1 << 4)
/** RCC_AHB2LPENR_DCMILPEN Camera interface enable during Sleep mode **/
#define RCC_AHB2LPENR_DCMILPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3lpenr AHB3LPENR AHB3 peripheral clock enable in low power mode register
@{*/

/** RCC_AHB3LPENR_FMCLPEN Flexible static memory controller module clock enable during Sleep mode **/
#define RCC_AHB3LPENR_FMCLPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1lpenr APB1LPENR APB1 peripheral clock enable in low power mode register
@{*/

/** RCC_APB1LPENR_UART8LPEN UART8 clock enable during Sleep mode **/
#define RCC_APB1LPENR_UART8LPEN		(1 << 31)
/** RCC_APB1LPENR_UART7LPEN UART7 clock enable during Sleep mode **/
#define RCC_APB1LPENR_UART7LPEN		(1 << 30)
/** RCC_APB1LPENR_DACLPEN DAC interface clock enable during Sleep mode **/
#define RCC_APB1LPENR_DACLPEN		(1 << 29)
/** RCC_APB1LPENR_PWRLPEN Power interface clock enable during Sleep mode **/
#define RCC_APB1LPENR_PWRLPEN		(1 << 28)
/** RCC_APB1LPENR_CAN2LPEN CAN 2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_CAN2LPEN		(1 << 26)
/** RCC_APB1LPENR_CAN1LPEN CAN 1 clock enable during Sleep mode **/
#define RCC_APB1LPENR_CAN1LPEN		(1 << 25)
/** RCC_APB1LPENR_I2C3LPEN I2C3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_I2C3LPEN		(1 << 23)
/** RCC_APB1LPENR_I2C2LPEN I2C2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_I2C2LPEN		(1 << 22)
/** RCC_APB1LPENR_I2C1LPEN I2C1 clock enable during Sleep mode **/
#define RCC_APB1LPENR_I2C1LPEN		(1 << 21)
/** RCC_APB1LPENR_UART5LPEN UART5 clock enable during Sleep mode **/
#define RCC_APB1LPENR_UART5LPEN		(1 << 20)
/** RCC_APB1LPENR_UART4LPEN UART4 clock enable during Sleep mode **/
#define RCC_APB1LPENR_UART4LPEN		(1 << 19)
/** RCC_APB1LPENR_USART3LPEN USART3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_USART3LPEN		(1 << 18)
/** RCC_APB1LPENR_USART2LPEN USART2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_USART2LPEN		(1 << 17)
/** RCC_APB1LPENR_SPI3LPEN SPI3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_SPI3LPEN		(1 << 15)
/** RCC_APB1LPENR_SPI2LPEN SPI2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_SPI2LPEN		(1 << 14)
/** RCC_APB1LPENR_WWDGLPEN Window watchdog clock enable during Sleep mode **/
#define RCC_APB1LPENR_WWDGLPEN		(1 << 11)
/** RCC_APB1LPENR_TIM14LPEN TIM14 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM14LPEN		(1 << 8)
/** RCC_APB1LPENR_TIM13LPEN TIM13 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM13LPEN		(1 << 7)
/** RCC_APB1LPENR_TIM12LPEN TIM12 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM12LPEN		(1 << 6)
/** RCC_APB1LPENR_TIM7LPEN TIM7 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM7LPEN		(1 << 5)
/** RCC_APB1LPENR_TIM6LPEN TIM6 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM6LPEN		(1 << 4)
/** RCC_APB1LPENR_TIM5LPEN TIM5 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM5LPEN		(1 << 3)
/** RCC_APB1LPENR_TIM4LPEN TIM4 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM4LPEN		(1 << 2)
/** RCC_APB1LPENR_TIM3LPEN TIM3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM3LPEN		(1 << 1)
/** RCC_APB1LPENR_TIM2LPEN TIM2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM2LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2lpenr APB2LPENR APB2 peripheral clock enabled in low power mode register
@{*/

/** RCC_APB2LPENR_SPI6LPEN SPI 6 clock enable during Sleep mode **/
#define RCC_APB2LPENR_SPI6LPEN		(1 << 21)
/** RCC_APB2LPENR_SPI5LPEN SPI 5 clock enable during Sleep mode **/
#define RCC_APB2LPENR_SPI5LPEN		(1 << 20)
/** RCC_APB2LPENR_TIM11LPEN TIM11 clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM11LPEN		(1 << 18)
/** RCC_APB2LPENR_TIM10LPEN TIM10 clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM10LPEN		(1 << 17)
/** RCC_APB2LPENR_TIM9LPEN TIM9 clock enable during sleep mode **/
#define RCC_APB2LPENR_TIM9LPEN		(1 << 16)
/** RCC_APB2LPENR_SYSCFGLPEN System configuration controller clock enable during Sleep mode **/
#define RCC_APB2LPENR_SYSCFGLPEN		(1 << 14)
/** RCC_APB2LPENR_SPI4LPEN SPI 4 clock enable during Sleep mode **/
#define RCC_APB2LPENR_SPI4LPEN		(1 << 13)
/** RCC_APB2LPENR_SPI1LPEN SPI 1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_SPI1LPEN		(1 << 12)
/** RCC_APB2LPENR_SDIOLPEN SDIO clock enable during Sleep mode **/
#define RCC_APB2LPENR_SDIOLPEN		(1 << 11)
/** RCC_APB2LPENR_ADC3LPEN ADC 3 clock enable during Sleep mode **/
#define RCC_APB2LPENR_ADC3LPEN		(1 << 10)
/** RCC_APB2LPENR_ADC2LPEN ADC2 clock enable during Sleep mode **/
#define RCC_APB2LPENR_ADC2LPEN		(1 << 9)
/** RCC_APB2LPENR_ADC1LPEN ADC1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_ADC1LPEN		(1 << 8)
/** RCC_APB2LPENR_USART6LPEN USART6 clock enable during Sleep mode **/
#define RCC_APB2LPENR_USART6LPEN		(1 << 5)
/** RCC_APB2LPENR_USART1LPEN USART1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_USART1LPEN		(1 << 4)
/** RCC_APB2LPENR_TIM8LPEN TIM8 clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM8LPEN		(1 << 1)
/** RCC_APB2LPENR_TIM1LPEN TIM1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM1LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_bdcr BDCR Backup domain control register
@{*/

/** RCC_BDCR_BDRST Backup domain software reset **/
#define RCC_BDCR_BDRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)
/** RCC_BDCR_RTCSEL1 RTC clock source selection **/
#define RCC_BDCR_RTCSEL1		(1 << 9)
/** RCC_BDCR_RTCSEL0 RTC clock source selection **/
#define RCC_BDCR_RTCSEL0		(1 << 8)
/** RCC_BDCR_LSEBYP External low-speed oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY External low-speed oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON External low-speed oscillator enable **/
#define RCC_BDCR_LSEON		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR clock control & status register
@{*/

/** RCC_CSR_LPWRRSTF Low-power reset flag **/
#define RCC_CSR_LPWRRSTF		(1 << 31)
/** RCC_CSR_WWDGRSTF Window watchdog reset flag **/
#define RCC_CSR_WWDGRSTF		(1 << 30)
/** RCC_CSR_WDGRSTF Independent watchdog reset flag **/
#define RCC_CSR_WDGRSTF		(1 << 29)
/** RCC_CSR_SFTRSTF Software reset flag **/
#define RCC_CSR_SFTRSTF		(1 << 28)
/** RCC_CSR_PORRSTF POR/PDR reset flag **/
#define RCC_CSR_PORRSTF		(1 << 27)
/** RCC_CSR_PADRSTF PIN reset flag **/
#define RCC_CSR_PADRSTF		(1 << 26)
/** RCC_CSR_BORRSTF BOR reset flag **/
#define RCC_CSR_BORRSTF		(1 << 25)
/** RCC_CSR_RMVF Remove reset flag **/
#define RCC_CSR_RMVF		(1 << 24)
/** RCC_CSR_LSIRDY Internal low-speed oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION Internal low-speed oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

/** @defgroup rcc_sscgr SSCGR spread spectrum clock generation register
@{*/

/** RCC_SSCGR_SSCGEN Spread spectrum modulation enable **/
#define RCC_SSCGR_SSCGEN		(1 << 31)
/** RCC_SSCGR_SPREADSEL Spread Select **/
#define RCC_SSCGR_SPREADSEL		(1 << 30)

#define RCC_SSCGR_INCSTEP_SHIFT		13
#define RCC_SSCGR_INCSTEP_MASK		0x7fff
/** @defgroup rcc_sscgr_incstep INCSTEP Incrementation step
@{*/
/**@}*/


#define RCC_SSCGR_MODPER_SHIFT		0
#define RCC_SSCGR_MODPER_MASK		0x1fff
/** @defgroup rcc_sscgr_modper MODPER Modulation period
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_plli2scfgr PLLI2SCFGR PLLI2S configuration register
@{*/


#define RCC_PLLI2SCFGR_PLLI2SRx_SHIFT		28
#define RCC_PLLI2SCFGR_PLLI2SRx_MASK		0x07
/** @defgroup rcc_plli2scfgr_plli2srx PLLI2SRx PLLI2S division factor for I2S clocks
@{*/
/**@}*/


#define RCC_PLLI2SCFGR_PLLI2SNx_SHIFT		6
#define RCC_PLLI2SCFGR_PLLI2SNx_MASK		0x1ff
/** @defgroup rcc_plli2scfgr_plli2snx PLLI2SNx PLLI2S multiplication factor for VCO
@{*/
/**@}*/


/**@}*/

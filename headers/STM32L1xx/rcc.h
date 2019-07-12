#pragma once 

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

/** RCC_CR Clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_ICSCR Internal clock sources calibration register **/
#define RCC_ICSCR			MMIO32(RCC_BASE + 0x04)
/** RCC_CFGR Clock configuration register **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x08)
/** RCC_CIR Clock interrupt register **/
#define RCC_CIR			MMIO32(RCC_BASE + 0x0c)
/** RCC_AHBRSTR AHB peripheral reset register **/
#define RCC_AHBRSTR			MMIO32(RCC_BASE + 0x10)
/** RCC_APB2RSTR APB2 peripheral reset register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x14)
/** RCC_APB1RSTR APB1 peripheral reset register **/
#define RCC_APB1RSTR			MMIO32(RCC_BASE + 0x18)
/** RCC_AHBENR AHB peripheral clock enable register **/
#define RCC_AHBENR			MMIO32(RCC_BASE + 0x1c)
/** RCC_APB2ENR APB2 peripheral clock enable register **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0x20)
/** RCC_APB1ENR APB1 peripheral clock enable register **/
#define RCC_APB1ENR			MMIO32(RCC_BASE + 0x24)
/** RCC_AHBLPENR AHB peripheral clock enable in low power mode register **/
#define RCC_AHBLPENR			MMIO32(RCC_BASE + 0x28)
/** RCC_APB2LPENR APB2 peripheral clock enable in low power mode register **/
#define RCC_APB2LPENR			MMIO32(RCC_BASE + 0x2c)
/** RCC_APB1LPENR APB1 peripheral clock enable in low power mode register **/
#define RCC_APB1LPENR			MMIO32(RCC_BASE + 0x30)
/** RCC_CSR Control/status register **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x34)

/**@}*/


/** @defgroup rcc_cr CR Clock control register
@{*/

/** RCC_CR_RTCPRE1 TC/LCD prescaler **/
#define RCC_CR_RTCPRE1		(1 << 30)
/** RCC_CR_RTCPRE0 RTCPRE0 **/
#define RCC_CR_RTCPRE0		(1 << 29)
/** RCC_CR_CSSON Clock security system enable **/
#define RCC_CR_CSSON		(1 << 28)
/** RCC_CR_PLLRDY PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON PLL enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_HSEBYP HSE clock bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)
/** RCC_CR_MSIRDY MSI clock ready flag **/
#define RCC_CR_MSIRDY		(1 << 9)
/** RCC_CR_MSION MSI clock enable **/
#define RCC_CR_MSION		(1 << 8)
/** RCC_CR_HSIRDY Internal high-speed clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 1)
/** RCC_CR_HSION Internal high-speed clock enable **/
#define RCC_CR_HSION		(1 << 0)

/**@}*/

/** @defgroup rcc_icscr ICSCR Internal clock sources calibration register
@{*/


#define RCC_ICSCR_MSITRIM_SHIFT		24
#define RCC_ICSCR_MSITRIM_MASK		0xff
/** @defgroup rcc_icscr_msitrim MSITRIM MSI clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_MSICAL_SHIFT		16
#define RCC_ICSCR_MSICAL_MASK		0xff
/** @defgroup rcc_icscr_msical MSICAL MSI clock calibration
@{*/
/**@}*/


#define RCC_ICSCR_MSIRANGE_SHIFT		13
#define RCC_ICSCR_MSIRANGE_MASK		0x07
/** @defgroup rcc_icscr_msirange MSIRANGE MSI clock ranges
@{*/
/**@}*/


#define RCC_ICSCR_HSITRIM_SHIFT		8
#define RCC_ICSCR_HSITRIM_MASK		0x1f
/** @defgroup rcc_icscr_hsitrim HSITRIM High speed internal clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_HSICAL_SHIFT		0
#define RCC_ICSCR_HSICAL_MASK		0xff
/** @defgroup rcc_icscr_hsical HSICAL nternal high speed clock calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cfgr CFGR Clock configuration register
@{*/


#define RCC_CFGR_MCOPRE_SHIFT		28
#define RCC_CFGR_MCOPRE_MASK		0x07
/** @defgroup rcc_cfgr_mcopre MCOPRE Microcontroller clock output prescaler
@{*/
/**@}*/


#define RCC_CFGR_MCOSEL_SHIFT		24
#define RCC_CFGR_MCOSEL_MASK		0x07
/** @defgroup rcc_cfgr_mcosel MCOSEL Microcontroller clock output selection
@{*/
/**@}*/


#define RCC_CFGR_PLLDIV_SHIFT		22
#define RCC_CFGR_PLLDIV_MASK		0x03
/** @defgroup rcc_cfgr_plldiv PLLDIV PLL output division
@{*/
/**@}*/


#define RCC_CFGR_PLLMUL_SHIFT		18
#define RCC_CFGR_PLLMUL_MASK		0x0f
/** @defgroup rcc_cfgr_pllmul PLLMUL PLL multiplication factor
@{*/
/**@}*/

/** RCC_CFGR_PLLSRC PLL entry clock source **/
#define RCC_CFGR_PLLSRC		(1 << 16)

#define RCC_CFGR_PPRE2_SHIFT		11
#define RCC_CFGR_PPRE2_MASK		0x07
/** @defgroup rcc_cfgr_ppre2 PPRE2 APB high-speed prescaler (APB2)
@{*/
/**@}*/


#define RCC_CFGR_PPRE1_SHIFT		8
#define RCC_CFGR_PPRE1_MASK		0x07
/** @defgroup rcc_cfgr_ppre1 PPRE1 APB low-speed prescaler (APB1)
@{*/
/**@}*/


#define RCC_CFGR_HPRE_SHIFT		4
#define RCC_CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_cfgr_hpre HPRE AHB prescaler
@{*/
/**@}*/


#define RCC_CFGR_SWS_SHIFT		2
#define RCC_CFGR_SWS_MASK		0x03
/** @defgroup rcc_cfgr_sws SWS System clock switch status
@{*/
/**@}*/


#define RCC_CFGR_SW_SHIFT		0
#define RCC_CFGR_SW_MASK		0x03
/** @defgroup rcc_cfgr_sw SW System clock switch
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cir CIR Clock interrupt register
@{*/

/** RCC_CIR_CSSC Clock security system interrupt clear **/
#define RCC_CIR_CSSC		(1 << 23)
/** RCC_CIR_MSIRDYC MSI ready interrupt clear **/
#define RCC_CIR_MSIRDYC		(1 << 21)
/** RCC_CIR_PLLRDYC PLL ready interrupt clear **/
#define RCC_CIR_PLLRDYC		(1 << 20)
/** RCC_CIR_HSERDYC HSE ready interrupt clear **/
#define RCC_CIR_HSERDYC		(1 << 19)
/** RCC_CIR_HSIRDYC HSI ready interrupt clear **/
#define RCC_CIR_HSIRDYC		(1 << 18)
/** RCC_CIR_LSERDYC LSE ready interrupt clear **/
#define RCC_CIR_LSERDYC		(1 << 17)
/** RCC_CIR_LSIRDYC LSI ready interrupt clear **/
#define RCC_CIR_LSIRDYC		(1 << 16)
/** RCC_CIR_MSIRDYIE MSI ready interrupt enable **/
#define RCC_CIR_MSIRDYIE		(1 << 13)
/** RCC_CIR_PLLRDYIE PLL ready interrupt enable **/
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
/** RCC_CIR_MSIRDYF MSI ready interrupt flag **/
#define RCC_CIR_MSIRDYF		(1 << 5)
/** RCC_CIR_PLLRDYF PLL ready interrupt flag **/
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

/** @defgroup rcc_ahbrstr AHBRSTR AHB peripheral reset register
@{*/

/** RCC_AHBRSTR_FSMCRST FSMC reset **/
#define RCC_AHBRSTR_FSMCRST		(1 << 30)
/** RCC_AHBRSTR_DMA2RST DMA2 reset **/
#define RCC_AHBRSTR_DMA2RST		(1 << 25)
/** RCC_AHBRSTR_DMA1RST DMA1 reset **/
#define RCC_AHBRSTR_DMA1RST		(1 << 24)
/** RCC_AHBRSTR_FLITFRST FLITF reset **/
#define RCC_AHBRSTR_FLITFRST		(1 << 15)
/** RCC_AHBRSTR_CRCRST CRC reset **/
#define RCC_AHBRSTR_CRCRST		(1 << 12)
/** RCC_AHBRSTR_GPIOGRST IO port G reset **/
#define RCC_AHBRSTR_GPIOGRST		(1 << 7)
/** RCC_AHBRSTR_GPIOFRST IO port F reset **/
#define RCC_AHBRSTR_GPIOFRST		(1 << 6)
/** RCC_AHBRSTR_GPIOHRST IO port H reset **/
#define RCC_AHBRSTR_GPIOHRST		(1 << 5)
/** RCC_AHBRSTR_GPIOERST IO port E reset **/
#define RCC_AHBRSTR_GPIOERST		(1 << 4)
/** RCC_AHBRSTR_GPIODRST IO port D reset **/
#define RCC_AHBRSTR_GPIODRST		(1 << 3)
/** RCC_AHBRSTR_GPIOCRST IO port C reset **/
#define RCC_AHBRSTR_GPIOCRST		(1 << 2)
/** RCC_AHBRSTR_GPIOBRST IO port B reset **/
#define RCC_AHBRSTR_GPIOBRST		(1 << 1)
/** RCC_AHBRSTR_GPIOARST IO port A reset **/
#define RCC_AHBRSTR_GPIOARST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register
@{*/

/** RCC_APB2RSTR_USART1RST USART1RST **/
#define RCC_APB2RSTR_USART1RST		(1 << 14)
/** RCC_APB2RSTR_SPI1RST SPI1RST **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_SDIORST SDIORST **/
#define RCC_APB2RSTR_SDIORST		(1 << 11)
/** RCC_APB2RSTR_ADC1RST ADC1RST **/
#define RCC_APB2RSTR_ADC1RST		(1 << 9)
/** RCC_APB2RSTR_TM11RST TM11RST **/
#define RCC_APB2RSTR_TM11RST		(1 << 4)
/** RCC_APB2RSTR_TM10RST TM10RST **/
#define RCC_APB2RSTR_TM10RST		(1 << 3)
/** RCC_APB2RSTR_TIM9RST TIM9RST **/
#define RCC_APB2RSTR_TIM9RST		(1 << 2)
/** RCC_APB2RSTR_SYSCFGRST SYSCFGRST **/
#define RCC_APB2RSTR_SYSCFGRST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr APB1RSTR APB1 peripheral reset register
@{*/

/** RCC_APB1RSTR_COMPRST COMP interface reset **/
#define RCC_APB1RSTR_COMPRST		(1 << 31)
/** RCC_APB1RSTR_DACRST DAC interface reset **/
#define RCC_APB1RSTR_DACRST		(1 << 29)
/** RCC_APB1RSTR_PWRRST Power interface reset **/
#define RCC_APB1RSTR_PWRRST		(1 << 28)
/** RCC_APB1RSTR_USBRST USB reset **/
#define RCC_APB1RSTR_USBRST		(1 << 23)
/** RCC_APB1RSTR_I2C2RST I2C 2 reset **/
#define RCC_APB1RSTR_I2C2RST		(1 << 22)
/** RCC_APB1RSTR_I2C1RST I2C 1 reset **/
#define RCC_APB1RSTR_I2C1RST		(1 << 21)
/** RCC_APB1RSTR_UART5RST UART 5 reset **/
#define RCC_APB1RSTR_UART5RST		(1 << 20)
/** RCC_APB1RSTR_UART4RST UART 4 reset **/
#define RCC_APB1RSTR_UART4RST		(1 << 19)
/** RCC_APB1RSTR_USART3RST USART 3 reset **/
#define RCC_APB1RSTR_USART3RST		(1 << 18)
/** RCC_APB1RSTR_USART2RST USART 2 reset **/
#define RCC_APB1RSTR_USART2RST		(1 << 17)
/** RCC_APB1RSTR_SPI3RST SPI 3 reset **/
#define RCC_APB1RSTR_SPI3RST		(1 << 15)
/** RCC_APB1RSTR_SPI2RST SPI 2 reset **/
#define RCC_APB1RSTR_SPI2RST		(1 << 14)
/** RCC_APB1RSTR_WWDRST Window watchdog reset **/
#define RCC_APB1RSTR_WWDRST		(1 << 11)
/** RCC_APB1RSTR_LCDRST LCD reset **/
#define RCC_APB1RSTR_LCDRST		(1 << 9)
/** RCC_APB1RSTR_TIM7RST Timer 7 reset **/
#define RCC_APB1RSTR_TIM7RST		(1 << 5)
/** RCC_APB1RSTR_TIM6RST Timer 6reset **/
#define RCC_APB1RSTR_TIM6RST		(1 << 4)
/** RCC_APB1RSTR_TIM5RST Timer 5 reset **/
#define RCC_APB1RSTR_TIM5RST		(1 << 3)
/** RCC_APB1RSTR_TIM4RST Timer 4 reset **/
#define RCC_APB1RSTR_TIM4RST		(1 << 2)
/** RCC_APB1RSTR_TIM3RST Timer 3 reset **/
#define RCC_APB1RSTR_TIM3RST		(1 << 1)
/** RCC_APB1RSTR_TIM2RST Timer 2 reset **/
#define RCC_APB1RSTR_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbenr AHBENR AHB peripheral clock enable register
@{*/

/** RCC_AHBENR_FSMCEN FSMCEN **/
#define RCC_AHBENR_FSMCEN		(1 << 30)
/** RCC_AHBENR_DMA2EN DMA2 clock enable **/
#define RCC_AHBENR_DMA2EN		(1 << 25)
/** RCC_AHBENR_DMA1EN DMA1 clock enable **/
#define RCC_AHBENR_DMA1EN		(1 << 24)
/** RCC_AHBENR_FLITFEN FLITF clock enable **/
#define RCC_AHBENR_FLITFEN		(1 << 15)
/** RCC_AHBENR_CRCEN CRC clock enable **/
#define RCC_AHBENR_CRCEN		(1 << 12)
/** RCC_AHBENR_GPIOPGEN IO port G clock enable **/
#define RCC_AHBENR_GPIOPGEN		(1 << 7)
/** RCC_AHBENR_GPIOPFEN IO port F clock enable **/
#define RCC_AHBENR_GPIOPFEN		(1 << 6)
/** RCC_AHBENR_GPIOPHEN IO port H clock enable **/
#define RCC_AHBENR_GPIOPHEN		(1 << 5)
/** RCC_AHBENR_GPIOPEEN IO port E clock enable **/
#define RCC_AHBENR_GPIOPEEN		(1 << 4)
/** RCC_AHBENR_GPIOPDEN IO port D clock enable **/
#define RCC_AHBENR_GPIOPDEN		(1 << 3)
/** RCC_AHBENR_GPIOPCEN IO port C clock enable **/
#define RCC_AHBENR_GPIOPCEN		(1 << 2)
/** RCC_AHBENR_GPIOPBEN IO port B clock enable **/
#define RCC_AHBENR_GPIOPBEN		(1 << 1)
/** RCC_AHBENR_GPIOPAEN IO port A clock enable **/
#define RCC_AHBENR_GPIOPAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2 peripheral clock enable register
@{*/

/** RCC_APB2ENR_USART1EN USART1 clock enable **/
#define RCC_APB2ENR_USART1EN		(1 << 14)
/** RCC_APB2ENR_SPI1EN SPI 1 clock enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_SDIOEN SDIO clock enable **/
#define RCC_APB2ENR_SDIOEN		(1 << 11)
/** RCC_APB2ENR_ADC1EN ADC1 interface clock enable **/
#define RCC_APB2ENR_ADC1EN		(1 << 9)
/** RCC_APB2ENR_TIM11EN TIM11 timer clock enable **/
#define RCC_APB2ENR_TIM11EN		(1 << 4)
/** RCC_APB2ENR_TIM10EN TIM10 timer clock enable **/
#define RCC_APB2ENR_TIM10EN		(1 << 3)
/** RCC_APB2ENR_TIM9EN TIM9 timer clock enable **/
#define RCC_APB2ENR_TIM9EN		(1 << 2)
/** RCC_APB2ENR_SYSCFGEN System configuration controller clock enable **/
#define RCC_APB2ENR_SYSCFGEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr APB1ENR APB1 peripheral clock enable register
@{*/

/** RCC_APB1ENR_COMPEN COMP interface clock enable **/
#define RCC_APB1ENR_COMPEN		(1 << 31)
/** RCC_APB1ENR_DACEN DAC interface clock enable **/
#define RCC_APB1ENR_DACEN		(1 << 29)
/** RCC_APB1ENR_PWREN Power interface clock enable **/
#define RCC_APB1ENR_PWREN		(1 << 28)
/** RCC_APB1ENR_USBEN USB clock enable **/
#define RCC_APB1ENR_USBEN		(1 << 23)
/** RCC_APB1ENR_I2C2EN I2C 2 clock enable **/
#define RCC_APB1ENR_I2C2EN		(1 << 22)
/** RCC_APB1ENR_I2C1EN I2C 1 clock enable **/
#define RCC_APB1ENR_I2C1EN		(1 << 21)
/** RCC_APB1ENR_USART5EN UART 5 clock enable **/
#define RCC_APB1ENR_USART5EN		(1 << 20)
/** RCC_APB1ENR_USART4EN UART 4 clock enable **/
#define RCC_APB1ENR_USART4EN		(1 << 19)
/** RCC_APB1ENR_USART3EN USART 3 clock enable **/
#define RCC_APB1ENR_USART3EN		(1 << 18)
/** RCC_APB1ENR_USART2EN USART 2 clock enable **/
#define RCC_APB1ENR_USART2EN		(1 << 17)
/** RCC_APB1ENR_SPI3EN SPI 3 clock enable **/
#define RCC_APB1ENR_SPI3EN		(1 << 15)
/** RCC_APB1ENR_SPI2EN SPI 2 clock enable **/
#define RCC_APB1ENR_SPI2EN		(1 << 14)
/** RCC_APB1ENR_WWDGEN Window watchdog clock enable **/
#define RCC_APB1ENR_WWDGEN		(1 << 11)
/** RCC_APB1ENR_LCDEN LCD clock enable **/
#define RCC_APB1ENR_LCDEN		(1 << 9)
/** RCC_APB1ENR_TIM7EN Timer 7 clock enable **/
#define RCC_APB1ENR_TIM7EN		(1 << 5)
/** RCC_APB1ENR_TIM6EN Timer 6 clock enable **/
#define RCC_APB1ENR_TIM6EN		(1 << 4)
/** RCC_APB1ENR_TIM5EN Timer 5 clock enable **/
#define RCC_APB1ENR_TIM5EN		(1 << 3)
/** RCC_APB1ENR_TIM4EN Timer 4 clock enable **/
#define RCC_APB1ENR_TIM4EN		(1 << 2)
/** RCC_APB1ENR_TIM3EN Timer 3 clock enable **/
#define RCC_APB1ENR_TIM3EN		(1 << 1)
/** RCC_APB1ENR_TIM2EN Timer 2 clock enable **/
#define RCC_APB1ENR_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahblpenr AHBLPENR AHB peripheral clock enable in low power mode register
@{*/

/** RCC_AHBLPENR_DMA2LPEN DMA2 clock enable during Sleep mode **/
#define RCC_AHBLPENR_DMA2LPEN		(1 << 25)
/** RCC_AHBLPENR_DMA1LPEN DMA1 clock enable during Sleep mode **/
#define RCC_AHBLPENR_DMA1LPEN		(1 << 24)
/** RCC_AHBLPENR_SRAMLPEN SRAM clock enable during Sleep mode **/
#define RCC_AHBLPENR_SRAMLPEN		(1 << 16)
/** RCC_AHBLPENR_FLITFLPEN FLITF clock enable during Sleep mode **/
#define RCC_AHBLPENR_FLITFLPEN		(1 << 15)
/** RCC_AHBLPENR_CRCLPEN CRC clock enable during Sleep mode **/
#define RCC_AHBLPENR_CRCLPEN		(1 << 12)
/** RCC_AHBLPENR_GPIOGLPEN IO port G clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOGLPEN		(1 << 7)
/** RCC_AHBLPENR_GPIOFLPEN IO port F clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOFLPEN		(1 << 6)
/** RCC_AHBLPENR_GPIOHLPEN IO port H clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOHLPEN		(1 << 5)
/** RCC_AHBLPENR_GPIOELPEN IO port E clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOELPEN		(1 << 4)
/** RCC_AHBLPENR_GPIODLPEN IO port D clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIODLPEN		(1 << 3)
/** RCC_AHBLPENR_GPIOCLPEN IO port C clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOCLPEN		(1 << 2)
/** RCC_AHBLPENR_GPIOBLPEN IO port B clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOBLPEN		(1 << 1)
/** RCC_AHBLPENR_GPIOALPEN IO port A clock enable during Sleep mode **/
#define RCC_AHBLPENR_GPIOALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2lpenr APB2LPENR APB2 peripheral clock enable in low power mode register
@{*/

/** RCC_APB2LPENR_USART1LPEN USART1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_USART1LPEN		(1 << 14)
/** RCC_APB2LPENR_SPI1LPEN SPI 1 clock enable during Sleep mode **/
#define RCC_APB2LPENR_SPI1LPEN		(1 << 12)
/** RCC_APB2LPENR_SDIOLPEN Reserved **/
#define RCC_APB2LPENR_SDIOLPEN		(1 << 11)
/** RCC_APB2LPENR_ADC1LPEN ADC1 interface clock enable during Sleep mode **/
#define RCC_APB2LPENR_ADC1LPEN		(1 << 9)
/** RCC_APB2LPENR_TIM11LPEN TIM11 timer clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM11LPEN		(1 << 4)
/** RCC_APB2LPENR_TIM10LPEN TIM10 timer clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM10LPEN		(1 << 3)
/** RCC_APB2LPENR_TIM9LPEN TIM9 timer clock enable during Sleep mode **/
#define RCC_APB2LPENR_TIM9LPEN		(1 << 2)
/** RCC_APB2LPENR_SYSCFGLPEN System configuration controller clock enable during Sleep mode **/
#define RCC_APB2LPENR_SYSCFGLPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1lpenr APB1LPENR APB1 peripheral clock enable in low power mode register
@{*/

/** RCC_APB1LPENR_COMPLPEN COMP interface clock enable during Sleep mode **/
#define RCC_APB1LPENR_COMPLPEN		(1 << 31)
/** RCC_APB1LPENR_DACLPEN DAC interface clock enable during Sleep mode **/
#define RCC_APB1LPENR_DACLPEN		(1 << 29)
/** RCC_APB1LPENR_PWRLPEN Power interface clock enable during Sleep mode **/
#define RCC_APB1LPENR_PWRLPEN		(1 << 28)
/** RCC_APB1LPENR_USBLPEN USB clock enable during Sleep mode **/
#define RCC_APB1LPENR_USBLPEN		(1 << 23)
/** RCC_APB1LPENR_I2C2LPEN I2C 2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_I2C2LPEN		(1 << 22)
/** RCC_APB1LPENR_I2C1LPEN I2C 1 clock enable during Sleep mode **/
#define RCC_APB1LPENR_I2C1LPEN		(1 << 21)
/** RCC_APB1LPENR_USART3LPEN USART 3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_USART3LPEN		(1 << 18)
/** RCC_APB1LPENR_USART2LPEN USART 2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_USART2LPEN		(1 << 17)
/** RCC_APB1LPENR_SPI2LPEN SPI 2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_SPI2LPEN		(1 << 14)
/** RCC_APB1LPENR_WWDGLPEN Window watchdog clock enable during Sleep mode **/
#define RCC_APB1LPENR_WWDGLPEN		(1 << 11)
/** RCC_APB1LPENR_LCDLPEN LCD clock enable during Sleep mode **/
#define RCC_APB1LPENR_LCDLPEN		(1 << 9)
/** RCC_APB1LPENR_TIM7LPEN Timer 7 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM7LPEN		(1 << 5)
/** RCC_APB1LPENR_TIM6LPEN Timer 6 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM6LPEN		(1 << 4)
/** RCC_APB1LPENR_TIM4LPEN Timer 4 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM4LPEN		(1 << 2)
/** RCC_APB1LPENR_TIM3LPEN Timer 3 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM3LPEN		(1 << 1)
/** RCC_APB1LPENR_TIM2LPEN Timer 2 clock enable during Sleep mode **/
#define RCC_APB1LPENR_TIM2LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR Control/status register
@{*/

/** RCC_CSR_LPWRSTF Low-power reset flag **/
#define RCC_CSR_LPWRSTF		(1 << 31)
/** RCC_CSR_WWDGRSTF Window watchdog reset flag **/
#define RCC_CSR_WWDGRSTF		(1 << 30)
/** RCC_CSR_IWDGRSTF Independent watchdog reset flag **/
#define RCC_CSR_IWDGRSTF		(1 << 29)
/** RCC_CSR_SFTRSTF Software reset flag **/
#define RCC_CSR_SFTRSTF		(1 << 28)
/** RCC_CSR_PORRSTF POR/PDR reset flag **/
#define RCC_CSR_PORRSTF		(1 << 27)
/** RCC_CSR_PINRSTF PIN reset flag **/
#define RCC_CSR_PINRSTF		(1 << 26)
/** RCC_CSR_RMVF Remove reset flag **/
#define RCC_CSR_RMVF		(1 << 24)
/** RCC_CSR_RTCRST RTC software reset **/
#define RCC_CSR_RTCRST		(1 << 23)
/** RCC_CSR_RTCEN RTC clock enable **/
#define RCC_CSR_RTCEN		(1 << 22)

#define RCC_CSR_RTCSEL_SHIFT		16
#define RCC_CSR_RTCSEL_MASK		0x03
/** @defgroup rcc_csr_rtcsel RTCSEL RTC and LCD clock source selection
@{*/
/**@}*/

/** RCC_CSR_LSEBYP External low-speed oscillator bypass **/
#define RCC_CSR_LSEBYP		(1 << 10)
/** RCC_CSR_LSERDY External low-speed oscillator ready **/
#define RCC_CSR_LSERDY		(1 << 9)
/** RCC_CSR_LSEON External low-speed oscillator enable **/
#define RCC_CSR_LSEON		(1 << 8)
/** RCC_CSR_LSIRDY Internal low-speed oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION Internal low-speed oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

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
/** RCC_PLLSYSCFGR PLL configuration register **/
#define RCC_PLLSYSCFGR			MMIO32(RCC_BASE + 0x0c)
/** RCC_CIER Clock interrupt enable register **/
#define RCC_CIER			MMIO32(RCC_BASE + 0x18)
/** RCC_CIFR Clock interrupt flag register **/
#define RCC_CIFR			MMIO32(RCC_BASE + 0x1c)
/** RCC_CICR Clock interrupt clear register **/
#define RCC_CICR			MMIO32(RCC_BASE + 0x20)
/** RCC_IOPRSTR GPIO reset register **/
#define RCC_IOPRSTR			MMIO32(RCC_BASE + 0x24)
/** RCC_AHBRSTR AHB peripheral reset register **/
#define RCC_AHBRSTR			MMIO32(RCC_BASE + 0x28)
/** RCC_APBRSTR1 APB peripheral reset register 1 **/
#define RCC_APBRSTR1			MMIO32(RCC_BASE + 0x2c)
/** RCC_APBRSTR2 APB peripheral reset register 2 **/
#define RCC_APBRSTR2			MMIO32(RCC_BASE + 0x30)
/** RCC_IOPENR GPIO clock enable register **/
#define RCC_IOPENR			MMIO32(RCC_BASE + 0x34)
/** RCC_AHBENR AHB peripheral clock enable register **/
#define RCC_AHBENR			MMIO32(RCC_BASE + 0x38)
/** RCC_APBENR1 APB peripheral clock enable register 1 **/
#define RCC_APBENR1			MMIO32(RCC_BASE + 0x3c)
/** RCC_APBENR2 APB peripheral clock enable register 2 **/
#define RCC_APBENR2			MMIO32(RCC_BASE + 0x40)
/** RCC_IOPSMENR GPIO in Sleep mode clock enable register **/
#define RCC_IOPSMENR			MMIO32(RCC_BASE + 0x44)
/** RCC_AHBSMENR AHB peripheral clock enable in Sleep mode register **/
#define RCC_AHBSMENR			MMIO32(RCC_BASE + 0x48)
/** RCC_APBSMENR1 APB peripheral clock enable in Sleep mode register 1 **/
#define RCC_APBSMENR1			MMIO32(RCC_BASE + 0x4c)
/** RCC_APBSMENR2 APB peripheral clock enable in Sleep mode register 2 **/
#define RCC_APBSMENR2			MMIO32(RCC_BASE + 0x50)
/** RCC_CCIPR Peripherals independent clock configuration register **/
#define RCC_CCIPR			MMIO32(RCC_BASE + 0x54)
/** RCC_BDCR RTC domain control register **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x5c)
/** RCC_CSR Control/status register **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x60)

/**@}*/


/** @defgroup rcc_cr CR Clock control register
@{*/

/** RCC_CR_PLLRDY PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON PLL enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_CSSON Clock security system enable **/
#define RCC_CR_CSSON		(1 << 19)
/** RCC_CR_HSEBYP HSE crystal oscillator bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)

#define RCC_CR_HSIDIV_SHIFT		11
#define RCC_CR_HSIDIV_MASK		0x07
/** @defgroup rcc_cr_hsidiv HSIDIV HSI16 clock division factor
@{*/
/**@}*/

/** RCC_CR_HSIRDY HSI16 clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 10)
/** RCC_CR_HSIKERON HSI16 always enable for peripheral kernels **/
#define RCC_CR_HSIKERON		(1 << 9)
/** RCC_CR_HSION HSI16 clock enable **/
#define RCC_CR_HSION		(1 << 8)

/**@}*/

/** @defgroup rcc_icscr ICSCR Internal clock sources calibration register
@{*/


#define RCC_ICSCR_HSITRIM_SHIFT		8
#define RCC_ICSCR_HSITRIM_MASK		0x7f
/** @defgroup rcc_icscr_hsitrim HSITRIM HSI16 clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_HSICAL_SHIFT		0
#define RCC_ICSCR_HSICAL_MASK		0xff
/** @defgroup rcc_icscr_hsical HSICAL HSI16 clock calibration
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
/** @defgroup rcc_cfgr_mcosel MCOSEL Microcontroller clock output
@{*/
/**@}*/


#define RCC_CFGR_PPRE_SHIFT		12
#define RCC_CFGR_PPRE_MASK		0x07
/** @defgroup rcc_cfgr_ppre PPRE APB prescaler
@{*/
/**@}*/


#define RCC_CFGR_HPRE_SHIFT		8
#define RCC_CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_cfgr_hpre HPRE AHB prescaler
@{*/
/**@}*/


#define RCC_CFGR_SWS_SHIFT		3
#define RCC_CFGR_SWS_MASK		0x07
/** @defgroup rcc_cfgr_sws SWS System clock switch status
@{*/
/**@}*/


#define RCC_CFGR_SW_SHIFT		0
#define RCC_CFGR_SW_MASK		0x07
/** @defgroup rcc_cfgr_sw SW System clock switch
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pllsyscfgr PLLSYSCFGR PLL configuration register
@{*/


#define RCC_PLLSYSCFGR_PLLR_SHIFT		29
#define RCC_PLLSYSCFGR_PLLR_MASK		0x07
/** @defgroup rcc_pllsyscfgr_pllr PLLR PLL VCO division factor R for PLLRCLK clock output
@{*/
/**@}*/

/** RCC_PLLSYSCFGR_PLLREN PLLRCLK clock output enable **/
#define RCC_PLLSYSCFGR_PLLREN		(1 << 28)

#define RCC_PLLSYSCFGR_PLLQ_SHIFT		25
#define RCC_PLLSYSCFGR_PLLQ_MASK		0x07
/** @defgroup rcc_pllsyscfgr_pllq PLLQ PLL VCO division factor Q for PLLQCLK clock output
@{*/
/**@}*/

/** RCC_PLLSYSCFGR_PLLQEN PLLQCLK clock output enable **/
#define RCC_PLLSYSCFGR_PLLQEN		(1 << 24)

#define RCC_PLLSYSCFGR_PLLP_SHIFT		17
#define RCC_PLLSYSCFGR_PLLP_MASK		0x1f
/** @defgroup rcc_pllsyscfgr_pllp PLLP PLL VCO division factor P for PLLPCLK clock output
@{*/
/**@}*/

/** RCC_PLLSYSCFGR_PLLPEN PLLPCLK clock output enable **/
#define RCC_PLLSYSCFGR_PLLPEN		(1 << 16)

#define RCC_PLLSYSCFGR_PLLN_SHIFT		8
#define RCC_PLLSYSCFGR_PLLN_MASK		0x7f
/** @defgroup rcc_pllsyscfgr_plln PLLN PLL frequency multiplication factor N
@{*/
/**@}*/


#define RCC_PLLSYSCFGR_PLLM_SHIFT		4
#define RCC_PLLSYSCFGR_PLLM_MASK		0x07
/** @defgroup rcc_pllsyscfgr_pllm PLLM Division factor M of the PLL input clock divider
@{*/
/**@}*/


#define RCC_PLLSYSCFGR_PLLSRC_SHIFT		0
#define RCC_PLLSYSCFGR_PLLSRC_MASK		0x03
/** @defgroup rcc_pllsyscfgr_pllsrc PLLSRC PLL input clock source
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cier CIER Clock interrupt enable register
@{*/

/** RCC_CIER_PLLSYSRDYIE PLL ready interrupt enable **/
#define RCC_CIER_PLLSYSRDYIE		(1 << 5)
/** RCC_CIER_HSERDYIE HSE ready interrupt enable **/
#define RCC_CIER_HSERDYIE		(1 << 4)
/** RCC_CIER_HSIRDYIE HSI ready interrupt enable **/
#define RCC_CIER_HSIRDYIE		(1 << 3)
/** RCC_CIER_LSERDYIE LSE ready interrupt enable **/
#define RCC_CIER_LSERDYIE		(1 << 1)
/** RCC_CIER_LSIRDYIE LSI ready interrupt enable **/
#define RCC_CIER_LSIRDYIE		(1 << 0)

/**@}*/

/** @defgroup rcc_cifr CIFR Clock interrupt flag register
@{*/

/** RCC_CIFR_LSECSSF LSE Clock security system interrupt flag **/
#define RCC_CIFR_LSECSSF		(1 << 9)
/** RCC_CIFR_CSSF Clock security system interrupt flag **/
#define RCC_CIFR_CSSF		(1 << 8)
/** RCC_CIFR_PLLSYSRDYF PLL ready interrupt flag **/
#define RCC_CIFR_PLLSYSRDYF		(1 << 5)
/** RCC_CIFR_HSERDYF HSE ready interrupt flag **/
#define RCC_CIFR_HSERDYF		(1 << 4)
/** RCC_CIFR_HSIRDYF HSI ready interrupt flag **/
#define RCC_CIFR_HSIRDYF		(1 << 3)
/** RCC_CIFR_LSERDYF LSE ready interrupt flag **/
#define RCC_CIFR_LSERDYF		(1 << 1)
/** RCC_CIFR_LSIRDYF LSI ready interrupt flag **/
#define RCC_CIFR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_cicr CICR Clock interrupt clear register
@{*/

/** RCC_CICR_LSECSSC LSE Clock security system interrupt clear **/
#define RCC_CICR_LSECSSC		(1 << 9)
/** RCC_CICR_CSSC Clock security system interrupt clear **/
#define RCC_CICR_CSSC		(1 << 8)
/** RCC_CICR_PLLSYSRDYC PLL ready interrupt clear **/
#define RCC_CICR_PLLSYSRDYC		(1 << 5)
/** RCC_CICR_HSERDYC HSE ready interrupt clear **/
#define RCC_CICR_HSERDYC		(1 << 4)
/** RCC_CICR_HSIRDYC HSI ready interrupt clear **/
#define RCC_CICR_HSIRDYC		(1 << 3)
/** RCC_CICR_LSERDYC LSE ready interrupt clear **/
#define RCC_CICR_LSERDYC		(1 << 1)
/** RCC_CICR_LSIRDYC LSI ready interrupt clear **/
#define RCC_CICR_LSIRDYC		(1 << 0)

/**@}*/

/** @defgroup rcc_ioprstr IOPRSTR GPIO reset register
@{*/

/** RCC_IOPRSTR_IOPFRST I/O port F reset **/
#define RCC_IOPRSTR_IOPFRST		(1 << 5)
/** RCC_IOPRSTR_IOPDRST I/O port D reset **/
#define RCC_IOPRSTR_IOPDRST		(1 << 3)
/** RCC_IOPRSTR_IOPCRST I/O port C reset **/
#define RCC_IOPRSTR_IOPCRST		(1 << 2)
/** RCC_IOPRSTR_IOPBRST I/O port B reset **/
#define RCC_IOPRSTR_IOPBRST		(1 << 1)
/** RCC_IOPRSTR_IOPARST I/O port A reset **/
#define RCC_IOPRSTR_IOPARST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbrstr AHBRSTR AHB peripheral reset register
@{*/

/** RCC_AHBRSTR_RNGRST Random number generator reset **/
#define RCC_AHBRSTR_RNGRST		(1 << 18)
/** RCC_AHBRSTR_AESRST AES hardware accelerator reset **/
#define RCC_AHBRSTR_AESRST		(1 << 16)
/** RCC_AHBRSTR_CRCRST CRC reset **/
#define RCC_AHBRSTR_CRCRST		(1 << 12)
/** RCC_AHBRSTR_FLASHRST FLITF reset **/
#define RCC_AHBRSTR_FLASHRST		(1 << 8)
/** RCC_AHBRSTR_DMARST DMA1 reset **/
#define RCC_AHBRSTR_DMARST		(1 << 0)

/**@}*/

/** @defgroup rcc_apbrstr1 APBRSTR1 APB peripheral reset register 1
@{*/

/** RCC_APBRSTR1_LPTIM1RST Low Power Timer 1 reset **/
#define RCC_APBRSTR1_LPTIM1RST		(1 << 31)
/** RCC_APBRSTR1_LPTIM2RST Low Power Timer 2 reset **/
#define RCC_APBRSTR1_LPTIM2RST		(1 << 30)
/** RCC_APBRSTR1_DAC1RST DAC1 interface reset **/
#define RCC_APBRSTR1_DAC1RST		(1 << 29)
/** RCC_APBRSTR1_PWRRST Power interface reset **/
#define RCC_APBRSTR1_PWRRST		(1 << 28)
/** RCC_APBRSTR1_DBGRST Debug support reset **/
#define RCC_APBRSTR1_DBGRST		(1 << 27)
/** RCC_APBRSTR1_UCPD2RST UCPD2 reset **/
#define RCC_APBRSTR1_UCPD2RST		(1 << 26)
/** RCC_APBRSTR1_UCPD1RST UCPD1 reset **/
#define RCC_APBRSTR1_UCPD1RST		(1 << 25)
/** RCC_APBRSTR1_CECRST HDMI CEC reset **/
#define RCC_APBRSTR1_CECRST		(1 << 24)
/** RCC_APBRSTR1_I2C2RST I2C2 reset **/
#define RCC_APBRSTR1_I2C2RST		(1 << 22)
/** RCC_APBRSTR1_I2C1RST I2C1 reset **/
#define RCC_APBRSTR1_I2C1RST		(1 << 21)
/** RCC_APBRSTR1_LPUART1RST LPUART1 reset **/
#define RCC_APBRSTR1_LPUART1RST		(1 << 20)
/** RCC_APBRSTR1_USART4RST USART4 reset **/
#define RCC_APBRSTR1_USART4RST		(1 << 19)
/** RCC_APBRSTR1_USART3RST USART3 reset **/
#define RCC_APBRSTR1_USART3RST		(1 << 18)
/** RCC_APBRSTR1_USART2RST USART2 reset **/
#define RCC_APBRSTR1_USART2RST		(1 << 17)
/** RCC_APBRSTR1_SPI2RST SPI2 reset **/
#define RCC_APBRSTR1_SPI2RST		(1 << 14)
/** RCC_APBRSTR1_TIM7RST TIM7 timer reset **/
#define RCC_APBRSTR1_TIM7RST		(1 << 5)
/** RCC_APBRSTR1_TIM6RST TIM6 timer reset **/
#define RCC_APBRSTR1_TIM6RST		(1 << 4)
/** RCC_APBRSTR1_TIM3RST TIM3 timer reset **/
#define RCC_APBRSTR1_TIM3RST		(1 << 1)
/** RCC_APBRSTR1_TIM2RST TIM2 timer reset **/
#define RCC_APBRSTR1_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apbrstr2 APBRSTR2 APB peripheral reset register 2
@{*/

/** RCC_APBRSTR2_ADCRST ADC reset **/
#define RCC_APBRSTR2_ADCRST		(1 << 20)
/** RCC_APBRSTR2_TIM17RST TIM17 timer reset **/
#define RCC_APBRSTR2_TIM17RST		(1 << 18)
/** RCC_APBRSTR2_TIM16RST TIM16 timer reset **/
#define RCC_APBRSTR2_TIM16RST		(1 << 17)
/** RCC_APBRSTR2_TIM15RST TIM15 timer reset **/
#define RCC_APBRSTR2_TIM15RST		(1 << 16)
/** RCC_APBRSTR2_TIM14RST TIM14 timer reset **/
#define RCC_APBRSTR2_TIM14RST		(1 << 15)
/** RCC_APBRSTR2_USART1RST USART1 reset **/
#define RCC_APBRSTR2_USART1RST		(1 << 14)
/** RCC_APBRSTR2_SPI1RST SPI1 reset **/
#define RCC_APBRSTR2_SPI1RST		(1 << 12)
/** RCC_APBRSTR2_TIM1RST TIM1 timer reset **/
#define RCC_APBRSTR2_TIM1RST		(1 << 11)
/** RCC_APBRSTR2_SYSCFGRST SYSCFG, COMP and VREFBUF reset **/
#define RCC_APBRSTR2_SYSCFGRST		(1 << 0)

/**@}*/

/** @defgroup rcc_iopenr IOPENR GPIO clock enable register
@{*/

/** RCC_IOPENR_IOPFEN I/O port F clock enable **/
#define RCC_IOPENR_IOPFEN		(1 << 5)
/** RCC_IOPENR_IOPDEN I/O port D clock enable **/
#define RCC_IOPENR_IOPDEN		(1 << 3)
/** RCC_IOPENR_IOPCEN I/O port C clock enable **/
#define RCC_IOPENR_IOPCEN		(1 << 2)
/** RCC_IOPENR_IOPBEN I/O port B clock enable **/
#define RCC_IOPENR_IOPBEN		(1 << 1)
/** RCC_IOPENR_IOPAEN I/O port A clock enable **/
#define RCC_IOPENR_IOPAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbenr AHBENR AHB peripheral clock enable register
@{*/

/** RCC_AHBENR_RNGEN Random number generator clock enable **/
#define RCC_AHBENR_RNGEN		(1 << 18)
/** RCC_AHBENR_AESEN AES hardware accelerator **/
#define RCC_AHBENR_AESEN		(1 << 16)
/** RCC_AHBENR_CRCEN CRC clock enable **/
#define RCC_AHBENR_CRCEN		(1 << 12)
/** RCC_AHBENR_FLASHEN Flash memory interface clock enable **/
#define RCC_AHBENR_FLASHEN		(1 << 8)
/** RCC_AHBENR_DMAEN DMA clock enable **/
#define RCC_AHBENR_DMAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apbenr1 APBENR1 APB peripheral clock enable register 1
@{*/

/** RCC_APBENR1_LPTIM1EN LPTIM1 clock enable **/
#define RCC_APBENR1_LPTIM1EN		(1 << 31)
/** RCC_APBENR1_LPTIM2EN LPTIM2 clock enable **/
#define RCC_APBENR1_LPTIM2EN		(1 << 30)
/** RCC_APBENR1_DAC1EN DAC1 interface clock enable **/
#define RCC_APBENR1_DAC1EN		(1 << 29)
/** RCC_APBENR1_PWREN Power interface clock enable **/
#define RCC_APBENR1_PWREN		(1 << 28)
/** RCC_APBENR1_DBGEN Debug support clock enable **/
#define RCC_APBENR1_DBGEN		(1 << 27)
/** RCC_APBENR1_UCPD2EN UCPD2 clock enable **/
#define RCC_APBENR1_UCPD2EN		(1 << 26)
/** RCC_APBENR1_UCPD1EN UCPD1 clock enable **/
#define RCC_APBENR1_UCPD1EN		(1 << 25)
/** RCC_APBENR1_CECEN HDMI CEC clock enable **/
#define RCC_APBENR1_CECEN		(1 << 24)
/** RCC_APBENR1_I2C2EN I2C2 clock enable **/
#define RCC_APBENR1_I2C2EN		(1 << 22)
/** RCC_APBENR1_I2C1EN I2C1 clock enable **/
#define RCC_APBENR1_I2C1EN		(1 << 21)
/** RCC_APBENR1_LPUART1EN LPUART1 clock enable **/
#define RCC_APBENR1_LPUART1EN		(1 << 20)
/** RCC_APBENR1_USART4EN USART4 clock enable **/
#define RCC_APBENR1_USART4EN		(1 << 19)
/** RCC_APBENR1_USART3EN USART3 clock enable **/
#define RCC_APBENR1_USART3EN		(1 << 18)
/** RCC_APBENR1_USART2EN USART2 clock enable **/
#define RCC_APBENR1_USART2EN		(1 << 17)
/** RCC_APBENR1_SPI2EN SPI2 clock enable **/
#define RCC_APBENR1_SPI2EN		(1 << 14)
/** RCC_APBENR1_WWDGEN WWDG clock enable **/
#define RCC_APBENR1_WWDGEN		(1 << 11)
/** RCC_APBENR1_RTCAPBEN RTC APB clock enable **/
#define RCC_APBENR1_RTCAPBEN		(1 << 10)
/** RCC_APBENR1_TIM7EN TIM7 timer clock enable **/
#define RCC_APBENR1_TIM7EN		(1 << 5)
/** RCC_APBENR1_TIM6EN TIM6 timer clock enable **/
#define RCC_APBENR1_TIM6EN		(1 << 4)
/** RCC_APBENR1_TIM3EN TIM3 timer clock enable **/
#define RCC_APBENR1_TIM3EN		(1 << 1)
/** RCC_APBENR1_TIM2EN TIM2 timer clock enable **/
#define RCC_APBENR1_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apbenr2 APBENR2 APB peripheral clock enable register 2
@{*/

/** RCC_APBENR2_ADCEN ADC clock enable **/
#define RCC_APBENR2_ADCEN		(1 << 20)
/** RCC_APBENR2_TIM17EN TIM16 timer clock enable **/
#define RCC_APBENR2_TIM17EN		(1 << 18)
/** RCC_APBENR2_TIM16EN TIM16 timer clock enable **/
#define RCC_APBENR2_TIM16EN		(1 << 17)
/** RCC_APBENR2_TIM15EN TIM15 timer clock enable **/
#define RCC_APBENR2_TIM15EN		(1 << 16)
/** RCC_APBENR2_TIM14EN TIM14 timer clock enable **/
#define RCC_APBENR2_TIM14EN		(1 << 15)
/** RCC_APBENR2_USART1EN USART1 clock enable **/
#define RCC_APBENR2_USART1EN		(1 << 14)
/** RCC_APBENR2_SPI1EN SPI1 clock enable **/
#define RCC_APBENR2_SPI1EN		(1 << 12)
/** RCC_APBENR2_TIM1EN TIM1 timer clock enable **/
#define RCC_APBENR2_TIM1EN		(1 << 11)
/** RCC_APBENR2_SYSCFGEN SYSCFG, COMP and VREFBUF clock enable **/
#define RCC_APBENR2_SYSCFGEN		(1 << 0)

/**@}*/

/** @defgroup rcc_iopsmenr IOPSMENR GPIO in Sleep mode clock enable register
@{*/

/** RCC_IOPSMENR_IOPFSMEN I/O port F clock enable during Sleep mode **/
#define RCC_IOPSMENR_IOPFSMEN		(1 << 5)
/** RCC_IOPSMENR_IOPDSMEN I/O port D clock enable during Sleep mode **/
#define RCC_IOPSMENR_IOPDSMEN		(1 << 3)
/** RCC_IOPSMENR_IOPCSMEN I/O port C clock enable during Sleep mode **/
#define RCC_IOPSMENR_IOPCSMEN		(1 << 2)
/** RCC_IOPSMENR_IOPBSMEN I/O port B clock enable during Sleep mode **/
#define RCC_IOPSMENR_IOPBSMEN		(1 << 1)
/** RCC_IOPSMENR_IOPASMEN I/O port A clock enable during Sleep mode **/
#define RCC_IOPSMENR_IOPASMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbsmenr AHBSMENR AHB peripheral clock enable in Sleep mode register
@{*/

/** RCC_AHBSMENR_RNGSMEN Random number generator clock enable during Sleep mode **/
#define RCC_AHBSMENR_RNGSMEN		(1 << 18)
/** RCC_AHBSMENR_AESSMEN AES hardware accelerator clock enable during Sleep mode **/
#define RCC_AHBSMENR_AESSMEN		(1 << 16)
/** RCC_AHBSMENR_CRCSMEN CRC clock enable during Sleep mode **/
#define RCC_AHBSMENR_CRCSMEN		(1 << 12)
/** RCC_AHBSMENR_SRAMSMEN SRAM clock enable during Sleep mode **/
#define RCC_AHBSMENR_SRAMSMEN		(1 << 9)
/** RCC_AHBSMENR_FLASHSMEN Flash memory interface clock enable during Sleep mode **/
#define RCC_AHBSMENR_FLASHSMEN		(1 << 8)
/** RCC_AHBSMENR_DMASMEN DMA clock enable during Sleep mode **/
#define RCC_AHBSMENR_DMASMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apbsmenr1 APBSMENR1 APB peripheral clock enable in Sleep mode register 1
@{*/

/** RCC_APBSMENR1_LPTIM1SMEN Low Power Timer 1 clock enable during Sleep mode **/
#define RCC_APBSMENR1_LPTIM1SMEN		(1 << 31)
/** RCC_APBSMENR1_LPTIM2SMEN Low Power Timer 2 clock enable during Sleep mode **/
#define RCC_APBSMENR1_LPTIM2SMEN		(1 << 30)
/** RCC_APBSMENR1_DAC1SMEN DAC1 interface clock enable during Sleep mode **/
#define RCC_APBSMENR1_DAC1SMEN		(1 << 29)
/** RCC_APBSMENR1_PWRSMEN Power interface clock enable during Sleep mode **/
#define RCC_APBSMENR1_PWRSMEN		(1 << 28)
/** RCC_APBSMENR1_DBGSMEN Debug support clock enable during Sleep mode **/
#define RCC_APBSMENR1_DBGSMEN		(1 << 27)
/** RCC_APBSMENR1_UCPD2SMEN UCPD2 clock enable during Sleep mode **/
#define RCC_APBSMENR1_UCPD2SMEN		(1 << 26)
/** RCC_APBSMENR1_UCPD1SMEN UCPD1 clock enable during Sleep mode **/
#define RCC_APBSMENR1_UCPD1SMEN		(1 << 25)
/** RCC_APBSMENR1_CECSMEN HDMI CEC clock enable during Sleep mode **/
#define RCC_APBSMENR1_CECSMEN		(1 << 24)
/** RCC_APBSMENR1_I2C2SMEN I2C2 clock enable during Sleep mode **/
#define RCC_APBSMENR1_I2C2SMEN		(1 << 22)
/** RCC_APBSMENR1_I2C1SMEN I2C1 clock enable during Sleep mode **/
#define RCC_APBSMENR1_I2C1SMEN		(1 << 21)
/** RCC_APBSMENR1_LPUART1SMEN LPUART1 clock enable during Sleep mode **/
#define RCC_APBSMENR1_LPUART1SMEN		(1 << 20)
/** RCC_APBSMENR1_USART4SMEN USART4 clock enable during Sleep mode **/
#define RCC_APBSMENR1_USART4SMEN		(1 << 19)
/** RCC_APBSMENR1_USART3SMEN USART3 clock enable during Sleep mode **/
#define RCC_APBSMENR1_USART3SMEN		(1 << 18)
/** RCC_APBSMENR1_USART2SMEN USART2 clock enable during Sleep mode **/
#define RCC_APBSMENR1_USART2SMEN		(1 << 17)
/** RCC_APBSMENR1_SPI2SMEN SPI2 clock enable during Sleep mode **/
#define RCC_APBSMENR1_SPI2SMEN		(1 << 14)
/** RCC_APBSMENR1_WWDGSMEN WWDG clock enable during Sleep mode **/
#define RCC_APBSMENR1_WWDGSMEN		(1 << 11)
/** RCC_APBSMENR1_RTCAPBSMEN RTC APB clock enable during Sleep mode **/
#define RCC_APBSMENR1_RTCAPBSMEN		(1 << 10)
/** RCC_APBSMENR1_TIM7SMEN TIM7 timer clock enable during Sleep mode **/
#define RCC_APBSMENR1_TIM7SMEN		(1 << 5)
/** RCC_APBSMENR1_TIM6SMEN TIM6 timer clock enable during Sleep mode **/
#define RCC_APBSMENR1_TIM6SMEN		(1 << 4)
/** RCC_APBSMENR1_TIM3SMEN TIM3 timer clock enable during Sleep mode **/
#define RCC_APBSMENR1_TIM3SMEN		(1 << 1)
/** RCC_APBSMENR1_TIM2SMEN TIM2 timer clock enable during Sleep mode **/
#define RCC_APBSMENR1_TIM2SMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apbsmenr2 APBSMENR2 APB peripheral clock enable in Sleep mode register 2
@{*/

/** RCC_APBSMENR2_ADCSMEN ADC clock enable during Sleep mode **/
#define RCC_APBSMENR2_ADCSMEN		(1 << 20)
/** RCC_APBSMENR2_TIM17SMEN TIM16 timer clock enable during Sleep mode **/
#define RCC_APBSMENR2_TIM17SMEN		(1 << 18)
/** RCC_APBSMENR2_TIM16SMEN TIM16 timer clock enable during Sleep mode **/
#define RCC_APBSMENR2_TIM16SMEN		(1 << 17)
/** RCC_APBSMENR2_TIM15SMEN TIM15 timer clock enable during Sleep mode **/
#define RCC_APBSMENR2_TIM15SMEN		(1 << 16)
/** RCC_APBSMENR2_TIM14SMEN TIM14 timer clock enable during Sleep mode **/
#define RCC_APBSMENR2_TIM14SMEN		(1 << 15)
/** RCC_APBSMENR2_USART1SMEN USART1 clock enable during Sleep mode **/
#define RCC_APBSMENR2_USART1SMEN		(1 << 14)
/** RCC_APBSMENR2_SPI1SMEN SPI1 clock enable during Sleep mode **/
#define RCC_APBSMENR2_SPI1SMEN		(1 << 12)
/** RCC_APBSMENR2_TIM1SMEN TIM1 timer clock enable during Sleep mode **/
#define RCC_APBSMENR2_TIM1SMEN		(1 << 11)
/** RCC_APBSMENR2_SYSCFGSMEN SYSCFG, COMP and VREFBUF clock enable during Sleep mode **/
#define RCC_APBSMENR2_SYSCFGSMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ccipr CCIPR Peripherals independent clock configuration register
@{*/


#define RCC_CCIPR_ADCSEL_SHIFT		30
#define RCC_CCIPR_ADCSEL_MASK		0x03
/** @defgroup rcc_ccipr_adcsel ADCSEL ADCs clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_RNGDIV_SHIFT		28
#define RCC_CCIPR_RNGDIV_MASK		0x03
/** @defgroup rcc_ccipr_rngdiv RNGDIV Division factor of RNG clock divider
@{*/
/**@}*/


#define RCC_CCIPR_RNGSEL_SHIFT		26
#define RCC_CCIPR_RNGSEL_MASK		0x03
/** @defgroup rcc_ccipr_rngsel RNGSEL RNG clock source selection
@{*/
/**@}*/

/** RCC_CCIPR_TIM15SEL TIM15 clock source selection **/
#define RCC_CCIPR_TIM15SEL		(1 << 24)
/** RCC_CCIPR_TIM1SEL TIM1 clock source selection **/
#define RCC_CCIPR_TIM1SEL		(1 << 22)

#define RCC_CCIPR_LPTIM2SEL_SHIFT		20
#define RCC_CCIPR_LPTIM2SEL_MASK		0x03
/** @defgroup rcc_ccipr_lptim2sel LPTIM2SEL LPTIM2 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_LPTIM1SEL_SHIFT		18
#define RCC_CCIPR_LPTIM1SEL_MASK		0x03
/** @defgroup rcc_ccipr_lptim1sel LPTIM1SEL LPTIM1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_I2S2SEL_SHIFT		14
#define RCC_CCIPR_I2S2SEL_MASK		0x03
/** @defgroup rcc_ccipr_i2s2sel I2S2SEL I2S1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_I2C1SEL_SHIFT		12
#define RCC_CCIPR_I2C1SEL_MASK		0x03
/** @defgroup rcc_ccipr_i2c1sel I2C1SEL I2C1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_LPUART1SEL_SHIFT		10
#define RCC_CCIPR_LPUART1SEL_MASK		0x03
/** @defgroup rcc_ccipr_lpuart1sel LPUART1SEL LPUART1 clock source selection
@{*/
/**@}*/

/** RCC_CCIPR_CECSEL HDMI CEC clock source selection **/
#define RCC_CCIPR_CECSEL		(1 << 6)

#define RCC_CCIPR_USART2SEL_SHIFT		2
#define RCC_CCIPR_USART2SEL_MASK		0x03
/** @defgroup rcc_ccipr_usart2sel USART2SEL USART2 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_USART1SEL_SHIFT		0
#define RCC_CCIPR_USART1SEL_MASK		0x03
/** @defgroup rcc_ccipr_usart1sel USART1SEL USART1 clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_bdcr BDCR RTC domain control register
@{*/

/** RCC_BDCR_LSCOSEL Low-speed clock output selection **/
#define RCC_BDCR_LSCOSEL		(1 << 25)
/** RCC_BDCR_LSCOEN Low-speed clock output (LSCO) enable **/
#define RCC_BDCR_LSCOEN		(1 << 24)
/** RCC_BDCR_BDRST RTC domain software reset **/
#define RCC_BDCR_BDRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSEL_SHIFT		8
#define RCC_BDCR_RTCSEL_MASK		0x03
/** @defgroup rcc_bdcr_rtcsel RTCSEL RTC clock source selection
@{*/
/**@}*/

/** RCC_BDCR_LSECSSD CSS on LSE failure Detection **/
#define RCC_BDCR_LSECSSD		(1 << 6)
/** RCC_BDCR_LSECSSON CSS on LSE enable **/
#define RCC_BDCR_LSECSSON		(1 << 5)

#define RCC_BDCR_LSEDRV_SHIFT		3
#define RCC_BDCR_LSEDRV_MASK		0x03
/** @defgroup rcc_bdcr_lsedrv LSEDRV LSE oscillator drive capability
@{*/
/**@}*/

/** RCC_BDCR_LSEBYP LSE oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY LSE oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON LSE oscillator enable **/
#define RCC_BDCR_LSEON		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR Control/status register
@{*/

/** RCC_CSR_LPWRRSTF Low-power reset flag **/
#define RCC_CSR_LPWRRSTF		(1 << 31)
/** RCC_CSR_WWDGRSTF Window watchdog reset flag **/
#define RCC_CSR_WWDGRSTF		(1 << 30)
/** RCC_CSR_IWDGRSTF Independent window watchdog reset flag **/
#define RCC_CSR_IWDGRSTF		(1 << 29)
/** RCC_CSR_SFTRSTF Software reset flag **/
#define RCC_CSR_SFTRSTF		(1 << 28)
/** RCC_CSR_PWRRSTF BOR or POR/PDR flag **/
#define RCC_CSR_PWRRSTF		(1 << 27)
/** RCC_CSR_PINRSTF Pin reset flag **/
#define RCC_CSR_PINRSTF		(1 << 26)
/** RCC_CSR_OBLRSTF Option byte loader reset flag **/
#define RCC_CSR_OBLRSTF		(1 << 25)
/** RCC_CSR_RMVF Remove reset flags **/
#define RCC_CSR_RMVF		(1 << 23)
/** RCC_CSR_LSIRDY LSI oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION LSI oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

#pragma once 

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

/** RCC_CR Clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_CFGR Clock configuration register (RCC_CFGR) **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x04)
/** RCC_CIR Clock interrupt register (RCC_CIR) **/
#define RCC_CIR			MMIO32(RCC_BASE + 0x08)
/** RCC_APB2RSTR APB2 peripheral reset register (RCC_APB2RSTR) **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x0c)
/** RCC_APB1RSTR APB1 peripheral reset register (RCC_APB1RSTR) **/
#define RCC_APB1RSTR			MMIO32(RCC_BASE + 0x10)
/** RCC_AHBENR AHB Peripheral Clock enable register (RCC_AHBENR) **/
#define RCC_AHBENR			MMIO32(RCC_BASE + 0x14)
/** RCC_APB2ENR APB2 peripheral clock enable register (RCC_APB2ENR) **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0x18)
/** RCC_APB1ENR APB1 peripheral clock enable register (RCC_APB1ENR) **/
#define RCC_APB1ENR			MMIO32(RCC_BASE + 0x1c)
/** RCC_BDCR Backup domain control register (RCC_BDCR) **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x20)
/** RCC_CSR Control/status register (RCC_CSR) **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x24)
/** RCC_AHBRSTR AHB peripheral clock reset register (RCC_AHBRSTR) **/
#define RCC_AHBRSTR			MMIO32(RCC_BASE + 0x28)
/** RCC_CFGR2 Clock configuration register2 (RCC_CFGR2) **/
#define RCC_CFGR2			MMIO32(RCC_BASE + 0x2c)

/**@}*/


/** @defgroup rcc_cr CR Clock control register
@{*/

/** RCC_CR_PLL3RDY PLL3 clock ready flag **/
#define RCC_CR_PLL3RDY		(1 << 29)
/** RCC_CR_PLL3ON PLL3 enable **/
#define RCC_CR_PLL3ON		(1 << 28)
/** RCC_CR_PLL2RDY PLL2 clock ready flag **/
#define RCC_CR_PLL2RDY		(1 << 27)
/** RCC_CR_PLL2ON PLL2 enable **/
#define RCC_CR_PLL2ON		(1 << 26)
/** RCC_CR_PLLRDY PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON PLL enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_CSSON Clock Security System enable **/
#define RCC_CR_CSSON		(1 << 19)
/** RCC_CR_HSEBYP External High Speed clock Bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY External High Speed clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON External High Speed clock enable **/
#define RCC_CR_HSEON		(1 << 16)

#define RCC_CR_HSICAL_SHIFT		8
#define RCC_CR_HSICAL_MASK		0xff
/** @defgroup rcc_cr_hsical HSICAL Internal High Speed clock Calibration
@{*/
/**@}*/


#define RCC_CR_HSITRIM_SHIFT		3
#define RCC_CR_HSITRIM_MASK		0x1f
/** @defgroup rcc_cr_hsitrim HSITRIM Internal High Speed clock trimming
@{*/
/**@}*/

/** RCC_CR_HSIRDY Internal High Speed clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 1)
/** RCC_CR_HSION Internal High Speed clock enable **/
#define RCC_CR_HSION		(1 << 0)

/**@}*/

/** @defgroup rcc_cfgr CFGR Clock configuration register (RCC_CFGR)
@{*/


#define RCC_CFGR_MCO_SHIFT		24
#define RCC_CFGR_MCO_MASK		0x0f
/** @defgroup rcc_cfgr_mco MCO Microcontroller clock output
@{*/
/**@}*/

/** RCC_CFGR_OTGFSPRE USB OTG FS prescaler **/
#define RCC_CFGR_OTGFSPRE		(1 << 22)

#define RCC_CFGR_PLLMUL_SHIFT		18
#define RCC_CFGR_PLLMUL_MASK		0x0f
/** @defgroup rcc_cfgr_pllmul PLLMUL PLL Multiplication Factor
@{*/
/**@}*/

/** RCC_CFGR_PLLXTPRE HSE divider for PLL entry **/
#define RCC_CFGR_PLLXTPRE		(1 << 17)
/** RCC_CFGR_PLLSRC PLL entry clock source **/
#define RCC_CFGR_PLLSRC		(1 << 16)

#define RCC_CFGR_ADCPRE_SHIFT		14
#define RCC_CFGR_ADCPRE_MASK		0x03
/** @defgroup rcc_cfgr_adcpre ADCPRE ADC prescaler
@{*/
/**@}*/


#define RCC_CFGR_PPRE2_SHIFT		11
#define RCC_CFGR_PPRE2_MASK		0x07
/** @defgroup rcc_cfgr_ppre2 PPRE2 APB High speed prescaler (APB2)
@{*/
/**@}*/


#define RCC_CFGR_PPRE1_SHIFT		8
#define RCC_CFGR_PPRE1_MASK		0x07
/** @defgroup rcc_cfgr_ppre1 PPRE1 APB Low speed prescaler (APB1)
@{*/
/**@}*/


#define RCC_CFGR_HPRE_SHIFT		4
#define RCC_CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_cfgr_hpre HPRE AHB prescaler
@{*/
/**@}*/


#define RCC_CFGR_SWS_SHIFT		2
#define RCC_CFGR_SWS_MASK		0x03
/** @defgroup rcc_cfgr_sws SWS System Clock Switch Status
@{*/
/**@}*/


#define RCC_CFGR_SW_SHIFT		0
#define RCC_CFGR_SW_MASK		0x03
/** @defgroup rcc_cfgr_sw SW System clock Switch
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cir CIR Clock interrupt register (RCC_CIR)
@{*/

/** RCC_CIR_CSSC Clock security system interrupt clear **/
#define RCC_CIR_CSSC		(1 << 23)
/** RCC_CIR_PLL3RDYC PLL3 Ready Interrupt Clear **/
#define RCC_CIR_PLL3RDYC		(1 << 22)
/** RCC_CIR_PLL2RDYC PLL2 Ready Interrupt Clear **/
#define RCC_CIR_PLL2RDYC		(1 << 21)
/** RCC_CIR_PLLRDYC PLL Ready Interrupt Clear **/
#define RCC_CIR_PLLRDYC		(1 << 20)
/** RCC_CIR_HSERDYC HSE Ready Interrupt Clear **/
#define RCC_CIR_HSERDYC		(1 << 19)
/** RCC_CIR_HSIRDYC HSI Ready Interrupt Clear **/
#define RCC_CIR_HSIRDYC		(1 << 18)
/** RCC_CIR_LSERDYC LSE Ready Interrupt Clear **/
#define RCC_CIR_LSERDYC		(1 << 17)
/** RCC_CIR_LSIRDYC LSI Ready Interrupt Clear **/
#define RCC_CIR_LSIRDYC		(1 << 16)
/** RCC_CIR_PLL3RDYIE PLL3 Ready Interrupt Enable **/
#define RCC_CIR_PLL3RDYIE		(1 << 14)
/** RCC_CIR_PLL2RDYIE PLL2 Ready Interrupt Enable **/
#define RCC_CIR_PLL2RDYIE		(1 << 13)
/** RCC_CIR_PLLRDYIE PLL Ready Interrupt Enable **/
#define RCC_CIR_PLLRDYIE		(1 << 12)
/** RCC_CIR_HSERDYIE HSE Ready Interrupt Enable **/
#define RCC_CIR_HSERDYIE		(1 << 11)
/** RCC_CIR_HSIRDYIE HSI Ready Interrupt Enable **/
#define RCC_CIR_HSIRDYIE		(1 << 10)
/** RCC_CIR_LSERDYIE LSE Ready Interrupt Enable **/
#define RCC_CIR_LSERDYIE		(1 << 9)
/** RCC_CIR_LSIRDYIE LSI Ready Interrupt Enable **/
#define RCC_CIR_LSIRDYIE		(1 << 8)
/** RCC_CIR_CSSF Clock Security System Interrupt flag **/
#define RCC_CIR_CSSF		(1 << 7)
/** RCC_CIR_PLL3RDYF PLL3 Ready Interrupt flag **/
#define RCC_CIR_PLL3RDYF		(1 << 6)
/** RCC_CIR_PLL2RDYF PLL2 Ready Interrupt flag **/
#define RCC_CIR_PLL2RDYF		(1 << 5)
/** RCC_CIR_PLLRDYF PLL Ready Interrupt flag **/
#define RCC_CIR_PLLRDYF		(1 << 4)
/** RCC_CIR_HSERDYF HSE Ready Interrupt flag **/
#define RCC_CIR_HSERDYF		(1 << 3)
/** RCC_CIR_HSIRDYF HSI Ready Interrupt flag **/
#define RCC_CIR_HSIRDYF		(1 << 2)
/** RCC_CIR_LSERDYF LSE Ready Interrupt flag **/
#define RCC_CIR_LSERDYF		(1 << 1)
/** RCC_CIR_LSIRDYF LSI Ready Interrupt flag **/
#define RCC_CIR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register (RCC_APB2RSTR)
@{*/

/** RCC_APB2RSTR_USART1RST USART1 reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 14)
/** RCC_APB2RSTR_SPI1RST SPI 1 reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_TIM1RST TIM1 timer reset **/
#define RCC_APB2RSTR_TIM1RST		(1 << 11)
/** RCC_APB2RSTR_ADC2RST ADC 2 interface reset **/
#define RCC_APB2RSTR_ADC2RST		(1 << 10)
/** RCC_APB2RSTR_ADC1RST ADC 1 interface reset **/
#define RCC_APB2RSTR_ADC1RST		(1 << 9)
/** RCC_APB2RSTR_IOPERST IO port E reset **/
#define RCC_APB2RSTR_IOPERST		(1 << 6)
/** RCC_APB2RSTR_IOPDRST IO port D reset **/
#define RCC_APB2RSTR_IOPDRST		(1 << 5)
/** RCC_APB2RSTR_IOPCRST IO port C reset **/
#define RCC_APB2RSTR_IOPCRST		(1 << 4)
/** RCC_APB2RSTR_IOPBRST IO port B reset **/
#define RCC_APB2RSTR_IOPBRST		(1 << 3)
/** RCC_APB2RSTR_IOPARST IO port A reset **/
#define RCC_APB2RSTR_IOPARST		(1 << 2)
/** RCC_APB2RSTR_AFIORST Alternate function I/O reset **/
#define RCC_APB2RSTR_AFIORST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr APB1RSTR APB1 peripheral reset register (RCC_APB1RSTR)
@{*/

/** RCC_APB1RSTR_DACRST DAC interface reset **/
#define RCC_APB1RSTR_DACRST		(1 << 29)
/** RCC_APB1RSTR_PWRRST Power interface reset **/
#define RCC_APB1RSTR_PWRRST		(1 << 28)
/** RCC_APB1RSTR_BKPRST Backup interface reset **/
#define RCC_APB1RSTR_BKPRST		(1 << 27)
/** RCC_APB1RSTR_CAN2RST CAN2 reset **/
#define RCC_APB1RSTR_CAN2RST		(1 << 26)
/** RCC_APB1RSTR_CAN1RST CAN1 reset **/
#define RCC_APB1RSTR_CAN1RST		(1 << 25)
/** RCC_APB1RSTR_I2C2RST I2C2 reset **/
#define RCC_APB1RSTR_I2C2RST		(1 << 22)
/** RCC_APB1RSTR_I2C1RST I2C1 reset **/
#define RCC_APB1RSTR_I2C1RST		(1 << 21)
/** RCC_APB1RSTR_USART5RST USART 5 reset **/
#define RCC_APB1RSTR_USART5RST		(1 << 20)
/** RCC_APB1RSTR_USART4RST USART 4 reset **/
#define RCC_APB1RSTR_USART4RST		(1 << 19)
/** RCC_APB1RSTR_USART3RST USART 3 reset **/
#define RCC_APB1RSTR_USART3RST		(1 << 18)
/** RCC_APB1RSTR_USART2RST USART 2 reset **/
#define RCC_APB1RSTR_USART2RST		(1 << 17)
/** RCC_APB1RSTR_SPI3RST SPI3 reset **/
#define RCC_APB1RSTR_SPI3RST		(1 << 15)
/** RCC_APB1RSTR_SPI2RST SPI2 reset **/
#define RCC_APB1RSTR_SPI2RST		(1 << 14)
/** RCC_APB1RSTR_WWDGRST Window watchdog reset **/
#define RCC_APB1RSTR_WWDGRST		(1 << 11)
/** RCC_APB1RSTR_TIM7RST Timer 7 reset **/
#define RCC_APB1RSTR_TIM7RST		(1 << 5)
/** RCC_APB1RSTR_TIM6RST Timer 6 reset **/
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

/** @defgroup rcc_ahbenr AHBENR AHB Peripheral Clock enable register (RCC_AHBENR)
@{*/

/** RCC_AHBENR_OTGFSEN USB OTG FS clock enable **/
#define RCC_AHBENR_OTGFSEN		(1 << 12)
/** RCC_AHBENR_CRCEN CRC clock enable **/
#define RCC_AHBENR_CRCEN		(1 << 6)
/** RCC_AHBENR_FLITFEN FLITF clock enable **/
#define RCC_AHBENR_FLITFEN		(1 << 4)
/** RCC_AHBENR_SRAMEN SRAM interface clock enable **/
#define RCC_AHBENR_SRAMEN		(1 << 2)
/** RCC_AHBENR_DMA2EN DMA2 clock enable **/
#define RCC_AHBENR_DMA2EN		(1 << 1)
/** RCC_AHBENR_DMA1EN DMA1 clock enable **/
#define RCC_AHBENR_DMA1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2 peripheral clock enable register (RCC_APB2ENR)
@{*/

/** RCC_APB2ENR_USART1EN USART1 clock enable **/
#define RCC_APB2ENR_USART1EN		(1 << 14)
/** RCC_APB2ENR_SPI1EN SPI 1 clock enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_TIM1EN TIM1 Timer clock enable **/
#define RCC_APB2ENR_TIM1EN		(1 << 11)
/** RCC_APB2ENR_ADC2EN ADC 2 interface clock enable **/
#define RCC_APB2ENR_ADC2EN		(1 << 10)
/** RCC_APB2ENR_ADC1EN ADC 1 interface clock enable **/
#define RCC_APB2ENR_ADC1EN		(1 << 9)
/** RCC_APB2ENR_IOPEEN I/O port E clock enable **/
#define RCC_APB2ENR_IOPEEN		(1 << 6)
/** RCC_APB2ENR_IOPDEN I/O port D clock enable **/
#define RCC_APB2ENR_IOPDEN		(1 << 5)
/** RCC_APB2ENR_IOPCEN I/O port C clock enable **/
#define RCC_APB2ENR_IOPCEN		(1 << 4)
/** RCC_APB2ENR_IOPBEN I/O port B clock enable **/
#define RCC_APB2ENR_IOPBEN		(1 << 3)
/** RCC_APB2ENR_IOPAEN I/O port A clock enable **/
#define RCC_APB2ENR_IOPAEN		(1 << 2)
/** RCC_APB2ENR_AFIOEN Alternate function I/O clock enable **/
#define RCC_APB2ENR_AFIOEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr APB1ENR APB1 peripheral clock enable register (RCC_APB1ENR)
@{*/

/** RCC_APB1ENR_DACEN DAC interface clock enable **/
#define RCC_APB1ENR_DACEN		(1 << 29)
/** RCC_APB1ENR_PWREN Power interface clock enable **/
#define RCC_APB1ENR_PWREN		(1 << 28)
/** RCC_APB1ENR_BKPEN Backup interface clock enable **/
#define RCC_APB1ENR_BKPEN		(1 << 27)
/** RCC_APB1ENR_CAN2EN CAN2 clock enable **/
#define RCC_APB1ENR_CAN2EN		(1 << 26)
/** RCC_APB1ENR_CAN1EN CAN1 clock enable **/
#define RCC_APB1ENR_CAN1EN		(1 << 25)
/** RCC_APB1ENR_I2C2EN I2C 2 clock enable **/
#define RCC_APB1ENR_I2C2EN		(1 << 22)
/** RCC_APB1ENR_I2C1EN I2C 1 clock enable **/
#define RCC_APB1ENR_I2C1EN		(1 << 21)
/** RCC_APB1ENR_UART5EN UART 5 clock enable **/
#define RCC_APB1ENR_UART5EN		(1 << 20)
/** RCC_APB1ENR_UART4EN UART 4 clock enable **/
#define RCC_APB1ENR_UART4EN		(1 << 19)
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

/** @defgroup rcc_bdcr BDCR Backup domain control register (RCC_BDCR)
@{*/

/** RCC_BDCR_BDRST Backup domain software reset **/
#define RCC_BDCR_BDRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSEL_SHIFT		8
#define RCC_BDCR_RTCSEL_MASK		0x03
/** @defgroup rcc_bdcr_rtcsel RTCSEL RTC clock source selection
@{*/
/**@}*/

/** RCC_BDCR_LSEBYP External Low Speed oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY External Low Speed oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON External Low Speed oscillator enable **/
#define RCC_BDCR_LSEON		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR Control/status register (RCC_CSR)
@{*/

/** RCC_CSR_LPWRRSTF Low-power reset flag **/
#define RCC_CSR_LPWRRSTF		(1 << 31)
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
/** RCC_CSR_LSIRDY Internal low speed oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION Internal low speed oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbrstr AHBRSTR AHB peripheral clock reset register (RCC_AHBRSTR)
@{*/

/** RCC_AHBRSTR_OTGFSRST USB OTG FS reset **/
#define RCC_AHBRSTR_OTGFSRST		(1 << 12)

/**@}*/

/** @defgroup rcc_cfgr2 CFGR2 Clock configuration register2 (RCC_CFGR2)
@{*/

/** RCC_CFGR2_I2S3SRC I2S3 clock source **/
#define RCC_CFGR2_I2S3SRC		(1 << 18)
/** RCC_CFGR2_I2S2SRC I2S2 clock source **/
#define RCC_CFGR2_I2S2SRC		(1 << 17)
/** RCC_CFGR2_PREDIV1SRC PREDIV1 entry clock source **/
#define RCC_CFGR2_PREDIV1SRC		(1 << 16)

#define RCC_CFGR2_PLL3MUL_SHIFT		12
#define RCC_CFGR2_PLL3MUL_MASK		0x0f
/** @defgroup rcc_cfgr2_pll3mul PLL3MUL PLL3 Multiplication Factor
@{*/
/**@}*/


#define RCC_CFGR2_PLL2MUL_SHIFT		8
#define RCC_CFGR2_PLL2MUL_MASK		0x0f
/** @defgroup rcc_cfgr2_pll2mul PLL2MUL PLL2 Multiplication Factor
@{*/
/**@}*/


#define RCC_CFGR2_PREDIV2_SHIFT		4
#define RCC_CFGR2_PREDIV2_MASK		0x0f
/** @defgroup rcc_cfgr2_prediv2 PREDIV2 PREDIV2 division factor
@{*/
/**@}*/


#define RCC_CFGR2_PREDIV1_SHIFT		0
#define RCC_CFGR2_PREDIV1_MASK		0x0f
/** @defgroup rcc_cfgr2_prediv1 PREDIV1 PREDIV1 division factor
@{*/
/**@}*/


/**@}*/

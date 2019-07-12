#pragma once 

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

/** RCC_CR Clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_ICSCR Internal clock sources calibration register **/
#define RCC_ICSCR			MMIO32(RCC_BASE + 0x04)
/** RCC_CFGR Clock configuration register **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x0c)
/** RCC_CIER Clock interrupt enable register **/
#define RCC_CIER			MMIO32(RCC_BASE + 0x10)
/** RCC_CIFR Clock interrupt flag register **/
#define RCC_CIFR			MMIO32(RCC_BASE + 0x14)
/** RCC_CICR Clock interrupt clear register **/
#define RCC_CICR			MMIO32(RCC_BASE + 0x18)
/** RCC_IOPRSTR GPIO reset register **/
#define RCC_IOPRSTR			MMIO32(RCC_BASE + 0x1c)
/** RCC_AHBRSTR AHB peripheral reset register **/
#define RCC_AHBRSTR			MMIO32(RCC_BASE + 0x20)
/** RCC_APB2RSTR APB2 peripheral reset register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x24)
/** RCC_APB1RSTR APB1 peripheral reset register **/
#define RCC_APB1RSTR			MMIO32(RCC_BASE + 0x28)
/** RCC_IOPENR GPIO clock enable register **/
#define RCC_IOPENR			MMIO32(RCC_BASE + 0x2c)
/** RCC_AHBENR AHB peripheral clock enable register **/
#define RCC_AHBENR			MMIO32(RCC_BASE + 0x30)
/** RCC_APB2ENR APB2 peripheral clock enable register **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0x34)
/** RCC_APB1ENR APB1 peripheral clock enable register **/
#define RCC_APB1ENR			MMIO32(RCC_BASE + 0x38)
/** RCC_IOPSMEN GPIO clock enable in sleep mode register **/
#define RCC_IOPSMEN			MMIO32(RCC_BASE + 0x3c)
/** RCC_AHBSMENR AHB peripheral clock enable in sleep mode register **/
#define RCC_AHBSMENR			MMIO32(RCC_BASE + 0x40)
/** RCC_APB2SMENR APB2 peripheral clock enable in sleep mode register **/
#define RCC_APB2SMENR			MMIO32(RCC_BASE + 0x44)
/** RCC_APB1SMENR APB1 peripheral clock enable in sleep mode register **/
#define RCC_APB1SMENR			MMIO32(RCC_BASE + 0x48)
/** RCC_CCIPR Clock configuration register **/
#define RCC_CCIPR			MMIO32(RCC_BASE + 0x4c)
/** RCC_CSR Control and status register **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x50)

/**@}*/


/** @defgroup rcc_cr CR Clock control register
@{*/

/** RCC_CR_PLLRDY PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON PLL enable bit **/
#define RCC_CR_PLLON		(1 << 24)

#define RCC_CR_RTCPRE_SHIFT		20
#define RCC_CR_RTCPRE_MASK		0x03
/** @defgroup rcc_cr_rtcpre RTCPRE TC/LCD prescaler
@{*/
/**@}*/

/** RCC_CR_CSSLSEON Clock security system on HSE enable bit **/
#define RCC_CR_CSSLSEON		(1 << 19)
/** RCC_CR_HSEBYP HSE clock bypass bit **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable bit **/
#define RCC_CR_HSEON		(1 << 16)
/** RCC_CR_MSIRDY MSI clock ready flag **/
#define RCC_CR_MSIRDY		(1 << 9)
/** RCC_CR_MSION MSI clock enable bit **/
#define RCC_CR_MSION		(1 << 8)
/** RCC_CR_HSI16OUTEN 16 MHz high-speed internal clock output enable **/
#define RCC_CR_HSI16OUTEN		(1 << 5)
/** RCC_CR_HSI16DIVF HSI16DIVF **/
#define RCC_CR_HSI16DIVF		(1 << 4)
/** RCC_CR_HSI16DIVEN HSI16DIVEN **/
#define RCC_CR_HSI16DIVEN		(1 << 3)
/** RCC_CR_HSI16RDYF Internal high-speed clock ready flag **/
#define RCC_CR_HSI16RDYF		(1 << 2)
/** RCC_CR_HSI16KERON High-speed internal clock enable bit for some IP kernels **/
#define RCC_CR_HSI16KERON		(1 << 1)
/** RCC_CR_HSI16ON 16 MHz high-speed internal clock enable **/
#define RCC_CR_HSI16ON		(1 << 0)

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


#define RCC_ICSCR_HSI16TRIM_SHIFT		8
#define RCC_ICSCR_HSI16TRIM_MASK		0x1f
/** @defgroup rcc_icscr_hsi16trim HSI16TRIM High speed internal clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_HSI16CAL_SHIFT		0
#define RCC_ICSCR_HSI16CAL_MASK		0xff
/** @defgroup rcc_icscr_hsi16cal HSI16CAL nternal high speed clock calibration
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
/** RCC_CFGR_STOPWUCK Wake-up from stop clock selection **/
#define RCC_CFGR_STOPWUCK		(1 << 15)

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

/** @defgroup rcc_cier CIER Clock interrupt enable register
@{*/

/** RCC_CIER_CSSLSE LSE CSS interrupt flag **/
#define RCC_CIER_CSSLSE		(1 << 7)
/** RCC_CIER_MSIRDYIE MSI ready interrupt flag **/
#define RCC_CIER_MSIRDYIE		(1 << 5)
/** RCC_CIER_PLLRDYIE PLL ready interrupt flag **/
#define RCC_CIER_PLLRDYIE		(1 << 4)
/** RCC_CIER_HSERDYIE HSE ready interrupt flag **/
#define RCC_CIER_HSERDYIE		(1 << 3)
/** RCC_CIER_HSI16RDYIE HSI16 ready interrupt flag **/
#define RCC_CIER_HSI16RDYIE		(1 << 2)
/** RCC_CIER_LSERDYIE LSE ready interrupt flag **/
#define RCC_CIER_LSERDYIE		(1 << 1)
/** RCC_CIER_LSIRDYIE LSI ready interrupt flag **/
#define RCC_CIER_LSIRDYIE		(1 << 0)

/**@}*/

/** @defgroup rcc_cifr CIFR Clock interrupt flag register
@{*/

/** RCC_CIFR_CSSHSEF Clock Security System Interrupt flag **/
#define RCC_CIFR_CSSHSEF		(1 << 8)
/** RCC_CIFR_CSSLSEF LSE Clock Security System Interrupt flag **/
#define RCC_CIFR_CSSLSEF		(1 << 7)
/** RCC_CIFR_MSIRDYF MSI ready interrupt flag **/
#define RCC_CIFR_MSIRDYF		(1 << 5)
/** RCC_CIFR_PLLRDYF PLL ready interrupt flag **/
#define RCC_CIFR_PLLRDYF		(1 << 4)
/** RCC_CIFR_HSERDYF HSE ready interrupt flag **/
#define RCC_CIFR_HSERDYF		(1 << 3)
/** RCC_CIFR_HSI16RDYF HSI16 ready interrupt flag **/
#define RCC_CIFR_HSI16RDYF		(1 << 2)
/** RCC_CIFR_LSERDYF LSE ready interrupt flag **/
#define RCC_CIFR_LSERDYF		(1 << 1)
/** RCC_CIFR_LSIRDYF LSI ready interrupt flag **/
#define RCC_CIFR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_cicr CICR Clock interrupt clear register
@{*/

/** RCC_CICR_CSSHSEC Clock Security System Interrupt clear **/
#define RCC_CICR_CSSHSEC		(1 << 8)
/** RCC_CICR_CSSLSEC LSE Clock Security System Interrupt clear **/
#define RCC_CICR_CSSLSEC		(1 << 7)
/** RCC_CICR_MSIRDYC MSI ready Interrupt clear **/
#define RCC_CICR_MSIRDYC		(1 << 5)
/** RCC_CICR_PLLRDYC PLL ready Interrupt clear **/
#define RCC_CICR_PLLRDYC		(1 << 4)
/** RCC_CICR_HSERDYC HSE ready Interrupt clear **/
#define RCC_CICR_HSERDYC		(1 << 3)
/** RCC_CICR_HSI16RDYC HSI16 ready Interrupt clear **/
#define RCC_CICR_HSI16RDYC		(1 << 2)
/** RCC_CICR_LSERDYC LSE ready Interrupt clear **/
#define RCC_CICR_LSERDYC		(1 << 1)
/** RCC_CICR_LSIRDYC LSI ready Interrupt clear **/
#define RCC_CICR_LSIRDYC		(1 << 0)

/**@}*/

/** @defgroup rcc_ioprstr IOPRSTR GPIO reset register
@{*/

/** RCC_IOPRSTR_IOPHRST I/O port H reset **/
#define RCC_IOPRSTR_IOPHRST		(1 << 7)
/** RCC_IOPRSTR_IOPERST I/O port E reset **/
#define RCC_IOPRSTR_IOPERST		(1 << 4)
/** RCC_IOPRSTR_IOPDRST I/O port D reset **/
#define RCC_IOPRSTR_IOPDRST		(1 << 3)
/** RCC_IOPRSTR_IOPCRST I/O port A reset **/
#define RCC_IOPRSTR_IOPCRST		(1 << 2)
/** RCC_IOPRSTR_IOPBRST I/O port B reset **/
#define RCC_IOPRSTR_IOPBRST		(1 << 1)
/** RCC_IOPRSTR_IOPARST I/O port A reset **/
#define RCC_IOPRSTR_IOPARST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbrstr AHBRSTR AHB peripheral reset register
@{*/

/** RCC_AHBRSTR_CRYPRST Crypto module reset **/
#define RCC_AHBRSTR_CRYPRST		(1 << 24)
/** RCC_AHBRSTR_CRCRST Test integration module reset **/
#define RCC_AHBRSTR_CRCRST		(1 << 12)
/** RCC_AHBRSTR_MIFRST Memory interface reset **/
#define RCC_AHBRSTR_MIFRST		(1 << 8)
/** RCC_AHBRSTR_DMARST DMA reset **/
#define RCC_AHBRSTR_DMARST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register
@{*/

/** RCC_APB2RSTR_DBGRST DBG reset **/
#define RCC_APB2RSTR_DBGRST		(1 << 22)
/** RCC_APB2RSTR_USART1RST USART1 reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 14)
/** RCC_APB2RSTR_SPI1RST SPI 1 reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_ADCRST ADC interface reset **/
#define RCC_APB2RSTR_ADCRST		(1 << 9)
/** RCC_APB2RSTR_TIM22RST TIM22 timer reset **/
#define RCC_APB2RSTR_TIM22RST		(1 << 5)
/** RCC_APB2RSTR_TIM21RST TIM21 timer reset **/
#define RCC_APB2RSTR_TIM21RST		(1 << 2)
/** RCC_APB2RSTR_SYSCFGRST System configuration controller reset **/
#define RCC_APB2RSTR_SYSCFGRST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr APB1RSTR APB1 peripheral reset register
@{*/

/** RCC_APB1RSTR_LPTIM1RST Low power timer reset **/
#define RCC_APB1RSTR_LPTIM1RST		(1 << 31)
/** RCC_APB1RSTR_I2C3 I2C3 reset **/
#define RCC_APB1RSTR_I2C3		(1 << 30)
/** RCC_APB1RSTR_PWRRST Power interface reset **/
#define RCC_APB1RSTR_PWRRST		(1 << 28)
/** RCC_APB1RSTR_CRCRST CRC reset **/
#define RCC_APB1RSTR_CRCRST		(1 << 27)
/** RCC_APB1RSTR_I2C2RST I2C2 reset **/
#define RCC_APB1RSTR_I2C2RST		(1 << 22)
/** RCC_APB1RSTR_I2C1RST I2C1 reset **/
#define RCC_APB1RSTR_I2C1RST		(1 << 21)
/** RCC_APB1RSTR_USART5RST USART5 reset **/
#define RCC_APB1RSTR_USART5RST		(1 << 20)
/** RCC_APB1RSTR_USART4RST USART4 reset **/
#define RCC_APB1RSTR_USART4RST		(1 << 19)
/** RCC_APB1RSTR_LPUART1RST LPUART1 reset **/
#define RCC_APB1RSTR_LPUART1RST		(1 << 18)
/** RCC_APB1RSTR_USART2RST USART2 reset **/
#define RCC_APB1RSTR_USART2RST		(1 << 17)
/** RCC_APB1RSTR_SPI2RST SPI2 reset **/
#define RCC_APB1RSTR_SPI2RST		(1 << 14)
/** RCC_APB1RSTR_WWDGRST Window watchdog reset **/
#define RCC_APB1RSTR_WWDGRST		(1 << 11)
/** RCC_APB1RSTR_TIM7RST Timer 7 reset **/
#define RCC_APB1RSTR_TIM7RST		(1 << 5)
/** RCC_APB1RSTR_TIM6RST Timer 6 reset **/
#define RCC_APB1RSTR_TIM6RST		(1 << 4)
/** RCC_APB1RSTR_TIM3RST Timer 3 reset **/
#define RCC_APB1RSTR_TIM3RST		(1 << 1)
/** RCC_APB1RSTR_TIM2RST Timer 2 reset **/
#define RCC_APB1RSTR_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_iopenr IOPENR GPIO clock enable register
@{*/

/** RCC_IOPENR_IOPHEN I/O port H clock enable bit **/
#define RCC_IOPENR_IOPHEN		(1 << 7)
/** RCC_IOPENR_IOPEEN IO port E clock enable bit **/
#define RCC_IOPENR_IOPEEN		(1 << 4)
/** RCC_IOPENR_IOPDEN I/O port D clock enable bit **/
#define RCC_IOPENR_IOPDEN		(1 << 3)
/** RCC_IOPENR_IOPCEN IO port A clock enable bit **/
#define RCC_IOPENR_IOPCEN		(1 << 2)
/** RCC_IOPENR_IOPBEN IO port B clock enable bit **/
#define RCC_IOPENR_IOPBEN		(1 << 1)
/** RCC_IOPENR_IOPAEN IO port A clock enable bit **/
#define RCC_IOPENR_IOPAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbenr AHBENR AHB peripheral clock enable register
@{*/

/** RCC_AHBENR_CRYPEN Crypto clock enable bit **/
#define RCC_AHBENR_CRYPEN		(1 << 24)
/** RCC_AHBENR_CRCEN CRC clock enable bit **/
#define RCC_AHBENR_CRCEN		(1 << 12)
/** RCC_AHBENR_MIFEN NVM interface clock enable bit **/
#define RCC_AHBENR_MIFEN		(1 << 8)
/** RCC_AHBENR_DMAEN DMA clock enable bit **/
#define RCC_AHBENR_DMAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2 peripheral clock enable register
@{*/

/** RCC_APB2ENR_DBGEN DBG clock enable bit **/
#define RCC_APB2ENR_DBGEN		(1 << 22)
/** RCC_APB2ENR_USART1EN USART1 clock enable bit **/
#define RCC_APB2ENR_USART1EN		(1 << 14)
/** RCC_APB2ENR_SPI1EN SPI1 clock enable bit **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_ADCEN ADC clock enable bit **/
#define RCC_APB2ENR_ADCEN		(1 << 9)
/** RCC_APB2ENR_FWEN Firewall clock enable bit **/
#define RCC_APB2ENR_FWEN		(1 << 7)
/** RCC_APB2ENR_TIM22EN TIM22 timer clock enable bit **/
#define RCC_APB2ENR_TIM22EN		(1 << 5)
/** RCC_APB2ENR_TIM21EN TIM21 timer clock enable bit **/
#define RCC_APB2ENR_TIM21EN		(1 << 2)
/** RCC_APB2ENR_SYSCFGEN System configuration controller clock enable bit **/
#define RCC_APB2ENR_SYSCFGEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr APB1ENR APB1 peripheral clock enable register
@{*/

/** RCC_APB1ENR_LPTIM1EN Low power timer clock enable bit **/
#define RCC_APB1ENR_LPTIM1EN		(1 << 31)
/** RCC_APB1ENR_I2C3EN I2C3 clock enable bit **/
#define RCC_APB1ENR_I2C3EN		(1 << 30)
/** RCC_APB1ENR_PWREN Power interface clock enable bit **/
#define RCC_APB1ENR_PWREN		(1 << 28)
/** RCC_APB1ENR_I2C2EN I2C2 clock enable bit **/
#define RCC_APB1ENR_I2C2EN		(1 << 22)
/** RCC_APB1ENR_I2C1EN I2C1 clock enable bit **/
#define RCC_APB1ENR_I2C1EN		(1 << 21)
/** RCC_APB1ENR_USART5EN USART5 clock enable bit **/
#define RCC_APB1ENR_USART5EN		(1 << 20)
/** RCC_APB1ENR_USART4EN USART4 clock enable bit **/
#define RCC_APB1ENR_USART4EN		(1 << 19)
/** RCC_APB1ENR_LPUART1EN LPUART1 clock enable bit **/
#define RCC_APB1ENR_LPUART1EN		(1 << 18)
/** RCC_APB1ENR_USART2EN UART2 clock enable bit **/
#define RCC_APB1ENR_USART2EN		(1 << 17)
/** RCC_APB1ENR_SPI2EN SPI2 clock enable bit **/
#define RCC_APB1ENR_SPI2EN		(1 << 14)
/** RCC_APB1ENR_WWDGEN Window watchdog clock enable bit **/
#define RCC_APB1ENR_WWDGEN		(1 << 11)
/** RCC_APB1ENR_TIM7EN Timer 7 clock enable bit **/
#define RCC_APB1ENR_TIM7EN		(1 << 5)
/** RCC_APB1ENR_TIM6EN Timer 6 clock enable bit **/
#define RCC_APB1ENR_TIM6EN		(1 << 4)
/** RCC_APB1ENR_TIM3EN Timer 3 clock enbale bit **/
#define RCC_APB1ENR_TIM3EN		(1 << 2)
/** RCC_APB1ENR_TIM2EN Timer2 clock enable bit **/
#define RCC_APB1ENR_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_iopsmen IOPSMEN GPIO clock enable in sleep mode register
@{*/

/** RCC_IOPSMEN_IOPHSMEN Port H clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPHSMEN		(1 << 7)
/** RCC_IOPSMEN_IOPESMEN Port E clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPESMEN		(1 << 4)
/** RCC_IOPSMEN_IOPDSMEN Port D clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPDSMEN		(1 << 3)
/** RCC_IOPSMEN_IOPCSMEN Port C clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPCSMEN		(1 << 2)
/** RCC_IOPSMEN_IOPBSMEN Port B clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPBSMEN		(1 << 1)
/** RCC_IOPSMEN_IOPASMEN Port A clock enable during Sleep mode bit **/
#define RCC_IOPSMEN_IOPASMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahbsmenr AHBSMENR AHB peripheral clock enable in sleep mode register
@{*/

/** RCC_AHBSMENR_CRYPTSMEN Crypto clock enable during sleep mode bit **/
#define RCC_AHBSMENR_CRYPTSMEN		(1 << 24)
/** RCC_AHBSMENR_CRCSMEN CRC clock enable during sleep mode bit **/
#define RCC_AHBSMENR_CRCSMEN		(1 << 12)
/** RCC_AHBSMENR_SRAMSMEN SRAM interface clock enable during sleep mode bit **/
#define RCC_AHBSMENR_SRAMSMEN		(1 << 9)
/** RCC_AHBSMENR_MIFSMEN NVM interface clock enable during sleep mode bit **/
#define RCC_AHBSMENR_MIFSMEN		(1 << 8)
/** RCC_AHBSMENR_DMASMEN DMA clock enable during sleep mode bit **/
#define RCC_AHBSMENR_DMASMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2smenr APB2SMENR APB2 peripheral clock enable in sleep mode register
@{*/

/** RCC_APB2SMENR_DBGSMEN DBG clock enable during sleep mode bit **/
#define RCC_APB2SMENR_DBGSMEN		(1 << 22)
/** RCC_APB2SMENR_USART1SMEN USART1 clock enable during sleep mode bit **/
#define RCC_APB2SMENR_USART1SMEN		(1 << 14)
/** RCC_APB2SMENR_SPI1SMEN SPI1 clock enable during sleep mode bit **/
#define RCC_APB2SMENR_SPI1SMEN		(1 << 12)
/** RCC_APB2SMENR_ADCSMEN ADC clock enable during sleep mode bit **/
#define RCC_APB2SMENR_ADCSMEN		(1 << 9)
/** RCC_APB2SMENR_TIM22SMEN TIM22 timer clock enable during sleep mode bit **/
#define RCC_APB2SMENR_TIM22SMEN		(1 << 5)
/** RCC_APB2SMENR_TIM21SMEN TIM21 timer clock enable during sleep mode bit **/
#define RCC_APB2SMENR_TIM21SMEN		(1 << 2)
/** RCC_APB2SMENR_SYSCFGSMEN System configuration controller clock enable during sleep mode bit **/
#define RCC_APB2SMENR_SYSCFGSMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1smenr APB1SMENR APB1 peripheral clock enable in sleep mode register
@{*/

/** RCC_APB1SMENR_LPTIM1SMEN Low power timer clock enable during sleep mode bit **/
#define RCC_APB1SMENR_LPTIM1SMEN		(1 << 31)
/** RCC_APB1SMENR_I2C3SMEN I2C3 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_I2C3SMEN		(1 << 30)
/** RCC_APB1SMENR_PWRSMEN Power interface clock enable during sleep mode bit **/
#define RCC_APB1SMENR_PWRSMEN		(1 << 28)
/** RCC_APB1SMENR_CRSSMEN Clock recovery system clock enable during sleep mode bit **/
#define RCC_APB1SMENR_CRSSMEN		(1 << 27)
/** RCC_APB1SMENR_I2C2SMEN I2C2 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_I2C2SMEN		(1 << 22)
/** RCC_APB1SMENR_I2C1SMEN I2C1 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_I2C1SMEN		(1 << 21)
/** RCC_APB1SMENR_USART5SMEN USART5 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_USART5SMEN		(1 << 20)
/** RCC_APB1SMENR_USART4SMEN USART4 clock enabe during sleep mode bit **/
#define RCC_APB1SMENR_USART4SMEN		(1 << 19)
/** RCC_APB1SMENR_LPUART1SMEN LPUART1 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_LPUART1SMEN		(1 << 18)
/** RCC_APB1SMENR_USART2SMEN UART2 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_USART2SMEN		(1 << 17)
/** RCC_APB1SMENR_SPI2SMEN SPI2 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_SPI2SMEN		(1 << 14)
/** RCC_APB1SMENR_WWDGSMEN Window watchdog clock enable during sleep mode bit **/
#define RCC_APB1SMENR_WWDGSMEN		(1 << 11)
/** RCC_APB1SMENR_TIM7SMEN Timer 7 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_TIM7SMEN		(1 << 5)
/** RCC_APB1SMENR_TIM6SMEN Timer 6 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_TIM6SMEN		(1 << 4)
/** RCC_APB1SMENR_TIM3SMEN Timer 3 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_TIM3SMEN		(1 << 1)
/** RCC_APB1SMENR_TIM2SMEN Timer2 clock enable during sleep mode bit **/
#define RCC_APB1SMENR_TIM2SMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ccipr CCIPR Clock configuration register
@{*/

/** RCC_CCIPR_LPTIM1SEL1 Low Power Timer clock source selection bits **/
#define RCC_CCIPR_LPTIM1SEL1		(1 << 19)
/** RCC_CCIPR_LPTIM1SEL0 LPTIM1SEL0 **/
#define RCC_CCIPR_LPTIM1SEL0		(1 << 18)
/** RCC_CCIPR_I2C3SEL1 I2C3 clock source selection bits **/
#define RCC_CCIPR_I2C3SEL1		(1 << 17)
/** RCC_CCIPR_I2C3SEL0 I2C3 clock source selection bits **/
#define RCC_CCIPR_I2C3SEL0		(1 << 16)
/** RCC_CCIPR_I2C1SEL1 I2C1 clock source selection bits **/
#define RCC_CCIPR_I2C1SEL1		(1 << 13)
/** RCC_CCIPR_I2C1SEL0 I2C1SEL0 **/
#define RCC_CCIPR_I2C1SEL0		(1 << 12)
/** RCC_CCIPR_LPUART1SEL1 LPUART1 clock source selection bits **/
#define RCC_CCIPR_LPUART1SEL1		(1 << 11)
/** RCC_CCIPR_LPUART1SEL0 LPUART1SEL0 **/
#define RCC_CCIPR_LPUART1SEL0		(1 << 10)
/** RCC_CCIPR_USART2SEL1 USART2 clock source selection bits **/
#define RCC_CCIPR_USART2SEL1		(1 << 3)
/** RCC_CCIPR_USART2SEL0 USART2SEL0 **/
#define RCC_CCIPR_USART2SEL0		(1 << 2)
/** RCC_CCIPR_USART1SEL1 USART1 clock source selection bits **/
#define RCC_CCIPR_USART1SEL1		(1 << 1)
/** RCC_CCIPR_USART1SEL0 USART1SEL0 **/
#define RCC_CCIPR_USART1SEL0		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR Control and status register
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
/** RCC_CSR_OBLRSTF OBLRSTF **/
#define RCC_CSR_OBLRSTF		(1 << 25)
/** RCC_CSR_FWRSTF Firewall reset flag **/
#define RCC_CSR_FWRSTF		(1 << 24)
/** RCC_CSR_RMVF Remove reset flag **/
#define RCC_CSR_RMVF		(1 << 23)
/** RCC_CSR_RTCRST RTC software reset bit **/
#define RCC_CSR_RTCRST		(1 << 19)
/** RCC_CSR_RTCEN RTC clock enable bit **/
#define RCC_CSR_RTCEN		(1 << 18)

#define RCC_CSR_RTCSEL_SHIFT		16
#define RCC_CSR_RTCSEL_MASK		0x03
/** @defgroup rcc_csr_rtcsel RTCSEL RTC and LCD clock source selection bits
@{*/
/**@}*/

/** RCC_CSR_CSSLSED CSS on LSE failure detection flag **/
#define RCC_CSR_CSSLSED		(1 << 14)
/** RCC_CSR_CSSLSEON CSSLSEON **/
#define RCC_CSR_CSSLSEON		(1 << 13)

#define RCC_CSR_LSEDRV_SHIFT		11
#define RCC_CSR_LSEDRV_MASK		0x03
/** @defgroup rcc_csr_lsedrv LSEDRV LSEDRV
@{*/
/**@}*/

/** RCC_CSR_LSEBYP External low-speed oscillator bypass bit **/
#define RCC_CSR_LSEBYP		(1 << 10)
/** RCC_CSR_LSERDY External low-speed oscillator ready bit **/
#define RCC_CSR_LSERDY		(1 << 9)
/** RCC_CSR_LSEON External low-speed oscillator enable bit **/
#define RCC_CSR_LSEON		(1 << 8)
/** RCC_CSR_LSIIWDGLP LSI clock input to IWDG in Ultra-low-power mode (Stop and Standby) enable bit **/
#define RCC_CSR_LSIIWDGLP		(1 << 2)
/** RCC_CSR_LSIRDY Internal low-speed oscillator ready bit **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION Internal low-speed oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

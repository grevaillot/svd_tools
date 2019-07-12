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
/** RCC_PLLCFGR PLL configuration register **/
#define RCC_PLLCFGR			MMIO32(RCC_BASE + 0x0c)
/** RCC_PLLSAI1CFGR PLLSAI1 configuration register **/
#define RCC_PLLSAI1CFGR			MMIO32(RCC_BASE + 0x10)
/** RCC_PLLSAI2CFGR PLLSAI2 configuration register **/
#define RCC_PLLSAI2CFGR			MMIO32(RCC_BASE + 0x14)
/** RCC_CIER Clock interrupt enable register **/
#define RCC_CIER			MMIO32(RCC_BASE + 0x18)
/** RCC_CIFR Clock interrupt flag register **/
#define RCC_CIFR			MMIO32(RCC_BASE + 0x1c)
/** RCC_CICR Clock interrupt clear register **/
#define RCC_CICR			MMIO32(RCC_BASE + 0x20)
/** RCC_AHB1RSTR AHB1 peripheral reset register **/
#define RCC_AHB1RSTR			MMIO32(RCC_BASE + 0x28)
/** RCC_AHB2RSTR AHB2 peripheral reset register **/
#define RCC_AHB2RSTR			MMIO32(RCC_BASE + 0x2c)
/** RCC_AHB3RSTR AHB3 peripheral reset register **/
#define RCC_AHB3RSTR			MMIO32(RCC_BASE + 0x30)
/** RCC_APB1RSTR1 APB1 peripheral reset register 1 **/
#define RCC_APB1RSTR1			MMIO32(RCC_BASE + 0x38)
/** RCC_APB1RSTR2 APB1 peripheral reset register 2 **/
#define RCC_APB1RSTR2			MMIO32(RCC_BASE + 0x3c)
/** RCC_APB2RSTR APB2 peripheral reset register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x40)
/** RCC_AHB1ENR AHB1 peripheral clock enable register **/
#define RCC_AHB1ENR			MMIO32(RCC_BASE + 0x48)
/** RCC_AHB2ENR AHB2 peripheral clock enable register **/
#define RCC_AHB2ENR			MMIO32(RCC_BASE + 0x4c)
/** RCC_AHB3ENR AHB3 peripheral clock enable register **/
#define RCC_AHB3ENR			MMIO32(RCC_BASE + 0x50)
/** RCC_APB1ENR1 APB1ENR1 **/
#define RCC_APB1ENR1			MMIO32(RCC_BASE + 0x58)
/** RCC_APB1ENR2 APB1 peripheral clock enable register 2 **/
#define RCC_APB1ENR2			MMIO32(RCC_BASE + 0x5c)
/** RCC_APB2ENR APB2ENR **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0x60)
/** RCC_AHB1SMENR AHB1 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB1SMENR			MMIO32(RCC_BASE + 0x68)
/** RCC_AHB2SMENR AHB2 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB2SMENR			MMIO32(RCC_BASE + 0x6c)
/** RCC_AHB3SMENR AHB3 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB3SMENR			MMIO32(RCC_BASE + 0x70)
/** RCC_APB1SMENR1 APB1SMENR1 **/
#define RCC_APB1SMENR1			MMIO32(RCC_BASE + 0x78)
/** RCC_APB1SMENR2 APB1 peripheral clocks enable in Sleep and Stop modes register 2 **/
#define RCC_APB1SMENR2			MMIO32(RCC_BASE + 0x7c)
/** RCC_APB2SMENR APB2SMENR **/
#define RCC_APB2SMENR			MMIO32(RCC_BASE + 0x80)
/** RCC_CCIPR CCIPR **/
#define RCC_CCIPR			MMIO32(RCC_BASE + 0x88)
/** RCC_BDCR BDCR **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x90)
/** RCC_CSR CSR **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x94)
/** RCC_CRRCR Clock recovery RC register **/
#define RCC_CRRCR			MMIO32(RCC_BASE + 0x98)
/** RCC_CCIPR2 Peripherals independent clock configuration register **/
#define RCC_CCIPR2			MMIO32(RCC_BASE + 0x9c)

/**@}*/


/** @defgroup rcc_cr CR Clock control register
@{*/

/** RCC_CR_PLLSAI2RDY SAI2 PLL clock ready flag **/
#define RCC_CR_PLLSAI2RDY		(1 << 29)
/** RCC_CR_PLLSAI2ON SAI2 PLL enable **/
#define RCC_CR_PLLSAI2ON		(1 << 28)
/** RCC_CR_PLLSAI1RDY SAI1 PLL clock ready flag **/
#define RCC_CR_PLLSAI1RDY		(1 << 27)
/** RCC_CR_PLLSAI1ON SAI1 PLL enable **/
#define RCC_CR_PLLSAI1ON		(1 << 26)
/** RCC_CR_PLLRDY Main PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON Main PLL enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_CSSON Clock security system enable **/
#define RCC_CR_CSSON		(1 << 19)
/** RCC_CR_HSEBYP HSE crystal oscillator bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)
/** RCC_CR_HSIASFS HSI automatic start from Stop **/
#define RCC_CR_HSIASFS		(1 << 11)
/** RCC_CR_HSIRDY HSI clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 10)
/** RCC_CR_HSIKERON HSI always enable for peripheral kernels **/
#define RCC_CR_HSIKERON		(1 << 9)
/** RCC_CR_HSION HSI clock enable **/
#define RCC_CR_HSION		(1 << 8)

#define RCC_CR_MSIRANGE_SHIFT		4
#define RCC_CR_MSIRANGE_MASK		0x0f
/** @defgroup rcc_cr_msirange MSIRANGE MSI clock ranges
@{*/
/**@}*/

/** RCC_CR_MSIRGSEL MSI clock range selection **/
#define RCC_CR_MSIRGSEL		(1 << 3)
/** RCC_CR_MSIPLLEN MSI clock PLL enable **/
#define RCC_CR_MSIPLLEN		(1 << 2)
/** RCC_CR_MSIRDY MSI clock ready flag **/
#define RCC_CR_MSIRDY		(1 << 1)
/** RCC_CR_MSION MSI clock enable **/
#define RCC_CR_MSION		(1 << 0)

/**@}*/

/** @defgroup rcc_icscr ICSCR Internal clock sources calibration register
@{*/


#define RCC_ICSCR_HSITRIM_SHIFT		24
#define RCC_ICSCR_HSITRIM_MASK		0x7f
/** @defgroup rcc_icscr_hsitrim HSITRIM HSI clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_HSICAL_SHIFT		16
#define RCC_ICSCR_HSICAL_MASK		0xff
/** @defgroup rcc_icscr_hsical HSICAL HSI clock calibration
@{*/
/**@}*/


#define RCC_ICSCR_MSITRIM_SHIFT		8
#define RCC_ICSCR_MSITRIM_MASK		0xff
/** @defgroup rcc_icscr_msitrim MSITRIM MSI clock trimming
@{*/
/**@}*/


#define RCC_ICSCR_MSICAL_SHIFT		0
#define RCC_ICSCR_MSICAL_MASK		0xff
/** @defgroup rcc_icscr_msical MSICAL MSI clock calibration
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

/** RCC_CFGR_STOPWUCK Wakeup from Stop and CSS backup clock selection **/
#define RCC_CFGR_STOPWUCK		(1 << 15)

#define RCC_CFGR_PPRE2_SHIFT		11
#define RCC_CFGR_PPRE2_MASK		0x07
/** @defgroup rcc_cfgr_ppre2 PPRE2 APB high-speed prescaler (APB2)
@{*/
/**@}*/


#define RCC_CFGR_PPRE1_SHIFT		8
#define RCC_CFGR_PPRE1_MASK		0x07
/** @defgroup rcc_cfgr_ppre1 PPRE1 PB low-speed prescaler (APB1)
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

/** @defgroup rcc_pllcfgr PLLCFGR PLL configuration register
@{*/


#define RCC_PLLCFGR_PLLPDIV_SHIFT		27
#define RCC_PLLCFGR_PLLPDIV_MASK		0x1f
/** @defgroup rcc_pllcfgr_pllpdiv PLLPDIV Main PLL division factor for PLLSAI2CLK
@{*/
/**@}*/


#define RCC_PLLCFGR_PLLR_SHIFT		25
#define RCC_PLLCFGR_PLLR_MASK		0x03
/** @defgroup rcc_pllcfgr_pllr PLLR Main PLL division factor for PLLCLK (system clock)
@{*/
/**@}*/

/** RCC_PLLCFGR_PLLREN Main PLL PLLCLK output enable **/
#define RCC_PLLCFGR_PLLREN		(1 << 24)

#define RCC_PLLCFGR_PLLQ_SHIFT		21
#define RCC_PLLCFGR_PLLQ_MASK		0x03
/** @defgroup rcc_pllcfgr_pllq PLLQ Main PLL division factor for PLLUSB1CLK(48 MHz clock)
@{*/
/**@}*/

/** RCC_PLLCFGR_PLLQEN Main PLL PLLUSB1CLK output enable **/
#define RCC_PLLCFGR_PLLQEN		(1 << 20)
/** RCC_PLLCFGR_PLLP Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock) **/
#define RCC_PLLCFGR_PLLP		(1 << 17)
/** RCC_PLLCFGR_PLLPEN Main PLL PLLSAI3CLK output enable **/
#define RCC_PLLCFGR_PLLPEN		(1 << 16)

#define RCC_PLLCFGR_PLLN_SHIFT		8
#define RCC_PLLCFGR_PLLN_MASK		0x7f
/** @defgroup rcc_pllcfgr_plln PLLN Main PLL multiplication factor for VCO
@{*/
/**@}*/


#define RCC_PLLCFGR_PLLM_SHIFT		4
#define RCC_PLLCFGR_PLLM_MASK		0x0f
/** @defgroup rcc_pllcfgr_pllm PLLM Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
@{*/
/**@}*/


#define RCC_PLLCFGR_PLLSRC_SHIFT		0
#define RCC_PLLCFGR_PLLSRC_MASK		0x03
/** @defgroup rcc_pllcfgr_pllsrc PLLSRC Main PLL, PLLSAI1 and PLLSAI2 entry clock source
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pllsai1cfgr PLLSAI1CFGR PLLSAI1 configuration register
@{*/


#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_SHIFT		27
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_MASK		0x1f
/** @defgroup rcc_pllsai1cfgr_pllsai1pdiv PLLSAI1PDIV PLLSAI1 division factor for PLLSAI1CLK
@{*/
/**@}*/


#define RCC_PLLSAI1CFGR_PLLSAI1R_SHIFT		25
#define RCC_PLLSAI1CFGR_PLLSAI1R_MASK		0x03
/** @defgroup rcc_pllsai1cfgr_pllsai1r PLLSAI1R PLLSAI1 division factor for PLLADC1CLK (ADC clock)
@{*/
/**@}*/

/** RCC_PLLSAI1CFGR_PLLSAI1REN PLLSAI1 PLLADC1CLK output enable **/
#define RCC_PLLSAI1CFGR_PLLSAI1REN		(1 << 24)

#define RCC_PLLSAI1CFGR_PLLSAI1Q_SHIFT		21
#define RCC_PLLSAI1CFGR_PLLSAI1Q_MASK		0x03
/** @defgroup rcc_pllsai1cfgr_pllsai1q PLLSAI1Q SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)
@{*/
/**@}*/

/** RCC_PLLSAI1CFGR_PLLSAI1QEN SAI1PLL PLLUSB2CLK output enable **/
#define RCC_PLLSAI1CFGR_PLLSAI1QEN		(1 << 20)
/** RCC_PLLSAI1CFGR_PLLSAI1P SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock) **/
#define RCC_PLLSAI1CFGR_PLLSAI1P		(1 << 17)
/** RCC_PLLSAI1CFGR_PLLSAI1PEN SAI1PLL PLLSAI1CLK output enable **/
#define RCC_PLLSAI1CFGR_PLLSAI1PEN		(1 << 16)

#define RCC_PLLSAI1CFGR_PLLSAI1N_SHIFT		8
#define RCC_PLLSAI1CFGR_PLLSAI1N_MASK		0x7f
/** @defgroup rcc_pllsai1cfgr_pllsai1n PLLSAI1N SAI1PLL multiplication factor for VCO
@{*/
/**@}*/


#define RCC_PLLSAI1CFGR_PLLSAI1M_SHIFT		4
#define RCC_PLLSAI1CFGR_PLLSAI1M_MASK		0x0f
/** @defgroup rcc_pllsai1cfgr_pllsai1m PLLSAI1M Division factor for PLLSAI1 input clock
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pllsai2cfgr PLLSAI2CFGR PLLSAI2 configuration register
@{*/


#define RCC_PLLSAI2CFGR_PLLSAI2PDIV_SHIFT		27
#define RCC_PLLSAI2CFGR_PLLSAI2PDIV_MASK		0x1f
/** @defgroup rcc_pllsai2cfgr_pllsai2pdiv PLLSAI2PDIV PLLSAI2 division factor for PLLSAI2CLK
@{*/
/**@}*/


#define RCC_PLLSAI2CFGR_PLLSAI2R_SHIFT		25
#define RCC_PLLSAI2CFGR_PLLSAI2R_MASK		0x03
/** @defgroup rcc_pllsai2cfgr_pllsai2r PLLSAI2R PLLSAI2 division factor for PLLADC2CLK (ADC clock)
@{*/
/**@}*/

/** RCC_PLLSAI2CFGR_PLLSAI2REN PLLSAI2 PLLADC2CLK output enable **/
#define RCC_PLLSAI2CFGR_PLLSAI2REN		(1 << 24)

#define RCC_PLLSAI2CFGR_PLLSAI2Q_SHIFT		21
#define RCC_PLLSAI2CFGR_PLLSAI2Q_MASK		0x03
/** @defgroup rcc_pllsai2cfgr_pllsai2q PLLSAI2Q SAI2PLL PLLSAI2CLK output enable
@{*/
/**@}*/

/** RCC_PLLSAI2CFGR_PLLSAI2QEN PLLSAI2 division factor for PLLDISCLK **/
#define RCC_PLLSAI2CFGR_PLLSAI2QEN		(1 << 20)
/** RCC_PLLSAI2CFGR_PLLSAI2P SAI1PLL division factor for PLLSAI2CLK (SAI1 or SAI2 clock) **/
#define RCC_PLLSAI2CFGR_PLLSAI2P		(1 << 17)
/** RCC_PLLSAI2CFGR_PLLSAI2PEN SAI2PLL PLLSAI2CLK output enable **/
#define RCC_PLLSAI2CFGR_PLLSAI2PEN		(1 << 16)

#define RCC_PLLSAI2CFGR_PLLSAI2N_SHIFT		8
#define RCC_PLLSAI2CFGR_PLLSAI2N_MASK		0x7f
/** @defgroup rcc_pllsai2cfgr_pllsai2n PLLSAI2N SAI2PLL multiplication factor for VCO
@{*/
/**@}*/


#define RCC_PLLSAI2CFGR_PLLSAI2M_SHIFT		4
#define RCC_PLLSAI2CFGR_PLLSAI2M_MASK		0x0f
/** @defgroup rcc_pllsai2cfgr_pllsai2m PLLSAI2M Division factor for PLLSAI2 input clock
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cier CIER Clock interrupt enable register
@{*/

/** RCC_CIER_HSI48RDYIE HSI48 ready interrupt enable **/
#define RCC_CIER_HSI48RDYIE		(1 << 10)
/** RCC_CIER_LSECSSIE LSE clock security system interrupt enable **/
#define RCC_CIER_LSECSSIE		(1 << 9)
/** RCC_CIER_PLLSAI2RDYIE PLLSAI2 ready interrupt enable **/
#define RCC_CIER_PLLSAI2RDYIE		(1 << 7)
/** RCC_CIER_PLLSAI1RDYIE PLLSAI1 ready interrupt enable **/
#define RCC_CIER_PLLSAI1RDYIE		(1 << 6)
/** RCC_CIER_PLLRDYIE PLL ready interrupt enable **/
#define RCC_CIER_PLLRDYIE		(1 << 5)
/** RCC_CIER_HSERDYIE HSE ready interrupt enable **/
#define RCC_CIER_HSERDYIE		(1 << 4)
/** RCC_CIER_HSIRDYIE HSI ready interrupt enable **/
#define RCC_CIER_HSIRDYIE		(1 << 3)
/** RCC_CIER_MSIRDYIE MSI ready interrupt enable **/
#define RCC_CIER_MSIRDYIE		(1 << 2)
/** RCC_CIER_LSERDYIE LSE ready interrupt enable **/
#define RCC_CIER_LSERDYIE		(1 << 1)
/** RCC_CIER_LSIRDYIE LSI ready interrupt enable **/
#define RCC_CIER_LSIRDYIE		(1 << 0)

/**@}*/

/** @defgroup rcc_cifr CIFR Clock interrupt flag register
@{*/

/** RCC_CIFR_HSI48RDYF HSI48 ready interrupt flag **/
#define RCC_CIFR_HSI48RDYF		(1 << 10)
/** RCC_CIFR_LSECSSF LSE Clock security system interrupt flag **/
#define RCC_CIFR_LSECSSF		(1 << 9)
/** RCC_CIFR_CSSF Clock security system interrupt flag **/
#define RCC_CIFR_CSSF		(1 << 8)
/** RCC_CIFR_PLLSAI2RDYF PLLSAI2 ready interrupt flag **/
#define RCC_CIFR_PLLSAI2RDYF		(1 << 7)
/** RCC_CIFR_PLLSAI1RDYF PLLSAI1 ready interrupt flag **/
#define RCC_CIFR_PLLSAI1RDYF		(1 << 6)
/** RCC_CIFR_PLLRDYF PLL ready interrupt flag **/
#define RCC_CIFR_PLLRDYF		(1 << 5)
/** RCC_CIFR_HSERDYF HSE ready interrupt flag **/
#define RCC_CIFR_HSERDYF		(1 << 4)
/** RCC_CIFR_HSIRDYF HSI ready interrupt flag **/
#define RCC_CIFR_HSIRDYF		(1 << 3)
/** RCC_CIFR_MSIRDYF MSI ready interrupt flag **/
#define RCC_CIFR_MSIRDYF		(1 << 2)
/** RCC_CIFR_LSERDYF LSE ready interrupt flag **/
#define RCC_CIFR_LSERDYF		(1 << 1)
/** RCC_CIFR_LSIRDYF LSI ready interrupt flag **/
#define RCC_CIFR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_cicr CICR Clock interrupt clear register
@{*/

/** RCC_CICR_HSI48RDYC HSI48 oscillator ready interrupt clear **/
#define RCC_CICR_HSI48RDYC		(1 << 10)
/** RCC_CICR_LSECSSC LSE Clock security system interrupt clear **/
#define RCC_CICR_LSECSSC		(1 << 9)
/** RCC_CICR_CSSC Clock security system interrupt clear **/
#define RCC_CICR_CSSC		(1 << 8)
/** RCC_CICR_PLLSAI2RDYC PLLSAI2 ready interrupt clear **/
#define RCC_CICR_PLLSAI2RDYC		(1 << 7)
/** RCC_CICR_PLLSAI1RDYC PLLSAI1 ready interrupt clear **/
#define RCC_CICR_PLLSAI1RDYC		(1 << 6)
/** RCC_CICR_PLLRDYC PLL ready interrupt clear **/
#define RCC_CICR_PLLRDYC		(1 << 5)
/** RCC_CICR_HSERDYC HSE ready interrupt clear **/
#define RCC_CICR_HSERDYC		(1 << 4)
/** RCC_CICR_HSIRDYC HSI ready interrupt clear **/
#define RCC_CICR_HSIRDYC		(1 << 3)
/** RCC_CICR_MSIRDYC MSI ready interrupt clear **/
#define RCC_CICR_MSIRDYC		(1 << 2)
/** RCC_CICR_LSERDYC LSE ready interrupt clear **/
#define RCC_CICR_LSERDYC		(1 << 1)
/** RCC_CICR_LSIRDYC LSI ready interrupt clear **/
#define RCC_CICR_LSIRDYC		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1rstr AHB1RSTR AHB1 peripheral reset register
@{*/

/** RCC_AHB1RSTR_GFXMMURST GFXMMU reset **/
#define RCC_AHB1RSTR_GFXMMURST		(1 << 18)
/** RCC_AHB1RSTR_DMA2DRST DMA2D reset **/
#define RCC_AHB1RSTR_DMA2DRST		(1 << 17)
/** RCC_AHB1RSTR_TSCRST Touch Sensing Controller reset **/
#define RCC_AHB1RSTR_TSCRST		(1 << 16)
/** RCC_AHB1RSTR_CRCRST CRC reset **/
#define RCC_AHB1RSTR_CRCRST		(1 << 12)
/** RCC_AHB1RSTR_FLASHRST Flash memory interface reset **/
#define RCC_AHB1RSTR_FLASHRST		(1 << 8)
/** RCC_AHB1RSTR_DMAMUX1RST DMAMUXRST **/
#define RCC_AHB1RSTR_DMAMUX1RST		(1 << 2)
/** RCC_AHB1RSTR_DMA2RST DMA2 reset **/
#define RCC_AHB1RSTR_DMA2RST		(1 << 1)
/** RCC_AHB1RSTR_DMA1RST DMA1 reset **/
#define RCC_AHB1RSTR_DMA1RST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2rstr AHB2RSTR AHB2 peripheral reset register
@{*/

/** RCC_AHB2RSTR_SDMMC1RST SDMMC1 reset **/
#define RCC_AHB2RSTR_SDMMC1RST		(1 << 22)
/** RCC_AHB2RSTR_OSPIMRST OCTOSPI IO manager reset **/
#define RCC_AHB2RSTR_OSPIMRST		(1 << 20)
/** RCC_AHB2RSTR_RNGRST Random number generator reset **/
#define RCC_AHB2RSTR_RNGRST		(1 << 18)
/** RCC_AHB2RSTR_HASHRST Hash reset **/
#define RCC_AHB2RSTR_HASHRST		(1 << 17)
/** RCC_AHB2RSTR_AESRST AES hardware accelerator reset **/
#define RCC_AHB2RSTR_AESRST		(1 << 16)
/** RCC_AHB2RSTR_DCMIRST Digital Camera Interface reset **/
#define RCC_AHB2RSTR_DCMIRST		(1 << 14)
/** RCC_AHB2RSTR_ADCRST ADC reset **/
#define RCC_AHB2RSTR_ADCRST		(1 << 13)
/** RCC_AHB2RSTR_OTGFSRST USB OTG FS reset **/
#define RCC_AHB2RSTR_OTGFSRST		(1 << 12)
/** RCC_AHB2RSTR_GPIOIRST IO port I reset **/
#define RCC_AHB2RSTR_GPIOIRST		(1 << 8)
/** RCC_AHB2RSTR_GPIOHRST IO port H reset **/
#define RCC_AHB2RSTR_GPIOHRST		(1 << 7)
/** RCC_AHB2RSTR_GPIOGRST IO port G reset **/
#define RCC_AHB2RSTR_GPIOGRST		(1 << 6)
/** RCC_AHB2RSTR_GPIOFRST IO port F reset **/
#define RCC_AHB2RSTR_GPIOFRST		(1 << 5)
/** RCC_AHB2RSTR_GPIOERST IO port E reset **/
#define RCC_AHB2RSTR_GPIOERST		(1 << 4)
/** RCC_AHB2RSTR_GPIODRST IO port D reset **/
#define RCC_AHB2RSTR_GPIODRST		(1 << 3)
/** RCC_AHB2RSTR_GPIOCRST IO port C reset **/
#define RCC_AHB2RSTR_GPIOCRST		(1 << 2)
/** RCC_AHB2RSTR_GPIOBRST IO port B reset **/
#define RCC_AHB2RSTR_GPIOBRST		(1 << 1)
/** RCC_AHB2RSTR_GPIOARST IO port A reset **/
#define RCC_AHB2RSTR_GPIOARST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3rstr AHB3RSTR AHB3 peripheral reset register
@{*/

/** RCC_AHB3RSTR_OSPI2RST OctOSPI2 memory interface reset **/
#define RCC_AHB3RSTR_OSPI2RST		(1 << 9)
/** RCC_AHB3RSTR_FMCRST Flexible memory controller reset **/
#define RCC_AHB3RSTR_FMCRST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr1 APB1RSTR1 APB1 peripheral reset register 1
@{*/

/** RCC_APB1RSTR1_LPTIM1RST Low Power Timer 1 reset **/
#define RCC_APB1RSTR1_LPTIM1RST		(1 << 31)
/** RCC_APB1RSTR1_OPAMPRST OPAMP interface reset **/
#define RCC_APB1RSTR1_OPAMPRST		(1 << 30)
/** RCC_APB1RSTR1_DAC1RST DAC1 interface reset **/
#define RCC_APB1RSTR1_DAC1RST		(1 << 29)
/** RCC_APB1RSTR1_PWRRST Power interface reset **/
#define RCC_APB1RSTR1_PWRRST		(1 << 28)
/** RCC_APB1RSTR1_CAN1RST CAN1 reset **/
#define RCC_APB1RSTR1_CAN1RST		(1 << 25)
/** RCC_APB1RSTR1_CRSRST CRS reset **/
#define RCC_APB1RSTR1_CRSRST		(1 << 24)
/** RCC_APB1RSTR1_I2C3RST I2C3 reset **/
#define RCC_APB1RSTR1_I2C3RST		(1 << 23)
/** RCC_APB1RSTR1_I2C2RST I2C2 reset **/
#define RCC_APB1RSTR1_I2C2RST		(1 << 22)
/** RCC_APB1RSTR1_I2C1RST I2C1 reset **/
#define RCC_APB1RSTR1_I2C1RST		(1 << 21)
/** RCC_APB1RSTR1_UART5RST UART5 reset **/
#define RCC_APB1RSTR1_UART5RST		(1 << 20)
/** RCC_APB1RSTR1_UART4RST UART4 reset **/
#define RCC_APB1RSTR1_UART4RST		(1 << 19)
/** RCC_APB1RSTR1_USART3RST USART3 reset **/
#define RCC_APB1RSTR1_USART3RST		(1 << 18)
/** RCC_APB1RSTR1_USART2RST USART2 reset **/
#define RCC_APB1RSTR1_USART2RST		(1 << 17)
/** RCC_APB1RSTR1_SPI3RST SPI3 reset **/
#define RCC_APB1RSTR1_SPI3RST		(1 << 15)
/** RCC_APB1RSTR1_SPI2RST SPI2 reset **/
#define RCC_APB1RSTR1_SPI2RST		(1 << 14)
/** RCC_APB1RSTR1_TIM7RST TIM7 timer reset **/
#define RCC_APB1RSTR1_TIM7RST		(1 << 5)
/** RCC_APB1RSTR1_TIM6RST TIM6 timer reset **/
#define RCC_APB1RSTR1_TIM6RST		(1 << 4)
/** RCC_APB1RSTR1_TIM5RST TIM5 timer reset **/
#define RCC_APB1RSTR1_TIM5RST		(1 << 3)
/** RCC_APB1RSTR1_TIM4RST TIM3 timer reset **/
#define RCC_APB1RSTR1_TIM4RST		(1 << 2)
/** RCC_APB1RSTR1_TIM3RST TIM3 timer reset **/
#define RCC_APB1RSTR1_TIM3RST		(1 << 1)
/** RCC_APB1RSTR1_TIM2RST TIM2 timer reset **/
#define RCC_APB1RSTR1_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1rstr2 APB1RSTR2 APB1 peripheral reset register 2
@{*/

/** RCC_APB1RSTR2_LPTIM2RST Low-power timer 2 reset **/
#define RCC_APB1RSTR2_LPTIM2RST		(1 << 5)
/** RCC_APB1RSTR2_I2C4RST I2C4 reset **/
#define RCC_APB1RSTR2_I2C4RST		(1 << 1)
/** RCC_APB1RSTR2_LPUART1RST Low-power UART 1 reset **/
#define RCC_APB1RSTR2_LPUART1RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register
@{*/

/** RCC_APB2RSTR_DSIRST DSI reset **/
#define RCC_APB2RSTR_DSIRST		(1 << 27)
/** RCC_APB2RSTR_LTDCRST LCD-TFT reset **/
#define RCC_APB2RSTR_LTDCRST		(1 << 26)
/** RCC_APB2RSTR_DFSDM1RST Digital filters for sigma-delata modulators (DFSDM) reset **/
#define RCC_APB2RSTR_DFSDM1RST		(1 << 24)
/** RCC_APB2RSTR_SAI2RST Serial audio interface 2 (SAI2) reset **/
#define RCC_APB2RSTR_SAI2RST		(1 << 22)
/** RCC_APB2RSTR_SAI1RST Serial audio interface 1 (SAI1) reset **/
#define RCC_APB2RSTR_SAI1RST		(1 << 21)
/** RCC_APB2RSTR_TIM17RST TIM17 timer reset **/
#define RCC_APB2RSTR_TIM17RST		(1 << 18)
/** RCC_APB2RSTR_TIM16RST TIM16 timer reset **/
#define RCC_APB2RSTR_TIM16RST		(1 << 17)
/** RCC_APB2RSTR_TIM15RST TIM15 timer reset **/
#define RCC_APB2RSTR_TIM15RST		(1 << 16)
/** RCC_APB2RSTR_USART1RST USART1 reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 14)
/** RCC_APB2RSTR_TIM8RST TIM8 timer reset **/
#define RCC_APB2RSTR_TIM8RST		(1 << 13)
/** RCC_APB2RSTR_SPI1RST SPI1 reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_TIM1RST TIM1 timer reset **/
#define RCC_APB2RSTR_TIM1RST		(1 << 11)
/** RCC_APB2RSTR_SYSCFGRST System configuration (SYSCFG) reset **/
#define RCC_APB2RSTR_SYSCFGRST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1enr AHB1ENR AHB1 peripheral clock enable register
@{*/

/** RCC_AHB1ENR_GFXMMUEN Graphic MMU clock enable **/
#define RCC_AHB1ENR_GFXMMUEN		(1 << 18)
/** RCC_AHB1ENR_DMA2DEN DMA2D clock enable **/
#define RCC_AHB1ENR_DMA2DEN		(1 << 17)
/** RCC_AHB1ENR_TSCEN Touch Sensing Controller clock enable **/
#define RCC_AHB1ENR_TSCEN		(1 << 16)
/** RCC_AHB1ENR_CRCEN CRC clock enable **/
#define RCC_AHB1ENR_CRCEN		(1 << 12)
/** RCC_AHB1ENR_FLASHEN Flash memory interface clock enable **/
#define RCC_AHB1ENR_FLASHEN		(1 << 8)
/** RCC_AHB1ENR_DMAMUX1EN DMAMUX clock enable **/
#define RCC_AHB1ENR_DMAMUX1EN		(1 << 2)
/** RCC_AHB1ENR_DMA2EN DMA2 clock enable **/
#define RCC_AHB1ENR_DMA2EN		(1 << 1)
/** RCC_AHB1ENR_DMA1EN DMA1 clock enable **/
#define RCC_AHB1ENR_DMA1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2enr AHB2ENR AHB2 peripheral clock enable register
@{*/

/** RCC_AHB2ENR_SDMMC1EN SDMMC1 clock enable **/
#define RCC_AHB2ENR_SDMMC1EN		(1 << 22)
/** RCC_AHB2ENR_OSPIMEN OctoSPI IO manager clock enable **/
#define RCC_AHB2ENR_OSPIMEN		(1 << 20)
/** RCC_AHB2ENR_RNGEN Random Number Generator clock enable **/
#define RCC_AHB2ENR_RNGEN		(1 << 18)
/** RCC_AHB2ENR_HASHEN HASH clock enable **/
#define RCC_AHB2ENR_HASHEN		(1 << 17)
/** RCC_AHB2ENR_AESEN AES accelerator clock enable **/
#define RCC_AHB2ENR_AESEN		(1 << 16)
/** RCC_AHB2ENR_DCMIEN DCMI clock enable **/
#define RCC_AHB2ENR_DCMIEN		(1 << 14)
/** RCC_AHB2ENR_ADCEN ADC clock enable **/
#define RCC_AHB2ENR_ADCEN		(1 << 13)
/** RCC_AHB2ENR_OTGFSEN OTG full speed clock enable **/
#define RCC_AHB2ENR_OTGFSEN		(1 << 12)
/** RCC_AHB2ENR_GPIOIEN IO port I clock enable **/
#define RCC_AHB2ENR_GPIOIEN		(1 << 8)
/** RCC_AHB2ENR_GPIOHEN IO port H clock enable **/
#define RCC_AHB2ENR_GPIOHEN		(1 << 7)
/** RCC_AHB2ENR_GPIOGEN IO port G clock enable **/
#define RCC_AHB2ENR_GPIOGEN		(1 << 6)
/** RCC_AHB2ENR_GPIOFEN IO port F clock enable **/
#define RCC_AHB2ENR_GPIOFEN		(1 << 5)
/** RCC_AHB2ENR_GPIOEEN IO port E clock enable **/
#define RCC_AHB2ENR_GPIOEEN		(1 << 4)
/** RCC_AHB2ENR_GPIODEN IO port D clock enable **/
#define RCC_AHB2ENR_GPIODEN		(1 << 3)
/** RCC_AHB2ENR_GPIOCEN IO port C clock enable **/
#define RCC_AHB2ENR_GPIOCEN		(1 << 2)
/** RCC_AHB2ENR_GPIOBEN IO port B clock enable **/
#define RCC_AHB2ENR_GPIOBEN		(1 << 1)
/** RCC_AHB2ENR_GPIOAEN IO port A clock enable **/
#define RCC_AHB2ENR_GPIOAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3enr AHB3ENR AHB3 peripheral clock enable register
@{*/

/** RCC_AHB3ENR_OSPI2EN OSPI2EN memory interface clock enable **/
#define RCC_AHB3ENR_OSPI2EN		(1 << 9)
/** RCC_AHB3ENR_FMCEN Flexible memory controller clock enable **/
#define RCC_AHB3ENR_FMCEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr1 APB1ENR1 APB1ENR1
@{*/

/** RCC_APB1ENR1_LPTIM1EN Low power timer 1 clock enable **/
#define RCC_APB1ENR1_LPTIM1EN		(1 << 31)
/** RCC_APB1ENR1_OPAMPEN OPAMP interface clock enable **/
#define RCC_APB1ENR1_OPAMPEN		(1 << 30)
/** RCC_APB1ENR1_DAC1EN DAC1 interface clock enable **/
#define RCC_APB1ENR1_DAC1EN		(1 << 29)
/** RCC_APB1ENR1_PWREN Power interface clock enable **/
#define RCC_APB1ENR1_PWREN		(1 << 28)
/** RCC_APB1ENR1_CAN1EN CAN1 clock enable **/
#define RCC_APB1ENR1_CAN1EN		(1 << 25)
/** RCC_APB1ENR1_CRSEN Clock Recovery System clock enable **/
#define RCC_APB1ENR1_CRSEN		(1 << 24)
/** RCC_APB1ENR1_I2C3EN I2C3 clock enable **/
#define RCC_APB1ENR1_I2C3EN		(1 << 23)
/** RCC_APB1ENR1_I2C2EN I2C2 clock enable **/
#define RCC_APB1ENR1_I2C2EN		(1 << 22)
/** RCC_APB1ENR1_I2C1EN I2C1 clock enable **/
#define RCC_APB1ENR1_I2C1EN		(1 << 21)
/** RCC_APB1ENR1_UART5EN UART5 clock enable **/
#define RCC_APB1ENR1_UART5EN		(1 << 20)
/** RCC_APB1ENR1_UART4EN UART4 clock enable **/
#define RCC_APB1ENR1_UART4EN		(1 << 19)
/** RCC_APB1ENR1_USART3EN USART3 clock enable **/
#define RCC_APB1ENR1_USART3EN		(1 << 18)
/** RCC_APB1ENR1_USART2EN USART2 clock enable **/
#define RCC_APB1ENR1_USART2EN		(1 << 17)
/** RCC_APB1ENR1_SP3EN SPI3 clock enable **/
#define RCC_APB1ENR1_SP3EN		(1 << 15)
/** RCC_APB1ENR1_SPI2EN SPI2 clock enable **/
#define RCC_APB1ENR1_SPI2EN		(1 << 14)
/** RCC_APB1ENR1_WWDGEN Window watchdog clock enable **/
#define RCC_APB1ENR1_WWDGEN		(1 << 11)
/** RCC_APB1ENR1_RTCAPBEN RTC APB clock enable **/
#define RCC_APB1ENR1_RTCAPBEN		(1 << 10)
/** RCC_APB1ENR1_TIM7EN TIM7 timer clock enable **/
#define RCC_APB1ENR1_TIM7EN		(1 << 5)
/** RCC_APB1ENR1_TIM6EN TIM6 timer clock enable **/
#define RCC_APB1ENR1_TIM6EN		(1 << 4)
/** RCC_APB1ENR1_TIM5EN TIM5 timer clock enable **/
#define RCC_APB1ENR1_TIM5EN		(1 << 3)
/** RCC_APB1ENR1_TIM4EN TIM4 timer clock enable **/
#define RCC_APB1ENR1_TIM4EN		(1 << 2)
/** RCC_APB1ENR1_TIM3EN TIM3 timer clock enable **/
#define RCC_APB1ENR1_TIM3EN		(1 << 1)
/** RCC_APB1ENR1_TIM2EN TIM2 timer clock enable **/
#define RCC_APB1ENR1_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1enr2 APB1ENR2 APB1 peripheral clock enable register 2
@{*/

/** RCC_APB1ENR2_LPTIM2EN LPTIM2EN **/
#define RCC_APB1ENR2_LPTIM2EN		(1 << 5)
/** RCC_APB1ENR2_I2C4EN I2C4 clock enable **/
#define RCC_APB1ENR2_I2C4EN		(1 << 1)
/** RCC_APB1ENR2_LPUART1EN Low power UART 1 clock enable **/
#define RCC_APB1ENR2_LPUART1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2ENR
@{*/

/** RCC_APB2ENR_DSIEN DSI clock enable **/
#define RCC_APB2ENR_DSIEN		(1 << 27)
/** RCC_APB2ENR_LTDCEN LCD-TFT clock enable **/
#define RCC_APB2ENR_LTDCEN		(1 << 26)
/** RCC_APB2ENR_DFSDM1EN DFSDM timer clock enable **/
#define RCC_APB2ENR_DFSDM1EN		(1 << 24)
/** RCC_APB2ENR_SAI2EN SAI2 clock enable **/
#define RCC_APB2ENR_SAI2EN		(1 << 22)
/** RCC_APB2ENR_SAI1EN SAI1 clock enable **/
#define RCC_APB2ENR_SAI1EN		(1 << 21)
/** RCC_APB2ENR_TIM17EN TIM17 timer clock enable **/
#define RCC_APB2ENR_TIM17EN		(1 << 18)
/** RCC_APB2ENR_TIM16EN TIM16 timer clock enable **/
#define RCC_APB2ENR_TIM16EN		(1 << 17)
/** RCC_APB2ENR_TIM15EN TIM15 timer clock enable **/
#define RCC_APB2ENR_TIM15EN		(1 << 16)
/** RCC_APB2ENR_USART1EN USART1clock enable **/
#define RCC_APB2ENR_USART1EN		(1 << 14)
/** RCC_APB2ENR_TIM8EN TIM8 timer clock enable **/
#define RCC_APB2ENR_TIM8EN		(1 << 13)
/** RCC_APB2ENR_SPI1EN SPI1 clock enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_TIM1EN TIM1 timer clock enable **/
#define RCC_APB2ENR_TIM1EN		(1 << 11)
/** RCC_APB2ENR_FWEN Firewall clock enable **/
#define RCC_APB2ENR_FWEN		(1 << 7)
/** RCC_APB2ENR_SYSCFGEN SYSCFG clock enable **/
#define RCC_APB2ENR_SYSCFGEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1smenr AHB1SMENR AHB1 peripheral clocks enable in Sleep and Stop modes register
@{*/

/** RCC_AHB1SMENR_GFXMMUSMEN GFXMMU clock enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_GFXMMUSMEN		(1 << 18)
/** RCC_AHB1SMENR_DMA2DSMEN DMA2D clock enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMA2DSMEN		(1 << 17)
/** RCC_AHB1SMENR_TSCSMEN Touch Sensing Controller clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_TSCSMEN		(1 << 16)
/** RCC_AHB1SMENR_CRCSMEN CRCSMEN **/
#define RCC_AHB1SMENR_CRCSMEN		(1 << 12)
/** RCC_AHB1SMENR_SRAM1SMEN SRAM1 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_SRAM1SMEN		(1 << 9)
/** RCC_AHB1SMENR_FLASHSMEN Flash memory interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_FLASHSMEN		(1 << 8)
/** RCC_AHB1SMENR_DMAMUX1SMEN DMAMUX clock enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMAMUX1SMEN		(1 << 2)
/** RCC_AHB1SMENR_DMA2SMEN DMA2 clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMA2SMEN		(1 << 1)
/** RCC_AHB1SMENR_DMA1SMEN DMA1 clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMA1SMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2smenr AHB2SMENR AHB2 peripheral clocks enable in Sleep and Stop modes register
@{*/

/** RCC_AHB2SMENR_SDMMC1SMEN SDMMC1 clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_SDMMC1SMEN		(1 << 22)
/** RCC_AHB2SMENR_OSPIMSMEN OctoSPI IO manager clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_OSPIMSMEN		(1 << 20)
/** RCC_AHB2SMENR_RNGSMEN Random Number Generator clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_RNGSMEN		(1 << 18)
/** RCC_AHB2SMENR_HASHSMEN HASH clock enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_HASHSMEN		(1 << 17)
/** RCC_AHB2SMENR_AESSMEN AES accelerator clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_AESSMEN		(1 << 16)
/** RCC_AHB2SMENR_DCMISMEN DCMI clock enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_DCMISMEN		(1 << 14)
/** RCC_AHB2SMENR_ADCFSSMEN ADC clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_ADCFSSMEN		(1 << 13)
/** RCC_AHB2SMENR_OTGFSSMEN OTG full speed clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_OTGFSSMEN		(1 << 12)
/** RCC_AHB2SMENR_SRAM3SMEN SRAM2 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_SRAM3SMEN		(1 << 10)
/** RCC_AHB2SMENR_SRAM2SMEN SRAM2 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_SRAM2SMEN		(1 << 9)
/** RCC_AHB2SMENR_GPIOISMEN IO port I clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOISMEN		(1 << 8)
/** RCC_AHB2SMENR_GPIOHSMEN IO port H clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOHSMEN		(1 << 7)
/** RCC_AHB2SMENR_GPIOGSMEN IO port G clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOGSMEN		(1 << 6)
/** RCC_AHB2SMENR_GPIOFSMEN IO port F clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOFSMEN		(1 << 5)
/** RCC_AHB2SMENR_GPIOESMEN IO port E clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOESMEN		(1 << 4)
/** RCC_AHB2SMENR_GPIODSMEN IO port D clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIODSMEN		(1 << 3)
/** RCC_AHB2SMENR_GPIOCSMEN IO port C clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOCSMEN		(1 << 2)
/** RCC_AHB2SMENR_GPIOBSMEN IO port B clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOBSMEN		(1 << 1)
/** RCC_AHB2SMENR_GPIOASMEN IO port A clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOASMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3smenr AHB3SMENR AHB3 peripheral clocks enable in Sleep and Stop modes register
@{*/

/** RCC_AHB3SMENR_OCTOSPI2 OctoSPI2 memory interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB3SMENR_OCTOSPI2		(1 << 9)
/** RCC_AHB3SMENR_FMCSMEN Flexible memory controller clocks enable during Sleep and Stop modes **/
#define RCC_AHB3SMENR_FMCSMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1smenr1 APB1SMENR1 APB1SMENR1
@{*/

/** RCC_APB1SMENR1_LPTIM1SMEN Low power timer 1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_LPTIM1SMEN		(1 << 31)
/** RCC_APB1SMENR1_OPAMPSMEN OPAMP interface clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_OPAMPSMEN		(1 << 30)
/** RCC_APB1SMENR1_DAC1SMEN DAC1 interface clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_DAC1SMEN		(1 << 29)
/** RCC_APB1SMENR1_PWRSMEN Power interface clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_PWRSMEN		(1 << 28)
/** RCC_APB1SMENR1_CAN1SMEN CAN1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_CAN1SMEN		(1 << 25)
/** RCC_APB1SMENR1_CRSSMEN CRS clock enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_CRSSMEN		(1 << 24)
/** RCC_APB1SMENR1_I2C3SMEN I2C3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C3SMEN		(1 << 23)
/** RCC_APB1SMENR1_I2C2SMEN I2C2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C2SMEN		(1 << 22)
/** RCC_APB1SMENR1_I2C1SMEN I2C1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C1SMEN		(1 << 21)
/** RCC_APB1SMENR1_UART5SMEN UART5 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_UART5SMEN		(1 << 20)
/** RCC_APB1SMENR1_UART4SMEN UART4 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_UART4SMEN		(1 << 19)
/** RCC_APB1SMENR1_USART3SMEN USART3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_USART3SMEN		(1 << 18)
/** RCC_APB1SMENR1_USART2SMEN USART2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_USART2SMEN		(1 << 17)
/** RCC_APB1SMENR1_SP3SMEN SPI3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_SP3SMEN		(1 << 15)
/** RCC_APB1SMENR1_SPI2SMEN SPI2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_SPI2SMEN		(1 << 14)
/** RCC_APB1SMENR1_WWDGSMEN Window watchdog clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_WWDGSMEN		(1 << 11)
/** RCC_APB1SMENR1_RTCAPBSMEN RTC APB clock enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_RTCAPBSMEN		(1 << 10)
/** RCC_APB1SMENR1_TIM7SMEN TIM7 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM7SMEN		(1 << 5)
/** RCC_APB1SMENR1_TIM6SMEN TIM6 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM6SMEN		(1 << 4)
/** RCC_APB1SMENR1_TIM5SMEN TIM5 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM5SMEN		(1 << 3)
/** RCC_APB1SMENR1_TIM4SMEN TIM4 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM4SMEN		(1 << 2)
/** RCC_APB1SMENR1_TIM3SMEN TIM3 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM3SMEN		(1 << 1)
/** RCC_APB1SMENR1_TIM2SMEN TIM2 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM2SMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1smenr2 APB1SMENR2 APB1 peripheral clocks enable in Sleep and Stop modes register 2
@{*/

/** RCC_APB1SMENR2_LPTIM2SMEN LPTIM2SMEN **/
#define RCC_APB1SMENR2_LPTIM2SMEN		(1 << 5)
/** RCC_APB1SMENR2_I2C4SMEN I2C4 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR2_I2C4SMEN		(1 << 1)
/** RCC_APB1SMENR2_LPUART1SMEN Low power UART 1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR2_LPUART1SMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2smenr APB2SMENR APB2SMENR
@{*/

/** RCC_APB2SMENR_DSISMEN DSI clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_DSISMEN		(1 << 27)
/** RCC_APB2SMENR_LTDCSMEN LCD-TFT timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_LTDCSMEN		(1 << 26)
/** RCC_APB2SMENR_DFSDM1SMEN DFSDM timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_DFSDM1SMEN		(1 << 24)
/** RCC_APB2SMENR_SAI2SMEN SAI2 clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SAI2SMEN		(1 << 22)
/** RCC_APB2SMENR_SAI1SMEN SAI1 clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SAI1SMEN		(1 << 21)
/** RCC_APB2SMENR_TIM17SMEN TIM17 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM17SMEN		(1 << 18)
/** RCC_APB2SMENR_TIM16SMEN TIM16 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM16SMEN		(1 << 17)
/** RCC_APB2SMENR_TIM15SMEN TIM15 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM15SMEN		(1 << 16)
/** RCC_APB2SMENR_USART1SMEN USART1clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_USART1SMEN		(1 << 14)
/** RCC_APB2SMENR_TIM8SMEN TIM8 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM8SMEN		(1 << 13)
/** RCC_APB2SMENR_SPI1SMEN SPI1 clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SPI1SMEN		(1 << 12)
/** RCC_APB2SMENR_TIM1SMEN TIM1 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM1SMEN		(1 << 11)
/** RCC_APB2SMENR_SYSCFGSMEN SYSCFG clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SYSCFGSMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ccipr CCIPR CCIPR
@{*/


#define RCC_CCIPR_ADCSEL_SHIFT		28
#define RCC_CCIPR_ADCSEL_MASK		0x03
/** @defgroup rcc_ccipr_adcsel ADCSEL ADCs clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_CLK48SEL_SHIFT		26
#define RCC_CCIPR_CLK48SEL_MASK		0x03
/** @defgroup rcc_ccipr_clk48sel CLK48SEL 48 MHz clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_SAI2SEL_SHIFT		24
#define RCC_CCIPR_SAI2SEL_MASK		0x03
/** @defgroup rcc_ccipr_sai2sel SAI2SEL SAI2 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_SAI1SEL_SHIFT		22
#define RCC_CCIPR_SAI1SEL_MASK		0x03
/** @defgroup rcc_ccipr_sai1sel SAI1SEL SAI1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_LPTIM2SEL_SHIFT		20
#define RCC_CCIPR_LPTIM2SEL_MASK		0x03
/** @defgroup rcc_ccipr_lptim2sel LPTIM2SEL Low power timer 2 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_LPTIM1SEL_SHIFT		18
#define RCC_CCIPR_LPTIM1SEL_MASK		0x03
/** @defgroup rcc_ccipr_lptim1sel LPTIM1SEL Low power timer 1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_I2C3SEL_SHIFT		16
#define RCC_CCIPR_I2C3SEL_MASK		0x03
/** @defgroup rcc_ccipr_i2c3sel I2C3SEL I2C3 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_I2C2SEL_SHIFT		14
#define RCC_CCIPR_I2C2SEL_MASK		0x03
/** @defgroup rcc_ccipr_i2c2sel I2C2SEL I2C2 clock source selection
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


#define RCC_CCIPR_UART5SEL_SHIFT		8
#define RCC_CCIPR_UART5SEL_MASK		0x03
/** @defgroup rcc_ccipr_uart5sel UART5SEL UART5 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_UART4SEL_SHIFT		6
#define RCC_CCIPR_UART4SEL_MASK		0x03
/** @defgroup rcc_ccipr_uart4sel UART4SEL UART4 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR_USART3SEL_SHIFT		4
#define RCC_CCIPR_USART3SEL_MASK		0x03
/** @defgroup rcc_ccipr_usart3sel USART3SEL USART3 clock source selection
@{*/
/**@}*/


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

/** @defgroup rcc_bdcr BDCR BDCR
@{*/

/** RCC_BDCR_LSCOSEL Low speed clock output selection **/
#define RCC_BDCR_LSCOSEL		(1 << 25)
/** RCC_BDCR_LSCOEN Low speed clock output enable **/
#define RCC_BDCR_LSCOEN		(1 << 24)
/** RCC_BDCR_BDRST Backup domain software reset **/
#define RCC_BDCR_BDRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSEL_SHIFT		8
#define RCC_BDCR_RTCSEL_MASK		0x03
/** @defgroup rcc_bdcr_rtcsel RTCSEL RTC clock source selection
@{*/
/**@}*/

/** RCC_BDCR_LSECSSD LSECSSD **/
#define RCC_BDCR_LSECSSD		(1 << 6)
/** RCC_BDCR_LSECSSON LSECSSON **/
#define RCC_BDCR_LSECSSON		(1 << 5)

#define RCC_BDCR_LSEDRV_SHIFT		3
#define RCC_BDCR_LSEDRV_MASK		0x03
/** @defgroup rcc_bdcr_lsedrv LSEDRV SE oscillator drive capability
@{*/
/**@}*/

/** RCC_BDCR_LSEBYP LSE oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY LSE oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON LSE oscillator enable **/
#define RCC_BDCR_LSEON		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR CSR
@{*/

/** RCC_CSR_LPWRSTF Low-power reset flag **/
#define RCC_CSR_LPWRSTF		(1 << 31)
/** RCC_CSR_WWDGRSTF Window watchdog reset flag **/
#define RCC_CSR_WWDGRSTF		(1 << 30)
/** RCC_CSR_IWDGRSTF Independent window watchdog reset flag **/
#define RCC_CSR_IWDGRSTF		(1 << 29)
/** RCC_CSR_SFTRSTF Software reset flag **/
#define RCC_CSR_SFTRSTF		(1 << 28)
/** RCC_CSR_BORRSTF BOR flag **/
#define RCC_CSR_BORRSTF		(1 << 27)
/** RCC_CSR_PINRSTF Pin reset flag **/
#define RCC_CSR_PINRSTF		(1 << 26)
/** RCC_CSR_OBLRSTF Option byte loader reset flag **/
#define RCC_CSR_OBLRSTF		(1 << 25)
/** RCC_CSR_FWRSTF Firewall reset flag **/
#define RCC_CSR_FWRSTF		(1 << 24)
/** RCC_CSR_RMVF Remove reset flag **/
#define RCC_CSR_RMVF		(1 << 23)

#define RCC_CSR_MSISRANGE_SHIFT		8
#define RCC_CSR_MSISRANGE_MASK		0x0f
/** @defgroup rcc_csr_msisrange MSISRANGE SI range after Standby mode
@{*/
/**@}*/

/** RCC_CSR_LSIRDY LSI oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION LSI oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

/** @defgroup rcc_crrcr CRRCR Clock recovery RC register
@{*/


#define RCC_CRRCR_HSI48CAL_SHIFT		7
#define RCC_CRRCR_HSI48CAL_MASK		0x1ff
/** @defgroup rcc_crrcr_hsi48cal HSI48CAL HSI48 clock calibration
@{*/
/**@}*/

/** RCC_CRRCR_HSI48RDY HSI48 clock ready flag **/
#define RCC_CRRCR_HSI48RDY		(1 << 1)
/** RCC_CRRCR_HSI48ON HSI48 clock enable **/
#define RCC_CRRCR_HSI48ON		(1 << 0)

/**@}*/

/** @defgroup rcc_ccipr2 CCIPR2 Peripherals independent clock configuration register
@{*/


#define RCC_CCIPR2_OSPISEL_SHIFT		20
#define RCC_CCIPR2_OSPISEL_MASK		0x03
/** @defgroup rcc_ccipr2_ospisel OSPISEL Octospi clock source selection
@{*/
/**@}*/


#define RCC_CCIPR2_PLLSAI2DIVR_SHIFT		16
#define RCC_CCIPR2_PLLSAI2DIVR_MASK		0x03
/** @defgroup rcc_ccipr2_pllsai2divr PLLSAI2DIVR division factor for LTDC clock
@{*/
/**@}*/

/** RCC_CCIPR2_SDMMCSEL SDMMC clock selection **/
#define RCC_CCIPR2_SDMMCSEL		(1 << 14)
/** RCC_CCIPR2_DSISEL clock selection **/
#define RCC_CCIPR2_DSISEL		(1 << 12)

#define RCC_CCIPR2_SAI2SEL_SHIFT		8
#define RCC_CCIPR2_SAI2SEL_MASK		0x07
/** @defgroup rcc_ccipr2_sai2sel SAI2SEL SAI2 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR2_SAI1SEL_SHIFT		5
#define RCC_CCIPR2_SAI1SEL_MASK		0x07
/** @defgroup rcc_ccipr2_sai1sel SAI1SEL SAI1 clock source selection
@{*/
/**@}*/


#define RCC_CCIPR2_ADFSDMSEL_SHIFT		3
#define RCC_CCIPR2_ADFSDMSEL_MASK		0x03
/** @defgroup rcc_ccipr2_adfsdmsel ADFSDMSEL Digital filter for sigma delta modulator audio clock source selection
@{*/
/**@}*/

/** RCC_CCIPR2_DFSDMSEL Digital filter for sigma delta modulator kernel clock source selection **/
#define RCC_CCIPR2_DFSDMSEL		(1 << 2)

#define RCC_CCIPR2_I2C4SEL_SHIFT		0
#define RCC_CCIPR2_I2C4SEL_MASK		0x03
/** @defgroup rcc_ccipr2_i2c4sel I2C4SEL I2C4 clock source selection
@{*/
/**@}*/


/**@}*/

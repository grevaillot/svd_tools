#pragma once 

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

/** RCC_CR clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_HSICFGR RCC Internal Clock Source Calibration Register **/
#define RCC_HSICFGR			MMIO32(RCC_BASE + 0x04)
/** RCC_CRRCR RCC Clock Recovery RC Register **/
#define RCC_CRRCR			MMIO32(RCC_BASE + 0x08)
/** RCC_CSICFGR RCC CSI configuration register **/
#define RCC_CSICFGR			MMIO32(RCC_BASE + 0x0c)
/** RCC_CFGR RCC Clock Configuration Register **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x10)
/** RCC_D1CFGR RCC Domain 1 Clock Configuration Register **/
#define RCC_D1CFGR			MMIO32(RCC_BASE + 0x18)
/** RCC_D2CFGR RCC Domain 2 Clock Configuration Register **/
#define RCC_D2CFGR			MMIO32(RCC_BASE + 0x1c)
/** RCC_D3CFGR RCC Domain 3 Clock Configuration Register **/
#define RCC_D3CFGR			MMIO32(RCC_BASE + 0x20)
/** RCC_PLLCKSELR RCC PLLs Clock Source Selection Register **/
#define RCC_PLLCKSELR			MMIO32(RCC_BASE + 0x28)
/** RCC_PLLCFGR RCC PLLs Configuration Register **/
#define RCC_PLLCFGR			MMIO32(RCC_BASE + 0x2c)
/** RCC_PLL1DIVR RCC PLL1 Dividers Configuration Register **/
#define RCC_PLL1DIVR			MMIO32(RCC_BASE + 0x30)
/** RCC_PLL1FRACR RCC PLL1 Fractional Divider Register **/
#define RCC_PLL1FRACR			MMIO32(RCC_BASE + 0x34)
/** RCC_PLL2DIVR RCC PLL2 Dividers Configuration Register **/
#define RCC_PLL2DIVR			MMIO32(RCC_BASE + 0x38)
/** RCC_PLL2FRACR RCC PLL2 Fractional Divider Register **/
#define RCC_PLL2FRACR			MMIO32(RCC_BASE + 0x3c)
/** RCC_PLL3DIVR RCC PLL3 Dividers Configuration Register **/
#define RCC_PLL3DIVR			MMIO32(RCC_BASE + 0x40)
/** RCC_PLL3FRACR RCC PLL3 Fractional Divider Register **/
#define RCC_PLL3FRACR			MMIO32(RCC_BASE + 0x44)
/** RCC_D1CCIPR RCC Domain 1 Kernel Clock Configuration Register **/
#define RCC_D1CCIPR			MMIO32(RCC_BASE + 0x4c)
/** RCC_D2CCIP1R RCC Domain 2 Kernel Clock Configuration Register **/
#define RCC_D2CCIP1R			MMIO32(RCC_BASE + 0x50)
/** RCC_D2CCIP2R RCC Domain 2 Kernel Clock Configuration Register **/
#define RCC_D2CCIP2R			MMIO32(RCC_BASE + 0x54)
/** RCC_D3CCIPR RCC Domain 3 Kernel Clock Configuration Register **/
#define RCC_D3CCIPR			MMIO32(RCC_BASE + 0x58)
/** RCC_CIER RCC Clock Source Interrupt Enable Register **/
#define RCC_CIER			MMIO32(RCC_BASE + 0x60)
/** RCC_CIFR RCC Clock Source Interrupt Flag Register **/
#define RCC_CIFR			MMIO32(RCC_BASE + 0x64)
/** RCC_CICR RCC Clock Source Interrupt Clear Register **/
#define RCC_CICR			MMIO32(RCC_BASE + 0x68)
/** RCC_BDCR RCC Backup Domain Control Register **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x70)
/** RCC_CSR RCC Clock Control and Status Register **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x74)
/** RCC_AHB3RSTR RCC AHB3 Reset Register **/
#define RCC_AHB3RSTR			MMIO32(RCC_BASE + 0x7c)
/** RCC_AHB1RSTR RCC AHB1 Peripheral Reset Register **/
#define RCC_AHB1RSTR			MMIO32(RCC_BASE + 0x80)
/** RCC_AHB2RSTR RCC AHB2 Peripheral Reset Register **/
#define RCC_AHB2RSTR			MMIO32(RCC_BASE + 0x84)
/** RCC_AHB4RSTR RCC AHB4 Peripheral Reset Register **/
#define RCC_AHB4RSTR			MMIO32(RCC_BASE + 0x88)
/** RCC_APB3RSTR RCC APB3 Peripheral Reset Register **/
#define RCC_APB3RSTR			MMIO32(RCC_BASE + 0x8c)
/** RCC_APB1LRSTR RCC APB1 Peripheral Reset Register **/
#define RCC_APB1LRSTR			MMIO32(RCC_BASE + 0x90)
/** RCC_APB1HRSTR RCC APB1 Peripheral Reset Register **/
#define RCC_APB1HRSTR			MMIO32(RCC_BASE + 0x94)
/** RCC_APB2RSTR RCC APB2 Peripheral Reset Register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + 0x98)
/** RCC_APB4RSTR RCC APB4 Peripheral Reset Register **/
#define RCC_APB4RSTR			MMIO32(RCC_BASE + 0x9c)
/** RCC_GCR RCC Global Control Register **/
#define RCC_GCR			MMIO32(RCC_BASE + 0xa0)
/** RCC_D3AMR RCC D3 Autonomous mode Register **/
#define RCC_D3AMR			MMIO32(RCC_BASE + 0xa8)
/** RCC_RSR RCC Reset Status Register **/
#define RCC_RSR			MMIO32(RCC_BASE + 0xd0)
/** RCC_AHB3ENR RCC AHB3 Clock Register **/
#define RCC_AHB3ENR			MMIO32(RCC_BASE + 0xd4)
/** RCC_AHB1ENR RCC AHB1 Clock Register **/
#define RCC_AHB1ENR			MMIO32(RCC_BASE + 0xd8)
/** RCC_AHB2ENR RCC AHB2 Clock Register **/
#define RCC_AHB2ENR			MMIO32(RCC_BASE + 0xdc)
/** RCC_AHB4ENR RCC AHB4 Clock Register **/
#define RCC_AHB4ENR			MMIO32(RCC_BASE + 0xe0)
/** RCC_APB3ENR RCC APB3 Clock Register **/
#define RCC_APB3ENR			MMIO32(RCC_BASE + 0xe4)
/** RCC_APB1LENR RCC APB1 Clock Register **/
#define RCC_APB1LENR			MMIO32(RCC_BASE + 0xe8)
/** RCC_APB1HENR RCC APB1 Clock Register **/
#define RCC_APB1HENR			MMIO32(RCC_BASE + 0xec)
/** RCC_APB2ENR RCC APB2 Clock Register **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + 0xf0)
/** RCC_APB4ENR RCC APB4 Clock Register **/
#define RCC_APB4ENR			MMIO32(RCC_BASE + 0xf4)
/** RCC_AHB3LPENR RCC AHB3 Sleep Clock Register **/
#define RCC_AHB3LPENR			MMIO32(RCC_BASE + 0xfc)
/** RCC_AHB1LPENR RCC AHB1 Sleep Clock Register **/
#define RCC_AHB1LPENR			MMIO32(RCC_BASE + 0x100)
/** RCC_AHB2LPENR RCC AHB2 Sleep Clock Register **/
#define RCC_AHB2LPENR			MMIO32(RCC_BASE + 0x104)
/** RCC_AHB4LPENR RCC AHB4 Sleep Clock Register **/
#define RCC_AHB4LPENR			MMIO32(RCC_BASE + 0x108)
/** RCC_APB3LPENR RCC APB3 Sleep Clock Register **/
#define RCC_APB3LPENR			MMIO32(RCC_BASE + 0x10c)
/** RCC_APB1LLPENR RCC APB1 Low Sleep Clock Register **/
#define RCC_APB1LLPENR			MMIO32(RCC_BASE + 0x110)
/** RCC_APB1HLPENR RCC APB1 High Sleep Clock Register **/
#define RCC_APB1HLPENR			MMIO32(RCC_BASE + 0x114)
/** RCC_APB2LPENR RCC APB2 Sleep Clock Register **/
#define RCC_APB2LPENR			MMIO32(RCC_BASE + 0x118)
/** RCC_APB4LPENR RCC APB4 Sleep Clock Register **/
#define RCC_APB4LPENR			MMIO32(RCC_BASE + 0x11c)
/** RCC_C1_RSR RCC Reset Status Register **/
#define RCC_C1_RSR			MMIO32(RCC_BASE + 0x130)
/** RCC_C1_AHB3ENR RCC AHB3 Clock Register **/
#define RCC_C1_AHB3ENR			MMIO32(RCC_BASE + 0x134)
/** RCC_C1_AHB1ENR RCC AHB1 Clock Register **/
#define RCC_C1_AHB1ENR			MMIO32(RCC_BASE + 0x138)
/** RCC_C1_AHB2ENR RCC AHB2 Clock Register **/
#define RCC_C1_AHB2ENR			MMIO32(RCC_BASE + 0x13c)
/** RCC_C1_AHB4ENR RCC AHB4 Clock Register **/
#define RCC_C1_AHB4ENR			MMIO32(RCC_BASE + 0x140)
/** RCC_C1_APB3ENR RCC APB3 Clock Register **/
#define RCC_C1_APB3ENR			MMIO32(RCC_BASE + 0x144)
/** RCC_C1_APB1LENR RCC APB1 Clock Register **/
#define RCC_C1_APB1LENR			MMIO32(RCC_BASE + 0x148)
/** RCC_C1_APB1HENR RCC APB1 Clock Register **/
#define RCC_C1_APB1HENR			MMIO32(RCC_BASE + 0x14c)
/** RCC_C1_APB2ENR RCC APB2 Clock Register **/
#define RCC_C1_APB2ENR			MMIO32(RCC_BASE + 0x150)
/** RCC_C1_APB4ENR RCC APB4 Clock Register **/
#define RCC_C1_APB4ENR			MMIO32(RCC_BASE + 0x154)
/** RCC_C1_AHB3LPENR RCC AHB3 Sleep Clock Register **/
#define RCC_C1_AHB3LPENR			MMIO32(RCC_BASE + 0x15c)
/** RCC_C1_AHB1LPENR RCC AHB1 Sleep Clock Register **/
#define RCC_C1_AHB1LPENR			MMIO32(RCC_BASE + 0x160)
/** RCC_C1_AHB2LPENR RCC AHB2 Sleep Clock Register **/
#define RCC_C1_AHB2LPENR			MMIO32(RCC_BASE + 0x164)
/** RCC_C1_AHB4LPENR RCC AHB4 Sleep Clock Register **/
#define RCC_C1_AHB4LPENR			MMIO32(RCC_BASE + 0x168)
/** RCC_C1_APB3LPENR RCC APB3 Sleep Clock Register **/
#define RCC_C1_APB3LPENR			MMIO32(RCC_BASE + 0x16c)
/** RCC_C1_APB1LLPENR RCC APB1 Low Sleep Clock Register **/
#define RCC_C1_APB1LLPENR			MMIO32(RCC_BASE + 0x170)
/** RCC_C1_APB1HLPENR RCC APB1 High Sleep Clock Register **/
#define RCC_C1_APB1HLPENR			MMIO32(RCC_BASE + 0x174)
/** RCC_C1_APB2LPENR RCC APB2 Sleep Clock Register **/
#define RCC_C1_APB2LPENR			MMIO32(RCC_BASE + 0x178)
/** RCC_C1_APB4LPENR RCC APB4 Sleep Clock Register **/
#define RCC_C1_APB4LPENR			MMIO32(RCC_BASE + 0x17c)

/**@}*/


/** @defgroup rcc_cr CR clock control register
@{*/

/** RCC_CR_PLL3RDY PLL3 clock ready flag **/
#define RCC_CR_PLL3RDY		(1 << 29)
/** RCC_CR_PLL3ON PLL3 enable **/
#define RCC_CR_PLL3ON		(1 << 28)
/** RCC_CR_PLL2RDY PLL2 clock ready flag **/
#define RCC_CR_PLL2RDY		(1 << 27)
/** RCC_CR_PLL2ON PLL2 enable **/
#define RCC_CR_PLL2ON		(1 << 26)
/** RCC_CR_PLL1RDY PLL1 clock ready flag **/
#define RCC_CR_PLL1RDY		(1 << 25)
/** RCC_CR_PLL1ON PLL1 enable **/
#define RCC_CR_PLL1ON		(1 << 24)
/** RCC_CR_HSECSSON HSE Clock Security System enable **/
#define RCC_CR_HSECSSON		(1 << 19)
/** RCC_CR_HSEBYP HSE clock bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)
/** RCC_CR_D2CKRDY D2 domain clocks ready flag **/
#define RCC_CR_D2CKRDY		(1 << 15)
/** RCC_CR_D1CKRDY D1 domain clocks ready flag **/
#define RCC_CR_D1CKRDY		(1 << 14)
/** RCC_CR_RC48RDY RC48 clock ready flag **/
#define RCC_CR_RC48RDY		(1 << 13)
/** RCC_CR_RC48ON RC48 clock enable **/
#define RCC_CR_RC48ON		(1 << 12)
/** RCC_CR_CSIKERON CSI clock enable in Stop mode **/
#define RCC_CR_CSIKERON		(1 << 9)
/** RCC_CR_CSIRDY CSI clock ready flag **/
#define RCC_CR_CSIRDY		(1 << 8)
/** RCC_CR_CSION CSI clock enable **/
#define RCC_CR_CSION		(1 << 7)
/** RCC_CR_HSIDIVF HSI divider flag **/
#define RCC_CR_HSIDIVF		(1 << 5)

#define RCC_CR_HSIDIV_SHIFT		3
#define RCC_CR_HSIDIV_MASK		0x03
/** @defgroup rcc_cr_hsidiv HSIDIV HSI clock divider
@{*/
/**@}*/

/** RCC_CR_HSIRDY HSI clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 2)
/** RCC_CR_HSIKERON High Speed Internal clock enable in Stop mode **/
#define RCC_CR_HSIKERON		(1 << 1)
/** RCC_CR_HSION Internal high-speed clock enable **/
#define RCC_CR_HSION		(1 << 0)

/**@}*/

/** @defgroup rcc_hsicfgr HSICFGR RCC Internal Clock Source Calibration Register
@{*/


#define RCC_HSICFGR_HSITRIM_SHIFT		24
#define RCC_HSICFGR_HSITRIM_MASK		0x7f
/** @defgroup rcc_hsicfgr_hsitrim HSITRIM HSI clock trimming
@{*/
/**@}*/


#define RCC_HSICFGR_HSICAL_SHIFT		0
#define RCC_HSICFGR_HSICAL_MASK		0xfff
/** @defgroup rcc_hsicfgr_hsical HSICAL HSI clock calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_crrcr CRRCR RCC Clock Recovery RC Register
@{*/


#define RCC_CRRCR_HSI48CAL_SHIFT		0
#define RCC_CRRCR_HSI48CAL_MASK		0x3ff
/** @defgroup rcc_crrcr_hsi48cal HSI48CAL Internal RC 48 MHz clock calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_csicfgr CSICFGR RCC CSI configuration register
@{*/


#define RCC_CSICFGR_CSITRIM_SHIFT		24
#define RCC_CSICFGR_CSITRIM_MASK		0x3f
/** @defgroup rcc_csicfgr_csitrim CSITRIM CSI clock trimming
@{*/
/**@}*/


#define RCC_CSICFGR_CSICAL_SHIFT		0
#define RCC_CSICFGR_CSICAL_MASK		0x3ff
/** @defgroup rcc_csicfgr_csical CSICAL CSI clock calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cfgr CFGR RCC Clock Configuration Register
@{*/


#define RCC_CFGR_MCO2SEL_SHIFT		29
#define RCC_CFGR_MCO2SEL_MASK		0x07
/** @defgroup rcc_cfgr_mco2sel MCO2SEL Micro-controller clock output 2
@{*/
/**@}*/


#define RCC_CFGR_MCO2PRE_SHIFT		25
#define RCC_CFGR_MCO2PRE_MASK		0x0f
/** @defgroup rcc_cfgr_mco2pre MCO2PRE MCO2 prescaler
@{*/
/**@}*/


#define RCC_CFGR_MCO1SEL_SHIFT		22
#define RCC_CFGR_MCO1SEL_MASK		0x07
/** @defgroup rcc_cfgr_mco1sel MCO1SEL Micro-controller clock output 1
@{*/
/**@}*/


#define RCC_CFGR_MCO1PRE_SHIFT		18
#define RCC_CFGR_MCO1PRE_MASK		0x0f
/** @defgroup rcc_cfgr_mco1pre MCO1PRE MCO1 prescaler
@{*/
/**@}*/

/** RCC_CFGR_TIMPRE Timers clocks prescaler selection **/
#define RCC_CFGR_TIMPRE		(1 << 15)
/** RCC_CFGR_HRTIMSEL High Resolution Timer clock prescaler selection **/
#define RCC_CFGR_HRTIMSEL		(1 << 14)

#define RCC_CFGR_RTCPRE_SHIFT		8
#define RCC_CFGR_RTCPRE_MASK		0x3f
/** @defgroup rcc_cfgr_rtcpre RTCPRE HSE division factor for RTC clock
@{*/
/**@}*/

/** RCC_CFGR_STOPKERWUCK Kernel clock selection after a wake up from system Stop **/
#define RCC_CFGR_STOPKERWUCK		(1 << 7)
/** RCC_CFGR_STOPWUCK System clock selection after a wake up from system Stop **/
#define RCC_CFGR_STOPWUCK		(1 << 6)

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

/** @defgroup rcc_d1cfgr D1CFGR RCC Domain 1 Clock Configuration Register
@{*/


#define RCC_D1CFGR_D1CPRE_SHIFT		8
#define RCC_D1CFGR_D1CPRE_MASK		0x0f
/** @defgroup rcc_d1cfgr_d1cpre D1CPRE D1 domain Core prescaler
@{*/
/**@}*/


#define RCC_D1CFGR_D1PPRE_SHIFT		4
#define RCC_D1CFGR_D1PPRE_MASK		0x07
/** @defgroup rcc_d1cfgr_d1ppre D1PPRE D1 domain APB3 prescaler
@{*/
/**@}*/


#define RCC_D1CFGR_HPRE_SHIFT		0
#define RCC_D1CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_d1cfgr_hpre HPRE D1 domain AHB prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d2cfgr D2CFGR RCC Domain 2 Clock Configuration Register
@{*/


#define RCC_D2CFGR_D2PPRE2_SHIFT		8
#define RCC_D2CFGR_D2PPRE2_MASK		0x07
/** @defgroup rcc_d2cfgr_d2ppre2 D2PPRE2 D2 domain APB2 prescaler
@{*/
/**@}*/


#define RCC_D2CFGR_D2PPRE1_SHIFT		4
#define RCC_D2CFGR_D2PPRE1_MASK		0x07
/** @defgroup rcc_d2cfgr_d2ppre1 D2PPRE1 D2 domain APB1 prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d3cfgr D3CFGR RCC Domain 3 Clock Configuration Register
@{*/

/** RCC_D3CFGR_AXISRAMEN AXISRAM block enable **/
#define RCC_D3CFGR_AXISRAMEN		(1 << 31)
/** RCC_D3CFGR_ITCM1EN D1 ITCM block enable **/
#define RCC_D3CFGR_ITCM1EN		(1 << 30)
/** RCC_D3CFGR_DTCM2EN D1 DTCM2 block enable **/
#define RCC_D3CFGR_DTCM2EN		(1 << 29)
/** RCC_D3CFGR_DTCM1EN D1 DTCM1 block enable **/
#define RCC_D3CFGR_DTCM1EN		(1 << 28)
/** RCC_D3CFGR_SDMMC1EN SDMMC1 and SDMMC1 Delay Clock Enable **/
#define RCC_D3CFGR_SDMMC1EN		(1 << 16)
/** RCC_D3CFGR_QSPIEN QUADSPI and QUADSPI Delay Clock Enable **/
#define RCC_D3CFGR_QSPIEN		(1 << 14)
/** RCC_D3CFGR_FMCEN FMC Peripheral Clocks Enable **/
#define RCC_D3CFGR_FMCEN		(1 << 12)
/** RCC_D3CFGR_JPGDECEN JPGDEC Peripheral Clock Enable **/
#define RCC_D3CFGR_JPGDECEN		(1 << 5)
/** RCC_D3CFGR_DMA2DEN DMA2D Peripheral Clock Enable **/
#define RCC_D3CFGR_DMA2DEN		(1 << 4)
/** RCC_D3CFGR_MDMAEN MDMA Peripheral Clock Enable **/
#define RCC_D3CFGR_MDMAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_pllckselr PLLCKSELR RCC PLLs Clock Source Selection Register
@{*/


#define RCC_PLLCKSELR_DIVM3_SHIFT		20
#define RCC_PLLCKSELR_DIVM3_MASK		0x3f
/** @defgroup rcc_pllckselr_divm3 DIVM3 Prescaler for PLL3
@{*/
/**@}*/


#define RCC_PLLCKSELR_DIVM2_SHIFT		12
#define RCC_PLLCKSELR_DIVM2_MASK		0x3f
/** @defgroup rcc_pllckselr_divm2 DIVM2 Prescaler for PLL2
@{*/
/**@}*/


#define RCC_PLLCKSELR_DIVM1_SHIFT		4
#define RCC_PLLCKSELR_DIVM1_MASK		0x3f
/** @defgroup rcc_pllckselr_divm1 DIVM1 Prescaler for PLL1
@{*/
/**@}*/


#define RCC_PLLCKSELR_PLLSRC_SHIFT		0
#define RCC_PLLCKSELR_PLLSRC_MASK		0x03
/** @defgroup rcc_pllckselr_pllsrc PLLSRC DIVMx and PLLs clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pllcfgr PLLCFGR RCC PLLs Configuration Register
@{*/

/** RCC_PLLCFGR_DIVR3EN PLL3 DIVR divider output enable **/
#define RCC_PLLCFGR_DIVR3EN		(1 << 24)
/** RCC_PLLCFGR_DIVQ3EN PLL3 DIVQ divider output enable **/
#define RCC_PLLCFGR_DIVQ3EN		(1 << 23)
/** RCC_PLLCFGR_DIVP3EN PLL3 DIVP divider output enable **/
#define RCC_PLLCFGR_DIVP3EN		(1 << 22)
/** RCC_PLLCFGR_DIVR2EN PLL2 DIVR divider output enable **/
#define RCC_PLLCFGR_DIVR2EN		(1 << 21)
/** RCC_PLLCFGR_DIVQ2EN PLL2 DIVQ divider output enable **/
#define RCC_PLLCFGR_DIVQ2EN		(1 << 20)
/** RCC_PLLCFGR_DIVP2EN PLL2 DIVP divider output enable **/
#define RCC_PLLCFGR_DIVP2EN		(1 << 19)
/** RCC_PLLCFGR_DIVR1EN PLL1 DIVR divider output enable **/
#define RCC_PLLCFGR_DIVR1EN		(1 << 18)
/** RCC_PLLCFGR_DIVQ1EN PLL1 DIVQ divider output enable **/
#define RCC_PLLCFGR_DIVQ1EN		(1 << 17)
/** RCC_PLLCFGR_DIVP1EN PLL1 DIVP divider output enable **/
#define RCC_PLLCFGR_DIVP1EN		(1 << 16)

#define RCC_PLLCFGR_PLL3RGE_SHIFT		10
#define RCC_PLLCFGR_PLL3RGE_MASK		0x03
/** @defgroup rcc_pllcfgr_pll3rge PLL3RGE PLL3 input frequency range
@{*/
/**@}*/

/** RCC_PLLCFGR_PLL3VCOSEL PLL3 VCO selection **/
#define RCC_PLLCFGR_PLL3VCOSEL		(1 << 9)
/** RCC_PLLCFGR_PLL3FRACEN PLL3 fractional latch enable **/
#define RCC_PLLCFGR_PLL3FRACEN		(1 << 8)

#define RCC_PLLCFGR_PLL2RGE_SHIFT		6
#define RCC_PLLCFGR_PLL2RGE_MASK		0x03
/** @defgroup rcc_pllcfgr_pll2rge PLL2RGE PLL2 input frequency range
@{*/
/**@}*/

/** RCC_PLLCFGR_PLL2VCOSEL PLL2 VCO selection **/
#define RCC_PLLCFGR_PLL2VCOSEL		(1 << 5)
/** RCC_PLLCFGR_PLL2FRACEN PLL2 fractional latch enable **/
#define RCC_PLLCFGR_PLL2FRACEN		(1 << 4)

#define RCC_PLLCFGR_PLL1RGE_SHIFT		2
#define RCC_PLLCFGR_PLL1RGE_MASK		0x03
/** @defgroup rcc_pllcfgr_pll1rge PLL1RGE PLL1 input frequency range
@{*/
/**@}*/

/** RCC_PLLCFGR_PLL1VCOSEL PLL1 VCO selection **/
#define RCC_PLLCFGR_PLL1VCOSEL		(1 << 1)
/** RCC_PLLCFGR_PLL1FRACEN PLL1 fractional latch enable **/
#define RCC_PLLCFGR_PLL1FRACEN		(1 << 0)

/**@}*/

/** @defgroup rcc_pll1divr PLL1DIVR RCC PLL1 Dividers Configuration Register
@{*/


#define RCC_PLL1DIVR_DIVR1_SHIFT		24
#define RCC_PLL1DIVR_DIVR1_MASK		0x7f
/** @defgroup rcc_pll1divr_divr1 DIVR1 PLL1 DIVR division factor
@{*/
/**@}*/


#define RCC_PLL1DIVR_DIVQ1_SHIFT		16
#define RCC_PLL1DIVR_DIVQ1_MASK		0x7f
/** @defgroup rcc_pll1divr_divq1 DIVQ1 PLL1 DIVQ division factor
@{*/
/**@}*/


#define RCC_PLL1DIVR_DIVP1_SHIFT		9
#define RCC_PLL1DIVR_DIVP1_MASK		0x7f
/** @defgroup rcc_pll1divr_divp1 DIVP1 PLL1 DIVP division factor
@{*/
/**@}*/


#define RCC_PLL1DIVR_DIVN1_SHIFT		0
#define RCC_PLL1DIVR_DIVN1_MASK		0x1ff
/** @defgroup rcc_pll1divr_divn1 DIVN1 Multiplication factor for PLL1 VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pll1fracr PLL1FRACR RCC PLL1 Fractional Divider Register
@{*/


#define RCC_PLL1FRACR_FRACN1_SHIFT		3
#define RCC_PLL1FRACR_FRACN1_MASK		0x1fff
/** @defgroup rcc_pll1fracr_fracn1 FRACN1 Fractional part of the multiplication factor for PLL1 VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pll2divr PLL2DIVR RCC PLL2 Dividers Configuration Register
@{*/


#define RCC_PLL2DIVR_DIVR1_SHIFT		24
#define RCC_PLL2DIVR_DIVR1_MASK		0x7f
/** @defgroup rcc_pll2divr_divr1 DIVR1 PLL1 DIVR division factor
@{*/
/**@}*/


#define RCC_PLL2DIVR_DIVQ1_SHIFT		16
#define RCC_PLL2DIVR_DIVQ1_MASK		0x7f
/** @defgroup rcc_pll2divr_divq1 DIVQ1 PLL1 DIVQ division factor
@{*/
/**@}*/


#define RCC_PLL2DIVR_DIVP1_SHIFT		9
#define RCC_PLL2DIVR_DIVP1_MASK		0x7f
/** @defgroup rcc_pll2divr_divp1 DIVP1 PLL1 DIVP division factor
@{*/
/**@}*/


#define RCC_PLL2DIVR_DIVN1_SHIFT		0
#define RCC_PLL2DIVR_DIVN1_MASK		0x1ff
/** @defgroup rcc_pll2divr_divn1 DIVN1 Multiplication factor for PLL1 VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pll2fracr PLL2FRACR RCC PLL2 Fractional Divider Register
@{*/


#define RCC_PLL2FRACR_FRACN2_SHIFT		3
#define RCC_PLL2FRACR_FRACN2_MASK		0x1fff
/** @defgroup rcc_pll2fracr_fracn2 FRACN2 Fractional part of the multiplication factor for PLL VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pll3divr PLL3DIVR RCC PLL3 Dividers Configuration Register
@{*/


#define RCC_PLL3DIVR_DIVR3_SHIFT		24
#define RCC_PLL3DIVR_DIVR3_MASK		0x7f
/** @defgroup rcc_pll3divr_divr3 DIVR3 PLL DIVR division factor
@{*/
/**@}*/


#define RCC_PLL3DIVR_DIVQ3_SHIFT		16
#define RCC_PLL3DIVR_DIVQ3_MASK		0x7f
/** @defgroup rcc_pll3divr_divq3 DIVQ3 PLL DIVQ division factor
@{*/
/**@}*/


#define RCC_PLL3DIVR_DIVP3_SHIFT		9
#define RCC_PLL3DIVR_DIVP3_MASK		0x7f
/** @defgroup rcc_pll3divr_divp3 DIVP3 PLL DIVP division factor
@{*/
/**@}*/


#define RCC_PLL3DIVR_DIVN3_SHIFT		0
#define RCC_PLL3DIVR_DIVN3_MASK		0x1ff
/** @defgroup rcc_pll3divr_divn3 DIVN3 Multiplication factor for PLL1 VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_pll3fracr PLL3FRACR RCC PLL3 Fractional Divider Register
@{*/


#define RCC_PLL3FRACR_FRACN3_SHIFT		3
#define RCC_PLL3FRACR_FRACN3_MASK		0x1fff
/** @defgroup rcc_pll3fracr_fracn3 FRACN3 Fractional part of the multiplication factor for PLL3 VCO
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d1ccipr D1CCIPR RCC Domain 1 Kernel Clock Configuration Register
@{*/


#define RCC_D1CCIPR_CKPERSRC_SHIFT		28
#define RCC_D1CCIPR_CKPERSRC_MASK		0x03
/** @defgroup rcc_d1ccipr_ckpersrc CKPERSRC per_ck clock source selection
@{*/
/**@}*/

/** RCC_D1CCIPR_SDMMCSRC SDMMC kernel clock source selection **/
#define RCC_D1CCIPR_SDMMCSRC		(1 << 16)
/** RCC_D1CCIPR_DSISEL kernel clock source selection **/
#define RCC_D1CCIPR_DSISEL		(1 << 8)

#define RCC_D1CCIPR_QSPISRC_SHIFT		4
#define RCC_D1CCIPR_QSPISRC_MASK		0x03
/** @defgroup rcc_d1ccipr_qspisrc QSPISRC QUADSPI kernel clock source selection
@{*/
/**@}*/


#define RCC_D1CCIPR_FMCSRC_SHIFT		0
#define RCC_D1CCIPR_FMCSRC_MASK		0x03
/** @defgroup rcc_d1ccipr_fmcsrc FMCSRC FMC kernel clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d2ccip1r D2CCIP1R RCC Domain 2 Kernel Clock Configuration Register
@{*/

/** RCC_D2CCIP1R_SWPSRC SWPMI kernel clock source selection **/
#define RCC_D2CCIP1R_SWPSRC		(1 << 31)

#define RCC_D2CCIP1R_FDCANSRC_SHIFT		28
#define RCC_D2CCIP1R_FDCANSRC_MASK		0x03
/** @defgroup rcc_d2ccip1r_fdcansrc FDCANSRC FDCAN kernel clock source selection
@{*/
/**@}*/

/** RCC_D2CCIP1R_DFSDM1SRC DFSDM1 kernel Clk clock source selection **/
#define RCC_D2CCIP1R_DFSDM1SRC		(1 << 24)

#define RCC_D2CCIP1R_SPDIFSRC_SHIFT		20
#define RCC_D2CCIP1R_SPDIFSRC_MASK		0x03
/** @defgroup rcc_d2ccip1r_spdifsrc SPDIFSRC SPDIFRX kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP1R_SPI45SRC_SHIFT		16
#define RCC_D2CCIP1R_SPI45SRC_MASK		0x07
/** @defgroup rcc_d2ccip1r_spi45src SPI45SRC SPI4 and 5 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP1R_SPI123SRC_SHIFT		12
#define RCC_D2CCIP1R_SPI123SRC_MASK		0x07
/** @defgroup rcc_d2ccip1r_spi123src SPI123SRC SPI/I2S1,2 and 3 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP1R_SAI23SRC_SHIFT		6
#define RCC_D2CCIP1R_SAI23SRC_MASK		0x07
/** @defgroup rcc_d2ccip1r_sai23src SAI23SRC SAI2 and SAI3 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP1R_SAI1SRC_SHIFT		0
#define RCC_D2CCIP1R_SAI1SRC_MASK		0x07
/** @defgroup rcc_d2ccip1r_sai1src SAI1SRC SAI1 and DFSDM1 kernel Aclk clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d2ccip2r D2CCIP2R RCC Domain 2 Kernel Clock Configuration Register
@{*/


#define RCC_D2CCIP2R_LPTIM1SRC_SHIFT		28
#define RCC_D2CCIP2R_LPTIM1SRC_MASK		0x07
/** @defgroup rcc_d2ccip2r_lptim1src LPTIM1SRC LPTIM1 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_CECSRC_SHIFT		22
#define RCC_D2CCIP2R_CECSRC_MASK		0x03
/** @defgroup rcc_d2ccip2r_cecsrc CECSRC HDMI-CEC kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_USBSRC_SHIFT		20
#define RCC_D2CCIP2R_USBSRC_MASK		0x03
/** @defgroup rcc_d2ccip2r_usbsrc USBSRC USBOTG 1 and 2 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_I2C123SRC_SHIFT		12
#define RCC_D2CCIP2R_I2C123SRC_MASK		0x03
/** @defgroup rcc_d2ccip2r_i2c123src I2C123SRC I2C1,2,3 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_RNGSRC_SHIFT		8
#define RCC_D2CCIP2R_RNGSRC_MASK		0x03
/** @defgroup rcc_d2ccip2r_rngsrc RNGSRC RNG kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_USART16SRC_SHIFT		3
#define RCC_D2CCIP2R_USART16SRC_MASK		0x07
/** @defgroup rcc_d2ccip2r_usart16src USART16SRC USART1 and 6 kernel clock source selection
@{*/
/**@}*/


#define RCC_D2CCIP2R_USART234578SRC_SHIFT		0
#define RCC_D2CCIP2R_USART234578SRC_MASK		0x07
/** @defgroup rcc_d2ccip2r_usart234578src USART234578SRC USART2/3, UART4,5, 7/8 (APB1) kernel clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_d3ccipr D3CCIPR RCC Domain 3 Kernel Clock Configuration Register
@{*/


#define RCC_D3CCIPR_SPI6SRC_SHIFT		28
#define RCC_D3CCIPR_SPI6SRC_MASK		0x07
/** @defgroup rcc_d3ccipr_spi6src SPI6SRC SPI6 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_SAI4BSRC_SHIFT		24
#define RCC_D3CCIPR_SAI4BSRC_MASK		0x07
/** @defgroup rcc_d3ccipr_sai4bsrc SAI4BSRC Sub-Block B of SAI4 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_SAI4ASRC_SHIFT		21
#define RCC_D3CCIPR_SAI4ASRC_MASK		0x07
/** @defgroup rcc_d3ccipr_sai4asrc SAI4ASRC Sub-Block A of SAI4 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_ADCSRC_SHIFT		16
#define RCC_D3CCIPR_ADCSRC_MASK		0x03
/** @defgroup rcc_d3ccipr_adcsrc ADCSRC SAR ADC kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_LPTIM345SRC_SHIFT		13
#define RCC_D3CCIPR_LPTIM345SRC_MASK		0x07
/** @defgroup rcc_d3ccipr_lptim345src LPTIM345SRC LPTIM3,4,5 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_LPTIM2SRC_SHIFT		10
#define RCC_D3CCIPR_LPTIM2SRC_MASK		0x07
/** @defgroup rcc_d3ccipr_lptim2src LPTIM2SRC LPTIM2 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_I2C4SRC_SHIFT		8
#define RCC_D3CCIPR_I2C4SRC_MASK		0x03
/** @defgroup rcc_d3ccipr_i2c4src I2C4SRC I2C4 kernel clock source selection
@{*/
/**@}*/


#define RCC_D3CCIPR_LPUART1SRC_SHIFT		0
#define RCC_D3CCIPR_LPUART1SRC_MASK		0x07
/** @defgroup rcc_d3ccipr_lpuart1src LPUART1SRC LPUART1 kernel clock source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rcc_cier CIER RCC Clock Source Interrupt Enable Register
@{*/

/** RCC_CIER_LSECSSIE LSE clock security system Interrupt Enable **/
#define RCC_CIER_LSECSSIE		(1 << 9)
/** RCC_CIER_PLL3RDYIE PLL3 ready Interrupt Enable **/
#define RCC_CIER_PLL3RDYIE		(1 << 8)
/** RCC_CIER_PLL2RDYIE PLL2 ready Interrupt Enable **/
#define RCC_CIER_PLL2RDYIE		(1 << 7)
/** RCC_CIER_PLL1RDYIE PLL1 ready Interrupt Enable **/
#define RCC_CIER_PLL1RDYIE		(1 << 6)
/** RCC_CIER_RC48RDYIE RC48 ready Interrupt Enable **/
#define RCC_CIER_RC48RDYIE		(1 << 5)
/** RCC_CIER_CSIRDYIE CSI ready Interrupt Enable **/
#define RCC_CIER_CSIRDYIE		(1 << 4)
/** RCC_CIER_HSERDYIE HSE ready Interrupt Enable **/
#define RCC_CIER_HSERDYIE		(1 << 3)
/** RCC_CIER_HSIRDYIE HSI ready Interrupt Enable **/
#define RCC_CIER_HSIRDYIE		(1 << 2)
/** RCC_CIER_LSERDYIE LSE ready Interrupt Enable **/
#define RCC_CIER_LSERDYIE		(1 << 1)
/** RCC_CIER_LSIRDYIE LSI ready Interrupt Enable **/
#define RCC_CIER_LSIRDYIE		(1 << 0)

/**@}*/

/** @defgroup rcc_cifr CIFR RCC Clock Source Interrupt Flag Register
@{*/

/** RCC_CIFR_HSECSSF HSE clock security system Interrupt Flag **/
#define RCC_CIFR_HSECSSF		(1 << 10)
/** RCC_CIFR_LSECSSF LSE clock security system Interrupt Flag **/
#define RCC_CIFR_LSECSSF		(1 << 9)
/** RCC_CIFR_PLL3RDYF PLL3 ready Interrupt Flag **/
#define RCC_CIFR_PLL3RDYF		(1 << 8)
/** RCC_CIFR_PLL2RDYF PLL2 ready Interrupt Flag **/
#define RCC_CIFR_PLL2RDYF		(1 << 7)
/** RCC_CIFR_PLL1RDYF PLL1 ready Interrupt Flag **/
#define RCC_CIFR_PLL1RDYF		(1 << 6)
/** RCC_CIFR_RC48RDYF RC48 ready Interrupt Flag **/
#define RCC_CIFR_RC48RDYF		(1 << 5)
/** RCC_CIFR_CSIRDY CSI ready Interrupt Flag **/
#define RCC_CIFR_CSIRDY		(1 << 4)
/** RCC_CIFR_HSERDYF HSE ready Interrupt Flag **/
#define RCC_CIFR_HSERDYF		(1 << 3)
/** RCC_CIFR_HSIRDYF HSI ready Interrupt Flag **/
#define RCC_CIFR_HSIRDYF		(1 << 2)
/** RCC_CIFR_LSERDYF LSE ready Interrupt Flag **/
#define RCC_CIFR_LSERDYF		(1 << 1)
/** RCC_CIFR_LSIRDYF LSI ready Interrupt Flag **/
#define RCC_CIFR_LSIRDYF		(1 << 0)

/**@}*/

/** @defgroup rcc_cicr CICR RCC Clock Source Interrupt Clear Register
@{*/

/** RCC_CICR_HSECSSC HSE clock security system Interrupt Clear **/
#define RCC_CICR_HSECSSC		(1 << 10)
/** RCC_CICR_LSECSSC LSE clock security system Interrupt Clear **/
#define RCC_CICR_LSECSSC		(1 << 9)
/** RCC_CICR_PLL3RDYC PLL3 ready Interrupt Clear **/
#define RCC_CICR_PLL3RDYC		(1 << 8)
/** RCC_CICR_PLL2RDYC PLL2 ready Interrupt Clear **/
#define RCC_CICR_PLL2RDYC		(1 << 7)
/** RCC_CICR_PLL1RDYC PLL1 ready Interrupt Clear **/
#define RCC_CICR_PLL1RDYC		(1 << 6)
/** RCC_CICR_RC48RDYC RC48 ready Interrupt Clear **/
#define RCC_CICR_RC48RDYC		(1 << 5)
/** RCC_CICR_HSE_ready_Interrupt_Clear CSI ready Interrupt Clear **/
#define RCC_CICR_HSE_ready_Interrupt_Clear		(1 << 4)
/** RCC_CICR_HSERDYC HSE ready Interrupt Clear **/
#define RCC_CICR_HSERDYC		(1 << 3)
/** RCC_CICR_HSIRDYC HSI ready Interrupt Clear **/
#define RCC_CICR_HSIRDYC		(1 << 2)
/** RCC_CICR_LSERDYC LSE ready Interrupt Clear **/
#define RCC_CICR_LSERDYC		(1 << 1)
/** RCC_CICR_LSIRDYC LSI ready Interrupt Clear **/
#define RCC_CICR_LSIRDYC		(1 << 0)

/**@}*/

/** @defgroup rcc_bdcr BDCR RCC Backup Domain Control Register
@{*/

/** RCC_BDCR_VSWRST VSwitch domain software reset **/
#define RCC_BDCR_VSWRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSRC_SHIFT		8
#define RCC_BDCR_RTCSRC_MASK		0x03
/** @defgroup rcc_bdcr_rtcsrc RTCSRC RTC clock source selection
@{*/
/**@}*/

/** RCC_BDCR_LSECSSD LSE clock security system failure detection **/
#define RCC_BDCR_LSECSSD		(1 << 6)
/** RCC_BDCR_LSECSSON LSE clock security system enable **/
#define RCC_BDCR_LSECSSON		(1 << 5)

#define RCC_BDCR_LSEDRV_SHIFT		3
#define RCC_BDCR_LSEDRV_MASK		0x03
/** @defgroup rcc_bdcr_lsedrv LSEDRV LSE oscillator driving capability
@{*/
/**@}*/

/** RCC_BDCR_LSEBYP LSE oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY LSE oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON LSE oscillator enabled **/
#define RCC_BDCR_LSEON		(1 << 0)

/**@}*/

/** @defgroup rcc_csr CSR RCC Clock Control and Status Register
@{*/

/** RCC_CSR_LSIRDY LSI oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION LSI oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb3rstr AHB3RSTR RCC AHB3 Reset Register
@{*/

/** RCC_AHB3RSTR_SDMMC1RST SDMMC1 and SDMMC1 delay block reset **/
#define RCC_AHB3RSTR_SDMMC1RST		(1 << 16)
/** RCC_AHB3RSTR_QSPIRST QUADSPI and QUADSPI delay block reset **/
#define RCC_AHB3RSTR_QSPIRST		(1 << 14)
/** RCC_AHB3RSTR_FMCRST FMC block reset **/
#define RCC_AHB3RSTR_FMCRST		(1 << 12)
/** RCC_AHB3RSTR_JPGDECRST JPGDEC block reset **/
#define RCC_AHB3RSTR_JPGDECRST		(1 << 5)
/** RCC_AHB3RSTR_DMA2DRST DMA2D block reset **/
#define RCC_AHB3RSTR_DMA2DRST		(1 << 4)
/** RCC_AHB3RSTR_MDMARST MDMA block reset **/
#define RCC_AHB3RSTR_MDMARST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1rstr AHB1RSTR RCC AHB1 Peripheral Reset Register
@{*/

/** RCC_AHB1RSTR_USB2OTGRST USB2OTG block reset **/
#define RCC_AHB1RSTR_USB2OTGRST		(1 << 27)
/** RCC_AHB1RSTR_USB1OTGRST USB1OTG block reset **/
#define RCC_AHB1RSTR_USB1OTGRST		(1 << 25)
/** RCC_AHB1RSTR_ETH1MACRST ETH1MAC block reset **/
#define RCC_AHB1RSTR_ETH1MACRST		(1 << 15)
/** RCC_AHB1RSTR_ARTRST ART block reset **/
#define RCC_AHB1RSTR_ARTRST		(1 << 14)
/** RCC_AHB1RSTR_ADC12RST ADC1&2 block reset **/
#define RCC_AHB1RSTR_ADC12RST		(1 << 5)
/** RCC_AHB1RSTR_DMA2RST DMA2 block reset **/
#define RCC_AHB1RSTR_DMA2RST		(1 << 1)
/** RCC_AHB1RSTR_DMA1RST DMA1 block reset **/
#define RCC_AHB1RSTR_DMA1RST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2rstr AHB2RSTR RCC AHB2 Peripheral Reset Register
@{*/

/** RCC_AHB2RSTR_SDMMC2RST SDMMC2 and SDMMC2 Delay block reset **/
#define RCC_AHB2RSTR_SDMMC2RST		(1 << 9)
/** RCC_AHB2RSTR_RNGRST Random Number Generator block reset **/
#define RCC_AHB2RSTR_RNGRST		(1 << 6)
/** RCC_AHB2RSTR_HASHRST Hash block reset **/
#define RCC_AHB2RSTR_HASHRST		(1 << 5)
/** RCC_AHB2RSTR_CRYPTRST Cryptography block reset **/
#define RCC_AHB2RSTR_CRYPTRST		(1 << 4)
/** RCC_AHB2RSTR_CAMITFRST CAMITF block reset **/
#define RCC_AHB2RSTR_CAMITFRST		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb4rstr AHB4RSTR RCC AHB4 Peripheral Reset Register
@{*/

/** RCC_AHB4RSTR_HSEMRST HSEM block reset **/
#define RCC_AHB4RSTR_HSEMRST		(1 << 25)
/** RCC_AHB4RSTR_ADC3RST ADC3 block reset **/
#define RCC_AHB4RSTR_ADC3RST		(1 << 24)
/** RCC_AHB4RSTR_BDMARST BDMA block reset **/
#define RCC_AHB4RSTR_BDMARST		(1 << 21)
/** RCC_AHB4RSTR_CRCRST CRC block reset **/
#define RCC_AHB4RSTR_CRCRST		(1 << 19)
/** RCC_AHB4RSTR_GPIOKRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOKRST		(1 << 10)
/** RCC_AHB4RSTR_GPIOJRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOJRST		(1 << 9)
/** RCC_AHB4RSTR_GPIOIRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOIRST		(1 << 8)
/** RCC_AHB4RSTR_GPIOHRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOHRST		(1 << 7)
/** RCC_AHB4RSTR_GPIOGRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOGRST		(1 << 6)
/** RCC_AHB4RSTR_GPIOFRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOFRST		(1 << 5)
/** RCC_AHB4RSTR_GPIOERST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOERST		(1 << 4)
/** RCC_AHB4RSTR_GPIODRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIODRST		(1 << 3)
/** RCC_AHB4RSTR_GPIOCRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOCRST		(1 << 2)
/** RCC_AHB4RSTR_GPIOBRST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOBRST		(1 << 1)
/** RCC_AHB4RSTR_GPIOARST GPIO block reset **/
#define RCC_AHB4RSTR_GPIOARST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb3rstr APB3RSTR RCC APB3 Peripheral Reset Register
@{*/

/** RCC_APB3RSTR_DSIRST DSI block reset **/
#define RCC_APB3RSTR_DSIRST		(1 << 4)
/** RCC_APB3RSTR_LTDCRST LTDC block reset **/
#define RCC_APB3RSTR_LTDCRST		(1 << 3)

/**@}*/

/** @defgroup rcc_apb1lrstr APB1LRSTR RCC APB1 Peripheral Reset Register
@{*/

/** RCC_APB1LRSTR_USART8RST USART8 block reset **/
#define RCC_APB1LRSTR_USART8RST		(1 << 31)
/** RCC_APB1LRSTR_USART7RST USART7 block reset **/
#define RCC_APB1LRSTR_USART7RST		(1 << 30)
/** RCC_APB1LRSTR_DAC12RST DAC1 and 2 Blocks Reset **/
#define RCC_APB1LRSTR_DAC12RST		(1 << 29)
/** RCC_APB1LRSTR_HDMICECRST HDMI-CEC block reset **/
#define RCC_APB1LRSTR_HDMICECRST		(1 << 27)
/** RCC_APB1LRSTR_I2C3RST I2C3 block reset **/
#define RCC_APB1LRSTR_I2C3RST		(1 << 23)
/** RCC_APB1LRSTR_I2C2RST I2C2 block reset **/
#define RCC_APB1LRSTR_I2C2RST		(1 << 22)
/** RCC_APB1LRSTR_I2C1RST I2C1 block reset **/
#define RCC_APB1LRSTR_I2C1RST		(1 << 21)
/** RCC_APB1LRSTR_UART5RST UART5 block reset **/
#define RCC_APB1LRSTR_UART5RST		(1 << 20)
/** RCC_APB1LRSTR_UART4RST UART4 block reset **/
#define RCC_APB1LRSTR_UART4RST		(1 << 19)
/** RCC_APB1LRSTR_USART3RST USART3 block reset **/
#define RCC_APB1LRSTR_USART3RST		(1 << 18)
/** RCC_APB1LRSTR_USART2RST USART2 block reset **/
#define RCC_APB1LRSTR_USART2RST		(1 << 17)
/** RCC_APB1LRSTR_SPDIFRXRST SPDIFRX block reset **/
#define RCC_APB1LRSTR_SPDIFRXRST		(1 << 16)
/** RCC_APB1LRSTR_SPI3RST SPI3 block reset **/
#define RCC_APB1LRSTR_SPI3RST		(1 << 15)
/** RCC_APB1LRSTR_SPI2RST SPI2 block reset **/
#define RCC_APB1LRSTR_SPI2RST		(1 << 14)
/** RCC_APB1LRSTR_LPTIM1RST TIM block reset **/
#define RCC_APB1LRSTR_LPTIM1RST		(1 << 9)
/** RCC_APB1LRSTR_TIM14RST TIM block reset **/
#define RCC_APB1LRSTR_TIM14RST		(1 << 8)
/** RCC_APB1LRSTR_TIM13RST TIM block reset **/
#define RCC_APB1LRSTR_TIM13RST		(1 << 7)
/** RCC_APB1LRSTR_TIM12RST TIM block reset **/
#define RCC_APB1LRSTR_TIM12RST		(1 << 6)
/** RCC_APB1LRSTR_TIM7RST TIM block reset **/
#define RCC_APB1LRSTR_TIM7RST		(1 << 5)
/** RCC_APB1LRSTR_TIM6RST TIM block reset **/
#define RCC_APB1LRSTR_TIM6RST		(1 << 4)
/** RCC_APB1LRSTR_TIM5RST TIM block reset **/
#define RCC_APB1LRSTR_TIM5RST		(1 << 3)
/** RCC_APB1LRSTR_TIM4RST TIM block reset **/
#define RCC_APB1LRSTR_TIM4RST		(1 << 2)
/** RCC_APB1LRSTR_TIM3RST TIM block reset **/
#define RCC_APB1LRSTR_TIM3RST		(1 << 1)
/** RCC_APB1LRSTR_TIM2RST TIM block reset **/
#define RCC_APB1LRSTR_TIM2RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1hrstr APB1HRSTR RCC APB1 Peripheral Reset Register
@{*/

/** RCC_APB1HRSTR_FDCANRST FDCAN block reset **/
#define RCC_APB1HRSTR_FDCANRST		(1 << 8)
/** RCC_APB1HRSTR_MDIOSRST MDIOS block reset **/
#define RCC_APB1HRSTR_MDIOSRST		(1 << 5)
/** RCC_APB1HRSTR_OPAMPRST OPAMP block reset **/
#define RCC_APB1HRSTR_OPAMPRST		(1 << 4)
/** RCC_APB1HRSTR_SWPRST SWPMI block reset **/
#define RCC_APB1HRSTR_SWPRST		(1 << 2)
/** RCC_APB1HRSTR_CRSRST Clock Recovery System reset **/
#define RCC_APB1HRSTR_CRSRST		(1 << 1)

/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR RCC APB2 Peripheral Reset Register
@{*/

/** RCC_APB2RSTR_HRTIMRST HRTIM block reset **/
#define RCC_APB2RSTR_HRTIMRST		(1 << 29)
/** RCC_APB2RSTR_DFSDM1RST DFSDM1 block reset **/
#define RCC_APB2RSTR_DFSDM1RST		(1 << 28)
/** RCC_APB2RSTR_SAI3RST SAI3 block reset **/
#define RCC_APB2RSTR_SAI3RST		(1 << 24)
/** RCC_APB2RSTR_SAI2RST SAI2 block reset **/
#define RCC_APB2RSTR_SAI2RST		(1 << 23)
/** RCC_APB2RSTR_SAI1RST SAI1 block reset **/
#define RCC_APB2RSTR_SAI1RST		(1 << 22)
/** RCC_APB2RSTR_SPI5RST SPI5 block reset **/
#define RCC_APB2RSTR_SPI5RST		(1 << 20)
/** RCC_APB2RSTR_TIM17RST TIM17 block reset **/
#define RCC_APB2RSTR_TIM17RST		(1 << 18)
/** RCC_APB2RSTR_TIM16RST TIM16 block reset **/
#define RCC_APB2RSTR_TIM16RST		(1 << 17)
/** RCC_APB2RSTR_TIM15RST TIM15 block reset **/
#define RCC_APB2RSTR_TIM15RST		(1 << 16)
/** RCC_APB2RSTR_SPI4RST SPI4 block reset **/
#define RCC_APB2RSTR_SPI4RST		(1 << 13)
/** RCC_APB2RSTR_SPI1RST SPI1 block reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_USART6RST USART6 block reset **/
#define RCC_APB2RSTR_USART6RST		(1 << 5)
/** RCC_APB2RSTR_USART1RST USART1 block reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 4)
/** RCC_APB2RSTR_TIM8RST TIM8 block reset **/
#define RCC_APB2RSTR_TIM8RST		(1 << 1)
/** RCC_APB2RSTR_TIM1RST TIM1 block reset **/
#define RCC_APB2RSTR_TIM1RST		(1 << 0)

/**@}*/

/** @defgroup rcc_apb4rstr APB4RSTR RCC APB4 Peripheral Reset Register
@{*/

/** RCC_APB4RSTR_SAI4RST SAI4 block reset **/
#define RCC_APB4RSTR_SAI4RST		(1 << 21)
/** RCC_APB4RSTR_VREFRST VREF block reset **/
#define RCC_APB4RSTR_VREFRST		(1 << 15)
/** RCC_APB4RSTR_COMP12RST COMP12 Blocks Reset **/
#define RCC_APB4RSTR_COMP12RST		(1 << 14)
/** RCC_APB4RSTR_LPTIM5RST LPTIM5 block reset **/
#define RCC_APB4RSTR_LPTIM5RST		(1 << 12)
/** RCC_APB4RSTR_LPTIM4RST LPTIM4 block reset **/
#define RCC_APB4RSTR_LPTIM4RST		(1 << 11)
/** RCC_APB4RSTR_LPTIM3RST LPTIM3 block reset **/
#define RCC_APB4RSTR_LPTIM3RST		(1 << 10)
/** RCC_APB4RSTR_LPTIM2RST LPTIM2 block reset **/
#define RCC_APB4RSTR_LPTIM2RST		(1 << 9)
/** RCC_APB4RSTR_I2C4RST I2C4 block reset **/
#define RCC_APB4RSTR_I2C4RST		(1 << 7)
/** RCC_APB4RSTR_SPI6RST SPI6 block reset **/
#define RCC_APB4RSTR_SPI6RST		(1 << 5)
/** RCC_APB4RSTR_LPUART1RST LPUART1 block reset **/
#define RCC_APB4RSTR_LPUART1RST		(1 << 3)
/** RCC_APB4RSTR_SYSCFGRST SYSCFG block reset **/
#define RCC_APB4RSTR_SYSCFGRST		(1 << 1)

/**@}*/

/** @defgroup rcc_gcr GCR RCC Global Control Register
@{*/

/** RCC_GCR_BOOT_C2 Allows CPU2 to boot **/
#define RCC_GCR_BOOT_C2		(1 << 3)
/** RCC_GCR_BOOT_C1 Allows CPU1 to boot **/
#define RCC_GCR_BOOT_C1		(1 << 2)
/** RCC_GCR_WW2RSC WWDG2 reset scope control **/
#define RCC_GCR_WW2RSC		(1 << 1)
/** RCC_GCR_WW1RSC WWDG1 reset scope control **/
#define RCC_GCR_WW1RSC		(1 << 0)

/**@}*/

/** @defgroup rcc_d3amr D3AMR RCC D3 Autonomous mode Register
@{*/

/** RCC_D3AMR_SRAM4AMEN SRAM4 Autonomous mode enable **/
#define RCC_D3AMR_SRAM4AMEN		(1 << 29)
/** RCC_D3AMR_BKPSRAMAMEN Backup RAM Autonomous mode enable **/
#define RCC_D3AMR_BKPSRAMAMEN		(1 << 28)
/** RCC_D3AMR_ADC3AMEN ADC3 Autonomous mode enable **/
#define RCC_D3AMR_ADC3AMEN		(1 << 24)
/** RCC_D3AMR_SAI4AMEN SAI4 Autonomous mode enable **/
#define RCC_D3AMR_SAI4AMEN		(1 << 21)
/** RCC_D3AMR_CRCAMEN CRC Autonomous mode enable **/
#define RCC_D3AMR_CRCAMEN		(1 << 19)
/** RCC_D3AMR_RTCAMEN RTC Autonomous mode enable **/
#define RCC_D3AMR_RTCAMEN		(1 << 16)
/** RCC_D3AMR_VREFAMEN VREF Autonomous mode enable **/
#define RCC_D3AMR_VREFAMEN		(1 << 15)
/** RCC_D3AMR_COMP12AMEN COMP12 Autonomous mode enable **/
#define RCC_D3AMR_COMP12AMEN		(1 << 14)
/** RCC_D3AMR_LPTIM5AMEN LPTIM5 Autonomous mode enable **/
#define RCC_D3AMR_LPTIM5AMEN		(1 << 12)
/** RCC_D3AMR_LPTIM4AMEN LPTIM4 Autonomous mode enable **/
#define RCC_D3AMR_LPTIM4AMEN		(1 << 11)
/** RCC_D3AMR_LPTIM3AMEN LPTIM3 Autonomous mode enable **/
#define RCC_D3AMR_LPTIM3AMEN		(1 << 10)
/** RCC_D3AMR_LPTIM2AMEN LPTIM2 Autonomous mode enable **/
#define RCC_D3AMR_LPTIM2AMEN		(1 << 9)
/** RCC_D3AMR_I2C4AMEN I2C4 Autonomous mode enable **/
#define RCC_D3AMR_I2C4AMEN		(1 << 7)
/** RCC_D3AMR_SPI6AMEN SPI6 Autonomous mode enable **/
#define RCC_D3AMR_SPI6AMEN		(1 << 5)
/** RCC_D3AMR_LPUART1AMEN LPUART1 Autonomous mode enable **/
#define RCC_D3AMR_LPUART1AMEN		(1 << 3)
/** RCC_D3AMR_BDMAAMEN BDMA and DMAMUX Autonomous mode enable **/
#define RCC_D3AMR_BDMAAMEN		(1 << 0)

/**@}*/

/** @defgroup rcc_rsr RSR RCC Reset Status Register
@{*/

/** RCC_RSR_LPWRRSTF Reset due to illegal D1 DStandby or CPU CStop flag **/
#define RCC_RSR_LPWRRSTF		(1 << 30)
/** RCC_RSR_WWDG1RSTF Window Watchdog reset flag **/
#define RCC_RSR_WWDG1RSTF		(1 << 28)
/** RCC_RSR_IWDG1RSTF Independent Watchdog reset flag **/
#define RCC_RSR_IWDG1RSTF		(1 << 26)
/** RCC_RSR_SFTRSTF System reset from CPU reset flag **/
#define RCC_RSR_SFTRSTF		(1 << 24)
/** RCC_RSR_PORRSTF POR/PDR reset flag **/
#define RCC_RSR_PORRSTF		(1 << 23)
/** RCC_RSR_PINRSTF Pin reset flag (NRST) **/
#define RCC_RSR_PINRSTF		(1 << 22)
/** RCC_RSR_BORRSTF BOR reset flag **/
#define RCC_RSR_BORRSTF		(1 << 21)
/** RCC_RSR_D2RSTF D2 domain power switch reset flag **/
#define RCC_RSR_D2RSTF		(1 << 20)
/** RCC_RSR_D1RSTF D1 domain power switch reset flag **/
#define RCC_RSR_D1RSTF		(1 << 19)
/** RCC_RSR_CPURSTF CPU reset flag **/
#define RCC_RSR_CPURSTF		(1 << 17)
/** RCC_RSR_RMVF Remove reset flag **/
#define RCC_RSR_RMVF		(1 << 16)

/**@}*/

/** @defgroup rcc_ahb3enr AHB3ENR RCC AHB3 Clock Register
@{*/

/** RCC_AHB3ENR_AXISRAMEN AXISRAM block enable **/
#define RCC_AHB3ENR_AXISRAMEN		(1 << 31)
/** RCC_AHB3ENR_ITCM1EN D1 ITCM block enable **/
#define RCC_AHB3ENR_ITCM1EN		(1 << 30)
/** RCC_AHB3ENR_DTCM2EN D1 DTCM2 block enable **/
#define RCC_AHB3ENR_DTCM2EN		(1 << 29)
/** RCC_AHB3ENR_DTCM1EN D1 DTCM1 block enable **/
#define RCC_AHB3ENR_DTCM1EN		(1 << 28)
/** RCC_AHB3ENR_SDMMC1EN SDMMC1 and SDMMC1 Delay Clock Enable **/
#define RCC_AHB3ENR_SDMMC1EN		(1 << 16)
/** RCC_AHB3ENR_QSPIEN QUADSPI and QUADSPI Delay Clock Enable **/
#define RCC_AHB3ENR_QSPIEN		(1 << 14)
/** RCC_AHB3ENR_FMCEN FMC Peripheral Clocks Enable **/
#define RCC_AHB3ENR_FMCEN		(1 << 12)
/** RCC_AHB3ENR_JPGDECEN JPGDEC Peripheral Clock Enable **/
#define RCC_AHB3ENR_JPGDECEN		(1 << 5)
/** RCC_AHB3ENR_DMA2DEN DMA2D Peripheral Clock Enable **/
#define RCC_AHB3ENR_DMA2DEN		(1 << 4)
/** RCC_AHB3ENR_MDMAEN MDMA Peripheral Clock Enable **/
#define RCC_AHB3ENR_MDMAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1enr AHB1ENR RCC AHB1 Clock Register
@{*/

/** RCC_AHB1ENR_USB2OTGHSEN USB2OTG Peripheral Clocks Enable **/
#define RCC_AHB1ENR_USB2OTGHSEN		(1 << 27)
/** RCC_AHB1ENR_USB1OTGHSULPIEN USB_PHY1 Clocks Enable **/
#define RCC_AHB1ENR_USB1OTGHSULPIEN		(1 << 26)
/** RCC_AHB1ENR_USB1OTGHEN USB1OTG Peripheral Clocks Enable **/
#define RCC_AHB1ENR_USB1OTGHEN		(1 << 25)
/** RCC_AHB1ENR_ETH1RXEN Ethernet Reception Clock Enable **/
#define RCC_AHB1ENR_ETH1RXEN		(1 << 17)
/** RCC_AHB1ENR_ETH1TXEN Ethernet Transmission Clock Enable **/
#define RCC_AHB1ENR_ETH1TXEN		(1 << 16)
/** RCC_AHB1ENR_ETH1MACEN Ethernet MAC bus interface Clock Enable **/
#define RCC_AHB1ENR_ETH1MACEN		(1 << 15)
/** RCC_AHB1ENR_ARTEN ART Clock Enable **/
#define RCC_AHB1ENR_ARTEN		(1 << 14)
/** RCC_AHB1ENR_ADC12EN ADC1/2 Peripheral Clocks Enable **/
#define RCC_AHB1ENR_ADC12EN		(1 << 5)
/** RCC_AHB1ENR_DMA2EN DMA2 Clock Enable **/
#define RCC_AHB1ENR_DMA2EN		(1 << 1)
/** RCC_AHB1ENR_DMA1EN DMA1 Clock Enable **/
#define RCC_AHB1ENR_DMA1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2enr AHB2ENR RCC AHB2 Clock Register
@{*/

/** RCC_AHB2ENR_SRAM3EN SRAM3 block enable **/
#define RCC_AHB2ENR_SRAM3EN		(1 << 31)
/** RCC_AHB2ENR_SRAM2EN SRAM2 block enable **/
#define RCC_AHB2ENR_SRAM2EN		(1 << 30)
/** RCC_AHB2ENR_SRAM1EN SRAM1 block enable **/
#define RCC_AHB2ENR_SRAM1EN		(1 << 29)
/** RCC_AHB2ENR_SDMMC2EN SDMMC2 and SDMMC2 delay clock enable **/
#define RCC_AHB2ENR_SDMMC2EN		(1 << 9)
/** RCC_AHB2ENR_RNGEN RNG peripheral clocks enable **/
#define RCC_AHB2ENR_RNGEN		(1 << 6)
/** RCC_AHB2ENR_HASHEN HASH peripheral clock enable **/
#define RCC_AHB2ENR_HASHEN		(1 << 5)
/** RCC_AHB2ENR_CRYPTEN CRYPT peripheral clock enable **/
#define RCC_AHB2ENR_CRYPTEN		(1 << 4)
/** RCC_AHB2ENR_CAMITFEN CAMITF peripheral clock enable **/
#define RCC_AHB2ENR_CAMITFEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb4enr AHB4ENR RCC AHB4 Clock Register
@{*/

/** RCC_AHB4ENR_BKPRAMEN Backup RAM Clock Enable **/
#define RCC_AHB4ENR_BKPRAMEN		(1 << 28)
/** RCC_AHB4ENR_HSEMEN HSEM peripheral clock enable **/
#define RCC_AHB4ENR_HSEMEN		(1 << 25)
/** RCC_AHB4ENR_ADC3EN ADC3 Peripheral Clocks Enable **/
#define RCC_AHB4ENR_ADC3EN		(1 << 24)
/** RCC_AHB4ENR_BDMAEN BDMA and DMAMUX2 Clock Enable **/
#define RCC_AHB4ENR_BDMAEN		(1 << 21)
/** RCC_AHB4ENR_CRCEN CRC peripheral clock enable **/
#define RCC_AHB4ENR_CRCEN		(1 << 19)
/** RCC_AHB4ENR_GPIOKEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOKEN		(1 << 10)
/** RCC_AHB4ENR_GPIOJEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOJEN		(1 << 9)
/** RCC_AHB4ENR_GPIOIEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOIEN		(1 << 8)
/** RCC_AHB4ENR_GPIOHEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOHEN		(1 << 7)
/** RCC_AHB4ENR_GPIOGEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOGEN		(1 << 6)
/** RCC_AHB4ENR_GPIOFEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOFEN		(1 << 5)
/** RCC_AHB4ENR_GPIOEEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOEEN		(1 << 4)
/** RCC_AHB4ENR_GPIODEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIODEN		(1 << 3)
/** RCC_AHB4ENR_GPIOCEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOCEN		(1 << 2)
/** RCC_AHB4ENR_GPIOBEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOBEN		(1 << 1)
/** RCC_AHB4ENR_GPIOAEN 0GPIO peripheral clock enable **/
#define RCC_AHB4ENR_GPIOAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb3enr APB3ENR RCC APB3 Clock Register
@{*/

/** RCC_APB3ENR_WWDG1EN WWDG1 Clock Enable **/
#define RCC_APB3ENR_WWDG1EN		(1 << 6)
/** RCC_APB3ENR_DSIEN DSI Peripheral Clocks Enable **/
#define RCC_APB3ENR_DSIEN		(1 << 4)
/** RCC_APB3ENR_LTDCEN LTDC peripheral clock enable **/
#define RCC_APB3ENR_LTDCEN		(1 << 3)

/**@}*/

/** @defgroup rcc_apb1lenr APB1LENR RCC APB1 Clock Register
@{*/

/** RCC_APB1LENR_USART8EN USART8 Peripheral Clocks Enable **/
#define RCC_APB1LENR_USART8EN		(1 << 31)
/** RCC_APB1LENR_USART7EN USART7 Peripheral Clocks Enable **/
#define RCC_APB1LENR_USART7EN		(1 << 30)
/** RCC_APB1LENR_DAC12EN DAC1&2 peripheral clock enable **/
#define RCC_APB1LENR_DAC12EN		(1 << 29)
/** RCC_APB1LENR_HDMICECEN HDMI-CEC peripheral clock enable **/
#define RCC_APB1LENR_HDMICECEN		(1 << 27)
/** RCC_APB1LENR_I2C3EN I2C3 Peripheral Clocks Enable **/
#define RCC_APB1LENR_I2C3EN		(1 << 23)
/** RCC_APB1LENR_I2C2EN I2C2 Peripheral Clocks Enable **/
#define RCC_APB1LENR_I2C2EN		(1 << 22)
/** RCC_APB1LENR_I2C1EN I2C1 Peripheral Clocks Enable **/
#define RCC_APB1LENR_I2C1EN		(1 << 21)
/** RCC_APB1LENR_UART5EN UART5 Peripheral Clocks Enable **/
#define RCC_APB1LENR_UART5EN		(1 << 20)
/** RCC_APB1LENR_UART4EN UART4 Peripheral Clocks Enable **/
#define RCC_APB1LENR_UART4EN		(1 << 19)
/** RCC_APB1LENR_USART3EN USART3 Peripheral Clocks Enable **/
#define RCC_APB1LENR_USART3EN		(1 << 18)
/** RCC_APB1LENR_USART2EN USART2 Peripheral Clocks Enable **/
#define RCC_APB1LENR_USART2EN		(1 << 17)
/** RCC_APB1LENR_SPDIFRXEN SPDIFRX Peripheral Clocks Enable **/
#define RCC_APB1LENR_SPDIFRXEN		(1 << 16)
/** RCC_APB1LENR_SPI3EN SPI3 Peripheral Clocks Enable **/
#define RCC_APB1LENR_SPI3EN		(1 << 15)
/** RCC_APB1LENR_SPI2EN SPI2 Peripheral Clocks Enable **/
#define RCC_APB1LENR_SPI2EN		(1 << 14)
/** RCC_APB1LENR_WWDG2EN WWDG2 peripheral clock enable **/
#define RCC_APB1LENR_WWDG2EN		(1 << 11)
/** RCC_APB1LENR_LPTIM1EN LPTIM1 Peripheral Clocks Enable **/
#define RCC_APB1LENR_LPTIM1EN		(1 << 9)
/** RCC_APB1LENR_TIM14EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM14EN		(1 << 8)
/** RCC_APB1LENR_TIM13EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM13EN		(1 << 7)
/** RCC_APB1LENR_TIM12EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM12EN		(1 << 6)
/** RCC_APB1LENR_TIM7EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM7EN		(1 << 5)
/** RCC_APB1LENR_TIM6EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM6EN		(1 << 4)
/** RCC_APB1LENR_TIM5EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM5EN		(1 << 3)
/** RCC_APB1LENR_TIM4EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM4EN		(1 << 2)
/** RCC_APB1LENR_TIM3EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM3EN		(1 << 1)
/** RCC_APB1LENR_TIM2EN TIM peripheral clock enable **/
#define RCC_APB1LENR_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1henr APB1HENR RCC APB1 Clock Register
@{*/

/** RCC_APB1HENR_FDCANEN FDCAN Peripheral Clocks Enable **/
#define RCC_APB1HENR_FDCANEN		(1 << 8)
/** RCC_APB1HENR_MDIOSEN MDIOS peripheral clock enable **/
#define RCC_APB1HENR_MDIOSEN		(1 << 5)
/** RCC_APB1HENR_OPAMPEN OPAMP peripheral clock enable **/
#define RCC_APB1HENR_OPAMPEN		(1 << 4)
/** RCC_APB1HENR_SWPEN SWPMI Peripheral Clocks Enable **/
#define RCC_APB1HENR_SWPEN		(1 << 2)
/** RCC_APB1HENR_CRSEN Clock Recovery System peripheral clock enable **/
#define RCC_APB1HENR_CRSEN		(1 << 1)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR RCC APB2 Clock Register
@{*/

/** RCC_APB2ENR_HRTIMEN HRTIM peripheral clock enable **/
#define RCC_APB2ENR_HRTIMEN		(1 << 29)
/** RCC_APB2ENR_DFSDM1EN DFSDM1 Peripheral Clocks Enable **/
#define RCC_APB2ENR_DFSDM1EN		(1 << 28)
/** RCC_APB2ENR_SAI3EN SAI3 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SAI3EN		(1 << 24)
/** RCC_APB2ENR_SAI2EN SAI2 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SAI2EN		(1 << 23)
/** RCC_APB2ENR_SAI1EN SAI1 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SAI1EN		(1 << 22)
/** RCC_APB2ENR_SPI5EN SPI5 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SPI5EN		(1 << 20)
/** RCC_APB2ENR_TIM17EN TIM17 peripheral clock enable **/
#define RCC_APB2ENR_TIM17EN		(1 << 18)
/** RCC_APB2ENR_TIM16EN TIM16 peripheral clock enable **/
#define RCC_APB2ENR_TIM16EN		(1 << 17)
/** RCC_APB2ENR_TIM15EN TIM15 peripheral clock enable **/
#define RCC_APB2ENR_TIM15EN		(1 << 16)
/** RCC_APB2ENR_SPI4EN SPI4 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SPI4EN		(1 << 13)
/** RCC_APB2ENR_SPI1EN SPI1 Peripheral Clocks Enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_USART6EN USART6 Peripheral Clocks Enable **/
#define RCC_APB2ENR_USART6EN		(1 << 5)
/** RCC_APB2ENR_USART1EN USART1 Peripheral Clocks Enable **/
#define RCC_APB2ENR_USART1EN		(1 << 4)
/** RCC_APB2ENR_TIM8EN TIM8 peripheral clock enable **/
#define RCC_APB2ENR_TIM8EN		(1 << 1)
/** RCC_APB2ENR_TIM1EN TIM1 peripheral clock enable **/
#define RCC_APB2ENR_TIM1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb4enr APB4ENR RCC APB4 Clock Register
@{*/

/** RCC_APB4ENR_SAI4EN SAI4 Peripheral Clocks Enable **/
#define RCC_APB4ENR_SAI4EN		(1 << 21)
/** RCC_APB4ENR_RTCAPBEN RTC APB Clock Enable **/
#define RCC_APB4ENR_RTCAPBEN		(1 << 16)
/** RCC_APB4ENR_VREFEN VREF peripheral clock enable **/
#define RCC_APB4ENR_VREFEN		(1 << 15)
/** RCC_APB4ENR_COMP12EN COMP1/2 peripheral clock enable **/
#define RCC_APB4ENR_COMP12EN		(1 << 14)
/** RCC_APB4ENR_LPTIM5EN LPTIM5 Peripheral Clocks Enable **/
#define RCC_APB4ENR_LPTIM5EN		(1 << 12)
/** RCC_APB4ENR_LPTIM4EN LPTIM4 Peripheral Clocks Enable **/
#define RCC_APB4ENR_LPTIM4EN		(1 << 11)
/** RCC_APB4ENR_LPTIM3EN LPTIM3 Peripheral Clocks Enable **/
#define RCC_APB4ENR_LPTIM3EN		(1 << 10)
/** RCC_APB4ENR_LPTIM2EN LPTIM2 Peripheral Clocks Enable **/
#define RCC_APB4ENR_LPTIM2EN		(1 << 9)
/** RCC_APB4ENR_I2C4EN I2C4 Peripheral Clocks Enable **/
#define RCC_APB4ENR_I2C4EN		(1 << 7)
/** RCC_APB4ENR_SPI6EN SPI6 Peripheral Clocks Enable **/
#define RCC_APB4ENR_SPI6EN		(1 << 5)
/** RCC_APB4ENR_LPUART1EN LPUART1 Peripheral Clocks Enable **/
#define RCC_APB4ENR_LPUART1EN		(1 << 3)
/** RCC_APB4ENR_SYSCFGEN SYSCFG peripheral clock enable **/
#define RCC_APB4ENR_SYSCFGEN		(1 << 1)

/**@}*/

/** @defgroup rcc_ahb3lpenr AHB3LPENR RCC AHB3 Sleep Clock Register
@{*/

/** RCC_AHB3LPENR_AXISRAMLPEN AXISRAM Block Clock Enable During CSleep mode **/
#define RCC_AHB3LPENR_AXISRAMLPEN		(1 << 31)
/** RCC_AHB3LPENR_ITCMLPEN D1ITCM Block Clock Enable During CSleep mode **/
#define RCC_AHB3LPENR_ITCMLPEN		(1 << 30)
/** RCC_AHB3LPENR_DTCM2LPEN D1 DTCM2 Block Clock Enable During CSleep mode **/
#define RCC_AHB3LPENR_DTCM2LPEN		(1 << 29)
/** RCC_AHB3LPENR_D1DTCM1LPEN D1DTCM1 Block Clock Enable During CSleep mode **/
#define RCC_AHB3LPENR_D1DTCM1LPEN		(1 << 28)
/** RCC_AHB3LPENR_SDMMC1LPEN SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_SDMMC1LPEN		(1 << 16)
/** RCC_AHB3LPENR_QSPILPEN QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_QSPILPEN		(1 << 14)
/** RCC_AHB3LPENR_FMCLPEN FMC Peripheral Clocks Enable During CSleep Mode **/
#define RCC_AHB3LPENR_FMCLPEN		(1 << 12)
/** RCC_AHB3LPENR_FLITFLPEN FLITF Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_FLITFLPEN		(1 << 8)
/** RCC_AHB3LPENR_JPGDECLPEN JPGDEC Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_JPGDECLPEN		(1 << 5)
/** RCC_AHB3LPENR_DMA2DLPEN DMA2D Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_DMA2DLPEN		(1 << 4)
/** RCC_AHB3LPENR_MDMALPEN MDMA Clock Enable During CSleep Mode **/
#define RCC_AHB3LPENR_MDMALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb1lpenr AHB1LPENR RCC AHB1 Sleep Clock Register
@{*/

/** RCC_AHB1LPENR_USB2OTGHSLPEN USB2OTG (OTG_HS2) peripheral clock enable during CSleep mode **/
#define RCC_AHB1LPENR_USB2OTGHSLPEN		(1 << 27)
/** RCC_AHB1LPENR_USB1OTGHSULPILPEN USB_PHY1 clock enable during CSleep mode **/
#define RCC_AHB1LPENR_USB1OTGHSULPILPEN		(1 << 26)
/** RCC_AHB1LPENR_USB1OTGHSLPEN USB1OTG (OTG_HS1) peripheral clock enable during CSleep mode **/
#define RCC_AHB1LPENR_USB1OTGHSLPEN		(1 << 25)
/** RCC_AHB1LPENR_ETH1RXLPEN Ethernet Reception Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_ETH1RXLPEN		(1 << 17)
/** RCC_AHB1LPENR_ETH1TXLPEN Ethernet Transmission Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_ETH1TXLPEN		(1 << 16)
/** RCC_AHB1LPENR_ETH1MACLPEN Ethernet MAC bus interface Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_ETH1MACLPEN		(1 << 15)
/** RCC_AHB1LPENR_ARTLPEN ART Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_ARTLPEN		(1 << 14)
/** RCC_AHB1LPENR_ADC12LPEN ADC1/2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_AHB1LPENR_ADC12LPEN		(1 << 5)
/** RCC_AHB1LPENR_DMA2LPEN DMA2 Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_DMA2LPEN		(1 << 1)
/** RCC_AHB1LPENR_DMA1LPEN DMA1 Clock Enable During CSleep Mode **/
#define RCC_AHB1LPENR_DMA1LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb2lpenr AHB2LPENR RCC AHB2 Sleep Clock Register
@{*/

/** RCC_AHB2LPENR_SRAM3LPEN SRAM3 Clock Enable During CSleep Mode **/
#define RCC_AHB2LPENR_SRAM3LPEN		(1 << 31)
/** RCC_AHB2LPENR_SRAM2LPEN SRAM2 Clock Enable During CSleep Mode **/
#define RCC_AHB2LPENR_SRAM2LPEN		(1 << 30)
/** RCC_AHB2LPENR_SRAM1LPEN SRAM1 Clock Enable During CSleep Mode **/
#define RCC_AHB2LPENR_SRAM1LPEN		(1 << 29)
/** RCC_AHB2LPENR_SDMMC2LPEN SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode **/
#define RCC_AHB2LPENR_SDMMC2LPEN		(1 << 9)
/** RCC_AHB2LPENR_RNGLPEN RNG peripheral clock enable during CSleep mode **/
#define RCC_AHB2LPENR_RNGLPEN		(1 << 6)
/** RCC_AHB2LPENR_HASHLPEN HASH peripheral clock enable during CSleep mode **/
#define RCC_AHB2LPENR_HASHLPEN		(1 << 5)
/** RCC_AHB2LPENR_CRYPTLPEN CRYPT peripheral clock enable during CSleep mode **/
#define RCC_AHB2LPENR_CRYPTLPEN		(1 << 4)
/** RCC_AHB2LPENR_CAMITFLPEN CAMITF peripheral clock enable during CSleep mode **/
#define RCC_AHB2LPENR_CAMITFLPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_ahb4lpenr AHB4LPENR RCC AHB4 Sleep Clock Register
@{*/

/** RCC_AHB4LPENR_SRAM4LPEN SRAM4 Clock Enable During CSleep Mode **/
#define RCC_AHB4LPENR_SRAM4LPEN		(1 << 29)
/** RCC_AHB4LPENR_BKPRAMLPEN Backup RAM Clock Enable During CSleep Mode **/
#define RCC_AHB4LPENR_BKPRAMLPEN		(1 << 28)
/** RCC_AHB4LPENR_ADC3LPEN ADC3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_AHB4LPENR_ADC3LPEN		(1 << 24)
/** RCC_AHB4LPENR_BDMALPEN BDMA Clock Enable During CSleep Mode **/
#define RCC_AHB4LPENR_BDMALPEN		(1 << 21)
/** RCC_AHB4LPENR_CRCLPEN CRC peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_CRCLPEN		(1 << 19)
/** RCC_AHB4LPENR_GPIOKLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOKLPEN		(1 << 10)
/** RCC_AHB4LPENR_GPIOJLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOJLPEN		(1 << 9)
/** RCC_AHB4LPENR_GPIOILPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOILPEN		(1 << 8)
/** RCC_AHB4LPENR_GPIOHLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOHLPEN		(1 << 7)
/** RCC_AHB4LPENR_GPIOGLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOGLPEN		(1 << 6)
/** RCC_AHB4LPENR_GPIOFLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOFLPEN		(1 << 5)
/** RCC_AHB4LPENR_GPIOELPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOELPEN		(1 << 4)
/** RCC_AHB4LPENR_GPIODLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIODLPEN		(1 << 3)
/** RCC_AHB4LPENR_GPIOCLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOCLPEN		(1 << 2)
/** RCC_AHB4LPENR_GPIOBLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOBLPEN		(1 << 1)
/** RCC_AHB4LPENR_GPIOALPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_AHB4LPENR_GPIOALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb3lpenr APB3LPENR RCC APB3 Sleep Clock Register
@{*/

/** RCC_APB3LPENR_WWDG1LPEN WWDG1 Clock Enable During CSleep Mode **/
#define RCC_APB3LPENR_WWDG1LPEN		(1 << 6)
/** RCC_APB3LPENR_DSILPEN DSI peripheral clock enable during CSleep mode **/
#define RCC_APB3LPENR_DSILPEN		(1 << 4)
/** RCC_APB3LPENR_LTDCLPEN LTDC peripheral clock enable during CSleep mode **/
#define RCC_APB3LPENR_LTDCLPEN		(1 << 3)

/**@}*/

/** @defgroup rcc_apb1llpenr APB1LLPENR RCC APB1 Low Sleep Clock Register
@{*/

/** RCC_APB1LLPENR_USART8LPEN USART8 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_USART8LPEN		(1 << 31)
/** RCC_APB1LLPENR_USART7LPEN USART7 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_USART7LPEN		(1 << 30)
/** RCC_APB1LLPENR_DAC12LPEN DAC1/2 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_DAC12LPEN		(1 << 29)
/** RCC_APB1LLPENR_HDMICECLPEN HDMI-CEC Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_HDMICECLPEN		(1 << 27)
/** RCC_APB1LLPENR_I2C3LPEN I2C3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_I2C3LPEN		(1 << 23)
/** RCC_APB1LLPENR_I2C2LPEN I2C2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_I2C2LPEN		(1 << 22)
/** RCC_APB1LLPENR_I2C1LPEN I2C1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_I2C1LPEN		(1 << 21)
/** RCC_APB1LLPENR_UART5LPEN UART5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_UART5LPEN		(1 << 20)
/** RCC_APB1LLPENR_UART4LPEN UART4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_UART4LPEN		(1 << 19)
/** RCC_APB1LLPENR_USART3LPEN USART3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_USART3LPEN		(1 << 18)
/** RCC_APB1LLPENR_USART2LPEN USART2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_USART2LPEN		(1 << 17)
/** RCC_APB1LLPENR_SPDIFRXLPEN SPDIFRX Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_SPDIFRXLPEN		(1 << 16)
/** RCC_APB1LLPENR_SPI3LPEN SPI3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_SPI3LPEN		(1 << 15)
/** RCC_APB1LLPENR_SPI2LPEN SPI2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_SPI2LPEN		(1 << 14)
/** RCC_APB1LLPENR_WWDG2LPEN WWDG2 Clock Enable During CSleep Mode **/
#define RCC_APB1LLPENR_WWDG2LPEN		(1 << 11)
/** RCC_APB1LLPENR_LPTIM1LPEN LPTIM1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1LLPENR_LPTIM1LPEN		(1 << 9)
/** RCC_APB1LLPENR_TIM14LPEN TIM14 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM14LPEN		(1 << 8)
/** RCC_APB1LLPENR_TIM13LPEN TIM13 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM13LPEN		(1 << 7)
/** RCC_APB1LLPENR_TIM12LPEN TIM12 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM12LPEN		(1 << 6)
/** RCC_APB1LLPENR_TIM7LPEN TIM7 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM7LPEN		(1 << 5)
/** RCC_APB1LLPENR_TIM6LPEN TIM6 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM6LPEN		(1 << 4)
/** RCC_APB1LLPENR_TIM5LPEN TIM5 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM5LPEN		(1 << 3)
/** RCC_APB1LLPENR_TIM4LPEN TIM4 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM4LPEN		(1 << 2)
/** RCC_APB1LLPENR_TIM3LPEN TIM3 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM3LPEN		(1 << 1)
/** RCC_APB1LLPENR_TIM2LPEN TIM2 peripheral clock enable during CSleep mode **/
#define RCC_APB1LLPENR_TIM2LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb1hlpenr APB1HLPENR RCC APB1 High Sleep Clock Register
@{*/

/** RCC_APB1HLPENR_FDCANLPEN FDCAN Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1HLPENR_FDCANLPEN		(1 << 8)
/** RCC_APB1HLPENR_MDIOSLPEN MDIOS peripheral clock enable during CSleep mode **/
#define RCC_APB1HLPENR_MDIOSLPEN		(1 << 5)
/** RCC_APB1HLPENR_OPAMPLPEN OPAMP peripheral clock enable during CSleep mode **/
#define RCC_APB1HLPENR_OPAMPLPEN		(1 << 4)
/** RCC_APB1HLPENR_SWPLPEN SWPMI Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB1HLPENR_SWPLPEN		(1 << 2)
/** RCC_APB1HLPENR_CRSLPEN Clock Recovery System peripheral clock enable during CSleep mode **/
#define RCC_APB1HLPENR_CRSLPEN		(1 << 1)

/**@}*/

/** @defgroup rcc_apb2lpenr APB2LPENR RCC APB2 Sleep Clock Register
@{*/

/** RCC_APB2LPENR_HRTIMLPEN HRTIM peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_HRTIMLPEN		(1 << 29)
/** RCC_APB2LPENR_DFSDM1LPEN DFSDM1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_DFSDM1LPEN		(1 << 28)
/** RCC_APB2LPENR_SAI3LPEN SAI3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SAI3LPEN		(1 << 24)
/** RCC_APB2LPENR_SAI2LPEN SAI2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SAI2LPEN		(1 << 23)
/** RCC_APB2LPENR_SAI1LPEN SAI1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SAI1LPEN		(1 << 22)
/** RCC_APB2LPENR_SPI5LPEN SPI5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SPI5LPEN		(1 << 20)
/** RCC_APB2LPENR_TIM17LPEN TIM17 peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_TIM17LPEN		(1 << 18)
/** RCC_APB2LPENR_TIM16LPEN TIM16 peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_TIM16LPEN		(1 << 17)
/** RCC_APB2LPENR_TIM15LPEN TIM15 peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_TIM15LPEN		(1 << 16)
/** RCC_APB2LPENR_SPI4LPEN SPI4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SPI4LPEN		(1 << 13)
/** RCC_APB2LPENR_SPI1LPEN SPI1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_SPI1LPEN		(1 << 12)
/** RCC_APB2LPENR_USART6LPEN USART6 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_USART6LPEN		(1 << 5)
/** RCC_APB2LPENR_USART1LPEN USART1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB2LPENR_USART1LPEN		(1 << 4)
/** RCC_APB2LPENR_TIM8LPEN TIM8 peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_TIM8LPEN		(1 << 1)
/** RCC_APB2LPENR_TIM1LPEN TIM1 peripheral clock enable during CSleep mode **/
#define RCC_APB2LPENR_TIM1LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb4lpenr APB4LPENR RCC APB4 Sleep Clock Register
@{*/

/** RCC_APB4LPENR_SAI4LPEN SAI4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_SAI4LPEN		(1 << 21)
/** RCC_APB4LPENR_RTCAPBLPEN RTC APB Clock Enable During CSleep Mode **/
#define RCC_APB4LPENR_RTCAPBLPEN		(1 << 16)
/** RCC_APB4LPENR_VREFLPEN VREF peripheral clock enable during CSleep mode **/
#define RCC_APB4LPENR_VREFLPEN		(1 << 15)
/** RCC_APB4LPENR_COMP12LPEN COMP1/2 peripheral clock enable during CSleep mode **/
#define RCC_APB4LPENR_COMP12LPEN		(1 << 14)
/** RCC_APB4LPENR_LPTIM5LPEN LPTIM5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_LPTIM5LPEN		(1 << 12)
/** RCC_APB4LPENR_LPTIM4LPEN LPTIM4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_LPTIM4LPEN		(1 << 11)
/** RCC_APB4LPENR_LPTIM3LPEN LPTIM3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_LPTIM3LPEN		(1 << 10)
/** RCC_APB4LPENR_LPTIM2LPEN LPTIM2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_LPTIM2LPEN		(1 << 9)
/** RCC_APB4LPENR_I2C4LPEN I2C4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_I2C4LPEN		(1 << 7)
/** RCC_APB4LPENR_SPI6LPEN SPI6 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_SPI6LPEN		(1 << 5)
/** RCC_APB4LPENR_LPUART1LPEN LPUART1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_APB4LPENR_LPUART1LPEN		(1 << 3)
/** RCC_APB4LPENR_SYSCFGLPEN SYSCFG peripheral clock enable during CSleep mode **/
#define RCC_APB4LPENR_SYSCFGLPEN		(1 << 1)

/**@}*/

/** @defgroup rcc_c1_rsr C1RSR RCC Reset Status Register
@{*/

/** RCC_C1_RSR_LPWRRSTF Reset due to illegal D1 DStandby or CPU CStop flag **/
#define RCC_C1_RSR_LPWRRSTF		(1 << 30)
/** RCC_C1_RSR_WWDG1RSTF Window Watchdog reset flag **/
#define RCC_C1_RSR_WWDG1RSTF		(1 << 28)
/** RCC_C1_RSR_IWDG1RSTF Independent Watchdog reset flag **/
#define RCC_C1_RSR_IWDG1RSTF		(1 << 26)
/** RCC_C1_RSR_SFTRSTF System reset from CPU reset flag **/
#define RCC_C1_RSR_SFTRSTF		(1 << 24)
/** RCC_C1_RSR_PORRSTF POR/PDR reset flag **/
#define RCC_C1_RSR_PORRSTF		(1 << 23)
/** RCC_C1_RSR_PINRSTF Pin reset flag (NRST) **/
#define RCC_C1_RSR_PINRSTF		(1 << 22)
/** RCC_C1_RSR_BORRSTF BOR reset flag **/
#define RCC_C1_RSR_BORRSTF		(1 << 21)
/** RCC_C1_RSR_D2RSTF D2 domain power switch reset flag **/
#define RCC_C1_RSR_D2RSTF		(1 << 20)
/** RCC_C1_RSR_D1RSTF D1 domain power switch reset flag **/
#define RCC_C1_RSR_D1RSTF		(1 << 19)
/** RCC_C1_RSR_CPURSTF CPU reset flag **/
#define RCC_C1_RSR_CPURSTF		(1 << 17)
/** RCC_C1_RSR_RMVF Remove reset flag **/
#define RCC_C1_RSR_RMVF		(1 << 16)

/**@}*/

/** @defgroup rcc_c1_ahb3enr C1AHB3ENR RCC AHB3 Clock Register
@{*/

/** RCC_C1_AHB3ENR_AXISRAMEN AXISRAM block enable **/
#define RCC_C1_AHB3ENR_AXISRAMEN		(1 << 31)
/** RCC_C1_AHB3ENR_ITCM1EN D1 ITCM block enable **/
#define RCC_C1_AHB3ENR_ITCM1EN		(1 << 30)
/** RCC_C1_AHB3ENR_DTCM2EN D1 DTCM2 block enable **/
#define RCC_C1_AHB3ENR_DTCM2EN		(1 << 29)
/** RCC_C1_AHB3ENR_DTCM1EN D1 DTCM1 block enable **/
#define RCC_C1_AHB3ENR_DTCM1EN		(1 << 28)
/** RCC_C1_AHB3ENR_SDMMC1EN SDMMC1 and SDMMC1 Delay Clock Enable **/
#define RCC_C1_AHB3ENR_SDMMC1EN		(1 << 16)
/** RCC_C1_AHB3ENR_QSPIEN QUADSPI and QUADSPI Delay Clock Enable **/
#define RCC_C1_AHB3ENR_QSPIEN		(1 << 14)
/** RCC_C1_AHB3ENR_FMCEN FMC Peripheral Clocks Enable **/
#define RCC_C1_AHB3ENR_FMCEN		(1 << 12)
/** RCC_C1_AHB3ENR_JPGDECEN JPGDEC Peripheral Clock Enable **/
#define RCC_C1_AHB3ENR_JPGDECEN		(1 << 5)
/** RCC_C1_AHB3ENR_DMA2DEN DMA2D Peripheral Clock Enable **/
#define RCC_C1_AHB3ENR_DMA2DEN		(1 << 4)
/** RCC_C1_AHB3ENR_MDMAEN MDMA Peripheral Clock Enable **/
#define RCC_C1_AHB3ENR_MDMAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb1enr C1AHB1ENR RCC AHB1 Clock Register
@{*/

/** RCC_C1_AHB1ENR_USB2OTGHSEN USB2OTG Peripheral Clocks Enable **/
#define RCC_C1_AHB1ENR_USB2OTGHSEN		(1 << 27)
/** RCC_C1_AHB1ENR_USB1OTGHSULPIEN USB_PHY1 Clocks Enable **/
#define RCC_C1_AHB1ENR_USB1OTGHSULPIEN		(1 << 26)
/** RCC_C1_AHB1ENR_USB1OTGHSEN USB1OTG Peripheral Clocks Enable **/
#define RCC_C1_AHB1ENR_USB1OTGHSEN		(1 << 25)
/** RCC_C1_AHB1ENR_ETH1RXEN Ethernet Reception Clock Enable **/
#define RCC_C1_AHB1ENR_ETH1RXEN		(1 << 17)
/** RCC_C1_AHB1ENR_ETH1TXEN Ethernet Transmission Clock Enable **/
#define RCC_C1_AHB1ENR_ETH1TXEN		(1 << 16)
/** RCC_C1_AHB1ENR_ETH1MACEN Ethernet MAC bus interface Clock Enable **/
#define RCC_C1_AHB1ENR_ETH1MACEN		(1 << 15)
/** RCC_C1_AHB1ENR_ARTEN ART Clock Enable **/
#define RCC_C1_AHB1ENR_ARTEN		(1 << 14)
/** RCC_C1_AHB1ENR_ADC12EN ADC1/2 Peripheral Clocks Enable **/
#define RCC_C1_AHB1ENR_ADC12EN		(1 << 5)
/** RCC_C1_AHB1ENR_DMA2EN DMA2 Clock Enable **/
#define RCC_C1_AHB1ENR_DMA2EN		(1 << 1)
/** RCC_C1_AHB1ENR_DMA1EN DMA1 Clock Enable **/
#define RCC_C1_AHB1ENR_DMA1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb2enr C1AHB2ENR RCC AHB2 Clock Register
@{*/

/** RCC_C1_AHB2ENR_SRAM3EN SRAM3 block enable **/
#define RCC_C1_AHB2ENR_SRAM3EN		(1 << 31)
/** RCC_C1_AHB2ENR_SRAM2EN SRAM2 block enable **/
#define RCC_C1_AHB2ENR_SRAM2EN		(1 << 30)
/** RCC_C1_AHB2ENR_SRAM1EN SRAM1 block enable **/
#define RCC_C1_AHB2ENR_SRAM1EN		(1 << 29)
/** RCC_C1_AHB2ENR_SDMMC2EN SDMMC2 and SDMMC2 delay clock enable **/
#define RCC_C1_AHB2ENR_SDMMC2EN		(1 << 9)
/** RCC_C1_AHB2ENR_RNGEN RNG peripheral clocks enable **/
#define RCC_C1_AHB2ENR_RNGEN		(1 << 6)
/** RCC_C1_AHB2ENR_HASHEN HASH peripheral clock enable **/
#define RCC_C1_AHB2ENR_HASHEN		(1 << 5)
/** RCC_C1_AHB2ENR_CRYPTEN CRYPT peripheral clock enable **/
#define RCC_C1_AHB2ENR_CRYPTEN		(1 << 4)
/** RCC_C1_AHB2ENR_CAMITFEN CAMITF peripheral clock enable **/
#define RCC_C1_AHB2ENR_CAMITFEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb4enr C1AHB4ENR RCC AHB4 Clock Register
@{*/

/** RCC_C1_AHB4ENR_BKPRAMEN Backup RAM Clock Enable **/
#define RCC_C1_AHB4ENR_BKPRAMEN		(1 << 28)
/** RCC_C1_AHB4ENR_HSEMEN HSEM peripheral clock enable **/
#define RCC_C1_AHB4ENR_HSEMEN		(1 << 25)
/** RCC_C1_AHB4ENR_ADC3EN ADC3 Peripheral Clocks Enable **/
#define RCC_C1_AHB4ENR_ADC3EN		(1 << 24)
/** RCC_C1_AHB4ENR_BDMAEN BDMA and DMAMUX2 Clock Enable **/
#define RCC_C1_AHB4ENR_BDMAEN		(1 << 21)
/** RCC_C1_AHB4ENR_CRCEN CRC peripheral clock enable **/
#define RCC_C1_AHB4ENR_CRCEN		(1 << 19)
/** RCC_C1_AHB4ENR_GPIOKEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOKEN		(1 << 10)
/** RCC_C1_AHB4ENR_GPIOJEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOJEN		(1 << 9)
/** RCC_C1_AHB4ENR_GPIOIEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOIEN		(1 << 8)
/** RCC_C1_AHB4ENR_GPIOHEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOHEN		(1 << 7)
/** RCC_C1_AHB4ENR_GPIOGEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOGEN		(1 << 6)
/** RCC_C1_AHB4ENR_GPIOFEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOFEN		(1 << 5)
/** RCC_C1_AHB4ENR_GPIOEEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOEEN		(1 << 4)
/** RCC_C1_AHB4ENR_GPIODEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIODEN		(1 << 3)
/** RCC_C1_AHB4ENR_GPIOCEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOCEN		(1 << 2)
/** RCC_C1_AHB4ENR_GPIOBEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOBEN		(1 << 1)
/** RCC_C1_AHB4ENR_GPIOAEN 0GPIO peripheral clock enable **/
#define RCC_C1_AHB4ENR_GPIOAEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb3enr C1APB3ENR RCC APB3 Clock Register
@{*/

/** RCC_C1_APB3ENR_WWDG1EN WWDG1 Clock Enable **/
#define RCC_C1_APB3ENR_WWDG1EN		(1 << 6)
/** RCC_C1_APB3ENR_DSIEN DSI Peripheral Clocks Enable **/
#define RCC_C1_APB3ENR_DSIEN		(1 << 4)
/** RCC_C1_APB3ENR_LTDCEN LTDC peripheral clock enable **/
#define RCC_C1_APB3ENR_LTDCEN		(1 << 3)

/**@}*/

/** @defgroup rcc_c1_apb1lenr C1APB1LENR RCC APB1 Clock Register
@{*/

/** RCC_C1_APB1LENR_USART8EN USART8 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_USART8EN		(1 << 31)
/** RCC_C1_APB1LENR_USART7EN USART7 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_USART7EN		(1 << 30)
/** RCC_C1_APB1LENR_DAC12EN DAC1&2 peripheral clock enable **/
#define RCC_C1_APB1LENR_DAC12EN		(1 << 29)
/** RCC_C1_APB1LENR_HDMICECEN HDMI-CEC peripheral clock enable **/
#define RCC_C1_APB1LENR_HDMICECEN		(1 << 27)
/** RCC_C1_APB1LENR_I2C3EN I2C3 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_I2C3EN		(1 << 23)
/** RCC_C1_APB1LENR_I2C2EN I2C2 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_I2C2EN		(1 << 22)
/** RCC_C1_APB1LENR_I2C1EN I2C1 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_I2C1EN		(1 << 21)
/** RCC_C1_APB1LENR_UART5EN UART5 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_UART5EN		(1 << 20)
/** RCC_C1_APB1LENR_UART4EN UART4 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_UART4EN		(1 << 19)
/** RCC_C1_APB1LENR_USART3EN USART3 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_USART3EN		(1 << 18)
/** RCC_C1_APB1LENR_USART2EN USART2 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_USART2EN		(1 << 17)
/** RCC_C1_APB1LENR_SPDIFRXEN SPDIFRX Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_SPDIFRXEN		(1 << 16)
/** RCC_C1_APB1LENR_SPI3EN SPI3 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_SPI3EN		(1 << 15)
/** RCC_C1_APB1LENR_SPI2EN SPI2 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_SPI2EN		(1 << 14)
/** RCC_C1_APB1LENR_LPTIM1EN LPTIM1 Peripheral Clocks Enable **/
#define RCC_C1_APB1LENR_LPTIM1EN		(1 << 9)
/** RCC_C1_APB1LENR_TIM14EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM14EN		(1 << 8)
/** RCC_C1_APB1LENR_TIM13EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM13EN		(1 << 7)
/** RCC_C1_APB1LENR_TIM12EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM12EN		(1 << 6)
/** RCC_C1_APB1LENR_TIM7EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM7EN		(1 << 5)
/** RCC_C1_APB1LENR_TIM6EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM6EN		(1 << 4)
/** RCC_C1_APB1LENR_TIM5EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM5EN		(1 << 3)
/** RCC_C1_APB1LENR_TIM4EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM4EN		(1 << 2)
/** RCC_C1_APB1LENR_TIM3EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM3EN		(1 << 1)
/** RCC_C1_APB1LENR_TIM2EN TIM peripheral clock enable **/
#define RCC_C1_APB1LENR_TIM2EN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb1henr C1APB1HENR RCC APB1 Clock Register
@{*/

/** RCC_C1_APB1HENR_FDCANEN FDCAN Peripheral Clocks Enable **/
#define RCC_C1_APB1HENR_FDCANEN		(1 << 8)
/** RCC_C1_APB1HENR_MDIOSEN MDIOS peripheral clock enable **/
#define RCC_C1_APB1HENR_MDIOSEN		(1 << 5)
/** RCC_C1_APB1HENR_OPAMPEN OPAMP peripheral clock enable **/
#define RCC_C1_APB1HENR_OPAMPEN		(1 << 4)
/** RCC_C1_APB1HENR_SWPEN SWPMI Peripheral Clocks Enable **/
#define RCC_C1_APB1HENR_SWPEN		(1 << 2)
/** RCC_C1_APB1HENR_CRSEN Clock Recovery System peripheral clock enable **/
#define RCC_C1_APB1HENR_CRSEN		(1 << 1)

/**@}*/

/** @defgroup rcc_c1_apb2enr C1APB2ENR RCC APB2 Clock Register
@{*/

/** RCC_C1_APB2ENR_HRTIMEN HRTIM peripheral clock enable **/
#define RCC_C1_APB2ENR_HRTIMEN		(1 << 29)
/** RCC_C1_APB2ENR_DFSDM1EN DFSDM1 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_DFSDM1EN		(1 << 28)
/** RCC_C1_APB2ENR_SAI3EN SAI3 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SAI3EN		(1 << 24)
/** RCC_C1_APB2ENR_SAI2EN SAI2 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SAI2EN		(1 << 23)
/** RCC_C1_APB2ENR_SAI1EN SAI1 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SAI1EN		(1 << 22)
/** RCC_C1_APB2ENR_SPI5EN SPI5 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SPI5EN		(1 << 20)
/** RCC_C1_APB2ENR_TIM17EN TIM17 peripheral clock enable **/
#define RCC_C1_APB2ENR_TIM17EN		(1 << 18)
/** RCC_C1_APB2ENR_TIM16EN TIM16 peripheral clock enable **/
#define RCC_C1_APB2ENR_TIM16EN		(1 << 17)
/** RCC_C1_APB2ENR_TIM15EN TIM15 peripheral clock enable **/
#define RCC_C1_APB2ENR_TIM15EN		(1 << 16)
/** RCC_C1_APB2ENR_SPI4EN SPI4 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SPI4EN		(1 << 13)
/** RCC_C1_APB2ENR_SPI1EN SPI1 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_SPI1EN		(1 << 12)
/** RCC_C1_APB2ENR_USART6EN USART6 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_USART6EN		(1 << 5)
/** RCC_C1_APB2ENR_USART1EN USART1 Peripheral Clocks Enable **/
#define RCC_C1_APB2ENR_USART1EN		(1 << 4)
/** RCC_C1_APB2ENR_TIM8EN TIM8 peripheral clock enable **/
#define RCC_C1_APB2ENR_TIM8EN		(1 << 1)
/** RCC_C1_APB2ENR_TIM1EN TIM1 peripheral clock enable **/
#define RCC_C1_APB2ENR_TIM1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb4enr C1APB4ENR RCC APB4 Clock Register
@{*/

/** RCC_C1_APB4ENR_SAI4EN SAI4 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_SAI4EN		(1 << 21)
/** RCC_C1_APB4ENR_RTCAPBEN RTC APB Clock Enable **/
#define RCC_C1_APB4ENR_RTCAPBEN		(1 << 16)
/** RCC_C1_APB4ENR_VREFEN VREF peripheral clock enable **/
#define RCC_C1_APB4ENR_VREFEN		(1 << 15)
/** RCC_C1_APB4ENR_COMP12EN COMP1/2 peripheral clock enable **/
#define RCC_C1_APB4ENR_COMP12EN		(1 << 14)
/** RCC_C1_APB4ENR_LPTIM5EN LPTIM5 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_LPTIM5EN		(1 << 12)
/** RCC_C1_APB4ENR_LPTIM4EN LPTIM4 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_LPTIM4EN		(1 << 11)
/** RCC_C1_APB4ENR_LPTIM3EN LPTIM3 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_LPTIM3EN		(1 << 10)
/** RCC_C1_APB4ENR_LPTIM2EN LPTIM2 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_LPTIM2EN		(1 << 9)
/** RCC_C1_APB4ENR_I2C4EN I2C4 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_I2C4EN		(1 << 7)
/** RCC_C1_APB4ENR_SPI6EN SPI6 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_SPI6EN		(1 << 5)
/** RCC_C1_APB4ENR_LPUART1EN LPUART1 Peripheral Clocks Enable **/
#define RCC_C1_APB4ENR_LPUART1EN		(1 << 3)
/** RCC_C1_APB4ENR_SYSCFGEN SYSCFG peripheral clock enable **/
#define RCC_C1_APB4ENR_SYSCFGEN		(1 << 1)

/**@}*/

/** @defgroup rcc_c1_ahb3lpenr C1AHB3LPENR RCC AHB3 Sleep Clock Register
@{*/

/** RCC_C1_AHB3LPENR_AXISRAMLPEN AXISRAM Block Clock Enable During CSleep mode **/
#define RCC_C1_AHB3LPENR_AXISRAMLPEN		(1 << 31)
/** RCC_C1_AHB3LPENR_ITCMLPEN D1ITCM Block Clock Enable During CSleep mode **/
#define RCC_C1_AHB3LPENR_ITCMLPEN		(1 << 30)
/** RCC_C1_AHB3LPENR_DTCM2LPEN D1 DTCM2 Block Clock Enable During CSleep mode **/
#define RCC_C1_AHB3LPENR_DTCM2LPEN		(1 << 29)
/** RCC_C1_AHB3LPENR_D1DTCM1LPEN D1DTCM1 Block Clock Enable During CSleep mode **/
#define RCC_C1_AHB3LPENR_D1DTCM1LPEN		(1 << 28)
/** RCC_C1_AHB3LPENR_SDMMC1LPEN SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_SDMMC1LPEN		(1 << 16)
/** RCC_C1_AHB3LPENR_QSPILPEN QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_QSPILPEN		(1 << 14)
/** RCC_C1_AHB3LPENR_FMCLPEN FMC Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_FMCLPEN		(1 << 12)
/** RCC_C1_AHB3LPENR_FLITFLPEN FLITF Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_FLITFLPEN		(1 << 8)
/** RCC_C1_AHB3LPENR_JPGDECLPEN JPGDEC Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_JPGDECLPEN		(1 << 5)
/** RCC_C1_AHB3LPENR_DMA2DLPEN DMA2D Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_DMA2DLPEN		(1 << 4)
/** RCC_C1_AHB3LPENR_MDMALPEN MDMA Clock Enable During CSleep Mode **/
#define RCC_C1_AHB3LPENR_MDMALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb1lpenr C1AHB1LPENR RCC AHB1 Sleep Clock Register
@{*/

/** RCC_C1_AHB1LPENR_USB2OTGHSLPEN USB2OTG peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB1LPENR_USB2OTGHSLPEN		(1 << 27)
/** RCC_C1_AHB1LPENR_USB1OTGHSULPILPEN USB_PHY1 clock enable during CSleep mode **/
#define RCC_C1_AHB1LPENR_USB1OTGHSULPILPEN		(1 << 26)
/** RCC_C1_AHB1LPENR_USB1OTGHSLPEN USB1OTG peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB1LPENR_USB1OTGHSLPEN		(1 << 25)
/** RCC_C1_AHB1LPENR_ETH1RXLPEN Ethernet Reception Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_ETH1RXLPEN		(1 << 17)
/** RCC_C1_AHB1LPENR_ETH1TXLPEN Ethernet Transmission Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_ETH1TXLPEN		(1 << 16)
/** RCC_C1_AHB1LPENR_ETH1MACLPEN Ethernet MAC bus interface Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_ETH1MACLPEN		(1 << 15)
/** RCC_C1_AHB1LPENR_ARTLPEN ART Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_ARTLPEN		(1 << 14)
/** RCC_C1_AHB1LPENR_ADC12LPEN ADC1/2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_ADC12LPEN		(1 << 5)
/** RCC_C1_AHB1LPENR_DMA2LPEN DMA2 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_DMA2LPEN		(1 << 1)
/** RCC_C1_AHB1LPENR_DMA1LPEN DMA1 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB1LPENR_DMA1LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb2lpenr C1AHB2LPENR RCC AHB2 Sleep Clock Register
@{*/

/** RCC_C1_AHB2LPENR_SRAM3LPEN SRAM3 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB2LPENR_SRAM3LPEN		(1 << 31)
/** RCC_C1_AHB2LPENR_SRAM2LPEN SRAM2 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB2LPENR_SRAM2LPEN		(1 << 30)
/** RCC_C1_AHB2LPENR_SRAM1LPEN SRAM1 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB2LPENR_SRAM1LPEN		(1 << 29)
/** RCC_C1_AHB2LPENR_SDMMC2LPEN SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode **/
#define RCC_C1_AHB2LPENR_SDMMC2LPEN		(1 << 9)
/** RCC_C1_AHB2LPENR_RNGLPEN RNG peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB2LPENR_RNGLPEN		(1 << 6)
/** RCC_C1_AHB2LPENR_HASHLPEN HASH peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB2LPENR_HASHLPEN		(1 << 5)
/** RCC_C1_AHB2LPENR_CRYPTLPEN CRYPT peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB2LPENR_CRYPTLPEN		(1 << 4)
/** RCC_C1_AHB2LPENR_CAMITFLPEN CAMITF peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB2LPENR_CAMITFLPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_ahb4lpenr C1AHB4LPENR RCC AHB4 Sleep Clock Register
@{*/

/** RCC_C1_AHB4LPENR_SRAM4LPEN SRAM4 Clock Enable During CSleep Mode **/
#define RCC_C1_AHB4LPENR_SRAM4LPEN		(1 << 29)
/** RCC_C1_AHB4LPENR_BKPRAMLPEN Backup RAM Clock Enable During CSleep Mode **/
#define RCC_C1_AHB4LPENR_BKPRAMLPEN		(1 << 28)
/** RCC_C1_AHB4LPENR_ADC3LPEN ADC3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_AHB4LPENR_ADC3LPEN		(1 << 24)
/** RCC_C1_AHB4LPENR_BDMALPEN BDMA Clock Enable During CSleep Mode **/
#define RCC_C1_AHB4LPENR_BDMALPEN		(1 << 21)
/** RCC_C1_AHB4LPENR_CRCLPEN CRC peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_CRCLPEN		(1 << 19)
/** RCC_C1_AHB4LPENR_GPIOKLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOKLPEN		(1 << 10)
/** RCC_C1_AHB4LPENR_GPIOJLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOJLPEN		(1 << 9)
/** RCC_C1_AHB4LPENR_GPIOILPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOILPEN		(1 << 8)
/** RCC_C1_AHB4LPENR_GPIOHLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOHLPEN		(1 << 7)
/** RCC_C1_AHB4LPENR_GPIOGLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOGLPEN		(1 << 6)
/** RCC_C1_AHB4LPENR_GPIOFLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOFLPEN		(1 << 5)
/** RCC_C1_AHB4LPENR_GPIOELPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOELPEN		(1 << 4)
/** RCC_C1_AHB4LPENR_GPIODLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIODLPEN		(1 << 3)
/** RCC_C1_AHB4LPENR_GPIOCLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOCLPEN		(1 << 2)
/** RCC_C1_AHB4LPENR_GPIOBLPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOBLPEN		(1 << 1)
/** RCC_C1_AHB4LPENR_GPIOALPEN GPIO peripheral clock enable during CSleep mode **/
#define RCC_C1_AHB4LPENR_GPIOALPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb3lpenr C1APB3LPENR RCC APB3 Sleep Clock Register
@{*/

/** RCC_C1_APB3LPENR_WWDG1LPEN WWDG1 Clock Enable During CSleep Mode **/
#define RCC_C1_APB3LPENR_WWDG1LPEN		(1 << 6)
/** RCC_C1_APB3LPENR_DSILPEN DSI peripheral clock enable during CSleep mode **/
#define RCC_C1_APB3LPENR_DSILPEN		(1 << 4)
/** RCC_C1_APB3LPENR_LTDCLPEN LTDC peripheral clock enable during CSleep mode **/
#define RCC_C1_APB3LPENR_LTDCLPEN		(1 << 3)

/**@}*/

/** @defgroup rcc_c1_apb1llpenr C1APB1LLPENR RCC APB1 Low Sleep Clock Register
@{*/

/** RCC_C1_APB1LLPENR_USART8LPEN USART8 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_USART8LPEN		(1 << 31)
/** RCC_C1_APB1LLPENR_USART7LPEN USART7 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_USART7LPEN		(1 << 30)
/** RCC_C1_APB1LLPENR_DAC12LPEN DAC1/2 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_DAC12LPEN		(1 << 29)
/** RCC_C1_APB1LLPENR_HDMICECLPEN HDMI-CEC Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_HDMICECLPEN		(1 << 27)
/** RCC_C1_APB1LLPENR_I2C3LPEN I2C3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_I2C3LPEN		(1 << 23)
/** RCC_C1_APB1LLPENR_I2C2LPEN I2C2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_I2C2LPEN		(1 << 22)
/** RCC_C1_APB1LLPENR_I2C1LPEN I2C1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_I2C1LPEN		(1 << 21)
/** RCC_C1_APB1LLPENR_UART5LPEN UART5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_UART5LPEN		(1 << 20)
/** RCC_C1_APB1LLPENR_UART4LPEN UART4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_UART4LPEN		(1 << 19)
/** RCC_C1_APB1LLPENR_USART3LPEN USART3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_USART3LPEN		(1 << 18)
/** RCC_C1_APB1LLPENR_USART2LPEN USART2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_USART2LPEN		(1 << 17)
/** RCC_C1_APB1LLPENR_SPDIFRXLPEN SPDIFRX Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_SPDIFRXLPEN		(1 << 16)
/** RCC_C1_APB1LLPENR_SPI3LPEN SPI3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_SPI3LPEN		(1 << 15)
/** RCC_C1_APB1LLPENR_SPI2LPEN SPI2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_SPI2LPEN		(1 << 14)
/** RCC_C1_APB1LLPENR_WWDG2LPEN WWDG2 Clock Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_WWDG2LPEN		(1 << 11)
/** RCC_C1_APB1LLPENR_LPTIM1LPEN LPTIM1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1LLPENR_LPTIM1LPEN		(1 << 9)
/** RCC_C1_APB1LLPENR_TIM14LPEN TIM14 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM14LPEN		(1 << 8)
/** RCC_C1_APB1LLPENR_TIM13LPEN TIM13 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM13LPEN		(1 << 7)
/** RCC_C1_APB1LLPENR_TIM12LPEN TIM12 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM12LPEN		(1 << 6)
/** RCC_C1_APB1LLPENR_TIM7LPEN TIM7 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM7LPEN		(1 << 5)
/** RCC_C1_APB1LLPENR_TIM6LPEN TIM6 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM6LPEN		(1 << 4)
/** RCC_C1_APB1LLPENR_TIM5LPEN TIM5 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM5LPEN		(1 << 3)
/** RCC_C1_APB1LLPENR_TIM4LPEN TIM4 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM4LPEN		(1 << 2)
/** RCC_C1_APB1LLPENR_TIM3LPEN TIM3 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM3LPEN		(1 << 1)
/** RCC_C1_APB1LLPENR_TIM2LPEN TIM2 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1LLPENR_TIM2LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb1hlpenr C1APB1HLPENR RCC APB1 High Sleep Clock Register
@{*/

/** RCC_C1_APB1HLPENR_FDCANLPEN FDCAN Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1HLPENR_FDCANLPEN		(1 << 8)
/** RCC_C1_APB1HLPENR_MDIOSLPEN MDIOS peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1HLPENR_MDIOSLPEN		(1 << 5)
/** RCC_C1_APB1HLPENR_OPAMPLPEN OPAMP peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1HLPENR_OPAMPLPEN		(1 << 4)
/** RCC_C1_APB1HLPENR_SWPLPEN SWPMI Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB1HLPENR_SWPLPEN		(1 << 2)
/** RCC_C1_APB1HLPENR_CRSLPEN Clock Recovery System peripheral clock enable during CSleep mode **/
#define RCC_C1_APB1HLPENR_CRSLPEN		(1 << 1)

/**@}*/

/** @defgroup rcc_c1_apb2lpenr C1APB2LPENR RCC APB2 Sleep Clock Register
@{*/

/** RCC_C1_APB2LPENR_HRTIMLPEN HRTIM peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_HRTIMLPEN		(1 << 29)
/** RCC_C1_APB2LPENR_DFSDM1LPEN DFSDM1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_DFSDM1LPEN		(1 << 28)
/** RCC_C1_APB2LPENR_SAI3LPEN SAI3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SAI3LPEN		(1 << 24)
/** RCC_C1_APB2LPENR_SAI2LPEN SAI2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SAI2LPEN		(1 << 23)
/** RCC_C1_APB2LPENR_SAI1LPEN SAI1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SAI1LPEN		(1 << 22)
/** RCC_C1_APB2LPENR_SPI5LPEN SPI5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SPI5LPEN		(1 << 20)
/** RCC_C1_APB2LPENR_TIM17LPEN TIM17 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_TIM17LPEN		(1 << 18)
/** RCC_C1_APB2LPENR_TIM16LPEN TIM16 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_TIM16LPEN		(1 << 17)
/** RCC_C1_APB2LPENR_TIM15LPEN TIM15 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_TIM15LPEN		(1 << 16)
/** RCC_C1_APB2LPENR_SPI4LPEN SPI4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SPI4LPEN		(1 << 13)
/** RCC_C1_APB2LPENR_SPI1LPEN SPI1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_SPI1LPEN		(1 << 12)
/** RCC_C1_APB2LPENR_USART6LPEN USART6 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_USART6LPEN		(1 << 5)
/** RCC_C1_APB2LPENR_USART1LPEN USART1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB2LPENR_USART1LPEN		(1 << 4)
/** RCC_C1_APB2LPENR_TIM8LPEN TIM8 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_TIM8LPEN		(1 << 1)
/** RCC_C1_APB2LPENR_TIM1LPEN TIM1 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB2LPENR_TIM1LPEN		(1 << 0)

/**@}*/

/** @defgroup rcc_c1_apb4lpenr C1APB4LPENR RCC APB4 Sleep Clock Register
@{*/

/** RCC_C1_APB4LPENR_SAI4LPEN SAI4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_SAI4LPEN		(1 << 21)
/** RCC_C1_APB4LPENR_RTCAPBLPEN RTC APB Clock Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_RTCAPBLPEN		(1 << 16)
/** RCC_C1_APB4LPENR_VREFLPEN VREF peripheral clock enable during CSleep mode **/
#define RCC_C1_APB4LPENR_VREFLPEN		(1 << 15)
/** RCC_C1_APB4LPENR_COMP12LPEN COMP1/2 peripheral clock enable during CSleep mode **/
#define RCC_C1_APB4LPENR_COMP12LPEN		(1 << 14)
/** RCC_C1_APB4LPENR_LPTIM5LPEN LPTIM5 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_LPTIM5LPEN		(1 << 12)
/** RCC_C1_APB4LPENR_LPTIM4LPEN LPTIM4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_LPTIM4LPEN		(1 << 11)
/** RCC_C1_APB4LPENR_LPTIM3LPEN LPTIM3 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_LPTIM3LPEN		(1 << 10)
/** RCC_C1_APB4LPENR_LPTIM2LPEN LPTIM2 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_LPTIM2LPEN		(1 << 9)
/** RCC_C1_APB4LPENR_I2C4LPEN I2C4 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_I2C4LPEN		(1 << 7)
/** RCC_C1_APB4LPENR_SPI6LPEN SPI6 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_SPI6LPEN		(1 << 5)
/** RCC_C1_APB4LPENR_LPUART1LPEN LPUART1 Peripheral Clocks Enable During CSleep Mode **/
#define RCC_C1_APB4LPENR_LPUART1LPEN		(1 << 3)
/** RCC_C1_APB4LPENR_SYSCFGLPEN SYSCFG peripheral clock enable during CSleep mode **/
#define RCC_C1_APB4LPENR_SYSCFGLPEN		(1 << 1)

/**@}*/

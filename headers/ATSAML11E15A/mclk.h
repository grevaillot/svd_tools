#pragma once 

/* --- MCLK: Main Clock --------------------------------------------- */

/** @defgroup mclk_registers Main Clock Register
@{*/

/** MCLK_CTRLA Control **/
#define MCLK_CTRLA			MMIO32(MCLK_BASE + 0x00)
/** MCLK_INTENCLR Interrupt Enable Clear **/
#define MCLK_INTENCLR			MMIO32(MCLK_BASE + 0x01)
/** MCLK_INTENSET Interrupt Enable Set **/
#define MCLK_INTENSET			MMIO32(MCLK_BASE + 0x02)
/** MCLK_INTFLAG Interrupt Flag Status and Clear **/
#define MCLK_INTFLAG			MMIO32(MCLK_BASE + 0x03)
/** MCLK_CPUDIV CPU Clock Division **/
#define MCLK_CPUDIV			MMIO32(MCLK_BASE + 0x04)
/** MCLK_AHBMASK AHB Mask **/
#define MCLK_AHBMASK			MMIO32(MCLK_BASE + 0x10)
/** MCLK_APBAMASK APBA Mask **/
#define MCLK_APBAMASK			MMIO32(MCLK_BASE + 0x14)
/** MCLK_APBBMASK APBB Mask **/
#define MCLK_APBBMASK			MMIO32(MCLK_BASE + 0x18)
/** MCLK_APBCMASK APBC Mask **/
#define MCLK_APBCMASK			MMIO32(MCLK_BASE + 0x1c)

/**@}*/


/** @defgroup mclk_ctrla CTRLA Control
@{*/

/** MCLK_CTRLA_CKSEL Clock Select **/
#define MCLK_CTRLA_CKSEL		(1 << 2)

/**@}*/

/** @defgroup mclk_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** MCLK_INTENCLR_CKRDY Clock Ready Interrupt Enable **/
#define MCLK_INTENCLR_CKRDY		(1 << 0)

/**@}*/

/** @defgroup mclk_intenset INTENSET Interrupt Enable Set
@{*/

/** MCLK_INTENSET_CKRDY Clock Ready Interrupt Enable **/
#define MCLK_INTENSET_CKRDY		(1 << 0)

/**@}*/

/** @defgroup mclk_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** MCLK_INTFLAG_CKRDY Clock Ready **/
#define MCLK_INTFLAG_CKRDY		(1 << 0)

/**@}*/

/** @defgroup mclk_cpudiv CPUDIV CPU Clock Division
@{*/


#define MCLK_CPUDIV_CPUDIV_SHIFT		0
#define MCLK_CPUDIV_CPUDIV_MASK		0xff
/** @defgroup mclk_cpudiv_cpudiv CPUDIV CPU Clock Division Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup mclk_ahbmask AHBMASK AHB Mask
@{*/

/** MCLK_AHBMASK_TRAM_ TRAM AHB Clock Mask **/
#define MCLK_AHBMASK_TRAM_		(1 << 12)
/** MCLK_AHBMASK_NVMCTRL_ NVMCTRL AHB Clock Mask **/
#define MCLK_AHBMASK_NVMCTRL_		(1 << 7)
/** MCLK_AHBMASK_PAC_ PAC AHB Clock Mask **/
#define MCLK_AHBMASK_PAC_		(1 << 6)
/** MCLK_AHBMASK_DSU_ DSU AHB Clock Mask **/
#define MCLK_AHBMASK_DSU_		(1 << 4)
/** MCLK_AHBMASK_DMAC_ DMAC AHB Clock Mask **/
#define MCLK_AHBMASK_DMAC_		(1 << 3)
/** MCLK_AHBMASK_HPB2_ HPB2 AHB Clock Mask **/
#define MCLK_AHBMASK_HPB2_		(1 << 2)
/** MCLK_AHBMASK_HPB1_ HPB1 AHB Clock Mask **/
#define MCLK_AHBMASK_HPB1_		(1 << 1)
/** MCLK_AHBMASK_HPB0_ HPB0 AHB Clock Mask **/
#define MCLK_AHBMASK_HPB0_		(1 << 0)

/**@}*/

/** @defgroup mclk_apbamask APBAMASK APBA Mask
@{*/

/** MCLK_APBAMASK_AC_ AC APB Clock Enable **/
#define MCLK_APBAMASK_AC_		(1 << 13)
/** MCLK_APBAMASK_PORT_ PORT APB Clock Enable **/
#define MCLK_APBAMASK_PORT_		(1 << 12)
/** MCLK_APBAMASK_FREQM_ FREQM APB Clock Enable **/
#define MCLK_APBAMASK_FREQM_		(1 << 11)
/** MCLK_APBAMASK_EIC_ EIC APB Clock Enable **/
#define MCLK_APBAMASK_EIC_		(1 << 10)
/** MCLK_APBAMASK_RTC_ RTC APB Clock Enable **/
#define MCLK_APBAMASK_RTC_		(1 << 9)
/** MCLK_APBAMASK_WDT_ WDT APB Clock Enable **/
#define MCLK_APBAMASK_WDT_		(1 << 8)
/** MCLK_APBAMASK_GCLK_ GCLK APB Clock Enable **/
#define MCLK_APBAMASK_GCLK_		(1 << 7)
/** MCLK_APBAMASK_SUPC_ SUPC APB Clock Enable **/
#define MCLK_APBAMASK_SUPC_		(1 << 6)
/** MCLK_APBAMASK_OSC32KCTRL_ OSC32KCTRL APB Clock Enable **/
#define MCLK_APBAMASK_OSC32KCTRL_		(1 << 5)
/** MCLK_APBAMASK_OSCCTRL_ OSCCTRL APB Clock Enable **/
#define MCLK_APBAMASK_OSCCTRL_		(1 << 4)
/** MCLK_APBAMASK_RSTC_ RSTC APB Clock Enable **/
#define MCLK_APBAMASK_RSTC_		(1 << 3)
/** MCLK_APBAMASK_MCLK_ MCLK APB Clock Enable **/
#define MCLK_APBAMASK_MCLK_		(1 << 2)
/** MCLK_APBAMASK_PM_ PM APB Clock Enable **/
#define MCLK_APBAMASK_PM_		(1 << 1)
/** MCLK_APBAMASK_PAC_ PAC APB Clock Enable **/
#define MCLK_APBAMASK_PAC_		(1 << 0)

/**@}*/

/** @defgroup mclk_apbbmask APBBMASK APBB Mask
@{*/

/** MCLK_APBBMASK_NVMCTRL_ NVMCTRL APB Clock Enable **/
#define MCLK_APBBMASK_NVMCTRL_		(1 << 2)
/** MCLK_APBBMASK_DSU_ DSU APB Clock Enable **/
#define MCLK_APBBMASK_DSU_		(1 << 1)
/** MCLK_APBBMASK_IDAU_ IDAU APB Clock Enable **/
#define MCLK_APBBMASK_IDAU_		(1 << 0)

/**@}*/

/** @defgroup mclk_apbcmask APBCMASK APBC Mask
@{*/

/** MCLK_APBCMASK_OPAMP_ OPAMP APB Clock Enable **/
#define MCLK_APBCMASK_OPAMP_		(1 << 12)
/** MCLK_APBCMASK_CCL_ CCL APB Clock Enable **/
#define MCLK_APBCMASK_CCL_		(1 << 11)
/** MCLK_APBCMASK_TRNG_ TRNG APB Clock Enable **/
#define MCLK_APBCMASK_TRNG_		(1 << 10)
/** MCLK_APBCMASK_PTC_ PTC APB Clock Enable **/
#define MCLK_APBCMASK_PTC_		(1 << 9)
/** MCLK_APBCMASK_DAC_ DAC APB Clock Enable **/
#define MCLK_APBCMASK_DAC_		(1 << 8)
/** MCLK_APBCMASK_ADC_ ADC APB Clock Enable **/
#define MCLK_APBCMASK_ADC_		(1 << 7)
/** MCLK_APBCMASK_TC2_ TC2 APB Clock Enable **/
#define MCLK_APBCMASK_TC2_		(1 << 6)
/** MCLK_APBCMASK_TC1_ TC1 APB Clock Enable **/
#define MCLK_APBCMASK_TC1_		(1 << 5)
/** MCLK_APBCMASK_TC0_ TC0 APB Clock Enable **/
#define MCLK_APBCMASK_TC0_		(1 << 4)
/** MCLK_APBCMASK_SERCOM2_ SERCOM2 APB Clock Enable **/
#define MCLK_APBCMASK_SERCOM2_		(1 << 3)
/** MCLK_APBCMASK_SERCOM1_ SERCOM1 APB Clock Enable **/
#define MCLK_APBCMASK_SERCOM1_		(1 << 2)
/** MCLK_APBCMASK_SERCOM0_ SERCOM0 APB Clock Enable **/
#define MCLK_APBCMASK_SERCOM0_		(1 << 1)
/** MCLK_APBCMASK_EVSYS_ EVSYS APB Clock Enable **/
#define MCLK_APBCMASK_EVSYS_		(1 << 0)

/**@}*/

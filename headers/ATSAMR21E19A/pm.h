#pragma once 

/* --- PM: Power Manager -------------------------------------------- */

/** @defgroup pm_registers Power Manager Register
@{*/

/** PM_CTRL Control **/
#define PM_CTRL			MMIO32(PM_BASE + 0x00)
/** PM_SLEEP Sleep Mode **/
#define PM_SLEEP			MMIO32(PM_BASE + 0x01)
/** PM_CPUSEL CPU Clock Select **/
#define PM_CPUSEL			MMIO32(PM_BASE + 0x08)
/** PM_APBASEL APBA Clock Select **/
#define PM_APBASEL			MMIO32(PM_BASE + 0x09)
/** PM_APBBSEL APBB Clock Select **/
#define PM_APBBSEL			MMIO32(PM_BASE + 0x0a)
/** PM_APBCSEL APBC Clock Select **/
#define PM_APBCSEL			MMIO32(PM_BASE + 0x0b)
/** PM_AHBMASK AHB Mask **/
#define PM_AHBMASK			MMIO32(PM_BASE + 0x14)
/** PM_APBAMASK APBA Mask **/
#define PM_APBAMASK			MMIO32(PM_BASE + 0x18)
/** PM_APBBMASK APBB Mask **/
#define PM_APBBMASK			MMIO32(PM_BASE + 0x1c)
/** PM_APBCMASK APBC Mask **/
#define PM_APBCMASK			MMIO32(PM_BASE + 0x20)
/** PM_INTENCLR Interrupt Enable Clear **/
#define PM_INTENCLR			MMIO32(PM_BASE + 0x34)
/** PM_INTENSET Interrupt Enable Set **/
#define PM_INTENSET			MMIO32(PM_BASE + 0x35)
/** PM_INTFLAG Interrupt Flag Status and Clear **/
#define PM_INTFLAG			MMIO32(PM_BASE + 0x36)
/** PM_RCAUSE Reset Cause **/
#define PM_RCAUSE			MMIO32(PM_BASE + 0x38)

/**@}*/


/** @defgroup pm_ctrl CTRL Control
@{*/


/**@}*/

/** @defgroup pm_sleep SLEEP Sleep Mode
@{*/


#define PM_SLEEP_IDLE_SHIFT		0
#define PM_SLEEP_IDLE_MASK		0x03
/** @defgroup pm_sleep_idle IDLE Idle Mode Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_cpusel CPUSEL CPU Clock Select
@{*/


#define PM_CPUSEL_CPUDIV_SHIFT		0
#define PM_CPUSEL_CPUDIV_MASK		0x07
/** @defgroup pm_cpusel_cpudiv CPUDIV CPU Prescaler Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_apbasel APBASEL APBA Clock Select
@{*/


#define PM_APBASEL_APBADIV_SHIFT		0
#define PM_APBASEL_APBADIV_MASK		0x07
/** @defgroup pm_apbasel_apbadiv APBADIV APBA Prescaler Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_apbbsel APBBSEL APBB Clock Select
@{*/


#define PM_APBBSEL_APBBDIV_SHIFT		0
#define PM_APBBSEL_APBBDIV_MASK		0x07
/** @defgroup pm_apbbsel_apbbdiv APBBDIV APBB Prescaler Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_apbcsel APBCSEL APBC Clock Select
@{*/


#define PM_APBCSEL_APBCDIV_SHIFT		0
#define PM_APBCSEL_APBCDIV_MASK		0x07
/** @defgroup pm_apbcsel_apbcdiv APBCDIV APBC Prescaler Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_ahbmask AHBMASK AHB Mask
@{*/

/** PM_AHBMASK_USB_ USB AHB Clock Mask **/
#define PM_AHBMASK_USB_		(1 << 6)
/** PM_AHBMASK_DMAC_ DMAC AHB Clock Mask **/
#define PM_AHBMASK_DMAC_		(1 << 5)
/** PM_AHBMASK_NVMCTRL_ NVMCTRL AHB Clock Mask **/
#define PM_AHBMASK_NVMCTRL_		(1 << 4)
/** PM_AHBMASK_DSU_ DSU AHB Clock Mask **/
#define PM_AHBMASK_DSU_		(1 << 3)
/** PM_AHBMASK_HPB2_ HPB2 AHB Clock Mask **/
#define PM_AHBMASK_HPB2_		(1 << 2)
/** PM_AHBMASK_HPB1_ HPB1 AHB Clock Mask **/
#define PM_AHBMASK_HPB1_		(1 << 1)
/** PM_AHBMASK_HPB0_ HPB0 AHB Clock Mask **/
#define PM_AHBMASK_HPB0_		(1 << 0)

/**@}*/

/** @defgroup pm_apbamask APBAMASK APBA Mask
@{*/

/** PM_APBAMASK_EIC_ EIC APB Clock Enable **/
#define PM_APBAMASK_EIC_		(1 << 6)
/** PM_APBAMASK_RTC_ RTC APB Clock Enable **/
#define PM_APBAMASK_RTC_		(1 << 5)
/** PM_APBAMASK_WDT_ WDT APB Clock Enable **/
#define PM_APBAMASK_WDT_		(1 << 4)
/** PM_APBAMASK_GCLK_ GCLK APB Clock Enable **/
#define PM_APBAMASK_GCLK_		(1 << 3)
/** PM_APBAMASK_SYSCTRL_ SYSCTRL APB Clock Enable **/
#define PM_APBAMASK_SYSCTRL_		(1 << 2)
/** PM_APBAMASK_PM_ PM APB Clock Enable **/
#define PM_APBAMASK_PM_		(1 << 1)
/** PM_APBAMASK_PAC0_ PAC0 APB Clock Enable **/
#define PM_APBAMASK_PAC0_		(1 << 0)

/**@}*/

/** @defgroup pm_apbbmask APBBMASK APBB Mask
@{*/

/** PM_APBBMASK_HMATRIX_ HMATRIX APB Clock Enable **/
#define PM_APBBMASK_HMATRIX_		(1 << 6)
/** PM_APBBMASK_USB_ USB APB Clock Enable **/
#define PM_APBBMASK_USB_		(1 << 5)
/** PM_APBBMASK_DMAC_ DMAC APB Clock Enable **/
#define PM_APBBMASK_DMAC_		(1 << 4)
/** PM_APBBMASK_PORT_ PORT APB Clock Enable **/
#define PM_APBBMASK_PORT_		(1 << 3)
/** PM_APBBMASK_NVMCTRL_ NVMCTRL APB Clock Enable **/
#define PM_APBBMASK_NVMCTRL_		(1 << 2)
/** PM_APBBMASK_DSU_ DSU APB Clock Enable **/
#define PM_APBBMASK_DSU_		(1 << 1)
/** PM_APBBMASK_PAC1_ PAC1 APB Clock Enable **/
#define PM_APBBMASK_PAC1_		(1 << 0)

/**@}*/

/** @defgroup pm_apbcmask APBCMASK APBC Mask
@{*/

/** PM_APBCMASK_RFCTRL_ RFCTRL APB Clock Enable **/
#define PM_APBCMASK_RFCTRL_		(1 << 21)
/** PM_APBCMASK_PTC_ PTC APB Clock Enable **/
#define PM_APBCMASK_PTC_		(1 << 19)
/** PM_APBCMASK_DAC_ DAC APB Clock Enable **/
#define PM_APBCMASK_DAC_		(1 << 18)
/** PM_APBCMASK_AC_ AC APB Clock Enable **/
#define PM_APBCMASK_AC_		(1 << 17)
/** PM_APBCMASK_ADC_ ADC APB Clock Enable **/
#define PM_APBCMASK_ADC_		(1 << 16)
/** PM_APBCMASK_TC7_ TC7 APB Clock Enable **/
#define PM_APBCMASK_TC7_		(1 << 15)
/** PM_APBCMASK_TC6_ TC6 APB Clock Enable **/
#define PM_APBCMASK_TC6_		(1 << 14)
/** PM_APBCMASK_TC5_ TC5 APB Clock Enable **/
#define PM_APBCMASK_TC5_		(1 << 13)
/** PM_APBCMASK_TC4_ TC4 APB Clock Enable **/
#define PM_APBCMASK_TC4_		(1 << 12)
/** PM_APBCMASK_TC3_ TC3 APB Clock Enable **/
#define PM_APBCMASK_TC3_		(1 << 11)
/** PM_APBCMASK_TCC2_ TCC2 APB Clock Enable **/
#define PM_APBCMASK_TCC2_		(1 << 10)
/** PM_APBCMASK_TCC1_ TCC1 APB Clock Enable **/
#define PM_APBCMASK_TCC1_		(1 << 9)
/** PM_APBCMASK_TCC0_ TCC0 APB Clock Enable **/
#define PM_APBCMASK_TCC0_		(1 << 8)
/** PM_APBCMASK_SERCOM5_ SERCOM5 APB Clock Enable **/
#define PM_APBCMASK_SERCOM5_		(1 << 7)
/** PM_APBCMASK_SERCOM4_ SERCOM4 APB Clock Enable **/
#define PM_APBCMASK_SERCOM4_		(1 << 6)
/** PM_APBCMASK_SERCOM3_ SERCOM3 APB Clock Enable **/
#define PM_APBCMASK_SERCOM3_		(1 << 5)
/** PM_APBCMASK_SERCOM2_ SERCOM2 APB Clock Enable **/
#define PM_APBCMASK_SERCOM2_		(1 << 4)
/** PM_APBCMASK_SERCOM1_ SERCOM1 APB Clock Enable **/
#define PM_APBCMASK_SERCOM1_		(1 << 3)
/** PM_APBCMASK_SERCOM0_ SERCOM0 APB Clock Enable **/
#define PM_APBCMASK_SERCOM0_		(1 << 2)
/** PM_APBCMASK_EVSYS_ EVSYS APB Clock Enable **/
#define PM_APBCMASK_EVSYS_		(1 << 1)
/** PM_APBCMASK_PAC2_ PAC2 APB Clock Enable **/
#define PM_APBCMASK_PAC2_		(1 << 0)

/**@}*/

/** @defgroup pm_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** PM_INTENCLR_CKRDY Clock Ready Interrupt Enable **/
#define PM_INTENCLR_CKRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intenset INTENSET Interrupt Enable Set
@{*/

/** PM_INTENSET_CKRDY Clock Ready Interrupt Enable **/
#define PM_INTENSET_CKRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** PM_INTFLAG_CKRDY Clock Ready **/
#define PM_INTFLAG_CKRDY		(1 << 0)

/**@}*/

/** @defgroup pm_rcause RCAUSE Reset Cause
@{*/

/** PM_RCAUSE_SYST System Reset Request **/
#define PM_RCAUSE_SYST		(1 << 6)
/** PM_RCAUSE_WDT Watchdog Reset **/
#define PM_RCAUSE_WDT		(1 << 5)
/** PM_RCAUSE_EXT External Reset **/
#define PM_RCAUSE_EXT		(1 << 4)
/** PM_RCAUSE_BOD33 Brown Out 33 Detector Reset **/
#define PM_RCAUSE_BOD33		(1 << 2)
/** PM_RCAUSE_BOD12 Brown Out 12 Detector Reset **/
#define PM_RCAUSE_BOD12		(1 << 1)
/** PM_RCAUSE_POR Power On Reset **/
#define PM_RCAUSE_POR		(1 << 0)

/**@}*/

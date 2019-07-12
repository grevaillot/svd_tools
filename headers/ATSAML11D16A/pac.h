#pragma once 

/* --- PAC: Peripheral Access Controller ---------------------------- */

/** @defgroup pac_registers Peripheral Access Controller Register
@{*/

/** PAC_WRCTRL Write control **/
#define PAC_WRCTRL			MMIO32(PAC_BASE + 0x00)
/** PAC_EVCTRL Event control **/
#define PAC_EVCTRL			MMIO32(PAC_BASE + 0x04)
/** PAC_INTENCLR Interrupt enable clear **/
#define PAC_INTENCLR			MMIO32(PAC_BASE + 0x08)
/** PAC_INTENSET Interrupt enable set **/
#define PAC_INTENSET			MMIO32(PAC_BASE + 0x09)
/** PAC_INTFLAGAHB Bridge interrupt flag status **/
#define PAC_INTFLAGAHB			MMIO32(PAC_BASE + 0x10)
/** PAC_INTFLAGA Peripheral interrupt flag status - Bridge A **/
#define PAC_INTFLAGA			MMIO32(PAC_BASE + 0x14)
/** PAC_INTFLAGB Peripheral interrupt flag status - Bridge B **/
#define PAC_INTFLAGB			MMIO32(PAC_BASE + 0x18)
/** PAC_INTFLAGC Peripheral interrupt flag status - Bridge C **/
#define PAC_INTFLAGC			MMIO32(PAC_BASE + 0x1c)
/** PAC_STATUSA Peripheral write protection status - Bridge A **/
#define PAC_STATUSA			MMIO32(PAC_BASE + 0x34)
/** PAC_STATUSB Peripheral write protection status - Bridge B **/
#define PAC_STATUSB			MMIO32(PAC_BASE + 0x38)
/** PAC_STATUSC Peripheral write protection status - Bridge C **/
#define PAC_STATUSC			MMIO32(PAC_BASE + 0x3c)
/** PAC_NONSECA Peripheral non-secure status - Bridge A **/
#define PAC_NONSECA			MMIO32(PAC_BASE + 0x54)
/** PAC_NONSECB Peripheral non-secure status - Bridge B **/
#define PAC_NONSECB			MMIO32(PAC_BASE + 0x58)
/** PAC_NONSECC Peripheral non-secure status - Bridge C **/
#define PAC_NONSECC			MMIO32(PAC_BASE + 0x5c)
/** PAC_SECLOCKA Peripheral secure status locked - Bridge A **/
#define PAC_SECLOCKA			MMIO32(PAC_BASE + 0x74)
/** PAC_SECLOCKB Peripheral secure status locked - Bridge B **/
#define PAC_SECLOCKB			MMIO32(PAC_BASE + 0x78)
/** PAC_SECLOCKC Peripheral secure status locked - Bridge C **/
#define PAC_SECLOCKC			MMIO32(PAC_BASE + 0x7c)

/**@}*/


/** @defgroup pac_wrctrl WRCTRL Write control
@{*/


#define PAC_WRCTRL_KEY_SHIFT		16
#define PAC_WRCTRL_KEY_MASK		0xff
/** @defgroup pac_wrctrl_key KEY Peripheral access control key
@{*/
/**@}*/


#define PAC_WRCTRL_PERID_SHIFT		0
#define PAC_WRCTRL_PERID_MASK		0xffff
/** @defgroup pac_wrctrl_perid PERID Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup pac_evctrl EVCTRL Event control
@{*/

/** PAC_EVCTRL_ERREO Peripheral acess error event output **/
#define PAC_EVCTRL_ERREO		(1 << 0)

/**@}*/

/** @defgroup pac_intenclr INTENCLR Interrupt enable clear
@{*/

/** PAC_INTENCLR_ERR Peripheral access error interrupt disable **/
#define PAC_INTENCLR_ERR		(1 << 0)

/**@}*/

/** @defgroup pac_intenset INTENSET Interrupt enable set
@{*/

/** PAC_INTENSET_ERR Peripheral access error interrupt enable **/
#define PAC_INTENSET_ERR		(1 << 0)

/**@}*/

/** @defgroup pac_intflagahb INTFLAGAHB Bridge interrupt flag status
@{*/

/** PAC_INTFLAGAHB_HSRAMDSU_ HSRAMDSU **/
#define PAC_INTFLAGAHB_HSRAMDSU_		(1 << 6)
/** PAC_INTFLAGAHB_HSRAMDMAC_ HSRAMDMAC **/
#define PAC_INTFLAGAHB_HSRAMDMAC_		(1 << 5)
/** PAC_INTFLAGAHB_HSRAMCPU_ HSRAMCPU **/
#define PAC_INTFLAGAHB_HSRAMCPU_		(1 << 4)
/** PAC_INTFLAGAHB_HPB2_ HPB2 **/
#define PAC_INTFLAGAHB_HPB2_		(1 << 3)
/** PAC_INTFLAGAHB_HPB1_ HPB1 **/
#define PAC_INTFLAGAHB_HPB1_		(1 << 2)
/** PAC_INTFLAGAHB_HPB0_ HPB0 **/
#define PAC_INTFLAGAHB_HPB0_		(1 << 1)
/** PAC_INTFLAGAHB_FLASH_ FLASH **/
#define PAC_INTFLAGAHB_FLASH_		(1 << 0)

/**@}*/

/** @defgroup pac_intflaga INTFLAGA Peripheral interrupt flag status - Bridge A
@{*/

/** PAC_INTFLAGA_AC_ AC **/
#define PAC_INTFLAGA_AC_		(1 << 13)
/** PAC_INTFLAGA_PORT_ PORT **/
#define PAC_INTFLAGA_PORT_		(1 << 12)
/** PAC_INTFLAGA_FREQM_ FREQM **/
#define PAC_INTFLAGA_FREQM_		(1 << 11)
/** PAC_INTFLAGA_EIC_ EIC **/
#define PAC_INTFLAGA_EIC_		(1 << 10)
/** PAC_INTFLAGA_RTC_ RTC **/
#define PAC_INTFLAGA_RTC_		(1 << 9)
/** PAC_INTFLAGA_WDT_ WDT **/
#define PAC_INTFLAGA_WDT_		(1 << 8)
/** PAC_INTFLAGA_GCLK_ GCLK **/
#define PAC_INTFLAGA_GCLK_		(1 << 7)
/** PAC_INTFLAGA_SUPC_ SUPC **/
#define PAC_INTFLAGA_SUPC_		(1 << 6)
/** PAC_INTFLAGA_OSC32KCTRL_ OSC32KCTRL **/
#define PAC_INTFLAGA_OSC32KCTRL_		(1 << 5)
/** PAC_INTFLAGA_OSCCTRL_ OSCCTRL **/
#define PAC_INTFLAGA_OSCCTRL_		(1 << 4)
/** PAC_INTFLAGA_RSTC_ RSTC **/
#define PAC_INTFLAGA_RSTC_		(1 << 3)
/** PAC_INTFLAGA_MCLK_ MCLK **/
#define PAC_INTFLAGA_MCLK_		(1 << 2)
/** PAC_INTFLAGA_PM_ PM **/
#define PAC_INTFLAGA_PM_		(1 << 1)
/** PAC_INTFLAGA_PAC_ PAC **/
#define PAC_INTFLAGA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_intflagb INTFLAGB Peripheral interrupt flag status - Bridge B
@{*/

/** PAC_INTFLAGB_DMAC_ DMAC **/
#define PAC_INTFLAGB_DMAC_		(1 << 3)
/** PAC_INTFLAGB_NVMCTRL_ NVMCTRL **/
#define PAC_INTFLAGB_NVMCTRL_		(1 << 2)
/** PAC_INTFLAGB_DSU_ DSU **/
#define PAC_INTFLAGB_DSU_		(1 << 1)
/** PAC_INTFLAGB_IDAU_ IDAU **/
#define PAC_INTFLAGB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_intflagc INTFLAGC Peripheral interrupt flag status - Bridge C
@{*/

/** PAC_INTFLAGC_TRAM_ TRAM **/
#define PAC_INTFLAGC_TRAM_		(1 << 13)
/** PAC_INTFLAGC_OPAMP_ OPAMP **/
#define PAC_INTFLAGC_OPAMP_		(1 << 12)
/** PAC_INTFLAGC_CCL_ CCL **/
#define PAC_INTFLAGC_CCL_		(1 << 11)
/** PAC_INTFLAGC_TRNG_ TRNG **/
#define PAC_INTFLAGC_TRNG_		(1 << 10)
/** PAC_INTFLAGC_PTC_ PTC **/
#define PAC_INTFLAGC_PTC_		(1 << 9)
/** PAC_INTFLAGC_DAC_ DAC **/
#define PAC_INTFLAGC_DAC_		(1 << 8)
/** PAC_INTFLAGC_ADC_ ADC **/
#define PAC_INTFLAGC_ADC_		(1 << 7)
/** PAC_INTFLAGC_TC2_ TC2 **/
#define PAC_INTFLAGC_TC2_		(1 << 6)
/** PAC_INTFLAGC_TC1_ TC1 **/
#define PAC_INTFLAGC_TC1_		(1 << 5)
/** PAC_INTFLAGC_TC0_ TC0 **/
#define PAC_INTFLAGC_TC0_		(1 << 4)
/** PAC_INTFLAGC_SERCOM1_ SERCOM1 **/
#define PAC_INTFLAGC_SERCOM1_		(1 << 2)
/** PAC_INTFLAGC_SERCOM0_ SERCOM0 **/
#define PAC_INTFLAGC_SERCOM0_		(1 << 1)
/** PAC_INTFLAGC_EVSYS_ EVSYS **/
#define PAC_INTFLAGC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_statusa STATUSA Peripheral write protection status - Bridge A
@{*/

/** PAC_STATUSA_AC_ AC APB Protect Enable **/
#define PAC_STATUSA_AC_		(1 << 13)
/** PAC_STATUSA_PORT_ PORT APB Protect Enable **/
#define PAC_STATUSA_PORT_		(1 << 12)
/** PAC_STATUSA_FREQM_ FREQM APB Protect Enable **/
#define PAC_STATUSA_FREQM_		(1 << 11)
/** PAC_STATUSA_EIC_ EIC APB Protect Enable **/
#define PAC_STATUSA_EIC_		(1 << 10)
/** PAC_STATUSA_RTC_ RTC APB Protect Enable **/
#define PAC_STATUSA_RTC_		(1 << 9)
/** PAC_STATUSA_WDT_ WDT APB Protect Enable **/
#define PAC_STATUSA_WDT_		(1 << 8)
/** PAC_STATUSA_GCLK_ GCLK APB Protect Enable **/
#define PAC_STATUSA_GCLK_		(1 << 7)
/** PAC_STATUSA_SUPC_ SUPC APB Protect Enable **/
#define PAC_STATUSA_SUPC_		(1 << 6)
/** PAC_STATUSA_OSC32KCTRL_ OSC32KCTRL APB Protect Enable **/
#define PAC_STATUSA_OSC32KCTRL_		(1 << 5)
/** PAC_STATUSA_OSCCTRL_ OSCCTRL APB Protect Enable **/
#define PAC_STATUSA_OSCCTRL_		(1 << 4)
/** PAC_STATUSA_RSTC_ RSTC APB Protect Enable **/
#define PAC_STATUSA_RSTC_		(1 << 3)
/** PAC_STATUSA_MCLK_ MCLK APB Protect Enable **/
#define PAC_STATUSA_MCLK_		(1 << 2)
/** PAC_STATUSA_PM_ PM APB Protect Enable **/
#define PAC_STATUSA_PM_		(1 << 1)
/** PAC_STATUSA_PAC_ PAC APB Protect Enable **/
#define PAC_STATUSA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_statusb STATUSB Peripheral write protection status - Bridge B
@{*/

/** PAC_STATUSB_DMAC_ DMAC APB Protect Enable **/
#define PAC_STATUSB_DMAC_		(1 << 3)
/** PAC_STATUSB_NVMCTRL_ NVMCTRL APB Protect Enable **/
#define PAC_STATUSB_NVMCTRL_		(1 << 2)
/** PAC_STATUSB_DSU_ DSU APB Protect Enable **/
#define PAC_STATUSB_DSU_		(1 << 1)
/** PAC_STATUSB_IDAU_ IDAU APB Protect Enable **/
#define PAC_STATUSB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_statusc STATUSC Peripheral write protection status - Bridge C
@{*/

/** PAC_STATUSC_TRAM_ TRAM APB Protect Enable **/
#define PAC_STATUSC_TRAM_		(1 << 13)
/** PAC_STATUSC_OPAMP_ OPAMP APB Protect Enable **/
#define PAC_STATUSC_OPAMP_		(1 << 12)
/** PAC_STATUSC_CCL_ CCL APB Protect Enable **/
#define PAC_STATUSC_CCL_		(1 << 11)
/** PAC_STATUSC_TRNG_ TRNG APB Protect Enable **/
#define PAC_STATUSC_TRNG_		(1 << 10)
/** PAC_STATUSC_PTC_ PTC APB Protect Enable **/
#define PAC_STATUSC_PTC_		(1 << 9)
/** PAC_STATUSC_DAC_ DAC APB Protect Enable **/
#define PAC_STATUSC_DAC_		(1 << 8)
/** PAC_STATUSC_ADC_ ADC APB Protect Enable **/
#define PAC_STATUSC_ADC_		(1 << 7)
/** PAC_STATUSC_TC2_ TC2 APB Protect Enable **/
#define PAC_STATUSC_TC2_		(1 << 6)
/** PAC_STATUSC_TC1_ TC1 APB Protect Enable **/
#define PAC_STATUSC_TC1_		(1 << 5)
/** PAC_STATUSC_TC0_ TC0 APB Protect Enable **/
#define PAC_STATUSC_TC0_		(1 << 4)
/** PAC_STATUSC_SERCOM1_ SERCOM1 APB Protect Enable **/
#define PAC_STATUSC_SERCOM1_		(1 << 2)
/** PAC_STATUSC_SERCOM0_ SERCOM0 APB Protect Enable **/
#define PAC_STATUSC_SERCOM0_		(1 << 1)
/** PAC_STATUSC_EVSYS_ EVSYS APB Protect Enable **/
#define PAC_STATUSC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_nonseca NONSECA Peripheral non-secure status - Bridge A
@{*/

/** PAC_NONSECA_AC_ AC Non-Secure **/
#define PAC_NONSECA_AC_		(1 << 13)
/** PAC_NONSECA_PORT_ PORT Non-Secure **/
#define PAC_NONSECA_PORT_		(1 << 12)
/** PAC_NONSECA_FREQM_ FREQM Non-Secure **/
#define PAC_NONSECA_FREQM_		(1 << 11)
/** PAC_NONSECA_EIC_ EIC Non-Secure **/
#define PAC_NONSECA_EIC_		(1 << 10)
/** PAC_NONSECA_RTC_ RTC Non-Secure **/
#define PAC_NONSECA_RTC_		(1 << 9)
/** PAC_NONSECA_WDT_ WDT Non-Secure **/
#define PAC_NONSECA_WDT_		(1 << 8)
/** PAC_NONSECA_GCLK_ GCLK Non-Secure **/
#define PAC_NONSECA_GCLK_		(1 << 7)
/** PAC_NONSECA_SUPC_ SUPC Non-Secure **/
#define PAC_NONSECA_SUPC_		(1 << 6)
/** PAC_NONSECA_OSC32KCTRL_ OSC32KCTRL Non-Secure **/
#define PAC_NONSECA_OSC32KCTRL_		(1 << 5)
/** PAC_NONSECA_OSCCTRL_ OSCCTRL Non-Secure **/
#define PAC_NONSECA_OSCCTRL_		(1 << 4)
/** PAC_NONSECA_RSTC_ RSTC Non-Secure **/
#define PAC_NONSECA_RSTC_		(1 << 3)
/** PAC_NONSECA_MCLK_ MCLK Non-Secure **/
#define PAC_NONSECA_MCLK_		(1 << 2)
/** PAC_NONSECA_PM_ PM Non-Secure **/
#define PAC_NONSECA_PM_		(1 << 1)
/** PAC_NONSECA_PAC_ PAC Non-Secure **/
#define PAC_NONSECA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_nonsecb NONSECB Peripheral non-secure status - Bridge B
@{*/

/** PAC_NONSECB_DMAC_ DMAC Non-Secure **/
#define PAC_NONSECB_DMAC_		(1 << 3)
/** PAC_NONSECB_NVMCTRL_ NVMCTRL Non-Secure **/
#define PAC_NONSECB_NVMCTRL_		(1 << 2)
/** PAC_NONSECB_DSU_ DSU Non-Secure **/
#define PAC_NONSECB_DSU_		(1 << 1)
/** PAC_NONSECB_IDAU_ IDAU Non-Secure **/
#define PAC_NONSECB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_nonsecc NONSECC Peripheral non-secure status - Bridge C
@{*/

/** PAC_NONSECC_TRAM_ TRAM Non-Secure **/
#define PAC_NONSECC_TRAM_		(1 << 13)
/** PAC_NONSECC_OPAMP_ OPAMP Non-Secure **/
#define PAC_NONSECC_OPAMP_		(1 << 12)
/** PAC_NONSECC_CCL_ CCL Non-Secure **/
#define PAC_NONSECC_CCL_		(1 << 11)
/** PAC_NONSECC_TRNG_ TRNG Non-Secure **/
#define PAC_NONSECC_TRNG_		(1 << 10)
/** PAC_NONSECC_PTC_ PTC Non-Secure **/
#define PAC_NONSECC_PTC_		(1 << 9)
/** PAC_NONSECC_DAC_ DAC Non-Secure **/
#define PAC_NONSECC_DAC_		(1 << 8)
/** PAC_NONSECC_ADC_ ADC Non-Secure **/
#define PAC_NONSECC_ADC_		(1 << 7)
/** PAC_NONSECC_TC2_ TC2 Non-Secure **/
#define PAC_NONSECC_TC2_		(1 << 6)
/** PAC_NONSECC_TC1_ TC1 Non-Secure **/
#define PAC_NONSECC_TC1_		(1 << 5)
/** PAC_NONSECC_TC0_ TC0 Non-Secure **/
#define PAC_NONSECC_TC0_		(1 << 4)
/** PAC_NONSECC_SERCOM1_ SERCOM1 Non-Secure **/
#define PAC_NONSECC_SERCOM1_		(1 << 2)
/** PAC_NONSECC_SERCOM0_ SERCOM0 Non-Secure **/
#define PAC_NONSECC_SERCOM0_		(1 << 1)
/** PAC_NONSECC_EVSYS_ EVSYS Non-Secure **/
#define PAC_NONSECC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_seclocka SECLOCKA Peripheral secure status locked - Bridge A
@{*/

/** PAC_SECLOCKA_AC_ AC Secure Status Locked **/
#define PAC_SECLOCKA_AC_		(1 << 13)
/** PAC_SECLOCKA_PORT_ PORT Secure Status Locked **/
#define PAC_SECLOCKA_PORT_		(1 << 12)
/** PAC_SECLOCKA_FREQM_ FREQM Secure Status Locked **/
#define PAC_SECLOCKA_FREQM_		(1 << 11)
/** PAC_SECLOCKA_EIC_ EIC Secure Status Locked **/
#define PAC_SECLOCKA_EIC_		(1 << 10)
/** PAC_SECLOCKA_RTC_ RTC Secure Status Locked **/
#define PAC_SECLOCKA_RTC_		(1 << 9)
/** PAC_SECLOCKA_WDT_ WDT Secure Status Locked **/
#define PAC_SECLOCKA_WDT_		(1 << 8)
/** PAC_SECLOCKA_GCLK_ GCLK Secure Status Locked **/
#define PAC_SECLOCKA_GCLK_		(1 << 7)
/** PAC_SECLOCKA_SUPC_ SUPC Secure Status Locked **/
#define PAC_SECLOCKA_SUPC_		(1 << 6)
/** PAC_SECLOCKA_OSC32KCTRL_ OSC32KCTRL Secure Status Locked **/
#define PAC_SECLOCKA_OSC32KCTRL_		(1 << 5)
/** PAC_SECLOCKA_OSCCTRL_ OSCCTRL Secure Status Locked **/
#define PAC_SECLOCKA_OSCCTRL_		(1 << 4)
/** PAC_SECLOCKA_RSTC_ RSTC Secure Status Locked **/
#define PAC_SECLOCKA_RSTC_		(1 << 3)
/** PAC_SECLOCKA_MCLK_ MCLK Secure Status Locked **/
#define PAC_SECLOCKA_MCLK_		(1 << 2)
/** PAC_SECLOCKA_PM_ PM Secure Status Locked **/
#define PAC_SECLOCKA_PM_		(1 << 1)
/** PAC_SECLOCKA_PAC_ PAC Secure Status Locked **/
#define PAC_SECLOCKA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_seclockb SECLOCKB Peripheral secure status locked - Bridge B
@{*/

/** PAC_SECLOCKB_DMAC_ DMAC Secure Status Locked **/
#define PAC_SECLOCKB_DMAC_		(1 << 3)
/** PAC_SECLOCKB_NVMCTRL_ NVMCTRL Secure Status Locked **/
#define PAC_SECLOCKB_NVMCTRL_		(1 << 2)
/** PAC_SECLOCKB_DSU_ DSU Secure Status Locked **/
#define PAC_SECLOCKB_DSU_		(1 << 1)
/** PAC_SECLOCKB_IDAU_ IDAU Secure Status Locked **/
#define PAC_SECLOCKB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_seclockc SECLOCKC Peripheral secure status locked - Bridge C
@{*/

/** PAC_SECLOCKC_TRAM_ TRAM Secure Status Locked **/
#define PAC_SECLOCKC_TRAM_		(1 << 13)
/** PAC_SECLOCKC_OPAMP_ OPAMP Secure Status Locked **/
#define PAC_SECLOCKC_OPAMP_		(1 << 12)
/** PAC_SECLOCKC_CCL_ CCL Secure Status Locked **/
#define PAC_SECLOCKC_CCL_		(1 << 11)
/** PAC_SECLOCKC_TRNG_ TRNG Secure Status Locked **/
#define PAC_SECLOCKC_TRNG_		(1 << 10)
/** PAC_SECLOCKC_PTC_ PTC Secure Status Locked **/
#define PAC_SECLOCKC_PTC_		(1 << 9)
/** PAC_SECLOCKC_DAC_ DAC Secure Status Locked **/
#define PAC_SECLOCKC_DAC_		(1 << 8)
/** PAC_SECLOCKC_ADC_ ADC Secure Status Locked **/
#define PAC_SECLOCKC_ADC_		(1 << 7)
/** PAC_SECLOCKC_TC2_ TC2 Secure Status Locked **/
#define PAC_SECLOCKC_TC2_		(1 << 6)
/** PAC_SECLOCKC_TC1_ TC1 Secure Status Locked **/
#define PAC_SECLOCKC_TC1_		(1 << 5)
/** PAC_SECLOCKC_TC0_ TC0 Secure Status Locked **/
#define PAC_SECLOCKC_TC0_		(1 << 4)
/** PAC_SECLOCKC_SERCOM1_ SERCOM1 Secure Status Locked **/
#define PAC_SECLOCKC_SERCOM1_		(1 << 2)
/** PAC_SECLOCKC_SERCOM0_ SERCOM0 Secure Status Locked **/
#define PAC_SECLOCKC_SERCOM0_		(1 << 1)
/** PAC_SECLOCKC_EVSYS_ EVSYS Secure Status Locked **/
#define PAC_SECLOCKC_EVSYS_		(1 << 0)

/**@}*/

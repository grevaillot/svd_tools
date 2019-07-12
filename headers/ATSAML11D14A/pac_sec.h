#pragma once 

/* --- PAC_SEC: Peripheral Access Controller ------------------------ */

/** @defgroup pac_sec_registers Peripheral Access Controller Register
@{*/

/** PAC_SEC_WRCTRL Write control **/
#define PAC_SEC_WRCTRL			MMIO32(PAC_SEC_BASE + 0x00)
/** PAC_SEC_EVCTRL Event control **/
#define PAC_SEC_EVCTRL			MMIO32(PAC_SEC_BASE + 0x04)
/** PAC_SEC_INTENCLR Interrupt enable clear **/
#define PAC_SEC_INTENCLR			MMIO32(PAC_SEC_BASE + 0x08)
/** PAC_SEC_INTENSET Interrupt enable set **/
#define PAC_SEC_INTENSET			MMIO32(PAC_SEC_BASE + 0x09)
/** PAC_SEC_INTFLAGAHB Bridge interrupt flag status **/
#define PAC_SEC_INTFLAGAHB			MMIO32(PAC_SEC_BASE + 0x10)
/** PAC_SEC_INTFLAGA Peripheral interrupt flag status - Bridge A **/
#define PAC_SEC_INTFLAGA			MMIO32(PAC_SEC_BASE + 0x14)
/** PAC_SEC_INTFLAGB Peripheral interrupt flag status - Bridge B **/
#define PAC_SEC_INTFLAGB			MMIO32(PAC_SEC_BASE + 0x18)
/** PAC_SEC_INTFLAGC Peripheral interrupt flag status - Bridge C **/
#define PAC_SEC_INTFLAGC			MMIO32(PAC_SEC_BASE + 0x1c)
/** PAC_SEC_STATUSA Peripheral write protection status - Bridge A **/
#define PAC_SEC_STATUSA			MMIO32(PAC_SEC_BASE + 0x34)
/** PAC_SEC_STATUSB Peripheral write protection status - Bridge B **/
#define PAC_SEC_STATUSB			MMIO32(PAC_SEC_BASE + 0x38)
/** PAC_SEC_STATUSC Peripheral write protection status - Bridge C **/
#define PAC_SEC_STATUSC			MMIO32(PAC_SEC_BASE + 0x3c)
/** PAC_SEC_NONSECA Peripheral non-secure status - Bridge A **/
#define PAC_SEC_NONSECA			MMIO32(PAC_SEC_BASE + 0x54)
/** PAC_SEC_NONSECB Peripheral non-secure status - Bridge B **/
#define PAC_SEC_NONSECB			MMIO32(PAC_SEC_BASE + 0x58)
/** PAC_SEC_NONSECC Peripheral non-secure status - Bridge C **/
#define PAC_SEC_NONSECC			MMIO32(PAC_SEC_BASE + 0x5c)
/** PAC_SEC_SECLOCKA Peripheral secure status locked - Bridge A **/
#define PAC_SEC_SECLOCKA			MMIO32(PAC_SEC_BASE + 0x74)
/** PAC_SEC_SECLOCKB Peripheral secure status locked - Bridge B **/
#define PAC_SEC_SECLOCKB			MMIO32(PAC_SEC_BASE + 0x78)
/** PAC_SEC_SECLOCKC Peripheral secure status locked - Bridge C **/
#define PAC_SEC_SECLOCKC			MMIO32(PAC_SEC_BASE + 0x7c)

/**@}*/


/** @defgroup pac_sec_wrctrl WRCTRL Write control
@{*/


#define PAC_SEC_WRCTRL_KEY_SHIFT		16
#define PAC_SEC_WRCTRL_KEY_MASK		0xff
/** @defgroup pac_sec_wrctrl_key KEY Peripheral access control key
@{*/
/**@}*/


#define PAC_SEC_WRCTRL_PERID_SHIFT		0
#define PAC_SEC_WRCTRL_PERID_MASK		0xffff
/** @defgroup pac_sec_wrctrl_perid PERID Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup pac_sec_evctrl EVCTRL Event control
@{*/

/** PAC_SEC_EVCTRL_ERREO Peripheral acess error event output **/
#define PAC_SEC_EVCTRL_ERREO		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intenclr INTENCLR Interrupt enable clear
@{*/

/** PAC_SEC_INTENCLR_ERR Peripheral access error interrupt disable **/
#define PAC_SEC_INTENCLR_ERR		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intenset INTENSET Interrupt enable set
@{*/

/** PAC_SEC_INTENSET_ERR Peripheral access error interrupt enable **/
#define PAC_SEC_INTENSET_ERR		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intflagahb INTFLAGAHB Bridge interrupt flag status
@{*/

/** PAC_SEC_INTFLAGAHB_HSRAMDSU_ HSRAMDSU **/
#define PAC_SEC_INTFLAGAHB_HSRAMDSU_		(1 << 6)
/** PAC_SEC_INTFLAGAHB_HSRAMDMAC_ HSRAMDMAC **/
#define PAC_SEC_INTFLAGAHB_HSRAMDMAC_		(1 << 5)
/** PAC_SEC_INTFLAGAHB_HSRAMCPU_ HSRAMCPU **/
#define PAC_SEC_INTFLAGAHB_HSRAMCPU_		(1 << 4)
/** PAC_SEC_INTFLAGAHB_HPB2_ HPB2 **/
#define PAC_SEC_INTFLAGAHB_HPB2_		(1 << 3)
/** PAC_SEC_INTFLAGAHB_HPB1_ HPB1 **/
#define PAC_SEC_INTFLAGAHB_HPB1_		(1 << 2)
/** PAC_SEC_INTFLAGAHB_HPB0_ HPB0 **/
#define PAC_SEC_INTFLAGAHB_HPB0_		(1 << 1)
/** PAC_SEC_INTFLAGAHB_FLASH_ FLASH **/
#define PAC_SEC_INTFLAGAHB_FLASH_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intflaga INTFLAGA Peripheral interrupt flag status - Bridge A
@{*/

/** PAC_SEC_INTFLAGA_AC_ AC **/
#define PAC_SEC_INTFLAGA_AC_		(1 << 13)
/** PAC_SEC_INTFLAGA_PORT_ PORT **/
#define PAC_SEC_INTFLAGA_PORT_		(1 << 12)
/** PAC_SEC_INTFLAGA_FREQM_ FREQM **/
#define PAC_SEC_INTFLAGA_FREQM_		(1 << 11)
/** PAC_SEC_INTFLAGA_EIC_ EIC **/
#define PAC_SEC_INTFLAGA_EIC_		(1 << 10)
/** PAC_SEC_INTFLAGA_RTC_ RTC **/
#define PAC_SEC_INTFLAGA_RTC_		(1 << 9)
/** PAC_SEC_INTFLAGA_WDT_ WDT **/
#define PAC_SEC_INTFLAGA_WDT_		(1 << 8)
/** PAC_SEC_INTFLAGA_GCLK_ GCLK **/
#define PAC_SEC_INTFLAGA_GCLK_		(1 << 7)
/** PAC_SEC_INTFLAGA_SUPC_ SUPC **/
#define PAC_SEC_INTFLAGA_SUPC_		(1 << 6)
/** PAC_SEC_INTFLAGA_OSC32KCTRL_ OSC32KCTRL **/
#define PAC_SEC_INTFLAGA_OSC32KCTRL_		(1 << 5)
/** PAC_SEC_INTFLAGA_OSCCTRL_ OSCCTRL **/
#define PAC_SEC_INTFLAGA_OSCCTRL_		(1 << 4)
/** PAC_SEC_INTFLAGA_RSTC_ RSTC **/
#define PAC_SEC_INTFLAGA_RSTC_		(1 << 3)
/** PAC_SEC_INTFLAGA_MCLK_ MCLK **/
#define PAC_SEC_INTFLAGA_MCLK_		(1 << 2)
/** PAC_SEC_INTFLAGA_PM_ PM **/
#define PAC_SEC_INTFLAGA_PM_		(1 << 1)
/** PAC_SEC_INTFLAGA_PAC_ PAC **/
#define PAC_SEC_INTFLAGA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intflagb INTFLAGB Peripheral interrupt flag status - Bridge B
@{*/

/** PAC_SEC_INTFLAGB_DMAC_ DMAC **/
#define PAC_SEC_INTFLAGB_DMAC_		(1 << 3)
/** PAC_SEC_INTFLAGB_NVMCTRL_ NVMCTRL **/
#define PAC_SEC_INTFLAGB_NVMCTRL_		(1 << 2)
/** PAC_SEC_INTFLAGB_DSU_ DSU **/
#define PAC_SEC_INTFLAGB_DSU_		(1 << 1)
/** PAC_SEC_INTFLAGB_IDAU_ IDAU **/
#define PAC_SEC_INTFLAGB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_intflagc INTFLAGC Peripheral interrupt flag status - Bridge C
@{*/

/** PAC_SEC_INTFLAGC_TRAM_ TRAM **/
#define PAC_SEC_INTFLAGC_TRAM_		(1 << 13)
/** PAC_SEC_INTFLAGC_OPAMP_ OPAMP **/
#define PAC_SEC_INTFLAGC_OPAMP_		(1 << 12)
/** PAC_SEC_INTFLAGC_CCL_ CCL **/
#define PAC_SEC_INTFLAGC_CCL_		(1 << 11)
/** PAC_SEC_INTFLAGC_TRNG_ TRNG **/
#define PAC_SEC_INTFLAGC_TRNG_		(1 << 10)
/** PAC_SEC_INTFLAGC_PTC_ PTC **/
#define PAC_SEC_INTFLAGC_PTC_		(1 << 9)
/** PAC_SEC_INTFLAGC_DAC_ DAC **/
#define PAC_SEC_INTFLAGC_DAC_		(1 << 8)
/** PAC_SEC_INTFLAGC_ADC_ ADC **/
#define PAC_SEC_INTFLAGC_ADC_		(1 << 7)
/** PAC_SEC_INTFLAGC_TC2_ TC2 **/
#define PAC_SEC_INTFLAGC_TC2_		(1 << 6)
/** PAC_SEC_INTFLAGC_TC1_ TC1 **/
#define PAC_SEC_INTFLAGC_TC1_		(1 << 5)
/** PAC_SEC_INTFLAGC_TC0_ TC0 **/
#define PAC_SEC_INTFLAGC_TC0_		(1 << 4)
/** PAC_SEC_INTFLAGC_SERCOM1_ SERCOM1 **/
#define PAC_SEC_INTFLAGC_SERCOM1_		(1 << 2)
/** PAC_SEC_INTFLAGC_SERCOM0_ SERCOM0 **/
#define PAC_SEC_INTFLAGC_SERCOM0_		(1 << 1)
/** PAC_SEC_INTFLAGC_EVSYS_ EVSYS **/
#define PAC_SEC_INTFLAGC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_statusa STATUSA Peripheral write protection status - Bridge A
@{*/

/** PAC_SEC_STATUSA_AC_ AC APB Protect Enable **/
#define PAC_SEC_STATUSA_AC_		(1 << 13)
/** PAC_SEC_STATUSA_PORT_ PORT APB Protect Enable **/
#define PAC_SEC_STATUSA_PORT_		(1 << 12)
/** PAC_SEC_STATUSA_FREQM_ FREQM APB Protect Enable **/
#define PAC_SEC_STATUSA_FREQM_		(1 << 11)
/** PAC_SEC_STATUSA_EIC_ EIC APB Protect Enable **/
#define PAC_SEC_STATUSA_EIC_		(1 << 10)
/** PAC_SEC_STATUSA_RTC_ RTC APB Protect Enable **/
#define PAC_SEC_STATUSA_RTC_		(1 << 9)
/** PAC_SEC_STATUSA_WDT_ WDT APB Protect Enable **/
#define PAC_SEC_STATUSA_WDT_		(1 << 8)
/** PAC_SEC_STATUSA_GCLK_ GCLK APB Protect Enable **/
#define PAC_SEC_STATUSA_GCLK_		(1 << 7)
/** PAC_SEC_STATUSA_SUPC_ SUPC APB Protect Enable **/
#define PAC_SEC_STATUSA_SUPC_		(1 << 6)
/** PAC_SEC_STATUSA_OSC32KCTRL_ OSC32KCTRL APB Protect Enable **/
#define PAC_SEC_STATUSA_OSC32KCTRL_		(1 << 5)
/** PAC_SEC_STATUSA_OSCCTRL_ OSCCTRL APB Protect Enable **/
#define PAC_SEC_STATUSA_OSCCTRL_		(1 << 4)
/** PAC_SEC_STATUSA_RSTC_ RSTC APB Protect Enable **/
#define PAC_SEC_STATUSA_RSTC_		(1 << 3)
/** PAC_SEC_STATUSA_MCLK_ MCLK APB Protect Enable **/
#define PAC_SEC_STATUSA_MCLK_		(1 << 2)
/** PAC_SEC_STATUSA_PM_ PM APB Protect Enable **/
#define PAC_SEC_STATUSA_PM_		(1 << 1)
/** PAC_SEC_STATUSA_PAC_ PAC APB Protect Enable **/
#define PAC_SEC_STATUSA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_statusb STATUSB Peripheral write protection status - Bridge B
@{*/

/** PAC_SEC_STATUSB_DMAC_ DMAC APB Protect Enable **/
#define PAC_SEC_STATUSB_DMAC_		(1 << 3)
/** PAC_SEC_STATUSB_NVMCTRL_ NVMCTRL APB Protect Enable **/
#define PAC_SEC_STATUSB_NVMCTRL_		(1 << 2)
/** PAC_SEC_STATUSB_DSU_ DSU APB Protect Enable **/
#define PAC_SEC_STATUSB_DSU_		(1 << 1)
/** PAC_SEC_STATUSB_IDAU_ IDAU APB Protect Enable **/
#define PAC_SEC_STATUSB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_statusc STATUSC Peripheral write protection status - Bridge C
@{*/

/** PAC_SEC_STATUSC_TRAM_ TRAM APB Protect Enable **/
#define PAC_SEC_STATUSC_TRAM_		(1 << 13)
/** PAC_SEC_STATUSC_OPAMP_ OPAMP APB Protect Enable **/
#define PAC_SEC_STATUSC_OPAMP_		(1 << 12)
/** PAC_SEC_STATUSC_CCL_ CCL APB Protect Enable **/
#define PAC_SEC_STATUSC_CCL_		(1 << 11)
/** PAC_SEC_STATUSC_TRNG_ TRNG APB Protect Enable **/
#define PAC_SEC_STATUSC_TRNG_		(1 << 10)
/** PAC_SEC_STATUSC_PTC_ PTC APB Protect Enable **/
#define PAC_SEC_STATUSC_PTC_		(1 << 9)
/** PAC_SEC_STATUSC_DAC_ DAC APB Protect Enable **/
#define PAC_SEC_STATUSC_DAC_		(1 << 8)
/** PAC_SEC_STATUSC_ADC_ ADC APB Protect Enable **/
#define PAC_SEC_STATUSC_ADC_		(1 << 7)
/** PAC_SEC_STATUSC_TC2_ TC2 APB Protect Enable **/
#define PAC_SEC_STATUSC_TC2_		(1 << 6)
/** PAC_SEC_STATUSC_TC1_ TC1 APB Protect Enable **/
#define PAC_SEC_STATUSC_TC1_		(1 << 5)
/** PAC_SEC_STATUSC_TC0_ TC0 APB Protect Enable **/
#define PAC_SEC_STATUSC_TC0_		(1 << 4)
/** PAC_SEC_STATUSC_SERCOM1_ SERCOM1 APB Protect Enable **/
#define PAC_SEC_STATUSC_SERCOM1_		(1 << 2)
/** PAC_SEC_STATUSC_SERCOM0_ SERCOM0 APB Protect Enable **/
#define PAC_SEC_STATUSC_SERCOM0_		(1 << 1)
/** PAC_SEC_STATUSC_EVSYS_ EVSYS APB Protect Enable **/
#define PAC_SEC_STATUSC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_nonseca NONSECA Peripheral non-secure status - Bridge A
@{*/

/** PAC_SEC_NONSECA_AC_ AC Non-Secure **/
#define PAC_SEC_NONSECA_AC_		(1 << 13)
/** PAC_SEC_NONSECA_PORT_ PORT Non-Secure **/
#define PAC_SEC_NONSECA_PORT_		(1 << 12)
/** PAC_SEC_NONSECA_FREQM_ FREQM Non-Secure **/
#define PAC_SEC_NONSECA_FREQM_		(1 << 11)
/** PAC_SEC_NONSECA_EIC_ EIC Non-Secure **/
#define PAC_SEC_NONSECA_EIC_		(1 << 10)
/** PAC_SEC_NONSECA_RTC_ RTC Non-Secure **/
#define PAC_SEC_NONSECA_RTC_		(1 << 9)
/** PAC_SEC_NONSECA_WDT_ WDT Non-Secure **/
#define PAC_SEC_NONSECA_WDT_		(1 << 8)
/** PAC_SEC_NONSECA_GCLK_ GCLK Non-Secure **/
#define PAC_SEC_NONSECA_GCLK_		(1 << 7)
/** PAC_SEC_NONSECA_SUPC_ SUPC Non-Secure **/
#define PAC_SEC_NONSECA_SUPC_		(1 << 6)
/** PAC_SEC_NONSECA_OSC32KCTRL_ OSC32KCTRL Non-Secure **/
#define PAC_SEC_NONSECA_OSC32KCTRL_		(1 << 5)
/** PAC_SEC_NONSECA_OSCCTRL_ OSCCTRL Non-Secure **/
#define PAC_SEC_NONSECA_OSCCTRL_		(1 << 4)
/** PAC_SEC_NONSECA_RSTC_ RSTC Non-Secure **/
#define PAC_SEC_NONSECA_RSTC_		(1 << 3)
/** PAC_SEC_NONSECA_MCLK_ MCLK Non-Secure **/
#define PAC_SEC_NONSECA_MCLK_		(1 << 2)
/** PAC_SEC_NONSECA_PM_ PM Non-Secure **/
#define PAC_SEC_NONSECA_PM_		(1 << 1)
/** PAC_SEC_NONSECA_PAC_ PAC Non-Secure **/
#define PAC_SEC_NONSECA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_nonsecb NONSECB Peripheral non-secure status - Bridge B
@{*/

/** PAC_SEC_NONSECB_DMAC_ DMAC Non-Secure **/
#define PAC_SEC_NONSECB_DMAC_		(1 << 3)
/** PAC_SEC_NONSECB_NVMCTRL_ NVMCTRL Non-Secure **/
#define PAC_SEC_NONSECB_NVMCTRL_		(1 << 2)
/** PAC_SEC_NONSECB_DSU_ DSU Non-Secure **/
#define PAC_SEC_NONSECB_DSU_		(1 << 1)
/** PAC_SEC_NONSECB_IDAU_ IDAU Non-Secure **/
#define PAC_SEC_NONSECB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_nonsecc NONSECC Peripheral non-secure status - Bridge C
@{*/

/** PAC_SEC_NONSECC_TRAM_ TRAM Non-Secure **/
#define PAC_SEC_NONSECC_TRAM_		(1 << 13)
/** PAC_SEC_NONSECC_OPAMP_ OPAMP Non-Secure **/
#define PAC_SEC_NONSECC_OPAMP_		(1 << 12)
/** PAC_SEC_NONSECC_CCL_ CCL Non-Secure **/
#define PAC_SEC_NONSECC_CCL_		(1 << 11)
/** PAC_SEC_NONSECC_TRNG_ TRNG Non-Secure **/
#define PAC_SEC_NONSECC_TRNG_		(1 << 10)
/** PAC_SEC_NONSECC_PTC_ PTC Non-Secure **/
#define PAC_SEC_NONSECC_PTC_		(1 << 9)
/** PAC_SEC_NONSECC_DAC_ DAC Non-Secure **/
#define PAC_SEC_NONSECC_DAC_		(1 << 8)
/** PAC_SEC_NONSECC_ADC_ ADC Non-Secure **/
#define PAC_SEC_NONSECC_ADC_		(1 << 7)
/** PAC_SEC_NONSECC_TC2_ TC2 Non-Secure **/
#define PAC_SEC_NONSECC_TC2_		(1 << 6)
/** PAC_SEC_NONSECC_TC1_ TC1 Non-Secure **/
#define PAC_SEC_NONSECC_TC1_		(1 << 5)
/** PAC_SEC_NONSECC_TC0_ TC0 Non-Secure **/
#define PAC_SEC_NONSECC_TC0_		(1 << 4)
/** PAC_SEC_NONSECC_SERCOM1_ SERCOM1 Non-Secure **/
#define PAC_SEC_NONSECC_SERCOM1_		(1 << 2)
/** PAC_SEC_NONSECC_SERCOM0_ SERCOM0 Non-Secure **/
#define PAC_SEC_NONSECC_SERCOM0_		(1 << 1)
/** PAC_SEC_NONSECC_EVSYS_ EVSYS Non-Secure **/
#define PAC_SEC_NONSECC_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_seclocka SECLOCKA Peripheral secure status locked - Bridge A
@{*/

/** PAC_SEC_SECLOCKA_AC_ AC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_AC_		(1 << 13)
/** PAC_SEC_SECLOCKA_PORT_ PORT Secure Status Locked **/
#define PAC_SEC_SECLOCKA_PORT_		(1 << 12)
/** PAC_SEC_SECLOCKA_FREQM_ FREQM Secure Status Locked **/
#define PAC_SEC_SECLOCKA_FREQM_		(1 << 11)
/** PAC_SEC_SECLOCKA_EIC_ EIC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_EIC_		(1 << 10)
/** PAC_SEC_SECLOCKA_RTC_ RTC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_RTC_		(1 << 9)
/** PAC_SEC_SECLOCKA_WDT_ WDT Secure Status Locked **/
#define PAC_SEC_SECLOCKA_WDT_		(1 << 8)
/** PAC_SEC_SECLOCKA_GCLK_ GCLK Secure Status Locked **/
#define PAC_SEC_SECLOCKA_GCLK_		(1 << 7)
/** PAC_SEC_SECLOCKA_SUPC_ SUPC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_SUPC_		(1 << 6)
/** PAC_SEC_SECLOCKA_OSC32KCTRL_ OSC32KCTRL Secure Status Locked **/
#define PAC_SEC_SECLOCKA_OSC32KCTRL_		(1 << 5)
/** PAC_SEC_SECLOCKA_OSCCTRL_ OSCCTRL Secure Status Locked **/
#define PAC_SEC_SECLOCKA_OSCCTRL_		(1 << 4)
/** PAC_SEC_SECLOCKA_RSTC_ RSTC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_RSTC_		(1 << 3)
/** PAC_SEC_SECLOCKA_MCLK_ MCLK Secure Status Locked **/
#define PAC_SEC_SECLOCKA_MCLK_		(1 << 2)
/** PAC_SEC_SECLOCKA_PM_ PM Secure Status Locked **/
#define PAC_SEC_SECLOCKA_PM_		(1 << 1)
/** PAC_SEC_SECLOCKA_PAC_ PAC Secure Status Locked **/
#define PAC_SEC_SECLOCKA_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_seclockb SECLOCKB Peripheral secure status locked - Bridge B
@{*/

/** PAC_SEC_SECLOCKB_DMAC_ DMAC Secure Status Locked **/
#define PAC_SEC_SECLOCKB_DMAC_		(1 << 3)
/** PAC_SEC_SECLOCKB_NVMCTRL_ NVMCTRL Secure Status Locked **/
#define PAC_SEC_SECLOCKB_NVMCTRL_		(1 << 2)
/** PAC_SEC_SECLOCKB_DSU_ DSU Secure Status Locked **/
#define PAC_SEC_SECLOCKB_DSU_		(1 << 1)
/** PAC_SEC_SECLOCKB_IDAU_ IDAU Secure Status Locked **/
#define PAC_SEC_SECLOCKB_IDAU_		(1 << 0)

/**@}*/

/** @defgroup pac_sec_seclockc SECLOCKC Peripheral secure status locked - Bridge C
@{*/

/** PAC_SEC_SECLOCKC_TRAM_ TRAM Secure Status Locked **/
#define PAC_SEC_SECLOCKC_TRAM_		(1 << 13)
/** PAC_SEC_SECLOCKC_OPAMP_ OPAMP Secure Status Locked **/
#define PAC_SEC_SECLOCKC_OPAMP_		(1 << 12)
/** PAC_SEC_SECLOCKC_CCL_ CCL Secure Status Locked **/
#define PAC_SEC_SECLOCKC_CCL_		(1 << 11)
/** PAC_SEC_SECLOCKC_TRNG_ TRNG Secure Status Locked **/
#define PAC_SEC_SECLOCKC_TRNG_		(1 << 10)
/** PAC_SEC_SECLOCKC_PTC_ PTC Secure Status Locked **/
#define PAC_SEC_SECLOCKC_PTC_		(1 << 9)
/** PAC_SEC_SECLOCKC_DAC_ DAC Secure Status Locked **/
#define PAC_SEC_SECLOCKC_DAC_		(1 << 8)
/** PAC_SEC_SECLOCKC_ADC_ ADC Secure Status Locked **/
#define PAC_SEC_SECLOCKC_ADC_		(1 << 7)
/** PAC_SEC_SECLOCKC_TC2_ TC2 Secure Status Locked **/
#define PAC_SEC_SECLOCKC_TC2_		(1 << 6)
/** PAC_SEC_SECLOCKC_TC1_ TC1 Secure Status Locked **/
#define PAC_SEC_SECLOCKC_TC1_		(1 << 5)
/** PAC_SEC_SECLOCKC_TC0_ TC0 Secure Status Locked **/
#define PAC_SEC_SECLOCKC_TC0_		(1 << 4)
/** PAC_SEC_SECLOCKC_SERCOM1_ SERCOM1 Secure Status Locked **/
#define PAC_SEC_SECLOCKC_SERCOM1_		(1 << 2)
/** PAC_SEC_SECLOCKC_SERCOM0_ SERCOM0 Secure Status Locked **/
#define PAC_SEC_SECLOCKC_SERCOM0_		(1 << 1)
/** PAC_SEC_SECLOCKC_EVSYS_ EVSYS Secure Status Locked **/
#define PAC_SEC_SECLOCKC_EVSYS_		(1 << 0)

/**@}*/

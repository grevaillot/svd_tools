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
/** PAC_INTFLAGD Peripheral interrupt flag status - Bridge D **/
#define PAC_INTFLAGD			MMIO32(PAC_BASE + 0x20)
/** PAC_INTFLAGE Peripheral interrupt flag status - Bridge E **/
#define PAC_INTFLAGE			MMIO32(PAC_BASE + 0x24)
/** PAC_STATUSA Peripheral write protection status - Bridge A **/
#define PAC_STATUSA			MMIO32(PAC_BASE + 0x34)
/** PAC_STATUSB Peripheral write protection status - Bridge B **/
#define PAC_STATUSB			MMIO32(PAC_BASE + 0x38)
/** PAC_STATUSC Peripheral write protection status - Bridge C **/
#define PAC_STATUSC			MMIO32(PAC_BASE + 0x3c)
/** PAC_STATUSD Peripheral write protection status - Bridge D **/
#define PAC_STATUSD			MMIO32(PAC_BASE + 0x40)
/** PAC_STATUSE Peripheral write protection status - Bridge E **/
#define PAC_STATUSE			MMIO32(PAC_BASE + 0x44)

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

/** PAC_INTFLAGAHB_HSRAMLP_ HSRAMLP **/
#define PAC_INTFLAGAHB_HSRAMLP_		(1 << 25)
/** PAC_INTFLAGAHB_L2HBRIDGES_ L2HBRIDGES **/
#define PAC_INTFLAGAHB_L2HBRIDGES_		(1 << 24)
/** PAC_INTFLAGAHB_LPRAMDMAC_ LPRAMDMAC **/
#define PAC_INTFLAGAHB_LPRAMDMAC_		(1 << 23)
/** PAC_INTFLAGAHB_LPRAMPICOP_ LPRAMPICOP **/
#define PAC_INTFLAGAHB_LPRAMPICOP_		(1 << 22)
/** PAC_INTFLAGAHB_LPRAMHS_ LPRAMHS **/
#define PAC_INTFLAGAHB_LPRAMHS_		(1 << 21)
/** PAC_INTFLAGAHB_HPB4_ HPB4 **/
#define PAC_INTFLAGAHB_HPB4_		(1 << 19)
/** PAC_INTFLAGAHB_HPB3_ HPB3 **/
#define PAC_INTFLAGAHB_HPB3_		(1 << 18)
/** PAC_INTFLAGAHB_HPB2_ HPB2 **/
#define PAC_INTFLAGAHB_HPB2_		(1 << 17)
/** PAC_INTFLAGAHB_HPB0_ HPB0 **/
#define PAC_INTFLAGAHB_HPB0_		(1 << 16)
/** PAC_INTFLAGAHB_H2LBRIDGES_ H2LBRIDGES **/
#define PAC_INTFLAGAHB_H2LBRIDGES_		(1 << 4)
/** PAC_INTFLAGAHB_HPB1_ HPB1 **/
#define PAC_INTFLAGAHB_HPB1_		(1 << 3)
/** PAC_INTFLAGAHB_HSRAMDSU_ HSRAMDSU **/
#define PAC_INTFLAGAHB_HSRAMDSU_		(1 << 2)
/** PAC_INTFLAGAHB_HSRAMCM0P_ HSRAMCM0P **/
#define PAC_INTFLAGAHB_HSRAMCM0P_		(1 << 1)
/** PAC_INTFLAGAHB_FLASH_ FLASH **/
#define PAC_INTFLAGAHB_FLASH_		(1 << 0)

/**@}*/

/** @defgroup pac_intflaga INTFLAGA Peripheral interrupt flag status - Bridge A
@{*/

/** PAC_INTFLAGA_PORT_ PORT **/
#define PAC_INTFLAGA_PORT_		(1 << 10)
/** PAC_INTFLAGA_EIC_ EIC **/
#define PAC_INTFLAGA_EIC_		(1 << 9)
/** PAC_INTFLAGA_RTC_ RTC **/
#define PAC_INTFLAGA_RTC_		(1 << 8)
/** PAC_INTFLAGA_WDT_ WDT **/
#define PAC_INTFLAGA_WDT_		(1 << 7)
/** PAC_INTFLAGA_GCLK_ GCLK **/
#define PAC_INTFLAGA_GCLK_		(1 << 6)
/** PAC_INTFLAGA_SUPC_ SUPC **/
#define PAC_INTFLAGA_SUPC_		(1 << 5)
/** PAC_INTFLAGA_OSC32KCTRL_ OSC32KCTRL **/
#define PAC_INTFLAGA_OSC32KCTRL_		(1 << 4)
/** PAC_INTFLAGA_OSCCTRL_ OSCCTRL **/
#define PAC_INTFLAGA_OSCCTRL_		(1 << 3)
/** PAC_INTFLAGA_RSTC_ RSTC **/
#define PAC_INTFLAGA_RSTC_		(1 << 2)
/** PAC_INTFLAGA_MCLK_ MCLK **/
#define PAC_INTFLAGA_MCLK_		(1 << 1)
/** PAC_INTFLAGA_PM_ PM **/
#define PAC_INTFLAGA_PM_		(1 << 0)

/**@}*/

/** @defgroup pac_intflagb INTFLAGB Peripheral interrupt flag status - Bridge B
@{*/

/** PAC_INTFLAGB_MTB_ MTB **/
#define PAC_INTFLAGB_MTB_		(1 << 3)
/** PAC_INTFLAGB_NVMCTRL_ NVMCTRL **/
#define PAC_INTFLAGB_NVMCTRL_		(1 << 2)
/** PAC_INTFLAGB_DSU_ DSU **/
#define PAC_INTFLAGB_DSU_		(1 << 1)
/** PAC_INTFLAGB_USB_ USB **/
#define PAC_INTFLAGB_USB_		(1 << 0)

/**@}*/

/** @defgroup pac_intflagc INTFLAGC Peripheral interrupt flag status - Bridge C
@{*/

/** PAC_INTFLAGC_TRNG_ TRNG **/
#define PAC_INTFLAGC_TRNG_		(1 << 14)
/** PAC_INTFLAGC_AES_ AES **/
#define PAC_INTFLAGC_AES_		(1 << 13)
/** PAC_INTFLAGC_DAC_ DAC **/
#define PAC_INTFLAGC_DAC_		(1 << 12)
/** PAC_INTFLAGC_TC3_ TC3 **/
#define PAC_INTFLAGC_TC3_		(1 << 11)
/** PAC_INTFLAGC_TC2_ TC2 **/
#define PAC_INTFLAGC_TC2_		(1 << 10)
/** PAC_INTFLAGC_TC1_ TC1 **/
#define PAC_INTFLAGC_TC1_		(1 << 9)
/** PAC_INTFLAGC_TC0_ TC0 **/
#define PAC_INTFLAGC_TC0_		(1 << 8)
/** PAC_INTFLAGC_TCC2_ TCC2 **/
#define PAC_INTFLAGC_TCC2_		(1 << 7)
/** PAC_INTFLAGC_TCC1_ TCC1 **/
#define PAC_INTFLAGC_TCC1_		(1 << 6)
/** PAC_INTFLAGC_TCC0_ TCC0 **/
#define PAC_INTFLAGC_TCC0_		(1 << 5)
/** PAC_INTFLAGC_SERCOM4_ SERCOM4 **/
#define PAC_INTFLAGC_SERCOM4_		(1 << 4)
/** PAC_INTFLAGC_SERCOM3_ SERCOM3 **/
#define PAC_INTFLAGC_SERCOM3_		(1 << 3)
/** PAC_INTFLAGC_SERCOM2_ SERCOM2 **/
#define PAC_INTFLAGC_SERCOM2_		(1 << 2)
/** PAC_INTFLAGC_SERCOM1_ SERCOM1 **/
#define PAC_INTFLAGC_SERCOM1_		(1 << 1)
/** PAC_INTFLAGC_SERCOM0_ SERCOM0 **/
#define PAC_INTFLAGC_SERCOM0_		(1 << 0)

/**@}*/

/** @defgroup pac_intflagd INTFLAGD Peripheral interrupt flag status - Bridge D
@{*/

/** PAC_INTFLAGD_CCL_ CCL **/
#define PAC_INTFLAGD_CCL_		(1 << 7)
/** PAC_INTFLAGD_PTC_ PTC **/
#define PAC_INTFLAGD_PTC_		(1 << 5)
/** PAC_INTFLAGD_AC_ AC **/
#define PAC_INTFLAGD_AC_		(1 << 4)
/** PAC_INTFLAGD_ADC_ ADC **/
#define PAC_INTFLAGD_ADC_		(1 << 3)
/** PAC_INTFLAGD_TC4_ TC4 **/
#define PAC_INTFLAGD_TC4_		(1 << 2)
/** PAC_INTFLAGD_SERCOM5_ SERCOM5 **/
#define PAC_INTFLAGD_SERCOM5_		(1 << 1)
/** PAC_INTFLAGD_EVSYS_ EVSYS **/
#define PAC_INTFLAGD_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_intflage INTFLAGE Peripheral interrupt flag status - Bridge E
@{*/

/** PAC_INTFLAGE_DMAC_ DMAC **/
#define PAC_INTFLAGE_DMAC_		(1 << 1)
/** PAC_INTFLAGE_PAC_ PAC **/
#define PAC_INTFLAGE_PAC_		(1 << 0)

/**@}*/

/** @defgroup pac_statusa STATUSA Peripheral write protection status - Bridge A
@{*/

/** PAC_STATUSA_PORT_ PORT APB Protect Enable **/
#define PAC_STATUSA_PORT_		(1 << 10)
/** PAC_STATUSA_EIC_ EIC APB Protect Enable **/
#define PAC_STATUSA_EIC_		(1 << 9)
/** PAC_STATUSA_RTC_ RTC APB Protect Enable **/
#define PAC_STATUSA_RTC_		(1 << 8)
/** PAC_STATUSA_WDT_ WDT APB Protect Enable **/
#define PAC_STATUSA_WDT_		(1 << 7)
/** PAC_STATUSA_GCLK_ GCLK APB Protect Enable **/
#define PAC_STATUSA_GCLK_		(1 << 6)
/** PAC_STATUSA_SUPC_ SUPC APB Protect Enable **/
#define PAC_STATUSA_SUPC_		(1 << 5)
/** PAC_STATUSA_OSC32KCTRL_ OSC32KCTRL APB Protect Enable **/
#define PAC_STATUSA_OSC32KCTRL_		(1 << 4)
/** PAC_STATUSA_OSCCTRL_ OSCCTRL APB Protect Enable **/
#define PAC_STATUSA_OSCCTRL_		(1 << 3)
/** PAC_STATUSA_RSTC_ RSTC APB Protect Enable **/
#define PAC_STATUSA_RSTC_		(1 << 2)
/** PAC_STATUSA_MCLK_ MCLK APB Protect Enable **/
#define PAC_STATUSA_MCLK_		(1 << 1)
/** PAC_STATUSA_PM_ PM APB Protect Enable **/
#define PAC_STATUSA_PM_		(1 << 0)

/**@}*/

/** @defgroup pac_statusb STATUSB Peripheral write protection status - Bridge B
@{*/

/** PAC_STATUSB_MTB_ MTB APB Protect Enable **/
#define PAC_STATUSB_MTB_		(1 << 3)
/** PAC_STATUSB_NVMCTRL_ NVMCTRL APB Protect Enable **/
#define PAC_STATUSB_NVMCTRL_		(1 << 2)
/** PAC_STATUSB_DSU_ DSU APB Protect Enable **/
#define PAC_STATUSB_DSU_		(1 << 1)
/** PAC_STATUSB_USB_ USB APB Protect Enable **/
#define PAC_STATUSB_USB_		(1 << 0)

/**@}*/

/** @defgroup pac_statusc STATUSC Peripheral write protection status - Bridge C
@{*/

/** PAC_STATUSC_TRNG_ TRNG APB Protect Enable **/
#define PAC_STATUSC_TRNG_		(1 << 14)
/** PAC_STATUSC_AES_ AES APB Protect Enable **/
#define PAC_STATUSC_AES_		(1 << 13)
/** PAC_STATUSC_DAC_ DAC APB Protect Enable **/
#define PAC_STATUSC_DAC_		(1 << 12)
/** PAC_STATUSC_TC3_ TC3 APB Protect Enable **/
#define PAC_STATUSC_TC3_		(1 << 11)
/** PAC_STATUSC_TC2_ TC2 APB Protect Enable **/
#define PAC_STATUSC_TC2_		(1 << 10)
/** PAC_STATUSC_TC1_ TC1 APB Protect Enable **/
#define PAC_STATUSC_TC1_		(1 << 9)
/** PAC_STATUSC_TC0_ TC0 APB Protect Enable **/
#define PAC_STATUSC_TC0_		(1 << 8)
/** PAC_STATUSC_TCC2_ TCC2 APB Protect Enable **/
#define PAC_STATUSC_TCC2_		(1 << 7)
/** PAC_STATUSC_TCC1_ TCC1 APB Protect Enable **/
#define PAC_STATUSC_TCC1_		(1 << 6)
/** PAC_STATUSC_TCC0_ TCC0 APB Protect Enable **/
#define PAC_STATUSC_TCC0_		(1 << 5)
/** PAC_STATUSC_SERCOM4_ SERCOM4 APB Protect Enable **/
#define PAC_STATUSC_SERCOM4_		(1 << 4)
/** PAC_STATUSC_SERCOM3_ SERCOM3 APB Protect Enable **/
#define PAC_STATUSC_SERCOM3_		(1 << 3)
/** PAC_STATUSC_SERCOM2_ SERCOM2 APB Protect Enable **/
#define PAC_STATUSC_SERCOM2_		(1 << 2)
/** PAC_STATUSC_SERCOM1_ SERCOM1 APB Protect Enable **/
#define PAC_STATUSC_SERCOM1_		(1 << 1)
/** PAC_STATUSC_SERCOM0_ SERCOM0 APB Protect Enable **/
#define PAC_STATUSC_SERCOM0_		(1 << 0)

/**@}*/

/** @defgroup pac_statusd STATUSD Peripheral write protection status - Bridge D
@{*/

/** PAC_STATUSD_CCL_ CCL APB Protect Enable **/
#define PAC_STATUSD_CCL_		(1 << 7)
/** PAC_STATUSD_PTC_ PTC APB Protect Enable **/
#define PAC_STATUSD_PTC_		(1 << 5)
/** PAC_STATUSD_AC_ AC APB Protect Enable **/
#define PAC_STATUSD_AC_		(1 << 4)
/** PAC_STATUSD_ADC_ ADC APB Protect Enable **/
#define PAC_STATUSD_ADC_		(1 << 3)
/** PAC_STATUSD_TC4_ TC4 APB Protect Enable **/
#define PAC_STATUSD_TC4_		(1 << 2)
/** PAC_STATUSD_SERCOM5_ SERCOM5 APB Protect Enable **/
#define PAC_STATUSD_SERCOM5_		(1 << 1)
/** PAC_STATUSD_EVSYS_ EVSYS APB Protect Enable **/
#define PAC_STATUSD_EVSYS_		(1 << 0)

/**@}*/

/** @defgroup pac_statuse STATUSE Peripheral write protection status - Bridge E
@{*/

/** PAC_STATUSE_DMAC_ DMAC APB Protect Enable **/
#define PAC_STATUSE_DMAC_		(1 << 1)
/** PAC_STATUSE_PAC_ PAC APB Protect Enable **/
#define PAC_STATUSE_PAC_		(1 << 0)

/**@}*/

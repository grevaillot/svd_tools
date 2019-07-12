#pragma once 

/* --- RTC: Real-time clock ----------------------------------------- */

/** @defgroup rtc_registers Real-time clock Register
@{*/

/** RTC_TR time register **/
#define RTC_TR			MMIO32(RTC_BASE + 0x00)
/** RTC_DR date register **/
#define RTC_DR			MMIO32(RTC_BASE + 0x04)
/** RTC_SSR sub second register **/
#define RTC_SSR			MMIO32(RTC_BASE + 0x08)
/** RTC_ICSR initialization and status register **/
#define RTC_ICSR			MMIO32(RTC_BASE + 0x0c)
/** RTC_PRER prescaler register **/
#define RTC_PRER			MMIO32(RTC_BASE + 0x10)
/** RTC_WUTR wakeup timer register **/
#define RTC_WUTR			MMIO32(RTC_BASE + 0x14)
/** RTC_CR control register **/
#define RTC_CR			MMIO32(RTC_BASE + 0x18)
/** RTC_WPR write protection register **/
#define RTC_WPR			MMIO32(RTC_BASE + 0x24)
/** RTC_CALR calibration register **/
#define RTC_CALR			MMIO32(RTC_BASE + 0x28)
/** RTC_SHIFTR shift control register **/
#define RTC_SHIFTR			MMIO32(RTC_BASE + 0x2c)
/** RTC_TSTR time stamp time register **/
#define RTC_TSTR			MMIO32(RTC_BASE + 0x30)
/** RTC_TSDR time stamp date register **/
#define RTC_TSDR			MMIO32(RTC_BASE + 0x34)
/** RTC_TSSSR timestamp sub second register **/
#define RTC_TSSSR			MMIO32(RTC_BASE + 0x38)
/** RTC_ALRMAR alarm A register **/
#define RTC_ALRMAR			MMIO32(RTC_BASE + 0x40)
/** RTC_ALRMASSR alarm A sub second register **/
#define RTC_ALRMASSR			MMIO32(RTC_BASE + 0x44)
/** RTC_ALRMBR alarm B register **/
#define RTC_ALRMBR			MMIO32(RTC_BASE + 0x48)
/** RTC_ALRMBSSR alarm B sub second register **/
#define RTC_ALRMBSSR			MMIO32(RTC_BASE + 0x4c)
/** RTC_SR status register **/
#define RTC_SR			MMIO32(RTC_BASE + 0x50)
/** RTC_MISR masked interrupt status register **/
#define RTC_MISR			MMIO32(RTC_BASE + 0x54)
/** RTC_SCR status clear register **/
#define RTC_SCR			MMIO32(RTC_BASE + 0x5c)
/** RTC_HWCFGR hardware configuration register **/
#define RTC_HWCFGR			MMIO32(RTC_BASE + 0x3f0)
/** RTC_VERR EXTI IP Version register **/
#define RTC_VERR			MMIO32(RTC_BASE + 0x3f4)
/** RTC_IPIDR EXTI Identification register **/
#define RTC_IPIDR			MMIO32(RTC_BASE + 0x3f8)
/** RTC_SIDR EXTI Size ID register **/
#define RTC_SIDR			MMIO32(RTC_BASE + 0x3fc)

/**@}*/


/** @defgroup rtc_tr TR time register
@{*/

/** RTC_TR_PM AM/PM notation **/
#define RTC_TR_PM		(1 << 22)

#define RTC_TR_HT_SHIFT		20
#define RTC_TR_HT_MASK		0x03
/** @defgroup rtc_tr_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_TR_HU_SHIFT		16
#define RTC_TR_HU_MASK		0x0f
/** @defgroup rtc_tr_hu HU Hour units in BCD format
@{*/
/**@}*/


#define RTC_TR_MNT_SHIFT		12
#define RTC_TR_MNT_MASK		0x07
/** @defgroup rtc_tr_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_TR_MNU_SHIFT		8
#define RTC_TR_MNU_MASK		0x0f
/** @defgroup rtc_tr_mnu MNU Minute units in BCD format
@{*/
/**@}*/


#define RTC_TR_ST_SHIFT		4
#define RTC_TR_ST_MASK		0x07
/** @defgroup rtc_tr_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_TR_SU_SHIFT		0
#define RTC_TR_SU_MASK		0x0f
/** @defgroup rtc_tr_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_dr DR date register
@{*/


#define RTC_DR_YT_SHIFT		20
#define RTC_DR_YT_MASK		0x0f
/** @defgroup rtc_dr_yt YT Year tens in BCD format
@{*/
/**@}*/


#define RTC_DR_YU_SHIFT		16
#define RTC_DR_YU_MASK		0x0f
/** @defgroup rtc_dr_yu YU Year units in BCD format
@{*/
/**@}*/


#define RTC_DR_WDU_SHIFT		13
#define RTC_DR_WDU_MASK		0x07
/** @defgroup rtc_dr_wdu WDU Week day units
@{*/
/**@}*/

/** RTC_DR_MT Month tens in BCD format **/
#define RTC_DR_MT		(1 << 12)

#define RTC_DR_MU_SHIFT		8
#define RTC_DR_MU_MASK		0x0f
/** @defgroup rtc_dr_mu MU Month units in BCD format
@{*/
/**@}*/


#define RTC_DR_DT_SHIFT		4
#define RTC_DR_DT_MASK		0x03
/** @defgroup rtc_dr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_DR_DU_SHIFT		0
#define RTC_DR_DU_MASK		0x0f
/** @defgroup rtc_dr_du DU Date units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_ssr SSR sub second register
@{*/


#define RTC_SSR_SS_SHIFT		0
#define RTC_SSR_SS_MASK		0xffff
/** @defgroup rtc_ssr_ss SS Sub second value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_icsr ICSR initialization and status register
@{*/

/** RTC_ICSR_RECALPF Recalibration pending Flag **/
#define RTC_ICSR_RECALPF		(1 << 16)
/** RTC_ICSR_INIT Initialization mode **/
#define RTC_ICSR_INIT		(1 << 7)
/** RTC_ICSR_INITF Initialization flag **/
#define RTC_ICSR_INITF		(1 << 6)
/** RTC_ICSR_RSF Registers synchronization flag **/
#define RTC_ICSR_RSF		(1 << 5)
/** RTC_ICSR_INITS Initialization status flag **/
#define RTC_ICSR_INITS		(1 << 4)
/** RTC_ICSR_SHPF Shift operation pending **/
#define RTC_ICSR_SHPF		(1 << 3)
/** RTC_ICSR_WUTWF Wakeup timer write flag **/
#define RTC_ICSR_WUTWF		(1 << 2)
/** RTC_ICSR_ALRBWF Alarm B write flag **/
#define RTC_ICSR_ALRBWF		(1 << 1)
/** RTC_ICSR_ALRAWF Alarm A write flag **/
#define RTC_ICSR_ALRAWF		(1 << 0)

/**@}*/

/** @defgroup rtc_prer PRER prescaler register
@{*/


#define RTC_PRER_PREDIV_A_SHIFT		16
#define RTC_PRER_PREDIV_A_MASK		0x7f
/** @defgroup rtc_prer_prediv_a PREDIVA Asynchronous prescaler factor
@{*/
/**@}*/


#define RTC_PRER_PREDIV_S_SHIFT		0
#define RTC_PRER_PREDIV_S_MASK		0x7fff
/** @defgroup rtc_prer_prediv_s PREDIVS Synchronous prescaler factor
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_wutr WUTR wakeup timer register
@{*/


#define RTC_WUTR_WUT_SHIFT		0
#define RTC_WUTR_WUT_MASK		0xffff
/** @defgroup rtc_wutr_wut WUT Wakeup auto-reload value bits
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_cr CR control register
@{*/

/** RTC_CR_OUT2EN OUT2EN **/
#define RTC_CR_OUT2EN		(1 << 31)
/** RTC_CR_TAMPALRM_TYPE TAMPALRM_TYPE **/
#define RTC_CR_TAMPALRM_TYPE		(1 << 30)
/** RTC_CR_TAMPALRM_PU TAMPALRM_PU **/
#define RTC_CR_TAMPALRM_PU		(1 << 29)
/** RTC_CR_TAMPOE TAMPOE **/
#define RTC_CR_TAMPOE		(1 << 26)
/** RTC_CR_TAMPTS TAMPTS **/
#define RTC_CR_TAMPTS		(1 << 25)
/** RTC_CR_ITSE ITSE **/
#define RTC_CR_ITSE		(1 << 24)
/** RTC_CR_COE COE **/
#define RTC_CR_COE		(1 << 23)

#define RTC_CR_OSEL_SHIFT		21
#define RTC_CR_OSEL_MASK		0x03
/** @defgroup rtc_cr_osel OSEL OSEL
@{*/
/**@}*/

/** RTC_CR_POL POL **/
#define RTC_CR_POL		(1 << 20)
/** RTC_CR_COSEL COSEL **/
#define RTC_CR_COSEL		(1 << 19)
/** RTC_CR_BKP BKP **/
#define RTC_CR_BKP		(1 << 18)
/** RTC_CR_SUB1H SUB1H **/
#define RTC_CR_SUB1H		(1 << 17)
/** RTC_CR_ADD1H ADD1H **/
#define RTC_CR_ADD1H		(1 << 16)
/** RTC_CR_TSIE TSIE **/
#define RTC_CR_TSIE		(1 << 15)
/** RTC_CR_WUTIE WUTIE **/
#define RTC_CR_WUTIE		(1 << 14)
/** RTC_CR_ALRBIE ALRBIE **/
#define RTC_CR_ALRBIE		(1 << 13)
/** RTC_CR_ALRAIE ALRAIE **/
#define RTC_CR_ALRAIE		(1 << 12)
/** RTC_CR_TSE TSE **/
#define RTC_CR_TSE		(1 << 11)
/** RTC_CR_WUTE WUTE **/
#define RTC_CR_WUTE		(1 << 10)
/** RTC_CR_ALRBE ALRBE **/
#define RTC_CR_ALRBE		(1 << 9)
/** RTC_CR_ALRAE ALRAE **/
#define RTC_CR_ALRAE		(1 << 8)
/** RTC_CR_FMT FMT **/
#define RTC_CR_FMT		(1 << 6)
/** RTC_CR_BYPSHAD BYPSHAD **/
#define RTC_CR_BYPSHAD		(1 << 5)
/** RTC_CR_REFCKON REFCKON **/
#define RTC_CR_REFCKON		(1 << 4)
/** RTC_CR_TSEDGE TSEDGE **/
#define RTC_CR_TSEDGE		(1 << 3)

#define RTC_CR_WUCKSEL_SHIFT		0
#define RTC_CR_WUCKSEL_MASK		0x07
/** @defgroup rtc_cr_wucksel WUCKSEL WUCKSEL
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_wpr WPR write protection register
@{*/


#define RTC_WPR_KEY_SHIFT		0
#define RTC_WPR_KEY_MASK		0xff
/** @defgroup rtc_wpr_key KEY Write protection key
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_calr CALR calibration register
@{*/

/** RTC_CALR_CALP Increase frequency of RTC by 488.5 ppm **/
#define RTC_CALR_CALP		(1 << 15)
/** RTC_CALR_CALW8 Use an 8-second calibration cycle period **/
#define RTC_CALR_CALW8		(1 << 14)
/** RTC_CALR_CALW16 Use a 16-second calibration cycle period **/
#define RTC_CALR_CALW16		(1 << 13)

#define RTC_CALR_CALM_SHIFT		0
#define RTC_CALR_CALM_MASK		0x1ff
/** @defgroup rtc_calr_calm CALM Calibration minus
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_shiftr SHIFTR shift control register
@{*/

/** RTC_SHIFTR_ADD1S Add one second **/
#define RTC_SHIFTR_ADD1S		(1 << 31)

#define RTC_SHIFTR_SUBFS_SHIFT		0
#define RTC_SHIFTR_SUBFS_MASK		0x7fff
/** @defgroup rtc_shiftr_subfs SUBFS Subtract a fraction of a second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_tstr TSTR time stamp time register
@{*/

/** RTC_TSTR_PM AM/PM notation **/
#define RTC_TSTR_PM		(1 << 22)

#define RTC_TSTR_HT_SHIFT		20
#define RTC_TSTR_HT_MASK		0x03
/** @defgroup rtc_tstr_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_TSTR_HU_SHIFT		16
#define RTC_TSTR_HU_MASK		0x0f
/** @defgroup rtc_tstr_hu HU Hour units in BCD format
@{*/
/**@}*/


#define RTC_TSTR_MNT_SHIFT		12
#define RTC_TSTR_MNT_MASK		0x07
/** @defgroup rtc_tstr_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_TSTR_MNU_SHIFT		8
#define RTC_TSTR_MNU_MASK		0x0f
/** @defgroup rtc_tstr_mnu MNU Minute units in BCD format
@{*/
/**@}*/


#define RTC_TSTR_ST_SHIFT		4
#define RTC_TSTR_ST_MASK		0x07
/** @defgroup rtc_tstr_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_TSTR_SU_SHIFT		0
#define RTC_TSTR_SU_MASK		0x0f
/** @defgroup rtc_tstr_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_tsdr TSDR time stamp date register
@{*/


#define RTC_TSDR_WDU_SHIFT		13
#define RTC_TSDR_WDU_MASK		0x07
/** @defgroup rtc_tsdr_wdu WDU Week day units
@{*/
/**@}*/

/** RTC_TSDR_MT Month tens in BCD format **/
#define RTC_TSDR_MT		(1 << 12)

#define RTC_TSDR_MU_SHIFT		8
#define RTC_TSDR_MU_MASK		0x0f
/** @defgroup rtc_tsdr_mu MU Month units in BCD format
@{*/
/**@}*/


#define RTC_TSDR_DT_SHIFT		4
#define RTC_TSDR_DT_MASK		0x03
/** @defgroup rtc_tsdr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_TSDR_DU_SHIFT		0
#define RTC_TSDR_DU_MASK		0x0f
/** @defgroup rtc_tsdr_du DU Date units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_tsssr TSSSR timestamp sub second register
@{*/


#define RTC_TSSSR_SS_SHIFT		0
#define RTC_TSSSR_SS_MASK		0xffff
/** @defgroup rtc_tsssr_ss SS Sub second value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrmar ALRMAR alarm A register
@{*/

/** RTC_ALRMAR_MSK4 Alarm A date mask **/
#define RTC_ALRMAR_MSK4		(1 << 31)
/** RTC_ALRMAR_WDSEL Week day selection **/
#define RTC_ALRMAR_WDSEL		(1 << 30)

#define RTC_ALRMAR_DT_SHIFT		28
#define RTC_ALRMAR_DT_MASK		0x03
/** @defgroup rtc_alrmar_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMAR_DU_SHIFT		24
#define RTC_ALRMAR_DU_MASK		0x0f
/** @defgroup rtc_alrmar_du DU Date units or day in BCD format
@{*/
/**@}*/

/** RTC_ALRMAR_MSK3 Alarm A hours mask **/
#define RTC_ALRMAR_MSK3		(1 << 23)
/** RTC_ALRMAR_PM AM/PM notation **/
#define RTC_ALRMAR_PM		(1 << 22)

#define RTC_ALRMAR_HT_SHIFT		20
#define RTC_ALRMAR_HT_MASK		0x03
/** @defgroup rtc_alrmar_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMAR_HU_SHIFT		16
#define RTC_ALRMAR_HU_MASK		0x0f
/** @defgroup rtc_alrmar_hu HU Hour units in BCD format
@{*/
/**@}*/

/** RTC_ALRMAR_MSK2 Alarm A minutes mask **/
#define RTC_ALRMAR_MSK2		(1 << 15)

#define RTC_ALRMAR_MNT_SHIFT		12
#define RTC_ALRMAR_MNT_MASK		0x07
/** @defgroup rtc_alrmar_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMAR_MNU_SHIFT		8
#define RTC_ALRMAR_MNU_MASK		0x0f
/** @defgroup rtc_alrmar_mnu MNU Minute units in BCD format
@{*/
/**@}*/

/** RTC_ALRMAR_MSK1 Alarm A seconds mask **/
#define RTC_ALRMAR_MSK1		(1 << 7)

#define RTC_ALRMAR_ST_SHIFT		4
#define RTC_ALRMAR_ST_MASK		0x07
/** @defgroup rtc_alrmar_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMAR_SU_SHIFT		0
#define RTC_ALRMAR_SU_MASK		0x0f
/** @defgroup rtc_alrmar_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrmassr ALRMASSR alarm A sub second register
@{*/


#define RTC_ALRMASSR_MASKSS_SHIFT		24
#define RTC_ALRMASSR_MASKSS_MASK		0x0f
/** @defgroup rtc_alrmassr_maskss MASKSS Mask the most-significant bits starting at this bit
@{*/
/**@}*/


#define RTC_ALRMASSR_SS_SHIFT		0
#define RTC_ALRMASSR_SS_MASK		0x7fff
/** @defgroup rtc_alrmassr_ss SS Sub seconds value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrmbr ALRMBR alarm B register
@{*/

/** RTC_ALRMBR_MSK4 Alarm B date mask **/
#define RTC_ALRMBR_MSK4		(1 << 31)
/** RTC_ALRMBR_WDSEL Week day selection **/
#define RTC_ALRMBR_WDSEL		(1 << 30)

#define RTC_ALRMBR_DT_SHIFT		28
#define RTC_ALRMBR_DT_MASK		0x03
/** @defgroup rtc_alrmbr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMBR_DU_SHIFT		24
#define RTC_ALRMBR_DU_MASK		0x0f
/** @defgroup rtc_alrmbr_du DU Date units or day in BCD format
@{*/
/**@}*/

/** RTC_ALRMBR_MSK3 Alarm B hours mask **/
#define RTC_ALRMBR_MSK3		(1 << 23)
/** RTC_ALRMBR_PM AM/PM notation **/
#define RTC_ALRMBR_PM		(1 << 22)

#define RTC_ALRMBR_HT_SHIFT		20
#define RTC_ALRMBR_HT_MASK		0x03
/** @defgroup rtc_alrmbr_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMBR_HU_SHIFT		16
#define RTC_ALRMBR_HU_MASK		0x0f
/** @defgroup rtc_alrmbr_hu HU Hour units in BCD format
@{*/
/**@}*/

/** RTC_ALRMBR_MSK2 Alarm B minutes mask **/
#define RTC_ALRMBR_MSK2		(1 << 15)

#define RTC_ALRMBR_MNT_SHIFT		12
#define RTC_ALRMBR_MNT_MASK		0x07
/** @defgroup rtc_alrmbr_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMBR_MNU_SHIFT		8
#define RTC_ALRMBR_MNU_MASK		0x0f
/** @defgroup rtc_alrmbr_mnu MNU Minute units in BCD format
@{*/
/**@}*/

/** RTC_ALRMBR_MSK1 Alarm B seconds mask **/
#define RTC_ALRMBR_MSK1		(1 << 7)

#define RTC_ALRMBR_ST_SHIFT		4
#define RTC_ALRMBR_ST_MASK		0x07
/** @defgroup rtc_alrmbr_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_ALRMBR_SU_SHIFT		0
#define RTC_ALRMBR_SU_MASK		0x0f
/** @defgroup rtc_alrmbr_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrmbssr ALRMBSSR alarm B sub second register
@{*/


#define RTC_ALRMBSSR_MASKSS_SHIFT		24
#define RTC_ALRMBSSR_MASKSS_MASK		0x0f
/** @defgroup rtc_alrmbssr_maskss MASKSS Mask the most-significant bits starting at this bit
@{*/
/**@}*/


#define RTC_ALRMBSSR_SS_SHIFT		0
#define RTC_ALRMBSSR_SS_MASK		0x7fff
/** @defgroup rtc_alrmbssr_ss SS Sub seconds value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_sr SR status register
@{*/

/** RTC_SR_ITSF ITSF **/
#define RTC_SR_ITSF		(1 << 5)
/** RTC_SR_TSOVF TSOVF **/
#define RTC_SR_TSOVF		(1 << 4)
/** RTC_SR_TSF TSF **/
#define RTC_SR_TSF		(1 << 3)
/** RTC_SR_WUTF WUTF **/
#define RTC_SR_WUTF		(1 << 2)
/** RTC_SR_ALRBF ALRBF **/
#define RTC_SR_ALRBF		(1 << 1)
/** RTC_SR_ALRAF ALRAF **/
#define RTC_SR_ALRAF		(1 << 0)

/**@}*/

/** @defgroup rtc_misr MISR masked interrupt status register
@{*/

/** RTC_MISR_ITSMF ITSMF **/
#define RTC_MISR_ITSMF		(1 << 5)
/** RTC_MISR_TSOVMF TSOVMF **/
#define RTC_MISR_TSOVMF		(1 << 4)
/** RTC_MISR_TSMF TSMF **/
#define RTC_MISR_TSMF		(1 << 3)
/** RTC_MISR_WUTMF WUTMF **/
#define RTC_MISR_WUTMF		(1 << 2)
/** RTC_MISR_ALRBMF ALRBMF **/
#define RTC_MISR_ALRBMF		(1 << 1)
/** RTC_MISR_ALRAMF ALRAMF **/
#define RTC_MISR_ALRAMF		(1 << 0)

/**@}*/

/** @defgroup rtc_scr SCR status clear register
@{*/

/** RTC_SCR_CITSF CITSF **/
#define RTC_SCR_CITSF		(1 << 5)
/** RTC_SCR_CTSOVF CTSOVF **/
#define RTC_SCR_CTSOVF		(1 << 4)
/** RTC_SCR_CTSF CTSF **/
#define RTC_SCR_CTSF		(1 << 3)
/** RTC_SCR_CWUTF CWUTF **/
#define RTC_SCR_CWUTF		(1 << 2)
/** RTC_SCR_CALRBF CALRBF **/
#define RTC_SCR_CALRBF		(1 << 1)
/** RTC_SCR_CALRAF CALRAF **/
#define RTC_SCR_CALRAF		(1 << 0)

/**@}*/

/** @defgroup rtc_hwcfgr HWCFGR hardware configuration register
@{*/


#define RTC_HWCFGR_TRUST_ZONE_SHIFT		24
#define RTC_HWCFGR_TRUST_ZONE_MASK		0x0f
/** @defgroup rtc_hwcfgr_trust_zone TRUSTZONE TRUST_ZONE
@{*/
/**@}*/


#define RTC_HWCFGR_OPTIONREG_OUT_SHIFT		16
#define RTC_HWCFGR_OPTIONREG_OUT_MASK		0xff
/** @defgroup rtc_hwcfgr_optionreg_out OPTIONREGOUT OPTIONREG_OUT
@{*/
/**@}*/


#define RTC_HWCFGR_TIMESTAMP_SHIFT		12
#define RTC_HWCFGR_TIMESTAMP_MASK		0x0f
/** @defgroup rtc_hwcfgr_timestamp TIMESTAMP TIMESTAMP
@{*/
/**@}*/


#define RTC_HWCFGR_SMOOTH_CALIB_SHIFT		8
#define RTC_HWCFGR_SMOOTH_CALIB_MASK		0x0f
/** @defgroup rtc_hwcfgr_smooth_calib SMOOTHCALIB SMOOTH_CALIB
@{*/
/**@}*/


#define RTC_HWCFGR_WAKEUP_SHIFT		4
#define RTC_HWCFGR_WAKEUP_MASK		0x0f
/** @defgroup rtc_hwcfgr_wakeup WAKEUP WAKEUP
@{*/
/**@}*/


#define RTC_HWCFGR_ALARMB_SHIFT		0
#define RTC_HWCFGR_ALARMB_MASK		0x0f
/** @defgroup rtc_hwcfgr_alarmb ALARMB ALARMB
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_verr VERR EXTI IP Version register
@{*/


#define RTC_VERR_MAJREV_SHIFT		4
#define RTC_VERR_MAJREV_MASK		0x0f
/** @defgroup rtc_verr_majrev MAJREV Major Revision number
@{*/
/**@}*/


#define RTC_VERR_MINREV_SHIFT		0
#define RTC_VERR_MINREV_MASK		0x0f
/** @defgroup rtc_verr_minrev MINREV Minor Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_ipidr IPIDR EXTI Identification register
@{*/


#define RTC_IPIDR_IPID_SHIFT		0
#define RTC_IPIDR_IPID_MASK		0xffffffff
/** @defgroup rtc_ipidr_ipid IPID IP Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_sidr SIDR EXTI Size ID register
@{*/


#define RTC_SIDR_SID_SHIFT		0
#define RTC_SIDR_SID_MASK		0xffffffff
/** @defgroup rtc_sidr_sid SID Size Identification
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- RTC: Real-time clock ----------------------------------------- */

/** @defgroup rtc_registers Real-time clock Register
@{*/

/** RTC_TR time register **/
#define RTC_TR			MMIO32(RTC_BASE + 0x00)
/** RTC_DR date register **/
#define RTC_DR			MMIO32(RTC_BASE + 0x04)
/** RTC_CR control register **/
#define RTC_CR			MMIO32(RTC_BASE + 0x08)
/** RTC_ISR initialization and status register **/
#define RTC_ISR			MMIO32(RTC_BASE + 0x0c)
/** RTC_PRER prescaler register **/
#define RTC_PRER			MMIO32(RTC_BASE + 0x10)
/** RTC_WUTR wakeup timer register **/
#define RTC_WUTR			MMIO32(RTC_BASE + 0x14)
/** RTC_CALIBR calibration register **/
#define RTC_CALIBR			MMIO32(RTC_BASE + 0x18)
/** RTC_ALRMAR alarm A register **/
#define RTC_ALRMAR			MMIO32(RTC_BASE + 0x1c)
/** RTC_ALRMBR alarm B register **/
#define RTC_ALRMBR			MMIO32(RTC_BASE + 0x20)
/** RTC_WPR write protection register **/
#define RTC_WPR			MMIO32(RTC_BASE + 0x24)
/** RTC_SSR sub second register **/
#define RTC_SSR			MMIO32(RTC_BASE + 0x28)
/** RTC_SHIFTR shift control register **/
#define RTC_SHIFTR			MMIO32(RTC_BASE + 0x2c)
/** RTC_TSTR TSTR **/
#define RTC_TSTR			MMIO32(RTC_BASE + 0x30)
/** RTC_TSDR time stamp date register **/
#define RTC_TSDR			MMIO32(RTC_BASE + 0x34)
/** RTC_TSSSR timestamp sub second register **/
#define RTC_TSSSR			MMIO32(RTC_BASE + 0x38)
/** RTC_CALR calibration register **/
#define RTC_CALR			MMIO32(RTC_BASE + 0x3c)
/** RTC_TAFCR tamper and alternate function configuration register **/
#define RTC_TAFCR			MMIO32(RTC_BASE + 0x40)
/** RTC_ALRMASSR alarm A sub second register **/
#define RTC_ALRMASSR			MMIO32(RTC_BASE + 0x44)
/** RTC_ALRMBSSR alarm B sub second register **/
#define RTC_ALRMBSSR			MMIO32(RTC_BASE + 0x48)
/** RTC_BK0R BK0R **/
#define RTC_BK0R			MMIO32(RTC_BASE + 0x9c)

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

/** @defgroup rtc_cr CR control register
@{*/

/** RTC_CR_COE Calibration output enable **/
#define RTC_CR_COE		(1 << 23)

#define RTC_CR_OSEL_SHIFT		21
#define RTC_CR_OSEL_MASK		0x03
/** @defgroup rtc_cr_osel OSEL Output selection
@{*/
/**@}*/

/** RTC_CR_POL Output polarity **/
#define RTC_CR_POL		(1 << 20)
/** RTC_CR_COSEL Calibration output selection **/
#define RTC_CR_COSEL		(1 << 19)
/** RTC_CR_BKP Backup **/
#define RTC_CR_BKP		(1 << 18)
/** RTC_CR_SUB1H Subtract 1 hour **/
#define RTC_CR_SUB1H		(1 << 17)
/** RTC_CR_ADD1H Add 1 hour **/
#define RTC_CR_ADD1H		(1 << 16)
/** RTC_CR_TSIE Time-stamp interrupt enable **/
#define RTC_CR_TSIE		(1 << 15)
/** RTC_CR_WUTIE Wakeup timer interrupt enable **/
#define RTC_CR_WUTIE		(1 << 14)
/** RTC_CR_ALRBIE Alarm B interrupt enable **/
#define RTC_CR_ALRBIE		(1 << 13)
/** RTC_CR_ALRAIE Alarm A interrupt enable **/
#define RTC_CR_ALRAIE		(1 << 12)
/** RTC_CR_TSE Time stamp enable **/
#define RTC_CR_TSE		(1 << 11)
/** RTC_CR_WUTE Wakeup timer enable **/
#define RTC_CR_WUTE		(1 << 10)
/** RTC_CR_ALRBE Alarm B enable **/
#define RTC_CR_ALRBE		(1 << 9)
/** RTC_CR_ALRAE Alarm A enable **/
#define RTC_CR_ALRAE		(1 << 8)
/** RTC_CR_DCE Coarse digital calibration enable **/
#define RTC_CR_DCE		(1 << 7)
/** RTC_CR_FMT Hour format **/
#define RTC_CR_FMT		(1 << 6)
/** RTC_CR_BYPSHAD Bypass the shadow registers **/
#define RTC_CR_BYPSHAD		(1 << 5)
/** RTC_CR_REFCKON Reference clock detection enable **/
#define RTC_CR_REFCKON		(1 << 4)
/** RTC_CR_TSEDGE Time-stamp event active edge **/
#define RTC_CR_TSEDGE		(1 << 3)

#define RTC_CR_WCKSEL_SHIFT		0
#define RTC_CR_WCKSEL_MASK		0x07
/** @defgroup rtc_cr_wcksel WCKSEL WCKSEL
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_isr ISR initialization and status register
@{*/

/** RTC_ISR_RECALPF Recalibration pending Flag **/
#define RTC_ISR_RECALPF		(1 << 16)
/** RTC_ISR_TAMP3F TAMPER3 detection flag **/
#define RTC_ISR_TAMP3F		(1 << 15)
/** RTC_ISR_TAMP2F TAMPER2 detection flag **/
#define RTC_ISR_TAMP2F		(1 << 14)
/** RTC_ISR_TAMP1F Tamper detection flag **/
#define RTC_ISR_TAMP1F		(1 << 13)
/** RTC_ISR_TSOVF Timestamp overflow flag **/
#define RTC_ISR_TSOVF		(1 << 12)
/** RTC_ISR_TSF Timestamp flag **/
#define RTC_ISR_TSF		(1 << 11)
/** RTC_ISR_WUTF Wakeup timer flag **/
#define RTC_ISR_WUTF		(1 << 10)
/** RTC_ISR_ALRBF Alarm B flag **/
#define RTC_ISR_ALRBF		(1 << 9)
/** RTC_ISR_ALRAF Alarm A flag **/
#define RTC_ISR_ALRAF		(1 << 8)
/** RTC_ISR_INIT Initialization mode **/
#define RTC_ISR_INIT		(1 << 7)
/** RTC_ISR_INITF Initialization flag **/
#define RTC_ISR_INITF		(1 << 6)
/** RTC_ISR_RSF Registers synchronization flag **/
#define RTC_ISR_RSF		(1 << 5)
/** RTC_ISR_INITS Initialization status flag **/
#define RTC_ISR_INITS		(1 << 4)
/** RTC_ISR_SHPF Shift operation pending **/
#define RTC_ISR_SHPF		(1 << 3)
/** RTC_ISR_WUTWF Wakeup timer write flag **/
#define RTC_ISR_WUTWF		(1 << 2)
/** RTC_ISR_ALRBWF Alarm B write flag **/
#define RTC_ISR_ALRBWF		(1 << 1)
/** RTC_ISR_ALRAWF Alarm A write flag **/
#define RTC_ISR_ALRAWF		(1 << 0)

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

/** @defgroup rtc_calibr CALIBR calibration register
@{*/

/** RTC_CALIBR_DCS Digital calibration sign **/
#define RTC_CALIBR_DCS		(1 << 7)

#define RTC_CALIBR_DC_SHIFT		0
#define RTC_CALIBR_DC_MASK		0x1f
/** @defgroup rtc_calibr_dc DC Digital calibration
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
/** @defgroup rtc_alrmar_dt DT Date tens in BCD format.
@{*/
/**@}*/


#define RTC_ALRMAR_DU_SHIFT		24
#define RTC_ALRMAR_DU_MASK		0x0f
/** @defgroup rtc_alrmar_du DU Date units or day in BCD format.
@{*/
/**@}*/

/** RTC_ALRMAR_MSK3 Alarm A hours mask **/
#define RTC_ALRMAR_MSK3		(1 << 23)
/** RTC_ALRMAR_PM AM/PM notation **/
#define RTC_ALRMAR_PM		(1 << 22)

#define RTC_ALRMAR_HT_SHIFT		20
#define RTC_ALRMAR_HT_MASK		0x03
/** @defgroup rtc_alrmar_ht HT Hour tens in BCD format.
@{*/
/**@}*/


#define RTC_ALRMAR_HU_SHIFT		16
#define RTC_ALRMAR_HU_MASK		0x0f
/** @defgroup rtc_alrmar_hu HU Hour units in BCD format.
@{*/
/**@}*/

/** RTC_ALRMAR_MSK2 Alarm A minutes mask **/
#define RTC_ALRMAR_MSK2		(1 << 15)

#define RTC_ALRMAR_MNT_SHIFT		12
#define RTC_ALRMAR_MNT_MASK		0x07
/** @defgroup rtc_alrmar_mnt MNT Minute tens in BCD format.
@{*/
/**@}*/


#define RTC_ALRMAR_MNU_SHIFT		8
#define RTC_ALRMAR_MNU_MASK		0x0f
/** @defgroup rtc_alrmar_mnu MNU Minute units in BCD format.
@{*/
/**@}*/

/** RTC_ALRMAR_MSK1 Alarm A seconds mask **/
#define RTC_ALRMAR_MSK1		(1 << 7)

#define RTC_ALRMAR_ST_SHIFT		4
#define RTC_ALRMAR_ST_MASK		0x07
/** @defgroup rtc_alrmar_st ST Second tens in BCD format.
@{*/
/**@}*/


#define RTC_ALRMAR_SU_SHIFT		0
#define RTC_ALRMAR_SU_MASK		0x0f
/** @defgroup rtc_alrmar_su SU Second units in BCD format.
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

/** @defgroup rtc_wpr WPR write protection register
@{*/


#define RTC_WPR_KEY_SHIFT		0
#define RTC_WPR_KEY_MASK		0xff
/** @defgroup rtc_wpr_key KEY Write protection key
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

/** @defgroup rtc_shiftr SHIFTR shift control register
@{*/

/** RTC_SHIFTR_ADD1S ADD1S **/
#define RTC_SHIFTR_ADD1S		(1 << 31)

#define RTC_SHIFTR_SUBFS_SHIFT		0
#define RTC_SHIFTR_SUBFS_MASK		0x7fff
/** @defgroup rtc_shiftr_subfs SUBFS Subtract a fraction of a second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_tstr TSTR TSTR
@{*/

/** RTC_TSTR_PM AM/PM notation **/
#define RTC_TSTR_PM		(1 << 22)

#define RTC_TSTR_HT_SHIFT		20
#define RTC_TSTR_HT_MASK		0x03
/** @defgroup rtc_tstr_ht HT Hour tens in BCD format.
@{*/
/**@}*/


#define RTC_TSTR_HU_SHIFT		16
#define RTC_TSTR_HU_MASK		0x0f
/** @defgroup rtc_tstr_hu HU Hour units in BCD format.
@{*/
/**@}*/


#define RTC_TSTR_MNT_SHIFT		12
#define RTC_TSTR_MNT_MASK		0x07
/** @defgroup rtc_tstr_mnt MNT Minute tens in BCD format.
@{*/
/**@}*/


#define RTC_TSTR_MNU_SHIFT		8
#define RTC_TSTR_MNU_MASK		0x0f
/** @defgroup rtc_tstr_mnu MNU Minute units in BCD format.
@{*/
/**@}*/


#define RTC_TSTR_ST_SHIFT		4
#define RTC_TSTR_ST_MASK		0x07
/** @defgroup rtc_tstr_st ST Second tens in BCD format.
@{*/
/**@}*/


#define RTC_TSTR_SU_SHIFT		0
#define RTC_TSTR_SU_MASK		0x0f
/** @defgroup rtc_tstr_su SU Second units in BCD format.
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

/** RTC_TSSSR_CALP Use an 8-second calibration cycle period **/
#define RTC_TSSSR_CALP		(1 << 15)
/** RTC_TSSSR_CALW8 Use a 16-second calibration cycle period **/
#define RTC_TSSSR_CALW8		(1 << 14)
/** RTC_TSSSR_CALW16 CALW16 **/
#define RTC_TSSSR_CALW16		(1 << 13)

#define RTC_TSSSR_CALM_SHIFT		0
#define RTC_TSSSR_CALM_MASK		0x1ff
/** @defgroup rtc_tsssr_calm CALM Calibration minus
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_calr CALR calibration register
@{*/

/** RTC_CALR_ALARMOUTTYPE AFO_ALARM output type **/
#define RTC_CALR_ALARMOUTTYPE		(1 << 18)
/** RTC_CALR_TAMPPUDIS TAMPER pull-up disable **/
#define RTC_CALR_TAMPPUDIS		(1 << 15)

#define RTC_CALR_TAMPPRCH_SHIFT		13
#define RTC_CALR_TAMPPRCH_MASK		0x03
/** @defgroup rtc_calr_tampprch TAMPPRCH Tamper precharge duration
@{*/
/**@}*/


#define RTC_CALR_TAMPFLT_SHIFT		11
#define RTC_CALR_TAMPFLT_MASK		0x03
/** @defgroup rtc_calr_tampflt TAMPFLT Tamper filter count
@{*/
/**@}*/


#define RTC_CALR_TAMPFREQ_SHIFT		8
#define RTC_CALR_TAMPFREQ_MASK		0x07
/** @defgroup rtc_calr_tampfreq TAMPFREQ Tamper sampling frequency
@{*/
/**@}*/

/** RTC_CALR_TAMPTS Activate timestamp on tamper detection event **/
#define RTC_CALR_TAMPTS		(1 << 7)
/** RTC_CALR_TAMP3TRG TAMPER1 mapping **/
#define RTC_CALR_TAMP3TRG		(1 << 6)
/** RTC_CALR_TAMP3E TIMESTAMP mapping **/
#define RTC_CALR_TAMP3E		(1 << 5)
/** RTC_CALR_TAMP2TRG Active level for tamper 2 **/
#define RTC_CALR_TAMP2TRG		(1 << 4)
/** RTC_CALR_TAMP2E Tamper 2 detection enable **/
#define RTC_CALR_TAMP2E		(1 << 3)
/** RTC_CALR_TAMPIE Tamper interrupt enable **/
#define RTC_CALR_TAMPIE		(1 << 2)
/** RTC_CALR_TAMP1ETRG Active level for tamper 1 **/
#define RTC_CALR_TAMP1ETRG		(1 << 1)
/** RTC_CALR_TAMP1E Tamper 1 detection enable **/
#define RTC_CALR_TAMP1E		(1 << 0)

/**@}*/

/** @defgroup rtc_tafcr TAFCR tamper and alternate function configuration register
@{*/


#define RTC_TAFCR_MASKSS_SHIFT		24
#define RTC_TAFCR_MASKSS_MASK		0x0f
/** @defgroup rtc_tafcr_maskss MASKSS Mask the most-significant bits starting at this bit
@{*/
/**@}*/


#define RTC_TAFCR_SS_SHIFT		0
#define RTC_TAFCR_SS_MASK		0x7fff
/** @defgroup rtc_tafcr_ss SS Sub seconds value
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

/** @defgroup rtc_alrmbssr ALRMBSSR alarm B sub second register
@{*/


#define RTC_ALRMBSSR_BKP_SHIFT		0
#define RTC_ALRMBSSR_BKP_MASK		0xffffffff
/** @defgroup rtc_alrmbssr_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_bk0r BK0R BK0R
@{*/


/**@}*/

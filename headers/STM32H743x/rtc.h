#pragma once 

/* --- RTC: RTC ----------------------------------------------------- */

/** @defgroup rtc_registers RTC Register
@{*/

/** RTC_RTC_TR The RTC_TR is the calendar time shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_TR			MMIO32(RTC_BASE + 0x00)
/** RTC_RTC_DR The RTC_DR is the calendar date shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_DR			MMIO32(RTC_BASE + 0x04)
/** RTC_RTC_CR RTC control register **/
#define RTC_RTC_CR			MMIO32(RTC_BASE + 0x08)
/** RTC_RTC_ISR This register is write protected (except for RTC_ISR[13:8] bits). The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_ISR			MMIO32(RTC_BASE + 0x0c)
/** RTC_RTC_PRER This register must be written in initialization mode only. The initialization must be performed in two separate write accesses. Refer to Calendar initialization and configuration on page9.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_PRER			MMIO32(RTC_BASE + 0x10)
/** RTC_RTC_WUTR This register can be written only when WUTWF is set to 1 in RTC_ISR.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_WUTR			MMIO32(RTC_BASE + 0x14)
/** RTC_RTC_ALRMAR This register can be written only when ALRAWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_ALRMAR			MMIO32(RTC_BASE + 0x1c)
/** RTC_RTC_ALRMBR This register can be written only when ALRBWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_ALRMBR			MMIO32(RTC_BASE + 0x20)
/** RTC_RTC_WPR RTC write protection register **/
#define RTC_RTC_WPR			MMIO32(RTC_BASE + 0x24)
/** RTC_RTC_SSR RTC sub second register **/
#define RTC_RTC_SSR			MMIO32(RTC_BASE + 0x28)
/** RTC_RTC_SHIFTR This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_SHIFTR			MMIO32(RTC_BASE + 0x2c)
/** RTC_RTC_TSTR The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset. **/
#define RTC_RTC_TSTR			MMIO32(RTC_BASE + 0x30)
/** RTC_RTC_TSDR The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset. **/
#define RTC_RTC_TSDR			MMIO32(RTC_BASE + 0x34)
/** RTC_RTC_TSSSR The content of this register is valid only when RTC_ISR/TSF is set. It is cleared when the RTC_ISR/TSF bit is reset. **/
#define RTC_RTC_TSSSR			MMIO32(RTC_BASE + 0x38)
/** RTC_RTC_CALR This register is write protected. The write access procedure is described in RTC register write protection on page9. **/
#define RTC_RTC_CALR			MMIO32(RTC_BASE + 0x3c)
/** RTC_RTC_TAMPCR RTC tamper and alternate function configuration register **/
#define RTC_RTC_TAMPCR			MMIO32(RTC_BASE + 0x40)
/** RTC_RTC_ALRMASSR This register can be written only when ALRAE is reset in RTC_CR register, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9 **/
#define RTC_RTC_ALRMASSR			MMIO32(RTC_BASE + 0x44)
/** RTC_RTC_ALRMBSSR This register can be written only when ALRBE is reset in RTC_CR register, or in initialization mode.This register is write protected.The write access procedure is described in Section: RTC register write protection. **/
#define RTC_RTC_ALRMBSSR			MMIO32(RTC_BASE + 0x48)
/** RTC_RTC_OR RTC option register **/
#define RTC_RTC_OR			MMIO32(RTC_BASE + 0x4c)
/** RTC_RTC_BKP0R RTC backup registers **/
#define RTC_RTC_BKP0R			MMIO32(RTC_BASE + 0x50)
/** RTC_RTC_BKP1R RTC backup registers **/
#define RTC_RTC_BKP1R			MMIO32(RTC_BASE + 0x54)
/** RTC_RTC_BKP2R RTC backup registers **/
#define RTC_RTC_BKP2R			MMIO32(RTC_BASE + 0x58)
/** RTC_RTC_BKP3R RTC backup registers **/
#define RTC_RTC_BKP3R			MMIO32(RTC_BASE + 0x5c)
/** RTC_RTC_BKP4R RTC backup registers **/
#define RTC_RTC_BKP4R			MMIO32(RTC_BASE + 0x60)
/** RTC_RTC_BKP5R RTC backup registers **/
#define RTC_RTC_BKP5R			MMIO32(RTC_BASE + 0x64)
/** RTC_RTC_BKP6R RTC backup registers **/
#define RTC_RTC_BKP6R			MMIO32(RTC_BASE + 0x68)
/** RTC_RTC_BKP7R RTC backup registers **/
#define RTC_RTC_BKP7R			MMIO32(RTC_BASE + 0x6c)
/** RTC_RTC_BKP8R RTC backup registers **/
#define RTC_RTC_BKP8R			MMIO32(RTC_BASE + 0x70)
/** RTC_RTC_BKP9R RTC backup registers **/
#define RTC_RTC_BKP9R			MMIO32(RTC_BASE + 0x74)
/** RTC_RTC_BKP10R RTC backup registers **/
#define RTC_RTC_BKP10R			MMIO32(RTC_BASE + 0x78)
/** RTC_RTC_BKP11R RTC backup registers **/
#define RTC_RTC_BKP11R			MMIO32(RTC_BASE + 0x7c)
/** RTC_RTC_BKP12R RTC backup registers **/
#define RTC_RTC_BKP12R			MMIO32(RTC_BASE + 0x80)
/** RTC_RTC_BKP13R RTC backup registers **/
#define RTC_RTC_BKP13R			MMIO32(RTC_BASE + 0x84)
/** RTC_RTC_BKP14R RTC backup registers **/
#define RTC_RTC_BKP14R			MMIO32(RTC_BASE + 0x88)
/** RTC_RTC_BKP15R RTC backup registers **/
#define RTC_RTC_BKP15R			MMIO32(RTC_BASE + 0x8c)
/** RTC_RTC_BKP16R RTC backup registers **/
#define RTC_RTC_BKP16R			MMIO32(RTC_BASE + 0x90)
/** RTC_RTC_BKP17R RTC backup registers **/
#define RTC_RTC_BKP17R			MMIO32(RTC_BASE + 0x94)
/** RTC_RTC_BKP18R RTC backup registers **/
#define RTC_RTC_BKP18R			MMIO32(RTC_BASE + 0x98)
/** RTC_RTC_BKP19R RTC backup registers **/
#define RTC_RTC_BKP19R			MMIO32(RTC_BASE + 0x9c)
/** RTC_RTC_BKP20R RTC backup registers **/
#define RTC_RTC_BKP20R			MMIO32(RTC_BASE + 0xa0)
/** RTC_RTC_BKP21R RTC backup registers **/
#define RTC_RTC_BKP21R			MMIO32(RTC_BASE + 0xa4)
/** RTC_RTC_BKP22R RTC backup registers **/
#define RTC_RTC_BKP22R			MMIO32(RTC_BASE + 0xa8)
/** RTC_RTC_BKP23R RTC backup registers **/
#define RTC_RTC_BKP23R			MMIO32(RTC_BASE + 0xac)
/** RTC_RTC_BKP24R RTC backup registers **/
#define RTC_RTC_BKP24R			MMIO32(RTC_BASE + 0xb0)
/** RTC_RTC_BKP25R RTC backup registers **/
#define RTC_RTC_BKP25R			MMIO32(RTC_BASE + 0xb4)
/** RTC_RTC_BKP26R RTC backup registers **/
#define RTC_RTC_BKP26R			MMIO32(RTC_BASE + 0xb8)
/** RTC_RTC_BKP27R RTC backup registers **/
#define RTC_RTC_BKP27R			MMIO32(RTC_BASE + 0xbc)
/** RTC_RTC_BKP28R RTC backup registers **/
#define RTC_RTC_BKP28R			MMIO32(RTC_BASE + 0xc0)
/** RTC_RTC_BKP29R RTC backup registers **/
#define RTC_RTC_BKP29R			MMIO32(RTC_BASE + 0xc4)
/** RTC_RTC_BKP30R RTC backup registers **/
#define RTC_RTC_BKP30R			MMIO32(RTC_BASE + 0xc8)
/** RTC_RTC_BKP31R RTC backup registers **/
#define RTC_RTC_BKP31R			MMIO32(RTC_BASE + 0xcc)

/**@}*/


/** @defgroup rtc_rtc_tr RTCTR The RTC_TR is the calendar time shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_TR_PM AM/PM notation **/
#define RTC_RTC_TR_PM		(1 << 22)

#define RTC_RTC_TR_HT_SHIFT		20
#define RTC_RTC_TR_HT_MASK		0x03
/** @defgroup rtc_rtc_tr_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_TR_HU_SHIFT		16
#define RTC_RTC_TR_HU_MASK		0x0f
/** @defgroup rtc_rtc_tr_hu HU Hour units in BCD format
@{*/
/**@}*/


#define RTC_RTC_TR_MNT_SHIFT		12
#define RTC_RTC_TR_MNT_MASK		0x07
/** @defgroup rtc_rtc_tr_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_TR_MNU_SHIFT		8
#define RTC_RTC_TR_MNU_MASK		0x0f
/** @defgroup rtc_rtc_tr_mnu MNU Minute units in BCD format
@{*/
/**@}*/


#define RTC_RTC_TR_ST_SHIFT		4
#define RTC_RTC_TR_ST_MASK		0x07
/** @defgroup rtc_rtc_tr_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_TR_SU_SHIFT		0
#define RTC_RTC_TR_SU_MASK		0x0f
/** @defgroup rtc_rtc_tr_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_dr RTCDR The RTC_DR is the calendar date shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/


#define RTC_RTC_DR_YT_SHIFT		20
#define RTC_RTC_DR_YT_MASK		0x0f
/** @defgroup rtc_rtc_dr_yt YT Year tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_DR_YU_SHIFT		16
#define RTC_RTC_DR_YU_MASK		0x0f
/** @defgroup rtc_rtc_dr_yu YU Year units in BCD format
@{*/
/**@}*/


#define RTC_RTC_DR_WDU_SHIFT		13
#define RTC_RTC_DR_WDU_MASK		0x07
/** @defgroup rtc_rtc_dr_wdu WDU Week day units
@{*/
/**@}*/

/** RTC_RTC_DR_MT Month tens in BCD format **/
#define RTC_RTC_DR_MT		(1 << 12)

#define RTC_RTC_DR_MU_SHIFT		8
#define RTC_RTC_DR_MU_MASK		0x0f
/** @defgroup rtc_rtc_dr_mu MU Month units in BCD format
@{*/
/**@}*/


#define RTC_RTC_DR_DT_SHIFT		4
#define RTC_RTC_DR_DT_MASK		0x03
/** @defgroup rtc_rtc_dr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_DR_DU_SHIFT		0
#define RTC_RTC_DR_DU_MASK		0x0f
/** @defgroup rtc_rtc_dr_du DU Date units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_cr RTCCR RTC control register
@{*/

/** RTC_RTC_CR_ITSE timestamp on internal event enable **/
#define RTC_RTC_CR_ITSE		(1 << 24)
/** RTC_RTC_CR_COE Calibration output enable This bit enables the RTC_CALIB output **/
#define RTC_RTC_CR_COE		(1 << 23)

#define RTC_RTC_CR_OSEL_SHIFT		21
#define RTC_RTC_CR_OSEL_MASK		0x03
/** @defgroup rtc_rtc_cr_osel OSEL Output selection These bits are used to select the flag to be routed to RTC_ALARM output
@{*/
/**@}*/

/** RTC_RTC_CR_POL Output polarity This bit is used to configure the polarity of RTC_ALARM output **/
#define RTC_RTC_CR_POL		(1 << 20)
/** RTC_RTC_CR_COSEL Calibration output selection When COE=1, this bit selects which signal is output on RTC_CALIB. These frequencies are valid for RTCCLK at 32.768 kHz and prescalers at their default values (PREDIV_A=127 and PREDIV_S=255). Refer to Section24.3.15: Calibration clock output **/
#define RTC_RTC_CR_COSEL		(1 << 19)
/** RTC_RTC_CR_BKP Backup This bit can be written by the user to memorize whether the daylight saving time change has been performed or not. **/
#define RTC_RTC_CR_BKP		(1 << 18)
/** RTC_RTC_CR_SUB1H Subtract 1 hour (winter time change) When this bit is set outside initialization mode, 1 hour is subtracted to the calendar time if the current hour is not 0. This bit is always read as 0. Setting this bit has no effect when current hour is 0. **/
#define RTC_RTC_CR_SUB1H		(1 << 17)
/** RTC_RTC_CR_ADD1H Add 1 hour (summer time change) When this bit is set outside initialization mode, 1 hour is added to the calendar time. This bit is always read as 0. **/
#define RTC_RTC_CR_ADD1H		(1 << 16)
/** RTC_RTC_CR_TSIE Time-stamp interrupt enable **/
#define RTC_RTC_CR_TSIE		(1 << 15)
/** RTC_RTC_CR_WUTIE Wakeup timer interrupt enable **/
#define RTC_RTC_CR_WUTIE		(1 << 14)
/** RTC_RTC_CR_ALRBIE Alarm B interrupt enable **/
#define RTC_RTC_CR_ALRBIE		(1 << 13)
/** RTC_RTC_CR_ALRAIE Alarm A interrupt enable **/
#define RTC_RTC_CR_ALRAIE		(1 << 12)
/** RTC_RTC_CR_TSE timestamp enable **/
#define RTC_RTC_CR_TSE		(1 << 11)
/** RTC_RTC_CR_WUTE Wakeup timer enable **/
#define RTC_RTC_CR_WUTE		(1 << 10)
/** RTC_RTC_CR_ALRBE Alarm B enable **/
#define RTC_RTC_CR_ALRBE		(1 << 9)
/** RTC_RTC_CR_ALRAE Alarm A enable **/
#define RTC_RTC_CR_ALRAE		(1 << 8)
/** RTC_RTC_CR_FMT Hour format **/
#define RTC_RTC_CR_FMT		(1 << 6)
/** RTC_RTC_CR_BYPSHAD Bypass the shadow registers Note: If the frequency of the APB clock is less than seven times the frequency of RTCCLK, BYPSHAD must be set to 1. **/
#define RTC_RTC_CR_BYPSHAD		(1 << 5)
/** RTC_RTC_CR_REFCKON RTC_REFIN reference clock detection enable (50 or 60Hz) Note: PREDIV_S must be 0x00FF. **/
#define RTC_RTC_CR_REFCKON		(1 << 4)
/** RTC_RTC_CR_TSEDGE Time-stamp event active edge TSE must be reset when TSEDGE is changed to avoid unwanted TSF setting. **/
#define RTC_RTC_CR_TSEDGE		(1 << 3)

#define RTC_RTC_CR_WUCKSEL_SHIFT		0
#define RTC_RTC_CR_WUCKSEL_MASK		0x07
/** @defgroup rtc_rtc_cr_wucksel WUCKSEL Wakeup clock selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_isr RTCISR This register is write protected (except for RTC_ISR[13:8] bits). The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_ISR_ITSF Internal tTime-stamp flag **/
#define RTC_RTC_ISR_ITSF		(1 << 17)
/** RTC_RTC_ISR_RECALPF Recalibration pending Flag The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0. Refer to Re-calibration on-the-fly. **/
#define RTC_RTC_ISR_RECALPF		(1 << 16)
/** RTC_RTC_ISR_TAMP3F RTC_TAMP3 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP3 input. It is cleared by software writing 0 **/
#define RTC_RTC_ISR_TAMP3F		(1 << 15)
/** RTC_RTC_ISR_TAMP2F RTC_TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP2 input. It is cleared by software writing 0 **/
#define RTC_RTC_ISR_TAMP2F		(1 << 14)
/** RTC_RTC_ISR_TAMP1F RTC_TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP1 input. It is cleared by software writing 0 **/
#define RTC_RTC_ISR_TAMP1F		(1 << 13)
/** RTC_RTC_ISR_TSOVF Time-stamp overflow flag This flag is set by hardware when a time-stamp event occurs while TSF is already set. This flag is cleared by software by writing 0. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a time-stamp event occurs immediately before the TSF bit is cleared. **/
#define RTC_RTC_ISR_TSOVF		(1 << 12)
/** RTC_RTC_ISR_TSF Time-stamp flag This flag is set by hardware when a time-stamp event occurs. This flag is cleared by software by writing 0. **/
#define RTC_RTC_ISR_TSF		(1 << 11)
/** RTC_RTC_ISR_WUTF Wakeup timer flag This flag is set by hardware when the wakeup auto-reload counter reaches 0. This flag is cleared by software by writing 0. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again. **/
#define RTC_RTC_ISR_WUTF		(1 << 10)
/** RTC_RTC_ISR_ALRBF Alarm B flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm B register (RTC_ALRMBR). This flag is cleared by software by writing 0. **/
#define RTC_RTC_ISR_ALRBF		(1 << 9)
/** RTC_RTC_ISR_ALRAF Alarm A flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm A register (RTC_ALRMAR). This flag is cleared by software by writing 0. **/
#define RTC_RTC_ISR_ALRAF		(1 << 8)
/** RTC_RTC_ISR_INIT Initialization mode **/
#define RTC_RTC_ISR_INIT		(1 << 7)
/** RTC_RTC_ISR_INITF Initialization flag When this bit is set to 1, the RTC is in initialization state, and the time, date and prescaler registers can be updated. **/
#define RTC_RTC_ISR_INITF		(1 << 6)
/** RTC_RTC_ISR_RSF Registers synchronization flag This bit is set by hardware each time the calendar registers are copied into the shadow registers (RTC_SSRx, RTC_TRx and RTC_DRx). This bit is cleared by hardware in initialization mode, while a shift operation is pending (SHPF=1), or when in bypass shadow register mode (BYPSHAD=1). This bit can also be cleared by software. It is cleared either by software or by hardware in initialization mode. **/
#define RTC_RTC_ISR_RSF		(1 << 5)
/** RTC_RTC_ISR_INITS Initialization status flag This bit is set by hardware when the calendar year field is different from 0 (Backup domain reset state). **/
#define RTC_RTC_ISR_INITS		(1 << 4)
/** RTC_RTC_ISR_SHPF Shift operation pending This flag is set by hardware as soon as a shift operation is initiated by a write to the RTC_SHIFTR register. It is cleared by hardware when the corresponding shift operation has been executed. Writing to the SHPF bit has no effect. **/
#define RTC_RTC_ISR_SHPF		(1 << 3)
/** RTC_RTC_ISR_WUTWF Wakeup timer write flag This bit is set by hardware up to 2 RTCCLK cycles after the WUTE bit has been set to 0 in RTC_CR, and is cleared up to 2 RTCCLK cycles after the WUTE bit has been set to 1. The wakeup timer values can be changed when WUTE bit is cleared and WUTWF is set. **/
#define RTC_RTC_ISR_WUTWF		(1 << 2)
/** RTC_RTC_ISR_ALRBWF Alarm B write flag This bit is set by hardware when Alarm B values can be changed, after the ALRBE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. **/
#define RTC_RTC_ISR_ALRBWF		(1 << 1)
/** RTC_RTC_ISR_ALRAWF Alarm A write flag This bit is set by hardware when Alarm A values can be changed, after the ALRAE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. **/
#define RTC_RTC_ISR_ALRAWF		(1 << 0)

/**@}*/

/** @defgroup rtc_rtc_prer RTCPRER This register must be written in initialization mode only. The initialization must be performed in two separate write accesses. Refer to Calendar initialization and configuration on page9.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/


#define RTC_RTC_PRER_PREDIV_A_SHIFT		16
#define RTC_RTC_PRER_PREDIV_A_MASK		0x7f
/** @defgroup rtc_rtc_prer_prediv_a PREDIVA Asynchronous prescaler factor This is the asynchronous division factor: ck_apre frequency = RTCCLK frequency/(PREDIV_A+1)
@{*/
/**@}*/


#define RTC_RTC_PRER_PREDIV_S_SHIFT		0
#define RTC_RTC_PRER_PREDIV_S_MASK		0x7fff
/** @defgroup rtc_rtc_prer_prediv_s PREDIVS Synchronous prescaler factor This is the synchronous division factor: ck_spre frequency = ck_apre frequency/(PREDIV_S+1)
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_wutr RTCWUTR This register can be written only when WUTWF is set to 1 in RTC_ISR.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/


#define RTC_RTC_WUTR_WUT_SHIFT		0
#define RTC_RTC_WUTR_WUT_MASK		0xffff
/** @defgroup rtc_rtc_wutr_wut WUT Wakeup auto-reload value bits When the wakeup timer is enabled (WUTE set to 1), the WUTF flag is set every (WUT[15:0] + 1) ck_wut cycles. The ck_wut period is selected through WUCKSEL[2:0] bits of the RTC_CR register When WUCKSEL[2] = 1, the wakeup timer becomes 17-bits and WUCKSEL[1] effectively becomes WUT[16] the most-significant bit to be reloaded into the timer. The first assertion of WUTF occurs (WUT+1) ck_wut cycles after WUTE is set. Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] =011 (RTCCLK/2) is forbidden.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_alrmar RTCALRMAR This register can be written only when ALRAWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_ALRMAR_MSK4 Alarm A date mask **/
#define RTC_RTC_ALRMAR_MSK4		(1 << 31)
/** RTC_RTC_ALRMAR_WDSEL Week day selection **/
#define RTC_RTC_ALRMAR_WDSEL		(1 << 30)

#define RTC_RTC_ALRMAR_DT_SHIFT		28
#define RTC_RTC_ALRMAR_DT_MASK		0x03
/** @defgroup rtc_rtc_alrmar_dt DT Date tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_ALRMAR_DU_SHIFT		24
#define RTC_RTC_ALRMAR_DU_MASK		0x0f
/** @defgroup rtc_rtc_alrmar_du DU Date units or day in BCD format.
@{*/
/**@}*/

/** RTC_RTC_ALRMAR_MSK3 Alarm A hours mask **/
#define RTC_RTC_ALRMAR_MSK3		(1 << 23)
/** RTC_RTC_ALRMAR_PM AM/PM notation **/
#define RTC_RTC_ALRMAR_PM		(1 << 22)

#define RTC_RTC_ALRMAR_HT_SHIFT		20
#define RTC_RTC_ALRMAR_HT_MASK		0x03
/** @defgroup rtc_rtc_alrmar_ht HT Hour tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_ALRMAR_HU_SHIFT		16
#define RTC_RTC_ALRMAR_HU_MASK		0x0f
/** @defgroup rtc_rtc_alrmar_hu HU Hour units in BCD format.
@{*/
/**@}*/

/** RTC_RTC_ALRMAR_MSK2 Alarm A minutes mask **/
#define RTC_RTC_ALRMAR_MSK2		(1 << 15)

#define RTC_RTC_ALRMAR_MNT_SHIFT		12
#define RTC_RTC_ALRMAR_MNT_MASK		0x07
/** @defgroup rtc_rtc_alrmar_mnt MNT Minute tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_ALRMAR_MNU_SHIFT		8
#define RTC_RTC_ALRMAR_MNU_MASK		0x0f
/** @defgroup rtc_rtc_alrmar_mnu MNU Minute units in BCD format.
@{*/
/**@}*/

/** RTC_RTC_ALRMAR_MSK1 Alarm A seconds mask **/
#define RTC_RTC_ALRMAR_MSK1		(1 << 7)

#define RTC_RTC_ALRMAR_ST_SHIFT		4
#define RTC_RTC_ALRMAR_ST_MASK		0x07
/** @defgroup rtc_rtc_alrmar_st ST Second tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_ALRMAR_SU_SHIFT		0
#define RTC_RTC_ALRMAR_SU_MASK		0x0f
/** @defgroup rtc_rtc_alrmar_su SU Second units in BCD format.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_alrmbr RTCALRMBR This register can be written only when ALRBWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_ALRMBR_MSK4 Alarm B date mask **/
#define RTC_RTC_ALRMBR_MSK4		(1 << 31)
/** RTC_RTC_ALRMBR_WDSEL Week day selection **/
#define RTC_RTC_ALRMBR_WDSEL		(1 << 30)

#define RTC_RTC_ALRMBR_DT_SHIFT		28
#define RTC_RTC_ALRMBR_DT_MASK		0x03
/** @defgroup rtc_rtc_alrmbr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_ALRMBR_DU_SHIFT		24
#define RTC_RTC_ALRMBR_DU_MASK		0x0f
/** @defgroup rtc_rtc_alrmbr_du DU Date units or day in BCD format
@{*/
/**@}*/

/** RTC_RTC_ALRMBR_MSK3 Alarm B hours mask **/
#define RTC_RTC_ALRMBR_MSK3		(1 << 23)
/** RTC_RTC_ALRMBR_PM AM/PM notation **/
#define RTC_RTC_ALRMBR_PM		(1 << 22)

#define RTC_RTC_ALRMBR_HT_SHIFT		20
#define RTC_RTC_ALRMBR_HT_MASK		0x03
/** @defgroup rtc_rtc_alrmbr_ht HT Hour tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_ALRMBR_HU_SHIFT		16
#define RTC_RTC_ALRMBR_HU_MASK		0x0f
/** @defgroup rtc_rtc_alrmbr_hu HU Hour units in BCD format
@{*/
/**@}*/

/** RTC_RTC_ALRMBR_MSK2 Alarm B minutes mask **/
#define RTC_RTC_ALRMBR_MSK2		(1 << 15)

#define RTC_RTC_ALRMBR_MNT_SHIFT		12
#define RTC_RTC_ALRMBR_MNT_MASK		0x07
/** @defgroup rtc_rtc_alrmbr_mnt MNT Minute tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_ALRMBR_MNU_SHIFT		8
#define RTC_RTC_ALRMBR_MNU_MASK		0x0f
/** @defgroup rtc_rtc_alrmbr_mnu MNU Minute units in BCD format
@{*/
/**@}*/

/** RTC_RTC_ALRMBR_MSK1 Alarm B seconds mask **/
#define RTC_RTC_ALRMBR_MSK1		(1 << 7)

#define RTC_RTC_ALRMBR_ST_SHIFT		4
#define RTC_RTC_ALRMBR_ST_MASK		0x07
/** @defgroup rtc_rtc_alrmbr_st ST Second tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_ALRMBR_SU_SHIFT		0
#define RTC_RTC_ALRMBR_SU_MASK		0x0f
/** @defgroup rtc_rtc_alrmbr_su SU Second units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_wpr RTCWPR RTC write protection register
@{*/


#define RTC_RTC_WPR_KEY_SHIFT		0
#define RTC_RTC_WPR_KEY_MASK		0xff
/** @defgroup rtc_rtc_wpr_key KEY Write protection key This byte is written by software. Reading this byte always returns 0x00. Refer to RTC register write protection for a description of how to unlock RTC register write protection.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_ssr RTCSSR RTC sub second register
@{*/


#define RTC_RTC_SSR_SS_SHIFT		0
#define RTC_RTC_SSR_SS_MASK		0xffff
/** @defgroup rtc_rtc_ssr_ss SS Sub second value SS[15:0] is the value in the synchronous prescaler counter. The fraction of a second is given by the formula below: Second fraction = (PREDIV_S - SS) / (PREDIV_S + 1) Note: SS can be larger than PREDIV_S only after a shift operation. In that case, the correct time/date is one second less than as indicated by RTC_TR/RTC_DR.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_shiftr RTCSHIFTR This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_SHIFTR_ADD1S Add one second This bit is write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). This function is intended to be used with SUBFS (see description below) in order to effectively add a fraction of a second to the clock in an atomic operation. **/
#define RTC_RTC_SHIFTR_ADD1S		(1 << 31)

#define RTC_RTC_SHIFTR_SUBFS_SHIFT		0
#define RTC_RTC_SHIFTR_SUBFS_MASK		0x7fff
/** @defgroup rtc_rtc_shiftr_subfs SUBFS Subtract a fraction of a second These bits are write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). The value which is written to SUBFS is added to the synchronous prescaler counter. Since this counter counts down, this operation effectively subtracts from (delays) the clock by: Delay (seconds) = SUBFS / (PREDIV_S + 1) A fraction of a second can effectively be added to the clock (advancing the clock) when the ADD1S function is used in conjunction with SUBFS, effectively advancing the clock by: Advance (seconds) = (1 - (SUBFS / (PREDIV_S + 1))). Note: Writing to SUBFS causes RSF to be cleared. Software can then wait until RSF=1 to be sure that the shadow registers have been updated with the shifted time.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_tstr RTCTSTR The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset.
@{*/

/** RTC_RTC_TSTR_PM AM/PM notation **/
#define RTC_RTC_TSTR_PM		(1 << 22)

#define RTC_RTC_TSTR_HT_SHIFT		20
#define RTC_RTC_TSTR_HT_MASK		0x03
/** @defgroup rtc_rtc_tstr_ht HT Hour tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_TSTR_HU_SHIFT		16
#define RTC_RTC_TSTR_HU_MASK		0x0f
/** @defgroup rtc_rtc_tstr_hu HU Hour units in BCD format.
@{*/
/**@}*/


#define RTC_RTC_TSTR_MNT_SHIFT		12
#define RTC_RTC_TSTR_MNT_MASK		0x07
/** @defgroup rtc_rtc_tstr_mnt MNT Minute tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_TSTR_MNU_SHIFT		8
#define RTC_RTC_TSTR_MNU_MASK		0x0f
/** @defgroup rtc_rtc_tstr_mnu MNU Minute units in BCD format.
@{*/
/**@}*/


#define RTC_RTC_TSTR_ST_SHIFT		4
#define RTC_RTC_TSTR_ST_MASK		0x07
/** @defgroup rtc_rtc_tstr_st ST Second tens in BCD format.
@{*/
/**@}*/


#define RTC_RTC_TSTR_SU_SHIFT		0
#define RTC_RTC_TSTR_SU_MASK		0x0f
/** @defgroup rtc_rtc_tstr_su SU Second units in BCD format.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_tsdr RTCTSDR The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset.
@{*/


#define RTC_RTC_TSDR_WDU_SHIFT		13
#define RTC_RTC_TSDR_WDU_MASK		0x07
/** @defgroup rtc_rtc_tsdr_wdu WDU Week day units
@{*/
/**@}*/

/** RTC_RTC_TSDR_MT Month tens in BCD format **/
#define RTC_RTC_TSDR_MT		(1 << 12)

#define RTC_RTC_TSDR_MU_SHIFT		8
#define RTC_RTC_TSDR_MU_MASK		0x0f
/** @defgroup rtc_rtc_tsdr_mu MU Month units in BCD format
@{*/
/**@}*/


#define RTC_RTC_TSDR_DT_SHIFT		4
#define RTC_RTC_TSDR_DT_MASK		0x03
/** @defgroup rtc_rtc_tsdr_dt DT Date tens in BCD format
@{*/
/**@}*/


#define RTC_RTC_TSDR_DU_SHIFT		0
#define RTC_RTC_TSDR_DU_MASK		0x0f
/** @defgroup rtc_rtc_tsdr_du DU Date units in BCD format
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_tsssr RTCTSSSR The content of this register is valid only when RTC_ISR/TSF is set. It is cleared when the RTC_ISR/TSF bit is reset.
@{*/


#define RTC_RTC_TSSSR_SS_SHIFT		0
#define RTC_RTC_TSSSR_SS_MASK		0xffff
/** @defgroup rtc_rtc_tsssr_ss SS Sub second value SS[15:0] is the value of the synchronous prescaler counter when the timestamp event occurred.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_calr RTCCALR This register is write protected. The write access procedure is described in RTC register write protection on page9.
@{*/

/** RTC_RTC_CALR_CALP Increase frequency of RTC by 488.5 ppm This feature is intended to be used in conjunction with CALM, which lowers the frequency of the calendar with a fine resolution. if the input frequency is 32768 Hz, the number of RTCCLK pulses added during a 32-second window is calculated as follows: (512 * CALP) - CALM. Refer to Section24.3.12: RTC smooth digital calibration. **/
#define RTC_RTC_CALR_CALP		(1 << 15)
/** RTC_RTC_CALR_CALW8 Use an 8-second calibration cycle period When CALW8 is set to 1, the 8-second calibration cycle period is selected. Note: CALM[1:0] are stuck at 00; when CALW8= 1. Refer to Section24.3.12: RTC smooth digital calibration. **/
#define RTC_RTC_CALR_CALW8		(1 << 14)
/** RTC_RTC_CALR_CALW16 Use a 16-second calibration cycle period When CALW16 is set to 1, the 16-second calibration cycle period is selected.This bit must not be set to 1 if CALW8=1. Note: CALM[0] is stuck at 0 when CALW16= 1. Refer to Section24.3.12: RTC smooth digital calibration. **/
#define RTC_RTC_CALR_CALW16		(1 << 13)

#define RTC_RTC_CALR_CALM_SHIFT		0
#define RTC_RTC_CALR_CALM_MASK		0x1ff
/** @defgroup rtc_rtc_calr_calm CALM Calibration minus The frequency of the calendar is reduced by masking CALM out of 220 RTCCLK pulses (32 seconds if the input frequency is 32768 Hz). This decreases the frequency of the calendar with a resolution of 0.9537 ppm. To increase the frequency of the calendar, this feature should be used in conjunction with CALP. See Section24.3.12: RTC smooth digital calibration on page13.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_tampcr RTCTAMPCR RTC tamper and alternate function configuration register
@{*/

/** RTC_RTC_TAMPCR_TAMP3MF Tamper 3 mask flag **/
#define RTC_RTC_TAMPCR_TAMP3MF		(1 << 24)
/** RTC_RTC_TAMPCR_TAMP3NOERASE Tamper 3 no erase **/
#define RTC_RTC_TAMPCR_TAMP3NOERASE		(1 << 23)
/** RTC_RTC_TAMPCR_TAMP3IE Tamper 3 interrupt enable **/
#define RTC_RTC_TAMPCR_TAMP3IE		(1 << 22)
/** RTC_RTC_TAMPCR_TAMP2MF Tamper 2 mask flag **/
#define RTC_RTC_TAMPCR_TAMP2MF		(1 << 21)
/** RTC_RTC_TAMPCR_TAMP2NOERASE Tamper 2 no erase **/
#define RTC_RTC_TAMPCR_TAMP2NOERASE		(1 << 20)
/** RTC_RTC_TAMPCR_TAMP2IE Tamper 2 interrupt enable **/
#define RTC_RTC_TAMPCR_TAMP2IE		(1 << 19)
/** RTC_RTC_TAMPCR_TAMP1MF Tamper 1 mask flag **/
#define RTC_RTC_TAMPCR_TAMP1MF		(1 << 18)
/** RTC_RTC_TAMPCR_TAMP1NOERASE Tamper 1 no erase **/
#define RTC_RTC_TAMPCR_TAMP1NOERASE		(1 << 17)
/** RTC_RTC_TAMPCR_TAMP1IE Tamper 1 interrupt enable **/
#define RTC_RTC_TAMPCR_TAMP1IE		(1 << 16)
/** RTC_RTC_TAMPCR_TAMPPUDIS RTC_TAMPx pull-up disable This bit determines if each of the RTC_TAMPx pins are pre-charged before each sample. **/
#define RTC_RTC_TAMPCR_TAMPPUDIS		(1 << 15)

#define RTC_RTC_TAMPCR_TAMPPRCH_SHIFT		13
#define RTC_RTC_TAMPCR_TAMPPRCH_MASK		0x03
/** @defgroup rtc_rtc_tampcr_tampprch TAMPPRCH RTC_TAMPx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the RTC_TAMPx inputs.
@{*/
/**@}*/


#define RTC_RTC_TAMPCR_TAMPFLT_SHIFT		11
#define RTC_RTC_TAMPCR_TAMPFLT_MASK		0x03
/** @defgroup rtc_rtc_tampcr_tampflt TAMPFLT RTC_TAMPx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a Tamper event. TAMPFLT is valid for each of the RTC_TAMPx inputs.
@{*/
/**@}*/


#define RTC_RTC_TAMPCR_TAMPFREQ_SHIFT		8
#define RTC_RTC_TAMPCR_TAMPFREQ_MASK		0x07
/** @defgroup rtc_rtc_tampcr_tampfreq TAMPFREQ Tamper sampling frequency Determines the frequency at which each of the RTC_TAMPx inputs are sampled.
@{*/
/**@}*/

/** RTC_RTC_TAMPCR_TAMPTS Activate timestamp on tamper detection event TAMPTS is valid even if TSE=0 in the RTC_CR register. **/
#define RTC_RTC_TAMPCR_TAMPTS		(1 << 7)
/** RTC_RTC_TAMPCR_TAMP3TRG Active level for RTC_TAMP3 input if TAMPFLT != 00: if TAMPFLT = 00: **/
#define RTC_RTC_TAMPCR_TAMP3TRG		(1 << 6)
/** RTC_RTC_TAMPCR_TAMP3E RTC_TAMP3 detection enable **/
#define RTC_RTC_TAMPCR_TAMP3E		(1 << 5)
/** RTC_RTC_TAMPCR_TAMP2TRG Active level for RTC_TAMP2 input if TAMPFLT != 00: if TAMPFLT = 00: **/
#define RTC_RTC_TAMPCR_TAMP2TRG		(1 << 4)
/** RTC_RTC_TAMPCR_TAMP2E RTC_TAMP2 input detection enable **/
#define RTC_RTC_TAMPCR_TAMP2E		(1 << 3)
/** RTC_RTC_TAMPCR_TAMPIE Tamper interrupt enable **/
#define RTC_RTC_TAMPCR_TAMPIE		(1 << 2)
/** RTC_RTC_TAMPCR_TAMP1TRG Active level for RTC_TAMP1 input If TAMPFLT != 00 if TAMPFLT = 00: **/
#define RTC_RTC_TAMPCR_TAMP1TRG		(1 << 1)
/** RTC_RTC_TAMPCR_TAMP1E RTC_TAMP1 input detection enable **/
#define RTC_RTC_TAMPCR_TAMP1E		(1 << 0)

/**@}*/

/** @defgroup rtc_rtc_alrmassr RTCALRMASSR This register can be written only when ALRAE is reset in RTC_CR register, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9
@{*/


#define RTC_RTC_ALRMASSR_MASKSS_SHIFT		24
#define RTC_RTC_ALRMASSR_MASKSS_MASK		0x0f
/** @defgroup rtc_rtc_alrmassr_maskss MASKSS Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.
@{*/
/**@}*/


#define RTC_RTC_ALRMASSR_SS_SHIFT		0
#define RTC_RTC_ALRMASSR_SS_MASK		0x7fff
/** @defgroup rtc_rtc_alrmassr_ss SS Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if Alarm A is to be activated. Only bits 0 up MASKSS-1 are compared.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_alrmbssr RTCALRMBSSR This register can be written only when ALRBE is reset in RTC_CR register, or in initialization mode.This register is write protected.The write access procedure is described in Section: RTC register write protection.
@{*/


#define RTC_RTC_ALRMBSSR_MASKSS_SHIFT		24
#define RTC_RTC_ALRMBSSR_MASKSS_MASK		0x0f
/** @defgroup rtc_rtc_alrmbssr_maskss MASKSS Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.
@{*/
/**@}*/


#define RTC_RTC_ALRMBSSR_SS_SHIFT		0
#define RTC_RTC_ALRMBSSR_SS_MASK		0x7fff
/** @defgroup rtc_rtc_alrmbssr_ss SS Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if Alarm B is to be activated. Only bits 0 up to MASKSS-1 are compared.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_or RTCOR RTC option register
@{*/

/** RTC_RTC_OR_RTC_OUT_RMP RTC_OUT remap **/
#define RTC_RTC_OR_RTC_OUT_RMP		(1 << 1)
/** RTC_RTC_OR_RTC_ALARM_TYPE RTC_ALARM output type on PC13 **/
#define RTC_RTC_OR_RTC_ALARM_TYPE		(1 << 0)

/**@}*/

/** @defgroup rtc_rtc_bkp0r RTCBKP0R RTC backup registers
@{*/


#define RTC_RTC_BKP0R_BKP_SHIFT		0
#define RTC_RTC_BKP0R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp0r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp1r RTCBKP1R RTC backup registers
@{*/


#define RTC_RTC_BKP1R_BKP_SHIFT		0
#define RTC_RTC_BKP1R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp1r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp2r RTCBKP2R RTC backup registers
@{*/


#define RTC_RTC_BKP2R_BKP_SHIFT		0
#define RTC_RTC_BKP2R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp2r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp3r RTCBKP3R RTC backup registers
@{*/


#define RTC_RTC_BKP3R_BKP_SHIFT		0
#define RTC_RTC_BKP3R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp3r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp4r RTCBKP4R RTC backup registers
@{*/


#define RTC_RTC_BKP4R_BKP_SHIFT		0
#define RTC_RTC_BKP4R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp4r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp5r RTCBKP5R RTC backup registers
@{*/


#define RTC_RTC_BKP5R_BKP_SHIFT		0
#define RTC_RTC_BKP5R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp5r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp6r RTCBKP6R RTC backup registers
@{*/


#define RTC_RTC_BKP6R_BKP_SHIFT		0
#define RTC_RTC_BKP6R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp6r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp7r RTCBKP7R RTC backup registers
@{*/


#define RTC_RTC_BKP7R_BKP_SHIFT		0
#define RTC_RTC_BKP7R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp7r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp8r RTCBKP8R RTC backup registers
@{*/


#define RTC_RTC_BKP8R_BKP_SHIFT		0
#define RTC_RTC_BKP8R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp8r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp9r RTCBKP9R RTC backup registers
@{*/


#define RTC_RTC_BKP9R_BKP_SHIFT		0
#define RTC_RTC_BKP9R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp9r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp10r RTCBKP10R RTC backup registers
@{*/


#define RTC_RTC_BKP10R_BKP_SHIFT		0
#define RTC_RTC_BKP10R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp10r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp11r RTCBKP11R RTC backup registers
@{*/


#define RTC_RTC_BKP11R_BKP_SHIFT		0
#define RTC_RTC_BKP11R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp11r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp12r RTCBKP12R RTC backup registers
@{*/


#define RTC_RTC_BKP12R_BKP_SHIFT		0
#define RTC_RTC_BKP12R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp12r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp13r RTCBKP13R RTC backup registers
@{*/


#define RTC_RTC_BKP13R_BKP_SHIFT		0
#define RTC_RTC_BKP13R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp13r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp14r RTCBKP14R RTC backup registers
@{*/


#define RTC_RTC_BKP14R_BKP_SHIFT		0
#define RTC_RTC_BKP14R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp14r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp15r RTCBKP15R RTC backup registers
@{*/


#define RTC_RTC_BKP15R_BKP_SHIFT		0
#define RTC_RTC_BKP15R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp15r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp16r RTCBKP16R RTC backup registers
@{*/


#define RTC_RTC_BKP16R_BKP_SHIFT		0
#define RTC_RTC_BKP16R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp16r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp17r RTCBKP17R RTC backup registers
@{*/


#define RTC_RTC_BKP17R_BKP_SHIFT		0
#define RTC_RTC_BKP17R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp17r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp18r RTCBKP18R RTC backup registers
@{*/


#define RTC_RTC_BKP18R_BKP_SHIFT		0
#define RTC_RTC_BKP18R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp18r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp19r RTCBKP19R RTC backup registers
@{*/


#define RTC_RTC_BKP19R_BKP_SHIFT		0
#define RTC_RTC_BKP19R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp19r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp20r RTCBKP20R RTC backup registers
@{*/


#define RTC_RTC_BKP20R_BKP_SHIFT		0
#define RTC_RTC_BKP20R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp20r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp21r RTCBKP21R RTC backup registers
@{*/


#define RTC_RTC_BKP21R_BKP_SHIFT		0
#define RTC_RTC_BKP21R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp21r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp22r RTCBKP22R RTC backup registers
@{*/


#define RTC_RTC_BKP22R_BKP_SHIFT		0
#define RTC_RTC_BKP22R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp22r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp23r RTCBKP23R RTC backup registers
@{*/


#define RTC_RTC_BKP23R_BKP_SHIFT		0
#define RTC_RTC_BKP23R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp23r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp24r RTCBKP24R RTC backup registers
@{*/


#define RTC_RTC_BKP24R_BKP_SHIFT		0
#define RTC_RTC_BKP24R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp24r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp25r RTCBKP25R RTC backup registers
@{*/


#define RTC_RTC_BKP25R_BKP_SHIFT		0
#define RTC_RTC_BKP25R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp25r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp26r RTCBKP26R RTC backup registers
@{*/


#define RTC_RTC_BKP26R_BKP_SHIFT		0
#define RTC_RTC_BKP26R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp26r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp27r RTCBKP27R RTC backup registers
@{*/


#define RTC_RTC_BKP27R_BKP_SHIFT		0
#define RTC_RTC_BKP27R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp27r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp28r RTCBKP28R RTC backup registers
@{*/


#define RTC_RTC_BKP28R_BKP_SHIFT		0
#define RTC_RTC_BKP28R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp28r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp29r RTCBKP29R RTC backup registers
@{*/


#define RTC_RTC_BKP29R_BKP_SHIFT		0
#define RTC_RTC_BKP29R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp29r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp30r RTCBKP30R RTC backup registers
@{*/


#define RTC_RTC_BKP30R_BKP_SHIFT		0
#define RTC_RTC_BKP30R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp30r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_rtc_bkp31r RTCBKP31R RTC backup registers
@{*/


#define RTC_RTC_BKP31R_BKP_SHIFT		0
#define RTC_RTC_BKP31R_BKP_MASK		0xffffffff
/** @defgroup rtc_rtc_bkp31r_bkp BKP The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. This register is reset on a tamper detection event, as long as TAMPxF=1. or when the Flash readout protection is disabled.
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- RTC: Real-time Clock ----------------------------------------- */

/** @defgroup rtc_registers Real-time Clock Register
@{*/

/** RTC_CR Control Register **/
#define RTC_CR			MMIO32(RTC_BASE + 0x00)
/** RTC_MR Mode Register **/
#define RTC_MR			MMIO32(RTC_BASE + 0x04)
/** RTC_TIMR Time Register **/
#define RTC_TIMR			MMIO32(RTC_BASE + 0x08)
/** RTC_CALR Calendar Register **/
#define RTC_CALR			MMIO32(RTC_BASE + 0x0c)
/** RTC_TIMALR Time Alarm Register **/
#define RTC_TIMALR			MMIO32(RTC_BASE + 0x10)
/** RTC_CALALR Calendar Alarm Register **/
#define RTC_CALALR			MMIO32(RTC_BASE + 0x14)
/** RTC_SR Status Register **/
#define RTC_SR			MMIO32(RTC_BASE + 0x18)
/** RTC_SCCR Status Clear Command Register **/
#define RTC_SCCR			MMIO32(RTC_BASE + 0x1c)
/** RTC_IER Interrupt Enable Register **/
#define RTC_IER			MMIO32(RTC_BASE + 0x20)
/** RTC_IDR Interrupt Disable Register **/
#define RTC_IDR			MMIO32(RTC_BASE + 0x24)
/** RTC_IMR Interrupt Mask Register **/
#define RTC_IMR			MMIO32(RTC_BASE + 0x28)
/** RTC_VER Valid Entry Register **/
#define RTC_VER			MMIO32(RTC_BASE + 0x2c)

/**@}*/


/** @defgroup rtc_cr CR Control Register
@{*/


#define RTC_CR_CALEVSEL_SHIFT		16
#define RTC_CR_CALEVSEL_MASK		0x03
/** @defgroup rtc_cr_calevsel CALEVSEL Calendar Event Selection
@{*/
/**@}*/


#define RTC_CR_TIMEVSEL_SHIFT		8
#define RTC_CR_TIMEVSEL_MASK		0x03
/** @defgroup rtc_cr_timevsel TIMEVSEL Time Event Selection
@{*/
/**@}*/

/** RTC_CR_UPDCAL Update Request Calendar Register **/
#define RTC_CR_UPDCAL		(1 << 1)
/** RTC_CR_UPDTIM Update Request Time Register **/
#define RTC_CR_UPDTIM		(1 << 0)

/**@}*/

/** @defgroup rtc_mr MR Mode Register
@{*/


#define RTC_MR_TPERIOD_SHIFT		28
#define RTC_MR_TPERIOD_MASK		0x03
/** @defgroup rtc_mr_tperiod TPERIOD Period of the Output Pulse
@{*/
/**@}*/


#define RTC_MR_THIGH_SHIFT		24
#define RTC_MR_THIGH_MASK		0x07
/** @defgroup rtc_mr_thigh THIGH High Duration of the Output Pulse
@{*/
/**@}*/


#define RTC_MR_OUT1_SHIFT		20
#define RTC_MR_OUT1_MASK		0x07
/** @defgroup rtc_mr_out1 OUT1 RTCOUT1 Output Source Selection
@{*/
/**@}*/


#define RTC_MR_OUT0_SHIFT		16
#define RTC_MR_OUT0_MASK		0x07
/** @defgroup rtc_mr_out0 OUT0 RTCOUT0 OutputSource Selection
@{*/
/**@}*/

/** RTC_MR_HIGHPPM HIGH PPM Correction **/
#define RTC_MR_HIGHPPM		(1 << 15)

#define RTC_MR_CORRECTION_SHIFT		8
#define RTC_MR_CORRECTION_MASK		0x7f
/** @defgroup rtc_mr_correction CORRECTION Slow Clock Correction
@{*/
/**@}*/

/** RTC_MR_NEGPPM NEGative PPM Correction **/
#define RTC_MR_NEGPPM		(1 << 4)
/** RTC_MR_PERSIAN PERSIAN Calendar **/
#define RTC_MR_PERSIAN		(1 << 1)
/** RTC_MR_HRMOD 12-/24-hour Mode **/
#define RTC_MR_HRMOD		(1 << 0)

/**@}*/

/** @defgroup rtc_timr TIMR Time Register
@{*/

/** RTC_TIMR_AMPM Ante Meridiem Post Meridiem Indicator **/
#define RTC_TIMR_AMPM		(1 << 22)

#define RTC_TIMR_HOUR_SHIFT		16
#define RTC_TIMR_HOUR_MASK		0x3f
/** @defgroup rtc_timr_hour HOUR Current Hour
@{*/
/**@}*/


#define RTC_TIMR_MIN_SHIFT		8
#define RTC_TIMR_MIN_MASK		0x7f
/** @defgroup rtc_timr_min MIN Current Minute
@{*/
/**@}*/


#define RTC_TIMR_SEC_SHIFT		0
#define RTC_TIMR_SEC_MASK		0x7f
/** @defgroup rtc_timr_sec SEC Current Second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_calr CALR Calendar Register
@{*/


#define RTC_CALR_DATE_SHIFT		24
#define RTC_CALR_DATE_MASK		0x3f
/** @defgroup rtc_calr_date DATE Current Day in Current Month
@{*/
/**@}*/


#define RTC_CALR_DAY_SHIFT		21
#define RTC_CALR_DAY_MASK		0x07
/** @defgroup rtc_calr_day DAY Current Day in Current Week
@{*/
/**@}*/


#define RTC_CALR_MONTH_SHIFT		16
#define RTC_CALR_MONTH_MASK		0x1f
/** @defgroup rtc_calr_month MONTH Current Month
@{*/
/**@}*/


#define RTC_CALR_YEAR_SHIFT		8
#define RTC_CALR_YEAR_MASK		0xff
/** @defgroup rtc_calr_year YEAR Current Year
@{*/
/**@}*/


#define RTC_CALR_CENT_SHIFT		0
#define RTC_CALR_CENT_MASK		0x7f
/** @defgroup rtc_calr_cent CENT Current Century
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_timalr TIMALR Time Alarm Register
@{*/

/** RTC_TIMALR_HOUREN Hour Alarm Enable **/
#define RTC_TIMALR_HOUREN		(1 << 23)
/** RTC_TIMALR_AMPM AM/PM Indicator **/
#define RTC_TIMALR_AMPM		(1 << 22)

#define RTC_TIMALR_HOUR_SHIFT		16
#define RTC_TIMALR_HOUR_MASK		0x3f
/** @defgroup rtc_timalr_hour HOUR Hour Alarm
@{*/
/**@}*/

/** RTC_TIMALR_MINEN Minute Alarm Enable **/
#define RTC_TIMALR_MINEN		(1 << 15)

#define RTC_TIMALR_MIN_SHIFT		8
#define RTC_TIMALR_MIN_MASK		0x7f
/** @defgroup rtc_timalr_min MIN Minute Alarm
@{*/
/**@}*/

/** RTC_TIMALR_SECEN Second Alarm Enable **/
#define RTC_TIMALR_SECEN		(1 << 7)

#define RTC_TIMALR_SEC_SHIFT		0
#define RTC_TIMALR_SEC_MASK		0x7f
/** @defgroup rtc_timalr_sec SEC Second Alarm
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_calalr CALALR Calendar Alarm Register
@{*/

/** RTC_CALALR_DATEEN Date Alarm Enable **/
#define RTC_CALALR_DATEEN		(1 << 31)

#define RTC_CALALR_DATE_SHIFT		24
#define RTC_CALALR_DATE_MASK		0x3f
/** @defgroup rtc_calalr_date DATE Date Alarm
@{*/
/**@}*/

/** RTC_CALALR_MTHEN Month Alarm Enable **/
#define RTC_CALALR_MTHEN		(1 << 23)

#define RTC_CALALR_MONTH_SHIFT		16
#define RTC_CALALR_MONTH_MASK		0x1f
/** @defgroup rtc_calalr_month MONTH Month Alarm
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_sr SR Status Register
@{*/

/** RTC_SR_TDERR Time and/or Date Free Running Error **/
#define RTC_SR_TDERR		(1 << 5)
/** RTC_SR_CALEV Calendar Event **/
#define RTC_SR_CALEV		(1 << 4)
/** RTC_SR_TIMEV Time Event **/
#define RTC_SR_TIMEV		(1 << 3)
/** RTC_SR_SEC Second Event **/
#define RTC_SR_SEC		(1 << 2)
/** RTC_SR_ALARM Alarm Flag **/
#define RTC_SR_ALARM		(1 << 1)
/** RTC_SR_ACKUPD Acknowledge for Update **/
#define RTC_SR_ACKUPD		(1 << 0)

/**@}*/

/** @defgroup rtc_sccr SCCR Status Clear Command Register
@{*/

/** RTC_SCCR_TDERRCLR Time and/or Date Free Running Error Clear **/
#define RTC_SCCR_TDERRCLR		(1 << 5)
/** RTC_SCCR_CALCLR Calendar Clear **/
#define RTC_SCCR_CALCLR		(1 << 4)
/** RTC_SCCR_TIMCLR Time Clear **/
#define RTC_SCCR_TIMCLR		(1 << 3)
/** RTC_SCCR_SECCLR Second Clear **/
#define RTC_SCCR_SECCLR		(1 << 2)
/** RTC_SCCR_ALRCLR Alarm Clear **/
#define RTC_SCCR_ALRCLR		(1 << 1)
/** RTC_SCCR_ACKCLR Acknowledge Clear **/
#define RTC_SCCR_ACKCLR		(1 << 0)

/**@}*/

/** @defgroup rtc_ier IER Interrupt Enable Register
@{*/

/** RTC_IER_TDERREN Time and/or Date Error Interrupt Enable **/
#define RTC_IER_TDERREN		(1 << 5)
/** RTC_IER_CALEN Calendar Event Interrupt Enable **/
#define RTC_IER_CALEN		(1 << 4)
/** RTC_IER_TIMEN Time Event Interrupt Enable **/
#define RTC_IER_TIMEN		(1 << 3)
/** RTC_IER_SECEN Second Event Interrupt Enable **/
#define RTC_IER_SECEN		(1 << 2)
/** RTC_IER_ALREN Alarm Interrupt Enable **/
#define RTC_IER_ALREN		(1 << 1)
/** RTC_IER_ACKEN Acknowledge Update Interrupt Enable **/
#define RTC_IER_ACKEN		(1 << 0)

/**@}*/

/** @defgroup rtc_idr IDR Interrupt Disable Register
@{*/

/** RTC_IDR_TDERRDIS Time and/or Date Error Interrupt Disable **/
#define RTC_IDR_TDERRDIS		(1 << 5)
/** RTC_IDR_CALDIS Calendar Event Interrupt Disable **/
#define RTC_IDR_CALDIS		(1 << 4)
/** RTC_IDR_TIMDIS Time Event Interrupt Disable **/
#define RTC_IDR_TIMDIS		(1 << 3)
/** RTC_IDR_SECDIS Second Event Interrupt Disable **/
#define RTC_IDR_SECDIS		(1 << 2)
/** RTC_IDR_ALRDIS Alarm Interrupt Disable **/
#define RTC_IDR_ALRDIS		(1 << 1)
/** RTC_IDR_ACKDIS Acknowledge Update Interrupt Disable **/
#define RTC_IDR_ACKDIS		(1 << 0)

/**@}*/

/** @defgroup rtc_imr IMR Interrupt Mask Register
@{*/

/** RTC_IMR_TDERR Time and/or Date Error Mask **/
#define RTC_IMR_TDERR		(1 << 5)
/** RTC_IMR_CAL Calendar Event Interrupt Mask **/
#define RTC_IMR_CAL		(1 << 4)
/** RTC_IMR_TIM Time Event Interrupt Mask **/
#define RTC_IMR_TIM		(1 << 3)
/** RTC_IMR_SEC Second Event Interrupt Mask **/
#define RTC_IMR_SEC		(1 << 2)
/** RTC_IMR_ALR Alarm Interrupt Mask **/
#define RTC_IMR_ALR		(1 << 1)
/** RTC_IMR_ACK Acknowledge Update Interrupt Mask **/
#define RTC_IMR_ACK		(1 << 0)

/**@}*/

/** @defgroup rtc_ver VER Valid Entry Register
@{*/

/** RTC_VER_NVCALALR Non-valid Calendar Alarm **/
#define RTC_VER_NVCALALR		(1 << 3)
/** RTC_VER_NVTIMALR Non-valid Time Alarm **/
#define RTC_VER_NVTIMALR		(1 << 2)
/** RTC_VER_NVCAL Non-valid Calendar **/
#define RTC_VER_NVCAL		(1 << 1)
/** RTC_VER_NVTIM Non-valid Time **/
#define RTC_VER_NVTIM		(1 << 0)

/**@}*/

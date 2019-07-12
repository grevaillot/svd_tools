#pragma once 

/* --- RTC: Real-Time Counter --------------------------------------- */

/** @defgroup rtc_registers Real-Time Counter Register
@{*/

/** RTC_MODE0_CTRL MODE0 Control **/
#define RTC_MODE0_CTRL			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE1_CTRL MODE1 Control **/
#define RTC_MODE1_CTRL			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE2_CTRL MODE2 Control **/
#define RTC_MODE2_CTRL			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE0_READREQ Read Request **/
#define RTC_MODE0_READREQ			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE1_READREQ Read Request **/
#define RTC_MODE1_READREQ			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE2_READREQ Read Request **/
#define RTC_MODE2_READREQ			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE0_EVCTRL MODE0 Event Control **/
#define RTC_MODE0_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE1_EVCTRL MODE1 Event Control **/
#define RTC_MODE1_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE2_EVCTRL MODE2 Event Control **/
#define RTC_MODE2_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE0_INTENCLR MODE0 Interrupt Enable Clear **/
#define RTC_MODE0_INTENCLR			MMIO32(RTC_BASE + 0x06)
/** RTC_MODE1_INTENCLR MODE1 Interrupt Enable Clear **/
#define RTC_MODE1_INTENCLR			MMIO32(RTC_BASE + 0x06)
/** RTC_MODE2_INTENCLR MODE2 Interrupt Enable Clear **/
#define RTC_MODE2_INTENCLR			MMIO32(RTC_BASE + 0x06)
/** RTC_MODE0_INTENSET MODE0 Interrupt Enable Set **/
#define RTC_MODE0_INTENSET			MMIO32(RTC_BASE + 0x07)
/** RTC_MODE1_INTENSET MODE1 Interrupt Enable Set **/
#define RTC_MODE1_INTENSET			MMIO32(RTC_BASE + 0x07)
/** RTC_MODE2_INTENSET MODE2 Interrupt Enable Set **/
#define RTC_MODE2_INTENSET			MMIO32(RTC_BASE + 0x07)
/** RTC_MODE0_INTFLAG MODE0 Interrupt Flag Status and Clear **/
#define RTC_MODE0_INTFLAG			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE1_INTFLAG MODE1 Interrupt Flag Status and Clear **/
#define RTC_MODE1_INTFLAG			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE2_INTFLAG MODE2 Interrupt Flag Status and Clear **/
#define RTC_MODE2_INTFLAG			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE0_STATUS Status **/
#define RTC_MODE0_STATUS			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE1_STATUS Status **/
#define RTC_MODE1_STATUS			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE2_STATUS Status **/
#define RTC_MODE2_STATUS			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE0_DBGCTRL Debug Control **/
#define RTC_MODE0_DBGCTRL			MMIO32(RTC_BASE + 0x0b)
/** RTC_MODE1_DBGCTRL Debug Control **/
#define RTC_MODE1_DBGCTRL			MMIO32(RTC_BASE + 0x0b)
/** RTC_MODE2_DBGCTRL Debug Control **/
#define RTC_MODE2_DBGCTRL			MMIO32(RTC_BASE + 0x0b)
/** RTC_MODE0_FREQCORR Frequency Correction **/
#define RTC_MODE0_FREQCORR			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE1_FREQCORR Frequency Correction **/
#define RTC_MODE1_FREQCORR			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE2_FREQCORR Frequency Correction **/
#define RTC_MODE2_FREQCORR			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE0_COUNT MODE0 Counter Value **/
#define RTC_MODE0_COUNT			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE1_COUNT MODE1 Counter Value **/
#define RTC_MODE1_COUNT			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE2_CLOCK MODE2 Clock Value **/
#define RTC_MODE2_CLOCK			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE1_PER MODE1 Counter Period **/
#define RTC_MODE1_PER			MMIO32(RTC_BASE + 0x14)
/** RTC_MODE0_COMP%s MODE0 Compare n Value **/
#define RTC_MODE0_COMP%s			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE1_COMP%s MODE1 Compare n Value **/
#define RTC_MODE1_COMP%s			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE2_ALARM%s MODE2 Alarm n Value **/
#define RTC_MODE2_ALARM%s			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE2_MASK%s MODE2 Alarm n Mask **/
#define RTC_MODE2_MASK%s			MMIO32(RTC_BASE + 0x1c)

/**@}*/


/** @defgroup rtc_mode0_ctrl MODE0CTRL MODE0 Control
@{*/


#define RTC_MODE0_CTRL_PRESCALER_SHIFT		8
#define RTC_MODE0_CTRL_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode0_ctrl_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** RTC_MODE0_CTRL_MATCHCLR Clear on Match **/
#define RTC_MODE0_CTRL_MATCHCLR		(1 << 7)

#define RTC_MODE0_CTRL_MODE_SHIFT		2
#define RTC_MODE0_CTRL_MODE_MASK		0x03
/** @defgroup rtc_mode0_ctrl_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE0_CTRL_ENABLE Enable **/
#define RTC_MODE0_CTRL_ENABLE		(1 << 1)
/** RTC_MODE0_CTRL_SWRST Software Reset **/
#define RTC_MODE0_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_ctrl MODE1CTRL MODE1 Control
@{*/


#define RTC_MODE1_CTRL_PRESCALER_SHIFT		8
#define RTC_MODE1_CTRL_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode1_ctrl_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define RTC_MODE1_CTRL_MODE_SHIFT		2
#define RTC_MODE1_CTRL_MODE_MASK		0x03
/** @defgroup rtc_mode1_ctrl_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE1_CTRL_ENABLE Enable **/
#define RTC_MODE1_CTRL_ENABLE		(1 << 1)
/** RTC_MODE1_CTRL_SWRST Software Reset **/
#define RTC_MODE1_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_ctrl MODE2CTRL MODE2 Control
@{*/


#define RTC_MODE2_CTRL_PRESCALER_SHIFT		8
#define RTC_MODE2_CTRL_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode2_ctrl_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** RTC_MODE2_CTRL_MATCHCLR Clear on Match **/
#define RTC_MODE2_CTRL_MATCHCLR		(1 << 7)
/** RTC_MODE2_CTRL_CLKREP Clock Representation **/
#define RTC_MODE2_CTRL_CLKREP		(1 << 6)

#define RTC_MODE2_CTRL_MODE_SHIFT		2
#define RTC_MODE2_CTRL_MODE_MASK		0x03
/** @defgroup rtc_mode2_ctrl_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE2_CTRL_ENABLE Enable **/
#define RTC_MODE2_CTRL_ENABLE		(1 << 1)
/** RTC_MODE2_CTRL_SWRST Software Reset **/
#define RTC_MODE2_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_readreq MODE0READREQ Read Request
@{*/

/** RTC_MODE0_READREQ_RREQ Read Request **/
#define RTC_MODE0_READREQ_RREQ		(1 << 15)
/** RTC_MODE0_READREQ_RCONT Read Continuously **/
#define RTC_MODE0_READREQ_RCONT		(1 << 14)

#define RTC_MODE0_READREQ_ADDR_SHIFT		0
#define RTC_MODE0_READREQ_ADDR_MASK		0x3f
/** @defgroup rtc_mode0_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_readreq MODE1READREQ Read Request
@{*/

/** RTC_MODE1_READREQ_RREQ Read Request **/
#define RTC_MODE1_READREQ_RREQ		(1 << 15)
/** RTC_MODE1_READREQ_RCONT Read Continuously **/
#define RTC_MODE1_READREQ_RCONT		(1 << 14)

#define RTC_MODE1_READREQ_ADDR_SHIFT		0
#define RTC_MODE1_READREQ_ADDR_MASK		0x3f
/** @defgroup rtc_mode1_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_readreq MODE2READREQ Read Request
@{*/

/** RTC_MODE2_READREQ_RREQ Read Request **/
#define RTC_MODE2_READREQ_RREQ		(1 << 15)
/** RTC_MODE2_READREQ_RCONT Read Continuously **/
#define RTC_MODE2_READREQ_RCONT		(1 << 14)

#define RTC_MODE2_READREQ_ADDR_SHIFT		0
#define RTC_MODE2_READREQ_ADDR_MASK		0x3f
/** @defgroup rtc_mode2_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_evctrl MODE0EVCTRL MODE0 Event Control
@{*/

/** RTC_MODE0_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE0_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE0_EVCTRL_CMPEO0 Compare 0 Event Output Enable **/
#define RTC_MODE0_EVCTRL_CMPEO0		(1 << 8)
/** RTC_MODE0_EVCTRL_PEREO7 Periodic Interval 7 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO7		(1 << 7)
/** RTC_MODE0_EVCTRL_PEREO6 Periodic Interval 6 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO6		(1 << 6)
/** RTC_MODE0_EVCTRL_PEREO5 Periodic Interval 5 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO5		(1 << 5)
/** RTC_MODE0_EVCTRL_PEREO4 Periodic Interval 4 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO4		(1 << 4)
/** RTC_MODE0_EVCTRL_PEREO3 Periodic Interval 3 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO3		(1 << 3)
/** RTC_MODE0_EVCTRL_PEREO2 Periodic Interval 2 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO2		(1 << 2)
/** RTC_MODE0_EVCTRL_PEREO1 Periodic Interval 1 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO1		(1 << 1)
/** RTC_MODE0_EVCTRL_PEREO0 Periodic Interval 0 Event Output Enable **/
#define RTC_MODE0_EVCTRL_PEREO0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_evctrl MODE1EVCTRL MODE1 Event Control
@{*/

/** RTC_MODE1_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE1_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE1_EVCTRL_CMPEO1 Compare 1 Event Output Enable **/
#define RTC_MODE1_EVCTRL_CMPEO1		(1 << 9)
/** RTC_MODE1_EVCTRL_CMPEO0 Compare 0 Event Output Enable **/
#define RTC_MODE1_EVCTRL_CMPEO0		(1 << 8)
/** RTC_MODE1_EVCTRL_PEREO7 Periodic Interval 7 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO7		(1 << 7)
/** RTC_MODE1_EVCTRL_PEREO6 Periodic Interval 6 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO6		(1 << 6)
/** RTC_MODE1_EVCTRL_PEREO5 Periodic Interval 5 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO5		(1 << 5)
/** RTC_MODE1_EVCTRL_PEREO4 Periodic Interval 4 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO4		(1 << 4)
/** RTC_MODE1_EVCTRL_PEREO3 Periodic Interval 3 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO3		(1 << 3)
/** RTC_MODE1_EVCTRL_PEREO2 Periodic Interval 2 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO2		(1 << 2)
/** RTC_MODE1_EVCTRL_PEREO1 Periodic Interval 1 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO1		(1 << 1)
/** RTC_MODE1_EVCTRL_PEREO0 Periodic Interval 0 Event Output Enable **/
#define RTC_MODE1_EVCTRL_PEREO0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_evctrl MODE2EVCTRL MODE2 Event Control
@{*/

/** RTC_MODE2_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE2_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE2_EVCTRL_ALARMEO0 Alarm 0 Event Output Enable **/
#define RTC_MODE2_EVCTRL_ALARMEO0		(1 << 8)
/** RTC_MODE2_EVCTRL_PEREO7 Periodic Interval 7 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO7		(1 << 7)
/** RTC_MODE2_EVCTRL_PEREO6 Periodic Interval 6 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO6		(1 << 6)
/** RTC_MODE2_EVCTRL_PEREO5 Periodic Interval 5 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO5		(1 << 5)
/** RTC_MODE2_EVCTRL_PEREO4 Periodic Interval 4 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO4		(1 << 4)
/** RTC_MODE2_EVCTRL_PEREO3 Periodic Interval 3 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO3		(1 << 3)
/** RTC_MODE2_EVCTRL_PEREO2 Periodic Interval 2 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO2		(1 << 2)
/** RTC_MODE2_EVCTRL_PEREO1 Periodic Interval 1 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO1		(1 << 1)
/** RTC_MODE2_EVCTRL_PEREO0 Periodic Interval 0 Event Output Enable **/
#define RTC_MODE2_EVCTRL_PEREO0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_intenclr MODE0INTENCLR MODE0 Interrupt Enable Clear
@{*/

/** RTC_MODE0_INTENCLR_OVF Overflow Interrupt Enable **/
#define RTC_MODE0_INTENCLR_OVF		(1 << 7)
/** RTC_MODE0_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE0_INTENCLR_SYNCRDY		(1 << 6)
/** RTC_MODE0_INTENCLR_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intenclr MODE1INTENCLR MODE1 Interrupt Enable Clear
@{*/

/** RTC_MODE1_INTENCLR_OVF Overflow Interrupt Enable **/
#define RTC_MODE1_INTENCLR_OVF		(1 << 7)
/** RTC_MODE1_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE1_INTENCLR_SYNCRDY		(1 << 6)
/** RTC_MODE1_INTENCLR_CMP1 Compare 1 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_CMP1		(1 << 1)
/** RTC_MODE1_INTENCLR_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intenclr MODE2INTENCLR MODE2 Interrupt Enable Clear
@{*/

/** RTC_MODE2_INTENCLR_OVF Overflow Interrupt Enable **/
#define RTC_MODE2_INTENCLR_OVF		(1 << 7)
/** RTC_MODE2_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE2_INTENCLR_SYNCRDY		(1 << 6)
/** RTC_MODE2_INTENCLR_ALARM0 Alarm 0 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_ALARM0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_intenset MODE0INTENSET MODE0 Interrupt Enable Set
@{*/

/** RTC_MODE0_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE0_INTENSET_OVF		(1 << 7)
/** RTC_MODE0_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE0_INTENSET_SYNCRDY		(1 << 6)
/** RTC_MODE0_INTENSET_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE0_INTENSET_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intenset MODE1INTENSET MODE1 Interrupt Enable Set
@{*/

/** RTC_MODE1_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE1_INTENSET_OVF		(1 << 7)
/** RTC_MODE1_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE1_INTENSET_SYNCRDY		(1 << 6)
/** RTC_MODE1_INTENSET_CMP1 Compare 1 Interrupt Enable **/
#define RTC_MODE1_INTENSET_CMP1		(1 << 1)
/** RTC_MODE1_INTENSET_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE1_INTENSET_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intenset MODE2INTENSET MODE2 Interrupt Enable Set
@{*/

/** RTC_MODE2_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE2_INTENSET_OVF		(1 << 7)
/** RTC_MODE2_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define RTC_MODE2_INTENSET_SYNCRDY		(1 << 6)
/** RTC_MODE2_INTENSET_ALARM0 Alarm 0 Interrupt Enable **/
#define RTC_MODE2_INTENSET_ALARM0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_intflag MODE0INTFLAG MODE0 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE0_INTFLAG_OVF Overflow **/
#define RTC_MODE0_INTFLAG_OVF		(1 << 7)
/** RTC_MODE0_INTFLAG_SYNCRDY Synchronization Ready **/
#define RTC_MODE0_INTFLAG_SYNCRDY		(1 << 6)
/** RTC_MODE0_INTFLAG_CMP0 Compare 0 **/
#define RTC_MODE0_INTFLAG_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intflag MODE1INTFLAG MODE1 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE1_INTFLAG_OVF Overflow **/
#define RTC_MODE1_INTFLAG_OVF		(1 << 7)
/** RTC_MODE1_INTFLAG_SYNCRDY Synchronization Ready **/
#define RTC_MODE1_INTFLAG_SYNCRDY		(1 << 6)
/** RTC_MODE1_INTFLAG_CMP1 Compare 1 **/
#define RTC_MODE1_INTFLAG_CMP1		(1 << 1)
/** RTC_MODE1_INTFLAG_CMP0 Compare 0 **/
#define RTC_MODE1_INTFLAG_CMP0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intflag MODE2INTFLAG MODE2 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE2_INTFLAG_OVF Overflow **/
#define RTC_MODE2_INTFLAG_OVF		(1 << 7)
/** RTC_MODE2_INTFLAG_SYNCRDY Synchronization Ready **/
#define RTC_MODE2_INTFLAG_SYNCRDY		(1 << 6)
/** RTC_MODE2_INTFLAG_ALARM0 Alarm 0 **/
#define RTC_MODE2_INTFLAG_ALARM0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_status MODE0STATUS Status
@{*/

/** RTC_MODE0_STATUS_SYNCBUSY Synchronization Busy **/
#define RTC_MODE0_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup rtc_mode1_status MODE1STATUS Status
@{*/

/** RTC_MODE1_STATUS_SYNCBUSY Synchronization Busy **/
#define RTC_MODE1_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup rtc_mode2_status MODE2STATUS Status
@{*/

/** RTC_MODE2_STATUS_SYNCBUSY Synchronization Busy **/
#define RTC_MODE2_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup rtc_mode0_dbgctrl MODE0DBGCTRL Debug Control
@{*/

/** RTC_MODE0_DBGCTRL_DBGRUN Run During Debug **/
#define RTC_MODE0_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_dbgctrl MODE1DBGCTRL Debug Control
@{*/

/** RTC_MODE1_DBGCTRL_DBGRUN Run During Debug **/
#define RTC_MODE1_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_dbgctrl MODE2DBGCTRL Debug Control
@{*/

/** RTC_MODE2_DBGCTRL_DBGRUN Run During Debug **/
#define RTC_MODE2_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_freqcorr MODE0FREQCORR Frequency Correction
@{*/

/** RTC_MODE0_FREQCORR_SIGN Correction Sign **/
#define RTC_MODE0_FREQCORR_SIGN		(1 << 7)

#define RTC_MODE0_FREQCORR_VALUE_SHIFT		0
#define RTC_MODE0_FREQCORR_VALUE_MASK		0x7f
/** @defgroup rtc_mode0_freqcorr_value VALUE Correction Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_freqcorr MODE1FREQCORR Frequency Correction
@{*/

/** RTC_MODE1_FREQCORR_SIGN Correction Sign **/
#define RTC_MODE1_FREQCORR_SIGN		(1 << 7)

#define RTC_MODE1_FREQCORR_VALUE_SHIFT		0
#define RTC_MODE1_FREQCORR_VALUE_MASK		0x7f
/** @defgroup rtc_mode1_freqcorr_value VALUE Correction Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_freqcorr MODE2FREQCORR Frequency Correction
@{*/

/** RTC_MODE2_FREQCORR_SIGN Correction Sign **/
#define RTC_MODE2_FREQCORR_SIGN		(1 << 7)

#define RTC_MODE2_FREQCORR_VALUE_SHIFT		0
#define RTC_MODE2_FREQCORR_VALUE_MASK		0x7f
/** @defgroup rtc_mode2_freqcorr_value VALUE Correction Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_count MODE0COUNT MODE0 Counter Value
@{*/


#define RTC_MODE0_COUNT_COUNT_SHIFT		0
#define RTC_MODE0_COUNT_COUNT_MASK		0xffffffff
/** @defgroup rtc_mode0_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_count MODE1COUNT MODE1 Counter Value
@{*/


#define RTC_MODE1_COUNT_COUNT_SHIFT		0
#define RTC_MODE1_COUNT_COUNT_MASK		0xffff
/** @defgroup rtc_mode1_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_clock MODE2CLOCK MODE2 Clock Value
@{*/


#define RTC_MODE2_CLOCK_YEAR_SHIFT		26
#define RTC_MODE2_CLOCK_YEAR_MASK		0x3f
/** @defgroup rtc_mode2_clock_year YEAR Year
@{*/
/**@}*/


#define RTC_MODE2_CLOCK_MONTH_SHIFT		22
#define RTC_MODE2_CLOCK_MONTH_MASK		0x0f
/** @defgroup rtc_mode2_clock_month MONTH Month
@{*/
/**@}*/


#define RTC_MODE2_CLOCK_DAY_SHIFT		17
#define RTC_MODE2_CLOCK_DAY_MASK		0x1f
/** @defgroup rtc_mode2_clock_day DAY Day
@{*/
/**@}*/


#define RTC_MODE2_CLOCK_HOUR_SHIFT		12
#define RTC_MODE2_CLOCK_HOUR_MASK		0x1f
/** @defgroup rtc_mode2_clock_hour HOUR Hour
@{*/
/**@}*/


#define RTC_MODE2_CLOCK_MINUTE_SHIFT		6
#define RTC_MODE2_CLOCK_MINUTE_MASK		0x3f
/** @defgroup rtc_mode2_clock_minute MINUTE Minute
@{*/
/**@}*/


#define RTC_MODE2_CLOCK_SECOND_SHIFT		0
#define RTC_MODE2_CLOCK_SECOND_MASK		0x3f
/** @defgroup rtc_mode2_clock_second SECOND Second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_per MODE1PER MODE1 Counter Period
@{*/


#define RTC_MODE1_PER_PER_SHIFT		0
#define RTC_MODE1_PER_PER_MASK		0xffff
/** @defgroup rtc_mode1_per_per PER Counter Period
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_comp%s MODE0COMP%s MODE0 Compare n Value
@{*/


#define RTC_MODE0_COMP%s_COMP_SHIFT		0
#define RTC_MODE0_COMP%s_COMP_MASK		0xffffffff
/** @defgroup rtc_mode0_comp%s_comp COMP Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_comp%s MODE1COMP%s MODE1 Compare n Value
@{*/


#define RTC_MODE1_COMP%s_COMP_SHIFT		0
#define RTC_MODE1_COMP%s_COMP_MASK		0xffff
/** @defgroup rtc_mode1_comp%s_comp COMP Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_alarm%s MODE2ALARM%s MODE2 Alarm n Value
@{*/


#define RTC_MODE2_ALARM%s_YEAR_SHIFT		26
#define RTC_MODE2_ALARM%s_YEAR_MASK		0x3f
/** @defgroup rtc_mode2_alarm%s_year YEAR Year
@{*/
/**@}*/


#define RTC_MODE2_ALARM%s_MONTH_SHIFT		22
#define RTC_MODE2_ALARM%s_MONTH_MASK		0x0f
/** @defgroup rtc_mode2_alarm%s_month MONTH Month
@{*/
/**@}*/


#define RTC_MODE2_ALARM%s_DAY_SHIFT		17
#define RTC_MODE2_ALARM%s_DAY_MASK		0x1f
/** @defgroup rtc_mode2_alarm%s_day DAY Day
@{*/
/**@}*/


#define RTC_MODE2_ALARM%s_HOUR_SHIFT		12
#define RTC_MODE2_ALARM%s_HOUR_MASK		0x1f
/** @defgroup rtc_mode2_alarm%s_hour HOUR Hour
@{*/
/**@}*/


#define RTC_MODE2_ALARM%s_MINUTE_SHIFT		6
#define RTC_MODE2_ALARM%s_MINUTE_MASK		0x3f
/** @defgroup rtc_mode2_alarm%s_minute MINUTE Minute
@{*/
/**@}*/


#define RTC_MODE2_ALARM%s_SECOND_SHIFT		0
#define RTC_MODE2_ALARM%s_SECOND_MASK		0x3f
/** @defgroup rtc_mode2_alarm%s_second SECOND Second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_mask%s MODE2MASK%s MODE2 Alarm n Mask
@{*/


#define RTC_MODE2_MASK%s_SEL_SHIFT		0
#define RTC_MODE2_MASK%s_SEL_MASK		0x07
/** @defgroup rtc_mode2_mask%s_sel SEL Alarm Mask Selection
@{*/
/**@}*/


/**@}*/

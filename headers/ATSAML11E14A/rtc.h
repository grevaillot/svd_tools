#pragma once 

/* --- RTC: Real-Time Counter --------------------------------------- */

/** @defgroup rtc_registers Real-Time Counter Register
@{*/

/** RTC_MODE0_CTRLA MODE0 Control A **/
#define RTC_MODE0_CTRLA			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE1_CTRLA MODE1 Control A **/
#define RTC_MODE1_CTRLA			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE2_CTRLA MODE2 Control A **/
#define RTC_MODE2_CTRLA			MMIO32(RTC_BASE + 0x00)
/** RTC_MODE0_CTRLB MODE0 Control B **/
#define RTC_MODE0_CTRLB			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE1_CTRLB MODE1 Control B **/
#define RTC_MODE1_CTRLB			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE2_CTRLB MODE2 Control B **/
#define RTC_MODE2_CTRLB			MMIO32(RTC_BASE + 0x02)
/** RTC_MODE0_EVCTRL MODE0 Event Control **/
#define RTC_MODE0_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE1_EVCTRL MODE1 Event Control **/
#define RTC_MODE1_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE2_EVCTRL MODE2 Event Control **/
#define RTC_MODE2_EVCTRL			MMIO32(RTC_BASE + 0x04)
/** RTC_MODE0_INTENCLR MODE0 Interrupt Enable Clear **/
#define RTC_MODE0_INTENCLR			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE1_INTENCLR MODE1 Interrupt Enable Clear **/
#define RTC_MODE1_INTENCLR			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE2_INTENCLR MODE2 Interrupt Enable Clear **/
#define RTC_MODE2_INTENCLR			MMIO32(RTC_BASE + 0x08)
/** RTC_MODE0_INTENSET MODE0 Interrupt Enable Set **/
#define RTC_MODE0_INTENSET			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE1_INTENSET MODE1 Interrupt Enable Set **/
#define RTC_MODE1_INTENSET			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE2_INTENSET MODE2 Interrupt Enable Set **/
#define RTC_MODE2_INTENSET			MMIO32(RTC_BASE + 0x0a)
/** RTC_MODE0_INTFLAG MODE0 Interrupt Flag Status and Clear **/
#define RTC_MODE0_INTFLAG			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE1_INTFLAG MODE1 Interrupt Flag Status and Clear **/
#define RTC_MODE1_INTFLAG			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE2_INTFLAG MODE2 Interrupt Flag Status and Clear **/
#define RTC_MODE2_INTFLAG			MMIO32(RTC_BASE + 0x0c)
/** RTC_MODE0_DBGCTRL Debug Control **/
#define RTC_MODE0_DBGCTRL			MMIO32(RTC_BASE + 0x0e)
/** RTC_MODE1_DBGCTRL Debug Control **/
#define RTC_MODE1_DBGCTRL			MMIO32(RTC_BASE + 0x0e)
/** RTC_MODE2_DBGCTRL Debug Control **/
#define RTC_MODE2_DBGCTRL			MMIO32(RTC_BASE + 0x0e)
/** RTC_MODE0_SYNCBUSY MODE0 Synchronization Busy Status **/
#define RTC_MODE0_SYNCBUSY			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE1_SYNCBUSY MODE1 Synchronization Busy Status **/
#define RTC_MODE1_SYNCBUSY			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE2_SYNCBUSY MODE2 Synchronization Busy Status **/
#define RTC_MODE2_SYNCBUSY			MMIO32(RTC_BASE + 0x10)
/** RTC_MODE0_FREQCORR Frequency Correction **/
#define RTC_MODE0_FREQCORR			MMIO32(RTC_BASE + 0x14)
/** RTC_MODE1_FREQCORR Frequency Correction **/
#define RTC_MODE1_FREQCORR			MMIO32(RTC_BASE + 0x14)
/** RTC_MODE2_FREQCORR Frequency Correction **/
#define RTC_MODE2_FREQCORR			MMIO32(RTC_BASE + 0x14)
/** RTC_MODE0_COUNT MODE0 Counter Value **/
#define RTC_MODE0_COUNT			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE1_COUNT MODE1 Counter Value **/
#define RTC_MODE1_COUNT			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE2_CLOCK MODE2 Clock Value **/
#define RTC_MODE2_CLOCK			MMIO32(RTC_BASE + 0x18)
/** RTC_MODE1_PER MODE1 Counter Period **/
#define RTC_MODE1_PER			MMIO32(RTC_BASE + 0x1c)
/** RTC_MODE0_COMP[%s] MODE0 Compare n Value **/
#define RTC_MODE0_COMP[%s]			MMIO32(RTC_BASE + 0x20)
/** RTC_MODE1_COMP[%s] MODE1 Compare n Value **/
#define RTC_MODE1_COMP[%s]			MMIO32(RTC_BASE + 0x20)
/** RTC_MODE2_MODE2_ALARM[0]_ALARM MODE2_ALARM Alarm n Value **/
#define RTC_MODE2_MODE2_ALARM[0]_ALARM			MMIO32(RTC_BASE + 0x20)
/** RTC_MODE2_MODE2_ALARM[0]_MASK MODE2_ALARM Alarm n Mask **/
#define RTC_MODE2_MODE2_ALARM[0]_MASK			MMIO32(RTC_BASE + 0x24)
/** RTC_MODE0_GP[%s] General Purpose **/
#define RTC_MODE0_GP[%s]			MMIO32(RTC_BASE + 0x40)
/** RTC_MODE1_GP[%s] General Purpose **/
#define RTC_MODE1_GP[%s]			MMIO32(RTC_BASE + 0x40)
/** RTC_MODE2_GP[%s] General Purpose **/
#define RTC_MODE2_GP[%s]			MMIO32(RTC_BASE + 0x40)
/** RTC_MODE0_TAMPCTRL Tamper Control **/
#define RTC_MODE0_TAMPCTRL			MMIO32(RTC_BASE + 0x60)
/** RTC_MODE1_TAMPCTRL Tamper Control **/
#define RTC_MODE1_TAMPCTRL			MMIO32(RTC_BASE + 0x60)
/** RTC_MODE2_TAMPCTRL Tamper Control **/
#define RTC_MODE2_TAMPCTRL			MMIO32(RTC_BASE + 0x60)
/** RTC_MODE0_TIMESTAMP MODE0 Timestamp **/
#define RTC_MODE0_TIMESTAMP			MMIO32(RTC_BASE + 0x64)
/** RTC_MODE1_TIMESTAMP MODE1 Timestamp **/
#define RTC_MODE1_TIMESTAMP			MMIO32(RTC_BASE + 0x64)
/** RTC_MODE2_TIMESTAMP MODE2 Timestamp **/
#define RTC_MODE2_TIMESTAMP			MMIO32(RTC_BASE + 0x64)
/** RTC_MODE0_TAMPID Tamper ID **/
#define RTC_MODE0_TAMPID			MMIO32(RTC_BASE + 0x68)
/** RTC_MODE1_TAMPID Tamper ID **/
#define RTC_MODE1_TAMPID			MMIO32(RTC_BASE + 0x68)
/** RTC_MODE2_TAMPID Tamper ID **/
#define RTC_MODE2_TAMPID			MMIO32(RTC_BASE + 0x68)
/** RTC_MODE0_TAMPCTRLB Tamper Control B **/
#define RTC_MODE0_TAMPCTRLB			MMIO32(RTC_BASE + 0x6c)
/** RTC_MODE1_TAMPCTRLB Tamper Control B **/
#define RTC_MODE1_TAMPCTRLB			MMIO32(RTC_BASE + 0x6c)
/** RTC_MODE2_TAMPCTRLB Tamper Control B **/
#define RTC_MODE2_TAMPCTRLB			MMIO32(RTC_BASE + 0x6c)

/**@}*/


/** @defgroup rtc_mode0_ctrla MODE0CTRLA MODE0 Control A
@{*/

/** RTC_MODE0_CTRLA_COUNTSYNC Count Read Synchronization Enable **/
#define RTC_MODE0_CTRLA_COUNTSYNC		(1 << 15)
/** RTC_MODE0_CTRLA_GPTRST GP Registers Reset On Tamper Enable **/
#define RTC_MODE0_CTRLA_GPTRST		(1 << 14)

#define RTC_MODE0_CTRLA_PRESCALER_SHIFT		8
#define RTC_MODE0_CTRLA_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode0_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** RTC_MODE0_CTRLA_MATCHCLR Clear on Match **/
#define RTC_MODE0_CTRLA_MATCHCLR		(1 << 7)

#define RTC_MODE0_CTRLA_MODE_SHIFT		2
#define RTC_MODE0_CTRLA_MODE_MASK		0x03
/** @defgroup rtc_mode0_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE0_CTRLA_ENABLE Enable **/
#define RTC_MODE0_CTRLA_ENABLE		(1 << 1)
/** RTC_MODE0_CTRLA_SWRST Software Reset **/
#define RTC_MODE0_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_ctrla MODE1CTRLA MODE1 Control A
@{*/

/** RTC_MODE1_CTRLA_COUNTSYNC Count Read Synchronization Enable **/
#define RTC_MODE1_CTRLA_COUNTSYNC		(1 << 15)
/** RTC_MODE1_CTRLA_GPTRST GP Registers Reset On Tamper Enable **/
#define RTC_MODE1_CTRLA_GPTRST		(1 << 14)

#define RTC_MODE1_CTRLA_PRESCALER_SHIFT		8
#define RTC_MODE1_CTRLA_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode1_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define RTC_MODE1_CTRLA_MODE_SHIFT		2
#define RTC_MODE1_CTRLA_MODE_MASK		0x03
/** @defgroup rtc_mode1_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE1_CTRLA_ENABLE Enable **/
#define RTC_MODE1_CTRLA_ENABLE		(1 << 1)
/** RTC_MODE1_CTRLA_SWRST Software Reset **/
#define RTC_MODE1_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_ctrla MODE2CTRLA MODE2 Control A
@{*/

/** RTC_MODE2_CTRLA_CLOCKSYNC Clock Read Synchronization Enable **/
#define RTC_MODE2_CTRLA_CLOCKSYNC		(1 << 15)
/** RTC_MODE2_CTRLA_GPTRST GP Registers Reset On Tamper Enable **/
#define RTC_MODE2_CTRLA_GPTRST		(1 << 14)

#define RTC_MODE2_CTRLA_PRESCALER_SHIFT		8
#define RTC_MODE2_CTRLA_PRESCALER_MASK		0x0f
/** @defgroup rtc_mode2_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** RTC_MODE2_CTRLA_MATCHCLR Clear on Match **/
#define RTC_MODE2_CTRLA_MATCHCLR		(1 << 7)
/** RTC_MODE2_CTRLA_CLKREP Clock Representation **/
#define RTC_MODE2_CTRLA_CLKREP		(1 << 6)

#define RTC_MODE2_CTRLA_MODE_SHIFT		2
#define RTC_MODE2_CTRLA_MODE_MASK		0x03
/** @defgroup rtc_mode2_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** RTC_MODE2_CTRLA_ENABLE Enable **/
#define RTC_MODE2_CTRLA_ENABLE		(1 << 1)
/** RTC_MODE2_CTRLA_SWRST Software Reset **/
#define RTC_MODE2_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_ctrlb MODE0CTRLB MODE0 Control B
@{*/

/** RTC_MODE0_CTRLB_SEPTO Separate Tamper Outputs **/
#define RTC_MODE0_CTRLB_SEPTO		(1 << 15)

#define RTC_MODE0_CTRLB_ACTF_SHIFT		12
#define RTC_MODE0_CTRLB_ACTF_MASK		0x07
/** @defgroup rtc_mode0_ctrlb_actf ACTF Active Layer Frequency
@{*/
/**@}*/


#define RTC_MODE0_CTRLB_DEBF_SHIFT		8
#define RTC_MODE0_CTRLB_DEBF_MASK		0x07
/** @defgroup rtc_mode0_ctrlb_debf DEBF Debounce Frequency
@{*/
/**@}*/

/** RTC_MODE0_CTRLB_DMAEN DMA Enable **/
#define RTC_MODE0_CTRLB_DMAEN		(1 << 7)
/** RTC_MODE0_CTRLB_RTCOUT RTC Output Enable **/
#define RTC_MODE0_CTRLB_RTCOUT		(1 << 6)
/** RTC_MODE0_CTRLB_DEBASYNC Debouncer Asynchronous Enable **/
#define RTC_MODE0_CTRLB_DEBASYNC		(1 << 5)
/** RTC_MODE0_CTRLB_DEBMAJ Debouncer Majority Enable **/
#define RTC_MODE0_CTRLB_DEBMAJ		(1 << 4)
/** RTC_MODE0_CTRLB_GP0EN General Purpose 0 Enable **/
#define RTC_MODE0_CTRLB_GP0EN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_ctrlb MODE1CTRLB MODE1 Control B
@{*/

/** RTC_MODE1_CTRLB_SEPTO Separate Tamper Outputs **/
#define RTC_MODE1_CTRLB_SEPTO		(1 << 15)

#define RTC_MODE1_CTRLB_ACTF_SHIFT		12
#define RTC_MODE1_CTRLB_ACTF_MASK		0x07
/** @defgroup rtc_mode1_ctrlb_actf ACTF Active Layer Frequency
@{*/
/**@}*/


#define RTC_MODE1_CTRLB_DEBF_SHIFT		8
#define RTC_MODE1_CTRLB_DEBF_MASK		0x07
/** @defgroup rtc_mode1_ctrlb_debf DEBF Debounce Frequency
@{*/
/**@}*/

/** RTC_MODE1_CTRLB_DMAEN DMA Enable **/
#define RTC_MODE1_CTRLB_DMAEN		(1 << 7)
/** RTC_MODE1_CTRLB_RTCOUT RTC Output Enable **/
#define RTC_MODE1_CTRLB_RTCOUT		(1 << 6)
/** RTC_MODE1_CTRLB_DEBASYNC Debouncer Asynchronous Enable **/
#define RTC_MODE1_CTRLB_DEBASYNC		(1 << 5)
/** RTC_MODE1_CTRLB_DEBMAJ Debouncer Majority Enable **/
#define RTC_MODE1_CTRLB_DEBMAJ		(1 << 4)
/** RTC_MODE1_CTRLB_GP0EN General Purpose 0 Enable **/
#define RTC_MODE1_CTRLB_GP0EN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_ctrlb MODE2CTRLB MODE2 Control B
@{*/

/** RTC_MODE2_CTRLB_SEPTO Separate Tamper Outputs **/
#define RTC_MODE2_CTRLB_SEPTO		(1 << 15)

#define RTC_MODE2_CTRLB_ACTF_SHIFT		12
#define RTC_MODE2_CTRLB_ACTF_MASK		0x07
/** @defgroup rtc_mode2_ctrlb_actf ACTF Active Layer Frequency
@{*/
/**@}*/


#define RTC_MODE2_CTRLB_DEBF_SHIFT		8
#define RTC_MODE2_CTRLB_DEBF_MASK		0x07
/** @defgroup rtc_mode2_ctrlb_debf DEBF Debounce Frequency
@{*/
/**@}*/

/** RTC_MODE2_CTRLB_DMAEN DMA Enable **/
#define RTC_MODE2_CTRLB_DMAEN		(1 << 7)
/** RTC_MODE2_CTRLB_RTCOUT RTC Output Enable **/
#define RTC_MODE2_CTRLB_RTCOUT		(1 << 6)
/** RTC_MODE2_CTRLB_DEBASYNC Debouncer Asynchronous Enable **/
#define RTC_MODE2_CTRLB_DEBASYNC		(1 << 5)
/** RTC_MODE2_CTRLB_DEBMAJ Debouncer Majority Enable **/
#define RTC_MODE2_CTRLB_DEBMAJ		(1 << 4)
/** RTC_MODE2_CTRLB_GP0EN General Purpose 0 Enable **/
#define RTC_MODE2_CTRLB_GP0EN		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_evctrl MODE0EVCTRL MODE0 Event Control
@{*/

/** RTC_MODE0_EVCTRL_PERDEO Periodic Interval Daily Event Output Enable **/
#define RTC_MODE0_EVCTRL_PERDEO		(1 << 24)
/** RTC_MODE0_EVCTRL_TAMPEVEI Tamper Event Input Enable **/
#define RTC_MODE0_EVCTRL_TAMPEVEI		(1 << 16)
/** RTC_MODE0_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE0_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE0_EVCTRL_TAMPEREO Tamper Event Output Enable **/
#define RTC_MODE0_EVCTRL_TAMPEREO		(1 << 14)
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

/** RTC_MODE1_EVCTRL_PERDEO Periodic Interval Daily Event Output Enable **/
#define RTC_MODE1_EVCTRL_PERDEO		(1 << 24)
/** RTC_MODE1_EVCTRL_TAMPEVEI Tamper Event Input Enable **/
#define RTC_MODE1_EVCTRL_TAMPEVEI		(1 << 16)
/** RTC_MODE1_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE1_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE1_EVCTRL_TAMPEREO Tamper Event Output Enable **/
#define RTC_MODE1_EVCTRL_TAMPEREO		(1 << 14)
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

/** RTC_MODE2_EVCTRL_PERDEO Periodic Interval Daily Event Output Enable **/
#define RTC_MODE2_EVCTRL_PERDEO		(1 << 24)
/** RTC_MODE2_EVCTRL_TAMPEVEI Tamper Event Input Enable **/
#define RTC_MODE2_EVCTRL_TAMPEVEI		(1 << 16)
/** RTC_MODE2_EVCTRL_OVFEO Overflow Event Output Enable **/
#define RTC_MODE2_EVCTRL_OVFEO		(1 << 15)
/** RTC_MODE2_EVCTRL_TAMPEREO Tamper Event Output Enable **/
#define RTC_MODE2_EVCTRL_TAMPEREO		(1 << 14)
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
#define RTC_MODE0_INTENCLR_OVF		(1 << 15)
/** RTC_MODE0_INTENCLR_TAMPER Tamper Enable **/
#define RTC_MODE0_INTENCLR_TAMPER		(1 << 14)
/** RTC_MODE0_INTENCLR_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_CMP0		(1 << 8)
/** RTC_MODE0_INTENCLR_PER7 Periodic Interval 7 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER7		(1 << 7)
/** RTC_MODE0_INTENCLR_PER6 Periodic Interval 6 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER6		(1 << 6)
/** RTC_MODE0_INTENCLR_PER5 Periodic Interval 5 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER5		(1 << 5)
/** RTC_MODE0_INTENCLR_PER4 Periodic Interval 4 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER4		(1 << 4)
/** RTC_MODE0_INTENCLR_PER3 Periodic Interval 3 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER3		(1 << 3)
/** RTC_MODE0_INTENCLR_PER2 Periodic Interval 2 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER2		(1 << 2)
/** RTC_MODE0_INTENCLR_PER1 Periodic Interval 1 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER1		(1 << 1)
/** RTC_MODE0_INTENCLR_PER0 Periodic Interval 0 Interrupt Enable **/
#define RTC_MODE0_INTENCLR_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intenclr MODE1INTENCLR MODE1 Interrupt Enable Clear
@{*/

/** RTC_MODE1_INTENCLR_OVF Overflow Interrupt Enable **/
#define RTC_MODE1_INTENCLR_OVF		(1 << 15)
/** RTC_MODE1_INTENCLR_TAMPER Tamper Enable **/
#define RTC_MODE1_INTENCLR_TAMPER		(1 << 14)
/** RTC_MODE1_INTENCLR_CMP1 Compare 1 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_CMP1		(1 << 9)
/** RTC_MODE1_INTENCLR_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_CMP0		(1 << 8)
/** RTC_MODE1_INTENCLR_PER7 Periodic Interval 7 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER7		(1 << 7)
/** RTC_MODE1_INTENCLR_PER6 Periodic Interval 6 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER6		(1 << 6)
/** RTC_MODE1_INTENCLR_PER5 Periodic Interval 5 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER5		(1 << 5)
/** RTC_MODE1_INTENCLR_PER4 Periodic Interval 4 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER4		(1 << 4)
/** RTC_MODE1_INTENCLR_PER3 Periodic Interval 3 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER3		(1 << 3)
/** RTC_MODE1_INTENCLR_PER2 Periodic Interval 2 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER2		(1 << 2)
/** RTC_MODE1_INTENCLR_PER1 Periodic Interval 1 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER1		(1 << 1)
/** RTC_MODE1_INTENCLR_PER0 Periodic Interval 0 Interrupt Enable **/
#define RTC_MODE1_INTENCLR_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intenclr MODE2INTENCLR MODE2 Interrupt Enable Clear
@{*/

/** RTC_MODE2_INTENCLR_OVF Overflow Interrupt Enable **/
#define RTC_MODE2_INTENCLR_OVF		(1 << 15)
/** RTC_MODE2_INTENCLR_TAMPER Tamper Enable **/
#define RTC_MODE2_INTENCLR_TAMPER		(1 << 14)
/** RTC_MODE2_INTENCLR_ALARM0 Alarm 0 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_ALARM0		(1 << 8)
/** RTC_MODE2_INTENCLR_PER7 Periodic Interval 7 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER7		(1 << 7)
/** RTC_MODE2_INTENCLR_PER6 Periodic Interval 6 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER6		(1 << 6)
/** RTC_MODE2_INTENCLR_PER5 Periodic Interval 5 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER5		(1 << 5)
/** RTC_MODE2_INTENCLR_PER4 Periodic Interval 4 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER4		(1 << 4)
/** RTC_MODE2_INTENCLR_PER3 Periodic Interval 3 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER3		(1 << 3)
/** RTC_MODE2_INTENCLR_PER2 Periodic Interval 2 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER2		(1 << 2)
/** RTC_MODE2_INTENCLR_PER1 Periodic Interval 1 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER1		(1 << 1)
/** RTC_MODE2_INTENCLR_PER0 Periodic Interval 0 Interrupt Enable **/
#define RTC_MODE2_INTENCLR_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_intenset MODE0INTENSET MODE0 Interrupt Enable Set
@{*/

/** RTC_MODE0_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE0_INTENSET_OVF		(1 << 15)
/** RTC_MODE0_INTENSET_TAMPER Tamper Enable **/
#define RTC_MODE0_INTENSET_TAMPER		(1 << 14)
/** RTC_MODE0_INTENSET_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE0_INTENSET_CMP0		(1 << 8)
/** RTC_MODE0_INTENSET_PER7 Periodic Interval 7 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER7		(1 << 7)
/** RTC_MODE0_INTENSET_PER6 Periodic Interval 6 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER6		(1 << 6)
/** RTC_MODE0_INTENSET_PER5 Periodic Interval 5 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER5		(1 << 5)
/** RTC_MODE0_INTENSET_PER4 Periodic Interval 4 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER4		(1 << 4)
/** RTC_MODE0_INTENSET_PER3 Periodic Interval 3 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER3		(1 << 3)
/** RTC_MODE0_INTENSET_PER2 Periodic Interval 2 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER2		(1 << 2)
/** RTC_MODE0_INTENSET_PER1 Periodic Interval 1 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER1		(1 << 1)
/** RTC_MODE0_INTENSET_PER0 Periodic Interval 0 Interrupt Enable **/
#define RTC_MODE0_INTENSET_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intenset MODE1INTENSET MODE1 Interrupt Enable Set
@{*/

/** RTC_MODE1_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE1_INTENSET_OVF		(1 << 15)
/** RTC_MODE1_INTENSET_TAMPER Tamper Enable **/
#define RTC_MODE1_INTENSET_TAMPER		(1 << 14)
/** RTC_MODE1_INTENSET_CMP1 Compare 1 Interrupt Enable **/
#define RTC_MODE1_INTENSET_CMP1		(1 << 9)
/** RTC_MODE1_INTENSET_CMP0 Compare 0 Interrupt Enable **/
#define RTC_MODE1_INTENSET_CMP0		(1 << 8)
/** RTC_MODE1_INTENSET_PER7 Periodic Interval 7 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER7		(1 << 7)
/** RTC_MODE1_INTENSET_PER6 Periodic Interval 6 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER6		(1 << 6)
/** RTC_MODE1_INTENSET_PER5 Periodic Interval 5 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER5		(1 << 5)
/** RTC_MODE1_INTENSET_PER4 Periodic Interval 4 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER4		(1 << 4)
/** RTC_MODE1_INTENSET_PER3 Periodic Interval 3 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER3		(1 << 3)
/** RTC_MODE1_INTENSET_PER2 Periodic Interval 2 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER2		(1 << 2)
/** RTC_MODE1_INTENSET_PER1 Periodic Interval 1 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER1		(1 << 1)
/** RTC_MODE1_INTENSET_PER0 Periodic Interval 0 Interrupt Enable **/
#define RTC_MODE1_INTENSET_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intenset MODE2INTENSET MODE2 Interrupt Enable Set
@{*/

/** RTC_MODE2_INTENSET_OVF Overflow Interrupt Enable **/
#define RTC_MODE2_INTENSET_OVF		(1 << 15)
/** RTC_MODE2_INTENSET_TAMPER Tamper Enable **/
#define RTC_MODE2_INTENSET_TAMPER		(1 << 14)
/** RTC_MODE2_INTENSET_ALARM0 Alarm 0 Interrupt Enable **/
#define RTC_MODE2_INTENSET_ALARM0		(1 << 8)
/** RTC_MODE2_INTENSET_PER7 Periodic Interval 7 Enable **/
#define RTC_MODE2_INTENSET_PER7		(1 << 7)
/** RTC_MODE2_INTENSET_PER6 Periodic Interval 6 Enable **/
#define RTC_MODE2_INTENSET_PER6		(1 << 6)
/** RTC_MODE2_INTENSET_PER5 Periodic Interval 5 Enable **/
#define RTC_MODE2_INTENSET_PER5		(1 << 5)
/** RTC_MODE2_INTENSET_PER4 Periodic Interval 4 Enable **/
#define RTC_MODE2_INTENSET_PER4		(1 << 4)
/** RTC_MODE2_INTENSET_PER3 Periodic Interval 3 Enable **/
#define RTC_MODE2_INTENSET_PER3		(1 << 3)
/** RTC_MODE2_INTENSET_PER2 Periodic Interval 2 Enable **/
#define RTC_MODE2_INTENSET_PER2		(1 << 2)
/** RTC_MODE2_INTENSET_PER1 Periodic Interval 1 Enable **/
#define RTC_MODE2_INTENSET_PER1		(1 << 1)
/** RTC_MODE2_INTENSET_PER0 Periodic Interval 0 Enable **/
#define RTC_MODE2_INTENSET_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_intflag MODE0INTFLAG MODE0 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE0_INTFLAG_OVF Overflow **/
#define RTC_MODE0_INTFLAG_OVF		(1 << 15)
/** RTC_MODE0_INTFLAG_TAMPER Tamper **/
#define RTC_MODE0_INTFLAG_TAMPER		(1 << 14)
/** RTC_MODE0_INTFLAG_CMP0 Compare 0 **/
#define RTC_MODE0_INTFLAG_CMP0		(1 << 8)
/** RTC_MODE0_INTFLAG_PER7 Periodic Interval 7 **/
#define RTC_MODE0_INTFLAG_PER7		(1 << 7)
/** RTC_MODE0_INTFLAG_PER6 Periodic Interval 6 **/
#define RTC_MODE0_INTFLAG_PER6		(1 << 6)
/** RTC_MODE0_INTFLAG_PER5 Periodic Interval 5 **/
#define RTC_MODE0_INTFLAG_PER5		(1 << 5)
/** RTC_MODE0_INTFLAG_PER4 Periodic Interval 4 **/
#define RTC_MODE0_INTFLAG_PER4		(1 << 4)
/** RTC_MODE0_INTFLAG_PER3 Periodic Interval 3 **/
#define RTC_MODE0_INTFLAG_PER3		(1 << 3)
/** RTC_MODE0_INTFLAG_PER2 Periodic Interval 2 **/
#define RTC_MODE0_INTFLAG_PER2		(1 << 2)
/** RTC_MODE0_INTFLAG_PER1 Periodic Interval 1 **/
#define RTC_MODE0_INTFLAG_PER1		(1 << 1)
/** RTC_MODE0_INTFLAG_PER0 Periodic Interval 0 **/
#define RTC_MODE0_INTFLAG_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_intflag MODE1INTFLAG MODE1 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE1_INTFLAG_OVF Overflow **/
#define RTC_MODE1_INTFLAG_OVF		(1 << 15)
/** RTC_MODE1_INTFLAG_TAMPER Tamper **/
#define RTC_MODE1_INTFLAG_TAMPER		(1 << 14)
/** RTC_MODE1_INTFLAG_CMP1 Compare 1 **/
#define RTC_MODE1_INTFLAG_CMP1		(1 << 9)
/** RTC_MODE1_INTFLAG_CMP0 Compare 0 **/
#define RTC_MODE1_INTFLAG_CMP0		(1 << 8)
/** RTC_MODE1_INTFLAG_PER7 Periodic Interval 7 **/
#define RTC_MODE1_INTFLAG_PER7		(1 << 7)
/** RTC_MODE1_INTFLAG_PER6 Periodic Interval 6 **/
#define RTC_MODE1_INTFLAG_PER6		(1 << 6)
/** RTC_MODE1_INTFLAG_PER5 Periodic Interval 5 **/
#define RTC_MODE1_INTFLAG_PER5		(1 << 5)
/** RTC_MODE1_INTFLAG_PER4 Periodic Interval 4 **/
#define RTC_MODE1_INTFLAG_PER4		(1 << 4)
/** RTC_MODE1_INTFLAG_PER3 Periodic Interval 3 **/
#define RTC_MODE1_INTFLAG_PER3		(1 << 3)
/** RTC_MODE1_INTFLAG_PER2 Periodic Interval 2 **/
#define RTC_MODE1_INTFLAG_PER2		(1 << 2)
/** RTC_MODE1_INTFLAG_PER1 Periodic Interval 1 **/
#define RTC_MODE1_INTFLAG_PER1		(1 << 1)
/** RTC_MODE1_INTFLAG_PER0 Periodic Interval 0 **/
#define RTC_MODE1_INTFLAG_PER0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_intflag MODE2INTFLAG MODE2 Interrupt Flag Status and Clear
@{*/

/** RTC_MODE2_INTFLAG_OVF Overflow **/
#define RTC_MODE2_INTFLAG_OVF		(1 << 15)
/** RTC_MODE2_INTFLAG_TAMPER Tamper **/
#define RTC_MODE2_INTFLAG_TAMPER		(1 << 14)
/** RTC_MODE2_INTFLAG_ALARM0 Alarm 0 **/
#define RTC_MODE2_INTFLAG_ALARM0		(1 << 8)
/** RTC_MODE2_INTFLAG_PER7 Periodic Interval 7 **/
#define RTC_MODE2_INTFLAG_PER7		(1 << 7)
/** RTC_MODE2_INTFLAG_PER6 Periodic Interval 6 **/
#define RTC_MODE2_INTFLAG_PER6		(1 << 6)
/** RTC_MODE2_INTFLAG_PER5 Periodic Interval 5 **/
#define RTC_MODE2_INTFLAG_PER5		(1 << 5)
/** RTC_MODE2_INTFLAG_PER4 Periodic Interval 4 **/
#define RTC_MODE2_INTFLAG_PER4		(1 << 4)
/** RTC_MODE2_INTFLAG_PER3 Periodic Interval 3 **/
#define RTC_MODE2_INTFLAG_PER3		(1 << 3)
/** RTC_MODE2_INTFLAG_PER2 Periodic Interval 2 **/
#define RTC_MODE2_INTFLAG_PER2		(1 << 2)
/** RTC_MODE2_INTFLAG_PER1 Periodic Interval 1 **/
#define RTC_MODE2_INTFLAG_PER1		(1 << 1)
/** RTC_MODE2_INTFLAG_PER0 Periodic Interval 0 **/
#define RTC_MODE2_INTFLAG_PER0		(1 << 0)

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

/** @defgroup rtc_mode0_syncbusy MODE0SYNCBUSY MODE0 Synchronization Busy Status
@{*/

/** RTC_MODE0_SYNCBUSY_GP1 General Purpose 1 Register Busy **/
#define RTC_MODE0_SYNCBUSY_GP1		(1 << 17)
/** RTC_MODE0_SYNCBUSY_GP0 General Purpose 0 Register Busy **/
#define RTC_MODE0_SYNCBUSY_GP0		(1 << 16)
/** RTC_MODE0_SYNCBUSY_COUNTSYNC Count Synchronization Enable Bit Busy **/
#define RTC_MODE0_SYNCBUSY_COUNTSYNC		(1 << 15)
/** RTC_MODE0_SYNCBUSY_COMP0 COMP 0 Register Busy **/
#define RTC_MODE0_SYNCBUSY_COMP0		(1 << 5)
/** RTC_MODE0_SYNCBUSY_COUNT COUNT Register Busy **/
#define RTC_MODE0_SYNCBUSY_COUNT		(1 << 3)
/** RTC_MODE0_SYNCBUSY_FREQCORR FREQCORR Register Busy **/
#define RTC_MODE0_SYNCBUSY_FREQCORR		(1 << 2)
/** RTC_MODE0_SYNCBUSY_ENABLE Enable Bit Busy **/
#define RTC_MODE0_SYNCBUSY_ENABLE		(1 << 1)
/** RTC_MODE0_SYNCBUSY_SWRST Software Reset Busy **/
#define RTC_MODE0_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_syncbusy MODE1SYNCBUSY MODE1 Synchronization Busy Status
@{*/

/** RTC_MODE1_SYNCBUSY_GP1 General Purpose 1 Register Busy **/
#define RTC_MODE1_SYNCBUSY_GP1		(1 << 17)
/** RTC_MODE1_SYNCBUSY_GP0 General Purpose 0 Register Busy **/
#define RTC_MODE1_SYNCBUSY_GP0		(1 << 16)
/** RTC_MODE1_SYNCBUSY_COUNTSYNC Count Synchronization Enable Bit Busy **/
#define RTC_MODE1_SYNCBUSY_COUNTSYNC		(1 << 15)
/** RTC_MODE1_SYNCBUSY_COMP1 COMP 1 Register Busy **/
#define RTC_MODE1_SYNCBUSY_COMP1		(1 << 6)
/** RTC_MODE1_SYNCBUSY_COMP0 COMP 0 Register Busy **/
#define RTC_MODE1_SYNCBUSY_COMP0		(1 << 5)
/** RTC_MODE1_SYNCBUSY_PER PER Register Busy **/
#define RTC_MODE1_SYNCBUSY_PER		(1 << 4)
/** RTC_MODE1_SYNCBUSY_COUNT COUNT Register Busy **/
#define RTC_MODE1_SYNCBUSY_COUNT		(1 << 3)
/** RTC_MODE1_SYNCBUSY_FREQCORR FREQCORR Register Busy **/
#define RTC_MODE1_SYNCBUSY_FREQCORR		(1 << 2)
/** RTC_MODE1_SYNCBUSY_ENABLE Enable Bit Busy **/
#define RTC_MODE1_SYNCBUSY_ENABLE		(1 << 1)
/** RTC_MODE1_SYNCBUSY_SWRST Software Reset Bit Busy **/
#define RTC_MODE1_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_syncbusy MODE2SYNCBUSY MODE2 Synchronization Busy Status
@{*/

/** RTC_MODE2_SYNCBUSY_GP1 General Purpose 1 Register Busy **/
#define RTC_MODE2_SYNCBUSY_GP1		(1 << 17)
/** RTC_MODE2_SYNCBUSY_GP0 General Purpose 0 Register Busy **/
#define RTC_MODE2_SYNCBUSY_GP0		(1 << 16)
/** RTC_MODE2_SYNCBUSY_CLOCKSYNC Clock Synchronization Enable Bit Busy **/
#define RTC_MODE2_SYNCBUSY_CLOCKSYNC		(1 << 15)
/** RTC_MODE2_SYNCBUSY_MASK0 MASK 0 Register Busy **/
#define RTC_MODE2_SYNCBUSY_MASK0		(1 << 11)
/** RTC_MODE2_SYNCBUSY_ALARM0 ALARM 0 Register Busy **/
#define RTC_MODE2_SYNCBUSY_ALARM0		(1 << 5)
/** RTC_MODE2_SYNCBUSY_CLOCK CLOCK Register Busy **/
#define RTC_MODE2_SYNCBUSY_CLOCK		(1 << 3)
/** RTC_MODE2_SYNCBUSY_FREQCORR FREQCORR Register Busy **/
#define RTC_MODE2_SYNCBUSY_FREQCORR		(1 << 2)
/** RTC_MODE2_SYNCBUSY_ENABLE Enable Bit Busy **/
#define RTC_MODE2_SYNCBUSY_ENABLE		(1 << 1)
/** RTC_MODE2_SYNCBUSY_SWRST Software Reset Bit Busy **/
#define RTC_MODE2_SYNCBUSY_SWRST		(1 << 0)

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

/** @defgroup rtc_mode0_comp[%s] MODE0COMP[%s] MODE0 Compare n Value
@{*/


#define RTC_MODE0_COMP[%s]_COMP_SHIFT		0
#define RTC_MODE0_COMP[%s]_COMP_MASK		0xffffffff
/** @defgroup rtc_mode0_comp[%s]_comp COMP Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_comp[%s] MODE1COMP[%s] MODE1 Compare n Value
@{*/


#define RTC_MODE1_COMP[%s]_COMP_SHIFT		0
#define RTC_MODE1_COMP[%s]_COMP_MASK		0xffff
/** @defgroup rtc_mode1_comp[%s]_comp COMP Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_mode2_alarm[0]_alarm MODE2MODE2ALARM[0]ALARM MODE2_ALARM Alarm n Value
@{*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_YEAR_SHIFT		26
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_YEAR_MASK		0x3f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_year YEAR Year
@{*/
/**@}*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_MONTH_SHIFT		22
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_MONTH_MASK		0x0f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_month MONTH Month
@{*/
/**@}*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_DAY_SHIFT		17
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_DAY_MASK		0x1f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_day DAY Day
@{*/
/**@}*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_HOUR_SHIFT		12
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_HOUR_MASK		0x1f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_hour HOUR Hour
@{*/
/**@}*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_MINUTE_SHIFT		6
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_MINUTE_MASK		0x3f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_minute MINUTE Minute
@{*/
/**@}*/


#define RTC_MODE2_MODE2_ALARM[0]_ALARM_SECOND_SHIFT		0
#define RTC_MODE2_MODE2_ALARM[0]_ALARM_SECOND_MASK		0x3f
/** @defgroup rtc_mode2_mode2_alarm[0]_alarm_second SECOND Second
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_mode2_alarm[0]_mask MODE2MODE2ALARM[0]MASK MODE2_ALARM Alarm n Mask
@{*/


#define RTC_MODE2_MODE2_ALARM[0]_MASK_SEL_SHIFT		0
#define RTC_MODE2_MODE2_ALARM[0]_MASK_SEL_MASK		0x07
/** @defgroup rtc_mode2_mode2_alarm[0]_mask_sel SEL Alarm Mask Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_gp[%s] MODE0GP[%s] General Purpose
@{*/


#define RTC_MODE0_GP[%s]_GP_SHIFT		0
#define RTC_MODE0_GP[%s]_GP_MASK		0xffffffff
/** @defgroup rtc_mode0_gp[%s]_gp GP General Purpose
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_gp[%s] MODE1GP[%s] General Purpose
@{*/


#define RTC_MODE1_GP[%s]_GP_SHIFT		0
#define RTC_MODE1_GP[%s]_GP_MASK		0xffffffff
/** @defgroup rtc_mode1_gp[%s]_gp GP General Purpose
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_gp[%s] MODE2GP[%s] General Purpose
@{*/


#define RTC_MODE2_GP[%s]_GP_SHIFT		0
#define RTC_MODE2_GP[%s]_GP_MASK		0xffffffff
/** @defgroup rtc_mode2_gp[%s]_gp GP General Purpose
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_tampctrl MODE0TAMPCTRL Tamper Control
@{*/

/** RTC_MODE0_TAMPCTRL_DEBNC3 Debouncer Enable 3 **/
#define RTC_MODE0_TAMPCTRL_DEBNC3		(1 << 27)
/** RTC_MODE0_TAMPCTRL_DEBNC2 Debouncer Enable 2 **/
#define RTC_MODE0_TAMPCTRL_DEBNC2		(1 << 26)
/** RTC_MODE0_TAMPCTRL_DEBNC1 Debouncer Enable 1 **/
#define RTC_MODE0_TAMPCTRL_DEBNC1		(1 << 25)
/** RTC_MODE0_TAMPCTRL_DEBNC0 Debouncer Enable 0 **/
#define RTC_MODE0_TAMPCTRL_DEBNC0		(1 << 24)
/** RTC_MODE0_TAMPCTRL_TAMLVL3 Tamper Level Select 3 **/
#define RTC_MODE0_TAMPCTRL_TAMLVL3		(1 << 19)
/** RTC_MODE0_TAMPCTRL_TAMLVL2 Tamper Level Select 2 **/
#define RTC_MODE0_TAMPCTRL_TAMLVL2		(1 << 18)
/** RTC_MODE0_TAMPCTRL_TAMLVL1 Tamper Level Select 1 **/
#define RTC_MODE0_TAMPCTRL_TAMLVL1		(1 << 17)
/** RTC_MODE0_TAMPCTRL_TAMLVL0 Tamper Level Select 0 **/
#define RTC_MODE0_TAMPCTRL_TAMLVL0		(1 << 16)

#define RTC_MODE0_TAMPCTRL_IN3ACT_SHIFT		6
#define RTC_MODE0_TAMPCTRL_IN3ACT_MASK		0x03
/** @defgroup rtc_mode0_tampctrl_in3act IN3ACT Tamper Input 3 Action
@{*/
/**@}*/


#define RTC_MODE0_TAMPCTRL_IN2ACT_SHIFT		4
#define RTC_MODE0_TAMPCTRL_IN2ACT_MASK		0x03
/** @defgroup rtc_mode0_tampctrl_in2act IN2ACT Tamper Input 2 Action
@{*/
/**@}*/


#define RTC_MODE0_TAMPCTRL_IN1ACT_SHIFT		2
#define RTC_MODE0_TAMPCTRL_IN1ACT_MASK		0x03
/** @defgroup rtc_mode0_tampctrl_in1act IN1ACT Tamper Input 1 Action
@{*/
/**@}*/


#define RTC_MODE0_TAMPCTRL_IN0ACT_SHIFT		0
#define RTC_MODE0_TAMPCTRL_IN0ACT_MASK		0x03
/** @defgroup rtc_mode0_tampctrl_in0act IN0ACT Tamper Input 0 Action
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_tampctrl MODE1TAMPCTRL Tamper Control
@{*/

/** RTC_MODE1_TAMPCTRL_DEBNC3 Debouncer Enable 3 **/
#define RTC_MODE1_TAMPCTRL_DEBNC3		(1 << 27)
/** RTC_MODE1_TAMPCTRL_DEBNC2 Debouncer Enable 2 **/
#define RTC_MODE1_TAMPCTRL_DEBNC2		(1 << 26)
/** RTC_MODE1_TAMPCTRL_DEBNC1 Debouncer Enable 1 **/
#define RTC_MODE1_TAMPCTRL_DEBNC1		(1 << 25)
/** RTC_MODE1_TAMPCTRL_DEBNC0 Debouncer Enable 0 **/
#define RTC_MODE1_TAMPCTRL_DEBNC0		(1 << 24)
/** RTC_MODE1_TAMPCTRL_TAMLVL3 Tamper Level Select 3 **/
#define RTC_MODE1_TAMPCTRL_TAMLVL3		(1 << 19)
/** RTC_MODE1_TAMPCTRL_TAMLVL2 Tamper Level Select 2 **/
#define RTC_MODE1_TAMPCTRL_TAMLVL2		(1 << 18)
/** RTC_MODE1_TAMPCTRL_TAMLVL1 Tamper Level Select 1 **/
#define RTC_MODE1_TAMPCTRL_TAMLVL1		(1 << 17)
/** RTC_MODE1_TAMPCTRL_TAMLVL0 Tamper Level Select 0 **/
#define RTC_MODE1_TAMPCTRL_TAMLVL0		(1 << 16)

#define RTC_MODE1_TAMPCTRL_IN3ACT_SHIFT		6
#define RTC_MODE1_TAMPCTRL_IN3ACT_MASK		0x03
/** @defgroup rtc_mode1_tampctrl_in3act IN3ACT Tamper Input 3 Action
@{*/
/**@}*/


#define RTC_MODE1_TAMPCTRL_IN2ACT_SHIFT		4
#define RTC_MODE1_TAMPCTRL_IN2ACT_MASK		0x03
/** @defgroup rtc_mode1_tampctrl_in2act IN2ACT Tamper Input 2 Action
@{*/
/**@}*/


#define RTC_MODE1_TAMPCTRL_IN1ACT_SHIFT		2
#define RTC_MODE1_TAMPCTRL_IN1ACT_MASK		0x03
/** @defgroup rtc_mode1_tampctrl_in1act IN1ACT Tamper Input 1 Action
@{*/
/**@}*/


#define RTC_MODE1_TAMPCTRL_IN0ACT_SHIFT		0
#define RTC_MODE1_TAMPCTRL_IN0ACT_MASK		0x03
/** @defgroup rtc_mode1_tampctrl_in0act IN0ACT Tamper Input 0 Action
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_tampctrl MODE2TAMPCTRL Tamper Control
@{*/

/** RTC_MODE2_TAMPCTRL_DEBNC3 Debouncer Enable 3 **/
#define RTC_MODE2_TAMPCTRL_DEBNC3		(1 << 27)
/** RTC_MODE2_TAMPCTRL_DEBNC2 Debouncer Enable 2 **/
#define RTC_MODE2_TAMPCTRL_DEBNC2		(1 << 26)
/** RTC_MODE2_TAMPCTRL_DEBNC1 Debouncer Enable 1 **/
#define RTC_MODE2_TAMPCTRL_DEBNC1		(1 << 25)
/** RTC_MODE2_TAMPCTRL_DEBNC0 Debouncer Enable 0 **/
#define RTC_MODE2_TAMPCTRL_DEBNC0		(1 << 24)
/** RTC_MODE2_TAMPCTRL_TAMLVL3 Tamper Level Select 3 **/
#define RTC_MODE2_TAMPCTRL_TAMLVL3		(1 << 19)
/** RTC_MODE2_TAMPCTRL_TAMLVL2 Tamper Level Select 2 **/
#define RTC_MODE2_TAMPCTRL_TAMLVL2		(1 << 18)
/** RTC_MODE2_TAMPCTRL_TAMLVL1 Tamper Level Select 1 **/
#define RTC_MODE2_TAMPCTRL_TAMLVL1		(1 << 17)
/** RTC_MODE2_TAMPCTRL_TAMLVL0 Tamper Level Select 0 **/
#define RTC_MODE2_TAMPCTRL_TAMLVL0		(1 << 16)

#define RTC_MODE2_TAMPCTRL_IN3ACT_SHIFT		6
#define RTC_MODE2_TAMPCTRL_IN3ACT_MASK		0x03
/** @defgroup rtc_mode2_tampctrl_in3act IN3ACT Tamper Input 3 Action
@{*/
/**@}*/


#define RTC_MODE2_TAMPCTRL_IN2ACT_SHIFT		4
#define RTC_MODE2_TAMPCTRL_IN2ACT_MASK		0x03
/** @defgroup rtc_mode2_tampctrl_in2act IN2ACT Tamper Input 2 Action
@{*/
/**@}*/


#define RTC_MODE2_TAMPCTRL_IN1ACT_SHIFT		2
#define RTC_MODE2_TAMPCTRL_IN1ACT_MASK		0x03
/** @defgroup rtc_mode2_tampctrl_in1act IN1ACT Tamper Input 1 Action
@{*/
/**@}*/


#define RTC_MODE2_TAMPCTRL_IN0ACT_SHIFT		0
#define RTC_MODE2_TAMPCTRL_IN0ACT_MASK		0x03
/** @defgroup rtc_mode2_tampctrl_in0act IN0ACT Tamper Input 0 Action
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_timestamp MODE0TIMESTAMP MODE0 Timestamp
@{*/


#define RTC_MODE0_TIMESTAMP_COUNT_SHIFT		0
#define RTC_MODE0_TIMESTAMP_COUNT_MASK		0xffffffff
/** @defgroup rtc_mode0_timestamp_count COUNT Count Timestamp Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode1_timestamp MODE1TIMESTAMP MODE1 Timestamp
@{*/


#define RTC_MODE1_TIMESTAMP_COUNT_SHIFT		0
#define RTC_MODE1_TIMESTAMP_COUNT_MASK		0xffff
/** @defgroup rtc_mode1_timestamp_count COUNT Count Timestamp Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode2_timestamp MODE2TIMESTAMP MODE2 Timestamp
@{*/


#define RTC_MODE2_TIMESTAMP_YEAR_SHIFT		26
#define RTC_MODE2_TIMESTAMP_YEAR_MASK		0x3f
/** @defgroup rtc_mode2_timestamp_year YEAR Year Timestamp Value
@{*/
/**@}*/


#define RTC_MODE2_TIMESTAMP_MONTH_SHIFT		22
#define RTC_MODE2_TIMESTAMP_MONTH_MASK		0x0f
/** @defgroup rtc_mode2_timestamp_month MONTH Month Timestamp Value
@{*/
/**@}*/


#define RTC_MODE2_TIMESTAMP_DAY_SHIFT		17
#define RTC_MODE2_TIMESTAMP_DAY_MASK		0x1f
/** @defgroup rtc_mode2_timestamp_day DAY Day Timestamp Value
@{*/
/**@}*/


#define RTC_MODE2_TIMESTAMP_HOUR_SHIFT		12
#define RTC_MODE2_TIMESTAMP_HOUR_MASK		0x1f
/** @defgroup rtc_mode2_timestamp_hour HOUR Hour Timestamp Value
@{*/
/**@}*/


#define RTC_MODE2_TIMESTAMP_MINUTE_SHIFT		6
#define RTC_MODE2_TIMESTAMP_MINUTE_MASK		0x3f
/** @defgroup rtc_mode2_timestamp_minute MINUTE Minute Timestamp Value
@{*/
/**@}*/


#define RTC_MODE2_TIMESTAMP_SECOND_SHIFT		0
#define RTC_MODE2_TIMESTAMP_SECOND_MASK		0x3f
/** @defgroup rtc_mode2_timestamp_second SECOND Second Timestamp Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_mode0_tampid MODE0TAMPID Tamper ID
@{*/

/** RTC_MODE0_TAMPID_TAMPEVT Tamper Event Detected **/
#define RTC_MODE0_TAMPID_TAMPEVT		(1 << 31)
/** RTC_MODE0_TAMPID_TAMPID3 Tamper Input 3 Detected **/
#define RTC_MODE0_TAMPID_TAMPID3		(1 << 3)
/** RTC_MODE0_TAMPID_TAMPID2 Tamper Input 2 Detected **/
#define RTC_MODE0_TAMPID_TAMPID2		(1 << 2)
/** RTC_MODE0_TAMPID_TAMPID1 Tamper Input 1 Detected **/
#define RTC_MODE0_TAMPID_TAMPID1		(1 << 1)
/** RTC_MODE0_TAMPID_TAMPID0 Tamper Input 0 Detected **/
#define RTC_MODE0_TAMPID_TAMPID0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_tampid MODE1TAMPID Tamper ID
@{*/

/** RTC_MODE1_TAMPID_TAMPEVT Tamper Event Detected **/
#define RTC_MODE1_TAMPID_TAMPEVT		(1 << 31)
/** RTC_MODE1_TAMPID_TAMPID3 Tamper Input 3 Detected **/
#define RTC_MODE1_TAMPID_TAMPID3		(1 << 3)
/** RTC_MODE1_TAMPID_TAMPID2 Tamper Input 2 Detected **/
#define RTC_MODE1_TAMPID_TAMPID2		(1 << 2)
/** RTC_MODE1_TAMPID_TAMPID1 Tamper Input 1 Detected **/
#define RTC_MODE1_TAMPID_TAMPID1		(1 << 1)
/** RTC_MODE1_TAMPID_TAMPID0 Tamper Input 0 Detected **/
#define RTC_MODE1_TAMPID_TAMPID0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_tampid MODE2TAMPID Tamper ID
@{*/

/** RTC_MODE2_TAMPID_TAMPEVT Tamper Event Detected **/
#define RTC_MODE2_TAMPID_TAMPEVT		(1 << 31)
/** RTC_MODE2_TAMPID_TAMPID3 Tamper Input 3 Detected **/
#define RTC_MODE2_TAMPID_TAMPID3		(1 << 3)
/** RTC_MODE2_TAMPID_TAMPID2 Tamper Input 2 Detected **/
#define RTC_MODE2_TAMPID_TAMPID2		(1 << 2)
/** RTC_MODE2_TAMPID_TAMPID1 Tamper Input 1 Detected **/
#define RTC_MODE2_TAMPID_TAMPID1		(1 << 1)
/** RTC_MODE2_TAMPID_TAMPID0 Tamper Input 0 Detected **/
#define RTC_MODE2_TAMPID_TAMPID0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode0_tampctrlb MODE0TAMPCTRLB Tamper Control B
@{*/

/** RTC_MODE0_TAMPCTRLB_ALSI3 Active Layer Select Internal 3 **/
#define RTC_MODE0_TAMPCTRLB_ALSI3		(1 << 3)
/** RTC_MODE0_TAMPCTRLB_ALSI2 Active Layer Select Internal 2 **/
#define RTC_MODE0_TAMPCTRLB_ALSI2		(1 << 2)
/** RTC_MODE0_TAMPCTRLB_ALSI1 Active Layer Select Internal 1 **/
#define RTC_MODE0_TAMPCTRLB_ALSI1		(1 << 1)
/** RTC_MODE0_TAMPCTRLB_ALSI0 Active Layer Select Internal 0 **/
#define RTC_MODE0_TAMPCTRLB_ALSI0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode1_tampctrlb MODE1TAMPCTRLB Tamper Control B
@{*/

/** RTC_MODE1_TAMPCTRLB_ALSI3 Active Layer Select Internal 3 **/
#define RTC_MODE1_TAMPCTRLB_ALSI3		(1 << 3)
/** RTC_MODE1_TAMPCTRLB_ALSI2 Active Layer Select Internal 2 **/
#define RTC_MODE1_TAMPCTRLB_ALSI2		(1 << 2)
/** RTC_MODE1_TAMPCTRLB_ALSI1 Active Layer Select Internal 1 **/
#define RTC_MODE1_TAMPCTRLB_ALSI1		(1 << 1)
/** RTC_MODE1_TAMPCTRLB_ALSI0 Active Layer Select Internal 0 **/
#define RTC_MODE1_TAMPCTRLB_ALSI0		(1 << 0)

/**@}*/

/** @defgroup rtc_mode2_tampctrlb MODE2TAMPCTRLB Tamper Control B
@{*/

/** RTC_MODE2_TAMPCTRLB_ALSI3 Active Layer Select Internal 3 **/
#define RTC_MODE2_TAMPCTRLB_ALSI3		(1 << 3)
/** RTC_MODE2_TAMPCTRLB_ALSI2 Active Layer Select Internal 2 **/
#define RTC_MODE2_TAMPCTRLB_ALSI2		(1 << 2)
/** RTC_MODE2_TAMPCTRLB_ALSI1 Active Layer Select Internal 1 **/
#define RTC_MODE2_TAMPCTRLB_ALSI1		(1 << 1)
/** RTC_MODE2_TAMPCTRLB_ALSI0 Active Layer Select Internal 0 **/
#define RTC_MODE2_TAMPCTRLB_ALSI0		(1 << 0)

/**@}*/

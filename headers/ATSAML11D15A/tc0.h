#pragma once 

/* --- TC0: Basic Timer Counter ------------------------------------- */

/** @defgroup tc0_registers Basic Timer Counter Register
@{*/

/** TC0_COUNT8_CTRLA Control A **/
#define TC0_COUNT8_CTRLA			MMIO32(TC0_BASE + 0x00)
/** TC0_COUNT16_CTRLA Control A **/
#define TC0_COUNT16_CTRLA			MMIO32(TC0_BASE + 0x00)
/** TC0_COUNT32_CTRLA Control A **/
#define TC0_COUNT32_CTRLA			MMIO32(TC0_BASE + 0x00)
/** TC0_COUNT8_CTRLBCLR Control B Clear **/
#define TC0_COUNT8_CTRLBCLR			MMIO32(TC0_BASE + 0x04)
/** TC0_COUNT16_CTRLBCLR Control B Clear **/
#define TC0_COUNT16_CTRLBCLR			MMIO32(TC0_BASE + 0x04)
/** TC0_COUNT32_CTRLBCLR Control B Clear **/
#define TC0_COUNT32_CTRLBCLR			MMIO32(TC0_BASE + 0x04)
/** TC0_COUNT8_CTRLBSET Control B Set **/
#define TC0_COUNT8_CTRLBSET			MMIO32(TC0_BASE + 0x05)
/** TC0_COUNT16_CTRLBSET Control B Set **/
#define TC0_COUNT16_CTRLBSET			MMIO32(TC0_BASE + 0x05)
/** TC0_COUNT32_CTRLBSET Control B Set **/
#define TC0_COUNT32_CTRLBSET			MMIO32(TC0_BASE + 0x05)
/** TC0_COUNT8_EVCTRL Event Control **/
#define TC0_COUNT8_EVCTRL			MMIO32(TC0_BASE + 0x06)
/** TC0_COUNT16_EVCTRL Event Control **/
#define TC0_COUNT16_EVCTRL			MMIO32(TC0_BASE + 0x06)
/** TC0_COUNT32_EVCTRL Event Control **/
#define TC0_COUNT32_EVCTRL			MMIO32(TC0_BASE + 0x06)
/** TC0_COUNT8_INTENCLR Interrupt Enable Clear **/
#define TC0_COUNT8_INTENCLR			MMIO32(TC0_BASE + 0x08)
/** TC0_COUNT16_INTENCLR Interrupt Enable Clear **/
#define TC0_COUNT16_INTENCLR			MMIO32(TC0_BASE + 0x08)
/** TC0_COUNT32_INTENCLR Interrupt Enable Clear **/
#define TC0_COUNT32_INTENCLR			MMIO32(TC0_BASE + 0x08)
/** TC0_COUNT8_INTENSET Interrupt Enable Set **/
#define TC0_COUNT8_INTENSET			MMIO32(TC0_BASE + 0x09)
/** TC0_COUNT16_INTENSET Interrupt Enable Set **/
#define TC0_COUNT16_INTENSET			MMIO32(TC0_BASE + 0x09)
/** TC0_COUNT32_INTENSET Interrupt Enable Set **/
#define TC0_COUNT32_INTENSET			MMIO32(TC0_BASE + 0x09)
/** TC0_COUNT8_INTFLAG Interrupt Flag Status and Clear **/
#define TC0_COUNT8_INTFLAG			MMIO32(TC0_BASE + 0x0a)
/** TC0_COUNT16_INTFLAG Interrupt Flag Status and Clear **/
#define TC0_COUNT16_INTFLAG			MMIO32(TC0_BASE + 0x0a)
/** TC0_COUNT32_INTFLAG Interrupt Flag Status and Clear **/
#define TC0_COUNT32_INTFLAG			MMIO32(TC0_BASE + 0x0a)
/** TC0_COUNT8_STATUS Status **/
#define TC0_COUNT8_STATUS			MMIO32(TC0_BASE + 0x0b)
/** TC0_COUNT16_STATUS Status **/
#define TC0_COUNT16_STATUS			MMIO32(TC0_BASE + 0x0b)
/** TC0_COUNT32_STATUS Status **/
#define TC0_COUNT32_STATUS			MMIO32(TC0_BASE + 0x0b)
/** TC0_COUNT8_WAVE Waveform Generation Control **/
#define TC0_COUNT8_WAVE			MMIO32(TC0_BASE + 0x0c)
/** TC0_COUNT16_WAVE Waveform Generation Control **/
#define TC0_COUNT16_WAVE			MMIO32(TC0_BASE + 0x0c)
/** TC0_COUNT32_WAVE Waveform Generation Control **/
#define TC0_COUNT32_WAVE			MMIO32(TC0_BASE + 0x0c)
/** TC0_COUNT8_DRVCTRL Control C **/
#define TC0_COUNT8_DRVCTRL			MMIO32(TC0_BASE + 0x0d)
/** TC0_COUNT16_DRVCTRL Control C **/
#define TC0_COUNT16_DRVCTRL			MMIO32(TC0_BASE + 0x0d)
/** TC0_COUNT32_DRVCTRL Control C **/
#define TC0_COUNT32_DRVCTRL			MMIO32(TC0_BASE + 0x0d)
/** TC0_COUNT8_DBGCTRL Debug Control **/
#define TC0_COUNT8_DBGCTRL			MMIO32(TC0_BASE + 0x0f)
/** TC0_COUNT16_DBGCTRL Debug Control **/
#define TC0_COUNT16_DBGCTRL			MMIO32(TC0_BASE + 0x0f)
/** TC0_COUNT32_DBGCTRL Debug Control **/
#define TC0_COUNT32_DBGCTRL			MMIO32(TC0_BASE + 0x0f)
/** TC0_COUNT8_SYNCBUSY Synchronization Status **/
#define TC0_COUNT8_SYNCBUSY			MMIO32(TC0_BASE + 0x10)
/** TC0_COUNT16_SYNCBUSY Synchronization Status **/
#define TC0_COUNT16_SYNCBUSY			MMIO32(TC0_BASE + 0x10)
/** TC0_COUNT32_SYNCBUSY Synchronization Status **/
#define TC0_COUNT32_SYNCBUSY			MMIO32(TC0_BASE + 0x10)
/** TC0_COUNT8_COUNT COUNT8 Count **/
#define TC0_COUNT8_COUNT			MMIO32(TC0_BASE + 0x14)
/** TC0_COUNT16_COUNT COUNT16 Count **/
#define TC0_COUNT16_COUNT			MMIO32(TC0_BASE + 0x14)
/** TC0_COUNT32_COUNT COUNT32 Count **/
#define TC0_COUNT32_COUNT			MMIO32(TC0_BASE + 0x14)
/** TC0_COUNT32_PER COUNT32 Period **/
#define TC0_COUNT32_PER			MMIO32(TC0_BASE + 0x18)
/** TC0_COUNT16_PER COUNT16 Period **/
#define TC0_COUNT16_PER			MMIO32(TC0_BASE + 0x1a)
/** TC0_COUNT8_PER COUNT8 Period **/
#define TC0_COUNT8_PER			MMIO32(TC0_BASE + 0x1b)
/** TC0_COUNT8_CC[%s] COUNT8 Compare and Capture **/
#define TC0_COUNT8_CC[%s]			MMIO32(TC0_BASE + 0x1c)
/** TC0_COUNT16_CC[%s] COUNT16 Compare and Capture **/
#define TC0_COUNT16_CC[%s]			MMIO32(TC0_BASE + 0x1c)
/** TC0_COUNT32_CC[%s] COUNT32 Compare and Capture **/
#define TC0_COUNT32_CC[%s]			MMIO32(TC0_BASE + 0x1c)
/** TC0_COUNT32_PERBUF COUNT32 Period Buffer **/
#define TC0_COUNT32_PERBUF			MMIO32(TC0_BASE + 0x2c)
/** TC0_COUNT16_PERBUF COUNT16 Period Buffer **/
#define TC0_COUNT16_PERBUF			MMIO32(TC0_BASE + 0x2e)
/** TC0_COUNT8_PERBUF COUNT8 Period Buffer **/
#define TC0_COUNT8_PERBUF			MMIO32(TC0_BASE + 0x2f)
/** TC0_COUNT8_CCBUF[%s] COUNT8 Compare and Capture Buffer **/
#define TC0_COUNT8_CCBUF[%s]			MMIO32(TC0_BASE + 0x30)
/** TC0_COUNT16_CCBUF[%s] COUNT16 Compare and Capture Buffer **/
#define TC0_COUNT16_CCBUF[%s]			MMIO32(TC0_BASE + 0x30)
/** TC0_COUNT32_CCBUF[%s] COUNT32 Compare and Capture Buffer **/
#define TC0_COUNT32_CCBUF[%s]			MMIO32(TC0_BASE + 0x30)

/**@}*/


/** @defgroup tc0_count8_ctrla COUNT8CTRLA Control A
@{*/


#define TC0_COUNT8_CTRLA_CAPTMODE1_SHIFT		27
#define TC0_COUNT8_CTRLA_CAPTMODE1_MASK		0x03
/** @defgroup tc0_count8_ctrla_captmode1 CAPTMODE1 Capture mode Channel 1
@{*/
/**@}*/


#define TC0_COUNT8_CTRLA_CAPTMODE0_SHIFT		24
#define TC0_COUNT8_CTRLA_CAPTMODE0_MASK		0x03
/** @defgroup tc0_count8_ctrla_captmode0 CAPTMODE0 Capture Mode Channel 0
@{*/
/**@}*/

/** TC0_COUNT8_CTRLA_COPEN1 Capture On Pin 1 Enable **/
#define TC0_COUNT8_CTRLA_COPEN1		(1 << 21)
/** TC0_COUNT8_CTRLA_COPEN0 Capture On Pin 0 Enable **/
#define TC0_COUNT8_CTRLA_COPEN0		(1 << 20)
/** TC0_COUNT8_CTRLA_CAPTEN1 Capture Channel 1 Enable **/
#define TC0_COUNT8_CTRLA_CAPTEN1		(1 << 17)
/** TC0_COUNT8_CTRLA_CAPTEN0 Capture Channel 0 Enable **/
#define TC0_COUNT8_CTRLA_CAPTEN0		(1 << 16)
/** TC0_COUNT8_CTRLA_ALOCK Auto Lock **/
#define TC0_COUNT8_CTRLA_ALOCK		(1 << 11)

#define TC0_COUNT8_CTRLA_PRESCALER_SHIFT		8
#define TC0_COUNT8_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc0_count8_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** TC0_COUNT8_CTRLA_ONDEMAND Clock On Demand **/
#define TC0_COUNT8_CTRLA_ONDEMAND		(1 << 7)
/** TC0_COUNT8_CTRLA_RUNSTDBY Run during Standby **/
#define TC0_COUNT8_CTRLA_RUNSTDBY		(1 << 6)

#define TC0_COUNT8_CTRLA_PRESCSYNC_SHIFT		4
#define TC0_COUNT8_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc0_count8_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/


#define TC0_COUNT8_CTRLA_MODE_SHIFT		2
#define TC0_COUNT8_CTRLA_MODE_MASK		0x03
/** @defgroup tc0_count8_ctrla_mode MODE Timer Counter Mode
@{*/
/**@}*/

/** TC0_COUNT8_CTRLA_ENABLE Enable **/
#define TC0_COUNT8_CTRLA_ENABLE		(1 << 1)
/** TC0_COUNT8_CTRLA_SWRST Software Reset **/
#define TC0_COUNT8_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_ctrla COUNT16CTRLA Control A
@{*/


#define TC0_COUNT16_CTRLA_CAPTMODE1_SHIFT		27
#define TC0_COUNT16_CTRLA_CAPTMODE1_MASK		0x03
/** @defgroup tc0_count16_ctrla_captmode1 CAPTMODE1 Capture mode Channel 1
@{*/
/**@}*/


#define TC0_COUNT16_CTRLA_CAPTMODE0_SHIFT		24
#define TC0_COUNT16_CTRLA_CAPTMODE0_MASK		0x03
/** @defgroup tc0_count16_ctrla_captmode0 CAPTMODE0 Capture Mode Channel 0
@{*/
/**@}*/

/** TC0_COUNT16_CTRLA_COPEN1 Capture On Pin 1 Enable **/
#define TC0_COUNT16_CTRLA_COPEN1		(1 << 21)
/** TC0_COUNT16_CTRLA_COPEN0 Capture On Pin 0 Enable **/
#define TC0_COUNT16_CTRLA_COPEN0		(1 << 20)
/** TC0_COUNT16_CTRLA_CAPTEN1 Capture Channel 1 Enable **/
#define TC0_COUNT16_CTRLA_CAPTEN1		(1 << 17)
/** TC0_COUNT16_CTRLA_CAPTEN0 Capture Channel 0 Enable **/
#define TC0_COUNT16_CTRLA_CAPTEN0		(1 << 16)
/** TC0_COUNT16_CTRLA_ALOCK Auto Lock **/
#define TC0_COUNT16_CTRLA_ALOCK		(1 << 11)

#define TC0_COUNT16_CTRLA_PRESCALER_SHIFT		8
#define TC0_COUNT16_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc0_count16_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** TC0_COUNT16_CTRLA_ONDEMAND Clock On Demand **/
#define TC0_COUNT16_CTRLA_ONDEMAND		(1 << 7)
/** TC0_COUNT16_CTRLA_RUNSTDBY Run during Standby **/
#define TC0_COUNT16_CTRLA_RUNSTDBY		(1 << 6)

#define TC0_COUNT16_CTRLA_PRESCSYNC_SHIFT		4
#define TC0_COUNT16_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc0_count16_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/


#define TC0_COUNT16_CTRLA_MODE_SHIFT		2
#define TC0_COUNT16_CTRLA_MODE_MASK		0x03
/** @defgroup tc0_count16_ctrla_mode MODE Timer Counter Mode
@{*/
/**@}*/

/** TC0_COUNT16_CTRLA_ENABLE Enable **/
#define TC0_COUNT16_CTRLA_ENABLE		(1 << 1)
/** TC0_COUNT16_CTRLA_SWRST Software Reset **/
#define TC0_COUNT16_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_ctrla COUNT32CTRLA Control A
@{*/


#define TC0_COUNT32_CTRLA_CAPTMODE1_SHIFT		27
#define TC0_COUNT32_CTRLA_CAPTMODE1_MASK		0x03
/** @defgroup tc0_count32_ctrla_captmode1 CAPTMODE1 Capture mode Channel 1
@{*/
/**@}*/


#define TC0_COUNT32_CTRLA_CAPTMODE0_SHIFT		24
#define TC0_COUNT32_CTRLA_CAPTMODE0_MASK		0x03
/** @defgroup tc0_count32_ctrla_captmode0 CAPTMODE0 Capture Mode Channel 0
@{*/
/**@}*/

/** TC0_COUNT32_CTRLA_COPEN1 Capture On Pin 1 Enable **/
#define TC0_COUNT32_CTRLA_COPEN1		(1 << 21)
/** TC0_COUNT32_CTRLA_COPEN0 Capture On Pin 0 Enable **/
#define TC0_COUNT32_CTRLA_COPEN0		(1 << 20)
/** TC0_COUNT32_CTRLA_CAPTEN1 Capture Channel 1 Enable **/
#define TC0_COUNT32_CTRLA_CAPTEN1		(1 << 17)
/** TC0_COUNT32_CTRLA_CAPTEN0 Capture Channel 0 Enable **/
#define TC0_COUNT32_CTRLA_CAPTEN0		(1 << 16)
/** TC0_COUNT32_CTRLA_ALOCK Auto Lock **/
#define TC0_COUNT32_CTRLA_ALOCK		(1 << 11)

#define TC0_COUNT32_CTRLA_PRESCALER_SHIFT		8
#define TC0_COUNT32_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc0_count32_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/

/** TC0_COUNT32_CTRLA_ONDEMAND Clock On Demand **/
#define TC0_COUNT32_CTRLA_ONDEMAND		(1 << 7)
/** TC0_COUNT32_CTRLA_RUNSTDBY Run during Standby **/
#define TC0_COUNT32_CTRLA_RUNSTDBY		(1 << 6)

#define TC0_COUNT32_CTRLA_PRESCSYNC_SHIFT		4
#define TC0_COUNT32_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc0_count32_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/


#define TC0_COUNT32_CTRLA_MODE_SHIFT		2
#define TC0_COUNT32_CTRLA_MODE_MASK		0x03
/** @defgroup tc0_count32_ctrla_mode MODE Timer Counter Mode
@{*/
/**@}*/

/** TC0_COUNT32_CTRLA_ENABLE Enable **/
#define TC0_COUNT32_CTRLA_ENABLE		(1 << 1)
/** TC0_COUNT32_CTRLA_SWRST Software Reset **/
#define TC0_COUNT32_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_ctrlbclr COUNT8CTRLBCLR Control B Clear
@{*/


#define TC0_COUNT8_CTRLBCLR_CMD_SHIFT		5
#define TC0_COUNT8_CTRLBCLR_CMD_MASK		0x07
/** @defgroup tc0_count8_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT8_CTRLBCLR_ONESHOT One-Shot on Counter **/
#define TC0_COUNT8_CTRLBCLR_ONESHOT		(1 << 2)
/** TC0_COUNT8_CTRLBCLR_LUPD Lock Update **/
#define TC0_COUNT8_CTRLBCLR_LUPD		(1 << 1)
/** TC0_COUNT8_CTRLBCLR_DIR Counter Direction **/
#define TC0_COUNT8_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_ctrlbclr COUNT16CTRLBCLR Control B Clear
@{*/


#define TC0_COUNT16_CTRLBCLR_CMD_SHIFT		5
#define TC0_COUNT16_CTRLBCLR_CMD_MASK		0x07
/** @defgroup tc0_count16_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT16_CTRLBCLR_ONESHOT One-Shot on Counter **/
#define TC0_COUNT16_CTRLBCLR_ONESHOT		(1 << 2)
/** TC0_COUNT16_CTRLBCLR_LUPD Lock Update **/
#define TC0_COUNT16_CTRLBCLR_LUPD		(1 << 1)
/** TC0_COUNT16_CTRLBCLR_DIR Counter Direction **/
#define TC0_COUNT16_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_ctrlbclr COUNT32CTRLBCLR Control B Clear
@{*/


#define TC0_COUNT32_CTRLBCLR_CMD_SHIFT		5
#define TC0_COUNT32_CTRLBCLR_CMD_MASK		0x07
/** @defgroup tc0_count32_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT32_CTRLBCLR_ONESHOT One-Shot on Counter **/
#define TC0_COUNT32_CTRLBCLR_ONESHOT		(1 << 2)
/** TC0_COUNT32_CTRLBCLR_LUPD Lock Update **/
#define TC0_COUNT32_CTRLBCLR_LUPD		(1 << 1)
/** TC0_COUNT32_CTRLBCLR_DIR Counter Direction **/
#define TC0_COUNT32_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_ctrlbset COUNT8CTRLBSET Control B Set
@{*/


#define TC0_COUNT8_CTRLBSET_CMD_SHIFT		5
#define TC0_COUNT8_CTRLBSET_CMD_MASK		0x07
/** @defgroup tc0_count8_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT8_CTRLBSET_ONESHOT One-Shot on Counter **/
#define TC0_COUNT8_CTRLBSET_ONESHOT		(1 << 2)
/** TC0_COUNT8_CTRLBSET_LUPD Lock Update **/
#define TC0_COUNT8_CTRLBSET_LUPD		(1 << 1)
/** TC0_COUNT8_CTRLBSET_DIR Counter Direction **/
#define TC0_COUNT8_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_ctrlbset COUNT16CTRLBSET Control B Set
@{*/


#define TC0_COUNT16_CTRLBSET_CMD_SHIFT		5
#define TC0_COUNT16_CTRLBSET_CMD_MASK		0x07
/** @defgroup tc0_count16_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT16_CTRLBSET_ONESHOT One-Shot on Counter **/
#define TC0_COUNT16_CTRLBSET_ONESHOT		(1 << 2)
/** TC0_COUNT16_CTRLBSET_LUPD Lock Update **/
#define TC0_COUNT16_CTRLBSET_LUPD		(1 << 1)
/** TC0_COUNT16_CTRLBSET_DIR Counter Direction **/
#define TC0_COUNT16_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_ctrlbset COUNT32CTRLBSET Control B Set
@{*/


#define TC0_COUNT32_CTRLBSET_CMD_SHIFT		5
#define TC0_COUNT32_CTRLBSET_CMD_MASK		0x07
/** @defgroup tc0_count32_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC0_COUNT32_CTRLBSET_ONESHOT One-Shot on Counter **/
#define TC0_COUNT32_CTRLBSET_ONESHOT		(1 << 2)
/** TC0_COUNT32_CTRLBSET_LUPD Lock Update **/
#define TC0_COUNT32_CTRLBSET_LUPD		(1 << 1)
/** TC0_COUNT32_CTRLBSET_DIR Counter Direction **/
#define TC0_COUNT32_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_evctrl COUNT8EVCTRL Event Control
@{*/

/** TC0_COUNT8_EVCTRL_MCEO1 MC Event Output Enable 1 **/
#define TC0_COUNT8_EVCTRL_MCEO1		(1 << 13)
/** TC0_COUNT8_EVCTRL_MCEO0 MC Event Output Enable 0 **/
#define TC0_COUNT8_EVCTRL_MCEO0		(1 << 12)
/** TC0_COUNT8_EVCTRL_OVFEO Event Output Enable **/
#define TC0_COUNT8_EVCTRL_OVFEO		(1 << 8)
/** TC0_COUNT8_EVCTRL_TCEI TC Event Enable **/
#define TC0_COUNT8_EVCTRL_TCEI		(1 << 5)
/** TC0_COUNT8_EVCTRL_TCINV TC Event Input Polarity **/
#define TC0_COUNT8_EVCTRL_TCINV		(1 << 4)

#define TC0_COUNT8_EVCTRL_EVACT_SHIFT		0
#define TC0_COUNT8_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc0_count8_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_evctrl COUNT16EVCTRL Event Control
@{*/

/** TC0_COUNT16_EVCTRL_MCEO1 MC Event Output Enable 1 **/
#define TC0_COUNT16_EVCTRL_MCEO1		(1 << 13)
/** TC0_COUNT16_EVCTRL_MCEO0 MC Event Output Enable 0 **/
#define TC0_COUNT16_EVCTRL_MCEO0		(1 << 12)
/** TC0_COUNT16_EVCTRL_OVFEO Event Output Enable **/
#define TC0_COUNT16_EVCTRL_OVFEO		(1 << 8)
/** TC0_COUNT16_EVCTRL_TCEI TC Event Enable **/
#define TC0_COUNT16_EVCTRL_TCEI		(1 << 5)
/** TC0_COUNT16_EVCTRL_TCINV TC Event Input Polarity **/
#define TC0_COUNT16_EVCTRL_TCINV		(1 << 4)

#define TC0_COUNT16_EVCTRL_EVACT_SHIFT		0
#define TC0_COUNT16_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc0_count16_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_evctrl COUNT32EVCTRL Event Control
@{*/

/** TC0_COUNT32_EVCTRL_MCEO1 MC Event Output Enable 1 **/
#define TC0_COUNT32_EVCTRL_MCEO1		(1 << 13)
/** TC0_COUNT32_EVCTRL_MCEO0 MC Event Output Enable 0 **/
#define TC0_COUNT32_EVCTRL_MCEO0		(1 << 12)
/** TC0_COUNT32_EVCTRL_OVFEO Event Output Enable **/
#define TC0_COUNT32_EVCTRL_OVFEO		(1 << 8)
/** TC0_COUNT32_EVCTRL_TCEI TC Event Enable **/
#define TC0_COUNT32_EVCTRL_TCEI		(1 << 5)
/** TC0_COUNT32_EVCTRL_TCINV TC Event Input Polarity **/
#define TC0_COUNT32_EVCTRL_TCINV		(1 << 4)

#define TC0_COUNT32_EVCTRL_EVACT_SHIFT		0
#define TC0_COUNT32_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc0_count32_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_intenclr COUNT8INTENCLR Interrupt Enable Clear
@{*/

/** TC0_COUNT8_INTENCLR_MC1 MC Interrupt Disable 1 **/
#define TC0_COUNT8_INTENCLR_MC1		(1 << 5)
/** TC0_COUNT8_INTENCLR_MC0 MC Interrupt Disable 0 **/
#define TC0_COUNT8_INTENCLR_MC0		(1 << 4)
/** TC0_COUNT8_INTENCLR_ERR ERR Interrupt Disable **/
#define TC0_COUNT8_INTENCLR_ERR		(1 << 1)
/** TC0_COUNT8_INTENCLR_OVF OVF Interrupt Disable **/
#define TC0_COUNT8_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_intenclr COUNT16INTENCLR Interrupt Enable Clear
@{*/

/** TC0_COUNT16_INTENCLR_MC1 MC Interrupt Disable 1 **/
#define TC0_COUNT16_INTENCLR_MC1		(1 << 5)
/** TC0_COUNT16_INTENCLR_MC0 MC Interrupt Disable 0 **/
#define TC0_COUNT16_INTENCLR_MC0		(1 << 4)
/** TC0_COUNT16_INTENCLR_ERR ERR Interrupt Disable **/
#define TC0_COUNT16_INTENCLR_ERR		(1 << 1)
/** TC0_COUNT16_INTENCLR_OVF OVF Interrupt Disable **/
#define TC0_COUNT16_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_intenclr COUNT32INTENCLR Interrupt Enable Clear
@{*/

/** TC0_COUNT32_INTENCLR_MC1 MC Interrupt Disable 1 **/
#define TC0_COUNT32_INTENCLR_MC1		(1 << 5)
/** TC0_COUNT32_INTENCLR_MC0 MC Interrupt Disable 0 **/
#define TC0_COUNT32_INTENCLR_MC0		(1 << 4)
/** TC0_COUNT32_INTENCLR_ERR ERR Interrupt Disable **/
#define TC0_COUNT32_INTENCLR_ERR		(1 << 1)
/** TC0_COUNT32_INTENCLR_OVF OVF Interrupt Disable **/
#define TC0_COUNT32_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_intenset COUNT8INTENSET Interrupt Enable Set
@{*/

/** TC0_COUNT8_INTENSET_MC1 MC Interrupt Enable 1 **/
#define TC0_COUNT8_INTENSET_MC1		(1 << 5)
/** TC0_COUNT8_INTENSET_MC0 MC Interrupt Enable 0 **/
#define TC0_COUNT8_INTENSET_MC0		(1 << 4)
/** TC0_COUNT8_INTENSET_ERR ERR Interrupt Enable **/
#define TC0_COUNT8_INTENSET_ERR		(1 << 1)
/** TC0_COUNT8_INTENSET_OVF OVF Interrupt Enable **/
#define TC0_COUNT8_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_intenset COUNT16INTENSET Interrupt Enable Set
@{*/

/** TC0_COUNT16_INTENSET_MC1 MC Interrupt Enable 1 **/
#define TC0_COUNT16_INTENSET_MC1		(1 << 5)
/** TC0_COUNT16_INTENSET_MC0 MC Interrupt Enable 0 **/
#define TC0_COUNT16_INTENSET_MC0		(1 << 4)
/** TC0_COUNT16_INTENSET_ERR ERR Interrupt Enable **/
#define TC0_COUNT16_INTENSET_ERR		(1 << 1)
/** TC0_COUNT16_INTENSET_OVF OVF Interrupt Enable **/
#define TC0_COUNT16_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_intenset COUNT32INTENSET Interrupt Enable Set
@{*/

/** TC0_COUNT32_INTENSET_MC1 MC Interrupt Enable 1 **/
#define TC0_COUNT32_INTENSET_MC1		(1 << 5)
/** TC0_COUNT32_INTENSET_MC0 MC Interrupt Enable 0 **/
#define TC0_COUNT32_INTENSET_MC0		(1 << 4)
/** TC0_COUNT32_INTENSET_ERR ERR Interrupt Enable **/
#define TC0_COUNT32_INTENSET_ERR		(1 << 1)
/** TC0_COUNT32_INTENSET_OVF OVF Interrupt Enable **/
#define TC0_COUNT32_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_intflag COUNT8INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC0_COUNT8_INTFLAG_MC1 MC Interrupt Flag 1 **/
#define TC0_COUNT8_INTFLAG_MC1		(1 << 5)
/** TC0_COUNT8_INTFLAG_MC0 MC Interrupt Flag 0 **/
#define TC0_COUNT8_INTFLAG_MC0		(1 << 4)
/** TC0_COUNT8_INTFLAG_ERR ERR Interrupt Flag **/
#define TC0_COUNT8_INTFLAG_ERR		(1 << 1)
/** TC0_COUNT8_INTFLAG_OVF OVF Interrupt Flag **/
#define TC0_COUNT8_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_intflag COUNT16INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC0_COUNT16_INTFLAG_MC1 MC Interrupt Flag 1 **/
#define TC0_COUNT16_INTFLAG_MC1		(1 << 5)
/** TC0_COUNT16_INTFLAG_MC0 MC Interrupt Flag 0 **/
#define TC0_COUNT16_INTFLAG_MC0		(1 << 4)
/** TC0_COUNT16_INTFLAG_ERR ERR Interrupt Flag **/
#define TC0_COUNT16_INTFLAG_ERR		(1 << 1)
/** TC0_COUNT16_INTFLAG_OVF OVF Interrupt Flag **/
#define TC0_COUNT16_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_intflag COUNT32INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC0_COUNT32_INTFLAG_MC1 MC Interrupt Flag 1 **/
#define TC0_COUNT32_INTFLAG_MC1		(1 << 5)
/** TC0_COUNT32_INTFLAG_MC0 MC Interrupt Flag 0 **/
#define TC0_COUNT32_INTFLAG_MC0		(1 << 4)
/** TC0_COUNT32_INTFLAG_ERR ERR Interrupt Flag **/
#define TC0_COUNT32_INTFLAG_ERR		(1 << 1)
/** TC0_COUNT32_INTFLAG_OVF OVF Interrupt Flag **/
#define TC0_COUNT32_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_status COUNT8STATUS Status
@{*/

/** TC0_COUNT8_STATUS_CCBUFV1 Compare channel buffer 1 valid **/
#define TC0_COUNT8_STATUS_CCBUFV1		(1 << 5)
/** TC0_COUNT8_STATUS_CCBUFV0 Compare channel buffer 0 valid **/
#define TC0_COUNT8_STATUS_CCBUFV0		(1 << 4)
/** TC0_COUNT8_STATUS_PERBUFV Synchronization Busy Status **/
#define TC0_COUNT8_STATUS_PERBUFV		(1 << 3)
/** TC0_COUNT8_STATUS_SLAVE Slave Status Flag **/
#define TC0_COUNT8_STATUS_SLAVE		(1 << 1)
/** TC0_COUNT8_STATUS_STOP Stop Status Flag **/
#define TC0_COUNT8_STATUS_STOP		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_status COUNT16STATUS Status
@{*/

/** TC0_COUNT16_STATUS_CCBUFV1 Compare channel buffer 1 valid **/
#define TC0_COUNT16_STATUS_CCBUFV1		(1 << 5)
/** TC0_COUNT16_STATUS_CCBUFV0 Compare channel buffer 0 valid **/
#define TC0_COUNT16_STATUS_CCBUFV0		(1 << 4)
/** TC0_COUNT16_STATUS_PERBUFV Synchronization Busy Status **/
#define TC0_COUNT16_STATUS_PERBUFV		(1 << 3)
/** TC0_COUNT16_STATUS_SLAVE Slave Status Flag **/
#define TC0_COUNT16_STATUS_SLAVE		(1 << 1)
/** TC0_COUNT16_STATUS_STOP Stop Status Flag **/
#define TC0_COUNT16_STATUS_STOP		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_status COUNT32STATUS Status
@{*/

/** TC0_COUNT32_STATUS_CCBUFV1 Compare channel buffer 1 valid **/
#define TC0_COUNT32_STATUS_CCBUFV1		(1 << 5)
/** TC0_COUNT32_STATUS_CCBUFV0 Compare channel buffer 0 valid **/
#define TC0_COUNT32_STATUS_CCBUFV0		(1 << 4)
/** TC0_COUNT32_STATUS_PERBUFV Synchronization Busy Status **/
#define TC0_COUNT32_STATUS_PERBUFV		(1 << 3)
/** TC0_COUNT32_STATUS_SLAVE Slave Status Flag **/
#define TC0_COUNT32_STATUS_SLAVE		(1 << 1)
/** TC0_COUNT32_STATUS_STOP Stop Status Flag **/
#define TC0_COUNT32_STATUS_STOP		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_wave COUNT8WAVE Waveform Generation Control
@{*/


#define TC0_COUNT8_WAVE_WAVEGEN_SHIFT		0
#define TC0_COUNT8_WAVE_WAVEGEN_MASK		0x03
/** @defgroup tc0_count8_wave_wavegen WAVEGEN Waveform Generation Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_wave COUNT16WAVE Waveform Generation Control
@{*/


#define TC0_COUNT16_WAVE_WAVEGEN_SHIFT		0
#define TC0_COUNT16_WAVE_WAVEGEN_MASK		0x03
/** @defgroup tc0_count16_wave_wavegen WAVEGEN Waveform Generation Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_wave COUNT32WAVE Waveform Generation Control
@{*/


#define TC0_COUNT32_WAVE_WAVEGEN_SHIFT		0
#define TC0_COUNT32_WAVE_WAVEGEN_MASK		0x03
/** @defgroup tc0_count32_wave_wavegen WAVEGEN Waveform Generation Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_drvctrl COUNT8DRVCTRL Control C
@{*/

/** TC0_COUNT8_DRVCTRL_INVEN1 Output Waveform Invert Enable 1 **/
#define TC0_COUNT8_DRVCTRL_INVEN1		(1 << 1)
/** TC0_COUNT8_DRVCTRL_INVEN0 Output Waveform Invert Enable 0 **/
#define TC0_COUNT8_DRVCTRL_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_drvctrl COUNT16DRVCTRL Control C
@{*/

/** TC0_COUNT16_DRVCTRL_INVEN1 Output Waveform Invert Enable 1 **/
#define TC0_COUNT16_DRVCTRL_INVEN1		(1 << 1)
/** TC0_COUNT16_DRVCTRL_INVEN0 Output Waveform Invert Enable 0 **/
#define TC0_COUNT16_DRVCTRL_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_drvctrl COUNT32DRVCTRL Control C
@{*/

/** TC0_COUNT32_DRVCTRL_INVEN1 Output Waveform Invert Enable 1 **/
#define TC0_COUNT32_DRVCTRL_INVEN1		(1 << 1)
/** TC0_COUNT32_DRVCTRL_INVEN0 Output Waveform Invert Enable 0 **/
#define TC0_COUNT32_DRVCTRL_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_dbgctrl COUNT8DBGCTRL Debug Control
@{*/

/** TC0_COUNT8_DBGCTRL_DBGRUN Run During Debug **/
#define TC0_COUNT8_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_dbgctrl COUNT16DBGCTRL Debug Control
@{*/

/** TC0_COUNT16_DBGCTRL_DBGRUN Run During Debug **/
#define TC0_COUNT16_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_dbgctrl COUNT32DBGCTRL Debug Control
@{*/

/** TC0_COUNT32_DBGCTRL_DBGRUN Run During Debug **/
#define TC0_COUNT32_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_syncbusy COUNT8SYNCBUSY Synchronization Status
@{*/

/** TC0_COUNT8_SYNCBUSY_CC1 Compare Channel 1 **/
#define TC0_COUNT8_SYNCBUSY_CC1		(1 << 7)
/** TC0_COUNT8_SYNCBUSY_CC0 Compare Channel 0 **/
#define TC0_COUNT8_SYNCBUSY_CC0		(1 << 6)
/** TC0_COUNT8_SYNCBUSY_PER Period **/
#define TC0_COUNT8_SYNCBUSY_PER		(1 << 5)
/** TC0_COUNT8_SYNCBUSY_COUNT Counter **/
#define TC0_COUNT8_SYNCBUSY_COUNT		(1 << 4)
/** TC0_COUNT8_SYNCBUSY_STATUS STATUS **/
#define TC0_COUNT8_SYNCBUSY_STATUS		(1 << 3)
/** TC0_COUNT8_SYNCBUSY_CTRLB CTRLB **/
#define TC0_COUNT8_SYNCBUSY_CTRLB		(1 << 2)
/** TC0_COUNT8_SYNCBUSY_ENABLE enable **/
#define TC0_COUNT8_SYNCBUSY_ENABLE		(1 << 1)
/** TC0_COUNT8_SYNCBUSY_SWRST swrst **/
#define TC0_COUNT8_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count16_syncbusy COUNT16SYNCBUSY Synchronization Status
@{*/

/** TC0_COUNT16_SYNCBUSY_CC1 Compare Channel 1 **/
#define TC0_COUNT16_SYNCBUSY_CC1		(1 << 7)
/** TC0_COUNT16_SYNCBUSY_CC0 Compare Channel 0 **/
#define TC0_COUNT16_SYNCBUSY_CC0		(1 << 6)
/** TC0_COUNT16_SYNCBUSY_PER Period **/
#define TC0_COUNT16_SYNCBUSY_PER		(1 << 5)
/** TC0_COUNT16_SYNCBUSY_COUNT Counter **/
#define TC0_COUNT16_SYNCBUSY_COUNT		(1 << 4)
/** TC0_COUNT16_SYNCBUSY_STATUS STATUS **/
#define TC0_COUNT16_SYNCBUSY_STATUS		(1 << 3)
/** TC0_COUNT16_SYNCBUSY_CTRLB CTRLB **/
#define TC0_COUNT16_SYNCBUSY_CTRLB		(1 << 2)
/** TC0_COUNT16_SYNCBUSY_ENABLE enable **/
#define TC0_COUNT16_SYNCBUSY_ENABLE		(1 << 1)
/** TC0_COUNT16_SYNCBUSY_SWRST swrst **/
#define TC0_COUNT16_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count32_syncbusy COUNT32SYNCBUSY Synchronization Status
@{*/

/** TC0_COUNT32_SYNCBUSY_CC1 Compare Channel 1 **/
#define TC0_COUNT32_SYNCBUSY_CC1		(1 << 7)
/** TC0_COUNT32_SYNCBUSY_CC0 Compare Channel 0 **/
#define TC0_COUNT32_SYNCBUSY_CC0		(1 << 6)
/** TC0_COUNT32_SYNCBUSY_PER Period **/
#define TC0_COUNT32_SYNCBUSY_PER		(1 << 5)
/** TC0_COUNT32_SYNCBUSY_COUNT Counter **/
#define TC0_COUNT32_SYNCBUSY_COUNT		(1 << 4)
/** TC0_COUNT32_SYNCBUSY_STATUS STATUS **/
#define TC0_COUNT32_SYNCBUSY_STATUS		(1 << 3)
/** TC0_COUNT32_SYNCBUSY_CTRLB CTRLB **/
#define TC0_COUNT32_SYNCBUSY_CTRLB		(1 << 2)
/** TC0_COUNT32_SYNCBUSY_ENABLE enable **/
#define TC0_COUNT32_SYNCBUSY_ENABLE		(1 << 1)
/** TC0_COUNT32_SYNCBUSY_SWRST swrst **/
#define TC0_COUNT32_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc0_count8_count COUNT8COUNT COUNT8 Count
@{*/


#define TC0_COUNT8_COUNT_COUNT_SHIFT		0
#define TC0_COUNT8_COUNT_COUNT_MASK		0xff
/** @defgroup tc0_count8_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_count COUNT16COUNT COUNT16 Count
@{*/


#define TC0_COUNT16_COUNT_COUNT_SHIFT		0
#define TC0_COUNT16_COUNT_COUNT_MASK		0xffff
/** @defgroup tc0_count16_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_count COUNT32COUNT COUNT32 Count
@{*/


#define TC0_COUNT32_COUNT_COUNT_SHIFT		0
#define TC0_COUNT32_COUNT_COUNT_MASK		0xffffffff
/** @defgroup tc0_count32_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_per COUNT32PER COUNT32 Period
@{*/


#define TC0_COUNT32_PER_PER_SHIFT		0
#define TC0_COUNT32_PER_PER_MASK		0xffffffff
/** @defgroup tc0_count32_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_per COUNT16PER COUNT16 Period
@{*/


#define TC0_COUNT16_PER_PER_SHIFT		0
#define TC0_COUNT16_PER_PER_MASK		0xffff
/** @defgroup tc0_count16_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_per COUNT8PER COUNT8 Period
@{*/


#define TC0_COUNT8_PER_PER_SHIFT		0
#define TC0_COUNT8_PER_PER_MASK		0xff
/** @defgroup tc0_count8_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_cc[%s] COUNT8CC[%s] COUNT8 Compare and Capture
@{*/


#define TC0_COUNT8_CC[%s]_CC_SHIFT		0
#define TC0_COUNT8_CC[%s]_CC_MASK		0xff
/** @defgroup tc0_count8_cc[%s]_cc CC Counter/Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_cc[%s] COUNT16CC[%s] COUNT16 Compare and Capture
@{*/


#define TC0_COUNT16_CC[%s]_CC_SHIFT		0
#define TC0_COUNT16_CC[%s]_CC_MASK		0xffff
/** @defgroup tc0_count16_cc[%s]_cc CC Counter/Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_cc[%s] COUNT32CC[%s] COUNT32 Compare and Capture
@{*/


#define TC0_COUNT32_CC[%s]_CC_SHIFT		0
#define TC0_COUNT32_CC[%s]_CC_MASK		0xffffffff
/** @defgroup tc0_count32_cc[%s]_cc CC Counter/Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_perbuf COUNT32PERBUF COUNT32 Period Buffer
@{*/


#define TC0_COUNT32_PERBUF_PERBUF_SHIFT		0
#define TC0_COUNT32_PERBUF_PERBUF_MASK		0xffffffff
/** @defgroup tc0_count32_perbuf_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_perbuf COUNT16PERBUF COUNT16 Period Buffer
@{*/


#define TC0_COUNT16_PERBUF_PERBUF_SHIFT		0
#define TC0_COUNT16_PERBUF_PERBUF_MASK		0xffff
/** @defgroup tc0_count16_perbuf_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_perbuf COUNT8PERBUF COUNT8 Period Buffer
@{*/


#define TC0_COUNT8_PERBUF_PERBUF_SHIFT		0
#define TC0_COUNT8_PERBUF_PERBUF_MASK		0xff
/** @defgroup tc0_count8_perbuf_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count8_ccbuf[%s] COUNT8CCBUF[%s] COUNT8 Compare and Capture Buffer
@{*/


#define TC0_COUNT8_CCBUF[%s]_CCBUF_SHIFT		0
#define TC0_COUNT8_CCBUF[%s]_CCBUF_MASK		0xff
/** @defgroup tc0_count8_ccbuf[%s]_ccbuf CCBUF Counter/Compare Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count16_ccbuf[%s] COUNT16CCBUF[%s] COUNT16 Compare and Capture Buffer
@{*/


#define TC0_COUNT16_CCBUF[%s]_CCBUF_SHIFT		0
#define TC0_COUNT16_CCBUF[%s]_CCBUF_MASK		0xffff
/** @defgroup tc0_count16_ccbuf[%s]_ccbuf CCBUF Counter/Compare Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_count32_ccbuf[%s] COUNT32CCBUF[%s] COUNT32 Compare and Capture Buffer
@{*/


#define TC0_COUNT32_CCBUF[%s]_CCBUF_SHIFT		0
#define TC0_COUNT32_CCBUF[%s]_CCBUF_MASK		0xffffffff
/** @defgroup tc0_count32_ccbuf[%s]_ccbuf CCBUF Counter/Compare Buffer Value
@{*/
/**@}*/


/**@}*/

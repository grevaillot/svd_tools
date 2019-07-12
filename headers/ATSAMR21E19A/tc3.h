#pragma once 

/* --- TC3: Basic Timer Counter 3 ----------------------------------- */

/** @defgroup tc3_registers Basic Timer Counter 3 Register
@{*/

/** TC3_COUNT8_CTRLA Control A **/
#define TC3_COUNT8_CTRLA			MMIO32(TC3_BASE + 0x00)
/** TC3_COUNT16_CTRLA Control A **/
#define TC3_COUNT16_CTRLA			MMIO32(TC3_BASE + 0x00)
/** TC3_COUNT32_CTRLA Control A **/
#define TC3_COUNT32_CTRLA			MMIO32(TC3_BASE + 0x00)
/** TC3_COUNT8_READREQ Read Request **/
#define TC3_COUNT8_READREQ			MMIO32(TC3_BASE + 0x02)
/** TC3_COUNT16_READREQ Read Request **/
#define TC3_COUNT16_READREQ			MMIO32(TC3_BASE + 0x02)
/** TC3_COUNT32_READREQ Read Request **/
#define TC3_COUNT32_READREQ			MMIO32(TC3_BASE + 0x02)
/** TC3_COUNT8_CTRLBCLR Control B Clear **/
#define TC3_COUNT8_CTRLBCLR			MMIO32(TC3_BASE + 0x04)
/** TC3_COUNT16_CTRLBCLR Control B Clear **/
#define TC3_COUNT16_CTRLBCLR			MMIO32(TC3_BASE + 0x04)
/** TC3_COUNT32_CTRLBCLR Control B Clear **/
#define TC3_COUNT32_CTRLBCLR			MMIO32(TC3_BASE + 0x04)
/** TC3_COUNT8_CTRLBSET Control B Set **/
#define TC3_COUNT8_CTRLBSET			MMIO32(TC3_BASE + 0x05)
/** TC3_COUNT16_CTRLBSET Control B Set **/
#define TC3_COUNT16_CTRLBSET			MMIO32(TC3_BASE + 0x05)
/** TC3_COUNT32_CTRLBSET Control B Set **/
#define TC3_COUNT32_CTRLBSET			MMIO32(TC3_BASE + 0x05)
/** TC3_COUNT8_CTRLC Control C **/
#define TC3_COUNT8_CTRLC			MMIO32(TC3_BASE + 0x06)
/** TC3_COUNT16_CTRLC Control C **/
#define TC3_COUNT16_CTRLC			MMIO32(TC3_BASE + 0x06)
/** TC3_COUNT32_CTRLC Control C **/
#define TC3_COUNT32_CTRLC			MMIO32(TC3_BASE + 0x06)
/** TC3_COUNT8_DBGCTRL Debug Control **/
#define TC3_COUNT8_DBGCTRL			MMIO32(TC3_BASE + 0x08)
/** TC3_COUNT16_DBGCTRL Debug Control **/
#define TC3_COUNT16_DBGCTRL			MMIO32(TC3_BASE + 0x08)
/** TC3_COUNT32_DBGCTRL Debug Control **/
#define TC3_COUNT32_DBGCTRL			MMIO32(TC3_BASE + 0x08)
/** TC3_COUNT8_EVCTRL Event Control **/
#define TC3_COUNT8_EVCTRL			MMIO32(TC3_BASE + 0x0a)
/** TC3_COUNT16_EVCTRL Event Control **/
#define TC3_COUNT16_EVCTRL			MMIO32(TC3_BASE + 0x0a)
/** TC3_COUNT32_EVCTRL Event Control **/
#define TC3_COUNT32_EVCTRL			MMIO32(TC3_BASE + 0x0a)
/** TC3_COUNT8_INTENCLR Interrupt Enable Clear **/
#define TC3_COUNT8_INTENCLR			MMIO32(TC3_BASE + 0x0c)
/** TC3_COUNT16_INTENCLR Interrupt Enable Clear **/
#define TC3_COUNT16_INTENCLR			MMIO32(TC3_BASE + 0x0c)
/** TC3_COUNT32_INTENCLR Interrupt Enable Clear **/
#define TC3_COUNT32_INTENCLR			MMIO32(TC3_BASE + 0x0c)
/** TC3_COUNT8_INTENSET Interrupt Enable Set **/
#define TC3_COUNT8_INTENSET			MMIO32(TC3_BASE + 0x0d)
/** TC3_COUNT16_INTENSET Interrupt Enable Set **/
#define TC3_COUNT16_INTENSET			MMIO32(TC3_BASE + 0x0d)
/** TC3_COUNT32_INTENSET Interrupt Enable Set **/
#define TC3_COUNT32_INTENSET			MMIO32(TC3_BASE + 0x0d)
/** TC3_COUNT8_INTFLAG Interrupt Flag Status and Clear **/
#define TC3_COUNT8_INTFLAG			MMIO32(TC3_BASE + 0x0e)
/** TC3_COUNT16_INTFLAG Interrupt Flag Status and Clear **/
#define TC3_COUNT16_INTFLAG			MMIO32(TC3_BASE + 0x0e)
/** TC3_COUNT32_INTFLAG Interrupt Flag Status and Clear **/
#define TC3_COUNT32_INTFLAG			MMIO32(TC3_BASE + 0x0e)
/** TC3_COUNT8_STATUS Status **/
#define TC3_COUNT8_STATUS			MMIO32(TC3_BASE + 0x0f)
/** TC3_COUNT16_STATUS Status **/
#define TC3_COUNT16_STATUS			MMIO32(TC3_BASE + 0x0f)
/** TC3_COUNT32_STATUS Status **/
#define TC3_COUNT32_STATUS			MMIO32(TC3_BASE + 0x0f)
/** TC3_COUNT8_COUNT COUNT8 Counter Value **/
#define TC3_COUNT8_COUNT			MMIO32(TC3_BASE + 0x10)
/** TC3_COUNT16_COUNT COUNT16 Counter Value **/
#define TC3_COUNT16_COUNT			MMIO32(TC3_BASE + 0x10)
/** TC3_COUNT32_COUNT COUNT32 Counter Value **/
#define TC3_COUNT32_COUNT			MMIO32(TC3_BASE + 0x10)
/** TC3_COUNT8_PER COUNT8 Period Value **/
#define TC3_COUNT8_PER			MMIO32(TC3_BASE + 0x14)
/** TC3_COUNT8_CC%s COUNT8 Compare/Capture **/
#define TC3_COUNT8_CC%s			MMIO32(TC3_BASE + 0x18)
/** TC3_COUNT16_CC%s COUNT16 Compare/Capture **/
#define TC3_COUNT16_CC%s			MMIO32(TC3_BASE + 0x18)
/** TC3_COUNT32_CC%s COUNT32 Compare/Capture **/
#define TC3_COUNT32_CC%s			MMIO32(TC3_BASE + 0x18)

/**@}*/


/** @defgroup tc3_count8_ctrla COUNT8CTRLA Control A
@{*/


#define TC3_COUNT8_CTRLA_PRESCSYNC_SHIFT		12
#define TC3_COUNT8_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc3_count8_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/

/** TC3_COUNT8_CTRLA_RUNSTDBY Run in Standby **/
#define TC3_COUNT8_CTRLA_RUNSTDBY		(1 << 11)

#define TC3_COUNT8_CTRLA_PRESCALER_SHIFT		8
#define TC3_COUNT8_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc3_count8_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define TC3_COUNT8_CTRLA_WAVEGEN_SHIFT		5
#define TC3_COUNT8_CTRLA_WAVEGEN_MASK		0x03
/** @defgroup tc3_count8_ctrla_wavegen WAVEGEN Waveform Generation Operation
@{*/
/**@}*/


#define TC3_COUNT8_CTRLA_MODE_SHIFT		2
#define TC3_COUNT8_CTRLA_MODE_MASK		0x03
/** @defgroup tc3_count8_ctrla_mode MODE TC Mode
@{*/
/**@}*/

/** TC3_COUNT8_CTRLA_ENABLE Enable **/
#define TC3_COUNT8_CTRLA_ENABLE		(1 << 1)
/** TC3_COUNT8_CTRLA_SWRST Software Reset **/
#define TC3_COUNT8_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_ctrla COUNT16CTRLA Control A
@{*/


#define TC3_COUNT16_CTRLA_PRESCSYNC_SHIFT		12
#define TC3_COUNT16_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc3_count16_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/

/** TC3_COUNT16_CTRLA_RUNSTDBY Run in Standby **/
#define TC3_COUNT16_CTRLA_RUNSTDBY		(1 << 11)

#define TC3_COUNT16_CTRLA_PRESCALER_SHIFT		8
#define TC3_COUNT16_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc3_count16_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define TC3_COUNT16_CTRLA_WAVEGEN_SHIFT		5
#define TC3_COUNT16_CTRLA_WAVEGEN_MASK		0x03
/** @defgroup tc3_count16_ctrla_wavegen WAVEGEN Waveform Generation Operation
@{*/
/**@}*/


#define TC3_COUNT16_CTRLA_MODE_SHIFT		2
#define TC3_COUNT16_CTRLA_MODE_MASK		0x03
/** @defgroup tc3_count16_ctrla_mode MODE TC Mode
@{*/
/**@}*/

/** TC3_COUNT16_CTRLA_ENABLE Enable **/
#define TC3_COUNT16_CTRLA_ENABLE		(1 << 1)
/** TC3_COUNT16_CTRLA_SWRST Software Reset **/
#define TC3_COUNT16_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_ctrla COUNT32CTRLA Control A
@{*/


#define TC3_COUNT32_CTRLA_PRESCSYNC_SHIFT		12
#define TC3_COUNT32_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tc3_count32_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization
@{*/
/**@}*/

/** TC3_COUNT32_CTRLA_RUNSTDBY Run in Standby **/
#define TC3_COUNT32_CTRLA_RUNSTDBY		(1 << 11)

#define TC3_COUNT32_CTRLA_PRESCALER_SHIFT		8
#define TC3_COUNT32_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tc3_count32_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define TC3_COUNT32_CTRLA_WAVEGEN_SHIFT		5
#define TC3_COUNT32_CTRLA_WAVEGEN_MASK		0x03
/** @defgroup tc3_count32_ctrla_wavegen WAVEGEN Waveform Generation Operation
@{*/
/**@}*/


#define TC3_COUNT32_CTRLA_MODE_SHIFT		2
#define TC3_COUNT32_CTRLA_MODE_MASK		0x03
/** @defgroup tc3_count32_ctrla_mode MODE TC Mode
@{*/
/**@}*/

/** TC3_COUNT32_CTRLA_ENABLE Enable **/
#define TC3_COUNT32_CTRLA_ENABLE		(1 << 1)
/** TC3_COUNT32_CTRLA_SWRST Software Reset **/
#define TC3_COUNT32_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_readreq COUNT8READREQ Read Request
@{*/

/** TC3_COUNT8_READREQ_RREQ Read Request **/
#define TC3_COUNT8_READREQ_RREQ		(1 << 15)
/** TC3_COUNT8_READREQ_RCONT Read Continuously **/
#define TC3_COUNT8_READREQ_RCONT		(1 << 14)

#define TC3_COUNT8_READREQ_ADDR_SHIFT		0
#define TC3_COUNT8_READREQ_ADDR_MASK		0x1f
/** @defgroup tc3_count8_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count16_readreq COUNT16READREQ Read Request
@{*/

/** TC3_COUNT16_READREQ_RREQ Read Request **/
#define TC3_COUNT16_READREQ_RREQ		(1 << 15)
/** TC3_COUNT16_READREQ_RCONT Read Continuously **/
#define TC3_COUNT16_READREQ_RCONT		(1 << 14)

#define TC3_COUNT16_READREQ_ADDR_SHIFT		0
#define TC3_COUNT16_READREQ_ADDR_MASK		0x1f
/** @defgroup tc3_count16_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count32_readreq COUNT32READREQ Read Request
@{*/

/** TC3_COUNT32_READREQ_RREQ Read Request **/
#define TC3_COUNT32_READREQ_RREQ		(1 << 15)
/** TC3_COUNT32_READREQ_RCONT Read Continuously **/
#define TC3_COUNT32_READREQ_RCONT		(1 << 14)

#define TC3_COUNT32_READREQ_ADDR_SHIFT		0
#define TC3_COUNT32_READREQ_ADDR_MASK		0x1f
/** @defgroup tc3_count32_readreq_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count8_ctrlbclr COUNT8CTRLBCLR Control B Clear
@{*/


#define TC3_COUNT8_CTRLBCLR_CMD_SHIFT		6
#define TC3_COUNT8_CTRLBCLR_CMD_MASK		0x03
/** @defgroup tc3_count8_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT8_CTRLBCLR_ONESHOT One-Shot **/
#define TC3_COUNT8_CTRLBCLR_ONESHOT		(1 << 2)
/** TC3_COUNT8_CTRLBCLR_DIR Counter Direction **/
#define TC3_COUNT8_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_ctrlbclr COUNT16CTRLBCLR Control B Clear
@{*/


#define TC3_COUNT16_CTRLBCLR_CMD_SHIFT		6
#define TC3_COUNT16_CTRLBCLR_CMD_MASK		0x03
/** @defgroup tc3_count16_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT16_CTRLBCLR_ONESHOT One-Shot **/
#define TC3_COUNT16_CTRLBCLR_ONESHOT		(1 << 2)
/** TC3_COUNT16_CTRLBCLR_DIR Counter Direction **/
#define TC3_COUNT16_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_ctrlbclr COUNT32CTRLBCLR Control B Clear
@{*/


#define TC3_COUNT32_CTRLBCLR_CMD_SHIFT		6
#define TC3_COUNT32_CTRLBCLR_CMD_MASK		0x03
/** @defgroup tc3_count32_ctrlbclr_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT32_CTRLBCLR_ONESHOT One-Shot **/
#define TC3_COUNT32_CTRLBCLR_ONESHOT		(1 << 2)
/** TC3_COUNT32_CTRLBCLR_DIR Counter Direction **/
#define TC3_COUNT32_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_ctrlbset COUNT8CTRLBSET Control B Set
@{*/


#define TC3_COUNT8_CTRLBSET_CMD_SHIFT		6
#define TC3_COUNT8_CTRLBSET_CMD_MASK		0x03
/** @defgroup tc3_count8_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT8_CTRLBSET_ONESHOT One-Shot **/
#define TC3_COUNT8_CTRLBSET_ONESHOT		(1 << 2)
/** TC3_COUNT8_CTRLBSET_DIR Counter Direction **/
#define TC3_COUNT8_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_ctrlbset COUNT16CTRLBSET Control B Set
@{*/


#define TC3_COUNT16_CTRLBSET_CMD_SHIFT		6
#define TC3_COUNT16_CTRLBSET_CMD_MASK		0x03
/** @defgroup tc3_count16_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT16_CTRLBSET_ONESHOT One-Shot **/
#define TC3_COUNT16_CTRLBSET_ONESHOT		(1 << 2)
/** TC3_COUNT16_CTRLBSET_DIR Counter Direction **/
#define TC3_COUNT16_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_ctrlbset COUNT32CTRLBSET Control B Set
@{*/


#define TC3_COUNT32_CTRLBSET_CMD_SHIFT		6
#define TC3_COUNT32_CTRLBSET_CMD_MASK		0x03
/** @defgroup tc3_count32_ctrlbset_cmd CMD Command
@{*/
/**@}*/

/** TC3_COUNT32_CTRLBSET_ONESHOT One-Shot **/
#define TC3_COUNT32_CTRLBSET_ONESHOT		(1 << 2)
/** TC3_COUNT32_CTRLBSET_DIR Counter Direction **/
#define TC3_COUNT32_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_ctrlc COUNT8CTRLC Control C
@{*/

/** TC3_COUNT8_CTRLC_CPTEN1 Capture Channel 1 Enable **/
#define TC3_COUNT8_CTRLC_CPTEN1		(1 << 5)
/** TC3_COUNT8_CTRLC_CPTEN0 Capture Channel 0 Enable **/
#define TC3_COUNT8_CTRLC_CPTEN0		(1 << 4)
/** TC3_COUNT8_CTRLC_INVEN1 Output Waveform 1 Invert Enable **/
#define TC3_COUNT8_CTRLC_INVEN1		(1 << 1)
/** TC3_COUNT8_CTRLC_INVEN0 Output Waveform 0 Invert Enable **/
#define TC3_COUNT8_CTRLC_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_ctrlc COUNT16CTRLC Control C
@{*/

/** TC3_COUNT16_CTRLC_CPTEN1 Capture Channel 1 Enable **/
#define TC3_COUNT16_CTRLC_CPTEN1		(1 << 5)
/** TC3_COUNT16_CTRLC_CPTEN0 Capture Channel 0 Enable **/
#define TC3_COUNT16_CTRLC_CPTEN0		(1 << 4)
/** TC3_COUNT16_CTRLC_INVEN1 Output Waveform 1 Invert Enable **/
#define TC3_COUNT16_CTRLC_INVEN1		(1 << 1)
/** TC3_COUNT16_CTRLC_INVEN0 Output Waveform 0 Invert Enable **/
#define TC3_COUNT16_CTRLC_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_ctrlc COUNT32CTRLC Control C
@{*/

/** TC3_COUNT32_CTRLC_CPTEN1 Capture Channel 1 Enable **/
#define TC3_COUNT32_CTRLC_CPTEN1		(1 << 5)
/** TC3_COUNT32_CTRLC_CPTEN0 Capture Channel 0 Enable **/
#define TC3_COUNT32_CTRLC_CPTEN0		(1 << 4)
/** TC3_COUNT32_CTRLC_INVEN1 Output Waveform 1 Invert Enable **/
#define TC3_COUNT32_CTRLC_INVEN1		(1 << 1)
/** TC3_COUNT32_CTRLC_INVEN0 Output Waveform 0 Invert Enable **/
#define TC3_COUNT32_CTRLC_INVEN0		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_dbgctrl COUNT8DBGCTRL Debug Control
@{*/

/** TC3_COUNT8_DBGCTRL_DBGRUN Debug Run Mode **/
#define TC3_COUNT8_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_dbgctrl COUNT16DBGCTRL Debug Control
@{*/

/** TC3_COUNT16_DBGCTRL_DBGRUN Debug Run Mode **/
#define TC3_COUNT16_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_dbgctrl COUNT32DBGCTRL Debug Control
@{*/

/** TC3_COUNT32_DBGCTRL_DBGRUN Debug Run Mode **/
#define TC3_COUNT32_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_evctrl COUNT8EVCTRL Event Control
@{*/

/** TC3_COUNT8_EVCTRL_MCEO1 Match or Capture Channel 1 Event Output Enable **/
#define TC3_COUNT8_EVCTRL_MCEO1		(1 << 13)
/** TC3_COUNT8_EVCTRL_MCEO0 Match or Capture Channel 0 Event Output Enable **/
#define TC3_COUNT8_EVCTRL_MCEO0		(1 << 12)
/** TC3_COUNT8_EVCTRL_OVFEO Overflow/Underflow Event Output Enable **/
#define TC3_COUNT8_EVCTRL_OVFEO		(1 << 8)
/** TC3_COUNT8_EVCTRL_TCEI TC Event Input **/
#define TC3_COUNT8_EVCTRL_TCEI		(1 << 5)
/** TC3_COUNT8_EVCTRL_TCINV TC Inverted Event Input **/
#define TC3_COUNT8_EVCTRL_TCINV		(1 << 4)

#define TC3_COUNT8_EVCTRL_EVACT_SHIFT		0
#define TC3_COUNT8_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc3_count8_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count16_evctrl COUNT16EVCTRL Event Control
@{*/

/** TC3_COUNT16_EVCTRL_MCEO1 Match or Capture Channel 1 Event Output Enable **/
#define TC3_COUNT16_EVCTRL_MCEO1		(1 << 13)
/** TC3_COUNT16_EVCTRL_MCEO0 Match or Capture Channel 0 Event Output Enable **/
#define TC3_COUNT16_EVCTRL_MCEO0		(1 << 12)
/** TC3_COUNT16_EVCTRL_OVFEO Overflow/Underflow Event Output Enable **/
#define TC3_COUNT16_EVCTRL_OVFEO		(1 << 8)
/** TC3_COUNT16_EVCTRL_TCEI TC Event Input **/
#define TC3_COUNT16_EVCTRL_TCEI		(1 << 5)
/** TC3_COUNT16_EVCTRL_TCINV TC Inverted Event Input **/
#define TC3_COUNT16_EVCTRL_TCINV		(1 << 4)

#define TC3_COUNT16_EVCTRL_EVACT_SHIFT		0
#define TC3_COUNT16_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc3_count16_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count32_evctrl COUNT32EVCTRL Event Control
@{*/

/** TC3_COUNT32_EVCTRL_MCEO1 Match or Capture Channel 1 Event Output Enable **/
#define TC3_COUNT32_EVCTRL_MCEO1		(1 << 13)
/** TC3_COUNT32_EVCTRL_MCEO0 Match or Capture Channel 0 Event Output Enable **/
#define TC3_COUNT32_EVCTRL_MCEO0		(1 << 12)
/** TC3_COUNT32_EVCTRL_OVFEO Overflow/Underflow Event Output Enable **/
#define TC3_COUNT32_EVCTRL_OVFEO		(1 << 8)
/** TC3_COUNT32_EVCTRL_TCEI TC Event Input **/
#define TC3_COUNT32_EVCTRL_TCEI		(1 << 5)
/** TC3_COUNT32_EVCTRL_TCINV TC Inverted Event Input **/
#define TC3_COUNT32_EVCTRL_TCINV		(1 << 4)

#define TC3_COUNT32_EVCTRL_EVACT_SHIFT		0
#define TC3_COUNT32_EVCTRL_EVACT_MASK		0x07
/** @defgroup tc3_count32_evctrl_evact EVACT Event Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count8_intenclr COUNT8INTENCLR Interrupt Enable Clear
@{*/

/** TC3_COUNT8_INTENCLR_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT8_INTENCLR_MC1		(1 << 5)
/** TC3_COUNT8_INTENCLR_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT8_INTENCLR_MC0		(1 << 4)
/** TC3_COUNT8_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT8_INTENCLR_SYNCRDY		(1 << 3)
/** TC3_COUNT8_INTENCLR_ERR Error Interrupt Enable **/
#define TC3_COUNT8_INTENCLR_ERR		(1 << 1)
/** TC3_COUNT8_INTENCLR_OVF Overflow Interrupt Enable **/
#define TC3_COUNT8_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_intenclr COUNT16INTENCLR Interrupt Enable Clear
@{*/

/** TC3_COUNT16_INTENCLR_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT16_INTENCLR_MC1		(1 << 5)
/** TC3_COUNT16_INTENCLR_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT16_INTENCLR_MC0		(1 << 4)
/** TC3_COUNT16_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT16_INTENCLR_SYNCRDY		(1 << 3)
/** TC3_COUNT16_INTENCLR_ERR Error Interrupt Enable **/
#define TC3_COUNT16_INTENCLR_ERR		(1 << 1)
/** TC3_COUNT16_INTENCLR_OVF Overflow Interrupt Enable **/
#define TC3_COUNT16_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_intenclr COUNT32INTENCLR Interrupt Enable Clear
@{*/

/** TC3_COUNT32_INTENCLR_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT32_INTENCLR_MC1		(1 << 5)
/** TC3_COUNT32_INTENCLR_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT32_INTENCLR_MC0		(1 << 4)
/** TC3_COUNT32_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT32_INTENCLR_SYNCRDY		(1 << 3)
/** TC3_COUNT32_INTENCLR_ERR Error Interrupt Enable **/
#define TC3_COUNT32_INTENCLR_ERR		(1 << 1)
/** TC3_COUNT32_INTENCLR_OVF Overflow Interrupt Enable **/
#define TC3_COUNT32_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_intenset COUNT8INTENSET Interrupt Enable Set
@{*/

/** TC3_COUNT8_INTENSET_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT8_INTENSET_MC1		(1 << 5)
/** TC3_COUNT8_INTENSET_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT8_INTENSET_MC0		(1 << 4)
/** TC3_COUNT8_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT8_INTENSET_SYNCRDY		(1 << 3)
/** TC3_COUNT8_INTENSET_ERR Error Interrupt Enable **/
#define TC3_COUNT8_INTENSET_ERR		(1 << 1)
/** TC3_COUNT8_INTENSET_OVF Overflow Interrupt Enable **/
#define TC3_COUNT8_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_intenset COUNT16INTENSET Interrupt Enable Set
@{*/

/** TC3_COUNT16_INTENSET_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT16_INTENSET_MC1		(1 << 5)
/** TC3_COUNT16_INTENSET_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT16_INTENSET_MC0		(1 << 4)
/** TC3_COUNT16_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT16_INTENSET_SYNCRDY		(1 << 3)
/** TC3_COUNT16_INTENSET_ERR Error Interrupt Enable **/
#define TC3_COUNT16_INTENSET_ERR		(1 << 1)
/** TC3_COUNT16_INTENSET_OVF Overflow Interrupt Enable **/
#define TC3_COUNT16_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_intenset COUNT32INTENSET Interrupt Enable Set
@{*/

/** TC3_COUNT32_INTENSET_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TC3_COUNT32_INTENSET_MC1		(1 << 5)
/** TC3_COUNT32_INTENSET_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TC3_COUNT32_INTENSET_MC0		(1 << 4)
/** TC3_COUNT32_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define TC3_COUNT32_INTENSET_SYNCRDY		(1 << 3)
/** TC3_COUNT32_INTENSET_ERR Error Interrupt Enable **/
#define TC3_COUNT32_INTENSET_ERR		(1 << 1)
/** TC3_COUNT32_INTENSET_OVF Overflow Interrupt Enable **/
#define TC3_COUNT32_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_intflag COUNT8INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC3_COUNT8_INTFLAG_MC1 Match or Capture Channel 1 **/
#define TC3_COUNT8_INTFLAG_MC1		(1 << 5)
/** TC3_COUNT8_INTFLAG_MC0 Match or Capture Channel 0 **/
#define TC3_COUNT8_INTFLAG_MC0		(1 << 4)
/** TC3_COUNT8_INTFLAG_SYNCRDY Synchronization Ready **/
#define TC3_COUNT8_INTFLAG_SYNCRDY		(1 << 3)
/** TC3_COUNT8_INTFLAG_ERR Error **/
#define TC3_COUNT8_INTFLAG_ERR		(1 << 1)
/** TC3_COUNT8_INTFLAG_OVF Overflow **/
#define TC3_COUNT8_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count16_intflag COUNT16INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC3_COUNT16_INTFLAG_MC1 Match or Capture Channel 1 **/
#define TC3_COUNT16_INTFLAG_MC1		(1 << 5)
/** TC3_COUNT16_INTFLAG_MC0 Match or Capture Channel 0 **/
#define TC3_COUNT16_INTFLAG_MC0		(1 << 4)
/** TC3_COUNT16_INTFLAG_SYNCRDY Synchronization Ready **/
#define TC3_COUNT16_INTFLAG_SYNCRDY		(1 << 3)
/** TC3_COUNT16_INTFLAG_ERR Error **/
#define TC3_COUNT16_INTFLAG_ERR		(1 << 1)
/** TC3_COUNT16_INTFLAG_OVF Overflow **/
#define TC3_COUNT16_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count32_intflag COUNT32INTFLAG Interrupt Flag Status and Clear
@{*/

/** TC3_COUNT32_INTFLAG_MC1 Match or Capture Channel 1 **/
#define TC3_COUNT32_INTFLAG_MC1		(1 << 5)
/** TC3_COUNT32_INTFLAG_MC0 Match or Capture Channel 0 **/
#define TC3_COUNT32_INTFLAG_MC0		(1 << 4)
/** TC3_COUNT32_INTFLAG_SYNCRDY Synchronization Ready **/
#define TC3_COUNT32_INTFLAG_SYNCRDY		(1 << 3)
/** TC3_COUNT32_INTFLAG_ERR Error **/
#define TC3_COUNT32_INTFLAG_ERR		(1 << 1)
/** TC3_COUNT32_INTFLAG_OVF Overflow **/
#define TC3_COUNT32_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tc3_count8_status COUNT8STATUS Status
@{*/

/** TC3_COUNT8_STATUS_SYNCBUSY Synchronization Busy **/
#define TC3_COUNT8_STATUS_SYNCBUSY		(1 << 7)
/** TC3_COUNT8_STATUS_SLAVE Slave **/
#define TC3_COUNT8_STATUS_SLAVE		(1 << 4)
/** TC3_COUNT8_STATUS_STOP Stop **/
#define TC3_COUNT8_STATUS_STOP		(1 << 3)

/**@}*/

/** @defgroup tc3_count16_status COUNT16STATUS Status
@{*/

/** TC3_COUNT16_STATUS_SYNCBUSY Synchronization Busy **/
#define TC3_COUNT16_STATUS_SYNCBUSY		(1 << 7)
/** TC3_COUNT16_STATUS_SLAVE Slave **/
#define TC3_COUNT16_STATUS_SLAVE		(1 << 4)
/** TC3_COUNT16_STATUS_STOP Stop **/
#define TC3_COUNT16_STATUS_STOP		(1 << 3)

/**@}*/

/** @defgroup tc3_count32_status COUNT32STATUS Status
@{*/

/** TC3_COUNT32_STATUS_SYNCBUSY Synchronization Busy **/
#define TC3_COUNT32_STATUS_SYNCBUSY		(1 << 7)
/** TC3_COUNT32_STATUS_SLAVE Slave **/
#define TC3_COUNT32_STATUS_SLAVE		(1 << 4)
/** TC3_COUNT32_STATUS_STOP Stop **/
#define TC3_COUNT32_STATUS_STOP		(1 << 3)

/**@}*/

/** @defgroup tc3_count8_count COUNT8COUNT COUNT8 Counter Value
@{*/


#define TC3_COUNT8_COUNT_COUNT_SHIFT		0
#define TC3_COUNT8_COUNT_COUNT_MASK		0xff
/** @defgroup tc3_count8_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count16_count COUNT16COUNT COUNT16 Counter Value
@{*/


#define TC3_COUNT16_COUNT_COUNT_SHIFT		0
#define TC3_COUNT16_COUNT_COUNT_MASK		0xffff
/** @defgroup tc3_count16_count_count COUNT Count Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count32_count COUNT32COUNT COUNT32 Counter Value
@{*/


#define TC3_COUNT32_COUNT_COUNT_SHIFT		0
#define TC3_COUNT32_COUNT_COUNT_MASK		0xffffffff
/** @defgroup tc3_count32_count_count COUNT Count Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count8_per COUNT8PER COUNT8 Period Value
@{*/


#define TC3_COUNT8_PER_PER_SHIFT		0
#define TC3_COUNT8_PER_PER_MASK		0xff
/** @defgroup tc3_count8_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count8_cc%s COUNT8CC%s COUNT8 Compare/Capture
@{*/


#define TC3_COUNT8_CC%s_CC_SHIFT		0
#define TC3_COUNT8_CC%s_CC_MASK		0xff
/** @defgroup tc3_count8_cc%s_cc CC Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count16_cc%s COUNT16CC%s COUNT16 Compare/Capture
@{*/


#define TC3_COUNT16_CC%s_CC_SHIFT		0
#define TC3_COUNT16_CC%s_CC_MASK		0xffff
/** @defgroup tc3_count16_cc%s_cc CC Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc3_count32_cc%s COUNT32CC%s COUNT32 Compare/Capture
@{*/


#define TC3_COUNT32_CC%s_CC_SHIFT		0
#define TC3_COUNT32_CC%s_CC_MASK		0xffffffff
/** @defgroup tc3_count32_cc%s_cc CC Compare/Capture Value
@{*/
/**@}*/


/**@}*/

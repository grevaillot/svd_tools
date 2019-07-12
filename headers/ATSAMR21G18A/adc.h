#pragma once 

/* --- ADC: Analog Digital Converter -------------------------------- */

/** @defgroup adc_registers Analog Digital Converter Register
@{*/

/** ADC_CTRLA Control A **/
#define ADC_CTRLA			MMIO32(ADC_BASE + 0x00)
/** ADC_REFCTRL Reference Control **/
#define ADC_REFCTRL			MMIO32(ADC_BASE + 0x01)
/** ADC_AVGCTRL Average Control **/
#define ADC_AVGCTRL			MMIO32(ADC_BASE + 0x02)
/** ADC_SAMPCTRL Sampling Time Control **/
#define ADC_SAMPCTRL			MMIO32(ADC_BASE + 0x03)
/** ADC_CTRLB Control B **/
#define ADC_CTRLB			MMIO32(ADC_BASE + 0x04)
/** ADC_WINCTRL Window Monitor Control **/
#define ADC_WINCTRL			MMIO32(ADC_BASE + 0x08)
/** ADC_SWTRIG Software Trigger **/
#define ADC_SWTRIG			MMIO32(ADC_BASE + 0x0c)
/** ADC_INPUTCTRL Input Control **/
#define ADC_INPUTCTRL			MMIO32(ADC_BASE + 0x10)
/** ADC_EVCTRL Event Control **/
#define ADC_EVCTRL			MMIO32(ADC_BASE + 0x14)
/** ADC_INTENCLR Interrupt Enable Clear **/
#define ADC_INTENCLR			MMIO32(ADC_BASE + 0x16)
/** ADC_INTENSET Interrupt Enable Set **/
#define ADC_INTENSET			MMIO32(ADC_BASE + 0x17)
/** ADC_INTFLAG Interrupt Flag Status and Clear **/
#define ADC_INTFLAG			MMIO32(ADC_BASE + 0x18)
/** ADC_STATUS Status **/
#define ADC_STATUS			MMIO32(ADC_BASE + 0x19)
/** ADC_RESULT Result **/
#define ADC_RESULT			MMIO32(ADC_BASE + 0x1a)
/** ADC_WINLT Window Monitor Lower Threshold **/
#define ADC_WINLT			MMIO32(ADC_BASE + 0x1c)
/** ADC_WINUT Window Monitor Upper Threshold **/
#define ADC_WINUT			MMIO32(ADC_BASE + 0x20)
/** ADC_GAINCORR Gain Correction **/
#define ADC_GAINCORR			MMIO32(ADC_BASE + 0x24)
/** ADC_OFFSETCORR Offset Correction **/
#define ADC_OFFSETCORR			MMIO32(ADC_BASE + 0x26)
/** ADC_CALIB Calibration **/
#define ADC_CALIB			MMIO32(ADC_BASE + 0x28)
/** ADC_DBGCTRL Debug Control **/
#define ADC_DBGCTRL			MMIO32(ADC_BASE + 0x2a)

/**@}*/


/** @defgroup adc_ctrla CTRLA Control A
@{*/

/** ADC_CTRLA_RUNSTDBY Run in Standby **/
#define ADC_CTRLA_RUNSTDBY		(1 << 2)
/** ADC_CTRLA_ENABLE Enable **/
#define ADC_CTRLA_ENABLE		(1 << 1)
/** ADC_CTRLA_SWRST Software Reset **/
#define ADC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup adc_refctrl REFCTRL Reference Control
@{*/

/** ADC_REFCTRL_REFCOMP Reference Buffer Offset Compensation Enable **/
#define ADC_REFCTRL_REFCOMP		(1 << 7)

#define ADC_REFCTRL_REFSEL_SHIFT		0
#define ADC_REFCTRL_REFSEL_MASK		0x0f
/** @defgroup adc_refctrl_refsel REFSEL Reference Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_avgctrl AVGCTRL Average Control
@{*/


#define ADC_AVGCTRL_ADJRES_SHIFT		4
#define ADC_AVGCTRL_ADJRES_MASK		0x07
/** @defgroup adc_avgctrl_adjres ADJRES Adjusting Result / Division Coefficient
@{*/
/**@}*/


#define ADC_AVGCTRL_SAMPLENUM_SHIFT		0
#define ADC_AVGCTRL_SAMPLENUM_MASK		0x0f
/** @defgroup adc_avgctrl_samplenum SAMPLENUM Number of Samples to be Collected
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_sampctrl SAMPCTRL Sampling Time Control
@{*/


#define ADC_SAMPCTRL_SAMPLEN_SHIFT		0
#define ADC_SAMPCTRL_SAMPLEN_MASK		0x3f
/** @defgroup adc_sampctrl_samplen SAMPLEN Sampling Time Length
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ctrlb CTRLB Control B
@{*/


#define ADC_CTRLB_PRESCALER_SHIFT		8
#define ADC_CTRLB_PRESCALER_MASK		0x07
/** @defgroup adc_ctrlb_prescaler PRESCALER Prescaler Configuration
@{*/
/**@}*/


#define ADC_CTRLB_RESSEL_SHIFT		4
#define ADC_CTRLB_RESSEL_MASK		0x03
/** @defgroup adc_ctrlb_ressel RESSEL Conversion Result Resolution
@{*/
/**@}*/

/** ADC_CTRLB_CORREN Digital Correction Logic Enabled **/
#define ADC_CTRLB_CORREN		(1 << 3)
/** ADC_CTRLB_FREERUN Free Running Mode **/
#define ADC_CTRLB_FREERUN		(1 << 2)
/** ADC_CTRLB_LEFTADJ Left-Adjusted Result **/
#define ADC_CTRLB_LEFTADJ		(1 << 1)
/** ADC_CTRLB_DIFFMODE Differential Mode **/
#define ADC_CTRLB_DIFFMODE		(1 << 0)

/**@}*/

/** @defgroup adc_winctrl WINCTRL Window Monitor Control
@{*/


#define ADC_WINCTRL_WINMODE_SHIFT		0
#define ADC_WINCTRL_WINMODE_MASK		0x07
/** @defgroup adc_winctrl_winmode WINMODE Window Monitor Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_swtrig SWTRIG Software Trigger
@{*/

/** ADC_SWTRIG_START ADC Start Conversion **/
#define ADC_SWTRIG_START		(1 << 1)
/** ADC_SWTRIG_FLUSH ADC Conversion Flush **/
#define ADC_SWTRIG_FLUSH		(1 << 0)

/**@}*/

/** @defgroup adc_inputctrl INPUTCTRL Input Control
@{*/


#define ADC_INPUTCTRL_GAIN_SHIFT		24
#define ADC_INPUTCTRL_GAIN_MASK		0x0f
/** @defgroup adc_inputctrl_gain GAIN Gain Factor Selection
@{*/
/**@}*/


#define ADC_INPUTCTRL_INPUTOFFSET_SHIFT		20
#define ADC_INPUTCTRL_INPUTOFFSET_MASK		0x0f
/** @defgroup adc_inputctrl_inputoffset INPUTOFFSET Positive Mux Setting Offset
@{*/
/**@}*/


#define ADC_INPUTCTRL_INPUTSCAN_SHIFT		16
#define ADC_INPUTCTRL_INPUTSCAN_MASK		0x0f
/** @defgroup adc_inputctrl_inputscan INPUTSCAN Number of Input Channels Included in Scan
@{*/
/**@}*/


#define ADC_INPUTCTRL_MUXNEG_SHIFT		8
#define ADC_INPUTCTRL_MUXNEG_MASK		0x1f
/** @defgroup adc_inputctrl_muxneg MUXNEG Negative Mux Input Selection
@{*/
/**@}*/


#define ADC_INPUTCTRL_MUXPOS_SHIFT		0
#define ADC_INPUTCTRL_MUXPOS_MASK		0x1f
/** @defgroup adc_inputctrl_muxpos MUXPOS Positive Mux Input Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_evctrl EVCTRL Event Control
@{*/

/** ADC_EVCTRL_WINMONEO Window Monitor Event Out **/
#define ADC_EVCTRL_WINMONEO		(1 << 5)
/** ADC_EVCTRL_RESRDYEO Result Ready Event Out **/
#define ADC_EVCTRL_RESRDYEO		(1 << 4)
/** ADC_EVCTRL_SYNCEI Synchronization Event In **/
#define ADC_EVCTRL_SYNCEI		(1 << 1)
/** ADC_EVCTRL_STARTEI Start Conversion Event In **/
#define ADC_EVCTRL_STARTEI		(1 << 0)

/**@}*/

/** @defgroup adc_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** ADC_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define ADC_INTENCLR_SYNCRDY		(1 << 3)
/** ADC_INTENCLR_WINMON Window Monitor Interrupt Enable **/
#define ADC_INTENCLR_WINMON		(1 << 2)
/** ADC_INTENCLR_OVERRUN Overrun Interrupt Enable **/
#define ADC_INTENCLR_OVERRUN		(1 << 1)
/** ADC_INTENCLR_RESRDY Result Ready Interrupt Enable **/
#define ADC_INTENCLR_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_intenset INTENSET Interrupt Enable Set
@{*/

/** ADC_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define ADC_INTENSET_SYNCRDY		(1 << 3)
/** ADC_INTENSET_WINMON Window Monitor Interrupt Enable **/
#define ADC_INTENSET_WINMON		(1 << 2)
/** ADC_INTENSET_OVERRUN Overrun Interrupt Enable **/
#define ADC_INTENSET_OVERRUN		(1 << 1)
/** ADC_INTENSET_RESRDY Result Ready Interrupt Enable **/
#define ADC_INTENSET_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** ADC_INTFLAG_SYNCRDY Synchronization Ready **/
#define ADC_INTFLAG_SYNCRDY		(1 << 3)
/** ADC_INTFLAG_WINMON Window Monitor **/
#define ADC_INTFLAG_WINMON		(1 << 2)
/** ADC_INTFLAG_OVERRUN Overrun **/
#define ADC_INTFLAG_OVERRUN		(1 << 1)
/** ADC_INTFLAG_RESRDY Result Ready **/
#define ADC_INTFLAG_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_status STATUS Status
@{*/

/** ADC_STATUS_SYNCBUSY Synchronization Busy **/
#define ADC_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup adc_result RESULT Result
@{*/


#define ADC_RESULT_RESULT_SHIFT		0
#define ADC_RESULT_RESULT_MASK		0xffff
/** @defgroup adc_result_result RESULT Result Conversion Value
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_winlt WINLT Window Monitor Lower Threshold
@{*/


#define ADC_WINLT_WINLT_SHIFT		0
#define ADC_WINLT_WINLT_MASK		0xffff
/** @defgroup adc_winlt_winlt WINLT Window Lower Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_winut WINUT Window Monitor Upper Threshold
@{*/


#define ADC_WINUT_WINUT_SHIFT		0
#define ADC_WINUT_WINUT_MASK		0xffff
/** @defgroup adc_winut_winut WINUT Window Upper Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_gaincorr GAINCORR Gain Correction
@{*/


#define ADC_GAINCORR_GAINCORR_SHIFT		0
#define ADC_GAINCORR_GAINCORR_MASK		0xfff
/** @defgroup adc_gaincorr_gaincorr GAINCORR Gain Correction Value
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_offsetcorr OFFSETCORR Offset Correction
@{*/


#define ADC_OFFSETCORR_OFFSETCORR_SHIFT		0
#define ADC_OFFSETCORR_OFFSETCORR_MASK		0xfff
/** @defgroup adc_offsetcorr_offsetcorr OFFSETCORR Offset Correction Value
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_calib CALIB Calibration
@{*/


#define ADC_CALIB_BIAS_CAL_SHIFT		8
#define ADC_CALIB_BIAS_CAL_MASK		0x07
/** @defgroup adc_calib_bias_cal BIASCAL Bias Calibration Value
@{*/
/**@}*/


#define ADC_CALIB_LINEARITY_CAL_SHIFT		0
#define ADC_CALIB_LINEARITY_CAL_MASK		0xff
/** @defgroup adc_calib_linearity_cal LINEARITYCAL Linearity Calibration Value
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_dbgctrl DBGCTRL Debug Control
@{*/

/** ADC_DBGCTRL_DBGRUN Debug Run **/
#define ADC_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

#pragma once 

/* --- ADC: Analog Digital Converter -------------------------------- */

/** @defgroup adc_registers Analog Digital Converter Register
@{*/

/** ADC_CTRLA Control A **/
#define ADC_CTRLA			MMIO32(ADC_BASE + 0x00)
/** ADC_CTRLB Control B **/
#define ADC_CTRLB			MMIO32(ADC_BASE + 0x01)
/** ADC_REFCTRL Reference Control **/
#define ADC_REFCTRL			MMIO32(ADC_BASE + 0x02)
/** ADC_EVCTRL Event Control **/
#define ADC_EVCTRL			MMIO32(ADC_BASE + 0x03)
/** ADC_INTENCLR Interrupt Enable Clear **/
#define ADC_INTENCLR			MMIO32(ADC_BASE + 0x04)
/** ADC_INTENSET Interrupt Enable Set **/
#define ADC_INTENSET			MMIO32(ADC_BASE + 0x05)
/** ADC_INTFLAG Interrupt Flag Status and Clear **/
#define ADC_INTFLAG			MMIO32(ADC_BASE + 0x06)
/** ADC_SEQSTATUS Sequence Status **/
#define ADC_SEQSTATUS			MMIO32(ADC_BASE + 0x07)
/** ADC_INPUTCTRL Input Control **/
#define ADC_INPUTCTRL			MMIO32(ADC_BASE + 0x08)
/** ADC_CTRLC Control C **/
#define ADC_CTRLC			MMIO32(ADC_BASE + 0x0a)
/** ADC_AVGCTRL Average Control **/
#define ADC_AVGCTRL			MMIO32(ADC_BASE + 0x0c)
/** ADC_SAMPCTRL Sample Time Control **/
#define ADC_SAMPCTRL			MMIO32(ADC_BASE + 0x0d)
/** ADC_WINLT Window Monitor Lower Threshold **/
#define ADC_WINLT			MMIO32(ADC_BASE + 0x0e)
/** ADC_WINUT Window Monitor Upper Threshold **/
#define ADC_WINUT			MMIO32(ADC_BASE + 0x10)
/** ADC_GAINCORR Gain Correction **/
#define ADC_GAINCORR			MMIO32(ADC_BASE + 0x12)
/** ADC_OFFSETCORR Offset Correction **/
#define ADC_OFFSETCORR			MMIO32(ADC_BASE + 0x14)
/** ADC_SWTRIG Software Trigger **/
#define ADC_SWTRIG			MMIO32(ADC_BASE + 0x18)
/** ADC_DBGCTRL Debug Control **/
#define ADC_DBGCTRL			MMIO32(ADC_BASE + 0x1c)
/** ADC_SYNCBUSY Synchronization Busy **/
#define ADC_SYNCBUSY			MMIO32(ADC_BASE + 0x20)
/** ADC_RESULT Result **/
#define ADC_RESULT			MMIO32(ADC_BASE + 0x24)
/** ADC_SEQCTRL Sequence Control **/
#define ADC_SEQCTRL			MMIO32(ADC_BASE + 0x28)
/** ADC_CALIB Calibration **/
#define ADC_CALIB			MMIO32(ADC_BASE + 0x2c)

/**@}*/


/** @defgroup adc_ctrla CTRLA Control A
@{*/

/** ADC_CTRLA_ONDEMAND On Demand Control **/
#define ADC_CTRLA_ONDEMAND		(1 << 7)
/** ADC_CTRLA_RUNSTDBY Run during Standby **/
#define ADC_CTRLA_RUNSTDBY		(1 << 6)
/** ADC_CTRLA_ENABLE Enable **/
#define ADC_CTRLA_ENABLE		(1 << 1)
/** ADC_CTRLA_SWRST Software Reset **/
#define ADC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup adc_ctrlb CTRLB Control B
@{*/


#define ADC_CTRLB_PRESCALER_SHIFT		0
#define ADC_CTRLB_PRESCALER_MASK		0x07
/** @defgroup adc_ctrlb_prescaler PRESCALER Prescaler Configuration
@{*/
/**@}*/


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

/** @defgroup adc_evctrl EVCTRL Event Control
@{*/

/** ADC_EVCTRL_WINMONEO Window Monitor Event Out **/
#define ADC_EVCTRL_WINMONEO		(1 << 5)
/** ADC_EVCTRL_RESRDYEO Result Ready Event Out **/
#define ADC_EVCTRL_RESRDYEO		(1 << 4)
/** ADC_EVCTRL_STARTINV Satrt Event Invert Enable **/
#define ADC_EVCTRL_STARTINV		(1 << 3)
/** ADC_EVCTRL_FLUSHINV Flush Event Invert Enable **/
#define ADC_EVCTRL_FLUSHINV		(1 << 2)
/** ADC_EVCTRL_STARTEI Start Conversion Event Input Enable **/
#define ADC_EVCTRL_STARTEI		(1 << 1)
/** ADC_EVCTRL_FLUSHEI Flush Event Input Enable **/
#define ADC_EVCTRL_FLUSHEI		(1 << 0)

/**@}*/

/** @defgroup adc_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** ADC_INTENCLR_WINMON Window Monitor Interrupt Disable **/
#define ADC_INTENCLR_WINMON		(1 << 2)
/** ADC_INTENCLR_OVERRUN Overrun Interrupt Disable **/
#define ADC_INTENCLR_OVERRUN		(1 << 1)
/** ADC_INTENCLR_RESRDY Result Ready Interrupt Disable **/
#define ADC_INTENCLR_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_intenset INTENSET Interrupt Enable Set
@{*/

/** ADC_INTENSET_WINMON Window Monitor Interrupt Enable **/
#define ADC_INTENSET_WINMON		(1 << 2)
/** ADC_INTENSET_OVERRUN Overrun Interrupt Enable **/
#define ADC_INTENSET_OVERRUN		(1 << 1)
/** ADC_INTENSET_RESRDY Result Ready Interrupt Enable **/
#define ADC_INTENSET_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** ADC_INTFLAG_WINMON Window Monitor Interrupt Flag **/
#define ADC_INTFLAG_WINMON		(1 << 2)
/** ADC_INTFLAG_OVERRUN Overrun Interrupt Flag **/
#define ADC_INTFLAG_OVERRUN		(1 << 1)
/** ADC_INTFLAG_RESRDY Result Ready Interrupt Flag **/
#define ADC_INTFLAG_RESRDY		(1 << 0)

/**@}*/

/** @defgroup adc_seqstatus SEQSTATUS Sequence Status
@{*/

/** ADC_SEQSTATUS_SEQBUSY Sequence Busy **/
#define ADC_SEQSTATUS_SEQBUSY		(1 << 7)

#define ADC_SEQSTATUS_SEQSTATE_SHIFT		0
#define ADC_SEQSTATUS_SEQSTATE_MASK		0x1f
/** @defgroup adc_seqstatus_seqstate SEQSTATE Sequence State
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_inputctrl INPUTCTRL Input Control
@{*/


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

/** @defgroup adc_ctrlc CTRLC Control C
@{*/


#define ADC_CTRLC_WINMODE_SHIFT		8
#define ADC_CTRLC_WINMODE_MASK		0x07
/** @defgroup adc_ctrlc_winmode WINMODE Window Monitor Mode
@{*/
/**@}*/


#define ADC_CTRLC_RESSEL_SHIFT		4
#define ADC_CTRLC_RESSEL_MASK		0x03
/** @defgroup adc_ctrlc_ressel RESSEL Conversion Result Resolution
@{*/
/**@}*/

/** ADC_CTRLC_CORREN Digital Correction Logic Enable **/
#define ADC_CTRLC_CORREN		(1 << 3)
/** ADC_CTRLC_FREERUN Free Running Mode **/
#define ADC_CTRLC_FREERUN		(1 << 2)
/** ADC_CTRLC_LEFTADJ Left-Adjusted Result **/
#define ADC_CTRLC_LEFTADJ		(1 << 1)
/** ADC_CTRLC_DIFFMODE Differential Mode **/
#define ADC_CTRLC_DIFFMODE		(1 << 0)

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

/** @defgroup adc_sampctrl SAMPCTRL Sample Time Control
@{*/

/** ADC_SAMPCTRL_OFFCOMP Comparator Offset Compensation Enable **/
#define ADC_SAMPCTRL_OFFCOMP		(1 << 7)

#define ADC_SAMPCTRL_SAMPLEN_SHIFT		0
#define ADC_SAMPCTRL_SAMPLEN_MASK		0x3f
/** @defgroup adc_sampctrl_samplen SAMPLEN Sampling Time Length
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

/** @defgroup adc_swtrig SWTRIG Software Trigger
@{*/

/** ADC_SWTRIG_START Start ADC Conversion **/
#define ADC_SWTRIG_START		(1 << 1)
/** ADC_SWTRIG_FLUSH ADC Flush **/
#define ADC_SWTRIG_FLUSH		(1 << 0)

/**@}*/

/** @defgroup adc_dbgctrl DBGCTRL Debug Control
@{*/

/** ADC_DBGCTRL_DBGRUN Debug Run **/
#define ADC_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup adc_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** ADC_SYNCBUSY_SWTRIG SWTRG Synchronization Busy **/
#define ADC_SYNCBUSY_SWTRIG		(1 << 10)
/** ADC_SYNCBUSY_OFFSETCORR OFFSETCTRL Synchronization Busy **/
#define ADC_SYNCBUSY_OFFSETCORR		(1 << 9)
/** ADC_SYNCBUSY_GAINCORR GAINCORR Synchronization Busy **/
#define ADC_SYNCBUSY_GAINCORR		(1 << 8)
/** ADC_SYNCBUSY_WINUT WINUT Synchronization Busy **/
#define ADC_SYNCBUSY_WINUT		(1 << 7)
/** ADC_SYNCBUSY_WINLT WINLT Synchronization Busy **/
#define ADC_SYNCBUSY_WINLT		(1 << 6)
/** ADC_SYNCBUSY_SAMPCTRL SAMPCTRL Synchronization Busy **/
#define ADC_SYNCBUSY_SAMPCTRL		(1 << 5)
/** ADC_SYNCBUSY_AVGCTRL AVGCTRL Synchronization Busy **/
#define ADC_SYNCBUSY_AVGCTRL		(1 << 4)
/** ADC_SYNCBUSY_CTRLC CTRLC Synchronization Busy **/
#define ADC_SYNCBUSY_CTRLC		(1 << 3)
/** ADC_SYNCBUSY_INPUTCTRL INPUTCTRL Synchronization Busy **/
#define ADC_SYNCBUSY_INPUTCTRL		(1 << 2)
/** ADC_SYNCBUSY_ENABLE ENABLE Synchronization Busy **/
#define ADC_SYNCBUSY_ENABLE		(1 << 1)
/** ADC_SYNCBUSY_SWRST SWRST Synchronization Busy **/
#define ADC_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup adc_result RESULT Result
@{*/


#define ADC_RESULT_RESULT_SHIFT		0
#define ADC_RESULT_RESULT_MASK		0xffff
/** @defgroup adc_result_result RESULT Result Value
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_seqctrl SEQCTRL Sequence Control
@{*/


#define ADC_SEQCTRL_SEQEN_SHIFT		0
#define ADC_SEQCTRL_SEQEN_MASK		0xffffffff
/** @defgroup adc_seqctrl_seqen SEQEN Enable Positive Input in the Sequence
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_calib CALIB Calibration
@{*/


#define ADC_CALIB_BIASREFBUF_SHIFT		8
#define ADC_CALIB_BIASREFBUF_MASK		0x07
/** @defgroup adc_calib_biasrefbuf BIASREFBUF Bias Reference Buffer Scaling
@{*/
/**@}*/


#define ADC_CALIB_BIASCOMP_SHIFT		0
#define ADC_CALIB_BIASCOMP_MASK		0x07
/** @defgroup adc_calib_biascomp BIASCOMP Bias Comparator Scaling
@{*/
/**@}*/


/**@}*/

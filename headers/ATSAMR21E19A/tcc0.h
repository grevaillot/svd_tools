#pragma once 

/* --- TCC0: Timer Counter Control 0 -------------------------------- */

/** @defgroup tcc0_registers Timer Counter Control 0 Register
@{*/

/** TCC0_CTRLA Control A **/
#define TCC0_CTRLA			MMIO32(TCC0_BASE + 0x00)
/** TCC0_CTRLBCLR Control B Clear **/
#define TCC0_CTRLBCLR			MMIO32(TCC0_BASE + 0x04)
/** TCC0_CTRLBSET Control B Set **/
#define TCC0_CTRLBSET			MMIO32(TCC0_BASE + 0x05)
/** TCC0_SYNCBUSY Synchronization Busy **/
#define TCC0_SYNCBUSY			MMIO32(TCC0_BASE + 0x08)
/** TCC0_FCTRLA Recoverable Fault A Configuration **/
#define TCC0_FCTRLA			MMIO32(TCC0_BASE + 0x0c)
/** TCC0_FCTRLB Recoverable Fault B Configuration **/
#define TCC0_FCTRLB			MMIO32(TCC0_BASE + 0x10)
/** TCC0_WEXCTRL Waveform Extension Configuration **/
#define TCC0_WEXCTRL			MMIO32(TCC0_BASE + 0x14)
/** TCC0_DRVCTRL Driver Control **/
#define TCC0_DRVCTRL			MMIO32(TCC0_BASE + 0x18)
/** TCC0_DBGCTRL Debug Control **/
#define TCC0_DBGCTRL			MMIO32(TCC0_BASE + 0x1e)
/** TCC0_EVCTRL Event Control **/
#define TCC0_EVCTRL			MMIO32(TCC0_BASE + 0x20)
/** TCC0_INTENCLR Interrupt Enable Clear **/
#define TCC0_INTENCLR			MMIO32(TCC0_BASE + 0x24)
/** TCC0_INTENSET Interrupt Enable Set **/
#define TCC0_INTENSET			MMIO32(TCC0_BASE + 0x28)
/** TCC0_INTFLAG Interrupt Flag Status and Clear **/
#define TCC0_INTFLAG			MMIO32(TCC0_BASE + 0x2c)
/** TCC0_STATUS Status **/
#define TCC0_STATUS			MMIO32(TCC0_BASE + 0x30)
/** TCC0_COUNT Count **/
#define TCC0_COUNT			MMIO32(TCC0_BASE + 0x34)
/** TCC0_COUNT_DITH4 Count **/
#define TCC0_COUNT_DITH4			MMIO32(TCC0_BASE + 0x34)
/** TCC0_COUNT_DITH5 Count **/
#define TCC0_COUNT_DITH5			MMIO32(TCC0_BASE + 0x34)
/** TCC0_COUNT_DITH6 Count **/
#define TCC0_COUNT_DITH6			MMIO32(TCC0_BASE + 0x34)
/** TCC0_PATT Pattern **/
#define TCC0_PATT			MMIO32(TCC0_BASE + 0x38)
/** TCC0_WAVE Waveform Control **/
#define TCC0_WAVE			MMIO32(TCC0_BASE + 0x3c)
/** TCC0_PER Period **/
#define TCC0_PER			MMIO32(TCC0_BASE + 0x40)
/** TCC0_PER_DITH4 Period **/
#define TCC0_PER_DITH4			MMIO32(TCC0_BASE + 0x40)
/** TCC0_PER_DITH5 Period **/
#define TCC0_PER_DITH5			MMIO32(TCC0_BASE + 0x40)
/** TCC0_PER_DITH6 Period **/
#define TCC0_PER_DITH6			MMIO32(TCC0_BASE + 0x40)
/** TCC0_CC0 Compare and Capture **/
#define TCC0_CC0			MMIO32(TCC0_BASE + 0x44)
/** TCC0_CC0_DITH4 Compare and Capture **/
#define TCC0_CC0_DITH4			MMIO32(TCC0_BASE + 0x44)
/** TCC0_CC0_DITH5 Compare and Capture **/
#define TCC0_CC0_DITH5			MMIO32(TCC0_BASE + 0x44)
/** TCC0_CC0_DITH6 Compare and Capture **/
#define TCC0_CC0_DITH6			MMIO32(TCC0_BASE + 0x44)
/** TCC0_CC1 Compare and Capture **/
#define TCC0_CC1			MMIO32(TCC0_BASE + 0x48)
/** TCC0_CC1_DITH4 Compare and Capture **/
#define TCC0_CC1_DITH4			MMIO32(TCC0_BASE + 0x48)
/** TCC0_CC1_DITH5 Compare and Capture **/
#define TCC0_CC1_DITH5			MMIO32(TCC0_BASE + 0x48)
/** TCC0_CC1_DITH6 Compare and Capture **/
#define TCC0_CC1_DITH6			MMIO32(TCC0_BASE + 0x48)
/** TCC0_CC2 Compare and Capture **/
#define TCC0_CC2			MMIO32(TCC0_BASE + 0x4c)
/** TCC0_CC2_DITH4 Compare and Capture **/
#define TCC0_CC2_DITH4			MMIO32(TCC0_BASE + 0x4c)
/** TCC0_CC2_DITH5 Compare and Capture **/
#define TCC0_CC2_DITH5			MMIO32(TCC0_BASE + 0x4c)
/** TCC0_CC2_DITH6 Compare and Capture **/
#define TCC0_CC2_DITH6			MMIO32(TCC0_BASE + 0x4c)
/** TCC0_CC3 Compare and Capture **/
#define TCC0_CC3			MMIO32(TCC0_BASE + 0x50)
/** TCC0_CC3_DITH4 Compare and Capture **/
#define TCC0_CC3_DITH4			MMIO32(TCC0_BASE + 0x50)
/** TCC0_CC3_DITH5 Compare and Capture **/
#define TCC0_CC3_DITH5			MMIO32(TCC0_BASE + 0x50)
/** TCC0_CC3_DITH6 Compare and Capture **/
#define TCC0_CC3_DITH6			MMIO32(TCC0_BASE + 0x50)
/** TCC0_PATTB Pattern Buffer **/
#define TCC0_PATTB			MMIO32(TCC0_BASE + 0x64)
/** TCC0_WAVEB Waveform Control Buffer **/
#define TCC0_WAVEB			MMIO32(TCC0_BASE + 0x68)
/** TCC0_PERB Period Buffer **/
#define TCC0_PERB			MMIO32(TCC0_BASE + 0x6c)
/** TCC0_PERB_DITH4 Period Buffer **/
#define TCC0_PERB_DITH4			MMIO32(TCC0_BASE + 0x6c)
/** TCC0_PERB_DITH5 Period Buffer **/
#define TCC0_PERB_DITH5			MMIO32(TCC0_BASE + 0x6c)
/** TCC0_PERB_DITH6 Period Buffer **/
#define TCC0_PERB_DITH6			MMIO32(TCC0_BASE + 0x6c)
/** TCC0_CCB0 Compare and Capture Buffer **/
#define TCC0_CCB0			MMIO32(TCC0_BASE + 0x70)
/** TCC0_CCB0_DITH4 Compare and Capture Buffer **/
#define TCC0_CCB0_DITH4			MMIO32(TCC0_BASE + 0x70)
/** TCC0_CCB0_DITH5 Compare and Capture Buffer **/
#define TCC0_CCB0_DITH5			MMIO32(TCC0_BASE + 0x70)
/** TCC0_CCB0_DITH6 Compare and Capture Buffer **/
#define TCC0_CCB0_DITH6			MMIO32(TCC0_BASE + 0x70)
/** TCC0_CCB1 Compare and Capture Buffer **/
#define TCC0_CCB1			MMIO32(TCC0_BASE + 0x74)
/** TCC0_CCB1_DITH4 Compare and Capture Buffer **/
#define TCC0_CCB1_DITH4			MMIO32(TCC0_BASE + 0x74)
/** TCC0_CCB1_DITH5 Compare and Capture Buffer **/
#define TCC0_CCB1_DITH5			MMIO32(TCC0_BASE + 0x74)
/** TCC0_CCB1_DITH6 Compare and Capture Buffer **/
#define TCC0_CCB1_DITH6			MMIO32(TCC0_BASE + 0x74)
/** TCC0_CCB2 Compare and Capture Buffer **/
#define TCC0_CCB2			MMIO32(TCC0_BASE + 0x78)
/** TCC0_CCB2_DITH4 Compare and Capture Buffer **/
#define TCC0_CCB2_DITH4			MMIO32(TCC0_BASE + 0x78)
/** TCC0_CCB2_DITH5 Compare and Capture Buffer **/
#define TCC0_CCB2_DITH5			MMIO32(TCC0_BASE + 0x78)
/** TCC0_CCB2_DITH6 Compare and Capture Buffer **/
#define TCC0_CCB2_DITH6			MMIO32(TCC0_BASE + 0x78)
/** TCC0_CCB3 Compare and Capture Buffer **/
#define TCC0_CCB3			MMIO32(TCC0_BASE + 0x7c)
/** TCC0_CCB3_DITH4 Compare and Capture Buffer **/
#define TCC0_CCB3_DITH4			MMIO32(TCC0_BASE + 0x7c)
/** TCC0_CCB3_DITH5 Compare and Capture Buffer **/
#define TCC0_CCB3_DITH5			MMIO32(TCC0_BASE + 0x7c)
/** TCC0_CCB3_DITH6 Compare and Capture Buffer **/
#define TCC0_CCB3_DITH6			MMIO32(TCC0_BASE + 0x7c)

/**@}*/


/** @defgroup tcc0_ctrla CTRLA Control A
@{*/

/** TCC0_CTRLA_CPTEN3 Capture Channel 3 Enable **/
#define TCC0_CTRLA_CPTEN3		(1 << 27)
/** TCC0_CTRLA_CPTEN2 Capture Channel 2 Enable **/
#define TCC0_CTRLA_CPTEN2		(1 << 26)
/** TCC0_CTRLA_CPTEN1 Capture Channel 1 Enable **/
#define TCC0_CTRLA_CPTEN1		(1 << 25)
/** TCC0_CTRLA_CPTEN0 Capture Channel 0 Enable **/
#define TCC0_CTRLA_CPTEN0		(1 << 24)
/** TCC0_CTRLA_ALOCK Auto Lock **/
#define TCC0_CTRLA_ALOCK		(1 << 14)

#define TCC0_CTRLA_PRESCSYNC_SHIFT		12
#define TCC0_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tcc0_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization Selection
@{*/
/**@}*/

/** TCC0_CTRLA_RUNSTDBY Run in Standby **/
#define TCC0_CTRLA_RUNSTDBY		(1 << 11)

#define TCC0_CTRLA_PRESCALER_SHIFT		8
#define TCC0_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tcc0_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define TCC0_CTRLA_RESOLUTION_SHIFT		5
#define TCC0_CTRLA_RESOLUTION_MASK		0x03
/** @defgroup tcc0_ctrla_resolution RESOLUTION Enhanced Resolution
@{*/
/**@}*/

/** TCC0_CTRLA_ENABLE Enable **/
#define TCC0_CTRLA_ENABLE		(1 << 1)
/** TCC0_CTRLA_SWRST Software Reset **/
#define TCC0_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tcc0_ctrlbclr CTRLBCLR Control B Clear
@{*/


#define TCC0_CTRLBCLR_CMD_SHIFT		5
#define TCC0_CTRLBCLR_CMD_MASK		0x07
/** @defgroup tcc0_ctrlbclr_cmd CMD TCC Command
@{*/
/**@}*/


#define TCC0_CTRLBCLR_IDXCMD_SHIFT		3
#define TCC0_CTRLBCLR_IDXCMD_MASK		0x03
/** @defgroup tcc0_ctrlbclr_idxcmd IDXCMD Ramp Index Command
@{*/
/**@}*/

/** TCC0_CTRLBCLR_ONESHOT One-Shot **/
#define TCC0_CTRLBCLR_ONESHOT		(1 << 2)
/** TCC0_CTRLBCLR_LUPD Lock Update **/
#define TCC0_CTRLBCLR_LUPD		(1 << 1)
/** TCC0_CTRLBCLR_DIR Counter Direction **/
#define TCC0_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tcc0_ctrlbset CTRLBSET Control B Set
@{*/


#define TCC0_CTRLBSET_CMD_SHIFT		5
#define TCC0_CTRLBSET_CMD_MASK		0x07
/** @defgroup tcc0_ctrlbset_cmd CMD TCC Command
@{*/
/**@}*/


#define TCC0_CTRLBSET_IDXCMD_SHIFT		3
#define TCC0_CTRLBSET_IDXCMD_MASK		0x03
/** @defgroup tcc0_ctrlbset_idxcmd IDXCMD Ramp Index Command
@{*/
/**@}*/

/** TCC0_CTRLBSET_ONESHOT One-Shot **/
#define TCC0_CTRLBSET_ONESHOT		(1 << 2)
/** TCC0_CTRLBSET_LUPD Lock Update **/
#define TCC0_CTRLBSET_LUPD		(1 << 1)
/** TCC0_CTRLBSET_DIR Counter Direction **/
#define TCC0_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tcc0_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** TCC0_SYNCBUSY_CCB3 Compare Channel Buffer 3 Busy **/
#define TCC0_SYNCBUSY_CCB3		(1 << 22)
/** TCC0_SYNCBUSY_CCB2 Compare Channel Buffer 2 Busy **/
#define TCC0_SYNCBUSY_CCB2		(1 << 21)
/** TCC0_SYNCBUSY_CCB1 Compare Channel Buffer 1 Busy **/
#define TCC0_SYNCBUSY_CCB1		(1 << 20)
/** TCC0_SYNCBUSY_CCB0 Compare Channel Buffer 0 Busy **/
#define TCC0_SYNCBUSY_CCB0		(1 << 19)
/** TCC0_SYNCBUSY_PERB Period Buffer Busy **/
#define TCC0_SYNCBUSY_PERB		(1 << 18)
/** TCC0_SYNCBUSY_WAVEB Wave Buffer Busy **/
#define TCC0_SYNCBUSY_WAVEB		(1 << 17)
/** TCC0_SYNCBUSY_PATTB Pattern Buffer Busy **/
#define TCC0_SYNCBUSY_PATTB		(1 << 16)
/** TCC0_SYNCBUSY_CC3 Compare Channel 3 Busy **/
#define TCC0_SYNCBUSY_CC3		(1 << 11)
/** TCC0_SYNCBUSY_CC2 Compare Channel 2 Busy **/
#define TCC0_SYNCBUSY_CC2		(1 << 10)
/** TCC0_SYNCBUSY_CC1 Compare Channel 1 Busy **/
#define TCC0_SYNCBUSY_CC1		(1 << 9)
/** TCC0_SYNCBUSY_CC0 Compare Channel 0 Busy **/
#define TCC0_SYNCBUSY_CC0		(1 << 8)
/** TCC0_SYNCBUSY_PER Period busy **/
#define TCC0_SYNCBUSY_PER		(1 << 7)
/** TCC0_SYNCBUSY_WAVE Wave Busy **/
#define TCC0_SYNCBUSY_WAVE		(1 << 6)
/** TCC0_SYNCBUSY_PATT Pattern Busy **/
#define TCC0_SYNCBUSY_PATT		(1 << 5)
/** TCC0_SYNCBUSY_COUNT Count Busy **/
#define TCC0_SYNCBUSY_COUNT		(1 << 4)
/** TCC0_SYNCBUSY_STATUS Status Busy **/
#define TCC0_SYNCBUSY_STATUS		(1 << 3)
/** TCC0_SYNCBUSY_CTRLB Ctrlb Busy **/
#define TCC0_SYNCBUSY_CTRLB		(1 << 2)
/** TCC0_SYNCBUSY_ENABLE Enable Busy **/
#define TCC0_SYNCBUSY_ENABLE		(1 << 1)
/** TCC0_SYNCBUSY_SWRST Swrst Busy **/
#define TCC0_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tcc0_fctrla FCTRLA Recoverable Fault A Configuration
@{*/


#define TCC0_FCTRLA_FILTERVAL_SHIFT		24
#define TCC0_FCTRLA_FILTERVAL_MASK		0x0f
/** @defgroup tcc0_fctrla_filterval FILTERVAL Fault A Filter Value
@{*/
/**@}*/


#define TCC0_FCTRLA_BLANKVAL_SHIFT		16
#define TCC0_FCTRLA_BLANKVAL_MASK		0xff
/** @defgroup tcc0_fctrla_blankval BLANKVAL Fault A Blanking Time
@{*/
/**@}*/


#define TCC0_FCTRLA_CAPTURE_SHIFT		12
#define TCC0_FCTRLA_CAPTURE_MASK		0x07
/** @defgroup tcc0_fctrla_capture CAPTURE Fault A Capture Action
@{*/
/**@}*/


#define TCC0_FCTRLA_CHSEL_SHIFT		10
#define TCC0_FCTRLA_CHSEL_MASK		0x03
/** @defgroup tcc0_fctrla_chsel CHSEL Fault A Capture Channel
@{*/
/**@}*/


#define TCC0_FCTRLA_HALT_SHIFT		8
#define TCC0_FCTRLA_HALT_MASK		0x03
/** @defgroup tcc0_fctrla_halt HALT Fault A Halt Mode
@{*/
/**@}*/

/** TCC0_FCTRLA_RESTART Fault A Restart **/
#define TCC0_FCTRLA_RESTART		(1 << 7)

#define TCC0_FCTRLA_BLANK_SHIFT		5
#define TCC0_FCTRLA_BLANK_MASK		0x03
/** @defgroup tcc0_fctrla_blank BLANK Fault A Blanking Mode
@{*/
/**@}*/

/** TCC0_FCTRLA_QUAL Fault A Qualification **/
#define TCC0_FCTRLA_QUAL		(1 << 4)
/** TCC0_FCTRLA_KEEP Fault A Keeper **/
#define TCC0_FCTRLA_KEEP		(1 << 3)

#define TCC0_FCTRLA_SRC_SHIFT		0
#define TCC0_FCTRLA_SRC_MASK		0x03
/** @defgroup tcc0_fctrla_src SRC Fault A Source
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_fctrlb FCTRLB Recoverable Fault B Configuration
@{*/


#define TCC0_FCTRLB_FILTERVAL_SHIFT		24
#define TCC0_FCTRLB_FILTERVAL_MASK		0x0f
/** @defgroup tcc0_fctrlb_filterval FILTERVAL Fault B Filter Value
@{*/
/**@}*/


#define TCC0_FCTRLB_BLANKVAL_SHIFT		16
#define TCC0_FCTRLB_BLANKVAL_MASK		0xff
/** @defgroup tcc0_fctrlb_blankval BLANKVAL Fault B Blanking Time
@{*/
/**@}*/


#define TCC0_FCTRLB_CAPTURE_SHIFT		12
#define TCC0_FCTRLB_CAPTURE_MASK		0x07
/** @defgroup tcc0_fctrlb_capture CAPTURE Fault B Capture Action
@{*/
/**@}*/


#define TCC0_FCTRLB_CHSEL_SHIFT		10
#define TCC0_FCTRLB_CHSEL_MASK		0x03
/** @defgroup tcc0_fctrlb_chsel CHSEL Fault B Capture Channel
@{*/
/**@}*/


#define TCC0_FCTRLB_HALT_SHIFT		8
#define TCC0_FCTRLB_HALT_MASK		0x03
/** @defgroup tcc0_fctrlb_halt HALT Fault B Halt Mode
@{*/
/**@}*/

/** TCC0_FCTRLB_RESTART Fault B Restart **/
#define TCC0_FCTRLB_RESTART		(1 << 7)

#define TCC0_FCTRLB_BLANK_SHIFT		5
#define TCC0_FCTRLB_BLANK_MASK		0x03
/** @defgroup tcc0_fctrlb_blank BLANK Fault B Blanking Mode
@{*/
/**@}*/

/** TCC0_FCTRLB_QUAL Fault B Qualification **/
#define TCC0_FCTRLB_QUAL		(1 << 4)
/** TCC0_FCTRLB_KEEP Fault B Keeper **/
#define TCC0_FCTRLB_KEEP		(1 << 3)

#define TCC0_FCTRLB_SRC_SHIFT		0
#define TCC0_FCTRLB_SRC_MASK		0x03
/** @defgroup tcc0_fctrlb_src SRC Fault B Source
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_wexctrl WEXCTRL Waveform Extension Configuration
@{*/


#define TCC0_WEXCTRL_DTHS_SHIFT		24
#define TCC0_WEXCTRL_DTHS_MASK		0xff
/** @defgroup tcc0_wexctrl_dths DTHS Dead-time High Side Outputs Value
@{*/
/**@}*/


#define TCC0_WEXCTRL_DTLS_SHIFT		16
#define TCC0_WEXCTRL_DTLS_MASK		0xff
/** @defgroup tcc0_wexctrl_dtls DTLS Dead-time Low Side Outputs Value
@{*/
/**@}*/

/** TCC0_WEXCTRL_DTIEN3 Dead-time Insertion Generator 3 Enable **/
#define TCC0_WEXCTRL_DTIEN3		(1 << 11)
/** TCC0_WEXCTRL_DTIEN2 Dead-time Insertion Generator 2 Enable **/
#define TCC0_WEXCTRL_DTIEN2		(1 << 10)
/** TCC0_WEXCTRL_DTIEN1 Dead-time Insertion Generator 1 Enable **/
#define TCC0_WEXCTRL_DTIEN1		(1 << 9)
/** TCC0_WEXCTRL_DTIEN0 Dead-time Insertion Generator 0 Enable **/
#define TCC0_WEXCTRL_DTIEN0		(1 << 8)

#define TCC0_WEXCTRL_OTMX_SHIFT		0
#define TCC0_WEXCTRL_OTMX_MASK		0x03
/** @defgroup tcc0_wexctrl_otmx OTMX Output Matrix
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_drvctrl DRVCTRL Driver Control
@{*/


#define TCC0_DRVCTRL_FILTERVAL1_SHIFT		28
#define TCC0_DRVCTRL_FILTERVAL1_MASK		0x0f
/** @defgroup tcc0_drvctrl_filterval1 FILTERVAL1 Non-Recoverable Fault Input 1 Filter Value
@{*/
/**@}*/


#define TCC0_DRVCTRL_FILTERVAL0_SHIFT		24
#define TCC0_DRVCTRL_FILTERVAL0_MASK		0x0f
/** @defgroup tcc0_drvctrl_filterval0 FILTERVAL0 Non-Recoverable Fault Input 0 Filter Value
@{*/
/**@}*/

/** TCC0_DRVCTRL_INVEN7 Output Waveform 7 Inversion **/
#define TCC0_DRVCTRL_INVEN7		(1 << 23)
/** TCC0_DRVCTRL_INVEN6 Output Waveform 6 Inversion **/
#define TCC0_DRVCTRL_INVEN6		(1 << 22)
/** TCC0_DRVCTRL_INVEN5 Output Waveform 5 Inversion **/
#define TCC0_DRVCTRL_INVEN5		(1 << 21)
/** TCC0_DRVCTRL_INVEN4 Output Waveform 4 Inversion **/
#define TCC0_DRVCTRL_INVEN4		(1 << 20)
/** TCC0_DRVCTRL_INVEN3 Output Waveform 3 Inversion **/
#define TCC0_DRVCTRL_INVEN3		(1 << 19)
/** TCC0_DRVCTRL_INVEN2 Output Waveform 2 Inversion **/
#define TCC0_DRVCTRL_INVEN2		(1 << 18)
/** TCC0_DRVCTRL_INVEN1 Output Waveform 1 Inversion **/
#define TCC0_DRVCTRL_INVEN1		(1 << 17)
/** TCC0_DRVCTRL_INVEN0 Output Waveform 0 Inversion **/
#define TCC0_DRVCTRL_INVEN0		(1 << 16)
/** TCC0_DRVCTRL_NRV7 Non-Recoverable State 7 Output Value **/
#define TCC0_DRVCTRL_NRV7		(1 << 15)
/** TCC0_DRVCTRL_NRV6 Non-Recoverable State 6 Output Value **/
#define TCC0_DRVCTRL_NRV6		(1 << 14)
/** TCC0_DRVCTRL_NRV5 Non-Recoverable State 5 Output Value **/
#define TCC0_DRVCTRL_NRV5		(1 << 13)
/** TCC0_DRVCTRL_NRV4 Non-Recoverable State 4 Output Value **/
#define TCC0_DRVCTRL_NRV4		(1 << 12)
/** TCC0_DRVCTRL_NRV3 Non-Recoverable State 3 Output Value **/
#define TCC0_DRVCTRL_NRV3		(1 << 11)
/** TCC0_DRVCTRL_NRV2 Non-Recoverable State 2 Output Value **/
#define TCC0_DRVCTRL_NRV2		(1 << 10)
/** TCC0_DRVCTRL_NRV1 Non-Recoverable State 1 Output Value **/
#define TCC0_DRVCTRL_NRV1		(1 << 9)
/** TCC0_DRVCTRL_NRV0 Non-Recoverable State 0 Output Value **/
#define TCC0_DRVCTRL_NRV0		(1 << 8)
/** TCC0_DRVCTRL_NRE7 Non-Recoverable State 7 Output Enable **/
#define TCC0_DRVCTRL_NRE7		(1 << 7)
/** TCC0_DRVCTRL_NRE6 Non-Recoverable State 6 Output Enable **/
#define TCC0_DRVCTRL_NRE6		(1 << 6)
/** TCC0_DRVCTRL_NRE5 Non-Recoverable State 5 Output Enable **/
#define TCC0_DRVCTRL_NRE5		(1 << 5)
/** TCC0_DRVCTRL_NRE4 Non-Recoverable State 4 Output Enable **/
#define TCC0_DRVCTRL_NRE4		(1 << 4)
/** TCC0_DRVCTRL_NRE3 Non-Recoverable State 3 Output Enable **/
#define TCC0_DRVCTRL_NRE3		(1 << 3)
/** TCC0_DRVCTRL_NRE2 Non-Recoverable State 2 Output Enable **/
#define TCC0_DRVCTRL_NRE2		(1 << 2)
/** TCC0_DRVCTRL_NRE1 Non-Recoverable State 1 Output Enable **/
#define TCC0_DRVCTRL_NRE1		(1 << 1)
/** TCC0_DRVCTRL_NRE0 Non-Recoverable State 0 Output Enable **/
#define TCC0_DRVCTRL_NRE0		(1 << 0)

/**@}*/

/** @defgroup tcc0_dbgctrl DBGCTRL Debug Control
@{*/

/** TCC0_DBGCTRL_FDDBD Fault Detection on Debug Break Detection **/
#define TCC0_DBGCTRL_FDDBD		(1 << 2)
/** TCC0_DBGCTRL_DBGRUN Debug Running Mode **/
#define TCC0_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tcc0_evctrl EVCTRL Event Control
@{*/

/** TCC0_EVCTRL_MCEO3 Match or Capture Channel 3 Event Output Enable **/
#define TCC0_EVCTRL_MCEO3		(1 << 27)
/** TCC0_EVCTRL_MCEO2 Match or Capture Channel 2 Event Output Enable **/
#define TCC0_EVCTRL_MCEO2		(1 << 26)
/** TCC0_EVCTRL_MCEO1 Match or Capture Channel 1 Event Output Enable **/
#define TCC0_EVCTRL_MCEO1		(1 << 25)
/** TCC0_EVCTRL_MCEO0 Match or Capture Channel 0 Event Output Enable **/
#define TCC0_EVCTRL_MCEO0		(1 << 24)
/** TCC0_EVCTRL_MCEI3 Match or Capture Channel 3 Event Input Enable **/
#define TCC0_EVCTRL_MCEI3		(1 << 19)
/** TCC0_EVCTRL_MCEI2 Match or Capture Channel 2 Event Input Enable **/
#define TCC0_EVCTRL_MCEI2		(1 << 18)
/** TCC0_EVCTRL_MCEI1 Match or Capture Channel 1 Event Input Enable **/
#define TCC0_EVCTRL_MCEI1		(1 << 17)
/** TCC0_EVCTRL_MCEI0 Match or Capture Channel 0 Event Input Enable **/
#define TCC0_EVCTRL_MCEI0		(1 << 16)
/** TCC0_EVCTRL_TCEI1 Timer/counter Event 1 Input Enable **/
#define TCC0_EVCTRL_TCEI1		(1 << 15)
/** TCC0_EVCTRL_TCEI0 Timer/counter Event 0 Input Enable **/
#define TCC0_EVCTRL_TCEI0		(1 << 14)
/** TCC0_EVCTRL_TCINV1 Inverted Event 1 Input Enable **/
#define TCC0_EVCTRL_TCINV1		(1 << 13)
/** TCC0_EVCTRL_TCINV0 Inverted Event 0 Input Enable **/
#define TCC0_EVCTRL_TCINV0		(1 << 12)
/** TCC0_EVCTRL_CNTEO Timer/counter Output Event Enable **/
#define TCC0_EVCTRL_CNTEO		(1 << 10)
/** TCC0_EVCTRL_TRGEO Retrigger Output Event Enable **/
#define TCC0_EVCTRL_TRGEO		(1 << 9)
/** TCC0_EVCTRL_OVFEO Overflow/Underflow Output Event Enable **/
#define TCC0_EVCTRL_OVFEO		(1 << 8)

#define TCC0_EVCTRL_CNTSEL_SHIFT		6
#define TCC0_EVCTRL_CNTSEL_MASK		0x03
/** @defgroup tcc0_evctrl_cntsel CNTSEL Timer/counter Output Event Mode
@{*/
/**@}*/


#define TCC0_EVCTRL_EVACT1_SHIFT		3
#define TCC0_EVCTRL_EVACT1_MASK		0x07
/** @defgroup tcc0_evctrl_evact1 EVACT1 Timer/counter Input Event1 Action
@{*/
/**@}*/


#define TCC0_EVCTRL_EVACT0_SHIFT		0
#define TCC0_EVCTRL_EVACT0_MASK		0x07
/** @defgroup tcc0_evctrl_evact0 EVACT0 Timer/counter Input Event0 Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** TCC0_INTENCLR_MC3 Match or Capture Channel 3 Interrupt Enable **/
#define TCC0_INTENCLR_MC3		(1 << 19)
/** TCC0_INTENCLR_MC2 Match or Capture Channel 2 Interrupt Enable **/
#define TCC0_INTENCLR_MC2		(1 << 18)
/** TCC0_INTENCLR_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TCC0_INTENCLR_MC1		(1 << 17)
/** TCC0_INTENCLR_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TCC0_INTENCLR_MC0		(1 << 16)
/** TCC0_INTENCLR_FAULT1 Non-Recoverable Fault 1 Interrupt Enable **/
#define TCC0_INTENCLR_FAULT1		(1 << 15)
/** TCC0_INTENCLR_FAULT0 Non-Recoverable Fault 0 Interrupt Enable **/
#define TCC0_INTENCLR_FAULT0		(1 << 14)
/** TCC0_INTENCLR_FAULTB Recoverable Fault B Interrupt Enable **/
#define TCC0_INTENCLR_FAULTB		(1 << 13)
/** TCC0_INTENCLR_FAULTA Recoverable Fault A Interrupt Enable **/
#define TCC0_INTENCLR_FAULTA		(1 << 12)
/** TCC0_INTENCLR_DFS Non-Recoverable Debug Fault Interrupt Enable **/
#define TCC0_INTENCLR_DFS		(1 << 11)
/** TCC0_INTENCLR_ERR Error Interrupt Enable **/
#define TCC0_INTENCLR_ERR		(1 << 3)
/** TCC0_INTENCLR_CNT Counter Interrupt Enable **/
#define TCC0_INTENCLR_CNT		(1 << 2)
/** TCC0_INTENCLR_TRG Retrigger Interrupt Enable **/
#define TCC0_INTENCLR_TRG		(1 << 1)
/** TCC0_INTENCLR_OVF Overflow Interrupt Enable **/
#define TCC0_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc0_intenset INTENSET Interrupt Enable Set
@{*/

/** TCC0_INTENSET_MC3 Match or Capture Channel 3 Interrupt Enable **/
#define TCC0_INTENSET_MC3		(1 << 19)
/** TCC0_INTENSET_MC2 Match or Capture Channel 2 Interrupt Enable **/
#define TCC0_INTENSET_MC2		(1 << 18)
/** TCC0_INTENSET_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TCC0_INTENSET_MC1		(1 << 17)
/** TCC0_INTENSET_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TCC0_INTENSET_MC0		(1 << 16)
/** TCC0_INTENSET_FAULT1 Non-Recoverable Fault 1 Interrupt Enable **/
#define TCC0_INTENSET_FAULT1		(1 << 15)
/** TCC0_INTENSET_FAULT0 Non-Recoverable Fault 0 Interrupt Enable **/
#define TCC0_INTENSET_FAULT0		(1 << 14)
/** TCC0_INTENSET_FAULTB Recoverable Fault B Interrupt Enable **/
#define TCC0_INTENSET_FAULTB		(1 << 13)
/** TCC0_INTENSET_FAULTA Recoverable Fault A Interrupt Enable **/
#define TCC0_INTENSET_FAULTA		(1 << 12)
/** TCC0_INTENSET_DFS Non-Recoverable Debug Fault Interrupt Enable **/
#define TCC0_INTENSET_DFS		(1 << 11)
/** TCC0_INTENSET_ERR Error Interrupt Enable **/
#define TCC0_INTENSET_ERR		(1 << 3)
/** TCC0_INTENSET_CNT Counter Interrupt Enable **/
#define TCC0_INTENSET_CNT		(1 << 2)
/** TCC0_INTENSET_TRG Retrigger Interrupt Enable **/
#define TCC0_INTENSET_TRG		(1 << 1)
/** TCC0_INTENSET_OVF Overflow Interrupt Enable **/
#define TCC0_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc0_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** TCC0_INTFLAG_MC3 Match or Capture 3 **/
#define TCC0_INTFLAG_MC3		(1 << 19)
/** TCC0_INTFLAG_MC2 Match or Capture 2 **/
#define TCC0_INTFLAG_MC2		(1 << 18)
/** TCC0_INTFLAG_MC1 Match or Capture 1 **/
#define TCC0_INTFLAG_MC1		(1 << 17)
/** TCC0_INTFLAG_MC0 Match or Capture 0 **/
#define TCC0_INTFLAG_MC0		(1 << 16)
/** TCC0_INTFLAG_FAULT1 Non-Recoverable Fault 1 **/
#define TCC0_INTFLAG_FAULT1		(1 << 15)
/** TCC0_INTFLAG_FAULT0 Non-Recoverable Fault 0 **/
#define TCC0_INTFLAG_FAULT0		(1 << 14)
/** TCC0_INTFLAG_FAULTB Recoverable Fault B **/
#define TCC0_INTFLAG_FAULTB		(1 << 13)
/** TCC0_INTFLAG_FAULTA Recoverable Fault A **/
#define TCC0_INTFLAG_FAULTA		(1 << 12)
/** TCC0_INTFLAG_DFS Non-Recoverable Debug Fault **/
#define TCC0_INTFLAG_DFS		(1 << 11)
/** TCC0_INTFLAG_ERR Error **/
#define TCC0_INTFLAG_ERR		(1 << 3)
/** TCC0_INTFLAG_CNT Counter **/
#define TCC0_INTFLAG_CNT		(1 << 2)
/** TCC0_INTFLAG_TRG Retrigger **/
#define TCC0_INTFLAG_TRG		(1 << 1)
/** TCC0_INTFLAG_OVF Overflow **/
#define TCC0_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc0_status STATUS Status
@{*/

/** TCC0_STATUS_CMP3 Compare Channel 3 Value **/
#define TCC0_STATUS_CMP3		(1 << 27)
/** TCC0_STATUS_CMP2 Compare Channel 2 Value **/
#define TCC0_STATUS_CMP2		(1 << 26)
/** TCC0_STATUS_CMP1 Compare Channel 1 Value **/
#define TCC0_STATUS_CMP1		(1 << 25)
/** TCC0_STATUS_CMP0 Compare Channel 0 Value **/
#define TCC0_STATUS_CMP0		(1 << 24)
/** TCC0_STATUS_CCBV3 Compare Channel 3 Buffer Valid **/
#define TCC0_STATUS_CCBV3		(1 << 19)
/** TCC0_STATUS_CCBV2 Compare Channel 2 Buffer Valid **/
#define TCC0_STATUS_CCBV2		(1 << 18)
/** TCC0_STATUS_CCBV1 Compare Channel 1 Buffer Valid **/
#define TCC0_STATUS_CCBV1		(1 << 17)
/** TCC0_STATUS_CCBV0 Compare Channel 0 Buffer Valid **/
#define TCC0_STATUS_CCBV0		(1 << 16)
/** TCC0_STATUS_FAULT1 Non-Recoverable Fault 1 State **/
#define TCC0_STATUS_FAULT1		(1 << 15)
/** TCC0_STATUS_FAULT0 Non-Recoverable Fault 0 State **/
#define TCC0_STATUS_FAULT0		(1 << 14)
/** TCC0_STATUS_FAULTB Recoverable Fault B State **/
#define TCC0_STATUS_FAULTB		(1 << 13)
/** TCC0_STATUS_FAULTA Recoverable Fault A State **/
#define TCC0_STATUS_FAULTA		(1 << 12)
/** TCC0_STATUS_FAULT1IN Non-Recoverable Fault1 Input **/
#define TCC0_STATUS_FAULT1IN		(1 << 11)
/** TCC0_STATUS_FAULT0IN Non-Recoverable Fault0 Input **/
#define TCC0_STATUS_FAULT0IN		(1 << 10)
/** TCC0_STATUS_FAULTBIN Recoverable Fault B Input **/
#define TCC0_STATUS_FAULTBIN		(1 << 9)
/** TCC0_STATUS_FAULTAIN Recoverable Fault A Input **/
#define TCC0_STATUS_FAULTAIN		(1 << 8)
/** TCC0_STATUS_PERBV Period Buffer Valid **/
#define TCC0_STATUS_PERBV		(1 << 7)
/** TCC0_STATUS_WAVEBV Wave Buffer Valid **/
#define TCC0_STATUS_WAVEBV		(1 << 6)
/** TCC0_STATUS_PATTBV Pattern Buffer Valid **/
#define TCC0_STATUS_PATTBV		(1 << 5)
/** TCC0_STATUS_SLAVE Slave **/
#define TCC0_STATUS_SLAVE		(1 << 4)
/** TCC0_STATUS_DFS Non-Recoverable Debug Fault State **/
#define TCC0_STATUS_DFS		(1 << 3)
/** TCC0_STATUS_IDX Ramp **/
#define TCC0_STATUS_IDX		(1 << 1)
/** TCC0_STATUS_STOP Stop **/
#define TCC0_STATUS_STOP		(1 << 0)

/**@}*/

/** @defgroup tcc0_count COUNT Count
@{*/


#define TCC0_COUNT_COUNT_SHIFT		0
#define TCC0_COUNT_COUNT_MASK		0xffffff
/** @defgroup tcc0_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_count_dith4 COUNTDITH4 Count
@{*/


#define TCC0_COUNT_DITH4_COUNT_SHIFT		4
#define TCC0_COUNT_DITH4_COUNT_MASK		0xfffff
/** @defgroup tcc0_count_dith4_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_count_dith5 COUNTDITH5 Count
@{*/


#define TCC0_COUNT_DITH5_COUNT_SHIFT		5
#define TCC0_COUNT_DITH5_COUNT_MASK		0x7ffff
/** @defgroup tcc0_count_dith5_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_count_dith6 COUNTDITH6 Count
@{*/


#define TCC0_COUNT_DITH6_COUNT_SHIFT		6
#define TCC0_COUNT_DITH6_COUNT_MASK		0x3ffff
/** @defgroup tcc0_count_dith6_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_patt PATT Pattern
@{*/

/** TCC0_PATT_PGV7 Pattern Generator 7 Output Value **/
#define TCC0_PATT_PGV7		(1 << 15)
/** TCC0_PATT_PGV6 Pattern Generator 6 Output Value **/
#define TCC0_PATT_PGV6		(1 << 14)
/** TCC0_PATT_PGV5 Pattern Generator 5 Output Value **/
#define TCC0_PATT_PGV5		(1 << 13)
/** TCC0_PATT_PGV4 Pattern Generator 4 Output Value **/
#define TCC0_PATT_PGV4		(1 << 12)
/** TCC0_PATT_PGV3 Pattern Generator 3 Output Value **/
#define TCC0_PATT_PGV3		(1 << 11)
/** TCC0_PATT_PGV2 Pattern Generator 2 Output Value **/
#define TCC0_PATT_PGV2		(1 << 10)
/** TCC0_PATT_PGV1 Pattern Generator 1 Output Value **/
#define TCC0_PATT_PGV1		(1 << 9)
/** TCC0_PATT_PGV0 Pattern Generator 0 Output Value **/
#define TCC0_PATT_PGV0		(1 << 8)
/** TCC0_PATT_PGE7 Pattern Generator 7 Output Enable **/
#define TCC0_PATT_PGE7		(1 << 7)
/** TCC0_PATT_PGE6 Pattern Generator 6 Output Enable **/
#define TCC0_PATT_PGE6		(1 << 6)
/** TCC0_PATT_PGE5 Pattern Generator 5 Output Enable **/
#define TCC0_PATT_PGE5		(1 << 5)
/** TCC0_PATT_PGE4 Pattern Generator 4 Output Enable **/
#define TCC0_PATT_PGE4		(1 << 4)
/** TCC0_PATT_PGE3 Pattern Generator 3 Output Enable **/
#define TCC0_PATT_PGE3		(1 << 3)
/** TCC0_PATT_PGE2 Pattern Generator 2 Output Enable **/
#define TCC0_PATT_PGE2		(1 << 2)
/** TCC0_PATT_PGE1 Pattern Generator 1 Output Enable **/
#define TCC0_PATT_PGE1		(1 << 1)
/** TCC0_PATT_PGE0 Pattern Generator 0 Output Enable **/
#define TCC0_PATT_PGE0		(1 << 0)

/**@}*/

/** @defgroup tcc0_wave WAVE Waveform Control
@{*/

/** TCC0_WAVE_SWAP3 Swap DTI Output Pair 3 **/
#define TCC0_WAVE_SWAP3		(1 << 27)
/** TCC0_WAVE_SWAP2 Swap DTI Output Pair 2 **/
#define TCC0_WAVE_SWAP2		(1 << 26)
/** TCC0_WAVE_SWAP1 Swap DTI Output Pair 1 **/
#define TCC0_WAVE_SWAP1		(1 << 25)
/** TCC0_WAVE_SWAP0 Swap DTI Output Pair 0 **/
#define TCC0_WAVE_SWAP0		(1 << 24)
/** TCC0_WAVE_POL3 Channel 3 Polarity **/
#define TCC0_WAVE_POL3		(1 << 19)
/** TCC0_WAVE_POL2 Channel 2 Polarity **/
#define TCC0_WAVE_POL2		(1 << 18)
/** TCC0_WAVE_POL1 Channel 1 Polarity **/
#define TCC0_WAVE_POL1		(1 << 17)
/** TCC0_WAVE_POL0 Channel 0 Polarity **/
#define TCC0_WAVE_POL0		(1 << 16)
/** TCC0_WAVE_CICCEN3 Circular Channel 3 Enable **/
#define TCC0_WAVE_CICCEN3		(1 << 11)
/** TCC0_WAVE_CICCEN2 Circular Channel 2 Enable **/
#define TCC0_WAVE_CICCEN2		(1 << 10)
/** TCC0_WAVE_CICCEN1 Circular Channel 1 Enable **/
#define TCC0_WAVE_CICCEN1		(1 << 9)
/** TCC0_WAVE_CICCEN0 Circular Channel 0 Enable **/
#define TCC0_WAVE_CICCEN0		(1 << 8)
/** TCC0_WAVE_CIPEREN Circular period Enable **/
#define TCC0_WAVE_CIPEREN		(1 << 7)

#define TCC0_WAVE_RAMP_SHIFT		4
#define TCC0_WAVE_RAMP_MASK		0x03
/** @defgroup tcc0_wave_ramp RAMP Ramp Mode
@{*/
/**@}*/


#define TCC0_WAVE_WAVEGEN_SHIFT		0
#define TCC0_WAVE_WAVEGEN_MASK		0x07
/** @defgroup tcc0_wave_wavegen WAVEGEN Waveform Generation
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_per PER Period
@{*/


#define TCC0_PER_PER_SHIFT		0
#define TCC0_PER_PER_MASK		0xffffff
/** @defgroup tcc0_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_per_dith4 PERDITH4 Period
@{*/


#define TCC0_PER_DITH4_PER_SHIFT		4
#define TCC0_PER_DITH4_PER_MASK		0xfffff
/** @defgroup tcc0_per_dith4_per PER Period Value
@{*/
/**@}*/


#define TCC0_PER_DITH4_DITHERCY_SHIFT		0
#define TCC0_PER_DITH4_DITHERCY_MASK		0x0f
/** @defgroup tcc0_per_dith4_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_per_dith5 PERDITH5 Period
@{*/


#define TCC0_PER_DITH5_PER_SHIFT		5
#define TCC0_PER_DITH5_PER_MASK		0x7ffff
/** @defgroup tcc0_per_dith5_per PER Period Value
@{*/
/**@}*/


#define TCC0_PER_DITH5_DITHERCY_SHIFT		0
#define TCC0_PER_DITH5_DITHERCY_MASK		0x1f
/** @defgroup tcc0_per_dith5_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_per_dith6 PERDITH6 Period
@{*/


#define TCC0_PER_DITH6_PER_SHIFT		6
#define TCC0_PER_DITH6_PER_MASK		0x3ffff
/** @defgroup tcc0_per_dith6_per PER Period Value
@{*/
/**@}*/


#define TCC0_PER_DITH6_DITHERCY_SHIFT		0
#define TCC0_PER_DITH6_DITHERCY_MASK		0x3f
/** @defgroup tcc0_per_dith6_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc0 CC0 Compare and Capture
@{*/


#define TCC0_CC0_CC_SHIFT		0
#define TCC0_CC0_CC_MASK		0xffffff
/** @defgroup tcc0_cc0_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc0_dith4 CC0DITH4 Compare and Capture
@{*/


#define TCC0_CC0_DITH4_CC_SHIFT		4
#define TCC0_CC0_DITH4_CC_MASK		0xfffff
/** @defgroup tcc0_cc0_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC0_DITH4_DITHERCY_SHIFT		0
#define TCC0_CC0_DITH4_DITHERCY_MASK		0x0f
/** @defgroup tcc0_cc0_dith4_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc0_dith5 CC0DITH5 Compare and Capture
@{*/


#define TCC0_CC0_DITH5_CC_SHIFT		5
#define TCC0_CC0_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc0_cc0_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC0_DITH5_DITHERCY_SHIFT		0
#define TCC0_CC0_DITH5_DITHERCY_MASK		0x1f
/** @defgroup tcc0_cc0_dith5_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc0_dith6 CC0DITH6 Compare and Capture
@{*/


#define TCC0_CC0_DITH6_CC_SHIFT		6
#define TCC0_CC0_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc0_cc0_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC0_DITH6_DITHERCY_SHIFT		0
#define TCC0_CC0_DITH6_DITHERCY_MASK		0x3f
/** @defgroup tcc0_cc0_dith6_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc1 CC1 Compare and Capture
@{*/


#define TCC0_CC1_CC_SHIFT		0
#define TCC0_CC1_CC_MASK		0xffffff
/** @defgroup tcc0_cc1_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc1_dith4 CC1DITH4 Compare and Capture
@{*/


#define TCC0_CC1_DITH4_CC_SHIFT		4
#define TCC0_CC1_DITH4_CC_MASK		0xfffff
/** @defgroup tcc0_cc1_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC1_DITH4_DITHERCY_SHIFT		0
#define TCC0_CC1_DITH4_DITHERCY_MASK		0x0f
/** @defgroup tcc0_cc1_dith4_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc1_dith5 CC1DITH5 Compare and Capture
@{*/


#define TCC0_CC1_DITH5_CC_SHIFT		5
#define TCC0_CC1_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc0_cc1_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC1_DITH5_DITHERCY_SHIFT		0
#define TCC0_CC1_DITH5_DITHERCY_MASK		0x1f
/** @defgroup tcc0_cc1_dith5_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc1_dith6 CC1DITH6 Compare and Capture
@{*/


#define TCC0_CC1_DITH6_CC_SHIFT		6
#define TCC0_CC1_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc0_cc1_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC1_DITH6_DITHERCY_SHIFT		0
#define TCC0_CC1_DITH6_DITHERCY_MASK		0x3f
/** @defgroup tcc0_cc1_dith6_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc2 CC2 Compare and Capture
@{*/


#define TCC0_CC2_CC_SHIFT		0
#define TCC0_CC2_CC_MASK		0xffffff
/** @defgroup tcc0_cc2_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc2_dith4 CC2DITH4 Compare and Capture
@{*/


#define TCC0_CC2_DITH4_CC_SHIFT		4
#define TCC0_CC2_DITH4_CC_MASK		0xfffff
/** @defgroup tcc0_cc2_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC2_DITH4_DITHERCY_SHIFT		0
#define TCC0_CC2_DITH4_DITHERCY_MASK		0x0f
/** @defgroup tcc0_cc2_dith4_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc2_dith5 CC2DITH5 Compare and Capture
@{*/


#define TCC0_CC2_DITH5_CC_SHIFT		5
#define TCC0_CC2_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc0_cc2_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC2_DITH5_DITHERCY_SHIFT		0
#define TCC0_CC2_DITH5_DITHERCY_MASK		0x1f
/** @defgroup tcc0_cc2_dith5_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc2_dith6 CC2DITH6 Compare and Capture
@{*/


#define TCC0_CC2_DITH6_CC_SHIFT		6
#define TCC0_CC2_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc0_cc2_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC2_DITH6_DITHERCY_SHIFT		0
#define TCC0_CC2_DITH6_DITHERCY_MASK		0x3f
/** @defgroup tcc0_cc2_dith6_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc3 CC3 Compare and Capture
@{*/


#define TCC0_CC3_CC_SHIFT		0
#define TCC0_CC3_CC_MASK		0xffffff
/** @defgroup tcc0_cc3_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc3_dith4 CC3DITH4 Compare and Capture
@{*/


#define TCC0_CC3_DITH4_CC_SHIFT		4
#define TCC0_CC3_DITH4_CC_MASK		0xfffff
/** @defgroup tcc0_cc3_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC3_DITH4_DITHERCY_SHIFT		0
#define TCC0_CC3_DITH4_DITHERCY_MASK		0x0f
/** @defgroup tcc0_cc3_dith4_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc3_dith5 CC3DITH5 Compare and Capture
@{*/


#define TCC0_CC3_DITH5_CC_SHIFT		5
#define TCC0_CC3_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc0_cc3_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC3_DITH5_DITHERCY_SHIFT		0
#define TCC0_CC3_DITH5_DITHERCY_MASK		0x1f
/** @defgroup tcc0_cc3_dith5_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_cc3_dith6 CC3DITH6 Compare and Capture
@{*/


#define TCC0_CC3_DITH6_CC_SHIFT		6
#define TCC0_CC3_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc0_cc3_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC0_CC3_DITH6_DITHERCY_SHIFT		0
#define TCC0_CC3_DITH6_DITHERCY_MASK		0x3f
/** @defgroup tcc0_cc3_dith6_dithercy DITHERCY Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_pattb PATTB Pattern Buffer
@{*/

/** TCC0_PATTB_PGVB7 Pattern Generator 7 Output Enable **/
#define TCC0_PATTB_PGVB7		(1 << 15)
/** TCC0_PATTB_PGVB6 Pattern Generator 6 Output Enable **/
#define TCC0_PATTB_PGVB6		(1 << 14)
/** TCC0_PATTB_PGVB5 Pattern Generator 5 Output Enable **/
#define TCC0_PATTB_PGVB5		(1 << 13)
/** TCC0_PATTB_PGVB4 Pattern Generator 4 Output Enable **/
#define TCC0_PATTB_PGVB4		(1 << 12)
/** TCC0_PATTB_PGVB3 Pattern Generator 3 Output Enable **/
#define TCC0_PATTB_PGVB3		(1 << 11)
/** TCC0_PATTB_PGVB2 Pattern Generator 2 Output Enable **/
#define TCC0_PATTB_PGVB2		(1 << 10)
/** TCC0_PATTB_PGVB1 Pattern Generator 1 Output Enable **/
#define TCC0_PATTB_PGVB1		(1 << 9)
/** TCC0_PATTB_PGVB0 Pattern Generator 0 Output Enable **/
#define TCC0_PATTB_PGVB0		(1 << 8)
/** TCC0_PATTB_PGEB7 Pattern Generator 7 Output Enable Buffer **/
#define TCC0_PATTB_PGEB7		(1 << 7)
/** TCC0_PATTB_PGEB6 Pattern Generator 6 Output Enable Buffer **/
#define TCC0_PATTB_PGEB6		(1 << 6)
/** TCC0_PATTB_PGEB5 Pattern Generator 5 Output Enable Buffer **/
#define TCC0_PATTB_PGEB5		(1 << 5)
/** TCC0_PATTB_PGEB4 Pattern Generator 4 Output Enable Buffer **/
#define TCC0_PATTB_PGEB4		(1 << 4)
/** TCC0_PATTB_PGEB3 Pattern Generator 3 Output Enable Buffer **/
#define TCC0_PATTB_PGEB3		(1 << 3)
/** TCC0_PATTB_PGEB2 Pattern Generator 2 Output Enable Buffer **/
#define TCC0_PATTB_PGEB2		(1 << 2)
/** TCC0_PATTB_PGEB1 Pattern Generator 1 Output Enable Buffer **/
#define TCC0_PATTB_PGEB1		(1 << 1)
/** TCC0_PATTB_PGEB0 Pattern Generator 0 Output Enable Buffer **/
#define TCC0_PATTB_PGEB0		(1 << 0)

/**@}*/

/** @defgroup tcc0_waveb WAVEB Waveform Control Buffer
@{*/

/** TCC0_WAVEB_SWAPB3 Swap DTI Output Pair 3 Buffer **/
#define TCC0_WAVEB_SWAPB3		(1 << 27)
/** TCC0_WAVEB_SWAPB2 Swap DTI Output Pair 2 Buffer **/
#define TCC0_WAVEB_SWAPB2		(1 << 26)
/** TCC0_WAVEB_SWAPB1 Swap DTI Output Pair 1 Buffer **/
#define TCC0_WAVEB_SWAPB1		(1 << 25)
/** TCC0_WAVEB_SWAPB0 Swap DTI Output Pair 0 Buffer **/
#define TCC0_WAVEB_SWAPB0		(1 << 24)
/** TCC0_WAVEB_POLB3 Channel 3 Polarity Buffer **/
#define TCC0_WAVEB_POLB3		(1 << 19)
/** TCC0_WAVEB_POLB2 Channel 2 Polarity Buffer **/
#define TCC0_WAVEB_POLB2		(1 << 18)
/** TCC0_WAVEB_POLB1 Channel 1 Polarity Buffer **/
#define TCC0_WAVEB_POLB1		(1 << 17)
/** TCC0_WAVEB_POLB0 Channel 0 Polarity Buffer **/
#define TCC0_WAVEB_POLB0		(1 << 16)
/** TCC0_WAVEB_CICCENB3 Circular Channel 3 Enable Buffer **/
#define TCC0_WAVEB_CICCENB3		(1 << 11)
/** TCC0_WAVEB_CICCENB2 Circular Channel 2 Enable Buffer **/
#define TCC0_WAVEB_CICCENB2		(1 << 10)
/** TCC0_WAVEB_CICCENB1 Circular Channel 1 Enable Buffer **/
#define TCC0_WAVEB_CICCENB1		(1 << 9)
/** TCC0_WAVEB_CICCENB0 Circular Channel 0 Enable Buffer **/
#define TCC0_WAVEB_CICCENB0		(1 << 8)
/** TCC0_WAVEB_CIPERENB Circular Period Enable Buffer **/
#define TCC0_WAVEB_CIPERENB		(1 << 7)

#define TCC0_WAVEB_RAMPB_SHIFT		4
#define TCC0_WAVEB_RAMPB_MASK		0x03
/** @defgroup tcc0_waveb_rampb RAMPB Ramp Mode Buffer
@{*/
/**@}*/


#define TCC0_WAVEB_WAVEGENB_SHIFT		0
#define TCC0_WAVEB_WAVEGENB_MASK		0x07
/** @defgroup tcc0_waveb_wavegenb WAVEGENB Waveform Generation Buffer
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_perb PERB Period Buffer
@{*/


#define TCC0_PERB_PERB_SHIFT		0
#define TCC0_PERB_PERB_MASK		0xffffff
/** @defgroup tcc0_perb_perb PERB Period Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_perb_dith4 PERBDITH4 Period Buffer
@{*/


#define TCC0_PERB_DITH4_PERB_SHIFT		4
#define TCC0_PERB_DITH4_PERB_MASK		0xfffff
/** @defgroup tcc0_perb_dith4_perb PERB Period Buffer Value
@{*/
/**@}*/


#define TCC0_PERB_DITH4_DITHERCYB_SHIFT		0
#define TCC0_PERB_DITH4_DITHERCYB_MASK		0x0f
/** @defgroup tcc0_perb_dith4_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_perb_dith5 PERBDITH5 Period Buffer
@{*/


#define TCC0_PERB_DITH5_PERB_SHIFT		5
#define TCC0_PERB_DITH5_PERB_MASK		0x7ffff
/** @defgroup tcc0_perb_dith5_perb PERB Period Buffer Value
@{*/
/**@}*/


#define TCC0_PERB_DITH5_DITHERCYB_SHIFT		0
#define TCC0_PERB_DITH5_DITHERCYB_MASK		0x1f
/** @defgroup tcc0_perb_dith5_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_perb_dith6 PERBDITH6 Period Buffer
@{*/


#define TCC0_PERB_DITH6_PERB_SHIFT		6
#define TCC0_PERB_DITH6_PERB_MASK		0x3ffff
/** @defgroup tcc0_perb_dith6_perb PERB Period Buffer Value
@{*/
/**@}*/


#define TCC0_PERB_DITH6_DITHERCYB_SHIFT		0
#define TCC0_PERB_DITH6_DITHERCYB_MASK		0x3f
/** @defgroup tcc0_perb_dith6_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb0 CCB0 Compare and Capture Buffer
@{*/


#define TCC0_CCB0_CCB_SHIFT		0
#define TCC0_CCB0_CCB_MASK		0xffffff
/** @defgroup tcc0_ccb0_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb0_dith4 CCB0DITH4 Compare and Capture Buffer
@{*/


#define TCC0_CCB0_DITH4_CCB_SHIFT		4
#define TCC0_CCB0_DITH4_CCB_MASK		0xfffff
/** @defgroup tcc0_ccb0_dith4_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB0_DITH4_DITHERCYB_SHIFT		0
#define TCC0_CCB0_DITH4_DITHERCYB_MASK		0x0f
/** @defgroup tcc0_ccb0_dith4_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb0_dith5 CCB0DITH5 Compare and Capture Buffer
@{*/


#define TCC0_CCB0_DITH5_CCB_SHIFT		5
#define TCC0_CCB0_DITH5_CCB_MASK		0x7ffff
/** @defgroup tcc0_ccb0_dith5_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB0_DITH5_DITHERCYB_SHIFT		0
#define TCC0_CCB0_DITH5_DITHERCYB_MASK		0x1f
/** @defgroup tcc0_ccb0_dith5_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb0_dith6 CCB0DITH6 Compare and Capture Buffer
@{*/


#define TCC0_CCB0_DITH6_CCB_SHIFT		6
#define TCC0_CCB0_DITH6_CCB_MASK		0x3ffff
/** @defgroup tcc0_ccb0_dith6_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB0_DITH6_DITHERCYB_SHIFT		0
#define TCC0_CCB0_DITH6_DITHERCYB_MASK		0x3f
/** @defgroup tcc0_ccb0_dith6_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb1 CCB1 Compare and Capture Buffer
@{*/


#define TCC0_CCB1_CCB_SHIFT		0
#define TCC0_CCB1_CCB_MASK		0xffffff
/** @defgroup tcc0_ccb1_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb1_dith4 CCB1DITH4 Compare and Capture Buffer
@{*/


#define TCC0_CCB1_DITH4_CCB_SHIFT		4
#define TCC0_CCB1_DITH4_CCB_MASK		0xfffff
/** @defgroup tcc0_ccb1_dith4_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB1_DITH4_DITHERCYB_SHIFT		0
#define TCC0_CCB1_DITH4_DITHERCYB_MASK		0x0f
/** @defgroup tcc0_ccb1_dith4_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb1_dith5 CCB1DITH5 Compare and Capture Buffer
@{*/


#define TCC0_CCB1_DITH5_CCB_SHIFT		5
#define TCC0_CCB1_DITH5_CCB_MASK		0x7ffff
/** @defgroup tcc0_ccb1_dith5_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB1_DITH5_DITHERCYB_SHIFT		0
#define TCC0_CCB1_DITH5_DITHERCYB_MASK		0x1f
/** @defgroup tcc0_ccb1_dith5_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb1_dith6 CCB1DITH6 Compare and Capture Buffer
@{*/


#define TCC0_CCB1_DITH6_CCB_SHIFT		6
#define TCC0_CCB1_DITH6_CCB_MASK		0x3ffff
/** @defgroup tcc0_ccb1_dith6_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB1_DITH6_DITHERCYB_SHIFT		0
#define TCC0_CCB1_DITH6_DITHERCYB_MASK		0x3f
/** @defgroup tcc0_ccb1_dith6_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb2 CCB2 Compare and Capture Buffer
@{*/


#define TCC0_CCB2_CCB_SHIFT		0
#define TCC0_CCB2_CCB_MASK		0xffffff
/** @defgroup tcc0_ccb2_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb2_dith4 CCB2DITH4 Compare and Capture Buffer
@{*/


#define TCC0_CCB2_DITH4_CCB_SHIFT		4
#define TCC0_CCB2_DITH4_CCB_MASK		0xfffff
/** @defgroup tcc0_ccb2_dith4_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB2_DITH4_DITHERCYB_SHIFT		0
#define TCC0_CCB2_DITH4_DITHERCYB_MASK		0x0f
/** @defgroup tcc0_ccb2_dith4_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb2_dith5 CCB2DITH5 Compare and Capture Buffer
@{*/


#define TCC0_CCB2_DITH5_CCB_SHIFT		5
#define TCC0_CCB2_DITH5_CCB_MASK		0x7ffff
/** @defgroup tcc0_ccb2_dith5_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB2_DITH5_DITHERCYB_SHIFT		0
#define TCC0_CCB2_DITH5_DITHERCYB_MASK		0x1f
/** @defgroup tcc0_ccb2_dith5_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb2_dith6 CCB2DITH6 Compare and Capture Buffer
@{*/


#define TCC0_CCB2_DITH6_CCB_SHIFT		6
#define TCC0_CCB2_DITH6_CCB_MASK		0x3ffff
/** @defgroup tcc0_ccb2_dith6_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB2_DITH6_DITHERCYB_SHIFT		0
#define TCC0_CCB2_DITH6_DITHERCYB_MASK		0x3f
/** @defgroup tcc0_ccb2_dith6_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb3 CCB3 Compare and Capture Buffer
@{*/


#define TCC0_CCB3_CCB_SHIFT		0
#define TCC0_CCB3_CCB_MASK		0xffffff
/** @defgroup tcc0_ccb3_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb3_dith4 CCB3DITH4 Compare and Capture Buffer
@{*/


#define TCC0_CCB3_DITH4_CCB_SHIFT		4
#define TCC0_CCB3_DITH4_CCB_MASK		0xfffff
/** @defgroup tcc0_ccb3_dith4_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB3_DITH4_DITHERCYB_SHIFT		0
#define TCC0_CCB3_DITH4_DITHERCYB_MASK		0x0f
/** @defgroup tcc0_ccb3_dith4_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb3_dith5 CCB3DITH5 Compare and Capture Buffer
@{*/


#define TCC0_CCB3_DITH5_CCB_SHIFT		5
#define TCC0_CCB3_DITH5_CCB_MASK		0x7ffff
/** @defgroup tcc0_ccb3_dith5_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB3_DITH5_DITHERCYB_SHIFT		0
#define TCC0_CCB3_DITH5_DITHERCYB_MASK		0x1f
/** @defgroup tcc0_ccb3_dith5_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc0_ccb3_dith6 CCB3DITH6 Compare and Capture Buffer
@{*/


#define TCC0_CCB3_DITH6_CCB_SHIFT		6
#define TCC0_CCB3_DITH6_CCB_MASK		0x3ffff
/** @defgroup tcc0_ccb3_dith6_ccb CCB Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC0_CCB3_DITH6_DITHERCYB_SHIFT		0
#define TCC0_CCB3_DITH6_DITHERCYB_MASK		0x3f
/** @defgroup tcc0_ccb3_dith6_dithercyb DITHERCYB Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

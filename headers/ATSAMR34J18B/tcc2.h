#pragma once 

/* --- TCC2: Timer Counter Control 2 -------------------------------- */

/** @defgroup tcc2_registers Timer Counter Control 2 Register
@{*/

/** TCC2_CTRLA Control A **/
#define TCC2_CTRLA			MMIO32(TCC2_BASE + 0x00)
/** TCC2_CTRLBCLR Control B Clear **/
#define TCC2_CTRLBCLR			MMIO32(TCC2_BASE + 0x04)
/** TCC2_CTRLBSET Control B Set **/
#define TCC2_CTRLBSET			MMIO32(TCC2_BASE + 0x05)
/** TCC2_SYNCBUSY Synchronization Busy **/
#define TCC2_SYNCBUSY			MMIO32(TCC2_BASE + 0x08)
/** TCC2_FCTRLA Recoverable Fault A Configuration **/
#define TCC2_FCTRLA			MMIO32(TCC2_BASE + 0x0c)
/** TCC2_FCTRLB Recoverable Fault B Configuration **/
#define TCC2_FCTRLB			MMIO32(TCC2_BASE + 0x10)
/** TCC2_WEXCTRL Waveform Extension Configuration **/
#define TCC2_WEXCTRL			MMIO32(TCC2_BASE + 0x14)
/** TCC2_DRVCTRL Driver Control **/
#define TCC2_DRVCTRL			MMIO32(TCC2_BASE + 0x18)
/** TCC2_DBGCTRL Debug Control **/
#define TCC2_DBGCTRL			MMIO32(TCC2_BASE + 0x1e)
/** TCC2_EVCTRL Event Control **/
#define TCC2_EVCTRL			MMIO32(TCC2_BASE + 0x20)
/** TCC2_INTENCLR Interrupt Enable Clear **/
#define TCC2_INTENCLR			MMIO32(TCC2_BASE + 0x24)
/** TCC2_INTENSET Interrupt Enable Set **/
#define TCC2_INTENSET			MMIO32(TCC2_BASE + 0x28)
/** TCC2_INTFLAG Interrupt Flag Status and Clear **/
#define TCC2_INTFLAG			MMIO32(TCC2_BASE + 0x2c)
/** TCC2_STATUS Status **/
#define TCC2_STATUS			MMIO32(TCC2_BASE + 0x30)
/** TCC2_COUNT Count **/
#define TCC2_COUNT			MMIO32(TCC2_BASE + 0x34)
/** TCC2_COUNT_DITH4 Count **/
#define TCC2_COUNT_DITH4			MMIO32(TCC2_BASE + 0x34)
/** TCC2_COUNT_DITH5 Count **/
#define TCC2_COUNT_DITH5			MMIO32(TCC2_BASE + 0x34)
/** TCC2_COUNT_DITH6 Count **/
#define TCC2_COUNT_DITH6			MMIO32(TCC2_BASE + 0x34)
/** TCC2_PATT Pattern **/
#define TCC2_PATT			MMIO32(TCC2_BASE + 0x38)
/** TCC2_WAVE Waveform Control **/
#define TCC2_WAVE			MMIO32(TCC2_BASE + 0x3c)
/** TCC2_PER Period **/
#define TCC2_PER			MMIO32(TCC2_BASE + 0x40)
/** TCC2_PER_DITH4 Period **/
#define TCC2_PER_DITH4			MMIO32(TCC2_BASE + 0x40)
/** TCC2_PER_DITH5 Period **/
#define TCC2_PER_DITH5			MMIO32(TCC2_BASE + 0x40)
/** TCC2_PER_DITH6 Period **/
#define TCC2_PER_DITH6			MMIO32(TCC2_BASE + 0x40)
/** TCC2_CC0 Compare and Capture **/
#define TCC2_CC0			MMIO32(TCC2_BASE + 0x44)
/** TCC2_CC0_DITH4 Compare and Capture **/
#define TCC2_CC0_DITH4			MMIO32(TCC2_BASE + 0x44)
/** TCC2_CC0_DITH5 Compare and Capture **/
#define TCC2_CC0_DITH5			MMIO32(TCC2_BASE + 0x44)
/** TCC2_CC0_DITH6 Compare and Capture **/
#define TCC2_CC0_DITH6			MMIO32(TCC2_BASE + 0x44)
/** TCC2_CC1 Compare and Capture **/
#define TCC2_CC1			MMIO32(TCC2_BASE + 0x48)
/** TCC2_CC1_DITH4 Compare and Capture **/
#define TCC2_CC1_DITH4			MMIO32(TCC2_BASE + 0x48)
/** TCC2_CC1_DITH5 Compare and Capture **/
#define TCC2_CC1_DITH5			MMIO32(TCC2_BASE + 0x48)
/** TCC2_CC1_DITH6 Compare and Capture **/
#define TCC2_CC1_DITH6			MMIO32(TCC2_BASE + 0x48)
/** TCC2_CC2 Compare and Capture **/
#define TCC2_CC2			MMIO32(TCC2_BASE + 0x4c)
/** TCC2_CC2_DITH4 Compare and Capture **/
#define TCC2_CC2_DITH4			MMIO32(TCC2_BASE + 0x4c)
/** TCC2_CC2_DITH5 Compare and Capture **/
#define TCC2_CC2_DITH5			MMIO32(TCC2_BASE + 0x4c)
/** TCC2_CC2_DITH6 Compare and Capture **/
#define TCC2_CC2_DITH6			MMIO32(TCC2_BASE + 0x4c)
/** TCC2_CC3 Compare and Capture **/
#define TCC2_CC3			MMIO32(TCC2_BASE + 0x50)
/** TCC2_CC3_DITH4 Compare and Capture **/
#define TCC2_CC3_DITH4			MMIO32(TCC2_BASE + 0x50)
/** TCC2_CC3_DITH5 Compare and Capture **/
#define TCC2_CC3_DITH5			MMIO32(TCC2_BASE + 0x50)
/** TCC2_CC3_DITH6 Compare and Capture **/
#define TCC2_CC3_DITH6			MMIO32(TCC2_BASE + 0x50)
/** TCC2_PATTBUF Pattern Buffer **/
#define TCC2_PATTBUF			MMIO32(TCC2_BASE + 0x64)
/** TCC2_PERBUF Period Buffer **/
#define TCC2_PERBUF			MMIO32(TCC2_BASE + 0x6c)
/** TCC2_PERBUF_DITH4 Period Buffer **/
#define TCC2_PERBUF_DITH4			MMIO32(TCC2_BASE + 0x6c)
/** TCC2_PERBUF_DITH5 Period Buffer **/
#define TCC2_PERBUF_DITH5			MMIO32(TCC2_BASE + 0x6c)
/** TCC2_PERBUF_DITH6 Period Buffer **/
#define TCC2_PERBUF_DITH6			MMIO32(TCC2_BASE + 0x6c)
/** TCC2_CCBUF0 Compare and Capture Buffer **/
#define TCC2_CCBUF0			MMIO32(TCC2_BASE + 0x70)
/** TCC2_CCBUF0_DITH4 Compare and Capture Buffer **/
#define TCC2_CCBUF0_DITH4			MMIO32(TCC2_BASE + 0x70)
/** TCC2_CCBUF0_DITH5 Compare and Capture Buffer **/
#define TCC2_CCBUF0_DITH5			MMIO32(TCC2_BASE + 0x70)
/** TCC2_CCBUF0_DITH6 Compare and Capture Buffer **/
#define TCC2_CCBUF0_DITH6			MMIO32(TCC2_BASE + 0x70)
/** TCC2_CCBUF1 Compare and Capture Buffer **/
#define TCC2_CCBUF1			MMIO32(TCC2_BASE + 0x74)
/** TCC2_CCBUF1_DITH4 Compare and Capture Buffer **/
#define TCC2_CCBUF1_DITH4			MMIO32(TCC2_BASE + 0x74)
/** TCC2_CCBUF1_DITH5 Compare and Capture Buffer **/
#define TCC2_CCBUF1_DITH5			MMIO32(TCC2_BASE + 0x74)
/** TCC2_CCBUF1_DITH6 Compare and Capture Buffer **/
#define TCC2_CCBUF1_DITH6			MMIO32(TCC2_BASE + 0x74)
/** TCC2_CCBUF2 Compare and Capture Buffer **/
#define TCC2_CCBUF2			MMIO32(TCC2_BASE + 0x78)
/** TCC2_CCBUF2_DITH4 Compare and Capture Buffer **/
#define TCC2_CCBUF2_DITH4			MMIO32(TCC2_BASE + 0x78)
/** TCC2_CCBUF2_DITH5 Compare and Capture Buffer **/
#define TCC2_CCBUF2_DITH5			MMIO32(TCC2_BASE + 0x78)
/** TCC2_CCBUF2_DITH6 Compare and Capture Buffer **/
#define TCC2_CCBUF2_DITH6			MMIO32(TCC2_BASE + 0x78)
/** TCC2_CCBUF3 Compare and Capture Buffer **/
#define TCC2_CCBUF3			MMIO32(TCC2_BASE + 0x7c)
/** TCC2_CCBUF3_DITH4 Compare and Capture Buffer **/
#define TCC2_CCBUF3_DITH4			MMIO32(TCC2_BASE + 0x7c)
/** TCC2_CCBUF3_DITH5 Compare and Capture Buffer **/
#define TCC2_CCBUF3_DITH5			MMIO32(TCC2_BASE + 0x7c)
/** TCC2_CCBUF3_DITH6 Compare and Capture Buffer **/
#define TCC2_CCBUF3_DITH6			MMIO32(TCC2_BASE + 0x7c)

/**@}*/


/** @defgroup tcc2_ctrla CTRLA Control A
@{*/

/** TCC2_CTRLA_CPTEN3 Capture Channel 3 Enable **/
#define TCC2_CTRLA_CPTEN3		(1 << 27)
/** TCC2_CTRLA_CPTEN2 Capture Channel 2 Enable **/
#define TCC2_CTRLA_CPTEN2		(1 << 26)
/** TCC2_CTRLA_CPTEN1 Capture Channel 1 Enable **/
#define TCC2_CTRLA_CPTEN1		(1 << 25)
/** TCC2_CTRLA_CPTEN0 Capture Channel 0 Enable **/
#define TCC2_CTRLA_CPTEN0		(1 << 24)
/** TCC2_CTRLA_DMAOS DMA One-shot Trigger Mode **/
#define TCC2_CTRLA_DMAOS		(1 << 23)
/** TCC2_CTRLA_MSYNC Master Synchronization (only for TCC Slave Instance) **/
#define TCC2_CTRLA_MSYNC		(1 << 15)
/** TCC2_CTRLA_ALOCK Auto Lock **/
#define TCC2_CTRLA_ALOCK		(1 << 14)

#define TCC2_CTRLA_PRESCSYNC_SHIFT		12
#define TCC2_CTRLA_PRESCSYNC_MASK		0x03
/** @defgroup tcc2_ctrla_prescsync PRESCSYNC Prescaler and Counter Synchronization Selection
@{*/
/**@}*/

/** TCC2_CTRLA_RUNSTDBY Run in Standby **/
#define TCC2_CTRLA_RUNSTDBY		(1 << 11)

#define TCC2_CTRLA_PRESCALER_SHIFT		8
#define TCC2_CTRLA_PRESCALER_MASK		0x07
/** @defgroup tcc2_ctrla_prescaler PRESCALER Prescaler
@{*/
/**@}*/


#define TCC2_CTRLA_RESOLUTION_SHIFT		5
#define TCC2_CTRLA_RESOLUTION_MASK		0x03
/** @defgroup tcc2_ctrla_resolution RESOLUTION Enhanced Resolution
@{*/
/**@}*/

/** TCC2_CTRLA_ENABLE Enable **/
#define TCC2_CTRLA_ENABLE		(1 << 1)
/** TCC2_CTRLA_SWRST Software Reset **/
#define TCC2_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tcc2_ctrlbclr CTRLBCLR Control B Clear
@{*/


#define TCC2_CTRLBCLR_CMD_SHIFT		5
#define TCC2_CTRLBCLR_CMD_MASK		0x07
/** @defgroup tcc2_ctrlbclr_cmd CMD TCC Command
@{*/
/**@}*/


#define TCC2_CTRLBCLR_IDXCMD_SHIFT		3
#define TCC2_CTRLBCLR_IDXCMD_MASK		0x03
/** @defgroup tcc2_ctrlbclr_idxcmd IDXCMD Ramp Index Command
@{*/
/**@}*/

/** TCC2_CTRLBCLR_ONESHOT One-Shot **/
#define TCC2_CTRLBCLR_ONESHOT		(1 << 2)
/** TCC2_CTRLBCLR_LUPD Lock Update **/
#define TCC2_CTRLBCLR_LUPD		(1 << 1)
/** TCC2_CTRLBCLR_DIR Counter Direction **/
#define TCC2_CTRLBCLR_DIR		(1 << 0)

/**@}*/

/** @defgroup tcc2_ctrlbset CTRLBSET Control B Set
@{*/


#define TCC2_CTRLBSET_CMD_SHIFT		5
#define TCC2_CTRLBSET_CMD_MASK		0x07
/** @defgroup tcc2_ctrlbset_cmd CMD TCC Command
@{*/
/**@}*/


#define TCC2_CTRLBSET_IDXCMD_SHIFT		3
#define TCC2_CTRLBSET_IDXCMD_MASK		0x03
/** @defgroup tcc2_ctrlbset_idxcmd IDXCMD Ramp Index Command
@{*/
/**@}*/

/** TCC2_CTRLBSET_ONESHOT One-Shot **/
#define TCC2_CTRLBSET_ONESHOT		(1 << 2)
/** TCC2_CTRLBSET_LUPD Lock Update **/
#define TCC2_CTRLBSET_LUPD		(1 << 1)
/** TCC2_CTRLBSET_DIR Counter Direction **/
#define TCC2_CTRLBSET_DIR		(1 << 0)

/**@}*/

/** @defgroup tcc2_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** TCC2_SYNCBUSY_CC3 Compare Channel 3 Busy **/
#define TCC2_SYNCBUSY_CC3		(1 << 11)
/** TCC2_SYNCBUSY_CC2 Compare Channel 2 Busy **/
#define TCC2_SYNCBUSY_CC2		(1 << 10)
/** TCC2_SYNCBUSY_CC1 Compare Channel 1 Busy **/
#define TCC2_SYNCBUSY_CC1		(1 << 9)
/** TCC2_SYNCBUSY_CC0 Compare Channel 0 Busy **/
#define TCC2_SYNCBUSY_CC0		(1 << 8)
/** TCC2_SYNCBUSY_PER Period Busy **/
#define TCC2_SYNCBUSY_PER		(1 << 7)
/** TCC2_SYNCBUSY_WAVE Wave Busy **/
#define TCC2_SYNCBUSY_WAVE		(1 << 6)
/** TCC2_SYNCBUSY_PATT Pattern Busy **/
#define TCC2_SYNCBUSY_PATT		(1 << 5)
/** TCC2_SYNCBUSY_COUNT Count Busy **/
#define TCC2_SYNCBUSY_COUNT		(1 << 4)
/** TCC2_SYNCBUSY_STATUS Status Busy **/
#define TCC2_SYNCBUSY_STATUS		(1 << 3)
/** TCC2_SYNCBUSY_CTRLB Ctrlb Busy **/
#define TCC2_SYNCBUSY_CTRLB		(1 << 2)
/** TCC2_SYNCBUSY_ENABLE Enable Busy **/
#define TCC2_SYNCBUSY_ENABLE		(1 << 1)
/** TCC2_SYNCBUSY_SWRST Swrst Busy **/
#define TCC2_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tcc2_fctrla FCTRLA Recoverable Fault A Configuration
@{*/


#define TCC2_FCTRLA_FILTERVAL_SHIFT		24
#define TCC2_FCTRLA_FILTERVAL_MASK		0x0f
/** @defgroup tcc2_fctrla_filterval FILTERVAL Fault A Filter Value
@{*/
/**@}*/


#define TCC2_FCTRLA_BLANKVAL_SHIFT		16
#define TCC2_FCTRLA_BLANKVAL_MASK		0xff
/** @defgroup tcc2_fctrla_blankval BLANKVAL Fault A Blanking Time
@{*/
/**@}*/

/** TCC2_FCTRLA_BLANKPRESC Fault A Blanking Prescaler **/
#define TCC2_FCTRLA_BLANKPRESC		(1 << 15)

#define TCC2_FCTRLA_CAPTURE_SHIFT		12
#define TCC2_FCTRLA_CAPTURE_MASK		0x07
/** @defgroup tcc2_fctrla_capture CAPTURE Fault A Capture Action
@{*/
/**@}*/


#define TCC2_FCTRLA_CHSEL_SHIFT		10
#define TCC2_FCTRLA_CHSEL_MASK		0x03
/** @defgroup tcc2_fctrla_chsel CHSEL Fault A Capture Channel
@{*/
/**@}*/


#define TCC2_FCTRLA_HALT_SHIFT		8
#define TCC2_FCTRLA_HALT_MASK		0x03
/** @defgroup tcc2_fctrla_halt HALT Fault A Halt Mode
@{*/
/**@}*/

/** TCC2_FCTRLA_RESTART Fault A Restart **/
#define TCC2_FCTRLA_RESTART		(1 << 7)

#define TCC2_FCTRLA_BLANK_SHIFT		5
#define TCC2_FCTRLA_BLANK_MASK		0x03
/** @defgroup tcc2_fctrla_blank BLANK Fault A Blanking Mode
@{*/
/**@}*/

/** TCC2_FCTRLA_QUAL Fault A Qualification **/
#define TCC2_FCTRLA_QUAL		(1 << 4)
/** TCC2_FCTRLA_KEEP Fault A Keeper **/
#define TCC2_FCTRLA_KEEP		(1 << 3)

#define TCC2_FCTRLA_SRC_SHIFT		0
#define TCC2_FCTRLA_SRC_MASK		0x03
/** @defgroup tcc2_fctrla_src SRC Fault A Source
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_fctrlb FCTRLB Recoverable Fault B Configuration
@{*/


#define TCC2_FCTRLB_FILTERVAL_SHIFT		24
#define TCC2_FCTRLB_FILTERVAL_MASK		0x0f
/** @defgroup tcc2_fctrlb_filterval FILTERVAL Fault B Filter Value
@{*/
/**@}*/


#define TCC2_FCTRLB_BLANKVAL_SHIFT		16
#define TCC2_FCTRLB_BLANKVAL_MASK		0xff
/** @defgroup tcc2_fctrlb_blankval BLANKVAL Fault B Blanking Time
@{*/
/**@}*/

/** TCC2_FCTRLB_BLANKPRESC Fault B Blanking Prescaler **/
#define TCC2_FCTRLB_BLANKPRESC		(1 << 15)

#define TCC2_FCTRLB_CAPTURE_SHIFT		12
#define TCC2_FCTRLB_CAPTURE_MASK		0x07
/** @defgroup tcc2_fctrlb_capture CAPTURE Fault B Capture Action
@{*/
/**@}*/


#define TCC2_FCTRLB_CHSEL_SHIFT		10
#define TCC2_FCTRLB_CHSEL_MASK		0x03
/** @defgroup tcc2_fctrlb_chsel CHSEL Fault B Capture Channel
@{*/
/**@}*/


#define TCC2_FCTRLB_HALT_SHIFT		8
#define TCC2_FCTRLB_HALT_MASK		0x03
/** @defgroup tcc2_fctrlb_halt HALT Fault B Halt Mode
@{*/
/**@}*/

/** TCC2_FCTRLB_RESTART Fault B Restart **/
#define TCC2_FCTRLB_RESTART		(1 << 7)

#define TCC2_FCTRLB_BLANK_SHIFT		5
#define TCC2_FCTRLB_BLANK_MASK		0x03
/** @defgroup tcc2_fctrlb_blank BLANK Fault B Blanking Mode
@{*/
/**@}*/

/** TCC2_FCTRLB_QUAL Fault B Qualification **/
#define TCC2_FCTRLB_QUAL		(1 << 4)
/** TCC2_FCTRLB_KEEP Fault B Keeper **/
#define TCC2_FCTRLB_KEEP		(1 << 3)

#define TCC2_FCTRLB_SRC_SHIFT		0
#define TCC2_FCTRLB_SRC_MASK		0x03
/** @defgroup tcc2_fctrlb_src SRC Fault B Source
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_wexctrl WEXCTRL Waveform Extension Configuration
@{*/


#define TCC2_WEXCTRL_DTHS_SHIFT		24
#define TCC2_WEXCTRL_DTHS_MASK		0xff
/** @defgroup tcc2_wexctrl_dths DTHS Dead-time High Side Outputs Value
@{*/
/**@}*/


#define TCC2_WEXCTRL_DTLS_SHIFT		16
#define TCC2_WEXCTRL_DTLS_MASK		0xff
/** @defgroup tcc2_wexctrl_dtls DTLS Dead-time Low Side Outputs Value
@{*/
/**@}*/

/** TCC2_WEXCTRL_DTIEN3 Dead-time Insertion Generator 3 Enable **/
#define TCC2_WEXCTRL_DTIEN3		(1 << 11)
/** TCC2_WEXCTRL_DTIEN2 Dead-time Insertion Generator 2 Enable **/
#define TCC2_WEXCTRL_DTIEN2		(1 << 10)
/** TCC2_WEXCTRL_DTIEN1 Dead-time Insertion Generator 1 Enable **/
#define TCC2_WEXCTRL_DTIEN1		(1 << 9)
/** TCC2_WEXCTRL_DTIEN0 Dead-time Insertion Generator 0 Enable **/
#define TCC2_WEXCTRL_DTIEN0		(1 << 8)

#define TCC2_WEXCTRL_OTMX_SHIFT		0
#define TCC2_WEXCTRL_OTMX_MASK		0x03
/** @defgroup tcc2_wexctrl_otmx OTMX Output Matrix
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_drvctrl DRVCTRL Driver Control
@{*/


#define TCC2_DRVCTRL_FILTERVAL1_SHIFT		28
#define TCC2_DRVCTRL_FILTERVAL1_MASK		0x0f
/** @defgroup tcc2_drvctrl_filterval1 FILTERVAL1 Non-Recoverable Fault Input 1 Filter Value
@{*/
/**@}*/


#define TCC2_DRVCTRL_FILTERVAL0_SHIFT		24
#define TCC2_DRVCTRL_FILTERVAL0_MASK		0x0f
/** @defgroup tcc2_drvctrl_filterval0 FILTERVAL0 Non-Recoverable Fault Input 0 Filter Value
@{*/
/**@}*/

/** TCC2_DRVCTRL_INVEN7 Output Waveform 7 Inversion **/
#define TCC2_DRVCTRL_INVEN7		(1 << 23)
/** TCC2_DRVCTRL_INVEN6 Output Waveform 6 Inversion **/
#define TCC2_DRVCTRL_INVEN6		(1 << 22)
/** TCC2_DRVCTRL_INVEN5 Output Waveform 5 Inversion **/
#define TCC2_DRVCTRL_INVEN5		(1 << 21)
/** TCC2_DRVCTRL_INVEN4 Output Waveform 4 Inversion **/
#define TCC2_DRVCTRL_INVEN4		(1 << 20)
/** TCC2_DRVCTRL_INVEN3 Output Waveform 3 Inversion **/
#define TCC2_DRVCTRL_INVEN3		(1 << 19)
/** TCC2_DRVCTRL_INVEN2 Output Waveform 2 Inversion **/
#define TCC2_DRVCTRL_INVEN2		(1 << 18)
/** TCC2_DRVCTRL_INVEN1 Output Waveform 1 Inversion **/
#define TCC2_DRVCTRL_INVEN1		(1 << 17)
/** TCC2_DRVCTRL_INVEN0 Output Waveform 0 Inversion **/
#define TCC2_DRVCTRL_INVEN0		(1 << 16)
/** TCC2_DRVCTRL_NRV7 Non-Recoverable State 7 Output Value **/
#define TCC2_DRVCTRL_NRV7		(1 << 15)
/** TCC2_DRVCTRL_NRV6 Non-Recoverable State 6 Output Value **/
#define TCC2_DRVCTRL_NRV6		(1 << 14)
/** TCC2_DRVCTRL_NRV5 Non-Recoverable State 5 Output Value **/
#define TCC2_DRVCTRL_NRV5		(1 << 13)
/** TCC2_DRVCTRL_NRV4 Non-Recoverable State 4 Output Value **/
#define TCC2_DRVCTRL_NRV4		(1 << 12)
/** TCC2_DRVCTRL_NRV3 Non-Recoverable State 3 Output Value **/
#define TCC2_DRVCTRL_NRV3		(1 << 11)
/** TCC2_DRVCTRL_NRV2 Non-Recoverable State 2 Output Value **/
#define TCC2_DRVCTRL_NRV2		(1 << 10)
/** TCC2_DRVCTRL_NRV1 Non-Recoverable State 1 Output Value **/
#define TCC2_DRVCTRL_NRV1		(1 << 9)
/** TCC2_DRVCTRL_NRV0 Non-Recoverable State 0 Output Value **/
#define TCC2_DRVCTRL_NRV0		(1 << 8)
/** TCC2_DRVCTRL_NRE7 Non-Recoverable State 7 Output Enable **/
#define TCC2_DRVCTRL_NRE7		(1 << 7)
/** TCC2_DRVCTRL_NRE6 Non-Recoverable State 6 Output Enable **/
#define TCC2_DRVCTRL_NRE6		(1 << 6)
/** TCC2_DRVCTRL_NRE5 Non-Recoverable State 5 Output Enable **/
#define TCC2_DRVCTRL_NRE5		(1 << 5)
/** TCC2_DRVCTRL_NRE4 Non-Recoverable State 4 Output Enable **/
#define TCC2_DRVCTRL_NRE4		(1 << 4)
/** TCC2_DRVCTRL_NRE3 Non-Recoverable State 3 Output Enable **/
#define TCC2_DRVCTRL_NRE3		(1 << 3)
/** TCC2_DRVCTRL_NRE2 Non-Recoverable State 2 Output Enable **/
#define TCC2_DRVCTRL_NRE2		(1 << 2)
/** TCC2_DRVCTRL_NRE1 Non-Recoverable State 1 Output Enable **/
#define TCC2_DRVCTRL_NRE1		(1 << 1)
/** TCC2_DRVCTRL_NRE0 Non-Recoverable State 0 Output Enable **/
#define TCC2_DRVCTRL_NRE0		(1 << 0)

/**@}*/

/** @defgroup tcc2_dbgctrl DBGCTRL Debug Control
@{*/

/** TCC2_DBGCTRL_FDDBD Fault Detection on Debug Break Detection **/
#define TCC2_DBGCTRL_FDDBD		(1 << 2)
/** TCC2_DBGCTRL_DBGRUN Debug Running Mode **/
#define TCC2_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup tcc2_evctrl EVCTRL Event Control
@{*/

/** TCC2_EVCTRL_MCEO3 Match or Capture Channel 3 Event Output Enable **/
#define TCC2_EVCTRL_MCEO3		(1 << 27)
/** TCC2_EVCTRL_MCEO2 Match or Capture Channel 2 Event Output Enable **/
#define TCC2_EVCTRL_MCEO2		(1 << 26)
/** TCC2_EVCTRL_MCEO1 Match or Capture Channel 1 Event Output Enable **/
#define TCC2_EVCTRL_MCEO1		(1 << 25)
/** TCC2_EVCTRL_MCEO0 Match or Capture Channel 0 Event Output Enable **/
#define TCC2_EVCTRL_MCEO0		(1 << 24)
/** TCC2_EVCTRL_MCEI3 Match or Capture Channel 3 Event Input Enable **/
#define TCC2_EVCTRL_MCEI3		(1 << 19)
/** TCC2_EVCTRL_MCEI2 Match or Capture Channel 2 Event Input Enable **/
#define TCC2_EVCTRL_MCEI2		(1 << 18)
/** TCC2_EVCTRL_MCEI1 Match or Capture Channel 1 Event Input Enable **/
#define TCC2_EVCTRL_MCEI1		(1 << 17)
/** TCC2_EVCTRL_MCEI0 Match or Capture Channel 0 Event Input Enable **/
#define TCC2_EVCTRL_MCEI0		(1 << 16)
/** TCC2_EVCTRL_TCEI1 Timer/counter Event 1 Input Enable **/
#define TCC2_EVCTRL_TCEI1		(1 << 15)
/** TCC2_EVCTRL_TCEI0 Timer/counter Event 0 Input Enable **/
#define TCC2_EVCTRL_TCEI0		(1 << 14)
/** TCC2_EVCTRL_TCINV1 Inverted Event 1 Input Enable **/
#define TCC2_EVCTRL_TCINV1		(1 << 13)
/** TCC2_EVCTRL_TCINV0 Inverted Event 0 Input Enable **/
#define TCC2_EVCTRL_TCINV0		(1 << 12)
/** TCC2_EVCTRL_CNTEO Timer/counter Output Event Enable **/
#define TCC2_EVCTRL_CNTEO		(1 << 10)
/** TCC2_EVCTRL_TRGEO Retrigger Output Event Enable **/
#define TCC2_EVCTRL_TRGEO		(1 << 9)
/** TCC2_EVCTRL_OVFEO Overflow/Underflow Output Event Enable **/
#define TCC2_EVCTRL_OVFEO		(1 << 8)

#define TCC2_EVCTRL_CNTSEL_SHIFT		6
#define TCC2_EVCTRL_CNTSEL_MASK		0x03
/** @defgroup tcc2_evctrl_cntsel CNTSEL Timer/counter Output Event Mode
@{*/
/**@}*/


#define TCC2_EVCTRL_EVACT1_SHIFT		3
#define TCC2_EVCTRL_EVACT1_MASK		0x07
/** @defgroup tcc2_evctrl_evact1 EVACT1 Timer/counter Input Event1 Action
@{*/
/**@}*/


#define TCC2_EVCTRL_EVACT0_SHIFT		0
#define TCC2_EVCTRL_EVACT0_MASK		0x07
/** @defgroup tcc2_evctrl_evact0 EVACT0 Timer/counter Input Event0 Action
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** TCC2_INTENCLR_MC3 Match or Capture Channel 3 Interrupt Enable **/
#define TCC2_INTENCLR_MC3		(1 << 19)
/** TCC2_INTENCLR_MC2 Match or Capture Channel 2 Interrupt Enable **/
#define TCC2_INTENCLR_MC2		(1 << 18)
/** TCC2_INTENCLR_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TCC2_INTENCLR_MC1		(1 << 17)
/** TCC2_INTENCLR_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TCC2_INTENCLR_MC0		(1 << 16)
/** TCC2_INTENCLR_FAULT1 Non-Recoverable Fault 1 Interrupt Enable **/
#define TCC2_INTENCLR_FAULT1		(1 << 15)
/** TCC2_INTENCLR_FAULT0 Non-Recoverable Fault 0 Interrupt Enable **/
#define TCC2_INTENCLR_FAULT0		(1 << 14)
/** TCC2_INTENCLR_FAULTB Recoverable Fault B Interrupt Enable **/
#define TCC2_INTENCLR_FAULTB		(1 << 13)
/** TCC2_INTENCLR_FAULTA Recoverable Fault A Interrupt Enable **/
#define TCC2_INTENCLR_FAULTA		(1 << 12)
/** TCC2_INTENCLR_DFS Non-Recoverable Debug Fault Interrupt Enable **/
#define TCC2_INTENCLR_DFS		(1 << 11)
/** TCC2_INTENCLR_UFS Non-Recoverable Update Fault Interrupt Enable **/
#define TCC2_INTENCLR_UFS		(1 << 10)
/** TCC2_INTENCLR_ERR Error Interrupt Enable **/
#define TCC2_INTENCLR_ERR		(1 << 3)
/** TCC2_INTENCLR_CNT Counter Interrupt Enable **/
#define TCC2_INTENCLR_CNT		(1 << 2)
/** TCC2_INTENCLR_TRG Retrigger Interrupt Enable **/
#define TCC2_INTENCLR_TRG		(1 << 1)
/** TCC2_INTENCLR_OVF Overflow Interrupt Enable **/
#define TCC2_INTENCLR_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc2_intenset INTENSET Interrupt Enable Set
@{*/

/** TCC2_INTENSET_MC3 Match or Capture Channel 3 Interrupt Enable **/
#define TCC2_INTENSET_MC3		(1 << 19)
/** TCC2_INTENSET_MC2 Match or Capture Channel 2 Interrupt Enable **/
#define TCC2_INTENSET_MC2		(1 << 18)
/** TCC2_INTENSET_MC1 Match or Capture Channel 1 Interrupt Enable **/
#define TCC2_INTENSET_MC1		(1 << 17)
/** TCC2_INTENSET_MC0 Match or Capture Channel 0 Interrupt Enable **/
#define TCC2_INTENSET_MC0		(1 << 16)
/** TCC2_INTENSET_FAULT1 Non-Recoverable Fault 1 Interrupt Enable **/
#define TCC2_INTENSET_FAULT1		(1 << 15)
/** TCC2_INTENSET_FAULT0 Non-Recoverable Fault 0 Interrupt Enable **/
#define TCC2_INTENSET_FAULT0		(1 << 14)
/** TCC2_INTENSET_FAULTB Recoverable Fault B Interrupt Enable **/
#define TCC2_INTENSET_FAULTB		(1 << 13)
/** TCC2_INTENSET_FAULTA Recoverable Fault A Interrupt Enable **/
#define TCC2_INTENSET_FAULTA		(1 << 12)
/** TCC2_INTENSET_DFS Non-Recoverable Debug Fault Interrupt Enable **/
#define TCC2_INTENSET_DFS		(1 << 11)
/** TCC2_INTENSET_UFS Non-Recoverable Update Fault Interrupt Enable **/
#define TCC2_INTENSET_UFS		(1 << 10)
/** TCC2_INTENSET_ERR Error Interrupt Enable **/
#define TCC2_INTENSET_ERR		(1 << 3)
/** TCC2_INTENSET_CNT Counter Interrupt Enable **/
#define TCC2_INTENSET_CNT		(1 << 2)
/** TCC2_INTENSET_TRG Retrigger Interrupt Enable **/
#define TCC2_INTENSET_TRG		(1 << 1)
/** TCC2_INTENSET_OVF Overflow Interrupt Enable **/
#define TCC2_INTENSET_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc2_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** TCC2_INTFLAG_MC3 Match or Capture 3 **/
#define TCC2_INTFLAG_MC3		(1 << 19)
/** TCC2_INTFLAG_MC2 Match or Capture 2 **/
#define TCC2_INTFLAG_MC2		(1 << 18)
/** TCC2_INTFLAG_MC1 Match or Capture 1 **/
#define TCC2_INTFLAG_MC1		(1 << 17)
/** TCC2_INTFLAG_MC0 Match or Capture 0 **/
#define TCC2_INTFLAG_MC0		(1 << 16)
/** TCC2_INTFLAG_FAULT1 Non-Recoverable Fault 1 **/
#define TCC2_INTFLAG_FAULT1		(1 << 15)
/** TCC2_INTFLAG_FAULT0 Non-Recoverable Fault 0 **/
#define TCC2_INTFLAG_FAULT0		(1 << 14)
/** TCC2_INTFLAG_FAULTB Recoverable Fault B **/
#define TCC2_INTFLAG_FAULTB		(1 << 13)
/** TCC2_INTFLAG_FAULTA Recoverable Fault A **/
#define TCC2_INTFLAG_FAULTA		(1 << 12)
/** TCC2_INTFLAG_DFS Non-Recoverable Debug Fault **/
#define TCC2_INTFLAG_DFS		(1 << 11)
/** TCC2_INTFLAG_UFS Non-Recoverable Update Fault **/
#define TCC2_INTFLAG_UFS		(1 << 10)
/** TCC2_INTFLAG_ERR Error **/
#define TCC2_INTFLAG_ERR		(1 << 3)
/** TCC2_INTFLAG_CNT Counter **/
#define TCC2_INTFLAG_CNT		(1 << 2)
/** TCC2_INTFLAG_TRG Retrigger **/
#define TCC2_INTFLAG_TRG		(1 << 1)
/** TCC2_INTFLAG_OVF Overflow **/
#define TCC2_INTFLAG_OVF		(1 << 0)

/**@}*/

/** @defgroup tcc2_status STATUS Status
@{*/

/** TCC2_STATUS_CMP3 Compare Channel 3 Value **/
#define TCC2_STATUS_CMP3		(1 << 27)
/** TCC2_STATUS_CMP2 Compare Channel 2 Value **/
#define TCC2_STATUS_CMP2		(1 << 26)
/** TCC2_STATUS_CMP1 Compare Channel 1 Value **/
#define TCC2_STATUS_CMP1		(1 << 25)
/** TCC2_STATUS_CMP0 Compare Channel 0 Value **/
#define TCC2_STATUS_CMP0		(1 << 24)
/** TCC2_STATUS_CCBUFV3 Compare Channel 3 Buffer Valid **/
#define TCC2_STATUS_CCBUFV3		(1 << 19)
/** TCC2_STATUS_CCBUFV2 Compare Channel 2 Buffer Valid **/
#define TCC2_STATUS_CCBUFV2		(1 << 18)
/** TCC2_STATUS_CCBUFV1 Compare Channel 1 Buffer Valid **/
#define TCC2_STATUS_CCBUFV1		(1 << 17)
/** TCC2_STATUS_CCBUFV0 Compare Channel 0 Buffer Valid **/
#define TCC2_STATUS_CCBUFV0		(1 << 16)
/** TCC2_STATUS_FAULT1 Non-Recoverable Fault 1 State **/
#define TCC2_STATUS_FAULT1		(1 << 15)
/** TCC2_STATUS_FAULT0 Non-Recoverable Fault 0 State **/
#define TCC2_STATUS_FAULT0		(1 << 14)
/** TCC2_STATUS_FAULTB Recoverable Fault B State **/
#define TCC2_STATUS_FAULTB		(1 << 13)
/** TCC2_STATUS_FAULTA Recoverable Fault A State **/
#define TCC2_STATUS_FAULTA		(1 << 12)
/** TCC2_STATUS_FAULT1IN Non-Recoverable Fault1 Input **/
#define TCC2_STATUS_FAULT1IN		(1 << 11)
/** TCC2_STATUS_FAULT0IN Non-Recoverable Fault0 Input **/
#define TCC2_STATUS_FAULT0IN		(1 << 10)
/** TCC2_STATUS_FAULTBIN Recoverable Fault B Input **/
#define TCC2_STATUS_FAULTBIN		(1 << 9)
/** TCC2_STATUS_FAULTAIN Recoverable Fault A Input **/
#define TCC2_STATUS_FAULTAIN		(1 << 8)
/** TCC2_STATUS_PERBUFV Period Buffer Valid **/
#define TCC2_STATUS_PERBUFV		(1 << 7)
/** TCC2_STATUS_PATTBUFV Pattern Buffer Valid **/
#define TCC2_STATUS_PATTBUFV		(1 << 5)
/** TCC2_STATUS_SLAVE Slave **/
#define TCC2_STATUS_SLAVE		(1 << 4)
/** TCC2_STATUS_DFS Non-Recoverable Debug Fault State **/
#define TCC2_STATUS_DFS		(1 << 3)
/** TCC2_STATUS_UFS Non-recoverable Update Fault State **/
#define TCC2_STATUS_UFS		(1 << 2)
/** TCC2_STATUS_IDX Ramp **/
#define TCC2_STATUS_IDX		(1 << 1)
/** TCC2_STATUS_STOP Stop **/
#define TCC2_STATUS_STOP		(1 << 0)

/**@}*/

/** @defgroup tcc2_count COUNT Count
@{*/


#define TCC2_COUNT_COUNT_SHIFT		0
#define TCC2_COUNT_COUNT_MASK		0xffffff
/** @defgroup tcc2_count_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_count_dith4 COUNTDITH4 Count
@{*/


#define TCC2_COUNT_DITH4_COUNT_SHIFT		4
#define TCC2_COUNT_DITH4_COUNT_MASK		0xfffff
/** @defgroup tcc2_count_dith4_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_count_dith5 COUNTDITH5 Count
@{*/


#define TCC2_COUNT_DITH5_COUNT_SHIFT		5
#define TCC2_COUNT_DITH5_COUNT_MASK		0x7ffff
/** @defgroup tcc2_count_dith5_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_count_dith6 COUNTDITH6 Count
@{*/


#define TCC2_COUNT_DITH6_COUNT_SHIFT		6
#define TCC2_COUNT_DITH6_COUNT_MASK		0x3ffff
/** @defgroup tcc2_count_dith6_count COUNT Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_patt PATT Pattern
@{*/

/** TCC2_PATT_PGV7 Pattern Generator 7 Output Value **/
#define TCC2_PATT_PGV7		(1 << 15)
/** TCC2_PATT_PGV6 Pattern Generator 6 Output Value **/
#define TCC2_PATT_PGV6		(1 << 14)
/** TCC2_PATT_PGV5 Pattern Generator 5 Output Value **/
#define TCC2_PATT_PGV5		(1 << 13)
/** TCC2_PATT_PGV4 Pattern Generator 4 Output Value **/
#define TCC2_PATT_PGV4		(1 << 12)
/** TCC2_PATT_PGV3 Pattern Generator 3 Output Value **/
#define TCC2_PATT_PGV3		(1 << 11)
/** TCC2_PATT_PGV2 Pattern Generator 2 Output Value **/
#define TCC2_PATT_PGV2		(1 << 10)
/** TCC2_PATT_PGV1 Pattern Generator 1 Output Value **/
#define TCC2_PATT_PGV1		(1 << 9)
/** TCC2_PATT_PGV0 Pattern Generator 0 Output Value **/
#define TCC2_PATT_PGV0		(1 << 8)
/** TCC2_PATT_PGE7 Pattern Generator 7 Output Enable **/
#define TCC2_PATT_PGE7		(1 << 7)
/** TCC2_PATT_PGE6 Pattern Generator 6 Output Enable **/
#define TCC2_PATT_PGE6		(1 << 6)
/** TCC2_PATT_PGE5 Pattern Generator 5 Output Enable **/
#define TCC2_PATT_PGE5		(1 << 5)
/** TCC2_PATT_PGE4 Pattern Generator 4 Output Enable **/
#define TCC2_PATT_PGE4		(1 << 4)
/** TCC2_PATT_PGE3 Pattern Generator 3 Output Enable **/
#define TCC2_PATT_PGE3		(1 << 3)
/** TCC2_PATT_PGE2 Pattern Generator 2 Output Enable **/
#define TCC2_PATT_PGE2		(1 << 2)
/** TCC2_PATT_PGE1 Pattern Generator 1 Output Enable **/
#define TCC2_PATT_PGE1		(1 << 1)
/** TCC2_PATT_PGE0 Pattern Generator 0 Output Enable **/
#define TCC2_PATT_PGE0		(1 << 0)

/**@}*/

/** @defgroup tcc2_wave WAVE Waveform Control
@{*/

/** TCC2_WAVE_SWAP3 Swap DTI Output Pair 3 **/
#define TCC2_WAVE_SWAP3		(1 << 27)
/** TCC2_WAVE_SWAP2 Swap DTI Output Pair 2 **/
#define TCC2_WAVE_SWAP2		(1 << 26)
/** TCC2_WAVE_SWAP1 Swap DTI Output Pair 1 **/
#define TCC2_WAVE_SWAP1		(1 << 25)
/** TCC2_WAVE_SWAP0 Swap DTI Output Pair 0 **/
#define TCC2_WAVE_SWAP0		(1 << 24)
/** TCC2_WAVE_POL3 Channel 3 Polarity **/
#define TCC2_WAVE_POL3		(1 << 19)
/** TCC2_WAVE_POL2 Channel 2 Polarity **/
#define TCC2_WAVE_POL2		(1 << 18)
/** TCC2_WAVE_POL1 Channel 1 Polarity **/
#define TCC2_WAVE_POL1		(1 << 17)
/** TCC2_WAVE_POL0 Channel 0 Polarity **/
#define TCC2_WAVE_POL0		(1 << 16)
/** TCC2_WAVE_CICCEN3 Circular Channel 3 Enable **/
#define TCC2_WAVE_CICCEN3		(1 << 11)
/** TCC2_WAVE_CICCEN2 Circular Channel 2 Enable **/
#define TCC2_WAVE_CICCEN2		(1 << 10)
/** TCC2_WAVE_CICCEN1 Circular Channel 1 Enable **/
#define TCC2_WAVE_CICCEN1		(1 << 9)
/** TCC2_WAVE_CICCEN0 Circular Channel 0 Enable **/
#define TCC2_WAVE_CICCEN0		(1 << 8)
/** TCC2_WAVE_CIPEREN Circular period Enable **/
#define TCC2_WAVE_CIPEREN		(1 << 7)

#define TCC2_WAVE_RAMP_SHIFT		4
#define TCC2_WAVE_RAMP_MASK		0x03
/** @defgroup tcc2_wave_ramp RAMP Ramp Mode
@{*/
/**@}*/


#define TCC2_WAVE_WAVEGEN_SHIFT		0
#define TCC2_WAVE_WAVEGEN_MASK		0x07
/** @defgroup tcc2_wave_wavegen WAVEGEN Waveform Generation
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_per PER Period
@{*/


#define TCC2_PER_PER_SHIFT		0
#define TCC2_PER_PER_MASK		0xffffff
/** @defgroup tcc2_per_per PER Period Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_per_dith4 PERDITH4 Period
@{*/


#define TCC2_PER_DITH4_PER_SHIFT		4
#define TCC2_PER_DITH4_PER_MASK		0xfffff
/** @defgroup tcc2_per_dith4_per PER Period Value
@{*/
/**@}*/


#define TCC2_PER_DITH4_DITHER_SHIFT		0
#define TCC2_PER_DITH4_DITHER_MASK		0x0f
/** @defgroup tcc2_per_dith4_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_per_dith5 PERDITH5 Period
@{*/


#define TCC2_PER_DITH5_PER_SHIFT		5
#define TCC2_PER_DITH5_PER_MASK		0x7ffff
/** @defgroup tcc2_per_dith5_per PER Period Value
@{*/
/**@}*/


#define TCC2_PER_DITH5_DITHER_SHIFT		0
#define TCC2_PER_DITH5_DITHER_MASK		0x1f
/** @defgroup tcc2_per_dith5_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_per_dith6 PERDITH6 Period
@{*/


#define TCC2_PER_DITH6_PER_SHIFT		6
#define TCC2_PER_DITH6_PER_MASK		0x3ffff
/** @defgroup tcc2_per_dith6_per PER Period Value
@{*/
/**@}*/


#define TCC2_PER_DITH6_DITHER_SHIFT		0
#define TCC2_PER_DITH6_DITHER_MASK		0x3f
/** @defgroup tcc2_per_dith6_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc0 CC0 Compare and Capture
@{*/


#define TCC2_CC0_CC_SHIFT		0
#define TCC2_CC0_CC_MASK		0xffffff
/** @defgroup tcc2_cc0_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc0_dith4 CC0DITH4 Compare and Capture
@{*/


#define TCC2_CC0_DITH4_CC_SHIFT		4
#define TCC2_CC0_DITH4_CC_MASK		0xfffff
/** @defgroup tcc2_cc0_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC0_DITH4_DITHER_SHIFT		0
#define TCC2_CC0_DITH4_DITHER_MASK		0x0f
/** @defgroup tcc2_cc0_dith4_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc0_dith5 CC0DITH5 Compare and Capture
@{*/


#define TCC2_CC0_DITH5_CC_SHIFT		5
#define TCC2_CC0_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc2_cc0_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC0_DITH5_DITHER_SHIFT		0
#define TCC2_CC0_DITH5_DITHER_MASK		0x1f
/** @defgroup tcc2_cc0_dith5_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc0_dith6 CC0DITH6 Compare and Capture
@{*/


#define TCC2_CC0_DITH6_CC_SHIFT		6
#define TCC2_CC0_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc2_cc0_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC0_DITH6_DITHER_SHIFT		0
#define TCC2_CC0_DITH6_DITHER_MASK		0x3f
/** @defgroup tcc2_cc0_dith6_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc1 CC1 Compare and Capture
@{*/


#define TCC2_CC1_CC_SHIFT		0
#define TCC2_CC1_CC_MASK		0xffffff
/** @defgroup tcc2_cc1_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc1_dith4 CC1DITH4 Compare and Capture
@{*/


#define TCC2_CC1_DITH4_CC_SHIFT		4
#define TCC2_CC1_DITH4_CC_MASK		0xfffff
/** @defgroup tcc2_cc1_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC1_DITH4_DITHER_SHIFT		0
#define TCC2_CC1_DITH4_DITHER_MASK		0x0f
/** @defgroup tcc2_cc1_dith4_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc1_dith5 CC1DITH5 Compare and Capture
@{*/


#define TCC2_CC1_DITH5_CC_SHIFT		5
#define TCC2_CC1_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc2_cc1_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC1_DITH5_DITHER_SHIFT		0
#define TCC2_CC1_DITH5_DITHER_MASK		0x1f
/** @defgroup tcc2_cc1_dith5_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc1_dith6 CC1DITH6 Compare and Capture
@{*/


#define TCC2_CC1_DITH6_CC_SHIFT		6
#define TCC2_CC1_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc2_cc1_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC1_DITH6_DITHER_SHIFT		0
#define TCC2_CC1_DITH6_DITHER_MASK		0x3f
/** @defgroup tcc2_cc1_dith6_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc2 CC2 Compare and Capture
@{*/


#define TCC2_CC2_CC_SHIFT		0
#define TCC2_CC2_CC_MASK		0xffffff
/** @defgroup tcc2_cc2_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc2_dith4 CC2DITH4 Compare and Capture
@{*/


#define TCC2_CC2_DITH4_CC_SHIFT		4
#define TCC2_CC2_DITH4_CC_MASK		0xfffff
/** @defgroup tcc2_cc2_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC2_DITH4_DITHER_SHIFT		0
#define TCC2_CC2_DITH4_DITHER_MASK		0x0f
/** @defgroup tcc2_cc2_dith4_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc2_dith5 CC2DITH5 Compare and Capture
@{*/


#define TCC2_CC2_DITH5_CC_SHIFT		5
#define TCC2_CC2_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc2_cc2_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC2_DITH5_DITHER_SHIFT		0
#define TCC2_CC2_DITH5_DITHER_MASK		0x1f
/** @defgroup tcc2_cc2_dith5_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc2_dith6 CC2DITH6 Compare and Capture
@{*/


#define TCC2_CC2_DITH6_CC_SHIFT		6
#define TCC2_CC2_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc2_cc2_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC2_DITH6_DITHER_SHIFT		0
#define TCC2_CC2_DITH6_DITHER_MASK		0x3f
/** @defgroup tcc2_cc2_dith6_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc3 CC3 Compare and Capture
@{*/


#define TCC2_CC3_CC_SHIFT		0
#define TCC2_CC3_CC_MASK		0xffffff
/** @defgroup tcc2_cc3_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc3_dith4 CC3DITH4 Compare and Capture
@{*/


#define TCC2_CC3_DITH4_CC_SHIFT		4
#define TCC2_CC3_DITH4_CC_MASK		0xfffff
/** @defgroup tcc2_cc3_dith4_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC3_DITH4_DITHER_SHIFT		0
#define TCC2_CC3_DITH4_DITHER_MASK		0x0f
/** @defgroup tcc2_cc3_dith4_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc3_dith5 CC3DITH5 Compare and Capture
@{*/


#define TCC2_CC3_DITH5_CC_SHIFT		5
#define TCC2_CC3_DITH5_CC_MASK		0x7ffff
/** @defgroup tcc2_cc3_dith5_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC3_DITH5_DITHER_SHIFT		0
#define TCC2_CC3_DITH5_DITHER_MASK		0x1f
/** @defgroup tcc2_cc3_dith5_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_cc3_dith6 CC3DITH6 Compare and Capture
@{*/


#define TCC2_CC3_DITH6_CC_SHIFT		6
#define TCC2_CC3_DITH6_CC_MASK		0x3ffff
/** @defgroup tcc2_cc3_dith6_cc CC Channel Compare/Capture Value
@{*/
/**@}*/


#define TCC2_CC3_DITH6_DITHER_SHIFT		0
#define TCC2_CC3_DITH6_DITHER_MASK		0x3f
/** @defgroup tcc2_cc3_dith6_dither DITHER Dithering Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_pattbuf PATTBUF Pattern Buffer
@{*/

/** TCC2_PATTBUF_PGVB7 Pattern Generator 7 Output Enable **/
#define TCC2_PATTBUF_PGVB7		(1 << 15)
/** TCC2_PATTBUF_PGVB6 Pattern Generator 6 Output Enable **/
#define TCC2_PATTBUF_PGVB6		(1 << 14)
/** TCC2_PATTBUF_PGVB5 Pattern Generator 5 Output Enable **/
#define TCC2_PATTBUF_PGVB5		(1 << 13)
/** TCC2_PATTBUF_PGVB4 Pattern Generator 4 Output Enable **/
#define TCC2_PATTBUF_PGVB4		(1 << 12)
/** TCC2_PATTBUF_PGVB3 Pattern Generator 3 Output Enable **/
#define TCC2_PATTBUF_PGVB3		(1 << 11)
/** TCC2_PATTBUF_PGVB2 Pattern Generator 2 Output Enable **/
#define TCC2_PATTBUF_PGVB2		(1 << 10)
/** TCC2_PATTBUF_PGVB1 Pattern Generator 1 Output Enable **/
#define TCC2_PATTBUF_PGVB1		(1 << 9)
/** TCC2_PATTBUF_PGVB0 Pattern Generator 0 Output Enable **/
#define TCC2_PATTBUF_PGVB0		(1 << 8)
/** TCC2_PATTBUF_PGEB7 Pattern Generator 7 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB7		(1 << 7)
/** TCC2_PATTBUF_PGEB6 Pattern Generator 6 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB6		(1 << 6)
/** TCC2_PATTBUF_PGEB5 Pattern Generator 5 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB5		(1 << 5)
/** TCC2_PATTBUF_PGEB4 Pattern Generator 4 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB4		(1 << 4)
/** TCC2_PATTBUF_PGEB3 Pattern Generator 3 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB3		(1 << 3)
/** TCC2_PATTBUF_PGEB2 Pattern Generator 2 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB2		(1 << 2)
/** TCC2_PATTBUF_PGEB1 Pattern Generator 1 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB1		(1 << 1)
/** TCC2_PATTBUF_PGEB0 Pattern Generator 0 Output Enable Buffer **/
#define TCC2_PATTBUF_PGEB0		(1 << 0)

/**@}*/

/** @defgroup tcc2_perbuf PERBUF Period Buffer
@{*/


#define TCC2_PERBUF_PERBUF_SHIFT		0
#define TCC2_PERBUF_PERBUF_MASK		0xffffff
/** @defgroup tcc2_perbuf_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_perbuf_dith4 PERBUFDITH4 Period Buffer
@{*/


#define TCC2_PERBUF_DITH4_PERBUF_SHIFT		4
#define TCC2_PERBUF_DITH4_PERBUF_MASK		0xfffff
/** @defgroup tcc2_perbuf_dith4_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


#define TCC2_PERBUF_DITH4_DITHERBUF_SHIFT		0
#define TCC2_PERBUF_DITH4_DITHERBUF_MASK		0x0f
/** @defgroup tcc2_perbuf_dith4_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_perbuf_dith5 PERBUFDITH5 Period Buffer
@{*/


#define TCC2_PERBUF_DITH5_PERBUF_SHIFT		5
#define TCC2_PERBUF_DITH5_PERBUF_MASK		0x7ffff
/** @defgroup tcc2_perbuf_dith5_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


#define TCC2_PERBUF_DITH5_DITHERBUF_SHIFT		0
#define TCC2_PERBUF_DITH5_DITHERBUF_MASK		0x1f
/** @defgroup tcc2_perbuf_dith5_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_perbuf_dith6 PERBUFDITH6 Period Buffer
@{*/


#define TCC2_PERBUF_DITH6_PERBUF_SHIFT		6
#define TCC2_PERBUF_DITH6_PERBUF_MASK		0x3ffff
/** @defgroup tcc2_perbuf_dith6_perbuf PERBUF Period Buffer Value
@{*/
/**@}*/


#define TCC2_PERBUF_DITH6_DITHERBUF_SHIFT		0
#define TCC2_PERBUF_DITH6_DITHERBUF_MASK		0x3f
/** @defgroup tcc2_perbuf_dith6_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf0 CCBUF0 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF0_CCBUF_SHIFT		0
#define TCC2_CCBUF0_CCBUF_MASK		0xffffff
/** @defgroup tcc2_ccbuf0_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf0_dith4 CCBUF0DITH4 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF0_DITH4_DITHERBUF_SHIFT		4
#define TCC2_CCBUF0_DITH4_DITHERBUF_MASK		0xfffff
/** @defgroup tcc2_ccbuf0_dith4_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


#define TCC2_CCBUF0_DITH4_CCBUF_SHIFT		0
#define TCC2_CCBUF0_DITH4_CCBUF_MASK		0x0f
/** @defgroup tcc2_ccbuf0_dith4_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf0_dith5 CCBUF0DITH5 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF0_DITH5_CCBUF_SHIFT		5
#define TCC2_CCBUF0_DITH5_CCBUF_MASK		0x7ffff
/** @defgroup tcc2_ccbuf0_dith5_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF0_DITH5_DITHERBUF_SHIFT		0
#define TCC2_CCBUF0_DITH5_DITHERBUF_MASK		0x1f
/** @defgroup tcc2_ccbuf0_dith5_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf0_dith6 CCBUF0DITH6 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF0_DITH6_CCBUF_SHIFT		6
#define TCC2_CCBUF0_DITH6_CCBUF_MASK		0x3ffff
/** @defgroup tcc2_ccbuf0_dith6_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF0_DITH6_DITHERBUF_SHIFT		0
#define TCC2_CCBUF0_DITH6_DITHERBUF_MASK		0x3f
/** @defgroup tcc2_ccbuf0_dith6_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf1 CCBUF1 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF1_CCBUF_SHIFT		0
#define TCC2_CCBUF1_CCBUF_MASK		0xffffff
/** @defgroup tcc2_ccbuf1_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf1_dith4 CCBUF1DITH4 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF1_DITH4_DITHERBUF_SHIFT		4
#define TCC2_CCBUF1_DITH4_DITHERBUF_MASK		0xfffff
/** @defgroup tcc2_ccbuf1_dith4_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


#define TCC2_CCBUF1_DITH4_CCBUF_SHIFT		0
#define TCC2_CCBUF1_DITH4_CCBUF_MASK		0x0f
/** @defgroup tcc2_ccbuf1_dith4_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf1_dith5 CCBUF1DITH5 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF1_DITH5_CCBUF_SHIFT		5
#define TCC2_CCBUF1_DITH5_CCBUF_MASK		0x7ffff
/** @defgroup tcc2_ccbuf1_dith5_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF1_DITH5_DITHERBUF_SHIFT		0
#define TCC2_CCBUF1_DITH5_DITHERBUF_MASK		0x1f
/** @defgroup tcc2_ccbuf1_dith5_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf1_dith6 CCBUF1DITH6 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF1_DITH6_CCBUF_SHIFT		6
#define TCC2_CCBUF1_DITH6_CCBUF_MASK		0x3ffff
/** @defgroup tcc2_ccbuf1_dith6_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF1_DITH6_DITHERBUF_SHIFT		0
#define TCC2_CCBUF1_DITH6_DITHERBUF_MASK		0x3f
/** @defgroup tcc2_ccbuf1_dith6_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf2 CCBUF2 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF2_CCBUF_SHIFT		0
#define TCC2_CCBUF2_CCBUF_MASK		0xffffff
/** @defgroup tcc2_ccbuf2_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf2_dith4 CCBUF2DITH4 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF2_DITH4_DITHERBUF_SHIFT		4
#define TCC2_CCBUF2_DITH4_DITHERBUF_MASK		0xfffff
/** @defgroup tcc2_ccbuf2_dith4_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


#define TCC2_CCBUF2_DITH4_CCBUF_SHIFT		0
#define TCC2_CCBUF2_DITH4_CCBUF_MASK		0x0f
/** @defgroup tcc2_ccbuf2_dith4_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf2_dith5 CCBUF2DITH5 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF2_DITH5_CCBUF_SHIFT		5
#define TCC2_CCBUF2_DITH5_CCBUF_MASK		0x7ffff
/** @defgroup tcc2_ccbuf2_dith5_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF2_DITH5_DITHERBUF_SHIFT		0
#define TCC2_CCBUF2_DITH5_DITHERBUF_MASK		0x1f
/** @defgroup tcc2_ccbuf2_dith5_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf2_dith6 CCBUF2DITH6 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF2_DITH6_CCBUF_SHIFT		6
#define TCC2_CCBUF2_DITH6_CCBUF_MASK		0x3ffff
/** @defgroup tcc2_ccbuf2_dith6_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF2_DITH6_DITHERBUF_SHIFT		0
#define TCC2_CCBUF2_DITH6_DITHERBUF_MASK		0x3f
/** @defgroup tcc2_ccbuf2_dith6_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf3 CCBUF3 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF3_CCBUF_SHIFT		0
#define TCC2_CCBUF3_CCBUF_MASK		0xffffff
/** @defgroup tcc2_ccbuf3_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf3_dith4 CCBUF3DITH4 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF3_DITH4_DITHERBUF_SHIFT		4
#define TCC2_CCBUF3_DITH4_DITHERBUF_MASK		0xfffff
/** @defgroup tcc2_ccbuf3_dith4_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


#define TCC2_CCBUF3_DITH4_CCBUF_SHIFT		0
#define TCC2_CCBUF3_DITH4_CCBUF_MASK		0x0f
/** @defgroup tcc2_ccbuf3_dith4_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf3_dith5 CCBUF3DITH5 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF3_DITH5_CCBUF_SHIFT		5
#define TCC2_CCBUF3_DITH5_CCBUF_MASK		0x7ffff
/** @defgroup tcc2_ccbuf3_dith5_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF3_DITH5_DITHERBUF_SHIFT		0
#define TCC2_CCBUF3_DITH5_DITHERBUF_MASK		0x1f
/** @defgroup tcc2_ccbuf3_dith5_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup tcc2_ccbuf3_dith6 CCBUF3DITH6 Compare and Capture Buffer
@{*/


#define TCC2_CCBUF3_DITH6_CCBUF_SHIFT		6
#define TCC2_CCBUF3_DITH6_CCBUF_MASK		0x3ffff
/** @defgroup tcc2_ccbuf3_dith6_ccbuf CCBUF Channel Compare/Capture Buffer Value
@{*/
/**@}*/


#define TCC2_CCBUF3_DITH6_DITHERBUF_SHIFT		0
#define TCC2_CCBUF3_DITH6_DITHERBUF_MASK		0x3f
/** @defgroup tcc2_ccbuf3_dith6_ditherbuf DITHERBUF Dithering Buffer Cycle Number
@{*/
/**@}*/


/**@}*/

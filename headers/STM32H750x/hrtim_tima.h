#pragma once 

/* --- HRTIM_TIMA: High Resolution Timer: TIMA ---------------------- */

/** @defgroup hrtim_tima_registers High Resolution Timer: TIMA Register
@{*/

/** HRTIM_TIMA_TIMACR Timerx Control Register **/
#define HRTIM_TIMA_TIMACR			MMIO32(HRTIM_TIMA_BASE + 0x00)
/** HRTIM_TIMA_TIMAISR Timerx Interrupt Status Register **/
#define HRTIM_TIMA_TIMAISR			MMIO32(HRTIM_TIMA_BASE + 0x04)
/** HRTIM_TIMA_TIMAICR Timerx Interrupt Clear Register **/
#define HRTIM_TIMA_TIMAICR			MMIO32(HRTIM_TIMA_BASE + 0x08)
/** HRTIM_TIMA_TIMADIER5 TIMxDIER5 **/
#define HRTIM_TIMA_TIMADIER5			MMIO32(HRTIM_TIMA_BASE + 0x0c)
/** HRTIM_TIMA_CNTAR Timerx Counter Register **/
#define HRTIM_TIMA_CNTAR			MMIO32(HRTIM_TIMA_BASE + 0x10)
/** HRTIM_TIMA_PERAR Timerx Period Register **/
#define HRTIM_TIMA_PERAR			MMIO32(HRTIM_TIMA_BASE + 0x14)
/** HRTIM_TIMA_REPAR Timerx Repetition Register **/
#define HRTIM_TIMA_REPAR			MMIO32(HRTIM_TIMA_BASE + 0x18)
/** HRTIM_TIMA_CMP1AR Timerx Compare 1 Register **/
#define HRTIM_TIMA_CMP1AR			MMIO32(HRTIM_TIMA_BASE + 0x1c)
/** HRTIM_TIMA_CMP1CAR Timerx Compare 1 Compound Register **/
#define HRTIM_TIMA_CMP1CAR			MMIO32(HRTIM_TIMA_BASE + 0x20)
/** HRTIM_TIMA_CMP2AR Timerx Compare 2 Register **/
#define HRTIM_TIMA_CMP2AR			MMIO32(HRTIM_TIMA_BASE + 0x24)
/** HRTIM_TIMA_CMP3AR Timerx Compare 3 Register **/
#define HRTIM_TIMA_CMP3AR			MMIO32(HRTIM_TIMA_BASE + 0x28)
/** HRTIM_TIMA_CMP4AR Timerx Compare 4 Register **/
#define HRTIM_TIMA_CMP4AR			MMIO32(HRTIM_TIMA_BASE + 0x2c)
/** HRTIM_TIMA_CPT1AR Timerx Capture 1 Register **/
#define HRTIM_TIMA_CPT1AR			MMIO32(HRTIM_TIMA_BASE + 0x30)
/** HRTIM_TIMA_CPT2AR Timerx Capture 2 Register **/
#define HRTIM_TIMA_CPT2AR			MMIO32(HRTIM_TIMA_BASE + 0x34)
/** HRTIM_TIMA_DTAR Timerx Deadtime Register **/
#define HRTIM_TIMA_DTAR			MMIO32(HRTIM_TIMA_BASE + 0x38)
/** HRTIM_TIMA_SETA1R Timerx Output1 Set Register **/
#define HRTIM_TIMA_SETA1R			MMIO32(HRTIM_TIMA_BASE + 0x3c)
/** HRTIM_TIMA_RSTA1R Timerx Output1 Reset Register **/
#define HRTIM_TIMA_RSTA1R			MMIO32(HRTIM_TIMA_BASE + 0x40)
/** HRTIM_TIMA_SETA2R Timerx Output2 Set Register **/
#define HRTIM_TIMA_SETA2R			MMIO32(HRTIM_TIMA_BASE + 0x44)
/** HRTIM_TIMA_RSTA2R Timerx Output2 Reset Register **/
#define HRTIM_TIMA_RSTA2R			MMIO32(HRTIM_TIMA_BASE + 0x48)
/** HRTIM_TIMA_EEFAR1 Timerx External Event Filtering Register 1 **/
#define HRTIM_TIMA_EEFAR1			MMIO32(HRTIM_TIMA_BASE + 0x4c)
/** HRTIM_TIMA_EEFAR2 Timerx External Event Filtering Register 2 **/
#define HRTIM_TIMA_EEFAR2			MMIO32(HRTIM_TIMA_BASE + 0x50)
/** HRTIM_TIMA_RSTAR TimerA Reset Register **/
#define HRTIM_TIMA_RSTAR			MMIO32(HRTIM_TIMA_BASE + 0x54)
/** HRTIM_TIMA_CHPAR Timerx Chopper Register **/
#define HRTIM_TIMA_CHPAR			MMIO32(HRTIM_TIMA_BASE + 0x58)
/** HRTIM_TIMA_CPT1ACR Timerx Capture 2 Control Register **/
#define HRTIM_TIMA_CPT1ACR			MMIO32(HRTIM_TIMA_BASE + 0x5c)
/** HRTIM_TIMA_CPT2ACR CPT2xCR **/
#define HRTIM_TIMA_CPT2ACR			MMIO32(HRTIM_TIMA_BASE + 0x60)
/** HRTIM_TIMA_OUTAR Timerx Output Register **/
#define HRTIM_TIMA_OUTAR			MMIO32(HRTIM_TIMA_BASE + 0x64)
/** HRTIM_TIMA_FLTAR Timerx Fault Register **/
#define HRTIM_TIMA_FLTAR			MMIO32(HRTIM_TIMA_BASE + 0x68)

/**@}*/


/** @defgroup hrtim_tima_timacr TIMACR Timerx Control Register
@{*/


#define HRTIM_TIMA_TIMACR_UPDGAT_SHIFT		28
#define HRTIM_TIMA_TIMACR_UPDGAT_MASK		0x0f
/** @defgroup hrtim_tima_timacr_updgat UPDGAT Update Gating
@{*/
/**@}*/

/** HRTIM_TIMA_TIMACR_PREEN Preload enable **/
#define HRTIM_TIMA_TIMACR_PREEN		(1 << 27)

#define HRTIM_TIMA_TIMACR_DACSYNC_SHIFT		25
#define HRTIM_TIMA_TIMACR_DACSYNC_MASK		0x03
/** @defgroup hrtim_tima_timacr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_TIMA_TIMACR_MSTU Master Timer update **/
#define HRTIM_TIMA_TIMACR_MSTU		(1 << 24)
/** HRTIM_TIMA_TIMACR_TEU TEU **/
#define HRTIM_TIMA_TIMACR_TEU		(1 << 23)
/** HRTIM_TIMA_TIMACR_TDU TDU **/
#define HRTIM_TIMA_TIMACR_TDU		(1 << 22)
/** HRTIM_TIMA_TIMACR_TCU TCU **/
#define HRTIM_TIMA_TIMACR_TCU		(1 << 21)
/** HRTIM_TIMA_TIMACR_TBU TBU **/
#define HRTIM_TIMA_TIMACR_TBU		(1 << 20)
/** HRTIM_TIMA_TIMACR_TxRSTU Timerx reset update **/
#define HRTIM_TIMA_TIMACR_TxRSTU		(1 << 18)
/** HRTIM_TIMA_TIMACR_TxREPU Timer x Repetition update **/
#define HRTIM_TIMA_TIMACR_TxREPU		(1 << 17)

#define HRTIM_TIMA_TIMACR_DELCMP4_SHIFT		14
#define HRTIM_TIMA_TIMACR_DELCMP4_MASK		0x03
/** @defgroup hrtim_tima_timacr_delcmp4 DELCMP4 Delayed CMP4 mode
@{*/
/**@}*/


#define HRTIM_TIMA_TIMACR_DELCMP2_SHIFT		12
#define HRTIM_TIMA_TIMACR_DELCMP2_MASK		0x03
/** @defgroup hrtim_tima_timacr_delcmp2 DELCMP2 Delayed CMP2 mode
@{*/
/**@}*/

/** HRTIM_TIMA_TIMACR_SYNCSTRTx Synchronization Starts Timer x **/
#define HRTIM_TIMA_TIMACR_SYNCSTRTx		(1 << 11)
/** HRTIM_TIMA_TIMACR_SYNCRSTx Synchronization Resets Timer x **/
#define HRTIM_TIMA_TIMACR_SYNCRSTx		(1 << 10)
/** HRTIM_TIMA_TIMACR_PSHPLL Push-Pull mode enable **/
#define HRTIM_TIMA_TIMACR_PSHPLL		(1 << 6)
/** HRTIM_TIMA_TIMACR_HALF Half mode enable **/
#define HRTIM_TIMA_TIMACR_HALF		(1 << 5)
/** HRTIM_TIMA_TIMACR_RETRIG Re-triggerable mode **/
#define HRTIM_TIMA_TIMACR_RETRIG		(1 << 4)
/** HRTIM_TIMA_TIMACR_CONT Continuous mode **/
#define HRTIM_TIMA_TIMACR_CONT		(1 << 3)

#define HRTIM_TIMA_TIMACR_CK_PSCx_SHIFT		0
#define HRTIM_TIMA_TIMACR_CK_PSCx_MASK		0x07
/** @defgroup hrtim_tima_timacr_ck_pscx CKPSCx HRTIM Timer x Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_timaisr TIMAISR Timerx Interrupt Status Register
@{*/

/** HRTIM_TIMA_TIMAISR_O2STAT Output 2 State **/
#define HRTIM_TIMA_TIMAISR_O2STAT		(1 << 19)
/** HRTIM_TIMA_TIMAISR_O1STAT Output 1 State **/
#define HRTIM_TIMA_TIMAISR_O1STAT		(1 << 18)
/** HRTIM_TIMA_TIMAISR_IPPSTAT Idle Push Pull Status **/
#define HRTIM_TIMA_TIMAISR_IPPSTAT		(1 << 17)
/** HRTIM_TIMA_TIMAISR_CPPSTAT Current Push Pull Status **/
#define HRTIM_TIMA_TIMAISR_CPPSTAT		(1 << 16)
/** HRTIM_TIMA_TIMAISR_DLYPRT Delayed Protection Flag **/
#define HRTIM_TIMA_TIMAISR_DLYPRT		(1 << 14)
/** HRTIM_TIMA_TIMAISR_RST Reset Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_RST		(1 << 13)
/** HRTIM_TIMA_TIMAISR_RSTx2 Output 2 Reset Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_RSTx2		(1 << 12)
/** HRTIM_TIMA_TIMAISR_SETx2 Output 2 Set Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_SETx2		(1 << 11)
/** HRTIM_TIMA_TIMAISR_RSTx1 Output 1 Reset Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_RSTx1		(1 << 10)
/** HRTIM_TIMA_TIMAISR_SETx1 Output 1 Set Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_SETx1		(1 << 9)
/** HRTIM_TIMA_TIMAISR_CPT2 Capture2 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CPT2		(1 << 8)
/** HRTIM_TIMA_TIMAISR_CPT1 Capture1 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CPT1		(1 << 7)
/** HRTIM_TIMA_TIMAISR_UPD Update Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_UPD		(1 << 6)
/** HRTIM_TIMA_TIMAISR_REP Repetition Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_REP		(1 << 4)
/** HRTIM_TIMA_TIMAISR_CMP4 Compare 4 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CMP4		(1 << 3)
/** HRTIM_TIMA_TIMAISR_CMP3 Compare 3 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CMP3		(1 << 2)
/** HRTIM_TIMA_TIMAISR_CMP2 Compare 2 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CMP2		(1 << 1)
/** HRTIM_TIMA_TIMAISR_CMP1 Compare 1 Interrupt Flag **/
#define HRTIM_TIMA_TIMAISR_CMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_timaicr TIMAICR Timerx Interrupt Clear Register
@{*/

/** HRTIM_TIMA_TIMAICR_DLYPRTC Delayed Protection Flag Clear **/
#define HRTIM_TIMA_TIMAICR_DLYPRTC		(1 << 14)
/** HRTIM_TIMA_TIMAICR_RSTC Reset Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_RSTC		(1 << 13)
/** HRTIM_TIMA_TIMAICR_RSTx2C Output 2 Reset flag Clear **/
#define HRTIM_TIMA_TIMAICR_RSTx2C		(1 << 12)
/** HRTIM_TIMA_TIMAICR_SET2xC Output 2 Set flag Clear **/
#define HRTIM_TIMA_TIMAICR_SET2xC		(1 << 11)
/** HRTIM_TIMA_TIMAICR_RSTx1C Output 1 Reset flag Clear **/
#define HRTIM_TIMA_TIMAICR_RSTx1C		(1 << 10)
/** HRTIM_TIMA_TIMAICR_SET1xC Output 1 Set flag Clear **/
#define HRTIM_TIMA_TIMAICR_SET1xC		(1 << 9)
/** HRTIM_TIMA_TIMAICR_CPT2C Capture2 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CPT2C		(1 << 8)
/** HRTIM_TIMA_TIMAICR_CPT1C Capture1 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CPT1C		(1 << 7)
/** HRTIM_TIMA_TIMAICR_UPDC Update Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_UPDC		(1 << 6)
/** HRTIM_TIMA_TIMAICR_REPC Repetition Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_REPC		(1 << 4)
/** HRTIM_TIMA_TIMAICR_CMP4C Compare 4 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CMP4C		(1 << 3)
/** HRTIM_TIMA_TIMAICR_CMP3C Compare 3 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CMP3C		(1 << 2)
/** HRTIM_TIMA_TIMAICR_CMP2C Compare 2 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CMP2C		(1 << 1)
/** HRTIM_TIMA_TIMAICR_CMP1C Compare 1 Interrupt flag Clear **/
#define HRTIM_TIMA_TIMAICR_CMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_timadier5 TIMADIER5 TIMxDIER5
@{*/

/** HRTIM_TIMA_TIMADIER5_DLYPRTDE DLYPRTDE **/
#define HRTIM_TIMA_TIMADIER5_DLYPRTDE		(1 << 30)
/** HRTIM_TIMA_TIMADIER5_RSTDE RSTDE **/
#define HRTIM_TIMA_TIMADIER5_RSTDE		(1 << 29)
/** HRTIM_TIMA_TIMADIER5_RSTx2DE RSTx2DE **/
#define HRTIM_TIMA_TIMADIER5_RSTx2DE		(1 << 28)
/** HRTIM_TIMA_TIMADIER5_SETx2DE SETx2DE **/
#define HRTIM_TIMA_TIMADIER5_SETx2DE		(1 << 27)
/** HRTIM_TIMA_TIMADIER5_RSTx1DE RSTx1DE **/
#define HRTIM_TIMA_TIMADIER5_RSTx1DE		(1 << 26)
/** HRTIM_TIMA_TIMADIER5_SET1xDE SET1xDE **/
#define HRTIM_TIMA_TIMADIER5_SET1xDE		(1 << 25)
/** HRTIM_TIMA_TIMADIER5_CPT2DE CPT2DE **/
#define HRTIM_TIMA_TIMADIER5_CPT2DE		(1 << 24)
/** HRTIM_TIMA_TIMADIER5_CPT1DE CPT1DE **/
#define HRTIM_TIMA_TIMADIER5_CPT1DE		(1 << 23)
/** HRTIM_TIMA_TIMADIER5_UPDDE UPDDE **/
#define HRTIM_TIMA_TIMADIER5_UPDDE		(1 << 22)
/** HRTIM_TIMA_TIMADIER5_REPDE REPDE **/
#define HRTIM_TIMA_TIMADIER5_REPDE		(1 << 20)
/** HRTIM_TIMA_TIMADIER5_CMP4DE CMP4DE **/
#define HRTIM_TIMA_TIMADIER5_CMP4DE		(1 << 19)
/** HRTIM_TIMA_TIMADIER5_CMP3DE CMP3DE **/
#define HRTIM_TIMA_TIMADIER5_CMP3DE		(1 << 18)
/** HRTIM_TIMA_TIMADIER5_CMP2DE CMP2DE **/
#define HRTIM_TIMA_TIMADIER5_CMP2DE		(1 << 17)
/** HRTIM_TIMA_TIMADIER5_CMP1DE CMP1DE **/
#define HRTIM_TIMA_TIMADIER5_CMP1DE		(1 << 16)
/** HRTIM_TIMA_TIMADIER5_DLYPRTIE DLYPRTIE **/
#define HRTIM_TIMA_TIMADIER5_DLYPRTIE		(1 << 14)
/** HRTIM_TIMA_TIMADIER5_RSTIE RSTIE **/
#define HRTIM_TIMA_TIMADIER5_RSTIE		(1 << 13)
/** HRTIM_TIMA_TIMADIER5_RSTx2IE RSTx2IE **/
#define HRTIM_TIMA_TIMADIER5_RSTx2IE		(1 << 12)
/** HRTIM_TIMA_TIMADIER5_SETx2IE SETx2IE **/
#define HRTIM_TIMA_TIMADIER5_SETx2IE		(1 << 11)
/** HRTIM_TIMA_TIMADIER5_RSTx1IE RSTx1IE **/
#define HRTIM_TIMA_TIMADIER5_RSTx1IE		(1 << 10)
/** HRTIM_TIMA_TIMADIER5_SET1xIE SET1xIE **/
#define HRTIM_TIMA_TIMADIER5_SET1xIE		(1 << 9)
/** HRTIM_TIMA_TIMADIER5_CPT2IE CPT2IE **/
#define HRTIM_TIMA_TIMADIER5_CPT2IE		(1 << 8)
/** HRTIM_TIMA_TIMADIER5_CPT1IE CPT1IE **/
#define HRTIM_TIMA_TIMADIER5_CPT1IE		(1 << 7)
/** HRTIM_TIMA_TIMADIER5_UPDIE UPDIE **/
#define HRTIM_TIMA_TIMADIER5_UPDIE		(1 << 6)
/** HRTIM_TIMA_TIMADIER5_REPIE REPIE **/
#define HRTIM_TIMA_TIMADIER5_REPIE		(1 << 4)
/** HRTIM_TIMA_TIMADIER5_CMP4IE CMP4IE **/
#define HRTIM_TIMA_TIMADIER5_CMP4IE		(1 << 3)
/** HRTIM_TIMA_TIMADIER5_CMP3IE CMP3IE **/
#define HRTIM_TIMA_TIMADIER5_CMP3IE		(1 << 2)
/** HRTIM_TIMA_TIMADIER5_CMP2IE CMP2IE **/
#define HRTIM_TIMA_TIMADIER5_CMP2IE		(1 << 1)
/** HRTIM_TIMA_TIMADIER5_CMP1IE CMP1IE **/
#define HRTIM_TIMA_TIMADIER5_CMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_cntar CNTAR Timerx Counter Register
@{*/


#define HRTIM_TIMA_CNTAR_CNTx_SHIFT		0
#define HRTIM_TIMA_CNTAR_CNTx_MASK		0xffff
/** @defgroup hrtim_tima_cntar_cntx CNTx Timerx Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_perar PERAR Timerx Period Register
@{*/


#define HRTIM_TIMA_PERAR_PERx_SHIFT		0
#define HRTIM_TIMA_PERAR_PERx_MASK		0xffff
/** @defgroup hrtim_tima_perar_perx PERx Timerx Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_repar REPAR Timerx Repetition Register
@{*/


#define HRTIM_TIMA_REPAR_REPx_SHIFT		0
#define HRTIM_TIMA_REPAR_REPx_MASK		0xff
/** @defgroup hrtim_tima_repar_repx REPx Timerx Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cmp1ar CMP1AR Timerx Compare 1 Register
@{*/


#define HRTIM_TIMA_CMP1AR_CMP1x_SHIFT		0
#define HRTIM_TIMA_CMP1AR_CMP1x_MASK		0xffff
/** @defgroup hrtim_tima_cmp1ar_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cmp1car CMP1CAR Timerx Compare 1 Compound Register
@{*/


#define HRTIM_TIMA_CMP1CAR_REPx_SHIFT		16
#define HRTIM_TIMA_CMP1CAR_REPx_MASK		0xff
/** @defgroup hrtim_tima_cmp1car_repx REPx Timerx Repetition value (aliased from HRTIM_REPx register)
@{*/
/**@}*/


#define HRTIM_TIMA_CMP1CAR_CMP1x_SHIFT		0
#define HRTIM_TIMA_CMP1CAR_CMP1x_MASK		0xffff
/** @defgroup hrtim_tima_cmp1car_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cmp2ar CMP2AR Timerx Compare 2 Register
@{*/


#define HRTIM_TIMA_CMP2AR_CMP2x_SHIFT		0
#define HRTIM_TIMA_CMP2AR_CMP2x_MASK		0xffff
/** @defgroup hrtim_tima_cmp2ar_cmp2x CMP2x Timerx Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cmp3ar CMP3AR Timerx Compare 3 Register
@{*/


#define HRTIM_TIMA_CMP3AR_CMP3x_SHIFT		0
#define HRTIM_TIMA_CMP3AR_CMP3x_MASK		0xffff
/** @defgroup hrtim_tima_cmp3ar_cmp3x CMP3x Timerx Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cmp4ar CMP4AR Timerx Compare 4 Register
@{*/


#define HRTIM_TIMA_CMP4AR_CMP4x_SHIFT		0
#define HRTIM_TIMA_CMP4AR_CMP4x_MASK		0xffff
/** @defgroup hrtim_tima_cmp4ar_cmp4x CMP4x Timerx Compare 4 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cpt1ar CPT1AR Timerx Capture 1 Register
@{*/


#define HRTIM_TIMA_CPT1AR_CPT1x_SHIFT		0
#define HRTIM_TIMA_CPT1AR_CPT1x_MASK		0xffff
/** @defgroup hrtim_tima_cpt1ar_cpt1x CPT1x Timerx Capture 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cpt2ar CPT2AR Timerx Capture 2 Register
@{*/


#define HRTIM_TIMA_CPT2AR_CPT2x_SHIFT		0
#define HRTIM_TIMA_CPT2AR_CPT2x_MASK		0xffff
/** @defgroup hrtim_tima_cpt2ar_cpt2x CPT2x Timerx Capture 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_dtar DTAR Timerx Deadtime Register
@{*/

/** HRTIM_TIMA_DTAR_DTFLKx Deadtime Falling Lock **/
#define HRTIM_TIMA_DTAR_DTFLKx		(1 << 31)
/** HRTIM_TIMA_DTAR_DTFSLKx Deadtime Falling Sign Lock **/
#define HRTIM_TIMA_DTAR_DTFSLKx		(1 << 30)
/** HRTIM_TIMA_DTAR_SDTFx Sign Deadtime Falling value **/
#define HRTIM_TIMA_DTAR_SDTFx		(1 << 25)

#define HRTIM_TIMA_DTAR_DTFx_SHIFT		16
#define HRTIM_TIMA_DTAR_DTFx_MASK		0x1ff
/** @defgroup hrtim_tima_dtar_dtfx DTFx Deadtime Falling value
@{*/
/**@}*/

/** HRTIM_TIMA_DTAR_DTRLKx Deadtime Rising Lock **/
#define HRTIM_TIMA_DTAR_DTRLKx		(1 << 15)
/** HRTIM_TIMA_DTAR_DTRSLKx Deadtime Rising Sign Lock **/
#define HRTIM_TIMA_DTAR_DTRSLKx		(1 << 14)

#define HRTIM_TIMA_DTAR_DTPRSC_SHIFT		10
#define HRTIM_TIMA_DTAR_DTPRSC_MASK		0x07
/** @defgroup hrtim_tima_dtar_dtprsc DTPRSC Deadtime Prescaler
@{*/
/**@}*/

/** HRTIM_TIMA_DTAR_SDTRx Sign Deadtime Rising value **/
#define HRTIM_TIMA_DTAR_SDTRx		(1 << 9)

#define HRTIM_TIMA_DTAR_DTRx_SHIFT		0
#define HRTIM_TIMA_DTAR_DTRx_MASK		0x1ff
/** @defgroup hrtim_tima_dtar_dtrx DTRx Deadtime Rising value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_seta1r SETA1R Timerx Output1 Set Register
@{*/

/** HRTIM_TIMA_SETA1R_UPDATE Registers update (transfer preload to active) **/
#define HRTIM_TIMA_SETA1R_UPDATE		(1 << 31)
/** HRTIM_TIMA_SETA1R_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMA_SETA1R_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMA_SETA1R_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMA_SETA1R_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMA_SETA1R_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMA_SETA1R_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMA_SETA1R_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMA_SETA1R_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMA_SETA1R_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMA_SETA1R_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMA_SETA1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMA_SETA1R_TIMEVNT9 Timer Event 9 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMA_SETA1R_TIMEVNT8 Timer Event 8 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMA_SETA1R_TIMEVNT7 Timer Event 7 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMA_SETA1R_TIMEVNT6 Timer Event 6 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMA_SETA1R_TIMEVNT5 Timer Event 5 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMA_SETA1R_TIMEVNT4 Timer Event 4 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMA_SETA1R_TIMEVNT3 Timer Event 3 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMA_SETA1R_TIMEVNT2 Timer Event 2 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMA_SETA1R_TIMEVNT1 Timer Event 1 **/
#define HRTIM_TIMA_SETA1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMA_SETA1R_MSTCMP4 Master Compare 4 **/
#define HRTIM_TIMA_SETA1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMA_SETA1R_MSTCMP3 Master Compare 3 **/
#define HRTIM_TIMA_SETA1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMA_SETA1R_MSTCMP2 Master Compare 2 **/
#define HRTIM_TIMA_SETA1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMA_SETA1R_MSTCMP1 Master Compare 1 **/
#define HRTIM_TIMA_SETA1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMA_SETA1R_MSTPER Master Period **/
#define HRTIM_TIMA_SETA1R_MSTPER		(1 << 7)
/** HRTIM_TIMA_SETA1R_CMP4 Timer A compare 4 **/
#define HRTIM_TIMA_SETA1R_CMP4		(1 << 6)
/** HRTIM_TIMA_SETA1R_CMP3 Timer A compare 3 **/
#define HRTIM_TIMA_SETA1R_CMP3		(1 << 5)
/** HRTIM_TIMA_SETA1R_CMP2 Timer A compare 2 **/
#define HRTIM_TIMA_SETA1R_CMP2		(1 << 4)
/** HRTIM_TIMA_SETA1R_CMP1 Timer A compare 1 **/
#define HRTIM_TIMA_SETA1R_CMP1		(1 << 3)
/** HRTIM_TIMA_SETA1R_PER Timer A Period **/
#define HRTIM_TIMA_SETA1R_PER		(1 << 2)
/** HRTIM_TIMA_SETA1R_RESYNC Timer A resynchronizaton **/
#define HRTIM_TIMA_SETA1R_RESYNC		(1 << 1)
/** HRTIM_TIMA_SETA1R_SST Software Set trigger **/
#define HRTIM_TIMA_SETA1R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_rsta1r RSTA1R Timerx Output1 Reset Register
@{*/

/** HRTIM_TIMA_RSTA1R_UPDATE UPDATE **/
#define HRTIM_TIMA_RSTA1R_UPDATE		(1 << 31)
/** HRTIM_TIMA_RSTA1R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMA_RSTA1R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMA_RSTA1R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMA_RSTA1R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMA_RSTA1R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMA_RSTA1R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMA_RSTA1R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMA_RSTA1R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMA_RSTA1R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMA_RSTA1R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMA_RSTA1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMA_RSTA1R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMA_RSTA1R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMA_RSTA1R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMA_RSTA1R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMA_RSTA1R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMA_RSTA1R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMA_RSTA1R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMA_RSTA1R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMA_RSTA1R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMA_RSTA1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMA_RSTA1R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMA_RSTA1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMA_RSTA1R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMA_RSTA1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMA_RSTA1R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMA_RSTA1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMA_RSTA1R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMA_RSTA1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMA_RSTA1R_MSTPER MSTPER **/
#define HRTIM_TIMA_RSTA1R_MSTPER		(1 << 7)
/** HRTIM_TIMA_RSTA1R_CMP4 CMP4 **/
#define HRTIM_TIMA_RSTA1R_CMP4		(1 << 6)
/** HRTIM_TIMA_RSTA1R_CMP3 CMP3 **/
#define HRTIM_TIMA_RSTA1R_CMP3		(1 << 5)
/** HRTIM_TIMA_RSTA1R_CMP2 CMP2 **/
#define HRTIM_TIMA_RSTA1R_CMP2		(1 << 4)
/** HRTIM_TIMA_RSTA1R_CMP1 CMP1 **/
#define HRTIM_TIMA_RSTA1R_CMP1		(1 << 3)
/** HRTIM_TIMA_RSTA1R_PER PER **/
#define HRTIM_TIMA_RSTA1R_PER		(1 << 2)
/** HRTIM_TIMA_RSTA1R_RESYNC RESYNC **/
#define HRTIM_TIMA_RSTA1R_RESYNC		(1 << 1)
/** HRTIM_TIMA_RSTA1R_SRT SRT **/
#define HRTIM_TIMA_RSTA1R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_seta2r SETA2R Timerx Output2 Set Register
@{*/

/** HRTIM_TIMA_SETA2R_UPDATE UPDATE **/
#define HRTIM_TIMA_SETA2R_UPDATE		(1 << 31)
/** HRTIM_TIMA_SETA2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMA_SETA2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMA_SETA2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMA_SETA2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMA_SETA2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMA_SETA2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMA_SETA2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMA_SETA2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMA_SETA2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMA_SETA2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMA_SETA2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMA_SETA2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMA_SETA2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMA_SETA2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMA_SETA2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMA_SETA2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMA_SETA2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMA_SETA2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMA_SETA2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMA_SETA2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMA_SETA2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMA_SETA2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMA_SETA2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMA_SETA2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMA_SETA2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMA_SETA2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMA_SETA2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMA_SETA2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMA_SETA2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMA_SETA2R_MSTPER MSTPER **/
#define HRTIM_TIMA_SETA2R_MSTPER		(1 << 7)
/** HRTIM_TIMA_SETA2R_CMP4 CMP4 **/
#define HRTIM_TIMA_SETA2R_CMP4		(1 << 6)
/** HRTIM_TIMA_SETA2R_CMP3 CMP3 **/
#define HRTIM_TIMA_SETA2R_CMP3		(1 << 5)
/** HRTIM_TIMA_SETA2R_CMP2 CMP2 **/
#define HRTIM_TIMA_SETA2R_CMP2		(1 << 4)
/** HRTIM_TIMA_SETA2R_CMP1 CMP1 **/
#define HRTIM_TIMA_SETA2R_CMP1		(1 << 3)
/** HRTIM_TIMA_SETA2R_PER PER **/
#define HRTIM_TIMA_SETA2R_PER		(1 << 2)
/** HRTIM_TIMA_SETA2R_RESYNC RESYNC **/
#define HRTIM_TIMA_SETA2R_RESYNC		(1 << 1)
/** HRTIM_TIMA_SETA2R_SST SST **/
#define HRTIM_TIMA_SETA2R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_rsta2r RSTA2R Timerx Output2 Reset Register
@{*/

/** HRTIM_TIMA_RSTA2R_UPDATE UPDATE **/
#define HRTIM_TIMA_RSTA2R_UPDATE		(1 << 31)
/** HRTIM_TIMA_RSTA2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMA_RSTA2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMA_RSTA2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMA_RSTA2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMA_RSTA2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMA_RSTA2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMA_RSTA2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMA_RSTA2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMA_RSTA2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMA_RSTA2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMA_RSTA2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMA_RSTA2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMA_RSTA2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMA_RSTA2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMA_RSTA2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMA_RSTA2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMA_RSTA2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMA_RSTA2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMA_RSTA2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMA_RSTA2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMA_RSTA2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMA_RSTA2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMA_RSTA2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMA_RSTA2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMA_RSTA2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMA_RSTA2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMA_RSTA2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMA_RSTA2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMA_RSTA2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMA_RSTA2R_MSTPER MSTPER **/
#define HRTIM_TIMA_RSTA2R_MSTPER		(1 << 7)
/** HRTIM_TIMA_RSTA2R_CMP4 CMP4 **/
#define HRTIM_TIMA_RSTA2R_CMP4		(1 << 6)
/** HRTIM_TIMA_RSTA2R_CMP3 CMP3 **/
#define HRTIM_TIMA_RSTA2R_CMP3		(1 << 5)
/** HRTIM_TIMA_RSTA2R_CMP2 CMP2 **/
#define HRTIM_TIMA_RSTA2R_CMP2		(1 << 4)
/** HRTIM_TIMA_RSTA2R_CMP1 CMP1 **/
#define HRTIM_TIMA_RSTA2R_CMP1		(1 << 3)
/** HRTIM_TIMA_RSTA2R_PER PER **/
#define HRTIM_TIMA_RSTA2R_PER		(1 << 2)
/** HRTIM_TIMA_RSTA2R_RESYNC RESYNC **/
#define HRTIM_TIMA_RSTA2R_RESYNC		(1 << 1)
/** HRTIM_TIMA_RSTA2R_SRT SRT **/
#define HRTIM_TIMA_RSTA2R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_eefar1 EEFAR1 Timerx External Event Filtering Register 1
@{*/


#define HRTIM_TIMA_EEFAR1_EE5FLTR_SHIFT		25
#define HRTIM_TIMA_EEFAR1_EE5FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar1_ee5fltr EE5FLTR External Event 5 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR1_EE5LTCH External Event 5 latch **/
#define HRTIM_TIMA_EEFAR1_EE5LTCH		(1 << 24)

#define HRTIM_TIMA_EEFAR1_EE4FLTR_SHIFT		19
#define HRTIM_TIMA_EEFAR1_EE4FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar1_ee4fltr EE4FLTR External Event 4 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR1_EE4LTCH External Event 4 latch **/
#define HRTIM_TIMA_EEFAR1_EE4LTCH		(1 << 18)

#define HRTIM_TIMA_EEFAR1_EE3FLTR_SHIFT		13
#define HRTIM_TIMA_EEFAR1_EE3FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar1_ee3fltr EE3FLTR External Event 3 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR1_EE3LTCH External Event 3 latch **/
#define HRTIM_TIMA_EEFAR1_EE3LTCH		(1 << 12)

#define HRTIM_TIMA_EEFAR1_EE2FLTR_SHIFT		7
#define HRTIM_TIMA_EEFAR1_EE2FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar1_ee2fltr EE2FLTR External Event 2 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR1_EE2LTCH External Event 2 latch **/
#define HRTIM_TIMA_EEFAR1_EE2LTCH		(1 << 6)

#define HRTIM_TIMA_EEFAR1_EE1FLTR_SHIFT		1
#define HRTIM_TIMA_EEFAR1_EE1FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar1_ee1fltr EE1FLTR External Event 1 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR1_EE1LTCH External Event 1 latch **/
#define HRTIM_TIMA_EEFAR1_EE1LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_eefar2 EEFAR2 Timerx External Event Filtering Register 2
@{*/


#define HRTIM_TIMA_EEFAR2_EE10FLTR_SHIFT		25
#define HRTIM_TIMA_EEFAR2_EE10FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar2_ee10fltr EE10FLTR External Event 10 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR2_EE10LTCH External Event 10 latch **/
#define HRTIM_TIMA_EEFAR2_EE10LTCH		(1 << 24)

#define HRTIM_TIMA_EEFAR2_EE9FLTR_SHIFT		19
#define HRTIM_TIMA_EEFAR2_EE9FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar2_ee9fltr EE9FLTR External Event 9 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR2_EE9LTCH External Event 9 latch **/
#define HRTIM_TIMA_EEFAR2_EE9LTCH		(1 << 18)

#define HRTIM_TIMA_EEFAR2_EE8FLTR_SHIFT		13
#define HRTIM_TIMA_EEFAR2_EE8FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar2_ee8fltr EE8FLTR External Event 8 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR2_EE8LTCH External Event 8 latch **/
#define HRTIM_TIMA_EEFAR2_EE8LTCH		(1 << 12)

#define HRTIM_TIMA_EEFAR2_EE7FLTR_SHIFT		7
#define HRTIM_TIMA_EEFAR2_EE7FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar2_ee7fltr EE7FLTR External Event 7 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR2_EE7LTCH External Event 7 latch **/
#define HRTIM_TIMA_EEFAR2_EE7LTCH		(1 << 6)

#define HRTIM_TIMA_EEFAR2_EE6FLTR_SHIFT		1
#define HRTIM_TIMA_EEFAR2_EE6FLTR_MASK		0x0f
/** @defgroup hrtim_tima_eefar2_ee6fltr EE6FLTR External Event 6 filter
@{*/
/**@}*/

/** HRTIM_TIMA_EEFAR2_EE6LTCH External Event 6 latch **/
#define HRTIM_TIMA_EEFAR2_EE6LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_rstar RSTAR TimerA Reset Register
@{*/

/** HRTIM_TIMA_RSTAR_TIMECMP4 Timer E Compare 4 **/
#define HRTIM_TIMA_RSTAR_TIMECMP4		(1 << 30)
/** HRTIM_TIMA_RSTAR_TIMECMP2 Timer E Compare 2 **/
#define HRTIM_TIMA_RSTAR_TIMECMP2		(1 << 29)
/** HRTIM_TIMA_RSTAR_TIMECMP1 Timer E Compare 1 **/
#define HRTIM_TIMA_RSTAR_TIMECMP1		(1 << 28)
/** HRTIM_TIMA_RSTAR_TIMDCMP4 Timer D Compare 4 **/
#define HRTIM_TIMA_RSTAR_TIMDCMP4		(1 << 27)
/** HRTIM_TIMA_RSTAR_TIMDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMA_RSTAR_TIMDCMP2		(1 << 26)
/** HRTIM_TIMA_RSTAR_TIMDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMA_RSTAR_TIMDCMP1		(1 << 25)
/** HRTIM_TIMA_RSTAR_TIMCCMP4 Timer C Compare 4 **/
#define HRTIM_TIMA_RSTAR_TIMCCMP4		(1 << 24)
/** HRTIM_TIMA_RSTAR_TIMCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMA_RSTAR_TIMCCMP2		(1 << 23)
/** HRTIM_TIMA_RSTAR_TIMCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMA_RSTAR_TIMCCMP1		(1 << 22)
/** HRTIM_TIMA_RSTAR_TIMBCMP4 Timer B Compare 4 **/
#define HRTIM_TIMA_RSTAR_TIMBCMP4		(1 << 21)
/** HRTIM_TIMA_RSTAR_TIMBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMA_RSTAR_TIMBCMP2		(1 << 20)
/** HRTIM_TIMA_RSTAR_TIMBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMA_RSTAR_TIMBCMP1		(1 << 19)
/** HRTIM_TIMA_RSTAR_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT10		(1 << 18)
/** HRTIM_TIMA_RSTAR_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT9		(1 << 17)
/** HRTIM_TIMA_RSTAR_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT8		(1 << 16)
/** HRTIM_TIMA_RSTAR_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT7		(1 << 15)
/** HRTIM_TIMA_RSTAR_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT6		(1 << 14)
/** HRTIM_TIMA_RSTAR_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT5		(1 << 13)
/** HRTIM_TIMA_RSTAR_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT4		(1 << 12)
/** HRTIM_TIMA_RSTAR_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT3		(1 << 11)
/** HRTIM_TIMA_RSTAR_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT2		(1 << 10)
/** HRTIM_TIMA_RSTAR_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMA_RSTAR_EXTEVNT1		(1 << 9)
/** HRTIM_TIMA_RSTAR_MSTCMP4 Master compare 4 **/
#define HRTIM_TIMA_RSTAR_MSTCMP4		(1 << 8)
/** HRTIM_TIMA_RSTAR_MSTCMP3 Master compare 3 **/
#define HRTIM_TIMA_RSTAR_MSTCMP3		(1 << 7)
/** HRTIM_TIMA_RSTAR_MSTCMP2 Master compare 2 **/
#define HRTIM_TIMA_RSTAR_MSTCMP2		(1 << 6)
/** HRTIM_TIMA_RSTAR_MSTCMP1 Master compare 1 **/
#define HRTIM_TIMA_RSTAR_MSTCMP1		(1 << 5)
/** HRTIM_TIMA_RSTAR_MSTPER Master timer Period **/
#define HRTIM_TIMA_RSTAR_MSTPER		(1 << 4)
/** HRTIM_TIMA_RSTAR_CMP4 Timer A compare 4 reset **/
#define HRTIM_TIMA_RSTAR_CMP4		(1 << 3)
/** HRTIM_TIMA_RSTAR_CMP2 Timer A compare 2 reset **/
#define HRTIM_TIMA_RSTAR_CMP2		(1 << 2)
/** HRTIM_TIMA_RSTAR_UPDT Timer A Update reset **/
#define HRTIM_TIMA_RSTAR_UPDT		(1 << 1)

/**@}*/

/** @defgroup hrtim_tima_chpar CHPAR Timerx Chopper Register
@{*/


#define HRTIM_TIMA_CHPAR_STRTPW_SHIFT		7
#define HRTIM_TIMA_CHPAR_STRTPW_MASK		0x0f
/** @defgroup hrtim_tima_chpar_strtpw STRTPW STRTPW
@{*/
/**@}*/


#define HRTIM_TIMA_CHPAR_CHPDTY_SHIFT		4
#define HRTIM_TIMA_CHPAR_CHPDTY_MASK		0x07
/** @defgroup hrtim_tima_chpar_chpdty CHPDTY Timerx chopper duty cycle value
@{*/
/**@}*/


#define HRTIM_TIMA_CHPAR_CHPFRQ_SHIFT		0
#define HRTIM_TIMA_CHPAR_CHPFRQ_MASK		0x0f
/** @defgroup hrtim_tima_chpar_chpfrq CHPFRQ Timerx carrier frequency value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_tima_cpt1acr CPT1ACR Timerx Capture 2 Control Register
@{*/

/** HRTIM_TIMA_CPT1ACR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMA_CPT1ACR_TECMP2		(1 << 31)
/** HRTIM_TIMA_CPT1ACR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMA_CPT1ACR_TECMP1		(1 << 30)
/** HRTIM_TIMA_CPT1ACR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMA_CPT1ACR_TE1RST		(1 << 29)
/** HRTIM_TIMA_CPT1ACR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMA_CPT1ACR_TE1SET		(1 << 28)
/** HRTIM_TIMA_CPT1ACR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMA_CPT1ACR_TDCMP2		(1 << 27)
/** HRTIM_TIMA_CPT1ACR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMA_CPT1ACR_TDCMP1		(1 << 26)
/** HRTIM_TIMA_CPT1ACR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMA_CPT1ACR_TD1RST		(1 << 25)
/** HRTIM_TIMA_CPT1ACR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMA_CPT1ACR_TD1SET		(1 << 24)
/** HRTIM_TIMA_CPT1ACR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMA_CPT1ACR_TCCMP2		(1 << 23)
/** HRTIM_TIMA_CPT1ACR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMA_CPT1ACR_TCCMP1		(1 << 22)
/** HRTIM_TIMA_CPT1ACR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMA_CPT1ACR_TC1RST		(1 << 21)
/** HRTIM_TIMA_CPT1ACR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMA_CPT1ACR_TC1SET		(1 << 20)
/** HRTIM_TIMA_CPT1ACR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMA_CPT1ACR_TBCMP2		(1 << 19)
/** HRTIM_TIMA_CPT1ACR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMA_CPT1ACR_TBCMP1		(1 << 18)
/** HRTIM_TIMA_CPT1ACR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMA_CPT1ACR_TB1RST		(1 << 17)
/** HRTIM_TIMA_CPT1ACR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMA_CPT1ACR_TB1SET		(1 << 16)
/** HRTIM_TIMA_CPT1ACR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMA_CPT1ACR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMA_CPT1ACR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMA_CPT1ACR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMA_CPT1ACR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMA_CPT1ACR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMA_CPT1ACR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMA_CPT1ACR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMA_CPT1ACR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMA_CPT1ACR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMA_CPT1ACR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMA_CPT1ACR_UDPCPT Update Capture **/
#define HRTIM_TIMA_CPT1ACR_UDPCPT		(1 << 1)
/** HRTIM_TIMA_CPT1ACR_SWCPT Software Capture **/
#define HRTIM_TIMA_CPT1ACR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_cpt2acr CPT2ACR CPT2xCR
@{*/

/** HRTIM_TIMA_CPT2ACR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMA_CPT2ACR_TECMP2		(1 << 31)
/** HRTIM_TIMA_CPT2ACR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMA_CPT2ACR_TECMP1		(1 << 30)
/** HRTIM_TIMA_CPT2ACR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMA_CPT2ACR_TE1RST		(1 << 29)
/** HRTIM_TIMA_CPT2ACR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMA_CPT2ACR_TE1SET		(1 << 28)
/** HRTIM_TIMA_CPT2ACR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMA_CPT2ACR_TDCMP2		(1 << 27)
/** HRTIM_TIMA_CPT2ACR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMA_CPT2ACR_TDCMP1		(1 << 26)
/** HRTIM_TIMA_CPT2ACR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMA_CPT2ACR_TD1RST		(1 << 25)
/** HRTIM_TIMA_CPT2ACR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMA_CPT2ACR_TD1SET		(1 << 24)
/** HRTIM_TIMA_CPT2ACR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMA_CPT2ACR_TCCMP2		(1 << 23)
/** HRTIM_TIMA_CPT2ACR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMA_CPT2ACR_TCCMP1		(1 << 22)
/** HRTIM_TIMA_CPT2ACR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMA_CPT2ACR_TC1RST		(1 << 21)
/** HRTIM_TIMA_CPT2ACR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMA_CPT2ACR_TC1SET		(1 << 20)
/** HRTIM_TIMA_CPT2ACR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMA_CPT2ACR_TBCMP2		(1 << 19)
/** HRTIM_TIMA_CPT2ACR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMA_CPT2ACR_TBCMP1		(1 << 18)
/** HRTIM_TIMA_CPT2ACR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMA_CPT2ACR_TB1RST		(1 << 17)
/** HRTIM_TIMA_CPT2ACR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMA_CPT2ACR_TB1SET		(1 << 16)
/** HRTIM_TIMA_CPT2ACR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMA_CPT2ACR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMA_CPT2ACR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMA_CPT2ACR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMA_CPT2ACR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMA_CPT2ACR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMA_CPT2ACR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMA_CPT2ACR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMA_CPT2ACR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMA_CPT2ACR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMA_CPT2ACR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMA_CPT2ACR_UDPCPT Update Capture **/
#define HRTIM_TIMA_CPT2ACR_UDPCPT		(1 << 1)
/** HRTIM_TIMA_CPT2ACR_SWCPT Software Capture **/
#define HRTIM_TIMA_CPT2ACR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_tima_outar OUTAR Timerx Output Register
@{*/

/** HRTIM_TIMA_OUTAR_DIDL2 Output 2 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMA_OUTAR_DIDL2		(1 << 23)
/** HRTIM_TIMA_OUTAR_CHP2 Output 2 Chopper enable **/
#define HRTIM_TIMA_OUTAR_CHP2		(1 << 22)

#define HRTIM_TIMA_OUTAR_FAULT2_SHIFT		20
#define HRTIM_TIMA_OUTAR_FAULT2_MASK		0x03
/** @defgroup hrtim_tima_outar_fault2 FAULT2 Output 2 Fault state
@{*/
/**@}*/

/** HRTIM_TIMA_OUTAR_IDLES2 Output 2 Idle State **/
#define HRTIM_TIMA_OUTAR_IDLES2		(1 << 19)
/** HRTIM_TIMA_OUTAR_IDLEM2 Output 2 Idle mode **/
#define HRTIM_TIMA_OUTAR_IDLEM2		(1 << 18)
/** HRTIM_TIMA_OUTAR_POL2 Output 2 polarity **/
#define HRTIM_TIMA_OUTAR_POL2		(1 << 17)

#define HRTIM_TIMA_OUTAR_DLYPRT_SHIFT		10
#define HRTIM_TIMA_OUTAR_DLYPRT_MASK		0x07
/** @defgroup hrtim_tima_outar_dlyprt DLYPRT Delayed Protection
@{*/
/**@}*/

/** HRTIM_TIMA_OUTAR_DLYPRTEN Delayed Protection Enable **/
#define HRTIM_TIMA_OUTAR_DLYPRTEN		(1 << 9)
/** HRTIM_TIMA_OUTAR_DTEN Deadtime enable **/
#define HRTIM_TIMA_OUTAR_DTEN		(1 << 8)
/** HRTIM_TIMA_OUTAR_DIDL1 Output 1 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMA_OUTAR_DIDL1		(1 << 7)
/** HRTIM_TIMA_OUTAR_CHP1 Output 1 Chopper enable **/
#define HRTIM_TIMA_OUTAR_CHP1		(1 << 6)

#define HRTIM_TIMA_OUTAR_FAULT1_SHIFT		4
#define HRTIM_TIMA_OUTAR_FAULT1_MASK		0x03
/** @defgroup hrtim_tima_outar_fault1 FAULT1 Output 1 Fault state
@{*/
/**@}*/

/** HRTIM_TIMA_OUTAR_IDLES1 Output 1 Idle State **/
#define HRTIM_TIMA_OUTAR_IDLES1		(1 << 3)
/** HRTIM_TIMA_OUTAR_IDLEM1 Output 1 Idle mode **/
#define HRTIM_TIMA_OUTAR_IDLEM1		(1 << 2)
/** HRTIM_TIMA_OUTAR_POL1 Output 1 polarity **/
#define HRTIM_TIMA_OUTAR_POL1		(1 << 1)

/**@}*/

/** @defgroup hrtim_tima_fltar FLTAR Timerx Fault Register
@{*/

/** HRTIM_TIMA_FLTAR_FLTLCK Fault sources Lock **/
#define HRTIM_TIMA_FLTAR_FLTLCK		(1 << 31)
/** HRTIM_TIMA_FLTAR_FLT5EN Fault 5 enable **/
#define HRTIM_TIMA_FLTAR_FLT5EN		(1 << 4)
/** HRTIM_TIMA_FLTAR_FLT4EN Fault 4 enable **/
#define HRTIM_TIMA_FLTAR_FLT4EN		(1 << 3)
/** HRTIM_TIMA_FLTAR_FLT3EN Fault 3 enable **/
#define HRTIM_TIMA_FLTAR_FLT3EN		(1 << 2)
/** HRTIM_TIMA_FLTAR_FLT2EN Fault 2 enable **/
#define HRTIM_TIMA_FLTAR_FLT2EN		(1 << 1)
/** HRTIM_TIMA_FLTAR_FLT1EN Fault 1 enable **/
#define HRTIM_TIMA_FLTAR_FLT1EN		(1 << 0)

/**@}*/

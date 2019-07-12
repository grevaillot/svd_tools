#pragma once 

/* --- HRTIM_TIMF: High Resolution Timer: TIMF ---------------------- */

/** @defgroup hrtim_timf_registers High Resolution Timer: TIMF Register
@{*/

/** HRTIM_TIMF_TIMFCR Timerx Control Register **/
#define HRTIM_TIMF_TIMFCR			MMIO32(HRTIM_TIMF_BASE + 0x00)
/** HRTIM_TIMF_TIMFISR Timerx Interrupt Status Register **/
#define HRTIM_TIMF_TIMFISR			MMIO32(HRTIM_TIMF_BASE + 0x04)
/** HRTIM_TIMF_TIMFICR Timerx Interrupt Clear Register **/
#define HRTIM_TIMF_TIMFICR			MMIO32(HRTIM_TIMF_BASE + 0x08)
/** HRTIM_TIMF_TIMFDIER TIMxDIER **/
#define HRTIM_TIMF_TIMFDIER			MMIO32(HRTIM_TIMF_BASE + 0x0c)
/** HRTIM_TIMF_CNTFR Timerx Counter Register **/
#define HRTIM_TIMF_CNTFR			MMIO32(HRTIM_TIMF_BASE + 0x10)
/** HRTIM_TIMF_PERFR Timerx Period Register **/
#define HRTIM_TIMF_PERFR			MMIO32(HRTIM_TIMF_BASE + 0x14)
/** HRTIM_TIMF_REPFR Timerx Repetition Register **/
#define HRTIM_TIMF_REPFR			MMIO32(HRTIM_TIMF_BASE + 0x18)
/** HRTIM_TIMF_CMP1FR Timerx Compare 1 Register **/
#define HRTIM_TIMF_CMP1FR			MMIO32(HRTIM_TIMF_BASE + 0x1c)
/** HRTIM_TIMF_CMP1CFR Timerx Compare 1 Compound Register **/
#define HRTIM_TIMF_CMP1CFR			MMIO32(HRTIM_TIMF_BASE + 0x20)
/** HRTIM_TIMF_CMP2FR Timerx Compare 2 Register **/
#define HRTIM_TIMF_CMP2FR			MMIO32(HRTIM_TIMF_BASE + 0x24)
/** HRTIM_TIMF_CMP3FR Timerx Compare 3 Register **/
#define HRTIM_TIMF_CMP3FR			MMIO32(HRTIM_TIMF_BASE + 0x28)
/** HRTIM_TIMF_CMP4FR Timerx Compare 4 Register **/
#define HRTIM_TIMF_CMP4FR			MMIO32(HRTIM_TIMF_BASE + 0x2c)
/** HRTIM_TIMF_CPT1FR Timerx Capture 1 Register **/
#define HRTIM_TIMF_CPT1FR			MMIO32(HRTIM_TIMF_BASE + 0x30)
/** HRTIM_TIMF_CPT2FR Timerx Capture 2 Register **/
#define HRTIM_TIMF_CPT2FR			MMIO32(HRTIM_TIMF_BASE + 0x34)
/** HRTIM_TIMF_DTFR Timerx Deadtime Register **/
#define HRTIM_TIMF_DTFR			MMIO32(HRTIM_TIMF_BASE + 0x38)
/** HRTIM_TIMF_SETF1R Timerx Output1 Set Register **/
#define HRTIM_TIMF_SETF1R			MMIO32(HRTIM_TIMF_BASE + 0x3c)
/** HRTIM_TIMF_RSTE1R Timerx Output1 Reset Register **/
#define HRTIM_TIMF_RSTE1R			MMIO32(HRTIM_TIMF_BASE + 0x40)
/** HRTIM_TIMF_SETF2R Timerx Output2 Set Register **/
#define HRTIM_TIMF_SETF2R			MMIO32(HRTIM_TIMF_BASE + 0x44)
/** HRTIM_TIMF_RSTF2R Timerx Output2 Reset Register **/
#define HRTIM_TIMF_RSTF2R			MMIO32(HRTIM_TIMF_BASE + 0x48)
/** HRTIM_TIMF_EEFFR1 Timerx External Event Filtering Register 1 **/
#define HRTIM_TIMF_EEFFR1			MMIO32(HRTIM_TIMF_BASE + 0x4c)
/** HRTIM_TIMF_EEFFR2 Timerx External Event Filtering Register 2 **/
#define HRTIM_TIMF_EEFFR2			MMIO32(HRTIM_TIMF_BASE + 0x50)
/** HRTIM_TIMF_RSTFR TimerA Reset Register **/
#define HRTIM_TIMF_RSTFR			MMIO32(HRTIM_TIMF_BASE + 0x54)
/** HRTIM_TIMF_CHPFR Timerx Chopper Register **/
#define HRTIM_TIMF_CHPFR			MMIO32(HRTIM_TIMF_BASE + 0x58)
/** HRTIM_TIMF_CPT1FCR Timerx Capture 2 Control Register **/
#define HRTIM_TIMF_CPT1FCR			MMIO32(HRTIM_TIMF_BASE + 0x5c)
/** HRTIM_TIMF_CPT2FCR CPT2xCR **/
#define HRTIM_TIMF_CPT2FCR			MMIO32(HRTIM_TIMF_BASE + 0x60)
/** HRTIM_TIMF_OUTFR Timerx Output Register **/
#define HRTIM_TIMF_OUTFR			MMIO32(HRTIM_TIMF_BASE + 0x64)
/** HRTIM_TIMF_FLTFR Timerx Fault Register **/
#define HRTIM_TIMF_FLTFR			MMIO32(HRTIM_TIMF_BASE + 0x68)
/** HRTIM_TIMF_TIMFCR2 HRTIM Timerx Control Register 2 **/
#define HRTIM_TIMF_TIMFCR2			MMIO32(HRTIM_TIMF_BASE + 0x6c)
/** HRTIM_TIMF_FEEFR3 HRTIM Timerx External Event Filtering Register 3 **/
#define HRTIM_TIMF_FEEFR3			MMIO32(HRTIM_TIMF_BASE + 0x70)

/**@}*/


/** @defgroup hrtim_timf_timfcr TIMFCR Timerx Control Register
@{*/


#define HRTIM_TIMF_TIMFCR_UPDGAT_SHIFT		28
#define HRTIM_TIMF_TIMFCR_UPDGAT_MASK		0x0f
/** @defgroup hrtim_timf_timfcr_updgat UPDGAT Update Gating
@{*/
/**@}*/

/** HRTIM_TIMF_TIMFCR_PREEN Preload enable **/
#define HRTIM_TIMF_TIMFCR_PREEN		(1 << 27)

#define HRTIM_TIMF_TIMFCR_DACSYNC_SHIFT		25
#define HRTIM_TIMF_TIMFCR_DACSYNC_MASK		0x03
/** @defgroup hrtim_timf_timfcr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_TIMF_TIMFCR_MSTU Master Timer update **/
#define HRTIM_TIMF_TIMFCR_MSTU		(1 << 24)
/** HRTIM_TIMF_TIMFCR_TDU TDU **/
#define HRTIM_TIMF_TIMFCR_TDU		(1 << 22)
/** HRTIM_TIMF_TIMFCR_TCU TCU **/
#define HRTIM_TIMF_TIMFCR_TCU		(1 << 21)
/** HRTIM_TIMF_TIMFCR_TBU TBU **/
#define HRTIM_TIMF_TIMFCR_TBU		(1 << 20)
/** HRTIM_TIMF_TIMFCR_TAU TAU **/
#define HRTIM_TIMF_TIMFCR_TAU		(1 << 19)
/** HRTIM_TIMF_TIMFCR_TxRSTU Timerx reset update **/
#define HRTIM_TIMF_TIMFCR_TxRSTU		(1 << 18)
/** HRTIM_TIMF_TIMFCR_TxREPU Timer x Repetition update **/
#define HRTIM_TIMF_TIMFCR_TxREPU		(1 << 17)

#define HRTIM_TIMF_TIMFCR_DELCMP4_SHIFT		14
#define HRTIM_TIMF_TIMFCR_DELCMP4_MASK		0x03
/** @defgroup hrtim_timf_timfcr_delcmp4 DELCMP4 Delayed CMP4 mode
@{*/
/**@}*/


#define HRTIM_TIMF_TIMFCR_DELCMP2_SHIFT		12
#define HRTIM_TIMF_TIMFCR_DELCMP2_MASK		0x03
/** @defgroup hrtim_timf_timfcr_delcmp2 DELCMP2 Delayed CMP2 mode
@{*/
/**@}*/

/** HRTIM_TIMF_TIMFCR_SYNCSTRTx Synchronization Starts Timer x **/
#define HRTIM_TIMF_TIMFCR_SYNCSTRTx		(1 << 11)
/** HRTIM_TIMF_TIMFCR_SYNCRSTx Synchronization Resets Timer x **/
#define HRTIM_TIMF_TIMFCR_SYNCRSTx		(1 << 10)
/** HRTIM_TIMF_TIMFCR_RSYNCU Re-Synchronized Update **/
#define HRTIM_TIMF_TIMFCR_RSYNCU		(1 << 9)

#define HRTIM_TIMF_TIMFCR_INTLVD_SHIFT		7
#define HRTIM_TIMF_TIMFCR_INTLVD_MASK		0x03
/** @defgroup hrtim_timf_timfcr_intlvd INTLVD Interleaved mode
@{*/
/**@}*/

/** HRTIM_TIMF_TIMFCR_PSHPLL Push-Pull mode enable **/
#define HRTIM_TIMF_TIMFCR_PSHPLL		(1 << 6)
/** HRTIM_TIMF_TIMFCR_HALF Half mode enable **/
#define HRTIM_TIMF_TIMFCR_HALF		(1 << 5)
/** HRTIM_TIMF_TIMFCR_RETRIG Re-triggerable mode **/
#define HRTIM_TIMF_TIMFCR_RETRIG		(1 << 4)
/** HRTIM_TIMF_TIMFCR_CONT Continuous mode **/
#define HRTIM_TIMF_TIMFCR_CONT		(1 << 3)

#define HRTIM_TIMF_TIMFCR_CK_PSCx_SHIFT		0
#define HRTIM_TIMF_TIMFCR_CK_PSCx_MASK		0x07
/** @defgroup hrtim_timf_timfcr_ck_pscx CKPSCx HRTIM Timer x Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_timfisr TIMFISR Timerx Interrupt Status Register
@{*/

/** HRTIM_TIMF_TIMFISR_O2CPY Output 2 Copy **/
#define HRTIM_TIMF_TIMFISR_O2CPY		(1 << 21)
/** HRTIM_TIMF_TIMFISR_O1CPY Output 1 Copy **/
#define HRTIM_TIMF_TIMFISR_O1CPY		(1 << 20)
/** HRTIM_TIMF_TIMFISR_O2STAT Output 2 State **/
#define HRTIM_TIMF_TIMFISR_O2STAT		(1 << 19)
/** HRTIM_TIMF_TIMFISR_O1STAT Output 1 State **/
#define HRTIM_TIMF_TIMFISR_O1STAT		(1 << 18)
/** HRTIM_TIMF_TIMFISR_IPPSTAT Idle Push Pull Status **/
#define HRTIM_TIMF_TIMFISR_IPPSTAT		(1 << 17)
/** HRTIM_TIMF_TIMFISR_CPPSTAT Current Push Pull Status **/
#define HRTIM_TIMF_TIMFISR_CPPSTAT		(1 << 16)
/** HRTIM_TIMF_TIMFISR_DLYPRT Delayed Protection Flag **/
#define HRTIM_TIMF_TIMFISR_DLYPRT		(1 << 14)
/** HRTIM_TIMF_TIMFISR_RST Reset Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_RST		(1 << 13)
/** HRTIM_TIMF_TIMFISR_RSTx2 Output 2 Reset Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_RSTx2		(1 << 12)
/** HRTIM_TIMF_TIMFISR_SETx2 Output 2 Set Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_SETx2		(1 << 11)
/** HRTIM_TIMF_TIMFISR_RSTx1 Output 1 Reset Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_RSTx1		(1 << 10)
/** HRTIM_TIMF_TIMFISR_SETx1 Output 1 Set Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_SETx1		(1 << 9)
/** HRTIM_TIMF_TIMFISR_CPT2 Capture2 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CPT2		(1 << 8)
/** HRTIM_TIMF_TIMFISR_CPT1 Capture1 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CPT1		(1 << 7)
/** HRTIM_TIMF_TIMFISR_UPD Update Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_UPD		(1 << 6)
/** HRTIM_TIMF_TIMFISR_REP Repetition Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_REP		(1 << 4)
/** HRTIM_TIMF_TIMFISR_CMP4 Compare 4 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CMP4		(1 << 3)
/** HRTIM_TIMF_TIMFISR_CMP3 Compare 3 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CMP3		(1 << 2)
/** HRTIM_TIMF_TIMFISR_CMP2 Compare 2 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CMP2		(1 << 1)
/** HRTIM_TIMF_TIMFISR_CMP1 Compare 1 Interrupt Flag **/
#define HRTIM_TIMF_TIMFISR_CMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_timficr TIMFICR Timerx Interrupt Clear Register
@{*/

/** HRTIM_TIMF_TIMFICR_DLYPRTC Delayed Protection Flag Clear **/
#define HRTIM_TIMF_TIMFICR_DLYPRTC		(1 << 14)
/** HRTIM_TIMF_TIMFICR_RSTC Reset Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_RSTC		(1 << 13)
/** HRTIM_TIMF_TIMFICR_RSTx2C Output 2 Reset flag Clear **/
#define HRTIM_TIMF_TIMFICR_RSTx2C		(1 << 12)
/** HRTIM_TIMF_TIMFICR_SET2xC Output 2 Set flag Clear **/
#define HRTIM_TIMF_TIMFICR_SET2xC		(1 << 11)
/** HRTIM_TIMF_TIMFICR_RSTx1C Output 1 Reset flag Clear **/
#define HRTIM_TIMF_TIMFICR_RSTx1C		(1 << 10)
/** HRTIM_TIMF_TIMFICR_SET1xC Output 1 Set flag Clear **/
#define HRTIM_TIMF_TIMFICR_SET1xC		(1 << 9)
/** HRTIM_TIMF_TIMFICR_CPT2C Capture2 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CPT2C		(1 << 8)
/** HRTIM_TIMF_TIMFICR_CPT1C Capture1 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CPT1C		(1 << 7)
/** HRTIM_TIMF_TIMFICR_UPDC Update Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_UPDC		(1 << 6)
/** HRTIM_TIMF_TIMFICR_REPC Repetition Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_REPC		(1 << 4)
/** HRTIM_TIMF_TIMFICR_CMP4C Compare 4 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CMP4C		(1 << 3)
/** HRTIM_TIMF_TIMFICR_CMP3C Compare 3 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CMP3C		(1 << 2)
/** HRTIM_TIMF_TIMFICR_CMP2C Compare 2 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CMP2C		(1 << 1)
/** HRTIM_TIMF_TIMFICR_CMP1C Compare 1 Interrupt flag Clear **/
#define HRTIM_TIMF_TIMFICR_CMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_timfdier TIMFDIER TIMxDIER
@{*/

/** HRTIM_TIMF_TIMFDIER_DLYPRTDE DLYPRTDE **/
#define HRTIM_TIMF_TIMFDIER_DLYPRTDE		(1 << 30)
/** HRTIM_TIMF_TIMFDIER_RSTDE RSTDE **/
#define HRTIM_TIMF_TIMFDIER_RSTDE		(1 << 29)
/** HRTIM_TIMF_TIMFDIER_RSTx2DE RSTx2DE **/
#define HRTIM_TIMF_TIMFDIER_RSTx2DE		(1 << 28)
/** HRTIM_TIMF_TIMFDIER_SETx2DE SETx2DE **/
#define HRTIM_TIMF_TIMFDIER_SETx2DE		(1 << 27)
/** HRTIM_TIMF_TIMFDIER_RSTx1DE RSTx1DE **/
#define HRTIM_TIMF_TIMFDIER_RSTx1DE		(1 << 26)
/** HRTIM_TIMF_TIMFDIER_SET1xDE SET1xDE **/
#define HRTIM_TIMF_TIMFDIER_SET1xDE		(1 << 25)
/** HRTIM_TIMF_TIMFDIER_CPT2DE CPT2DE **/
#define HRTIM_TIMF_TIMFDIER_CPT2DE		(1 << 24)
/** HRTIM_TIMF_TIMFDIER_CPT1DE CPT1DE **/
#define HRTIM_TIMF_TIMFDIER_CPT1DE		(1 << 23)
/** HRTIM_TIMF_TIMFDIER_UPDDE UPDDE **/
#define HRTIM_TIMF_TIMFDIER_UPDDE		(1 << 22)
/** HRTIM_TIMF_TIMFDIER_REPDE REPDE **/
#define HRTIM_TIMF_TIMFDIER_REPDE		(1 << 20)
/** HRTIM_TIMF_TIMFDIER_CMP4DE CMP4DE **/
#define HRTIM_TIMF_TIMFDIER_CMP4DE		(1 << 19)
/** HRTIM_TIMF_TIMFDIER_CMP3DE CMP3DE **/
#define HRTIM_TIMF_TIMFDIER_CMP3DE		(1 << 18)
/** HRTIM_TIMF_TIMFDIER_CMP2DE CMP2DE **/
#define HRTIM_TIMF_TIMFDIER_CMP2DE		(1 << 17)
/** HRTIM_TIMF_TIMFDIER_CMP1DE CMP1DE **/
#define HRTIM_TIMF_TIMFDIER_CMP1DE		(1 << 16)
/** HRTIM_TIMF_TIMFDIER_DLYPRTIE DLYPRTIE **/
#define HRTIM_TIMF_TIMFDIER_DLYPRTIE		(1 << 14)
/** HRTIM_TIMF_TIMFDIER_RSTIE RSTIE **/
#define HRTIM_TIMF_TIMFDIER_RSTIE		(1 << 13)
/** HRTIM_TIMF_TIMFDIER_RSTx2IE RSTx2IE **/
#define HRTIM_TIMF_TIMFDIER_RSTx2IE		(1 << 12)
/** HRTIM_TIMF_TIMFDIER_SETx2IE SETx2IE **/
#define HRTIM_TIMF_TIMFDIER_SETx2IE		(1 << 11)
/** HRTIM_TIMF_TIMFDIER_RSTx1IE RSTx1IE **/
#define HRTIM_TIMF_TIMFDIER_RSTx1IE		(1 << 10)
/** HRTIM_TIMF_TIMFDIER_SET1xIE SET1xIE **/
#define HRTIM_TIMF_TIMFDIER_SET1xIE		(1 << 9)
/** HRTIM_TIMF_TIMFDIER_CPT2IE CPT2IE **/
#define HRTIM_TIMF_TIMFDIER_CPT2IE		(1 << 8)
/** HRTIM_TIMF_TIMFDIER_CPT1IE CPT1IE **/
#define HRTIM_TIMF_TIMFDIER_CPT1IE		(1 << 7)
/** HRTIM_TIMF_TIMFDIER_UPDIE UPDIE **/
#define HRTIM_TIMF_TIMFDIER_UPDIE		(1 << 6)
/** HRTIM_TIMF_TIMFDIER_REPIE REPIE **/
#define HRTIM_TIMF_TIMFDIER_REPIE		(1 << 4)
/** HRTIM_TIMF_TIMFDIER_CMP4IE CMP4IE **/
#define HRTIM_TIMF_TIMFDIER_CMP4IE		(1 << 3)
/** HRTIM_TIMF_TIMFDIER_CMP3IE CMP3IE **/
#define HRTIM_TIMF_TIMFDIER_CMP3IE		(1 << 2)
/** HRTIM_TIMF_TIMFDIER_CMP2IE CMP2IE **/
#define HRTIM_TIMF_TIMFDIER_CMP2IE		(1 << 1)
/** HRTIM_TIMF_TIMFDIER_CMP1IE CMP1IE **/
#define HRTIM_TIMF_TIMFDIER_CMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_cntfr CNTFR Timerx Counter Register
@{*/


#define HRTIM_TIMF_CNTFR_CNTx_SHIFT		0
#define HRTIM_TIMF_CNTFR_CNTx_MASK		0xffff
/** @defgroup hrtim_timf_cntfr_cntx CNTx Timerx Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_perfr PERFR Timerx Period Register
@{*/


#define HRTIM_TIMF_PERFR_PERx_SHIFT		0
#define HRTIM_TIMF_PERFR_PERx_MASK		0xffff
/** @defgroup hrtim_timf_perfr_perx PERx Timerx Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_repfr REPFR Timerx Repetition Register
@{*/


#define HRTIM_TIMF_REPFR_REPx_SHIFT		0
#define HRTIM_TIMF_REPFR_REPx_MASK		0xff
/** @defgroup hrtim_timf_repfr_repx REPx Timerx Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cmp1fr CMP1FR Timerx Compare 1 Register
@{*/


#define HRTIM_TIMF_CMP1FR_CMP1x_SHIFT		0
#define HRTIM_TIMF_CMP1FR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timf_cmp1fr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cmp1cfr CMP1CFR Timerx Compare 1 Compound Register
@{*/


#define HRTIM_TIMF_CMP1CFR_REPx_SHIFT		16
#define HRTIM_TIMF_CMP1CFR_REPx_MASK		0xff
/** @defgroup hrtim_timf_cmp1cfr_repx REPx Timerx Repetition value (aliased from HRTIM_REPx register)
@{*/
/**@}*/


#define HRTIM_TIMF_CMP1CFR_CMP1x_SHIFT		0
#define HRTIM_TIMF_CMP1CFR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timf_cmp1cfr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cmp2fr CMP2FR Timerx Compare 2 Register
@{*/


#define HRTIM_TIMF_CMP2FR_CMP2x_SHIFT		0
#define HRTIM_TIMF_CMP2FR_CMP2x_MASK		0xffff
/** @defgroup hrtim_timf_cmp2fr_cmp2x CMP2x Timerx Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cmp3fr CMP3FR Timerx Compare 3 Register
@{*/


#define HRTIM_TIMF_CMP3FR_CMP3x_SHIFT		0
#define HRTIM_TIMF_CMP3FR_CMP3x_MASK		0xffff
/** @defgroup hrtim_timf_cmp3fr_cmp3x CMP3x Timerx Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cmp4fr CMP4FR Timerx Compare 4 Register
@{*/


#define HRTIM_TIMF_CMP4FR_CMP4x_SHIFT		0
#define HRTIM_TIMF_CMP4FR_CMP4x_MASK		0xffff
/** @defgroup hrtim_timf_cmp4fr_cmp4x CMP4x Timerx Compare 4 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cpt1fr CPT1FR Timerx Capture 1 Register
@{*/

/** HRTIM_TIMF_CPT1FR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMF_CPT1FR_DIR		(1 << 16)

#define HRTIM_TIMF_CPT1FR_CPT1x_SHIFT		0
#define HRTIM_TIMF_CPT1FR_CPT1x_MASK		0xffff
/** @defgroup hrtim_timf_cpt1fr_cpt1x CPT1x Timerx Capture 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cpt2fr CPT2FR Timerx Capture 2 Register
@{*/

/** HRTIM_TIMF_CPT2FR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMF_CPT2FR_DIR		(1 << 16)

#define HRTIM_TIMF_CPT2FR_CPT2x_SHIFT		0
#define HRTIM_TIMF_CPT2FR_CPT2x_MASK		0xffff
/** @defgroup hrtim_timf_cpt2fr_cpt2x CPT2x Timerx Capture 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_dtfr DTFR Timerx Deadtime Register
@{*/

/** HRTIM_TIMF_DTFR_DTFLKx Deadtime Falling Lock **/
#define HRTIM_TIMF_DTFR_DTFLKx		(1 << 31)
/** HRTIM_TIMF_DTFR_DTFSLKx Deadtime Falling Sign Lock **/
#define HRTIM_TIMF_DTFR_DTFSLKx		(1 << 30)
/** HRTIM_TIMF_DTFR_SDTFx Sign Deadtime Falling value **/
#define HRTIM_TIMF_DTFR_SDTFx		(1 << 25)

#define HRTIM_TIMF_DTFR_DTFx_SHIFT		16
#define HRTIM_TIMF_DTFR_DTFx_MASK		0x1ff
/** @defgroup hrtim_timf_dtfr_dtfx DTFx Deadtime Falling value
@{*/
/**@}*/

/** HRTIM_TIMF_DTFR_DTRLKx Deadtime Rising Lock **/
#define HRTIM_TIMF_DTFR_DTRLKx		(1 << 15)
/** HRTIM_TIMF_DTFR_DTRSLKx Deadtime Rising Sign Lock **/
#define HRTIM_TIMF_DTFR_DTRSLKx		(1 << 14)

#define HRTIM_TIMF_DTFR_DTPRSC_SHIFT		10
#define HRTIM_TIMF_DTFR_DTPRSC_MASK		0x07
/** @defgroup hrtim_timf_dtfr_dtprsc DTPRSC Deadtime Prescaler
@{*/
/**@}*/

/** HRTIM_TIMF_DTFR_SDTRx Sign Deadtime Rising value **/
#define HRTIM_TIMF_DTFR_SDTRx		(1 << 9)

#define HRTIM_TIMF_DTFR_DTRx_SHIFT		0
#define HRTIM_TIMF_DTFR_DTRx_MASK		0x1ff
/** @defgroup hrtim_timf_dtfr_dtrx DTRx Deadtime Rising value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_setf1r SETF1R Timerx Output1 Set Register
@{*/

/** HRTIM_TIMF_SETF1R_UPDATE Registers update (transfer preload to active) **/
#define HRTIM_TIMF_SETF1R_UPDATE		(1 << 31)
/** HRTIM_TIMF_SETF1R_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMF_SETF1R_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMF_SETF1R_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMF_SETF1R_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMF_SETF1R_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMF_SETF1R_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMF_SETF1R_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMF_SETF1R_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMF_SETF1R_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMF_SETF1R_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMF_SETF1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMF_SETF1R_TIMEVNT9 Timer Event 9 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMF_SETF1R_TIMEVNT8 Timer Event 8 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMF_SETF1R_TIMEVNT7 Timer Event 7 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMF_SETF1R_TIMEVNT6 Timer Event 6 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMF_SETF1R_TIMEVNT5 Timer Event 5 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMF_SETF1R_TIMEVNT4 Timer Event 4 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMF_SETF1R_TIMEVNT3 Timer Event 3 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMF_SETF1R_TIMEVNT2 Timer Event 2 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMF_SETF1R_TIMEVNT1 Timer Event 1 **/
#define HRTIM_TIMF_SETF1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMF_SETF1R_MSTCMP4 Master Compare 4 **/
#define HRTIM_TIMF_SETF1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMF_SETF1R_MSTCMP3 Master Compare 3 **/
#define HRTIM_TIMF_SETF1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMF_SETF1R_MSTCMP2 Master Compare 2 **/
#define HRTIM_TIMF_SETF1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMF_SETF1R_MSTCMP1 Master Compare 1 **/
#define HRTIM_TIMF_SETF1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMF_SETF1R_MSTPER Master Period **/
#define HRTIM_TIMF_SETF1R_MSTPER		(1 << 7)
/** HRTIM_TIMF_SETF1R_CMP4 Timer A compare 4 **/
#define HRTIM_TIMF_SETF1R_CMP4		(1 << 6)
/** HRTIM_TIMF_SETF1R_CMP3 Timer A compare 3 **/
#define HRTIM_TIMF_SETF1R_CMP3		(1 << 5)
/** HRTIM_TIMF_SETF1R_CMP2 Timer A compare 2 **/
#define HRTIM_TIMF_SETF1R_CMP2		(1 << 4)
/** HRTIM_TIMF_SETF1R_CMP1 Timer A compare 1 **/
#define HRTIM_TIMF_SETF1R_CMP1		(1 << 3)
/** HRTIM_TIMF_SETF1R_PER Timer A Period **/
#define HRTIM_TIMF_SETF1R_PER		(1 << 2)
/** HRTIM_TIMF_SETF1R_RESYNC Timer A resynchronizaton **/
#define HRTIM_TIMF_SETF1R_RESYNC		(1 << 1)
/** HRTIM_TIMF_SETF1R_SST Software Set trigger **/
#define HRTIM_TIMF_SETF1R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_rste1r RSTE1R Timerx Output1 Reset Register
@{*/

/** HRTIM_TIMF_RSTE1R_UPDATE UPDATE **/
#define HRTIM_TIMF_RSTE1R_UPDATE		(1 << 31)
/** HRTIM_TIMF_RSTE1R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMF_RSTE1R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMF_RSTE1R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMF_RSTE1R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMF_RSTE1R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMF_RSTE1R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMF_RSTE1R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMF_RSTE1R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMF_RSTE1R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMF_RSTE1R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMF_RSTE1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMF_RSTE1R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMF_RSTE1R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMF_RSTE1R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMF_RSTE1R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMF_RSTE1R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMF_RSTE1R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMF_RSTE1R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMF_RSTE1R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMF_RSTE1R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMF_RSTE1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMF_RSTE1R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMF_RSTE1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMF_RSTE1R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMF_RSTE1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMF_RSTE1R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMF_RSTE1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMF_RSTE1R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMF_RSTE1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMF_RSTE1R_MSTPER MSTPER **/
#define HRTIM_TIMF_RSTE1R_MSTPER		(1 << 7)
/** HRTIM_TIMF_RSTE1R_CMP4 CMP4 **/
#define HRTIM_TIMF_RSTE1R_CMP4		(1 << 6)
/** HRTIM_TIMF_RSTE1R_CMP3 CMP3 **/
#define HRTIM_TIMF_RSTE1R_CMP3		(1 << 5)
/** HRTIM_TIMF_RSTE1R_CMP2 CMP2 **/
#define HRTIM_TIMF_RSTE1R_CMP2		(1 << 4)
/** HRTIM_TIMF_RSTE1R_CMP1 CMP1 **/
#define HRTIM_TIMF_RSTE1R_CMP1		(1 << 3)
/** HRTIM_TIMF_RSTE1R_PER PER **/
#define HRTIM_TIMF_RSTE1R_PER		(1 << 2)
/** HRTIM_TIMF_RSTE1R_RESYNC RESYNC **/
#define HRTIM_TIMF_RSTE1R_RESYNC		(1 << 1)
/** HRTIM_TIMF_RSTE1R_SRT SRT **/
#define HRTIM_TIMF_RSTE1R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_setf2r SETF2R Timerx Output2 Set Register
@{*/

/** HRTIM_TIMF_SETF2R_UPDATE UPDATE **/
#define HRTIM_TIMF_SETF2R_UPDATE		(1 << 31)
/** HRTIM_TIMF_SETF2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMF_SETF2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMF_SETF2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMF_SETF2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMF_SETF2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMF_SETF2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMF_SETF2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMF_SETF2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMF_SETF2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMF_SETF2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMF_SETF2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMF_SETF2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMF_SETF2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMF_SETF2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMF_SETF2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMF_SETF2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMF_SETF2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMF_SETF2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMF_SETF2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMF_SETF2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMF_SETF2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMF_SETF2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMF_SETF2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMF_SETF2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMF_SETF2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMF_SETF2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMF_SETF2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMF_SETF2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMF_SETF2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMF_SETF2R_MSTPER MSTPER **/
#define HRTIM_TIMF_SETF2R_MSTPER		(1 << 7)
/** HRTIM_TIMF_SETF2R_CMP4 CMP4 **/
#define HRTIM_TIMF_SETF2R_CMP4		(1 << 6)
/** HRTIM_TIMF_SETF2R_CMP3 CMP3 **/
#define HRTIM_TIMF_SETF2R_CMP3		(1 << 5)
/** HRTIM_TIMF_SETF2R_CMP2 CMP2 **/
#define HRTIM_TIMF_SETF2R_CMP2		(1 << 4)
/** HRTIM_TIMF_SETF2R_CMP1 CMP1 **/
#define HRTIM_TIMF_SETF2R_CMP1		(1 << 3)
/** HRTIM_TIMF_SETF2R_PER PER **/
#define HRTIM_TIMF_SETF2R_PER		(1 << 2)
/** HRTIM_TIMF_SETF2R_RESYNC RESYNC **/
#define HRTIM_TIMF_SETF2R_RESYNC		(1 << 1)
/** HRTIM_TIMF_SETF2R_SST SST **/
#define HRTIM_TIMF_SETF2R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_rstf2r RSTF2R Timerx Output2 Reset Register
@{*/

/** HRTIM_TIMF_RSTF2R_UPDATE UPDATE **/
#define HRTIM_TIMF_RSTF2R_UPDATE		(1 << 31)
/** HRTIM_TIMF_RSTF2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMF_RSTF2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMF_RSTF2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMF_RSTF2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMF_RSTF2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMF_RSTF2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMF_RSTF2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMF_RSTF2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMF_RSTF2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMF_RSTF2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMF_RSTF2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMF_RSTF2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMF_RSTF2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMF_RSTF2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMF_RSTF2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMF_RSTF2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMF_RSTF2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMF_RSTF2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMF_RSTF2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMF_RSTF2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMF_RSTF2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMF_RSTF2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMF_RSTF2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMF_RSTF2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMF_RSTF2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMF_RSTF2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMF_RSTF2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMF_RSTF2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMF_RSTF2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMF_RSTF2R_MSTPER MSTPER **/
#define HRTIM_TIMF_RSTF2R_MSTPER		(1 << 7)
/** HRTIM_TIMF_RSTF2R_CMP4 CMP4 **/
#define HRTIM_TIMF_RSTF2R_CMP4		(1 << 6)
/** HRTIM_TIMF_RSTF2R_CMP3 CMP3 **/
#define HRTIM_TIMF_RSTF2R_CMP3		(1 << 5)
/** HRTIM_TIMF_RSTF2R_CMP2 CMP2 **/
#define HRTIM_TIMF_RSTF2R_CMP2		(1 << 4)
/** HRTIM_TIMF_RSTF2R_CMP1 CMP1 **/
#define HRTIM_TIMF_RSTF2R_CMP1		(1 << 3)
/** HRTIM_TIMF_RSTF2R_PER PER **/
#define HRTIM_TIMF_RSTF2R_PER		(1 << 2)
/** HRTIM_TIMF_RSTF2R_RESYNC RESYNC **/
#define HRTIM_TIMF_RSTF2R_RESYNC		(1 << 1)
/** HRTIM_TIMF_RSTF2R_SRT SRT **/
#define HRTIM_TIMF_RSTF2R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_eeffr1 EEFFR1 Timerx External Event Filtering Register 1
@{*/


#define HRTIM_TIMF_EEFFR1_EE5FLTR_SHIFT		25
#define HRTIM_TIMF_EEFFR1_EE5FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr1_ee5fltr EE5FLTR External Event 5 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR1_EE5LTCH External Event 5 latch **/
#define HRTIM_TIMF_EEFFR1_EE5LTCH		(1 << 24)

#define HRTIM_TIMF_EEFFR1_EE4FLTR_SHIFT		19
#define HRTIM_TIMF_EEFFR1_EE4FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr1_ee4fltr EE4FLTR External Event 4 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR1_EE4LTCH External Event 4 latch **/
#define HRTIM_TIMF_EEFFR1_EE4LTCH		(1 << 18)

#define HRTIM_TIMF_EEFFR1_EE3FLTR_SHIFT		13
#define HRTIM_TIMF_EEFFR1_EE3FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr1_ee3fltr EE3FLTR External Event 3 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR1_EE3LTCH External Event 3 latch **/
#define HRTIM_TIMF_EEFFR1_EE3LTCH		(1 << 12)

#define HRTIM_TIMF_EEFFR1_EE2FLTR_SHIFT		7
#define HRTIM_TIMF_EEFFR1_EE2FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr1_ee2fltr EE2FLTR External Event 2 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR1_EE2LTCH External Event 2 latch **/
#define HRTIM_TIMF_EEFFR1_EE2LTCH		(1 << 6)

#define HRTIM_TIMF_EEFFR1_EE1FLTR_SHIFT		1
#define HRTIM_TIMF_EEFFR1_EE1FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr1_ee1fltr EE1FLTR External Event 1 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR1_EE1LTCH External Event 1 latch **/
#define HRTIM_TIMF_EEFFR1_EE1LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_eeffr2 EEFFR2 Timerx External Event Filtering Register 2
@{*/


#define HRTIM_TIMF_EEFFR2_EE10FLTR_SHIFT		25
#define HRTIM_TIMF_EEFFR2_EE10FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr2_ee10fltr EE10FLTR External Event 10 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR2_EE10LTCH External Event 10 latch **/
#define HRTIM_TIMF_EEFFR2_EE10LTCH		(1 << 24)

#define HRTIM_TIMF_EEFFR2_EE9FLTR_SHIFT		19
#define HRTIM_TIMF_EEFFR2_EE9FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr2_ee9fltr EE9FLTR External Event 9 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR2_EE9LTCH External Event 9 latch **/
#define HRTIM_TIMF_EEFFR2_EE9LTCH		(1 << 18)

#define HRTIM_TIMF_EEFFR2_EE8FLTR_SHIFT		13
#define HRTIM_TIMF_EEFFR2_EE8FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr2_ee8fltr EE8FLTR External Event 8 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR2_EE8LTCH External Event 8 latch **/
#define HRTIM_TIMF_EEFFR2_EE8LTCH		(1 << 12)

#define HRTIM_TIMF_EEFFR2_EE7FLTR_SHIFT		7
#define HRTIM_TIMF_EEFFR2_EE7FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr2_ee7fltr EE7FLTR External Event 7 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR2_EE7LTCH External Event 7 latch **/
#define HRTIM_TIMF_EEFFR2_EE7LTCH		(1 << 6)

#define HRTIM_TIMF_EEFFR2_EE6FLTR_SHIFT		1
#define HRTIM_TIMF_EEFFR2_EE6FLTR_MASK		0x0f
/** @defgroup hrtim_timf_eeffr2_ee6fltr EE6FLTR External Event 6 filter
@{*/
/**@}*/

/** HRTIM_TIMF_EEFFR2_EE6LTCH External Event 6 latch **/
#define HRTIM_TIMF_EEFFR2_EE6LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_rstfr RSTFR TimerA Reset Register
@{*/

/** HRTIM_TIMF_RSTFR_TIMFCPM2 Timer F Compare 2 **/
#define HRTIM_TIMF_RSTFR_TIMFCPM2		(1 << 31)
/** HRTIM_TIMF_RSTFR_TIMDCMP4 Timer D Compare 4 **/
#define HRTIM_TIMF_RSTFR_TIMDCMP4		(1 << 30)
/** HRTIM_TIMF_RSTFR_TIMDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMF_RSTFR_TIMDCMP2		(1 << 29)
/** HRTIM_TIMF_RSTFR_TIMDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMF_RSTFR_TIMDCMP1		(1 << 28)
/** HRTIM_TIMF_RSTFR_TIMCCMP4 Timer C Compare 4 **/
#define HRTIM_TIMF_RSTFR_TIMCCMP4		(1 << 27)
/** HRTIM_TIMF_RSTFR_TIMCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMF_RSTFR_TIMCCMP2		(1 << 26)
/** HRTIM_TIMF_RSTFR_TIMCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMF_RSTFR_TIMCCMP1		(1 << 25)
/** HRTIM_TIMF_RSTFR_TIMBCMP4 Timer B Compare 4 **/
#define HRTIM_TIMF_RSTFR_TIMBCMP4		(1 << 24)
/** HRTIM_TIMF_RSTFR_TIMBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMF_RSTFR_TIMBCMP2		(1 << 23)
/** HRTIM_TIMF_RSTFR_TIMBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMF_RSTFR_TIMBCMP1		(1 << 22)
/** HRTIM_TIMF_RSTFR_TIMACMP4 Timer A Compare 4 **/
#define HRTIM_TIMF_RSTFR_TIMACMP4		(1 << 21)
/** HRTIM_TIMF_RSTFR_TIMACMP2 Timer A Compare 2 **/
#define HRTIM_TIMF_RSTFR_TIMACMP2		(1 << 20)
/** HRTIM_TIMF_RSTFR_TIMACMP1 Timer A Compare 1 **/
#define HRTIM_TIMF_RSTFR_TIMACMP1		(1 << 19)
/** HRTIM_TIMF_RSTFR_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT10		(1 << 18)
/** HRTIM_TIMF_RSTFR_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT9		(1 << 17)
/** HRTIM_TIMF_RSTFR_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT8		(1 << 16)
/** HRTIM_TIMF_RSTFR_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT7		(1 << 15)
/** HRTIM_TIMF_RSTFR_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT6		(1 << 14)
/** HRTIM_TIMF_RSTFR_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT5		(1 << 13)
/** HRTIM_TIMF_RSTFR_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT4		(1 << 12)
/** HRTIM_TIMF_RSTFR_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT3		(1 << 11)
/** HRTIM_TIMF_RSTFR_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT2		(1 << 10)
/** HRTIM_TIMF_RSTFR_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMF_RSTFR_EXTEVNT1		(1 << 9)
/** HRTIM_TIMF_RSTFR_MSTCMP4 Master compare 4 **/
#define HRTIM_TIMF_RSTFR_MSTCMP4		(1 << 8)
/** HRTIM_TIMF_RSTFR_MSTCMP3 Master compare 3 **/
#define HRTIM_TIMF_RSTFR_MSTCMP3		(1 << 7)
/** HRTIM_TIMF_RSTFR_MSTCMP2 Master compare 2 **/
#define HRTIM_TIMF_RSTFR_MSTCMP2		(1 << 6)
/** HRTIM_TIMF_RSTFR_MSTCMP1 Master compare 1 **/
#define HRTIM_TIMF_RSTFR_MSTCMP1		(1 << 5)
/** HRTIM_TIMF_RSTFR_MSTPER Master timer Period **/
#define HRTIM_TIMF_RSTFR_MSTPER		(1 << 4)
/** HRTIM_TIMF_RSTFR_CMP4 Timer A compare 4 reset **/
#define HRTIM_TIMF_RSTFR_CMP4		(1 << 3)
/** HRTIM_TIMF_RSTFR_CMP2 Timer A compare 2 reset **/
#define HRTIM_TIMF_RSTFR_CMP2		(1 << 2)
/** HRTIM_TIMF_RSTFR_UPDT Timer A Update reset **/
#define HRTIM_TIMF_RSTFR_UPDT		(1 << 1)
/** HRTIM_TIMF_RSTFR_TIMFCMP1 Timer A Update reset **/
#define HRTIM_TIMF_RSTFR_TIMFCMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_chpfr CHPFR Timerx Chopper Register
@{*/


#define HRTIM_TIMF_CHPFR_STRTPW_SHIFT		7
#define HRTIM_TIMF_CHPFR_STRTPW_MASK		0x0f
/** @defgroup hrtim_timf_chpfr_strtpw STRTPW STRTPW
@{*/
/**@}*/


#define HRTIM_TIMF_CHPFR_CHPDTY_SHIFT		4
#define HRTIM_TIMF_CHPFR_CHPDTY_MASK		0x07
/** @defgroup hrtim_timf_chpfr_chpdty CHPDTY Timerx chopper duty cycle value
@{*/
/**@}*/


#define HRTIM_TIMF_CHPFR_CHPFRQ_SHIFT		0
#define HRTIM_TIMF_CHPFR_CHPFRQ_MASK		0x0f
/** @defgroup hrtim_timf_chpfr_chpfrq CHPFRQ Timerx carrier frequency value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timf_cpt1fcr CPT1FCR Timerx Capture 2 Control Register
@{*/

/** HRTIM_TIMF_CPT1FCR_TECMP2 TECMP2 **/
#define HRTIM_TIMF_CPT1FCR_TECMP2		(1 << 31)
/** HRTIM_TIMF_CPT1FCR_TECMP1 TECMP1 **/
#define HRTIM_TIMF_CPT1FCR_TECMP1		(1 << 30)
/** HRTIM_TIMF_CPT1FCR_TE1RST TE1RST **/
#define HRTIM_TIMF_CPT1FCR_TE1RST		(1 << 29)
/** HRTIM_TIMF_CPT1FCR_TE1SET TE1SET **/
#define HRTIM_TIMF_CPT1FCR_TE1SET		(1 << 28)
/** HRTIM_TIMF_CPT1FCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMF_CPT1FCR_TDCMP2		(1 << 27)
/** HRTIM_TIMF_CPT1FCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMF_CPT1FCR_TDCMP1		(1 << 26)
/** HRTIM_TIMF_CPT1FCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMF_CPT1FCR_TD1RST		(1 << 25)
/** HRTIM_TIMF_CPT1FCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMF_CPT1FCR_TD1SET		(1 << 24)
/** HRTIM_TIMF_CPT1FCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMF_CPT1FCR_TCCMP2		(1 << 23)
/** HRTIM_TIMF_CPT1FCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMF_CPT1FCR_TCCMP1		(1 << 22)
/** HRTIM_TIMF_CPT1FCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMF_CPT1FCR_TC1RST		(1 << 21)
/** HRTIM_TIMF_CPT1FCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMF_CPT1FCR_TC1SET		(1 << 20)
/** HRTIM_TIMF_CPT1FCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMF_CPT1FCR_TBCMP2		(1 << 19)
/** HRTIM_TIMF_CPT1FCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMF_CPT1FCR_TBCMP1		(1 << 18)
/** HRTIM_TIMF_CPT1FCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMF_CPT1FCR_TB1RST		(1 << 17)
/** HRTIM_TIMF_CPT1FCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMF_CPT1FCR_TB1SET		(1 << 16)
/** HRTIM_TIMF_CPT1FCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMF_CPT1FCR_TACMP2		(1 << 15)
/** HRTIM_TIMF_CPT1FCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMF_CPT1FCR_TACMP1		(1 << 14)
/** HRTIM_TIMF_CPT1FCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMF_CPT1FCR_TA1RST		(1 << 13)
/** HRTIM_TIMF_CPT1FCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMF_CPT1FCR_TA1SET		(1 << 12)
/** HRTIM_TIMF_CPT1FCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMF_CPT1FCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMF_CPT1FCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMF_CPT1FCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMF_CPT1FCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMF_CPT1FCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMF_CPT1FCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMF_CPT1FCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMF_CPT1FCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMF_CPT1FCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMF_CPT1FCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMF_CPT1FCR_UDPCPT Update Capture **/
#define HRTIM_TIMF_CPT1FCR_UDPCPT		(1 << 1)
/** HRTIM_TIMF_CPT1FCR_SWCPT Software Capture **/
#define HRTIM_TIMF_CPT1FCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_cpt2fcr CPT2FCR CPT2xCR
@{*/

/** HRTIM_TIMF_CPT2FCR_TECMP2 TECMP2 **/
#define HRTIM_TIMF_CPT2FCR_TECMP2		(1 << 31)
/** HRTIM_TIMF_CPT2FCR_TECMP1 TECMP1 **/
#define HRTIM_TIMF_CPT2FCR_TECMP1		(1 << 30)
/** HRTIM_TIMF_CPT2FCR_TE1RST TE1RST **/
#define HRTIM_TIMF_CPT2FCR_TE1RST		(1 << 29)
/** HRTIM_TIMF_CPT2FCR_TE1SET TE1SET **/
#define HRTIM_TIMF_CPT2FCR_TE1SET		(1 << 28)
/** HRTIM_TIMF_CPT2FCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMF_CPT2FCR_TDCMP2		(1 << 27)
/** HRTIM_TIMF_CPT2FCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMF_CPT2FCR_TDCMP1		(1 << 26)
/** HRTIM_TIMF_CPT2FCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMF_CPT2FCR_TD1RST		(1 << 25)
/** HRTIM_TIMF_CPT2FCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMF_CPT2FCR_TD1SET		(1 << 24)
/** HRTIM_TIMF_CPT2FCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMF_CPT2FCR_TCCMP2		(1 << 23)
/** HRTIM_TIMF_CPT2FCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMF_CPT2FCR_TCCMP1		(1 << 22)
/** HRTIM_TIMF_CPT2FCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMF_CPT2FCR_TC1RST		(1 << 21)
/** HRTIM_TIMF_CPT2FCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMF_CPT2FCR_TC1SET		(1 << 20)
/** HRTIM_TIMF_CPT2FCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMF_CPT2FCR_TBCMP2		(1 << 19)
/** HRTIM_TIMF_CPT2FCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMF_CPT2FCR_TBCMP1		(1 << 18)
/** HRTIM_TIMF_CPT2FCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMF_CPT2FCR_TB1RST		(1 << 17)
/** HRTIM_TIMF_CPT2FCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMF_CPT2FCR_TB1SET		(1 << 16)
/** HRTIM_TIMF_CPT2FCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMF_CPT2FCR_TACMP2		(1 << 15)
/** HRTIM_TIMF_CPT2FCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMF_CPT2FCR_TACMP1		(1 << 14)
/** HRTIM_TIMF_CPT2FCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMF_CPT2FCR_TA1RST		(1 << 13)
/** HRTIM_TIMF_CPT2FCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMF_CPT2FCR_TA1SET		(1 << 12)
/** HRTIM_TIMF_CPT2FCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMF_CPT2FCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMF_CPT2FCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMF_CPT2FCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMF_CPT2FCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMF_CPT2FCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMF_CPT2FCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMF_CPT2FCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMF_CPT2FCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMF_CPT2FCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMF_CPT2FCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMF_CPT2FCR_UDPCPT Update Capture **/
#define HRTIM_TIMF_CPT2FCR_UDPCPT		(1 << 1)
/** HRTIM_TIMF_CPT2FCR_SWCPT Software Capture **/
#define HRTIM_TIMF_CPT2FCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_outfr OUTFR Timerx Output Register
@{*/

/** HRTIM_TIMF_OUTFR_DIDL2 Output 2 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMF_OUTFR_DIDL2		(1 << 23)
/** HRTIM_TIMF_OUTFR_CHP2 Output 2 Chopper enable **/
#define HRTIM_TIMF_OUTFR_CHP2		(1 << 22)

#define HRTIM_TIMF_OUTFR_FAULT2_SHIFT		20
#define HRTIM_TIMF_OUTFR_FAULT2_MASK		0x03
/** @defgroup hrtim_timf_outfr_fault2 FAULT2 Output 2 Fault state
@{*/
/**@}*/

/** HRTIM_TIMF_OUTFR_IDLES2 Output 2 Idle State **/
#define HRTIM_TIMF_OUTFR_IDLES2		(1 << 19)
/** HRTIM_TIMF_OUTFR_IDLEM2 Output 2 Idle mode **/
#define HRTIM_TIMF_OUTFR_IDLEM2		(1 << 18)
/** HRTIM_TIMF_OUTFR_POL2 Output 2 polarity **/
#define HRTIM_TIMF_OUTFR_POL2		(1 << 17)
/** HRTIM_TIMF_OUTFR_BIAR Balanced Idle Automatic Resume **/
#define HRTIM_TIMF_OUTFR_BIAR		(1 << 14)

#define HRTIM_TIMF_OUTFR_DLYPRT_SHIFT		10
#define HRTIM_TIMF_OUTFR_DLYPRT_MASK		0x07
/** @defgroup hrtim_timf_outfr_dlyprt DLYPRT Delayed Protection
@{*/
/**@}*/

/** HRTIM_TIMF_OUTFR_DLYPRTEN Delayed Protection Enable **/
#define HRTIM_TIMF_OUTFR_DLYPRTEN		(1 << 9)
/** HRTIM_TIMF_OUTFR_DTEN Deadtime enable **/
#define HRTIM_TIMF_OUTFR_DTEN		(1 << 8)
/** HRTIM_TIMF_OUTFR_DIDL1 Output 1 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMF_OUTFR_DIDL1		(1 << 7)
/** HRTIM_TIMF_OUTFR_CHP1 Output 1 Chopper enable **/
#define HRTIM_TIMF_OUTFR_CHP1		(1 << 6)

#define HRTIM_TIMF_OUTFR_FAULT1_SHIFT		4
#define HRTIM_TIMF_OUTFR_FAULT1_MASK		0x03
/** @defgroup hrtim_timf_outfr_fault1 FAULT1 Output 1 Fault state
@{*/
/**@}*/

/** HRTIM_TIMF_OUTFR_IDLES1 Output 1 Idle State **/
#define HRTIM_TIMF_OUTFR_IDLES1		(1 << 3)
/** HRTIM_TIMF_OUTFR_IDLEM1 Output 1 Idle mode **/
#define HRTIM_TIMF_OUTFR_IDLEM1		(1 << 2)
/** HRTIM_TIMF_OUTFR_POL1 Output 1 polarity **/
#define HRTIM_TIMF_OUTFR_POL1		(1 << 1)

/**@}*/

/** @defgroup hrtim_timf_fltfr FLTFR Timerx Fault Register
@{*/

/** HRTIM_TIMF_FLTFR_FLTLCK Fault sources Lock **/
#define HRTIM_TIMF_FLTFR_FLTLCK		(1 << 31)
/** HRTIM_TIMF_FLTFR_FLT6EN Fault 6 enable **/
#define HRTIM_TIMF_FLTFR_FLT6EN		(1 << 5)
/** HRTIM_TIMF_FLTFR_FLT5EN Fault 5 enable **/
#define HRTIM_TIMF_FLTFR_FLT5EN		(1 << 4)
/** HRTIM_TIMF_FLTFR_FLT4EN Fault 4 enable **/
#define HRTIM_TIMF_FLTFR_FLT4EN		(1 << 3)
/** HRTIM_TIMF_FLTFR_FLT3EN Fault 3 enable **/
#define HRTIM_TIMF_FLTFR_FLT3EN		(1 << 2)
/** HRTIM_TIMF_FLTFR_FLT2EN Fault 2 enable **/
#define HRTIM_TIMF_FLTFR_FLT2EN		(1 << 1)
/** HRTIM_TIMF_FLTFR_FLT1EN Fault 1 enable **/
#define HRTIM_TIMF_FLTFR_FLT1EN		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_timfcr2 TIMFCR2 HRTIM Timerx Control Register 2
@{*/

/** HRTIM_TIMF_TIMFCR2_TRGHLF Triggered-half mode **/
#define HRTIM_TIMF_TIMFCR2_TRGHLF		(1 << 20)
/** HRTIM_TIMF_TIMFCR2_GTCMP3 Greater than Compare 3 PWM mode **/
#define HRTIM_TIMF_TIMFCR2_GTCMP3		(1 << 17)
/** HRTIM_TIMF_TIMFCR2_GTCMP1 Greater than Compare 1 PWM mode **/
#define HRTIM_TIMF_TIMFCR2_GTCMP1		(1 << 16)

#define HRTIM_TIMF_TIMFCR2_FEROM_SHIFT		14
#define HRTIM_TIMF_TIMFCR2_FEROM_MASK		0x03
/** @defgroup hrtim_timf_timfcr2_ferom FEROM Fault and Event Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMF_TIMFCR2_BMROM_SHIFT		12
#define HRTIM_TIMF_TIMFCR2_BMROM_MASK		0x03
/** @defgroup hrtim_timf_timfcr2_bmrom BMROM Burst Mode Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMF_TIMFCR2_ADROM_SHIFT		10
#define HRTIM_TIMF_TIMFCR2_ADROM_MASK		0x03
/** @defgroup hrtim_timf_timfcr2_adrom ADROM ADC Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMF_TIMFCR2_OUTROM_SHIFT		8
#define HRTIM_TIMF_TIMFCR2_OUTROM_MASK		0x03
/** @defgroup hrtim_timf_timfcr2_outrom OUTROM Output Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMF_TIMFCR2_ROM_SHIFT		6
#define HRTIM_TIMF_TIMFCR2_ROM_MASK		0x03
/** @defgroup hrtim_timf_timfcr2_rom ROM Roll-Over Mode
@{*/
/**@}*/

/** HRTIM_TIMF_TIMFCR2_UDM Up-Down Mode **/
#define HRTIM_TIMF_TIMFCR2_UDM		(1 << 4)
/** HRTIM_TIMF_TIMFCR2_DCDR Dual Channel DAC Reset trigger **/
#define HRTIM_TIMF_TIMFCR2_DCDR		(1 << 2)
/** HRTIM_TIMF_TIMFCR2_DCDS Dual Channel DAC Step trigger **/
#define HRTIM_TIMF_TIMFCR2_DCDS		(1 << 1)
/** HRTIM_TIMF_TIMFCR2_DCDE Dual Channel DAC trigger enable **/
#define HRTIM_TIMF_TIMFCR2_DCDE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timf_feefr3 FEEFR3 HRTIM Timerx External Event Filtering Register 3
@{*/


#define HRTIM_TIMF_FEEFR3_EEVACNT_SHIFT		8
#define HRTIM_TIMF_FEEFR3_EEVACNT_MASK		0x3f
/** @defgroup hrtim_timf_feefr3_eevacnt EEVACNT External Event A counter
@{*/
/**@}*/


#define HRTIM_TIMF_FEEFR3_EEVASEL_SHIFT		4
#define HRTIM_TIMF_FEEFR3_EEVASEL_MASK		0x0f
/** @defgroup hrtim_timf_feefr3_eevasel EEVASEL External Event A Selection
@{*/
/**@}*/

/** HRTIM_TIMF_FEEFR3_EEVARSTM External Event A Reset Mode **/
#define HRTIM_TIMF_FEEFR3_EEVARSTM		(1 << 2)
/** HRTIM_TIMF_FEEFR3_EEVACRES External Event A Counter Reset **/
#define HRTIM_TIMF_FEEFR3_EEVACRES		(1 << 1)
/** HRTIM_TIMF_FEEFR3_EEVACE External Event A Counter Enable **/
#define HRTIM_TIMF_FEEFR3_EEVACE		(1 << 0)

/**@}*/

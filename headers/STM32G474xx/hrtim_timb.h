#pragma once 

/* --- HRTIM_TIMB: High Resolution Timer: TIMB ---------------------- */

/** @defgroup hrtim_timb_registers High Resolution Timer: TIMB Register
@{*/

/** HRTIM_TIMB_TIMBCR Timerx Control Register **/
#define HRTIM_TIMB_TIMBCR			MMIO32(HRTIM_TIMB_BASE + 0x00)
/** HRTIM_TIMB_TIMBISR Timerx Interrupt Status Register **/
#define HRTIM_TIMB_TIMBISR			MMIO32(HRTIM_TIMB_BASE + 0x04)
/** HRTIM_TIMB_TIMBICR Timerx Interrupt Clear Register **/
#define HRTIM_TIMB_TIMBICR			MMIO32(HRTIM_TIMB_BASE + 0x08)
/** HRTIM_TIMB_TIMBDIER TIMxDIER **/
#define HRTIM_TIMB_TIMBDIER			MMIO32(HRTIM_TIMB_BASE + 0x0c)
/** HRTIM_TIMB_CNTR Timerx Counter Register **/
#define HRTIM_TIMB_CNTR			MMIO32(HRTIM_TIMB_BASE + 0x10)
/** HRTIM_TIMB_PERBR Timerx Period Register **/
#define HRTIM_TIMB_PERBR			MMIO32(HRTIM_TIMB_BASE + 0x14)
/** HRTIM_TIMB_REPBR Timerx Repetition Register **/
#define HRTIM_TIMB_REPBR			MMIO32(HRTIM_TIMB_BASE + 0x18)
/** HRTIM_TIMB_CMP1BR Timerx Compare 1 Register **/
#define HRTIM_TIMB_CMP1BR			MMIO32(HRTIM_TIMB_BASE + 0x1c)
/** HRTIM_TIMB_CMP1CBR Timerx Compare 1 Compound Register **/
#define HRTIM_TIMB_CMP1CBR			MMIO32(HRTIM_TIMB_BASE + 0x20)
/** HRTIM_TIMB_CMP2BR Timerx Compare 2 Register **/
#define HRTIM_TIMB_CMP2BR			MMIO32(HRTIM_TIMB_BASE + 0x24)
/** HRTIM_TIMB_CMP3BR Timerx Compare 3 Register **/
#define HRTIM_TIMB_CMP3BR			MMIO32(HRTIM_TIMB_BASE + 0x28)
/** HRTIM_TIMB_CMP4BR Timerx Compare 4 Register **/
#define HRTIM_TIMB_CMP4BR			MMIO32(HRTIM_TIMB_BASE + 0x2c)
/** HRTIM_TIMB_CPT1BR Timerx Capture 1 Register **/
#define HRTIM_TIMB_CPT1BR			MMIO32(HRTIM_TIMB_BASE + 0x30)
/** HRTIM_TIMB_CPT2BR Timerx Capture 2 Register **/
#define HRTIM_TIMB_CPT2BR			MMIO32(HRTIM_TIMB_BASE + 0x34)
/** HRTIM_TIMB_DTBR Timerx Deadtime Register **/
#define HRTIM_TIMB_DTBR			MMIO32(HRTIM_TIMB_BASE + 0x38)
/** HRTIM_TIMB_SETB1R Timerx Output1 Set Register **/
#define HRTIM_TIMB_SETB1R			MMIO32(HRTIM_TIMB_BASE + 0x3c)
/** HRTIM_TIMB_RSTB1R Timerx Output1 Reset Register **/
#define HRTIM_TIMB_RSTB1R			MMIO32(HRTIM_TIMB_BASE + 0x40)
/** HRTIM_TIMB_SETB2R Timerx Output2 Set Register **/
#define HRTIM_TIMB_SETB2R			MMIO32(HRTIM_TIMB_BASE + 0x44)
/** HRTIM_TIMB_RSTB2R Timerx Output2 Reset Register **/
#define HRTIM_TIMB_RSTB2R			MMIO32(HRTIM_TIMB_BASE + 0x48)
/** HRTIM_TIMB_EEFBR1 Timerx External Event Filtering Register 1 **/
#define HRTIM_TIMB_EEFBR1			MMIO32(HRTIM_TIMB_BASE + 0x4c)
/** HRTIM_TIMB_EEFBR2 Timerx External Event Filtering Register 2 **/
#define HRTIM_TIMB_EEFBR2			MMIO32(HRTIM_TIMB_BASE + 0x50)
/** HRTIM_TIMB_RSTBR TimerA Reset Register **/
#define HRTIM_TIMB_RSTBR			MMIO32(HRTIM_TIMB_BASE + 0x54)
/** HRTIM_TIMB_CHPBR Timerx Chopper Register **/
#define HRTIM_TIMB_CHPBR			MMIO32(HRTIM_TIMB_BASE + 0x58)
/** HRTIM_TIMB_CPT1BCR Timerx Capture 2 Control Register **/
#define HRTIM_TIMB_CPT1BCR			MMIO32(HRTIM_TIMB_BASE + 0x5c)
/** HRTIM_TIMB_CPT2BCR CPT2xCR **/
#define HRTIM_TIMB_CPT2BCR			MMIO32(HRTIM_TIMB_BASE + 0x60)
/** HRTIM_TIMB_OUTBR Timerx Output Register **/
#define HRTIM_TIMB_OUTBR			MMIO32(HRTIM_TIMB_BASE + 0x64)
/** HRTIM_TIMB_FLTBR Timerx Fault Register **/
#define HRTIM_TIMB_FLTBR			MMIO32(HRTIM_TIMB_BASE + 0x68)
/** HRTIM_TIMB_TIMBCR2 HRTIM Timerx Control Register 2 **/
#define HRTIM_TIMB_TIMBCR2			MMIO32(HRTIM_TIMB_BASE + 0x6c)
/** HRTIM_TIMB_BEEFR3 HRTIM Timerx External Event Filtering Register 3 **/
#define HRTIM_TIMB_BEEFR3			MMIO32(HRTIM_TIMB_BASE + 0x70)

/**@}*/


/** @defgroup hrtim_timb_timbcr TIMBCR Timerx Control Register
@{*/


#define HRTIM_TIMB_TIMBCR_UPDGAT_SHIFT		28
#define HRTIM_TIMB_TIMBCR_UPDGAT_MASK		0x0f
/** @defgroup hrtim_timb_timbcr_updgat UPDGAT Update Gating
@{*/
/**@}*/

/** HRTIM_TIMB_TIMBCR_PREEN Preload enable **/
#define HRTIM_TIMB_TIMBCR_PREEN		(1 << 27)

#define HRTIM_TIMB_TIMBCR_DACSYNC_SHIFT		25
#define HRTIM_TIMB_TIMBCR_DACSYNC_MASK		0x03
/** @defgroup hrtim_timb_timbcr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_TIMB_TIMBCR_MSTU Master Timer update **/
#define HRTIM_TIMB_TIMBCR_MSTU		(1 << 24)
/** HRTIM_TIMB_TIMBCR_TEU TEU **/
#define HRTIM_TIMB_TIMBCR_TEU		(1 << 23)
/** HRTIM_TIMB_TIMBCR_TDU TDU **/
#define HRTIM_TIMB_TIMBCR_TDU		(1 << 22)
/** HRTIM_TIMB_TIMBCR_TCU TCU **/
#define HRTIM_TIMB_TIMBCR_TCU		(1 << 21)
/** HRTIM_TIMB_TIMBCR_TAU TAU **/
#define HRTIM_TIMB_TIMBCR_TAU		(1 << 19)
/** HRTIM_TIMB_TIMBCR_TxRSTU Timerx reset update **/
#define HRTIM_TIMB_TIMBCR_TxRSTU		(1 << 18)
/** HRTIM_TIMB_TIMBCR_TxREPU Timer x Repetition update **/
#define HRTIM_TIMB_TIMBCR_TxREPU		(1 << 17)
/** HRTIM_TIMB_TIMBCR_TFU TFU **/
#define HRTIM_TIMB_TIMBCR_TFU		(1 << 16)

#define HRTIM_TIMB_TIMBCR_DELCMP4_SHIFT		14
#define HRTIM_TIMB_TIMBCR_DELCMP4_MASK		0x03
/** @defgroup hrtim_timb_timbcr_delcmp4 DELCMP4 Delayed CMP4 mode
@{*/
/**@}*/


#define HRTIM_TIMB_TIMBCR_DELCMP2_SHIFT		12
#define HRTIM_TIMB_TIMBCR_DELCMP2_MASK		0x03
/** @defgroup hrtim_timb_timbcr_delcmp2 DELCMP2 Delayed CMP2 mode
@{*/
/**@}*/

/** HRTIM_TIMB_TIMBCR_SYNCSTRTx Synchronization Starts Timer x **/
#define HRTIM_TIMB_TIMBCR_SYNCSTRTx		(1 << 11)
/** HRTIM_TIMB_TIMBCR_SYNCRSTx Synchronization Resets Timer x **/
#define HRTIM_TIMB_TIMBCR_SYNCRSTx		(1 << 10)
/** HRTIM_TIMB_TIMBCR_RSYNCU Re-Synchronized Update **/
#define HRTIM_TIMB_TIMBCR_RSYNCU		(1 << 9)

#define HRTIM_TIMB_TIMBCR_INTLVD_SHIFT		7
#define HRTIM_TIMB_TIMBCR_INTLVD_MASK		0x03
/** @defgroup hrtim_timb_timbcr_intlvd INTLVD Interleaved mode
@{*/
/**@}*/

/** HRTIM_TIMB_TIMBCR_PSHPLL Push-Pull mode enable **/
#define HRTIM_TIMB_TIMBCR_PSHPLL		(1 << 6)
/** HRTIM_TIMB_TIMBCR_HALF Half mode enable **/
#define HRTIM_TIMB_TIMBCR_HALF		(1 << 5)
/** HRTIM_TIMB_TIMBCR_RETRIG Re-triggerable mode **/
#define HRTIM_TIMB_TIMBCR_RETRIG		(1 << 4)
/** HRTIM_TIMB_TIMBCR_CONT Continuous mode **/
#define HRTIM_TIMB_TIMBCR_CONT		(1 << 3)

#define HRTIM_TIMB_TIMBCR_CK_PSCx_SHIFT		0
#define HRTIM_TIMB_TIMBCR_CK_PSCx_MASK		0x07
/** @defgroup hrtim_timb_timbcr_ck_pscx CKPSCx HRTIM Timer x Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_timbisr TIMBISR Timerx Interrupt Status Register
@{*/

/** HRTIM_TIMB_TIMBISR_O2CPY Output 2 Copy **/
#define HRTIM_TIMB_TIMBISR_O2CPY		(1 << 21)
/** HRTIM_TIMB_TIMBISR_O1CPY Output 1 Copy **/
#define HRTIM_TIMB_TIMBISR_O1CPY		(1 << 20)
/** HRTIM_TIMB_TIMBISR_O2STAT Output 2 State **/
#define HRTIM_TIMB_TIMBISR_O2STAT		(1 << 19)
/** HRTIM_TIMB_TIMBISR_O1STAT Output 1 State **/
#define HRTIM_TIMB_TIMBISR_O1STAT		(1 << 18)
/** HRTIM_TIMB_TIMBISR_IPPSTAT Idle Push Pull Status **/
#define HRTIM_TIMB_TIMBISR_IPPSTAT		(1 << 17)
/** HRTIM_TIMB_TIMBISR_CPPSTAT Current Push Pull Status **/
#define HRTIM_TIMB_TIMBISR_CPPSTAT		(1 << 16)
/** HRTIM_TIMB_TIMBISR_DLYPRT Delayed Protection Flag **/
#define HRTIM_TIMB_TIMBISR_DLYPRT		(1 << 14)
/** HRTIM_TIMB_TIMBISR_RST Reset Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_RST		(1 << 13)
/** HRTIM_TIMB_TIMBISR_RSTx2 Output 2 Reset Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_RSTx2		(1 << 12)
/** HRTIM_TIMB_TIMBISR_SETx2 Output 2 Set Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_SETx2		(1 << 11)
/** HRTIM_TIMB_TIMBISR_RSTx1 Output 1 Reset Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_RSTx1		(1 << 10)
/** HRTIM_TIMB_TIMBISR_SETx1 Output 1 Set Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_SETx1		(1 << 9)
/** HRTIM_TIMB_TIMBISR_CPT2 Capture2 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CPT2		(1 << 8)
/** HRTIM_TIMB_TIMBISR_CPT1 Capture1 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CPT1		(1 << 7)
/** HRTIM_TIMB_TIMBISR_UPD Update Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_UPD		(1 << 6)
/** HRTIM_TIMB_TIMBISR_REP Repetition Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_REP		(1 << 4)
/** HRTIM_TIMB_TIMBISR_CMP4 Compare 4 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CMP4		(1 << 3)
/** HRTIM_TIMB_TIMBISR_CMP3 Compare 3 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CMP3		(1 << 2)
/** HRTIM_TIMB_TIMBISR_CMP2 Compare 2 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CMP2		(1 << 1)
/** HRTIM_TIMB_TIMBISR_CMP1 Compare 1 Interrupt Flag **/
#define HRTIM_TIMB_TIMBISR_CMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_timbicr TIMBICR Timerx Interrupt Clear Register
@{*/

/** HRTIM_TIMB_TIMBICR_DLYPRTC Delayed Protection Flag Clear **/
#define HRTIM_TIMB_TIMBICR_DLYPRTC		(1 << 14)
/** HRTIM_TIMB_TIMBICR_RSTC Reset Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_RSTC		(1 << 13)
/** HRTIM_TIMB_TIMBICR_RSTx2C Output 2 Reset flag Clear **/
#define HRTIM_TIMB_TIMBICR_RSTx2C		(1 << 12)
/** HRTIM_TIMB_TIMBICR_SET2xC Output 2 Set flag Clear **/
#define HRTIM_TIMB_TIMBICR_SET2xC		(1 << 11)
/** HRTIM_TIMB_TIMBICR_RSTx1C Output 1 Reset flag Clear **/
#define HRTIM_TIMB_TIMBICR_RSTx1C		(1 << 10)
/** HRTIM_TIMB_TIMBICR_SET1xC Output 1 Set flag Clear **/
#define HRTIM_TIMB_TIMBICR_SET1xC		(1 << 9)
/** HRTIM_TIMB_TIMBICR_CPT2C Capture2 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CPT2C		(1 << 8)
/** HRTIM_TIMB_TIMBICR_CPT1C Capture1 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CPT1C		(1 << 7)
/** HRTIM_TIMB_TIMBICR_UPDC Update Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_UPDC		(1 << 6)
/** HRTIM_TIMB_TIMBICR_REPC Repetition Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_REPC		(1 << 4)
/** HRTIM_TIMB_TIMBICR_CMP4C Compare 4 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CMP4C		(1 << 3)
/** HRTIM_TIMB_TIMBICR_CMP3C Compare 3 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CMP3C		(1 << 2)
/** HRTIM_TIMB_TIMBICR_CMP2C Compare 2 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CMP2C		(1 << 1)
/** HRTIM_TIMB_TIMBICR_CMP1C Compare 1 Interrupt flag Clear **/
#define HRTIM_TIMB_TIMBICR_CMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_timbdier TIMBDIER TIMxDIER
@{*/

/** HRTIM_TIMB_TIMBDIER_DLYPRTDE DLYPRTDE **/
#define HRTIM_TIMB_TIMBDIER_DLYPRTDE		(1 << 30)
/** HRTIM_TIMB_TIMBDIER_RSTDE RSTDE **/
#define HRTIM_TIMB_TIMBDIER_RSTDE		(1 << 29)
/** HRTIM_TIMB_TIMBDIER_RSTx2DE RSTx2DE **/
#define HRTIM_TIMB_TIMBDIER_RSTx2DE		(1 << 28)
/** HRTIM_TIMB_TIMBDIER_SETx2DE SETx2DE **/
#define HRTIM_TIMB_TIMBDIER_SETx2DE		(1 << 27)
/** HRTIM_TIMB_TIMBDIER_RSTx1DE RSTx1DE **/
#define HRTIM_TIMB_TIMBDIER_RSTx1DE		(1 << 26)
/** HRTIM_TIMB_TIMBDIER_SET1xDE SET1xDE **/
#define HRTIM_TIMB_TIMBDIER_SET1xDE		(1 << 25)
/** HRTIM_TIMB_TIMBDIER_CPT2DE CPT2DE **/
#define HRTIM_TIMB_TIMBDIER_CPT2DE		(1 << 24)
/** HRTIM_TIMB_TIMBDIER_CPT1DE CPT1DE **/
#define HRTIM_TIMB_TIMBDIER_CPT1DE		(1 << 23)
/** HRTIM_TIMB_TIMBDIER_UPDDE UPDDE **/
#define HRTIM_TIMB_TIMBDIER_UPDDE		(1 << 22)
/** HRTIM_TIMB_TIMBDIER_REPDE REPDE **/
#define HRTIM_TIMB_TIMBDIER_REPDE		(1 << 20)
/** HRTIM_TIMB_TIMBDIER_CMP4DE CMP4DE **/
#define HRTIM_TIMB_TIMBDIER_CMP4DE		(1 << 19)
/** HRTIM_TIMB_TIMBDIER_CMP3DE CMP3DE **/
#define HRTIM_TIMB_TIMBDIER_CMP3DE		(1 << 18)
/** HRTIM_TIMB_TIMBDIER_CMP2DE CMP2DE **/
#define HRTIM_TIMB_TIMBDIER_CMP2DE		(1 << 17)
/** HRTIM_TIMB_TIMBDIER_CMP1DE CMP1DE **/
#define HRTIM_TIMB_TIMBDIER_CMP1DE		(1 << 16)
/** HRTIM_TIMB_TIMBDIER_DLYPRTIE DLYPRTIE **/
#define HRTIM_TIMB_TIMBDIER_DLYPRTIE		(1 << 14)
/** HRTIM_TIMB_TIMBDIER_RSTIE RSTIE **/
#define HRTIM_TIMB_TIMBDIER_RSTIE		(1 << 13)
/** HRTIM_TIMB_TIMBDIER_RSTx2IE RSTx2IE **/
#define HRTIM_TIMB_TIMBDIER_RSTx2IE		(1 << 12)
/** HRTIM_TIMB_TIMBDIER_SETx2IE SETx2IE **/
#define HRTIM_TIMB_TIMBDIER_SETx2IE		(1 << 11)
/** HRTIM_TIMB_TIMBDIER_RSTx1IE RSTx1IE **/
#define HRTIM_TIMB_TIMBDIER_RSTx1IE		(1 << 10)
/** HRTIM_TIMB_TIMBDIER_SET1xIE SET1xIE **/
#define HRTIM_TIMB_TIMBDIER_SET1xIE		(1 << 9)
/** HRTIM_TIMB_TIMBDIER_CPT2IE CPT2IE **/
#define HRTIM_TIMB_TIMBDIER_CPT2IE		(1 << 8)
/** HRTIM_TIMB_TIMBDIER_CPT1IE CPT1IE **/
#define HRTIM_TIMB_TIMBDIER_CPT1IE		(1 << 7)
/** HRTIM_TIMB_TIMBDIER_UPDIE UPDIE **/
#define HRTIM_TIMB_TIMBDIER_UPDIE		(1 << 6)
/** HRTIM_TIMB_TIMBDIER_REPIE REPIE **/
#define HRTIM_TIMB_TIMBDIER_REPIE		(1 << 4)
/** HRTIM_TIMB_TIMBDIER_CMP4IE CMP4IE **/
#define HRTIM_TIMB_TIMBDIER_CMP4IE		(1 << 3)
/** HRTIM_TIMB_TIMBDIER_CMP3IE CMP3IE **/
#define HRTIM_TIMB_TIMBDIER_CMP3IE		(1 << 2)
/** HRTIM_TIMB_TIMBDIER_CMP2IE CMP2IE **/
#define HRTIM_TIMB_TIMBDIER_CMP2IE		(1 << 1)
/** HRTIM_TIMB_TIMBDIER_CMP1IE CMP1IE **/
#define HRTIM_TIMB_TIMBDIER_CMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_cntr CNTR Timerx Counter Register
@{*/


#define HRTIM_TIMB_CNTR_CNTx_SHIFT		0
#define HRTIM_TIMB_CNTR_CNTx_MASK		0xffff
/** @defgroup hrtim_timb_cntr_cntx CNTx Timerx Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_perbr PERBR Timerx Period Register
@{*/


#define HRTIM_TIMB_PERBR_PERx_SHIFT		0
#define HRTIM_TIMB_PERBR_PERx_MASK		0xffff
/** @defgroup hrtim_timb_perbr_perx PERx Timerx Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_repbr REPBR Timerx Repetition Register
@{*/


#define HRTIM_TIMB_REPBR_REPx_SHIFT		0
#define HRTIM_TIMB_REPBR_REPx_MASK		0xff
/** @defgroup hrtim_timb_repbr_repx REPx Timerx Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cmp1br CMP1BR Timerx Compare 1 Register
@{*/


#define HRTIM_TIMB_CMP1BR_CMP1x_SHIFT		0
#define HRTIM_TIMB_CMP1BR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timb_cmp1br_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cmp1cbr CMP1CBR Timerx Compare 1 Compound Register
@{*/


#define HRTIM_TIMB_CMP1CBR_REPx_SHIFT		16
#define HRTIM_TIMB_CMP1CBR_REPx_MASK		0xff
/** @defgroup hrtim_timb_cmp1cbr_repx REPx Timerx Repetition value (aliased from HRTIM_REPx register)
@{*/
/**@}*/


#define HRTIM_TIMB_CMP1CBR_CMP1x_SHIFT		0
#define HRTIM_TIMB_CMP1CBR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timb_cmp1cbr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cmp2br CMP2BR Timerx Compare 2 Register
@{*/


#define HRTIM_TIMB_CMP2BR_CMP2x_SHIFT		0
#define HRTIM_TIMB_CMP2BR_CMP2x_MASK		0xffff
/** @defgroup hrtim_timb_cmp2br_cmp2x CMP2x Timerx Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cmp3br CMP3BR Timerx Compare 3 Register
@{*/


#define HRTIM_TIMB_CMP3BR_CMP3x_SHIFT		0
#define HRTIM_TIMB_CMP3BR_CMP3x_MASK		0xffff
/** @defgroup hrtim_timb_cmp3br_cmp3x CMP3x Timerx Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cmp4br CMP4BR Timerx Compare 4 Register
@{*/


#define HRTIM_TIMB_CMP4BR_CMP4x_SHIFT		0
#define HRTIM_TIMB_CMP4BR_CMP4x_MASK		0xffff
/** @defgroup hrtim_timb_cmp4br_cmp4x CMP4x Timerx Compare 4 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cpt1br CPT1BR Timerx Capture 1 Register
@{*/

/** HRTIM_TIMB_CPT1BR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMB_CPT1BR_DIR		(1 << 16)

#define HRTIM_TIMB_CPT1BR_CPT1x_SHIFT		0
#define HRTIM_TIMB_CPT1BR_CPT1x_MASK		0xffff
/** @defgroup hrtim_timb_cpt1br_cpt1x CPT1x Timerx Capture 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cpt2br CPT2BR Timerx Capture 2 Register
@{*/

/** HRTIM_TIMB_CPT2BR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMB_CPT2BR_DIR		(1 << 16)

#define HRTIM_TIMB_CPT2BR_CPT2x_SHIFT		0
#define HRTIM_TIMB_CPT2BR_CPT2x_MASK		0xffff
/** @defgroup hrtim_timb_cpt2br_cpt2x CPT2x Timerx Capture 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_dtbr DTBR Timerx Deadtime Register
@{*/

/** HRTIM_TIMB_DTBR_DTFLKx Deadtime Falling Lock **/
#define HRTIM_TIMB_DTBR_DTFLKx		(1 << 31)
/** HRTIM_TIMB_DTBR_DTFSLKx Deadtime Falling Sign Lock **/
#define HRTIM_TIMB_DTBR_DTFSLKx		(1 << 30)
/** HRTIM_TIMB_DTBR_SDTFx Sign Deadtime Falling value **/
#define HRTIM_TIMB_DTBR_SDTFx		(1 << 25)

#define HRTIM_TIMB_DTBR_DTFx_SHIFT		16
#define HRTIM_TIMB_DTBR_DTFx_MASK		0x1ff
/** @defgroup hrtim_timb_dtbr_dtfx DTFx Deadtime Falling value
@{*/
/**@}*/

/** HRTIM_TIMB_DTBR_DTRLKx Deadtime Rising Lock **/
#define HRTIM_TIMB_DTBR_DTRLKx		(1 << 15)
/** HRTIM_TIMB_DTBR_DTRSLKx Deadtime Rising Sign Lock **/
#define HRTIM_TIMB_DTBR_DTRSLKx		(1 << 14)

#define HRTIM_TIMB_DTBR_DTPRSC_SHIFT		10
#define HRTIM_TIMB_DTBR_DTPRSC_MASK		0x07
/** @defgroup hrtim_timb_dtbr_dtprsc DTPRSC Deadtime Prescaler
@{*/
/**@}*/

/** HRTIM_TIMB_DTBR_SDTRx Sign Deadtime Rising value **/
#define HRTIM_TIMB_DTBR_SDTRx		(1 << 9)

#define HRTIM_TIMB_DTBR_DTRx_SHIFT		0
#define HRTIM_TIMB_DTBR_DTRx_MASK		0x1ff
/** @defgroup hrtim_timb_dtbr_dtrx DTRx Deadtime Rising value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_setb1r SETB1R Timerx Output1 Set Register
@{*/

/** HRTIM_TIMB_SETB1R_UPDATE Registers update (transfer preload to active) **/
#define HRTIM_TIMB_SETB1R_UPDATE		(1 << 31)
/** HRTIM_TIMB_SETB1R_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMB_SETB1R_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMB_SETB1R_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMB_SETB1R_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMB_SETB1R_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMB_SETB1R_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMB_SETB1R_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMB_SETB1R_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMB_SETB1R_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMB_SETB1R_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMB_SETB1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMB_SETB1R_TIMEVNT9 Timer Event 9 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMB_SETB1R_TIMEVNT8 Timer Event 8 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMB_SETB1R_TIMEVNT7 Timer Event 7 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMB_SETB1R_TIMEVNT6 Timer Event 6 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMB_SETB1R_TIMEVNT5 Timer Event 5 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMB_SETB1R_TIMEVNT4 Timer Event 4 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMB_SETB1R_TIMEVNT3 Timer Event 3 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMB_SETB1R_TIMEVNT2 Timer Event 2 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMB_SETB1R_TIMEVNT1 Timer Event 1 **/
#define HRTIM_TIMB_SETB1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMB_SETB1R_MSTCMP4 Master Compare 4 **/
#define HRTIM_TIMB_SETB1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMB_SETB1R_MSTCMP3 Master Compare 3 **/
#define HRTIM_TIMB_SETB1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMB_SETB1R_MSTCMP2 Master Compare 2 **/
#define HRTIM_TIMB_SETB1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMB_SETB1R_MSTCMP1 Master Compare 1 **/
#define HRTIM_TIMB_SETB1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMB_SETB1R_MSTPER Master Period **/
#define HRTIM_TIMB_SETB1R_MSTPER		(1 << 7)
/** HRTIM_TIMB_SETB1R_CMP4 Timer A compare 4 **/
#define HRTIM_TIMB_SETB1R_CMP4		(1 << 6)
/** HRTIM_TIMB_SETB1R_CMP3 Timer A compare 3 **/
#define HRTIM_TIMB_SETB1R_CMP3		(1 << 5)
/** HRTIM_TIMB_SETB1R_CMP2 Timer A compare 2 **/
#define HRTIM_TIMB_SETB1R_CMP2		(1 << 4)
/** HRTIM_TIMB_SETB1R_CMP1 Timer A compare 1 **/
#define HRTIM_TIMB_SETB1R_CMP1		(1 << 3)
/** HRTIM_TIMB_SETB1R_PER Timer A Period **/
#define HRTIM_TIMB_SETB1R_PER		(1 << 2)
/** HRTIM_TIMB_SETB1R_RESYNC Timer A resynchronizaton **/
#define HRTIM_TIMB_SETB1R_RESYNC		(1 << 1)
/** HRTIM_TIMB_SETB1R_SST Software Set trigger **/
#define HRTIM_TIMB_SETB1R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_rstb1r RSTB1R Timerx Output1 Reset Register
@{*/

/** HRTIM_TIMB_RSTB1R_UPDATE UPDATE **/
#define HRTIM_TIMB_RSTB1R_UPDATE		(1 << 31)
/** HRTIM_TIMB_RSTB1R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMB_RSTB1R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMB_RSTB1R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMB_RSTB1R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMB_RSTB1R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMB_RSTB1R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMB_RSTB1R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMB_RSTB1R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMB_RSTB1R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMB_RSTB1R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMB_RSTB1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMB_RSTB1R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMB_RSTB1R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMB_RSTB1R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMB_RSTB1R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMB_RSTB1R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMB_RSTB1R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMB_RSTB1R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMB_RSTB1R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMB_RSTB1R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMB_RSTB1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMB_RSTB1R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMB_RSTB1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMB_RSTB1R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMB_RSTB1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMB_RSTB1R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMB_RSTB1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMB_RSTB1R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMB_RSTB1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMB_RSTB1R_MSTPER MSTPER **/
#define HRTIM_TIMB_RSTB1R_MSTPER		(1 << 7)
/** HRTIM_TIMB_RSTB1R_CMP4 CMP4 **/
#define HRTIM_TIMB_RSTB1R_CMP4		(1 << 6)
/** HRTIM_TIMB_RSTB1R_CMP3 CMP3 **/
#define HRTIM_TIMB_RSTB1R_CMP3		(1 << 5)
/** HRTIM_TIMB_RSTB1R_CMP2 CMP2 **/
#define HRTIM_TIMB_RSTB1R_CMP2		(1 << 4)
/** HRTIM_TIMB_RSTB1R_CMP1 CMP1 **/
#define HRTIM_TIMB_RSTB1R_CMP1		(1 << 3)
/** HRTIM_TIMB_RSTB1R_PER PER **/
#define HRTIM_TIMB_RSTB1R_PER		(1 << 2)
/** HRTIM_TIMB_RSTB1R_RESYNC RESYNC **/
#define HRTIM_TIMB_RSTB1R_RESYNC		(1 << 1)
/** HRTIM_TIMB_RSTB1R_SRT SRT **/
#define HRTIM_TIMB_RSTB1R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_setb2r SETB2R Timerx Output2 Set Register
@{*/

/** HRTIM_TIMB_SETB2R_UPDATE UPDATE **/
#define HRTIM_TIMB_SETB2R_UPDATE		(1 << 31)
/** HRTIM_TIMB_SETB2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMB_SETB2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMB_SETB2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMB_SETB2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMB_SETB2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMB_SETB2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMB_SETB2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMB_SETB2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMB_SETB2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMB_SETB2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMB_SETB2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMB_SETB2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMB_SETB2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMB_SETB2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMB_SETB2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMB_SETB2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMB_SETB2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMB_SETB2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMB_SETB2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMB_SETB2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMB_SETB2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMB_SETB2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMB_SETB2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMB_SETB2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMB_SETB2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMB_SETB2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMB_SETB2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMB_SETB2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMB_SETB2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMB_SETB2R_MSTPER MSTPER **/
#define HRTIM_TIMB_SETB2R_MSTPER		(1 << 7)
/** HRTIM_TIMB_SETB2R_CMP4 CMP4 **/
#define HRTIM_TIMB_SETB2R_CMP4		(1 << 6)
/** HRTIM_TIMB_SETB2R_CMP3 CMP3 **/
#define HRTIM_TIMB_SETB2R_CMP3		(1 << 5)
/** HRTIM_TIMB_SETB2R_CMP2 CMP2 **/
#define HRTIM_TIMB_SETB2R_CMP2		(1 << 4)
/** HRTIM_TIMB_SETB2R_CMP1 CMP1 **/
#define HRTIM_TIMB_SETB2R_CMP1		(1 << 3)
/** HRTIM_TIMB_SETB2R_PER PER **/
#define HRTIM_TIMB_SETB2R_PER		(1 << 2)
/** HRTIM_TIMB_SETB2R_RESYNC RESYNC **/
#define HRTIM_TIMB_SETB2R_RESYNC		(1 << 1)
/** HRTIM_TIMB_SETB2R_SST SST **/
#define HRTIM_TIMB_SETB2R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_rstb2r RSTB2R Timerx Output2 Reset Register
@{*/

/** HRTIM_TIMB_RSTB2R_UPDATE UPDATE **/
#define HRTIM_TIMB_RSTB2R_UPDATE		(1 << 31)
/** HRTIM_TIMB_RSTB2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMB_RSTB2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMB_RSTB2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMB_RSTB2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMB_RSTB2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMB_RSTB2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMB_RSTB2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMB_RSTB2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMB_RSTB2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMB_RSTB2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMB_RSTB2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMB_RSTB2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMB_RSTB2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMB_RSTB2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMB_RSTB2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMB_RSTB2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMB_RSTB2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMB_RSTB2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMB_RSTB2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMB_RSTB2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMB_RSTB2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMB_RSTB2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMB_RSTB2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMB_RSTB2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMB_RSTB2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMB_RSTB2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMB_RSTB2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMB_RSTB2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMB_RSTB2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMB_RSTB2R_MSTPER MSTPER **/
#define HRTIM_TIMB_RSTB2R_MSTPER		(1 << 7)
/** HRTIM_TIMB_RSTB2R_CMP4 CMP4 **/
#define HRTIM_TIMB_RSTB2R_CMP4		(1 << 6)
/** HRTIM_TIMB_RSTB2R_CMP3 CMP3 **/
#define HRTIM_TIMB_RSTB2R_CMP3		(1 << 5)
/** HRTIM_TIMB_RSTB2R_CMP2 CMP2 **/
#define HRTIM_TIMB_RSTB2R_CMP2		(1 << 4)
/** HRTIM_TIMB_RSTB2R_CMP1 CMP1 **/
#define HRTIM_TIMB_RSTB2R_CMP1		(1 << 3)
/** HRTIM_TIMB_RSTB2R_PER PER **/
#define HRTIM_TIMB_RSTB2R_PER		(1 << 2)
/** HRTIM_TIMB_RSTB2R_RESYNC RESYNC **/
#define HRTIM_TIMB_RSTB2R_RESYNC		(1 << 1)
/** HRTIM_TIMB_RSTB2R_SRT SRT **/
#define HRTIM_TIMB_RSTB2R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_eefbr1 EEFBR1 Timerx External Event Filtering Register 1
@{*/


#define HRTIM_TIMB_EEFBR1_EE5FLTR_SHIFT		25
#define HRTIM_TIMB_EEFBR1_EE5FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr1_ee5fltr EE5FLTR External Event 5 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR1_EE5LTCH External Event 5 latch **/
#define HRTIM_TIMB_EEFBR1_EE5LTCH		(1 << 24)

#define HRTIM_TIMB_EEFBR1_EE4FLTR_SHIFT		19
#define HRTIM_TIMB_EEFBR1_EE4FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr1_ee4fltr EE4FLTR External Event 4 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR1_EE4LTCH External Event 4 latch **/
#define HRTIM_TIMB_EEFBR1_EE4LTCH		(1 << 18)

#define HRTIM_TIMB_EEFBR1_EE3FLTR_SHIFT		13
#define HRTIM_TIMB_EEFBR1_EE3FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr1_ee3fltr EE3FLTR External Event 3 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR1_EE3LTCH External Event 3 latch **/
#define HRTIM_TIMB_EEFBR1_EE3LTCH		(1 << 12)

#define HRTIM_TIMB_EEFBR1_EE2FLTR_SHIFT		7
#define HRTIM_TIMB_EEFBR1_EE2FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr1_ee2fltr EE2FLTR External Event 2 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR1_EE2LTCH External Event 2 latch **/
#define HRTIM_TIMB_EEFBR1_EE2LTCH		(1 << 6)

#define HRTIM_TIMB_EEFBR1_EE1FLTR_SHIFT		1
#define HRTIM_TIMB_EEFBR1_EE1FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr1_ee1fltr EE1FLTR External Event 1 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR1_EE1LTCH External Event 1 latch **/
#define HRTIM_TIMB_EEFBR1_EE1LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_eefbr2 EEFBR2 Timerx External Event Filtering Register 2
@{*/


#define HRTIM_TIMB_EEFBR2_EE10FLTR_SHIFT		25
#define HRTIM_TIMB_EEFBR2_EE10FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr2_ee10fltr EE10FLTR External Event 10 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR2_EE10LTCH External Event 10 latch **/
#define HRTIM_TIMB_EEFBR2_EE10LTCH		(1 << 24)

#define HRTIM_TIMB_EEFBR2_EE9FLTR_SHIFT		19
#define HRTIM_TIMB_EEFBR2_EE9FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr2_ee9fltr EE9FLTR External Event 9 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR2_EE9LTCH External Event 9 latch **/
#define HRTIM_TIMB_EEFBR2_EE9LTCH		(1 << 18)

#define HRTIM_TIMB_EEFBR2_EE8FLTR_SHIFT		13
#define HRTIM_TIMB_EEFBR2_EE8FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr2_ee8fltr EE8FLTR External Event 8 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR2_EE8LTCH External Event 8 latch **/
#define HRTIM_TIMB_EEFBR2_EE8LTCH		(1 << 12)

#define HRTIM_TIMB_EEFBR2_EE7FLTR_SHIFT		7
#define HRTIM_TIMB_EEFBR2_EE7FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr2_ee7fltr EE7FLTR External Event 7 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR2_EE7LTCH External Event 7 latch **/
#define HRTIM_TIMB_EEFBR2_EE7LTCH		(1 << 6)

#define HRTIM_TIMB_EEFBR2_EE6FLTR_SHIFT		1
#define HRTIM_TIMB_EEFBR2_EE6FLTR_MASK		0x0f
/** @defgroup hrtim_timb_eefbr2_ee6fltr EE6FLTR External Event 6 filter
@{*/
/**@}*/

/** HRTIM_TIMB_EEFBR2_EE6LTCH External Event 6 latch **/
#define HRTIM_TIMB_EEFBR2_EE6LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_rstbr RSTBR TimerA Reset Register
@{*/

/** HRTIM_TIMB_RSTBR_TIMFCPM2 Timer F Compare 2 **/
#define HRTIM_TIMB_RSTBR_TIMFCPM2		(1 << 31)
/** HRTIM_TIMB_RSTBR_TIMECMP4 Timer E Compare 4 **/
#define HRTIM_TIMB_RSTBR_TIMECMP4		(1 << 30)
/** HRTIM_TIMB_RSTBR_TIMECMP2 Timer E Compare 2 **/
#define HRTIM_TIMB_RSTBR_TIMECMP2		(1 << 29)
/** HRTIM_TIMB_RSTBR_TIMECMP1 Timer E Compare 1 **/
#define HRTIM_TIMB_RSTBR_TIMECMP1		(1 << 28)
/** HRTIM_TIMB_RSTBR_TIMDCMP4 Timer D Compare 4 **/
#define HRTIM_TIMB_RSTBR_TIMDCMP4		(1 << 27)
/** HRTIM_TIMB_RSTBR_TIMDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMB_RSTBR_TIMDCMP2		(1 << 26)
/** HRTIM_TIMB_RSTBR_TIMDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMB_RSTBR_TIMDCMP1		(1 << 25)
/** HRTIM_TIMB_RSTBR_TIMCCMP4 Timer C Compare 4 **/
#define HRTIM_TIMB_RSTBR_TIMCCMP4		(1 << 24)
/** HRTIM_TIMB_RSTBR_TIMCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMB_RSTBR_TIMCCMP2		(1 << 23)
/** HRTIM_TIMB_RSTBR_TIMCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMB_RSTBR_TIMCCMP1		(1 << 22)
/** HRTIM_TIMB_RSTBR_TIMACMP4 Timer A Compare 4 **/
#define HRTIM_TIMB_RSTBR_TIMACMP4		(1 << 21)
/** HRTIM_TIMB_RSTBR_TIMACMP2 Timer A Compare 2 **/
#define HRTIM_TIMB_RSTBR_TIMACMP2		(1 << 20)
/** HRTIM_TIMB_RSTBR_TIMACMP1 Timer A Compare 1 **/
#define HRTIM_TIMB_RSTBR_TIMACMP1		(1 << 19)
/** HRTIM_TIMB_RSTBR_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT10		(1 << 18)
/** HRTIM_TIMB_RSTBR_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT9		(1 << 17)
/** HRTIM_TIMB_RSTBR_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT8		(1 << 16)
/** HRTIM_TIMB_RSTBR_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT7		(1 << 15)
/** HRTIM_TIMB_RSTBR_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT6		(1 << 14)
/** HRTIM_TIMB_RSTBR_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT5		(1 << 13)
/** HRTIM_TIMB_RSTBR_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT4		(1 << 12)
/** HRTIM_TIMB_RSTBR_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT3		(1 << 11)
/** HRTIM_TIMB_RSTBR_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT2		(1 << 10)
/** HRTIM_TIMB_RSTBR_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMB_RSTBR_EXTEVNT1		(1 << 9)
/** HRTIM_TIMB_RSTBR_MSTCMP4 Master compare 4 **/
#define HRTIM_TIMB_RSTBR_MSTCMP4		(1 << 8)
/** HRTIM_TIMB_RSTBR_MSTCMP3 Master compare 3 **/
#define HRTIM_TIMB_RSTBR_MSTCMP3		(1 << 7)
/** HRTIM_TIMB_RSTBR_MSTCMP2 Master compare 2 **/
#define HRTIM_TIMB_RSTBR_MSTCMP2		(1 << 6)
/** HRTIM_TIMB_RSTBR_MSTCMP1 Master compare 1 **/
#define HRTIM_TIMB_RSTBR_MSTCMP1		(1 << 5)
/** HRTIM_TIMB_RSTBR_MSTPER Master timer Period **/
#define HRTIM_TIMB_RSTBR_MSTPER		(1 << 4)
/** HRTIM_TIMB_RSTBR_CMP4 Timer A compare 4 reset **/
#define HRTIM_TIMB_RSTBR_CMP4		(1 << 3)
/** HRTIM_TIMB_RSTBR_CMP2 Timer A compare 2 reset **/
#define HRTIM_TIMB_RSTBR_CMP2		(1 << 2)
/** HRTIM_TIMB_RSTBR_UPDT Timer A Update reset **/
#define HRTIM_TIMB_RSTBR_UPDT		(1 << 1)
/** HRTIM_TIMB_RSTBR_TIMFCMP1 Timer A Update reset **/
#define HRTIM_TIMB_RSTBR_TIMFCMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_chpbr CHPBR Timerx Chopper Register
@{*/


#define HRTIM_TIMB_CHPBR_STRTPW_SHIFT		7
#define HRTIM_TIMB_CHPBR_STRTPW_MASK		0x0f
/** @defgroup hrtim_timb_chpbr_strtpw STRTPW STRTPW
@{*/
/**@}*/


#define HRTIM_TIMB_CHPBR_CHPDTY_SHIFT		4
#define HRTIM_TIMB_CHPBR_CHPDTY_MASK		0x07
/** @defgroup hrtim_timb_chpbr_chpdty CHPDTY Timerx chopper duty cycle value
@{*/
/**@}*/


#define HRTIM_TIMB_CHPBR_CHPFRQ_SHIFT		0
#define HRTIM_TIMB_CHPBR_CHPFRQ_MASK		0x0f
/** @defgroup hrtim_timb_chpbr_chpfrq CHPFRQ Timerx carrier frequency value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timb_cpt1bcr CPT1BCR Timerx Capture 2 Control Register
@{*/

/** HRTIM_TIMB_CPT1BCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMB_CPT1BCR_TECMP2		(1 << 31)
/** HRTIM_TIMB_CPT1BCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMB_CPT1BCR_TECMP1		(1 << 30)
/** HRTIM_TIMB_CPT1BCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMB_CPT1BCR_TE1RST		(1 << 29)
/** HRTIM_TIMB_CPT1BCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMB_CPT1BCR_TE1SET		(1 << 28)
/** HRTIM_TIMB_CPT1BCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMB_CPT1BCR_TDCMP2		(1 << 27)
/** HRTIM_TIMB_CPT1BCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMB_CPT1BCR_TDCMP1		(1 << 26)
/** HRTIM_TIMB_CPT1BCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMB_CPT1BCR_TD1RST		(1 << 25)
/** HRTIM_TIMB_CPT1BCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMB_CPT1BCR_TD1SET		(1 << 24)
/** HRTIM_TIMB_CPT1BCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMB_CPT1BCR_TCCMP2		(1 << 23)
/** HRTIM_TIMB_CPT1BCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMB_CPT1BCR_TCCMP1		(1 << 22)
/** HRTIM_TIMB_CPT1BCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMB_CPT1BCR_TC1RST		(1 << 21)
/** HRTIM_TIMB_CPT1BCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMB_CPT1BCR_TC1SET		(1 << 20)
/** HRTIM_TIMB_CPT1BCR_TFCMP2 TFCMP2 **/
#define HRTIM_TIMB_CPT1BCR_TFCMP2		(1 << 19)
/** HRTIM_TIMB_CPT1BCR_TFCMP1 TFCMP1 **/
#define HRTIM_TIMB_CPT1BCR_TFCMP1		(1 << 18)
/** HRTIM_TIMB_CPT1BCR_TF1RST TF1RST **/
#define HRTIM_TIMB_CPT1BCR_TF1RST		(1 << 17)
/** HRTIM_TIMB_CPT1BCR_TF1SET TF1SET **/
#define HRTIM_TIMB_CPT1BCR_TF1SET		(1 << 16)
/** HRTIM_TIMB_CPT1BCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMB_CPT1BCR_TACMP2		(1 << 15)
/** HRTIM_TIMB_CPT1BCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMB_CPT1BCR_TACMP1		(1 << 14)
/** HRTIM_TIMB_CPT1BCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMB_CPT1BCR_TA1RST		(1 << 13)
/** HRTIM_TIMB_CPT1BCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMB_CPT1BCR_TA1SET		(1 << 12)
/** HRTIM_TIMB_CPT1BCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMB_CPT1BCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMB_CPT1BCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMB_CPT1BCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMB_CPT1BCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMB_CPT1BCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMB_CPT1BCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMB_CPT1BCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMB_CPT1BCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMB_CPT1BCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMB_CPT1BCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMB_CPT1BCR_UDPCPT Update Capture **/
#define HRTIM_TIMB_CPT1BCR_UDPCPT		(1 << 1)
/** HRTIM_TIMB_CPT1BCR_SWCPT Software Capture **/
#define HRTIM_TIMB_CPT1BCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_cpt2bcr CPT2BCR CPT2xCR
@{*/

/** HRTIM_TIMB_CPT2BCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMB_CPT2BCR_TECMP2		(1 << 31)
/** HRTIM_TIMB_CPT2BCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMB_CPT2BCR_TECMP1		(1 << 30)
/** HRTIM_TIMB_CPT2BCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMB_CPT2BCR_TE1RST		(1 << 29)
/** HRTIM_TIMB_CPT2BCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMB_CPT2BCR_TE1SET		(1 << 28)
/** HRTIM_TIMB_CPT2BCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMB_CPT2BCR_TDCMP2		(1 << 27)
/** HRTIM_TIMB_CPT2BCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMB_CPT2BCR_TDCMP1		(1 << 26)
/** HRTIM_TIMB_CPT2BCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMB_CPT2BCR_TD1RST		(1 << 25)
/** HRTIM_TIMB_CPT2BCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMB_CPT2BCR_TD1SET		(1 << 24)
/** HRTIM_TIMB_CPT2BCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMB_CPT2BCR_TCCMP2		(1 << 23)
/** HRTIM_TIMB_CPT2BCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMB_CPT2BCR_TCCMP1		(1 << 22)
/** HRTIM_TIMB_CPT2BCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMB_CPT2BCR_TC1RST		(1 << 21)
/** HRTIM_TIMB_CPT2BCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMB_CPT2BCR_TC1SET		(1 << 20)
/** HRTIM_TIMB_CPT2BCR_TFCMP2 TFCMP2 **/
#define HRTIM_TIMB_CPT2BCR_TFCMP2		(1 << 19)
/** HRTIM_TIMB_CPT2BCR_TFCMP1 TFCMP1 **/
#define HRTIM_TIMB_CPT2BCR_TFCMP1		(1 << 18)
/** HRTIM_TIMB_CPT2BCR_TF1RST TF1RST **/
#define HRTIM_TIMB_CPT2BCR_TF1RST		(1 << 17)
/** HRTIM_TIMB_CPT2BCR_TF1SET TF1SET **/
#define HRTIM_TIMB_CPT2BCR_TF1SET		(1 << 16)
/** HRTIM_TIMB_CPT2BCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMB_CPT2BCR_TACMP2		(1 << 15)
/** HRTIM_TIMB_CPT2BCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMB_CPT2BCR_TACMP1		(1 << 14)
/** HRTIM_TIMB_CPT2BCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMB_CPT2BCR_TA1RST		(1 << 13)
/** HRTIM_TIMB_CPT2BCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMB_CPT2BCR_TA1SET		(1 << 12)
/** HRTIM_TIMB_CPT2BCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMB_CPT2BCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMB_CPT2BCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMB_CPT2BCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMB_CPT2BCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMB_CPT2BCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMB_CPT2BCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMB_CPT2BCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMB_CPT2BCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMB_CPT2BCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMB_CPT2BCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMB_CPT2BCR_UDPCPT Update Capture **/
#define HRTIM_TIMB_CPT2BCR_UDPCPT		(1 << 1)
/** HRTIM_TIMB_CPT2BCR_SWCPT Software Capture **/
#define HRTIM_TIMB_CPT2BCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_outbr OUTBR Timerx Output Register
@{*/

/** HRTIM_TIMB_OUTBR_DIDL2 Output 2 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMB_OUTBR_DIDL2		(1 << 23)
/** HRTIM_TIMB_OUTBR_CHP2 Output 2 Chopper enable **/
#define HRTIM_TIMB_OUTBR_CHP2		(1 << 22)

#define HRTIM_TIMB_OUTBR_FAULT2_SHIFT		20
#define HRTIM_TIMB_OUTBR_FAULT2_MASK		0x03
/** @defgroup hrtim_timb_outbr_fault2 FAULT2 Output 2 Fault state
@{*/
/**@}*/

/** HRTIM_TIMB_OUTBR_IDLES2 Output 2 Idle State **/
#define HRTIM_TIMB_OUTBR_IDLES2		(1 << 19)
/** HRTIM_TIMB_OUTBR_IDLEM2 Output 2 Idle mode **/
#define HRTIM_TIMB_OUTBR_IDLEM2		(1 << 18)
/** HRTIM_TIMB_OUTBR_POL2 Output 2 polarity **/
#define HRTIM_TIMB_OUTBR_POL2		(1 << 17)
/** HRTIM_TIMB_OUTBR_BIAR Balanced Idle Automatic Resume **/
#define HRTIM_TIMB_OUTBR_BIAR		(1 << 14)

#define HRTIM_TIMB_OUTBR_DLYPRT_SHIFT		10
#define HRTIM_TIMB_OUTBR_DLYPRT_MASK		0x07
/** @defgroup hrtim_timb_outbr_dlyprt DLYPRT Delayed Protection
@{*/
/**@}*/

/** HRTIM_TIMB_OUTBR_DLYPRTEN Delayed Protection Enable **/
#define HRTIM_TIMB_OUTBR_DLYPRTEN		(1 << 9)
/** HRTIM_TIMB_OUTBR_DTEN Deadtime enable **/
#define HRTIM_TIMB_OUTBR_DTEN		(1 << 8)
/** HRTIM_TIMB_OUTBR_DIDL1 Output 1 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMB_OUTBR_DIDL1		(1 << 7)
/** HRTIM_TIMB_OUTBR_CHP1 Output 1 Chopper enable **/
#define HRTIM_TIMB_OUTBR_CHP1		(1 << 6)

#define HRTIM_TIMB_OUTBR_FAULT1_SHIFT		4
#define HRTIM_TIMB_OUTBR_FAULT1_MASK		0x03
/** @defgroup hrtim_timb_outbr_fault1 FAULT1 Output 1 Fault state
@{*/
/**@}*/

/** HRTIM_TIMB_OUTBR_IDLES1 Output 1 Idle State **/
#define HRTIM_TIMB_OUTBR_IDLES1		(1 << 3)
/** HRTIM_TIMB_OUTBR_IDLEM1 Output 1 Idle mode **/
#define HRTIM_TIMB_OUTBR_IDLEM1		(1 << 2)
/** HRTIM_TIMB_OUTBR_POL1 Output 1 polarity **/
#define HRTIM_TIMB_OUTBR_POL1		(1 << 1)

/**@}*/

/** @defgroup hrtim_timb_fltbr FLTBR Timerx Fault Register
@{*/

/** HRTIM_TIMB_FLTBR_FLTLCK Fault sources Lock **/
#define HRTIM_TIMB_FLTBR_FLTLCK		(1 << 31)
/** HRTIM_TIMB_FLTBR_FLT6EN Fault 6 enable **/
#define HRTIM_TIMB_FLTBR_FLT6EN		(1 << 5)
/** HRTIM_TIMB_FLTBR_FLT5EN Fault 5 enable **/
#define HRTIM_TIMB_FLTBR_FLT5EN		(1 << 4)
/** HRTIM_TIMB_FLTBR_FLT4EN Fault 4 enable **/
#define HRTIM_TIMB_FLTBR_FLT4EN		(1 << 3)
/** HRTIM_TIMB_FLTBR_FLT3EN Fault 3 enable **/
#define HRTIM_TIMB_FLTBR_FLT3EN		(1 << 2)
/** HRTIM_TIMB_FLTBR_FLT2EN Fault 2 enable **/
#define HRTIM_TIMB_FLTBR_FLT2EN		(1 << 1)
/** HRTIM_TIMB_FLTBR_FLT1EN Fault 1 enable **/
#define HRTIM_TIMB_FLTBR_FLT1EN		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_timbcr2 TIMBCR2 HRTIM Timerx Control Register 2
@{*/

/** HRTIM_TIMB_TIMBCR2_TRGHLF Triggered-half mode **/
#define HRTIM_TIMB_TIMBCR2_TRGHLF		(1 << 20)
/** HRTIM_TIMB_TIMBCR2_GTCMP3 Greater than Compare 3 PWM mode **/
#define HRTIM_TIMB_TIMBCR2_GTCMP3		(1 << 17)
/** HRTIM_TIMB_TIMBCR2_GTCMP1 Greater than Compare 1 PWM mode **/
#define HRTIM_TIMB_TIMBCR2_GTCMP1		(1 << 16)

#define HRTIM_TIMB_TIMBCR2_FEROM_SHIFT		14
#define HRTIM_TIMB_TIMBCR2_FEROM_MASK		0x03
/** @defgroup hrtim_timb_timbcr2_ferom FEROM Fault and Event Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMB_TIMBCR2_BMROM_SHIFT		12
#define HRTIM_TIMB_TIMBCR2_BMROM_MASK		0x03
/** @defgroup hrtim_timb_timbcr2_bmrom BMROM Burst Mode Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMB_TIMBCR2_ADROM_SHIFT		10
#define HRTIM_TIMB_TIMBCR2_ADROM_MASK		0x03
/** @defgroup hrtim_timb_timbcr2_adrom ADROM ADC Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMB_TIMBCR2_OUTROM_SHIFT		8
#define HRTIM_TIMB_TIMBCR2_OUTROM_MASK		0x03
/** @defgroup hrtim_timb_timbcr2_outrom OUTROM Output Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMB_TIMBCR2_ROM_SHIFT		6
#define HRTIM_TIMB_TIMBCR2_ROM_MASK		0x03
/** @defgroup hrtim_timb_timbcr2_rom ROM Roll-Over Mode
@{*/
/**@}*/

/** HRTIM_TIMB_TIMBCR2_UDM Up-Down Mode **/
#define HRTIM_TIMB_TIMBCR2_UDM		(1 << 4)
/** HRTIM_TIMB_TIMBCR2_DCDR Dual Channel DAC Reset trigger **/
#define HRTIM_TIMB_TIMBCR2_DCDR		(1 << 2)
/** HRTIM_TIMB_TIMBCR2_DCDS Dual Channel DAC Step trigger **/
#define HRTIM_TIMB_TIMBCR2_DCDS		(1 << 1)
/** HRTIM_TIMB_TIMBCR2_DCDE Dual Channel DAC trigger enable **/
#define HRTIM_TIMB_TIMBCR2_DCDE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timb_beefr3 BEEFR3 HRTIM Timerx External Event Filtering Register 3
@{*/


#define HRTIM_TIMB_BEEFR3_EEVACNT_SHIFT		8
#define HRTIM_TIMB_BEEFR3_EEVACNT_MASK		0x3f
/** @defgroup hrtim_timb_beefr3_eevacnt EEVACNT External Event A counter
@{*/
/**@}*/


#define HRTIM_TIMB_BEEFR3_EEVASEL_SHIFT		4
#define HRTIM_TIMB_BEEFR3_EEVASEL_MASK		0x0f
/** @defgroup hrtim_timb_beefr3_eevasel EEVASEL External Event A Selection
@{*/
/**@}*/

/** HRTIM_TIMB_BEEFR3_EEVARSTM External Event A Reset Mode **/
#define HRTIM_TIMB_BEEFR3_EEVARSTM		(1 << 2)
/** HRTIM_TIMB_BEEFR3_EEVACRES External Event A Counter Reset **/
#define HRTIM_TIMB_BEEFR3_EEVACRES		(1 << 1)
/** HRTIM_TIMB_BEEFR3_EEVACE External Event A Counter Enable **/
#define HRTIM_TIMB_BEEFR3_EEVACE		(1 << 0)

/**@}*/

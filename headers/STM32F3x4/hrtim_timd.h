#pragma once 

/* --- HRTIM_TIMD: High Resolution Timer: TIMD ---------------------- */

/** @defgroup hrtim_timd_registers High Resolution Timer: TIMD Register
@{*/

/** HRTIM_TIMD_TIMDCR Timerx Control Register **/
#define HRTIM_TIMD_TIMDCR			MMIO32(HRTIM_TIMD_BASE + 0x00)
/** HRTIM_TIMD_TIMDISR Timerx Interrupt Status Register **/
#define HRTIM_TIMD_TIMDISR			MMIO32(HRTIM_TIMD_BASE + 0x04)
/** HRTIM_TIMD_TIMDICR Timerx Interrupt Clear Register **/
#define HRTIM_TIMD_TIMDICR			MMIO32(HRTIM_TIMD_BASE + 0x08)
/** HRTIM_TIMD_TIMDDIER5 TIMxDIER5 **/
#define HRTIM_TIMD_TIMDDIER5			MMIO32(HRTIM_TIMD_BASE + 0x0c)
/** HRTIM_TIMD_CNTDR Timerx Counter Register **/
#define HRTIM_TIMD_CNTDR			MMIO32(HRTIM_TIMD_BASE + 0x10)
/** HRTIM_TIMD_PERDR Timerx Period Register **/
#define HRTIM_TIMD_PERDR			MMIO32(HRTIM_TIMD_BASE + 0x14)
/** HRTIM_TIMD_REPDR Timerx Repetition Register **/
#define HRTIM_TIMD_REPDR			MMIO32(HRTIM_TIMD_BASE + 0x18)
/** HRTIM_TIMD_CMP1DR Timerx Compare 1 Register **/
#define HRTIM_TIMD_CMP1DR			MMIO32(HRTIM_TIMD_BASE + 0x1c)
/** HRTIM_TIMD_CMP1CDR Timerx Compare 1 Compound Register **/
#define HRTIM_TIMD_CMP1CDR			MMIO32(HRTIM_TIMD_BASE + 0x20)
/** HRTIM_TIMD_CMP2DR Timerx Compare 2 Register **/
#define HRTIM_TIMD_CMP2DR			MMIO32(HRTIM_TIMD_BASE + 0x24)
/** HRTIM_TIMD_CMP3DR Timerx Compare 3 Register **/
#define HRTIM_TIMD_CMP3DR			MMIO32(HRTIM_TIMD_BASE + 0x28)
/** HRTIM_TIMD_CMP4DR Timerx Compare 4 Register **/
#define HRTIM_TIMD_CMP4DR			MMIO32(HRTIM_TIMD_BASE + 0x2c)
/** HRTIM_TIMD_CPT1DR Timerx Capture 1 Register **/
#define HRTIM_TIMD_CPT1DR			MMIO32(HRTIM_TIMD_BASE + 0x30)
/** HRTIM_TIMD_CPT2DR Timerx Capture 2 Register **/
#define HRTIM_TIMD_CPT2DR			MMIO32(HRTIM_TIMD_BASE + 0x34)
/** HRTIM_TIMD_DTDR Timerx Deadtime Register **/
#define HRTIM_TIMD_DTDR			MMIO32(HRTIM_TIMD_BASE + 0x38)
/** HRTIM_TIMD_SETD1R Timerx Output1 Set Register **/
#define HRTIM_TIMD_SETD1R			MMIO32(HRTIM_TIMD_BASE + 0x3c)
/** HRTIM_TIMD_RSTD1R Timerx Output1 Reset Register **/
#define HRTIM_TIMD_RSTD1R			MMIO32(HRTIM_TIMD_BASE + 0x40)
/** HRTIM_TIMD_SETD2R Timerx Output2 Set Register **/
#define HRTIM_TIMD_SETD2R			MMIO32(HRTIM_TIMD_BASE + 0x44)
/** HRTIM_TIMD_RSTD2R Timerx Output2 Reset Register **/
#define HRTIM_TIMD_RSTD2R			MMIO32(HRTIM_TIMD_BASE + 0x48)
/** HRTIM_TIMD_EEFDR1 Timerx External Event Filtering Register 1 **/
#define HRTIM_TIMD_EEFDR1			MMIO32(HRTIM_TIMD_BASE + 0x4c)
/** HRTIM_TIMD_EEFDR2 Timerx External Event Filtering Register 2 **/
#define HRTIM_TIMD_EEFDR2			MMIO32(HRTIM_TIMD_BASE + 0x50)
/** HRTIM_TIMD_RSTDR TimerA Reset Register **/
#define HRTIM_TIMD_RSTDR			MMIO32(HRTIM_TIMD_BASE + 0x54)
/** HRTIM_TIMD_CHPDR Timerx Chopper Register **/
#define HRTIM_TIMD_CHPDR			MMIO32(HRTIM_TIMD_BASE + 0x58)
/** HRTIM_TIMD_CPT1DCR Timerx Capture 2 Control Register **/
#define HRTIM_TIMD_CPT1DCR			MMIO32(HRTIM_TIMD_BASE + 0x5c)
/** HRTIM_TIMD_CPT2DCR CPT2xCR **/
#define HRTIM_TIMD_CPT2DCR			MMIO32(HRTIM_TIMD_BASE + 0x60)
/** HRTIM_TIMD_OUTDR Timerx Output Register **/
#define HRTIM_TIMD_OUTDR			MMIO32(HRTIM_TIMD_BASE + 0x64)
/** HRTIM_TIMD_FLTDR Timerx Fault Register **/
#define HRTIM_TIMD_FLTDR			MMIO32(HRTIM_TIMD_BASE + 0x68)

/**@}*/


/** @defgroup hrtim_timd_timdcr TIMDCR Timerx Control Register
@{*/


#define HRTIM_TIMD_TIMDCR_UPDGAT_SHIFT		28
#define HRTIM_TIMD_TIMDCR_UPDGAT_MASK		0x0f
/** @defgroup hrtim_timd_timdcr_updgat UPDGAT Update Gating
@{*/
/**@}*/

/** HRTIM_TIMD_TIMDCR_PREEN Preload enable **/
#define HRTIM_TIMD_TIMDCR_PREEN		(1 << 27)

#define HRTIM_TIMD_TIMDCR_DACSYNC_SHIFT		25
#define HRTIM_TIMD_TIMDCR_DACSYNC_MASK		0x03
/** @defgroup hrtim_timd_timdcr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_TIMD_TIMDCR_MSTU Master Timer update **/
#define HRTIM_TIMD_TIMDCR_MSTU		(1 << 24)
/** HRTIM_TIMD_TIMDCR_TEU TEU **/
#define HRTIM_TIMD_TIMDCR_TEU		(1 << 23)
/** HRTIM_TIMD_TIMDCR_TDU TDU **/
#define HRTIM_TIMD_TIMDCR_TDU		(1 << 22)
/** HRTIM_TIMD_TIMDCR_TCU TCU **/
#define HRTIM_TIMD_TIMDCR_TCU		(1 << 21)
/** HRTIM_TIMD_TIMDCR_TBU TBU **/
#define HRTIM_TIMD_TIMDCR_TBU		(1 << 20)
/** HRTIM_TIMD_TIMDCR_TxRSTU Timerx reset update **/
#define HRTIM_TIMD_TIMDCR_TxRSTU		(1 << 18)
/** HRTIM_TIMD_TIMDCR_TxREPU Timer x Repetition update **/
#define HRTIM_TIMD_TIMDCR_TxREPU		(1 << 17)

#define HRTIM_TIMD_TIMDCR_DELCMP4_SHIFT		14
#define HRTIM_TIMD_TIMDCR_DELCMP4_MASK		0x03
/** @defgroup hrtim_timd_timdcr_delcmp4 DELCMP4 Delayed CMP4 mode
@{*/
/**@}*/


#define HRTIM_TIMD_TIMDCR_DELCMP2_SHIFT		12
#define HRTIM_TIMD_TIMDCR_DELCMP2_MASK		0x03
/** @defgroup hrtim_timd_timdcr_delcmp2 DELCMP2 Delayed CMP2 mode
@{*/
/**@}*/

/** HRTIM_TIMD_TIMDCR_SYNCSTRTx Synchronization Starts Timer x **/
#define HRTIM_TIMD_TIMDCR_SYNCSTRTx		(1 << 11)
/** HRTIM_TIMD_TIMDCR_SYNCRSTx Synchronization Resets Timer x **/
#define HRTIM_TIMD_TIMDCR_SYNCRSTx		(1 << 10)
/** HRTIM_TIMD_TIMDCR_PSHPLL Push-Pull mode enable **/
#define HRTIM_TIMD_TIMDCR_PSHPLL		(1 << 6)
/** HRTIM_TIMD_TIMDCR_HALF Half mode enable **/
#define HRTIM_TIMD_TIMDCR_HALF		(1 << 5)
/** HRTIM_TIMD_TIMDCR_RETRIG Re-triggerable mode **/
#define HRTIM_TIMD_TIMDCR_RETRIG		(1 << 4)
/** HRTIM_TIMD_TIMDCR_CONT Continuous mode **/
#define HRTIM_TIMD_TIMDCR_CONT		(1 << 3)

#define HRTIM_TIMD_TIMDCR_CK_PSCx_SHIFT		0
#define HRTIM_TIMD_TIMDCR_CK_PSCx_MASK		0x07
/** @defgroup hrtim_timd_timdcr_ck_pscx CKPSCx HRTIM Timer x Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_timdisr TIMDISR Timerx Interrupt Status Register
@{*/

/** HRTIM_TIMD_TIMDISR_O2CPY Output 2 Copy **/
#define HRTIM_TIMD_TIMDISR_O2CPY		(1 << 21)
/** HRTIM_TIMD_TIMDISR_O1CPY Output 1 Copy **/
#define HRTIM_TIMD_TIMDISR_O1CPY		(1 << 20)
/** HRTIM_TIMD_TIMDISR_O2STAT Output 2 State **/
#define HRTIM_TIMD_TIMDISR_O2STAT		(1 << 19)
/** HRTIM_TIMD_TIMDISR_O1STAT Output 1 State **/
#define HRTIM_TIMD_TIMDISR_O1STAT		(1 << 18)
/** HRTIM_TIMD_TIMDISR_IPPSTAT Idle Push Pull Status **/
#define HRTIM_TIMD_TIMDISR_IPPSTAT		(1 << 17)
/** HRTIM_TIMD_TIMDISR_CPPSTAT Current Push Pull Status **/
#define HRTIM_TIMD_TIMDISR_CPPSTAT		(1 << 16)
/** HRTIM_TIMD_TIMDISR_DLYPRT Delayed Protection Flag **/
#define HRTIM_TIMD_TIMDISR_DLYPRT		(1 << 14)
/** HRTIM_TIMD_TIMDISR_RST Reset Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_RST		(1 << 13)
/** HRTIM_TIMD_TIMDISR_RSTx2 Output 2 Reset Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_RSTx2		(1 << 12)
/** HRTIM_TIMD_TIMDISR_SETx2 Output 2 Set Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_SETx2		(1 << 11)
/** HRTIM_TIMD_TIMDISR_RSTx1 Output 1 Reset Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_RSTx1		(1 << 10)
/** HRTIM_TIMD_TIMDISR_SETx1 Output 1 Set Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_SETx1		(1 << 9)
/** HRTIM_TIMD_TIMDISR_CPT2 Capture2 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CPT2		(1 << 8)
/** HRTIM_TIMD_TIMDISR_CPT1 Capture1 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CPT1		(1 << 7)
/** HRTIM_TIMD_TIMDISR_UPD Update Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_UPD		(1 << 6)
/** HRTIM_TIMD_TIMDISR_REP Repetition Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_REP		(1 << 4)
/** HRTIM_TIMD_TIMDISR_CMP4 Compare 4 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CMP4		(1 << 3)
/** HRTIM_TIMD_TIMDISR_CMP3 Compare 3 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CMP3		(1 << 2)
/** HRTIM_TIMD_TIMDISR_CMP2 Compare 2 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CMP2		(1 << 1)
/** HRTIM_TIMD_TIMDISR_CMP1 Compare 1 Interrupt Flag **/
#define HRTIM_TIMD_TIMDISR_CMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_timdicr TIMDICR Timerx Interrupt Clear Register
@{*/

/** HRTIM_TIMD_TIMDICR_DLYPRTC Delayed Protection Flag Clear **/
#define HRTIM_TIMD_TIMDICR_DLYPRTC		(1 << 14)
/** HRTIM_TIMD_TIMDICR_RSTC Reset Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_RSTC		(1 << 13)
/** HRTIM_TIMD_TIMDICR_RSTx2C Output 2 Reset flag Clear **/
#define HRTIM_TIMD_TIMDICR_RSTx2C		(1 << 12)
/** HRTIM_TIMD_TIMDICR_SET2xC Output 2 Set flag Clear **/
#define HRTIM_TIMD_TIMDICR_SET2xC		(1 << 11)
/** HRTIM_TIMD_TIMDICR_RSTx1C Output 1 Reset flag Clear **/
#define HRTIM_TIMD_TIMDICR_RSTx1C		(1 << 10)
/** HRTIM_TIMD_TIMDICR_SET1xC Output 1 Set flag Clear **/
#define HRTIM_TIMD_TIMDICR_SET1xC		(1 << 9)
/** HRTIM_TIMD_TIMDICR_CPT2C Capture2 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CPT2C		(1 << 8)
/** HRTIM_TIMD_TIMDICR_CPT1C Capture1 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CPT1C		(1 << 7)
/** HRTIM_TIMD_TIMDICR_UPDC Update Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_UPDC		(1 << 6)
/** HRTIM_TIMD_TIMDICR_REPC Repetition Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_REPC		(1 << 4)
/** HRTIM_TIMD_TIMDICR_CMP4C Compare 4 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CMP4C		(1 << 3)
/** HRTIM_TIMD_TIMDICR_CMP3C Compare 3 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CMP3C		(1 << 2)
/** HRTIM_TIMD_TIMDICR_CMP2C Compare 2 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CMP2C		(1 << 1)
/** HRTIM_TIMD_TIMDICR_CMP1C Compare 1 Interrupt flag Clear **/
#define HRTIM_TIMD_TIMDICR_CMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_timddier5 TIMDDIER5 TIMxDIER5
@{*/

/** HRTIM_TIMD_TIMDDIER5_DLYPRTDE DLYPRTDE **/
#define HRTIM_TIMD_TIMDDIER5_DLYPRTDE		(1 << 30)
/** HRTIM_TIMD_TIMDDIER5_RSTDE RSTDE **/
#define HRTIM_TIMD_TIMDDIER5_RSTDE		(1 << 29)
/** HRTIM_TIMD_TIMDDIER5_RSTx2DE RSTx2DE **/
#define HRTIM_TIMD_TIMDDIER5_RSTx2DE		(1 << 28)
/** HRTIM_TIMD_TIMDDIER5_SETx2DE SETx2DE **/
#define HRTIM_TIMD_TIMDDIER5_SETx2DE		(1 << 27)
/** HRTIM_TIMD_TIMDDIER5_RSTx1DE RSTx1DE **/
#define HRTIM_TIMD_TIMDDIER5_RSTx1DE		(1 << 26)
/** HRTIM_TIMD_TIMDDIER5_SET1xDE SET1xDE **/
#define HRTIM_TIMD_TIMDDIER5_SET1xDE		(1 << 25)
/** HRTIM_TIMD_TIMDDIER5_CPT2DE CPT2DE **/
#define HRTIM_TIMD_TIMDDIER5_CPT2DE		(1 << 24)
/** HRTIM_TIMD_TIMDDIER5_CPT1DE CPT1DE **/
#define HRTIM_TIMD_TIMDDIER5_CPT1DE		(1 << 23)
/** HRTIM_TIMD_TIMDDIER5_UPDDE UPDDE **/
#define HRTIM_TIMD_TIMDDIER5_UPDDE		(1 << 22)
/** HRTIM_TIMD_TIMDDIER5_REPDE REPDE **/
#define HRTIM_TIMD_TIMDDIER5_REPDE		(1 << 20)
/** HRTIM_TIMD_TIMDDIER5_CMP4DE CMP4DE **/
#define HRTIM_TIMD_TIMDDIER5_CMP4DE		(1 << 19)
/** HRTIM_TIMD_TIMDDIER5_CMP3DE CMP3DE **/
#define HRTIM_TIMD_TIMDDIER5_CMP3DE		(1 << 18)
/** HRTIM_TIMD_TIMDDIER5_CMP2DE CMP2DE **/
#define HRTIM_TIMD_TIMDDIER5_CMP2DE		(1 << 17)
/** HRTIM_TIMD_TIMDDIER5_CMP1DE CMP1DE **/
#define HRTIM_TIMD_TIMDDIER5_CMP1DE		(1 << 16)
/** HRTIM_TIMD_TIMDDIER5_DLYPRTIE DLYPRTIE **/
#define HRTIM_TIMD_TIMDDIER5_DLYPRTIE		(1 << 14)
/** HRTIM_TIMD_TIMDDIER5_RSTIE RSTIE **/
#define HRTIM_TIMD_TIMDDIER5_RSTIE		(1 << 13)
/** HRTIM_TIMD_TIMDDIER5_RSTx2IE RSTx2IE **/
#define HRTIM_TIMD_TIMDDIER5_RSTx2IE		(1 << 12)
/** HRTIM_TIMD_TIMDDIER5_SETx2IE SETx2IE **/
#define HRTIM_TIMD_TIMDDIER5_SETx2IE		(1 << 11)
/** HRTIM_TIMD_TIMDDIER5_RSTx1IE RSTx1IE **/
#define HRTIM_TIMD_TIMDDIER5_RSTx1IE		(1 << 10)
/** HRTIM_TIMD_TIMDDIER5_SET1xIE SET1xIE **/
#define HRTIM_TIMD_TIMDDIER5_SET1xIE		(1 << 9)
/** HRTIM_TIMD_TIMDDIER5_CPT2IE CPT2IE **/
#define HRTIM_TIMD_TIMDDIER5_CPT2IE		(1 << 8)
/** HRTIM_TIMD_TIMDDIER5_CPT1IE CPT1IE **/
#define HRTIM_TIMD_TIMDDIER5_CPT1IE		(1 << 7)
/** HRTIM_TIMD_TIMDDIER5_UPDIE UPDIE **/
#define HRTIM_TIMD_TIMDDIER5_UPDIE		(1 << 6)
/** HRTIM_TIMD_TIMDDIER5_REPIE REPIE **/
#define HRTIM_TIMD_TIMDDIER5_REPIE		(1 << 4)
/** HRTIM_TIMD_TIMDDIER5_CMP4IE CMP4IE **/
#define HRTIM_TIMD_TIMDDIER5_CMP4IE		(1 << 3)
/** HRTIM_TIMD_TIMDDIER5_CMP3IE CMP3IE **/
#define HRTIM_TIMD_TIMDDIER5_CMP3IE		(1 << 2)
/** HRTIM_TIMD_TIMDDIER5_CMP2IE CMP2IE **/
#define HRTIM_TIMD_TIMDDIER5_CMP2IE		(1 << 1)
/** HRTIM_TIMD_TIMDDIER5_CMP1IE CMP1IE **/
#define HRTIM_TIMD_TIMDDIER5_CMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_cntdr CNTDR Timerx Counter Register
@{*/


#define HRTIM_TIMD_CNTDR_CNTx_SHIFT		0
#define HRTIM_TIMD_CNTDR_CNTx_MASK		0xffff
/** @defgroup hrtim_timd_cntdr_cntx CNTx Timerx Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_perdr PERDR Timerx Period Register
@{*/


#define HRTIM_TIMD_PERDR_PERx_SHIFT		0
#define HRTIM_TIMD_PERDR_PERx_MASK		0xffff
/** @defgroup hrtim_timd_perdr_perx PERx Timerx Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_repdr REPDR Timerx Repetition Register
@{*/


#define HRTIM_TIMD_REPDR_REPx_SHIFT		0
#define HRTIM_TIMD_REPDR_REPx_MASK		0xff
/** @defgroup hrtim_timd_repdr_repx REPx Timerx Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cmp1dr CMP1DR Timerx Compare 1 Register
@{*/


#define HRTIM_TIMD_CMP1DR_CMP1x_SHIFT		0
#define HRTIM_TIMD_CMP1DR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timd_cmp1dr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cmp1cdr CMP1CDR Timerx Compare 1 Compound Register
@{*/


#define HRTIM_TIMD_CMP1CDR_REPx_SHIFT		16
#define HRTIM_TIMD_CMP1CDR_REPx_MASK		0xff
/** @defgroup hrtim_timd_cmp1cdr_repx REPx Timerx Repetition value (aliased from HRTIM_REPx register)
@{*/
/**@}*/


#define HRTIM_TIMD_CMP1CDR_CMP1x_SHIFT		0
#define HRTIM_TIMD_CMP1CDR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timd_cmp1cdr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cmp2dr CMP2DR Timerx Compare 2 Register
@{*/


#define HRTIM_TIMD_CMP2DR_CMP2x_SHIFT		0
#define HRTIM_TIMD_CMP2DR_CMP2x_MASK		0xffff
/** @defgroup hrtim_timd_cmp2dr_cmp2x CMP2x Timerx Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cmp3dr CMP3DR Timerx Compare 3 Register
@{*/


#define HRTIM_TIMD_CMP3DR_CMP3x_SHIFT		0
#define HRTIM_TIMD_CMP3DR_CMP3x_MASK		0xffff
/** @defgroup hrtim_timd_cmp3dr_cmp3x CMP3x Timerx Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cmp4dr CMP4DR Timerx Compare 4 Register
@{*/


#define HRTIM_TIMD_CMP4DR_CMP4x_SHIFT		0
#define HRTIM_TIMD_CMP4DR_CMP4x_MASK		0xffff
/** @defgroup hrtim_timd_cmp4dr_cmp4x CMP4x Timerx Compare 4 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cpt1dr CPT1DR Timerx Capture 1 Register
@{*/


#define HRTIM_TIMD_CPT1DR_CPT1x_SHIFT		0
#define HRTIM_TIMD_CPT1DR_CPT1x_MASK		0xffff
/** @defgroup hrtim_timd_cpt1dr_cpt1x CPT1x Timerx Capture 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cpt2dr CPT2DR Timerx Capture 2 Register
@{*/


#define HRTIM_TIMD_CPT2DR_CPT2x_SHIFT		0
#define HRTIM_TIMD_CPT2DR_CPT2x_MASK		0xffff
/** @defgroup hrtim_timd_cpt2dr_cpt2x CPT2x Timerx Capture 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_dtdr DTDR Timerx Deadtime Register
@{*/

/** HRTIM_TIMD_DTDR_DTFLKx Deadtime Falling Lock **/
#define HRTIM_TIMD_DTDR_DTFLKx		(1 << 31)
/** HRTIM_TIMD_DTDR_DTFSLKx Deadtime Falling Sign Lock **/
#define HRTIM_TIMD_DTDR_DTFSLKx		(1 << 30)
/** HRTIM_TIMD_DTDR_SDTFx Sign Deadtime Falling value **/
#define HRTIM_TIMD_DTDR_SDTFx		(1 << 25)

#define HRTIM_TIMD_DTDR_DTFx_SHIFT		16
#define HRTIM_TIMD_DTDR_DTFx_MASK		0x1ff
/** @defgroup hrtim_timd_dtdr_dtfx DTFx Deadtime Falling value
@{*/
/**@}*/

/** HRTIM_TIMD_DTDR_DTRLKx Deadtime Rising Lock **/
#define HRTIM_TIMD_DTDR_DTRLKx		(1 << 15)
/** HRTIM_TIMD_DTDR_DTRSLKx Deadtime Rising Sign Lock **/
#define HRTIM_TIMD_DTDR_DTRSLKx		(1 << 14)

#define HRTIM_TIMD_DTDR_DTPRSC_SHIFT		10
#define HRTIM_TIMD_DTDR_DTPRSC_MASK		0x07
/** @defgroup hrtim_timd_dtdr_dtprsc DTPRSC Deadtime Prescaler
@{*/
/**@}*/

/** HRTIM_TIMD_DTDR_SDTRx Sign Deadtime Rising value **/
#define HRTIM_TIMD_DTDR_SDTRx		(1 << 9)

#define HRTIM_TIMD_DTDR_DTRx_SHIFT		0
#define HRTIM_TIMD_DTDR_DTRx_MASK		0x1ff
/** @defgroup hrtim_timd_dtdr_dtrx DTRx Deadtime Rising value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_setd1r SETD1R Timerx Output1 Set Register
@{*/

/** HRTIM_TIMD_SETD1R_UPDATE Registers update (transfer preload to active) **/
#define HRTIM_TIMD_SETD1R_UPDATE		(1 << 31)
/** HRTIM_TIMD_SETD1R_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMD_SETD1R_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMD_SETD1R_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMD_SETD1R_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMD_SETD1R_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMD_SETD1R_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMD_SETD1R_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMD_SETD1R_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMD_SETD1R_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMD_SETD1R_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMD_SETD1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMD_SETD1R_TIMEVNT9 Timer Event 9 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMD_SETD1R_TIMEVNT8 Timer Event 8 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMD_SETD1R_TIMEVNT7 Timer Event 7 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMD_SETD1R_TIMEVNT6 Timer Event 6 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMD_SETD1R_TIMEVNT5 Timer Event 5 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMD_SETD1R_TIMEVNT4 Timer Event 4 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMD_SETD1R_TIMEVNT3 Timer Event 3 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMD_SETD1R_TIMEVNT2 Timer Event 2 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMD_SETD1R_TIMEVNT1 Timer Event 1 **/
#define HRTIM_TIMD_SETD1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMD_SETD1R_MSTCMP4 Master Compare 4 **/
#define HRTIM_TIMD_SETD1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMD_SETD1R_MSTCMP3 Master Compare 3 **/
#define HRTIM_TIMD_SETD1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMD_SETD1R_MSTCMP2 Master Compare 2 **/
#define HRTIM_TIMD_SETD1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMD_SETD1R_MSTCMP1 Master Compare 1 **/
#define HRTIM_TIMD_SETD1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMD_SETD1R_MSTPER Master Period **/
#define HRTIM_TIMD_SETD1R_MSTPER		(1 << 7)
/** HRTIM_TIMD_SETD1R_CMP4 Timer A compare 4 **/
#define HRTIM_TIMD_SETD1R_CMP4		(1 << 6)
/** HRTIM_TIMD_SETD1R_CMP3 Timer A compare 3 **/
#define HRTIM_TIMD_SETD1R_CMP3		(1 << 5)
/** HRTIM_TIMD_SETD1R_CMP2 Timer A compare 2 **/
#define HRTIM_TIMD_SETD1R_CMP2		(1 << 4)
/** HRTIM_TIMD_SETD1R_CMP1 Timer A compare 1 **/
#define HRTIM_TIMD_SETD1R_CMP1		(1 << 3)
/** HRTIM_TIMD_SETD1R_PER Timer A Period **/
#define HRTIM_TIMD_SETD1R_PER		(1 << 2)
/** HRTIM_TIMD_SETD1R_RESYNC Timer A resynchronizaton **/
#define HRTIM_TIMD_SETD1R_RESYNC		(1 << 1)
/** HRTIM_TIMD_SETD1R_SST Software Set trigger **/
#define HRTIM_TIMD_SETD1R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_rstd1r RSTD1R Timerx Output1 Reset Register
@{*/

/** HRTIM_TIMD_RSTD1R_UPDATE UPDATE **/
#define HRTIM_TIMD_RSTD1R_UPDATE		(1 << 31)
/** HRTIM_TIMD_RSTD1R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMD_RSTD1R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMD_RSTD1R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMD_RSTD1R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMD_RSTD1R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMD_RSTD1R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMD_RSTD1R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMD_RSTD1R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMD_RSTD1R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMD_RSTD1R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMD_RSTD1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMD_RSTD1R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMD_RSTD1R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMD_RSTD1R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMD_RSTD1R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMD_RSTD1R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMD_RSTD1R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMD_RSTD1R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMD_RSTD1R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMD_RSTD1R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMD_RSTD1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMD_RSTD1R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMD_RSTD1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMD_RSTD1R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMD_RSTD1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMD_RSTD1R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMD_RSTD1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMD_RSTD1R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMD_RSTD1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMD_RSTD1R_MSTPER MSTPER **/
#define HRTIM_TIMD_RSTD1R_MSTPER		(1 << 7)
/** HRTIM_TIMD_RSTD1R_CMP4 CMP4 **/
#define HRTIM_TIMD_RSTD1R_CMP4		(1 << 6)
/** HRTIM_TIMD_RSTD1R_CMP3 CMP3 **/
#define HRTIM_TIMD_RSTD1R_CMP3		(1 << 5)
/** HRTIM_TIMD_RSTD1R_CMP2 CMP2 **/
#define HRTIM_TIMD_RSTD1R_CMP2		(1 << 4)
/** HRTIM_TIMD_RSTD1R_CMP1 CMP1 **/
#define HRTIM_TIMD_RSTD1R_CMP1		(1 << 3)
/** HRTIM_TIMD_RSTD1R_PER PER **/
#define HRTIM_TIMD_RSTD1R_PER		(1 << 2)
/** HRTIM_TIMD_RSTD1R_RESYNC RESYNC **/
#define HRTIM_TIMD_RSTD1R_RESYNC		(1 << 1)
/** HRTIM_TIMD_RSTD1R_SRT SRT **/
#define HRTIM_TIMD_RSTD1R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_setd2r SETD2R Timerx Output2 Set Register
@{*/

/** HRTIM_TIMD_SETD2R_UPDATE UPDATE **/
#define HRTIM_TIMD_SETD2R_UPDATE		(1 << 31)
/** HRTIM_TIMD_SETD2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMD_SETD2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMD_SETD2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMD_SETD2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMD_SETD2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMD_SETD2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMD_SETD2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMD_SETD2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMD_SETD2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMD_SETD2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMD_SETD2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMD_SETD2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMD_SETD2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMD_SETD2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMD_SETD2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMD_SETD2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMD_SETD2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMD_SETD2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMD_SETD2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMD_SETD2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMD_SETD2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMD_SETD2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMD_SETD2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMD_SETD2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMD_SETD2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMD_SETD2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMD_SETD2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMD_SETD2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMD_SETD2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMD_SETD2R_MSTPER MSTPER **/
#define HRTIM_TIMD_SETD2R_MSTPER		(1 << 7)
/** HRTIM_TIMD_SETD2R_CMP4 CMP4 **/
#define HRTIM_TIMD_SETD2R_CMP4		(1 << 6)
/** HRTIM_TIMD_SETD2R_CMP3 CMP3 **/
#define HRTIM_TIMD_SETD2R_CMP3		(1 << 5)
/** HRTIM_TIMD_SETD2R_CMP2 CMP2 **/
#define HRTIM_TIMD_SETD2R_CMP2		(1 << 4)
/** HRTIM_TIMD_SETD2R_CMP1 CMP1 **/
#define HRTIM_TIMD_SETD2R_CMP1		(1 << 3)
/** HRTIM_TIMD_SETD2R_PER PER **/
#define HRTIM_TIMD_SETD2R_PER		(1 << 2)
/** HRTIM_TIMD_SETD2R_RESYNC RESYNC **/
#define HRTIM_TIMD_SETD2R_RESYNC		(1 << 1)
/** HRTIM_TIMD_SETD2R_SST SST **/
#define HRTIM_TIMD_SETD2R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_rstd2r RSTD2R Timerx Output2 Reset Register
@{*/

/** HRTIM_TIMD_RSTD2R_UPDATE UPDATE **/
#define HRTIM_TIMD_RSTD2R_UPDATE		(1 << 31)
/** HRTIM_TIMD_RSTD2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMD_RSTD2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMD_RSTD2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMD_RSTD2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMD_RSTD2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMD_RSTD2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMD_RSTD2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMD_RSTD2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMD_RSTD2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMD_RSTD2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMD_RSTD2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMD_RSTD2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMD_RSTD2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMD_RSTD2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMD_RSTD2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMD_RSTD2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMD_RSTD2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMD_RSTD2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMD_RSTD2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMD_RSTD2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMD_RSTD2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMD_RSTD2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMD_RSTD2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMD_RSTD2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMD_RSTD2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMD_RSTD2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMD_RSTD2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMD_RSTD2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMD_RSTD2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMD_RSTD2R_MSTPER MSTPER **/
#define HRTIM_TIMD_RSTD2R_MSTPER		(1 << 7)
/** HRTIM_TIMD_RSTD2R_CMP4 CMP4 **/
#define HRTIM_TIMD_RSTD2R_CMP4		(1 << 6)
/** HRTIM_TIMD_RSTD2R_CMP3 CMP3 **/
#define HRTIM_TIMD_RSTD2R_CMP3		(1 << 5)
/** HRTIM_TIMD_RSTD2R_CMP2 CMP2 **/
#define HRTIM_TIMD_RSTD2R_CMP2		(1 << 4)
/** HRTIM_TIMD_RSTD2R_CMP1 CMP1 **/
#define HRTIM_TIMD_RSTD2R_CMP1		(1 << 3)
/** HRTIM_TIMD_RSTD2R_PER PER **/
#define HRTIM_TIMD_RSTD2R_PER		(1 << 2)
/** HRTIM_TIMD_RSTD2R_RESYNC RESYNC **/
#define HRTIM_TIMD_RSTD2R_RESYNC		(1 << 1)
/** HRTIM_TIMD_RSTD2R_SRT SRT **/
#define HRTIM_TIMD_RSTD2R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_eefdr1 EEFDR1 Timerx External Event Filtering Register 1
@{*/


#define HRTIM_TIMD_EEFDR1_EE5FLTR_SHIFT		25
#define HRTIM_TIMD_EEFDR1_EE5FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr1_ee5fltr EE5FLTR External Event 5 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR1_EE5LTCH External Event 5 latch **/
#define HRTIM_TIMD_EEFDR1_EE5LTCH		(1 << 24)

#define HRTIM_TIMD_EEFDR1_EE4FLTR_SHIFT		19
#define HRTIM_TIMD_EEFDR1_EE4FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr1_ee4fltr EE4FLTR External Event 4 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR1_EE4LTCH External Event 4 latch **/
#define HRTIM_TIMD_EEFDR1_EE4LTCH		(1 << 18)

#define HRTIM_TIMD_EEFDR1_EE3FLTR_SHIFT		13
#define HRTIM_TIMD_EEFDR1_EE3FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr1_ee3fltr EE3FLTR External Event 3 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR1_EE3LTCH External Event 3 latch **/
#define HRTIM_TIMD_EEFDR1_EE3LTCH		(1 << 12)

#define HRTIM_TIMD_EEFDR1_EE2FLTR_SHIFT		7
#define HRTIM_TIMD_EEFDR1_EE2FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr1_ee2fltr EE2FLTR External Event 2 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR1_EE2LTCH External Event 2 latch **/
#define HRTIM_TIMD_EEFDR1_EE2LTCH		(1 << 6)

#define HRTIM_TIMD_EEFDR1_EE1FLTR_SHIFT		1
#define HRTIM_TIMD_EEFDR1_EE1FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr1_ee1fltr EE1FLTR External Event 1 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR1_EE1LTCH External Event 1 latch **/
#define HRTIM_TIMD_EEFDR1_EE1LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_eefdr2 EEFDR2 Timerx External Event Filtering Register 2
@{*/


#define HRTIM_TIMD_EEFDR2_EE10FLTR_SHIFT		25
#define HRTIM_TIMD_EEFDR2_EE10FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr2_ee10fltr EE10FLTR External Event 10 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR2_EE10LTCH External Event 10 latch **/
#define HRTIM_TIMD_EEFDR2_EE10LTCH		(1 << 24)

#define HRTIM_TIMD_EEFDR2_EE9FLTR_SHIFT		19
#define HRTIM_TIMD_EEFDR2_EE9FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr2_ee9fltr EE9FLTR External Event 9 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR2_EE9LTCH External Event 9 latch **/
#define HRTIM_TIMD_EEFDR2_EE9LTCH		(1 << 18)

#define HRTIM_TIMD_EEFDR2_EE8FLTR_SHIFT		13
#define HRTIM_TIMD_EEFDR2_EE8FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr2_ee8fltr EE8FLTR External Event 8 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR2_EE8LTCH External Event 8 latch **/
#define HRTIM_TIMD_EEFDR2_EE8LTCH		(1 << 12)

#define HRTIM_TIMD_EEFDR2_EE7FLTR_SHIFT		7
#define HRTIM_TIMD_EEFDR2_EE7FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr2_ee7fltr EE7FLTR External Event 7 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR2_EE7LTCH External Event 7 latch **/
#define HRTIM_TIMD_EEFDR2_EE7LTCH		(1 << 6)

#define HRTIM_TIMD_EEFDR2_EE6FLTR_SHIFT		1
#define HRTIM_TIMD_EEFDR2_EE6FLTR_MASK		0x0f
/** @defgroup hrtim_timd_eefdr2_ee6fltr EE6FLTR External Event 6 filter
@{*/
/**@}*/

/** HRTIM_TIMD_EEFDR2_EE6LTCH External Event 6 latch **/
#define HRTIM_TIMD_EEFDR2_EE6LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_rstdr RSTDR TimerA Reset Register
@{*/

/** HRTIM_TIMD_RSTDR_TIMECMP4 Timer E Compare 4 **/
#define HRTIM_TIMD_RSTDR_TIMECMP4		(1 << 30)
/** HRTIM_TIMD_RSTDR_TIMECMP2 Timer E Compare 2 **/
#define HRTIM_TIMD_RSTDR_TIMECMP2		(1 << 29)
/** HRTIM_TIMD_RSTDR_TIMECMP1 Timer E Compare 1 **/
#define HRTIM_TIMD_RSTDR_TIMECMP1		(1 << 28)
/** HRTIM_TIMD_RSTDR_TIMCCMP4 Timer C Compare 4 **/
#define HRTIM_TIMD_RSTDR_TIMCCMP4		(1 << 27)
/** HRTIM_TIMD_RSTDR_TIMCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMD_RSTDR_TIMCCMP2		(1 << 26)
/** HRTIM_TIMD_RSTDR_TIMCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMD_RSTDR_TIMCCMP1		(1 << 25)
/** HRTIM_TIMD_RSTDR_TIMBCMP4 Timer B Compare 4 **/
#define HRTIM_TIMD_RSTDR_TIMBCMP4		(1 << 24)
/** HRTIM_TIMD_RSTDR_TIMBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMD_RSTDR_TIMBCMP2		(1 << 23)
/** HRTIM_TIMD_RSTDR_TIMBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMD_RSTDR_TIMBCMP1		(1 << 22)
/** HRTIM_TIMD_RSTDR_TIMACMP4 Timer A Compare 4 **/
#define HRTIM_TIMD_RSTDR_TIMACMP4		(1 << 21)
/** HRTIM_TIMD_RSTDR_TIMACMP2 Timer A Compare 2 **/
#define HRTIM_TIMD_RSTDR_TIMACMP2		(1 << 20)
/** HRTIM_TIMD_RSTDR_TIMACMP1 Timer A Compare 1 **/
#define HRTIM_TIMD_RSTDR_TIMACMP1		(1 << 19)
/** HRTIM_TIMD_RSTDR_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT10		(1 << 18)
/** HRTIM_TIMD_RSTDR_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT9		(1 << 17)
/** HRTIM_TIMD_RSTDR_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT8		(1 << 16)
/** HRTIM_TIMD_RSTDR_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT7		(1 << 15)
/** HRTIM_TIMD_RSTDR_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT6		(1 << 14)
/** HRTIM_TIMD_RSTDR_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT5		(1 << 13)
/** HRTIM_TIMD_RSTDR_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT4		(1 << 12)
/** HRTIM_TIMD_RSTDR_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT3		(1 << 11)
/** HRTIM_TIMD_RSTDR_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT2		(1 << 10)
/** HRTIM_TIMD_RSTDR_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMD_RSTDR_EXTEVNT1		(1 << 9)
/** HRTIM_TIMD_RSTDR_MSTCMP4 Master compare 4 **/
#define HRTIM_TIMD_RSTDR_MSTCMP4		(1 << 8)
/** HRTIM_TIMD_RSTDR_MSTCMP3 Master compare 3 **/
#define HRTIM_TIMD_RSTDR_MSTCMP3		(1 << 7)
/** HRTIM_TIMD_RSTDR_MSTCMP2 Master compare 2 **/
#define HRTIM_TIMD_RSTDR_MSTCMP2		(1 << 6)
/** HRTIM_TIMD_RSTDR_MSTCMP1 Master compare 1 **/
#define HRTIM_TIMD_RSTDR_MSTCMP1		(1 << 5)
/** HRTIM_TIMD_RSTDR_MSTPER Master timer Period **/
#define HRTIM_TIMD_RSTDR_MSTPER		(1 << 4)
/** HRTIM_TIMD_RSTDR_CMP4 Timer A compare 4 reset **/
#define HRTIM_TIMD_RSTDR_CMP4		(1 << 3)
/** HRTIM_TIMD_RSTDR_CMP2 Timer A compare 2 reset **/
#define HRTIM_TIMD_RSTDR_CMP2		(1 << 2)
/** HRTIM_TIMD_RSTDR_UPDT Timer A Update reset **/
#define HRTIM_TIMD_RSTDR_UPDT		(1 << 1)

/**@}*/

/** @defgroup hrtim_timd_chpdr CHPDR Timerx Chopper Register
@{*/


#define HRTIM_TIMD_CHPDR_STRTPW_SHIFT		7
#define HRTIM_TIMD_CHPDR_STRTPW_MASK		0x0f
/** @defgroup hrtim_timd_chpdr_strtpw STRTPW STRTPW
@{*/
/**@}*/


#define HRTIM_TIMD_CHPDR_CHPDTY_SHIFT		4
#define HRTIM_TIMD_CHPDR_CHPDTY_MASK		0x07
/** @defgroup hrtim_timd_chpdr_chpdty CHPDTY Timerx chopper duty cycle value
@{*/
/**@}*/


#define HRTIM_TIMD_CHPDR_CHPFRQ_SHIFT		0
#define HRTIM_TIMD_CHPDR_CHPFRQ_MASK		0x0f
/** @defgroup hrtim_timd_chpdr_chpfrq CHPFRQ Timerx carrier frequency value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timd_cpt1dcr CPT1DCR Timerx Capture 2 Control Register
@{*/

/** HRTIM_TIMD_CPT1DCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMD_CPT1DCR_TECMP2		(1 << 31)
/** HRTIM_TIMD_CPT1DCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMD_CPT1DCR_TECMP1		(1 << 30)
/** HRTIM_TIMD_CPT1DCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMD_CPT1DCR_TE1RST		(1 << 29)
/** HRTIM_TIMD_CPT1DCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMD_CPT1DCR_TE1SET		(1 << 28)
/** HRTIM_TIMD_CPT1DCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMD_CPT1DCR_TCCMP2		(1 << 23)
/** HRTIM_TIMD_CPT1DCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMD_CPT1DCR_TCCMP1		(1 << 22)
/** HRTIM_TIMD_CPT1DCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMD_CPT1DCR_TC1RST		(1 << 21)
/** HRTIM_TIMD_CPT1DCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMD_CPT1DCR_TC1SET		(1 << 20)
/** HRTIM_TIMD_CPT1DCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMD_CPT1DCR_TBCMP2		(1 << 19)
/** HRTIM_TIMD_CPT1DCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMD_CPT1DCR_TBCMP1		(1 << 18)
/** HRTIM_TIMD_CPT1DCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMD_CPT1DCR_TB1RST		(1 << 17)
/** HRTIM_TIMD_CPT1DCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMD_CPT1DCR_TB1SET		(1 << 16)
/** HRTIM_TIMD_CPT1DCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMD_CPT1DCR_TACMP2		(1 << 15)
/** HRTIM_TIMD_CPT1DCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMD_CPT1DCR_TACMP1		(1 << 14)
/** HRTIM_TIMD_CPT1DCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMD_CPT1DCR_TA1RST		(1 << 13)
/** HRTIM_TIMD_CPT1DCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMD_CPT1DCR_TA1SET		(1 << 12)
/** HRTIM_TIMD_CPT1DCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMD_CPT1DCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMD_CPT1DCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMD_CPT1DCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMD_CPT1DCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMD_CPT1DCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMD_CPT1DCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMD_CPT1DCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMD_CPT1DCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMD_CPT1DCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMD_CPT1DCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMD_CPT1DCR_UDPCPT Update Capture **/
#define HRTIM_TIMD_CPT1DCR_UDPCPT		(1 << 1)
/** HRTIM_TIMD_CPT1DCR_SWCPT Software Capture **/
#define HRTIM_TIMD_CPT1DCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_cpt2dcr CPT2DCR CPT2xCR
@{*/

/** HRTIM_TIMD_CPT2DCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMD_CPT2DCR_TECMP2		(1 << 31)
/** HRTIM_TIMD_CPT2DCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMD_CPT2DCR_TECMP1		(1 << 30)
/** HRTIM_TIMD_CPT2DCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMD_CPT2DCR_TE1RST		(1 << 29)
/** HRTIM_TIMD_CPT2DCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMD_CPT2DCR_TE1SET		(1 << 28)
/** HRTIM_TIMD_CPT2DCR_TCCMP2 Timer C Compare 2 **/
#define HRTIM_TIMD_CPT2DCR_TCCMP2		(1 << 23)
/** HRTIM_TIMD_CPT2DCR_TCCMP1 Timer C Compare 1 **/
#define HRTIM_TIMD_CPT2DCR_TCCMP1		(1 << 22)
/** HRTIM_TIMD_CPT2DCR_TC1RST Timer C output 1 Reset **/
#define HRTIM_TIMD_CPT2DCR_TC1RST		(1 << 21)
/** HRTIM_TIMD_CPT2DCR_TC1SET Timer C output 1 Set **/
#define HRTIM_TIMD_CPT2DCR_TC1SET		(1 << 20)
/** HRTIM_TIMD_CPT2DCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMD_CPT2DCR_TBCMP2		(1 << 19)
/** HRTIM_TIMD_CPT2DCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMD_CPT2DCR_TBCMP1		(1 << 18)
/** HRTIM_TIMD_CPT2DCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMD_CPT2DCR_TB1RST		(1 << 17)
/** HRTIM_TIMD_CPT2DCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMD_CPT2DCR_TB1SET		(1 << 16)
/** HRTIM_TIMD_CPT2DCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMD_CPT2DCR_TACMP2		(1 << 15)
/** HRTIM_TIMD_CPT2DCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMD_CPT2DCR_TACMP1		(1 << 14)
/** HRTIM_TIMD_CPT2DCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMD_CPT2DCR_TA1RST		(1 << 13)
/** HRTIM_TIMD_CPT2DCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMD_CPT2DCR_TA1SET		(1 << 12)
/** HRTIM_TIMD_CPT2DCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMD_CPT2DCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMD_CPT2DCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMD_CPT2DCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMD_CPT2DCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMD_CPT2DCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMD_CPT2DCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMD_CPT2DCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMD_CPT2DCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMD_CPT2DCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMD_CPT2DCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMD_CPT2DCR_UDPCPT Update Capture **/
#define HRTIM_TIMD_CPT2DCR_UDPCPT		(1 << 1)
/** HRTIM_TIMD_CPT2DCR_SWCPT Software Capture **/
#define HRTIM_TIMD_CPT2DCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timd_outdr OUTDR Timerx Output Register
@{*/

/** HRTIM_TIMD_OUTDR_DIDL2 Output 2 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMD_OUTDR_DIDL2		(1 << 23)
/** HRTIM_TIMD_OUTDR_CHP2 Output 2 Chopper enable **/
#define HRTIM_TIMD_OUTDR_CHP2		(1 << 22)

#define HRTIM_TIMD_OUTDR_FAULT2_SHIFT		20
#define HRTIM_TIMD_OUTDR_FAULT2_MASK		0x03
/** @defgroup hrtim_timd_outdr_fault2 FAULT2 Output 2 Fault state
@{*/
/**@}*/

/** HRTIM_TIMD_OUTDR_IDLES2 Output 2 Idle State **/
#define HRTIM_TIMD_OUTDR_IDLES2		(1 << 19)
/** HRTIM_TIMD_OUTDR_IDLEM2 Output 2 Idle mode **/
#define HRTIM_TIMD_OUTDR_IDLEM2		(1 << 18)
/** HRTIM_TIMD_OUTDR_POL2 Output 2 polarity **/
#define HRTIM_TIMD_OUTDR_POL2		(1 << 17)

#define HRTIM_TIMD_OUTDR_DLYPRT_SHIFT		10
#define HRTIM_TIMD_OUTDR_DLYPRT_MASK		0x07
/** @defgroup hrtim_timd_outdr_dlyprt DLYPRT Delayed Protection
@{*/
/**@}*/

/** HRTIM_TIMD_OUTDR_DLYPRTEN Delayed Protection Enable **/
#define HRTIM_TIMD_OUTDR_DLYPRTEN		(1 << 9)
/** HRTIM_TIMD_OUTDR_DTEN Deadtime enable **/
#define HRTIM_TIMD_OUTDR_DTEN		(1 << 8)
/** HRTIM_TIMD_OUTDR_DIDL1 Output 1 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMD_OUTDR_DIDL1		(1 << 7)
/** HRTIM_TIMD_OUTDR_CHP1 Output 1 Chopper enable **/
#define HRTIM_TIMD_OUTDR_CHP1		(1 << 6)

#define HRTIM_TIMD_OUTDR_FAULT1_SHIFT		4
#define HRTIM_TIMD_OUTDR_FAULT1_MASK		0x03
/** @defgroup hrtim_timd_outdr_fault1 FAULT1 Output 1 Fault state
@{*/
/**@}*/

/** HRTIM_TIMD_OUTDR_IDLES1 Output 1 Idle State **/
#define HRTIM_TIMD_OUTDR_IDLES1		(1 << 3)
/** HRTIM_TIMD_OUTDR_IDLEM1 Output 1 Idle mode **/
#define HRTIM_TIMD_OUTDR_IDLEM1		(1 << 2)
/** HRTIM_TIMD_OUTDR_POL1 Output 1 polarity **/
#define HRTIM_TIMD_OUTDR_POL1		(1 << 1)

/**@}*/

/** @defgroup hrtim_timd_fltdr FLTDR Timerx Fault Register
@{*/

/** HRTIM_TIMD_FLTDR_FLTLCK Fault sources Lock **/
#define HRTIM_TIMD_FLTDR_FLTLCK		(1 << 31)
/** HRTIM_TIMD_FLTDR_FLT5EN Fault 5 enable **/
#define HRTIM_TIMD_FLTDR_FLT5EN		(1 << 4)
/** HRTIM_TIMD_FLTDR_FLT4EN Fault 4 enable **/
#define HRTIM_TIMD_FLTDR_FLT4EN		(1 << 3)
/** HRTIM_TIMD_FLTDR_FLT3EN Fault 3 enable **/
#define HRTIM_TIMD_FLTDR_FLT3EN		(1 << 2)
/** HRTIM_TIMD_FLTDR_FLT2EN Fault 2 enable **/
#define HRTIM_TIMD_FLTDR_FLT2EN		(1 << 1)
/** HRTIM_TIMD_FLTDR_FLT1EN Fault 1 enable **/
#define HRTIM_TIMD_FLTDR_FLT1EN		(1 << 0)

/**@}*/

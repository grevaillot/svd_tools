#pragma once 

/* --- HRTIM_TIMC: High Resolution Timer: TIMC ---------------------- */

/** @defgroup hrtim_timc_registers High Resolution Timer: TIMC Register
@{*/

/** HRTIM_TIMC_TIMCCR Timerx Control Register **/
#define HRTIM_TIMC_TIMCCR			MMIO32(HRTIM_TIMC_BASE + 0x00)
/** HRTIM_TIMC_TIMCISR Timerx Interrupt Status Register **/
#define HRTIM_TIMC_TIMCISR			MMIO32(HRTIM_TIMC_BASE + 0x04)
/** HRTIM_TIMC_TIMCICR Timerx Interrupt Clear Register **/
#define HRTIM_TIMC_TIMCICR			MMIO32(HRTIM_TIMC_BASE + 0x08)
/** HRTIM_TIMC_TIMCDIER TIMxDIER **/
#define HRTIM_TIMC_TIMCDIER			MMIO32(HRTIM_TIMC_BASE + 0x0c)
/** HRTIM_TIMC_CNTCR Timerx Counter Register **/
#define HRTIM_TIMC_CNTCR			MMIO32(HRTIM_TIMC_BASE + 0x10)
/** HRTIM_TIMC_PERCR Timerx Period Register **/
#define HRTIM_TIMC_PERCR			MMIO32(HRTIM_TIMC_BASE + 0x14)
/** HRTIM_TIMC_REPCR Timerx Repetition Register **/
#define HRTIM_TIMC_REPCR			MMIO32(HRTIM_TIMC_BASE + 0x18)
/** HRTIM_TIMC_CMP1CR Timerx Compare 1 Register **/
#define HRTIM_TIMC_CMP1CR			MMIO32(HRTIM_TIMC_BASE + 0x1c)
/** HRTIM_TIMC_CMP1CCR Timerx Compare 1 Compound Register **/
#define HRTIM_TIMC_CMP1CCR			MMIO32(HRTIM_TIMC_BASE + 0x20)
/** HRTIM_TIMC_CMP2CR Timerx Compare 2 Register **/
#define HRTIM_TIMC_CMP2CR			MMIO32(HRTIM_TIMC_BASE + 0x24)
/** HRTIM_TIMC_CMP3CR Timerx Compare 3 Register **/
#define HRTIM_TIMC_CMP3CR			MMIO32(HRTIM_TIMC_BASE + 0x28)
/** HRTIM_TIMC_CMP4CR Timerx Compare 4 Register **/
#define HRTIM_TIMC_CMP4CR			MMIO32(HRTIM_TIMC_BASE + 0x2c)
/** HRTIM_TIMC_CPT1CR Timerx Capture 1 Register **/
#define HRTIM_TIMC_CPT1CR			MMIO32(HRTIM_TIMC_BASE + 0x30)
/** HRTIM_TIMC_CPT2CR Timerx Capture 2 Register **/
#define HRTIM_TIMC_CPT2CR			MMIO32(HRTIM_TIMC_BASE + 0x34)
/** HRTIM_TIMC_DTCR Timerx Deadtime Register **/
#define HRTIM_TIMC_DTCR			MMIO32(HRTIM_TIMC_BASE + 0x38)
/** HRTIM_TIMC_SETC1R Timerx Output1 Set Register **/
#define HRTIM_TIMC_SETC1R			MMIO32(HRTIM_TIMC_BASE + 0x3c)
/** HRTIM_TIMC_RSTC1R Timerx Output1 Reset Register **/
#define HRTIM_TIMC_RSTC1R			MMIO32(HRTIM_TIMC_BASE + 0x40)
/** HRTIM_TIMC_SETC2R Timerx Output2 Set Register **/
#define HRTIM_TIMC_SETC2R			MMIO32(HRTIM_TIMC_BASE + 0x44)
/** HRTIM_TIMC_RSTC2R Timerx Output2 Reset Register **/
#define HRTIM_TIMC_RSTC2R			MMIO32(HRTIM_TIMC_BASE + 0x48)
/** HRTIM_TIMC_EEFCR1 Timerx External Event Filtering Register 1 **/
#define HRTIM_TIMC_EEFCR1			MMIO32(HRTIM_TIMC_BASE + 0x4c)
/** HRTIM_TIMC_EEFCR2 Timerx External Event Filtering Register 2 **/
#define HRTIM_TIMC_EEFCR2			MMIO32(HRTIM_TIMC_BASE + 0x50)
/** HRTIM_TIMC_RSTCR TimerA Reset Register **/
#define HRTIM_TIMC_RSTCR			MMIO32(HRTIM_TIMC_BASE + 0x54)
/** HRTIM_TIMC_CHPCR Timerx Chopper Register **/
#define HRTIM_TIMC_CHPCR			MMIO32(HRTIM_TIMC_BASE + 0x58)
/** HRTIM_TIMC_CPT1CCR Timerx Capture 2 Control Register **/
#define HRTIM_TIMC_CPT1CCR			MMIO32(HRTIM_TIMC_BASE + 0x5c)
/** HRTIM_TIMC_CPT2CCR CPT2xCR **/
#define HRTIM_TIMC_CPT2CCR			MMIO32(HRTIM_TIMC_BASE + 0x60)
/** HRTIM_TIMC_OUTCR Timerx Output Register **/
#define HRTIM_TIMC_OUTCR			MMIO32(HRTIM_TIMC_BASE + 0x64)
/** HRTIM_TIMC_FLTCR Timerx Fault Register **/
#define HRTIM_TIMC_FLTCR			MMIO32(HRTIM_TIMC_BASE + 0x68)
/** HRTIM_TIMC_TIMCCR2 HRTIM Timerx Control Register 2 **/
#define HRTIM_TIMC_TIMCCR2			MMIO32(HRTIM_TIMC_BASE + 0x6c)
/** HRTIM_TIMC_CEEFR3 HRTIM Timerx External Event Filtering Register 3 **/
#define HRTIM_TIMC_CEEFR3			MMIO32(HRTIM_TIMC_BASE + 0x70)

/**@}*/


/** @defgroup hrtim_timc_timccr TIMCCR Timerx Control Register
@{*/


#define HRTIM_TIMC_TIMCCR_UPDGAT_SHIFT		28
#define HRTIM_TIMC_TIMCCR_UPDGAT_MASK		0x0f
/** @defgroup hrtim_timc_timccr_updgat UPDGAT Update Gating
@{*/
/**@}*/

/** HRTIM_TIMC_TIMCCR_PREEN Preload enable **/
#define HRTIM_TIMC_TIMCCR_PREEN		(1 << 27)

#define HRTIM_TIMC_TIMCCR_DACSYNC_SHIFT		25
#define HRTIM_TIMC_TIMCCR_DACSYNC_MASK		0x03
/** @defgroup hrtim_timc_timccr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_TIMC_TIMCCR_MSTU Master Timer update **/
#define HRTIM_TIMC_TIMCCR_MSTU		(1 << 24)
/** HRTIM_TIMC_TIMCCR_TEU TEU **/
#define HRTIM_TIMC_TIMCCR_TEU		(1 << 23)
/** HRTIM_TIMC_TIMCCR_TDU TDU **/
#define HRTIM_TIMC_TIMCCR_TDU		(1 << 22)
/** HRTIM_TIMC_TIMCCR_TBU TBU **/
#define HRTIM_TIMC_TIMCCR_TBU		(1 << 20)
/** HRTIM_TIMC_TIMCCR_TAU TAU **/
#define HRTIM_TIMC_TIMCCR_TAU		(1 << 19)
/** HRTIM_TIMC_TIMCCR_TxRSTU Timerx reset update **/
#define HRTIM_TIMC_TIMCCR_TxRSTU		(1 << 18)
/** HRTIM_TIMC_TIMCCR_TxREPU Timer x Repetition update **/
#define HRTIM_TIMC_TIMCCR_TxREPU		(1 << 17)
/** HRTIM_TIMC_TIMCCR_TFU TFU **/
#define HRTIM_TIMC_TIMCCR_TFU		(1 << 16)

#define HRTIM_TIMC_TIMCCR_DELCMP4_SHIFT		14
#define HRTIM_TIMC_TIMCCR_DELCMP4_MASK		0x03
/** @defgroup hrtim_timc_timccr_delcmp4 DELCMP4 Delayed CMP4 mode
@{*/
/**@}*/


#define HRTIM_TIMC_TIMCCR_DELCMP2_SHIFT		12
#define HRTIM_TIMC_TIMCCR_DELCMP2_MASK		0x03
/** @defgroup hrtim_timc_timccr_delcmp2 DELCMP2 Delayed CMP2 mode
@{*/
/**@}*/

/** HRTIM_TIMC_TIMCCR_SYNCSTRTx Synchronization Starts Timer x **/
#define HRTIM_TIMC_TIMCCR_SYNCSTRTx		(1 << 11)
/** HRTIM_TIMC_TIMCCR_SYNCRSTx Synchronization Resets Timer x **/
#define HRTIM_TIMC_TIMCCR_SYNCRSTx		(1 << 10)
/** HRTIM_TIMC_TIMCCR_RSYNCU Re-Synchronized Update **/
#define HRTIM_TIMC_TIMCCR_RSYNCU		(1 << 9)

#define HRTIM_TIMC_TIMCCR_INTLVD_SHIFT		7
#define HRTIM_TIMC_TIMCCR_INTLVD_MASK		0x03
/** @defgroup hrtim_timc_timccr_intlvd INTLVD Interleaved mode
@{*/
/**@}*/

/** HRTIM_TIMC_TIMCCR_PSHPLL Push-Pull mode enable **/
#define HRTIM_TIMC_TIMCCR_PSHPLL		(1 << 6)
/** HRTIM_TIMC_TIMCCR_HALF Half mode enable **/
#define HRTIM_TIMC_TIMCCR_HALF		(1 << 5)
/** HRTIM_TIMC_TIMCCR_RETRIG Re-triggerable mode **/
#define HRTIM_TIMC_TIMCCR_RETRIG		(1 << 4)
/** HRTIM_TIMC_TIMCCR_CONT Continuous mode **/
#define HRTIM_TIMC_TIMCCR_CONT		(1 << 3)

#define HRTIM_TIMC_TIMCCR_CK_PSCx_SHIFT		0
#define HRTIM_TIMC_TIMCCR_CK_PSCx_MASK		0x07
/** @defgroup hrtim_timc_timccr_ck_pscx CKPSCx HRTIM Timer x Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_timcisr TIMCISR Timerx Interrupt Status Register
@{*/

/** HRTIM_TIMC_TIMCISR_O2CPY Output 2 Copy **/
#define HRTIM_TIMC_TIMCISR_O2CPY		(1 << 21)
/** HRTIM_TIMC_TIMCISR_O1CPY Output 1 Copy **/
#define HRTIM_TIMC_TIMCISR_O1CPY		(1 << 20)
/** HRTIM_TIMC_TIMCISR_O2STAT Output 2 State **/
#define HRTIM_TIMC_TIMCISR_O2STAT		(1 << 19)
/** HRTIM_TIMC_TIMCISR_O1STAT Output 1 State **/
#define HRTIM_TIMC_TIMCISR_O1STAT		(1 << 18)
/** HRTIM_TIMC_TIMCISR_IPPSTAT Idle Push Pull Status **/
#define HRTIM_TIMC_TIMCISR_IPPSTAT		(1 << 17)
/** HRTIM_TIMC_TIMCISR_CPPSTAT Current Push Pull Status **/
#define HRTIM_TIMC_TIMCISR_CPPSTAT		(1 << 16)
/** HRTIM_TIMC_TIMCISR_DLYPRT Delayed Protection Flag **/
#define HRTIM_TIMC_TIMCISR_DLYPRT		(1 << 14)
/** HRTIM_TIMC_TIMCISR_RST Reset Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_RST		(1 << 13)
/** HRTIM_TIMC_TIMCISR_RSTx2 Output 2 Reset Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_RSTx2		(1 << 12)
/** HRTIM_TIMC_TIMCISR_SETx2 Output 2 Set Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_SETx2		(1 << 11)
/** HRTIM_TIMC_TIMCISR_RSTx1 Output 1 Reset Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_RSTx1		(1 << 10)
/** HRTIM_TIMC_TIMCISR_SETx1 Output 1 Set Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_SETx1		(1 << 9)
/** HRTIM_TIMC_TIMCISR_CPT2 Capture2 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CPT2		(1 << 8)
/** HRTIM_TIMC_TIMCISR_CPT1 Capture1 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CPT1		(1 << 7)
/** HRTIM_TIMC_TIMCISR_UPD Update Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_UPD		(1 << 6)
/** HRTIM_TIMC_TIMCISR_REP Repetition Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_REP		(1 << 4)
/** HRTIM_TIMC_TIMCISR_CMP4 Compare 4 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CMP4		(1 << 3)
/** HRTIM_TIMC_TIMCISR_CMP3 Compare 3 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CMP3		(1 << 2)
/** HRTIM_TIMC_TIMCISR_CMP2 Compare 2 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CMP2		(1 << 1)
/** HRTIM_TIMC_TIMCISR_CMP1 Compare 1 Interrupt Flag **/
#define HRTIM_TIMC_TIMCISR_CMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_timcicr TIMCICR Timerx Interrupt Clear Register
@{*/

/** HRTIM_TIMC_TIMCICR_DLYPRTC Delayed Protection Flag Clear **/
#define HRTIM_TIMC_TIMCICR_DLYPRTC		(1 << 14)
/** HRTIM_TIMC_TIMCICR_RSTC Reset Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_RSTC		(1 << 13)
/** HRTIM_TIMC_TIMCICR_RSTx2C Output 2 Reset flag Clear **/
#define HRTIM_TIMC_TIMCICR_RSTx2C		(1 << 12)
/** HRTIM_TIMC_TIMCICR_SET2xC Output 2 Set flag Clear **/
#define HRTIM_TIMC_TIMCICR_SET2xC		(1 << 11)
/** HRTIM_TIMC_TIMCICR_RSTx1C Output 1 Reset flag Clear **/
#define HRTIM_TIMC_TIMCICR_RSTx1C		(1 << 10)
/** HRTIM_TIMC_TIMCICR_SET1xC Output 1 Set flag Clear **/
#define HRTIM_TIMC_TIMCICR_SET1xC		(1 << 9)
/** HRTIM_TIMC_TIMCICR_CPT2C Capture2 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CPT2C		(1 << 8)
/** HRTIM_TIMC_TIMCICR_CPT1C Capture1 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CPT1C		(1 << 7)
/** HRTIM_TIMC_TIMCICR_UPDC Update Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_UPDC		(1 << 6)
/** HRTIM_TIMC_TIMCICR_REPC Repetition Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_REPC		(1 << 4)
/** HRTIM_TIMC_TIMCICR_CMP4C Compare 4 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CMP4C		(1 << 3)
/** HRTIM_TIMC_TIMCICR_CMP3C Compare 3 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CMP3C		(1 << 2)
/** HRTIM_TIMC_TIMCICR_CMP2C Compare 2 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CMP2C		(1 << 1)
/** HRTIM_TIMC_TIMCICR_CMP1C Compare 1 Interrupt flag Clear **/
#define HRTIM_TIMC_TIMCICR_CMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_timcdier TIMCDIER TIMxDIER
@{*/

/** HRTIM_TIMC_TIMCDIER_DLYPRTDE DLYPRTDE **/
#define HRTIM_TIMC_TIMCDIER_DLYPRTDE		(1 << 30)
/** HRTIM_TIMC_TIMCDIER_RSTDE RSTDE **/
#define HRTIM_TIMC_TIMCDIER_RSTDE		(1 << 29)
/** HRTIM_TIMC_TIMCDIER_RSTx2DE RSTx2DE **/
#define HRTIM_TIMC_TIMCDIER_RSTx2DE		(1 << 28)
/** HRTIM_TIMC_TIMCDIER_SETx2DE SETx2DE **/
#define HRTIM_TIMC_TIMCDIER_SETx2DE		(1 << 27)
/** HRTIM_TIMC_TIMCDIER_RSTx1DE RSTx1DE **/
#define HRTIM_TIMC_TIMCDIER_RSTx1DE		(1 << 26)
/** HRTIM_TIMC_TIMCDIER_SET1xDE SET1xDE **/
#define HRTIM_TIMC_TIMCDIER_SET1xDE		(1 << 25)
/** HRTIM_TIMC_TIMCDIER_CPT2DE CPT2DE **/
#define HRTIM_TIMC_TIMCDIER_CPT2DE		(1 << 24)
/** HRTIM_TIMC_TIMCDIER_CPT1DE CPT1DE **/
#define HRTIM_TIMC_TIMCDIER_CPT1DE		(1 << 23)
/** HRTIM_TIMC_TIMCDIER_UPDDE UPDDE **/
#define HRTIM_TIMC_TIMCDIER_UPDDE		(1 << 22)
/** HRTIM_TIMC_TIMCDIER_REPDE REPDE **/
#define HRTIM_TIMC_TIMCDIER_REPDE		(1 << 20)
/** HRTIM_TIMC_TIMCDIER_CMP4DE CMP4DE **/
#define HRTIM_TIMC_TIMCDIER_CMP4DE		(1 << 19)
/** HRTIM_TIMC_TIMCDIER_CMP3DE CMP3DE **/
#define HRTIM_TIMC_TIMCDIER_CMP3DE		(1 << 18)
/** HRTIM_TIMC_TIMCDIER_CMP2DE CMP2DE **/
#define HRTIM_TIMC_TIMCDIER_CMP2DE		(1 << 17)
/** HRTIM_TIMC_TIMCDIER_CMP1DE CMP1DE **/
#define HRTIM_TIMC_TIMCDIER_CMP1DE		(1 << 16)
/** HRTIM_TIMC_TIMCDIER_DLYPRTIE DLYPRTIE **/
#define HRTIM_TIMC_TIMCDIER_DLYPRTIE		(1 << 14)
/** HRTIM_TIMC_TIMCDIER_RSTIE RSTIE **/
#define HRTIM_TIMC_TIMCDIER_RSTIE		(1 << 13)
/** HRTIM_TIMC_TIMCDIER_RSTx2IE RSTx2IE **/
#define HRTIM_TIMC_TIMCDIER_RSTx2IE		(1 << 12)
/** HRTIM_TIMC_TIMCDIER_SETx2IE SETx2IE **/
#define HRTIM_TIMC_TIMCDIER_SETx2IE		(1 << 11)
/** HRTIM_TIMC_TIMCDIER_RSTx1IE RSTx1IE **/
#define HRTIM_TIMC_TIMCDIER_RSTx1IE		(1 << 10)
/** HRTIM_TIMC_TIMCDIER_SET1xIE SET1xIE **/
#define HRTIM_TIMC_TIMCDIER_SET1xIE		(1 << 9)
/** HRTIM_TIMC_TIMCDIER_CPT2IE CPT2IE **/
#define HRTIM_TIMC_TIMCDIER_CPT2IE		(1 << 8)
/** HRTIM_TIMC_TIMCDIER_CPT1IE CPT1IE **/
#define HRTIM_TIMC_TIMCDIER_CPT1IE		(1 << 7)
/** HRTIM_TIMC_TIMCDIER_UPDIE UPDIE **/
#define HRTIM_TIMC_TIMCDIER_UPDIE		(1 << 6)
/** HRTIM_TIMC_TIMCDIER_REPIE REPIE **/
#define HRTIM_TIMC_TIMCDIER_REPIE		(1 << 4)
/** HRTIM_TIMC_TIMCDIER_CMP4IE CMP4IE **/
#define HRTIM_TIMC_TIMCDIER_CMP4IE		(1 << 3)
/** HRTIM_TIMC_TIMCDIER_CMP3IE CMP3IE **/
#define HRTIM_TIMC_TIMCDIER_CMP3IE		(1 << 2)
/** HRTIM_TIMC_TIMCDIER_CMP2IE CMP2IE **/
#define HRTIM_TIMC_TIMCDIER_CMP2IE		(1 << 1)
/** HRTIM_TIMC_TIMCDIER_CMP1IE CMP1IE **/
#define HRTIM_TIMC_TIMCDIER_CMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_cntcr CNTCR Timerx Counter Register
@{*/


#define HRTIM_TIMC_CNTCR_CNTx_SHIFT		0
#define HRTIM_TIMC_CNTCR_CNTx_MASK		0xffff
/** @defgroup hrtim_timc_cntcr_cntx CNTx Timerx Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_percr PERCR Timerx Period Register
@{*/


#define HRTIM_TIMC_PERCR_PERx_SHIFT		0
#define HRTIM_TIMC_PERCR_PERx_MASK		0xffff
/** @defgroup hrtim_timc_percr_perx PERx Timerx Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_repcr REPCR Timerx Repetition Register
@{*/


#define HRTIM_TIMC_REPCR_REPx_SHIFT		0
#define HRTIM_TIMC_REPCR_REPx_MASK		0xff
/** @defgroup hrtim_timc_repcr_repx REPx Timerx Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cmp1cr CMP1CR Timerx Compare 1 Register
@{*/


#define HRTIM_TIMC_CMP1CR_CMP1x_SHIFT		0
#define HRTIM_TIMC_CMP1CR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timc_cmp1cr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cmp1ccr CMP1CCR Timerx Compare 1 Compound Register
@{*/


#define HRTIM_TIMC_CMP1CCR_REPx_SHIFT		16
#define HRTIM_TIMC_CMP1CCR_REPx_MASK		0xff
/** @defgroup hrtim_timc_cmp1ccr_repx REPx Timerx Repetition value (aliased from HRTIM_REPx register)
@{*/
/**@}*/


#define HRTIM_TIMC_CMP1CCR_CMP1x_SHIFT		0
#define HRTIM_TIMC_CMP1CCR_CMP1x_MASK		0xffff
/** @defgroup hrtim_timc_cmp1ccr_cmp1x CMP1x Timerx Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cmp2cr CMP2CR Timerx Compare 2 Register
@{*/


#define HRTIM_TIMC_CMP2CR_CMP2x_SHIFT		0
#define HRTIM_TIMC_CMP2CR_CMP2x_MASK		0xffff
/** @defgroup hrtim_timc_cmp2cr_cmp2x CMP2x Timerx Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cmp3cr CMP3CR Timerx Compare 3 Register
@{*/


#define HRTIM_TIMC_CMP3CR_CMP3x_SHIFT		0
#define HRTIM_TIMC_CMP3CR_CMP3x_MASK		0xffff
/** @defgroup hrtim_timc_cmp3cr_cmp3x CMP3x Timerx Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cmp4cr CMP4CR Timerx Compare 4 Register
@{*/


#define HRTIM_TIMC_CMP4CR_CMP4x_SHIFT		0
#define HRTIM_TIMC_CMP4CR_CMP4x_MASK		0xffff
/** @defgroup hrtim_timc_cmp4cr_cmp4x CMP4x Timerx Compare 4 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cpt1cr CPT1CR Timerx Capture 1 Register
@{*/

/** HRTIM_TIMC_CPT1CR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMC_CPT1CR_DIR		(1 << 16)

#define HRTIM_TIMC_CPT1CR_CPT1x_SHIFT		0
#define HRTIM_TIMC_CPT1CR_CPT1x_MASK		0xffff
/** @defgroup hrtim_timc_cpt1cr_cpt1x CPT1x Timerx Capture 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cpt2cr CPT2CR Timerx Capture 2 Register
@{*/

/** HRTIM_TIMC_CPT2CR_DIR Timerx Capture 1 Direction status **/
#define HRTIM_TIMC_CPT2CR_DIR		(1 << 16)

#define HRTIM_TIMC_CPT2CR_CPT2x_SHIFT		0
#define HRTIM_TIMC_CPT2CR_CPT2x_MASK		0xffff
/** @defgroup hrtim_timc_cpt2cr_cpt2x CPT2x Timerx Capture 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_dtcr DTCR Timerx Deadtime Register
@{*/

/** HRTIM_TIMC_DTCR_DTFLKx Deadtime Falling Lock **/
#define HRTIM_TIMC_DTCR_DTFLKx		(1 << 31)
/** HRTIM_TIMC_DTCR_DTFSLKx Deadtime Falling Sign Lock **/
#define HRTIM_TIMC_DTCR_DTFSLKx		(1 << 30)
/** HRTIM_TIMC_DTCR_SDTFx Sign Deadtime Falling value **/
#define HRTIM_TIMC_DTCR_SDTFx		(1 << 25)

#define HRTIM_TIMC_DTCR_DTFx_SHIFT		16
#define HRTIM_TIMC_DTCR_DTFx_MASK		0x1ff
/** @defgroup hrtim_timc_dtcr_dtfx DTFx Deadtime Falling value
@{*/
/**@}*/

/** HRTIM_TIMC_DTCR_DTRLKx Deadtime Rising Lock **/
#define HRTIM_TIMC_DTCR_DTRLKx		(1 << 15)
/** HRTIM_TIMC_DTCR_DTRSLKx Deadtime Rising Sign Lock **/
#define HRTIM_TIMC_DTCR_DTRSLKx		(1 << 14)

#define HRTIM_TIMC_DTCR_DTPRSC_SHIFT		10
#define HRTIM_TIMC_DTCR_DTPRSC_MASK		0x07
/** @defgroup hrtim_timc_dtcr_dtprsc DTPRSC Deadtime Prescaler
@{*/
/**@}*/

/** HRTIM_TIMC_DTCR_SDTRx Sign Deadtime Rising value **/
#define HRTIM_TIMC_DTCR_SDTRx		(1 << 9)

#define HRTIM_TIMC_DTCR_DTRx_SHIFT		0
#define HRTIM_TIMC_DTCR_DTRx_MASK		0x1ff
/** @defgroup hrtim_timc_dtcr_dtrx DTRx Deadtime Rising value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_setc1r SETC1R Timerx Output1 Set Register
@{*/

/** HRTIM_TIMC_SETC1R_UPDATE Registers update (transfer preload to active) **/
#define HRTIM_TIMC_SETC1R_UPDATE		(1 << 31)
/** HRTIM_TIMC_SETC1R_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMC_SETC1R_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMC_SETC1R_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMC_SETC1R_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMC_SETC1R_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMC_SETC1R_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMC_SETC1R_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMC_SETC1R_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMC_SETC1R_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMC_SETC1R_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMC_SETC1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMC_SETC1R_TIMEVNT9 Timer Event 9 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMC_SETC1R_TIMEVNT8 Timer Event 8 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMC_SETC1R_TIMEVNT7 Timer Event 7 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMC_SETC1R_TIMEVNT6 Timer Event 6 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMC_SETC1R_TIMEVNT5 Timer Event 5 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMC_SETC1R_TIMEVNT4 Timer Event 4 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMC_SETC1R_TIMEVNT3 Timer Event 3 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMC_SETC1R_TIMEVNT2 Timer Event 2 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMC_SETC1R_TIMEVNT1 Timer Event 1 **/
#define HRTIM_TIMC_SETC1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMC_SETC1R_MSTCMP4 Master Compare 4 **/
#define HRTIM_TIMC_SETC1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMC_SETC1R_MSTCMP3 Master Compare 3 **/
#define HRTIM_TIMC_SETC1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMC_SETC1R_MSTCMP2 Master Compare 2 **/
#define HRTIM_TIMC_SETC1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMC_SETC1R_MSTCMP1 Master Compare 1 **/
#define HRTIM_TIMC_SETC1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMC_SETC1R_MSTPER Master Period **/
#define HRTIM_TIMC_SETC1R_MSTPER		(1 << 7)
/** HRTIM_TIMC_SETC1R_CMP4 Timer A compare 4 **/
#define HRTIM_TIMC_SETC1R_CMP4		(1 << 6)
/** HRTIM_TIMC_SETC1R_CMP3 Timer A compare 3 **/
#define HRTIM_TIMC_SETC1R_CMP3		(1 << 5)
/** HRTIM_TIMC_SETC1R_CMP2 Timer A compare 2 **/
#define HRTIM_TIMC_SETC1R_CMP2		(1 << 4)
/** HRTIM_TIMC_SETC1R_CMP1 Timer A compare 1 **/
#define HRTIM_TIMC_SETC1R_CMP1		(1 << 3)
/** HRTIM_TIMC_SETC1R_PER Timer A Period **/
#define HRTIM_TIMC_SETC1R_PER		(1 << 2)
/** HRTIM_TIMC_SETC1R_RESYNC Timer A resynchronizaton **/
#define HRTIM_TIMC_SETC1R_RESYNC		(1 << 1)
/** HRTIM_TIMC_SETC1R_SST Software Set trigger **/
#define HRTIM_TIMC_SETC1R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_rstc1r RSTC1R Timerx Output1 Reset Register
@{*/

/** HRTIM_TIMC_RSTC1R_UPDATE UPDATE **/
#define HRTIM_TIMC_RSTC1R_UPDATE		(1 << 31)
/** HRTIM_TIMC_RSTC1R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMC_RSTC1R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMC_RSTC1R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMC_RSTC1R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMC_RSTC1R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMC_RSTC1R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMC_RSTC1R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMC_RSTC1R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMC_RSTC1R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMC_RSTC1R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMC_RSTC1R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMC_RSTC1R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMC_RSTC1R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMC_RSTC1R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMC_RSTC1R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMC_RSTC1R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMC_RSTC1R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMC_RSTC1R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMC_RSTC1R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMC_RSTC1R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMC_RSTC1R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMC_RSTC1R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMC_RSTC1R_MSTCMP4		(1 << 11)
/** HRTIM_TIMC_RSTC1R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMC_RSTC1R_MSTCMP3		(1 << 10)
/** HRTIM_TIMC_RSTC1R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMC_RSTC1R_MSTCMP2		(1 << 9)
/** HRTIM_TIMC_RSTC1R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMC_RSTC1R_MSTCMP1		(1 << 8)
/** HRTIM_TIMC_RSTC1R_MSTPER MSTPER **/
#define HRTIM_TIMC_RSTC1R_MSTPER		(1 << 7)
/** HRTIM_TIMC_RSTC1R_CMP4 CMP4 **/
#define HRTIM_TIMC_RSTC1R_CMP4		(1 << 6)
/** HRTIM_TIMC_RSTC1R_CMP3 CMP3 **/
#define HRTIM_TIMC_RSTC1R_CMP3		(1 << 5)
/** HRTIM_TIMC_RSTC1R_CMP2 CMP2 **/
#define HRTIM_TIMC_RSTC1R_CMP2		(1 << 4)
/** HRTIM_TIMC_RSTC1R_CMP1 CMP1 **/
#define HRTIM_TIMC_RSTC1R_CMP1		(1 << 3)
/** HRTIM_TIMC_RSTC1R_PER PER **/
#define HRTIM_TIMC_RSTC1R_PER		(1 << 2)
/** HRTIM_TIMC_RSTC1R_RESYNC RESYNC **/
#define HRTIM_TIMC_RSTC1R_RESYNC		(1 << 1)
/** HRTIM_TIMC_RSTC1R_SRT SRT **/
#define HRTIM_TIMC_RSTC1R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_setc2r SETC2R Timerx Output2 Set Register
@{*/

/** HRTIM_TIMC_SETC2R_UPDATE UPDATE **/
#define HRTIM_TIMC_SETC2R_UPDATE		(1 << 31)
/** HRTIM_TIMC_SETC2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMC_SETC2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMC_SETC2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMC_SETC2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMC_SETC2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMC_SETC2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMC_SETC2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMC_SETC2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMC_SETC2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMC_SETC2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMC_SETC2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMC_SETC2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMC_SETC2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMC_SETC2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMC_SETC2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMC_SETC2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMC_SETC2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMC_SETC2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMC_SETC2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMC_SETC2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMC_SETC2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMC_SETC2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMC_SETC2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMC_SETC2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMC_SETC2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMC_SETC2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMC_SETC2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMC_SETC2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMC_SETC2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMC_SETC2R_MSTPER MSTPER **/
#define HRTIM_TIMC_SETC2R_MSTPER		(1 << 7)
/** HRTIM_TIMC_SETC2R_CMP4 CMP4 **/
#define HRTIM_TIMC_SETC2R_CMP4		(1 << 6)
/** HRTIM_TIMC_SETC2R_CMP3 CMP3 **/
#define HRTIM_TIMC_SETC2R_CMP3		(1 << 5)
/** HRTIM_TIMC_SETC2R_CMP2 CMP2 **/
#define HRTIM_TIMC_SETC2R_CMP2		(1 << 4)
/** HRTIM_TIMC_SETC2R_CMP1 CMP1 **/
#define HRTIM_TIMC_SETC2R_CMP1		(1 << 3)
/** HRTIM_TIMC_SETC2R_PER PER **/
#define HRTIM_TIMC_SETC2R_PER		(1 << 2)
/** HRTIM_TIMC_SETC2R_RESYNC RESYNC **/
#define HRTIM_TIMC_SETC2R_RESYNC		(1 << 1)
/** HRTIM_TIMC_SETC2R_SST SST **/
#define HRTIM_TIMC_SETC2R_SST		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_rstc2r RSTC2R Timerx Output2 Reset Register
@{*/

/** HRTIM_TIMC_RSTC2R_UPDATE UPDATE **/
#define HRTIM_TIMC_RSTC2R_UPDATE		(1 << 31)
/** HRTIM_TIMC_RSTC2R_EXTEVNT10 EXTEVNT10 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT10		(1 << 30)
/** HRTIM_TIMC_RSTC2R_EXTEVNT9 EXTEVNT9 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT9		(1 << 29)
/** HRTIM_TIMC_RSTC2R_EXTEVNT8 EXTEVNT8 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT8		(1 << 28)
/** HRTIM_TIMC_RSTC2R_EXTEVNT7 EXTEVNT7 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT7		(1 << 27)
/** HRTIM_TIMC_RSTC2R_EXTEVNT6 EXTEVNT6 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT6		(1 << 26)
/** HRTIM_TIMC_RSTC2R_EXTEVNT5 EXTEVNT5 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT5		(1 << 25)
/** HRTIM_TIMC_RSTC2R_EXTEVNT4 EXTEVNT4 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT4		(1 << 24)
/** HRTIM_TIMC_RSTC2R_EXTEVNT3 EXTEVNT3 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT3		(1 << 23)
/** HRTIM_TIMC_RSTC2R_EXTEVNT2 EXTEVNT2 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT2		(1 << 22)
/** HRTIM_TIMC_RSTC2R_EXTEVNT1 EXTEVNT1 **/
#define HRTIM_TIMC_RSTC2R_EXTEVNT1		(1 << 21)
/** HRTIM_TIMC_RSTC2R_TIMEVNT9 TIMEVNT9 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT9		(1 << 20)
/** HRTIM_TIMC_RSTC2R_TIMEVNT8 TIMEVNT8 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT8		(1 << 19)
/** HRTIM_TIMC_RSTC2R_TIMEVNT7 TIMEVNT7 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT7		(1 << 18)
/** HRTIM_TIMC_RSTC2R_TIMEVNT6 TIMEVNT6 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT6		(1 << 17)
/** HRTIM_TIMC_RSTC2R_TIMEVNT5 TIMEVNT5 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT5		(1 << 16)
/** HRTIM_TIMC_RSTC2R_TIMEVNT4 TIMEVNT4 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT4		(1 << 15)
/** HRTIM_TIMC_RSTC2R_TIMEVNT3 TIMEVNT3 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT3		(1 << 14)
/** HRTIM_TIMC_RSTC2R_TIMEVNT2 TIMEVNT2 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT2		(1 << 13)
/** HRTIM_TIMC_RSTC2R_TIMEVNT1 TIMEVNT1 **/
#define HRTIM_TIMC_RSTC2R_TIMEVNT1		(1 << 12)
/** HRTIM_TIMC_RSTC2R_MSTCMP4 MSTCMP4 **/
#define HRTIM_TIMC_RSTC2R_MSTCMP4		(1 << 11)
/** HRTIM_TIMC_RSTC2R_MSTCMP3 MSTCMP3 **/
#define HRTIM_TIMC_RSTC2R_MSTCMP3		(1 << 10)
/** HRTIM_TIMC_RSTC2R_MSTCMP2 MSTCMP2 **/
#define HRTIM_TIMC_RSTC2R_MSTCMP2		(1 << 9)
/** HRTIM_TIMC_RSTC2R_MSTCMP1 MSTCMP1 **/
#define HRTIM_TIMC_RSTC2R_MSTCMP1		(1 << 8)
/** HRTIM_TIMC_RSTC2R_MSTPER MSTPER **/
#define HRTIM_TIMC_RSTC2R_MSTPER		(1 << 7)
/** HRTIM_TIMC_RSTC2R_CMP4 CMP4 **/
#define HRTIM_TIMC_RSTC2R_CMP4		(1 << 6)
/** HRTIM_TIMC_RSTC2R_CMP3 CMP3 **/
#define HRTIM_TIMC_RSTC2R_CMP3		(1 << 5)
/** HRTIM_TIMC_RSTC2R_CMP2 CMP2 **/
#define HRTIM_TIMC_RSTC2R_CMP2		(1 << 4)
/** HRTIM_TIMC_RSTC2R_CMP1 CMP1 **/
#define HRTIM_TIMC_RSTC2R_CMP1		(1 << 3)
/** HRTIM_TIMC_RSTC2R_PER PER **/
#define HRTIM_TIMC_RSTC2R_PER		(1 << 2)
/** HRTIM_TIMC_RSTC2R_RESYNC RESYNC **/
#define HRTIM_TIMC_RSTC2R_RESYNC		(1 << 1)
/** HRTIM_TIMC_RSTC2R_SRT SRT **/
#define HRTIM_TIMC_RSTC2R_SRT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_eefcr1 EEFCR1 Timerx External Event Filtering Register 1
@{*/


#define HRTIM_TIMC_EEFCR1_EE5FLTR_SHIFT		25
#define HRTIM_TIMC_EEFCR1_EE5FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr1_ee5fltr EE5FLTR External Event 5 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR1_EE5LTCH External Event 5 latch **/
#define HRTIM_TIMC_EEFCR1_EE5LTCH		(1 << 24)

#define HRTIM_TIMC_EEFCR1_EE4FLTR_SHIFT		19
#define HRTIM_TIMC_EEFCR1_EE4FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr1_ee4fltr EE4FLTR External Event 4 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR1_EE4LTCH External Event 4 latch **/
#define HRTIM_TIMC_EEFCR1_EE4LTCH		(1 << 18)

#define HRTIM_TIMC_EEFCR1_EE3FLTR_SHIFT		13
#define HRTIM_TIMC_EEFCR1_EE3FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr1_ee3fltr EE3FLTR External Event 3 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR1_EE3LTCH External Event 3 latch **/
#define HRTIM_TIMC_EEFCR1_EE3LTCH		(1 << 12)

#define HRTIM_TIMC_EEFCR1_EE2FLTR_SHIFT		7
#define HRTIM_TIMC_EEFCR1_EE2FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr1_ee2fltr EE2FLTR External Event 2 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR1_EE2LTCH External Event 2 latch **/
#define HRTIM_TIMC_EEFCR1_EE2LTCH		(1 << 6)

#define HRTIM_TIMC_EEFCR1_EE1FLTR_SHIFT		1
#define HRTIM_TIMC_EEFCR1_EE1FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr1_ee1fltr EE1FLTR External Event 1 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR1_EE1LTCH External Event 1 latch **/
#define HRTIM_TIMC_EEFCR1_EE1LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_eefcr2 EEFCR2 Timerx External Event Filtering Register 2
@{*/


#define HRTIM_TIMC_EEFCR2_EE10FLTR_SHIFT		25
#define HRTIM_TIMC_EEFCR2_EE10FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr2_ee10fltr EE10FLTR External Event 10 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR2_EE10LTCH External Event 10 latch **/
#define HRTIM_TIMC_EEFCR2_EE10LTCH		(1 << 24)

#define HRTIM_TIMC_EEFCR2_EE9FLTR_SHIFT		19
#define HRTIM_TIMC_EEFCR2_EE9FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr2_ee9fltr EE9FLTR External Event 9 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR2_EE9LTCH External Event 9 latch **/
#define HRTIM_TIMC_EEFCR2_EE9LTCH		(1 << 18)

#define HRTIM_TIMC_EEFCR2_EE8FLTR_SHIFT		13
#define HRTIM_TIMC_EEFCR2_EE8FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr2_ee8fltr EE8FLTR External Event 8 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR2_EE8LTCH External Event 8 latch **/
#define HRTIM_TIMC_EEFCR2_EE8LTCH		(1 << 12)

#define HRTIM_TIMC_EEFCR2_EE7FLTR_SHIFT		7
#define HRTIM_TIMC_EEFCR2_EE7FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr2_ee7fltr EE7FLTR External Event 7 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR2_EE7LTCH External Event 7 latch **/
#define HRTIM_TIMC_EEFCR2_EE7LTCH		(1 << 6)

#define HRTIM_TIMC_EEFCR2_EE6FLTR_SHIFT		1
#define HRTIM_TIMC_EEFCR2_EE6FLTR_MASK		0x0f
/** @defgroup hrtim_timc_eefcr2_ee6fltr EE6FLTR External Event 6 filter
@{*/
/**@}*/

/** HRTIM_TIMC_EEFCR2_EE6LTCH External Event 6 latch **/
#define HRTIM_TIMC_EEFCR2_EE6LTCH		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_rstcr RSTCR TimerA Reset Register
@{*/

/** HRTIM_TIMC_RSTCR_TIMFCPM2 Timer F Compare 2 **/
#define HRTIM_TIMC_RSTCR_TIMFCPM2		(1 << 31)
/** HRTIM_TIMC_RSTCR_TIMECMP4 Timer E Compare 4 **/
#define HRTIM_TIMC_RSTCR_TIMECMP4		(1 << 30)
/** HRTIM_TIMC_RSTCR_TIMECMP2 Timer E Compare 2 **/
#define HRTIM_TIMC_RSTCR_TIMECMP2		(1 << 29)
/** HRTIM_TIMC_RSTCR_TIMECMP1 Timer E Compare 1 **/
#define HRTIM_TIMC_RSTCR_TIMECMP1		(1 << 28)
/** HRTIM_TIMC_RSTCR_TIMDCMP4 Timer D Compare 4 **/
#define HRTIM_TIMC_RSTCR_TIMDCMP4		(1 << 27)
/** HRTIM_TIMC_RSTCR_TIMDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMC_RSTCR_TIMDCMP2		(1 << 26)
/** HRTIM_TIMC_RSTCR_TIMDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMC_RSTCR_TIMDCMP1		(1 << 25)
/** HRTIM_TIMC_RSTCR_TIMBCMP4 Timer B Compare 4 **/
#define HRTIM_TIMC_RSTCR_TIMBCMP4		(1 << 24)
/** HRTIM_TIMC_RSTCR_TIMBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMC_RSTCR_TIMBCMP2		(1 << 23)
/** HRTIM_TIMC_RSTCR_TIMBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMC_RSTCR_TIMBCMP1		(1 << 22)
/** HRTIM_TIMC_RSTCR_TIMACMP4 Timer A Compare 4 **/
#define HRTIM_TIMC_RSTCR_TIMACMP4		(1 << 21)
/** HRTIM_TIMC_RSTCR_TIMACMP2 Timer A Compare 2 **/
#define HRTIM_TIMC_RSTCR_TIMACMP2		(1 << 20)
/** HRTIM_TIMC_RSTCR_TIMACMP1 Timer A Compare 1 **/
#define HRTIM_TIMC_RSTCR_TIMACMP1		(1 << 19)
/** HRTIM_TIMC_RSTCR_EXTEVNT10 External Event 10 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT10		(1 << 18)
/** HRTIM_TIMC_RSTCR_EXTEVNT9 External Event 9 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT9		(1 << 17)
/** HRTIM_TIMC_RSTCR_EXTEVNT8 External Event 8 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT8		(1 << 16)
/** HRTIM_TIMC_RSTCR_EXTEVNT7 External Event 7 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT7		(1 << 15)
/** HRTIM_TIMC_RSTCR_EXTEVNT6 External Event 6 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT6		(1 << 14)
/** HRTIM_TIMC_RSTCR_EXTEVNT5 External Event 5 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT5		(1 << 13)
/** HRTIM_TIMC_RSTCR_EXTEVNT4 External Event 4 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT4		(1 << 12)
/** HRTIM_TIMC_RSTCR_EXTEVNT3 External Event 3 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT3		(1 << 11)
/** HRTIM_TIMC_RSTCR_EXTEVNT2 External Event 2 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT2		(1 << 10)
/** HRTIM_TIMC_RSTCR_EXTEVNT1 External Event 1 **/
#define HRTIM_TIMC_RSTCR_EXTEVNT1		(1 << 9)
/** HRTIM_TIMC_RSTCR_MSTCMP4 Master compare 4 **/
#define HRTIM_TIMC_RSTCR_MSTCMP4		(1 << 8)
/** HRTIM_TIMC_RSTCR_MSTCMP3 Master compare 3 **/
#define HRTIM_TIMC_RSTCR_MSTCMP3		(1 << 7)
/** HRTIM_TIMC_RSTCR_MSTCMP2 Master compare 2 **/
#define HRTIM_TIMC_RSTCR_MSTCMP2		(1 << 6)
/** HRTIM_TIMC_RSTCR_MSTCMP1 Master compare 1 **/
#define HRTIM_TIMC_RSTCR_MSTCMP1		(1 << 5)
/** HRTIM_TIMC_RSTCR_MSTPER Master timer Period **/
#define HRTIM_TIMC_RSTCR_MSTPER		(1 << 4)
/** HRTIM_TIMC_RSTCR_CMP4 Timer A compare 4 reset **/
#define HRTIM_TIMC_RSTCR_CMP4		(1 << 3)
/** HRTIM_TIMC_RSTCR_CMP2 Timer A compare 2 reset **/
#define HRTIM_TIMC_RSTCR_CMP2		(1 << 2)
/** HRTIM_TIMC_RSTCR_UPDT Timer A Update reset **/
#define HRTIM_TIMC_RSTCR_UPDT		(1 << 1)
/** HRTIM_TIMC_RSTCR_TIMFCMP1 Timer A Update reset **/
#define HRTIM_TIMC_RSTCR_TIMFCMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_chpcr CHPCR Timerx Chopper Register
@{*/


#define HRTIM_TIMC_CHPCR_STRTPW_SHIFT		7
#define HRTIM_TIMC_CHPCR_STRTPW_MASK		0x0f
/** @defgroup hrtim_timc_chpcr_strtpw STRTPW STRTPW
@{*/
/**@}*/


#define HRTIM_TIMC_CHPCR_CHPDTY_SHIFT		4
#define HRTIM_TIMC_CHPCR_CHPDTY_MASK		0x07
/** @defgroup hrtim_timc_chpcr_chpdty CHPDTY Timerx chopper duty cycle value
@{*/
/**@}*/


#define HRTIM_TIMC_CHPCR_CHPFRQ_SHIFT		0
#define HRTIM_TIMC_CHPCR_CHPFRQ_MASK		0x0f
/** @defgroup hrtim_timc_chpcr_chpfrq CHPFRQ Timerx carrier frequency value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_timc_cpt1ccr CPT1CCR Timerx Capture 2 Control Register
@{*/

/** HRTIM_TIMC_CPT1CCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMC_CPT1CCR_TECMP2		(1 << 31)
/** HRTIM_TIMC_CPT1CCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMC_CPT1CCR_TECMP1		(1 << 30)
/** HRTIM_TIMC_CPT1CCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMC_CPT1CCR_TE1RST		(1 << 29)
/** HRTIM_TIMC_CPT1CCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMC_CPT1CCR_TE1SET		(1 << 28)
/** HRTIM_TIMC_CPT1CCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMC_CPT1CCR_TDCMP2		(1 << 27)
/** HRTIM_TIMC_CPT1CCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMC_CPT1CCR_TDCMP1		(1 << 26)
/** HRTIM_TIMC_CPT1CCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMC_CPT1CCR_TD1RST		(1 << 25)
/** HRTIM_TIMC_CPT1CCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMC_CPT1CCR_TD1SET		(1 << 24)
/** HRTIM_TIMC_CPT1CCR_TFCMP2 TFCMP2 **/
#define HRTIM_TIMC_CPT1CCR_TFCMP2		(1 << 23)
/** HRTIM_TIMC_CPT1CCR_TFCMP1 TFCMP1 **/
#define HRTIM_TIMC_CPT1CCR_TFCMP1		(1 << 22)
/** HRTIM_TIMC_CPT1CCR_TF1RST TF1RST **/
#define HRTIM_TIMC_CPT1CCR_TF1RST		(1 << 21)
/** HRTIM_TIMC_CPT1CCR_TF1SET TF1SET **/
#define HRTIM_TIMC_CPT1CCR_TF1SET		(1 << 20)
/** HRTIM_TIMC_CPT1CCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMC_CPT1CCR_TBCMP2		(1 << 19)
/** HRTIM_TIMC_CPT1CCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMC_CPT1CCR_TBCMP1		(1 << 18)
/** HRTIM_TIMC_CPT1CCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMC_CPT1CCR_TB1RST		(1 << 17)
/** HRTIM_TIMC_CPT1CCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMC_CPT1CCR_TB1SET		(1 << 16)
/** HRTIM_TIMC_CPT1CCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMC_CPT1CCR_TACMP2		(1 << 15)
/** HRTIM_TIMC_CPT1CCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMC_CPT1CCR_TACMP1		(1 << 14)
/** HRTIM_TIMC_CPT1CCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMC_CPT1CCR_TA1RST		(1 << 13)
/** HRTIM_TIMC_CPT1CCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMC_CPT1CCR_TA1SET		(1 << 12)
/** HRTIM_TIMC_CPT1CCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMC_CPT1CCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMC_CPT1CCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMC_CPT1CCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMC_CPT1CCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMC_CPT1CCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMC_CPT1CCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMC_CPT1CCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMC_CPT1CCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMC_CPT1CCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMC_CPT1CCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMC_CPT1CCR_UDPCPT Update Capture **/
#define HRTIM_TIMC_CPT1CCR_UDPCPT		(1 << 1)
/** HRTIM_TIMC_CPT1CCR_SWCPT Software Capture **/
#define HRTIM_TIMC_CPT1CCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_cpt2ccr CPT2CCR CPT2xCR
@{*/

/** HRTIM_TIMC_CPT2CCR_TECMP2 Timer E Compare 2 **/
#define HRTIM_TIMC_CPT2CCR_TECMP2		(1 << 31)
/** HRTIM_TIMC_CPT2CCR_TECMP1 Timer E Compare 1 **/
#define HRTIM_TIMC_CPT2CCR_TECMP1		(1 << 30)
/** HRTIM_TIMC_CPT2CCR_TE1RST Timer E output 1 Reset **/
#define HRTIM_TIMC_CPT2CCR_TE1RST		(1 << 29)
/** HRTIM_TIMC_CPT2CCR_TE1SET Timer E output 1 Set **/
#define HRTIM_TIMC_CPT2CCR_TE1SET		(1 << 28)
/** HRTIM_TIMC_CPT2CCR_TDCMP2 Timer D Compare 2 **/
#define HRTIM_TIMC_CPT2CCR_TDCMP2		(1 << 27)
/** HRTIM_TIMC_CPT2CCR_TDCMP1 Timer D Compare 1 **/
#define HRTIM_TIMC_CPT2CCR_TDCMP1		(1 << 26)
/** HRTIM_TIMC_CPT2CCR_TD1RST Timer D output 1 Reset **/
#define HRTIM_TIMC_CPT2CCR_TD1RST		(1 << 25)
/** HRTIM_TIMC_CPT2CCR_TD1SET Timer D output 1 Set **/
#define HRTIM_TIMC_CPT2CCR_TD1SET		(1 << 24)
/** HRTIM_TIMC_CPT2CCR_TF1CMP2 TF1CMP2 **/
#define HRTIM_TIMC_CPT2CCR_TF1CMP2		(1 << 23)
/** HRTIM_TIMC_CPT2CCR_TF1CMP1 TF1CMP1 **/
#define HRTIM_TIMC_CPT2CCR_TF1CMP1		(1 << 22)
/** HRTIM_TIMC_CPT2CCR_TF1RST TF1RST **/
#define HRTIM_TIMC_CPT2CCR_TF1RST		(1 << 21)
/** HRTIM_TIMC_CPT2CCR_TF1SET TF1SET **/
#define HRTIM_TIMC_CPT2CCR_TF1SET		(1 << 20)
/** HRTIM_TIMC_CPT2CCR_TBCMP2 Timer B Compare 2 **/
#define HRTIM_TIMC_CPT2CCR_TBCMP2		(1 << 19)
/** HRTIM_TIMC_CPT2CCR_TBCMP1 Timer B Compare 1 **/
#define HRTIM_TIMC_CPT2CCR_TBCMP1		(1 << 18)
/** HRTIM_TIMC_CPT2CCR_TB1RST Timer B output 1 Reset **/
#define HRTIM_TIMC_CPT2CCR_TB1RST		(1 << 17)
/** HRTIM_TIMC_CPT2CCR_TB1SET Timer B output 1 Set **/
#define HRTIM_TIMC_CPT2CCR_TB1SET		(1 << 16)
/** HRTIM_TIMC_CPT2CCR_TACMP2 Timer A Compare 2 **/
#define HRTIM_TIMC_CPT2CCR_TACMP2		(1 << 15)
/** HRTIM_TIMC_CPT2CCR_TACMP1 Timer A Compare 1 **/
#define HRTIM_TIMC_CPT2CCR_TACMP1		(1 << 14)
/** HRTIM_TIMC_CPT2CCR_TA1RST Timer A output 1 Reset **/
#define HRTIM_TIMC_CPT2CCR_TA1RST		(1 << 13)
/** HRTIM_TIMC_CPT2CCR_TA1SET Timer A output 1 Set **/
#define HRTIM_TIMC_CPT2CCR_TA1SET		(1 << 12)
/** HRTIM_TIMC_CPT2CCR_EXEV10CPT External Event 10 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV10CPT		(1 << 11)
/** HRTIM_TIMC_CPT2CCR_EXEV9CPT External Event 9 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV9CPT		(1 << 10)
/** HRTIM_TIMC_CPT2CCR_EXEV8CPT External Event 8 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV8CPT		(1 << 9)
/** HRTIM_TIMC_CPT2CCR_EXEV7CPT External Event 7 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV7CPT		(1 << 8)
/** HRTIM_TIMC_CPT2CCR_EXEV6CPT External Event 6 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV6CPT		(1 << 7)
/** HRTIM_TIMC_CPT2CCR_EXEV5CPT External Event 5 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV5CPT		(1 << 6)
/** HRTIM_TIMC_CPT2CCR_EXEV4CPT External Event 4 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV4CPT		(1 << 5)
/** HRTIM_TIMC_CPT2CCR_EXEV3CPT External Event 3 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV3CPT		(1 << 4)
/** HRTIM_TIMC_CPT2CCR_EXEV2CPT External Event 2 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV2CPT		(1 << 3)
/** HRTIM_TIMC_CPT2CCR_EXEV1CPT External Event 1 Capture **/
#define HRTIM_TIMC_CPT2CCR_EXEV1CPT		(1 << 2)
/** HRTIM_TIMC_CPT2CCR_UDPCPT Update Capture **/
#define HRTIM_TIMC_CPT2CCR_UDPCPT		(1 << 1)
/** HRTIM_TIMC_CPT2CCR_SWCPT Software Capture **/
#define HRTIM_TIMC_CPT2CCR_SWCPT		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_outcr OUTCR Timerx Output Register
@{*/

/** HRTIM_TIMC_OUTCR_DIDL2 Output 2 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMC_OUTCR_DIDL2		(1 << 23)
/** HRTIM_TIMC_OUTCR_CHP2 Output 2 Chopper enable **/
#define HRTIM_TIMC_OUTCR_CHP2		(1 << 22)

#define HRTIM_TIMC_OUTCR_FAULT2_SHIFT		20
#define HRTIM_TIMC_OUTCR_FAULT2_MASK		0x03
/** @defgroup hrtim_timc_outcr_fault2 FAULT2 Output 2 Fault state
@{*/
/**@}*/

/** HRTIM_TIMC_OUTCR_IDLES2 Output 2 Idle State **/
#define HRTIM_TIMC_OUTCR_IDLES2		(1 << 19)
/** HRTIM_TIMC_OUTCR_IDLEM2 Output 2 Idle mode **/
#define HRTIM_TIMC_OUTCR_IDLEM2		(1 << 18)
/** HRTIM_TIMC_OUTCR_POL2 Output 2 polarity **/
#define HRTIM_TIMC_OUTCR_POL2		(1 << 17)
/** HRTIM_TIMC_OUTCR_BIAR Balanced Idle Automatic Resume **/
#define HRTIM_TIMC_OUTCR_BIAR		(1 << 14)

#define HRTIM_TIMC_OUTCR_DLYPRT_SHIFT		10
#define HRTIM_TIMC_OUTCR_DLYPRT_MASK		0x07
/** @defgroup hrtim_timc_outcr_dlyprt DLYPRT Delayed Protection
@{*/
/**@}*/

/** HRTIM_TIMC_OUTCR_DLYPRTEN Delayed Protection Enable **/
#define HRTIM_TIMC_OUTCR_DLYPRTEN		(1 << 9)
/** HRTIM_TIMC_OUTCR_DTEN Deadtime enable **/
#define HRTIM_TIMC_OUTCR_DTEN		(1 << 8)
/** HRTIM_TIMC_OUTCR_DIDL1 Output 1 Deadtime upon burst mode Idle entry **/
#define HRTIM_TIMC_OUTCR_DIDL1		(1 << 7)
/** HRTIM_TIMC_OUTCR_CHP1 Output 1 Chopper enable **/
#define HRTIM_TIMC_OUTCR_CHP1		(1 << 6)

#define HRTIM_TIMC_OUTCR_FAULT1_SHIFT		4
#define HRTIM_TIMC_OUTCR_FAULT1_MASK		0x03
/** @defgroup hrtim_timc_outcr_fault1 FAULT1 Output 1 Fault state
@{*/
/**@}*/

/** HRTIM_TIMC_OUTCR_IDLES1 Output 1 Idle State **/
#define HRTIM_TIMC_OUTCR_IDLES1		(1 << 3)
/** HRTIM_TIMC_OUTCR_IDLEM1 Output 1 Idle mode **/
#define HRTIM_TIMC_OUTCR_IDLEM1		(1 << 2)
/** HRTIM_TIMC_OUTCR_POL1 Output 1 polarity **/
#define HRTIM_TIMC_OUTCR_POL1		(1 << 1)

/**@}*/

/** @defgroup hrtim_timc_fltcr FLTCR Timerx Fault Register
@{*/

/** HRTIM_TIMC_FLTCR_FLTLCK Fault sources Lock **/
#define HRTIM_TIMC_FLTCR_FLTLCK		(1 << 31)
/** HRTIM_TIMC_FLTCR_FLT6EN Fault 6 enable **/
#define HRTIM_TIMC_FLTCR_FLT6EN		(1 << 5)
/** HRTIM_TIMC_FLTCR_FLT5EN Fault 5 enable **/
#define HRTIM_TIMC_FLTCR_FLT5EN		(1 << 4)
/** HRTIM_TIMC_FLTCR_FLT4EN Fault 4 enable **/
#define HRTIM_TIMC_FLTCR_FLT4EN		(1 << 3)
/** HRTIM_TIMC_FLTCR_FLT3EN Fault 3 enable **/
#define HRTIM_TIMC_FLTCR_FLT3EN		(1 << 2)
/** HRTIM_TIMC_FLTCR_FLT2EN Fault 2 enable **/
#define HRTIM_TIMC_FLTCR_FLT2EN		(1 << 1)
/** HRTIM_TIMC_FLTCR_FLT1EN Fault 1 enable **/
#define HRTIM_TIMC_FLTCR_FLT1EN		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_timccr2 TIMCCR2 HRTIM Timerx Control Register 2
@{*/

/** HRTIM_TIMC_TIMCCR2_TRGHLF Triggered-half mode **/
#define HRTIM_TIMC_TIMCCR2_TRGHLF		(1 << 20)
/** HRTIM_TIMC_TIMCCR2_GTCMP3 Greater than Compare 3 PWM mode **/
#define HRTIM_TIMC_TIMCCR2_GTCMP3		(1 << 17)
/** HRTIM_TIMC_TIMCCR2_GTCMP1 Greater than Compare 1 PWM mode **/
#define HRTIM_TIMC_TIMCCR2_GTCMP1		(1 << 16)

#define HRTIM_TIMC_TIMCCR2_FEROM_SHIFT		14
#define HRTIM_TIMC_TIMCCR2_FEROM_MASK		0x03
/** @defgroup hrtim_timc_timccr2_ferom FEROM Fault and Event Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMC_TIMCCR2_BMROM_SHIFT		12
#define HRTIM_TIMC_TIMCCR2_BMROM_MASK		0x03
/** @defgroup hrtim_timc_timccr2_bmrom BMROM Burst Mode Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMC_TIMCCR2_ADROM_SHIFT		10
#define HRTIM_TIMC_TIMCCR2_ADROM_MASK		0x03
/** @defgroup hrtim_timc_timccr2_adrom ADROM ADC Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMC_TIMCCR2_OUTROM_SHIFT		8
#define HRTIM_TIMC_TIMCCR2_OUTROM_MASK		0x03
/** @defgroup hrtim_timc_timccr2_outrom OUTROM Output Roll-Over Mode
@{*/
/**@}*/


#define HRTIM_TIMC_TIMCCR2_ROM_SHIFT		6
#define HRTIM_TIMC_TIMCCR2_ROM_MASK		0x03
/** @defgroup hrtim_timc_timccr2_rom ROM Roll-Over Mode
@{*/
/**@}*/

/** HRTIM_TIMC_TIMCCR2_UDM Up-Down Mode **/
#define HRTIM_TIMC_TIMCCR2_UDM		(1 << 4)
/** HRTIM_TIMC_TIMCCR2_DCDR Dual Channel DAC Reset trigger **/
#define HRTIM_TIMC_TIMCCR2_DCDR		(1 << 2)
/** HRTIM_TIMC_TIMCCR2_DCDS Dual Channel DAC Step trigger **/
#define HRTIM_TIMC_TIMCCR2_DCDS		(1 << 1)
/** HRTIM_TIMC_TIMCCR2_DCDE Dual Channel DAC trigger enable **/
#define HRTIM_TIMC_TIMCCR2_DCDE		(1 << 0)

/**@}*/

/** @defgroup hrtim_timc_ceefr3 CEEFR3 HRTIM Timerx External Event Filtering Register 3
@{*/


#define HRTIM_TIMC_CEEFR3_EEVACNT_SHIFT		8
#define HRTIM_TIMC_CEEFR3_EEVACNT_MASK		0x3f
/** @defgroup hrtim_timc_ceefr3_eevacnt EEVACNT External Event A counter
@{*/
/**@}*/


#define HRTIM_TIMC_CEEFR3_EEVASEL_SHIFT		4
#define HRTIM_TIMC_CEEFR3_EEVASEL_MASK		0x0f
/** @defgroup hrtim_timc_ceefr3_eevasel EEVASEL External Event A Selection
@{*/
/**@}*/

/** HRTIM_TIMC_CEEFR3_EEVARSTM External Event A Reset Mode **/
#define HRTIM_TIMC_CEEFR3_EEVARSTM		(1 << 2)
/** HRTIM_TIMC_CEEFR3_EEVACRES External Event A Counter Reset **/
#define HRTIM_TIMC_CEEFR3_EEVACRES		(1 << 1)
/** HRTIM_TIMC_CEEFR3_EEVACE External Event A Counter Enable **/
#define HRTIM_TIMC_CEEFR3_EEVACE		(1 << 0)

/**@}*/

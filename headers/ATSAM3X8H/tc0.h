#pragma once 

/* --- TC0: Timer Counter 0 ----------------------------------------- */

/** @defgroup tc0_registers Timer Counter 0 Register
@{*/

/** TC0_CCR0 Channel Control Register (channel = 0) **/
#define TC0_CCR0			MMIO32(TC0_BASE + 0x00)
/** TC0_CMR0 Channel Mode Register (channel = 0) **/
#define TC0_CMR0			MMIO32(TC0_BASE + 0x04)
/** TC0_CMR0_WAVE_EQ_1 Channel Mode Register (channel = 0) **/
#define TC0_CMR0_WAVE_EQ_1			MMIO32(TC0_BASE + 0x04)
/** TC0_SMMR0 Stepper Motor Mode Register (channel = 0) **/
#define TC0_SMMR0			MMIO32(TC0_BASE + 0x08)
/** TC0_CV0 Counter Value (channel = 0) **/
#define TC0_CV0			MMIO32(TC0_BASE + 0x10)
/** TC0_RA0 Register A (channel = 0) **/
#define TC0_RA0			MMIO32(TC0_BASE + 0x14)
/** TC0_RB0 Register B (channel = 0) **/
#define TC0_RB0			MMIO32(TC0_BASE + 0x18)
/** TC0_RC0 Register C (channel = 0) **/
#define TC0_RC0			MMIO32(TC0_BASE + 0x1c)
/** TC0_SR0 Status Register (channel = 0) **/
#define TC0_SR0			MMIO32(TC0_BASE + 0x20)
/** TC0_IER0 Interrupt Enable Register (channel = 0) **/
#define TC0_IER0			MMIO32(TC0_BASE + 0x24)
/** TC0_IDR0 Interrupt Disable Register (channel = 0) **/
#define TC0_IDR0			MMIO32(TC0_BASE + 0x28)
/** TC0_IMR0 Interrupt Mask Register (channel = 0) **/
#define TC0_IMR0			MMIO32(TC0_BASE + 0x2c)
/** TC0_CCR1 Channel Control Register (channel = 1) **/
#define TC0_CCR1			MMIO32(TC0_BASE + 0x40)
/** TC0_CMR1 Channel Mode Register (channel = 1) **/
#define TC0_CMR1			MMIO32(TC0_BASE + 0x44)
/** TC0_CMR1_WAVE_EQ_1 Channel Mode Register (channel = 1) **/
#define TC0_CMR1_WAVE_EQ_1			MMIO32(TC0_BASE + 0x44)
/** TC0_SMMR1 Stepper Motor Mode Register (channel = 1) **/
#define TC0_SMMR1			MMIO32(TC0_BASE + 0x48)
/** TC0_CV1 Counter Value (channel = 1) **/
#define TC0_CV1			MMIO32(TC0_BASE + 0x50)
/** TC0_RA1 Register A (channel = 1) **/
#define TC0_RA1			MMIO32(TC0_BASE + 0x54)
/** TC0_RB1 Register B (channel = 1) **/
#define TC0_RB1			MMIO32(TC0_BASE + 0x58)
/** TC0_RC1 Register C (channel = 1) **/
#define TC0_RC1			MMIO32(TC0_BASE + 0x5c)
/** TC0_SR1 Status Register (channel = 1) **/
#define TC0_SR1			MMIO32(TC0_BASE + 0x60)
/** TC0_IER1 Interrupt Enable Register (channel = 1) **/
#define TC0_IER1			MMIO32(TC0_BASE + 0x64)
/** TC0_IDR1 Interrupt Disable Register (channel = 1) **/
#define TC0_IDR1			MMIO32(TC0_BASE + 0x68)
/** TC0_IMR1 Interrupt Mask Register (channel = 1) **/
#define TC0_IMR1			MMIO32(TC0_BASE + 0x6c)
/** TC0_CCR2 Channel Control Register (channel = 2) **/
#define TC0_CCR2			MMIO32(TC0_BASE + 0x80)
/** TC0_CMR2 Channel Mode Register (channel = 2) **/
#define TC0_CMR2			MMIO32(TC0_BASE + 0x84)
/** TC0_CMR2_WAVE_EQ_1 Channel Mode Register (channel = 2) **/
#define TC0_CMR2_WAVE_EQ_1			MMIO32(TC0_BASE + 0x84)
/** TC0_SMMR2 Stepper Motor Mode Register (channel = 2) **/
#define TC0_SMMR2			MMIO32(TC0_BASE + 0x88)
/** TC0_CV2 Counter Value (channel = 2) **/
#define TC0_CV2			MMIO32(TC0_BASE + 0x90)
/** TC0_RA2 Register A (channel = 2) **/
#define TC0_RA2			MMIO32(TC0_BASE + 0x94)
/** TC0_RB2 Register B (channel = 2) **/
#define TC0_RB2			MMIO32(TC0_BASE + 0x98)
/** TC0_RC2 Register C (channel = 2) **/
#define TC0_RC2			MMIO32(TC0_BASE + 0x9c)
/** TC0_SR2 Status Register (channel = 2) **/
#define TC0_SR2			MMIO32(TC0_BASE + 0xa0)
/** TC0_IER2 Interrupt Enable Register (channel = 2) **/
#define TC0_IER2			MMIO32(TC0_BASE + 0xa4)
/** TC0_IDR2 Interrupt Disable Register (channel = 2) **/
#define TC0_IDR2			MMIO32(TC0_BASE + 0xa8)
/** TC0_IMR2 Interrupt Mask Register (channel = 2) **/
#define TC0_IMR2			MMIO32(TC0_BASE + 0xac)
/** TC0_BCR Block Control Register **/
#define TC0_BCR			MMIO32(TC0_BASE + 0xc0)
/** TC0_BMR Block Mode Register **/
#define TC0_BMR			MMIO32(TC0_BASE + 0xc4)
/** TC0_QIER QDEC Interrupt Enable Register **/
#define TC0_QIER			MMIO32(TC0_BASE + 0xc8)
/** TC0_QIDR QDEC Interrupt Disable Register **/
#define TC0_QIDR			MMIO32(TC0_BASE + 0xcc)
/** TC0_QIMR QDEC Interrupt Mask Register **/
#define TC0_QIMR			MMIO32(TC0_BASE + 0xd0)
/** TC0_QISR QDEC Interrupt Status Register **/
#define TC0_QISR			MMIO32(TC0_BASE + 0xd4)
/** TC0_FMR Fault Mode Register **/
#define TC0_FMR			MMIO32(TC0_BASE + 0xd8)
/** TC0_WPMR Write Protect Mode Register **/
#define TC0_WPMR			MMIO32(TC0_BASE + 0xe4)

/**@}*/


/** @defgroup tc0_ccr0 CCR0 Channel Control Register (channel = 0)
@{*/

/** TC0_CCR0_SWTRG Software Trigger Command **/
#define TC0_CCR0_SWTRG		(1 << 2)
/** TC0_CCR0_CLKDIS Counter Clock Disable Command **/
#define TC0_CCR0_CLKDIS		(1 << 1)
/** TC0_CCR0_CLKEN Counter Clock Enable Command **/
#define TC0_CCR0_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cmr0 CMR0 Channel Mode Register (channel = 0)
@{*/


#define TC0_CMR0_LDRB_SHIFT		18
#define TC0_CMR0_LDRB_MASK		0x03
/** @defgroup tc0_cmr0_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_CMR0_LDRA_SHIFT		16
#define TC0_CMR0_LDRA_MASK		0x03
/** @defgroup tc0_cmr0_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_CMR0_WAVE Waveform Mode **/
#define TC0_CMR0_WAVE		(1 << 15)
/** TC0_CMR0_CPCTRG RC Compare Trigger Enable **/
#define TC0_CMR0_CPCTRG		(1 << 14)
/** TC0_CMR0_ABETRG TIOA or TIOB External Trigger Selection **/
#define TC0_CMR0_ABETRG		(1 << 10)

#define TC0_CMR0_ETRGEDG_SHIFT		8
#define TC0_CMR0_ETRGEDG_MASK		0x03
/** @defgroup tc0_cmr0_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_CMR0_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_CMR0_LDBDIS		(1 << 7)
/** TC0_CMR0_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_CMR0_LDBSTOP		(1 << 6)

#define TC0_CMR0_BURST_SHIFT		4
#define TC0_CMR0_BURST_MASK		0x03
/** @defgroup tc0_cmr0_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR0_CLKI Clock Invert **/
#define TC0_CMR0_CLKI		(1 << 3)

#define TC0_CMR0_TCCLKS_SHIFT		0
#define TC0_CMR0_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr0_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_cmr0_wave_eq_1 CMR0WAVEEQ1 Channel Mode Register (channel = 0)
@{*/


#define TC0_CMR0_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC0_CMR0_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_bswtrg BSWTRG Software Trigger Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC0_CMR0_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_beevt BEEVT External Event Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_BCPC_SHIFT		26
#define TC0_CMR0_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_bcpc BCPC RC Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_BCPB_SHIFT		24
#define TC0_CMR0_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_bcpb BCPB RB Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC0_CMR0_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_aswtrg ASWTRG Software Trigger Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC0_CMR0_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_aeevt AEEVT External Event Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_ACPC_SHIFT		18
#define TC0_CMR0_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_acpc ACPC RC Compare Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_ACPA_SHIFT		16
#define TC0_CMR0_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_acpa ACPA RA Compare Effect on TIOA
@{*/
/**@}*/

/** TC0_CMR0_WAVE_EQ_1_WAVE Waveform Mode **/
#define TC0_CMR0_WAVE_EQ_1_WAVE		(1 << 15)

#define TC0_CMR0_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC0_CMR0_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_CMR0_WAVE_EQ_1_ENETRG External Event Trigger Enable **/
#define TC0_CMR0_WAVE_EQ_1_ENETRG		(1 << 12)

#define TC0_CMR0_WAVE_EQ_1_EEVT_SHIFT		10
#define TC0_CMR0_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_CMR0_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC0_CMR0_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_CMR0_WAVE_EQ_1_CPCDIS Counter Clock Disable with RC Compare **/
#define TC0_CMR0_WAVE_EQ_1_CPCDIS		(1 << 7)
/** TC0_CMR0_WAVE_EQ_1_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_CMR0_WAVE_EQ_1_CPCSTOP		(1 << 6)

#define TC0_CMR0_WAVE_EQ_1_BURST_SHIFT		4
#define TC0_CMR0_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc0_cmr0_wave_eq_1_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR0_WAVE_EQ_1_CLKI Clock Invert **/
#define TC0_CMR0_WAVE_EQ_1_CLKI		(1 << 3)

#define TC0_CMR0_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC0_CMR0_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr0_wave_eq_1_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_smmr0 SMMR0 Stepper Motor Mode Register (channel = 0)
@{*/

/** TC0_SMMR0_DOWN DOWN Count **/
#define TC0_SMMR0_DOWN		(1 << 1)
/** TC0_SMMR0_GCEN Gray Count Enable **/
#define TC0_SMMR0_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cv0 CV0 Counter Value (channel = 0)
@{*/


#define TC0_CV0_CV_SHIFT		0
#define TC0_CV0_CV_MASK		0xffffffff
/** @defgroup tc0_cv0_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_ra0 RA0 Register A (channel = 0)
@{*/


#define TC0_RA0_RA_SHIFT		0
#define TC0_RA0_RA_MASK		0xffffffff
/** @defgroup tc0_ra0_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rb0 RB0 Register B (channel = 0)
@{*/


#define TC0_RB0_RB_SHIFT		0
#define TC0_RB0_RB_MASK		0xffffffff
/** @defgroup tc0_rb0_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rc0 RC0 Register C (channel = 0)
@{*/


#define TC0_RC0_RC_SHIFT		0
#define TC0_RC0_RC_MASK		0xffffffff
/** @defgroup tc0_rc0_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_sr0 SR0 Status Register (channel = 0)
@{*/

/** TC0_SR0_MTIOB TIOB Mirror **/
#define TC0_SR0_MTIOB		(1 << 18)
/** TC0_SR0_MTIOA TIOA Mirror **/
#define TC0_SR0_MTIOA		(1 << 17)
/** TC0_SR0_CLKSTA Clock Enabling Status **/
#define TC0_SR0_CLKSTA		(1 << 16)
/** TC0_SR0_ETRGS External Trigger Status **/
#define TC0_SR0_ETRGS		(1 << 7)
/** TC0_SR0_LDRBS RB Loading Status **/
#define TC0_SR0_LDRBS		(1 << 6)
/** TC0_SR0_LDRAS RA Loading Status **/
#define TC0_SR0_LDRAS		(1 << 5)
/** TC0_SR0_CPCS RC Compare Status **/
#define TC0_SR0_CPCS		(1 << 4)
/** TC0_SR0_CPBS RB Compare Status **/
#define TC0_SR0_CPBS		(1 << 3)
/** TC0_SR0_CPAS RA Compare Status **/
#define TC0_SR0_CPAS		(1 << 2)
/** TC0_SR0_LOVRS Load Overrun Status **/
#define TC0_SR0_LOVRS		(1 << 1)
/** TC0_SR0_COVFS Counter Overflow Status **/
#define TC0_SR0_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_ier0 IER0 Interrupt Enable Register (channel = 0)
@{*/

/** TC0_IER0_ETRGS External Trigger **/
#define TC0_IER0_ETRGS		(1 << 7)
/** TC0_IER0_LDRBS RB Loading **/
#define TC0_IER0_LDRBS		(1 << 6)
/** TC0_IER0_LDRAS RA Loading **/
#define TC0_IER0_LDRAS		(1 << 5)
/** TC0_IER0_CPCS RC Compare **/
#define TC0_IER0_CPCS		(1 << 4)
/** TC0_IER0_CPBS RB Compare **/
#define TC0_IER0_CPBS		(1 << 3)
/** TC0_IER0_CPAS RA Compare **/
#define TC0_IER0_CPAS		(1 << 2)
/** TC0_IER0_LOVRS Load Overrun **/
#define TC0_IER0_LOVRS		(1 << 1)
/** TC0_IER0_COVFS Counter Overflow **/
#define TC0_IER0_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_idr0 IDR0 Interrupt Disable Register (channel = 0)
@{*/

/** TC0_IDR0_ETRGS External Trigger **/
#define TC0_IDR0_ETRGS		(1 << 7)
/** TC0_IDR0_LDRBS RB Loading **/
#define TC0_IDR0_LDRBS		(1 << 6)
/** TC0_IDR0_LDRAS RA Loading **/
#define TC0_IDR0_LDRAS		(1 << 5)
/** TC0_IDR0_CPCS RC Compare **/
#define TC0_IDR0_CPCS		(1 << 4)
/** TC0_IDR0_CPBS RB Compare **/
#define TC0_IDR0_CPBS		(1 << 3)
/** TC0_IDR0_CPAS RA Compare **/
#define TC0_IDR0_CPAS		(1 << 2)
/** TC0_IDR0_LOVRS Load Overrun **/
#define TC0_IDR0_LOVRS		(1 << 1)
/** TC0_IDR0_COVFS Counter Overflow **/
#define TC0_IDR0_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_imr0 IMR0 Interrupt Mask Register (channel = 0)
@{*/

/** TC0_IMR0_ETRGS External Trigger **/
#define TC0_IMR0_ETRGS		(1 << 7)
/** TC0_IMR0_LDRBS RB Loading **/
#define TC0_IMR0_LDRBS		(1 << 6)
/** TC0_IMR0_LDRAS RA Loading **/
#define TC0_IMR0_LDRAS		(1 << 5)
/** TC0_IMR0_CPCS RC Compare **/
#define TC0_IMR0_CPCS		(1 << 4)
/** TC0_IMR0_CPBS RB Compare **/
#define TC0_IMR0_CPBS		(1 << 3)
/** TC0_IMR0_CPAS RA Compare **/
#define TC0_IMR0_CPAS		(1 << 2)
/** TC0_IMR0_LOVRS Load Overrun **/
#define TC0_IMR0_LOVRS		(1 << 1)
/** TC0_IMR0_COVFS Counter Overflow **/
#define TC0_IMR0_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_ccr1 CCR1 Channel Control Register (channel = 1)
@{*/

/** TC0_CCR1_SWTRG Software Trigger Command **/
#define TC0_CCR1_SWTRG		(1 << 2)
/** TC0_CCR1_CLKDIS Counter Clock Disable Command **/
#define TC0_CCR1_CLKDIS		(1 << 1)
/** TC0_CCR1_CLKEN Counter Clock Enable Command **/
#define TC0_CCR1_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cmr1 CMR1 Channel Mode Register (channel = 1)
@{*/


#define TC0_CMR1_LDRB_SHIFT		18
#define TC0_CMR1_LDRB_MASK		0x03
/** @defgroup tc0_cmr1_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_CMR1_LDRA_SHIFT		16
#define TC0_CMR1_LDRA_MASK		0x03
/** @defgroup tc0_cmr1_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_CMR1_WAVE Waveform Mode **/
#define TC0_CMR1_WAVE		(1 << 15)
/** TC0_CMR1_CPCTRG RC Compare Trigger Enable **/
#define TC0_CMR1_CPCTRG		(1 << 14)
/** TC0_CMR1_ABETRG TIOA or TIOB External Trigger Selection **/
#define TC0_CMR1_ABETRG		(1 << 10)

#define TC0_CMR1_ETRGEDG_SHIFT		8
#define TC0_CMR1_ETRGEDG_MASK		0x03
/** @defgroup tc0_cmr1_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_CMR1_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_CMR1_LDBDIS		(1 << 7)
/** TC0_CMR1_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_CMR1_LDBSTOP		(1 << 6)

#define TC0_CMR1_BURST_SHIFT		4
#define TC0_CMR1_BURST_MASK		0x03
/** @defgroup tc0_cmr1_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR1_CLKI Clock Invert **/
#define TC0_CMR1_CLKI		(1 << 3)

#define TC0_CMR1_TCCLKS_SHIFT		0
#define TC0_CMR1_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr1_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_cmr1_wave_eq_1 CMR1WAVEEQ1 Channel Mode Register (channel = 1)
@{*/


#define TC0_CMR1_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC0_CMR1_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_bswtrg BSWTRG Software Trigger Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC0_CMR1_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_beevt BEEVT External Event Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_BCPC_SHIFT		26
#define TC0_CMR1_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_bcpc BCPC RC Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_BCPB_SHIFT		24
#define TC0_CMR1_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_bcpb BCPB RB Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC0_CMR1_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_aswtrg ASWTRG Software Trigger Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC0_CMR1_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_aeevt AEEVT External Event Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_ACPC_SHIFT		18
#define TC0_CMR1_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_acpc ACPC RC Compare Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_ACPA_SHIFT		16
#define TC0_CMR1_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_acpa ACPA RA Compare Effect on TIOA
@{*/
/**@}*/

/** TC0_CMR1_WAVE_EQ_1_WAVE Waveform Mode **/
#define TC0_CMR1_WAVE_EQ_1_WAVE		(1 << 15)

#define TC0_CMR1_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC0_CMR1_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_CMR1_WAVE_EQ_1_ENETRG External Event Trigger Enable **/
#define TC0_CMR1_WAVE_EQ_1_ENETRG		(1 << 12)

#define TC0_CMR1_WAVE_EQ_1_EEVT_SHIFT		10
#define TC0_CMR1_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_CMR1_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC0_CMR1_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_CMR1_WAVE_EQ_1_CPCDIS Counter Clock Disable with RC Compare **/
#define TC0_CMR1_WAVE_EQ_1_CPCDIS		(1 << 7)
/** TC0_CMR1_WAVE_EQ_1_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_CMR1_WAVE_EQ_1_CPCSTOP		(1 << 6)

#define TC0_CMR1_WAVE_EQ_1_BURST_SHIFT		4
#define TC0_CMR1_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc0_cmr1_wave_eq_1_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR1_WAVE_EQ_1_CLKI Clock Invert **/
#define TC0_CMR1_WAVE_EQ_1_CLKI		(1 << 3)

#define TC0_CMR1_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC0_CMR1_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr1_wave_eq_1_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_smmr1 SMMR1 Stepper Motor Mode Register (channel = 1)
@{*/

/** TC0_SMMR1_DOWN DOWN Count **/
#define TC0_SMMR1_DOWN		(1 << 1)
/** TC0_SMMR1_GCEN Gray Count Enable **/
#define TC0_SMMR1_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cv1 CV1 Counter Value (channel = 1)
@{*/


#define TC0_CV1_CV_SHIFT		0
#define TC0_CV1_CV_MASK		0xffffffff
/** @defgroup tc0_cv1_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_ra1 RA1 Register A (channel = 1)
@{*/


#define TC0_RA1_RA_SHIFT		0
#define TC0_RA1_RA_MASK		0xffffffff
/** @defgroup tc0_ra1_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rb1 RB1 Register B (channel = 1)
@{*/


#define TC0_RB1_RB_SHIFT		0
#define TC0_RB1_RB_MASK		0xffffffff
/** @defgroup tc0_rb1_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rc1 RC1 Register C (channel = 1)
@{*/


#define TC0_RC1_RC_SHIFT		0
#define TC0_RC1_RC_MASK		0xffffffff
/** @defgroup tc0_rc1_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_sr1 SR1 Status Register (channel = 1)
@{*/

/** TC0_SR1_MTIOB TIOB Mirror **/
#define TC0_SR1_MTIOB		(1 << 18)
/** TC0_SR1_MTIOA TIOA Mirror **/
#define TC0_SR1_MTIOA		(1 << 17)
/** TC0_SR1_CLKSTA Clock Enabling Status **/
#define TC0_SR1_CLKSTA		(1 << 16)
/** TC0_SR1_ETRGS External Trigger Status **/
#define TC0_SR1_ETRGS		(1 << 7)
/** TC0_SR1_LDRBS RB Loading Status **/
#define TC0_SR1_LDRBS		(1 << 6)
/** TC0_SR1_LDRAS RA Loading Status **/
#define TC0_SR1_LDRAS		(1 << 5)
/** TC0_SR1_CPCS RC Compare Status **/
#define TC0_SR1_CPCS		(1 << 4)
/** TC0_SR1_CPBS RB Compare Status **/
#define TC0_SR1_CPBS		(1 << 3)
/** TC0_SR1_CPAS RA Compare Status **/
#define TC0_SR1_CPAS		(1 << 2)
/** TC0_SR1_LOVRS Load Overrun Status **/
#define TC0_SR1_LOVRS		(1 << 1)
/** TC0_SR1_COVFS Counter Overflow Status **/
#define TC0_SR1_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_ier1 IER1 Interrupt Enable Register (channel = 1)
@{*/

/** TC0_IER1_ETRGS External Trigger **/
#define TC0_IER1_ETRGS		(1 << 7)
/** TC0_IER1_LDRBS RB Loading **/
#define TC0_IER1_LDRBS		(1 << 6)
/** TC0_IER1_LDRAS RA Loading **/
#define TC0_IER1_LDRAS		(1 << 5)
/** TC0_IER1_CPCS RC Compare **/
#define TC0_IER1_CPCS		(1 << 4)
/** TC0_IER1_CPBS RB Compare **/
#define TC0_IER1_CPBS		(1 << 3)
/** TC0_IER1_CPAS RA Compare **/
#define TC0_IER1_CPAS		(1 << 2)
/** TC0_IER1_LOVRS Load Overrun **/
#define TC0_IER1_LOVRS		(1 << 1)
/** TC0_IER1_COVFS Counter Overflow **/
#define TC0_IER1_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_idr1 IDR1 Interrupt Disable Register (channel = 1)
@{*/

/** TC0_IDR1_ETRGS External Trigger **/
#define TC0_IDR1_ETRGS		(1 << 7)
/** TC0_IDR1_LDRBS RB Loading **/
#define TC0_IDR1_LDRBS		(1 << 6)
/** TC0_IDR1_LDRAS RA Loading **/
#define TC0_IDR1_LDRAS		(1 << 5)
/** TC0_IDR1_CPCS RC Compare **/
#define TC0_IDR1_CPCS		(1 << 4)
/** TC0_IDR1_CPBS RB Compare **/
#define TC0_IDR1_CPBS		(1 << 3)
/** TC0_IDR1_CPAS RA Compare **/
#define TC0_IDR1_CPAS		(1 << 2)
/** TC0_IDR1_LOVRS Load Overrun **/
#define TC0_IDR1_LOVRS		(1 << 1)
/** TC0_IDR1_COVFS Counter Overflow **/
#define TC0_IDR1_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_imr1 IMR1 Interrupt Mask Register (channel = 1)
@{*/

/** TC0_IMR1_ETRGS External Trigger **/
#define TC0_IMR1_ETRGS		(1 << 7)
/** TC0_IMR1_LDRBS RB Loading **/
#define TC0_IMR1_LDRBS		(1 << 6)
/** TC0_IMR1_LDRAS RA Loading **/
#define TC0_IMR1_LDRAS		(1 << 5)
/** TC0_IMR1_CPCS RC Compare **/
#define TC0_IMR1_CPCS		(1 << 4)
/** TC0_IMR1_CPBS RB Compare **/
#define TC0_IMR1_CPBS		(1 << 3)
/** TC0_IMR1_CPAS RA Compare **/
#define TC0_IMR1_CPAS		(1 << 2)
/** TC0_IMR1_LOVRS Load Overrun **/
#define TC0_IMR1_LOVRS		(1 << 1)
/** TC0_IMR1_COVFS Counter Overflow **/
#define TC0_IMR1_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_ccr2 CCR2 Channel Control Register (channel = 2)
@{*/

/** TC0_CCR2_SWTRG Software Trigger Command **/
#define TC0_CCR2_SWTRG		(1 << 2)
/** TC0_CCR2_CLKDIS Counter Clock Disable Command **/
#define TC0_CCR2_CLKDIS		(1 << 1)
/** TC0_CCR2_CLKEN Counter Clock Enable Command **/
#define TC0_CCR2_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cmr2 CMR2 Channel Mode Register (channel = 2)
@{*/


#define TC0_CMR2_LDRB_SHIFT		18
#define TC0_CMR2_LDRB_MASK		0x03
/** @defgroup tc0_cmr2_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_CMR2_LDRA_SHIFT		16
#define TC0_CMR2_LDRA_MASK		0x03
/** @defgroup tc0_cmr2_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_CMR2_WAVE Waveform Mode **/
#define TC0_CMR2_WAVE		(1 << 15)
/** TC0_CMR2_CPCTRG RC Compare Trigger Enable **/
#define TC0_CMR2_CPCTRG		(1 << 14)
/** TC0_CMR2_ABETRG TIOA or TIOB External Trigger Selection **/
#define TC0_CMR2_ABETRG		(1 << 10)

#define TC0_CMR2_ETRGEDG_SHIFT		8
#define TC0_CMR2_ETRGEDG_MASK		0x03
/** @defgroup tc0_cmr2_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_CMR2_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_CMR2_LDBDIS		(1 << 7)
/** TC0_CMR2_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_CMR2_LDBSTOP		(1 << 6)

#define TC0_CMR2_BURST_SHIFT		4
#define TC0_CMR2_BURST_MASK		0x03
/** @defgroup tc0_cmr2_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR2_CLKI Clock Invert **/
#define TC0_CMR2_CLKI		(1 << 3)

#define TC0_CMR2_TCCLKS_SHIFT		0
#define TC0_CMR2_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr2_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_cmr2_wave_eq_1 CMR2WAVEEQ1 Channel Mode Register (channel = 2)
@{*/


#define TC0_CMR2_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC0_CMR2_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_bswtrg BSWTRG Software Trigger Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC0_CMR2_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_beevt BEEVT External Event Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_BCPC_SHIFT		26
#define TC0_CMR2_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_bcpc BCPC RC Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_BCPB_SHIFT		24
#define TC0_CMR2_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_bcpb BCPB RB Compare Effect on TIOB
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC0_CMR2_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_aswtrg ASWTRG Software Trigger Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC0_CMR2_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_aeevt AEEVT External Event Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_ACPC_SHIFT		18
#define TC0_CMR2_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_acpc ACPC RC Compare Effect on TIOA
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_ACPA_SHIFT		16
#define TC0_CMR2_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_acpa ACPA RA Compare Effect on TIOA
@{*/
/**@}*/

/** TC0_CMR2_WAVE_EQ_1_WAVE Waveform Mode **/
#define TC0_CMR2_WAVE_EQ_1_WAVE		(1 << 15)

#define TC0_CMR2_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC0_CMR2_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_CMR2_WAVE_EQ_1_ENETRG External Event Trigger Enable **/
#define TC0_CMR2_WAVE_EQ_1_ENETRG		(1 << 12)

#define TC0_CMR2_WAVE_EQ_1_EEVT_SHIFT		10
#define TC0_CMR2_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_CMR2_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC0_CMR2_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_CMR2_WAVE_EQ_1_CPCDIS Counter Clock Disable with RC Compare **/
#define TC0_CMR2_WAVE_EQ_1_CPCDIS		(1 << 7)
/** TC0_CMR2_WAVE_EQ_1_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_CMR2_WAVE_EQ_1_CPCSTOP		(1 << 6)

#define TC0_CMR2_WAVE_EQ_1_BURST_SHIFT		4
#define TC0_CMR2_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc0_cmr2_wave_eq_1_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_CMR2_WAVE_EQ_1_CLKI Clock Invert **/
#define TC0_CMR2_WAVE_EQ_1_CLKI		(1 << 3)

#define TC0_CMR2_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC0_CMR2_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc0_cmr2_wave_eq_1_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_smmr2 SMMR2 Stepper Motor Mode Register (channel = 2)
@{*/

/** TC0_SMMR2_DOWN DOWN Count **/
#define TC0_SMMR2_DOWN		(1 << 1)
/** TC0_SMMR2_GCEN Gray Count Enable **/
#define TC0_SMMR2_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_cv2 CV2 Counter Value (channel = 2)
@{*/


#define TC0_CV2_CV_SHIFT		0
#define TC0_CV2_CV_MASK		0xffffffff
/** @defgroup tc0_cv2_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_ra2 RA2 Register A (channel = 2)
@{*/


#define TC0_RA2_RA_SHIFT		0
#define TC0_RA2_RA_MASK		0xffffffff
/** @defgroup tc0_ra2_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rb2 RB2 Register B (channel = 2)
@{*/


#define TC0_RB2_RB_SHIFT		0
#define TC0_RB2_RB_MASK		0xffffffff
/** @defgroup tc0_rb2_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_rc2 RC2 Register C (channel = 2)
@{*/


#define TC0_RC2_RC_SHIFT		0
#define TC0_RC2_RC_MASK		0xffffffff
/** @defgroup tc0_rc2_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_sr2 SR2 Status Register (channel = 2)
@{*/

/** TC0_SR2_MTIOB TIOB Mirror **/
#define TC0_SR2_MTIOB		(1 << 18)
/** TC0_SR2_MTIOA TIOA Mirror **/
#define TC0_SR2_MTIOA		(1 << 17)
/** TC0_SR2_CLKSTA Clock Enabling Status **/
#define TC0_SR2_CLKSTA		(1 << 16)
/** TC0_SR2_ETRGS External Trigger Status **/
#define TC0_SR2_ETRGS		(1 << 7)
/** TC0_SR2_LDRBS RB Loading Status **/
#define TC0_SR2_LDRBS		(1 << 6)
/** TC0_SR2_LDRAS RA Loading Status **/
#define TC0_SR2_LDRAS		(1 << 5)
/** TC0_SR2_CPCS RC Compare Status **/
#define TC0_SR2_CPCS		(1 << 4)
/** TC0_SR2_CPBS RB Compare Status **/
#define TC0_SR2_CPBS		(1 << 3)
/** TC0_SR2_CPAS RA Compare Status **/
#define TC0_SR2_CPAS		(1 << 2)
/** TC0_SR2_LOVRS Load Overrun Status **/
#define TC0_SR2_LOVRS		(1 << 1)
/** TC0_SR2_COVFS Counter Overflow Status **/
#define TC0_SR2_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_ier2 IER2 Interrupt Enable Register (channel = 2)
@{*/

/** TC0_IER2_ETRGS External Trigger **/
#define TC0_IER2_ETRGS		(1 << 7)
/** TC0_IER2_LDRBS RB Loading **/
#define TC0_IER2_LDRBS		(1 << 6)
/** TC0_IER2_LDRAS RA Loading **/
#define TC0_IER2_LDRAS		(1 << 5)
/** TC0_IER2_CPCS RC Compare **/
#define TC0_IER2_CPCS		(1 << 4)
/** TC0_IER2_CPBS RB Compare **/
#define TC0_IER2_CPBS		(1 << 3)
/** TC0_IER2_CPAS RA Compare **/
#define TC0_IER2_CPAS		(1 << 2)
/** TC0_IER2_LOVRS Load Overrun **/
#define TC0_IER2_LOVRS		(1 << 1)
/** TC0_IER2_COVFS Counter Overflow **/
#define TC0_IER2_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_idr2 IDR2 Interrupt Disable Register (channel = 2)
@{*/

/** TC0_IDR2_ETRGS External Trigger **/
#define TC0_IDR2_ETRGS		(1 << 7)
/** TC0_IDR2_LDRBS RB Loading **/
#define TC0_IDR2_LDRBS		(1 << 6)
/** TC0_IDR2_LDRAS RA Loading **/
#define TC0_IDR2_LDRAS		(1 << 5)
/** TC0_IDR2_CPCS RC Compare **/
#define TC0_IDR2_CPCS		(1 << 4)
/** TC0_IDR2_CPBS RB Compare **/
#define TC0_IDR2_CPBS		(1 << 3)
/** TC0_IDR2_CPAS RA Compare **/
#define TC0_IDR2_CPAS		(1 << 2)
/** TC0_IDR2_LOVRS Load Overrun **/
#define TC0_IDR2_LOVRS		(1 << 1)
/** TC0_IDR2_COVFS Counter Overflow **/
#define TC0_IDR2_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_imr2 IMR2 Interrupt Mask Register (channel = 2)
@{*/

/** TC0_IMR2_ETRGS External Trigger **/
#define TC0_IMR2_ETRGS		(1 << 7)
/** TC0_IMR2_LDRBS RB Loading **/
#define TC0_IMR2_LDRBS		(1 << 6)
/** TC0_IMR2_LDRAS RA Loading **/
#define TC0_IMR2_LDRAS		(1 << 5)
/** TC0_IMR2_CPCS RC Compare **/
#define TC0_IMR2_CPCS		(1 << 4)
/** TC0_IMR2_CPBS RB Compare **/
#define TC0_IMR2_CPBS		(1 << 3)
/** TC0_IMR2_CPAS RA Compare **/
#define TC0_IMR2_CPAS		(1 << 2)
/** TC0_IMR2_LOVRS Load Overrun **/
#define TC0_IMR2_LOVRS		(1 << 1)
/** TC0_IMR2_COVFS Counter Overflow **/
#define TC0_IMR2_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_bcr BCR Block Control Register
@{*/

/** TC0_BCR_SYNC Synchro Command **/
#define TC0_BCR_SYNC		(1 << 0)

/**@}*/

/** @defgroup tc0_bmr BMR Block Mode Register
@{*/


#define TC0_BMR_MAXFILT_SHIFT		20
#define TC0_BMR_MAXFILT_MASK		0x3f
/** @defgroup tc0_bmr_maxfilt MAXFILT MAXimum FILTer
@{*/
/**@}*/

/** TC0_BMR_FILTER  **/
#define TC0_BMR_FILTER		(1 << 19)
/** TC0_BMR_IDXPHB InDeX pin is PHB pin **/
#define TC0_BMR_IDXPHB		(1 << 17)
/** TC0_BMR_SWAP SWAP PHA and PHB **/
#define TC0_BMR_SWAP		(1 << 16)
/** TC0_BMR_INVIDX INVerted InDeX **/
#define TC0_BMR_INVIDX		(1 << 15)
/** TC0_BMR_INVB INVerted phB **/
#define TC0_BMR_INVB		(1 << 14)
/** TC0_BMR_INVA INVerted phA **/
#define TC0_BMR_INVA		(1 << 13)
/** TC0_BMR_EDGPHA EDGe on PHA count mode **/
#define TC0_BMR_EDGPHA		(1 << 12)
/** TC0_BMR_QDTRANS Quadrature Decoding TRANSparent **/
#define TC0_BMR_QDTRANS		(1 << 11)
/** TC0_BMR_SPEEDEN SPEED ENabled **/
#define TC0_BMR_SPEEDEN		(1 << 10)
/** TC0_BMR_POSEN POSition ENabled **/
#define TC0_BMR_POSEN		(1 << 9)
/** TC0_BMR_QDEN Quadrature Decoder ENabled **/
#define TC0_BMR_QDEN		(1 << 8)

#define TC0_BMR_TC2XC2S_SHIFT		4
#define TC0_BMR_TC2XC2S_MASK		0x03
/** @defgroup tc0_bmr_tc2xc2s TC2XC2S External Clock Signal 2 Selection
@{*/
/**@}*/


#define TC0_BMR_TC1XC1S_SHIFT		2
#define TC0_BMR_TC1XC1S_MASK		0x03
/** @defgroup tc0_bmr_tc1xc1s TC1XC1S External Clock Signal 1 Selection
@{*/
/**@}*/


#define TC0_BMR_TC0XC0S_SHIFT		0
#define TC0_BMR_TC0XC0S_MASK		0x03
/** @defgroup tc0_bmr_tc0xc0s TC0XC0S External Clock Signal 0 Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_qier QIER QDEC Interrupt Enable Register
@{*/

/** TC0_QIER_QERR Quadrature ERRor **/
#define TC0_QIER_QERR		(1 << 2)
/** TC0_QIER_DIRCHG DIRection CHanGe **/
#define TC0_QIER_DIRCHG		(1 << 1)
/** TC0_QIER_IDX InDeX **/
#define TC0_QIER_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_qidr QIDR QDEC Interrupt Disable Register
@{*/

/** TC0_QIDR_QERR Quadrature ERRor **/
#define TC0_QIDR_QERR		(1 << 2)
/** TC0_QIDR_DIRCHG DIRection CHanGe **/
#define TC0_QIDR_DIRCHG		(1 << 1)
/** TC0_QIDR_IDX InDeX **/
#define TC0_QIDR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_qimr QIMR QDEC Interrupt Mask Register
@{*/

/** TC0_QIMR_QERR Quadrature ERRor **/
#define TC0_QIMR_QERR		(1 << 2)
/** TC0_QIMR_DIRCHG DIRection CHanGe **/
#define TC0_QIMR_DIRCHG		(1 << 1)
/** TC0_QIMR_IDX InDeX **/
#define TC0_QIMR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_qisr QISR QDEC Interrupt Status Register
@{*/

/** TC0_QISR_DIR DIRection **/
#define TC0_QISR_DIR		(1 << 8)
/** TC0_QISR_QERR Quadrature ERRor **/
#define TC0_QISR_QERR		(1 << 2)
/** TC0_QISR_DIRCHG DIRection CHanGe **/
#define TC0_QISR_DIRCHG		(1 << 1)
/** TC0_QISR_IDX InDeX **/
#define TC0_QISR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_fmr FMR Fault Mode Register
@{*/

/** TC0_FMR_ENCF1 ENable Compare Fault Channel 1 **/
#define TC0_FMR_ENCF1		(1 << 1)
/** TC0_FMR_ENCF0 ENable Compare Fault Channel 0 **/
#define TC0_FMR_ENCF0		(1 << 0)

/**@}*/

/** @defgroup tc0_wpmr WPMR Write Protect Mode Register
@{*/


#define TC0_WPMR_WPKEY_SHIFT		8
#define TC0_WPMR_WPKEY_MASK		0xffffff
/** @defgroup tc0_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** TC0_WPMR_WPEN Write Protect Enable **/
#define TC0_WPMR_WPEN		(1 << 0)

/**@}*/

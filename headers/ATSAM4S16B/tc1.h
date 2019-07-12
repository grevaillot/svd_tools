#pragma once 

/* --- TC1: Timer Counter 1 ----------------------------------------- */

#define TC1_CCR0			MMIO32(TC1_BASE + 0x00)
#define TC1_CMR0			MMIO32(TC1_BASE + 0x04)
#define TC1_CMR0_WAVE_EQ_1			MMIO32(TC1_BASE + 0x04)
#define TC1_SMMR0			MMIO32(TC1_BASE + 0x08)
#define TC1_CV0			MMIO32(TC1_BASE + 0x10)
#define TC1_RA0			MMIO32(TC1_BASE + 0x14)
#define TC1_RB0			MMIO32(TC1_BASE + 0x18)
#define TC1_RC0			MMIO32(TC1_BASE + 0x1c)
#define TC1_SR0			MMIO32(TC1_BASE + 0x20)
#define TC1_IER0			MMIO32(TC1_BASE + 0x24)
#define TC1_IDR0			MMIO32(TC1_BASE + 0x28)
#define TC1_IMR0			MMIO32(TC1_BASE + 0x2c)
#define TC1_CCR1			MMIO32(TC1_BASE + 0x40)
#define TC1_CMR1			MMIO32(TC1_BASE + 0x44)
#define TC1_CMR1_WAVE_EQ_1			MMIO32(TC1_BASE + 0x44)
#define TC1_SMMR1			MMIO32(TC1_BASE + 0x48)
#define TC1_CV1			MMIO32(TC1_BASE + 0x50)
#define TC1_RA1			MMIO32(TC1_BASE + 0x54)
#define TC1_RB1			MMIO32(TC1_BASE + 0x58)
#define TC1_RC1			MMIO32(TC1_BASE + 0x5c)
#define TC1_SR1			MMIO32(TC1_BASE + 0x60)
#define TC1_IER1			MMIO32(TC1_BASE + 0x64)
#define TC1_IDR1			MMIO32(TC1_BASE + 0x68)
#define TC1_IMR1			MMIO32(TC1_BASE + 0x6c)
#define TC1_CCR2			MMIO32(TC1_BASE + 0x80)
#define TC1_CMR2			MMIO32(TC1_BASE + 0x84)
#define TC1_CMR2_WAVE_EQ_1			MMIO32(TC1_BASE + 0x84)
#define TC1_SMMR2			MMIO32(TC1_BASE + 0x88)
#define TC1_CV2			MMIO32(TC1_BASE + 0x90)
#define TC1_RA2			MMIO32(TC1_BASE + 0x94)
#define TC1_RB2			MMIO32(TC1_BASE + 0x98)
#define TC1_RC2			MMIO32(TC1_BASE + 0x9c)
#define TC1_SR2			MMIO32(TC1_BASE + 0xa0)
#define TC1_IER2			MMIO32(TC1_BASE + 0xa4)
#define TC1_IDR2			MMIO32(TC1_BASE + 0xa8)
#define TC1_IMR2			MMIO32(TC1_BASE + 0xac)
#define TC1_BCR			MMIO32(TC1_BASE + 0xc0)
#define TC1_BMR			MMIO32(TC1_BASE + 0xc4)
#define TC1_QIER			MMIO32(TC1_BASE + 0xc8)
#define TC1_QIDR			MMIO32(TC1_BASE + 0xcc)
#define TC1_QIMR			MMIO32(TC1_BASE + 0xd0)
#define TC1_QISR			MMIO32(TC1_BASE + 0xd4)
#define TC1_FMR			MMIO32(TC1_BASE + 0xd8)
#define TC1_WPMR			MMIO32(TC1_BASE + 0xe4)


/* --- TC1_CCR0 values ---------------------------------------------- */


/* @def TC1_CCR0_SWTRG
* @brief Software Trigger Command */
#define TC1_CCR0_SWTRG		(1 << 2)

/* @def TC1_CCR0_CLKDIS
* @brief Counter Clock Disable Command */
#define TC1_CCR0_CLKDIS		(1 << 1)

/* @def TC1_CCR0_CLKEN
* @brief Counter Clock Enable Command */
#define TC1_CCR0_CLKEN		(1 << 0)

/* --- TC1_CMR0 values ---------------------------------------------- */


/* @def TC1_CMR0_LDRB
* @brief RB Loading Edge Selection */
#define TC1_CMR0_LDRB_SHIFT		18
#define TC1_CMR0_LDRB_MASK		0x03
/** @defgroup tc1_cmr0_ldrb LDRB
* @brief RB Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR0_LDRA
* @brief RA Loading Edge Selection */
#define TC1_CMR0_LDRA_SHIFT		16
#define TC1_CMR0_LDRA_MASK		0x03
/** @defgroup tc1_cmr0_ldra LDRA
* @brief RA Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE
* @brief Waveform Mode */
#define TC1_CMR0_WAVE		(1 << 15)

/* @def TC1_CMR0_CPCTRG
* @brief RC Compare Trigger Enable */
#define TC1_CMR0_CPCTRG		(1 << 14)

/* @def TC1_CMR0_ABETRG
* @brief TIOA or TIOB External Trigger Selection */
#define TC1_CMR0_ABETRG		(1 << 10)

/* @def TC1_CMR0_ETRGEDG
* @brief External Trigger Edge Selection */
#define TC1_CMR0_ETRGEDG_SHIFT		8
#define TC1_CMR0_ETRGEDG_MASK		0x03
/** @defgroup tc1_cmr0_etrgedg ETRGEDG
* @brief External Trigger Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR0_LDBDIS
* @brief Counter Clock Disable with RB Loading */
#define TC1_CMR0_LDBDIS		(1 << 7)

/* @def TC1_CMR0_LDBSTOP
* @brief Counter Clock Stopped with RB Loading */
#define TC1_CMR0_LDBSTOP		(1 << 6)

/* @def TC1_CMR0_BURST
* @brief Burst Signal Selection */
#define TC1_CMR0_BURST_SHIFT		4
#define TC1_CMR0_BURST_MASK		0x03
/** @defgroup tc1_cmr0_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR0_CLKI
* @brief Clock Invert */
#define TC1_CMR0_CLKI		(1 << 3)

/* @def TC1_CMR0_TCCLKS
* @brief Clock Selection */
#define TC1_CMR0_TCCLKS_SHIFT		0
#define TC1_CMR0_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr0_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_CMR0_WAVE_EQ_1 values ------------------------------------ */


/* @def TC1_CMR0_WAVE_EQ_1_BSWTRG
* @brief Software Trigger Effect on TIOB */
#define TC1_CMR0_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC1_CMR0_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_bswtrg BSWTRG
* @brief Software Trigger Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_BEEVT
* @brief External Event Effect on TIOB */
#define TC1_CMR0_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC1_CMR0_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_beevt BEEVT
* @brief External Event Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_BCPC
* @brief RC Compare Effect on TIOB */
#define TC1_CMR0_WAVE_EQ_1_BCPC_SHIFT		26
#define TC1_CMR0_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_bcpc BCPC
* @brief RC Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_BCPB
* @brief RB Compare Effect on TIOB */
#define TC1_CMR0_WAVE_EQ_1_BCPB_SHIFT		24
#define TC1_CMR0_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_bcpb BCPB
* @brief RB Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_ASWTRG
* @brief Software Trigger Effect on TIOA */
#define TC1_CMR0_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC1_CMR0_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_aswtrg ASWTRG
* @brief Software Trigger Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_AEEVT
* @brief External Event Effect on TIOA */
#define TC1_CMR0_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC1_CMR0_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_aeevt AEEVT
* @brief External Event Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_ACPC
* @brief RC Compare Effect on TIOA */
#define TC1_CMR0_WAVE_EQ_1_ACPC_SHIFT		18
#define TC1_CMR0_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_acpc ACPC
* @brief RC Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_ACPA
* @brief RA Compare Effect on TIOA */
#define TC1_CMR0_WAVE_EQ_1_ACPA_SHIFT		16
#define TC1_CMR0_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_acpa ACPA
* @brief RA Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_WAVE
* @brief Waveform Mode */
#define TC1_CMR0_WAVE_EQ_1_WAVE		(1 << 15)

/* @def TC1_CMR0_WAVE_EQ_1_WAVSEL
* @brief Waveform Selection */
#define TC1_CMR0_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC1_CMR0_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_wavsel WAVSEL
* @brief Waveform Selection
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_ENETRG
* @brief External Event Trigger Enable */
#define TC1_CMR0_WAVE_EQ_1_ENETRG		(1 << 12)

/* @def TC1_CMR0_WAVE_EQ_1_EEVT
* @brief External Event Selection */
#define TC1_CMR0_WAVE_EQ_1_EEVT_SHIFT		10
#define TC1_CMR0_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_eevt EEVT
* @brief External Event Selection
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_EEVTEDG
* @brief External Event Edge Selection */
#define TC1_CMR0_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC1_CMR0_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_eevtedg EEVTEDG
* @brief External Event Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_CPCDIS
* @brief Counter Clock Disable with RC Compare */
#define TC1_CMR0_WAVE_EQ_1_CPCDIS		(1 << 7)

/* @def TC1_CMR0_WAVE_EQ_1_CPCSTOP
* @brief Counter Clock Stopped with RC Compare */
#define TC1_CMR0_WAVE_EQ_1_CPCSTOP		(1 << 6)

/* @def TC1_CMR0_WAVE_EQ_1_BURST
* @brief Burst Signal Selection */
#define TC1_CMR0_WAVE_EQ_1_BURST_SHIFT		4
#define TC1_CMR0_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc1_cmr0_wave_eq_1_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR0_WAVE_EQ_1_CLKI
* @brief Clock Invert */
#define TC1_CMR0_WAVE_EQ_1_CLKI		(1 << 3)

/* @def TC1_CMR0_WAVE_EQ_1_TCCLKS
* @brief Clock Selection */
#define TC1_CMR0_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC1_CMR0_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr0_wave_eq_1_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_SMMR0 values --------------------------------------------- */


/* @def TC1_SMMR0_DOWN
* @brief DOWN Count */
#define TC1_SMMR0_DOWN		(1 << 1)

/* @def TC1_SMMR0_GCEN
* @brief Gray Count Enable */
#define TC1_SMMR0_GCEN		(1 << 0)

/* --- TC1_CV0 values ----------------------------------------------- */


/* @def TC1_CV0_CV
* @brief Counter Value */
#define TC1_CV0_CV_SHIFT		0
#define TC1_CV0_CV_MASK		0xffffffff
/** @defgroup tc1_cv0_cv CV
* @brief Counter Value
@{*/
/*@}*/

/* --- TC1_RA0 values ----------------------------------------------- */


/* @def TC1_RA0_RA
* @brief Register A */
#define TC1_RA0_RA_SHIFT		0
#define TC1_RA0_RA_MASK		0xffffffff
/** @defgroup tc1_ra0_ra RA
* @brief Register A
@{*/
/*@}*/

/* --- TC1_RB0 values ----------------------------------------------- */


/* @def TC1_RB0_RB
* @brief Register B */
#define TC1_RB0_RB_SHIFT		0
#define TC1_RB0_RB_MASK		0xffffffff
/** @defgroup tc1_rb0_rb RB
* @brief Register B
@{*/
/*@}*/

/* --- TC1_RC0 values ----------------------------------------------- */


/* @def TC1_RC0_RC
* @brief Register C */
#define TC1_RC0_RC_SHIFT		0
#define TC1_RC0_RC_MASK		0xffffffff
/** @defgroup tc1_rc0_rc RC
* @brief Register C
@{*/
/*@}*/

/* --- TC1_SR0 values ----------------------------------------------- */


/* @def TC1_SR0_MTIOB
* @brief TIOB Mirror */
#define TC1_SR0_MTIOB		(1 << 18)

/* @def TC1_SR0_MTIOA
* @brief TIOA Mirror */
#define TC1_SR0_MTIOA		(1 << 17)

/* @def TC1_SR0_CLKSTA
* @brief Clock Enabling Status */
#define TC1_SR0_CLKSTA		(1 << 16)

/* @def TC1_SR0_ETRGS
* @brief External Trigger Status */
#define TC1_SR0_ETRGS		(1 << 7)

/* @def TC1_SR0_LDRBS
* @brief RB Loading Status */
#define TC1_SR0_LDRBS		(1 << 6)

/* @def TC1_SR0_LDRAS
* @brief RA Loading Status */
#define TC1_SR0_LDRAS		(1 << 5)

/* @def TC1_SR0_CPCS
* @brief RC Compare Status */
#define TC1_SR0_CPCS		(1 << 4)

/* @def TC1_SR0_CPBS
* @brief RB Compare Status */
#define TC1_SR0_CPBS		(1 << 3)

/* @def TC1_SR0_CPAS
* @brief RA Compare Status */
#define TC1_SR0_CPAS		(1 << 2)

/* @def TC1_SR0_LOVRS
* @brief Load Overrun Status */
#define TC1_SR0_LOVRS		(1 << 1)

/* @def TC1_SR0_COVFS
* @brief Counter Overflow Status */
#define TC1_SR0_COVFS		(1 << 0)

/* --- TC1_IER0 values ---------------------------------------------- */


/* @def TC1_IER0_ETRGS
* @brief External Trigger */
#define TC1_IER0_ETRGS		(1 << 7)

/* @def TC1_IER0_LDRBS
* @brief RB Loading */
#define TC1_IER0_LDRBS		(1 << 6)

/* @def TC1_IER0_LDRAS
* @brief RA Loading */
#define TC1_IER0_LDRAS		(1 << 5)

/* @def TC1_IER0_CPCS
* @brief RC Compare */
#define TC1_IER0_CPCS		(1 << 4)

/* @def TC1_IER0_CPBS
* @brief RB Compare */
#define TC1_IER0_CPBS		(1 << 3)

/* @def TC1_IER0_CPAS
* @brief RA Compare */
#define TC1_IER0_CPAS		(1 << 2)

/* @def TC1_IER0_LOVRS
* @brief Load Overrun */
#define TC1_IER0_LOVRS		(1 << 1)

/* @def TC1_IER0_COVFS
* @brief Counter Overflow */
#define TC1_IER0_COVFS		(1 << 0)

/* --- TC1_IDR0 values ---------------------------------------------- */


/* @def TC1_IDR0_ETRGS
* @brief External Trigger */
#define TC1_IDR0_ETRGS		(1 << 7)

/* @def TC1_IDR0_LDRBS
* @brief RB Loading */
#define TC1_IDR0_LDRBS		(1 << 6)

/* @def TC1_IDR0_LDRAS
* @brief RA Loading */
#define TC1_IDR0_LDRAS		(1 << 5)

/* @def TC1_IDR0_CPCS
* @brief RC Compare */
#define TC1_IDR0_CPCS		(1 << 4)

/* @def TC1_IDR0_CPBS
* @brief RB Compare */
#define TC1_IDR0_CPBS		(1 << 3)

/* @def TC1_IDR0_CPAS
* @brief RA Compare */
#define TC1_IDR0_CPAS		(1 << 2)

/* @def TC1_IDR0_LOVRS
* @brief Load Overrun */
#define TC1_IDR0_LOVRS		(1 << 1)

/* @def TC1_IDR0_COVFS
* @brief Counter Overflow */
#define TC1_IDR0_COVFS		(1 << 0)

/* --- TC1_IMR0 values ---------------------------------------------- */


/* @def TC1_IMR0_ETRGS
* @brief External Trigger */
#define TC1_IMR0_ETRGS		(1 << 7)

/* @def TC1_IMR0_LDRBS
* @brief RB Loading */
#define TC1_IMR0_LDRBS		(1 << 6)

/* @def TC1_IMR0_LDRAS
* @brief RA Loading */
#define TC1_IMR0_LDRAS		(1 << 5)

/* @def TC1_IMR0_CPCS
* @brief RC Compare */
#define TC1_IMR0_CPCS		(1 << 4)

/* @def TC1_IMR0_CPBS
* @brief RB Compare */
#define TC1_IMR0_CPBS		(1 << 3)

/* @def TC1_IMR0_CPAS
* @brief RA Compare */
#define TC1_IMR0_CPAS		(1 << 2)

/* @def TC1_IMR0_LOVRS
* @brief Load Overrun */
#define TC1_IMR0_LOVRS		(1 << 1)

/* @def TC1_IMR0_COVFS
* @brief Counter Overflow */
#define TC1_IMR0_COVFS		(1 << 0)

/* --- TC1_CCR1 values ---------------------------------------------- */


/* @def TC1_CCR1_SWTRG
* @brief Software Trigger Command */
#define TC1_CCR1_SWTRG		(1 << 2)

/* @def TC1_CCR1_CLKDIS
* @brief Counter Clock Disable Command */
#define TC1_CCR1_CLKDIS		(1 << 1)

/* @def TC1_CCR1_CLKEN
* @brief Counter Clock Enable Command */
#define TC1_CCR1_CLKEN		(1 << 0)

/* --- TC1_CMR1 values ---------------------------------------------- */


/* @def TC1_CMR1_LDRB
* @brief RB Loading Edge Selection */
#define TC1_CMR1_LDRB_SHIFT		18
#define TC1_CMR1_LDRB_MASK		0x03
/** @defgroup tc1_cmr1_ldrb LDRB
* @brief RB Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR1_LDRA
* @brief RA Loading Edge Selection */
#define TC1_CMR1_LDRA_SHIFT		16
#define TC1_CMR1_LDRA_MASK		0x03
/** @defgroup tc1_cmr1_ldra LDRA
* @brief RA Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE
* @brief Waveform Mode */
#define TC1_CMR1_WAVE		(1 << 15)

/* @def TC1_CMR1_CPCTRG
* @brief RC Compare Trigger Enable */
#define TC1_CMR1_CPCTRG		(1 << 14)

/* @def TC1_CMR1_ABETRG
* @brief TIOA or TIOB External Trigger Selection */
#define TC1_CMR1_ABETRG		(1 << 10)

/* @def TC1_CMR1_ETRGEDG
* @brief External Trigger Edge Selection */
#define TC1_CMR1_ETRGEDG_SHIFT		8
#define TC1_CMR1_ETRGEDG_MASK		0x03
/** @defgroup tc1_cmr1_etrgedg ETRGEDG
* @brief External Trigger Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR1_LDBDIS
* @brief Counter Clock Disable with RB Loading */
#define TC1_CMR1_LDBDIS		(1 << 7)

/* @def TC1_CMR1_LDBSTOP
* @brief Counter Clock Stopped with RB Loading */
#define TC1_CMR1_LDBSTOP		(1 << 6)

/* @def TC1_CMR1_BURST
* @brief Burst Signal Selection */
#define TC1_CMR1_BURST_SHIFT		4
#define TC1_CMR1_BURST_MASK		0x03
/** @defgroup tc1_cmr1_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR1_CLKI
* @brief Clock Invert */
#define TC1_CMR1_CLKI		(1 << 3)

/* @def TC1_CMR1_TCCLKS
* @brief Clock Selection */
#define TC1_CMR1_TCCLKS_SHIFT		0
#define TC1_CMR1_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr1_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_CMR1_WAVE_EQ_1 values ------------------------------------ */


/* @def TC1_CMR1_WAVE_EQ_1_BSWTRG
* @brief Software Trigger Effect on TIOB */
#define TC1_CMR1_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC1_CMR1_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_bswtrg BSWTRG
* @brief Software Trigger Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_BEEVT
* @brief External Event Effect on TIOB */
#define TC1_CMR1_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC1_CMR1_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_beevt BEEVT
* @brief External Event Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_BCPC
* @brief RC Compare Effect on TIOB */
#define TC1_CMR1_WAVE_EQ_1_BCPC_SHIFT		26
#define TC1_CMR1_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_bcpc BCPC
* @brief RC Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_BCPB
* @brief RB Compare Effect on TIOB */
#define TC1_CMR1_WAVE_EQ_1_BCPB_SHIFT		24
#define TC1_CMR1_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_bcpb BCPB
* @brief RB Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_ASWTRG
* @brief Software Trigger Effect on TIOA */
#define TC1_CMR1_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC1_CMR1_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_aswtrg ASWTRG
* @brief Software Trigger Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_AEEVT
* @brief External Event Effect on TIOA */
#define TC1_CMR1_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC1_CMR1_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_aeevt AEEVT
* @brief External Event Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_ACPC
* @brief RC Compare Effect on TIOA */
#define TC1_CMR1_WAVE_EQ_1_ACPC_SHIFT		18
#define TC1_CMR1_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_acpc ACPC
* @brief RC Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_ACPA
* @brief RA Compare Effect on TIOA */
#define TC1_CMR1_WAVE_EQ_1_ACPA_SHIFT		16
#define TC1_CMR1_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_acpa ACPA
* @brief RA Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_WAVE
* @brief Waveform Mode */
#define TC1_CMR1_WAVE_EQ_1_WAVE		(1 << 15)

/* @def TC1_CMR1_WAVE_EQ_1_WAVSEL
* @brief Waveform Selection */
#define TC1_CMR1_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC1_CMR1_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_wavsel WAVSEL
* @brief Waveform Selection
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_ENETRG
* @brief External Event Trigger Enable */
#define TC1_CMR1_WAVE_EQ_1_ENETRG		(1 << 12)

/* @def TC1_CMR1_WAVE_EQ_1_EEVT
* @brief External Event Selection */
#define TC1_CMR1_WAVE_EQ_1_EEVT_SHIFT		10
#define TC1_CMR1_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_eevt EEVT
* @brief External Event Selection
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_EEVTEDG
* @brief External Event Edge Selection */
#define TC1_CMR1_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC1_CMR1_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_eevtedg EEVTEDG
* @brief External Event Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_CPCDIS
* @brief Counter Clock Disable with RC Compare */
#define TC1_CMR1_WAVE_EQ_1_CPCDIS		(1 << 7)

/* @def TC1_CMR1_WAVE_EQ_1_CPCSTOP
* @brief Counter Clock Stopped with RC Compare */
#define TC1_CMR1_WAVE_EQ_1_CPCSTOP		(1 << 6)

/* @def TC1_CMR1_WAVE_EQ_1_BURST
* @brief Burst Signal Selection */
#define TC1_CMR1_WAVE_EQ_1_BURST_SHIFT		4
#define TC1_CMR1_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc1_cmr1_wave_eq_1_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR1_WAVE_EQ_1_CLKI
* @brief Clock Invert */
#define TC1_CMR1_WAVE_EQ_1_CLKI		(1 << 3)

/* @def TC1_CMR1_WAVE_EQ_1_TCCLKS
* @brief Clock Selection */
#define TC1_CMR1_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC1_CMR1_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr1_wave_eq_1_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_SMMR1 values --------------------------------------------- */


/* @def TC1_SMMR1_DOWN
* @brief DOWN Count */
#define TC1_SMMR1_DOWN		(1 << 1)

/* @def TC1_SMMR1_GCEN
* @brief Gray Count Enable */
#define TC1_SMMR1_GCEN		(1 << 0)

/* --- TC1_CV1 values ----------------------------------------------- */


/* @def TC1_CV1_CV
* @brief Counter Value */
#define TC1_CV1_CV_SHIFT		0
#define TC1_CV1_CV_MASK		0xffffffff
/** @defgroup tc1_cv1_cv CV
* @brief Counter Value
@{*/
/*@}*/

/* --- TC1_RA1 values ----------------------------------------------- */


/* @def TC1_RA1_RA
* @brief Register A */
#define TC1_RA1_RA_SHIFT		0
#define TC1_RA1_RA_MASK		0xffffffff
/** @defgroup tc1_ra1_ra RA
* @brief Register A
@{*/
/*@}*/

/* --- TC1_RB1 values ----------------------------------------------- */


/* @def TC1_RB1_RB
* @brief Register B */
#define TC1_RB1_RB_SHIFT		0
#define TC1_RB1_RB_MASK		0xffffffff
/** @defgroup tc1_rb1_rb RB
* @brief Register B
@{*/
/*@}*/

/* --- TC1_RC1 values ----------------------------------------------- */


/* @def TC1_RC1_RC
* @brief Register C */
#define TC1_RC1_RC_SHIFT		0
#define TC1_RC1_RC_MASK		0xffffffff
/** @defgroup tc1_rc1_rc RC
* @brief Register C
@{*/
/*@}*/

/* --- TC1_SR1 values ----------------------------------------------- */


/* @def TC1_SR1_MTIOB
* @brief TIOB Mirror */
#define TC1_SR1_MTIOB		(1 << 18)

/* @def TC1_SR1_MTIOA
* @brief TIOA Mirror */
#define TC1_SR1_MTIOA		(1 << 17)

/* @def TC1_SR1_CLKSTA
* @brief Clock Enabling Status */
#define TC1_SR1_CLKSTA		(1 << 16)

/* @def TC1_SR1_ETRGS
* @brief External Trigger Status */
#define TC1_SR1_ETRGS		(1 << 7)

/* @def TC1_SR1_LDRBS
* @brief RB Loading Status */
#define TC1_SR1_LDRBS		(1 << 6)

/* @def TC1_SR1_LDRAS
* @brief RA Loading Status */
#define TC1_SR1_LDRAS		(1 << 5)

/* @def TC1_SR1_CPCS
* @brief RC Compare Status */
#define TC1_SR1_CPCS		(1 << 4)

/* @def TC1_SR1_CPBS
* @brief RB Compare Status */
#define TC1_SR1_CPBS		(1 << 3)

/* @def TC1_SR1_CPAS
* @brief RA Compare Status */
#define TC1_SR1_CPAS		(1 << 2)

/* @def TC1_SR1_LOVRS
* @brief Load Overrun Status */
#define TC1_SR1_LOVRS		(1 << 1)

/* @def TC1_SR1_COVFS
* @brief Counter Overflow Status */
#define TC1_SR1_COVFS		(1 << 0)

/* --- TC1_IER1 values ---------------------------------------------- */


/* @def TC1_IER1_ETRGS
* @brief External Trigger */
#define TC1_IER1_ETRGS		(1 << 7)

/* @def TC1_IER1_LDRBS
* @brief RB Loading */
#define TC1_IER1_LDRBS		(1 << 6)

/* @def TC1_IER1_LDRAS
* @brief RA Loading */
#define TC1_IER1_LDRAS		(1 << 5)

/* @def TC1_IER1_CPCS
* @brief RC Compare */
#define TC1_IER1_CPCS		(1 << 4)

/* @def TC1_IER1_CPBS
* @brief RB Compare */
#define TC1_IER1_CPBS		(1 << 3)

/* @def TC1_IER1_CPAS
* @brief RA Compare */
#define TC1_IER1_CPAS		(1 << 2)

/* @def TC1_IER1_LOVRS
* @brief Load Overrun */
#define TC1_IER1_LOVRS		(1 << 1)

/* @def TC1_IER1_COVFS
* @brief Counter Overflow */
#define TC1_IER1_COVFS		(1 << 0)

/* --- TC1_IDR1 values ---------------------------------------------- */


/* @def TC1_IDR1_ETRGS
* @brief External Trigger */
#define TC1_IDR1_ETRGS		(1 << 7)

/* @def TC1_IDR1_LDRBS
* @brief RB Loading */
#define TC1_IDR1_LDRBS		(1 << 6)

/* @def TC1_IDR1_LDRAS
* @brief RA Loading */
#define TC1_IDR1_LDRAS		(1 << 5)

/* @def TC1_IDR1_CPCS
* @brief RC Compare */
#define TC1_IDR1_CPCS		(1 << 4)

/* @def TC1_IDR1_CPBS
* @brief RB Compare */
#define TC1_IDR1_CPBS		(1 << 3)

/* @def TC1_IDR1_CPAS
* @brief RA Compare */
#define TC1_IDR1_CPAS		(1 << 2)

/* @def TC1_IDR1_LOVRS
* @brief Load Overrun */
#define TC1_IDR1_LOVRS		(1 << 1)

/* @def TC1_IDR1_COVFS
* @brief Counter Overflow */
#define TC1_IDR1_COVFS		(1 << 0)

/* --- TC1_IMR1 values ---------------------------------------------- */


/* @def TC1_IMR1_ETRGS
* @brief External Trigger */
#define TC1_IMR1_ETRGS		(1 << 7)

/* @def TC1_IMR1_LDRBS
* @brief RB Loading */
#define TC1_IMR1_LDRBS		(1 << 6)

/* @def TC1_IMR1_LDRAS
* @brief RA Loading */
#define TC1_IMR1_LDRAS		(1 << 5)

/* @def TC1_IMR1_CPCS
* @brief RC Compare */
#define TC1_IMR1_CPCS		(1 << 4)

/* @def TC1_IMR1_CPBS
* @brief RB Compare */
#define TC1_IMR1_CPBS		(1 << 3)

/* @def TC1_IMR1_CPAS
* @brief RA Compare */
#define TC1_IMR1_CPAS		(1 << 2)

/* @def TC1_IMR1_LOVRS
* @brief Load Overrun */
#define TC1_IMR1_LOVRS		(1 << 1)

/* @def TC1_IMR1_COVFS
* @brief Counter Overflow */
#define TC1_IMR1_COVFS		(1 << 0)

/* --- TC1_CCR2 values ---------------------------------------------- */


/* @def TC1_CCR2_SWTRG
* @brief Software Trigger Command */
#define TC1_CCR2_SWTRG		(1 << 2)

/* @def TC1_CCR2_CLKDIS
* @brief Counter Clock Disable Command */
#define TC1_CCR2_CLKDIS		(1 << 1)

/* @def TC1_CCR2_CLKEN
* @brief Counter Clock Enable Command */
#define TC1_CCR2_CLKEN		(1 << 0)

/* --- TC1_CMR2 values ---------------------------------------------- */


/* @def TC1_CMR2_LDRB
* @brief RB Loading Edge Selection */
#define TC1_CMR2_LDRB_SHIFT		18
#define TC1_CMR2_LDRB_MASK		0x03
/** @defgroup tc1_cmr2_ldrb LDRB
* @brief RB Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR2_LDRA
* @brief RA Loading Edge Selection */
#define TC1_CMR2_LDRA_SHIFT		16
#define TC1_CMR2_LDRA_MASK		0x03
/** @defgroup tc1_cmr2_ldra LDRA
* @brief RA Loading Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE
* @brief Waveform Mode */
#define TC1_CMR2_WAVE		(1 << 15)

/* @def TC1_CMR2_CPCTRG
* @brief RC Compare Trigger Enable */
#define TC1_CMR2_CPCTRG		(1 << 14)

/* @def TC1_CMR2_ABETRG
* @brief TIOA or TIOB External Trigger Selection */
#define TC1_CMR2_ABETRG		(1 << 10)

/* @def TC1_CMR2_ETRGEDG
* @brief External Trigger Edge Selection */
#define TC1_CMR2_ETRGEDG_SHIFT		8
#define TC1_CMR2_ETRGEDG_MASK		0x03
/** @defgroup tc1_cmr2_etrgedg ETRGEDG
* @brief External Trigger Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR2_LDBDIS
* @brief Counter Clock Disable with RB Loading */
#define TC1_CMR2_LDBDIS		(1 << 7)

/* @def TC1_CMR2_LDBSTOP
* @brief Counter Clock Stopped with RB Loading */
#define TC1_CMR2_LDBSTOP		(1 << 6)

/* @def TC1_CMR2_BURST
* @brief Burst Signal Selection */
#define TC1_CMR2_BURST_SHIFT		4
#define TC1_CMR2_BURST_MASK		0x03
/** @defgroup tc1_cmr2_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR2_CLKI
* @brief Clock Invert */
#define TC1_CMR2_CLKI		(1 << 3)

/* @def TC1_CMR2_TCCLKS
* @brief Clock Selection */
#define TC1_CMR2_TCCLKS_SHIFT		0
#define TC1_CMR2_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr2_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_CMR2_WAVE_EQ_1 values ------------------------------------ */


/* @def TC1_CMR2_WAVE_EQ_1_BSWTRG
* @brief Software Trigger Effect on TIOB */
#define TC1_CMR2_WAVE_EQ_1_BSWTRG_SHIFT		30
#define TC1_CMR2_WAVE_EQ_1_BSWTRG_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_bswtrg BSWTRG
* @brief Software Trigger Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_BEEVT
* @brief External Event Effect on TIOB */
#define TC1_CMR2_WAVE_EQ_1_BEEVT_SHIFT		28
#define TC1_CMR2_WAVE_EQ_1_BEEVT_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_beevt BEEVT
* @brief External Event Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_BCPC
* @brief RC Compare Effect on TIOB */
#define TC1_CMR2_WAVE_EQ_1_BCPC_SHIFT		26
#define TC1_CMR2_WAVE_EQ_1_BCPC_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_bcpc BCPC
* @brief RC Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_BCPB
* @brief RB Compare Effect on TIOB */
#define TC1_CMR2_WAVE_EQ_1_BCPB_SHIFT		24
#define TC1_CMR2_WAVE_EQ_1_BCPB_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_bcpb BCPB
* @brief RB Compare Effect on TIOB
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_ASWTRG
* @brief Software Trigger Effect on TIOA */
#define TC1_CMR2_WAVE_EQ_1_ASWTRG_SHIFT		22
#define TC1_CMR2_WAVE_EQ_1_ASWTRG_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_aswtrg ASWTRG
* @brief Software Trigger Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_AEEVT
* @brief External Event Effect on TIOA */
#define TC1_CMR2_WAVE_EQ_1_AEEVT_SHIFT		20
#define TC1_CMR2_WAVE_EQ_1_AEEVT_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_aeevt AEEVT
* @brief External Event Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_ACPC
* @brief RC Compare Effect on TIOA */
#define TC1_CMR2_WAVE_EQ_1_ACPC_SHIFT		18
#define TC1_CMR2_WAVE_EQ_1_ACPC_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_acpc ACPC
* @brief RC Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_ACPA
* @brief RA Compare Effect on TIOA */
#define TC1_CMR2_WAVE_EQ_1_ACPA_SHIFT		16
#define TC1_CMR2_WAVE_EQ_1_ACPA_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_acpa ACPA
* @brief RA Compare Effect on TIOA
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_WAVE
* @brief Waveform Mode */
#define TC1_CMR2_WAVE_EQ_1_WAVE		(1 << 15)

/* @def TC1_CMR2_WAVE_EQ_1_WAVSEL
* @brief Waveform Selection */
#define TC1_CMR2_WAVE_EQ_1_WAVSEL_SHIFT		13
#define TC1_CMR2_WAVE_EQ_1_WAVSEL_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_wavsel WAVSEL
* @brief Waveform Selection
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_ENETRG
* @brief External Event Trigger Enable */
#define TC1_CMR2_WAVE_EQ_1_ENETRG		(1 << 12)

/* @def TC1_CMR2_WAVE_EQ_1_EEVT
* @brief External Event Selection */
#define TC1_CMR2_WAVE_EQ_1_EEVT_SHIFT		10
#define TC1_CMR2_WAVE_EQ_1_EEVT_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_eevt EEVT
* @brief External Event Selection
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_EEVTEDG
* @brief External Event Edge Selection */
#define TC1_CMR2_WAVE_EQ_1_EEVTEDG_SHIFT		8
#define TC1_CMR2_WAVE_EQ_1_EEVTEDG_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_eevtedg EEVTEDG
* @brief External Event Edge Selection
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_CPCDIS
* @brief Counter Clock Disable with RC Compare */
#define TC1_CMR2_WAVE_EQ_1_CPCDIS		(1 << 7)

/* @def TC1_CMR2_WAVE_EQ_1_CPCSTOP
* @brief Counter Clock Stopped with RC Compare */
#define TC1_CMR2_WAVE_EQ_1_CPCSTOP		(1 << 6)

/* @def TC1_CMR2_WAVE_EQ_1_BURST
* @brief Burst Signal Selection */
#define TC1_CMR2_WAVE_EQ_1_BURST_SHIFT		4
#define TC1_CMR2_WAVE_EQ_1_BURST_MASK		0x03
/** @defgroup tc1_cmr2_wave_eq_1_burst BURST
* @brief Burst Signal Selection
@{*/
/*@}*/

/* @def TC1_CMR2_WAVE_EQ_1_CLKI
* @brief Clock Invert */
#define TC1_CMR2_WAVE_EQ_1_CLKI		(1 << 3)

/* @def TC1_CMR2_WAVE_EQ_1_TCCLKS
* @brief Clock Selection */
#define TC1_CMR2_WAVE_EQ_1_TCCLKS_SHIFT		0
#define TC1_CMR2_WAVE_EQ_1_TCCLKS_MASK		0x07
/** @defgroup tc1_cmr2_wave_eq_1_tcclks TCCLKS
* @brief Clock Selection
@{*/
/*@}*/

/* --- TC1_SMMR2 values --------------------------------------------- */


/* @def TC1_SMMR2_DOWN
* @brief DOWN Count */
#define TC1_SMMR2_DOWN		(1 << 1)

/* @def TC1_SMMR2_GCEN
* @brief Gray Count Enable */
#define TC1_SMMR2_GCEN		(1 << 0)

/* --- TC1_CV2 values ----------------------------------------------- */


/* @def TC1_CV2_CV
* @brief Counter Value */
#define TC1_CV2_CV_SHIFT		0
#define TC1_CV2_CV_MASK		0xffffffff
/** @defgroup tc1_cv2_cv CV
* @brief Counter Value
@{*/
/*@}*/

/* --- TC1_RA2 values ----------------------------------------------- */


/* @def TC1_RA2_RA
* @brief Register A */
#define TC1_RA2_RA_SHIFT		0
#define TC1_RA2_RA_MASK		0xffffffff
/** @defgroup tc1_ra2_ra RA
* @brief Register A
@{*/
/*@}*/

/* --- TC1_RB2 values ----------------------------------------------- */


/* @def TC1_RB2_RB
* @brief Register B */
#define TC1_RB2_RB_SHIFT		0
#define TC1_RB2_RB_MASK		0xffffffff
/** @defgroup tc1_rb2_rb RB
* @brief Register B
@{*/
/*@}*/

/* --- TC1_RC2 values ----------------------------------------------- */


/* @def TC1_RC2_RC
* @brief Register C */
#define TC1_RC2_RC_SHIFT		0
#define TC1_RC2_RC_MASK		0xffffffff
/** @defgroup tc1_rc2_rc RC
* @brief Register C
@{*/
/*@}*/

/* --- TC1_SR2 values ----------------------------------------------- */


/* @def TC1_SR2_MTIOB
* @brief TIOB Mirror */
#define TC1_SR2_MTIOB		(1 << 18)

/* @def TC1_SR2_MTIOA
* @brief TIOA Mirror */
#define TC1_SR2_MTIOA		(1 << 17)

/* @def TC1_SR2_CLKSTA
* @brief Clock Enabling Status */
#define TC1_SR2_CLKSTA		(1 << 16)

/* @def TC1_SR2_ETRGS
* @brief External Trigger Status */
#define TC1_SR2_ETRGS		(1 << 7)

/* @def TC1_SR2_LDRBS
* @brief RB Loading Status */
#define TC1_SR2_LDRBS		(1 << 6)

/* @def TC1_SR2_LDRAS
* @brief RA Loading Status */
#define TC1_SR2_LDRAS		(1 << 5)

/* @def TC1_SR2_CPCS
* @brief RC Compare Status */
#define TC1_SR2_CPCS		(1 << 4)

/* @def TC1_SR2_CPBS
* @brief RB Compare Status */
#define TC1_SR2_CPBS		(1 << 3)

/* @def TC1_SR2_CPAS
* @brief RA Compare Status */
#define TC1_SR2_CPAS		(1 << 2)

/* @def TC1_SR2_LOVRS
* @brief Load Overrun Status */
#define TC1_SR2_LOVRS		(1 << 1)

/* @def TC1_SR2_COVFS
* @brief Counter Overflow Status */
#define TC1_SR2_COVFS		(1 << 0)

/* --- TC1_IER2 values ---------------------------------------------- */


/* @def TC1_IER2_ETRGS
* @brief External Trigger */
#define TC1_IER2_ETRGS		(1 << 7)

/* @def TC1_IER2_LDRBS
* @brief RB Loading */
#define TC1_IER2_LDRBS		(1 << 6)

/* @def TC1_IER2_LDRAS
* @brief RA Loading */
#define TC1_IER2_LDRAS		(1 << 5)

/* @def TC1_IER2_CPCS
* @brief RC Compare */
#define TC1_IER2_CPCS		(1 << 4)

/* @def TC1_IER2_CPBS
* @brief RB Compare */
#define TC1_IER2_CPBS		(1 << 3)

/* @def TC1_IER2_CPAS
* @brief RA Compare */
#define TC1_IER2_CPAS		(1 << 2)

/* @def TC1_IER2_LOVRS
* @brief Load Overrun */
#define TC1_IER2_LOVRS		(1 << 1)

/* @def TC1_IER2_COVFS
* @brief Counter Overflow */
#define TC1_IER2_COVFS		(1 << 0)

/* --- TC1_IDR2 values ---------------------------------------------- */


/* @def TC1_IDR2_ETRGS
* @brief External Trigger */
#define TC1_IDR2_ETRGS		(1 << 7)

/* @def TC1_IDR2_LDRBS
* @brief RB Loading */
#define TC1_IDR2_LDRBS		(1 << 6)

/* @def TC1_IDR2_LDRAS
* @brief RA Loading */
#define TC1_IDR2_LDRAS		(1 << 5)

/* @def TC1_IDR2_CPCS
* @brief RC Compare */
#define TC1_IDR2_CPCS		(1 << 4)

/* @def TC1_IDR2_CPBS
* @brief RB Compare */
#define TC1_IDR2_CPBS		(1 << 3)

/* @def TC1_IDR2_CPAS
* @brief RA Compare */
#define TC1_IDR2_CPAS		(1 << 2)

/* @def TC1_IDR2_LOVRS
* @brief Load Overrun */
#define TC1_IDR2_LOVRS		(1 << 1)

/* @def TC1_IDR2_COVFS
* @brief Counter Overflow */
#define TC1_IDR2_COVFS		(1 << 0)

/* --- TC1_IMR2 values ---------------------------------------------- */


/* @def TC1_IMR2_ETRGS
* @brief External Trigger */
#define TC1_IMR2_ETRGS		(1 << 7)

/* @def TC1_IMR2_LDRBS
* @brief RB Loading */
#define TC1_IMR2_LDRBS		(1 << 6)

/* @def TC1_IMR2_LDRAS
* @brief RA Loading */
#define TC1_IMR2_LDRAS		(1 << 5)

/* @def TC1_IMR2_CPCS
* @brief RC Compare */
#define TC1_IMR2_CPCS		(1 << 4)

/* @def TC1_IMR2_CPBS
* @brief RB Compare */
#define TC1_IMR2_CPBS		(1 << 3)

/* @def TC1_IMR2_CPAS
* @brief RA Compare */
#define TC1_IMR2_CPAS		(1 << 2)

/* @def TC1_IMR2_LOVRS
* @brief Load Overrun */
#define TC1_IMR2_LOVRS		(1 << 1)

/* @def TC1_IMR2_COVFS
* @brief Counter Overflow */
#define TC1_IMR2_COVFS		(1 << 0)

/* --- TC1_BCR values ----------------------------------------------- */


/* @def TC1_BCR_SYNC
* @brief Synchro Command */
#define TC1_BCR_SYNC		(1 << 0)

/* --- TC1_BMR values ----------------------------------------------- */


/* @def TC1_BMR_MAXFILT
* @brief MAXimum FILTer */
#define TC1_BMR_MAXFILT_SHIFT		20
#define TC1_BMR_MAXFILT_MASK		0x3f
/** @defgroup tc1_bmr_maxfilt MAXFILT
* @brief MAXimum FILTer
@{*/
/*@}*/

/* @def TC1_BMR_FILTER
* @brief  */
#define TC1_BMR_FILTER		(1 << 19)

/* @def TC1_BMR_IDXPHB
* @brief InDeX pin is PHB pin */
#define TC1_BMR_IDXPHB		(1 << 17)

/* @def TC1_BMR_SWAP
* @brief SWAP PHA and PHB */
#define TC1_BMR_SWAP		(1 << 16)

/* @def TC1_BMR_INVIDX
* @brief INVerted InDeX */
#define TC1_BMR_INVIDX		(1 << 15)

/* @def TC1_BMR_INVB
* @brief INVerted phB */
#define TC1_BMR_INVB		(1 << 14)

/* @def TC1_BMR_INVA
* @brief INVerted phA */
#define TC1_BMR_INVA		(1 << 13)

/* @def TC1_BMR_EDGPHA
* @brief EDGe on PHA count mode */
#define TC1_BMR_EDGPHA		(1 << 12)

/* @def TC1_BMR_QDTRANS
* @brief Quadrature Decoding TRANSparent */
#define TC1_BMR_QDTRANS		(1 << 11)

/* @def TC1_BMR_SPEEDEN
* @brief SPEED ENabled */
#define TC1_BMR_SPEEDEN		(1 << 10)

/* @def TC1_BMR_POSEN
* @brief POSition ENabled */
#define TC1_BMR_POSEN		(1 << 9)

/* @def TC1_BMR_QDEN
* @brief Quadrature Decoder ENabled */
#define TC1_BMR_QDEN		(1 << 8)

/* @def TC1_BMR_TC2XC2S
* @brief External Clock Signal 2 Selection */
#define TC1_BMR_TC2XC2S_SHIFT		4
#define TC1_BMR_TC2XC2S_MASK		0x03
/** @defgroup tc1_bmr_tc2xc2s TC2XC2S
* @brief External Clock Signal 2 Selection
@{*/
/*@}*/

/* @def TC1_BMR_TC1XC1S
* @brief External Clock Signal 1 Selection */
#define TC1_BMR_TC1XC1S_SHIFT		2
#define TC1_BMR_TC1XC1S_MASK		0x03
/** @defgroup tc1_bmr_tc1xc1s TC1XC1S
* @brief External Clock Signal 1 Selection
@{*/
/*@}*/

/* @def TC1_BMR_TC0XC0S
* @brief External Clock Signal 0 Selection */
#define TC1_BMR_TC0XC0S_SHIFT		0
#define TC1_BMR_TC0XC0S_MASK		0x03
/** @defgroup tc1_bmr_tc0xc0s TC0XC0S
* @brief External Clock Signal 0 Selection
@{*/
/*@}*/

/* --- TC1_QIER values ---------------------------------------------- */


/* @def TC1_QIER_QERR
* @brief Quadrature ERRor */
#define TC1_QIER_QERR		(1 << 2)

/* @def TC1_QIER_DIRCHG
* @brief DIRection CHanGe */
#define TC1_QIER_DIRCHG		(1 << 1)

/* @def TC1_QIER_IDX
* @brief InDeX */
#define TC1_QIER_IDX		(1 << 0)

/* --- TC1_QIDR values ---------------------------------------------- */


/* @def TC1_QIDR_QERR
* @brief Quadrature ERRor */
#define TC1_QIDR_QERR		(1 << 2)

/* @def TC1_QIDR_DIRCHG
* @brief DIRection CHanGe */
#define TC1_QIDR_DIRCHG		(1 << 1)

/* @def TC1_QIDR_IDX
* @brief InDeX */
#define TC1_QIDR_IDX		(1 << 0)

/* --- TC1_QIMR values ---------------------------------------------- */


/* @def TC1_QIMR_QERR
* @brief Quadrature ERRor */
#define TC1_QIMR_QERR		(1 << 2)

/* @def TC1_QIMR_DIRCHG
* @brief DIRection CHanGe */
#define TC1_QIMR_DIRCHG		(1 << 1)

/* @def TC1_QIMR_IDX
* @brief InDeX */
#define TC1_QIMR_IDX		(1 << 0)

/* --- TC1_QISR values ---------------------------------------------- */


/* @def TC1_QISR_DIR
* @brief DIRection */
#define TC1_QISR_DIR		(1 << 8)

/* @def TC1_QISR_QERR
* @brief Quadrature ERRor */
#define TC1_QISR_QERR		(1 << 2)

/* @def TC1_QISR_DIRCHG
* @brief DIRection CHanGe */
#define TC1_QISR_DIRCHG		(1 << 1)

/* @def TC1_QISR_IDX
* @brief InDeX */
#define TC1_QISR_IDX		(1 << 0)

/* --- TC1_FMR values ----------------------------------------------- */


/* @def TC1_FMR_ENCF1
* @brief ENable Compare Fault Channel 1 */
#define TC1_FMR_ENCF1		(1 << 1)

/* @def TC1_FMR_ENCF0
* @brief ENable Compare Fault Channel 0 */
#define TC1_FMR_ENCF0		(1 << 0)

/* --- TC1_WPMR values ---------------------------------------------- */


/* @def TC1_WPMR_WPKEY
* @brief Write Protect KEY */
#define TC1_WPMR_WPKEY_SHIFT		8
#define TC1_WPMR_WPKEY_MASK		0xffffff
/** @defgroup tc1_wpmr_wpkey WPKEY
* @brief Write Protect KEY
@{*/
/*@}*/

/* @def TC1_WPMR_WPEN
* @brief Write Protect Enable */
#define TC1_WPMR_WPEN		(1 << 0)

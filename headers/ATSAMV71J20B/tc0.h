#pragma once 

/* --- TC0: Timer Counter ------------------------------------------- */

/** @defgroup tc0_registers Timer Counter Register
@{*/

/** TC0_TC_CHANNEL[0]_TC_CCR Channel Control Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_CCR			MMIO32(TC0_BASE + 0x00)
/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE			MMIO32(TC0_BASE + 0x04)
/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE			MMIO32(TC0_BASE + 0x04)
/** TC0_TC_CHANNEL[0]_TC_SMMR Stepper Motor Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_SMMR			MMIO32(TC0_BASE + 0x08)
/** TC0_TC_CHANNEL[0]_TC_RAB Register AB (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_RAB			MMIO32(TC0_BASE + 0x0c)
/** TC0_TC_CHANNEL[0]_TC_CV Counter Value (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_CV			MMIO32(TC0_BASE + 0x10)
/** TC0_TC_CHANNEL[0]_TC_RA Register A (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_RA			MMIO32(TC0_BASE + 0x14)
/** TC0_TC_CHANNEL[0]_TC_RB Register B (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_RB			MMIO32(TC0_BASE + 0x18)
/** TC0_TC_CHANNEL[0]_TC_RC Register C (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_RC			MMIO32(TC0_BASE + 0x1c)
/** TC0_TC_CHANNEL[0]_TC_SR Status Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_SR			MMIO32(TC0_BASE + 0x20)
/** TC0_TC_CHANNEL[0]_TC_IER Interrupt Enable Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_IER			MMIO32(TC0_BASE + 0x24)
/** TC0_TC_CHANNEL[0]_TC_IDR Interrupt Disable Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_IDR			MMIO32(TC0_BASE + 0x28)
/** TC0_TC_CHANNEL[0]_TC_IMR Interrupt Mask Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_IMR			MMIO32(TC0_BASE + 0x2c)
/** TC0_TC_CHANNEL[0]_TC_EMR Extended Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[0]_TC_EMR			MMIO32(TC0_BASE + 0x30)
/** TC0_TC_CHANNEL[1]_TC_CCR Channel Control Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_CCR			MMIO32(TC0_BASE + 0x40)
/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE			MMIO32(TC0_BASE + 0x44)
/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE			MMIO32(TC0_BASE + 0x44)
/** TC0_TC_CHANNEL[1]_TC_SMMR Stepper Motor Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_SMMR			MMIO32(TC0_BASE + 0x48)
/** TC0_TC_CHANNEL[1]_TC_RAB Register AB (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_RAB			MMIO32(TC0_BASE + 0x4c)
/** TC0_TC_CHANNEL[1]_TC_CV Counter Value (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_CV			MMIO32(TC0_BASE + 0x50)
/** TC0_TC_CHANNEL[1]_TC_RA Register A (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_RA			MMIO32(TC0_BASE + 0x54)
/** TC0_TC_CHANNEL[1]_TC_RB Register B (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_RB			MMIO32(TC0_BASE + 0x58)
/** TC0_TC_CHANNEL[1]_TC_RC Register C (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_RC			MMIO32(TC0_BASE + 0x5c)
/** TC0_TC_CHANNEL[1]_TC_SR Status Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_SR			MMIO32(TC0_BASE + 0x60)
/** TC0_TC_CHANNEL[1]_TC_IER Interrupt Enable Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_IER			MMIO32(TC0_BASE + 0x64)
/** TC0_TC_CHANNEL[1]_TC_IDR Interrupt Disable Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_IDR			MMIO32(TC0_BASE + 0x68)
/** TC0_TC_CHANNEL[1]_TC_IMR Interrupt Mask Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_IMR			MMIO32(TC0_BASE + 0x6c)
/** TC0_TC_CHANNEL[1]_TC_EMR Extended Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[1]_TC_EMR			MMIO32(TC0_BASE + 0x70)
/** TC0_TC_CHANNEL[2]_TC_CCR Channel Control Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_CCR			MMIO32(TC0_BASE + 0x80)
/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE			MMIO32(TC0_BASE + 0x84)
/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE Channel Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE			MMIO32(TC0_BASE + 0x84)
/** TC0_TC_CHANNEL[2]_TC_SMMR Stepper Motor Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_SMMR			MMIO32(TC0_BASE + 0x88)
/** TC0_TC_CHANNEL[2]_TC_RAB Register AB (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_RAB			MMIO32(TC0_BASE + 0x8c)
/** TC0_TC_CHANNEL[2]_TC_CV Counter Value (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_CV			MMIO32(TC0_BASE + 0x90)
/** TC0_TC_CHANNEL[2]_TC_RA Register A (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_RA			MMIO32(TC0_BASE + 0x94)
/** TC0_TC_CHANNEL[2]_TC_RB Register B (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_RB			MMIO32(TC0_BASE + 0x98)
/** TC0_TC_CHANNEL[2]_TC_RC Register C (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_RC			MMIO32(TC0_BASE + 0x9c)
/** TC0_TC_CHANNEL[2]_TC_SR Status Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_SR			MMIO32(TC0_BASE + 0xa0)
/** TC0_TC_CHANNEL[2]_TC_IER Interrupt Enable Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_IER			MMIO32(TC0_BASE + 0xa4)
/** TC0_TC_CHANNEL[2]_TC_IDR Interrupt Disable Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_IDR			MMIO32(TC0_BASE + 0xa8)
/** TC0_TC_CHANNEL[2]_TC_IMR Interrupt Mask Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_IMR			MMIO32(TC0_BASE + 0xac)
/** TC0_TC_CHANNEL[2]_TC_EMR Extended Mode Register (channel = 0) **/
#define TC0_TC_CHANNEL[2]_TC_EMR			MMIO32(TC0_BASE + 0xb0)
/** TC0_TC_BCR Block Control Register **/
#define TC0_TC_BCR			MMIO32(TC0_BASE + 0xc0)
/** TC0_TC_BMR Block Mode Register **/
#define TC0_TC_BMR			MMIO32(TC0_BASE + 0xc4)
/** TC0_TC_QIER QDEC Interrupt Enable Register **/
#define TC0_TC_QIER			MMIO32(TC0_BASE + 0xc8)
/** TC0_TC_QIDR QDEC Interrupt Disable Register **/
#define TC0_TC_QIDR			MMIO32(TC0_BASE + 0xcc)
/** TC0_TC_QIMR QDEC Interrupt Mask Register **/
#define TC0_TC_QIMR			MMIO32(TC0_BASE + 0xd0)
/** TC0_TC_QISR QDEC Interrupt Status Register **/
#define TC0_TC_QISR			MMIO32(TC0_BASE + 0xd4)
/** TC0_TC_FMR Fault Mode Register **/
#define TC0_TC_FMR			MMIO32(TC0_BASE + 0xd8)
/** TC0_TC_WPMR Write Protection Mode Register **/
#define TC0_TC_WPMR			MMIO32(TC0_BASE + 0xe4)

/**@}*/


/** @defgroup tc0_tc_channel[0]_tc_ccr TCCHANNEL[0]TCCCR Channel Control Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_CCR_SWTRG Software Trigger Command **/
#define TC0_TC_CHANNEL[0]_TC_CCR_SWTRG		(1 << 2)
/** TC0_TC_CHANNEL[0]_TC_CCR_CLKDIS Counter Clock Disable Command **/
#define TC0_TC_CHANNEL[0]_TC_CCR_CLKDIS		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_CCR_CLKEN Counter Clock Enable Command **/
#define TC0_TC_CHANNEL[0]_TC_CCR_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode TCCHANNEL[0]TCCMRCAPTUREMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_SBSMPLR_SHIFT		20
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_SBSMPLR_MASK		0x07
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_sbsmplr SBSMPLR Loading Edge Subsampling Ratio
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDRB_SHIFT		18
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDRB_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDRA_SHIFT		16
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDRA_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_WAVE		(1 << 15)
/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_CPCTRG RC Compare Trigger Enable **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_CPCTRG		(1 << 14)
/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_ABETRG TIOAx or TIOBx External Trigger Selection **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_ABETRG		(1 << 10)

#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_ETRGEDG_SHIFT		8
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_ETRGEDG_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDBDIS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_LDBSTOP		(1 << 6)

#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_CMR_CAPTURE_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[0]_tc_cmr_capture_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode TCCHANNEL[0]TCCMRWAVEFORMMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BSWTRG_SHIFT		30
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BSWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_bswtrg BSWTRG Software Trigger Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BEEVT_SHIFT		28
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_beevt BEEVT External Event Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BCPC_SHIFT		26
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BCPC_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_bcpc BCPC RC Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BCPB_SHIFT		24
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BCPB_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_bcpb BCPB RB Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ASWTRG_SHIFT		22
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ASWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_aswtrg ASWTRG Software Trigger Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_AEEVT_SHIFT		20
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_AEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_aeevt AEEVT External Event Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ACPC_SHIFT		18
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ACPC_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_acpc ACPC RC Compare Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ACPA_SHIFT		16
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ACPA_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_acpa ACPA RA Compare Effect on TIOAx
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_WAVE		(1 << 15)

#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_WAVSEL_SHIFT		13
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_WAVSEL_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ENETRG External Event Trigger Enable **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_ENETRG		(1 << 12)

#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_EEVT_SHIFT		10
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_EEVT_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_EEVTEDG_SHIFT		8
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_EEVTEDG_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CPCDIS Counter Clock Disable with RC Loading **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CPCDIS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CPCSTOP		(1 << 6)

#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_CMR_WAVEFORM_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[0]_tc_cmr_waveform_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_smmr TCCHANNEL[0]TCSMMR Stepper Motor Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_SMMR_DOWN Down Count **/
#define TC0_TC_CHANNEL[0]_TC_SMMR_DOWN		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_SMMR_GCEN Gray Count Enable **/
#define TC0_TC_CHANNEL[0]_TC_SMMR_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_rab TCCHANNEL[0]TCRAB Register AB (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_RAB_RAB_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_RAB_RAB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[0]_tc_rab_rab RAB Register A or Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_cv TCCHANNEL[0]TCCV Counter Value (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_CV_CV_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_CV_CV_MASK		0xffffffff
/** @defgroup tc0_tc_channel[0]_tc_cv_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_ra TCCHANNEL[0]TCRA Register A (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_RA_RA_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_RA_RA_MASK		0xffffffff
/** @defgroup tc0_tc_channel[0]_tc_ra_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_rb TCCHANNEL[0]TCRB Register B (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_RB_RB_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_RB_RB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[0]_tc_rb_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_rc TCCHANNEL[0]TCRC Register C (channel = 0)
@{*/


#define TC0_TC_CHANNEL[0]_TC_RC_RC_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_RC_RC_MASK		0xffffffff
/** @defgroup tc0_tc_channel[0]_tc_rc_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_sr TCCHANNEL[0]TCSR Status Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_SR_MTIOB TIOBx Mirror **/
#define TC0_TC_CHANNEL[0]_TC_SR_MTIOB		(1 << 18)
/** TC0_TC_CHANNEL[0]_TC_SR_MTIOA TIOAx Mirror **/
#define TC0_TC_CHANNEL[0]_TC_SR_MTIOA		(1 << 17)
/** TC0_TC_CHANNEL[0]_TC_SR_CLKSTA Clock Enabling Status **/
#define TC0_TC_CHANNEL[0]_TC_SR_CLKSTA		(1 << 16)
/** TC0_TC_CHANNEL[0]_TC_SR_ETRGS External Trigger Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_SR_LDRBS RB Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[0]_TC_SR_LDRAS RA Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[0]_TC_SR_CPCS RC Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[0]_TC_SR_CPBS RB Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[0]_TC_SR_CPAS RA Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[0]_TC_SR_LOVRS Load Overrun Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_SR_COVFS Counter Overflow Status (cleared on read) **/
#define TC0_TC_CHANNEL[0]_TC_SR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_ier TCCHANNEL[0]TCIER Interrupt Enable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_IER_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[0]_TC_IER_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_IER_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[0]_TC_IER_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[0]_TC_IER_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[0]_TC_IER_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[0]_TC_IER_CPCS RC Compare **/
#define TC0_TC_CHANNEL[0]_TC_IER_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[0]_TC_IER_CPBS RB Compare **/
#define TC0_TC_CHANNEL[0]_TC_IER_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[0]_TC_IER_CPAS RA Compare **/
#define TC0_TC_CHANNEL[0]_TC_IER_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[0]_TC_IER_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[0]_TC_IER_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_IER_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[0]_TC_IER_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_idr TCCHANNEL[0]TCIDR Interrupt Disable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_IDR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[0]_TC_IDR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_IDR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[0]_TC_IDR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[0]_TC_IDR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[0]_TC_IDR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[0]_TC_IDR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[0]_TC_IDR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[0]_TC_IDR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[0]_TC_IDR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[0]_TC_IDR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[0]_TC_IDR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[0]_TC_IDR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[0]_TC_IDR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_IDR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[0]_TC_IDR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_imr TCCHANNEL[0]TCIMR Interrupt Mask Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_IMR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[0]_TC_IMR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[0]_TC_IMR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[0]_TC_IMR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[0]_TC_IMR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[0]_TC_IMR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[0]_TC_IMR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[0]_TC_IMR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[0]_TC_IMR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[0]_TC_IMR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[0]_TC_IMR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[0]_TC_IMR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[0]_TC_IMR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[0]_TC_IMR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[0]_TC_IMR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[0]_TC_IMR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[0]_tc_emr TCCHANNEL[0]TCEMR Extended Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[0]_TC_EMR_NODIVCLK No Divided Clock **/
#define TC0_TC_CHANNEL[0]_TC_EMR_NODIVCLK		(1 << 8)

#define TC0_TC_CHANNEL[0]_TC_EMR_TRIGSRCB_SHIFT		4
#define TC0_TC_CHANNEL[0]_TC_EMR_TRIGSRCB_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_emr_trigsrcb TRIGSRCB Trigger Source for Input B
@{*/
/**@}*/


#define TC0_TC_CHANNEL[0]_TC_EMR_TRIGSRCA_SHIFT		0
#define TC0_TC_CHANNEL[0]_TC_EMR_TRIGSRCA_MASK		0x03
/** @defgroup tc0_tc_channel[0]_tc_emr_trigsrca TRIGSRCA Trigger Source for Input A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_ccr TCCHANNEL[1]TCCCR Channel Control Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_CCR_SWTRG Software Trigger Command **/
#define TC0_TC_CHANNEL[1]_TC_CCR_SWTRG		(1 << 2)
/** TC0_TC_CHANNEL[1]_TC_CCR_CLKDIS Counter Clock Disable Command **/
#define TC0_TC_CHANNEL[1]_TC_CCR_CLKDIS		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_CCR_CLKEN Counter Clock Enable Command **/
#define TC0_TC_CHANNEL[1]_TC_CCR_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode TCCHANNEL[1]TCCMRCAPTUREMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_SBSMPLR_SHIFT		20
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_SBSMPLR_MASK		0x07
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_sbsmplr SBSMPLR Loading Edge Subsampling Ratio
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDRB_SHIFT		18
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDRB_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDRA_SHIFT		16
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDRA_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_WAVE		(1 << 15)
/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_CPCTRG RC Compare Trigger Enable **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_CPCTRG		(1 << 14)
/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_ABETRG TIOAx or TIOBx External Trigger Selection **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_ABETRG		(1 << 10)

#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_ETRGEDG_SHIFT		8
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_ETRGEDG_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDBDIS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_LDBSTOP		(1 << 6)

#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_CMR_CAPTURE_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[1]_tc_cmr_capture_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode TCCHANNEL[1]TCCMRWAVEFORMMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BSWTRG_SHIFT		30
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BSWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_bswtrg BSWTRG Software Trigger Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BEEVT_SHIFT		28
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_beevt BEEVT External Event Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BCPC_SHIFT		26
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BCPC_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_bcpc BCPC RC Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BCPB_SHIFT		24
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BCPB_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_bcpb BCPB RB Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ASWTRG_SHIFT		22
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ASWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_aswtrg ASWTRG Software Trigger Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_AEEVT_SHIFT		20
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_AEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_aeevt AEEVT External Event Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ACPC_SHIFT		18
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ACPC_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_acpc ACPC RC Compare Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ACPA_SHIFT		16
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ACPA_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_acpa ACPA RA Compare Effect on TIOAx
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_WAVE		(1 << 15)

#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_WAVSEL_SHIFT		13
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_WAVSEL_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ENETRG External Event Trigger Enable **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_ENETRG		(1 << 12)

#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_EEVT_SHIFT		10
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_EEVT_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_EEVTEDG_SHIFT		8
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_EEVTEDG_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CPCDIS Counter Clock Disable with RC Loading **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CPCDIS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CPCSTOP		(1 << 6)

#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_CMR_WAVEFORM_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[1]_tc_cmr_waveform_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_smmr TCCHANNEL[1]TCSMMR Stepper Motor Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_SMMR_DOWN Down Count **/
#define TC0_TC_CHANNEL[1]_TC_SMMR_DOWN		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_SMMR_GCEN Gray Count Enable **/
#define TC0_TC_CHANNEL[1]_TC_SMMR_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_rab TCCHANNEL[1]TCRAB Register AB (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_RAB_RAB_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_RAB_RAB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[1]_tc_rab_rab RAB Register A or Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_cv TCCHANNEL[1]TCCV Counter Value (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_CV_CV_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_CV_CV_MASK		0xffffffff
/** @defgroup tc0_tc_channel[1]_tc_cv_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_ra TCCHANNEL[1]TCRA Register A (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_RA_RA_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_RA_RA_MASK		0xffffffff
/** @defgroup tc0_tc_channel[1]_tc_ra_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_rb TCCHANNEL[1]TCRB Register B (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_RB_RB_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_RB_RB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[1]_tc_rb_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_rc TCCHANNEL[1]TCRC Register C (channel = 0)
@{*/


#define TC0_TC_CHANNEL[1]_TC_RC_RC_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_RC_RC_MASK		0xffffffff
/** @defgroup tc0_tc_channel[1]_tc_rc_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_sr TCCHANNEL[1]TCSR Status Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_SR_MTIOB TIOBx Mirror **/
#define TC0_TC_CHANNEL[1]_TC_SR_MTIOB		(1 << 18)
/** TC0_TC_CHANNEL[1]_TC_SR_MTIOA TIOAx Mirror **/
#define TC0_TC_CHANNEL[1]_TC_SR_MTIOA		(1 << 17)
/** TC0_TC_CHANNEL[1]_TC_SR_CLKSTA Clock Enabling Status **/
#define TC0_TC_CHANNEL[1]_TC_SR_CLKSTA		(1 << 16)
/** TC0_TC_CHANNEL[1]_TC_SR_ETRGS External Trigger Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_SR_LDRBS RB Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[1]_TC_SR_LDRAS RA Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[1]_TC_SR_CPCS RC Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[1]_TC_SR_CPBS RB Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[1]_TC_SR_CPAS RA Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[1]_TC_SR_LOVRS Load Overrun Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_SR_COVFS Counter Overflow Status (cleared on read) **/
#define TC0_TC_CHANNEL[1]_TC_SR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_ier TCCHANNEL[1]TCIER Interrupt Enable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_IER_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[1]_TC_IER_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_IER_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[1]_TC_IER_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[1]_TC_IER_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[1]_TC_IER_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[1]_TC_IER_CPCS RC Compare **/
#define TC0_TC_CHANNEL[1]_TC_IER_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[1]_TC_IER_CPBS RB Compare **/
#define TC0_TC_CHANNEL[1]_TC_IER_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[1]_TC_IER_CPAS RA Compare **/
#define TC0_TC_CHANNEL[1]_TC_IER_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[1]_TC_IER_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[1]_TC_IER_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_IER_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[1]_TC_IER_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_idr TCCHANNEL[1]TCIDR Interrupt Disable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_IDR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[1]_TC_IDR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_IDR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[1]_TC_IDR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[1]_TC_IDR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[1]_TC_IDR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[1]_TC_IDR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[1]_TC_IDR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[1]_TC_IDR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[1]_TC_IDR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[1]_TC_IDR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[1]_TC_IDR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[1]_TC_IDR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[1]_TC_IDR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_IDR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[1]_TC_IDR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_imr TCCHANNEL[1]TCIMR Interrupt Mask Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_IMR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[1]_TC_IMR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[1]_TC_IMR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[1]_TC_IMR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[1]_TC_IMR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[1]_TC_IMR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[1]_TC_IMR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[1]_TC_IMR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[1]_TC_IMR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[1]_TC_IMR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[1]_TC_IMR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[1]_TC_IMR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[1]_TC_IMR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[1]_TC_IMR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[1]_TC_IMR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[1]_TC_IMR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[1]_tc_emr TCCHANNEL[1]TCEMR Extended Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[1]_TC_EMR_NODIVCLK No Divided Clock **/
#define TC0_TC_CHANNEL[1]_TC_EMR_NODIVCLK		(1 << 8)

#define TC0_TC_CHANNEL[1]_TC_EMR_TRIGSRCB_SHIFT		4
#define TC0_TC_CHANNEL[1]_TC_EMR_TRIGSRCB_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_emr_trigsrcb TRIGSRCB Trigger Source for Input B
@{*/
/**@}*/


#define TC0_TC_CHANNEL[1]_TC_EMR_TRIGSRCA_SHIFT		0
#define TC0_TC_CHANNEL[1]_TC_EMR_TRIGSRCA_MASK		0x03
/** @defgroup tc0_tc_channel[1]_tc_emr_trigsrca TRIGSRCA Trigger Source for Input A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_ccr TCCHANNEL[2]TCCCR Channel Control Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_CCR_SWTRG Software Trigger Command **/
#define TC0_TC_CHANNEL[2]_TC_CCR_SWTRG		(1 << 2)
/** TC0_TC_CHANNEL[2]_TC_CCR_CLKDIS Counter Clock Disable Command **/
#define TC0_TC_CHANNEL[2]_TC_CCR_CLKDIS		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_CCR_CLKEN Counter Clock Enable Command **/
#define TC0_TC_CHANNEL[2]_TC_CCR_CLKEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode TCCHANNEL[2]TCCMRCAPTUREMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_SBSMPLR_SHIFT		20
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_SBSMPLR_MASK		0x07
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_sbsmplr SBSMPLR Loading Edge Subsampling Ratio
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDRB_SHIFT		18
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDRB_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_ldrb LDRB RB Loading Edge Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDRA_SHIFT		16
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDRA_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_ldra LDRA RA Loading Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_WAVE		(1 << 15)
/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_CPCTRG RC Compare Trigger Enable **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_CPCTRG		(1 << 14)
/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_ABETRG TIOAx or TIOBx External Trigger Selection **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_ABETRG		(1 << 10)

#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_ETRGEDG_SHIFT		8
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_ETRGEDG_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_etrgedg ETRGEDG External Trigger Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDBDIS Counter Clock Disable with RB Loading **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDBDIS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDBSTOP Counter Clock Stopped with RB Loading **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_LDBSTOP		(1 << 6)

#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_CMR_CAPTURE_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[2]_tc_cmr_capture_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode TCCHANNEL[2]TCCMRWAVEFORMMODE Channel Mode Register (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BSWTRG_SHIFT		30
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BSWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_bswtrg BSWTRG Software Trigger Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BEEVT_SHIFT		28
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_beevt BEEVT External Event Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BCPC_SHIFT		26
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BCPC_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_bcpc BCPC RC Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BCPB_SHIFT		24
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BCPB_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_bcpb BCPB RB Compare Effect on TIOBx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ASWTRG_SHIFT		22
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ASWTRG_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_aswtrg ASWTRG Software Trigger Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_AEEVT_SHIFT		20
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_AEEVT_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_aeevt AEEVT External Event Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ACPC_SHIFT		18
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ACPC_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_acpc ACPC RC Compare Effect on TIOAx
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ACPA_SHIFT		16
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ACPA_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_acpa ACPA RA Compare Effect on TIOAx
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_WAVE Waveform Mode **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_WAVE		(1 << 15)

#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_WAVSEL_SHIFT		13
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_WAVSEL_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_wavsel WAVSEL Waveform Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ENETRG External Event Trigger Enable **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_ENETRG		(1 << 12)

#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_EEVT_SHIFT		10
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_EEVT_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_eevt EEVT External Event Selection
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_EEVTEDG_SHIFT		8
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_EEVTEDG_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_eevtedg EEVTEDG External Event Edge Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CPCDIS Counter Clock Disable with RC Loading **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CPCDIS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CPCSTOP Counter Clock Stopped with RC Compare **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CPCSTOP		(1 << 6)

#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BURST_SHIFT		4
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_BURST_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_burst BURST Burst Signal Selection
@{*/
/**@}*/

/** TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CLKI Clock Invert **/
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_CLKI		(1 << 3)

#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_TCCLKS_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_CMR_WAVEFORM_MODE_TCCLKS_MASK		0x07
/** @defgroup tc0_tc_channel[2]_tc_cmr_waveform_mode_tcclks TCCLKS Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_smmr TCCHANNEL[2]TCSMMR Stepper Motor Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_SMMR_DOWN Down Count **/
#define TC0_TC_CHANNEL[2]_TC_SMMR_DOWN		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_SMMR_GCEN Gray Count Enable **/
#define TC0_TC_CHANNEL[2]_TC_SMMR_GCEN		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_rab TCCHANNEL[2]TCRAB Register AB (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_RAB_RAB_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_RAB_RAB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[2]_tc_rab_rab RAB Register A or Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_cv TCCHANNEL[2]TCCV Counter Value (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_CV_CV_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_CV_CV_MASK		0xffffffff
/** @defgroup tc0_tc_channel[2]_tc_cv_cv CV Counter Value
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_ra TCCHANNEL[2]TCRA Register A (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_RA_RA_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_RA_RA_MASK		0xffffffff
/** @defgroup tc0_tc_channel[2]_tc_ra_ra RA Register A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_rb TCCHANNEL[2]TCRB Register B (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_RB_RB_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_RB_RB_MASK		0xffffffff
/** @defgroup tc0_tc_channel[2]_tc_rb_rb RB Register B
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_rc TCCHANNEL[2]TCRC Register C (channel = 0)
@{*/


#define TC0_TC_CHANNEL[2]_TC_RC_RC_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_RC_RC_MASK		0xffffffff
/** @defgroup tc0_tc_channel[2]_tc_rc_rc RC Register C
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_sr TCCHANNEL[2]TCSR Status Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_SR_MTIOB TIOBx Mirror **/
#define TC0_TC_CHANNEL[2]_TC_SR_MTIOB		(1 << 18)
/** TC0_TC_CHANNEL[2]_TC_SR_MTIOA TIOAx Mirror **/
#define TC0_TC_CHANNEL[2]_TC_SR_MTIOA		(1 << 17)
/** TC0_TC_CHANNEL[2]_TC_SR_CLKSTA Clock Enabling Status **/
#define TC0_TC_CHANNEL[2]_TC_SR_CLKSTA		(1 << 16)
/** TC0_TC_CHANNEL[2]_TC_SR_ETRGS External Trigger Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_SR_LDRBS RB Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[2]_TC_SR_LDRAS RA Loading Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[2]_TC_SR_CPCS RC Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[2]_TC_SR_CPBS RB Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[2]_TC_SR_CPAS RA Compare Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[2]_TC_SR_LOVRS Load Overrun Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_SR_COVFS Counter Overflow Status (cleared on read) **/
#define TC0_TC_CHANNEL[2]_TC_SR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_ier TCCHANNEL[2]TCIER Interrupt Enable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_IER_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[2]_TC_IER_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_IER_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[2]_TC_IER_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[2]_TC_IER_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[2]_TC_IER_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[2]_TC_IER_CPCS RC Compare **/
#define TC0_TC_CHANNEL[2]_TC_IER_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[2]_TC_IER_CPBS RB Compare **/
#define TC0_TC_CHANNEL[2]_TC_IER_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[2]_TC_IER_CPAS RA Compare **/
#define TC0_TC_CHANNEL[2]_TC_IER_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[2]_TC_IER_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[2]_TC_IER_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_IER_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[2]_TC_IER_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_idr TCCHANNEL[2]TCIDR Interrupt Disable Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_IDR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[2]_TC_IDR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_IDR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[2]_TC_IDR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[2]_TC_IDR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[2]_TC_IDR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[2]_TC_IDR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[2]_TC_IDR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[2]_TC_IDR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[2]_TC_IDR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[2]_TC_IDR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[2]_TC_IDR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[2]_TC_IDR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[2]_TC_IDR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_IDR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[2]_TC_IDR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_imr TCCHANNEL[2]TCIMR Interrupt Mask Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_IMR_ETRGS External Trigger **/
#define TC0_TC_CHANNEL[2]_TC_IMR_ETRGS		(1 << 7)
/** TC0_TC_CHANNEL[2]_TC_IMR_LDRBS RB Loading **/
#define TC0_TC_CHANNEL[2]_TC_IMR_LDRBS		(1 << 6)
/** TC0_TC_CHANNEL[2]_TC_IMR_LDRAS RA Loading **/
#define TC0_TC_CHANNEL[2]_TC_IMR_LDRAS		(1 << 5)
/** TC0_TC_CHANNEL[2]_TC_IMR_CPCS RC Compare **/
#define TC0_TC_CHANNEL[2]_TC_IMR_CPCS		(1 << 4)
/** TC0_TC_CHANNEL[2]_TC_IMR_CPBS RB Compare **/
#define TC0_TC_CHANNEL[2]_TC_IMR_CPBS		(1 << 3)
/** TC0_TC_CHANNEL[2]_TC_IMR_CPAS RA Compare **/
#define TC0_TC_CHANNEL[2]_TC_IMR_CPAS		(1 << 2)
/** TC0_TC_CHANNEL[2]_TC_IMR_LOVRS Load Overrun **/
#define TC0_TC_CHANNEL[2]_TC_IMR_LOVRS		(1 << 1)
/** TC0_TC_CHANNEL[2]_TC_IMR_COVFS Counter Overflow **/
#define TC0_TC_CHANNEL[2]_TC_IMR_COVFS		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_channel[2]_tc_emr TCCHANNEL[2]TCEMR Extended Mode Register (channel = 0)
@{*/

/** TC0_TC_CHANNEL[2]_TC_EMR_NODIVCLK No Divided Clock **/
#define TC0_TC_CHANNEL[2]_TC_EMR_NODIVCLK		(1 << 8)

#define TC0_TC_CHANNEL[2]_TC_EMR_TRIGSRCB_SHIFT		4
#define TC0_TC_CHANNEL[2]_TC_EMR_TRIGSRCB_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_emr_trigsrcb TRIGSRCB Trigger Source for Input B
@{*/
/**@}*/


#define TC0_TC_CHANNEL[2]_TC_EMR_TRIGSRCA_SHIFT		0
#define TC0_TC_CHANNEL[2]_TC_EMR_TRIGSRCA_MASK		0x03
/** @defgroup tc0_tc_channel[2]_tc_emr_trigsrca TRIGSRCA Trigger Source for Input A
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_bcr TCBCR Block Control Register
@{*/

/** TC0_TC_BCR_SYNC Synchro Command **/
#define TC0_TC_BCR_SYNC		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_bmr TCBMR Block Mode Register
@{*/


#define TC0_TC_BMR_MAXCMP_SHIFT		26
#define TC0_TC_BMR_MAXCMP_MASK		0x0f
/** @defgroup tc0_tc_bmr_maxcmp MAXCMP Maximum Consecutive Missing Pulses
@{*/
/**@}*/


#define TC0_TC_BMR_MAXFILT_SHIFT		20
#define TC0_TC_BMR_MAXFILT_MASK		0x3f
/** @defgroup tc0_tc_bmr_maxfilt MAXFILT Maximum Filter
@{*/
/**@}*/

/** TC0_TC_BMR_AUTOC AutoCorrection of missing pulses **/
#define TC0_TC_BMR_AUTOC		(1 << 18)
/** TC0_TC_BMR_IDXPHB Index Pin is PHB Pin **/
#define TC0_TC_BMR_IDXPHB		(1 << 17)
/** TC0_TC_BMR_SWAP Swap PHA and PHB **/
#define TC0_TC_BMR_SWAP		(1 << 16)
/** TC0_TC_BMR_INVIDX Inverted Index **/
#define TC0_TC_BMR_INVIDX		(1 << 15)
/** TC0_TC_BMR_INVB Inverted PHB **/
#define TC0_TC_BMR_INVB		(1 << 14)
/** TC0_TC_BMR_INVA Inverted PHA **/
#define TC0_TC_BMR_INVA		(1 << 13)
/** TC0_TC_BMR_EDGPHA Edge on PHA Count Mode **/
#define TC0_TC_BMR_EDGPHA		(1 << 12)
/** TC0_TC_BMR_QDTRANS Quadrature Decoding Transparent **/
#define TC0_TC_BMR_QDTRANS		(1 << 11)
/** TC0_TC_BMR_SPEEDEN Speed Enabled **/
#define TC0_TC_BMR_SPEEDEN		(1 << 10)
/** TC0_TC_BMR_POSEN Position Enabled **/
#define TC0_TC_BMR_POSEN		(1 << 9)
/** TC0_TC_BMR_QDEN Quadrature Decoder Enabled **/
#define TC0_TC_BMR_QDEN		(1 << 8)

#define TC0_TC_BMR_TC2XC2S_SHIFT		4
#define TC0_TC_BMR_TC2XC2S_MASK		0x03
/** @defgroup tc0_tc_bmr_tc2xc2s TC2XC2S External Clock Signal 2 Selection
@{*/
/**@}*/


#define TC0_TC_BMR_TC1XC1S_SHIFT		2
#define TC0_TC_BMR_TC1XC1S_MASK		0x03
/** @defgroup tc0_tc_bmr_tc1xc1s TC1XC1S External Clock Signal 1 Selection
@{*/
/**@}*/


#define TC0_TC_BMR_TC0XC0S_SHIFT		0
#define TC0_TC_BMR_TC0XC0S_MASK		0x03
/** @defgroup tc0_tc_bmr_tc0xc0s TC0XC0S External Clock Signal 0 Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc0_tc_qier TCQIER QDEC Interrupt Enable Register
@{*/

/** TC0_TC_QIER_MPE Consecutive Missing Pulse Error **/
#define TC0_TC_QIER_MPE		(1 << 3)
/** TC0_TC_QIER_QERR Quadrature Error **/
#define TC0_TC_QIER_QERR		(1 << 2)
/** TC0_TC_QIER_DIRCHG Direction Change **/
#define TC0_TC_QIER_DIRCHG		(1 << 1)
/** TC0_TC_QIER_IDX Index **/
#define TC0_TC_QIER_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_qidr TCQIDR QDEC Interrupt Disable Register
@{*/

/** TC0_TC_QIDR_MPE Consecutive Missing Pulse Error **/
#define TC0_TC_QIDR_MPE		(1 << 3)
/** TC0_TC_QIDR_QERR Quadrature Error **/
#define TC0_TC_QIDR_QERR		(1 << 2)
/** TC0_TC_QIDR_DIRCHG Direction Change **/
#define TC0_TC_QIDR_DIRCHG		(1 << 1)
/** TC0_TC_QIDR_IDX Index **/
#define TC0_TC_QIDR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_qimr TCQIMR QDEC Interrupt Mask Register
@{*/

/** TC0_TC_QIMR_MPE Consecutive Missing Pulse Error **/
#define TC0_TC_QIMR_MPE		(1 << 3)
/** TC0_TC_QIMR_QERR Quadrature Error **/
#define TC0_TC_QIMR_QERR		(1 << 2)
/** TC0_TC_QIMR_DIRCHG Direction Change **/
#define TC0_TC_QIMR_DIRCHG		(1 << 1)
/** TC0_TC_QIMR_IDX Index **/
#define TC0_TC_QIMR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_qisr TCQISR QDEC Interrupt Status Register
@{*/

/** TC0_TC_QISR_DIR Direction **/
#define TC0_TC_QISR_DIR		(1 << 8)
/** TC0_TC_QISR_MPE Consecutive Missing Pulse Error **/
#define TC0_TC_QISR_MPE		(1 << 3)
/** TC0_TC_QISR_QERR Quadrature Error **/
#define TC0_TC_QISR_QERR		(1 << 2)
/** TC0_TC_QISR_DIRCHG Direction Change **/
#define TC0_TC_QISR_DIRCHG		(1 << 1)
/** TC0_TC_QISR_IDX Index **/
#define TC0_TC_QISR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_fmr TCFMR Fault Mode Register
@{*/

/** TC0_TC_FMR_ENCF1 Enable Compare Fault Channel 1 **/
#define TC0_TC_FMR_ENCF1		(1 << 1)
/** TC0_TC_FMR_ENCF0 Enable Compare Fault Channel 0 **/
#define TC0_TC_FMR_ENCF0		(1 << 0)

/**@}*/

/** @defgroup tc0_tc_wpmr TCWPMR Write Protection Mode Register
@{*/


#define TC0_TC_WPMR_WPKEY_SHIFT		8
#define TC0_TC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup tc0_tc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** TC0_TC_WPMR_WPEN Write Protection Enable **/
#define TC0_TC_WPMR_WPEN		(1 << 0)

/**@}*/

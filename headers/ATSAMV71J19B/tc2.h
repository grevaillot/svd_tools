#pragma once 

/* --- TC2: Timer Counter ------------------------------------------- */

/** @defgroup tc2_registers Timer Counter Register
@{*/

/** TC2_TC_BCR Block Control Register **/
#define TC2_TC_BCR			MMIO32(TC2_BASE + 0xc0)
/** TC2_TC_BMR Block Mode Register **/
#define TC2_TC_BMR			MMIO32(TC2_BASE + 0xc4)
/** TC2_TC_QIER QDEC Interrupt Enable Register **/
#define TC2_TC_QIER			MMIO32(TC2_BASE + 0xc8)
/** TC2_TC_QIDR QDEC Interrupt Disable Register **/
#define TC2_TC_QIDR			MMIO32(TC2_BASE + 0xcc)
/** TC2_TC_QIMR QDEC Interrupt Mask Register **/
#define TC2_TC_QIMR			MMIO32(TC2_BASE + 0xd0)
/** TC2_TC_QISR QDEC Interrupt Status Register **/
#define TC2_TC_QISR			MMIO32(TC2_BASE + 0xd4)
/** TC2_TC_FMR Fault Mode Register **/
#define TC2_TC_FMR			MMIO32(TC2_BASE + 0xd8)
/** TC2_TC_WPMR Write Protection Mode Register **/
#define TC2_TC_WPMR			MMIO32(TC2_BASE + 0xe4)

/**@}*/


/** @defgroup tc2_tc_bcr TCBCR Block Control Register
@{*/

/** TC2_TC_BCR_SYNC Synchro Command **/
#define TC2_TC_BCR_SYNC		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_bmr TCBMR Block Mode Register
@{*/


#define TC2_TC_BMR_MAXCMP_SHIFT		26
#define TC2_TC_BMR_MAXCMP_MASK		0x0f
/** @defgroup tc2_tc_bmr_maxcmp MAXCMP Maximum Consecutive Missing Pulses
@{*/
/**@}*/


#define TC2_TC_BMR_MAXFILT_SHIFT		20
#define TC2_TC_BMR_MAXFILT_MASK		0x3f
/** @defgroup tc2_tc_bmr_maxfilt MAXFILT Maximum Filter
@{*/
/**@}*/

/** TC2_TC_BMR_AUTOC AutoCorrection of missing pulses **/
#define TC2_TC_BMR_AUTOC		(1 << 18)
/** TC2_TC_BMR_IDXPHB Index Pin is PHB Pin **/
#define TC2_TC_BMR_IDXPHB		(1 << 17)
/** TC2_TC_BMR_SWAP Swap PHA and PHB **/
#define TC2_TC_BMR_SWAP		(1 << 16)
/** TC2_TC_BMR_INVIDX Inverted Index **/
#define TC2_TC_BMR_INVIDX		(1 << 15)
/** TC2_TC_BMR_INVB Inverted PHB **/
#define TC2_TC_BMR_INVB		(1 << 14)
/** TC2_TC_BMR_INVA Inverted PHA **/
#define TC2_TC_BMR_INVA		(1 << 13)
/** TC2_TC_BMR_EDGPHA Edge on PHA Count Mode **/
#define TC2_TC_BMR_EDGPHA		(1 << 12)
/** TC2_TC_BMR_QDTRANS Quadrature Decoding Transparent **/
#define TC2_TC_BMR_QDTRANS		(1 << 11)
/** TC2_TC_BMR_SPEEDEN Speed Enabled **/
#define TC2_TC_BMR_SPEEDEN		(1 << 10)
/** TC2_TC_BMR_POSEN Position Enabled **/
#define TC2_TC_BMR_POSEN		(1 << 9)
/** TC2_TC_BMR_QDEN Quadrature Decoder Enabled **/
#define TC2_TC_BMR_QDEN		(1 << 8)

#define TC2_TC_BMR_TC2XC2S_SHIFT		4
#define TC2_TC_BMR_TC2XC2S_MASK		0x03
/** @defgroup tc2_tc_bmr_tc2xc2s TC2XC2S External Clock Signal 2 Selection
@{*/
/**@}*/


#define TC2_TC_BMR_TC1XC1S_SHIFT		2
#define TC2_TC_BMR_TC1XC1S_MASK		0x03
/** @defgroup tc2_tc_bmr_tc1xc1s TC1XC1S External Clock Signal 1 Selection
@{*/
/**@}*/


#define TC2_TC_BMR_TC0XC0S_SHIFT		0
#define TC2_TC_BMR_TC0XC0S_MASK		0x03
/** @defgroup tc2_tc_bmr_tc0xc0s TC0XC0S External Clock Signal 0 Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tc2_tc_qier TCQIER QDEC Interrupt Enable Register
@{*/

/** TC2_TC_QIER_MPE Consecutive Missing Pulse Error **/
#define TC2_TC_QIER_MPE		(1 << 3)
/** TC2_TC_QIER_QERR Quadrature Error **/
#define TC2_TC_QIER_QERR		(1 << 2)
/** TC2_TC_QIER_DIRCHG Direction Change **/
#define TC2_TC_QIER_DIRCHG		(1 << 1)
/** TC2_TC_QIER_IDX Index **/
#define TC2_TC_QIER_IDX		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_qidr TCQIDR QDEC Interrupt Disable Register
@{*/

/** TC2_TC_QIDR_MPE Consecutive Missing Pulse Error **/
#define TC2_TC_QIDR_MPE		(1 << 3)
/** TC2_TC_QIDR_QERR Quadrature Error **/
#define TC2_TC_QIDR_QERR		(1 << 2)
/** TC2_TC_QIDR_DIRCHG Direction Change **/
#define TC2_TC_QIDR_DIRCHG		(1 << 1)
/** TC2_TC_QIDR_IDX Index **/
#define TC2_TC_QIDR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_qimr TCQIMR QDEC Interrupt Mask Register
@{*/

/** TC2_TC_QIMR_MPE Consecutive Missing Pulse Error **/
#define TC2_TC_QIMR_MPE		(1 << 3)
/** TC2_TC_QIMR_QERR Quadrature Error **/
#define TC2_TC_QIMR_QERR		(1 << 2)
/** TC2_TC_QIMR_DIRCHG Direction Change **/
#define TC2_TC_QIMR_DIRCHG		(1 << 1)
/** TC2_TC_QIMR_IDX Index **/
#define TC2_TC_QIMR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_qisr TCQISR QDEC Interrupt Status Register
@{*/

/** TC2_TC_QISR_DIR Direction **/
#define TC2_TC_QISR_DIR		(1 << 8)
/** TC2_TC_QISR_MPE Consecutive Missing Pulse Error **/
#define TC2_TC_QISR_MPE		(1 << 3)
/** TC2_TC_QISR_QERR Quadrature Error **/
#define TC2_TC_QISR_QERR		(1 << 2)
/** TC2_TC_QISR_DIRCHG Direction Change **/
#define TC2_TC_QISR_DIRCHG		(1 << 1)
/** TC2_TC_QISR_IDX Index **/
#define TC2_TC_QISR_IDX		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_fmr TCFMR Fault Mode Register
@{*/

/** TC2_TC_FMR_ENCF1 Enable Compare Fault Channel 1 **/
#define TC2_TC_FMR_ENCF1		(1 << 1)
/** TC2_TC_FMR_ENCF0 Enable Compare Fault Channel 0 **/
#define TC2_TC_FMR_ENCF0		(1 << 0)

/**@}*/

/** @defgroup tc2_tc_wpmr TCWPMR Write Protection Mode Register
@{*/


#define TC2_TC_WPMR_WPKEY_SHIFT		8
#define TC2_TC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup tc2_tc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** TC2_TC_WPMR_WPEN Write Protection Enable **/
#define TC2_TC_WPMR_WPEN		(1 << 0)

/**@}*/

#pragma once 

/* --- ACC: Analog Comparator Controller ---------------------------- */

/** @defgroup acc_registers Analog Comparator Controller Register
@{*/

/** ACC_ACC_CR Control Register **/
#define ACC_ACC_CR			MMIO32(ACC_BASE + 0x00)
/** ACC_ACC_MR Mode Register **/
#define ACC_ACC_MR			MMIO32(ACC_BASE + 0x04)
/** ACC_ACC_IER Interrupt Enable Register **/
#define ACC_ACC_IER			MMIO32(ACC_BASE + 0x24)
/** ACC_ACC_IDR Interrupt Disable Register **/
#define ACC_ACC_IDR			MMIO32(ACC_BASE + 0x28)
/** ACC_ACC_IMR Interrupt Mask Register **/
#define ACC_ACC_IMR			MMIO32(ACC_BASE + 0x2c)
/** ACC_ACC_ISR Interrupt Status Register **/
#define ACC_ACC_ISR			MMIO32(ACC_BASE + 0x30)
/** ACC_ACC_ACR Analog Control Register **/
#define ACC_ACC_ACR			MMIO32(ACC_BASE + 0x94)
/** ACC_ACC_WPMR Write Protection Mode Register **/
#define ACC_ACC_WPMR			MMIO32(ACC_BASE + 0xe4)
/** ACC_ACC_WPSR Write Protection Status Register **/
#define ACC_ACC_WPSR			MMIO32(ACC_BASE + 0xe8)
/** ACC_ACC_VER Version Register **/
#define ACC_ACC_VER			MMIO32(ACC_BASE + 0xfc)

/**@}*/


/** @defgroup acc_acc_cr ACCCR Control Register
@{*/

/** ACC_ACC_CR_SWRST Software Reset **/
#define ACC_ACC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup acc_acc_mr ACCMR Mode Register
@{*/

/** ACC_ACC_MR_FE Fault Enable **/
#define ACC_ACC_MR_FE		(1 << 14)
/** ACC_ACC_MR_SELFS Selection Of Fault Source **/
#define ACC_ACC_MR_SELFS		(1 << 13)
/** ACC_ACC_MR_INV Invert Comparator Output **/
#define ACC_ACC_MR_INV		(1 << 12)

#define ACC_ACC_MR_EDGETYP_SHIFT		9
#define ACC_ACC_MR_EDGETYP_MASK		0x03
/** @defgroup acc_acc_mr_edgetyp EDGETYP Edge Type
@{*/
/**@}*/

/** ACC_ACC_MR_ACEN Analog Comparator Enable **/
#define ACC_ACC_MR_ACEN		(1 << 8)

#define ACC_ACC_MR_SELPLUS_SHIFT		4
#define ACC_ACC_MR_SELPLUS_MASK		0x07
/** @defgroup acc_acc_mr_selplus SELPLUS Selection For Plus Comparator Input
@{*/
/**@}*/


#define ACC_ACC_MR_SELMINUS_SHIFT		0
#define ACC_ACC_MR_SELMINUS_MASK		0x07
/** @defgroup acc_acc_mr_selminus SELMINUS Selection for Minus Comparator Input
@{*/
/**@}*/


/**@}*/

/** @defgroup acc_acc_ier ACCIER Interrupt Enable Register
@{*/

/** ACC_ACC_IER_CE Comparison Edge **/
#define ACC_ACC_IER_CE		(1 << 0)

/**@}*/

/** @defgroup acc_acc_idr ACCIDR Interrupt Disable Register
@{*/

/** ACC_ACC_IDR_CE Comparison Edge **/
#define ACC_ACC_IDR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_acc_imr ACCIMR Interrupt Mask Register
@{*/

/** ACC_ACC_IMR_CE Comparison Edge **/
#define ACC_ACC_IMR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_acc_isr ACCISR Interrupt Status Register
@{*/

/** ACC_ACC_ISR_MASK Flag Mask **/
#define ACC_ACC_ISR_MASK		(1 << 31)
/** ACC_ACC_ISR_SCO Synchronized Comparator Output **/
#define ACC_ACC_ISR_SCO		(1 << 1)
/** ACC_ACC_ISR_CE Comparison Edge (cleared on read) **/
#define ACC_ACC_ISR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_acc_acr ACCACR Analog Control Register
@{*/


#define ACC_ACC_ACR_HYST_SHIFT		1
#define ACC_ACC_ACR_HYST_MASK		0x03
/** @defgroup acc_acc_acr_hyst HYST Hysteresis Selection
@{*/
/**@}*/

/** ACC_ACC_ACR_ISEL Current Selection **/
#define ACC_ACC_ACR_ISEL		(1 << 0)

/**@}*/

/** @defgroup acc_acc_wpmr ACCWPMR Write Protection Mode Register
@{*/


#define ACC_ACC_WPMR_WPKEY_SHIFT		8
#define ACC_ACC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup acc_acc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** ACC_ACC_WPMR_WPEN Write Protection Enable **/
#define ACC_ACC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup acc_acc_wpsr ACCWPSR Write Protection Status Register
@{*/

/** ACC_ACC_WPSR_WPVS Write Protection Violation Status **/
#define ACC_ACC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup acc_acc_ver ACCVER Version Register
@{*/


#define ACC_ACC_VER_MFN_SHIFT		16
#define ACC_ACC_VER_MFN_MASK		0x07
/** @defgroup acc_acc_ver_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define ACC_ACC_VER_VERSION_SHIFT		0
#define ACC_ACC_VER_VERSION_MASK		0xfff
/** @defgroup acc_acc_ver_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

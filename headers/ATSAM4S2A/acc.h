#pragma once 

/* --- ACC: Analog Comparator Controller ---------------------------- */

/** @defgroup acc_registers Analog Comparator Controller Register
@{*/

/** ACC_CR Control Register **/
#define ACC_CR			MMIO32(ACC_BASE + 0x00)
/** ACC_MR Mode Register **/
#define ACC_MR			MMIO32(ACC_BASE + 0x04)
/** ACC_IER Interrupt Enable Register **/
#define ACC_IER			MMIO32(ACC_BASE + 0x24)
/** ACC_IDR Interrupt Disable Register **/
#define ACC_IDR			MMIO32(ACC_BASE + 0x28)
/** ACC_IMR Interrupt Mask Register **/
#define ACC_IMR			MMIO32(ACC_BASE + 0x2c)
/** ACC_ISR Interrupt Status Register **/
#define ACC_ISR			MMIO32(ACC_BASE + 0x30)
/** ACC_ACR Analog Control Register **/
#define ACC_ACR			MMIO32(ACC_BASE + 0x94)
/** ACC_WPMR Write Protection Mode Register **/
#define ACC_WPMR			MMIO32(ACC_BASE + 0xe4)
/** ACC_WPSR Write Protection Status Register **/
#define ACC_WPSR			MMIO32(ACC_BASE + 0xe8)

/**@}*/


/** @defgroup acc_cr CR Control Register
@{*/

/** ACC_CR_SWRST Software Reset **/
#define ACC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup acc_mr MR Mode Register
@{*/

/** ACC_MR_FE Fault Enable **/
#define ACC_MR_FE		(1 << 14)
/** ACC_MR_SELFS Selection Of Fault Source **/
#define ACC_MR_SELFS		(1 << 13)
/** ACC_MR_INV Invert Comparator Output **/
#define ACC_MR_INV		(1 << 12)

#define ACC_MR_EDGETYP_SHIFT		9
#define ACC_MR_EDGETYP_MASK		0x03
/** @defgroup acc_mr_edgetyp EDGETYP Edge Type
@{*/
/**@}*/

/** ACC_MR_ACEN Analog Comparator Enable **/
#define ACC_MR_ACEN		(1 << 8)

#define ACC_MR_SELPLUS_SHIFT		4
#define ACC_MR_SELPLUS_MASK		0x07
/** @defgroup acc_mr_selplus SELPLUS Selection For Plus Comparator Input
@{*/
/**@}*/


#define ACC_MR_SELMINUS_SHIFT		0
#define ACC_MR_SELMINUS_MASK		0x07
/** @defgroup acc_mr_selminus SELMINUS Selection for Minus Comparator Input
@{*/
/**@}*/


/**@}*/

/** @defgroup acc_ier IER Interrupt Enable Register
@{*/

/** ACC_IER_CE Comparison Edge **/
#define ACC_IER_CE		(1 << 0)

/**@}*/

/** @defgroup acc_idr IDR Interrupt Disable Register
@{*/

/** ACC_IDR_CE Comparison Edge **/
#define ACC_IDR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_imr IMR Interrupt Mask Register
@{*/

/** ACC_IMR_CE Comparison Edge **/
#define ACC_IMR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_isr ISR Interrupt Status Register
@{*/

/** ACC_ISR_MASK Flag Mask **/
#define ACC_ISR_MASK		(1 << 31)
/** ACC_ISR_SCO Synchronized Comparator Output **/
#define ACC_ISR_SCO		(1 << 1)
/** ACC_ISR_CE Comparison Edge (cleared on read) **/
#define ACC_ISR_CE		(1 << 0)

/**@}*/

/** @defgroup acc_acr ACR Analog Control Register
@{*/


#define ACC_ACR_HYST_SHIFT		1
#define ACC_ACR_HYST_MASK		0x03
/** @defgroup acc_acr_hyst HYST Hysteresis Selection
@{*/
/**@}*/

/** ACC_ACR_ISEL Current Selection **/
#define ACC_ACR_ISEL		(1 << 0)

/**@}*/

/** @defgroup acc_wpmr WPMR Write Protection Mode Register
@{*/


#define ACC_WPMR_WPKEY_SHIFT		8
#define ACC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup acc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** ACC_WPMR_WPEN Write Protection Enable **/
#define ACC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup acc_wpsr WPSR Write Protection Status Register
@{*/

/** ACC_WPSR_WPVS Write Protection Violation Status **/
#define ACC_WPSR_WPVS		(1 << 0)

/**@}*/
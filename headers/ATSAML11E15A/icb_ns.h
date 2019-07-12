#pragma once 

/* --- ICB_NS: Implementation Control Block ------------------------- */

/** @defgroup icb_ns_registers Implementation Control Block Register
@{*/

/** ICB_NS_ICTR Interrupt Controller Type Register **/
#define ICB_NS_ICTR			MMIO32(ICB_NS_BASE + 0x04)
/** ICB_NS_ACTLR Auxiliary Control Register **/
#define ICB_NS_ACTLR			MMIO32(ICB_NS_BASE + 0x08)

/**@}*/


/** @defgroup icb_ns_ictr ICTR Interrupt Controller Type Register
@{*/


#define ICB_NS_ICTR_INTLINESNUM_SHIFT		0
#define ICB_NS_ICTR_INTLINESNUM_MASK		0x0f
/** @defgroup icb_ns_ictr_intlinesnum INTLINESNUM Interrupt line set number
@{*/
/**@}*/


/**@}*/

/** @defgroup icb_ns_actlr ACTLR Auxiliary Control Register
@{*/


/**@}*/

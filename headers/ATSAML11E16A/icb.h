#pragma once 

/* --- ICB: Implementation Control Block ---------------------------- */

/** @defgroup icb_registers Implementation Control Block Register
@{*/

/** ICB_ICTR Interrupt Controller Type Register **/
#define ICB_ICTR			MMIO32(ICB_BASE + 0x04)
/** ICB_ACTLR Auxiliary Control Register **/
#define ICB_ACTLR			MMIO32(ICB_BASE + 0x08)

/**@}*/


/** @defgroup icb_ictr ICTR Interrupt Controller Type Register
@{*/


#define ICB_ICTR_INTLINESNUM_SHIFT		0
#define ICB_ICTR_INTLINESNUM_MASK		0x0f
/** @defgroup icb_ictr_intlinesnum INTLINESNUM Interrupt line set number
@{*/
/**@}*/


/**@}*/

/** @defgroup icb_actlr ACTLR Auxiliary Control Register
@{*/


/**@}*/

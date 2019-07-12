#pragma once 

/* --- NVIC_STIR: Nested vectored interrupt controller -------------- */

/** @defgroup nvic_stir_registers Nested vectored interrupt
      controller Register
@{*/

/** NVIC_STIR_STIR Software trigger interrupt register **/
#define NVIC_STIR_STIR			MMIO32(NVIC_STIR_BASE + 0x00)

/**@}*/


/** @defgroup nvic_stir_stir STIR Software trigger interrupt register
@{*/


#define NVIC_STIR_STIR_INTID_SHIFT		0
#define NVIC_STIR_STIR_INTID_MASK		0x1ff
/** @defgroup nvic_stir_stir_intid INTID Software generated interrupt ID
@{*/
/**@}*/


/**@}*/

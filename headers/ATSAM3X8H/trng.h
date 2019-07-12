#pragma once 

/* --- TRNG: True Random Number Generator --------------------------- */

/** @defgroup trng_registers True Random Number Generator Register
@{*/

/** TRNG_CR Control Register **/
#define TRNG_CR			MMIO32(TRNG_BASE + 0x00)
/** TRNG_IER Interrupt Enable Register **/
#define TRNG_IER			MMIO32(TRNG_BASE + 0x10)
/** TRNG_IDR Interrupt Disable Register **/
#define TRNG_IDR			MMIO32(TRNG_BASE + 0x14)
/** TRNG_IMR Interrupt Mask Register **/
#define TRNG_IMR			MMIO32(TRNG_BASE + 0x18)
/** TRNG_ISR Interrupt Status Register **/
#define TRNG_ISR			MMIO32(TRNG_BASE + 0x1c)
/** TRNG_ODATA Output Data Register **/
#define TRNG_ODATA			MMIO32(TRNG_BASE + 0x50)

/**@}*/


/** @defgroup trng_cr CR Control Register
@{*/


#define TRNG_CR_KEY_SHIFT		8
#define TRNG_CR_KEY_MASK		0xffffff
/** @defgroup trng_cr_key KEY Security Key
@{*/
/**@}*/

/** TRNG_CR_ENABLE Enables the TRNG to provide random values **/
#define TRNG_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup trng_ier IER Interrupt Enable Register
@{*/

/** TRNG_IER_DATRDY Data Ready Interrupt Enable **/
#define TRNG_IER_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_idr IDR Interrupt Disable Register
@{*/

/** TRNG_IDR_DATRDY Data Ready Interrupt Disable **/
#define TRNG_IDR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_imr IMR Interrupt Mask Register
@{*/

/** TRNG_IMR_DATRDY Data Ready Interrupt Mask **/
#define TRNG_IMR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_isr ISR Interrupt Status Register
@{*/

/** TRNG_ISR_DATRDY Data Ready **/
#define TRNG_ISR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_odata ODATA Output Data Register
@{*/


#define TRNG_ODATA_ODATA_SHIFT		0
#define TRNG_ODATA_ODATA_MASK		0xffffffff
/** @defgroup trng_odata_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

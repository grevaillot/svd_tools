#pragma once 

/* --- TRNG: True Random Number Generator --------------------------- */

/** @defgroup trng_registers True Random Number Generator Register
@{*/

/** TRNG_TRNG_CR Control Register **/
#define TRNG_TRNG_CR			MMIO32(TRNG_BASE + 0x00)
/** TRNG_TRNG_IER Interrupt Enable Register **/
#define TRNG_TRNG_IER			MMIO32(TRNG_BASE + 0x10)
/** TRNG_TRNG_IDR Interrupt Disable Register **/
#define TRNG_TRNG_IDR			MMIO32(TRNG_BASE + 0x14)
/** TRNG_TRNG_IMR Interrupt Mask Register **/
#define TRNG_TRNG_IMR			MMIO32(TRNG_BASE + 0x18)
/** TRNG_TRNG_ISR Interrupt Status Register **/
#define TRNG_TRNG_ISR			MMIO32(TRNG_BASE + 0x1c)
/** TRNG_TRNG_ODATA Output Data Register **/
#define TRNG_TRNG_ODATA			MMIO32(TRNG_BASE + 0x50)
/** TRNG_TRNG_VERSION Version Register **/
#define TRNG_TRNG_VERSION			MMIO32(TRNG_BASE + 0xfc)

/**@}*/


/** @defgroup trng_trng_cr TRNGCR Control Register
@{*/


#define TRNG_TRNG_CR_KEY_SHIFT		8
#define TRNG_TRNG_CR_KEY_MASK		0xffffff
/** @defgroup trng_trng_cr_key KEY Security Key
@{*/
/**@}*/

/** TRNG_TRNG_CR_ENABLE Enables the TRNG to Provide Random Values **/
#define TRNG_TRNG_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup trng_trng_ier TRNGIER Interrupt Enable Register
@{*/

/** TRNG_TRNG_IER_DATRDY Data Ready Interrupt Enable **/
#define TRNG_TRNG_IER_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_trng_idr TRNGIDR Interrupt Disable Register
@{*/

/** TRNG_TRNG_IDR_DATRDY Data Ready Interrupt Disable **/
#define TRNG_TRNG_IDR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_trng_imr TRNGIMR Interrupt Mask Register
@{*/

/** TRNG_TRNG_IMR_DATRDY Data Ready Interrupt Mask **/
#define TRNG_TRNG_IMR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_trng_isr TRNGISR Interrupt Status Register
@{*/

/** TRNG_TRNG_ISR_DATRDY Data Ready **/
#define TRNG_TRNG_ISR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup trng_trng_odata TRNGODATA Output Data Register
@{*/


#define TRNG_TRNG_ODATA_ODATA_SHIFT		0
#define TRNG_TRNG_ODATA_ODATA_MASK		0xffffffff
/** @defgroup trng_trng_odata_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

/** @defgroup trng_trng_version TRNGVERSION Version Register
@{*/


#define TRNG_TRNG_VERSION_MFN_SHIFT		16
#define TRNG_TRNG_VERSION_MFN_MASK		0x07
/** @defgroup trng_trng_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define TRNG_TRNG_VERSION_VERSION_SHIFT		0
#define TRNG_TRNG_VERSION_VERSION_MASK		0xfff
/** @defgroup trng_trng_version_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

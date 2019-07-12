#pragma once 

/* --- AES: Advanced encrytion standard hardware accelerator -------- */

/** @defgroup aes_registers Advanced encrytion standard hardware
      accelerator Register
@{*/

/** AES_CR control register **/
#define AES_CR			MMIO32(AES_BASE + 0x00)
/** AES_SR Status register **/
#define AES_SR			MMIO32(AES_BASE + 0x04)
/** AES_DINR Data input register **/
#define AES_DINR			MMIO32(AES_BASE + 0x08)
/** AES_DOUTR Data output register **/
#define AES_DOUTR			MMIO32(AES_BASE + 0x0c)
/** AES_KEYR0 AES Key register 0 **/
#define AES_KEYR0			MMIO32(AES_BASE + 0x10)
/** AES_KEYR1 AES Key register 1 **/
#define AES_KEYR1			MMIO32(AES_BASE + 0x14)
/** AES_KEYR2 AES Key register 2 **/
#define AES_KEYR2			MMIO32(AES_BASE + 0x18)
/** AES_KEYR3 AES Key register 3 **/
#define AES_KEYR3			MMIO32(AES_BASE + 0x1c)
/** AES_IVR0 Initialization Vector Register 0 **/
#define AES_IVR0			MMIO32(AES_BASE + 0x20)
/** AES_IVR1 Initialization Vector Register 1 **/
#define AES_IVR1			MMIO32(AES_BASE + 0x24)
/** AES_IVR2 Initialization Vector Register 2 **/
#define AES_IVR2			MMIO32(AES_BASE + 0x28)
/** AES_IVR3 Initialization Vector Register 3 **/
#define AES_IVR3			MMIO32(AES_BASE + 0x2c)

/**@}*/


/** @defgroup aes_cr CR control register
@{*/

/** AES_CR_DMAOUTEN Enable DMA management of data output phase **/
#define AES_CR_DMAOUTEN		(1 << 12)
/** AES_CR_DMAINEN Enable DMA management of data input phase **/
#define AES_CR_DMAINEN		(1 << 11)
/** AES_CR_ERRIE Error interrupt enable **/
#define AES_CR_ERRIE		(1 << 10)
/** AES_CR_CCFIE CCF flag interrupt enable **/
#define AES_CR_CCFIE		(1 << 9)
/** AES_CR_ERRC Error clear **/
#define AES_CR_ERRC		(1 << 8)
/** AES_CR_CCFC Computation Complete Flag Clear **/
#define AES_CR_CCFC		(1 << 7)

#define AES_CR_CHMOD_SHIFT		5
#define AES_CR_CHMOD_MASK		0x03
/** @defgroup aes_cr_chmod CHMOD AES chaining mode
@{*/
/**@}*/


#define AES_CR_MODE_SHIFT		3
#define AES_CR_MODE_MASK		0x03
/** @defgroup aes_cr_mode MODE AES operating mode
@{*/
/**@}*/


#define AES_CR_DATATYPE_SHIFT		1
#define AES_CR_DATATYPE_MASK		0x03
/** @defgroup aes_cr_datatype DATATYPE Data type selection
@{*/
/**@}*/

/** AES_CR_EN AES enable **/
#define AES_CR_EN		(1 << 0)

/**@}*/

/** @defgroup aes_sr SR Status register
@{*/

/** AES_SR_WRERR Write error flag **/
#define AES_SR_WRERR		(1 << 2)
/** AES_SR_RDERR Read error flag **/
#define AES_SR_RDERR		(1 << 1)
/** AES_SR_CCF Computation complete flag **/
#define AES_SR_CCF		(1 << 0)

/**@}*/

/** @defgroup aes_dinr DINR Data input register
@{*/


#define AES_DINR_DINR_SHIFT		0
#define AES_DINR_DINR_MASK		0xffffffff
/** @defgroup aes_dinr_dinr DINR Data input
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_doutr DOUTR Data output register
@{*/


#define AES_DOUTR_DOUTR_SHIFT		0
#define AES_DOUTR_DOUTR_MASK		0xffffffff
/** @defgroup aes_doutr_doutr DOUTR Data output
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr0 KEYR0 AES Key register 0
@{*/


#define AES_KEYR0_KEYR0_SHIFT		0
#define AES_KEYR0_KEYR0_MASK		0xffffffff
/** @defgroup aes_keyr0_keyr0 KEYR0 AES key
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr1 KEYR1 AES Key register 1
@{*/


#define AES_KEYR1_KEYR1_SHIFT		0
#define AES_KEYR1_KEYR1_MASK		0xffffffff
/** @defgroup aes_keyr1_keyr1 KEYR1 AES key
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr2 KEYR2 AES Key register 2
@{*/


#define AES_KEYR2_KEYR2_SHIFT		0
#define AES_KEYR2_KEYR2_MASK		0xffffffff
/** @defgroup aes_keyr2_keyr2 KEYR2 AES key
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr3 KEYR3 AES Key register 3
@{*/


#define AES_KEYR3_KEYR3_SHIFT		0
#define AES_KEYR3_KEYR3_MASK		0xffffffff
/** @defgroup aes_keyr3_keyr3 KEYR3 AES key
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr0 IVR0 Initialization Vector Register 0
@{*/


#define AES_IVR0_IVR0_SHIFT		0
#define AES_IVR0_IVR0_MASK		0xffffffff
/** @defgroup aes_ivr0_ivr0 IVR0 Initialization Vector Register
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr1 IVR1 Initialization Vector Register 1
@{*/


#define AES_IVR1_IVR1_SHIFT		0
#define AES_IVR1_IVR1_MASK		0xffffffff
/** @defgroup aes_ivr1_ivr1 IVR1 Initialization Vector Register
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr2 IVR2 Initialization Vector Register 2
@{*/


#define AES_IVR2_IVR2_SHIFT		0
#define AES_IVR2_IVR2_MASK		0xffffffff
/** @defgroup aes_ivr2_ivr2 IVR2 Initialization Vector Register
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr3 IVR3 Initialization Vector Register 3
@{*/


#define AES_IVR3_IVR3_SHIFT		0
#define AES_IVR3_IVR3_MASK		0xffffffff
/** @defgroup aes_ivr3_ivr3 IVR3 Initialization Vector Register
@{*/
/**@}*/


/**@}*/

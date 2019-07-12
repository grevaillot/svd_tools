#pragma once 

/* --- AES: Advanced encryption standard hardware accelerator ------- */

/** @defgroup aes_registers Advanced encryption standard hardware
      accelerator Register
@{*/

/** AES_CR control register **/
#define AES_CR			MMIO32(AES_BASE + 0x00)
/** AES_SR status register **/
#define AES_SR			MMIO32(AES_BASE + 0x04)
/** AES_DINR data input register **/
#define AES_DINR			MMIO32(AES_BASE + 0x08)
/** AES_DOUTR data output register **/
#define AES_DOUTR			MMIO32(AES_BASE + 0x0c)
/** AES_KEYR0 key register 0 **/
#define AES_KEYR0			MMIO32(AES_BASE + 0x10)
/** AES_KEYR1 key register 1 **/
#define AES_KEYR1			MMIO32(AES_BASE + 0x14)
/** AES_KEYR2 key register 2 **/
#define AES_KEYR2			MMIO32(AES_BASE + 0x18)
/** AES_KEYR3 key register 3 **/
#define AES_KEYR3			MMIO32(AES_BASE + 0x1c)
/** AES_IVR0 initialization vector register 0 **/
#define AES_IVR0			MMIO32(AES_BASE + 0x20)
/** AES_IVR1 initialization vector register 1 **/
#define AES_IVR1			MMIO32(AES_BASE + 0x24)
/** AES_IVR2 initialization vector register 2 **/
#define AES_IVR2			MMIO32(AES_BASE + 0x28)
/** AES_IVR3 initialization vector register 3 **/
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
/** @defgroup aes_cr_datatype DATATYPE Data type selection (for data in and data out to/from the cryptographic block)
@{*/
/**@}*/

/** AES_CR_EN AES enable **/
#define AES_CR_EN		(1 << 0)

/**@}*/

/** @defgroup aes_sr SR status register
@{*/

/** AES_SR_WRERR Write error flag **/
#define AES_SR_WRERR		(1 << 2)
/** AES_SR_RDERR Read error flag **/
#define AES_SR_RDERR		(1 << 1)
/** AES_SR_CCF Computation complete flag **/
#define AES_SR_CCF		(1 << 0)

/**@}*/

/** @defgroup aes_dinr DINR data input register
@{*/


#define AES_DINR_AES_DINR_SHIFT		0
#define AES_DINR_AES_DINR_MASK		0xffffffff
/** @defgroup aes_dinr_aes_dinr AESDINR Data Input Register.
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_doutr DOUTR data output register
@{*/


#define AES_DOUTR_AES_DOUTR_SHIFT		0
#define AES_DOUTR_AES_DOUTR_MASK		0xffffffff
/** @defgroup aes_doutr_aes_doutr AESDOUTR Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr0 KEYR0 key register 0
@{*/


#define AES_KEYR0_AES_KEYR0_SHIFT		0
#define AES_KEYR0_AES_KEYR0_MASK		0xffffffff
/** @defgroup aes_keyr0_aes_keyr0 AESKEYR0 Data Output Register (LSB key [31:0])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr1 KEYR1 key register 1
@{*/


#define AES_KEYR1_AES_KEYR1_SHIFT		0
#define AES_KEYR1_AES_KEYR1_MASK		0xffffffff
/** @defgroup aes_keyr1_aes_keyr1 AESKEYR1 AES key register (key [63:32])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr2 KEYR2 key register 2
@{*/


#define AES_KEYR2_AES_KEYR2_SHIFT		0
#define AES_KEYR2_AES_KEYR2_MASK		0xffffffff
/** @defgroup aes_keyr2_aes_keyr2 AESKEYR2 AES key register (key [95:64])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr3 KEYR3 key register 3
@{*/


#define AES_KEYR3_AES_KEYR3_SHIFT		0
#define AES_KEYR3_AES_KEYR3_MASK		0xffffffff
/** @defgroup aes_keyr3_aes_keyr3 AESKEYR3 AES key register (MSB key [127:96])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr0 IVR0 initialization vector register 0
@{*/


#define AES_IVR0_AES_IVR0_SHIFT		0
#define AES_IVR0_AES_IVR0_MASK		0xffffffff
/** @defgroup aes_ivr0_aes_ivr0 AESIVR0 initialization vector register (LSB IVR [31:0])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr1 IVR1 initialization vector register 1
@{*/


#define AES_IVR1_AES_IVR1_SHIFT		0
#define AES_IVR1_AES_IVR1_MASK		0xffffffff
/** @defgroup aes_ivr1_aes_ivr1 AESIVR1 Initialization Vector Register (IVR [63:32])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr2 IVR2 initialization vector register 2
@{*/


#define AES_IVR2_AES_IVR2_SHIFT		0
#define AES_IVR2_AES_IVR2_MASK		0xffffffff
/** @defgroup aes_ivr2_aes_ivr2 AESIVR2 Initialization Vector Register (IVR [95:64])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ivr3 IVR3 initialization vector register 3
@{*/


#define AES_IVR3_AES_IVR3_SHIFT		0
#define AES_IVR3_AES_IVR3_MASK		0xffffffff
/** @defgroup aes_ivr3_aes_ivr3 AESIVR3 Initialization Vector Register (MSB IVR [127:96])
@{*/
/**@}*/


/**@}*/

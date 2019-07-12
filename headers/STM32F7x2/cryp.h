#pragma once 

/* --- CRYP: Cryptographic processor -------------------------------- */

/** @defgroup cryp_registers Cryptographic processor Register
@{*/

/** CRYP_CR control register **/
#define CRYP_CR			MMIO32(CRYP_BASE + 0x00)
/** CRYP_SR status register **/
#define CRYP_SR			MMIO32(CRYP_BASE + 0x04)
/** CRYP_DINR data input register **/
#define CRYP_DINR			MMIO32(CRYP_BASE + 0x08)
/** CRYP_DOUTR data output register **/
#define CRYP_DOUTR			MMIO32(CRYP_BASE + 0x0c)
/** CRYP_KEYR0 key register **/
#define CRYP_KEYR0			MMIO32(CRYP_BASE + 0x10)
/** CRYP_KEYR1 key register **/
#define CRYP_KEYR1			MMIO32(CRYP_BASE + 0x14)
/** CRYP_KEYR2 key register **/
#define CRYP_KEYR2			MMIO32(CRYP_BASE + 0x18)
/** CRYP_KEYR3 key register **/
#define CRYP_KEYR3			MMIO32(CRYP_BASE + 0x1c)
/** CRYP_IVR0 initialization vector register **/
#define CRYP_IVR0			MMIO32(CRYP_BASE + 0x20)
/** CRYP_IVR1 initialization vector register **/
#define CRYP_IVR1			MMIO32(CRYP_BASE + 0x24)
/** CRYP_IVR2 initialization vector register **/
#define CRYP_IVR2			MMIO32(CRYP_BASE + 0x28)
/** CRYP_IVR3 initialization vector register **/
#define CRYP_IVR3			MMIO32(CRYP_BASE + 0x2c)
/** CRYP_KEYR4 key registers **/
#define CRYP_KEYR4			MMIO32(CRYP_BASE + 0x30)
/** CRYP_KEYR5 key registers **/
#define CRYP_KEYR5			MMIO32(CRYP_BASE + 0x34)
/** CRYP_KEYR6 key registers **/
#define CRYP_KEYR6			MMIO32(CRYP_BASE + 0x38)
/** CRYP_KEYR7 key registers **/
#define CRYP_KEYR7			MMIO32(CRYP_BASE + 0x3c)
/** CRYP_SUSP0R Suspend registers **/
#define CRYP_SUSP0R			MMIO32(CRYP_BASE + 0x40)
/** CRYP_SUSP1R Suspend registers **/
#define CRYP_SUSP1R			MMIO32(CRYP_BASE + 0x44)
/** CRYP_SUSP2R Suspend registers **/
#define CRYP_SUSP2R			MMIO32(CRYP_BASE + 0x48)
/** CRYP_SUSP3R Suspend registers **/
#define CRYP_SUSP3R			MMIO32(CRYP_BASE + 0x4c)
/** CRYP_SUSP4R Suspend registers **/
#define CRYP_SUSP4R			MMIO32(CRYP_BASE + 0x50)
/** CRYP_SUSP5R Suspend registers **/
#define CRYP_SUSP5R			MMIO32(CRYP_BASE + 0x54)
/** CRYP_SUSP6R Suspend registers **/
#define CRYP_SUSP6R			MMIO32(CRYP_BASE + 0x58)
/** CRYP_SUSP7R Suspend registers **/
#define CRYP_SUSP7R			MMIO32(CRYP_BASE + 0x5c)

/**@}*/


/** @defgroup cryp_cr CR control register
@{*/

/** CRYP_CR_KEYSIZE Key size selection **/
#define CRYP_CR_KEYSIZE		(1 << 18)

#define CRYP_CR_GCMPH_SHIFT		13
#define CRYP_CR_GCMPH_MASK		0x03
/** @defgroup cryp_cr_gcmph GCMPH Used only for GCM, GMAC and CMAC algorithms and has no effect when other
@{*/
/**@}*/

/** CRYP_CR_DMAOUTEN Enable DMA management of data output phase **/
#define CRYP_CR_DMAOUTEN		(1 << 12)
/** CRYP_CR_DMAINEN Enable DMA management of data input phase **/
#define CRYP_CR_DMAINEN		(1 << 11)
/** CRYP_CR_ERRIE Error interrupt enable **/
#define CRYP_CR_ERRIE		(1 << 10)
/** CRYP_CR_CCFIE CCF flag interrupt enable **/
#define CRYP_CR_CCFIE		(1 << 9)
/** CRYP_CR_ERRC Error clear **/
#define CRYP_CR_ERRC		(1 << 8)
/** CRYP_CR_CCFC Computation complete flag clear **/
#define CRYP_CR_CCFC		(1 << 7)

#define CRYP_CR_CHMOD_SHIFT		5
#define CRYP_CR_CHMOD_MASK		0x03
/** @defgroup cryp_cr_chmod CHMOD AES chaining mode
@{*/
/**@}*/


#define CRYP_CR_MODE_SHIFT		3
#define CRYP_CR_MODE_MASK		0x03
/** @defgroup cryp_cr_mode MODE AES operating mode
@{*/
/**@}*/


#define CRYP_CR_DATATYPE_SHIFT		1
#define CRYP_CR_DATATYPE_MASK		0x03
/** @defgroup cryp_cr_datatype DATATYPE Data type selection (for data in and data out to/from the cryptographic block)
@{*/
/**@}*/

/** CRYP_CR_EN AES enable **/
#define CRYP_CR_EN		(1 << 0)

/**@}*/

/** @defgroup cryp_sr SR status register
@{*/

/** CRYP_SR_Busy Busy flag **/
#define CRYP_SR_Busy		(1 << 3)
/** CRYP_SR_WRERR Write error flag **/
#define CRYP_SR_WRERR		(1 << 2)
/** CRYP_SR_RDERR Read error flag **/
#define CRYP_SR_RDERR		(1 << 1)
/** CRYP_SR_CCF Computation complete flag **/
#define CRYP_SR_CCF		(1 << 0)

/**@}*/

/** @defgroup cryp_dinr DINR data input register
@{*/


#define CRYP_DINR_DINR_SHIFT		0
#define CRYP_DINR_DINR_MASK		0xffffffff
/** @defgroup cryp_dinr_dinr DINR Data input
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_doutr DOUTR data output register
@{*/


#define CRYP_DOUTR_DOUTR_SHIFT		0
#define CRYP_DOUTR_DOUTR_MASK		0xffffffff
/** @defgroup cryp_doutr_doutr DOUTR Data output
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr0 KEYR0 key register
@{*/


#define CRYP_KEYR0_KEYR0_SHIFT		0
#define CRYP_KEYR0_KEYR0_MASK		0x7fffffff
/** @defgroup cryp_keyr0_keyr0 KEYR0 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr1 KEYR1 key register
@{*/


#define CRYP_KEYR1_KEYR1_SHIFT		0
#define CRYP_KEYR1_KEYR1_MASK		0xffffffff
/** @defgroup cryp_keyr1_keyr1 KEYR1 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr2 KEYR2 key register
@{*/


#define CRYP_KEYR2_KEYR2_SHIFT		0
#define CRYP_KEYR2_KEYR2_MASK		0x7fffffff
/** @defgroup cryp_keyr2_keyr2 KEYR2 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr3 KEYR3 key register
@{*/


#define CRYP_KEYR3_KEYR3_SHIFT		0
#define CRYP_KEYR3_KEYR3_MASK		0xffffffff
/** @defgroup cryp_keyr3_keyr3 KEYR3 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_ivr0 IVR0 initialization vector register
@{*/


#define CRYP_IVR0_IVR0_SHIFT		0
#define CRYP_IVR0_IVR0_MASK		0xffffffff
/** @defgroup cryp_ivr0_ivr0 IVR0 initialization vector register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_ivr1 IVR1 initialization vector register
@{*/


#define CRYP_IVR1_IVR1_SHIFT		0
#define CRYP_IVR1_IVR1_MASK		0xffffffff
/** @defgroup cryp_ivr1_ivr1 IVR1 Initialization vector register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_ivr2 IVR2 initialization vector register
@{*/


#define CRYP_IVR2_IVR2_SHIFT		0
#define CRYP_IVR2_IVR2_MASK		0xffffffff
/** @defgroup cryp_ivr2_ivr2 IVR2 Initialization vector register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_ivr3 IVR3 initialization vector register
@{*/


#define CRYP_IVR3_IVR3_SHIFT		0
#define CRYP_IVR3_IVR3_MASK		0xffffffff
/** @defgroup cryp_ivr3_ivr3 IVR3 Initialization vector register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr4 KEYR4 key registers
@{*/


#define CRYP_KEYR4_KEYR4_SHIFT		0
#define CRYP_KEYR4_KEYR4_MASK		0xffffffff
/** @defgroup cryp_keyr4_keyr4 KEYR4 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr5 KEYR5 key registers
@{*/


#define CRYP_KEYR5_KEYR5_SHIFT		0
#define CRYP_KEYR5_KEYR5_MASK		0xffffffff
/** @defgroup cryp_keyr5_keyr5 KEYR5 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr6 KEYR6 key registers
@{*/


#define CRYP_KEYR6_KEYR6_SHIFT		0
#define CRYP_KEYR6_KEYR6_MASK		0xffffffff
/** @defgroup cryp_keyr6_keyr6 KEYR6 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_keyr7 KEYR7 key registers
@{*/


#define CRYP_KEYR7_KEYR7_SHIFT		0
#define CRYP_KEYR7_KEYR7_MASK		0xffffffff
/** @defgroup cryp_keyr7_keyr7 KEYR7 Data output register
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp0r SUSP0R Suspend registers
@{*/


#define CRYP_SUSP0R_SUSP0R_SHIFT		0
#define CRYP_SUSP0R_SUSP0R_MASK		0xffffffff
/** @defgroup cryp_susp0r_susp0r SUSP0R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp1r SUSP1R Suspend registers
@{*/


#define CRYP_SUSP1R_SUSP1R_SHIFT		0
#define CRYP_SUSP1R_SUSP1R_MASK		0xffffffff
/** @defgroup cryp_susp1r_susp1r SUSP1R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp2r SUSP2R Suspend registers
@{*/


#define CRYP_SUSP2R_SUSP2R_SHIFT		0
#define CRYP_SUSP2R_SUSP2R_MASK		0xffffffff
/** @defgroup cryp_susp2r_susp2r SUSP2R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp3r SUSP3R Suspend registers
@{*/


#define CRYP_SUSP3R_SUSP3R_SHIFT		0
#define CRYP_SUSP3R_SUSP3R_MASK		0xffffffff
/** @defgroup cryp_susp3r_susp3r SUSP3R IV127
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp4r SUSP4R Suspend registers
@{*/


#define CRYP_SUSP4R_SUSP4R_SHIFT		0
#define CRYP_SUSP4R_SUSP4R_MASK		0xffffffff
/** @defgroup cryp_susp4r_susp4r SUSP4R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp5r SUSP5R Suspend registers
@{*/


#define CRYP_SUSP5R_SUSP5R_SHIFT		0
#define CRYP_SUSP5R_SUSP5R_MASK		0xffffffff
/** @defgroup cryp_susp5r_susp5r SUSP5R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp6r SUSP6R Suspend registers
@{*/


#define CRYP_SUSP6R_SUSP6R_SHIFT		0
#define CRYP_SUSP6R_SUSP6R_MASK		0xffffffff
/** @defgroup cryp_susp6r_susp6r SUSP6R AES Suspend
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_susp7r SUSP7R Suspend registers
@{*/


#define CRYP_SUSP7R_SUSP7R_SHIFT		0
#define CRYP_SUSP7R_SUSP7R_MASK		0xffffffff
/** @defgroup cryp_susp7r_susp7r SUSP7R AES Suspend
@{*/
/**@}*/


/**@}*/

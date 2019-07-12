#pragma once 

/* --- AES: Advanced encryption standard hardware accelerator 1 ----- */

/** @defgroup aes_registers Advanced encryption standard hardware
      accelerator 1 Register
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
/** AES_KEYR4 key register 4 **/
#define AES_KEYR4			MMIO32(AES_BASE + 0x30)
/** AES_KEYR5 key register 5 **/
#define AES_KEYR5			MMIO32(AES_BASE + 0x34)
/** AES_KEYR6 key register 6 **/
#define AES_KEYR6			MMIO32(AES_BASE + 0x38)
/** AES_KEYR7 key register 7 **/
#define AES_KEYR7			MMIO32(AES_BASE + 0x3c)
/** AES_SUSP0R AES suspend register 0 **/
#define AES_SUSP0R			MMIO32(AES_BASE + 0x40)
/** AES_SUSP1R AES suspend register 1 **/
#define AES_SUSP1R			MMIO32(AES_BASE + 0x44)
/** AES_SUSP2R AES suspend register 2 **/
#define AES_SUSP2R			MMIO32(AES_BASE + 0x48)
/** AES_SUSP3R AES suspend register 3 **/
#define AES_SUSP3R			MMIO32(AES_BASE + 0x4c)
/** AES_SUSP4R AES suspend register 4 **/
#define AES_SUSP4R			MMIO32(AES_BASE + 0x50)
/** AES_SUSP5R AES suspend register 5 **/
#define AES_SUSP5R			MMIO32(AES_BASE + 0x54)
/** AES_SUSP6R AES suspend register 6 **/
#define AES_SUSP6R			MMIO32(AES_BASE + 0x58)
/** AES_SUSP7R AES suspend register 7 **/
#define AES_SUSP7R			MMIO32(AES_BASE + 0x5c)
/** AES_HWCFR AES hardware configuration register **/
#define AES_HWCFR			MMIO32(AES_BASE + 0x3f0)
/** AES_VERR AES version register **/
#define AES_VERR			MMIO32(AES_BASE + 0x3f4)
/** AES_IPIDR AES identification register **/
#define AES_IPIDR			MMIO32(AES_BASE + 0x3f8)
/** AES_SIDR AES size ID register **/
#define AES_SIDR			MMIO32(AES_BASE + 0x3fc)

/**@}*/


/** @defgroup aes_cr CR control register
@{*/


#define AES_CR_NPBLB_SHIFT		20
#define AES_CR_NPBLB_MASK		0x0f
/** @defgroup aes_cr_npblb NPBLB Number of padding bytes in last block of payload
@{*/
/**@}*/

/** AES_CR_KEYSIZE Key size selection **/
#define AES_CR_KEYSIZE		(1 << 18)
/** AES_CR_CHMOD2 AES chaining mode Bit2 **/
#define AES_CR_CHMOD2		(1 << 16)

#define AES_CR_GCMPH_SHIFT		13
#define AES_CR_GCMPH_MASK		0x03
/** @defgroup aes_cr_gcmph GCMPH Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
@{*/
/**@}*/

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

#define AES_CR_CHMOD10_SHIFT		5
#define AES_CR_CHMOD10_MASK		0x03
/** @defgroup aes_cr_chmod10 CHMOD10 AES chaining mode Bit1 Bit0
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

/** AES_SR_BUSY Busy flag **/
#define AES_SR_BUSY		(1 << 3)
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
/** @defgroup aes_dinr_aes_dinr AESDINR Data Input Register
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

/** @defgroup aes_keyr4 KEYR4 key register 4
@{*/


#define AES_KEYR4_AES_KEYR4_SHIFT		0
#define AES_KEYR4_AES_KEYR4_MASK		0xffffffff
/** @defgroup aes_keyr4_aes_keyr4 AESKEYR4 AES key register (MSB key [159:128])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr5 KEYR5 key register 5
@{*/


#define AES_KEYR5_AES_KEYR5_SHIFT		0
#define AES_KEYR5_AES_KEYR5_MASK		0xffffffff
/** @defgroup aes_keyr5_aes_keyr5 AESKEYR5 AES key register (MSB key [191:160])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr6 KEYR6 key register 6
@{*/


#define AES_KEYR6_AES_KEYR6_SHIFT		0
#define AES_KEYR6_AES_KEYR6_MASK		0xffffffff
/** @defgroup aes_keyr6_aes_keyr6 AESKEYR6 AES key register (MSB key [223:192])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_keyr7 KEYR7 key register 7
@{*/


#define AES_KEYR7_AES_KEYR7_SHIFT		0
#define AES_KEYR7_AES_KEYR7_MASK		0xffffffff
/** @defgroup aes_keyr7_aes_keyr7 AESKEYR7 AES key register (MSB key [255:224])
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp0r SUSP0R AES suspend register 0
@{*/


#define AES_SUSP0R_AES_SUSP0R_SHIFT		0
#define AES_SUSP0R_AES_SUSP0R_MASK		0xffffffff
/** @defgroup aes_susp0r_aes_susp0r AESSUSP0R AES suspend register 0
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp1r SUSP1R AES suspend register 1
@{*/


#define AES_SUSP1R_AES_SUSP1R_SHIFT		0
#define AES_SUSP1R_AES_SUSP1R_MASK		0xffffffff
/** @defgroup aes_susp1r_aes_susp1r AESSUSP1R AES suspend register 1
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp2r SUSP2R AES suspend register 2
@{*/


#define AES_SUSP2R_AES_SUSP2R_SHIFT		0
#define AES_SUSP2R_AES_SUSP2R_MASK		0xffffffff
/** @defgroup aes_susp2r_aes_susp2r AESSUSP2R AES suspend register 2
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp3r SUSP3R AES suspend register 3
@{*/


#define AES_SUSP3R_AES_SUSP3R_SHIFT		0
#define AES_SUSP3R_AES_SUSP3R_MASK		0xffffffff
/** @defgroup aes_susp3r_aes_susp3r AESSUSP3R AES suspend register 3
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp4r SUSP4R AES suspend register 4
@{*/


#define AES_SUSP4R_AES_SUSP4R_SHIFT		0
#define AES_SUSP4R_AES_SUSP4R_MASK		0xffffffff
/** @defgroup aes_susp4r_aes_susp4r AESSUSP4R AES suspend register 4
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp5r SUSP5R AES suspend register 5
@{*/


#define AES_SUSP5R_AES_SUSP5R_SHIFT		0
#define AES_SUSP5R_AES_SUSP5R_MASK		0xffffffff
/** @defgroup aes_susp5r_aes_susp5r AESSUSP5R AES suspend register 5
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp6r SUSP6R AES suspend register 6
@{*/


#define AES_SUSP6R_AES_SUSP6R_SHIFT		0
#define AES_SUSP6R_AES_SUSP6R_MASK		0xffffffff
/** @defgroup aes_susp6r_aes_susp6r AESSUSP6R AES suspend register 6
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_susp7r SUSP7R AES suspend register 7
@{*/


#define AES_SUSP7R_AES_SUSP7R_SHIFT		0
#define AES_SUSP7R_AES_SUSP7R_MASK		0xffffffff
/** @defgroup aes_susp7r_aes_susp7r AESSUSP7R AES suspend register 7
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_hwcfr HWCFR AES hardware configuration register
@{*/


#define AES_HWCFR_CFG4_SHIFT		12
#define AES_HWCFR_CFG4_MASK		0x0f
/** @defgroup aes_hwcfr_cfg4 CFG4 HW Generic 4
@{*/
/**@}*/


#define AES_HWCFR_CFG3_SHIFT		8
#define AES_HWCFR_CFG3_MASK		0x0f
/** @defgroup aes_hwcfr_cfg3 CFG3 HW Generic 3
@{*/
/**@}*/


#define AES_HWCFR_CFG2_SHIFT		4
#define AES_HWCFR_CFG2_MASK		0x0f
/** @defgroup aes_hwcfr_cfg2 CFG2 HW Generic 2
@{*/
/**@}*/


#define AES_HWCFR_CFG1_SHIFT		0
#define AES_HWCFR_CFG1_MASK		0x0f
/** @defgroup aes_hwcfr_cfg1 CFG1 HW Generic 1
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_verr VERR AES version register
@{*/


#define AES_VERR_MAJREV_SHIFT		4
#define AES_VERR_MAJREV_MASK		0x0f
/** @defgroup aes_verr_majrev MAJREV Major revision
@{*/
/**@}*/


#define AES_VERR_MINREV_SHIFT		0
#define AES_VERR_MINREV_MASK		0x0f
/** @defgroup aes_verr_minrev MINREV Minor revision
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_ipidr IPIDR AES identification register
@{*/


#define AES_IPIDR_ID_SHIFT		0
#define AES_IPIDR_ID_MASK		0xffffffff
/** @defgroup aes_ipidr_id ID Identification code
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_sidr SIDR AES size ID register
@{*/


#define AES_SIDR_ID_SHIFT		0
#define AES_SIDR_ID_MASK		0xffffffff
/** @defgroup aes_sidr_id ID Size Identification code
@{*/
/**@}*/


/**@}*/

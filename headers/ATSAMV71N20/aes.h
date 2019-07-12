#pragma once 

/* --- AES: Advanced Encryption Standard ---------------------------- */

/** @defgroup aes_registers Advanced Encryption Standard Register
@{*/

/** AES_AES_CR Control Register **/
#define AES_AES_CR			MMIO32(AES_BASE + 0x00)
/** AES_AES_MR Mode Register **/
#define AES_AES_MR			MMIO32(AES_BASE + 0x04)
/** AES_AES_IER Interrupt Enable Register **/
#define AES_AES_IER			MMIO32(AES_BASE + 0x10)
/** AES_AES_IDR Interrupt Disable Register **/
#define AES_AES_IDR			MMIO32(AES_BASE + 0x14)
/** AES_AES_IMR Interrupt Mask Register **/
#define AES_AES_IMR			MMIO32(AES_BASE + 0x18)
/** AES_AES_ISR Interrupt Status Register **/
#define AES_AES_ISR			MMIO32(AES_BASE + 0x1c)
/** AES_AES_KEYWR[0] Key Word Register 0 **/
#define AES_AES_KEYWR[0]			MMIO32(AES_BASE + 0x20)
/** AES_AES_KEYWR[1] Key Word Register 0 **/
#define AES_AES_KEYWR[1]			MMIO32(AES_BASE + 0x24)
/** AES_AES_KEYWR[2] Key Word Register 0 **/
#define AES_AES_KEYWR[2]			MMIO32(AES_BASE + 0x28)
/** AES_AES_KEYWR[3] Key Word Register 0 **/
#define AES_AES_KEYWR[3]			MMIO32(AES_BASE + 0x2c)
/** AES_AES_KEYWR[4] Key Word Register 0 **/
#define AES_AES_KEYWR[4]			MMIO32(AES_BASE + 0x30)
/** AES_AES_KEYWR[5] Key Word Register 0 **/
#define AES_AES_KEYWR[5]			MMIO32(AES_BASE + 0x34)
/** AES_AES_KEYWR[6] Key Word Register 0 **/
#define AES_AES_KEYWR[6]			MMIO32(AES_BASE + 0x38)
/** AES_AES_KEYWR[7] Key Word Register 0 **/
#define AES_AES_KEYWR[7]			MMIO32(AES_BASE + 0x3c)
/** AES_AES_IDATAR[0] Input Data Register 0 **/
#define AES_AES_IDATAR[0]			MMIO32(AES_BASE + 0x40)
/** AES_AES_IDATAR[1] Input Data Register 0 **/
#define AES_AES_IDATAR[1]			MMIO32(AES_BASE + 0x44)
/** AES_AES_IDATAR[2] Input Data Register 0 **/
#define AES_AES_IDATAR[2]			MMIO32(AES_BASE + 0x48)
/** AES_AES_IDATAR[3] Input Data Register 0 **/
#define AES_AES_IDATAR[3]			MMIO32(AES_BASE + 0x4c)
/** AES_AES_ODATAR[0] Output Data Register 0 **/
#define AES_AES_ODATAR[0]			MMIO32(AES_BASE + 0x50)
/** AES_AES_ODATAR[1] Output Data Register 0 **/
#define AES_AES_ODATAR[1]			MMIO32(AES_BASE + 0x54)
/** AES_AES_ODATAR[2] Output Data Register 0 **/
#define AES_AES_ODATAR[2]			MMIO32(AES_BASE + 0x58)
/** AES_AES_ODATAR[3] Output Data Register 0 **/
#define AES_AES_ODATAR[3]			MMIO32(AES_BASE + 0x5c)
/** AES_AES_IVR[0] Initialization Vector Register 0 **/
#define AES_AES_IVR[0]			MMIO32(AES_BASE + 0x60)
/** AES_AES_IVR[1] Initialization Vector Register 0 **/
#define AES_AES_IVR[1]			MMIO32(AES_BASE + 0x64)
/** AES_AES_IVR[2] Initialization Vector Register 0 **/
#define AES_AES_IVR[2]			MMIO32(AES_BASE + 0x68)
/** AES_AES_IVR[3] Initialization Vector Register 0 **/
#define AES_AES_IVR[3]			MMIO32(AES_BASE + 0x6c)
/** AES_AES_AADLENR Additional Authenticated Data Length Register **/
#define AES_AES_AADLENR			MMIO32(AES_BASE + 0x70)
/** AES_AES_CLENR Plaintext/Ciphertext Length Register **/
#define AES_AES_CLENR			MMIO32(AES_BASE + 0x74)
/** AES_AES_GHASHR[0] GCM Intermediate Hash Word Register 0 **/
#define AES_AES_GHASHR[0]			MMIO32(AES_BASE + 0x78)
/** AES_AES_GHASHR[1] GCM Intermediate Hash Word Register 0 **/
#define AES_AES_GHASHR[1]			MMIO32(AES_BASE + 0x7c)
/** AES_AES_GHASHR[2] GCM Intermediate Hash Word Register 0 **/
#define AES_AES_GHASHR[2]			MMIO32(AES_BASE + 0x80)
/** AES_AES_GHASHR[3] GCM Intermediate Hash Word Register 0 **/
#define AES_AES_GHASHR[3]			MMIO32(AES_BASE + 0x84)
/** AES_AES_TAGR[0] GCM Authentication Tag Word Register 0 **/
#define AES_AES_TAGR[0]			MMIO32(AES_BASE + 0x88)
/** AES_AES_TAGR[1] GCM Authentication Tag Word Register 0 **/
#define AES_AES_TAGR[1]			MMIO32(AES_BASE + 0x8c)
/** AES_AES_TAGR[2] GCM Authentication Tag Word Register 0 **/
#define AES_AES_TAGR[2]			MMIO32(AES_BASE + 0x90)
/** AES_AES_TAGR[3] GCM Authentication Tag Word Register 0 **/
#define AES_AES_TAGR[3]			MMIO32(AES_BASE + 0x94)
/** AES_AES_CTRR GCM Encryption Counter Value Register **/
#define AES_AES_CTRR			MMIO32(AES_BASE + 0x98)
/** AES_AES_GCMHR[0] GCM H Word Register 0 **/
#define AES_AES_GCMHR[0]			MMIO32(AES_BASE + 0x9c)
/** AES_AES_GCMHR[1] GCM H Word Register 0 **/
#define AES_AES_GCMHR[1]			MMIO32(AES_BASE + 0xa0)
/** AES_AES_GCMHR[2] GCM H Word Register 0 **/
#define AES_AES_GCMHR[2]			MMIO32(AES_BASE + 0xa4)
/** AES_AES_GCMHR[3] GCM H Word Register 0 **/
#define AES_AES_GCMHR[3]			MMIO32(AES_BASE + 0xa8)
/** AES_AES_VERSION Version Register **/
#define AES_AES_VERSION			MMIO32(AES_BASE + 0xfc)

/**@}*/


/** @defgroup aes_aes_cr AESCR Control Register
@{*/

/** AES_AES_CR_LOADSEED Random Number Generator Seed Loading **/
#define AES_AES_CR_LOADSEED		(1 << 16)
/** AES_AES_CR_SWRST Software Reset **/
#define AES_AES_CR_SWRST		(1 << 8)
/** AES_AES_CR_START Start Processing **/
#define AES_AES_CR_START		(1 << 0)

/**@}*/

/** @defgroup aes_aes_mr AESMR Mode Register
@{*/

/** AES_AES_MR_CMTYP6 Countermeasure Type 6 **/
#define AES_AES_MR_CMTYP6		(1 << 29)
/** AES_AES_MR_CMTYP5 Countermeasure Type 5 **/
#define AES_AES_MR_CMTYP5		(1 << 28)
/** AES_AES_MR_CMTYP4 Countermeasure Type 4 **/
#define AES_AES_MR_CMTYP4		(1 << 27)
/** AES_AES_MR_CMTYP3 Countermeasure Type 3 **/
#define AES_AES_MR_CMTYP3		(1 << 26)
/** AES_AES_MR_CMTYP2 Countermeasure Type 2 **/
#define AES_AES_MR_CMTYP2		(1 << 25)
/** AES_AES_MR_CMTYP1 Countermeasure Type 1 **/
#define AES_AES_MR_CMTYP1		(1 << 24)

#define AES_AES_MR_CKEY_SHIFT		20
#define AES_AES_MR_CKEY_MASK		0x0f
/** @defgroup aes_aes_mr_ckey CKEY Countermeasure Key
@{*/
/**@}*/


#define AES_AES_MR_CFBS_SHIFT		16
#define AES_AES_MR_CFBS_MASK		0x07
/** @defgroup aes_aes_mr_cfbs CFBS Cipher Feedback Data Size
@{*/
/**@}*/

/** AES_AES_MR_LOD Last Output Data Mode **/
#define AES_AES_MR_LOD		(1 << 15)

#define AES_AES_MR_OPMOD_SHIFT		12
#define AES_AES_MR_OPMOD_MASK		0x07
/** @defgroup aes_aes_mr_opmod OPMOD Operating Mode
@{*/
/**@}*/


#define AES_AES_MR_KEYSIZE_SHIFT		10
#define AES_AES_MR_KEYSIZE_MASK		0x03
/** @defgroup aes_aes_mr_keysize KEYSIZE Key Size
@{*/
/**@}*/


#define AES_AES_MR_SMOD_SHIFT		8
#define AES_AES_MR_SMOD_MASK		0x03
/** @defgroup aes_aes_mr_smod SMOD Start Mode
@{*/
/**@}*/


#define AES_AES_MR_PROCDLY_SHIFT		4
#define AES_AES_MR_PROCDLY_MASK		0x0f
/** @defgroup aes_aes_mr_procdly PROCDLY Processing Delay
@{*/
/**@}*/

/** AES_AES_MR_DUALBUFF Dual Input Buffer **/
#define AES_AES_MR_DUALBUFF		(1 << 3)
/** AES_AES_MR_GTAGEN GCM Automatic Tag Generation Enable **/
#define AES_AES_MR_GTAGEN		(1 << 1)
/** AES_AES_MR_CIPHER Processing Mode **/
#define AES_AES_MR_CIPHER		(1 << 0)

/**@}*/

/** @defgroup aes_aes_ier AESIER Interrupt Enable Register
@{*/

/** AES_AES_IER_TAGRDY GCM Tag Ready Interrupt Enable **/
#define AES_AES_IER_TAGRDY		(1 << 16)
/** AES_AES_IER_URAD Unspecified Register Access Detection Interrupt Enable **/
#define AES_AES_IER_URAD		(1 << 8)
/** AES_AES_IER_DATRDY Data Ready Interrupt Enable **/
#define AES_AES_IER_DATRDY		(1 << 0)

/**@}*/

/** @defgroup aes_aes_idr AESIDR Interrupt Disable Register
@{*/

/** AES_AES_IDR_TAGRDY GCM Tag Ready Interrupt Disable **/
#define AES_AES_IDR_TAGRDY		(1 << 16)
/** AES_AES_IDR_URAD Unspecified Register Access Detection Interrupt Disable **/
#define AES_AES_IDR_URAD		(1 << 8)
/** AES_AES_IDR_DATRDY Data Ready Interrupt Disable **/
#define AES_AES_IDR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup aes_aes_imr AESIMR Interrupt Mask Register
@{*/

/** AES_AES_IMR_TAGRDY GCM Tag Ready Interrupt Mask **/
#define AES_AES_IMR_TAGRDY		(1 << 16)
/** AES_AES_IMR_URAD Unspecified Register Access Detection Interrupt Mask **/
#define AES_AES_IMR_URAD		(1 << 8)
/** AES_AES_IMR_DATRDY Data Ready Interrupt Mask **/
#define AES_AES_IMR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup aes_aes_isr AESISR Interrupt Status Register
@{*/

/** AES_AES_ISR_TAGRDY GCM Tag Ready **/
#define AES_AES_ISR_TAGRDY		(1 << 16)

#define AES_AES_ISR_URAT_SHIFT		12
#define AES_AES_ISR_URAT_MASK		0x0f
/** @defgroup aes_aes_isr_urat URAT Unspecified Register Access (cleared by writing SWRST in AES_CR)
@{*/
/**@}*/

/** AES_AES_ISR_URAD Unspecified Register Access Detection Status (cleared by writing SWRST in AES_CR) **/
#define AES_AES_ISR_URAD		(1 << 8)
/** AES_AES_ISR_DATRDY Data Ready (cleared by setting bit START or bit SWRST in AES_CR or by reading AES_ODATARx) **/
#define AES_AES_ISR_DATRDY		(1 << 0)

/**@}*/

/** @defgroup aes_aes_keywr[0] AESKEYWR[0] Key Word Register 0
@{*/


#define AES_AES_KEYWR[0]_KEYW_SHIFT		0
#define AES_AES_KEYWR[0]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[0]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[1] AESKEYWR[1] Key Word Register 0
@{*/


#define AES_AES_KEYWR[1]_KEYW_SHIFT		0
#define AES_AES_KEYWR[1]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[1]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[2] AESKEYWR[2] Key Word Register 0
@{*/


#define AES_AES_KEYWR[2]_KEYW_SHIFT		0
#define AES_AES_KEYWR[2]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[2]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[3] AESKEYWR[3] Key Word Register 0
@{*/


#define AES_AES_KEYWR[3]_KEYW_SHIFT		0
#define AES_AES_KEYWR[3]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[3]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[4] AESKEYWR[4] Key Word Register 0
@{*/


#define AES_AES_KEYWR[4]_KEYW_SHIFT		0
#define AES_AES_KEYWR[4]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[4]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[5] AESKEYWR[5] Key Word Register 0
@{*/


#define AES_AES_KEYWR[5]_KEYW_SHIFT		0
#define AES_AES_KEYWR[5]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[5]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[6] AESKEYWR[6] Key Word Register 0
@{*/


#define AES_AES_KEYWR[6]_KEYW_SHIFT		0
#define AES_AES_KEYWR[6]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[6]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_keywr[7] AESKEYWR[7] Key Word Register 0
@{*/


#define AES_AES_KEYWR[7]_KEYW_SHIFT		0
#define AES_AES_KEYWR[7]_KEYW_MASK		0xffffffff
/** @defgroup aes_aes_keywr[7]_keyw KEYW Key Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_idatar[0] AESIDATAR[0] Input Data Register 0
@{*/


#define AES_AES_IDATAR[0]_IDATA_SHIFT		0
#define AES_AES_IDATAR[0]_IDATA_MASK		0xffffffff
/** @defgroup aes_aes_idatar[0]_idata IDATA Input Data Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_idatar[1] AESIDATAR[1] Input Data Register 0
@{*/


#define AES_AES_IDATAR[1]_IDATA_SHIFT		0
#define AES_AES_IDATAR[1]_IDATA_MASK		0xffffffff
/** @defgroup aes_aes_idatar[1]_idata IDATA Input Data Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_idatar[2] AESIDATAR[2] Input Data Register 0
@{*/


#define AES_AES_IDATAR[2]_IDATA_SHIFT		0
#define AES_AES_IDATAR[2]_IDATA_MASK		0xffffffff
/** @defgroup aes_aes_idatar[2]_idata IDATA Input Data Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_idatar[3] AESIDATAR[3] Input Data Register 0
@{*/


#define AES_AES_IDATAR[3]_IDATA_SHIFT		0
#define AES_AES_IDATAR[3]_IDATA_MASK		0xffffffff
/** @defgroup aes_aes_idatar[3]_idata IDATA Input Data Word
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_odatar[0] AESODATAR[0] Output Data Register 0
@{*/


#define AES_AES_ODATAR[0]_ODATA_SHIFT		0
#define AES_AES_ODATAR[0]_ODATA_MASK		0xffffffff
/** @defgroup aes_aes_odatar[0]_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_odatar[1] AESODATAR[1] Output Data Register 0
@{*/


#define AES_AES_ODATAR[1]_ODATA_SHIFT		0
#define AES_AES_ODATAR[1]_ODATA_MASK		0xffffffff
/** @defgroup aes_aes_odatar[1]_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_odatar[2] AESODATAR[2] Output Data Register 0
@{*/


#define AES_AES_ODATAR[2]_ODATA_SHIFT		0
#define AES_AES_ODATAR[2]_ODATA_MASK		0xffffffff
/** @defgroup aes_aes_odatar[2]_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_odatar[3] AESODATAR[3] Output Data Register 0
@{*/


#define AES_AES_ODATAR[3]_ODATA_SHIFT		0
#define AES_AES_ODATAR[3]_ODATA_MASK		0xffffffff
/** @defgroup aes_aes_odatar[3]_odata ODATA Output Data
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ivr[0] AESIVR[0] Initialization Vector Register 0
@{*/


#define AES_AES_IVR[0]_IV_SHIFT		0
#define AES_AES_IVR[0]_IV_MASK		0xffffffff
/** @defgroup aes_aes_ivr[0]_iv IV Initialization Vector
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ivr[1] AESIVR[1] Initialization Vector Register 0
@{*/


#define AES_AES_IVR[1]_IV_SHIFT		0
#define AES_AES_IVR[1]_IV_MASK		0xffffffff
/** @defgroup aes_aes_ivr[1]_iv IV Initialization Vector
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ivr[2] AESIVR[2] Initialization Vector Register 0
@{*/


#define AES_AES_IVR[2]_IV_SHIFT		0
#define AES_AES_IVR[2]_IV_MASK		0xffffffff
/** @defgroup aes_aes_ivr[2]_iv IV Initialization Vector
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ivr[3] AESIVR[3] Initialization Vector Register 0
@{*/


#define AES_AES_IVR[3]_IV_SHIFT		0
#define AES_AES_IVR[3]_IV_MASK		0xffffffff
/** @defgroup aes_aes_ivr[3]_iv IV Initialization Vector
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_aadlenr AESAADLENR Additional Authenticated Data Length Register
@{*/


#define AES_AES_AADLENR_AADLEN_SHIFT		0
#define AES_AES_AADLENR_AADLEN_MASK		0xffffffff
/** @defgroup aes_aes_aadlenr_aadlen AADLEN Additional Authenticated Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_clenr AESCLENR Plaintext/Ciphertext Length Register
@{*/


#define AES_AES_CLENR_CLEN_SHIFT		0
#define AES_AES_CLENR_CLEN_MASK		0xffffffff
/** @defgroup aes_aes_clenr_clen CLEN Plaintext/Ciphertext Length
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ghashr[0] AESGHASHR[0] GCM Intermediate Hash Word Register 0
@{*/


#define AES_AES_GHASHR[0]_GHASH_SHIFT		0
#define AES_AES_GHASHR[0]_GHASH_MASK		0xffffffff
/** @defgroup aes_aes_ghashr[0]_ghash GHASH Intermediate GCM Hash Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ghashr[1] AESGHASHR[1] GCM Intermediate Hash Word Register 0
@{*/


#define AES_AES_GHASHR[1]_GHASH_SHIFT		0
#define AES_AES_GHASHR[1]_GHASH_MASK		0xffffffff
/** @defgroup aes_aes_ghashr[1]_ghash GHASH Intermediate GCM Hash Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ghashr[2] AESGHASHR[2] GCM Intermediate Hash Word Register 0
@{*/


#define AES_AES_GHASHR[2]_GHASH_SHIFT		0
#define AES_AES_GHASHR[2]_GHASH_MASK		0xffffffff
/** @defgroup aes_aes_ghashr[2]_ghash GHASH Intermediate GCM Hash Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ghashr[3] AESGHASHR[3] GCM Intermediate Hash Word Register 0
@{*/


#define AES_AES_GHASHR[3]_GHASH_SHIFT		0
#define AES_AES_GHASHR[3]_GHASH_MASK		0xffffffff
/** @defgroup aes_aes_ghashr[3]_ghash GHASH Intermediate GCM Hash Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_tagr[0] AESTAGR[0] GCM Authentication Tag Word Register 0
@{*/


#define AES_AES_TAGR[0]_TAG_SHIFT		0
#define AES_AES_TAGR[0]_TAG_MASK		0xffffffff
/** @defgroup aes_aes_tagr[0]_tag TAG GCM Authentication Tag x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_tagr[1] AESTAGR[1] GCM Authentication Tag Word Register 0
@{*/


#define AES_AES_TAGR[1]_TAG_SHIFT		0
#define AES_AES_TAGR[1]_TAG_MASK		0xffffffff
/** @defgroup aes_aes_tagr[1]_tag TAG GCM Authentication Tag x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_tagr[2] AESTAGR[2] GCM Authentication Tag Word Register 0
@{*/


#define AES_AES_TAGR[2]_TAG_SHIFT		0
#define AES_AES_TAGR[2]_TAG_MASK		0xffffffff
/** @defgroup aes_aes_tagr[2]_tag TAG GCM Authentication Tag x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_tagr[3] AESTAGR[3] GCM Authentication Tag Word Register 0
@{*/


#define AES_AES_TAGR[3]_TAG_SHIFT		0
#define AES_AES_TAGR[3]_TAG_MASK		0xffffffff
/** @defgroup aes_aes_tagr[3]_tag TAG GCM Authentication Tag x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_ctrr AESCTRR GCM Encryption Counter Value Register
@{*/


#define AES_AES_CTRR_CTR_SHIFT		0
#define AES_AES_CTRR_CTR_MASK		0xffffffff
/** @defgroup aes_aes_ctrr_ctr CTR GCM Encryption Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_gcmhr[0] AESGCMHR[0] GCM H Word Register 0
@{*/


#define AES_AES_GCMHR[0]_H_SHIFT		0
#define AES_AES_GCMHR[0]_H_MASK		0xffffffff
/** @defgroup aes_aes_gcmhr[0]_h H GCM H Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_gcmhr[1] AESGCMHR[1] GCM H Word Register 0
@{*/


#define AES_AES_GCMHR[1]_H_SHIFT		0
#define AES_AES_GCMHR[1]_H_MASK		0xffffffff
/** @defgroup aes_aes_gcmhr[1]_h H GCM H Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_gcmhr[2] AESGCMHR[2] GCM H Word Register 0
@{*/


#define AES_AES_GCMHR[2]_H_SHIFT		0
#define AES_AES_GCMHR[2]_H_MASK		0xffffffff
/** @defgroup aes_aes_gcmhr[2]_h H GCM H Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_gcmhr[3] AESGCMHR[3] GCM H Word Register 0
@{*/


#define AES_AES_GCMHR[3]_H_SHIFT		0
#define AES_AES_GCMHR[3]_H_MASK		0xffffffff
/** @defgroup aes_aes_gcmhr[3]_h H GCM H Word x
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_aes_version AESVERSION Version Register
@{*/


#define AES_AES_VERSION_MFN_SHIFT		16
#define AES_AES_VERSION_MFN_MASK		0x07
/** @defgroup aes_aes_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define AES_AES_VERSION_VERSION_SHIFT		0
#define AES_AES_VERSION_VERSION_MASK		0xfff
/** @defgroup aes_aes_version_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- AES: Advanced Encryption Standard ---------------------------- */

/** @defgroup aes_registers Advanced Encryption Standard Register
@{*/

/** AES_CTRLA Control A **/
#define AES_CTRLA			MMIO32(AES_BASE + 0x00)
/** AES_CTRLB Control B **/
#define AES_CTRLB			MMIO32(AES_BASE + 0x04)
/** AES_INTENCLR Interrupt Enable Clear **/
#define AES_INTENCLR			MMIO32(AES_BASE + 0x05)
/** AES_INTENSET Interrupt Enable Set **/
#define AES_INTENSET			MMIO32(AES_BASE + 0x06)
/** AES_INTFLAG Interrupt Flag Status **/
#define AES_INTFLAG			MMIO32(AES_BASE + 0x07)
/** AES_DATABUFPTR Data buffer pointer **/
#define AES_DATABUFPTR			MMIO32(AES_BASE + 0x08)
/** AES_DBGCTRL Debug control **/
#define AES_DBGCTRL			MMIO32(AES_BASE + 0x09)
/** AES_KEYWORD0 Keyword n **/
#define AES_KEYWORD0			MMIO32(AES_BASE + 0x0c)
/** AES_KEYWORD1 Keyword n **/
#define AES_KEYWORD1			MMIO32(AES_BASE + 0x10)
/** AES_KEYWORD2 Keyword n **/
#define AES_KEYWORD2			MMIO32(AES_BASE + 0x14)
/** AES_KEYWORD3 Keyword n **/
#define AES_KEYWORD3			MMIO32(AES_BASE + 0x18)
/** AES_KEYWORD4 Keyword n **/
#define AES_KEYWORD4			MMIO32(AES_BASE + 0x1c)
/** AES_KEYWORD5 Keyword n **/
#define AES_KEYWORD5			MMIO32(AES_BASE + 0x20)
/** AES_KEYWORD6 Keyword n **/
#define AES_KEYWORD6			MMIO32(AES_BASE + 0x24)
/** AES_KEYWORD7 Keyword n **/
#define AES_KEYWORD7			MMIO32(AES_BASE + 0x28)
/** AES_INDATA Indata **/
#define AES_INDATA			MMIO32(AES_BASE + 0x38)
/** AES_INTVECTV0 Initialisation Vector n **/
#define AES_INTVECTV0			MMIO32(AES_BASE + 0x3c)
/** AES_INTVECTV1 Initialisation Vector n **/
#define AES_INTVECTV1			MMIO32(AES_BASE + 0x40)
/** AES_INTVECTV2 Initialisation Vector n **/
#define AES_INTVECTV2			MMIO32(AES_BASE + 0x44)
/** AES_INTVECTV3 Initialisation Vector n **/
#define AES_INTVECTV3			MMIO32(AES_BASE + 0x48)
/** AES_HASHKEY0 Hash key n **/
#define AES_HASHKEY0			MMIO32(AES_BASE + 0x5c)
/** AES_HASHKEY1 Hash key n **/
#define AES_HASHKEY1			MMIO32(AES_BASE + 0x60)
/** AES_HASHKEY2 Hash key n **/
#define AES_HASHKEY2			MMIO32(AES_BASE + 0x64)
/** AES_HASHKEY3 Hash key n **/
#define AES_HASHKEY3			MMIO32(AES_BASE + 0x68)
/** AES_GHASH0 Galois Hash n **/
#define AES_GHASH0			MMIO32(AES_BASE + 0x6c)
/** AES_GHASH1 Galois Hash n **/
#define AES_GHASH1			MMIO32(AES_BASE + 0x70)
/** AES_GHASH2 Galois Hash n **/
#define AES_GHASH2			MMIO32(AES_BASE + 0x74)
/** AES_GHASH3 Galois Hash n **/
#define AES_GHASH3			MMIO32(AES_BASE + 0x78)
/** AES_CIPLEN Cipher Length **/
#define AES_CIPLEN			MMIO32(AES_BASE + 0x80)
/** AES_RANDSEED Random Seed **/
#define AES_RANDSEED			MMIO32(AES_BASE + 0x84)

/**@}*/


/** @defgroup aes_ctrla CTRLA Control A
@{*/


#define AES_CTRLA_CTYPE_SHIFT		16
#define AES_CTRLA_CTYPE_MASK		0x0f
/** @defgroup aes_ctrla_ctype CTYPE Counter measure types
@{*/
/**@}*/

/** AES_CTRLA_XORKEY Xor Key operation **/
#define AES_CTRLA_XORKEY		(1 << 14)
/** AES_CTRLA_KEYGEN Last key generation **/
#define AES_CTRLA_KEYGEN		(1 << 13)
/** AES_CTRLA_LOD LOD Enable **/
#define AES_CTRLA_LOD		(1 << 12)
/** AES_CTRLA_STARTMODE Start mode **/
#define AES_CTRLA_STARTMODE		(1 << 11)
/** AES_CTRLA_CIPHER Cipher mode **/
#define AES_CTRLA_CIPHER		(1 << 10)

#define AES_CTRLA_KEYSIZE_SHIFT		8
#define AES_CTRLA_KEYSIZE_MASK		0x03
/** @defgroup aes_ctrla_keysize KEYSIZE Keysize
@{*/
/**@}*/


#define AES_CTRLA_CFBS_SHIFT		5
#define AES_CTRLA_CFBS_MASK		0x07
/** @defgroup aes_ctrla_cfbs CFBS CFB Types
@{*/
/**@}*/


#define AES_CTRLA_AESMODE_SHIFT		2
#define AES_CTRLA_AESMODE_MASK		0x07
/** @defgroup aes_ctrla_aesmode AESMODE AES Modes of operation
@{*/
/**@}*/

/** AES_CTRLA_ENABLE Enable **/
#define AES_CTRLA_ENABLE		(1 << 1)
/** AES_CTRLA_SWRST Software Reset **/
#define AES_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup aes_ctrlb CTRLB Control B
@{*/

/** AES_CTRLB_GFMUL GF Multiplication **/
#define AES_CTRLB_GFMUL		(1 << 3)
/** AES_CTRLB_EOM End of message **/
#define AES_CTRLB_EOM		(1 << 2)
/** AES_CTRLB_NEWMSG New message **/
#define AES_CTRLB_NEWMSG		(1 << 1)
/** AES_CTRLB_START Manual Start **/
#define AES_CTRLB_START		(1 << 0)

/**@}*/

/** @defgroup aes_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** AES_INTENCLR_GFMCMP GF Multiplication Complete **/
#define AES_INTENCLR_GFMCMP		(1 << 1)
/** AES_INTENCLR_ENCCMP Encryption Complete **/
#define AES_INTENCLR_ENCCMP		(1 << 0)

/**@}*/

/** @defgroup aes_intenset INTENSET Interrupt Enable Set
@{*/

/** AES_INTENSET_GFMCMP GF Multiplication Complete **/
#define AES_INTENSET_GFMCMP		(1 << 1)
/** AES_INTENSET_ENCCMP Encryption Complete **/
#define AES_INTENSET_ENCCMP		(1 << 0)

/**@}*/

/** @defgroup aes_intflag INTFLAG Interrupt Flag Status
@{*/

/** AES_INTFLAG_GFMCMP GF Multiplication Complete **/
#define AES_INTFLAG_GFMCMP		(1 << 1)
/** AES_INTFLAG_ENCCMP Encryption Complete **/
#define AES_INTFLAG_ENCCMP		(1 << 0)

/**@}*/

/** @defgroup aes_databufptr DATABUFPTR Data buffer pointer
@{*/


#define AES_DATABUFPTR_INDATAPTR_SHIFT		0
#define AES_DATABUFPTR_INDATAPTR_MASK		0x03
/** @defgroup aes_databufptr_indataptr INDATAPTR Input Data Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup aes_dbgctrl DBGCTRL Debug control
@{*/

/** AES_DBGCTRL_DBGRUN Debug Run **/
#define AES_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup aes_keyword0 KEYWORD0 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword1 KEYWORD1 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword2 KEYWORD2 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword3 KEYWORD3 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword4 KEYWORD4 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword5 KEYWORD5 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword6 KEYWORD6 Keyword n
@{*/


/**@}*/

/** @defgroup aes_keyword7 KEYWORD7 Keyword n
@{*/


/**@}*/

/** @defgroup aes_indata INDATA Indata
@{*/


/**@}*/

/** @defgroup aes_intvectv0 INTVECTV0 Initialisation Vector n
@{*/


/**@}*/

/** @defgroup aes_intvectv1 INTVECTV1 Initialisation Vector n
@{*/


/**@}*/

/** @defgroup aes_intvectv2 INTVECTV2 Initialisation Vector n
@{*/


/**@}*/

/** @defgroup aes_intvectv3 INTVECTV3 Initialisation Vector n
@{*/


/**@}*/

/** @defgroup aes_hashkey0 HASHKEY0 Hash key n
@{*/


/**@}*/

/** @defgroup aes_hashkey1 HASHKEY1 Hash key n
@{*/


/**@}*/

/** @defgroup aes_hashkey2 HASHKEY2 Hash key n
@{*/


/**@}*/

/** @defgroup aes_hashkey3 HASHKEY3 Hash key n
@{*/


/**@}*/

/** @defgroup aes_ghash0 GHASH0 Galois Hash n
@{*/


/**@}*/

/** @defgroup aes_ghash1 GHASH1 Galois Hash n
@{*/


/**@}*/

/** @defgroup aes_ghash2 GHASH2 Galois Hash n
@{*/


/**@}*/

/** @defgroup aes_ghash3 GHASH3 Galois Hash n
@{*/


/**@}*/

/** @defgroup aes_ciplen CIPLEN Cipher Length
@{*/


/**@}*/

/** @defgroup aes_randseed RANDSEED Random Seed
@{*/


/**@}*/

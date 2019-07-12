#pragma once 

/* --- FLASH: FLASH ------------------------------------------------- */

/** @defgroup flash_registers FLASH Register
@{*/

/** FLASH_FLASH_CLKER FLASH controller clock enable register **/
#define FLASH_FLASH_CLKER			MMIO32(FLASH_BASE + 0x00)
/** FLASH_FLASH_CLKSR FLASH controller clock status register **/
#define FLASH_FLASH_CLKSR			MMIO32(FLASH_BASE + 0x04)
/** FLASH_FLASH_ACR FLASH access control register **/
#define FLASH_FLASH_ACR			MMIO32(FLASH_BASE + 0x3fd4)
/** FLASH_FLASH_KEYR FLASH key register **/
#define FLASH_FLASH_KEYR			MMIO32(FLASH_BASE + 0x3fd8)
/** FLASH_FLASH_OPTKEYR FLASH OPT key register **/
#define FLASH_FLASH_OPTKEYR			MMIO32(FLASH_BASE + 0x3fdc)
/** FLASH_FLASH_SR FLASH status register **/
#define FLASH_FLASH_SR			MMIO32(FLASH_BASE + 0x3fe0)
/** FLASH_FLASH_CR FLASH control register **/
#define FLASH_FLASH_CR			MMIO32(FLASH_BASE + 0x3fe4)
/** FLASH_FLASH_AR FLASH address register **/
#define FLASH_FLASH_AR			MMIO32(FLASH_BASE + 0x3fe8)
/** FLASH_FLASH_OBR FLASH option bytes register **/
#define FLASH_FLASH_OBR			MMIO32(FLASH_BASE + 0x3ff0)
/** FLASH_FLASH_WRPR FLASH write protection register **/
#define FLASH_FLASH_WRPR			MMIO32(FLASH_BASE + 0x3ff4)

/**@}*/


/** @defgroup flash_flash_clker FLASHCLKER FLASH controller clock enable register
@{*/

/** FLASH_FLASH_CLKER_EN EN **/
#define FLASH_FLASH_CLKER_EN		(1 << 0)

/**@}*/

/** @defgroup flash_flash_clksr FLASHCLKSR FLASH controller clock status register
@{*/

/** FLASH_FLASH_CLKSR_BSY BSY **/
#define FLASH_FLASH_CLKSR_BSY		(1 << 1)
/** FLASH_FLASH_CLKSR_ACK ACK **/
#define FLASH_FLASH_CLKSR_ACK		(1 << 0)

/**@}*/

/** @defgroup flash_flash_acr FLASHACR FLASH access control register
@{*/

/** FLASH_FLASH_ACR_PRFTBS Prefetch Status **/
#define FLASH_FLASH_ACR_PRFTBS		(1 << 5)
/** FLASH_FLASH_ACR_PRFTBE PRFTBE **/
#define FLASH_FLASH_ACR_PRFTBE		(1 << 4)
/** FLASH_FLASH_ACR_HLFCYA HLFCYA **/
#define FLASH_FLASH_ACR_HLFCYA		(1 << 3)

#define FLASH_FLASH_ACR_LATENCY_SHIFT		0
#define FLASH_FLASH_ACR_LATENCY_MASK		0x07
/** @defgroup flash_flash_acr_latency LATENCY LATENCY
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_flash_keyr FLASHKEYR FLASH key register
@{*/


#define FLASH_FLASH_KEYR_FKEYR_SHIFT		0
#define FLASH_FLASH_KEYR_FKEYR_MASK		0xffffffff
/** @defgroup flash_flash_keyr_fkeyr FKEYR FKEYR
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_flash_optkeyr FLASHOPTKEYR FLASH OPT key register
@{*/


#define FLASH_FLASH_OPTKEYR_OPTKEYR_SHIFT		0
#define FLASH_FLASH_OPTKEYR_OPTKEYR_MASK		0xffffffff
/** @defgroup flash_flash_optkeyr_optkeyr OPTKEYR OPTKEYR
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_flash_sr FLASHSR FLASH status register
@{*/

/** FLASH_FLASH_SR_EOP EOP **/
#define FLASH_FLASH_SR_EOP		(1 << 5)
/** FLASH_FLASH_SR_WRPRTERR WRPRTERR **/
#define FLASH_FLASH_SR_WRPRTERR		(1 << 4)
/** FLASH_FLASH_SR_PGERR PGERR **/
#define FLASH_FLASH_SR_PGERR		(1 << 2)
/** FLASH_FLASH_SR_BSY BSY **/
#define FLASH_FLASH_SR_BSY		(1 << 0)

/**@}*/

/** @defgroup flash_flash_cr FLASHCR FLASH control register
@{*/

/** FLASH_FLASH_CR_EOPIE EOPIE **/
#define FLASH_FLASH_CR_EOPIE		(1 << 12)
/** FLASH_FLASH_CR_ERRIE ERRIE **/
#define FLASH_FLASH_CR_ERRIE		(1 << 10)
/** FLASH_FLASH_CR_OPTWRE OPTWRE **/
#define FLASH_FLASH_CR_OPTWRE		(1 << 9)
/** FLASH_FLASH_CR_LOCK LOCK **/
#define FLASH_FLASH_CR_LOCK		(1 << 7)
/** FLASH_FLASH_CR_STRT STRT **/
#define FLASH_FLASH_CR_STRT		(1 << 6)
/** FLASH_FLASH_CR_OPTER OPTER **/
#define FLASH_FLASH_CR_OPTER		(1 << 5)
/** FLASH_FLASH_CR_OPTPG OPTPG **/
#define FLASH_FLASH_CR_OPTPG		(1 << 4)
/** FLASH_FLASH_CR_MER MER **/
#define FLASH_FLASH_CR_MER		(1 << 2)
/** FLASH_FLASH_CR_PER PER **/
#define FLASH_FLASH_CR_PER		(1 << 1)
/** FLASH_FLASH_CR_PG PG **/
#define FLASH_FLASH_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_flash_ar FLASHAR FLASH address register
@{*/


#define FLASH_FLASH_AR_FAR_SHIFT		0
#define FLASH_FLASH_AR_FAR_MASK		0xffffffff
/** @defgroup flash_flash_ar_far FAR FAR
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_flash_obr FLASHOBR FLASH option bytes register
@{*/

/** FLASH_FLASH_OBR_RDPRT RDPRT **/
#define FLASH_FLASH_OBR_RDPRT		(1 << 1)
/** FLASH_FLASH_OBR_OPTERR OPTERR **/
#define FLASH_FLASH_OBR_OPTERR		(1 << 0)

/**@}*/

/** @defgroup flash_flash_wrpr FLASHWRPR FLASH write protection register
@{*/


#define FLASH_FLASH_WRPR_WRP_SHIFT		0
#define FLASH_FLASH_WRPR_WRP_MASK		0xffffffff
/** @defgroup flash_flash_wrpr_wrp WRP WRP
@{*/
/**@}*/


/**@}*/

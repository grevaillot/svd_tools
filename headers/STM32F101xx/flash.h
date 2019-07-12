#pragma once 

/* --- FLASH: FLASH ------------------------------------------------- */

/** @defgroup flash_registers FLASH Register
@{*/

/** FLASH_ACR Flash access control register **/
#define FLASH_ACR			MMIO32(FLASH_BASE + 0x00)
/** FLASH_KEYR Flash key register **/
#define FLASH_KEYR			MMIO32(FLASH_BASE + 0x04)
/** FLASH_OPTKEYR Flash option key register **/
#define FLASH_OPTKEYR			MMIO32(FLASH_BASE + 0x08)
/** FLASH_SR Status register **/
#define FLASH_SR			MMIO32(FLASH_BASE + 0x0c)
/** FLASH_CR Control register **/
#define FLASH_CR			MMIO32(FLASH_BASE + 0x10)
/** FLASH_AR Flash address register **/
#define FLASH_AR			MMIO32(FLASH_BASE + 0x14)
/** FLASH_OBR Option byte register **/
#define FLASH_OBR			MMIO32(FLASH_BASE + 0x1c)
/** FLASH_WRPR Write protection register **/
#define FLASH_WRPR			MMIO32(FLASH_BASE + 0x20)

/**@}*/


/** @defgroup flash_acr ACR Flash access control register
@{*/

/** FLASH_ACR_PRFTBS Prefetch buffer status **/
#define FLASH_ACR_PRFTBS		(1 << 5)
/** FLASH_ACR_PRFTBE Prefetch buffer enable **/
#define FLASH_ACR_PRFTBE		(1 << 4)
/** FLASH_ACR_HLFCYA Flash half cycle access enable **/
#define FLASH_ACR_HLFCYA		(1 << 3)

#define FLASH_ACR_LATENCY_SHIFT		0
#define FLASH_ACR_LATENCY_MASK		0x07
/** @defgroup flash_acr_latency LATENCY Latency
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr KEYR Flash key register
@{*/


#define FLASH_KEYR_KEY_SHIFT		0
#define FLASH_KEYR_KEY_MASK		0xffffffff
/** @defgroup flash_keyr_key KEY FPEC key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR Flash option key register
@{*/


#define FLASH_OPTKEYR_OPTKEY_SHIFT		0
#define FLASH_OPTKEYR_OPTKEY_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkey OPTKEY Option byte key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_sr SR Status register
@{*/

/** FLASH_SR_EOP End of operation **/
#define FLASH_SR_EOP		(1 << 5)
/** FLASH_SR_WRPRTERR Write protection error **/
#define FLASH_SR_WRPRTERR		(1 << 4)
/** FLASH_SR_PGERR Programming error **/
#define FLASH_SR_PGERR		(1 << 2)
/** FLASH_SR_BSY Busy **/
#define FLASH_SR_BSY		(1 << 0)

/**@}*/

/** @defgroup flash_cr CR Control register
@{*/

/** FLASH_CR_EOPIE End of operation interrupt enable **/
#define FLASH_CR_EOPIE		(1 << 12)
/** FLASH_CR_ERRIE Error interrupt enable **/
#define FLASH_CR_ERRIE		(1 << 10)
/** FLASH_CR_OPTWRE Option bytes write enable **/
#define FLASH_CR_OPTWRE		(1 << 9)
/** FLASH_CR_LOCK Lock **/
#define FLASH_CR_LOCK		(1 << 7)
/** FLASH_CR_STRT Start **/
#define FLASH_CR_STRT		(1 << 6)
/** FLASH_CR_OPTER Option byte erase **/
#define FLASH_CR_OPTER		(1 << 5)
/** FLASH_CR_OPTPG Option byte programming **/
#define FLASH_CR_OPTPG		(1 << 4)
/** FLASH_CR_MER Mass Erase **/
#define FLASH_CR_MER		(1 << 2)
/** FLASH_CR_PER Page Erase **/
#define FLASH_CR_PER		(1 << 1)
/** FLASH_CR_PG Programming **/
#define FLASH_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_ar AR Flash address register
@{*/


#define FLASH_AR_FAR_SHIFT		0
#define FLASH_AR_FAR_MASK		0xffffffff
/** @defgroup flash_ar_far FAR Flash Address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_obr OBR Option byte register
@{*/


#define FLASH_OBR_Data1_SHIFT		18
#define FLASH_OBR_Data1_MASK		0xff
/** @defgroup flash_obr_data1 Data1 Data1
@{*/
/**@}*/


#define FLASH_OBR_Data0_SHIFT		10
#define FLASH_OBR_Data0_MASK		0xff
/** @defgroup flash_obr_data0 Data0 Data0
@{*/
/**@}*/

/** FLASH_OBR_nRST_STDBY nRST_STDBY **/
#define FLASH_OBR_nRST_STDBY		(1 << 4)
/** FLASH_OBR_nRST_STOP nRST_STOP **/
#define FLASH_OBR_nRST_STOP		(1 << 3)
/** FLASH_OBR_WDG_SW WDG_SW **/
#define FLASH_OBR_WDG_SW		(1 << 2)
/** FLASH_OBR_RDPRT Read protection **/
#define FLASH_OBR_RDPRT		(1 << 1)
/** FLASH_OBR_OPTERR Option byte error **/
#define FLASH_OBR_OPTERR		(1 << 0)

/**@}*/

/** @defgroup flash_wrpr WRPR Write protection register
@{*/


#define FLASH_WRPR_WRP_SHIFT		0
#define FLASH_WRPR_WRP_MASK		0xffffffff
/** @defgroup flash_wrpr_wrp WRP Write protect
@{*/
/**@}*/


/**@}*/

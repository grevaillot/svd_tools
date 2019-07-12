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
/** FLASH_OPTCR Flash option control register **/
#define FLASH_OPTCR			MMIO32(FLASH_BASE + 0x14)

/**@}*/


/** @defgroup flash_acr ACR Flash access control register
@{*/

/** FLASH_ACR_DCRST Data cache reset **/
#define FLASH_ACR_DCRST		(1 << 12)
/** FLASH_ACR_ICRST Instruction cache reset **/
#define FLASH_ACR_ICRST		(1 << 11)
/** FLASH_ACR_DCEN Data cache enable **/
#define FLASH_ACR_DCEN		(1 << 10)
/** FLASH_ACR_ICEN Instruction cache enable **/
#define FLASH_ACR_ICEN		(1 << 9)
/** FLASH_ACR_PRFTEN Prefetch enable **/
#define FLASH_ACR_PRFTEN		(1 << 8)

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

/** FLASH_SR_BSY Busy **/
#define FLASH_SR_BSY		(1 << 16)
/** FLASH_SR_PGSERR Programming sequence error **/
#define FLASH_SR_PGSERR		(1 << 7)
/** FLASH_SR_PGPERR Programming parallelism error **/
#define FLASH_SR_PGPERR		(1 << 6)
/** FLASH_SR_PGAERR Programming alignment error **/
#define FLASH_SR_PGAERR		(1 << 5)
/** FLASH_SR_WRPERR Write protection error **/
#define FLASH_SR_WRPERR		(1 << 4)
/** FLASH_SR_OPERR Operation error **/
#define FLASH_SR_OPERR		(1 << 1)
/** FLASH_SR_EOP End of operation **/
#define FLASH_SR_EOP		(1 << 0)

/**@}*/

/** @defgroup flash_cr CR Control register
@{*/

/** FLASH_CR_LOCK Lock **/
#define FLASH_CR_LOCK		(1 << 31)
/** FLASH_CR_ERRIE Error interrupt enable **/
#define FLASH_CR_ERRIE		(1 << 25)
/** FLASH_CR_EOPIE End of operation interrupt enable **/
#define FLASH_CR_EOPIE		(1 << 24)
/** FLASH_CR_STRT Start **/
#define FLASH_CR_STRT		(1 << 16)

#define FLASH_CR_PSIZE_SHIFT		8
#define FLASH_CR_PSIZE_MASK		0x03
/** @defgroup flash_cr_psize PSIZE Program size
@{*/
/**@}*/


#define FLASH_CR_SNB_SHIFT		3
#define FLASH_CR_SNB_MASK		0x0f
/** @defgroup flash_cr_snb SNB Sector number
@{*/
/**@}*/

/** FLASH_CR_MER Mass Erase **/
#define FLASH_CR_MER		(1 << 2)
/** FLASH_CR_SER Sector Erase **/
#define FLASH_CR_SER		(1 << 1)
/** FLASH_CR_PG Programming **/
#define FLASH_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_optcr OPTCR Flash option control register
@{*/


#define FLASH_OPTCR_nWRP_SHIFT		16
#define FLASH_OPTCR_nWRP_MASK		0xfff
/** @defgroup flash_optcr_nwrp nWRP Not write protect
@{*/
/**@}*/


#define FLASH_OPTCR_RDP_SHIFT		8
#define FLASH_OPTCR_RDP_MASK		0xff
/** @defgroup flash_optcr_rdp RDP Read protect
@{*/
/**@}*/

/** FLASH_OPTCR_nRST_STDBY nRST_STDBY User option bytes **/
#define FLASH_OPTCR_nRST_STDBY		(1 << 7)
/** FLASH_OPTCR_nRST_STOP nRST_STOP User option bytes **/
#define FLASH_OPTCR_nRST_STOP		(1 << 6)
/** FLASH_OPTCR_WDG_SW WDG_SW User option bytes **/
#define FLASH_OPTCR_WDG_SW		(1 << 5)

#define FLASH_OPTCR_BOR_LEV_SHIFT		2
#define FLASH_OPTCR_BOR_LEV_MASK		0x03
/** @defgroup flash_optcr_bor_lev BORLEV BOR reset Level
@{*/
/**@}*/

/** FLASH_OPTCR_OPTSTRT Option start **/
#define FLASH_OPTCR_OPTSTRT		(1 << 1)
/** FLASH_OPTCR_OPTLOCK Option lock **/
#define FLASH_OPTCR_OPTLOCK		(1 << 0)

/**@}*/

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
/** FLASH_OPTCR1 Flash option control register 1 **/
#define FLASH_OPTCR1			MMIO32(FLASH_BASE + 0x18)
/** FLASH_OPTCR2 Flash option control register **/
#define FLASH_OPTCR2			MMIO32(FLASH_BASE + 0x1c)

/**@}*/


/** @defgroup flash_acr ACR Flash access control register
@{*/

/** FLASH_ACR_ARTRST ART Accelerator reset **/
#define FLASH_ACR_ARTRST		(1 << 11)
/** FLASH_ACR_ARTEN ART Accelerator Enable **/
#define FLASH_ACR_ARTEN		(1 << 9)
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


#define FLASH_OPTKEYR_OPTKEYR_SHIFT		0
#define FLASH_OPTKEYR_OPTKEYR_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkeyr OPTKEYR Option byte key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_sr SR Status register
@{*/

/** FLASH_SR_BSY Busy **/
#define FLASH_SR_BSY		(1 << 16)
/** FLASH_SR_ERSERR Erase Sequence Error **/
#define FLASH_SR_ERSERR		(1 << 7)
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
/** FLASH_CR_RDERRIE PCROP error interrupt enable **/
#define FLASH_CR_RDERRIE		(1 << 26)
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
#define FLASH_CR_SNB_MASK		0x1f
/** @defgroup flash_cr_snb SNB Sector number
@{*/
/**@}*/

/** FLASH_CR_MER Mass Erase of sectors 0 to 11 **/
#define FLASH_CR_MER		(1 << 2)
/** FLASH_CR_SER Sector Erase **/
#define FLASH_CR_SER		(1 << 1)
/** FLASH_CR_PG Programming **/
#define FLASH_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_optcr OPTCR Flash option control register
@{*/

/** FLASH_OPTCR_IWDG_STOP Independent watchdog counter freeze in Stop mode **/
#define FLASH_OPTCR_IWDG_STOP		(1 << 31)
/** FLASH_OPTCR_IWDG_STDBY Independent watchdog counter freeze in standby mode **/
#define FLASH_OPTCR_IWDG_STDBY		(1 << 30)

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
/** FLASH_OPTCR_IWDG_SW WDG_SW User option bytes **/
#define FLASH_OPTCR_IWDG_SW		(1 << 5)
/** FLASH_OPTCR_WWDG_SW User option bytes **/
#define FLASH_OPTCR_WWDG_SW		(1 << 4)

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

/** @defgroup flash_optcr1 OPTCR1 Flash option control register 1
@{*/


#define FLASH_OPTCR1_BOOT_ADD1_SHIFT		16
#define FLASH_OPTCR1_BOOT_ADD1_MASK		0xffff
/** @defgroup flash_optcr1_boot_add1 BOOTADD1 Boot base address when Boot pin =1
@{*/
/**@}*/


#define FLASH_OPTCR1_BOOT_ADD0_SHIFT		0
#define FLASH_OPTCR1_BOOT_ADD0_MASK		0xffff
/** @defgroup flash_optcr1_boot_add0 BOOTADD0 Boot base address when Boot pin =0
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optcr2 OPTCR2 Flash option control register
@{*/

/** FLASH_OPTCR2_PCROP_RDP PCROP zone preserved when RDP level decreased **/
#define FLASH_OPTCR2_PCROP_RDP		(1 << 31)

#define FLASH_OPTCR2_PCROP_SHIFT		0
#define FLASH_OPTCR2_PCROP_MASK		0xff
/** @defgroup flash_optcr2_pcrop PCROP PCROP option byte
@{*/
/**@}*/


/**@}*/

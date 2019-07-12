#pragma once 

/* --- Flash: FLASH ------------------------------------------------- */

/** @defgroup flash_registers FLASH Register
@{*/

/** Flash_ACR Flash access control register **/
#define Flash_ACR			MMIO32(Flash_BASE + 0x00)
/** Flash_KEYR Flash key register **/
#define Flash_KEYR			MMIO32(Flash_BASE + 0x04)
/** Flash_OPTKEYR Flash option key register **/
#define Flash_OPTKEYR			MMIO32(Flash_BASE + 0x08)
/** Flash_SR Status register **/
#define Flash_SR			MMIO32(Flash_BASE + 0x0c)
/** Flash_CR Control register **/
#define Flash_CR			MMIO32(Flash_BASE + 0x10)
/** Flash_OPTCR Flash option control register **/
#define Flash_OPTCR			MMIO32(Flash_BASE + 0x14)
/** Flash_OPTCR1 Flash option control register 1 **/
#define Flash_OPTCR1			MMIO32(Flash_BASE + 0x18)

/**@}*/


/** @defgroup flash_acr ACR Flash access control register
@{*/

/** Flash_ACR_ARTRST ART Accelerator reset **/
#define Flash_ACR_ARTRST		(1 << 11)
/** Flash_ACR_ARTEN ART Accelerator Enable **/
#define Flash_ACR_ARTEN		(1 << 9)
/** Flash_ACR_PRFTEN Prefetch enable **/
#define Flash_ACR_PRFTEN		(1 << 8)

#define Flash_ACR_LATENCY_SHIFT		0
#define Flash_ACR_LATENCY_MASK		0x0f
/** @defgroup flash_acr_latency LATENCY Latency
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr KEYR Flash key register
@{*/


#define Flash_KEYR_KEY_SHIFT		0
#define Flash_KEYR_KEY_MASK		0xffffffff
/** @defgroup flash_keyr_key KEY FPEC key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR Flash option key register
@{*/


#define Flash_OPTKEYR_OPTKEY_SHIFT		0
#define Flash_OPTKEYR_OPTKEY_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkey OPTKEY Option byte key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_sr SR Status register
@{*/

/** Flash_SR_BSY Busy **/
#define Flash_SR_BSY		(1 << 16)
/** Flash_SR_PGSERR Programming sequence error **/
#define Flash_SR_PGSERR		(1 << 7)
/** Flash_SR_PGPERR Programming parallelism error **/
#define Flash_SR_PGPERR		(1 << 6)
/** Flash_SR_PGAERR Programming alignment error **/
#define Flash_SR_PGAERR		(1 << 5)
/** Flash_SR_WRPERR Write protection error **/
#define Flash_SR_WRPERR		(1 << 4)
/** Flash_SR_OPERR Operation error **/
#define Flash_SR_OPERR		(1 << 1)
/** Flash_SR_EOP End of operation **/
#define Flash_SR_EOP		(1 << 0)

/**@}*/

/** @defgroup flash_cr CR Control register
@{*/

/** Flash_CR_LOCK Lock **/
#define Flash_CR_LOCK		(1 << 31)
/** Flash_CR_ERRIE Error interrupt enable **/
#define Flash_CR_ERRIE		(1 << 25)
/** Flash_CR_EOPIE End of operation interrupt enable **/
#define Flash_CR_EOPIE		(1 << 24)
/** Flash_CR_STRT Start **/
#define Flash_CR_STRT		(1 << 16)
/** Flash_CR_MER1 Mass Erase of sectors 12 to 23 **/
#define Flash_CR_MER1		(1 << 15)

#define Flash_CR_PSIZE_SHIFT		8
#define Flash_CR_PSIZE_MASK		0x03
/** @defgroup flash_cr_psize PSIZE Program size
@{*/
/**@}*/


#define Flash_CR_SNB_SHIFT		3
#define Flash_CR_SNB_MASK		0x1f
/** @defgroup flash_cr_snb SNB Sector number
@{*/
/**@}*/

/** Flash_CR_MER Mass Erase of sectors 0 to 11 **/
#define Flash_CR_MER		(1 << 2)
/** Flash_CR_SER Sector Erase **/
#define Flash_CR_SER		(1 << 1)
/** Flash_CR_PG Programming **/
#define Flash_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_optcr OPTCR Flash option control register
@{*/

/** Flash_OPTCR_IWDG_STOP Independent watchdog counter freeze in Stop mode **/
#define Flash_OPTCR_IWDG_STOP		(1 << 31)
/** Flash_OPTCR_IWDG_STDBY Independent watchdog counter freeze in standby mode **/
#define Flash_OPTCR_IWDG_STDBY		(1 << 30)
/** Flash_OPTCR_nDBANK Not dual bank mode **/
#define Flash_OPTCR_nDBANK		(1 << 29)
/** Flash_OPTCR_nDBOOT Dual Boot mode (valid only when nDBANK=0) **/
#define Flash_OPTCR_nDBOOT		(1 << 28)

#define Flash_OPTCR_nWRP_SHIFT		16
#define Flash_OPTCR_nWRP_MASK		0xfff
/** @defgroup flash_optcr_nwrp nWRP Not write protect
@{*/
/**@}*/


#define Flash_OPTCR_RDP_SHIFT		8
#define Flash_OPTCR_RDP_MASK		0xff
/** @defgroup flash_optcr_rdp RDP Read protect
@{*/
/**@}*/

/** Flash_OPTCR_nRST_STDBY User option bytes **/
#define Flash_OPTCR_nRST_STDBY		(1 << 7)
/** Flash_OPTCR_nRST_STOP User option bytes **/
#define Flash_OPTCR_nRST_STOP		(1 << 6)
/** Flash_OPTCR_IWDG_SW User option bytes **/
#define Flash_OPTCR_IWDG_SW		(1 << 5)
/** Flash_OPTCR_WWDG_SW User option bytes **/
#define Flash_OPTCR_WWDG_SW		(1 << 4)

#define Flash_OPTCR_BOR_LEV_SHIFT		2
#define Flash_OPTCR_BOR_LEV_MASK		0x03
/** @defgroup flash_optcr_bor_lev BORLEV BOR reset Level
@{*/
/**@}*/

/** Flash_OPTCR_OPTSTRT Option start **/
#define Flash_OPTCR_OPTSTRT		(1 << 1)
/** Flash_OPTCR_OPTLOCK Option lock **/
#define Flash_OPTCR_OPTLOCK		(1 << 0)

/**@}*/

/** @defgroup flash_optcr1 OPTCR1 Flash option control register 1
@{*/


#define Flash_OPTCR1_BOOT_ADD1_SHIFT		16
#define Flash_OPTCR1_BOOT_ADD1_MASK		0xffff
/** @defgroup flash_optcr1_boot_add1 BOOTADD1 Boot base address when Boot pin =1
@{*/
/**@}*/


#define Flash_OPTCR1_BOOT_ADD0_SHIFT		0
#define Flash_OPTCR1_BOOT_ADD0_MASK		0xffff
/** @defgroup flash_optcr1_boot_add0 BOOTADD0 Boot base address when Boot pin =0
@{*/
/**@}*/


/**@}*/

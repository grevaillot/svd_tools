#pragma once 

/* --- Flash: Flash ------------------------------------------------- */

/** @defgroup flash_registers Flash Register
@{*/

/** Flash_ACR Flash access control register **/
#define Flash_ACR			MMIO32(Flash_BASE + 0x00)
/** Flash_KEYR Flash key register **/
#define Flash_KEYR			MMIO32(Flash_BASE + 0x04)
/** Flash_OPTKEYR Flash option key register **/
#define Flash_OPTKEYR			MMIO32(Flash_BASE + 0x08)
/** Flash_SR Flash status register **/
#define Flash_SR			MMIO32(Flash_BASE + 0x0c)
/** Flash_CR Flash control register **/
#define Flash_CR			MMIO32(Flash_BASE + 0x10)
/** Flash_AR Flash address register **/
#define Flash_AR			MMIO32(Flash_BASE + 0x14)
/** Flash_OBR Option byte register **/
#define Flash_OBR			MMIO32(Flash_BASE + 0x1c)
/** Flash_WRPR Write protection register **/
#define Flash_WRPR			MMIO32(Flash_BASE + 0x20)

/**@}*/


/** @defgroup flash_acr ACR Flash access control register
@{*/

/** Flash_ACR_PRFTBS PRFTBS **/
#define Flash_ACR_PRFTBS		(1 << 5)
/** Flash_ACR_PRFTBE PRFTBE **/
#define Flash_ACR_PRFTBE		(1 << 4)

#define Flash_ACR_LATENCY_SHIFT		0
#define Flash_ACR_LATENCY_MASK		0x07
/** @defgroup flash_acr_latency LATENCY LATENCY
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr KEYR Flash key register
@{*/


#define Flash_KEYR_FKEYR_SHIFT		0
#define Flash_KEYR_FKEYR_MASK		0xffffffff
/** @defgroup flash_keyr_fkeyr FKEYR Flash Key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR Flash option key register
@{*/


#define Flash_OPTKEYR_OPTKEYR_SHIFT		0
#define Flash_OPTKEYR_OPTKEYR_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkeyr OPTKEYR Option byte key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_sr SR Flash status register
@{*/

/** Flash_SR_EOP End of operation **/
#define Flash_SR_EOP		(1 << 5)
/** Flash_SR_WRPRT Write protection error **/
#define Flash_SR_WRPRT		(1 << 4)
/** Flash_SR_PGERR Programming error **/
#define Flash_SR_PGERR		(1 << 2)
/** Flash_SR_BSY Busy **/
#define Flash_SR_BSY		(1 << 0)

/**@}*/

/** @defgroup flash_cr CR Flash control register
@{*/

/** Flash_CR_FORCE_OPTLOAD Force option byte loading **/
#define Flash_CR_FORCE_OPTLOAD		(1 << 13)
/** Flash_CR_EOPIE End of operation interrupt enable **/
#define Flash_CR_EOPIE		(1 << 12)
/** Flash_CR_ERRIE Error interrupt enable **/
#define Flash_CR_ERRIE		(1 << 10)
/** Flash_CR_OPTWRE Option bytes write enable **/
#define Flash_CR_OPTWRE		(1 << 9)
/** Flash_CR_LOCK Lock **/
#define Flash_CR_LOCK		(1 << 7)
/** Flash_CR_STRT Start **/
#define Flash_CR_STRT		(1 << 6)
/** Flash_CR_OPTER Option byte erase **/
#define Flash_CR_OPTER		(1 << 5)
/** Flash_CR_OPTPG Option byte programming **/
#define Flash_CR_OPTPG		(1 << 4)
/** Flash_CR_MER Mass erase **/
#define Flash_CR_MER		(1 << 2)
/** Flash_CR_PER Page erase **/
#define Flash_CR_PER		(1 << 1)
/** Flash_CR_PG Programming **/
#define Flash_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_ar AR Flash address register
@{*/


#define Flash_AR_FAR_SHIFT		0
#define Flash_AR_FAR_MASK		0xffffffff
/** @defgroup flash_ar_far FAR Flash address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_obr OBR Option byte register
@{*/


#define Flash_OBR_Data1_SHIFT		24
#define Flash_OBR_Data1_MASK		0xff
/** @defgroup flash_obr_data1 Data1 Data1
@{*/
/**@}*/


#define Flash_OBR_Data0_SHIFT		16
#define Flash_OBR_Data0_MASK		0xff
/** @defgroup flash_obr_data0 Data0 Data0
@{*/
/**@}*/

/** Flash_OBR_VDDA_MONITOR VDDA_MONITOR **/
#define Flash_OBR_VDDA_MONITOR		(1 << 13)
/** Flash_OBR_BOOT1 BOOT1 **/
#define Flash_OBR_BOOT1		(1 << 12)
/** Flash_OBR_nRST_STDBY nRST_STDBY **/
#define Flash_OBR_nRST_STDBY		(1 << 10)
/** Flash_OBR_nRST_STOP nRST_STOP **/
#define Flash_OBR_nRST_STOP		(1 << 9)
/** Flash_OBR_WDG_SW WDG_SW **/
#define Flash_OBR_WDG_SW		(1 << 8)

#define Flash_OBR_RDPRT_SHIFT		1
#define Flash_OBR_RDPRT_MASK		0x03
/** @defgroup flash_obr_rdprt RDPRT Read protection Level status
@{*/
/**@}*/

/** Flash_OBR_OPTERR Option byte error **/
#define Flash_OBR_OPTERR		(1 << 0)

/**@}*/

/** @defgroup flash_wrpr WRPR Write protection register
@{*/


#define Flash_WRPR_WRP_SHIFT		0
#define Flash_WRPR_WRP_MASK		0xffffffff
/** @defgroup flash_wrpr_wrp WRP Write protect
@{*/
/**@}*/


/**@}*/

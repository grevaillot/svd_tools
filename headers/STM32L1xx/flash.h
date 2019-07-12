#pragma once 

/* --- Flash: Flash ------------------------------------------------- */

/** @defgroup flash_registers Flash Register
@{*/

/** Flash_ACR Access control register **/
#define Flash_ACR			MMIO32(Flash_BASE + 0x00)
/** Flash_PECR Program/erase control register **/
#define Flash_PECR			MMIO32(Flash_BASE + 0x04)
/** Flash_PDKEYR Power down key register **/
#define Flash_PDKEYR			MMIO32(Flash_BASE + 0x08)
/** Flash_PEKEYR Program/erase key register **/
#define Flash_PEKEYR			MMIO32(Flash_BASE + 0x0c)
/** Flash_PRGKEYR Program memory key register **/
#define Flash_PRGKEYR			MMIO32(Flash_BASE + 0x10)
/** Flash_OPTKEYR Option byte key register **/
#define Flash_OPTKEYR			MMIO32(Flash_BASE + 0x14)
/** Flash_SR Status register **/
#define Flash_SR			MMIO32(Flash_BASE + 0x18)
/** Flash_OBR Option byte register **/
#define Flash_OBR			MMIO32(Flash_BASE + 0x1c)
/** Flash_WRPR1 Write protection register **/
#define Flash_WRPR1			MMIO32(Flash_BASE + 0x20)
/** Flash_WRPR2 Write protection register **/
#define Flash_WRPR2			MMIO32(Flash_BASE + 0x80)
/** Flash_WRPR3 Write protection register **/
#define Flash_WRPR3			MMIO32(Flash_BASE + 0x84)

/**@}*/


/** @defgroup flash_acr ACR Access control register
@{*/

/** Flash_ACR_RUN_PD Flash mode during Run **/
#define Flash_ACR_RUN_PD		(1 << 4)
/** Flash_ACR_SLEEP_PD Flash mode during Sleep **/
#define Flash_ACR_SLEEP_PD		(1 << 3)
/** Flash_ACR_ACC64 64-bit access **/
#define Flash_ACR_ACC64		(1 << 2)
/** Flash_ACR_PRFTEN Prefetch enable **/
#define Flash_ACR_PRFTEN		(1 << 1)
/** Flash_ACR_LATENCY Latency **/
#define Flash_ACR_LATENCY		(1 << 0)

/**@}*/

/** @defgroup flash_pecr PECR Program/erase control register
@{*/

/** Flash_PECR_OBL_LAUNCH Launch the option byte loading **/
#define Flash_PECR_OBL_LAUNCH		(1 << 18)
/** Flash_PECR_ERRIE Error interrupt enable **/
#define Flash_PECR_ERRIE		(1 << 17)
/** Flash_PECR_EOPIE End of programming interrupt enable **/
#define Flash_PECR_EOPIE		(1 << 16)
/** Flash_PECR_PARALLELBANK Parallel bank mode **/
#define Flash_PECR_PARALLELBANK		(1 << 15)
/** Flash_PECR_FPRG Half Page/Double Word programming mode **/
#define Flash_PECR_FPRG		(1 << 10)
/** Flash_PECR_ERASE Page or Double Word erase mode **/
#define Flash_PECR_ERASE		(1 << 9)
/** Flash_PECR_FTDW Fixed time data write for Byte, Half Word and Word programming **/
#define Flash_PECR_FTDW		(1 << 8)
/** Flash_PECR_DATA Data EEPROM selection **/
#define Flash_PECR_DATA		(1 << 4)
/** Flash_PECR_PROG Program memory selection **/
#define Flash_PECR_PROG		(1 << 3)
/** Flash_PECR_OPTLOCK Option bytes block lock **/
#define Flash_PECR_OPTLOCK		(1 << 2)
/** Flash_PECR_PRGLOCK Program memory lock **/
#define Flash_PECR_PRGLOCK		(1 << 1)
/** Flash_PECR_PELOCK FLASH_PECR and data EEPROM lock **/
#define Flash_PECR_PELOCK		(1 << 0)

/**@}*/

/** @defgroup flash_pdkeyr PDKEYR Power down key register
@{*/


#define Flash_PDKEYR_PDKEYR_SHIFT		0
#define Flash_PDKEYR_PDKEYR_MASK		0xffffffff
/** @defgroup flash_pdkeyr_pdkeyr PDKEYR RUN_PD in FLASH_ACR key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pekeyr PEKEYR Program/erase key register
@{*/


#define Flash_PEKEYR_PEKEYR_SHIFT		0
#define Flash_PEKEYR_PEKEYR_MASK		0xffffffff
/** @defgroup flash_pekeyr_pekeyr PEKEYR FLASH_PEC and data EEPROM key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_prgkeyr PRGKEYR Program memory key register
@{*/


#define Flash_PRGKEYR_PRGKEYR_SHIFT		0
#define Flash_PRGKEYR_PRGKEYR_MASK		0xffffffff
/** @defgroup flash_prgkeyr_prgkeyr PRGKEYR Program memory key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR Option byte key register
@{*/


#define Flash_OPTKEYR_OPTKEYR_SHIFT		0
#define Flash_OPTKEYR_OPTKEYR_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkeyr OPTKEYR Option byte key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_sr SR Status register
@{*/

/** Flash_SR_OPTVERRUSR Option UserValidity Error **/
#define Flash_SR_OPTVERRUSR		(1 << 12)
/** Flash_SR_OPTVERR Option validity error **/
#define Flash_SR_OPTVERR		(1 << 11)
/** Flash_SR_SIZERR Size error **/
#define Flash_SR_SIZERR		(1 << 10)
/** Flash_SR_PGAERR Programming alignment error **/
#define Flash_SR_PGAERR		(1 << 9)
/** Flash_SR_WRPERR Write protected error **/
#define Flash_SR_WRPERR		(1 << 8)
/** Flash_SR_READY Flash memory module ready after low power mode **/
#define Flash_SR_READY		(1 << 3)
/** Flash_SR_ENDHV End of high voltage **/
#define Flash_SR_ENDHV		(1 << 2)
/** Flash_SR_EOP End of operation **/
#define Flash_SR_EOP		(1 << 1)
/** Flash_SR_BSY Write/erase operations in progress **/
#define Flash_SR_BSY		(1 << 0)

/**@}*/

/** @defgroup flash_obr OBR Option byte register
@{*/

/** Flash_OBR_BFB2 Boot From Bank 2 **/
#define Flash_OBR_BFB2		(1 << 23)
/** Flash_OBR_nRST_STDBY nRST_STDBY **/
#define Flash_OBR_nRST_STDBY		(1 << 22)
/** Flash_OBR_nRTS_STOP nRTS_STOP **/
#define Flash_OBR_nRTS_STOP		(1 << 21)
/** Flash_OBR_IWDG_SW IWDG_SW **/
#define Flash_OBR_IWDG_SW		(1 << 20)

#define Flash_OBR_BOR_LEV_SHIFT		16
#define Flash_OBR_BOR_LEV_MASK		0x0f
/** @defgroup flash_obr_bor_lev BORLEV BOR_LEV
@{*/
/**@}*/


#define Flash_OBR_RDPRT_SHIFT		0
#define Flash_OBR_RDPRT_MASK		0xff
/** @defgroup flash_obr_rdprt RDPRT Read protection
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrpr1 WRPR1 Write protection register
@{*/


#define Flash_WRPR1_WRP1_SHIFT		0
#define Flash_WRPR1_WRP1_MASK		0xffffffff
/** @defgroup flash_wrpr1_wrp1 WRP1 Write protection
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrpr2 WRPR2 Write protection register
@{*/


#define Flash_WRPR2_WRP2_SHIFT		0
#define Flash_WRPR2_WRP2_MASK		0xffffffff
/** @defgroup flash_wrpr2_wrp2 WRP2 WRP2
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrpr3 WRPR3 Write protection register
@{*/


#define Flash_WRPR3_WRP3_SHIFT		0
#define Flash_WRPR3_WRP3_MASK		0xffffffff
/** @defgroup flash_wrpr3_wrp3 WRP3 WRP3
@{*/
/**@}*/


/**@}*/

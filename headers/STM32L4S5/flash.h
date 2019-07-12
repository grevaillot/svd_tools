#pragma once 

/* --- FLASH: Flash ------------------------------------------------- */

/** @defgroup flash_registers Flash Register
@{*/

/** FLASH_ACR Access control register **/
#define FLASH_ACR			MMIO32(FLASH_BASE + 0x00)
/** FLASH_PDKEYR Power down key register **/
#define FLASH_PDKEYR			MMIO32(FLASH_BASE + 0x04)
/** FLASH_KEYR Flash key register **/
#define FLASH_KEYR			MMIO32(FLASH_BASE + 0x08)
/** FLASH_OPTKEYR Option byte key register **/
#define FLASH_OPTKEYR			MMIO32(FLASH_BASE + 0x0c)
/** FLASH_SR Status register **/
#define FLASH_SR			MMIO32(FLASH_BASE + 0x10)
/** FLASH_CR Flash control register **/
#define FLASH_CR			MMIO32(FLASH_BASE + 0x14)
/** FLASH_ECCR Flash ECC register **/
#define FLASH_ECCR			MMIO32(FLASH_BASE + 0x18)
/** FLASH_OPTR Flash option register **/
#define FLASH_OPTR			MMIO32(FLASH_BASE + 0x20)
/** FLASH_PCROP1SR Flash Bank 1 PCROP Start address register **/
#define FLASH_PCROP1SR			MMIO32(FLASH_BASE + 0x24)
/** FLASH_PCROP1ER Flash Bank 1 PCROP End address register **/
#define FLASH_PCROP1ER			MMIO32(FLASH_BASE + 0x28)
/** FLASH_WRP1AR Flash Bank 1 WRP area A address register **/
#define FLASH_WRP1AR			MMIO32(FLASH_BASE + 0x2c)
/** FLASH_WRP1BR Flash Bank 1 WRP area B address register **/
#define FLASH_WRP1BR			MMIO32(FLASH_BASE + 0x30)
/** FLASH_PCROP2SR Flash Bank 2 PCROP Start address register **/
#define FLASH_PCROP2SR			MMIO32(FLASH_BASE + 0x44)
/** FLASH_PCROP2ER Flash Bank 2 PCROP End address register **/
#define FLASH_PCROP2ER			MMIO32(FLASH_BASE + 0x48)
/** FLASH_WRP2AR Flash Bank 2 WRP area A address register **/
#define FLASH_WRP2AR			MMIO32(FLASH_BASE + 0x4c)
/** FLASH_WRP2BR Flash Bank 2 WRP area B address register **/
#define FLASH_WRP2BR			MMIO32(FLASH_BASE + 0x50)

/**@}*/


/** @defgroup flash_acr ACR Access control register
@{*/

/** FLASH_ACR_SLEEP_PD Flash Power-down mode during Low-power sleep mode **/
#define FLASH_ACR_SLEEP_PD		(1 << 14)
/** FLASH_ACR_RUN_PD Flash Power-down mode during Low-power run mode **/
#define FLASH_ACR_RUN_PD		(1 << 13)
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

/** @defgroup flash_pdkeyr PDKEYR Power down key register
@{*/


#define FLASH_PDKEYR_PDKEYR_SHIFT		0
#define FLASH_PDKEYR_PDKEYR_MASK		0xffffffff
/** @defgroup flash_pdkeyr_pdkeyr PDKEYR RUN_PD in FLASH_ACR key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr KEYR Flash key register
@{*/


#define FLASH_KEYR_KEYR_SHIFT		0
#define FLASH_KEYR_KEYR_MASK		0xffffffff
/** @defgroup flash_keyr_keyr KEYR KEYR
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR Option byte key register
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
/** FLASH_SR_OPTVERR Option validity error **/
#define FLASH_SR_OPTVERR		(1 << 15)
/** FLASH_SR_RDERR PCROP read error **/
#define FLASH_SR_RDERR		(1 << 14)
/** FLASH_SR_FASTERR Fast programming error **/
#define FLASH_SR_FASTERR		(1 << 9)
/** FLASH_SR_MISERR Fast programming data miss error **/
#define FLASH_SR_MISERR		(1 << 8)
/** FLASH_SR_PGSERR Programming sequence error **/
#define FLASH_SR_PGSERR		(1 << 7)
/** FLASH_SR_SIZERR Size error **/
#define FLASH_SR_SIZERR		(1 << 6)
/** FLASH_SR_PGAERR Programming alignment error **/
#define FLASH_SR_PGAERR		(1 << 5)
/** FLASH_SR_WRPERR Write protected error **/
#define FLASH_SR_WRPERR		(1 << 4)
/** FLASH_SR_PROGERR Programming error **/
#define FLASH_SR_PROGERR		(1 << 3)
/** FLASH_SR_OPERR Operation error **/
#define FLASH_SR_OPERR		(1 << 1)
/** FLASH_SR_EOP End of operation **/
#define FLASH_SR_EOP		(1 << 0)

/**@}*/

/** @defgroup flash_cr CR Flash control register
@{*/

/** FLASH_CR_LOCK FLASH_CR Lock **/
#define FLASH_CR_LOCK		(1 << 31)
/** FLASH_CR_OPTLOCK Options Lock **/
#define FLASH_CR_OPTLOCK		(1 << 30)
/** FLASH_CR_OBL_LAUNCH Force the option byte loading **/
#define FLASH_CR_OBL_LAUNCH		(1 << 27)
/** FLASH_CR_RDERRIE PCROP read error interrupt enable **/
#define FLASH_CR_RDERRIE		(1 << 26)
/** FLASH_CR_ERRIE Error interrupt enable **/
#define FLASH_CR_ERRIE		(1 << 25)
/** FLASH_CR_EOPIE End of operation interrupt enable **/
#define FLASH_CR_EOPIE		(1 << 24)
/** FLASH_CR_FSTPG Fast programming **/
#define FLASH_CR_FSTPG		(1 << 18)
/** FLASH_CR_OPTSTRT Options modification start **/
#define FLASH_CR_OPTSTRT		(1 << 17)
/** FLASH_CR_START Start **/
#define FLASH_CR_START		(1 << 16)
/** FLASH_CR_MER2 Bank 2 Mass erase **/
#define FLASH_CR_MER2		(1 << 15)
/** FLASH_CR_BKER Bank erase **/
#define FLASH_CR_BKER		(1 << 11)

#define FLASH_CR_PNB_SHIFT		3
#define FLASH_CR_PNB_MASK		0xff
/** @defgroup flash_cr_pnb PNB Page number
@{*/
/**@}*/

/** FLASH_CR_MER1 Bank 1 Mass erase **/
#define FLASH_CR_MER1		(1 << 2)
/** FLASH_CR_PER Page erase **/
#define FLASH_CR_PER		(1 << 1)
/** FLASH_CR_PG Programming **/
#define FLASH_CR_PG		(1 << 0)

/**@}*/

/** @defgroup flash_eccr ECCR Flash ECC register
@{*/

/** FLASH_ECCR_ECCD ECC detection **/
#define FLASH_ECCR_ECCD		(1 << 31)
/** FLASH_ECCR_ECCC ECC correction **/
#define FLASH_ECCR_ECCC		(1 << 30)
/** FLASH_ECCR_ECCIE ECC correction interrupt enable **/
#define FLASH_ECCR_ECCIE		(1 << 24)
/** FLASH_ECCR_SYSF_ECC System Flash ECC fail **/
#define FLASH_ECCR_SYSF_ECC		(1 << 20)
/** FLASH_ECCR_BK_ECC ECC fail bank **/
#define FLASH_ECCR_BK_ECC		(1 << 19)

#define FLASH_ECCR_ADDR_ECC_SHIFT		0
#define FLASH_ECCR_ADDR_ECC_MASK		0x7ffff
/** @defgroup flash_eccr_addr_ecc ADDRECC ECC fail address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optr OPTR Flash option register
@{*/

/** FLASH_OPTR_SRAM2_RST SRAM2 Erase when system reset **/
#define FLASH_OPTR_SRAM2_RST		(1 << 25)
/** FLASH_OPTR_SRAM2_PE SRAM2 parity check enable **/
#define FLASH_OPTR_SRAM2_PE		(1 << 24)
/** FLASH_OPTR_nBOOT1 Boot configuration **/
#define FLASH_OPTR_nBOOT1		(1 << 23)
/** FLASH_OPTR_DUALBANK Dual-Bank on 512 KB or 256 KB Flash memory devices **/
#define FLASH_OPTR_DUALBANK		(1 << 21)
/** FLASH_OPTR_BFB2 Dual-bank boot **/
#define FLASH_OPTR_BFB2		(1 << 20)
/** FLASH_OPTR_WWDG_SW Window watchdog selection **/
#define FLASH_OPTR_WWDG_SW		(1 << 19)
/** FLASH_OPTR_IWDG_STDBY Independent watchdog counter freeze in Standby mode **/
#define FLASH_OPTR_IWDG_STDBY		(1 << 18)
/** FLASH_OPTR_IWDG_STOP Independent watchdog counter freeze in Stop mode **/
#define FLASH_OPTR_IWDG_STOP		(1 << 17)
/** FLASH_OPTR_IDWG_SW Independent watchdog selection **/
#define FLASH_OPTR_IDWG_SW		(1 << 16)
/** FLASH_OPTR_nRST_STDBY nRST_STDBY **/
#define FLASH_OPTR_nRST_STDBY		(1 << 13)
/** FLASH_OPTR_nRST_STOP nRST_STOP **/
#define FLASH_OPTR_nRST_STOP		(1 << 12)

#define FLASH_OPTR_BOR_LEV_SHIFT		8
#define FLASH_OPTR_BOR_LEV_MASK		0x07
/** @defgroup flash_optr_bor_lev BORLEV BOR reset Level
@{*/
/**@}*/


#define FLASH_OPTR_RDP_SHIFT		0
#define FLASH_OPTR_RDP_MASK		0xff
/** @defgroup flash_optr_rdp RDP Read protection level
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1sr PCROP1SR Flash Bank 1 PCROP Start address register
@{*/


#define FLASH_PCROP1SR_PCROP1_STRT_SHIFT		0
#define FLASH_PCROP1SR_PCROP1_STRT_MASK		0xffff
/** @defgroup flash_pcrop1sr_pcrop1_strt PCROP1STRT Bank 1 PCROP area start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1er PCROP1ER Flash Bank 1 PCROP End address register
@{*/

/** FLASH_PCROP1ER_PCROP_RDP PCROP area preserved when RDP level decreased **/
#define FLASH_PCROP1ER_PCROP_RDP		(1 << 31)

#define FLASH_PCROP1ER_PCROP1_END_SHIFT		0
#define FLASH_PCROP1ER_PCROP1_END_MASK		0xffff
/** @defgroup flash_pcrop1er_pcrop1_end PCROP1END Bank 1 PCROP area end offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp1ar WRP1AR Flash Bank 1 WRP area A address register
@{*/


#define FLASH_WRP1AR_WRP1A_END_SHIFT		16
#define FLASH_WRP1AR_WRP1A_END_MASK		0xff
/** @defgroup flash_wrp1ar_wrp1a_end WRP1AEND Bank 1 WRP first area A end offset
@{*/
/**@}*/


#define FLASH_WRP1AR_WRP1A_STRT_SHIFT		0
#define FLASH_WRP1AR_WRP1A_STRT_MASK		0xff
/** @defgroup flash_wrp1ar_wrp1a_strt WRP1ASTRT Bank 1 WRP first area start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp1br WRP1BR Flash Bank 1 WRP area B address register
@{*/


#define FLASH_WRP1BR_WRP1B_STRT_SHIFT		16
#define FLASH_WRP1BR_WRP1B_STRT_MASK		0xff
/** @defgroup flash_wrp1br_wrp1b_strt WRP1BSTRT Bank 1 WRP second area B end offset
@{*/
/**@}*/


#define FLASH_WRP1BR_WRP1B_END_SHIFT		0
#define FLASH_WRP1BR_WRP1B_END_MASK		0xff
/** @defgroup flash_wrp1br_wrp1b_end WRP1BEND Bank 1 WRP second area B start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop2sr PCROP2SR Flash Bank 2 PCROP Start address register
@{*/


#define FLASH_PCROP2SR_PCROP2_STRT_SHIFT		0
#define FLASH_PCROP2SR_PCROP2_STRT_MASK		0xffff
/** @defgroup flash_pcrop2sr_pcrop2_strt PCROP2STRT Bank 2 PCROP area start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop2er PCROP2ER Flash Bank 2 PCROP End address register
@{*/


#define FLASH_PCROP2ER_PCROP2_END_SHIFT		0
#define FLASH_PCROP2ER_PCROP2_END_MASK		0xffff
/** @defgroup flash_pcrop2er_pcrop2_end PCROP2END Bank 2 PCROP area end offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp2ar WRP2AR Flash Bank 2 WRP area A address register
@{*/


#define FLASH_WRP2AR_WRP2A_END_SHIFT		16
#define FLASH_WRP2AR_WRP2A_END_MASK		0xff
/** @defgroup flash_wrp2ar_wrp2a_end WRP2AEND Bank 2 WRP first area A end offset
@{*/
/**@}*/


#define FLASH_WRP2AR_WRP2A_STRT_SHIFT		0
#define FLASH_WRP2AR_WRP2A_STRT_MASK		0xff
/** @defgroup flash_wrp2ar_wrp2a_strt WRP2ASTRT Bank 2 WRP first area A start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp2br WRP2BR Flash Bank 2 WRP area B address register
@{*/


#define FLASH_WRP2BR_WRP2B_END_SHIFT		16
#define FLASH_WRP2BR_WRP2B_END_MASK		0xff
/** @defgroup flash_wrp2br_wrp2b_end WRP2BEND Bank 2 WRP second area B end offset
@{*/
/**@}*/


#define FLASH_WRP2BR_WRP2B_STRT_SHIFT		0
#define FLASH_WRP2BR_WRP2B_STRT_MASK		0xff
/** @defgroup flash_wrp2br_wrp2b_strt WRP2BSTRT Bank 2 WRP second area B start offset
@{*/
/**@}*/


/**@}*/

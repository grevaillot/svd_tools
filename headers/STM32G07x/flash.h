#pragma once 

/* --- FLASH: Flash ------------------------------------------------- */

/** @defgroup flash_registers Flash Register
@{*/

/** FLASH_ACR Access control register **/
#define FLASH_ACR			MMIO32(FLASH_BASE + 0x00)
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
/** FLASH_PCROP1ASR Flash PCROP zone A Start address register **/
#define FLASH_PCROP1ASR			MMIO32(FLASH_BASE + 0x24)
/** FLASH_PCROP1AER Flash PCROP zone A End address register **/
#define FLASH_PCROP1AER			MMIO32(FLASH_BASE + 0x28)
/** FLASH_WRP1AR Flash WRP area A address register **/
#define FLASH_WRP1AR			MMIO32(FLASH_BASE + 0x2c)
/** FLASH_WRP1BR Flash WRP area B address register **/
#define FLASH_WRP1BR			MMIO32(FLASH_BASE + 0x30)
/** FLASH_PCROP1BSR Flash PCROP zone B Start address register **/
#define FLASH_PCROP1BSR			MMIO32(FLASH_BASE + 0x34)
/** FLASH_PCROP1BER Flash PCROP zone B End address register **/
#define FLASH_PCROP1BER			MMIO32(FLASH_BASE + 0x38)
/** FLASH_SECR Flash Security register **/
#define FLASH_SECR			MMIO32(FLASH_BASE + 0x80)

/**@}*/


/** @defgroup flash_acr ACR Access control register
@{*/

/** FLASH_ACR_DBG_SWEN Debug access software enable **/
#define FLASH_ACR_DBG_SWEN		(1 << 18)
/** FLASH_ACR_EMPTY Flash User area empty **/
#define FLASH_ACR_EMPTY		(1 << 16)
/** FLASH_ACR_ICRST Instruction cache reset **/
#define FLASH_ACR_ICRST		(1 << 11)
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

/** FLASH_SR_CFGBSY Programming or erase configuration busy. **/
#define FLASH_SR_CFGBSY		(1 << 18)
/** FLASH_SR_BSY Busy **/
#define FLASH_SR_BSY		(1 << 16)
/** FLASH_SR_OPTVERR Option and Engineering bits loading validity error **/
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
/** FLASH_CR_SEC_PROT Securable memory area protection enable **/
#define FLASH_CR_SEC_PROT		(1 << 28)
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
/** FLASH_CR_STRT Start **/
#define FLASH_CR_STRT		(1 << 16)

#define FLASH_CR_PNB_SHIFT		3
#define FLASH_CR_PNB_MASK		0x3f
/** @defgroup flash_cr_pnb PNB Page number
@{*/
/**@}*/

/** FLASH_CR_MER Mass erase **/
#define FLASH_CR_MER		(1 << 2)
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
/** FLASH_ECCR_SYSF_ECC ECC fail for Corrected ECC Error or Double ECC Error in info block **/
#define FLASH_ECCR_SYSF_ECC		(1 << 20)

#define FLASH_ECCR_ADDR_ECC_SHIFT		0
#define FLASH_ECCR_ADDR_ECC_MASK		0x3fff
/** @defgroup flash_eccr_addr_ecc ADDRECC ECC fail address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optr OPTR Flash option register
@{*/

/** FLASH_OPTR_IRHEN Internal reset holder enable bit **/
#define FLASH_OPTR_IRHEN		(1 << 29)

#define FLASH_OPTR_NRST_MODE_SHIFT		27
#define FLASH_OPTR_NRST_MODE_MASK		0x03
/** @defgroup flash_optr_nrst_mode NRSTMODE NRST_MODE
@{*/
/**@}*/

/** FLASH_OPTR_nBOOT0 nBOOT0 option bit **/
#define FLASH_OPTR_nBOOT0		(1 << 26)
/** FLASH_OPTR_nBOOT1 Boot configuration **/
#define FLASH_OPTR_nBOOT1		(1 << 25)
/** FLASH_OPTR_nBOOT_SEL nBOOT_SEL **/
#define FLASH_OPTR_nBOOT_SEL		(1 << 24)
/** FLASH_OPTR_RAM_PARITY_CHECK SRAM parity check control **/
#define FLASH_OPTR_RAM_PARITY_CHECK		(1 << 22)
/** FLASH_OPTR_WWDG_SW Window watchdog selection **/
#define FLASH_OPTR_WWDG_SW		(1 << 19)
/** FLASH_OPTR_IWDG_STDBY Independent watchdog counter freeze in Standby mode **/
#define FLASH_OPTR_IWDG_STDBY		(1 << 18)
/** FLASH_OPTR_IWDG_STOP Independent watchdog counter freeze in Stop mode **/
#define FLASH_OPTR_IWDG_STOP		(1 << 17)
/** FLASH_OPTR_IDWG_SW Independent watchdog selection **/
#define FLASH_OPTR_IDWG_SW		(1 << 16)
/** FLASH_OPTR_nRSTS_HDW nRSTS_HDW **/
#define FLASH_OPTR_nRSTS_HDW		(1 << 15)
/** FLASH_OPTR_nRST_STDBY nRST_STDBY **/
#define FLASH_OPTR_nRST_STDBY		(1 << 14)
/** FLASH_OPTR_nRST_STOP nRST_STOP **/
#define FLASH_OPTR_nRST_STOP		(1 << 13)

#define FLASH_OPTR_BORR_LEV_SHIFT		11
#define FLASH_OPTR_BORR_LEV_MASK		0x03
/** @defgroup flash_optr_borr_lev BORRLEV These bits contain the VDD supply level threshold that releases the reset.
@{*/
/**@}*/


#define FLASH_OPTR_BORF_LEV_SHIFT		9
#define FLASH_OPTR_BORF_LEV_MASK		0x03
/** @defgroup flash_optr_borf_lev BORFLEV These bits contain the VDD supply level threshold that activates the reset
@{*/
/**@}*/

/** FLASH_OPTR_BOREN BOR reset Level **/
#define FLASH_OPTR_BOREN		(1 << 8)

#define FLASH_OPTR_RDP_SHIFT		0
#define FLASH_OPTR_RDP_MASK		0xff
/** @defgroup flash_optr_rdp RDP Read protection level
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1asr PCROP1ASR Flash PCROP zone A Start address register
@{*/


#define FLASH_PCROP1ASR_PCROP1A_STRT_SHIFT		0
#define FLASH_PCROP1ASR_PCROP1A_STRT_MASK		0xff
/** @defgroup flash_pcrop1asr_pcrop1a_strt PCROP1ASTRT PCROP1A area start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1aer PCROP1AER Flash PCROP zone A End address register
@{*/

/** FLASH_PCROP1AER_PCROP_RDP PCROP area preserved when RDP level decreased **/
#define FLASH_PCROP1AER_PCROP_RDP		(1 << 31)

#define FLASH_PCROP1AER_PCROP1A_END_SHIFT		0
#define FLASH_PCROP1AER_PCROP1A_END_MASK		0xff
/** @defgroup flash_pcrop1aer_pcrop1a_end PCROP1AEND PCROP1A area end offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp1ar WRP1AR Flash WRP area A address register
@{*/


#define FLASH_WRP1AR_WRP1A_END_SHIFT		16
#define FLASH_WRP1AR_WRP1A_END_MASK		0x3f
/** @defgroup flash_wrp1ar_wrp1a_end WRP1AEND WRP area A end offset
@{*/
/**@}*/


#define FLASH_WRP1AR_WRP1A_STRT_SHIFT		0
#define FLASH_WRP1AR_WRP1A_STRT_MASK		0x3f
/** @defgroup flash_wrp1ar_wrp1a_strt WRP1ASTRT WRP area A start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wrp1br WRP1BR Flash WRP area B address register
@{*/


#define FLASH_WRP1BR_WRP1B_END_SHIFT		16
#define FLASH_WRP1BR_WRP1B_END_MASK		0x3f
/** @defgroup flash_wrp1br_wrp1b_end WRP1BEND WRP area B end offset
@{*/
/**@}*/


#define FLASH_WRP1BR_WRP1B_STRT_SHIFT		0
#define FLASH_WRP1BR_WRP1B_STRT_MASK		0x3f
/** @defgroup flash_wrp1br_wrp1b_strt WRP1BSTRT WRP area B start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1bsr PCROP1BSR Flash PCROP zone B Start address register
@{*/


#define FLASH_PCROP1BSR_PCROP1B_STRT_SHIFT		0
#define FLASH_PCROP1BSR_PCROP1B_STRT_MASK		0xff
/** @defgroup flash_pcrop1bsr_pcrop1b_strt PCROP1BSTRT PCROP1B area start offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_pcrop1ber PCROP1BER Flash PCROP zone B End address register
@{*/


#define FLASH_PCROP1BER_PCROP1B_END_SHIFT		0
#define FLASH_PCROP1BER_PCROP1B_END_MASK		0xff
/** @defgroup flash_pcrop1ber_pcrop1b_end PCROP1BEND PCROP1B area end offset
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_secr SECR Flash Security register
@{*/

/** FLASH_SECR_BOOT_LOCK used to force boot from user area **/
#define FLASH_SECR_BOOT_LOCK		(1 << 16)

#define FLASH_SECR_SEC_SIZE_SHIFT		0
#define FLASH_SECR_SEC_SIZE_MASK		0x7f
/** @defgroup flash_secr_sec_size SECSIZE Securable memory area size
@{*/
/**@}*/


/**@}*/

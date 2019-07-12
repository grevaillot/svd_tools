#pragma once 

/* --- NVMCTRL_SEC: Non-Volatile Memory Controller ------------------ */

/** @defgroup nvmctrl_sec_registers Non-Volatile Memory Controller Register
@{*/

/** NVMCTRL_SEC_CTRLA Control A **/
#define NVMCTRL_SEC_CTRLA			MMIO32(NVMCTRL_SEC_BASE + 0x00)
/** NVMCTRL_SEC_CTRLB Control B **/
#define NVMCTRL_SEC_CTRLB			MMIO32(NVMCTRL_SEC_BASE + 0x04)
/** NVMCTRL_SEC_CTRLC Control C **/
#define NVMCTRL_SEC_CTRLC			MMIO32(NVMCTRL_SEC_BASE + 0x08)
/** NVMCTRL_SEC_EVCTRL Event Control **/
#define NVMCTRL_SEC_EVCTRL			MMIO32(NVMCTRL_SEC_BASE + 0x0a)
/** NVMCTRL_SEC_INTENCLR Interrupt Enable Clear **/
#define NVMCTRL_SEC_INTENCLR			MMIO32(NVMCTRL_SEC_BASE + 0x0c)
/** NVMCTRL_SEC_INTENSET Interrupt Enable Set **/
#define NVMCTRL_SEC_INTENSET			MMIO32(NVMCTRL_SEC_BASE + 0x10)
/** NVMCTRL_SEC_INTFLAG Interrupt Flag Status and Clear **/
#define NVMCTRL_SEC_INTFLAG			MMIO32(NVMCTRL_SEC_BASE + 0x14)
/** NVMCTRL_SEC_STATUS Status **/
#define NVMCTRL_SEC_STATUS			MMIO32(NVMCTRL_SEC_BASE + 0x18)
/** NVMCTRL_SEC_ADDR Address **/
#define NVMCTRL_SEC_ADDR			MMIO32(NVMCTRL_SEC_BASE + 0x1c)
/** NVMCTRL_SEC_SULCK Secure Unlock Register **/
#define NVMCTRL_SEC_SULCK			MMIO32(NVMCTRL_SEC_BASE + 0x20)
/** NVMCTRL_SEC_NSULCK Non-Secure Unlock Register **/
#define NVMCTRL_SEC_NSULCK			MMIO32(NVMCTRL_SEC_BASE + 0x22)
/** NVMCTRL_SEC_PARAM NVM Parameter **/
#define NVMCTRL_SEC_PARAM			MMIO32(NVMCTRL_SEC_BASE + 0x24)
/** NVMCTRL_SEC_DSCC Data Scramble Configuration **/
#define NVMCTRL_SEC_DSCC			MMIO32(NVMCTRL_SEC_BASE + 0x30)
/** NVMCTRL_SEC_SECCTRL Security Control **/
#define NVMCTRL_SEC_SECCTRL			MMIO32(NVMCTRL_SEC_BASE + 0x34)
/** NVMCTRL_SEC_SCFGB Secure Boot Configuration **/
#define NVMCTRL_SEC_SCFGB			MMIO32(NVMCTRL_SEC_BASE + 0x38)
/** NVMCTRL_SEC_SCFGAD Secure Application and Data Configuration **/
#define NVMCTRL_SEC_SCFGAD			MMIO32(NVMCTRL_SEC_BASE + 0x3c)
/** NVMCTRL_SEC_NONSEC Non-secure Write Enable **/
#define NVMCTRL_SEC_NONSEC			MMIO32(NVMCTRL_SEC_BASE + 0x40)
/** NVMCTRL_SEC_NSCHK Non-secure Write Reference Value **/
#define NVMCTRL_SEC_NSCHK			MMIO32(NVMCTRL_SEC_BASE + 0x44)

/**@}*/


/** @defgroup nvmctrl_sec_ctrla CTRLA Control A
@{*/


#define NVMCTRL_SEC_CTRLA_CMDEX_SHIFT		8
#define NVMCTRL_SEC_CTRLA_CMDEX_MASK		0xff
/** @defgroup nvmctrl_sec_ctrla_cmdex CMDEX Command Execution
@{*/
/**@}*/


#define NVMCTRL_SEC_CTRLA_CMD_SHIFT		0
#define NVMCTRL_SEC_CTRLA_CMD_MASK		0x7f
/** @defgroup nvmctrl_sec_ctrla_cmd CMD Command
@{*/
/**@}*/


/**@}*/

/** @defgroup nvmctrl_sec_ctrlb CTRLB Control B
@{*/

/** NVMCTRL_SEC_CTRLB_QWEN Quick Write Enable **/
#define NVMCTRL_SEC_CTRLB_QWEN		(1 << 19)
/** NVMCTRL_SEC_CTRLB_CACHEDIS Cache Disable **/
#define NVMCTRL_SEC_CTRLB_CACHEDIS		(1 << 18)

#define NVMCTRL_SEC_CTRLB_READMODE_SHIFT		16
#define NVMCTRL_SEC_CTRLB_READMODE_MASK		0x03
/** @defgroup nvmctrl_sec_ctrlb_readmode READMODE NVMCTRL Read Mode
@{*/
/**@}*/

/** NVMCTRL_SEC_CTRLB_FWUP fast wake-up **/
#define NVMCTRL_SEC_CTRLB_FWUP		(1 << 11)

#define NVMCTRL_SEC_CTRLB_SLEEPPRM_SHIFT		8
#define NVMCTRL_SEC_CTRLB_SLEEPPRM_MASK		0x03
/** @defgroup nvmctrl_sec_ctrlb_sleepprm SLEEPPRM Power Reduction Mode during Sleep
@{*/
/**@}*/


#define NVMCTRL_SEC_CTRLB_RWS_SHIFT		1
#define NVMCTRL_SEC_CTRLB_RWS_MASK		0x0f
/** @defgroup nvmctrl_sec_ctrlb_rws RWS NVM Read Wait States
@{*/
/**@}*/


/**@}*/

/** @defgroup nvmctrl_sec_ctrlc CTRLC Control C
@{*/

/** NVMCTRL_SEC_CTRLC_MANW Manual Write **/
#define NVMCTRL_SEC_CTRLC_MANW		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_evctrl EVCTRL Event Control
@{*/

/** NVMCTRL_SEC_EVCTRL_AUTOWINV Auto Write Event Polarity Inverted **/
#define NVMCTRL_SEC_EVCTRL_AUTOWINV		(1 << 1)
/** NVMCTRL_SEC_EVCTRL_AUTOWEI Auto Write Event Enable **/
#define NVMCTRL_SEC_EVCTRL_AUTOWEI		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** NVMCTRL_SEC_INTENCLR_NSCHK NS configuration change detected Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_NSCHK		(1 << 5)
/** NVMCTRL_SEC_INTENCLR_KEYE Key Write Error Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_KEYE		(1 << 4)
/** NVMCTRL_SEC_INTENCLR_NVME NVM Error Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_NVME		(1 << 3)
/** NVMCTRL_SEC_INTENCLR_LOCKE Lock Error Status Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_LOCKE		(1 << 2)
/** NVMCTRL_SEC_INTENCLR_PROGE Programming Error Status Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_PROGE		(1 << 1)
/** NVMCTRL_SEC_INTENCLR_DONE NVM Done Interrupt Clear **/
#define NVMCTRL_SEC_INTENCLR_DONE		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_intenset INTENSET Interrupt Enable Set
@{*/

/** NVMCTRL_SEC_INTENSET_NSCHK NS configuration change detected Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_NSCHK		(1 << 5)
/** NVMCTRL_SEC_INTENSET_KEYE Key Write Error Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_KEYE		(1 << 4)
/** NVMCTRL_SEC_INTENSET_NVME NVM Error Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_NVME		(1 << 3)
/** NVMCTRL_SEC_INTENSET_LOCKE Lock Error Status Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_LOCKE		(1 << 2)
/** NVMCTRL_SEC_INTENSET_PROGE Programming Error Status Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_PROGE		(1 << 1)
/** NVMCTRL_SEC_INTENSET_DONE NVM Done Interrupt Enable **/
#define NVMCTRL_SEC_INTENSET_DONE		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** NVMCTRL_SEC_INTFLAG_NSCHK NS configuration change detected **/
#define NVMCTRL_SEC_INTFLAG_NSCHK		(1 << 5)
/** NVMCTRL_SEC_INTFLAG_KEYE KEY Write Error **/
#define NVMCTRL_SEC_INTFLAG_KEYE		(1 << 4)
/** NVMCTRL_SEC_INTFLAG_NVME NVM Error **/
#define NVMCTRL_SEC_INTFLAG_NVME		(1 << 3)
/** NVMCTRL_SEC_INTFLAG_LOCKE Lock Error Status **/
#define NVMCTRL_SEC_INTFLAG_LOCKE		(1 << 2)
/** NVMCTRL_SEC_INTFLAG_PROGE Programming Error Status **/
#define NVMCTRL_SEC_INTFLAG_PROGE		(1 << 1)
/** NVMCTRL_SEC_INTFLAG_DONE NVM Done **/
#define NVMCTRL_SEC_INTFLAG_DONE		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_status STATUS Status
@{*/


#define NVMCTRL_SEC_STATUS_DALFUSE_SHIFT		3
#define NVMCTRL_SEC_STATUS_DALFUSE_MASK		0x03
/** @defgroup nvmctrl_sec_status_dalfuse DALFUSE Debug Access Level Fuse
@{*/
/**@}*/

/** NVMCTRL_SEC_STATUS_READY NVM Ready **/
#define NVMCTRL_SEC_STATUS_READY		(1 << 2)
/** NVMCTRL_SEC_STATUS_LOAD NVM Page Buffer Active Loading **/
#define NVMCTRL_SEC_STATUS_LOAD		(1 << 1)
/** NVMCTRL_SEC_STATUS_PRM Power Reduction Mode **/
#define NVMCTRL_SEC_STATUS_PRM		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_addr ADDR Address
@{*/


#define NVMCTRL_SEC_ADDR_ARRAY_SHIFT		22
#define NVMCTRL_SEC_ADDR_ARRAY_MASK		0x03
/** @defgroup nvmctrl_sec_addr_array ARRAY Array Select
@{*/
/**@}*/


#define NVMCTRL_SEC_ADDR_AOFFSET_SHIFT		0
#define NVMCTRL_SEC_ADDR_AOFFSET_MASK		0xffff
/** @defgroup nvmctrl_sec_addr_aoffset AOFFSET NVM Address Offset In The Selected Array
@{*/
/**@}*/


/**@}*/

/** @defgroup nvmctrl_sec_sulck SULCK Secure Unlock Register
@{*/


#define NVMCTRL_SEC_SULCK_SLKEY_SHIFT		8
#define NVMCTRL_SEC_SULCK_SLKEY_MASK		0xff
/** @defgroup nvmctrl_sec_sulck_slkey SLKEY Write Key
@{*/
/**@}*/

/** NVMCTRL_SEC_SULCK_DS Data Secure Region **/
#define NVMCTRL_SEC_SULCK_DS		(1 << 2)
/** NVMCTRL_SEC_SULCK_AS Secure Application Region **/
#define NVMCTRL_SEC_SULCK_AS		(1 << 1)
/** NVMCTRL_SEC_SULCK_BS Secure Boot Region **/
#define NVMCTRL_SEC_SULCK_BS		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_nsulck NSULCK Non-Secure Unlock Register
@{*/


#define NVMCTRL_SEC_NSULCK_NSLKEY_SHIFT		8
#define NVMCTRL_SEC_NSULCK_NSLKEY_MASK		0xff
/** @defgroup nvmctrl_sec_nsulck_nslkey NSLKEY Write Key
@{*/
/**@}*/

/** NVMCTRL_SEC_NSULCK_DNS Non-Secure Data Region **/
#define NVMCTRL_SEC_NSULCK_DNS		(1 << 2)
/** NVMCTRL_SEC_NSULCK_ANS Non-Secure Application Region **/
#define NVMCTRL_SEC_NSULCK_ANS		(1 << 1)
/** NVMCTRL_SEC_NSULCK_BNS Non-Secure Boot Region **/
#define NVMCTRL_SEC_NSULCK_BNS		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_param PARAM NVM Parameter
@{*/


#define NVMCTRL_SEC_PARAM_DFLASHP_SHIFT		20
#define NVMCTRL_SEC_PARAM_DFLASHP_MASK		0xfff
/** @defgroup nvmctrl_sec_param_dflashp DFLASHP DATAFLASH Pages
@{*/
/**@}*/


#define NVMCTRL_SEC_PARAM_PSZ_SHIFT		16
#define NVMCTRL_SEC_PARAM_PSZ_MASK		0x07
/** @defgroup nvmctrl_sec_param_psz PSZ Page Size
@{*/
/**@}*/


#define NVMCTRL_SEC_PARAM_FLASHP_SHIFT		0
#define NVMCTRL_SEC_PARAM_FLASHP_MASK		0xffff
/** @defgroup nvmctrl_sec_param_flashp FLASHP FLASH Pages
@{*/
/**@}*/


/**@}*/

/** @defgroup nvmctrl_sec_dscc DSCC Data Scramble Configuration
@{*/


#define NVMCTRL_SEC_DSCC_DSCKEY_SHIFT		0
#define NVMCTRL_SEC_DSCC_DSCKEY_MASK		0x3fffffff
/** @defgroup nvmctrl_sec_dscc_dsckey DSCKEY Data Scramble Key
@{*/
/**@}*/


/**@}*/

/** @defgroup nvmctrl_sec_secctrl SECCTRL Security Control
@{*/


#define NVMCTRL_SEC_SECCTRL_KEY_SHIFT		24
#define NVMCTRL_SEC_SECCTRL_KEY_MASK		0xff
/** @defgroup nvmctrl_sec_secctrl_key KEY Write Key
@{*/
/**@}*/


#define NVMCTRL_SEC_SECCTRL_TEROW_SHIFT		8
#define NVMCTRL_SEC_SECCTRL_TEROW_MASK		0x07
/** @defgroup nvmctrl_sec_secctrl_terow TEROW Tamper Rease Row
@{*/
/**@}*/

/** NVMCTRL_SEC_SECCTRL_DXN Data Flash is eXecute Never **/
#define NVMCTRL_SEC_SECCTRL_DXN		(1 << 6)
/** NVMCTRL_SEC_SECCTRL_DSCEN Data Scramble Enable **/
#define NVMCTRL_SEC_SECCTRL_DSCEN		(1 << 3)
/** NVMCTRL_SEC_SECCTRL_SILACC Silent Access **/
#define NVMCTRL_SEC_SECCTRL_SILACC		(1 << 2)
/** NVMCTRL_SEC_SECCTRL_TAMPEEN Tamper Erase Enable **/
#define NVMCTRL_SEC_SECCTRL_TAMPEEN		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_scfgb SCFGB Secure Boot Configuration
@{*/

/** NVMCTRL_SEC_SCFGB_BCWEN Boot Configuration Row Write Enable **/
#define NVMCTRL_SEC_SCFGB_BCWEN		(1 << 1)
/** NVMCTRL_SEC_SCFGB_BCREN Boot Configuration Row Read Enable **/
#define NVMCTRL_SEC_SCFGB_BCREN		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_scfgad SCFGAD Secure Application and Data Configuration
@{*/

/** NVMCTRL_SEC_SCFGAD_URWEN User Row Write Enable **/
#define NVMCTRL_SEC_SCFGAD_URWEN		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_nonsec NONSEC Non-secure Write Enable
@{*/

/** NVMCTRL_SEC_NONSEC_WRITE Non-secure APB alias write enable, non-secure AHB writes to non-secure regions enable **/
#define NVMCTRL_SEC_NONSEC_WRITE		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_sec_nschk NSCHK Non-secure Write Reference Value
@{*/

/** NVMCTRL_SEC_NSCHK_WRITE Reference value to be checked against NONSEC.WRITE **/
#define NVMCTRL_SEC_NSCHK_WRITE		(1 << 0)

/**@}*/

#pragma once 

/* --- SDRAMC: SDRAM Controller ------------------------------------- */

/** @defgroup sdramc_registers SDRAM Controller Register
@{*/

/** SDRAMC_SDRAMC_MR SDRAMC Mode Register **/
#define SDRAMC_SDRAMC_MR			MMIO32(SDRAMC_BASE + 0x00)
/** SDRAMC_SDRAMC_TR SDRAMC Refresh Timer Register **/
#define SDRAMC_SDRAMC_TR			MMIO32(SDRAMC_BASE + 0x04)
/** SDRAMC_SDRAMC_CR SDRAMC Configuration Register **/
#define SDRAMC_SDRAMC_CR			MMIO32(SDRAMC_BASE + 0x08)
/** SDRAMC_SDRAMC_LPR SDRAMC Low Power Register **/
#define SDRAMC_SDRAMC_LPR			MMIO32(SDRAMC_BASE + 0x10)
/** SDRAMC_SDRAMC_IER SDRAMC Interrupt Enable Register **/
#define SDRAMC_SDRAMC_IER			MMIO32(SDRAMC_BASE + 0x14)
/** SDRAMC_SDRAMC_IDR SDRAMC Interrupt Disable Register **/
#define SDRAMC_SDRAMC_IDR			MMIO32(SDRAMC_BASE + 0x18)
/** SDRAMC_SDRAMC_IMR SDRAMC Interrupt Mask Register **/
#define SDRAMC_SDRAMC_IMR			MMIO32(SDRAMC_BASE + 0x1c)
/** SDRAMC_SDRAMC_ISR SDRAMC Interrupt Status Register **/
#define SDRAMC_SDRAMC_ISR			MMIO32(SDRAMC_BASE + 0x20)
/** SDRAMC_SDRAMC_MDR SDRAMC Memory Device Register **/
#define SDRAMC_SDRAMC_MDR			MMIO32(SDRAMC_BASE + 0x24)
/** SDRAMC_SDRAMC_CFR1 SDRAMC Configuration Register 1 **/
#define SDRAMC_SDRAMC_CFR1			MMIO32(SDRAMC_BASE + 0x28)
/** SDRAMC_SDRAMC_OCMS SDRAMC OCMS Register **/
#define SDRAMC_SDRAMC_OCMS			MMIO32(SDRAMC_BASE + 0x2c)
/** SDRAMC_SDRAMC_OCMS_KEY1 SDRAMC OCMS KEY1 Register **/
#define SDRAMC_SDRAMC_OCMS_KEY1			MMIO32(SDRAMC_BASE + 0x30)
/** SDRAMC_SDRAMC_OCMS_KEY2 SDRAMC OCMS KEY2 Register **/
#define SDRAMC_SDRAMC_OCMS_KEY2			MMIO32(SDRAMC_BASE + 0x34)
/** SDRAMC_SDRAMC_VERSION SDRAMC Version Register **/
#define SDRAMC_SDRAMC_VERSION			MMIO32(SDRAMC_BASE + 0xfc)

/**@}*/


/** @defgroup sdramc_sdramc_mr SDRAMCMR SDRAMC Mode Register
@{*/


#define SDRAMC_SDRAMC_MR_MODE_SHIFT		0
#define SDRAMC_SDRAMC_MR_MODE_MASK		0x07
/** @defgroup sdramc_sdramc_mr_mode MODE SDRAMC Command Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_tr SDRAMCTR SDRAMC Refresh Timer Register
@{*/


#define SDRAMC_SDRAMC_TR_COUNT_SHIFT		0
#define SDRAMC_SDRAMC_TR_COUNT_MASK		0xfff
/** @defgroup sdramc_sdramc_tr_count COUNT SDRAMC Refresh Timer Count
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_cr SDRAMCCR SDRAMC Configuration Register
@{*/


#define SDRAMC_SDRAMC_CR_TXSR_SHIFT		28
#define SDRAMC_SDRAMC_CR_TXSR_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_txsr TXSR Exit Self-Refresh to Active Delay
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_TRAS_SHIFT		24
#define SDRAMC_SDRAMC_CR_TRAS_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_tras TRAS Active to Precharge Delay
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_TRCD_SHIFT		20
#define SDRAMC_SDRAMC_CR_TRCD_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_trcd TRCD Row to Column Delay
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_TRP_SHIFT		16
#define SDRAMC_SDRAMC_CR_TRP_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_trp TRP Row Precharge Delay
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_TRC_TRFC_SHIFT		12
#define SDRAMC_SDRAMC_CR_TRC_TRFC_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_trc_trfc TRCTRFC Row Cycle Delay and Row Refresh Cycle
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_TWR_SHIFT		8
#define SDRAMC_SDRAMC_CR_TWR_MASK		0x0f
/** @defgroup sdramc_sdramc_cr_twr TWR Write Recovery Delay
@{*/
/**@}*/

/** SDRAMC_SDRAMC_CR_DBW Data Bus Width **/
#define SDRAMC_SDRAMC_CR_DBW		(1 << 7)

#define SDRAMC_SDRAMC_CR_CAS_SHIFT		5
#define SDRAMC_SDRAMC_CR_CAS_MASK		0x03
/** @defgroup sdramc_sdramc_cr_cas CAS CAS Latency
@{*/
/**@}*/

/** SDRAMC_SDRAMC_CR_NB Number of Banks **/
#define SDRAMC_SDRAMC_CR_NB		(1 << 4)

#define SDRAMC_SDRAMC_CR_NR_SHIFT		2
#define SDRAMC_SDRAMC_CR_NR_MASK		0x03
/** @defgroup sdramc_sdramc_cr_nr NR Number of Row Bits
@{*/
/**@}*/


#define SDRAMC_SDRAMC_CR_NC_SHIFT		0
#define SDRAMC_SDRAMC_CR_NC_MASK		0x03
/** @defgroup sdramc_sdramc_cr_nc NC Number of Column Bits
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_lpr SDRAMCLPR SDRAMC Low Power Register
@{*/


#define SDRAMC_SDRAMC_LPR_TIMEOUT_SHIFT		12
#define SDRAMC_SDRAMC_LPR_TIMEOUT_MASK		0x03
/** @defgroup sdramc_sdramc_lpr_timeout TIMEOUT Time to Define When Low-power Mode Is Enabled
@{*/
/**@}*/


#define SDRAMC_SDRAMC_LPR_DS_SHIFT		10
#define SDRAMC_SDRAMC_LPR_DS_MASK		0x03
/** @defgroup sdramc_sdramc_lpr_ds DS Drive Strength (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_SDRAMC_LPR_TCSR_SHIFT		8
#define SDRAMC_SDRAMC_LPR_TCSR_MASK		0x03
/** @defgroup sdramc_sdramc_lpr_tcsr TCSR Temperature Compensated Self-Refresh (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_SDRAMC_LPR_PASR_SHIFT		4
#define SDRAMC_SDRAMC_LPR_PASR_MASK		0x07
/** @defgroup sdramc_sdramc_lpr_pasr PASR Partial Array Self-refresh (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_SDRAMC_LPR_LPCB_SHIFT		0
#define SDRAMC_SDRAMC_LPR_LPCB_MASK		0x03
/** @defgroup sdramc_sdramc_lpr_lpcb LPCB Low-power Configuration Bits
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_ier SDRAMCIER SDRAMC Interrupt Enable Register
@{*/

/** SDRAMC_SDRAMC_IER_RES Refresh Error Interrupt Enable **/
#define SDRAMC_SDRAMC_IER_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_sdramc_idr SDRAMCIDR SDRAMC Interrupt Disable Register
@{*/

/** SDRAMC_SDRAMC_IDR_RES Refresh Error Interrupt Disable **/
#define SDRAMC_SDRAMC_IDR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_sdramc_imr SDRAMCIMR SDRAMC Interrupt Mask Register
@{*/

/** SDRAMC_SDRAMC_IMR_RES Refresh Error Interrupt Mask **/
#define SDRAMC_SDRAMC_IMR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_sdramc_isr SDRAMCISR SDRAMC Interrupt Status Register
@{*/

/** SDRAMC_SDRAMC_ISR_RES Refresh Error Status (cleared on read) **/
#define SDRAMC_SDRAMC_ISR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_sdramc_mdr SDRAMCMDR SDRAMC Memory Device Register
@{*/


#define SDRAMC_SDRAMC_MDR_MD_SHIFT		0
#define SDRAMC_SDRAMC_MDR_MD_MASK		0x03
/** @defgroup sdramc_sdramc_mdr_md MD Memory Device Type
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_cfr1 SDRAMCCFR1 SDRAMC Configuration Register 1
@{*/

/** SDRAMC_SDRAMC_CFR1_UNAL Support Unaligned Access **/
#define SDRAMC_SDRAMC_CFR1_UNAL		(1 << 8)

#define SDRAMC_SDRAMC_CFR1_TMRD_SHIFT		0
#define SDRAMC_SDRAMC_CFR1_TMRD_MASK		0x0f
/** @defgroup sdramc_sdramc_cfr1_tmrd TMRD Load Mode Register Command to Active or Refresh Command
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_ocms SDRAMCOCMS SDRAMC OCMS Register
@{*/

/** SDRAMC_SDRAMC_OCMS_SDR_SE SDRAM Memory Controller Scrambling Enable **/
#define SDRAMC_SDRAMC_OCMS_SDR_SE		(1 << 0)

/**@}*/

/** @defgroup sdramc_sdramc_ocms_key1 SDRAMCOCMSKEY1 SDRAMC OCMS KEY1 Register
@{*/


#define SDRAMC_SDRAMC_OCMS_KEY1_KEY1_SHIFT		0
#define SDRAMC_SDRAMC_OCMS_KEY1_KEY1_MASK		0xffffffff
/** @defgroup sdramc_sdramc_ocms_key1_key1 KEY1 Off-chip Memory Scrambling (OCMS) Key Part 1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_ocms_key2 SDRAMCOCMSKEY2 SDRAMC OCMS KEY2 Register
@{*/


#define SDRAMC_SDRAMC_OCMS_KEY2_KEY2_SHIFT		0
#define SDRAMC_SDRAMC_OCMS_KEY2_KEY2_MASK		0xffffffff
/** @defgroup sdramc_sdramc_ocms_key2_key2 KEY2 Off-chip Memory Scrambling (OCMS) Key Part 2
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_sdramc_version SDRAMCVERSION SDRAMC Version Register
@{*/


#define SDRAMC_SDRAMC_VERSION_MFN_SHIFT		16
#define SDRAMC_SDRAMC_VERSION_MFN_MASK		0x07
/** @defgroup sdramc_sdramc_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define SDRAMC_SDRAMC_VERSION_VERSION_SHIFT		0
#define SDRAMC_SDRAMC_VERSION_VERSION_MASK		0xfff
/** @defgroup sdramc_sdramc_version_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

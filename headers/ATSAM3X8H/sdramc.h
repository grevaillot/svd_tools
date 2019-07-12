#pragma once 

/* --- SDRAMC: SDRAM Controller ------------------------------------- */

/** @defgroup sdramc_registers SDRAM Controller Register
@{*/

/** SDRAMC_MR SDRAMC Mode Register **/
#define SDRAMC_MR			MMIO32(SDRAMC_BASE + 0x00)
/** SDRAMC_TR SDRAMC Refresh Timer Register **/
#define SDRAMC_TR			MMIO32(SDRAMC_BASE + 0x04)
/** SDRAMC_CR SDRAMC Configuration Register **/
#define SDRAMC_CR			MMIO32(SDRAMC_BASE + 0x08)
/** SDRAMC_LPR SDRAMC Low Power Register **/
#define SDRAMC_LPR			MMIO32(SDRAMC_BASE + 0x10)
/** SDRAMC_IER SDRAMC Interrupt Enable Register **/
#define SDRAMC_IER			MMIO32(SDRAMC_BASE + 0x14)
/** SDRAMC_IDR SDRAMC Interrupt Disable Register **/
#define SDRAMC_IDR			MMIO32(SDRAMC_BASE + 0x18)
/** SDRAMC_IMR SDRAMC Interrupt Mask Register **/
#define SDRAMC_IMR			MMIO32(SDRAMC_BASE + 0x1c)
/** SDRAMC_ISR SDRAMC Interrupt Status Register **/
#define SDRAMC_ISR			MMIO32(SDRAMC_BASE + 0x20)
/** SDRAMC_MDR SDRAMC Memory Device Register **/
#define SDRAMC_MDR			MMIO32(SDRAMC_BASE + 0x24)
/** SDRAMC_CR1 SDRAMC Configuration Register 1 **/
#define SDRAMC_CR1			MMIO32(SDRAMC_BASE + 0x28)
/** SDRAMC_OCMS SDRAMC OCMS Register 1 **/
#define SDRAMC_OCMS			MMIO32(SDRAMC_BASE + 0x2c)

/**@}*/


/** @defgroup sdramc_mr MR SDRAMC Mode Register
@{*/


#define SDRAMC_MR_MODE_SHIFT		0
#define SDRAMC_MR_MODE_MASK		0x07
/** @defgroup sdramc_mr_mode MODE SDRAMC Command Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_tr TR SDRAMC Refresh Timer Register
@{*/


#define SDRAMC_TR_COUNT_SHIFT		0
#define SDRAMC_TR_COUNT_MASK		0xfff
/** @defgroup sdramc_tr_count COUNT SDRAMC Refresh Timer Count
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_cr CR SDRAMC Configuration Register
@{*/


#define SDRAMC_CR_TXSR_SHIFT		28
#define SDRAMC_CR_TXSR_MASK		0x0f
/** @defgroup sdramc_cr_txsr TXSR Exit Self Refresh to Active Delay
@{*/
/**@}*/


#define SDRAMC_CR_TRAS_SHIFT		24
#define SDRAMC_CR_TRAS_MASK		0x0f
/** @defgroup sdramc_cr_tras TRAS Active to Precharge Delay
@{*/
/**@}*/


#define SDRAMC_CR_TRCD_SHIFT		20
#define SDRAMC_CR_TRCD_MASK		0x0f
/** @defgroup sdramc_cr_trcd TRCD Row to Column Delay
@{*/
/**@}*/


#define SDRAMC_CR_TRP_SHIFT		16
#define SDRAMC_CR_TRP_MASK		0x0f
/** @defgroup sdramc_cr_trp TRP Row Precharge Delay
@{*/
/**@}*/


#define SDRAMC_CR_TRC_TRFC_SHIFT		12
#define SDRAMC_CR_TRC_TRFC_MASK		0x0f
/** @defgroup sdramc_cr_trc_trfc TRCTRFC Row Cycle Delay and Row Refresh Cycle
@{*/
/**@}*/


#define SDRAMC_CR_TWR_SHIFT		8
#define SDRAMC_CR_TWR_MASK		0x0f
/** @defgroup sdramc_cr_twr TWR Write Recovery Delay
@{*/
/**@}*/

/** SDRAMC_CR_DBW Data Bus Width **/
#define SDRAMC_CR_DBW		(1 << 7)

#define SDRAMC_CR_CAS_SHIFT		5
#define SDRAMC_CR_CAS_MASK		0x03
/** @defgroup sdramc_cr_cas CAS CAS Latency
@{*/
/**@}*/

/** SDRAMC_CR_NB Number of Banks **/
#define SDRAMC_CR_NB		(1 << 4)

#define SDRAMC_CR_NR_SHIFT		2
#define SDRAMC_CR_NR_MASK		0x03
/** @defgroup sdramc_cr_nr NR Number of Row Bits
@{*/
/**@}*/


#define SDRAMC_CR_NC_SHIFT		0
#define SDRAMC_CR_NC_MASK		0x03
/** @defgroup sdramc_cr_nc NC Number of Column Bits
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_lpr LPR SDRAMC Low Power Register
@{*/


#define SDRAMC_LPR_TIMEOUT_SHIFT		12
#define SDRAMC_LPR_TIMEOUT_MASK		0x03
/** @defgroup sdramc_lpr_timeout TIMEOUT Time to define when low-power mode is enable
@{*/
/**@}*/


#define SDRAMC_LPR_DS_SHIFT		10
#define SDRAMC_LPR_DS_MASK		0x03
/** @defgroup sdramc_lpr_ds DS Drive Strength (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_LPR_TCSR_SHIFT		8
#define SDRAMC_LPR_TCSR_MASK		0x03
/** @defgroup sdramc_lpr_tcsr TCSR Temperature Compensated Self-Refresh (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_LPR_PASR_SHIFT		4
#define SDRAMC_LPR_PASR_MASK		0x07
/** @defgroup sdramc_lpr_pasr PASR Partial Array Self-refresh (only for low-power SDRAM)
@{*/
/**@}*/


#define SDRAMC_LPR_LPCB_SHIFT		0
#define SDRAMC_LPR_LPCB_MASK		0x03
/** @defgroup sdramc_lpr_lpcb LPCB Low-power Configuration Bits
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_ier IER SDRAMC Interrupt Enable Register
@{*/

/** SDRAMC_IER_RES Refresh Error Status **/
#define SDRAMC_IER_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_idr IDR SDRAMC Interrupt Disable Register
@{*/

/** SDRAMC_IDR_RES Refresh Error Status **/
#define SDRAMC_IDR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_imr IMR SDRAMC Interrupt Mask Register
@{*/

/** SDRAMC_IMR_RES Refresh Error Status **/
#define SDRAMC_IMR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_isr ISR SDRAMC Interrupt Status Register
@{*/

/** SDRAMC_ISR_RES Refresh Error Status **/
#define SDRAMC_ISR_RES		(1 << 0)

/**@}*/

/** @defgroup sdramc_mdr MDR SDRAMC Memory Device Register
@{*/


#define SDRAMC_MDR_MD_SHIFT		0
#define SDRAMC_MDR_MD_MASK		0x03
/** @defgroup sdramc_mdr_md MD Memory Device Type
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_cr1 CR1 SDRAMC Configuration Register 1
@{*/


#define SDRAMC_CR1_TXSR_SHIFT		28
#define SDRAMC_CR1_TXSR_MASK		0x0f
/** @defgroup sdramc_cr1_txsr TXSR Exit Self Refresh to Active Delay
@{*/
/**@}*/


#define SDRAMC_CR1_TRAS_SHIFT		24
#define SDRAMC_CR1_TRAS_MASK		0x0f
/** @defgroup sdramc_cr1_tras TRAS Active to Precharge Delay
@{*/
/**@}*/


#define SDRAMC_CR1_TRCD_SHIFT		20
#define SDRAMC_CR1_TRCD_MASK		0x0f
/** @defgroup sdramc_cr1_trcd TRCD Row to Column Delay
@{*/
/**@}*/


#define SDRAMC_CR1_TRP_SHIFT		16
#define SDRAMC_CR1_TRP_MASK		0x0f
/** @defgroup sdramc_cr1_trp TRP Row Precharge Delay
@{*/
/**@}*/


#define SDRAMC_CR1_TRC_TRFC_SHIFT		12
#define SDRAMC_CR1_TRC_TRFC_MASK		0x0f
/** @defgroup sdramc_cr1_trc_trfc TRCTRFC Row Cycle Delay and Row Refresh Cycle
@{*/
/**@}*/


#define SDRAMC_CR1_TWR_SHIFT		8
#define SDRAMC_CR1_TWR_MASK		0x0f
/** @defgroup sdramc_cr1_twr TWR Write Recovery Delay
@{*/
/**@}*/

/** SDRAMC_CR1_DBW Data Bus Width **/
#define SDRAMC_CR1_DBW		(1 << 7)

#define SDRAMC_CR1_CAS_SHIFT		5
#define SDRAMC_CR1_CAS_MASK		0x03
/** @defgroup sdramc_cr1_cas CAS CAS Latency
@{*/
/**@}*/

/** SDRAMC_CR1_NB Number of Banks **/
#define SDRAMC_CR1_NB		(1 << 4)

#define SDRAMC_CR1_NR_SHIFT		2
#define SDRAMC_CR1_NR_MASK		0x03
/** @defgroup sdramc_cr1_nr NR Number of Row Bits
@{*/
/**@}*/


#define SDRAMC_CR1_NC_SHIFT		0
#define SDRAMC_CR1_NC_MASK		0x03
/** @defgroup sdramc_cr1_nc NC Number of Column Bits
@{*/
/**@}*/


/**@}*/

/** @defgroup sdramc_ocms OCMS SDRAMC OCMS Register 1
@{*/

/** SDRAMC_OCMS_SDR_SE SDRAM Memory Controller Scrambling Enable **/
#define SDRAMC_OCMS_SDR_SE		(1 << 0)

/**@}*/

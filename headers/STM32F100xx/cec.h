#pragma once 

/* --- CEC: HDMI-CEC controller ------------------------------------- */

/** @defgroup cec_registers HDMI-CEC controller Register
@{*/

/** CEC_CFGR configuration register **/
#define CEC_CFGR			MMIO32(CEC_BASE + 0x00)
/** CEC_OAR CEC own address register **/
#define CEC_OAR			MMIO32(CEC_BASE + 0x04)
/** CEC_PRES Rx Data Register **/
#define CEC_PRES			MMIO32(CEC_BASE + 0x08)
/** CEC_ESR CEC error status register **/
#define CEC_ESR			MMIO32(CEC_BASE + 0x0c)
/** CEC_CSR CEC control and status register **/
#define CEC_CSR			MMIO32(CEC_BASE + 0x10)
/** CEC_TXD CEC Tx data register **/
#define CEC_TXD			MMIO32(CEC_BASE + 0x14)
/** CEC_RXD CEC Rx data register **/
#define CEC_RXD			MMIO32(CEC_BASE + 0x18)

/**@}*/


/** @defgroup cec_cfgr CFGR configuration register
@{*/

/** CEC_CFGR_BPEM Bit period error mode **/
#define CEC_CFGR_BPEM		(1 << 3)
/** CEC_CFGR_BTEM Bit timing error mode **/
#define CEC_CFGR_BTEM		(1 << 2)
/** CEC_CFGR_IE Interrupt enable **/
#define CEC_CFGR_IE		(1 << 1)
/** CEC_CFGR_PE Peripheral enable **/
#define CEC_CFGR_PE		(1 << 0)

/**@}*/

/** @defgroup cec_oar OAR CEC own address register
@{*/


#define CEC_OAR_OA_SHIFT		0
#define CEC_OAR_OA_MASK		0x0f
/** @defgroup cec_oar_oa OA Own address
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_pres PRES Rx Data Register
@{*/


#define CEC_PRES_PRESC_SHIFT		0
#define CEC_PRES_PRESC_MASK		0x3fff
/** @defgroup cec_pres_presc PRESC CEC Rx Data Register
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_esr ESR CEC error status register
@{*/

/** CEC_ESR_TBTFE Tx block transfer finished error **/
#define CEC_ESR_TBTFE		(1 << 6)
/** CEC_ESR_LINE Line error **/
#define CEC_ESR_LINE		(1 << 5)
/** CEC_ESR_ACKE Block acknowledge error **/
#define CEC_ESR_ACKE		(1 << 4)
/** CEC_ESR_SBE Start bit error **/
#define CEC_ESR_SBE		(1 << 3)
/** CEC_ESR_RBTFE Rx block transfer finished error **/
#define CEC_ESR_RBTFE		(1 << 2)
/** CEC_ESR_BPE Bit period error **/
#define CEC_ESR_BPE		(1 << 1)
/** CEC_ESR_BTE Bit timing error **/
#define CEC_ESR_BTE		(1 << 0)

/**@}*/

/** @defgroup cec_csr CSR CEC control and status register
@{*/

/** CEC_CSR_RBTF Rx byte/block transfer finished **/
#define CEC_CSR_RBTF		(1 << 7)
/** CEC_CSR_RERR Rx error **/
#define CEC_CSR_RERR		(1 << 6)
/** CEC_CSR_REOM Rx end of message **/
#define CEC_CSR_REOM		(1 << 5)
/** CEC_CSR_RSOM Rx start of message **/
#define CEC_CSR_RSOM		(1 << 4)
/** CEC_CSR_TBTRF Tx byte transfer request or block transfer finished **/
#define CEC_CSR_TBTRF		(1 << 3)
/** CEC_CSR_TERR Tx error **/
#define CEC_CSR_TERR		(1 << 2)
/** CEC_CSR_TEOM Tx end of message **/
#define CEC_CSR_TEOM		(1 << 1)
/** CEC_CSR_TSOM Tx start of message **/
#define CEC_CSR_TSOM		(1 << 0)

/**@}*/

/** @defgroup cec_txd TXD CEC Tx data register
@{*/


#define CEC_TXD_TXD_SHIFT		0
#define CEC_TXD_TXD_MASK		0xff
/** @defgroup cec_txd_txd TXD Tx Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup cec_rxd RXD CEC Rx data register
@{*/


#define CEC_RXD_RXD_SHIFT		0
#define CEC_RXD_RXD_MASK		0xff
/** @defgroup cec_rxd_rxd RXD Rx data
@{*/
/**@}*/


/**@}*/

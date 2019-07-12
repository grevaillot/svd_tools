#pragma once 

/* --- SSC: Synchronous Serial Controller --------------------------- */

/** @defgroup ssc_registers Synchronous Serial Controller Register
@{*/

/** SSC_SSC_CR Control Register **/
#define SSC_SSC_CR			MMIO32(SSC_BASE + 0x00)
/** SSC_SSC_CMR Clock Mode Register **/
#define SSC_SSC_CMR			MMIO32(SSC_BASE + 0x04)
/** SSC_SSC_RCMR Receive Clock Mode Register **/
#define SSC_SSC_RCMR			MMIO32(SSC_BASE + 0x10)
/** SSC_SSC_RFMR Receive Frame Mode Register **/
#define SSC_SSC_RFMR			MMIO32(SSC_BASE + 0x14)
/** SSC_SSC_TCMR Transmit Clock Mode Register **/
#define SSC_SSC_TCMR			MMIO32(SSC_BASE + 0x18)
/** SSC_SSC_TFMR Transmit Frame Mode Register **/
#define SSC_SSC_TFMR			MMIO32(SSC_BASE + 0x1c)
/** SSC_SSC_RHR Receive Holding Register **/
#define SSC_SSC_RHR			MMIO32(SSC_BASE + 0x20)
/** SSC_SSC_THR Transmit Holding Register **/
#define SSC_SSC_THR			MMIO32(SSC_BASE + 0x24)
/** SSC_SSC_RSHR Receive Sync. Holding Register **/
#define SSC_SSC_RSHR			MMIO32(SSC_BASE + 0x30)
/** SSC_SSC_TSHR Transmit Sync. Holding Register **/
#define SSC_SSC_TSHR			MMIO32(SSC_BASE + 0x34)
/** SSC_SSC_RC0R Receive Compare 0 Register **/
#define SSC_SSC_RC0R			MMIO32(SSC_BASE + 0x38)
/** SSC_SSC_RC1R Receive Compare 1 Register **/
#define SSC_SSC_RC1R			MMIO32(SSC_BASE + 0x3c)
/** SSC_SSC_SR Status Register **/
#define SSC_SSC_SR			MMIO32(SSC_BASE + 0x40)
/** SSC_SSC_IER Interrupt Enable Register **/
#define SSC_SSC_IER			MMIO32(SSC_BASE + 0x44)
/** SSC_SSC_IDR Interrupt Disable Register **/
#define SSC_SSC_IDR			MMIO32(SSC_BASE + 0x48)
/** SSC_SSC_IMR Interrupt Mask Register **/
#define SSC_SSC_IMR			MMIO32(SSC_BASE + 0x4c)
/** SSC_SSC_WPMR Write Protection Mode Register **/
#define SSC_SSC_WPMR			MMIO32(SSC_BASE + 0xe4)
/** SSC_SSC_WPSR Write Protection Status Register **/
#define SSC_SSC_WPSR			MMIO32(SSC_BASE + 0xe8)

/**@}*/


/** @defgroup ssc_ssc_cr SSCCR Control Register
@{*/

/** SSC_SSC_CR_SWRST Software Reset **/
#define SSC_SSC_CR_SWRST		(1 << 15)
/** SSC_SSC_CR_TXDIS Transmit Disable **/
#define SSC_SSC_CR_TXDIS		(1 << 9)
/** SSC_SSC_CR_TXEN Transmit Enable **/
#define SSC_SSC_CR_TXEN		(1 << 8)
/** SSC_SSC_CR_RXDIS Receive Disable **/
#define SSC_SSC_CR_RXDIS		(1 << 1)
/** SSC_SSC_CR_RXEN Receive Enable **/
#define SSC_SSC_CR_RXEN		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_cmr SSCCMR Clock Mode Register
@{*/


#define SSC_SSC_CMR_DIV_SHIFT		0
#define SSC_SSC_CMR_DIV_MASK		0xfff
/** @defgroup ssc_ssc_cmr_div DIV Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rcmr SSCRCMR Receive Clock Mode Register
@{*/


#define SSC_SSC_RCMR_PERIOD_SHIFT		24
#define SSC_SSC_RCMR_PERIOD_MASK		0xff
/** @defgroup ssc_ssc_rcmr_period PERIOD Receive Period Divider Selection
@{*/
/**@}*/


#define SSC_SSC_RCMR_STTDLY_SHIFT		16
#define SSC_SSC_RCMR_STTDLY_MASK		0xff
/** @defgroup ssc_ssc_rcmr_sttdly STTDLY Receive Start Delay
@{*/
/**@}*/

/** SSC_SSC_RCMR_STOP Receive Stop Selection **/
#define SSC_SSC_RCMR_STOP		(1 << 12)

#define SSC_SSC_RCMR_START_SHIFT		8
#define SSC_SSC_RCMR_START_MASK		0x0f
/** @defgroup ssc_ssc_rcmr_start START Receive Start Selection
@{*/
/**@}*/


#define SSC_SSC_RCMR_CKG_SHIFT		6
#define SSC_SSC_RCMR_CKG_MASK		0x03
/** @defgroup ssc_ssc_rcmr_ckg CKG Receive Clock Gating Selection
@{*/
/**@}*/

/** SSC_SSC_RCMR_CKI Receive Clock Inversion **/
#define SSC_SSC_RCMR_CKI		(1 << 5)

#define SSC_SSC_RCMR_CKO_SHIFT		2
#define SSC_SSC_RCMR_CKO_MASK		0x07
/** @defgroup ssc_ssc_rcmr_cko CKO Receive Clock Output Mode Selection
@{*/
/**@}*/


#define SSC_SSC_RCMR_CKS_SHIFT		0
#define SSC_SSC_RCMR_CKS_MASK		0x03
/** @defgroup ssc_ssc_rcmr_cks CKS Receive Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rfmr SSCRFMR Receive Frame Mode Register
@{*/


#define SSC_SSC_RFMR_FSLEN_EXT_SHIFT		28
#define SSC_SSC_RFMR_FSLEN_EXT_MASK		0x0f
/** @defgroup ssc_ssc_rfmr_fslen_ext FSLENEXT FSLEN Field Extension
@{*/
/**@}*/

/** SSC_SSC_RFMR_FSEDGE Frame Sync Edge Detection **/
#define SSC_SSC_RFMR_FSEDGE		(1 << 24)

#define SSC_SSC_RFMR_FSOS_SHIFT		20
#define SSC_SSC_RFMR_FSOS_MASK		0x07
/** @defgroup ssc_ssc_rfmr_fsos FSOS Receive Frame Sync Output Selection
@{*/
/**@}*/


#define SSC_SSC_RFMR_FSLEN_SHIFT		16
#define SSC_SSC_RFMR_FSLEN_MASK		0x0f
/** @defgroup ssc_ssc_rfmr_fslen FSLEN Receive Frame Sync Length
@{*/
/**@}*/


#define SSC_SSC_RFMR_DATNB_SHIFT		8
#define SSC_SSC_RFMR_DATNB_MASK		0x0f
/** @defgroup ssc_ssc_rfmr_datnb DATNB Data Number per Frame
@{*/
/**@}*/

/** SSC_SSC_RFMR_MSBF Most Significant Bit First **/
#define SSC_SSC_RFMR_MSBF		(1 << 7)
/** SSC_SSC_RFMR_LOOP Loop Mode **/
#define SSC_SSC_RFMR_LOOP		(1 << 5)

#define SSC_SSC_RFMR_DATLEN_SHIFT		0
#define SSC_SSC_RFMR_DATLEN_MASK		0x1f
/** @defgroup ssc_ssc_rfmr_datlen DATLEN Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_tcmr SSCTCMR Transmit Clock Mode Register
@{*/


#define SSC_SSC_TCMR_PERIOD_SHIFT		24
#define SSC_SSC_TCMR_PERIOD_MASK		0xff
/** @defgroup ssc_ssc_tcmr_period PERIOD Transmit Period Divider Selection
@{*/
/**@}*/


#define SSC_SSC_TCMR_STTDLY_SHIFT		16
#define SSC_SSC_TCMR_STTDLY_MASK		0xff
/** @defgroup ssc_ssc_tcmr_sttdly STTDLY Transmit Start Delay
@{*/
/**@}*/


#define SSC_SSC_TCMR_START_SHIFT		8
#define SSC_SSC_TCMR_START_MASK		0x0f
/** @defgroup ssc_ssc_tcmr_start START Transmit Start Selection
@{*/
/**@}*/


#define SSC_SSC_TCMR_CKG_SHIFT		6
#define SSC_SSC_TCMR_CKG_MASK		0x03
/** @defgroup ssc_ssc_tcmr_ckg CKG Transmit Clock Gating Selection
@{*/
/**@}*/

/** SSC_SSC_TCMR_CKI Transmit Clock Inversion **/
#define SSC_SSC_TCMR_CKI		(1 << 5)

#define SSC_SSC_TCMR_CKO_SHIFT		2
#define SSC_SSC_TCMR_CKO_MASK		0x07
/** @defgroup ssc_ssc_tcmr_cko CKO Transmit Clock Output Mode Selection
@{*/
/**@}*/


#define SSC_SSC_TCMR_CKS_SHIFT		0
#define SSC_SSC_TCMR_CKS_MASK		0x03
/** @defgroup ssc_ssc_tcmr_cks CKS Transmit Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_tfmr SSCTFMR Transmit Frame Mode Register
@{*/


#define SSC_SSC_TFMR_FSLEN_EXT_SHIFT		28
#define SSC_SSC_TFMR_FSLEN_EXT_MASK		0x0f
/** @defgroup ssc_ssc_tfmr_fslen_ext FSLENEXT FSLEN Field Extension
@{*/
/**@}*/

/** SSC_SSC_TFMR_FSEDGE Frame Sync Edge Detection **/
#define SSC_SSC_TFMR_FSEDGE		(1 << 24)
/** SSC_SSC_TFMR_FSDEN Frame Sync Data Enable **/
#define SSC_SSC_TFMR_FSDEN		(1 << 23)

#define SSC_SSC_TFMR_FSOS_SHIFT		20
#define SSC_SSC_TFMR_FSOS_MASK		0x07
/** @defgroup ssc_ssc_tfmr_fsos FSOS Transmit Frame Sync Output Selection
@{*/
/**@}*/


#define SSC_SSC_TFMR_FSLEN_SHIFT		16
#define SSC_SSC_TFMR_FSLEN_MASK		0x0f
/** @defgroup ssc_ssc_tfmr_fslen FSLEN Transmit Frame Sync Length
@{*/
/**@}*/


#define SSC_SSC_TFMR_DATNB_SHIFT		8
#define SSC_SSC_TFMR_DATNB_MASK		0x0f
/** @defgroup ssc_ssc_tfmr_datnb DATNB Data Number per Frame
@{*/
/**@}*/

/** SSC_SSC_TFMR_MSBF Most Significant Bit First **/
#define SSC_SSC_TFMR_MSBF		(1 << 7)
/** SSC_SSC_TFMR_DATDEF Data Default Value **/
#define SSC_SSC_TFMR_DATDEF		(1 << 5)

#define SSC_SSC_TFMR_DATLEN_SHIFT		0
#define SSC_SSC_TFMR_DATLEN_MASK		0x1f
/** @defgroup ssc_ssc_tfmr_datlen DATLEN Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rhr SSCRHR Receive Holding Register
@{*/


#define SSC_SSC_RHR_RDAT_SHIFT		0
#define SSC_SSC_RHR_RDAT_MASK		0xffffffff
/** @defgroup ssc_ssc_rhr_rdat RDAT Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_thr SSCTHR Transmit Holding Register
@{*/


#define SSC_SSC_THR_TDAT_SHIFT		0
#define SSC_SSC_THR_TDAT_MASK		0xffffffff
/** @defgroup ssc_ssc_thr_tdat TDAT Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rshr SSCRSHR Receive Sync. Holding Register
@{*/


#define SSC_SSC_RSHR_RSDAT_SHIFT		0
#define SSC_SSC_RSHR_RSDAT_MASK		0xffff
/** @defgroup ssc_ssc_rshr_rsdat RSDAT Receive Synchronization Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_tshr SSCTSHR Transmit Sync. Holding Register
@{*/


#define SSC_SSC_TSHR_TSDAT_SHIFT		0
#define SSC_SSC_TSHR_TSDAT_MASK		0xffff
/** @defgroup ssc_ssc_tshr_tsdat TSDAT Transmit Synchronization Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rc0r SSCRC0R Receive Compare 0 Register
@{*/


#define SSC_SSC_RC0R_CP0_SHIFT		0
#define SSC_SSC_RC0R_CP0_MASK		0xffff
/** @defgroup ssc_ssc_rc0r_cp0 CP0 Receive Compare Data 0
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_rc1r SSCRC1R Receive Compare 1 Register
@{*/


#define SSC_SSC_RC1R_CP1_SHIFT		0
#define SSC_SSC_RC1R_CP1_MASK		0xffff
/** @defgroup ssc_ssc_rc1r_cp1 CP1 Receive Compare Data 1
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ssc_sr SSCSR Status Register
@{*/

/** SSC_SSC_SR_RXEN Receive Enable **/
#define SSC_SSC_SR_RXEN		(1 << 17)
/** SSC_SSC_SR_TXEN Transmit Enable **/
#define SSC_SSC_SR_TXEN		(1 << 16)
/** SSC_SSC_SR_RXSYN Receive Sync **/
#define SSC_SSC_SR_RXSYN		(1 << 11)
/** SSC_SSC_SR_TXSYN Transmit Sync **/
#define SSC_SSC_SR_TXSYN		(1 << 10)
/** SSC_SSC_SR_CP1 Compare 1 **/
#define SSC_SSC_SR_CP1		(1 << 9)
/** SSC_SSC_SR_CP0 Compare 0 **/
#define SSC_SSC_SR_CP0		(1 << 8)
/** SSC_SSC_SR_OVRUN Receive Overrun **/
#define SSC_SSC_SR_OVRUN		(1 << 5)
/** SSC_SSC_SR_RXRDY Receive Ready **/
#define SSC_SSC_SR_RXRDY		(1 << 4)
/** SSC_SSC_SR_TXEMPTY Transmit Empty **/
#define SSC_SSC_SR_TXEMPTY		(1 << 1)
/** SSC_SSC_SR_TXRDY Transmit Ready **/
#define SSC_SSC_SR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_ier SSCIER Interrupt Enable Register
@{*/

/** SSC_SSC_IER_RXSYN Rx Sync Interrupt Enable **/
#define SSC_SSC_IER_RXSYN		(1 << 11)
/** SSC_SSC_IER_TXSYN Tx Sync Interrupt Enable **/
#define SSC_SSC_IER_TXSYN		(1 << 10)
/** SSC_SSC_IER_CP1 Compare 1 Interrupt Enable **/
#define SSC_SSC_IER_CP1		(1 << 9)
/** SSC_SSC_IER_CP0 Compare 0 Interrupt Enable **/
#define SSC_SSC_IER_CP0		(1 << 8)
/** SSC_SSC_IER_OVRUN Receive Overrun Interrupt Enable **/
#define SSC_SSC_IER_OVRUN		(1 << 5)
/** SSC_SSC_IER_RXRDY Receive Ready Interrupt Enable **/
#define SSC_SSC_IER_RXRDY		(1 << 4)
/** SSC_SSC_IER_TXEMPTY Transmit Empty Interrupt Enable **/
#define SSC_SSC_IER_TXEMPTY		(1 << 1)
/** SSC_SSC_IER_TXRDY Transmit Ready Interrupt Enable **/
#define SSC_SSC_IER_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_idr SSCIDR Interrupt Disable Register
@{*/

/** SSC_SSC_IDR_RXSYN Rx Sync Interrupt Enable **/
#define SSC_SSC_IDR_RXSYN		(1 << 11)
/** SSC_SSC_IDR_TXSYN Tx Sync Interrupt Enable **/
#define SSC_SSC_IDR_TXSYN		(1 << 10)
/** SSC_SSC_IDR_CP1 Compare 1 Interrupt Disable **/
#define SSC_SSC_IDR_CP1		(1 << 9)
/** SSC_SSC_IDR_CP0 Compare 0 Interrupt Disable **/
#define SSC_SSC_IDR_CP0		(1 << 8)
/** SSC_SSC_IDR_OVRUN Receive Overrun Interrupt Disable **/
#define SSC_SSC_IDR_OVRUN		(1 << 5)
/** SSC_SSC_IDR_RXRDY Receive Ready Interrupt Disable **/
#define SSC_SSC_IDR_RXRDY		(1 << 4)
/** SSC_SSC_IDR_TXEMPTY Transmit Empty Interrupt Disable **/
#define SSC_SSC_IDR_TXEMPTY		(1 << 1)
/** SSC_SSC_IDR_TXRDY Transmit Ready Interrupt Disable **/
#define SSC_SSC_IDR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_imr SSCIMR Interrupt Mask Register
@{*/

/** SSC_SSC_IMR_RXSYN Rx Sync Interrupt Mask **/
#define SSC_SSC_IMR_RXSYN		(1 << 11)
/** SSC_SSC_IMR_TXSYN Tx Sync Interrupt Mask **/
#define SSC_SSC_IMR_TXSYN		(1 << 10)
/** SSC_SSC_IMR_CP1 Compare 1 Interrupt Mask **/
#define SSC_SSC_IMR_CP1		(1 << 9)
/** SSC_SSC_IMR_CP0 Compare 0 Interrupt Mask **/
#define SSC_SSC_IMR_CP0		(1 << 8)
/** SSC_SSC_IMR_OVRUN Receive Overrun Interrupt Mask **/
#define SSC_SSC_IMR_OVRUN		(1 << 5)
/** SSC_SSC_IMR_RXRDY Receive Ready Interrupt Mask **/
#define SSC_SSC_IMR_RXRDY		(1 << 4)
/** SSC_SSC_IMR_TXEMPTY Transmit Empty Interrupt Mask **/
#define SSC_SSC_IMR_TXEMPTY		(1 << 1)
/** SSC_SSC_IMR_TXRDY Transmit Ready Interrupt Mask **/
#define SSC_SSC_IMR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_wpmr SSCWPMR Write Protection Mode Register
@{*/


#define SSC_SSC_WPMR_WPKEY_SHIFT		8
#define SSC_SSC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup ssc_ssc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** SSC_SSC_WPMR_WPEN Write Protection Enable **/
#define SSC_SSC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup ssc_ssc_wpsr SSCWPSR Write Protection Status Register
@{*/


#define SSC_SSC_WPSR_WPVSRC_SHIFT		8
#define SSC_SSC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup ssc_ssc_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** SSC_SSC_WPSR_WPVS Write Protection Violation Status **/
#define SSC_SSC_WPSR_WPVS		(1 << 0)

/**@}*/

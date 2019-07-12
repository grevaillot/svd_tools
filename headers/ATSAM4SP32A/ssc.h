#pragma once 

/* --- SSC: Synchronous Serial Controller --------------------------- */

/** @defgroup ssc_registers Synchronous Serial Controller Register
@{*/

/** SSC_CR Control Register **/
#define SSC_CR			MMIO32(SSC_BASE + 0x00)
/** SSC_CMR Clock Mode Register **/
#define SSC_CMR			MMIO32(SSC_BASE + 0x04)
/** SSC_RCMR Receive Clock Mode Register **/
#define SSC_RCMR			MMIO32(SSC_BASE + 0x10)
/** SSC_RFMR Receive Frame Mode Register **/
#define SSC_RFMR			MMIO32(SSC_BASE + 0x14)
/** SSC_TCMR Transmit Clock Mode Register **/
#define SSC_TCMR			MMIO32(SSC_BASE + 0x18)
/** SSC_TFMR Transmit Frame Mode Register **/
#define SSC_TFMR			MMIO32(SSC_BASE + 0x1c)
/** SSC_RHR Receive Holding Register **/
#define SSC_RHR			MMIO32(SSC_BASE + 0x20)
/** SSC_THR Transmit Holding Register **/
#define SSC_THR			MMIO32(SSC_BASE + 0x24)
/** SSC_RSHR Receive Sync. Holding Register **/
#define SSC_RSHR			MMIO32(SSC_BASE + 0x30)
/** SSC_TSHR Transmit Sync. Holding Register **/
#define SSC_TSHR			MMIO32(SSC_BASE + 0x34)
/** SSC_RC0R Receive Compare 0 Register **/
#define SSC_RC0R			MMIO32(SSC_BASE + 0x38)
/** SSC_RC1R Receive Compare 1 Register **/
#define SSC_RC1R			MMIO32(SSC_BASE + 0x3c)
/** SSC_SR Status Register **/
#define SSC_SR			MMIO32(SSC_BASE + 0x40)
/** SSC_IER Interrupt Enable Register **/
#define SSC_IER			MMIO32(SSC_BASE + 0x44)
/** SSC_IDR Interrupt Disable Register **/
#define SSC_IDR			MMIO32(SSC_BASE + 0x48)
/** SSC_IMR Interrupt Mask Register **/
#define SSC_IMR			MMIO32(SSC_BASE + 0x4c)
/** SSC_WPMR Write Protect Mode Register **/
#define SSC_WPMR			MMIO32(SSC_BASE + 0xe4)
/** SSC_WPSR Write Protect Status Register **/
#define SSC_WPSR			MMIO32(SSC_BASE + 0xe8)
/** SSC_RPR Receive Pointer Register **/
#define SSC_RPR			MMIO32(SSC_BASE + 0x100)
/** SSC_RCR Receive Counter Register **/
#define SSC_RCR			MMIO32(SSC_BASE + 0x104)
/** SSC_TPR Transmit Pointer Register **/
#define SSC_TPR			MMIO32(SSC_BASE + 0x108)
/** SSC_TCR Transmit Counter Register **/
#define SSC_TCR			MMIO32(SSC_BASE + 0x10c)
/** SSC_RNPR Receive Next Pointer Register **/
#define SSC_RNPR			MMIO32(SSC_BASE + 0x110)
/** SSC_RNCR Receive Next Counter Register **/
#define SSC_RNCR			MMIO32(SSC_BASE + 0x114)
/** SSC_TNPR Transmit Next Pointer Register **/
#define SSC_TNPR			MMIO32(SSC_BASE + 0x118)
/** SSC_TNCR Transmit Next Counter Register **/
#define SSC_TNCR			MMIO32(SSC_BASE + 0x11c)
/** SSC_PTCR Transfer Control Register **/
#define SSC_PTCR			MMIO32(SSC_BASE + 0x120)
/** SSC_PTSR Transfer Status Register **/
#define SSC_PTSR			MMIO32(SSC_BASE + 0x124)

/**@}*/


/** @defgroup ssc_cr CR Control Register
@{*/

/** SSC_CR_SWRST Software Reset **/
#define SSC_CR_SWRST		(1 << 15)
/** SSC_CR_TXDIS Transmit Disable **/
#define SSC_CR_TXDIS		(1 << 9)
/** SSC_CR_TXEN Transmit Enable **/
#define SSC_CR_TXEN		(1 << 8)
/** SSC_CR_RXDIS Receive Disable **/
#define SSC_CR_RXDIS		(1 << 1)
/** SSC_CR_RXEN Receive Enable **/
#define SSC_CR_RXEN		(1 << 0)

/**@}*/

/** @defgroup ssc_cmr CMR Clock Mode Register
@{*/


#define SSC_CMR_DIV_SHIFT		0
#define SSC_CMR_DIV_MASK		0xfff
/** @defgroup ssc_cmr_div DIV Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rcmr RCMR Receive Clock Mode Register
@{*/


#define SSC_RCMR_PERIOD_SHIFT		24
#define SSC_RCMR_PERIOD_MASK		0xff
/** @defgroup ssc_rcmr_period PERIOD Receive Period Divider Selection
@{*/
/**@}*/


#define SSC_RCMR_STTDLY_SHIFT		16
#define SSC_RCMR_STTDLY_MASK		0xff
/** @defgroup ssc_rcmr_sttdly STTDLY Receive Start Delay
@{*/
/**@}*/

/** SSC_RCMR_STOP Receive Stop Selection **/
#define SSC_RCMR_STOP		(1 << 12)

#define SSC_RCMR_START_SHIFT		8
#define SSC_RCMR_START_MASK		0x0f
/** @defgroup ssc_rcmr_start START Receive Start Selection
@{*/
/**@}*/


#define SSC_RCMR_CKG_SHIFT		6
#define SSC_RCMR_CKG_MASK		0x03
/** @defgroup ssc_rcmr_ckg CKG Receive Clock Gating Selection
@{*/
/**@}*/

/** SSC_RCMR_CKI Receive Clock Inversion **/
#define SSC_RCMR_CKI		(1 << 5)

#define SSC_RCMR_CKO_SHIFT		2
#define SSC_RCMR_CKO_MASK		0x07
/** @defgroup ssc_rcmr_cko CKO Receive Clock Output Mode Selection
@{*/
/**@}*/


#define SSC_RCMR_CKS_SHIFT		0
#define SSC_RCMR_CKS_MASK		0x03
/** @defgroup ssc_rcmr_cks CKS Receive Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rfmr RFMR Receive Frame Mode Register
@{*/


#define SSC_RFMR_FSLEN_EXT_SHIFT		28
#define SSC_RFMR_FSLEN_EXT_MASK		0x0f
/** @defgroup ssc_rfmr_fslen_ext FSLENEXT FSLEN Field Extension
@{*/
/**@}*/

/** SSC_RFMR_FSEDGE Frame Sync Edge Detection **/
#define SSC_RFMR_FSEDGE		(1 << 24)

#define SSC_RFMR_FSOS_SHIFT		20
#define SSC_RFMR_FSOS_MASK		0x07
/** @defgroup ssc_rfmr_fsos FSOS Receive Frame Sync Output Selection
@{*/
/**@}*/


#define SSC_RFMR_FSLEN_SHIFT		16
#define SSC_RFMR_FSLEN_MASK		0x0f
/** @defgroup ssc_rfmr_fslen FSLEN Receive Frame Sync Length
@{*/
/**@}*/


#define SSC_RFMR_DATNB_SHIFT		8
#define SSC_RFMR_DATNB_MASK		0x0f
/** @defgroup ssc_rfmr_datnb DATNB Data Number per Frame
@{*/
/**@}*/

/** SSC_RFMR_MSBF Most Significant Bit First **/
#define SSC_RFMR_MSBF		(1 << 7)
/** SSC_RFMR_LOOP Loop Mode **/
#define SSC_RFMR_LOOP		(1 << 5)

#define SSC_RFMR_DATLEN_SHIFT		0
#define SSC_RFMR_DATLEN_MASK		0x1f
/** @defgroup ssc_rfmr_datlen DATLEN Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tcmr TCMR Transmit Clock Mode Register
@{*/


#define SSC_TCMR_PERIOD_SHIFT		24
#define SSC_TCMR_PERIOD_MASK		0xff
/** @defgroup ssc_tcmr_period PERIOD Transmit Period Divider Selection
@{*/
/**@}*/


#define SSC_TCMR_STTDLY_SHIFT		16
#define SSC_TCMR_STTDLY_MASK		0xff
/** @defgroup ssc_tcmr_sttdly STTDLY Transmit Start Delay
@{*/
/**@}*/


#define SSC_TCMR_START_SHIFT		8
#define SSC_TCMR_START_MASK		0x0f
/** @defgroup ssc_tcmr_start START Transmit Start Selection
@{*/
/**@}*/


#define SSC_TCMR_CKG_SHIFT		6
#define SSC_TCMR_CKG_MASK		0x03
/** @defgroup ssc_tcmr_ckg CKG Transmit Clock Gating Selection
@{*/
/**@}*/

/** SSC_TCMR_CKI Transmit Clock Inversion **/
#define SSC_TCMR_CKI		(1 << 5)

#define SSC_TCMR_CKO_SHIFT		2
#define SSC_TCMR_CKO_MASK		0x07
/** @defgroup ssc_tcmr_cko CKO Transmit Clock Output Mode Selection
@{*/
/**@}*/


#define SSC_TCMR_CKS_SHIFT		0
#define SSC_TCMR_CKS_MASK		0x03
/** @defgroup ssc_tcmr_cks CKS Transmit Clock Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tfmr TFMR Transmit Frame Mode Register
@{*/


#define SSC_TFMR_FSLEN_EXT_SHIFT		28
#define SSC_TFMR_FSLEN_EXT_MASK		0x0f
/** @defgroup ssc_tfmr_fslen_ext FSLENEXT FSLEN Field Extension
@{*/
/**@}*/

/** SSC_TFMR_FSEDGE Frame Sync Edge Detection **/
#define SSC_TFMR_FSEDGE		(1 << 24)
/** SSC_TFMR_FSDEN Frame Sync Data Enable **/
#define SSC_TFMR_FSDEN		(1 << 23)

#define SSC_TFMR_FSOS_SHIFT		20
#define SSC_TFMR_FSOS_MASK		0x07
/** @defgroup ssc_tfmr_fsos FSOS Transmit Frame Sync Output Selection
@{*/
/**@}*/


#define SSC_TFMR_FSLEN_SHIFT		16
#define SSC_TFMR_FSLEN_MASK		0x0f
/** @defgroup ssc_tfmr_fslen FSLEN Transmit Frame Sync Length
@{*/
/**@}*/


#define SSC_TFMR_DATNB_SHIFT		8
#define SSC_TFMR_DATNB_MASK		0x0f
/** @defgroup ssc_tfmr_datnb DATNB Data Number per frame
@{*/
/**@}*/

/** SSC_TFMR_MSBF Most Significant Bit First **/
#define SSC_TFMR_MSBF		(1 << 7)
/** SSC_TFMR_DATDEF Data Default Value **/
#define SSC_TFMR_DATDEF		(1 << 5)

#define SSC_TFMR_DATLEN_SHIFT		0
#define SSC_TFMR_DATLEN_MASK		0x1f
/** @defgroup ssc_tfmr_datlen DATLEN Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rhr RHR Receive Holding Register
@{*/


#define SSC_RHR_RDAT_SHIFT		0
#define SSC_RHR_RDAT_MASK		0xffffffff
/** @defgroup ssc_rhr_rdat RDAT Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_thr THR Transmit Holding Register
@{*/


#define SSC_THR_TDAT_SHIFT		0
#define SSC_THR_TDAT_MASK		0xffffffff
/** @defgroup ssc_thr_tdat TDAT Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rshr RSHR Receive Sync. Holding Register
@{*/


#define SSC_RSHR_RSDAT_SHIFT		0
#define SSC_RSHR_RSDAT_MASK		0xffff
/** @defgroup ssc_rshr_rsdat RSDAT Receive Synchronization Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tshr TSHR Transmit Sync. Holding Register
@{*/


#define SSC_TSHR_TSDAT_SHIFT		0
#define SSC_TSHR_TSDAT_MASK		0xffff
/** @defgroup ssc_tshr_tsdat TSDAT Transmit Synchronization Data
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rc0r RC0R Receive Compare 0 Register
@{*/


#define SSC_RC0R_CP0_SHIFT		0
#define SSC_RC0R_CP0_MASK		0xffff
/** @defgroup ssc_rc0r_cp0 CP0 Receive Compare Data 0
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rc1r RC1R Receive Compare 1 Register
@{*/


#define SSC_RC1R_CP1_SHIFT		0
#define SSC_RC1R_CP1_MASK		0xffff
/** @defgroup ssc_rc1r_cp1 CP1 Receive Compare Data 1
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_sr SR Status Register
@{*/

/** SSC_SR_RXEN Receive Enable **/
#define SSC_SR_RXEN		(1 << 17)
/** SSC_SR_TXEN Transmit Enable **/
#define SSC_SR_TXEN		(1 << 16)
/** SSC_SR_RXSYN Receive Sync **/
#define SSC_SR_RXSYN		(1 << 11)
/** SSC_SR_TXSYN Transmit Sync **/
#define SSC_SR_TXSYN		(1 << 10)
/** SSC_SR_CP1 Compare 1 **/
#define SSC_SR_CP1		(1 << 9)
/** SSC_SR_CP0 Compare 0 **/
#define SSC_SR_CP0		(1 << 8)
/** SSC_SR_RXBUFF Receive Buffer Full **/
#define SSC_SR_RXBUFF		(1 << 7)
/** SSC_SR_ENDRX End of Reception **/
#define SSC_SR_ENDRX		(1 << 6)
/** SSC_SR_OVRUN Receive Overrun **/
#define SSC_SR_OVRUN		(1 << 5)
/** SSC_SR_RXRDY Receive Ready **/
#define SSC_SR_RXRDY		(1 << 4)
/** SSC_SR_TXBUFE Transmit Buffer Empty **/
#define SSC_SR_TXBUFE		(1 << 3)
/** SSC_SR_ENDTX End of Transmission **/
#define SSC_SR_ENDTX		(1 << 2)
/** SSC_SR_TXEMPTY Transmit Empty **/
#define SSC_SR_TXEMPTY		(1 << 1)
/** SSC_SR_TXRDY Transmit Ready **/
#define SSC_SR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_ier IER Interrupt Enable Register
@{*/

/** SSC_IER_RXSYN Rx Sync Interrupt Enable **/
#define SSC_IER_RXSYN		(1 << 11)
/** SSC_IER_TXSYN Tx Sync Interrupt Enable **/
#define SSC_IER_TXSYN		(1 << 10)
/** SSC_IER_CP1 Compare 1 Interrupt Enable **/
#define SSC_IER_CP1		(1 << 9)
/** SSC_IER_CP0 Compare 0 Interrupt Enable **/
#define SSC_IER_CP0		(1 << 8)
/** SSC_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define SSC_IER_RXBUFF		(1 << 7)
/** SSC_IER_ENDRX End of Reception Interrupt Enable **/
#define SSC_IER_ENDRX		(1 << 6)
/** SSC_IER_OVRUN Receive Overrun Interrupt Enable **/
#define SSC_IER_OVRUN		(1 << 5)
/** SSC_IER_RXRDY Receive Ready Interrupt Enable **/
#define SSC_IER_RXRDY		(1 << 4)
/** SSC_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define SSC_IER_TXBUFE		(1 << 3)
/** SSC_IER_ENDTX End of Transmission Interrupt Enable **/
#define SSC_IER_ENDTX		(1 << 2)
/** SSC_IER_TXEMPTY Transmit Empty Interrupt Enable **/
#define SSC_IER_TXEMPTY		(1 << 1)
/** SSC_IER_TXRDY Transmit Ready Interrupt Enable **/
#define SSC_IER_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_idr IDR Interrupt Disable Register
@{*/

/** SSC_IDR_RXSYN Rx Sync Interrupt Enable **/
#define SSC_IDR_RXSYN		(1 << 11)
/** SSC_IDR_TXSYN Tx Sync Interrupt Enable **/
#define SSC_IDR_TXSYN		(1 << 10)
/** SSC_IDR_CP1 Compare 1 Interrupt Disable **/
#define SSC_IDR_CP1		(1 << 9)
/** SSC_IDR_CP0 Compare 0 Interrupt Disable **/
#define SSC_IDR_CP0		(1 << 8)
/** SSC_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define SSC_IDR_RXBUFF		(1 << 7)
/** SSC_IDR_ENDRX End of Reception Interrupt Disable **/
#define SSC_IDR_ENDRX		(1 << 6)
/** SSC_IDR_OVRUN Receive Overrun Interrupt Disable **/
#define SSC_IDR_OVRUN		(1 << 5)
/** SSC_IDR_RXRDY Receive Ready Interrupt Disable **/
#define SSC_IDR_RXRDY		(1 << 4)
/** SSC_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define SSC_IDR_TXBUFE		(1 << 3)
/** SSC_IDR_ENDTX End of Transmission Interrupt Disable **/
#define SSC_IDR_ENDTX		(1 << 2)
/** SSC_IDR_TXEMPTY Transmit Empty Interrupt Disable **/
#define SSC_IDR_TXEMPTY		(1 << 1)
/** SSC_IDR_TXRDY Transmit Ready Interrupt Disable **/
#define SSC_IDR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_imr IMR Interrupt Mask Register
@{*/

/** SSC_IMR_RXSYN Rx Sync Interrupt Mask **/
#define SSC_IMR_RXSYN		(1 << 11)
/** SSC_IMR_TXSYN Tx Sync Interrupt Mask **/
#define SSC_IMR_TXSYN		(1 << 10)
/** SSC_IMR_CP1 Compare 1 Interrupt Mask **/
#define SSC_IMR_CP1		(1 << 9)
/** SSC_IMR_CP0 Compare 0 Interrupt Mask **/
#define SSC_IMR_CP0		(1 << 8)
/** SSC_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define SSC_IMR_RXBUFF		(1 << 7)
/** SSC_IMR_ENDRX End of Reception Interrupt Mask **/
#define SSC_IMR_ENDRX		(1 << 6)
/** SSC_IMR_OVRUN Receive Overrun Interrupt Mask **/
#define SSC_IMR_OVRUN		(1 << 5)
/** SSC_IMR_RXRDY Receive Ready Interrupt Mask **/
#define SSC_IMR_RXRDY		(1 << 4)
/** SSC_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define SSC_IMR_TXBUFE		(1 << 3)
/** SSC_IMR_ENDTX End of Transmission Interrupt Mask **/
#define SSC_IMR_ENDTX		(1 << 2)
/** SSC_IMR_TXEMPTY Transmit Empty Interrupt Mask **/
#define SSC_IMR_TXEMPTY		(1 << 1)
/** SSC_IMR_TXRDY Transmit Ready Interrupt Mask **/
#define SSC_IMR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup ssc_wpmr WPMR Write Protect Mode Register
@{*/


#define SSC_WPMR_WPKEY_SHIFT		8
#define SSC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup ssc_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** SSC_WPMR_WPEN Write Protect Enable **/
#define SSC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup ssc_wpsr WPSR Write Protect Status Register
@{*/


/**@}*/

/** @defgroup ssc_rpr RPR Receive Pointer Register
@{*/


#define SSC_RPR_RXPTR_SHIFT		0
#define SSC_RPR_RXPTR_MASK		0xffffffff
/** @defgroup ssc_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rcr RCR Receive Counter Register
@{*/


#define SSC_RCR_RXCTR_SHIFT		0
#define SSC_RCR_RXCTR_MASK		0xffff
/** @defgroup ssc_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tpr TPR Transmit Pointer Register
@{*/


#define SSC_TPR_TXPTR_SHIFT		0
#define SSC_TPR_TXPTR_MASK		0xffffffff
/** @defgroup ssc_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tcr TCR Transmit Counter Register
@{*/


#define SSC_TCR_TXCTR_SHIFT		0
#define SSC_TCR_TXCTR_MASK		0xffff
/** @defgroup ssc_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rnpr RNPR Receive Next Pointer Register
@{*/


#define SSC_RNPR_RXNPTR_SHIFT		0
#define SSC_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup ssc_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_rncr RNCR Receive Next Counter Register
@{*/


#define SSC_RNCR_RXNCTR_SHIFT		0
#define SSC_RNCR_RXNCTR_MASK		0xffff
/** @defgroup ssc_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tnpr TNPR Transmit Next Pointer Register
@{*/


#define SSC_TNPR_TXNPTR_SHIFT		0
#define SSC_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup ssc_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_tncr TNCR Transmit Next Counter Register
@{*/


#define SSC_TNCR_TXNCTR_SHIFT		0
#define SSC_TNCR_TXNCTR_MASK		0xffff
/** @defgroup ssc_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup ssc_ptcr PTCR Transfer Control Register
@{*/

/** SSC_PTCR_TXTDIS Transmitter Transfer Disable **/
#define SSC_PTCR_TXTDIS		(1 << 9)
/** SSC_PTCR_TXTEN Transmitter Transfer Enable **/
#define SSC_PTCR_TXTEN		(1 << 8)
/** SSC_PTCR_RXTDIS Receiver Transfer Disable **/
#define SSC_PTCR_RXTDIS		(1 << 1)
/** SSC_PTCR_RXTEN Receiver Transfer Enable **/
#define SSC_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup ssc_ptsr PTSR Transfer Status Register
@{*/

/** SSC_PTSR_TXTEN Transmitter Transfer Enable **/
#define SSC_PTSR_TXTEN		(1 << 8)
/** SSC_PTSR_RXTEN Receiver Transfer Enable **/
#define SSC_PTSR_RXTEN		(1 << 0)

/**@}*/

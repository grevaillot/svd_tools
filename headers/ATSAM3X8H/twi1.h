#pragma once 

/* --- TWI1: Two-wire Interface 1 ----------------------------------- */

/** @defgroup twi1_registers Two-wire Interface 1 Register
@{*/

/** TWI1_CR Control Register **/
#define TWI1_CR			MMIO32(TWI1_BASE + 0x00)
/** TWI1_MMR Master Mode Register **/
#define TWI1_MMR			MMIO32(TWI1_BASE + 0x04)
/** TWI1_SMR Slave Mode Register **/
#define TWI1_SMR			MMIO32(TWI1_BASE + 0x08)
/** TWI1_IADR Internal Address Register **/
#define TWI1_IADR			MMIO32(TWI1_BASE + 0x0c)
/** TWI1_CWGR Clock Waveform Generator Register **/
#define TWI1_CWGR			MMIO32(TWI1_BASE + 0x10)
/** TWI1_SR Status Register **/
#define TWI1_SR			MMIO32(TWI1_BASE + 0x20)
/** TWI1_IER Interrupt Enable Register **/
#define TWI1_IER			MMIO32(TWI1_BASE + 0x24)
/** TWI1_IDR Interrupt Disable Register **/
#define TWI1_IDR			MMIO32(TWI1_BASE + 0x28)
/** TWI1_IMR Interrupt Mask Register **/
#define TWI1_IMR			MMIO32(TWI1_BASE + 0x2c)
/** TWI1_RHR Receive Holding Register **/
#define TWI1_RHR			MMIO32(TWI1_BASE + 0x30)
/** TWI1_THR Transmit Holding Register **/
#define TWI1_THR			MMIO32(TWI1_BASE + 0x34)
/** TWI1_RPR Receive Pointer Register **/
#define TWI1_RPR			MMIO32(TWI1_BASE + 0x100)
/** TWI1_RCR Receive Counter Register **/
#define TWI1_RCR			MMIO32(TWI1_BASE + 0x104)
/** TWI1_TPR Transmit Pointer Register **/
#define TWI1_TPR			MMIO32(TWI1_BASE + 0x108)
/** TWI1_TCR Transmit Counter Register **/
#define TWI1_TCR			MMIO32(TWI1_BASE + 0x10c)
/** TWI1_RNPR Receive Next Pointer Register **/
#define TWI1_RNPR			MMIO32(TWI1_BASE + 0x110)
/** TWI1_RNCR Receive Next Counter Register **/
#define TWI1_RNCR			MMIO32(TWI1_BASE + 0x114)
/** TWI1_TNPR Transmit Next Pointer Register **/
#define TWI1_TNPR			MMIO32(TWI1_BASE + 0x118)
/** TWI1_TNCR Transmit Next Counter Register **/
#define TWI1_TNCR			MMIO32(TWI1_BASE + 0x11c)
/** TWI1_PTCR Transfer Control Register **/
#define TWI1_PTCR			MMIO32(TWI1_BASE + 0x120)
/** TWI1_PTSR Transfer Status Register **/
#define TWI1_PTSR			MMIO32(TWI1_BASE + 0x124)

/**@}*/


/** @defgroup twi1_cr CR Control Register
@{*/

/** TWI1_CR_SWRST Software Reset **/
#define TWI1_CR_SWRST		(1 << 7)
/** TWI1_CR_QUICK SMBUS Quick Command **/
#define TWI1_CR_QUICK		(1 << 6)
/** TWI1_CR_SVDIS TWI Slave Mode Disabled **/
#define TWI1_CR_SVDIS		(1 << 5)
/** TWI1_CR_SVEN TWI Slave Mode Enabled **/
#define TWI1_CR_SVEN		(1 << 4)
/** TWI1_CR_MSDIS TWI Master Mode Disabled **/
#define TWI1_CR_MSDIS		(1 << 3)
/** TWI1_CR_MSEN TWI Master Mode Enabled **/
#define TWI1_CR_MSEN		(1 << 2)
/** TWI1_CR_STOP Send a STOP Condition **/
#define TWI1_CR_STOP		(1 << 1)
/** TWI1_CR_START Send a START Condition **/
#define TWI1_CR_START		(1 << 0)

/**@}*/

/** @defgroup twi1_mmr MMR Master Mode Register
@{*/


#define TWI1_MMR_DADR_SHIFT		16
#define TWI1_MMR_DADR_MASK		0x7f
/** @defgroup twi1_mmr_dadr DADR Device Address
@{*/
/**@}*/

/** TWI1_MMR_MREAD Master Read Direction **/
#define TWI1_MMR_MREAD		(1 << 12)

#define TWI1_MMR_IADRSZ_SHIFT		8
#define TWI1_MMR_IADRSZ_MASK		0x03
/** @defgroup twi1_mmr_iadrsz IADRSZ Internal Device Address Size
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_smr SMR Slave Mode Register
@{*/


#define TWI1_SMR_SADR_SHIFT		16
#define TWI1_SMR_SADR_MASK		0x7f
/** @defgroup twi1_smr_sadr SADR Slave Address
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_iadr IADR Internal Address Register
@{*/


#define TWI1_IADR_IADR_SHIFT		0
#define TWI1_IADR_IADR_MASK		0xffffff
/** @defgroup twi1_iadr_iadr IADR Internal Address
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_cwgr CWGR Clock Waveform Generator Register
@{*/


#define TWI1_CWGR_CKDIV_SHIFT		16
#define TWI1_CWGR_CKDIV_MASK		0x07
/** @defgroup twi1_cwgr_ckdiv CKDIV Clock Divider
@{*/
/**@}*/


#define TWI1_CWGR_CHDIV_SHIFT		8
#define TWI1_CWGR_CHDIV_MASK		0xff
/** @defgroup twi1_cwgr_chdiv CHDIV Clock High Divider
@{*/
/**@}*/


#define TWI1_CWGR_CLDIV_SHIFT		0
#define TWI1_CWGR_CLDIV_MASK		0xff
/** @defgroup twi1_cwgr_cldiv CLDIV Clock Low Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_sr SR Status Register
@{*/

/** TWI1_SR_TXBUFE TX Buffer Empty **/
#define TWI1_SR_TXBUFE		(1 << 15)
/** TWI1_SR_RXBUFF RX Buffer Full **/
#define TWI1_SR_RXBUFF		(1 << 14)
/** TWI1_SR_ENDTX End of TX buffer **/
#define TWI1_SR_ENDTX		(1 << 13)
/** TWI1_SR_ENDRX End of RX buffer **/
#define TWI1_SR_ENDRX		(1 << 12)
/** TWI1_SR_EOSACC End Of Slave Access (clear on read) **/
#define TWI1_SR_EOSACC		(1 << 11)
/** TWI1_SR_SCLWS Clock Wait State (automatically set / reset) **/
#define TWI1_SR_SCLWS		(1 << 10)
/** TWI1_SR_ARBLST Arbitration Lost (clear on read) **/
#define TWI1_SR_ARBLST		(1 << 9)
/** TWI1_SR_NACK Not Acknowledged (clear on read) **/
#define TWI1_SR_NACK		(1 << 8)
/** TWI1_SR_OVRE Overrun Error (clear on read) **/
#define TWI1_SR_OVRE		(1 << 6)
/** TWI1_SR_GACC General Call Access (clear on read) **/
#define TWI1_SR_GACC		(1 << 5)
/** TWI1_SR_SVACC Slave Access (automatically set / reset) **/
#define TWI1_SR_SVACC		(1 << 4)
/** TWI1_SR_SVREAD Slave Read (automatically set / reset) **/
#define TWI1_SR_SVREAD		(1 << 3)
/** TWI1_SR_TXRDY Transmit Holding Register Ready (automatically set / reset) **/
#define TWI1_SR_TXRDY		(1 << 2)
/** TWI1_SR_RXRDY Receive Holding Register Ready (automatically set / reset) **/
#define TWI1_SR_RXRDY		(1 << 1)
/** TWI1_SR_TXCOMP Transmission Completed (automatically set / reset) **/
#define TWI1_SR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi1_ier IER Interrupt Enable Register
@{*/

/** TWI1_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define TWI1_IER_TXBUFE		(1 << 15)
/** TWI1_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define TWI1_IER_RXBUFF		(1 << 14)
/** TWI1_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define TWI1_IER_ENDTX		(1 << 13)
/** TWI1_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define TWI1_IER_ENDRX		(1 << 12)
/** TWI1_IER_EOSACC End Of Slave Access Interrupt Enable **/
#define TWI1_IER_EOSACC		(1 << 11)
/** TWI1_IER_SCL_WS Clock Wait State Interrupt Enable **/
#define TWI1_IER_SCL_WS		(1 << 10)
/** TWI1_IER_ARBLST Arbitration Lost Interrupt Enable **/
#define TWI1_IER_ARBLST		(1 << 9)
/** TWI1_IER_NACK Not Acknowledge Interrupt Enable **/
#define TWI1_IER_NACK		(1 << 8)
/** TWI1_IER_OVRE Overrun Error Interrupt Enable **/
#define TWI1_IER_OVRE		(1 << 6)
/** TWI1_IER_GACC General Call Access Interrupt Enable **/
#define TWI1_IER_GACC		(1 << 5)
/** TWI1_IER_SVACC Slave Access Interrupt Enable **/
#define TWI1_IER_SVACC		(1 << 4)
/** TWI1_IER_TXRDY Transmit Holding Register Ready Interrupt Enable **/
#define TWI1_IER_TXRDY		(1 << 2)
/** TWI1_IER_RXRDY Receive Holding Register Ready Interrupt Enable **/
#define TWI1_IER_RXRDY		(1 << 1)
/** TWI1_IER_TXCOMP Transmission Completed Interrupt Enable **/
#define TWI1_IER_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi1_idr IDR Interrupt Disable Register
@{*/

/** TWI1_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define TWI1_IDR_TXBUFE		(1 << 15)
/** TWI1_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define TWI1_IDR_RXBUFF		(1 << 14)
/** TWI1_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define TWI1_IDR_ENDTX		(1 << 13)
/** TWI1_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define TWI1_IDR_ENDRX		(1 << 12)
/** TWI1_IDR_EOSACC End Of Slave Access Interrupt Disable **/
#define TWI1_IDR_EOSACC		(1 << 11)
/** TWI1_IDR_SCL_WS Clock Wait State Interrupt Disable **/
#define TWI1_IDR_SCL_WS		(1 << 10)
/** TWI1_IDR_ARBLST Arbitration Lost Interrupt Disable **/
#define TWI1_IDR_ARBLST		(1 << 9)
/** TWI1_IDR_NACK Not Acknowledge Interrupt Disable **/
#define TWI1_IDR_NACK		(1 << 8)
/** TWI1_IDR_OVRE Overrun Error Interrupt Disable **/
#define TWI1_IDR_OVRE		(1 << 6)
/** TWI1_IDR_GACC General Call Access Interrupt Disable **/
#define TWI1_IDR_GACC		(1 << 5)
/** TWI1_IDR_SVACC Slave Access Interrupt Disable **/
#define TWI1_IDR_SVACC		(1 << 4)
/** TWI1_IDR_TXRDY Transmit Holding Register Ready Interrupt Disable **/
#define TWI1_IDR_TXRDY		(1 << 2)
/** TWI1_IDR_RXRDY Receive Holding Register Ready Interrupt Disable **/
#define TWI1_IDR_RXRDY		(1 << 1)
/** TWI1_IDR_TXCOMP Transmission Completed Interrupt Disable **/
#define TWI1_IDR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi1_imr IMR Interrupt Mask Register
@{*/

/** TWI1_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define TWI1_IMR_TXBUFE		(1 << 15)
/** TWI1_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define TWI1_IMR_RXBUFF		(1 << 14)
/** TWI1_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define TWI1_IMR_ENDTX		(1 << 13)
/** TWI1_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define TWI1_IMR_ENDRX		(1 << 12)
/** TWI1_IMR_EOSACC End Of Slave Access Interrupt Mask **/
#define TWI1_IMR_EOSACC		(1 << 11)
/** TWI1_IMR_SCL_WS Clock Wait State Interrupt Mask **/
#define TWI1_IMR_SCL_WS		(1 << 10)
/** TWI1_IMR_ARBLST Arbitration Lost Interrupt Mask **/
#define TWI1_IMR_ARBLST		(1 << 9)
/** TWI1_IMR_NACK Not Acknowledge Interrupt Mask **/
#define TWI1_IMR_NACK		(1 << 8)
/** TWI1_IMR_OVRE Overrun Error Interrupt Mask **/
#define TWI1_IMR_OVRE		(1 << 6)
/** TWI1_IMR_GACC General Call Access Interrupt Mask **/
#define TWI1_IMR_GACC		(1 << 5)
/** TWI1_IMR_SVACC Slave Access Interrupt Mask **/
#define TWI1_IMR_SVACC		(1 << 4)
/** TWI1_IMR_TXRDY Transmit Holding Register Ready Interrupt Mask **/
#define TWI1_IMR_TXRDY		(1 << 2)
/** TWI1_IMR_RXRDY Receive Holding Register Ready Interrupt Mask **/
#define TWI1_IMR_RXRDY		(1 << 1)
/** TWI1_IMR_TXCOMP Transmission Completed Interrupt Mask **/
#define TWI1_IMR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi1_rhr RHR Receive Holding Register
@{*/


#define TWI1_RHR_RXDATA_SHIFT		0
#define TWI1_RHR_RXDATA_MASK		0xff
/** @defgroup twi1_rhr_rxdata RXDATA Master or Slave Receive Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_thr THR Transmit Holding Register
@{*/


#define TWI1_THR_TXDATA_SHIFT		0
#define TWI1_THR_TXDATA_MASK		0xff
/** @defgroup twi1_thr_txdata TXDATA Master or Slave Transmit Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_rpr RPR Receive Pointer Register
@{*/


#define TWI1_RPR_RXPTR_SHIFT		0
#define TWI1_RPR_RXPTR_MASK		0xffffffff
/** @defgroup twi1_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_rcr RCR Receive Counter Register
@{*/


#define TWI1_RCR_RXCTR_SHIFT		0
#define TWI1_RCR_RXCTR_MASK		0xffff
/** @defgroup twi1_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_tpr TPR Transmit Pointer Register
@{*/


#define TWI1_TPR_TXPTR_SHIFT		0
#define TWI1_TPR_TXPTR_MASK		0xffffffff
/** @defgroup twi1_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_tcr TCR Transmit Counter Register
@{*/


#define TWI1_TCR_TXCTR_SHIFT		0
#define TWI1_TCR_TXCTR_MASK		0xffff
/** @defgroup twi1_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_rnpr RNPR Receive Next Pointer Register
@{*/


#define TWI1_RNPR_RXNPTR_SHIFT		0
#define TWI1_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup twi1_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_rncr RNCR Receive Next Counter Register
@{*/


#define TWI1_RNCR_RXNCTR_SHIFT		0
#define TWI1_RNCR_RXNCTR_MASK		0xffff
/** @defgroup twi1_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_tnpr TNPR Transmit Next Pointer Register
@{*/


#define TWI1_TNPR_TXNPTR_SHIFT		0
#define TWI1_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup twi1_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_tncr TNCR Transmit Next Counter Register
@{*/


#define TWI1_TNCR_TXNCTR_SHIFT		0
#define TWI1_TNCR_TXNCTR_MASK		0xffff
/** @defgroup twi1_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup twi1_ptcr PTCR Transfer Control Register
@{*/

/** TWI1_PTCR_TXTDIS Transmitter Transfer Disable **/
#define TWI1_PTCR_TXTDIS		(1 << 9)
/** TWI1_PTCR_TXTEN Transmitter Transfer Enable **/
#define TWI1_PTCR_TXTEN		(1 << 8)
/** TWI1_PTCR_RXTDIS Receiver Transfer Disable **/
#define TWI1_PTCR_RXTDIS		(1 << 1)
/** TWI1_PTCR_RXTEN Receiver Transfer Enable **/
#define TWI1_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup twi1_ptsr PTSR Transfer Status Register
@{*/

/** TWI1_PTSR_TXTEN Transmitter Transfer Enable **/
#define TWI1_PTSR_TXTEN		(1 << 8)
/** TWI1_PTSR_RXTEN Receiver Transfer Enable **/
#define TWI1_PTSR_RXTEN		(1 << 0)

/**@}*/

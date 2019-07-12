#pragma once 

/* --- TWI0: Two-wire Interface 0 ----------------------------------- */

/** @defgroup twi0_registers Two-wire Interface 0 Register
@{*/

/** TWI0_CR Control Register **/
#define TWI0_CR			MMIO32(TWI0_BASE + 0x00)
/** TWI0_MMR Master Mode Register **/
#define TWI0_MMR			MMIO32(TWI0_BASE + 0x04)
/** TWI0_SMR Slave Mode Register **/
#define TWI0_SMR			MMIO32(TWI0_BASE + 0x08)
/** TWI0_IADR Internal Address Register **/
#define TWI0_IADR			MMIO32(TWI0_BASE + 0x0c)
/** TWI0_CWGR Clock Waveform Generator Register **/
#define TWI0_CWGR			MMIO32(TWI0_BASE + 0x10)
/** TWI0_SR Status Register **/
#define TWI0_SR			MMIO32(TWI0_BASE + 0x20)
/** TWI0_IER Interrupt Enable Register **/
#define TWI0_IER			MMIO32(TWI0_BASE + 0x24)
/** TWI0_IDR Interrupt Disable Register **/
#define TWI0_IDR			MMIO32(TWI0_BASE + 0x28)
/** TWI0_IMR Interrupt Mask Register **/
#define TWI0_IMR			MMIO32(TWI0_BASE + 0x2c)
/** TWI0_RHR Receive Holding Register **/
#define TWI0_RHR			MMIO32(TWI0_BASE + 0x30)
/** TWI0_THR Transmit Holding Register **/
#define TWI0_THR			MMIO32(TWI0_BASE + 0x34)
/** TWI0_RPR Receive Pointer Register **/
#define TWI0_RPR			MMIO32(TWI0_BASE + 0x100)
/** TWI0_RCR Receive Counter Register **/
#define TWI0_RCR			MMIO32(TWI0_BASE + 0x104)
/** TWI0_TPR Transmit Pointer Register **/
#define TWI0_TPR			MMIO32(TWI0_BASE + 0x108)
/** TWI0_TCR Transmit Counter Register **/
#define TWI0_TCR			MMIO32(TWI0_BASE + 0x10c)
/** TWI0_RNPR Receive Next Pointer Register **/
#define TWI0_RNPR			MMIO32(TWI0_BASE + 0x110)
/** TWI0_RNCR Receive Next Counter Register **/
#define TWI0_RNCR			MMIO32(TWI0_BASE + 0x114)
/** TWI0_TNPR Transmit Next Pointer Register **/
#define TWI0_TNPR			MMIO32(TWI0_BASE + 0x118)
/** TWI0_TNCR Transmit Next Counter Register **/
#define TWI0_TNCR			MMIO32(TWI0_BASE + 0x11c)
/** TWI0_PTCR Transfer Control Register **/
#define TWI0_PTCR			MMIO32(TWI0_BASE + 0x120)
/** TWI0_PTSR Transfer Status Register **/
#define TWI0_PTSR			MMIO32(TWI0_BASE + 0x124)

/**@}*/


/** @defgroup twi0_cr CR Control Register
@{*/

/** TWI0_CR_SWRST Software Reset **/
#define TWI0_CR_SWRST		(1 << 7)
/** TWI0_CR_QUICK SMBUS Quick Command **/
#define TWI0_CR_QUICK		(1 << 6)
/** TWI0_CR_SVDIS TWI Slave Mode Disabled **/
#define TWI0_CR_SVDIS		(1 << 5)
/** TWI0_CR_SVEN TWI Slave Mode Enabled **/
#define TWI0_CR_SVEN		(1 << 4)
/** TWI0_CR_MSDIS TWI Master Mode Disabled **/
#define TWI0_CR_MSDIS		(1 << 3)
/** TWI0_CR_MSEN TWI Master Mode Enabled **/
#define TWI0_CR_MSEN		(1 << 2)
/** TWI0_CR_STOP Send a STOP Condition **/
#define TWI0_CR_STOP		(1 << 1)
/** TWI0_CR_START Send a START Condition **/
#define TWI0_CR_START		(1 << 0)

/**@}*/

/** @defgroup twi0_mmr MMR Master Mode Register
@{*/


#define TWI0_MMR_DADR_SHIFT		16
#define TWI0_MMR_DADR_MASK		0x7f
/** @defgroup twi0_mmr_dadr DADR Device Address
@{*/
/**@}*/

/** TWI0_MMR_MREAD Master Read Direction **/
#define TWI0_MMR_MREAD		(1 << 12)

#define TWI0_MMR_IADRSZ_SHIFT		8
#define TWI0_MMR_IADRSZ_MASK		0x03
/** @defgroup twi0_mmr_iadrsz IADRSZ Internal Device Address Size
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_smr SMR Slave Mode Register
@{*/


#define TWI0_SMR_SADR_SHIFT		16
#define TWI0_SMR_SADR_MASK		0x7f
/** @defgroup twi0_smr_sadr SADR Slave Address
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_iadr IADR Internal Address Register
@{*/


#define TWI0_IADR_IADR_SHIFT		0
#define TWI0_IADR_IADR_MASK		0xffffff
/** @defgroup twi0_iadr_iadr IADR Internal Address
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_cwgr CWGR Clock Waveform Generator Register
@{*/


#define TWI0_CWGR_CKDIV_SHIFT		16
#define TWI0_CWGR_CKDIV_MASK		0x07
/** @defgroup twi0_cwgr_ckdiv CKDIV Clock Divider
@{*/
/**@}*/


#define TWI0_CWGR_CHDIV_SHIFT		8
#define TWI0_CWGR_CHDIV_MASK		0xff
/** @defgroup twi0_cwgr_chdiv CHDIV Clock High Divider
@{*/
/**@}*/


#define TWI0_CWGR_CLDIV_SHIFT		0
#define TWI0_CWGR_CLDIV_MASK		0xff
/** @defgroup twi0_cwgr_cldiv CLDIV Clock Low Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_sr SR Status Register
@{*/

/** TWI0_SR_TXBUFE TX Buffer Empty **/
#define TWI0_SR_TXBUFE		(1 << 15)
/** TWI0_SR_RXBUFF RX Buffer Full **/
#define TWI0_SR_RXBUFF		(1 << 14)
/** TWI0_SR_ENDTX End of TX buffer **/
#define TWI0_SR_ENDTX		(1 << 13)
/** TWI0_SR_ENDRX End of RX buffer **/
#define TWI0_SR_ENDRX		(1 << 12)
/** TWI0_SR_EOSACC End Of Slave Access (clear on read) **/
#define TWI0_SR_EOSACC		(1 << 11)
/** TWI0_SR_SCLWS Clock Wait State (automatically set / reset) **/
#define TWI0_SR_SCLWS		(1 << 10)
/** TWI0_SR_ARBLST Arbitration Lost (clear on read) **/
#define TWI0_SR_ARBLST		(1 << 9)
/** TWI0_SR_NACK Not Acknowledged (clear on read) **/
#define TWI0_SR_NACK		(1 << 8)
/** TWI0_SR_OVRE Overrun Error (clear on read) **/
#define TWI0_SR_OVRE		(1 << 6)
/** TWI0_SR_GACC General Call Access (clear on read) **/
#define TWI0_SR_GACC		(1 << 5)
/** TWI0_SR_SVACC Slave Access (automatically set / reset) **/
#define TWI0_SR_SVACC		(1 << 4)
/** TWI0_SR_SVREAD Slave Read (automatically set / reset) **/
#define TWI0_SR_SVREAD		(1 << 3)
/** TWI0_SR_TXRDY Transmit Holding Register Ready (automatically set / reset) **/
#define TWI0_SR_TXRDY		(1 << 2)
/** TWI0_SR_RXRDY Receive Holding Register Ready (automatically set / reset) **/
#define TWI0_SR_RXRDY		(1 << 1)
/** TWI0_SR_TXCOMP Transmission Completed (automatically set / reset) **/
#define TWI0_SR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi0_ier IER Interrupt Enable Register
@{*/

/** TWI0_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define TWI0_IER_TXBUFE		(1 << 15)
/** TWI0_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define TWI0_IER_RXBUFF		(1 << 14)
/** TWI0_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define TWI0_IER_ENDTX		(1 << 13)
/** TWI0_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define TWI0_IER_ENDRX		(1 << 12)
/** TWI0_IER_EOSACC End Of Slave Access Interrupt Enable **/
#define TWI0_IER_EOSACC		(1 << 11)
/** TWI0_IER_SCL_WS Clock Wait State Interrupt Enable **/
#define TWI0_IER_SCL_WS		(1 << 10)
/** TWI0_IER_ARBLST Arbitration Lost Interrupt Enable **/
#define TWI0_IER_ARBLST		(1 << 9)
/** TWI0_IER_NACK Not Acknowledge Interrupt Enable **/
#define TWI0_IER_NACK		(1 << 8)
/** TWI0_IER_OVRE Overrun Error Interrupt Enable **/
#define TWI0_IER_OVRE		(1 << 6)
/** TWI0_IER_GACC General Call Access Interrupt Enable **/
#define TWI0_IER_GACC		(1 << 5)
/** TWI0_IER_SVACC Slave Access Interrupt Enable **/
#define TWI0_IER_SVACC		(1 << 4)
/** TWI0_IER_TXRDY Transmit Holding Register Ready Interrupt Enable **/
#define TWI0_IER_TXRDY		(1 << 2)
/** TWI0_IER_RXRDY Receive Holding Register Ready Interrupt Enable **/
#define TWI0_IER_RXRDY		(1 << 1)
/** TWI0_IER_TXCOMP Transmission Completed Interrupt Enable **/
#define TWI0_IER_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi0_idr IDR Interrupt Disable Register
@{*/

/** TWI0_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define TWI0_IDR_TXBUFE		(1 << 15)
/** TWI0_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define TWI0_IDR_RXBUFF		(1 << 14)
/** TWI0_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define TWI0_IDR_ENDTX		(1 << 13)
/** TWI0_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define TWI0_IDR_ENDRX		(1 << 12)
/** TWI0_IDR_EOSACC End Of Slave Access Interrupt Disable **/
#define TWI0_IDR_EOSACC		(1 << 11)
/** TWI0_IDR_SCL_WS Clock Wait State Interrupt Disable **/
#define TWI0_IDR_SCL_WS		(1 << 10)
/** TWI0_IDR_ARBLST Arbitration Lost Interrupt Disable **/
#define TWI0_IDR_ARBLST		(1 << 9)
/** TWI0_IDR_NACK Not Acknowledge Interrupt Disable **/
#define TWI0_IDR_NACK		(1 << 8)
/** TWI0_IDR_OVRE Overrun Error Interrupt Disable **/
#define TWI0_IDR_OVRE		(1 << 6)
/** TWI0_IDR_GACC General Call Access Interrupt Disable **/
#define TWI0_IDR_GACC		(1 << 5)
/** TWI0_IDR_SVACC Slave Access Interrupt Disable **/
#define TWI0_IDR_SVACC		(1 << 4)
/** TWI0_IDR_TXRDY Transmit Holding Register Ready Interrupt Disable **/
#define TWI0_IDR_TXRDY		(1 << 2)
/** TWI0_IDR_RXRDY Receive Holding Register Ready Interrupt Disable **/
#define TWI0_IDR_RXRDY		(1 << 1)
/** TWI0_IDR_TXCOMP Transmission Completed Interrupt Disable **/
#define TWI0_IDR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi0_imr IMR Interrupt Mask Register
@{*/

/** TWI0_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define TWI0_IMR_TXBUFE		(1 << 15)
/** TWI0_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define TWI0_IMR_RXBUFF		(1 << 14)
/** TWI0_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define TWI0_IMR_ENDTX		(1 << 13)
/** TWI0_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define TWI0_IMR_ENDRX		(1 << 12)
/** TWI0_IMR_EOSACC End Of Slave Access Interrupt Mask **/
#define TWI0_IMR_EOSACC		(1 << 11)
/** TWI0_IMR_SCL_WS Clock Wait State Interrupt Mask **/
#define TWI0_IMR_SCL_WS		(1 << 10)
/** TWI0_IMR_ARBLST Arbitration Lost Interrupt Mask **/
#define TWI0_IMR_ARBLST		(1 << 9)
/** TWI0_IMR_NACK Not Acknowledge Interrupt Mask **/
#define TWI0_IMR_NACK		(1 << 8)
/** TWI0_IMR_OVRE Overrun Error Interrupt Mask **/
#define TWI0_IMR_OVRE		(1 << 6)
/** TWI0_IMR_GACC General Call Access Interrupt Mask **/
#define TWI0_IMR_GACC		(1 << 5)
/** TWI0_IMR_SVACC Slave Access Interrupt Mask **/
#define TWI0_IMR_SVACC		(1 << 4)
/** TWI0_IMR_TXRDY Transmit Holding Register Ready Interrupt Mask **/
#define TWI0_IMR_TXRDY		(1 << 2)
/** TWI0_IMR_RXRDY Receive Holding Register Ready Interrupt Mask **/
#define TWI0_IMR_RXRDY		(1 << 1)
/** TWI0_IMR_TXCOMP Transmission Completed Interrupt Mask **/
#define TWI0_IMR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twi0_rhr RHR Receive Holding Register
@{*/


#define TWI0_RHR_RXDATA_SHIFT		0
#define TWI0_RHR_RXDATA_MASK		0xff
/** @defgroup twi0_rhr_rxdata RXDATA Master or Slave Receive Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_thr THR Transmit Holding Register
@{*/


#define TWI0_THR_TXDATA_SHIFT		0
#define TWI0_THR_TXDATA_MASK		0xff
/** @defgroup twi0_thr_txdata TXDATA Master or Slave Transmit Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_rpr RPR Receive Pointer Register
@{*/


#define TWI0_RPR_RXPTR_SHIFT		0
#define TWI0_RPR_RXPTR_MASK		0xffffffff
/** @defgroup twi0_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_rcr RCR Receive Counter Register
@{*/


#define TWI0_RCR_RXCTR_SHIFT		0
#define TWI0_RCR_RXCTR_MASK		0xffff
/** @defgroup twi0_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_tpr TPR Transmit Pointer Register
@{*/


#define TWI0_TPR_TXPTR_SHIFT		0
#define TWI0_TPR_TXPTR_MASK		0xffffffff
/** @defgroup twi0_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_tcr TCR Transmit Counter Register
@{*/


#define TWI0_TCR_TXCTR_SHIFT		0
#define TWI0_TCR_TXCTR_MASK		0xffff
/** @defgroup twi0_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_rnpr RNPR Receive Next Pointer Register
@{*/


#define TWI0_RNPR_RXNPTR_SHIFT		0
#define TWI0_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup twi0_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_rncr RNCR Receive Next Counter Register
@{*/


#define TWI0_RNCR_RXNCTR_SHIFT		0
#define TWI0_RNCR_RXNCTR_MASK		0xffff
/** @defgroup twi0_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_tnpr TNPR Transmit Next Pointer Register
@{*/


#define TWI0_TNPR_TXNPTR_SHIFT		0
#define TWI0_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup twi0_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_tncr TNCR Transmit Next Counter Register
@{*/


#define TWI0_TNCR_TXNCTR_SHIFT		0
#define TWI0_TNCR_TXNCTR_MASK		0xffff
/** @defgroup twi0_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup twi0_ptcr PTCR Transfer Control Register
@{*/

/** TWI0_PTCR_TXTDIS Transmitter Transfer Disable **/
#define TWI0_PTCR_TXTDIS		(1 << 9)
/** TWI0_PTCR_TXTEN Transmitter Transfer Enable **/
#define TWI0_PTCR_TXTEN		(1 << 8)
/** TWI0_PTCR_RXTDIS Receiver Transfer Disable **/
#define TWI0_PTCR_RXTDIS		(1 << 1)
/** TWI0_PTCR_RXTEN Receiver Transfer Enable **/
#define TWI0_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup twi0_ptsr PTSR Transfer Status Register
@{*/

/** TWI0_PTSR_TXTEN Transmitter Transfer Enable **/
#define TWI0_PTSR_TXTEN		(1 << 8)
/** TWI0_PTSR_RXTEN Receiver Transfer Enable **/
#define TWI0_PTSR_RXTEN		(1 << 0)

/**@}*/

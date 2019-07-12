#pragma once 

/* --- TWIHS1: Two-wire Interface High Speed ------------------------ */

/** @defgroup twihs1_registers Two-wire Interface High Speed Register
@{*/

/** TWIHS1_TWIHS_CR Control Register **/
#define TWIHS1_TWIHS_CR			MMIO32(TWIHS1_BASE + 0x00)
/** TWIHS1_TWIHS_MMR Master Mode Register **/
#define TWIHS1_TWIHS_MMR			MMIO32(TWIHS1_BASE + 0x04)
/** TWIHS1_TWIHS_SMR Slave Mode Register **/
#define TWIHS1_TWIHS_SMR			MMIO32(TWIHS1_BASE + 0x08)
/** TWIHS1_TWIHS_IADR Internal Address Register **/
#define TWIHS1_TWIHS_IADR			MMIO32(TWIHS1_BASE + 0x0c)
/** TWIHS1_TWIHS_CWGR Clock Waveform Generator Register **/
#define TWIHS1_TWIHS_CWGR			MMIO32(TWIHS1_BASE + 0x10)
/** TWIHS1_TWIHS_SR Status Register **/
#define TWIHS1_TWIHS_SR			MMIO32(TWIHS1_BASE + 0x20)
/** TWIHS1_TWIHS_IER Interrupt Enable Register **/
#define TWIHS1_TWIHS_IER			MMIO32(TWIHS1_BASE + 0x24)
/** TWIHS1_TWIHS_IDR Interrupt Disable Register **/
#define TWIHS1_TWIHS_IDR			MMIO32(TWIHS1_BASE + 0x28)
/** TWIHS1_TWIHS_IMR Interrupt Mask Register **/
#define TWIHS1_TWIHS_IMR			MMIO32(TWIHS1_BASE + 0x2c)
/** TWIHS1_TWIHS_RHR Receive Holding Register **/
#define TWIHS1_TWIHS_RHR			MMIO32(TWIHS1_BASE + 0x30)
/** TWIHS1_TWIHS_THR Transmit Holding Register **/
#define TWIHS1_TWIHS_THR			MMIO32(TWIHS1_BASE + 0x34)
/** TWIHS1_TWIHS_SMBTR SMBus Timing Register **/
#define TWIHS1_TWIHS_SMBTR			MMIO32(TWIHS1_BASE + 0x38)
/** TWIHS1_TWIHS_FILTR Filter Register **/
#define TWIHS1_TWIHS_FILTR			MMIO32(TWIHS1_BASE + 0x44)
/** TWIHS1_TWIHS_SWMR SleepWalking Matching Register **/
#define TWIHS1_TWIHS_SWMR			MMIO32(TWIHS1_BASE + 0x4c)
/** TWIHS1_TWIHS_WPMR Write Protection Mode Register **/
#define TWIHS1_TWIHS_WPMR			MMIO32(TWIHS1_BASE + 0xe4)
/** TWIHS1_TWIHS_WPSR Write Protection Status Register **/
#define TWIHS1_TWIHS_WPSR			MMIO32(TWIHS1_BASE + 0xe8)

/**@}*/


/** @defgroup twihs1_twihs_cr TWIHSCR Control Register
@{*/

/** TWIHS1_TWIHS_CR_FIFODIS FIFO Disable **/
#define TWIHS1_TWIHS_CR_FIFODIS		(1 << 29)
/** TWIHS1_TWIHS_CR_FIFOEN FIFO Enable **/
#define TWIHS1_TWIHS_CR_FIFOEN		(1 << 28)
/** TWIHS1_TWIHS_CR_LOCKCLR Lock Clear **/
#define TWIHS1_TWIHS_CR_LOCKCLR		(1 << 26)
/** TWIHS1_TWIHS_CR_THRCLR Transmit Holding Register Clear **/
#define TWIHS1_TWIHS_CR_THRCLR		(1 << 24)
/** TWIHS1_TWIHS_CR_ACMDIS Alternative Command Mode Disable **/
#define TWIHS1_TWIHS_CR_ACMDIS		(1 << 17)
/** TWIHS1_TWIHS_CR_ACMEN Alternative Command Mode Enable **/
#define TWIHS1_TWIHS_CR_ACMEN		(1 << 16)
/** TWIHS1_TWIHS_CR_CLEAR Bus CLEAR Command **/
#define TWIHS1_TWIHS_CR_CLEAR		(1 << 15)
/** TWIHS1_TWIHS_CR_PECRQ PEC Request **/
#define TWIHS1_TWIHS_CR_PECRQ		(1 << 14)
/** TWIHS1_TWIHS_CR_PECDIS Packet Error Checking Disable **/
#define TWIHS1_TWIHS_CR_PECDIS		(1 << 13)
/** TWIHS1_TWIHS_CR_PECEN Packet Error Checking Enable **/
#define TWIHS1_TWIHS_CR_PECEN		(1 << 12)
/** TWIHS1_TWIHS_CR_SMBDIS SMBus Mode Disabled **/
#define TWIHS1_TWIHS_CR_SMBDIS		(1 << 11)
/** TWIHS1_TWIHS_CR_SMBEN SMBus Mode Enabled **/
#define TWIHS1_TWIHS_CR_SMBEN		(1 << 10)
/** TWIHS1_TWIHS_CR_HSDIS TWIHS High-Speed Mode Disabled **/
#define TWIHS1_TWIHS_CR_HSDIS		(1 << 9)
/** TWIHS1_TWIHS_CR_HSEN TWIHS High-Speed Mode Enabled **/
#define TWIHS1_TWIHS_CR_HSEN		(1 << 8)
/** TWIHS1_TWIHS_CR_SWRST Software Reset **/
#define TWIHS1_TWIHS_CR_SWRST		(1 << 7)
/** TWIHS1_TWIHS_CR_QUICK SMBus Quick Command **/
#define TWIHS1_TWIHS_CR_QUICK		(1 << 6)
/** TWIHS1_TWIHS_CR_SVDIS TWIHS Slave Mode Disabled **/
#define TWIHS1_TWIHS_CR_SVDIS		(1 << 5)
/** TWIHS1_TWIHS_CR_SVEN TWIHS Slave Mode Enabled **/
#define TWIHS1_TWIHS_CR_SVEN		(1 << 4)
/** TWIHS1_TWIHS_CR_MSDIS TWIHS Master Mode Disabled **/
#define TWIHS1_TWIHS_CR_MSDIS		(1 << 3)
/** TWIHS1_TWIHS_CR_MSEN TWIHS Master Mode Enabled **/
#define TWIHS1_TWIHS_CR_MSEN		(1 << 2)
/** TWIHS1_TWIHS_CR_STOP Send a STOP Condition **/
#define TWIHS1_TWIHS_CR_STOP		(1 << 1)
/** TWIHS1_TWIHS_CR_START Send a START Condition **/
#define TWIHS1_TWIHS_CR_START		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_mmr TWIHSMMR Master Mode Register
@{*/


#define TWIHS1_TWIHS_MMR_DADR_SHIFT		16
#define TWIHS1_TWIHS_MMR_DADR_MASK		0x7f
/** @defgroup twihs1_twihs_mmr_dadr DADR Device Address
@{*/
/**@}*/

/** TWIHS1_TWIHS_MMR_MREAD Master Read Direction **/
#define TWIHS1_TWIHS_MMR_MREAD		(1 << 12)

#define TWIHS1_TWIHS_MMR_IADRSZ_SHIFT		8
#define TWIHS1_TWIHS_MMR_IADRSZ_MASK		0x03
/** @defgroup twihs1_twihs_mmr_iadrsz IADRSZ Internal Device Address Size
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_smr TWIHSSMR Slave Mode Register
@{*/

/** TWIHS1_TWIHS_SMR_DATAMEN Data Matching Enable **/
#define TWIHS1_TWIHS_SMR_DATAMEN		(1 << 31)
/** TWIHS1_TWIHS_SMR_SADR3EN Slave Address 3 Enable **/
#define TWIHS1_TWIHS_SMR_SADR3EN		(1 << 30)
/** TWIHS1_TWIHS_SMR_SADR2EN Slave Address 2 Enable **/
#define TWIHS1_TWIHS_SMR_SADR2EN		(1 << 29)
/** TWIHS1_TWIHS_SMR_SADR1EN Slave Address 1 Enable **/
#define TWIHS1_TWIHS_SMR_SADR1EN		(1 << 28)

#define TWIHS1_TWIHS_SMR_SADR_SHIFT		16
#define TWIHS1_TWIHS_SMR_SADR_MASK		0x7f
/** @defgroup twihs1_twihs_smr_sadr SADR Slave Address
@{*/
/**@}*/


#define TWIHS1_TWIHS_SMR_MASK_SHIFT		8
#define TWIHS1_TWIHS_SMR_MASK_MASK		0x7f
/** @defgroup twihs1_twihs_smr_mask MASK Slave Address Mask
@{*/
/**@}*/

/** TWIHS1_TWIHS_SMR_SCLWSDIS Clock Wait State Disable **/
#define TWIHS1_TWIHS_SMR_SCLWSDIS		(1 << 6)
/** TWIHS1_TWIHS_SMR_SMHH SMBus Host Header **/
#define TWIHS1_TWIHS_SMR_SMHH		(1 << 3)
/** TWIHS1_TWIHS_SMR_SMDA SMBus Default Address **/
#define TWIHS1_TWIHS_SMR_SMDA		(1 << 2)
/** TWIHS1_TWIHS_SMR_NACKEN Slave Receiver Data Phase NACK enable **/
#define TWIHS1_TWIHS_SMR_NACKEN		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_iadr TWIHSIADR Internal Address Register
@{*/


#define TWIHS1_TWIHS_IADR_IADR_SHIFT		0
#define TWIHS1_TWIHS_IADR_IADR_MASK		0xffffff
/** @defgroup twihs1_twihs_iadr_iadr IADR Internal Address
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_cwgr TWIHSCWGR Clock Waveform Generator Register
@{*/


#define TWIHS1_TWIHS_CWGR_HOLD_SHIFT		24
#define TWIHS1_TWIHS_CWGR_HOLD_MASK		0x3f
/** @defgroup twihs1_twihs_cwgr_hold HOLD TWD Hold Time Versus TWCK Falling
@{*/
/**@}*/


#define TWIHS1_TWIHS_CWGR_CKDIV_SHIFT		16
#define TWIHS1_TWIHS_CWGR_CKDIV_MASK		0x07
/** @defgroup twihs1_twihs_cwgr_ckdiv CKDIV Clock Divider
@{*/
/**@}*/


#define TWIHS1_TWIHS_CWGR_CHDIV_SHIFT		8
#define TWIHS1_TWIHS_CWGR_CHDIV_MASK		0xff
/** @defgroup twihs1_twihs_cwgr_chdiv CHDIV Clock High Divider
@{*/
/**@}*/


#define TWIHS1_TWIHS_CWGR_CLDIV_SHIFT		0
#define TWIHS1_TWIHS_CWGR_CLDIV_MASK		0xff
/** @defgroup twihs1_twihs_cwgr_cldiv CLDIV Clock Low Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_sr TWIHSSR Status Register
@{*/

/** TWIHS1_TWIHS_SR_SDA SDA Line Value **/
#define TWIHS1_TWIHS_SR_SDA		(1 << 25)
/** TWIHS1_TWIHS_SR_SCL SCL Line Value **/
#define TWIHS1_TWIHS_SR_SCL		(1 << 24)
/** TWIHS1_TWIHS_SR_SMBHHM SMBus Host Header Address Match (cleared on read) **/
#define TWIHS1_TWIHS_SR_SMBHHM		(1 << 21)
/** TWIHS1_TWIHS_SR_SMBDAM SMBus Default Address Match (cleared on read) **/
#define TWIHS1_TWIHS_SR_SMBDAM		(1 << 20)
/** TWIHS1_TWIHS_SR_PECERR PEC Error (cleared on read) **/
#define TWIHS1_TWIHS_SR_PECERR		(1 << 19)
/** TWIHS1_TWIHS_SR_TOUT Timeout Error (cleared on read) **/
#define TWIHS1_TWIHS_SR_TOUT		(1 << 18)
/** TWIHS1_TWIHS_SR_MCACK Master Code Acknowledge (cleared on read) **/
#define TWIHS1_TWIHS_SR_MCACK		(1 << 16)
/** TWIHS1_TWIHS_SR_EOSACC End Of Slave Access (cleared on read) **/
#define TWIHS1_TWIHS_SR_EOSACC		(1 << 11)
/** TWIHS1_TWIHS_SR_SCLWS Clock Wait State **/
#define TWIHS1_TWIHS_SR_SCLWS		(1 << 10)
/** TWIHS1_TWIHS_SR_ARBLST Arbitration Lost (cleared on read) **/
#define TWIHS1_TWIHS_SR_ARBLST		(1 << 9)
/** TWIHS1_TWIHS_SR_NACK Not Acknowledged (cleared on read) **/
#define TWIHS1_TWIHS_SR_NACK		(1 << 8)
/** TWIHS1_TWIHS_SR_UNRE Underrun Error (cleared on read) **/
#define TWIHS1_TWIHS_SR_UNRE		(1 << 7)
/** TWIHS1_TWIHS_SR_OVRE Overrun Error (cleared on read) **/
#define TWIHS1_TWIHS_SR_OVRE		(1 << 6)
/** TWIHS1_TWIHS_SR_GACC General Call Access (cleared on read) **/
#define TWIHS1_TWIHS_SR_GACC		(1 << 5)
/** TWIHS1_TWIHS_SR_SVACC Slave Access **/
#define TWIHS1_TWIHS_SR_SVACC		(1 << 4)
/** TWIHS1_TWIHS_SR_SVREAD Slave Read **/
#define TWIHS1_TWIHS_SR_SVREAD		(1 << 3)
/** TWIHS1_TWIHS_SR_TXRDY Transmit Holding Register Ready (cleared by writing TWIHS_THR) **/
#define TWIHS1_TWIHS_SR_TXRDY		(1 << 2)
/** TWIHS1_TWIHS_SR_RXRDY Receive Holding Register Ready (cleared by reading TWIHS_RHR) **/
#define TWIHS1_TWIHS_SR_RXRDY		(1 << 1)
/** TWIHS1_TWIHS_SR_TXCOMP Transmission Completed (cleared by writing TWIHS_THR) **/
#define TWIHS1_TWIHS_SR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_ier TWIHSIER Interrupt Enable Register
@{*/

/** TWIHS1_TWIHS_IER_SMBHHM SMBus Host Header Address Match Interrupt Enable **/
#define TWIHS1_TWIHS_IER_SMBHHM		(1 << 21)
/** TWIHS1_TWIHS_IER_SMBDAM SMBus Default Address Match Interrupt Enable **/
#define TWIHS1_TWIHS_IER_SMBDAM		(1 << 20)
/** TWIHS1_TWIHS_IER_PECERR PEC Error Interrupt Enable **/
#define TWIHS1_TWIHS_IER_PECERR		(1 << 19)
/** TWIHS1_TWIHS_IER_TOUT Timeout Error Interrupt Enable **/
#define TWIHS1_TWIHS_IER_TOUT		(1 << 18)
/** TWIHS1_TWIHS_IER_MCACK Master Code Acknowledge Interrupt Enable **/
#define TWIHS1_TWIHS_IER_MCACK		(1 << 16)
/** TWIHS1_TWIHS_IER_EOSACC End Of Slave Access Interrupt Enable **/
#define TWIHS1_TWIHS_IER_EOSACC		(1 << 11)
/** TWIHS1_TWIHS_IER_SCL_WS Clock Wait State Interrupt Enable **/
#define TWIHS1_TWIHS_IER_SCL_WS		(1 << 10)
/** TWIHS1_TWIHS_IER_ARBLST Arbitration Lost Interrupt Enable **/
#define TWIHS1_TWIHS_IER_ARBLST		(1 << 9)
/** TWIHS1_TWIHS_IER_NACK Not Acknowledge Interrupt Enable **/
#define TWIHS1_TWIHS_IER_NACK		(1 << 8)
/** TWIHS1_TWIHS_IER_UNRE Underrun Error Interrupt Enable **/
#define TWIHS1_TWIHS_IER_UNRE		(1 << 7)
/** TWIHS1_TWIHS_IER_OVRE Overrun Error Interrupt Enable **/
#define TWIHS1_TWIHS_IER_OVRE		(1 << 6)
/** TWIHS1_TWIHS_IER_GACC General Call Access Interrupt Enable **/
#define TWIHS1_TWIHS_IER_GACC		(1 << 5)
/** TWIHS1_TWIHS_IER_SVACC Slave Access Interrupt Enable **/
#define TWIHS1_TWIHS_IER_SVACC		(1 << 4)
/** TWIHS1_TWIHS_IER_TXRDY Transmit Holding Register Ready Interrupt Enable **/
#define TWIHS1_TWIHS_IER_TXRDY		(1 << 2)
/** TWIHS1_TWIHS_IER_RXRDY Receive Holding Register Ready Interrupt Enable **/
#define TWIHS1_TWIHS_IER_RXRDY		(1 << 1)
/** TWIHS1_TWIHS_IER_TXCOMP Transmission Completed Interrupt Enable **/
#define TWIHS1_TWIHS_IER_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_idr TWIHSIDR Interrupt Disable Register
@{*/

/** TWIHS1_TWIHS_IDR_SMBHHM SMBus Host Header Address Match Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_SMBHHM		(1 << 21)
/** TWIHS1_TWIHS_IDR_SMBDAM SMBus Default Address Match Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_SMBDAM		(1 << 20)
/** TWIHS1_TWIHS_IDR_PECERR PEC Error Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_PECERR		(1 << 19)
/** TWIHS1_TWIHS_IDR_TOUT Timeout Error Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_TOUT		(1 << 18)
/** TWIHS1_TWIHS_IDR_MCACK Master Code Acknowledge Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_MCACK		(1 << 16)
/** TWIHS1_TWIHS_IDR_EOSACC End Of Slave Access Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_EOSACC		(1 << 11)
/** TWIHS1_TWIHS_IDR_SCL_WS Clock Wait State Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_SCL_WS		(1 << 10)
/** TWIHS1_TWIHS_IDR_ARBLST Arbitration Lost Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_ARBLST		(1 << 9)
/** TWIHS1_TWIHS_IDR_NACK Not Acknowledge Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_NACK		(1 << 8)
/** TWIHS1_TWIHS_IDR_UNRE Underrun Error Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_UNRE		(1 << 7)
/** TWIHS1_TWIHS_IDR_OVRE Overrun Error Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_OVRE		(1 << 6)
/** TWIHS1_TWIHS_IDR_GACC General Call Access Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_GACC		(1 << 5)
/** TWIHS1_TWIHS_IDR_SVACC Slave Access Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_SVACC		(1 << 4)
/** TWIHS1_TWIHS_IDR_TXRDY Transmit Holding Register Ready Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_TXRDY		(1 << 2)
/** TWIHS1_TWIHS_IDR_RXRDY Receive Holding Register Ready Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_RXRDY		(1 << 1)
/** TWIHS1_TWIHS_IDR_TXCOMP Transmission Completed Interrupt Disable **/
#define TWIHS1_TWIHS_IDR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_imr TWIHSIMR Interrupt Mask Register
@{*/

/** TWIHS1_TWIHS_IMR_SMBHHM SMBus Host Header Address Match Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_SMBHHM		(1 << 21)
/** TWIHS1_TWIHS_IMR_SMBDAM SMBus Default Address Match Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_SMBDAM		(1 << 20)
/** TWIHS1_TWIHS_IMR_PECERR PEC Error Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_PECERR		(1 << 19)
/** TWIHS1_TWIHS_IMR_TOUT Timeout Error Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_TOUT		(1 << 18)
/** TWIHS1_TWIHS_IMR_MCACK Master Code Acknowledge Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_MCACK		(1 << 16)
/** TWIHS1_TWIHS_IMR_EOSACC End Of Slave Access Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_EOSACC		(1 << 11)
/** TWIHS1_TWIHS_IMR_SCL_WS Clock Wait State Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_SCL_WS		(1 << 10)
/** TWIHS1_TWIHS_IMR_ARBLST Arbitration Lost Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_ARBLST		(1 << 9)
/** TWIHS1_TWIHS_IMR_NACK Not Acknowledge Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_NACK		(1 << 8)
/** TWIHS1_TWIHS_IMR_UNRE Underrun Error Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_UNRE		(1 << 7)
/** TWIHS1_TWIHS_IMR_OVRE Overrun Error Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_OVRE		(1 << 6)
/** TWIHS1_TWIHS_IMR_GACC General Call Access Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_GACC		(1 << 5)
/** TWIHS1_TWIHS_IMR_SVACC Slave Access Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_SVACC		(1 << 4)
/** TWIHS1_TWIHS_IMR_TXRDY Transmit Holding Register Ready Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_TXRDY		(1 << 2)
/** TWIHS1_TWIHS_IMR_RXRDY Receive Holding Register Ready Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_RXRDY		(1 << 1)
/** TWIHS1_TWIHS_IMR_TXCOMP Transmission Completed Interrupt Mask **/
#define TWIHS1_TWIHS_IMR_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_rhr TWIHSRHR Receive Holding Register
@{*/


#define TWIHS1_TWIHS_RHR_RXDATA_SHIFT		0
#define TWIHS1_TWIHS_RHR_RXDATA_MASK		0xff
/** @defgroup twihs1_twihs_rhr_rxdata RXDATA Master or Slave Receive Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_thr TWIHSTHR Transmit Holding Register
@{*/


#define TWIHS1_TWIHS_THR_TXDATA_SHIFT		0
#define TWIHS1_TWIHS_THR_TXDATA_MASK		0xff
/** @defgroup twihs1_twihs_thr_txdata TXDATA Master or Slave Transmit Holding Data
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_smbtr TWIHSSMBTR SMBus Timing Register
@{*/


#define TWIHS1_TWIHS_SMBTR_THMAX_SHIFT		24
#define TWIHS1_TWIHS_SMBTR_THMAX_MASK		0xff
/** @defgroup twihs1_twihs_smbtr_thmax THMAX Clock High Maximum Cycles
@{*/
/**@}*/


#define TWIHS1_TWIHS_SMBTR_TLOWM_SHIFT		16
#define TWIHS1_TWIHS_SMBTR_TLOWM_MASK		0xff
/** @defgroup twihs1_twihs_smbtr_tlowm TLOWM Master Clock Stretch Maximum Cycles
@{*/
/**@}*/


#define TWIHS1_TWIHS_SMBTR_TLOWS_SHIFT		8
#define TWIHS1_TWIHS_SMBTR_TLOWS_MASK		0xff
/** @defgroup twihs1_twihs_smbtr_tlows TLOWS Slave Clock Stretch Maximum Cycles
@{*/
/**@}*/


#define TWIHS1_TWIHS_SMBTR_PRESC_SHIFT		0
#define TWIHS1_TWIHS_SMBTR_PRESC_MASK		0x0f
/** @defgroup twihs1_twihs_smbtr_presc PRESC SMBus Clock Prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_filtr TWIHSFILTR Filter Register
@{*/


#define TWIHS1_TWIHS_FILTR_THRES_SHIFT		8
#define TWIHS1_TWIHS_FILTR_THRES_MASK		0x07
/** @defgroup twihs1_twihs_filtr_thres THRES Digital Filter Threshold
@{*/
/**@}*/

/** TWIHS1_TWIHS_FILTR_PADFCFG PAD Filter Config **/
#define TWIHS1_TWIHS_FILTR_PADFCFG		(1 << 2)
/** TWIHS1_TWIHS_FILTR_PADFEN PAD Filter Enable **/
#define TWIHS1_TWIHS_FILTR_PADFEN		(1 << 1)
/** TWIHS1_TWIHS_FILTR_FILT RX Digital Filter **/
#define TWIHS1_TWIHS_FILTR_FILT		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_swmr TWIHSSWMR SleepWalking Matching Register
@{*/


#define TWIHS1_TWIHS_SWMR_DATAM_SHIFT		24
#define TWIHS1_TWIHS_SWMR_DATAM_MASK		0xff
/** @defgroup twihs1_twihs_swmr_datam DATAM Data Match
@{*/
/**@}*/


#define TWIHS1_TWIHS_SWMR_SADR3_SHIFT		16
#define TWIHS1_TWIHS_SWMR_SADR3_MASK		0x7f
/** @defgroup twihs1_twihs_swmr_sadr3 SADR3 Slave Address 3
@{*/
/**@}*/


#define TWIHS1_TWIHS_SWMR_SADR2_SHIFT		8
#define TWIHS1_TWIHS_SWMR_SADR2_MASK		0x7f
/** @defgroup twihs1_twihs_swmr_sadr2 SADR2 Slave Address 2
@{*/
/**@}*/


#define TWIHS1_TWIHS_SWMR_SADR1_SHIFT		0
#define TWIHS1_TWIHS_SWMR_SADR1_MASK		0x7f
/** @defgroup twihs1_twihs_swmr_sadr1 SADR1 Slave Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup twihs1_twihs_wpmr TWIHSWPMR Write Protection Mode Register
@{*/


#define TWIHS1_TWIHS_WPMR_WPKEY_SHIFT		8
#define TWIHS1_TWIHS_WPMR_WPKEY_MASK		0xffffff
/** @defgroup twihs1_twihs_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** TWIHS1_TWIHS_WPMR_WPEN Write Protection Enable **/
#define TWIHS1_TWIHS_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup twihs1_twihs_wpsr TWIHSWPSR Write Protection Status Register
@{*/


#define TWIHS1_TWIHS_WPSR_WPVSRC_SHIFT		8
#define TWIHS1_TWIHS_WPSR_WPVSRC_MASK		0xffffff
/** @defgroup twihs1_twihs_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** TWIHS1_TWIHS_WPSR_WPVS Write Protection Violation Status **/
#define TWIHS1_TWIHS_WPSR_WPVS		(1 << 0)

/**@}*/

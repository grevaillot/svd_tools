#pragma once 

/* --- I2S2ext: Serial peripheral interface/Inter-IC2 --------------- */

/** @defgroup i2s2ext_registers Serial peripheral
      interface/Inter-IC2 Register
@{*/

/** I2S2ext_CR1 control register 1 **/
#define I2S2ext_CR1			MMIO32(I2S2ext_BASE + 0x00)
/** I2S2ext_CR2 control register 2 **/
#define I2S2ext_CR2			MMIO32(I2S2ext_BASE + 0x04)
/** I2S2ext_SR status register **/
#define I2S2ext_SR			MMIO32(I2S2ext_BASE + 0x08)
/** I2S2ext_DR data register **/
#define I2S2ext_DR			MMIO32(I2S2ext_BASE + 0x0c)
/** I2S2ext_CRCPR CRC polynomial register **/
#define I2S2ext_CRCPR			MMIO32(I2S2ext_BASE + 0x10)
/** I2S2ext_RXCRCR RX CRC register **/
#define I2S2ext_RXCRCR			MMIO32(I2S2ext_BASE + 0x14)
/** I2S2ext_TXCRCR TX CRC register **/
#define I2S2ext_TXCRCR			MMIO32(I2S2ext_BASE + 0x18)
/** I2S2ext_I2SCFGR I2S configuration register **/
#define I2S2ext_I2SCFGR			MMIO32(I2S2ext_BASE + 0x1c)
/** I2S2ext_I2SPR I2S prescaler register **/
#define I2S2ext_I2SPR			MMIO32(I2S2ext_BASE + 0x20)

/**@}*/


/** @defgroup i2s2ext_cr1 CR1 control register 1
@{*/

/** I2S2ext_CR1_BIDIMODE Bidirectional data mode enable **/
#define I2S2ext_CR1_BIDIMODE		(1 << 15)
/** I2S2ext_CR1_BIDIOE Output enable in bidirectional mode **/
#define I2S2ext_CR1_BIDIOE		(1 << 14)
/** I2S2ext_CR1_CRCEN Hardware CRC calculation enable **/
#define I2S2ext_CR1_CRCEN		(1 << 13)
/** I2S2ext_CR1_CRCNEXT CRC transfer next **/
#define I2S2ext_CR1_CRCNEXT		(1 << 12)
/** I2S2ext_CR1_DFF Data frame format **/
#define I2S2ext_CR1_DFF		(1 << 11)
/** I2S2ext_CR1_RXONLY Receive only **/
#define I2S2ext_CR1_RXONLY		(1 << 10)
/** I2S2ext_CR1_SSM Software slave management **/
#define I2S2ext_CR1_SSM		(1 << 9)
/** I2S2ext_CR1_SSI Internal slave select **/
#define I2S2ext_CR1_SSI		(1 << 8)
/** I2S2ext_CR1_LSBFIRST Frame format **/
#define I2S2ext_CR1_LSBFIRST		(1 << 7)
/** I2S2ext_CR1_SPE SPI enable **/
#define I2S2ext_CR1_SPE		(1 << 6)

#define I2S2ext_CR1_BR_SHIFT		3
#define I2S2ext_CR1_BR_MASK		0x07
/** @defgroup i2s2ext_cr1_br BR Baud rate control
@{*/
/**@}*/

/** I2S2ext_CR1_MSTR Master selection **/
#define I2S2ext_CR1_MSTR		(1 << 2)
/** I2S2ext_CR1_CPOL Clock polarity **/
#define I2S2ext_CR1_CPOL		(1 << 1)
/** I2S2ext_CR1_CPHA Clock phase **/
#define I2S2ext_CR1_CPHA		(1 << 0)

/**@}*/

/** @defgroup i2s2ext_cr2 CR2 control register 2
@{*/

/** I2S2ext_CR2_LDMA_TX Last DMA transfer for transmission **/
#define I2S2ext_CR2_LDMA_TX		(1 << 14)
/** I2S2ext_CR2_LDMA_RX Last DMA transfer for reception **/
#define I2S2ext_CR2_LDMA_RX		(1 << 13)
/** I2S2ext_CR2_FRXTH FIFO reception threshold **/
#define I2S2ext_CR2_FRXTH		(1 << 12)

#define I2S2ext_CR2_DS_SHIFT		8
#define I2S2ext_CR2_DS_MASK		0x0f
/** @defgroup i2s2ext_cr2_ds DS Data size
@{*/
/**@}*/

/** I2S2ext_CR2_TXEIE Tx buffer empty interrupt enable **/
#define I2S2ext_CR2_TXEIE		(1 << 7)
/** I2S2ext_CR2_RXNEIE RX buffer not empty interrupt enable **/
#define I2S2ext_CR2_RXNEIE		(1 << 6)
/** I2S2ext_CR2_ERRIE Error interrupt enable **/
#define I2S2ext_CR2_ERRIE		(1 << 5)
/** I2S2ext_CR2_FRF Frame format **/
#define I2S2ext_CR2_FRF		(1 << 4)
/** I2S2ext_CR2_NSSP NSS pulse management **/
#define I2S2ext_CR2_NSSP		(1 << 3)
/** I2S2ext_CR2_SSOE SS output enable **/
#define I2S2ext_CR2_SSOE		(1 << 2)
/** I2S2ext_CR2_TXDMAEN Tx buffer DMA enable **/
#define I2S2ext_CR2_TXDMAEN		(1 << 1)
/** I2S2ext_CR2_RXDMAEN Rx buffer DMA enable **/
#define I2S2ext_CR2_RXDMAEN		(1 << 0)

/**@}*/

/** @defgroup i2s2ext_sr SR status register
@{*/


#define I2S2ext_SR_FTLVL_SHIFT		11
#define I2S2ext_SR_FTLVL_MASK		0x03
/** @defgroup i2s2ext_sr_ftlvl FTLVL FIFO transmission level
@{*/
/**@}*/


#define I2S2ext_SR_FRLVL_SHIFT		9
#define I2S2ext_SR_FRLVL_MASK		0x03
/** @defgroup i2s2ext_sr_frlvl FRLVL FIFO reception level
@{*/
/**@}*/

/** I2S2ext_SR_TIFRFE TI frame format error **/
#define I2S2ext_SR_TIFRFE		(1 << 8)
/** I2S2ext_SR_BSY Busy flag **/
#define I2S2ext_SR_BSY		(1 << 7)
/** I2S2ext_SR_OVR Overrun flag **/
#define I2S2ext_SR_OVR		(1 << 6)
/** I2S2ext_SR_MODF Mode fault **/
#define I2S2ext_SR_MODF		(1 << 5)
/** I2S2ext_SR_CRCERR CRC error flag **/
#define I2S2ext_SR_CRCERR		(1 << 4)
/** I2S2ext_SR_UDR Underrun flag **/
#define I2S2ext_SR_UDR		(1 << 3)
/** I2S2ext_SR_CHSIDE Channel side **/
#define I2S2ext_SR_CHSIDE		(1 << 2)
/** I2S2ext_SR_TXE Transmit buffer empty **/
#define I2S2ext_SR_TXE		(1 << 1)
/** I2S2ext_SR_RXNE Receive buffer not empty **/
#define I2S2ext_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup i2s2ext_dr DR data register
@{*/


#define I2S2ext_DR_DR_SHIFT		0
#define I2S2ext_DR_DR_MASK		0xffff
/** @defgroup i2s2ext_dr_dr DR Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2s2ext_crcpr CRCPR CRC polynomial register
@{*/


#define I2S2ext_CRCPR_CRCPOLY_SHIFT		0
#define I2S2ext_CRCPR_CRCPOLY_MASK		0xffff
/** @defgroup i2s2ext_crcpr_crcpoly CRCPOLY CRC polynomial register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2s2ext_rxcrcr RXCRCR RX CRC register
@{*/


#define I2S2ext_RXCRCR_RxCRC_SHIFT		0
#define I2S2ext_RXCRCR_RxCRC_MASK		0xffff
/** @defgroup i2s2ext_rxcrcr_rxcrc RxCRC Rx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2s2ext_txcrcr TXCRCR TX CRC register
@{*/


#define I2S2ext_TXCRCR_TxCRC_SHIFT		0
#define I2S2ext_TXCRCR_TxCRC_MASK		0xffff
/** @defgroup i2s2ext_txcrcr_txcrc TxCRC Tx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2s2ext_i2scfgr I2SCFGR I2S configuration register
@{*/

/** I2S2ext_I2SCFGR_I2SMOD I2S mode selection **/
#define I2S2ext_I2SCFGR_I2SMOD		(1 << 11)
/** I2S2ext_I2SCFGR_I2SE I2S Enable **/
#define I2S2ext_I2SCFGR_I2SE		(1 << 10)

#define I2S2ext_I2SCFGR_I2SCFG_SHIFT		8
#define I2S2ext_I2SCFGR_I2SCFG_MASK		0x03
/** @defgroup i2s2ext_i2scfgr_i2scfg I2SCFG I2S configuration mode
@{*/
/**@}*/

/** I2S2ext_I2SCFGR_PCMSYNC PCM frame synchronization **/
#define I2S2ext_I2SCFGR_PCMSYNC		(1 << 7)

#define I2S2ext_I2SCFGR_I2SSTD_SHIFT		4
#define I2S2ext_I2SCFGR_I2SSTD_MASK		0x03
/** @defgroup i2s2ext_i2scfgr_i2sstd I2SSTD I2S standard selection
@{*/
/**@}*/

/** I2S2ext_I2SCFGR_CKPOL Steady state clock polarity **/
#define I2S2ext_I2SCFGR_CKPOL		(1 << 3)

#define I2S2ext_I2SCFGR_DATLEN_SHIFT		1
#define I2S2ext_I2SCFGR_DATLEN_MASK		0x03
/** @defgroup i2s2ext_i2scfgr_datlen DATLEN Data length to be transferred
@{*/
/**@}*/

/** I2S2ext_I2SCFGR_CHLEN Channel length (number of bits per audio channel) **/
#define I2S2ext_I2SCFGR_CHLEN		(1 << 0)

/**@}*/

/** @defgroup i2s2ext_i2spr I2SPR I2S prescaler register
@{*/

/** I2S2ext_I2SPR_MCKOE Master clock output enable **/
#define I2S2ext_I2SPR_MCKOE		(1 << 9)
/** I2S2ext_I2SPR_ODD Odd factor for the prescaler **/
#define I2S2ext_I2SPR_ODD		(1 << 8)

#define I2S2ext_I2SPR_I2SDIV_SHIFT		0
#define I2S2ext_I2SPR_I2SDIV_MASK		0xff
/** @defgroup i2s2ext_i2spr_i2sdiv I2SDIV I2S Linear prescaler
@{*/
/**@}*/


/**@}*/

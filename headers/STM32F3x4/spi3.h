#pragma once 

/* --- SPI3: Serial peripheral interface/Inter-IC2 ------------------ */

/** @defgroup spi3_registers Serial peripheral
      interface/Inter-IC2 Register
@{*/

/** SPI3_CR1 control register 1 **/
#define SPI3_CR1			MMIO32(SPI3_BASE + 0x00)
/** SPI3_CR2 control register 2 **/
#define SPI3_CR2			MMIO32(SPI3_BASE + 0x04)
/** SPI3_SR status register **/
#define SPI3_SR			MMIO32(SPI3_BASE + 0x08)
/** SPI3_DR data register **/
#define SPI3_DR			MMIO32(SPI3_BASE + 0x0c)
/** SPI3_CRCPR CRC polynomial register **/
#define SPI3_CRCPR			MMIO32(SPI3_BASE + 0x10)
/** SPI3_RXCRCR RX CRC register **/
#define SPI3_RXCRCR			MMIO32(SPI3_BASE + 0x14)
/** SPI3_TXCRCR TX CRC register **/
#define SPI3_TXCRCR			MMIO32(SPI3_BASE + 0x18)
/** SPI3_I2SCFGR I2S configuration register **/
#define SPI3_I2SCFGR			MMIO32(SPI3_BASE + 0x1c)
/** SPI3_I2SPR I2S prescaler register **/
#define SPI3_I2SPR			MMIO32(SPI3_BASE + 0x20)

/**@}*/


/** @defgroup spi3_cr1 CR1 control register 1
@{*/

/** SPI3_CR1_BIDIMODE Bidirectional data mode enable **/
#define SPI3_CR1_BIDIMODE		(1 << 15)
/** SPI3_CR1_BIDIOE Output enable in bidirectional mode **/
#define SPI3_CR1_BIDIOE		(1 << 14)
/** SPI3_CR1_CRCEN Hardware CRC calculation enable **/
#define SPI3_CR1_CRCEN		(1 << 13)
/** SPI3_CR1_CRCNEXT CRC transfer next **/
#define SPI3_CR1_CRCNEXT		(1 << 12)
/** SPI3_CR1_CRCL Data frame format **/
#define SPI3_CR1_CRCL		(1 << 11)
/** SPI3_CR1_RXONLY Receive only **/
#define SPI3_CR1_RXONLY		(1 << 10)
/** SPI3_CR1_SSM Software slave management **/
#define SPI3_CR1_SSM		(1 << 9)
/** SPI3_CR1_SSI Internal slave select **/
#define SPI3_CR1_SSI		(1 << 8)
/** SPI3_CR1_LSBFIRST Frame format **/
#define SPI3_CR1_LSBFIRST		(1 << 7)
/** SPI3_CR1_SPE SPI enable **/
#define SPI3_CR1_SPE		(1 << 6)

#define SPI3_CR1_BR_SHIFT		3
#define SPI3_CR1_BR_MASK		0x07
/** @defgroup spi3_cr1_br BR Baud rate control
@{*/
/**@}*/

/** SPI3_CR1_MSTR Master selection **/
#define SPI3_CR1_MSTR		(1 << 2)
/** SPI3_CR1_CPOL Clock polarity **/
#define SPI3_CR1_CPOL		(1 << 1)
/** SPI3_CR1_CPHA Clock phase **/
#define SPI3_CR1_CPHA		(1 << 0)

/**@}*/

/** @defgroup spi3_cr2 CR2 control register 2
@{*/

/** SPI3_CR2_LDMA_TX Last DMA transfer for transmission **/
#define SPI3_CR2_LDMA_TX		(1 << 14)
/** SPI3_CR2_LDMA_RX Last DMA transfer for reception **/
#define SPI3_CR2_LDMA_RX		(1 << 13)
/** SPI3_CR2_FRXTH FIFO reception threshold **/
#define SPI3_CR2_FRXTH		(1 << 12)

#define SPI3_CR2_DS_SHIFT		8
#define SPI3_CR2_DS_MASK		0x0f
/** @defgroup spi3_cr2_ds DS Data size
@{*/
/**@}*/

/** SPI3_CR2_TXEIE Tx buffer empty interrupt enable **/
#define SPI3_CR2_TXEIE		(1 << 7)
/** SPI3_CR2_RXNEIE RX buffer not empty interrupt enable **/
#define SPI3_CR2_RXNEIE		(1 << 6)
/** SPI3_CR2_ERRIE Error interrupt enable **/
#define SPI3_CR2_ERRIE		(1 << 5)
/** SPI3_CR2_FRF Frame format **/
#define SPI3_CR2_FRF		(1 << 4)
/** SPI3_CR2_NSSP NSS pulse management **/
#define SPI3_CR2_NSSP		(1 << 3)
/** SPI3_CR2_SSOE SS output enable **/
#define SPI3_CR2_SSOE		(1 << 2)
/** SPI3_CR2_TXDMAEN Tx buffer DMA enable **/
#define SPI3_CR2_TXDMAEN		(1 << 1)
/** SPI3_CR2_RXDMAEN Rx buffer DMA enable **/
#define SPI3_CR2_RXDMAEN		(1 << 0)

/**@}*/

/** @defgroup spi3_sr SR status register
@{*/


#define SPI3_SR_FTLVL_SHIFT		11
#define SPI3_SR_FTLVL_MASK		0x03
/** @defgroup spi3_sr_ftlvl FTLVL FIFO transmission level
@{*/
/**@}*/


#define SPI3_SR_FRLVL_SHIFT		9
#define SPI3_SR_FRLVL_MASK		0x03
/** @defgroup spi3_sr_frlvl FRLVL FIFO reception level
@{*/
/**@}*/

/** SPI3_SR_TIFRFE TI frame format error **/
#define SPI3_SR_TIFRFE		(1 << 8)
/** SPI3_SR_BSY Busy flag **/
#define SPI3_SR_BSY		(1 << 7)
/** SPI3_SR_OVR Overrun flag **/
#define SPI3_SR_OVR		(1 << 6)
/** SPI3_SR_MODF Mode fault **/
#define SPI3_SR_MODF		(1 << 5)
/** SPI3_SR_CRCERR CRC error flag **/
#define SPI3_SR_CRCERR		(1 << 4)
/** SPI3_SR_UDR Underrun flag **/
#define SPI3_SR_UDR		(1 << 3)
/** SPI3_SR_CHSIDE Channel side **/
#define SPI3_SR_CHSIDE		(1 << 2)
/** SPI3_SR_TXE Transmit buffer empty **/
#define SPI3_SR_TXE		(1 << 1)
/** SPI3_SR_RXNE Receive buffer not empty **/
#define SPI3_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup spi3_dr DR data register
@{*/


#define SPI3_DR_DR_SHIFT		0
#define SPI3_DR_DR_MASK		0xffff
/** @defgroup spi3_dr_dr DR Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi3_crcpr CRCPR CRC polynomial register
@{*/


#define SPI3_CRCPR_CRCPOLY_SHIFT		0
#define SPI3_CRCPR_CRCPOLY_MASK		0xffff
/** @defgroup spi3_crcpr_crcpoly CRCPOLY CRC polynomial register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi3_rxcrcr RXCRCR RX CRC register
@{*/


#define SPI3_RXCRCR_RxCRC_SHIFT		0
#define SPI3_RXCRCR_RxCRC_MASK		0xffff
/** @defgroup spi3_rxcrcr_rxcrc RxCRC Rx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi3_txcrcr TXCRCR TX CRC register
@{*/


#define SPI3_TXCRCR_TxCRC_SHIFT		0
#define SPI3_TXCRCR_TxCRC_MASK		0xffff
/** @defgroup spi3_txcrcr_txcrc TxCRC Tx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi3_i2scfgr I2SCFGR I2S configuration register
@{*/

/** SPI3_I2SCFGR_I2SMOD I2S mode selection **/
#define SPI3_I2SCFGR_I2SMOD		(1 << 11)
/** SPI3_I2SCFGR_I2SE I2S Enable **/
#define SPI3_I2SCFGR_I2SE		(1 << 10)

#define SPI3_I2SCFGR_I2SCFG_SHIFT		8
#define SPI3_I2SCFGR_I2SCFG_MASK		0x03
/** @defgroup spi3_i2scfgr_i2scfg I2SCFG I2S configuration mode
@{*/
/**@}*/

/** SPI3_I2SCFGR_PCMSYNC PCM frame synchronization **/
#define SPI3_I2SCFGR_PCMSYNC		(1 << 7)

#define SPI3_I2SCFGR_I2SSTD_SHIFT		4
#define SPI3_I2SCFGR_I2SSTD_MASK		0x03
/** @defgroup spi3_i2scfgr_i2sstd I2SSTD I2S standard selection
@{*/
/**@}*/

/** SPI3_I2SCFGR_CKPOL Steady state clock polarity **/
#define SPI3_I2SCFGR_CKPOL		(1 << 3)

#define SPI3_I2SCFGR_DATLEN_SHIFT		1
#define SPI3_I2SCFGR_DATLEN_MASK		0x03
/** @defgroup spi3_i2scfgr_datlen DATLEN Data length to be transferred
@{*/
/**@}*/

/** SPI3_I2SCFGR_CHLEN Channel length (number of bits per audio channel) **/
#define SPI3_I2SCFGR_CHLEN		(1 << 0)

/**@}*/

/** @defgroup spi3_i2spr I2SPR I2S prescaler register
@{*/

/** SPI3_I2SPR_MCKOE Master clock output enable **/
#define SPI3_I2SPR_MCKOE		(1 << 9)
/** SPI3_I2SPR_ODD Odd factor for the prescaler **/
#define SPI3_I2SPR_ODD		(1 << 8)

#define SPI3_I2SPR_I2SDIV_SHIFT		0
#define SPI3_I2SPR_I2SDIV_MASK		0xff
/** @defgroup spi3_i2spr_i2sdiv I2SDIV I2S Linear prescaler
@{*/
/**@}*/


/**@}*/

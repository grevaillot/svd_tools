#pragma once 

/* --- SPI1: Serial peripheral interface/Inter-IC sound ------------- */

/** @defgroup spi1_registers Serial peripheral interface/Inter-IC       sound Register
@{*/

/** SPI1_CR1 control register 1 **/
#define SPI1_CR1			MMIO32(SPI1_BASE + 0x00)
/** SPI1_CR2 control register 2 **/
#define SPI1_CR2			MMIO32(SPI1_BASE + 0x04)
/** SPI1_SR status register **/
#define SPI1_SR			MMIO32(SPI1_BASE + 0x08)
/** SPI1_DR data register **/
#define SPI1_DR			MMIO32(SPI1_BASE + 0x0c)
/** SPI1_CRCPR CRC polynomial register **/
#define SPI1_CRCPR			MMIO32(SPI1_BASE + 0x10)
/** SPI1_RXCRCR RX CRC register **/
#define SPI1_RXCRCR			MMIO32(SPI1_BASE + 0x14)
/** SPI1_TXCRCR TX CRC register **/
#define SPI1_TXCRCR			MMIO32(SPI1_BASE + 0x18)
/** SPI1_I2SCFGR configuration register **/
#define SPI1_I2SCFGR			MMIO32(SPI1_BASE + 0x1c)
/** SPI1_I2SPR prescaler register **/
#define SPI1_I2SPR			MMIO32(SPI1_BASE + 0x20)

/**@}*/


/** @defgroup spi1_cr1 CR1 control register 1
@{*/

/** SPI1_CR1_BIDIMODE Bidirectional data mode enable **/
#define SPI1_CR1_BIDIMODE		(1 << 15)
/** SPI1_CR1_BIDIOE Output enable in bidirectional mode **/
#define SPI1_CR1_BIDIOE		(1 << 14)
/** SPI1_CR1_CRCEN Hardware CRC calculation enable **/
#define SPI1_CR1_CRCEN		(1 << 13)
/** SPI1_CR1_CRCNEXT CRC transfer next **/
#define SPI1_CR1_CRCNEXT		(1 << 12)
/** SPI1_CR1_DFF Data frame format **/
#define SPI1_CR1_DFF		(1 << 11)
/** SPI1_CR1_RXONLY Receive only **/
#define SPI1_CR1_RXONLY		(1 << 10)
/** SPI1_CR1_SSM Software slave management **/
#define SPI1_CR1_SSM		(1 << 9)
/** SPI1_CR1_SSI Internal slave select **/
#define SPI1_CR1_SSI		(1 << 8)
/** SPI1_CR1_LSBFIRST Frame format **/
#define SPI1_CR1_LSBFIRST		(1 << 7)
/** SPI1_CR1_SPE SPI enable **/
#define SPI1_CR1_SPE		(1 << 6)

#define SPI1_CR1_BR_SHIFT		3
#define SPI1_CR1_BR_MASK		0x07
/** @defgroup spi1_cr1_br BR Baud rate control
@{*/
/**@}*/

/** SPI1_CR1_MSTR Master selection **/
#define SPI1_CR1_MSTR		(1 << 2)
/** SPI1_CR1_CPOL Clock polarity **/
#define SPI1_CR1_CPOL		(1 << 1)
/** SPI1_CR1_CPHA Clock phase **/
#define SPI1_CR1_CPHA		(1 << 0)

/**@}*/

/** @defgroup spi1_cr2 CR2 control register 2
@{*/

/** SPI1_CR2_LDMA_TX Last DMA transfer for transmission **/
#define SPI1_CR2_LDMA_TX		(1 << 14)
/** SPI1_CR2_LDMA_RX Last DMA transfer for reception **/
#define SPI1_CR2_LDMA_RX		(1 << 13)
/** SPI1_CR2_FRXTH FIFO reception threshold **/
#define SPI1_CR2_FRXTH		(1 << 12)

#define SPI1_CR2_DS_SHIFT		8
#define SPI1_CR2_DS_MASK		0x0f
/** @defgroup spi1_cr2_ds DS Data size
@{*/
/**@}*/

/** SPI1_CR2_TXEIE Tx buffer empty interrupt enable **/
#define SPI1_CR2_TXEIE		(1 << 7)
/** SPI1_CR2_RXNEIE RX buffer not empty interrupt enable **/
#define SPI1_CR2_RXNEIE		(1 << 6)
/** SPI1_CR2_ERRIE Error interrupt enable **/
#define SPI1_CR2_ERRIE		(1 << 5)
/** SPI1_CR2_FRF Frame format **/
#define SPI1_CR2_FRF		(1 << 4)
/** SPI1_CR2_NSSP NSS pulse management **/
#define SPI1_CR2_NSSP		(1 << 3)
/** SPI1_CR2_SSOE SS output enable **/
#define SPI1_CR2_SSOE		(1 << 2)
/** SPI1_CR2_TXDMAEN Tx buffer DMA enable **/
#define SPI1_CR2_TXDMAEN		(1 << 1)
/** SPI1_CR2_RXDMAEN Rx buffer DMA enable **/
#define SPI1_CR2_RXDMAEN		(1 << 0)

/**@}*/

/** @defgroup spi1_sr SR status register
@{*/


#define SPI1_SR_FTLVL_SHIFT		11
#define SPI1_SR_FTLVL_MASK		0x03
/** @defgroup spi1_sr_ftlvl FTLVL FIFO transmission level
@{*/
/**@}*/


#define SPI1_SR_FRLVL_SHIFT		9
#define SPI1_SR_FRLVL_MASK		0x03
/** @defgroup spi1_sr_frlvl FRLVL FIFO reception level
@{*/
/**@}*/

/** SPI1_SR_TIFRFE TI frame format error **/
#define SPI1_SR_TIFRFE		(1 << 8)
/** SPI1_SR_BSY Busy flag **/
#define SPI1_SR_BSY		(1 << 7)
/** SPI1_SR_OVR Overrun flag **/
#define SPI1_SR_OVR		(1 << 6)
/** SPI1_SR_MODF Mode fault **/
#define SPI1_SR_MODF		(1 << 5)
/** SPI1_SR_CRCERR CRC error flag **/
#define SPI1_SR_CRCERR		(1 << 4)
/** SPI1_SR_TXE Transmit buffer empty **/
#define SPI1_SR_TXE		(1 << 1)
/** SPI1_SR_RXNE Receive buffer not empty **/
#define SPI1_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup spi1_dr DR data register
@{*/


#define SPI1_DR_DR_SHIFT		0
#define SPI1_DR_DR_MASK		0xffff
/** @defgroup spi1_dr_dr DR Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_crcpr CRCPR CRC polynomial register
@{*/


#define SPI1_CRCPR_CRCPOLY_SHIFT		0
#define SPI1_CRCPR_CRCPOLY_MASK		0xffff
/** @defgroup spi1_crcpr_crcpoly CRCPOLY CRC polynomial register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_rxcrcr RXCRCR RX CRC register
@{*/


#define SPI1_RXCRCR_RxCRC_SHIFT		0
#define SPI1_RXCRCR_RxCRC_MASK		0xffff
/** @defgroup spi1_rxcrcr_rxcrc RxCRC Rx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_txcrcr TXCRCR TX CRC register
@{*/


#define SPI1_TXCRCR_TxCRC_SHIFT		0
#define SPI1_TXCRCR_TxCRC_MASK		0xffff
/** @defgroup spi1_txcrcr_txcrc TxCRC Tx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi1_i2scfgr I2SCFGR configuration register
@{*/

/** SPI1_I2SCFGR_I2SMOD I2SMOD **/
#define SPI1_I2SCFGR_I2SMOD		(1 << 11)
/** SPI1_I2SCFGR_I2SE I2SE **/
#define SPI1_I2SCFGR_I2SE		(1 << 10)

#define SPI1_I2SCFGR_I2SCFG_SHIFT		8
#define SPI1_I2SCFGR_I2SCFG_MASK		0x03
/** @defgroup spi1_i2scfgr_i2scfg I2SCFG I2SCFG
@{*/
/**@}*/

/** SPI1_I2SCFGR_PCMSYNC PCMSYNC **/
#define SPI1_I2SCFGR_PCMSYNC		(1 << 7)

#define SPI1_I2SCFGR_I2SSTD_SHIFT		4
#define SPI1_I2SCFGR_I2SSTD_MASK		0x03
/** @defgroup spi1_i2scfgr_i2sstd I2SSTD I2SSTD
@{*/
/**@}*/

/** SPI1_I2SCFGR_CKPOL CKPOL **/
#define SPI1_I2SCFGR_CKPOL		(1 << 3)

#define SPI1_I2SCFGR_DATLEN_SHIFT		1
#define SPI1_I2SCFGR_DATLEN_MASK		0x03
/** @defgroup spi1_i2scfgr_datlen DATLEN DATLEN
@{*/
/**@}*/

/** SPI1_I2SCFGR_CHLEN CHLEN **/
#define SPI1_I2SCFGR_CHLEN		(1 << 0)

/**@}*/

/** @defgroup spi1_i2spr I2SPR prescaler register
@{*/

/** SPI1_I2SPR_MCKOE MCKOE **/
#define SPI1_I2SPR_MCKOE		(1 << 9)
/** SPI1_I2SPR_ODD ODD **/
#define SPI1_I2SPR_ODD		(1 << 8)

#define SPI1_I2SPR_I2SDIV_SHIFT		0
#define SPI1_I2SPR_I2SDIV_MASK		0xff
/** @defgroup spi1_i2spr_i2sdiv I2SDIV I2SDIV
@{*/
/**@}*/


/**@}*/
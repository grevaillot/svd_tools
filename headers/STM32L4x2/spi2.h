#pragma once 

/* --- SPI2: Serial peripheral interface/Inter-IC sound ------------- */

/** @defgroup spi2_registers Serial peripheral interface/Inter-IC
      sound Register
@{*/

/** SPI2_CR1 control register 1 **/
#define SPI2_CR1			MMIO32(SPI2_BASE + 0x00)
/** SPI2_CR2 control register 2 **/
#define SPI2_CR2			MMIO32(SPI2_BASE + 0x04)
/** SPI2_SR status register **/
#define SPI2_SR			MMIO32(SPI2_BASE + 0x08)
/** SPI2_DR data register **/
#define SPI2_DR			MMIO32(SPI2_BASE + 0x0c)
/** SPI2_CRCPR CRC polynomial register **/
#define SPI2_CRCPR			MMIO32(SPI2_BASE + 0x10)
/** SPI2_RXCRCR RX CRC register **/
#define SPI2_RXCRCR			MMIO32(SPI2_BASE + 0x14)
/** SPI2_TXCRCR TX CRC register **/
#define SPI2_TXCRCR			MMIO32(SPI2_BASE + 0x18)

/**@}*/


/** @defgroup spi2_cr1 CR1 control register 1
@{*/

/** SPI2_CR1_BIDIMODE Bidirectional data mode enable **/
#define SPI2_CR1_BIDIMODE		(1 << 15)
/** SPI2_CR1_BIDIOE Output enable in bidirectional mode **/
#define SPI2_CR1_BIDIOE		(1 << 14)
/** SPI2_CR1_CRCEN Hardware CRC calculation enable **/
#define SPI2_CR1_CRCEN		(1 << 13)
/** SPI2_CR1_CRCNEXT CRC transfer next **/
#define SPI2_CR1_CRCNEXT		(1 << 12)
/** SPI2_CR1_DFF Data frame format **/
#define SPI2_CR1_DFF		(1 << 11)
/** SPI2_CR1_RXONLY Receive only **/
#define SPI2_CR1_RXONLY		(1 << 10)
/** SPI2_CR1_SSM Software slave management **/
#define SPI2_CR1_SSM		(1 << 9)
/** SPI2_CR1_SSI Internal slave select **/
#define SPI2_CR1_SSI		(1 << 8)
/** SPI2_CR1_LSBFIRST Frame format **/
#define SPI2_CR1_LSBFIRST		(1 << 7)
/** SPI2_CR1_SPE SPI enable **/
#define SPI2_CR1_SPE		(1 << 6)

#define SPI2_CR1_BR_SHIFT		3
#define SPI2_CR1_BR_MASK		0x07
/** @defgroup spi2_cr1_br BR Baud rate control
@{*/
/**@}*/

/** SPI2_CR1_MSTR Master selection **/
#define SPI2_CR1_MSTR		(1 << 2)
/** SPI2_CR1_CPOL Clock polarity **/
#define SPI2_CR1_CPOL		(1 << 1)
/** SPI2_CR1_CPHA Clock phase **/
#define SPI2_CR1_CPHA		(1 << 0)

/**@}*/

/** @defgroup spi2_cr2 CR2 control register 2
@{*/

/** SPI2_CR2_LDMA_TX Last DMA transfer for transmission **/
#define SPI2_CR2_LDMA_TX		(1 << 14)
/** SPI2_CR2_LDMA_RX Last DMA transfer for reception **/
#define SPI2_CR2_LDMA_RX		(1 << 13)
/** SPI2_CR2_FRXTH FIFO reception threshold **/
#define SPI2_CR2_FRXTH		(1 << 12)

#define SPI2_CR2_DS_SHIFT		8
#define SPI2_CR2_DS_MASK		0x0f
/** @defgroup spi2_cr2_ds DS Data size
@{*/
/**@}*/

/** SPI2_CR2_TXEIE Tx buffer empty interrupt enable **/
#define SPI2_CR2_TXEIE		(1 << 7)
/** SPI2_CR2_RXNEIE RX buffer not empty interrupt enable **/
#define SPI2_CR2_RXNEIE		(1 << 6)
/** SPI2_CR2_ERRIE Error interrupt enable **/
#define SPI2_CR2_ERRIE		(1 << 5)
/** SPI2_CR2_FRF Frame format **/
#define SPI2_CR2_FRF		(1 << 4)
/** SPI2_CR2_NSSP NSS pulse management **/
#define SPI2_CR2_NSSP		(1 << 3)
/** SPI2_CR2_SSOE SS output enable **/
#define SPI2_CR2_SSOE		(1 << 2)
/** SPI2_CR2_TXDMAEN Tx buffer DMA enable **/
#define SPI2_CR2_TXDMAEN		(1 << 1)
/** SPI2_CR2_RXDMAEN Rx buffer DMA enable **/
#define SPI2_CR2_RXDMAEN		(1 << 0)

/**@}*/

/** @defgroup spi2_sr SR status register
@{*/


#define SPI2_SR_FTLVL_SHIFT		11
#define SPI2_SR_FTLVL_MASK		0x03
/** @defgroup spi2_sr_ftlvl FTLVL FIFO transmission level
@{*/
/**@}*/


#define SPI2_SR_FRLVL_SHIFT		9
#define SPI2_SR_FRLVL_MASK		0x03
/** @defgroup spi2_sr_frlvl FRLVL FIFO reception level
@{*/
/**@}*/

/** SPI2_SR_TIFRFE TI frame format error **/
#define SPI2_SR_TIFRFE		(1 << 8)
/** SPI2_SR_BSY Busy flag **/
#define SPI2_SR_BSY		(1 << 7)
/** SPI2_SR_OVR Overrun flag **/
#define SPI2_SR_OVR		(1 << 6)
/** SPI2_SR_MODF Mode fault **/
#define SPI2_SR_MODF		(1 << 5)
/** SPI2_SR_CRCERR CRC error flag **/
#define SPI2_SR_CRCERR		(1 << 4)
/** SPI2_SR_TXE Transmit buffer empty **/
#define SPI2_SR_TXE		(1 << 1)
/** SPI2_SR_RXNE Receive buffer not empty **/
#define SPI2_SR_RXNE		(1 << 0)

/**@}*/

/** @defgroup spi2_dr DR data register
@{*/


#define SPI2_DR_DR_SHIFT		0
#define SPI2_DR_DR_MASK		0xffff
/** @defgroup spi2_dr_dr DR Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_crcpr CRCPR CRC polynomial register
@{*/


#define SPI2_CRCPR_CRCPOLY_SHIFT		0
#define SPI2_CRCPR_CRCPOLY_MASK		0xffff
/** @defgroup spi2_crcpr_crcpoly CRCPOLY CRC polynomial register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_rxcrcr RXCRCR RX CRC register
@{*/


#define SPI2_RXCRCR_RxCRC_SHIFT		0
#define SPI2_RXCRCR_RxCRC_MASK		0xffff
/** @defgroup spi2_rxcrcr_rxcrc RxCRC Rx CRC register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_txcrcr TXCRCR TX CRC register
@{*/


#define SPI2_TXCRCR_TxCRC_SHIFT		0
#define SPI2_TXCRCR_TxCRC_MASK		0xffff
/** @defgroup spi2_txcrcr_txcrc TxCRC Tx CRC register
@{*/
/**@}*/


/**@}*/

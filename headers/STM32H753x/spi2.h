#pragma once 

/* --- SPI2: Serial peripheral interface ---------------------------- */

/** @defgroup spi2_registers Serial peripheral interface Register
@{*/

/** SPI2_CR1 control register 1 **/
#define SPI2_CR1			MMIO32(SPI2_BASE + 0x00)
/** SPI2_CR2 control register 2 **/
#define SPI2_CR2			MMIO32(SPI2_BASE + 0x04)
/** SPI2_CFG1 configuration register 1 **/
#define SPI2_CFG1			MMIO32(SPI2_BASE + 0x08)
/** SPI2_CFG2 configuration register 2 **/
#define SPI2_CFG2			MMIO32(SPI2_BASE + 0x0c)
/** SPI2_IER Interrupt Enable Register **/
#define SPI2_IER			MMIO32(SPI2_BASE + 0x10)
/** SPI2_SR Status Register **/
#define SPI2_SR			MMIO32(SPI2_BASE + 0x14)
/** SPI2_IFCR Interrupt/Status Flags Clear Register **/
#define SPI2_IFCR			MMIO32(SPI2_BASE + 0x18)
/** SPI2_TXDR Transmit Data Register **/
#define SPI2_TXDR			MMIO32(SPI2_BASE + 0x20)
/** SPI2_RXDR Receive Data Register **/
#define SPI2_RXDR			MMIO32(SPI2_BASE + 0x30)
/** SPI2_CRCPOLY Polynomial Register **/
#define SPI2_CRCPOLY			MMIO32(SPI2_BASE + 0x40)
/** SPI2_TXCRC Transmitter CRC Register **/
#define SPI2_TXCRC			MMIO32(SPI2_BASE + 0x44)
/** SPI2_RXCRC Receiver CRC Register **/
#define SPI2_RXCRC			MMIO32(SPI2_BASE + 0x48)
/** SPI2_UDRDR Underrun Data Register **/
#define SPI2_UDRDR			MMIO32(SPI2_BASE + 0x4c)
/** SPI2_CGFR configuration register **/
#define SPI2_CGFR			MMIO32(SPI2_BASE + 0x50)

/**@}*/


/** @defgroup spi2_cr1 CR1 control register 1
@{*/

/** SPI2_CR1_IOLOCK Locking the AF configuration of associated IOs **/
#define SPI2_CR1_IOLOCK		(1 << 16)
/** SPI2_CR1_TCRCI CRC calculation initialization pattern control for transmitter **/
#define SPI2_CR1_TCRCI		(1 << 15)
/** SPI2_CR1_RCRCI CRC calculation initialization pattern control for receiver **/
#define SPI2_CR1_RCRCI		(1 << 14)
/** SPI2_CR1_CRC33_17 32-bit CRC polynomial configuration **/
#define SPI2_CR1_CRC33_17		(1 << 13)
/** SPI2_CR1_SSI Internal SS signal input level **/
#define SPI2_CR1_SSI		(1 << 12)
/** SPI2_CR1_HDDIR Rx/Tx direction at Half-duplex mode **/
#define SPI2_CR1_HDDIR		(1 << 11)
/** SPI2_CR1_CSUSP Master SUSPend request **/
#define SPI2_CR1_CSUSP		(1 << 10)
/** SPI2_CR1_CSTART Master transfer start **/
#define SPI2_CR1_CSTART		(1 << 9)
/** SPI2_CR1_MASRX Master automatic SUSP in Receive mode **/
#define SPI2_CR1_MASRX		(1 << 8)
/** SPI2_CR1_SPE Serial Peripheral Enable **/
#define SPI2_CR1_SPE		(1 << 0)

/**@}*/

/** @defgroup spi2_cr2 CR2 control register 2
@{*/


#define SPI2_CR2_TSER_SHIFT		16
#define SPI2_CR2_TSER_MASK		0xffff
/** @defgroup spi2_cr2_tser TSER Number of data transfer extension to be reload into TSIZE just when a previous
@{*/
/**@}*/


#define SPI2_CR2_TSIZE_SHIFT		0
#define SPI2_CR2_TSIZE_MASK		0xffff
/** @defgroup spi2_cr2_tsize TSIZE Number of data at current transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_cfg1 CFG1 configuration register 1
@{*/


#define SPI2_CFG1_MBR_SHIFT		28
#define SPI2_CFG1_MBR_MASK		0x07
/** @defgroup spi2_cfg1_mbr MBR Master baud rate
@{*/
/**@}*/

/** SPI2_CFG1_CRCEN Hardware CRC computation enable **/
#define SPI2_CFG1_CRCEN		(1 << 22)

#define SPI2_CFG1_CRCSIZE_SHIFT		16
#define SPI2_CFG1_CRCSIZE_MASK		0x1f
/** @defgroup spi2_cfg1_crcsize CRCSIZE Length of CRC frame to be transacted and compared
@{*/
/**@}*/

/** SPI2_CFG1_TXDMAEN Tx DMA stream enable **/
#define SPI2_CFG1_TXDMAEN		(1 << 15)
/** SPI2_CFG1_RXDMAEN Rx DMA stream enable **/
#define SPI2_CFG1_RXDMAEN		(1 << 14)

#define SPI2_CFG1_UDRDET_SHIFT		11
#define SPI2_CFG1_UDRDET_MASK		0x03
/** @defgroup spi2_cfg1_udrdet UDRDET Detection of underrun condition at slave transmitter
@{*/
/**@}*/


#define SPI2_CFG1_UDRCFG_SHIFT		9
#define SPI2_CFG1_UDRCFG_MASK		0x03
/** @defgroup spi2_cfg1_udrcfg UDRCFG Behavior of slave transmitter at underrun condition
@{*/
/**@}*/


#define SPI2_CFG1_FTHVL_SHIFT		5
#define SPI2_CFG1_FTHVL_MASK		0x0f
/** @defgroup spi2_cfg1_fthvl FTHVL threshold level
@{*/
/**@}*/


#define SPI2_CFG1_DSIZE_SHIFT		0
#define SPI2_CFG1_DSIZE_MASK		0x1f
/** @defgroup spi2_cfg1_dsize DSIZE Number of bits in at single SPI data frame
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_cfg2 CFG2 configuration register 2
@{*/

/** SPI2_CFG2_AFCNTR Alternate function GPIOs control **/
#define SPI2_CFG2_AFCNTR		(1 << 31)
/** SPI2_CFG2_SSOM SS output management in master mode **/
#define SPI2_CFG2_SSOM		(1 << 30)
/** SPI2_CFG2_SSOE SS output enable **/
#define SPI2_CFG2_SSOE		(1 << 29)
/** SPI2_CFG2_SSIOP SS input/output polarity **/
#define SPI2_CFG2_SSIOP		(1 << 28)
/** SPI2_CFG2_SSM Software management of SS signal input **/
#define SPI2_CFG2_SSM		(1 << 26)
/** SPI2_CFG2_CPOL Clock polarity **/
#define SPI2_CFG2_CPOL		(1 << 25)
/** SPI2_CFG2_CPHA Clock phase **/
#define SPI2_CFG2_CPHA		(1 << 24)
/** SPI2_CFG2_LSBFRST Data frame format **/
#define SPI2_CFG2_LSBFRST		(1 << 23)
/** SPI2_CFG2_MASTER SPI Master **/
#define SPI2_CFG2_MASTER		(1 << 22)

#define SPI2_CFG2_SP_SHIFT		19
#define SPI2_CFG2_SP_MASK		0x07
/** @defgroup spi2_cfg2_sp SP Serial Protocol
@{*/
/**@}*/


#define SPI2_CFG2_COMM_SHIFT		17
#define SPI2_CFG2_COMM_MASK		0x03
/** @defgroup spi2_cfg2_comm COMM SPI Communication Mode
@{*/
/**@}*/

/** SPI2_CFG2_IOSWP Swap functionality of MISO and MOSI pins **/
#define SPI2_CFG2_IOSWP		(1 << 15)

#define SPI2_CFG2_MIDI_SHIFT		4
#define SPI2_CFG2_MIDI_MASK		0x0f
/** @defgroup spi2_cfg2_midi MIDI Master Inter-Data Idleness
@{*/
/**@}*/


#define SPI2_CFG2_MSSI_SHIFT		0
#define SPI2_CFG2_MSSI_MASK		0x0f
/** @defgroup spi2_cfg2_mssi MSSI Master SS Idleness
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_ier IER Interrupt Enable Register
@{*/

/** SPI2_IER_TSERFIE Additional number of transactions reload interrupt enable **/
#define SPI2_IER_TSERFIE		(1 << 10)
/** SPI2_IER_MODFIE Mode Fault interrupt enable **/
#define SPI2_IER_MODFIE		(1 << 9)
/** SPI2_IER_TIFREIE TIFRE interrupt enable **/
#define SPI2_IER_TIFREIE		(1 << 8)
/** SPI2_IER_CRCEIE CRC Interrupt enable **/
#define SPI2_IER_CRCEIE		(1 << 7)
/** SPI2_IER_OVRIE OVR interrupt enable **/
#define SPI2_IER_OVRIE		(1 << 6)
/** SPI2_IER_UDRIE UDR interrupt enable **/
#define SPI2_IER_UDRIE		(1 << 5)
/** SPI2_IER_TXTFIE TXTFIE interrupt enable **/
#define SPI2_IER_TXTFIE		(1 << 4)
/** SPI2_IER_EOTIE EOT, SUSP and TXC interrupt enable **/
#define SPI2_IER_EOTIE		(1 << 3)
/** SPI2_IER_DPXPIE DXP interrupt enabled **/
#define SPI2_IER_DPXPIE		(1 << 2)
/** SPI2_IER_TXPIE TXP interrupt enable **/
#define SPI2_IER_TXPIE		(1 << 1)
/** SPI2_IER_RXPIE RXP Interrupt Enable **/
#define SPI2_IER_RXPIE		(1 << 0)

/**@}*/

/** @defgroup spi2_sr SR Status Register
@{*/


#define SPI2_SR_CTSIZE_SHIFT		16
#define SPI2_SR_CTSIZE_MASK		0xffff
/** @defgroup spi2_sr_ctsize CTSIZE Number of data frames remaining in current TSIZE session
@{*/
/**@}*/

/** SPI2_SR_RXWNE RxFIFO Word Not Empty **/
#define SPI2_SR_RXWNE		(1 << 15)

#define SPI2_SR_RXPLVL_SHIFT		13
#define SPI2_SR_RXPLVL_MASK		0x03
/** @defgroup spi2_sr_rxplvl RXPLVL RxFIFO Packing LeVeL
@{*/
/**@}*/

/** SPI2_SR_TXC TxFIFO transmission complete **/
#define SPI2_SR_TXC		(1 << 12)
/** SPI2_SR_SUSP SUSPend **/
#define SPI2_SR_SUSP		(1 << 11)
/** SPI2_SR_TSERF Additional number of SPI data to be transacted was reload **/
#define SPI2_SR_TSERF		(1 << 10)
/** SPI2_SR_MODF Mode Fault **/
#define SPI2_SR_MODF		(1 << 9)
/** SPI2_SR_TIFRE TI frame format error **/
#define SPI2_SR_TIFRE		(1 << 8)
/** SPI2_SR_CRCE CRC Error **/
#define SPI2_SR_CRCE		(1 << 7)
/** SPI2_SR_OVR Overrun **/
#define SPI2_SR_OVR		(1 << 6)
/** SPI2_SR_UDR Underrun at slave transmission mode **/
#define SPI2_SR_UDR		(1 << 5)
/** SPI2_SR_TXTF Transmission Transfer Filled **/
#define SPI2_SR_TXTF		(1 << 4)
/** SPI2_SR_EOT End Of Transfer **/
#define SPI2_SR_EOT		(1 << 3)
/** SPI2_SR_DXP Duplex Packet **/
#define SPI2_SR_DXP		(1 << 2)
/** SPI2_SR_TXP Tx-Packet space available **/
#define SPI2_SR_TXP		(1 << 1)
/** SPI2_SR_RXP Rx-Packet available **/
#define SPI2_SR_RXP		(1 << 0)

/**@}*/

/** @defgroup spi2_ifcr IFCR Interrupt/Status Flags Clear Register
@{*/

/** SPI2_IFCR_SUSPC SUSPend flag clear **/
#define SPI2_IFCR_SUSPC		(1 << 11)
/** SPI2_IFCR_TSERFC TSERFC flag clear **/
#define SPI2_IFCR_TSERFC		(1 << 10)
/** SPI2_IFCR_MODFC Mode Fault flag clear **/
#define SPI2_IFCR_MODFC		(1 << 9)
/** SPI2_IFCR_TIFREC TI frame format error flag clear **/
#define SPI2_IFCR_TIFREC		(1 << 8)
/** SPI2_IFCR_CRCEC CRC Error flag clear **/
#define SPI2_IFCR_CRCEC		(1 << 7)
/** SPI2_IFCR_OVRC Overrun flag clear **/
#define SPI2_IFCR_OVRC		(1 << 6)
/** SPI2_IFCR_UDRC Underrun flag clear **/
#define SPI2_IFCR_UDRC		(1 << 5)
/** SPI2_IFCR_TXTFC Transmission Transfer Filled flag clear **/
#define SPI2_IFCR_TXTFC		(1 << 4)
/** SPI2_IFCR_EOTC End Of Transfer flag clear **/
#define SPI2_IFCR_EOTC		(1 << 3)

/**@}*/

/** @defgroup spi2_txdr TXDR Transmit Data Register
@{*/


#define SPI2_TXDR_TXDR_SHIFT		0
#define SPI2_TXDR_TXDR_MASK		0xffffffff
/** @defgroup spi2_txdr_txdr TXDR Transmit data register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_rxdr RXDR Receive Data Register
@{*/


#define SPI2_RXDR_RXDR_SHIFT		0
#define SPI2_RXDR_RXDR_MASK		0xffffffff
/** @defgroup spi2_rxdr_rxdr RXDR Receive data register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_crcpoly CRCPOLY Polynomial Register
@{*/


#define SPI2_CRCPOLY_CRCPOLY_SHIFT		0
#define SPI2_CRCPOLY_CRCPOLY_MASK		0xffffffff
/** @defgroup spi2_crcpoly_crcpoly CRCPOLY CRC polynomial register
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_txcrc TXCRC Transmitter CRC Register
@{*/


#define SPI2_TXCRC_TXCRC_SHIFT		0
#define SPI2_TXCRC_TXCRC_MASK		0xffffffff
/** @defgroup spi2_txcrc_txcrc TXCRC CRC register for transmitter
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_rxcrc RXCRC Receiver CRC Register
@{*/


#define SPI2_RXCRC_RXCRC_SHIFT		0
#define SPI2_RXCRC_RXCRC_MASK		0xffffffff
/** @defgroup spi2_rxcrc_rxcrc RXCRC CRC register for receiver
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_udrdr UDRDR Underrun Data Register
@{*/


#define SPI2_UDRDR_UDRDR_SHIFT		0
#define SPI2_UDRDR_UDRDR_MASK		0xffffffff
/** @defgroup spi2_udrdr_udrdr UDRDR Data at slave underrun condition
@{*/
/**@}*/


/**@}*/

/** @defgroup spi2_cgfr CGFR configuration register
@{*/

/** SPI2_CGFR_MCKOE Master clock output enable **/
#define SPI2_CGFR_MCKOE		(1 << 25)
/** SPI2_CGFR_ODD Odd factor for the prescaler **/
#define SPI2_CGFR_ODD		(1 << 24)

#define SPI2_CGFR_I2SDIV_SHIFT		16
#define SPI2_CGFR_I2SDIV_MASK		0xff
/** @defgroup spi2_cgfr_i2sdiv I2SDIV I2S linear prescaler
@{*/
/**@}*/

/** SPI2_CGFR_DATFMT Data format **/
#define SPI2_CGFR_DATFMT		(1 << 14)
/** SPI2_CGFR_WSINV Fixed channel length in SLAVE **/
#define SPI2_CGFR_WSINV		(1 << 13)
/** SPI2_CGFR_FIXCH Word select inversion **/
#define SPI2_CGFR_FIXCH		(1 << 12)
/** SPI2_CGFR_CKPOL Serial audio clock polarity **/
#define SPI2_CGFR_CKPOL		(1 << 11)
/** SPI2_CGFR_CHLEN Channel length (number of bits per audio channel) **/
#define SPI2_CGFR_CHLEN		(1 << 10)

#define SPI2_CGFR_DATLEN_SHIFT		8
#define SPI2_CGFR_DATLEN_MASK		0x03
/** @defgroup spi2_cgfr_datlen DATLEN Data length to be transferred
@{*/
/**@}*/

/** SPI2_CGFR_PCMSYNC PCM frame synchronization **/
#define SPI2_CGFR_PCMSYNC		(1 << 7)

#define SPI2_CGFR_I2SSTD_SHIFT		4
#define SPI2_CGFR_I2SSTD_MASK		0x03
/** @defgroup spi2_cgfr_i2sstd I2SSTD I2S standard selection
@{*/
/**@}*/


#define SPI2_CGFR_I2SCFG_SHIFT		1
#define SPI2_CGFR_I2SCFG_MASK		0x07
/** @defgroup spi2_cgfr_i2scfg I2SCFG I2S configuration mode
@{*/
/**@}*/

/** SPI2_CGFR_I2SMOD I2S mode selection **/
#define SPI2_CGFR_I2SMOD		(1 << 0)

/**@}*/
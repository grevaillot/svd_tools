#pragma once 

/* --- SERCOM0: Serial Communication Interface 0 -------------------- */

/** @defgroup sercom0_registers Serial Communication Interface 0 Register
@{*/

/** SERCOM0_I2CM_CTRLA I2CM Control A **/
#define SERCOM0_I2CM_CTRLA			MMIO32(SERCOM0_BASE + 0x00)
/** SERCOM0_I2CS_CTRLA I2CS Control A **/
#define SERCOM0_I2CS_CTRLA			MMIO32(SERCOM0_BASE + 0x00)
/** SERCOM0_SPI_CTRLA SPI Control A **/
#define SERCOM0_SPI_CTRLA			MMIO32(SERCOM0_BASE + 0x00)
/** SERCOM0_USART_CTRLA USART Control A **/
#define SERCOM0_USART_CTRLA			MMIO32(SERCOM0_BASE + 0x00)
/** SERCOM0_I2CM_CTRLB I2CM Control B **/
#define SERCOM0_I2CM_CTRLB			MMIO32(SERCOM0_BASE + 0x04)
/** SERCOM0_I2CS_CTRLB I2CS Control B **/
#define SERCOM0_I2CS_CTRLB			MMIO32(SERCOM0_BASE + 0x04)
/** SERCOM0_SPI_CTRLB SPI Control B **/
#define SERCOM0_SPI_CTRLB			MMIO32(SERCOM0_BASE + 0x04)
/** SERCOM0_USART_CTRLB USART Control B **/
#define SERCOM0_USART_CTRLB			MMIO32(SERCOM0_BASE + 0x04)
/** SERCOM0_I2CM_BAUD I2CM Baud Rate **/
#define SERCOM0_I2CM_BAUD			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_SPI_BAUD SPI Baud Rate **/
#define SERCOM0_SPI_BAUD			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_USART_BAUD USART Baud Rate **/
#define SERCOM0_USART_BAUD			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_USART_BAUD_FRAC_MODE USART Baud Rate **/
#define SERCOM0_USART_BAUD_FRAC_MODE			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_USART_BAUD_FRACFP_MODE USART Baud Rate **/
#define SERCOM0_USART_BAUD_FRACFP_MODE			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_USART_BAUD_USARTFP_MODE USART Baud Rate **/
#define SERCOM0_USART_BAUD_USARTFP_MODE			MMIO32(SERCOM0_BASE + 0x0c)
/** SERCOM0_USART_RXPL USART Receive Pulse Length **/
#define SERCOM0_USART_RXPL			MMIO32(SERCOM0_BASE + 0x0e)
/** SERCOM0_I2CM_INTENCLR I2CM Interrupt Enable Clear **/
#define SERCOM0_I2CM_INTENCLR			MMIO32(SERCOM0_BASE + 0x14)
/** SERCOM0_I2CS_INTENCLR I2CS Interrupt Enable Clear **/
#define SERCOM0_I2CS_INTENCLR			MMIO32(SERCOM0_BASE + 0x14)
/** SERCOM0_SPI_INTENCLR SPI Interrupt Enable Clear **/
#define SERCOM0_SPI_INTENCLR			MMIO32(SERCOM0_BASE + 0x14)
/** SERCOM0_USART_INTENCLR USART Interrupt Enable Clear **/
#define SERCOM0_USART_INTENCLR			MMIO32(SERCOM0_BASE + 0x14)
/** SERCOM0_I2CM_INTENSET I2CM Interrupt Enable Set **/
#define SERCOM0_I2CM_INTENSET			MMIO32(SERCOM0_BASE + 0x16)
/** SERCOM0_I2CS_INTENSET I2CS Interrupt Enable Set **/
#define SERCOM0_I2CS_INTENSET			MMIO32(SERCOM0_BASE + 0x16)
/** SERCOM0_SPI_INTENSET SPI Interrupt Enable Set **/
#define SERCOM0_SPI_INTENSET			MMIO32(SERCOM0_BASE + 0x16)
/** SERCOM0_USART_INTENSET USART Interrupt Enable Set **/
#define SERCOM0_USART_INTENSET			MMIO32(SERCOM0_BASE + 0x16)
/** SERCOM0_I2CM_INTFLAG I2CM Interrupt Flag Status and Clear **/
#define SERCOM0_I2CM_INTFLAG			MMIO32(SERCOM0_BASE + 0x18)
/** SERCOM0_I2CS_INTFLAG I2CS Interrupt Flag Status and Clear **/
#define SERCOM0_I2CS_INTFLAG			MMIO32(SERCOM0_BASE + 0x18)
/** SERCOM0_SPI_INTFLAG SPI Interrupt Flag Status and Clear **/
#define SERCOM0_SPI_INTFLAG			MMIO32(SERCOM0_BASE + 0x18)
/** SERCOM0_USART_INTFLAG USART Interrupt Flag Status and Clear **/
#define SERCOM0_USART_INTFLAG			MMIO32(SERCOM0_BASE + 0x18)
/** SERCOM0_I2CM_STATUS I2CM Status **/
#define SERCOM0_I2CM_STATUS			MMIO32(SERCOM0_BASE + 0x1a)
/** SERCOM0_I2CS_STATUS I2CS Status **/
#define SERCOM0_I2CS_STATUS			MMIO32(SERCOM0_BASE + 0x1a)
/** SERCOM0_SPI_STATUS SPI Status **/
#define SERCOM0_SPI_STATUS			MMIO32(SERCOM0_BASE + 0x1a)
/** SERCOM0_USART_STATUS USART Status **/
#define SERCOM0_USART_STATUS			MMIO32(SERCOM0_BASE + 0x1a)
/** SERCOM0_I2CM_SYNCBUSY I2CM Synchronization Busy **/
#define SERCOM0_I2CM_SYNCBUSY			MMIO32(SERCOM0_BASE + 0x1c)
/** SERCOM0_I2CS_SYNCBUSY I2CS Synchronization Busy **/
#define SERCOM0_I2CS_SYNCBUSY			MMIO32(SERCOM0_BASE + 0x1c)
/** SERCOM0_SPI_SYNCBUSY SPI Synchronization Busy **/
#define SERCOM0_SPI_SYNCBUSY			MMIO32(SERCOM0_BASE + 0x1c)
/** SERCOM0_USART_SYNCBUSY USART Synchronization Busy **/
#define SERCOM0_USART_SYNCBUSY			MMIO32(SERCOM0_BASE + 0x1c)
/** SERCOM0_I2CM_ADDR I2CM Address **/
#define SERCOM0_I2CM_ADDR			MMIO32(SERCOM0_BASE + 0x24)
/** SERCOM0_I2CS_ADDR I2CS Address **/
#define SERCOM0_I2CS_ADDR			MMIO32(SERCOM0_BASE + 0x24)
/** SERCOM0_SPI_ADDR SPI Address **/
#define SERCOM0_SPI_ADDR			MMIO32(SERCOM0_BASE + 0x24)
/** SERCOM0_I2CM_DATA I2CM Data **/
#define SERCOM0_I2CM_DATA			MMIO32(SERCOM0_BASE + 0x28)
/** SERCOM0_I2CS_DATA I2CS Data **/
#define SERCOM0_I2CS_DATA			MMIO32(SERCOM0_BASE + 0x28)
/** SERCOM0_SPI_DATA SPI Data **/
#define SERCOM0_SPI_DATA			MMIO32(SERCOM0_BASE + 0x28)
/** SERCOM0_USART_DATA USART Data **/
#define SERCOM0_USART_DATA			MMIO32(SERCOM0_BASE + 0x28)
/** SERCOM0_I2CM_DBGCTRL I2CM Debug Control **/
#define SERCOM0_I2CM_DBGCTRL			MMIO32(SERCOM0_BASE + 0x30)
/** SERCOM0_SPI_DBGCTRL SPI Debug Control **/
#define SERCOM0_SPI_DBGCTRL			MMIO32(SERCOM0_BASE + 0x30)
/** SERCOM0_USART_DBGCTRL USART Debug Control **/
#define SERCOM0_USART_DBGCTRL			MMIO32(SERCOM0_BASE + 0x30)

/**@}*/


/** @defgroup sercom0_i2cm_ctrla I2CMCTRLA I2CM Control A
@{*/

/** SERCOM0_I2CM_CTRLA_LOWTOUTEN SCL Low Timeout Enable **/
#define SERCOM0_I2CM_CTRLA_LOWTOUTEN		(1 << 30)

#define SERCOM0_I2CM_CTRLA_INACTOUT_SHIFT		28
#define SERCOM0_I2CM_CTRLA_INACTOUT_MASK		0x03
/** @defgroup sercom0_i2cm_ctrla_inactout INACTOUT Inactive Time-Out
@{*/
/**@}*/

/** SERCOM0_I2CM_CTRLA_SCLSM SCL Clock Stretch Mode **/
#define SERCOM0_I2CM_CTRLA_SCLSM		(1 << 27)

#define SERCOM0_I2CM_CTRLA_SPEED_SHIFT		24
#define SERCOM0_I2CM_CTRLA_SPEED_MASK		0x03
/** @defgroup sercom0_i2cm_ctrla_speed SPEED Transfer Speed
@{*/
/**@}*/

/** SERCOM0_I2CM_CTRLA_SEXTTOEN Slave SCL Low Extend Timeout **/
#define SERCOM0_I2CM_CTRLA_SEXTTOEN		(1 << 23)
/** SERCOM0_I2CM_CTRLA_MEXTTOEN Master SCL Low Extend Timeout **/
#define SERCOM0_I2CM_CTRLA_MEXTTOEN		(1 << 22)

#define SERCOM0_I2CM_CTRLA_SDAHOLD_SHIFT		20
#define SERCOM0_I2CM_CTRLA_SDAHOLD_MASK		0x03
/** @defgroup sercom0_i2cm_ctrla_sdahold SDAHOLD SDA Hold Time
@{*/
/**@}*/

/** SERCOM0_I2CM_CTRLA_PINOUT Pin Usage **/
#define SERCOM0_I2CM_CTRLA_PINOUT		(1 << 16)
/** SERCOM0_I2CM_CTRLA_RUNSTDBY Run in Standby **/
#define SERCOM0_I2CM_CTRLA_RUNSTDBY		(1 << 7)

#define SERCOM0_I2CM_CTRLA_MODE_SHIFT		2
#define SERCOM0_I2CM_CTRLA_MODE_MASK		0x07
/** @defgroup sercom0_i2cm_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** SERCOM0_I2CM_CTRLA_ENABLE Enable **/
#define SERCOM0_I2CM_CTRLA_ENABLE		(1 << 1)
/** SERCOM0_I2CM_CTRLA_SWRST Software Reset **/
#define SERCOM0_I2CM_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_ctrla I2CSCTRLA I2CS Control A
@{*/

/** SERCOM0_I2CS_CTRLA_LOWTOUTEN SCL Low Timeout Enable **/
#define SERCOM0_I2CS_CTRLA_LOWTOUTEN		(1 << 30)
/** SERCOM0_I2CS_CTRLA_SCLSM SCL Clock Stretch Mode **/
#define SERCOM0_I2CS_CTRLA_SCLSM		(1 << 27)

#define SERCOM0_I2CS_CTRLA_SPEED_SHIFT		24
#define SERCOM0_I2CS_CTRLA_SPEED_MASK		0x03
/** @defgroup sercom0_i2cs_ctrla_speed SPEED Transfer Speed
@{*/
/**@}*/

/** SERCOM0_I2CS_CTRLA_SEXTTOEN Slave SCL Low Extend Timeout **/
#define SERCOM0_I2CS_CTRLA_SEXTTOEN		(1 << 23)

#define SERCOM0_I2CS_CTRLA_SDAHOLD_SHIFT		20
#define SERCOM0_I2CS_CTRLA_SDAHOLD_MASK		0x03
/** @defgroup sercom0_i2cs_ctrla_sdahold SDAHOLD SDA Hold Time
@{*/
/**@}*/

/** SERCOM0_I2CS_CTRLA_PINOUT Pin Usage **/
#define SERCOM0_I2CS_CTRLA_PINOUT		(1 << 16)
/** SERCOM0_I2CS_CTRLA_RUNSTDBY Run during Standby **/
#define SERCOM0_I2CS_CTRLA_RUNSTDBY		(1 << 7)

#define SERCOM0_I2CS_CTRLA_MODE_SHIFT		2
#define SERCOM0_I2CS_CTRLA_MODE_MASK		0x07
/** @defgroup sercom0_i2cs_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** SERCOM0_I2CS_CTRLA_ENABLE Enable **/
#define SERCOM0_I2CS_CTRLA_ENABLE		(1 << 1)
/** SERCOM0_I2CS_CTRLA_SWRST Software Reset **/
#define SERCOM0_I2CS_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_ctrla SPICTRLA SPI Control A
@{*/

/** SERCOM0_SPI_CTRLA_DORD Data Order **/
#define SERCOM0_SPI_CTRLA_DORD		(1 << 30)
/** SERCOM0_SPI_CTRLA_CPOL Clock Polarity **/
#define SERCOM0_SPI_CTRLA_CPOL		(1 << 29)
/** SERCOM0_SPI_CTRLA_CPHA Clock Phase **/
#define SERCOM0_SPI_CTRLA_CPHA		(1 << 28)

#define SERCOM0_SPI_CTRLA_FORM_SHIFT		24
#define SERCOM0_SPI_CTRLA_FORM_MASK		0x0f
/** @defgroup sercom0_spi_ctrla_form FORM Frame Format
@{*/
/**@}*/


#define SERCOM0_SPI_CTRLA_DIPO_SHIFT		20
#define SERCOM0_SPI_CTRLA_DIPO_MASK		0x03
/** @defgroup sercom0_spi_ctrla_dipo DIPO Data In Pinout
@{*/
/**@}*/


#define SERCOM0_SPI_CTRLA_DOPO_SHIFT		16
#define SERCOM0_SPI_CTRLA_DOPO_MASK		0x03
/** @defgroup sercom0_spi_ctrla_dopo DOPO Data Out Pinout
@{*/
/**@}*/

/** SERCOM0_SPI_CTRLA_IBON Immediate Buffer Overflow Notification **/
#define SERCOM0_SPI_CTRLA_IBON		(1 << 8)
/** SERCOM0_SPI_CTRLA_RUNSTDBY Run during Standby **/
#define SERCOM0_SPI_CTRLA_RUNSTDBY		(1 << 7)

#define SERCOM0_SPI_CTRLA_MODE_SHIFT		2
#define SERCOM0_SPI_CTRLA_MODE_MASK		0x07
/** @defgroup sercom0_spi_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** SERCOM0_SPI_CTRLA_ENABLE Enable **/
#define SERCOM0_SPI_CTRLA_ENABLE		(1 << 1)
/** SERCOM0_SPI_CTRLA_SWRST Software Reset **/
#define SERCOM0_SPI_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_ctrla USARTCTRLA USART Control A
@{*/

/** SERCOM0_USART_CTRLA_DORD Data Order **/
#define SERCOM0_USART_CTRLA_DORD		(1 << 30)
/** SERCOM0_USART_CTRLA_CPOL Clock Polarity **/
#define SERCOM0_USART_CTRLA_CPOL		(1 << 29)
/** SERCOM0_USART_CTRLA_CMODE Communication Mode **/
#define SERCOM0_USART_CTRLA_CMODE		(1 << 28)

#define SERCOM0_USART_CTRLA_FORM_SHIFT		24
#define SERCOM0_USART_CTRLA_FORM_MASK		0x0f
/** @defgroup sercom0_usart_ctrla_form FORM Frame Format
@{*/
/**@}*/


#define SERCOM0_USART_CTRLA_SAMPA_SHIFT		22
#define SERCOM0_USART_CTRLA_SAMPA_MASK		0x03
/** @defgroup sercom0_usart_ctrla_sampa SAMPA Sample Adjustment
@{*/
/**@}*/


#define SERCOM0_USART_CTRLA_RXPO_SHIFT		20
#define SERCOM0_USART_CTRLA_RXPO_MASK		0x03
/** @defgroup sercom0_usart_ctrla_rxpo RXPO Receive Data Pinout
@{*/
/**@}*/


#define SERCOM0_USART_CTRLA_TXPO_SHIFT		16
#define SERCOM0_USART_CTRLA_TXPO_MASK		0x03
/** @defgroup sercom0_usart_ctrla_txpo TXPO Transmit Data Pinout
@{*/
/**@}*/


#define SERCOM0_USART_CTRLA_SAMPR_SHIFT		13
#define SERCOM0_USART_CTRLA_SAMPR_MASK		0x07
/** @defgroup sercom0_usart_ctrla_sampr SAMPR Sample
@{*/
/**@}*/

/** SERCOM0_USART_CTRLA_IBON Immediate Buffer Overflow Notification **/
#define SERCOM0_USART_CTRLA_IBON		(1 << 8)
/** SERCOM0_USART_CTRLA_RUNSTDBY Run during Standby **/
#define SERCOM0_USART_CTRLA_RUNSTDBY		(1 << 7)

#define SERCOM0_USART_CTRLA_MODE_SHIFT		2
#define SERCOM0_USART_CTRLA_MODE_MASK		0x07
/** @defgroup sercom0_usart_ctrla_mode MODE Operating Mode
@{*/
/**@}*/

/** SERCOM0_USART_CTRLA_ENABLE Enable **/
#define SERCOM0_USART_CTRLA_ENABLE		(1 << 1)
/** SERCOM0_USART_CTRLA_SWRST Software Reset **/
#define SERCOM0_USART_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_ctrlb I2CMCTRLB I2CM Control B
@{*/

/** SERCOM0_I2CM_CTRLB_ACKACT Acknowledge Action **/
#define SERCOM0_I2CM_CTRLB_ACKACT		(1 << 18)

#define SERCOM0_I2CM_CTRLB_CMD_SHIFT		16
#define SERCOM0_I2CM_CTRLB_CMD_MASK		0x03
/** @defgroup sercom0_i2cm_ctrlb_cmd CMD Command
@{*/
/**@}*/

/** SERCOM0_I2CM_CTRLB_QCEN Quick Command Enable **/
#define SERCOM0_I2CM_CTRLB_QCEN		(1 << 9)
/** SERCOM0_I2CM_CTRLB_SMEN Smart Mode Enable **/
#define SERCOM0_I2CM_CTRLB_SMEN		(1 << 8)

/**@}*/

/** @defgroup sercom0_i2cs_ctrlb I2CSCTRLB I2CS Control B
@{*/

/** SERCOM0_I2CS_CTRLB_ACKACT Acknowledge Action **/
#define SERCOM0_I2CS_CTRLB_ACKACT		(1 << 18)

#define SERCOM0_I2CS_CTRLB_CMD_SHIFT		16
#define SERCOM0_I2CS_CTRLB_CMD_MASK		0x03
/** @defgroup sercom0_i2cs_ctrlb_cmd CMD Command
@{*/
/**@}*/


#define SERCOM0_I2CS_CTRLB_AMODE_SHIFT		14
#define SERCOM0_I2CS_CTRLB_AMODE_MASK		0x03
/** @defgroup sercom0_i2cs_ctrlb_amode AMODE Address Mode
@{*/
/**@}*/

/** SERCOM0_I2CS_CTRLB_AACKEN Automatic Address Acknowledge **/
#define SERCOM0_I2CS_CTRLB_AACKEN		(1 << 10)
/** SERCOM0_I2CS_CTRLB_GCMD PMBus Group Command **/
#define SERCOM0_I2CS_CTRLB_GCMD		(1 << 9)
/** SERCOM0_I2CS_CTRLB_SMEN Smart Mode Enable **/
#define SERCOM0_I2CS_CTRLB_SMEN		(1 << 8)

/**@}*/

/** @defgroup sercom0_spi_ctrlb SPICTRLB SPI Control B
@{*/

/** SERCOM0_SPI_CTRLB_RXEN Receiver Enable **/
#define SERCOM0_SPI_CTRLB_RXEN		(1 << 17)

#define SERCOM0_SPI_CTRLB_AMODE_SHIFT		14
#define SERCOM0_SPI_CTRLB_AMODE_MASK		0x03
/** @defgroup sercom0_spi_ctrlb_amode AMODE Address Mode
@{*/
/**@}*/

/** SERCOM0_SPI_CTRLB_MSSEN Master Slave Select Enable **/
#define SERCOM0_SPI_CTRLB_MSSEN		(1 << 13)
/** SERCOM0_SPI_CTRLB_SSDE Slave Select Low Detect Enable **/
#define SERCOM0_SPI_CTRLB_SSDE		(1 << 9)
/** SERCOM0_SPI_CTRLB_PLOADEN Data Preload Enable **/
#define SERCOM0_SPI_CTRLB_PLOADEN		(1 << 6)

#define SERCOM0_SPI_CTRLB_CHSIZE_SHIFT		0
#define SERCOM0_SPI_CTRLB_CHSIZE_MASK		0x07
/** @defgroup sercom0_spi_ctrlb_chsize CHSIZE Character Size
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_ctrlb USARTCTRLB USART Control B
@{*/

/** SERCOM0_USART_CTRLB_RXEN Receiver Enable **/
#define SERCOM0_USART_CTRLB_RXEN		(1 << 17)
/** SERCOM0_USART_CTRLB_TXEN Transmitter Enable **/
#define SERCOM0_USART_CTRLB_TXEN		(1 << 16)
/** SERCOM0_USART_CTRLB_PMODE Parity Mode **/
#define SERCOM0_USART_CTRLB_PMODE		(1 << 13)
/** SERCOM0_USART_CTRLB_ENC Encoding Format **/
#define SERCOM0_USART_CTRLB_ENC		(1 << 10)
/** SERCOM0_USART_CTRLB_SFDE Start of Frame Detection Enable **/
#define SERCOM0_USART_CTRLB_SFDE		(1 << 9)
/** SERCOM0_USART_CTRLB_COLDEN Collision Detection Enable **/
#define SERCOM0_USART_CTRLB_COLDEN		(1 << 8)
/** SERCOM0_USART_CTRLB_SBMODE Stop Bit Mode **/
#define SERCOM0_USART_CTRLB_SBMODE		(1 << 6)

#define SERCOM0_USART_CTRLB_CHSIZE_SHIFT		0
#define SERCOM0_USART_CTRLB_CHSIZE_MASK		0x07
/** @defgroup sercom0_usart_ctrlb_chsize CHSIZE Character Size
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cm_baud I2CMBAUD I2CM Baud Rate
@{*/


#define SERCOM0_I2CM_BAUD_HSBAUDLOW_SHIFT		24
#define SERCOM0_I2CM_BAUD_HSBAUDLOW_MASK		0xff
/** @defgroup sercom0_i2cm_baud_hsbaudlow HSBAUDLOW High Speed Baud Rate Value Low
@{*/
/**@}*/


#define SERCOM0_I2CM_BAUD_HSBAUD_SHIFT		16
#define SERCOM0_I2CM_BAUD_HSBAUD_MASK		0xff
/** @defgroup sercom0_i2cm_baud_hsbaud HSBAUD High Speed Baud Rate Value
@{*/
/**@}*/


#define SERCOM0_I2CM_BAUD_BAUDLOW_SHIFT		8
#define SERCOM0_I2CM_BAUD_BAUDLOW_MASK		0xff
/** @defgroup sercom0_i2cm_baud_baudlow BAUDLOW Baud Rate Value Low
@{*/
/**@}*/


#define SERCOM0_I2CM_BAUD_BAUD_SHIFT		0
#define SERCOM0_I2CM_BAUD_BAUD_MASK		0xff
/** @defgroup sercom0_i2cm_baud_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_spi_baud SPIBAUD SPI Baud Rate
@{*/


#define SERCOM0_SPI_BAUD_BAUD_SHIFT		0
#define SERCOM0_SPI_BAUD_BAUD_MASK		0xff
/** @defgroup sercom0_spi_baud_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_baud USARTBAUD USART Baud Rate
@{*/


#define SERCOM0_USART_BAUD_BAUD_SHIFT		0
#define SERCOM0_USART_BAUD_BAUD_MASK		0xffff
/** @defgroup sercom0_usart_baud_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_baud_frac_mode USARTBAUDFRACMODE USART Baud Rate
@{*/


#define SERCOM0_USART_BAUD_FRAC_MODE_FP_SHIFT		13
#define SERCOM0_USART_BAUD_FRAC_MODE_FP_MASK		0x07
/** @defgroup sercom0_usart_baud_frac_mode_fp FP Fractional Part
@{*/
/**@}*/


#define SERCOM0_USART_BAUD_FRAC_MODE_BAUD_SHIFT		0
#define SERCOM0_USART_BAUD_FRAC_MODE_BAUD_MASK		0x1fff
/** @defgroup sercom0_usart_baud_frac_mode_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_baud_fracfp_mode USARTBAUDFRACFPMODE USART Baud Rate
@{*/


#define SERCOM0_USART_BAUD_FRACFP_MODE_FP_SHIFT		13
#define SERCOM0_USART_BAUD_FRACFP_MODE_FP_MASK		0x07
/** @defgroup sercom0_usart_baud_fracfp_mode_fp FP Fractional Part
@{*/
/**@}*/


#define SERCOM0_USART_BAUD_FRACFP_MODE_BAUD_SHIFT		0
#define SERCOM0_USART_BAUD_FRACFP_MODE_BAUD_MASK		0x1fff
/** @defgroup sercom0_usart_baud_fracfp_mode_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_baud_usartfp_mode USARTBAUDUSARTFPMODE USART Baud Rate
@{*/


#define SERCOM0_USART_BAUD_USARTFP_MODE_BAUD_SHIFT		0
#define SERCOM0_USART_BAUD_USARTFP_MODE_BAUD_MASK		0xffff
/** @defgroup sercom0_usart_baud_usartfp_mode_baud BAUD Baud Rate Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_rxpl USARTRXPL USART Receive Pulse Length
@{*/


#define SERCOM0_USART_RXPL_RXPL_SHIFT		0
#define SERCOM0_USART_RXPL_RXPL_MASK		0xff
/** @defgroup sercom0_usart_rxpl_rxpl RXPL Receive Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cm_intenclr I2CMINTENCLR I2CM Interrupt Enable Clear
@{*/

/** SERCOM0_I2CM_INTENCLR_ERROR Combined Error Interrupt Disable **/
#define SERCOM0_I2CM_INTENCLR_ERROR		(1 << 7)
/** SERCOM0_I2CM_INTENCLR_SB Slave On Bus Interrupt Disable **/
#define SERCOM0_I2CM_INTENCLR_SB		(1 << 1)
/** SERCOM0_I2CM_INTENCLR_MB Master On Bus Interrupt Disable **/
#define SERCOM0_I2CM_INTENCLR_MB		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_intenclr I2CSINTENCLR I2CS Interrupt Enable Clear
@{*/

/** SERCOM0_I2CS_INTENCLR_ERROR Combined Error Interrupt Disable **/
#define SERCOM0_I2CS_INTENCLR_ERROR		(1 << 7)
/** SERCOM0_I2CS_INTENCLR_DRDY Data Interrupt Disable **/
#define SERCOM0_I2CS_INTENCLR_DRDY		(1 << 2)
/** SERCOM0_I2CS_INTENCLR_AMATCH Address Match Interrupt Disable **/
#define SERCOM0_I2CS_INTENCLR_AMATCH		(1 << 1)
/** SERCOM0_I2CS_INTENCLR_PREC Stop Received Interrupt Disable **/
#define SERCOM0_I2CS_INTENCLR_PREC		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_intenclr SPIINTENCLR SPI Interrupt Enable Clear
@{*/

/** SERCOM0_SPI_INTENCLR_ERROR Combined Error Interrupt Disable **/
#define SERCOM0_SPI_INTENCLR_ERROR		(1 << 7)
/** SERCOM0_SPI_INTENCLR_SSL Slave Select Low Interrupt Disable **/
#define SERCOM0_SPI_INTENCLR_SSL		(1 << 3)
/** SERCOM0_SPI_INTENCLR_RXC Receive Complete Interrupt Disable **/
#define SERCOM0_SPI_INTENCLR_RXC		(1 << 2)
/** SERCOM0_SPI_INTENCLR_TXC Transmit Complete Interrupt Disable **/
#define SERCOM0_SPI_INTENCLR_TXC		(1 << 1)
/** SERCOM0_SPI_INTENCLR_DRE Data Register Empty Interrupt Disable **/
#define SERCOM0_SPI_INTENCLR_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_intenclr USARTINTENCLR USART Interrupt Enable Clear
@{*/

/** SERCOM0_USART_INTENCLR_ERROR Combined Error Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_ERROR		(1 << 7)
/** SERCOM0_USART_INTENCLR_RXBRK Break Received Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_RXBRK		(1 << 5)
/** SERCOM0_USART_INTENCLR_CTSIC Clear To Send Input Change Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_CTSIC		(1 << 4)
/** SERCOM0_USART_INTENCLR_RXS Receive Start Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_RXS		(1 << 3)
/** SERCOM0_USART_INTENCLR_RXC Receive Complete Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_RXC		(1 << 2)
/** SERCOM0_USART_INTENCLR_TXC Transmit Complete Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_TXC		(1 << 1)
/** SERCOM0_USART_INTENCLR_DRE Data Register Empty Interrupt Disable **/
#define SERCOM0_USART_INTENCLR_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_intenset I2CMINTENSET I2CM Interrupt Enable Set
@{*/

/** SERCOM0_I2CM_INTENSET_ERROR Combined Error Interrupt Enable **/
#define SERCOM0_I2CM_INTENSET_ERROR		(1 << 7)
/** SERCOM0_I2CM_INTENSET_SB Slave On Bus Interrupt Enable **/
#define SERCOM0_I2CM_INTENSET_SB		(1 << 1)
/** SERCOM0_I2CM_INTENSET_MB Master On Bus Interrupt Enable **/
#define SERCOM0_I2CM_INTENSET_MB		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_intenset I2CSINTENSET I2CS Interrupt Enable Set
@{*/

/** SERCOM0_I2CS_INTENSET_ERROR Combined Error Interrupt Enable **/
#define SERCOM0_I2CS_INTENSET_ERROR		(1 << 7)
/** SERCOM0_I2CS_INTENSET_DRDY Data Interrupt Enable **/
#define SERCOM0_I2CS_INTENSET_DRDY		(1 << 2)
/** SERCOM0_I2CS_INTENSET_AMATCH Address Match Interrupt Enable **/
#define SERCOM0_I2CS_INTENSET_AMATCH		(1 << 1)
/** SERCOM0_I2CS_INTENSET_PREC Stop Received Interrupt Enable **/
#define SERCOM0_I2CS_INTENSET_PREC		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_intenset SPIINTENSET SPI Interrupt Enable Set
@{*/

/** SERCOM0_SPI_INTENSET_ERROR Combined Error Interrupt Enable **/
#define SERCOM0_SPI_INTENSET_ERROR		(1 << 7)
/** SERCOM0_SPI_INTENSET_SSL Slave Select Low Interrupt Enable **/
#define SERCOM0_SPI_INTENSET_SSL		(1 << 3)
/** SERCOM0_SPI_INTENSET_RXC Receive Complete Interrupt Enable **/
#define SERCOM0_SPI_INTENSET_RXC		(1 << 2)
/** SERCOM0_SPI_INTENSET_TXC Transmit Complete Interrupt Enable **/
#define SERCOM0_SPI_INTENSET_TXC		(1 << 1)
/** SERCOM0_SPI_INTENSET_DRE Data Register Empty Interrupt Enable **/
#define SERCOM0_SPI_INTENSET_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_intenset USARTINTENSET USART Interrupt Enable Set
@{*/

/** SERCOM0_USART_INTENSET_ERROR Combined Error Interrupt Enable **/
#define SERCOM0_USART_INTENSET_ERROR		(1 << 7)
/** SERCOM0_USART_INTENSET_RXBRK Break Received Interrupt Enable **/
#define SERCOM0_USART_INTENSET_RXBRK		(1 << 5)
/** SERCOM0_USART_INTENSET_CTSIC Clear To Send Input Change Interrupt Enable **/
#define SERCOM0_USART_INTENSET_CTSIC		(1 << 4)
/** SERCOM0_USART_INTENSET_RXS Receive Start Interrupt Enable **/
#define SERCOM0_USART_INTENSET_RXS		(1 << 3)
/** SERCOM0_USART_INTENSET_RXC Receive Complete Interrupt Enable **/
#define SERCOM0_USART_INTENSET_RXC		(1 << 2)
/** SERCOM0_USART_INTENSET_TXC Transmit Complete Interrupt Enable **/
#define SERCOM0_USART_INTENSET_TXC		(1 << 1)
/** SERCOM0_USART_INTENSET_DRE Data Register Empty Interrupt Enable **/
#define SERCOM0_USART_INTENSET_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_intflag I2CMINTFLAG I2CM Interrupt Flag Status and Clear
@{*/

/** SERCOM0_I2CM_INTFLAG_ERROR Combined Error Interrupt **/
#define SERCOM0_I2CM_INTFLAG_ERROR		(1 << 7)
/** SERCOM0_I2CM_INTFLAG_SB Slave On Bus Interrupt **/
#define SERCOM0_I2CM_INTFLAG_SB		(1 << 1)
/** SERCOM0_I2CM_INTFLAG_MB Master On Bus Interrupt **/
#define SERCOM0_I2CM_INTFLAG_MB		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_intflag I2CSINTFLAG I2CS Interrupt Flag Status and Clear
@{*/

/** SERCOM0_I2CS_INTFLAG_ERROR Combined Error Interrupt **/
#define SERCOM0_I2CS_INTFLAG_ERROR		(1 << 7)
/** SERCOM0_I2CS_INTFLAG_DRDY Data Interrupt **/
#define SERCOM0_I2CS_INTFLAG_DRDY		(1 << 2)
/** SERCOM0_I2CS_INTFLAG_AMATCH Address Match Interrupt **/
#define SERCOM0_I2CS_INTFLAG_AMATCH		(1 << 1)
/** SERCOM0_I2CS_INTFLAG_PREC Stop Received Interrupt **/
#define SERCOM0_I2CS_INTFLAG_PREC		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_intflag SPIINTFLAG SPI Interrupt Flag Status and Clear
@{*/

/** SERCOM0_SPI_INTFLAG_ERROR Combined Error Interrupt **/
#define SERCOM0_SPI_INTFLAG_ERROR		(1 << 7)
/** SERCOM0_SPI_INTFLAG_SSL Slave Select Low Interrupt Flag **/
#define SERCOM0_SPI_INTFLAG_SSL		(1 << 3)
/** SERCOM0_SPI_INTFLAG_RXC Receive Complete Interrupt **/
#define SERCOM0_SPI_INTFLAG_RXC		(1 << 2)
/** SERCOM0_SPI_INTFLAG_TXC Transmit Complete Interrupt **/
#define SERCOM0_SPI_INTFLAG_TXC		(1 << 1)
/** SERCOM0_SPI_INTFLAG_DRE Data Register Empty Interrupt **/
#define SERCOM0_SPI_INTFLAG_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_intflag USARTINTFLAG USART Interrupt Flag Status and Clear
@{*/

/** SERCOM0_USART_INTFLAG_ERROR Combined Error Interrupt **/
#define SERCOM0_USART_INTFLAG_ERROR		(1 << 7)
/** SERCOM0_USART_INTFLAG_RXBRK Break Received Interrupt **/
#define SERCOM0_USART_INTFLAG_RXBRK		(1 << 5)
/** SERCOM0_USART_INTFLAG_CTSIC Clear To Send Input Change Interrupt **/
#define SERCOM0_USART_INTFLAG_CTSIC		(1 << 4)
/** SERCOM0_USART_INTFLAG_RXS Receive Start Interrupt **/
#define SERCOM0_USART_INTFLAG_RXS		(1 << 3)
/** SERCOM0_USART_INTFLAG_RXC Receive Complete Interrupt **/
#define SERCOM0_USART_INTFLAG_RXC		(1 << 2)
/** SERCOM0_USART_INTFLAG_TXC Transmit Complete Interrupt **/
#define SERCOM0_USART_INTFLAG_TXC		(1 << 1)
/** SERCOM0_USART_INTFLAG_DRE Data Register Empty Interrupt **/
#define SERCOM0_USART_INTFLAG_DRE		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_status I2CMSTATUS I2CM Status
@{*/

/** SERCOM0_I2CM_STATUS_LENERR Length Error **/
#define SERCOM0_I2CM_STATUS_LENERR		(1 << 10)
/** SERCOM0_I2CM_STATUS_SEXTTOUT Slave SCL Low Extend Timeout **/
#define SERCOM0_I2CM_STATUS_SEXTTOUT		(1 << 9)
/** SERCOM0_I2CM_STATUS_MEXTTOUT Master SCL Low Extend Timeout **/
#define SERCOM0_I2CM_STATUS_MEXTTOUT		(1 << 8)
/** SERCOM0_I2CM_STATUS_CLKHOLD Clock Hold **/
#define SERCOM0_I2CM_STATUS_CLKHOLD		(1 << 7)
/** SERCOM0_I2CM_STATUS_LOWTOUT SCL Low Timeout **/
#define SERCOM0_I2CM_STATUS_LOWTOUT		(1 << 6)

#define SERCOM0_I2CM_STATUS_BUSSTATE_SHIFT		4
#define SERCOM0_I2CM_STATUS_BUSSTATE_MASK		0x03
/** @defgroup sercom0_i2cm_status_busstate BUSSTATE Bus State
@{*/
/**@}*/

/** SERCOM0_I2CM_STATUS_RXNACK Received Not Acknowledge **/
#define SERCOM0_I2CM_STATUS_RXNACK		(1 << 2)
/** SERCOM0_I2CM_STATUS_ARBLOST Arbitration Lost **/
#define SERCOM0_I2CM_STATUS_ARBLOST		(1 << 1)
/** SERCOM0_I2CM_STATUS_BUSERR Bus Error **/
#define SERCOM0_I2CM_STATUS_BUSERR		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_status I2CSSTATUS I2CS Status
@{*/

/** SERCOM0_I2CS_STATUS_HS High Speed **/
#define SERCOM0_I2CS_STATUS_HS		(1 << 10)
/** SERCOM0_I2CS_STATUS_SEXTTOUT Slave SCL Low Extend Timeout **/
#define SERCOM0_I2CS_STATUS_SEXTTOUT		(1 << 9)
/** SERCOM0_I2CS_STATUS_CLKHOLD Clock Hold **/
#define SERCOM0_I2CS_STATUS_CLKHOLD		(1 << 7)
/** SERCOM0_I2CS_STATUS_LOWTOUT SCL Low Timeout **/
#define SERCOM0_I2CS_STATUS_LOWTOUT		(1 << 6)
/** SERCOM0_I2CS_STATUS_SR Repeated Start **/
#define SERCOM0_I2CS_STATUS_SR		(1 << 4)
/** SERCOM0_I2CS_STATUS_DIR Read/Write Direction **/
#define SERCOM0_I2CS_STATUS_DIR		(1 << 3)
/** SERCOM0_I2CS_STATUS_RXNACK Received Not Acknowledge **/
#define SERCOM0_I2CS_STATUS_RXNACK		(1 << 2)
/** SERCOM0_I2CS_STATUS_COLL Transmit Collision **/
#define SERCOM0_I2CS_STATUS_COLL		(1 << 1)
/** SERCOM0_I2CS_STATUS_BUSERR Bus Error **/
#define SERCOM0_I2CS_STATUS_BUSERR		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_status SPISTATUS SPI Status
@{*/

/** SERCOM0_SPI_STATUS_BUFOVF Buffer Overflow **/
#define SERCOM0_SPI_STATUS_BUFOVF		(1 << 2)

/**@}*/

/** @defgroup sercom0_usart_status USARTSTATUS USART Status
@{*/

/** SERCOM0_USART_STATUS_COLL Collision Detected **/
#define SERCOM0_USART_STATUS_COLL		(1 << 5)
/** SERCOM0_USART_STATUS_ISF Inconsistent Sync Field **/
#define SERCOM0_USART_STATUS_ISF		(1 << 4)
/** SERCOM0_USART_STATUS_CTS Clear To Send **/
#define SERCOM0_USART_STATUS_CTS		(1 << 3)
/** SERCOM0_USART_STATUS_BUFOVF Buffer Overflow **/
#define SERCOM0_USART_STATUS_BUFOVF		(1 << 2)
/** SERCOM0_USART_STATUS_FERR Frame Error **/
#define SERCOM0_USART_STATUS_FERR		(1 << 1)
/** SERCOM0_USART_STATUS_PERR Parity Error **/
#define SERCOM0_USART_STATUS_PERR		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_syncbusy I2CMSYNCBUSY I2CM Synchronization Busy
@{*/

/** SERCOM0_I2CM_SYNCBUSY_SYSOP System Operation Synchronization Busy **/
#define SERCOM0_I2CM_SYNCBUSY_SYSOP		(1 << 2)
/** SERCOM0_I2CM_SYNCBUSY_ENABLE SERCOM Enable Synchronization Busy **/
#define SERCOM0_I2CM_SYNCBUSY_ENABLE		(1 << 1)
/** SERCOM0_I2CM_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define SERCOM0_I2CM_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cs_syncbusy I2CSSYNCBUSY I2CS Synchronization Busy
@{*/

/** SERCOM0_I2CS_SYNCBUSY_ENABLE SERCOM Enable Synchronization Busy **/
#define SERCOM0_I2CS_SYNCBUSY_ENABLE		(1 << 1)
/** SERCOM0_I2CS_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define SERCOM0_I2CS_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_syncbusy SPISYNCBUSY SPI Synchronization Busy
@{*/

/** SERCOM0_SPI_SYNCBUSY_CTRLB CTRLB Synchronization Busy **/
#define SERCOM0_SPI_SYNCBUSY_CTRLB		(1 << 2)
/** SERCOM0_SPI_SYNCBUSY_ENABLE SERCOM Enable Synchronization Busy **/
#define SERCOM0_SPI_SYNCBUSY_ENABLE		(1 << 1)
/** SERCOM0_SPI_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define SERCOM0_SPI_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_syncbusy USARTSYNCBUSY USART Synchronization Busy
@{*/

/** SERCOM0_USART_SYNCBUSY_CTRLB CTRLB Synchronization Busy **/
#define SERCOM0_USART_SYNCBUSY_CTRLB		(1 << 2)
/** SERCOM0_USART_SYNCBUSY_ENABLE SERCOM Enable Synchronization Busy **/
#define SERCOM0_USART_SYNCBUSY_ENABLE		(1 << 1)
/** SERCOM0_USART_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define SERCOM0_USART_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup sercom0_i2cm_addr I2CMADDR I2CM Address
@{*/


#define SERCOM0_I2CM_ADDR_LEN_SHIFT		16
#define SERCOM0_I2CM_ADDR_LEN_MASK		0xff
/** @defgroup sercom0_i2cm_addr_len LEN Length
@{*/
/**@}*/

/** SERCOM0_I2CM_ADDR_TENBITEN Ten Bit Addressing Enable **/
#define SERCOM0_I2CM_ADDR_TENBITEN		(1 << 15)
/** SERCOM0_I2CM_ADDR_HS High Speed Mode **/
#define SERCOM0_I2CM_ADDR_HS		(1 << 14)
/** SERCOM0_I2CM_ADDR_LENEN Length Enable **/
#define SERCOM0_I2CM_ADDR_LENEN		(1 << 13)

#define SERCOM0_I2CM_ADDR_ADDR_SHIFT		0
#define SERCOM0_I2CM_ADDR_ADDR_MASK		0x7ff
/** @defgroup sercom0_i2cm_addr_addr ADDR Address Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cs_addr I2CSADDR I2CS Address
@{*/


#define SERCOM0_I2CS_ADDR_ADDRMASK_SHIFT		17
#define SERCOM0_I2CS_ADDR_ADDRMASK_MASK		0x3ff
/** @defgroup sercom0_i2cs_addr_addrmask ADDRMASK Address Mask
@{*/
/**@}*/

/** SERCOM0_I2CS_ADDR_TENBITEN Ten Bit Addressing Enable **/
#define SERCOM0_I2CS_ADDR_TENBITEN		(1 << 15)

#define SERCOM0_I2CS_ADDR_ADDR_SHIFT		1
#define SERCOM0_I2CS_ADDR_ADDR_MASK		0x3ff
/** @defgroup sercom0_i2cs_addr_addr ADDR Address Value
@{*/
/**@}*/

/** SERCOM0_I2CS_ADDR_GENCEN General Call Address Enable **/
#define SERCOM0_I2CS_ADDR_GENCEN		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_addr SPIADDR SPI Address
@{*/


#define SERCOM0_SPI_ADDR_ADDRMASK_SHIFT		16
#define SERCOM0_SPI_ADDR_ADDRMASK_MASK		0xff
/** @defgroup sercom0_spi_addr_addrmask ADDRMASK Address Mask
@{*/
/**@}*/


#define SERCOM0_SPI_ADDR_ADDR_SHIFT		0
#define SERCOM0_SPI_ADDR_ADDR_MASK		0xff
/** @defgroup sercom0_spi_addr_addr ADDR Address Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cm_data I2CMDATA I2CM Data
@{*/


#define SERCOM0_I2CM_DATA_DATA_SHIFT		0
#define SERCOM0_I2CM_DATA_DATA_MASK		0xff
/** @defgroup sercom0_i2cm_data_data DATA Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cs_data I2CSDATA I2CS Data
@{*/


#define SERCOM0_I2CS_DATA_DATA_SHIFT		0
#define SERCOM0_I2CS_DATA_DATA_MASK		0xff
/** @defgroup sercom0_i2cs_data_data DATA Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_spi_data SPIDATA SPI Data
@{*/


#define SERCOM0_SPI_DATA_DATA_SHIFT		0
#define SERCOM0_SPI_DATA_DATA_MASK		0x1ff
/** @defgroup sercom0_spi_data_data DATA Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_usart_data USARTDATA USART Data
@{*/


#define SERCOM0_USART_DATA_DATA_SHIFT		0
#define SERCOM0_USART_DATA_DATA_MASK		0x1ff
/** @defgroup sercom0_usart_data_data DATA Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup sercom0_i2cm_dbgctrl I2CMDBGCTRL I2CM Debug Control
@{*/

/** SERCOM0_I2CM_DBGCTRL_DBGSTOP Debug Mode **/
#define SERCOM0_I2CM_DBGCTRL_DBGSTOP		(1 << 0)

/**@}*/

/** @defgroup sercom0_spi_dbgctrl SPIDBGCTRL SPI Debug Control
@{*/

/** SERCOM0_SPI_DBGCTRL_DBGSTOP Debug Mode **/
#define SERCOM0_SPI_DBGCTRL_DBGSTOP		(1 << 0)

/**@}*/

/** @defgroup sercom0_usart_dbgctrl USARTDBGCTRL USART Debug Control
@{*/

/** SERCOM0_USART_DBGCTRL_DBGSTOP Debug Mode **/
#define SERCOM0_USART_DBGCTRL_DBGSTOP		(1 << 0)

/**@}*/

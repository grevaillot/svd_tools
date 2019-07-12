#pragma once 

/* --- I2C4: Inter-integrated circuit ------------------------------- */

/** @defgroup i2c4_registers Inter-integrated circuit Register
@{*/

/** I2C4_CR1 Control register 1 **/
#define I2C4_CR1			MMIO32(I2C4_BASE + 0x00)
/** I2C4_CR2 Control register 2 **/
#define I2C4_CR2			MMIO32(I2C4_BASE + 0x04)
/** I2C4_OAR1 Own address register 1 **/
#define I2C4_OAR1			MMIO32(I2C4_BASE + 0x08)
/** I2C4_OAR2 Own address register 2 **/
#define I2C4_OAR2			MMIO32(I2C4_BASE + 0x0c)
/** I2C4_TIMINGR Timing register **/
#define I2C4_TIMINGR			MMIO32(I2C4_BASE + 0x10)
/** I2C4_TIMEOUTR Timeout register **/
#define I2C4_TIMEOUTR			MMIO32(I2C4_BASE + 0x14)
/** I2C4_ISR Interrupt and Status register **/
#define I2C4_ISR			MMIO32(I2C4_BASE + 0x18)
/** I2C4_ICR Interrupt clear register **/
#define I2C4_ICR			MMIO32(I2C4_BASE + 0x1c)
/** I2C4_PECR PEC register **/
#define I2C4_PECR			MMIO32(I2C4_BASE + 0x20)
/** I2C4_RXDR Receive data register **/
#define I2C4_RXDR			MMIO32(I2C4_BASE + 0x24)
/** I2C4_TXDR Transmit data register **/
#define I2C4_TXDR			MMIO32(I2C4_BASE + 0x28)

/**@}*/


/** @defgroup i2c4_cr1 CR1 Control register 1
@{*/

/** I2C4_CR1_PECEN PECEN **/
#define I2C4_CR1_PECEN		(1 << 23)
/** I2C4_CR1_ALERTEN ALERTEN **/
#define I2C4_CR1_ALERTEN		(1 << 22)
/** I2C4_CR1_SMBDEN SMBDEN **/
#define I2C4_CR1_SMBDEN		(1 << 21)
/** I2C4_CR1_SMBHEN SMBHEN **/
#define I2C4_CR1_SMBHEN		(1 << 20)
/** I2C4_CR1_GCEN GCEN **/
#define I2C4_CR1_GCEN		(1 << 19)
/** I2C4_CR1_WUPEN WUPEN **/
#define I2C4_CR1_WUPEN		(1 << 18)
/** I2C4_CR1_NOSTRETCH NOSTRETCH **/
#define I2C4_CR1_NOSTRETCH		(1 << 17)
/** I2C4_CR1_SBC SBC **/
#define I2C4_CR1_SBC		(1 << 16)
/** I2C4_CR1_RXDMAEN RXDMAEN **/
#define I2C4_CR1_RXDMAEN		(1 << 15)
/** I2C4_CR1_TCDMAEN TCDMAEN **/
#define I2C4_CR1_TCDMAEN		(1 << 14)
/** I2C4_CR1_ANFOFF ANFOFF **/
#define I2C4_CR1_ANFOFF		(1 << 12)

#define I2C4_CR1_DNF_SHIFT		8
#define I2C4_CR1_DNF_MASK		0x0f
/** @defgroup i2c4_cr1_dnf DNF DNF
@{*/
/**@}*/

/** I2C4_CR1_ERRIE ERRIE **/
#define I2C4_CR1_ERRIE		(1 << 7)
/** I2C4_CR1_TCIE TCIE **/
#define I2C4_CR1_TCIE		(1 << 6)
/** I2C4_CR1_STOPIE STOPIE **/
#define I2C4_CR1_STOPIE		(1 << 5)
/** I2C4_CR1_NACKIE NACKIE **/
#define I2C4_CR1_NACKIE		(1 << 4)
/** I2C4_CR1_ADDRE ADDRE **/
#define I2C4_CR1_ADDRE		(1 << 3)
/** I2C4_CR1_RXIE RXIE **/
#define I2C4_CR1_RXIE		(1 << 2)
/** I2C4_CR1_TXIE TXIE **/
#define I2C4_CR1_TXIE		(1 << 1)
/** I2C4_CR1_PE Peripheral enable **/
#define I2C4_CR1_PE		(1 << 0)

/**@}*/

/** @defgroup i2c4_cr2 CR2 Control register 2
@{*/

/** I2C4_CR2_PECBYTE Packet error checking byte **/
#define I2C4_CR2_PECBYTE		(1 << 26)
/** I2C4_CR2_AUTOEND Automatic end mode **/
#define I2C4_CR2_AUTOEND		(1 << 25)
/** I2C4_CR2_RELOAD NBYTES reload mode **/
#define I2C4_CR2_RELOAD		(1 << 24)

#define I2C4_CR2_NBYTES_SHIFT		16
#define I2C4_CR2_NBYTES_MASK		0xff
/** @defgroup i2c4_cr2_nbytes NBYTES Number of bytes
@{*/
/**@}*/

/** I2C4_CR2_NACK NACK generation **/
#define I2C4_CR2_NACK		(1 << 15)
/** I2C4_CR2_STOP Stop generation **/
#define I2C4_CR2_STOP		(1 << 14)
/** I2C4_CR2_START Start generation **/
#define I2C4_CR2_START		(1 << 13)
/** I2C4_CR2_HEAD10R 10-bit address header only read direction **/
#define I2C4_CR2_HEAD10R		(1 << 12)
/** I2C4_CR2_ADD10 10-bit addressing mode **/
#define I2C4_CR2_ADD10		(1 << 11)
/** I2C4_CR2_RD_WRN Transfer direction **/
#define I2C4_CR2_RD_WRN		(1 << 10)

#define I2C4_CR2_SADD8_9_SHIFT		8
#define I2C4_CR2_SADD8_9_MASK		0x03
/** @defgroup i2c4_cr2_sadd8_9 SADD89 Slave address bit 8_9
@{*/
/**@}*/


#define I2C4_CR2_SADD1_7_SHIFT		1
#define I2C4_CR2_SADD1_7_MASK		0x7f
/** @defgroup i2c4_cr2_sadd1_7 SADD17 Slave address bit 7_1
@{*/
/**@}*/

/** I2C4_CR2_SADD0 Slave address bit 0 **/
#define I2C4_CR2_SADD0		(1 << 0)

/**@}*/

/** @defgroup i2c4_oar1 OAR1 Own address register 1
@{*/

/** I2C4_OAR1_OA1EN OA1EN **/
#define I2C4_OAR1_OA1EN		(1 << 15)
/** I2C4_OAR1_OA1MODE OA1MODE **/
#define I2C4_OAR1_OA1MODE		(1 << 10)

#define I2C4_OAR1_OA18_9_SHIFT		8
#define I2C4_OAR1_OA18_9_MASK		0x03
/** @defgroup i2c4_oar1_oa18_9 OA189 OA18_9
@{*/
/**@}*/


#define I2C4_OAR1_OA11_7_SHIFT		1
#define I2C4_OAR1_OA11_7_MASK		0x7f
/** @defgroup i2c4_oar1_oa11_7 OA117 OA11_7
@{*/
/**@}*/

/** I2C4_OAR1_OA1 OA1 **/
#define I2C4_OAR1_OA1		(1 << 0)

/**@}*/

/** @defgroup i2c4_oar2 OAR2 Own address register 2
@{*/

/** I2C4_OAR2_OA2EN OA2EN **/
#define I2C4_OAR2_OA2EN		(1 << 15)

#define I2C4_OAR2_OA2MSK_SHIFT		8
#define I2C4_OAR2_OA2MSK_MASK		0x07
/** @defgroup i2c4_oar2_oa2msk OA2MSK OA2MSK
@{*/
/**@}*/


#define I2C4_OAR2_OA21_7_SHIFT		1
#define I2C4_OAR2_OA21_7_MASK		0x7f
/** @defgroup i2c4_oar2_oa21_7 OA217 OA21_7
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c4_timingr TIMINGR Timing register
@{*/


#define I2C4_TIMINGR_PRESC_SHIFT		28
#define I2C4_TIMINGR_PRESC_MASK		0x0f
/** @defgroup i2c4_timingr_presc PRESC PRESC
@{*/
/**@}*/


#define I2C4_TIMINGR_SCLDEL_SHIFT		20
#define I2C4_TIMINGR_SCLDEL_MASK		0x0f
/** @defgroup i2c4_timingr_scldel SCLDEL SCLDEL
@{*/
/**@}*/


#define I2C4_TIMINGR_SDADEL_SHIFT		16
#define I2C4_TIMINGR_SDADEL_MASK		0x0f
/** @defgroup i2c4_timingr_sdadel SDADEL SDADEL
@{*/
/**@}*/


#define I2C4_TIMINGR_SCLH_SHIFT		8
#define I2C4_TIMINGR_SCLH_MASK		0xff
/** @defgroup i2c4_timingr_sclh SCLH SCLH
@{*/
/**@}*/


#define I2C4_TIMINGR_SCLL_SHIFT		0
#define I2C4_TIMINGR_SCLL_MASK		0xff
/** @defgroup i2c4_timingr_scll SCLL SCLL
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c4_timeoutr TIMEOUTR Timeout register
@{*/

/** I2C4_TIMEOUTR_TEXTEN TEXTEN **/
#define I2C4_TIMEOUTR_TEXTEN		(1 << 31)

#define I2C4_TIMEOUTR_TIMEOUTB_SHIFT		16
#define I2C4_TIMEOUTR_TIMEOUTB_MASK		0xfff
/** @defgroup i2c4_timeoutr_timeoutb TIMEOUTB TIMEOUTB
@{*/
/**@}*/

/** I2C4_TIMEOUTR_TIMOUTEN TIMOUTEN **/
#define I2C4_TIMEOUTR_TIMOUTEN		(1 << 15)
/** I2C4_TIMEOUTR_TIDLE TIDLE **/
#define I2C4_TIMEOUTR_TIDLE		(1 << 12)

#define I2C4_TIMEOUTR_TIMEOUTA_SHIFT		0
#define I2C4_TIMEOUTR_TIMEOUTA_MASK		0xfff
/** @defgroup i2c4_timeoutr_timeouta TIMEOUTA TIMEOUTA
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c4_isr ISR Interrupt and Status register
@{*/


#define I2C4_ISR_ADDCODE_SHIFT		17
#define I2C4_ISR_ADDCODE_MASK		0x7f
/** @defgroup i2c4_isr_addcode ADDCODE ADDCODE
@{*/
/**@}*/

/** I2C4_ISR_DIR DIR **/
#define I2C4_ISR_DIR		(1 << 16)
/** I2C4_ISR_BUSY BUSY **/
#define I2C4_ISR_BUSY		(1 << 15)
/** I2C4_ISR_ALERT ALERT **/
#define I2C4_ISR_ALERT		(1 << 13)
/** I2C4_ISR_TIMEOUT TIMEOUT **/
#define I2C4_ISR_TIMEOUT		(1 << 12)
/** I2C4_ISR_PECERR PECERR **/
#define I2C4_ISR_PECERR		(1 << 11)
/** I2C4_ISR_OVR OVR **/
#define I2C4_ISR_OVR		(1 << 10)
/** I2C4_ISR_ARLO ARLO **/
#define I2C4_ISR_ARLO		(1 << 9)
/** I2C4_ISR_BERR BERR **/
#define I2C4_ISR_BERR		(1 << 8)
/** I2C4_ISR_TCR TCR **/
#define I2C4_ISR_TCR		(1 << 7)
/** I2C4_ISR_TC TC **/
#define I2C4_ISR_TC		(1 << 6)
/** I2C4_ISR_STOPF STOPF **/
#define I2C4_ISR_STOPF		(1 << 5)
/** I2C4_ISR_NACKF NACKF **/
#define I2C4_ISR_NACKF		(1 << 4)
/** I2C4_ISR_ADDR ADDR **/
#define I2C4_ISR_ADDR		(1 << 3)
/** I2C4_ISR_RXNE RXNE **/
#define I2C4_ISR_RXNE		(1 << 2)
/** I2C4_ISR_TXIS TXIS **/
#define I2C4_ISR_TXIS		(1 << 1)
/** I2C4_ISR_TXE TXE **/
#define I2C4_ISR_TXE		(1 << 0)

/**@}*/

/** @defgroup i2c4_icr ICR Interrupt clear register
@{*/

/** I2C4_ICR_ALERTC ALERTC **/
#define I2C4_ICR_ALERTC		(1 << 13)
/** I2C4_ICR_TIMOUTCF TIMOUTCF **/
#define I2C4_ICR_TIMOUTCF		(1 << 12)
/** I2C4_ICR_PECCF PECCF **/
#define I2C4_ICR_PECCF		(1 << 11)
/** I2C4_ICR_OVRCF OVRCF **/
#define I2C4_ICR_OVRCF		(1 << 10)
/** I2C4_ICR_ARLOCF ARLOCF **/
#define I2C4_ICR_ARLOCF		(1 << 9)
/** I2C4_ICR_BERRCF BERRCF **/
#define I2C4_ICR_BERRCF		(1 << 8)
/** I2C4_ICR_STOPCF STOPCF **/
#define I2C4_ICR_STOPCF		(1 << 5)
/** I2C4_ICR_NACKCF NACKCF **/
#define I2C4_ICR_NACKCF		(1 << 4)
/** I2C4_ICR_ADDRCF ADDRCF **/
#define I2C4_ICR_ADDRCF		(1 << 3)

/**@}*/

/** @defgroup i2c4_pecr PECR PEC register
@{*/


#define I2C4_PECR_PEC_SHIFT		0
#define I2C4_PECR_PEC_MASK		0xff
/** @defgroup i2c4_pecr_pec PEC PEC
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c4_rxdr RXDR Receive data register
@{*/


#define I2C4_RXDR_RXDATA_SHIFT		0
#define I2C4_RXDR_RXDATA_MASK		0xff
/** @defgroup i2c4_rxdr_rxdata RXDATA RXDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c4_txdr TXDR Transmit data register
@{*/


#define I2C4_TXDR_TXDATA_SHIFT		0
#define I2C4_TXDR_TXDATA_MASK		0xff
/** @defgroup i2c4_txdr_txdata TXDATA TXDATA
@{*/
/**@}*/


/**@}*/

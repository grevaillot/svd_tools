#pragma once 

/* --- I2C3: Inter-integrated circuit ------------------------------- */

/** @defgroup i2c3_registers Inter-integrated circuit Register
@{*/

/** I2C3_CR1 Control register 1 **/
#define I2C3_CR1			MMIO32(I2C3_BASE + 0x00)
/** I2C3_CR2 Control register 2 **/
#define I2C3_CR2			MMIO32(I2C3_BASE + 0x04)
/** I2C3_OAR1 Own address register 1 **/
#define I2C3_OAR1			MMIO32(I2C3_BASE + 0x08)
/** I2C3_OAR2 Own address register 2 **/
#define I2C3_OAR2			MMIO32(I2C3_BASE + 0x0c)
/** I2C3_TIMINGR Timing register **/
#define I2C3_TIMINGR			MMIO32(I2C3_BASE + 0x10)
/** I2C3_TIMEOUTR Status register 1 **/
#define I2C3_TIMEOUTR			MMIO32(I2C3_BASE + 0x14)
/** I2C3_ISR Interrupt and Status register **/
#define I2C3_ISR			MMIO32(I2C3_BASE + 0x18)
/** I2C3_ICR Interrupt clear register **/
#define I2C3_ICR			MMIO32(I2C3_BASE + 0x1c)
/** I2C3_PECR PEC register **/
#define I2C3_PECR			MMIO32(I2C3_BASE + 0x20)
/** I2C3_RXDR Receive data register **/
#define I2C3_RXDR			MMIO32(I2C3_BASE + 0x24)
/** I2C3_TXDR Transmit data register **/
#define I2C3_TXDR			MMIO32(I2C3_BASE + 0x28)

/**@}*/


/** @defgroup i2c3_cr1 CR1 Control register 1
@{*/

/** I2C3_CR1_PECEN PEC enable **/
#define I2C3_CR1_PECEN		(1 << 23)
/** I2C3_CR1_ALERTEN SMBUS alert enable **/
#define I2C3_CR1_ALERTEN		(1 << 22)
/** I2C3_CR1_SMBDEN SMBus Device Default address enable **/
#define I2C3_CR1_SMBDEN		(1 << 21)
/** I2C3_CR1_SMBHEN SMBus Host address enable **/
#define I2C3_CR1_SMBHEN		(1 << 20)
/** I2C3_CR1_GCEN General call enable **/
#define I2C3_CR1_GCEN		(1 << 19)
/** I2C3_CR1_WUPEN Wakeup from STOP enable **/
#define I2C3_CR1_WUPEN		(1 << 18)
/** I2C3_CR1_NOSTRETCH Clock stretching disable **/
#define I2C3_CR1_NOSTRETCH		(1 << 17)
/** I2C3_CR1_SBC Slave byte control **/
#define I2C3_CR1_SBC		(1 << 16)
/** I2C3_CR1_RXDMAEN DMA reception requests enable **/
#define I2C3_CR1_RXDMAEN		(1 << 15)
/** I2C3_CR1_TXDMAEN DMA transmission requests enable **/
#define I2C3_CR1_TXDMAEN		(1 << 14)
/** I2C3_CR1_SWRST Software reset **/
#define I2C3_CR1_SWRST		(1 << 13)
/** I2C3_CR1_ANFOFF Analog noise filter OFF **/
#define I2C3_CR1_ANFOFF		(1 << 12)

#define I2C3_CR1_DNF_SHIFT		8
#define I2C3_CR1_DNF_MASK		0x0f
/** @defgroup i2c3_cr1_dnf DNF Digital noise filter
@{*/
/**@}*/

/** I2C3_CR1_ERRIE Error interrupts enable **/
#define I2C3_CR1_ERRIE		(1 << 7)
/** I2C3_CR1_TCIE Transfer Complete interrupt enable **/
#define I2C3_CR1_TCIE		(1 << 6)
/** I2C3_CR1_STOPIE STOP detection Interrupt enable **/
#define I2C3_CR1_STOPIE		(1 << 5)
/** I2C3_CR1_NACKIE Not acknowledge received interrupt enable **/
#define I2C3_CR1_NACKIE		(1 << 4)
/** I2C3_CR1_ADDRIE Address match interrupt enable (slave only) **/
#define I2C3_CR1_ADDRIE		(1 << 3)
/** I2C3_CR1_RXIE RX Interrupt enable **/
#define I2C3_CR1_RXIE		(1 << 2)
/** I2C3_CR1_TXIE TX Interrupt enable **/
#define I2C3_CR1_TXIE		(1 << 1)
/** I2C3_CR1_PE Peripheral enable **/
#define I2C3_CR1_PE		(1 << 0)

/**@}*/

/** @defgroup i2c3_cr2 CR2 Control register 2
@{*/

/** I2C3_CR2_PECBYTE Packet error checking byte **/
#define I2C3_CR2_PECBYTE		(1 << 26)
/** I2C3_CR2_AUTOEND Automatic end mode (master mode) **/
#define I2C3_CR2_AUTOEND		(1 << 25)
/** I2C3_CR2_RELOAD NBYTES reload mode **/
#define I2C3_CR2_RELOAD		(1 << 24)

#define I2C3_CR2_NBYTES_SHIFT		16
#define I2C3_CR2_NBYTES_MASK		0xff
/** @defgroup i2c3_cr2_nbytes NBYTES Number of bytes
@{*/
/**@}*/

/** I2C3_CR2_NACK NACK generation (slave mode) **/
#define I2C3_CR2_NACK		(1 << 15)
/** I2C3_CR2_STOP Stop generation (master mode) **/
#define I2C3_CR2_STOP		(1 << 14)
/** I2C3_CR2_START Start generation **/
#define I2C3_CR2_START		(1 << 13)
/** I2C3_CR2_HEAD10R 10-bit address header only read direction (master receiver mode) **/
#define I2C3_CR2_HEAD10R		(1 << 12)
/** I2C3_CR2_ADD10 10-bit addressing mode (master mode) **/
#define I2C3_CR2_ADD10		(1 << 11)
/** I2C3_CR2_RD_WRN Transfer direction (master mode) **/
#define I2C3_CR2_RD_WRN		(1 << 10)

#define I2C3_CR2_SADD8_SHIFT		8
#define I2C3_CR2_SADD8_MASK		0x03
/** @defgroup i2c3_cr2_sadd8 SADD8 Slave address bit 9:8 (master mode)
@{*/
/**@}*/


#define I2C3_CR2_SADD1_SHIFT		1
#define I2C3_CR2_SADD1_MASK		0x7f
/** @defgroup i2c3_cr2_sadd1 SADD1 Slave address bit 7:1 (master mode)
@{*/
/**@}*/

/** I2C3_CR2_SADD0 Slave address bit 0 (master mode) **/
#define I2C3_CR2_SADD0		(1 << 0)

/**@}*/

/** @defgroup i2c3_oar1 OAR1 Own address register 1
@{*/

/** I2C3_OAR1_OA1EN Own Address 1 enable **/
#define I2C3_OAR1_OA1EN		(1 << 15)
/** I2C3_OAR1_OA1MODE Own Address 1 10-bit mode **/
#define I2C3_OAR1_OA1MODE		(1 << 10)

#define I2C3_OAR1_OA1_8_SHIFT		8
#define I2C3_OAR1_OA1_8_MASK		0x03
/** @defgroup i2c3_oar1_oa1_8 OA18 Interface address
@{*/
/**@}*/


#define I2C3_OAR1_OA1_1_SHIFT		1
#define I2C3_OAR1_OA1_1_MASK		0x7f
/** @defgroup i2c3_oar1_oa1_1 OA11 Interface address
@{*/
/**@}*/

/** I2C3_OAR1_OA1_0 Interface address **/
#define I2C3_OAR1_OA1_0		(1 << 0)

/**@}*/

/** @defgroup i2c3_oar2 OAR2 Own address register 2
@{*/

/** I2C3_OAR2_OA2EN Own Address 2 enable **/
#define I2C3_OAR2_OA2EN		(1 << 15)

#define I2C3_OAR2_OA2MSK_SHIFT		8
#define I2C3_OAR2_OA2MSK_MASK		0x07
/** @defgroup i2c3_oar2_oa2msk OA2MSK Own Address 2 masks
@{*/
/**@}*/


#define I2C3_OAR2_OA2_SHIFT		1
#define I2C3_OAR2_OA2_MASK		0x7f
/** @defgroup i2c3_oar2_oa2 OA2 Interface address
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c3_timingr TIMINGR Timing register
@{*/


#define I2C3_TIMINGR_PRESC_SHIFT		28
#define I2C3_TIMINGR_PRESC_MASK		0x0f
/** @defgroup i2c3_timingr_presc PRESC Timing prescaler
@{*/
/**@}*/


#define I2C3_TIMINGR_SCLDEL_SHIFT		20
#define I2C3_TIMINGR_SCLDEL_MASK		0x0f
/** @defgroup i2c3_timingr_scldel SCLDEL Data setup time
@{*/
/**@}*/


#define I2C3_TIMINGR_SDADEL_SHIFT		16
#define I2C3_TIMINGR_SDADEL_MASK		0x0f
/** @defgroup i2c3_timingr_sdadel SDADEL Data hold time
@{*/
/**@}*/


#define I2C3_TIMINGR_SCLH_SHIFT		8
#define I2C3_TIMINGR_SCLH_MASK		0xff
/** @defgroup i2c3_timingr_sclh SCLH SCL high period (master mode)
@{*/
/**@}*/


#define I2C3_TIMINGR_SCLL_SHIFT		0
#define I2C3_TIMINGR_SCLL_MASK		0xff
/** @defgroup i2c3_timingr_scll SCLL SCL low period (master mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c3_timeoutr TIMEOUTR Status register 1
@{*/

/** I2C3_TIMEOUTR_TEXTEN Extended clock timeout enable **/
#define I2C3_TIMEOUTR_TEXTEN		(1 << 31)

#define I2C3_TIMEOUTR_TIMEOUTB_SHIFT		16
#define I2C3_TIMEOUTR_TIMEOUTB_MASK		0xfff
/** @defgroup i2c3_timeoutr_timeoutb TIMEOUTB Bus timeout B
@{*/
/**@}*/

/** I2C3_TIMEOUTR_TIMOUTEN Clock timeout enable **/
#define I2C3_TIMEOUTR_TIMOUTEN		(1 << 15)
/** I2C3_TIMEOUTR_TIDLE Idle clock timeout detection **/
#define I2C3_TIMEOUTR_TIDLE		(1 << 12)

#define I2C3_TIMEOUTR_TIMEOUTA_SHIFT		0
#define I2C3_TIMEOUTR_TIMEOUTA_MASK		0xfff
/** @defgroup i2c3_timeoutr_timeouta TIMEOUTA Bus timeout A
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c3_isr ISR Interrupt and Status register
@{*/


#define I2C3_ISR_ADDCODE_SHIFT		17
#define I2C3_ISR_ADDCODE_MASK		0x7f
/** @defgroup i2c3_isr_addcode ADDCODE Address match code (Slave mode)
@{*/
/**@}*/

/** I2C3_ISR_DIR Transfer direction (Slave mode) **/
#define I2C3_ISR_DIR		(1 << 16)
/** I2C3_ISR_BUSY Bus busy **/
#define I2C3_ISR_BUSY		(1 << 15)
/** I2C3_ISR_ALERT SMBus alert **/
#define I2C3_ISR_ALERT		(1 << 13)
/** I2C3_ISR_TIMEOUT Timeout or t_low detection flag **/
#define I2C3_ISR_TIMEOUT		(1 << 12)
/** I2C3_ISR_PECERR PEC Error in reception **/
#define I2C3_ISR_PECERR		(1 << 11)
/** I2C3_ISR_OVR Overrun/Underrun (slave mode) **/
#define I2C3_ISR_OVR		(1 << 10)
/** I2C3_ISR_ARLO Arbitration lost **/
#define I2C3_ISR_ARLO		(1 << 9)
/** I2C3_ISR_BERR Bus error **/
#define I2C3_ISR_BERR		(1 << 8)
/** I2C3_ISR_TCR Transfer Complete Reload **/
#define I2C3_ISR_TCR		(1 << 7)
/** I2C3_ISR_TC Transfer Complete (master mode) **/
#define I2C3_ISR_TC		(1 << 6)
/** I2C3_ISR_STOPF Stop detection flag **/
#define I2C3_ISR_STOPF		(1 << 5)
/** I2C3_ISR_NACKF Not acknowledge received flag **/
#define I2C3_ISR_NACKF		(1 << 4)
/** I2C3_ISR_ADDR Address matched (slave mode) **/
#define I2C3_ISR_ADDR		(1 << 3)
/** I2C3_ISR_RXNE Receive data register not empty (receivers) **/
#define I2C3_ISR_RXNE		(1 << 2)
/** I2C3_ISR_TXIS Transmit interrupt status (transmitters) **/
#define I2C3_ISR_TXIS		(1 << 1)
/** I2C3_ISR_TXE Transmit data register empty (transmitters) **/
#define I2C3_ISR_TXE		(1 << 0)

/**@}*/

/** @defgroup i2c3_icr ICR Interrupt clear register
@{*/

/** I2C3_ICR_ALERTCF Alert flag clear **/
#define I2C3_ICR_ALERTCF		(1 << 13)
/** I2C3_ICR_TIMOUTCF Timeout detection flag clear **/
#define I2C3_ICR_TIMOUTCF		(1 << 12)
/** I2C3_ICR_PECCF PEC Error flag clear **/
#define I2C3_ICR_PECCF		(1 << 11)
/** I2C3_ICR_OVRCF Overrun/Underrun flag clear **/
#define I2C3_ICR_OVRCF		(1 << 10)
/** I2C3_ICR_ARLOCF Arbitration lost flag clear **/
#define I2C3_ICR_ARLOCF		(1 << 9)
/** I2C3_ICR_BERRCF Bus error flag clear **/
#define I2C3_ICR_BERRCF		(1 << 8)
/** I2C3_ICR_STOPCF Stop detection flag clear **/
#define I2C3_ICR_STOPCF		(1 << 5)
/** I2C3_ICR_NACKCF Not Acknowledge flag clear **/
#define I2C3_ICR_NACKCF		(1 << 4)
/** I2C3_ICR_ADDRCF Address Matched flag clear **/
#define I2C3_ICR_ADDRCF		(1 << 3)

/**@}*/

/** @defgroup i2c3_pecr PECR PEC register
@{*/


#define I2C3_PECR_PEC_SHIFT		0
#define I2C3_PECR_PEC_MASK		0xff
/** @defgroup i2c3_pecr_pec PEC Packet error checking register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c3_rxdr RXDR Receive data register
@{*/


#define I2C3_RXDR_RXDATA_SHIFT		0
#define I2C3_RXDR_RXDATA_MASK		0xff
/** @defgroup i2c3_rxdr_rxdata RXDATA 8-bit receive data
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c3_txdr TXDR Transmit data register
@{*/


#define I2C3_TXDR_TXDATA_SHIFT		0
#define I2C3_TXDR_TXDATA_MASK		0xff
/** @defgroup i2c3_txdr_txdata TXDATA 8-bit transmit data
@{*/
/**@}*/


/**@}*/

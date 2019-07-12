#pragma once 

/* --- FMPI2C: fast-mode Inter-integrated circuit ------------------- */

/** @defgroup fmpi2c_registers fast-mode Inter-integrated circuit Register
@{*/

/** FMPI2C_CR1 Control register 1 **/
#define FMPI2C_CR1			MMIO32(FMPI2C_BASE + 0x00)
/** FMPI2C_CR2 Control register 2 **/
#define FMPI2C_CR2			MMIO32(FMPI2C_BASE + 0x04)
/** FMPI2C_OAR1 Own address register 1 **/
#define FMPI2C_OAR1			MMIO32(FMPI2C_BASE + 0x08)
/** FMPI2C_OAR2 Own address register 2 **/
#define FMPI2C_OAR2			MMIO32(FMPI2C_BASE + 0x0c)
/** FMPI2C_TIMINGR Timing register **/
#define FMPI2C_TIMINGR			MMIO32(FMPI2C_BASE + 0x10)
/** FMPI2C_TIMEOUTR Timeout register **/
#define FMPI2C_TIMEOUTR			MMIO32(FMPI2C_BASE + 0x14)
/** FMPI2C_ISR Interrupt and Status register **/
#define FMPI2C_ISR			MMIO32(FMPI2C_BASE + 0x18)
/** FMPI2C_ICR Interrupt clear register **/
#define FMPI2C_ICR			MMIO32(FMPI2C_BASE + 0x1c)
/** FMPI2C_PECR PEC register **/
#define FMPI2C_PECR			MMIO32(FMPI2C_BASE + 0x20)
/** FMPI2C_RXDR Receive data register **/
#define FMPI2C_RXDR			MMIO32(FMPI2C_BASE + 0x24)
/** FMPI2C_TXDR Transmit data register **/
#define FMPI2C_TXDR			MMIO32(FMPI2C_BASE + 0x28)

/**@}*/


/** @defgroup fmpi2c_cr1 CR1 Control register 1
@{*/

/** FMPI2C_CR1_PECEN PECEN **/
#define FMPI2C_CR1_PECEN		(1 << 23)
/** FMPI2C_CR1_ALERTEN ALERTEN **/
#define FMPI2C_CR1_ALERTEN		(1 << 22)
/** FMPI2C_CR1_SMBDEN SMBDEN **/
#define FMPI2C_CR1_SMBDEN		(1 << 21)
/** FMPI2C_CR1_SMBHEN SMBHEN **/
#define FMPI2C_CR1_SMBHEN		(1 << 20)
/** FMPI2C_CR1_GCEN GCEN **/
#define FMPI2C_CR1_GCEN		(1 << 19)
/** FMPI2C_CR1_NOSTRETCH NOSTRETCH **/
#define FMPI2C_CR1_NOSTRETCH		(1 << 17)
/** FMPI2C_CR1_SBC SBC **/
#define FMPI2C_CR1_SBC		(1 << 16)
/** FMPI2C_CR1_RXDMAEN RXDMAEN **/
#define FMPI2C_CR1_RXDMAEN		(1 << 15)
/** FMPI2C_CR1_TCDMAEN TCDMAEN **/
#define FMPI2C_CR1_TCDMAEN		(1 << 14)
/** FMPI2C_CR1_ANFOFF ANFOFF **/
#define FMPI2C_CR1_ANFOFF		(1 << 12)

#define FMPI2C_CR1_DNF_SHIFT		8
#define FMPI2C_CR1_DNF_MASK		0x0f
/** @defgroup fmpi2c_cr1_dnf DNF DNF
@{*/
/**@}*/

/** FMPI2C_CR1_ERRIE ERRIE **/
#define FMPI2C_CR1_ERRIE		(1 << 7)
/** FMPI2C_CR1_TCIE TCIE **/
#define FMPI2C_CR1_TCIE		(1 << 6)
/** FMPI2C_CR1_STOPIE STOPIE **/
#define FMPI2C_CR1_STOPIE		(1 << 5)
/** FMPI2C_CR1_NACKIE NACKIE **/
#define FMPI2C_CR1_NACKIE		(1 << 4)
/** FMPI2C_CR1_ADDRE ADDRE **/
#define FMPI2C_CR1_ADDRE		(1 << 3)
/** FMPI2C_CR1_RXIE RXIE **/
#define FMPI2C_CR1_RXIE		(1 << 2)
/** FMPI2C_CR1_TXIE TXIE **/
#define FMPI2C_CR1_TXIE		(1 << 1)
/** FMPI2C_CR1_PE Peripheral enable **/
#define FMPI2C_CR1_PE		(1 << 0)

/**@}*/

/** @defgroup fmpi2c_cr2 CR2 Control register 2
@{*/

/** FMPI2C_CR2_PECBYTE Packet error checking byte **/
#define FMPI2C_CR2_PECBYTE		(1 << 26)
/** FMPI2C_CR2_AUTOEND Automatic end mode **/
#define FMPI2C_CR2_AUTOEND		(1 << 25)
/** FMPI2C_CR2_RELOAD NBYTES reload mode **/
#define FMPI2C_CR2_RELOAD		(1 << 24)

#define FMPI2C_CR2_NBYTES_SHIFT		16
#define FMPI2C_CR2_NBYTES_MASK		0xff
/** @defgroup fmpi2c_cr2_nbytes NBYTES Number of bytes
@{*/
/**@}*/

/** FMPI2C_CR2_NACK NACK generation **/
#define FMPI2C_CR2_NACK		(1 << 15)
/** FMPI2C_CR2_STOP Stop generation **/
#define FMPI2C_CR2_STOP		(1 << 14)
/** FMPI2C_CR2_START Start generation **/
#define FMPI2C_CR2_START		(1 << 13)
/** FMPI2C_CR2_HEAD10R 10-bit address header only read direction **/
#define FMPI2C_CR2_HEAD10R		(1 << 12)
/** FMPI2C_CR2_ADD10 10-bit addressing mode **/
#define FMPI2C_CR2_ADD10		(1 << 11)
/** FMPI2C_CR2_RD_WRN Transfer direction **/
#define FMPI2C_CR2_RD_WRN		(1 << 10)

#define FMPI2C_CR2_SADD8_9_SHIFT		8
#define FMPI2C_CR2_SADD8_9_MASK		0x03
/** @defgroup fmpi2c_cr2_sadd8_9 SADD89 Slave address bit 8_9
@{*/
/**@}*/


#define FMPI2C_CR2_SADD1_7_SHIFT		1
#define FMPI2C_CR2_SADD1_7_MASK		0x7f
/** @defgroup fmpi2c_cr2_sadd1_7 SADD17 Slave address bit 7_1
@{*/
/**@}*/

/** FMPI2C_CR2_SADD0 Slave address bit 0 **/
#define FMPI2C_CR2_SADD0		(1 << 0)

/**@}*/

/** @defgroup fmpi2c_oar1 OAR1 Own address register 1
@{*/

/** FMPI2C_OAR1_OA1EN OA1EN **/
#define FMPI2C_OAR1_OA1EN		(1 << 15)
/** FMPI2C_OAR1_OA1MODE OA1MODE **/
#define FMPI2C_OAR1_OA1MODE		(1 << 10)

#define FMPI2C_OAR1_OA18_9_SHIFT		8
#define FMPI2C_OAR1_OA18_9_MASK		0x03
/** @defgroup fmpi2c_oar1_oa18_9 OA189 OA18_9
@{*/
/**@}*/


#define FMPI2C_OAR1_OA11_7_SHIFT		1
#define FMPI2C_OAR1_OA11_7_MASK		0x7f
/** @defgroup fmpi2c_oar1_oa11_7 OA117 OA11_7
@{*/
/**@}*/

/** FMPI2C_OAR1_OA1 OA1 **/
#define FMPI2C_OAR1_OA1		(1 << 0)

/**@}*/

/** @defgroup fmpi2c_oar2 OAR2 Own address register 2
@{*/

/** FMPI2C_OAR2_OA2EN OA2EN **/
#define FMPI2C_OAR2_OA2EN		(1 << 15)

#define FMPI2C_OAR2_OA2MSK_SHIFT		8
#define FMPI2C_OAR2_OA2MSK_MASK		0x07
/** @defgroup fmpi2c_oar2_oa2msk OA2MSK OA2MSK
@{*/
/**@}*/


#define FMPI2C_OAR2_OA21_7_SHIFT		1
#define FMPI2C_OAR2_OA21_7_MASK		0x7f
/** @defgroup fmpi2c_oar2_oa21_7 OA217 OA21_7
@{*/
/**@}*/


/**@}*/

/** @defgroup fmpi2c_timingr TIMINGR Timing register
@{*/


#define FMPI2C_TIMINGR_PRESC_SHIFT		28
#define FMPI2C_TIMINGR_PRESC_MASK		0x0f
/** @defgroup fmpi2c_timingr_presc PRESC PRESC
@{*/
/**@}*/


#define FMPI2C_TIMINGR_SCLDEL_SHIFT		20
#define FMPI2C_TIMINGR_SCLDEL_MASK		0x0f
/** @defgroup fmpi2c_timingr_scldel SCLDEL SCLDEL
@{*/
/**@}*/


#define FMPI2C_TIMINGR_SDADEL_SHIFT		16
#define FMPI2C_TIMINGR_SDADEL_MASK		0x0f
/** @defgroup fmpi2c_timingr_sdadel SDADEL SDADEL
@{*/
/**@}*/


#define FMPI2C_TIMINGR_SCLH_SHIFT		8
#define FMPI2C_TIMINGR_SCLH_MASK		0xff
/** @defgroup fmpi2c_timingr_sclh SCLH SCLH
@{*/
/**@}*/


#define FMPI2C_TIMINGR_SCLL_SHIFT		0
#define FMPI2C_TIMINGR_SCLL_MASK		0xff
/** @defgroup fmpi2c_timingr_scll SCLL SCLL
@{*/
/**@}*/


/**@}*/

/** @defgroup fmpi2c_timeoutr TIMEOUTR Timeout register
@{*/

/** FMPI2C_TIMEOUTR_TEXTEN TEXTEN **/
#define FMPI2C_TIMEOUTR_TEXTEN		(1 << 31)

#define FMPI2C_TIMEOUTR_TIMEOUTB_SHIFT		16
#define FMPI2C_TIMEOUTR_TIMEOUTB_MASK		0xfff
/** @defgroup fmpi2c_timeoutr_timeoutb TIMEOUTB TIMEOUTB
@{*/
/**@}*/

/** FMPI2C_TIMEOUTR_TIMOUTEN TIMOUTEN **/
#define FMPI2C_TIMEOUTR_TIMOUTEN		(1 << 15)
/** FMPI2C_TIMEOUTR_TIDLE TIDLE **/
#define FMPI2C_TIMEOUTR_TIDLE		(1 << 12)

#define FMPI2C_TIMEOUTR_TIMEOUTA_SHIFT		0
#define FMPI2C_TIMEOUTR_TIMEOUTA_MASK		0xfff
/** @defgroup fmpi2c_timeoutr_timeouta TIMEOUTA TIMEOUTA
@{*/
/**@}*/


/**@}*/

/** @defgroup fmpi2c_isr ISR Interrupt and Status register
@{*/


#define FMPI2C_ISR_ADDCODE_SHIFT		17
#define FMPI2C_ISR_ADDCODE_MASK		0x7f
/** @defgroup fmpi2c_isr_addcode ADDCODE ADDCODE
@{*/
/**@}*/

/** FMPI2C_ISR_DIR DIR **/
#define FMPI2C_ISR_DIR		(1 << 16)
/** FMPI2C_ISR_BUSY BUSY **/
#define FMPI2C_ISR_BUSY		(1 << 15)
/** FMPI2C_ISR_ALERT ALERT **/
#define FMPI2C_ISR_ALERT		(1 << 13)
/** FMPI2C_ISR_TIMEOUT TIMEOUT **/
#define FMPI2C_ISR_TIMEOUT		(1 << 12)
/** FMPI2C_ISR_PECERR PECERR **/
#define FMPI2C_ISR_PECERR		(1 << 11)
/** FMPI2C_ISR_OVR OVR **/
#define FMPI2C_ISR_OVR		(1 << 10)
/** FMPI2C_ISR_ARLO ARLO **/
#define FMPI2C_ISR_ARLO		(1 << 9)
/** FMPI2C_ISR_BERR BERR **/
#define FMPI2C_ISR_BERR		(1 << 8)
/** FMPI2C_ISR_TCR TCR **/
#define FMPI2C_ISR_TCR		(1 << 7)
/** FMPI2C_ISR_TC TC **/
#define FMPI2C_ISR_TC		(1 << 6)
/** FMPI2C_ISR_STOPF STOPF **/
#define FMPI2C_ISR_STOPF		(1 << 5)
/** FMPI2C_ISR_NACKF NACKF **/
#define FMPI2C_ISR_NACKF		(1 << 4)
/** FMPI2C_ISR_ADDR ADDR **/
#define FMPI2C_ISR_ADDR		(1 << 3)
/** FMPI2C_ISR_RXNE RXNE **/
#define FMPI2C_ISR_RXNE		(1 << 2)
/** FMPI2C_ISR_TXIS TXIS **/
#define FMPI2C_ISR_TXIS		(1 << 1)
/** FMPI2C_ISR_TXE TXE **/
#define FMPI2C_ISR_TXE		(1 << 0)

/**@}*/

/** @defgroup fmpi2c_icr ICR Interrupt clear register
@{*/

/** FMPI2C_ICR_ALERTCF Alert flag clear **/
#define FMPI2C_ICR_ALERTCF		(1 << 13)
/** FMPI2C_ICR_TIMOUTCF Timeout detection flag clear **/
#define FMPI2C_ICR_TIMOUTCF		(1 << 12)
/** FMPI2C_ICR_PECCF PEC Error flag clear **/
#define FMPI2C_ICR_PECCF		(1 << 11)
/** FMPI2C_ICR_OVRCF Overrun/Underrun flag clear **/
#define FMPI2C_ICR_OVRCF		(1 << 10)
/** FMPI2C_ICR_ARLOCF Arbitration Lost flag clear **/
#define FMPI2C_ICR_ARLOCF		(1 << 9)
/** FMPI2C_ICR_BERRCF Bus error flag clear **/
#define FMPI2C_ICR_BERRCF		(1 << 8)
/** FMPI2C_ICR_STOPCF Stop detection flag clear **/
#define FMPI2C_ICR_STOPCF		(1 << 5)
/** FMPI2C_ICR_NACKCF Not Acknowledge flag clear **/
#define FMPI2C_ICR_NACKCF		(1 << 4)
/** FMPI2C_ICR_ADDRCF Address matched flag clear **/
#define FMPI2C_ICR_ADDRCF		(1 << 3)

/**@}*/

/** @defgroup fmpi2c_pecr PECR PEC register
@{*/


#define FMPI2C_PECR_PEC_SHIFT		0
#define FMPI2C_PECR_PEC_MASK		0xff
/** @defgroup fmpi2c_pecr_pec PEC PEC
@{*/
/**@}*/


/**@}*/

/** @defgroup fmpi2c_rxdr RXDR Receive data register
@{*/


#define FMPI2C_RXDR_RXDATA_SHIFT		0
#define FMPI2C_RXDR_RXDATA_MASK		0xff
/** @defgroup fmpi2c_rxdr_rxdata RXDATA RXDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup fmpi2c_txdr TXDR Transmit data register
@{*/


#define FMPI2C_TXDR_TXDATA_SHIFT		0
#define FMPI2C_TXDR_TXDATA_MASK		0xff
/** @defgroup fmpi2c_txdr_txdata TXDATA TXDATA
@{*/
/**@}*/


/**@}*/

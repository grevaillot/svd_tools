#pragma once 

/* --- I2C1: I2C ---------------------------------------------------- */

/** @defgroup i2c1_registers I2C Register
@{*/

/** I2C1_I2C_CR1 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. **/
#define I2C1_I2C_CR1			MMIO32(I2C1_BASE + 0x00)
/** I2C1_I2C_CR2 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. **/
#define I2C1_I2C_CR2			MMIO32(I2C1_BASE + 0x04)
/** I2C1_I2C_OAR1 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. **/
#define I2C1_I2C_OAR1			MMIO32(I2C1_BASE + 0x08)
/** I2C1_I2C_OAR2 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. **/
#define I2C1_I2C_OAR2			MMIO32(I2C1_BASE + 0x0c)
/** I2C1_I2C_TIMINGR Access: No wait states **/
#define I2C1_I2C_TIMINGR			MMIO32(I2C1_BASE + 0x10)
/** I2C1_I2C_TIMEOUTR Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. **/
#define I2C1_I2C_TIMEOUTR			MMIO32(I2C1_BASE + 0x14)
/** I2C1_I2C_ISR Access: No wait states **/
#define I2C1_I2C_ISR			MMIO32(I2C1_BASE + 0x18)
/** I2C1_I2C_ICR Access: No wait states **/
#define I2C1_I2C_ICR			MMIO32(I2C1_BASE + 0x1c)
/** I2C1_I2C_PECR Access: No wait states **/
#define I2C1_I2C_PECR			MMIO32(I2C1_BASE + 0x20)
/** I2C1_I2C_RXDR Access: No wait states **/
#define I2C1_I2C_RXDR			MMIO32(I2C1_BASE + 0x24)
/** I2C1_I2C_TXDR Access: No wait states **/
#define I2C1_I2C_TXDR			MMIO32(I2C1_BASE + 0x28)

/**@}*/


/** @defgroup i2c1_i2c_cr1 I2CCR1 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
@{*/

/** I2C1_I2C_CR1_PECEN PEC enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_CR1_PECEN		(1 << 23)
/** I2C1_I2C_CR1_ALERTEN SMBus alert enable Device mode (SMBHEN=0): Host mode (SMBHEN=1): Note: When ALERTEN=0, the SMBA pin can be used as a standard GPIO. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_CR1_ALERTEN		(1 << 22)
/** I2C1_I2C_CR1_SMBDEN SMBus Device Default address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_CR1_SMBDEN		(1 << 21)
/** I2C1_I2C_CR1_SMBHEN SMBus Host address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_CR1_SMBHEN		(1 << 20)
/** I2C1_I2C_CR1_GCEN General call enable **/
#define I2C1_I2C_CR1_GCEN		(1 << 19)
/** I2C1_I2C_CR1_WUPEN Wakeup from Stop mode enable Note: If the Wakeup from Stop mode feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. Note: WUPEN can be set only when DNF = 0000 **/
#define I2C1_I2C_CR1_WUPEN		(1 << 18)
/** I2C1_I2C_CR1_NOSTRETCH Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. Note: This bit can only be programmed when the I2C is disabled (PE = 0). **/
#define I2C1_I2C_CR1_NOSTRETCH		(1 << 17)
/** I2C1_I2C_CR1_SBC Slave byte control This bit is used to enable hardware byte control in slave mode. **/
#define I2C1_I2C_CR1_SBC		(1 << 16)
/** I2C1_I2C_CR1_RXDMAEN DMA reception requests enable **/
#define I2C1_I2C_CR1_RXDMAEN		(1 << 15)
/** I2C1_I2C_CR1_TXDMAEN DMA transmission requests enable **/
#define I2C1_I2C_CR1_TXDMAEN		(1 << 14)
/** I2C1_I2C_CR1_ANFOFF Analog noise filter OFF Note: This bit can only be programmed when the I2C is disabled (PE = 0). **/
#define I2C1_I2C_CR1_ANFOFF		(1 << 12)

#define I2C1_I2C_CR1_DNF_SHIFT		8
#define I2C1_I2C_CR1_DNF_MASK		0x0f
/** @defgroup i2c1_i2c_cr1_dnf DNF Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter will filter spikes with a length of up to DNF[3:0] * tI2CCLK ... Note: If the analog filter is also enabled, the digital filter is added to the analog filter. This filter can only be programmed when the I2C is disabled (PE = 0).
@{*/
/**@}*/

/** I2C1_I2C_CR1_ERRIE Error interrupts enable Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT) **/
#define I2C1_I2C_CR1_ERRIE		(1 << 7)
/** I2C1_I2C_CR1_TCIE Transfer Complete interrupt enable Note: Any of these events will generate an interrupt: Transfer Complete (TC) Transfer Complete Reload (TCR) **/
#define I2C1_I2C_CR1_TCIE		(1 << 6)
/** I2C1_I2C_CR1_STOPIE STOP detection Interrupt enable **/
#define I2C1_I2C_CR1_STOPIE		(1 << 5)
/** I2C1_I2C_CR1_NACKIE Not acknowledge received Interrupt enable **/
#define I2C1_I2C_CR1_NACKIE		(1 << 4)
/** I2C1_I2C_CR1_ADDRIE Address match Interrupt enable (slave only) **/
#define I2C1_I2C_CR1_ADDRIE		(1 << 3)
/** I2C1_I2C_CR1_RXIE RX Interrupt enable **/
#define I2C1_I2C_CR1_RXIE		(1 << 2)
/** I2C1_I2C_CR1_TXIE TX Interrupt enable **/
#define I2C1_I2C_CR1_TXIE		(1 << 1)
/** I2C1_I2C_CR1_PE Peripheral enable Note: When PE=0, the I2C SCL and SDA lines are released. Internal state machines and status bits are put back to their reset value. When cleared, PE must be kept low for at least 3 APB clock cycles. **/
#define I2C1_I2C_CR1_PE		(1 << 0)

/**@}*/

/** @defgroup i2c1_i2c_cr2 I2CCR2 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
@{*/

/** I2C1_I2C_CR2_PECBYTE Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. Note: Writing 0 to this bit has no effect. This bit has no effect when RELOAD is set. This bit has no effect is slave mode when SBC=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_CR2_PECBYTE		(1 << 26)
/** I2C1_I2C_CR2_AUTOEND Automatic end mode (master mode) This bit is set and cleared by software. Note: This bit has no effect in slave mode or when the RELOAD bit is set. **/
#define I2C1_I2C_CR2_AUTOEND		(1 << 25)
/** I2C1_I2C_CR2_RELOAD NBYTES reload mode This bit is set and cleared by software. **/
#define I2C1_I2C_CR2_RELOAD		(1 << 24)

#define I2C1_I2C_CR2_NBYTES_SHIFT		16
#define I2C1_I2C_CR2_NBYTES_MASK		0xff
/** @defgroup i2c1_i2c_cr2_nbytes NBYTES Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. Note: Changing these bits when the START bit is set is not allowed.
@{*/
/**@}*/

/** I2C1_I2C_CR2_NACK NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. Note: Writing 0 to this bit has no effect. This bit is used in slave mode only: in master receiver mode, NACK is automatically generated after last byte preceding STOP or RESTART condition, whatever the NACK bit value. When an overrun occurs in slave receiver NOSTRETCH mode, a NACK is automatically generated whatever the NACK bit value. When hardware PEC checking is enabled (PECBYTE=1), the PEC acknowledge value does not depend on the NACK value. **/
#define I2C1_I2C_CR2_NACK		(1 << 15)
/** I2C1_I2C_CR2_STOP Stop generation (master mode) The bit is set by software, cleared by hardware when a Stop condition is detected, or when PE = 0. In Master Mode: Note: Writing 0 to this bit has no effect. **/
#define I2C1_I2C_CR2_STOP		(1 << 14)
/** I2C1_I2C_CR2_START Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing 1 to the ADDRCF bit in the I2C_ICR register. If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit will generate a START condition once the bus is free. Note: Writing 0 to this bit has no effect. The START bit can be set even if the bus is BUSY or I2C is in slave mode. This bit has no effect when RELOAD is set. **/
#define I2C1_I2C_CR2_START		(1 << 13)
/** I2C1_I2C_CR2_HEAD10R 10-bit address header only read direction (master receiver mode) Note: Changing this bit when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_HEAD10R		(1 << 12)
/** I2C1_I2C_CR2_ADD10 10-bit addressing mode (master mode) Note: Changing this bit when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_ADD10		(1 << 11)
/** I2C1_I2C_CR2_RD_WRN Transfer direction (master mode) Note: Changing this bit when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_RD_WRN		(1 << 10)
/** I2C1_I2C_CR2_SADD9 Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD9		(1 << 9)
/** I2C1_I2C_CR2_SADD8 Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD8		(1 << 8)
/** I2C1_I2C_CR2_SADD7 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD7		(1 << 7)
/** I2C1_I2C_CR2_SADD6 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD6		(1 << 6)
/** I2C1_I2C_CR2_SADD5 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD5		(1 << 5)
/** I2C1_I2C_CR2_SADD4 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD4		(1 << 4)
/** I2C1_I2C_CR2_SADD3 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD3		(1 << 3)
/** I2C1_I2C_CR2_SADD2 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD2		(1 << 2)
/** I2C1_I2C_CR2_SADD1 Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD1		(1 << 1)
/** I2C1_I2C_CR2_SADD0 Slave address bit 0 (master mode) In 7-bit addressing mode (ADD10 = 0): This bit is dont care In 10-bit addressing mode (ADD10 = 1): This bit should be written with bit 0 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. **/
#define I2C1_I2C_CR2_SADD0		(1 << 0)

/**@}*/

/** @defgroup i2c1_i2c_oar1 I2COAR1 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
@{*/

/** I2C1_I2C_OAR1_OA1EN Own Address 1 enable **/
#define I2C1_I2C_OAR1_OA1EN		(1 << 15)
/** I2C1_I2C_OAR1_OA1MODE Own Address 1 10-bit mode Note: This bit can be written only when OA1EN=0. **/
#define I2C1_I2C_OAR1_OA1MODE		(1 << 10)

#define I2C1_I2C_OAR1_OA1_SHIFT		0
#define I2C1_I2C_OAR1_OA1_MASK		0x3ff
/** @defgroup i2c1_i2c_oar1_oa1 OA1 Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bits 9:8 of address Note: These bits can be written only when OA1EN=0. OA1[7:1]: Interface address Bits 7:1 of address Note: These bits can be written only when OA1EN=0. OA1[0]: Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bit 0 of address Note: This bit can be written only when OA1EN=0.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_oar2 I2COAR2 Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
@{*/

/** I2C1_I2C_OAR2_OA2EN Own Address 2 enable **/
#define I2C1_I2C_OAR2_OA2EN		(1 << 15)

#define I2C1_I2C_OAR2_OA2MSK_SHIFT		8
#define I2C1_I2C_OAR2_OA2MSK_MASK		0x07
/** @defgroup i2c1_i2c_oar2_oa2msk OA2MSK Own Address 2 masks Note: These bits can be written only when OA2EN=0. As soon as OA2MSK is not equal to 0, the reserved I2C addresses (0b0000xxx and 0b1111xxx) are not acknowledged even if the comparison matches.
@{*/
/**@}*/


#define I2C1_I2C_OAR2_OA2_SHIFT		1
#define I2C1_I2C_OAR2_OA2_MASK		0x7f
/** @defgroup i2c1_i2c_oar2_oa2 OA2 Interface address bits 7:1 of address Note: These bits can be written only when OA2EN=0.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_timingr I2CTIMINGR Access: No wait states
@{*/


#define I2C1_I2C_TIMINGR_PRESC_SHIFT		28
#define I2C1_I2C_TIMINGR_PRESC_MASK		0x0f
/** @defgroup i2c1_i2c_timingr_presc PRESC Timing prescaler This field is used to prescale I2CCLK in order to generate the clock period tPRESC used for data setup and hold counters (refer to I2C timings on page9) and for SCL high and low level counters (refer to I2C master initialization on page24). tPRESC = (PRESC+1) x tI2CCLK
@{*/
/**@}*/


#define I2C1_I2C_TIMINGR_SCLDEL_SHIFT		20
#define I2C1_I2C_TIMINGR_SCLDEL_MASK		0x0f
/** @defgroup i2c1_i2c_timingr_scldel SCLDEL Data setup time This field is used to generate a delay tSCLDEL between SDA edge and SCL rising edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSCLDEL. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL is used to generate tSU:DAT timing.
@{*/
/**@}*/


#define I2C1_I2C_TIMINGR_SDADEL_SHIFT		16
#define I2C1_I2C_TIMINGR_SDADEL_MASK		0x0f
/** @defgroup i2c1_i2c_timingr_sdadel SDADEL Data hold time This field is used to generate the delay tSDADEL between SCL falling edge and SDA edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSDADEL. tSDADEL= SDADEL x tPRESC Note: SDADEL is used to generate tHD:DAT timing.
@{*/
/**@}*/


#define I2C1_I2C_TIMINGR_SCLH_SHIFT		8
#define I2C1_I2C_TIMINGR_SCLH_MASK		0xff
/** @defgroup i2c1_i2c_timingr_sclh SCLH SCL high period (master mode) This field is used to generate the SCL high period in master mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also used to generate tSU:STO and tHD:STA timing.
@{*/
/**@}*/


#define I2C1_I2C_TIMINGR_SCLL_SHIFT		0
#define I2C1_I2C_TIMINGR_SCLL_MASK		0xff
/** @defgroup i2c1_i2c_timingr_scll SCLL SCL low period (master mode) This field is used to generate the SCL low period in master mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also used to generate tBUF and tSU:STA timings.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_timeoutr I2CTIMEOUTR Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
@{*/

/** I2C1_I2C_TIMEOUTR_TEXTEN Extended clock timeout enable **/
#define I2C1_I2C_TIMEOUTR_TEXTEN		(1 << 31)

#define I2C1_I2C_TIMEOUTR_TIMEOUTB_SHIFT		16
#define I2C1_I2C_TIMEOUTR_TIMEOUTB_MASK		0xfff
/** @defgroup i2c1_i2c_timeoutr_timeoutb TIMEOUTB Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0.
@{*/
/**@}*/

/** I2C1_I2C_TIMEOUTR_TIMOUTEN Clock timeout enable **/
#define I2C1_I2C_TIMEOUTR_TIMOUTEN		(1 << 15)
/** I2C1_I2C_TIMEOUTR_TIDLE Idle clock timeout detection Note: This bit can be written only when TIMOUTEN=0. **/
#define I2C1_I2C_TIMEOUTR_TIDLE		(1 << 12)

#define I2C1_I2C_TIMEOUTR_TIMEOUTA_SHIFT		0
#define I2C1_I2C_TIMEOUTR_TIMEOUTA_MASK		0xfff
/** @defgroup i2c1_i2c_timeoutr_timeouta TIMEOUTA Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_isr I2CISR Access: No wait states
@{*/


#define I2C1_I2C_ISR_ADDCODE_SHIFT		17
#define I2C1_I2C_ISR_ADDCODE_MASK		0x7f
/** @defgroup i2c1_i2c_isr_addcode ADDCODE Address match code (Slave mode) These bits are updated with the received address when an address match event occurs (ADDR = 1). In the case of a 10-bit address, ADDCODE provides the 10-bit header followed by the 2 MSBs of the address.
@{*/
/**@}*/

/** I2C1_I2C_ISR_DIR Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1). **/
#define I2C1_I2C_ISR_DIR		(1 << 16)
/** I2C1_I2C_ISR_BUSY Bus busy This flag indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected. It is cleared by hardware when a Stop condition is detected, or when PE=0. **/
#define I2C1_I2C_ISR_BUSY		(1 << 15)
/** I2C1_I2C_ISR_ALERT SMBus alert This flag is set by hardware when SMBHEN=1 (SMBus host configuration), ALERTEN=1 and a SMBALERT event (falling edge) is detected on SMBA pin. It is cleared by software by setting the ALERTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ISR_ALERT		(1 << 13)
/** I2C1_I2C_ISR_TIMEOUT Timeout or tLOW detection flag This flag is set by hardware when a timeout or extended clock timeout occurred. It is cleared by software by setting the TIMEOUTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ISR_TIMEOUT		(1 << 12)
/** I2C1_I2C_ISR_PECERR PEC Error in reception This flag is set by hardware when the received PEC does not match with the PEC register content. A NACK is automatically sent after the wrong PEC reception. It is cleared by software by setting the PECCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ISR_PECERR		(1 << 11)
/** I2C1_I2C_ISR_OVR Overrun/Underrun (slave mode) This flag is set by hardware in slave mode with NOSTRETCH=1, when an overrun/underrun error occurs. It is cleared by software by setting the OVRCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_OVR		(1 << 10)
/** I2C1_I2C_ISR_ARLO Arbitration lost This flag is set by hardware in case of arbitration loss. It is cleared by software by setting the ARLOCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_ARLO		(1 << 9)
/** I2C1_I2C_ISR_BERR Bus error This flag is set by hardware when a misplaced Start or Stop condition is detected whereas the peripheral is involved in the transfer. The flag is not set during the address phase in slave mode. It is cleared by software by setting BERRCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_BERR		(1 << 8)
/** I2C1_I2C_ISR_TCR Transfer Complete Reload This flag is set by hardware when RELOAD=1 and NBYTES data have been transferred. It is cleared by software when NBYTES is written to a non-zero value. Note: This bit is cleared by hardware when PE=0. This flag is only for master mode, or for slave mode when the SBC bit is set. **/
#define I2C1_I2C_ISR_TCR		(1 << 7)
/** I2C1_I2C_ISR_TC Transfer Complete (master mode) This flag is set by hardware when RELOAD=0, AUTOEND=0 and NBYTES data have been transferred. It is cleared by software when START bit or STOP bit is set. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_TC		(1 << 6)
/** I2C1_I2C_ISR_STOPF Stop detection flag This flag is set by hardware when a Stop condition is detected on the bus and the peripheral is involved in this transfer: either as a master, provided that the STOP condition is generated by the peripheral. or as a slave, provided that the peripheral has been addressed previously during this transfer. It is cleared by software by setting the STOPCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_STOPF		(1 << 5)
/** I2C1_I2C_ISR_NACKF Not Acknowledge received flag This flag is set by hardware when a NACK is received after a byte transmission. It is cleared by software by setting the NACKCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_NACKF		(1 << 4)
/** I2C1_I2C_ISR_ADDR Address matched (slave mode) This bit is set by hardware as soon as the received slave address matched with one of the enabled slave addresses. It is cleared by software by setting ADDRCF bit. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_ADDR		(1 << 3)
/** I2C1_I2C_ISR_RXNE Receive data register not empty (receivers) This bit is set by hardware when the received data is copied into the I2C_RXDR register, and is ready to be read. It is cleared when I2C_RXDR is read. Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_RXNE		(1 << 2)
/** I2C1_I2C_ISR_TXIS Transmit interrupt status (transmitters) This bit is set by hardware when the I2C_TXDR register is empty and the data to be transmitted must be written in the I2C_TXDR register. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software when NOSTRETCH=1 only, in order to generate a TXIS event (interrupt if TXIE=1 or DMA request if TXDMAEN=1). Note: This bit is cleared by hardware when PE=0. **/
#define I2C1_I2C_ISR_TXIS		(1 << 1)
/** I2C1_I2C_ISR_TXE Transmit data register empty (transmitters) This bit is set by hardware when the I2C_TXDR register is empty. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software in order to flush the transmit data register I2C_TXDR. Note: This bit is set by hardware when PE=0. **/
#define I2C1_I2C_ISR_TXE		(1 << 0)

/**@}*/

/** @defgroup i2c1_i2c_icr I2CICR Access: No wait states
@{*/

/** I2C1_I2C_ICR_ALERTCF Alert flag clear Writing 1 to this bit clears the ALERT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ICR_ALERTCF		(1 << 13)
/** I2C1_I2C_ICR_TIMOUTCF Timeout detection flag clear Writing 1 to this bit clears the TIMEOUT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ICR_TIMOUTCF		(1 << 12)
/** I2C1_I2C_ICR_PECCF PEC Error flag clear Writing 1 to this bit clears the PECERR flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. **/
#define I2C1_I2C_ICR_PECCF		(1 << 11)
/** I2C1_I2C_ICR_OVRCF Overrun/Underrun flag clear Writing 1 to this bit clears the OVR flag in the I2C_ISR register. **/
#define I2C1_I2C_ICR_OVRCF		(1 << 10)
/** I2C1_I2C_ICR_ARLOCF Arbitration Lost flag clear Writing 1 to this bit clears the ARLO flag in the I2C_ISR register. **/
#define I2C1_I2C_ICR_ARLOCF		(1 << 9)
/** I2C1_I2C_ICR_BERRCF Bus error flag clear Writing 1 to this bit clears the BERRF flag in the I2C_ISR register. **/
#define I2C1_I2C_ICR_BERRCF		(1 << 8)
/** I2C1_I2C_ICR_STOPCF Stop detection flag clear Writing 1 to this bit clears the STOPF flag in the I2C_ISR register. **/
#define I2C1_I2C_ICR_STOPCF		(1 << 5)
/** I2C1_I2C_ICR_NACKCF Not Acknowledge flag clear Writing 1 to this bit clears the ACKF flag in I2C_ISR register. **/
#define I2C1_I2C_ICR_NACKCF		(1 << 4)
/** I2C1_I2C_ICR_ADDRCF Address matched flag clear Writing 1 to this bit clears the ADDR flag in the I2C_ISR register. Writing 1 to this bit also clears the START bit in the I2C_CR2 register. **/
#define I2C1_I2C_ICR_ADDRCF		(1 << 3)

/**@}*/

/** @defgroup i2c1_i2c_pecr I2CPECR Access: No wait states
@{*/


#define I2C1_I2C_PECR_PEC_SHIFT		0
#define I2C1_I2C_PECR_PEC_MASK		0xff
/** @defgroup i2c1_i2c_pecr_pec PEC Packet error checking register This field contains the internal PEC when PECEN=1. The PEC is cleared by hardware when PE=0.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_rxdr I2CRXDR Access: No wait states
@{*/


#define I2C1_I2C_RXDR_RXDATA_SHIFT		0
#define I2C1_I2C_RXDR_RXDATA_MASK		0xff
/** @defgroup i2c1_i2c_rxdr_rxdata RXDATA 8-bit receive data Data byte received from the I2C bus.
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_i2c_txdr I2CTXDR Access: No wait states
@{*/


#define I2C1_I2C_TXDR_TXDATA_SHIFT		0
#define I2C1_I2C_TXDR_TXDATA_MASK		0xff
/** @defgroup i2c1_i2c_txdr_txdata TXDATA 8-bit transmit data Data byte to be transmitted to the I2C bus. Note: These bits can be written only when TXE=1.
@{*/
/**@}*/


/**@}*/

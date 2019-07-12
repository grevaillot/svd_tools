#pragma once 

/* --- I2C1: Inter integrated circuit ------------------------------- */

/** @defgroup i2c1_registers Inter integrated circuit Register
@{*/

/** I2C1_CR1 Control register 1 **/
#define I2C1_CR1			MMIO32(I2C1_BASE + 0x00)
/** I2C1_CR2 Control register 2 **/
#define I2C1_CR2			MMIO32(I2C1_BASE + 0x04)
/** I2C1_OAR1 Own address register 1 **/
#define I2C1_OAR1			MMIO32(I2C1_BASE + 0x08)
/** I2C1_OAR2 Own address register 2 **/
#define I2C1_OAR2			MMIO32(I2C1_BASE + 0x0c)
/** I2C1_DR Data register **/
#define I2C1_DR			MMIO32(I2C1_BASE + 0x10)
/** I2C1_SR1 Status register 1 **/
#define I2C1_SR1			MMIO32(I2C1_BASE + 0x14)
/** I2C1_SR2 Status register 2 **/
#define I2C1_SR2			MMIO32(I2C1_BASE + 0x18)
/** I2C1_CCR Clock control register **/
#define I2C1_CCR			MMIO32(I2C1_BASE + 0x1c)
/** I2C1_TRISE TRISE register **/
#define I2C1_TRISE			MMIO32(I2C1_BASE + 0x20)

/**@}*/


/** @defgroup i2c1_cr1 CR1 Control register 1
@{*/

/** I2C1_CR1_SWRST Software reset **/
#define I2C1_CR1_SWRST		(1 << 15)
/** I2C1_CR1_ALERT SMBus alert **/
#define I2C1_CR1_ALERT		(1 << 13)
/** I2C1_CR1_PEC Packet error checking **/
#define I2C1_CR1_PEC		(1 << 12)
/** I2C1_CR1_POS Acknowledge/PEC Position (for data reception) **/
#define I2C1_CR1_POS		(1 << 11)
/** I2C1_CR1_ACK Acknowledge enable **/
#define I2C1_CR1_ACK		(1 << 10)
/** I2C1_CR1_STOP Stop generation **/
#define I2C1_CR1_STOP		(1 << 9)
/** I2C1_CR1_START Start generation **/
#define I2C1_CR1_START		(1 << 8)
/** I2C1_CR1_NOSTRETCH Clock stretching disable (Slave mode) **/
#define I2C1_CR1_NOSTRETCH		(1 << 7)
/** I2C1_CR1_ENGC General call enable **/
#define I2C1_CR1_ENGC		(1 << 6)
/** I2C1_CR1_ENPEC PEC enable **/
#define I2C1_CR1_ENPEC		(1 << 5)
/** I2C1_CR1_ENARP ARP enable **/
#define I2C1_CR1_ENARP		(1 << 4)
/** I2C1_CR1_SMBTYPE SMBus type **/
#define I2C1_CR1_SMBTYPE		(1 << 3)
/** I2C1_CR1_SMBUS SMBus mode **/
#define I2C1_CR1_SMBUS		(1 << 1)
/** I2C1_CR1_PE Peripheral enable **/
#define I2C1_CR1_PE		(1 << 0)

/**@}*/

/** @defgroup i2c1_cr2 CR2 Control register 2
@{*/

/** I2C1_CR2_LAST DMA last transfer **/
#define I2C1_CR2_LAST		(1 << 12)
/** I2C1_CR2_DMAEN DMA requests enable **/
#define I2C1_CR2_DMAEN		(1 << 11)
/** I2C1_CR2_ITBUFEN Buffer interrupt enable **/
#define I2C1_CR2_ITBUFEN		(1 << 10)
/** I2C1_CR2_ITEVTEN Event interrupt enable **/
#define I2C1_CR2_ITEVTEN		(1 << 9)
/** I2C1_CR2_ITERREN Error interrupt enable **/
#define I2C1_CR2_ITERREN		(1 << 8)

#define I2C1_CR2_FREQ_SHIFT		0
#define I2C1_CR2_FREQ_MASK		0x3f
/** @defgroup i2c1_cr2_freq FREQ Peripheral clock frequency
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_oar1 OAR1 Own address register 1
@{*/

/** I2C1_OAR1_ADDMODE Addressing mode (slave mode) **/
#define I2C1_OAR1_ADDMODE		(1 << 15)

#define I2C1_OAR1_ADD10_SHIFT		8
#define I2C1_OAR1_ADD10_MASK		0x03
/** @defgroup i2c1_oar1_add10 ADD10 Interface address
@{*/
/**@}*/


#define I2C1_OAR1_ADD7_SHIFT		1
#define I2C1_OAR1_ADD7_MASK		0x7f
/** @defgroup i2c1_oar1_add7 ADD7 Interface address
@{*/
/**@}*/

/** I2C1_OAR1_ADD0 Interface address **/
#define I2C1_OAR1_ADD0		(1 << 0)

/**@}*/

/** @defgroup i2c1_oar2 OAR2 Own address register 2
@{*/


#define I2C1_OAR2_ADD2_SHIFT		1
#define I2C1_OAR2_ADD2_MASK		0x7f
/** @defgroup i2c1_oar2_add2 ADD2 Interface address
@{*/
/**@}*/

/** I2C1_OAR2_ENDUAL Dual addressing mode enable **/
#define I2C1_OAR2_ENDUAL		(1 << 0)

/**@}*/

/** @defgroup i2c1_dr DR Data register
@{*/


#define I2C1_DR_DR_SHIFT		0
#define I2C1_DR_DR_MASK		0xff
/** @defgroup i2c1_dr_dr DR 8-bit data register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_sr1 SR1 Status register 1
@{*/

/** I2C1_SR1_SMBALERT SMBus alert **/
#define I2C1_SR1_SMBALERT		(1 << 15)
/** I2C1_SR1_TIMEOUT Timeout or Tlow error **/
#define I2C1_SR1_TIMEOUT		(1 << 14)
/** I2C1_SR1_PECERR PEC Error in reception **/
#define I2C1_SR1_PECERR		(1 << 12)
/** I2C1_SR1_OVR Overrun/Underrun **/
#define I2C1_SR1_OVR		(1 << 11)
/** I2C1_SR1_AF Acknowledge failure **/
#define I2C1_SR1_AF		(1 << 10)
/** I2C1_SR1_ARLO Arbitration lost (master mode) **/
#define I2C1_SR1_ARLO		(1 << 9)
/** I2C1_SR1_BERR Bus error **/
#define I2C1_SR1_BERR		(1 << 8)
/** I2C1_SR1_TxE Data register empty (transmitters) **/
#define I2C1_SR1_TxE		(1 << 7)
/** I2C1_SR1_RxNE Data register not empty (receivers) **/
#define I2C1_SR1_RxNE		(1 << 6)
/** I2C1_SR1_STOPF Stop detection (slave mode) **/
#define I2C1_SR1_STOPF		(1 << 4)
/** I2C1_SR1_ADD10 10-bit header sent (Master mode) **/
#define I2C1_SR1_ADD10		(1 << 3)
/** I2C1_SR1_BTF Byte transfer finished **/
#define I2C1_SR1_BTF		(1 << 2)
/** I2C1_SR1_ADDR Address sent (master mode)/matched (slave mode) **/
#define I2C1_SR1_ADDR		(1 << 1)
/** I2C1_SR1_SB Start bit (Master mode) **/
#define I2C1_SR1_SB		(1 << 0)

/**@}*/

/** @defgroup i2c1_sr2 SR2 Status register 2
@{*/


#define I2C1_SR2_PEC_SHIFT		8
#define I2C1_SR2_PEC_MASK		0xff
/** @defgroup i2c1_sr2_pec PEC acket error checking register
@{*/
/**@}*/

/** I2C1_SR2_DUALF Dual flag (Slave mode) **/
#define I2C1_SR2_DUALF		(1 << 7)
/** I2C1_SR2_SMBHOST SMBus host header (Slave mode) **/
#define I2C1_SR2_SMBHOST		(1 << 6)
/** I2C1_SR2_SMBDEFAULT SMBus device default address (Slave mode) **/
#define I2C1_SR2_SMBDEFAULT		(1 << 5)
/** I2C1_SR2_GENCALL General call address (Slave mode) **/
#define I2C1_SR2_GENCALL		(1 << 4)
/** I2C1_SR2_TRA Transmitter/receiver **/
#define I2C1_SR2_TRA		(1 << 2)
/** I2C1_SR2_BUSY Bus busy **/
#define I2C1_SR2_BUSY		(1 << 1)
/** I2C1_SR2_MSL Master/slave **/
#define I2C1_SR2_MSL		(1 << 0)

/**@}*/

/** @defgroup i2c1_ccr CCR Clock control register
@{*/

/** I2C1_CCR_F_S I2C master mode selection **/
#define I2C1_CCR_F_S		(1 << 15)
/** I2C1_CCR_DUTY Fast mode duty cycle **/
#define I2C1_CCR_DUTY		(1 << 14)

#define I2C1_CCR_CCR_SHIFT		0
#define I2C1_CCR_CCR_MASK		0xfff
/** @defgroup i2c1_ccr_ccr CCR Clock control register in Fast/Standard mode (Master mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup i2c1_trise TRISE TRISE register
@{*/


#define I2C1_TRISE_TRISE_SHIFT		0
#define I2C1_TRISE_TRISE_MASK		0x3f
/** @defgroup i2c1_trise_trise TRISE Maximum rise time in Fast/Standard mode (Master mode)
@{*/
/**@}*/


/**@}*/

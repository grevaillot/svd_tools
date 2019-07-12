#pragma once 

/* --- SC1_I2C: Serial controller 1 (Serial peripheral interface) --- */

/** @defgroup sc1_i2c_registers Serial controller 1 (Serial peripheral
      interface) Register
@{*/

/** SC1_I2C_SC1_I2CSR Serial controller I2C status register **/
#define SC1_I2C_SC1_I2CSR			MMIO32(SC1_I2C_BASE + 0x00)
/** SC1_I2C_SC1_I2CCR1 Serial controller I2C control register 1 **/
#define SC1_I2C_SC1_I2CCR1			MMIO32(SC1_I2C_BASE + 0x08)
/** SC1_I2C_SC1_I2CCR2 Serial controller I2C control register 2 **/
#define SC1_I2C_SC1_I2CCR2			MMIO32(SC1_I2C_BASE + 0x0c)

/**@}*/


/** @defgroup sc1_i2c_sc1_i2csr SC1I2CSR Serial controller I2C status register
@{*/

/** SC1_I2C_SC1_I2CSR_CMDFIN CMDFIN **/
#define SC1_I2C_SC1_I2CSR_CMDFIN		(1 << 3)
/** SC1_I2C_SC1_I2CSR_BRF BRF **/
#define SC1_I2C_SC1_I2CSR_BRF		(1 << 2)
/** SC1_I2C_SC1_I2CSR_BTF BTF **/
#define SC1_I2C_SC1_I2CSR_BTF		(1 << 1)
/** SC1_I2C_SC1_I2CSR_NACK NACK **/
#define SC1_I2C_SC1_I2CSR_NACK		(1 << 0)

/**@}*/

/** @defgroup sc1_i2c_sc1_i2ccr1 SC1I2CCR1 Serial controller I2C control register 1
@{*/

/** SC1_I2C_SC1_I2CCR1_STOP STOP **/
#define SC1_I2C_SC1_I2CCR1_STOP		(1 << 3)
/** SC1_I2C_SC1_I2CCR1_START START **/
#define SC1_I2C_SC1_I2CCR1_START		(1 << 2)
/** SC1_I2C_SC1_I2CCR1_BTE BTE **/
#define SC1_I2C_SC1_I2CCR1_BTE		(1 << 1)
/** SC1_I2C_SC1_I2CCR1_BRE BRE **/
#define SC1_I2C_SC1_I2CCR1_BRE		(1 << 0)

/**@}*/

/** @defgroup sc1_i2c_sc1_i2ccr2 SC1I2CCR2 Serial controller I2C control register 2
@{*/

/** SC1_I2C_SC1_I2CCR2_ACK ACK **/
#define SC1_I2C_SC1_I2CCR2_ACK		(1 << 0)

/**@}*/

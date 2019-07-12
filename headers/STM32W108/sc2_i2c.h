#pragma once 

/* --- SC2_I2C: Serial controller 2 (Serial peripheral interface) --- */

/** @defgroup sc2_i2c_registers Serial controller 2 (Serial peripheral
      interface) Register
@{*/

/** SC2_I2C_SC2_I2CSR Serial controller I2C status register **/
#define SC2_I2C_SC2_I2CSR			MMIO32(SC2_I2C_BASE + 0x00)
/** SC2_I2C_SC2_I2CCR1 Serial controller I2C control register 1 **/
#define SC2_I2C_SC2_I2CCR1			MMIO32(SC2_I2C_BASE + 0x08)
/** SC2_I2C_SC2_I2CCR2 Serial controller I2C control register 2 **/
#define SC2_I2C_SC2_I2CCR2			MMIO32(SC2_I2C_BASE + 0x0c)

/**@}*/


/** @defgroup sc2_i2c_sc2_i2csr SC2I2CSR Serial controller I2C status register
@{*/

/** SC2_I2C_SC2_I2CSR_CMDFIN CMDFIN **/
#define SC2_I2C_SC2_I2CSR_CMDFIN		(1 << 3)
/** SC2_I2C_SC2_I2CSR_BRF BRF **/
#define SC2_I2C_SC2_I2CSR_BRF		(1 << 2)
/** SC2_I2C_SC2_I2CSR_BTF BTF **/
#define SC2_I2C_SC2_I2CSR_BTF		(1 << 1)
/** SC2_I2C_SC2_I2CSR_NACK NACK **/
#define SC2_I2C_SC2_I2CSR_NACK		(1 << 0)

/**@}*/

/** @defgroup sc2_i2c_sc2_i2ccr1 SC2I2CCR1 Serial controller I2C control register 1
@{*/

/** SC2_I2C_SC2_I2CCR1_STOP STOP **/
#define SC2_I2C_SC2_I2CCR1_STOP		(1 << 3)
/** SC2_I2C_SC2_I2CCR1_START START **/
#define SC2_I2C_SC2_I2CCR1_START		(1 << 2)
/** SC2_I2C_SC2_I2CCR1_BTE BTE **/
#define SC2_I2C_SC2_I2CCR1_BTE		(1 << 1)
/** SC2_I2C_SC2_I2CCR1_BRE BRE **/
#define SC2_I2C_SC2_I2CCR1_BRE		(1 << 0)

/**@}*/

/** @defgroup sc2_i2c_sc2_i2ccr2 SC2I2CCR2 Serial controller I2C control register 2
@{*/

/** SC2_I2C_SC2_I2CCR2_ACK ACK **/
#define SC2_I2C_SC2_I2CCR2_ACK		(1 << 0)

/**@}*/

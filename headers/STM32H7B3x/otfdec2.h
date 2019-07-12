#pragma once 

/* --- OTFDEC2: On-The-Fly Decryption engine ------------------------ */

/** @defgroup otfdec2_registers On-The-Fly Decryption engine Register
@{*/

/** OTFDEC2_CR OTFDEC control register **/
#define OTFDEC2_CR			MMIO32(OTFDEC2_BASE + 0x00)
/** OTFDEC2_R1CFGR OTFDEC region x configuration register **/
#define OTFDEC2_R1CFGR			MMIO32(OTFDEC2_BASE + 0x20)
/** OTFDEC2_R1STARTADDR OTFDEC region x start address register **/
#define OTFDEC2_R1STARTADDR			MMIO32(OTFDEC2_BASE + 0x24)
/** OTFDEC2_R1ENDADDR OTFDEC region x end address register **/
#define OTFDEC2_R1ENDADDR			MMIO32(OTFDEC2_BASE + 0x28)
/** OTFDEC2_R1NONCER0 OTFDEC region x nonce register 0 **/
#define OTFDEC2_R1NONCER0			MMIO32(OTFDEC2_BASE + 0x2c)
/** OTFDEC2_R1NONCER1 OTFDEC region x nonce register 1 **/
#define OTFDEC2_R1NONCER1			MMIO32(OTFDEC2_BASE + 0x30)
/** OTFDEC2_R1KEYR0 OTFDEC region x key register 0 **/
#define OTFDEC2_R1KEYR0			MMIO32(OTFDEC2_BASE + 0x34)
/** OTFDEC2_R1KEYR1 OTFDEC region x key register 1 **/
#define OTFDEC2_R1KEYR1			MMIO32(OTFDEC2_BASE + 0x38)
/** OTFDEC2_R1KEYR2 OTFDEC region x key register 2 **/
#define OTFDEC2_R1KEYR2			MMIO32(OTFDEC2_BASE + 0x3c)
/** OTFDEC2_R1KEYR3 OTFDEC region x key register 3 **/
#define OTFDEC2_R1KEYR3			MMIO32(OTFDEC2_BASE + 0x40)
/** OTFDEC2_R2CFGR OTFDEC region x configuration register **/
#define OTFDEC2_R2CFGR			MMIO32(OTFDEC2_BASE + 0x50)
/** OTFDEC2_R2STARTADDR OTFDEC region x start address register **/
#define OTFDEC2_R2STARTADDR			MMIO32(OTFDEC2_BASE + 0x54)
/** OTFDEC2_R2ENDADDR OTFDEC region x end address register **/
#define OTFDEC2_R2ENDADDR			MMIO32(OTFDEC2_BASE + 0x58)
/** OTFDEC2_R2NONCER0 OTFDEC region x nonce register 0 **/
#define OTFDEC2_R2NONCER0			MMIO32(OTFDEC2_BASE + 0x5c)
/** OTFDEC2_R2NONCER1 OTFDEC region x nonce register 1 **/
#define OTFDEC2_R2NONCER1			MMIO32(OTFDEC2_BASE + 0x60)
/** OTFDEC2_R2KEYR0 OTFDEC region x key register 0 **/
#define OTFDEC2_R2KEYR0			MMIO32(OTFDEC2_BASE + 0x64)
/** OTFDEC2_R2KEYR1 OTFDEC region x key register 1 **/
#define OTFDEC2_R2KEYR1			MMIO32(OTFDEC2_BASE + 0x68)
/** OTFDEC2_R2KEYR2 OTFDEC region x key register 2 **/
#define OTFDEC2_R2KEYR2			MMIO32(OTFDEC2_BASE + 0x6c)
/** OTFDEC2_R2KEYR3 OTFDEC region x key register 3 **/
#define OTFDEC2_R2KEYR3			MMIO32(OTFDEC2_BASE + 0x70)
/** OTFDEC2_R3CFGR OTFDEC region x configuration register **/
#define OTFDEC2_R3CFGR			MMIO32(OTFDEC2_BASE + 0x80)
/** OTFDEC2_R3STARTADDR OTFDEC region x start address register **/
#define OTFDEC2_R3STARTADDR			MMIO32(OTFDEC2_BASE + 0x84)
/** OTFDEC2_R3ENDADDR OTFDEC region x end address register **/
#define OTFDEC2_R3ENDADDR			MMIO32(OTFDEC2_BASE + 0x88)
/** OTFDEC2_R4ENDADDR OTFDEC region x end address register **/
#define OTFDEC2_R4ENDADDR			MMIO32(OTFDEC2_BASE + 0x8c)
/** OTFDEC2_R3NONCER0 OTFDEC region x nonce register 0 **/
#define OTFDEC2_R3NONCER0			MMIO32(OTFDEC2_BASE + 0x8c)
/** OTFDEC2_R3NONCER1 OTFDEC region x nonce register 1 **/
#define OTFDEC2_R3NONCER1			MMIO32(OTFDEC2_BASE + 0x90)
/** OTFDEC2_R3KEYR0 OTFDEC region x key register 0 **/
#define OTFDEC2_R3KEYR0			MMIO32(OTFDEC2_BASE + 0x94)
/** OTFDEC2_R3KEYR1 OTFDEC region x key register 1 **/
#define OTFDEC2_R3KEYR1			MMIO32(OTFDEC2_BASE + 0x98)
/** OTFDEC2_R3KEYR2 OTFDEC region x key register 2 **/
#define OTFDEC2_R3KEYR2			MMIO32(OTFDEC2_BASE + 0x9c)
/** OTFDEC2_R3KEYR3 OTFDEC region x key register 3 **/
#define OTFDEC2_R3KEYR3			MMIO32(OTFDEC2_BASE + 0xa0)
/** OTFDEC2_R4CFGR OTFDEC region x configuration register **/
#define OTFDEC2_R4CFGR			MMIO32(OTFDEC2_BASE + 0xb0)
/** OTFDEC2_R4STARTADDR OTFDEC region x start address register **/
#define OTFDEC2_R4STARTADDR			MMIO32(OTFDEC2_BASE + 0xb4)
/** OTFDEC2_R4NONCER0 OTFDEC region x nonce register 0 **/
#define OTFDEC2_R4NONCER0			MMIO32(OTFDEC2_BASE + 0xbc)
/** OTFDEC2_R4NONCER1 OTFDEC region x nonce register 1 **/
#define OTFDEC2_R4NONCER1			MMIO32(OTFDEC2_BASE + 0xc0)
/** OTFDEC2_R4KEYR0 OTFDEC region x key register 0 **/
#define OTFDEC2_R4KEYR0			MMIO32(OTFDEC2_BASE + 0xc4)
/** OTFDEC2_R4KEYR1 OTFDEC region x key register 1 **/
#define OTFDEC2_R4KEYR1			MMIO32(OTFDEC2_BASE + 0xc8)
/** OTFDEC2_R4KEYR2 OTFDEC region x key register 2 **/
#define OTFDEC2_R4KEYR2			MMIO32(OTFDEC2_BASE + 0xcc)
/** OTFDEC2_R4KEYR3 OTFDEC region x key register 3 **/
#define OTFDEC2_R4KEYR3			MMIO32(OTFDEC2_BASE + 0xd0)
/** OTFDEC2_ISR OTFDEC interrupt status register **/
#define OTFDEC2_ISR			MMIO32(OTFDEC2_BASE + 0x300)
/** OTFDEC2_ICR OTFDEC interrupt clear register **/
#define OTFDEC2_ICR			MMIO32(OTFDEC2_BASE + 0x304)
/** OTFDEC2_IER OTFDEC interrupt enable register **/
#define OTFDEC2_IER			MMIO32(OTFDEC2_BASE + 0x308)

/**@}*/


/** @defgroup otfdec2_cr CR OTFDEC control register
@{*/

/** OTFDEC2_CR_ENC Encryption mode bit **/
#define OTFDEC2_CR_ENC		(1 << 0)

/**@}*/

/** @defgroup otfdec2_r1cfgr R1CFGR OTFDEC region x configuration register
@{*/


#define OTFDEC2_R1CFGR_REGx_VERSION_SHIFT		16
#define OTFDEC2_R1CFGR_REGx_VERSION_MASK		0xffff
/** @defgroup otfdec2_r1cfgr_regx_version REGxVERSION region firmware version
@{*/
/**@}*/


#define OTFDEC2_R1CFGR_KEYCRC_SHIFT		8
#define OTFDEC2_R1CFGR_KEYCRC_MASK		0xff
/** @defgroup otfdec2_r1cfgr_keycrc KEYCRC region key 8-bit CRC
@{*/
/**@}*/


#define OTFDEC2_R1CFGR_MODE_SHIFT		4
#define OTFDEC2_R1CFGR_MODE_MASK		0x03
/** @defgroup otfdec2_r1cfgr_mode MODE operating mode
@{*/
/**@}*/

/** OTFDEC2_R1CFGR_KEYLOCK region key lock **/
#define OTFDEC2_R1CFGR_KEYLOCK		(1 << 2)
/** OTFDEC2_R1CFGR_CONFIGLOCK region config lock **/
#define OTFDEC2_R1CFGR_CONFIGLOCK		(1 << 1)
/** OTFDEC2_R1CFGR_REG_EN region on-the-fly decryption enable **/
#define OTFDEC2_R1CFGR_REG_EN		(1 << 0)

/**@}*/

/** @defgroup otfdec2_r1startaddr R1STARTADDR OTFDEC region x start address register
@{*/


#define OTFDEC2_R1STARTADDR_REGx_START_ADDR_SHIFT		0
#define OTFDEC2_R1STARTADDR_REGx_START_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r1startaddr_regx_start_addr REGxSTARTADDR Region AXI start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1endaddr R1ENDADDR OTFDEC region x end address register
@{*/


#define OTFDEC2_R1ENDADDR_REGx_END_ADDR_SHIFT		0
#define OTFDEC2_R1ENDADDR_REGx_END_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r1endaddr_regx_end_addr REGxENDADDR Region AXI end address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1noncer0 R1NONCER0 OTFDEC region x nonce register 0
@{*/


#define OTFDEC2_R1NONCER0_REGx_NONCE_SHIFT		0
#define OTFDEC2_R1NONCER0_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r1noncer0_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1noncer1 R1NONCER1 OTFDEC region x nonce register 1
@{*/


#define OTFDEC2_R1NONCER1_REGx_NONCE_SHIFT		0
#define OTFDEC2_R1NONCER1_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r1noncer1_regx_nonce REGxNONCE Region nonce
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1keyr0 R1KEYR0 OTFDEC region x key register 0
@{*/


#define OTFDEC2_R1KEYR0_REGx_KEY_SHIFT		0
#define OTFDEC2_R1KEYR0_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r1keyr0_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1keyr1 R1KEYR1 OTFDEC region x key register 1
@{*/


#define OTFDEC2_R1KEYR1_REGx_KEY_SHIFT		0
#define OTFDEC2_R1KEYR1_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r1keyr1_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1keyr2 R1KEYR2 OTFDEC region x key register 2
@{*/


#define OTFDEC2_R1KEYR2_REGx_KEY_SHIFT		0
#define OTFDEC2_R1KEYR2_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r1keyr2_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r1keyr3 R1KEYR3 OTFDEC region x key register 3
@{*/


#define OTFDEC2_R1KEYR3_REGx_KEY_SHIFT		0
#define OTFDEC2_R1KEYR3_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r1keyr3_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2cfgr R2CFGR OTFDEC region x configuration register
@{*/


#define OTFDEC2_R2CFGR_REGx_VERSION_SHIFT		16
#define OTFDEC2_R2CFGR_REGx_VERSION_MASK		0xffff
/** @defgroup otfdec2_r2cfgr_regx_version REGxVERSION region firmware version
@{*/
/**@}*/


#define OTFDEC2_R2CFGR_KEYCRC_SHIFT		8
#define OTFDEC2_R2CFGR_KEYCRC_MASK		0xff
/** @defgroup otfdec2_r2cfgr_keycrc KEYCRC region key 8-bit CRC
@{*/
/**@}*/


#define OTFDEC2_R2CFGR_MODE_SHIFT		4
#define OTFDEC2_R2CFGR_MODE_MASK		0x03
/** @defgroup otfdec2_r2cfgr_mode MODE operating mode
@{*/
/**@}*/

/** OTFDEC2_R2CFGR_KEYLOCK region key lock **/
#define OTFDEC2_R2CFGR_KEYLOCK		(1 << 2)
/** OTFDEC2_R2CFGR_CONFIGLOCK region config lock **/
#define OTFDEC2_R2CFGR_CONFIGLOCK		(1 << 1)
/** OTFDEC2_R2CFGR_REG_EN region on-the-fly decryption enable **/
#define OTFDEC2_R2CFGR_REG_EN		(1 << 0)

/**@}*/

/** @defgroup otfdec2_r2startaddr R2STARTADDR OTFDEC region x start address register
@{*/


#define OTFDEC2_R2STARTADDR_REGx_START_ADDR_SHIFT		0
#define OTFDEC2_R2STARTADDR_REGx_START_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r2startaddr_regx_start_addr REGxSTARTADDR Region AXI start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2endaddr R2ENDADDR OTFDEC region x end address register
@{*/


#define OTFDEC2_R2ENDADDR_REGx_END_ADDR_SHIFT		0
#define OTFDEC2_R2ENDADDR_REGx_END_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r2endaddr_regx_end_addr REGxENDADDR Region AXI end address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2noncer0 R2NONCER0 OTFDEC region x nonce register 0
@{*/


#define OTFDEC2_R2NONCER0_REGx_NONCE_SHIFT		0
#define OTFDEC2_R2NONCER0_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r2noncer0_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2noncer1 R2NONCER1 OTFDEC region x nonce register 1
@{*/


#define OTFDEC2_R2NONCER1_REGx_NONCE_SHIFT		0
#define OTFDEC2_R2NONCER1_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r2noncer1_regx_nonce REGxNONCE Region nonce, bits [63:32]REGx_NONCE[63:32]
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2keyr0 R2KEYR0 OTFDEC region x key register 0
@{*/


#define OTFDEC2_R2KEYR0_REGx_KEY_SHIFT		0
#define OTFDEC2_R2KEYR0_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r2keyr0_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2keyr1 R2KEYR1 OTFDEC region x key register 1
@{*/


#define OTFDEC2_R2KEYR1_REGx_KEY_SHIFT		0
#define OTFDEC2_R2KEYR1_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r2keyr1_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2keyr2 R2KEYR2 OTFDEC region x key register 2
@{*/


#define OTFDEC2_R2KEYR2_REGx_KEY__SHIFT		0
#define OTFDEC2_R2KEYR2_REGx_KEY__MASK		0xffffffff
/** @defgroup otfdec2_r2keyr2_regx_key_ REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r2keyr3 R2KEYR3 OTFDEC region x key register 3
@{*/


#define OTFDEC2_R2KEYR3_REGx_KEY_SHIFT		0
#define OTFDEC2_R2KEYR3_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r2keyr3_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3cfgr R3CFGR OTFDEC region x configuration register
@{*/


#define OTFDEC2_R3CFGR_REGx_VERSION_SHIFT		16
#define OTFDEC2_R3CFGR_REGx_VERSION_MASK		0xffff
/** @defgroup otfdec2_r3cfgr_regx_version REGxVERSION region firmware version
@{*/
/**@}*/


#define OTFDEC2_R3CFGR_KEYCRC_SHIFT		8
#define OTFDEC2_R3CFGR_KEYCRC_MASK		0xff
/** @defgroup otfdec2_r3cfgr_keycrc KEYCRC region key 8-bit CRC
@{*/
/**@}*/


#define OTFDEC2_R3CFGR_MODE_SHIFT		4
#define OTFDEC2_R3CFGR_MODE_MASK		0x03
/** @defgroup otfdec2_r3cfgr_mode MODE operating mode
@{*/
/**@}*/

/** OTFDEC2_R3CFGR_KEYLOCK region key lock **/
#define OTFDEC2_R3CFGR_KEYLOCK		(1 << 2)
/** OTFDEC2_R3CFGR_CONFIGLOCK region config lock **/
#define OTFDEC2_R3CFGR_CONFIGLOCK		(1 << 1)
/** OTFDEC2_R3CFGR_REG_EN region on-the-fly decryption enable **/
#define OTFDEC2_R3CFGR_REG_EN		(1 << 0)

/**@}*/

/** @defgroup otfdec2_r3startaddr R3STARTADDR OTFDEC region x start address register
@{*/


#define OTFDEC2_R3STARTADDR_REGx_START_ADDR_SHIFT		0
#define OTFDEC2_R3STARTADDR_REGx_START_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r3startaddr_regx_start_addr REGxSTARTADDR Region AXI start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3endaddr R3ENDADDR OTFDEC region x end address register
@{*/


#define OTFDEC2_R3ENDADDR_REGx_END_ADDR_SHIFT		0
#define OTFDEC2_R3ENDADDR_REGx_END_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r3endaddr_regx_end_addr REGxENDADDR Region AXI end address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4endaddr R4ENDADDR OTFDEC region x end address register
@{*/


#define OTFDEC2_R4ENDADDR_REGx_END_ADDR_SHIFT		0
#define OTFDEC2_R4ENDADDR_REGx_END_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r4endaddr_regx_end_addr REGxENDADDR Region AXI end address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3noncer0 R3NONCER0 OTFDEC region x nonce register 0
@{*/


#define OTFDEC2_R3NONCER0_REGx_NONCE_SHIFT		0
#define OTFDEC2_R3NONCER0_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r3noncer0_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3noncer1 R3NONCER1 OTFDEC region x nonce register 1
@{*/


#define OTFDEC2_R3NONCER1_REGx_NONCE_SHIFT		0
#define OTFDEC2_R3NONCER1_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r3noncer1_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3keyr0 R3KEYR0 OTFDEC region x key register 0
@{*/


#define OTFDEC2_R3KEYR0_REGx_KEY_SHIFT		0
#define OTFDEC2_R3KEYR0_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r3keyr0_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3keyr1 R3KEYR1 OTFDEC region x key register 1
@{*/


#define OTFDEC2_R3KEYR1_REGx_KEY_SHIFT		0
#define OTFDEC2_R3KEYR1_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r3keyr1_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3keyr2 R3KEYR2 OTFDEC region x key register 2
@{*/


#define OTFDEC2_R3KEYR2_REGx_KEY_SHIFT		0
#define OTFDEC2_R3KEYR2_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r3keyr2_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r3keyr3 R3KEYR3 OTFDEC region x key register 3
@{*/


#define OTFDEC2_R3KEYR3_REGx_KEY_SHIFT		0
#define OTFDEC2_R3KEYR3_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r3keyr3_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4cfgr R4CFGR OTFDEC region x configuration register
@{*/


#define OTFDEC2_R4CFGR_REGx_VERSION_SHIFT		16
#define OTFDEC2_R4CFGR_REGx_VERSION_MASK		0xffff
/** @defgroup otfdec2_r4cfgr_regx_version REGxVERSION region firmware version
@{*/
/**@}*/


#define OTFDEC2_R4CFGR_KEYCRC_SHIFT		8
#define OTFDEC2_R4CFGR_KEYCRC_MASK		0xff
/** @defgroup otfdec2_r4cfgr_keycrc KEYCRC region key 8-bit CRC
@{*/
/**@}*/


#define OTFDEC2_R4CFGR_MODE_SHIFT		4
#define OTFDEC2_R4CFGR_MODE_MASK		0x03
/** @defgroup otfdec2_r4cfgr_mode MODE operating mode
@{*/
/**@}*/

/** OTFDEC2_R4CFGR_KEYLOCK region key lock **/
#define OTFDEC2_R4CFGR_KEYLOCK		(1 << 2)
/** OTFDEC2_R4CFGR_CONFIGLOCK region config lock **/
#define OTFDEC2_R4CFGR_CONFIGLOCK		(1 << 1)
/** OTFDEC2_R4CFGR_REG_EN region on-the-fly decryption enable **/
#define OTFDEC2_R4CFGR_REG_EN		(1 << 0)

/**@}*/

/** @defgroup otfdec2_r4startaddr R4STARTADDR OTFDEC region x start address register
@{*/


#define OTFDEC2_R4STARTADDR_REGx_START_ADDR_SHIFT		0
#define OTFDEC2_R4STARTADDR_REGx_START_ADDR_MASK		0xffffffff
/** @defgroup otfdec2_r4startaddr_regx_start_addr REGxSTARTADDR Region AXI start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4noncer0 R4NONCER0 OTFDEC region x nonce register 0
@{*/


#define OTFDEC2_R4NONCER0_REGx_NONCE_SHIFT		0
#define OTFDEC2_R4NONCER0_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r4noncer0_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4noncer1 R4NONCER1 OTFDEC region x nonce register 1
@{*/


#define OTFDEC2_R4NONCER1_REGx_NONCE_SHIFT		0
#define OTFDEC2_R4NONCER1_REGx_NONCE_MASK		0xffffffff
/** @defgroup otfdec2_r4noncer1_regx_nonce REGxNONCE REGx_NONCE
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4keyr0 R4KEYR0 OTFDEC region x key register 0
@{*/


#define OTFDEC2_R4KEYR0_REGx_KEY_SHIFT		0
#define OTFDEC2_R4KEYR0_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r4keyr0_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4keyr1 R4KEYR1 OTFDEC region x key register 1
@{*/


#define OTFDEC2_R4KEYR1_REGx_KEY_SHIFT		0
#define OTFDEC2_R4KEYR1_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r4keyr1_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4keyr2 R4KEYR2 OTFDEC region x key register 2
@{*/


#define OTFDEC2_R4KEYR2_REGx_KEY_SHIFT		0
#define OTFDEC2_R4KEYR2_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r4keyr2_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_r4keyr3 R4KEYR3 OTFDEC region x key register 3
@{*/


#define OTFDEC2_R4KEYR3_REGx_KEY_SHIFT		0
#define OTFDEC2_R4KEYR3_REGx_KEY_MASK		0xffffffff
/** @defgroup otfdec2_r4keyr3_regx_key REGxKEY REGx_KEY
@{*/
/**@}*/


/**@}*/

/** @defgroup otfdec2_isr ISR OTFDEC interrupt status register
@{*/

/** OTFDEC2_ISR_KEIF Key Error Interrupt Flag status **/
#define OTFDEC2_ISR_KEIF		(1 << 2)
/** OTFDEC2_ISR_XONEIF Execute-only execute-Never Error Interrupt Flag status **/
#define OTFDEC2_ISR_XONEIF		(1 << 1)
/** OTFDEC2_ISR_SEIF Security Error Interrupt Flag status **/
#define OTFDEC2_ISR_SEIF		(1 << 0)

/**@}*/

/** @defgroup otfdec2_icr ICR OTFDEC interrupt clear register
@{*/

/** OTFDEC2_ICR_KEIF KEIF **/
#define OTFDEC2_ICR_KEIF		(1 << 2)
/** OTFDEC2_ICR_XONEIF Execute-only execute-Never Error Interrupt Flag clear **/
#define OTFDEC2_ICR_XONEIF		(1 << 1)
/** OTFDEC2_ICR_SEIF SEIF **/
#define OTFDEC2_ICR_SEIF		(1 << 0)

/**@}*/

/** @defgroup otfdec2_ier IER OTFDEC interrupt enable register
@{*/

/** OTFDEC2_IER_KEIE KEIE **/
#define OTFDEC2_IER_KEIE		(1 << 2)
/** OTFDEC2_IER_XONEIE XONEIE **/
#define OTFDEC2_IER_XONEIE		(1 << 1)
/** OTFDEC2_IER_SEIE Security Error Interrupt Enable **/
#define OTFDEC2_IER_SEIE		(1 << 0)

/**@}*/

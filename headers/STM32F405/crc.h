#pragma once 

/* --- CRC: Cryptographic processor --------------------------------- */

/** @defgroup crc_registers Cryptographic processor Register
@{*/

/** CRC_DR Data register **/
#define CRC_DR			MMIO32(CRC_BASE + 0x00)
/** CRC_IDR Independent Data register **/
#define CRC_IDR			MMIO32(CRC_BASE + 0x04)
/** CRC_CR Control register **/
#define CRC_CR			MMIO32(CRC_BASE + 0x08)

/**@}*/


/** @defgroup crc_dr DR Data register
@{*/


#define CRC_DR_DR_SHIFT		0
#define CRC_DR_DR_MASK		0xffffffff
/** @defgroup crc_dr_dr DR Data Register
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_idr IDR Independent Data register
@{*/


#define CRC_IDR_IDR_SHIFT		0
#define CRC_IDR_IDR_MASK		0xff
/** @defgroup crc_idr_idr IDR Independent Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_cr CR Control register
@{*/

/** CRC_CR_CR Control regidter **/
#define CRC_CR_CR		(1 << 0)

/**@}*/

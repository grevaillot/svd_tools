#pragma once 

/* --- CRC: cyclic redundancy check calculation unit ---------------- */

/** @defgroup crc_registers cyclic redundancy check calculation
      unit Register
@{*/

/** CRC_DR Data register **/
#define CRC_DR			MMIO32(CRC_BASE + 0x00)
/** CRC_IDR Independent data register **/
#define CRC_IDR			MMIO32(CRC_BASE + 0x04)
/** CRC_CR Control register **/
#define CRC_CR			MMIO32(CRC_BASE + 0x08)

/**@}*/


/** @defgroup crc_dr DR Data register
@{*/


#define CRC_DR_DR_SHIFT		0
#define CRC_DR_DR_MASK		0xffffffff
/** @defgroup crc_dr_dr DR Data register bits
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_idr IDR Independent data register
@{*/


#define CRC_IDR_IDR_SHIFT		0
#define CRC_IDR_IDR_MASK		0xff
/** @defgroup crc_idr_idr IDR General-purpose 8-bit data register bits
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_cr CR Control register
@{*/

/** CRC_CR_RESET reset bit **/
#define CRC_CR_RESET		(1 << 0)

/**@}*/

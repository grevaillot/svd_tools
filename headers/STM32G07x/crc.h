#pragma once 

/* --- CRC: Cyclic redundancy check calculation unit ---------------- */

/** @defgroup crc_registers Cyclic redundancy check calculation
      unit Register
@{*/

/** CRC_DR Data register **/
#define CRC_DR			MMIO32(CRC_BASE + 0x00)
/** CRC_IDR Independent data register **/
#define CRC_IDR			MMIO32(CRC_BASE + 0x04)
/** CRC_CR Control register **/
#define CRC_CR			MMIO32(CRC_BASE + 0x08)
/** CRC_INIT Initial CRC value **/
#define CRC_INIT			MMIO32(CRC_BASE + 0x10)
/** CRC_POL polynomial **/
#define CRC_POL			MMIO32(CRC_BASE + 0x14)

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
#define CRC_IDR_IDR_MASK		0xffffffff
/** @defgroup crc_idr_idr IDR General-purpose 32-bit data register bits
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_cr CR Control register
@{*/

/** CRC_CR_REV_OUT Reverse output data **/
#define CRC_CR_REV_OUT		(1 << 7)

#define CRC_CR_REV_IN_SHIFT		5
#define CRC_CR_REV_IN_MASK		0x03
/** @defgroup crc_cr_rev_in REVIN Reverse input data
@{*/
/**@}*/


#define CRC_CR_POLYSIZE_SHIFT		3
#define CRC_CR_POLYSIZE_MASK		0x03
/** @defgroup crc_cr_polysize POLYSIZE Polynomial size
@{*/
/**@}*/

/** CRC_CR_RESET RESET bit **/
#define CRC_CR_RESET		(1 << 0)

/**@}*/

/** @defgroup crc_init INIT Initial CRC value
@{*/


#define CRC_INIT_CRC_INIT_SHIFT		0
#define CRC_INIT_CRC_INIT_MASK		0xffffffff
/** @defgroup crc_init_crc_init CRCINIT Programmable initial CRC value
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_pol POL polynomial
@{*/


#define CRC_POL_POL_SHIFT		0
#define CRC_POL_POL_MASK		0xffffffff
/** @defgroup crc_pol_pol POL Programmable polynomial
@{*/
/**@}*/


/**@}*/
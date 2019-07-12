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
/** CRC_INIT Initial CRC value **/
#define CRC_INIT			MMIO32(CRC_BASE + 0x0c)
/** CRC_POL CRC polynomial **/
#define CRC_POL			MMIO32(CRC_BASE + 0x10)

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

/** @defgroup crc_init INIT Initial CRC value
@{*/


#define CRC_INIT_CRC_INIT_SHIFT		0
#define CRC_INIT_CRC_INIT_MASK		0xffffffff
/** @defgroup crc_init_crc_init CRCINIT Programmable initial CRC value
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_pol POL CRC polynomial
@{*/


#define CRC_POL_POL_SHIFT		0
#define CRC_POL_POL_MASK		0xffffffff
/** @defgroup crc_pol_pol POL Programmable polynomial
@{*/
/**@}*/


/**@}*/

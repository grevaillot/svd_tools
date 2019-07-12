#pragma once 

/* --- CRC: CRC calculation unit ------------------------------------ */

/** @defgroup crc_registers CRC calculation unit Register
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


#define CRC_DR_Data_register_SHIFT		0
#define CRC_DR_Data_register_MASK		0xffffffff
/** @defgroup crc_dr_data_register Dataregister Data Register
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_idr IDR Independent data register
@{*/


#define CRC_IDR_Independent_data_register_SHIFT		0
#define CRC_IDR_Independent_data_register_MASK		0x7f
/** @defgroup crc_idr_independent_data_register Independentdataregister Independent data register
@{*/
/**@}*/


/**@}*/

/** @defgroup crc_cr CR Control register
@{*/

/** CRC_CR_RESET RESET **/
#define CRC_CR_RESET		(1 << 0)

/**@}*/

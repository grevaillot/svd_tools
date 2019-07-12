#pragma once 

/* --- CHIPID: Chip Identifier -------------------------------------- */

/** @defgroup chipid_registers Chip Identifier Register
@{*/

/** CHIPID_CHIPID_CIDR Chip ID Register **/
#define CHIPID_CHIPID_CIDR			MMIO32(CHIPID_BASE + 0x00)
/** CHIPID_CHIPID_EXID Chip ID Extension Register **/
#define CHIPID_CHIPID_EXID			MMIO32(CHIPID_BASE + 0x04)

/**@}*/


/** @defgroup chipid_chipid_cidr CHIPIDCIDR Chip ID Register
@{*/

/** CHIPID_CHIPID_CIDR_EXT Extension Flag **/
#define CHIPID_CHIPID_CIDR_EXT		(1 << 31)

#define CHIPID_CHIPID_CIDR_NVPTYP_SHIFT		28
#define CHIPID_CHIPID_CIDR_NVPTYP_MASK		0x07
/** @defgroup chipid_chipid_cidr_nvptyp NVPTYP Nonvolatile Program Memory Type
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_ARCH_SHIFT		20
#define CHIPID_CHIPID_CIDR_ARCH_MASK		0xff
/** @defgroup chipid_chipid_cidr_arch ARCH Architecture Identifier
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_SRAMSIZ_SHIFT		16
#define CHIPID_CHIPID_CIDR_SRAMSIZ_MASK		0x0f
/** @defgroup chipid_chipid_cidr_sramsiz SRAMSIZ Internal SRAM Size
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_NVPSIZ2_SHIFT		12
#define CHIPID_CHIPID_CIDR_NVPSIZ2_MASK		0x0f
/** @defgroup chipid_chipid_cidr_nvpsiz2 NVPSIZ2 Second Nonvolatile Program Memory Size
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_NVPSIZ_SHIFT		8
#define CHIPID_CHIPID_CIDR_NVPSIZ_MASK		0x0f
/** @defgroup chipid_chipid_cidr_nvpsiz NVPSIZ Nonvolatile Program Memory Size
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_EPROC_SHIFT		5
#define CHIPID_CHIPID_CIDR_EPROC_MASK		0x07
/** @defgroup chipid_chipid_cidr_eproc EPROC Embedded Processor
@{*/
/**@}*/


#define CHIPID_CHIPID_CIDR_VERSION_SHIFT		0
#define CHIPID_CHIPID_CIDR_VERSION_MASK		0x1f
/** @defgroup chipid_chipid_cidr_version VERSION Version of the Device
@{*/
/**@}*/


/**@}*/

/** @defgroup chipid_chipid_exid CHIPIDEXID Chip ID Extension Register
@{*/


#define CHIPID_CHIPID_EXID_EXID_SHIFT		0
#define CHIPID_CHIPID_EXID_EXID_MASK		0xffffffff
/** @defgroup chipid_chipid_exid_exid EXID Chip ID Extension
@{*/
/**@}*/


/**@}*/

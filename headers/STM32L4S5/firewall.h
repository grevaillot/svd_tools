#pragma once 

/* --- FIREWALL: Firewall ------------------------------------------- */

/** @defgroup firewall_registers Firewall Register
@{*/

/** FIREWALL_CSSA Code segment start address **/
#define FIREWALL_CSSA			MMIO32(FIREWALL_BASE + 0x00)
/** FIREWALL_CSL Code segment length **/
#define FIREWALL_CSL			MMIO32(FIREWALL_BASE + 0x04)
/** FIREWALL_NVDSSA Non-volatile data segment start address **/
#define FIREWALL_NVDSSA			MMIO32(FIREWALL_BASE + 0x08)
/** FIREWALL_NVDSL Non-volatile data segment length **/
#define FIREWALL_NVDSL			MMIO32(FIREWALL_BASE + 0x0c)
/** FIREWALL_VDSSA Volatile data segment start address **/
#define FIREWALL_VDSSA			MMIO32(FIREWALL_BASE + 0x10)
/** FIREWALL_VDSL Volatile data segment length **/
#define FIREWALL_VDSL			MMIO32(FIREWALL_BASE + 0x14)
/** FIREWALL_CR Configuration register **/
#define FIREWALL_CR			MMIO32(FIREWALL_BASE + 0x20)

/**@}*/


/** @defgroup firewall_cssa CSSA Code segment start address
@{*/


#define FIREWALL_CSSA_ADD_SHIFT		8
#define FIREWALL_CSSA_ADD_MASK		0xffff
/** @defgroup firewall_cssa_add ADD code segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_csl CSL Code segment length
@{*/


#define FIREWALL_CSL_LENG_SHIFT		8
#define FIREWALL_CSL_LENG_MASK		0x3fff
/** @defgroup firewall_csl_leng LENG code segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_nvdssa NVDSSA Non-volatile data segment start address
@{*/


#define FIREWALL_NVDSSA_ADD_SHIFT		8
#define FIREWALL_NVDSSA_ADD_MASK		0xffff
/** @defgroup firewall_nvdssa_add ADD Non-volatile data segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_nvdsl NVDSL Non-volatile data segment length
@{*/


#define FIREWALL_NVDSL_LENG_SHIFT		8
#define FIREWALL_NVDSL_LENG_MASK		0x3fff
/** @defgroup firewall_nvdsl_leng LENG Non-volatile data segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_vdssa VDSSA Volatile data segment start address
@{*/


#define FIREWALL_VDSSA_ADD_SHIFT		6
#define FIREWALL_VDSSA_ADD_MASK		0x3ff
/** @defgroup firewall_vdssa_add ADD Volatile data segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_vdsl VDSL Volatile data segment length
@{*/


#define FIREWALL_VDSL_LENG_SHIFT		6
#define FIREWALL_VDSL_LENG_MASK		0x3ff
/** @defgroup firewall_vdsl_leng LENG Non-volatile data segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_cr CR Configuration register
@{*/

/** FIREWALL_CR_VDE Volatile data execution **/
#define FIREWALL_CR_VDE		(1 << 2)
/** FIREWALL_CR_VDS Volatile data shared **/
#define FIREWALL_CR_VDS		(1 << 1)
/** FIREWALL_CR_FPA Firewall pre alarm **/
#define FIREWALL_CR_FPA		(1 << 0)

/**@}*/

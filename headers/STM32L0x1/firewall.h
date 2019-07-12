#pragma once 

/* --- Firewall: Firewall ------------------------------------------- */

/** @defgroup firewall_registers Firewall Register
@{*/

/** Firewall_FIREWALL_CSSA Code segment start address **/
#define Firewall_FIREWALL_CSSA			MMIO32(Firewall_BASE + 0x00)
/** Firewall_FIREWALL_CSL Code segment length **/
#define Firewall_FIREWALL_CSL			MMIO32(Firewall_BASE + 0x04)
/** Firewall_FIREWALL_NVDSSA Non-volatile data segment start address **/
#define Firewall_FIREWALL_NVDSSA			MMIO32(Firewall_BASE + 0x08)
/** Firewall_FIREWALL_NVDSL Non-volatile data segment length **/
#define Firewall_FIREWALL_NVDSL			MMIO32(Firewall_BASE + 0x0c)
/** Firewall_FIREWALL_VDSSA Volatile data segment start address **/
#define Firewall_FIREWALL_VDSSA			MMIO32(Firewall_BASE + 0x10)
/** Firewall_FIREWALL_VDSL Volatile data segment length **/
#define Firewall_FIREWALL_VDSL			MMIO32(Firewall_BASE + 0x14)
/** Firewall_FIREWALL_CR Configuration register **/
#define Firewall_FIREWALL_CR			MMIO32(Firewall_BASE + 0x20)

/**@}*/


/** @defgroup firewall_firewall_cssa FIREWALLCSSA Code segment start address
@{*/


#define Firewall_FIREWALL_CSSA_ADD_SHIFT		8
#define Firewall_FIREWALL_CSSA_ADD_MASK		0xffff
/** @defgroup firewall_firewall_cssa_add ADD code segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_csl FIREWALLCSL Code segment length
@{*/


#define Firewall_FIREWALL_CSL_LENG_SHIFT		8
#define Firewall_FIREWALL_CSL_LENG_MASK		0x3fff
/** @defgroup firewall_firewall_csl_leng LENG code segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_nvdssa FIREWALLNVDSSA Non-volatile data segment start address
@{*/


#define Firewall_FIREWALL_NVDSSA_ADD_SHIFT		8
#define Firewall_FIREWALL_NVDSSA_ADD_MASK		0xffff
/** @defgroup firewall_firewall_nvdssa_add ADD Non-volatile data segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_nvdsl FIREWALLNVDSL Non-volatile data segment length
@{*/


#define Firewall_FIREWALL_NVDSL_LENG_SHIFT		8
#define Firewall_FIREWALL_NVDSL_LENG_MASK		0x3fff
/** @defgroup firewall_firewall_nvdsl_leng LENG Non-volatile data segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_vdssa FIREWALLVDSSA Volatile data segment start address
@{*/


#define Firewall_FIREWALL_VDSSA_ADD_SHIFT		6
#define Firewall_FIREWALL_VDSSA_ADD_MASK		0x3ff
/** @defgroup firewall_firewall_vdssa_add ADD Volatile data segment start address
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_vdsl FIREWALLVDSL Volatile data segment length
@{*/


#define Firewall_FIREWALL_VDSL_LENG_SHIFT		6
#define Firewall_FIREWALL_VDSL_LENG_MASK		0x3ff
/** @defgroup firewall_firewall_vdsl_leng LENG Non-volatile data segment length
@{*/
/**@}*/


/**@}*/

/** @defgroup firewall_firewall_cr FIREWALLCR Configuration register
@{*/

/** Firewall_FIREWALL_CR_VDE Volatile data execution **/
#define Firewall_FIREWALL_CR_VDE		(1 << 2)
/** Firewall_FIREWALL_CR_VDS Volatile data shared **/
#define Firewall_FIREWALL_CR_VDS		(1 << 1)
/** Firewall_FIREWALL_CR_FPA Firewall pre alarm **/
#define Firewall_FIREWALL_CR_FPA		(1 << 0)

/**@}*/

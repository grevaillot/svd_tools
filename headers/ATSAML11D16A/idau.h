#pragma once 

/* --- IDAU: Implementation Defined Attribution Unit ---------------- */

/** @defgroup idau_registers Implementation Defined Attribution Unit Register
@{*/

/** IDAU_SECCTRL SECCTRL **/
#define IDAU_SECCTRL			MMIO32(IDAU_BASE + 0x01)
/** IDAU_SCFGB SCFGB **/
#define IDAU_SCFGB			MMIO32(IDAU_BASE + 0x04)
/** IDAU_SCFGA SCFGA **/
#define IDAU_SCFGA			MMIO32(IDAU_BASE + 0x08)
/** IDAU_SCFGR SCFGR **/
#define IDAU_SCFGR			MMIO32(IDAU_BASE + 0x0c)

/**@}*/


/** @defgroup idau_secctrl SECCTRL SECCTRL
@{*/

/** IDAU_SECCTRL_RXN CPU RAM is eXecute Never **/
#define IDAU_SECCTRL_RXN		(1 << 2)

/**@}*/

/** @defgroup idau_scfgb SCFGB SCFGB
@{*/


#define IDAU_SCFGB_BOOTPROT_SHIFT		16
#define IDAU_SCFGB_BOOTPROT_MASK		0xff
/** @defgroup idau_scfgb_bootprot BOOTPROT Boot Protection
@{*/
/**@}*/


#define IDAU_SCFGB_BNSC_SHIFT		8
#define IDAU_SCFGB_BNSC_MASK		0x3f
/** @defgroup idau_scfgb_bnsc BNSC Boot Secure, Non-secure Callable
@{*/
/**@}*/


#define IDAU_SCFGB_BS_SHIFT		0
#define IDAU_SCFGB_BS_MASK		0xff
/** @defgroup idau_scfgb_bs BS Boot Secure
@{*/
/**@}*/


/**@}*/

/** @defgroup idau_scfga SCFGA SCFGA
@{*/


#define IDAU_SCFGA_DS_SHIFT		16
#define IDAU_SCFGA_DS_MASK		0x0f
/** @defgroup idau_scfga_ds DS DATAFLASH Data Secure
@{*/
/**@}*/


#define IDAU_SCFGA_ANSC_SHIFT		8
#define IDAU_SCFGA_ANSC_MASK		0x3f
/** @defgroup idau_scfga_ansc ANSC Application Secure, Non-secure Callable
@{*/
/**@}*/


#define IDAU_SCFGA_AS_SHIFT		0
#define IDAU_SCFGA_AS_MASK		0xff
/** @defgroup idau_scfga_as AS Application Secure
@{*/
/**@}*/


/**@}*/

/** @defgroup idau_scfgr SCFGR SCFGR
@{*/


#define IDAU_SCFGR_RS_SHIFT		0
#define IDAU_SCFGR_RS_MASK		0x7f
/** @defgroup idau_scfgr_rs RS RAM Secure
@{*/
/**@}*/


/**@}*/

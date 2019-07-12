#pragma once 

/* --- EFC: Embedded Flash Controller ------------------------------- */

/** @defgroup efc_registers Embedded Flash Controller Register
@{*/

/** EFC_EEFC_FMR EEFC Flash Mode Register **/
#define EFC_EEFC_FMR			MMIO32(EFC_BASE + 0x00)
/** EFC_EEFC_FCR EEFC Flash Command Register **/
#define EFC_EEFC_FCR			MMIO32(EFC_BASE + 0x04)
/** EFC_EEFC_FSR EEFC Flash Status Register **/
#define EFC_EEFC_FSR			MMIO32(EFC_BASE + 0x08)
/** EFC_EEFC_FRR EEFC Flash Result Register **/
#define EFC_EEFC_FRR			MMIO32(EFC_BASE + 0x0c)
/** EFC_EEFC_WPMR Write Protection Mode Register **/
#define EFC_EEFC_WPMR			MMIO32(EFC_BASE + 0xe4)

/**@}*/


/** @defgroup efc_eefc_fmr EEFCFMR EEFC Flash Mode Register
@{*/

/** EFC_EEFC_FMR_CLOE Code Loop Optimization Enable **/
#define EFC_EEFC_FMR_CLOE		(1 << 26)
/** EFC_EEFC_FMR_SCOD Sequential Code Optimization Disable **/
#define EFC_EEFC_FMR_SCOD		(1 << 16)

#define EFC_EEFC_FMR_FWS_SHIFT		8
#define EFC_EEFC_FMR_FWS_MASK		0x0f
/** @defgroup efc_eefc_fmr_fws FWS Flash Wait State
@{*/
/**@}*/

/** EFC_EEFC_FMR_FRDY Flash Ready Interrupt Enable **/
#define EFC_EEFC_FMR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc_eefc_fcr EEFCFCR EEFC Flash Command Register
@{*/


#define EFC_EEFC_FCR_FKEY_SHIFT		24
#define EFC_EEFC_FCR_FKEY_MASK		0xff
/** @defgroup efc_eefc_fcr_fkey FKEY Flash Writing Protection Key
@{*/
/**@}*/


#define EFC_EEFC_FCR_FARG_SHIFT		8
#define EFC_EEFC_FCR_FARG_MASK		0xffff
/** @defgroup efc_eefc_fcr_farg FARG Flash Command Argument
@{*/
/**@}*/


#define EFC_EEFC_FCR_FCMD_SHIFT		0
#define EFC_EEFC_FCR_FCMD_MASK		0xff
/** @defgroup efc_eefc_fcr_fcmd FCMD Flash Command
@{*/
/**@}*/


/**@}*/

/** @defgroup efc_eefc_fsr EEFCFSR EEFC Flash Status Register
@{*/

/** EFC_EEFC_FSR_MECCEMSB Multiple ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) **/
#define EFC_EEFC_FSR_MECCEMSB		(1 << 19)
/** EFC_EEFC_FSR_UECCEMSB Unique ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) **/
#define EFC_EEFC_FSR_UECCEMSB		(1 << 18)
/** EFC_EEFC_FSR_MECCELSB Multiple ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) **/
#define EFC_EEFC_FSR_MECCELSB		(1 << 17)
/** EFC_EEFC_FSR_UECCELSB Unique ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) **/
#define EFC_EEFC_FSR_UECCELSB		(1 << 16)
/** EFC_EEFC_FSR_FLERR Flash Error Status (cleared when a programming operation starts) **/
#define EFC_EEFC_FSR_FLERR		(1 << 3)
/** EFC_EEFC_FSR_FLOCKE Flash Lock Error Status (cleared on read) **/
#define EFC_EEFC_FSR_FLOCKE		(1 << 2)
/** EFC_EEFC_FSR_FCMDE Flash Command Error Status (cleared on read or by writing EEFC_FCR) **/
#define EFC_EEFC_FSR_FCMDE		(1 << 1)
/** EFC_EEFC_FSR_FRDY Flash Ready Status (cleared when Flash is busy) **/
#define EFC_EEFC_FSR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc_eefc_frr EEFCFRR EEFC Flash Result Register
@{*/


#define EFC_EEFC_FRR_FVALUE_SHIFT		0
#define EFC_EEFC_FRR_FVALUE_MASK		0xffffffff
/** @defgroup efc_eefc_frr_fvalue FVALUE Flash Result Value
@{*/
/**@}*/


/**@}*/

/** @defgroup efc_eefc_wpmr EEFCWPMR Write Protection Mode Register
@{*/


#define EFC_EEFC_WPMR_WPKEY_SHIFT		8
#define EFC_EEFC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup efc_eefc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** EFC_EEFC_WPMR_WPEN Write Protection Enable **/
#define EFC_EEFC_WPMR_WPEN		(1 << 0)

/**@}*/

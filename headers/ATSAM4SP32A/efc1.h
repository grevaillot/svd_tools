#pragma once 

/* --- EFC1: Embedded Flash Controller 1 ---------------------------- */

/** @defgroup efc1_registers Embedded Flash Controller 1 Register
@{*/

/** EFC1_FMR EEFC Flash Mode Register **/
#define EFC1_FMR			MMIO32(EFC1_BASE + 0x00)
/** EFC1_FCR EEFC Flash Command Register **/
#define EFC1_FCR			MMIO32(EFC1_BASE + 0x04)
/** EFC1_FSR EEFC Flash Status Register **/
#define EFC1_FSR			MMIO32(EFC1_BASE + 0x08)
/** EFC1_FRR EEFC Flash Result Register **/
#define EFC1_FRR			MMIO32(EFC1_BASE + 0x0c)

/**@}*/


/** @defgroup efc1_fmr FMR EEFC Flash Mode Register
@{*/

/** EFC1_FMR_CLOE Code Loops Optimization Enable **/
#define EFC1_FMR_CLOE		(1 << 26)
/** EFC1_FMR_FAM Flash Access Mode **/
#define EFC1_FMR_FAM		(1 << 24)
/** EFC1_FMR_SCOD Sequential Code Optimization Disable **/
#define EFC1_FMR_SCOD		(1 << 16)

#define EFC1_FMR_FWS_SHIFT		8
#define EFC1_FMR_FWS_MASK		0x0f
/** @defgroup efc1_fmr_fws FWS Flash Wait State
@{*/
/**@}*/

/** EFC1_FMR_FRDY Ready Interrupt Enable **/
#define EFC1_FMR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc1_fcr FCR EEFC Flash Command Register
@{*/


#define EFC1_FCR_FKEY_SHIFT		24
#define EFC1_FCR_FKEY_MASK		0xff
/** @defgroup efc1_fcr_fkey FKEY Flash Writing Protection Key
@{*/
/**@}*/


#define EFC1_FCR_FARG_SHIFT		8
#define EFC1_FCR_FARG_MASK		0xffff
/** @defgroup efc1_fcr_farg FARG Flash Command Argument
@{*/
/**@}*/


#define EFC1_FCR_FCMD_SHIFT		0
#define EFC1_FCR_FCMD_MASK		0xff
/** @defgroup efc1_fcr_fcmd FCMD Flash Command
@{*/
/**@}*/


/**@}*/

/** @defgroup efc1_fsr FSR EEFC Flash Status Register
@{*/

/** EFC1_FSR_FLERR Flash Error Status **/
#define EFC1_FSR_FLERR		(1 << 3)
/** EFC1_FSR_FLOCKE Flash Lock Error Status **/
#define EFC1_FSR_FLOCKE		(1 << 2)
/** EFC1_FSR_FCMDE Flash Command Error Status **/
#define EFC1_FSR_FCMDE		(1 << 1)
/** EFC1_FSR_FRDY Flash Ready Status **/
#define EFC1_FSR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc1_frr FRR EEFC Flash Result Register
@{*/


#define EFC1_FRR_FVALUE_SHIFT		0
#define EFC1_FRR_FVALUE_MASK		0xffffffff
/** @defgroup efc1_frr_fvalue FVALUE Flash Result Value
@{*/
/**@}*/


/**@}*/

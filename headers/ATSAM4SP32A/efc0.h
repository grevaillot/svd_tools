#pragma once 

/* --- EFC0: Embedded Flash Controller 0 ---------------------------- */

/** @defgroup efc0_registers Embedded Flash Controller 0 Register
@{*/

/** EFC0_FMR EEFC Flash Mode Register **/
#define EFC0_FMR			MMIO32(EFC0_BASE + 0x00)
/** EFC0_FCR EEFC Flash Command Register **/
#define EFC0_FCR			MMIO32(EFC0_BASE + 0x04)
/** EFC0_FSR EEFC Flash Status Register **/
#define EFC0_FSR			MMIO32(EFC0_BASE + 0x08)
/** EFC0_FRR EEFC Flash Result Register **/
#define EFC0_FRR			MMIO32(EFC0_BASE + 0x0c)

/**@}*/


/** @defgroup efc0_fmr FMR EEFC Flash Mode Register
@{*/

/** EFC0_FMR_CLOE Code Loops Optimization Enable **/
#define EFC0_FMR_CLOE		(1 << 26)
/** EFC0_FMR_FAM Flash Access Mode **/
#define EFC0_FMR_FAM		(1 << 24)
/** EFC0_FMR_SCOD Sequential Code Optimization Disable **/
#define EFC0_FMR_SCOD		(1 << 16)

#define EFC0_FMR_FWS_SHIFT		8
#define EFC0_FMR_FWS_MASK		0x0f
/** @defgroup efc0_fmr_fws FWS Flash Wait State
@{*/
/**@}*/

/** EFC0_FMR_FRDY Ready Interrupt Enable **/
#define EFC0_FMR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc0_fcr FCR EEFC Flash Command Register
@{*/


#define EFC0_FCR_FKEY_SHIFT		24
#define EFC0_FCR_FKEY_MASK		0xff
/** @defgroup efc0_fcr_fkey FKEY Flash Writing Protection Key
@{*/
/**@}*/


#define EFC0_FCR_FARG_SHIFT		8
#define EFC0_FCR_FARG_MASK		0xffff
/** @defgroup efc0_fcr_farg FARG Flash Command Argument
@{*/
/**@}*/


#define EFC0_FCR_FCMD_SHIFT		0
#define EFC0_FCR_FCMD_MASK		0xff
/** @defgroup efc0_fcr_fcmd FCMD Flash Command
@{*/
/**@}*/


/**@}*/

/** @defgroup efc0_fsr FSR EEFC Flash Status Register
@{*/

/** EFC0_FSR_FLERR Flash Error Status **/
#define EFC0_FSR_FLERR		(1 << 3)
/** EFC0_FSR_FLOCKE Flash Lock Error Status **/
#define EFC0_FSR_FLOCKE		(1 << 2)
/** EFC0_FSR_FCMDE Flash Command Error Status **/
#define EFC0_FSR_FCMDE		(1 << 1)
/** EFC0_FSR_FRDY Flash Ready Status **/
#define EFC0_FSR_FRDY		(1 << 0)

/**@}*/

/** @defgroup efc0_frr FRR EEFC Flash Result Register
@{*/


#define EFC0_FRR_FVALUE_SHIFT		0
#define EFC0_FRR_FVALUE_MASK		0xffffffff
/** @defgroup efc0_frr_fvalue FVALUE Flash Result Value
@{*/
/**@}*/


/**@}*/

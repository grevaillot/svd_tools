#pragma once 

/* --- CoreDebug: Core Debug Register ------------------------------- */

/** @defgroup coredebug_registers Core Debug Register Register
@{*/

/** CoreDebug_DHCSR Debug Halting Control and Status Register **/
#define CoreDebug_DHCSR			MMIO32(CoreDebug_BASE + 0x00)
/** CoreDebug_DCRSR Debug Core Register Selector Register **/
#define CoreDebug_DCRSR			MMIO32(CoreDebug_BASE + 0x04)
/** CoreDebug_DCRDR Debug Core Register Data Register **/
#define CoreDebug_DCRDR			MMIO32(CoreDebug_BASE + 0x08)
/** CoreDebug_DEMCR Debug Exception and Monitor Control Register **/
#define CoreDebug_DEMCR			MMIO32(CoreDebug_BASE + 0x0c)

/**@}*/


/** @defgroup coredebug_dhcsr DHCSR Debug Halting Control and Status Register
@{*/

/** CoreDebug_DHCSR_S_RESET_ST  **/
#define CoreDebug_DHCSR_S_RESET_ST		(1 << 25)
/** CoreDebug_DHCSR_S_RETIRE_ST  **/
#define CoreDebug_DHCSR_S_RETIRE_ST		(1 << 24)
/** CoreDebug_DHCSR_S_LOCKUP  **/
#define CoreDebug_DHCSR_S_LOCKUP		(1 << 19)
/** CoreDebug_DHCSR_S_SLEEP  **/
#define CoreDebug_DHCSR_S_SLEEP		(1 << 18)
/** CoreDebug_DHCSR_S_HALT  **/
#define CoreDebug_DHCSR_S_HALT		(1 << 17)
/** CoreDebug_DHCSR_S_REGRDY  **/
#define CoreDebug_DHCSR_S_REGRDY		(1 << 16)

#define CoreDebug_DHCSR_DBGKEY_SHIFT		16
#define CoreDebug_DHCSR_DBGKEY_MASK		0xffff
/** @defgroup coredebug_dhcsr_dbgkey DBGKEY 
@{*/
/**@}*/

/** CoreDebug_DHCSR_C_SNAPSTALL  **/
#define CoreDebug_DHCSR_C_SNAPSTALL		(1 << 5)
/** CoreDebug_DHCSR_C_MASKINTS  **/
#define CoreDebug_DHCSR_C_MASKINTS		(1 << 3)
/** CoreDebug_DHCSR_C_STEP  **/
#define CoreDebug_DHCSR_C_STEP		(1 << 2)
/** CoreDebug_DHCSR_C_HALT  **/
#define CoreDebug_DHCSR_C_HALT		(1 << 1)
/** CoreDebug_DHCSR_C_DEBUGEN  **/
#define CoreDebug_DHCSR_C_DEBUGEN		(1 << 0)

/**@}*/

/** @defgroup coredebug_dcrsr DCRSR Debug Core Register Selector Register
@{*/

/** CoreDebug_DCRSR_REGWnR  **/
#define CoreDebug_DCRSR_REGWnR		(1 << 16)

#define CoreDebug_DCRSR_REGSEL_SHIFT		0
#define CoreDebug_DCRSR_REGSEL_MASK		0x1f
/** @defgroup coredebug_dcrsr_regsel REGSEL 
@{*/
/**@}*/


/**@}*/

/** @defgroup coredebug_dcrdr DCRDR Debug Core Register Data Register
@{*/


/**@}*/

/** @defgroup coredebug_demcr DEMCR Debug Exception and Monitor Control Register
@{*/

/** CoreDebug_DEMCR_TRCENA  **/
#define CoreDebug_DEMCR_TRCENA		(1 << 24)
/** CoreDebug_DEMCR_MON_REQ  **/
#define CoreDebug_DEMCR_MON_REQ		(1 << 19)
/** CoreDebug_DEMCR_MON_STEP  **/
#define CoreDebug_DEMCR_MON_STEP		(1 << 18)
/** CoreDebug_DEMCR_MON_PEND  **/
#define CoreDebug_DEMCR_MON_PEND		(1 << 17)
/** CoreDebug_DEMCR_MON_EN  **/
#define CoreDebug_DEMCR_MON_EN		(1 << 16)
/** CoreDebug_DEMCR_VC_HARDERR  **/
#define CoreDebug_DEMCR_VC_HARDERR		(1 << 10)
/** CoreDebug_DEMCR_VC_INTERR  **/
#define CoreDebug_DEMCR_VC_INTERR		(1 << 9)
/** CoreDebug_DEMCR_VC_BUSERR  **/
#define CoreDebug_DEMCR_VC_BUSERR		(1 << 8)
/** CoreDebug_DEMCR_VC_STATERR  **/
#define CoreDebug_DEMCR_VC_STATERR		(1 << 7)
/** CoreDebug_DEMCR_VC_CHKERR  **/
#define CoreDebug_DEMCR_VC_CHKERR		(1 << 6)
/** CoreDebug_DEMCR_VC_NOCPERR  **/
#define CoreDebug_DEMCR_VC_NOCPERR		(1 << 5)
/** CoreDebug_DEMCR_VC_MMERR  **/
#define CoreDebug_DEMCR_VC_MMERR		(1 << 4)
/** CoreDebug_DEMCR_VC_CORERESET  **/
#define CoreDebug_DEMCR_VC_CORERESET		(1 << 0)

/**@}*/

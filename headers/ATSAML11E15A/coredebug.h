#pragma once 

/* --- CoreDebug: Debug Control Block ------------------------------- */

/** @defgroup coredebug_registers Debug Control Block Register
@{*/

/** CoreDebug_DHCSR Debug Halting Control and Status Register **/
#define CoreDebug_DHCSR			MMIO32(CoreDebug_BASE + 0x00)
/** CoreDebug_DCRSR Debug Core Register Select Register **/
#define CoreDebug_DCRSR			MMIO32(CoreDebug_BASE + 0x04)
/** CoreDebug_DEMCR Debug Exception and Monitor Control Register **/
#define CoreDebug_DEMCR			MMIO32(CoreDebug_BASE + 0x0c)
/** CoreDebug_DAUTHCTRL Debug Authentication Control Register **/
#define CoreDebug_DAUTHCTRL			MMIO32(CoreDebug_BASE + 0x14)
/** CoreDebug_DSCSR Debug Security Control and Status Register **/
#define CoreDebug_DSCSR			MMIO32(CoreDebug_BASE + 0x18)

/**@}*/


/** @defgroup coredebug_dhcsr DHCSR Debug Halting Control and Status Register
@{*/

/** CoreDebug_DHCSR_S_RESTART_ST Restart sticky status **/
#define CoreDebug_DHCSR_S_RESTART_ST		(1 << 26)
/** CoreDebug_DHCSR_S_RESET_ST Reset sticky status **/
#define CoreDebug_DHCSR_S_RESET_ST		(1 << 25)
/** CoreDebug_DHCSR_S_RETIRE_ST Retire sticky status **/
#define CoreDebug_DHCSR_S_RETIRE_ST		(1 << 24)
/** CoreDebug_DHCSR_S_SDE Secure debug enabled **/
#define CoreDebug_DHCSR_S_SDE		(1 << 20)
/** CoreDebug_DHCSR_S_LOCKUP Lockup status **/
#define CoreDebug_DHCSR_S_LOCKUP		(1 << 19)
/** CoreDebug_DHCSR_S_SLEEP Sleeping status **/
#define CoreDebug_DHCSR_S_SLEEP		(1 << 18)
/** CoreDebug_DHCSR_S_HALT Halted status **/
#define CoreDebug_DHCSR_S_HALT		(1 << 17)
/** CoreDebug_DHCSR_S_REGRDY Register ready status **/
#define CoreDebug_DHCSR_S_REGRDY		(1 << 16)
/** CoreDebug_DHCSR_S_SNAPSTALL Snap stall control **/
#define CoreDebug_DHCSR_S_SNAPSTALL		(1 << 5)
/** CoreDebug_DHCSR_C_MASKINTS Mask PendSV, SysTick and external configurable interrupts **/
#define CoreDebug_DHCSR_C_MASKINTS		(1 << 3)
/** CoreDebug_DHCSR_C_STEP Enable single step **/
#define CoreDebug_DHCSR_C_STEP		(1 << 2)
/** CoreDebug_DHCSR_C_HALT Halt processor **/
#define CoreDebug_DHCSR_C_HALT		(1 << 1)
/** CoreDebug_DHCSR_C_DEBUGEN Enable Halting debug **/
#define CoreDebug_DHCSR_C_DEBUGEN		(1 << 0)

/**@}*/

/** @defgroup coredebug_dcrsr DCRSR Debug Core Register Select Register
@{*/

/** CoreDebug_DCRSR_REGWnR Register write/not-read access **/
#define CoreDebug_DCRSR_REGWnR		(1 << 16)

#define CoreDebug_DCRSR_REGSEL_SHIFT		0
#define CoreDebug_DCRSR_REGSEL_MASK		0x7f
/** @defgroup coredebug_dcrsr_regsel REGSEL Register selector
@{*/
/**@}*/


/**@}*/

/** @defgroup coredebug_demcr DEMCR Debug Exception and Monitor Control Register
@{*/

/** CoreDebug_DEMCR_TRCENA Global DWT and ITM features enable **/
#define CoreDebug_DEMCR_TRCENA		(1 << 24)
/** CoreDebug_DEMCR_SDME Secure DebugMonitor enable **/
#define CoreDebug_DEMCR_SDME		(1 << 20)
/** CoreDebug_DEMCR_MON_REQ DebugMonitor semaphore bit **/
#define CoreDebug_DEMCR_MON_REQ		(1 << 19)
/** CoreDebug_DEMCR_MON_STEP Enable DebugMonitor stepping **/
#define CoreDebug_DEMCR_MON_STEP		(1 << 18)
/** CoreDebug_DEMCR_MON_PEND DebugMonitor pending state **/
#define CoreDebug_DEMCR_MON_PEND		(1 << 17)
/** CoreDebug_DEMCR_MON_EN DebugMonitor enable **/
#define CoreDebug_DEMCR_MON_EN		(1 << 16)
/** CoreDebug_DEMCR_VC_SFERR SecureFault exception Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_SFERR		(1 << 11)
/** CoreDebug_DEMCR_VC_HARDERR HardFault exception Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_HARDERR		(1 << 10)
/** CoreDebug_DEMCR_VC_INTERR Excception entry and return faults Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_INTERR		(1 << 9)
/** CoreDebug_DEMCR_VC_BUSERR BusFault exception Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_BUSERR		(1 << 8)
/** CoreDebug_DEMCR_VC_STATERR UsageFault exception state information error Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_STATERR		(1 << 7)
/** CoreDebug_DEMCR_VC_CHKERR UsageFault exception checking error Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_CHKERR		(1 << 6)
/** CoreDebug_DEMCR_VC_NOCPERR UsageFault exception coprocessor access Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_NOCPERR		(1 << 5)
/** CoreDebug_DEMCR_VC_MMERR MemManage exception Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_MMERR		(1 << 4)
/** CoreDebug_DEMCR_VC_CORERESET Core reset Halting debug vector catch enable **/
#define CoreDebug_DEMCR_VC_CORERESET		(1 << 0)

/**@}*/

/** @defgroup coredebug_dauthctrl DAUTHCTRL Debug Authentication Control Register
@{*/

/** CoreDebug_DAUTHCTRL_INTSPNIDEN Internal Secure non-invasive debug enable **/
#define CoreDebug_DAUTHCTRL_INTSPNIDEN		(1 << 3)
/** CoreDebug_DAUTHCTRL_SPNIDENSEL Secure non-invasive debug enable select **/
#define CoreDebug_DAUTHCTRL_SPNIDENSEL		(1 << 2)
/** CoreDebug_DAUTHCTRL_INTSPIDEN Internal Secure invasive debug enable **/
#define CoreDebug_DAUTHCTRL_INTSPIDEN		(1 << 1)
/** CoreDebug_DAUTHCTRL_SPIDENSEL Secure invasive debug enable select **/
#define CoreDebug_DAUTHCTRL_SPIDENSEL		(1 << 0)

/**@}*/

/** @defgroup coredebug_dscsr DSCSR Debug Security Control and Status Register
@{*/

/** CoreDebug_DSCSR_CDSKEY CDS field write-enable key **/
#define CoreDebug_DSCSR_CDSKEY		(1 << 17)
/** CoreDebug_DSCSR_CDS Current domain Secure **/
#define CoreDebug_DSCSR_CDS		(1 << 16)
/** CoreDebug_DSCSR_SBRSEL Secure Banked register select **/
#define CoreDebug_DSCSR_SBRSEL		(1 << 1)
/** CoreDebug_DSCSR_SBRSELEN Secure Banked register select enable **/
#define CoreDebug_DSCSR_SBRSELEN		(1 << 0)

/**@}*/

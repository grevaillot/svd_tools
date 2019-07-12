#pragma once 

/* --- SCB: System control block ------------------------------------ */

/** @defgroup scb_registers System control block Register
@{*/

/** SCB_CPUID CPUID base register **/
#define SCB_CPUID			MMIO32(SCB_BASE + 0x00)
/** SCB_ICSR Interrupt control and state register **/
#define SCB_ICSR			MMIO32(SCB_BASE + 0x04)
/** SCB_VTOR Vector table offset register **/
#define SCB_VTOR			MMIO32(SCB_BASE + 0x08)
/** SCB_AIRCR Application interrupt and reset control register **/
#define SCB_AIRCR			MMIO32(SCB_BASE + 0x0c)
/** SCB_SCR System control register **/
#define SCB_SCR			MMIO32(SCB_BASE + 0x10)
/** SCB_CCR Configuration and control register **/
#define SCB_CCR			MMIO32(SCB_BASE + 0x14)
/** SCB_SHPR1 System handler priority registers **/
#define SCB_SHPR1			MMIO32(SCB_BASE + 0x18)
/** SCB_SHPR2 System handler priority registers **/
#define SCB_SHPR2			MMIO32(SCB_BASE + 0x1c)
/** SCB_SHPR3 System handler priority registers **/
#define SCB_SHPR3			MMIO32(SCB_BASE + 0x20)
/** SCB_SHCRS System handler control and state register **/
#define SCB_SHCRS			MMIO32(SCB_BASE + 0x24)
/** SCB_CFSR_UFSR_BFSR_MMFSR Configurable fault status register **/
#define SCB_CFSR_UFSR_BFSR_MMFSR			MMIO32(SCB_BASE + 0x28)
/** SCB_HFSR Hard fault status register **/
#define SCB_HFSR			MMIO32(SCB_BASE + 0x2c)
/** SCB_MMFAR Memory management fault address register **/
#define SCB_MMFAR			MMIO32(SCB_BASE + 0x34)
/** SCB_BFAR Bus fault address register **/
#define SCB_BFAR			MMIO32(SCB_BASE + 0x38)

/**@}*/


/** @defgroup scb_cpuid CPUID CPUID base register
@{*/


#define SCB_CPUID_Implementer_SHIFT		24
#define SCB_CPUID_Implementer_MASK		0xff
/** @defgroup scb_cpuid_implementer Implementer Implementer code
@{*/
/**@}*/


#define SCB_CPUID_Variant_SHIFT		20
#define SCB_CPUID_Variant_MASK		0x0f
/** @defgroup scb_cpuid_variant Variant Variant number
@{*/
/**@}*/


#define SCB_CPUID_Constant_SHIFT		16
#define SCB_CPUID_Constant_MASK		0x0f
/** @defgroup scb_cpuid_constant Constant Reads as 0xF
@{*/
/**@}*/


#define SCB_CPUID_PartNo_SHIFT		4
#define SCB_CPUID_PartNo_MASK		0xfff
/** @defgroup scb_cpuid_partno PartNo Part number of the processor
@{*/
/**@}*/


#define SCB_CPUID_Revision_SHIFT		0
#define SCB_CPUID_Revision_MASK		0x0f
/** @defgroup scb_cpuid_revision Revision Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_icsr ICSR Interrupt control and state register
@{*/

/** SCB_ICSR_NMIPENDSET NMI set-pending bit. **/
#define SCB_ICSR_NMIPENDSET		(1 << 31)
/** SCB_ICSR_PENDSVSET PendSV set-pending bit **/
#define SCB_ICSR_PENDSVSET		(1 << 28)
/** SCB_ICSR_PENDSVCLR PendSV clear-pending bit **/
#define SCB_ICSR_PENDSVCLR		(1 << 27)
/** SCB_ICSR_PENDSTSET SysTick exception set-pending bit **/
#define SCB_ICSR_PENDSTSET		(1 << 26)
/** SCB_ICSR_PENDSTCLR SysTick exception clear-pending bit **/
#define SCB_ICSR_PENDSTCLR		(1 << 25)
/** SCB_ICSR_ISRPENDING Interrupt pending flag **/
#define SCB_ICSR_ISRPENDING		(1 << 22)

#define SCB_ICSR_VECTPENDING_SHIFT		12
#define SCB_ICSR_VECTPENDING_MASK		0x7f
/** @defgroup scb_icsr_vectpending VECTPENDING Pending vector
@{*/
/**@}*/

/** SCB_ICSR_RETTOBASE Return to base level **/
#define SCB_ICSR_RETTOBASE		(1 << 11)

#define SCB_ICSR_VECTACTIVE_SHIFT		0
#define SCB_ICSR_VECTACTIVE_MASK		0x1ff
/** @defgroup scb_icsr_vectactive VECTACTIVE Active vector
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_vtor VTOR Vector table offset register
@{*/


#define SCB_VTOR_TBLOFF_SHIFT		9
#define SCB_VTOR_TBLOFF_MASK		0x1fffff
/** @defgroup scb_vtor_tbloff TBLOFF Vector table base offset field
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_aircr AIRCR Application interrupt and reset control register
@{*/


#define SCB_AIRCR_VECTKEYSTAT_SHIFT		16
#define SCB_AIRCR_VECTKEYSTAT_MASK		0xffff
/** @defgroup scb_aircr_vectkeystat VECTKEYSTAT Register key
@{*/
/**@}*/

/** SCB_AIRCR_ENDIANESS ENDIANESS **/
#define SCB_AIRCR_ENDIANESS		(1 << 15)

#define SCB_AIRCR_PRIGROUP_SHIFT		8
#define SCB_AIRCR_PRIGROUP_MASK		0x07
/** @defgroup scb_aircr_prigroup PRIGROUP PRIGROUP
@{*/
/**@}*/

/** SCB_AIRCR_SYSRESETREQ SYSRESETREQ **/
#define SCB_AIRCR_SYSRESETREQ		(1 << 2)
/** SCB_AIRCR_VECTCLRACTIVE VECTCLRACTIVE **/
#define SCB_AIRCR_VECTCLRACTIVE		(1 << 1)
/** SCB_AIRCR_VECTRESET VECTRESET **/
#define SCB_AIRCR_VECTRESET		(1 << 0)

/**@}*/

/** @defgroup scb_scr SCR System control register
@{*/

/** SCB_SCR_SEVEONPEND Send Event on Pending bit **/
#define SCB_SCR_SEVEONPEND		(1 << 4)
/** SCB_SCR_SLEEPDEEP SLEEPDEEP **/
#define SCB_SCR_SLEEPDEEP		(1 << 2)
/** SCB_SCR_SLEEPONEXIT SLEEPONEXIT **/
#define SCB_SCR_SLEEPONEXIT		(1 << 1)

/**@}*/

/** @defgroup scb_ccr CCR Configuration and control register
@{*/

/** SCB_CCR_BP BP **/
#define SCB_CCR_BP		(1 << 18)
/** SCB_CCR_IC IC **/
#define SCB_CCR_IC		(1 << 17)
/** SCB_CCR_DC DC **/
#define SCB_CCR_DC		(1 << 16)
/** SCB_CCR_STKALIGN STKALIGN **/
#define SCB_CCR_STKALIGN		(1 << 9)
/** SCB_CCR_BFHFNMIGN BFHFNMIGN **/
#define SCB_CCR_BFHFNMIGN		(1 << 8)
/** SCB_CCR_DIV_0_TRP DIV_0_TRP **/
#define SCB_CCR_DIV_0_TRP		(1 << 4)
/** SCB_CCR_UNALIGN__TRP UNALIGN_ TRP **/
#define SCB_CCR_UNALIGN__TRP		(1 << 3)
/** SCB_CCR_USERSETMPEND USERSETMPEND **/
#define SCB_CCR_USERSETMPEND		(1 << 1)
/** SCB_CCR_NONBASETHRDENA Configures how the processor enters Thread mode **/
#define SCB_CCR_NONBASETHRDENA		(1 << 0)

/**@}*/

/** @defgroup scb_shpr1 SHPR1 System handler priority registers
@{*/


#define SCB_SHPR1_PRI_6_SHIFT		16
#define SCB_SHPR1_PRI_6_MASK		0xff
/** @defgroup scb_shpr1_pri_6 PRI6 Priority of system handler 6
@{*/
/**@}*/


#define SCB_SHPR1_PRI_5_SHIFT		8
#define SCB_SHPR1_PRI_5_MASK		0xff
/** @defgroup scb_shpr1_pri_5 PRI5 Priority of system handler 5
@{*/
/**@}*/


#define SCB_SHPR1_PRI_4_SHIFT		0
#define SCB_SHPR1_PRI_4_MASK		0xff
/** @defgroup scb_shpr1_pri_4 PRI4 Priority of system handler 4
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_shpr2 SHPR2 System handler priority registers
@{*/


#define SCB_SHPR2_PRI_11_SHIFT		24
#define SCB_SHPR2_PRI_11_MASK		0xff
/** @defgroup scb_shpr2_pri_11 PRI11 Priority of system handler 11
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_shpr3 SHPR3 System handler priority registers
@{*/


#define SCB_SHPR3_PRI_15_SHIFT		24
#define SCB_SHPR3_PRI_15_MASK		0xff
/** @defgroup scb_shpr3_pri_15 PRI15 Priority of system handler 15
@{*/
/**@}*/


#define SCB_SHPR3_PRI_14_SHIFT		16
#define SCB_SHPR3_PRI_14_MASK		0xff
/** @defgroup scb_shpr3_pri_14 PRI14 Priority of system handler 14
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_shcrs SHCRS System handler control and state register
@{*/

/** SCB_SHCRS_USGFAULTENA Usage fault enable bit **/
#define SCB_SHCRS_USGFAULTENA		(1 << 18)
/** SCB_SHCRS_BUSFAULTENA Bus fault enable bit **/
#define SCB_SHCRS_BUSFAULTENA		(1 << 17)
/** SCB_SHCRS_MEMFAULTENA Memory management fault enable bit **/
#define SCB_SHCRS_MEMFAULTENA		(1 << 16)
/** SCB_SHCRS_SVCALLPENDED SVC call pending bit **/
#define SCB_SHCRS_SVCALLPENDED		(1 << 15)
/** SCB_SHCRS_BUSFAULTPENDED Bus fault exception pending bit **/
#define SCB_SHCRS_BUSFAULTPENDED		(1 << 14)
/** SCB_SHCRS_MEMFAULTPENDED Memory management fault exception pending bit **/
#define SCB_SHCRS_MEMFAULTPENDED		(1 << 13)
/** SCB_SHCRS_USGFAULTPENDED Usage fault exception pending bit **/
#define SCB_SHCRS_USGFAULTPENDED		(1 << 12)
/** SCB_SHCRS_SYSTICKACT SysTick exception active bit **/
#define SCB_SHCRS_SYSTICKACT		(1 << 11)
/** SCB_SHCRS_PENDSVACT PendSV exception active bit **/
#define SCB_SHCRS_PENDSVACT		(1 << 10)
/** SCB_SHCRS_MONITORACT Debug monitor active bit **/
#define SCB_SHCRS_MONITORACT		(1 << 8)
/** SCB_SHCRS_SVCALLACT SVC call active bit **/
#define SCB_SHCRS_SVCALLACT		(1 << 7)
/** SCB_SHCRS_USGFAULTACT Usage fault exception active bit **/
#define SCB_SHCRS_USGFAULTACT		(1 << 3)
/** SCB_SHCRS_BUSFAULTACT Bus fault exception active bit **/
#define SCB_SHCRS_BUSFAULTACT		(1 << 1)
/** SCB_SHCRS_MEMFAULTACT Memory management fault exception active bit **/
#define SCB_SHCRS_MEMFAULTACT		(1 << 0)

/**@}*/

/** @defgroup scb_cfsr_ufsr_bfsr_mmfsr CFSRUFSRBFSRMMFSR Configurable fault status register
@{*/

/** SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO Divide by zero usage fault **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO		(1 << 25)
/** SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED Unaligned access usage fault **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED		(1 << 24)
/** SCB_CFSR_UFSR_BFSR_MMFSR_NOCP No coprocessor usage fault. **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_NOCP		(1 << 19)
/** SCB_CFSR_UFSR_BFSR_MMFSR_INVPC Invalid PC load usage fault **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVPC		(1 << 18)
/** SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE Invalid state usage fault **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE		(1 << 17)
/** SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR Undefined instruction usage fault **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR		(1 << 16)
/** SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID Bus Fault Address Register (BFAR) valid flag **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID		(1 << 15)
/** SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR Bus fault on floating-point lazy state preservation **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR		(1 << 13)
/** SCB_CFSR_UFSR_BFSR_MMFSR_STKERR Bus fault on stacking for exception entry **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_STKERR		(1 << 12)
/** SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR Bus fault on unstacking for a return from exception **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR		(1 << 11)
/** SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR Imprecise data bus error **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR		(1 << 10)
/** SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR Precise data bus error **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR		(1 << 9)
/** SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR Instruction bus error **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR		(1 << 8)
/** SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID MMARVALID **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID		(1 << 7)
/** SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR MLSPERR **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR		(1 << 5)
/** SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR MSTKERR **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR		(1 << 4)
/** SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR MUNSTKERR **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR		(1 << 3)
/** SCB_CFSR_UFSR_BFSR_MMFSR_DACCVIOL DACCVIOL **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_DACCVIOL		(1 << 1)
/** SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL IACCVIOL **/
#define SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL		(1 << 0)

/**@}*/

/** @defgroup scb_hfsr HFSR Hard fault status register
@{*/

/** SCB_HFSR_DEBUG_VT Reserved for Debug use **/
#define SCB_HFSR_DEBUG_VT		(1 << 31)
/** SCB_HFSR_FORCED Forced hard fault **/
#define SCB_HFSR_FORCED		(1 << 30)
/** SCB_HFSR_VECTTBL Vector table hard fault **/
#define SCB_HFSR_VECTTBL		(1 << 1)

/**@}*/

/** @defgroup scb_mmfar MMFAR Memory management fault address register
@{*/


#define SCB_MMFAR_ADDRESS_SHIFT		0
#define SCB_MMFAR_ADDRESS_MASK		0xffffffff
/** @defgroup scb_mmfar_address ADDRESS Memory management fault address
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_bfar BFAR Bus fault address register
@{*/


#define SCB_BFAR_ADDRESS_SHIFT		0
#define SCB_BFAR_ADDRESS_MASK		0xffffffff
/** @defgroup scb_bfar_address ADDRESS Bus fault address
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- SystemControl: System Control Registers ---------------------- */

/** @defgroup systemcontrol_registers System Control Registers Register
@{*/

/** SystemControl_ICTR Interrupt Controller Type Register **/
#define SystemControl_ICTR			MMIO32(SystemControl_BASE + 0x04)
/** SystemControl_ACTLR Auxiliary Control Register **/
#define SystemControl_ACTLR			MMIO32(SystemControl_BASE + 0x08)
/** SystemControl_CPUID CPUID Base Register **/
#define SystemControl_CPUID			MMIO32(SystemControl_BASE + 0xd00)
/** SystemControl_ICSR Interrupt Control and State Register **/
#define SystemControl_ICSR			MMIO32(SystemControl_BASE + 0xd04)
/** SystemControl_VTOR Vector Table Offset Register **/
#define SystemControl_VTOR			MMIO32(SystemControl_BASE + 0xd08)
/** SystemControl_AIRCR Application Interrupt and Reset Control Register **/
#define SystemControl_AIRCR			MMIO32(SystemControl_BASE + 0xd0c)
/** SystemControl_SCR System Control Register **/
#define SystemControl_SCR			MMIO32(SystemControl_BASE + 0xd10)
/** SystemControl_CCR Configuration and Control Register **/
#define SystemControl_CCR			MMIO32(SystemControl_BASE + 0xd14)
/** SystemControl_SHPR1 System Handler Priority Register 1 **/
#define SystemControl_SHPR1			MMIO32(SystemControl_BASE + 0xd18)
/** SystemControl_SHPR2 System Handler Priority Register 2 **/
#define SystemControl_SHPR2			MMIO32(SystemControl_BASE + 0xd1c)
/** SystemControl_SHPR3 System Handler Priority Register 3 **/
#define SystemControl_SHPR3			MMIO32(SystemControl_BASE + 0xd20)
/** SystemControl_SHCSR System Handler Control and State Register **/
#define SystemControl_SHCSR			MMIO32(SystemControl_BASE + 0xd24)
/** SystemControl_CFSR Configurable Fault Status Register **/
#define SystemControl_CFSR			MMIO32(SystemControl_BASE + 0xd28)
/** SystemControl_HFSR HardFault Status Register **/
#define SystemControl_HFSR			MMIO32(SystemControl_BASE + 0xd2c)
/** SystemControl_DFSR Debug Fault Status Register **/
#define SystemControl_DFSR			MMIO32(SystemControl_BASE + 0xd30)
/** SystemControl_MMFAR MemManage Fault Address Register **/
#define SystemControl_MMFAR			MMIO32(SystemControl_BASE + 0xd34)
/** SystemControl_BFAR BusFault Address Register **/
#define SystemControl_BFAR			MMIO32(SystemControl_BASE + 0xd38)
/** SystemControl_AFSR Auxiliary Fault Status Register **/
#define SystemControl_AFSR			MMIO32(SystemControl_BASE + 0xd3c)
/** SystemControl_PFR[0] Processor Feature Register **/
#define SystemControl_PFR[0]			MMIO32(SystemControl_BASE + 0xd40)
/** SystemControl_PFR[1] Processor Feature Register **/
#define SystemControl_PFR[1]			MMIO32(SystemControl_BASE + 0xd44)
/** SystemControl_DFR Debug Feature Register **/
#define SystemControl_DFR			MMIO32(SystemControl_BASE + 0xd48)
/** SystemControl_ADR Auxiliary Feature Register **/
#define SystemControl_ADR			MMIO32(SystemControl_BASE + 0xd4c)
/** SystemControl_MMFR[0] Memory Model Feature Register **/
#define SystemControl_MMFR[0]			MMIO32(SystemControl_BASE + 0xd50)
/** SystemControl_MMFR[1] Memory Model Feature Register **/
#define SystemControl_MMFR[1]			MMIO32(SystemControl_BASE + 0xd54)
/** SystemControl_MMFR[2] Memory Model Feature Register **/
#define SystemControl_MMFR[2]			MMIO32(SystemControl_BASE + 0xd58)
/** SystemControl_MMFR[3] Memory Model Feature Register **/
#define SystemControl_MMFR[3]			MMIO32(SystemControl_BASE + 0xd5c)
/** SystemControl_ISAR[0] Instruction Set Attributes Register **/
#define SystemControl_ISAR[0]			MMIO32(SystemControl_BASE + 0xd60)
/** SystemControl_ISAR[1] Instruction Set Attributes Register **/
#define SystemControl_ISAR[1]			MMIO32(SystemControl_BASE + 0xd64)
/** SystemControl_ISAR[2] Instruction Set Attributes Register **/
#define SystemControl_ISAR[2]			MMIO32(SystemControl_BASE + 0xd68)
/** SystemControl_ISAR[3] Instruction Set Attributes Register **/
#define SystemControl_ISAR[3]			MMIO32(SystemControl_BASE + 0xd6c)
/** SystemControl_ISAR[4] Instruction Set Attributes Register **/
#define SystemControl_ISAR[4]			MMIO32(SystemControl_BASE + 0xd70)
/** SystemControl_CPACR Coprocessor Access Control Register **/
#define SystemControl_CPACR			MMIO32(SystemControl_BASE + 0xd88)

/**@}*/


/** @defgroup systemcontrol_ictr ICTR Interrupt Controller Type Register
@{*/


#define SystemControl_ICTR_INTLINESNUM_SHIFT		0
#define SystemControl_ICTR_INTLINESNUM_MASK		0x0f
/** @defgroup systemcontrol_ictr_intlinesnum INTLINESNUM 
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_actlr ACTLR Auxiliary Control Register
@{*/

/** SystemControl_ACTLR_DISOOFP Disable out-of-order FP instructions **/
#define SystemControl_ACTLR_DISOOFP		(1 << 9)
/** SystemControl_ACTLR_DISFPCA Disable automatic update of CONTROL.FPCA **/
#define SystemControl_ACTLR_DISFPCA		(1 << 8)
/** SystemControl_ACTLR_DISFOLD Disable IT folding **/
#define SystemControl_ACTLR_DISFOLD		(1 << 2)
/** SystemControl_ACTLR_DISDEFWBUF Disable wruite buffer use during default memory map accesses **/
#define SystemControl_ACTLR_DISDEFWBUF		(1 << 1)
/** SystemControl_ACTLR_DISMCYCINT Disable interruption of LDM/STM instructions **/
#define SystemControl_ACTLR_DISMCYCINT		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_cpuid CPUID CPUID Base Register
@{*/


#define SystemControl_CPUID_IMPLEMENTER_SHIFT		24
#define SystemControl_CPUID_IMPLEMENTER_MASK		0xff
/** @defgroup systemcontrol_cpuid_implementer IMPLEMENTER Implementer code, 0x41=ARM
@{*/
/**@}*/


#define SystemControl_CPUID_VARIANT_SHIFT		20
#define SystemControl_CPUID_VARIANT_MASK		0x0f
/** @defgroup systemcontrol_cpuid_variant VARIANT Variant number
@{*/
/**@}*/


#define SystemControl_CPUID_CONSTANT_SHIFT		16
#define SystemControl_CPUID_CONSTANT_MASK		0x0f
/** @defgroup systemcontrol_cpuid_constant CONSTANT Constant
@{*/
/**@}*/


#define SystemControl_CPUID_PARTNO_SHIFT		4
#define SystemControl_CPUID_PARTNO_MASK		0xfff
/** @defgroup systemcontrol_cpuid_partno PARTNO Process Part Number, 0xC24=Cortex-M4
@{*/
/**@}*/


#define SystemControl_CPUID_REVISION_SHIFT		0
#define SystemControl_CPUID_REVISION_MASK		0x0f
/** @defgroup systemcontrol_cpuid_revision REVISION Processor revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_icsr ICSR Interrupt Control and State Register
@{*/

/** SystemControl_ICSR_NMIPENDSET NMI set-pending bit **/
#define SystemControl_ICSR_NMIPENDSET		(1 << 31)
/** SystemControl_ICSR_PENDSVSET PendSV set-pending bit **/
#define SystemControl_ICSR_PENDSVSET		(1 << 28)
/** SystemControl_ICSR_PENDSVCLR PendSV clear-pending bit **/
#define SystemControl_ICSR_PENDSVCLR		(1 << 27)
/** SystemControl_ICSR_PENDSTSET SysTick set-pending bit **/
#define SystemControl_ICSR_PENDSTSET		(1 << 26)
/** SystemControl_ICSR_PENDSTCLR SysTick clear-pending bit **/
#define SystemControl_ICSR_PENDSTCLR		(1 << 25)
/** SystemControl_ICSR_ISRPREEMPT Debug only **/
#define SystemControl_ICSR_ISRPREEMPT		(1 << 23)
/** SystemControl_ICSR_ISRPENDING Interrupt pending flag **/
#define SystemControl_ICSR_ISRPENDING		(1 << 22)

#define SystemControl_ICSR_VECTPENDING_SHIFT		12
#define SystemControl_ICSR_VECTPENDING_MASK		0x3f
/** @defgroup systemcontrol_icsr_vectpending VECTPENDING Exception number of the highest priority pending enabled exception
@{*/
/**@}*/

/** SystemControl_ICSR_RETTOBASE No preempted active exceptions to execute **/
#define SystemControl_ICSR_RETTOBASE		(1 << 11)

#define SystemControl_ICSR_VECTACTIVE_SHIFT		0
#define SystemControl_ICSR_VECTACTIVE_MASK		0x1ff
/** @defgroup systemcontrol_icsr_vectactive VECTACTIVE Active exception number
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_vtor VTOR Vector Table Offset Register
@{*/


#define SystemControl_VTOR_TBLOFF_SHIFT		7
#define SystemControl_VTOR_TBLOFF_MASK		0x1ffffff
/** @defgroup systemcontrol_vtor_tbloff TBLOFF Vector table base offset
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_aircr AIRCR Application Interrupt and Reset Control Register
@{*/


#define SystemControl_AIRCR_VECTKEY_SHIFT		16
#define SystemControl_AIRCR_VECTKEY_MASK		0xffff
/** @defgroup systemcontrol_aircr_vectkey VECTKEY Register key
@{*/
/**@}*/

/** SystemControl_AIRCR_ENDIANNESS Data endianness, 0=little, 1=big **/
#define SystemControl_AIRCR_ENDIANNESS		(1 << 15)

#define SystemControl_AIRCR_PRIGROUP_SHIFT		8
#define SystemControl_AIRCR_PRIGROUP_MASK		0x07
/** @defgroup systemcontrol_aircr_prigroup PRIGROUP Interrupt priority grouping
@{*/
/**@}*/

/** SystemControl_AIRCR_SYSRESETREQ System Reset Request **/
#define SystemControl_AIRCR_SYSRESETREQ		(1 << 2)
/** SystemControl_AIRCR_VECTCLRACTIVE Must write 0 **/
#define SystemControl_AIRCR_VECTCLRACTIVE		(1 << 1)
/** SystemControl_AIRCR_VECTRESET Must write 0 **/
#define SystemControl_AIRCR_VECTRESET		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_scr SCR System Control Register
@{*/

/** SystemControl_SCR_SEVONPEND Send Event on Pending bit **/
#define SystemControl_SCR_SEVONPEND		(1 << 4)
/** SystemControl_SCR_SLEEPDEEP Deep Sleep used as low power mode **/
#define SystemControl_SCR_SLEEPDEEP		(1 << 2)
/** SystemControl_SCR_SLEEPONEXIT Sleep-on-exit on handler return **/
#define SystemControl_SCR_SLEEPONEXIT		(1 << 1)

/**@}*/

/** @defgroup systemcontrol_ccr CCR Configuration and Control Register
@{*/

/** SystemControl_CCR_STKALIGN Indicates stack alignment on exception entry **/
#define SystemControl_CCR_STKALIGN		(1 << 9)
/** SystemControl_CCR_BFHFNMIGN Ignore LDM/STM BusFault for -1/-2 priority handlers **/
#define SystemControl_CCR_BFHFNMIGN		(1 << 8)
/** SystemControl_CCR_DIV_0_TRP Enables divide by 0 trap **/
#define SystemControl_CCR_DIV_0_TRP		(1 << 4)
/** SystemControl_CCR_UNALIGN_TRP Enables unaligned access traps **/
#define SystemControl_CCR_UNALIGN_TRP		(1 << 3)
/** SystemControl_CCR_USERSETMPEND Enables unprivileged software access to STIR register **/
#define SystemControl_CCR_USERSETMPEND		(1 << 1)
/** SystemControl_CCR_NONBASETHRDENA Indicates how processor enters Thread mode **/
#define SystemControl_CCR_NONBASETHRDENA		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_shpr1 SHPR1 System Handler Priority Register 1
@{*/


#define SystemControl_SHPR1_PRI_6_SHIFT		16
#define SystemControl_SHPR1_PRI_6_MASK		0xff
/** @defgroup systemcontrol_shpr1_pri_6 PRI6 Priority of system handler 6, UsageFault
@{*/
/**@}*/


#define SystemControl_SHPR1_PRI_5_SHIFT		8
#define SystemControl_SHPR1_PRI_5_MASK		0xff
/** @defgroup systemcontrol_shpr1_pri_5 PRI5 Priority of system handler 5, BusFault
@{*/
/**@}*/


#define SystemControl_SHPR1_PRI_4_SHIFT		0
#define SystemControl_SHPR1_PRI_4_MASK		0xff
/** @defgroup systemcontrol_shpr1_pri_4 PRI4 Priority of system handler 4, MemManage
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_shpr2 SHPR2 System Handler Priority Register 2
@{*/


#define SystemControl_SHPR2_PRI_11_SHIFT		24
#define SystemControl_SHPR2_PRI_11_MASK		0xff
/** @defgroup systemcontrol_shpr2_pri_11 PRI11 Priority of system handler 11, SVCall
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_shpr3 SHPR3 System Handler Priority Register 3
@{*/


#define SystemControl_SHPR3_PRI_15_SHIFT		24
#define SystemControl_SHPR3_PRI_15_MASK		0xff
/** @defgroup systemcontrol_shpr3_pri_15 PRI15 Priority of system handler 15, SysTick exception
@{*/
/**@}*/


#define SystemControl_SHPR3_PRI_14_SHIFT		16
#define SystemControl_SHPR3_PRI_14_MASK		0xff
/** @defgroup systemcontrol_shpr3_pri_14 PRI14 Priority of system handler 14, PendSV
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_shcsr SHCSR System Handler Control and State Register
@{*/

/** SystemControl_SHCSR_USGFAULTENA UsageFault enable bit **/
#define SystemControl_SHCSR_USGFAULTENA		(1 << 18)
/** SystemControl_SHCSR_BUSFAULTENA BusFault enable bit **/
#define SystemControl_SHCSR_BUSFAULTENA		(1 << 17)
/** SystemControl_SHCSR_MEMFAULTENA MemManage enable bit **/
#define SystemControl_SHCSR_MEMFAULTENA		(1 << 16)
/** SystemControl_SHCSR_SVCALLPENDED SVCall pending bit **/
#define SystemControl_SHCSR_SVCALLPENDED		(1 << 15)
/** SystemControl_SHCSR_BUSFAULTPENDED BusFault exception pending bit **/
#define SystemControl_SHCSR_BUSFAULTPENDED		(1 << 14)
/** SystemControl_SHCSR_MEMFAULTPENDED MemManage exception pending bit **/
#define SystemControl_SHCSR_MEMFAULTPENDED		(1 << 13)
/** SystemControl_SHCSR_USGFAULTPENDED UsageFault exception pending bit **/
#define SystemControl_SHCSR_USGFAULTPENDED		(1 << 12)
/** SystemControl_SHCSR_SYSTICKACT SysTick exception active bit **/
#define SystemControl_SHCSR_SYSTICKACT		(1 << 11)
/** SystemControl_SHCSR_PENDSVACT PendSV exception active bit **/
#define SystemControl_SHCSR_PENDSVACT		(1 << 10)
/** SystemControl_SHCSR_MONITORACT DebugMonitor exception active bit **/
#define SystemControl_SHCSR_MONITORACT		(1 << 8)
/** SystemControl_SHCSR_SVCALLACT SVCall active bit **/
#define SystemControl_SHCSR_SVCALLACT		(1 << 7)
/** SystemControl_SHCSR_USGFAULTACT UsageFault exception active bit **/
#define SystemControl_SHCSR_USGFAULTACT		(1 << 3)
/** SystemControl_SHCSR_BUSFAULTACT BusFault exception active bit **/
#define SystemControl_SHCSR_BUSFAULTACT		(1 << 1)
/** SystemControl_SHCSR_MEMFAULTACT MemManage exception active bit **/
#define SystemControl_SHCSR_MEMFAULTACT		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_cfsr CFSR Configurable Fault Status Register
@{*/

/** SystemControl_CFSR_DIVBYZERO Divide by zero UsageFault **/
#define SystemControl_CFSR_DIVBYZERO		(1 << 25)
/** SystemControl_CFSR_UNALIGNED Unaligned access UsageFault **/
#define SystemControl_CFSR_UNALIGNED		(1 << 24)
/** SystemControl_CFSR_NOCP No coprocessor UsageFault **/
#define SystemControl_CFSR_NOCP		(1 << 19)
/** SystemControl_CFSR_INVPC Invalid PC load UsageFault **/
#define SystemControl_CFSR_INVPC		(1 << 18)
/** SystemControl_CFSR_INVSTATE Invalid state UsageFault **/
#define SystemControl_CFSR_INVSTATE		(1 << 17)
/** SystemControl_CFSR_UNDEFINSTR Undefined instruction UsageFault **/
#define SystemControl_CFSR_UNDEFINSTR		(1 << 16)
/** SystemControl_CFSR_BFARVALID BusFault Address Register valid **/
#define SystemControl_CFSR_BFARVALID		(1 << 15)
/** SystemControl_CFSR_LSPERR BusFault occured during FP lazy state preservation **/
#define SystemControl_CFSR_LSPERR		(1 << 13)
/** SystemControl_CFSR_STKERR BusFault on stacking for exception entry **/
#define SystemControl_CFSR_STKERR		(1 << 12)
/** SystemControl_CFSR_UNSTKERR BusFault on unstacking for exception return **/
#define SystemControl_CFSR_UNSTKERR		(1 << 11)
/** SystemControl_CFSR_IMPRECISERR Imprecise data bus error **/
#define SystemControl_CFSR_IMPRECISERR		(1 << 10)
/** SystemControl_CFSR_PRECISERR Precise data bus error **/
#define SystemControl_CFSR_PRECISERR		(1 << 9)
/** SystemControl_CFSR_IBUSERR Instruction bus error **/
#define SystemControl_CFSR_IBUSERR		(1 << 8)
/** SystemControl_CFSR_MMARVALID MemManage Fault Address Register valid **/
#define SystemControl_CFSR_MMARVALID		(1 << 7)
/** SystemControl_CFSR_MLSPERR MemManager Fault occured during FP lazy state preservation **/
#define SystemControl_CFSR_MLSPERR		(1 << 5)
/** SystemControl_CFSR_MSTKERR MemManage Fault on stacking for exception entry **/
#define SystemControl_CFSR_MSTKERR		(1 << 4)
/** SystemControl_CFSR_MUNSTKERR MemManage Fault on unstacking for exception return **/
#define SystemControl_CFSR_MUNSTKERR		(1 << 3)
/** SystemControl_CFSR_DACCVIOL Data access violation **/
#define SystemControl_CFSR_DACCVIOL		(1 << 1)
/** SystemControl_CFSR_IACCVIOL Instruction access violation **/
#define SystemControl_CFSR_IACCVIOL		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_hfsr HFSR HardFault Status Register
@{*/

/** SystemControl_HFSR_DEBUGEVT Debug: always write 0 **/
#define SystemControl_HFSR_DEBUGEVT		(1 << 31)
/** SystemControl_HFSR_FORCED Forced Hard Fault **/
#define SystemControl_HFSR_FORCED		(1 << 30)
/** SystemControl_HFSR_VECTTBL BusFault on a Vector Table read during exception processing **/
#define SystemControl_HFSR_VECTTBL		(1 << 1)

/**@}*/

/** @defgroup systemcontrol_dfsr DFSR Debug Fault Status Register
@{*/

/** SystemControl_DFSR_EXTERNAL  **/
#define SystemControl_DFSR_EXTERNAL		(1 << 4)
/** SystemControl_DFSR_VCATCH  **/
#define SystemControl_DFSR_VCATCH		(1 << 3)
/** SystemControl_DFSR_DWTTRAP  **/
#define SystemControl_DFSR_DWTTRAP		(1 << 2)
/** SystemControl_DFSR_BKPT  **/
#define SystemControl_DFSR_BKPT		(1 << 1)
/** SystemControl_DFSR_HALTED  **/
#define SystemControl_DFSR_HALTED		(1 << 0)

/**@}*/

/** @defgroup systemcontrol_mmfar MMFAR MemManage Fault Address Register
@{*/


#define SystemControl_MMFAR_ADDRESS_SHIFT		0
#define SystemControl_MMFAR_ADDRESS_MASK		0xffffffff
/** @defgroup systemcontrol_mmfar_address ADDRESS Address that generated the MemManage fault
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_bfar BFAR BusFault Address Register
@{*/


#define SystemControl_BFAR_ADDRESS_SHIFT		0
#define SystemControl_BFAR_ADDRESS_MASK		0xffffffff
/** @defgroup systemcontrol_bfar_address ADDRESS Address that generated the BusFault
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_afsr AFSR Auxiliary Fault Status Register
@{*/


#define SystemControl_AFSR_IMPDEF_SHIFT		0
#define SystemControl_AFSR_IMPDEF_MASK		0xffffffff
/** @defgroup systemcontrol_afsr_impdef IMPDEF AUXFAULT input signals
@{*/
/**@}*/


/**@}*/

/** @defgroup systemcontrol_pfr[0] PFR[0] Processor Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_pfr[1] PFR[1] Processor Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_dfr DFR Debug Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_adr ADR Auxiliary Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_mmfr[0] MMFR[0] Memory Model Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_mmfr[1] MMFR[1] Memory Model Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_mmfr[2] MMFR[2] Memory Model Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_mmfr[3] MMFR[3] Memory Model Feature Register
@{*/


/**@}*/

/** @defgroup systemcontrol_isar[0] ISAR[0] Instruction Set Attributes Register
@{*/


/**@}*/

/** @defgroup systemcontrol_isar[1] ISAR[1] Instruction Set Attributes Register
@{*/


/**@}*/

/** @defgroup systemcontrol_isar[2] ISAR[2] Instruction Set Attributes Register
@{*/


/**@}*/

/** @defgroup systemcontrol_isar[3] ISAR[3] Instruction Set Attributes Register
@{*/


/**@}*/

/** @defgroup systemcontrol_isar[4] ISAR[4] Instruction Set Attributes Register
@{*/


/**@}*/

/** @defgroup systemcontrol_cpacr CPACR Coprocessor Access Control Register
@{*/


#define SystemControl_CPACR_CP11_SHIFT		22
#define SystemControl_CPACR_CP11_MASK		0x03
/** @defgroup systemcontrol_cpacr_cp11 CP11 Access privileges for coprocessor 11
@{*/
/**@}*/


#define SystemControl_CPACR_CP10_SHIFT		20
#define SystemControl_CPACR_CP10_MASK		0x03
/** @defgroup systemcontrol_cpacr_cp10 CP10 Access privileges for coprocessor 10
@{*/
/**@}*/


/**@}*/

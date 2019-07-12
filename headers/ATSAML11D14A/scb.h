#pragma once 

/* --- SCB: System Control Block ------------------------------------ */

/** @defgroup scb_registers System Control Block Register
@{*/

/** SCB_CPUID CPUID base register **/
#define SCB_CPUID			MMIO32(SCB_BASE + 0x00)
/** SCB_ICSR Interrupt Control and State Register **/
#define SCB_ICSR			MMIO32(SCB_BASE + 0x04)
/** SCB_VTOR Vector Table Offset Register **/
#define SCB_VTOR			MMIO32(SCB_BASE + 0x08)
/** SCB_AIRCR Application Interrupt and Reset Control Register **/
#define SCB_AIRCR			MMIO32(SCB_BASE + 0x0c)
/** SCB_SCR System Control Register **/
#define SCB_SCR			MMIO32(SCB_BASE + 0x10)
/** SCB_CCR Configuration and Control Register **/
#define SCB_CCR			MMIO32(SCB_BASE + 0x14)
/** SCB_SHPR2 System Handler Priority Register 2 **/
#define SCB_SHPR2			MMIO32(SCB_BASE + 0x1c)
/** SCB_SHPR3 System Handler Priority Register 3 **/
#define SCB_SHPR3			MMIO32(SCB_BASE + 0x20)
/** SCB_SHCSR System Handler Control and State Register **/
#define SCB_SHCSR			MMIO32(SCB_BASE + 0x24)
/** SCB_DFSR Debug Fault Status Register **/
#define SCB_DFSR			MMIO32(SCB_BASE + 0x30)
/** SCB_AFSR Auxiliary Fault Status Register **/
#define SCB_AFSR			MMIO32(SCB_BASE + 0x3c)
/** SCB_CLIDR Cache Level ID Register **/
#define SCB_CLIDR			MMIO32(SCB_BASE + 0x78)
/** SCB_CTR Cache Type Register **/
#define SCB_CTR			MMIO32(SCB_BASE + 0x7c)
/** SCB_CCSIDR Current Cache Size ID register **/
#define SCB_CCSIDR			MMIO32(SCB_BASE + 0x80)
/** SCB_CSSELR Cache Size Selection Register **/
#define SCB_CSSELR			MMIO32(SCB_BASE + 0x84)

/**@}*/


/** @defgroup scb_cpuid CPUID CPUID base register
@{*/


#define SCB_CPUID_Implementer_SHIFT		24
#define SCB_CPUID_Implementer_MASK		0xff
/** @defgroup scb_cpuid_implementer Implementer Implementer code, ARM=0x41
@{*/
/**@}*/


#define SCB_CPUID_Variant_SHIFT		20
#define SCB_CPUID_Variant_MASK		0x0f
/** @defgroup scb_cpuid_variant Variant Variant number
@{*/
/**@}*/


#define SCB_CPUID_Architecture_SHIFT		16
#define SCB_CPUID_Architecture_MASK		0x0f
/** @defgroup scb_cpuid_architecture Architecture Architecture version, 0xC=ARMv8-M Base Line, 0xF=ARMv8-M Main Line
@{*/
/**@}*/


#define SCB_CPUID_PartNo_SHIFT		4
#define SCB_CPUID_PartNo_MASK		0xfff
/** @defgroup scb_cpuid_partno PartNo Part number, 0xD20=Cortex-M23
@{*/
/**@}*/


#define SCB_CPUID_Revision_SHIFT		0
#define SCB_CPUID_Revision_MASK		0x0f
/** @defgroup scb_cpuid_revision Revision Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_icsr ICSR Interrupt Control and State Register
@{*/

/** SCB_ICSR_PENDNMISET Pend NMI set **/
#define SCB_ICSR_PENDNMISET		(1 << 31)
/** SCB_ICSR_PENDNMICLR Pend NMI clear **/
#define SCB_ICSR_PENDNMICLR		(1 << 30)
/** SCB_ICSR_PENDSVSET Pend PendSV set **/
#define SCB_ICSR_PENDSVSET		(1 << 28)
/** SCB_ICSR_PENDSVCLR Pend PendSV clear **/
#define SCB_ICSR_PENDSVCLR		(1 << 27)
/** SCB_ICSR_PENDSTSET Pend SysTick set **/
#define SCB_ICSR_PENDSTSET		(1 << 26)
/** SCB_ICSR_PENDSTCLR Pend SysTick clear **/
#define SCB_ICSR_PENDSTCLR		(1 << 25)
/** SCB_ICSR_ISRPREEMPT Interrupt preempt **/
#define SCB_ICSR_ISRPREEMPT		(1 << 23)
/** SCB_ICSR_ISRPENDING Interrupt pending **/
#define SCB_ICSR_ISRPENDING		(1 << 22)

#define SCB_ICSR_VECTPENDING_SHIFT		12
#define SCB_ICSR_VECTPENDING_MASK		0x1ff
/** @defgroup scb_icsr_vectpending VECTPENDING Vector pending
@{*/
/**@}*/

/** SCB_ICSR_RETTOBASE Return to base **/
#define SCB_ICSR_RETTOBASE		(1 << 11)

#define SCB_ICSR_VECTACTIVE_SHIFT		0
#define SCB_ICSR_VECTACTIVE_MASK		0x1ff
/** @defgroup scb_icsr_vectactive VECTACTIVE Vector active
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_vtor VTOR Vector Table Offset Register
@{*/


#define SCB_VTOR_TBLOFF_SHIFT		7
#define SCB_VTOR_TBLOFF_MASK		0x1ffffff
/** @defgroup scb_vtor_tbloff TBLOFF Vector table base offset
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_aircr AIRCR Application Interrupt and Reset Control Register
@{*/


#define SCB_AIRCR_VECTKEY_SHIFT		16
#define SCB_AIRCR_VECTKEY_MASK		0xffff
/** @defgroup scb_aircr_vectkey VECTKEY Register Key (0x05FA)
@{*/
/**@}*/

/** SCB_AIRCR_ENDIANNESS Data Endianness, 0=little, 1=big **/
#define SCB_AIRCR_ENDIANNESS		(1 << 15)
/** SCB_AIRCR_PRIS Prioritize Secure Exceptions **/
#define SCB_AIRCR_PRIS		(1 << 14)
/** SCB_AIRCR_BFHFNMINS BusFault, HardFault and NMI Non-secure enable **/
#define SCB_AIRCR_BFHFNMINS		(1 << 13)
/** SCB_AIRCR_SYSRESETREQS System Reset Request Secure only **/
#define SCB_AIRCR_SYSRESETREQS		(1 << 3)
/** SCB_AIRCR_SYSRESETREQ System Reset Request **/
#define SCB_AIRCR_SYSRESETREQ		(1 << 2)
/** SCB_AIRCR_VECTCLRACTIVE Debug: Clear Active State **/
#define SCB_AIRCR_VECTCLRACTIVE		(1 << 1)

/**@}*/

/** @defgroup scb_scr SCR System Control Register
@{*/

/** SCB_SCR_SEVONPEND Send Event on Pending bit **/
#define SCB_SCR_SEVONPEND		(1 << 4)
/** SCB_SCR_SLEEPDEEPS Sleep deep secure **/
#define SCB_SCR_SLEEPDEEPS		(1 << 3)
/** SCB_SCR_SLEEPDEEP Sleep deep **/
#define SCB_SCR_SLEEPDEEP		(1 << 2)
/** SCB_SCR_SLEEPONEXIT Sleep on exit **/
#define SCB_SCR_SLEEPONEXIT		(1 << 1)

/**@}*/

/** @defgroup scb_ccr CCR Configuration and Control Register
@{*/

/** SCB_CCR_BP Branch prediction enable **/
#define SCB_CCR_BP		(1 << 18)
/** SCB_CCR_IC Instruction cache enable **/
#define SCB_CCR_IC		(1 << 17)
/** SCB_CCR_DC Data cache enable **/
#define SCB_CCR_DC		(1 << 16)
/** SCB_CCR_STKOFHFNMIGN Stack overflow in HardFault and NMI ignore **/
#define SCB_CCR_STKOFHFNMIGN		(1 << 10)
/** SCB_CCR_BFHFNMIGN BusFault in HardFault or NMI ignore **/
#define SCB_CCR_BFHFNMIGN		(1 << 8)
/** SCB_CCR_DIV_0_TRP Divide by zero trap **/
#define SCB_CCR_DIV_0_TRP		(1 << 4)
/** SCB_CCR_UNALIGN_TRP Unaligned trap **/
#define SCB_CCR_UNALIGN_TRP		(1 << 3)
/** SCB_CCR_USERSETMPEND User set main pending **/
#define SCB_CCR_USERSETMPEND		(1 << 1)

/**@}*/

/** @defgroup scb_shpr2 SHPR2 System Handler Priority Register 2
@{*/


#define SCB_SHPR2_PRI_11_SHIFT		24
#define SCB_SHPR2_PRI_11_MASK		0xff
/** @defgroup scb_shpr2_pri_11 PRI11 Priority of system handler 11, SVCall
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_shpr3 SHPR3 System Handler Priority Register 3
@{*/


#define SCB_SHPR3_PRI_15_SHIFT		24
#define SCB_SHPR3_PRI_15_MASK		0xff
/** @defgroup scb_shpr3_pri_15 PRI15 Priority of system handler 15, SysTick
@{*/
/**@}*/


#define SCB_SHPR3_PRI_14_SHIFT		16
#define SCB_SHPR3_PRI_14_MASK		0xff
/** @defgroup scb_shpr3_pri_14 PRI14 Priority of system handler 14, PendSV
@{*/
/**@}*/


#define SCB_SHPR3_PRI_12_SHIFT		0
#define SCB_SHPR3_PRI_12_MASK		0xff
/** @defgroup scb_shpr3_pri_12 PRI12 Priority of system handler 12, DebugMonitor
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_shcsr SHCSR System Handler Control and State Register
@{*/

/** SCB_SHCSR_HARDFAULTPENDED HardFault exception pended state **/
#define SCB_SHCSR_HARDFAULTPENDED		(1 << 21)
/** SCB_SHCSR_SVCALLPENDED SVCall exception pended state **/
#define SCB_SHCSR_SVCALLPENDED		(1 << 15)
/** SCB_SHCSR_SYSTICKACT SysTick exception active state **/
#define SCB_SHCSR_SYSTICKACT		(1 << 11)
/** SCB_SHCSR_PENDSVACT PendSV exception active state **/
#define SCB_SHCSR_PENDSVACT		(1 << 10)
/** SCB_SHCSR_SVCALLACT SVCall exception active state **/
#define SCB_SHCSR_SVCALLACT		(1 << 7)
/** SCB_SHCSR_NMIACT NMI exception active state **/
#define SCB_SHCSR_NMIACT		(1 << 5)
/** SCB_SHCSR_HARDFAULTACT HardFault exception active state **/
#define SCB_SHCSR_HARDFAULTACT		(1 << 2)

/**@}*/

/** @defgroup scb_dfsr DFSR Debug Fault Status Register
@{*/

/** SCB_DFSR_EXTERNAL External event **/
#define SCB_DFSR_EXTERNAL		(1 << 4)
/** SCB_DFSR_VCATCH Vector Catch event **/
#define SCB_DFSR_VCATCH		(1 << 3)
/** SCB_DFSR_DWTTRAP Watchpoint event **/
#define SCB_DFSR_DWTTRAP		(1 << 2)
/** SCB_DFSR_BKPT Breakpoint event **/
#define SCB_DFSR_BKPT		(1 << 1)
/** SCB_DFSR_HALTED Halt or step event **/
#define SCB_DFSR_HALTED		(1 << 0)

/**@}*/

/** @defgroup scb_afsr AFSR Auxiliary Fault Status Register
@{*/


/**@}*/

/** @defgroup scb_clidr CLIDR Cache Level ID Register
@{*/


#define SCB_CLIDR_ICB_SHIFT		30
#define SCB_CLIDR_ICB_MASK		0x03
/** @defgroup scb_clidr_icb ICB Inner cache boundary
@{*/
/**@}*/


#define SCB_CLIDR_LoUU_SHIFT		27
#define SCB_CLIDR_LoUU_MASK		0x07
/** @defgroup scb_clidr_louu LoUU Level of Unification Uniprocessor
@{*/
/**@}*/


#define SCB_CLIDR_LoC_SHIFT		24
#define SCB_CLIDR_LoC_MASK		0x07
/** @defgroup scb_clidr_loc LoC Level of Coherence
@{*/
/**@}*/


#define SCB_CLIDR_LoUIS_SHIFT		21
#define SCB_CLIDR_LoUIS_MASK		0x07
/** @defgroup scb_clidr_louis LoUIS Level of Unification Inner Shareable
@{*/
/**@}*/


#define SCB_CLIDR_Ctype7_SHIFT		18
#define SCB_CLIDR_Ctype7_MASK		0x07
/** @defgroup scb_clidr_ctype7 Ctype7 Cache type at level 7
@{*/
/**@}*/


#define SCB_CLIDR_Ctype6_SHIFT		15
#define SCB_CLIDR_Ctype6_MASK		0x07
/** @defgroup scb_clidr_ctype6 Ctype6 Cache type at level 6
@{*/
/**@}*/


#define SCB_CLIDR_Ctype5_SHIFT		12
#define SCB_CLIDR_Ctype5_MASK		0x07
/** @defgroup scb_clidr_ctype5 Ctype5 Cache type at level 5
@{*/
/**@}*/


#define SCB_CLIDR_Ctype4_SHIFT		9
#define SCB_CLIDR_Ctype4_MASK		0x07
/** @defgroup scb_clidr_ctype4 Ctype4 Cache type at level 4
@{*/
/**@}*/


#define SCB_CLIDR_Ctype3_SHIFT		6
#define SCB_CLIDR_Ctype3_MASK		0x07
/** @defgroup scb_clidr_ctype3 Ctype3 Cache type at level 3
@{*/
/**@}*/


#define SCB_CLIDR_Ctype2_SHIFT		3
#define SCB_CLIDR_Ctype2_MASK		0x07
/** @defgroup scb_clidr_ctype2 Ctype2 Cache type at level 2
@{*/
/**@}*/


#define SCB_CLIDR_Ctype1_SHIFT		0
#define SCB_CLIDR_Ctype1_MASK		0x07
/** @defgroup scb_clidr_ctype1 Ctype1 Cache type at level 1
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_ctr CTR Cache Type Register
@{*/


#define SCB_CTR_Format_SHIFT		29
#define SCB_CTR_Format_MASK		0x07
/** @defgroup scb_ctr_format Format Cache Type Register format
@{*/
/**@}*/


#define SCB_CTR_CWG_SHIFT		24
#define SCB_CTR_CWG_MASK		0x0f
/** @defgroup scb_ctr_cwg CWG Cache Write-back Granule
@{*/
/**@}*/


#define SCB_CTR_ERG_SHIFT		20
#define SCB_CTR_ERG_MASK		0x0f
/** @defgroup scb_ctr_erg ERG Exclusives Reservation Granule
@{*/
/**@}*/


#define SCB_CTR_DminLine_SHIFT		16
#define SCB_CTR_DminLine_MASK		0x0f
/** @defgroup scb_ctr_dminline DminLine Data cache minimum line length
@{*/
/**@}*/


#define SCB_CTR_IminLine_SHIFT		0
#define SCB_CTR_IminLine_MASK		0x0f
/** @defgroup scb_ctr_iminline IminLine Instruction cache minimum line length
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_ccsidr CCSIDR Current Cache Size ID register
@{*/

/** SCB_CCSIDR_WT Write-Through **/
#define SCB_CCSIDR_WT		(1 << 31)
/** SCB_CCSIDR_WB Write-Back **/
#define SCB_CCSIDR_WB		(1 << 30)
/** SCB_CCSIDR_RA Read-Allocate **/
#define SCB_CCSIDR_RA		(1 << 29)
/** SCB_CCSIDR_WA Write-Allocate **/
#define SCB_CCSIDR_WA		(1 << 28)

#define SCB_CCSIDR_NumSets_SHIFT		13
#define SCB_CCSIDR_NumSets_MASK		0x7fff
/** @defgroup scb_ccsidr_numsets NumSets Number of sets - 1
@{*/
/**@}*/


#define SCB_CCSIDR_Associativity_SHIFT		3
#define SCB_CCSIDR_Associativity_MASK		0x3ff
/** @defgroup scb_ccsidr_associativity Associativity Associativity - 1
@{*/
/**@}*/


#define SCB_CCSIDR_LineSize_SHIFT		0
#define SCB_CCSIDR_LineSize_MASK		0x07
/** @defgroup scb_ccsidr_linesize LineSize log2(number of words per line) - 2
@{*/
/**@}*/


/**@}*/

/** @defgroup scb_csselr CSSELR Cache Size Selection Register
@{*/


#define SCB_CSSELR_Level_SHIFT		1
#define SCB_CSSELR_Level_MASK		0x07
/** @defgroup scb_csselr_level Level Cache level - 1
@{*/
/**@}*/

/** SCB_CSSELR_InD Instruction not Data **/
#define SCB_CSSELR_InD		(1 << 0)

/**@}*/

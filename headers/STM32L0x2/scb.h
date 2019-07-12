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
/** SCB_SHPR2 System handler priority registers **/
#define SCB_SHPR2			MMIO32(SCB_BASE + 0x1c)
/** SCB_SHPR3 System handler priority registers **/
#define SCB_SHPR3			MMIO32(SCB_BASE + 0x20)

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


#define SCB_CPUID_Architecture_SHIFT		16
#define SCB_CPUID_Architecture_MASK		0x0f
/** @defgroup scb_cpuid_architecture Architecture Reads as 0xF
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


#define SCB_VTOR_TBLOFF_SHIFT		7
#define SCB_VTOR_TBLOFF_MASK		0x1ffffff
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
/** SCB_AIRCR_SYSRESETREQ SYSRESETREQ **/
#define SCB_AIRCR_SYSRESETREQ		(1 << 2)
/** SCB_AIRCR_VECTCLRACTIVE VECTCLRACTIVE **/
#define SCB_AIRCR_VECTCLRACTIVE		(1 << 1)

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

#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt Controller Register
@{*/

/** NVIC_NVIC_ISER[0] Interrupt Set Enable Register n **/
#define NVIC_NVIC_ISER[0]			MMIO32(NVIC_BASE + 0x00)
/** NVIC_NVIC_ISER[1] Interrupt Set Enable Register n **/
#define NVIC_NVIC_ISER[1]			MMIO32(NVIC_BASE + 0x04)
/** NVIC_NVIC_ICER[0] Interrupt Clear Enable Register n **/
#define NVIC_NVIC_ICER[0]			MMIO32(NVIC_BASE + 0x80)
/** NVIC_NVIC_ICER[1] Interrupt Clear Enable Register n **/
#define NVIC_NVIC_ICER[1]			MMIO32(NVIC_BASE + 0x84)
/** NVIC_NVIC_ISPR[0] Interrupt Set Pending Register n **/
#define NVIC_NVIC_ISPR[0]			MMIO32(NVIC_BASE + 0x100)
/** NVIC_NVIC_ISPR[1] Interrupt Set Pending Register n **/
#define NVIC_NVIC_ISPR[1]			MMIO32(NVIC_BASE + 0x104)
/** NVIC_NVIC_ICPR[0] Interrupt Clear Pending Register n **/
#define NVIC_NVIC_ICPR[0]			MMIO32(NVIC_BASE + 0x180)
/** NVIC_NVIC_ICPR[1] Interrupt Clear Pending Register n **/
#define NVIC_NVIC_ICPR[1]			MMIO32(NVIC_BASE + 0x184)
/** NVIC_NVIC_IABR[0] Interrupt Active Bit Register n **/
#define NVIC_NVIC_IABR[0]			MMIO32(NVIC_BASE + 0x200)
/** NVIC_NVIC_IABR[1] Interrupt Active Bit Register n **/
#define NVIC_NVIC_IABR[1]			MMIO32(NVIC_BASE + 0x204)
/** NVIC_NVIC_ITNS[0] Interrupt Target Non-secure Register n **/
#define NVIC_NVIC_ITNS[0]			MMIO32(NVIC_BASE + 0x280)
/** NVIC_NVIC_ITNS[1] Interrupt Target Non-secure Register n **/
#define NVIC_NVIC_ITNS[1]			MMIO32(NVIC_BASE + 0x284)
/** NVIC_NVIC_IPR[0] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[0]			MMIO32(NVIC_BASE + 0x300)
/** NVIC_NVIC_IPR[1] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[1]			MMIO32(NVIC_BASE + 0x304)
/** NVIC_NVIC_IPR[2] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[2]			MMIO32(NVIC_BASE + 0x308)
/** NVIC_NVIC_IPR[3] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[3]			MMIO32(NVIC_BASE + 0x30c)
/** NVIC_NVIC_IPR[4] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[4]			MMIO32(NVIC_BASE + 0x310)
/** NVIC_NVIC_IPR[5] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[5]			MMIO32(NVIC_BASE + 0x314)
/** NVIC_NVIC_IPR[6] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[6]			MMIO32(NVIC_BASE + 0x318)
/** NVIC_NVIC_IPR[7] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[7]			MMIO32(NVIC_BASE + 0x31c)
/** NVIC_NVIC_IPR[8] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[8]			MMIO32(NVIC_BASE + 0x320)
/** NVIC_NVIC_IPR[9] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[9]			MMIO32(NVIC_BASE + 0x324)
/** NVIC_NVIC_IPR[10] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[10]			MMIO32(NVIC_BASE + 0x328)
/** NVIC_NVIC_IPR[11] Interrupt Priority Register n **/
#define NVIC_NVIC_IPR[11]			MMIO32(NVIC_BASE + 0x32c)

/**@}*/


/** @defgroup nvic_nvic_iser[0] NVICISER[0] Interrupt Set Enable Register n
@{*/


#define NVIC_NVIC_ISER[0]_SETENA_SHIFT		0
#define NVIC_NVIC_ISER[0]_SETENA_MASK		0xffffffff
/** @defgroup nvic_nvic_iser[0]_setena SETENA Set enable
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_iser[1] NVICISER[1] Interrupt Set Enable Register n
@{*/


#define NVIC_NVIC_ISER[1]_SETENA_SHIFT		0
#define NVIC_NVIC_ISER[1]_SETENA_MASK		0xffffffff
/** @defgroup nvic_nvic_iser[1]_setena SETENA Set enable
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_icer[0] NVICICER[0] Interrupt Clear Enable Register n
@{*/


#define NVIC_NVIC_ICER[0]_CLRENA_SHIFT		0
#define NVIC_NVIC_ICER[0]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_nvic_icer[0]_clrena CLRENA Clear enable
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_icer[1] NVICICER[1] Interrupt Clear Enable Register n
@{*/


#define NVIC_NVIC_ICER[1]_CLRENA_SHIFT		0
#define NVIC_NVIC_ICER[1]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_nvic_icer[1]_clrena CLRENA Clear enable
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ispr[0] NVICISPR[0] Interrupt Set Pending Register n
@{*/


#define NVIC_NVIC_ISPR[0]_SETPEND_SHIFT		0
#define NVIC_NVIC_ISPR[0]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_nvic_ispr[0]_setpend SETPEND Set pending
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ispr[1] NVICISPR[1] Interrupt Set Pending Register n
@{*/


#define NVIC_NVIC_ISPR[1]_SETPEND_SHIFT		0
#define NVIC_NVIC_ISPR[1]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_nvic_ispr[1]_setpend SETPEND Set pending
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_icpr[0] NVICICPR[0] Interrupt Clear Pending Register n
@{*/


#define NVIC_NVIC_ICPR[0]_CLRPEND_SHIFT		0
#define NVIC_NVIC_ICPR[0]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_nvic_icpr[0]_clrpend CLRPEND Clear pending
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_icpr[1] NVICICPR[1] Interrupt Clear Pending Register n
@{*/


#define NVIC_NVIC_ICPR[1]_CLRPEND_SHIFT		0
#define NVIC_NVIC_ICPR[1]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_nvic_icpr[1]_clrpend CLRPEND Clear pending
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_iabr[0] NVICIABR[0] Interrupt Active Bit Register n
@{*/


#define NVIC_NVIC_IABR[0]_ACTIVE_SHIFT		0
#define NVIC_NVIC_IABR[0]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_nvic_iabr[0]_active ACTIVE Active state
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_iabr[1] NVICIABR[1] Interrupt Active Bit Register n
@{*/


#define NVIC_NVIC_IABR[1]_ACTIVE_SHIFT		0
#define NVIC_NVIC_IABR[1]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_nvic_iabr[1]_active ACTIVE Active state
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_itns[0] NVICITNS[0] Interrupt Target Non-secure Register n
@{*/


#define NVIC_NVIC_ITNS[0]_ITNS_SHIFT		0
#define NVIC_NVIC_ITNS[0]_ITNS_MASK		0xffffffff
/** @defgroup nvic_nvic_itns[0]_itns ITNS Interrupt Targets Non-secure
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_itns[1] NVICITNS[1] Interrupt Target Non-secure Register n
@{*/


#define NVIC_NVIC_ITNS[1]_ITNS_SHIFT		0
#define NVIC_NVIC_ITNS[1]_ITNS_MASK		0xffffffff
/** @defgroup nvic_nvic_itns[1]_itns ITNS Interrupt Targets Non-secure
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[0] NVICIPR[0] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[0]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[0]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[0]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[0]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[0]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[0]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[0]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[0]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[0]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[0]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[0]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[0]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[1] NVICIPR[1] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[1]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[1]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[1]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[1]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[1]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[1]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[1]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[1]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[1]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[1]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[1]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[1]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[2] NVICIPR[2] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[2]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[2]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[2]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[2]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[2]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[2]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[2]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[2]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[2]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[2]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[2]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[2]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[3] NVICIPR[3] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[3]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[3]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[3]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[3]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[3]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[3]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[3]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[3]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[3]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[3]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[3]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[3]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[4] NVICIPR[4] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[4]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[4]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[4]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[4]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[4]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[4]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[4]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[4]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[4]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[4]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[4]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[4]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[5] NVICIPR[5] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[5]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[5]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[5]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[5]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[5]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[5]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[5]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[5]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[5]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[5]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[5]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[5]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[6] NVICIPR[6] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[6]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[6]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[6]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[6]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[6]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[6]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[6]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[6]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[6]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[6]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[6]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[6]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[7] NVICIPR[7] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[7]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[7]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[7]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[7]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[7]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[7]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[7]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[7]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[7]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[7]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[7]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[7]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[8] NVICIPR[8] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[8]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[8]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[8]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[8]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[8]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[8]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[8]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[8]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[8]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[8]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[8]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[8]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[9] NVICIPR[9] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[9]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[9]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[9]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[9]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[9]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[9]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[9]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[9]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[9]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[9]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[9]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[9]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[10] NVICIPR[10] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[10]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[10]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[10]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[10]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[10]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[10]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[10]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[10]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[10]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[10]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[10]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[10]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_nvic_ipr[11] NVICIPR[11] Interrupt Priority Register n
@{*/


#define NVIC_NVIC_IPR[11]_PRI_N3_SHIFT		24
#define NVIC_NVIC_IPR[11]_PRI_N3_MASK		0xff
/** @defgroup nvic_nvic_ipr[11]_pri_n3 PRIN3 Priority of interrupt number 4n+3
@{*/
/**@}*/


#define NVIC_NVIC_IPR[11]_PRI_N2_SHIFT		16
#define NVIC_NVIC_IPR[11]_PRI_N2_MASK		0xff
/** @defgroup nvic_nvic_ipr[11]_pri_n2 PRIN2 Priority of interrupt number 4n+2
@{*/
/**@}*/


#define NVIC_NVIC_IPR[11]_PRI_N1_SHIFT		8
#define NVIC_NVIC_IPR[11]_PRI_N1_MASK		0xff
/** @defgroup nvic_nvic_ipr[11]_pri_n1 PRIN1 Priority of interrupt number 4n+1
@{*/
/**@}*/


#define NVIC_NVIC_IPR[11]_PRI_N0_SHIFT		0
#define NVIC_NVIC_IPR[11]_PRI_N0_MASK		0xff
/** @defgroup nvic_nvic_ipr[11]_pri_n0 PRIN0 Priority of interrupt number 4n+0
@{*/
/**@}*/


/**@}*/

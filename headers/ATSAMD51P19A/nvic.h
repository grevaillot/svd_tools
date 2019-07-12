#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt Controller Register
@{*/

/** NVIC_ISER[0] Interrupt Set Enable Register **/
#define NVIC_ISER[0]			MMIO32(NVIC_BASE + 0x00)
/** NVIC_ISER[1] Interrupt Set Enable Register **/
#define NVIC_ISER[1]			MMIO32(NVIC_BASE + 0x04)
/** NVIC_ISER[2] Interrupt Set Enable Register **/
#define NVIC_ISER[2]			MMIO32(NVIC_BASE + 0x08)
/** NVIC_ISER[3] Interrupt Set Enable Register **/
#define NVIC_ISER[3]			MMIO32(NVIC_BASE + 0x0c)
/** NVIC_ISER[4] Interrupt Set Enable Register **/
#define NVIC_ISER[4]			MMIO32(NVIC_BASE + 0x10)
/** NVIC_ICER[0] Interrupt Clear Enable Register **/
#define NVIC_ICER[0]			MMIO32(NVIC_BASE + 0x80)
/** NVIC_ICER[1] Interrupt Clear Enable Register **/
#define NVIC_ICER[1]			MMIO32(NVIC_BASE + 0x84)
/** NVIC_ICER[2] Interrupt Clear Enable Register **/
#define NVIC_ICER[2]			MMIO32(NVIC_BASE + 0x88)
/** NVIC_ICER[3] Interrupt Clear Enable Register **/
#define NVIC_ICER[3]			MMIO32(NVIC_BASE + 0x8c)
/** NVIC_ICER[4] Interrupt Clear Enable Register **/
#define NVIC_ICER[4]			MMIO32(NVIC_BASE + 0x90)
/** NVIC_ISPR[0] Interrupt Set Pending Register **/
#define NVIC_ISPR[0]			MMIO32(NVIC_BASE + 0x100)
/** NVIC_ISPR[1] Interrupt Set Pending Register **/
#define NVIC_ISPR[1]			MMIO32(NVIC_BASE + 0x104)
/** NVIC_ISPR[2] Interrupt Set Pending Register **/
#define NVIC_ISPR[2]			MMIO32(NVIC_BASE + 0x108)
/** NVIC_ISPR[3] Interrupt Set Pending Register **/
#define NVIC_ISPR[3]			MMIO32(NVIC_BASE + 0x10c)
/** NVIC_ISPR[4] Interrupt Set Pending Register **/
#define NVIC_ISPR[4]			MMIO32(NVIC_BASE + 0x110)
/** NVIC_ICPR[0] Interrupt Clear Pending Register **/
#define NVIC_ICPR[0]			MMIO32(NVIC_BASE + 0x180)
/** NVIC_ICPR[1] Interrupt Clear Pending Register **/
#define NVIC_ICPR[1]			MMIO32(NVIC_BASE + 0x184)
/** NVIC_ICPR[2] Interrupt Clear Pending Register **/
#define NVIC_ICPR[2]			MMIO32(NVIC_BASE + 0x188)
/** NVIC_ICPR[3] Interrupt Clear Pending Register **/
#define NVIC_ICPR[3]			MMIO32(NVIC_BASE + 0x18c)
/** NVIC_ICPR[4] Interrupt Clear Pending Register **/
#define NVIC_ICPR[4]			MMIO32(NVIC_BASE + 0x190)
/** NVIC_IABR[0] Interrupt Active Bit Register **/
#define NVIC_IABR[0]			MMIO32(NVIC_BASE + 0x200)
/** NVIC_IABR[1] Interrupt Active Bit Register **/
#define NVIC_IABR[1]			MMIO32(NVIC_BASE + 0x204)
/** NVIC_IABR[2] Interrupt Active Bit Register **/
#define NVIC_IABR[2]			MMIO32(NVIC_BASE + 0x208)
/** NVIC_IABR[3] Interrupt Active Bit Register **/
#define NVIC_IABR[3]			MMIO32(NVIC_BASE + 0x20c)
/** NVIC_IABR[4] Interrupt Active Bit Register **/
#define NVIC_IABR[4]			MMIO32(NVIC_BASE + 0x210)
/** NVIC_IP[0] Interrupt Priority Register n **/
#define NVIC_IP[0]			MMIO32(NVIC_BASE + 0x300)
/** NVIC_IP[1] Interrupt Priority Register n **/
#define NVIC_IP[1]			MMIO32(NVIC_BASE + 0x301)
/** NVIC_IP[2] Interrupt Priority Register n **/
#define NVIC_IP[2]			MMIO32(NVIC_BASE + 0x302)
/** NVIC_IP[3] Interrupt Priority Register n **/
#define NVIC_IP[3]			MMIO32(NVIC_BASE + 0x303)
/** NVIC_IP[4] Interrupt Priority Register n **/
#define NVIC_IP[4]			MMIO32(NVIC_BASE + 0x304)
/** NVIC_IP[5] Interrupt Priority Register n **/
#define NVIC_IP[5]			MMIO32(NVIC_BASE + 0x305)
/** NVIC_IP[6] Interrupt Priority Register n **/
#define NVIC_IP[6]			MMIO32(NVIC_BASE + 0x306)
/** NVIC_IP[7] Interrupt Priority Register n **/
#define NVIC_IP[7]			MMIO32(NVIC_BASE + 0x307)
/** NVIC_IP[8] Interrupt Priority Register n **/
#define NVIC_IP[8]			MMIO32(NVIC_BASE + 0x308)
/** NVIC_IP[9] Interrupt Priority Register n **/
#define NVIC_IP[9]			MMIO32(NVIC_BASE + 0x309)
/** NVIC_IP[10] Interrupt Priority Register n **/
#define NVIC_IP[10]			MMIO32(NVIC_BASE + 0x30a)
/** NVIC_IP[11] Interrupt Priority Register n **/
#define NVIC_IP[11]			MMIO32(NVIC_BASE + 0x30b)
/** NVIC_IP[12] Interrupt Priority Register n **/
#define NVIC_IP[12]			MMIO32(NVIC_BASE + 0x30c)
/** NVIC_IP[13] Interrupt Priority Register n **/
#define NVIC_IP[13]			MMIO32(NVIC_BASE + 0x30d)
/** NVIC_IP[14] Interrupt Priority Register n **/
#define NVIC_IP[14]			MMIO32(NVIC_BASE + 0x30e)
/** NVIC_IP[15] Interrupt Priority Register n **/
#define NVIC_IP[15]			MMIO32(NVIC_BASE + 0x30f)
/** NVIC_IP[16] Interrupt Priority Register n **/
#define NVIC_IP[16]			MMIO32(NVIC_BASE + 0x310)
/** NVIC_IP[17] Interrupt Priority Register n **/
#define NVIC_IP[17]			MMIO32(NVIC_BASE + 0x311)
/** NVIC_IP[18] Interrupt Priority Register n **/
#define NVIC_IP[18]			MMIO32(NVIC_BASE + 0x312)
/** NVIC_IP[19] Interrupt Priority Register n **/
#define NVIC_IP[19]			MMIO32(NVIC_BASE + 0x313)
/** NVIC_IP[20] Interrupt Priority Register n **/
#define NVIC_IP[20]			MMIO32(NVIC_BASE + 0x314)
/** NVIC_IP[21] Interrupt Priority Register n **/
#define NVIC_IP[21]			MMIO32(NVIC_BASE + 0x315)
/** NVIC_IP[22] Interrupt Priority Register n **/
#define NVIC_IP[22]			MMIO32(NVIC_BASE + 0x316)
/** NVIC_IP[23] Interrupt Priority Register n **/
#define NVIC_IP[23]			MMIO32(NVIC_BASE + 0x317)
/** NVIC_IP[24] Interrupt Priority Register n **/
#define NVIC_IP[24]			MMIO32(NVIC_BASE + 0x318)
/** NVIC_IP[25] Interrupt Priority Register n **/
#define NVIC_IP[25]			MMIO32(NVIC_BASE + 0x319)
/** NVIC_IP[26] Interrupt Priority Register n **/
#define NVIC_IP[26]			MMIO32(NVIC_BASE + 0x31a)
/** NVIC_IP[27] Interrupt Priority Register n **/
#define NVIC_IP[27]			MMIO32(NVIC_BASE + 0x31b)
/** NVIC_IP[28] Interrupt Priority Register n **/
#define NVIC_IP[28]			MMIO32(NVIC_BASE + 0x31c)
/** NVIC_IP[29] Interrupt Priority Register n **/
#define NVIC_IP[29]			MMIO32(NVIC_BASE + 0x31d)
/** NVIC_IP[30] Interrupt Priority Register n **/
#define NVIC_IP[30]			MMIO32(NVIC_BASE + 0x31e)
/** NVIC_IP[31] Interrupt Priority Register n **/
#define NVIC_IP[31]			MMIO32(NVIC_BASE + 0x31f)
/** NVIC_IP[32] Interrupt Priority Register n **/
#define NVIC_IP[32]			MMIO32(NVIC_BASE + 0x320)
/** NVIC_IP[33] Interrupt Priority Register n **/
#define NVIC_IP[33]			MMIO32(NVIC_BASE + 0x321)
/** NVIC_IP[34] Interrupt Priority Register n **/
#define NVIC_IP[34]			MMIO32(NVIC_BASE + 0x322)
/** NVIC_STIR Software Trigger Interrupt Register **/
#define NVIC_STIR			MMIO32(NVIC_BASE + 0xe00)

/**@}*/


/** @defgroup nvic_iser[0] ISER[0] Interrupt Set Enable Register
@{*/


#define NVIC_ISER[0]_SETENA_SHIFT		0
#define NVIC_ISER[0]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[0]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[1] ISER[1] Interrupt Set Enable Register
@{*/


#define NVIC_ISER[1]_SETENA_SHIFT		0
#define NVIC_ISER[1]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[1]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[2] ISER[2] Interrupt Set Enable Register
@{*/


#define NVIC_ISER[2]_SETENA_SHIFT		0
#define NVIC_ISER[2]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[2]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[3] ISER[3] Interrupt Set Enable Register
@{*/


#define NVIC_ISER[3]_SETENA_SHIFT		0
#define NVIC_ISER[3]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[3]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[4] ISER[4] Interrupt Set Enable Register
@{*/


#define NVIC_ISER[4]_SETENA_SHIFT		0
#define NVIC_ISER[4]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[4]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[0] ICER[0] Interrupt Clear Enable Register
@{*/


#define NVIC_ICER[0]_CLRENA_SHIFT		0
#define NVIC_ICER[0]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[0]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[1] ICER[1] Interrupt Clear Enable Register
@{*/


#define NVIC_ICER[1]_CLRENA_SHIFT		0
#define NVIC_ICER[1]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[1]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[2] ICER[2] Interrupt Clear Enable Register
@{*/


#define NVIC_ICER[2]_CLRENA_SHIFT		0
#define NVIC_ICER[2]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[2]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[3] ICER[3] Interrupt Clear Enable Register
@{*/


#define NVIC_ICER[3]_CLRENA_SHIFT		0
#define NVIC_ICER[3]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[3]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[4] ICER[4] Interrupt Clear Enable Register
@{*/


#define NVIC_ICER[4]_CLRENA_SHIFT		0
#define NVIC_ICER[4]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[4]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[0] ISPR[0] Interrupt Set Pending Register
@{*/


#define NVIC_ISPR[0]_SETPEND_SHIFT		0
#define NVIC_ISPR[0]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[0]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[1] ISPR[1] Interrupt Set Pending Register
@{*/


#define NVIC_ISPR[1]_SETPEND_SHIFT		0
#define NVIC_ISPR[1]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[1]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[2] ISPR[2] Interrupt Set Pending Register
@{*/


#define NVIC_ISPR[2]_SETPEND_SHIFT		0
#define NVIC_ISPR[2]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[2]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[3] ISPR[3] Interrupt Set Pending Register
@{*/


#define NVIC_ISPR[3]_SETPEND_SHIFT		0
#define NVIC_ISPR[3]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[3]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[4] ISPR[4] Interrupt Set Pending Register
@{*/


#define NVIC_ISPR[4]_SETPEND_SHIFT		0
#define NVIC_ISPR[4]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[4]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[0] ICPR[0] Interrupt Clear Pending Register
@{*/


#define NVIC_ICPR[0]_CLRPEND_SHIFT		0
#define NVIC_ICPR[0]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[0]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[1] ICPR[1] Interrupt Clear Pending Register
@{*/


#define NVIC_ICPR[1]_CLRPEND_SHIFT		0
#define NVIC_ICPR[1]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[1]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[2] ICPR[2] Interrupt Clear Pending Register
@{*/


#define NVIC_ICPR[2]_CLRPEND_SHIFT		0
#define NVIC_ICPR[2]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[2]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[3] ICPR[3] Interrupt Clear Pending Register
@{*/


#define NVIC_ICPR[3]_CLRPEND_SHIFT		0
#define NVIC_ICPR[3]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[3]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[4] ICPR[4] Interrupt Clear Pending Register
@{*/


#define NVIC_ICPR[4]_CLRPEND_SHIFT		0
#define NVIC_ICPR[4]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[4]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[0] IABR[0] Interrupt Active Bit Register
@{*/


#define NVIC_IABR[0]_ACTIVE_SHIFT		0
#define NVIC_IABR[0]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[0]_active ACTIVE Interrupt active bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[1] IABR[1] Interrupt Active Bit Register
@{*/


#define NVIC_IABR[1]_ACTIVE_SHIFT		0
#define NVIC_IABR[1]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[1]_active ACTIVE Interrupt active bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[2] IABR[2] Interrupt Active Bit Register
@{*/


#define NVIC_IABR[2]_ACTIVE_SHIFT		0
#define NVIC_IABR[2]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[2]_active ACTIVE Interrupt active bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[3] IABR[3] Interrupt Active Bit Register
@{*/


#define NVIC_IABR[3]_ACTIVE_SHIFT		0
#define NVIC_IABR[3]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[3]_active ACTIVE Interrupt active bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[4] IABR[4] Interrupt Active Bit Register
@{*/


#define NVIC_IABR[4]_ACTIVE_SHIFT		0
#define NVIC_IABR[4]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[4]_active ACTIVE Interrupt active bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[0] IP[0] Interrupt Priority Register n
@{*/


#define NVIC_IP[0]_PRI0_SHIFT		0
#define NVIC_IP[0]_PRI0_MASK		0x07
/** @defgroup nvic_ip[0]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[1] IP[1] Interrupt Priority Register n
@{*/


#define NVIC_IP[1]_PRI0_SHIFT		0
#define NVIC_IP[1]_PRI0_MASK		0x07
/** @defgroup nvic_ip[1]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[2] IP[2] Interrupt Priority Register n
@{*/


#define NVIC_IP[2]_PRI0_SHIFT		0
#define NVIC_IP[2]_PRI0_MASK		0x07
/** @defgroup nvic_ip[2]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[3] IP[3] Interrupt Priority Register n
@{*/


#define NVIC_IP[3]_PRI0_SHIFT		0
#define NVIC_IP[3]_PRI0_MASK		0x07
/** @defgroup nvic_ip[3]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[4] IP[4] Interrupt Priority Register n
@{*/


#define NVIC_IP[4]_PRI0_SHIFT		0
#define NVIC_IP[4]_PRI0_MASK		0x07
/** @defgroup nvic_ip[4]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[5] IP[5] Interrupt Priority Register n
@{*/


#define NVIC_IP[5]_PRI0_SHIFT		0
#define NVIC_IP[5]_PRI0_MASK		0x07
/** @defgroup nvic_ip[5]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[6] IP[6] Interrupt Priority Register n
@{*/


#define NVIC_IP[6]_PRI0_SHIFT		0
#define NVIC_IP[6]_PRI0_MASK		0x07
/** @defgroup nvic_ip[6]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[7] IP[7] Interrupt Priority Register n
@{*/


#define NVIC_IP[7]_PRI0_SHIFT		0
#define NVIC_IP[7]_PRI0_MASK		0x07
/** @defgroup nvic_ip[7]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[8] IP[8] Interrupt Priority Register n
@{*/


#define NVIC_IP[8]_PRI0_SHIFT		0
#define NVIC_IP[8]_PRI0_MASK		0x07
/** @defgroup nvic_ip[8]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[9] IP[9] Interrupt Priority Register n
@{*/


#define NVIC_IP[9]_PRI0_SHIFT		0
#define NVIC_IP[9]_PRI0_MASK		0x07
/** @defgroup nvic_ip[9]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[10] IP[10] Interrupt Priority Register n
@{*/


#define NVIC_IP[10]_PRI0_SHIFT		0
#define NVIC_IP[10]_PRI0_MASK		0x07
/** @defgroup nvic_ip[10]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[11] IP[11] Interrupt Priority Register n
@{*/


#define NVIC_IP[11]_PRI0_SHIFT		0
#define NVIC_IP[11]_PRI0_MASK		0x07
/** @defgroup nvic_ip[11]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[12] IP[12] Interrupt Priority Register n
@{*/


#define NVIC_IP[12]_PRI0_SHIFT		0
#define NVIC_IP[12]_PRI0_MASK		0x07
/** @defgroup nvic_ip[12]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[13] IP[13] Interrupt Priority Register n
@{*/


#define NVIC_IP[13]_PRI0_SHIFT		0
#define NVIC_IP[13]_PRI0_MASK		0x07
/** @defgroup nvic_ip[13]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[14] IP[14] Interrupt Priority Register n
@{*/


#define NVIC_IP[14]_PRI0_SHIFT		0
#define NVIC_IP[14]_PRI0_MASK		0x07
/** @defgroup nvic_ip[14]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[15] IP[15] Interrupt Priority Register n
@{*/


#define NVIC_IP[15]_PRI0_SHIFT		0
#define NVIC_IP[15]_PRI0_MASK		0x07
/** @defgroup nvic_ip[15]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[16] IP[16] Interrupt Priority Register n
@{*/


#define NVIC_IP[16]_PRI0_SHIFT		0
#define NVIC_IP[16]_PRI0_MASK		0x07
/** @defgroup nvic_ip[16]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[17] IP[17] Interrupt Priority Register n
@{*/


#define NVIC_IP[17]_PRI0_SHIFT		0
#define NVIC_IP[17]_PRI0_MASK		0x07
/** @defgroup nvic_ip[17]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[18] IP[18] Interrupt Priority Register n
@{*/


#define NVIC_IP[18]_PRI0_SHIFT		0
#define NVIC_IP[18]_PRI0_MASK		0x07
/** @defgroup nvic_ip[18]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[19] IP[19] Interrupt Priority Register n
@{*/


#define NVIC_IP[19]_PRI0_SHIFT		0
#define NVIC_IP[19]_PRI0_MASK		0x07
/** @defgroup nvic_ip[19]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[20] IP[20] Interrupt Priority Register n
@{*/


#define NVIC_IP[20]_PRI0_SHIFT		0
#define NVIC_IP[20]_PRI0_MASK		0x07
/** @defgroup nvic_ip[20]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[21] IP[21] Interrupt Priority Register n
@{*/


#define NVIC_IP[21]_PRI0_SHIFT		0
#define NVIC_IP[21]_PRI0_MASK		0x07
/** @defgroup nvic_ip[21]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[22] IP[22] Interrupt Priority Register n
@{*/


#define NVIC_IP[22]_PRI0_SHIFT		0
#define NVIC_IP[22]_PRI0_MASK		0x07
/** @defgroup nvic_ip[22]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[23] IP[23] Interrupt Priority Register n
@{*/


#define NVIC_IP[23]_PRI0_SHIFT		0
#define NVIC_IP[23]_PRI0_MASK		0x07
/** @defgroup nvic_ip[23]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[24] IP[24] Interrupt Priority Register n
@{*/


#define NVIC_IP[24]_PRI0_SHIFT		0
#define NVIC_IP[24]_PRI0_MASK		0x07
/** @defgroup nvic_ip[24]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[25] IP[25] Interrupt Priority Register n
@{*/


#define NVIC_IP[25]_PRI0_SHIFT		0
#define NVIC_IP[25]_PRI0_MASK		0x07
/** @defgroup nvic_ip[25]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[26] IP[26] Interrupt Priority Register n
@{*/


#define NVIC_IP[26]_PRI0_SHIFT		0
#define NVIC_IP[26]_PRI0_MASK		0x07
/** @defgroup nvic_ip[26]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[27] IP[27] Interrupt Priority Register n
@{*/


#define NVIC_IP[27]_PRI0_SHIFT		0
#define NVIC_IP[27]_PRI0_MASK		0x07
/** @defgroup nvic_ip[27]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[28] IP[28] Interrupt Priority Register n
@{*/


#define NVIC_IP[28]_PRI0_SHIFT		0
#define NVIC_IP[28]_PRI0_MASK		0x07
/** @defgroup nvic_ip[28]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[29] IP[29] Interrupt Priority Register n
@{*/


#define NVIC_IP[29]_PRI0_SHIFT		0
#define NVIC_IP[29]_PRI0_MASK		0x07
/** @defgroup nvic_ip[29]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[30] IP[30] Interrupt Priority Register n
@{*/


#define NVIC_IP[30]_PRI0_SHIFT		0
#define NVIC_IP[30]_PRI0_MASK		0x07
/** @defgroup nvic_ip[30]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[31] IP[31] Interrupt Priority Register n
@{*/


#define NVIC_IP[31]_PRI0_SHIFT		0
#define NVIC_IP[31]_PRI0_MASK		0x07
/** @defgroup nvic_ip[31]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[32] IP[32] Interrupt Priority Register n
@{*/


#define NVIC_IP[32]_PRI0_SHIFT		0
#define NVIC_IP[32]_PRI0_MASK		0x07
/** @defgroup nvic_ip[32]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[33] IP[33] Interrupt Priority Register n
@{*/


#define NVIC_IP[33]_PRI0_SHIFT		0
#define NVIC_IP[33]_PRI0_MASK		0x07
/** @defgroup nvic_ip[33]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[34] IP[34] Interrupt Priority Register n
@{*/


#define NVIC_IP[34]_PRI0_SHIFT		0
#define NVIC_IP[34]_PRI0_MASK		0x07
/** @defgroup nvic_ip[34]_pri0 PRI0 Priority of interrupt n
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_stir STIR Software Trigger Interrupt Register
@{*/


#define NVIC_STIR_INTID_SHIFT		0
#define NVIC_STIR_INTID_MASK		0x1ff
/** @defgroup nvic_stir_intid INTID Interrupt ID to trigger
@{*/
/**@}*/


/**@}*/

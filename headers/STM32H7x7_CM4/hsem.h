#pragma once 

/* --- HSEM: HSEM --------------------------------------------------- */

/** @defgroup hsem_registers HSEM Register
@{*/

/** HSEM_HSEM_R0 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R0			MMIO32(HSEM_BASE + 0x00)
/** HSEM_HSEM_R1 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R1			MMIO32(HSEM_BASE + 0x04)
/** HSEM_HSEM_R2 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R2			MMIO32(HSEM_BASE + 0x08)
/** HSEM_HSEM_R3 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R3			MMIO32(HSEM_BASE + 0x0c)
/** HSEM_HSEM_R4 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R4			MMIO32(HSEM_BASE + 0x10)
/** HSEM_HSEM_R5 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R5			MMIO32(HSEM_BASE + 0x14)
/** HSEM_HSEM_R6 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R6			MMIO32(HSEM_BASE + 0x18)
/** HSEM_HSEM_R7 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R7			MMIO32(HSEM_BASE + 0x1c)
/** HSEM_HSEM_R8 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R8			MMIO32(HSEM_BASE + 0x20)
/** HSEM_HSEM_R9 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R9			MMIO32(HSEM_BASE + 0x24)
/** HSEM_HSEM_R10 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R10			MMIO32(HSEM_BASE + 0x28)
/** HSEM_HSEM_R11 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R11			MMIO32(HSEM_BASE + 0x2c)
/** HSEM_HSEM_R12 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R12			MMIO32(HSEM_BASE + 0x30)
/** HSEM_HSEM_R13 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R13			MMIO32(HSEM_BASE + 0x34)
/** HSEM_HSEM_R14 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R14			MMIO32(HSEM_BASE + 0x38)
/** HSEM_HSEM_R15 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R15			MMIO32(HSEM_BASE + 0x3c)
/** HSEM_HSEM_R16 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R16			MMIO32(HSEM_BASE + 0x40)
/** HSEM_HSEM_R17 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R17			MMIO32(HSEM_BASE + 0x44)
/** HSEM_HSEM_R18 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R18			MMIO32(HSEM_BASE + 0x48)
/** HSEM_HSEM_R19 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R19			MMIO32(HSEM_BASE + 0x4c)
/** HSEM_HSEM_R20 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R20			MMIO32(HSEM_BASE + 0x50)
/** HSEM_HSEM_R21 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R21			MMIO32(HSEM_BASE + 0x54)
/** HSEM_HSEM_R22 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R22			MMIO32(HSEM_BASE + 0x58)
/** HSEM_HSEM_R23 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R23			MMIO32(HSEM_BASE + 0x5c)
/** HSEM_HSEM_R24 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R24			MMIO32(HSEM_BASE + 0x60)
/** HSEM_HSEM_R25 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R25			MMIO32(HSEM_BASE + 0x64)
/** HSEM_HSEM_R26 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R26			MMIO32(HSEM_BASE + 0x68)
/** HSEM_HSEM_R27 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R27			MMIO32(HSEM_BASE + 0x6c)
/** HSEM_HSEM_R28 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R28			MMIO32(HSEM_BASE + 0x70)
/** HSEM_HSEM_R29 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R29			MMIO32(HSEM_BASE + 0x74)
/** HSEM_HSEM_R30 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R30			MMIO32(HSEM_BASE + 0x78)
/** HSEM_HSEM_R31 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_HSEM_R31			MMIO32(HSEM_BASE + 0x7c)
/** HSEM_HSEM_RLR0 HSEM Read lock register **/
#define HSEM_HSEM_RLR0			MMIO32(HSEM_BASE + 0x80)
/** HSEM_HSEM_RLR1 HSEM Read lock register **/
#define HSEM_HSEM_RLR1			MMIO32(HSEM_BASE + 0x84)
/** HSEM_HSEM_RLR2 HSEM Read lock register **/
#define HSEM_HSEM_RLR2			MMIO32(HSEM_BASE + 0x88)
/** HSEM_HSEM_RLR3 HSEM Read lock register **/
#define HSEM_HSEM_RLR3			MMIO32(HSEM_BASE + 0x8c)
/** HSEM_HSEM_RLR4 HSEM Read lock register **/
#define HSEM_HSEM_RLR4			MMIO32(HSEM_BASE + 0x90)
/** HSEM_HSEM_RLR5 HSEM Read lock register **/
#define HSEM_HSEM_RLR5			MMIO32(HSEM_BASE + 0x94)
/** HSEM_HSEM_RLR6 HSEM Read lock register **/
#define HSEM_HSEM_RLR6			MMIO32(HSEM_BASE + 0x98)
/** HSEM_HSEM_RLR7 HSEM Read lock register **/
#define HSEM_HSEM_RLR7			MMIO32(HSEM_BASE + 0x9c)
/** HSEM_HSEM_RLR8 HSEM Read lock register **/
#define HSEM_HSEM_RLR8			MMIO32(HSEM_BASE + 0xa0)
/** HSEM_HSEM_RLR9 HSEM Read lock register **/
#define HSEM_HSEM_RLR9			MMIO32(HSEM_BASE + 0xa4)
/** HSEM_HSEM_RLR10 HSEM Read lock register **/
#define HSEM_HSEM_RLR10			MMIO32(HSEM_BASE + 0xa8)
/** HSEM_HSEM_RLR11 HSEM Read lock register **/
#define HSEM_HSEM_RLR11			MMIO32(HSEM_BASE + 0xac)
/** HSEM_HSEM_RLR12 HSEM Read lock register **/
#define HSEM_HSEM_RLR12			MMIO32(HSEM_BASE + 0xb0)
/** HSEM_HSEM_RLR13 HSEM Read lock register **/
#define HSEM_HSEM_RLR13			MMIO32(HSEM_BASE + 0xb4)
/** HSEM_HSEM_RLR14 HSEM Read lock register **/
#define HSEM_HSEM_RLR14			MMIO32(HSEM_BASE + 0xb8)
/** HSEM_HSEM_RLR15 HSEM Read lock register **/
#define HSEM_HSEM_RLR15			MMIO32(HSEM_BASE + 0xbc)
/** HSEM_HSEM_RLR16 HSEM Read lock register **/
#define HSEM_HSEM_RLR16			MMIO32(HSEM_BASE + 0xc0)
/** HSEM_HSEM_RLR17 HSEM Read lock register **/
#define HSEM_HSEM_RLR17			MMIO32(HSEM_BASE + 0xc4)
/** HSEM_HSEM_RLR18 HSEM Read lock register **/
#define HSEM_HSEM_RLR18			MMIO32(HSEM_BASE + 0xc8)
/** HSEM_HSEM_RLR19 HSEM Read lock register **/
#define HSEM_HSEM_RLR19			MMIO32(HSEM_BASE + 0xcc)
/** HSEM_HSEM_RLR20 HSEM Read lock register **/
#define HSEM_HSEM_RLR20			MMIO32(HSEM_BASE + 0xd0)
/** HSEM_HSEM_RLR21 HSEM Read lock register **/
#define HSEM_HSEM_RLR21			MMIO32(HSEM_BASE + 0xd4)
/** HSEM_HSEM_RLR22 HSEM Read lock register **/
#define HSEM_HSEM_RLR22			MMIO32(HSEM_BASE + 0xd8)
/** HSEM_HSEM_RLR23 HSEM Read lock register **/
#define HSEM_HSEM_RLR23			MMIO32(HSEM_BASE + 0xdc)
/** HSEM_HSEM_RLR24 HSEM Read lock register **/
#define HSEM_HSEM_RLR24			MMIO32(HSEM_BASE + 0xe0)
/** HSEM_HSEM_RLR25 HSEM Read lock register **/
#define HSEM_HSEM_RLR25			MMIO32(HSEM_BASE + 0xe4)
/** HSEM_HSEM_RLR26 HSEM Read lock register **/
#define HSEM_HSEM_RLR26			MMIO32(HSEM_BASE + 0xe8)
/** HSEM_HSEM_RLR27 HSEM Read lock register **/
#define HSEM_HSEM_RLR27			MMIO32(HSEM_BASE + 0xec)
/** HSEM_HSEM_RLR28 HSEM Read lock register **/
#define HSEM_HSEM_RLR28			MMIO32(HSEM_BASE + 0xf0)
/** HSEM_HSEM_RLR29 HSEM Read lock register **/
#define HSEM_HSEM_RLR29			MMIO32(HSEM_BASE + 0xf4)
/** HSEM_HSEM_RLR30 HSEM Read lock register **/
#define HSEM_HSEM_RLR30			MMIO32(HSEM_BASE + 0xf8)
/** HSEM_HSEM_RLR31 HSEM Read lock register **/
#define HSEM_HSEM_RLR31			MMIO32(HSEM_BASE + 0xfc)
/** HSEM_HSEM_IER HSEM Interrupt enable register **/
#define HSEM_HSEM_IER			MMIO32(HSEM_BASE + 0x100)
/** HSEM_HSEM_ICR HSEM Interrupt clear register **/
#define HSEM_HSEM_ICR			MMIO32(HSEM_BASE + 0x104)
/** HSEM_HSEM_ISR HSEM Interrupt status register **/
#define HSEM_HSEM_ISR			MMIO32(HSEM_BASE + 0x108)
/** HSEM_HSEM_MISR HSEM Masked interrupt status register **/
#define HSEM_HSEM_MISR			MMIO32(HSEM_BASE + 0x10c)
/** HSEM_HSEM_CR HSEM Clear register **/
#define HSEM_HSEM_CR			MMIO32(HSEM_BASE + 0x140)
/** HSEM_HSEM_KEYR HSEM Interrupt clear register **/
#define HSEM_HSEM_KEYR			MMIO32(HSEM_BASE + 0x144)

/**@}*/


/** @defgroup hsem_hsem_r0 HSEMR0 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R0_LOCK Lock indication **/
#define HSEM_HSEM_R0_LOCK		(1 << 31)

#define HSEM_HSEM_R0_COREID_SHIFT		8
#define HSEM_HSEM_R0_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r0_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R0_PROCID_SHIFT		0
#define HSEM_HSEM_R0_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r0_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r1 HSEMR1 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R1_LOCK Lock indication **/
#define HSEM_HSEM_R1_LOCK		(1 << 31)

#define HSEM_HSEM_R1_COREID_SHIFT		8
#define HSEM_HSEM_R1_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r1_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R1_PROCID_SHIFT		0
#define HSEM_HSEM_R1_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r1_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r2 HSEMR2 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R2_LOCK Lock indication **/
#define HSEM_HSEM_R2_LOCK		(1 << 31)

#define HSEM_HSEM_R2_COREID_SHIFT		8
#define HSEM_HSEM_R2_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r2_coreid COREID Semaphore CoreID.
@{*/
/**@}*/


#define HSEM_HSEM_R2_PROCID_SHIFT		0
#define HSEM_HSEM_R2_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r2_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r3 HSEMR3 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R3_LOCK Lock indication **/
#define HSEM_HSEM_R3_LOCK		(1 << 31)

#define HSEM_HSEM_R3_COREID_SHIFT		8
#define HSEM_HSEM_R3_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r3_coreid COREID Semaphore CoreID.
@{*/
/**@}*/


#define HSEM_HSEM_R3_PROCID_SHIFT		0
#define HSEM_HSEM_R3_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r3_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r4 HSEMR4 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R4_LOCK Lock indication **/
#define HSEM_HSEM_R4_LOCK		(1 << 31)

#define HSEM_HSEM_R4_COREID_SHIFT		8
#define HSEM_HSEM_R4_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r4_coreid COREID Semaphore CoreID.
@{*/
/**@}*/


#define HSEM_HSEM_R4_PROCID_SHIFT		0
#define HSEM_HSEM_R4_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r4_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r5 HSEMR5 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R5_LOCK Lock indication **/
#define HSEM_HSEM_R5_LOCK		(1 << 31)

#define HSEM_HSEM_R5_COREID_SHIFT		8
#define HSEM_HSEM_R5_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r5_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R5_PROCID_SHIFT		0
#define HSEM_HSEM_R5_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r5_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r6 HSEMR6 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R6_LOCK Lock indication **/
#define HSEM_HSEM_R6_LOCK		(1 << 31)

#define HSEM_HSEM_R6_COREID_SHIFT		8
#define HSEM_HSEM_R6_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r6_coreid COREID Semaphore CoreID.
@{*/
/**@}*/


#define HSEM_HSEM_R6_PROCID_SHIFT		0
#define HSEM_HSEM_R6_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r6_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r7 HSEMR7 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R7_LOCK Lock indication **/
#define HSEM_HSEM_R7_LOCK		(1 << 31)

#define HSEM_HSEM_R7_COREID_SHIFT		8
#define HSEM_HSEM_R7_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r7_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R7_PROCID_SHIFT		0
#define HSEM_HSEM_R7_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r7_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r8 HSEMR8 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R8_LOCK Lock indication **/
#define HSEM_HSEM_R8_LOCK		(1 << 31)

#define HSEM_HSEM_R8_COREID_SHIFT		8
#define HSEM_HSEM_R8_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r8_coreid COREID Semaphore CoreID.
@{*/
/**@}*/


#define HSEM_HSEM_R8_PROCID_SHIFT		0
#define HSEM_HSEM_R8_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r8_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r9 HSEMR9 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R9_LOCK Lock indication **/
#define HSEM_HSEM_R9_LOCK		(1 << 31)

#define HSEM_HSEM_R9_COREID_SHIFT		8
#define HSEM_HSEM_R9_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r9_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R9_PROCID_SHIFT		0
#define HSEM_HSEM_R9_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r9_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r10 HSEMR10 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R10_LOCK Lock indication **/
#define HSEM_HSEM_R10_LOCK		(1 << 31)

#define HSEM_HSEM_R10_COREID_SHIFT		8
#define HSEM_HSEM_R10_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r10_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R10_PROCID_SHIFT		0
#define HSEM_HSEM_R10_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r10_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r11 HSEMR11 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R11_LOCK Lock indication **/
#define HSEM_HSEM_R11_LOCK		(1 << 31)

#define HSEM_HSEM_R11_COREID_SHIFT		8
#define HSEM_HSEM_R11_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r11_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R11_PROCID_SHIFT		0
#define HSEM_HSEM_R11_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r11_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r12 HSEMR12 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R12_LOCK Lock indication **/
#define HSEM_HSEM_R12_LOCK		(1 << 31)

#define HSEM_HSEM_R12_COREID_SHIFT		8
#define HSEM_HSEM_R12_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r12_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R12_PROCID_SHIFT		0
#define HSEM_HSEM_R12_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r12_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r13 HSEMR13 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R13_LOCK Lock indication **/
#define HSEM_HSEM_R13_LOCK		(1 << 31)

#define HSEM_HSEM_R13_COREID_SHIFT		8
#define HSEM_HSEM_R13_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r13_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R13_PROCID_SHIFT		0
#define HSEM_HSEM_R13_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r13_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r14 HSEMR14 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R14_LOCK Lock indication **/
#define HSEM_HSEM_R14_LOCK		(1 << 31)

#define HSEM_HSEM_R14_COREID_SHIFT		8
#define HSEM_HSEM_R14_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r14_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R14_PROCID_SHIFT		0
#define HSEM_HSEM_R14_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r14_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r15 HSEMR15 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R15_LOCK Lock indication **/
#define HSEM_HSEM_R15_LOCK		(1 << 31)

#define HSEM_HSEM_R15_COREID_SHIFT		8
#define HSEM_HSEM_R15_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r15_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R15_PROCID_SHIFT		0
#define HSEM_HSEM_R15_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r15_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r16 HSEMR16 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R16_LOCK Lock indication **/
#define HSEM_HSEM_R16_LOCK		(1 << 31)

#define HSEM_HSEM_R16_COREID_SHIFT		8
#define HSEM_HSEM_R16_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r16_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R16_PROCID_SHIFT		0
#define HSEM_HSEM_R16_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r16_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r17 HSEMR17 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R17_LOCK Lock indication **/
#define HSEM_HSEM_R17_LOCK		(1 << 31)

#define HSEM_HSEM_R17_COREID_SHIFT		8
#define HSEM_HSEM_R17_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r17_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R17_PROCID_SHIFT		0
#define HSEM_HSEM_R17_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r17_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r18 HSEMR18 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R18_LOCK Lock indication **/
#define HSEM_HSEM_R18_LOCK		(1 << 31)

#define HSEM_HSEM_R18_COREID_SHIFT		8
#define HSEM_HSEM_R18_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r18_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R18_PROCID_SHIFT		0
#define HSEM_HSEM_R18_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r18_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r19 HSEMR19 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R19_LOCK Lock indication **/
#define HSEM_HSEM_R19_LOCK		(1 << 31)

#define HSEM_HSEM_R19_COREID_SHIFT		8
#define HSEM_HSEM_R19_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r19_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R19_PROCID_SHIFT		0
#define HSEM_HSEM_R19_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r19_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r20 HSEMR20 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R20_LOCK Lock indication **/
#define HSEM_HSEM_R20_LOCK		(1 << 31)

#define HSEM_HSEM_R20_COREID_SHIFT		8
#define HSEM_HSEM_R20_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r20_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R20_PROCID_SHIFT		0
#define HSEM_HSEM_R20_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r20_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r21 HSEMR21 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R21_LOCK Lock indication **/
#define HSEM_HSEM_R21_LOCK		(1 << 31)

#define HSEM_HSEM_R21_COREID_SHIFT		8
#define HSEM_HSEM_R21_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r21_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R21_PROCID_SHIFT		0
#define HSEM_HSEM_R21_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r21_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r22 HSEMR22 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R22_LOCK Lock indication **/
#define HSEM_HSEM_R22_LOCK		(1 << 31)

#define HSEM_HSEM_R22_COREID_SHIFT		8
#define HSEM_HSEM_R22_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r22_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R22_PROCID_SHIFT		0
#define HSEM_HSEM_R22_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r22_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r23 HSEMR23 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R23_LOCK Lock indication **/
#define HSEM_HSEM_R23_LOCK		(1 << 31)

#define HSEM_HSEM_R23_COREID_SHIFT		8
#define HSEM_HSEM_R23_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r23_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R23_PROCID_SHIFT		0
#define HSEM_HSEM_R23_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r23_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r24 HSEMR24 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R24_LOCK Lock indication **/
#define HSEM_HSEM_R24_LOCK		(1 << 31)

#define HSEM_HSEM_R24_COREID_SHIFT		8
#define HSEM_HSEM_R24_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r24_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R24_PROCID_SHIFT		0
#define HSEM_HSEM_R24_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r24_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r25 HSEMR25 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R25_LOCK Lock indication **/
#define HSEM_HSEM_R25_LOCK		(1 << 31)

#define HSEM_HSEM_R25_COREID_SHIFT		8
#define HSEM_HSEM_R25_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r25_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R25_PROCID_SHIFT		0
#define HSEM_HSEM_R25_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r25_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r26 HSEMR26 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R26_LOCK Lock indication **/
#define HSEM_HSEM_R26_LOCK		(1 << 31)

#define HSEM_HSEM_R26_COREID_SHIFT		8
#define HSEM_HSEM_R26_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r26_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R26_PROCID_SHIFT		0
#define HSEM_HSEM_R26_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r26_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r27 HSEMR27 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R27_LOCK Lock indication **/
#define HSEM_HSEM_R27_LOCK		(1 << 31)

#define HSEM_HSEM_R27_COREID_SHIFT		8
#define HSEM_HSEM_R27_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r27_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R27_PROCID_SHIFT		0
#define HSEM_HSEM_R27_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r27_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r28 HSEMR28 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R28_LOCK Lock indication **/
#define HSEM_HSEM_R28_LOCK		(1 << 31)

#define HSEM_HSEM_R28_COREID_SHIFT		8
#define HSEM_HSEM_R28_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r28_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R28_PROCID_SHIFT		0
#define HSEM_HSEM_R28_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r28_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r29 HSEMR29 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R29_LOCK Lock indication **/
#define HSEM_HSEM_R29_LOCK		(1 << 31)

#define HSEM_HSEM_R29_COREID_SHIFT		8
#define HSEM_HSEM_R29_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r29_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R29_PROCID_SHIFT		0
#define HSEM_HSEM_R29_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r29_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r30 HSEMR30 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R30_LOCK Lock indication **/
#define HSEM_HSEM_R30_LOCK		(1 << 31)

#define HSEM_HSEM_R30_COREID_SHIFT		8
#define HSEM_HSEM_R30_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r30_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R30_PROCID_SHIFT		0
#define HSEM_HSEM_R30_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r30_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_r31 HSEMR31 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_HSEM_R31_LOCK Lock indication **/
#define HSEM_HSEM_R31_LOCK		(1 << 31)

#define HSEM_HSEM_R31_COREID_SHIFT		8
#define HSEM_HSEM_R31_COREID_MASK		0x0f
/** @defgroup hsem_hsem_r31_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_R31_PROCID_SHIFT		0
#define HSEM_HSEM_R31_PROCID_MASK		0xff
/** @defgroup hsem_hsem_r31_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr0 HSEMRLR0 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR0_LOCK Lock indication **/
#define HSEM_HSEM_RLR0_LOCK		(1 << 31)

#define HSEM_HSEM_RLR0_COREID_SHIFT		8
#define HSEM_HSEM_RLR0_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr0_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR0_PROCID_SHIFT		0
#define HSEM_HSEM_RLR0_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr0_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr1 HSEMRLR1 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR1_LOCK Lock indication **/
#define HSEM_HSEM_RLR1_LOCK		(1 << 31)

#define HSEM_HSEM_RLR1_COREID_SHIFT		8
#define HSEM_HSEM_RLR1_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr1_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR1_PROCID_SHIFT		0
#define HSEM_HSEM_RLR1_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr1_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr2 HSEMRLR2 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR2_LOCK Lock indication **/
#define HSEM_HSEM_RLR2_LOCK		(1 << 31)

#define HSEM_HSEM_RLR2_COREID_SHIFT		8
#define HSEM_HSEM_RLR2_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr2_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR2_PROCID_SHIFT		0
#define HSEM_HSEM_RLR2_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr2_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr3 HSEMRLR3 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR3_LOCK Lock indication **/
#define HSEM_HSEM_RLR3_LOCK		(1 << 31)

#define HSEM_HSEM_RLR3_COREID_SHIFT		8
#define HSEM_HSEM_RLR3_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr3_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR3_PROCID_SHIFT		0
#define HSEM_HSEM_RLR3_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr3_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr4 HSEMRLR4 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR4_LOCK Lock indication **/
#define HSEM_HSEM_RLR4_LOCK		(1 << 31)

#define HSEM_HSEM_RLR4_COREID_SHIFT		8
#define HSEM_HSEM_RLR4_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr4_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR4_PROCID_SHIFT		0
#define HSEM_HSEM_RLR4_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr4_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr5 HSEMRLR5 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR5_LOCK Lock indication **/
#define HSEM_HSEM_RLR5_LOCK		(1 << 31)

#define HSEM_HSEM_RLR5_COREID_SHIFT		8
#define HSEM_HSEM_RLR5_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr5_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR5_PROCID_SHIFT		0
#define HSEM_HSEM_RLR5_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr5_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr6 HSEMRLR6 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR6_LOCK Lock indication **/
#define HSEM_HSEM_RLR6_LOCK		(1 << 31)

#define HSEM_HSEM_RLR6_COREID_SHIFT		8
#define HSEM_HSEM_RLR6_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr6_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR6_PROCID_SHIFT		0
#define HSEM_HSEM_RLR6_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr6_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr7 HSEMRLR7 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR7_LOCK Lock indication **/
#define HSEM_HSEM_RLR7_LOCK		(1 << 31)

#define HSEM_HSEM_RLR7_COREID_SHIFT		8
#define HSEM_HSEM_RLR7_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr7_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR7_PROCID_SHIFT		0
#define HSEM_HSEM_RLR7_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr7_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr8 HSEMRLR8 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR8_LOCK Lock indication **/
#define HSEM_HSEM_RLR8_LOCK		(1 << 31)

#define HSEM_HSEM_RLR8_COREID_SHIFT		8
#define HSEM_HSEM_RLR8_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr8_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR8_PROCID_SHIFT		0
#define HSEM_HSEM_RLR8_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr8_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr9 HSEMRLR9 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR9_LOCK Lock indication **/
#define HSEM_HSEM_RLR9_LOCK		(1 << 31)

#define HSEM_HSEM_RLR9_COREID_SHIFT		8
#define HSEM_HSEM_RLR9_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr9_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR9_PROCID_SHIFT		0
#define HSEM_HSEM_RLR9_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr9_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr10 HSEMRLR10 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR10_LOCK Lock indication **/
#define HSEM_HSEM_RLR10_LOCK		(1 << 31)

#define HSEM_HSEM_RLR10_COREID_SHIFT		8
#define HSEM_HSEM_RLR10_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr10_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR10_PROCID_SHIFT		0
#define HSEM_HSEM_RLR10_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr10_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr11 HSEMRLR11 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR11_LOCK Lock indication **/
#define HSEM_HSEM_RLR11_LOCK		(1 << 31)

#define HSEM_HSEM_RLR11_COREID_SHIFT		8
#define HSEM_HSEM_RLR11_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr11_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR11_PROCID_SHIFT		0
#define HSEM_HSEM_RLR11_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr11_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr12 HSEMRLR12 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR12_LOCK Lock indication **/
#define HSEM_HSEM_RLR12_LOCK		(1 << 31)

#define HSEM_HSEM_RLR12_COREID_SHIFT		8
#define HSEM_HSEM_RLR12_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr12_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR12_PROCID_SHIFT		0
#define HSEM_HSEM_RLR12_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr12_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr13 HSEMRLR13 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR13_LOCK Lock indication **/
#define HSEM_HSEM_RLR13_LOCK		(1 << 31)

#define HSEM_HSEM_RLR13_COREID_SHIFT		8
#define HSEM_HSEM_RLR13_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr13_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR13_PROCID_SHIFT		0
#define HSEM_HSEM_RLR13_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr13_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr14 HSEMRLR14 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR14_LOCK Lock indication **/
#define HSEM_HSEM_RLR14_LOCK		(1 << 31)

#define HSEM_HSEM_RLR14_COREID_SHIFT		8
#define HSEM_HSEM_RLR14_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr14_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR14_PROCID_SHIFT		0
#define HSEM_HSEM_RLR14_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr14_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr15 HSEMRLR15 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR15_LOCK Lock indication **/
#define HSEM_HSEM_RLR15_LOCK		(1 << 31)

#define HSEM_HSEM_RLR15_COREID_SHIFT		8
#define HSEM_HSEM_RLR15_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr15_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR15_PROCID_SHIFT		0
#define HSEM_HSEM_RLR15_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr15_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr16 HSEMRLR16 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR16_LOCK Lock indication **/
#define HSEM_HSEM_RLR16_LOCK		(1 << 31)

#define HSEM_HSEM_RLR16_COREID_SHIFT		8
#define HSEM_HSEM_RLR16_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr16_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR16_PROCID_SHIFT		0
#define HSEM_HSEM_RLR16_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr16_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr17 HSEMRLR17 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR17_LOCK Lock indication **/
#define HSEM_HSEM_RLR17_LOCK		(1 << 31)

#define HSEM_HSEM_RLR17_COREID_SHIFT		8
#define HSEM_HSEM_RLR17_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr17_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR17_PROCID_SHIFT		0
#define HSEM_HSEM_RLR17_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr17_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr18 HSEMRLR18 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR18_LOCK Lock indication **/
#define HSEM_HSEM_RLR18_LOCK		(1 << 31)

#define HSEM_HSEM_RLR18_COREID_SHIFT		8
#define HSEM_HSEM_RLR18_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr18_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR18_PROCID_SHIFT		0
#define HSEM_HSEM_RLR18_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr18_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr19 HSEMRLR19 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR19_LOCK Lock indication **/
#define HSEM_HSEM_RLR19_LOCK		(1 << 31)

#define HSEM_HSEM_RLR19_COREID_SHIFT		8
#define HSEM_HSEM_RLR19_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr19_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR19_PROCID_SHIFT		0
#define HSEM_HSEM_RLR19_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr19_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr20 HSEMRLR20 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR20_LOCK Lock indication **/
#define HSEM_HSEM_RLR20_LOCK		(1 << 31)

#define HSEM_HSEM_RLR20_COREID_SHIFT		8
#define HSEM_HSEM_RLR20_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr20_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR20_PROCID_SHIFT		0
#define HSEM_HSEM_RLR20_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr20_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr21 HSEMRLR21 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR21_LOCK Lock indication **/
#define HSEM_HSEM_RLR21_LOCK		(1 << 31)

#define HSEM_HSEM_RLR21_COREID_SHIFT		8
#define HSEM_HSEM_RLR21_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr21_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR21_PROCID_SHIFT		0
#define HSEM_HSEM_RLR21_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr21_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr22 HSEMRLR22 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR22_LOCK Lock indication **/
#define HSEM_HSEM_RLR22_LOCK		(1 << 31)

#define HSEM_HSEM_RLR22_COREID_SHIFT		8
#define HSEM_HSEM_RLR22_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr22_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR22_PROCID_SHIFT		0
#define HSEM_HSEM_RLR22_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr22_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr23 HSEMRLR23 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR23_LOCK Lock indication **/
#define HSEM_HSEM_RLR23_LOCK		(1 << 31)

#define HSEM_HSEM_RLR23_COREID_SHIFT		8
#define HSEM_HSEM_RLR23_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr23_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR23_PROCID_SHIFT		0
#define HSEM_HSEM_RLR23_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr23_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr24 HSEMRLR24 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR24_LOCK Lock indication **/
#define HSEM_HSEM_RLR24_LOCK		(1 << 31)

#define HSEM_HSEM_RLR24_COREID_SHIFT		8
#define HSEM_HSEM_RLR24_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr24_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR24_PROCID_SHIFT		0
#define HSEM_HSEM_RLR24_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr24_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr25 HSEMRLR25 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR25_LOCK Lock indication **/
#define HSEM_HSEM_RLR25_LOCK		(1 << 31)

#define HSEM_HSEM_RLR25_COREID_SHIFT		8
#define HSEM_HSEM_RLR25_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr25_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR25_PROCID_SHIFT		0
#define HSEM_HSEM_RLR25_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr25_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr26 HSEMRLR26 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR26_LOCK Lock indication **/
#define HSEM_HSEM_RLR26_LOCK		(1 << 31)

#define HSEM_HSEM_RLR26_COREID_SHIFT		8
#define HSEM_HSEM_RLR26_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr26_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR26_PROCID_SHIFT		0
#define HSEM_HSEM_RLR26_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr26_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr27 HSEMRLR27 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR27_LOCK Lock indication **/
#define HSEM_HSEM_RLR27_LOCK		(1 << 31)

#define HSEM_HSEM_RLR27_COREID_SHIFT		8
#define HSEM_HSEM_RLR27_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr27_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR27_PROCID_SHIFT		0
#define HSEM_HSEM_RLR27_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr27_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr28 HSEMRLR28 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR28_LOCK Lock indication **/
#define HSEM_HSEM_RLR28_LOCK		(1 << 31)

#define HSEM_HSEM_RLR28_COREID_SHIFT		8
#define HSEM_HSEM_RLR28_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr28_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR28_PROCID_SHIFT		0
#define HSEM_HSEM_RLR28_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr28_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr29 HSEMRLR29 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR29_LOCK Lock indication **/
#define HSEM_HSEM_RLR29_LOCK		(1 << 31)

#define HSEM_HSEM_RLR29_COREID_SHIFT		8
#define HSEM_HSEM_RLR29_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr29_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR29_PROCID_SHIFT		0
#define HSEM_HSEM_RLR29_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr29_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr30 HSEMRLR30 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR30_LOCK Lock indication **/
#define HSEM_HSEM_RLR30_LOCK		(1 << 31)

#define HSEM_HSEM_RLR30_COREID_SHIFT		8
#define HSEM_HSEM_RLR30_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr30_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR30_PROCID_SHIFT		0
#define HSEM_HSEM_RLR30_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr30_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_rlr31 HSEMRLR31 HSEM Read lock register
@{*/

/** HSEM_HSEM_RLR31_LOCK Lock indication **/
#define HSEM_HSEM_RLR31_LOCK		(1 << 31)

#define HSEM_HSEM_RLR31_COREID_SHIFT		8
#define HSEM_HSEM_RLR31_COREID_MASK		0x0f
/** @defgroup hsem_hsem_rlr31_coreid COREID Semaphore CoreID
@{*/
/**@}*/


#define HSEM_HSEM_RLR31_PROCID_SHIFT		0
#define HSEM_HSEM_RLR31_PROCID_MASK		0xff
/** @defgroup hsem_hsem_rlr31_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_ier HSEMIER HSEM Interrupt enable register
@{*/

/** HSEM_HSEM_IER_ISEM31 Interrupt(N) semaphore n enable bit. **/
#define HSEM_HSEM_IER_ISEM31		(1 << 31)
/** HSEM_HSEM_IER_ISEM30 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM30		(1 << 30)
/** HSEM_HSEM_IER_ISEM29 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM29		(1 << 29)
/** HSEM_HSEM_IER_ISEM28 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM28		(1 << 28)
/** HSEM_HSEM_IER_ISEM27 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM27		(1 << 27)
/** HSEM_HSEM_IER_ISEM26 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM26		(1 << 26)
/** HSEM_HSEM_IER_ISEM25 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM25		(1 << 25)
/** HSEM_HSEM_IER_ISEM24 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM24		(1 << 24)
/** HSEM_HSEM_IER_ISEM23 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM23		(1 << 23)
/** HSEM_HSEM_IER_ISEM22 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM22		(1 << 22)
/** HSEM_HSEM_IER_ISEM21 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM21		(1 << 21)
/** HSEM_HSEM_IER_ISEM20 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM20		(1 << 20)
/** HSEM_HSEM_IER_ISEM19 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM19		(1 << 19)
/** HSEM_HSEM_IER_ISEM18 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM18		(1 << 18)
/** HSEM_HSEM_IER_ISEM17 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM17		(1 << 17)
/** HSEM_HSEM_IER_ISEM16 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM16		(1 << 16)
/** HSEM_HSEM_IER_ISEM15 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM15		(1 << 15)
/** HSEM_HSEM_IER_ISEM14 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM14		(1 << 14)
/** HSEM_HSEM_IER_ISEM13 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM13		(1 << 13)
/** HSEM_HSEM_IER_ISEM12 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM12		(1 << 12)
/** HSEM_HSEM_IER_ISEM11 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM11		(1 << 11)
/** HSEM_HSEM_IER_ISEM10 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM10		(1 << 10)
/** HSEM_HSEM_IER_ISEM9 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM9		(1 << 9)
/** HSEM_HSEM_IER_ISEM8 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM8		(1 << 8)
/** HSEM_HSEM_IER_ISEM7 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM7		(1 << 7)
/** HSEM_HSEM_IER_ISEM6 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM6		(1 << 6)
/** HSEM_HSEM_IER_ISEM5 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM5		(1 << 5)
/** HSEM_HSEM_IER_ISEM4 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM4		(1 << 4)
/** HSEM_HSEM_IER_ISEM3 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM3		(1 << 3)
/** HSEM_HSEM_IER_ISEM2 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM2		(1 << 2)
/** HSEM_HSEM_IER_ISEM1 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM1		(1 << 1)
/** HSEM_HSEM_IER_ISEM0 Interrupt semaphore n enable bit **/
#define HSEM_HSEM_IER_ISEM0		(1 << 0)

/**@}*/

/** @defgroup hsem_hsem_icr HSEMICR HSEM Interrupt clear register
@{*/

/** HSEM_HSEM_ICR_ISCM31 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM31		(1 << 31)
/** HSEM_HSEM_ICR_ISCM30 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM30		(1 << 30)
/** HSEM_HSEM_ICR_ISCM29 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM29		(1 << 29)
/** HSEM_HSEM_ICR_ISCM28 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM28		(1 << 28)
/** HSEM_HSEM_ICR_ISCM27 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM27		(1 << 27)
/** HSEM_HSEM_ICR_ISCM26 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM26		(1 << 26)
/** HSEM_HSEM_ICR_ISCM25 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM25		(1 << 25)
/** HSEM_HSEM_ICR_ISCM24 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM24		(1 << 24)
/** HSEM_HSEM_ICR_ISCM23 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM23		(1 << 23)
/** HSEM_HSEM_ICR_ISCM22 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM22		(1 << 22)
/** HSEM_HSEM_ICR_ISCM21 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM21		(1 << 21)
/** HSEM_HSEM_ICR_ISCM20 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM20		(1 << 20)
/** HSEM_HSEM_ICR_ISCM19 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM19		(1 << 19)
/** HSEM_HSEM_ICR_ISCM18 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM18		(1 << 18)
/** HSEM_HSEM_ICR_ISCM17 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM17		(1 << 17)
/** HSEM_HSEM_ICR_ISCM16 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM16		(1 << 16)
/** HSEM_HSEM_ICR_ISCM15 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM15		(1 << 15)
/** HSEM_HSEM_ICR_ISCM14 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM14		(1 << 14)
/** HSEM_HSEM_ICR_ISCM13 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM13		(1 << 13)
/** HSEM_HSEM_ICR_ISCM12 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM12		(1 << 12)
/** HSEM_HSEM_ICR_ISCM11 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM11		(1 << 11)
/** HSEM_HSEM_ICR_ISCM10 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM10		(1 << 10)
/** HSEM_HSEM_ICR_ISCM9 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM9		(1 << 9)
/** HSEM_HSEM_ICR_ISCM8 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM8		(1 << 8)
/** HSEM_HSEM_ICR_ISCM7 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM7		(1 << 7)
/** HSEM_HSEM_ICR_ISCM6 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM6		(1 << 6)
/** HSEM_HSEM_ICR_ISCM5 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM5		(1 << 5)
/** HSEM_HSEM_ICR_ISCM4 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM4		(1 << 4)
/** HSEM_HSEM_ICR_ISCM3 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM3		(1 << 3)
/** HSEM_HSEM_ICR_ISCM2 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM2		(1 << 2)
/** HSEM_HSEM_ICR_ISCM1 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM1		(1 << 1)
/** HSEM_HSEM_ICR_ISCM0 Interrupt(N) semaphore n clear bit **/
#define HSEM_HSEM_ICR_ISCM0		(1 << 0)

/**@}*/

/** @defgroup hsem_hsem_isr HSEMISR HSEM Interrupt status register
@{*/

/** HSEM_HSEM_ISR_ISFM31 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM31		(1 << 31)
/** HSEM_HSEM_ISR_ISFM30 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM30		(1 << 30)
/** HSEM_HSEM_ISR_ISFM29 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM29		(1 << 29)
/** HSEM_HSEM_ISR_ISFM28 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM28		(1 << 28)
/** HSEM_HSEM_ISR_ISFM27 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM27		(1 << 27)
/** HSEM_HSEM_ISR_ISFM26 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM26		(1 << 26)
/** HSEM_HSEM_ISR_ISFM25 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM25		(1 << 25)
/** HSEM_HSEM_ISR_ISFM24 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM24		(1 << 24)
/** HSEM_HSEM_ISR_ISFM23 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM23		(1 << 23)
/** HSEM_HSEM_ISR_ISFM22 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM22		(1 << 22)
/** HSEM_HSEM_ISR_ISFM21 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM21		(1 << 21)
/** HSEM_HSEM_ISR_ISFM20 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM20		(1 << 20)
/** HSEM_HSEM_ISR_ISFM19 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM19		(1 << 19)
/** HSEM_HSEM_ISR_ISFM18 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM18		(1 << 18)
/** HSEM_HSEM_ISR_ISFM17 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM17		(1 << 17)
/** HSEM_HSEM_ISR_ISFM16 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM16		(1 << 16)
/** HSEM_HSEM_ISR_ISFM15 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM15		(1 << 15)
/** HSEM_HSEM_ISR_ISFM14 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM14		(1 << 14)
/** HSEM_HSEM_ISR_ISFM13 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM13		(1 << 13)
/** HSEM_HSEM_ISR_ISFM12 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM12		(1 << 12)
/** HSEM_HSEM_ISR_ISFM11 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM11		(1 << 11)
/** HSEM_HSEM_ISR_ISFM10 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM10		(1 << 10)
/** HSEM_HSEM_ISR_ISFM9 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM9		(1 << 9)
/** HSEM_HSEM_ISR_ISFM8 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM8		(1 << 8)
/** HSEM_HSEM_ISR_ISFM7 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM7		(1 << 7)
/** HSEM_HSEM_ISR_ISFM6 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM6		(1 << 6)
/** HSEM_HSEM_ISR_ISFM5 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM5		(1 << 5)
/** HSEM_HSEM_ISR_ISFM4 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM4		(1 << 4)
/** HSEM_HSEM_ISR_ISFM3 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM3		(1 << 3)
/** HSEM_HSEM_ISR_ISFM2 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM2		(1 << 2)
/** HSEM_HSEM_ISR_ISFM1 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM1		(1 << 1)
/** HSEM_HSEM_ISR_ISFM0 Interrupt(N) semaphore n status bit before enable (mask). **/
#define HSEM_HSEM_ISR_ISFM0		(1 << 0)

/**@}*/

/** @defgroup hsem_hsem_misr HSEMMISR HSEM Masked interrupt status register
@{*/

/** HSEM_HSEM_MISR_MISF31 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF31		(1 << 31)
/** HSEM_HSEM_MISR_MISF30 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF30		(1 << 30)
/** HSEM_HSEM_MISR_MISF29 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF29		(1 << 29)
/** HSEM_HSEM_MISR_MISF28 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF28		(1 << 28)
/** HSEM_HSEM_MISR_MISF27 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF27		(1 << 27)
/** HSEM_HSEM_MISR_MISF26 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF26		(1 << 26)
/** HSEM_HSEM_MISR_MISF25 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF25		(1 << 25)
/** HSEM_HSEM_MISR_MISF24 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF24		(1 << 24)
/** HSEM_HSEM_MISR_MISF23 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF23		(1 << 23)
/** HSEM_HSEM_MISR_MISF22 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF22		(1 << 22)
/** HSEM_HSEM_MISR_MISF21 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF21		(1 << 21)
/** HSEM_HSEM_MISR_MISF20 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF20		(1 << 20)
/** HSEM_HSEM_MISR_MISF19 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF19		(1 << 19)
/** HSEM_HSEM_MISR_MISF18 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF18		(1 << 18)
/** HSEM_HSEM_MISR_MISF17 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF17		(1 << 17)
/** HSEM_HSEM_MISR_MISF16 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF16		(1 << 16)
/** HSEM_HSEM_MISR_MISF15 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF15		(1 << 15)
/** HSEM_HSEM_MISR_MISF14 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF14		(1 << 14)
/** HSEM_HSEM_MISR_MISF13 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF13		(1 << 13)
/** HSEM_HSEM_MISR_MISF12 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF12		(1 << 12)
/** HSEM_HSEM_MISR_MISF11 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF11		(1 << 11)
/** HSEM_HSEM_MISR_MISF10 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF10		(1 << 10)
/** HSEM_HSEM_MISR_MISF9 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF9		(1 << 9)
/** HSEM_HSEM_MISR_MISF8 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF8		(1 << 8)
/** HSEM_HSEM_MISR_MISF7 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF7		(1 << 7)
/** HSEM_HSEM_MISR_MISF6 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF6		(1 << 6)
/** HSEM_HSEM_MISR_MISF5 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF5		(1 << 5)
/** HSEM_HSEM_MISR_MISF4 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF4		(1 << 4)
/** HSEM_HSEM_MISR_MISF3 masked interrupt(N) semaphore n status bit after enable (mask). **/
#define HSEM_HSEM_MISR_MISF3		(1 << 3)
/** HSEM_HSEM_MISR_MISF2 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_HSEM_MISR_MISF2		(1 << 2)
/** HSEM_HSEM_MISR_MISF1 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_HSEM_MISR_MISF1		(1 << 1)
/** HSEM_HSEM_MISR_MISF0 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_HSEM_MISR_MISF0		(1 << 0)

/**@}*/

/** @defgroup hsem_hsem_cr HSEMCR HSEM Clear register
@{*/


#define HSEM_HSEM_CR_KEY_SHIFT		16
#define HSEM_HSEM_CR_KEY_MASK		0xffff
/** @defgroup hsem_hsem_cr_key KEY Semaphore clear Key
@{*/
/**@}*/


#define HSEM_HSEM_CR_MASTERID_SHIFT		8
#define HSEM_HSEM_CR_MASTERID_MASK		0x0f
/** @defgroup hsem_hsem_cr_masterid MASTERID MasterID of semaphores to be cleared
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_hsem_keyr HSEMKEYR HSEM Interrupt clear register
@{*/


#define HSEM_HSEM_KEYR_KEY_SHIFT		16
#define HSEM_HSEM_KEYR_KEY_MASK		0xffff
/** @defgroup hsem_hsem_keyr_key KEY Semaphore Clear Key
@{*/
/**@}*/


/**@}*/

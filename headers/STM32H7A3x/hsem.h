#pragma once 

/* --- HSEM: HSEM --------------------------------------------------- */

/** @defgroup hsem_registers HSEM Register
@{*/

/** HSEM_R0 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R0			MMIO32(HSEM_BASE + 0x00)
/** HSEM_R1 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R1			MMIO32(HSEM_BASE + 0x04)
/** HSEM_R2 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R2			MMIO32(HSEM_BASE + 0x08)
/** HSEM_R3 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R3			MMIO32(HSEM_BASE + 0x0c)
/** HSEM_R4 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R4			MMIO32(HSEM_BASE + 0x10)
/** HSEM_R5 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R5			MMIO32(HSEM_BASE + 0x14)
/** HSEM_R6 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R6			MMIO32(HSEM_BASE + 0x18)
/** HSEM_R7 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R7			MMIO32(HSEM_BASE + 0x1c)
/** HSEM_R8 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R8			MMIO32(HSEM_BASE + 0x20)
/** HSEM_R9 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R9			MMIO32(HSEM_BASE + 0x24)
/** HSEM_R10 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R10			MMIO32(HSEM_BASE + 0x28)
/** HSEM_R11 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R11			MMIO32(HSEM_BASE + 0x2c)
/** HSEM_R12 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R12			MMIO32(HSEM_BASE + 0x30)
/** HSEM_R13 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R13			MMIO32(HSEM_BASE + 0x34)
/** HSEM_R14 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R14			MMIO32(HSEM_BASE + 0x38)
/** HSEM_R15 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R15			MMIO32(HSEM_BASE + 0x3c)
/** HSEM_R16 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R16			MMIO32(HSEM_BASE + 0x40)
/** HSEM_R17 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R17			MMIO32(HSEM_BASE + 0x44)
/** HSEM_R18 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R18			MMIO32(HSEM_BASE + 0x48)
/** HSEM_R19 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R19			MMIO32(HSEM_BASE + 0x4c)
/** HSEM_R20 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R20			MMIO32(HSEM_BASE + 0x50)
/** HSEM_R21 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R21			MMIO32(HSEM_BASE + 0x54)
/** HSEM_R22 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R22			MMIO32(HSEM_BASE + 0x58)
/** HSEM_R23 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R23			MMIO32(HSEM_BASE + 0x5c)
/** HSEM_R24 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R24			MMIO32(HSEM_BASE + 0x60)
/** HSEM_R25 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R25			MMIO32(HSEM_BASE + 0x64)
/** HSEM_R26 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R26			MMIO32(HSEM_BASE + 0x68)
/** HSEM_R27 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R27			MMIO32(HSEM_BASE + 0x6c)
/** HSEM_R28 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R28			MMIO32(HSEM_BASE + 0x70)
/** HSEM_R29 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R29			MMIO32(HSEM_BASE + 0x74)
/** HSEM_R30 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R30			MMIO32(HSEM_BASE + 0x78)
/** HSEM_R31 HSEM register HSEM_R0 HSEM_R31 **/
#define HSEM_R31			MMIO32(HSEM_BASE + 0x7c)
/** HSEM_RLR0 HSEM Read lock register **/
#define HSEM_RLR0			MMIO32(HSEM_BASE + 0x80)
/** HSEM_RLR1 HSEM Read lock register **/
#define HSEM_RLR1			MMIO32(HSEM_BASE + 0x84)
/** HSEM_RLR2 HSEM Read lock register **/
#define HSEM_RLR2			MMIO32(HSEM_BASE + 0x88)
/** HSEM_RLR3 HSEM Read lock register **/
#define HSEM_RLR3			MMIO32(HSEM_BASE + 0x8c)
/** HSEM_RLR4 HSEM Read lock register **/
#define HSEM_RLR4			MMIO32(HSEM_BASE + 0x90)
/** HSEM_RLR5 HSEM Read lock register **/
#define HSEM_RLR5			MMIO32(HSEM_BASE + 0x94)
/** HSEM_RLR6 HSEM Read lock register **/
#define HSEM_RLR6			MMIO32(HSEM_BASE + 0x98)
/** HSEM_RLR7 HSEM Read lock register **/
#define HSEM_RLR7			MMIO32(HSEM_BASE + 0x9c)
/** HSEM_RLR8 HSEM Read lock register **/
#define HSEM_RLR8			MMIO32(HSEM_BASE + 0xa0)
/** HSEM_RLR9 HSEM Read lock register **/
#define HSEM_RLR9			MMIO32(HSEM_BASE + 0xa4)
/** HSEM_RLR10 HSEM Read lock register **/
#define HSEM_RLR10			MMIO32(HSEM_BASE + 0xa8)
/** HSEM_RLR11 HSEM Read lock register **/
#define HSEM_RLR11			MMIO32(HSEM_BASE + 0xac)
/** HSEM_RLR12 HSEM Read lock register **/
#define HSEM_RLR12			MMIO32(HSEM_BASE + 0xb0)
/** HSEM_RLR13 HSEM Read lock register **/
#define HSEM_RLR13			MMIO32(HSEM_BASE + 0xb4)
/** HSEM_RLR14 HSEM Read lock register **/
#define HSEM_RLR14			MMIO32(HSEM_BASE + 0xb8)
/** HSEM_RLR15 HSEM Read lock register **/
#define HSEM_RLR15			MMIO32(HSEM_BASE + 0xbc)
/** HSEM_RLR16 HSEM Read lock register **/
#define HSEM_RLR16			MMIO32(HSEM_BASE + 0xc0)
/** HSEM_RLR17 HSEM Read lock register **/
#define HSEM_RLR17			MMIO32(HSEM_BASE + 0xc4)
/** HSEM_RLR18 HSEM Read lock register **/
#define HSEM_RLR18			MMIO32(HSEM_BASE + 0xc8)
/** HSEM_RLR19 HSEM Read lock register **/
#define HSEM_RLR19			MMIO32(HSEM_BASE + 0xcc)
/** HSEM_RLR20 HSEM Read lock register **/
#define HSEM_RLR20			MMIO32(HSEM_BASE + 0xd0)
/** HSEM_RLR21 HSEM Read lock register **/
#define HSEM_RLR21			MMIO32(HSEM_BASE + 0xd4)
/** HSEM_RLR22 HSEM Read lock register **/
#define HSEM_RLR22			MMIO32(HSEM_BASE + 0xd8)
/** HSEM_RLR23 HSEM Read lock register **/
#define HSEM_RLR23			MMIO32(HSEM_BASE + 0xdc)
/** HSEM_RLR24 HSEM Read lock register **/
#define HSEM_RLR24			MMIO32(HSEM_BASE + 0xe0)
/** HSEM_RLR25 HSEM Read lock register **/
#define HSEM_RLR25			MMIO32(HSEM_BASE + 0xe4)
/** HSEM_RLR26 HSEM Read lock register **/
#define HSEM_RLR26			MMIO32(HSEM_BASE + 0xe8)
/** HSEM_RLR27 HSEM Read lock register **/
#define HSEM_RLR27			MMIO32(HSEM_BASE + 0xec)
/** HSEM_RLR28 HSEM Read lock register **/
#define HSEM_RLR28			MMIO32(HSEM_BASE + 0xf0)
/** HSEM_RLR29 HSEM Read lock register **/
#define HSEM_RLR29			MMIO32(HSEM_BASE + 0xf4)
/** HSEM_RLR30 HSEM Read lock register **/
#define HSEM_RLR30			MMIO32(HSEM_BASE + 0xf8)
/** HSEM_RLR31 HSEM Read lock register **/
#define HSEM_RLR31			MMIO32(HSEM_BASE + 0xfc)
/** HSEM_IER HSEM Interrupt enable register **/
#define HSEM_IER			MMIO32(HSEM_BASE + 0x100)
/** HSEM_ICR HSEM Interrupt clear register **/
#define HSEM_ICR			MMIO32(HSEM_BASE + 0x104)
/** HSEM_ISR HSEM Interrupt status register **/
#define HSEM_ISR			MMIO32(HSEM_BASE + 0x108)
/** HSEM_MISR HSEM Masked interrupt status register **/
#define HSEM_MISR			MMIO32(HSEM_BASE + 0x10c)
/** HSEM_CR HSEM Clear register **/
#define HSEM_CR			MMIO32(HSEM_BASE + 0x140)
/** HSEM_KEYR HSEM Interrupt clear register **/
#define HSEM_KEYR			MMIO32(HSEM_BASE + 0x144)

/**@}*/


/** @defgroup hsem_r0 R0 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R0_LOCK Lock indication **/
#define HSEM_R0_LOCK		(1 << 31)

#define HSEM_R0_MASTERID_SHIFT		8
#define HSEM_R0_MASTERID_MASK		0xff
/** @defgroup hsem_r0_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R0_PROCID_SHIFT		0
#define HSEM_R0_PROCID_MASK		0xff
/** @defgroup hsem_r0_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r1 R1 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R1_LOCK Lock indication **/
#define HSEM_R1_LOCK		(1 << 31)

#define HSEM_R1_MASTERID_SHIFT		8
#define HSEM_R1_MASTERID_MASK		0xff
/** @defgroup hsem_r1_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R1_PROCID_SHIFT		0
#define HSEM_R1_PROCID_MASK		0xff
/** @defgroup hsem_r1_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r2 R2 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R2_LOCK Lock indication **/
#define HSEM_R2_LOCK		(1 << 31)

#define HSEM_R2_MASTERID_SHIFT		8
#define HSEM_R2_MASTERID_MASK		0xff
/** @defgroup hsem_r2_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R2_PROCID_SHIFT		0
#define HSEM_R2_PROCID_MASK		0xff
/** @defgroup hsem_r2_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r3 R3 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R3_LOCK Lock indication **/
#define HSEM_R3_LOCK		(1 << 31)

#define HSEM_R3_MASTERID_SHIFT		8
#define HSEM_R3_MASTERID_MASK		0xff
/** @defgroup hsem_r3_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R3_PROCID_SHIFT		0
#define HSEM_R3_PROCID_MASK		0xff
/** @defgroup hsem_r3_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r4 R4 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R4_LOCK Lock indication **/
#define HSEM_R4_LOCK		(1 << 31)

#define HSEM_R4_MASTERID_SHIFT		8
#define HSEM_R4_MASTERID_MASK		0xff
/** @defgroup hsem_r4_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R4_PROCID_SHIFT		0
#define HSEM_R4_PROCID_MASK		0xff
/** @defgroup hsem_r4_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r5 R5 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R5_LOCK Lock indication **/
#define HSEM_R5_LOCK		(1 << 31)

#define HSEM_R5_MASTERID_SHIFT		8
#define HSEM_R5_MASTERID_MASK		0xff
/** @defgroup hsem_r5_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R5_PROCID_SHIFT		0
#define HSEM_R5_PROCID_MASK		0xff
/** @defgroup hsem_r5_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r6 R6 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R6_LOCK Lock indication **/
#define HSEM_R6_LOCK		(1 << 31)

#define HSEM_R6_MASTERID_SHIFT		8
#define HSEM_R6_MASTERID_MASK		0xff
/** @defgroup hsem_r6_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R6_PROCID_SHIFT		0
#define HSEM_R6_PROCID_MASK		0xff
/** @defgroup hsem_r6_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r7 R7 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R7_LOCK Lock indication **/
#define HSEM_R7_LOCK		(1 << 31)

#define HSEM_R7_MASTERID_SHIFT		8
#define HSEM_R7_MASTERID_MASK		0xff
/** @defgroup hsem_r7_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R7_PROCID_SHIFT		0
#define HSEM_R7_PROCID_MASK		0xff
/** @defgroup hsem_r7_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r8 R8 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R8_LOCK Lock indication **/
#define HSEM_R8_LOCK		(1 << 31)

#define HSEM_R8_MASTERID_SHIFT		8
#define HSEM_R8_MASTERID_MASK		0xff
/** @defgroup hsem_r8_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R8_PROCID_SHIFT		0
#define HSEM_R8_PROCID_MASK		0xff
/** @defgroup hsem_r8_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r9 R9 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R9_LOCK Lock indication **/
#define HSEM_R9_LOCK		(1 << 31)

#define HSEM_R9_MASTERID_SHIFT		8
#define HSEM_R9_MASTERID_MASK		0xff
/** @defgroup hsem_r9_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R9_PROCID_SHIFT		0
#define HSEM_R9_PROCID_MASK		0xff
/** @defgroup hsem_r9_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r10 R10 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R10_LOCK Lock indication **/
#define HSEM_R10_LOCK		(1 << 31)

#define HSEM_R10_MASTERID_SHIFT		8
#define HSEM_R10_MASTERID_MASK		0xff
/** @defgroup hsem_r10_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R10_PROCID_SHIFT		0
#define HSEM_R10_PROCID_MASK		0xff
/** @defgroup hsem_r10_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r11 R11 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R11_LOCK Lock indication **/
#define HSEM_R11_LOCK		(1 << 31)

#define HSEM_R11_MASTERID_SHIFT		8
#define HSEM_R11_MASTERID_MASK		0xff
/** @defgroup hsem_r11_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R11_PROCID_SHIFT		0
#define HSEM_R11_PROCID_MASK		0xff
/** @defgroup hsem_r11_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r12 R12 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R12_LOCK Lock indication **/
#define HSEM_R12_LOCK		(1 << 31)

#define HSEM_R12_MASTERID_SHIFT		8
#define HSEM_R12_MASTERID_MASK		0xff
/** @defgroup hsem_r12_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R12_PROCID_SHIFT		0
#define HSEM_R12_PROCID_MASK		0xff
/** @defgroup hsem_r12_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r13 R13 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R13_LOCK Lock indication **/
#define HSEM_R13_LOCK		(1 << 31)

#define HSEM_R13_MASTERID_SHIFT		8
#define HSEM_R13_MASTERID_MASK		0xff
/** @defgroup hsem_r13_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R13_PROCID_SHIFT		0
#define HSEM_R13_PROCID_MASK		0xff
/** @defgroup hsem_r13_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r14 R14 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R14_LOCK Lock indication **/
#define HSEM_R14_LOCK		(1 << 31)

#define HSEM_R14_MASTERID_SHIFT		8
#define HSEM_R14_MASTERID_MASK		0xff
/** @defgroup hsem_r14_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R14_PROCID_SHIFT		0
#define HSEM_R14_PROCID_MASK		0xff
/** @defgroup hsem_r14_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r15 R15 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R15_LOCK Lock indication **/
#define HSEM_R15_LOCK		(1 << 31)

#define HSEM_R15_MASTERID_SHIFT		8
#define HSEM_R15_MASTERID_MASK		0xff
/** @defgroup hsem_r15_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R15_PROCID_SHIFT		0
#define HSEM_R15_PROCID_MASK		0xff
/** @defgroup hsem_r15_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r16 R16 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R16_LOCK Lock indication **/
#define HSEM_R16_LOCK		(1 << 31)

#define HSEM_R16_MASTERID_SHIFT		8
#define HSEM_R16_MASTERID_MASK		0xff
/** @defgroup hsem_r16_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R16_PROCID_SHIFT		0
#define HSEM_R16_PROCID_MASK		0xff
/** @defgroup hsem_r16_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r17 R17 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R17_LOCK Lock indication **/
#define HSEM_R17_LOCK		(1 << 31)

#define HSEM_R17_MASTERID_SHIFT		8
#define HSEM_R17_MASTERID_MASK		0xff
/** @defgroup hsem_r17_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R17_PROCID_SHIFT		0
#define HSEM_R17_PROCID_MASK		0xff
/** @defgroup hsem_r17_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r18 R18 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R18_LOCK Lock indication **/
#define HSEM_R18_LOCK		(1 << 31)

#define HSEM_R18_MASTERID_SHIFT		8
#define HSEM_R18_MASTERID_MASK		0xff
/** @defgroup hsem_r18_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R18_PROCID_SHIFT		0
#define HSEM_R18_PROCID_MASK		0xff
/** @defgroup hsem_r18_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r19 R19 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R19_LOCK Lock indication **/
#define HSEM_R19_LOCK		(1 << 31)

#define HSEM_R19_MASTERID_SHIFT		8
#define HSEM_R19_MASTERID_MASK		0xff
/** @defgroup hsem_r19_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R19_PROCID_SHIFT		0
#define HSEM_R19_PROCID_MASK		0xff
/** @defgroup hsem_r19_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r20 R20 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R20_LOCK Lock indication **/
#define HSEM_R20_LOCK		(1 << 31)

#define HSEM_R20_MASTERID_SHIFT		8
#define HSEM_R20_MASTERID_MASK		0xff
/** @defgroup hsem_r20_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R20_PROCID_SHIFT		0
#define HSEM_R20_PROCID_MASK		0xff
/** @defgroup hsem_r20_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r21 R21 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R21_LOCK Lock indication **/
#define HSEM_R21_LOCK		(1 << 31)

#define HSEM_R21_MASTERID_SHIFT		8
#define HSEM_R21_MASTERID_MASK		0xff
/** @defgroup hsem_r21_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R21_PROCID_SHIFT		0
#define HSEM_R21_PROCID_MASK		0xff
/** @defgroup hsem_r21_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r22 R22 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R22_LOCK Lock indication **/
#define HSEM_R22_LOCK		(1 << 31)

#define HSEM_R22_MASTERID_SHIFT		8
#define HSEM_R22_MASTERID_MASK		0xff
/** @defgroup hsem_r22_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R22_PROCID_SHIFT		0
#define HSEM_R22_PROCID_MASK		0xff
/** @defgroup hsem_r22_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r23 R23 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R23_LOCK Lock indication **/
#define HSEM_R23_LOCK		(1 << 31)

#define HSEM_R23_MASTERID_SHIFT		8
#define HSEM_R23_MASTERID_MASK		0xff
/** @defgroup hsem_r23_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R23_PROCID_SHIFT		0
#define HSEM_R23_PROCID_MASK		0xff
/** @defgroup hsem_r23_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r24 R24 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R24_LOCK Lock indication **/
#define HSEM_R24_LOCK		(1 << 31)

#define HSEM_R24_MASTERID_SHIFT		8
#define HSEM_R24_MASTERID_MASK		0xff
/** @defgroup hsem_r24_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R24_PROCID_SHIFT		0
#define HSEM_R24_PROCID_MASK		0xff
/** @defgroup hsem_r24_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r25 R25 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R25_LOCK Lock indication **/
#define HSEM_R25_LOCK		(1 << 31)

#define HSEM_R25_MASTERID_SHIFT		8
#define HSEM_R25_MASTERID_MASK		0xff
/** @defgroup hsem_r25_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R25_PROCID_SHIFT		0
#define HSEM_R25_PROCID_MASK		0xff
/** @defgroup hsem_r25_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r26 R26 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R26_LOCK Lock indication **/
#define HSEM_R26_LOCK		(1 << 31)

#define HSEM_R26_MASTERID_SHIFT		8
#define HSEM_R26_MASTERID_MASK		0xff
/** @defgroup hsem_r26_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R26_PROCID_SHIFT		0
#define HSEM_R26_PROCID_MASK		0xff
/** @defgroup hsem_r26_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r27 R27 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R27_LOCK Lock indication **/
#define HSEM_R27_LOCK		(1 << 31)

#define HSEM_R27_MASTERID_SHIFT		8
#define HSEM_R27_MASTERID_MASK		0xff
/** @defgroup hsem_r27_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R27_PROCID_SHIFT		0
#define HSEM_R27_PROCID_MASK		0xff
/** @defgroup hsem_r27_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r28 R28 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R28_LOCK Lock indication **/
#define HSEM_R28_LOCK		(1 << 31)

#define HSEM_R28_MASTERID_SHIFT		8
#define HSEM_R28_MASTERID_MASK		0xff
/** @defgroup hsem_r28_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R28_PROCID_SHIFT		0
#define HSEM_R28_PROCID_MASK		0xff
/** @defgroup hsem_r28_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r29 R29 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R29_LOCK Lock indication **/
#define HSEM_R29_LOCK		(1 << 31)

#define HSEM_R29_MASTERID_SHIFT		8
#define HSEM_R29_MASTERID_MASK		0xff
/** @defgroup hsem_r29_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R29_PROCID_SHIFT		0
#define HSEM_R29_PROCID_MASK		0xff
/** @defgroup hsem_r29_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r30 R30 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R30_LOCK Lock indication **/
#define HSEM_R30_LOCK		(1 << 31)

#define HSEM_R30_MASTERID_SHIFT		8
#define HSEM_R30_MASTERID_MASK		0xff
/** @defgroup hsem_r30_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R30_PROCID_SHIFT		0
#define HSEM_R30_PROCID_MASK		0xff
/** @defgroup hsem_r30_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_r31 R31 HSEM register HSEM_R0 HSEM_R31
@{*/

/** HSEM_R31_LOCK Lock indication **/
#define HSEM_R31_LOCK		(1 << 31)

#define HSEM_R31_MASTERID_SHIFT		8
#define HSEM_R31_MASTERID_MASK		0xff
/** @defgroup hsem_r31_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_R31_PROCID_SHIFT		0
#define HSEM_R31_PROCID_MASK		0xff
/** @defgroup hsem_r31_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr0 RLR0 HSEM Read lock register
@{*/

/** HSEM_RLR0_LOCK Lock indication **/
#define HSEM_RLR0_LOCK		(1 << 31)

#define HSEM_RLR0_MASTERID_SHIFT		8
#define HSEM_RLR0_MASTERID_MASK		0xff
/** @defgroup hsem_rlr0_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR0_PROCID_SHIFT		0
#define HSEM_RLR0_PROCID_MASK		0xff
/** @defgroup hsem_rlr0_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr1 RLR1 HSEM Read lock register
@{*/

/** HSEM_RLR1_LOCK Lock indication **/
#define HSEM_RLR1_LOCK		(1 << 31)

#define HSEM_RLR1_MASTERID_SHIFT		8
#define HSEM_RLR1_MASTERID_MASK		0xff
/** @defgroup hsem_rlr1_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR1_PROCID_SHIFT		0
#define HSEM_RLR1_PROCID_MASK		0xff
/** @defgroup hsem_rlr1_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr2 RLR2 HSEM Read lock register
@{*/

/** HSEM_RLR2_LOCK Lock indication **/
#define HSEM_RLR2_LOCK		(1 << 31)

#define HSEM_RLR2_MASTERID_SHIFT		8
#define HSEM_RLR2_MASTERID_MASK		0xff
/** @defgroup hsem_rlr2_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR2_PROCID_SHIFT		0
#define HSEM_RLR2_PROCID_MASK		0xff
/** @defgroup hsem_rlr2_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr3 RLR3 HSEM Read lock register
@{*/

/** HSEM_RLR3_LOCK Lock indication **/
#define HSEM_RLR3_LOCK		(1 << 31)

#define HSEM_RLR3_MASTERID_SHIFT		8
#define HSEM_RLR3_MASTERID_MASK		0xff
/** @defgroup hsem_rlr3_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR3_PROCID_SHIFT		0
#define HSEM_RLR3_PROCID_MASK		0xff
/** @defgroup hsem_rlr3_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr4 RLR4 HSEM Read lock register
@{*/

/** HSEM_RLR4_LOCK Lock indication **/
#define HSEM_RLR4_LOCK		(1 << 31)

#define HSEM_RLR4_MASTERID_SHIFT		8
#define HSEM_RLR4_MASTERID_MASK		0xff
/** @defgroup hsem_rlr4_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR4_PROCID_SHIFT		0
#define HSEM_RLR4_PROCID_MASK		0xff
/** @defgroup hsem_rlr4_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr5 RLR5 HSEM Read lock register
@{*/

/** HSEM_RLR5_LOCK Lock indication **/
#define HSEM_RLR5_LOCK		(1 << 31)

#define HSEM_RLR5_MASTERID_SHIFT		8
#define HSEM_RLR5_MASTERID_MASK		0xff
/** @defgroup hsem_rlr5_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR5_PROCID_SHIFT		0
#define HSEM_RLR5_PROCID_MASK		0xff
/** @defgroup hsem_rlr5_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr6 RLR6 HSEM Read lock register
@{*/

/** HSEM_RLR6_LOCK Lock indication **/
#define HSEM_RLR6_LOCK		(1 << 31)

#define HSEM_RLR6_MASTERID_SHIFT		8
#define HSEM_RLR6_MASTERID_MASK		0xff
/** @defgroup hsem_rlr6_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR6_PROCID_SHIFT		0
#define HSEM_RLR6_PROCID_MASK		0xff
/** @defgroup hsem_rlr6_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr7 RLR7 HSEM Read lock register
@{*/

/** HSEM_RLR7_LOCK Lock indication **/
#define HSEM_RLR7_LOCK		(1 << 31)

#define HSEM_RLR7_MASTERID_SHIFT		8
#define HSEM_RLR7_MASTERID_MASK		0xff
/** @defgroup hsem_rlr7_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR7_PROCID_SHIFT		0
#define HSEM_RLR7_PROCID_MASK		0xff
/** @defgroup hsem_rlr7_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr8 RLR8 HSEM Read lock register
@{*/

/** HSEM_RLR8_LOCK Lock indication **/
#define HSEM_RLR8_LOCK		(1 << 31)

#define HSEM_RLR8_MASTERID_SHIFT		8
#define HSEM_RLR8_MASTERID_MASK		0xff
/** @defgroup hsem_rlr8_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR8_PROCID_SHIFT		0
#define HSEM_RLR8_PROCID_MASK		0xff
/** @defgroup hsem_rlr8_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr9 RLR9 HSEM Read lock register
@{*/

/** HSEM_RLR9_LOCK Lock indication **/
#define HSEM_RLR9_LOCK		(1 << 31)

#define HSEM_RLR9_MASTERID_SHIFT		8
#define HSEM_RLR9_MASTERID_MASK		0xff
/** @defgroup hsem_rlr9_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR9_PROCID_SHIFT		0
#define HSEM_RLR9_PROCID_MASK		0xff
/** @defgroup hsem_rlr9_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr10 RLR10 HSEM Read lock register
@{*/

/** HSEM_RLR10_LOCK Lock indication **/
#define HSEM_RLR10_LOCK		(1 << 31)

#define HSEM_RLR10_MASTERID_SHIFT		8
#define HSEM_RLR10_MASTERID_MASK		0xff
/** @defgroup hsem_rlr10_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR10_PROCID_SHIFT		0
#define HSEM_RLR10_PROCID_MASK		0xff
/** @defgroup hsem_rlr10_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr11 RLR11 HSEM Read lock register
@{*/

/** HSEM_RLR11_LOCK Lock indication **/
#define HSEM_RLR11_LOCK		(1 << 31)

#define HSEM_RLR11_MASTERID_SHIFT		8
#define HSEM_RLR11_MASTERID_MASK		0xff
/** @defgroup hsem_rlr11_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR11_PROCID_SHIFT		0
#define HSEM_RLR11_PROCID_MASK		0xff
/** @defgroup hsem_rlr11_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr12 RLR12 HSEM Read lock register
@{*/

/** HSEM_RLR12_LOCK Lock indication **/
#define HSEM_RLR12_LOCK		(1 << 31)

#define HSEM_RLR12_MASTERID_SHIFT		8
#define HSEM_RLR12_MASTERID_MASK		0xff
/** @defgroup hsem_rlr12_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR12_PROCID_SHIFT		0
#define HSEM_RLR12_PROCID_MASK		0xff
/** @defgroup hsem_rlr12_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr13 RLR13 HSEM Read lock register
@{*/

/** HSEM_RLR13_LOCK Lock indication **/
#define HSEM_RLR13_LOCK		(1 << 31)

#define HSEM_RLR13_MASTERID_SHIFT		8
#define HSEM_RLR13_MASTERID_MASK		0xff
/** @defgroup hsem_rlr13_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR13_PROCID_SHIFT		0
#define HSEM_RLR13_PROCID_MASK		0xff
/** @defgroup hsem_rlr13_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr14 RLR14 HSEM Read lock register
@{*/

/** HSEM_RLR14_LOCK Lock indication **/
#define HSEM_RLR14_LOCK		(1 << 31)

#define HSEM_RLR14_MASTERID_SHIFT		8
#define HSEM_RLR14_MASTERID_MASK		0xff
/** @defgroup hsem_rlr14_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR14_PROCID_SHIFT		0
#define HSEM_RLR14_PROCID_MASK		0xff
/** @defgroup hsem_rlr14_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr15 RLR15 HSEM Read lock register
@{*/

/** HSEM_RLR15_LOCK Lock indication **/
#define HSEM_RLR15_LOCK		(1 << 31)

#define HSEM_RLR15_MASTERID_SHIFT		8
#define HSEM_RLR15_MASTERID_MASK		0xff
/** @defgroup hsem_rlr15_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR15_PROCID_SHIFT		0
#define HSEM_RLR15_PROCID_MASK		0xff
/** @defgroup hsem_rlr15_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr16 RLR16 HSEM Read lock register
@{*/

/** HSEM_RLR16_LOCK Lock indication **/
#define HSEM_RLR16_LOCK		(1 << 31)

#define HSEM_RLR16_MASTERID_SHIFT		8
#define HSEM_RLR16_MASTERID_MASK		0xff
/** @defgroup hsem_rlr16_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR16_PROCID_SHIFT		0
#define HSEM_RLR16_PROCID_MASK		0xff
/** @defgroup hsem_rlr16_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr17 RLR17 HSEM Read lock register
@{*/

/** HSEM_RLR17_LOCK Lock indication **/
#define HSEM_RLR17_LOCK		(1 << 31)

#define HSEM_RLR17_MASTERID_SHIFT		8
#define HSEM_RLR17_MASTERID_MASK		0xff
/** @defgroup hsem_rlr17_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR17_PROCID_SHIFT		0
#define HSEM_RLR17_PROCID_MASK		0xff
/** @defgroup hsem_rlr17_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr18 RLR18 HSEM Read lock register
@{*/

/** HSEM_RLR18_LOCK Lock indication **/
#define HSEM_RLR18_LOCK		(1 << 31)

#define HSEM_RLR18_MASTERID_SHIFT		8
#define HSEM_RLR18_MASTERID_MASK		0xff
/** @defgroup hsem_rlr18_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR18_PROCID_SHIFT		0
#define HSEM_RLR18_PROCID_MASK		0xff
/** @defgroup hsem_rlr18_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr19 RLR19 HSEM Read lock register
@{*/

/** HSEM_RLR19_LOCK Lock indication **/
#define HSEM_RLR19_LOCK		(1 << 31)

#define HSEM_RLR19_MASTERID_SHIFT		8
#define HSEM_RLR19_MASTERID_MASK		0xff
/** @defgroup hsem_rlr19_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR19_PROCID_SHIFT		0
#define HSEM_RLR19_PROCID_MASK		0xff
/** @defgroup hsem_rlr19_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr20 RLR20 HSEM Read lock register
@{*/

/** HSEM_RLR20_LOCK Lock indication **/
#define HSEM_RLR20_LOCK		(1 << 31)

#define HSEM_RLR20_MASTERID_SHIFT		8
#define HSEM_RLR20_MASTERID_MASK		0xff
/** @defgroup hsem_rlr20_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR20_PROCID_SHIFT		0
#define HSEM_RLR20_PROCID_MASK		0xff
/** @defgroup hsem_rlr20_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr21 RLR21 HSEM Read lock register
@{*/

/** HSEM_RLR21_LOCK Lock indication **/
#define HSEM_RLR21_LOCK		(1 << 31)

#define HSEM_RLR21_MASTERID_SHIFT		8
#define HSEM_RLR21_MASTERID_MASK		0xff
/** @defgroup hsem_rlr21_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR21_PROCID_SHIFT		0
#define HSEM_RLR21_PROCID_MASK		0xff
/** @defgroup hsem_rlr21_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr22 RLR22 HSEM Read lock register
@{*/

/** HSEM_RLR22_LOCK Lock indication **/
#define HSEM_RLR22_LOCK		(1 << 31)

#define HSEM_RLR22_MASTERID_SHIFT		8
#define HSEM_RLR22_MASTERID_MASK		0xff
/** @defgroup hsem_rlr22_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR22_PROCID_SHIFT		0
#define HSEM_RLR22_PROCID_MASK		0xff
/** @defgroup hsem_rlr22_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr23 RLR23 HSEM Read lock register
@{*/

/** HSEM_RLR23_LOCK Lock indication **/
#define HSEM_RLR23_LOCK		(1 << 31)

#define HSEM_RLR23_MASTERID_SHIFT		8
#define HSEM_RLR23_MASTERID_MASK		0xff
/** @defgroup hsem_rlr23_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR23_PROCID_SHIFT		0
#define HSEM_RLR23_PROCID_MASK		0xff
/** @defgroup hsem_rlr23_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr24 RLR24 HSEM Read lock register
@{*/

/** HSEM_RLR24_LOCK Lock indication **/
#define HSEM_RLR24_LOCK		(1 << 31)

#define HSEM_RLR24_MASTERID_SHIFT		8
#define HSEM_RLR24_MASTERID_MASK		0xff
/** @defgroup hsem_rlr24_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR24_PROCID_SHIFT		0
#define HSEM_RLR24_PROCID_MASK		0xff
/** @defgroup hsem_rlr24_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr25 RLR25 HSEM Read lock register
@{*/

/** HSEM_RLR25_LOCK Lock indication **/
#define HSEM_RLR25_LOCK		(1 << 31)

#define HSEM_RLR25_MASTERID_SHIFT		8
#define HSEM_RLR25_MASTERID_MASK		0xff
/** @defgroup hsem_rlr25_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR25_PROCID_SHIFT		0
#define HSEM_RLR25_PROCID_MASK		0xff
/** @defgroup hsem_rlr25_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr26 RLR26 HSEM Read lock register
@{*/

/** HSEM_RLR26_LOCK Lock indication **/
#define HSEM_RLR26_LOCK		(1 << 31)

#define HSEM_RLR26_MASTERID_SHIFT		8
#define HSEM_RLR26_MASTERID_MASK		0xff
/** @defgroup hsem_rlr26_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR26_PROCID_SHIFT		0
#define HSEM_RLR26_PROCID_MASK		0xff
/** @defgroup hsem_rlr26_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr27 RLR27 HSEM Read lock register
@{*/

/** HSEM_RLR27_LOCK Lock indication **/
#define HSEM_RLR27_LOCK		(1 << 31)

#define HSEM_RLR27_MASTERID_SHIFT		8
#define HSEM_RLR27_MASTERID_MASK		0xff
/** @defgroup hsem_rlr27_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR27_PROCID_SHIFT		0
#define HSEM_RLR27_PROCID_MASK		0xff
/** @defgroup hsem_rlr27_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr28 RLR28 HSEM Read lock register
@{*/

/** HSEM_RLR28_LOCK Lock indication **/
#define HSEM_RLR28_LOCK		(1 << 31)

#define HSEM_RLR28_MASTERID_SHIFT		8
#define HSEM_RLR28_MASTERID_MASK		0xff
/** @defgroup hsem_rlr28_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR28_PROCID_SHIFT		0
#define HSEM_RLR28_PROCID_MASK		0xff
/** @defgroup hsem_rlr28_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr29 RLR29 HSEM Read lock register
@{*/

/** HSEM_RLR29_LOCK Lock indication **/
#define HSEM_RLR29_LOCK		(1 << 31)

#define HSEM_RLR29_MASTERID_SHIFT		8
#define HSEM_RLR29_MASTERID_MASK		0xff
/** @defgroup hsem_rlr29_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR29_PROCID_SHIFT		0
#define HSEM_RLR29_PROCID_MASK		0xff
/** @defgroup hsem_rlr29_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr30 RLR30 HSEM Read lock register
@{*/

/** HSEM_RLR30_LOCK Lock indication **/
#define HSEM_RLR30_LOCK		(1 << 31)

#define HSEM_RLR30_MASTERID_SHIFT		8
#define HSEM_RLR30_MASTERID_MASK		0xff
/** @defgroup hsem_rlr30_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR30_PROCID_SHIFT		0
#define HSEM_RLR30_PROCID_MASK		0xff
/** @defgroup hsem_rlr30_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_rlr31 RLR31 HSEM Read lock register
@{*/

/** HSEM_RLR31_LOCK Lock indication **/
#define HSEM_RLR31_LOCK		(1 << 31)

#define HSEM_RLR31_MASTERID_SHIFT		8
#define HSEM_RLR31_MASTERID_MASK		0xff
/** @defgroup hsem_rlr31_masterid MASTERID Semaphore MasterID
@{*/
/**@}*/


#define HSEM_RLR31_PROCID_SHIFT		0
#define HSEM_RLR31_PROCID_MASK		0xff
/** @defgroup hsem_rlr31_procid PROCID Semaphore ProcessID
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_ier IER HSEM Interrupt enable register
@{*/

/** HSEM_IER_ISEM31 Interrupt(N) semaphore n enable bit. **/
#define HSEM_IER_ISEM31		(1 << 31)
/** HSEM_IER_ISEM30 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM30		(1 << 30)
/** HSEM_IER_ISEM29 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM29		(1 << 29)
/** HSEM_IER_ISEM28 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM28		(1 << 28)
/** HSEM_IER_ISEM27 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM27		(1 << 27)
/** HSEM_IER_ISEM26 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM26		(1 << 26)
/** HSEM_IER_ISEM25 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM25		(1 << 25)
/** HSEM_IER_ISEM24 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM24		(1 << 24)
/** HSEM_IER_ISEM23 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM23		(1 << 23)
/** HSEM_IER_ISEM22 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM22		(1 << 22)
/** HSEM_IER_ISEM21 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM21		(1 << 21)
/** HSEM_IER_ISEM20 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM20		(1 << 20)
/** HSEM_IER_ISEM19 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM19		(1 << 19)
/** HSEM_IER_ISEM18 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM18		(1 << 18)
/** HSEM_IER_ISEM17 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM17		(1 << 17)
/** HSEM_IER_ISEM16 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM16		(1 << 16)
/** HSEM_IER_ISEM15 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM15		(1 << 15)
/** HSEM_IER_ISEM14 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM14		(1 << 14)
/** HSEM_IER_ISEM13 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM13		(1 << 13)
/** HSEM_IER_ISEM12 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM12		(1 << 12)
/** HSEM_IER_ISEM11 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM11		(1 << 11)
/** HSEM_IER_ISEM10 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM10		(1 << 10)
/** HSEM_IER_ISEM9 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM9		(1 << 9)
/** HSEM_IER_ISEM8 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM8		(1 << 8)
/** HSEM_IER_ISEM7 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM7		(1 << 7)
/** HSEM_IER_ISEM6 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM6		(1 << 6)
/** HSEM_IER_ISEM5 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM5		(1 << 5)
/** HSEM_IER_ISEM4 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM4		(1 << 4)
/** HSEM_IER_ISEM3 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM3		(1 << 3)
/** HSEM_IER_ISEM2 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM2		(1 << 2)
/** HSEM_IER_ISEM1 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM1		(1 << 1)
/** HSEM_IER_ISEM0 Interrupt semaphore n enable bit **/
#define HSEM_IER_ISEM0		(1 << 0)

/**@}*/

/** @defgroup hsem_icr ICR HSEM Interrupt clear register
@{*/

/** HSEM_ICR_ISEM31 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM31		(1 << 31)
/** HSEM_ICR_ISEM30 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM30		(1 << 30)
/** HSEM_ICR_ISEM29 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM29		(1 << 29)
/** HSEM_ICR_ISEM28 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM28		(1 << 28)
/** HSEM_ICR_ISEM27 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM27		(1 << 27)
/** HSEM_ICR_ISEM26 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM26		(1 << 26)
/** HSEM_ICR_ISEM25 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM25		(1 << 25)
/** HSEM_ICR_ISEM24 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM24		(1 << 24)
/** HSEM_ICR_ISEM23 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM23		(1 << 23)
/** HSEM_ICR_ISEM22 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM22		(1 << 22)
/** HSEM_ICR_ISEM21 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM21		(1 << 21)
/** HSEM_ICR_ISEM20 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM20		(1 << 20)
/** HSEM_ICR_ISEM19 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM19		(1 << 19)
/** HSEM_ICR_ISEM18 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM18		(1 << 18)
/** HSEM_ICR_ISEM17 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM17		(1 << 17)
/** HSEM_ICR_ISEM16 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM16		(1 << 16)
/** HSEM_ICR_ISEM15 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM15		(1 << 15)
/** HSEM_ICR_ISEM14 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM14		(1 << 14)
/** HSEM_ICR_ISEM13 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM13		(1 << 13)
/** HSEM_ICR_ISEM12 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM12		(1 << 12)
/** HSEM_ICR_ISEM11 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM11		(1 << 11)
/** HSEM_ICR_ISEM10 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM10		(1 << 10)
/** HSEM_ICR_ISEM9 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM9		(1 << 9)
/** HSEM_ICR_ISEM8 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM8		(1 << 8)
/** HSEM_ICR_ISEM7 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM7		(1 << 7)
/** HSEM_ICR_ISEM6 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM6		(1 << 6)
/** HSEM_ICR_ISEM5 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM5		(1 << 5)
/** HSEM_ICR_ISEM4 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM4		(1 << 4)
/** HSEM_ICR_ISEM3 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM3		(1 << 3)
/** HSEM_ICR_ISEM2 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM2		(1 << 2)
/** HSEM_ICR_ISEM1 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM1		(1 << 1)
/** HSEM_ICR_ISEM0 Interrupt(N) semaphore n clear bit **/
#define HSEM_ICR_ISEM0		(1 << 0)

/**@}*/

/** @defgroup hsem_isr ISR HSEM Interrupt status register
@{*/

/** HSEM_ISR_ISEM31 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM31		(1 << 31)
/** HSEM_ISR_ISEM30 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM30		(1 << 30)
/** HSEM_ISR_ISEM29 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM29		(1 << 29)
/** HSEM_ISR_ISEM28 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM28		(1 << 28)
/** HSEM_ISR_ISEM27 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM27		(1 << 27)
/** HSEM_ISR_ISEM26 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM26		(1 << 26)
/** HSEM_ISR_ISEM25 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM25		(1 << 25)
/** HSEM_ISR_ISEM24 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM24		(1 << 24)
/** HSEM_ISR_ISEM23 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM23		(1 << 23)
/** HSEM_ISR_ISEM22 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM22		(1 << 22)
/** HSEM_ISR_ISEM21 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM21		(1 << 21)
/** HSEM_ISR_ISEM20 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM20		(1 << 20)
/** HSEM_ISR_ISEM19 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM19		(1 << 19)
/** HSEM_ISR_ISEM18 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM18		(1 << 18)
/** HSEM_ISR_ISEM17 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM17		(1 << 17)
/** HSEM_ISR_ISEM16 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM16		(1 << 16)
/** HSEM_ISR_ISEM15 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM15		(1 << 15)
/** HSEM_ISR_ISEM14 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM14		(1 << 14)
/** HSEM_ISR_ISEM13 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM13		(1 << 13)
/** HSEM_ISR_ISEM12 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM12		(1 << 12)
/** HSEM_ISR_ISEM11 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM11		(1 << 11)
/** HSEM_ISR_ISEM10 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM10		(1 << 10)
/** HSEM_ISR_ISEM9 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM9		(1 << 9)
/** HSEM_ISR_ISEM8 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM8		(1 << 8)
/** HSEM_ISR_ISEM7 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM7		(1 << 7)
/** HSEM_ISR_ISEM6 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM6		(1 << 6)
/** HSEM_ISR_ISEM5 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM5		(1 << 5)
/** HSEM_ISR_ISEM4 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM4		(1 << 4)
/** HSEM_ISR_ISEM3 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM3		(1 << 3)
/** HSEM_ISR_ISEM2 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM2		(1 << 2)
/** HSEM_ISR_ISEM1 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM1		(1 << 1)
/** HSEM_ISR_ISEM0 Interrupt(N) semaphore n status bit before enable (mask) **/
#define HSEM_ISR_ISEM0		(1 << 0)

/**@}*/

/** @defgroup hsem_misr MISR HSEM Masked interrupt status register
@{*/

/** HSEM_MISR_ISEM31 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM31		(1 << 31)
/** HSEM_MISR_ISEM30 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM30		(1 << 30)
/** HSEM_MISR_ISEM29 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM29		(1 << 29)
/** HSEM_MISR_ISEM28 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM28		(1 << 28)
/** HSEM_MISR_ISEM27 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM27		(1 << 27)
/** HSEM_MISR_ISEM26 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM26		(1 << 26)
/** HSEM_MISR_ISEM25 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM25		(1 << 25)
/** HSEM_MISR_ISEM24 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM24		(1 << 24)
/** HSEM_MISR_ISEM23 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM23		(1 << 23)
/** HSEM_MISR_ISEM22 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM22		(1 << 22)
/** HSEM_MISR_ISEM21 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM21		(1 << 21)
/** HSEM_MISR_ISEM20 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM20		(1 << 20)
/** HSEM_MISR_ISEM19 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM19		(1 << 19)
/** HSEM_MISR_ISEM18 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM18		(1 << 18)
/** HSEM_MISR_ISEM17 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM17		(1 << 17)
/** HSEM_MISR_ISEM16 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM16		(1 << 16)
/** HSEM_MISR_ISEM15 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM15		(1 << 15)
/** HSEM_MISR_ISEM14 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM14		(1 << 14)
/** HSEM_MISR_ISEM13 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM13		(1 << 13)
/** HSEM_MISR_ISEM12 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM12		(1 << 12)
/** HSEM_MISR_ISEM11 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM11		(1 << 11)
/** HSEM_MISR_ISEM10 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM10		(1 << 10)
/** HSEM_MISR_ISEM9 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM9		(1 << 9)
/** HSEM_MISR_ISEM8 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM8		(1 << 8)
/** HSEM_MISR_ISEM7 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM7		(1 << 7)
/** HSEM_MISR_ISEM6 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM6		(1 << 6)
/** HSEM_MISR_ISEM5 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM5		(1 << 5)
/** HSEM_MISR_ISEM4 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM4		(1 << 4)
/** HSEM_MISR_ISEM3 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM3		(1 << 3)
/** HSEM_MISR_ISEM2 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM2		(1 << 2)
/** HSEM_MISR_ISEM1 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM1		(1 << 1)
/** HSEM_MISR_ISEM0 masked interrupt(N) semaphore n status bit after enable (mask) **/
#define HSEM_MISR_ISEM0		(1 << 0)

/**@}*/

/** @defgroup hsem_cr CR HSEM Clear register
@{*/


#define HSEM_CR_KEY_SHIFT		16
#define HSEM_CR_KEY_MASK		0xffff
/** @defgroup hsem_cr_key KEY Semaphore clear Key
@{*/
/**@}*/


#define HSEM_CR_MASTERID_SHIFT		8
#define HSEM_CR_MASTERID_MASK		0xff
/** @defgroup hsem_cr_masterid MASTERID MasterID of semaphores to be cleared
@{*/
/**@}*/


/**@}*/

/** @defgroup hsem_keyr KEYR HSEM Interrupt clear register
@{*/


#define HSEM_KEYR_KEY_SHIFT		16
#define HSEM_KEYR_KEY_MASK		0xffff
/** @defgroup hsem_keyr_key KEY Semaphore Clear Key
@{*/
/**@}*/


/**@}*/

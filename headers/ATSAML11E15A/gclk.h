#pragma once 

/* --- GCLK: Generic Clock Generator -------------------------------- */

/** @defgroup gclk_registers Generic Clock Generator Register
@{*/

/** GCLK_CTRLA Control **/
#define GCLK_CTRLA			MMIO32(GCLK_BASE + 0x00)
/** GCLK_SYNCBUSY Synchronization Busy **/
#define GCLK_SYNCBUSY			MMIO32(GCLK_BASE + 0x04)
/** GCLK_GENCTRL[0] Generic Clock Generator Control **/
#define GCLK_GENCTRL[0]			MMIO32(GCLK_BASE + 0x20)
/** GCLK_GENCTRL[1] Generic Clock Generator Control **/
#define GCLK_GENCTRL[1]			MMIO32(GCLK_BASE + 0x24)
/** GCLK_GENCTRL[2] Generic Clock Generator Control **/
#define GCLK_GENCTRL[2]			MMIO32(GCLK_BASE + 0x28)
/** GCLK_GENCTRL[3] Generic Clock Generator Control **/
#define GCLK_GENCTRL[3]			MMIO32(GCLK_BASE + 0x2c)
/** GCLK_GENCTRL[4] Generic Clock Generator Control **/
#define GCLK_GENCTRL[4]			MMIO32(GCLK_BASE + 0x30)
/** GCLK_PCHCTRL[0] Peripheral Clock Control **/
#define GCLK_PCHCTRL[0]			MMIO32(GCLK_BASE + 0x80)
/** GCLK_PCHCTRL[1] Peripheral Clock Control **/
#define GCLK_PCHCTRL[1]			MMIO32(GCLK_BASE + 0x84)
/** GCLK_PCHCTRL[2] Peripheral Clock Control **/
#define GCLK_PCHCTRL[2]			MMIO32(GCLK_BASE + 0x88)
/** GCLK_PCHCTRL[3] Peripheral Clock Control **/
#define GCLK_PCHCTRL[3]			MMIO32(GCLK_BASE + 0x8c)
/** GCLK_PCHCTRL[4] Peripheral Clock Control **/
#define GCLK_PCHCTRL[4]			MMIO32(GCLK_BASE + 0x90)
/** GCLK_PCHCTRL[5] Peripheral Clock Control **/
#define GCLK_PCHCTRL[5]			MMIO32(GCLK_BASE + 0x94)
/** GCLK_PCHCTRL[6] Peripheral Clock Control **/
#define GCLK_PCHCTRL[6]			MMIO32(GCLK_BASE + 0x98)
/** GCLK_PCHCTRL[7] Peripheral Clock Control **/
#define GCLK_PCHCTRL[7]			MMIO32(GCLK_BASE + 0x9c)
/** GCLK_PCHCTRL[8] Peripheral Clock Control **/
#define GCLK_PCHCTRL[8]			MMIO32(GCLK_BASE + 0xa0)
/** GCLK_PCHCTRL[9] Peripheral Clock Control **/
#define GCLK_PCHCTRL[9]			MMIO32(GCLK_BASE + 0xa4)
/** GCLK_PCHCTRL[10] Peripheral Clock Control **/
#define GCLK_PCHCTRL[10]			MMIO32(GCLK_BASE + 0xa8)
/** GCLK_PCHCTRL[11] Peripheral Clock Control **/
#define GCLK_PCHCTRL[11]			MMIO32(GCLK_BASE + 0xac)
/** GCLK_PCHCTRL[12] Peripheral Clock Control **/
#define GCLK_PCHCTRL[12]			MMIO32(GCLK_BASE + 0xb0)
/** GCLK_PCHCTRL[13] Peripheral Clock Control **/
#define GCLK_PCHCTRL[13]			MMIO32(GCLK_BASE + 0xb4)
/** GCLK_PCHCTRL[14] Peripheral Clock Control **/
#define GCLK_PCHCTRL[14]			MMIO32(GCLK_BASE + 0xb8)
/** GCLK_PCHCTRL[15] Peripheral Clock Control **/
#define GCLK_PCHCTRL[15]			MMIO32(GCLK_BASE + 0xbc)
/** GCLK_PCHCTRL[16] Peripheral Clock Control **/
#define GCLK_PCHCTRL[16]			MMIO32(GCLK_BASE + 0xc0)
/** GCLK_PCHCTRL[17] Peripheral Clock Control **/
#define GCLK_PCHCTRL[17]			MMIO32(GCLK_BASE + 0xc4)
/** GCLK_PCHCTRL[18] Peripheral Clock Control **/
#define GCLK_PCHCTRL[18]			MMIO32(GCLK_BASE + 0xc8)
/** GCLK_PCHCTRL[19] Peripheral Clock Control **/
#define GCLK_PCHCTRL[19]			MMIO32(GCLK_BASE + 0xcc)
/** GCLK_PCHCTRL[20] Peripheral Clock Control **/
#define GCLK_PCHCTRL[20]			MMIO32(GCLK_BASE + 0xd0)

/**@}*/


/** @defgroup gclk_ctrla CTRLA Control
@{*/

/** GCLK_CTRLA_SWRST Software Reset **/
#define GCLK_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** GCLK_SYNCBUSY_GENCTRL4 Generic Clock Generator Control 4 Synchronization Busy bit **/
#define GCLK_SYNCBUSY_GENCTRL4		(1 << 6)
/** GCLK_SYNCBUSY_GENCTRL3 Generic Clock Generator Control 3 Synchronization Busy bit **/
#define GCLK_SYNCBUSY_GENCTRL3		(1 << 5)
/** GCLK_SYNCBUSY_GENCTRL2 Generic Clock Generator Control 2 Synchronization Busy bit **/
#define GCLK_SYNCBUSY_GENCTRL2		(1 << 4)
/** GCLK_SYNCBUSY_GENCTRL1 Generic Clock Generator Control 1 Synchronization Busy bit **/
#define GCLK_SYNCBUSY_GENCTRL1		(1 << 3)
/** GCLK_SYNCBUSY_GENCTRL0 Generic Clock Generator Control 0 Synchronization Busy bit **/
#define GCLK_SYNCBUSY_GENCTRL0		(1 << 2)
/** GCLK_SYNCBUSY_SWRST Software Reset Synchroniation Busy bit **/
#define GCLK_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_genctrl[0] GENCTRL[0] Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL[0]_DIV_SHIFT		16
#define GCLK_GENCTRL[0]_DIV_MASK		0xffff
/** @defgroup gclk_genctrl[0]_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL[0]_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL[0]_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL[0]_DIVSEL Divide Selection **/
#define GCLK_GENCTRL[0]_DIVSEL		(1 << 12)
/** GCLK_GENCTRL[0]_OE Output Enable **/
#define GCLK_GENCTRL[0]_OE		(1 << 11)
/** GCLK_GENCTRL[0]_OOV Output Off Value **/
#define GCLK_GENCTRL[0]_OOV		(1 << 10)
/** GCLK_GENCTRL[0]_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL[0]_IDC		(1 << 9)
/** GCLK_GENCTRL[0]_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL[0]_GENEN		(1 << 8)

#define GCLK_GENCTRL[0]_SRC_SHIFT		0
#define GCLK_GENCTRL[0]_SRC_MASK		0x07
/** @defgroup gclk_genctrl[0]_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl[1] GENCTRL[1] Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL[1]_DIV_SHIFT		16
#define GCLK_GENCTRL[1]_DIV_MASK		0xffff
/** @defgroup gclk_genctrl[1]_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL[1]_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL[1]_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL[1]_DIVSEL Divide Selection **/
#define GCLK_GENCTRL[1]_DIVSEL		(1 << 12)
/** GCLK_GENCTRL[1]_OE Output Enable **/
#define GCLK_GENCTRL[1]_OE		(1 << 11)
/** GCLK_GENCTRL[1]_OOV Output Off Value **/
#define GCLK_GENCTRL[1]_OOV		(1 << 10)
/** GCLK_GENCTRL[1]_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL[1]_IDC		(1 << 9)
/** GCLK_GENCTRL[1]_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL[1]_GENEN		(1 << 8)

#define GCLK_GENCTRL[1]_SRC_SHIFT		0
#define GCLK_GENCTRL[1]_SRC_MASK		0x07
/** @defgroup gclk_genctrl[1]_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl[2] GENCTRL[2] Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL[2]_DIV_SHIFT		16
#define GCLK_GENCTRL[2]_DIV_MASK		0xffff
/** @defgroup gclk_genctrl[2]_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL[2]_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL[2]_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL[2]_DIVSEL Divide Selection **/
#define GCLK_GENCTRL[2]_DIVSEL		(1 << 12)
/** GCLK_GENCTRL[2]_OE Output Enable **/
#define GCLK_GENCTRL[2]_OE		(1 << 11)
/** GCLK_GENCTRL[2]_OOV Output Off Value **/
#define GCLK_GENCTRL[2]_OOV		(1 << 10)
/** GCLK_GENCTRL[2]_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL[2]_IDC		(1 << 9)
/** GCLK_GENCTRL[2]_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL[2]_GENEN		(1 << 8)

#define GCLK_GENCTRL[2]_SRC_SHIFT		0
#define GCLK_GENCTRL[2]_SRC_MASK		0x07
/** @defgroup gclk_genctrl[2]_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl[3] GENCTRL[3] Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL[3]_DIV_SHIFT		16
#define GCLK_GENCTRL[3]_DIV_MASK		0xffff
/** @defgroup gclk_genctrl[3]_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL[3]_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL[3]_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL[3]_DIVSEL Divide Selection **/
#define GCLK_GENCTRL[3]_DIVSEL		(1 << 12)
/** GCLK_GENCTRL[3]_OE Output Enable **/
#define GCLK_GENCTRL[3]_OE		(1 << 11)
/** GCLK_GENCTRL[3]_OOV Output Off Value **/
#define GCLK_GENCTRL[3]_OOV		(1 << 10)
/** GCLK_GENCTRL[3]_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL[3]_IDC		(1 << 9)
/** GCLK_GENCTRL[3]_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL[3]_GENEN		(1 << 8)

#define GCLK_GENCTRL[3]_SRC_SHIFT		0
#define GCLK_GENCTRL[3]_SRC_MASK		0x07
/** @defgroup gclk_genctrl[3]_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl[4] GENCTRL[4] Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL[4]_DIV_SHIFT		16
#define GCLK_GENCTRL[4]_DIV_MASK		0xffff
/** @defgroup gclk_genctrl[4]_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL[4]_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL[4]_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL[4]_DIVSEL Divide Selection **/
#define GCLK_GENCTRL[4]_DIVSEL		(1 << 12)
/** GCLK_GENCTRL[4]_OE Output Enable **/
#define GCLK_GENCTRL[4]_OE		(1 << 11)
/** GCLK_GENCTRL[4]_OOV Output Off Value **/
#define GCLK_GENCTRL[4]_OOV		(1 << 10)
/** GCLK_GENCTRL[4]_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL[4]_IDC		(1 << 9)
/** GCLK_GENCTRL[4]_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL[4]_GENEN		(1 << 8)

#define GCLK_GENCTRL[4]_SRC_SHIFT		0
#define GCLK_GENCTRL[4]_SRC_MASK		0x07
/** @defgroup gclk_genctrl[4]_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[0] PCHCTRL[0] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[0]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[0]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[0]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[0]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[0]_GEN_SHIFT		0
#define GCLK_PCHCTRL[0]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[0]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[1] PCHCTRL[1] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[1]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[1]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[1]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[1]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[1]_GEN_SHIFT		0
#define GCLK_PCHCTRL[1]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[1]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[2] PCHCTRL[2] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[2]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[2]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[2]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[2]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[2]_GEN_SHIFT		0
#define GCLK_PCHCTRL[2]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[2]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[3] PCHCTRL[3] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[3]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[3]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[3]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[3]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[3]_GEN_SHIFT		0
#define GCLK_PCHCTRL[3]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[3]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[4] PCHCTRL[4] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[4]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[4]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[4]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[4]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[4]_GEN_SHIFT		0
#define GCLK_PCHCTRL[4]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[4]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[5] PCHCTRL[5] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[5]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[5]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[5]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[5]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[5]_GEN_SHIFT		0
#define GCLK_PCHCTRL[5]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[5]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[6] PCHCTRL[6] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[6]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[6]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[6]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[6]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[6]_GEN_SHIFT		0
#define GCLK_PCHCTRL[6]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[6]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[7] PCHCTRL[7] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[7]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[7]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[7]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[7]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[7]_GEN_SHIFT		0
#define GCLK_PCHCTRL[7]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[7]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[8] PCHCTRL[8] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[8]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[8]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[8]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[8]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[8]_GEN_SHIFT		0
#define GCLK_PCHCTRL[8]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[8]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[9] PCHCTRL[9] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[9]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[9]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[9]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[9]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[9]_GEN_SHIFT		0
#define GCLK_PCHCTRL[9]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[9]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[10] PCHCTRL[10] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[10]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[10]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[10]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[10]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[10]_GEN_SHIFT		0
#define GCLK_PCHCTRL[10]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[10]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[11] PCHCTRL[11] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[11]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[11]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[11]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[11]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[11]_GEN_SHIFT		0
#define GCLK_PCHCTRL[11]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[11]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[12] PCHCTRL[12] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[12]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[12]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[12]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[12]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[12]_GEN_SHIFT		0
#define GCLK_PCHCTRL[12]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[12]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[13] PCHCTRL[13] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[13]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[13]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[13]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[13]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[13]_GEN_SHIFT		0
#define GCLK_PCHCTRL[13]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[13]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[14] PCHCTRL[14] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[14]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[14]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[14]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[14]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[14]_GEN_SHIFT		0
#define GCLK_PCHCTRL[14]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[14]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[15] PCHCTRL[15] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[15]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[15]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[15]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[15]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[15]_GEN_SHIFT		0
#define GCLK_PCHCTRL[15]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[15]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[16] PCHCTRL[16] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[16]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[16]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[16]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[16]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[16]_GEN_SHIFT		0
#define GCLK_PCHCTRL[16]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[16]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[17] PCHCTRL[17] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[17]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[17]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[17]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[17]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[17]_GEN_SHIFT		0
#define GCLK_PCHCTRL[17]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[17]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[18] PCHCTRL[18] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[18]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[18]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[18]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[18]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[18]_GEN_SHIFT		0
#define GCLK_PCHCTRL[18]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[18]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[19] PCHCTRL[19] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[19]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[19]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[19]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[19]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[19]_GEN_SHIFT		0
#define GCLK_PCHCTRL[19]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[19]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl[20] PCHCTRL[20] Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL[20]_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL[20]_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL[20]_CHEN Channel Enable **/
#define GCLK_PCHCTRL[20]_CHEN		(1 << 6)

#define GCLK_PCHCTRL[20]_GEN_SHIFT		0
#define GCLK_PCHCTRL[20]_GEN_MASK		0x07
/** @defgroup gclk_pchctrl[20]_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

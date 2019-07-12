#pragma once 

/* --- GCLK: Generic Clock Generator -------------------------------- */

/** @defgroup gclk_registers Generic Clock Generator Register
@{*/

/** GCLK_CTRLA Control **/
#define GCLK_CTRLA			MMIO32(GCLK_BASE + 0x00)
/** GCLK_SYNCBUSY Synchronization Busy **/
#define GCLK_SYNCBUSY			MMIO32(GCLK_BASE + 0x04)
/** GCLK_GENCTRL0 Generic Clock Generator Control **/
#define GCLK_GENCTRL0			MMIO32(GCLK_BASE + 0x20)
/** GCLK_GENCTRL1 Generic Clock Generator Control **/
#define GCLK_GENCTRL1			MMIO32(GCLK_BASE + 0x24)
/** GCLK_GENCTRL2 Generic Clock Generator Control **/
#define GCLK_GENCTRL2			MMIO32(GCLK_BASE + 0x28)
/** GCLK_GENCTRL3 Generic Clock Generator Control **/
#define GCLK_GENCTRL3			MMIO32(GCLK_BASE + 0x2c)
/** GCLK_GENCTRL4 Generic Clock Generator Control **/
#define GCLK_GENCTRL4			MMIO32(GCLK_BASE + 0x30)
/** GCLK_GENCTRL5 Generic Clock Generator Control **/
#define GCLK_GENCTRL5			MMIO32(GCLK_BASE + 0x34)
/** GCLK_GENCTRL6 Generic Clock Generator Control **/
#define GCLK_GENCTRL6			MMIO32(GCLK_BASE + 0x38)
/** GCLK_GENCTRL7 Generic Clock Generator Control **/
#define GCLK_GENCTRL7			MMIO32(GCLK_BASE + 0x3c)
/** GCLK_GENCTRL8 Generic Clock Generator Control **/
#define GCLK_GENCTRL8			MMIO32(GCLK_BASE + 0x40)
/** GCLK_PCHCTRL0 Peripheral Clock Control **/
#define GCLK_PCHCTRL0			MMIO32(GCLK_BASE + 0x80)
/** GCLK_PCHCTRL1 Peripheral Clock Control **/
#define GCLK_PCHCTRL1			MMIO32(GCLK_BASE + 0x84)
/** GCLK_PCHCTRL2 Peripheral Clock Control **/
#define GCLK_PCHCTRL2			MMIO32(GCLK_BASE + 0x88)
/** GCLK_PCHCTRL3 Peripheral Clock Control **/
#define GCLK_PCHCTRL3			MMIO32(GCLK_BASE + 0x8c)
/** GCLK_PCHCTRL4 Peripheral Clock Control **/
#define GCLK_PCHCTRL4			MMIO32(GCLK_BASE + 0x90)
/** GCLK_PCHCTRL5 Peripheral Clock Control **/
#define GCLK_PCHCTRL5			MMIO32(GCLK_BASE + 0x94)
/** GCLK_PCHCTRL6 Peripheral Clock Control **/
#define GCLK_PCHCTRL6			MMIO32(GCLK_BASE + 0x98)
/** GCLK_PCHCTRL7 Peripheral Clock Control **/
#define GCLK_PCHCTRL7			MMIO32(GCLK_BASE + 0x9c)
/** GCLK_PCHCTRL8 Peripheral Clock Control **/
#define GCLK_PCHCTRL8			MMIO32(GCLK_BASE + 0xa0)
/** GCLK_PCHCTRL9 Peripheral Clock Control **/
#define GCLK_PCHCTRL9			MMIO32(GCLK_BASE + 0xa4)
/** GCLK_PCHCTRL10 Peripheral Clock Control **/
#define GCLK_PCHCTRL10			MMIO32(GCLK_BASE + 0xa8)
/** GCLK_PCHCTRL11 Peripheral Clock Control **/
#define GCLK_PCHCTRL11			MMIO32(GCLK_BASE + 0xac)
/** GCLK_PCHCTRL12 Peripheral Clock Control **/
#define GCLK_PCHCTRL12			MMIO32(GCLK_BASE + 0xb0)
/** GCLK_PCHCTRL13 Peripheral Clock Control **/
#define GCLK_PCHCTRL13			MMIO32(GCLK_BASE + 0xb4)
/** GCLK_PCHCTRL14 Peripheral Clock Control **/
#define GCLK_PCHCTRL14			MMIO32(GCLK_BASE + 0xb8)
/** GCLK_PCHCTRL15 Peripheral Clock Control **/
#define GCLK_PCHCTRL15			MMIO32(GCLK_BASE + 0xbc)
/** GCLK_PCHCTRL16 Peripheral Clock Control **/
#define GCLK_PCHCTRL16			MMIO32(GCLK_BASE + 0xc0)
/** GCLK_PCHCTRL17 Peripheral Clock Control **/
#define GCLK_PCHCTRL17			MMIO32(GCLK_BASE + 0xc4)
/** GCLK_PCHCTRL18 Peripheral Clock Control **/
#define GCLK_PCHCTRL18			MMIO32(GCLK_BASE + 0xc8)
/** GCLK_PCHCTRL19 Peripheral Clock Control **/
#define GCLK_PCHCTRL19			MMIO32(GCLK_BASE + 0xcc)
/** GCLK_PCHCTRL20 Peripheral Clock Control **/
#define GCLK_PCHCTRL20			MMIO32(GCLK_BASE + 0xd0)
/** GCLK_PCHCTRL21 Peripheral Clock Control **/
#define GCLK_PCHCTRL21			MMIO32(GCLK_BASE + 0xd4)
/** GCLK_PCHCTRL22 Peripheral Clock Control **/
#define GCLK_PCHCTRL22			MMIO32(GCLK_BASE + 0xd8)
/** GCLK_PCHCTRL23 Peripheral Clock Control **/
#define GCLK_PCHCTRL23			MMIO32(GCLK_BASE + 0xdc)
/** GCLK_PCHCTRL24 Peripheral Clock Control **/
#define GCLK_PCHCTRL24			MMIO32(GCLK_BASE + 0xe0)
/** GCLK_PCHCTRL25 Peripheral Clock Control **/
#define GCLK_PCHCTRL25			MMIO32(GCLK_BASE + 0xe4)
/** GCLK_PCHCTRL26 Peripheral Clock Control **/
#define GCLK_PCHCTRL26			MMIO32(GCLK_BASE + 0xe8)
/** GCLK_PCHCTRL27 Peripheral Clock Control **/
#define GCLK_PCHCTRL27			MMIO32(GCLK_BASE + 0xec)
/** GCLK_PCHCTRL28 Peripheral Clock Control **/
#define GCLK_PCHCTRL28			MMIO32(GCLK_BASE + 0xf0)
/** GCLK_PCHCTRL29 Peripheral Clock Control **/
#define GCLK_PCHCTRL29			MMIO32(GCLK_BASE + 0xf4)
/** GCLK_PCHCTRL30 Peripheral Clock Control **/
#define GCLK_PCHCTRL30			MMIO32(GCLK_BASE + 0xf8)
/** GCLK_PCHCTRL31 Peripheral Clock Control **/
#define GCLK_PCHCTRL31			MMIO32(GCLK_BASE + 0xfc)
/** GCLK_PCHCTRL32 Peripheral Clock Control **/
#define GCLK_PCHCTRL32			MMIO32(GCLK_BASE + 0x100)
/** GCLK_PCHCTRL33 Peripheral Clock Control **/
#define GCLK_PCHCTRL33			MMIO32(GCLK_BASE + 0x104)
/** GCLK_PCHCTRL34 Peripheral Clock Control **/
#define GCLK_PCHCTRL34			MMIO32(GCLK_BASE + 0x108)
/** GCLK_PCHCTRL35 Peripheral Clock Control **/
#define GCLK_PCHCTRL35			MMIO32(GCLK_BASE + 0x10c)

/**@}*/


/** @defgroup gclk_ctrla CTRLA Control
@{*/

/** GCLK_CTRLA_SWRST Software Reset **/
#define GCLK_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** GCLK_SYNCBUSY_GENCTRL8 Generic Clock Generator Control 8 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL8		(1 << 10)
/** GCLK_SYNCBUSY_GENCTRL7 Generic Clock Generator Control 7 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL7		(1 << 9)
/** GCLK_SYNCBUSY_GENCTRL6 Generic Clock Generator Control 6 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL6		(1 << 8)
/** GCLK_SYNCBUSY_GENCTRL5 Generic Clock Generator Control 5 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL5		(1 << 7)
/** GCLK_SYNCBUSY_GENCTRL4 Generic Clock Generator Control 4 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL4		(1 << 6)
/** GCLK_SYNCBUSY_GENCTRL3 Generic Clock Generator Control 3 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL3		(1 << 5)
/** GCLK_SYNCBUSY_GENCTRL2 Generic Clock Generator Control 2 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL2		(1 << 4)
/** GCLK_SYNCBUSY_GENCTRL1 Generic Clock Generator Control 1 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL1		(1 << 3)
/** GCLK_SYNCBUSY_GENCTRL0 Generic Clock Generator Control 0 Synchronization Busy bits **/
#define GCLK_SYNCBUSY_GENCTRL0		(1 << 2)
/** GCLK_SYNCBUSY_SWRST Software Reset Synchroniation Busy bit **/
#define GCLK_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_genctrl0 GENCTRL0 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL0_DIV_SHIFT		16
#define GCLK_GENCTRL0_DIV_MASK		0xffff
/** @defgroup gclk_genctrl0_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL0_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL0_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL0_DIVSEL Divide Selection **/
#define GCLK_GENCTRL0_DIVSEL		(1 << 12)
/** GCLK_GENCTRL0_OE Output Enable **/
#define GCLK_GENCTRL0_OE		(1 << 11)
/** GCLK_GENCTRL0_OOV Output Off Value **/
#define GCLK_GENCTRL0_OOV		(1 << 10)
/** GCLK_GENCTRL0_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL0_IDC		(1 << 9)
/** GCLK_GENCTRL0_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL0_GENEN		(1 << 8)

#define GCLK_GENCTRL0_SRC_SHIFT		0
#define GCLK_GENCTRL0_SRC_MASK		0x0f
/** @defgroup gclk_genctrl0_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl1 GENCTRL1 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL1_DIV_SHIFT		16
#define GCLK_GENCTRL1_DIV_MASK		0xffff
/** @defgroup gclk_genctrl1_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL1_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL1_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL1_DIVSEL Divide Selection **/
#define GCLK_GENCTRL1_DIVSEL		(1 << 12)
/** GCLK_GENCTRL1_OE Output Enable **/
#define GCLK_GENCTRL1_OE		(1 << 11)
/** GCLK_GENCTRL1_OOV Output Off Value **/
#define GCLK_GENCTRL1_OOV		(1 << 10)
/** GCLK_GENCTRL1_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL1_IDC		(1 << 9)
/** GCLK_GENCTRL1_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL1_GENEN		(1 << 8)

#define GCLK_GENCTRL1_SRC_SHIFT		0
#define GCLK_GENCTRL1_SRC_MASK		0x0f
/** @defgroup gclk_genctrl1_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl2 GENCTRL2 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL2_DIV_SHIFT		16
#define GCLK_GENCTRL2_DIV_MASK		0xffff
/** @defgroup gclk_genctrl2_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL2_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL2_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL2_DIVSEL Divide Selection **/
#define GCLK_GENCTRL2_DIVSEL		(1 << 12)
/** GCLK_GENCTRL2_OE Output Enable **/
#define GCLK_GENCTRL2_OE		(1 << 11)
/** GCLK_GENCTRL2_OOV Output Off Value **/
#define GCLK_GENCTRL2_OOV		(1 << 10)
/** GCLK_GENCTRL2_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL2_IDC		(1 << 9)
/** GCLK_GENCTRL2_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL2_GENEN		(1 << 8)

#define GCLK_GENCTRL2_SRC_SHIFT		0
#define GCLK_GENCTRL2_SRC_MASK		0x0f
/** @defgroup gclk_genctrl2_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl3 GENCTRL3 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL3_DIV_SHIFT		16
#define GCLK_GENCTRL3_DIV_MASK		0xffff
/** @defgroup gclk_genctrl3_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL3_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL3_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL3_DIVSEL Divide Selection **/
#define GCLK_GENCTRL3_DIVSEL		(1 << 12)
/** GCLK_GENCTRL3_OE Output Enable **/
#define GCLK_GENCTRL3_OE		(1 << 11)
/** GCLK_GENCTRL3_OOV Output Off Value **/
#define GCLK_GENCTRL3_OOV		(1 << 10)
/** GCLK_GENCTRL3_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL3_IDC		(1 << 9)
/** GCLK_GENCTRL3_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL3_GENEN		(1 << 8)

#define GCLK_GENCTRL3_SRC_SHIFT		0
#define GCLK_GENCTRL3_SRC_MASK		0x0f
/** @defgroup gclk_genctrl3_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl4 GENCTRL4 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL4_DIV_SHIFT		16
#define GCLK_GENCTRL4_DIV_MASK		0xffff
/** @defgroup gclk_genctrl4_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL4_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL4_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL4_DIVSEL Divide Selection **/
#define GCLK_GENCTRL4_DIVSEL		(1 << 12)
/** GCLK_GENCTRL4_OE Output Enable **/
#define GCLK_GENCTRL4_OE		(1 << 11)
/** GCLK_GENCTRL4_OOV Output Off Value **/
#define GCLK_GENCTRL4_OOV		(1 << 10)
/** GCLK_GENCTRL4_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL4_IDC		(1 << 9)
/** GCLK_GENCTRL4_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL4_GENEN		(1 << 8)

#define GCLK_GENCTRL4_SRC_SHIFT		0
#define GCLK_GENCTRL4_SRC_MASK		0x0f
/** @defgroup gclk_genctrl4_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl5 GENCTRL5 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL5_DIV_SHIFT		16
#define GCLK_GENCTRL5_DIV_MASK		0xffff
/** @defgroup gclk_genctrl5_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL5_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL5_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL5_DIVSEL Divide Selection **/
#define GCLK_GENCTRL5_DIVSEL		(1 << 12)
/** GCLK_GENCTRL5_OE Output Enable **/
#define GCLK_GENCTRL5_OE		(1 << 11)
/** GCLK_GENCTRL5_OOV Output Off Value **/
#define GCLK_GENCTRL5_OOV		(1 << 10)
/** GCLK_GENCTRL5_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL5_IDC		(1 << 9)
/** GCLK_GENCTRL5_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL5_GENEN		(1 << 8)

#define GCLK_GENCTRL5_SRC_SHIFT		0
#define GCLK_GENCTRL5_SRC_MASK		0x0f
/** @defgroup gclk_genctrl5_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl6 GENCTRL6 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL6_DIV_SHIFT		16
#define GCLK_GENCTRL6_DIV_MASK		0xffff
/** @defgroup gclk_genctrl6_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL6_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL6_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL6_DIVSEL Divide Selection **/
#define GCLK_GENCTRL6_DIVSEL		(1 << 12)
/** GCLK_GENCTRL6_OE Output Enable **/
#define GCLK_GENCTRL6_OE		(1 << 11)
/** GCLK_GENCTRL6_OOV Output Off Value **/
#define GCLK_GENCTRL6_OOV		(1 << 10)
/** GCLK_GENCTRL6_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL6_IDC		(1 << 9)
/** GCLK_GENCTRL6_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL6_GENEN		(1 << 8)

#define GCLK_GENCTRL6_SRC_SHIFT		0
#define GCLK_GENCTRL6_SRC_MASK		0x0f
/** @defgroup gclk_genctrl6_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl7 GENCTRL7 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL7_DIV_SHIFT		16
#define GCLK_GENCTRL7_DIV_MASK		0xffff
/** @defgroup gclk_genctrl7_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL7_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL7_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL7_DIVSEL Divide Selection **/
#define GCLK_GENCTRL7_DIVSEL		(1 << 12)
/** GCLK_GENCTRL7_OE Output Enable **/
#define GCLK_GENCTRL7_OE		(1 << 11)
/** GCLK_GENCTRL7_OOV Output Off Value **/
#define GCLK_GENCTRL7_OOV		(1 << 10)
/** GCLK_GENCTRL7_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL7_IDC		(1 << 9)
/** GCLK_GENCTRL7_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL7_GENEN		(1 << 8)

#define GCLK_GENCTRL7_SRC_SHIFT		0
#define GCLK_GENCTRL7_SRC_MASK		0x0f
/** @defgroup gclk_genctrl7_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl8 GENCTRL8 Generic Clock Generator Control
@{*/


#define GCLK_GENCTRL8_DIV_SHIFT		16
#define GCLK_GENCTRL8_DIV_MASK		0xffff
/** @defgroup gclk_genctrl8_div DIV Division Factor
@{*/
/**@}*/

/** GCLK_GENCTRL8_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL8_RUNSTDBY		(1 << 13)
/** GCLK_GENCTRL8_DIVSEL Divide Selection **/
#define GCLK_GENCTRL8_DIVSEL		(1 << 12)
/** GCLK_GENCTRL8_OE Output Enable **/
#define GCLK_GENCTRL8_OE		(1 << 11)
/** GCLK_GENCTRL8_OOV Output Off Value **/
#define GCLK_GENCTRL8_OOV		(1 << 10)
/** GCLK_GENCTRL8_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL8_IDC		(1 << 9)
/** GCLK_GENCTRL8_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL8_GENEN		(1 << 8)

#define GCLK_GENCTRL8_SRC_SHIFT		0
#define GCLK_GENCTRL8_SRC_MASK		0x0f
/** @defgroup gclk_genctrl8_src SRC Source Select
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl0 PCHCTRL0 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL0_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL0_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL0_CHEN Channel Enable **/
#define GCLK_PCHCTRL0_CHEN		(1 << 6)

#define GCLK_PCHCTRL0_GEN_SHIFT		0
#define GCLK_PCHCTRL0_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl0_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl1 PCHCTRL1 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL1_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL1_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL1_CHEN Channel Enable **/
#define GCLK_PCHCTRL1_CHEN		(1 << 6)

#define GCLK_PCHCTRL1_GEN_SHIFT		0
#define GCLK_PCHCTRL1_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl1_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl2 PCHCTRL2 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL2_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL2_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL2_CHEN Channel Enable **/
#define GCLK_PCHCTRL2_CHEN		(1 << 6)

#define GCLK_PCHCTRL2_GEN_SHIFT		0
#define GCLK_PCHCTRL2_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl2_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl3 PCHCTRL3 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL3_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL3_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL3_CHEN Channel Enable **/
#define GCLK_PCHCTRL3_CHEN		(1 << 6)

#define GCLK_PCHCTRL3_GEN_SHIFT		0
#define GCLK_PCHCTRL3_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl3_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl4 PCHCTRL4 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL4_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL4_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL4_CHEN Channel Enable **/
#define GCLK_PCHCTRL4_CHEN		(1 << 6)

#define GCLK_PCHCTRL4_GEN_SHIFT		0
#define GCLK_PCHCTRL4_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl4_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl5 PCHCTRL5 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL5_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL5_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL5_CHEN Channel Enable **/
#define GCLK_PCHCTRL5_CHEN		(1 << 6)

#define GCLK_PCHCTRL5_GEN_SHIFT		0
#define GCLK_PCHCTRL5_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl5_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl6 PCHCTRL6 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL6_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL6_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL6_CHEN Channel Enable **/
#define GCLK_PCHCTRL6_CHEN		(1 << 6)

#define GCLK_PCHCTRL6_GEN_SHIFT		0
#define GCLK_PCHCTRL6_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl6_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl7 PCHCTRL7 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL7_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL7_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL7_CHEN Channel Enable **/
#define GCLK_PCHCTRL7_CHEN		(1 << 6)

#define GCLK_PCHCTRL7_GEN_SHIFT		0
#define GCLK_PCHCTRL7_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl7_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl8 PCHCTRL8 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL8_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL8_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL8_CHEN Channel Enable **/
#define GCLK_PCHCTRL8_CHEN		(1 << 6)

#define GCLK_PCHCTRL8_GEN_SHIFT		0
#define GCLK_PCHCTRL8_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl8_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl9 PCHCTRL9 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL9_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL9_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL9_CHEN Channel Enable **/
#define GCLK_PCHCTRL9_CHEN		(1 << 6)

#define GCLK_PCHCTRL9_GEN_SHIFT		0
#define GCLK_PCHCTRL9_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl9_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl10 PCHCTRL10 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL10_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL10_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL10_CHEN Channel Enable **/
#define GCLK_PCHCTRL10_CHEN		(1 << 6)

#define GCLK_PCHCTRL10_GEN_SHIFT		0
#define GCLK_PCHCTRL10_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl10_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl11 PCHCTRL11 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL11_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL11_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL11_CHEN Channel Enable **/
#define GCLK_PCHCTRL11_CHEN		(1 << 6)

#define GCLK_PCHCTRL11_GEN_SHIFT		0
#define GCLK_PCHCTRL11_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl11_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl12 PCHCTRL12 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL12_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL12_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL12_CHEN Channel Enable **/
#define GCLK_PCHCTRL12_CHEN		(1 << 6)

#define GCLK_PCHCTRL12_GEN_SHIFT		0
#define GCLK_PCHCTRL12_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl12_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl13 PCHCTRL13 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL13_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL13_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL13_CHEN Channel Enable **/
#define GCLK_PCHCTRL13_CHEN		(1 << 6)

#define GCLK_PCHCTRL13_GEN_SHIFT		0
#define GCLK_PCHCTRL13_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl13_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl14 PCHCTRL14 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL14_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL14_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL14_CHEN Channel Enable **/
#define GCLK_PCHCTRL14_CHEN		(1 << 6)

#define GCLK_PCHCTRL14_GEN_SHIFT		0
#define GCLK_PCHCTRL14_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl14_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl15 PCHCTRL15 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL15_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL15_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL15_CHEN Channel Enable **/
#define GCLK_PCHCTRL15_CHEN		(1 << 6)

#define GCLK_PCHCTRL15_GEN_SHIFT		0
#define GCLK_PCHCTRL15_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl15_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl16 PCHCTRL16 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL16_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL16_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL16_CHEN Channel Enable **/
#define GCLK_PCHCTRL16_CHEN		(1 << 6)

#define GCLK_PCHCTRL16_GEN_SHIFT		0
#define GCLK_PCHCTRL16_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl16_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl17 PCHCTRL17 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL17_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL17_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL17_CHEN Channel Enable **/
#define GCLK_PCHCTRL17_CHEN		(1 << 6)

#define GCLK_PCHCTRL17_GEN_SHIFT		0
#define GCLK_PCHCTRL17_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl17_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl18 PCHCTRL18 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL18_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL18_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL18_CHEN Channel Enable **/
#define GCLK_PCHCTRL18_CHEN		(1 << 6)

#define GCLK_PCHCTRL18_GEN_SHIFT		0
#define GCLK_PCHCTRL18_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl18_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl19 PCHCTRL19 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL19_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL19_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL19_CHEN Channel Enable **/
#define GCLK_PCHCTRL19_CHEN		(1 << 6)

#define GCLK_PCHCTRL19_GEN_SHIFT		0
#define GCLK_PCHCTRL19_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl19_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl20 PCHCTRL20 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL20_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL20_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL20_CHEN Channel Enable **/
#define GCLK_PCHCTRL20_CHEN		(1 << 6)

#define GCLK_PCHCTRL20_GEN_SHIFT		0
#define GCLK_PCHCTRL20_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl20_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl21 PCHCTRL21 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL21_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL21_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL21_CHEN Channel Enable **/
#define GCLK_PCHCTRL21_CHEN		(1 << 6)

#define GCLK_PCHCTRL21_GEN_SHIFT		0
#define GCLK_PCHCTRL21_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl21_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl22 PCHCTRL22 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL22_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL22_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL22_CHEN Channel Enable **/
#define GCLK_PCHCTRL22_CHEN		(1 << 6)

#define GCLK_PCHCTRL22_GEN_SHIFT		0
#define GCLK_PCHCTRL22_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl22_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl23 PCHCTRL23 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL23_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL23_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL23_CHEN Channel Enable **/
#define GCLK_PCHCTRL23_CHEN		(1 << 6)

#define GCLK_PCHCTRL23_GEN_SHIFT		0
#define GCLK_PCHCTRL23_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl23_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl24 PCHCTRL24 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL24_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL24_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL24_CHEN Channel Enable **/
#define GCLK_PCHCTRL24_CHEN		(1 << 6)

#define GCLK_PCHCTRL24_GEN_SHIFT		0
#define GCLK_PCHCTRL24_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl24_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl25 PCHCTRL25 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL25_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL25_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL25_CHEN Channel Enable **/
#define GCLK_PCHCTRL25_CHEN		(1 << 6)

#define GCLK_PCHCTRL25_GEN_SHIFT		0
#define GCLK_PCHCTRL25_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl25_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl26 PCHCTRL26 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL26_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL26_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL26_CHEN Channel Enable **/
#define GCLK_PCHCTRL26_CHEN		(1 << 6)

#define GCLK_PCHCTRL26_GEN_SHIFT		0
#define GCLK_PCHCTRL26_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl26_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl27 PCHCTRL27 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL27_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL27_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL27_CHEN Channel Enable **/
#define GCLK_PCHCTRL27_CHEN		(1 << 6)

#define GCLK_PCHCTRL27_GEN_SHIFT		0
#define GCLK_PCHCTRL27_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl27_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl28 PCHCTRL28 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL28_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL28_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL28_CHEN Channel Enable **/
#define GCLK_PCHCTRL28_CHEN		(1 << 6)

#define GCLK_PCHCTRL28_GEN_SHIFT		0
#define GCLK_PCHCTRL28_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl28_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl29 PCHCTRL29 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL29_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL29_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL29_CHEN Channel Enable **/
#define GCLK_PCHCTRL29_CHEN		(1 << 6)

#define GCLK_PCHCTRL29_GEN_SHIFT		0
#define GCLK_PCHCTRL29_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl29_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl30 PCHCTRL30 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL30_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL30_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL30_CHEN Channel Enable **/
#define GCLK_PCHCTRL30_CHEN		(1 << 6)

#define GCLK_PCHCTRL30_GEN_SHIFT		0
#define GCLK_PCHCTRL30_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl30_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl31 PCHCTRL31 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL31_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL31_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL31_CHEN Channel Enable **/
#define GCLK_PCHCTRL31_CHEN		(1 << 6)

#define GCLK_PCHCTRL31_GEN_SHIFT		0
#define GCLK_PCHCTRL31_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl31_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl32 PCHCTRL32 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL32_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL32_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL32_CHEN Channel Enable **/
#define GCLK_PCHCTRL32_CHEN		(1 << 6)

#define GCLK_PCHCTRL32_GEN_SHIFT		0
#define GCLK_PCHCTRL32_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl32_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl33 PCHCTRL33 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL33_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL33_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL33_CHEN Channel Enable **/
#define GCLK_PCHCTRL33_CHEN		(1 << 6)

#define GCLK_PCHCTRL33_GEN_SHIFT		0
#define GCLK_PCHCTRL33_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl33_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl34 PCHCTRL34 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL34_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL34_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL34_CHEN Channel Enable **/
#define GCLK_PCHCTRL34_CHEN		(1 << 6)

#define GCLK_PCHCTRL34_GEN_SHIFT		0
#define GCLK_PCHCTRL34_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl34_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_pchctrl35 PCHCTRL35 Peripheral Clock Control
@{*/

/** GCLK_PCHCTRL35_WRTLOCK Write Lock **/
#define GCLK_PCHCTRL35_WRTLOCK		(1 << 7)
/** GCLK_PCHCTRL35_CHEN Channel Enable **/
#define GCLK_PCHCTRL35_CHEN		(1 << 6)

#define GCLK_PCHCTRL35_GEN_SHIFT		0
#define GCLK_PCHCTRL35_GEN_MASK		0x0f
/** @defgroup gclk_pchctrl35_gen GEN Generic Clock Generator
@{*/
/**@}*/


/**@}*/

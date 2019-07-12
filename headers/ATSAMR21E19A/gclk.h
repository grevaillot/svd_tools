#pragma once 

/* --- GCLK: Generic Clock Generator -------------------------------- */

/** @defgroup gclk_registers Generic Clock Generator Register
@{*/

/** GCLK_CTRL Control **/
#define GCLK_CTRL			MMIO32(GCLK_BASE + 0x00)
/** GCLK_STATUS Status **/
#define GCLK_STATUS			MMIO32(GCLK_BASE + 0x01)
/** GCLK_CLKCTRL Generic Clock Control **/
#define GCLK_CLKCTRL			MMIO32(GCLK_BASE + 0x02)
/** GCLK_GENCTRL Generic Clock Generator Control **/
#define GCLK_GENCTRL			MMIO32(GCLK_BASE + 0x04)
/** GCLK_GENDIV Generic Clock Generator Division **/
#define GCLK_GENDIV			MMIO32(GCLK_BASE + 0x08)

/**@}*/


/** @defgroup gclk_ctrl CTRL Control
@{*/

/** GCLK_CTRL_SWRST Software Reset **/
#define GCLK_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_status STATUS Status
@{*/

/** GCLK_STATUS_SYNCBUSY Synchronization Busy Status **/
#define GCLK_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup gclk_clkctrl CLKCTRL Generic Clock Control
@{*/

/** GCLK_CLKCTRL_WRTLOCK Write Lock **/
#define GCLK_CLKCTRL_WRTLOCK		(1 << 15)
/** GCLK_CLKCTRL_CLKEN Clock Enable **/
#define GCLK_CLKCTRL_CLKEN		(1 << 14)

#define GCLK_CLKCTRL_GEN_SHIFT		8
#define GCLK_CLKCTRL_GEN_MASK		0x0f
/** @defgroup gclk_clkctrl_gen GEN Generic Clock Generator
@{*/
/**@}*/


#define GCLK_CLKCTRL_ID_SHIFT		0
#define GCLK_CLKCTRL_ID_MASK		0x3f
/** @defgroup gclk_clkctrl_id ID Generic Clock Selection ID
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_genctrl GENCTRL Generic Clock Generator Control
@{*/

/** GCLK_GENCTRL_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL_RUNSTDBY		(1 << 21)
/** GCLK_GENCTRL_DIVSEL Divide Selection **/
#define GCLK_GENCTRL_DIVSEL		(1 << 20)
/** GCLK_GENCTRL_OE Output Enable **/
#define GCLK_GENCTRL_OE		(1 << 19)
/** GCLK_GENCTRL_OOV Output Off Value **/
#define GCLK_GENCTRL_OOV		(1 << 18)
/** GCLK_GENCTRL_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL_IDC		(1 << 17)
/** GCLK_GENCTRL_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL_GENEN		(1 << 16)

#define GCLK_GENCTRL_SRC_SHIFT		8
#define GCLK_GENCTRL_SRC_MASK		0x1f
/** @defgroup gclk_genctrl_src SRC Source Select
@{*/
/**@}*/


#define GCLK_GENCTRL_ID_SHIFT		0
#define GCLK_GENCTRL_ID_MASK		0x0f
/** @defgroup gclk_genctrl_id ID Generic Clock Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup gclk_gendiv GENDIV Generic Clock Generator Division
@{*/


#define GCLK_GENDIV_DIV_SHIFT		8
#define GCLK_GENDIV_DIV_MASK		0xffff
/** @defgroup gclk_gendiv_div DIV Division Factor
@{*/
/**@}*/


#define GCLK_GENDIV_ID_SHIFT		0
#define GCLK_GENDIV_ID_MASK		0x0f
/** @defgroup gclk_gendiv_id ID Generic Clock Generator Selection
@{*/
/**@}*/


/**@}*/

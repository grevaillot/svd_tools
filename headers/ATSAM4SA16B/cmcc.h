#pragma once 

/* --- CMCC: Cortex-M Cache Controller ------------------------------ */

/** @defgroup cmcc_registers Cortex-M Cache Controller Register
@{*/

/** CMCC_TYPE Cache Controller Type Register **/
#define CMCC_TYPE			MMIO32(CMCC_BASE + 0x00)
/** CMCC_CFG Cache Controller Configuration Register **/
#define CMCC_CFG			MMIO32(CMCC_BASE + 0x04)
/** CMCC_CTRL Cache Controller Control Register **/
#define CMCC_CTRL			MMIO32(CMCC_BASE + 0x08)
/** CMCC_SR Cache Controller Status Register **/
#define CMCC_SR			MMIO32(CMCC_BASE + 0x0c)
/** CMCC_MAINT0 Cache Controller Maintenance Register 0 **/
#define CMCC_MAINT0			MMIO32(CMCC_BASE + 0x20)
/** CMCC_MAINT1 Cache Controller Maintenance Register 1 **/
#define CMCC_MAINT1			MMIO32(CMCC_BASE + 0x24)
/** CMCC_MCFG Cache Controller Monitor Configuration Register **/
#define CMCC_MCFG			MMIO32(CMCC_BASE + 0x28)
/** CMCC_MEN Cache Controller Monitor Enable Register **/
#define CMCC_MEN			MMIO32(CMCC_BASE + 0x2c)
/** CMCC_MCTRL Cache Controller Monitor Control Register **/
#define CMCC_MCTRL			MMIO32(CMCC_BASE + 0x30)
/** CMCC_MSR Cache Controller Monitor Status Register **/
#define CMCC_MSR			MMIO32(CMCC_BASE + 0x34)

/**@}*/


/** @defgroup cmcc_type TYPE Cache Controller Type Register
@{*/


#define CMCC_TYPE_CLSIZE_SHIFT		11
#define CMCC_TYPE_CLSIZE_MASK		0x07
/** @defgroup cmcc_type_clsize CLSIZE Cache LIne Size
@{*/
/**@}*/


#define CMCC_TYPE_CSIZE_SHIFT		8
#define CMCC_TYPE_CSIZE_MASK		0x07
/** @defgroup cmcc_type_csize CSIZE Data Cache Size
@{*/
/**@}*/

/** CMCC_TYPE_LCKDOWN Lockdown Supported **/
#define CMCC_TYPE_LCKDOWN		(1 << 7)

#define CMCC_TYPE_WAYNUM_SHIFT		5
#define CMCC_TYPE_WAYNUM_MASK		0x03
/** @defgroup cmcc_type_waynum WAYNUM Number of Ways
@{*/
/**@}*/

/** CMCC_TYPE_RRP Random Selection Policy Supported **/
#define CMCC_TYPE_RRP		(1 << 4)
/** CMCC_TYPE_LRUP Least Recently Used Policy Supported **/
#define CMCC_TYPE_LRUP		(1 << 3)
/** CMCC_TYPE_RANDP Random Selection Policy Supported **/
#define CMCC_TYPE_RANDP		(1 << 2)
/** CMCC_TYPE_GCLK Dynamic Clock Gating Supported **/
#define CMCC_TYPE_GCLK		(1 << 1)
/** CMCC_TYPE_AP Access Port Access Allowed **/
#define CMCC_TYPE_AP		(1 << 0)

/**@}*/

/** @defgroup cmcc_cfg CFG Cache Controller Configuration Register
@{*/

/** CMCC_CFG_GCLKDIS Disable Clock Gating **/
#define CMCC_CFG_GCLKDIS		(1 << 0)

/**@}*/

/** @defgroup cmcc_ctrl CTRL Cache Controller Control Register
@{*/

/** CMCC_CTRL_CEN Cache Controller Enable **/
#define CMCC_CTRL_CEN		(1 << 0)

/**@}*/

/** @defgroup cmcc_sr SR Cache Controller Status Register
@{*/

/** CMCC_SR_CSTS Cache Controller Status **/
#define CMCC_SR_CSTS		(1 << 0)

/**@}*/

/** @defgroup cmcc_maint0 MAINT0 Cache Controller Maintenance Register 0
@{*/

/** CMCC_MAINT0_INVALL Cache Controller Invalidate All **/
#define CMCC_MAINT0_INVALL		(1 << 0)

/**@}*/

/** @defgroup cmcc_maint1 MAINT1 Cache Controller Maintenance Register 1
@{*/


#define CMCC_MAINT1_WAY_SHIFT		30
#define CMCC_MAINT1_WAY_MASK		0x03
/** @defgroup cmcc_maint1_way WAY Invalidate Way
@{*/
/**@}*/


#define CMCC_MAINT1_INDEX_SHIFT		4
#define CMCC_MAINT1_INDEX_MASK		0x1f
/** @defgroup cmcc_maint1_index INDEX Invalidate Index
@{*/
/**@}*/


/**@}*/

/** @defgroup cmcc_mcfg MCFG Cache Controller Monitor Configuration Register
@{*/


#define CMCC_MCFG_MODE_SHIFT		0
#define CMCC_MCFG_MODE_MASK		0x03
/** @defgroup cmcc_mcfg_mode MODE Cache Controller Monitor Counter Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup cmcc_men MEN Cache Controller Monitor Enable Register
@{*/

/** CMCC_MEN_MENABLE Cache Controller Monitor Enable **/
#define CMCC_MEN_MENABLE		(1 << 0)

/**@}*/

/** @defgroup cmcc_mctrl MCTRL Cache Controller Monitor Control Register
@{*/

/** CMCC_MCTRL_SWRST Monitor **/
#define CMCC_MCTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup cmcc_msr MSR Cache Controller Monitor Status Register
@{*/


#define CMCC_MSR_EVENT_CNT_SHIFT		0
#define CMCC_MSR_EVENT_CNT_MASK		0xffffffff
/** @defgroup cmcc_msr_event_cnt EVENTCNT Monitor Event Counter
@{*/
/**@}*/


/**@}*/

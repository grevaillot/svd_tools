#pragma once 

/* --- RSTC: Reset Controller --------------------------------------- */

/** @defgroup rstc_registers Reset Controller Register
@{*/

/** RSTC_CR Control Register **/
#define RSTC_CR			MMIO32(RSTC_BASE + 0x00)
/** RSTC_SR Status Register **/
#define RSTC_SR			MMIO32(RSTC_BASE + 0x04)
/** RSTC_MR Mode Register **/
#define RSTC_MR			MMIO32(RSTC_BASE + 0x08)

/**@}*/


/** @defgroup rstc_cr CR Control Register
@{*/


#define RSTC_CR_KEY_SHIFT		24
#define RSTC_CR_KEY_MASK		0xff
/** @defgroup rstc_cr_key KEY System Reset Key
@{*/
/**@}*/

/** RSTC_CR_EXTRST External Reset **/
#define RSTC_CR_EXTRST		(1 << 3)
/** RSTC_CR_PERRST Peripheral Reset **/
#define RSTC_CR_PERRST		(1 << 2)
/** RSTC_CR_PROCRST Processor Reset **/
#define RSTC_CR_PROCRST		(1 << 0)

/**@}*/

/** @defgroup rstc_sr SR Status Register
@{*/

/** RSTC_SR_SRCMP Software Reset Command in Progress **/
#define RSTC_SR_SRCMP		(1 << 17)
/** RSTC_SR_NRSTL NRST Pin Level **/
#define RSTC_SR_NRSTL		(1 << 16)

#define RSTC_SR_RSTTYP_SHIFT		8
#define RSTC_SR_RSTTYP_MASK		0x07
/** @defgroup rstc_sr_rsttyp RSTTYP Reset Type
@{*/
/**@}*/

/** RSTC_SR_URSTS User Reset Status **/
#define RSTC_SR_URSTS		(1 << 0)

/**@}*/

/** @defgroup rstc_mr MR Mode Register
@{*/


#define RSTC_MR_KEY_SHIFT		24
#define RSTC_MR_KEY_MASK		0xff
/** @defgroup rstc_mr_key KEY Password
@{*/
/**@}*/


#define RSTC_MR_ERSTL_SHIFT		8
#define RSTC_MR_ERSTL_MASK		0x0f
/** @defgroup rstc_mr_erstl ERSTL External Reset Length
@{*/
/**@}*/

/** RSTC_MR_URSTIEN User Reset Interrupt Enable **/
#define RSTC_MR_URSTIEN		(1 << 4)
/** RSTC_MR_URSTEN User Reset Enable **/
#define RSTC_MR_URSTEN		(1 << 0)

/**@}*/

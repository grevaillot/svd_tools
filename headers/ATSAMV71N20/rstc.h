#pragma once 

/* --- RSTC: Reset Controller --------------------------------------- */

/** @defgroup rstc_registers Reset Controller Register
@{*/

/** RSTC_RSTC_CR Control Register **/
#define RSTC_RSTC_CR			MMIO32(RSTC_BASE + 0x00)
/** RSTC_RSTC_SR Status Register **/
#define RSTC_RSTC_SR			MMIO32(RSTC_BASE + 0x04)
/** RSTC_RSTC_MR Mode Register **/
#define RSTC_RSTC_MR			MMIO32(RSTC_BASE + 0x08)

/**@}*/


/** @defgroup rstc_rstc_cr RSTCCR Control Register
@{*/


#define RSTC_RSTC_CR_KEY_SHIFT		24
#define RSTC_RSTC_CR_KEY_MASK		0xff
/** @defgroup rstc_rstc_cr_key KEY System Reset Key
@{*/
/**@}*/

/** RSTC_RSTC_CR_EXTRST External Reset **/
#define RSTC_RSTC_CR_EXTRST		(1 << 3)
/** RSTC_RSTC_CR_PROCRST Processor Reset **/
#define RSTC_RSTC_CR_PROCRST		(1 << 0)

/**@}*/

/** @defgroup rstc_rstc_sr RSTCSR Status Register
@{*/

/** RSTC_RSTC_SR_SRCMP Software Reset Command in Progress **/
#define RSTC_RSTC_SR_SRCMP		(1 << 17)
/** RSTC_RSTC_SR_NRSTL NRST Pin Level **/
#define RSTC_RSTC_SR_NRSTL		(1 << 16)

#define RSTC_RSTC_SR_RSTTYP_SHIFT		8
#define RSTC_RSTC_SR_RSTTYP_MASK		0x07
/** @defgroup rstc_rstc_sr_rsttyp RSTTYP Reset Type
@{*/
/**@}*/

/** RSTC_RSTC_SR_URSTS User Reset Status **/
#define RSTC_RSTC_SR_URSTS		(1 << 0)

/**@}*/

/** @defgroup rstc_rstc_mr RSTCMR Mode Register
@{*/


#define RSTC_RSTC_MR_KEY_SHIFT		24
#define RSTC_RSTC_MR_KEY_MASK		0xff
/** @defgroup rstc_rstc_mr_key KEY Write Access Password
@{*/
/**@}*/


#define RSTC_RSTC_MR_ERSTL_SHIFT		8
#define RSTC_RSTC_MR_ERSTL_MASK		0x0f
/** @defgroup rstc_rstc_mr_erstl ERSTL External Reset Length
@{*/
/**@}*/

/** RSTC_RSTC_MR_URSTIEN User Reset Interrupt Enable **/
#define RSTC_RSTC_MR_URSTIEN		(1 << 4)
/** RSTC_RSTC_MR_URSTEN User Reset Enable **/
#define RSTC_RSTC_MR_URSTEN		(1 << 0)

/**@}*/

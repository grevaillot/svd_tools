#pragma once 

/* --- SCB_ACTRL: System control block ACTLR ------------------------ */

/** @defgroup scb_actrl_registers System control block ACTLR Register
@{*/

/** SCB_ACTRL_ACTRL Auxiliary control register **/
#define SCB_ACTRL_ACTRL			MMIO32(SCB_ACTRL_BASE + 0x00)

/**@}*/


/** @defgroup scb_actrl_actrl ACTRL Auxiliary control register
@{*/

/** SCB_ACTRL_ACTRL_DISOOFP DISOOFP **/
#define SCB_ACTRL_ACTRL_DISOOFP		(1 << 9)
/** SCB_ACTRL_ACTRL_DISFPCA DISFPCA **/
#define SCB_ACTRL_ACTRL_DISFPCA		(1 << 8)
/** SCB_ACTRL_ACTRL_DISFOLD DISFOLD **/
#define SCB_ACTRL_ACTRL_DISFOLD		(1 << 2)
/** SCB_ACTRL_ACTRL_DISDEFWBUF DISDEFWBUF **/
#define SCB_ACTRL_ACTRL_DISDEFWBUF		(1 << 1)
/** SCB_ACTRL_ACTRL_DISMCYCINT DISMCYCINT **/
#define SCB_ACTRL_ACTRL_DISMCYCINT		(1 << 0)

/**@}*/

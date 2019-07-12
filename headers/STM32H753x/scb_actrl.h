#pragma once 

/* --- SCB_ACTRL: System control block ACTLR ------------------------ */

/** @defgroup scb_actrl_registers System control block ACTLR Register
@{*/

/** SCB_ACTRL_ACTRL Auxiliary control register **/
#define SCB_ACTRL_ACTRL			MMIO32(SCB_ACTRL_BASE + 0x00)

/**@}*/


/** @defgroup scb_actrl_actrl ACTRL Auxiliary control register
@{*/

/** SCB_ACTRL_ACTRL_DISITMATBFLUSH DISITMATBFLUSH **/
#define SCB_ACTRL_ACTRL_DISITMATBFLUSH		(1 << 12)
/** SCB_ACTRL_ACTRL_DISRAMODE DISRAMODE **/
#define SCB_ACTRL_ACTRL_DISRAMODE		(1 << 11)
/** SCB_ACTRL_ACTRL_FPEXCODIS FPEXCODIS **/
#define SCB_ACTRL_ACTRL_FPEXCODIS		(1 << 10)
/** SCB_ACTRL_ACTRL_DISFOLD DISFOLD **/
#define SCB_ACTRL_ACTRL_DISFOLD		(1 << 2)

/**@}*/

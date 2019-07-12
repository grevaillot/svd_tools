#pragma once 

/* --- TRNG: True Random Generator ---------------------------------- */

/** @defgroup trng_registers True Random Generator Register
@{*/

/** TRNG_CTRLA Control A **/
#define TRNG_CTRLA			MMIO32(TRNG_BASE + 0x00)
/** TRNG_EVCTRL Event Control **/
#define TRNG_EVCTRL			MMIO32(TRNG_BASE + 0x04)
/** TRNG_INTENCLR Interrupt Enable Clear **/
#define TRNG_INTENCLR			MMIO32(TRNG_BASE + 0x08)
/** TRNG_INTENSET Interrupt Enable Set **/
#define TRNG_INTENSET			MMIO32(TRNG_BASE + 0x09)
/** TRNG_INTFLAG Interrupt Flag Status and Clear **/
#define TRNG_INTFLAG			MMIO32(TRNG_BASE + 0x0a)
/** TRNG_DATA Output Data **/
#define TRNG_DATA			MMIO32(TRNG_BASE + 0x20)

/**@}*/


/** @defgroup trng_ctrla CTRLA Control A
@{*/

/** TRNG_CTRLA_RUNSTDBY Run in Standby **/
#define TRNG_CTRLA_RUNSTDBY		(1 << 6)
/** TRNG_CTRLA_ENABLE Enable **/
#define TRNG_CTRLA_ENABLE		(1 << 1)

/**@}*/

/** @defgroup trng_evctrl EVCTRL Event Control
@{*/

/** TRNG_EVCTRL_DATARDYEO Data Ready Event Output **/
#define TRNG_EVCTRL_DATARDYEO		(1 << 0)

/**@}*/

/** @defgroup trng_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** TRNG_INTENCLR_DATARDY Data Ready Interrupt Enable **/
#define TRNG_INTENCLR_DATARDY		(1 << 0)

/**@}*/

/** @defgroup trng_intenset INTENSET Interrupt Enable Set
@{*/

/** TRNG_INTENSET_DATARDY Data Ready Interrupt Enable **/
#define TRNG_INTENSET_DATARDY		(1 << 0)

/**@}*/

/** @defgroup trng_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** TRNG_INTFLAG_DATARDY Data Ready Interrupt Flag **/
#define TRNG_INTFLAG_DATARDY		(1 << 0)

/**@}*/

/** @defgroup trng_data DATA Output Data
@{*/


#define TRNG_DATA_DATA_SHIFT		0
#define TRNG_DATA_DATA_MASK		0xffffffff
/** @defgroup trng_data_data DATA Output Data
@{*/
/**@}*/


/**@}*/

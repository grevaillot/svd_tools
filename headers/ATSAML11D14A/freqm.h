#pragma once 

/* --- FREQM: Frequency Meter --------------------------------------- */

/** @defgroup freqm_registers Frequency Meter Register
@{*/

/** FREQM_CTRLA Control A Register **/
#define FREQM_CTRLA			MMIO32(FREQM_BASE + 0x00)
/** FREQM_CTRLB Control B Register **/
#define FREQM_CTRLB			MMIO32(FREQM_BASE + 0x01)
/** FREQM_CFGA Config A register **/
#define FREQM_CFGA			MMIO32(FREQM_BASE + 0x02)
/** FREQM_INTENCLR Interrupt Enable Clear Register **/
#define FREQM_INTENCLR			MMIO32(FREQM_BASE + 0x08)
/** FREQM_INTENSET Interrupt Enable Set Register **/
#define FREQM_INTENSET			MMIO32(FREQM_BASE + 0x09)
/** FREQM_INTFLAG Interrupt Flag Register **/
#define FREQM_INTFLAG			MMIO32(FREQM_BASE + 0x0a)
/** FREQM_STATUS Status Register **/
#define FREQM_STATUS			MMIO32(FREQM_BASE + 0x0b)
/** FREQM_SYNCBUSY Synchronization Busy Register **/
#define FREQM_SYNCBUSY			MMIO32(FREQM_BASE + 0x0c)
/** FREQM_VALUE Count Value Register **/
#define FREQM_VALUE			MMIO32(FREQM_BASE + 0x10)

/**@}*/


/** @defgroup freqm_ctrla CTRLA Control A Register
@{*/

/** FREQM_CTRLA_ENABLE Enable **/
#define FREQM_CTRLA_ENABLE		(1 << 1)
/** FREQM_CTRLA_SWRST Software Reset **/
#define FREQM_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup freqm_ctrlb CTRLB Control B Register
@{*/

/** FREQM_CTRLB_START Start Measurement **/
#define FREQM_CTRLB_START		(1 << 0)

/**@}*/

/** @defgroup freqm_cfga CFGA Config A register
@{*/

/** FREQM_CFGA_DIVREF Divide Reference Clock **/
#define FREQM_CFGA_DIVREF		(1 << 15)

#define FREQM_CFGA_REFNUM_SHIFT		0
#define FREQM_CFGA_REFNUM_MASK		0xff
/** @defgroup freqm_cfga_refnum REFNUM Number of Reference Clock Cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup freqm_intenclr INTENCLR Interrupt Enable Clear Register
@{*/

/** FREQM_INTENCLR_DONE Measurement Done Interrupt Enable **/
#define FREQM_INTENCLR_DONE		(1 << 0)

/**@}*/

/** @defgroup freqm_intenset INTENSET Interrupt Enable Set Register
@{*/

/** FREQM_INTENSET_DONE Measurement Done Interrupt Enable **/
#define FREQM_INTENSET_DONE		(1 << 0)

/**@}*/

/** @defgroup freqm_intflag INTFLAG Interrupt Flag Register
@{*/

/** FREQM_INTFLAG_DONE Measurement Done **/
#define FREQM_INTFLAG_DONE		(1 << 0)

/**@}*/

/** @defgroup freqm_status STATUS Status Register
@{*/

/** FREQM_STATUS_OVF Sticky Count Value Overflow **/
#define FREQM_STATUS_OVF		(1 << 1)
/** FREQM_STATUS_BUSY FREQM Status **/
#define FREQM_STATUS_BUSY		(1 << 0)

/**@}*/

/** @defgroup freqm_syncbusy SYNCBUSY Synchronization Busy Register
@{*/

/** FREQM_SYNCBUSY_ENABLE Enable **/
#define FREQM_SYNCBUSY_ENABLE		(1 << 1)
/** FREQM_SYNCBUSY_SWRST Software Reset **/
#define FREQM_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup freqm_value VALUE Count Value Register
@{*/


#define FREQM_VALUE_VALUE_SHIFT		0
#define FREQM_VALUE_VALUE_MASK		0xffffff
/** @defgroup freqm_value_value VALUE Measurement Value
@{*/
/**@}*/


/**@}*/

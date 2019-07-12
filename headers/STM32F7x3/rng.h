#pragma once 

/* --- RNG: Random number generator --------------------------------- */

/** @defgroup rng_registers Random number generator Register
@{*/

/** RNG_CR control register **/
#define RNG_CR			MMIO32(RNG_BASE + 0x00)
/** RNG_SR status register **/
#define RNG_SR			MMIO32(RNG_BASE + 0x04)
/** RNG_DR data register **/
#define RNG_DR			MMIO32(RNG_BASE + 0x08)

/**@}*/


/** @defgroup rng_cr CR control register
@{*/

/** RNG_CR_IE Interrupt enable **/
#define RNG_CR_IE		(1 << 3)
/** RNG_CR_RNGEN Random number generator enable **/
#define RNG_CR_RNGEN		(1 << 2)

/**@}*/

/** @defgroup rng_sr SR status register
@{*/

/** RNG_SR_SEIS Seed error interrupt status **/
#define RNG_SR_SEIS		(1 << 6)
/** RNG_SR_CEIS Clock error interrupt status **/
#define RNG_SR_CEIS		(1 << 5)
/** RNG_SR_SECS Seed error current status **/
#define RNG_SR_SECS		(1 << 2)
/** RNG_SR_CECS Clock error current status **/
#define RNG_SR_CECS		(1 << 1)
/** RNG_SR_DRDY Data ready **/
#define RNG_SR_DRDY		(1 << 0)

/**@}*/

/** @defgroup rng_dr DR data register
@{*/


#define RNG_DR_RNDATA_SHIFT		0
#define RNG_DR_RNDATA_MASK		0xffffffff
/** @defgroup rng_dr_rndata RNDATA Random data
@{*/
/**@}*/


/**@}*/

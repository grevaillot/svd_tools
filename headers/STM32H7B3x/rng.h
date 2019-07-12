#pragma once 

/* --- RNG: RNG ----------------------------------------------------- */

/** @defgroup rng_registers RNG Register
@{*/

/** RNG_RNG_CR RNG control register **/
#define RNG_RNG_CR			MMIO32(RNG_BASE + 0x00)
/** RNG_RNG_SR RNG status register **/
#define RNG_RNG_SR			MMIO32(RNG_BASE + 0x04)
/** RNG_RNG_DR The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0. **/
#define RNG_RNG_DR			MMIO32(RNG_BASE + 0x08)

/**@}*/


/** @defgroup rng_rng_cr RNGCR RNG control register
@{*/

/** RNG_RNG_CR_CED Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled. **/
#define RNG_RNG_CR_CED		(1 << 5)
/** RNG_RNG_CR_IE Interrupt enable **/
#define RNG_RNG_CR_IE		(1 << 3)
/** RNG_RNG_CR_RNGEN Random number generator enable **/
#define RNG_RNG_CR_RNGEN		(1 << 2)

/**@}*/

/** @defgroup rng_rng_sr RNGSR RNG status register
@{*/

/** RNG_RNG_SR_SEIS Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register. **/
#define RNG_RNG_SR_SEIS		(1 << 6)
/** RNG_RNG_SR_CEIS Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1. **/
#define RNG_RNG_SR_CEIS		(1 << 5)
/** RNG_RNG_SR_SECS Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) **/
#define RNG_RNG_SR_SECS		(1 << 2)
/** RNG_RNG_SR_CECS Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1. **/
#define RNG_RNG_SR_CECS		(1 << 1)
/** RNG_RNG_SR_DRDY Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated. **/
#define RNG_RNG_SR_DRDY		(1 << 0)

/**@}*/

/** @defgroup rng_rng_dr RNGDR The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.
@{*/


#define RNG_RNG_DR_RNDATA_SHIFT		0
#define RNG_RNG_DR_RNDATA_MASK		0xffffffff
/** @defgroup rng_rng_dr_rndata RNDATA Random data 32-bit random data which are valid when DRDY=1.
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- GPIOA: General-purpose I/Os ---------------------------------- */

/** @defgroup gpioa_registers General-purpose I/Os Register
@{*/

/** GPIOA_MODER GPIO port mode register **/
#define GPIOA_MODER			MMIO32(GPIOA_BASE + 0x00)
/** GPIOA_OTYPER GPIO port output type register **/
#define GPIOA_OTYPER			MMIO32(GPIOA_BASE + 0x04)
/** GPIOA_OSPEEDR GPIO port output speed register **/
#define GPIOA_OSPEEDR			MMIO32(GPIOA_BASE + 0x08)
/** GPIOA_PUPDR GPIO port pull-up/pull-down register **/
#define GPIOA_PUPDR			MMIO32(GPIOA_BASE + 0x0c)
/** GPIOA_IDR GPIO port input data register **/
#define GPIOA_IDR			MMIO32(GPIOA_BASE + 0x10)
/** GPIOA_ODR GPIO port output data register **/
#define GPIOA_ODR			MMIO32(GPIOA_BASE + 0x14)
/** GPIOA_BSRR GPIO port bit set/reset register **/
#define GPIOA_BSRR			MMIO32(GPIOA_BASE + 0x18)
/** GPIOA_LCKR GPIO port configuration lock register **/
#define GPIOA_LCKR			MMIO32(GPIOA_BASE + 0x1c)
/** GPIOA_AFRL GPIO alternate function low register **/
#define GPIOA_AFRL			MMIO32(GPIOA_BASE + 0x20)
/** GPIOA_AFRH GPIO alternate function high register **/
#define GPIOA_AFRH			MMIO32(GPIOA_BASE + 0x24)

/**@}*/


/** @defgroup gpioa_moder MODER GPIO port mode register
@{*/


#define GPIOA_MODER_MODER15_SHIFT		30
#define GPIOA_MODER_MODER15_MASK		0x03
/** @defgroup gpioa_moder_moder15 MODER15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER14_SHIFT		28
#define GPIOA_MODER_MODER14_MASK		0x03
/** @defgroup gpioa_moder_moder14 MODER14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER13_SHIFT		26
#define GPIOA_MODER_MODER13_MASK		0x03
/** @defgroup gpioa_moder_moder13 MODER13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER12_SHIFT		24
#define GPIOA_MODER_MODER12_MASK		0x03
/** @defgroup gpioa_moder_moder12 MODER12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER11_SHIFT		22
#define GPIOA_MODER_MODER11_MASK		0x03
/** @defgroup gpioa_moder_moder11 MODER11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER10_SHIFT		20
#define GPIOA_MODER_MODER10_MASK		0x03
/** @defgroup gpioa_moder_moder10 MODER10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER9_SHIFT		18
#define GPIOA_MODER_MODER9_MASK		0x03
/** @defgroup gpioa_moder_moder9 MODER9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER8_SHIFT		16
#define GPIOA_MODER_MODER8_MASK		0x03
/** @defgroup gpioa_moder_moder8 MODER8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER7_SHIFT		14
#define GPIOA_MODER_MODER7_MASK		0x03
/** @defgroup gpioa_moder_moder7 MODER7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER6_SHIFT		12
#define GPIOA_MODER_MODER6_MASK		0x03
/** @defgroup gpioa_moder_moder6 MODER6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER5_SHIFT		10
#define GPIOA_MODER_MODER5_MASK		0x03
/** @defgroup gpioa_moder_moder5 MODER5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER4_SHIFT		8
#define GPIOA_MODER_MODER4_MASK		0x03
/** @defgroup gpioa_moder_moder4 MODER4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER3_SHIFT		6
#define GPIOA_MODER_MODER3_MASK		0x03
/** @defgroup gpioa_moder_moder3 MODER3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER2_SHIFT		4
#define GPIOA_MODER_MODER2_MASK		0x03
/** @defgroup gpioa_moder_moder2 MODER2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER1_SHIFT		2
#define GPIOA_MODER_MODER1_MASK		0x03
/** @defgroup gpioa_moder_moder1 MODER1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODER0_SHIFT		0
#define GPIOA_MODER_MODER0_MASK		0x03
/** @defgroup gpioa_moder_moder0 MODER0 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_otyper OTYPER GPIO port output type register
@{*/

/** GPIOA_OTYPER_OT15 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT15		(1 << 15)
/** GPIOA_OTYPER_OT14 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT14		(1 << 14)
/** GPIOA_OTYPER_OT13 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT13		(1 << 13)
/** GPIOA_OTYPER_OT12 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT12		(1 << 12)
/** GPIOA_OTYPER_OT11 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT11		(1 << 11)
/** GPIOA_OTYPER_OT10 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT10		(1 << 10)
/** GPIOA_OTYPER_OT9 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT9		(1 << 9)
/** GPIOA_OTYPER_OT8 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT8		(1 << 8)
/** GPIOA_OTYPER_OT7 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT7		(1 << 7)
/** GPIOA_OTYPER_OT6 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT6		(1 << 6)
/** GPIOA_OTYPER_OT5 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT5		(1 << 5)
/** GPIOA_OTYPER_OT4 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT4		(1 << 4)
/** GPIOA_OTYPER_OT3 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT3		(1 << 3)
/** GPIOA_OTYPER_OT2 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT2		(1 << 2)
/** GPIOA_OTYPER_OT1 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT1		(1 << 1)
/** GPIOA_OTYPER_OT0 Port x configuration bits (y = 0..15) **/
#define GPIOA_OTYPER_OT0		(1 << 0)

/**@}*/

/** @defgroup gpioa_ospeedr OSPEEDR GPIO port output speed register
@{*/


#define GPIOA_OSPEEDR_OSPEEDR15_SHIFT		30
#define GPIOA_OSPEEDR_OSPEEDR15_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr15 OSPEEDR15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR14_SHIFT		28
#define GPIOA_OSPEEDR_OSPEEDR14_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr14 OSPEEDR14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR13_SHIFT		26
#define GPIOA_OSPEEDR_OSPEEDR13_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr13 OSPEEDR13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR12_SHIFT		24
#define GPIOA_OSPEEDR_OSPEEDR12_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr12 OSPEEDR12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR11_SHIFT		22
#define GPIOA_OSPEEDR_OSPEEDR11_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr11 OSPEEDR11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR10_SHIFT		20
#define GPIOA_OSPEEDR_OSPEEDR10_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr10 OSPEEDR10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR9_SHIFT		18
#define GPIOA_OSPEEDR_OSPEEDR9_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr9 OSPEEDR9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR8_SHIFT		16
#define GPIOA_OSPEEDR_OSPEEDR8_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr8 OSPEEDR8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR7_SHIFT		14
#define GPIOA_OSPEEDR_OSPEEDR7_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr7 OSPEEDR7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR6_SHIFT		12
#define GPIOA_OSPEEDR_OSPEEDR6_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr6 OSPEEDR6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR5_SHIFT		10
#define GPIOA_OSPEEDR_OSPEEDR5_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr5 OSPEEDR5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR4_SHIFT		8
#define GPIOA_OSPEEDR_OSPEEDR4_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr4 OSPEEDR4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR3_SHIFT		6
#define GPIOA_OSPEEDR_OSPEEDR3_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr3 OSPEEDR3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR2_SHIFT		4
#define GPIOA_OSPEEDR_OSPEEDR2_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr2 OSPEEDR2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR1_SHIFT		2
#define GPIOA_OSPEEDR_OSPEEDR1_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr1 OSPEEDR1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEEDR0_SHIFT		0
#define GPIOA_OSPEEDR_OSPEEDR0_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeedr0 OSPEEDR0 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_pupdr PUPDR GPIO port pull-up/pull-down register
@{*/


#define GPIOA_PUPDR_PUPDR15_SHIFT		30
#define GPIOA_PUPDR_PUPDR15_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr15 PUPDR15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR14_SHIFT		28
#define GPIOA_PUPDR_PUPDR14_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr14 PUPDR14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR13_SHIFT		26
#define GPIOA_PUPDR_PUPDR13_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr13 PUPDR13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR12_SHIFT		24
#define GPIOA_PUPDR_PUPDR12_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr12 PUPDR12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR11_SHIFT		22
#define GPIOA_PUPDR_PUPDR11_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr11 PUPDR11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR10_SHIFT		20
#define GPIOA_PUPDR_PUPDR10_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr10 PUPDR10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR9_SHIFT		18
#define GPIOA_PUPDR_PUPDR9_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr9 PUPDR9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR8_SHIFT		16
#define GPIOA_PUPDR_PUPDR8_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr8 PUPDR8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR7_SHIFT		14
#define GPIOA_PUPDR_PUPDR7_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr7 PUPDR7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR6_SHIFT		12
#define GPIOA_PUPDR_PUPDR6_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr6 PUPDR6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR5_SHIFT		10
#define GPIOA_PUPDR_PUPDR5_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr5 PUPDR5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR4_SHIFT		8
#define GPIOA_PUPDR_PUPDR4_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr4 PUPDR4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR3_SHIFT		6
#define GPIOA_PUPDR_PUPDR3_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr3 PUPDR3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR2_SHIFT		4
#define GPIOA_PUPDR_PUPDR2_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr2 PUPDR2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR1_SHIFT		2
#define GPIOA_PUPDR_PUPDR1_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr1 PUPDR1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPDR0_SHIFT		0
#define GPIOA_PUPDR_PUPDR0_MASK		0x03
/** @defgroup gpioa_pupdr_pupdr0 PUPDR0 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_idr IDR GPIO port input data register
@{*/

/** GPIOA_IDR_IDR15 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR15		(1 << 15)
/** GPIOA_IDR_IDR14 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR14		(1 << 14)
/** GPIOA_IDR_IDR13 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR13		(1 << 13)
/** GPIOA_IDR_IDR12 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR12		(1 << 12)
/** GPIOA_IDR_IDR11 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR11		(1 << 11)
/** GPIOA_IDR_IDR10 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR10		(1 << 10)
/** GPIOA_IDR_IDR9 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR9		(1 << 9)
/** GPIOA_IDR_IDR8 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR8		(1 << 8)
/** GPIOA_IDR_IDR7 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR7		(1 << 7)
/** GPIOA_IDR_IDR6 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR6		(1 << 6)
/** GPIOA_IDR_IDR5 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR5		(1 << 5)
/** GPIOA_IDR_IDR4 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR4		(1 << 4)
/** GPIOA_IDR_IDR3 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR3		(1 << 3)
/** GPIOA_IDR_IDR2 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR2		(1 << 2)
/** GPIOA_IDR_IDR1 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR1		(1 << 1)
/** GPIOA_IDR_IDR0 Port input data (y = 0..15) **/
#define GPIOA_IDR_IDR0		(1 << 0)

/**@}*/

/** @defgroup gpioa_odr ODR GPIO port output data register
@{*/

/** GPIOA_ODR_ODR15 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR15		(1 << 15)
/** GPIOA_ODR_ODR14 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR14		(1 << 14)
/** GPIOA_ODR_ODR13 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR13		(1 << 13)
/** GPIOA_ODR_ODR12 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR12		(1 << 12)
/** GPIOA_ODR_ODR11 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR11		(1 << 11)
/** GPIOA_ODR_ODR10 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR10		(1 << 10)
/** GPIOA_ODR_ODR9 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR9		(1 << 9)
/** GPIOA_ODR_ODR8 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR8		(1 << 8)
/** GPIOA_ODR_ODR7 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR7		(1 << 7)
/** GPIOA_ODR_ODR6 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR6		(1 << 6)
/** GPIOA_ODR_ODR5 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR5		(1 << 5)
/** GPIOA_ODR_ODR4 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR4		(1 << 4)
/** GPIOA_ODR_ODR3 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR3		(1 << 3)
/** GPIOA_ODR_ODR2 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR2		(1 << 2)
/** GPIOA_ODR_ODR1 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR1		(1 << 1)
/** GPIOA_ODR_ODR0 Port output data (y = 0..15) **/
#define GPIOA_ODR_ODR0		(1 << 0)

/**@}*/

/** @defgroup gpioa_bsrr BSRR GPIO port bit set/reset register
@{*/

/** GPIOA_BSRR_BR15 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR15		(1 << 31)
/** GPIOA_BSRR_BR14 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR14		(1 << 30)
/** GPIOA_BSRR_BR13 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR13		(1 << 29)
/** GPIOA_BSRR_BR12 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR12		(1 << 28)
/** GPIOA_BSRR_BR11 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR11		(1 << 27)
/** GPIOA_BSRR_BR10 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR10		(1 << 26)
/** GPIOA_BSRR_BR9 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR9		(1 << 25)
/** GPIOA_BSRR_BR8 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR8		(1 << 24)
/** GPIOA_BSRR_BR7 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR7		(1 << 23)
/** GPIOA_BSRR_BR6 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR6		(1 << 22)
/** GPIOA_BSRR_BR5 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR5		(1 << 21)
/** GPIOA_BSRR_BR4 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR4		(1 << 20)
/** GPIOA_BSRR_BR3 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR3		(1 << 19)
/** GPIOA_BSRR_BR2 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR2		(1 << 18)
/** GPIOA_BSRR_BR1 Port x reset bit y (y = 0..15) **/
#define GPIOA_BSRR_BR1		(1 << 17)
/** GPIOA_BSRR_BR0 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BR0		(1 << 16)
/** GPIOA_BSRR_BS15 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS15		(1 << 15)
/** GPIOA_BSRR_BS14 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS14		(1 << 14)
/** GPIOA_BSRR_BS13 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS13		(1 << 13)
/** GPIOA_BSRR_BS12 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS12		(1 << 12)
/** GPIOA_BSRR_BS11 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS11		(1 << 11)
/** GPIOA_BSRR_BS10 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS10		(1 << 10)
/** GPIOA_BSRR_BS9 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS9		(1 << 9)
/** GPIOA_BSRR_BS8 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS8		(1 << 8)
/** GPIOA_BSRR_BS7 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS7		(1 << 7)
/** GPIOA_BSRR_BS6 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS6		(1 << 6)
/** GPIOA_BSRR_BS5 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS5		(1 << 5)
/** GPIOA_BSRR_BS4 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS4		(1 << 4)
/** GPIOA_BSRR_BS3 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS3		(1 << 3)
/** GPIOA_BSRR_BS2 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS2		(1 << 2)
/** GPIOA_BSRR_BS1 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS1		(1 << 1)
/** GPIOA_BSRR_BS0 Port x set bit y (y= 0..15) **/
#define GPIOA_BSRR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpioa_lckr LCKR GPIO port configuration lock register
@{*/

/** GPIOA_LCKR_LCKK Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCKK		(1 << 16)
/** GPIOA_LCKR_LCK15 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK15		(1 << 15)
/** GPIOA_LCKR_LCK14 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK14		(1 << 14)
/** GPIOA_LCKR_LCK13 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK13		(1 << 13)
/** GPIOA_LCKR_LCK12 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK12		(1 << 12)
/** GPIOA_LCKR_LCK11 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK11		(1 << 11)
/** GPIOA_LCKR_LCK10 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK10		(1 << 10)
/** GPIOA_LCKR_LCK9 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK9		(1 << 9)
/** GPIOA_LCKR_LCK8 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK8		(1 << 8)
/** GPIOA_LCKR_LCK7 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK7		(1 << 7)
/** GPIOA_LCKR_LCK6 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK6		(1 << 6)
/** GPIOA_LCKR_LCK5 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK5		(1 << 5)
/** GPIOA_LCKR_LCK4 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK4		(1 << 4)
/** GPIOA_LCKR_LCK3 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK3		(1 << 3)
/** GPIOA_LCKR_LCK2 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK2		(1 << 2)
/** GPIOA_LCKR_LCK1 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK1		(1 << 1)
/** GPIOA_LCKR_LCK0 Port x lock bit y (y= 0..15) **/
#define GPIOA_LCKR_LCK0		(1 << 0)

/**@}*/

/** @defgroup gpioa_afrl AFRL GPIO alternate function low register
@{*/


#define GPIOA_AFRL_AFRL7_SHIFT		28
#define GPIOA_AFRL_AFRL7_MASK		0x0f
/** @defgroup gpioa_afrl_afrl7 AFRL7 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL6_SHIFT		24
#define GPIOA_AFRL_AFRL6_MASK		0x0f
/** @defgroup gpioa_afrl_afrl6 AFRL6 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL5_SHIFT		20
#define GPIOA_AFRL_AFRL5_MASK		0x0f
/** @defgroup gpioa_afrl_afrl5 AFRL5 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL4_SHIFT		16
#define GPIOA_AFRL_AFRL4_MASK		0x0f
/** @defgroup gpioa_afrl_afrl4 AFRL4 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL3_SHIFT		12
#define GPIOA_AFRL_AFRL3_MASK		0x0f
/** @defgroup gpioa_afrl_afrl3 AFRL3 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL2_SHIFT		8
#define GPIOA_AFRL_AFRL2_MASK		0x0f
/** @defgroup gpioa_afrl_afrl2 AFRL2 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL1_SHIFT		4
#define GPIOA_AFRL_AFRL1_MASK		0x0f
/** @defgroup gpioa_afrl_afrl1 AFRL1 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFRL0_SHIFT		0
#define GPIOA_AFRL_AFRL0_MASK		0x0f
/** @defgroup gpioa_afrl_afrl0 AFRL0 Alternate function selection for port x bit y (y = 0..7)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_afrh AFRH GPIO alternate function high register
@{*/


#define GPIOA_AFRH_AFRH15_SHIFT		28
#define GPIOA_AFRH_AFRH15_MASK		0x0f
/** @defgroup gpioa_afrh_afrh15 AFRH15 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH14_SHIFT		24
#define GPIOA_AFRH_AFRH14_MASK		0x0f
/** @defgroup gpioa_afrh_afrh14 AFRH14 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH13_SHIFT		20
#define GPIOA_AFRH_AFRH13_MASK		0x0f
/** @defgroup gpioa_afrh_afrh13 AFRH13 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH12_SHIFT		16
#define GPIOA_AFRH_AFRH12_MASK		0x0f
/** @defgroup gpioa_afrh_afrh12 AFRH12 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH11_SHIFT		12
#define GPIOA_AFRH_AFRH11_MASK		0x0f
/** @defgroup gpioa_afrh_afrh11 AFRH11 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH10_SHIFT		8
#define GPIOA_AFRH_AFRH10_MASK		0x0f
/** @defgroup gpioa_afrh_afrh10 AFRH10 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH9_SHIFT		4
#define GPIOA_AFRH_AFRH9_MASK		0x0f
/** @defgroup gpioa_afrh_afrh9 AFRH9 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFRH8_SHIFT		0
#define GPIOA_AFRH_AFRH8_MASK		0x0f
/** @defgroup gpioa_afrh_afrh8 AFRH8 Alternate function selection for port x bit y (y = 8..15)
@{*/
/**@}*/


/**@}*/
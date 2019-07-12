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
/** GPIOA_BRR GPIO port bit reset register **/
#define GPIOA_BRR			MMIO32(GPIOA_BASE + 0x28)

/**@}*/


/** @defgroup gpioa_moder MODER GPIO port mode register
@{*/


#define GPIOA_MODER_MODE15_SHIFT		30
#define GPIOA_MODER_MODE15_MASK		0x03
/** @defgroup gpioa_moder_mode15 MODE15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE14_SHIFT		28
#define GPIOA_MODER_MODE14_MASK		0x03
/** @defgroup gpioa_moder_mode14 MODE14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE13_SHIFT		26
#define GPIOA_MODER_MODE13_MASK		0x03
/** @defgroup gpioa_moder_mode13 MODE13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE12_SHIFT		24
#define GPIOA_MODER_MODE12_MASK		0x03
/** @defgroup gpioa_moder_mode12 MODE12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE11_SHIFT		22
#define GPIOA_MODER_MODE11_MASK		0x03
/** @defgroup gpioa_moder_mode11 MODE11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE10_SHIFT		20
#define GPIOA_MODER_MODE10_MASK		0x03
/** @defgroup gpioa_moder_mode10 MODE10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE9_SHIFT		18
#define GPIOA_MODER_MODE9_MASK		0x03
/** @defgroup gpioa_moder_mode9 MODE9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE8_SHIFT		16
#define GPIOA_MODER_MODE8_MASK		0x03
/** @defgroup gpioa_moder_mode8 MODE8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE7_SHIFT		14
#define GPIOA_MODER_MODE7_MASK		0x03
/** @defgroup gpioa_moder_mode7 MODE7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE6_SHIFT		12
#define GPIOA_MODER_MODE6_MASK		0x03
/** @defgroup gpioa_moder_mode6 MODE6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE5_SHIFT		10
#define GPIOA_MODER_MODE5_MASK		0x03
/** @defgroup gpioa_moder_mode5 MODE5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE4_SHIFT		8
#define GPIOA_MODER_MODE4_MASK		0x03
/** @defgroup gpioa_moder_mode4 MODE4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE3_SHIFT		6
#define GPIOA_MODER_MODE3_MASK		0x03
/** @defgroup gpioa_moder_mode3 MODE3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE2_SHIFT		4
#define GPIOA_MODER_MODE2_MASK		0x03
/** @defgroup gpioa_moder_mode2 MODE2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE1_SHIFT		2
#define GPIOA_MODER_MODE1_MASK		0x03
/** @defgroup gpioa_moder_mode1 MODE1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_MODER_MODE0_SHIFT		0
#define GPIOA_MODER_MODE0_MASK		0x03
/** @defgroup gpioa_moder_mode0 MODE0 Port x configuration bits (y = 0..15)
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


#define GPIOA_OSPEEDR_OSPEED15_SHIFT		30
#define GPIOA_OSPEEDR_OSPEED15_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed15 OSPEED15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED14_SHIFT		28
#define GPIOA_OSPEEDR_OSPEED14_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed14 OSPEED14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED13_SHIFT		26
#define GPIOA_OSPEEDR_OSPEED13_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed13 OSPEED13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED12_SHIFT		24
#define GPIOA_OSPEEDR_OSPEED12_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed12 OSPEED12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED11_SHIFT		22
#define GPIOA_OSPEEDR_OSPEED11_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed11 OSPEED11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED10_SHIFT		20
#define GPIOA_OSPEEDR_OSPEED10_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed10 OSPEED10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED9_SHIFT		18
#define GPIOA_OSPEEDR_OSPEED9_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed9 OSPEED9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED8_SHIFT		16
#define GPIOA_OSPEEDR_OSPEED8_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed8 OSPEED8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED7_SHIFT		14
#define GPIOA_OSPEEDR_OSPEED7_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed7 OSPEED7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED6_SHIFT		12
#define GPIOA_OSPEEDR_OSPEED6_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed6 OSPEED6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED5_SHIFT		10
#define GPIOA_OSPEEDR_OSPEED5_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed5 OSPEED5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED4_SHIFT		8
#define GPIOA_OSPEEDR_OSPEED4_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed4 OSPEED4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED3_SHIFT		6
#define GPIOA_OSPEEDR_OSPEED3_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed3 OSPEED3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED2_SHIFT		4
#define GPIOA_OSPEEDR_OSPEED2_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed2 OSPEED2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED1_SHIFT		2
#define GPIOA_OSPEEDR_OSPEED1_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed1 OSPEED1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_OSPEEDR_OSPEED0_SHIFT		0
#define GPIOA_OSPEEDR_OSPEED0_MASK		0x03
/** @defgroup gpioa_ospeedr_ospeed0 OSPEED0 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_pupdr PUPDR GPIO port pull-up/pull-down register
@{*/


#define GPIOA_PUPDR_PUPD15_SHIFT		30
#define GPIOA_PUPDR_PUPD15_MASK		0x03
/** @defgroup gpioa_pupdr_pupd15 PUPD15 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD14_SHIFT		28
#define GPIOA_PUPDR_PUPD14_MASK		0x03
/** @defgroup gpioa_pupdr_pupd14 PUPD14 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD13_SHIFT		26
#define GPIOA_PUPDR_PUPD13_MASK		0x03
/** @defgroup gpioa_pupdr_pupd13 PUPD13 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD12_SHIFT		24
#define GPIOA_PUPDR_PUPD12_MASK		0x03
/** @defgroup gpioa_pupdr_pupd12 PUPD12 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD11_SHIFT		22
#define GPIOA_PUPDR_PUPD11_MASK		0x03
/** @defgroup gpioa_pupdr_pupd11 PUPD11 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD10_SHIFT		20
#define GPIOA_PUPDR_PUPD10_MASK		0x03
/** @defgroup gpioa_pupdr_pupd10 PUPD10 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD9_SHIFT		18
#define GPIOA_PUPDR_PUPD9_MASK		0x03
/** @defgroup gpioa_pupdr_pupd9 PUPD9 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD8_SHIFT		16
#define GPIOA_PUPDR_PUPD8_MASK		0x03
/** @defgroup gpioa_pupdr_pupd8 PUPD8 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD7_SHIFT		14
#define GPIOA_PUPDR_PUPD7_MASK		0x03
/** @defgroup gpioa_pupdr_pupd7 PUPD7 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD6_SHIFT		12
#define GPIOA_PUPDR_PUPD6_MASK		0x03
/** @defgroup gpioa_pupdr_pupd6 PUPD6 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD5_SHIFT		10
#define GPIOA_PUPDR_PUPD5_MASK		0x03
/** @defgroup gpioa_pupdr_pupd5 PUPD5 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD4_SHIFT		8
#define GPIOA_PUPDR_PUPD4_MASK		0x03
/** @defgroup gpioa_pupdr_pupd4 PUPD4 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD3_SHIFT		6
#define GPIOA_PUPDR_PUPD3_MASK		0x03
/** @defgroup gpioa_pupdr_pupd3 PUPD3 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD2_SHIFT		4
#define GPIOA_PUPDR_PUPD2_MASK		0x03
/** @defgroup gpioa_pupdr_pupd2 PUPD2 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD1_SHIFT		2
#define GPIOA_PUPDR_PUPD1_MASK		0x03
/** @defgroup gpioa_pupdr_pupd1 PUPD1 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


#define GPIOA_PUPDR_PUPD0_SHIFT		0
#define GPIOA_PUPDR_PUPD0_MASK		0x03
/** @defgroup gpioa_pupdr_pupd0 PUPD0 Port x configuration bits (y = 0..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_idr IDR GPIO port input data register
@{*/

/** GPIOA_IDR_ID15 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID15		(1 << 15)
/** GPIOA_IDR_ID14 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID14		(1 << 14)
/** GPIOA_IDR_ID13 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID13		(1 << 13)
/** GPIOA_IDR_ID12 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID12		(1 << 12)
/** GPIOA_IDR_ID11 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID11		(1 << 11)
/** GPIOA_IDR_ID10 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID10		(1 << 10)
/** GPIOA_IDR_ID9 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID9		(1 << 9)
/** GPIOA_IDR_ID8 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID8		(1 << 8)
/** GPIOA_IDR_ID7 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID7		(1 << 7)
/** GPIOA_IDR_ID6 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID6		(1 << 6)
/** GPIOA_IDR_ID5 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID5		(1 << 5)
/** GPIOA_IDR_ID4 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID4		(1 << 4)
/** GPIOA_IDR_ID3 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID3		(1 << 3)
/** GPIOA_IDR_ID2 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID2		(1 << 2)
/** GPIOA_IDR_ID1 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID1		(1 << 1)
/** GPIOA_IDR_ID0 Port input data bit (y = 0..15) **/
#define GPIOA_IDR_ID0		(1 << 0)

/**@}*/

/** @defgroup gpioa_odr ODR GPIO port output data register
@{*/

/** GPIOA_ODR_OD15 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD15		(1 << 15)
/** GPIOA_ODR_OD14 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD14		(1 << 14)
/** GPIOA_ODR_OD13 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD13		(1 << 13)
/** GPIOA_ODR_OD12 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD12		(1 << 12)
/** GPIOA_ODR_OD11 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD11		(1 << 11)
/** GPIOA_ODR_OD10 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD10		(1 << 10)
/** GPIOA_ODR_OD9 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD9		(1 << 9)
/** GPIOA_ODR_OD8 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD8		(1 << 8)
/** GPIOA_ODR_OD7 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD7		(1 << 7)
/** GPIOA_ODR_OD6 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD6		(1 << 6)
/** GPIOA_ODR_OD5 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD5		(1 << 5)
/** GPIOA_ODR_OD4 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD4		(1 << 4)
/** GPIOA_ODR_OD3 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD3		(1 << 3)
/** GPIOA_ODR_OD2 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD2		(1 << 2)
/** GPIOA_ODR_OD1 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD1		(1 << 1)
/** GPIOA_ODR_OD0 Port output data bit (y = 0..15) **/
#define GPIOA_ODR_OD0		(1 << 0)

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
/** GPIOA_BSRR_BR0 Port x reset bit y (y = 0..15) **/
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


#define GPIOA_AFRL_AFSEL7_SHIFT		28
#define GPIOA_AFRL_AFSEL7_MASK		0x0f
/** @defgroup gpioa_afrl_afsel7 AFSEL7 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL6_SHIFT		24
#define GPIOA_AFRL_AFSEL6_MASK		0x0f
/** @defgroup gpioa_afrl_afsel6 AFSEL6 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL5_SHIFT		20
#define GPIOA_AFRL_AFSEL5_MASK		0x0f
/** @defgroup gpioa_afrl_afsel5 AFSEL5 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL4_SHIFT		16
#define GPIOA_AFRL_AFSEL4_MASK		0x0f
/** @defgroup gpioa_afrl_afsel4 AFSEL4 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL3_SHIFT		12
#define GPIOA_AFRL_AFSEL3_MASK		0x0f
/** @defgroup gpioa_afrl_afsel3 AFSEL3 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL2_SHIFT		8
#define GPIOA_AFRL_AFSEL2_MASK		0x0f
/** @defgroup gpioa_afrl_afsel2 AFSEL2 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL1_SHIFT		4
#define GPIOA_AFRL_AFSEL1_MASK		0x0f
/** @defgroup gpioa_afrl_afsel1 AFSEL1 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


#define GPIOA_AFRL_AFSEL0_SHIFT		0
#define GPIOA_AFRL_AFSEL0_MASK		0x0f
/** @defgroup gpioa_afrl_afsel0 AFSEL0 Alternate function selection for port x pin y (y = 0..7)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_afrh AFRH GPIO alternate function high register
@{*/


#define GPIOA_AFRH_AFSEL15_SHIFT		28
#define GPIOA_AFRH_AFSEL15_MASK		0x0f
/** @defgroup gpioa_afrh_afsel15 AFSEL15 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL14_SHIFT		24
#define GPIOA_AFRH_AFSEL14_MASK		0x0f
/** @defgroup gpioa_afrh_afsel14 AFSEL14 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL13_SHIFT		20
#define GPIOA_AFRH_AFSEL13_MASK		0x0f
/** @defgroup gpioa_afrh_afsel13 AFSEL13 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL12_SHIFT		16
#define GPIOA_AFRH_AFSEL12_MASK		0x0f
/** @defgroup gpioa_afrh_afsel12 AFSEL12 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL11_SHIFT		12
#define GPIOA_AFRH_AFSEL11_MASK		0x0f
/** @defgroup gpioa_afrh_afsel11 AFSEL11 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL10_SHIFT		8
#define GPIOA_AFRH_AFSEL10_MASK		0x0f
/** @defgroup gpioa_afrh_afsel10 AFSEL10 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL9_SHIFT		4
#define GPIOA_AFRH_AFSEL9_MASK		0x0f
/** @defgroup gpioa_afrh_afsel9 AFSEL9 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


#define GPIOA_AFRH_AFSEL8_SHIFT		0
#define GPIOA_AFRH_AFSEL8_MASK		0x0f
/** @defgroup gpioa_afrh_afsel8 AFSEL8 Alternate function selection for port x pin y (y = 8..15)
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_brr BRR GPIO port bit reset register
@{*/

/** GPIOA_BRR_BR15 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR15		(1 << 15)
/** GPIOA_BRR_BR14 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR14		(1 << 14)
/** GPIOA_BRR_BR13 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR13		(1 << 13)
/** GPIOA_BRR_BR12 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR12		(1 << 12)
/** GPIOA_BRR_BR11 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR11		(1 << 11)
/** GPIOA_BRR_BR10 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR10		(1 << 10)
/** GPIOA_BRR_BR9 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR9		(1 << 9)
/** GPIOA_BRR_BR8 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR8		(1 << 8)
/** GPIOA_BRR_BR7 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR7		(1 << 7)
/** GPIOA_BRR_BR6 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR6		(1 << 6)
/** GPIOA_BRR_BR5 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR5		(1 << 5)
/** GPIOA_BRR_BR4 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR4		(1 << 4)
/** GPIOA_BRR_BR3 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR3		(1 << 3)
/** GPIOA_BRR_BR2 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR2		(1 << 2)
/** GPIOA_BRR_BR1 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR1		(1 << 1)
/** GPIOA_BRR_BR0 Port x Reset bit y (y= 0 .. 15) **/
#define GPIOA_BRR_BR0		(1 << 0)

/**@}*/

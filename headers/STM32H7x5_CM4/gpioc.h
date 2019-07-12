#pragma once 

/* --- GPIOC: GPIO -------------------------------------------------- */

/** @defgroup gpioc_registers GPIO Register
@{*/

/** GPIOC_MODER GPIO port mode register **/
#define GPIOC_MODER			MMIO32(GPIOC_BASE + 0x00)
/** GPIOC_OTYPER GPIO port output type register **/
#define GPIOC_OTYPER			MMIO32(GPIOC_BASE + 0x04)
/** GPIOC_OSPEEDR GPIO port output speed register **/
#define GPIOC_OSPEEDR			MMIO32(GPIOC_BASE + 0x08)
/** GPIOC_PUPDR GPIO port pull-up/pull-down register **/
#define GPIOC_PUPDR			MMIO32(GPIOC_BASE + 0x0c)
/** GPIOC_IDR GPIO port input data register **/
#define GPIOC_IDR			MMIO32(GPIOC_BASE + 0x10)
/** GPIOC_ODR GPIO port output data register **/
#define GPIOC_ODR			MMIO32(GPIOC_BASE + 0x14)
/** GPIOC_BSRR GPIO port bit set/reset register **/
#define GPIOC_BSRR			MMIO32(GPIOC_BASE + 0x18)
/** GPIOC_LCKR This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers). **/
#define GPIOC_LCKR			MMIO32(GPIOC_BASE + 0x1c)
/** GPIOC_AFRL GPIO alternate function low register **/
#define GPIOC_AFRL			MMIO32(GPIOC_BASE + 0x20)
/** GPIOC_AFRH GPIO alternate function high register **/
#define GPIOC_AFRH			MMIO32(GPIOC_BASE + 0x24)

/**@}*/


/** @defgroup gpioc_moder MODER GPIO port mode register
@{*/


#define GPIOC_MODER_MODE15_SHIFT		30
#define GPIOC_MODER_MODE15_MASK		0x03
/** @defgroup gpioc_moder_mode15 MODE15 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE14_SHIFT		28
#define GPIOC_MODER_MODE14_MASK		0x03
/** @defgroup gpioc_moder_mode14 MODE14 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE13_SHIFT		26
#define GPIOC_MODER_MODE13_MASK		0x03
/** @defgroup gpioc_moder_mode13 MODE13 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE12_SHIFT		24
#define GPIOC_MODER_MODE12_MASK		0x03
/** @defgroup gpioc_moder_mode12 MODE12 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE11_SHIFT		22
#define GPIOC_MODER_MODE11_MASK		0x03
/** @defgroup gpioc_moder_mode11 MODE11 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE10_SHIFT		20
#define GPIOC_MODER_MODE10_MASK		0x03
/** @defgroup gpioc_moder_mode10 MODE10 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE9_SHIFT		18
#define GPIOC_MODER_MODE9_MASK		0x03
/** @defgroup gpioc_moder_mode9 MODE9 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE8_SHIFT		16
#define GPIOC_MODER_MODE8_MASK		0x03
/** @defgroup gpioc_moder_mode8 MODE8 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE7_SHIFT		14
#define GPIOC_MODER_MODE7_MASK		0x03
/** @defgroup gpioc_moder_mode7 MODE7 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE6_SHIFT		12
#define GPIOC_MODER_MODE6_MASK		0x03
/** @defgroup gpioc_moder_mode6 MODE6 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE5_SHIFT		10
#define GPIOC_MODER_MODE5_MASK		0x03
/** @defgroup gpioc_moder_mode5 MODE5 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE4_SHIFT		8
#define GPIOC_MODER_MODE4_MASK		0x03
/** @defgroup gpioc_moder_mode4 MODE4 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE3_SHIFT		6
#define GPIOC_MODER_MODE3_MASK		0x03
/** @defgroup gpioc_moder_mode3 MODE3 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE2_SHIFT		4
#define GPIOC_MODER_MODE2_MASK		0x03
/** @defgroup gpioc_moder_mode2 MODE2 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE1_SHIFT		2
#define GPIOC_MODER_MODE1_MASK		0x03
/** @defgroup gpioc_moder_mode1 MODE1 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


#define GPIOC_MODER_MODE0_SHIFT		0
#define GPIOC_MODER_MODE0_MASK		0x03
/** @defgroup gpioc_moder_mode0 MODE0 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_otyper OTYPER GPIO port output type register
@{*/

/** GPIOC_OTYPER_OT15 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT15		(1 << 15)
/** GPIOC_OTYPER_OT14 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT14		(1 << 14)
/** GPIOC_OTYPER_OT13 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT13		(1 << 13)
/** GPIOC_OTYPER_OT12 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT12		(1 << 12)
/** GPIOC_OTYPER_OT11 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT11		(1 << 11)
/** GPIOC_OTYPER_OT10 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT10		(1 << 10)
/** GPIOC_OTYPER_OT9 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT9		(1 << 9)
/** GPIOC_OTYPER_OT8 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT8		(1 << 8)
/** GPIOC_OTYPER_OT7 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT7		(1 << 7)
/** GPIOC_OTYPER_OT6 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT6		(1 << 6)
/** GPIOC_OTYPER_OT5 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT5		(1 << 5)
/** GPIOC_OTYPER_OT4 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT4		(1 << 4)
/** GPIOC_OTYPER_OT3 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT3		(1 << 3)
/** GPIOC_OTYPER_OT2 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT2		(1 << 2)
/** GPIOC_OTYPER_OT1 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT1		(1 << 1)
/** GPIOC_OTYPER_OT0 Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type. **/
#define GPIOC_OTYPER_OT0		(1 << 0)

/**@}*/

/** @defgroup gpioc_ospeedr OSPEEDR GPIO port output speed register
@{*/


#define GPIOC_OSPEEDR_OSPEED15_SHIFT		30
#define GPIOC_OSPEEDR_OSPEED15_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed15 OSPEED15 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED14_SHIFT		28
#define GPIOC_OSPEEDR_OSPEED14_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed14 OSPEED14 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED13_SHIFT		26
#define GPIOC_OSPEEDR_OSPEED13_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed13 OSPEED13 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED12_SHIFT		24
#define GPIOC_OSPEEDR_OSPEED12_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed12 OSPEED12 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED11_SHIFT		22
#define GPIOC_OSPEEDR_OSPEED11_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed11 OSPEED11 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED10_SHIFT		20
#define GPIOC_OSPEEDR_OSPEED10_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed10 OSPEED10 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED9_SHIFT		18
#define GPIOC_OSPEEDR_OSPEED9_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed9 OSPEED9 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED8_SHIFT		16
#define GPIOC_OSPEEDR_OSPEED8_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed8 OSPEED8 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED7_SHIFT		14
#define GPIOC_OSPEEDR_OSPEED7_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed7 OSPEED7 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED6_SHIFT		12
#define GPIOC_OSPEEDR_OSPEED6_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed6 OSPEED6 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED5_SHIFT		10
#define GPIOC_OSPEEDR_OSPEED5_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed5 OSPEED5 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED4_SHIFT		8
#define GPIOC_OSPEEDR_OSPEED4_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed4 OSPEED4 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED3_SHIFT		6
#define GPIOC_OSPEEDR_OSPEED3_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed3 OSPEED3 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED2_SHIFT		4
#define GPIOC_OSPEEDR_OSPEED2_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed2 OSPEED2 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED1_SHIFT		2
#define GPIOC_OSPEEDR_OSPEED1_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed1 OSPEED1 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


#define GPIOC_OSPEEDR_OSPEED0_SHIFT		0
#define GPIOC_OSPEEDR_OSPEED0_MASK		0x03
/** @defgroup gpioc_ospeedr_ospeed0 OSPEED0 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_pupdr PUPDR GPIO port pull-up/pull-down register
@{*/


#define GPIOC_PUPDR_PUPD15_SHIFT		30
#define GPIOC_PUPDR_PUPD15_MASK		0x03
/** @defgroup gpioc_pupdr_pupd15 PUPD15 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD14_SHIFT		28
#define GPIOC_PUPDR_PUPD14_MASK		0x03
/** @defgroup gpioc_pupdr_pupd14 PUPD14 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD13_SHIFT		26
#define GPIOC_PUPDR_PUPD13_MASK		0x03
/** @defgroup gpioc_pupdr_pupd13 PUPD13 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD12_SHIFT		24
#define GPIOC_PUPDR_PUPD12_MASK		0x03
/** @defgroup gpioc_pupdr_pupd12 PUPD12 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD11_SHIFT		22
#define GPIOC_PUPDR_PUPD11_MASK		0x03
/** @defgroup gpioc_pupdr_pupd11 PUPD11 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD10_SHIFT		20
#define GPIOC_PUPDR_PUPD10_MASK		0x03
/** @defgroup gpioc_pupdr_pupd10 PUPD10 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD9_SHIFT		18
#define GPIOC_PUPDR_PUPD9_MASK		0x03
/** @defgroup gpioc_pupdr_pupd9 PUPD9 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD8_SHIFT		16
#define GPIOC_PUPDR_PUPD8_MASK		0x03
/** @defgroup gpioc_pupdr_pupd8 PUPD8 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD7_SHIFT		14
#define GPIOC_PUPDR_PUPD7_MASK		0x03
/** @defgroup gpioc_pupdr_pupd7 PUPD7 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD6_SHIFT		12
#define GPIOC_PUPDR_PUPD6_MASK		0x03
/** @defgroup gpioc_pupdr_pupd6 PUPD6 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD5_SHIFT		10
#define GPIOC_PUPDR_PUPD5_MASK		0x03
/** @defgroup gpioc_pupdr_pupd5 PUPD5 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD4_SHIFT		8
#define GPIOC_PUPDR_PUPD4_MASK		0x03
/** @defgroup gpioc_pupdr_pupd4 PUPD4 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD3_SHIFT		6
#define GPIOC_PUPDR_PUPD3_MASK		0x03
/** @defgroup gpioc_pupdr_pupd3 PUPD3 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD2_SHIFT		4
#define GPIOC_PUPDR_PUPD2_MASK		0x03
/** @defgroup gpioc_pupdr_pupd2 PUPD2 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD1_SHIFT		2
#define GPIOC_PUPDR_PUPD1_MASK		0x03
/** @defgroup gpioc_pupdr_pupd1 PUPD1 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


#define GPIOC_PUPDR_PUPD0_SHIFT		0
#define GPIOC_PUPDR_PUPD0_MASK		0x03
/** @defgroup gpioc_pupdr_pupd0 PUPD0 [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_idr IDR GPIO port input data register
@{*/

/** GPIOC_IDR_ID15 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID15		(1 << 15)
/** GPIOC_IDR_ID14 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID14		(1 << 14)
/** GPIOC_IDR_ID13 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID13		(1 << 13)
/** GPIOC_IDR_ID12 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID12		(1 << 12)
/** GPIOC_IDR_ID11 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID11		(1 << 11)
/** GPIOC_IDR_ID10 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID10		(1 << 10)
/** GPIOC_IDR_ID9 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID9		(1 << 9)
/** GPIOC_IDR_ID8 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID8		(1 << 8)
/** GPIOC_IDR_ID7 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID7		(1 << 7)
/** GPIOC_IDR_ID6 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID6		(1 << 6)
/** GPIOC_IDR_ID5 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID5		(1 << 5)
/** GPIOC_IDR_ID4 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID4		(1 << 4)
/** GPIOC_IDR_ID3 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID3		(1 << 3)
/** GPIOC_IDR_ID2 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID2		(1 << 2)
/** GPIOC_IDR_ID1 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID1		(1 << 1)
/** GPIOC_IDR_ID0 Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port. **/
#define GPIOC_IDR_ID0		(1 << 0)

/**@}*/

/** @defgroup gpioc_odr ODR GPIO port output data register
@{*/

/** GPIOC_ODR_OD15 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD15		(1 << 15)
/** GPIOC_ODR_OD14 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD14		(1 << 14)
/** GPIOC_ODR_OD13 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD13		(1 << 13)
/** GPIOC_ODR_OD12 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD12		(1 << 12)
/** GPIOC_ODR_OD11 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD11		(1 << 11)
/** GPIOC_ODR_OD10 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD10		(1 << 10)
/** GPIOC_ODR_OD9 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD9		(1 << 9)
/** GPIOC_ODR_OD8 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD8		(1 << 8)
/** GPIOC_ODR_OD7 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD7		(1 << 7)
/** GPIOC_ODR_OD6 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD6		(1 << 6)
/** GPIOC_ODR_OD5 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD5		(1 << 5)
/** GPIOC_ODR_OD4 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD4		(1 << 4)
/** GPIOC_ODR_OD3 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD3		(1 << 3)
/** GPIOC_ODR_OD2 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD2		(1 << 2)
/** GPIOC_ODR_OD1 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD1		(1 << 1)
/** GPIOC_ODR_OD0 Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F). **/
#define GPIOC_ODR_OD0		(1 << 0)

/**@}*/

/** @defgroup gpioc_bsrr BSRR GPIO port bit set/reset register
@{*/

/** GPIOC_BSRR_BR15 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR15		(1 << 31)
/** GPIOC_BSRR_BR14 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR14		(1 << 30)
/** GPIOC_BSRR_BR13 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR13		(1 << 29)
/** GPIOC_BSRR_BR12 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR12		(1 << 28)
/** GPIOC_BSRR_BR11 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR11		(1 << 27)
/** GPIOC_BSRR_BR10 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR10		(1 << 26)
/** GPIOC_BSRR_BR9 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR9		(1 << 25)
/** GPIOC_BSRR_BR8 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR8		(1 << 24)
/** GPIOC_BSRR_BR7 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR7		(1 << 23)
/** GPIOC_BSRR_BR6 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR6		(1 << 22)
/** GPIOC_BSRR_BR5 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR5		(1 << 21)
/** GPIOC_BSRR_BR4 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR4		(1 << 20)
/** GPIOC_BSRR_BR3 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR3		(1 << 19)
/** GPIOC_BSRR_BR2 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR2		(1 << 18)
/** GPIOC_BSRR_BR1 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR1		(1 << 17)
/** GPIOC_BSRR_BR0 Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority. **/
#define GPIOC_BSRR_BR0		(1 << 16)
/** GPIOC_BSRR_BS15 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS15		(1 << 15)
/** GPIOC_BSRR_BS14 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS14		(1 << 14)
/** GPIOC_BSRR_BS13 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS13		(1 << 13)
/** GPIOC_BSRR_BS12 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS12		(1 << 12)
/** GPIOC_BSRR_BS11 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS11		(1 << 11)
/** GPIOC_BSRR_BS10 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS10		(1 << 10)
/** GPIOC_BSRR_BS9 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS9		(1 << 9)
/** GPIOC_BSRR_BS8 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS8		(1 << 8)
/** GPIOC_BSRR_BS7 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS7		(1 << 7)
/** GPIOC_BSRR_BS6 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS6		(1 << 6)
/** GPIOC_BSRR_BS5 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS5		(1 << 5)
/** GPIOC_BSRR_BS4 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS4		(1 << 4)
/** GPIOC_BSRR_BS3 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS3		(1 << 3)
/** GPIOC_BSRR_BS2 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS2		(1 << 2)
/** GPIOC_BSRR_BS1 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS1		(1 << 1)
/** GPIOC_BSRR_BS0 Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000. **/
#define GPIOC_BSRR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpioc_lckr LCKR This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers).
@{*/

/** GPIOC_LCKR_LCKK Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset. **/
#define GPIOC_LCKR_LCKK		(1 << 16)
/** GPIOC_LCKR_LCK15 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK15		(1 << 15)
/** GPIOC_LCKR_LCK14 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK14		(1 << 14)
/** GPIOC_LCKR_LCK13 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK13		(1 << 13)
/** GPIOC_LCKR_LCK12 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK12		(1 << 12)
/** GPIOC_LCKR_LCK11 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK11		(1 << 11)
/** GPIOC_LCKR_LCK10 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK10		(1 << 10)
/** GPIOC_LCKR_LCK9 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK9		(1 << 9)
/** GPIOC_LCKR_LCK8 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK8		(1 << 8)
/** GPIOC_LCKR_LCK7 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK7		(1 << 7)
/** GPIOC_LCKR_LCK6 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK6		(1 << 6)
/** GPIOC_LCKR_LCK5 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK5		(1 << 5)
/** GPIOC_LCKR_LCK4 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK4		(1 << 4)
/** GPIOC_LCKR_LCK3 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK3		(1 << 3)
/** GPIOC_LCKR_LCK2 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK2		(1 << 2)
/** GPIOC_LCKR_LCK1 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK1		(1 << 1)
/** GPIOC_LCKR_LCK0 Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0. **/
#define GPIOC_LCKR_LCK0		(1 << 0)

/**@}*/

/** @defgroup gpioc_afrl AFRL GPIO alternate function low register
@{*/


#define GPIOC_AFRL_AFSEL7_SHIFT		28
#define GPIOC_AFRL_AFSEL7_MASK		0x0f
/** @defgroup gpioc_afrl_afsel7 AFSEL7 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL6_SHIFT		24
#define GPIOC_AFRL_AFSEL6_MASK		0x0f
/** @defgroup gpioc_afrl_afsel6 AFSEL6 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL5_SHIFT		20
#define GPIOC_AFRL_AFSEL5_MASK		0x0f
/** @defgroup gpioc_afrl_afsel5 AFSEL5 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL4_SHIFT		16
#define GPIOC_AFRL_AFSEL4_MASK		0x0f
/** @defgroup gpioc_afrl_afsel4 AFSEL4 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL3_SHIFT		12
#define GPIOC_AFRL_AFSEL3_MASK		0x0f
/** @defgroup gpioc_afrl_afsel3 AFSEL3 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL2_SHIFT		8
#define GPIOC_AFRL_AFSEL2_MASK		0x0f
/** @defgroup gpioc_afrl_afsel2 AFSEL2 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL1_SHIFT		4
#define GPIOC_AFRL_AFSEL1_MASK		0x0f
/** @defgroup gpioc_afrl_afsel1 AFSEL1 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


#define GPIOC_AFRL_AFSEL0_SHIFT		0
#define GPIOC_AFRL_AFSEL0_MASK		0x0f
/** @defgroup gpioc_afrl_afsel0 AFSEL0 [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_afrh AFRH GPIO alternate function high register
@{*/


#define GPIOC_AFRH_AFSEL15_SHIFT		28
#define GPIOC_AFRH_AFSEL15_MASK		0x0f
/** @defgroup gpioc_afrh_afsel15 AFSEL15 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL14_SHIFT		24
#define GPIOC_AFRH_AFSEL14_MASK		0x0f
/** @defgroup gpioc_afrh_afsel14 AFSEL14 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL13_SHIFT		20
#define GPIOC_AFRH_AFSEL13_MASK		0x0f
/** @defgroup gpioc_afrh_afsel13 AFSEL13 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL12_SHIFT		16
#define GPIOC_AFRH_AFSEL12_MASK		0x0f
/** @defgroup gpioc_afrh_afsel12 AFSEL12 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL11_SHIFT		12
#define GPIOC_AFRH_AFSEL11_MASK		0x0f
/** @defgroup gpioc_afrh_afsel11 AFSEL11 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL10_SHIFT		8
#define GPIOC_AFRH_AFSEL10_MASK		0x0f
/** @defgroup gpioc_afrh_afsel10 AFSEL10 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL9_SHIFT		4
#define GPIOC_AFRH_AFSEL9_MASK		0x0f
/** @defgroup gpioc_afrh_afsel9 AFSEL9 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


#define GPIOC_AFRH_AFSEL8_SHIFT		0
#define GPIOC_AFRH_AFSEL8_MASK		0x0f
/** @defgroup gpioc_afrh_afsel8 AFSEL8 [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
@{*/
/**@}*/


/**@}*/
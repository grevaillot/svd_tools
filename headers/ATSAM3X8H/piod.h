#pragma once 

/* --- PIOD: Parallel Input/Output Controller D --------------------- */

/** @defgroup piod_registers Parallel Input/Output Controller D Register
@{*/

/** PIOD_PER PIO Enable Register **/
#define PIOD_PER			MMIO32(PIOD_BASE + 0x00)
/** PIOD_PDR PIO Disable Register **/
#define PIOD_PDR			MMIO32(PIOD_BASE + 0x04)
/** PIOD_PSR PIO Status Register **/
#define PIOD_PSR			MMIO32(PIOD_BASE + 0x08)
/** PIOD_OER Output Enable Register **/
#define PIOD_OER			MMIO32(PIOD_BASE + 0x10)
/** PIOD_ODR Output Disable Register **/
#define PIOD_ODR			MMIO32(PIOD_BASE + 0x14)
/** PIOD_OSR Output Status Register **/
#define PIOD_OSR			MMIO32(PIOD_BASE + 0x18)
/** PIOD_IFER Glitch Input Filter Enable Register **/
#define PIOD_IFER			MMIO32(PIOD_BASE + 0x20)
/** PIOD_IFDR Glitch Input Filter Disable Register **/
#define PIOD_IFDR			MMIO32(PIOD_BASE + 0x24)
/** PIOD_IFSR Glitch Input Filter Status Register **/
#define PIOD_IFSR			MMIO32(PIOD_BASE + 0x28)
/** PIOD_SODR Set Output Data Register **/
#define PIOD_SODR			MMIO32(PIOD_BASE + 0x30)
/** PIOD_CODR Clear Output Data Register **/
#define PIOD_CODR			MMIO32(PIOD_BASE + 0x34)
/** PIOD_ODSR Output Data Status Register **/
#define PIOD_ODSR			MMIO32(PIOD_BASE + 0x38)
/** PIOD_PDSR Pin Data Status Register **/
#define PIOD_PDSR			MMIO32(PIOD_BASE + 0x3c)
/** PIOD_IER Interrupt Enable Register **/
#define PIOD_IER			MMIO32(PIOD_BASE + 0x40)
/** PIOD_IDR Interrupt Disable Register **/
#define PIOD_IDR			MMIO32(PIOD_BASE + 0x44)
/** PIOD_IMR Interrupt Mask Register **/
#define PIOD_IMR			MMIO32(PIOD_BASE + 0x48)
/** PIOD_ISR Interrupt Status Register **/
#define PIOD_ISR			MMIO32(PIOD_BASE + 0x4c)
/** PIOD_MDER Multi-driver Enable Register **/
#define PIOD_MDER			MMIO32(PIOD_BASE + 0x50)
/** PIOD_MDDR Multi-driver Disable Register **/
#define PIOD_MDDR			MMIO32(PIOD_BASE + 0x54)
/** PIOD_MDSR Multi-driver Status Register **/
#define PIOD_MDSR			MMIO32(PIOD_BASE + 0x58)
/** PIOD_PUDR Pull-up Disable Register **/
#define PIOD_PUDR			MMIO32(PIOD_BASE + 0x60)
/** PIOD_PUER Pull-up Enable Register **/
#define PIOD_PUER			MMIO32(PIOD_BASE + 0x64)
/** PIOD_PUSR Pad Pull-up Status Register **/
#define PIOD_PUSR			MMIO32(PIOD_BASE + 0x68)
/** PIOD_ABSR Peripheral AB Select Register **/
#define PIOD_ABSR			MMIO32(PIOD_BASE + 0x70)
/** PIOD_SCIFSR System Clock Glitch Input Filter Select Register **/
#define PIOD_SCIFSR			MMIO32(PIOD_BASE + 0x80)
/** PIOD_DIFSR Debouncing Input Filter Select Register **/
#define PIOD_DIFSR			MMIO32(PIOD_BASE + 0x84)
/** PIOD_IFDGSR Glitch or Debouncing Input Filter Clock Selection Status Register **/
#define PIOD_IFDGSR			MMIO32(PIOD_BASE + 0x88)
/** PIOD_SCDR Slow Clock Divider Debouncing Register **/
#define PIOD_SCDR			MMIO32(PIOD_BASE + 0x8c)
/** PIOD_OWER Output Write Enable **/
#define PIOD_OWER			MMIO32(PIOD_BASE + 0xa0)
/** PIOD_OWDR Output Write Disable **/
#define PIOD_OWDR			MMIO32(PIOD_BASE + 0xa4)
/** PIOD_OWSR Output Write Status Register **/
#define PIOD_OWSR			MMIO32(PIOD_BASE + 0xa8)
/** PIOD_AIMER Additional Interrupt Modes Enable Register **/
#define PIOD_AIMER			MMIO32(PIOD_BASE + 0xb0)
/** PIOD_AIMDR Additional Interrupt Modes Disables Register **/
#define PIOD_AIMDR			MMIO32(PIOD_BASE + 0xb4)
/** PIOD_AIMMR Additional Interrupt Modes Mask Register **/
#define PIOD_AIMMR			MMIO32(PIOD_BASE + 0xb8)
/** PIOD_ESR Edge Select Register **/
#define PIOD_ESR			MMIO32(PIOD_BASE + 0xc0)
/** PIOD_LSR Level Select Register **/
#define PIOD_LSR			MMIO32(PIOD_BASE + 0xc4)
/** PIOD_ELSR Edge/Level Status Register **/
#define PIOD_ELSR			MMIO32(PIOD_BASE + 0xc8)
/** PIOD_FELLSR Falling Edge/Low Level Select Register **/
#define PIOD_FELLSR			MMIO32(PIOD_BASE + 0xd0)
/** PIOD_REHLSR Rising Edge/ High Level Select Register **/
#define PIOD_REHLSR			MMIO32(PIOD_BASE + 0xd4)
/** PIOD_FRLHSR Fall/Rise - Low/High Status Register **/
#define PIOD_FRLHSR			MMIO32(PIOD_BASE + 0xd8)
/** PIOD_LOCKSR Lock Status **/
#define PIOD_LOCKSR			MMIO32(PIOD_BASE + 0xe0)
/** PIOD_WPMR Write Protect Mode Register **/
#define PIOD_WPMR			MMIO32(PIOD_BASE + 0xe4)
/** PIOD_WPSR Write Protect Status Register **/
#define PIOD_WPSR			MMIO32(PIOD_BASE + 0xe8)

/**@}*/


/** @defgroup piod_per PER PIO Enable Register
@{*/

/** PIOD_PER_P31 PIO Enable **/
#define PIOD_PER_P31		(1 << 31)
/** PIOD_PER_P30 PIO Enable **/
#define PIOD_PER_P30		(1 << 30)
/** PIOD_PER_P29 PIO Enable **/
#define PIOD_PER_P29		(1 << 29)
/** PIOD_PER_P28 PIO Enable **/
#define PIOD_PER_P28		(1 << 28)
/** PIOD_PER_P27 PIO Enable **/
#define PIOD_PER_P27		(1 << 27)
/** PIOD_PER_P26 PIO Enable **/
#define PIOD_PER_P26		(1 << 26)
/** PIOD_PER_P25 PIO Enable **/
#define PIOD_PER_P25		(1 << 25)
/** PIOD_PER_P24 PIO Enable **/
#define PIOD_PER_P24		(1 << 24)
/** PIOD_PER_P23 PIO Enable **/
#define PIOD_PER_P23		(1 << 23)
/** PIOD_PER_P22 PIO Enable **/
#define PIOD_PER_P22		(1 << 22)
/** PIOD_PER_P21 PIO Enable **/
#define PIOD_PER_P21		(1 << 21)
/** PIOD_PER_P20 PIO Enable **/
#define PIOD_PER_P20		(1 << 20)
/** PIOD_PER_P19 PIO Enable **/
#define PIOD_PER_P19		(1 << 19)
/** PIOD_PER_P18 PIO Enable **/
#define PIOD_PER_P18		(1 << 18)
/** PIOD_PER_P17 PIO Enable **/
#define PIOD_PER_P17		(1 << 17)
/** PIOD_PER_P16 PIO Enable **/
#define PIOD_PER_P16		(1 << 16)
/** PIOD_PER_P15 PIO Enable **/
#define PIOD_PER_P15		(1 << 15)
/** PIOD_PER_P14 PIO Enable **/
#define PIOD_PER_P14		(1 << 14)
/** PIOD_PER_P13 PIO Enable **/
#define PIOD_PER_P13		(1 << 13)
/** PIOD_PER_P12 PIO Enable **/
#define PIOD_PER_P12		(1 << 12)
/** PIOD_PER_P11 PIO Enable **/
#define PIOD_PER_P11		(1 << 11)
/** PIOD_PER_P10 PIO Enable **/
#define PIOD_PER_P10		(1 << 10)
/** PIOD_PER_P9 PIO Enable **/
#define PIOD_PER_P9		(1 << 9)
/** PIOD_PER_P8 PIO Enable **/
#define PIOD_PER_P8		(1 << 8)
/** PIOD_PER_P7 PIO Enable **/
#define PIOD_PER_P7		(1 << 7)
/** PIOD_PER_P6 PIO Enable **/
#define PIOD_PER_P6		(1 << 6)
/** PIOD_PER_P5 PIO Enable **/
#define PIOD_PER_P5		(1 << 5)
/** PIOD_PER_P4 PIO Enable **/
#define PIOD_PER_P4		(1 << 4)
/** PIOD_PER_P3 PIO Enable **/
#define PIOD_PER_P3		(1 << 3)
/** PIOD_PER_P2 PIO Enable **/
#define PIOD_PER_P2		(1 << 2)
/** PIOD_PER_P1 PIO Enable **/
#define PIOD_PER_P1		(1 << 1)
/** PIOD_PER_P0 PIO Enable **/
#define PIOD_PER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_pdr PDR PIO Disable Register
@{*/

/** PIOD_PDR_P31 PIO Disable **/
#define PIOD_PDR_P31		(1 << 31)
/** PIOD_PDR_P30 PIO Disable **/
#define PIOD_PDR_P30		(1 << 30)
/** PIOD_PDR_P29 PIO Disable **/
#define PIOD_PDR_P29		(1 << 29)
/** PIOD_PDR_P28 PIO Disable **/
#define PIOD_PDR_P28		(1 << 28)
/** PIOD_PDR_P27 PIO Disable **/
#define PIOD_PDR_P27		(1 << 27)
/** PIOD_PDR_P26 PIO Disable **/
#define PIOD_PDR_P26		(1 << 26)
/** PIOD_PDR_P25 PIO Disable **/
#define PIOD_PDR_P25		(1 << 25)
/** PIOD_PDR_P24 PIO Disable **/
#define PIOD_PDR_P24		(1 << 24)
/** PIOD_PDR_P23 PIO Disable **/
#define PIOD_PDR_P23		(1 << 23)
/** PIOD_PDR_P22 PIO Disable **/
#define PIOD_PDR_P22		(1 << 22)
/** PIOD_PDR_P21 PIO Disable **/
#define PIOD_PDR_P21		(1 << 21)
/** PIOD_PDR_P20 PIO Disable **/
#define PIOD_PDR_P20		(1 << 20)
/** PIOD_PDR_P19 PIO Disable **/
#define PIOD_PDR_P19		(1 << 19)
/** PIOD_PDR_P18 PIO Disable **/
#define PIOD_PDR_P18		(1 << 18)
/** PIOD_PDR_P17 PIO Disable **/
#define PIOD_PDR_P17		(1 << 17)
/** PIOD_PDR_P16 PIO Disable **/
#define PIOD_PDR_P16		(1 << 16)
/** PIOD_PDR_P15 PIO Disable **/
#define PIOD_PDR_P15		(1 << 15)
/** PIOD_PDR_P14 PIO Disable **/
#define PIOD_PDR_P14		(1 << 14)
/** PIOD_PDR_P13 PIO Disable **/
#define PIOD_PDR_P13		(1 << 13)
/** PIOD_PDR_P12 PIO Disable **/
#define PIOD_PDR_P12		(1 << 12)
/** PIOD_PDR_P11 PIO Disable **/
#define PIOD_PDR_P11		(1 << 11)
/** PIOD_PDR_P10 PIO Disable **/
#define PIOD_PDR_P10		(1 << 10)
/** PIOD_PDR_P9 PIO Disable **/
#define PIOD_PDR_P9		(1 << 9)
/** PIOD_PDR_P8 PIO Disable **/
#define PIOD_PDR_P8		(1 << 8)
/** PIOD_PDR_P7 PIO Disable **/
#define PIOD_PDR_P7		(1 << 7)
/** PIOD_PDR_P6 PIO Disable **/
#define PIOD_PDR_P6		(1 << 6)
/** PIOD_PDR_P5 PIO Disable **/
#define PIOD_PDR_P5		(1 << 5)
/** PIOD_PDR_P4 PIO Disable **/
#define PIOD_PDR_P4		(1 << 4)
/** PIOD_PDR_P3 PIO Disable **/
#define PIOD_PDR_P3		(1 << 3)
/** PIOD_PDR_P2 PIO Disable **/
#define PIOD_PDR_P2		(1 << 2)
/** PIOD_PDR_P1 PIO Disable **/
#define PIOD_PDR_P1		(1 << 1)
/** PIOD_PDR_P0 PIO Disable **/
#define PIOD_PDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_psr PSR PIO Status Register
@{*/

/** PIOD_PSR_P31 PIO Status **/
#define PIOD_PSR_P31		(1 << 31)
/** PIOD_PSR_P30 PIO Status **/
#define PIOD_PSR_P30		(1 << 30)
/** PIOD_PSR_P29 PIO Status **/
#define PIOD_PSR_P29		(1 << 29)
/** PIOD_PSR_P28 PIO Status **/
#define PIOD_PSR_P28		(1 << 28)
/** PIOD_PSR_P27 PIO Status **/
#define PIOD_PSR_P27		(1 << 27)
/** PIOD_PSR_P26 PIO Status **/
#define PIOD_PSR_P26		(1 << 26)
/** PIOD_PSR_P25 PIO Status **/
#define PIOD_PSR_P25		(1 << 25)
/** PIOD_PSR_P24 PIO Status **/
#define PIOD_PSR_P24		(1 << 24)
/** PIOD_PSR_P23 PIO Status **/
#define PIOD_PSR_P23		(1 << 23)
/** PIOD_PSR_P22 PIO Status **/
#define PIOD_PSR_P22		(1 << 22)
/** PIOD_PSR_P21 PIO Status **/
#define PIOD_PSR_P21		(1 << 21)
/** PIOD_PSR_P20 PIO Status **/
#define PIOD_PSR_P20		(1 << 20)
/** PIOD_PSR_P19 PIO Status **/
#define PIOD_PSR_P19		(1 << 19)
/** PIOD_PSR_P18 PIO Status **/
#define PIOD_PSR_P18		(1 << 18)
/** PIOD_PSR_P17 PIO Status **/
#define PIOD_PSR_P17		(1 << 17)
/** PIOD_PSR_P16 PIO Status **/
#define PIOD_PSR_P16		(1 << 16)
/** PIOD_PSR_P15 PIO Status **/
#define PIOD_PSR_P15		(1 << 15)
/** PIOD_PSR_P14 PIO Status **/
#define PIOD_PSR_P14		(1 << 14)
/** PIOD_PSR_P13 PIO Status **/
#define PIOD_PSR_P13		(1 << 13)
/** PIOD_PSR_P12 PIO Status **/
#define PIOD_PSR_P12		(1 << 12)
/** PIOD_PSR_P11 PIO Status **/
#define PIOD_PSR_P11		(1 << 11)
/** PIOD_PSR_P10 PIO Status **/
#define PIOD_PSR_P10		(1 << 10)
/** PIOD_PSR_P9 PIO Status **/
#define PIOD_PSR_P9		(1 << 9)
/** PIOD_PSR_P8 PIO Status **/
#define PIOD_PSR_P8		(1 << 8)
/** PIOD_PSR_P7 PIO Status **/
#define PIOD_PSR_P7		(1 << 7)
/** PIOD_PSR_P6 PIO Status **/
#define PIOD_PSR_P6		(1 << 6)
/** PIOD_PSR_P5 PIO Status **/
#define PIOD_PSR_P5		(1 << 5)
/** PIOD_PSR_P4 PIO Status **/
#define PIOD_PSR_P4		(1 << 4)
/** PIOD_PSR_P3 PIO Status **/
#define PIOD_PSR_P3		(1 << 3)
/** PIOD_PSR_P2 PIO Status **/
#define PIOD_PSR_P2		(1 << 2)
/** PIOD_PSR_P1 PIO Status **/
#define PIOD_PSR_P1		(1 << 1)
/** PIOD_PSR_P0 PIO Status **/
#define PIOD_PSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_oer OER Output Enable Register
@{*/

/** PIOD_OER_P31 Output Enable **/
#define PIOD_OER_P31		(1 << 31)
/** PIOD_OER_P30 Output Enable **/
#define PIOD_OER_P30		(1 << 30)
/** PIOD_OER_P29 Output Enable **/
#define PIOD_OER_P29		(1 << 29)
/** PIOD_OER_P28 Output Enable **/
#define PIOD_OER_P28		(1 << 28)
/** PIOD_OER_P27 Output Enable **/
#define PIOD_OER_P27		(1 << 27)
/** PIOD_OER_P26 Output Enable **/
#define PIOD_OER_P26		(1 << 26)
/** PIOD_OER_P25 Output Enable **/
#define PIOD_OER_P25		(1 << 25)
/** PIOD_OER_P24 Output Enable **/
#define PIOD_OER_P24		(1 << 24)
/** PIOD_OER_P23 Output Enable **/
#define PIOD_OER_P23		(1 << 23)
/** PIOD_OER_P22 Output Enable **/
#define PIOD_OER_P22		(1 << 22)
/** PIOD_OER_P21 Output Enable **/
#define PIOD_OER_P21		(1 << 21)
/** PIOD_OER_P20 Output Enable **/
#define PIOD_OER_P20		(1 << 20)
/** PIOD_OER_P19 Output Enable **/
#define PIOD_OER_P19		(1 << 19)
/** PIOD_OER_P18 Output Enable **/
#define PIOD_OER_P18		(1 << 18)
/** PIOD_OER_P17 Output Enable **/
#define PIOD_OER_P17		(1 << 17)
/** PIOD_OER_P16 Output Enable **/
#define PIOD_OER_P16		(1 << 16)
/** PIOD_OER_P15 Output Enable **/
#define PIOD_OER_P15		(1 << 15)
/** PIOD_OER_P14 Output Enable **/
#define PIOD_OER_P14		(1 << 14)
/** PIOD_OER_P13 Output Enable **/
#define PIOD_OER_P13		(1 << 13)
/** PIOD_OER_P12 Output Enable **/
#define PIOD_OER_P12		(1 << 12)
/** PIOD_OER_P11 Output Enable **/
#define PIOD_OER_P11		(1 << 11)
/** PIOD_OER_P10 Output Enable **/
#define PIOD_OER_P10		(1 << 10)
/** PIOD_OER_P9 Output Enable **/
#define PIOD_OER_P9		(1 << 9)
/** PIOD_OER_P8 Output Enable **/
#define PIOD_OER_P8		(1 << 8)
/** PIOD_OER_P7 Output Enable **/
#define PIOD_OER_P7		(1 << 7)
/** PIOD_OER_P6 Output Enable **/
#define PIOD_OER_P6		(1 << 6)
/** PIOD_OER_P5 Output Enable **/
#define PIOD_OER_P5		(1 << 5)
/** PIOD_OER_P4 Output Enable **/
#define PIOD_OER_P4		(1 << 4)
/** PIOD_OER_P3 Output Enable **/
#define PIOD_OER_P3		(1 << 3)
/** PIOD_OER_P2 Output Enable **/
#define PIOD_OER_P2		(1 << 2)
/** PIOD_OER_P1 Output Enable **/
#define PIOD_OER_P1		(1 << 1)
/** PIOD_OER_P0 Output Enable **/
#define PIOD_OER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_odr ODR Output Disable Register
@{*/

/** PIOD_ODR_P31 Output Disable **/
#define PIOD_ODR_P31		(1 << 31)
/** PIOD_ODR_P30 Output Disable **/
#define PIOD_ODR_P30		(1 << 30)
/** PIOD_ODR_P29 Output Disable **/
#define PIOD_ODR_P29		(1 << 29)
/** PIOD_ODR_P28 Output Disable **/
#define PIOD_ODR_P28		(1 << 28)
/** PIOD_ODR_P27 Output Disable **/
#define PIOD_ODR_P27		(1 << 27)
/** PIOD_ODR_P26 Output Disable **/
#define PIOD_ODR_P26		(1 << 26)
/** PIOD_ODR_P25 Output Disable **/
#define PIOD_ODR_P25		(1 << 25)
/** PIOD_ODR_P24 Output Disable **/
#define PIOD_ODR_P24		(1 << 24)
/** PIOD_ODR_P23 Output Disable **/
#define PIOD_ODR_P23		(1 << 23)
/** PIOD_ODR_P22 Output Disable **/
#define PIOD_ODR_P22		(1 << 22)
/** PIOD_ODR_P21 Output Disable **/
#define PIOD_ODR_P21		(1 << 21)
/** PIOD_ODR_P20 Output Disable **/
#define PIOD_ODR_P20		(1 << 20)
/** PIOD_ODR_P19 Output Disable **/
#define PIOD_ODR_P19		(1 << 19)
/** PIOD_ODR_P18 Output Disable **/
#define PIOD_ODR_P18		(1 << 18)
/** PIOD_ODR_P17 Output Disable **/
#define PIOD_ODR_P17		(1 << 17)
/** PIOD_ODR_P16 Output Disable **/
#define PIOD_ODR_P16		(1 << 16)
/** PIOD_ODR_P15 Output Disable **/
#define PIOD_ODR_P15		(1 << 15)
/** PIOD_ODR_P14 Output Disable **/
#define PIOD_ODR_P14		(1 << 14)
/** PIOD_ODR_P13 Output Disable **/
#define PIOD_ODR_P13		(1 << 13)
/** PIOD_ODR_P12 Output Disable **/
#define PIOD_ODR_P12		(1 << 12)
/** PIOD_ODR_P11 Output Disable **/
#define PIOD_ODR_P11		(1 << 11)
/** PIOD_ODR_P10 Output Disable **/
#define PIOD_ODR_P10		(1 << 10)
/** PIOD_ODR_P9 Output Disable **/
#define PIOD_ODR_P9		(1 << 9)
/** PIOD_ODR_P8 Output Disable **/
#define PIOD_ODR_P8		(1 << 8)
/** PIOD_ODR_P7 Output Disable **/
#define PIOD_ODR_P7		(1 << 7)
/** PIOD_ODR_P6 Output Disable **/
#define PIOD_ODR_P6		(1 << 6)
/** PIOD_ODR_P5 Output Disable **/
#define PIOD_ODR_P5		(1 << 5)
/** PIOD_ODR_P4 Output Disable **/
#define PIOD_ODR_P4		(1 << 4)
/** PIOD_ODR_P3 Output Disable **/
#define PIOD_ODR_P3		(1 << 3)
/** PIOD_ODR_P2 Output Disable **/
#define PIOD_ODR_P2		(1 << 2)
/** PIOD_ODR_P1 Output Disable **/
#define PIOD_ODR_P1		(1 << 1)
/** PIOD_ODR_P0 Output Disable **/
#define PIOD_ODR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_osr OSR Output Status Register
@{*/

/** PIOD_OSR_P31 Output Status **/
#define PIOD_OSR_P31		(1 << 31)
/** PIOD_OSR_P30 Output Status **/
#define PIOD_OSR_P30		(1 << 30)
/** PIOD_OSR_P29 Output Status **/
#define PIOD_OSR_P29		(1 << 29)
/** PIOD_OSR_P28 Output Status **/
#define PIOD_OSR_P28		(1 << 28)
/** PIOD_OSR_P27 Output Status **/
#define PIOD_OSR_P27		(1 << 27)
/** PIOD_OSR_P26 Output Status **/
#define PIOD_OSR_P26		(1 << 26)
/** PIOD_OSR_P25 Output Status **/
#define PIOD_OSR_P25		(1 << 25)
/** PIOD_OSR_P24 Output Status **/
#define PIOD_OSR_P24		(1 << 24)
/** PIOD_OSR_P23 Output Status **/
#define PIOD_OSR_P23		(1 << 23)
/** PIOD_OSR_P22 Output Status **/
#define PIOD_OSR_P22		(1 << 22)
/** PIOD_OSR_P21 Output Status **/
#define PIOD_OSR_P21		(1 << 21)
/** PIOD_OSR_P20 Output Status **/
#define PIOD_OSR_P20		(1 << 20)
/** PIOD_OSR_P19 Output Status **/
#define PIOD_OSR_P19		(1 << 19)
/** PIOD_OSR_P18 Output Status **/
#define PIOD_OSR_P18		(1 << 18)
/** PIOD_OSR_P17 Output Status **/
#define PIOD_OSR_P17		(1 << 17)
/** PIOD_OSR_P16 Output Status **/
#define PIOD_OSR_P16		(1 << 16)
/** PIOD_OSR_P15 Output Status **/
#define PIOD_OSR_P15		(1 << 15)
/** PIOD_OSR_P14 Output Status **/
#define PIOD_OSR_P14		(1 << 14)
/** PIOD_OSR_P13 Output Status **/
#define PIOD_OSR_P13		(1 << 13)
/** PIOD_OSR_P12 Output Status **/
#define PIOD_OSR_P12		(1 << 12)
/** PIOD_OSR_P11 Output Status **/
#define PIOD_OSR_P11		(1 << 11)
/** PIOD_OSR_P10 Output Status **/
#define PIOD_OSR_P10		(1 << 10)
/** PIOD_OSR_P9 Output Status **/
#define PIOD_OSR_P9		(1 << 9)
/** PIOD_OSR_P8 Output Status **/
#define PIOD_OSR_P8		(1 << 8)
/** PIOD_OSR_P7 Output Status **/
#define PIOD_OSR_P7		(1 << 7)
/** PIOD_OSR_P6 Output Status **/
#define PIOD_OSR_P6		(1 << 6)
/** PIOD_OSR_P5 Output Status **/
#define PIOD_OSR_P5		(1 << 5)
/** PIOD_OSR_P4 Output Status **/
#define PIOD_OSR_P4		(1 << 4)
/** PIOD_OSR_P3 Output Status **/
#define PIOD_OSR_P3		(1 << 3)
/** PIOD_OSR_P2 Output Status **/
#define PIOD_OSR_P2		(1 << 2)
/** PIOD_OSR_P1 Output Status **/
#define PIOD_OSR_P1		(1 << 1)
/** PIOD_OSR_P0 Output Status **/
#define PIOD_OSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_ifer IFER Glitch Input Filter Enable Register
@{*/

/** PIOD_IFER_P31 Input Filter Enable **/
#define PIOD_IFER_P31		(1 << 31)
/** PIOD_IFER_P30 Input Filter Enable **/
#define PIOD_IFER_P30		(1 << 30)
/** PIOD_IFER_P29 Input Filter Enable **/
#define PIOD_IFER_P29		(1 << 29)
/** PIOD_IFER_P28 Input Filter Enable **/
#define PIOD_IFER_P28		(1 << 28)
/** PIOD_IFER_P27 Input Filter Enable **/
#define PIOD_IFER_P27		(1 << 27)
/** PIOD_IFER_P26 Input Filter Enable **/
#define PIOD_IFER_P26		(1 << 26)
/** PIOD_IFER_P25 Input Filter Enable **/
#define PIOD_IFER_P25		(1 << 25)
/** PIOD_IFER_P24 Input Filter Enable **/
#define PIOD_IFER_P24		(1 << 24)
/** PIOD_IFER_P23 Input Filter Enable **/
#define PIOD_IFER_P23		(1 << 23)
/** PIOD_IFER_P22 Input Filter Enable **/
#define PIOD_IFER_P22		(1 << 22)
/** PIOD_IFER_P21 Input Filter Enable **/
#define PIOD_IFER_P21		(1 << 21)
/** PIOD_IFER_P20 Input Filter Enable **/
#define PIOD_IFER_P20		(1 << 20)
/** PIOD_IFER_P19 Input Filter Enable **/
#define PIOD_IFER_P19		(1 << 19)
/** PIOD_IFER_P18 Input Filter Enable **/
#define PIOD_IFER_P18		(1 << 18)
/** PIOD_IFER_P17 Input Filter Enable **/
#define PIOD_IFER_P17		(1 << 17)
/** PIOD_IFER_P16 Input Filter Enable **/
#define PIOD_IFER_P16		(1 << 16)
/** PIOD_IFER_P15 Input Filter Enable **/
#define PIOD_IFER_P15		(1 << 15)
/** PIOD_IFER_P14 Input Filter Enable **/
#define PIOD_IFER_P14		(1 << 14)
/** PIOD_IFER_P13 Input Filter Enable **/
#define PIOD_IFER_P13		(1 << 13)
/** PIOD_IFER_P12 Input Filter Enable **/
#define PIOD_IFER_P12		(1 << 12)
/** PIOD_IFER_P11 Input Filter Enable **/
#define PIOD_IFER_P11		(1 << 11)
/** PIOD_IFER_P10 Input Filter Enable **/
#define PIOD_IFER_P10		(1 << 10)
/** PIOD_IFER_P9 Input Filter Enable **/
#define PIOD_IFER_P9		(1 << 9)
/** PIOD_IFER_P8 Input Filter Enable **/
#define PIOD_IFER_P8		(1 << 8)
/** PIOD_IFER_P7 Input Filter Enable **/
#define PIOD_IFER_P7		(1 << 7)
/** PIOD_IFER_P6 Input Filter Enable **/
#define PIOD_IFER_P6		(1 << 6)
/** PIOD_IFER_P5 Input Filter Enable **/
#define PIOD_IFER_P5		(1 << 5)
/** PIOD_IFER_P4 Input Filter Enable **/
#define PIOD_IFER_P4		(1 << 4)
/** PIOD_IFER_P3 Input Filter Enable **/
#define PIOD_IFER_P3		(1 << 3)
/** PIOD_IFER_P2 Input Filter Enable **/
#define PIOD_IFER_P2		(1 << 2)
/** PIOD_IFER_P1 Input Filter Enable **/
#define PIOD_IFER_P1		(1 << 1)
/** PIOD_IFER_P0 Input Filter Enable **/
#define PIOD_IFER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_ifdr IFDR Glitch Input Filter Disable Register
@{*/

/** PIOD_IFDR_P31 Input Filter Disable **/
#define PIOD_IFDR_P31		(1 << 31)
/** PIOD_IFDR_P30 Input Filter Disable **/
#define PIOD_IFDR_P30		(1 << 30)
/** PIOD_IFDR_P29 Input Filter Disable **/
#define PIOD_IFDR_P29		(1 << 29)
/** PIOD_IFDR_P28 Input Filter Disable **/
#define PIOD_IFDR_P28		(1 << 28)
/** PIOD_IFDR_P27 Input Filter Disable **/
#define PIOD_IFDR_P27		(1 << 27)
/** PIOD_IFDR_P26 Input Filter Disable **/
#define PIOD_IFDR_P26		(1 << 26)
/** PIOD_IFDR_P25 Input Filter Disable **/
#define PIOD_IFDR_P25		(1 << 25)
/** PIOD_IFDR_P24 Input Filter Disable **/
#define PIOD_IFDR_P24		(1 << 24)
/** PIOD_IFDR_P23 Input Filter Disable **/
#define PIOD_IFDR_P23		(1 << 23)
/** PIOD_IFDR_P22 Input Filter Disable **/
#define PIOD_IFDR_P22		(1 << 22)
/** PIOD_IFDR_P21 Input Filter Disable **/
#define PIOD_IFDR_P21		(1 << 21)
/** PIOD_IFDR_P20 Input Filter Disable **/
#define PIOD_IFDR_P20		(1 << 20)
/** PIOD_IFDR_P19 Input Filter Disable **/
#define PIOD_IFDR_P19		(1 << 19)
/** PIOD_IFDR_P18 Input Filter Disable **/
#define PIOD_IFDR_P18		(1 << 18)
/** PIOD_IFDR_P17 Input Filter Disable **/
#define PIOD_IFDR_P17		(1 << 17)
/** PIOD_IFDR_P16 Input Filter Disable **/
#define PIOD_IFDR_P16		(1 << 16)
/** PIOD_IFDR_P15 Input Filter Disable **/
#define PIOD_IFDR_P15		(1 << 15)
/** PIOD_IFDR_P14 Input Filter Disable **/
#define PIOD_IFDR_P14		(1 << 14)
/** PIOD_IFDR_P13 Input Filter Disable **/
#define PIOD_IFDR_P13		(1 << 13)
/** PIOD_IFDR_P12 Input Filter Disable **/
#define PIOD_IFDR_P12		(1 << 12)
/** PIOD_IFDR_P11 Input Filter Disable **/
#define PIOD_IFDR_P11		(1 << 11)
/** PIOD_IFDR_P10 Input Filter Disable **/
#define PIOD_IFDR_P10		(1 << 10)
/** PIOD_IFDR_P9 Input Filter Disable **/
#define PIOD_IFDR_P9		(1 << 9)
/** PIOD_IFDR_P8 Input Filter Disable **/
#define PIOD_IFDR_P8		(1 << 8)
/** PIOD_IFDR_P7 Input Filter Disable **/
#define PIOD_IFDR_P7		(1 << 7)
/** PIOD_IFDR_P6 Input Filter Disable **/
#define PIOD_IFDR_P6		(1 << 6)
/** PIOD_IFDR_P5 Input Filter Disable **/
#define PIOD_IFDR_P5		(1 << 5)
/** PIOD_IFDR_P4 Input Filter Disable **/
#define PIOD_IFDR_P4		(1 << 4)
/** PIOD_IFDR_P3 Input Filter Disable **/
#define PIOD_IFDR_P3		(1 << 3)
/** PIOD_IFDR_P2 Input Filter Disable **/
#define PIOD_IFDR_P2		(1 << 2)
/** PIOD_IFDR_P1 Input Filter Disable **/
#define PIOD_IFDR_P1		(1 << 1)
/** PIOD_IFDR_P0 Input Filter Disable **/
#define PIOD_IFDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_ifsr IFSR Glitch Input Filter Status Register
@{*/

/** PIOD_IFSR_P31 Input Filer Status **/
#define PIOD_IFSR_P31		(1 << 31)
/** PIOD_IFSR_P30 Input Filer Status **/
#define PIOD_IFSR_P30		(1 << 30)
/** PIOD_IFSR_P29 Input Filer Status **/
#define PIOD_IFSR_P29		(1 << 29)
/** PIOD_IFSR_P28 Input Filer Status **/
#define PIOD_IFSR_P28		(1 << 28)
/** PIOD_IFSR_P27 Input Filer Status **/
#define PIOD_IFSR_P27		(1 << 27)
/** PIOD_IFSR_P26 Input Filer Status **/
#define PIOD_IFSR_P26		(1 << 26)
/** PIOD_IFSR_P25 Input Filer Status **/
#define PIOD_IFSR_P25		(1 << 25)
/** PIOD_IFSR_P24 Input Filer Status **/
#define PIOD_IFSR_P24		(1 << 24)
/** PIOD_IFSR_P23 Input Filer Status **/
#define PIOD_IFSR_P23		(1 << 23)
/** PIOD_IFSR_P22 Input Filer Status **/
#define PIOD_IFSR_P22		(1 << 22)
/** PIOD_IFSR_P21 Input Filer Status **/
#define PIOD_IFSR_P21		(1 << 21)
/** PIOD_IFSR_P20 Input Filer Status **/
#define PIOD_IFSR_P20		(1 << 20)
/** PIOD_IFSR_P19 Input Filer Status **/
#define PIOD_IFSR_P19		(1 << 19)
/** PIOD_IFSR_P18 Input Filer Status **/
#define PIOD_IFSR_P18		(1 << 18)
/** PIOD_IFSR_P17 Input Filer Status **/
#define PIOD_IFSR_P17		(1 << 17)
/** PIOD_IFSR_P16 Input Filer Status **/
#define PIOD_IFSR_P16		(1 << 16)
/** PIOD_IFSR_P15 Input Filer Status **/
#define PIOD_IFSR_P15		(1 << 15)
/** PIOD_IFSR_P14 Input Filer Status **/
#define PIOD_IFSR_P14		(1 << 14)
/** PIOD_IFSR_P13 Input Filer Status **/
#define PIOD_IFSR_P13		(1 << 13)
/** PIOD_IFSR_P12 Input Filer Status **/
#define PIOD_IFSR_P12		(1 << 12)
/** PIOD_IFSR_P11 Input Filer Status **/
#define PIOD_IFSR_P11		(1 << 11)
/** PIOD_IFSR_P10 Input Filer Status **/
#define PIOD_IFSR_P10		(1 << 10)
/** PIOD_IFSR_P9 Input Filer Status **/
#define PIOD_IFSR_P9		(1 << 9)
/** PIOD_IFSR_P8 Input Filer Status **/
#define PIOD_IFSR_P8		(1 << 8)
/** PIOD_IFSR_P7 Input Filer Status **/
#define PIOD_IFSR_P7		(1 << 7)
/** PIOD_IFSR_P6 Input Filer Status **/
#define PIOD_IFSR_P6		(1 << 6)
/** PIOD_IFSR_P5 Input Filer Status **/
#define PIOD_IFSR_P5		(1 << 5)
/** PIOD_IFSR_P4 Input Filer Status **/
#define PIOD_IFSR_P4		(1 << 4)
/** PIOD_IFSR_P3 Input Filer Status **/
#define PIOD_IFSR_P3		(1 << 3)
/** PIOD_IFSR_P2 Input Filer Status **/
#define PIOD_IFSR_P2		(1 << 2)
/** PIOD_IFSR_P1 Input Filer Status **/
#define PIOD_IFSR_P1		(1 << 1)
/** PIOD_IFSR_P0 Input Filer Status **/
#define PIOD_IFSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_sodr SODR Set Output Data Register
@{*/

/** PIOD_SODR_P31 Set Output Data **/
#define PIOD_SODR_P31		(1 << 31)
/** PIOD_SODR_P30 Set Output Data **/
#define PIOD_SODR_P30		(1 << 30)
/** PIOD_SODR_P29 Set Output Data **/
#define PIOD_SODR_P29		(1 << 29)
/** PIOD_SODR_P28 Set Output Data **/
#define PIOD_SODR_P28		(1 << 28)
/** PIOD_SODR_P27 Set Output Data **/
#define PIOD_SODR_P27		(1 << 27)
/** PIOD_SODR_P26 Set Output Data **/
#define PIOD_SODR_P26		(1 << 26)
/** PIOD_SODR_P25 Set Output Data **/
#define PIOD_SODR_P25		(1 << 25)
/** PIOD_SODR_P24 Set Output Data **/
#define PIOD_SODR_P24		(1 << 24)
/** PIOD_SODR_P23 Set Output Data **/
#define PIOD_SODR_P23		(1 << 23)
/** PIOD_SODR_P22 Set Output Data **/
#define PIOD_SODR_P22		(1 << 22)
/** PIOD_SODR_P21 Set Output Data **/
#define PIOD_SODR_P21		(1 << 21)
/** PIOD_SODR_P20 Set Output Data **/
#define PIOD_SODR_P20		(1 << 20)
/** PIOD_SODR_P19 Set Output Data **/
#define PIOD_SODR_P19		(1 << 19)
/** PIOD_SODR_P18 Set Output Data **/
#define PIOD_SODR_P18		(1 << 18)
/** PIOD_SODR_P17 Set Output Data **/
#define PIOD_SODR_P17		(1 << 17)
/** PIOD_SODR_P16 Set Output Data **/
#define PIOD_SODR_P16		(1 << 16)
/** PIOD_SODR_P15 Set Output Data **/
#define PIOD_SODR_P15		(1 << 15)
/** PIOD_SODR_P14 Set Output Data **/
#define PIOD_SODR_P14		(1 << 14)
/** PIOD_SODR_P13 Set Output Data **/
#define PIOD_SODR_P13		(1 << 13)
/** PIOD_SODR_P12 Set Output Data **/
#define PIOD_SODR_P12		(1 << 12)
/** PIOD_SODR_P11 Set Output Data **/
#define PIOD_SODR_P11		(1 << 11)
/** PIOD_SODR_P10 Set Output Data **/
#define PIOD_SODR_P10		(1 << 10)
/** PIOD_SODR_P9 Set Output Data **/
#define PIOD_SODR_P9		(1 << 9)
/** PIOD_SODR_P8 Set Output Data **/
#define PIOD_SODR_P8		(1 << 8)
/** PIOD_SODR_P7 Set Output Data **/
#define PIOD_SODR_P7		(1 << 7)
/** PIOD_SODR_P6 Set Output Data **/
#define PIOD_SODR_P6		(1 << 6)
/** PIOD_SODR_P5 Set Output Data **/
#define PIOD_SODR_P5		(1 << 5)
/** PIOD_SODR_P4 Set Output Data **/
#define PIOD_SODR_P4		(1 << 4)
/** PIOD_SODR_P3 Set Output Data **/
#define PIOD_SODR_P3		(1 << 3)
/** PIOD_SODR_P2 Set Output Data **/
#define PIOD_SODR_P2		(1 << 2)
/** PIOD_SODR_P1 Set Output Data **/
#define PIOD_SODR_P1		(1 << 1)
/** PIOD_SODR_P0 Set Output Data **/
#define PIOD_SODR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_codr CODR Clear Output Data Register
@{*/

/** PIOD_CODR_P31 Clear Output Data **/
#define PIOD_CODR_P31		(1 << 31)
/** PIOD_CODR_P30 Clear Output Data **/
#define PIOD_CODR_P30		(1 << 30)
/** PIOD_CODR_P29 Clear Output Data **/
#define PIOD_CODR_P29		(1 << 29)
/** PIOD_CODR_P28 Clear Output Data **/
#define PIOD_CODR_P28		(1 << 28)
/** PIOD_CODR_P27 Clear Output Data **/
#define PIOD_CODR_P27		(1 << 27)
/** PIOD_CODR_P26 Clear Output Data **/
#define PIOD_CODR_P26		(1 << 26)
/** PIOD_CODR_P25 Clear Output Data **/
#define PIOD_CODR_P25		(1 << 25)
/** PIOD_CODR_P24 Clear Output Data **/
#define PIOD_CODR_P24		(1 << 24)
/** PIOD_CODR_P23 Clear Output Data **/
#define PIOD_CODR_P23		(1 << 23)
/** PIOD_CODR_P22 Clear Output Data **/
#define PIOD_CODR_P22		(1 << 22)
/** PIOD_CODR_P21 Clear Output Data **/
#define PIOD_CODR_P21		(1 << 21)
/** PIOD_CODR_P20 Clear Output Data **/
#define PIOD_CODR_P20		(1 << 20)
/** PIOD_CODR_P19 Clear Output Data **/
#define PIOD_CODR_P19		(1 << 19)
/** PIOD_CODR_P18 Clear Output Data **/
#define PIOD_CODR_P18		(1 << 18)
/** PIOD_CODR_P17 Clear Output Data **/
#define PIOD_CODR_P17		(1 << 17)
/** PIOD_CODR_P16 Clear Output Data **/
#define PIOD_CODR_P16		(1 << 16)
/** PIOD_CODR_P15 Clear Output Data **/
#define PIOD_CODR_P15		(1 << 15)
/** PIOD_CODR_P14 Clear Output Data **/
#define PIOD_CODR_P14		(1 << 14)
/** PIOD_CODR_P13 Clear Output Data **/
#define PIOD_CODR_P13		(1 << 13)
/** PIOD_CODR_P12 Clear Output Data **/
#define PIOD_CODR_P12		(1 << 12)
/** PIOD_CODR_P11 Clear Output Data **/
#define PIOD_CODR_P11		(1 << 11)
/** PIOD_CODR_P10 Clear Output Data **/
#define PIOD_CODR_P10		(1 << 10)
/** PIOD_CODR_P9 Clear Output Data **/
#define PIOD_CODR_P9		(1 << 9)
/** PIOD_CODR_P8 Clear Output Data **/
#define PIOD_CODR_P8		(1 << 8)
/** PIOD_CODR_P7 Clear Output Data **/
#define PIOD_CODR_P7		(1 << 7)
/** PIOD_CODR_P6 Clear Output Data **/
#define PIOD_CODR_P6		(1 << 6)
/** PIOD_CODR_P5 Clear Output Data **/
#define PIOD_CODR_P5		(1 << 5)
/** PIOD_CODR_P4 Clear Output Data **/
#define PIOD_CODR_P4		(1 << 4)
/** PIOD_CODR_P3 Clear Output Data **/
#define PIOD_CODR_P3		(1 << 3)
/** PIOD_CODR_P2 Clear Output Data **/
#define PIOD_CODR_P2		(1 << 2)
/** PIOD_CODR_P1 Clear Output Data **/
#define PIOD_CODR_P1		(1 << 1)
/** PIOD_CODR_P0 Clear Output Data **/
#define PIOD_CODR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_odsr ODSR Output Data Status Register
@{*/

/** PIOD_ODSR_P31 Output Data Status **/
#define PIOD_ODSR_P31		(1 << 31)
/** PIOD_ODSR_P30 Output Data Status **/
#define PIOD_ODSR_P30		(1 << 30)
/** PIOD_ODSR_P29 Output Data Status **/
#define PIOD_ODSR_P29		(1 << 29)
/** PIOD_ODSR_P28 Output Data Status **/
#define PIOD_ODSR_P28		(1 << 28)
/** PIOD_ODSR_P27 Output Data Status **/
#define PIOD_ODSR_P27		(1 << 27)
/** PIOD_ODSR_P26 Output Data Status **/
#define PIOD_ODSR_P26		(1 << 26)
/** PIOD_ODSR_P25 Output Data Status **/
#define PIOD_ODSR_P25		(1 << 25)
/** PIOD_ODSR_P24 Output Data Status **/
#define PIOD_ODSR_P24		(1 << 24)
/** PIOD_ODSR_P23 Output Data Status **/
#define PIOD_ODSR_P23		(1 << 23)
/** PIOD_ODSR_P22 Output Data Status **/
#define PIOD_ODSR_P22		(1 << 22)
/** PIOD_ODSR_P21 Output Data Status **/
#define PIOD_ODSR_P21		(1 << 21)
/** PIOD_ODSR_P20 Output Data Status **/
#define PIOD_ODSR_P20		(1 << 20)
/** PIOD_ODSR_P19 Output Data Status **/
#define PIOD_ODSR_P19		(1 << 19)
/** PIOD_ODSR_P18 Output Data Status **/
#define PIOD_ODSR_P18		(1 << 18)
/** PIOD_ODSR_P17 Output Data Status **/
#define PIOD_ODSR_P17		(1 << 17)
/** PIOD_ODSR_P16 Output Data Status **/
#define PIOD_ODSR_P16		(1 << 16)
/** PIOD_ODSR_P15 Output Data Status **/
#define PIOD_ODSR_P15		(1 << 15)
/** PIOD_ODSR_P14 Output Data Status **/
#define PIOD_ODSR_P14		(1 << 14)
/** PIOD_ODSR_P13 Output Data Status **/
#define PIOD_ODSR_P13		(1 << 13)
/** PIOD_ODSR_P12 Output Data Status **/
#define PIOD_ODSR_P12		(1 << 12)
/** PIOD_ODSR_P11 Output Data Status **/
#define PIOD_ODSR_P11		(1 << 11)
/** PIOD_ODSR_P10 Output Data Status **/
#define PIOD_ODSR_P10		(1 << 10)
/** PIOD_ODSR_P9 Output Data Status **/
#define PIOD_ODSR_P9		(1 << 9)
/** PIOD_ODSR_P8 Output Data Status **/
#define PIOD_ODSR_P8		(1 << 8)
/** PIOD_ODSR_P7 Output Data Status **/
#define PIOD_ODSR_P7		(1 << 7)
/** PIOD_ODSR_P6 Output Data Status **/
#define PIOD_ODSR_P6		(1 << 6)
/** PIOD_ODSR_P5 Output Data Status **/
#define PIOD_ODSR_P5		(1 << 5)
/** PIOD_ODSR_P4 Output Data Status **/
#define PIOD_ODSR_P4		(1 << 4)
/** PIOD_ODSR_P3 Output Data Status **/
#define PIOD_ODSR_P3		(1 << 3)
/** PIOD_ODSR_P2 Output Data Status **/
#define PIOD_ODSR_P2		(1 << 2)
/** PIOD_ODSR_P1 Output Data Status **/
#define PIOD_ODSR_P1		(1 << 1)
/** PIOD_ODSR_P0 Output Data Status **/
#define PIOD_ODSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_pdsr PDSR Pin Data Status Register
@{*/

/** PIOD_PDSR_P31 Output Data Status **/
#define PIOD_PDSR_P31		(1 << 31)
/** PIOD_PDSR_P30 Output Data Status **/
#define PIOD_PDSR_P30		(1 << 30)
/** PIOD_PDSR_P29 Output Data Status **/
#define PIOD_PDSR_P29		(1 << 29)
/** PIOD_PDSR_P28 Output Data Status **/
#define PIOD_PDSR_P28		(1 << 28)
/** PIOD_PDSR_P27 Output Data Status **/
#define PIOD_PDSR_P27		(1 << 27)
/** PIOD_PDSR_P26 Output Data Status **/
#define PIOD_PDSR_P26		(1 << 26)
/** PIOD_PDSR_P25 Output Data Status **/
#define PIOD_PDSR_P25		(1 << 25)
/** PIOD_PDSR_P24 Output Data Status **/
#define PIOD_PDSR_P24		(1 << 24)
/** PIOD_PDSR_P23 Output Data Status **/
#define PIOD_PDSR_P23		(1 << 23)
/** PIOD_PDSR_P22 Output Data Status **/
#define PIOD_PDSR_P22		(1 << 22)
/** PIOD_PDSR_P21 Output Data Status **/
#define PIOD_PDSR_P21		(1 << 21)
/** PIOD_PDSR_P20 Output Data Status **/
#define PIOD_PDSR_P20		(1 << 20)
/** PIOD_PDSR_P19 Output Data Status **/
#define PIOD_PDSR_P19		(1 << 19)
/** PIOD_PDSR_P18 Output Data Status **/
#define PIOD_PDSR_P18		(1 << 18)
/** PIOD_PDSR_P17 Output Data Status **/
#define PIOD_PDSR_P17		(1 << 17)
/** PIOD_PDSR_P16 Output Data Status **/
#define PIOD_PDSR_P16		(1 << 16)
/** PIOD_PDSR_P15 Output Data Status **/
#define PIOD_PDSR_P15		(1 << 15)
/** PIOD_PDSR_P14 Output Data Status **/
#define PIOD_PDSR_P14		(1 << 14)
/** PIOD_PDSR_P13 Output Data Status **/
#define PIOD_PDSR_P13		(1 << 13)
/** PIOD_PDSR_P12 Output Data Status **/
#define PIOD_PDSR_P12		(1 << 12)
/** PIOD_PDSR_P11 Output Data Status **/
#define PIOD_PDSR_P11		(1 << 11)
/** PIOD_PDSR_P10 Output Data Status **/
#define PIOD_PDSR_P10		(1 << 10)
/** PIOD_PDSR_P9 Output Data Status **/
#define PIOD_PDSR_P9		(1 << 9)
/** PIOD_PDSR_P8 Output Data Status **/
#define PIOD_PDSR_P8		(1 << 8)
/** PIOD_PDSR_P7 Output Data Status **/
#define PIOD_PDSR_P7		(1 << 7)
/** PIOD_PDSR_P6 Output Data Status **/
#define PIOD_PDSR_P6		(1 << 6)
/** PIOD_PDSR_P5 Output Data Status **/
#define PIOD_PDSR_P5		(1 << 5)
/** PIOD_PDSR_P4 Output Data Status **/
#define PIOD_PDSR_P4		(1 << 4)
/** PIOD_PDSR_P3 Output Data Status **/
#define PIOD_PDSR_P3		(1 << 3)
/** PIOD_PDSR_P2 Output Data Status **/
#define PIOD_PDSR_P2		(1 << 2)
/** PIOD_PDSR_P1 Output Data Status **/
#define PIOD_PDSR_P1		(1 << 1)
/** PIOD_PDSR_P0 Output Data Status **/
#define PIOD_PDSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_ier IER Interrupt Enable Register
@{*/

/** PIOD_IER_P31 Input Change Interrupt Enable **/
#define PIOD_IER_P31		(1 << 31)
/** PIOD_IER_P30 Input Change Interrupt Enable **/
#define PIOD_IER_P30		(1 << 30)
/** PIOD_IER_P29 Input Change Interrupt Enable **/
#define PIOD_IER_P29		(1 << 29)
/** PIOD_IER_P28 Input Change Interrupt Enable **/
#define PIOD_IER_P28		(1 << 28)
/** PIOD_IER_P27 Input Change Interrupt Enable **/
#define PIOD_IER_P27		(1 << 27)
/** PIOD_IER_P26 Input Change Interrupt Enable **/
#define PIOD_IER_P26		(1 << 26)
/** PIOD_IER_P25 Input Change Interrupt Enable **/
#define PIOD_IER_P25		(1 << 25)
/** PIOD_IER_P24 Input Change Interrupt Enable **/
#define PIOD_IER_P24		(1 << 24)
/** PIOD_IER_P23 Input Change Interrupt Enable **/
#define PIOD_IER_P23		(1 << 23)
/** PIOD_IER_P22 Input Change Interrupt Enable **/
#define PIOD_IER_P22		(1 << 22)
/** PIOD_IER_P21 Input Change Interrupt Enable **/
#define PIOD_IER_P21		(1 << 21)
/** PIOD_IER_P20 Input Change Interrupt Enable **/
#define PIOD_IER_P20		(1 << 20)
/** PIOD_IER_P19 Input Change Interrupt Enable **/
#define PIOD_IER_P19		(1 << 19)
/** PIOD_IER_P18 Input Change Interrupt Enable **/
#define PIOD_IER_P18		(1 << 18)
/** PIOD_IER_P17 Input Change Interrupt Enable **/
#define PIOD_IER_P17		(1 << 17)
/** PIOD_IER_P16 Input Change Interrupt Enable **/
#define PIOD_IER_P16		(1 << 16)
/** PIOD_IER_P15 Input Change Interrupt Enable **/
#define PIOD_IER_P15		(1 << 15)
/** PIOD_IER_P14 Input Change Interrupt Enable **/
#define PIOD_IER_P14		(1 << 14)
/** PIOD_IER_P13 Input Change Interrupt Enable **/
#define PIOD_IER_P13		(1 << 13)
/** PIOD_IER_P12 Input Change Interrupt Enable **/
#define PIOD_IER_P12		(1 << 12)
/** PIOD_IER_P11 Input Change Interrupt Enable **/
#define PIOD_IER_P11		(1 << 11)
/** PIOD_IER_P10 Input Change Interrupt Enable **/
#define PIOD_IER_P10		(1 << 10)
/** PIOD_IER_P9 Input Change Interrupt Enable **/
#define PIOD_IER_P9		(1 << 9)
/** PIOD_IER_P8 Input Change Interrupt Enable **/
#define PIOD_IER_P8		(1 << 8)
/** PIOD_IER_P7 Input Change Interrupt Enable **/
#define PIOD_IER_P7		(1 << 7)
/** PIOD_IER_P6 Input Change Interrupt Enable **/
#define PIOD_IER_P6		(1 << 6)
/** PIOD_IER_P5 Input Change Interrupt Enable **/
#define PIOD_IER_P5		(1 << 5)
/** PIOD_IER_P4 Input Change Interrupt Enable **/
#define PIOD_IER_P4		(1 << 4)
/** PIOD_IER_P3 Input Change Interrupt Enable **/
#define PIOD_IER_P3		(1 << 3)
/** PIOD_IER_P2 Input Change Interrupt Enable **/
#define PIOD_IER_P2		(1 << 2)
/** PIOD_IER_P1 Input Change Interrupt Enable **/
#define PIOD_IER_P1		(1 << 1)
/** PIOD_IER_P0 Input Change Interrupt Enable **/
#define PIOD_IER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_idr IDR Interrupt Disable Register
@{*/

/** PIOD_IDR_P31 Input Change Interrupt Disable **/
#define PIOD_IDR_P31		(1 << 31)
/** PIOD_IDR_P30 Input Change Interrupt Disable **/
#define PIOD_IDR_P30		(1 << 30)
/** PIOD_IDR_P29 Input Change Interrupt Disable **/
#define PIOD_IDR_P29		(1 << 29)
/** PIOD_IDR_P28 Input Change Interrupt Disable **/
#define PIOD_IDR_P28		(1 << 28)
/** PIOD_IDR_P27 Input Change Interrupt Disable **/
#define PIOD_IDR_P27		(1 << 27)
/** PIOD_IDR_P26 Input Change Interrupt Disable **/
#define PIOD_IDR_P26		(1 << 26)
/** PIOD_IDR_P25 Input Change Interrupt Disable **/
#define PIOD_IDR_P25		(1 << 25)
/** PIOD_IDR_P24 Input Change Interrupt Disable **/
#define PIOD_IDR_P24		(1 << 24)
/** PIOD_IDR_P23 Input Change Interrupt Disable **/
#define PIOD_IDR_P23		(1 << 23)
/** PIOD_IDR_P22 Input Change Interrupt Disable **/
#define PIOD_IDR_P22		(1 << 22)
/** PIOD_IDR_P21 Input Change Interrupt Disable **/
#define PIOD_IDR_P21		(1 << 21)
/** PIOD_IDR_P20 Input Change Interrupt Disable **/
#define PIOD_IDR_P20		(1 << 20)
/** PIOD_IDR_P19 Input Change Interrupt Disable **/
#define PIOD_IDR_P19		(1 << 19)
/** PIOD_IDR_P18 Input Change Interrupt Disable **/
#define PIOD_IDR_P18		(1 << 18)
/** PIOD_IDR_P17 Input Change Interrupt Disable **/
#define PIOD_IDR_P17		(1 << 17)
/** PIOD_IDR_P16 Input Change Interrupt Disable **/
#define PIOD_IDR_P16		(1 << 16)
/** PIOD_IDR_P15 Input Change Interrupt Disable **/
#define PIOD_IDR_P15		(1 << 15)
/** PIOD_IDR_P14 Input Change Interrupt Disable **/
#define PIOD_IDR_P14		(1 << 14)
/** PIOD_IDR_P13 Input Change Interrupt Disable **/
#define PIOD_IDR_P13		(1 << 13)
/** PIOD_IDR_P12 Input Change Interrupt Disable **/
#define PIOD_IDR_P12		(1 << 12)
/** PIOD_IDR_P11 Input Change Interrupt Disable **/
#define PIOD_IDR_P11		(1 << 11)
/** PIOD_IDR_P10 Input Change Interrupt Disable **/
#define PIOD_IDR_P10		(1 << 10)
/** PIOD_IDR_P9 Input Change Interrupt Disable **/
#define PIOD_IDR_P9		(1 << 9)
/** PIOD_IDR_P8 Input Change Interrupt Disable **/
#define PIOD_IDR_P8		(1 << 8)
/** PIOD_IDR_P7 Input Change Interrupt Disable **/
#define PIOD_IDR_P7		(1 << 7)
/** PIOD_IDR_P6 Input Change Interrupt Disable **/
#define PIOD_IDR_P6		(1 << 6)
/** PIOD_IDR_P5 Input Change Interrupt Disable **/
#define PIOD_IDR_P5		(1 << 5)
/** PIOD_IDR_P4 Input Change Interrupt Disable **/
#define PIOD_IDR_P4		(1 << 4)
/** PIOD_IDR_P3 Input Change Interrupt Disable **/
#define PIOD_IDR_P3		(1 << 3)
/** PIOD_IDR_P2 Input Change Interrupt Disable **/
#define PIOD_IDR_P2		(1 << 2)
/** PIOD_IDR_P1 Input Change Interrupt Disable **/
#define PIOD_IDR_P1		(1 << 1)
/** PIOD_IDR_P0 Input Change Interrupt Disable **/
#define PIOD_IDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_imr IMR Interrupt Mask Register
@{*/

/** PIOD_IMR_P31 Input Change Interrupt Mask **/
#define PIOD_IMR_P31		(1 << 31)
/** PIOD_IMR_P30 Input Change Interrupt Mask **/
#define PIOD_IMR_P30		(1 << 30)
/** PIOD_IMR_P29 Input Change Interrupt Mask **/
#define PIOD_IMR_P29		(1 << 29)
/** PIOD_IMR_P28 Input Change Interrupt Mask **/
#define PIOD_IMR_P28		(1 << 28)
/** PIOD_IMR_P27 Input Change Interrupt Mask **/
#define PIOD_IMR_P27		(1 << 27)
/** PIOD_IMR_P26 Input Change Interrupt Mask **/
#define PIOD_IMR_P26		(1 << 26)
/** PIOD_IMR_P25 Input Change Interrupt Mask **/
#define PIOD_IMR_P25		(1 << 25)
/** PIOD_IMR_P24 Input Change Interrupt Mask **/
#define PIOD_IMR_P24		(1 << 24)
/** PIOD_IMR_P23 Input Change Interrupt Mask **/
#define PIOD_IMR_P23		(1 << 23)
/** PIOD_IMR_P22 Input Change Interrupt Mask **/
#define PIOD_IMR_P22		(1 << 22)
/** PIOD_IMR_P21 Input Change Interrupt Mask **/
#define PIOD_IMR_P21		(1 << 21)
/** PIOD_IMR_P20 Input Change Interrupt Mask **/
#define PIOD_IMR_P20		(1 << 20)
/** PIOD_IMR_P19 Input Change Interrupt Mask **/
#define PIOD_IMR_P19		(1 << 19)
/** PIOD_IMR_P18 Input Change Interrupt Mask **/
#define PIOD_IMR_P18		(1 << 18)
/** PIOD_IMR_P17 Input Change Interrupt Mask **/
#define PIOD_IMR_P17		(1 << 17)
/** PIOD_IMR_P16 Input Change Interrupt Mask **/
#define PIOD_IMR_P16		(1 << 16)
/** PIOD_IMR_P15 Input Change Interrupt Mask **/
#define PIOD_IMR_P15		(1 << 15)
/** PIOD_IMR_P14 Input Change Interrupt Mask **/
#define PIOD_IMR_P14		(1 << 14)
/** PIOD_IMR_P13 Input Change Interrupt Mask **/
#define PIOD_IMR_P13		(1 << 13)
/** PIOD_IMR_P12 Input Change Interrupt Mask **/
#define PIOD_IMR_P12		(1 << 12)
/** PIOD_IMR_P11 Input Change Interrupt Mask **/
#define PIOD_IMR_P11		(1 << 11)
/** PIOD_IMR_P10 Input Change Interrupt Mask **/
#define PIOD_IMR_P10		(1 << 10)
/** PIOD_IMR_P9 Input Change Interrupt Mask **/
#define PIOD_IMR_P9		(1 << 9)
/** PIOD_IMR_P8 Input Change Interrupt Mask **/
#define PIOD_IMR_P8		(1 << 8)
/** PIOD_IMR_P7 Input Change Interrupt Mask **/
#define PIOD_IMR_P7		(1 << 7)
/** PIOD_IMR_P6 Input Change Interrupt Mask **/
#define PIOD_IMR_P6		(1 << 6)
/** PIOD_IMR_P5 Input Change Interrupt Mask **/
#define PIOD_IMR_P5		(1 << 5)
/** PIOD_IMR_P4 Input Change Interrupt Mask **/
#define PIOD_IMR_P4		(1 << 4)
/** PIOD_IMR_P3 Input Change Interrupt Mask **/
#define PIOD_IMR_P3		(1 << 3)
/** PIOD_IMR_P2 Input Change Interrupt Mask **/
#define PIOD_IMR_P2		(1 << 2)
/** PIOD_IMR_P1 Input Change Interrupt Mask **/
#define PIOD_IMR_P1		(1 << 1)
/** PIOD_IMR_P0 Input Change Interrupt Mask **/
#define PIOD_IMR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_isr ISR Interrupt Status Register
@{*/

/** PIOD_ISR_P31 Input Change Interrupt Status **/
#define PIOD_ISR_P31		(1 << 31)
/** PIOD_ISR_P30 Input Change Interrupt Status **/
#define PIOD_ISR_P30		(1 << 30)
/** PIOD_ISR_P29 Input Change Interrupt Status **/
#define PIOD_ISR_P29		(1 << 29)
/** PIOD_ISR_P28 Input Change Interrupt Status **/
#define PIOD_ISR_P28		(1 << 28)
/** PIOD_ISR_P27 Input Change Interrupt Status **/
#define PIOD_ISR_P27		(1 << 27)
/** PIOD_ISR_P26 Input Change Interrupt Status **/
#define PIOD_ISR_P26		(1 << 26)
/** PIOD_ISR_P25 Input Change Interrupt Status **/
#define PIOD_ISR_P25		(1 << 25)
/** PIOD_ISR_P24 Input Change Interrupt Status **/
#define PIOD_ISR_P24		(1 << 24)
/** PIOD_ISR_P23 Input Change Interrupt Status **/
#define PIOD_ISR_P23		(1 << 23)
/** PIOD_ISR_P22 Input Change Interrupt Status **/
#define PIOD_ISR_P22		(1 << 22)
/** PIOD_ISR_P21 Input Change Interrupt Status **/
#define PIOD_ISR_P21		(1 << 21)
/** PIOD_ISR_P20 Input Change Interrupt Status **/
#define PIOD_ISR_P20		(1 << 20)
/** PIOD_ISR_P19 Input Change Interrupt Status **/
#define PIOD_ISR_P19		(1 << 19)
/** PIOD_ISR_P18 Input Change Interrupt Status **/
#define PIOD_ISR_P18		(1 << 18)
/** PIOD_ISR_P17 Input Change Interrupt Status **/
#define PIOD_ISR_P17		(1 << 17)
/** PIOD_ISR_P16 Input Change Interrupt Status **/
#define PIOD_ISR_P16		(1 << 16)
/** PIOD_ISR_P15 Input Change Interrupt Status **/
#define PIOD_ISR_P15		(1 << 15)
/** PIOD_ISR_P14 Input Change Interrupt Status **/
#define PIOD_ISR_P14		(1 << 14)
/** PIOD_ISR_P13 Input Change Interrupt Status **/
#define PIOD_ISR_P13		(1 << 13)
/** PIOD_ISR_P12 Input Change Interrupt Status **/
#define PIOD_ISR_P12		(1 << 12)
/** PIOD_ISR_P11 Input Change Interrupt Status **/
#define PIOD_ISR_P11		(1 << 11)
/** PIOD_ISR_P10 Input Change Interrupt Status **/
#define PIOD_ISR_P10		(1 << 10)
/** PIOD_ISR_P9 Input Change Interrupt Status **/
#define PIOD_ISR_P9		(1 << 9)
/** PIOD_ISR_P8 Input Change Interrupt Status **/
#define PIOD_ISR_P8		(1 << 8)
/** PIOD_ISR_P7 Input Change Interrupt Status **/
#define PIOD_ISR_P7		(1 << 7)
/** PIOD_ISR_P6 Input Change Interrupt Status **/
#define PIOD_ISR_P6		(1 << 6)
/** PIOD_ISR_P5 Input Change Interrupt Status **/
#define PIOD_ISR_P5		(1 << 5)
/** PIOD_ISR_P4 Input Change Interrupt Status **/
#define PIOD_ISR_P4		(1 << 4)
/** PIOD_ISR_P3 Input Change Interrupt Status **/
#define PIOD_ISR_P3		(1 << 3)
/** PIOD_ISR_P2 Input Change Interrupt Status **/
#define PIOD_ISR_P2		(1 << 2)
/** PIOD_ISR_P1 Input Change Interrupt Status **/
#define PIOD_ISR_P1		(1 << 1)
/** PIOD_ISR_P0 Input Change Interrupt Status **/
#define PIOD_ISR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_mder MDER Multi-driver Enable Register
@{*/

/** PIOD_MDER_P31 Multi Drive Enable. **/
#define PIOD_MDER_P31		(1 << 31)
/** PIOD_MDER_P30 Multi Drive Enable. **/
#define PIOD_MDER_P30		(1 << 30)
/** PIOD_MDER_P29 Multi Drive Enable. **/
#define PIOD_MDER_P29		(1 << 29)
/** PIOD_MDER_P28 Multi Drive Enable. **/
#define PIOD_MDER_P28		(1 << 28)
/** PIOD_MDER_P27 Multi Drive Enable. **/
#define PIOD_MDER_P27		(1 << 27)
/** PIOD_MDER_P26 Multi Drive Enable. **/
#define PIOD_MDER_P26		(1 << 26)
/** PIOD_MDER_P25 Multi Drive Enable. **/
#define PIOD_MDER_P25		(1 << 25)
/** PIOD_MDER_P24 Multi Drive Enable. **/
#define PIOD_MDER_P24		(1 << 24)
/** PIOD_MDER_P23 Multi Drive Enable. **/
#define PIOD_MDER_P23		(1 << 23)
/** PIOD_MDER_P22 Multi Drive Enable. **/
#define PIOD_MDER_P22		(1 << 22)
/** PIOD_MDER_P21 Multi Drive Enable. **/
#define PIOD_MDER_P21		(1 << 21)
/** PIOD_MDER_P20 Multi Drive Enable. **/
#define PIOD_MDER_P20		(1 << 20)
/** PIOD_MDER_P19 Multi Drive Enable. **/
#define PIOD_MDER_P19		(1 << 19)
/** PIOD_MDER_P18 Multi Drive Enable. **/
#define PIOD_MDER_P18		(1 << 18)
/** PIOD_MDER_P17 Multi Drive Enable. **/
#define PIOD_MDER_P17		(1 << 17)
/** PIOD_MDER_P16 Multi Drive Enable. **/
#define PIOD_MDER_P16		(1 << 16)
/** PIOD_MDER_P15 Multi Drive Enable. **/
#define PIOD_MDER_P15		(1 << 15)
/** PIOD_MDER_P14 Multi Drive Enable. **/
#define PIOD_MDER_P14		(1 << 14)
/** PIOD_MDER_P13 Multi Drive Enable. **/
#define PIOD_MDER_P13		(1 << 13)
/** PIOD_MDER_P12 Multi Drive Enable. **/
#define PIOD_MDER_P12		(1 << 12)
/** PIOD_MDER_P11 Multi Drive Enable. **/
#define PIOD_MDER_P11		(1 << 11)
/** PIOD_MDER_P10 Multi Drive Enable. **/
#define PIOD_MDER_P10		(1 << 10)
/** PIOD_MDER_P9 Multi Drive Enable. **/
#define PIOD_MDER_P9		(1 << 9)
/** PIOD_MDER_P8 Multi Drive Enable. **/
#define PIOD_MDER_P8		(1 << 8)
/** PIOD_MDER_P7 Multi Drive Enable. **/
#define PIOD_MDER_P7		(1 << 7)
/** PIOD_MDER_P6 Multi Drive Enable. **/
#define PIOD_MDER_P6		(1 << 6)
/** PIOD_MDER_P5 Multi Drive Enable. **/
#define PIOD_MDER_P5		(1 << 5)
/** PIOD_MDER_P4 Multi Drive Enable. **/
#define PIOD_MDER_P4		(1 << 4)
/** PIOD_MDER_P3 Multi Drive Enable. **/
#define PIOD_MDER_P3		(1 << 3)
/** PIOD_MDER_P2 Multi Drive Enable. **/
#define PIOD_MDER_P2		(1 << 2)
/** PIOD_MDER_P1 Multi Drive Enable. **/
#define PIOD_MDER_P1		(1 << 1)
/** PIOD_MDER_P0 Multi Drive Enable. **/
#define PIOD_MDER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_mddr MDDR Multi-driver Disable Register
@{*/

/** PIOD_MDDR_P31 Multi Drive Disable. **/
#define PIOD_MDDR_P31		(1 << 31)
/** PIOD_MDDR_P30 Multi Drive Disable. **/
#define PIOD_MDDR_P30		(1 << 30)
/** PIOD_MDDR_P29 Multi Drive Disable. **/
#define PIOD_MDDR_P29		(1 << 29)
/** PIOD_MDDR_P28 Multi Drive Disable. **/
#define PIOD_MDDR_P28		(1 << 28)
/** PIOD_MDDR_P27 Multi Drive Disable. **/
#define PIOD_MDDR_P27		(1 << 27)
/** PIOD_MDDR_P26 Multi Drive Disable. **/
#define PIOD_MDDR_P26		(1 << 26)
/** PIOD_MDDR_P25 Multi Drive Disable. **/
#define PIOD_MDDR_P25		(1 << 25)
/** PIOD_MDDR_P24 Multi Drive Disable. **/
#define PIOD_MDDR_P24		(1 << 24)
/** PIOD_MDDR_P23 Multi Drive Disable. **/
#define PIOD_MDDR_P23		(1 << 23)
/** PIOD_MDDR_P22 Multi Drive Disable. **/
#define PIOD_MDDR_P22		(1 << 22)
/** PIOD_MDDR_P21 Multi Drive Disable. **/
#define PIOD_MDDR_P21		(1 << 21)
/** PIOD_MDDR_P20 Multi Drive Disable. **/
#define PIOD_MDDR_P20		(1 << 20)
/** PIOD_MDDR_P19 Multi Drive Disable. **/
#define PIOD_MDDR_P19		(1 << 19)
/** PIOD_MDDR_P18 Multi Drive Disable. **/
#define PIOD_MDDR_P18		(1 << 18)
/** PIOD_MDDR_P17 Multi Drive Disable. **/
#define PIOD_MDDR_P17		(1 << 17)
/** PIOD_MDDR_P16 Multi Drive Disable. **/
#define PIOD_MDDR_P16		(1 << 16)
/** PIOD_MDDR_P15 Multi Drive Disable. **/
#define PIOD_MDDR_P15		(1 << 15)
/** PIOD_MDDR_P14 Multi Drive Disable. **/
#define PIOD_MDDR_P14		(1 << 14)
/** PIOD_MDDR_P13 Multi Drive Disable. **/
#define PIOD_MDDR_P13		(1 << 13)
/** PIOD_MDDR_P12 Multi Drive Disable. **/
#define PIOD_MDDR_P12		(1 << 12)
/** PIOD_MDDR_P11 Multi Drive Disable. **/
#define PIOD_MDDR_P11		(1 << 11)
/** PIOD_MDDR_P10 Multi Drive Disable. **/
#define PIOD_MDDR_P10		(1 << 10)
/** PIOD_MDDR_P9 Multi Drive Disable. **/
#define PIOD_MDDR_P9		(1 << 9)
/** PIOD_MDDR_P8 Multi Drive Disable. **/
#define PIOD_MDDR_P8		(1 << 8)
/** PIOD_MDDR_P7 Multi Drive Disable. **/
#define PIOD_MDDR_P7		(1 << 7)
/** PIOD_MDDR_P6 Multi Drive Disable. **/
#define PIOD_MDDR_P6		(1 << 6)
/** PIOD_MDDR_P5 Multi Drive Disable. **/
#define PIOD_MDDR_P5		(1 << 5)
/** PIOD_MDDR_P4 Multi Drive Disable. **/
#define PIOD_MDDR_P4		(1 << 4)
/** PIOD_MDDR_P3 Multi Drive Disable. **/
#define PIOD_MDDR_P3		(1 << 3)
/** PIOD_MDDR_P2 Multi Drive Disable. **/
#define PIOD_MDDR_P2		(1 << 2)
/** PIOD_MDDR_P1 Multi Drive Disable. **/
#define PIOD_MDDR_P1		(1 << 1)
/** PIOD_MDDR_P0 Multi Drive Disable. **/
#define PIOD_MDDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_mdsr MDSR Multi-driver Status Register
@{*/

/** PIOD_MDSR_P31 Multi Drive Status. **/
#define PIOD_MDSR_P31		(1 << 31)
/** PIOD_MDSR_P30 Multi Drive Status. **/
#define PIOD_MDSR_P30		(1 << 30)
/** PIOD_MDSR_P29 Multi Drive Status. **/
#define PIOD_MDSR_P29		(1 << 29)
/** PIOD_MDSR_P28 Multi Drive Status. **/
#define PIOD_MDSR_P28		(1 << 28)
/** PIOD_MDSR_P27 Multi Drive Status. **/
#define PIOD_MDSR_P27		(1 << 27)
/** PIOD_MDSR_P26 Multi Drive Status. **/
#define PIOD_MDSR_P26		(1 << 26)
/** PIOD_MDSR_P25 Multi Drive Status. **/
#define PIOD_MDSR_P25		(1 << 25)
/** PIOD_MDSR_P24 Multi Drive Status. **/
#define PIOD_MDSR_P24		(1 << 24)
/** PIOD_MDSR_P23 Multi Drive Status. **/
#define PIOD_MDSR_P23		(1 << 23)
/** PIOD_MDSR_P22 Multi Drive Status. **/
#define PIOD_MDSR_P22		(1 << 22)
/** PIOD_MDSR_P21 Multi Drive Status. **/
#define PIOD_MDSR_P21		(1 << 21)
/** PIOD_MDSR_P20 Multi Drive Status. **/
#define PIOD_MDSR_P20		(1 << 20)
/** PIOD_MDSR_P19 Multi Drive Status. **/
#define PIOD_MDSR_P19		(1 << 19)
/** PIOD_MDSR_P18 Multi Drive Status. **/
#define PIOD_MDSR_P18		(1 << 18)
/** PIOD_MDSR_P17 Multi Drive Status. **/
#define PIOD_MDSR_P17		(1 << 17)
/** PIOD_MDSR_P16 Multi Drive Status. **/
#define PIOD_MDSR_P16		(1 << 16)
/** PIOD_MDSR_P15 Multi Drive Status. **/
#define PIOD_MDSR_P15		(1 << 15)
/** PIOD_MDSR_P14 Multi Drive Status. **/
#define PIOD_MDSR_P14		(1 << 14)
/** PIOD_MDSR_P13 Multi Drive Status. **/
#define PIOD_MDSR_P13		(1 << 13)
/** PIOD_MDSR_P12 Multi Drive Status. **/
#define PIOD_MDSR_P12		(1 << 12)
/** PIOD_MDSR_P11 Multi Drive Status. **/
#define PIOD_MDSR_P11		(1 << 11)
/** PIOD_MDSR_P10 Multi Drive Status. **/
#define PIOD_MDSR_P10		(1 << 10)
/** PIOD_MDSR_P9 Multi Drive Status. **/
#define PIOD_MDSR_P9		(1 << 9)
/** PIOD_MDSR_P8 Multi Drive Status. **/
#define PIOD_MDSR_P8		(1 << 8)
/** PIOD_MDSR_P7 Multi Drive Status. **/
#define PIOD_MDSR_P7		(1 << 7)
/** PIOD_MDSR_P6 Multi Drive Status. **/
#define PIOD_MDSR_P6		(1 << 6)
/** PIOD_MDSR_P5 Multi Drive Status. **/
#define PIOD_MDSR_P5		(1 << 5)
/** PIOD_MDSR_P4 Multi Drive Status. **/
#define PIOD_MDSR_P4		(1 << 4)
/** PIOD_MDSR_P3 Multi Drive Status. **/
#define PIOD_MDSR_P3		(1 << 3)
/** PIOD_MDSR_P2 Multi Drive Status. **/
#define PIOD_MDSR_P2		(1 << 2)
/** PIOD_MDSR_P1 Multi Drive Status. **/
#define PIOD_MDSR_P1		(1 << 1)
/** PIOD_MDSR_P0 Multi Drive Status. **/
#define PIOD_MDSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_pudr PUDR Pull-up Disable Register
@{*/

/** PIOD_PUDR_P31 Pull Up Disable. **/
#define PIOD_PUDR_P31		(1 << 31)
/** PIOD_PUDR_P30 Pull Up Disable. **/
#define PIOD_PUDR_P30		(1 << 30)
/** PIOD_PUDR_P29 Pull Up Disable. **/
#define PIOD_PUDR_P29		(1 << 29)
/** PIOD_PUDR_P28 Pull Up Disable. **/
#define PIOD_PUDR_P28		(1 << 28)
/** PIOD_PUDR_P27 Pull Up Disable. **/
#define PIOD_PUDR_P27		(1 << 27)
/** PIOD_PUDR_P26 Pull Up Disable. **/
#define PIOD_PUDR_P26		(1 << 26)
/** PIOD_PUDR_P25 Pull Up Disable. **/
#define PIOD_PUDR_P25		(1 << 25)
/** PIOD_PUDR_P24 Pull Up Disable. **/
#define PIOD_PUDR_P24		(1 << 24)
/** PIOD_PUDR_P23 Pull Up Disable. **/
#define PIOD_PUDR_P23		(1 << 23)
/** PIOD_PUDR_P22 Pull Up Disable. **/
#define PIOD_PUDR_P22		(1 << 22)
/** PIOD_PUDR_P21 Pull Up Disable. **/
#define PIOD_PUDR_P21		(1 << 21)
/** PIOD_PUDR_P20 Pull Up Disable. **/
#define PIOD_PUDR_P20		(1 << 20)
/** PIOD_PUDR_P19 Pull Up Disable. **/
#define PIOD_PUDR_P19		(1 << 19)
/** PIOD_PUDR_P18 Pull Up Disable. **/
#define PIOD_PUDR_P18		(1 << 18)
/** PIOD_PUDR_P17 Pull Up Disable. **/
#define PIOD_PUDR_P17		(1 << 17)
/** PIOD_PUDR_P16 Pull Up Disable. **/
#define PIOD_PUDR_P16		(1 << 16)
/** PIOD_PUDR_P15 Pull Up Disable. **/
#define PIOD_PUDR_P15		(1 << 15)
/** PIOD_PUDR_P14 Pull Up Disable. **/
#define PIOD_PUDR_P14		(1 << 14)
/** PIOD_PUDR_P13 Pull Up Disable. **/
#define PIOD_PUDR_P13		(1 << 13)
/** PIOD_PUDR_P12 Pull Up Disable. **/
#define PIOD_PUDR_P12		(1 << 12)
/** PIOD_PUDR_P11 Pull Up Disable. **/
#define PIOD_PUDR_P11		(1 << 11)
/** PIOD_PUDR_P10 Pull Up Disable. **/
#define PIOD_PUDR_P10		(1 << 10)
/** PIOD_PUDR_P9 Pull Up Disable. **/
#define PIOD_PUDR_P9		(1 << 9)
/** PIOD_PUDR_P8 Pull Up Disable. **/
#define PIOD_PUDR_P8		(1 << 8)
/** PIOD_PUDR_P7 Pull Up Disable. **/
#define PIOD_PUDR_P7		(1 << 7)
/** PIOD_PUDR_P6 Pull Up Disable. **/
#define PIOD_PUDR_P6		(1 << 6)
/** PIOD_PUDR_P5 Pull Up Disable. **/
#define PIOD_PUDR_P5		(1 << 5)
/** PIOD_PUDR_P4 Pull Up Disable. **/
#define PIOD_PUDR_P4		(1 << 4)
/** PIOD_PUDR_P3 Pull Up Disable. **/
#define PIOD_PUDR_P3		(1 << 3)
/** PIOD_PUDR_P2 Pull Up Disable. **/
#define PIOD_PUDR_P2		(1 << 2)
/** PIOD_PUDR_P1 Pull Up Disable. **/
#define PIOD_PUDR_P1		(1 << 1)
/** PIOD_PUDR_P0 Pull Up Disable. **/
#define PIOD_PUDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_puer PUER Pull-up Enable Register
@{*/

/** PIOD_PUER_P31 Pull Up Enable. **/
#define PIOD_PUER_P31		(1 << 31)
/** PIOD_PUER_P30 Pull Up Enable. **/
#define PIOD_PUER_P30		(1 << 30)
/** PIOD_PUER_P29 Pull Up Enable. **/
#define PIOD_PUER_P29		(1 << 29)
/** PIOD_PUER_P28 Pull Up Enable. **/
#define PIOD_PUER_P28		(1 << 28)
/** PIOD_PUER_P27 Pull Up Enable. **/
#define PIOD_PUER_P27		(1 << 27)
/** PIOD_PUER_P26 Pull Up Enable. **/
#define PIOD_PUER_P26		(1 << 26)
/** PIOD_PUER_P25 Pull Up Enable. **/
#define PIOD_PUER_P25		(1 << 25)
/** PIOD_PUER_P24 Pull Up Enable. **/
#define PIOD_PUER_P24		(1 << 24)
/** PIOD_PUER_P23 Pull Up Enable. **/
#define PIOD_PUER_P23		(1 << 23)
/** PIOD_PUER_P22 Pull Up Enable. **/
#define PIOD_PUER_P22		(1 << 22)
/** PIOD_PUER_P21 Pull Up Enable. **/
#define PIOD_PUER_P21		(1 << 21)
/** PIOD_PUER_P20 Pull Up Enable. **/
#define PIOD_PUER_P20		(1 << 20)
/** PIOD_PUER_P19 Pull Up Enable. **/
#define PIOD_PUER_P19		(1 << 19)
/** PIOD_PUER_P18 Pull Up Enable. **/
#define PIOD_PUER_P18		(1 << 18)
/** PIOD_PUER_P17 Pull Up Enable. **/
#define PIOD_PUER_P17		(1 << 17)
/** PIOD_PUER_P16 Pull Up Enable. **/
#define PIOD_PUER_P16		(1 << 16)
/** PIOD_PUER_P15 Pull Up Enable. **/
#define PIOD_PUER_P15		(1 << 15)
/** PIOD_PUER_P14 Pull Up Enable. **/
#define PIOD_PUER_P14		(1 << 14)
/** PIOD_PUER_P13 Pull Up Enable. **/
#define PIOD_PUER_P13		(1 << 13)
/** PIOD_PUER_P12 Pull Up Enable. **/
#define PIOD_PUER_P12		(1 << 12)
/** PIOD_PUER_P11 Pull Up Enable. **/
#define PIOD_PUER_P11		(1 << 11)
/** PIOD_PUER_P10 Pull Up Enable. **/
#define PIOD_PUER_P10		(1 << 10)
/** PIOD_PUER_P9 Pull Up Enable. **/
#define PIOD_PUER_P9		(1 << 9)
/** PIOD_PUER_P8 Pull Up Enable. **/
#define PIOD_PUER_P8		(1 << 8)
/** PIOD_PUER_P7 Pull Up Enable. **/
#define PIOD_PUER_P7		(1 << 7)
/** PIOD_PUER_P6 Pull Up Enable. **/
#define PIOD_PUER_P6		(1 << 6)
/** PIOD_PUER_P5 Pull Up Enable. **/
#define PIOD_PUER_P5		(1 << 5)
/** PIOD_PUER_P4 Pull Up Enable. **/
#define PIOD_PUER_P4		(1 << 4)
/** PIOD_PUER_P3 Pull Up Enable. **/
#define PIOD_PUER_P3		(1 << 3)
/** PIOD_PUER_P2 Pull Up Enable. **/
#define PIOD_PUER_P2		(1 << 2)
/** PIOD_PUER_P1 Pull Up Enable. **/
#define PIOD_PUER_P1		(1 << 1)
/** PIOD_PUER_P0 Pull Up Enable. **/
#define PIOD_PUER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_pusr PUSR Pad Pull-up Status Register
@{*/

/** PIOD_PUSR_P31 Pull Up Status. **/
#define PIOD_PUSR_P31		(1 << 31)
/** PIOD_PUSR_P30 Pull Up Status. **/
#define PIOD_PUSR_P30		(1 << 30)
/** PIOD_PUSR_P29 Pull Up Status. **/
#define PIOD_PUSR_P29		(1 << 29)
/** PIOD_PUSR_P28 Pull Up Status. **/
#define PIOD_PUSR_P28		(1 << 28)
/** PIOD_PUSR_P27 Pull Up Status. **/
#define PIOD_PUSR_P27		(1 << 27)
/** PIOD_PUSR_P26 Pull Up Status. **/
#define PIOD_PUSR_P26		(1 << 26)
/** PIOD_PUSR_P25 Pull Up Status. **/
#define PIOD_PUSR_P25		(1 << 25)
/** PIOD_PUSR_P24 Pull Up Status. **/
#define PIOD_PUSR_P24		(1 << 24)
/** PIOD_PUSR_P23 Pull Up Status. **/
#define PIOD_PUSR_P23		(1 << 23)
/** PIOD_PUSR_P22 Pull Up Status. **/
#define PIOD_PUSR_P22		(1 << 22)
/** PIOD_PUSR_P21 Pull Up Status. **/
#define PIOD_PUSR_P21		(1 << 21)
/** PIOD_PUSR_P20 Pull Up Status. **/
#define PIOD_PUSR_P20		(1 << 20)
/** PIOD_PUSR_P19 Pull Up Status. **/
#define PIOD_PUSR_P19		(1 << 19)
/** PIOD_PUSR_P18 Pull Up Status. **/
#define PIOD_PUSR_P18		(1 << 18)
/** PIOD_PUSR_P17 Pull Up Status. **/
#define PIOD_PUSR_P17		(1 << 17)
/** PIOD_PUSR_P16 Pull Up Status. **/
#define PIOD_PUSR_P16		(1 << 16)
/** PIOD_PUSR_P15 Pull Up Status. **/
#define PIOD_PUSR_P15		(1 << 15)
/** PIOD_PUSR_P14 Pull Up Status. **/
#define PIOD_PUSR_P14		(1 << 14)
/** PIOD_PUSR_P13 Pull Up Status. **/
#define PIOD_PUSR_P13		(1 << 13)
/** PIOD_PUSR_P12 Pull Up Status. **/
#define PIOD_PUSR_P12		(1 << 12)
/** PIOD_PUSR_P11 Pull Up Status. **/
#define PIOD_PUSR_P11		(1 << 11)
/** PIOD_PUSR_P10 Pull Up Status. **/
#define PIOD_PUSR_P10		(1 << 10)
/** PIOD_PUSR_P9 Pull Up Status. **/
#define PIOD_PUSR_P9		(1 << 9)
/** PIOD_PUSR_P8 Pull Up Status. **/
#define PIOD_PUSR_P8		(1 << 8)
/** PIOD_PUSR_P7 Pull Up Status. **/
#define PIOD_PUSR_P7		(1 << 7)
/** PIOD_PUSR_P6 Pull Up Status. **/
#define PIOD_PUSR_P6		(1 << 6)
/** PIOD_PUSR_P5 Pull Up Status. **/
#define PIOD_PUSR_P5		(1 << 5)
/** PIOD_PUSR_P4 Pull Up Status. **/
#define PIOD_PUSR_P4		(1 << 4)
/** PIOD_PUSR_P3 Pull Up Status. **/
#define PIOD_PUSR_P3		(1 << 3)
/** PIOD_PUSR_P2 Pull Up Status. **/
#define PIOD_PUSR_P2		(1 << 2)
/** PIOD_PUSR_P1 Pull Up Status. **/
#define PIOD_PUSR_P1		(1 << 1)
/** PIOD_PUSR_P0 Pull Up Status. **/
#define PIOD_PUSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_absr ABSR Peripheral AB Select Register
@{*/

/** PIOD_ABSR_P31 Peripheral A Select. **/
#define PIOD_ABSR_P31		(1 << 31)
/** PIOD_ABSR_P30 Peripheral A Select. **/
#define PIOD_ABSR_P30		(1 << 30)
/** PIOD_ABSR_P29 Peripheral A Select. **/
#define PIOD_ABSR_P29		(1 << 29)
/** PIOD_ABSR_P28 Peripheral A Select. **/
#define PIOD_ABSR_P28		(1 << 28)
/** PIOD_ABSR_P27 Peripheral A Select. **/
#define PIOD_ABSR_P27		(1 << 27)
/** PIOD_ABSR_P26 Peripheral A Select. **/
#define PIOD_ABSR_P26		(1 << 26)
/** PIOD_ABSR_P25 Peripheral A Select. **/
#define PIOD_ABSR_P25		(1 << 25)
/** PIOD_ABSR_P24 Peripheral A Select. **/
#define PIOD_ABSR_P24		(1 << 24)
/** PIOD_ABSR_P23 Peripheral A Select. **/
#define PIOD_ABSR_P23		(1 << 23)
/** PIOD_ABSR_P22 Peripheral A Select. **/
#define PIOD_ABSR_P22		(1 << 22)
/** PIOD_ABSR_P21 Peripheral A Select. **/
#define PIOD_ABSR_P21		(1 << 21)
/** PIOD_ABSR_P20 Peripheral A Select. **/
#define PIOD_ABSR_P20		(1 << 20)
/** PIOD_ABSR_P19 Peripheral A Select. **/
#define PIOD_ABSR_P19		(1 << 19)
/** PIOD_ABSR_P18 Peripheral A Select. **/
#define PIOD_ABSR_P18		(1 << 18)
/** PIOD_ABSR_P17 Peripheral A Select. **/
#define PIOD_ABSR_P17		(1 << 17)
/** PIOD_ABSR_P16 Peripheral A Select. **/
#define PIOD_ABSR_P16		(1 << 16)
/** PIOD_ABSR_P15 Peripheral A Select. **/
#define PIOD_ABSR_P15		(1 << 15)
/** PIOD_ABSR_P14 Peripheral A Select. **/
#define PIOD_ABSR_P14		(1 << 14)
/** PIOD_ABSR_P13 Peripheral A Select. **/
#define PIOD_ABSR_P13		(1 << 13)
/** PIOD_ABSR_P12 Peripheral A Select. **/
#define PIOD_ABSR_P12		(1 << 12)
/** PIOD_ABSR_P11 Peripheral A Select. **/
#define PIOD_ABSR_P11		(1 << 11)
/** PIOD_ABSR_P10 Peripheral A Select. **/
#define PIOD_ABSR_P10		(1 << 10)
/** PIOD_ABSR_P9 Peripheral A Select. **/
#define PIOD_ABSR_P9		(1 << 9)
/** PIOD_ABSR_P8 Peripheral A Select. **/
#define PIOD_ABSR_P8		(1 << 8)
/** PIOD_ABSR_P7 Peripheral A Select. **/
#define PIOD_ABSR_P7		(1 << 7)
/** PIOD_ABSR_P6 Peripheral A Select. **/
#define PIOD_ABSR_P6		(1 << 6)
/** PIOD_ABSR_P5 Peripheral A Select. **/
#define PIOD_ABSR_P5		(1 << 5)
/** PIOD_ABSR_P4 Peripheral A Select. **/
#define PIOD_ABSR_P4		(1 << 4)
/** PIOD_ABSR_P3 Peripheral A Select. **/
#define PIOD_ABSR_P3		(1 << 3)
/** PIOD_ABSR_P2 Peripheral A Select. **/
#define PIOD_ABSR_P2		(1 << 2)
/** PIOD_ABSR_P1 Peripheral A Select. **/
#define PIOD_ABSR_P1		(1 << 1)
/** PIOD_ABSR_P0 Peripheral A Select. **/
#define PIOD_ABSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_scifsr SCIFSR System Clock Glitch Input Filter Select Register
@{*/

/** PIOD_SCIFSR_P31 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P31		(1 << 31)
/** PIOD_SCIFSR_P30 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P30		(1 << 30)
/** PIOD_SCIFSR_P29 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P29		(1 << 29)
/** PIOD_SCIFSR_P28 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P28		(1 << 28)
/** PIOD_SCIFSR_P27 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P27		(1 << 27)
/** PIOD_SCIFSR_P26 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P26		(1 << 26)
/** PIOD_SCIFSR_P25 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P25		(1 << 25)
/** PIOD_SCIFSR_P24 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P24		(1 << 24)
/** PIOD_SCIFSR_P23 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P23		(1 << 23)
/** PIOD_SCIFSR_P22 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P22		(1 << 22)
/** PIOD_SCIFSR_P21 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P21		(1 << 21)
/** PIOD_SCIFSR_P20 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P20		(1 << 20)
/** PIOD_SCIFSR_P19 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P19		(1 << 19)
/** PIOD_SCIFSR_P18 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P18		(1 << 18)
/** PIOD_SCIFSR_P17 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P17		(1 << 17)
/** PIOD_SCIFSR_P16 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P16		(1 << 16)
/** PIOD_SCIFSR_P15 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P15		(1 << 15)
/** PIOD_SCIFSR_P14 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P14		(1 << 14)
/** PIOD_SCIFSR_P13 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P13		(1 << 13)
/** PIOD_SCIFSR_P12 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P12		(1 << 12)
/** PIOD_SCIFSR_P11 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P11		(1 << 11)
/** PIOD_SCIFSR_P10 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P10		(1 << 10)
/** PIOD_SCIFSR_P9 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P9		(1 << 9)
/** PIOD_SCIFSR_P8 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P8		(1 << 8)
/** PIOD_SCIFSR_P7 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P7		(1 << 7)
/** PIOD_SCIFSR_P6 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P6		(1 << 6)
/** PIOD_SCIFSR_P5 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P5		(1 << 5)
/** PIOD_SCIFSR_P4 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P4		(1 << 4)
/** PIOD_SCIFSR_P3 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P3		(1 << 3)
/** PIOD_SCIFSR_P2 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P2		(1 << 2)
/** PIOD_SCIFSR_P1 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P1		(1 << 1)
/** PIOD_SCIFSR_P0 System Clock Glitch Filtering Select. **/
#define PIOD_SCIFSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_difsr DIFSR Debouncing Input Filter Select Register
@{*/

/** PIOD_DIFSR_P31 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P31		(1 << 31)
/** PIOD_DIFSR_P30 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P30		(1 << 30)
/** PIOD_DIFSR_P29 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P29		(1 << 29)
/** PIOD_DIFSR_P28 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P28		(1 << 28)
/** PIOD_DIFSR_P27 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P27		(1 << 27)
/** PIOD_DIFSR_P26 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P26		(1 << 26)
/** PIOD_DIFSR_P25 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P25		(1 << 25)
/** PIOD_DIFSR_P24 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P24		(1 << 24)
/** PIOD_DIFSR_P23 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P23		(1 << 23)
/** PIOD_DIFSR_P22 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P22		(1 << 22)
/** PIOD_DIFSR_P21 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P21		(1 << 21)
/** PIOD_DIFSR_P20 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P20		(1 << 20)
/** PIOD_DIFSR_P19 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P19		(1 << 19)
/** PIOD_DIFSR_P18 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P18		(1 << 18)
/** PIOD_DIFSR_P17 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P17		(1 << 17)
/** PIOD_DIFSR_P16 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P16		(1 << 16)
/** PIOD_DIFSR_P15 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P15		(1 << 15)
/** PIOD_DIFSR_P14 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P14		(1 << 14)
/** PIOD_DIFSR_P13 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P13		(1 << 13)
/** PIOD_DIFSR_P12 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P12		(1 << 12)
/** PIOD_DIFSR_P11 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P11		(1 << 11)
/** PIOD_DIFSR_P10 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P10		(1 << 10)
/** PIOD_DIFSR_P9 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P9		(1 << 9)
/** PIOD_DIFSR_P8 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P8		(1 << 8)
/** PIOD_DIFSR_P7 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P7		(1 << 7)
/** PIOD_DIFSR_P6 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P6		(1 << 6)
/** PIOD_DIFSR_P5 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P5		(1 << 5)
/** PIOD_DIFSR_P4 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P4		(1 << 4)
/** PIOD_DIFSR_P3 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P3		(1 << 3)
/** PIOD_DIFSR_P2 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P2		(1 << 2)
/** PIOD_DIFSR_P1 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P1		(1 << 1)
/** PIOD_DIFSR_P0 Debouncing Filtering Select. **/
#define PIOD_DIFSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_ifdgsr IFDGSR Glitch or Debouncing Input Filter Clock Selection Status Register
@{*/

/** PIOD_IFDGSR_P31 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P31		(1 << 31)
/** PIOD_IFDGSR_P30 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P30		(1 << 30)
/** PIOD_IFDGSR_P29 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P29		(1 << 29)
/** PIOD_IFDGSR_P28 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P28		(1 << 28)
/** PIOD_IFDGSR_P27 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P27		(1 << 27)
/** PIOD_IFDGSR_P26 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P26		(1 << 26)
/** PIOD_IFDGSR_P25 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P25		(1 << 25)
/** PIOD_IFDGSR_P24 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P24		(1 << 24)
/** PIOD_IFDGSR_P23 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P23		(1 << 23)
/** PIOD_IFDGSR_P22 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P22		(1 << 22)
/** PIOD_IFDGSR_P21 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P21		(1 << 21)
/** PIOD_IFDGSR_P20 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P20		(1 << 20)
/** PIOD_IFDGSR_P19 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P19		(1 << 19)
/** PIOD_IFDGSR_P18 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P18		(1 << 18)
/** PIOD_IFDGSR_P17 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P17		(1 << 17)
/** PIOD_IFDGSR_P16 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P16		(1 << 16)
/** PIOD_IFDGSR_P15 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P15		(1 << 15)
/** PIOD_IFDGSR_P14 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P14		(1 << 14)
/** PIOD_IFDGSR_P13 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P13		(1 << 13)
/** PIOD_IFDGSR_P12 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P12		(1 << 12)
/** PIOD_IFDGSR_P11 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P11		(1 << 11)
/** PIOD_IFDGSR_P10 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P10		(1 << 10)
/** PIOD_IFDGSR_P9 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P9		(1 << 9)
/** PIOD_IFDGSR_P8 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P8		(1 << 8)
/** PIOD_IFDGSR_P7 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P7		(1 << 7)
/** PIOD_IFDGSR_P6 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P6		(1 << 6)
/** PIOD_IFDGSR_P5 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P5		(1 << 5)
/** PIOD_IFDGSR_P4 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P4		(1 << 4)
/** PIOD_IFDGSR_P3 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P3		(1 << 3)
/** PIOD_IFDGSR_P2 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P2		(1 << 2)
/** PIOD_IFDGSR_P1 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P1		(1 << 1)
/** PIOD_IFDGSR_P0 Glitch or Debouncing Filter Selection Status **/
#define PIOD_IFDGSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_scdr SCDR Slow Clock Divider Debouncing Register
@{*/


#define PIOD_SCDR_DIV_SHIFT		0
#define PIOD_SCDR_DIV_MASK		0x3fff
/** @defgroup piod_scdr_div DIV Slow Clock Divider Selection for Debouncing
@{*/
/**@}*/


/**@}*/

/** @defgroup piod_ower OWER Output Write Enable
@{*/

/** PIOD_OWER_P31 Output Write Enable. **/
#define PIOD_OWER_P31		(1 << 31)
/** PIOD_OWER_P30 Output Write Enable. **/
#define PIOD_OWER_P30		(1 << 30)
/** PIOD_OWER_P29 Output Write Enable. **/
#define PIOD_OWER_P29		(1 << 29)
/** PIOD_OWER_P28 Output Write Enable. **/
#define PIOD_OWER_P28		(1 << 28)
/** PIOD_OWER_P27 Output Write Enable. **/
#define PIOD_OWER_P27		(1 << 27)
/** PIOD_OWER_P26 Output Write Enable. **/
#define PIOD_OWER_P26		(1 << 26)
/** PIOD_OWER_P25 Output Write Enable. **/
#define PIOD_OWER_P25		(1 << 25)
/** PIOD_OWER_P24 Output Write Enable. **/
#define PIOD_OWER_P24		(1 << 24)
/** PIOD_OWER_P23 Output Write Enable. **/
#define PIOD_OWER_P23		(1 << 23)
/** PIOD_OWER_P22 Output Write Enable. **/
#define PIOD_OWER_P22		(1 << 22)
/** PIOD_OWER_P21 Output Write Enable. **/
#define PIOD_OWER_P21		(1 << 21)
/** PIOD_OWER_P20 Output Write Enable. **/
#define PIOD_OWER_P20		(1 << 20)
/** PIOD_OWER_P19 Output Write Enable. **/
#define PIOD_OWER_P19		(1 << 19)
/** PIOD_OWER_P18 Output Write Enable. **/
#define PIOD_OWER_P18		(1 << 18)
/** PIOD_OWER_P17 Output Write Enable. **/
#define PIOD_OWER_P17		(1 << 17)
/** PIOD_OWER_P16 Output Write Enable. **/
#define PIOD_OWER_P16		(1 << 16)
/** PIOD_OWER_P15 Output Write Enable. **/
#define PIOD_OWER_P15		(1 << 15)
/** PIOD_OWER_P14 Output Write Enable. **/
#define PIOD_OWER_P14		(1 << 14)
/** PIOD_OWER_P13 Output Write Enable. **/
#define PIOD_OWER_P13		(1 << 13)
/** PIOD_OWER_P12 Output Write Enable. **/
#define PIOD_OWER_P12		(1 << 12)
/** PIOD_OWER_P11 Output Write Enable. **/
#define PIOD_OWER_P11		(1 << 11)
/** PIOD_OWER_P10 Output Write Enable. **/
#define PIOD_OWER_P10		(1 << 10)
/** PIOD_OWER_P9 Output Write Enable. **/
#define PIOD_OWER_P9		(1 << 9)
/** PIOD_OWER_P8 Output Write Enable. **/
#define PIOD_OWER_P8		(1 << 8)
/** PIOD_OWER_P7 Output Write Enable. **/
#define PIOD_OWER_P7		(1 << 7)
/** PIOD_OWER_P6 Output Write Enable. **/
#define PIOD_OWER_P6		(1 << 6)
/** PIOD_OWER_P5 Output Write Enable. **/
#define PIOD_OWER_P5		(1 << 5)
/** PIOD_OWER_P4 Output Write Enable. **/
#define PIOD_OWER_P4		(1 << 4)
/** PIOD_OWER_P3 Output Write Enable. **/
#define PIOD_OWER_P3		(1 << 3)
/** PIOD_OWER_P2 Output Write Enable. **/
#define PIOD_OWER_P2		(1 << 2)
/** PIOD_OWER_P1 Output Write Enable. **/
#define PIOD_OWER_P1		(1 << 1)
/** PIOD_OWER_P0 Output Write Enable. **/
#define PIOD_OWER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_owdr OWDR Output Write Disable
@{*/

/** PIOD_OWDR_P31 Output Write Disable. **/
#define PIOD_OWDR_P31		(1 << 31)
/** PIOD_OWDR_P30 Output Write Disable. **/
#define PIOD_OWDR_P30		(1 << 30)
/** PIOD_OWDR_P29 Output Write Disable. **/
#define PIOD_OWDR_P29		(1 << 29)
/** PIOD_OWDR_P28 Output Write Disable. **/
#define PIOD_OWDR_P28		(1 << 28)
/** PIOD_OWDR_P27 Output Write Disable. **/
#define PIOD_OWDR_P27		(1 << 27)
/** PIOD_OWDR_P26 Output Write Disable. **/
#define PIOD_OWDR_P26		(1 << 26)
/** PIOD_OWDR_P25 Output Write Disable. **/
#define PIOD_OWDR_P25		(1 << 25)
/** PIOD_OWDR_P24 Output Write Disable. **/
#define PIOD_OWDR_P24		(1 << 24)
/** PIOD_OWDR_P23 Output Write Disable. **/
#define PIOD_OWDR_P23		(1 << 23)
/** PIOD_OWDR_P22 Output Write Disable. **/
#define PIOD_OWDR_P22		(1 << 22)
/** PIOD_OWDR_P21 Output Write Disable. **/
#define PIOD_OWDR_P21		(1 << 21)
/** PIOD_OWDR_P20 Output Write Disable. **/
#define PIOD_OWDR_P20		(1 << 20)
/** PIOD_OWDR_P19 Output Write Disable. **/
#define PIOD_OWDR_P19		(1 << 19)
/** PIOD_OWDR_P18 Output Write Disable. **/
#define PIOD_OWDR_P18		(1 << 18)
/** PIOD_OWDR_P17 Output Write Disable. **/
#define PIOD_OWDR_P17		(1 << 17)
/** PIOD_OWDR_P16 Output Write Disable. **/
#define PIOD_OWDR_P16		(1 << 16)
/** PIOD_OWDR_P15 Output Write Disable. **/
#define PIOD_OWDR_P15		(1 << 15)
/** PIOD_OWDR_P14 Output Write Disable. **/
#define PIOD_OWDR_P14		(1 << 14)
/** PIOD_OWDR_P13 Output Write Disable. **/
#define PIOD_OWDR_P13		(1 << 13)
/** PIOD_OWDR_P12 Output Write Disable. **/
#define PIOD_OWDR_P12		(1 << 12)
/** PIOD_OWDR_P11 Output Write Disable. **/
#define PIOD_OWDR_P11		(1 << 11)
/** PIOD_OWDR_P10 Output Write Disable. **/
#define PIOD_OWDR_P10		(1 << 10)
/** PIOD_OWDR_P9 Output Write Disable. **/
#define PIOD_OWDR_P9		(1 << 9)
/** PIOD_OWDR_P8 Output Write Disable. **/
#define PIOD_OWDR_P8		(1 << 8)
/** PIOD_OWDR_P7 Output Write Disable. **/
#define PIOD_OWDR_P7		(1 << 7)
/** PIOD_OWDR_P6 Output Write Disable. **/
#define PIOD_OWDR_P6		(1 << 6)
/** PIOD_OWDR_P5 Output Write Disable. **/
#define PIOD_OWDR_P5		(1 << 5)
/** PIOD_OWDR_P4 Output Write Disable. **/
#define PIOD_OWDR_P4		(1 << 4)
/** PIOD_OWDR_P3 Output Write Disable. **/
#define PIOD_OWDR_P3		(1 << 3)
/** PIOD_OWDR_P2 Output Write Disable. **/
#define PIOD_OWDR_P2		(1 << 2)
/** PIOD_OWDR_P1 Output Write Disable. **/
#define PIOD_OWDR_P1		(1 << 1)
/** PIOD_OWDR_P0 Output Write Disable. **/
#define PIOD_OWDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_owsr OWSR Output Write Status Register
@{*/

/** PIOD_OWSR_P31 Output Write Status. **/
#define PIOD_OWSR_P31		(1 << 31)
/** PIOD_OWSR_P30 Output Write Status. **/
#define PIOD_OWSR_P30		(1 << 30)
/** PIOD_OWSR_P29 Output Write Status. **/
#define PIOD_OWSR_P29		(1 << 29)
/** PIOD_OWSR_P28 Output Write Status. **/
#define PIOD_OWSR_P28		(1 << 28)
/** PIOD_OWSR_P27 Output Write Status. **/
#define PIOD_OWSR_P27		(1 << 27)
/** PIOD_OWSR_P26 Output Write Status. **/
#define PIOD_OWSR_P26		(1 << 26)
/** PIOD_OWSR_P25 Output Write Status. **/
#define PIOD_OWSR_P25		(1 << 25)
/** PIOD_OWSR_P24 Output Write Status. **/
#define PIOD_OWSR_P24		(1 << 24)
/** PIOD_OWSR_P23 Output Write Status. **/
#define PIOD_OWSR_P23		(1 << 23)
/** PIOD_OWSR_P22 Output Write Status. **/
#define PIOD_OWSR_P22		(1 << 22)
/** PIOD_OWSR_P21 Output Write Status. **/
#define PIOD_OWSR_P21		(1 << 21)
/** PIOD_OWSR_P20 Output Write Status. **/
#define PIOD_OWSR_P20		(1 << 20)
/** PIOD_OWSR_P19 Output Write Status. **/
#define PIOD_OWSR_P19		(1 << 19)
/** PIOD_OWSR_P18 Output Write Status. **/
#define PIOD_OWSR_P18		(1 << 18)
/** PIOD_OWSR_P17 Output Write Status. **/
#define PIOD_OWSR_P17		(1 << 17)
/** PIOD_OWSR_P16 Output Write Status. **/
#define PIOD_OWSR_P16		(1 << 16)
/** PIOD_OWSR_P15 Output Write Status. **/
#define PIOD_OWSR_P15		(1 << 15)
/** PIOD_OWSR_P14 Output Write Status. **/
#define PIOD_OWSR_P14		(1 << 14)
/** PIOD_OWSR_P13 Output Write Status. **/
#define PIOD_OWSR_P13		(1 << 13)
/** PIOD_OWSR_P12 Output Write Status. **/
#define PIOD_OWSR_P12		(1 << 12)
/** PIOD_OWSR_P11 Output Write Status. **/
#define PIOD_OWSR_P11		(1 << 11)
/** PIOD_OWSR_P10 Output Write Status. **/
#define PIOD_OWSR_P10		(1 << 10)
/** PIOD_OWSR_P9 Output Write Status. **/
#define PIOD_OWSR_P9		(1 << 9)
/** PIOD_OWSR_P8 Output Write Status. **/
#define PIOD_OWSR_P8		(1 << 8)
/** PIOD_OWSR_P7 Output Write Status. **/
#define PIOD_OWSR_P7		(1 << 7)
/** PIOD_OWSR_P6 Output Write Status. **/
#define PIOD_OWSR_P6		(1 << 6)
/** PIOD_OWSR_P5 Output Write Status. **/
#define PIOD_OWSR_P5		(1 << 5)
/** PIOD_OWSR_P4 Output Write Status. **/
#define PIOD_OWSR_P4		(1 << 4)
/** PIOD_OWSR_P3 Output Write Status. **/
#define PIOD_OWSR_P3		(1 << 3)
/** PIOD_OWSR_P2 Output Write Status. **/
#define PIOD_OWSR_P2		(1 << 2)
/** PIOD_OWSR_P1 Output Write Status. **/
#define PIOD_OWSR_P1		(1 << 1)
/** PIOD_OWSR_P0 Output Write Status. **/
#define PIOD_OWSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_aimer AIMER Additional Interrupt Modes Enable Register
@{*/

/** PIOD_AIMER_P31 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P31		(1 << 31)
/** PIOD_AIMER_P30 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P30		(1 << 30)
/** PIOD_AIMER_P29 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P29		(1 << 29)
/** PIOD_AIMER_P28 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P28		(1 << 28)
/** PIOD_AIMER_P27 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P27		(1 << 27)
/** PIOD_AIMER_P26 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P26		(1 << 26)
/** PIOD_AIMER_P25 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P25		(1 << 25)
/** PIOD_AIMER_P24 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P24		(1 << 24)
/** PIOD_AIMER_P23 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P23		(1 << 23)
/** PIOD_AIMER_P22 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P22		(1 << 22)
/** PIOD_AIMER_P21 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P21		(1 << 21)
/** PIOD_AIMER_P20 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P20		(1 << 20)
/** PIOD_AIMER_P19 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P19		(1 << 19)
/** PIOD_AIMER_P18 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P18		(1 << 18)
/** PIOD_AIMER_P17 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P17		(1 << 17)
/** PIOD_AIMER_P16 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P16		(1 << 16)
/** PIOD_AIMER_P15 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P15		(1 << 15)
/** PIOD_AIMER_P14 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P14		(1 << 14)
/** PIOD_AIMER_P13 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P13		(1 << 13)
/** PIOD_AIMER_P12 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P12		(1 << 12)
/** PIOD_AIMER_P11 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P11		(1 << 11)
/** PIOD_AIMER_P10 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P10		(1 << 10)
/** PIOD_AIMER_P9 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P9		(1 << 9)
/** PIOD_AIMER_P8 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P8		(1 << 8)
/** PIOD_AIMER_P7 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P7		(1 << 7)
/** PIOD_AIMER_P6 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P6		(1 << 6)
/** PIOD_AIMER_P5 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P5		(1 << 5)
/** PIOD_AIMER_P4 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P4		(1 << 4)
/** PIOD_AIMER_P3 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P3		(1 << 3)
/** PIOD_AIMER_P2 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P2		(1 << 2)
/** PIOD_AIMER_P1 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P1		(1 << 1)
/** PIOD_AIMER_P0 Additional Interrupt Modes Enable. **/
#define PIOD_AIMER_P0		(1 << 0)

/**@}*/

/** @defgroup piod_aimdr AIMDR Additional Interrupt Modes Disables Register
@{*/

/** PIOD_AIMDR_P31 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P31		(1 << 31)
/** PIOD_AIMDR_P30 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P30		(1 << 30)
/** PIOD_AIMDR_P29 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P29		(1 << 29)
/** PIOD_AIMDR_P28 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P28		(1 << 28)
/** PIOD_AIMDR_P27 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P27		(1 << 27)
/** PIOD_AIMDR_P26 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P26		(1 << 26)
/** PIOD_AIMDR_P25 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P25		(1 << 25)
/** PIOD_AIMDR_P24 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P24		(1 << 24)
/** PIOD_AIMDR_P23 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P23		(1 << 23)
/** PIOD_AIMDR_P22 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P22		(1 << 22)
/** PIOD_AIMDR_P21 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P21		(1 << 21)
/** PIOD_AIMDR_P20 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P20		(1 << 20)
/** PIOD_AIMDR_P19 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P19		(1 << 19)
/** PIOD_AIMDR_P18 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P18		(1 << 18)
/** PIOD_AIMDR_P17 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P17		(1 << 17)
/** PIOD_AIMDR_P16 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P16		(1 << 16)
/** PIOD_AIMDR_P15 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P15		(1 << 15)
/** PIOD_AIMDR_P14 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P14		(1 << 14)
/** PIOD_AIMDR_P13 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P13		(1 << 13)
/** PIOD_AIMDR_P12 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P12		(1 << 12)
/** PIOD_AIMDR_P11 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P11		(1 << 11)
/** PIOD_AIMDR_P10 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P10		(1 << 10)
/** PIOD_AIMDR_P9 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P9		(1 << 9)
/** PIOD_AIMDR_P8 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P8		(1 << 8)
/** PIOD_AIMDR_P7 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P7		(1 << 7)
/** PIOD_AIMDR_P6 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P6		(1 << 6)
/** PIOD_AIMDR_P5 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P5		(1 << 5)
/** PIOD_AIMDR_P4 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P4		(1 << 4)
/** PIOD_AIMDR_P3 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P3		(1 << 3)
/** PIOD_AIMDR_P2 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P2		(1 << 2)
/** PIOD_AIMDR_P1 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P1		(1 << 1)
/** PIOD_AIMDR_P0 Additional Interrupt Modes Disable. **/
#define PIOD_AIMDR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_aimmr AIMMR Additional Interrupt Modes Mask Register
@{*/

/** PIOD_AIMMR_P31 Peripheral CD Status. **/
#define PIOD_AIMMR_P31		(1 << 31)
/** PIOD_AIMMR_P30 Peripheral CD Status. **/
#define PIOD_AIMMR_P30		(1 << 30)
/** PIOD_AIMMR_P29 Peripheral CD Status. **/
#define PIOD_AIMMR_P29		(1 << 29)
/** PIOD_AIMMR_P28 Peripheral CD Status. **/
#define PIOD_AIMMR_P28		(1 << 28)
/** PIOD_AIMMR_P27 Peripheral CD Status. **/
#define PIOD_AIMMR_P27		(1 << 27)
/** PIOD_AIMMR_P26 Peripheral CD Status. **/
#define PIOD_AIMMR_P26		(1 << 26)
/** PIOD_AIMMR_P25 Peripheral CD Status. **/
#define PIOD_AIMMR_P25		(1 << 25)
/** PIOD_AIMMR_P24 Peripheral CD Status. **/
#define PIOD_AIMMR_P24		(1 << 24)
/** PIOD_AIMMR_P23 Peripheral CD Status. **/
#define PIOD_AIMMR_P23		(1 << 23)
/** PIOD_AIMMR_P22 Peripheral CD Status. **/
#define PIOD_AIMMR_P22		(1 << 22)
/** PIOD_AIMMR_P21 Peripheral CD Status. **/
#define PIOD_AIMMR_P21		(1 << 21)
/** PIOD_AIMMR_P20 Peripheral CD Status. **/
#define PIOD_AIMMR_P20		(1 << 20)
/** PIOD_AIMMR_P19 Peripheral CD Status. **/
#define PIOD_AIMMR_P19		(1 << 19)
/** PIOD_AIMMR_P18 Peripheral CD Status. **/
#define PIOD_AIMMR_P18		(1 << 18)
/** PIOD_AIMMR_P17 Peripheral CD Status. **/
#define PIOD_AIMMR_P17		(1 << 17)
/** PIOD_AIMMR_P16 Peripheral CD Status. **/
#define PIOD_AIMMR_P16		(1 << 16)
/** PIOD_AIMMR_P15 Peripheral CD Status. **/
#define PIOD_AIMMR_P15		(1 << 15)
/** PIOD_AIMMR_P14 Peripheral CD Status. **/
#define PIOD_AIMMR_P14		(1 << 14)
/** PIOD_AIMMR_P13 Peripheral CD Status. **/
#define PIOD_AIMMR_P13		(1 << 13)
/** PIOD_AIMMR_P12 Peripheral CD Status. **/
#define PIOD_AIMMR_P12		(1 << 12)
/** PIOD_AIMMR_P11 Peripheral CD Status. **/
#define PIOD_AIMMR_P11		(1 << 11)
/** PIOD_AIMMR_P10 Peripheral CD Status. **/
#define PIOD_AIMMR_P10		(1 << 10)
/** PIOD_AIMMR_P9 Peripheral CD Status. **/
#define PIOD_AIMMR_P9		(1 << 9)
/** PIOD_AIMMR_P8 Peripheral CD Status. **/
#define PIOD_AIMMR_P8		(1 << 8)
/** PIOD_AIMMR_P7 Peripheral CD Status. **/
#define PIOD_AIMMR_P7		(1 << 7)
/** PIOD_AIMMR_P6 Peripheral CD Status. **/
#define PIOD_AIMMR_P6		(1 << 6)
/** PIOD_AIMMR_P5 Peripheral CD Status. **/
#define PIOD_AIMMR_P5		(1 << 5)
/** PIOD_AIMMR_P4 Peripheral CD Status. **/
#define PIOD_AIMMR_P4		(1 << 4)
/** PIOD_AIMMR_P3 Peripheral CD Status. **/
#define PIOD_AIMMR_P3		(1 << 3)
/** PIOD_AIMMR_P2 Peripheral CD Status. **/
#define PIOD_AIMMR_P2		(1 << 2)
/** PIOD_AIMMR_P1 Peripheral CD Status. **/
#define PIOD_AIMMR_P1		(1 << 1)
/** PIOD_AIMMR_P0 Peripheral CD Status. **/
#define PIOD_AIMMR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_esr ESR Edge Select Register
@{*/

/** PIOD_ESR_P31 Edge Interrupt Selection. **/
#define PIOD_ESR_P31		(1 << 31)
/** PIOD_ESR_P30 Edge Interrupt Selection. **/
#define PIOD_ESR_P30		(1 << 30)
/** PIOD_ESR_P29 Edge Interrupt Selection. **/
#define PIOD_ESR_P29		(1 << 29)
/** PIOD_ESR_P28 Edge Interrupt Selection. **/
#define PIOD_ESR_P28		(1 << 28)
/** PIOD_ESR_P27 Edge Interrupt Selection. **/
#define PIOD_ESR_P27		(1 << 27)
/** PIOD_ESR_P26 Edge Interrupt Selection. **/
#define PIOD_ESR_P26		(1 << 26)
/** PIOD_ESR_P25 Edge Interrupt Selection. **/
#define PIOD_ESR_P25		(1 << 25)
/** PIOD_ESR_P24 Edge Interrupt Selection. **/
#define PIOD_ESR_P24		(1 << 24)
/** PIOD_ESR_P23 Edge Interrupt Selection. **/
#define PIOD_ESR_P23		(1 << 23)
/** PIOD_ESR_P22 Edge Interrupt Selection. **/
#define PIOD_ESR_P22		(1 << 22)
/** PIOD_ESR_P21 Edge Interrupt Selection. **/
#define PIOD_ESR_P21		(1 << 21)
/** PIOD_ESR_P20 Edge Interrupt Selection. **/
#define PIOD_ESR_P20		(1 << 20)
/** PIOD_ESR_P19 Edge Interrupt Selection. **/
#define PIOD_ESR_P19		(1 << 19)
/** PIOD_ESR_P18 Edge Interrupt Selection. **/
#define PIOD_ESR_P18		(1 << 18)
/** PIOD_ESR_P17 Edge Interrupt Selection. **/
#define PIOD_ESR_P17		(1 << 17)
/** PIOD_ESR_P16 Edge Interrupt Selection. **/
#define PIOD_ESR_P16		(1 << 16)
/** PIOD_ESR_P15 Edge Interrupt Selection. **/
#define PIOD_ESR_P15		(1 << 15)
/** PIOD_ESR_P14 Edge Interrupt Selection. **/
#define PIOD_ESR_P14		(1 << 14)
/** PIOD_ESR_P13 Edge Interrupt Selection. **/
#define PIOD_ESR_P13		(1 << 13)
/** PIOD_ESR_P12 Edge Interrupt Selection. **/
#define PIOD_ESR_P12		(1 << 12)
/** PIOD_ESR_P11 Edge Interrupt Selection. **/
#define PIOD_ESR_P11		(1 << 11)
/** PIOD_ESR_P10 Edge Interrupt Selection. **/
#define PIOD_ESR_P10		(1 << 10)
/** PIOD_ESR_P9 Edge Interrupt Selection. **/
#define PIOD_ESR_P9		(1 << 9)
/** PIOD_ESR_P8 Edge Interrupt Selection. **/
#define PIOD_ESR_P8		(1 << 8)
/** PIOD_ESR_P7 Edge Interrupt Selection. **/
#define PIOD_ESR_P7		(1 << 7)
/** PIOD_ESR_P6 Edge Interrupt Selection. **/
#define PIOD_ESR_P6		(1 << 6)
/** PIOD_ESR_P5 Edge Interrupt Selection. **/
#define PIOD_ESR_P5		(1 << 5)
/** PIOD_ESR_P4 Edge Interrupt Selection. **/
#define PIOD_ESR_P4		(1 << 4)
/** PIOD_ESR_P3 Edge Interrupt Selection. **/
#define PIOD_ESR_P3		(1 << 3)
/** PIOD_ESR_P2 Edge Interrupt Selection. **/
#define PIOD_ESR_P2		(1 << 2)
/** PIOD_ESR_P1 Edge Interrupt Selection. **/
#define PIOD_ESR_P1		(1 << 1)
/** PIOD_ESR_P0 Edge Interrupt Selection. **/
#define PIOD_ESR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_lsr LSR Level Select Register
@{*/

/** PIOD_LSR_P31 Level Interrupt Selection. **/
#define PIOD_LSR_P31		(1 << 31)
/** PIOD_LSR_P30 Level Interrupt Selection. **/
#define PIOD_LSR_P30		(1 << 30)
/** PIOD_LSR_P29 Level Interrupt Selection. **/
#define PIOD_LSR_P29		(1 << 29)
/** PIOD_LSR_P28 Level Interrupt Selection. **/
#define PIOD_LSR_P28		(1 << 28)
/** PIOD_LSR_P27 Level Interrupt Selection. **/
#define PIOD_LSR_P27		(1 << 27)
/** PIOD_LSR_P26 Level Interrupt Selection. **/
#define PIOD_LSR_P26		(1 << 26)
/** PIOD_LSR_P25 Level Interrupt Selection. **/
#define PIOD_LSR_P25		(1 << 25)
/** PIOD_LSR_P24 Level Interrupt Selection. **/
#define PIOD_LSR_P24		(1 << 24)
/** PIOD_LSR_P23 Level Interrupt Selection. **/
#define PIOD_LSR_P23		(1 << 23)
/** PIOD_LSR_P22 Level Interrupt Selection. **/
#define PIOD_LSR_P22		(1 << 22)
/** PIOD_LSR_P21 Level Interrupt Selection. **/
#define PIOD_LSR_P21		(1 << 21)
/** PIOD_LSR_P20 Level Interrupt Selection. **/
#define PIOD_LSR_P20		(1 << 20)
/** PIOD_LSR_P19 Level Interrupt Selection. **/
#define PIOD_LSR_P19		(1 << 19)
/** PIOD_LSR_P18 Level Interrupt Selection. **/
#define PIOD_LSR_P18		(1 << 18)
/** PIOD_LSR_P17 Level Interrupt Selection. **/
#define PIOD_LSR_P17		(1 << 17)
/** PIOD_LSR_P16 Level Interrupt Selection. **/
#define PIOD_LSR_P16		(1 << 16)
/** PIOD_LSR_P15 Level Interrupt Selection. **/
#define PIOD_LSR_P15		(1 << 15)
/** PIOD_LSR_P14 Level Interrupt Selection. **/
#define PIOD_LSR_P14		(1 << 14)
/** PIOD_LSR_P13 Level Interrupt Selection. **/
#define PIOD_LSR_P13		(1 << 13)
/** PIOD_LSR_P12 Level Interrupt Selection. **/
#define PIOD_LSR_P12		(1 << 12)
/** PIOD_LSR_P11 Level Interrupt Selection. **/
#define PIOD_LSR_P11		(1 << 11)
/** PIOD_LSR_P10 Level Interrupt Selection. **/
#define PIOD_LSR_P10		(1 << 10)
/** PIOD_LSR_P9 Level Interrupt Selection. **/
#define PIOD_LSR_P9		(1 << 9)
/** PIOD_LSR_P8 Level Interrupt Selection. **/
#define PIOD_LSR_P8		(1 << 8)
/** PIOD_LSR_P7 Level Interrupt Selection. **/
#define PIOD_LSR_P7		(1 << 7)
/** PIOD_LSR_P6 Level Interrupt Selection. **/
#define PIOD_LSR_P6		(1 << 6)
/** PIOD_LSR_P5 Level Interrupt Selection. **/
#define PIOD_LSR_P5		(1 << 5)
/** PIOD_LSR_P4 Level Interrupt Selection. **/
#define PIOD_LSR_P4		(1 << 4)
/** PIOD_LSR_P3 Level Interrupt Selection. **/
#define PIOD_LSR_P3		(1 << 3)
/** PIOD_LSR_P2 Level Interrupt Selection. **/
#define PIOD_LSR_P2		(1 << 2)
/** PIOD_LSR_P1 Level Interrupt Selection. **/
#define PIOD_LSR_P1		(1 << 1)
/** PIOD_LSR_P0 Level Interrupt Selection. **/
#define PIOD_LSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_elsr ELSR Edge/Level Status Register
@{*/

/** PIOD_ELSR_P31 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P31		(1 << 31)
/** PIOD_ELSR_P30 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P30		(1 << 30)
/** PIOD_ELSR_P29 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P29		(1 << 29)
/** PIOD_ELSR_P28 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P28		(1 << 28)
/** PIOD_ELSR_P27 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P27		(1 << 27)
/** PIOD_ELSR_P26 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P26		(1 << 26)
/** PIOD_ELSR_P25 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P25		(1 << 25)
/** PIOD_ELSR_P24 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P24		(1 << 24)
/** PIOD_ELSR_P23 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P23		(1 << 23)
/** PIOD_ELSR_P22 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P22		(1 << 22)
/** PIOD_ELSR_P21 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P21		(1 << 21)
/** PIOD_ELSR_P20 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P20		(1 << 20)
/** PIOD_ELSR_P19 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P19		(1 << 19)
/** PIOD_ELSR_P18 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P18		(1 << 18)
/** PIOD_ELSR_P17 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P17		(1 << 17)
/** PIOD_ELSR_P16 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P16		(1 << 16)
/** PIOD_ELSR_P15 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P15		(1 << 15)
/** PIOD_ELSR_P14 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P14		(1 << 14)
/** PIOD_ELSR_P13 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P13		(1 << 13)
/** PIOD_ELSR_P12 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P12		(1 << 12)
/** PIOD_ELSR_P11 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P11		(1 << 11)
/** PIOD_ELSR_P10 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P10		(1 << 10)
/** PIOD_ELSR_P9 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P9		(1 << 9)
/** PIOD_ELSR_P8 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P8		(1 << 8)
/** PIOD_ELSR_P7 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P7		(1 << 7)
/** PIOD_ELSR_P6 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P6		(1 << 6)
/** PIOD_ELSR_P5 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P5		(1 << 5)
/** PIOD_ELSR_P4 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P4		(1 << 4)
/** PIOD_ELSR_P3 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P3		(1 << 3)
/** PIOD_ELSR_P2 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P2		(1 << 2)
/** PIOD_ELSR_P1 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P1		(1 << 1)
/** PIOD_ELSR_P0 Edge/Level Interrupt source selection. **/
#define PIOD_ELSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_fellsr FELLSR Falling Edge/Low Level Select Register
@{*/

/** PIOD_FELLSR_P31 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P31		(1 << 31)
/** PIOD_FELLSR_P30 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P30		(1 << 30)
/** PIOD_FELLSR_P29 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P29		(1 << 29)
/** PIOD_FELLSR_P28 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P28		(1 << 28)
/** PIOD_FELLSR_P27 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P27		(1 << 27)
/** PIOD_FELLSR_P26 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P26		(1 << 26)
/** PIOD_FELLSR_P25 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P25		(1 << 25)
/** PIOD_FELLSR_P24 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P24		(1 << 24)
/** PIOD_FELLSR_P23 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P23		(1 << 23)
/** PIOD_FELLSR_P22 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P22		(1 << 22)
/** PIOD_FELLSR_P21 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P21		(1 << 21)
/** PIOD_FELLSR_P20 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P20		(1 << 20)
/** PIOD_FELLSR_P19 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P19		(1 << 19)
/** PIOD_FELLSR_P18 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P18		(1 << 18)
/** PIOD_FELLSR_P17 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P17		(1 << 17)
/** PIOD_FELLSR_P16 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P16		(1 << 16)
/** PIOD_FELLSR_P15 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P15		(1 << 15)
/** PIOD_FELLSR_P14 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P14		(1 << 14)
/** PIOD_FELLSR_P13 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P13		(1 << 13)
/** PIOD_FELLSR_P12 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P12		(1 << 12)
/** PIOD_FELLSR_P11 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P11		(1 << 11)
/** PIOD_FELLSR_P10 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P10		(1 << 10)
/** PIOD_FELLSR_P9 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P9		(1 << 9)
/** PIOD_FELLSR_P8 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P8		(1 << 8)
/** PIOD_FELLSR_P7 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P7		(1 << 7)
/** PIOD_FELLSR_P6 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P6		(1 << 6)
/** PIOD_FELLSR_P5 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P5		(1 << 5)
/** PIOD_FELLSR_P4 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P4		(1 << 4)
/** PIOD_FELLSR_P3 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P3		(1 << 3)
/** PIOD_FELLSR_P2 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P2		(1 << 2)
/** PIOD_FELLSR_P1 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P1		(1 << 1)
/** PIOD_FELLSR_P0 Falling Edge/Low Level Interrupt Selection. **/
#define PIOD_FELLSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_rehlsr REHLSR Rising Edge/ High Level Select Register
@{*/

/** PIOD_REHLSR_P31 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P31		(1 << 31)
/** PIOD_REHLSR_P30 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P30		(1 << 30)
/** PIOD_REHLSR_P29 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P29		(1 << 29)
/** PIOD_REHLSR_P28 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P28		(1 << 28)
/** PIOD_REHLSR_P27 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P27		(1 << 27)
/** PIOD_REHLSR_P26 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P26		(1 << 26)
/** PIOD_REHLSR_P25 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P25		(1 << 25)
/** PIOD_REHLSR_P24 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P24		(1 << 24)
/** PIOD_REHLSR_P23 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P23		(1 << 23)
/** PIOD_REHLSR_P22 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P22		(1 << 22)
/** PIOD_REHLSR_P21 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P21		(1 << 21)
/** PIOD_REHLSR_P20 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P20		(1 << 20)
/** PIOD_REHLSR_P19 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P19		(1 << 19)
/** PIOD_REHLSR_P18 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P18		(1 << 18)
/** PIOD_REHLSR_P17 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P17		(1 << 17)
/** PIOD_REHLSR_P16 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P16		(1 << 16)
/** PIOD_REHLSR_P15 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P15		(1 << 15)
/** PIOD_REHLSR_P14 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P14		(1 << 14)
/** PIOD_REHLSR_P13 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P13		(1 << 13)
/** PIOD_REHLSR_P12 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P12		(1 << 12)
/** PIOD_REHLSR_P11 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P11		(1 << 11)
/** PIOD_REHLSR_P10 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P10		(1 << 10)
/** PIOD_REHLSR_P9 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P9		(1 << 9)
/** PIOD_REHLSR_P8 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P8		(1 << 8)
/** PIOD_REHLSR_P7 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P7		(1 << 7)
/** PIOD_REHLSR_P6 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P6		(1 << 6)
/** PIOD_REHLSR_P5 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P5		(1 << 5)
/** PIOD_REHLSR_P4 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P4		(1 << 4)
/** PIOD_REHLSR_P3 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P3		(1 << 3)
/** PIOD_REHLSR_P2 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P2		(1 << 2)
/** PIOD_REHLSR_P1 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P1		(1 << 1)
/** PIOD_REHLSR_P0 Rising Edge /High Level Interrupt Selection. **/
#define PIOD_REHLSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_frlhsr FRLHSR Fall/Rise - Low/High Status Register
@{*/

/** PIOD_FRLHSR_P31 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P31		(1 << 31)
/** PIOD_FRLHSR_P30 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P30		(1 << 30)
/** PIOD_FRLHSR_P29 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P29		(1 << 29)
/** PIOD_FRLHSR_P28 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P28		(1 << 28)
/** PIOD_FRLHSR_P27 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P27		(1 << 27)
/** PIOD_FRLHSR_P26 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P26		(1 << 26)
/** PIOD_FRLHSR_P25 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P25		(1 << 25)
/** PIOD_FRLHSR_P24 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P24		(1 << 24)
/** PIOD_FRLHSR_P23 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P23		(1 << 23)
/** PIOD_FRLHSR_P22 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P22		(1 << 22)
/** PIOD_FRLHSR_P21 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P21		(1 << 21)
/** PIOD_FRLHSR_P20 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P20		(1 << 20)
/** PIOD_FRLHSR_P19 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P19		(1 << 19)
/** PIOD_FRLHSR_P18 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P18		(1 << 18)
/** PIOD_FRLHSR_P17 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P17		(1 << 17)
/** PIOD_FRLHSR_P16 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P16		(1 << 16)
/** PIOD_FRLHSR_P15 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P15		(1 << 15)
/** PIOD_FRLHSR_P14 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P14		(1 << 14)
/** PIOD_FRLHSR_P13 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P13		(1 << 13)
/** PIOD_FRLHSR_P12 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P12		(1 << 12)
/** PIOD_FRLHSR_P11 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P11		(1 << 11)
/** PIOD_FRLHSR_P10 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P10		(1 << 10)
/** PIOD_FRLHSR_P9 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P9		(1 << 9)
/** PIOD_FRLHSR_P8 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P8		(1 << 8)
/** PIOD_FRLHSR_P7 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P7		(1 << 7)
/** PIOD_FRLHSR_P6 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P6		(1 << 6)
/** PIOD_FRLHSR_P5 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P5		(1 << 5)
/** PIOD_FRLHSR_P4 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P4		(1 << 4)
/** PIOD_FRLHSR_P3 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P3		(1 << 3)
/** PIOD_FRLHSR_P2 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P2		(1 << 2)
/** PIOD_FRLHSR_P1 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P1		(1 << 1)
/** PIOD_FRLHSR_P0 Edge /Level Interrupt Source Selection. **/
#define PIOD_FRLHSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_locksr LOCKSR Lock Status
@{*/

/** PIOD_LOCKSR_P31 Lock Status. **/
#define PIOD_LOCKSR_P31		(1 << 31)
/** PIOD_LOCKSR_P30 Lock Status. **/
#define PIOD_LOCKSR_P30		(1 << 30)
/** PIOD_LOCKSR_P29 Lock Status. **/
#define PIOD_LOCKSR_P29		(1 << 29)
/** PIOD_LOCKSR_P28 Lock Status. **/
#define PIOD_LOCKSR_P28		(1 << 28)
/** PIOD_LOCKSR_P27 Lock Status. **/
#define PIOD_LOCKSR_P27		(1 << 27)
/** PIOD_LOCKSR_P26 Lock Status. **/
#define PIOD_LOCKSR_P26		(1 << 26)
/** PIOD_LOCKSR_P25 Lock Status. **/
#define PIOD_LOCKSR_P25		(1 << 25)
/** PIOD_LOCKSR_P24 Lock Status. **/
#define PIOD_LOCKSR_P24		(1 << 24)
/** PIOD_LOCKSR_P23 Lock Status. **/
#define PIOD_LOCKSR_P23		(1 << 23)
/** PIOD_LOCKSR_P22 Lock Status. **/
#define PIOD_LOCKSR_P22		(1 << 22)
/** PIOD_LOCKSR_P21 Lock Status. **/
#define PIOD_LOCKSR_P21		(1 << 21)
/** PIOD_LOCKSR_P20 Lock Status. **/
#define PIOD_LOCKSR_P20		(1 << 20)
/** PIOD_LOCKSR_P19 Lock Status. **/
#define PIOD_LOCKSR_P19		(1 << 19)
/** PIOD_LOCKSR_P18 Lock Status. **/
#define PIOD_LOCKSR_P18		(1 << 18)
/** PIOD_LOCKSR_P17 Lock Status. **/
#define PIOD_LOCKSR_P17		(1 << 17)
/** PIOD_LOCKSR_P16 Lock Status. **/
#define PIOD_LOCKSR_P16		(1 << 16)
/** PIOD_LOCKSR_P15 Lock Status. **/
#define PIOD_LOCKSR_P15		(1 << 15)
/** PIOD_LOCKSR_P14 Lock Status. **/
#define PIOD_LOCKSR_P14		(1 << 14)
/** PIOD_LOCKSR_P13 Lock Status. **/
#define PIOD_LOCKSR_P13		(1 << 13)
/** PIOD_LOCKSR_P12 Lock Status. **/
#define PIOD_LOCKSR_P12		(1 << 12)
/** PIOD_LOCKSR_P11 Lock Status. **/
#define PIOD_LOCKSR_P11		(1 << 11)
/** PIOD_LOCKSR_P10 Lock Status. **/
#define PIOD_LOCKSR_P10		(1 << 10)
/** PIOD_LOCKSR_P9 Lock Status. **/
#define PIOD_LOCKSR_P9		(1 << 9)
/** PIOD_LOCKSR_P8 Lock Status. **/
#define PIOD_LOCKSR_P8		(1 << 8)
/** PIOD_LOCKSR_P7 Lock Status. **/
#define PIOD_LOCKSR_P7		(1 << 7)
/** PIOD_LOCKSR_P6 Lock Status. **/
#define PIOD_LOCKSR_P6		(1 << 6)
/** PIOD_LOCKSR_P5 Lock Status. **/
#define PIOD_LOCKSR_P5		(1 << 5)
/** PIOD_LOCKSR_P4 Lock Status. **/
#define PIOD_LOCKSR_P4		(1 << 4)
/** PIOD_LOCKSR_P3 Lock Status. **/
#define PIOD_LOCKSR_P3		(1 << 3)
/** PIOD_LOCKSR_P2 Lock Status. **/
#define PIOD_LOCKSR_P2		(1 << 2)
/** PIOD_LOCKSR_P1 Lock Status. **/
#define PIOD_LOCKSR_P1		(1 << 1)
/** PIOD_LOCKSR_P0 Lock Status. **/
#define PIOD_LOCKSR_P0		(1 << 0)

/**@}*/

/** @defgroup piod_wpmr WPMR Write Protect Mode Register
@{*/


#define PIOD_WPMR_WPKEY_SHIFT		8
#define PIOD_WPMR_WPKEY_MASK		0xffffff
/** @defgroup piod_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** PIOD_WPMR_WPEN Write Protect Enable **/
#define PIOD_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup piod_wpsr WPSR Write Protect Status Register
@{*/


#define PIOD_WPSR_WPVSRC_SHIFT		8
#define PIOD_WPSR_WPVSRC_MASK		0xffff
/** @defgroup piod_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PIOD_WPSR_WPVS Write Protect Violation Status **/
#define PIOD_WPSR_WPVS		(1 << 0)

/**@}*/

#pragma once 

/* --- PIOE: Parallel Input/Output Controller E --------------------- */

/** @defgroup pioe_registers Parallel Input/Output Controller E Register
@{*/

/** PIOE_PER PIO Enable Register **/
#define PIOE_PER			MMIO32(PIOE_BASE + 0x00)
/** PIOE_PDR PIO Disable Register **/
#define PIOE_PDR			MMIO32(PIOE_BASE + 0x04)
/** PIOE_PSR PIO Status Register **/
#define PIOE_PSR			MMIO32(PIOE_BASE + 0x08)
/** PIOE_OER Output Enable Register **/
#define PIOE_OER			MMIO32(PIOE_BASE + 0x10)
/** PIOE_ODR Output Disable Register **/
#define PIOE_ODR			MMIO32(PIOE_BASE + 0x14)
/** PIOE_OSR Output Status Register **/
#define PIOE_OSR			MMIO32(PIOE_BASE + 0x18)
/** PIOE_IFER Glitch Input Filter Enable Register **/
#define PIOE_IFER			MMIO32(PIOE_BASE + 0x20)
/** PIOE_IFDR Glitch Input Filter Disable Register **/
#define PIOE_IFDR			MMIO32(PIOE_BASE + 0x24)
/** PIOE_IFSR Glitch Input Filter Status Register **/
#define PIOE_IFSR			MMIO32(PIOE_BASE + 0x28)
/** PIOE_SODR Set Output Data Register **/
#define PIOE_SODR			MMIO32(PIOE_BASE + 0x30)
/** PIOE_CODR Clear Output Data Register **/
#define PIOE_CODR			MMIO32(PIOE_BASE + 0x34)
/** PIOE_ODSR Output Data Status Register **/
#define PIOE_ODSR			MMIO32(PIOE_BASE + 0x38)
/** PIOE_PDSR Pin Data Status Register **/
#define PIOE_PDSR			MMIO32(PIOE_BASE + 0x3c)
/** PIOE_IER Interrupt Enable Register **/
#define PIOE_IER			MMIO32(PIOE_BASE + 0x40)
/** PIOE_IDR Interrupt Disable Register **/
#define PIOE_IDR			MMIO32(PIOE_BASE + 0x44)
/** PIOE_IMR Interrupt Mask Register **/
#define PIOE_IMR			MMIO32(PIOE_BASE + 0x48)
/** PIOE_ISR Interrupt Status Register **/
#define PIOE_ISR			MMIO32(PIOE_BASE + 0x4c)
/** PIOE_MDER Multi-driver Enable Register **/
#define PIOE_MDER			MMIO32(PIOE_BASE + 0x50)
/** PIOE_MDDR Multi-driver Disable Register **/
#define PIOE_MDDR			MMIO32(PIOE_BASE + 0x54)
/** PIOE_MDSR Multi-driver Status Register **/
#define PIOE_MDSR			MMIO32(PIOE_BASE + 0x58)
/** PIOE_PUDR Pull-up Disable Register **/
#define PIOE_PUDR			MMIO32(PIOE_BASE + 0x60)
/** PIOE_PUER Pull-up Enable Register **/
#define PIOE_PUER			MMIO32(PIOE_BASE + 0x64)
/** PIOE_PUSR Pad Pull-up Status Register **/
#define PIOE_PUSR			MMIO32(PIOE_BASE + 0x68)
/** PIOE_ABSR Peripheral AB Select Register **/
#define PIOE_ABSR			MMIO32(PIOE_BASE + 0x70)
/** PIOE_SCIFSR System Clock Glitch Input Filter Select Register **/
#define PIOE_SCIFSR			MMIO32(PIOE_BASE + 0x80)
/** PIOE_DIFSR Debouncing Input Filter Select Register **/
#define PIOE_DIFSR			MMIO32(PIOE_BASE + 0x84)
/** PIOE_IFDGSR Glitch or Debouncing Input Filter Clock Selection Status Register **/
#define PIOE_IFDGSR			MMIO32(PIOE_BASE + 0x88)
/** PIOE_SCDR Slow Clock Divider Debouncing Register **/
#define PIOE_SCDR			MMIO32(PIOE_BASE + 0x8c)
/** PIOE_OWER Output Write Enable **/
#define PIOE_OWER			MMIO32(PIOE_BASE + 0xa0)
/** PIOE_OWDR Output Write Disable **/
#define PIOE_OWDR			MMIO32(PIOE_BASE + 0xa4)
/** PIOE_OWSR Output Write Status Register **/
#define PIOE_OWSR			MMIO32(PIOE_BASE + 0xa8)
/** PIOE_AIMER Additional Interrupt Modes Enable Register **/
#define PIOE_AIMER			MMIO32(PIOE_BASE + 0xb0)
/** PIOE_AIMDR Additional Interrupt Modes Disables Register **/
#define PIOE_AIMDR			MMIO32(PIOE_BASE + 0xb4)
/** PIOE_AIMMR Additional Interrupt Modes Mask Register **/
#define PIOE_AIMMR			MMIO32(PIOE_BASE + 0xb8)
/** PIOE_ESR Edge Select Register **/
#define PIOE_ESR			MMIO32(PIOE_BASE + 0xc0)
/** PIOE_LSR Level Select Register **/
#define PIOE_LSR			MMIO32(PIOE_BASE + 0xc4)
/** PIOE_ELSR Edge/Level Status Register **/
#define PIOE_ELSR			MMIO32(PIOE_BASE + 0xc8)
/** PIOE_FELLSR Falling Edge/Low Level Select Register **/
#define PIOE_FELLSR			MMIO32(PIOE_BASE + 0xd0)
/** PIOE_REHLSR Rising Edge/ High Level Select Register **/
#define PIOE_REHLSR			MMIO32(PIOE_BASE + 0xd4)
/** PIOE_FRLHSR Fall/Rise - Low/High Status Register **/
#define PIOE_FRLHSR			MMIO32(PIOE_BASE + 0xd8)
/** PIOE_LOCKSR Lock Status **/
#define PIOE_LOCKSR			MMIO32(PIOE_BASE + 0xe0)
/** PIOE_WPMR Write Protect Mode Register **/
#define PIOE_WPMR			MMIO32(PIOE_BASE + 0xe4)
/** PIOE_WPSR Write Protect Status Register **/
#define PIOE_WPSR			MMIO32(PIOE_BASE + 0xe8)

/**@}*/


/** @defgroup pioe_per PER PIO Enable Register
@{*/

/** PIOE_PER_P31 PIO Enable **/
#define PIOE_PER_P31		(1 << 31)
/** PIOE_PER_P30 PIO Enable **/
#define PIOE_PER_P30		(1 << 30)
/** PIOE_PER_P29 PIO Enable **/
#define PIOE_PER_P29		(1 << 29)
/** PIOE_PER_P28 PIO Enable **/
#define PIOE_PER_P28		(1 << 28)
/** PIOE_PER_P27 PIO Enable **/
#define PIOE_PER_P27		(1 << 27)
/** PIOE_PER_P26 PIO Enable **/
#define PIOE_PER_P26		(1 << 26)
/** PIOE_PER_P25 PIO Enable **/
#define PIOE_PER_P25		(1 << 25)
/** PIOE_PER_P24 PIO Enable **/
#define PIOE_PER_P24		(1 << 24)
/** PIOE_PER_P23 PIO Enable **/
#define PIOE_PER_P23		(1 << 23)
/** PIOE_PER_P22 PIO Enable **/
#define PIOE_PER_P22		(1 << 22)
/** PIOE_PER_P21 PIO Enable **/
#define PIOE_PER_P21		(1 << 21)
/** PIOE_PER_P20 PIO Enable **/
#define PIOE_PER_P20		(1 << 20)
/** PIOE_PER_P19 PIO Enable **/
#define PIOE_PER_P19		(1 << 19)
/** PIOE_PER_P18 PIO Enable **/
#define PIOE_PER_P18		(1 << 18)
/** PIOE_PER_P17 PIO Enable **/
#define PIOE_PER_P17		(1 << 17)
/** PIOE_PER_P16 PIO Enable **/
#define PIOE_PER_P16		(1 << 16)
/** PIOE_PER_P15 PIO Enable **/
#define PIOE_PER_P15		(1 << 15)
/** PIOE_PER_P14 PIO Enable **/
#define PIOE_PER_P14		(1 << 14)
/** PIOE_PER_P13 PIO Enable **/
#define PIOE_PER_P13		(1 << 13)
/** PIOE_PER_P12 PIO Enable **/
#define PIOE_PER_P12		(1 << 12)
/** PIOE_PER_P11 PIO Enable **/
#define PIOE_PER_P11		(1 << 11)
/** PIOE_PER_P10 PIO Enable **/
#define PIOE_PER_P10		(1 << 10)
/** PIOE_PER_P9 PIO Enable **/
#define PIOE_PER_P9		(1 << 9)
/** PIOE_PER_P8 PIO Enable **/
#define PIOE_PER_P8		(1 << 8)
/** PIOE_PER_P7 PIO Enable **/
#define PIOE_PER_P7		(1 << 7)
/** PIOE_PER_P6 PIO Enable **/
#define PIOE_PER_P6		(1 << 6)
/** PIOE_PER_P5 PIO Enable **/
#define PIOE_PER_P5		(1 << 5)
/** PIOE_PER_P4 PIO Enable **/
#define PIOE_PER_P4		(1 << 4)
/** PIOE_PER_P3 PIO Enable **/
#define PIOE_PER_P3		(1 << 3)
/** PIOE_PER_P2 PIO Enable **/
#define PIOE_PER_P2		(1 << 2)
/** PIOE_PER_P1 PIO Enable **/
#define PIOE_PER_P1		(1 << 1)
/** PIOE_PER_P0 PIO Enable **/
#define PIOE_PER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_pdr PDR PIO Disable Register
@{*/

/** PIOE_PDR_P31 PIO Disable **/
#define PIOE_PDR_P31		(1 << 31)
/** PIOE_PDR_P30 PIO Disable **/
#define PIOE_PDR_P30		(1 << 30)
/** PIOE_PDR_P29 PIO Disable **/
#define PIOE_PDR_P29		(1 << 29)
/** PIOE_PDR_P28 PIO Disable **/
#define PIOE_PDR_P28		(1 << 28)
/** PIOE_PDR_P27 PIO Disable **/
#define PIOE_PDR_P27		(1 << 27)
/** PIOE_PDR_P26 PIO Disable **/
#define PIOE_PDR_P26		(1 << 26)
/** PIOE_PDR_P25 PIO Disable **/
#define PIOE_PDR_P25		(1 << 25)
/** PIOE_PDR_P24 PIO Disable **/
#define PIOE_PDR_P24		(1 << 24)
/** PIOE_PDR_P23 PIO Disable **/
#define PIOE_PDR_P23		(1 << 23)
/** PIOE_PDR_P22 PIO Disable **/
#define PIOE_PDR_P22		(1 << 22)
/** PIOE_PDR_P21 PIO Disable **/
#define PIOE_PDR_P21		(1 << 21)
/** PIOE_PDR_P20 PIO Disable **/
#define PIOE_PDR_P20		(1 << 20)
/** PIOE_PDR_P19 PIO Disable **/
#define PIOE_PDR_P19		(1 << 19)
/** PIOE_PDR_P18 PIO Disable **/
#define PIOE_PDR_P18		(1 << 18)
/** PIOE_PDR_P17 PIO Disable **/
#define PIOE_PDR_P17		(1 << 17)
/** PIOE_PDR_P16 PIO Disable **/
#define PIOE_PDR_P16		(1 << 16)
/** PIOE_PDR_P15 PIO Disable **/
#define PIOE_PDR_P15		(1 << 15)
/** PIOE_PDR_P14 PIO Disable **/
#define PIOE_PDR_P14		(1 << 14)
/** PIOE_PDR_P13 PIO Disable **/
#define PIOE_PDR_P13		(1 << 13)
/** PIOE_PDR_P12 PIO Disable **/
#define PIOE_PDR_P12		(1 << 12)
/** PIOE_PDR_P11 PIO Disable **/
#define PIOE_PDR_P11		(1 << 11)
/** PIOE_PDR_P10 PIO Disable **/
#define PIOE_PDR_P10		(1 << 10)
/** PIOE_PDR_P9 PIO Disable **/
#define PIOE_PDR_P9		(1 << 9)
/** PIOE_PDR_P8 PIO Disable **/
#define PIOE_PDR_P8		(1 << 8)
/** PIOE_PDR_P7 PIO Disable **/
#define PIOE_PDR_P7		(1 << 7)
/** PIOE_PDR_P6 PIO Disable **/
#define PIOE_PDR_P6		(1 << 6)
/** PIOE_PDR_P5 PIO Disable **/
#define PIOE_PDR_P5		(1 << 5)
/** PIOE_PDR_P4 PIO Disable **/
#define PIOE_PDR_P4		(1 << 4)
/** PIOE_PDR_P3 PIO Disable **/
#define PIOE_PDR_P3		(1 << 3)
/** PIOE_PDR_P2 PIO Disable **/
#define PIOE_PDR_P2		(1 << 2)
/** PIOE_PDR_P1 PIO Disable **/
#define PIOE_PDR_P1		(1 << 1)
/** PIOE_PDR_P0 PIO Disable **/
#define PIOE_PDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_psr PSR PIO Status Register
@{*/

/** PIOE_PSR_P31 PIO Status **/
#define PIOE_PSR_P31		(1 << 31)
/** PIOE_PSR_P30 PIO Status **/
#define PIOE_PSR_P30		(1 << 30)
/** PIOE_PSR_P29 PIO Status **/
#define PIOE_PSR_P29		(1 << 29)
/** PIOE_PSR_P28 PIO Status **/
#define PIOE_PSR_P28		(1 << 28)
/** PIOE_PSR_P27 PIO Status **/
#define PIOE_PSR_P27		(1 << 27)
/** PIOE_PSR_P26 PIO Status **/
#define PIOE_PSR_P26		(1 << 26)
/** PIOE_PSR_P25 PIO Status **/
#define PIOE_PSR_P25		(1 << 25)
/** PIOE_PSR_P24 PIO Status **/
#define PIOE_PSR_P24		(1 << 24)
/** PIOE_PSR_P23 PIO Status **/
#define PIOE_PSR_P23		(1 << 23)
/** PIOE_PSR_P22 PIO Status **/
#define PIOE_PSR_P22		(1 << 22)
/** PIOE_PSR_P21 PIO Status **/
#define PIOE_PSR_P21		(1 << 21)
/** PIOE_PSR_P20 PIO Status **/
#define PIOE_PSR_P20		(1 << 20)
/** PIOE_PSR_P19 PIO Status **/
#define PIOE_PSR_P19		(1 << 19)
/** PIOE_PSR_P18 PIO Status **/
#define PIOE_PSR_P18		(1 << 18)
/** PIOE_PSR_P17 PIO Status **/
#define PIOE_PSR_P17		(1 << 17)
/** PIOE_PSR_P16 PIO Status **/
#define PIOE_PSR_P16		(1 << 16)
/** PIOE_PSR_P15 PIO Status **/
#define PIOE_PSR_P15		(1 << 15)
/** PIOE_PSR_P14 PIO Status **/
#define PIOE_PSR_P14		(1 << 14)
/** PIOE_PSR_P13 PIO Status **/
#define PIOE_PSR_P13		(1 << 13)
/** PIOE_PSR_P12 PIO Status **/
#define PIOE_PSR_P12		(1 << 12)
/** PIOE_PSR_P11 PIO Status **/
#define PIOE_PSR_P11		(1 << 11)
/** PIOE_PSR_P10 PIO Status **/
#define PIOE_PSR_P10		(1 << 10)
/** PIOE_PSR_P9 PIO Status **/
#define PIOE_PSR_P9		(1 << 9)
/** PIOE_PSR_P8 PIO Status **/
#define PIOE_PSR_P8		(1 << 8)
/** PIOE_PSR_P7 PIO Status **/
#define PIOE_PSR_P7		(1 << 7)
/** PIOE_PSR_P6 PIO Status **/
#define PIOE_PSR_P6		(1 << 6)
/** PIOE_PSR_P5 PIO Status **/
#define PIOE_PSR_P5		(1 << 5)
/** PIOE_PSR_P4 PIO Status **/
#define PIOE_PSR_P4		(1 << 4)
/** PIOE_PSR_P3 PIO Status **/
#define PIOE_PSR_P3		(1 << 3)
/** PIOE_PSR_P2 PIO Status **/
#define PIOE_PSR_P2		(1 << 2)
/** PIOE_PSR_P1 PIO Status **/
#define PIOE_PSR_P1		(1 << 1)
/** PIOE_PSR_P0 PIO Status **/
#define PIOE_PSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_oer OER Output Enable Register
@{*/

/** PIOE_OER_P31 Output Enable **/
#define PIOE_OER_P31		(1 << 31)
/** PIOE_OER_P30 Output Enable **/
#define PIOE_OER_P30		(1 << 30)
/** PIOE_OER_P29 Output Enable **/
#define PIOE_OER_P29		(1 << 29)
/** PIOE_OER_P28 Output Enable **/
#define PIOE_OER_P28		(1 << 28)
/** PIOE_OER_P27 Output Enable **/
#define PIOE_OER_P27		(1 << 27)
/** PIOE_OER_P26 Output Enable **/
#define PIOE_OER_P26		(1 << 26)
/** PIOE_OER_P25 Output Enable **/
#define PIOE_OER_P25		(1 << 25)
/** PIOE_OER_P24 Output Enable **/
#define PIOE_OER_P24		(1 << 24)
/** PIOE_OER_P23 Output Enable **/
#define PIOE_OER_P23		(1 << 23)
/** PIOE_OER_P22 Output Enable **/
#define PIOE_OER_P22		(1 << 22)
/** PIOE_OER_P21 Output Enable **/
#define PIOE_OER_P21		(1 << 21)
/** PIOE_OER_P20 Output Enable **/
#define PIOE_OER_P20		(1 << 20)
/** PIOE_OER_P19 Output Enable **/
#define PIOE_OER_P19		(1 << 19)
/** PIOE_OER_P18 Output Enable **/
#define PIOE_OER_P18		(1 << 18)
/** PIOE_OER_P17 Output Enable **/
#define PIOE_OER_P17		(1 << 17)
/** PIOE_OER_P16 Output Enable **/
#define PIOE_OER_P16		(1 << 16)
/** PIOE_OER_P15 Output Enable **/
#define PIOE_OER_P15		(1 << 15)
/** PIOE_OER_P14 Output Enable **/
#define PIOE_OER_P14		(1 << 14)
/** PIOE_OER_P13 Output Enable **/
#define PIOE_OER_P13		(1 << 13)
/** PIOE_OER_P12 Output Enable **/
#define PIOE_OER_P12		(1 << 12)
/** PIOE_OER_P11 Output Enable **/
#define PIOE_OER_P11		(1 << 11)
/** PIOE_OER_P10 Output Enable **/
#define PIOE_OER_P10		(1 << 10)
/** PIOE_OER_P9 Output Enable **/
#define PIOE_OER_P9		(1 << 9)
/** PIOE_OER_P8 Output Enable **/
#define PIOE_OER_P8		(1 << 8)
/** PIOE_OER_P7 Output Enable **/
#define PIOE_OER_P7		(1 << 7)
/** PIOE_OER_P6 Output Enable **/
#define PIOE_OER_P6		(1 << 6)
/** PIOE_OER_P5 Output Enable **/
#define PIOE_OER_P5		(1 << 5)
/** PIOE_OER_P4 Output Enable **/
#define PIOE_OER_P4		(1 << 4)
/** PIOE_OER_P3 Output Enable **/
#define PIOE_OER_P3		(1 << 3)
/** PIOE_OER_P2 Output Enable **/
#define PIOE_OER_P2		(1 << 2)
/** PIOE_OER_P1 Output Enable **/
#define PIOE_OER_P1		(1 << 1)
/** PIOE_OER_P0 Output Enable **/
#define PIOE_OER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_odr ODR Output Disable Register
@{*/

/** PIOE_ODR_P31 Output Disable **/
#define PIOE_ODR_P31		(1 << 31)
/** PIOE_ODR_P30 Output Disable **/
#define PIOE_ODR_P30		(1 << 30)
/** PIOE_ODR_P29 Output Disable **/
#define PIOE_ODR_P29		(1 << 29)
/** PIOE_ODR_P28 Output Disable **/
#define PIOE_ODR_P28		(1 << 28)
/** PIOE_ODR_P27 Output Disable **/
#define PIOE_ODR_P27		(1 << 27)
/** PIOE_ODR_P26 Output Disable **/
#define PIOE_ODR_P26		(1 << 26)
/** PIOE_ODR_P25 Output Disable **/
#define PIOE_ODR_P25		(1 << 25)
/** PIOE_ODR_P24 Output Disable **/
#define PIOE_ODR_P24		(1 << 24)
/** PIOE_ODR_P23 Output Disable **/
#define PIOE_ODR_P23		(1 << 23)
/** PIOE_ODR_P22 Output Disable **/
#define PIOE_ODR_P22		(1 << 22)
/** PIOE_ODR_P21 Output Disable **/
#define PIOE_ODR_P21		(1 << 21)
/** PIOE_ODR_P20 Output Disable **/
#define PIOE_ODR_P20		(1 << 20)
/** PIOE_ODR_P19 Output Disable **/
#define PIOE_ODR_P19		(1 << 19)
/** PIOE_ODR_P18 Output Disable **/
#define PIOE_ODR_P18		(1 << 18)
/** PIOE_ODR_P17 Output Disable **/
#define PIOE_ODR_P17		(1 << 17)
/** PIOE_ODR_P16 Output Disable **/
#define PIOE_ODR_P16		(1 << 16)
/** PIOE_ODR_P15 Output Disable **/
#define PIOE_ODR_P15		(1 << 15)
/** PIOE_ODR_P14 Output Disable **/
#define PIOE_ODR_P14		(1 << 14)
/** PIOE_ODR_P13 Output Disable **/
#define PIOE_ODR_P13		(1 << 13)
/** PIOE_ODR_P12 Output Disable **/
#define PIOE_ODR_P12		(1 << 12)
/** PIOE_ODR_P11 Output Disable **/
#define PIOE_ODR_P11		(1 << 11)
/** PIOE_ODR_P10 Output Disable **/
#define PIOE_ODR_P10		(1 << 10)
/** PIOE_ODR_P9 Output Disable **/
#define PIOE_ODR_P9		(1 << 9)
/** PIOE_ODR_P8 Output Disable **/
#define PIOE_ODR_P8		(1 << 8)
/** PIOE_ODR_P7 Output Disable **/
#define PIOE_ODR_P7		(1 << 7)
/** PIOE_ODR_P6 Output Disable **/
#define PIOE_ODR_P6		(1 << 6)
/** PIOE_ODR_P5 Output Disable **/
#define PIOE_ODR_P5		(1 << 5)
/** PIOE_ODR_P4 Output Disable **/
#define PIOE_ODR_P4		(1 << 4)
/** PIOE_ODR_P3 Output Disable **/
#define PIOE_ODR_P3		(1 << 3)
/** PIOE_ODR_P2 Output Disable **/
#define PIOE_ODR_P2		(1 << 2)
/** PIOE_ODR_P1 Output Disable **/
#define PIOE_ODR_P1		(1 << 1)
/** PIOE_ODR_P0 Output Disable **/
#define PIOE_ODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_osr OSR Output Status Register
@{*/

/** PIOE_OSR_P31 Output Status **/
#define PIOE_OSR_P31		(1 << 31)
/** PIOE_OSR_P30 Output Status **/
#define PIOE_OSR_P30		(1 << 30)
/** PIOE_OSR_P29 Output Status **/
#define PIOE_OSR_P29		(1 << 29)
/** PIOE_OSR_P28 Output Status **/
#define PIOE_OSR_P28		(1 << 28)
/** PIOE_OSR_P27 Output Status **/
#define PIOE_OSR_P27		(1 << 27)
/** PIOE_OSR_P26 Output Status **/
#define PIOE_OSR_P26		(1 << 26)
/** PIOE_OSR_P25 Output Status **/
#define PIOE_OSR_P25		(1 << 25)
/** PIOE_OSR_P24 Output Status **/
#define PIOE_OSR_P24		(1 << 24)
/** PIOE_OSR_P23 Output Status **/
#define PIOE_OSR_P23		(1 << 23)
/** PIOE_OSR_P22 Output Status **/
#define PIOE_OSR_P22		(1 << 22)
/** PIOE_OSR_P21 Output Status **/
#define PIOE_OSR_P21		(1 << 21)
/** PIOE_OSR_P20 Output Status **/
#define PIOE_OSR_P20		(1 << 20)
/** PIOE_OSR_P19 Output Status **/
#define PIOE_OSR_P19		(1 << 19)
/** PIOE_OSR_P18 Output Status **/
#define PIOE_OSR_P18		(1 << 18)
/** PIOE_OSR_P17 Output Status **/
#define PIOE_OSR_P17		(1 << 17)
/** PIOE_OSR_P16 Output Status **/
#define PIOE_OSR_P16		(1 << 16)
/** PIOE_OSR_P15 Output Status **/
#define PIOE_OSR_P15		(1 << 15)
/** PIOE_OSR_P14 Output Status **/
#define PIOE_OSR_P14		(1 << 14)
/** PIOE_OSR_P13 Output Status **/
#define PIOE_OSR_P13		(1 << 13)
/** PIOE_OSR_P12 Output Status **/
#define PIOE_OSR_P12		(1 << 12)
/** PIOE_OSR_P11 Output Status **/
#define PIOE_OSR_P11		(1 << 11)
/** PIOE_OSR_P10 Output Status **/
#define PIOE_OSR_P10		(1 << 10)
/** PIOE_OSR_P9 Output Status **/
#define PIOE_OSR_P9		(1 << 9)
/** PIOE_OSR_P8 Output Status **/
#define PIOE_OSR_P8		(1 << 8)
/** PIOE_OSR_P7 Output Status **/
#define PIOE_OSR_P7		(1 << 7)
/** PIOE_OSR_P6 Output Status **/
#define PIOE_OSR_P6		(1 << 6)
/** PIOE_OSR_P5 Output Status **/
#define PIOE_OSR_P5		(1 << 5)
/** PIOE_OSR_P4 Output Status **/
#define PIOE_OSR_P4		(1 << 4)
/** PIOE_OSR_P3 Output Status **/
#define PIOE_OSR_P3		(1 << 3)
/** PIOE_OSR_P2 Output Status **/
#define PIOE_OSR_P2		(1 << 2)
/** PIOE_OSR_P1 Output Status **/
#define PIOE_OSR_P1		(1 << 1)
/** PIOE_OSR_P0 Output Status **/
#define PIOE_OSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_ifer IFER Glitch Input Filter Enable Register
@{*/

/** PIOE_IFER_P31 Input Filter Enable **/
#define PIOE_IFER_P31		(1 << 31)
/** PIOE_IFER_P30 Input Filter Enable **/
#define PIOE_IFER_P30		(1 << 30)
/** PIOE_IFER_P29 Input Filter Enable **/
#define PIOE_IFER_P29		(1 << 29)
/** PIOE_IFER_P28 Input Filter Enable **/
#define PIOE_IFER_P28		(1 << 28)
/** PIOE_IFER_P27 Input Filter Enable **/
#define PIOE_IFER_P27		(1 << 27)
/** PIOE_IFER_P26 Input Filter Enable **/
#define PIOE_IFER_P26		(1 << 26)
/** PIOE_IFER_P25 Input Filter Enable **/
#define PIOE_IFER_P25		(1 << 25)
/** PIOE_IFER_P24 Input Filter Enable **/
#define PIOE_IFER_P24		(1 << 24)
/** PIOE_IFER_P23 Input Filter Enable **/
#define PIOE_IFER_P23		(1 << 23)
/** PIOE_IFER_P22 Input Filter Enable **/
#define PIOE_IFER_P22		(1 << 22)
/** PIOE_IFER_P21 Input Filter Enable **/
#define PIOE_IFER_P21		(1 << 21)
/** PIOE_IFER_P20 Input Filter Enable **/
#define PIOE_IFER_P20		(1 << 20)
/** PIOE_IFER_P19 Input Filter Enable **/
#define PIOE_IFER_P19		(1 << 19)
/** PIOE_IFER_P18 Input Filter Enable **/
#define PIOE_IFER_P18		(1 << 18)
/** PIOE_IFER_P17 Input Filter Enable **/
#define PIOE_IFER_P17		(1 << 17)
/** PIOE_IFER_P16 Input Filter Enable **/
#define PIOE_IFER_P16		(1 << 16)
/** PIOE_IFER_P15 Input Filter Enable **/
#define PIOE_IFER_P15		(1 << 15)
/** PIOE_IFER_P14 Input Filter Enable **/
#define PIOE_IFER_P14		(1 << 14)
/** PIOE_IFER_P13 Input Filter Enable **/
#define PIOE_IFER_P13		(1 << 13)
/** PIOE_IFER_P12 Input Filter Enable **/
#define PIOE_IFER_P12		(1 << 12)
/** PIOE_IFER_P11 Input Filter Enable **/
#define PIOE_IFER_P11		(1 << 11)
/** PIOE_IFER_P10 Input Filter Enable **/
#define PIOE_IFER_P10		(1 << 10)
/** PIOE_IFER_P9 Input Filter Enable **/
#define PIOE_IFER_P9		(1 << 9)
/** PIOE_IFER_P8 Input Filter Enable **/
#define PIOE_IFER_P8		(1 << 8)
/** PIOE_IFER_P7 Input Filter Enable **/
#define PIOE_IFER_P7		(1 << 7)
/** PIOE_IFER_P6 Input Filter Enable **/
#define PIOE_IFER_P6		(1 << 6)
/** PIOE_IFER_P5 Input Filter Enable **/
#define PIOE_IFER_P5		(1 << 5)
/** PIOE_IFER_P4 Input Filter Enable **/
#define PIOE_IFER_P4		(1 << 4)
/** PIOE_IFER_P3 Input Filter Enable **/
#define PIOE_IFER_P3		(1 << 3)
/** PIOE_IFER_P2 Input Filter Enable **/
#define PIOE_IFER_P2		(1 << 2)
/** PIOE_IFER_P1 Input Filter Enable **/
#define PIOE_IFER_P1		(1 << 1)
/** PIOE_IFER_P0 Input Filter Enable **/
#define PIOE_IFER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_ifdr IFDR Glitch Input Filter Disable Register
@{*/

/** PIOE_IFDR_P31 Input Filter Disable **/
#define PIOE_IFDR_P31		(1 << 31)
/** PIOE_IFDR_P30 Input Filter Disable **/
#define PIOE_IFDR_P30		(1 << 30)
/** PIOE_IFDR_P29 Input Filter Disable **/
#define PIOE_IFDR_P29		(1 << 29)
/** PIOE_IFDR_P28 Input Filter Disable **/
#define PIOE_IFDR_P28		(1 << 28)
/** PIOE_IFDR_P27 Input Filter Disable **/
#define PIOE_IFDR_P27		(1 << 27)
/** PIOE_IFDR_P26 Input Filter Disable **/
#define PIOE_IFDR_P26		(1 << 26)
/** PIOE_IFDR_P25 Input Filter Disable **/
#define PIOE_IFDR_P25		(1 << 25)
/** PIOE_IFDR_P24 Input Filter Disable **/
#define PIOE_IFDR_P24		(1 << 24)
/** PIOE_IFDR_P23 Input Filter Disable **/
#define PIOE_IFDR_P23		(1 << 23)
/** PIOE_IFDR_P22 Input Filter Disable **/
#define PIOE_IFDR_P22		(1 << 22)
/** PIOE_IFDR_P21 Input Filter Disable **/
#define PIOE_IFDR_P21		(1 << 21)
/** PIOE_IFDR_P20 Input Filter Disable **/
#define PIOE_IFDR_P20		(1 << 20)
/** PIOE_IFDR_P19 Input Filter Disable **/
#define PIOE_IFDR_P19		(1 << 19)
/** PIOE_IFDR_P18 Input Filter Disable **/
#define PIOE_IFDR_P18		(1 << 18)
/** PIOE_IFDR_P17 Input Filter Disable **/
#define PIOE_IFDR_P17		(1 << 17)
/** PIOE_IFDR_P16 Input Filter Disable **/
#define PIOE_IFDR_P16		(1 << 16)
/** PIOE_IFDR_P15 Input Filter Disable **/
#define PIOE_IFDR_P15		(1 << 15)
/** PIOE_IFDR_P14 Input Filter Disable **/
#define PIOE_IFDR_P14		(1 << 14)
/** PIOE_IFDR_P13 Input Filter Disable **/
#define PIOE_IFDR_P13		(1 << 13)
/** PIOE_IFDR_P12 Input Filter Disable **/
#define PIOE_IFDR_P12		(1 << 12)
/** PIOE_IFDR_P11 Input Filter Disable **/
#define PIOE_IFDR_P11		(1 << 11)
/** PIOE_IFDR_P10 Input Filter Disable **/
#define PIOE_IFDR_P10		(1 << 10)
/** PIOE_IFDR_P9 Input Filter Disable **/
#define PIOE_IFDR_P9		(1 << 9)
/** PIOE_IFDR_P8 Input Filter Disable **/
#define PIOE_IFDR_P8		(1 << 8)
/** PIOE_IFDR_P7 Input Filter Disable **/
#define PIOE_IFDR_P7		(1 << 7)
/** PIOE_IFDR_P6 Input Filter Disable **/
#define PIOE_IFDR_P6		(1 << 6)
/** PIOE_IFDR_P5 Input Filter Disable **/
#define PIOE_IFDR_P5		(1 << 5)
/** PIOE_IFDR_P4 Input Filter Disable **/
#define PIOE_IFDR_P4		(1 << 4)
/** PIOE_IFDR_P3 Input Filter Disable **/
#define PIOE_IFDR_P3		(1 << 3)
/** PIOE_IFDR_P2 Input Filter Disable **/
#define PIOE_IFDR_P2		(1 << 2)
/** PIOE_IFDR_P1 Input Filter Disable **/
#define PIOE_IFDR_P1		(1 << 1)
/** PIOE_IFDR_P0 Input Filter Disable **/
#define PIOE_IFDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_ifsr IFSR Glitch Input Filter Status Register
@{*/

/** PIOE_IFSR_P31 Input Filer Status **/
#define PIOE_IFSR_P31		(1 << 31)
/** PIOE_IFSR_P30 Input Filer Status **/
#define PIOE_IFSR_P30		(1 << 30)
/** PIOE_IFSR_P29 Input Filer Status **/
#define PIOE_IFSR_P29		(1 << 29)
/** PIOE_IFSR_P28 Input Filer Status **/
#define PIOE_IFSR_P28		(1 << 28)
/** PIOE_IFSR_P27 Input Filer Status **/
#define PIOE_IFSR_P27		(1 << 27)
/** PIOE_IFSR_P26 Input Filer Status **/
#define PIOE_IFSR_P26		(1 << 26)
/** PIOE_IFSR_P25 Input Filer Status **/
#define PIOE_IFSR_P25		(1 << 25)
/** PIOE_IFSR_P24 Input Filer Status **/
#define PIOE_IFSR_P24		(1 << 24)
/** PIOE_IFSR_P23 Input Filer Status **/
#define PIOE_IFSR_P23		(1 << 23)
/** PIOE_IFSR_P22 Input Filer Status **/
#define PIOE_IFSR_P22		(1 << 22)
/** PIOE_IFSR_P21 Input Filer Status **/
#define PIOE_IFSR_P21		(1 << 21)
/** PIOE_IFSR_P20 Input Filer Status **/
#define PIOE_IFSR_P20		(1 << 20)
/** PIOE_IFSR_P19 Input Filer Status **/
#define PIOE_IFSR_P19		(1 << 19)
/** PIOE_IFSR_P18 Input Filer Status **/
#define PIOE_IFSR_P18		(1 << 18)
/** PIOE_IFSR_P17 Input Filer Status **/
#define PIOE_IFSR_P17		(1 << 17)
/** PIOE_IFSR_P16 Input Filer Status **/
#define PIOE_IFSR_P16		(1 << 16)
/** PIOE_IFSR_P15 Input Filer Status **/
#define PIOE_IFSR_P15		(1 << 15)
/** PIOE_IFSR_P14 Input Filer Status **/
#define PIOE_IFSR_P14		(1 << 14)
/** PIOE_IFSR_P13 Input Filer Status **/
#define PIOE_IFSR_P13		(1 << 13)
/** PIOE_IFSR_P12 Input Filer Status **/
#define PIOE_IFSR_P12		(1 << 12)
/** PIOE_IFSR_P11 Input Filer Status **/
#define PIOE_IFSR_P11		(1 << 11)
/** PIOE_IFSR_P10 Input Filer Status **/
#define PIOE_IFSR_P10		(1 << 10)
/** PIOE_IFSR_P9 Input Filer Status **/
#define PIOE_IFSR_P9		(1 << 9)
/** PIOE_IFSR_P8 Input Filer Status **/
#define PIOE_IFSR_P8		(1 << 8)
/** PIOE_IFSR_P7 Input Filer Status **/
#define PIOE_IFSR_P7		(1 << 7)
/** PIOE_IFSR_P6 Input Filer Status **/
#define PIOE_IFSR_P6		(1 << 6)
/** PIOE_IFSR_P5 Input Filer Status **/
#define PIOE_IFSR_P5		(1 << 5)
/** PIOE_IFSR_P4 Input Filer Status **/
#define PIOE_IFSR_P4		(1 << 4)
/** PIOE_IFSR_P3 Input Filer Status **/
#define PIOE_IFSR_P3		(1 << 3)
/** PIOE_IFSR_P2 Input Filer Status **/
#define PIOE_IFSR_P2		(1 << 2)
/** PIOE_IFSR_P1 Input Filer Status **/
#define PIOE_IFSR_P1		(1 << 1)
/** PIOE_IFSR_P0 Input Filer Status **/
#define PIOE_IFSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_sodr SODR Set Output Data Register
@{*/

/** PIOE_SODR_P31 Set Output Data **/
#define PIOE_SODR_P31		(1 << 31)
/** PIOE_SODR_P30 Set Output Data **/
#define PIOE_SODR_P30		(1 << 30)
/** PIOE_SODR_P29 Set Output Data **/
#define PIOE_SODR_P29		(1 << 29)
/** PIOE_SODR_P28 Set Output Data **/
#define PIOE_SODR_P28		(1 << 28)
/** PIOE_SODR_P27 Set Output Data **/
#define PIOE_SODR_P27		(1 << 27)
/** PIOE_SODR_P26 Set Output Data **/
#define PIOE_SODR_P26		(1 << 26)
/** PIOE_SODR_P25 Set Output Data **/
#define PIOE_SODR_P25		(1 << 25)
/** PIOE_SODR_P24 Set Output Data **/
#define PIOE_SODR_P24		(1 << 24)
/** PIOE_SODR_P23 Set Output Data **/
#define PIOE_SODR_P23		(1 << 23)
/** PIOE_SODR_P22 Set Output Data **/
#define PIOE_SODR_P22		(1 << 22)
/** PIOE_SODR_P21 Set Output Data **/
#define PIOE_SODR_P21		(1 << 21)
/** PIOE_SODR_P20 Set Output Data **/
#define PIOE_SODR_P20		(1 << 20)
/** PIOE_SODR_P19 Set Output Data **/
#define PIOE_SODR_P19		(1 << 19)
/** PIOE_SODR_P18 Set Output Data **/
#define PIOE_SODR_P18		(1 << 18)
/** PIOE_SODR_P17 Set Output Data **/
#define PIOE_SODR_P17		(1 << 17)
/** PIOE_SODR_P16 Set Output Data **/
#define PIOE_SODR_P16		(1 << 16)
/** PIOE_SODR_P15 Set Output Data **/
#define PIOE_SODR_P15		(1 << 15)
/** PIOE_SODR_P14 Set Output Data **/
#define PIOE_SODR_P14		(1 << 14)
/** PIOE_SODR_P13 Set Output Data **/
#define PIOE_SODR_P13		(1 << 13)
/** PIOE_SODR_P12 Set Output Data **/
#define PIOE_SODR_P12		(1 << 12)
/** PIOE_SODR_P11 Set Output Data **/
#define PIOE_SODR_P11		(1 << 11)
/** PIOE_SODR_P10 Set Output Data **/
#define PIOE_SODR_P10		(1 << 10)
/** PIOE_SODR_P9 Set Output Data **/
#define PIOE_SODR_P9		(1 << 9)
/** PIOE_SODR_P8 Set Output Data **/
#define PIOE_SODR_P8		(1 << 8)
/** PIOE_SODR_P7 Set Output Data **/
#define PIOE_SODR_P7		(1 << 7)
/** PIOE_SODR_P6 Set Output Data **/
#define PIOE_SODR_P6		(1 << 6)
/** PIOE_SODR_P5 Set Output Data **/
#define PIOE_SODR_P5		(1 << 5)
/** PIOE_SODR_P4 Set Output Data **/
#define PIOE_SODR_P4		(1 << 4)
/** PIOE_SODR_P3 Set Output Data **/
#define PIOE_SODR_P3		(1 << 3)
/** PIOE_SODR_P2 Set Output Data **/
#define PIOE_SODR_P2		(1 << 2)
/** PIOE_SODR_P1 Set Output Data **/
#define PIOE_SODR_P1		(1 << 1)
/** PIOE_SODR_P0 Set Output Data **/
#define PIOE_SODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_codr CODR Clear Output Data Register
@{*/

/** PIOE_CODR_P31 Clear Output Data **/
#define PIOE_CODR_P31		(1 << 31)
/** PIOE_CODR_P30 Clear Output Data **/
#define PIOE_CODR_P30		(1 << 30)
/** PIOE_CODR_P29 Clear Output Data **/
#define PIOE_CODR_P29		(1 << 29)
/** PIOE_CODR_P28 Clear Output Data **/
#define PIOE_CODR_P28		(1 << 28)
/** PIOE_CODR_P27 Clear Output Data **/
#define PIOE_CODR_P27		(1 << 27)
/** PIOE_CODR_P26 Clear Output Data **/
#define PIOE_CODR_P26		(1 << 26)
/** PIOE_CODR_P25 Clear Output Data **/
#define PIOE_CODR_P25		(1 << 25)
/** PIOE_CODR_P24 Clear Output Data **/
#define PIOE_CODR_P24		(1 << 24)
/** PIOE_CODR_P23 Clear Output Data **/
#define PIOE_CODR_P23		(1 << 23)
/** PIOE_CODR_P22 Clear Output Data **/
#define PIOE_CODR_P22		(1 << 22)
/** PIOE_CODR_P21 Clear Output Data **/
#define PIOE_CODR_P21		(1 << 21)
/** PIOE_CODR_P20 Clear Output Data **/
#define PIOE_CODR_P20		(1 << 20)
/** PIOE_CODR_P19 Clear Output Data **/
#define PIOE_CODR_P19		(1 << 19)
/** PIOE_CODR_P18 Clear Output Data **/
#define PIOE_CODR_P18		(1 << 18)
/** PIOE_CODR_P17 Clear Output Data **/
#define PIOE_CODR_P17		(1 << 17)
/** PIOE_CODR_P16 Clear Output Data **/
#define PIOE_CODR_P16		(1 << 16)
/** PIOE_CODR_P15 Clear Output Data **/
#define PIOE_CODR_P15		(1 << 15)
/** PIOE_CODR_P14 Clear Output Data **/
#define PIOE_CODR_P14		(1 << 14)
/** PIOE_CODR_P13 Clear Output Data **/
#define PIOE_CODR_P13		(1 << 13)
/** PIOE_CODR_P12 Clear Output Data **/
#define PIOE_CODR_P12		(1 << 12)
/** PIOE_CODR_P11 Clear Output Data **/
#define PIOE_CODR_P11		(1 << 11)
/** PIOE_CODR_P10 Clear Output Data **/
#define PIOE_CODR_P10		(1 << 10)
/** PIOE_CODR_P9 Clear Output Data **/
#define PIOE_CODR_P9		(1 << 9)
/** PIOE_CODR_P8 Clear Output Data **/
#define PIOE_CODR_P8		(1 << 8)
/** PIOE_CODR_P7 Clear Output Data **/
#define PIOE_CODR_P7		(1 << 7)
/** PIOE_CODR_P6 Clear Output Data **/
#define PIOE_CODR_P6		(1 << 6)
/** PIOE_CODR_P5 Clear Output Data **/
#define PIOE_CODR_P5		(1 << 5)
/** PIOE_CODR_P4 Clear Output Data **/
#define PIOE_CODR_P4		(1 << 4)
/** PIOE_CODR_P3 Clear Output Data **/
#define PIOE_CODR_P3		(1 << 3)
/** PIOE_CODR_P2 Clear Output Data **/
#define PIOE_CODR_P2		(1 << 2)
/** PIOE_CODR_P1 Clear Output Data **/
#define PIOE_CODR_P1		(1 << 1)
/** PIOE_CODR_P0 Clear Output Data **/
#define PIOE_CODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_odsr ODSR Output Data Status Register
@{*/

/** PIOE_ODSR_P31 Output Data Status **/
#define PIOE_ODSR_P31		(1 << 31)
/** PIOE_ODSR_P30 Output Data Status **/
#define PIOE_ODSR_P30		(1 << 30)
/** PIOE_ODSR_P29 Output Data Status **/
#define PIOE_ODSR_P29		(1 << 29)
/** PIOE_ODSR_P28 Output Data Status **/
#define PIOE_ODSR_P28		(1 << 28)
/** PIOE_ODSR_P27 Output Data Status **/
#define PIOE_ODSR_P27		(1 << 27)
/** PIOE_ODSR_P26 Output Data Status **/
#define PIOE_ODSR_P26		(1 << 26)
/** PIOE_ODSR_P25 Output Data Status **/
#define PIOE_ODSR_P25		(1 << 25)
/** PIOE_ODSR_P24 Output Data Status **/
#define PIOE_ODSR_P24		(1 << 24)
/** PIOE_ODSR_P23 Output Data Status **/
#define PIOE_ODSR_P23		(1 << 23)
/** PIOE_ODSR_P22 Output Data Status **/
#define PIOE_ODSR_P22		(1 << 22)
/** PIOE_ODSR_P21 Output Data Status **/
#define PIOE_ODSR_P21		(1 << 21)
/** PIOE_ODSR_P20 Output Data Status **/
#define PIOE_ODSR_P20		(1 << 20)
/** PIOE_ODSR_P19 Output Data Status **/
#define PIOE_ODSR_P19		(1 << 19)
/** PIOE_ODSR_P18 Output Data Status **/
#define PIOE_ODSR_P18		(1 << 18)
/** PIOE_ODSR_P17 Output Data Status **/
#define PIOE_ODSR_P17		(1 << 17)
/** PIOE_ODSR_P16 Output Data Status **/
#define PIOE_ODSR_P16		(1 << 16)
/** PIOE_ODSR_P15 Output Data Status **/
#define PIOE_ODSR_P15		(1 << 15)
/** PIOE_ODSR_P14 Output Data Status **/
#define PIOE_ODSR_P14		(1 << 14)
/** PIOE_ODSR_P13 Output Data Status **/
#define PIOE_ODSR_P13		(1 << 13)
/** PIOE_ODSR_P12 Output Data Status **/
#define PIOE_ODSR_P12		(1 << 12)
/** PIOE_ODSR_P11 Output Data Status **/
#define PIOE_ODSR_P11		(1 << 11)
/** PIOE_ODSR_P10 Output Data Status **/
#define PIOE_ODSR_P10		(1 << 10)
/** PIOE_ODSR_P9 Output Data Status **/
#define PIOE_ODSR_P9		(1 << 9)
/** PIOE_ODSR_P8 Output Data Status **/
#define PIOE_ODSR_P8		(1 << 8)
/** PIOE_ODSR_P7 Output Data Status **/
#define PIOE_ODSR_P7		(1 << 7)
/** PIOE_ODSR_P6 Output Data Status **/
#define PIOE_ODSR_P6		(1 << 6)
/** PIOE_ODSR_P5 Output Data Status **/
#define PIOE_ODSR_P5		(1 << 5)
/** PIOE_ODSR_P4 Output Data Status **/
#define PIOE_ODSR_P4		(1 << 4)
/** PIOE_ODSR_P3 Output Data Status **/
#define PIOE_ODSR_P3		(1 << 3)
/** PIOE_ODSR_P2 Output Data Status **/
#define PIOE_ODSR_P2		(1 << 2)
/** PIOE_ODSR_P1 Output Data Status **/
#define PIOE_ODSR_P1		(1 << 1)
/** PIOE_ODSR_P0 Output Data Status **/
#define PIOE_ODSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_pdsr PDSR Pin Data Status Register
@{*/

/** PIOE_PDSR_P31 Output Data Status **/
#define PIOE_PDSR_P31		(1 << 31)
/** PIOE_PDSR_P30 Output Data Status **/
#define PIOE_PDSR_P30		(1 << 30)
/** PIOE_PDSR_P29 Output Data Status **/
#define PIOE_PDSR_P29		(1 << 29)
/** PIOE_PDSR_P28 Output Data Status **/
#define PIOE_PDSR_P28		(1 << 28)
/** PIOE_PDSR_P27 Output Data Status **/
#define PIOE_PDSR_P27		(1 << 27)
/** PIOE_PDSR_P26 Output Data Status **/
#define PIOE_PDSR_P26		(1 << 26)
/** PIOE_PDSR_P25 Output Data Status **/
#define PIOE_PDSR_P25		(1 << 25)
/** PIOE_PDSR_P24 Output Data Status **/
#define PIOE_PDSR_P24		(1 << 24)
/** PIOE_PDSR_P23 Output Data Status **/
#define PIOE_PDSR_P23		(1 << 23)
/** PIOE_PDSR_P22 Output Data Status **/
#define PIOE_PDSR_P22		(1 << 22)
/** PIOE_PDSR_P21 Output Data Status **/
#define PIOE_PDSR_P21		(1 << 21)
/** PIOE_PDSR_P20 Output Data Status **/
#define PIOE_PDSR_P20		(1 << 20)
/** PIOE_PDSR_P19 Output Data Status **/
#define PIOE_PDSR_P19		(1 << 19)
/** PIOE_PDSR_P18 Output Data Status **/
#define PIOE_PDSR_P18		(1 << 18)
/** PIOE_PDSR_P17 Output Data Status **/
#define PIOE_PDSR_P17		(1 << 17)
/** PIOE_PDSR_P16 Output Data Status **/
#define PIOE_PDSR_P16		(1 << 16)
/** PIOE_PDSR_P15 Output Data Status **/
#define PIOE_PDSR_P15		(1 << 15)
/** PIOE_PDSR_P14 Output Data Status **/
#define PIOE_PDSR_P14		(1 << 14)
/** PIOE_PDSR_P13 Output Data Status **/
#define PIOE_PDSR_P13		(1 << 13)
/** PIOE_PDSR_P12 Output Data Status **/
#define PIOE_PDSR_P12		(1 << 12)
/** PIOE_PDSR_P11 Output Data Status **/
#define PIOE_PDSR_P11		(1 << 11)
/** PIOE_PDSR_P10 Output Data Status **/
#define PIOE_PDSR_P10		(1 << 10)
/** PIOE_PDSR_P9 Output Data Status **/
#define PIOE_PDSR_P9		(1 << 9)
/** PIOE_PDSR_P8 Output Data Status **/
#define PIOE_PDSR_P8		(1 << 8)
/** PIOE_PDSR_P7 Output Data Status **/
#define PIOE_PDSR_P7		(1 << 7)
/** PIOE_PDSR_P6 Output Data Status **/
#define PIOE_PDSR_P6		(1 << 6)
/** PIOE_PDSR_P5 Output Data Status **/
#define PIOE_PDSR_P5		(1 << 5)
/** PIOE_PDSR_P4 Output Data Status **/
#define PIOE_PDSR_P4		(1 << 4)
/** PIOE_PDSR_P3 Output Data Status **/
#define PIOE_PDSR_P3		(1 << 3)
/** PIOE_PDSR_P2 Output Data Status **/
#define PIOE_PDSR_P2		(1 << 2)
/** PIOE_PDSR_P1 Output Data Status **/
#define PIOE_PDSR_P1		(1 << 1)
/** PIOE_PDSR_P0 Output Data Status **/
#define PIOE_PDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_ier IER Interrupt Enable Register
@{*/

/** PIOE_IER_P31 Input Change Interrupt Enable **/
#define PIOE_IER_P31		(1 << 31)
/** PIOE_IER_P30 Input Change Interrupt Enable **/
#define PIOE_IER_P30		(1 << 30)
/** PIOE_IER_P29 Input Change Interrupt Enable **/
#define PIOE_IER_P29		(1 << 29)
/** PIOE_IER_P28 Input Change Interrupt Enable **/
#define PIOE_IER_P28		(1 << 28)
/** PIOE_IER_P27 Input Change Interrupt Enable **/
#define PIOE_IER_P27		(1 << 27)
/** PIOE_IER_P26 Input Change Interrupt Enable **/
#define PIOE_IER_P26		(1 << 26)
/** PIOE_IER_P25 Input Change Interrupt Enable **/
#define PIOE_IER_P25		(1 << 25)
/** PIOE_IER_P24 Input Change Interrupt Enable **/
#define PIOE_IER_P24		(1 << 24)
/** PIOE_IER_P23 Input Change Interrupt Enable **/
#define PIOE_IER_P23		(1 << 23)
/** PIOE_IER_P22 Input Change Interrupt Enable **/
#define PIOE_IER_P22		(1 << 22)
/** PIOE_IER_P21 Input Change Interrupt Enable **/
#define PIOE_IER_P21		(1 << 21)
/** PIOE_IER_P20 Input Change Interrupt Enable **/
#define PIOE_IER_P20		(1 << 20)
/** PIOE_IER_P19 Input Change Interrupt Enable **/
#define PIOE_IER_P19		(1 << 19)
/** PIOE_IER_P18 Input Change Interrupt Enable **/
#define PIOE_IER_P18		(1 << 18)
/** PIOE_IER_P17 Input Change Interrupt Enable **/
#define PIOE_IER_P17		(1 << 17)
/** PIOE_IER_P16 Input Change Interrupt Enable **/
#define PIOE_IER_P16		(1 << 16)
/** PIOE_IER_P15 Input Change Interrupt Enable **/
#define PIOE_IER_P15		(1 << 15)
/** PIOE_IER_P14 Input Change Interrupt Enable **/
#define PIOE_IER_P14		(1 << 14)
/** PIOE_IER_P13 Input Change Interrupt Enable **/
#define PIOE_IER_P13		(1 << 13)
/** PIOE_IER_P12 Input Change Interrupt Enable **/
#define PIOE_IER_P12		(1 << 12)
/** PIOE_IER_P11 Input Change Interrupt Enable **/
#define PIOE_IER_P11		(1 << 11)
/** PIOE_IER_P10 Input Change Interrupt Enable **/
#define PIOE_IER_P10		(1 << 10)
/** PIOE_IER_P9 Input Change Interrupt Enable **/
#define PIOE_IER_P9		(1 << 9)
/** PIOE_IER_P8 Input Change Interrupt Enable **/
#define PIOE_IER_P8		(1 << 8)
/** PIOE_IER_P7 Input Change Interrupt Enable **/
#define PIOE_IER_P7		(1 << 7)
/** PIOE_IER_P6 Input Change Interrupt Enable **/
#define PIOE_IER_P6		(1 << 6)
/** PIOE_IER_P5 Input Change Interrupt Enable **/
#define PIOE_IER_P5		(1 << 5)
/** PIOE_IER_P4 Input Change Interrupt Enable **/
#define PIOE_IER_P4		(1 << 4)
/** PIOE_IER_P3 Input Change Interrupt Enable **/
#define PIOE_IER_P3		(1 << 3)
/** PIOE_IER_P2 Input Change Interrupt Enable **/
#define PIOE_IER_P2		(1 << 2)
/** PIOE_IER_P1 Input Change Interrupt Enable **/
#define PIOE_IER_P1		(1 << 1)
/** PIOE_IER_P0 Input Change Interrupt Enable **/
#define PIOE_IER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_idr IDR Interrupt Disable Register
@{*/

/** PIOE_IDR_P31 Input Change Interrupt Disable **/
#define PIOE_IDR_P31		(1 << 31)
/** PIOE_IDR_P30 Input Change Interrupt Disable **/
#define PIOE_IDR_P30		(1 << 30)
/** PIOE_IDR_P29 Input Change Interrupt Disable **/
#define PIOE_IDR_P29		(1 << 29)
/** PIOE_IDR_P28 Input Change Interrupt Disable **/
#define PIOE_IDR_P28		(1 << 28)
/** PIOE_IDR_P27 Input Change Interrupt Disable **/
#define PIOE_IDR_P27		(1 << 27)
/** PIOE_IDR_P26 Input Change Interrupt Disable **/
#define PIOE_IDR_P26		(1 << 26)
/** PIOE_IDR_P25 Input Change Interrupt Disable **/
#define PIOE_IDR_P25		(1 << 25)
/** PIOE_IDR_P24 Input Change Interrupt Disable **/
#define PIOE_IDR_P24		(1 << 24)
/** PIOE_IDR_P23 Input Change Interrupt Disable **/
#define PIOE_IDR_P23		(1 << 23)
/** PIOE_IDR_P22 Input Change Interrupt Disable **/
#define PIOE_IDR_P22		(1 << 22)
/** PIOE_IDR_P21 Input Change Interrupt Disable **/
#define PIOE_IDR_P21		(1 << 21)
/** PIOE_IDR_P20 Input Change Interrupt Disable **/
#define PIOE_IDR_P20		(1 << 20)
/** PIOE_IDR_P19 Input Change Interrupt Disable **/
#define PIOE_IDR_P19		(1 << 19)
/** PIOE_IDR_P18 Input Change Interrupt Disable **/
#define PIOE_IDR_P18		(1 << 18)
/** PIOE_IDR_P17 Input Change Interrupt Disable **/
#define PIOE_IDR_P17		(1 << 17)
/** PIOE_IDR_P16 Input Change Interrupt Disable **/
#define PIOE_IDR_P16		(1 << 16)
/** PIOE_IDR_P15 Input Change Interrupt Disable **/
#define PIOE_IDR_P15		(1 << 15)
/** PIOE_IDR_P14 Input Change Interrupt Disable **/
#define PIOE_IDR_P14		(1 << 14)
/** PIOE_IDR_P13 Input Change Interrupt Disable **/
#define PIOE_IDR_P13		(1 << 13)
/** PIOE_IDR_P12 Input Change Interrupt Disable **/
#define PIOE_IDR_P12		(1 << 12)
/** PIOE_IDR_P11 Input Change Interrupt Disable **/
#define PIOE_IDR_P11		(1 << 11)
/** PIOE_IDR_P10 Input Change Interrupt Disable **/
#define PIOE_IDR_P10		(1 << 10)
/** PIOE_IDR_P9 Input Change Interrupt Disable **/
#define PIOE_IDR_P9		(1 << 9)
/** PIOE_IDR_P8 Input Change Interrupt Disable **/
#define PIOE_IDR_P8		(1 << 8)
/** PIOE_IDR_P7 Input Change Interrupt Disable **/
#define PIOE_IDR_P7		(1 << 7)
/** PIOE_IDR_P6 Input Change Interrupt Disable **/
#define PIOE_IDR_P6		(1 << 6)
/** PIOE_IDR_P5 Input Change Interrupt Disable **/
#define PIOE_IDR_P5		(1 << 5)
/** PIOE_IDR_P4 Input Change Interrupt Disable **/
#define PIOE_IDR_P4		(1 << 4)
/** PIOE_IDR_P3 Input Change Interrupt Disable **/
#define PIOE_IDR_P3		(1 << 3)
/** PIOE_IDR_P2 Input Change Interrupt Disable **/
#define PIOE_IDR_P2		(1 << 2)
/** PIOE_IDR_P1 Input Change Interrupt Disable **/
#define PIOE_IDR_P1		(1 << 1)
/** PIOE_IDR_P0 Input Change Interrupt Disable **/
#define PIOE_IDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_imr IMR Interrupt Mask Register
@{*/

/** PIOE_IMR_P31 Input Change Interrupt Mask **/
#define PIOE_IMR_P31		(1 << 31)
/** PIOE_IMR_P30 Input Change Interrupt Mask **/
#define PIOE_IMR_P30		(1 << 30)
/** PIOE_IMR_P29 Input Change Interrupt Mask **/
#define PIOE_IMR_P29		(1 << 29)
/** PIOE_IMR_P28 Input Change Interrupt Mask **/
#define PIOE_IMR_P28		(1 << 28)
/** PIOE_IMR_P27 Input Change Interrupt Mask **/
#define PIOE_IMR_P27		(1 << 27)
/** PIOE_IMR_P26 Input Change Interrupt Mask **/
#define PIOE_IMR_P26		(1 << 26)
/** PIOE_IMR_P25 Input Change Interrupt Mask **/
#define PIOE_IMR_P25		(1 << 25)
/** PIOE_IMR_P24 Input Change Interrupt Mask **/
#define PIOE_IMR_P24		(1 << 24)
/** PIOE_IMR_P23 Input Change Interrupt Mask **/
#define PIOE_IMR_P23		(1 << 23)
/** PIOE_IMR_P22 Input Change Interrupt Mask **/
#define PIOE_IMR_P22		(1 << 22)
/** PIOE_IMR_P21 Input Change Interrupt Mask **/
#define PIOE_IMR_P21		(1 << 21)
/** PIOE_IMR_P20 Input Change Interrupt Mask **/
#define PIOE_IMR_P20		(1 << 20)
/** PIOE_IMR_P19 Input Change Interrupt Mask **/
#define PIOE_IMR_P19		(1 << 19)
/** PIOE_IMR_P18 Input Change Interrupt Mask **/
#define PIOE_IMR_P18		(1 << 18)
/** PIOE_IMR_P17 Input Change Interrupt Mask **/
#define PIOE_IMR_P17		(1 << 17)
/** PIOE_IMR_P16 Input Change Interrupt Mask **/
#define PIOE_IMR_P16		(1 << 16)
/** PIOE_IMR_P15 Input Change Interrupt Mask **/
#define PIOE_IMR_P15		(1 << 15)
/** PIOE_IMR_P14 Input Change Interrupt Mask **/
#define PIOE_IMR_P14		(1 << 14)
/** PIOE_IMR_P13 Input Change Interrupt Mask **/
#define PIOE_IMR_P13		(1 << 13)
/** PIOE_IMR_P12 Input Change Interrupt Mask **/
#define PIOE_IMR_P12		(1 << 12)
/** PIOE_IMR_P11 Input Change Interrupt Mask **/
#define PIOE_IMR_P11		(1 << 11)
/** PIOE_IMR_P10 Input Change Interrupt Mask **/
#define PIOE_IMR_P10		(1 << 10)
/** PIOE_IMR_P9 Input Change Interrupt Mask **/
#define PIOE_IMR_P9		(1 << 9)
/** PIOE_IMR_P8 Input Change Interrupt Mask **/
#define PIOE_IMR_P8		(1 << 8)
/** PIOE_IMR_P7 Input Change Interrupt Mask **/
#define PIOE_IMR_P7		(1 << 7)
/** PIOE_IMR_P6 Input Change Interrupt Mask **/
#define PIOE_IMR_P6		(1 << 6)
/** PIOE_IMR_P5 Input Change Interrupt Mask **/
#define PIOE_IMR_P5		(1 << 5)
/** PIOE_IMR_P4 Input Change Interrupt Mask **/
#define PIOE_IMR_P4		(1 << 4)
/** PIOE_IMR_P3 Input Change Interrupt Mask **/
#define PIOE_IMR_P3		(1 << 3)
/** PIOE_IMR_P2 Input Change Interrupt Mask **/
#define PIOE_IMR_P2		(1 << 2)
/** PIOE_IMR_P1 Input Change Interrupt Mask **/
#define PIOE_IMR_P1		(1 << 1)
/** PIOE_IMR_P0 Input Change Interrupt Mask **/
#define PIOE_IMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_isr ISR Interrupt Status Register
@{*/

/** PIOE_ISR_P31 Input Change Interrupt Status **/
#define PIOE_ISR_P31		(1 << 31)
/** PIOE_ISR_P30 Input Change Interrupt Status **/
#define PIOE_ISR_P30		(1 << 30)
/** PIOE_ISR_P29 Input Change Interrupt Status **/
#define PIOE_ISR_P29		(1 << 29)
/** PIOE_ISR_P28 Input Change Interrupt Status **/
#define PIOE_ISR_P28		(1 << 28)
/** PIOE_ISR_P27 Input Change Interrupt Status **/
#define PIOE_ISR_P27		(1 << 27)
/** PIOE_ISR_P26 Input Change Interrupt Status **/
#define PIOE_ISR_P26		(1 << 26)
/** PIOE_ISR_P25 Input Change Interrupt Status **/
#define PIOE_ISR_P25		(1 << 25)
/** PIOE_ISR_P24 Input Change Interrupt Status **/
#define PIOE_ISR_P24		(1 << 24)
/** PIOE_ISR_P23 Input Change Interrupt Status **/
#define PIOE_ISR_P23		(1 << 23)
/** PIOE_ISR_P22 Input Change Interrupt Status **/
#define PIOE_ISR_P22		(1 << 22)
/** PIOE_ISR_P21 Input Change Interrupt Status **/
#define PIOE_ISR_P21		(1 << 21)
/** PIOE_ISR_P20 Input Change Interrupt Status **/
#define PIOE_ISR_P20		(1 << 20)
/** PIOE_ISR_P19 Input Change Interrupt Status **/
#define PIOE_ISR_P19		(1 << 19)
/** PIOE_ISR_P18 Input Change Interrupt Status **/
#define PIOE_ISR_P18		(1 << 18)
/** PIOE_ISR_P17 Input Change Interrupt Status **/
#define PIOE_ISR_P17		(1 << 17)
/** PIOE_ISR_P16 Input Change Interrupt Status **/
#define PIOE_ISR_P16		(1 << 16)
/** PIOE_ISR_P15 Input Change Interrupt Status **/
#define PIOE_ISR_P15		(1 << 15)
/** PIOE_ISR_P14 Input Change Interrupt Status **/
#define PIOE_ISR_P14		(1 << 14)
/** PIOE_ISR_P13 Input Change Interrupt Status **/
#define PIOE_ISR_P13		(1 << 13)
/** PIOE_ISR_P12 Input Change Interrupt Status **/
#define PIOE_ISR_P12		(1 << 12)
/** PIOE_ISR_P11 Input Change Interrupt Status **/
#define PIOE_ISR_P11		(1 << 11)
/** PIOE_ISR_P10 Input Change Interrupt Status **/
#define PIOE_ISR_P10		(1 << 10)
/** PIOE_ISR_P9 Input Change Interrupt Status **/
#define PIOE_ISR_P9		(1 << 9)
/** PIOE_ISR_P8 Input Change Interrupt Status **/
#define PIOE_ISR_P8		(1 << 8)
/** PIOE_ISR_P7 Input Change Interrupt Status **/
#define PIOE_ISR_P7		(1 << 7)
/** PIOE_ISR_P6 Input Change Interrupt Status **/
#define PIOE_ISR_P6		(1 << 6)
/** PIOE_ISR_P5 Input Change Interrupt Status **/
#define PIOE_ISR_P5		(1 << 5)
/** PIOE_ISR_P4 Input Change Interrupt Status **/
#define PIOE_ISR_P4		(1 << 4)
/** PIOE_ISR_P3 Input Change Interrupt Status **/
#define PIOE_ISR_P3		(1 << 3)
/** PIOE_ISR_P2 Input Change Interrupt Status **/
#define PIOE_ISR_P2		(1 << 2)
/** PIOE_ISR_P1 Input Change Interrupt Status **/
#define PIOE_ISR_P1		(1 << 1)
/** PIOE_ISR_P0 Input Change Interrupt Status **/
#define PIOE_ISR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_mder MDER Multi-driver Enable Register
@{*/

/** PIOE_MDER_P31 Multi Drive Enable. **/
#define PIOE_MDER_P31		(1 << 31)
/** PIOE_MDER_P30 Multi Drive Enable. **/
#define PIOE_MDER_P30		(1 << 30)
/** PIOE_MDER_P29 Multi Drive Enable. **/
#define PIOE_MDER_P29		(1 << 29)
/** PIOE_MDER_P28 Multi Drive Enable. **/
#define PIOE_MDER_P28		(1 << 28)
/** PIOE_MDER_P27 Multi Drive Enable. **/
#define PIOE_MDER_P27		(1 << 27)
/** PIOE_MDER_P26 Multi Drive Enable. **/
#define PIOE_MDER_P26		(1 << 26)
/** PIOE_MDER_P25 Multi Drive Enable. **/
#define PIOE_MDER_P25		(1 << 25)
/** PIOE_MDER_P24 Multi Drive Enable. **/
#define PIOE_MDER_P24		(1 << 24)
/** PIOE_MDER_P23 Multi Drive Enable. **/
#define PIOE_MDER_P23		(1 << 23)
/** PIOE_MDER_P22 Multi Drive Enable. **/
#define PIOE_MDER_P22		(1 << 22)
/** PIOE_MDER_P21 Multi Drive Enable. **/
#define PIOE_MDER_P21		(1 << 21)
/** PIOE_MDER_P20 Multi Drive Enable. **/
#define PIOE_MDER_P20		(1 << 20)
/** PIOE_MDER_P19 Multi Drive Enable. **/
#define PIOE_MDER_P19		(1 << 19)
/** PIOE_MDER_P18 Multi Drive Enable. **/
#define PIOE_MDER_P18		(1 << 18)
/** PIOE_MDER_P17 Multi Drive Enable. **/
#define PIOE_MDER_P17		(1 << 17)
/** PIOE_MDER_P16 Multi Drive Enable. **/
#define PIOE_MDER_P16		(1 << 16)
/** PIOE_MDER_P15 Multi Drive Enable. **/
#define PIOE_MDER_P15		(1 << 15)
/** PIOE_MDER_P14 Multi Drive Enable. **/
#define PIOE_MDER_P14		(1 << 14)
/** PIOE_MDER_P13 Multi Drive Enable. **/
#define PIOE_MDER_P13		(1 << 13)
/** PIOE_MDER_P12 Multi Drive Enable. **/
#define PIOE_MDER_P12		(1 << 12)
/** PIOE_MDER_P11 Multi Drive Enable. **/
#define PIOE_MDER_P11		(1 << 11)
/** PIOE_MDER_P10 Multi Drive Enable. **/
#define PIOE_MDER_P10		(1 << 10)
/** PIOE_MDER_P9 Multi Drive Enable. **/
#define PIOE_MDER_P9		(1 << 9)
/** PIOE_MDER_P8 Multi Drive Enable. **/
#define PIOE_MDER_P8		(1 << 8)
/** PIOE_MDER_P7 Multi Drive Enable. **/
#define PIOE_MDER_P7		(1 << 7)
/** PIOE_MDER_P6 Multi Drive Enable. **/
#define PIOE_MDER_P6		(1 << 6)
/** PIOE_MDER_P5 Multi Drive Enable. **/
#define PIOE_MDER_P5		(1 << 5)
/** PIOE_MDER_P4 Multi Drive Enable. **/
#define PIOE_MDER_P4		(1 << 4)
/** PIOE_MDER_P3 Multi Drive Enable. **/
#define PIOE_MDER_P3		(1 << 3)
/** PIOE_MDER_P2 Multi Drive Enable. **/
#define PIOE_MDER_P2		(1 << 2)
/** PIOE_MDER_P1 Multi Drive Enable. **/
#define PIOE_MDER_P1		(1 << 1)
/** PIOE_MDER_P0 Multi Drive Enable. **/
#define PIOE_MDER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_mddr MDDR Multi-driver Disable Register
@{*/

/** PIOE_MDDR_P31 Multi Drive Disable. **/
#define PIOE_MDDR_P31		(1 << 31)
/** PIOE_MDDR_P30 Multi Drive Disable. **/
#define PIOE_MDDR_P30		(1 << 30)
/** PIOE_MDDR_P29 Multi Drive Disable. **/
#define PIOE_MDDR_P29		(1 << 29)
/** PIOE_MDDR_P28 Multi Drive Disable. **/
#define PIOE_MDDR_P28		(1 << 28)
/** PIOE_MDDR_P27 Multi Drive Disable. **/
#define PIOE_MDDR_P27		(1 << 27)
/** PIOE_MDDR_P26 Multi Drive Disable. **/
#define PIOE_MDDR_P26		(1 << 26)
/** PIOE_MDDR_P25 Multi Drive Disable. **/
#define PIOE_MDDR_P25		(1 << 25)
/** PIOE_MDDR_P24 Multi Drive Disable. **/
#define PIOE_MDDR_P24		(1 << 24)
/** PIOE_MDDR_P23 Multi Drive Disable. **/
#define PIOE_MDDR_P23		(1 << 23)
/** PIOE_MDDR_P22 Multi Drive Disable. **/
#define PIOE_MDDR_P22		(1 << 22)
/** PIOE_MDDR_P21 Multi Drive Disable. **/
#define PIOE_MDDR_P21		(1 << 21)
/** PIOE_MDDR_P20 Multi Drive Disable. **/
#define PIOE_MDDR_P20		(1 << 20)
/** PIOE_MDDR_P19 Multi Drive Disable. **/
#define PIOE_MDDR_P19		(1 << 19)
/** PIOE_MDDR_P18 Multi Drive Disable. **/
#define PIOE_MDDR_P18		(1 << 18)
/** PIOE_MDDR_P17 Multi Drive Disable. **/
#define PIOE_MDDR_P17		(1 << 17)
/** PIOE_MDDR_P16 Multi Drive Disable. **/
#define PIOE_MDDR_P16		(1 << 16)
/** PIOE_MDDR_P15 Multi Drive Disable. **/
#define PIOE_MDDR_P15		(1 << 15)
/** PIOE_MDDR_P14 Multi Drive Disable. **/
#define PIOE_MDDR_P14		(1 << 14)
/** PIOE_MDDR_P13 Multi Drive Disable. **/
#define PIOE_MDDR_P13		(1 << 13)
/** PIOE_MDDR_P12 Multi Drive Disable. **/
#define PIOE_MDDR_P12		(1 << 12)
/** PIOE_MDDR_P11 Multi Drive Disable. **/
#define PIOE_MDDR_P11		(1 << 11)
/** PIOE_MDDR_P10 Multi Drive Disable. **/
#define PIOE_MDDR_P10		(1 << 10)
/** PIOE_MDDR_P9 Multi Drive Disable. **/
#define PIOE_MDDR_P9		(1 << 9)
/** PIOE_MDDR_P8 Multi Drive Disable. **/
#define PIOE_MDDR_P8		(1 << 8)
/** PIOE_MDDR_P7 Multi Drive Disable. **/
#define PIOE_MDDR_P7		(1 << 7)
/** PIOE_MDDR_P6 Multi Drive Disable. **/
#define PIOE_MDDR_P6		(1 << 6)
/** PIOE_MDDR_P5 Multi Drive Disable. **/
#define PIOE_MDDR_P5		(1 << 5)
/** PIOE_MDDR_P4 Multi Drive Disable. **/
#define PIOE_MDDR_P4		(1 << 4)
/** PIOE_MDDR_P3 Multi Drive Disable. **/
#define PIOE_MDDR_P3		(1 << 3)
/** PIOE_MDDR_P2 Multi Drive Disable. **/
#define PIOE_MDDR_P2		(1 << 2)
/** PIOE_MDDR_P1 Multi Drive Disable. **/
#define PIOE_MDDR_P1		(1 << 1)
/** PIOE_MDDR_P0 Multi Drive Disable. **/
#define PIOE_MDDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_mdsr MDSR Multi-driver Status Register
@{*/

/** PIOE_MDSR_P31 Multi Drive Status. **/
#define PIOE_MDSR_P31		(1 << 31)
/** PIOE_MDSR_P30 Multi Drive Status. **/
#define PIOE_MDSR_P30		(1 << 30)
/** PIOE_MDSR_P29 Multi Drive Status. **/
#define PIOE_MDSR_P29		(1 << 29)
/** PIOE_MDSR_P28 Multi Drive Status. **/
#define PIOE_MDSR_P28		(1 << 28)
/** PIOE_MDSR_P27 Multi Drive Status. **/
#define PIOE_MDSR_P27		(1 << 27)
/** PIOE_MDSR_P26 Multi Drive Status. **/
#define PIOE_MDSR_P26		(1 << 26)
/** PIOE_MDSR_P25 Multi Drive Status. **/
#define PIOE_MDSR_P25		(1 << 25)
/** PIOE_MDSR_P24 Multi Drive Status. **/
#define PIOE_MDSR_P24		(1 << 24)
/** PIOE_MDSR_P23 Multi Drive Status. **/
#define PIOE_MDSR_P23		(1 << 23)
/** PIOE_MDSR_P22 Multi Drive Status. **/
#define PIOE_MDSR_P22		(1 << 22)
/** PIOE_MDSR_P21 Multi Drive Status. **/
#define PIOE_MDSR_P21		(1 << 21)
/** PIOE_MDSR_P20 Multi Drive Status. **/
#define PIOE_MDSR_P20		(1 << 20)
/** PIOE_MDSR_P19 Multi Drive Status. **/
#define PIOE_MDSR_P19		(1 << 19)
/** PIOE_MDSR_P18 Multi Drive Status. **/
#define PIOE_MDSR_P18		(1 << 18)
/** PIOE_MDSR_P17 Multi Drive Status. **/
#define PIOE_MDSR_P17		(1 << 17)
/** PIOE_MDSR_P16 Multi Drive Status. **/
#define PIOE_MDSR_P16		(1 << 16)
/** PIOE_MDSR_P15 Multi Drive Status. **/
#define PIOE_MDSR_P15		(1 << 15)
/** PIOE_MDSR_P14 Multi Drive Status. **/
#define PIOE_MDSR_P14		(1 << 14)
/** PIOE_MDSR_P13 Multi Drive Status. **/
#define PIOE_MDSR_P13		(1 << 13)
/** PIOE_MDSR_P12 Multi Drive Status. **/
#define PIOE_MDSR_P12		(1 << 12)
/** PIOE_MDSR_P11 Multi Drive Status. **/
#define PIOE_MDSR_P11		(1 << 11)
/** PIOE_MDSR_P10 Multi Drive Status. **/
#define PIOE_MDSR_P10		(1 << 10)
/** PIOE_MDSR_P9 Multi Drive Status. **/
#define PIOE_MDSR_P9		(1 << 9)
/** PIOE_MDSR_P8 Multi Drive Status. **/
#define PIOE_MDSR_P8		(1 << 8)
/** PIOE_MDSR_P7 Multi Drive Status. **/
#define PIOE_MDSR_P7		(1 << 7)
/** PIOE_MDSR_P6 Multi Drive Status. **/
#define PIOE_MDSR_P6		(1 << 6)
/** PIOE_MDSR_P5 Multi Drive Status. **/
#define PIOE_MDSR_P5		(1 << 5)
/** PIOE_MDSR_P4 Multi Drive Status. **/
#define PIOE_MDSR_P4		(1 << 4)
/** PIOE_MDSR_P3 Multi Drive Status. **/
#define PIOE_MDSR_P3		(1 << 3)
/** PIOE_MDSR_P2 Multi Drive Status. **/
#define PIOE_MDSR_P2		(1 << 2)
/** PIOE_MDSR_P1 Multi Drive Status. **/
#define PIOE_MDSR_P1		(1 << 1)
/** PIOE_MDSR_P0 Multi Drive Status. **/
#define PIOE_MDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_pudr PUDR Pull-up Disable Register
@{*/

/** PIOE_PUDR_P31 Pull Up Disable. **/
#define PIOE_PUDR_P31		(1 << 31)
/** PIOE_PUDR_P30 Pull Up Disable. **/
#define PIOE_PUDR_P30		(1 << 30)
/** PIOE_PUDR_P29 Pull Up Disable. **/
#define PIOE_PUDR_P29		(1 << 29)
/** PIOE_PUDR_P28 Pull Up Disable. **/
#define PIOE_PUDR_P28		(1 << 28)
/** PIOE_PUDR_P27 Pull Up Disable. **/
#define PIOE_PUDR_P27		(1 << 27)
/** PIOE_PUDR_P26 Pull Up Disable. **/
#define PIOE_PUDR_P26		(1 << 26)
/** PIOE_PUDR_P25 Pull Up Disable. **/
#define PIOE_PUDR_P25		(1 << 25)
/** PIOE_PUDR_P24 Pull Up Disable. **/
#define PIOE_PUDR_P24		(1 << 24)
/** PIOE_PUDR_P23 Pull Up Disable. **/
#define PIOE_PUDR_P23		(1 << 23)
/** PIOE_PUDR_P22 Pull Up Disable. **/
#define PIOE_PUDR_P22		(1 << 22)
/** PIOE_PUDR_P21 Pull Up Disable. **/
#define PIOE_PUDR_P21		(1 << 21)
/** PIOE_PUDR_P20 Pull Up Disable. **/
#define PIOE_PUDR_P20		(1 << 20)
/** PIOE_PUDR_P19 Pull Up Disable. **/
#define PIOE_PUDR_P19		(1 << 19)
/** PIOE_PUDR_P18 Pull Up Disable. **/
#define PIOE_PUDR_P18		(1 << 18)
/** PIOE_PUDR_P17 Pull Up Disable. **/
#define PIOE_PUDR_P17		(1 << 17)
/** PIOE_PUDR_P16 Pull Up Disable. **/
#define PIOE_PUDR_P16		(1 << 16)
/** PIOE_PUDR_P15 Pull Up Disable. **/
#define PIOE_PUDR_P15		(1 << 15)
/** PIOE_PUDR_P14 Pull Up Disable. **/
#define PIOE_PUDR_P14		(1 << 14)
/** PIOE_PUDR_P13 Pull Up Disable. **/
#define PIOE_PUDR_P13		(1 << 13)
/** PIOE_PUDR_P12 Pull Up Disable. **/
#define PIOE_PUDR_P12		(1 << 12)
/** PIOE_PUDR_P11 Pull Up Disable. **/
#define PIOE_PUDR_P11		(1 << 11)
/** PIOE_PUDR_P10 Pull Up Disable. **/
#define PIOE_PUDR_P10		(1 << 10)
/** PIOE_PUDR_P9 Pull Up Disable. **/
#define PIOE_PUDR_P9		(1 << 9)
/** PIOE_PUDR_P8 Pull Up Disable. **/
#define PIOE_PUDR_P8		(1 << 8)
/** PIOE_PUDR_P7 Pull Up Disable. **/
#define PIOE_PUDR_P7		(1 << 7)
/** PIOE_PUDR_P6 Pull Up Disable. **/
#define PIOE_PUDR_P6		(1 << 6)
/** PIOE_PUDR_P5 Pull Up Disable. **/
#define PIOE_PUDR_P5		(1 << 5)
/** PIOE_PUDR_P4 Pull Up Disable. **/
#define PIOE_PUDR_P4		(1 << 4)
/** PIOE_PUDR_P3 Pull Up Disable. **/
#define PIOE_PUDR_P3		(1 << 3)
/** PIOE_PUDR_P2 Pull Up Disable. **/
#define PIOE_PUDR_P2		(1 << 2)
/** PIOE_PUDR_P1 Pull Up Disable. **/
#define PIOE_PUDR_P1		(1 << 1)
/** PIOE_PUDR_P0 Pull Up Disable. **/
#define PIOE_PUDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_puer PUER Pull-up Enable Register
@{*/

/** PIOE_PUER_P31 Pull Up Enable. **/
#define PIOE_PUER_P31		(1 << 31)
/** PIOE_PUER_P30 Pull Up Enable. **/
#define PIOE_PUER_P30		(1 << 30)
/** PIOE_PUER_P29 Pull Up Enable. **/
#define PIOE_PUER_P29		(1 << 29)
/** PIOE_PUER_P28 Pull Up Enable. **/
#define PIOE_PUER_P28		(1 << 28)
/** PIOE_PUER_P27 Pull Up Enable. **/
#define PIOE_PUER_P27		(1 << 27)
/** PIOE_PUER_P26 Pull Up Enable. **/
#define PIOE_PUER_P26		(1 << 26)
/** PIOE_PUER_P25 Pull Up Enable. **/
#define PIOE_PUER_P25		(1 << 25)
/** PIOE_PUER_P24 Pull Up Enable. **/
#define PIOE_PUER_P24		(1 << 24)
/** PIOE_PUER_P23 Pull Up Enable. **/
#define PIOE_PUER_P23		(1 << 23)
/** PIOE_PUER_P22 Pull Up Enable. **/
#define PIOE_PUER_P22		(1 << 22)
/** PIOE_PUER_P21 Pull Up Enable. **/
#define PIOE_PUER_P21		(1 << 21)
/** PIOE_PUER_P20 Pull Up Enable. **/
#define PIOE_PUER_P20		(1 << 20)
/** PIOE_PUER_P19 Pull Up Enable. **/
#define PIOE_PUER_P19		(1 << 19)
/** PIOE_PUER_P18 Pull Up Enable. **/
#define PIOE_PUER_P18		(1 << 18)
/** PIOE_PUER_P17 Pull Up Enable. **/
#define PIOE_PUER_P17		(1 << 17)
/** PIOE_PUER_P16 Pull Up Enable. **/
#define PIOE_PUER_P16		(1 << 16)
/** PIOE_PUER_P15 Pull Up Enable. **/
#define PIOE_PUER_P15		(1 << 15)
/** PIOE_PUER_P14 Pull Up Enable. **/
#define PIOE_PUER_P14		(1 << 14)
/** PIOE_PUER_P13 Pull Up Enable. **/
#define PIOE_PUER_P13		(1 << 13)
/** PIOE_PUER_P12 Pull Up Enable. **/
#define PIOE_PUER_P12		(1 << 12)
/** PIOE_PUER_P11 Pull Up Enable. **/
#define PIOE_PUER_P11		(1 << 11)
/** PIOE_PUER_P10 Pull Up Enable. **/
#define PIOE_PUER_P10		(1 << 10)
/** PIOE_PUER_P9 Pull Up Enable. **/
#define PIOE_PUER_P9		(1 << 9)
/** PIOE_PUER_P8 Pull Up Enable. **/
#define PIOE_PUER_P8		(1 << 8)
/** PIOE_PUER_P7 Pull Up Enable. **/
#define PIOE_PUER_P7		(1 << 7)
/** PIOE_PUER_P6 Pull Up Enable. **/
#define PIOE_PUER_P6		(1 << 6)
/** PIOE_PUER_P5 Pull Up Enable. **/
#define PIOE_PUER_P5		(1 << 5)
/** PIOE_PUER_P4 Pull Up Enable. **/
#define PIOE_PUER_P4		(1 << 4)
/** PIOE_PUER_P3 Pull Up Enable. **/
#define PIOE_PUER_P3		(1 << 3)
/** PIOE_PUER_P2 Pull Up Enable. **/
#define PIOE_PUER_P2		(1 << 2)
/** PIOE_PUER_P1 Pull Up Enable. **/
#define PIOE_PUER_P1		(1 << 1)
/** PIOE_PUER_P0 Pull Up Enable. **/
#define PIOE_PUER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_pusr PUSR Pad Pull-up Status Register
@{*/

/** PIOE_PUSR_P31 Pull Up Status. **/
#define PIOE_PUSR_P31		(1 << 31)
/** PIOE_PUSR_P30 Pull Up Status. **/
#define PIOE_PUSR_P30		(1 << 30)
/** PIOE_PUSR_P29 Pull Up Status. **/
#define PIOE_PUSR_P29		(1 << 29)
/** PIOE_PUSR_P28 Pull Up Status. **/
#define PIOE_PUSR_P28		(1 << 28)
/** PIOE_PUSR_P27 Pull Up Status. **/
#define PIOE_PUSR_P27		(1 << 27)
/** PIOE_PUSR_P26 Pull Up Status. **/
#define PIOE_PUSR_P26		(1 << 26)
/** PIOE_PUSR_P25 Pull Up Status. **/
#define PIOE_PUSR_P25		(1 << 25)
/** PIOE_PUSR_P24 Pull Up Status. **/
#define PIOE_PUSR_P24		(1 << 24)
/** PIOE_PUSR_P23 Pull Up Status. **/
#define PIOE_PUSR_P23		(1 << 23)
/** PIOE_PUSR_P22 Pull Up Status. **/
#define PIOE_PUSR_P22		(1 << 22)
/** PIOE_PUSR_P21 Pull Up Status. **/
#define PIOE_PUSR_P21		(1 << 21)
/** PIOE_PUSR_P20 Pull Up Status. **/
#define PIOE_PUSR_P20		(1 << 20)
/** PIOE_PUSR_P19 Pull Up Status. **/
#define PIOE_PUSR_P19		(1 << 19)
/** PIOE_PUSR_P18 Pull Up Status. **/
#define PIOE_PUSR_P18		(1 << 18)
/** PIOE_PUSR_P17 Pull Up Status. **/
#define PIOE_PUSR_P17		(1 << 17)
/** PIOE_PUSR_P16 Pull Up Status. **/
#define PIOE_PUSR_P16		(1 << 16)
/** PIOE_PUSR_P15 Pull Up Status. **/
#define PIOE_PUSR_P15		(1 << 15)
/** PIOE_PUSR_P14 Pull Up Status. **/
#define PIOE_PUSR_P14		(1 << 14)
/** PIOE_PUSR_P13 Pull Up Status. **/
#define PIOE_PUSR_P13		(1 << 13)
/** PIOE_PUSR_P12 Pull Up Status. **/
#define PIOE_PUSR_P12		(1 << 12)
/** PIOE_PUSR_P11 Pull Up Status. **/
#define PIOE_PUSR_P11		(1 << 11)
/** PIOE_PUSR_P10 Pull Up Status. **/
#define PIOE_PUSR_P10		(1 << 10)
/** PIOE_PUSR_P9 Pull Up Status. **/
#define PIOE_PUSR_P9		(1 << 9)
/** PIOE_PUSR_P8 Pull Up Status. **/
#define PIOE_PUSR_P8		(1 << 8)
/** PIOE_PUSR_P7 Pull Up Status. **/
#define PIOE_PUSR_P7		(1 << 7)
/** PIOE_PUSR_P6 Pull Up Status. **/
#define PIOE_PUSR_P6		(1 << 6)
/** PIOE_PUSR_P5 Pull Up Status. **/
#define PIOE_PUSR_P5		(1 << 5)
/** PIOE_PUSR_P4 Pull Up Status. **/
#define PIOE_PUSR_P4		(1 << 4)
/** PIOE_PUSR_P3 Pull Up Status. **/
#define PIOE_PUSR_P3		(1 << 3)
/** PIOE_PUSR_P2 Pull Up Status. **/
#define PIOE_PUSR_P2		(1 << 2)
/** PIOE_PUSR_P1 Pull Up Status. **/
#define PIOE_PUSR_P1		(1 << 1)
/** PIOE_PUSR_P0 Pull Up Status. **/
#define PIOE_PUSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_absr ABSR Peripheral AB Select Register
@{*/

/** PIOE_ABSR_P31 Peripheral A Select. **/
#define PIOE_ABSR_P31		(1 << 31)
/** PIOE_ABSR_P30 Peripheral A Select. **/
#define PIOE_ABSR_P30		(1 << 30)
/** PIOE_ABSR_P29 Peripheral A Select. **/
#define PIOE_ABSR_P29		(1 << 29)
/** PIOE_ABSR_P28 Peripheral A Select. **/
#define PIOE_ABSR_P28		(1 << 28)
/** PIOE_ABSR_P27 Peripheral A Select. **/
#define PIOE_ABSR_P27		(1 << 27)
/** PIOE_ABSR_P26 Peripheral A Select. **/
#define PIOE_ABSR_P26		(1 << 26)
/** PIOE_ABSR_P25 Peripheral A Select. **/
#define PIOE_ABSR_P25		(1 << 25)
/** PIOE_ABSR_P24 Peripheral A Select. **/
#define PIOE_ABSR_P24		(1 << 24)
/** PIOE_ABSR_P23 Peripheral A Select. **/
#define PIOE_ABSR_P23		(1 << 23)
/** PIOE_ABSR_P22 Peripheral A Select. **/
#define PIOE_ABSR_P22		(1 << 22)
/** PIOE_ABSR_P21 Peripheral A Select. **/
#define PIOE_ABSR_P21		(1 << 21)
/** PIOE_ABSR_P20 Peripheral A Select. **/
#define PIOE_ABSR_P20		(1 << 20)
/** PIOE_ABSR_P19 Peripheral A Select. **/
#define PIOE_ABSR_P19		(1 << 19)
/** PIOE_ABSR_P18 Peripheral A Select. **/
#define PIOE_ABSR_P18		(1 << 18)
/** PIOE_ABSR_P17 Peripheral A Select. **/
#define PIOE_ABSR_P17		(1 << 17)
/** PIOE_ABSR_P16 Peripheral A Select. **/
#define PIOE_ABSR_P16		(1 << 16)
/** PIOE_ABSR_P15 Peripheral A Select. **/
#define PIOE_ABSR_P15		(1 << 15)
/** PIOE_ABSR_P14 Peripheral A Select. **/
#define PIOE_ABSR_P14		(1 << 14)
/** PIOE_ABSR_P13 Peripheral A Select. **/
#define PIOE_ABSR_P13		(1 << 13)
/** PIOE_ABSR_P12 Peripheral A Select. **/
#define PIOE_ABSR_P12		(1 << 12)
/** PIOE_ABSR_P11 Peripheral A Select. **/
#define PIOE_ABSR_P11		(1 << 11)
/** PIOE_ABSR_P10 Peripheral A Select. **/
#define PIOE_ABSR_P10		(1 << 10)
/** PIOE_ABSR_P9 Peripheral A Select. **/
#define PIOE_ABSR_P9		(1 << 9)
/** PIOE_ABSR_P8 Peripheral A Select. **/
#define PIOE_ABSR_P8		(1 << 8)
/** PIOE_ABSR_P7 Peripheral A Select. **/
#define PIOE_ABSR_P7		(1 << 7)
/** PIOE_ABSR_P6 Peripheral A Select. **/
#define PIOE_ABSR_P6		(1 << 6)
/** PIOE_ABSR_P5 Peripheral A Select. **/
#define PIOE_ABSR_P5		(1 << 5)
/** PIOE_ABSR_P4 Peripheral A Select. **/
#define PIOE_ABSR_P4		(1 << 4)
/** PIOE_ABSR_P3 Peripheral A Select. **/
#define PIOE_ABSR_P3		(1 << 3)
/** PIOE_ABSR_P2 Peripheral A Select. **/
#define PIOE_ABSR_P2		(1 << 2)
/** PIOE_ABSR_P1 Peripheral A Select. **/
#define PIOE_ABSR_P1		(1 << 1)
/** PIOE_ABSR_P0 Peripheral A Select. **/
#define PIOE_ABSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_scifsr SCIFSR System Clock Glitch Input Filter Select Register
@{*/

/** PIOE_SCIFSR_P31 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P31		(1 << 31)
/** PIOE_SCIFSR_P30 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P30		(1 << 30)
/** PIOE_SCIFSR_P29 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P29		(1 << 29)
/** PIOE_SCIFSR_P28 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P28		(1 << 28)
/** PIOE_SCIFSR_P27 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P27		(1 << 27)
/** PIOE_SCIFSR_P26 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P26		(1 << 26)
/** PIOE_SCIFSR_P25 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P25		(1 << 25)
/** PIOE_SCIFSR_P24 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P24		(1 << 24)
/** PIOE_SCIFSR_P23 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P23		(1 << 23)
/** PIOE_SCIFSR_P22 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P22		(1 << 22)
/** PIOE_SCIFSR_P21 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P21		(1 << 21)
/** PIOE_SCIFSR_P20 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P20		(1 << 20)
/** PIOE_SCIFSR_P19 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P19		(1 << 19)
/** PIOE_SCIFSR_P18 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P18		(1 << 18)
/** PIOE_SCIFSR_P17 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P17		(1 << 17)
/** PIOE_SCIFSR_P16 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P16		(1 << 16)
/** PIOE_SCIFSR_P15 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P15		(1 << 15)
/** PIOE_SCIFSR_P14 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P14		(1 << 14)
/** PIOE_SCIFSR_P13 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P13		(1 << 13)
/** PIOE_SCIFSR_P12 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P12		(1 << 12)
/** PIOE_SCIFSR_P11 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P11		(1 << 11)
/** PIOE_SCIFSR_P10 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P10		(1 << 10)
/** PIOE_SCIFSR_P9 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P9		(1 << 9)
/** PIOE_SCIFSR_P8 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P8		(1 << 8)
/** PIOE_SCIFSR_P7 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P7		(1 << 7)
/** PIOE_SCIFSR_P6 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P6		(1 << 6)
/** PIOE_SCIFSR_P5 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P5		(1 << 5)
/** PIOE_SCIFSR_P4 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P4		(1 << 4)
/** PIOE_SCIFSR_P3 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P3		(1 << 3)
/** PIOE_SCIFSR_P2 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P2		(1 << 2)
/** PIOE_SCIFSR_P1 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P1		(1 << 1)
/** PIOE_SCIFSR_P0 System Clock Glitch Filtering Select. **/
#define PIOE_SCIFSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_difsr DIFSR Debouncing Input Filter Select Register
@{*/

/** PIOE_DIFSR_P31 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P31		(1 << 31)
/** PIOE_DIFSR_P30 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P30		(1 << 30)
/** PIOE_DIFSR_P29 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P29		(1 << 29)
/** PIOE_DIFSR_P28 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P28		(1 << 28)
/** PIOE_DIFSR_P27 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P27		(1 << 27)
/** PIOE_DIFSR_P26 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P26		(1 << 26)
/** PIOE_DIFSR_P25 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P25		(1 << 25)
/** PIOE_DIFSR_P24 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P24		(1 << 24)
/** PIOE_DIFSR_P23 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P23		(1 << 23)
/** PIOE_DIFSR_P22 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P22		(1 << 22)
/** PIOE_DIFSR_P21 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P21		(1 << 21)
/** PIOE_DIFSR_P20 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P20		(1 << 20)
/** PIOE_DIFSR_P19 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P19		(1 << 19)
/** PIOE_DIFSR_P18 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P18		(1 << 18)
/** PIOE_DIFSR_P17 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P17		(1 << 17)
/** PIOE_DIFSR_P16 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P16		(1 << 16)
/** PIOE_DIFSR_P15 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P15		(1 << 15)
/** PIOE_DIFSR_P14 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P14		(1 << 14)
/** PIOE_DIFSR_P13 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P13		(1 << 13)
/** PIOE_DIFSR_P12 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P12		(1 << 12)
/** PIOE_DIFSR_P11 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P11		(1 << 11)
/** PIOE_DIFSR_P10 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P10		(1 << 10)
/** PIOE_DIFSR_P9 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P9		(1 << 9)
/** PIOE_DIFSR_P8 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P8		(1 << 8)
/** PIOE_DIFSR_P7 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P7		(1 << 7)
/** PIOE_DIFSR_P6 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P6		(1 << 6)
/** PIOE_DIFSR_P5 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P5		(1 << 5)
/** PIOE_DIFSR_P4 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P4		(1 << 4)
/** PIOE_DIFSR_P3 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P3		(1 << 3)
/** PIOE_DIFSR_P2 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P2		(1 << 2)
/** PIOE_DIFSR_P1 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P1		(1 << 1)
/** PIOE_DIFSR_P0 Debouncing Filtering Select. **/
#define PIOE_DIFSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_ifdgsr IFDGSR Glitch or Debouncing Input Filter Clock Selection Status Register
@{*/

/** PIOE_IFDGSR_P31 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P31		(1 << 31)
/** PIOE_IFDGSR_P30 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P30		(1 << 30)
/** PIOE_IFDGSR_P29 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P29		(1 << 29)
/** PIOE_IFDGSR_P28 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P28		(1 << 28)
/** PIOE_IFDGSR_P27 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P27		(1 << 27)
/** PIOE_IFDGSR_P26 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P26		(1 << 26)
/** PIOE_IFDGSR_P25 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P25		(1 << 25)
/** PIOE_IFDGSR_P24 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P24		(1 << 24)
/** PIOE_IFDGSR_P23 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P23		(1 << 23)
/** PIOE_IFDGSR_P22 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P22		(1 << 22)
/** PIOE_IFDGSR_P21 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P21		(1 << 21)
/** PIOE_IFDGSR_P20 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P20		(1 << 20)
/** PIOE_IFDGSR_P19 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P19		(1 << 19)
/** PIOE_IFDGSR_P18 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P18		(1 << 18)
/** PIOE_IFDGSR_P17 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P17		(1 << 17)
/** PIOE_IFDGSR_P16 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P16		(1 << 16)
/** PIOE_IFDGSR_P15 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P15		(1 << 15)
/** PIOE_IFDGSR_P14 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P14		(1 << 14)
/** PIOE_IFDGSR_P13 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P13		(1 << 13)
/** PIOE_IFDGSR_P12 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P12		(1 << 12)
/** PIOE_IFDGSR_P11 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P11		(1 << 11)
/** PIOE_IFDGSR_P10 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P10		(1 << 10)
/** PIOE_IFDGSR_P9 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P9		(1 << 9)
/** PIOE_IFDGSR_P8 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P8		(1 << 8)
/** PIOE_IFDGSR_P7 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P7		(1 << 7)
/** PIOE_IFDGSR_P6 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P6		(1 << 6)
/** PIOE_IFDGSR_P5 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P5		(1 << 5)
/** PIOE_IFDGSR_P4 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P4		(1 << 4)
/** PIOE_IFDGSR_P3 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P3		(1 << 3)
/** PIOE_IFDGSR_P2 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P2		(1 << 2)
/** PIOE_IFDGSR_P1 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P1		(1 << 1)
/** PIOE_IFDGSR_P0 Glitch or Debouncing Filter Selection Status **/
#define PIOE_IFDGSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_scdr SCDR Slow Clock Divider Debouncing Register
@{*/


#define PIOE_SCDR_DIV_SHIFT		0
#define PIOE_SCDR_DIV_MASK		0x3fff
/** @defgroup pioe_scdr_div DIV Slow Clock Divider Selection for Debouncing
@{*/
/**@}*/


/**@}*/

/** @defgroup pioe_ower OWER Output Write Enable
@{*/

/** PIOE_OWER_P31 Output Write Enable. **/
#define PIOE_OWER_P31		(1 << 31)
/** PIOE_OWER_P30 Output Write Enable. **/
#define PIOE_OWER_P30		(1 << 30)
/** PIOE_OWER_P29 Output Write Enable. **/
#define PIOE_OWER_P29		(1 << 29)
/** PIOE_OWER_P28 Output Write Enable. **/
#define PIOE_OWER_P28		(1 << 28)
/** PIOE_OWER_P27 Output Write Enable. **/
#define PIOE_OWER_P27		(1 << 27)
/** PIOE_OWER_P26 Output Write Enable. **/
#define PIOE_OWER_P26		(1 << 26)
/** PIOE_OWER_P25 Output Write Enable. **/
#define PIOE_OWER_P25		(1 << 25)
/** PIOE_OWER_P24 Output Write Enable. **/
#define PIOE_OWER_P24		(1 << 24)
/** PIOE_OWER_P23 Output Write Enable. **/
#define PIOE_OWER_P23		(1 << 23)
/** PIOE_OWER_P22 Output Write Enable. **/
#define PIOE_OWER_P22		(1 << 22)
/** PIOE_OWER_P21 Output Write Enable. **/
#define PIOE_OWER_P21		(1 << 21)
/** PIOE_OWER_P20 Output Write Enable. **/
#define PIOE_OWER_P20		(1 << 20)
/** PIOE_OWER_P19 Output Write Enable. **/
#define PIOE_OWER_P19		(1 << 19)
/** PIOE_OWER_P18 Output Write Enable. **/
#define PIOE_OWER_P18		(1 << 18)
/** PIOE_OWER_P17 Output Write Enable. **/
#define PIOE_OWER_P17		(1 << 17)
/** PIOE_OWER_P16 Output Write Enable. **/
#define PIOE_OWER_P16		(1 << 16)
/** PIOE_OWER_P15 Output Write Enable. **/
#define PIOE_OWER_P15		(1 << 15)
/** PIOE_OWER_P14 Output Write Enable. **/
#define PIOE_OWER_P14		(1 << 14)
/** PIOE_OWER_P13 Output Write Enable. **/
#define PIOE_OWER_P13		(1 << 13)
/** PIOE_OWER_P12 Output Write Enable. **/
#define PIOE_OWER_P12		(1 << 12)
/** PIOE_OWER_P11 Output Write Enable. **/
#define PIOE_OWER_P11		(1 << 11)
/** PIOE_OWER_P10 Output Write Enable. **/
#define PIOE_OWER_P10		(1 << 10)
/** PIOE_OWER_P9 Output Write Enable. **/
#define PIOE_OWER_P9		(1 << 9)
/** PIOE_OWER_P8 Output Write Enable. **/
#define PIOE_OWER_P8		(1 << 8)
/** PIOE_OWER_P7 Output Write Enable. **/
#define PIOE_OWER_P7		(1 << 7)
/** PIOE_OWER_P6 Output Write Enable. **/
#define PIOE_OWER_P6		(1 << 6)
/** PIOE_OWER_P5 Output Write Enable. **/
#define PIOE_OWER_P5		(1 << 5)
/** PIOE_OWER_P4 Output Write Enable. **/
#define PIOE_OWER_P4		(1 << 4)
/** PIOE_OWER_P3 Output Write Enable. **/
#define PIOE_OWER_P3		(1 << 3)
/** PIOE_OWER_P2 Output Write Enable. **/
#define PIOE_OWER_P2		(1 << 2)
/** PIOE_OWER_P1 Output Write Enable. **/
#define PIOE_OWER_P1		(1 << 1)
/** PIOE_OWER_P0 Output Write Enable. **/
#define PIOE_OWER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_owdr OWDR Output Write Disable
@{*/

/** PIOE_OWDR_P31 Output Write Disable. **/
#define PIOE_OWDR_P31		(1 << 31)
/** PIOE_OWDR_P30 Output Write Disable. **/
#define PIOE_OWDR_P30		(1 << 30)
/** PIOE_OWDR_P29 Output Write Disable. **/
#define PIOE_OWDR_P29		(1 << 29)
/** PIOE_OWDR_P28 Output Write Disable. **/
#define PIOE_OWDR_P28		(1 << 28)
/** PIOE_OWDR_P27 Output Write Disable. **/
#define PIOE_OWDR_P27		(1 << 27)
/** PIOE_OWDR_P26 Output Write Disable. **/
#define PIOE_OWDR_P26		(1 << 26)
/** PIOE_OWDR_P25 Output Write Disable. **/
#define PIOE_OWDR_P25		(1 << 25)
/** PIOE_OWDR_P24 Output Write Disable. **/
#define PIOE_OWDR_P24		(1 << 24)
/** PIOE_OWDR_P23 Output Write Disable. **/
#define PIOE_OWDR_P23		(1 << 23)
/** PIOE_OWDR_P22 Output Write Disable. **/
#define PIOE_OWDR_P22		(1 << 22)
/** PIOE_OWDR_P21 Output Write Disable. **/
#define PIOE_OWDR_P21		(1 << 21)
/** PIOE_OWDR_P20 Output Write Disable. **/
#define PIOE_OWDR_P20		(1 << 20)
/** PIOE_OWDR_P19 Output Write Disable. **/
#define PIOE_OWDR_P19		(1 << 19)
/** PIOE_OWDR_P18 Output Write Disable. **/
#define PIOE_OWDR_P18		(1 << 18)
/** PIOE_OWDR_P17 Output Write Disable. **/
#define PIOE_OWDR_P17		(1 << 17)
/** PIOE_OWDR_P16 Output Write Disable. **/
#define PIOE_OWDR_P16		(1 << 16)
/** PIOE_OWDR_P15 Output Write Disable. **/
#define PIOE_OWDR_P15		(1 << 15)
/** PIOE_OWDR_P14 Output Write Disable. **/
#define PIOE_OWDR_P14		(1 << 14)
/** PIOE_OWDR_P13 Output Write Disable. **/
#define PIOE_OWDR_P13		(1 << 13)
/** PIOE_OWDR_P12 Output Write Disable. **/
#define PIOE_OWDR_P12		(1 << 12)
/** PIOE_OWDR_P11 Output Write Disable. **/
#define PIOE_OWDR_P11		(1 << 11)
/** PIOE_OWDR_P10 Output Write Disable. **/
#define PIOE_OWDR_P10		(1 << 10)
/** PIOE_OWDR_P9 Output Write Disable. **/
#define PIOE_OWDR_P9		(1 << 9)
/** PIOE_OWDR_P8 Output Write Disable. **/
#define PIOE_OWDR_P8		(1 << 8)
/** PIOE_OWDR_P7 Output Write Disable. **/
#define PIOE_OWDR_P7		(1 << 7)
/** PIOE_OWDR_P6 Output Write Disable. **/
#define PIOE_OWDR_P6		(1 << 6)
/** PIOE_OWDR_P5 Output Write Disable. **/
#define PIOE_OWDR_P5		(1 << 5)
/** PIOE_OWDR_P4 Output Write Disable. **/
#define PIOE_OWDR_P4		(1 << 4)
/** PIOE_OWDR_P3 Output Write Disable. **/
#define PIOE_OWDR_P3		(1 << 3)
/** PIOE_OWDR_P2 Output Write Disable. **/
#define PIOE_OWDR_P2		(1 << 2)
/** PIOE_OWDR_P1 Output Write Disable. **/
#define PIOE_OWDR_P1		(1 << 1)
/** PIOE_OWDR_P0 Output Write Disable. **/
#define PIOE_OWDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_owsr OWSR Output Write Status Register
@{*/

/** PIOE_OWSR_P31 Output Write Status. **/
#define PIOE_OWSR_P31		(1 << 31)
/** PIOE_OWSR_P30 Output Write Status. **/
#define PIOE_OWSR_P30		(1 << 30)
/** PIOE_OWSR_P29 Output Write Status. **/
#define PIOE_OWSR_P29		(1 << 29)
/** PIOE_OWSR_P28 Output Write Status. **/
#define PIOE_OWSR_P28		(1 << 28)
/** PIOE_OWSR_P27 Output Write Status. **/
#define PIOE_OWSR_P27		(1 << 27)
/** PIOE_OWSR_P26 Output Write Status. **/
#define PIOE_OWSR_P26		(1 << 26)
/** PIOE_OWSR_P25 Output Write Status. **/
#define PIOE_OWSR_P25		(1 << 25)
/** PIOE_OWSR_P24 Output Write Status. **/
#define PIOE_OWSR_P24		(1 << 24)
/** PIOE_OWSR_P23 Output Write Status. **/
#define PIOE_OWSR_P23		(1 << 23)
/** PIOE_OWSR_P22 Output Write Status. **/
#define PIOE_OWSR_P22		(1 << 22)
/** PIOE_OWSR_P21 Output Write Status. **/
#define PIOE_OWSR_P21		(1 << 21)
/** PIOE_OWSR_P20 Output Write Status. **/
#define PIOE_OWSR_P20		(1 << 20)
/** PIOE_OWSR_P19 Output Write Status. **/
#define PIOE_OWSR_P19		(1 << 19)
/** PIOE_OWSR_P18 Output Write Status. **/
#define PIOE_OWSR_P18		(1 << 18)
/** PIOE_OWSR_P17 Output Write Status. **/
#define PIOE_OWSR_P17		(1 << 17)
/** PIOE_OWSR_P16 Output Write Status. **/
#define PIOE_OWSR_P16		(1 << 16)
/** PIOE_OWSR_P15 Output Write Status. **/
#define PIOE_OWSR_P15		(1 << 15)
/** PIOE_OWSR_P14 Output Write Status. **/
#define PIOE_OWSR_P14		(1 << 14)
/** PIOE_OWSR_P13 Output Write Status. **/
#define PIOE_OWSR_P13		(1 << 13)
/** PIOE_OWSR_P12 Output Write Status. **/
#define PIOE_OWSR_P12		(1 << 12)
/** PIOE_OWSR_P11 Output Write Status. **/
#define PIOE_OWSR_P11		(1 << 11)
/** PIOE_OWSR_P10 Output Write Status. **/
#define PIOE_OWSR_P10		(1 << 10)
/** PIOE_OWSR_P9 Output Write Status. **/
#define PIOE_OWSR_P9		(1 << 9)
/** PIOE_OWSR_P8 Output Write Status. **/
#define PIOE_OWSR_P8		(1 << 8)
/** PIOE_OWSR_P7 Output Write Status. **/
#define PIOE_OWSR_P7		(1 << 7)
/** PIOE_OWSR_P6 Output Write Status. **/
#define PIOE_OWSR_P6		(1 << 6)
/** PIOE_OWSR_P5 Output Write Status. **/
#define PIOE_OWSR_P5		(1 << 5)
/** PIOE_OWSR_P4 Output Write Status. **/
#define PIOE_OWSR_P4		(1 << 4)
/** PIOE_OWSR_P3 Output Write Status. **/
#define PIOE_OWSR_P3		(1 << 3)
/** PIOE_OWSR_P2 Output Write Status. **/
#define PIOE_OWSR_P2		(1 << 2)
/** PIOE_OWSR_P1 Output Write Status. **/
#define PIOE_OWSR_P1		(1 << 1)
/** PIOE_OWSR_P0 Output Write Status. **/
#define PIOE_OWSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_aimer AIMER Additional Interrupt Modes Enable Register
@{*/

/** PIOE_AIMER_P31 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P31		(1 << 31)
/** PIOE_AIMER_P30 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P30		(1 << 30)
/** PIOE_AIMER_P29 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P29		(1 << 29)
/** PIOE_AIMER_P28 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P28		(1 << 28)
/** PIOE_AIMER_P27 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P27		(1 << 27)
/** PIOE_AIMER_P26 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P26		(1 << 26)
/** PIOE_AIMER_P25 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P25		(1 << 25)
/** PIOE_AIMER_P24 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P24		(1 << 24)
/** PIOE_AIMER_P23 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P23		(1 << 23)
/** PIOE_AIMER_P22 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P22		(1 << 22)
/** PIOE_AIMER_P21 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P21		(1 << 21)
/** PIOE_AIMER_P20 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P20		(1 << 20)
/** PIOE_AIMER_P19 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P19		(1 << 19)
/** PIOE_AIMER_P18 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P18		(1 << 18)
/** PIOE_AIMER_P17 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P17		(1 << 17)
/** PIOE_AIMER_P16 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P16		(1 << 16)
/** PIOE_AIMER_P15 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P15		(1 << 15)
/** PIOE_AIMER_P14 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P14		(1 << 14)
/** PIOE_AIMER_P13 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P13		(1 << 13)
/** PIOE_AIMER_P12 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P12		(1 << 12)
/** PIOE_AIMER_P11 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P11		(1 << 11)
/** PIOE_AIMER_P10 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P10		(1 << 10)
/** PIOE_AIMER_P9 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P9		(1 << 9)
/** PIOE_AIMER_P8 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P8		(1 << 8)
/** PIOE_AIMER_P7 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P7		(1 << 7)
/** PIOE_AIMER_P6 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P6		(1 << 6)
/** PIOE_AIMER_P5 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P5		(1 << 5)
/** PIOE_AIMER_P4 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P4		(1 << 4)
/** PIOE_AIMER_P3 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P3		(1 << 3)
/** PIOE_AIMER_P2 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P2		(1 << 2)
/** PIOE_AIMER_P1 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P1		(1 << 1)
/** PIOE_AIMER_P0 Additional Interrupt Modes Enable. **/
#define PIOE_AIMER_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_aimdr AIMDR Additional Interrupt Modes Disables Register
@{*/

/** PIOE_AIMDR_P31 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P31		(1 << 31)
/** PIOE_AIMDR_P30 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P30		(1 << 30)
/** PIOE_AIMDR_P29 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P29		(1 << 29)
/** PIOE_AIMDR_P28 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P28		(1 << 28)
/** PIOE_AIMDR_P27 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P27		(1 << 27)
/** PIOE_AIMDR_P26 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P26		(1 << 26)
/** PIOE_AIMDR_P25 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P25		(1 << 25)
/** PIOE_AIMDR_P24 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P24		(1 << 24)
/** PIOE_AIMDR_P23 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P23		(1 << 23)
/** PIOE_AIMDR_P22 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P22		(1 << 22)
/** PIOE_AIMDR_P21 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P21		(1 << 21)
/** PIOE_AIMDR_P20 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P20		(1 << 20)
/** PIOE_AIMDR_P19 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P19		(1 << 19)
/** PIOE_AIMDR_P18 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P18		(1 << 18)
/** PIOE_AIMDR_P17 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P17		(1 << 17)
/** PIOE_AIMDR_P16 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P16		(1 << 16)
/** PIOE_AIMDR_P15 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P15		(1 << 15)
/** PIOE_AIMDR_P14 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P14		(1 << 14)
/** PIOE_AIMDR_P13 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P13		(1 << 13)
/** PIOE_AIMDR_P12 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P12		(1 << 12)
/** PIOE_AIMDR_P11 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P11		(1 << 11)
/** PIOE_AIMDR_P10 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P10		(1 << 10)
/** PIOE_AIMDR_P9 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P9		(1 << 9)
/** PIOE_AIMDR_P8 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P8		(1 << 8)
/** PIOE_AIMDR_P7 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P7		(1 << 7)
/** PIOE_AIMDR_P6 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P6		(1 << 6)
/** PIOE_AIMDR_P5 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P5		(1 << 5)
/** PIOE_AIMDR_P4 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P4		(1 << 4)
/** PIOE_AIMDR_P3 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P3		(1 << 3)
/** PIOE_AIMDR_P2 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P2		(1 << 2)
/** PIOE_AIMDR_P1 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P1		(1 << 1)
/** PIOE_AIMDR_P0 Additional Interrupt Modes Disable. **/
#define PIOE_AIMDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_aimmr AIMMR Additional Interrupt Modes Mask Register
@{*/

/** PIOE_AIMMR_P31 Peripheral CD Status. **/
#define PIOE_AIMMR_P31		(1 << 31)
/** PIOE_AIMMR_P30 Peripheral CD Status. **/
#define PIOE_AIMMR_P30		(1 << 30)
/** PIOE_AIMMR_P29 Peripheral CD Status. **/
#define PIOE_AIMMR_P29		(1 << 29)
/** PIOE_AIMMR_P28 Peripheral CD Status. **/
#define PIOE_AIMMR_P28		(1 << 28)
/** PIOE_AIMMR_P27 Peripheral CD Status. **/
#define PIOE_AIMMR_P27		(1 << 27)
/** PIOE_AIMMR_P26 Peripheral CD Status. **/
#define PIOE_AIMMR_P26		(1 << 26)
/** PIOE_AIMMR_P25 Peripheral CD Status. **/
#define PIOE_AIMMR_P25		(1 << 25)
/** PIOE_AIMMR_P24 Peripheral CD Status. **/
#define PIOE_AIMMR_P24		(1 << 24)
/** PIOE_AIMMR_P23 Peripheral CD Status. **/
#define PIOE_AIMMR_P23		(1 << 23)
/** PIOE_AIMMR_P22 Peripheral CD Status. **/
#define PIOE_AIMMR_P22		(1 << 22)
/** PIOE_AIMMR_P21 Peripheral CD Status. **/
#define PIOE_AIMMR_P21		(1 << 21)
/** PIOE_AIMMR_P20 Peripheral CD Status. **/
#define PIOE_AIMMR_P20		(1 << 20)
/** PIOE_AIMMR_P19 Peripheral CD Status. **/
#define PIOE_AIMMR_P19		(1 << 19)
/** PIOE_AIMMR_P18 Peripheral CD Status. **/
#define PIOE_AIMMR_P18		(1 << 18)
/** PIOE_AIMMR_P17 Peripheral CD Status. **/
#define PIOE_AIMMR_P17		(1 << 17)
/** PIOE_AIMMR_P16 Peripheral CD Status. **/
#define PIOE_AIMMR_P16		(1 << 16)
/** PIOE_AIMMR_P15 Peripheral CD Status. **/
#define PIOE_AIMMR_P15		(1 << 15)
/** PIOE_AIMMR_P14 Peripheral CD Status. **/
#define PIOE_AIMMR_P14		(1 << 14)
/** PIOE_AIMMR_P13 Peripheral CD Status. **/
#define PIOE_AIMMR_P13		(1 << 13)
/** PIOE_AIMMR_P12 Peripheral CD Status. **/
#define PIOE_AIMMR_P12		(1 << 12)
/** PIOE_AIMMR_P11 Peripheral CD Status. **/
#define PIOE_AIMMR_P11		(1 << 11)
/** PIOE_AIMMR_P10 Peripheral CD Status. **/
#define PIOE_AIMMR_P10		(1 << 10)
/** PIOE_AIMMR_P9 Peripheral CD Status. **/
#define PIOE_AIMMR_P9		(1 << 9)
/** PIOE_AIMMR_P8 Peripheral CD Status. **/
#define PIOE_AIMMR_P8		(1 << 8)
/** PIOE_AIMMR_P7 Peripheral CD Status. **/
#define PIOE_AIMMR_P7		(1 << 7)
/** PIOE_AIMMR_P6 Peripheral CD Status. **/
#define PIOE_AIMMR_P6		(1 << 6)
/** PIOE_AIMMR_P5 Peripheral CD Status. **/
#define PIOE_AIMMR_P5		(1 << 5)
/** PIOE_AIMMR_P4 Peripheral CD Status. **/
#define PIOE_AIMMR_P4		(1 << 4)
/** PIOE_AIMMR_P3 Peripheral CD Status. **/
#define PIOE_AIMMR_P3		(1 << 3)
/** PIOE_AIMMR_P2 Peripheral CD Status. **/
#define PIOE_AIMMR_P2		(1 << 2)
/** PIOE_AIMMR_P1 Peripheral CD Status. **/
#define PIOE_AIMMR_P1		(1 << 1)
/** PIOE_AIMMR_P0 Peripheral CD Status. **/
#define PIOE_AIMMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_esr ESR Edge Select Register
@{*/

/** PIOE_ESR_P31 Edge Interrupt Selection. **/
#define PIOE_ESR_P31		(1 << 31)
/** PIOE_ESR_P30 Edge Interrupt Selection. **/
#define PIOE_ESR_P30		(1 << 30)
/** PIOE_ESR_P29 Edge Interrupt Selection. **/
#define PIOE_ESR_P29		(1 << 29)
/** PIOE_ESR_P28 Edge Interrupt Selection. **/
#define PIOE_ESR_P28		(1 << 28)
/** PIOE_ESR_P27 Edge Interrupt Selection. **/
#define PIOE_ESR_P27		(1 << 27)
/** PIOE_ESR_P26 Edge Interrupt Selection. **/
#define PIOE_ESR_P26		(1 << 26)
/** PIOE_ESR_P25 Edge Interrupt Selection. **/
#define PIOE_ESR_P25		(1 << 25)
/** PIOE_ESR_P24 Edge Interrupt Selection. **/
#define PIOE_ESR_P24		(1 << 24)
/** PIOE_ESR_P23 Edge Interrupt Selection. **/
#define PIOE_ESR_P23		(1 << 23)
/** PIOE_ESR_P22 Edge Interrupt Selection. **/
#define PIOE_ESR_P22		(1 << 22)
/** PIOE_ESR_P21 Edge Interrupt Selection. **/
#define PIOE_ESR_P21		(1 << 21)
/** PIOE_ESR_P20 Edge Interrupt Selection. **/
#define PIOE_ESR_P20		(1 << 20)
/** PIOE_ESR_P19 Edge Interrupt Selection. **/
#define PIOE_ESR_P19		(1 << 19)
/** PIOE_ESR_P18 Edge Interrupt Selection. **/
#define PIOE_ESR_P18		(1 << 18)
/** PIOE_ESR_P17 Edge Interrupt Selection. **/
#define PIOE_ESR_P17		(1 << 17)
/** PIOE_ESR_P16 Edge Interrupt Selection. **/
#define PIOE_ESR_P16		(1 << 16)
/** PIOE_ESR_P15 Edge Interrupt Selection. **/
#define PIOE_ESR_P15		(1 << 15)
/** PIOE_ESR_P14 Edge Interrupt Selection. **/
#define PIOE_ESR_P14		(1 << 14)
/** PIOE_ESR_P13 Edge Interrupt Selection. **/
#define PIOE_ESR_P13		(1 << 13)
/** PIOE_ESR_P12 Edge Interrupt Selection. **/
#define PIOE_ESR_P12		(1 << 12)
/** PIOE_ESR_P11 Edge Interrupt Selection. **/
#define PIOE_ESR_P11		(1 << 11)
/** PIOE_ESR_P10 Edge Interrupt Selection. **/
#define PIOE_ESR_P10		(1 << 10)
/** PIOE_ESR_P9 Edge Interrupt Selection. **/
#define PIOE_ESR_P9		(1 << 9)
/** PIOE_ESR_P8 Edge Interrupt Selection. **/
#define PIOE_ESR_P8		(1 << 8)
/** PIOE_ESR_P7 Edge Interrupt Selection. **/
#define PIOE_ESR_P7		(1 << 7)
/** PIOE_ESR_P6 Edge Interrupt Selection. **/
#define PIOE_ESR_P6		(1 << 6)
/** PIOE_ESR_P5 Edge Interrupt Selection. **/
#define PIOE_ESR_P5		(1 << 5)
/** PIOE_ESR_P4 Edge Interrupt Selection. **/
#define PIOE_ESR_P4		(1 << 4)
/** PIOE_ESR_P3 Edge Interrupt Selection. **/
#define PIOE_ESR_P3		(1 << 3)
/** PIOE_ESR_P2 Edge Interrupt Selection. **/
#define PIOE_ESR_P2		(1 << 2)
/** PIOE_ESR_P1 Edge Interrupt Selection. **/
#define PIOE_ESR_P1		(1 << 1)
/** PIOE_ESR_P0 Edge Interrupt Selection. **/
#define PIOE_ESR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_lsr LSR Level Select Register
@{*/

/** PIOE_LSR_P31 Level Interrupt Selection. **/
#define PIOE_LSR_P31		(1 << 31)
/** PIOE_LSR_P30 Level Interrupt Selection. **/
#define PIOE_LSR_P30		(1 << 30)
/** PIOE_LSR_P29 Level Interrupt Selection. **/
#define PIOE_LSR_P29		(1 << 29)
/** PIOE_LSR_P28 Level Interrupt Selection. **/
#define PIOE_LSR_P28		(1 << 28)
/** PIOE_LSR_P27 Level Interrupt Selection. **/
#define PIOE_LSR_P27		(1 << 27)
/** PIOE_LSR_P26 Level Interrupt Selection. **/
#define PIOE_LSR_P26		(1 << 26)
/** PIOE_LSR_P25 Level Interrupt Selection. **/
#define PIOE_LSR_P25		(1 << 25)
/** PIOE_LSR_P24 Level Interrupt Selection. **/
#define PIOE_LSR_P24		(1 << 24)
/** PIOE_LSR_P23 Level Interrupt Selection. **/
#define PIOE_LSR_P23		(1 << 23)
/** PIOE_LSR_P22 Level Interrupt Selection. **/
#define PIOE_LSR_P22		(1 << 22)
/** PIOE_LSR_P21 Level Interrupt Selection. **/
#define PIOE_LSR_P21		(1 << 21)
/** PIOE_LSR_P20 Level Interrupt Selection. **/
#define PIOE_LSR_P20		(1 << 20)
/** PIOE_LSR_P19 Level Interrupt Selection. **/
#define PIOE_LSR_P19		(1 << 19)
/** PIOE_LSR_P18 Level Interrupt Selection. **/
#define PIOE_LSR_P18		(1 << 18)
/** PIOE_LSR_P17 Level Interrupt Selection. **/
#define PIOE_LSR_P17		(1 << 17)
/** PIOE_LSR_P16 Level Interrupt Selection. **/
#define PIOE_LSR_P16		(1 << 16)
/** PIOE_LSR_P15 Level Interrupt Selection. **/
#define PIOE_LSR_P15		(1 << 15)
/** PIOE_LSR_P14 Level Interrupt Selection. **/
#define PIOE_LSR_P14		(1 << 14)
/** PIOE_LSR_P13 Level Interrupt Selection. **/
#define PIOE_LSR_P13		(1 << 13)
/** PIOE_LSR_P12 Level Interrupt Selection. **/
#define PIOE_LSR_P12		(1 << 12)
/** PIOE_LSR_P11 Level Interrupt Selection. **/
#define PIOE_LSR_P11		(1 << 11)
/** PIOE_LSR_P10 Level Interrupt Selection. **/
#define PIOE_LSR_P10		(1 << 10)
/** PIOE_LSR_P9 Level Interrupt Selection. **/
#define PIOE_LSR_P9		(1 << 9)
/** PIOE_LSR_P8 Level Interrupt Selection. **/
#define PIOE_LSR_P8		(1 << 8)
/** PIOE_LSR_P7 Level Interrupt Selection. **/
#define PIOE_LSR_P7		(1 << 7)
/** PIOE_LSR_P6 Level Interrupt Selection. **/
#define PIOE_LSR_P6		(1 << 6)
/** PIOE_LSR_P5 Level Interrupt Selection. **/
#define PIOE_LSR_P5		(1 << 5)
/** PIOE_LSR_P4 Level Interrupt Selection. **/
#define PIOE_LSR_P4		(1 << 4)
/** PIOE_LSR_P3 Level Interrupt Selection. **/
#define PIOE_LSR_P3		(1 << 3)
/** PIOE_LSR_P2 Level Interrupt Selection. **/
#define PIOE_LSR_P2		(1 << 2)
/** PIOE_LSR_P1 Level Interrupt Selection. **/
#define PIOE_LSR_P1		(1 << 1)
/** PIOE_LSR_P0 Level Interrupt Selection. **/
#define PIOE_LSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_elsr ELSR Edge/Level Status Register
@{*/

/** PIOE_ELSR_P31 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P31		(1 << 31)
/** PIOE_ELSR_P30 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P30		(1 << 30)
/** PIOE_ELSR_P29 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P29		(1 << 29)
/** PIOE_ELSR_P28 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P28		(1 << 28)
/** PIOE_ELSR_P27 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P27		(1 << 27)
/** PIOE_ELSR_P26 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P26		(1 << 26)
/** PIOE_ELSR_P25 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P25		(1 << 25)
/** PIOE_ELSR_P24 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P24		(1 << 24)
/** PIOE_ELSR_P23 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P23		(1 << 23)
/** PIOE_ELSR_P22 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P22		(1 << 22)
/** PIOE_ELSR_P21 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P21		(1 << 21)
/** PIOE_ELSR_P20 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P20		(1 << 20)
/** PIOE_ELSR_P19 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P19		(1 << 19)
/** PIOE_ELSR_P18 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P18		(1 << 18)
/** PIOE_ELSR_P17 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P17		(1 << 17)
/** PIOE_ELSR_P16 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P16		(1 << 16)
/** PIOE_ELSR_P15 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P15		(1 << 15)
/** PIOE_ELSR_P14 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P14		(1 << 14)
/** PIOE_ELSR_P13 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P13		(1 << 13)
/** PIOE_ELSR_P12 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P12		(1 << 12)
/** PIOE_ELSR_P11 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P11		(1 << 11)
/** PIOE_ELSR_P10 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P10		(1 << 10)
/** PIOE_ELSR_P9 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P9		(1 << 9)
/** PIOE_ELSR_P8 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P8		(1 << 8)
/** PIOE_ELSR_P7 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P7		(1 << 7)
/** PIOE_ELSR_P6 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P6		(1 << 6)
/** PIOE_ELSR_P5 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P5		(1 << 5)
/** PIOE_ELSR_P4 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P4		(1 << 4)
/** PIOE_ELSR_P3 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P3		(1 << 3)
/** PIOE_ELSR_P2 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P2		(1 << 2)
/** PIOE_ELSR_P1 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P1		(1 << 1)
/** PIOE_ELSR_P0 Edge/Level Interrupt source selection. **/
#define PIOE_ELSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_fellsr FELLSR Falling Edge/Low Level Select Register
@{*/

/** PIOE_FELLSR_P31 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P31		(1 << 31)
/** PIOE_FELLSR_P30 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P30		(1 << 30)
/** PIOE_FELLSR_P29 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P29		(1 << 29)
/** PIOE_FELLSR_P28 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P28		(1 << 28)
/** PIOE_FELLSR_P27 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P27		(1 << 27)
/** PIOE_FELLSR_P26 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P26		(1 << 26)
/** PIOE_FELLSR_P25 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P25		(1 << 25)
/** PIOE_FELLSR_P24 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P24		(1 << 24)
/** PIOE_FELLSR_P23 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P23		(1 << 23)
/** PIOE_FELLSR_P22 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P22		(1 << 22)
/** PIOE_FELLSR_P21 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P21		(1 << 21)
/** PIOE_FELLSR_P20 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P20		(1 << 20)
/** PIOE_FELLSR_P19 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P19		(1 << 19)
/** PIOE_FELLSR_P18 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P18		(1 << 18)
/** PIOE_FELLSR_P17 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P17		(1 << 17)
/** PIOE_FELLSR_P16 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P16		(1 << 16)
/** PIOE_FELLSR_P15 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P15		(1 << 15)
/** PIOE_FELLSR_P14 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P14		(1 << 14)
/** PIOE_FELLSR_P13 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P13		(1 << 13)
/** PIOE_FELLSR_P12 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P12		(1 << 12)
/** PIOE_FELLSR_P11 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P11		(1 << 11)
/** PIOE_FELLSR_P10 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P10		(1 << 10)
/** PIOE_FELLSR_P9 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P9		(1 << 9)
/** PIOE_FELLSR_P8 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P8		(1 << 8)
/** PIOE_FELLSR_P7 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P7		(1 << 7)
/** PIOE_FELLSR_P6 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P6		(1 << 6)
/** PIOE_FELLSR_P5 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P5		(1 << 5)
/** PIOE_FELLSR_P4 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P4		(1 << 4)
/** PIOE_FELLSR_P3 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P3		(1 << 3)
/** PIOE_FELLSR_P2 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P2		(1 << 2)
/** PIOE_FELLSR_P1 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P1		(1 << 1)
/** PIOE_FELLSR_P0 Falling Edge/Low Level Interrupt Selection. **/
#define PIOE_FELLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_rehlsr REHLSR Rising Edge/ High Level Select Register
@{*/

/** PIOE_REHLSR_P31 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P31		(1 << 31)
/** PIOE_REHLSR_P30 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P30		(1 << 30)
/** PIOE_REHLSR_P29 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P29		(1 << 29)
/** PIOE_REHLSR_P28 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P28		(1 << 28)
/** PIOE_REHLSR_P27 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P27		(1 << 27)
/** PIOE_REHLSR_P26 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P26		(1 << 26)
/** PIOE_REHLSR_P25 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P25		(1 << 25)
/** PIOE_REHLSR_P24 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P24		(1 << 24)
/** PIOE_REHLSR_P23 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P23		(1 << 23)
/** PIOE_REHLSR_P22 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P22		(1 << 22)
/** PIOE_REHLSR_P21 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P21		(1 << 21)
/** PIOE_REHLSR_P20 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P20		(1 << 20)
/** PIOE_REHLSR_P19 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P19		(1 << 19)
/** PIOE_REHLSR_P18 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P18		(1 << 18)
/** PIOE_REHLSR_P17 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P17		(1 << 17)
/** PIOE_REHLSR_P16 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P16		(1 << 16)
/** PIOE_REHLSR_P15 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P15		(1 << 15)
/** PIOE_REHLSR_P14 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P14		(1 << 14)
/** PIOE_REHLSR_P13 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P13		(1 << 13)
/** PIOE_REHLSR_P12 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P12		(1 << 12)
/** PIOE_REHLSR_P11 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P11		(1 << 11)
/** PIOE_REHLSR_P10 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P10		(1 << 10)
/** PIOE_REHLSR_P9 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P9		(1 << 9)
/** PIOE_REHLSR_P8 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P8		(1 << 8)
/** PIOE_REHLSR_P7 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P7		(1 << 7)
/** PIOE_REHLSR_P6 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P6		(1 << 6)
/** PIOE_REHLSR_P5 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P5		(1 << 5)
/** PIOE_REHLSR_P4 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P4		(1 << 4)
/** PIOE_REHLSR_P3 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P3		(1 << 3)
/** PIOE_REHLSR_P2 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P2		(1 << 2)
/** PIOE_REHLSR_P1 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P1		(1 << 1)
/** PIOE_REHLSR_P0 Rising Edge /High Level Interrupt Selection. **/
#define PIOE_REHLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_frlhsr FRLHSR Fall/Rise - Low/High Status Register
@{*/

/** PIOE_FRLHSR_P31 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P31		(1 << 31)
/** PIOE_FRLHSR_P30 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P30		(1 << 30)
/** PIOE_FRLHSR_P29 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P29		(1 << 29)
/** PIOE_FRLHSR_P28 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P28		(1 << 28)
/** PIOE_FRLHSR_P27 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P27		(1 << 27)
/** PIOE_FRLHSR_P26 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P26		(1 << 26)
/** PIOE_FRLHSR_P25 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P25		(1 << 25)
/** PIOE_FRLHSR_P24 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P24		(1 << 24)
/** PIOE_FRLHSR_P23 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P23		(1 << 23)
/** PIOE_FRLHSR_P22 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P22		(1 << 22)
/** PIOE_FRLHSR_P21 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P21		(1 << 21)
/** PIOE_FRLHSR_P20 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P20		(1 << 20)
/** PIOE_FRLHSR_P19 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P19		(1 << 19)
/** PIOE_FRLHSR_P18 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P18		(1 << 18)
/** PIOE_FRLHSR_P17 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P17		(1 << 17)
/** PIOE_FRLHSR_P16 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P16		(1 << 16)
/** PIOE_FRLHSR_P15 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P15		(1 << 15)
/** PIOE_FRLHSR_P14 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P14		(1 << 14)
/** PIOE_FRLHSR_P13 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P13		(1 << 13)
/** PIOE_FRLHSR_P12 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P12		(1 << 12)
/** PIOE_FRLHSR_P11 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P11		(1 << 11)
/** PIOE_FRLHSR_P10 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P10		(1 << 10)
/** PIOE_FRLHSR_P9 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P9		(1 << 9)
/** PIOE_FRLHSR_P8 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P8		(1 << 8)
/** PIOE_FRLHSR_P7 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P7		(1 << 7)
/** PIOE_FRLHSR_P6 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P6		(1 << 6)
/** PIOE_FRLHSR_P5 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P5		(1 << 5)
/** PIOE_FRLHSR_P4 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P4		(1 << 4)
/** PIOE_FRLHSR_P3 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P3		(1 << 3)
/** PIOE_FRLHSR_P2 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P2		(1 << 2)
/** PIOE_FRLHSR_P1 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P1		(1 << 1)
/** PIOE_FRLHSR_P0 Edge /Level Interrupt Source Selection. **/
#define PIOE_FRLHSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_locksr LOCKSR Lock Status
@{*/

/** PIOE_LOCKSR_P31 Lock Status. **/
#define PIOE_LOCKSR_P31		(1 << 31)
/** PIOE_LOCKSR_P30 Lock Status. **/
#define PIOE_LOCKSR_P30		(1 << 30)
/** PIOE_LOCKSR_P29 Lock Status. **/
#define PIOE_LOCKSR_P29		(1 << 29)
/** PIOE_LOCKSR_P28 Lock Status. **/
#define PIOE_LOCKSR_P28		(1 << 28)
/** PIOE_LOCKSR_P27 Lock Status. **/
#define PIOE_LOCKSR_P27		(1 << 27)
/** PIOE_LOCKSR_P26 Lock Status. **/
#define PIOE_LOCKSR_P26		(1 << 26)
/** PIOE_LOCKSR_P25 Lock Status. **/
#define PIOE_LOCKSR_P25		(1 << 25)
/** PIOE_LOCKSR_P24 Lock Status. **/
#define PIOE_LOCKSR_P24		(1 << 24)
/** PIOE_LOCKSR_P23 Lock Status. **/
#define PIOE_LOCKSR_P23		(1 << 23)
/** PIOE_LOCKSR_P22 Lock Status. **/
#define PIOE_LOCKSR_P22		(1 << 22)
/** PIOE_LOCKSR_P21 Lock Status. **/
#define PIOE_LOCKSR_P21		(1 << 21)
/** PIOE_LOCKSR_P20 Lock Status. **/
#define PIOE_LOCKSR_P20		(1 << 20)
/** PIOE_LOCKSR_P19 Lock Status. **/
#define PIOE_LOCKSR_P19		(1 << 19)
/** PIOE_LOCKSR_P18 Lock Status. **/
#define PIOE_LOCKSR_P18		(1 << 18)
/** PIOE_LOCKSR_P17 Lock Status. **/
#define PIOE_LOCKSR_P17		(1 << 17)
/** PIOE_LOCKSR_P16 Lock Status. **/
#define PIOE_LOCKSR_P16		(1 << 16)
/** PIOE_LOCKSR_P15 Lock Status. **/
#define PIOE_LOCKSR_P15		(1 << 15)
/** PIOE_LOCKSR_P14 Lock Status. **/
#define PIOE_LOCKSR_P14		(1 << 14)
/** PIOE_LOCKSR_P13 Lock Status. **/
#define PIOE_LOCKSR_P13		(1 << 13)
/** PIOE_LOCKSR_P12 Lock Status. **/
#define PIOE_LOCKSR_P12		(1 << 12)
/** PIOE_LOCKSR_P11 Lock Status. **/
#define PIOE_LOCKSR_P11		(1 << 11)
/** PIOE_LOCKSR_P10 Lock Status. **/
#define PIOE_LOCKSR_P10		(1 << 10)
/** PIOE_LOCKSR_P9 Lock Status. **/
#define PIOE_LOCKSR_P9		(1 << 9)
/** PIOE_LOCKSR_P8 Lock Status. **/
#define PIOE_LOCKSR_P8		(1 << 8)
/** PIOE_LOCKSR_P7 Lock Status. **/
#define PIOE_LOCKSR_P7		(1 << 7)
/** PIOE_LOCKSR_P6 Lock Status. **/
#define PIOE_LOCKSR_P6		(1 << 6)
/** PIOE_LOCKSR_P5 Lock Status. **/
#define PIOE_LOCKSR_P5		(1 << 5)
/** PIOE_LOCKSR_P4 Lock Status. **/
#define PIOE_LOCKSR_P4		(1 << 4)
/** PIOE_LOCKSR_P3 Lock Status. **/
#define PIOE_LOCKSR_P3		(1 << 3)
/** PIOE_LOCKSR_P2 Lock Status. **/
#define PIOE_LOCKSR_P2		(1 << 2)
/** PIOE_LOCKSR_P1 Lock Status. **/
#define PIOE_LOCKSR_P1		(1 << 1)
/** PIOE_LOCKSR_P0 Lock Status. **/
#define PIOE_LOCKSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioe_wpmr WPMR Write Protect Mode Register
@{*/


#define PIOE_WPMR_WPKEY_SHIFT		8
#define PIOE_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pioe_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** PIOE_WPMR_WPEN Write Protect Enable **/
#define PIOE_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pioe_wpsr WPSR Write Protect Status Register
@{*/


#define PIOE_WPSR_WPVSRC_SHIFT		8
#define PIOE_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pioe_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PIOE_WPSR_WPVS Write Protect Violation Status **/
#define PIOE_WPSR_WPVS		(1 << 0)

/**@}*/

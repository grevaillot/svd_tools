#pragma once 

/* --- PIOB: Parallel Input/Output Controller B --------------------- */

/** @defgroup piob_registers Parallel Input/Output Controller B Register
@{*/

/** PIOB_PER PIO Enable Register **/
#define PIOB_PER			MMIO32(PIOB_BASE + 0x00)
/** PIOB_PDR PIO Disable Register **/
#define PIOB_PDR			MMIO32(PIOB_BASE + 0x04)
/** PIOB_PSR PIO Status Register **/
#define PIOB_PSR			MMIO32(PIOB_BASE + 0x08)
/** PIOB_OER Output Enable Register **/
#define PIOB_OER			MMIO32(PIOB_BASE + 0x10)
/** PIOB_ODR Output Disable Register **/
#define PIOB_ODR			MMIO32(PIOB_BASE + 0x14)
/** PIOB_OSR Output Status Register **/
#define PIOB_OSR			MMIO32(PIOB_BASE + 0x18)
/** PIOB_IFER Glitch Input Filter Enable Register **/
#define PIOB_IFER			MMIO32(PIOB_BASE + 0x20)
/** PIOB_IFDR Glitch Input Filter Disable Register **/
#define PIOB_IFDR			MMIO32(PIOB_BASE + 0x24)
/** PIOB_IFSR Glitch Input Filter Status Register **/
#define PIOB_IFSR			MMIO32(PIOB_BASE + 0x28)
/** PIOB_SODR Set Output Data Register **/
#define PIOB_SODR			MMIO32(PIOB_BASE + 0x30)
/** PIOB_CODR Clear Output Data Register **/
#define PIOB_CODR			MMIO32(PIOB_BASE + 0x34)
/** PIOB_ODSR Output Data Status Register **/
#define PIOB_ODSR			MMIO32(PIOB_BASE + 0x38)
/** PIOB_PDSR Pin Data Status Register **/
#define PIOB_PDSR			MMIO32(PIOB_BASE + 0x3c)
/** PIOB_IER Interrupt Enable Register **/
#define PIOB_IER			MMIO32(PIOB_BASE + 0x40)
/** PIOB_IDR Interrupt Disable Register **/
#define PIOB_IDR			MMIO32(PIOB_BASE + 0x44)
/** PIOB_IMR Interrupt Mask Register **/
#define PIOB_IMR			MMIO32(PIOB_BASE + 0x48)
/** PIOB_ISR Interrupt Status Register **/
#define PIOB_ISR			MMIO32(PIOB_BASE + 0x4c)
/** PIOB_MDER Multi-driver Enable Register **/
#define PIOB_MDER			MMIO32(PIOB_BASE + 0x50)
/** PIOB_MDDR Multi-driver Disable Register **/
#define PIOB_MDDR			MMIO32(PIOB_BASE + 0x54)
/** PIOB_MDSR Multi-driver Status Register **/
#define PIOB_MDSR			MMIO32(PIOB_BASE + 0x58)
/** PIOB_PUDR Pull-up Disable Register **/
#define PIOB_PUDR			MMIO32(PIOB_BASE + 0x60)
/** PIOB_PUER Pull-up Enable Register **/
#define PIOB_PUER			MMIO32(PIOB_BASE + 0x64)
/** PIOB_PUSR Pad Pull-up Status Register **/
#define PIOB_PUSR			MMIO32(PIOB_BASE + 0x68)
/** PIOB_ABCDSR[0] Peripheral Select Register **/
#define PIOB_ABCDSR[0]			MMIO32(PIOB_BASE + 0x70)
/** PIOB_ABCDSR[1] Peripheral Select Register **/
#define PIOB_ABCDSR[1]			MMIO32(PIOB_BASE + 0x74)
/** PIOB_IFSCDR Input Filter Slow Clock Disable Register **/
#define PIOB_IFSCDR			MMIO32(PIOB_BASE + 0x80)
/** PIOB_IFSCER Input Filter Slow Clock Enable Register **/
#define PIOB_IFSCER			MMIO32(PIOB_BASE + 0x84)
/** PIOB_IFSCSR Input Filter Slow Clock Status Register **/
#define PIOB_IFSCSR			MMIO32(PIOB_BASE + 0x88)
/** PIOB_SCDR Slow Clock Divider Debouncing Register **/
#define PIOB_SCDR			MMIO32(PIOB_BASE + 0x8c)
/** PIOB_PPDDR Pad Pull-down Disable Register **/
#define PIOB_PPDDR			MMIO32(PIOB_BASE + 0x90)
/** PIOB_PPDER Pad Pull-down Enable Register **/
#define PIOB_PPDER			MMIO32(PIOB_BASE + 0x94)
/** PIOB_PPDSR Pad Pull-down Status Register **/
#define PIOB_PPDSR			MMIO32(PIOB_BASE + 0x98)
/** PIOB_OWER Output Write Enable **/
#define PIOB_OWER			MMIO32(PIOB_BASE + 0xa0)
/** PIOB_OWDR Output Write Disable **/
#define PIOB_OWDR			MMIO32(PIOB_BASE + 0xa4)
/** PIOB_OWSR Output Write Status Register **/
#define PIOB_OWSR			MMIO32(PIOB_BASE + 0xa8)
/** PIOB_AIMER Additional Interrupt Modes Enable Register **/
#define PIOB_AIMER			MMIO32(PIOB_BASE + 0xb0)
/** PIOB_AIMDR Additional Interrupt Modes Disables Register **/
#define PIOB_AIMDR			MMIO32(PIOB_BASE + 0xb4)
/** PIOB_AIMMR Additional Interrupt Modes Mask Register **/
#define PIOB_AIMMR			MMIO32(PIOB_BASE + 0xb8)
/** PIOB_ESR Edge Select Register **/
#define PIOB_ESR			MMIO32(PIOB_BASE + 0xc0)
/** PIOB_LSR Level Select Register **/
#define PIOB_LSR			MMIO32(PIOB_BASE + 0xc4)
/** PIOB_ELSR Edge/Level Status Register **/
#define PIOB_ELSR			MMIO32(PIOB_BASE + 0xc8)
/** PIOB_FELLSR Falling Edge/Low Level Select Register **/
#define PIOB_FELLSR			MMIO32(PIOB_BASE + 0xd0)
/** PIOB_REHLSR Rising Edge/ High Level Select Register **/
#define PIOB_REHLSR			MMIO32(PIOB_BASE + 0xd4)
/** PIOB_FRLHSR Fall/Rise - Low/High Status Register **/
#define PIOB_FRLHSR			MMIO32(PIOB_BASE + 0xd8)
/** PIOB_LOCKSR Lock Status **/
#define PIOB_LOCKSR			MMIO32(PIOB_BASE + 0xe0)
/** PIOB_WPMR Write Protect Mode Register **/
#define PIOB_WPMR			MMIO32(PIOB_BASE + 0xe4)
/** PIOB_WPSR Write Protect Status Register **/
#define PIOB_WPSR			MMIO32(PIOB_BASE + 0xe8)
/** PIOB_SCHMITT Schmitt Trigger Register **/
#define PIOB_SCHMITT			MMIO32(PIOB_BASE + 0x100)
/** PIOB_PCMR Parallel Capture Mode Register **/
#define PIOB_PCMR			MMIO32(PIOB_BASE + 0x150)
/** PIOB_PCIER Parallel Capture Interrupt Enable Register **/
#define PIOB_PCIER			MMIO32(PIOB_BASE + 0x154)
/** PIOB_PCIDR Parallel Capture Interrupt Disable Register **/
#define PIOB_PCIDR			MMIO32(PIOB_BASE + 0x158)
/** PIOB_PCIMR Parallel Capture Interrupt Mask Register **/
#define PIOB_PCIMR			MMIO32(PIOB_BASE + 0x15c)
/** PIOB_PCISR Parallel Capture Interrupt Status Register **/
#define PIOB_PCISR			MMIO32(PIOB_BASE + 0x160)
/** PIOB_PCRHR Parallel Capture Reception Holding Register **/
#define PIOB_PCRHR			MMIO32(PIOB_BASE + 0x164)

/**@}*/


/** @defgroup piob_per PER PIO Enable Register
@{*/

/** PIOB_PER_P31 PIO Enable **/
#define PIOB_PER_P31		(1 << 31)
/** PIOB_PER_P30 PIO Enable **/
#define PIOB_PER_P30		(1 << 30)
/** PIOB_PER_P29 PIO Enable **/
#define PIOB_PER_P29		(1 << 29)
/** PIOB_PER_P28 PIO Enable **/
#define PIOB_PER_P28		(1 << 28)
/** PIOB_PER_P27 PIO Enable **/
#define PIOB_PER_P27		(1 << 27)
/** PIOB_PER_P26 PIO Enable **/
#define PIOB_PER_P26		(1 << 26)
/** PIOB_PER_P25 PIO Enable **/
#define PIOB_PER_P25		(1 << 25)
/** PIOB_PER_P24 PIO Enable **/
#define PIOB_PER_P24		(1 << 24)
/** PIOB_PER_P23 PIO Enable **/
#define PIOB_PER_P23		(1 << 23)
/** PIOB_PER_P22 PIO Enable **/
#define PIOB_PER_P22		(1 << 22)
/** PIOB_PER_P21 PIO Enable **/
#define PIOB_PER_P21		(1 << 21)
/** PIOB_PER_P20 PIO Enable **/
#define PIOB_PER_P20		(1 << 20)
/** PIOB_PER_P19 PIO Enable **/
#define PIOB_PER_P19		(1 << 19)
/** PIOB_PER_P18 PIO Enable **/
#define PIOB_PER_P18		(1 << 18)
/** PIOB_PER_P17 PIO Enable **/
#define PIOB_PER_P17		(1 << 17)
/** PIOB_PER_P16 PIO Enable **/
#define PIOB_PER_P16		(1 << 16)
/** PIOB_PER_P15 PIO Enable **/
#define PIOB_PER_P15		(1 << 15)
/** PIOB_PER_P14 PIO Enable **/
#define PIOB_PER_P14		(1 << 14)
/** PIOB_PER_P13 PIO Enable **/
#define PIOB_PER_P13		(1 << 13)
/** PIOB_PER_P12 PIO Enable **/
#define PIOB_PER_P12		(1 << 12)
/** PIOB_PER_P11 PIO Enable **/
#define PIOB_PER_P11		(1 << 11)
/** PIOB_PER_P10 PIO Enable **/
#define PIOB_PER_P10		(1 << 10)
/** PIOB_PER_P9 PIO Enable **/
#define PIOB_PER_P9		(1 << 9)
/** PIOB_PER_P8 PIO Enable **/
#define PIOB_PER_P8		(1 << 8)
/** PIOB_PER_P7 PIO Enable **/
#define PIOB_PER_P7		(1 << 7)
/** PIOB_PER_P6 PIO Enable **/
#define PIOB_PER_P6		(1 << 6)
/** PIOB_PER_P5 PIO Enable **/
#define PIOB_PER_P5		(1 << 5)
/** PIOB_PER_P4 PIO Enable **/
#define PIOB_PER_P4		(1 << 4)
/** PIOB_PER_P3 PIO Enable **/
#define PIOB_PER_P3		(1 << 3)
/** PIOB_PER_P2 PIO Enable **/
#define PIOB_PER_P2		(1 << 2)
/** PIOB_PER_P1 PIO Enable **/
#define PIOB_PER_P1		(1 << 1)
/** PIOB_PER_P0 PIO Enable **/
#define PIOB_PER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_pdr PDR PIO Disable Register
@{*/

/** PIOB_PDR_P31 PIO Disable **/
#define PIOB_PDR_P31		(1 << 31)
/** PIOB_PDR_P30 PIO Disable **/
#define PIOB_PDR_P30		(1 << 30)
/** PIOB_PDR_P29 PIO Disable **/
#define PIOB_PDR_P29		(1 << 29)
/** PIOB_PDR_P28 PIO Disable **/
#define PIOB_PDR_P28		(1 << 28)
/** PIOB_PDR_P27 PIO Disable **/
#define PIOB_PDR_P27		(1 << 27)
/** PIOB_PDR_P26 PIO Disable **/
#define PIOB_PDR_P26		(1 << 26)
/** PIOB_PDR_P25 PIO Disable **/
#define PIOB_PDR_P25		(1 << 25)
/** PIOB_PDR_P24 PIO Disable **/
#define PIOB_PDR_P24		(1 << 24)
/** PIOB_PDR_P23 PIO Disable **/
#define PIOB_PDR_P23		(1 << 23)
/** PIOB_PDR_P22 PIO Disable **/
#define PIOB_PDR_P22		(1 << 22)
/** PIOB_PDR_P21 PIO Disable **/
#define PIOB_PDR_P21		(1 << 21)
/** PIOB_PDR_P20 PIO Disable **/
#define PIOB_PDR_P20		(1 << 20)
/** PIOB_PDR_P19 PIO Disable **/
#define PIOB_PDR_P19		(1 << 19)
/** PIOB_PDR_P18 PIO Disable **/
#define PIOB_PDR_P18		(1 << 18)
/** PIOB_PDR_P17 PIO Disable **/
#define PIOB_PDR_P17		(1 << 17)
/** PIOB_PDR_P16 PIO Disable **/
#define PIOB_PDR_P16		(1 << 16)
/** PIOB_PDR_P15 PIO Disable **/
#define PIOB_PDR_P15		(1 << 15)
/** PIOB_PDR_P14 PIO Disable **/
#define PIOB_PDR_P14		(1 << 14)
/** PIOB_PDR_P13 PIO Disable **/
#define PIOB_PDR_P13		(1 << 13)
/** PIOB_PDR_P12 PIO Disable **/
#define PIOB_PDR_P12		(1 << 12)
/** PIOB_PDR_P11 PIO Disable **/
#define PIOB_PDR_P11		(1 << 11)
/** PIOB_PDR_P10 PIO Disable **/
#define PIOB_PDR_P10		(1 << 10)
/** PIOB_PDR_P9 PIO Disable **/
#define PIOB_PDR_P9		(1 << 9)
/** PIOB_PDR_P8 PIO Disable **/
#define PIOB_PDR_P8		(1 << 8)
/** PIOB_PDR_P7 PIO Disable **/
#define PIOB_PDR_P7		(1 << 7)
/** PIOB_PDR_P6 PIO Disable **/
#define PIOB_PDR_P6		(1 << 6)
/** PIOB_PDR_P5 PIO Disable **/
#define PIOB_PDR_P5		(1 << 5)
/** PIOB_PDR_P4 PIO Disable **/
#define PIOB_PDR_P4		(1 << 4)
/** PIOB_PDR_P3 PIO Disable **/
#define PIOB_PDR_P3		(1 << 3)
/** PIOB_PDR_P2 PIO Disable **/
#define PIOB_PDR_P2		(1 << 2)
/** PIOB_PDR_P1 PIO Disable **/
#define PIOB_PDR_P1		(1 << 1)
/** PIOB_PDR_P0 PIO Disable **/
#define PIOB_PDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_psr PSR PIO Status Register
@{*/

/** PIOB_PSR_P31 PIO Status **/
#define PIOB_PSR_P31		(1 << 31)
/** PIOB_PSR_P30 PIO Status **/
#define PIOB_PSR_P30		(1 << 30)
/** PIOB_PSR_P29 PIO Status **/
#define PIOB_PSR_P29		(1 << 29)
/** PIOB_PSR_P28 PIO Status **/
#define PIOB_PSR_P28		(1 << 28)
/** PIOB_PSR_P27 PIO Status **/
#define PIOB_PSR_P27		(1 << 27)
/** PIOB_PSR_P26 PIO Status **/
#define PIOB_PSR_P26		(1 << 26)
/** PIOB_PSR_P25 PIO Status **/
#define PIOB_PSR_P25		(1 << 25)
/** PIOB_PSR_P24 PIO Status **/
#define PIOB_PSR_P24		(1 << 24)
/** PIOB_PSR_P23 PIO Status **/
#define PIOB_PSR_P23		(1 << 23)
/** PIOB_PSR_P22 PIO Status **/
#define PIOB_PSR_P22		(1 << 22)
/** PIOB_PSR_P21 PIO Status **/
#define PIOB_PSR_P21		(1 << 21)
/** PIOB_PSR_P20 PIO Status **/
#define PIOB_PSR_P20		(1 << 20)
/** PIOB_PSR_P19 PIO Status **/
#define PIOB_PSR_P19		(1 << 19)
/** PIOB_PSR_P18 PIO Status **/
#define PIOB_PSR_P18		(1 << 18)
/** PIOB_PSR_P17 PIO Status **/
#define PIOB_PSR_P17		(1 << 17)
/** PIOB_PSR_P16 PIO Status **/
#define PIOB_PSR_P16		(1 << 16)
/** PIOB_PSR_P15 PIO Status **/
#define PIOB_PSR_P15		(1 << 15)
/** PIOB_PSR_P14 PIO Status **/
#define PIOB_PSR_P14		(1 << 14)
/** PIOB_PSR_P13 PIO Status **/
#define PIOB_PSR_P13		(1 << 13)
/** PIOB_PSR_P12 PIO Status **/
#define PIOB_PSR_P12		(1 << 12)
/** PIOB_PSR_P11 PIO Status **/
#define PIOB_PSR_P11		(1 << 11)
/** PIOB_PSR_P10 PIO Status **/
#define PIOB_PSR_P10		(1 << 10)
/** PIOB_PSR_P9 PIO Status **/
#define PIOB_PSR_P9		(1 << 9)
/** PIOB_PSR_P8 PIO Status **/
#define PIOB_PSR_P8		(1 << 8)
/** PIOB_PSR_P7 PIO Status **/
#define PIOB_PSR_P7		(1 << 7)
/** PIOB_PSR_P6 PIO Status **/
#define PIOB_PSR_P6		(1 << 6)
/** PIOB_PSR_P5 PIO Status **/
#define PIOB_PSR_P5		(1 << 5)
/** PIOB_PSR_P4 PIO Status **/
#define PIOB_PSR_P4		(1 << 4)
/** PIOB_PSR_P3 PIO Status **/
#define PIOB_PSR_P3		(1 << 3)
/** PIOB_PSR_P2 PIO Status **/
#define PIOB_PSR_P2		(1 << 2)
/** PIOB_PSR_P1 PIO Status **/
#define PIOB_PSR_P1		(1 << 1)
/** PIOB_PSR_P0 PIO Status **/
#define PIOB_PSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_oer OER Output Enable Register
@{*/

/** PIOB_OER_P31 Output Enable **/
#define PIOB_OER_P31		(1 << 31)
/** PIOB_OER_P30 Output Enable **/
#define PIOB_OER_P30		(1 << 30)
/** PIOB_OER_P29 Output Enable **/
#define PIOB_OER_P29		(1 << 29)
/** PIOB_OER_P28 Output Enable **/
#define PIOB_OER_P28		(1 << 28)
/** PIOB_OER_P27 Output Enable **/
#define PIOB_OER_P27		(1 << 27)
/** PIOB_OER_P26 Output Enable **/
#define PIOB_OER_P26		(1 << 26)
/** PIOB_OER_P25 Output Enable **/
#define PIOB_OER_P25		(1 << 25)
/** PIOB_OER_P24 Output Enable **/
#define PIOB_OER_P24		(1 << 24)
/** PIOB_OER_P23 Output Enable **/
#define PIOB_OER_P23		(1 << 23)
/** PIOB_OER_P22 Output Enable **/
#define PIOB_OER_P22		(1 << 22)
/** PIOB_OER_P21 Output Enable **/
#define PIOB_OER_P21		(1 << 21)
/** PIOB_OER_P20 Output Enable **/
#define PIOB_OER_P20		(1 << 20)
/** PIOB_OER_P19 Output Enable **/
#define PIOB_OER_P19		(1 << 19)
/** PIOB_OER_P18 Output Enable **/
#define PIOB_OER_P18		(1 << 18)
/** PIOB_OER_P17 Output Enable **/
#define PIOB_OER_P17		(1 << 17)
/** PIOB_OER_P16 Output Enable **/
#define PIOB_OER_P16		(1 << 16)
/** PIOB_OER_P15 Output Enable **/
#define PIOB_OER_P15		(1 << 15)
/** PIOB_OER_P14 Output Enable **/
#define PIOB_OER_P14		(1 << 14)
/** PIOB_OER_P13 Output Enable **/
#define PIOB_OER_P13		(1 << 13)
/** PIOB_OER_P12 Output Enable **/
#define PIOB_OER_P12		(1 << 12)
/** PIOB_OER_P11 Output Enable **/
#define PIOB_OER_P11		(1 << 11)
/** PIOB_OER_P10 Output Enable **/
#define PIOB_OER_P10		(1 << 10)
/** PIOB_OER_P9 Output Enable **/
#define PIOB_OER_P9		(1 << 9)
/** PIOB_OER_P8 Output Enable **/
#define PIOB_OER_P8		(1 << 8)
/** PIOB_OER_P7 Output Enable **/
#define PIOB_OER_P7		(1 << 7)
/** PIOB_OER_P6 Output Enable **/
#define PIOB_OER_P6		(1 << 6)
/** PIOB_OER_P5 Output Enable **/
#define PIOB_OER_P5		(1 << 5)
/** PIOB_OER_P4 Output Enable **/
#define PIOB_OER_P4		(1 << 4)
/** PIOB_OER_P3 Output Enable **/
#define PIOB_OER_P3		(1 << 3)
/** PIOB_OER_P2 Output Enable **/
#define PIOB_OER_P2		(1 << 2)
/** PIOB_OER_P1 Output Enable **/
#define PIOB_OER_P1		(1 << 1)
/** PIOB_OER_P0 Output Enable **/
#define PIOB_OER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_odr ODR Output Disable Register
@{*/

/** PIOB_ODR_P31 Output Disable **/
#define PIOB_ODR_P31		(1 << 31)
/** PIOB_ODR_P30 Output Disable **/
#define PIOB_ODR_P30		(1 << 30)
/** PIOB_ODR_P29 Output Disable **/
#define PIOB_ODR_P29		(1 << 29)
/** PIOB_ODR_P28 Output Disable **/
#define PIOB_ODR_P28		(1 << 28)
/** PIOB_ODR_P27 Output Disable **/
#define PIOB_ODR_P27		(1 << 27)
/** PIOB_ODR_P26 Output Disable **/
#define PIOB_ODR_P26		(1 << 26)
/** PIOB_ODR_P25 Output Disable **/
#define PIOB_ODR_P25		(1 << 25)
/** PIOB_ODR_P24 Output Disable **/
#define PIOB_ODR_P24		(1 << 24)
/** PIOB_ODR_P23 Output Disable **/
#define PIOB_ODR_P23		(1 << 23)
/** PIOB_ODR_P22 Output Disable **/
#define PIOB_ODR_P22		(1 << 22)
/** PIOB_ODR_P21 Output Disable **/
#define PIOB_ODR_P21		(1 << 21)
/** PIOB_ODR_P20 Output Disable **/
#define PIOB_ODR_P20		(1 << 20)
/** PIOB_ODR_P19 Output Disable **/
#define PIOB_ODR_P19		(1 << 19)
/** PIOB_ODR_P18 Output Disable **/
#define PIOB_ODR_P18		(1 << 18)
/** PIOB_ODR_P17 Output Disable **/
#define PIOB_ODR_P17		(1 << 17)
/** PIOB_ODR_P16 Output Disable **/
#define PIOB_ODR_P16		(1 << 16)
/** PIOB_ODR_P15 Output Disable **/
#define PIOB_ODR_P15		(1 << 15)
/** PIOB_ODR_P14 Output Disable **/
#define PIOB_ODR_P14		(1 << 14)
/** PIOB_ODR_P13 Output Disable **/
#define PIOB_ODR_P13		(1 << 13)
/** PIOB_ODR_P12 Output Disable **/
#define PIOB_ODR_P12		(1 << 12)
/** PIOB_ODR_P11 Output Disable **/
#define PIOB_ODR_P11		(1 << 11)
/** PIOB_ODR_P10 Output Disable **/
#define PIOB_ODR_P10		(1 << 10)
/** PIOB_ODR_P9 Output Disable **/
#define PIOB_ODR_P9		(1 << 9)
/** PIOB_ODR_P8 Output Disable **/
#define PIOB_ODR_P8		(1 << 8)
/** PIOB_ODR_P7 Output Disable **/
#define PIOB_ODR_P7		(1 << 7)
/** PIOB_ODR_P6 Output Disable **/
#define PIOB_ODR_P6		(1 << 6)
/** PIOB_ODR_P5 Output Disable **/
#define PIOB_ODR_P5		(1 << 5)
/** PIOB_ODR_P4 Output Disable **/
#define PIOB_ODR_P4		(1 << 4)
/** PIOB_ODR_P3 Output Disable **/
#define PIOB_ODR_P3		(1 << 3)
/** PIOB_ODR_P2 Output Disable **/
#define PIOB_ODR_P2		(1 << 2)
/** PIOB_ODR_P1 Output Disable **/
#define PIOB_ODR_P1		(1 << 1)
/** PIOB_ODR_P0 Output Disable **/
#define PIOB_ODR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_osr OSR Output Status Register
@{*/

/** PIOB_OSR_P31 Output Status **/
#define PIOB_OSR_P31		(1 << 31)
/** PIOB_OSR_P30 Output Status **/
#define PIOB_OSR_P30		(1 << 30)
/** PIOB_OSR_P29 Output Status **/
#define PIOB_OSR_P29		(1 << 29)
/** PIOB_OSR_P28 Output Status **/
#define PIOB_OSR_P28		(1 << 28)
/** PIOB_OSR_P27 Output Status **/
#define PIOB_OSR_P27		(1 << 27)
/** PIOB_OSR_P26 Output Status **/
#define PIOB_OSR_P26		(1 << 26)
/** PIOB_OSR_P25 Output Status **/
#define PIOB_OSR_P25		(1 << 25)
/** PIOB_OSR_P24 Output Status **/
#define PIOB_OSR_P24		(1 << 24)
/** PIOB_OSR_P23 Output Status **/
#define PIOB_OSR_P23		(1 << 23)
/** PIOB_OSR_P22 Output Status **/
#define PIOB_OSR_P22		(1 << 22)
/** PIOB_OSR_P21 Output Status **/
#define PIOB_OSR_P21		(1 << 21)
/** PIOB_OSR_P20 Output Status **/
#define PIOB_OSR_P20		(1 << 20)
/** PIOB_OSR_P19 Output Status **/
#define PIOB_OSR_P19		(1 << 19)
/** PIOB_OSR_P18 Output Status **/
#define PIOB_OSR_P18		(1 << 18)
/** PIOB_OSR_P17 Output Status **/
#define PIOB_OSR_P17		(1 << 17)
/** PIOB_OSR_P16 Output Status **/
#define PIOB_OSR_P16		(1 << 16)
/** PIOB_OSR_P15 Output Status **/
#define PIOB_OSR_P15		(1 << 15)
/** PIOB_OSR_P14 Output Status **/
#define PIOB_OSR_P14		(1 << 14)
/** PIOB_OSR_P13 Output Status **/
#define PIOB_OSR_P13		(1 << 13)
/** PIOB_OSR_P12 Output Status **/
#define PIOB_OSR_P12		(1 << 12)
/** PIOB_OSR_P11 Output Status **/
#define PIOB_OSR_P11		(1 << 11)
/** PIOB_OSR_P10 Output Status **/
#define PIOB_OSR_P10		(1 << 10)
/** PIOB_OSR_P9 Output Status **/
#define PIOB_OSR_P9		(1 << 9)
/** PIOB_OSR_P8 Output Status **/
#define PIOB_OSR_P8		(1 << 8)
/** PIOB_OSR_P7 Output Status **/
#define PIOB_OSR_P7		(1 << 7)
/** PIOB_OSR_P6 Output Status **/
#define PIOB_OSR_P6		(1 << 6)
/** PIOB_OSR_P5 Output Status **/
#define PIOB_OSR_P5		(1 << 5)
/** PIOB_OSR_P4 Output Status **/
#define PIOB_OSR_P4		(1 << 4)
/** PIOB_OSR_P3 Output Status **/
#define PIOB_OSR_P3		(1 << 3)
/** PIOB_OSR_P2 Output Status **/
#define PIOB_OSR_P2		(1 << 2)
/** PIOB_OSR_P1 Output Status **/
#define PIOB_OSR_P1		(1 << 1)
/** PIOB_OSR_P0 Output Status **/
#define PIOB_OSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifer IFER Glitch Input Filter Enable Register
@{*/

/** PIOB_IFER_P31 Input Filter Enable **/
#define PIOB_IFER_P31		(1 << 31)
/** PIOB_IFER_P30 Input Filter Enable **/
#define PIOB_IFER_P30		(1 << 30)
/** PIOB_IFER_P29 Input Filter Enable **/
#define PIOB_IFER_P29		(1 << 29)
/** PIOB_IFER_P28 Input Filter Enable **/
#define PIOB_IFER_P28		(1 << 28)
/** PIOB_IFER_P27 Input Filter Enable **/
#define PIOB_IFER_P27		(1 << 27)
/** PIOB_IFER_P26 Input Filter Enable **/
#define PIOB_IFER_P26		(1 << 26)
/** PIOB_IFER_P25 Input Filter Enable **/
#define PIOB_IFER_P25		(1 << 25)
/** PIOB_IFER_P24 Input Filter Enable **/
#define PIOB_IFER_P24		(1 << 24)
/** PIOB_IFER_P23 Input Filter Enable **/
#define PIOB_IFER_P23		(1 << 23)
/** PIOB_IFER_P22 Input Filter Enable **/
#define PIOB_IFER_P22		(1 << 22)
/** PIOB_IFER_P21 Input Filter Enable **/
#define PIOB_IFER_P21		(1 << 21)
/** PIOB_IFER_P20 Input Filter Enable **/
#define PIOB_IFER_P20		(1 << 20)
/** PIOB_IFER_P19 Input Filter Enable **/
#define PIOB_IFER_P19		(1 << 19)
/** PIOB_IFER_P18 Input Filter Enable **/
#define PIOB_IFER_P18		(1 << 18)
/** PIOB_IFER_P17 Input Filter Enable **/
#define PIOB_IFER_P17		(1 << 17)
/** PIOB_IFER_P16 Input Filter Enable **/
#define PIOB_IFER_P16		(1 << 16)
/** PIOB_IFER_P15 Input Filter Enable **/
#define PIOB_IFER_P15		(1 << 15)
/** PIOB_IFER_P14 Input Filter Enable **/
#define PIOB_IFER_P14		(1 << 14)
/** PIOB_IFER_P13 Input Filter Enable **/
#define PIOB_IFER_P13		(1 << 13)
/** PIOB_IFER_P12 Input Filter Enable **/
#define PIOB_IFER_P12		(1 << 12)
/** PIOB_IFER_P11 Input Filter Enable **/
#define PIOB_IFER_P11		(1 << 11)
/** PIOB_IFER_P10 Input Filter Enable **/
#define PIOB_IFER_P10		(1 << 10)
/** PIOB_IFER_P9 Input Filter Enable **/
#define PIOB_IFER_P9		(1 << 9)
/** PIOB_IFER_P8 Input Filter Enable **/
#define PIOB_IFER_P8		(1 << 8)
/** PIOB_IFER_P7 Input Filter Enable **/
#define PIOB_IFER_P7		(1 << 7)
/** PIOB_IFER_P6 Input Filter Enable **/
#define PIOB_IFER_P6		(1 << 6)
/** PIOB_IFER_P5 Input Filter Enable **/
#define PIOB_IFER_P5		(1 << 5)
/** PIOB_IFER_P4 Input Filter Enable **/
#define PIOB_IFER_P4		(1 << 4)
/** PIOB_IFER_P3 Input Filter Enable **/
#define PIOB_IFER_P3		(1 << 3)
/** PIOB_IFER_P2 Input Filter Enable **/
#define PIOB_IFER_P2		(1 << 2)
/** PIOB_IFER_P1 Input Filter Enable **/
#define PIOB_IFER_P1		(1 << 1)
/** PIOB_IFER_P0 Input Filter Enable **/
#define PIOB_IFER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifdr IFDR Glitch Input Filter Disable Register
@{*/

/** PIOB_IFDR_P31 Input Filter Disable **/
#define PIOB_IFDR_P31		(1 << 31)
/** PIOB_IFDR_P30 Input Filter Disable **/
#define PIOB_IFDR_P30		(1 << 30)
/** PIOB_IFDR_P29 Input Filter Disable **/
#define PIOB_IFDR_P29		(1 << 29)
/** PIOB_IFDR_P28 Input Filter Disable **/
#define PIOB_IFDR_P28		(1 << 28)
/** PIOB_IFDR_P27 Input Filter Disable **/
#define PIOB_IFDR_P27		(1 << 27)
/** PIOB_IFDR_P26 Input Filter Disable **/
#define PIOB_IFDR_P26		(1 << 26)
/** PIOB_IFDR_P25 Input Filter Disable **/
#define PIOB_IFDR_P25		(1 << 25)
/** PIOB_IFDR_P24 Input Filter Disable **/
#define PIOB_IFDR_P24		(1 << 24)
/** PIOB_IFDR_P23 Input Filter Disable **/
#define PIOB_IFDR_P23		(1 << 23)
/** PIOB_IFDR_P22 Input Filter Disable **/
#define PIOB_IFDR_P22		(1 << 22)
/** PIOB_IFDR_P21 Input Filter Disable **/
#define PIOB_IFDR_P21		(1 << 21)
/** PIOB_IFDR_P20 Input Filter Disable **/
#define PIOB_IFDR_P20		(1 << 20)
/** PIOB_IFDR_P19 Input Filter Disable **/
#define PIOB_IFDR_P19		(1 << 19)
/** PIOB_IFDR_P18 Input Filter Disable **/
#define PIOB_IFDR_P18		(1 << 18)
/** PIOB_IFDR_P17 Input Filter Disable **/
#define PIOB_IFDR_P17		(1 << 17)
/** PIOB_IFDR_P16 Input Filter Disable **/
#define PIOB_IFDR_P16		(1 << 16)
/** PIOB_IFDR_P15 Input Filter Disable **/
#define PIOB_IFDR_P15		(1 << 15)
/** PIOB_IFDR_P14 Input Filter Disable **/
#define PIOB_IFDR_P14		(1 << 14)
/** PIOB_IFDR_P13 Input Filter Disable **/
#define PIOB_IFDR_P13		(1 << 13)
/** PIOB_IFDR_P12 Input Filter Disable **/
#define PIOB_IFDR_P12		(1 << 12)
/** PIOB_IFDR_P11 Input Filter Disable **/
#define PIOB_IFDR_P11		(1 << 11)
/** PIOB_IFDR_P10 Input Filter Disable **/
#define PIOB_IFDR_P10		(1 << 10)
/** PIOB_IFDR_P9 Input Filter Disable **/
#define PIOB_IFDR_P9		(1 << 9)
/** PIOB_IFDR_P8 Input Filter Disable **/
#define PIOB_IFDR_P8		(1 << 8)
/** PIOB_IFDR_P7 Input Filter Disable **/
#define PIOB_IFDR_P7		(1 << 7)
/** PIOB_IFDR_P6 Input Filter Disable **/
#define PIOB_IFDR_P6		(1 << 6)
/** PIOB_IFDR_P5 Input Filter Disable **/
#define PIOB_IFDR_P5		(1 << 5)
/** PIOB_IFDR_P4 Input Filter Disable **/
#define PIOB_IFDR_P4		(1 << 4)
/** PIOB_IFDR_P3 Input Filter Disable **/
#define PIOB_IFDR_P3		(1 << 3)
/** PIOB_IFDR_P2 Input Filter Disable **/
#define PIOB_IFDR_P2		(1 << 2)
/** PIOB_IFDR_P1 Input Filter Disable **/
#define PIOB_IFDR_P1		(1 << 1)
/** PIOB_IFDR_P0 Input Filter Disable **/
#define PIOB_IFDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifsr IFSR Glitch Input Filter Status Register
@{*/

/** PIOB_IFSR_P31 Input Filer Status **/
#define PIOB_IFSR_P31		(1 << 31)
/** PIOB_IFSR_P30 Input Filer Status **/
#define PIOB_IFSR_P30		(1 << 30)
/** PIOB_IFSR_P29 Input Filer Status **/
#define PIOB_IFSR_P29		(1 << 29)
/** PIOB_IFSR_P28 Input Filer Status **/
#define PIOB_IFSR_P28		(1 << 28)
/** PIOB_IFSR_P27 Input Filer Status **/
#define PIOB_IFSR_P27		(1 << 27)
/** PIOB_IFSR_P26 Input Filer Status **/
#define PIOB_IFSR_P26		(1 << 26)
/** PIOB_IFSR_P25 Input Filer Status **/
#define PIOB_IFSR_P25		(1 << 25)
/** PIOB_IFSR_P24 Input Filer Status **/
#define PIOB_IFSR_P24		(1 << 24)
/** PIOB_IFSR_P23 Input Filer Status **/
#define PIOB_IFSR_P23		(1 << 23)
/** PIOB_IFSR_P22 Input Filer Status **/
#define PIOB_IFSR_P22		(1 << 22)
/** PIOB_IFSR_P21 Input Filer Status **/
#define PIOB_IFSR_P21		(1 << 21)
/** PIOB_IFSR_P20 Input Filer Status **/
#define PIOB_IFSR_P20		(1 << 20)
/** PIOB_IFSR_P19 Input Filer Status **/
#define PIOB_IFSR_P19		(1 << 19)
/** PIOB_IFSR_P18 Input Filer Status **/
#define PIOB_IFSR_P18		(1 << 18)
/** PIOB_IFSR_P17 Input Filer Status **/
#define PIOB_IFSR_P17		(1 << 17)
/** PIOB_IFSR_P16 Input Filer Status **/
#define PIOB_IFSR_P16		(1 << 16)
/** PIOB_IFSR_P15 Input Filer Status **/
#define PIOB_IFSR_P15		(1 << 15)
/** PIOB_IFSR_P14 Input Filer Status **/
#define PIOB_IFSR_P14		(1 << 14)
/** PIOB_IFSR_P13 Input Filer Status **/
#define PIOB_IFSR_P13		(1 << 13)
/** PIOB_IFSR_P12 Input Filer Status **/
#define PIOB_IFSR_P12		(1 << 12)
/** PIOB_IFSR_P11 Input Filer Status **/
#define PIOB_IFSR_P11		(1 << 11)
/** PIOB_IFSR_P10 Input Filer Status **/
#define PIOB_IFSR_P10		(1 << 10)
/** PIOB_IFSR_P9 Input Filer Status **/
#define PIOB_IFSR_P9		(1 << 9)
/** PIOB_IFSR_P8 Input Filer Status **/
#define PIOB_IFSR_P8		(1 << 8)
/** PIOB_IFSR_P7 Input Filer Status **/
#define PIOB_IFSR_P7		(1 << 7)
/** PIOB_IFSR_P6 Input Filer Status **/
#define PIOB_IFSR_P6		(1 << 6)
/** PIOB_IFSR_P5 Input Filer Status **/
#define PIOB_IFSR_P5		(1 << 5)
/** PIOB_IFSR_P4 Input Filer Status **/
#define PIOB_IFSR_P4		(1 << 4)
/** PIOB_IFSR_P3 Input Filer Status **/
#define PIOB_IFSR_P3		(1 << 3)
/** PIOB_IFSR_P2 Input Filer Status **/
#define PIOB_IFSR_P2		(1 << 2)
/** PIOB_IFSR_P1 Input Filer Status **/
#define PIOB_IFSR_P1		(1 << 1)
/** PIOB_IFSR_P0 Input Filer Status **/
#define PIOB_IFSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_sodr SODR Set Output Data Register
@{*/

/** PIOB_SODR_P31 Set Output Data **/
#define PIOB_SODR_P31		(1 << 31)
/** PIOB_SODR_P30 Set Output Data **/
#define PIOB_SODR_P30		(1 << 30)
/** PIOB_SODR_P29 Set Output Data **/
#define PIOB_SODR_P29		(1 << 29)
/** PIOB_SODR_P28 Set Output Data **/
#define PIOB_SODR_P28		(1 << 28)
/** PIOB_SODR_P27 Set Output Data **/
#define PIOB_SODR_P27		(1 << 27)
/** PIOB_SODR_P26 Set Output Data **/
#define PIOB_SODR_P26		(1 << 26)
/** PIOB_SODR_P25 Set Output Data **/
#define PIOB_SODR_P25		(1 << 25)
/** PIOB_SODR_P24 Set Output Data **/
#define PIOB_SODR_P24		(1 << 24)
/** PIOB_SODR_P23 Set Output Data **/
#define PIOB_SODR_P23		(1 << 23)
/** PIOB_SODR_P22 Set Output Data **/
#define PIOB_SODR_P22		(1 << 22)
/** PIOB_SODR_P21 Set Output Data **/
#define PIOB_SODR_P21		(1 << 21)
/** PIOB_SODR_P20 Set Output Data **/
#define PIOB_SODR_P20		(1 << 20)
/** PIOB_SODR_P19 Set Output Data **/
#define PIOB_SODR_P19		(1 << 19)
/** PIOB_SODR_P18 Set Output Data **/
#define PIOB_SODR_P18		(1 << 18)
/** PIOB_SODR_P17 Set Output Data **/
#define PIOB_SODR_P17		(1 << 17)
/** PIOB_SODR_P16 Set Output Data **/
#define PIOB_SODR_P16		(1 << 16)
/** PIOB_SODR_P15 Set Output Data **/
#define PIOB_SODR_P15		(1 << 15)
/** PIOB_SODR_P14 Set Output Data **/
#define PIOB_SODR_P14		(1 << 14)
/** PIOB_SODR_P13 Set Output Data **/
#define PIOB_SODR_P13		(1 << 13)
/** PIOB_SODR_P12 Set Output Data **/
#define PIOB_SODR_P12		(1 << 12)
/** PIOB_SODR_P11 Set Output Data **/
#define PIOB_SODR_P11		(1 << 11)
/** PIOB_SODR_P10 Set Output Data **/
#define PIOB_SODR_P10		(1 << 10)
/** PIOB_SODR_P9 Set Output Data **/
#define PIOB_SODR_P9		(1 << 9)
/** PIOB_SODR_P8 Set Output Data **/
#define PIOB_SODR_P8		(1 << 8)
/** PIOB_SODR_P7 Set Output Data **/
#define PIOB_SODR_P7		(1 << 7)
/** PIOB_SODR_P6 Set Output Data **/
#define PIOB_SODR_P6		(1 << 6)
/** PIOB_SODR_P5 Set Output Data **/
#define PIOB_SODR_P5		(1 << 5)
/** PIOB_SODR_P4 Set Output Data **/
#define PIOB_SODR_P4		(1 << 4)
/** PIOB_SODR_P3 Set Output Data **/
#define PIOB_SODR_P3		(1 << 3)
/** PIOB_SODR_P2 Set Output Data **/
#define PIOB_SODR_P2		(1 << 2)
/** PIOB_SODR_P1 Set Output Data **/
#define PIOB_SODR_P1		(1 << 1)
/** PIOB_SODR_P0 Set Output Data **/
#define PIOB_SODR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_codr CODR Clear Output Data Register
@{*/

/** PIOB_CODR_P31 Clear Output Data **/
#define PIOB_CODR_P31		(1 << 31)
/** PIOB_CODR_P30 Clear Output Data **/
#define PIOB_CODR_P30		(1 << 30)
/** PIOB_CODR_P29 Clear Output Data **/
#define PIOB_CODR_P29		(1 << 29)
/** PIOB_CODR_P28 Clear Output Data **/
#define PIOB_CODR_P28		(1 << 28)
/** PIOB_CODR_P27 Clear Output Data **/
#define PIOB_CODR_P27		(1 << 27)
/** PIOB_CODR_P26 Clear Output Data **/
#define PIOB_CODR_P26		(1 << 26)
/** PIOB_CODR_P25 Clear Output Data **/
#define PIOB_CODR_P25		(1 << 25)
/** PIOB_CODR_P24 Clear Output Data **/
#define PIOB_CODR_P24		(1 << 24)
/** PIOB_CODR_P23 Clear Output Data **/
#define PIOB_CODR_P23		(1 << 23)
/** PIOB_CODR_P22 Clear Output Data **/
#define PIOB_CODR_P22		(1 << 22)
/** PIOB_CODR_P21 Clear Output Data **/
#define PIOB_CODR_P21		(1 << 21)
/** PIOB_CODR_P20 Clear Output Data **/
#define PIOB_CODR_P20		(1 << 20)
/** PIOB_CODR_P19 Clear Output Data **/
#define PIOB_CODR_P19		(1 << 19)
/** PIOB_CODR_P18 Clear Output Data **/
#define PIOB_CODR_P18		(1 << 18)
/** PIOB_CODR_P17 Clear Output Data **/
#define PIOB_CODR_P17		(1 << 17)
/** PIOB_CODR_P16 Clear Output Data **/
#define PIOB_CODR_P16		(1 << 16)
/** PIOB_CODR_P15 Clear Output Data **/
#define PIOB_CODR_P15		(1 << 15)
/** PIOB_CODR_P14 Clear Output Data **/
#define PIOB_CODR_P14		(1 << 14)
/** PIOB_CODR_P13 Clear Output Data **/
#define PIOB_CODR_P13		(1 << 13)
/** PIOB_CODR_P12 Clear Output Data **/
#define PIOB_CODR_P12		(1 << 12)
/** PIOB_CODR_P11 Clear Output Data **/
#define PIOB_CODR_P11		(1 << 11)
/** PIOB_CODR_P10 Clear Output Data **/
#define PIOB_CODR_P10		(1 << 10)
/** PIOB_CODR_P9 Clear Output Data **/
#define PIOB_CODR_P9		(1 << 9)
/** PIOB_CODR_P8 Clear Output Data **/
#define PIOB_CODR_P8		(1 << 8)
/** PIOB_CODR_P7 Clear Output Data **/
#define PIOB_CODR_P7		(1 << 7)
/** PIOB_CODR_P6 Clear Output Data **/
#define PIOB_CODR_P6		(1 << 6)
/** PIOB_CODR_P5 Clear Output Data **/
#define PIOB_CODR_P5		(1 << 5)
/** PIOB_CODR_P4 Clear Output Data **/
#define PIOB_CODR_P4		(1 << 4)
/** PIOB_CODR_P3 Clear Output Data **/
#define PIOB_CODR_P3		(1 << 3)
/** PIOB_CODR_P2 Clear Output Data **/
#define PIOB_CODR_P2		(1 << 2)
/** PIOB_CODR_P1 Clear Output Data **/
#define PIOB_CODR_P1		(1 << 1)
/** PIOB_CODR_P0 Clear Output Data **/
#define PIOB_CODR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_odsr ODSR Output Data Status Register
@{*/

/** PIOB_ODSR_P31 Output Data Status **/
#define PIOB_ODSR_P31		(1 << 31)
/** PIOB_ODSR_P30 Output Data Status **/
#define PIOB_ODSR_P30		(1 << 30)
/** PIOB_ODSR_P29 Output Data Status **/
#define PIOB_ODSR_P29		(1 << 29)
/** PIOB_ODSR_P28 Output Data Status **/
#define PIOB_ODSR_P28		(1 << 28)
/** PIOB_ODSR_P27 Output Data Status **/
#define PIOB_ODSR_P27		(1 << 27)
/** PIOB_ODSR_P26 Output Data Status **/
#define PIOB_ODSR_P26		(1 << 26)
/** PIOB_ODSR_P25 Output Data Status **/
#define PIOB_ODSR_P25		(1 << 25)
/** PIOB_ODSR_P24 Output Data Status **/
#define PIOB_ODSR_P24		(1 << 24)
/** PIOB_ODSR_P23 Output Data Status **/
#define PIOB_ODSR_P23		(1 << 23)
/** PIOB_ODSR_P22 Output Data Status **/
#define PIOB_ODSR_P22		(1 << 22)
/** PIOB_ODSR_P21 Output Data Status **/
#define PIOB_ODSR_P21		(1 << 21)
/** PIOB_ODSR_P20 Output Data Status **/
#define PIOB_ODSR_P20		(1 << 20)
/** PIOB_ODSR_P19 Output Data Status **/
#define PIOB_ODSR_P19		(1 << 19)
/** PIOB_ODSR_P18 Output Data Status **/
#define PIOB_ODSR_P18		(1 << 18)
/** PIOB_ODSR_P17 Output Data Status **/
#define PIOB_ODSR_P17		(1 << 17)
/** PIOB_ODSR_P16 Output Data Status **/
#define PIOB_ODSR_P16		(1 << 16)
/** PIOB_ODSR_P15 Output Data Status **/
#define PIOB_ODSR_P15		(1 << 15)
/** PIOB_ODSR_P14 Output Data Status **/
#define PIOB_ODSR_P14		(1 << 14)
/** PIOB_ODSR_P13 Output Data Status **/
#define PIOB_ODSR_P13		(1 << 13)
/** PIOB_ODSR_P12 Output Data Status **/
#define PIOB_ODSR_P12		(1 << 12)
/** PIOB_ODSR_P11 Output Data Status **/
#define PIOB_ODSR_P11		(1 << 11)
/** PIOB_ODSR_P10 Output Data Status **/
#define PIOB_ODSR_P10		(1 << 10)
/** PIOB_ODSR_P9 Output Data Status **/
#define PIOB_ODSR_P9		(1 << 9)
/** PIOB_ODSR_P8 Output Data Status **/
#define PIOB_ODSR_P8		(1 << 8)
/** PIOB_ODSR_P7 Output Data Status **/
#define PIOB_ODSR_P7		(1 << 7)
/** PIOB_ODSR_P6 Output Data Status **/
#define PIOB_ODSR_P6		(1 << 6)
/** PIOB_ODSR_P5 Output Data Status **/
#define PIOB_ODSR_P5		(1 << 5)
/** PIOB_ODSR_P4 Output Data Status **/
#define PIOB_ODSR_P4		(1 << 4)
/** PIOB_ODSR_P3 Output Data Status **/
#define PIOB_ODSR_P3		(1 << 3)
/** PIOB_ODSR_P2 Output Data Status **/
#define PIOB_ODSR_P2		(1 << 2)
/** PIOB_ODSR_P1 Output Data Status **/
#define PIOB_ODSR_P1		(1 << 1)
/** PIOB_ODSR_P0 Output Data Status **/
#define PIOB_ODSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_pdsr PDSR Pin Data Status Register
@{*/

/** PIOB_PDSR_P31 Output Data Status **/
#define PIOB_PDSR_P31		(1 << 31)
/** PIOB_PDSR_P30 Output Data Status **/
#define PIOB_PDSR_P30		(1 << 30)
/** PIOB_PDSR_P29 Output Data Status **/
#define PIOB_PDSR_P29		(1 << 29)
/** PIOB_PDSR_P28 Output Data Status **/
#define PIOB_PDSR_P28		(1 << 28)
/** PIOB_PDSR_P27 Output Data Status **/
#define PIOB_PDSR_P27		(1 << 27)
/** PIOB_PDSR_P26 Output Data Status **/
#define PIOB_PDSR_P26		(1 << 26)
/** PIOB_PDSR_P25 Output Data Status **/
#define PIOB_PDSR_P25		(1 << 25)
/** PIOB_PDSR_P24 Output Data Status **/
#define PIOB_PDSR_P24		(1 << 24)
/** PIOB_PDSR_P23 Output Data Status **/
#define PIOB_PDSR_P23		(1 << 23)
/** PIOB_PDSR_P22 Output Data Status **/
#define PIOB_PDSR_P22		(1 << 22)
/** PIOB_PDSR_P21 Output Data Status **/
#define PIOB_PDSR_P21		(1 << 21)
/** PIOB_PDSR_P20 Output Data Status **/
#define PIOB_PDSR_P20		(1 << 20)
/** PIOB_PDSR_P19 Output Data Status **/
#define PIOB_PDSR_P19		(1 << 19)
/** PIOB_PDSR_P18 Output Data Status **/
#define PIOB_PDSR_P18		(1 << 18)
/** PIOB_PDSR_P17 Output Data Status **/
#define PIOB_PDSR_P17		(1 << 17)
/** PIOB_PDSR_P16 Output Data Status **/
#define PIOB_PDSR_P16		(1 << 16)
/** PIOB_PDSR_P15 Output Data Status **/
#define PIOB_PDSR_P15		(1 << 15)
/** PIOB_PDSR_P14 Output Data Status **/
#define PIOB_PDSR_P14		(1 << 14)
/** PIOB_PDSR_P13 Output Data Status **/
#define PIOB_PDSR_P13		(1 << 13)
/** PIOB_PDSR_P12 Output Data Status **/
#define PIOB_PDSR_P12		(1 << 12)
/** PIOB_PDSR_P11 Output Data Status **/
#define PIOB_PDSR_P11		(1 << 11)
/** PIOB_PDSR_P10 Output Data Status **/
#define PIOB_PDSR_P10		(1 << 10)
/** PIOB_PDSR_P9 Output Data Status **/
#define PIOB_PDSR_P9		(1 << 9)
/** PIOB_PDSR_P8 Output Data Status **/
#define PIOB_PDSR_P8		(1 << 8)
/** PIOB_PDSR_P7 Output Data Status **/
#define PIOB_PDSR_P7		(1 << 7)
/** PIOB_PDSR_P6 Output Data Status **/
#define PIOB_PDSR_P6		(1 << 6)
/** PIOB_PDSR_P5 Output Data Status **/
#define PIOB_PDSR_P5		(1 << 5)
/** PIOB_PDSR_P4 Output Data Status **/
#define PIOB_PDSR_P4		(1 << 4)
/** PIOB_PDSR_P3 Output Data Status **/
#define PIOB_PDSR_P3		(1 << 3)
/** PIOB_PDSR_P2 Output Data Status **/
#define PIOB_PDSR_P2		(1 << 2)
/** PIOB_PDSR_P1 Output Data Status **/
#define PIOB_PDSR_P1		(1 << 1)
/** PIOB_PDSR_P0 Output Data Status **/
#define PIOB_PDSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ier IER Interrupt Enable Register
@{*/

/** PIOB_IER_P31 Input Change Interrupt Enable **/
#define PIOB_IER_P31		(1 << 31)
/** PIOB_IER_P30 Input Change Interrupt Enable **/
#define PIOB_IER_P30		(1 << 30)
/** PIOB_IER_P29 Input Change Interrupt Enable **/
#define PIOB_IER_P29		(1 << 29)
/** PIOB_IER_P28 Input Change Interrupt Enable **/
#define PIOB_IER_P28		(1 << 28)
/** PIOB_IER_P27 Input Change Interrupt Enable **/
#define PIOB_IER_P27		(1 << 27)
/** PIOB_IER_P26 Input Change Interrupt Enable **/
#define PIOB_IER_P26		(1 << 26)
/** PIOB_IER_P25 Input Change Interrupt Enable **/
#define PIOB_IER_P25		(1 << 25)
/** PIOB_IER_P24 Input Change Interrupt Enable **/
#define PIOB_IER_P24		(1 << 24)
/** PIOB_IER_P23 Input Change Interrupt Enable **/
#define PIOB_IER_P23		(1 << 23)
/** PIOB_IER_P22 Input Change Interrupt Enable **/
#define PIOB_IER_P22		(1 << 22)
/** PIOB_IER_P21 Input Change Interrupt Enable **/
#define PIOB_IER_P21		(1 << 21)
/** PIOB_IER_P20 Input Change Interrupt Enable **/
#define PIOB_IER_P20		(1 << 20)
/** PIOB_IER_P19 Input Change Interrupt Enable **/
#define PIOB_IER_P19		(1 << 19)
/** PIOB_IER_P18 Input Change Interrupt Enable **/
#define PIOB_IER_P18		(1 << 18)
/** PIOB_IER_P17 Input Change Interrupt Enable **/
#define PIOB_IER_P17		(1 << 17)
/** PIOB_IER_P16 Input Change Interrupt Enable **/
#define PIOB_IER_P16		(1 << 16)
/** PIOB_IER_P15 Input Change Interrupt Enable **/
#define PIOB_IER_P15		(1 << 15)
/** PIOB_IER_P14 Input Change Interrupt Enable **/
#define PIOB_IER_P14		(1 << 14)
/** PIOB_IER_P13 Input Change Interrupt Enable **/
#define PIOB_IER_P13		(1 << 13)
/** PIOB_IER_P12 Input Change Interrupt Enable **/
#define PIOB_IER_P12		(1 << 12)
/** PIOB_IER_P11 Input Change Interrupt Enable **/
#define PIOB_IER_P11		(1 << 11)
/** PIOB_IER_P10 Input Change Interrupt Enable **/
#define PIOB_IER_P10		(1 << 10)
/** PIOB_IER_P9 Input Change Interrupt Enable **/
#define PIOB_IER_P9		(1 << 9)
/** PIOB_IER_P8 Input Change Interrupt Enable **/
#define PIOB_IER_P8		(1 << 8)
/** PIOB_IER_P7 Input Change Interrupt Enable **/
#define PIOB_IER_P7		(1 << 7)
/** PIOB_IER_P6 Input Change Interrupt Enable **/
#define PIOB_IER_P6		(1 << 6)
/** PIOB_IER_P5 Input Change Interrupt Enable **/
#define PIOB_IER_P5		(1 << 5)
/** PIOB_IER_P4 Input Change Interrupt Enable **/
#define PIOB_IER_P4		(1 << 4)
/** PIOB_IER_P3 Input Change Interrupt Enable **/
#define PIOB_IER_P3		(1 << 3)
/** PIOB_IER_P2 Input Change Interrupt Enable **/
#define PIOB_IER_P2		(1 << 2)
/** PIOB_IER_P1 Input Change Interrupt Enable **/
#define PIOB_IER_P1		(1 << 1)
/** PIOB_IER_P0 Input Change Interrupt Enable **/
#define PIOB_IER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_idr IDR Interrupt Disable Register
@{*/

/** PIOB_IDR_P31 Input Change Interrupt Disable **/
#define PIOB_IDR_P31		(1 << 31)
/** PIOB_IDR_P30 Input Change Interrupt Disable **/
#define PIOB_IDR_P30		(1 << 30)
/** PIOB_IDR_P29 Input Change Interrupt Disable **/
#define PIOB_IDR_P29		(1 << 29)
/** PIOB_IDR_P28 Input Change Interrupt Disable **/
#define PIOB_IDR_P28		(1 << 28)
/** PIOB_IDR_P27 Input Change Interrupt Disable **/
#define PIOB_IDR_P27		(1 << 27)
/** PIOB_IDR_P26 Input Change Interrupt Disable **/
#define PIOB_IDR_P26		(1 << 26)
/** PIOB_IDR_P25 Input Change Interrupt Disable **/
#define PIOB_IDR_P25		(1 << 25)
/** PIOB_IDR_P24 Input Change Interrupt Disable **/
#define PIOB_IDR_P24		(1 << 24)
/** PIOB_IDR_P23 Input Change Interrupt Disable **/
#define PIOB_IDR_P23		(1 << 23)
/** PIOB_IDR_P22 Input Change Interrupt Disable **/
#define PIOB_IDR_P22		(1 << 22)
/** PIOB_IDR_P21 Input Change Interrupt Disable **/
#define PIOB_IDR_P21		(1 << 21)
/** PIOB_IDR_P20 Input Change Interrupt Disable **/
#define PIOB_IDR_P20		(1 << 20)
/** PIOB_IDR_P19 Input Change Interrupt Disable **/
#define PIOB_IDR_P19		(1 << 19)
/** PIOB_IDR_P18 Input Change Interrupt Disable **/
#define PIOB_IDR_P18		(1 << 18)
/** PIOB_IDR_P17 Input Change Interrupt Disable **/
#define PIOB_IDR_P17		(1 << 17)
/** PIOB_IDR_P16 Input Change Interrupt Disable **/
#define PIOB_IDR_P16		(1 << 16)
/** PIOB_IDR_P15 Input Change Interrupt Disable **/
#define PIOB_IDR_P15		(1 << 15)
/** PIOB_IDR_P14 Input Change Interrupt Disable **/
#define PIOB_IDR_P14		(1 << 14)
/** PIOB_IDR_P13 Input Change Interrupt Disable **/
#define PIOB_IDR_P13		(1 << 13)
/** PIOB_IDR_P12 Input Change Interrupt Disable **/
#define PIOB_IDR_P12		(1 << 12)
/** PIOB_IDR_P11 Input Change Interrupt Disable **/
#define PIOB_IDR_P11		(1 << 11)
/** PIOB_IDR_P10 Input Change Interrupt Disable **/
#define PIOB_IDR_P10		(1 << 10)
/** PIOB_IDR_P9 Input Change Interrupt Disable **/
#define PIOB_IDR_P9		(1 << 9)
/** PIOB_IDR_P8 Input Change Interrupt Disable **/
#define PIOB_IDR_P8		(1 << 8)
/** PIOB_IDR_P7 Input Change Interrupt Disable **/
#define PIOB_IDR_P7		(1 << 7)
/** PIOB_IDR_P6 Input Change Interrupt Disable **/
#define PIOB_IDR_P6		(1 << 6)
/** PIOB_IDR_P5 Input Change Interrupt Disable **/
#define PIOB_IDR_P5		(1 << 5)
/** PIOB_IDR_P4 Input Change Interrupt Disable **/
#define PIOB_IDR_P4		(1 << 4)
/** PIOB_IDR_P3 Input Change Interrupt Disable **/
#define PIOB_IDR_P3		(1 << 3)
/** PIOB_IDR_P2 Input Change Interrupt Disable **/
#define PIOB_IDR_P2		(1 << 2)
/** PIOB_IDR_P1 Input Change Interrupt Disable **/
#define PIOB_IDR_P1		(1 << 1)
/** PIOB_IDR_P0 Input Change Interrupt Disable **/
#define PIOB_IDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_imr IMR Interrupt Mask Register
@{*/

/** PIOB_IMR_P31 Input Change Interrupt Mask **/
#define PIOB_IMR_P31		(1 << 31)
/** PIOB_IMR_P30 Input Change Interrupt Mask **/
#define PIOB_IMR_P30		(1 << 30)
/** PIOB_IMR_P29 Input Change Interrupt Mask **/
#define PIOB_IMR_P29		(1 << 29)
/** PIOB_IMR_P28 Input Change Interrupt Mask **/
#define PIOB_IMR_P28		(1 << 28)
/** PIOB_IMR_P27 Input Change Interrupt Mask **/
#define PIOB_IMR_P27		(1 << 27)
/** PIOB_IMR_P26 Input Change Interrupt Mask **/
#define PIOB_IMR_P26		(1 << 26)
/** PIOB_IMR_P25 Input Change Interrupt Mask **/
#define PIOB_IMR_P25		(1 << 25)
/** PIOB_IMR_P24 Input Change Interrupt Mask **/
#define PIOB_IMR_P24		(1 << 24)
/** PIOB_IMR_P23 Input Change Interrupt Mask **/
#define PIOB_IMR_P23		(1 << 23)
/** PIOB_IMR_P22 Input Change Interrupt Mask **/
#define PIOB_IMR_P22		(1 << 22)
/** PIOB_IMR_P21 Input Change Interrupt Mask **/
#define PIOB_IMR_P21		(1 << 21)
/** PIOB_IMR_P20 Input Change Interrupt Mask **/
#define PIOB_IMR_P20		(1 << 20)
/** PIOB_IMR_P19 Input Change Interrupt Mask **/
#define PIOB_IMR_P19		(1 << 19)
/** PIOB_IMR_P18 Input Change Interrupt Mask **/
#define PIOB_IMR_P18		(1 << 18)
/** PIOB_IMR_P17 Input Change Interrupt Mask **/
#define PIOB_IMR_P17		(1 << 17)
/** PIOB_IMR_P16 Input Change Interrupt Mask **/
#define PIOB_IMR_P16		(1 << 16)
/** PIOB_IMR_P15 Input Change Interrupt Mask **/
#define PIOB_IMR_P15		(1 << 15)
/** PIOB_IMR_P14 Input Change Interrupt Mask **/
#define PIOB_IMR_P14		(1 << 14)
/** PIOB_IMR_P13 Input Change Interrupt Mask **/
#define PIOB_IMR_P13		(1 << 13)
/** PIOB_IMR_P12 Input Change Interrupt Mask **/
#define PIOB_IMR_P12		(1 << 12)
/** PIOB_IMR_P11 Input Change Interrupt Mask **/
#define PIOB_IMR_P11		(1 << 11)
/** PIOB_IMR_P10 Input Change Interrupt Mask **/
#define PIOB_IMR_P10		(1 << 10)
/** PIOB_IMR_P9 Input Change Interrupt Mask **/
#define PIOB_IMR_P9		(1 << 9)
/** PIOB_IMR_P8 Input Change Interrupt Mask **/
#define PIOB_IMR_P8		(1 << 8)
/** PIOB_IMR_P7 Input Change Interrupt Mask **/
#define PIOB_IMR_P7		(1 << 7)
/** PIOB_IMR_P6 Input Change Interrupt Mask **/
#define PIOB_IMR_P6		(1 << 6)
/** PIOB_IMR_P5 Input Change Interrupt Mask **/
#define PIOB_IMR_P5		(1 << 5)
/** PIOB_IMR_P4 Input Change Interrupt Mask **/
#define PIOB_IMR_P4		(1 << 4)
/** PIOB_IMR_P3 Input Change Interrupt Mask **/
#define PIOB_IMR_P3		(1 << 3)
/** PIOB_IMR_P2 Input Change Interrupt Mask **/
#define PIOB_IMR_P2		(1 << 2)
/** PIOB_IMR_P1 Input Change Interrupt Mask **/
#define PIOB_IMR_P1		(1 << 1)
/** PIOB_IMR_P0 Input Change Interrupt Mask **/
#define PIOB_IMR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_isr ISR Interrupt Status Register
@{*/

/** PIOB_ISR_P31 Input Change Interrupt Status **/
#define PIOB_ISR_P31		(1 << 31)
/** PIOB_ISR_P30 Input Change Interrupt Status **/
#define PIOB_ISR_P30		(1 << 30)
/** PIOB_ISR_P29 Input Change Interrupt Status **/
#define PIOB_ISR_P29		(1 << 29)
/** PIOB_ISR_P28 Input Change Interrupt Status **/
#define PIOB_ISR_P28		(1 << 28)
/** PIOB_ISR_P27 Input Change Interrupt Status **/
#define PIOB_ISR_P27		(1 << 27)
/** PIOB_ISR_P26 Input Change Interrupt Status **/
#define PIOB_ISR_P26		(1 << 26)
/** PIOB_ISR_P25 Input Change Interrupt Status **/
#define PIOB_ISR_P25		(1 << 25)
/** PIOB_ISR_P24 Input Change Interrupt Status **/
#define PIOB_ISR_P24		(1 << 24)
/** PIOB_ISR_P23 Input Change Interrupt Status **/
#define PIOB_ISR_P23		(1 << 23)
/** PIOB_ISR_P22 Input Change Interrupt Status **/
#define PIOB_ISR_P22		(1 << 22)
/** PIOB_ISR_P21 Input Change Interrupt Status **/
#define PIOB_ISR_P21		(1 << 21)
/** PIOB_ISR_P20 Input Change Interrupt Status **/
#define PIOB_ISR_P20		(1 << 20)
/** PIOB_ISR_P19 Input Change Interrupt Status **/
#define PIOB_ISR_P19		(1 << 19)
/** PIOB_ISR_P18 Input Change Interrupt Status **/
#define PIOB_ISR_P18		(1 << 18)
/** PIOB_ISR_P17 Input Change Interrupt Status **/
#define PIOB_ISR_P17		(1 << 17)
/** PIOB_ISR_P16 Input Change Interrupt Status **/
#define PIOB_ISR_P16		(1 << 16)
/** PIOB_ISR_P15 Input Change Interrupt Status **/
#define PIOB_ISR_P15		(1 << 15)
/** PIOB_ISR_P14 Input Change Interrupt Status **/
#define PIOB_ISR_P14		(1 << 14)
/** PIOB_ISR_P13 Input Change Interrupt Status **/
#define PIOB_ISR_P13		(1 << 13)
/** PIOB_ISR_P12 Input Change Interrupt Status **/
#define PIOB_ISR_P12		(1 << 12)
/** PIOB_ISR_P11 Input Change Interrupt Status **/
#define PIOB_ISR_P11		(1 << 11)
/** PIOB_ISR_P10 Input Change Interrupt Status **/
#define PIOB_ISR_P10		(1 << 10)
/** PIOB_ISR_P9 Input Change Interrupt Status **/
#define PIOB_ISR_P9		(1 << 9)
/** PIOB_ISR_P8 Input Change Interrupt Status **/
#define PIOB_ISR_P8		(1 << 8)
/** PIOB_ISR_P7 Input Change Interrupt Status **/
#define PIOB_ISR_P7		(1 << 7)
/** PIOB_ISR_P6 Input Change Interrupt Status **/
#define PIOB_ISR_P6		(1 << 6)
/** PIOB_ISR_P5 Input Change Interrupt Status **/
#define PIOB_ISR_P5		(1 << 5)
/** PIOB_ISR_P4 Input Change Interrupt Status **/
#define PIOB_ISR_P4		(1 << 4)
/** PIOB_ISR_P3 Input Change Interrupt Status **/
#define PIOB_ISR_P3		(1 << 3)
/** PIOB_ISR_P2 Input Change Interrupt Status **/
#define PIOB_ISR_P2		(1 << 2)
/** PIOB_ISR_P1 Input Change Interrupt Status **/
#define PIOB_ISR_P1		(1 << 1)
/** PIOB_ISR_P0 Input Change Interrupt Status **/
#define PIOB_ISR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_mder MDER Multi-driver Enable Register
@{*/

/** PIOB_MDER_P31 Multi Drive Enable. **/
#define PIOB_MDER_P31		(1 << 31)
/** PIOB_MDER_P30 Multi Drive Enable. **/
#define PIOB_MDER_P30		(1 << 30)
/** PIOB_MDER_P29 Multi Drive Enable. **/
#define PIOB_MDER_P29		(1 << 29)
/** PIOB_MDER_P28 Multi Drive Enable. **/
#define PIOB_MDER_P28		(1 << 28)
/** PIOB_MDER_P27 Multi Drive Enable. **/
#define PIOB_MDER_P27		(1 << 27)
/** PIOB_MDER_P26 Multi Drive Enable. **/
#define PIOB_MDER_P26		(1 << 26)
/** PIOB_MDER_P25 Multi Drive Enable. **/
#define PIOB_MDER_P25		(1 << 25)
/** PIOB_MDER_P24 Multi Drive Enable. **/
#define PIOB_MDER_P24		(1 << 24)
/** PIOB_MDER_P23 Multi Drive Enable. **/
#define PIOB_MDER_P23		(1 << 23)
/** PIOB_MDER_P22 Multi Drive Enable. **/
#define PIOB_MDER_P22		(1 << 22)
/** PIOB_MDER_P21 Multi Drive Enable. **/
#define PIOB_MDER_P21		(1 << 21)
/** PIOB_MDER_P20 Multi Drive Enable. **/
#define PIOB_MDER_P20		(1 << 20)
/** PIOB_MDER_P19 Multi Drive Enable. **/
#define PIOB_MDER_P19		(1 << 19)
/** PIOB_MDER_P18 Multi Drive Enable. **/
#define PIOB_MDER_P18		(1 << 18)
/** PIOB_MDER_P17 Multi Drive Enable. **/
#define PIOB_MDER_P17		(1 << 17)
/** PIOB_MDER_P16 Multi Drive Enable. **/
#define PIOB_MDER_P16		(1 << 16)
/** PIOB_MDER_P15 Multi Drive Enable. **/
#define PIOB_MDER_P15		(1 << 15)
/** PIOB_MDER_P14 Multi Drive Enable. **/
#define PIOB_MDER_P14		(1 << 14)
/** PIOB_MDER_P13 Multi Drive Enable. **/
#define PIOB_MDER_P13		(1 << 13)
/** PIOB_MDER_P12 Multi Drive Enable. **/
#define PIOB_MDER_P12		(1 << 12)
/** PIOB_MDER_P11 Multi Drive Enable. **/
#define PIOB_MDER_P11		(1 << 11)
/** PIOB_MDER_P10 Multi Drive Enable. **/
#define PIOB_MDER_P10		(1 << 10)
/** PIOB_MDER_P9 Multi Drive Enable. **/
#define PIOB_MDER_P9		(1 << 9)
/** PIOB_MDER_P8 Multi Drive Enable. **/
#define PIOB_MDER_P8		(1 << 8)
/** PIOB_MDER_P7 Multi Drive Enable. **/
#define PIOB_MDER_P7		(1 << 7)
/** PIOB_MDER_P6 Multi Drive Enable. **/
#define PIOB_MDER_P6		(1 << 6)
/** PIOB_MDER_P5 Multi Drive Enable. **/
#define PIOB_MDER_P5		(1 << 5)
/** PIOB_MDER_P4 Multi Drive Enable. **/
#define PIOB_MDER_P4		(1 << 4)
/** PIOB_MDER_P3 Multi Drive Enable. **/
#define PIOB_MDER_P3		(1 << 3)
/** PIOB_MDER_P2 Multi Drive Enable. **/
#define PIOB_MDER_P2		(1 << 2)
/** PIOB_MDER_P1 Multi Drive Enable. **/
#define PIOB_MDER_P1		(1 << 1)
/** PIOB_MDER_P0 Multi Drive Enable. **/
#define PIOB_MDER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_mddr MDDR Multi-driver Disable Register
@{*/

/** PIOB_MDDR_P31 Multi Drive Disable. **/
#define PIOB_MDDR_P31		(1 << 31)
/** PIOB_MDDR_P30 Multi Drive Disable. **/
#define PIOB_MDDR_P30		(1 << 30)
/** PIOB_MDDR_P29 Multi Drive Disable. **/
#define PIOB_MDDR_P29		(1 << 29)
/** PIOB_MDDR_P28 Multi Drive Disable. **/
#define PIOB_MDDR_P28		(1 << 28)
/** PIOB_MDDR_P27 Multi Drive Disable. **/
#define PIOB_MDDR_P27		(1 << 27)
/** PIOB_MDDR_P26 Multi Drive Disable. **/
#define PIOB_MDDR_P26		(1 << 26)
/** PIOB_MDDR_P25 Multi Drive Disable. **/
#define PIOB_MDDR_P25		(1 << 25)
/** PIOB_MDDR_P24 Multi Drive Disable. **/
#define PIOB_MDDR_P24		(1 << 24)
/** PIOB_MDDR_P23 Multi Drive Disable. **/
#define PIOB_MDDR_P23		(1 << 23)
/** PIOB_MDDR_P22 Multi Drive Disable. **/
#define PIOB_MDDR_P22		(1 << 22)
/** PIOB_MDDR_P21 Multi Drive Disable. **/
#define PIOB_MDDR_P21		(1 << 21)
/** PIOB_MDDR_P20 Multi Drive Disable. **/
#define PIOB_MDDR_P20		(1 << 20)
/** PIOB_MDDR_P19 Multi Drive Disable. **/
#define PIOB_MDDR_P19		(1 << 19)
/** PIOB_MDDR_P18 Multi Drive Disable. **/
#define PIOB_MDDR_P18		(1 << 18)
/** PIOB_MDDR_P17 Multi Drive Disable. **/
#define PIOB_MDDR_P17		(1 << 17)
/** PIOB_MDDR_P16 Multi Drive Disable. **/
#define PIOB_MDDR_P16		(1 << 16)
/** PIOB_MDDR_P15 Multi Drive Disable. **/
#define PIOB_MDDR_P15		(1 << 15)
/** PIOB_MDDR_P14 Multi Drive Disable. **/
#define PIOB_MDDR_P14		(1 << 14)
/** PIOB_MDDR_P13 Multi Drive Disable. **/
#define PIOB_MDDR_P13		(1 << 13)
/** PIOB_MDDR_P12 Multi Drive Disable. **/
#define PIOB_MDDR_P12		(1 << 12)
/** PIOB_MDDR_P11 Multi Drive Disable. **/
#define PIOB_MDDR_P11		(1 << 11)
/** PIOB_MDDR_P10 Multi Drive Disable. **/
#define PIOB_MDDR_P10		(1 << 10)
/** PIOB_MDDR_P9 Multi Drive Disable. **/
#define PIOB_MDDR_P9		(1 << 9)
/** PIOB_MDDR_P8 Multi Drive Disable. **/
#define PIOB_MDDR_P8		(1 << 8)
/** PIOB_MDDR_P7 Multi Drive Disable. **/
#define PIOB_MDDR_P7		(1 << 7)
/** PIOB_MDDR_P6 Multi Drive Disable. **/
#define PIOB_MDDR_P6		(1 << 6)
/** PIOB_MDDR_P5 Multi Drive Disable. **/
#define PIOB_MDDR_P5		(1 << 5)
/** PIOB_MDDR_P4 Multi Drive Disable. **/
#define PIOB_MDDR_P4		(1 << 4)
/** PIOB_MDDR_P3 Multi Drive Disable. **/
#define PIOB_MDDR_P3		(1 << 3)
/** PIOB_MDDR_P2 Multi Drive Disable. **/
#define PIOB_MDDR_P2		(1 << 2)
/** PIOB_MDDR_P1 Multi Drive Disable. **/
#define PIOB_MDDR_P1		(1 << 1)
/** PIOB_MDDR_P0 Multi Drive Disable. **/
#define PIOB_MDDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_mdsr MDSR Multi-driver Status Register
@{*/

/** PIOB_MDSR_P31 Multi Drive Status. **/
#define PIOB_MDSR_P31		(1 << 31)
/** PIOB_MDSR_P30 Multi Drive Status. **/
#define PIOB_MDSR_P30		(1 << 30)
/** PIOB_MDSR_P29 Multi Drive Status. **/
#define PIOB_MDSR_P29		(1 << 29)
/** PIOB_MDSR_P28 Multi Drive Status. **/
#define PIOB_MDSR_P28		(1 << 28)
/** PIOB_MDSR_P27 Multi Drive Status. **/
#define PIOB_MDSR_P27		(1 << 27)
/** PIOB_MDSR_P26 Multi Drive Status. **/
#define PIOB_MDSR_P26		(1 << 26)
/** PIOB_MDSR_P25 Multi Drive Status. **/
#define PIOB_MDSR_P25		(1 << 25)
/** PIOB_MDSR_P24 Multi Drive Status. **/
#define PIOB_MDSR_P24		(1 << 24)
/** PIOB_MDSR_P23 Multi Drive Status. **/
#define PIOB_MDSR_P23		(1 << 23)
/** PIOB_MDSR_P22 Multi Drive Status. **/
#define PIOB_MDSR_P22		(1 << 22)
/** PIOB_MDSR_P21 Multi Drive Status. **/
#define PIOB_MDSR_P21		(1 << 21)
/** PIOB_MDSR_P20 Multi Drive Status. **/
#define PIOB_MDSR_P20		(1 << 20)
/** PIOB_MDSR_P19 Multi Drive Status. **/
#define PIOB_MDSR_P19		(1 << 19)
/** PIOB_MDSR_P18 Multi Drive Status. **/
#define PIOB_MDSR_P18		(1 << 18)
/** PIOB_MDSR_P17 Multi Drive Status. **/
#define PIOB_MDSR_P17		(1 << 17)
/** PIOB_MDSR_P16 Multi Drive Status. **/
#define PIOB_MDSR_P16		(1 << 16)
/** PIOB_MDSR_P15 Multi Drive Status. **/
#define PIOB_MDSR_P15		(1 << 15)
/** PIOB_MDSR_P14 Multi Drive Status. **/
#define PIOB_MDSR_P14		(1 << 14)
/** PIOB_MDSR_P13 Multi Drive Status. **/
#define PIOB_MDSR_P13		(1 << 13)
/** PIOB_MDSR_P12 Multi Drive Status. **/
#define PIOB_MDSR_P12		(1 << 12)
/** PIOB_MDSR_P11 Multi Drive Status. **/
#define PIOB_MDSR_P11		(1 << 11)
/** PIOB_MDSR_P10 Multi Drive Status. **/
#define PIOB_MDSR_P10		(1 << 10)
/** PIOB_MDSR_P9 Multi Drive Status. **/
#define PIOB_MDSR_P9		(1 << 9)
/** PIOB_MDSR_P8 Multi Drive Status. **/
#define PIOB_MDSR_P8		(1 << 8)
/** PIOB_MDSR_P7 Multi Drive Status. **/
#define PIOB_MDSR_P7		(1 << 7)
/** PIOB_MDSR_P6 Multi Drive Status. **/
#define PIOB_MDSR_P6		(1 << 6)
/** PIOB_MDSR_P5 Multi Drive Status. **/
#define PIOB_MDSR_P5		(1 << 5)
/** PIOB_MDSR_P4 Multi Drive Status. **/
#define PIOB_MDSR_P4		(1 << 4)
/** PIOB_MDSR_P3 Multi Drive Status. **/
#define PIOB_MDSR_P3		(1 << 3)
/** PIOB_MDSR_P2 Multi Drive Status. **/
#define PIOB_MDSR_P2		(1 << 2)
/** PIOB_MDSR_P1 Multi Drive Status. **/
#define PIOB_MDSR_P1		(1 << 1)
/** PIOB_MDSR_P0 Multi Drive Status. **/
#define PIOB_MDSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_pudr PUDR Pull-up Disable Register
@{*/

/** PIOB_PUDR_P31 Pull Up Disable. **/
#define PIOB_PUDR_P31		(1 << 31)
/** PIOB_PUDR_P30 Pull Up Disable. **/
#define PIOB_PUDR_P30		(1 << 30)
/** PIOB_PUDR_P29 Pull Up Disable. **/
#define PIOB_PUDR_P29		(1 << 29)
/** PIOB_PUDR_P28 Pull Up Disable. **/
#define PIOB_PUDR_P28		(1 << 28)
/** PIOB_PUDR_P27 Pull Up Disable. **/
#define PIOB_PUDR_P27		(1 << 27)
/** PIOB_PUDR_P26 Pull Up Disable. **/
#define PIOB_PUDR_P26		(1 << 26)
/** PIOB_PUDR_P25 Pull Up Disable. **/
#define PIOB_PUDR_P25		(1 << 25)
/** PIOB_PUDR_P24 Pull Up Disable. **/
#define PIOB_PUDR_P24		(1 << 24)
/** PIOB_PUDR_P23 Pull Up Disable. **/
#define PIOB_PUDR_P23		(1 << 23)
/** PIOB_PUDR_P22 Pull Up Disable. **/
#define PIOB_PUDR_P22		(1 << 22)
/** PIOB_PUDR_P21 Pull Up Disable. **/
#define PIOB_PUDR_P21		(1 << 21)
/** PIOB_PUDR_P20 Pull Up Disable. **/
#define PIOB_PUDR_P20		(1 << 20)
/** PIOB_PUDR_P19 Pull Up Disable. **/
#define PIOB_PUDR_P19		(1 << 19)
/** PIOB_PUDR_P18 Pull Up Disable. **/
#define PIOB_PUDR_P18		(1 << 18)
/** PIOB_PUDR_P17 Pull Up Disable. **/
#define PIOB_PUDR_P17		(1 << 17)
/** PIOB_PUDR_P16 Pull Up Disable. **/
#define PIOB_PUDR_P16		(1 << 16)
/** PIOB_PUDR_P15 Pull Up Disable. **/
#define PIOB_PUDR_P15		(1 << 15)
/** PIOB_PUDR_P14 Pull Up Disable. **/
#define PIOB_PUDR_P14		(1 << 14)
/** PIOB_PUDR_P13 Pull Up Disable. **/
#define PIOB_PUDR_P13		(1 << 13)
/** PIOB_PUDR_P12 Pull Up Disable. **/
#define PIOB_PUDR_P12		(1 << 12)
/** PIOB_PUDR_P11 Pull Up Disable. **/
#define PIOB_PUDR_P11		(1 << 11)
/** PIOB_PUDR_P10 Pull Up Disable. **/
#define PIOB_PUDR_P10		(1 << 10)
/** PIOB_PUDR_P9 Pull Up Disable. **/
#define PIOB_PUDR_P9		(1 << 9)
/** PIOB_PUDR_P8 Pull Up Disable. **/
#define PIOB_PUDR_P8		(1 << 8)
/** PIOB_PUDR_P7 Pull Up Disable. **/
#define PIOB_PUDR_P7		(1 << 7)
/** PIOB_PUDR_P6 Pull Up Disable. **/
#define PIOB_PUDR_P6		(1 << 6)
/** PIOB_PUDR_P5 Pull Up Disable. **/
#define PIOB_PUDR_P5		(1 << 5)
/** PIOB_PUDR_P4 Pull Up Disable. **/
#define PIOB_PUDR_P4		(1 << 4)
/** PIOB_PUDR_P3 Pull Up Disable. **/
#define PIOB_PUDR_P3		(1 << 3)
/** PIOB_PUDR_P2 Pull Up Disable. **/
#define PIOB_PUDR_P2		(1 << 2)
/** PIOB_PUDR_P1 Pull Up Disable. **/
#define PIOB_PUDR_P1		(1 << 1)
/** PIOB_PUDR_P0 Pull Up Disable. **/
#define PIOB_PUDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_puer PUER Pull-up Enable Register
@{*/

/** PIOB_PUER_P31 Pull Up Enable. **/
#define PIOB_PUER_P31		(1 << 31)
/** PIOB_PUER_P30 Pull Up Enable. **/
#define PIOB_PUER_P30		(1 << 30)
/** PIOB_PUER_P29 Pull Up Enable. **/
#define PIOB_PUER_P29		(1 << 29)
/** PIOB_PUER_P28 Pull Up Enable. **/
#define PIOB_PUER_P28		(1 << 28)
/** PIOB_PUER_P27 Pull Up Enable. **/
#define PIOB_PUER_P27		(1 << 27)
/** PIOB_PUER_P26 Pull Up Enable. **/
#define PIOB_PUER_P26		(1 << 26)
/** PIOB_PUER_P25 Pull Up Enable. **/
#define PIOB_PUER_P25		(1 << 25)
/** PIOB_PUER_P24 Pull Up Enable. **/
#define PIOB_PUER_P24		(1 << 24)
/** PIOB_PUER_P23 Pull Up Enable. **/
#define PIOB_PUER_P23		(1 << 23)
/** PIOB_PUER_P22 Pull Up Enable. **/
#define PIOB_PUER_P22		(1 << 22)
/** PIOB_PUER_P21 Pull Up Enable. **/
#define PIOB_PUER_P21		(1 << 21)
/** PIOB_PUER_P20 Pull Up Enable. **/
#define PIOB_PUER_P20		(1 << 20)
/** PIOB_PUER_P19 Pull Up Enable. **/
#define PIOB_PUER_P19		(1 << 19)
/** PIOB_PUER_P18 Pull Up Enable. **/
#define PIOB_PUER_P18		(1 << 18)
/** PIOB_PUER_P17 Pull Up Enable. **/
#define PIOB_PUER_P17		(1 << 17)
/** PIOB_PUER_P16 Pull Up Enable. **/
#define PIOB_PUER_P16		(1 << 16)
/** PIOB_PUER_P15 Pull Up Enable. **/
#define PIOB_PUER_P15		(1 << 15)
/** PIOB_PUER_P14 Pull Up Enable. **/
#define PIOB_PUER_P14		(1 << 14)
/** PIOB_PUER_P13 Pull Up Enable. **/
#define PIOB_PUER_P13		(1 << 13)
/** PIOB_PUER_P12 Pull Up Enable. **/
#define PIOB_PUER_P12		(1 << 12)
/** PIOB_PUER_P11 Pull Up Enable. **/
#define PIOB_PUER_P11		(1 << 11)
/** PIOB_PUER_P10 Pull Up Enable. **/
#define PIOB_PUER_P10		(1 << 10)
/** PIOB_PUER_P9 Pull Up Enable. **/
#define PIOB_PUER_P9		(1 << 9)
/** PIOB_PUER_P8 Pull Up Enable. **/
#define PIOB_PUER_P8		(1 << 8)
/** PIOB_PUER_P7 Pull Up Enable. **/
#define PIOB_PUER_P7		(1 << 7)
/** PIOB_PUER_P6 Pull Up Enable. **/
#define PIOB_PUER_P6		(1 << 6)
/** PIOB_PUER_P5 Pull Up Enable. **/
#define PIOB_PUER_P5		(1 << 5)
/** PIOB_PUER_P4 Pull Up Enable. **/
#define PIOB_PUER_P4		(1 << 4)
/** PIOB_PUER_P3 Pull Up Enable. **/
#define PIOB_PUER_P3		(1 << 3)
/** PIOB_PUER_P2 Pull Up Enable. **/
#define PIOB_PUER_P2		(1 << 2)
/** PIOB_PUER_P1 Pull Up Enable. **/
#define PIOB_PUER_P1		(1 << 1)
/** PIOB_PUER_P0 Pull Up Enable. **/
#define PIOB_PUER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_pusr PUSR Pad Pull-up Status Register
@{*/

/** PIOB_PUSR_P31 Pull Up Status. **/
#define PIOB_PUSR_P31		(1 << 31)
/** PIOB_PUSR_P30 Pull Up Status. **/
#define PIOB_PUSR_P30		(1 << 30)
/** PIOB_PUSR_P29 Pull Up Status. **/
#define PIOB_PUSR_P29		(1 << 29)
/** PIOB_PUSR_P28 Pull Up Status. **/
#define PIOB_PUSR_P28		(1 << 28)
/** PIOB_PUSR_P27 Pull Up Status. **/
#define PIOB_PUSR_P27		(1 << 27)
/** PIOB_PUSR_P26 Pull Up Status. **/
#define PIOB_PUSR_P26		(1 << 26)
/** PIOB_PUSR_P25 Pull Up Status. **/
#define PIOB_PUSR_P25		(1 << 25)
/** PIOB_PUSR_P24 Pull Up Status. **/
#define PIOB_PUSR_P24		(1 << 24)
/** PIOB_PUSR_P23 Pull Up Status. **/
#define PIOB_PUSR_P23		(1 << 23)
/** PIOB_PUSR_P22 Pull Up Status. **/
#define PIOB_PUSR_P22		(1 << 22)
/** PIOB_PUSR_P21 Pull Up Status. **/
#define PIOB_PUSR_P21		(1 << 21)
/** PIOB_PUSR_P20 Pull Up Status. **/
#define PIOB_PUSR_P20		(1 << 20)
/** PIOB_PUSR_P19 Pull Up Status. **/
#define PIOB_PUSR_P19		(1 << 19)
/** PIOB_PUSR_P18 Pull Up Status. **/
#define PIOB_PUSR_P18		(1 << 18)
/** PIOB_PUSR_P17 Pull Up Status. **/
#define PIOB_PUSR_P17		(1 << 17)
/** PIOB_PUSR_P16 Pull Up Status. **/
#define PIOB_PUSR_P16		(1 << 16)
/** PIOB_PUSR_P15 Pull Up Status. **/
#define PIOB_PUSR_P15		(1 << 15)
/** PIOB_PUSR_P14 Pull Up Status. **/
#define PIOB_PUSR_P14		(1 << 14)
/** PIOB_PUSR_P13 Pull Up Status. **/
#define PIOB_PUSR_P13		(1 << 13)
/** PIOB_PUSR_P12 Pull Up Status. **/
#define PIOB_PUSR_P12		(1 << 12)
/** PIOB_PUSR_P11 Pull Up Status. **/
#define PIOB_PUSR_P11		(1 << 11)
/** PIOB_PUSR_P10 Pull Up Status. **/
#define PIOB_PUSR_P10		(1 << 10)
/** PIOB_PUSR_P9 Pull Up Status. **/
#define PIOB_PUSR_P9		(1 << 9)
/** PIOB_PUSR_P8 Pull Up Status. **/
#define PIOB_PUSR_P8		(1 << 8)
/** PIOB_PUSR_P7 Pull Up Status. **/
#define PIOB_PUSR_P7		(1 << 7)
/** PIOB_PUSR_P6 Pull Up Status. **/
#define PIOB_PUSR_P6		(1 << 6)
/** PIOB_PUSR_P5 Pull Up Status. **/
#define PIOB_PUSR_P5		(1 << 5)
/** PIOB_PUSR_P4 Pull Up Status. **/
#define PIOB_PUSR_P4		(1 << 4)
/** PIOB_PUSR_P3 Pull Up Status. **/
#define PIOB_PUSR_P3		(1 << 3)
/** PIOB_PUSR_P2 Pull Up Status. **/
#define PIOB_PUSR_P2		(1 << 2)
/** PIOB_PUSR_P1 Pull Up Status. **/
#define PIOB_PUSR_P1		(1 << 1)
/** PIOB_PUSR_P0 Pull Up Status. **/
#define PIOB_PUSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_abcdsr[0] ABCDSR[0] Peripheral Select Register
@{*/

/** PIOB_ABCDSR[0]_P31 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P31		(1 << 31)
/** PIOB_ABCDSR[0]_P30 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P30		(1 << 30)
/** PIOB_ABCDSR[0]_P29 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P29		(1 << 29)
/** PIOB_ABCDSR[0]_P28 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P28		(1 << 28)
/** PIOB_ABCDSR[0]_P27 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P27		(1 << 27)
/** PIOB_ABCDSR[0]_P26 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P26		(1 << 26)
/** PIOB_ABCDSR[0]_P25 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P25		(1 << 25)
/** PIOB_ABCDSR[0]_P24 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P24		(1 << 24)
/** PIOB_ABCDSR[0]_P23 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P23		(1 << 23)
/** PIOB_ABCDSR[0]_P22 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P22		(1 << 22)
/** PIOB_ABCDSR[0]_P21 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P21		(1 << 21)
/** PIOB_ABCDSR[0]_P20 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P20		(1 << 20)
/** PIOB_ABCDSR[0]_P19 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P19		(1 << 19)
/** PIOB_ABCDSR[0]_P18 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P18		(1 << 18)
/** PIOB_ABCDSR[0]_P17 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P17		(1 << 17)
/** PIOB_ABCDSR[0]_P16 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P16		(1 << 16)
/** PIOB_ABCDSR[0]_P15 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P15		(1 << 15)
/** PIOB_ABCDSR[0]_P14 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P14		(1 << 14)
/** PIOB_ABCDSR[0]_P13 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P13		(1 << 13)
/** PIOB_ABCDSR[0]_P12 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P12		(1 << 12)
/** PIOB_ABCDSR[0]_P11 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P11		(1 << 11)
/** PIOB_ABCDSR[0]_P10 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P10		(1 << 10)
/** PIOB_ABCDSR[0]_P9 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P9		(1 << 9)
/** PIOB_ABCDSR[0]_P8 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P8		(1 << 8)
/** PIOB_ABCDSR[0]_P7 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P7		(1 << 7)
/** PIOB_ABCDSR[0]_P6 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P6		(1 << 6)
/** PIOB_ABCDSR[0]_P5 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P5		(1 << 5)
/** PIOB_ABCDSR[0]_P4 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P4		(1 << 4)
/** PIOB_ABCDSR[0]_P3 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P3		(1 << 3)
/** PIOB_ABCDSR[0]_P2 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P2		(1 << 2)
/** PIOB_ABCDSR[0]_P1 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P1		(1 << 1)
/** PIOB_ABCDSR[0]_P0 Peripheral Select. **/
#define PIOB_ABCDSR[0]_P0		(1 << 0)

/**@}*/

/** @defgroup piob_abcdsr[1] ABCDSR[1] Peripheral Select Register
@{*/

/** PIOB_ABCDSR[1]_P31 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P31		(1 << 31)
/** PIOB_ABCDSR[1]_P30 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P30		(1 << 30)
/** PIOB_ABCDSR[1]_P29 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P29		(1 << 29)
/** PIOB_ABCDSR[1]_P28 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P28		(1 << 28)
/** PIOB_ABCDSR[1]_P27 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P27		(1 << 27)
/** PIOB_ABCDSR[1]_P26 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P26		(1 << 26)
/** PIOB_ABCDSR[1]_P25 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P25		(1 << 25)
/** PIOB_ABCDSR[1]_P24 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P24		(1 << 24)
/** PIOB_ABCDSR[1]_P23 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P23		(1 << 23)
/** PIOB_ABCDSR[1]_P22 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P22		(1 << 22)
/** PIOB_ABCDSR[1]_P21 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P21		(1 << 21)
/** PIOB_ABCDSR[1]_P20 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P20		(1 << 20)
/** PIOB_ABCDSR[1]_P19 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P19		(1 << 19)
/** PIOB_ABCDSR[1]_P18 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P18		(1 << 18)
/** PIOB_ABCDSR[1]_P17 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P17		(1 << 17)
/** PIOB_ABCDSR[1]_P16 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P16		(1 << 16)
/** PIOB_ABCDSR[1]_P15 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P15		(1 << 15)
/** PIOB_ABCDSR[1]_P14 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P14		(1 << 14)
/** PIOB_ABCDSR[1]_P13 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P13		(1 << 13)
/** PIOB_ABCDSR[1]_P12 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P12		(1 << 12)
/** PIOB_ABCDSR[1]_P11 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P11		(1 << 11)
/** PIOB_ABCDSR[1]_P10 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P10		(1 << 10)
/** PIOB_ABCDSR[1]_P9 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P9		(1 << 9)
/** PIOB_ABCDSR[1]_P8 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P8		(1 << 8)
/** PIOB_ABCDSR[1]_P7 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P7		(1 << 7)
/** PIOB_ABCDSR[1]_P6 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P6		(1 << 6)
/** PIOB_ABCDSR[1]_P5 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P5		(1 << 5)
/** PIOB_ABCDSR[1]_P4 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P4		(1 << 4)
/** PIOB_ABCDSR[1]_P3 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P3		(1 << 3)
/** PIOB_ABCDSR[1]_P2 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P2		(1 << 2)
/** PIOB_ABCDSR[1]_P1 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P1		(1 << 1)
/** PIOB_ABCDSR[1]_P0 Peripheral Select. **/
#define PIOB_ABCDSR[1]_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifscdr IFSCDR Input Filter Slow Clock Disable Register
@{*/

/** PIOB_IFSCDR_P31 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P31		(1 << 31)
/** PIOB_IFSCDR_P30 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P30		(1 << 30)
/** PIOB_IFSCDR_P29 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P29		(1 << 29)
/** PIOB_IFSCDR_P28 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P28		(1 << 28)
/** PIOB_IFSCDR_P27 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P27		(1 << 27)
/** PIOB_IFSCDR_P26 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P26		(1 << 26)
/** PIOB_IFSCDR_P25 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P25		(1 << 25)
/** PIOB_IFSCDR_P24 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P24		(1 << 24)
/** PIOB_IFSCDR_P23 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P23		(1 << 23)
/** PIOB_IFSCDR_P22 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P22		(1 << 22)
/** PIOB_IFSCDR_P21 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P21		(1 << 21)
/** PIOB_IFSCDR_P20 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P20		(1 << 20)
/** PIOB_IFSCDR_P19 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P19		(1 << 19)
/** PIOB_IFSCDR_P18 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P18		(1 << 18)
/** PIOB_IFSCDR_P17 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P17		(1 << 17)
/** PIOB_IFSCDR_P16 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P16		(1 << 16)
/** PIOB_IFSCDR_P15 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P15		(1 << 15)
/** PIOB_IFSCDR_P14 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P14		(1 << 14)
/** PIOB_IFSCDR_P13 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P13		(1 << 13)
/** PIOB_IFSCDR_P12 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P12		(1 << 12)
/** PIOB_IFSCDR_P11 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P11		(1 << 11)
/** PIOB_IFSCDR_P10 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P10		(1 << 10)
/** PIOB_IFSCDR_P9 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P9		(1 << 9)
/** PIOB_IFSCDR_P8 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P8		(1 << 8)
/** PIOB_IFSCDR_P7 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P7		(1 << 7)
/** PIOB_IFSCDR_P6 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P6		(1 << 6)
/** PIOB_IFSCDR_P5 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P5		(1 << 5)
/** PIOB_IFSCDR_P4 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P4		(1 << 4)
/** PIOB_IFSCDR_P3 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P3		(1 << 3)
/** PIOB_IFSCDR_P2 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P2		(1 << 2)
/** PIOB_IFSCDR_P1 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P1		(1 << 1)
/** PIOB_IFSCDR_P0 PIO Clock Glitch Filtering Select. **/
#define PIOB_IFSCDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifscer IFSCER Input Filter Slow Clock Enable Register
@{*/

/** PIOB_IFSCER_P31 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P31		(1 << 31)
/** PIOB_IFSCER_P30 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P30		(1 << 30)
/** PIOB_IFSCER_P29 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P29		(1 << 29)
/** PIOB_IFSCER_P28 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P28		(1 << 28)
/** PIOB_IFSCER_P27 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P27		(1 << 27)
/** PIOB_IFSCER_P26 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P26		(1 << 26)
/** PIOB_IFSCER_P25 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P25		(1 << 25)
/** PIOB_IFSCER_P24 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P24		(1 << 24)
/** PIOB_IFSCER_P23 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P23		(1 << 23)
/** PIOB_IFSCER_P22 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P22		(1 << 22)
/** PIOB_IFSCER_P21 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P21		(1 << 21)
/** PIOB_IFSCER_P20 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P20		(1 << 20)
/** PIOB_IFSCER_P19 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P19		(1 << 19)
/** PIOB_IFSCER_P18 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P18		(1 << 18)
/** PIOB_IFSCER_P17 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P17		(1 << 17)
/** PIOB_IFSCER_P16 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P16		(1 << 16)
/** PIOB_IFSCER_P15 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P15		(1 << 15)
/** PIOB_IFSCER_P14 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P14		(1 << 14)
/** PIOB_IFSCER_P13 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P13		(1 << 13)
/** PIOB_IFSCER_P12 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P12		(1 << 12)
/** PIOB_IFSCER_P11 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P11		(1 << 11)
/** PIOB_IFSCER_P10 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P10		(1 << 10)
/** PIOB_IFSCER_P9 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P9		(1 << 9)
/** PIOB_IFSCER_P8 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P8		(1 << 8)
/** PIOB_IFSCER_P7 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P7		(1 << 7)
/** PIOB_IFSCER_P6 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P6		(1 << 6)
/** PIOB_IFSCER_P5 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P5		(1 << 5)
/** PIOB_IFSCER_P4 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P4		(1 << 4)
/** PIOB_IFSCER_P3 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P3		(1 << 3)
/** PIOB_IFSCER_P2 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P2		(1 << 2)
/** PIOB_IFSCER_P1 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P1		(1 << 1)
/** PIOB_IFSCER_P0 Debouncing Filtering Select. **/
#define PIOB_IFSCER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ifscsr IFSCSR Input Filter Slow Clock Status Register
@{*/

/** PIOB_IFSCSR_P31 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P31		(1 << 31)
/** PIOB_IFSCSR_P30 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P30		(1 << 30)
/** PIOB_IFSCSR_P29 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P29		(1 << 29)
/** PIOB_IFSCSR_P28 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P28		(1 << 28)
/** PIOB_IFSCSR_P27 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P27		(1 << 27)
/** PIOB_IFSCSR_P26 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P26		(1 << 26)
/** PIOB_IFSCSR_P25 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P25		(1 << 25)
/** PIOB_IFSCSR_P24 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P24		(1 << 24)
/** PIOB_IFSCSR_P23 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P23		(1 << 23)
/** PIOB_IFSCSR_P22 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P22		(1 << 22)
/** PIOB_IFSCSR_P21 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P21		(1 << 21)
/** PIOB_IFSCSR_P20 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P20		(1 << 20)
/** PIOB_IFSCSR_P19 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P19		(1 << 19)
/** PIOB_IFSCSR_P18 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P18		(1 << 18)
/** PIOB_IFSCSR_P17 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P17		(1 << 17)
/** PIOB_IFSCSR_P16 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P16		(1 << 16)
/** PIOB_IFSCSR_P15 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P15		(1 << 15)
/** PIOB_IFSCSR_P14 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P14		(1 << 14)
/** PIOB_IFSCSR_P13 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P13		(1 << 13)
/** PIOB_IFSCSR_P12 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P12		(1 << 12)
/** PIOB_IFSCSR_P11 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P11		(1 << 11)
/** PIOB_IFSCSR_P10 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P10		(1 << 10)
/** PIOB_IFSCSR_P9 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P9		(1 << 9)
/** PIOB_IFSCSR_P8 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P8		(1 << 8)
/** PIOB_IFSCSR_P7 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P7		(1 << 7)
/** PIOB_IFSCSR_P6 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P6		(1 << 6)
/** PIOB_IFSCSR_P5 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P5		(1 << 5)
/** PIOB_IFSCSR_P4 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P4		(1 << 4)
/** PIOB_IFSCSR_P3 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P3		(1 << 3)
/** PIOB_IFSCSR_P2 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P2		(1 << 2)
/** PIOB_IFSCSR_P1 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P1		(1 << 1)
/** PIOB_IFSCSR_P0 Glitch or Debouncing Filter Selection Status **/
#define PIOB_IFSCSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_scdr SCDR Slow Clock Divider Debouncing Register
@{*/


#define PIOB_SCDR_DIV_SHIFT		0
#define PIOB_SCDR_DIV_MASK		0x3fff
/** @defgroup piob_scdr_div DIV 
@{*/
/**@}*/


/**@}*/

/** @defgroup piob_ppddr PPDDR Pad Pull-down Disable Register
@{*/

/** PIOB_PPDDR_P31 Pull Down Disable. **/
#define PIOB_PPDDR_P31		(1 << 31)
/** PIOB_PPDDR_P30 Pull Down Disable. **/
#define PIOB_PPDDR_P30		(1 << 30)
/** PIOB_PPDDR_P29 Pull Down Disable. **/
#define PIOB_PPDDR_P29		(1 << 29)
/** PIOB_PPDDR_P28 Pull Down Disable. **/
#define PIOB_PPDDR_P28		(1 << 28)
/** PIOB_PPDDR_P27 Pull Down Disable. **/
#define PIOB_PPDDR_P27		(1 << 27)
/** PIOB_PPDDR_P26 Pull Down Disable. **/
#define PIOB_PPDDR_P26		(1 << 26)
/** PIOB_PPDDR_P25 Pull Down Disable. **/
#define PIOB_PPDDR_P25		(1 << 25)
/** PIOB_PPDDR_P24 Pull Down Disable. **/
#define PIOB_PPDDR_P24		(1 << 24)
/** PIOB_PPDDR_P23 Pull Down Disable. **/
#define PIOB_PPDDR_P23		(1 << 23)
/** PIOB_PPDDR_P22 Pull Down Disable. **/
#define PIOB_PPDDR_P22		(1 << 22)
/** PIOB_PPDDR_P21 Pull Down Disable. **/
#define PIOB_PPDDR_P21		(1 << 21)
/** PIOB_PPDDR_P20 Pull Down Disable. **/
#define PIOB_PPDDR_P20		(1 << 20)
/** PIOB_PPDDR_P19 Pull Down Disable. **/
#define PIOB_PPDDR_P19		(1 << 19)
/** PIOB_PPDDR_P18 Pull Down Disable. **/
#define PIOB_PPDDR_P18		(1 << 18)
/** PIOB_PPDDR_P17 Pull Down Disable. **/
#define PIOB_PPDDR_P17		(1 << 17)
/** PIOB_PPDDR_P16 Pull Down Disable. **/
#define PIOB_PPDDR_P16		(1 << 16)
/** PIOB_PPDDR_P15 Pull Down Disable. **/
#define PIOB_PPDDR_P15		(1 << 15)
/** PIOB_PPDDR_P14 Pull Down Disable. **/
#define PIOB_PPDDR_P14		(1 << 14)
/** PIOB_PPDDR_P13 Pull Down Disable. **/
#define PIOB_PPDDR_P13		(1 << 13)
/** PIOB_PPDDR_P12 Pull Down Disable. **/
#define PIOB_PPDDR_P12		(1 << 12)
/** PIOB_PPDDR_P11 Pull Down Disable. **/
#define PIOB_PPDDR_P11		(1 << 11)
/** PIOB_PPDDR_P10 Pull Down Disable. **/
#define PIOB_PPDDR_P10		(1 << 10)
/** PIOB_PPDDR_P9 Pull Down Disable. **/
#define PIOB_PPDDR_P9		(1 << 9)
/** PIOB_PPDDR_P8 Pull Down Disable. **/
#define PIOB_PPDDR_P8		(1 << 8)
/** PIOB_PPDDR_P7 Pull Down Disable. **/
#define PIOB_PPDDR_P7		(1 << 7)
/** PIOB_PPDDR_P6 Pull Down Disable. **/
#define PIOB_PPDDR_P6		(1 << 6)
/** PIOB_PPDDR_P5 Pull Down Disable. **/
#define PIOB_PPDDR_P5		(1 << 5)
/** PIOB_PPDDR_P4 Pull Down Disable. **/
#define PIOB_PPDDR_P4		(1 << 4)
/** PIOB_PPDDR_P3 Pull Down Disable. **/
#define PIOB_PPDDR_P3		(1 << 3)
/** PIOB_PPDDR_P2 Pull Down Disable. **/
#define PIOB_PPDDR_P2		(1 << 2)
/** PIOB_PPDDR_P1 Pull Down Disable. **/
#define PIOB_PPDDR_P1		(1 << 1)
/** PIOB_PPDDR_P0 Pull Down Disable. **/
#define PIOB_PPDDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ppder PPDER Pad Pull-down Enable Register
@{*/

/** PIOB_PPDER_P31 Pull Down Enable. **/
#define PIOB_PPDER_P31		(1 << 31)
/** PIOB_PPDER_P30 Pull Down Enable. **/
#define PIOB_PPDER_P30		(1 << 30)
/** PIOB_PPDER_P29 Pull Down Enable. **/
#define PIOB_PPDER_P29		(1 << 29)
/** PIOB_PPDER_P28 Pull Down Enable. **/
#define PIOB_PPDER_P28		(1 << 28)
/** PIOB_PPDER_P27 Pull Down Enable. **/
#define PIOB_PPDER_P27		(1 << 27)
/** PIOB_PPDER_P26 Pull Down Enable. **/
#define PIOB_PPDER_P26		(1 << 26)
/** PIOB_PPDER_P25 Pull Down Enable. **/
#define PIOB_PPDER_P25		(1 << 25)
/** PIOB_PPDER_P24 Pull Down Enable. **/
#define PIOB_PPDER_P24		(1 << 24)
/** PIOB_PPDER_P23 Pull Down Enable. **/
#define PIOB_PPDER_P23		(1 << 23)
/** PIOB_PPDER_P22 Pull Down Enable. **/
#define PIOB_PPDER_P22		(1 << 22)
/** PIOB_PPDER_P21 Pull Down Enable. **/
#define PIOB_PPDER_P21		(1 << 21)
/** PIOB_PPDER_P20 Pull Down Enable. **/
#define PIOB_PPDER_P20		(1 << 20)
/** PIOB_PPDER_P19 Pull Down Enable. **/
#define PIOB_PPDER_P19		(1 << 19)
/** PIOB_PPDER_P18 Pull Down Enable. **/
#define PIOB_PPDER_P18		(1 << 18)
/** PIOB_PPDER_P17 Pull Down Enable. **/
#define PIOB_PPDER_P17		(1 << 17)
/** PIOB_PPDER_P16 Pull Down Enable. **/
#define PIOB_PPDER_P16		(1 << 16)
/** PIOB_PPDER_P15 Pull Down Enable. **/
#define PIOB_PPDER_P15		(1 << 15)
/** PIOB_PPDER_P14 Pull Down Enable. **/
#define PIOB_PPDER_P14		(1 << 14)
/** PIOB_PPDER_P13 Pull Down Enable. **/
#define PIOB_PPDER_P13		(1 << 13)
/** PIOB_PPDER_P12 Pull Down Enable. **/
#define PIOB_PPDER_P12		(1 << 12)
/** PIOB_PPDER_P11 Pull Down Enable. **/
#define PIOB_PPDER_P11		(1 << 11)
/** PIOB_PPDER_P10 Pull Down Enable. **/
#define PIOB_PPDER_P10		(1 << 10)
/** PIOB_PPDER_P9 Pull Down Enable. **/
#define PIOB_PPDER_P9		(1 << 9)
/** PIOB_PPDER_P8 Pull Down Enable. **/
#define PIOB_PPDER_P8		(1 << 8)
/** PIOB_PPDER_P7 Pull Down Enable. **/
#define PIOB_PPDER_P7		(1 << 7)
/** PIOB_PPDER_P6 Pull Down Enable. **/
#define PIOB_PPDER_P6		(1 << 6)
/** PIOB_PPDER_P5 Pull Down Enable. **/
#define PIOB_PPDER_P5		(1 << 5)
/** PIOB_PPDER_P4 Pull Down Enable. **/
#define PIOB_PPDER_P4		(1 << 4)
/** PIOB_PPDER_P3 Pull Down Enable. **/
#define PIOB_PPDER_P3		(1 << 3)
/** PIOB_PPDER_P2 Pull Down Enable. **/
#define PIOB_PPDER_P2		(1 << 2)
/** PIOB_PPDER_P1 Pull Down Enable. **/
#define PIOB_PPDER_P1		(1 << 1)
/** PIOB_PPDER_P0 Pull Down Enable. **/
#define PIOB_PPDER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ppdsr PPDSR Pad Pull-down Status Register
@{*/

/** PIOB_PPDSR_P31 Pull Down Status. **/
#define PIOB_PPDSR_P31		(1 << 31)
/** PIOB_PPDSR_P30 Pull Down Status. **/
#define PIOB_PPDSR_P30		(1 << 30)
/** PIOB_PPDSR_P29 Pull Down Status. **/
#define PIOB_PPDSR_P29		(1 << 29)
/** PIOB_PPDSR_P28 Pull Down Status. **/
#define PIOB_PPDSR_P28		(1 << 28)
/** PIOB_PPDSR_P27 Pull Down Status. **/
#define PIOB_PPDSR_P27		(1 << 27)
/** PIOB_PPDSR_P26 Pull Down Status. **/
#define PIOB_PPDSR_P26		(1 << 26)
/** PIOB_PPDSR_P25 Pull Down Status. **/
#define PIOB_PPDSR_P25		(1 << 25)
/** PIOB_PPDSR_P24 Pull Down Status. **/
#define PIOB_PPDSR_P24		(1 << 24)
/** PIOB_PPDSR_P23 Pull Down Status. **/
#define PIOB_PPDSR_P23		(1 << 23)
/** PIOB_PPDSR_P22 Pull Down Status. **/
#define PIOB_PPDSR_P22		(1 << 22)
/** PIOB_PPDSR_P21 Pull Down Status. **/
#define PIOB_PPDSR_P21		(1 << 21)
/** PIOB_PPDSR_P20 Pull Down Status. **/
#define PIOB_PPDSR_P20		(1 << 20)
/** PIOB_PPDSR_P19 Pull Down Status. **/
#define PIOB_PPDSR_P19		(1 << 19)
/** PIOB_PPDSR_P18 Pull Down Status. **/
#define PIOB_PPDSR_P18		(1 << 18)
/** PIOB_PPDSR_P17 Pull Down Status. **/
#define PIOB_PPDSR_P17		(1 << 17)
/** PIOB_PPDSR_P16 Pull Down Status. **/
#define PIOB_PPDSR_P16		(1 << 16)
/** PIOB_PPDSR_P15 Pull Down Status. **/
#define PIOB_PPDSR_P15		(1 << 15)
/** PIOB_PPDSR_P14 Pull Down Status. **/
#define PIOB_PPDSR_P14		(1 << 14)
/** PIOB_PPDSR_P13 Pull Down Status. **/
#define PIOB_PPDSR_P13		(1 << 13)
/** PIOB_PPDSR_P12 Pull Down Status. **/
#define PIOB_PPDSR_P12		(1 << 12)
/** PIOB_PPDSR_P11 Pull Down Status. **/
#define PIOB_PPDSR_P11		(1 << 11)
/** PIOB_PPDSR_P10 Pull Down Status. **/
#define PIOB_PPDSR_P10		(1 << 10)
/** PIOB_PPDSR_P9 Pull Down Status. **/
#define PIOB_PPDSR_P9		(1 << 9)
/** PIOB_PPDSR_P8 Pull Down Status. **/
#define PIOB_PPDSR_P8		(1 << 8)
/** PIOB_PPDSR_P7 Pull Down Status. **/
#define PIOB_PPDSR_P7		(1 << 7)
/** PIOB_PPDSR_P6 Pull Down Status. **/
#define PIOB_PPDSR_P6		(1 << 6)
/** PIOB_PPDSR_P5 Pull Down Status. **/
#define PIOB_PPDSR_P5		(1 << 5)
/** PIOB_PPDSR_P4 Pull Down Status. **/
#define PIOB_PPDSR_P4		(1 << 4)
/** PIOB_PPDSR_P3 Pull Down Status. **/
#define PIOB_PPDSR_P3		(1 << 3)
/** PIOB_PPDSR_P2 Pull Down Status. **/
#define PIOB_PPDSR_P2		(1 << 2)
/** PIOB_PPDSR_P1 Pull Down Status. **/
#define PIOB_PPDSR_P1		(1 << 1)
/** PIOB_PPDSR_P0 Pull Down Status. **/
#define PIOB_PPDSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_ower OWER Output Write Enable
@{*/

/** PIOB_OWER_P31 Output Write Enable. **/
#define PIOB_OWER_P31		(1 << 31)
/** PIOB_OWER_P30 Output Write Enable. **/
#define PIOB_OWER_P30		(1 << 30)
/** PIOB_OWER_P29 Output Write Enable. **/
#define PIOB_OWER_P29		(1 << 29)
/** PIOB_OWER_P28 Output Write Enable. **/
#define PIOB_OWER_P28		(1 << 28)
/** PIOB_OWER_P27 Output Write Enable. **/
#define PIOB_OWER_P27		(1 << 27)
/** PIOB_OWER_P26 Output Write Enable. **/
#define PIOB_OWER_P26		(1 << 26)
/** PIOB_OWER_P25 Output Write Enable. **/
#define PIOB_OWER_P25		(1 << 25)
/** PIOB_OWER_P24 Output Write Enable. **/
#define PIOB_OWER_P24		(1 << 24)
/** PIOB_OWER_P23 Output Write Enable. **/
#define PIOB_OWER_P23		(1 << 23)
/** PIOB_OWER_P22 Output Write Enable. **/
#define PIOB_OWER_P22		(1 << 22)
/** PIOB_OWER_P21 Output Write Enable. **/
#define PIOB_OWER_P21		(1 << 21)
/** PIOB_OWER_P20 Output Write Enable. **/
#define PIOB_OWER_P20		(1 << 20)
/** PIOB_OWER_P19 Output Write Enable. **/
#define PIOB_OWER_P19		(1 << 19)
/** PIOB_OWER_P18 Output Write Enable. **/
#define PIOB_OWER_P18		(1 << 18)
/** PIOB_OWER_P17 Output Write Enable. **/
#define PIOB_OWER_P17		(1 << 17)
/** PIOB_OWER_P16 Output Write Enable. **/
#define PIOB_OWER_P16		(1 << 16)
/** PIOB_OWER_P15 Output Write Enable. **/
#define PIOB_OWER_P15		(1 << 15)
/** PIOB_OWER_P14 Output Write Enable. **/
#define PIOB_OWER_P14		(1 << 14)
/** PIOB_OWER_P13 Output Write Enable. **/
#define PIOB_OWER_P13		(1 << 13)
/** PIOB_OWER_P12 Output Write Enable. **/
#define PIOB_OWER_P12		(1 << 12)
/** PIOB_OWER_P11 Output Write Enable. **/
#define PIOB_OWER_P11		(1 << 11)
/** PIOB_OWER_P10 Output Write Enable. **/
#define PIOB_OWER_P10		(1 << 10)
/** PIOB_OWER_P9 Output Write Enable. **/
#define PIOB_OWER_P9		(1 << 9)
/** PIOB_OWER_P8 Output Write Enable. **/
#define PIOB_OWER_P8		(1 << 8)
/** PIOB_OWER_P7 Output Write Enable. **/
#define PIOB_OWER_P7		(1 << 7)
/** PIOB_OWER_P6 Output Write Enable. **/
#define PIOB_OWER_P6		(1 << 6)
/** PIOB_OWER_P5 Output Write Enable. **/
#define PIOB_OWER_P5		(1 << 5)
/** PIOB_OWER_P4 Output Write Enable. **/
#define PIOB_OWER_P4		(1 << 4)
/** PIOB_OWER_P3 Output Write Enable. **/
#define PIOB_OWER_P3		(1 << 3)
/** PIOB_OWER_P2 Output Write Enable. **/
#define PIOB_OWER_P2		(1 << 2)
/** PIOB_OWER_P1 Output Write Enable. **/
#define PIOB_OWER_P1		(1 << 1)
/** PIOB_OWER_P0 Output Write Enable. **/
#define PIOB_OWER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_owdr OWDR Output Write Disable
@{*/

/** PIOB_OWDR_P31 Output Write Disable. **/
#define PIOB_OWDR_P31		(1 << 31)
/** PIOB_OWDR_P30 Output Write Disable. **/
#define PIOB_OWDR_P30		(1 << 30)
/** PIOB_OWDR_P29 Output Write Disable. **/
#define PIOB_OWDR_P29		(1 << 29)
/** PIOB_OWDR_P28 Output Write Disable. **/
#define PIOB_OWDR_P28		(1 << 28)
/** PIOB_OWDR_P27 Output Write Disable. **/
#define PIOB_OWDR_P27		(1 << 27)
/** PIOB_OWDR_P26 Output Write Disable. **/
#define PIOB_OWDR_P26		(1 << 26)
/** PIOB_OWDR_P25 Output Write Disable. **/
#define PIOB_OWDR_P25		(1 << 25)
/** PIOB_OWDR_P24 Output Write Disable. **/
#define PIOB_OWDR_P24		(1 << 24)
/** PIOB_OWDR_P23 Output Write Disable. **/
#define PIOB_OWDR_P23		(1 << 23)
/** PIOB_OWDR_P22 Output Write Disable. **/
#define PIOB_OWDR_P22		(1 << 22)
/** PIOB_OWDR_P21 Output Write Disable. **/
#define PIOB_OWDR_P21		(1 << 21)
/** PIOB_OWDR_P20 Output Write Disable. **/
#define PIOB_OWDR_P20		(1 << 20)
/** PIOB_OWDR_P19 Output Write Disable. **/
#define PIOB_OWDR_P19		(1 << 19)
/** PIOB_OWDR_P18 Output Write Disable. **/
#define PIOB_OWDR_P18		(1 << 18)
/** PIOB_OWDR_P17 Output Write Disable. **/
#define PIOB_OWDR_P17		(1 << 17)
/** PIOB_OWDR_P16 Output Write Disable. **/
#define PIOB_OWDR_P16		(1 << 16)
/** PIOB_OWDR_P15 Output Write Disable. **/
#define PIOB_OWDR_P15		(1 << 15)
/** PIOB_OWDR_P14 Output Write Disable. **/
#define PIOB_OWDR_P14		(1 << 14)
/** PIOB_OWDR_P13 Output Write Disable. **/
#define PIOB_OWDR_P13		(1 << 13)
/** PIOB_OWDR_P12 Output Write Disable. **/
#define PIOB_OWDR_P12		(1 << 12)
/** PIOB_OWDR_P11 Output Write Disable. **/
#define PIOB_OWDR_P11		(1 << 11)
/** PIOB_OWDR_P10 Output Write Disable. **/
#define PIOB_OWDR_P10		(1 << 10)
/** PIOB_OWDR_P9 Output Write Disable. **/
#define PIOB_OWDR_P9		(1 << 9)
/** PIOB_OWDR_P8 Output Write Disable. **/
#define PIOB_OWDR_P8		(1 << 8)
/** PIOB_OWDR_P7 Output Write Disable. **/
#define PIOB_OWDR_P7		(1 << 7)
/** PIOB_OWDR_P6 Output Write Disable. **/
#define PIOB_OWDR_P6		(1 << 6)
/** PIOB_OWDR_P5 Output Write Disable. **/
#define PIOB_OWDR_P5		(1 << 5)
/** PIOB_OWDR_P4 Output Write Disable. **/
#define PIOB_OWDR_P4		(1 << 4)
/** PIOB_OWDR_P3 Output Write Disable. **/
#define PIOB_OWDR_P3		(1 << 3)
/** PIOB_OWDR_P2 Output Write Disable. **/
#define PIOB_OWDR_P2		(1 << 2)
/** PIOB_OWDR_P1 Output Write Disable. **/
#define PIOB_OWDR_P1		(1 << 1)
/** PIOB_OWDR_P0 Output Write Disable. **/
#define PIOB_OWDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_owsr OWSR Output Write Status Register
@{*/

/** PIOB_OWSR_P31 Output Write Status. **/
#define PIOB_OWSR_P31		(1 << 31)
/** PIOB_OWSR_P30 Output Write Status. **/
#define PIOB_OWSR_P30		(1 << 30)
/** PIOB_OWSR_P29 Output Write Status. **/
#define PIOB_OWSR_P29		(1 << 29)
/** PIOB_OWSR_P28 Output Write Status. **/
#define PIOB_OWSR_P28		(1 << 28)
/** PIOB_OWSR_P27 Output Write Status. **/
#define PIOB_OWSR_P27		(1 << 27)
/** PIOB_OWSR_P26 Output Write Status. **/
#define PIOB_OWSR_P26		(1 << 26)
/** PIOB_OWSR_P25 Output Write Status. **/
#define PIOB_OWSR_P25		(1 << 25)
/** PIOB_OWSR_P24 Output Write Status. **/
#define PIOB_OWSR_P24		(1 << 24)
/** PIOB_OWSR_P23 Output Write Status. **/
#define PIOB_OWSR_P23		(1 << 23)
/** PIOB_OWSR_P22 Output Write Status. **/
#define PIOB_OWSR_P22		(1 << 22)
/** PIOB_OWSR_P21 Output Write Status. **/
#define PIOB_OWSR_P21		(1 << 21)
/** PIOB_OWSR_P20 Output Write Status. **/
#define PIOB_OWSR_P20		(1 << 20)
/** PIOB_OWSR_P19 Output Write Status. **/
#define PIOB_OWSR_P19		(1 << 19)
/** PIOB_OWSR_P18 Output Write Status. **/
#define PIOB_OWSR_P18		(1 << 18)
/** PIOB_OWSR_P17 Output Write Status. **/
#define PIOB_OWSR_P17		(1 << 17)
/** PIOB_OWSR_P16 Output Write Status. **/
#define PIOB_OWSR_P16		(1 << 16)
/** PIOB_OWSR_P15 Output Write Status. **/
#define PIOB_OWSR_P15		(1 << 15)
/** PIOB_OWSR_P14 Output Write Status. **/
#define PIOB_OWSR_P14		(1 << 14)
/** PIOB_OWSR_P13 Output Write Status. **/
#define PIOB_OWSR_P13		(1 << 13)
/** PIOB_OWSR_P12 Output Write Status. **/
#define PIOB_OWSR_P12		(1 << 12)
/** PIOB_OWSR_P11 Output Write Status. **/
#define PIOB_OWSR_P11		(1 << 11)
/** PIOB_OWSR_P10 Output Write Status. **/
#define PIOB_OWSR_P10		(1 << 10)
/** PIOB_OWSR_P9 Output Write Status. **/
#define PIOB_OWSR_P9		(1 << 9)
/** PIOB_OWSR_P8 Output Write Status. **/
#define PIOB_OWSR_P8		(1 << 8)
/** PIOB_OWSR_P7 Output Write Status. **/
#define PIOB_OWSR_P7		(1 << 7)
/** PIOB_OWSR_P6 Output Write Status. **/
#define PIOB_OWSR_P6		(1 << 6)
/** PIOB_OWSR_P5 Output Write Status. **/
#define PIOB_OWSR_P5		(1 << 5)
/** PIOB_OWSR_P4 Output Write Status. **/
#define PIOB_OWSR_P4		(1 << 4)
/** PIOB_OWSR_P3 Output Write Status. **/
#define PIOB_OWSR_P3		(1 << 3)
/** PIOB_OWSR_P2 Output Write Status. **/
#define PIOB_OWSR_P2		(1 << 2)
/** PIOB_OWSR_P1 Output Write Status. **/
#define PIOB_OWSR_P1		(1 << 1)
/** PIOB_OWSR_P0 Output Write Status. **/
#define PIOB_OWSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_aimer AIMER Additional Interrupt Modes Enable Register
@{*/

/** PIOB_AIMER_P31 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P31		(1 << 31)
/** PIOB_AIMER_P30 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P30		(1 << 30)
/** PIOB_AIMER_P29 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P29		(1 << 29)
/** PIOB_AIMER_P28 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P28		(1 << 28)
/** PIOB_AIMER_P27 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P27		(1 << 27)
/** PIOB_AIMER_P26 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P26		(1 << 26)
/** PIOB_AIMER_P25 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P25		(1 << 25)
/** PIOB_AIMER_P24 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P24		(1 << 24)
/** PIOB_AIMER_P23 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P23		(1 << 23)
/** PIOB_AIMER_P22 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P22		(1 << 22)
/** PIOB_AIMER_P21 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P21		(1 << 21)
/** PIOB_AIMER_P20 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P20		(1 << 20)
/** PIOB_AIMER_P19 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P19		(1 << 19)
/** PIOB_AIMER_P18 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P18		(1 << 18)
/** PIOB_AIMER_P17 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P17		(1 << 17)
/** PIOB_AIMER_P16 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P16		(1 << 16)
/** PIOB_AIMER_P15 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P15		(1 << 15)
/** PIOB_AIMER_P14 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P14		(1 << 14)
/** PIOB_AIMER_P13 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P13		(1 << 13)
/** PIOB_AIMER_P12 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P12		(1 << 12)
/** PIOB_AIMER_P11 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P11		(1 << 11)
/** PIOB_AIMER_P10 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P10		(1 << 10)
/** PIOB_AIMER_P9 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P9		(1 << 9)
/** PIOB_AIMER_P8 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P8		(1 << 8)
/** PIOB_AIMER_P7 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P7		(1 << 7)
/** PIOB_AIMER_P6 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P6		(1 << 6)
/** PIOB_AIMER_P5 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P5		(1 << 5)
/** PIOB_AIMER_P4 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P4		(1 << 4)
/** PIOB_AIMER_P3 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P3		(1 << 3)
/** PIOB_AIMER_P2 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P2		(1 << 2)
/** PIOB_AIMER_P1 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P1		(1 << 1)
/** PIOB_AIMER_P0 Additional Interrupt Modes Enable. **/
#define PIOB_AIMER_P0		(1 << 0)

/**@}*/

/** @defgroup piob_aimdr AIMDR Additional Interrupt Modes Disables Register
@{*/

/** PIOB_AIMDR_P31 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P31		(1 << 31)
/** PIOB_AIMDR_P30 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P30		(1 << 30)
/** PIOB_AIMDR_P29 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P29		(1 << 29)
/** PIOB_AIMDR_P28 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P28		(1 << 28)
/** PIOB_AIMDR_P27 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P27		(1 << 27)
/** PIOB_AIMDR_P26 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P26		(1 << 26)
/** PIOB_AIMDR_P25 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P25		(1 << 25)
/** PIOB_AIMDR_P24 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P24		(1 << 24)
/** PIOB_AIMDR_P23 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P23		(1 << 23)
/** PIOB_AIMDR_P22 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P22		(1 << 22)
/** PIOB_AIMDR_P21 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P21		(1 << 21)
/** PIOB_AIMDR_P20 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P20		(1 << 20)
/** PIOB_AIMDR_P19 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P19		(1 << 19)
/** PIOB_AIMDR_P18 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P18		(1 << 18)
/** PIOB_AIMDR_P17 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P17		(1 << 17)
/** PIOB_AIMDR_P16 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P16		(1 << 16)
/** PIOB_AIMDR_P15 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P15		(1 << 15)
/** PIOB_AIMDR_P14 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P14		(1 << 14)
/** PIOB_AIMDR_P13 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P13		(1 << 13)
/** PIOB_AIMDR_P12 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P12		(1 << 12)
/** PIOB_AIMDR_P11 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P11		(1 << 11)
/** PIOB_AIMDR_P10 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P10		(1 << 10)
/** PIOB_AIMDR_P9 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P9		(1 << 9)
/** PIOB_AIMDR_P8 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P8		(1 << 8)
/** PIOB_AIMDR_P7 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P7		(1 << 7)
/** PIOB_AIMDR_P6 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P6		(1 << 6)
/** PIOB_AIMDR_P5 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P5		(1 << 5)
/** PIOB_AIMDR_P4 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P4		(1 << 4)
/** PIOB_AIMDR_P3 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P3		(1 << 3)
/** PIOB_AIMDR_P2 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P2		(1 << 2)
/** PIOB_AIMDR_P1 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P1		(1 << 1)
/** PIOB_AIMDR_P0 Additional Interrupt Modes Disable. **/
#define PIOB_AIMDR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_aimmr AIMMR Additional Interrupt Modes Mask Register
@{*/

/** PIOB_AIMMR_P31 Peripheral CD Status. **/
#define PIOB_AIMMR_P31		(1 << 31)
/** PIOB_AIMMR_P30 Peripheral CD Status. **/
#define PIOB_AIMMR_P30		(1 << 30)
/** PIOB_AIMMR_P29 Peripheral CD Status. **/
#define PIOB_AIMMR_P29		(1 << 29)
/** PIOB_AIMMR_P28 Peripheral CD Status. **/
#define PIOB_AIMMR_P28		(1 << 28)
/** PIOB_AIMMR_P27 Peripheral CD Status. **/
#define PIOB_AIMMR_P27		(1 << 27)
/** PIOB_AIMMR_P26 Peripheral CD Status. **/
#define PIOB_AIMMR_P26		(1 << 26)
/** PIOB_AIMMR_P25 Peripheral CD Status. **/
#define PIOB_AIMMR_P25		(1 << 25)
/** PIOB_AIMMR_P24 Peripheral CD Status. **/
#define PIOB_AIMMR_P24		(1 << 24)
/** PIOB_AIMMR_P23 Peripheral CD Status. **/
#define PIOB_AIMMR_P23		(1 << 23)
/** PIOB_AIMMR_P22 Peripheral CD Status. **/
#define PIOB_AIMMR_P22		(1 << 22)
/** PIOB_AIMMR_P21 Peripheral CD Status. **/
#define PIOB_AIMMR_P21		(1 << 21)
/** PIOB_AIMMR_P20 Peripheral CD Status. **/
#define PIOB_AIMMR_P20		(1 << 20)
/** PIOB_AIMMR_P19 Peripheral CD Status. **/
#define PIOB_AIMMR_P19		(1 << 19)
/** PIOB_AIMMR_P18 Peripheral CD Status. **/
#define PIOB_AIMMR_P18		(1 << 18)
/** PIOB_AIMMR_P17 Peripheral CD Status. **/
#define PIOB_AIMMR_P17		(1 << 17)
/** PIOB_AIMMR_P16 Peripheral CD Status. **/
#define PIOB_AIMMR_P16		(1 << 16)
/** PIOB_AIMMR_P15 Peripheral CD Status. **/
#define PIOB_AIMMR_P15		(1 << 15)
/** PIOB_AIMMR_P14 Peripheral CD Status. **/
#define PIOB_AIMMR_P14		(1 << 14)
/** PIOB_AIMMR_P13 Peripheral CD Status. **/
#define PIOB_AIMMR_P13		(1 << 13)
/** PIOB_AIMMR_P12 Peripheral CD Status. **/
#define PIOB_AIMMR_P12		(1 << 12)
/** PIOB_AIMMR_P11 Peripheral CD Status. **/
#define PIOB_AIMMR_P11		(1 << 11)
/** PIOB_AIMMR_P10 Peripheral CD Status. **/
#define PIOB_AIMMR_P10		(1 << 10)
/** PIOB_AIMMR_P9 Peripheral CD Status. **/
#define PIOB_AIMMR_P9		(1 << 9)
/** PIOB_AIMMR_P8 Peripheral CD Status. **/
#define PIOB_AIMMR_P8		(1 << 8)
/** PIOB_AIMMR_P7 Peripheral CD Status. **/
#define PIOB_AIMMR_P7		(1 << 7)
/** PIOB_AIMMR_P6 Peripheral CD Status. **/
#define PIOB_AIMMR_P6		(1 << 6)
/** PIOB_AIMMR_P5 Peripheral CD Status. **/
#define PIOB_AIMMR_P5		(1 << 5)
/** PIOB_AIMMR_P4 Peripheral CD Status. **/
#define PIOB_AIMMR_P4		(1 << 4)
/** PIOB_AIMMR_P3 Peripheral CD Status. **/
#define PIOB_AIMMR_P3		(1 << 3)
/** PIOB_AIMMR_P2 Peripheral CD Status. **/
#define PIOB_AIMMR_P2		(1 << 2)
/** PIOB_AIMMR_P1 Peripheral CD Status. **/
#define PIOB_AIMMR_P1		(1 << 1)
/** PIOB_AIMMR_P0 Peripheral CD Status. **/
#define PIOB_AIMMR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_esr ESR Edge Select Register
@{*/

/** PIOB_ESR_P31 Edge Interrupt Selection. **/
#define PIOB_ESR_P31		(1 << 31)
/** PIOB_ESR_P30 Edge Interrupt Selection. **/
#define PIOB_ESR_P30		(1 << 30)
/** PIOB_ESR_P29 Edge Interrupt Selection. **/
#define PIOB_ESR_P29		(1 << 29)
/** PIOB_ESR_P28 Edge Interrupt Selection. **/
#define PIOB_ESR_P28		(1 << 28)
/** PIOB_ESR_P27 Edge Interrupt Selection. **/
#define PIOB_ESR_P27		(1 << 27)
/** PIOB_ESR_P26 Edge Interrupt Selection. **/
#define PIOB_ESR_P26		(1 << 26)
/** PIOB_ESR_P25 Edge Interrupt Selection. **/
#define PIOB_ESR_P25		(1 << 25)
/** PIOB_ESR_P24 Edge Interrupt Selection. **/
#define PIOB_ESR_P24		(1 << 24)
/** PIOB_ESR_P23 Edge Interrupt Selection. **/
#define PIOB_ESR_P23		(1 << 23)
/** PIOB_ESR_P22 Edge Interrupt Selection. **/
#define PIOB_ESR_P22		(1 << 22)
/** PIOB_ESR_P21 Edge Interrupt Selection. **/
#define PIOB_ESR_P21		(1 << 21)
/** PIOB_ESR_P20 Edge Interrupt Selection. **/
#define PIOB_ESR_P20		(1 << 20)
/** PIOB_ESR_P19 Edge Interrupt Selection. **/
#define PIOB_ESR_P19		(1 << 19)
/** PIOB_ESR_P18 Edge Interrupt Selection. **/
#define PIOB_ESR_P18		(1 << 18)
/** PIOB_ESR_P17 Edge Interrupt Selection. **/
#define PIOB_ESR_P17		(1 << 17)
/** PIOB_ESR_P16 Edge Interrupt Selection. **/
#define PIOB_ESR_P16		(1 << 16)
/** PIOB_ESR_P15 Edge Interrupt Selection. **/
#define PIOB_ESR_P15		(1 << 15)
/** PIOB_ESR_P14 Edge Interrupt Selection. **/
#define PIOB_ESR_P14		(1 << 14)
/** PIOB_ESR_P13 Edge Interrupt Selection. **/
#define PIOB_ESR_P13		(1 << 13)
/** PIOB_ESR_P12 Edge Interrupt Selection. **/
#define PIOB_ESR_P12		(1 << 12)
/** PIOB_ESR_P11 Edge Interrupt Selection. **/
#define PIOB_ESR_P11		(1 << 11)
/** PIOB_ESR_P10 Edge Interrupt Selection. **/
#define PIOB_ESR_P10		(1 << 10)
/** PIOB_ESR_P9 Edge Interrupt Selection. **/
#define PIOB_ESR_P9		(1 << 9)
/** PIOB_ESR_P8 Edge Interrupt Selection. **/
#define PIOB_ESR_P8		(1 << 8)
/** PIOB_ESR_P7 Edge Interrupt Selection. **/
#define PIOB_ESR_P7		(1 << 7)
/** PIOB_ESR_P6 Edge Interrupt Selection. **/
#define PIOB_ESR_P6		(1 << 6)
/** PIOB_ESR_P5 Edge Interrupt Selection. **/
#define PIOB_ESR_P5		(1 << 5)
/** PIOB_ESR_P4 Edge Interrupt Selection. **/
#define PIOB_ESR_P4		(1 << 4)
/** PIOB_ESR_P3 Edge Interrupt Selection. **/
#define PIOB_ESR_P3		(1 << 3)
/** PIOB_ESR_P2 Edge Interrupt Selection. **/
#define PIOB_ESR_P2		(1 << 2)
/** PIOB_ESR_P1 Edge Interrupt Selection. **/
#define PIOB_ESR_P1		(1 << 1)
/** PIOB_ESR_P0 Edge Interrupt Selection. **/
#define PIOB_ESR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_lsr LSR Level Select Register
@{*/

/** PIOB_LSR_P31 Level Interrupt Selection. **/
#define PIOB_LSR_P31		(1 << 31)
/** PIOB_LSR_P30 Level Interrupt Selection. **/
#define PIOB_LSR_P30		(1 << 30)
/** PIOB_LSR_P29 Level Interrupt Selection. **/
#define PIOB_LSR_P29		(1 << 29)
/** PIOB_LSR_P28 Level Interrupt Selection. **/
#define PIOB_LSR_P28		(1 << 28)
/** PIOB_LSR_P27 Level Interrupt Selection. **/
#define PIOB_LSR_P27		(1 << 27)
/** PIOB_LSR_P26 Level Interrupt Selection. **/
#define PIOB_LSR_P26		(1 << 26)
/** PIOB_LSR_P25 Level Interrupt Selection. **/
#define PIOB_LSR_P25		(1 << 25)
/** PIOB_LSR_P24 Level Interrupt Selection. **/
#define PIOB_LSR_P24		(1 << 24)
/** PIOB_LSR_P23 Level Interrupt Selection. **/
#define PIOB_LSR_P23		(1 << 23)
/** PIOB_LSR_P22 Level Interrupt Selection. **/
#define PIOB_LSR_P22		(1 << 22)
/** PIOB_LSR_P21 Level Interrupt Selection. **/
#define PIOB_LSR_P21		(1 << 21)
/** PIOB_LSR_P20 Level Interrupt Selection. **/
#define PIOB_LSR_P20		(1 << 20)
/** PIOB_LSR_P19 Level Interrupt Selection. **/
#define PIOB_LSR_P19		(1 << 19)
/** PIOB_LSR_P18 Level Interrupt Selection. **/
#define PIOB_LSR_P18		(1 << 18)
/** PIOB_LSR_P17 Level Interrupt Selection. **/
#define PIOB_LSR_P17		(1 << 17)
/** PIOB_LSR_P16 Level Interrupt Selection. **/
#define PIOB_LSR_P16		(1 << 16)
/** PIOB_LSR_P15 Level Interrupt Selection. **/
#define PIOB_LSR_P15		(1 << 15)
/** PIOB_LSR_P14 Level Interrupt Selection. **/
#define PIOB_LSR_P14		(1 << 14)
/** PIOB_LSR_P13 Level Interrupt Selection. **/
#define PIOB_LSR_P13		(1 << 13)
/** PIOB_LSR_P12 Level Interrupt Selection. **/
#define PIOB_LSR_P12		(1 << 12)
/** PIOB_LSR_P11 Level Interrupt Selection. **/
#define PIOB_LSR_P11		(1 << 11)
/** PIOB_LSR_P10 Level Interrupt Selection. **/
#define PIOB_LSR_P10		(1 << 10)
/** PIOB_LSR_P9 Level Interrupt Selection. **/
#define PIOB_LSR_P9		(1 << 9)
/** PIOB_LSR_P8 Level Interrupt Selection. **/
#define PIOB_LSR_P8		(1 << 8)
/** PIOB_LSR_P7 Level Interrupt Selection. **/
#define PIOB_LSR_P7		(1 << 7)
/** PIOB_LSR_P6 Level Interrupt Selection. **/
#define PIOB_LSR_P6		(1 << 6)
/** PIOB_LSR_P5 Level Interrupt Selection. **/
#define PIOB_LSR_P5		(1 << 5)
/** PIOB_LSR_P4 Level Interrupt Selection. **/
#define PIOB_LSR_P4		(1 << 4)
/** PIOB_LSR_P3 Level Interrupt Selection. **/
#define PIOB_LSR_P3		(1 << 3)
/** PIOB_LSR_P2 Level Interrupt Selection. **/
#define PIOB_LSR_P2		(1 << 2)
/** PIOB_LSR_P1 Level Interrupt Selection. **/
#define PIOB_LSR_P1		(1 << 1)
/** PIOB_LSR_P0 Level Interrupt Selection. **/
#define PIOB_LSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_elsr ELSR Edge/Level Status Register
@{*/

/** PIOB_ELSR_P31 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P31		(1 << 31)
/** PIOB_ELSR_P30 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P30		(1 << 30)
/** PIOB_ELSR_P29 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P29		(1 << 29)
/** PIOB_ELSR_P28 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P28		(1 << 28)
/** PIOB_ELSR_P27 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P27		(1 << 27)
/** PIOB_ELSR_P26 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P26		(1 << 26)
/** PIOB_ELSR_P25 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P25		(1 << 25)
/** PIOB_ELSR_P24 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P24		(1 << 24)
/** PIOB_ELSR_P23 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P23		(1 << 23)
/** PIOB_ELSR_P22 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P22		(1 << 22)
/** PIOB_ELSR_P21 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P21		(1 << 21)
/** PIOB_ELSR_P20 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P20		(1 << 20)
/** PIOB_ELSR_P19 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P19		(1 << 19)
/** PIOB_ELSR_P18 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P18		(1 << 18)
/** PIOB_ELSR_P17 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P17		(1 << 17)
/** PIOB_ELSR_P16 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P16		(1 << 16)
/** PIOB_ELSR_P15 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P15		(1 << 15)
/** PIOB_ELSR_P14 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P14		(1 << 14)
/** PIOB_ELSR_P13 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P13		(1 << 13)
/** PIOB_ELSR_P12 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P12		(1 << 12)
/** PIOB_ELSR_P11 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P11		(1 << 11)
/** PIOB_ELSR_P10 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P10		(1 << 10)
/** PIOB_ELSR_P9 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P9		(1 << 9)
/** PIOB_ELSR_P8 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P8		(1 << 8)
/** PIOB_ELSR_P7 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P7		(1 << 7)
/** PIOB_ELSR_P6 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P6		(1 << 6)
/** PIOB_ELSR_P5 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P5		(1 << 5)
/** PIOB_ELSR_P4 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P4		(1 << 4)
/** PIOB_ELSR_P3 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P3		(1 << 3)
/** PIOB_ELSR_P2 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P2		(1 << 2)
/** PIOB_ELSR_P1 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P1		(1 << 1)
/** PIOB_ELSR_P0 Edge/Level Interrupt source selection. **/
#define PIOB_ELSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_fellsr FELLSR Falling Edge/Low Level Select Register
@{*/

/** PIOB_FELLSR_P31 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P31		(1 << 31)
/** PIOB_FELLSR_P30 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P30		(1 << 30)
/** PIOB_FELLSR_P29 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P29		(1 << 29)
/** PIOB_FELLSR_P28 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P28		(1 << 28)
/** PIOB_FELLSR_P27 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P27		(1 << 27)
/** PIOB_FELLSR_P26 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P26		(1 << 26)
/** PIOB_FELLSR_P25 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P25		(1 << 25)
/** PIOB_FELLSR_P24 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P24		(1 << 24)
/** PIOB_FELLSR_P23 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P23		(1 << 23)
/** PIOB_FELLSR_P22 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P22		(1 << 22)
/** PIOB_FELLSR_P21 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P21		(1 << 21)
/** PIOB_FELLSR_P20 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P20		(1 << 20)
/** PIOB_FELLSR_P19 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P19		(1 << 19)
/** PIOB_FELLSR_P18 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P18		(1 << 18)
/** PIOB_FELLSR_P17 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P17		(1 << 17)
/** PIOB_FELLSR_P16 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P16		(1 << 16)
/** PIOB_FELLSR_P15 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P15		(1 << 15)
/** PIOB_FELLSR_P14 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P14		(1 << 14)
/** PIOB_FELLSR_P13 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P13		(1 << 13)
/** PIOB_FELLSR_P12 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P12		(1 << 12)
/** PIOB_FELLSR_P11 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P11		(1 << 11)
/** PIOB_FELLSR_P10 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P10		(1 << 10)
/** PIOB_FELLSR_P9 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P9		(1 << 9)
/** PIOB_FELLSR_P8 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P8		(1 << 8)
/** PIOB_FELLSR_P7 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P7		(1 << 7)
/** PIOB_FELLSR_P6 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P6		(1 << 6)
/** PIOB_FELLSR_P5 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P5		(1 << 5)
/** PIOB_FELLSR_P4 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P4		(1 << 4)
/** PIOB_FELLSR_P3 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P3		(1 << 3)
/** PIOB_FELLSR_P2 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P2		(1 << 2)
/** PIOB_FELLSR_P1 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P1		(1 << 1)
/** PIOB_FELLSR_P0 Falling Edge/Low Level Interrupt Selection. **/
#define PIOB_FELLSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_rehlsr REHLSR Rising Edge/ High Level Select Register
@{*/

/** PIOB_REHLSR_P31 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P31		(1 << 31)
/** PIOB_REHLSR_P30 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P30		(1 << 30)
/** PIOB_REHLSR_P29 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P29		(1 << 29)
/** PIOB_REHLSR_P28 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P28		(1 << 28)
/** PIOB_REHLSR_P27 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P27		(1 << 27)
/** PIOB_REHLSR_P26 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P26		(1 << 26)
/** PIOB_REHLSR_P25 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P25		(1 << 25)
/** PIOB_REHLSR_P24 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P24		(1 << 24)
/** PIOB_REHLSR_P23 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P23		(1 << 23)
/** PIOB_REHLSR_P22 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P22		(1 << 22)
/** PIOB_REHLSR_P21 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P21		(1 << 21)
/** PIOB_REHLSR_P20 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P20		(1 << 20)
/** PIOB_REHLSR_P19 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P19		(1 << 19)
/** PIOB_REHLSR_P18 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P18		(1 << 18)
/** PIOB_REHLSR_P17 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P17		(1 << 17)
/** PIOB_REHLSR_P16 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P16		(1 << 16)
/** PIOB_REHLSR_P15 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P15		(1 << 15)
/** PIOB_REHLSR_P14 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P14		(1 << 14)
/** PIOB_REHLSR_P13 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P13		(1 << 13)
/** PIOB_REHLSR_P12 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P12		(1 << 12)
/** PIOB_REHLSR_P11 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P11		(1 << 11)
/** PIOB_REHLSR_P10 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P10		(1 << 10)
/** PIOB_REHLSR_P9 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P9		(1 << 9)
/** PIOB_REHLSR_P8 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P8		(1 << 8)
/** PIOB_REHLSR_P7 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P7		(1 << 7)
/** PIOB_REHLSR_P6 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P6		(1 << 6)
/** PIOB_REHLSR_P5 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P5		(1 << 5)
/** PIOB_REHLSR_P4 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P4		(1 << 4)
/** PIOB_REHLSR_P3 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P3		(1 << 3)
/** PIOB_REHLSR_P2 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P2		(1 << 2)
/** PIOB_REHLSR_P1 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P1		(1 << 1)
/** PIOB_REHLSR_P0 Rising Edge /High Level Interrupt Selection. **/
#define PIOB_REHLSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_frlhsr FRLHSR Fall/Rise - Low/High Status Register
@{*/

/** PIOB_FRLHSR_P31 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P31		(1 << 31)
/** PIOB_FRLHSR_P30 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P30		(1 << 30)
/** PIOB_FRLHSR_P29 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P29		(1 << 29)
/** PIOB_FRLHSR_P28 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P28		(1 << 28)
/** PIOB_FRLHSR_P27 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P27		(1 << 27)
/** PIOB_FRLHSR_P26 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P26		(1 << 26)
/** PIOB_FRLHSR_P25 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P25		(1 << 25)
/** PIOB_FRLHSR_P24 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P24		(1 << 24)
/** PIOB_FRLHSR_P23 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P23		(1 << 23)
/** PIOB_FRLHSR_P22 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P22		(1 << 22)
/** PIOB_FRLHSR_P21 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P21		(1 << 21)
/** PIOB_FRLHSR_P20 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P20		(1 << 20)
/** PIOB_FRLHSR_P19 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P19		(1 << 19)
/** PIOB_FRLHSR_P18 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P18		(1 << 18)
/** PIOB_FRLHSR_P17 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P17		(1 << 17)
/** PIOB_FRLHSR_P16 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P16		(1 << 16)
/** PIOB_FRLHSR_P15 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P15		(1 << 15)
/** PIOB_FRLHSR_P14 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P14		(1 << 14)
/** PIOB_FRLHSR_P13 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P13		(1 << 13)
/** PIOB_FRLHSR_P12 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P12		(1 << 12)
/** PIOB_FRLHSR_P11 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P11		(1 << 11)
/** PIOB_FRLHSR_P10 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P10		(1 << 10)
/** PIOB_FRLHSR_P9 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P9		(1 << 9)
/** PIOB_FRLHSR_P8 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P8		(1 << 8)
/** PIOB_FRLHSR_P7 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P7		(1 << 7)
/** PIOB_FRLHSR_P6 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P6		(1 << 6)
/** PIOB_FRLHSR_P5 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P5		(1 << 5)
/** PIOB_FRLHSR_P4 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P4		(1 << 4)
/** PIOB_FRLHSR_P3 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P3		(1 << 3)
/** PIOB_FRLHSR_P2 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P2		(1 << 2)
/** PIOB_FRLHSR_P1 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P1		(1 << 1)
/** PIOB_FRLHSR_P0 Edge /Level Interrupt Source Selection. **/
#define PIOB_FRLHSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_locksr LOCKSR Lock Status
@{*/

/** PIOB_LOCKSR_P31 Lock Status. **/
#define PIOB_LOCKSR_P31		(1 << 31)
/** PIOB_LOCKSR_P30 Lock Status. **/
#define PIOB_LOCKSR_P30		(1 << 30)
/** PIOB_LOCKSR_P29 Lock Status. **/
#define PIOB_LOCKSR_P29		(1 << 29)
/** PIOB_LOCKSR_P28 Lock Status. **/
#define PIOB_LOCKSR_P28		(1 << 28)
/** PIOB_LOCKSR_P27 Lock Status. **/
#define PIOB_LOCKSR_P27		(1 << 27)
/** PIOB_LOCKSR_P26 Lock Status. **/
#define PIOB_LOCKSR_P26		(1 << 26)
/** PIOB_LOCKSR_P25 Lock Status. **/
#define PIOB_LOCKSR_P25		(1 << 25)
/** PIOB_LOCKSR_P24 Lock Status. **/
#define PIOB_LOCKSR_P24		(1 << 24)
/** PIOB_LOCKSR_P23 Lock Status. **/
#define PIOB_LOCKSR_P23		(1 << 23)
/** PIOB_LOCKSR_P22 Lock Status. **/
#define PIOB_LOCKSR_P22		(1 << 22)
/** PIOB_LOCKSR_P21 Lock Status. **/
#define PIOB_LOCKSR_P21		(1 << 21)
/** PIOB_LOCKSR_P20 Lock Status. **/
#define PIOB_LOCKSR_P20		(1 << 20)
/** PIOB_LOCKSR_P19 Lock Status. **/
#define PIOB_LOCKSR_P19		(1 << 19)
/** PIOB_LOCKSR_P18 Lock Status. **/
#define PIOB_LOCKSR_P18		(1 << 18)
/** PIOB_LOCKSR_P17 Lock Status. **/
#define PIOB_LOCKSR_P17		(1 << 17)
/** PIOB_LOCKSR_P16 Lock Status. **/
#define PIOB_LOCKSR_P16		(1 << 16)
/** PIOB_LOCKSR_P15 Lock Status. **/
#define PIOB_LOCKSR_P15		(1 << 15)
/** PIOB_LOCKSR_P14 Lock Status. **/
#define PIOB_LOCKSR_P14		(1 << 14)
/** PIOB_LOCKSR_P13 Lock Status. **/
#define PIOB_LOCKSR_P13		(1 << 13)
/** PIOB_LOCKSR_P12 Lock Status. **/
#define PIOB_LOCKSR_P12		(1 << 12)
/** PIOB_LOCKSR_P11 Lock Status. **/
#define PIOB_LOCKSR_P11		(1 << 11)
/** PIOB_LOCKSR_P10 Lock Status. **/
#define PIOB_LOCKSR_P10		(1 << 10)
/** PIOB_LOCKSR_P9 Lock Status. **/
#define PIOB_LOCKSR_P9		(1 << 9)
/** PIOB_LOCKSR_P8 Lock Status. **/
#define PIOB_LOCKSR_P8		(1 << 8)
/** PIOB_LOCKSR_P7 Lock Status. **/
#define PIOB_LOCKSR_P7		(1 << 7)
/** PIOB_LOCKSR_P6 Lock Status. **/
#define PIOB_LOCKSR_P6		(1 << 6)
/** PIOB_LOCKSR_P5 Lock Status. **/
#define PIOB_LOCKSR_P5		(1 << 5)
/** PIOB_LOCKSR_P4 Lock Status. **/
#define PIOB_LOCKSR_P4		(1 << 4)
/** PIOB_LOCKSR_P3 Lock Status. **/
#define PIOB_LOCKSR_P3		(1 << 3)
/** PIOB_LOCKSR_P2 Lock Status. **/
#define PIOB_LOCKSR_P2		(1 << 2)
/** PIOB_LOCKSR_P1 Lock Status. **/
#define PIOB_LOCKSR_P1		(1 << 1)
/** PIOB_LOCKSR_P0 Lock Status. **/
#define PIOB_LOCKSR_P0		(1 << 0)

/**@}*/

/** @defgroup piob_wpmr WPMR Write Protect Mode Register
@{*/


#define PIOB_WPMR_WPKEY_SHIFT		8
#define PIOB_WPMR_WPKEY_MASK		0xffffff
/** @defgroup piob_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** PIOB_WPMR_WPEN Write Protect Enable **/
#define PIOB_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup piob_wpsr WPSR Write Protect Status Register
@{*/


#define PIOB_WPSR_WPVSRC_SHIFT		8
#define PIOB_WPSR_WPVSRC_MASK		0xffff
/** @defgroup piob_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PIOB_WPSR_WPVS Write Protect Violation Status **/
#define PIOB_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup piob_schmitt SCHMITT Schmitt Trigger Register
@{*/

/** PIOB_SCHMITT_SCHMITT31  **/
#define PIOB_SCHMITT_SCHMITT31		(1 << 31)
/** PIOB_SCHMITT_SCHMITT30  **/
#define PIOB_SCHMITT_SCHMITT30		(1 << 30)
/** PIOB_SCHMITT_SCHMITT29  **/
#define PIOB_SCHMITT_SCHMITT29		(1 << 29)
/** PIOB_SCHMITT_SCHMITT28  **/
#define PIOB_SCHMITT_SCHMITT28		(1 << 28)
/** PIOB_SCHMITT_SCHMITT27  **/
#define PIOB_SCHMITT_SCHMITT27		(1 << 27)
/** PIOB_SCHMITT_SCHMITT26  **/
#define PIOB_SCHMITT_SCHMITT26		(1 << 26)
/** PIOB_SCHMITT_SCHMITT25  **/
#define PIOB_SCHMITT_SCHMITT25		(1 << 25)
/** PIOB_SCHMITT_SCHMITT24  **/
#define PIOB_SCHMITT_SCHMITT24		(1 << 24)
/** PIOB_SCHMITT_SCHMITT23  **/
#define PIOB_SCHMITT_SCHMITT23		(1 << 23)
/** PIOB_SCHMITT_SCHMITT22  **/
#define PIOB_SCHMITT_SCHMITT22		(1 << 22)
/** PIOB_SCHMITT_SCHMITT21  **/
#define PIOB_SCHMITT_SCHMITT21		(1 << 21)
/** PIOB_SCHMITT_SCHMITT20  **/
#define PIOB_SCHMITT_SCHMITT20		(1 << 20)
/** PIOB_SCHMITT_SCHMITT19  **/
#define PIOB_SCHMITT_SCHMITT19		(1 << 19)
/** PIOB_SCHMITT_SCHMITT18  **/
#define PIOB_SCHMITT_SCHMITT18		(1 << 18)
/** PIOB_SCHMITT_SCHMITT17  **/
#define PIOB_SCHMITT_SCHMITT17		(1 << 17)
/** PIOB_SCHMITT_SCHMITT16  **/
#define PIOB_SCHMITT_SCHMITT16		(1 << 16)
/** PIOB_SCHMITT_SCHMITT15  **/
#define PIOB_SCHMITT_SCHMITT15		(1 << 15)
/** PIOB_SCHMITT_SCHMITT14  **/
#define PIOB_SCHMITT_SCHMITT14		(1 << 14)
/** PIOB_SCHMITT_SCHMITT13  **/
#define PIOB_SCHMITT_SCHMITT13		(1 << 13)
/** PIOB_SCHMITT_SCHMITT12  **/
#define PIOB_SCHMITT_SCHMITT12		(1 << 12)
/** PIOB_SCHMITT_SCHMITT11  **/
#define PIOB_SCHMITT_SCHMITT11		(1 << 11)
/** PIOB_SCHMITT_SCHMITT10  **/
#define PIOB_SCHMITT_SCHMITT10		(1 << 10)
/** PIOB_SCHMITT_SCHMITT9  **/
#define PIOB_SCHMITT_SCHMITT9		(1 << 9)
/** PIOB_SCHMITT_SCHMITT8  **/
#define PIOB_SCHMITT_SCHMITT8		(1 << 8)
/** PIOB_SCHMITT_SCHMITT7  **/
#define PIOB_SCHMITT_SCHMITT7		(1 << 7)
/** PIOB_SCHMITT_SCHMITT6  **/
#define PIOB_SCHMITT_SCHMITT6		(1 << 6)
/** PIOB_SCHMITT_SCHMITT5  **/
#define PIOB_SCHMITT_SCHMITT5		(1 << 5)
/** PIOB_SCHMITT_SCHMITT4  **/
#define PIOB_SCHMITT_SCHMITT4		(1 << 4)
/** PIOB_SCHMITT_SCHMITT3  **/
#define PIOB_SCHMITT_SCHMITT3		(1 << 3)
/** PIOB_SCHMITT_SCHMITT2  **/
#define PIOB_SCHMITT_SCHMITT2		(1 << 2)
/** PIOB_SCHMITT_SCHMITT1  **/
#define PIOB_SCHMITT_SCHMITT1		(1 << 1)
/** PIOB_SCHMITT_SCHMITT0  **/
#define PIOB_SCHMITT_SCHMITT0		(1 << 0)

/**@}*/

/** @defgroup piob_pcmr PCMR Parallel Capture Mode Register
@{*/

/** PIOB_PCMR_FRSTS Parallel Capture Mode First Sample **/
#define PIOB_PCMR_FRSTS		(1 << 11)
/** PIOB_PCMR_HALFS Parallel Capture Mode Half Sampling **/
#define PIOB_PCMR_HALFS		(1 << 10)
/** PIOB_PCMR_ALWYS Parallel Capture Mode Always Sampling **/
#define PIOB_PCMR_ALWYS		(1 << 9)

#define PIOB_PCMR_DSIZE_SHIFT		4
#define PIOB_PCMR_DSIZE_MASK		0x03
/** @defgroup piob_pcmr_dsize DSIZE Parallel Capture Mode Data Size
@{*/
/**@}*/

/** PIOB_PCMR_PCEN Parallel Capture Mode Enable **/
#define PIOB_PCMR_PCEN		(1 << 0)

/**@}*/

/** @defgroup piob_pcier PCIER Parallel Capture Interrupt Enable Register
@{*/

/** PIOB_PCIER_RXBUFF Reception Buffer Full Interrupt Enable **/
#define PIOB_PCIER_RXBUFF		(1 << 3)
/** PIOB_PCIER_ENDRX End of Reception Transfer Interrupt Enable **/
#define PIOB_PCIER_ENDRX		(1 << 2)
/** PIOB_PCIER_OVRE Parallel Capture Mode Overrun Error Interrupt Enable **/
#define PIOB_PCIER_OVRE		(1 << 1)
/** PIOB_PCIER_DRDY Parallel Capture Mode Data Ready Interrupt Enable **/
#define PIOB_PCIER_DRDY		(1 << 0)

/**@}*/

/** @defgroup piob_pcidr PCIDR Parallel Capture Interrupt Disable Register
@{*/

/** PIOB_PCIDR_RXBUFF Reception Buffer Full Interrupt Disable **/
#define PIOB_PCIDR_RXBUFF		(1 << 3)
/** PIOB_PCIDR_ENDRX End of Reception Transfer Interrupt Disable **/
#define PIOB_PCIDR_ENDRX		(1 << 2)
/** PIOB_PCIDR_OVRE Parallel Capture Mode Overrun Error Interrupt Disable **/
#define PIOB_PCIDR_OVRE		(1 << 1)
/** PIOB_PCIDR_DRDY Parallel Capture Mode Data Ready Interrupt Disable **/
#define PIOB_PCIDR_DRDY		(1 << 0)

/**@}*/

/** @defgroup piob_pcimr PCIMR Parallel Capture Interrupt Mask Register
@{*/

/** PIOB_PCIMR_RXBUFF Reception Buffer Full Interrupt Mask **/
#define PIOB_PCIMR_RXBUFF		(1 << 3)
/** PIOB_PCIMR_ENDRX End of Reception Transfer Interrupt Mask **/
#define PIOB_PCIMR_ENDRX		(1 << 2)
/** PIOB_PCIMR_OVRE Parallel Capture Mode Overrun Error Interrupt Mask **/
#define PIOB_PCIMR_OVRE		(1 << 1)
/** PIOB_PCIMR_DRDY Parallel Capture Mode Data Ready Interrupt Mask **/
#define PIOB_PCIMR_DRDY		(1 << 0)

/**@}*/

/** @defgroup piob_pcisr PCISR Parallel Capture Interrupt Status Register
@{*/

/** PIOB_PCISR_RXBUFF Reception Buffer Full **/
#define PIOB_PCISR_RXBUFF		(1 << 3)
/** PIOB_PCISR_ENDRX End of Reception Transfer. **/
#define PIOB_PCISR_ENDRX		(1 << 2)
/** PIOB_PCISR_OVRE Parallel Capture Mode Overrun Error. **/
#define PIOB_PCISR_OVRE		(1 << 1)
/** PIOB_PCISR_DRDY Parallel Capture Mode Data Ready **/
#define PIOB_PCISR_DRDY		(1 << 0)

/**@}*/

/** @defgroup piob_pcrhr PCRHR Parallel Capture Reception Holding Register
@{*/


#define PIOB_PCRHR_RDATA_SHIFT		0
#define PIOB_PCRHR_RDATA_MASK		0xffffffff
/** @defgroup piob_pcrhr_rdata RDATA Parallel Capture Mode Reception Data.
@{*/
/**@}*/


/**@}*/
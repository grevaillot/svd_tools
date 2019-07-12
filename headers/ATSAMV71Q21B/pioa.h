#pragma once 

/* --- PIOA: Parallel Input/Output Controller ----------------------- */

/** @defgroup pioa_registers Parallel Input/Output Controller Register
@{*/

/** PIOA_PIO_PER PIO Enable Register **/
#define PIOA_PIO_PER			MMIO32(PIOA_BASE + 0x00)
/** PIOA_PIO_PDR PIO Disable Register **/
#define PIOA_PIO_PDR			MMIO32(PIOA_BASE + 0x04)
/** PIOA_PIO_PSR PIO Status Register **/
#define PIOA_PIO_PSR			MMIO32(PIOA_BASE + 0x08)
/** PIOA_PIO_OER Output Enable Register **/
#define PIOA_PIO_OER			MMIO32(PIOA_BASE + 0x10)
/** PIOA_PIO_ODR Output Disable Register **/
#define PIOA_PIO_ODR			MMIO32(PIOA_BASE + 0x14)
/** PIOA_PIO_OSR Output Status Register **/
#define PIOA_PIO_OSR			MMIO32(PIOA_BASE + 0x18)
/** PIOA_PIO_IFER Glitch Input Filter Enable Register **/
#define PIOA_PIO_IFER			MMIO32(PIOA_BASE + 0x20)
/** PIOA_PIO_IFDR Glitch Input Filter Disable Register **/
#define PIOA_PIO_IFDR			MMIO32(PIOA_BASE + 0x24)
/** PIOA_PIO_IFSR Glitch Input Filter Status Register **/
#define PIOA_PIO_IFSR			MMIO32(PIOA_BASE + 0x28)
/** PIOA_PIO_SODR Set Output Data Register **/
#define PIOA_PIO_SODR			MMIO32(PIOA_BASE + 0x30)
/** PIOA_PIO_CODR Clear Output Data Register **/
#define PIOA_PIO_CODR			MMIO32(PIOA_BASE + 0x34)
/** PIOA_PIO_ODSR Output Data Status Register **/
#define PIOA_PIO_ODSR			MMIO32(PIOA_BASE + 0x38)
/** PIOA_PIO_PDSR Pin Data Status Register **/
#define PIOA_PIO_PDSR			MMIO32(PIOA_BASE + 0x3c)
/** PIOA_PIO_IER Interrupt Enable Register **/
#define PIOA_PIO_IER			MMIO32(PIOA_BASE + 0x40)
/** PIOA_PIO_IDR Interrupt Disable Register **/
#define PIOA_PIO_IDR			MMIO32(PIOA_BASE + 0x44)
/** PIOA_PIO_IMR Interrupt Mask Register **/
#define PIOA_PIO_IMR			MMIO32(PIOA_BASE + 0x48)
/** PIOA_PIO_ISR Interrupt Status Register **/
#define PIOA_PIO_ISR			MMIO32(PIOA_BASE + 0x4c)
/** PIOA_PIO_MDER Multi-driver Enable Register **/
#define PIOA_PIO_MDER			MMIO32(PIOA_BASE + 0x50)
/** PIOA_PIO_MDDR Multi-driver Disable Register **/
#define PIOA_PIO_MDDR			MMIO32(PIOA_BASE + 0x54)
/** PIOA_PIO_MDSR Multi-driver Status Register **/
#define PIOA_PIO_MDSR			MMIO32(PIOA_BASE + 0x58)
/** PIOA_PIO_PUDR Pull-up Disable Register **/
#define PIOA_PIO_PUDR			MMIO32(PIOA_BASE + 0x60)
/** PIOA_PIO_PUER Pull-up Enable Register **/
#define PIOA_PIO_PUER			MMIO32(PIOA_BASE + 0x64)
/** PIOA_PIO_PUSR Pad Pull-up Status Register **/
#define PIOA_PIO_PUSR			MMIO32(PIOA_BASE + 0x68)
/** PIOA_PIO_ABCDSR[0] Peripheral ABCD Select Register 0 **/
#define PIOA_PIO_ABCDSR[0]			MMIO32(PIOA_BASE + 0x70)
/** PIOA_PIO_ABCDSR[1] Peripheral ABCD Select Register 0 **/
#define PIOA_PIO_ABCDSR[1]			MMIO32(PIOA_BASE + 0x74)
/** PIOA_PIO_IFSCDR Input Filter Slow Clock Disable Register **/
#define PIOA_PIO_IFSCDR			MMIO32(PIOA_BASE + 0x80)
/** PIOA_PIO_IFSCER Input Filter Slow Clock Enable Register **/
#define PIOA_PIO_IFSCER			MMIO32(PIOA_BASE + 0x84)
/** PIOA_PIO_IFSCSR Input Filter Slow Clock Status Register **/
#define PIOA_PIO_IFSCSR			MMIO32(PIOA_BASE + 0x88)
/** PIOA_PIO_SCDR Slow Clock Divider Debouncing Register **/
#define PIOA_PIO_SCDR			MMIO32(PIOA_BASE + 0x8c)
/** PIOA_PIO_PPDDR Pad Pull-down Disable Register **/
#define PIOA_PIO_PPDDR			MMIO32(PIOA_BASE + 0x90)
/** PIOA_PIO_PPDER Pad Pull-down Enable Register **/
#define PIOA_PIO_PPDER			MMIO32(PIOA_BASE + 0x94)
/** PIOA_PIO_PPDSR Pad Pull-down Status Register **/
#define PIOA_PIO_PPDSR			MMIO32(PIOA_BASE + 0x98)
/** PIOA_PIO_OWER Output Write Enable **/
#define PIOA_PIO_OWER			MMIO32(PIOA_BASE + 0xa0)
/** PIOA_PIO_OWDR Output Write Disable **/
#define PIOA_PIO_OWDR			MMIO32(PIOA_BASE + 0xa4)
/** PIOA_PIO_OWSR Output Write Status Register **/
#define PIOA_PIO_OWSR			MMIO32(PIOA_BASE + 0xa8)
/** PIOA_PIO_AIMER Additional Interrupt Modes Enable Register **/
#define PIOA_PIO_AIMER			MMIO32(PIOA_BASE + 0xb0)
/** PIOA_PIO_AIMDR Additional Interrupt Modes Disable Register **/
#define PIOA_PIO_AIMDR			MMIO32(PIOA_BASE + 0xb4)
/** PIOA_PIO_AIMMR Additional Interrupt Modes Mask Register **/
#define PIOA_PIO_AIMMR			MMIO32(PIOA_BASE + 0xb8)
/** PIOA_PIO_ESR Edge Select Register **/
#define PIOA_PIO_ESR			MMIO32(PIOA_BASE + 0xc0)
/** PIOA_PIO_LSR Level Select Register **/
#define PIOA_PIO_LSR			MMIO32(PIOA_BASE + 0xc4)
/** PIOA_PIO_ELSR Edge/Level Status Register **/
#define PIOA_PIO_ELSR			MMIO32(PIOA_BASE + 0xc8)
/** PIOA_PIO_FELLSR Falling Edge/Low-Level Select Register **/
#define PIOA_PIO_FELLSR			MMIO32(PIOA_BASE + 0xd0)
/** PIOA_PIO_REHLSR Rising Edge/High-Level Select Register **/
#define PIOA_PIO_REHLSR			MMIO32(PIOA_BASE + 0xd4)
/** PIOA_PIO_FRLHSR Fall/Rise - Low/High Status Register **/
#define PIOA_PIO_FRLHSR			MMIO32(PIOA_BASE + 0xd8)
/** PIOA_PIO_LOCKSR Lock Status **/
#define PIOA_PIO_LOCKSR			MMIO32(PIOA_BASE + 0xe0)
/** PIOA_PIO_WPMR Write Protection Mode Register **/
#define PIOA_PIO_WPMR			MMIO32(PIOA_BASE + 0xe4)
/** PIOA_PIO_WPSR Write Protection Status Register **/
#define PIOA_PIO_WPSR			MMIO32(PIOA_BASE + 0xe8)
/** PIOA_PIO_SCHMITT Schmitt Trigger Register **/
#define PIOA_PIO_SCHMITT			MMIO32(PIOA_BASE + 0x100)
/** PIOA_PIO_DRIVER I/O Drive Register **/
#define PIOA_PIO_DRIVER			MMIO32(PIOA_BASE + 0x118)
/** PIOA_PIO_PCMR Parallel Capture Mode Register **/
#define PIOA_PIO_PCMR			MMIO32(PIOA_BASE + 0x150)
/** PIOA_PIO_PCIER Parallel Capture Interrupt Enable Register **/
#define PIOA_PIO_PCIER			MMIO32(PIOA_BASE + 0x154)
/** PIOA_PIO_PCIDR Parallel Capture Interrupt Disable Register **/
#define PIOA_PIO_PCIDR			MMIO32(PIOA_BASE + 0x158)
/** PIOA_PIO_PCIMR Parallel Capture Interrupt Mask Register **/
#define PIOA_PIO_PCIMR			MMIO32(PIOA_BASE + 0x15c)
/** PIOA_PIO_PCISR Parallel Capture Interrupt Status Register **/
#define PIOA_PIO_PCISR			MMIO32(PIOA_BASE + 0x160)
/** PIOA_PIO_PCRHR Parallel Capture Reception Holding Register **/
#define PIOA_PIO_PCRHR			MMIO32(PIOA_BASE + 0x164)

/**@}*/


/** @defgroup pioa_pio_per PIOPER PIO Enable Register
@{*/

/** PIOA_PIO_PER_P31 PIO Enable **/
#define PIOA_PIO_PER_P31		(1 << 31)
/** PIOA_PIO_PER_P30 PIO Enable **/
#define PIOA_PIO_PER_P30		(1 << 30)
/** PIOA_PIO_PER_P29 PIO Enable **/
#define PIOA_PIO_PER_P29		(1 << 29)
/** PIOA_PIO_PER_P28 PIO Enable **/
#define PIOA_PIO_PER_P28		(1 << 28)
/** PIOA_PIO_PER_P27 PIO Enable **/
#define PIOA_PIO_PER_P27		(1 << 27)
/** PIOA_PIO_PER_P26 PIO Enable **/
#define PIOA_PIO_PER_P26		(1 << 26)
/** PIOA_PIO_PER_P25 PIO Enable **/
#define PIOA_PIO_PER_P25		(1 << 25)
/** PIOA_PIO_PER_P24 PIO Enable **/
#define PIOA_PIO_PER_P24		(1 << 24)
/** PIOA_PIO_PER_P23 PIO Enable **/
#define PIOA_PIO_PER_P23		(1 << 23)
/** PIOA_PIO_PER_P22 PIO Enable **/
#define PIOA_PIO_PER_P22		(1 << 22)
/** PIOA_PIO_PER_P21 PIO Enable **/
#define PIOA_PIO_PER_P21		(1 << 21)
/** PIOA_PIO_PER_P20 PIO Enable **/
#define PIOA_PIO_PER_P20		(1 << 20)
/** PIOA_PIO_PER_P19 PIO Enable **/
#define PIOA_PIO_PER_P19		(1 << 19)
/** PIOA_PIO_PER_P18 PIO Enable **/
#define PIOA_PIO_PER_P18		(1 << 18)
/** PIOA_PIO_PER_P17 PIO Enable **/
#define PIOA_PIO_PER_P17		(1 << 17)
/** PIOA_PIO_PER_P16 PIO Enable **/
#define PIOA_PIO_PER_P16		(1 << 16)
/** PIOA_PIO_PER_P15 PIO Enable **/
#define PIOA_PIO_PER_P15		(1 << 15)
/** PIOA_PIO_PER_P14 PIO Enable **/
#define PIOA_PIO_PER_P14		(1 << 14)
/** PIOA_PIO_PER_P13 PIO Enable **/
#define PIOA_PIO_PER_P13		(1 << 13)
/** PIOA_PIO_PER_P12 PIO Enable **/
#define PIOA_PIO_PER_P12		(1 << 12)
/** PIOA_PIO_PER_P11 PIO Enable **/
#define PIOA_PIO_PER_P11		(1 << 11)
/** PIOA_PIO_PER_P10 PIO Enable **/
#define PIOA_PIO_PER_P10		(1 << 10)
/** PIOA_PIO_PER_P9 PIO Enable **/
#define PIOA_PIO_PER_P9		(1 << 9)
/** PIOA_PIO_PER_P8 PIO Enable **/
#define PIOA_PIO_PER_P8		(1 << 8)
/** PIOA_PIO_PER_P7 PIO Enable **/
#define PIOA_PIO_PER_P7		(1 << 7)
/** PIOA_PIO_PER_P6 PIO Enable **/
#define PIOA_PIO_PER_P6		(1 << 6)
/** PIOA_PIO_PER_P5 PIO Enable **/
#define PIOA_PIO_PER_P5		(1 << 5)
/** PIOA_PIO_PER_P4 PIO Enable **/
#define PIOA_PIO_PER_P4		(1 << 4)
/** PIOA_PIO_PER_P3 PIO Enable **/
#define PIOA_PIO_PER_P3		(1 << 3)
/** PIOA_PIO_PER_P2 PIO Enable **/
#define PIOA_PIO_PER_P2		(1 << 2)
/** PIOA_PIO_PER_P1 PIO Enable **/
#define PIOA_PIO_PER_P1		(1 << 1)
/** PIOA_PIO_PER_P0 PIO Enable **/
#define PIOA_PIO_PER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pdr PIOPDR PIO Disable Register
@{*/

/** PIOA_PIO_PDR_P31 PIO Disable **/
#define PIOA_PIO_PDR_P31		(1 << 31)
/** PIOA_PIO_PDR_P30 PIO Disable **/
#define PIOA_PIO_PDR_P30		(1 << 30)
/** PIOA_PIO_PDR_P29 PIO Disable **/
#define PIOA_PIO_PDR_P29		(1 << 29)
/** PIOA_PIO_PDR_P28 PIO Disable **/
#define PIOA_PIO_PDR_P28		(1 << 28)
/** PIOA_PIO_PDR_P27 PIO Disable **/
#define PIOA_PIO_PDR_P27		(1 << 27)
/** PIOA_PIO_PDR_P26 PIO Disable **/
#define PIOA_PIO_PDR_P26		(1 << 26)
/** PIOA_PIO_PDR_P25 PIO Disable **/
#define PIOA_PIO_PDR_P25		(1 << 25)
/** PIOA_PIO_PDR_P24 PIO Disable **/
#define PIOA_PIO_PDR_P24		(1 << 24)
/** PIOA_PIO_PDR_P23 PIO Disable **/
#define PIOA_PIO_PDR_P23		(1 << 23)
/** PIOA_PIO_PDR_P22 PIO Disable **/
#define PIOA_PIO_PDR_P22		(1 << 22)
/** PIOA_PIO_PDR_P21 PIO Disable **/
#define PIOA_PIO_PDR_P21		(1 << 21)
/** PIOA_PIO_PDR_P20 PIO Disable **/
#define PIOA_PIO_PDR_P20		(1 << 20)
/** PIOA_PIO_PDR_P19 PIO Disable **/
#define PIOA_PIO_PDR_P19		(1 << 19)
/** PIOA_PIO_PDR_P18 PIO Disable **/
#define PIOA_PIO_PDR_P18		(1 << 18)
/** PIOA_PIO_PDR_P17 PIO Disable **/
#define PIOA_PIO_PDR_P17		(1 << 17)
/** PIOA_PIO_PDR_P16 PIO Disable **/
#define PIOA_PIO_PDR_P16		(1 << 16)
/** PIOA_PIO_PDR_P15 PIO Disable **/
#define PIOA_PIO_PDR_P15		(1 << 15)
/** PIOA_PIO_PDR_P14 PIO Disable **/
#define PIOA_PIO_PDR_P14		(1 << 14)
/** PIOA_PIO_PDR_P13 PIO Disable **/
#define PIOA_PIO_PDR_P13		(1 << 13)
/** PIOA_PIO_PDR_P12 PIO Disable **/
#define PIOA_PIO_PDR_P12		(1 << 12)
/** PIOA_PIO_PDR_P11 PIO Disable **/
#define PIOA_PIO_PDR_P11		(1 << 11)
/** PIOA_PIO_PDR_P10 PIO Disable **/
#define PIOA_PIO_PDR_P10		(1 << 10)
/** PIOA_PIO_PDR_P9 PIO Disable **/
#define PIOA_PIO_PDR_P9		(1 << 9)
/** PIOA_PIO_PDR_P8 PIO Disable **/
#define PIOA_PIO_PDR_P8		(1 << 8)
/** PIOA_PIO_PDR_P7 PIO Disable **/
#define PIOA_PIO_PDR_P7		(1 << 7)
/** PIOA_PIO_PDR_P6 PIO Disable **/
#define PIOA_PIO_PDR_P6		(1 << 6)
/** PIOA_PIO_PDR_P5 PIO Disable **/
#define PIOA_PIO_PDR_P5		(1 << 5)
/** PIOA_PIO_PDR_P4 PIO Disable **/
#define PIOA_PIO_PDR_P4		(1 << 4)
/** PIOA_PIO_PDR_P3 PIO Disable **/
#define PIOA_PIO_PDR_P3		(1 << 3)
/** PIOA_PIO_PDR_P2 PIO Disable **/
#define PIOA_PIO_PDR_P2		(1 << 2)
/** PIOA_PIO_PDR_P1 PIO Disable **/
#define PIOA_PIO_PDR_P1		(1 << 1)
/** PIOA_PIO_PDR_P0 PIO Disable **/
#define PIOA_PIO_PDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_psr PIOPSR PIO Status Register
@{*/

/** PIOA_PIO_PSR_P31 PIO Status **/
#define PIOA_PIO_PSR_P31		(1 << 31)
/** PIOA_PIO_PSR_P30 PIO Status **/
#define PIOA_PIO_PSR_P30		(1 << 30)
/** PIOA_PIO_PSR_P29 PIO Status **/
#define PIOA_PIO_PSR_P29		(1 << 29)
/** PIOA_PIO_PSR_P28 PIO Status **/
#define PIOA_PIO_PSR_P28		(1 << 28)
/** PIOA_PIO_PSR_P27 PIO Status **/
#define PIOA_PIO_PSR_P27		(1 << 27)
/** PIOA_PIO_PSR_P26 PIO Status **/
#define PIOA_PIO_PSR_P26		(1 << 26)
/** PIOA_PIO_PSR_P25 PIO Status **/
#define PIOA_PIO_PSR_P25		(1 << 25)
/** PIOA_PIO_PSR_P24 PIO Status **/
#define PIOA_PIO_PSR_P24		(1 << 24)
/** PIOA_PIO_PSR_P23 PIO Status **/
#define PIOA_PIO_PSR_P23		(1 << 23)
/** PIOA_PIO_PSR_P22 PIO Status **/
#define PIOA_PIO_PSR_P22		(1 << 22)
/** PIOA_PIO_PSR_P21 PIO Status **/
#define PIOA_PIO_PSR_P21		(1 << 21)
/** PIOA_PIO_PSR_P20 PIO Status **/
#define PIOA_PIO_PSR_P20		(1 << 20)
/** PIOA_PIO_PSR_P19 PIO Status **/
#define PIOA_PIO_PSR_P19		(1 << 19)
/** PIOA_PIO_PSR_P18 PIO Status **/
#define PIOA_PIO_PSR_P18		(1 << 18)
/** PIOA_PIO_PSR_P17 PIO Status **/
#define PIOA_PIO_PSR_P17		(1 << 17)
/** PIOA_PIO_PSR_P16 PIO Status **/
#define PIOA_PIO_PSR_P16		(1 << 16)
/** PIOA_PIO_PSR_P15 PIO Status **/
#define PIOA_PIO_PSR_P15		(1 << 15)
/** PIOA_PIO_PSR_P14 PIO Status **/
#define PIOA_PIO_PSR_P14		(1 << 14)
/** PIOA_PIO_PSR_P13 PIO Status **/
#define PIOA_PIO_PSR_P13		(1 << 13)
/** PIOA_PIO_PSR_P12 PIO Status **/
#define PIOA_PIO_PSR_P12		(1 << 12)
/** PIOA_PIO_PSR_P11 PIO Status **/
#define PIOA_PIO_PSR_P11		(1 << 11)
/** PIOA_PIO_PSR_P10 PIO Status **/
#define PIOA_PIO_PSR_P10		(1 << 10)
/** PIOA_PIO_PSR_P9 PIO Status **/
#define PIOA_PIO_PSR_P9		(1 << 9)
/** PIOA_PIO_PSR_P8 PIO Status **/
#define PIOA_PIO_PSR_P8		(1 << 8)
/** PIOA_PIO_PSR_P7 PIO Status **/
#define PIOA_PIO_PSR_P7		(1 << 7)
/** PIOA_PIO_PSR_P6 PIO Status **/
#define PIOA_PIO_PSR_P6		(1 << 6)
/** PIOA_PIO_PSR_P5 PIO Status **/
#define PIOA_PIO_PSR_P5		(1 << 5)
/** PIOA_PIO_PSR_P4 PIO Status **/
#define PIOA_PIO_PSR_P4		(1 << 4)
/** PIOA_PIO_PSR_P3 PIO Status **/
#define PIOA_PIO_PSR_P3		(1 << 3)
/** PIOA_PIO_PSR_P2 PIO Status **/
#define PIOA_PIO_PSR_P2		(1 << 2)
/** PIOA_PIO_PSR_P1 PIO Status **/
#define PIOA_PIO_PSR_P1		(1 << 1)
/** PIOA_PIO_PSR_P0 PIO Status **/
#define PIOA_PIO_PSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_oer PIOOER Output Enable Register
@{*/

/** PIOA_PIO_OER_P31 Output Enable **/
#define PIOA_PIO_OER_P31		(1 << 31)
/** PIOA_PIO_OER_P30 Output Enable **/
#define PIOA_PIO_OER_P30		(1 << 30)
/** PIOA_PIO_OER_P29 Output Enable **/
#define PIOA_PIO_OER_P29		(1 << 29)
/** PIOA_PIO_OER_P28 Output Enable **/
#define PIOA_PIO_OER_P28		(1 << 28)
/** PIOA_PIO_OER_P27 Output Enable **/
#define PIOA_PIO_OER_P27		(1 << 27)
/** PIOA_PIO_OER_P26 Output Enable **/
#define PIOA_PIO_OER_P26		(1 << 26)
/** PIOA_PIO_OER_P25 Output Enable **/
#define PIOA_PIO_OER_P25		(1 << 25)
/** PIOA_PIO_OER_P24 Output Enable **/
#define PIOA_PIO_OER_P24		(1 << 24)
/** PIOA_PIO_OER_P23 Output Enable **/
#define PIOA_PIO_OER_P23		(1 << 23)
/** PIOA_PIO_OER_P22 Output Enable **/
#define PIOA_PIO_OER_P22		(1 << 22)
/** PIOA_PIO_OER_P21 Output Enable **/
#define PIOA_PIO_OER_P21		(1 << 21)
/** PIOA_PIO_OER_P20 Output Enable **/
#define PIOA_PIO_OER_P20		(1 << 20)
/** PIOA_PIO_OER_P19 Output Enable **/
#define PIOA_PIO_OER_P19		(1 << 19)
/** PIOA_PIO_OER_P18 Output Enable **/
#define PIOA_PIO_OER_P18		(1 << 18)
/** PIOA_PIO_OER_P17 Output Enable **/
#define PIOA_PIO_OER_P17		(1 << 17)
/** PIOA_PIO_OER_P16 Output Enable **/
#define PIOA_PIO_OER_P16		(1 << 16)
/** PIOA_PIO_OER_P15 Output Enable **/
#define PIOA_PIO_OER_P15		(1 << 15)
/** PIOA_PIO_OER_P14 Output Enable **/
#define PIOA_PIO_OER_P14		(1 << 14)
/** PIOA_PIO_OER_P13 Output Enable **/
#define PIOA_PIO_OER_P13		(1 << 13)
/** PIOA_PIO_OER_P12 Output Enable **/
#define PIOA_PIO_OER_P12		(1 << 12)
/** PIOA_PIO_OER_P11 Output Enable **/
#define PIOA_PIO_OER_P11		(1 << 11)
/** PIOA_PIO_OER_P10 Output Enable **/
#define PIOA_PIO_OER_P10		(1 << 10)
/** PIOA_PIO_OER_P9 Output Enable **/
#define PIOA_PIO_OER_P9		(1 << 9)
/** PIOA_PIO_OER_P8 Output Enable **/
#define PIOA_PIO_OER_P8		(1 << 8)
/** PIOA_PIO_OER_P7 Output Enable **/
#define PIOA_PIO_OER_P7		(1 << 7)
/** PIOA_PIO_OER_P6 Output Enable **/
#define PIOA_PIO_OER_P6		(1 << 6)
/** PIOA_PIO_OER_P5 Output Enable **/
#define PIOA_PIO_OER_P5		(1 << 5)
/** PIOA_PIO_OER_P4 Output Enable **/
#define PIOA_PIO_OER_P4		(1 << 4)
/** PIOA_PIO_OER_P3 Output Enable **/
#define PIOA_PIO_OER_P3		(1 << 3)
/** PIOA_PIO_OER_P2 Output Enable **/
#define PIOA_PIO_OER_P2		(1 << 2)
/** PIOA_PIO_OER_P1 Output Enable **/
#define PIOA_PIO_OER_P1		(1 << 1)
/** PIOA_PIO_OER_P0 Output Enable **/
#define PIOA_PIO_OER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_odr PIOODR Output Disable Register
@{*/

/** PIOA_PIO_ODR_P31 Output Disable **/
#define PIOA_PIO_ODR_P31		(1 << 31)
/** PIOA_PIO_ODR_P30 Output Disable **/
#define PIOA_PIO_ODR_P30		(1 << 30)
/** PIOA_PIO_ODR_P29 Output Disable **/
#define PIOA_PIO_ODR_P29		(1 << 29)
/** PIOA_PIO_ODR_P28 Output Disable **/
#define PIOA_PIO_ODR_P28		(1 << 28)
/** PIOA_PIO_ODR_P27 Output Disable **/
#define PIOA_PIO_ODR_P27		(1 << 27)
/** PIOA_PIO_ODR_P26 Output Disable **/
#define PIOA_PIO_ODR_P26		(1 << 26)
/** PIOA_PIO_ODR_P25 Output Disable **/
#define PIOA_PIO_ODR_P25		(1 << 25)
/** PIOA_PIO_ODR_P24 Output Disable **/
#define PIOA_PIO_ODR_P24		(1 << 24)
/** PIOA_PIO_ODR_P23 Output Disable **/
#define PIOA_PIO_ODR_P23		(1 << 23)
/** PIOA_PIO_ODR_P22 Output Disable **/
#define PIOA_PIO_ODR_P22		(1 << 22)
/** PIOA_PIO_ODR_P21 Output Disable **/
#define PIOA_PIO_ODR_P21		(1 << 21)
/** PIOA_PIO_ODR_P20 Output Disable **/
#define PIOA_PIO_ODR_P20		(1 << 20)
/** PIOA_PIO_ODR_P19 Output Disable **/
#define PIOA_PIO_ODR_P19		(1 << 19)
/** PIOA_PIO_ODR_P18 Output Disable **/
#define PIOA_PIO_ODR_P18		(1 << 18)
/** PIOA_PIO_ODR_P17 Output Disable **/
#define PIOA_PIO_ODR_P17		(1 << 17)
/** PIOA_PIO_ODR_P16 Output Disable **/
#define PIOA_PIO_ODR_P16		(1 << 16)
/** PIOA_PIO_ODR_P15 Output Disable **/
#define PIOA_PIO_ODR_P15		(1 << 15)
/** PIOA_PIO_ODR_P14 Output Disable **/
#define PIOA_PIO_ODR_P14		(1 << 14)
/** PIOA_PIO_ODR_P13 Output Disable **/
#define PIOA_PIO_ODR_P13		(1 << 13)
/** PIOA_PIO_ODR_P12 Output Disable **/
#define PIOA_PIO_ODR_P12		(1 << 12)
/** PIOA_PIO_ODR_P11 Output Disable **/
#define PIOA_PIO_ODR_P11		(1 << 11)
/** PIOA_PIO_ODR_P10 Output Disable **/
#define PIOA_PIO_ODR_P10		(1 << 10)
/** PIOA_PIO_ODR_P9 Output Disable **/
#define PIOA_PIO_ODR_P9		(1 << 9)
/** PIOA_PIO_ODR_P8 Output Disable **/
#define PIOA_PIO_ODR_P8		(1 << 8)
/** PIOA_PIO_ODR_P7 Output Disable **/
#define PIOA_PIO_ODR_P7		(1 << 7)
/** PIOA_PIO_ODR_P6 Output Disable **/
#define PIOA_PIO_ODR_P6		(1 << 6)
/** PIOA_PIO_ODR_P5 Output Disable **/
#define PIOA_PIO_ODR_P5		(1 << 5)
/** PIOA_PIO_ODR_P4 Output Disable **/
#define PIOA_PIO_ODR_P4		(1 << 4)
/** PIOA_PIO_ODR_P3 Output Disable **/
#define PIOA_PIO_ODR_P3		(1 << 3)
/** PIOA_PIO_ODR_P2 Output Disable **/
#define PIOA_PIO_ODR_P2		(1 << 2)
/** PIOA_PIO_ODR_P1 Output Disable **/
#define PIOA_PIO_ODR_P1		(1 << 1)
/** PIOA_PIO_ODR_P0 Output Disable **/
#define PIOA_PIO_ODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_osr PIOOSR Output Status Register
@{*/

/** PIOA_PIO_OSR_P31 Output Status **/
#define PIOA_PIO_OSR_P31		(1 << 31)
/** PIOA_PIO_OSR_P30 Output Status **/
#define PIOA_PIO_OSR_P30		(1 << 30)
/** PIOA_PIO_OSR_P29 Output Status **/
#define PIOA_PIO_OSR_P29		(1 << 29)
/** PIOA_PIO_OSR_P28 Output Status **/
#define PIOA_PIO_OSR_P28		(1 << 28)
/** PIOA_PIO_OSR_P27 Output Status **/
#define PIOA_PIO_OSR_P27		(1 << 27)
/** PIOA_PIO_OSR_P26 Output Status **/
#define PIOA_PIO_OSR_P26		(1 << 26)
/** PIOA_PIO_OSR_P25 Output Status **/
#define PIOA_PIO_OSR_P25		(1 << 25)
/** PIOA_PIO_OSR_P24 Output Status **/
#define PIOA_PIO_OSR_P24		(1 << 24)
/** PIOA_PIO_OSR_P23 Output Status **/
#define PIOA_PIO_OSR_P23		(1 << 23)
/** PIOA_PIO_OSR_P22 Output Status **/
#define PIOA_PIO_OSR_P22		(1 << 22)
/** PIOA_PIO_OSR_P21 Output Status **/
#define PIOA_PIO_OSR_P21		(1 << 21)
/** PIOA_PIO_OSR_P20 Output Status **/
#define PIOA_PIO_OSR_P20		(1 << 20)
/** PIOA_PIO_OSR_P19 Output Status **/
#define PIOA_PIO_OSR_P19		(1 << 19)
/** PIOA_PIO_OSR_P18 Output Status **/
#define PIOA_PIO_OSR_P18		(1 << 18)
/** PIOA_PIO_OSR_P17 Output Status **/
#define PIOA_PIO_OSR_P17		(1 << 17)
/** PIOA_PIO_OSR_P16 Output Status **/
#define PIOA_PIO_OSR_P16		(1 << 16)
/** PIOA_PIO_OSR_P15 Output Status **/
#define PIOA_PIO_OSR_P15		(1 << 15)
/** PIOA_PIO_OSR_P14 Output Status **/
#define PIOA_PIO_OSR_P14		(1 << 14)
/** PIOA_PIO_OSR_P13 Output Status **/
#define PIOA_PIO_OSR_P13		(1 << 13)
/** PIOA_PIO_OSR_P12 Output Status **/
#define PIOA_PIO_OSR_P12		(1 << 12)
/** PIOA_PIO_OSR_P11 Output Status **/
#define PIOA_PIO_OSR_P11		(1 << 11)
/** PIOA_PIO_OSR_P10 Output Status **/
#define PIOA_PIO_OSR_P10		(1 << 10)
/** PIOA_PIO_OSR_P9 Output Status **/
#define PIOA_PIO_OSR_P9		(1 << 9)
/** PIOA_PIO_OSR_P8 Output Status **/
#define PIOA_PIO_OSR_P8		(1 << 8)
/** PIOA_PIO_OSR_P7 Output Status **/
#define PIOA_PIO_OSR_P7		(1 << 7)
/** PIOA_PIO_OSR_P6 Output Status **/
#define PIOA_PIO_OSR_P6		(1 << 6)
/** PIOA_PIO_OSR_P5 Output Status **/
#define PIOA_PIO_OSR_P5		(1 << 5)
/** PIOA_PIO_OSR_P4 Output Status **/
#define PIOA_PIO_OSR_P4		(1 << 4)
/** PIOA_PIO_OSR_P3 Output Status **/
#define PIOA_PIO_OSR_P3		(1 << 3)
/** PIOA_PIO_OSR_P2 Output Status **/
#define PIOA_PIO_OSR_P2		(1 << 2)
/** PIOA_PIO_OSR_P1 Output Status **/
#define PIOA_PIO_OSR_P1		(1 << 1)
/** PIOA_PIO_OSR_P0 Output Status **/
#define PIOA_PIO_OSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifer PIOIFER Glitch Input Filter Enable Register
@{*/

/** PIOA_PIO_IFER_P31 Input Filter Enable **/
#define PIOA_PIO_IFER_P31		(1 << 31)
/** PIOA_PIO_IFER_P30 Input Filter Enable **/
#define PIOA_PIO_IFER_P30		(1 << 30)
/** PIOA_PIO_IFER_P29 Input Filter Enable **/
#define PIOA_PIO_IFER_P29		(1 << 29)
/** PIOA_PIO_IFER_P28 Input Filter Enable **/
#define PIOA_PIO_IFER_P28		(1 << 28)
/** PIOA_PIO_IFER_P27 Input Filter Enable **/
#define PIOA_PIO_IFER_P27		(1 << 27)
/** PIOA_PIO_IFER_P26 Input Filter Enable **/
#define PIOA_PIO_IFER_P26		(1 << 26)
/** PIOA_PIO_IFER_P25 Input Filter Enable **/
#define PIOA_PIO_IFER_P25		(1 << 25)
/** PIOA_PIO_IFER_P24 Input Filter Enable **/
#define PIOA_PIO_IFER_P24		(1 << 24)
/** PIOA_PIO_IFER_P23 Input Filter Enable **/
#define PIOA_PIO_IFER_P23		(1 << 23)
/** PIOA_PIO_IFER_P22 Input Filter Enable **/
#define PIOA_PIO_IFER_P22		(1 << 22)
/** PIOA_PIO_IFER_P21 Input Filter Enable **/
#define PIOA_PIO_IFER_P21		(1 << 21)
/** PIOA_PIO_IFER_P20 Input Filter Enable **/
#define PIOA_PIO_IFER_P20		(1 << 20)
/** PIOA_PIO_IFER_P19 Input Filter Enable **/
#define PIOA_PIO_IFER_P19		(1 << 19)
/** PIOA_PIO_IFER_P18 Input Filter Enable **/
#define PIOA_PIO_IFER_P18		(1 << 18)
/** PIOA_PIO_IFER_P17 Input Filter Enable **/
#define PIOA_PIO_IFER_P17		(1 << 17)
/** PIOA_PIO_IFER_P16 Input Filter Enable **/
#define PIOA_PIO_IFER_P16		(1 << 16)
/** PIOA_PIO_IFER_P15 Input Filter Enable **/
#define PIOA_PIO_IFER_P15		(1 << 15)
/** PIOA_PIO_IFER_P14 Input Filter Enable **/
#define PIOA_PIO_IFER_P14		(1 << 14)
/** PIOA_PIO_IFER_P13 Input Filter Enable **/
#define PIOA_PIO_IFER_P13		(1 << 13)
/** PIOA_PIO_IFER_P12 Input Filter Enable **/
#define PIOA_PIO_IFER_P12		(1 << 12)
/** PIOA_PIO_IFER_P11 Input Filter Enable **/
#define PIOA_PIO_IFER_P11		(1 << 11)
/** PIOA_PIO_IFER_P10 Input Filter Enable **/
#define PIOA_PIO_IFER_P10		(1 << 10)
/** PIOA_PIO_IFER_P9 Input Filter Enable **/
#define PIOA_PIO_IFER_P9		(1 << 9)
/** PIOA_PIO_IFER_P8 Input Filter Enable **/
#define PIOA_PIO_IFER_P8		(1 << 8)
/** PIOA_PIO_IFER_P7 Input Filter Enable **/
#define PIOA_PIO_IFER_P7		(1 << 7)
/** PIOA_PIO_IFER_P6 Input Filter Enable **/
#define PIOA_PIO_IFER_P6		(1 << 6)
/** PIOA_PIO_IFER_P5 Input Filter Enable **/
#define PIOA_PIO_IFER_P5		(1 << 5)
/** PIOA_PIO_IFER_P4 Input Filter Enable **/
#define PIOA_PIO_IFER_P4		(1 << 4)
/** PIOA_PIO_IFER_P3 Input Filter Enable **/
#define PIOA_PIO_IFER_P3		(1 << 3)
/** PIOA_PIO_IFER_P2 Input Filter Enable **/
#define PIOA_PIO_IFER_P2		(1 << 2)
/** PIOA_PIO_IFER_P1 Input Filter Enable **/
#define PIOA_PIO_IFER_P1		(1 << 1)
/** PIOA_PIO_IFER_P0 Input Filter Enable **/
#define PIOA_PIO_IFER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifdr PIOIFDR Glitch Input Filter Disable Register
@{*/

/** PIOA_PIO_IFDR_P31 Input Filter Disable **/
#define PIOA_PIO_IFDR_P31		(1 << 31)
/** PIOA_PIO_IFDR_P30 Input Filter Disable **/
#define PIOA_PIO_IFDR_P30		(1 << 30)
/** PIOA_PIO_IFDR_P29 Input Filter Disable **/
#define PIOA_PIO_IFDR_P29		(1 << 29)
/** PIOA_PIO_IFDR_P28 Input Filter Disable **/
#define PIOA_PIO_IFDR_P28		(1 << 28)
/** PIOA_PIO_IFDR_P27 Input Filter Disable **/
#define PIOA_PIO_IFDR_P27		(1 << 27)
/** PIOA_PIO_IFDR_P26 Input Filter Disable **/
#define PIOA_PIO_IFDR_P26		(1 << 26)
/** PIOA_PIO_IFDR_P25 Input Filter Disable **/
#define PIOA_PIO_IFDR_P25		(1 << 25)
/** PIOA_PIO_IFDR_P24 Input Filter Disable **/
#define PIOA_PIO_IFDR_P24		(1 << 24)
/** PIOA_PIO_IFDR_P23 Input Filter Disable **/
#define PIOA_PIO_IFDR_P23		(1 << 23)
/** PIOA_PIO_IFDR_P22 Input Filter Disable **/
#define PIOA_PIO_IFDR_P22		(1 << 22)
/** PIOA_PIO_IFDR_P21 Input Filter Disable **/
#define PIOA_PIO_IFDR_P21		(1 << 21)
/** PIOA_PIO_IFDR_P20 Input Filter Disable **/
#define PIOA_PIO_IFDR_P20		(1 << 20)
/** PIOA_PIO_IFDR_P19 Input Filter Disable **/
#define PIOA_PIO_IFDR_P19		(1 << 19)
/** PIOA_PIO_IFDR_P18 Input Filter Disable **/
#define PIOA_PIO_IFDR_P18		(1 << 18)
/** PIOA_PIO_IFDR_P17 Input Filter Disable **/
#define PIOA_PIO_IFDR_P17		(1 << 17)
/** PIOA_PIO_IFDR_P16 Input Filter Disable **/
#define PIOA_PIO_IFDR_P16		(1 << 16)
/** PIOA_PIO_IFDR_P15 Input Filter Disable **/
#define PIOA_PIO_IFDR_P15		(1 << 15)
/** PIOA_PIO_IFDR_P14 Input Filter Disable **/
#define PIOA_PIO_IFDR_P14		(1 << 14)
/** PIOA_PIO_IFDR_P13 Input Filter Disable **/
#define PIOA_PIO_IFDR_P13		(1 << 13)
/** PIOA_PIO_IFDR_P12 Input Filter Disable **/
#define PIOA_PIO_IFDR_P12		(1 << 12)
/** PIOA_PIO_IFDR_P11 Input Filter Disable **/
#define PIOA_PIO_IFDR_P11		(1 << 11)
/** PIOA_PIO_IFDR_P10 Input Filter Disable **/
#define PIOA_PIO_IFDR_P10		(1 << 10)
/** PIOA_PIO_IFDR_P9 Input Filter Disable **/
#define PIOA_PIO_IFDR_P9		(1 << 9)
/** PIOA_PIO_IFDR_P8 Input Filter Disable **/
#define PIOA_PIO_IFDR_P8		(1 << 8)
/** PIOA_PIO_IFDR_P7 Input Filter Disable **/
#define PIOA_PIO_IFDR_P7		(1 << 7)
/** PIOA_PIO_IFDR_P6 Input Filter Disable **/
#define PIOA_PIO_IFDR_P6		(1 << 6)
/** PIOA_PIO_IFDR_P5 Input Filter Disable **/
#define PIOA_PIO_IFDR_P5		(1 << 5)
/** PIOA_PIO_IFDR_P4 Input Filter Disable **/
#define PIOA_PIO_IFDR_P4		(1 << 4)
/** PIOA_PIO_IFDR_P3 Input Filter Disable **/
#define PIOA_PIO_IFDR_P3		(1 << 3)
/** PIOA_PIO_IFDR_P2 Input Filter Disable **/
#define PIOA_PIO_IFDR_P2		(1 << 2)
/** PIOA_PIO_IFDR_P1 Input Filter Disable **/
#define PIOA_PIO_IFDR_P1		(1 << 1)
/** PIOA_PIO_IFDR_P0 Input Filter Disable **/
#define PIOA_PIO_IFDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifsr PIOIFSR Glitch Input Filter Status Register
@{*/

/** PIOA_PIO_IFSR_P31 Input Filter Status **/
#define PIOA_PIO_IFSR_P31		(1 << 31)
/** PIOA_PIO_IFSR_P30 Input Filter Status **/
#define PIOA_PIO_IFSR_P30		(1 << 30)
/** PIOA_PIO_IFSR_P29 Input Filter Status **/
#define PIOA_PIO_IFSR_P29		(1 << 29)
/** PIOA_PIO_IFSR_P28 Input Filter Status **/
#define PIOA_PIO_IFSR_P28		(1 << 28)
/** PIOA_PIO_IFSR_P27 Input Filter Status **/
#define PIOA_PIO_IFSR_P27		(1 << 27)
/** PIOA_PIO_IFSR_P26 Input Filter Status **/
#define PIOA_PIO_IFSR_P26		(1 << 26)
/** PIOA_PIO_IFSR_P25 Input Filter Status **/
#define PIOA_PIO_IFSR_P25		(1 << 25)
/** PIOA_PIO_IFSR_P24 Input Filter Status **/
#define PIOA_PIO_IFSR_P24		(1 << 24)
/** PIOA_PIO_IFSR_P23 Input Filter Status **/
#define PIOA_PIO_IFSR_P23		(1 << 23)
/** PIOA_PIO_IFSR_P22 Input Filter Status **/
#define PIOA_PIO_IFSR_P22		(1 << 22)
/** PIOA_PIO_IFSR_P21 Input Filter Status **/
#define PIOA_PIO_IFSR_P21		(1 << 21)
/** PIOA_PIO_IFSR_P20 Input Filter Status **/
#define PIOA_PIO_IFSR_P20		(1 << 20)
/** PIOA_PIO_IFSR_P19 Input Filter Status **/
#define PIOA_PIO_IFSR_P19		(1 << 19)
/** PIOA_PIO_IFSR_P18 Input Filter Status **/
#define PIOA_PIO_IFSR_P18		(1 << 18)
/** PIOA_PIO_IFSR_P17 Input Filter Status **/
#define PIOA_PIO_IFSR_P17		(1 << 17)
/** PIOA_PIO_IFSR_P16 Input Filter Status **/
#define PIOA_PIO_IFSR_P16		(1 << 16)
/** PIOA_PIO_IFSR_P15 Input Filter Status **/
#define PIOA_PIO_IFSR_P15		(1 << 15)
/** PIOA_PIO_IFSR_P14 Input Filter Status **/
#define PIOA_PIO_IFSR_P14		(1 << 14)
/** PIOA_PIO_IFSR_P13 Input Filter Status **/
#define PIOA_PIO_IFSR_P13		(1 << 13)
/** PIOA_PIO_IFSR_P12 Input Filter Status **/
#define PIOA_PIO_IFSR_P12		(1 << 12)
/** PIOA_PIO_IFSR_P11 Input Filter Status **/
#define PIOA_PIO_IFSR_P11		(1 << 11)
/** PIOA_PIO_IFSR_P10 Input Filter Status **/
#define PIOA_PIO_IFSR_P10		(1 << 10)
/** PIOA_PIO_IFSR_P9 Input Filter Status **/
#define PIOA_PIO_IFSR_P9		(1 << 9)
/** PIOA_PIO_IFSR_P8 Input Filter Status **/
#define PIOA_PIO_IFSR_P8		(1 << 8)
/** PIOA_PIO_IFSR_P7 Input Filter Status **/
#define PIOA_PIO_IFSR_P7		(1 << 7)
/** PIOA_PIO_IFSR_P6 Input Filter Status **/
#define PIOA_PIO_IFSR_P6		(1 << 6)
/** PIOA_PIO_IFSR_P5 Input Filter Status **/
#define PIOA_PIO_IFSR_P5		(1 << 5)
/** PIOA_PIO_IFSR_P4 Input Filter Status **/
#define PIOA_PIO_IFSR_P4		(1 << 4)
/** PIOA_PIO_IFSR_P3 Input Filter Status **/
#define PIOA_PIO_IFSR_P3		(1 << 3)
/** PIOA_PIO_IFSR_P2 Input Filter Status **/
#define PIOA_PIO_IFSR_P2		(1 << 2)
/** PIOA_PIO_IFSR_P1 Input Filter Status **/
#define PIOA_PIO_IFSR_P1		(1 << 1)
/** PIOA_PIO_IFSR_P0 Input Filter Status **/
#define PIOA_PIO_IFSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_sodr PIOSODR Set Output Data Register
@{*/

/** PIOA_PIO_SODR_P31 Set Output Data **/
#define PIOA_PIO_SODR_P31		(1 << 31)
/** PIOA_PIO_SODR_P30 Set Output Data **/
#define PIOA_PIO_SODR_P30		(1 << 30)
/** PIOA_PIO_SODR_P29 Set Output Data **/
#define PIOA_PIO_SODR_P29		(1 << 29)
/** PIOA_PIO_SODR_P28 Set Output Data **/
#define PIOA_PIO_SODR_P28		(1 << 28)
/** PIOA_PIO_SODR_P27 Set Output Data **/
#define PIOA_PIO_SODR_P27		(1 << 27)
/** PIOA_PIO_SODR_P26 Set Output Data **/
#define PIOA_PIO_SODR_P26		(1 << 26)
/** PIOA_PIO_SODR_P25 Set Output Data **/
#define PIOA_PIO_SODR_P25		(1 << 25)
/** PIOA_PIO_SODR_P24 Set Output Data **/
#define PIOA_PIO_SODR_P24		(1 << 24)
/** PIOA_PIO_SODR_P23 Set Output Data **/
#define PIOA_PIO_SODR_P23		(1 << 23)
/** PIOA_PIO_SODR_P22 Set Output Data **/
#define PIOA_PIO_SODR_P22		(1 << 22)
/** PIOA_PIO_SODR_P21 Set Output Data **/
#define PIOA_PIO_SODR_P21		(1 << 21)
/** PIOA_PIO_SODR_P20 Set Output Data **/
#define PIOA_PIO_SODR_P20		(1 << 20)
/** PIOA_PIO_SODR_P19 Set Output Data **/
#define PIOA_PIO_SODR_P19		(1 << 19)
/** PIOA_PIO_SODR_P18 Set Output Data **/
#define PIOA_PIO_SODR_P18		(1 << 18)
/** PIOA_PIO_SODR_P17 Set Output Data **/
#define PIOA_PIO_SODR_P17		(1 << 17)
/** PIOA_PIO_SODR_P16 Set Output Data **/
#define PIOA_PIO_SODR_P16		(1 << 16)
/** PIOA_PIO_SODR_P15 Set Output Data **/
#define PIOA_PIO_SODR_P15		(1 << 15)
/** PIOA_PIO_SODR_P14 Set Output Data **/
#define PIOA_PIO_SODR_P14		(1 << 14)
/** PIOA_PIO_SODR_P13 Set Output Data **/
#define PIOA_PIO_SODR_P13		(1 << 13)
/** PIOA_PIO_SODR_P12 Set Output Data **/
#define PIOA_PIO_SODR_P12		(1 << 12)
/** PIOA_PIO_SODR_P11 Set Output Data **/
#define PIOA_PIO_SODR_P11		(1 << 11)
/** PIOA_PIO_SODR_P10 Set Output Data **/
#define PIOA_PIO_SODR_P10		(1 << 10)
/** PIOA_PIO_SODR_P9 Set Output Data **/
#define PIOA_PIO_SODR_P9		(1 << 9)
/** PIOA_PIO_SODR_P8 Set Output Data **/
#define PIOA_PIO_SODR_P8		(1 << 8)
/** PIOA_PIO_SODR_P7 Set Output Data **/
#define PIOA_PIO_SODR_P7		(1 << 7)
/** PIOA_PIO_SODR_P6 Set Output Data **/
#define PIOA_PIO_SODR_P6		(1 << 6)
/** PIOA_PIO_SODR_P5 Set Output Data **/
#define PIOA_PIO_SODR_P5		(1 << 5)
/** PIOA_PIO_SODR_P4 Set Output Data **/
#define PIOA_PIO_SODR_P4		(1 << 4)
/** PIOA_PIO_SODR_P3 Set Output Data **/
#define PIOA_PIO_SODR_P3		(1 << 3)
/** PIOA_PIO_SODR_P2 Set Output Data **/
#define PIOA_PIO_SODR_P2		(1 << 2)
/** PIOA_PIO_SODR_P1 Set Output Data **/
#define PIOA_PIO_SODR_P1		(1 << 1)
/** PIOA_PIO_SODR_P0 Set Output Data **/
#define PIOA_PIO_SODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_codr PIOCODR Clear Output Data Register
@{*/

/** PIOA_PIO_CODR_P31 Clear Output Data **/
#define PIOA_PIO_CODR_P31		(1 << 31)
/** PIOA_PIO_CODR_P30 Clear Output Data **/
#define PIOA_PIO_CODR_P30		(1 << 30)
/** PIOA_PIO_CODR_P29 Clear Output Data **/
#define PIOA_PIO_CODR_P29		(1 << 29)
/** PIOA_PIO_CODR_P28 Clear Output Data **/
#define PIOA_PIO_CODR_P28		(1 << 28)
/** PIOA_PIO_CODR_P27 Clear Output Data **/
#define PIOA_PIO_CODR_P27		(1 << 27)
/** PIOA_PIO_CODR_P26 Clear Output Data **/
#define PIOA_PIO_CODR_P26		(1 << 26)
/** PIOA_PIO_CODR_P25 Clear Output Data **/
#define PIOA_PIO_CODR_P25		(1 << 25)
/** PIOA_PIO_CODR_P24 Clear Output Data **/
#define PIOA_PIO_CODR_P24		(1 << 24)
/** PIOA_PIO_CODR_P23 Clear Output Data **/
#define PIOA_PIO_CODR_P23		(1 << 23)
/** PIOA_PIO_CODR_P22 Clear Output Data **/
#define PIOA_PIO_CODR_P22		(1 << 22)
/** PIOA_PIO_CODR_P21 Clear Output Data **/
#define PIOA_PIO_CODR_P21		(1 << 21)
/** PIOA_PIO_CODR_P20 Clear Output Data **/
#define PIOA_PIO_CODR_P20		(1 << 20)
/** PIOA_PIO_CODR_P19 Clear Output Data **/
#define PIOA_PIO_CODR_P19		(1 << 19)
/** PIOA_PIO_CODR_P18 Clear Output Data **/
#define PIOA_PIO_CODR_P18		(1 << 18)
/** PIOA_PIO_CODR_P17 Clear Output Data **/
#define PIOA_PIO_CODR_P17		(1 << 17)
/** PIOA_PIO_CODR_P16 Clear Output Data **/
#define PIOA_PIO_CODR_P16		(1 << 16)
/** PIOA_PIO_CODR_P15 Clear Output Data **/
#define PIOA_PIO_CODR_P15		(1 << 15)
/** PIOA_PIO_CODR_P14 Clear Output Data **/
#define PIOA_PIO_CODR_P14		(1 << 14)
/** PIOA_PIO_CODR_P13 Clear Output Data **/
#define PIOA_PIO_CODR_P13		(1 << 13)
/** PIOA_PIO_CODR_P12 Clear Output Data **/
#define PIOA_PIO_CODR_P12		(1 << 12)
/** PIOA_PIO_CODR_P11 Clear Output Data **/
#define PIOA_PIO_CODR_P11		(1 << 11)
/** PIOA_PIO_CODR_P10 Clear Output Data **/
#define PIOA_PIO_CODR_P10		(1 << 10)
/** PIOA_PIO_CODR_P9 Clear Output Data **/
#define PIOA_PIO_CODR_P9		(1 << 9)
/** PIOA_PIO_CODR_P8 Clear Output Data **/
#define PIOA_PIO_CODR_P8		(1 << 8)
/** PIOA_PIO_CODR_P7 Clear Output Data **/
#define PIOA_PIO_CODR_P7		(1 << 7)
/** PIOA_PIO_CODR_P6 Clear Output Data **/
#define PIOA_PIO_CODR_P6		(1 << 6)
/** PIOA_PIO_CODR_P5 Clear Output Data **/
#define PIOA_PIO_CODR_P5		(1 << 5)
/** PIOA_PIO_CODR_P4 Clear Output Data **/
#define PIOA_PIO_CODR_P4		(1 << 4)
/** PIOA_PIO_CODR_P3 Clear Output Data **/
#define PIOA_PIO_CODR_P3		(1 << 3)
/** PIOA_PIO_CODR_P2 Clear Output Data **/
#define PIOA_PIO_CODR_P2		(1 << 2)
/** PIOA_PIO_CODR_P1 Clear Output Data **/
#define PIOA_PIO_CODR_P1		(1 << 1)
/** PIOA_PIO_CODR_P0 Clear Output Data **/
#define PIOA_PIO_CODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_odsr PIOODSR Output Data Status Register
@{*/

/** PIOA_PIO_ODSR_P31 Output Data Status **/
#define PIOA_PIO_ODSR_P31		(1 << 31)
/** PIOA_PIO_ODSR_P30 Output Data Status **/
#define PIOA_PIO_ODSR_P30		(1 << 30)
/** PIOA_PIO_ODSR_P29 Output Data Status **/
#define PIOA_PIO_ODSR_P29		(1 << 29)
/** PIOA_PIO_ODSR_P28 Output Data Status **/
#define PIOA_PIO_ODSR_P28		(1 << 28)
/** PIOA_PIO_ODSR_P27 Output Data Status **/
#define PIOA_PIO_ODSR_P27		(1 << 27)
/** PIOA_PIO_ODSR_P26 Output Data Status **/
#define PIOA_PIO_ODSR_P26		(1 << 26)
/** PIOA_PIO_ODSR_P25 Output Data Status **/
#define PIOA_PIO_ODSR_P25		(1 << 25)
/** PIOA_PIO_ODSR_P24 Output Data Status **/
#define PIOA_PIO_ODSR_P24		(1 << 24)
/** PIOA_PIO_ODSR_P23 Output Data Status **/
#define PIOA_PIO_ODSR_P23		(1 << 23)
/** PIOA_PIO_ODSR_P22 Output Data Status **/
#define PIOA_PIO_ODSR_P22		(1 << 22)
/** PIOA_PIO_ODSR_P21 Output Data Status **/
#define PIOA_PIO_ODSR_P21		(1 << 21)
/** PIOA_PIO_ODSR_P20 Output Data Status **/
#define PIOA_PIO_ODSR_P20		(1 << 20)
/** PIOA_PIO_ODSR_P19 Output Data Status **/
#define PIOA_PIO_ODSR_P19		(1 << 19)
/** PIOA_PIO_ODSR_P18 Output Data Status **/
#define PIOA_PIO_ODSR_P18		(1 << 18)
/** PIOA_PIO_ODSR_P17 Output Data Status **/
#define PIOA_PIO_ODSR_P17		(1 << 17)
/** PIOA_PIO_ODSR_P16 Output Data Status **/
#define PIOA_PIO_ODSR_P16		(1 << 16)
/** PIOA_PIO_ODSR_P15 Output Data Status **/
#define PIOA_PIO_ODSR_P15		(1 << 15)
/** PIOA_PIO_ODSR_P14 Output Data Status **/
#define PIOA_PIO_ODSR_P14		(1 << 14)
/** PIOA_PIO_ODSR_P13 Output Data Status **/
#define PIOA_PIO_ODSR_P13		(1 << 13)
/** PIOA_PIO_ODSR_P12 Output Data Status **/
#define PIOA_PIO_ODSR_P12		(1 << 12)
/** PIOA_PIO_ODSR_P11 Output Data Status **/
#define PIOA_PIO_ODSR_P11		(1 << 11)
/** PIOA_PIO_ODSR_P10 Output Data Status **/
#define PIOA_PIO_ODSR_P10		(1 << 10)
/** PIOA_PIO_ODSR_P9 Output Data Status **/
#define PIOA_PIO_ODSR_P9		(1 << 9)
/** PIOA_PIO_ODSR_P8 Output Data Status **/
#define PIOA_PIO_ODSR_P8		(1 << 8)
/** PIOA_PIO_ODSR_P7 Output Data Status **/
#define PIOA_PIO_ODSR_P7		(1 << 7)
/** PIOA_PIO_ODSR_P6 Output Data Status **/
#define PIOA_PIO_ODSR_P6		(1 << 6)
/** PIOA_PIO_ODSR_P5 Output Data Status **/
#define PIOA_PIO_ODSR_P5		(1 << 5)
/** PIOA_PIO_ODSR_P4 Output Data Status **/
#define PIOA_PIO_ODSR_P4		(1 << 4)
/** PIOA_PIO_ODSR_P3 Output Data Status **/
#define PIOA_PIO_ODSR_P3		(1 << 3)
/** PIOA_PIO_ODSR_P2 Output Data Status **/
#define PIOA_PIO_ODSR_P2		(1 << 2)
/** PIOA_PIO_ODSR_P1 Output Data Status **/
#define PIOA_PIO_ODSR_P1		(1 << 1)
/** PIOA_PIO_ODSR_P0 Output Data Status **/
#define PIOA_PIO_ODSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pdsr PIOPDSR Pin Data Status Register
@{*/

/** PIOA_PIO_PDSR_P31 Output Data Status **/
#define PIOA_PIO_PDSR_P31		(1 << 31)
/** PIOA_PIO_PDSR_P30 Output Data Status **/
#define PIOA_PIO_PDSR_P30		(1 << 30)
/** PIOA_PIO_PDSR_P29 Output Data Status **/
#define PIOA_PIO_PDSR_P29		(1 << 29)
/** PIOA_PIO_PDSR_P28 Output Data Status **/
#define PIOA_PIO_PDSR_P28		(1 << 28)
/** PIOA_PIO_PDSR_P27 Output Data Status **/
#define PIOA_PIO_PDSR_P27		(1 << 27)
/** PIOA_PIO_PDSR_P26 Output Data Status **/
#define PIOA_PIO_PDSR_P26		(1 << 26)
/** PIOA_PIO_PDSR_P25 Output Data Status **/
#define PIOA_PIO_PDSR_P25		(1 << 25)
/** PIOA_PIO_PDSR_P24 Output Data Status **/
#define PIOA_PIO_PDSR_P24		(1 << 24)
/** PIOA_PIO_PDSR_P23 Output Data Status **/
#define PIOA_PIO_PDSR_P23		(1 << 23)
/** PIOA_PIO_PDSR_P22 Output Data Status **/
#define PIOA_PIO_PDSR_P22		(1 << 22)
/** PIOA_PIO_PDSR_P21 Output Data Status **/
#define PIOA_PIO_PDSR_P21		(1 << 21)
/** PIOA_PIO_PDSR_P20 Output Data Status **/
#define PIOA_PIO_PDSR_P20		(1 << 20)
/** PIOA_PIO_PDSR_P19 Output Data Status **/
#define PIOA_PIO_PDSR_P19		(1 << 19)
/** PIOA_PIO_PDSR_P18 Output Data Status **/
#define PIOA_PIO_PDSR_P18		(1 << 18)
/** PIOA_PIO_PDSR_P17 Output Data Status **/
#define PIOA_PIO_PDSR_P17		(1 << 17)
/** PIOA_PIO_PDSR_P16 Output Data Status **/
#define PIOA_PIO_PDSR_P16		(1 << 16)
/** PIOA_PIO_PDSR_P15 Output Data Status **/
#define PIOA_PIO_PDSR_P15		(1 << 15)
/** PIOA_PIO_PDSR_P14 Output Data Status **/
#define PIOA_PIO_PDSR_P14		(1 << 14)
/** PIOA_PIO_PDSR_P13 Output Data Status **/
#define PIOA_PIO_PDSR_P13		(1 << 13)
/** PIOA_PIO_PDSR_P12 Output Data Status **/
#define PIOA_PIO_PDSR_P12		(1 << 12)
/** PIOA_PIO_PDSR_P11 Output Data Status **/
#define PIOA_PIO_PDSR_P11		(1 << 11)
/** PIOA_PIO_PDSR_P10 Output Data Status **/
#define PIOA_PIO_PDSR_P10		(1 << 10)
/** PIOA_PIO_PDSR_P9 Output Data Status **/
#define PIOA_PIO_PDSR_P9		(1 << 9)
/** PIOA_PIO_PDSR_P8 Output Data Status **/
#define PIOA_PIO_PDSR_P8		(1 << 8)
/** PIOA_PIO_PDSR_P7 Output Data Status **/
#define PIOA_PIO_PDSR_P7		(1 << 7)
/** PIOA_PIO_PDSR_P6 Output Data Status **/
#define PIOA_PIO_PDSR_P6		(1 << 6)
/** PIOA_PIO_PDSR_P5 Output Data Status **/
#define PIOA_PIO_PDSR_P5		(1 << 5)
/** PIOA_PIO_PDSR_P4 Output Data Status **/
#define PIOA_PIO_PDSR_P4		(1 << 4)
/** PIOA_PIO_PDSR_P3 Output Data Status **/
#define PIOA_PIO_PDSR_P3		(1 << 3)
/** PIOA_PIO_PDSR_P2 Output Data Status **/
#define PIOA_PIO_PDSR_P2		(1 << 2)
/** PIOA_PIO_PDSR_P1 Output Data Status **/
#define PIOA_PIO_PDSR_P1		(1 << 1)
/** PIOA_PIO_PDSR_P0 Output Data Status **/
#define PIOA_PIO_PDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ier PIOIER Interrupt Enable Register
@{*/

/** PIOA_PIO_IER_P31 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P31		(1 << 31)
/** PIOA_PIO_IER_P30 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P30		(1 << 30)
/** PIOA_PIO_IER_P29 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P29		(1 << 29)
/** PIOA_PIO_IER_P28 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P28		(1 << 28)
/** PIOA_PIO_IER_P27 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P27		(1 << 27)
/** PIOA_PIO_IER_P26 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P26		(1 << 26)
/** PIOA_PIO_IER_P25 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P25		(1 << 25)
/** PIOA_PIO_IER_P24 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P24		(1 << 24)
/** PIOA_PIO_IER_P23 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P23		(1 << 23)
/** PIOA_PIO_IER_P22 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P22		(1 << 22)
/** PIOA_PIO_IER_P21 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P21		(1 << 21)
/** PIOA_PIO_IER_P20 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P20		(1 << 20)
/** PIOA_PIO_IER_P19 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P19		(1 << 19)
/** PIOA_PIO_IER_P18 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P18		(1 << 18)
/** PIOA_PIO_IER_P17 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P17		(1 << 17)
/** PIOA_PIO_IER_P16 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P16		(1 << 16)
/** PIOA_PIO_IER_P15 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P15		(1 << 15)
/** PIOA_PIO_IER_P14 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P14		(1 << 14)
/** PIOA_PIO_IER_P13 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P13		(1 << 13)
/** PIOA_PIO_IER_P12 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P12		(1 << 12)
/** PIOA_PIO_IER_P11 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P11		(1 << 11)
/** PIOA_PIO_IER_P10 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P10		(1 << 10)
/** PIOA_PIO_IER_P9 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P9		(1 << 9)
/** PIOA_PIO_IER_P8 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P8		(1 << 8)
/** PIOA_PIO_IER_P7 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P7		(1 << 7)
/** PIOA_PIO_IER_P6 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P6		(1 << 6)
/** PIOA_PIO_IER_P5 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P5		(1 << 5)
/** PIOA_PIO_IER_P4 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P4		(1 << 4)
/** PIOA_PIO_IER_P3 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P3		(1 << 3)
/** PIOA_PIO_IER_P2 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P2		(1 << 2)
/** PIOA_PIO_IER_P1 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P1		(1 << 1)
/** PIOA_PIO_IER_P0 Input Change Interrupt Enable **/
#define PIOA_PIO_IER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_idr PIOIDR Interrupt Disable Register
@{*/

/** PIOA_PIO_IDR_P31 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P31		(1 << 31)
/** PIOA_PIO_IDR_P30 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P30		(1 << 30)
/** PIOA_PIO_IDR_P29 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P29		(1 << 29)
/** PIOA_PIO_IDR_P28 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P28		(1 << 28)
/** PIOA_PIO_IDR_P27 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P27		(1 << 27)
/** PIOA_PIO_IDR_P26 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P26		(1 << 26)
/** PIOA_PIO_IDR_P25 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P25		(1 << 25)
/** PIOA_PIO_IDR_P24 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P24		(1 << 24)
/** PIOA_PIO_IDR_P23 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P23		(1 << 23)
/** PIOA_PIO_IDR_P22 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P22		(1 << 22)
/** PIOA_PIO_IDR_P21 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P21		(1 << 21)
/** PIOA_PIO_IDR_P20 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P20		(1 << 20)
/** PIOA_PIO_IDR_P19 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P19		(1 << 19)
/** PIOA_PIO_IDR_P18 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P18		(1 << 18)
/** PIOA_PIO_IDR_P17 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P17		(1 << 17)
/** PIOA_PIO_IDR_P16 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P16		(1 << 16)
/** PIOA_PIO_IDR_P15 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P15		(1 << 15)
/** PIOA_PIO_IDR_P14 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P14		(1 << 14)
/** PIOA_PIO_IDR_P13 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P13		(1 << 13)
/** PIOA_PIO_IDR_P12 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P12		(1 << 12)
/** PIOA_PIO_IDR_P11 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P11		(1 << 11)
/** PIOA_PIO_IDR_P10 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P10		(1 << 10)
/** PIOA_PIO_IDR_P9 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P9		(1 << 9)
/** PIOA_PIO_IDR_P8 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P8		(1 << 8)
/** PIOA_PIO_IDR_P7 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P7		(1 << 7)
/** PIOA_PIO_IDR_P6 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P6		(1 << 6)
/** PIOA_PIO_IDR_P5 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P5		(1 << 5)
/** PIOA_PIO_IDR_P4 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P4		(1 << 4)
/** PIOA_PIO_IDR_P3 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P3		(1 << 3)
/** PIOA_PIO_IDR_P2 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P2		(1 << 2)
/** PIOA_PIO_IDR_P1 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P1		(1 << 1)
/** PIOA_PIO_IDR_P0 Input Change Interrupt Disable **/
#define PIOA_PIO_IDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_imr PIOIMR Interrupt Mask Register
@{*/

/** PIOA_PIO_IMR_P31 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P31		(1 << 31)
/** PIOA_PIO_IMR_P30 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P30		(1 << 30)
/** PIOA_PIO_IMR_P29 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P29		(1 << 29)
/** PIOA_PIO_IMR_P28 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P28		(1 << 28)
/** PIOA_PIO_IMR_P27 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P27		(1 << 27)
/** PIOA_PIO_IMR_P26 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P26		(1 << 26)
/** PIOA_PIO_IMR_P25 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P25		(1 << 25)
/** PIOA_PIO_IMR_P24 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P24		(1 << 24)
/** PIOA_PIO_IMR_P23 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P23		(1 << 23)
/** PIOA_PIO_IMR_P22 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P22		(1 << 22)
/** PIOA_PIO_IMR_P21 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P21		(1 << 21)
/** PIOA_PIO_IMR_P20 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P20		(1 << 20)
/** PIOA_PIO_IMR_P19 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P19		(1 << 19)
/** PIOA_PIO_IMR_P18 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P18		(1 << 18)
/** PIOA_PIO_IMR_P17 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P17		(1 << 17)
/** PIOA_PIO_IMR_P16 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P16		(1 << 16)
/** PIOA_PIO_IMR_P15 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P15		(1 << 15)
/** PIOA_PIO_IMR_P14 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P14		(1 << 14)
/** PIOA_PIO_IMR_P13 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P13		(1 << 13)
/** PIOA_PIO_IMR_P12 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P12		(1 << 12)
/** PIOA_PIO_IMR_P11 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P11		(1 << 11)
/** PIOA_PIO_IMR_P10 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P10		(1 << 10)
/** PIOA_PIO_IMR_P9 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P9		(1 << 9)
/** PIOA_PIO_IMR_P8 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P8		(1 << 8)
/** PIOA_PIO_IMR_P7 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P7		(1 << 7)
/** PIOA_PIO_IMR_P6 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P6		(1 << 6)
/** PIOA_PIO_IMR_P5 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P5		(1 << 5)
/** PIOA_PIO_IMR_P4 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P4		(1 << 4)
/** PIOA_PIO_IMR_P3 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P3		(1 << 3)
/** PIOA_PIO_IMR_P2 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P2		(1 << 2)
/** PIOA_PIO_IMR_P1 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P1		(1 << 1)
/** PIOA_PIO_IMR_P0 Input Change Interrupt Mask **/
#define PIOA_PIO_IMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_isr PIOISR Interrupt Status Register
@{*/

/** PIOA_PIO_ISR_P31 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P31		(1 << 31)
/** PIOA_PIO_ISR_P30 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P30		(1 << 30)
/** PIOA_PIO_ISR_P29 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P29		(1 << 29)
/** PIOA_PIO_ISR_P28 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P28		(1 << 28)
/** PIOA_PIO_ISR_P27 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P27		(1 << 27)
/** PIOA_PIO_ISR_P26 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P26		(1 << 26)
/** PIOA_PIO_ISR_P25 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P25		(1 << 25)
/** PIOA_PIO_ISR_P24 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P24		(1 << 24)
/** PIOA_PIO_ISR_P23 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P23		(1 << 23)
/** PIOA_PIO_ISR_P22 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P22		(1 << 22)
/** PIOA_PIO_ISR_P21 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P21		(1 << 21)
/** PIOA_PIO_ISR_P20 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P20		(1 << 20)
/** PIOA_PIO_ISR_P19 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P19		(1 << 19)
/** PIOA_PIO_ISR_P18 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P18		(1 << 18)
/** PIOA_PIO_ISR_P17 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P17		(1 << 17)
/** PIOA_PIO_ISR_P16 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P16		(1 << 16)
/** PIOA_PIO_ISR_P15 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P15		(1 << 15)
/** PIOA_PIO_ISR_P14 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P14		(1 << 14)
/** PIOA_PIO_ISR_P13 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P13		(1 << 13)
/** PIOA_PIO_ISR_P12 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P12		(1 << 12)
/** PIOA_PIO_ISR_P11 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P11		(1 << 11)
/** PIOA_PIO_ISR_P10 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P10		(1 << 10)
/** PIOA_PIO_ISR_P9 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P9		(1 << 9)
/** PIOA_PIO_ISR_P8 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P8		(1 << 8)
/** PIOA_PIO_ISR_P7 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P7		(1 << 7)
/** PIOA_PIO_ISR_P6 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P6		(1 << 6)
/** PIOA_PIO_ISR_P5 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P5		(1 << 5)
/** PIOA_PIO_ISR_P4 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P4		(1 << 4)
/** PIOA_PIO_ISR_P3 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P3		(1 << 3)
/** PIOA_PIO_ISR_P2 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P2		(1 << 2)
/** PIOA_PIO_ISR_P1 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P1		(1 << 1)
/** PIOA_PIO_ISR_P0 Input Change Interrupt Status **/
#define PIOA_PIO_ISR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_mder PIOMDER Multi-driver Enable Register
@{*/

/** PIOA_PIO_MDER_P31 Multi-drive Enable **/
#define PIOA_PIO_MDER_P31		(1 << 31)
/** PIOA_PIO_MDER_P30 Multi-drive Enable **/
#define PIOA_PIO_MDER_P30		(1 << 30)
/** PIOA_PIO_MDER_P29 Multi-drive Enable **/
#define PIOA_PIO_MDER_P29		(1 << 29)
/** PIOA_PIO_MDER_P28 Multi-drive Enable **/
#define PIOA_PIO_MDER_P28		(1 << 28)
/** PIOA_PIO_MDER_P27 Multi-drive Enable **/
#define PIOA_PIO_MDER_P27		(1 << 27)
/** PIOA_PIO_MDER_P26 Multi-drive Enable **/
#define PIOA_PIO_MDER_P26		(1 << 26)
/** PIOA_PIO_MDER_P25 Multi-drive Enable **/
#define PIOA_PIO_MDER_P25		(1 << 25)
/** PIOA_PIO_MDER_P24 Multi-drive Enable **/
#define PIOA_PIO_MDER_P24		(1 << 24)
/** PIOA_PIO_MDER_P23 Multi-drive Enable **/
#define PIOA_PIO_MDER_P23		(1 << 23)
/** PIOA_PIO_MDER_P22 Multi-drive Enable **/
#define PIOA_PIO_MDER_P22		(1 << 22)
/** PIOA_PIO_MDER_P21 Multi-drive Enable **/
#define PIOA_PIO_MDER_P21		(1 << 21)
/** PIOA_PIO_MDER_P20 Multi-drive Enable **/
#define PIOA_PIO_MDER_P20		(1 << 20)
/** PIOA_PIO_MDER_P19 Multi-drive Enable **/
#define PIOA_PIO_MDER_P19		(1 << 19)
/** PIOA_PIO_MDER_P18 Multi-drive Enable **/
#define PIOA_PIO_MDER_P18		(1 << 18)
/** PIOA_PIO_MDER_P17 Multi-drive Enable **/
#define PIOA_PIO_MDER_P17		(1 << 17)
/** PIOA_PIO_MDER_P16 Multi-drive Enable **/
#define PIOA_PIO_MDER_P16		(1 << 16)
/** PIOA_PIO_MDER_P15 Multi-drive Enable **/
#define PIOA_PIO_MDER_P15		(1 << 15)
/** PIOA_PIO_MDER_P14 Multi-drive Enable **/
#define PIOA_PIO_MDER_P14		(1 << 14)
/** PIOA_PIO_MDER_P13 Multi-drive Enable **/
#define PIOA_PIO_MDER_P13		(1 << 13)
/** PIOA_PIO_MDER_P12 Multi-drive Enable **/
#define PIOA_PIO_MDER_P12		(1 << 12)
/** PIOA_PIO_MDER_P11 Multi-drive Enable **/
#define PIOA_PIO_MDER_P11		(1 << 11)
/** PIOA_PIO_MDER_P10 Multi-drive Enable **/
#define PIOA_PIO_MDER_P10		(1 << 10)
/** PIOA_PIO_MDER_P9 Multi-drive Enable **/
#define PIOA_PIO_MDER_P9		(1 << 9)
/** PIOA_PIO_MDER_P8 Multi-drive Enable **/
#define PIOA_PIO_MDER_P8		(1 << 8)
/** PIOA_PIO_MDER_P7 Multi-drive Enable **/
#define PIOA_PIO_MDER_P7		(1 << 7)
/** PIOA_PIO_MDER_P6 Multi-drive Enable **/
#define PIOA_PIO_MDER_P6		(1 << 6)
/** PIOA_PIO_MDER_P5 Multi-drive Enable **/
#define PIOA_PIO_MDER_P5		(1 << 5)
/** PIOA_PIO_MDER_P4 Multi-drive Enable **/
#define PIOA_PIO_MDER_P4		(1 << 4)
/** PIOA_PIO_MDER_P3 Multi-drive Enable **/
#define PIOA_PIO_MDER_P3		(1 << 3)
/** PIOA_PIO_MDER_P2 Multi-drive Enable **/
#define PIOA_PIO_MDER_P2		(1 << 2)
/** PIOA_PIO_MDER_P1 Multi-drive Enable **/
#define PIOA_PIO_MDER_P1		(1 << 1)
/** PIOA_PIO_MDER_P0 Multi-drive Enable **/
#define PIOA_PIO_MDER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_mddr PIOMDDR Multi-driver Disable Register
@{*/

/** PIOA_PIO_MDDR_P31 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P31		(1 << 31)
/** PIOA_PIO_MDDR_P30 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P30		(1 << 30)
/** PIOA_PIO_MDDR_P29 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P29		(1 << 29)
/** PIOA_PIO_MDDR_P28 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P28		(1 << 28)
/** PIOA_PIO_MDDR_P27 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P27		(1 << 27)
/** PIOA_PIO_MDDR_P26 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P26		(1 << 26)
/** PIOA_PIO_MDDR_P25 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P25		(1 << 25)
/** PIOA_PIO_MDDR_P24 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P24		(1 << 24)
/** PIOA_PIO_MDDR_P23 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P23		(1 << 23)
/** PIOA_PIO_MDDR_P22 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P22		(1 << 22)
/** PIOA_PIO_MDDR_P21 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P21		(1 << 21)
/** PIOA_PIO_MDDR_P20 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P20		(1 << 20)
/** PIOA_PIO_MDDR_P19 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P19		(1 << 19)
/** PIOA_PIO_MDDR_P18 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P18		(1 << 18)
/** PIOA_PIO_MDDR_P17 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P17		(1 << 17)
/** PIOA_PIO_MDDR_P16 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P16		(1 << 16)
/** PIOA_PIO_MDDR_P15 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P15		(1 << 15)
/** PIOA_PIO_MDDR_P14 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P14		(1 << 14)
/** PIOA_PIO_MDDR_P13 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P13		(1 << 13)
/** PIOA_PIO_MDDR_P12 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P12		(1 << 12)
/** PIOA_PIO_MDDR_P11 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P11		(1 << 11)
/** PIOA_PIO_MDDR_P10 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P10		(1 << 10)
/** PIOA_PIO_MDDR_P9 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P9		(1 << 9)
/** PIOA_PIO_MDDR_P8 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P8		(1 << 8)
/** PIOA_PIO_MDDR_P7 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P7		(1 << 7)
/** PIOA_PIO_MDDR_P6 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P6		(1 << 6)
/** PIOA_PIO_MDDR_P5 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P5		(1 << 5)
/** PIOA_PIO_MDDR_P4 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P4		(1 << 4)
/** PIOA_PIO_MDDR_P3 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P3		(1 << 3)
/** PIOA_PIO_MDDR_P2 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P2		(1 << 2)
/** PIOA_PIO_MDDR_P1 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P1		(1 << 1)
/** PIOA_PIO_MDDR_P0 Multi-drive Disable **/
#define PIOA_PIO_MDDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_mdsr PIOMDSR Multi-driver Status Register
@{*/

/** PIOA_PIO_MDSR_P31 Multi-drive Status **/
#define PIOA_PIO_MDSR_P31		(1 << 31)
/** PIOA_PIO_MDSR_P30 Multi-drive Status **/
#define PIOA_PIO_MDSR_P30		(1 << 30)
/** PIOA_PIO_MDSR_P29 Multi-drive Status **/
#define PIOA_PIO_MDSR_P29		(1 << 29)
/** PIOA_PIO_MDSR_P28 Multi-drive Status **/
#define PIOA_PIO_MDSR_P28		(1 << 28)
/** PIOA_PIO_MDSR_P27 Multi-drive Status **/
#define PIOA_PIO_MDSR_P27		(1 << 27)
/** PIOA_PIO_MDSR_P26 Multi-drive Status **/
#define PIOA_PIO_MDSR_P26		(1 << 26)
/** PIOA_PIO_MDSR_P25 Multi-drive Status **/
#define PIOA_PIO_MDSR_P25		(1 << 25)
/** PIOA_PIO_MDSR_P24 Multi-drive Status **/
#define PIOA_PIO_MDSR_P24		(1 << 24)
/** PIOA_PIO_MDSR_P23 Multi-drive Status **/
#define PIOA_PIO_MDSR_P23		(1 << 23)
/** PIOA_PIO_MDSR_P22 Multi-drive Status **/
#define PIOA_PIO_MDSR_P22		(1 << 22)
/** PIOA_PIO_MDSR_P21 Multi-drive Status **/
#define PIOA_PIO_MDSR_P21		(1 << 21)
/** PIOA_PIO_MDSR_P20 Multi-drive Status **/
#define PIOA_PIO_MDSR_P20		(1 << 20)
/** PIOA_PIO_MDSR_P19 Multi-drive Status **/
#define PIOA_PIO_MDSR_P19		(1 << 19)
/** PIOA_PIO_MDSR_P18 Multi-drive Status **/
#define PIOA_PIO_MDSR_P18		(1 << 18)
/** PIOA_PIO_MDSR_P17 Multi-drive Status **/
#define PIOA_PIO_MDSR_P17		(1 << 17)
/** PIOA_PIO_MDSR_P16 Multi-drive Status **/
#define PIOA_PIO_MDSR_P16		(1 << 16)
/** PIOA_PIO_MDSR_P15 Multi-drive Status **/
#define PIOA_PIO_MDSR_P15		(1 << 15)
/** PIOA_PIO_MDSR_P14 Multi-drive Status **/
#define PIOA_PIO_MDSR_P14		(1 << 14)
/** PIOA_PIO_MDSR_P13 Multi-drive Status **/
#define PIOA_PIO_MDSR_P13		(1 << 13)
/** PIOA_PIO_MDSR_P12 Multi-drive Status **/
#define PIOA_PIO_MDSR_P12		(1 << 12)
/** PIOA_PIO_MDSR_P11 Multi-drive Status **/
#define PIOA_PIO_MDSR_P11		(1 << 11)
/** PIOA_PIO_MDSR_P10 Multi-drive Status **/
#define PIOA_PIO_MDSR_P10		(1 << 10)
/** PIOA_PIO_MDSR_P9 Multi-drive Status **/
#define PIOA_PIO_MDSR_P9		(1 << 9)
/** PIOA_PIO_MDSR_P8 Multi-drive Status **/
#define PIOA_PIO_MDSR_P8		(1 << 8)
/** PIOA_PIO_MDSR_P7 Multi-drive Status **/
#define PIOA_PIO_MDSR_P7		(1 << 7)
/** PIOA_PIO_MDSR_P6 Multi-drive Status **/
#define PIOA_PIO_MDSR_P6		(1 << 6)
/** PIOA_PIO_MDSR_P5 Multi-drive Status **/
#define PIOA_PIO_MDSR_P5		(1 << 5)
/** PIOA_PIO_MDSR_P4 Multi-drive Status **/
#define PIOA_PIO_MDSR_P4		(1 << 4)
/** PIOA_PIO_MDSR_P3 Multi-drive Status **/
#define PIOA_PIO_MDSR_P3		(1 << 3)
/** PIOA_PIO_MDSR_P2 Multi-drive Status **/
#define PIOA_PIO_MDSR_P2		(1 << 2)
/** PIOA_PIO_MDSR_P1 Multi-drive Status **/
#define PIOA_PIO_MDSR_P1		(1 << 1)
/** PIOA_PIO_MDSR_P0 Multi-drive Status **/
#define PIOA_PIO_MDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pudr PIOPUDR Pull-up Disable Register
@{*/

/** PIOA_PIO_PUDR_P31 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P31		(1 << 31)
/** PIOA_PIO_PUDR_P30 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P30		(1 << 30)
/** PIOA_PIO_PUDR_P29 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P29		(1 << 29)
/** PIOA_PIO_PUDR_P28 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P28		(1 << 28)
/** PIOA_PIO_PUDR_P27 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P27		(1 << 27)
/** PIOA_PIO_PUDR_P26 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P26		(1 << 26)
/** PIOA_PIO_PUDR_P25 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P25		(1 << 25)
/** PIOA_PIO_PUDR_P24 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P24		(1 << 24)
/** PIOA_PIO_PUDR_P23 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P23		(1 << 23)
/** PIOA_PIO_PUDR_P22 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P22		(1 << 22)
/** PIOA_PIO_PUDR_P21 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P21		(1 << 21)
/** PIOA_PIO_PUDR_P20 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P20		(1 << 20)
/** PIOA_PIO_PUDR_P19 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P19		(1 << 19)
/** PIOA_PIO_PUDR_P18 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P18		(1 << 18)
/** PIOA_PIO_PUDR_P17 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P17		(1 << 17)
/** PIOA_PIO_PUDR_P16 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P16		(1 << 16)
/** PIOA_PIO_PUDR_P15 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P15		(1 << 15)
/** PIOA_PIO_PUDR_P14 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P14		(1 << 14)
/** PIOA_PIO_PUDR_P13 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P13		(1 << 13)
/** PIOA_PIO_PUDR_P12 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P12		(1 << 12)
/** PIOA_PIO_PUDR_P11 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P11		(1 << 11)
/** PIOA_PIO_PUDR_P10 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P10		(1 << 10)
/** PIOA_PIO_PUDR_P9 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P9		(1 << 9)
/** PIOA_PIO_PUDR_P8 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P8		(1 << 8)
/** PIOA_PIO_PUDR_P7 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P7		(1 << 7)
/** PIOA_PIO_PUDR_P6 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P6		(1 << 6)
/** PIOA_PIO_PUDR_P5 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P5		(1 << 5)
/** PIOA_PIO_PUDR_P4 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P4		(1 << 4)
/** PIOA_PIO_PUDR_P3 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P3		(1 << 3)
/** PIOA_PIO_PUDR_P2 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P2		(1 << 2)
/** PIOA_PIO_PUDR_P1 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P1		(1 << 1)
/** PIOA_PIO_PUDR_P0 Pull-Up Disable **/
#define PIOA_PIO_PUDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_puer PIOPUER Pull-up Enable Register
@{*/

/** PIOA_PIO_PUER_P31 Pull-Up Enable **/
#define PIOA_PIO_PUER_P31		(1 << 31)
/** PIOA_PIO_PUER_P30 Pull-Up Enable **/
#define PIOA_PIO_PUER_P30		(1 << 30)
/** PIOA_PIO_PUER_P29 Pull-Up Enable **/
#define PIOA_PIO_PUER_P29		(1 << 29)
/** PIOA_PIO_PUER_P28 Pull-Up Enable **/
#define PIOA_PIO_PUER_P28		(1 << 28)
/** PIOA_PIO_PUER_P27 Pull-Up Enable **/
#define PIOA_PIO_PUER_P27		(1 << 27)
/** PIOA_PIO_PUER_P26 Pull-Up Enable **/
#define PIOA_PIO_PUER_P26		(1 << 26)
/** PIOA_PIO_PUER_P25 Pull-Up Enable **/
#define PIOA_PIO_PUER_P25		(1 << 25)
/** PIOA_PIO_PUER_P24 Pull-Up Enable **/
#define PIOA_PIO_PUER_P24		(1 << 24)
/** PIOA_PIO_PUER_P23 Pull-Up Enable **/
#define PIOA_PIO_PUER_P23		(1 << 23)
/** PIOA_PIO_PUER_P22 Pull-Up Enable **/
#define PIOA_PIO_PUER_P22		(1 << 22)
/** PIOA_PIO_PUER_P21 Pull-Up Enable **/
#define PIOA_PIO_PUER_P21		(1 << 21)
/** PIOA_PIO_PUER_P20 Pull-Up Enable **/
#define PIOA_PIO_PUER_P20		(1 << 20)
/** PIOA_PIO_PUER_P19 Pull-Up Enable **/
#define PIOA_PIO_PUER_P19		(1 << 19)
/** PIOA_PIO_PUER_P18 Pull-Up Enable **/
#define PIOA_PIO_PUER_P18		(1 << 18)
/** PIOA_PIO_PUER_P17 Pull-Up Enable **/
#define PIOA_PIO_PUER_P17		(1 << 17)
/** PIOA_PIO_PUER_P16 Pull-Up Enable **/
#define PIOA_PIO_PUER_P16		(1 << 16)
/** PIOA_PIO_PUER_P15 Pull-Up Enable **/
#define PIOA_PIO_PUER_P15		(1 << 15)
/** PIOA_PIO_PUER_P14 Pull-Up Enable **/
#define PIOA_PIO_PUER_P14		(1 << 14)
/** PIOA_PIO_PUER_P13 Pull-Up Enable **/
#define PIOA_PIO_PUER_P13		(1 << 13)
/** PIOA_PIO_PUER_P12 Pull-Up Enable **/
#define PIOA_PIO_PUER_P12		(1 << 12)
/** PIOA_PIO_PUER_P11 Pull-Up Enable **/
#define PIOA_PIO_PUER_P11		(1 << 11)
/** PIOA_PIO_PUER_P10 Pull-Up Enable **/
#define PIOA_PIO_PUER_P10		(1 << 10)
/** PIOA_PIO_PUER_P9 Pull-Up Enable **/
#define PIOA_PIO_PUER_P9		(1 << 9)
/** PIOA_PIO_PUER_P8 Pull-Up Enable **/
#define PIOA_PIO_PUER_P8		(1 << 8)
/** PIOA_PIO_PUER_P7 Pull-Up Enable **/
#define PIOA_PIO_PUER_P7		(1 << 7)
/** PIOA_PIO_PUER_P6 Pull-Up Enable **/
#define PIOA_PIO_PUER_P6		(1 << 6)
/** PIOA_PIO_PUER_P5 Pull-Up Enable **/
#define PIOA_PIO_PUER_P5		(1 << 5)
/** PIOA_PIO_PUER_P4 Pull-Up Enable **/
#define PIOA_PIO_PUER_P4		(1 << 4)
/** PIOA_PIO_PUER_P3 Pull-Up Enable **/
#define PIOA_PIO_PUER_P3		(1 << 3)
/** PIOA_PIO_PUER_P2 Pull-Up Enable **/
#define PIOA_PIO_PUER_P2		(1 << 2)
/** PIOA_PIO_PUER_P1 Pull-Up Enable **/
#define PIOA_PIO_PUER_P1		(1 << 1)
/** PIOA_PIO_PUER_P0 Pull-Up Enable **/
#define PIOA_PIO_PUER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pusr PIOPUSR Pad Pull-up Status Register
@{*/

/** PIOA_PIO_PUSR_P31 Pull-Up Status **/
#define PIOA_PIO_PUSR_P31		(1 << 31)
/** PIOA_PIO_PUSR_P30 Pull-Up Status **/
#define PIOA_PIO_PUSR_P30		(1 << 30)
/** PIOA_PIO_PUSR_P29 Pull-Up Status **/
#define PIOA_PIO_PUSR_P29		(1 << 29)
/** PIOA_PIO_PUSR_P28 Pull-Up Status **/
#define PIOA_PIO_PUSR_P28		(1 << 28)
/** PIOA_PIO_PUSR_P27 Pull-Up Status **/
#define PIOA_PIO_PUSR_P27		(1 << 27)
/** PIOA_PIO_PUSR_P26 Pull-Up Status **/
#define PIOA_PIO_PUSR_P26		(1 << 26)
/** PIOA_PIO_PUSR_P25 Pull-Up Status **/
#define PIOA_PIO_PUSR_P25		(1 << 25)
/** PIOA_PIO_PUSR_P24 Pull-Up Status **/
#define PIOA_PIO_PUSR_P24		(1 << 24)
/** PIOA_PIO_PUSR_P23 Pull-Up Status **/
#define PIOA_PIO_PUSR_P23		(1 << 23)
/** PIOA_PIO_PUSR_P22 Pull-Up Status **/
#define PIOA_PIO_PUSR_P22		(1 << 22)
/** PIOA_PIO_PUSR_P21 Pull-Up Status **/
#define PIOA_PIO_PUSR_P21		(1 << 21)
/** PIOA_PIO_PUSR_P20 Pull-Up Status **/
#define PIOA_PIO_PUSR_P20		(1 << 20)
/** PIOA_PIO_PUSR_P19 Pull-Up Status **/
#define PIOA_PIO_PUSR_P19		(1 << 19)
/** PIOA_PIO_PUSR_P18 Pull-Up Status **/
#define PIOA_PIO_PUSR_P18		(1 << 18)
/** PIOA_PIO_PUSR_P17 Pull-Up Status **/
#define PIOA_PIO_PUSR_P17		(1 << 17)
/** PIOA_PIO_PUSR_P16 Pull-Up Status **/
#define PIOA_PIO_PUSR_P16		(1 << 16)
/** PIOA_PIO_PUSR_P15 Pull-Up Status **/
#define PIOA_PIO_PUSR_P15		(1 << 15)
/** PIOA_PIO_PUSR_P14 Pull-Up Status **/
#define PIOA_PIO_PUSR_P14		(1 << 14)
/** PIOA_PIO_PUSR_P13 Pull-Up Status **/
#define PIOA_PIO_PUSR_P13		(1 << 13)
/** PIOA_PIO_PUSR_P12 Pull-Up Status **/
#define PIOA_PIO_PUSR_P12		(1 << 12)
/** PIOA_PIO_PUSR_P11 Pull-Up Status **/
#define PIOA_PIO_PUSR_P11		(1 << 11)
/** PIOA_PIO_PUSR_P10 Pull-Up Status **/
#define PIOA_PIO_PUSR_P10		(1 << 10)
/** PIOA_PIO_PUSR_P9 Pull-Up Status **/
#define PIOA_PIO_PUSR_P9		(1 << 9)
/** PIOA_PIO_PUSR_P8 Pull-Up Status **/
#define PIOA_PIO_PUSR_P8		(1 << 8)
/** PIOA_PIO_PUSR_P7 Pull-Up Status **/
#define PIOA_PIO_PUSR_P7		(1 << 7)
/** PIOA_PIO_PUSR_P6 Pull-Up Status **/
#define PIOA_PIO_PUSR_P6		(1 << 6)
/** PIOA_PIO_PUSR_P5 Pull-Up Status **/
#define PIOA_PIO_PUSR_P5		(1 << 5)
/** PIOA_PIO_PUSR_P4 Pull-Up Status **/
#define PIOA_PIO_PUSR_P4		(1 << 4)
/** PIOA_PIO_PUSR_P3 Pull-Up Status **/
#define PIOA_PIO_PUSR_P3		(1 << 3)
/** PIOA_PIO_PUSR_P2 Pull-Up Status **/
#define PIOA_PIO_PUSR_P2		(1 << 2)
/** PIOA_PIO_PUSR_P1 Pull-Up Status **/
#define PIOA_PIO_PUSR_P1		(1 << 1)
/** PIOA_PIO_PUSR_P0 Pull-Up Status **/
#define PIOA_PIO_PUSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_abcdsr[0] PIOABCDSR[0] Peripheral ABCD Select Register 0
@{*/

/** PIOA_PIO_ABCDSR[0]_P31 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P31		(1 << 31)
/** PIOA_PIO_ABCDSR[0]_P30 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P30		(1 << 30)
/** PIOA_PIO_ABCDSR[0]_P29 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P29		(1 << 29)
/** PIOA_PIO_ABCDSR[0]_P28 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P28		(1 << 28)
/** PIOA_PIO_ABCDSR[0]_P27 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P27		(1 << 27)
/** PIOA_PIO_ABCDSR[0]_P26 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P26		(1 << 26)
/** PIOA_PIO_ABCDSR[0]_P25 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P25		(1 << 25)
/** PIOA_PIO_ABCDSR[0]_P24 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P24		(1 << 24)
/** PIOA_PIO_ABCDSR[0]_P23 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P23		(1 << 23)
/** PIOA_PIO_ABCDSR[0]_P22 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P22		(1 << 22)
/** PIOA_PIO_ABCDSR[0]_P21 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P21		(1 << 21)
/** PIOA_PIO_ABCDSR[0]_P20 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P20		(1 << 20)
/** PIOA_PIO_ABCDSR[0]_P19 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P19		(1 << 19)
/** PIOA_PIO_ABCDSR[0]_P18 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P18		(1 << 18)
/** PIOA_PIO_ABCDSR[0]_P17 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P17		(1 << 17)
/** PIOA_PIO_ABCDSR[0]_P16 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P16		(1 << 16)
/** PIOA_PIO_ABCDSR[0]_P15 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P15		(1 << 15)
/** PIOA_PIO_ABCDSR[0]_P14 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P14		(1 << 14)
/** PIOA_PIO_ABCDSR[0]_P13 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P13		(1 << 13)
/** PIOA_PIO_ABCDSR[0]_P12 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P12		(1 << 12)
/** PIOA_PIO_ABCDSR[0]_P11 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P11		(1 << 11)
/** PIOA_PIO_ABCDSR[0]_P10 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P10		(1 << 10)
/** PIOA_PIO_ABCDSR[0]_P9 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P9		(1 << 9)
/** PIOA_PIO_ABCDSR[0]_P8 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P8		(1 << 8)
/** PIOA_PIO_ABCDSR[0]_P7 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P7		(1 << 7)
/** PIOA_PIO_ABCDSR[0]_P6 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P6		(1 << 6)
/** PIOA_PIO_ABCDSR[0]_P5 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P5		(1 << 5)
/** PIOA_PIO_ABCDSR[0]_P4 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P4		(1 << 4)
/** PIOA_PIO_ABCDSR[0]_P3 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P3		(1 << 3)
/** PIOA_PIO_ABCDSR[0]_P2 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P2		(1 << 2)
/** PIOA_PIO_ABCDSR[0]_P1 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P1		(1 << 1)
/** PIOA_PIO_ABCDSR[0]_P0 Peripheral Select **/
#define PIOA_PIO_ABCDSR[0]_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_abcdsr[1] PIOABCDSR[1] Peripheral ABCD Select Register 0
@{*/

/** PIOA_PIO_ABCDSR[1]_P31 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P31		(1 << 31)
/** PIOA_PIO_ABCDSR[1]_P30 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P30		(1 << 30)
/** PIOA_PIO_ABCDSR[1]_P29 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P29		(1 << 29)
/** PIOA_PIO_ABCDSR[1]_P28 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P28		(1 << 28)
/** PIOA_PIO_ABCDSR[1]_P27 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P27		(1 << 27)
/** PIOA_PIO_ABCDSR[1]_P26 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P26		(1 << 26)
/** PIOA_PIO_ABCDSR[1]_P25 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P25		(1 << 25)
/** PIOA_PIO_ABCDSR[1]_P24 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P24		(1 << 24)
/** PIOA_PIO_ABCDSR[1]_P23 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P23		(1 << 23)
/** PIOA_PIO_ABCDSR[1]_P22 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P22		(1 << 22)
/** PIOA_PIO_ABCDSR[1]_P21 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P21		(1 << 21)
/** PIOA_PIO_ABCDSR[1]_P20 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P20		(1 << 20)
/** PIOA_PIO_ABCDSR[1]_P19 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P19		(1 << 19)
/** PIOA_PIO_ABCDSR[1]_P18 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P18		(1 << 18)
/** PIOA_PIO_ABCDSR[1]_P17 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P17		(1 << 17)
/** PIOA_PIO_ABCDSR[1]_P16 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P16		(1 << 16)
/** PIOA_PIO_ABCDSR[1]_P15 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P15		(1 << 15)
/** PIOA_PIO_ABCDSR[1]_P14 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P14		(1 << 14)
/** PIOA_PIO_ABCDSR[1]_P13 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P13		(1 << 13)
/** PIOA_PIO_ABCDSR[1]_P12 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P12		(1 << 12)
/** PIOA_PIO_ABCDSR[1]_P11 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P11		(1 << 11)
/** PIOA_PIO_ABCDSR[1]_P10 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P10		(1 << 10)
/** PIOA_PIO_ABCDSR[1]_P9 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P9		(1 << 9)
/** PIOA_PIO_ABCDSR[1]_P8 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P8		(1 << 8)
/** PIOA_PIO_ABCDSR[1]_P7 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P7		(1 << 7)
/** PIOA_PIO_ABCDSR[1]_P6 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P6		(1 << 6)
/** PIOA_PIO_ABCDSR[1]_P5 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P5		(1 << 5)
/** PIOA_PIO_ABCDSR[1]_P4 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P4		(1 << 4)
/** PIOA_PIO_ABCDSR[1]_P3 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P3		(1 << 3)
/** PIOA_PIO_ABCDSR[1]_P2 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P2		(1 << 2)
/** PIOA_PIO_ABCDSR[1]_P1 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P1		(1 << 1)
/** PIOA_PIO_ABCDSR[1]_P0 Peripheral Select **/
#define PIOA_PIO_ABCDSR[1]_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifscdr PIOIFSCDR Input Filter Slow Clock Disable Register
@{*/

/** PIOA_PIO_IFSCDR_P31 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P31		(1 << 31)
/** PIOA_PIO_IFSCDR_P30 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P30		(1 << 30)
/** PIOA_PIO_IFSCDR_P29 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P29		(1 << 29)
/** PIOA_PIO_IFSCDR_P28 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P28		(1 << 28)
/** PIOA_PIO_IFSCDR_P27 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P27		(1 << 27)
/** PIOA_PIO_IFSCDR_P26 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P26		(1 << 26)
/** PIOA_PIO_IFSCDR_P25 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P25		(1 << 25)
/** PIOA_PIO_IFSCDR_P24 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P24		(1 << 24)
/** PIOA_PIO_IFSCDR_P23 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P23		(1 << 23)
/** PIOA_PIO_IFSCDR_P22 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P22		(1 << 22)
/** PIOA_PIO_IFSCDR_P21 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P21		(1 << 21)
/** PIOA_PIO_IFSCDR_P20 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P20		(1 << 20)
/** PIOA_PIO_IFSCDR_P19 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P19		(1 << 19)
/** PIOA_PIO_IFSCDR_P18 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P18		(1 << 18)
/** PIOA_PIO_IFSCDR_P17 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P17		(1 << 17)
/** PIOA_PIO_IFSCDR_P16 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P16		(1 << 16)
/** PIOA_PIO_IFSCDR_P15 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P15		(1 << 15)
/** PIOA_PIO_IFSCDR_P14 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P14		(1 << 14)
/** PIOA_PIO_IFSCDR_P13 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P13		(1 << 13)
/** PIOA_PIO_IFSCDR_P12 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P12		(1 << 12)
/** PIOA_PIO_IFSCDR_P11 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P11		(1 << 11)
/** PIOA_PIO_IFSCDR_P10 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P10		(1 << 10)
/** PIOA_PIO_IFSCDR_P9 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P9		(1 << 9)
/** PIOA_PIO_IFSCDR_P8 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P8		(1 << 8)
/** PIOA_PIO_IFSCDR_P7 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P7		(1 << 7)
/** PIOA_PIO_IFSCDR_P6 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P6		(1 << 6)
/** PIOA_PIO_IFSCDR_P5 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P5		(1 << 5)
/** PIOA_PIO_IFSCDR_P4 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P4		(1 << 4)
/** PIOA_PIO_IFSCDR_P3 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P3		(1 << 3)
/** PIOA_PIO_IFSCDR_P2 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P2		(1 << 2)
/** PIOA_PIO_IFSCDR_P1 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P1		(1 << 1)
/** PIOA_PIO_IFSCDR_P0 Peripheral Clock Glitch Filtering Select **/
#define PIOA_PIO_IFSCDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifscer PIOIFSCER Input Filter Slow Clock Enable Register
@{*/

/** PIOA_PIO_IFSCER_P31 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P31		(1 << 31)
/** PIOA_PIO_IFSCER_P30 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P30		(1 << 30)
/** PIOA_PIO_IFSCER_P29 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P29		(1 << 29)
/** PIOA_PIO_IFSCER_P28 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P28		(1 << 28)
/** PIOA_PIO_IFSCER_P27 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P27		(1 << 27)
/** PIOA_PIO_IFSCER_P26 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P26		(1 << 26)
/** PIOA_PIO_IFSCER_P25 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P25		(1 << 25)
/** PIOA_PIO_IFSCER_P24 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P24		(1 << 24)
/** PIOA_PIO_IFSCER_P23 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P23		(1 << 23)
/** PIOA_PIO_IFSCER_P22 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P22		(1 << 22)
/** PIOA_PIO_IFSCER_P21 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P21		(1 << 21)
/** PIOA_PIO_IFSCER_P20 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P20		(1 << 20)
/** PIOA_PIO_IFSCER_P19 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P19		(1 << 19)
/** PIOA_PIO_IFSCER_P18 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P18		(1 << 18)
/** PIOA_PIO_IFSCER_P17 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P17		(1 << 17)
/** PIOA_PIO_IFSCER_P16 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P16		(1 << 16)
/** PIOA_PIO_IFSCER_P15 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P15		(1 << 15)
/** PIOA_PIO_IFSCER_P14 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P14		(1 << 14)
/** PIOA_PIO_IFSCER_P13 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P13		(1 << 13)
/** PIOA_PIO_IFSCER_P12 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P12		(1 << 12)
/** PIOA_PIO_IFSCER_P11 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P11		(1 << 11)
/** PIOA_PIO_IFSCER_P10 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P10		(1 << 10)
/** PIOA_PIO_IFSCER_P9 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P9		(1 << 9)
/** PIOA_PIO_IFSCER_P8 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P8		(1 << 8)
/** PIOA_PIO_IFSCER_P7 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P7		(1 << 7)
/** PIOA_PIO_IFSCER_P6 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P6		(1 << 6)
/** PIOA_PIO_IFSCER_P5 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P5		(1 << 5)
/** PIOA_PIO_IFSCER_P4 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P4		(1 << 4)
/** PIOA_PIO_IFSCER_P3 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P3		(1 << 3)
/** PIOA_PIO_IFSCER_P2 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P2		(1 << 2)
/** PIOA_PIO_IFSCER_P1 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P1		(1 << 1)
/** PIOA_PIO_IFSCER_P0 Slow Clock Debouncing Filtering Select **/
#define PIOA_PIO_IFSCER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ifscsr PIOIFSCSR Input Filter Slow Clock Status Register
@{*/

/** PIOA_PIO_IFSCSR_P31 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P31		(1 << 31)
/** PIOA_PIO_IFSCSR_P30 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P30		(1 << 30)
/** PIOA_PIO_IFSCSR_P29 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P29		(1 << 29)
/** PIOA_PIO_IFSCSR_P28 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P28		(1 << 28)
/** PIOA_PIO_IFSCSR_P27 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P27		(1 << 27)
/** PIOA_PIO_IFSCSR_P26 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P26		(1 << 26)
/** PIOA_PIO_IFSCSR_P25 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P25		(1 << 25)
/** PIOA_PIO_IFSCSR_P24 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P24		(1 << 24)
/** PIOA_PIO_IFSCSR_P23 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P23		(1 << 23)
/** PIOA_PIO_IFSCSR_P22 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P22		(1 << 22)
/** PIOA_PIO_IFSCSR_P21 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P21		(1 << 21)
/** PIOA_PIO_IFSCSR_P20 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P20		(1 << 20)
/** PIOA_PIO_IFSCSR_P19 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P19		(1 << 19)
/** PIOA_PIO_IFSCSR_P18 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P18		(1 << 18)
/** PIOA_PIO_IFSCSR_P17 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P17		(1 << 17)
/** PIOA_PIO_IFSCSR_P16 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P16		(1 << 16)
/** PIOA_PIO_IFSCSR_P15 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P15		(1 << 15)
/** PIOA_PIO_IFSCSR_P14 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P14		(1 << 14)
/** PIOA_PIO_IFSCSR_P13 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P13		(1 << 13)
/** PIOA_PIO_IFSCSR_P12 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P12		(1 << 12)
/** PIOA_PIO_IFSCSR_P11 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P11		(1 << 11)
/** PIOA_PIO_IFSCSR_P10 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P10		(1 << 10)
/** PIOA_PIO_IFSCSR_P9 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P9		(1 << 9)
/** PIOA_PIO_IFSCSR_P8 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P8		(1 << 8)
/** PIOA_PIO_IFSCSR_P7 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P7		(1 << 7)
/** PIOA_PIO_IFSCSR_P6 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P6		(1 << 6)
/** PIOA_PIO_IFSCSR_P5 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P5		(1 << 5)
/** PIOA_PIO_IFSCSR_P4 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P4		(1 << 4)
/** PIOA_PIO_IFSCSR_P3 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P3		(1 << 3)
/** PIOA_PIO_IFSCSR_P2 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P2		(1 << 2)
/** PIOA_PIO_IFSCSR_P1 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P1		(1 << 1)
/** PIOA_PIO_IFSCSR_P0 Glitch or Debouncing Filter Selection Status **/
#define PIOA_PIO_IFSCSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_scdr PIOSCDR Slow Clock Divider Debouncing Register
@{*/


#define PIOA_PIO_SCDR_DIV_SHIFT		0
#define PIOA_PIO_SCDR_DIV_MASK		0x3fff
/** @defgroup pioa_pio_scdr_div DIV Slow Clock Divider Selection for Debouncing
@{*/
/**@}*/


/**@}*/

/** @defgroup pioa_pio_ppddr PIOPPDDR Pad Pull-down Disable Register
@{*/

/** PIOA_PIO_PPDDR_P31 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P31		(1 << 31)
/** PIOA_PIO_PPDDR_P30 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P30		(1 << 30)
/** PIOA_PIO_PPDDR_P29 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P29		(1 << 29)
/** PIOA_PIO_PPDDR_P28 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P28		(1 << 28)
/** PIOA_PIO_PPDDR_P27 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P27		(1 << 27)
/** PIOA_PIO_PPDDR_P26 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P26		(1 << 26)
/** PIOA_PIO_PPDDR_P25 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P25		(1 << 25)
/** PIOA_PIO_PPDDR_P24 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P24		(1 << 24)
/** PIOA_PIO_PPDDR_P23 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P23		(1 << 23)
/** PIOA_PIO_PPDDR_P22 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P22		(1 << 22)
/** PIOA_PIO_PPDDR_P21 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P21		(1 << 21)
/** PIOA_PIO_PPDDR_P20 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P20		(1 << 20)
/** PIOA_PIO_PPDDR_P19 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P19		(1 << 19)
/** PIOA_PIO_PPDDR_P18 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P18		(1 << 18)
/** PIOA_PIO_PPDDR_P17 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P17		(1 << 17)
/** PIOA_PIO_PPDDR_P16 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P16		(1 << 16)
/** PIOA_PIO_PPDDR_P15 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P15		(1 << 15)
/** PIOA_PIO_PPDDR_P14 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P14		(1 << 14)
/** PIOA_PIO_PPDDR_P13 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P13		(1 << 13)
/** PIOA_PIO_PPDDR_P12 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P12		(1 << 12)
/** PIOA_PIO_PPDDR_P11 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P11		(1 << 11)
/** PIOA_PIO_PPDDR_P10 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P10		(1 << 10)
/** PIOA_PIO_PPDDR_P9 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P9		(1 << 9)
/** PIOA_PIO_PPDDR_P8 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P8		(1 << 8)
/** PIOA_PIO_PPDDR_P7 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P7		(1 << 7)
/** PIOA_PIO_PPDDR_P6 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P6		(1 << 6)
/** PIOA_PIO_PPDDR_P5 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P5		(1 << 5)
/** PIOA_PIO_PPDDR_P4 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P4		(1 << 4)
/** PIOA_PIO_PPDDR_P3 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P3		(1 << 3)
/** PIOA_PIO_PPDDR_P2 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P2		(1 << 2)
/** PIOA_PIO_PPDDR_P1 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P1		(1 << 1)
/** PIOA_PIO_PPDDR_P0 Pull-Down Disable **/
#define PIOA_PIO_PPDDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ppder PIOPPDER Pad Pull-down Enable Register
@{*/

/** PIOA_PIO_PPDER_P31 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P31		(1 << 31)
/** PIOA_PIO_PPDER_P30 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P30		(1 << 30)
/** PIOA_PIO_PPDER_P29 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P29		(1 << 29)
/** PIOA_PIO_PPDER_P28 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P28		(1 << 28)
/** PIOA_PIO_PPDER_P27 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P27		(1 << 27)
/** PIOA_PIO_PPDER_P26 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P26		(1 << 26)
/** PIOA_PIO_PPDER_P25 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P25		(1 << 25)
/** PIOA_PIO_PPDER_P24 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P24		(1 << 24)
/** PIOA_PIO_PPDER_P23 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P23		(1 << 23)
/** PIOA_PIO_PPDER_P22 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P22		(1 << 22)
/** PIOA_PIO_PPDER_P21 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P21		(1 << 21)
/** PIOA_PIO_PPDER_P20 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P20		(1 << 20)
/** PIOA_PIO_PPDER_P19 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P19		(1 << 19)
/** PIOA_PIO_PPDER_P18 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P18		(1 << 18)
/** PIOA_PIO_PPDER_P17 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P17		(1 << 17)
/** PIOA_PIO_PPDER_P16 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P16		(1 << 16)
/** PIOA_PIO_PPDER_P15 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P15		(1 << 15)
/** PIOA_PIO_PPDER_P14 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P14		(1 << 14)
/** PIOA_PIO_PPDER_P13 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P13		(1 << 13)
/** PIOA_PIO_PPDER_P12 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P12		(1 << 12)
/** PIOA_PIO_PPDER_P11 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P11		(1 << 11)
/** PIOA_PIO_PPDER_P10 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P10		(1 << 10)
/** PIOA_PIO_PPDER_P9 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P9		(1 << 9)
/** PIOA_PIO_PPDER_P8 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P8		(1 << 8)
/** PIOA_PIO_PPDER_P7 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P7		(1 << 7)
/** PIOA_PIO_PPDER_P6 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P6		(1 << 6)
/** PIOA_PIO_PPDER_P5 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P5		(1 << 5)
/** PIOA_PIO_PPDER_P4 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P4		(1 << 4)
/** PIOA_PIO_PPDER_P3 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P3		(1 << 3)
/** PIOA_PIO_PPDER_P2 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P2		(1 << 2)
/** PIOA_PIO_PPDER_P1 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P1		(1 << 1)
/** PIOA_PIO_PPDER_P0 Pull-Down Enable **/
#define PIOA_PIO_PPDER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ppdsr PIOPPDSR Pad Pull-down Status Register
@{*/

/** PIOA_PIO_PPDSR_P31 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P31		(1 << 31)
/** PIOA_PIO_PPDSR_P30 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P30		(1 << 30)
/** PIOA_PIO_PPDSR_P29 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P29		(1 << 29)
/** PIOA_PIO_PPDSR_P28 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P28		(1 << 28)
/** PIOA_PIO_PPDSR_P27 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P27		(1 << 27)
/** PIOA_PIO_PPDSR_P26 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P26		(1 << 26)
/** PIOA_PIO_PPDSR_P25 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P25		(1 << 25)
/** PIOA_PIO_PPDSR_P24 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P24		(1 << 24)
/** PIOA_PIO_PPDSR_P23 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P23		(1 << 23)
/** PIOA_PIO_PPDSR_P22 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P22		(1 << 22)
/** PIOA_PIO_PPDSR_P21 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P21		(1 << 21)
/** PIOA_PIO_PPDSR_P20 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P20		(1 << 20)
/** PIOA_PIO_PPDSR_P19 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P19		(1 << 19)
/** PIOA_PIO_PPDSR_P18 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P18		(1 << 18)
/** PIOA_PIO_PPDSR_P17 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P17		(1 << 17)
/** PIOA_PIO_PPDSR_P16 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P16		(1 << 16)
/** PIOA_PIO_PPDSR_P15 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P15		(1 << 15)
/** PIOA_PIO_PPDSR_P14 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P14		(1 << 14)
/** PIOA_PIO_PPDSR_P13 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P13		(1 << 13)
/** PIOA_PIO_PPDSR_P12 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P12		(1 << 12)
/** PIOA_PIO_PPDSR_P11 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P11		(1 << 11)
/** PIOA_PIO_PPDSR_P10 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P10		(1 << 10)
/** PIOA_PIO_PPDSR_P9 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P9		(1 << 9)
/** PIOA_PIO_PPDSR_P8 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P8		(1 << 8)
/** PIOA_PIO_PPDSR_P7 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P7		(1 << 7)
/** PIOA_PIO_PPDSR_P6 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P6		(1 << 6)
/** PIOA_PIO_PPDSR_P5 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P5		(1 << 5)
/** PIOA_PIO_PPDSR_P4 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P4		(1 << 4)
/** PIOA_PIO_PPDSR_P3 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P3		(1 << 3)
/** PIOA_PIO_PPDSR_P2 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P2		(1 << 2)
/** PIOA_PIO_PPDSR_P1 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P1		(1 << 1)
/** PIOA_PIO_PPDSR_P0 Pull-Down Status **/
#define PIOA_PIO_PPDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_ower PIOOWER Output Write Enable
@{*/

/** PIOA_PIO_OWER_P31 Output Write Enable **/
#define PIOA_PIO_OWER_P31		(1 << 31)
/** PIOA_PIO_OWER_P30 Output Write Enable **/
#define PIOA_PIO_OWER_P30		(1 << 30)
/** PIOA_PIO_OWER_P29 Output Write Enable **/
#define PIOA_PIO_OWER_P29		(1 << 29)
/** PIOA_PIO_OWER_P28 Output Write Enable **/
#define PIOA_PIO_OWER_P28		(1 << 28)
/** PIOA_PIO_OWER_P27 Output Write Enable **/
#define PIOA_PIO_OWER_P27		(1 << 27)
/** PIOA_PIO_OWER_P26 Output Write Enable **/
#define PIOA_PIO_OWER_P26		(1 << 26)
/** PIOA_PIO_OWER_P25 Output Write Enable **/
#define PIOA_PIO_OWER_P25		(1 << 25)
/** PIOA_PIO_OWER_P24 Output Write Enable **/
#define PIOA_PIO_OWER_P24		(1 << 24)
/** PIOA_PIO_OWER_P23 Output Write Enable **/
#define PIOA_PIO_OWER_P23		(1 << 23)
/** PIOA_PIO_OWER_P22 Output Write Enable **/
#define PIOA_PIO_OWER_P22		(1 << 22)
/** PIOA_PIO_OWER_P21 Output Write Enable **/
#define PIOA_PIO_OWER_P21		(1 << 21)
/** PIOA_PIO_OWER_P20 Output Write Enable **/
#define PIOA_PIO_OWER_P20		(1 << 20)
/** PIOA_PIO_OWER_P19 Output Write Enable **/
#define PIOA_PIO_OWER_P19		(1 << 19)
/** PIOA_PIO_OWER_P18 Output Write Enable **/
#define PIOA_PIO_OWER_P18		(1 << 18)
/** PIOA_PIO_OWER_P17 Output Write Enable **/
#define PIOA_PIO_OWER_P17		(1 << 17)
/** PIOA_PIO_OWER_P16 Output Write Enable **/
#define PIOA_PIO_OWER_P16		(1 << 16)
/** PIOA_PIO_OWER_P15 Output Write Enable **/
#define PIOA_PIO_OWER_P15		(1 << 15)
/** PIOA_PIO_OWER_P14 Output Write Enable **/
#define PIOA_PIO_OWER_P14		(1 << 14)
/** PIOA_PIO_OWER_P13 Output Write Enable **/
#define PIOA_PIO_OWER_P13		(1 << 13)
/** PIOA_PIO_OWER_P12 Output Write Enable **/
#define PIOA_PIO_OWER_P12		(1 << 12)
/** PIOA_PIO_OWER_P11 Output Write Enable **/
#define PIOA_PIO_OWER_P11		(1 << 11)
/** PIOA_PIO_OWER_P10 Output Write Enable **/
#define PIOA_PIO_OWER_P10		(1 << 10)
/** PIOA_PIO_OWER_P9 Output Write Enable **/
#define PIOA_PIO_OWER_P9		(1 << 9)
/** PIOA_PIO_OWER_P8 Output Write Enable **/
#define PIOA_PIO_OWER_P8		(1 << 8)
/** PIOA_PIO_OWER_P7 Output Write Enable **/
#define PIOA_PIO_OWER_P7		(1 << 7)
/** PIOA_PIO_OWER_P6 Output Write Enable **/
#define PIOA_PIO_OWER_P6		(1 << 6)
/** PIOA_PIO_OWER_P5 Output Write Enable **/
#define PIOA_PIO_OWER_P5		(1 << 5)
/** PIOA_PIO_OWER_P4 Output Write Enable **/
#define PIOA_PIO_OWER_P4		(1 << 4)
/** PIOA_PIO_OWER_P3 Output Write Enable **/
#define PIOA_PIO_OWER_P3		(1 << 3)
/** PIOA_PIO_OWER_P2 Output Write Enable **/
#define PIOA_PIO_OWER_P2		(1 << 2)
/** PIOA_PIO_OWER_P1 Output Write Enable **/
#define PIOA_PIO_OWER_P1		(1 << 1)
/** PIOA_PIO_OWER_P0 Output Write Enable **/
#define PIOA_PIO_OWER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_owdr PIOOWDR Output Write Disable
@{*/

/** PIOA_PIO_OWDR_P31 Output Write Disable **/
#define PIOA_PIO_OWDR_P31		(1 << 31)
/** PIOA_PIO_OWDR_P30 Output Write Disable **/
#define PIOA_PIO_OWDR_P30		(1 << 30)
/** PIOA_PIO_OWDR_P29 Output Write Disable **/
#define PIOA_PIO_OWDR_P29		(1 << 29)
/** PIOA_PIO_OWDR_P28 Output Write Disable **/
#define PIOA_PIO_OWDR_P28		(1 << 28)
/** PIOA_PIO_OWDR_P27 Output Write Disable **/
#define PIOA_PIO_OWDR_P27		(1 << 27)
/** PIOA_PIO_OWDR_P26 Output Write Disable **/
#define PIOA_PIO_OWDR_P26		(1 << 26)
/** PIOA_PIO_OWDR_P25 Output Write Disable **/
#define PIOA_PIO_OWDR_P25		(1 << 25)
/** PIOA_PIO_OWDR_P24 Output Write Disable **/
#define PIOA_PIO_OWDR_P24		(1 << 24)
/** PIOA_PIO_OWDR_P23 Output Write Disable **/
#define PIOA_PIO_OWDR_P23		(1 << 23)
/** PIOA_PIO_OWDR_P22 Output Write Disable **/
#define PIOA_PIO_OWDR_P22		(1 << 22)
/** PIOA_PIO_OWDR_P21 Output Write Disable **/
#define PIOA_PIO_OWDR_P21		(1 << 21)
/** PIOA_PIO_OWDR_P20 Output Write Disable **/
#define PIOA_PIO_OWDR_P20		(1 << 20)
/** PIOA_PIO_OWDR_P19 Output Write Disable **/
#define PIOA_PIO_OWDR_P19		(1 << 19)
/** PIOA_PIO_OWDR_P18 Output Write Disable **/
#define PIOA_PIO_OWDR_P18		(1 << 18)
/** PIOA_PIO_OWDR_P17 Output Write Disable **/
#define PIOA_PIO_OWDR_P17		(1 << 17)
/** PIOA_PIO_OWDR_P16 Output Write Disable **/
#define PIOA_PIO_OWDR_P16		(1 << 16)
/** PIOA_PIO_OWDR_P15 Output Write Disable **/
#define PIOA_PIO_OWDR_P15		(1 << 15)
/** PIOA_PIO_OWDR_P14 Output Write Disable **/
#define PIOA_PIO_OWDR_P14		(1 << 14)
/** PIOA_PIO_OWDR_P13 Output Write Disable **/
#define PIOA_PIO_OWDR_P13		(1 << 13)
/** PIOA_PIO_OWDR_P12 Output Write Disable **/
#define PIOA_PIO_OWDR_P12		(1 << 12)
/** PIOA_PIO_OWDR_P11 Output Write Disable **/
#define PIOA_PIO_OWDR_P11		(1 << 11)
/** PIOA_PIO_OWDR_P10 Output Write Disable **/
#define PIOA_PIO_OWDR_P10		(1 << 10)
/** PIOA_PIO_OWDR_P9 Output Write Disable **/
#define PIOA_PIO_OWDR_P9		(1 << 9)
/** PIOA_PIO_OWDR_P8 Output Write Disable **/
#define PIOA_PIO_OWDR_P8		(1 << 8)
/** PIOA_PIO_OWDR_P7 Output Write Disable **/
#define PIOA_PIO_OWDR_P7		(1 << 7)
/** PIOA_PIO_OWDR_P6 Output Write Disable **/
#define PIOA_PIO_OWDR_P6		(1 << 6)
/** PIOA_PIO_OWDR_P5 Output Write Disable **/
#define PIOA_PIO_OWDR_P5		(1 << 5)
/** PIOA_PIO_OWDR_P4 Output Write Disable **/
#define PIOA_PIO_OWDR_P4		(1 << 4)
/** PIOA_PIO_OWDR_P3 Output Write Disable **/
#define PIOA_PIO_OWDR_P3		(1 << 3)
/** PIOA_PIO_OWDR_P2 Output Write Disable **/
#define PIOA_PIO_OWDR_P2		(1 << 2)
/** PIOA_PIO_OWDR_P1 Output Write Disable **/
#define PIOA_PIO_OWDR_P1		(1 << 1)
/** PIOA_PIO_OWDR_P0 Output Write Disable **/
#define PIOA_PIO_OWDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_owsr PIOOWSR Output Write Status Register
@{*/

/** PIOA_PIO_OWSR_P31 Output Write Status **/
#define PIOA_PIO_OWSR_P31		(1 << 31)
/** PIOA_PIO_OWSR_P30 Output Write Status **/
#define PIOA_PIO_OWSR_P30		(1 << 30)
/** PIOA_PIO_OWSR_P29 Output Write Status **/
#define PIOA_PIO_OWSR_P29		(1 << 29)
/** PIOA_PIO_OWSR_P28 Output Write Status **/
#define PIOA_PIO_OWSR_P28		(1 << 28)
/** PIOA_PIO_OWSR_P27 Output Write Status **/
#define PIOA_PIO_OWSR_P27		(1 << 27)
/** PIOA_PIO_OWSR_P26 Output Write Status **/
#define PIOA_PIO_OWSR_P26		(1 << 26)
/** PIOA_PIO_OWSR_P25 Output Write Status **/
#define PIOA_PIO_OWSR_P25		(1 << 25)
/** PIOA_PIO_OWSR_P24 Output Write Status **/
#define PIOA_PIO_OWSR_P24		(1 << 24)
/** PIOA_PIO_OWSR_P23 Output Write Status **/
#define PIOA_PIO_OWSR_P23		(1 << 23)
/** PIOA_PIO_OWSR_P22 Output Write Status **/
#define PIOA_PIO_OWSR_P22		(1 << 22)
/** PIOA_PIO_OWSR_P21 Output Write Status **/
#define PIOA_PIO_OWSR_P21		(1 << 21)
/** PIOA_PIO_OWSR_P20 Output Write Status **/
#define PIOA_PIO_OWSR_P20		(1 << 20)
/** PIOA_PIO_OWSR_P19 Output Write Status **/
#define PIOA_PIO_OWSR_P19		(1 << 19)
/** PIOA_PIO_OWSR_P18 Output Write Status **/
#define PIOA_PIO_OWSR_P18		(1 << 18)
/** PIOA_PIO_OWSR_P17 Output Write Status **/
#define PIOA_PIO_OWSR_P17		(1 << 17)
/** PIOA_PIO_OWSR_P16 Output Write Status **/
#define PIOA_PIO_OWSR_P16		(1 << 16)
/** PIOA_PIO_OWSR_P15 Output Write Status **/
#define PIOA_PIO_OWSR_P15		(1 << 15)
/** PIOA_PIO_OWSR_P14 Output Write Status **/
#define PIOA_PIO_OWSR_P14		(1 << 14)
/** PIOA_PIO_OWSR_P13 Output Write Status **/
#define PIOA_PIO_OWSR_P13		(1 << 13)
/** PIOA_PIO_OWSR_P12 Output Write Status **/
#define PIOA_PIO_OWSR_P12		(1 << 12)
/** PIOA_PIO_OWSR_P11 Output Write Status **/
#define PIOA_PIO_OWSR_P11		(1 << 11)
/** PIOA_PIO_OWSR_P10 Output Write Status **/
#define PIOA_PIO_OWSR_P10		(1 << 10)
/** PIOA_PIO_OWSR_P9 Output Write Status **/
#define PIOA_PIO_OWSR_P9		(1 << 9)
/** PIOA_PIO_OWSR_P8 Output Write Status **/
#define PIOA_PIO_OWSR_P8		(1 << 8)
/** PIOA_PIO_OWSR_P7 Output Write Status **/
#define PIOA_PIO_OWSR_P7		(1 << 7)
/** PIOA_PIO_OWSR_P6 Output Write Status **/
#define PIOA_PIO_OWSR_P6		(1 << 6)
/** PIOA_PIO_OWSR_P5 Output Write Status **/
#define PIOA_PIO_OWSR_P5		(1 << 5)
/** PIOA_PIO_OWSR_P4 Output Write Status **/
#define PIOA_PIO_OWSR_P4		(1 << 4)
/** PIOA_PIO_OWSR_P3 Output Write Status **/
#define PIOA_PIO_OWSR_P3		(1 << 3)
/** PIOA_PIO_OWSR_P2 Output Write Status **/
#define PIOA_PIO_OWSR_P2		(1 << 2)
/** PIOA_PIO_OWSR_P1 Output Write Status **/
#define PIOA_PIO_OWSR_P1		(1 << 1)
/** PIOA_PIO_OWSR_P0 Output Write Status **/
#define PIOA_PIO_OWSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_aimer PIOAIMER Additional Interrupt Modes Enable Register
@{*/

/** PIOA_PIO_AIMER_P31 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P31		(1 << 31)
/** PIOA_PIO_AIMER_P30 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P30		(1 << 30)
/** PIOA_PIO_AIMER_P29 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P29		(1 << 29)
/** PIOA_PIO_AIMER_P28 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P28		(1 << 28)
/** PIOA_PIO_AIMER_P27 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P27		(1 << 27)
/** PIOA_PIO_AIMER_P26 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P26		(1 << 26)
/** PIOA_PIO_AIMER_P25 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P25		(1 << 25)
/** PIOA_PIO_AIMER_P24 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P24		(1 << 24)
/** PIOA_PIO_AIMER_P23 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P23		(1 << 23)
/** PIOA_PIO_AIMER_P22 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P22		(1 << 22)
/** PIOA_PIO_AIMER_P21 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P21		(1 << 21)
/** PIOA_PIO_AIMER_P20 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P20		(1 << 20)
/** PIOA_PIO_AIMER_P19 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P19		(1 << 19)
/** PIOA_PIO_AIMER_P18 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P18		(1 << 18)
/** PIOA_PIO_AIMER_P17 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P17		(1 << 17)
/** PIOA_PIO_AIMER_P16 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P16		(1 << 16)
/** PIOA_PIO_AIMER_P15 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P15		(1 << 15)
/** PIOA_PIO_AIMER_P14 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P14		(1 << 14)
/** PIOA_PIO_AIMER_P13 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P13		(1 << 13)
/** PIOA_PIO_AIMER_P12 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P12		(1 << 12)
/** PIOA_PIO_AIMER_P11 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P11		(1 << 11)
/** PIOA_PIO_AIMER_P10 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P10		(1 << 10)
/** PIOA_PIO_AIMER_P9 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P9		(1 << 9)
/** PIOA_PIO_AIMER_P8 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P8		(1 << 8)
/** PIOA_PIO_AIMER_P7 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P7		(1 << 7)
/** PIOA_PIO_AIMER_P6 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P6		(1 << 6)
/** PIOA_PIO_AIMER_P5 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P5		(1 << 5)
/** PIOA_PIO_AIMER_P4 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P4		(1 << 4)
/** PIOA_PIO_AIMER_P3 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P3		(1 << 3)
/** PIOA_PIO_AIMER_P2 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P2		(1 << 2)
/** PIOA_PIO_AIMER_P1 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P1		(1 << 1)
/** PIOA_PIO_AIMER_P0 Additional Interrupt Modes Enable **/
#define PIOA_PIO_AIMER_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_aimdr PIOAIMDR Additional Interrupt Modes Disable Register
@{*/

/** PIOA_PIO_AIMDR_P31 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P31		(1 << 31)
/** PIOA_PIO_AIMDR_P30 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P30		(1 << 30)
/** PIOA_PIO_AIMDR_P29 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P29		(1 << 29)
/** PIOA_PIO_AIMDR_P28 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P28		(1 << 28)
/** PIOA_PIO_AIMDR_P27 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P27		(1 << 27)
/** PIOA_PIO_AIMDR_P26 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P26		(1 << 26)
/** PIOA_PIO_AIMDR_P25 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P25		(1 << 25)
/** PIOA_PIO_AIMDR_P24 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P24		(1 << 24)
/** PIOA_PIO_AIMDR_P23 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P23		(1 << 23)
/** PIOA_PIO_AIMDR_P22 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P22		(1 << 22)
/** PIOA_PIO_AIMDR_P21 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P21		(1 << 21)
/** PIOA_PIO_AIMDR_P20 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P20		(1 << 20)
/** PIOA_PIO_AIMDR_P19 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P19		(1 << 19)
/** PIOA_PIO_AIMDR_P18 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P18		(1 << 18)
/** PIOA_PIO_AIMDR_P17 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P17		(1 << 17)
/** PIOA_PIO_AIMDR_P16 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P16		(1 << 16)
/** PIOA_PIO_AIMDR_P15 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P15		(1 << 15)
/** PIOA_PIO_AIMDR_P14 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P14		(1 << 14)
/** PIOA_PIO_AIMDR_P13 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P13		(1 << 13)
/** PIOA_PIO_AIMDR_P12 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P12		(1 << 12)
/** PIOA_PIO_AIMDR_P11 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P11		(1 << 11)
/** PIOA_PIO_AIMDR_P10 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P10		(1 << 10)
/** PIOA_PIO_AIMDR_P9 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P9		(1 << 9)
/** PIOA_PIO_AIMDR_P8 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P8		(1 << 8)
/** PIOA_PIO_AIMDR_P7 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P7		(1 << 7)
/** PIOA_PIO_AIMDR_P6 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P6		(1 << 6)
/** PIOA_PIO_AIMDR_P5 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P5		(1 << 5)
/** PIOA_PIO_AIMDR_P4 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P4		(1 << 4)
/** PIOA_PIO_AIMDR_P3 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P3		(1 << 3)
/** PIOA_PIO_AIMDR_P2 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P2		(1 << 2)
/** PIOA_PIO_AIMDR_P1 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P1		(1 << 1)
/** PIOA_PIO_AIMDR_P0 Additional Interrupt Modes Disable **/
#define PIOA_PIO_AIMDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_aimmr PIOAIMMR Additional Interrupt Modes Mask Register
@{*/

/** PIOA_PIO_AIMMR_P31 IO Line Index **/
#define PIOA_PIO_AIMMR_P31		(1 << 31)
/** PIOA_PIO_AIMMR_P30 IO Line Index **/
#define PIOA_PIO_AIMMR_P30		(1 << 30)
/** PIOA_PIO_AIMMR_P29 IO Line Index **/
#define PIOA_PIO_AIMMR_P29		(1 << 29)
/** PIOA_PIO_AIMMR_P28 IO Line Index **/
#define PIOA_PIO_AIMMR_P28		(1 << 28)
/** PIOA_PIO_AIMMR_P27 IO Line Index **/
#define PIOA_PIO_AIMMR_P27		(1 << 27)
/** PIOA_PIO_AIMMR_P26 IO Line Index **/
#define PIOA_PIO_AIMMR_P26		(1 << 26)
/** PIOA_PIO_AIMMR_P25 IO Line Index **/
#define PIOA_PIO_AIMMR_P25		(1 << 25)
/** PIOA_PIO_AIMMR_P24 IO Line Index **/
#define PIOA_PIO_AIMMR_P24		(1 << 24)
/** PIOA_PIO_AIMMR_P23 IO Line Index **/
#define PIOA_PIO_AIMMR_P23		(1 << 23)
/** PIOA_PIO_AIMMR_P22 IO Line Index **/
#define PIOA_PIO_AIMMR_P22		(1 << 22)
/** PIOA_PIO_AIMMR_P21 IO Line Index **/
#define PIOA_PIO_AIMMR_P21		(1 << 21)
/** PIOA_PIO_AIMMR_P20 IO Line Index **/
#define PIOA_PIO_AIMMR_P20		(1 << 20)
/** PIOA_PIO_AIMMR_P19 IO Line Index **/
#define PIOA_PIO_AIMMR_P19		(1 << 19)
/** PIOA_PIO_AIMMR_P18 IO Line Index **/
#define PIOA_PIO_AIMMR_P18		(1 << 18)
/** PIOA_PIO_AIMMR_P17 IO Line Index **/
#define PIOA_PIO_AIMMR_P17		(1 << 17)
/** PIOA_PIO_AIMMR_P16 IO Line Index **/
#define PIOA_PIO_AIMMR_P16		(1 << 16)
/** PIOA_PIO_AIMMR_P15 IO Line Index **/
#define PIOA_PIO_AIMMR_P15		(1 << 15)
/** PIOA_PIO_AIMMR_P14 IO Line Index **/
#define PIOA_PIO_AIMMR_P14		(1 << 14)
/** PIOA_PIO_AIMMR_P13 IO Line Index **/
#define PIOA_PIO_AIMMR_P13		(1 << 13)
/** PIOA_PIO_AIMMR_P12 IO Line Index **/
#define PIOA_PIO_AIMMR_P12		(1 << 12)
/** PIOA_PIO_AIMMR_P11 IO Line Index **/
#define PIOA_PIO_AIMMR_P11		(1 << 11)
/** PIOA_PIO_AIMMR_P10 IO Line Index **/
#define PIOA_PIO_AIMMR_P10		(1 << 10)
/** PIOA_PIO_AIMMR_P9 IO Line Index **/
#define PIOA_PIO_AIMMR_P9		(1 << 9)
/** PIOA_PIO_AIMMR_P8 IO Line Index **/
#define PIOA_PIO_AIMMR_P8		(1 << 8)
/** PIOA_PIO_AIMMR_P7 IO Line Index **/
#define PIOA_PIO_AIMMR_P7		(1 << 7)
/** PIOA_PIO_AIMMR_P6 IO Line Index **/
#define PIOA_PIO_AIMMR_P6		(1 << 6)
/** PIOA_PIO_AIMMR_P5 IO Line Index **/
#define PIOA_PIO_AIMMR_P5		(1 << 5)
/** PIOA_PIO_AIMMR_P4 IO Line Index **/
#define PIOA_PIO_AIMMR_P4		(1 << 4)
/** PIOA_PIO_AIMMR_P3 IO Line Index **/
#define PIOA_PIO_AIMMR_P3		(1 << 3)
/** PIOA_PIO_AIMMR_P2 IO Line Index **/
#define PIOA_PIO_AIMMR_P2		(1 << 2)
/** PIOA_PIO_AIMMR_P1 IO Line Index **/
#define PIOA_PIO_AIMMR_P1		(1 << 1)
/** PIOA_PIO_AIMMR_P0 IO Line Index **/
#define PIOA_PIO_AIMMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_esr PIOESR Edge Select Register
@{*/

/** PIOA_PIO_ESR_P31 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P31		(1 << 31)
/** PIOA_PIO_ESR_P30 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P30		(1 << 30)
/** PIOA_PIO_ESR_P29 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P29		(1 << 29)
/** PIOA_PIO_ESR_P28 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P28		(1 << 28)
/** PIOA_PIO_ESR_P27 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P27		(1 << 27)
/** PIOA_PIO_ESR_P26 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P26		(1 << 26)
/** PIOA_PIO_ESR_P25 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P25		(1 << 25)
/** PIOA_PIO_ESR_P24 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P24		(1 << 24)
/** PIOA_PIO_ESR_P23 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P23		(1 << 23)
/** PIOA_PIO_ESR_P22 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P22		(1 << 22)
/** PIOA_PIO_ESR_P21 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P21		(1 << 21)
/** PIOA_PIO_ESR_P20 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P20		(1 << 20)
/** PIOA_PIO_ESR_P19 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P19		(1 << 19)
/** PIOA_PIO_ESR_P18 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P18		(1 << 18)
/** PIOA_PIO_ESR_P17 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P17		(1 << 17)
/** PIOA_PIO_ESR_P16 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P16		(1 << 16)
/** PIOA_PIO_ESR_P15 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P15		(1 << 15)
/** PIOA_PIO_ESR_P14 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P14		(1 << 14)
/** PIOA_PIO_ESR_P13 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P13		(1 << 13)
/** PIOA_PIO_ESR_P12 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P12		(1 << 12)
/** PIOA_PIO_ESR_P11 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P11		(1 << 11)
/** PIOA_PIO_ESR_P10 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P10		(1 << 10)
/** PIOA_PIO_ESR_P9 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P9		(1 << 9)
/** PIOA_PIO_ESR_P8 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P8		(1 << 8)
/** PIOA_PIO_ESR_P7 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P7		(1 << 7)
/** PIOA_PIO_ESR_P6 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P6		(1 << 6)
/** PIOA_PIO_ESR_P5 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P5		(1 << 5)
/** PIOA_PIO_ESR_P4 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P4		(1 << 4)
/** PIOA_PIO_ESR_P3 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P3		(1 << 3)
/** PIOA_PIO_ESR_P2 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P2		(1 << 2)
/** PIOA_PIO_ESR_P1 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P1		(1 << 1)
/** PIOA_PIO_ESR_P0 Edge Interrupt Selection **/
#define PIOA_PIO_ESR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_lsr PIOLSR Level Select Register
@{*/

/** PIOA_PIO_LSR_P31 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P31		(1 << 31)
/** PIOA_PIO_LSR_P30 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P30		(1 << 30)
/** PIOA_PIO_LSR_P29 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P29		(1 << 29)
/** PIOA_PIO_LSR_P28 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P28		(1 << 28)
/** PIOA_PIO_LSR_P27 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P27		(1 << 27)
/** PIOA_PIO_LSR_P26 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P26		(1 << 26)
/** PIOA_PIO_LSR_P25 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P25		(1 << 25)
/** PIOA_PIO_LSR_P24 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P24		(1 << 24)
/** PIOA_PIO_LSR_P23 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P23		(1 << 23)
/** PIOA_PIO_LSR_P22 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P22		(1 << 22)
/** PIOA_PIO_LSR_P21 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P21		(1 << 21)
/** PIOA_PIO_LSR_P20 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P20		(1 << 20)
/** PIOA_PIO_LSR_P19 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P19		(1 << 19)
/** PIOA_PIO_LSR_P18 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P18		(1 << 18)
/** PIOA_PIO_LSR_P17 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P17		(1 << 17)
/** PIOA_PIO_LSR_P16 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P16		(1 << 16)
/** PIOA_PIO_LSR_P15 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P15		(1 << 15)
/** PIOA_PIO_LSR_P14 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P14		(1 << 14)
/** PIOA_PIO_LSR_P13 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P13		(1 << 13)
/** PIOA_PIO_LSR_P12 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P12		(1 << 12)
/** PIOA_PIO_LSR_P11 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P11		(1 << 11)
/** PIOA_PIO_LSR_P10 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P10		(1 << 10)
/** PIOA_PIO_LSR_P9 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P9		(1 << 9)
/** PIOA_PIO_LSR_P8 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P8		(1 << 8)
/** PIOA_PIO_LSR_P7 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P7		(1 << 7)
/** PIOA_PIO_LSR_P6 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P6		(1 << 6)
/** PIOA_PIO_LSR_P5 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P5		(1 << 5)
/** PIOA_PIO_LSR_P4 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P4		(1 << 4)
/** PIOA_PIO_LSR_P3 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P3		(1 << 3)
/** PIOA_PIO_LSR_P2 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P2		(1 << 2)
/** PIOA_PIO_LSR_P1 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P1		(1 << 1)
/** PIOA_PIO_LSR_P0 Level Interrupt Selection **/
#define PIOA_PIO_LSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_elsr PIOELSR Edge/Level Status Register
@{*/

/** PIOA_PIO_ELSR_P31 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P31		(1 << 31)
/** PIOA_PIO_ELSR_P30 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P30		(1 << 30)
/** PIOA_PIO_ELSR_P29 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P29		(1 << 29)
/** PIOA_PIO_ELSR_P28 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P28		(1 << 28)
/** PIOA_PIO_ELSR_P27 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P27		(1 << 27)
/** PIOA_PIO_ELSR_P26 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P26		(1 << 26)
/** PIOA_PIO_ELSR_P25 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P25		(1 << 25)
/** PIOA_PIO_ELSR_P24 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P24		(1 << 24)
/** PIOA_PIO_ELSR_P23 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P23		(1 << 23)
/** PIOA_PIO_ELSR_P22 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P22		(1 << 22)
/** PIOA_PIO_ELSR_P21 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P21		(1 << 21)
/** PIOA_PIO_ELSR_P20 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P20		(1 << 20)
/** PIOA_PIO_ELSR_P19 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P19		(1 << 19)
/** PIOA_PIO_ELSR_P18 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P18		(1 << 18)
/** PIOA_PIO_ELSR_P17 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P17		(1 << 17)
/** PIOA_PIO_ELSR_P16 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P16		(1 << 16)
/** PIOA_PIO_ELSR_P15 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P15		(1 << 15)
/** PIOA_PIO_ELSR_P14 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P14		(1 << 14)
/** PIOA_PIO_ELSR_P13 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P13		(1 << 13)
/** PIOA_PIO_ELSR_P12 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P12		(1 << 12)
/** PIOA_PIO_ELSR_P11 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P11		(1 << 11)
/** PIOA_PIO_ELSR_P10 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P10		(1 << 10)
/** PIOA_PIO_ELSR_P9 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P9		(1 << 9)
/** PIOA_PIO_ELSR_P8 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P8		(1 << 8)
/** PIOA_PIO_ELSR_P7 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P7		(1 << 7)
/** PIOA_PIO_ELSR_P6 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P6		(1 << 6)
/** PIOA_PIO_ELSR_P5 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P5		(1 << 5)
/** PIOA_PIO_ELSR_P4 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P4		(1 << 4)
/** PIOA_PIO_ELSR_P3 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P3		(1 << 3)
/** PIOA_PIO_ELSR_P2 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P2		(1 << 2)
/** PIOA_PIO_ELSR_P1 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P1		(1 << 1)
/** PIOA_PIO_ELSR_P0 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_ELSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_fellsr PIOFELLSR Falling Edge/Low-Level Select Register
@{*/

/** PIOA_PIO_FELLSR_P31 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P31		(1 << 31)
/** PIOA_PIO_FELLSR_P30 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P30		(1 << 30)
/** PIOA_PIO_FELLSR_P29 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P29		(1 << 29)
/** PIOA_PIO_FELLSR_P28 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P28		(1 << 28)
/** PIOA_PIO_FELLSR_P27 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P27		(1 << 27)
/** PIOA_PIO_FELLSR_P26 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P26		(1 << 26)
/** PIOA_PIO_FELLSR_P25 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P25		(1 << 25)
/** PIOA_PIO_FELLSR_P24 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P24		(1 << 24)
/** PIOA_PIO_FELLSR_P23 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P23		(1 << 23)
/** PIOA_PIO_FELLSR_P22 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P22		(1 << 22)
/** PIOA_PIO_FELLSR_P21 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P21		(1 << 21)
/** PIOA_PIO_FELLSR_P20 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P20		(1 << 20)
/** PIOA_PIO_FELLSR_P19 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P19		(1 << 19)
/** PIOA_PIO_FELLSR_P18 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P18		(1 << 18)
/** PIOA_PIO_FELLSR_P17 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P17		(1 << 17)
/** PIOA_PIO_FELLSR_P16 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P16		(1 << 16)
/** PIOA_PIO_FELLSR_P15 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P15		(1 << 15)
/** PIOA_PIO_FELLSR_P14 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P14		(1 << 14)
/** PIOA_PIO_FELLSR_P13 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P13		(1 << 13)
/** PIOA_PIO_FELLSR_P12 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P12		(1 << 12)
/** PIOA_PIO_FELLSR_P11 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P11		(1 << 11)
/** PIOA_PIO_FELLSR_P10 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P10		(1 << 10)
/** PIOA_PIO_FELLSR_P9 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P9		(1 << 9)
/** PIOA_PIO_FELLSR_P8 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P8		(1 << 8)
/** PIOA_PIO_FELLSR_P7 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P7		(1 << 7)
/** PIOA_PIO_FELLSR_P6 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P6		(1 << 6)
/** PIOA_PIO_FELLSR_P5 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P5		(1 << 5)
/** PIOA_PIO_FELLSR_P4 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P4		(1 << 4)
/** PIOA_PIO_FELLSR_P3 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P3		(1 << 3)
/** PIOA_PIO_FELLSR_P2 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P2		(1 << 2)
/** PIOA_PIO_FELLSR_P1 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P1		(1 << 1)
/** PIOA_PIO_FELLSR_P0 Falling Edge/Low-Level Interrupt Selection **/
#define PIOA_PIO_FELLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_rehlsr PIOREHLSR Rising Edge/High-Level Select Register
@{*/

/** PIOA_PIO_REHLSR_P31 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P31		(1 << 31)
/** PIOA_PIO_REHLSR_P30 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P30		(1 << 30)
/** PIOA_PIO_REHLSR_P29 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P29		(1 << 29)
/** PIOA_PIO_REHLSR_P28 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P28		(1 << 28)
/** PIOA_PIO_REHLSR_P27 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P27		(1 << 27)
/** PIOA_PIO_REHLSR_P26 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P26		(1 << 26)
/** PIOA_PIO_REHLSR_P25 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P25		(1 << 25)
/** PIOA_PIO_REHLSR_P24 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P24		(1 << 24)
/** PIOA_PIO_REHLSR_P23 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P23		(1 << 23)
/** PIOA_PIO_REHLSR_P22 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P22		(1 << 22)
/** PIOA_PIO_REHLSR_P21 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P21		(1 << 21)
/** PIOA_PIO_REHLSR_P20 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P20		(1 << 20)
/** PIOA_PIO_REHLSR_P19 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P19		(1 << 19)
/** PIOA_PIO_REHLSR_P18 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P18		(1 << 18)
/** PIOA_PIO_REHLSR_P17 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P17		(1 << 17)
/** PIOA_PIO_REHLSR_P16 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P16		(1 << 16)
/** PIOA_PIO_REHLSR_P15 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P15		(1 << 15)
/** PIOA_PIO_REHLSR_P14 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P14		(1 << 14)
/** PIOA_PIO_REHLSR_P13 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P13		(1 << 13)
/** PIOA_PIO_REHLSR_P12 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P12		(1 << 12)
/** PIOA_PIO_REHLSR_P11 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P11		(1 << 11)
/** PIOA_PIO_REHLSR_P10 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P10		(1 << 10)
/** PIOA_PIO_REHLSR_P9 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P9		(1 << 9)
/** PIOA_PIO_REHLSR_P8 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P8		(1 << 8)
/** PIOA_PIO_REHLSR_P7 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P7		(1 << 7)
/** PIOA_PIO_REHLSR_P6 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P6		(1 << 6)
/** PIOA_PIO_REHLSR_P5 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P5		(1 << 5)
/** PIOA_PIO_REHLSR_P4 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P4		(1 << 4)
/** PIOA_PIO_REHLSR_P3 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P3		(1 << 3)
/** PIOA_PIO_REHLSR_P2 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P2		(1 << 2)
/** PIOA_PIO_REHLSR_P1 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P1		(1 << 1)
/** PIOA_PIO_REHLSR_P0 Rising Edge/High-Level Interrupt Selection **/
#define PIOA_PIO_REHLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_frlhsr PIOFRLHSR Fall/Rise - Low/High Status Register
@{*/

/** PIOA_PIO_FRLHSR_P31 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P31		(1 << 31)
/** PIOA_PIO_FRLHSR_P30 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P30		(1 << 30)
/** PIOA_PIO_FRLHSR_P29 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P29		(1 << 29)
/** PIOA_PIO_FRLHSR_P28 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P28		(1 << 28)
/** PIOA_PIO_FRLHSR_P27 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P27		(1 << 27)
/** PIOA_PIO_FRLHSR_P26 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P26		(1 << 26)
/** PIOA_PIO_FRLHSR_P25 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P25		(1 << 25)
/** PIOA_PIO_FRLHSR_P24 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P24		(1 << 24)
/** PIOA_PIO_FRLHSR_P23 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P23		(1 << 23)
/** PIOA_PIO_FRLHSR_P22 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P22		(1 << 22)
/** PIOA_PIO_FRLHSR_P21 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P21		(1 << 21)
/** PIOA_PIO_FRLHSR_P20 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P20		(1 << 20)
/** PIOA_PIO_FRLHSR_P19 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P19		(1 << 19)
/** PIOA_PIO_FRLHSR_P18 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P18		(1 << 18)
/** PIOA_PIO_FRLHSR_P17 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P17		(1 << 17)
/** PIOA_PIO_FRLHSR_P16 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P16		(1 << 16)
/** PIOA_PIO_FRLHSR_P15 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P15		(1 << 15)
/** PIOA_PIO_FRLHSR_P14 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P14		(1 << 14)
/** PIOA_PIO_FRLHSR_P13 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P13		(1 << 13)
/** PIOA_PIO_FRLHSR_P12 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P12		(1 << 12)
/** PIOA_PIO_FRLHSR_P11 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P11		(1 << 11)
/** PIOA_PIO_FRLHSR_P10 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P10		(1 << 10)
/** PIOA_PIO_FRLHSR_P9 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P9		(1 << 9)
/** PIOA_PIO_FRLHSR_P8 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P8		(1 << 8)
/** PIOA_PIO_FRLHSR_P7 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P7		(1 << 7)
/** PIOA_PIO_FRLHSR_P6 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P6		(1 << 6)
/** PIOA_PIO_FRLHSR_P5 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P5		(1 << 5)
/** PIOA_PIO_FRLHSR_P4 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P4		(1 << 4)
/** PIOA_PIO_FRLHSR_P3 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P3		(1 << 3)
/** PIOA_PIO_FRLHSR_P2 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P2		(1 << 2)
/** PIOA_PIO_FRLHSR_P1 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P1		(1 << 1)
/** PIOA_PIO_FRLHSR_P0 Edge/Level Interrupt Source Selection **/
#define PIOA_PIO_FRLHSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_locksr PIOLOCKSR Lock Status
@{*/

/** PIOA_PIO_LOCKSR_P31 Lock Status **/
#define PIOA_PIO_LOCKSR_P31		(1 << 31)
/** PIOA_PIO_LOCKSR_P30 Lock Status **/
#define PIOA_PIO_LOCKSR_P30		(1 << 30)
/** PIOA_PIO_LOCKSR_P29 Lock Status **/
#define PIOA_PIO_LOCKSR_P29		(1 << 29)
/** PIOA_PIO_LOCKSR_P28 Lock Status **/
#define PIOA_PIO_LOCKSR_P28		(1 << 28)
/** PIOA_PIO_LOCKSR_P27 Lock Status **/
#define PIOA_PIO_LOCKSR_P27		(1 << 27)
/** PIOA_PIO_LOCKSR_P26 Lock Status **/
#define PIOA_PIO_LOCKSR_P26		(1 << 26)
/** PIOA_PIO_LOCKSR_P25 Lock Status **/
#define PIOA_PIO_LOCKSR_P25		(1 << 25)
/** PIOA_PIO_LOCKSR_P24 Lock Status **/
#define PIOA_PIO_LOCKSR_P24		(1 << 24)
/** PIOA_PIO_LOCKSR_P23 Lock Status **/
#define PIOA_PIO_LOCKSR_P23		(1 << 23)
/** PIOA_PIO_LOCKSR_P22 Lock Status **/
#define PIOA_PIO_LOCKSR_P22		(1 << 22)
/** PIOA_PIO_LOCKSR_P21 Lock Status **/
#define PIOA_PIO_LOCKSR_P21		(1 << 21)
/** PIOA_PIO_LOCKSR_P20 Lock Status **/
#define PIOA_PIO_LOCKSR_P20		(1 << 20)
/** PIOA_PIO_LOCKSR_P19 Lock Status **/
#define PIOA_PIO_LOCKSR_P19		(1 << 19)
/** PIOA_PIO_LOCKSR_P18 Lock Status **/
#define PIOA_PIO_LOCKSR_P18		(1 << 18)
/** PIOA_PIO_LOCKSR_P17 Lock Status **/
#define PIOA_PIO_LOCKSR_P17		(1 << 17)
/** PIOA_PIO_LOCKSR_P16 Lock Status **/
#define PIOA_PIO_LOCKSR_P16		(1 << 16)
/** PIOA_PIO_LOCKSR_P15 Lock Status **/
#define PIOA_PIO_LOCKSR_P15		(1 << 15)
/** PIOA_PIO_LOCKSR_P14 Lock Status **/
#define PIOA_PIO_LOCKSR_P14		(1 << 14)
/** PIOA_PIO_LOCKSR_P13 Lock Status **/
#define PIOA_PIO_LOCKSR_P13		(1 << 13)
/** PIOA_PIO_LOCKSR_P12 Lock Status **/
#define PIOA_PIO_LOCKSR_P12		(1 << 12)
/** PIOA_PIO_LOCKSR_P11 Lock Status **/
#define PIOA_PIO_LOCKSR_P11		(1 << 11)
/** PIOA_PIO_LOCKSR_P10 Lock Status **/
#define PIOA_PIO_LOCKSR_P10		(1 << 10)
/** PIOA_PIO_LOCKSR_P9 Lock Status **/
#define PIOA_PIO_LOCKSR_P9		(1 << 9)
/** PIOA_PIO_LOCKSR_P8 Lock Status **/
#define PIOA_PIO_LOCKSR_P8		(1 << 8)
/** PIOA_PIO_LOCKSR_P7 Lock Status **/
#define PIOA_PIO_LOCKSR_P7		(1 << 7)
/** PIOA_PIO_LOCKSR_P6 Lock Status **/
#define PIOA_PIO_LOCKSR_P6		(1 << 6)
/** PIOA_PIO_LOCKSR_P5 Lock Status **/
#define PIOA_PIO_LOCKSR_P5		(1 << 5)
/** PIOA_PIO_LOCKSR_P4 Lock Status **/
#define PIOA_PIO_LOCKSR_P4		(1 << 4)
/** PIOA_PIO_LOCKSR_P3 Lock Status **/
#define PIOA_PIO_LOCKSR_P3		(1 << 3)
/** PIOA_PIO_LOCKSR_P2 Lock Status **/
#define PIOA_PIO_LOCKSR_P2		(1 << 2)
/** PIOA_PIO_LOCKSR_P1 Lock Status **/
#define PIOA_PIO_LOCKSR_P1		(1 << 1)
/** PIOA_PIO_LOCKSR_P0 Lock Status **/
#define PIOA_PIO_LOCKSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_wpmr PIOWPMR Write Protection Mode Register
@{*/


#define PIOA_PIO_WPMR_WPKEY_SHIFT		8
#define PIOA_PIO_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pioa_pio_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** PIOA_PIO_WPMR_WPEN Write Protection Enable **/
#define PIOA_PIO_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_wpsr PIOWPSR Write Protection Status Register
@{*/


#define PIOA_PIO_WPSR_WPVSRC_SHIFT		8
#define PIOA_PIO_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pioa_pio_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** PIOA_PIO_WPSR_WPVS Write Protection Violation Status **/
#define PIOA_PIO_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_schmitt PIOSCHMITT Schmitt Trigger Register
@{*/

/** PIOA_PIO_SCHMITT_SCHMITT31 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT31		(1 << 31)
/** PIOA_PIO_SCHMITT_SCHMITT30 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT30		(1 << 30)
/** PIOA_PIO_SCHMITT_SCHMITT29 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT29		(1 << 29)
/** PIOA_PIO_SCHMITT_SCHMITT28 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT28		(1 << 28)
/** PIOA_PIO_SCHMITT_SCHMITT27 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT27		(1 << 27)
/** PIOA_PIO_SCHMITT_SCHMITT26 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT26		(1 << 26)
/** PIOA_PIO_SCHMITT_SCHMITT25 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT25		(1 << 25)
/** PIOA_PIO_SCHMITT_SCHMITT24 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT24		(1 << 24)
/** PIOA_PIO_SCHMITT_SCHMITT23 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT23		(1 << 23)
/** PIOA_PIO_SCHMITT_SCHMITT22 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT22		(1 << 22)
/** PIOA_PIO_SCHMITT_SCHMITT21 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT21		(1 << 21)
/** PIOA_PIO_SCHMITT_SCHMITT20 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT20		(1 << 20)
/** PIOA_PIO_SCHMITT_SCHMITT19 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT19		(1 << 19)
/** PIOA_PIO_SCHMITT_SCHMITT18 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT18		(1 << 18)
/** PIOA_PIO_SCHMITT_SCHMITT17 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT17		(1 << 17)
/** PIOA_PIO_SCHMITT_SCHMITT16 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT16		(1 << 16)
/** PIOA_PIO_SCHMITT_SCHMITT15 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT15		(1 << 15)
/** PIOA_PIO_SCHMITT_SCHMITT14 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT14		(1 << 14)
/** PIOA_PIO_SCHMITT_SCHMITT13 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT13		(1 << 13)
/** PIOA_PIO_SCHMITT_SCHMITT12 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT12		(1 << 12)
/** PIOA_PIO_SCHMITT_SCHMITT11 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT11		(1 << 11)
/** PIOA_PIO_SCHMITT_SCHMITT10 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT10		(1 << 10)
/** PIOA_PIO_SCHMITT_SCHMITT9 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT9		(1 << 9)
/** PIOA_PIO_SCHMITT_SCHMITT8 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT8		(1 << 8)
/** PIOA_PIO_SCHMITT_SCHMITT7 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT7		(1 << 7)
/** PIOA_PIO_SCHMITT_SCHMITT6 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT6		(1 << 6)
/** PIOA_PIO_SCHMITT_SCHMITT5 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT5		(1 << 5)
/** PIOA_PIO_SCHMITT_SCHMITT4 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT4		(1 << 4)
/** PIOA_PIO_SCHMITT_SCHMITT3 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT3		(1 << 3)
/** PIOA_PIO_SCHMITT_SCHMITT2 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT2		(1 << 2)
/** PIOA_PIO_SCHMITT_SCHMITT1 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT1		(1 << 1)
/** PIOA_PIO_SCHMITT_SCHMITT0 Schmitt Trigger Control **/
#define PIOA_PIO_SCHMITT_SCHMITT0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_driver PIODRIVER I/O Drive Register
@{*/

/** PIOA_PIO_DRIVER_LINE31 Drive of PIO Line 31 **/
#define PIOA_PIO_DRIVER_LINE31		(1 << 31)
/** PIOA_PIO_DRIVER_LINE30 Drive of PIO Line 30 **/
#define PIOA_PIO_DRIVER_LINE30		(1 << 30)
/** PIOA_PIO_DRIVER_LINE29 Drive of PIO Line 29 **/
#define PIOA_PIO_DRIVER_LINE29		(1 << 29)
/** PIOA_PIO_DRIVER_LINE28 Drive of PIO Line 28 **/
#define PIOA_PIO_DRIVER_LINE28		(1 << 28)
/** PIOA_PIO_DRIVER_LINE27 Drive of PIO Line 27 **/
#define PIOA_PIO_DRIVER_LINE27		(1 << 27)
/** PIOA_PIO_DRIVER_LINE26 Drive of PIO Line 26 **/
#define PIOA_PIO_DRIVER_LINE26		(1 << 26)
/** PIOA_PIO_DRIVER_LINE25 Drive of PIO Line 25 **/
#define PIOA_PIO_DRIVER_LINE25		(1 << 25)
/** PIOA_PIO_DRIVER_LINE24 Drive of PIO Line 24 **/
#define PIOA_PIO_DRIVER_LINE24		(1 << 24)
/** PIOA_PIO_DRIVER_LINE23 Drive of PIO Line 23 **/
#define PIOA_PIO_DRIVER_LINE23		(1 << 23)
/** PIOA_PIO_DRIVER_LINE22 Drive of PIO Line 22 **/
#define PIOA_PIO_DRIVER_LINE22		(1 << 22)
/** PIOA_PIO_DRIVER_LINE21 Drive of PIO Line 21 **/
#define PIOA_PIO_DRIVER_LINE21		(1 << 21)
/** PIOA_PIO_DRIVER_LINE20 Drive of PIO Line 20 **/
#define PIOA_PIO_DRIVER_LINE20		(1 << 20)
/** PIOA_PIO_DRIVER_LINE19 Drive of PIO Line 19 **/
#define PIOA_PIO_DRIVER_LINE19		(1 << 19)
/** PIOA_PIO_DRIVER_LINE18 Drive of PIO Line 18 **/
#define PIOA_PIO_DRIVER_LINE18		(1 << 18)
/** PIOA_PIO_DRIVER_LINE17 Drive of PIO Line 17 **/
#define PIOA_PIO_DRIVER_LINE17		(1 << 17)
/** PIOA_PIO_DRIVER_LINE16 Drive of PIO Line 16 **/
#define PIOA_PIO_DRIVER_LINE16		(1 << 16)
/** PIOA_PIO_DRIVER_LINE15 Drive of PIO Line 15 **/
#define PIOA_PIO_DRIVER_LINE15		(1 << 15)
/** PIOA_PIO_DRIVER_LINE14 Drive of PIO Line 14 **/
#define PIOA_PIO_DRIVER_LINE14		(1 << 14)
/** PIOA_PIO_DRIVER_LINE13 Drive of PIO Line 13 **/
#define PIOA_PIO_DRIVER_LINE13		(1 << 13)
/** PIOA_PIO_DRIVER_LINE12 Drive of PIO Line 12 **/
#define PIOA_PIO_DRIVER_LINE12		(1 << 12)
/** PIOA_PIO_DRIVER_LINE11 Drive of PIO Line 11 **/
#define PIOA_PIO_DRIVER_LINE11		(1 << 11)
/** PIOA_PIO_DRIVER_LINE10 Drive of PIO Line 10 **/
#define PIOA_PIO_DRIVER_LINE10		(1 << 10)
/** PIOA_PIO_DRIVER_LINE9 Drive of PIO Line 9 **/
#define PIOA_PIO_DRIVER_LINE9		(1 << 9)
/** PIOA_PIO_DRIVER_LINE8 Drive of PIO Line 8 **/
#define PIOA_PIO_DRIVER_LINE8		(1 << 8)
/** PIOA_PIO_DRIVER_LINE7 Drive of PIO Line 7 **/
#define PIOA_PIO_DRIVER_LINE7		(1 << 7)
/** PIOA_PIO_DRIVER_LINE6 Drive of PIO Line 6 **/
#define PIOA_PIO_DRIVER_LINE6		(1 << 6)
/** PIOA_PIO_DRIVER_LINE5 Drive of PIO Line 5 **/
#define PIOA_PIO_DRIVER_LINE5		(1 << 5)
/** PIOA_PIO_DRIVER_LINE4 Drive of PIO Line 4 **/
#define PIOA_PIO_DRIVER_LINE4		(1 << 4)
/** PIOA_PIO_DRIVER_LINE3 Drive of PIO Line 3 **/
#define PIOA_PIO_DRIVER_LINE3		(1 << 3)
/** PIOA_PIO_DRIVER_LINE2 Drive of PIO Line 2 **/
#define PIOA_PIO_DRIVER_LINE2		(1 << 2)
/** PIOA_PIO_DRIVER_LINE1 Drive of PIO Line 1 **/
#define PIOA_PIO_DRIVER_LINE1		(1 << 1)
/** PIOA_PIO_DRIVER_LINE0 Drive of PIO Line 0 **/
#define PIOA_PIO_DRIVER_LINE0		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcmr PIOPCMR Parallel Capture Mode Register
@{*/

/** PIOA_PIO_PCMR_FRSTS Parallel Capture Mode First Sample **/
#define PIOA_PIO_PCMR_FRSTS		(1 << 11)
/** PIOA_PIO_PCMR_HALFS Parallel Capture Mode Half Sampling **/
#define PIOA_PIO_PCMR_HALFS		(1 << 10)
/** PIOA_PIO_PCMR_ALWYS Parallel Capture Mode Always Sampling **/
#define PIOA_PIO_PCMR_ALWYS		(1 << 9)

#define PIOA_PIO_PCMR_DSIZE_SHIFT		4
#define PIOA_PIO_PCMR_DSIZE_MASK		0x03
/** @defgroup pioa_pio_pcmr_dsize DSIZE Parallel Capture Mode Data Size
@{*/
/**@}*/

/** PIOA_PIO_PCMR_PCEN Parallel Capture Mode Enable **/
#define PIOA_PIO_PCMR_PCEN		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcier PIOPCIER Parallel Capture Interrupt Enable Register
@{*/

/** PIOA_PIO_PCIER_RXBUFF Reception Buffer Full Interrupt Enable **/
#define PIOA_PIO_PCIER_RXBUFF		(1 << 3)
/** PIOA_PIO_PCIER_ENDRX End of Reception Transfer Interrupt Enable **/
#define PIOA_PIO_PCIER_ENDRX		(1 << 2)
/** PIOA_PIO_PCIER_OVRE Parallel Capture Mode Overrun Error Interrupt Enable **/
#define PIOA_PIO_PCIER_OVRE		(1 << 1)
/** PIOA_PIO_PCIER_DRDY Parallel Capture Mode Data Ready Interrupt Enable **/
#define PIOA_PIO_PCIER_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcidr PIOPCIDR Parallel Capture Interrupt Disable Register
@{*/

/** PIOA_PIO_PCIDR_RXBUFF Reception Buffer Full Interrupt Disable **/
#define PIOA_PIO_PCIDR_RXBUFF		(1 << 3)
/** PIOA_PIO_PCIDR_ENDRX End of Reception Transfer Interrupt Disable **/
#define PIOA_PIO_PCIDR_ENDRX		(1 << 2)
/** PIOA_PIO_PCIDR_OVRE Parallel Capture Mode Overrun Error Interrupt Disable **/
#define PIOA_PIO_PCIDR_OVRE		(1 << 1)
/** PIOA_PIO_PCIDR_DRDY Parallel Capture Mode Data Ready Interrupt Disable **/
#define PIOA_PIO_PCIDR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcimr PIOPCIMR Parallel Capture Interrupt Mask Register
@{*/

/** PIOA_PIO_PCIMR_RXBUFF Reception Buffer Full Interrupt Mask **/
#define PIOA_PIO_PCIMR_RXBUFF		(1 << 3)
/** PIOA_PIO_PCIMR_ENDRX End of Reception Transfer Interrupt Mask **/
#define PIOA_PIO_PCIMR_ENDRX		(1 << 2)
/** PIOA_PIO_PCIMR_OVRE Parallel Capture Mode Overrun Error Interrupt Mask **/
#define PIOA_PIO_PCIMR_OVRE		(1 << 1)
/** PIOA_PIO_PCIMR_DRDY Parallel Capture Mode Data Ready Interrupt Mask **/
#define PIOA_PIO_PCIMR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcisr PIOPCISR Parallel Capture Interrupt Status Register
@{*/

/** PIOA_PIO_PCISR_OVRE Parallel Capture Mode Overrun Error **/
#define PIOA_PIO_PCISR_OVRE		(1 << 1)
/** PIOA_PIO_PCISR_DRDY Parallel Capture Mode Data Ready **/
#define PIOA_PIO_PCISR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioa_pio_pcrhr PIOPCRHR Parallel Capture Reception Holding Register
@{*/


#define PIOA_PIO_PCRHR_RDATA_SHIFT		0
#define PIOA_PIO_PCRHR_RDATA_MASK		0xffffffff
/** @defgroup pioa_pio_pcrhr_rdata RDATA Parallel Capture Mode Reception Data
@{*/
/**@}*/


/**@}*/

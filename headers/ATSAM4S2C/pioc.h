#pragma once 

/* --- PIOC: Parallel Input/Output Controller C --------------------- */

/** @defgroup pioc_registers Parallel Input/Output Controller C Register
@{*/

/** PIOC_PER PIO Enable Register **/
#define PIOC_PER			MMIO32(PIOC_BASE + 0x00)
/** PIOC_PDR PIO Disable Register **/
#define PIOC_PDR			MMIO32(PIOC_BASE + 0x04)
/** PIOC_PSR PIO Status Register **/
#define PIOC_PSR			MMIO32(PIOC_BASE + 0x08)
/** PIOC_OER Output Enable Register **/
#define PIOC_OER			MMIO32(PIOC_BASE + 0x10)
/** PIOC_ODR Output Disable Register **/
#define PIOC_ODR			MMIO32(PIOC_BASE + 0x14)
/** PIOC_OSR Output Status Register **/
#define PIOC_OSR			MMIO32(PIOC_BASE + 0x18)
/** PIOC_IFER Glitch Input Filter Enable Register **/
#define PIOC_IFER			MMIO32(PIOC_BASE + 0x20)
/** PIOC_IFDR Glitch Input Filter Disable Register **/
#define PIOC_IFDR			MMIO32(PIOC_BASE + 0x24)
/** PIOC_IFSR Glitch Input Filter Status Register **/
#define PIOC_IFSR			MMIO32(PIOC_BASE + 0x28)
/** PIOC_SODR Set Output Data Register **/
#define PIOC_SODR			MMIO32(PIOC_BASE + 0x30)
/** PIOC_CODR Clear Output Data Register **/
#define PIOC_CODR			MMIO32(PIOC_BASE + 0x34)
/** PIOC_ODSR Output Data Status Register **/
#define PIOC_ODSR			MMIO32(PIOC_BASE + 0x38)
/** PIOC_PDSR Pin Data Status Register **/
#define PIOC_PDSR			MMIO32(PIOC_BASE + 0x3c)
/** PIOC_IER Interrupt Enable Register **/
#define PIOC_IER			MMIO32(PIOC_BASE + 0x40)
/** PIOC_IDR Interrupt Disable Register **/
#define PIOC_IDR			MMIO32(PIOC_BASE + 0x44)
/** PIOC_IMR Interrupt Mask Register **/
#define PIOC_IMR			MMIO32(PIOC_BASE + 0x48)
/** PIOC_ISR Interrupt Status Register **/
#define PIOC_ISR			MMIO32(PIOC_BASE + 0x4c)
/** PIOC_MDER Multi-driver Enable Register **/
#define PIOC_MDER			MMIO32(PIOC_BASE + 0x50)
/** PIOC_MDDR Multi-driver Disable Register **/
#define PIOC_MDDR			MMIO32(PIOC_BASE + 0x54)
/** PIOC_MDSR Multi-driver Status Register **/
#define PIOC_MDSR			MMIO32(PIOC_BASE + 0x58)
/** PIOC_PUDR Pull-up Disable Register **/
#define PIOC_PUDR			MMIO32(PIOC_BASE + 0x60)
/** PIOC_PUER Pull-up Enable Register **/
#define PIOC_PUER			MMIO32(PIOC_BASE + 0x64)
/** PIOC_PUSR Pad Pull-up Status Register **/
#define PIOC_PUSR			MMIO32(PIOC_BASE + 0x68)
/** PIOC_ABCDSR[0] Peripheral Select Register **/
#define PIOC_ABCDSR[0]			MMIO32(PIOC_BASE + 0x70)
/** PIOC_ABCDSR[1] Peripheral Select Register **/
#define PIOC_ABCDSR[1]			MMIO32(PIOC_BASE + 0x74)
/** PIOC_IFSCDR Input Filter Slow Clock Disable Register **/
#define PIOC_IFSCDR			MMIO32(PIOC_BASE + 0x80)
/** PIOC_IFSCER Input Filter Slow Clock Enable Register **/
#define PIOC_IFSCER			MMIO32(PIOC_BASE + 0x84)
/** PIOC_IFSCSR Input Filter Slow Clock Status Register **/
#define PIOC_IFSCSR			MMIO32(PIOC_BASE + 0x88)
/** PIOC_SCDR Slow Clock Divider Debouncing Register **/
#define PIOC_SCDR			MMIO32(PIOC_BASE + 0x8c)
/** PIOC_PPDDR Pad Pull-down Disable Register **/
#define PIOC_PPDDR			MMIO32(PIOC_BASE + 0x90)
/** PIOC_PPDER Pad Pull-down Enable Register **/
#define PIOC_PPDER			MMIO32(PIOC_BASE + 0x94)
/** PIOC_PPDSR Pad Pull-down Status Register **/
#define PIOC_PPDSR			MMIO32(PIOC_BASE + 0x98)
/** PIOC_OWER Output Write Enable **/
#define PIOC_OWER			MMIO32(PIOC_BASE + 0xa0)
/** PIOC_OWDR Output Write Disable **/
#define PIOC_OWDR			MMIO32(PIOC_BASE + 0xa4)
/** PIOC_OWSR Output Write Status Register **/
#define PIOC_OWSR			MMIO32(PIOC_BASE + 0xa8)
/** PIOC_AIMER Additional Interrupt Modes Enable Register **/
#define PIOC_AIMER			MMIO32(PIOC_BASE + 0xb0)
/** PIOC_AIMDR Additional Interrupt Modes Disable Register **/
#define PIOC_AIMDR			MMIO32(PIOC_BASE + 0xb4)
/** PIOC_AIMMR Additional Interrupt Modes Mask Register **/
#define PIOC_AIMMR			MMIO32(PIOC_BASE + 0xb8)
/** PIOC_ESR Edge Select Register **/
#define PIOC_ESR			MMIO32(PIOC_BASE + 0xc0)
/** PIOC_LSR Level Select Register **/
#define PIOC_LSR			MMIO32(PIOC_BASE + 0xc4)
/** PIOC_ELSR Edge/Level Status Register **/
#define PIOC_ELSR			MMIO32(PIOC_BASE + 0xc8)
/** PIOC_FELLSR Falling Edge/Low-Level Select Register **/
#define PIOC_FELLSR			MMIO32(PIOC_BASE + 0xd0)
/** PIOC_REHLSR Rising Edge/High-Level Select Register **/
#define PIOC_REHLSR			MMIO32(PIOC_BASE + 0xd4)
/** PIOC_FRLHSR Fall/Rise - Low/High Status Register **/
#define PIOC_FRLHSR			MMIO32(PIOC_BASE + 0xd8)
/** PIOC_LOCKSR Lock Status **/
#define PIOC_LOCKSR			MMIO32(PIOC_BASE + 0xe0)
/** PIOC_WPMR Write Protection Mode Register **/
#define PIOC_WPMR			MMIO32(PIOC_BASE + 0xe4)
/** PIOC_WPSR Write Protection Status Register **/
#define PIOC_WPSR			MMIO32(PIOC_BASE + 0xe8)
/** PIOC_SCHMITT Schmitt Trigger Register **/
#define PIOC_SCHMITT			MMIO32(PIOC_BASE + 0x100)
/** PIOC_PCMR Parallel Capture Mode Register **/
#define PIOC_PCMR			MMIO32(PIOC_BASE + 0x150)
/** PIOC_PCIER Parallel Capture Interrupt Enable Register **/
#define PIOC_PCIER			MMIO32(PIOC_BASE + 0x154)
/** PIOC_PCIDR Parallel Capture Interrupt Disable Register **/
#define PIOC_PCIDR			MMIO32(PIOC_BASE + 0x158)
/** PIOC_PCIMR Parallel Capture Interrupt Mask Register **/
#define PIOC_PCIMR			MMIO32(PIOC_BASE + 0x15c)
/** PIOC_PCISR Parallel Capture Interrupt Status Register **/
#define PIOC_PCISR			MMIO32(PIOC_BASE + 0x160)
/** PIOC_PCRHR Parallel Capture Reception Holding Register **/
#define PIOC_PCRHR			MMIO32(PIOC_BASE + 0x164)

/**@}*/


/** @defgroup pioc_per PER PIO Enable Register
@{*/

/** PIOC_PER_P31 PIO Enable **/
#define PIOC_PER_P31		(1 << 31)
/** PIOC_PER_P30 PIO Enable **/
#define PIOC_PER_P30		(1 << 30)
/** PIOC_PER_P29 PIO Enable **/
#define PIOC_PER_P29		(1 << 29)
/** PIOC_PER_P28 PIO Enable **/
#define PIOC_PER_P28		(1 << 28)
/** PIOC_PER_P27 PIO Enable **/
#define PIOC_PER_P27		(1 << 27)
/** PIOC_PER_P26 PIO Enable **/
#define PIOC_PER_P26		(1 << 26)
/** PIOC_PER_P25 PIO Enable **/
#define PIOC_PER_P25		(1 << 25)
/** PIOC_PER_P24 PIO Enable **/
#define PIOC_PER_P24		(1 << 24)
/** PIOC_PER_P23 PIO Enable **/
#define PIOC_PER_P23		(1 << 23)
/** PIOC_PER_P22 PIO Enable **/
#define PIOC_PER_P22		(1 << 22)
/** PIOC_PER_P21 PIO Enable **/
#define PIOC_PER_P21		(1 << 21)
/** PIOC_PER_P20 PIO Enable **/
#define PIOC_PER_P20		(1 << 20)
/** PIOC_PER_P19 PIO Enable **/
#define PIOC_PER_P19		(1 << 19)
/** PIOC_PER_P18 PIO Enable **/
#define PIOC_PER_P18		(1 << 18)
/** PIOC_PER_P17 PIO Enable **/
#define PIOC_PER_P17		(1 << 17)
/** PIOC_PER_P16 PIO Enable **/
#define PIOC_PER_P16		(1 << 16)
/** PIOC_PER_P15 PIO Enable **/
#define PIOC_PER_P15		(1 << 15)
/** PIOC_PER_P14 PIO Enable **/
#define PIOC_PER_P14		(1 << 14)
/** PIOC_PER_P13 PIO Enable **/
#define PIOC_PER_P13		(1 << 13)
/** PIOC_PER_P12 PIO Enable **/
#define PIOC_PER_P12		(1 << 12)
/** PIOC_PER_P11 PIO Enable **/
#define PIOC_PER_P11		(1 << 11)
/** PIOC_PER_P10 PIO Enable **/
#define PIOC_PER_P10		(1 << 10)
/** PIOC_PER_P9 PIO Enable **/
#define PIOC_PER_P9		(1 << 9)
/** PIOC_PER_P8 PIO Enable **/
#define PIOC_PER_P8		(1 << 8)
/** PIOC_PER_P7 PIO Enable **/
#define PIOC_PER_P7		(1 << 7)
/** PIOC_PER_P6 PIO Enable **/
#define PIOC_PER_P6		(1 << 6)
/** PIOC_PER_P5 PIO Enable **/
#define PIOC_PER_P5		(1 << 5)
/** PIOC_PER_P4 PIO Enable **/
#define PIOC_PER_P4		(1 << 4)
/** PIOC_PER_P3 PIO Enable **/
#define PIOC_PER_P3		(1 << 3)
/** PIOC_PER_P2 PIO Enable **/
#define PIOC_PER_P2		(1 << 2)
/** PIOC_PER_P1 PIO Enable **/
#define PIOC_PER_P1		(1 << 1)
/** PIOC_PER_P0 PIO Enable **/
#define PIOC_PER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_pdr PDR PIO Disable Register
@{*/

/** PIOC_PDR_P31 PIO Disable **/
#define PIOC_PDR_P31		(1 << 31)
/** PIOC_PDR_P30 PIO Disable **/
#define PIOC_PDR_P30		(1 << 30)
/** PIOC_PDR_P29 PIO Disable **/
#define PIOC_PDR_P29		(1 << 29)
/** PIOC_PDR_P28 PIO Disable **/
#define PIOC_PDR_P28		(1 << 28)
/** PIOC_PDR_P27 PIO Disable **/
#define PIOC_PDR_P27		(1 << 27)
/** PIOC_PDR_P26 PIO Disable **/
#define PIOC_PDR_P26		(1 << 26)
/** PIOC_PDR_P25 PIO Disable **/
#define PIOC_PDR_P25		(1 << 25)
/** PIOC_PDR_P24 PIO Disable **/
#define PIOC_PDR_P24		(1 << 24)
/** PIOC_PDR_P23 PIO Disable **/
#define PIOC_PDR_P23		(1 << 23)
/** PIOC_PDR_P22 PIO Disable **/
#define PIOC_PDR_P22		(1 << 22)
/** PIOC_PDR_P21 PIO Disable **/
#define PIOC_PDR_P21		(1 << 21)
/** PIOC_PDR_P20 PIO Disable **/
#define PIOC_PDR_P20		(1 << 20)
/** PIOC_PDR_P19 PIO Disable **/
#define PIOC_PDR_P19		(1 << 19)
/** PIOC_PDR_P18 PIO Disable **/
#define PIOC_PDR_P18		(1 << 18)
/** PIOC_PDR_P17 PIO Disable **/
#define PIOC_PDR_P17		(1 << 17)
/** PIOC_PDR_P16 PIO Disable **/
#define PIOC_PDR_P16		(1 << 16)
/** PIOC_PDR_P15 PIO Disable **/
#define PIOC_PDR_P15		(1 << 15)
/** PIOC_PDR_P14 PIO Disable **/
#define PIOC_PDR_P14		(1 << 14)
/** PIOC_PDR_P13 PIO Disable **/
#define PIOC_PDR_P13		(1 << 13)
/** PIOC_PDR_P12 PIO Disable **/
#define PIOC_PDR_P12		(1 << 12)
/** PIOC_PDR_P11 PIO Disable **/
#define PIOC_PDR_P11		(1 << 11)
/** PIOC_PDR_P10 PIO Disable **/
#define PIOC_PDR_P10		(1 << 10)
/** PIOC_PDR_P9 PIO Disable **/
#define PIOC_PDR_P9		(1 << 9)
/** PIOC_PDR_P8 PIO Disable **/
#define PIOC_PDR_P8		(1 << 8)
/** PIOC_PDR_P7 PIO Disable **/
#define PIOC_PDR_P7		(1 << 7)
/** PIOC_PDR_P6 PIO Disable **/
#define PIOC_PDR_P6		(1 << 6)
/** PIOC_PDR_P5 PIO Disable **/
#define PIOC_PDR_P5		(1 << 5)
/** PIOC_PDR_P4 PIO Disable **/
#define PIOC_PDR_P4		(1 << 4)
/** PIOC_PDR_P3 PIO Disable **/
#define PIOC_PDR_P3		(1 << 3)
/** PIOC_PDR_P2 PIO Disable **/
#define PIOC_PDR_P2		(1 << 2)
/** PIOC_PDR_P1 PIO Disable **/
#define PIOC_PDR_P1		(1 << 1)
/** PIOC_PDR_P0 PIO Disable **/
#define PIOC_PDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_psr PSR PIO Status Register
@{*/

/** PIOC_PSR_P31 PIO Status **/
#define PIOC_PSR_P31		(1 << 31)
/** PIOC_PSR_P30 PIO Status **/
#define PIOC_PSR_P30		(1 << 30)
/** PIOC_PSR_P29 PIO Status **/
#define PIOC_PSR_P29		(1 << 29)
/** PIOC_PSR_P28 PIO Status **/
#define PIOC_PSR_P28		(1 << 28)
/** PIOC_PSR_P27 PIO Status **/
#define PIOC_PSR_P27		(1 << 27)
/** PIOC_PSR_P26 PIO Status **/
#define PIOC_PSR_P26		(1 << 26)
/** PIOC_PSR_P25 PIO Status **/
#define PIOC_PSR_P25		(1 << 25)
/** PIOC_PSR_P24 PIO Status **/
#define PIOC_PSR_P24		(1 << 24)
/** PIOC_PSR_P23 PIO Status **/
#define PIOC_PSR_P23		(1 << 23)
/** PIOC_PSR_P22 PIO Status **/
#define PIOC_PSR_P22		(1 << 22)
/** PIOC_PSR_P21 PIO Status **/
#define PIOC_PSR_P21		(1 << 21)
/** PIOC_PSR_P20 PIO Status **/
#define PIOC_PSR_P20		(1 << 20)
/** PIOC_PSR_P19 PIO Status **/
#define PIOC_PSR_P19		(1 << 19)
/** PIOC_PSR_P18 PIO Status **/
#define PIOC_PSR_P18		(1 << 18)
/** PIOC_PSR_P17 PIO Status **/
#define PIOC_PSR_P17		(1 << 17)
/** PIOC_PSR_P16 PIO Status **/
#define PIOC_PSR_P16		(1 << 16)
/** PIOC_PSR_P15 PIO Status **/
#define PIOC_PSR_P15		(1 << 15)
/** PIOC_PSR_P14 PIO Status **/
#define PIOC_PSR_P14		(1 << 14)
/** PIOC_PSR_P13 PIO Status **/
#define PIOC_PSR_P13		(1 << 13)
/** PIOC_PSR_P12 PIO Status **/
#define PIOC_PSR_P12		(1 << 12)
/** PIOC_PSR_P11 PIO Status **/
#define PIOC_PSR_P11		(1 << 11)
/** PIOC_PSR_P10 PIO Status **/
#define PIOC_PSR_P10		(1 << 10)
/** PIOC_PSR_P9 PIO Status **/
#define PIOC_PSR_P9		(1 << 9)
/** PIOC_PSR_P8 PIO Status **/
#define PIOC_PSR_P8		(1 << 8)
/** PIOC_PSR_P7 PIO Status **/
#define PIOC_PSR_P7		(1 << 7)
/** PIOC_PSR_P6 PIO Status **/
#define PIOC_PSR_P6		(1 << 6)
/** PIOC_PSR_P5 PIO Status **/
#define PIOC_PSR_P5		(1 << 5)
/** PIOC_PSR_P4 PIO Status **/
#define PIOC_PSR_P4		(1 << 4)
/** PIOC_PSR_P3 PIO Status **/
#define PIOC_PSR_P3		(1 << 3)
/** PIOC_PSR_P2 PIO Status **/
#define PIOC_PSR_P2		(1 << 2)
/** PIOC_PSR_P1 PIO Status **/
#define PIOC_PSR_P1		(1 << 1)
/** PIOC_PSR_P0 PIO Status **/
#define PIOC_PSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_oer OER Output Enable Register
@{*/

/** PIOC_OER_P31 Output Enable **/
#define PIOC_OER_P31		(1 << 31)
/** PIOC_OER_P30 Output Enable **/
#define PIOC_OER_P30		(1 << 30)
/** PIOC_OER_P29 Output Enable **/
#define PIOC_OER_P29		(1 << 29)
/** PIOC_OER_P28 Output Enable **/
#define PIOC_OER_P28		(1 << 28)
/** PIOC_OER_P27 Output Enable **/
#define PIOC_OER_P27		(1 << 27)
/** PIOC_OER_P26 Output Enable **/
#define PIOC_OER_P26		(1 << 26)
/** PIOC_OER_P25 Output Enable **/
#define PIOC_OER_P25		(1 << 25)
/** PIOC_OER_P24 Output Enable **/
#define PIOC_OER_P24		(1 << 24)
/** PIOC_OER_P23 Output Enable **/
#define PIOC_OER_P23		(1 << 23)
/** PIOC_OER_P22 Output Enable **/
#define PIOC_OER_P22		(1 << 22)
/** PIOC_OER_P21 Output Enable **/
#define PIOC_OER_P21		(1 << 21)
/** PIOC_OER_P20 Output Enable **/
#define PIOC_OER_P20		(1 << 20)
/** PIOC_OER_P19 Output Enable **/
#define PIOC_OER_P19		(1 << 19)
/** PIOC_OER_P18 Output Enable **/
#define PIOC_OER_P18		(1 << 18)
/** PIOC_OER_P17 Output Enable **/
#define PIOC_OER_P17		(1 << 17)
/** PIOC_OER_P16 Output Enable **/
#define PIOC_OER_P16		(1 << 16)
/** PIOC_OER_P15 Output Enable **/
#define PIOC_OER_P15		(1 << 15)
/** PIOC_OER_P14 Output Enable **/
#define PIOC_OER_P14		(1 << 14)
/** PIOC_OER_P13 Output Enable **/
#define PIOC_OER_P13		(1 << 13)
/** PIOC_OER_P12 Output Enable **/
#define PIOC_OER_P12		(1 << 12)
/** PIOC_OER_P11 Output Enable **/
#define PIOC_OER_P11		(1 << 11)
/** PIOC_OER_P10 Output Enable **/
#define PIOC_OER_P10		(1 << 10)
/** PIOC_OER_P9 Output Enable **/
#define PIOC_OER_P9		(1 << 9)
/** PIOC_OER_P8 Output Enable **/
#define PIOC_OER_P8		(1 << 8)
/** PIOC_OER_P7 Output Enable **/
#define PIOC_OER_P7		(1 << 7)
/** PIOC_OER_P6 Output Enable **/
#define PIOC_OER_P6		(1 << 6)
/** PIOC_OER_P5 Output Enable **/
#define PIOC_OER_P5		(1 << 5)
/** PIOC_OER_P4 Output Enable **/
#define PIOC_OER_P4		(1 << 4)
/** PIOC_OER_P3 Output Enable **/
#define PIOC_OER_P3		(1 << 3)
/** PIOC_OER_P2 Output Enable **/
#define PIOC_OER_P2		(1 << 2)
/** PIOC_OER_P1 Output Enable **/
#define PIOC_OER_P1		(1 << 1)
/** PIOC_OER_P0 Output Enable **/
#define PIOC_OER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_odr ODR Output Disable Register
@{*/

/** PIOC_ODR_P31 Output Disable **/
#define PIOC_ODR_P31		(1 << 31)
/** PIOC_ODR_P30 Output Disable **/
#define PIOC_ODR_P30		(1 << 30)
/** PIOC_ODR_P29 Output Disable **/
#define PIOC_ODR_P29		(1 << 29)
/** PIOC_ODR_P28 Output Disable **/
#define PIOC_ODR_P28		(1 << 28)
/** PIOC_ODR_P27 Output Disable **/
#define PIOC_ODR_P27		(1 << 27)
/** PIOC_ODR_P26 Output Disable **/
#define PIOC_ODR_P26		(1 << 26)
/** PIOC_ODR_P25 Output Disable **/
#define PIOC_ODR_P25		(1 << 25)
/** PIOC_ODR_P24 Output Disable **/
#define PIOC_ODR_P24		(1 << 24)
/** PIOC_ODR_P23 Output Disable **/
#define PIOC_ODR_P23		(1 << 23)
/** PIOC_ODR_P22 Output Disable **/
#define PIOC_ODR_P22		(1 << 22)
/** PIOC_ODR_P21 Output Disable **/
#define PIOC_ODR_P21		(1 << 21)
/** PIOC_ODR_P20 Output Disable **/
#define PIOC_ODR_P20		(1 << 20)
/** PIOC_ODR_P19 Output Disable **/
#define PIOC_ODR_P19		(1 << 19)
/** PIOC_ODR_P18 Output Disable **/
#define PIOC_ODR_P18		(1 << 18)
/** PIOC_ODR_P17 Output Disable **/
#define PIOC_ODR_P17		(1 << 17)
/** PIOC_ODR_P16 Output Disable **/
#define PIOC_ODR_P16		(1 << 16)
/** PIOC_ODR_P15 Output Disable **/
#define PIOC_ODR_P15		(1 << 15)
/** PIOC_ODR_P14 Output Disable **/
#define PIOC_ODR_P14		(1 << 14)
/** PIOC_ODR_P13 Output Disable **/
#define PIOC_ODR_P13		(1 << 13)
/** PIOC_ODR_P12 Output Disable **/
#define PIOC_ODR_P12		(1 << 12)
/** PIOC_ODR_P11 Output Disable **/
#define PIOC_ODR_P11		(1 << 11)
/** PIOC_ODR_P10 Output Disable **/
#define PIOC_ODR_P10		(1 << 10)
/** PIOC_ODR_P9 Output Disable **/
#define PIOC_ODR_P9		(1 << 9)
/** PIOC_ODR_P8 Output Disable **/
#define PIOC_ODR_P8		(1 << 8)
/** PIOC_ODR_P7 Output Disable **/
#define PIOC_ODR_P7		(1 << 7)
/** PIOC_ODR_P6 Output Disable **/
#define PIOC_ODR_P6		(1 << 6)
/** PIOC_ODR_P5 Output Disable **/
#define PIOC_ODR_P5		(1 << 5)
/** PIOC_ODR_P4 Output Disable **/
#define PIOC_ODR_P4		(1 << 4)
/** PIOC_ODR_P3 Output Disable **/
#define PIOC_ODR_P3		(1 << 3)
/** PIOC_ODR_P2 Output Disable **/
#define PIOC_ODR_P2		(1 << 2)
/** PIOC_ODR_P1 Output Disable **/
#define PIOC_ODR_P1		(1 << 1)
/** PIOC_ODR_P0 Output Disable **/
#define PIOC_ODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_osr OSR Output Status Register
@{*/

/** PIOC_OSR_P31 Output Status **/
#define PIOC_OSR_P31		(1 << 31)
/** PIOC_OSR_P30 Output Status **/
#define PIOC_OSR_P30		(1 << 30)
/** PIOC_OSR_P29 Output Status **/
#define PIOC_OSR_P29		(1 << 29)
/** PIOC_OSR_P28 Output Status **/
#define PIOC_OSR_P28		(1 << 28)
/** PIOC_OSR_P27 Output Status **/
#define PIOC_OSR_P27		(1 << 27)
/** PIOC_OSR_P26 Output Status **/
#define PIOC_OSR_P26		(1 << 26)
/** PIOC_OSR_P25 Output Status **/
#define PIOC_OSR_P25		(1 << 25)
/** PIOC_OSR_P24 Output Status **/
#define PIOC_OSR_P24		(1 << 24)
/** PIOC_OSR_P23 Output Status **/
#define PIOC_OSR_P23		(1 << 23)
/** PIOC_OSR_P22 Output Status **/
#define PIOC_OSR_P22		(1 << 22)
/** PIOC_OSR_P21 Output Status **/
#define PIOC_OSR_P21		(1 << 21)
/** PIOC_OSR_P20 Output Status **/
#define PIOC_OSR_P20		(1 << 20)
/** PIOC_OSR_P19 Output Status **/
#define PIOC_OSR_P19		(1 << 19)
/** PIOC_OSR_P18 Output Status **/
#define PIOC_OSR_P18		(1 << 18)
/** PIOC_OSR_P17 Output Status **/
#define PIOC_OSR_P17		(1 << 17)
/** PIOC_OSR_P16 Output Status **/
#define PIOC_OSR_P16		(1 << 16)
/** PIOC_OSR_P15 Output Status **/
#define PIOC_OSR_P15		(1 << 15)
/** PIOC_OSR_P14 Output Status **/
#define PIOC_OSR_P14		(1 << 14)
/** PIOC_OSR_P13 Output Status **/
#define PIOC_OSR_P13		(1 << 13)
/** PIOC_OSR_P12 Output Status **/
#define PIOC_OSR_P12		(1 << 12)
/** PIOC_OSR_P11 Output Status **/
#define PIOC_OSR_P11		(1 << 11)
/** PIOC_OSR_P10 Output Status **/
#define PIOC_OSR_P10		(1 << 10)
/** PIOC_OSR_P9 Output Status **/
#define PIOC_OSR_P9		(1 << 9)
/** PIOC_OSR_P8 Output Status **/
#define PIOC_OSR_P8		(1 << 8)
/** PIOC_OSR_P7 Output Status **/
#define PIOC_OSR_P7		(1 << 7)
/** PIOC_OSR_P6 Output Status **/
#define PIOC_OSR_P6		(1 << 6)
/** PIOC_OSR_P5 Output Status **/
#define PIOC_OSR_P5		(1 << 5)
/** PIOC_OSR_P4 Output Status **/
#define PIOC_OSR_P4		(1 << 4)
/** PIOC_OSR_P3 Output Status **/
#define PIOC_OSR_P3		(1 << 3)
/** PIOC_OSR_P2 Output Status **/
#define PIOC_OSR_P2		(1 << 2)
/** PIOC_OSR_P1 Output Status **/
#define PIOC_OSR_P1		(1 << 1)
/** PIOC_OSR_P0 Output Status **/
#define PIOC_OSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifer IFER Glitch Input Filter Enable Register
@{*/

/** PIOC_IFER_P31 Input Filter Enable **/
#define PIOC_IFER_P31		(1 << 31)
/** PIOC_IFER_P30 Input Filter Enable **/
#define PIOC_IFER_P30		(1 << 30)
/** PIOC_IFER_P29 Input Filter Enable **/
#define PIOC_IFER_P29		(1 << 29)
/** PIOC_IFER_P28 Input Filter Enable **/
#define PIOC_IFER_P28		(1 << 28)
/** PIOC_IFER_P27 Input Filter Enable **/
#define PIOC_IFER_P27		(1 << 27)
/** PIOC_IFER_P26 Input Filter Enable **/
#define PIOC_IFER_P26		(1 << 26)
/** PIOC_IFER_P25 Input Filter Enable **/
#define PIOC_IFER_P25		(1 << 25)
/** PIOC_IFER_P24 Input Filter Enable **/
#define PIOC_IFER_P24		(1 << 24)
/** PIOC_IFER_P23 Input Filter Enable **/
#define PIOC_IFER_P23		(1 << 23)
/** PIOC_IFER_P22 Input Filter Enable **/
#define PIOC_IFER_P22		(1 << 22)
/** PIOC_IFER_P21 Input Filter Enable **/
#define PIOC_IFER_P21		(1 << 21)
/** PIOC_IFER_P20 Input Filter Enable **/
#define PIOC_IFER_P20		(1 << 20)
/** PIOC_IFER_P19 Input Filter Enable **/
#define PIOC_IFER_P19		(1 << 19)
/** PIOC_IFER_P18 Input Filter Enable **/
#define PIOC_IFER_P18		(1 << 18)
/** PIOC_IFER_P17 Input Filter Enable **/
#define PIOC_IFER_P17		(1 << 17)
/** PIOC_IFER_P16 Input Filter Enable **/
#define PIOC_IFER_P16		(1 << 16)
/** PIOC_IFER_P15 Input Filter Enable **/
#define PIOC_IFER_P15		(1 << 15)
/** PIOC_IFER_P14 Input Filter Enable **/
#define PIOC_IFER_P14		(1 << 14)
/** PIOC_IFER_P13 Input Filter Enable **/
#define PIOC_IFER_P13		(1 << 13)
/** PIOC_IFER_P12 Input Filter Enable **/
#define PIOC_IFER_P12		(1 << 12)
/** PIOC_IFER_P11 Input Filter Enable **/
#define PIOC_IFER_P11		(1 << 11)
/** PIOC_IFER_P10 Input Filter Enable **/
#define PIOC_IFER_P10		(1 << 10)
/** PIOC_IFER_P9 Input Filter Enable **/
#define PIOC_IFER_P9		(1 << 9)
/** PIOC_IFER_P8 Input Filter Enable **/
#define PIOC_IFER_P8		(1 << 8)
/** PIOC_IFER_P7 Input Filter Enable **/
#define PIOC_IFER_P7		(1 << 7)
/** PIOC_IFER_P6 Input Filter Enable **/
#define PIOC_IFER_P6		(1 << 6)
/** PIOC_IFER_P5 Input Filter Enable **/
#define PIOC_IFER_P5		(1 << 5)
/** PIOC_IFER_P4 Input Filter Enable **/
#define PIOC_IFER_P4		(1 << 4)
/** PIOC_IFER_P3 Input Filter Enable **/
#define PIOC_IFER_P3		(1 << 3)
/** PIOC_IFER_P2 Input Filter Enable **/
#define PIOC_IFER_P2		(1 << 2)
/** PIOC_IFER_P1 Input Filter Enable **/
#define PIOC_IFER_P1		(1 << 1)
/** PIOC_IFER_P0 Input Filter Enable **/
#define PIOC_IFER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifdr IFDR Glitch Input Filter Disable Register
@{*/

/** PIOC_IFDR_P31 Input Filter Disable **/
#define PIOC_IFDR_P31		(1 << 31)
/** PIOC_IFDR_P30 Input Filter Disable **/
#define PIOC_IFDR_P30		(1 << 30)
/** PIOC_IFDR_P29 Input Filter Disable **/
#define PIOC_IFDR_P29		(1 << 29)
/** PIOC_IFDR_P28 Input Filter Disable **/
#define PIOC_IFDR_P28		(1 << 28)
/** PIOC_IFDR_P27 Input Filter Disable **/
#define PIOC_IFDR_P27		(1 << 27)
/** PIOC_IFDR_P26 Input Filter Disable **/
#define PIOC_IFDR_P26		(1 << 26)
/** PIOC_IFDR_P25 Input Filter Disable **/
#define PIOC_IFDR_P25		(1 << 25)
/** PIOC_IFDR_P24 Input Filter Disable **/
#define PIOC_IFDR_P24		(1 << 24)
/** PIOC_IFDR_P23 Input Filter Disable **/
#define PIOC_IFDR_P23		(1 << 23)
/** PIOC_IFDR_P22 Input Filter Disable **/
#define PIOC_IFDR_P22		(1 << 22)
/** PIOC_IFDR_P21 Input Filter Disable **/
#define PIOC_IFDR_P21		(1 << 21)
/** PIOC_IFDR_P20 Input Filter Disable **/
#define PIOC_IFDR_P20		(1 << 20)
/** PIOC_IFDR_P19 Input Filter Disable **/
#define PIOC_IFDR_P19		(1 << 19)
/** PIOC_IFDR_P18 Input Filter Disable **/
#define PIOC_IFDR_P18		(1 << 18)
/** PIOC_IFDR_P17 Input Filter Disable **/
#define PIOC_IFDR_P17		(1 << 17)
/** PIOC_IFDR_P16 Input Filter Disable **/
#define PIOC_IFDR_P16		(1 << 16)
/** PIOC_IFDR_P15 Input Filter Disable **/
#define PIOC_IFDR_P15		(1 << 15)
/** PIOC_IFDR_P14 Input Filter Disable **/
#define PIOC_IFDR_P14		(1 << 14)
/** PIOC_IFDR_P13 Input Filter Disable **/
#define PIOC_IFDR_P13		(1 << 13)
/** PIOC_IFDR_P12 Input Filter Disable **/
#define PIOC_IFDR_P12		(1 << 12)
/** PIOC_IFDR_P11 Input Filter Disable **/
#define PIOC_IFDR_P11		(1 << 11)
/** PIOC_IFDR_P10 Input Filter Disable **/
#define PIOC_IFDR_P10		(1 << 10)
/** PIOC_IFDR_P9 Input Filter Disable **/
#define PIOC_IFDR_P9		(1 << 9)
/** PIOC_IFDR_P8 Input Filter Disable **/
#define PIOC_IFDR_P8		(1 << 8)
/** PIOC_IFDR_P7 Input Filter Disable **/
#define PIOC_IFDR_P7		(1 << 7)
/** PIOC_IFDR_P6 Input Filter Disable **/
#define PIOC_IFDR_P6		(1 << 6)
/** PIOC_IFDR_P5 Input Filter Disable **/
#define PIOC_IFDR_P5		(1 << 5)
/** PIOC_IFDR_P4 Input Filter Disable **/
#define PIOC_IFDR_P4		(1 << 4)
/** PIOC_IFDR_P3 Input Filter Disable **/
#define PIOC_IFDR_P3		(1 << 3)
/** PIOC_IFDR_P2 Input Filter Disable **/
#define PIOC_IFDR_P2		(1 << 2)
/** PIOC_IFDR_P1 Input Filter Disable **/
#define PIOC_IFDR_P1		(1 << 1)
/** PIOC_IFDR_P0 Input Filter Disable **/
#define PIOC_IFDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifsr IFSR Glitch Input Filter Status Register
@{*/

/** PIOC_IFSR_P31 Input Filter Status **/
#define PIOC_IFSR_P31		(1 << 31)
/** PIOC_IFSR_P30 Input Filter Status **/
#define PIOC_IFSR_P30		(1 << 30)
/** PIOC_IFSR_P29 Input Filter Status **/
#define PIOC_IFSR_P29		(1 << 29)
/** PIOC_IFSR_P28 Input Filter Status **/
#define PIOC_IFSR_P28		(1 << 28)
/** PIOC_IFSR_P27 Input Filter Status **/
#define PIOC_IFSR_P27		(1 << 27)
/** PIOC_IFSR_P26 Input Filter Status **/
#define PIOC_IFSR_P26		(1 << 26)
/** PIOC_IFSR_P25 Input Filter Status **/
#define PIOC_IFSR_P25		(1 << 25)
/** PIOC_IFSR_P24 Input Filter Status **/
#define PIOC_IFSR_P24		(1 << 24)
/** PIOC_IFSR_P23 Input Filter Status **/
#define PIOC_IFSR_P23		(1 << 23)
/** PIOC_IFSR_P22 Input Filter Status **/
#define PIOC_IFSR_P22		(1 << 22)
/** PIOC_IFSR_P21 Input Filter Status **/
#define PIOC_IFSR_P21		(1 << 21)
/** PIOC_IFSR_P20 Input Filter Status **/
#define PIOC_IFSR_P20		(1 << 20)
/** PIOC_IFSR_P19 Input Filter Status **/
#define PIOC_IFSR_P19		(1 << 19)
/** PIOC_IFSR_P18 Input Filter Status **/
#define PIOC_IFSR_P18		(1 << 18)
/** PIOC_IFSR_P17 Input Filter Status **/
#define PIOC_IFSR_P17		(1 << 17)
/** PIOC_IFSR_P16 Input Filter Status **/
#define PIOC_IFSR_P16		(1 << 16)
/** PIOC_IFSR_P15 Input Filter Status **/
#define PIOC_IFSR_P15		(1 << 15)
/** PIOC_IFSR_P14 Input Filter Status **/
#define PIOC_IFSR_P14		(1 << 14)
/** PIOC_IFSR_P13 Input Filter Status **/
#define PIOC_IFSR_P13		(1 << 13)
/** PIOC_IFSR_P12 Input Filter Status **/
#define PIOC_IFSR_P12		(1 << 12)
/** PIOC_IFSR_P11 Input Filter Status **/
#define PIOC_IFSR_P11		(1 << 11)
/** PIOC_IFSR_P10 Input Filter Status **/
#define PIOC_IFSR_P10		(1 << 10)
/** PIOC_IFSR_P9 Input Filter Status **/
#define PIOC_IFSR_P9		(1 << 9)
/** PIOC_IFSR_P8 Input Filter Status **/
#define PIOC_IFSR_P8		(1 << 8)
/** PIOC_IFSR_P7 Input Filter Status **/
#define PIOC_IFSR_P7		(1 << 7)
/** PIOC_IFSR_P6 Input Filter Status **/
#define PIOC_IFSR_P6		(1 << 6)
/** PIOC_IFSR_P5 Input Filter Status **/
#define PIOC_IFSR_P5		(1 << 5)
/** PIOC_IFSR_P4 Input Filter Status **/
#define PIOC_IFSR_P4		(1 << 4)
/** PIOC_IFSR_P3 Input Filter Status **/
#define PIOC_IFSR_P3		(1 << 3)
/** PIOC_IFSR_P2 Input Filter Status **/
#define PIOC_IFSR_P2		(1 << 2)
/** PIOC_IFSR_P1 Input Filter Status **/
#define PIOC_IFSR_P1		(1 << 1)
/** PIOC_IFSR_P0 Input Filter Status **/
#define PIOC_IFSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_sodr SODR Set Output Data Register
@{*/

/** PIOC_SODR_P31 Set Output Data **/
#define PIOC_SODR_P31		(1 << 31)
/** PIOC_SODR_P30 Set Output Data **/
#define PIOC_SODR_P30		(1 << 30)
/** PIOC_SODR_P29 Set Output Data **/
#define PIOC_SODR_P29		(1 << 29)
/** PIOC_SODR_P28 Set Output Data **/
#define PIOC_SODR_P28		(1 << 28)
/** PIOC_SODR_P27 Set Output Data **/
#define PIOC_SODR_P27		(1 << 27)
/** PIOC_SODR_P26 Set Output Data **/
#define PIOC_SODR_P26		(1 << 26)
/** PIOC_SODR_P25 Set Output Data **/
#define PIOC_SODR_P25		(1 << 25)
/** PIOC_SODR_P24 Set Output Data **/
#define PIOC_SODR_P24		(1 << 24)
/** PIOC_SODR_P23 Set Output Data **/
#define PIOC_SODR_P23		(1 << 23)
/** PIOC_SODR_P22 Set Output Data **/
#define PIOC_SODR_P22		(1 << 22)
/** PIOC_SODR_P21 Set Output Data **/
#define PIOC_SODR_P21		(1 << 21)
/** PIOC_SODR_P20 Set Output Data **/
#define PIOC_SODR_P20		(1 << 20)
/** PIOC_SODR_P19 Set Output Data **/
#define PIOC_SODR_P19		(1 << 19)
/** PIOC_SODR_P18 Set Output Data **/
#define PIOC_SODR_P18		(1 << 18)
/** PIOC_SODR_P17 Set Output Data **/
#define PIOC_SODR_P17		(1 << 17)
/** PIOC_SODR_P16 Set Output Data **/
#define PIOC_SODR_P16		(1 << 16)
/** PIOC_SODR_P15 Set Output Data **/
#define PIOC_SODR_P15		(1 << 15)
/** PIOC_SODR_P14 Set Output Data **/
#define PIOC_SODR_P14		(1 << 14)
/** PIOC_SODR_P13 Set Output Data **/
#define PIOC_SODR_P13		(1 << 13)
/** PIOC_SODR_P12 Set Output Data **/
#define PIOC_SODR_P12		(1 << 12)
/** PIOC_SODR_P11 Set Output Data **/
#define PIOC_SODR_P11		(1 << 11)
/** PIOC_SODR_P10 Set Output Data **/
#define PIOC_SODR_P10		(1 << 10)
/** PIOC_SODR_P9 Set Output Data **/
#define PIOC_SODR_P9		(1 << 9)
/** PIOC_SODR_P8 Set Output Data **/
#define PIOC_SODR_P8		(1 << 8)
/** PIOC_SODR_P7 Set Output Data **/
#define PIOC_SODR_P7		(1 << 7)
/** PIOC_SODR_P6 Set Output Data **/
#define PIOC_SODR_P6		(1 << 6)
/** PIOC_SODR_P5 Set Output Data **/
#define PIOC_SODR_P5		(1 << 5)
/** PIOC_SODR_P4 Set Output Data **/
#define PIOC_SODR_P4		(1 << 4)
/** PIOC_SODR_P3 Set Output Data **/
#define PIOC_SODR_P3		(1 << 3)
/** PIOC_SODR_P2 Set Output Data **/
#define PIOC_SODR_P2		(1 << 2)
/** PIOC_SODR_P1 Set Output Data **/
#define PIOC_SODR_P1		(1 << 1)
/** PIOC_SODR_P0 Set Output Data **/
#define PIOC_SODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_codr CODR Clear Output Data Register
@{*/

/** PIOC_CODR_P31 Clear Output Data **/
#define PIOC_CODR_P31		(1 << 31)
/** PIOC_CODR_P30 Clear Output Data **/
#define PIOC_CODR_P30		(1 << 30)
/** PIOC_CODR_P29 Clear Output Data **/
#define PIOC_CODR_P29		(1 << 29)
/** PIOC_CODR_P28 Clear Output Data **/
#define PIOC_CODR_P28		(1 << 28)
/** PIOC_CODR_P27 Clear Output Data **/
#define PIOC_CODR_P27		(1 << 27)
/** PIOC_CODR_P26 Clear Output Data **/
#define PIOC_CODR_P26		(1 << 26)
/** PIOC_CODR_P25 Clear Output Data **/
#define PIOC_CODR_P25		(1 << 25)
/** PIOC_CODR_P24 Clear Output Data **/
#define PIOC_CODR_P24		(1 << 24)
/** PIOC_CODR_P23 Clear Output Data **/
#define PIOC_CODR_P23		(1 << 23)
/** PIOC_CODR_P22 Clear Output Data **/
#define PIOC_CODR_P22		(1 << 22)
/** PIOC_CODR_P21 Clear Output Data **/
#define PIOC_CODR_P21		(1 << 21)
/** PIOC_CODR_P20 Clear Output Data **/
#define PIOC_CODR_P20		(1 << 20)
/** PIOC_CODR_P19 Clear Output Data **/
#define PIOC_CODR_P19		(1 << 19)
/** PIOC_CODR_P18 Clear Output Data **/
#define PIOC_CODR_P18		(1 << 18)
/** PIOC_CODR_P17 Clear Output Data **/
#define PIOC_CODR_P17		(1 << 17)
/** PIOC_CODR_P16 Clear Output Data **/
#define PIOC_CODR_P16		(1 << 16)
/** PIOC_CODR_P15 Clear Output Data **/
#define PIOC_CODR_P15		(1 << 15)
/** PIOC_CODR_P14 Clear Output Data **/
#define PIOC_CODR_P14		(1 << 14)
/** PIOC_CODR_P13 Clear Output Data **/
#define PIOC_CODR_P13		(1 << 13)
/** PIOC_CODR_P12 Clear Output Data **/
#define PIOC_CODR_P12		(1 << 12)
/** PIOC_CODR_P11 Clear Output Data **/
#define PIOC_CODR_P11		(1 << 11)
/** PIOC_CODR_P10 Clear Output Data **/
#define PIOC_CODR_P10		(1 << 10)
/** PIOC_CODR_P9 Clear Output Data **/
#define PIOC_CODR_P9		(1 << 9)
/** PIOC_CODR_P8 Clear Output Data **/
#define PIOC_CODR_P8		(1 << 8)
/** PIOC_CODR_P7 Clear Output Data **/
#define PIOC_CODR_P7		(1 << 7)
/** PIOC_CODR_P6 Clear Output Data **/
#define PIOC_CODR_P6		(1 << 6)
/** PIOC_CODR_P5 Clear Output Data **/
#define PIOC_CODR_P5		(1 << 5)
/** PIOC_CODR_P4 Clear Output Data **/
#define PIOC_CODR_P4		(1 << 4)
/** PIOC_CODR_P3 Clear Output Data **/
#define PIOC_CODR_P3		(1 << 3)
/** PIOC_CODR_P2 Clear Output Data **/
#define PIOC_CODR_P2		(1 << 2)
/** PIOC_CODR_P1 Clear Output Data **/
#define PIOC_CODR_P1		(1 << 1)
/** PIOC_CODR_P0 Clear Output Data **/
#define PIOC_CODR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_odsr ODSR Output Data Status Register
@{*/

/** PIOC_ODSR_P31 Output Data Status **/
#define PIOC_ODSR_P31		(1 << 31)
/** PIOC_ODSR_P30 Output Data Status **/
#define PIOC_ODSR_P30		(1 << 30)
/** PIOC_ODSR_P29 Output Data Status **/
#define PIOC_ODSR_P29		(1 << 29)
/** PIOC_ODSR_P28 Output Data Status **/
#define PIOC_ODSR_P28		(1 << 28)
/** PIOC_ODSR_P27 Output Data Status **/
#define PIOC_ODSR_P27		(1 << 27)
/** PIOC_ODSR_P26 Output Data Status **/
#define PIOC_ODSR_P26		(1 << 26)
/** PIOC_ODSR_P25 Output Data Status **/
#define PIOC_ODSR_P25		(1 << 25)
/** PIOC_ODSR_P24 Output Data Status **/
#define PIOC_ODSR_P24		(1 << 24)
/** PIOC_ODSR_P23 Output Data Status **/
#define PIOC_ODSR_P23		(1 << 23)
/** PIOC_ODSR_P22 Output Data Status **/
#define PIOC_ODSR_P22		(1 << 22)
/** PIOC_ODSR_P21 Output Data Status **/
#define PIOC_ODSR_P21		(1 << 21)
/** PIOC_ODSR_P20 Output Data Status **/
#define PIOC_ODSR_P20		(1 << 20)
/** PIOC_ODSR_P19 Output Data Status **/
#define PIOC_ODSR_P19		(1 << 19)
/** PIOC_ODSR_P18 Output Data Status **/
#define PIOC_ODSR_P18		(1 << 18)
/** PIOC_ODSR_P17 Output Data Status **/
#define PIOC_ODSR_P17		(1 << 17)
/** PIOC_ODSR_P16 Output Data Status **/
#define PIOC_ODSR_P16		(1 << 16)
/** PIOC_ODSR_P15 Output Data Status **/
#define PIOC_ODSR_P15		(1 << 15)
/** PIOC_ODSR_P14 Output Data Status **/
#define PIOC_ODSR_P14		(1 << 14)
/** PIOC_ODSR_P13 Output Data Status **/
#define PIOC_ODSR_P13		(1 << 13)
/** PIOC_ODSR_P12 Output Data Status **/
#define PIOC_ODSR_P12		(1 << 12)
/** PIOC_ODSR_P11 Output Data Status **/
#define PIOC_ODSR_P11		(1 << 11)
/** PIOC_ODSR_P10 Output Data Status **/
#define PIOC_ODSR_P10		(1 << 10)
/** PIOC_ODSR_P9 Output Data Status **/
#define PIOC_ODSR_P9		(1 << 9)
/** PIOC_ODSR_P8 Output Data Status **/
#define PIOC_ODSR_P8		(1 << 8)
/** PIOC_ODSR_P7 Output Data Status **/
#define PIOC_ODSR_P7		(1 << 7)
/** PIOC_ODSR_P6 Output Data Status **/
#define PIOC_ODSR_P6		(1 << 6)
/** PIOC_ODSR_P5 Output Data Status **/
#define PIOC_ODSR_P5		(1 << 5)
/** PIOC_ODSR_P4 Output Data Status **/
#define PIOC_ODSR_P4		(1 << 4)
/** PIOC_ODSR_P3 Output Data Status **/
#define PIOC_ODSR_P3		(1 << 3)
/** PIOC_ODSR_P2 Output Data Status **/
#define PIOC_ODSR_P2		(1 << 2)
/** PIOC_ODSR_P1 Output Data Status **/
#define PIOC_ODSR_P1		(1 << 1)
/** PIOC_ODSR_P0 Output Data Status **/
#define PIOC_ODSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_pdsr PDSR Pin Data Status Register
@{*/

/** PIOC_PDSR_P31 Output Data Status **/
#define PIOC_PDSR_P31		(1 << 31)
/** PIOC_PDSR_P30 Output Data Status **/
#define PIOC_PDSR_P30		(1 << 30)
/** PIOC_PDSR_P29 Output Data Status **/
#define PIOC_PDSR_P29		(1 << 29)
/** PIOC_PDSR_P28 Output Data Status **/
#define PIOC_PDSR_P28		(1 << 28)
/** PIOC_PDSR_P27 Output Data Status **/
#define PIOC_PDSR_P27		(1 << 27)
/** PIOC_PDSR_P26 Output Data Status **/
#define PIOC_PDSR_P26		(1 << 26)
/** PIOC_PDSR_P25 Output Data Status **/
#define PIOC_PDSR_P25		(1 << 25)
/** PIOC_PDSR_P24 Output Data Status **/
#define PIOC_PDSR_P24		(1 << 24)
/** PIOC_PDSR_P23 Output Data Status **/
#define PIOC_PDSR_P23		(1 << 23)
/** PIOC_PDSR_P22 Output Data Status **/
#define PIOC_PDSR_P22		(1 << 22)
/** PIOC_PDSR_P21 Output Data Status **/
#define PIOC_PDSR_P21		(1 << 21)
/** PIOC_PDSR_P20 Output Data Status **/
#define PIOC_PDSR_P20		(1 << 20)
/** PIOC_PDSR_P19 Output Data Status **/
#define PIOC_PDSR_P19		(1 << 19)
/** PIOC_PDSR_P18 Output Data Status **/
#define PIOC_PDSR_P18		(1 << 18)
/** PIOC_PDSR_P17 Output Data Status **/
#define PIOC_PDSR_P17		(1 << 17)
/** PIOC_PDSR_P16 Output Data Status **/
#define PIOC_PDSR_P16		(1 << 16)
/** PIOC_PDSR_P15 Output Data Status **/
#define PIOC_PDSR_P15		(1 << 15)
/** PIOC_PDSR_P14 Output Data Status **/
#define PIOC_PDSR_P14		(1 << 14)
/** PIOC_PDSR_P13 Output Data Status **/
#define PIOC_PDSR_P13		(1 << 13)
/** PIOC_PDSR_P12 Output Data Status **/
#define PIOC_PDSR_P12		(1 << 12)
/** PIOC_PDSR_P11 Output Data Status **/
#define PIOC_PDSR_P11		(1 << 11)
/** PIOC_PDSR_P10 Output Data Status **/
#define PIOC_PDSR_P10		(1 << 10)
/** PIOC_PDSR_P9 Output Data Status **/
#define PIOC_PDSR_P9		(1 << 9)
/** PIOC_PDSR_P8 Output Data Status **/
#define PIOC_PDSR_P8		(1 << 8)
/** PIOC_PDSR_P7 Output Data Status **/
#define PIOC_PDSR_P7		(1 << 7)
/** PIOC_PDSR_P6 Output Data Status **/
#define PIOC_PDSR_P6		(1 << 6)
/** PIOC_PDSR_P5 Output Data Status **/
#define PIOC_PDSR_P5		(1 << 5)
/** PIOC_PDSR_P4 Output Data Status **/
#define PIOC_PDSR_P4		(1 << 4)
/** PIOC_PDSR_P3 Output Data Status **/
#define PIOC_PDSR_P3		(1 << 3)
/** PIOC_PDSR_P2 Output Data Status **/
#define PIOC_PDSR_P2		(1 << 2)
/** PIOC_PDSR_P1 Output Data Status **/
#define PIOC_PDSR_P1		(1 << 1)
/** PIOC_PDSR_P0 Output Data Status **/
#define PIOC_PDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ier IER Interrupt Enable Register
@{*/

/** PIOC_IER_P31 Input Change Interrupt Enable **/
#define PIOC_IER_P31		(1 << 31)
/** PIOC_IER_P30 Input Change Interrupt Enable **/
#define PIOC_IER_P30		(1 << 30)
/** PIOC_IER_P29 Input Change Interrupt Enable **/
#define PIOC_IER_P29		(1 << 29)
/** PIOC_IER_P28 Input Change Interrupt Enable **/
#define PIOC_IER_P28		(1 << 28)
/** PIOC_IER_P27 Input Change Interrupt Enable **/
#define PIOC_IER_P27		(1 << 27)
/** PIOC_IER_P26 Input Change Interrupt Enable **/
#define PIOC_IER_P26		(1 << 26)
/** PIOC_IER_P25 Input Change Interrupt Enable **/
#define PIOC_IER_P25		(1 << 25)
/** PIOC_IER_P24 Input Change Interrupt Enable **/
#define PIOC_IER_P24		(1 << 24)
/** PIOC_IER_P23 Input Change Interrupt Enable **/
#define PIOC_IER_P23		(1 << 23)
/** PIOC_IER_P22 Input Change Interrupt Enable **/
#define PIOC_IER_P22		(1 << 22)
/** PIOC_IER_P21 Input Change Interrupt Enable **/
#define PIOC_IER_P21		(1 << 21)
/** PIOC_IER_P20 Input Change Interrupt Enable **/
#define PIOC_IER_P20		(1 << 20)
/** PIOC_IER_P19 Input Change Interrupt Enable **/
#define PIOC_IER_P19		(1 << 19)
/** PIOC_IER_P18 Input Change Interrupt Enable **/
#define PIOC_IER_P18		(1 << 18)
/** PIOC_IER_P17 Input Change Interrupt Enable **/
#define PIOC_IER_P17		(1 << 17)
/** PIOC_IER_P16 Input Change Interrupt Enable **/
#define PIOC_IER_P16		(1 << 16)
/** PIOC_IER_P15 Input Change Interrupt Enable **/
#define PIOC_IER_P15		(1 << 15)
/** PIOC_IER_P14 Input Change Interrupt Enable **/
#define PIOC_IER_P14		(1 << 14)
/** PIOC_IER_P13 Input Change Interrupt Enable **/
#define PIOC_IER_P13		(1 << 13)
/** PIOC_IER_P12 Input Change Interrupt Enable **/
#define PIOC_IER_P12		(1 << 12)
/** PIOC_IER_P11 Input Change Interrupt Enable **/
#define PIOC_IER_P11		(1 << 11)
/** PIOC_IER_P10 Input Change Interrupt Enable **/
#define PIOC_IER_P10		(1 << 10)
/** PIOC_IER_P9 Input Change Interrupt Enable **/
#define PIOC_IER_P9		(1 << 9)
/** PIOC_IER_P8 Input Change Interrupt Enable **/
#define PIOC_IER_P8		(1 << 8)
/** PIOC_IER_P7 Input Change Interrupt Enable **/
#define PIOC_IER_P7		(1 << 7)
/** PIOC_IER_P6 Input Change Interrupt Enable **/
#define PIOC_IER_P6		(1 << 6)
/** PIOC_IER_P5 Input Change Interrupt Enable **/
#define PIOC_IER_P5		(1 << 5)
/** PIOC_IER_P4 Input Change Interrupt Enable **/
#define PIOC_IER_P4		(1 << 4)
/** PIOC_IER_P3 Input Change Interrupt Enable **/
#define PIOC_IER_P3		(1 << 3)
/** PIOC_IER_P2 Input Change Interrupt Enable **/
#define PIOC_IER_P2		(1 << 2)
/** PIOC_IER_P1 Input Change Interrupt Enable **/
#define PIOC_IER_P1		(1 << 1)
/** PIOC_IER_P0 Input Change Interrupt Enable **/
#define PIOC_IER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_idr IDR Interrupt Disable Register
@{*/

/** PIOC_IDR_P31 Input Change Interrupt Disable **/
#define PIOC_IDR_P31		(1 << 31)
/** PIOC_IDR_P30 Input Change Interrupt Disable **/
#define PIOC_IDR_P30		(1 << 30)
/** PIOC_IDR_P29 Input Change Interrupt Disable **/
#define PIOC_IDR_P29		(1 << 29)
/** PIOC_IDR_P28 Input Change Interrupt Disable **/
#define PIOC_IDR_P28		(1 << 28)
/** PIOC_IDR_P27 Input Change Interrupt Disable **/
#define PIOC_IDR_P27		(1 << 27)
/** PIOC_IDR_P26 Input Change Interrupt Disable **/
#define PIOC_IDR_P26		(1 << 26)
/** PIOC_IDR_P25 Input Change Interrupt Disable **/
#define PIOC_IDR_P25		(1 << 25)
/** PIOC_IDR_P24 Input Change Interrupt Disable **/
#define PIOC_IDR_P24		(1 << 24)
/** PIOC_IDR_P23 Input Change Interrupt Disable **/
#define PIOC_IDR_P23		(1 << 23)
/** PIOC_IDR_P22 Input Change Interrupt Disable **/
#define PIOC_IDR_P22		(1 << 22)
/** PIOC_IDR_P21 Input Change Interrupt Disable **/
#define PIOC_IDR_P21		(1 << 21)
/** PIOC_IDR_P20 Input Change Interrupt Disable **/
#define PIOC_IDR_P20		(1 << 20)
/** PIOC_IDR_P19 Input Change Interrupt Disable **/
#define PIOC_IDR_P19		(1 << 19)
/** PIOC_IDR_P18 Input Change Interrupt Disable **/
#define PIOC_IDR_P18		(1 << 18)
/** PIOC_IDR_P17 Input Change Interrupt Disable **/
#define PIOC_IDR_P17		(1 << 17)
/** PIOC_IDR_P16 Input Change Interrupt Disable **/
#define PIOC_IDR_P16		(1 << 16)
/** PIOC_IDR_P15 Input Change Interrupt Disable **/
#define PIOC_IDR_P15		(1 << 15)
/** PIOC_IDR_P14 Input Change Interrupt Disable **/
#define PIOC_IDR_P14		(1 << 14)
/** PIOC_IDR_P13 Input Change Interrupt Disable **/
#define PIOC_IDR_P13		(1 << 13)
/** PIOC_IDR_P12 Input Change Interrupt Disable **/
#define PIOC_IDR_P12		(1 << 12)
/** PIOC_IDR_P11 Input Change Interrupt Disable **/
#define PIOC_IDR_P11		(1 << 11)
/** PIOC_IDR_P10 Input Change Interrupt Disable **/
#define PIOC_IDR_P10		(1 << 10)
/** PIOC_IDR_P9 Input Change Interrupt Disable **/
#define PIOC_IDR_P9		(1 << 9)
/** PIOC_IDR_P8 Input Change Interrupt Disable **/
#define PIOC_IDR_P8		(1 << 8)
/** PIOC_IDR_P7 Input Change Interrupt Disable **/
#define PIOC_IDR_P7		(1 << 7)
/** PIOC_IDR_P6 Input Change Interrupt Disable **/
#define PIOC_IDR_P6		(1 << 6)
/** PIOC_IDR_P5 Input Change Interrupt Disable **/
#define PIOC_IDR_P5		(1 << 5)
/** PIOC_IDR_P4 Input Change Interrupt Disable **/
#define PIOC_IDR_P4		(1 << 4)
/** PIOC_IDR_P3 Input Change Interrupt Disable **/
#define PIOC_IDR_P3		(1 << 3)
/** PIOC_IDR_P2 Input Change Interrupt Disable **/
#define PIOC_IDR_P2		(1 << 2)
/** PIOC_IDR_P1 Input Change Interrupt Disable **/
#define PIOC_IDR_P1		(1 << 1)
/** PIOC_IDR_P0 Input Change Interrupt Disable **/
#define PIOC_IDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_imr IMR Interrupt Mask Register
@{*/

/** PIOC_IMR_P31 Input Change Interrupt Mask **/
#define PIOC_IMR_P31		(1 << 31)
/** PIOC_IMR_P30 Input Change Interrupt Mask **/
#define PIOC_IMR_P30		(1 << 30)
/** PIOC_IMR_P29 Input Change Interrupt Mask **/
#define PIOC_IMR_P29		(1 << 29)
/** PIOC_IMR_P28 Input Change Interrupt Mask **/
#define PIOC_IMR_P28		(1 << 28)
/** PIOC_IMR_P27 Input Change Interrupt Mask **/
#define PIOC_IMR_P27		(1 << 27)
/** PIOC_IMR_P26 Input Change Interrupt Mask **/
#define PIOC_IMR_P26		(1 << 26)
/** PIOC_IMR_P25 Input Change Interrupt Mask **/
#define PIOC_IMR_P25		(1 << 25)
/** PIOC_IMR_P24 Input Change Interrupt Mask **/
#define PIOC_IMR_P24		(1 << 24)
/** PIOC_IMR_P23 Input Change Interrupt Mask **/
#define PIOC_IMR_P23		(1 << 23)
/** PIOC_IMR_P22 Input Change Interrupt Mask **/
#define PIOC_IMR_P22		(1 << 22)
/** PIOC_IMR_P21 Input Change Interrupt Mask **/
#define PIOC_IMR_P21		(1 << 21)
/** PIOC_IMR_P20 Input Change Interrupt Mask **/
#define PIOC_IMR_P20		(1 << 20)
/** PIOC_IMR_P19 Input Change Interrupt Mask **/
#define PIOC_IMR_P19		(1 << 19)
/** PIOC_IMR_P18 Input Change Interrupt Mask **/
#define PIOC_IMR_P18		(1 << 18)
/** PIOC_IMR_P17 Input Change Interrupt Mask **/
#define PIOC_IMR_P17		(1 << 17)
/** PIOC_IMR_P16 Input Change Interrupt Mask **/
#define PIOC_IMR_P16		(1 << 16)
/** PIOC_IMR_P15 Input Change Interrupt Mask **/
#define PIOC_IMR_P15		(1 << 15)
/** PIOC_IMR_P14 Input Change Interrupt Mask **/
#define PIOC_IMR_P14		(1 << 14)
/** PIOC_IMR_P13 Input Change Interrupt Mask **/
#define PIOC_IMR_P13		(1 << 13)
/** PIOC_IMR_P12 Input Change Interrupt Mask **/
#define PIOC_IMR_P12		(1 << 12)
/** PIOC_IMR_P11 Input Change Interrupt Mask **/
#define PIOC_IMR_P11		(1 << 11)
/** PIOC_IMR_P10 Input Change Interrupt Mask **/
#define PIOC_IMR_P10		(1 << 10)
/** PIOC_IMR_P9 Input Change Interrupt Mask **/
#define PIOC_IMR_P9		(1 << 9)
/** PIOC_IMR_P8 Input Change Interrupt Mask **/
#define PIOC_IMR_P8		(1 << 8)
/** PIOC_IMR_P7 Input Change Interrupt Mask **/
#define PIOC_IMR_P7		(1 << 7)
/** PIOC_IMR_P6 Input Change Interrupt Mask **/
#define PIOC_IMR_P6		(1 << 6)
/** PIOC_IMR_P5 Input Change Interrupt Mask **/
#define PIOC_IMR_P5		(1 << 5)
/** PIOC_IMR_P4 Input Change Interrupt Mask **/
#define PIOC_IMR_P4		(1 << 4)
/** PIOC_IMR_P3 Input Change Interrupt Mask **/
#define PIOC_IMR_P3		(1 << 3)
/** PIOC_IMR_P2 Input Change Interrupt Mask **/
#define PIOC_IMR_P2		(1 << 2)
/** PIOC_IMR_P1 Input Change Interrupt Mask **/
#define PIOC_IMR_P1		(1 << 1)
/** PIOC_IMR_P0 Input Change Interrupt Mask **/
#define PIOC_IMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_isr ISR Interrupt Status Register
@{*/

/** PIOC_ISR_P31 Input Change Interrupt Status **/
#define PIOC_ISR_P31		(1 << 31)
/** PIOC_ISR_P30 Input Change Interrupt Status **/
#define PIOC_ISR_P30		(1 << 30)
/** PIOC_ISR_P29 Input Change Interrupt Status **/
#define PIOC_ISR_P29		(1 << 29)
/** PIOC_ISR_P28 Input Change Interrupt Status **/
#define PIOC_ISR_P28		(1 << 28)
/** PIOC_ISR_P27 Input Change Interrupt Status **/
#define PIOC_ISR_P27		(1 << 27)
/** PIOC_ISR_P26 Input Change Interrupt Status **/
#define PIOC_ISR_P26		(1 << 26)
/** PIOC_ISR_P25 Input Change Interrupt Status **/
#define PIOC_ISR_P25		(1 << 25)
/** PIOC_ISR_P24 Input Change Interrupt Status **/
#define PIOC_ISR_P24		(1 << 24)
/** PIOC_ISR_P23 Input Change Interrupt Status **/
#define PIOC_ISR_P23		(1 << 23)
/** PIOC_ISR_P22 Input Change Interrupt Status **/
#define PIOC_ISR_P22		(1 << 22)
/** PIOC_ISR_P21 Input Change Interrupt Status **/
#define PIOC_ISR_P21		(1 << 21)
/** PIOC_ISR_P20 Input Change Interrupt Status **/
#define PIOC_ISR_P20		(1 << 20)
/** PIOC_ISR_P19 Input Change Interrupt Status **/
#define PIOC_ISR_P19		(1 << 19)
/** PIOC_ISR_P18 Input Change Interrupt Status **/
#define PIOC_ISR_P18		(1 << 18)
/** PIOC_ISR_P17 Input Change Interrupt Status **/
#define PIOC_ISR_P17		(1 << 17)
/** PIOC_ISR_P16 Input Change Interrupt Status **/
#define PIOC_ISR_P16		(1 << 16)
/** PIOC_ISR_P15 Input Change Interrupt Status **/
#define PIOC_ISR_P15		(1 << 15)
/** PIOC_ISR_P14 Input Change Interrupt Status **/
#define PIOC_ISR_P14		(1 << 14)
/** PIOC_ISR_P13 Input Change Interrupt Status **/
#define PIOC_ISR_P13		(1 << 13)
/** PIOC_ISR_P12 Input Change Interrupt Status **/
#define PIOC_ISR_P12		(1 << 12)
/** PIOC_ISR_P11 Input Change Interrupt Status **/
#define PIOC_ISR_P11		(1 << 11)
/** PIOC_ISR_P10 Input Change Interrupt Status **/
#define PIOC_ISR_P10		(1 << 10)
/** PIOC_ISR_P9 Input Change Interrupt Status **/
#define PIOC_ISR_P9		(1 << 9)
/** PIOC_ISR_P8 Input Change Interrupt Status **/
#define PIOC_ISR_P8		(1 << 8)
/** PIOC_ISR_P7 Input Change Interrupt Status **/
#define PIOC_ISR_P7		(1 << 7)
/** PIOC_ISR_P6 Input Change Interrupt Status **/
#define PIOC_ISR_P6		(1 << 6)
/** PIOC_ISR_P5 Input Change Interrupt Status **/
#define PIOC_ISR_P5		(1 << 5)
/** PIOC_ISR_P4 Input Change Interrupt Status **/
#define PIOC_ISR_P4		(1 << 4)
/** PIOC_ISR_P3 Input Change Interrupt Status **/
#define PIOC_ISR_P3		(1 << 3)
/** PIOC_ISR_P2 Input Change Interrupt Status **/
#define PIOC_ISR_P2		(1 << 2)
/** PIOC_ISR_P1 Input Change Interrupt Status **/
#define PIOC_ISR_P1		(1 << 1)
/** PIOC_ISR_P0 Input Change Interrupt Status **/
#define PIOC_ISR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_mder MDER Multi-driver Enable Register
@{*/

/** PIOC_MDER_P31 Multi-drive Enable **/
#define PIOC_MDER_P31		(1 << 31)
/** PIOC_MDER_P30 Multi-drive Enable **/
#define PIOC_MDER_P30		(1 << 30)
/** PIOC_MDER_P29 Multi-drive Enable **/
#define PIOC_MDER_P29		(1 << 29)
/** PIOC_MDER_P28 Multi-drive Enable **/
#define PIOC_MDER_P28		(1 << 28)
/** PIOC_MDER_P27 Multi-drive Enable **/
#define PIOC_MDER_P27		(1 << 27)
/** PIOC_MDER_P26 Multi-drive Enable **/
#define PIOC_MDER_P26		(1 << 26)
/** PIOC_MDER_P25 Multi-drive Enable **/
#define PIOC_MDER_P25		(1 << 25)
/** PIOC_MDER_P24 Multi-drive Enable **/
#define PIOC_MDER_P24		(1 << 24)
/** PIOC_MDER_P23 Multi-drive Enable **/
#define PIOC_MDER_P23		(1 << 23)
/** PIOC_MDER_P22 Multi-drive Enable **/
#define PIOC_MDER_P22		(1 << 22)
/** PIOC_MDER_P21 Multi-drive Enable **/
#define PIOC_MDER_P21		(1 << 21)
/** PIOC_MDER_P20 Multi-drive Enable **/
#define PIOC_MDER_P20		(1 << 20)
/** PIOC_MDER_P19 Multi-drive Enable **/
#define PIOC_MDER_P19		(1 << 19)
/** PIOC_MDER_P18 Multi-drive Enable **/
#define PIOC_MDER_P18		(1 << 18)
/** PIOC_MDER_P17 Multi-drive Enable **/
#define PIOC_MDER_P17		(1 << 17)
/** PIOC_MDER_P16 Multi-drive Enable **/
#define PIOC_MDER_P16		(1 << 16)
/** PIOC_MDER_P15 Multi-drive Enable **/
#define PIOC_MDER_P15		(1 << 15)
/** PIOC_MDER_P14 Multi-drive Enable **/
#define PIOC_MDER_P14		(1 << 14)
/** PIOC_MDER_P13 Multi-drive Enable **/
#define PIOC_MDER_P13		(1 << 13)
/** PIOC_MDER_P12 Multi-drive Enable **/
#define PIOC_MDER_P12		(1 << 12)
/** PIOC_MDER_P11 Multi-drive Enable **/
#define PIOC_MDER_P11		(1 << 11)
/** PIOC_MDER_P10 Multi-drive Enable **/
#define PIOC_MDER_P10		(1 << 10)
/** PIOC_MDER_P9 Multi-drive Enable **/
#define PIOC_MDER_P9		(1 << 9)
/** PIOC_MDER_P8 Multi-drive Enable **/
#define PIOC_MDER_P8		(1 << 8)
/** PIOC_MDER_P7 Multi-drive Enable **/
#define PIOC_MDER_P7		(1 << 7)
/** PIOC_MDER_P6 Multi-drive Enable **/
#define PIOC_MDER_P6		(1 << 6)
/** PIOC_MDER_P5 Multi-drive Enable **/
#define PIOC_MDER_P5		(1 << 5)
/** PIOC_MDER_P4 Multi-drive Enable **/
#define PIOC_MDER_P4		(1 << 4)
/** PIOC_MDER_P3 Multi-drive Enable **/
#define PIOC_MDER_P3		(1 << 3)
/** PIOC_MDER_P2 Multi-drive Enable **/
#define PIOC_MDER_P2		(1 << 2)
/** PIOC_MDER_P1 Multi-drive Enable **/
#define PIOC_MDER_P1		(1 << 1)
/** PIOC_MDER_P0 Multi-drive Enable **/
#define PIOC_MDER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_mddr MDDR Multi-driver Disable Register
@{*/

/** PIOC_MDDR_P31 Multi-drive Disable **/
#define PIOC_MDDR_P31		(1 << 31)
/** PIOC_MDDR_P30 Multi-drive Disable **/
#define PIOC_MDDR_P30		(1 << 30)
/** PIOC_MDDR_P29 Multi-drive Disable **/
#define PIOC_MDDR_P29		(1 << 29)
/** PIOC_MDDR_P28 Multi-drive Disable **/
#define PIOC_MDDR_P28		(1 << 28)
/** PIOC_MDDR_P27 Multi-drive Disable **/
#define PIOC_MDDR_P27		(1 << 27)
/** PIOC_MDDR_P26 Multi-drive Disable **/
#define PIOC_MDDR_P26		(1 << 26)
/** PIOC_MDDR_P25 Multi-drive Disable **/
#define PIOC_MDDR_P25		(1 << 25)
/** PIOC_MDDR_P24 Multi-drive Disable **/
#define PIOC_MDDR_P24		(1 << 24)
/** PIOC_MDDR_P23 Multi-drive Disable **/
#define PIOC_MDDR_P23		(1 << 23)
/** PIOC_MDDR_P22 Multi-drive Disable **/
#define PIOC_MDDR_P22		(1 << 22)
/** PIOC_MDDR_P21 Multi-drive Disable **/
#define PIOC_MDDR_P21		(1 << 21)
/** PIOC_MDDR_P20 Multi-drive Disable **/
#define PIOC_MDDR_P20		(1 << 20)
/** PIOC_MDDR_P19 Multi-drive Disable **/
#define PIOC_MDDR_P19		(1 << 19)
/** PIOC_MDDR_P18 Multi-drive Disable **/
#define PIOC_MDDR_P18		(1 << 18)
/** PIOC_MDDR_P17 Multi-drive Disable **/
#define PIOC_MDDR_P17		(1 << 17)
/** PIOC_MDDR_P16 Multi-drive Disable **/
#define PIOC_MDDR_P16		(1 << 16)
/** PIOC_MDDR_P15 Multi-drive Disable **/
#define PIOC_MDDR_P15		(1 << 15)
/** PIOC_MDDR_P14 Multi-drive Disable **/
#define PIOC_MDDR_P14		(1 << 14)
/** PIOC_MDDR_P13 Multi-drive Disable **/
#define PIOC_MDDR_P13		(1 << 13)
/** PIOC_MDDR_P12 Multi-drive Disable **/
#define PIOC_MDDR_P12		(1 << 12)
/** PIOC_MDDR_P11 Multi-drive Disable **/
#define PIOC_MDDR_P11		(1 << 11)
/** PIOC_MDDR_P10 Multi-drive Disable **/
#define PIOC_MDDR_P10		(1 << 10)
/** PIOC_MDDR_P9 Multi-drive Disable **/
#define PIOC_MDDR_P9		(1 << 9)
/** PIOC_MDDR_P8 Multi-drive Disable **/
#define PIOC_MDDR_P8		(1 << 8)
/** PIOC_MDDR_P7 Multi-drive Disable **/
#define PIOC_MDDR_P7		(1 << 7)
/** PIOC_MDDR_P6 Multi-drive Disable **/
#define PIOC_MDDR_P6		(1 << 6)
/** PIOC_MDDR_P5 Multi-drive Disable **/
#define PIOC_MDDR_P5		(1 << 5)
/** PIOC_MDDR_P4 Multi-drive Disable **/
#define PIOC_MDDR_P4		(1 << 4)
/** PIOC_MDDR_P3 Multi-drive Disable **/
#define PIOC_MDDR_P3		(1 << 3)
/** PIOC_MDDR_P2 Multi-drive Disable **/
#define PIOC_MDDR_P2		(1 << 2)
/** PIOC_MDDR_P1 Multi-drive Disable **/
#define PIOC_MDDR_P1		(1 << 1)
/** PIOC_MDDR_P0 Multi-drive Disable **/
#define PIOC_MDDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_mdsr MDSR Multi-driver Status Register
@{*/

/** PIOC_MDSR_P31 Multi-drive Status **/
#define PIOC_MDSR_P31		(1 << 31)
/** PIOC_MDSR_P30 Multi-drive Status **/
#define PIOC_MDSR_P30		(1 << 30)
/** PIOC_MDSR_P29 Multi-drive Status **/
#define PIOC_MDSR_P29		(1 << 29)
/** PIOC_MDSR_P28 Multi-drive Status **/
#define PIOC_MDSR_P28		(1 << 28)
/** PIOC_MDSR_P27 Multi-drive Status **/
#define PIOC_MDSR_P27		(1 << 27)
/** PIOC_MDSR_P26 Multi-drive Status **/
#define PIOC_MDSR_P26		(1 << 26)
/** PIOC_MDSR_P25 Multi-drive Status **/
#define PIOC_MDSR_P25		(1 << 25)
/** PIOC_MDSR_P24 Multi-drive Status **/
#define PIOC_MDSR_P24		(1 << 24)
/** PIOC_MDSR_P23 Multi-drive Status **/
#define PIOC_MDSR_P23		(1 << 23)
/** PIOC_MDSR_P22 Multi-drive Status **/
#define PIOC_MDSR_P22		(1 << 22)
/** PIOC_MDSR_P21 Multi-drive Status **/
#define PIOC_MDSR_P21		(1 << 21)
/** PIOC_MDSR_P20 Multi-drive Status **/
#define PIOC_MDSR_P20		(1 << 20)
/** PIOC_MDSR_P19 Multi-drive Status **/
#define PIOC_MDSR_P19		(1 << 19)
/** PIOC_MDSR_P18 Multi-drive Status **/
#define PIOC_MDSR_P18		(1 << 18)
/** PIOC_MDSR_P17 Multi-drive Status **/
#define PIOC_MDSR_P17		(1 << 17)
/** PIOC_MDSR_P16 Multi-drive Status **/
#define PIOC_MDSR_P16		(1 << 16)
/** PIOC_MDSR_P15 Multi-drive Status **/
#define PIOC_MDSR_P15		(1 << 15)
/** PIOC_MDSR_P14 Multi-drive Status **/
#define PIOC_MDSR_P14		(1 << 14)
/** PIOC_MDSR_P13 Multi-drive Status **/
#define PIOC_MDSR_P13		(1 << 13)
/** PIOC_MDSR_P12 Multi-drive Status **/
#define PIOC_MDSR_P12		(1 << 12)
/** PIOC_MDSR_P11 Multi-drive Status **/
#define PIOC_MDSR_P11		(1 << 11)
/** PIOC_MDSR_P10 Multi-drive Status **/
#define PIOC_MDSR_P10		(1 << 10)
/** PIOC_MDSR_P9 Multi-drive Status **/
#define PIOC_MDSR_P9		(1 << 9)
/** PIOC_MDSR_P8 Multi-drive Status **/
#define PIOC_MDSR_P8		(1 << 8)
/** PIOC_MDSR_P7 Multi-drive Status **/
#define PIOC_MDSR_P7		(1 << 7)
/** PIOC_MDSR_P6 Multi-drive Status **/
#define PIOC_MDSR_P6		(1 << 6)
/** PIOC_MDSR_P5 Multi-drive Status **/
#define PIOC_MDSR_P5		(1 << 5)
/** PIOC_MDSR_P4 Multi-drive Status **/
#define PIOC_MDSR_P4		(1 << 4)
/** PIOC_MDSR_P3 Multi-drive Status **/
#define PIOC_MDSR_P3		(1 << 3)
/** PIOC_MDSR_P2 Multi-drive Status **/
#define PIOC_MDSR_P2		(1 << 2)
/** PIOC_MDSR_P1 Multi-drive Status **/
#define PIOC_MDSR_P1		(1 << 1)
/** PIOC_MDSR_P0 Multi-drive Status **/
#define PIOC_MDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_pudr PUDR Pull-up Disable Register
@{*/

/** PIOC_PUDR_P31 Pull-Up Disable **/
#define PIOC_PUDR_P31		(1 << 31)
/** PIOC_PUDR_P30 Pull-Up Disable **/
#define PIOC_PUDR_P30		(1 << 30)
/** PIOC_PUDR_P29 Pull-Up Disable **/
#define PIOC_PUDR_P29		(1 << 29)
/** PIOC_PUDR_P28 Pull-Up Disable **/
#define PIOC_PUDR_P28		(1 << 28)
/** PIOC_PUDR_P27 Pull-Up Disable **/
#define PIOC_PUDR_P27		(1 << 27)
/** PIOC_PUDR_P26 Pull-Up Disable **/
#define PIOC_PUDR_P26		(1 << 26)
/** PIOC_PUDR_P25 Pull-Up Disable **/
#define PIOC_PUDR_P25		(1 << 25)
/** PIOC_PUDR_P24 Pull-Up Disable **/
#define PIOC_PUDR_P24		(1 << 24)
/** PIOC_PUDR_P23 Pull-Up Disable **/
#define PIOC_PUDR_P23		(1 << 23)
/** PIOC_PUDR_P22 Pull-Up Disable **/
#define PIOC_PUDR_P22		(1 << 22)
/** PIOC_PUDR_P21 Pull-Up Disable **/
#define PIOC_PUDR_P21		(1 << 21)
/** PIOC_PUDR_P20 Pull-Up Disable **/
#define PIOC_PUDR_P20		(1 << 20)
/** PIOC_PUDR_P19 Pull-Up Disable **/
#define PIOC_PUDR_P19		(1 << 19)
/** PIOC_PUDR_P18 Pull-Up Disable **/
#define PIOC_PUDR_P18		(1 << 18)
/** PIOC_PUDR_P17 Pull-Up Disable **/
#define PIOC_PUDR_P17		(1 << 17)
/** PIOC_PUDR_P16 Pull-Up Disable **/
#define PIOC_PUDR_P16		(1 << 16)
/** PIOC_PUDR_P15 Pull-Up Disable **/
#define PIOC_PUDR_P15		(1 << 15)
/** PIOC_PUDR_P14 Pull-Up Disable **/
#define PIOC_PUDR_P14		(1 << 14)
/** PIOC_PUDR_P13 Pull-Up Disable **/
#define PIOC_PUDR_P13		(1 << 13)
/** PIOC_PUDR_P12 Pull-Up Disable **/
#define PIOC_PUDR_P12		(1 << 12)
/** PIOC_PUDR_P11 Pull-Up Disable **/
#define PIOC_PUDR_P11		(1 << 11)
/** PIOC_PUDR_P10 Pull-Up Disable **/
#define PIOC_PUDR_P10		(1 << 10)
/** PIOC_PUDR_P9 Pull-Up Disable **/
#define PIOC_PUDR_P9		(1 << 9)
/** PIOC_PUDR_P8 Pull-Up Disable **/
#define PIOC_PUDR_P8		(1 << 8)
/** PIOC_PUDR_P7 Pull-Up Disable **/
#define PIOC_PUDR_P7		(1 << 7)
/** PIOC_PUDR_P6 Pull-Up Disable **/
#define PIOC_PUDR_P6		(1 << 6)
/** PIOC_PUDR_P5 Pull-Up Disable **/
#define PIOC_PUDR_P5		(1 << 5)
/** PIOC_PUDR_P4 Pull-Up Disable **/
#define PIOC_PUDR_P4		(1 << 4)
/** PIOC_PUDR_P3 Pull-Up Disable **/
#define PIOC_PUDR_P3		(1 << 3)
/** PIOC_PUDR_P2 Pull-Up Disable **/
#define PIOC_PUDR_P2		(1 << 2)
/** PIOC_PUDR_P1 Pull-Up Disable **/
#define PIOC_PUDR_P1		(1 << 1)
/** PIOC_PUDR_P0 Pull-Up Disable **/
#define PIOC_PUDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_puer PUER Pull-up Enable Register
@{*/

/** PIOC_PUER_P31 Pull-Up Enable **/
#define PIOC_PUER_P31		(1 << 31)
/** PIOC_PUER_P30 Pull-Up Enable **/
#define PIOC_PUER_P30		(1 << 30)
/** PIOC_PUER_P29 Pull-Up Enable **/
#define PIOC_PUER_P29		(1 << 29)
/** PIOC_PUER_P28 Pull-Up Enable **/
#define PIOC_PUER_P28		(1 << 28)
/** PIOC_PUER_P27 Pull-Up Enable **/
#define PIOC_PUER_P27		(1 << 27)
/** PIOC_PUER_P26 Pull-Up Enable **/
#define PIOC_PUER_P26		(1 << 26)
/** PIOC_PUER_P25 Pull-Up Enable **/
#define PIOC_PUER_P25		(1 << 25)
/** PIOC_PUER_P24 Pull-Up Enable **/
#define PIOC_PUER_P24		(1 << 24)
/** PIOC_PUER_P23 Pull-Up Enable **/
#define PIOC_PUER_P23		(1 << 23)
/** PIOC_PUER_P22 Pull-Up Enable **/
#define PIOC_PUER_P22		(1 << 22)
/** PIOC_PUER_P21 Pull-Up Enable **/
#define PIOC_PUER_P21		(1 << 21)
/** PIOC_PUER_P20 Pull-Up Enable **/
#define PIOC_PUER_P20		(1 << 20)
/** PIOC_PUER_P19 Pull-Up Enable **/
#define PIOC_PUER_P19		(1 << 19)
/** PIOC_PUER_P18 Pull-Up Enable **/
#define PIOC_PUER_P18		(1 << 18)
/** PIOC_PUER_P17 Pull-Up Enable **/
#define PIOC_PUER_P17		(1 << 17)
/** PIOC_PUER_P16 Pull-Up Enable **/
#define PIOC_PUER_P16		(1 << 16)
/** PIOC_PUER_P15 Pull-Up Enable **/
#define PIOC_PUER_P15		(1 << 15)
/** PIOC_PUER_P14 Pull-Up Enable **/
#define PIOC_PUER_P14		(1 << 14)
/** PIOC_PUER_P13 Pull-Up Enable **/
#define PIOC_PUER_P13		(1 << 13)
/** PIOC_PUER_P12 Pull-Up Enable **/
#define PIOC_PUER_P12		(1 << 12)
/** PIOC_PUER_P11 Pull-Up Enable **/
#define PIOC_PUER_P11		(1 << 11)
/** PIOC_PUER_P10 Pull-Up Enable **/
#define PIOC_PUER_P10		(1 << 10)
/** PIOC_PUER_P9 Pull-Up Enable **/
#define PIOC_PUER_P9		(1 << 9)
/** PIOC_PUER_P8 Pull-Up Enable **/
#define PIOC_PUER_P8		(1 << 8)
/** PIOC_PUER_P7 Pull-Up Enable **/
#define PIOC_PUER_P7		(1 << 7)
/** PIOC_PUER_P6 Pull-Up Enable **/
#define PIOC_PUER_P6		(1 << 6)
/** PIOC_PUER_P5 Pull-Up Enable **/
#define PIOC_PUER_P5		(1 << 5)
/** PIOC_PUER_P4 Pull-Up Enable **/
#define PIOC_PUER_P4		(1 << 4)
/** PIOC_PUER_P3 Pull-Up Enable **/
#define PIOC_PUER_P3		(1 << 3)
/** PIOC_PUER_P2 Pull-Up Enable **/
#define PIOC_PUER_P2		(1 << 2)
/** PIOC_PUER_P1 Pull-Up Enable **/
#define PIOC_PUER_P1		(1 << 1)
/** PIOC_PUER_P0 Pull-Up Enable **/
#define PIOC_PUER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_pusr PUSR Pad Pull-up Status Register
@{*/

/** PIOC_PUSR_P31 Pull-Up Status **/
#define PIOC_PUSR_P31		(1 << 31)
/** PIOC_PUSR_P30 Pull-Up Status **/
#define PIOC_PUSR_P30		(1 << 30)
/** PIOC_PUSR_P29 Pull-Up Status **/
#define PIOC_PUSR_P29		(1 << 29)
/** PIOC_PUSR_P28 Pull-Up Status **/
#define PIOC_PUSR_P28		(1 << 28)
/** PIOC_PUSR_P27 Pull-Up Status **/
#define PIOC_PUSR_P27		(1 << 27)
/** PIOC_PUSR_P26 Pull-Up Status **/
#define PIOC_PUSR_P26		(1 << 26)
/** PIOC_PUSR_P25 Pull-Up Status **/
#define PIOC_PUSR_P25		(1 << 25)
/** PIOC_PUSR_P24 Pull-Up Status **/
#define PIOC_PUSR_P24		(1 << 24)
/** PIOC_PUSR_P23 Pull-Up Status **/
#define PIOC_PUSR_P23		(1 << 23)
/** PIOC_PUSR_P22 Pull-Up Status **/
#define PIOC_PUSR_P22		(1 << 22)
/** PIOC_PUSR_P21 Pull-Up Status **/
#define PIOC_PUSR_P21		(1 << 21)
/** PIOC_PUSR_P20 Pull-Up Status **/
#define PIOC_PUSR_P20		(1 << 20)
/** PIOC_PUSR_P19 Pull-Up Status **/
#define PIOC_PUSR_P19		(1 << 19)
/** PIOC_PUSR_P18 Pull-Up Status **/
#define PIOC_PUSR_P18		(1 << 18)
/** PIOC_PUSR_P17 Pull-Up Status **/
#define PIOC_PUSR_P17		(1 << 17)
/** PIOC_PUSR_P16 Pull-Up Status **/
#define PIOC_PUSR_P16		(1 << 16)
/** PIOC_PUSR_P15 Pull-Up Status **/
#define PIOC_PUSR_P15		(1 << 15)
/** PIOC_PUSR_P14 Pull-Up Status **/
#define PIOC_PUSR_P14		(1 << 14)
/** PIOC_PUSR_P13 Pull-Up Status **/
#define PIOC_PUSR_P13		(1 << 13)
/** PIOC_PUSR_P12 Pull-Up Status **/
#define PIOC_PUSR_P12		(1 << 12)
/** PIOC_PUSR_P11 Pull-Up Status **/
#define PIOC_PUSR_P11		(1 << 11)
/** PIOC_PUSR_P10 Pull-Up Status **/
#define PIOC_PUSR_P10		(1 << 10)
/** PIOC_PUSR_P9 Pull-Up Status **/
#define PIOC_PUSR_P9		(1 << 9)
/** PIOC_PUSR_P8 Pull-Up Status **/
#define PIOC_PUSR_P8		(1 << 8)
/** PIOC_PUSR_P7 Pull-Up Status **/
#define PIOC_PUSR_P7		(1 << 7)
/** PIOC_PUSR_P6 Pull-Up Status **/
#define PIOC_PUSR_P6		(1 << 6)
/** PIOC_PUSR_P5 Pull-Up Status **/
#define PIOC_PUSR_P5		(1 << 5)
/** PIOC_PUSR_P4 Pull-Up Status **/
#define PIOC_PUSR_P4		(1 << 4)
/** PIOC_PUSR_P3 Pull-Up Status **/
#define PIOC_PUSR_P3		(1 << 3)
/** PIOC_PUSR_P2 Pull-Up Status **/
#define PIOC_PUSR_P2		(1 << 2)
/** PIOC_PUSR_P1 Pull-Up Status **/
#define PIOC_PUSR_P1		(1 << 1)
/** PIOC_PUSR_P0 Pull-Up Status **/
#define PIOC_PUSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_abcdsr[0] ABCDSR[0] Peripheral Select Register
@{*/

/** PIOC_ABCDSR[0]_P31 Peripheral Select **/
#define PIOC_ABCDSR[0]_P31		(1 << 31)
/** PIOC_ABCDSR[0]_P30 Peripheral Select **/
#define PIOC_ABCDSR[0]_P30		(1 << 30)
/** PIOC_ABCDSR[0]_P29 Peripheral Select **/
#define PIOC_ABCDSR[0]_P29		(1 << 29)
/** PIOC_ABCDSR[0]_P28 Peripheral Select **/
#define PIOC_ABCDSR[0]_P28		(1 << 28)
/** PIOC_ABCDSR[0]_P27 Peripheral Select **/
#define PIOC_ABCDSR[0]_P27		(1 << 27)
/** PIOC_ABCDSR[0]_P26 Peripheral Select **/
#define PIOC_ABCDSR[0]_P26		(1 << 26)
/** PIOC_ABCDSR[0]_P25 Peripheral Select **/
#define PIOC_ABCDSR[0]_P25		(1 << 25)
/** PIOC_ABCDSR[0]_P24 Peripheral Select **/
#define PIOC_ABCDSR[0]_P24		(1 << 24)
/** PIOC_ABCDSR[0]_P23 Peripheral Select **/
#define PIOC_ABCDSR[0]_P23		(1 << 23)
/** PIOC_ABCDSR[0]_P22 Peripheral Select **/
#define PIOC_ABCDSR[0]_P22		(1 << 22)
/** PIOC_ABCDSR[0]_P21 Peripheral Select **/
#define PIOC_ABCDSR[0]_P21		(1 << 21)
/** PIOC_ABCDSR[0]_P20 Peripheral Select **/
#define PIOC_ABCDSR[0]_P20		(1 << 20)
/** PIOC_ABCDSR[0]_P19 Peripheral Select **/
#define PIOC_ABCDSR[0]_P19		(1 << 19)
/** PIOC_ABCDSR[0]_P18 Peripheral Select **/
#define PIOC_ABCDSR[0]_P18		(1 << 18)
/** PIOC_ABCDSR[0]_P17 Peripheral Select **/
#define PIOC_ABCDSR[0]_P17		(1 << 17)
/** PIOC_ABCDSR[0]_P16 Peripheral Select **/
#define PIOC_ABCDSR[0]_P16		(1 << 16)
/** PIOC_ABCDSR[0]_P15 Peripheral Select **/
#define PIOC_ABCDSR[0]_P15		(1 << 15)
/** PIOC_ABCDSR[0]_P14 Peripheral Select **/
#define PIOC_ABCDSR[0]_P14		(1 << 14)
/** PIOC_ABCDSR[0]_P13 Peripheral Select **/
#define PIOC_ABCDSR[0]_P13		(1 << 13)
/** PIOC_ABCDSR[0]_P12 Peripheral Select **/
#define PIOC_ABCDSR[0]_P12		(1 << 12)
/** PIOC_ABCDSR[0]_P11 Peripheral Select **/
#define PIOC_ABCDSR[0]_P11		(1 << 11)
/** PIOC_ABCDSR[0]_P10 Peripheral Select **/
#define PIOC_ABCDSR[0]_P10		(1 << 10)
/** PIOC_ABCDSR[0]_P9 Peripheral Select **/
#define PIOC_ABCDSR[0]_P9		(1 << 9)
/** PIOC_ABCDSR[0]_P8 Peripheral Select **/
#define PIOC_ABCDSR[0]_P8		(1 << 8)
/** PIOC_ABCDSR[0]_P7 Peripheral Select **/
#define PIOC_ABCDSR[0]_P7		(1 << 7)
/** PIOC_ABCDSR[0]_P6 Peripheral Select **/
#define PIOC_ABCDSR[0]_P6		(1 << 6)
/** PIOC_ABCDSR[0]_P5 Peripheral Select **/
#define PIOC_ABCDSR[0]_P5		(1 << 5)
/** PIOC_ABCDSR[0]_P4 Peripheral Select **/
#define PIOC_ABCDSR[0]_P4		(1 << 4)
/** PIOC_ABCDSR[0]_P3 Peripheral Select **/
#define PIOC_ABCDSR[0]_P3		(1 << 3)
/** PIOC_ABCDSR[0]_P2 Peripheral Select **/
#define PIOC_ABCDSR[0]_P2		(1 << 2)
/** PIOC_ABCDSR[0]_P1 Peripheral Select **/
#define PIOC_ABCDSR[0]_P1		(1 << 1)
/** PIOC_ABCDSR[0]_P0 Peripheral Select **/
#define PIOC_ABCDSR[0]_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_abcdsr[1] ABCDSR[1] Peripheral Select Register
@{*/

/** PIOC_ABCDSR[1]_P31 Peripheral Select **/
#define PIOC_ABCDSR[1]_P31		(1 << 31)
/** PIOC_ABCDSR[1]_P30 Peripheral Select **/
#define PIOC_ABCDSR[1]_P30		(1 << 30)
/** PIOC_ABCDSR[1]_P29 Peripheral Select **/
#define PIOC_ABCDSR[1]_P29		(1 << 29)
/** PIOC_ABCDSR[1]_P28 Peripheral Select **/
#define PIOC_ABCDSR[1]_P28		(1 << 28)
/** PIOC_ABCDSR[1]_P27 Peripheral Select **/
#define PIOC_ABCDSR[1]_P27		(1 << 27)
/** PIOC_ABCDSR[1]_P26 Peripheral Select **/
#define PIOC_ABCDSR[1]_P26		(1 << 26)
/** PIOC_ABCDSR[1]_P25 Peripheral Select **/
#define PIOC_ABCDSR[1]_P25		(1 << 25)
/** PIOC_ABCDSR[1]_P24 Peripheral Select **/
#define PIOC_ABCDSR[1]_P24		(1 << 24)
/** PIOC_ABCDSR[1]_P23 Peripheral Select **/
#define PIOC_ABCDSR[1]_P23		(1 << 23)
/** PIOC_ABCDSR[1]_P22 Peripheral Select **/
#define PIOC_ABCDSR[1]_P22		(1 << 22)
/** PIOC_ABCDSR[1]_P21 Peripheral Select **/
#define PIOC_ABCDSR[1]_P21		(1 << 21)
/** PIOC_ABCDSR[1]_P20 Peripheral Select **/
#define PIOC_ABCDSR[1]_P20		(1 << 20)
/** PIOC_ABCDSR[1]_P19 Peripheral Select **/
#define PIOC_ABCDSR[1]_P19		(1 << 19)
/** PIOC_ABCDSR[1]_P18 Peripheral Select **/
#define PIOC_ABCDSR[1]_P18		(1 << 18)
/** PIOC_ABCDSR[1]_P17 Peripheral Select **/
#define PIOC_ABCDSR[1]_P17		(1 << 17)
/** PIOC_ABCDSR[1]_P16 Peripheral Select **/
#define PIOC_ABCDSR[1]_P16		(1 << 16)
/** PIOC_ABCDSR[1]_P15 Peripheral Select **/
#define PIOC_ABCDSR[1]_P15		(1 << 15)
/** PIOC_ABCDSR[1]_P14 Peripheral Select **/
#define PIOC_ABCDSR[1]_P14		(1 << 14)
/** PIOC_ABCDSR[1]_P13 Peripheral Select **/
#define PIOC_ABCDSR[1]_P13		(1 << 13)
/** PIOC_ABCDSR[1]_P12 Peripheral Select **/
#define PIOC_ABCDSR[1]_P12		(1 << 12)
/** PIOC_ABCDSR[1]_P11 Peripheral Select **/
#define PIOC_ABCDSR[1]_P11		(1 << 11)
/** PIOC_ABCDSR[1]_P10 Peripheral Select **/
#define PIOC_ABCDSR[1]_P10		(1 << 10)
/** PIOC_ABCDSR[1]_P9 Peripheral Select **/
#define PIOC_ABCDSR[1]_P9		(1 << 9)
/** PIOC_ABCDSR[1]_P8 Peripheral Select **/
#define PIOC_ABCDSR[1]_P8		(1 << 8)
/** PIOC_ABCDSR[1]_P7 Peripheral Select **/
#define PIOC_ABCDSR[1]_P7		(1 << 7)
/** PIOC_ABCDSR[1]_P6 Peripheral Select **/
#define PIOC_ABCDSR[1]_P6		(1 << 6)
/** PIOC_ABCDSR[1]_P5 Peripheral Select **/
#define PIOC_ABCDSR[1]_P5		(1 << 5)
/** PIOC_ABCDSR[1]_P4 Peripheral Select **/
#define PIOC_ABCDSR[1]_P4		(1 << 4)
/** PIOC_ABCDSR[1]_P3 Peripheral Select **/
#define PIOC_ABCDSR[1]_P3		(1 << 3)
/** PIOC_ABCDSR[1]_P2 Peripheral Select **/
#define PIOC_ABCDSR[1]_P2		(1 << 2)
/** PIOC_ABCDSR[1]_P1 Peripheral Select **/
#define PIOC_ABCDSR[1]_P1		(1 << 1)
/** PIOC_ABCDSR[1]_P0 Peripheral Select **/
#define PIOC_ABCDSR[1]_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifscdr IFSCDR Input Filter Slow Clock Disable Register
@{*/

/** PIOC_IFSCDR_P31 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P31		(1 << 31)
/** PIOC_IFSCDR_P30 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P30		(1 << 30)
/** PIOC_IFSCDR_P29 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P29		(1 << 29)
/** PIOC_IFSCDR_P28 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P28		(1 << 28)
/** PIOC_IFSCDR_P27 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P27		(1 << 27)
/** PIOC_IFSCDR_P26 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P26		(1 << 26)
/** PIOC_IFSCDR_P25 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P25		(1 << 25)
/** PIOC_IFSCDR_P24 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P24		(1 << 24)
/** PIOC_IFSCDR_P23 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P23		(1 << 23)
/** PIOC_IFSCDR_P22 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P22		(1 << 22)
/** PIOC_IFSCDR_P21 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P21		(1 << 21)
/** PIOC_IFSCDR_P20 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P20		(1 << 20)
/** PIOC_IFSCDR_P19 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P19		(1 << 19)
/** PIOC_IFSCDR_P18 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P18		(1 << 18)
/** PIOC_IFSCDR_P17 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P17		(1 << 17)
/** PIOC_IFSCDR_P16 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P16		(1 << 16)
/** PIOC_IFSCDR_P15 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P15		(1 << 15)
/** PIOC_IFSCDR_P14 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P14		(1 << 14)
/** PIOC_IFSCDR_P13 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P13		(1 << 13)
/** PIOC_IFSCDR_P12 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P12		(1 << 12)
/** PIOC_IFSCDR_P11 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P11		(1 << 11)
/** PIOC_IFSCDR_P10 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P10		(1 << 10)
/** PIOC_IFSCDR_P9 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P9		(1 << 9)
/** PIOC_IFSCDR_P8 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P8		(1 << 8)
/** PIOC_IFSCDR_P7 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P7		(1 << 7)
/** PIOC_IFSCDR_P6 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P6		(1 << 6)
/** PIOC_IFSCDR_P5 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P5		(1 << 5)
/** PIOC_IFSCDR_P4 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P4		(1 << 4)
/** PIOC_IFSCDR_P3 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P3		(1 << 3)
/** PIOC_IFSCDR_P2 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P2		(1 << 2)
/** PIOC_IFSCDR_P1 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P1		(1 << 1)
/** PIOC_IFSCDR_P0 Peripheral Clock Glitch Filtering Select **/
#define PIOC_IFSCDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifscer IFSCER Input Filter Slow Clock Enable Register
@{*/

/** PIOC_IFSCER_P31 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P31		(1 << 31)
/** PIOC_IFSCER_P30 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P30		(1 << 30)
/** PIOC_IFSCER_P29 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P29		(1 << 29)
/** PIOC_IFSCER_P28 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P28		(1 << 28)
/** PIOC_IFSCER_P27 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P27		(1 << 27)
/** PIOC_IFSCER_P26 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P26		(1 << 26)
/** PIOC_IFSCER_P25 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P25		(1 << 25)
/** PIOC_IFSCER_P24 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P24		(1 << 24)
/** PIOC_IFSCER_P23 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P23		(1 << 23)
/** PIOC_IFSCER_P22 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P22		(1 << 22)
/** PIOC_IFSCER_P21 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P21		(1 << 21)
/** PIOC_IFSCER_P20 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P20		(1 << 20)
/** PIOC_IFSCER_P19 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P19		(1 << 19)
/** PIOC_IFSCER_P18 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P18		(1 << 18)
/** PIOC_IFSCER_P17 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P17		(1 << 17)
/** PIOC_IFSCER_P16 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P16		(1 << 16)
/** PIOC_IFSCER_P15 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P15		(1 << 15)
/** PIOC_IFSCER_P14 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P14		(1 << 14)
/** PIOC_IFSCER_P13 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P13		(1 << 13)
/** PIOC_IFSCER_P12 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P12		(1 << 12)
/** PIOC_IFSCER_P11 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P11		(1 << 11)
/** PIOC_IFSCER_P10 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P10		(1 << 10)
/** PIOC_IFSCER_P9 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P9		(1 << 9)
/** PIOC_IFSCER_P8 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P8		(1 << 8)
/** PIOC_IFSCER_P7 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P7		(1 << 7)
/** PIOC_IFSCER_P6 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P6		(1 << 6)
/** PIOC_IFSCER_P5 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P5		(1 << 5)
/** PIOC_IFSCER_P4 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P4		(1 << 4)
/** PIOC_IFSCER_P3 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P3		(1 << 3)
/** PIOC_IFSCER_P2 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P2		(1 << 2)
/** PIOC_IFSCER_P1 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P1		(1 << 1)
/** PIOC_IFSCER_P0 Slow Clock Debouncing Filtering Select **/
#define PIOC_IFSCER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ifscsr IFSCSR Input Filter Slow Clock Status Register
@{*/

/** PIOC_IFSCSR_P31 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P31		(1 << 31)
/** PIOC_IFSCSR_P30 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P30		(1 << 30)
/** PIOC_IFSCSR_P29 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P29		(1 << 29)
/** PIOC_IFSCSR_P28 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P28		(1 << 28)
/** PIOC_IFSCSR_P27 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P27		(1 << 27)
/** PIOC_IFSCSR_P26 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P26		(1 << 26)
/** PIOC_IFSCSR_P25 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P25		(1 << 25)
/** PIOC_IFSCSR_P24 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P24		(1 << 24)
/** PIOC_IFSCSR_P23 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P23		(1 << 23)
/** PIOC_IFSCSR_P22 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P22		(1 << 22)
/** PIOC_IFSCSR_P21 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P21		(1 << 21)
/** PIOC_IFSCSR_P20 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P20		(1 << 20)
/** PIOC_IFSCSR_P19 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P19		(1 << 19)
/** PIOC_IFSCSR_P18 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P18		(1 << 18)
/** PIOC_IFSCSR_P17 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P17		(1 << 17)
/** PIOC_IFSCSR_P16 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P16		(1 << 16)
/** PIOC_IFSCSR_P15 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P15		(1 << 15)
/** PIOC_IFSCSR_P14 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P14		(1 << 14)
/** PIOC_IFSCSR_P13 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P13		(1 << 13)
/** PIOC_IFSCSR_P12 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P12		(1 << 12)
/** PIOC_IFSCSR_P11 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P11		(1 << 11)
/** PIOC_IFSCSR_P10 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P10		(1 << 10)
/** PIOC_IFSCSR_P9 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P9		(1 << 9)
/** PIOC_IFSCSR_P8 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P8		(1 << 8)
/** PIOC_IFSCSR_P7 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P7		(1 << 7)
/** PIOC_IFSCSR_P6 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P6		(1 << 6)
/** PIOC_IFSCSR_P5 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P5		(1 << 5)
/** PIOC_IFSCSR_P4 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P4		(1 << 4)
/** PIOC_IFSCSR_P3 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P3		(1 << 3)
/** PIOC_IFSCSR_P2 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P2		(1 << 2)
/** PIOC_IFSCSR_P1 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P1		(1 << 1)
/** PIOC_IFSCSR_P0 Glitch or Debouncing Filter Selection Status **/
#define PIOC_IFSCSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_scdr SCDR Slow Clock Divider Debouncing Register
@{*/


#define PIOC_SCDR_DIV_SHIFT		0
#define PIOC_SCDR_DIV_MASK		0x3fff
/** @defgroup pioc_scdr_div DIV Slow Clock Divider Selection for Debouncing
@{*/
/**@}*/


/**@}*/

/** @defgroup pioc_ppddr PPDDR Pad Pull-down Disable Register
@{*/

/** PIOC_PPDDR_P31 Pull-Down Disable **/
#define PIOC_PPDDR_P31		(1 << 31)
/** PIOC_PPDDR_P30 Pull-Down Disable **/
#define PIOC_PPDDR_P30		(1 << 30)
/** PIOC_PPDDR_P29 Pull-Down Disable **/
#define PIOC_PPDDR_P29		(1 << 29)
/** PIOC_PPDDR_P28 Pull-Down Disable **/
#define PIOC_PPDDR_P28		(1 << 28)
/** PIOC_PPDDR_P27 Pull-Down Disable **/
#define PIOC_PPDDR_P27		(1 << 27)
/** PIOC_PPDDR_P26 Pull-Down Disable **/
#define PIOC_PPDDR_P26		(1 << 26)
/** PIOC_PPDDR_P25 Pull-Down Disable **/
#define PIOC_PPDDR_P25		(1 << 25)
/** PIOC_PPDDR_P24 Pull-Down Disable **/
#define PIOC_PPDDR_P24		(1 << 24)
/** PIOC_PPDDR_P23 Pull-Down Disable **/
#define PIOC_PPDDR_P23		(1 << 23)
/** PIOC_PPDDR_P22 Pull-Down Disable **/
#define PIOC_PPDDR_P22		(1 << 22)
/** PIOC_PPDDR_P21 Pull-Down Disable **/
#define PIOC_PPDDR_P21		(1 << 21)
/** PIOC_PPDDR_P20 Pull-Down Disable **/
#define PIOC_PPDDR_P20		(1 << 20)
/** PIOC_PPDDR_P19 Pull-Down Disable **/
#define PIOC_PPDDR_P19		(1 << 19)
/** PIOC_PPDDR_P18 Pull-Down Disable **/
#define PIOC_PPDDR_P18		(1 << 18)
/** PIOC_PPDDR_P17 Pull-Down Disable **/
#define PIOC_PPDDR_P17		(1 << 17)
/** PIOC_PPDDR_P16 Pull-Down Disable **/
#define PIOC_PPDDR_P16		(1 << 16)
/** PIOC_PPDDR_P15 Pull-Down Disable **/
#define PIOC_PPDDR_P15		(1 << 15)
/** PIOC_PPDDR_P14 Pull-Down Disable **/
#define PIOC_PPDDR_P14		(1 << 14)
/** PIOC_PPDDR_P13 Pull-Down Disable **/
#define PIOC_PPDDR_P13		(1 << 13)
/** PIOC_PPDDR_P12 Pull-Down Disable **/
#define PIOC_PPDDR_P12		(1 << 12)
/** PIOC_PPDDR_P11 Pull-Down Disable **/
#define PIOC_PPDDR_P11		(1 << 11)
/** PIOC_PPDDR_P10 Pull-Down Disable **/
#define PIOC_PPDDR_P10		(1 << 10)
/** PIOC_PPDDR_P9 Pull-Down Disable **/
#define PIOC_PPDDR_P9		(1 << 9)
/** PIOC_PPDDR_P8 Pull-Down Disable **/
#define PIOC_PPDDR_P8		(1 << 8)
/** PIOC_PPDDR_P7 Pull-Down Disable **/
#define PIOC_PPDDR_P7		(1 << 7)
/** PIOC_PPDDR_P6 Pull-Down Disable **/
#define PIOC_PPDDR_P6		(1 << 6)
/** PIOC_PPDDR_P5 Pull-Down Disable **/
#define PIOC_PPDDR_P5		(1 << 5)
/** PIOC_PPDDR_P4 Pull-Down Disable **/
#define PIOC_PPDDR_P4		(1 << 4)
/** PIOC_PPDDR_P3 Pull-Down Disable **/
#define PIOC_PPDDR_P3		(1 << 3)
/** PIOC_PPDDR_P2 Pull-Down Disable **/
#define PIOC_PPDDR_P2		(1 << 2)
/** PIOC_PPDDR_P1 Pull-Down Disable **/
#define PIOC_PPDDR_P1		(1 << 1)
/** PIOC_PPDDR_P0 Pull-Down Disable **/
#define PIOC_PPDDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ppder PPDER Pad Pull-down Enable Register
@{*/

/** PIOC_PPDER_P31 Pull-Down Enable **/
#define PIOC_PPDER_P31		(1 << 31)
/** PIOC_PPDER_P30 Pull-Down Enable **/
#define PIOC_PPDER_P30		(1 << 30)
/** PIOC_PPDER_P29 Pull-Down Enable **/
#define PIOC_PPDER_P29		(1 << 29)
/** PIOC_PPDER_P28 Pull-Down Enable **/
#define PIOC_PPDER_P28		(1 << 28)
/** PIOC_PPDER_P27 Pull-Down Enable **/
#define PIOC_PPDER_P27		(1 << 27)
/** PIOC_PPDER_P26 Pull-Down Enable **/
#define PIOC_PPDER_P26		(1 << 26)
/** PIOC_PPDER_P25 Pull-Down Enable **/
#define PIOC_PPDER_P25		(1 << 25)
/** PIOC_PPDER_P24 Pull-Down Enable **/
#define PIOC_PPDER_P24		(1 << 24)
/** PIOC_PPDER_P23 Pull-Down Enable **/
#define PIOC_PPDER_P23		(1 << 23)
/** PIOC_PPDER_P22 Pull-Down Enable **/
#define PIOC_PPDER_P22		(1 << 22)
/** PIOC_PPDER_P21 Pull-Down Enable **/
#define PIOC_PPDER_P21		(1 << 21)
/** PIOC_PPDER_P20 Pull-Down Enable **/
#define PIOC_PPDER_P20		(1 << 20)
/** PIOC_PPDER_P19 Pull-Down Enable **/
#define PIOC_PPDER_P19		(1 << 19)
/** PIOC_PPDER_P18 Pull-Down Enable **/
#define PIOC_PPDER_P18		(1 << 18)
/** PIOC_PPDER_P17 Pull-Down Enable **/
#define PIOC_PPDER_P17		(1 << 17)
/** PIOC_PPDER_P16 Pull-Down Enable **/
#define PIOC_PPDER_P16		(1 << 16)
/** PIOC_PPDER_P15 Pull-Down Enable **/
#define PIOC_PPDER_P15		(1 << 15)
/** PIOC_PPDER_P14 Pull-Down Enable **/
#define PIOC_PPDER_P14		(1 << 14)
/** PIOC_PPDER_P13 Pull-Down Enable **/
#define PIOC_PPDER_P13		(1 << 13)
/** PIOC_PPDER_P12 Pull-Down Enable **/
#define PIOC_PPDER_P12		(1 << 12)
/** PIOC_PPDER_P11 Pull-Down Enable **/
#define PIOC_PPDER_P11		(1 << 11)
/** PIOC_PPDER_P10 Pull-Down Enable **/
#define PIOC_PPDER_P10		(1 << 10)
/** PIOC_PPDER_P9 Pull-Down Enable **/
#define PIOC_PPDER_P9		(1 << 9)
/** PIOC_PPDER_P8 Pull-Down Enable **/
#define PIOC_PPDER_P8		(1 << 8)
/** PIOC_PPDER_P7 Pull-Down Enable **/
#define PIOC_PPDER_P7		(1 << 7)
/** PIOC_PPDER_P6 Pull-Down Enable **/
#define PIOC_PPDER_P6		(1 << 6)
/** PIOC_PPDER_P5 Pull-Down Enable **/
#define PIOC_PPDER_P5		(1 << 5)
/** PIOC_PPDER_P4 Pull-Down Enable **/
#define PIOC_PPDER_P4		(1 << 4)
/** PIOC_PPDER_P3 Pull-Down Enable **/
#define PIOC_PPDER_P3		(1 << 3)
/** PIOC_PPDER_P2 Pull-Down Enable **/
#define PIOC_PPDER_P2		(1 << 2)
/** PIOC_PPDER_P1 Pull-Down Enable **/
#define PIOC_PPDER_P1		(1 << 1)
/** PIOC_PPDER_P0 Pull-Down Enable **/
#define PIOC_PPDER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ppdsr PPDSR Pad Pull-down Status Register
@{*/

/** PIOC_PPDSR_P31 Pull-Down Status **/
#define PIOC_PPDSR_P31		(1 << 31)
/** PIOC_PPDSR_P30 Pull-Down Status **/
#define PIOC_PPDSR_P30		(1 << 30)
/** PIOC_PPDSR_P29 Pull-Down Status **/
#define PIOC_PPDSR_P29		(1 << 29)
/** PIOC_PPDSR_P28 Pull-Down Status **/
#define PIOC_PPDSR_P28		(1 << 28)
/** PIOC_PPDSR_P27 Pull-Down Status **/
#define PIOC_PPDSR_P27		(1 << 27)
/** PIOC_PPDSR_P26 Pull-Down Status **/
#define PIOC_PPDSR_P26		(1 << 26)
/** PIOC_PPDSR_P25 Pull-Down Status **/
#define PIOC_PPDSR_P25		(1 << 25)
/** PIOC_PPDSR_P24 Pull-Down Status **/
#define PIOC_PPDSR_P24		(1 << 24)
/** PIOC_PPDSR_P23 Pull-Down Status **/
#define PIOC_PPDSR_P23		(1 << 23)
/** PIOC_PPDSR_P22 Pull-Down Status **/
#define PIOC_PPDSR_P22		(1 << 22)
/** PIOC_PPDSR_P21 Pull-Down Status **/
#define PIOC_PPDSR_P21		(1 << 21)
/** PIOC_PPDSR_P20 Pull-Down Status **/
#define PIOC_PPDSR_P20		(1 << 20)
/** PIOC_PPDSR_P19 Pull-Down Status **/
#define PIOC_PPDSR_P19		(1 << 19)
/** PIOC_PPDSR_P18 Pull-Down Status **/
#define PIOC_PPDSR_P18		(1 << 18)
/** PIOC_PPDSR_P17 Pull-Down Status **/
#define PIOC_PPDSR_P17		(1 << 17)
/** PIOC_PPDSR_P16 Pull-Down Status **/
#define PIOC_PPDSR_P16		(1 << 16)
/** PIOC_PPDSR_P15 Pull-Down Status **/
#define PIOC_PPDSR_P15		(1 << 15)
/** PIOC_PPDSR_P14 Pull-Down Status **/
#define PIOC_PPDSR_P14		(1 << 14)
/** PIOC_PPDSR_P13 Pull-Down Status **/
#define PIOC_PPDSR_P13		(1 << 13)
/** PIOC_PPDSR_P12 Pull-Down Status **/
#define PIOC_PPDSR_P12		(1 << 12)
/** PIOC_PPDSR_P11 Pull-Down Status **/
#define PIOC_PPDSR_P11		(1 << 11)
/** PIOC_PPDSR_P10 Pull-Down Status **/
#define PIOC_PPDSR_P10		(1 << 10)
/** PIOC_PPDSR_P9 Pull-Down Status **/
#define PIOC_PPDSR_P9		(1 << 9)
/** PIOC_PPDSR_P8 Pull-Down Status **/
#define PIOC_PPDSR_P8		(1 << 8)
/** PIOC_PPDSR_P7 Pull-Down Status **/
#define PIOC_PPDSR_P7		(1 << 7)
/** PIOC_PPDSR_P6 Pull-Down Status **/
#define PIOC_PPDSR_P6		(1 << 6)
/** PIOC_PPDSR_P5 Pull-Down Status **/
#define PIOC_PPDSR_P5		(1 << 5)
/** PIOC_PPDSR_P4 Pull-Down Status **/
#define PIOC_PPDSR_P4		(1 << 4)
/** PIOC_PPDSR_P3 Pull-Down Status **/
#define PIOC_PPDSR_P3		(1 << 3)
/** PIOC_PPDSR_P2 Pull-Down Status **/
#define PIOC_PPDSR_P2		(1 << 2)
/** PIOC_PPDSR_P1 Pull-Down Status **/
#define PIOC_PPDSR_P1		(1 << 1)
/** PIOC_PPDSR_P0 Pull-Down Status **/
#define PIOC_PPDSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_ower OWER Output Write Enable
@{*/

/** PIOC_OWER_P31 Output Write Enable **/
#define PIOC_OWER_P31		(1 << 31)
/** PIOC_OWER_P30 Output Write Enable **/
#define PIOC_OWER_P30		(1 << 30)
/** PIOC_OWER_P29 Output Write Enable **/
#define PIOC_OWER_P29		(1 << 29)
/** PIOC_OWER_P28 Output Write Enable **/
#define PIOC_OWER_P28		(1 << 28)
/** PIOC_OWER_P27 Output Write Enable **/
#define PIOC_OWER_P27		(1 << 27)
/** PIOC_OWER_P26 Output Write Enable **/
#define PIOC_OWER_P26		(1 << 26)
/** PIOC_OWER_P25 Output Write Enable **/
#define PIOC_OWER_P25		(1 << 25)
/** PIOC_OWER_P24 Output Write Enable **/
#define PIOC_OWER_P24		(1 << 24)
/** PIOC_OWER_P23 Output Write Enable **/
#define PIOC_OWER_P23		(1 << 23)
/** PIOC_OWER_P22 Output Write Enable **/
#define PIOC_OWER_P22		(1 << 22)
/** PIOC_OWER_P21 Output Write Enable **/
#define PIOC_OWER_P21		(1 << 21)
/** PIOC_OWER_P20 Output Write Enable **/
#define PIOC_OWER_P20		(1 << 20)
/** PIOC_OWER_P19 Output Write Enable **/
#define PIOC_OWER_P19		(1 << 19)
/** PIOC_OWER_P18 Output Write Enable **/
#define PIOC_OWER_P18		(1 << 18)
/** PIOC_OWER_P17 Output Write Enable **/
#define PIOC_OWER_P17		(1 << 17)
/** PIOC_OWER_P16 Output Write Enable **/
#define PIOC_OWER_P16		(1 << 16)
/** PIOC_OWER_P15 Output Write Enable **/
#define PIOC_OWER_P15		(1 << 15)
/** PIOC_OWER_P14 Output Write Enable **/
#define PIOC_OWER_P14		(1 << 14)
/** PIOC_OWER_P13 Output Write Enable **/
#define PIOC_OWER_P13		(1 << 13)
/** PIOC_OWER_P12 Output Write Enable **/
#define PIOC_OWER_P12		(1 << 12)
/** PIOC_OWER_P11 Output Write Enable **/
#define PIOC_OWER_P11		(1 << 11)
/** PIOC_OWER_P10 Output Write Enable **/
#define PIOC_OWER_P10		(1 << 10)
/** PIOC_OWER_P9 Output Write Enable **/
#define PIOC_OWER_P9		(1 << 9)
/** PIOC_OWER_P8 Output Write Enable **/
#define PIOC_OWER_P8		(1 << 8)
/** PIOC_OWER_P7 Output Write Enable **/
#define PIOC_OWER_P7		(1 << 7)
/** PIOC_OWER_P6 Output Write Enable **/
#define PIOC_OWER_P6		(1 << 6)
/** PIOC_OWER_P5 Output Write Enable **/
#define PIOC_OWER_P5		(1 << 5)
/** PIOC_OWER_P4 Output Write Enable **/
#define PIOC_OWER_P4		(1 << 4)
/** PIOC_OWER_P3 Output Write Enable **/
#define PIOC_OWER_P3		(1 << 3)
/** PIOC_OWER_P2 Output Write Enable **/
#define PIOC_OWER_P2		(1 << 2)
/** PIOC_OWER_P1 Output Write Enable **/
#define PIOC_OWER_P1		(1 << 1)
/** PIOC_OWER_P0 Output Write Enable **/
#define PIOC_OWER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_owdr OWDR Output Write Disable
@{*/

/** PIOC_OWDR_P31 Output Write Disable **/
#define PIOC_OWDR_P31		(1 << 31)
/** PIOC_OWDR_P30 Output Write Disable **/
#define PIOC_OWDR_P30		(1 << 30)
/** PIOC_OWDR_P29 Output Write Disable **/
#define PIOC_OWDR_P29		(1 << 29)
/** PIOC_OWDR_P28 Output Write Disable **/
#define PIOC_OWDR_P28		(1 << 28)
/** PIOC_OWDR_P27 Output Write Disable **/
#define PIOC_OWDR_P27		(1 << 27)
/** PIOC_OWDR_P26 Output Write Disable **/
#define PIOC_OWDR_P26		(1 << 26)
/** PIOC_OWDR_P25 Output Write Disable **/
#define PIOC_OWDR_P25		(1 << 25)
/** PIOC_OWDR_P24 Output Write Disable **/
#define PIOC_OWDR_P24		(1 << 24)
/** PIOC_OWDR_P23 Output Write Disable **/
#define PIOC_OWDR_P23		(1 << 23)
/** PIOC_OWDR_P22 Output Write Disable **/
#define PIOC_OWDR_P22		(1 << 22)
/** PIOC_OWDR_P21 Output Write Disable **/
#define PIOC_OWDR_P21		(1 << 21)
/** PIOC_OWDR_P20 Output Write Disable **/
#define PIOC_OWDR_P20		(1 << 20)
/** PIOC_OWDR_P19 Output Write Disable **/
#define PIOC_OWDR_P19		(1 << 19)
/** PIOC_OWDR_P18 Output Write Disable **/
#define PIOC_OWDR_P18		(1 << 18)
/** PIOC_OWDR_P17 Output Write Disable **/
#define PIOC_OWDR_P17		(1 << 17)
/** PIOC_OWDR_P16 Output Write Disable **/
#define PIOC_OWDR_P16		(1 << 16)
/** PIOC_OWDR_P15 Output Write Disable **/
#define PIOC_OWDR_P15		(1 << 15)
/** PIOC_OWDR_P14 Output Write Disable **/
#define PIOC_OWDR_P14		(1 << 14)
/** PIOC_OWDR_P13 Output Write Disable **/
#define PIOC_OWDR_P13		(1 << 13)
/** PIOC_OWDR_P12 Output Write Disable **/
#define PIOC_OWDR_P12		(1 << 12)
/** PIOC_OWDR_P11 Output Write Disable **/
#define PIOC_OWDR_P11		(1 << 11)
/** PIOC_OWDR_P10 Output Write Disable **/
#define PIOC_OWDR_P10		(1 << 10)
/** PIOC_OWDR_P9 Output Write Disable **/
#define PIOC_OWDR_P9		(1 << 9)
/** PIOC_OWDR_P8 Output Write Disable **/
#define PIOC_OWDR_P8		(1 << 8)
/** PIOC_OWDR_P7 Output Write Disable **/
#define PIOC_OWDR_P7		(1 << 7)
/** PIOC_OWDR_P6 Output Write Disable **/
#define PIOC_OWDR_P6		(1 << 6)
/** PIOC_OWDR_P5 Output Write Disable **/
#define PIOC_OWDR_P5		(1 << 5)
/** PIOC_OWDR_P4 Output Write Disable **/
#define PIOC_OWDR_P4		(1 << 4)
/** PIOC_OWDR_P3 Output Write Disable **/
#define PIOC_OWDR_P3		(1 << 3)
/** PIOC_OWDR_P2 Output Write Disable **/
#define PIOC_OWDR_P2		(1 << 2)
/** PIOC_OWDR_P1 Output Write Disable **/
#define PIOC_OWDR_P1		(1 << 1)
/** PIOC_OWDR_P0 Output Write Disable **/
#define PIOC_OWDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_owsr OWSR Output Write Status Register
@{*/

/** PIOC_OWSR_P31 Output Write Status **/
#define PIOC_OWSR_P31		(1 << 31)
/** PIOC_OWSR_P30 Output Write Status **/
#define PIOC_OWSR_P30		(1 << 30)
/** PIOC_OWSR_P29 Output Write Status **/
#define PIOC_OWSR_P29		(1 << 29)
/** PIOC_OWSR_P28 Output Write Status **/
#define PIOC_OWSR_P28		(1 << 28)
/** PIOC_OWSR_P27 Output Write Status **/
#define PIOC_OWSR_P27		(1 << 27)
/** PIOC_OWSR_P26 Output Write Status **/
#define PIOC_OWSR_P26		(1 << 26)
/** PIOC_OWSR_P25 Output Write Status **/
#define PIOC_OWSR_P25		(1 << 25)
/** PIOC_OWSR_P24 Output Write Status **/
#define PIOC_OWSR_P24		(1 << 24)
/** PIOC_OWSR_P23 Output Write Status **/
#define PIOC_OWSR_P23		(1 << 23)
/** PIOC_OWSR_P22 Output Write Status **/
#define PIOC_OWSR_P22		(1 << 22)
/** PIOC_OWSR_P21 Output Write Status **/
#define PIOC_OWSR_P21		(1 << 21)
/** PIOC_OWSR_P20 Output Write Status **/
#define PIOC_OWSR_P20		(1 << 20)
/** PIOC_OWSR_P19 Output Write Status **/
#define PIOC_OWSR_P19		(1 << 19)
/** PIOC_OWSR_P18 Output Write Status **/
#define PIOC_OWSR_P18		(1 << 18)
/** PIOC_OWSR_P17 Output Write Status **/
#define PIOC_OWSR_P17		(1 << 17)
/** PIOC_OWSR_P16 Output Write Status **/
#define PIOC_OWSR_P16		(1 << 16)
/** PIOC_OWSR_P15 Output Write Status **/
#define PIOC_OWSR_P15		(1 << 15)
/** PIOC_OWSR_P14 Output Write Status **/
#define PIOC_OWSR_P14		(1 << 14)
/** PIOC_OWSR_P13 Output Write Status **/
#define PIOC_OWSR_P13		(1 << 13)
/** PIOC_OWSR_P12 Output Write Status **/
#define PIOC_OWSR_P12		(1 << 12)
/** PIOC_OWSR_P11 Output Write Status **/
#define PIOC_OWSR_P11		(1 << 11)
/** PIOC_OWSR_P10 Output Write Status **/
#define PIOC_OWSR_P10		(1 << 10)
/** PIOC_OWSR_P9 Output Write Status **/
#define PIOC_OWSR_P9		(1 << 9)
/** PIOC_OWSR_P8 Output Write Status **/
#define PIOC_OWSR_P8		(1 << 8)
/** PIOC_OWSR_P7 Output Write Status **/
#define PIOC_OWSR_P7		(1 << 7)
/** PIOC_OWSR_P6 Output Write Status **/
#define PIOC_OWSR_P6		(1 << 6)
/** PIOC_OWSR_P5 Output Write Status **/
#define PIOC_OWSR_P5		(1 << 5)
/** PIOC_OWSR_P4 Output Write Status **/
#define PIOC_OWSR_P4		(1 << 4)
/** PIOC_OWSR_P3 Output Write Status **/
#define PIOC_OWSR_P3		(1 << 3)
/** PIOC_OWSR_P2 Output Write Status **/
#define PIOC_OWSR_P2		(1 << 2)
/** PIOC_OWSR_P1 Output Write Status **/
#define PIOC_OWSR_P1		(1 << 1)
/** PIOC_OWSR_P0 Output Write Status **/
#define PIOC_OWSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_aimer AIMER Additional Interrupt Modes Enable Register
@{*/

/** PIOC_AIMER_P31 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P31		(1 << 31)
/** PIOC_AIMER_P30 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P30		(1 << 30)
/** PIOC_AIMER_P29 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P29		(1 << 29)
/** PIOC_AIMER_P28 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P28		(1 << 28)
/** PIOC_AIMER_P27 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P27		(1 << 27)
/** PIOC_AIMER_P26 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P26		(1 << 26)
/** PIOC_AIMER_P25 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P25		(1 << 25)
/** PIOC_AIMER_P24 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P24		(1 << 24)
/** PIOC_AIMER_P23 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P23		(1 << 23)
/** PIOC_AIMER_P22 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P22		(1 << 22)
/** PIOC_AIMER_P21 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P21		(1 << 21)
/** PIOC_AIMER_P20 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P20		(1 << 20)
/** PIOC_AIMER_P19 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P19		(1 << 19)
/** PIOC_AIMER_P18 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P18		(1 << 18)
/** PIOC_AIMER_P17 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P17		(1 << 17)
/** PIOC_AIMER_P16 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P16		(1 << 16)
/** PIOC_AIMER_P15 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P15		(1 << 15)
/** PIOC_AIMER_P14 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P14		(1 << 14)
/** PIOC_AIMER_P13 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P13		(1 << 13)
/** PIOC_AIMER_P12 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P12		(1 << 12)
/** PIOC_AIMER_P11 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P11		(1 << 11)
/** PIOC_AIMER_P10 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P10		(1 << 10)
/** PIOC_AIMER_P9 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P9		(1 << 9)
/** PIOC_AIMER_P8 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P8		(1 << 8)
/** PIOC_AIMER_P7 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P7		(1 << 7)
/** PIOC_AIMER_P6 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P6		(1 << 6)
/** PIOC_AIMER_P5 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P5		(1 << 5)
/** PIOC_AIMER_P4 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P4		(1 << 4)
/** PIOC_AIMER_P3 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P3		(1 << 3)
/** PIOC_AIMER_P2 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P2		(1 << 2)
/** PIOC_AIMER_P1 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P1		(1 << 1)
/** PIOC_AIMER_P0 Additional Interrupt Modes Enable **/
#define PIOC_AIMER_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_aimdr AIMDR Additional Interrupt Modes Disable Register
@{*/

/** PIOC_AIMDR_P31 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P31		(1 << 31)
/** PIOC_AIMDR_P30 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P30		(1 << 30)
/** PIOC_AIMDR_P29 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P29		(1 << 29)
/** PIOC_AIMDR_P28 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P28		(1 << 28)
/** PIOC_AIMDR_P27 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P27		(1 << 27)
/** PIOC_AIMDR_P26 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P26		(1 << 26)
/** PIOC_AIMDR_P25 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P25		(1 << 25)
/** PIOC_AIMDR_P24 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P24		(1 << 24)
/** PIOC_AIMDR_P23 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P23		(1 << 23)
/** PIOC_AIMDR_P22 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P22		(1 << 22)
/** PIOC_AIMDR_P21 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P21		(1 << 21)
/** PIOC_AIMDR_P20 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P20		(1 << 20)
/** PIOC_AIMDR_P19 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P19		(1 << 19)
/** PIOC_AIMDR_P18 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P18		(1 << 18)
/** PIOC_AIMDR_P17 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P17		(1 << 17)
/** PIOC_AIMDR_P16 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P16		(1 << 16)
/** PIOC_AIMDR_P15 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P15		(1 << 15)
/** PIOC_AIMDR_P14 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P14		(1 << 14)
/** PIOC_AIMDR_P13 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P13		(1 << 13)
/** PIOC_AIMDR_P12 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P12		(1 << 12)
/** PIOC_AIMDR_P11 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P11		(1 << 11)
/** PIOC_AIMDR_P10 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P10		(1 << 10)
/** PIOC_AIMDR_P9 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P9		(1 << 9)
/** PIOC_AIMDR_P8 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P8		(1 << 8)
/** PIOC_AIMDR_P7 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P7		(1 << 7)
/** PIOC_AIMDR_P6 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P6		(1 << 6)
/** PIOC_AIMDR_P5 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P5		(1 << 5)
/** PIOC_AIMDR_P4 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P4		(1 << 4)
/** PIOC_AIMDR_P3 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P3		(1 << 3)
/** PIOC_AIMDR_P2 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P2		(1 << 2)
/** PIOC_AIMDR_P1 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P1		(1 << 1)
/** PIOC_AIMDR_P0 Additional Interrupt Modes Disable **/
#define PIOC_AIMDR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_aimmr AIMMR Additional Interrupt Modes Mask Register
@{*/

/** PIOC_AIMMR_P31 IO Line Index **/
#define PIOC_AIMMR_P31		(1 << 31)
/** PIOC_AIMMR_P30 IO Line Index **/
#define PIOC_AIMMR_P30		(1 << 30)
/** PIOC_AIMMR_P29 IO Line Index **/
#define PIOC_AIMMR_P29		(1 << 29)
/** PIOC_AIMMR_P28 IO Line Index **/
#define PIOC_AIMMR_P28		(1 << 28)
/** PIOC_AIMMR_P27 IO Line Index **/
#define PIOC_AIMMR_P27		(1 << 27)
/** PIOC_AIMMR_P26 IO Line Index **/
#define PIOC_AIMMR_P26		(1 << 26)
/** PIOC_AIMMR_P25 IO Line Index **/
#define PIOC_AIMMR_P25		(1 << 25)
/** PIOC_AIMMR_P24 IO Line Index **/
#define PIOC_AIMMR_P24		(1 << 24)
/** PIOC_AIMMR_P23 IO Line Index **/
#define PIOC_AIMMR_P23		(1 << 23)
/** PIOC_AIMMR_P22 IO Line Index **/
#define PIOC_AIMMR_P22		(1 << 22)
/** PIOC_AIMMR_P21 IO Line Index **/
#define PIOC_AIMMR_P21		(1 << 21)
/** PIOC_AIMMR_P20 IO Line Index **/
#define PIOC_AIMMR_P20		(1 << 20)
/** PIOC_AIMMR_P19 IO Line Index **/
#define PIOC_AIMMR_P19		(1 << 19)
/** PIOC_AIMMR_P18 IO Line Index **/
#define PIOC_AIMMR_P18		(1 << 18)
/** PIOC_AIMMR_P17 IO Line Index **/
#define PIOC_AIMMR_P17		(1 << 17)
/** PIOC_AIMMR_P16 IO Line Index **/
#define PIOC_AIMMR_P16		(1 << 16)
/** PIOC_AIMMR_P15 IO Line Index **/
#define PIOC_AIMMR_P15		(1 << 15)
/** PIOC_AIMMR_P14 IO Line Index **/
#define PIOC_AIMMR_P14		(1 << 14)
/** PIOC_AIMMR_P13 IO Line Index **/
#define PIOC_AIMMR_P13		(1 << 13)
/** PIOC_AIMMR_P12 IO Line Index **/
#define PIOC_AIMMR_P12		(1 << 12)
/** PIOC_AIMMR_P11 IO Line Index **/
#define PIOC_AIMMR_P11		(1 << 11)
/** PIOC_AIMMR_P10 IO Line Index **/
#define PIOC_AIMMR_P10		(1 << 10)
/** PIOC_AIMMR_P9 IO Line Index **/
#define PIOC_AIMMR_P9		(1 << 9)
/** PIOC_AIMMR_P8 IO Line Index **/
#define PIOC_AIMMR_P8		(1 << 8)
/** PIOC_AIMMR_P7 IO Line Index **/
#define PIOC_AIMMR_P7		(1 << 7)
/** PIOC_AIMMR_P6 IO Line Index **/
#define PIOC_AIMMR_P6		(1 << 6)
/** PIOC_AIMMR_P5 IO Line Index **/
#define PIOC_AIMMR_P5		(1 << 5)
/** PIOC_AIMMR_P4 IO Line Index **/
#define PIOC_AIMMR_P4		(1 << 4)
/** PIOC_AIMMR_P3 IO Line Index **/
#define PIOC_AIMMR_P3		(1 << 3)
/** PIOC_AIMMR_P2 IO Line Index **/
#define PIOC_AIMMR_P2		(1 << 2)
/** PIOC_AIMMR_P1 IO Line Index **/
#define PIOC_AIMMR_P1		(1 << 1)
/** PIOC_AIMMR_P0 IO Line Index **/
#define PIOC_AIMMR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_esr ESR Edge Select Register
@{*/

/** PIOC_ESR_P31 Edge Interrupt Selection **/
#define PIOC_ESR_P31		(1 << 31)
/** PIOC_ESR_P30 Edge Interrupt Selection **/
#define PIOC_ESR_P30		(1 << 30)
/** PIOC_ESR_P29 Edge Interrupt Selection **/
#define PIOC_ESR_P29		(1 << 29)
/** PIOC_ESR_P28 Edge Interrupt Selection **/
#define PIOC_ESR_P28		(1 << 28)
/** PIOC_ESR_P27 Edge Interrupt Selection **/
#define PIOC_ESR_P27		(1 << 27)
/** PIOC_ESR_P26 Edge Interrupt Selection **/
#define PIOC_ESR_P26		(1 << 26)
/** PIOC_ESR_P25 Edge Interrupt Selection **/
#define PIOC_ESR_P25		(1 << 25)
/** PIOC_ESR_P24 Edge Interrupt Selection **/
#define PIOC_ESR_P24		(1 << 24)
/** PIOC_ESR_P23 Edge Interrupt Selection **/
#define PIOC_ESR_P23		(1 << 23)
/** PIOC_ESR_P22 Edge Interrupt Selection **/
#define PIOC_ESR_P22		(1 << 22)
/** PIOC_ESR_P21 Edge Interrupt Selection **/
#define PIOC_ESR_P21		(1 << 21)
/** PIOC_ESR_P20 Edge Interrupt Selection **/
#define PIOC_ESR_P20		(1 << 20)
/** PIOC_ESR_P19 Edge Interrupt Selection **/
#define PIOC_ESR_P19		(1 << 19)
/** PIOC_ESR_P18 Edge Interrupt Selection **/
#define PIOC_ESR_P18		(1 << 18)
/** PIOC_ESR_P17 Edge Interrupt Selection **/
#define PIOC_ESR_P17		(1 << 17)
/** PIOC_ESR_P16 Edge Interrupt Selection **/
#define PIOC_ESR_P16		(1 << 16)
/** PIOC_ESR_P15 Edge Interrupt Selection **/
#define PIOC_ESR_P15		(1 << 15)
/** PIOC_ESR_P14 Edge Interrupt Selection **/
#define PIOC_ESR_P14		(1 << 14)
/** PIOC_ESR_P13 Edge Interrupt Selection **/
#define PIOC_ESR_P13		(1 << 13)
/** PIOC_ESR_P12 Edge Interrupt Selection **/
#define PIOC_ESR_P12		(1 << 12)
/** PIOC_ESR_P11 Edge Interrupt Selection **/
#define PIOC_ESR_P11		(1 << 11)
/** PIOC_ESR_P10 Edge Interrupt Selection **/
#define PIOC_ESR_P10		(1 << 10)
/** PIOC_ESR_P9 Edge Interrupt Selection **/
#define PIOC_ESR_P9		(1 << 9)
/** PIOC_ESR_P8 Edge Interrupt Selection **/
#define PIOC_ESR_P8		(1 << 8)
/** PIOC_ESR_P7 Edge Interrupt Selection **/
#define PIOC_ESR_P7		(1 << 7)
/** PIOC_ESR_P6 Edge Interrupt Selection **/
#define PIOC_ESR_P6		(1 << 6)
/** PIOC_ESR_P5 Edge Interrupt Selection **/
#define PIOC_ESR_P5		(1 << 5)
/** PIOC_ESR_P4 Edge Interrupt Selection **/
#define PIOC_ESR_P4		(1 << 4)
/** PIOC_ESR_P3 Edge Interrupt Selection **/
#define PIOC_ESR_P3		(1 << 3)
/** PIOC_ESR_P2 Edge Interrupt Selection **/
#define PIOC_ESR_P2		(1 << 2)
/** PIOC_ESR_P1 Edge Interrupt Selection **/
#define PIOC_ESR_P1		(1 << 1)
/** PIOC_ESR_P0 Edge Interrupt Selection **/
#define PIOC_ESR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_lsr LSR Level Select Register
@{*/

/** PIOC_LSR_P31 Level Interrupt Selection **/
#define PIOC_LSR_P31		(1 << 31)
/** PIOC_LSR_P30 Level Interrupt Selection **/
#define PIOC_LSR_P30		(1 << 30)
/** PIOC_LSR_P29 Level Interrupt Selection **/
#define PIOC_LSR_P29		(1 << 29)
/** PIOC_LSR_P28 Level Interrupt Selection **/
#define PIOC_LSR_P28		(1 << 28)
/** PIOC_LSR_P27 Level Interrupt Selection **/
#define PIOC_LSR_P27		(1 << 27)
/** PIOC_LSR_P26 Level Interrupt Selection **/
#define PIOC_LSR_P26		(1 << 26)
/** PIOC_LSR_P25 Level Interrupt Selection **/
#define PIOC_LSR_P25		(1 << 25)
/** PIOC_LSR_P24 Level Interrupt Selection **/
#define PIOC_LSR_P24		(1 << 24)
/** PIOC_LSR_P23 Level Interrupt Selection **/
#define PIOC_LSR_P23		(1 << 23)
/** PIOC_LSR_P22 Level Interrupt Selection **/
#define PIOC_LSR_P22		(1 << 22)
/** PIOC_LSR_P21 Level Interrupt Selection **/
#define PIOC_LSR_P21		(1 << 21)
/** PIOC_LSR_P20 Level Interrupt Selection **/
#define PIOC_LSR_P20		(1 << 20)
/** PIOC_LSR_P19 Level Interrupt Selection **/
#define PIOC_LSR_P19		(1 << 19)
/** PIOC_LSR_P18 Level Interrupt Selection **/
#define PIOC_LSR_P18		(1 << 18)
/** PIOC_LSR_P17 Level Interrupt Selection **/
#define PIOC_LSR_P17		(1 << 17)
/** PIOC_LSR_P16 Level Interrupt Selection **/
#define PIOC_LSR_P16		(1 << 16)
/** PIOC_LSR_P15 Level Interrupt Selection **/
#define PIOC_LSR_P15		(1 << 15)
/** PIOC_LSR_P14 Level Interrupt Selection **/
#define PIOC_LSR_P14		(1 << 14)
/** PIOC_LSR_P13 Level Interrupt Selection **/
#define PIOC_LSR_P13		(1 << 13)
/** PIOC_LSR_P12 Level Interrupt Selection **/
#define PIOC_LSR_P12		(1 << 12)
/** PIOC_LSR_P11 Level Interrupt Selection **/
#define PIOC_LSR_P11		(1 << 11)
/** PIOC_LSR_P10 Level Interrupt Selection **/
#define PIOC_LSR_P10		(1 << 10)
/** PIOC_LSR_P9 Level Interrupt Selection **/
#define PIOC_LSR_P9		(1 << 9)
/** PIOC_LSR_P8 Level Interrupt Selection **/
#define PIOC_LSR_P8		(1 << 8)
/** PIOC_LSR_P7 Level Interrupt Selection **/
#define PIOC_LSR_P7		(1 << 7)
/** PIOC_LSR_P6 Level Interrupt Selection **/
#define PIOC_LSR_P6		(1 << 6)
/** PIOC_LSR_P5 Level Interrupt Selection **/
#define PIOC_LSR_P5		(1 << 5)
/** PIOC_LSR_P4 Level Interrupt Selection **/
#define PIOC_LSR_P4		(1 << 4)
/** PIOC_LSR_P3 Level Interrupt Selection **/
#define PIOC_LSR_P3		(1 << 3)
/** PIOC_LSR_P2 Level Interrupt Selection **/
#define PIOC_LSR_P2		(1 << 2)
/** PIOC_LSR_P1 Level Interrupt Selection **/
#define PIOC_LSR_P1		(1 << 1)
/** PIOC_LSR_P0 Level Interrupt Selection **/
#define PIOC_LSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_elsr ELSR Edge/Level Status Register
@{*/

/** PIOC_ELSR_P31 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P31		(1 << 31)
/** PIOC_ELSR_P30 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P30		(1 << 30)
/** PIOC_ELSR_P29 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P29		(1 << 29)
/** PIOC_ELSR_P28 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P28		(1 << 28)
/** PIOC_ELSR_P27 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P27		(1 << 27)
/** PIOC_ELSR_P26 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P26		(1 << 26)
/** PIOC_ELSR_P25 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P25		(1 << 25)
/** PIOC_ELSR_P24 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P24		(1 << 24)
/** PIOC_ELSR_P23 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P23		(1 << 23)
/** PIOC_ELSR_P22 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P22		(1 << 22)
/** PIOC_ELSR_P21 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P21		(1 << 21)
/** PIOC_ELSR_P20 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P20		(1 << 20)
/** PIOC_ELSR_P19 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P19		(1 << 19)
/** PIOC_ELSR_P18 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P18		(1 << 18)
/** PIOC_ELSR_P17 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P17		(1 << 17)
/** PIOC_ELSR_P16 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P16		(1 << 16)
/** PIOC_ELSR_P15 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P15		(1 << 15)
/** PIOC_ELSR_P14 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P14		(1 << 14)
/** PIOC_ELSR_P13 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P13		(1 << 13)
/** PIOC_ELSR_P12 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P12		(1 << 12)
/** PIOC_ELSR_P11 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P11		(1 << 11)
/** PIOC_ELSR_P10 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P10		(1 << 10)
/** PIOC_ELSR_P9 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P9		(1 << 9)
/** PIOC_ELSR_P8 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P8		(1 << 8)
/** PIOC_ELSR_P7 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P7		(1 << 7)
/** PIOC_ELSR_P6 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P6		(1 << 6)
/** PIOC_ELSR_P5 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P5		(1 << 5)
/** PIOC_ELSR_P4 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P4		(1 << 4)
/** PIOC_ELSR_P3 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P3		(1 << 3)
/** PIOC_ELSR_P2 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P2		(1 << 2)
/** PIOC_ELSR_P1 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P1		(1 << 1)
/** PIOC_ELSR_P0 Edge/Level Interrupt Source Selection **/
#define PIOC_ELSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_fellsr FELLSR Falling Edge/Low-Level Select Register
@{*/

/** PIOC_FELLSR_P31 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P31		(1 << 31)
/** PIOC_FELLSR_P30 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P30		(1 << 30)
/** PIOC_FELLSR_P29 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P29		(1 << 29)
/** PIOC_FELLSR_P28 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P28		(1 << 28)
/** PIOC_FELLSR_P27 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P27		(1 << 27)
/** PIOC_FELLSR_P26 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P26		(1 << 26)
/** PIOC_FELLSR_P25 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P25		(1 << 25)
/** PIOC_FELLSR_P24 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P24		(1 << 24)
/** PIOC_FELLSR_P23 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P23		(1 << 23)
/** PIOC_FELLSR_P22 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P22		(1 << 22)
/** PIOC_FELLSR_P21 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P21		(1 << 21)
/** PIOC_FELLSR_P20 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P20		(1 << 20)
/** PIOC_FELLSR_P19 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P19		(1 << 19)
/** PIOC_FELLSR_P18 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P18		(1 << 18)
/** PIOC_FELLSR_P17 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P17		(1 << 17)
/** PIOC_FELLSR_P16 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P16		(1 << 16)
/** PIOC_FELLSR_P15 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P15		(1 << 15)
/** PIOC_FELLSR_P14 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P14		(1 << 14)
/** PIOC_FELLSR_P13 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P13		(1 << 13)
/** PIOC_FELLSR_P12 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P12		(1 << 12)
/** PIOC_FELLSR_P11 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P11		(1 << 11)
/** PIOC_FELLSR_P10 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P10		(1 << 10)
/** PIOC_FELLSR_P9 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P9		(1 << 9)
/** PIOC_FELLSR_P8 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P8		(1 << 8)
/** PIOC_FELLSR_P7 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P7		(1 << 7)
/** PIOC_FELLSR_P6 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P6		(1 << 6)
/** PIOC_FELLSR_P5 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P5		(1 << 5)
/** PIOC_FELLSR_P4 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P4		(1 << 4)
/** PIOC_FELLSR_P3 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P3		(1 << 3)
/** PIOC_FELLSR_P2 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P2		(1 << 2)
/** PIOC_FELLSR_P1 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P1		(1 << 1)
/** PIOC_FELLSR_P0 Falling Edge/Low-Level Interrupt Selection **/
#define PIOC_FELLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_rehlsr REHLSR Rising Edge/High-Level Select Register
@{*/

/** PIOC_REHLSR_P31 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P31		(1 << 31)
/** PIOC_REHLSR_P30 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P30		(1 << 30)
/** PIOC_REHLSR_P29 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P29		(1 << 29)
/** PIOC_REHLSR_P28 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P28		(1 << 28)
/** PIOC_REHLSR_P27 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P27		(1 << 27)
/** PIOC_REHLSR_P26 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P26		(1 << 26)
/** PIOC_REHLSR_P25 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P25		(1 << 25)
/** PIOC_REHLSR_P24 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P24		(1 << 24)
/** PIOC_REHLSR_P23 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P23		(1 << 23)
/** PIOC_REHLSR_P22 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P22		(1 << 22)
/** PIOC_REHLSR_P21 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P21		(1 << 21)
/** PIOC_REHLSR_P20 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P20		(1 << 20)
/** PIOC_REHLSR_P19 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P19		(1 << 19)
/** PIOC_REHLSR_P18 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P18		(1 << 18)
/** PIOC_REHLSR_P17 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P17		(1 << 17)
/** PIOC_REHLSR_P16 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P16		(1 << 16)
/** PIOC_REHLSR_P15 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P15		(1 << 15)
/** PIOC_REHLSR_P14 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P14		(1 << 14)
/** PIOC_REHLSR_P13 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P13		(1 << 13)
/** PIOC_REHLSR_P12 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P12		(1 << 12)
/** PIOC_REHLSR_P11 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P11		(1 << 11)
/** PIOC_REHLSR_P10 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P10		(1 << 10)
/** PIOC_REHLSR_P9 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P9		(1 << 9)
/** PIOC_REHLSR_P8 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P8		(1 << 8)
/** PIOC_REHLSR_P7 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P7		(1 << 7)
/** PIOC_REHLSR_P6 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P6		(1 << 6)
/** PIOC_REHLSR_P5 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P5		(1 << 5)
/** PIOC_REHLSR_P4 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P4		(1 << 4)
/** PIOC_REHLSR_P3 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P3		(1 << 3)
/** PIOC_REHLSR_P2 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P2		(1 << 2)
/** PIOC_REHLSR_P1 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P1		(1 << 1)
/** PIOC_REHLSR_P0 Rising Edge/High-Level Interrupt Selection **/
#define PIOC_REHLSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_frlhsr FRLHSR Fall/Rise - Low/High Status Register
@{*/

/** PIOC_FRLHSR_P31 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P31		(1 << 31)
/** PIOC_FRLHSR_P30 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P30		(1 << 30)
/** PIOC_FRLHSR_P29 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P29		(1 << 29)
/** PIOC_FRLHSR_P28 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P28		(1 << 28)
/** PIOC_FRLHSR_P27 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P27		(1 << 27)
/** PIOC_FRLHSR_P26 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P26		(1 << 26)
/** PIOC_FRLHSR_P25 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P25		(1 << 25)
/** PIOC_FRLHSR_P24 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P24		(1 << 24)
/** PIOC_FRLHSR_P23 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P23		(1 << 23)
/** PIOC_FRLHSR_P22 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P22		(1 << 22)
/** PIOC_FRLHSR_P21 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P21		(1 << 21)
/** PIOC_FRLHSR_P20 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P20		(1 << 20)
/** PIOC_FRLHSR_P19 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P19		(1 << 19)
/** PIOC_FRLHSR_P18 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P18		(1 << 18)
/** PIOC_FRLHSR_P17 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P17		(1 << 17)
/** PIOC_FRLHSR_P16 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P16		(1 << 16)
/** PIOC_FRLHSR_P15 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P15		(1 << 15)
/** PIOC_FRLHSR_P14 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P14		(1 << 14)
/** PIOC_FRLHSR_P13 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P13		(1 << 13)
/** PIOC_FRLHSR_P12 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P12		(1 << 12)
/** PIOC_FRLHSR_P11 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P11		(1 << 11)
/** PIOC_FRLHSR_P10 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P10		(1 << 10)
/** PIOC_FRLHSR_P9 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P9		(1 << 9)
/** PIOC_FRLHSR_P8 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P8		(1 << 8)
/** PIOC_FRLHSR_P7 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P7		(1 << 7)
/** PIOC_FRLHSR_P6 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P6		(1 << 6)
/** PIOC_FRLHSR_P5 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P5		(1 << 5)
/** PIOC_FRLHSR_P4 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P4		(1 << 4)
/** PIOC_FRLHSR_P3 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P3		(1 << 3)
/** PIOC_FRLHSR_P2 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P2		(1 << 2)
/** PIOC_FRLHSR_P1 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P1		(1 << 1)
/** PIOC_FRLHSR_P0 Edge/Level Interrupt Source Selection **/
#define PIOC_FRLHSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_locksr LOCKSR Lock Status
@{*/

/** PIOC_LOCKSR_P31 Lock Status **/
#define PIOC_LOCKSR_P31		(1 << 31)
/** PIOC_LOCKSR_P30 Lock Status **/
#define PIOC_LOCKSR_P30		(1 << 30)
/** PIOC_LOCKSR_P29 Lock Status **/
#define PIOC_LOCKSR_P29		(1 << 29)
/** PIOC_LOCKSR_P28 Lock Status **/
#define PIOC_LOCKSR_P28		(1 << 28)
/** PIOC_LOCKSR_P27 Lock Status **/
#define PIOC_LOCKSR_P27		(1 << 27)
/** PIOC_LOCKSR_P26 Lock Status **/
#define PIOC_LOCKSR_P26		(1 << 26)
/** PIOC_LOCKSR_P25 Lock Status **/
#define PIOC_LOCKSR_P25		(1 << 25)
/** PIOC_LOCKSR_P24 Lock Status **/
#define PIOC_LOCKSR_P24		(1 << 24)
/** PIOC_LOCKSR_P23 Lock Status **/
#define PIOC_LOCKSR_P23		(1 << 23)
/** PIOC_LOCKSR_P22 Lock Status **/
#define PIOC_LOCKSR_P22		(1 << 22)
/** PIOC_LOCKSR_P21 Lock Status **/
#define PIOC_LOCKSR_P21		(1 << 21)
/** PIOC_LOCKSR_P20 Lock Status **/
#define PIOC_LOCKSR_P20		(1 << 20)
/** PIOC_LOCKSR_P19 Lock Status **/
#define PIOC_LOCKSR_P19		(1 << 19)
/** PIOC_LOCKSR_P18 Lock Status **/
#define PIOC_LOCKSR_P18		(1 << 18)
/** PIOC_LOCKSR_P17 Lock Status **/
#define PIOC_LOCKSR_P17		(1 << 17)
/** PIOC_LOCKSR_P16 Lock Status **/
#define PIOC_LOCKSR_P16		(1 << 16)
/** PIOC_LOCKSR_P15 Lock Status **/
#define PIOC_LOCKSR_P15		(1 << 15)
/** PIOC_LOCKSR_P14 Lock Status **/
#define PIOC_LOCKSR_P14		(1 << 14)
/** PIOC_LOCKSR_P13 Lock Status **/
#define PIOC_LOCKSR_P13		(1 << 13)
/** PIOC_LOCKSR_P12 Lock Status **/
#define PIOC_LOCKSR_P12		(1 << 12)
/** PIOC_LOCKSR_P11 Lock Status **/
#define PIOC_LOCKSR_P11		(1 << 11)
/** PIOC_LOCKSR_P10 Lock Status **/
#define PIOC_LOCKSR_P10		(1 << 10)
/** PIOC_LOCKSR_P9 Lock Status **/
#define PIOC_LOCKSR_P9		(1 << 9)
/** PIOC_LOCKSR_P8 Lock Status **/
#define PIOC_LOCKSR_P8		(1 << 8)
/** PIOC_LOCKSR_P7 Lock Status **/
#define PIOC_LOCKSR_P7		(1 << 7)
/** PIOC_LOCKSR_P6 Lock Status **/
#define PIOC_LOCKSR_P6		(1 << 6)
/** PIOC_LOCKSR_P5 Lock Status **/
#define PIOC_LOCKSR_P5		(1 << 5)
/** PIOC_LOCKSR_P4 Lock Status **/
#define PIOC_LOCKSR_P4		(1 << 4)
/** PIOC_LOCKSR_P3 Lock Status **/
#define PIOC_LOCKSR_P3		(1 << 3)
/** PIOC_LOCKSR_P2 Lock Status **/
#define PIOC_LOCKSR_P2		(1 << 2)
/** PIOC_LOCKSR_P1 Lock Status **/
#define PIOC_LOCKSR_P1		(1 << 1)
/** PIOC_LOCKSR_P0 Lock Status **/
#define PIOC_LOCKSR_P0		(1 << 0)

/**@}*/

/** @defgroup pioc_wpmr WPMR Write Protection Mode Register
@{*/


#define PIOC_WPMR_WPKEY_SHIFT		8
#define PIOC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pioc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** PIOC_WPMR_WPEN Write Protection Enable **/
#define PIOC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pioc_wpsr WPSR Write Protection Status Register
@{*/


#define PIOC_WPSR_WPVSRC_SHIFT		8
#define PIOC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pioc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** PIOC_WPSR_WPVS Write Protection Violation Status **/
#define PIOC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup pioc_schmitt SCHMITT Schmitt Trigger Register
@{*/

/** PIOC_SCHMITT_SCHMITT31 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT31		(1 << 31)
/** PIOC_SCHMITT_SCHMITT30 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT30		(1 << 30)
/** PIOC_SCHMITT_SCHMITT29 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT29		(1 << 29)
/** PIOC_SCHMITT_SCHMITT28 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT28		(1 << 28)
/** PIOC_SCHMITT_SCHMITT27 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT27		(1 << 27)
/** PIOC_SCHMITT_SCHMITT26 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT26		(1 << 26)
/** PIOC_SCHMITT_SCHMITT25 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT25		(1 << 25)
/** PIOC_SCHMITT_SCHMITT24 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT24		(1 << 24)
/** PIOC_SCHMITT_SCHMITT23 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT23		(1 << 23)
/** PIOC_SCHMITT_SCHMITT22 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT22		(1 << 22)
/** PIOC_SCHMITT_SCHMITT21 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT21		(1 << 21)
/** PIOC_SCHMITT_SCHMITT20 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT20		(1 << 20)
/** PIOC_SCHMITT_SCHMITT19 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT19		(1 << 19)
/** PIOC_SCHMITT_SCHMITT18 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT18		(1 << 18)
/** PIOC_SCHMITT_SCHMITT17 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT17		(1 << 17)
/** PIOC_SCHMITT_SCHMITT16 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT16		(1 << 16)
/** PIOC_SCHMITT_SCHMITT15 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT15		(1 << 15)
/** PIOC_SCHMITT_SCHMITT14 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT14		(1 << 14)
/** PIOC_SCHMITT_SCHMITT13 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT13		(1 << 13)
/** PIOC_SCHMITT_SCHMITT12 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT12		(1 << 12)
/** PIOC_SCHMITT_SCHMITT11 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT11		(1 << 11)
/** PIOC_SCHMITT_SCHMITT10 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT10		(1 << 10)
/** PIOC_SCHMITT_SCHMITT9 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT9		(1 << 9)
/** PIOC_SCHMITT_SCHMITT8 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT8		(1 << 8)
/** PIOC_SCHMITT_SCHMITT7 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT7		(1 << 7)
/** PIOC_SCHMITT_SCHMITT6 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT6		(1 << 6)
/** PIOC_SCHMITT_SCHMITT5 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT5		(1 << 5)
/** PIOC_SCHMITT_SCHMITT4 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT4		(1 << 4)
/** PIOC_SCHMITT_SCHMITT3 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT3		(1 << 3)
/** PIOC_SCHMITT_SCHMITT2 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT2		(1 << 2)
/** PIOC_SCHMITT_SCHMITT1 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT1		(1 << 1)
/** PIOC_SCHMITT_SCHMITT0 Schmitt Trigger Control **/
#define PIOC_SCHMITT_SCHMITT0		(1 << 0)

/**@}*/

/** @defgroup pioc_pcmr PCMR Parallel Capture Mode Register
@{*/

/** PIOC_PCMR_FRSTS Parallel Capture Mode First Sample **/
#define PIOC_PCMR_FRSTS		(1 << 11)
/** PIOC_PCMR_HALFS Parallel Capture Mode Half Sampling **/
#define PIOC_PCMR_HALFS		(1 << 10)
/** PIOC_PCMR_ALWYS Parallel Capture Mode Always Sampling **/
#define PIOC_PCMR_ALWYS		(1 << 9)

#define PIOC_PCMR_DSIZE_SHIFT		4
#define PIOC_PCMR_DSIZE_MASK		0x03
/** @defgroup pioc_pcmr_dsize DSIZE Parallel Capture Mode Data Size
@{*/
/**@}*/

/** PIOC_PCMR_PCEN Parallel Capture Mode Enable **/
#define PIOC_PCMR_PCEN		(1 << 0)

/**@}*/

/** @defgroup pioc_pcier PCIER Parallel Capture Interrupt Enable Register
@{*/

/** PIOC_PCIER_RXBUFF Reception Buffer Full Interrupt Enable **/
#define PIOC_PCIER_RXBUFF		(1 << 3)
/** PIOC_PCIER_ENDRX End of Reception Transfer Interrupt Enable **/
#define PIOC_PCIER_ENDRX		(1 << 2)
/** PIOC_PCIER_OVRE Parallel Capture Mode Overrun Error Interrupt Enable **/
#define PIOC_PCIER_OVRE		(1 << 1)
/** PIOC_PCIER_DRDY Parallel Capture Mode Data Ready Interrupt Enable **/
#define PIOC_PCIER_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioc_pcidr PCIDR Parallel Capture Interrupt Disable Register
@{*/

/** PIOC_PCIDR_RXBUFF Reception Buffer Full Interrupt Disable **/
#define PIOC_PCIDR_RXBUFF		(1 << 3)
/** PIOC_PCIDR_ENDRX End of Reception Transfer Interrupt Disable **/
#define PIOC_PCIDR_ENDRX		(1 << 2)
/** PIOC_PCIDR_OVRE Parallel Capture Mode Overrun Error Interrupt Disable **/
#define PIOC_PCIDR_OVRE		(1 << 1)
/** PIOC_PCIDR_DRDY Parallel Capture Mode Data Ready Interrupt Disable **/
#define PIOC_PCIDR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioc_pcimr PCIMR Parallel Capture Interrupt Mask Register
@{*/

/** PIOC_PCIMR_RXBUFF Reception Buffer Full Interrupt Mask **/
#define PIOC_PCIMR_RXBUFF		(1 << 3)
/** PIOC_PCIMR_ENDRX End of Reception Transfer Interrupt Mask **/
#define PIOC_PCIMR_ENDRX		(1 << 2)
/** PIOC_PCIMR_OVRE Parallel Capture Mode Overrun Error Interrupt Mask **/
#define PIOC_PCIMR_OVRE		(1 << 1)
/** PIOC_PCIMR_DRDY Parallel Capture Mode Data Ready Interrupt Mask **/
#define PIOC_PCIMR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioc_pcisr PCISR Parallel Capture Interrupt Status Register
@{*/

/** PIOC_PCISR_RXBUFF  **/
#define PIOC_PCISR_RXBUFF		(1 << 3)
/** PIOC_PCISR_ENDRX  **/
#define PIOC_PCISR_ENDRX		(1 << 2)
/** PIOC_PCISR_OVRE Parallel Capture Mode Overrun Error **/
#define PIOC_PCISR_OVRE		(1 << 1)
/** PIOC_PCISR_DRDY Parallel Capture Mode Data Ready **/
#define PIOC_PCISR_DRDY		(1 << 0)

/**@}*/

/** @defgroup pioc_pcrhr PCRHR Parallel Capture Reception Holding Register
@{*/


#define PIOC_PCRHR_RDATA_SHIFT		0
#define PIOC_PCRHR_RDATA_MASK		0xffffffff
/** @defgroup pioc_pcrhr_rdata RDATA Parallel Capture Mode Reception Data
@{*/
/**@}*/


/**@}*/

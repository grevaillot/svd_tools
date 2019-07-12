#pragma once 

/* --- PIOC: Parallel Input/Output Controller C --------------------- */

#define PIOC_PER			MMIO32(PIOC_BASE + 0x00)
#define PIOC_PDR			MMIO32(PIOC_BASE + 0x04)
#define PIOC_PSR			MMIO32(PIOC_BASE + 0x08)
#define PIOC_OER			MMIO32(PIOC_BASE + 0x10)
#define PIOC_ODR			MMIO32(PIOC_BASE + 0x14)
#define PIOC_OSR			MMIO32(PIOC_BASE + 0x18)
#define PIOC_IFER			MMIO32(PIOC_BASE + 0x20)
#define PIOC_IFDR			MMIO32(PIOC_BASE + 0x24)
#define PIOC_IFSR			MMIO32(PIOC_BASE + 0x28)
#define PIOC_SODR			MMIO32(PIOC_BASE + 0x30)
#define PIOC_CODR			MMIO32(PIOC_BASE + 0x34)
#define PIOC_ODSR			MMIO32(PIOC_BASE + 0x38)
#define PIOC_PDSR			MMIO32(PIOC_BASE + 0x3c)
#define PIOC_IER			MMIO32(PIOC_BASE + 0x40)
#define PIOC_IDR			MMIO32(PIOC_BASE + 0x44)
#define PIOC_IMR			MMIO32(PIOC_BASE + 0x48)
#define PIOC_ISR			MMIO32(PIOC_BASE + 0x4c)
#define PIOC_MDER			MMIO32(PIOC_BASE + 0x50)
#define PIOC_MDDR			MMIO32(PIOC_BASE + 0x54)
#define PIOC_MDSR			MMIO32(PIOC_BASE + 0x58)
#define PIOC_PUDR			MMIO32(PIOC_BASE + 0x60)
#define PIOC_PUER			MMIO32(PIOC_BASE + 0x64)
#define PIOC_PUSR			MMIO32(PIOC_BASE + 0x68)
#define PIOC_ABCDSR[0]			MMIO32(PIOC_BASE + 0x70)
#define PIOC_ABCDSR[1]			MMIO32(PIOC_BASE + 0x74)
#define PIOC_IFSCDR			MMIO32(PIOC_BASE + 0x80)
#define PIOC_IFSCER			MMIO32(PIOC_BASE + 0x84)
#define PIOC_IFSCSR			MMIO32(PIOC_BASE + 0x88)
#define PIOC_SCDR			MMIO32(PIOC_BASE + 0x8c)
#define PIOC_PPDDR			MMIO32(PIOC_BASE + 0x90)
#define PIOC_PPDER			MMIO32(PIOC_BASE + 0x94)
#define PIOC_PPDSR			MMIO32(PIOC_BASE + 0x98)
#define PIOC_OWER			MMIO32(PIOC_BASE + 0xa0)
#define PIOC_OWDR			MMIO32(PIOC_BASE + 0xa4)
#define PIOC_OWSR			MMIO32(PIOC_BASE + 0xa8)
#define PIOC_AIMER			MMIO32(PIOC_BASE + 0xb0)
#define PIOC_AIMDR			MMIO32(PIOC_BASE + 0xb4)
#define PIOC_AIMMR			MMIO32(PIOC_BASE + 0xb8)
#define PIOC_ESR			MMIO32(PIOC_BASE + 0xc0)
#define PIOC_LSR			MMIO32(PIOC_BASE + 0xc4)
#define PIOC_ELSR			MMIO32(PIOC_BASE + 0xc8)
#define PIOC_FELLSR			MMIO32(PIOC_BASE + 0xd0)
#define PIOC_REHLSR			MMIO32(PIOC_BASE + 0xd4)
#define PIOC_FRLHSR			MMIO32(PIOC_BASE + 0xd8)
#define PIOC_LOCKSR			MMIO32(PIOC_BASE + 0xe0)
#define PIOC_WPMR			MMIO32(PIOC_BASE + 0xe4)
#define PIOC_WPSR			MMIO32(PIOC_BASE + 0xe8)
#define PIOC_SCHMITT			MMIO32(PIOC_BASE + 0x100)
#define PIOC_PCMR			MMIO32(PIOC_BASE + 0x150)
#define PIOC_PCIER			MMIO32(PIOC_BASE + 0x154)
#define PIOC_PCIDR			MMIO32(PIOC_BASE + 0x158)
#define PIOC_PCIMR			MMIO32(PIOC_BASE + 0x15c)
#define PIOC_PCISR			MMIO32(PIOC_BASE + 0x160)
#define PIOC_PCRHR			MMIO32(PIOC_BASE + 0x164)


/* --- PIOC_PER values ---------------------------------------------- */


/* @def PIOC_PER_P31
* @brief PIO Enable */
#define PIOC_PER_P31		(1 << 31)

/* @def PIOC_PER_P30
* @brief PIO Enable */
#define PIOC_PER_P30		(1 << 30)

/* @def PIOC_PER_P29
* @brief PIO Enable */
#define PIOC_PER_P29		(1 << 29)

/* @def PIOC_PER_P28
* @brief PIO Enable */
#define PIOC_PER_P28		(1 << 28)

/* @def PIOC_PER_P27
* @brief PIO Enable */
#define PIOC_PER_P27		(1 << 27)

/* @def PIOC_PER_P26
* @brief PIO Enable */
#define PIOC_PER_P26		(1 << 26)

/* @def PIOC_PER_P25
* @brief PIO Enable */
#define PIOC_PER_P25		(1 << 25)

/* @def PIOC_PER_P24
* @brief PIO Enable */
#define PIOC_PER_P24		(1 << 24)

/* @def PIOC_PER_P23
* @brief PIO Enable */
#define PIOC_PER_P23		(1 << 23)

/* @def PIOC_PER_P22
* @brief PIO Enable */
#define PIOC_PER_P22		(1 << 22)

/* @def PIOC_PER_P21
* @brief PIO Enable */
#define PIOC_PER_P21		(1 << 21)

/* @def PIOC_PER_P20
* @brief PIO Enable */
#define PIOC_PER_P20		(1 << 20)

/* @def PIOC_PER_P19
* @brief PIO Enable */
#define PIOC_PER_P19		(1 << 19)

/* @def PIOC_PER_P18
* @brief PIO Enable */
#define PIOC_PER_P18		(1 << 18)

/* @def PIOC_PER_P17
* @brief PIO Enable */
#define PIOC_PER_P17		(1 << 17)

/* @def PIOC_PER_P16
* @brief PIO Enable */
#define PIOC_PER_P16		(1 << 16)

/* @def PIOC_PER_P15
* @brief PIO Enable */
#define PIOC_PER_P15		(1 << 15)

/* @def PIOC_PER_P14
* @brief PIO Enable */
#define PIOC_PER_P14		(1 << 14)

/* @def PIOC_PER_P13
* @brief PIO Enable */
#define PIOC_PER_P13		(1 << 13)

/* @def PIOC_PER_P12
* @brief PIO Enable */
#define PIOC_PER_P12		(1 << 12)

/* @def PIOC_PER_P11
* @brief PIO Enable */
#define PIOC_PER_P11		(1 << 11)

/* @def PIOC_PER_P10
* @brief PIO Enable */
#define PIOC_PER_P10		(1 << 10)

/* @def PIOC_PER_P9
* @brief PIO Enable */
#define PIOC_PER_P9		(1 << 9)

/* @def PIOC_PER_P8
* @brief PIO Enable */
#define PIOC_PER_P8		(1 << 8)

/* @def PIOC_PER_P7
* @brief PIO Enable */
#define PIOC_PER_P7		(1 << 7)

/* @def PIOC_PER_P6
* @brief PIO Enable */
#define PIOC_PER_P6		(1 << 6)

/* @def PIOC_PER_P5
* @brief PIO Enable */
#define PIOC_PER_P5		(1 << 5)

/* @def PIOC_PER_P4
* @brief PIO Enable */
#define PIOC_PER_P4		(1 << 4)

/* @def PIOC_PER_P3
* @brief PIO Enable */
#define PIOC_PER_P3		(1 << 3)

/* @def PIOC_PER_P2
* @brief PIO Enable */
#define PIOC_PER_P2		(1 << 2)

/* @def PIOC_PER_P1
* @brief PIO Enable */
#define PIOC_PER_P1		(1 << 1)

/* @def PIOC_PER_P0
* @brief PIO Enable */
#define PIOC_PER_P0		(1 << 0)

/* --- PIOC_PDR values ---------------------------------------------- */


/* @def PIOC_PDR_P31
* @brief PIO Disable */
#define PIOC_PDR_P31		(1 << 31)

/* @def PIOC_PDR_P30
* @brief PIO Disable */
#define PIOC_PDR_P30		(1 << 30)

/* @def PIOC_PDR_P29
* @brief PIO Disable */
#define PIOC_PDR_P29		(1 << 29)

/* @def PIOC_PDR_P28
* @brief PIO Disable */
#define PIOC_PDR_P28		(1 << 28)

/* @def PIOC_PDR_P27
* @brief PIO Disable */
#define PIOC_PDR_P27		(1 << 27)

/* @def PIOC_PDR_P26
* @brief PIO Disable */
#define PIOC_PDR_P26		(1 << 26)

/* @def PIOC_PDR_P25
* @brief PIO Disable */
#define PIOC_PDR_P25		(1 << 25)

/* @def PIOC_PDR_P24
* @brief PIO Disable */
#define PIOC_PDR_P24		(1 << 24)

/* @def PIOC_PDR_P23
* @brief PIO Disable */
#define PIOC_PDR_P23		(1 << 23)

/* @def PIOC_PDR_P22
* @brief PIO Disable */
#define PIOC_PDR_P22		(1 << 22)

/* @def PIOC_PDR_P21
* @brief PIO Disable */
#define PIOC_PDR_P21		(1 << 21)

/* @def PIOC_PDR_P20
* @brief PIO Disable */
#define PIOC_PDR_P20		(1 << 20)

/* @def PIOC_PDR_P19
* @brief PIO Disable */
#define PIOC_PDR_P19		(1 << 19)

/* @def PIOC_PDR_P18
* @brief PIO Disable */
#define PIOC_PDR_P18		(1 << 18)

/* @def PIOC_PDR_P17
* @brief PIO Disable */
#define PIOC_PDR_P17		(1 << 17)

/* @def PIOC_PDR_P16
* @brief PIO Disable */
#define PIOC_PDR_P16		(1 << 16)

/* @def PIOC_PDR_P15
* @brief PIO Disable */
#define PIOC_PDR_P15		(1 << 15)

/* @def PIOC_PDR_P14
* @brief PIO Disable */
#define PIOC_PDR_P14		(1 << 14)

/* @def PIOC_PDR_P13
* @brief PIO Disable */
#define PIOC_PDR_P13		(1 << 13)

/* @def PIOC_PDR_P12
* @brief PIO Disable */
#define PIOC_PDR_P12		(1 << 12)

/* @def PIOC_PDR_P11
* @brief PIO Disable */
#define PIOC_PDR_P11		(1 << 11)

/* @def PIOC_PDR_P10
* @brief PIO Disable */
#define PIOC_PDR_P10		(1 << 10)

/* @def PIOC_PDR_P9
* @brief PIO Disable */
#define PIOC_PDR_P9		(1 << 9)

/* @def PIOC_PDR_P8
* @brief PIO Disable */
#define PIOC_PDR_P8		(1 << 8)

/* @def PIOC_PDR_P7
* @brief PIO Disable */
#define PIOC_PDR_P7		(1 << 7)

/* @def PIOC_PDR_P6
* @brief PIO Disable */
#define PIOC_PDR_P6		(1 << 6)

/* @def PIOC_PDR_P5
* @brief PIO Disable */
#define PIOC_PDR_P5		(1 << 5)

/* @def PIOC_PDR_P4
* @brief PIO Disable */
#define PIOC_PDR_P4		(1 << 4)

/* @def PIOC_PDR_P3
* @brief PIO Disable */
#define PIOC_PDR_P3		(1 << 3)

/* @def PIOC_PDR_P2
* @brief PIO Disable */
#define PIOC_PDR_P2		(1 << 2)

/* @def PIOC_PDR_P1
* @brief PIO Disable */
#define PIOC_PDR_P1		(1 << 1)

/* @def PIOC_PDR_P0
* @brief PIO Disable */
#define PIOC_PDR_P0		(1 << 0)

/* --- PIOC_PSR values ---------------------------------------------- */


/* @def PIOC_PSR_P31
* @brief PIO Status */
#define PIOC_PSR_P31		(1 << 31)

/* @def PIOC_PSR_P30
* @brief PIO Status */
#define PIOC_PSR_P30		(1 << 30)

/* @def PIOC_PSR_P29
* @brief PIO Status */
#define PIOC_PSR_P29		(1 << 29)

/* @def PIOC_PSR_P28
* @brief PIO Status */
#define PIOC_PSR_P28		(1 << 28)

/* @def PIOC_PSR_P27
* @brief PIO Status */
#define PIOC_PSR_P27		(1 << 27)

/* @def PIOC_PSR_P26
* @brief PIO Status */
#define PIOC_PSR_P26		(1 << 26)

/* @def PIOC_PSR_P25
* @brief PIO Status */
#define PIOC_PSR_P25		(1 << 25)

/* @def PIOC_PSR_P24
* @brief PIO Status */
#define PIOC_PSR_P24		(1 << 24)

/* @def PIOC_PSR_P23
* @brief PIO Status */
#define PIOC_PSR_P23		(1 << 23)

/* @def PIOC_PSR_P22
* @brief PIO Status */
#define PIOC_PSR_P22		(1 << 22)

/* @def PIOC_PSR_P21
* @brief PIO Status */
#define PIOC_PSR_P21		(1 << 21)

/* @def PIOC_PSR_P20
* @brief PIO Status */
#define PIOC_PSR_P20		(1 << 20)

/* @def PIOC_PSR_P19
* @brief PIO Status */
#define PIOC_PSR_P19		(1 << 19)

/* @def PIOC_PSR_P18
* @brief PIO Status */
#define PIOC_PSR_P18		(1 << 18)

/* @def PIOC_PSR_P17
* @brief PIO Status */
#define PIOC_PSR_P17		(1 << 17)

/* @def PIOC_PSR_P16
* @brief PIO Status */
#define PIOC_PSR_P16		(1 << 16)

/* @def PIOC_PSR_P15
* @brief PIO Status */
#define PIOC_PSR_P15		(1 << 15)

/* @def PIOC_PSR_P14
* @brief PIO Status */
#define PIOC_PSR_P14		(1 << 14)

/* @def PIOC_PSR_P13
* @brief PIO Status */
#define PIOC_PSR_P13		(1 << 13)

/* @def PIOC_PSR_P12
* @brief PIO Status */
#define PIOC_PSR_P12		(1 << 12)

/* @def PIOC_PSR_P11
* @brief PIO Status */
#define PIOC_PSR_P11		(1 << 11)

/* @def PIOC_PSR_P10
* @brief PIO Status */
#define PIOC_PSR_P10		(1 << 10)

/* @def PIOC_PSR_P9
* @brief PIO Status */
#define PIOC_PSR_P9		(1 << 9)

/* @def PIOC_PSR_P8
* @brief PIO Status */
#define PIOC_PSR_P8		(1 << 8)

/* @def PIOC_PSR_P7
* @brief PIO Status */
#define PIOC_PSR_P7		(1 << 7)

/* @def PIOC_PSR_P6
* @brief PIO Status */
#define PIOC_PSR_P6		(1 << 6)

/* @def PIOC_PSR_P5
* @brief PIO Status */
#define PIOC_PSR_P5		(1 << 5)

/* @def PIOC_PSR_P4
* @brief PIO Status */
#define PIOC_PSR_P4		(1 << 4)

/* @def PIOC_PSR_P3
* @brief PIO Status */
#define PIOC_PSR_P3		(1 << 3)

/* @def PIOC_PSR_P2
* @brief PIO Status */
#define PIOC_PSR_P2		(1 << 2)

/* @def PIOC_PSR_P1
* @brief PIO Status */
#define PIOC_PSR_P1		(1 << 1)

/* @def PIOC_PSR_P0
* @brief PIO Status */
#define PIOC_PSR_P0		(1 << 0)

/* --- PIOC_OER values ---------------------------------------------- */


/* @def PIOC_OER_P31
* @brief Output Enable */
#define PIOC_OER_P31		(1 << 31)

/* @def PIOC_OER_P30
* @brief Output Enable */
#define PIOC_OER_P30		(1 << 30)

/* @def PIOC_OER_P29
* @brief Output Enable */
#define PIOC_OER_P29		(1 << 29)

/* @def PIOC_OER_P28
* @brief Output Enable */
#define PIOC_OER_P28		(1 << 28)

/* @def PIOC_OER_P27
* @brief Output Enable */
#define PIOC_OER_P27		(1 << 27)

/* @def PIOC_OER_P26
* @brief Output Enable */
#define PIOC_OER_P26		(1 << 26)

/* @def PIOC_OER_P25
* @brief Output Enable */
#define PIOC_OER_P25		(1 << 25)

/* @def PIOC_OER_P24
* @brief Output Enable */
#define PIOC_OER_P24		(1 << 24)

/* @def PIOC_OER_P23
* @brief Output Enable */
#define PIOC_OER_P23		(1 << 23)

/* @def PIOC_OER_P22
* @brief Output Enable */
#define PIOC_OER_P22		(1 << 22)

/* @def PIOC_OER_P21
* @brief Output Enable */
#define PIOC_OER_P21		(1 << 21)

/* @def PIOC_OER_P20
* @brief Output Enable */
#define PIOC_OER_P20		(1 << 20)

/* @def PIOC_OER_P19
* @brief Output Enable */
#define PIOC_OER_P19		(1 << 19)

/* @def PIOC_OER_P18
* @brief Output Enable */
#define PIOC_OER_P18		(1 << 18)

/* @def PIOC_OER_P17
* @brief Output Enable */
#define PIOC_OER_P17		(1 << 17)

/* @def PIOC_OER_P16
* @brief Output Enable */
#define PIOC_OER_P16		(1 << 16)

/* @def PIOC_OER_P15
* @brief Output Enable */
#define PIOC_OER_P15		(1 << 15)

/* @def PIOC_OER_P14
* @brief Output Enable */
#define PIOC_OER_P14		(1 << 14)

/* @def PIOC_OER_P13
* @brief Output Enable */
#define PIOC_OER_P13		(1 << 13)

/* @def PIOC_OER_P12
* @brief Output Enable */
#define PIOC_OER_P12		(1 << 12)

/* @def PIOC_OER_P11
* @brief Output Enable */
#define PIOC_OER_P11		(1 << 11)

/* @def PIOC_OER_P10
* @brief Output Enable */
#define PIOC_OER_P10		(1 << 10)

/* @def PIOC_OER_P9
* @brief Output Enable */
#define PIOC_OER_P9		(1 << 9)

/* @def PIOC_OER_P8
* @brief Output Enable */
#define PIOC_OER_P8		(1 << 8)

/* @def PIOC_OER_P7
* @brief Output Enable */
#define PIOC_OER_P7		(1 << 7)

/* @def PIOC_OER_P6
* @brief Output Enable */
#define PIOC_OER_P6		(1 << 6)

/* @def PIOC_OER_P5
* @brief Output Enable */
#define PIOC_OER_P5		(1 << 5)

/* @def PIOC_OER_P4
* @brief Output Enable */
#define PIOC_OER_P4		(1 << 4)

/* @def PIOC_OER_P3
* @brief Output Enable */
#define PIOC_OER_P3		(1 << 3)

/* @def PIOC_OER_P2
* @brief Output Enable */
#define PIOC_OER_P2		(1 << 2)

/* @def PIOC_OER_P1
* @brief Output Enable */
#define PIOC_OER_P1		(1 << 1)

/* @def PIOC_OER_P0
* @brief Output Enable */
#define PIOC_OER_P0		(1 << 0)

/* --- PIOC_ODR values ---------------------------------------------- */


/* @def PIOC_ODR_P31
* @brief Output Disable */
#define PIOC_ODR_P31		(1 << 31)

/* @def PIOC_ODR_P30
* @brief Output Disable */
#define PIOC_ODR_P30		(1 << 30)

/* @def PIOC_ODR_P29
* @brief Output Disable */
#define PIOC_ODR_P29		(1 << 29)

/* @def PIOC_ODR_P28
* @brief Output Disable */
#define PIOC_ODR_P28		(1 << 28)

/* @def PIOC_ODR_P27
* @brief Output Disable */
#define PIOC_ODR_P27		(1 << 27)

/* @def PIOC_ODR_P26
* @brief Output Disable */
#define PIOC_ODR_P26		(1 << 26)

/* @def PIOC_ODR_P25
* @brief Output Disable */
#define PIOC_ODR_P25		(1 << 25)

/* @def PIOC_ODR_P24
* @brief Output Disable */
#define PIOC_ODR_P24		(1 << 24)

/* @def PIOC_ODR_P23
* @brief Output Disable */
#define PIOC_ODR_P23		(1 << 23)

/* @def PIOC_ODR_P22
* @brief Output Disable */
#define PIOC_ODR_P22		(1 << 22)

/* @def PIOC_ODR_P21
* @brief Output Disable */
#define PIOC_ODR_P21		(1 << 21)

/* @def PIOC_ODR_P20
* @brief Output Disable */
#define PIOC_ODR_P20		(1 << 20)

/* @def PIOC_ODR_P19
* @brief Output Disable */
#define PIOC_ODR_P19		(1 << 19)

/* @def PIOC_ODR_P18
* @brief Output Disable */
#define PIOC_ODR_P18		(1 << 18)

/* @def PIOC_ODR_P17
* @brief Output Disable */
#define PIOC_ODR_P17		(1 << 17)

/* @def PIOC_ODR_P16
* @brief Output Disable */
#define PIOC_ODR_P16		(1 << 16)

/* @def PIOC_ODR_P15
* @brief Output Disable */
#define PIOC_ODR_P15		(1 << 15)

/* @def PIOC_ODR_P14
* @brief Output Disable */
#define PIOC_ODR_P14		(1 << 14)

/* @def PIOC_ODR_P13
* @brief Output Disable */
#define PIOC_ODR_P13		(1 << 13)

/* @def PIOC_ODR_P12
* @brief Output Disable */
#define PIOC_ODR_P12		(1 << 12)

/* @def PIOC_ODR_P11
* @brief Output Disable */
#define PIOC_ODR_P11		(1 << 11)

/* @def PIOC_ODR_P10
* @brief Output Disable */
#define PIOC_ODR_P10		(1 << 10)

/* @def PIOC_ODR_P9
* @brief Output Disable */
#define PIOC_ODR_P9		(1 << 9)

/* @def PIOC_ODR_P8
* @brief Output Disable */
#define PIOC_ODR_P8		(1 << 8)

/* @def PIOC_ODR_P7
* @brief Output Disable */
#define PIOC_ODR_P7		(1 << 7)

/* @def PIOC_ODR_P6
* @brief Output Disable */
#define PIOC_ODR_P6		(1 << 6)

/* @def PIOC_ODR_P5
* @brief Output Disable */
#define PIOC_ODR_P5		(1 << 5)

/* @def PIOC_ODR_P4
* @brief Output Disable */
#define PIOC_ODR_P4		(1 << 4)

/* @def PIOC_ODR_P3
* @brief Output Disable */
#define PIOC_ODR_P3		(1 << 3)

/* @def PIOC_ODR_P2
* @brief Output Disable */
#define PIOC_ODR_P2		(1 << 2)

/* @def PIOC_ODR_P1
* @brief Output Disable */
#define PIOC_ODR_P1		(1 << 1)

/* @def PIOC_ODR_P0
* @brief Output Disable */
#define PIOC_ODR_P0		(1 << 0)

/* --- PIOC_OSR values ---------------------------------------------- */


/* @def PIOC_OSR_P31
* @brief Output Status */
#define PIOC_OSR_P31		(1 << 31)

/* @def PIOC_OSR_P30
* @brief Output Status */
#define PIOC_OSR_P30		(1 << 30)

/* @def PIOC_OSR_P29
* @brief Output Status */
#define PIOC_OSR_P29		(1 << 29)

/* @def PIOC_OSR_P28
* @brief Output Status */
#define PIOC_OSR_P28		(1 << 28)

/* @def PIOC_OSR_P27
* @brief Output Status */
#define PIOC_OSR_P27		(1 << 27)

/* @def PIOC_OSR_P26
* @brief Output Status */
#define PIOC_OSR_P26		(1 << 26)

/* @def PIOC_OSR_P25
* @brief Output Status */
#define PIOC_OSR_P25		(1 << 25)

/* @def PIOC_OSR_P24
* @brief Output Status */
#define PIOC_OSR_P24		(1 << 24)

/* @def PIOC_OSR_P23
* @brief Output Status */
#define PIOC_OSR_P23		(1 << 23)

/* @def PIOC_OSR_P22
* @brief Output Status */
#define PIOC_OSR_P22		(1 << 22)

/* @def PIOC_OSR_P21
* @brief Output Status */
#define PIOC_OSR_P21		(1 << 21)

/* @def PIOC_OSR_P20
* @brief Output Status */
#define PIOC_OSR_P20		(1 << 20)

/* @def PIOC_OSR_P19
* @brief Output Status */
#define PIOC_OSR_P19		(1 << 19)

/* @def PIOC_OSR_P18
* @brief Output Status */
#define PIOC_OSR_P18		(1 << 18)

/* @def PIOC_OSR_P17
* @brief Output Status */
#define PIOC_OSR_P17		(1 << 17)

/* @def PIOC_OSR_P16
* @brief Output Status */
#define PIOC_OSR_P16		(1 << 16)

/* @def PIOC_OSR_P15
* @brief Output Status */
#define PIOC_OSR_P15		(1 << 15)

/* @def PIOC_OSR_P14
* @brief Output Status */
#define PIOC_OSR_P14		(1 << 14)

/* @def PIOC_OSR_P13
* @brief Output Status */
#define PIOC_OSR_P13		(1 << 13)

/* @def PIOC_OSR_P12
* @brief Output Status */
#define PIOC_OSR_P12		(1 << 12)

/* @def PIOC_OSR_P11
* @brief Output Status */
#define PIOC_OSR_P11		(1 << 11)

/* @def PIOC_OSR_P10
* @brief Output Status */
#define PIOC_OSR_P10		(1 << 10)

/* @def PIOC_OSR_P9
* @brief Output Status */
#define PIOC_OSR_P9		(1 << 9)

/* @def PIOC_OSR_P8
* @brief Output Status */
#define PIOC_OSR_P8		(1 << 8)

/* @def PIOC_OSR_P7
* @brief Output Status */
#define PIOC_OSR_P7		(1 << 7)

/* @def PIOC_OSR_P6
* @brief Output Status */
#define PIOC_OSR_P6		(1 << 6)

/* @def PIOC_OSR_P5
* @brief Output Status */
#define PIOC_OSR_P5		(1 << 5)

/* @def PIOC_OSR_P4
* @brief Output Status */
#define PIOC_OSR_P4		(1 << 4)

/* @def PIOC_OSR_P3
* @brief Output Status */
#define PIOC_OSR_P3		(1 << 3)

/* @def PIOC_OSR_P2
* @brief Output Status */
#define PIOC_OSR_P2		(1 << 2)

/* @def PIOC_OSR_P1
* @brief Output Status */
#define PIOC_OSR_P1		(1 << 1)

/* @def PIOC_OSR_P0
* @brief Output Status */
#define PIOC_OSR_P0		(1 << 0)

/* --- PIOC_IFER values --------------------------------------------- */


/* @def PIOC_IFER_P31
* @brief Input Filter Enable */
#define PIOC_IFER_P31		(1 << 31)

/* @def PIOC_IFER_P30
* @brief Input Filter Enable */
#define PIOC_IFER_P30		(1 << 30)

/* @def PIOC_IFER_P29
* @brief Input Filter Enable */
#define PIOC_IFER_P29		(1 << 29)

/* @def PIOC_IFER_P28
* @brief Input Filter Enable */
#define PIOC_IFER_P28		(1 << 28)

/* @def PIOC_IFER_P27
* @brief Input Filter Enable */
#define PIOC_IFER_P27		(1 << 27)

/* @def PIOC_IFER_P26
* @brief Input Filter Enable */
#define PIOC_IFER_P26		(1 << 26)

/* @def PIOC_IFER_P25
* @brief Input Filter Enable */
#define PIOC_IFER_P25		(1 << 25)

/* @def PIOC_IFER_P24
* @brief Input Filter Enable */
#define PIOC_IFER_P24		(1 << 24)

/* @def PIOC_IFER_P23
* @brief Input Filter Enable */
#define PIOC_IFER_P23		(1 << 23)

/* @def PIOC_IFER_P22
* @brief Input Filter Enable */
#define PIOC_IFER_P22		(1 << 22)

/* @def PIOC_IFER_P21
* @brief Input Filter Enable */
#define PIOC_IFER_P21		(1 << 21)

/* @def PIOC_IFER_P20
* @brief Input Filter Enable */
#define PIOC_IFER_P20		(1 << 20)

/* @def PIOC_IFER_P19
* @brief Input Filter Enable */
#define PIOC_IFER_P19		(1 << 19)

/* @def PIOC_IFER_P18
* @brief Input Filter Enable */
#define PIOC_IFER_P18		(1 << 18)

/* @def PIOC_IFER_P17
* @brief Input Filter Enable */
#define PIOC_IFER_P17		(1 << 17)

/* @def PIOC_IFER_P16
* @brief Input Filter Enable */
#define PIOC_IFER_P16		(1 << 16)

/* @def PIOC_IFER_P15
* @brief Input Filter Enable */
#define PIOC_IFER_P15		(1 << 15)

/* @def PIOC_IFER_P14
* @brief Input Filter Enable */
#define PIOC_IFER_P14		(1 << 14)

/* @def PIOC_IFER_P13
* @brief Input Filter Enable */
#define PIOC_IFER_P13		(1 << 13)

/* @def PIOC_IFER_P12
* @brief Input Filter Enable */
#define PIOC_IFER_P12		(1 << 12)

/* @def PIOC_IFER_P11
* @brief Input Filter Enable */
#define PIOC_IFER_P11		(1 << 11)

/* @def PIOC_IFER_P10
* @brief Input Filter Enable */
#define PIOC_IFER_P10		(1 << 10)

/* @def PIOC_IFER_P9
* @brief Input Filter Enable */
#define PIOC_IFER_P9		(1 << 9)

/* @def PIOC_IFER_P8
* @brief Input Filter Enable */
#define PIOC_IFER_P8		(1 << 8)

/* @def PIOC_IFER_P7
* @brief Input Filter Enable */
#define PIOC_IFER_P7		(1 << 7)

/* @def PIOC_IFER_P6
* @brief Input Filter Enable */
#define PIOC_IFER_P6		(1 << 6)

/* @def PIOC_IFER_P5
* @brief Input Filter Enable */
#define PIOC_IFER_P5		(1 << 5)

/* @def PIOC_IFER_P4
* @brief Input Filter Enable */
#define PIOC_IFER_P4		(1 << 4)

/* @def PIOC_IFER_P3
* @brief Input Filter Enable */
#define PIOC_IFER_P3		(1 << 3)

/* @def PIOC_IFER_P2
* @brief Input Filter Enable */
#define PIOC_IFER_P2		(1 << 2)

/* @def PIOC_IFER_P1
* @brief Input Filter Enable */
#define PIOC_IFER_P1		(1 << 1)

/* @def PIOC_IFER_P0
* @brief Input Filter Enable */
#define PIOC_IFER_P0		(1 << 0)

/* --- PIOC_IFDR values --------------------------------------------- */


/* @def PIOC_IFDR_P31
* @brief Input Filter Disable */
#define PIOC_IFDR_P31		(1 << 31)

/* @def PIOC_IFDR_P30
* @brief Input Filter Disable */
#define PIOC_IFDR_P30		(1 << 30)

/* @def PIOC_IFDR_P29
* @brief Input Filter Disable */
#define PIOC_IFDR_P29		(1 << 29)

/* @def PIOC_IFDR_P28
* @brief Input Filter Disable */
#define PIOC_IFDR_P28		(1 << 28)

/* @def PIOC_IFDR_P27
* @brief Input Filter Disable */
#define PIOC_IFDR_P27		(1 << 27)

/* @def PIOC_IFDR_P26
* @brief Input Filter Disable */
#define PIOC_IFDR_P26		(1 << 26)

/* @def PIOC_IFDR_P25
* @brief Input Filter Disable */
#define PIOC_IFDR_P25		(1 << 25)

/* @def PIOC_IFDR_P24
* @brief Input Filter Disable */
#define PIOC_IFDR_P24		(1 << 24)

/* @def PIOC_IFDR_P23
* @brief Input Filter Disable */
#define PIOC_IFDR_P23		(1 << 23)

/* @def PIOC_IFDR_P22
* @brief Input Filter Disable */
#define PIOC_IFDR_P22		(1 << 22)

/* @def PIOC_IFDR_P21
* @brief Input Filter Disable */
#define PIOC_IFDR_P21		(1 << 21)

/* @def PIOC_IFDR_P20
* @brief Input Filter Disable */
#define PIOC_IFDR_P20		(1 << 20)

/* @def PIOC_IFDR_P19
* @brief Input Filter Disable */
#define PIOC_IFDR_P19		(1 << 19)

/* @def PIOC_IFDR_P18
* @brief Input Filter Disable */
#define PIOC_IFDR_P18		(1 << 18)

/* @def PIOC_IFDR_P17
* @brief Input Filter Disable */
#define PIOC_IFDR_P17		(1 << 17)

/* @def PIOC_IFDR_P16
* @brief Input Filter Disable */
#define PIOC_IFDR_P16		(1 << 16)

/* @def PIOC_IFDR_P15
* @brief Input Filter Disable */
#define PIOC_IFDR_P15		(1 << 15)

/* @def PIOC_IFDR_P14
* @brief Input Filter Disable */
#define PIOC_IFDR_P14		(1 << 14)

/* @def PIOC_IFDR_P13
* @brief Input Filter Disable */
#define PIOC_IFDR_P13		(1 << 13)

/* @def PIOC_IFDR_P12
* @brief Input Filter Disable */
#define PIOC_IFDR_P12		(1 << 12)

/* @def PIOC_IFDR_P11
* @brief Input Filter Disable */
#define PIOC_IFDR_P11		(1 << 11)

/* @def PIOC_IFDR_P10
* @brief Input Filter Disable */
#define PIOC_IFDR_P10		(1 << 10)

/* @def PIOC_IFDR_P9
* @brief Input Filter Disable */
#define PIOC_IFDR_P9		(1 << 9)

/* @def PIOC_IFDR_P8
* @brief Input Filter Disable */
#define PIOC_IFDR_P8		(1 << 8)

/* @def PIOC_IFDR_P7
* @brief Input Filter Disable */
#define PIOC_IFDR_P7		(1 << 7)

/* @def PIOC_IFDR_P6
* @brief Input Filter Disable */
#define PIOC_IFDR_P6		(1 << 6)

/* @def PIOC_IFDR_P5
* @brief Input Filter Disable */
#define PIOC_IFDR_P5		(1 << 5)

/* @def PIOC_IFDR_P4
* @brief Input Filter Disable */
#define PIOC_IFDR_P4		(1 << 4)

/* @def PIOC_IFDR_P3
* @brief Input Filter Disable */
#define PIOC_IFDR_P3		(1 << 3)

/* @def PIOC_IFDR_P2
* @brief Input Filter Disable */
#define PIOC_IFDR_P2		(1 << 2)

/* @def PIOC_IFDR_P1
* @brief Input Filter Disable */
#define PIOC_IFDR_P1		(1 << 1)

/* @def PIOC_IFDR_P0
* @brief Input Filter Disable */
#define PIOC_IFDR_P0		(1 << 0)

/* --- PIOC_IFSR values --------------------------------------------- */


/* @def PIOC_IFSR_P31
* @brief Input Filer Status */
#define PIOC_IFSR_P31		(1 << 31)

/* @def PIOC_IFSR_P30
* @brief Input Filer Status */
#define PIOC_IFSR_P30		(1 << 30)

/* @def PIOC_IFSR_P29
* @brief Input Filer Status */
#define PIOC_IFSR_P29		(1 << 29)

/* @def PIOC_IFSR_P28
* @brief Input Filer Status */
#define PIOC_IFSR_P28		(1 << 28)

/* @def PIOC_IFSR_P27
* @brief Input Filer Status */
#define PIOC_IFSR_P27		(1 << 27)

/* @def PIOC_IFSR_P26
* @brief Input Filer Status */
#define PIOC_IFSR_P26		(1 << 26)

/* @def PIOC_IFSR_P25
* @brief Input Filer Status */
#define PIOC_IFSR_P25		(1 << 25)

/* @def PIOC_IFSR_P24
* @brief Input Filer Status */
#define PIOC_IFSR_P24		(1 << 24)

/* @def PIOC_IFSR_P23
* @brief Input Filer Status */
#define PIOC_IFSR_P23		(1 << 23)

/* @def PIOC_IFSR_P22
* @brief Input Filer Status */
#define PIOC_IFSR_P22		(1 << 22)

/* @def PIOC_IFSR_P21
* @brief Input Filer Status */
#define PIOC_IFSR_P21		(1 << 21)

/* @def PIOC_IFSR_P20
* @brief Input Filer Status */
#define PIOC_IFSR_P20		(1 << 20)

/* @def PIOC_IFSR_P19
* @brief Input Filer Status */
#define PIOC_IFSR_P19		(1 << 19)

/* @def PIOC_IFSR_P18
* @brief Input Filer Status */
#define PIOC_IFSR_P18		(1 << 18)

/* @def PIOC_IFSR_P17
* @brief Input Filer Status */
#define PIOC_IFSR_P17		(1 << 17)

/* @def PIOC_IFSR_P16
* @brief Input Filer Status */
#define PIOC_IFSR_P16		(1 << 16)

/* @def PIOC_IFSR_P15
* @brief Input Filer Status */
#define PIOC_IFSR_P15		(1 << 15)

/* @def PIOC_IFSR_P14
* @brief Input Filer Status */
#define PIOC_IFSR_P14		(1 << 14)

/* @def PIOC_IFSR_P13
* @brief Input Filer Status */
#define PIOC_IFSR_P13		(1 << 13)

/* @def PIOC_IFSR_P12
* @brief Input Filer Status */
#define PIOC_IFSR_P12		(1 << 12)

/* @def PIOC_IFSR_P11
* @brief Input Filer Status */
#define PIOC_IFSR_P11		(1 << 11)

/* @def PIOC_IFSR_P10
* @brief Input Filer Status */
#define PIOC_IFSR_P10		(1 << 10)

/* @def PIOC_IFSR_P9
* @brief Input Filer Status */
#define PIOC_IFSR_P9		(1 << 9)

/* @def PIOC_IFSR_P8
* @brief Input Filer Status */
#define PIOC_IFSR_P8		(1 << 8)

/* @def PIOC_IFSR_P7
* @brief Input Filer Status */
#define PIOC_IFSR_P7		(1 << 7)

/* @def PIOC_IFSR_P6
* @brief Input Filer Status */
#define PIOC_IFSR_P6		(1 << 6)

/* @def PIOC_IFSR_P5
* @brief Input Filer Status */
#define PIOC_IFSR_P5		(1 << 5)

/* @def PIOC_IFSR_P4
* @brief Input Filer Status */
#define PIOC_IFSR_P4		(1 << 4)

/* @def PIOC_IFSR_P3
* @brief Input Filer Status */
#define PIOC_IFSR_P3		(1 << 3)

/* @def PIOC_IFSR_P2
* @brief Input Filer Status */
#define PIOC_IFSR_P2		(1 << 2)

/* @def PIOC_IFSR_P1
* @brief Input Filer Status */
#define PIOC_IFSR_P1		(1 << 1)

/* @def PIOC_IFSR_P0
* @brief Input Filer Status */
#define PIOC_IFSR_P0		(1 << 0)

/* --- PIOC_SODR values --------------------------------------------- */


/* @def PIOC_SODR_P31
* @brief Set Output Data */
#define PIOC_SODR_P31		(1 << 31)

/* @def PIOC_SODR_P30
* @brief Set Output Data */
#define PIOC_SODR_P30		(1 << 30)

/* @def PIOC_SODR_P29
* @brief Set Output Data */
#define PIOC_SODR_P29		(1 << 29)

/* @def PIOC_SODR_P28
* @brief Set Output Data */
#define PIOC_SODR_P28		(1 << 28)

/* @def PIOC_SODR_P27
* @brief Set Output Data */
#define PIOC_SODR_P27		(1 << 27)

/* @def PIOC_SODR_P26
* @brief Set Output Data */
#define PIOC_SODR_P26		(1 << 26)

/* @def PIOC_SODR_P25
* @brief Set Output Data */
#define PIOC_SODR_P25		(1 << 25)

/* @def PIOC_SODR_P24
* @brief Set Output Data */
#define PIOC_SODR_P24		(1 << 24)

/* @def PIOC_SODR_P23
* @brief Set Output Data */
#define PIOC_SODR_P23		(1 << 23)

/* @def PIOC_SODR_P22
* @brief Set Output Data */
#define PIOC_SODR_P22		(1 << 22)

/* @def PIOC_SODR_P21
* @brief Set Output Data */
#define PIOC_SODR_P21		(1 << 21)

/* @def PIOC_SODR_P20
* @brief Set Output Data */
#define PIOC_SODR_P20		(1 << 20)

/* @def PIOC_SODR_P19
* @brief Set Output Data */
#define PIOC_SODR_P19		(1 << 19)

/* @def PIOC_SODR_P18
* @brief Set Output Data */
#define PIOC_SODR_P18		(1 << 18)

/* @def PIOC_SODR_P17
* @brief Set Output Data */
#define PIOC_SODR_P17		(1 << 17)

/* @def PIOC_SODR_P16
* @brief Set Output Data */
#define PIOC_SODR_P16		(1 << 16)

/* @def PIOC_SODR_P15
* @brief Set Output Data */
#define PIOC_SODR_P15		(1 << 15)

/* @def PIOC_SODR_P14
* @brief Set Output Data */
#define PIOC_SODR_P14		(1 << 14)

/* @def PIOC_SODR_P13
* @brief Set Output Data */
#define PIOC_SODR_P13		(1 << 13)

/* @def PIOC_SODR_P12
* @brief Set Output Data */
#define PIOC_SODR_P12		(1 << 12)

/* @def PIOC_SODR_P11
* @brief Set Output Data */
#define PIOC_SODR_P11		(1 << 11)

/* @def PIOC_SODR_P10
* @brief Set Output Data */
#define PIOC_SODR_P10		(1 << 10)

/* @def PIOC_SODR_P9
* @brief Set Output Data */
#define PIOC_SODR_P9		(1 << 9)

/* @def PIOC_SODR_P8
* @brief Set Output Data */
#define PIOC_SODR_P8		(1 << 8)

/* @def PIOC_SODR_P7
* @brief Set Output Data */
#define PIOC_SODR_P7		(1 << 7)

/* @def PIOC_SODR_P6
* @brief Set Output Data */
#define PIOC_SODR_P6		(1 << 6)

/* @def PIOC_SODR_P5
* @brief Set Output Data */
#define PIOC_SODR_P5		(1 << 5)

/* @def PIOC_SODR_P4
* @brief Set Output Data */
#define PIOC_SODR_P4		(1 << 4)

/* @def PIOC_SODR_P3
* @brief Set Output Data */
#define PIOC_SODR_P3		(1 << 3)

/* @def PIOC_SODR_P2
* @brief Set Output Data */
#define PIOC_SODR_P2		(1 << 2)

/* @def PIOC_SODR_P1
* @brief Set Output Data */
#define PIOC_SODR_P1		(1 << 1)

/* @def PIOC_SODR_P0
* @brief Set Output Data */
#define PIOC_SODR_P0		(1 << 0)

/* --- PIOC_CODR values --------------------------------------------- */


/* @def PIOC_CODR_P31
* @brief Clear Output Data */
#define PIOC_CODR_P31		(1 << 31)

/* @def PIOC_CODR_P30
* @brief Clear Output Data */
#define PIOC_CODR_P30		(1 << 30)

/* @def PIOC_CODR_P29
* @brief Clear Output Data */
#define PIOC_CODR_P29		(1 << 29)

/* @def PIOC_CODR_P28
* @brief Clear Output Data */
#define PIOC_CODR_P28		(1 << 28)

/* @def PIOC_CODR_P27
* @brief Clear Output Data */
#define PIOC_CODR_P27		(1 << 27)

/* @def PIOC_CODR_P26
* @brief Clear Output Data */
#define PIOC_CODR_P26		(1 << 26)

/* @def PIOC_CODR_P25
* @brief Clear Output Data */
#define PIOC_CODR_P25		(1 << 25)

/* @def PIOC_CODR_P24
* @brief Clear Output Data */
#define PIOC_CODR_P24		(1 << 24)

/* @def PIOC_CODR_P23
* @brief Clear Output Data */
#define PIOC_CODR_P23		(1 << 23)

/* @def PIOC_CODR_P22
* @brief Clear Output Data */
#define PIOC_CODR_P22		(1 << 22)

/* @def PIOC_CODR_P21
* @brief Clear Output Data */
#define PIOC_CODR_P21		(1 << 21)

/* @def PIOC_CODR_P20
* @brief Clear Output Data */
#define PIOC_CODR_P20		(1 << 20)

/* @def PIOC_CODR_P19
* @brief Clear Output Data */
#define PIOC_CODR_P19		(1 << 19)

/* @def PIOC_CODR_P18
* @brief Clear Output Data */
#define PIOC_CODR_P18		(1 << 18)

/* @def PIOC_CODR_P17
* @brief Clear Output Data */
#define PIOC_CODR_P17		(1 << 17)

/* @def PIOC_CODR_P16
* @brief Clear Output Data */
#define PIOC_CODR_P16		(1 << 16)

/* @def PIOC_CODR_P15
* @brief Clear Output Data */
#define PIOC_CODR_P15		(1 << 15)

/* @def PIOC_CODR_P14
* @brief Clear Output Data */
#define PIOC_CODR_P14		(1 << 14)

/* @def PIOC_CODR_P13
* @brief Clear Output Data */
#define PIOC_CODR_P13		(1 << 13)

/* @def PIOC_CODR_P12
* @brief Clear Output Data */
#define PIOC_CODR_P12		(1 << 12)

/* @def PIOC_CODR_P11
* @brief Clear Output Data */
#define PIOC_CODR_P11		(1 << 11)

/* @def PIOC_CODR_P10
* @brief Clear Output Data */
#define PIOC_CODR_P10		(1 << 10)

/* @def PIOC_CODR_P9
* @brief Clear Output Data */
#define PIOC_CODR_P9		(1 << 9)

/* @def PIOC_CODR_P8
* @brief Clear Output Data */
#define PIOC_CODR_P8		(1 << 8)

/* @def PIOC_CODR_P7
* @brief Clear Output Data */
#define PIOC_CODR_P7		(1 << 7)

/* @def PIOC_CODR_P6
* @brief Clear Output Data */
#define PIOC_CODR_P6		(1 << 6)

/* @def PIOC_CODR_P5
* @brief Clear Output Data */
#define PIOC_CODR_P5		(1 << 5)

/* @def PIOC_CODR_P4
* @brief Clear Output Data */
#define PIOC_CODR_P4		(1 << 4)

/* @def PIOC_CODR_P3
* @brief Clear Output Data */
#define PIOC_CODR_P3		(1 << 3)

/* @def PIOC_CODR_P2
* @brief Clear Output Data */
#define PIOC_CODR_P2		(1 << 2)

/* @def PIOC_CODR_P1
* @brief Clear Output Data */
#define PIOC_CODR_P1		(1 << 1)

/* @def PIOC_CODR_P0
* @brief Clear Output Data */
#define PIOC_CODR_P0		(1 << 0)

/* --- PIOC_ODSR values --------------------------------------------- */


/* @def PIOC_ODSR_P31
* @brief Output Data Status */
#define PIOC_ODSR_P31		(1 << 31)

/* @def PIOC_ODSR_P30
* @brief Output Data Status */
#define PIOC_ODSR_P30		(1 << 30)

/* @def PIOC_ODSR_P29
* @brief Output Data Status */
#define PIOC_ODSR_P29		(1 << 29)

/* @def PIOC_ODSR_P28
* @brief Output Data Status */
#define PIOC_ODSR_P28		(1 << 28)

/* @def PIOC_ODSR_P27
* @brief Output Data Status */
#define PIOC_ODSR_P27		(1 << 27)

/* @def PIOC_ODSR_P26
* @brief Output Data Status */
#define PIOC_ODSR_P26		(1 << 26)

/* @def PIOC_ODSR_P25
* @brief Output Data Status */
#define PIOC_ODSR_P25		(1 << 25)

/* @def PIOC_ODSR_P24
* @brief Output Data Status */
#define PIOC_ODSR_P24		(1 << 24)

/* @def PIOC_ODSR_P23
* @brief Output Data Status */
#define PIOC_ODSR_P23		(1 << 23)

/* @def PIOC_ODSR_P22
* @brief Output Data Status */
#define PIOC_ODSR_P22		(1 << 22)

/* @def PIOC_ODSR_P21
* @brief Output Data Status */
#define PIOC_ODSR_P21		(1 << 21)

/* @def PIOC_ODSR_P20
* @brief Output Data Status */
#define PIOC_ODSR_P20		(1 << 20)

/* @def PIOC_ODSR_P19
* @brief Output Data Status */
#define PIOC_ODSR_P19		(1 << 19)

/* @def PIOC_ODSR_P18
* @brief Output Data Status */
#define PIOC_ODSR_P18		(1 << 18)

/* @def PIOC_ODSR_P17
* @brief Output Data Status */
#define PIOC_ODSR_P17		(1 << 17)

/* @def PIOC_ODSR_P16
* @brief Output Data Status */
#define PIOC_ODSR_P16		(1 << 16)

/* @def PIOC_ODSR_P15
* @brief Output Data Status */
#define PIOC_ODSR_P15		(1 << 15)

/* @def PIOC_ODSR_P14
* @brief Output Data Status */
#define PIOC_ODSR_P14		(1 << 14)

/* @def PIOC_ODSR_P13
* @brief Output Data Status */
#define PIOC_ODSR_P13		(1 << 13)

/* @def PIOC_ODSR_P12
* @brief Output Data Status */
#define PIOC_ODSR_P12		(1 << 12)

/* @def PIOC_ODSR_P11
* @brief Output Data Status */
#define PIOC_ODSR_P11		(1 << 11)

/* @def PIOC_ODSR_P10
* @brief Output Data Status */
#define PIOC_ODSR_P10		(1 << 10)

/* @def PIOC_ODSR_P9
* @brief Output Data Status */
#define PIOC_ODSR_P9		(1 << 9)

/* @def PIOC_ODSR_P8
* @brief Output Data Status */
#define PIOC_ODSR_P8		(1 << 8)

/* @def PIOC_ODSR_P7
* @brief Output Data Status */
#define PIOC_ODSR_P7		(1 << 7)

/* @def PIOC_ODSR_P6
* @brief Output Data Status */
#define PIOC_ODSR_P6		(1 << 6)

/* @def PIOC_ODSR_P5
* @brief Output Data Status */
#define PIOC_ODSR_P5		(1 << 5)

/* @def PIOC_ODSR_P4
* @brief Output Data Status */
#define PIOC_ODSR_P4		(1 << 4)

/* @def PIOC_ODSR_P3
* @brief Output Data Status */
#define PIOC_ODSR_P3		(1 << 3)

/* @def PIOC_ODSR_P2
* @brief Output Data Status */
#define PIOC_ODSR_P2		(1 << 2)

/* @def PIOC_ODSR_P1
* @brief Output Data Status */
#define PIOC_ODSR_P1		(1 << 1)

/* @def PIOC_ODSR_P0
* @brief Output Data Status */
#define PIOC_ODSR_P0		(1 << 0)

/* --- PIOC_PDSR values --------------------------------------------- */


/* @def PIOC_PDSR_P31
* @brief Output Data Status */
#define PIOC_PDSR_P31		(1 << 31)

/* @def PIOC_PDSR_P30
* @brief Output Data Status */
#define PIOC_PDSR_P30		(1 << 30)

/* @def PIOC_PDSR_P29
* @brief Output Data Status */
#define PIOC_PDSR_P29		(1 << 29)

/* @def PIOC_PDSR_P28
* @brief Output Data Status */
#define PIOC_PDSR_P28		(1 << 28)

/* @def PIOC_PDSR_P27
* @brief Output Data Status */
#define PIOC_PDSR_P27		(1 << 27)

/* @def PIOC_PDSR_P26
* @brief Output Data Status */
#define PIOC_PDSR_P26		(1 << 26)

/* @def PIOC_PDSR_P25
* @brief Output Data Status */
#define PIOC_PDSR_P25		(1 << 25)

/* @def PIOC_PDSR_P24
* @brief Output Data Status */
#define PIOC_PDSR_P24		(1 << 24)

/* @def PIOC_PDSR_P23
* @brief Output Data Status */
#define PIOC_PDSR_P23		(1 << 23)

/* @def PIOC_PDSR_P22
* @brief Output Data Status */
#define PIOC_PDSR_P22		(1 << 22)

/* @def PIOC_PDSR_P21
* @brief Output Data Status */
#define PIOC_PDSR_P21		(1 << 21)

/* @def PIOC_PDSR_P20
* @brief Output Data Status */
#define PIOC_PDSR_P20		(1 << 20)

/* @def PIOC_PDSR_P19
* @brief Output Data Status */
#define PIOC_PDSR_P19		(1 << 19)

/* @def PIOC_PDSR_P18
* @brief Output Data Status */
#define PIOC_PDSR_P18		(1 << 18)

/* @def PIOC_PDSR_P17
* @brief Output Data Status */
#define PIOC_PDSR_P17		(1 << 17)

/* @def PIOC_PDSR_P16
* @brief Output Data Status */
#define PIOC_PDSR_P16		(1 << 16)

/* @def PIOC_PDSR_P15
* @brief Output Data Status */
#define PIOC_PDSR_P15		(1 << 15)

/* @def PIOC_PDSR_P14
* @brief Output Data Status */
#define PIOC_PDSR_P14		(1 << 14)

/* @def PIOC_PDSR_P13
* @brief Output Data Status */
#define PIOC_PDSR_P13		(1 << 13)

/* @def PIOC_PDSR_P12
* @brief Output Data Status */
#define PIOC_PDSR_P12		(1 << 12)

/* @def PIOC_PDSR_P11
* @brief Output Data Status */
#define PIOC_PDSR_P11		(1 << 11)

/* @def PIOC_PDSR_P10
* @brief Output Data Status */
#define PIOC_PDSR_P10		(1 << 10)

/* @def PIOC_PDSR_P9
* @brief Output Data Status */
#define PIOC_PDSR_P9		(1 << 9)

/* @def PIOC_PDSR_P8
* @brief Output Data Status */
#define PIOC_PDSR_P8		(1 << 8)

/* @def PIOC_PDSR_P7
* @brief Output Data Status */
#define PIOC_PDSR_P7		(1 << 7)

/* @def PIOC_PDSR_P6
* @brief Output Data Status */
#define PIOC_PDSR_P6		(1 << 6)

/* @def PIOC_PDSR_P5
* @brief Output Data Status */
#define PIOC_PDSR_P5		(1 << 5)

/* @def PIOC_PDSR_P4
* @brief Output Data Status */
#define PIOC_PDSR_P4		(1 << 4)

/* @def PIOC_PDSR_P3
* @brief Output Data Status */
#define PIOC_PDSR_P3		(1 << 3)

/* @def PIOC_PDSR_P2
* @brief Output Data Status */
#define PIOC_PDSR_P2		(1 << 2)

/* @def PIOC_PDSR_P1
* @brief Output Data Status */
#define PIOC_PDSR_P1		(1 << 1)

/* @def PIOC_PDSR_P0
* @brief Output Data Status */
#define PIOC_PDSR_P0		(1 << 0)

/* --- PIOC_IER values ---------------------------------------------- */


/* @def PIOC_IER_P31
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P31		(1 << 31)

/* @def PIOC_IER_P30
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P30		(1 << 30)

/* @def PIOC_IER_P29
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P29		(1 << 29)

/* @def PIOC_IER_P28
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P28		(1 << 28)

/* @def PIOC_IER_P27
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P27		(1 << 27)

/* @def PIOC_IER_P26
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P26		(1 << 26)

/* @def PIOC_IER_P25
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P25		(1 << 25)

/* @def PIOC_IER_P24
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P24		(1 << 24)

/* @def PIOC_IER_P23
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P23		(1 << 23)

/* @def PIOC_IER_P22
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P22		(1 << 22)

/* @def PIOC_IER_P21
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P21		(1 << 21)

/* @def PIOC_IER_P20
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P20		(1 << 20)

/* @def PIOC_IER_P19
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P19		(1 << 19)

/* @def PIOC_IER_P18
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P18		(1 << 18)

/* @def PIOC_IER_P17
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P17		(1 << 17)

/* @def PIOC_IER_P16
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P16		(1 << 16)

/* @def PIOC_IER_P15
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P15		(1 << 15)

/* @def PIOC_IER_P14
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P14		(1 << 14)

/* @def PIOC_IER_P13
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P13		(1 << 13)

/* @def PIOC_IER_P12
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P12		(1 << 12)

/* @def PIOC_IER_P11
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P11		(1 << 11)

/* @def PIOC_IER_P10
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P10		(1 << 10)

/* @def PIOC_IER_P9
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P9		(1 << 9)

/* @def PIOC_IER_P8
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P8		(1 << 8)

/* @def PIOC_IER_P7
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P7		(1 << 7)

/* @def PIOC_IER_P6
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P6		(1 << 6)

/* @def PIOC_IER_P5
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P5		(1 << 5)

/* @def PIOC_IER_P4
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P4		(1 << 4)

/* @def PIOC_IER_P3
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P3		(1 << 3)

/* @def PIOC_IER_P2
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P2		(1 << 2)

/* @def PIOC_IER_P1
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P1		(1 << 1)

/* @def PIOC_IER_P0
* @brief Input Change Interrupt Enable */
#define PIOC_IER_P0		(1 << 0)

/* --- PIOC_IDR values ---------------------------------------------- */


/* @def PIOC_IDR_P31
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P31		(1 << 31)

/* @def PIOC_IDR_P30
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P30		(1 << 30)

/* @def PIOC_IDR_P29
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P29		(1 << 29)

/* @def PIOC_IDR_P28
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P28		(1 << 28)

/* @def PIOC_IDR_P27
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P27		(1 << 27)

/* @def PIOC_IDR_P26
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P26		(1 << 26)

/* @def PIOC_IDR_P25
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P25		(1 << 25)

/* @def PIOC_IDR_P24
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P24		(1 << 24)

/* @def PIOC_IDR_P23
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P23		(1 << 23)

/* @def PIOC_IDR_P22
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P22		(1 << 22)

/* @def PIOC_IDR_P21
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P21		(1 << 21)

/* @def PIOC_IDR_P20
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P20		(1 << 20)

/* @def PIOC_IDR_P19
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P19		(1 << 19)

/* @def PIOC_IDR_P18
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P18		(1 << 18)

/* @def PIOC_IDR_P17
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P17		(1 << 17)

/* @def PIOC_IDR_P16
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P16		(1 << 16)

/* @def PIOC_IDR_P15
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P15		(1 << 15)

/* @def PIOC_IDR_P14
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P14		(1 << 14)

/* @def PIOC_IDR_P13
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P13		(1 << 13)

/* @def PIOC_IDR_P12
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P12		(1 << 12)

/* @def PIOC_IDR_P11
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P11		(1 << 11)

/* @def PIOC_IDR_P10
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P10		(1 << 10)

/* @def PIOC_IDR_P9
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P9		(1 << 9)

/* @def PIOC_IDR_P8
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P8		(1 << 8)

/* @def PIOC_IDR_P7
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P7		(1 << 7)

/* @def PIOC_IDR_P6
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P6		(1 << 6)

/* @def PIOC_IDR_P5
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P5		(1 << 5)

/* @def PIOC_IDR_P4
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P4		(1 << 4)

/* @def PIOC_IDR_P3
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P3		(1 << 3)

/* @def PIOC_IDR_P2
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P2		(1 << 2)

/* @def PIOC_IDR_P1
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P1		(1 << 1)

/* @def PIOC_IDR_P0
* @brief Input Change Interrupt Disable */
#define PIOC_IDR_P0		(1 << 0)

/* --- PIOC_IMR values ---------------------------------------------- */


/* @def PIOC_IMR_P31
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P31		(1 << 31)

/* @def PIOC_IMR_P30
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P30		(1 << 30)

/* @def PIOC_IMR_P29
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P29		(1 << 29)

/* @def PIOC_IMR_P28
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P28		(1 << 28)

/* @def PIOC_IMR_P27
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P27		(1 << 27)

/* @def PIOC_IMR_P26
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P26		(1 << 26)

/* @def PIOC_IMR_P25
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P25		(1 << 25)

/* @def PIOC_IMR_P24
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P24		(1 << 24)

/* @def PIOC_IMR_P23
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P23		(1 << 23)

/* @def PIOC_IMR_P22
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P22		(1 << 22)

/* @def PIOC_IMR_P21
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P21		(1 << 21)

/* @def PIOC_IMR_P20
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P20		(1 << 20)

/* @def PIOC_IMR_P19
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P19		(1 << 19)

/* @def PIOC_IMR_P18
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P18		(1 << 18)

/* @def PIOC_IMR_P17
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P17		(1 << 17)

/* @def PIOC_IMR_P16
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P16		(1 << 16)

/* @def PIOC_IMR_P15
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P15		(1 << 15)

/* @def PIOC_IMR_P14
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P14		(1 << 14)

/* @def PIOC_IMR_P13
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P13		(1 << 13)

/* @def PIOC_IMR_P12
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P12		(1 << 12)

/* @def PIOC_IMR_P11
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P11		(1 << 11)

/* @def PIOC_IMR_P10
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P10		(1 << 10)

/* @def PIOC_IMR_P9
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P9		(1 << 9)

/* @def PIOC_IMR_P8
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P8		(1 << 8)

/* @def PIOC_IMR_P7
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P7		(1 << 7)

/* @def PIOC_IMR_P6
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P6		(1 << 6)

/* @def PIOC_IMR_P5
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P5		(1 << 5)

/* @def PIOC_IMR_P4
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P4		(1 << 4)

/* @def PIOC_IMR_P3
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P3		(1 << 3)

/* @def PIOC_IMR_P2
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P2		(1 << 2)

/* @def PIOC_IMR_P1
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P1		(1 << 1)

/* @def PIOC_IMR_P0
* @brief Input Change Interrupt Mask */
#define PIOC_IMR_P0		(1 << 0)

/* --- PIOC_ISR values ---------------------------------------------- */


/* @def PIOC_ISR_P31
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P31		(1 << 31)

/* @def PIOC_ISR_P30
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P30		(1 << 30)

/* @def PIOC_ISR_P29
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P29		(1 << 29)

/* @def PIOC_ISR_P28
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P28		(1 << 28)

/* @def PIOC_ISR_P27
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P27		(1 << 27)

/* @def PIOC_ISR_P26
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P26		(1 << 26)

/* @def PIOC_ISR_P25
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P25		(1 << 25)

/* @def PIOC_ISR_P24
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P24		(1 << 24)

/* @def PIOC_ISR_P23
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P23		(1 << 23)

/* @def PIOC_ISR_P22
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P22		(1 << 22)

/* @def PIOC_ISR_P21
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P21		(1 << 21)

/* @def PIOC_ISR_P20
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P20		(1 << 20)

/* @def PIOC_ISR_P19
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P19		(1 << 19)

/* @def PIOC_ISR_P18
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P18		(1 << 18)

/* @def PIOC_ISR_P17
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P17		(1 << 17)

/* @def PIOC_ISR_P16
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P16		(1 << 16)

/* @def PIOC_ISR_P15
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P15		(1 << 15)

/* @def PIOC_ISR_P14
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P14		(1 << 14)

/* @def PIOC_ISR_P13
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P13		(1 << 13)

/* @def PIOC_ISR_P12
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P12		(1 << 12)

/* @def PIOC_ISR_P11
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P11		(1 << 11)

/* @def PIOC_ISR_P10
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P10		(1 << 10)

/* @def PIOC_ISR_P9
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P9		(1 << 9)

/* @def PIOC_ISR_P8
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P8		(1 << 8)

/* @def PIOC_ISR_P7
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P7		(1 << 7)

/* @def PIOC_ISR_P6
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P6		(1 << 6)

/* @def PIOC_ISR_P5
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P5		(1 << 5)

/* @def PIOC_ISR_P4
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P4		(1 << 4)

/* @def PIOC_ISR_P3
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P3		(1 << 3)

/* @def PIOC_ISR_P2
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P2		(1 << 2)

/* @def PIOC_ISR_P1
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P1		(1 << 1)

/* @def PIOC_ISR_P0
* @brief Input Change Interrupt Status */
#define PIOC_ISR_P0		(1 << 0)

/* --- PIOC_MDER values --------------------------------------------- */


/* @def PIOC_MDER_P31
* @brief Multi Drive Enable. */
#define PIOC_MDER_P31		(1 << 31)

/* @def PIOC_MDER_P30
* @brief Multi Drive Enable. */
#define PIOC_MDER_P30		(1 << 30)

/* @def PIOC_MDER_P29
* @brief Multi Drive Enable. */
#define PIOC_MDER_P29		(1 << 29)

/* @def PIOC_MDER_P28
* @brief Multi Drive Enable. */
#define PIOC_MDER_P28		(1 << 28)

/* @def PIOC_MDER_P27
* @brief Multi Drive Enable. */
#define PIOC_MDER_P27		(1 << 27)

/* @def PIOC_MDER_P26
* @brief Multi Drive Enable. */
#define PIOC_MDER_P26		(1 << 26)

/* @def PIOC_MDER_P25
* @brief Multi Drive Enable. */
#define PIOC_MDER_P25		(1 << 25)

/* @def PIOC_MDER_P24
* @brief Multi Drive Enable. */
#define PIOC_MDER_P24		(1 << 24)

/* @def PIOC_MDER_P23
* @brief Multi Drive Enable. */
#define PIOC_MDER_P23		(1 << 23)

/* @def PIOC_MDER_P22
* @brief Multi Drive Enable. */
#define PIOC_MDER_P22		(1 << 22)

/* @def PIOC_MDER_P21
* @brief Multi Drive Enable. */
#define PIOC_MDER_P21		(1 << 21)

/* @def PIOC_MDER_P20
* @brief Multi Drive Enable. */
#define PIOC_MDER_P20		(1 << 20)

/* @def PIOC_MDER_P19
* @brief Multi Drive Enable. */
#define PIOC_MDER_P19		(1 << 19)

/* @def PIOC_MDER_P18
* @brief Multi Drive Enable. */
#define PIOC_MDER_P18		(1 << 18)

/* @def PIOC_MDER_P17
* @brief Multi Drive Enable. */
#define PIOC_MDER_P17		(1 << 17)

/* @def PIOC_MDER_P16
* @brief Multi Drive Enable. */
#define PIOC_MDER_P16		(1 << 16)

/* @def PIOC_MDER_P15
* @brief Multi Drive Enable. */
#define PIOC_MDER_P15		(1 << 15)

/* @def PIOC_MDER_P14
* @brief Multi Drive Enable. */
#define PIOC_MDER_P14		(1 << 14)

/* @def PIOC_MDER_P13
* @brief Multi Drive Enable. */
#define PIOC_MDER_P13		(1 << 13)

/* @def PIOC_MDER_P12
* @brief Multi Drive Enable. */
#define PIOC_MDER_P12		(1 << 12)

/* @def PIOC_MDER_P11
* @brief Multi Drive Enable. */
#define PIOC_MDER_P11		(1 << 11)

/* @def PIOC_MDER_P10
* @brief Multi Drive Enable. */
#define PIOC_MDER_P10		(1 << 10)

/* @def PIOC_MDER_P9
* @brief Multi Drive Enable. */
#define PIOC_MDER_P9		(1 << 9)

/* @def PIOC_MDER_P8
* @brief Multi Drive Enable. */
#define PIOC_MDER_P8		(1 << 8)

/* @def PIOC_MDER_P7
* @brief Multi Drive Enable. */
#define PIOC_MDER_P7		(1 << 7)

/* @def PIOC_MDER_P6
* @brief Multi Drive Enable. */
#define PIOC_MDER_P6		(1 << 6)

/* @def PIOC_MDER_P5
* @brief Multi Drive Enable. */
#define PIOC_MDER_P5		(1 << 5)

/* @def PIOC_MDER_P4
* @brief Multi Drive Enable. */
#define PIOC_MDER_P4		(1 << 4)

/* @def PIOC_MDER_P3
* @brief Multi Drive Enable. */
#define PIOC_MDER_P3		(1 << 3)

/* @def PIOC_MDER_P2
* @brief Multi Drive Enable. */
#define PIOC_MDER_P2		(1 << 2)

/* @def PIOC_MDER_P1
* @brief Multi Drive Enable. */
#define PIOC_MDER_P1		(1 << 1)

/* @def PIOC_MDER_P0
* @brief Multi Drive Enable. */
#define PIOC_MDER_P0		(1 << 0)

/* --- PIOC_MDDR values --------------------------------------------- */


/* @def PIOC_MDDR_P31
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P31		(1 << 31)

/* @def PIOC_MDDR_P30
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P30		(1 << 30)

/* @def PIOC_MDDR_P29
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P29		(1 << 29)

/* @def PIOC_MDDR_P28
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P28		(1 << 28)

/* @def PIOC_MDDR_P27
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P27		(1 << 27)

/* @def PIOC_MDDR_P26
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P26		(1 << 26)

/* @def PIOC_MDDR_P25
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P25		(1 << 25)

/* @def PIOC_MDDR_P24
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P24		(1 << 24)

/* @def PIOC_MDDR_P23
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P23		(1 << 23)

/* @def PIOC_MDDR_P22
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P22		(1 << 22)

/* @def PIOC_MDDR_P21
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P21		(1 << 21)

/* @def PIOC_MDDR_P20
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P20		(1 << 20)

/* @def PIOC_MDDR_P19
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P19		(1 << 19)

/* @def PIOC_MDDR_P18
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P18		(1 << 18)

/* @def PIOC_MDDR_P17
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P17		(1 << 17)

/* @def PIOC_MDDR_P16
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P16		(1 << 16)

/* @def PIOC_MDDR_P15
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P15		(1 << 15)

/* @def PIOC_MDDR_P14
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P14		(1 << 14)

/* @def PIOC_MDDR_P13
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P13		(1 << 13)

/* @def PIOC_MDDR_P12
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P12		(1 << 12)

/* @def PIOC_MDDR_P11
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P11		(1 << 11)

/* @def PIOC_MDDR_P10
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P10		(1 << 10)

/* @def PIOC_MDDR_P9
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P9		(1 << 9)

/* @def PIOC_MDDR_P8
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P8		(1 << 8)

/* @def PIOC_MDDR_P7
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P7		(1 << 7)

/* @def PIOC_MDDR_P6
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P6		(1 << 6)

/* @def PIOC_MDDR_P5
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P5		(1 << 5)

/* @def PIOC_MDDR_P4
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P4		(1 << 4)

/* @def PIOC_MDDR_P3
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P3		(1 << 3)

/* @def PIOC_MDDR_P2
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P2		(1 << 2)

/* @def PIOC_MDDR_P1
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P1		(1 << 1)

/* @def PIOC_MDDR_P0
* @brief Multi Drive Disable. */
#define PIOC_MDDR_P0		(1 << 0)

/* --- PIOC_MDSR values --------------------------------------------- */


/* @def PIOC_MDSR_P31
* @brief Multi Drive Status. */
#define PIOC_MDSR_P31		(1 << 31)

/* @def PIOC_MDSR_P30
* @brief Multi Drive Status. */
#define PIOC_MDSR_P30		(1 << 30)

/* @def PIOC_MDSR_P29
* @brief Multi Drive Status. */
#define PIOC_MDSR_P29		(1 << 29)

/* @def PIOC_MDSR_P28
* @brief Multi Drive Status. */
#define PIOC_MDSR_P28		(1 << 28)

/* @def PIOC_MDSR_P27
* @brief Multi Drive Status. */
#define PIOC_MDSR_P27		(1 << 27)

/* @def PIOC_MDSR_P26
* @brief Multi Drive Status. */
#define PIOC_MDSR_P26		(1 << 26)

/* @def PIOC_MDSR_P25
* @brief Multi Drive Status. */
#define PIOC_MDSR_P25		(1 << 25)

/* @def PIOC_MDSR_P24
* @brief Multi Drive Status. */
#define PIOC_MDSR_P24		(1 << 24)

/* @def PIOC_MDSR_P23
* @brief Multi Drive Status. */
#define PIOC_MDSR_P23		(1 << 23)

/* @def PIOC_MDSR_P22
* @brief Multi Drive Status. */
#define PIOC_MDSR_P22		(1 << 22)

/* @def PIOC_MDSR_P21
* @brief Multi Drive Status. */
#define PIOC_MDSR_P21		(1 << 21)

/* @def PIOC_MDSR_P20
* @brief Multi Drive Status. */
#define PIOC_MDSR_P20		(1 << 20)

/* @def PIOC_MDSR_P19
* @brief Multi Drive Status. */
#define PIOC_MDSR_P19		(1 << 19)

/* @def PIOC_MDSR_P18
* @brief Multi Drive Status. */
#define PIOC_MDSR_P18		(1 << 18)

/* @def PIOC_MDSR_P17
* @brief Multi Drive Status. */
#define PIOC_MDSR_P17		(1 << 17)

/* @def PIOC_MDSR_P16
* @brief Multi Drive Status. */
#define PIOC_MDSR_P16		(1 << 16)

/* @def PIOC_MDSR_P15
* @brief Multi Drive Status. */
#define PIOC_MDSR_P15		(1 << 15)

/* @def PIOC_MDSR_P14
* @brief Multi Drive Status. */
#define PIOC_MDSR_P14		(1 << 14)

/* @def PIOC_MDSR_P13
* @brief Multi Drive Status. */
#define PIOC_MDSR_P13		(1 << 13)

/* @def PIOC_MDSR_P12
* @brief Multi Drive Status. */
#define PIOC_MDSR_P12		(1 << 12)

/* @def PIOC_MDSR_P11
* @brief Multi Drive Status. */
#define PIOC_MDSR_P11		(1 << 11)

/* @def PIOC_MDSR_P10
* @brief Multi Drive Status. */
#define PIOC_MDSR_P10		(1 << 10)

/* @def PIOC_MDSR_P9
* @brief Multi Drive Status. */
#define PIOC_MDSR_P9		(1 << 9)

/* @def PIOC_MDSR_P8
* @brief Multi Drive Status. */
#define PIOC_MDSR_P8		(1 << 8)

/* @def PIOC_MDSR_P7
* @brief Multi Drive Status. */
#define PIOC_MDSR_P7		(1 << 7)

/* @def PIOC_MDSR_P6
* @brief Multi Drive Status. */
#define PIOC_MDSR_P6		(1 << 6)

/* @def PIOC_MDSR_P5
* @brief Multi Drive Status. */
#define PIOC_MDSR_P5		(1 << 5)

/* @def PIOC_MDSR_P4
* @brief Multi Drive Status. */
#define PIOC_MDSR_P4		(1 << 4)

/* @def PIOC_MDSR_P3
* @brief Multi Drive Status. */
#define PIOC_MDSR_P3		(1 << 3)

/* @def PIOC_MDSR_P2
* @brief Multi Drive Status. */
#define PIOC_MDSR_P2		(1 << 2)

/* @def PIOC_MDSR_P1
* @brief Multi Drive Status. */
#define PIOC_MDSR_P1		(1 << 1)

/* @def PIOC_MDSR_P0
* @brief Multi Drive Status. */
#define PIOC_MDSR_P0		(1 << 0)

/* --- PIOC_PUDR values --------------------------------------------- */


/* @def PIOC_PUDR_P31
* @brief Pull Up Disable. */
#define PIOC_PUDR_P31		(1 << 31)

/* @def PIOC_PUDR_P30
* @brief Pull Up Disable. */
#define PIOC_PUDR_P30		(1 << 30)

/* @def PIOC_PUDR_P29
* @brief Pull Up Disable. */
#define PIOC_PUDR_P29		(1 << 29)

/* @def PIOC_PUDR_P28
* @brief Pull Up Disable. */
#define PIOC_PUDR_P28		(1 << 28)

/* @def PIOC_PUDR_P27
* @brief Pull Up Disable. */
#define PIOC_PUDR_P27		(1 << 27)

/* @def PIOC_PUDR_P26
* @brief Pull Up Disable. */
#define PIOC_PUDR_P26		(1 << 26)

/* @def PIOC_PUDR_P25
* @brief Pull Up Disable. */
#define PIOC_PUDR_P25		(1 << 25)

/* @def PIOC_PUDR_P24
* @brief Pull Up Disable. */
#define PIOC_PUDR_P24		(1 << 24)

/* @def PIOC_PUDR_P23
* @brief Pull Up Disable. */
#define PIOC_PUDR_P23		(1 << 23)

/* @def PIOC_PUDR_P22
* @brief Pull Up Disable. */
#define PIOC_PUDR_P22		(1 << 22)

/* @def PIOC_PUDR_P21
* @brief Pull Up Disable. */
#define PIOC_PUDR_P21		(1 << 21)

/* @def PIOC_PUDR_P20
* @brief Pull Up Disable. */
#define PIOC_PUDR_P20		(1 << 20)

/* @def PIOC_PUDR_P19
* @brief Pull Up Disable. */
#define PIOC_PUDR_P19		(1 << 19)

/* @def PIOC_PUDR_P18
* @brief Pull Up Disable. */
#define PIOC_PUDR_P18		(1 << 18)

/* @def PIOC_PUDR_P17
* @brief Pull Up Disable. */
#define PIOC_PUDR_P17		(1 << 17)

/* @def PIOC_PUDR_P16
* @brief Pull Up Disable. */
#define PIOC_PUDR_P16		(1 << 16)

/* @def PIOC_PUDR_P15
* @brief Pull Up Disable. */
#define PIOC_PUDR_P15		(1 << 15)

/* @def PIOC_PUDR_P14
* @brief Pull Up Disable. */
#define PIOC_PUDR_P14		(1 << 14)

/* @def PIOC_PUDR_P13
* @brief Pull Up Disable. */
#define PIOC_PUDR_P13		(1 << 13)

/* @def PIOC_PUDR_P12
* @brief Pull Up Disable. */
#define PIOC_PUDR_P12		(1 << 12)

/* @def PIOC_PUDR_P11
* @brief Pull Up Disable. */
#define PIOC_PUDR_P11		(1 << 11)

/* @def PIOC_PUDR_P10
* @brief Pull Up Disable. */
#define PIOC_PUDR_P10		(1 << 10)

/* @def PIOC_PUDR_P9
* @brief Pull Up Disable. */
#define PIOC_PUDR_P9		(1 << 9)

/* @def PIOC_PUDR_P8
* @brief Pull Up Disable. */
#define PIOC_PUDR_P8		(1 << 8)

/* @def PIOC_PUDR_P7
* @brief Pull Up Disable. */
#define PIOC_PUDR_P7		(1 << 7)

/* @def PIOC_PUDR_P6
* @brief Pull Up Disable. */
#define PIOC_PUDR_P6		(1 << 6)

/* @def PIOC_PUDR_P5
* @brief Pull Up Disable. */
#define PIOC_PUDR_P5		(1 << 5)

/* @def PIOC_PUDR_P4
* @brief Pull Up Disable. */
#define PIOC_PUDR_P4		(1 << 4)

/* @def PIOC_PUDR_P3
* @brief Pull Up Disable. */
#define PIOC_PUDR_P3		(1 << 3)

/* @def PIOC_PUDR_P2
* @brief Pull Up Disable. */
#define PIOC_PUDR_P2		(1 << 2)

/* @def PIOC_PUDR_P1
* @brief Pull Up Disable. */
#define PIOC_PUDR_P1		(1 << 1)

/* @def PIOC_PUDR_P0
* @brief Pull Up Disable. */
#define PIOC_PUDR_P0		(1 << 0)

/* --- PIOC_PUER values --------------------------------------------- */


/* @def PIOC_PUER_P31
* @brief Pull Up Enable. */
#define PIOC_PUER_P31		(1 << 31)

/* @def PIOC_PUER_P30
* @brief Pull Up Enable. */
#define PIOC_PUER_P30		(1 << 30)

/* @def PIOC_PUER_P29
* @brief Pull Up Enable. */
#define PIOC_PUER_P29		(1 << 29)

/* @def PIOC_PUER_P28
* @brief Pull Up Enable. */
#define PIOC_PUER_P28		(1 << 28)

/* @def PIOC_PUER_P27
* @brief Pull Up Enable. */
#define PIOC_PUER_P27		(1 << 27)

/* @def PIOC_PUER_P26
* @brief Pull Up Enable. */
#define PIOC_PUER_P26		(1 << 26)

/* @def PIOC_PUER_P25
* @brief Pull Up Enable. */
#define PIOC_PUER_P25		(1 << 25)

/* @def PIOC_PUER_P24
* @brief Pull Up Enable. */
#define PIOC_PUER_P24		(1 << 24)

/* @def PIOC_PUER_P23
* @brief Pull Up Enable. */
#define PIOC_PUER_P23		(1 << 23)

/* @def PIOC_PUER_P22
* @brief Pull Up Enable. */
#define PIOC_PUER_P22		(1 << 22)

/* @def PIOC_PUER_P21
* @brief Pull Up Enable. */
#define PIOC_PUER_P21		(1 << 21)

/* @def PIOC_PUER_P20
* @brief Pull Up Enable. */
#define PIOC_PUER_P20		(1 << 20)

/* @def PIOC_PUER_P19
* @brief Pull Up Enable. */
#define PIOC_PUER_P19		(1 << 19)

/* @def PIOC_PUER_P18
* @brief Pull Up Enable. */
#define PIOC_PUER_P18		(1 << 18)

/* @def PIOC_PUER_P17
* @brief Pull Up Enable. */
#define PIOC_PUER_P17		(1 << 17)

/* @def PIOC_PUER_P16
* @brief Pull Up Enable. */
#define PIOC_PUER_P16		(1 << 16)

/* @def PIOC_PUER_P15
* @brief Pull Up Enable. */
#define PIOC_PUER_P15		(1 << 15)

/* @def PIOC_PUER_P14
* @brief Pull Up Enable. */
#define PIOC_PUER_P14		(1 << 14)

/* @def PIOC_PUER_P13
* @brief Pull Up Enable. */
#define PIOC_PUER_P13		(1 << 13)

/* @def PIOC_PUER_P12
* @brief Pull Up Enable. */
#define PIOC_PUER_P12		(1 << 12)

/* @def PIOC_PUER_P11
* @brief Pull Up Enable. */
#define PIOC_PUER_P11		(1 << 11)

/* @def PIOC_PUER_P10
* @brief Pull Up Enable. */
#define PIOC_PUER_P10		(1 << 10)

/* @def PIOC_PUER_P9
* @brief Pull Up Enable. */
#define PIOC_PUER_P9		(1 << 9)

/* @def PIOC_PUER_P8
* @brief Pull Up Enable. */
#define PIOC_PUER_P8		(1 << 8)

/* @def PIOC_PUER_P7
* @brief Pull Up Enable. */
#define PIOC_PUER_P7		(1 << 7)

/* @def PIOC_PUER_P6
* @brief Pull Up Enable. */
#define PIOC_PUER_P6		(1 << 6)

/* @def PIOC_PUER_P5
* @brief Pull Up Enable. */
#define PIOC_PUER_P5		(1 << 5)

/* @def PIOC_PUER_P4
* @brief Pull Up Enable. */
#define PIOC_PUER_P4		(1 << 4)

/* @def PIOC_PUER_P3
* @brief Pull Up Enable. */
#define PIOC_PUER_P3		(1 << 3)

/* @def PIOC_PUER_P2
* @brief Pull Up Enable. */
#define PIOC_PUER_P2		(1 << 2)

/* @def PIOC_PUER_P1
* @brief Pull Up Enable. */
#define PIOC_PUER_P1		(1 << 1)

/* @def PIOC_PUER_P0
* @brief Pull Up Enable. */
#define PIOC_PUER_P0		(1 << 0)

/* --- PIOC_PUSR values --------------------------------------------- */


/* @def PIOC_PUSR_P31
* @brief Pull Up Status. */
#define PIOC_PUSR_P31		(1 << 31)

/* @def PIOC_PUSR_P30
* @brief Pull Up Status. */
#define PIOC_PUSR_P30		(1 << 30)

/* @def PIOC_PUSR_P29
* @brief Pull Up Status. */
#define PIOC_PUSR_P29		(1 << 29)

/* @def PIOC_PUSR_P28
* @brief Pull Up Status. */
#define PIOC_PUSR_P28		(1 << 28)

/* @def PIOC_PUSR_P27
* @brief Pull Up Status. */
#define PIOC_PUSR_P27		(1 << 27)

/* @def PIOC_PUSR_P26
* @brief Pull Up Status. */
#define PIOC_PUSR_P26		(1 << 26)

/* @def PIOC_PUSR_P25
* @brief Pull Up Status. */
#define PIOC_PUSR_P25		(1 << 25)

/* @def PIOC_PUSR_P24
* @brief Pull Up Status. */
#define PIOC_PUSR_P24		(1 << 24)

/* @def PIOC_PUSR_P23
* @brief Pull Up Status. */
#define PIOC_PUSR_P23		(1 << 23)

/* @def PIOC_PUSR_P22
* @brief Pull Up Status. */
#define PIOC_PUSR_P22		(1 << 22)

/* @def PIOC_PUSR_P21
* @brief Pull Up Status. */
#define PIOC_PUSR_P21		(1 << 21)

/* @def PIOC_PUSR_P20
* @brief Pull Up Status. */
#define PIOC_PUSR_P20		(1 << 20)

/* @def PIOC_PUSR_P19
* @brief Pull Up Status. */
#define PIOC_PUSR_P19		(1 << 19)

/* @def PIOC_PUSR_P18
* @brief Pull Up Status. */
#define PIOC_PUSR_P18		(1 << 18)

/* @def PIOC_PUSR_P17
* @brief Pull Up Status. */
#define PIOC_PUSR_P17		(1 << 17)

/* @def PIOC_PUSR_P16
* @brief Pull Up Status. */
#define PIOC_PUSR_P16		(1 << 16)

/* @def PIOC_PUSR_P15
* @brief Pull Up Status. */
#define PIOC_PUSR_P15		(1 << 15)

/* @def PIOC_PUSR_P14
* @brief Pull Up Status. */
#define PIOC_PUSR_P14		(1 << 14)

/* @def PIOC_PUSR_P13
* @brief Pull Up Status. */
#define PIOC_PUSR_P13		(1 << 13)

/* @def PIOC_PUSR_P12
* @brief Pull Up Status. */
#define PIOC_PUSR_P12		(1 << 12)

/* @def PIOC_PUSR_P11
* @brief Pull Up Status. */
#define PIOC_PUSR_P11		(1 << 11)

/* @def PIOC_PUSR_P10
* @brief Pull Up Status. */
#define PIOC_PUSR_P10		(1 << 10)

/* @def PIOC_PUSR_P9
* @brief Pull Up Status. */
#define PIOC_PUSR_P9		(1 << 9)

/* @def PIOC_PUSR_P8
* @brief Pull Up Status. */
#define PIOC_PUSR_P8		(1 << 8)

/* @def PIOC_PUSR_P7
* @brief Pull Up Status. */
#define PIOC_PUSR_P7		(1 << 7)

/* @def PIOC_PUSR_P6
* @brief Pull Up Status. */
#define PIOC_PUSR_P6		(1 << 6)

/* @def PIOC_PUSR_P5
* @brief Pull Up Status. */
#define PIOC_PUSR_P5		(1 << 5)

/* @def PIOC_PUSR_P4
* @brief Pull Up Status. */
#define PIOC_PUSR_P4		(1 << 4)

/* @def PIOC_PUSR_P3
* @brief Pull Up Status. */
#define PIOC_PUSR_P3		(1 << 3)

/* @def PIOC_PUSR_P2
* @brief Pull Up Status. */
#define PIOC_PUSR_P2		(1 << 2)

/* @def PIOC_PUSR_P1
* @brief Pull Up Status. */
#define PIOC_PUSR_P1		(1 << 1)

/* @def PIOC_PUSR_P0
* @brief Pull Up Status. */
#define PIOC_PUSR_P0		(1 << 0)

/* --- PIOC_ABCDSR[0] values ---------------------------------------- */


/* @def PIOC_ABCDSR[0]_P31
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P31		(1 << 31)

/* @def PIOC_ABCDSR[0]_P30
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P30		(1 << 30)

/* @def PIOC_ABCDSR[0]_P29
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P29		(1 << 29)

/* @def PIOC_ABCDSR[0]_P28
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P28		(1 << 28)

/* @def PIOC_ABCDSR[0]_P27
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P27		(1 << 27)

/* @def PIOC_ABCDSR[0]_P26
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P26		(1 << 26)

/* @def PIOC_ABCDSR[0]_P25
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P25		(1 << 25)

/* @def PIOC_ABCDSR[0]_P24
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P24		(1 << 24)

/* @def PIOC_ABCDSR[0]_P23
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P23		(1 << 23)

/* @def PIOC_ABCDSR[0]_P22
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P22		(1 << 22)

/* @def PIOC_ABCDSR[0]_P21
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P21		(1 << 21)

/* @def PIOC_ABCDSR[0]_P20
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P20		(1 << 20)

/* @def PIOC_ABCDSR[0]_P19
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P19		(1 << 19)

/* @def PIOC_ABCDSR[0]_P18
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P18		(1 << 18)

/* @def PIOC_ABCDSR[0]_P17
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P17		(1 << 17)

/* @def PIOC_ABCDSR[0]_P16
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P16		(1 << 16)

/* @def PIOC_ABCDSR[0]_P15
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P15		(1 << 15)

/* @def PIOC_ABCDSR[0]_P14
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P14		(1 << 14)

/* @def PIOC_ABCDSR[0]_P13
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P13		(1 << 13)

/* @def PIOC_ABCDSR[0]_P12
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P12		(1 << 12)

/* @def PIOC_ABCDSR[0]_P11
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P11		(1 << 11)

/* @def PIOC_ABCDSR[0]_P10
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P10		(1 << 10)

/* @def PIOC_ABCDSR[0]_P9
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P9		(1 << 9)

/* @def PIOC_ABCDSR[0]_P8
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P8		(1 << 8)

/* @def PIOC_ABCDSR[0]_P7
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P7		(1 << 7)

/* @def PIOC_ABCDSR[0]_P6
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P6		(1 << 6)

/* @def PIOC_ABCDSR[0]_P5
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P5		(1 << 5)

/* @def PIOC_ABCDSR[0]_P4
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P4		(1 << 4)

/* @def PIOC_ABCDSR[0]_P3
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P3		(1 << 3)

/* @def PIOC_ABCDSR[0]_P2
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P2		(1 << 2)

/* @def PIOC_ABCDSR[0]_P1
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P1		(1 << 1)

/* @def PIOC_ABCDSR[0]_P0
* @brief Peripheral Select. */
#define PIOC_ABCDSR[0]_P0		(1 << 0)

/* --- PIOC_ABCDSR[1] values ---------------------------------------- */


/* @def PIOC_ABCDSR[1]_P31
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P31		(1 << 31)

/* @def PIOC_ABCDSR[1]_P30
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P30		(1 << 30)

/* @def PIOC_ABCDSR[1]_P29
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P29		(1 << 29)

/* @def PIOC_ABCDSR[1]_P28
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P28		(1 << 28)

/* @def PIOC_ABCDSR[1]_P27
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P27		(1 << 27)

/* @def PIOC_ABCDSR[1]_P26
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P26		(1 << 26)

/* @def PIOC_ABCDSR[1]_P25
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P25		(1 << 25)

/* @def PIOC_ABCDSR[1]_P24
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P24		(1 << 24)

/* @def PIOC_ABCDSR[1]_P23
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P23		(1 << 23)

/* @def PIOC_ABCDSR[1]_P22
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P22		(1 << 22)

/* @def PIOC_ABCDSR[1]_P21
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P21		(1 << 21)

/* @def PIOC_ABCDSR[1]_P20
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P20		(1 << 20)

/* @def PIOC_ABCDSR[1]_P19
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P19		(1 << 19)

/* @def PIOC_ABCDSR[1]_P18
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P18		(1 << 18)

/* @def PIOC_ABCDSR[1]_P17
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P17		(1 << 17)

/* @def PIOC_ABCDSR[1]_P16
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P16		(1 << 16)

/* @def PIOC_ABCDSR[1]_P15
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P15		(1 << 15)

/* @def PIOC_ABCDSR[1]_P14
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P14		(1 << 14)

/* @def PIOC_ABCDSR[1]_P13
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P13		(1 << 13)

/* @def PIOC_ABCDSR[1]_P12
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P12		(1 << 12)

/* @def PIOC_ABCDSR[1]_P11
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P11		(1 << 11)

/* @def PIOC_ABCDSR[1]_P10
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P10		(1 << 10)

/* @def PIOC_ABCDSR[1]_P9
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P9		(1 << 9)

/* @def PIOC_ABCDSR[1]_P8
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P8		(1 << 8)

/* @def PIOC_ABCDSR[1]_P7
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P7		(1 << 7)

/* @def PIOC_ABCDSR[1]_P6
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P6		(1 << 6)

/* @def PIOC_ABCDSR[1]_P5
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P5		(1 << 5)

/* @def PIOC_ABCDSR[1]_P4
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P4		(1 << 4)

/* @def PIOC_ABCDSR[1]_P3
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P3		(1 << 3)

/* @def PIOC_ABCDSR[1]_P2
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P2		(1 << 2)

/* @def PIOC_ABCDSR[1]_P1
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P1		(1 << 1)

/* @def PIOC_ABCDSR[1]_P0
* @brief Peripheral Select. */
#define PIOC_ABCDSR[1]_P0		(1 << 0)

/* --- PIOC_IFSCDR values ------------------------------------------- */


/* @def PIOC_IFSCDR_P31
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P31		(1 << 31)

/* @def PIOC_IFSCDR_P30
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P30		(1 << 30)

/* @def PIOC_IFSCDR_P29
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P29		(1 << 29)

/* @def PIOC_IFSCDR_P28
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P28		(1 << 28)

/* @def PIOC_IFSCDR_P27
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P27		(1 << 27)

/* @def PIOC_IFSCDR_P26
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P26		(1 << 26)

/* @def PIOC_IFSCDR_P25
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P25		(1 << 25)

/* @def PIOC_IFSCDR_P24
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P24		(1 << 24)

/* @def PIOC_IFSCDR_P23
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P23		(1 << 23)

/* @def PIOC_IFSCDR_P22
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P22		(1 << 22)

/* @def PIOC_IFSCDR_P21
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P21		(1 << 21)

/* @def PIOC_IFSCDR_P20
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P20		(1 << 20)

/* @def PIOC_IFSCDR_P19
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P19		(1 << 19)

/* @def PIOC_IFSCDR_P18
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P18		(1 << 18)

/* @def PIOC_IFSCDR_P17
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P17		(1 << 17)

/* @def PIOC_IFSCDR_P16
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P16		(1 << 16)

/* @def PIOC_IFSCDR_P15
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P15		(1 << 15)

/* @def PIOC_IFSCDR_P14
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P14		(1 << 14)

/* @def PIOC_IFSCDR_P13
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P13		(1 << 13)

/* @def PIOC_IFSCDR_P12
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P12		(1 << 12)

/* @def PIOC_IFSCDR_P11
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P11		(1 << 11)

/* @def PIOC_IFSCDR_P10
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P10		(1 << 10)

/* @def PIOC_IFSCDR_P9
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P9		(1 << 9)

/* @def PIOC_IFSCDR_P8
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P8		(1 << 8)

/* @def PIOC_IFSCDR_P7
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P7		(1 << 7)

/* @def PIOC_IFSCDR_P6
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P6		(1 << 6)

/* @def PIOC_IFSCDR_P5
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P5		(1 << 5)

/* @def PIOC_IFSCDR_P4
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P4		(1 << 4)

/* @def PIOC_IFSCDR_P3
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P3		(1 << 3)

/* @def PIOC_IFSCDR_P2
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P2		(1 << 2)

/* @def PIOC_IFSCDR_P1
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P1		(1 << 1)

/* @def PIOC_IFSCDR_P0
* @brief PIO Clock Glitch Filtering Select. */
#define PIOC_IFSCDR_P0		(1 << 0)

/* --- PIOC_IFSCER values ------------------------------------------- */


/* @def PIOC_IFSCER_P31
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P31		(1 << 31)

/* @def PIOC_IFSCER_P30
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P30		(1 << 30)

/* @def PIOC_IFSCER_P29
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P29		(1 << 29)

/* @def PIOC_IFSCER_P28
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P28		(1 << 28)

/* @def PIOC_IFSCER_P27
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P27		(1 << 27)

/* @def PIOC_IFSCER_P26
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P26		(1 << 26)

/* @def PIOC_IFSCER_P25
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P25		(1 << 25)

/* @def PIOC_IFSCER_P24
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P24		(1 << 24)

/* @def PIOC_IFSCER_P23
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P23		(1 << 23)

/* @def PIOC_IFSCER_P22
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P22		(1 << 22)

/* @def PIOC_IFSCER_P21
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P21		(1 << 21)

/* @def PIOC_IFSCER_P20
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P20		(1 << 20)

/* @def PIOC_IFSCER_P19
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P19		(1 << 19)

/* @def PIOC_IFSCER_P18
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P18		(1 << 18)

/* @def PIOC_IFSCER_P17
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P17		(1 << 17)

/* @def PIOC_IFSCER_P16
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P16		(1 << 16)

/* @def PIOC_IFSCER_P15
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P15		(1 << 15)

/* @def PIOC_IFSCER_P14
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P14		(1 << 14)

/* @def PIOC_IFSCER_P13
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P13		(1 << 13)

/* @def PIOC_IFSCER_P12
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P12		(1 << 12)

/* @def PIOC_IFSCER_P11
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P11		(1 << 11)

/* @def PIOC_IFSCER_P10
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P10		(1 << 10)

/* @def PIOC_IFSCER_P9
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P9		(1 << 9)

/* @def PIOC_IFSCER_P8
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P8		(1 << 8)

/* @def PIOC_IFSCER_P7
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P7		(1 << 7)

/* @def PIOC_IFSCER_P6
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P6		(1 << 6)

/* @def PIOC_IFSCER_P5
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P5		(1 << 5)

/* @def PIOC_IFSCER_P4
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P4		(1 << 4)

/* @def PIOC_IFSCER_P3
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P3		(1 << 3)

/* @def PIOC_IFSCER_P2
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P2		(1 << 2)

/* @def PIOC_IFSCER_P1
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P1		(1 << 1)

/* @def PIOC_IFSCER_P0
* @brief Debouncing Filtering Select. */
#define PIOC_IFSCER_P0		(1 << 0)

/* --- PIOC_IFSCSR values ------------------------------------------- */


/* @def PIOC_IFSCSR_P31
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P31		(1 << 31)

/* @def PIOC_IFSCSR_P30
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P30		(1 << 30)

/* @def PIOC_IFSCSR_P29
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P29		(1 << 29)

/* @def PIOC_IFSCSR_P28
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P28		(1 << 28)

/* @def PIOC_IFSCSR_P27
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P27		(1 << 27)

/* @def PIOC_IFSCSR_P26
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P26		(1 << 26)

/* @def PIOC_IFSCSR_P25
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P25		(1 << 25)

/* @def PIOC_IFSCSR_P24
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P24		(1 << 24)

/* @def PIOC_IFSCSR_P23
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P23		(1 << 23)

/* @def PIOC_IFSCSR_P22
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P22		(1 << 22)

/* @def PIOC_IFSCSR_P21
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P21		(1 << 21)

/* @def PIOC_IFSCSR_P20
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P20		(1 << 20)

/* @def PIOC_IFSCSR_P19
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P19		(1 << 19)

/* @def PIOC_IFSCSR_P18
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P18		(1 << 18)

/* @def PIOC_IFSCSR_P17
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P17		(1 << 17)

/* @def PIOC_IFSCSR_P16
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P16		(1 << 16)

/* @def PIOC_IFSCSR_P15
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P15		(1 << 15)

/* @def PIOC_IFSCSR_P14
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P14		(1 << 14)

/* @def PIOC_IFSCSR_P13
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P13		(1 << 13)

/* @def PIOC_IFSCSR_P12
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P12		(1 << 12)

/* @def PIOC_IFSCSR_P11
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P11		(1 << 11)

/* @def PIOC_IFSCSR_P10
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P10		(1 << 10)

/* @def PIOC_IFSCSR_P9
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P9		(1 << 9)

/* @def PIOC_IFSCSR_P8
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P8		(1 << 8)

/* @def PIOC_IFSCSR_P7
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P7		(1 << 7)

/* @def PIOC_IFSCSR_P6
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P6		(1 << 6)

/* @def PIOC_IFSCSR_P5
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P5		(1 << 5)

/* @def PIOC_IFSCSR_P4
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P4		(1 << 4)

/* @def PIOC_IFSCSR_P3
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P3		(1 << 3)

/* @def PIOC_IFSCSR_P2
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P2		(1 << 2)

/* @def PIOC_IFSCSR_P1
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P1		(1 << 1)

/* @def PIOC_IFSCSR_P0
* @brief Glitch or Debouncing Filter Selection Status */
#define PIOC_IFSCSR_P0		(1 << 0)

/* --- PIOC_SCDR values --------------------------------------------- */


/* @def PIOC_SCDR_DIV
* @brief  */
#define PIOC_SCDR_DIV_SHIFT		0
#define PIOC_SCDR_DIV_MASK		0x3fff
/** @defgroup pioc_scdr_div DIV
* @brief 
@{*/
/*@}*/

/* --- PIOC_PPDDR values -------------------------------------------- */


/* @def PIOC_PPDDR_P31
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P31		(1 << 31)

/* @def PIOC_PPDDR_P30
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P30		(1 << 30)

/* @def PIOC_PPDDR_P29
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P29		(1 << 29)

/* @def PIOC_PPDDR_P28
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P28		(1 << 28)

/* @def PIOC_PPDDR_P27
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P27		(1 << 27)

/* @def PIOC_PPDDR_P26
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P26		(1 << 26)

/* @def PIOC_PPDDR_P25
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P25		(1 << 25)

/* @def PIOC_PPDDR_P24
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P24		(1 << 24)

/* @def PIOC_PPDDR_P23
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P23		(1 << 23)

/* @def PIOC_PPDDR_P22
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P22		(1 << 22)

/* @def PIOC_PPDDR_P21
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P21		(1 << 21)

/* @def PIOC_PPDDR_P20
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P20		(1 << 20)

/* @def PIOC_PPDDR_P19
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P19		(1 << 19)

/* @def PIOC_PPDDR_P18
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P18		(1 << 18)

/* @def PIOC_PPDDR_P17
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P17		(1 << 17)

/* @def PIOC_PPDDR_P16
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P16		(1 << 16)

/* @def PIOC_PPDDR_P15
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P15		(1 << 15)

/* @def PIOC_PPDDR_P14
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P14		(1 << 14)

/* @def PIOC_PPDDR_P13
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P13		(1 << 13)

/* @def PIOC_PPDDR_P12
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P12		(1 << 12)

/* @def PIOC_PPDDR_P11
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P11		(1 << 11)

/* @def PIOC_PPDDR_P10
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P10		(1 << 10)

/* @def PIOC_PPDDR_P9
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P9		(1 << 9)

/* @def PIOC_PPDDR_P8
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P8		(1 << 8)

/* @def PIOC_PPDDR_P7
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P7		(1 << 7)

/* @def PIOC_PPDDR_P6
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P6		(1 << 6)

/* @def PIOC_PPDDR_P5
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P5		(1 << 5)

/* @def PIOC_PPDDR_P4
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P4		(1 << 4)

/* @def PIOC_PPDDR_P3
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P3		(1 << 3)

/* @def PIOC_PPDDR_P2
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P2		(1 << 2)

/* @def PIOC_PPDDR_P1
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P1		(1 << 1)

/* @def PIOC_PPDDR_P0
* @brief Pull Down Disable. */
#define PIOC_PPDDR_P0		(1 << 0)

/* --- PIOC_PPDER values -------------------------------------------- */


/* @def PIOC_PPDER_P31
* @brief Pull Down Enable. */
#define PIOC_PPDER_P31		(1 << 31)

/* @def PIOC_PPDER_P30
* @brief Pull Down Enable. */
#define PIOC_PPDER_P30		(1 << 30)

/* @def PIOC_PPDER_P29
* @brief Pull Down Enable. */
#define PIOC_PPDER_P29		(1 << 29)

/* @def PIOC_PPDER_P28
* @brief Pull Down Enable. */
#define PIOC_PPDER_P28		(1 << 28)

/* @def PIOC_PPDER_P27
* @brief Pull Down Enable. */
#define PIOC_PPDER_P27		(1 << 27)

/* @def PIOC_PPDER_P26
* @brief Pull Down Enable. */
#define PIOC_PPDER_P26		(1 << 26)

/* @def PIOC_PPDER_P25
* @brief Pull Down Enable. */
#define PIOC_PPDER_P25		(1 << 25)

/* @def PIOC_PPDER_P24
* @brief Pull Down Enable. */
#define PIOC_PPDER_P24		(1 << 24)

/* @def PIOC_PPDER_P23
* @brief Pull Down Enable. */
#define PIOC_PPDER_P23		(1 << 23)

/* @def PIOC_PPDER_P22
* @brief Pull Down Enable. */
#define PIOC_PPDER_P22		(1 << 22)

/* @def PIOC_PPDER_P21
* @brief Pull Down Enable. */
#define PIOC_PPDER_P21		(1 << 21)

/* @def PIOC_PPDER_P20
* @brief Pull Down Enable. */
#define PIOC_PPDER_P20		(1 << 20)

/* @def PIOC_PPDER_P19
* @brief Pull Down Enable. */
#define PIOC_PPDER_P19		(1 << 19)

/* @def PIOC_PPDER_P18
* @brief Pull Down Enable. */
#define PIOC_PPDER_P18		(1 << 18)

/* @def PIOC_PPDER_P17
* @brief Pull Down Enable. */
#define PIOC_PPDER_P17		(1 << 17)

/* @def PIOC_PPDER_P16
* @brief Pull Down Enable. */
#define PIOC_PPDER_P16		(1 << 16)

/* @def PIOC_PPDER_P15
* @brief Pull Down Enable. */
#define PIOC_PPDER_P15		(1 << 15)

/* @def PIOC_PPDER_P14
* @brief Pull Down Enable. */
#define PIOC_PPDER_P14		(1 << 14)

/* @def PIOC_PPDER_P13
* @brief Pull Down Enable. */
#define PIOC_PPDER_P13		(1 << 13)

/* @def PIOC_PPDER_P12
* @brief Pull Down Enable. */
#define PIOC_PPDER_P12		(1 << 12)

/* @def PIOC_PPDER_P11
* @brief Pull Down Enable. */
#define PIOC_PPDER_P11		(1 << 11)

/* @def PIOC_PPDER_P10
* @brief Pull Down Enable. */
#define PIOC_PPDER_P10		(1 << 10)

/* @def PIOC_PPDER_P9
* @brief Pull Down Enable. */
#define PIOC_PPDER_P9		(1 << 9)

/* @def PIOC_PPDER_P8
* @brief Pull Down Enable. */
#define PIOC_PPDER_P8		(1 << 8)

/* @def PIOC_PPDER_P7
* @brief Pull Down Enable. */
#define PIOC_PPDER_P7		(1 << 7)

/* @def PIOC_PPDER_P6
* @brief Pull Down Enable. */
#define PIOC_PPDER_P6		(1 << 6)

/* @def PIOC_PPDER_P5
* @brief Pull Down Enable. */
#define PIOC_PPDER_P5		(1 << 5)

/* @def PIOC_PPDER_P4
* @brief Pull Down Enable. */
#define PIOC_PPDER_P4		(1 << 4)

/* @def PIOC_PPDER_P3
* @brief Pull Down Enable. */
#define PIOC_PPDER_P3		(1 << 3)

/* @def PIOC_PPDER_P2
* @brief Pull Down Enable. */
#define PIOC_PPDER_P2		(1 << 2)

/* @def PIOC_PPDER_P1
* @brief Pull Down Enable. */
#define PIOC_PPDER_P1		(1 << 1)

/* @def PIOC_PPDER_P0
* @brief Pull Down Enable. */
#define PIOC_PPDER_P0		(1 << 0)

/* --- PIOC_PPDSR values -------------------------------------------- */


/* @def PIOC_PPDSR_P31
* @brief Pull Down Status. */
#define PIOC_PPDSR_P31		(1 << 31)

/* @def PIOC_PPDSR_P30
* @brief Pull Down Status. */
#define PIOC_PPDSR_P30		(1 << 30)

/* @def PIOC_PPDSR_P29
* @brief Pull Down Status. */
#define PIOC_PPDSR_P29		(1 << 29)

/* @def PIOC_PPDSR_P28
* @brief Pull Down Status. */
#define PIOC_PPDSR_P28		(1 << 28)

/* @def PIOC_PPDSR_P27
* @brief Pull Down Status. */
#define PIOC_PPDSR_P27		(1 << 27)

/* @def PIOC_PPDSR_P26
* @brief Pull Down Status. */
#define PIOC_PPDSR_P26		(1 << 26)

/* @def PIOC_PPDSR_P25
* @brief Pull Down Status. */
#define PIOC_PPDSR_P25		(1 << 25)

/* @def PIOC_PPDSR_P24
* @brief Pull Down Status. */
#define PIOC_PPDSR_P24		(1 << 24)

/* @def PIOC_PPDSR_P23
* @brief Pull Down Status. */
#define PIOC_PPDSR_P23		(1 << 23)

/* @def PIOC_PPDSR_P22
* @brief Pull Down Status. */
#define PIOC_PPDSR_P22		(1 << 22)

/* @def PIOC_PPDSR_P21
* @brief Pull Down Status. */
#define PIOC_PPDSR_P21		(1 << 21)

/* @def PIOC_PPDSR_P20
* @brief Pull Down Status. */
#define PIOC_PPDSR_P20		(1 << 20)

/* @def PIOC_PPDSR_P19
* @brief Pull Down Status. */
#define PIOC_PPDSR_P19		(1 << 19)

/* @def PIOC_PPDSR_P18
* @brief Pull Down Status. */
#define PIOC_PPDSR_P18		(1 << 18)

/* @def PIOC_PPDSR_P17
* @brief Pull Down Status. */
#define PIOC_PPDSR_P17		(1 << 17)

/* @def PIOC_PPDSR_P16
* @brief Pull Down Status. */
#define PIOC_PPDSR_P16		(1 << 16)

/* @def PIOC_PPDSR_P15
* @brief Pull Down Status. */
#define PIOC_PPDSR_P15		(1 << 15)

/* @def PIOC_PPDSR_P14
* @brief Pull Down Status. */
#define PIOC_PPDSR_P14		(1 << 14)

/* @def PIOC_PPDSR_P13
* @brief Pull Down Status. */
#define PIOC_PPDSR_P13		(1 << 13)

/* @def PIOC_PPDSR_P12
* @brief Pull Down Status. */
#define PIOC_PPDSR_P12		(1 << 12)

/* @def PIOC_PPDSR_P11
* @brief Pull Down Status. */
#define PIOC_PPDSR_P11		(1 << 11)

/* @def PIOC_PPDSR_P10
* @brief Pull Down Status. */
#define PIOC_PPDSR_P10		(1 << 10)

/* @def PIOC_PPDSR_P9
* @brief Pull Down Status. */
#define PIOC_PPDSR_P9		(1 << 9)

/* @def PIOC_PPDSR_P8
* @brief Pull Down Status. */
#define PIOC_PPDSR_P8		(1 << 8)

/* @def PIOC_PPDSR_P7
* @brief Pull Down Status. */
#define PIOC_PPDSR_P7		(1 << 7)

/* @def PIOC_PPDSR_P6
* @brief Pull Down Status. */
#define PIOC_PPDSR_P6		(1 << 6)

/* @def PIOC_PPDSR_P5
* @brief Pull Down Status. */
#define PIOC_PPDSR_P5		(1 << 5)

/* @def PIOC_PPDSR_P4
* @brief Pull Down Status. */
#define PIOC_PPDSR_P4		(1 << 4)

/* @def PIOC_PPDSR_P3
* @brief Pull Down Status. */
#define PIOC_PPDSR_P3		(1 << 3)

/* @def PIOC_PPDSR_P2
* @brief Pull Down Status. */
#define PIOC_PPDSR_P2		(1 << 2)

/* @def PIOC_PPDSR_P1
* @brief Pull Down Status. */
#define PIOC_PPDSR_P1		(1 << 1)

/* @def PIOC_PPDSR_P0
* @brief Pull Down Status. */
#define PIOC_PPDSR_P0		(1 << 0)

/* --- PIOC_OWER values --------------------------------------------- */


/* @def PIOC_OWER_P31
* @brief Output Write Enable. */
#define PIOC_OWER_P31		(1 << 31)

/* @def PIOC_OWER_P30
* @brief Output Write Enable. */
#define PIOC_OWER_P30		(1 << 30)

/* @def PIOC_OWER_P29
* @brief Output Write Enable. */
#define PIOC_OWER_P29		(1 << 29)

/* @def PIOC_OWER_P28
* @brief Output Write Enable. */
#define PIOC_OWER_P28		(1 << 28)

/* @def PIOC_OWER_P27
* @brief Output Write Enable. */
#define PIOC_OWER_P27		(1 << 27)

/* @def PIOC_OWER_P26
* @brief Output Write Enable. */
#define PIOC_OWER_P26		(1 << 26)

/* @def PIOC_OWER_P25
* @brief Output Write Enable. */
#define PIOC_OWER_P25		(1 << 25)

/* @def PIOC_OWER_P24
* @brief Output Write Enable. */
#define PIOC_OWER_P24		(1 << 24)

/* @def PIOC_OWER_P23
* @brief Output Write Enable. */
#define PIOC_OWER_P23		(1 << 23)

/* @def PIOC_OWER_P22
* @brief Output Write Enable. */
#define PIOC_OWER_P22		(1 << 22)

/* @def PIOC_OWER_P21
* @brief Output Write Enable. */
#define PIOC_OWER_P21		(1 << 21)

/* @def PIOC_OWER_P20
* @brief Output Write Enable. */
#define PIOC_OWER_P20		(1 << 20)

/* @def PIOC_OWER_P19
* @brief Output Write Enable. */
#define PIOC_OWER_P19		(1 << 19)

/* @def PIOC_OWER_P18
* @brief Output Write Enable. */
#define PIOC_OWER_P18		(1 << 18)

/* @def PIOC_OWER_P17
* @brief Output Write Enable. */
#define PIOC_OWER_P17		(1 << 17)

/* @def PIOC_OWER_P16
* @brief Output Write Enable. */
#define PIOC_OWER_P16		(1 << 16)

/* @def PIOC_OWER_P15
* @brief Output Write Enable. */
#define PIOC_OWER_P15		(1 << 15)

/* @def PIOC_OWER_P14
* @brief Output Write Enable. */
#define PIOC_OWER_P14		(1 << 14)

/* @def PIOC_OWER_P13
* @brief Output Write Enable. */
#define PIOC_OWER_P13		(1 << 13)

/* @def PIOC_OWER_P12
* @brief Output Write Enable. */
#define PIOC_OWER_P12		(1 << 12)

/* @def PIOC_OWER_P11
* @brief Output Write Enable. */
#define PIOC_OWER_P11		(1 << 11)

/* @def PIOC_OWER_P10
* @brief Output Write Enable. */
#define PIOC_OWER_P10		(1 << 10)

/* @def PIOC_OWER_P9
* @brief Output Write Enable. */
#define PIOC_OWER_P9		(1 << 9)

/* @def PIOC_OWER_P8
* @brief Output Write Enable. */
#define PIOC_OWER_P8		(1 << 8)

/* @def PIOC_OWER_P7
* @brief Output Write Enable. */
#define PIOC_OWER_P7		(1 << 7)

/* @def PIOC_OWER_P6
* @brief Output Write Enable. */
#define PIOC_OWER_P6		(1 << 6)

/* @def PIOC_OWER_P5
* @brief Output Write Enable. */
#define PIOC_OWER_P5		(1 << 5)

/* @def PIOC_OWER_P4
* @brief Output Write Enable. */
#define PIOC_OWER_P4		(1 << 4)

/* @def PIOC_OWER_P3
* @brief Output Write Enable. */
#define PIOC_OWER_P3		(1 << 3)

/* @def PIOC_OWER_P2
* @brief Output Write Enable. */
#define PIOC_OWER_P2		(1 << 2)

/* @def PIOC_OWER_P1
* @brief Output Write Enable. */
#define PIOC_OWER_P1		(1 << 1)

/* @def PIOC_OWER_P0
* @brief Output Write Enable. */
#define PIOC_OWER_P0		(1 << 0)

/* --- PIOC_OWDR values --------------------------------------------- */


/* @def PIOC_OWDR_P31
* @brief Output Write Disable. */
#define PIOC_OWDR_P31		(1 << 31)

/* @def PIOC_OWDR_P30
* @brief Output Write Disable. */
#define PIOC_OWDR_P30		(1 << 30)

/* @def PIOC_OWDR_P29
* @brief Output Write Disable. */
#define PIOC_OWDR_P29		(1 << 29)

/* @def PIOC_OWDR_P28
* @brief Output Write Disable. */
#define PIOC_OWDR_P28		(1 << 28)

/* @def PIOC_OWDR_P27
* @brief Output Write Disable. */
#define PIOC_OWDR_P27		(1 << 27)

/* @def PIOC_OWDR_P26
* @brief Output Write Disable. */
#define PIOC_OWDR_P26		(1 << 26)

/* @def PIOC_OWDR_P25
* @brief Output Write Disable. */
#define PIOC_OWDR_P25		(1 << 25)

/* @def PIOC_OWDR_P24
* @brief Output Write Disable. */
#define PIOC_OWDR_P24		(1 << 24)

/* @def PIOC_OWDR_P23
* @brief Output Write Disable. */
#define PIOC_OWDR_P23		(1 << 23)

/* @def PIOC_OWDR_P22
* @brief Output Write Disable. */
#define PIOC_OWDR_P22		(1 << 22)

/* @def PIOC_OWDR_P21
* @brief Output Write Disable. */
#define PIOC_OWDR_P21		(1 << 21)

/* @def PIOC_OWDR_P20
* @brief Output Write Disable. */
#define PIOC_OWDR_P20		(1 << 20)

/* @def PIOC_OWDR_P19
* @brief Output Write Disable. */
#define PIOC_OWDR_P19		(1 << 19)

/* @def PIOC_OWDR_P18
* @brief Output Write Disable. */
#define PIOC_OWDR_P18		(1 << 18)

/* @def PIOC_OWDR_P17
* @brief Output Write Disable. */
#define PIOC_OWDR_P17		(1 << 17)

/* @def PIOC_OWDR_P16
* @brief Output Write Disable. */
#define PIOC_OWDR_P16		(1 << 16)

/* @def PIOC_OWDR_P15
* @brief Output Write Disable. */
#define PIOC_OWDR_P15		(1 << 15)

/* @def PIOC_OWDR_P14
* @brief Output Write Disable. */
#define PIOC_OWDR_P14		(1 << 14)

/* @def PIOC_OWDR_P13
* @brief Output Write Disable. */
#define PIOC_OWDR_P13		(1 << 13)

/* @def PIOC_OWDR_P12
* @brief Output Write Disable. */
#define PIOC_OWDR_P12		(1 << 12)

/* @def PIOC_OWDR_P11
* @brief Output Write Disable. */
#define PIOC_OWDR_P11		(1 << 11)

/* @def PIOC_OWDR_P10
* @brief Output Write Disable. */
#define PIOC_OWDR_P10		(1 << 10)

/* @def PIOC_OWDR_P9
* @brief Output Write Disable. */
#define PIOC_OWDR_P9		(1 << 9)

/* @def PIOC_OWDR_P8
* @brief Output Write Disable. */
#define PIOC_OWDR_P8		(1 << 8)

/* @def PIOC_OWDR_P7
* @brief Output Write Disable. */
#define PIOC_OWDR_P7		(1 << 7)

/* @def PIOC_OWDR_P6
* @brief Output Write Disable. */
#define PIOC_OWDR_P6		(1 << 6)

/* @def PIOC_OWDR_P5
* @brief Output Write Disable. */
#define PIOC_OWDR_P5		(1 << 5)

/* @def PIOC_OWDR_P4
* @brief Output Write Disable. */
#define PIOC_OWDR_P4		(1 << 4)

/* @def PIOC_OWDR_P3
* @brief Output Write Disable. */
#define PIOC_OWDR_P3		(1 << 3)

/* @def PIOC_OWDR_P2
* @brief Output Write Disable. */
#define PIOC_OWDR_P2		(1 << 2)

/* @def PIOC_OWDR_P1
* @brief Output Write Disable. */
#define PIOC_OWDR_P1		(1 << 1)

/* @def PIOC_OWDR_P0
* @brief Output Write Disable. */
#define PIOC_OWDR_P0		(1 << 0)

/* --- PIOC_OWSR values --------------------------------------------- */


/* @def PIOC_OWSR_P31
* @brief Output Write Status. */
#define PIOC_OWSR_P31		(1 << 31)

/* @def PIOC_OWSR_P30
* @brief Output Write Status. */
#define PIOC_OWSR_P30		(1 << 30)

/* @def PIOC_OWSR_P29
* @brief Output Write Status. */
#define PIOC_OWSR_P29		(1 << 29)

/* @def PIOC_OWSR_P28
* @brief Output Write Status. */
#define PIOC_OWSR_P28		(1 << 28)

/* @def PIOC_OWSR_P27
* @brief Output Write Status. */
#define PIOC_OWSR_P27		(1 << 27)

/* @def PIOC_OWSR_P26
* @brief Output Write Status. */
#define PIOC_OWSR_P26		(1 << 26)

/* @def PIOC_OWSR_P25
* @brief Output Write Status. */
#define PIOC_OWSR_P25		(1 << 25)

/* @def PIOC_OWSR_P24
* @brief Output Write Status. */
#define PIOC_OWSR_P24		(1 << 24)

/* @def PIOC_OWSR_P23
* @brief Output Write Status. */
#define PIOC_OWSR_P23		(1 << 23)

/* @def PIOC_OWSR_P22
* @brief Output Write Status. */
#define PIOC_OWSR_P22		(1 << 22)

/* @def PIOC_OWSR_P21
* @brief Output Write Status. */
#define PIOC_OWSR_P21		(1 << 21)

/* @def PIOC_OWSR_P20
* @brief Output Write Status. */
#define PIOC_OWSR_P20		(1 << 20)

/* @def PIOC_OWSR_P19
* @brief Output Write Status. */
#define PIOC_OWSR_P19		(1 << 19)

/* @def PIOC_OWSR_P18
* @brief Output Write Status. */
#define PIOC_OWSR_P18		(1 << 18)

/* @def PIOC_OWSR_P17
* @brief Output Write Status. */
#define PIOC_OWSR_P17		(1 << 17)

/* @def PIOC_OWSR_P16
* @brief Output Write Status. */
#define PIOC_OWSR_P16		(1 << 16)

/* @def PIOC_OWSR_P15
* @brief Output Write Status. */
#define PIOC_OWSR_P15		(1 << 15)

/* @def PIOC_OWSR_P14
* @brief Output Write Status. */
#define PIOC_OWSR_P14		(1 << 14)

/* @def PIOC_OWSR_P13
* @brief Output Write Status. */
#define PIOC_OWSR_P13		(1 << 13)

/* @def PIOC_OWSR_P12
* @brief Output Write Status. */
#define PIOC_OWSR_P12		(1 << 12)

/* @def PIOC_OWSR_P11
* @brief Output Write Status. */
#define PIOC_OWSR_P11		(1 << 11)

/* @def PIOC_OWSR_P10
* @brief Output Write Status. */
#define PIOC_OWSR_P10		(1 << 10)

/* @def PIOC_OWSR_P9
* @brief Output Write Status. */
#define PIOC_OWSR_P9		(1 << 9)

/* @def PIOC_OWSR_P8
* @brief Output Write Status. */
#define PIOC_OWSR_P8		(1 << 8)

/* @def PIOC_OWSR_P7
* @brief Output Write Status. */
#define PIOC_OWSR_P7		(1 << 7)

/* @def PIOC_OWSR_P6
* @brief Output Write Status. */
#define PIOC_OWSR_P6		(1 << 6)

/* @def PIOC_OWSR_P5
* @brief Output Write Status. */
#define PIOC_OWSR_P5		(1 << 5)

/* @def PIOC_OWSR_P4
* @brief Output Write Status. */
#define PIOC_OWSR_P4		(1 << 4)

/* @def PIOC_OWSR_P3
* @brief Output Write Status. */
#define PIOC_OWSR_P3		(1 << 3)

/* @def PIOC_OWSR_P2
* @brief Output Write Status. */
#define PIOC_OWSR_P2		(1 << 2)

/* @def PIOC_OWSR_P1
* @brief Output Write Status. */
#define PIOC_OWSR_P1		(1 << 1)

/* @def PIOC_OWSR_P0
* @brief Output Write Status. */
#define PIOC_OWSR_P0		(1 << 0)

/* --- PIOC_AIMER values -------------------------------------------- */


/* @def PIOC_AIMER_P31
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P31		(1 << 31)

/* @def PIOC_AIMER_P30
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P30		(1 << 30)

/* @def PIOC_AIMER_P29
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P29		(1 << 29)

/* @def PIOC_AIMER_P28
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P28		(1 << 28)

/* @def PIOC_AIMER_P27
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P27		(1 << 27)

/* @def PIOC_AIMER_P26
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P26		(1 << 26)

/* @def PIOC_AIMER_P25
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P25		(1 << 25)

/* @def PIOC_AIMER_P24
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P24		(1 << 24)

/* @def PIOC_AIMER_P23
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P23		(1 << 23)

/* @def PIOC_AIMER_P22
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P22		(1 << 22)

/* @def PIOC_AIMER_P21
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P21		(1 << 21)

/* @def PIOC_AIMER_P20
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P20		(1 << 20)

/* @def PIOC_AIMER_P19
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P19		(1 << 19)

/* @def PIOC_AIMER_P18
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P18		(1 << 18)

/* @def PIOC_AIMER_P17
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P17		(1 << 17)

/* @def PIOC_AIMER_P16
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P16		(1 << 16)

/* @def PIOC_AIMER_P15
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P15		(1 << 15)

/* @def PIOC_AIMER_P14
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P14		(1 << 14)

/* @def PIOC_AIMER_P13
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P13		(1 << 13)

/* @def PIOC_AIMER_P12
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P12		(1 << 12)

/* @def PIOC_AIMER_P11
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P11		(1 << 11)

/* @def PIOC_AIMER_P10
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P10		(1 << 10)

/* @def PIOC_AIMER_P9
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P9		(1 << 9)

/* @def PIOC_AIMER_P8
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P8		(1 << 8)

/* @def PIOC_AIMER_P7
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P7		(1 << 7)

/* @def PIOC_AIMER_P6
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P6		(1 << 6)

/* @def PIOC_AIMER_P5
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P5		(1 << 5)

/* @def PIOC_AIMER_P4
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P4		(1 << 4)

/* @def PIOC_AIMER_P3
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P3		(1 << 3)

/* @def PIOC_AIMER_P2
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P2		(1 << 2)

/* @def PIOC_AIMER_P1
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P1		(1 << 1)

/* @def PIOC_AIMER_P0
* @brief Additional Interrupt Modes Enable. */
#define PIOC_AIMER_P0		(1 << 0)

/* --- PIOC_AIMDR values -------------------------------------------- */


/* @def PIOC_AIMDR_P31
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P31		(1 << 31)

/* @def PIOC_AIMDR_P30
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P30		(1 << 30)

/* @def PIOC_AIMDR_P29
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P29		(1 << 29)

/* @def PIOC_AIMDR_P28
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P28		(1 << 28)

/* @def PIOC_AIMDR_P27
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P27		(1 << 27)

/* @def PIOC_AIMDR_P26
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P26		(1 << 26)

/* @def PIOC_AIMDR_P25
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P25		(1 << 25)

/* @def PIOC_AIMDR_P24
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P24		(1 << 24)

/* @def PIOC_AIMDR_P23
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P23		(1 << 23)

/* @def PIOC_AIMDR_P22
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P22		(1 << 22)

/* @def PIOC_AIMDR_P21
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P21		(1 << 21)

/* @def PIOC_AIMDR_P20
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P20		(1 << 20)

/* @def PIOC_AIMDR_P19
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P19		(1 << 19)

/* @def PIOC_AIMDR_P18
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P18		(1 << 18)

/* @def PIOC_AIMDR_P17
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P17		(1 << 17)

/* @def PIOC_AIMDR_P16
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P16		(1 << 16)

/* @def PIOC_AIMDR_P15
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P15		(1 << 15)

/* @def PIOC_AIMDR_P14
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P14		(1 << 14)

/* @def PIOC_AIMDR_P13
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P13		(1 << 13)

/* @def PIOC_AIMDR_P12
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P12		(1 << 12)

/* @def PIOC_AIMDR_P11
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P11		(1 << 11)

/* @def PIOC_AIMDR_P10
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P10		(1 << 10)

/* @def PIOC_AIMDR_P9
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P9		(1 << 9)

/* @def PIOC_AIMDR_P8
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P8		(1 << 8)

/* @def PIOC_AIMDR_P7
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P7		(1 << 7)

/* @def PIOC_AIMDR_P6
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P6		(1 << 6)

/* @def PIOC_AIMDR_P5
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P5		(1 << 5)

/* @def PIOC_AIMDR_P4
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P4		(1 << 4)

/* @def PIOC_AIMDR_P3
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P3		(1 << 3)

/* @def PIOC_AIMDR_P2
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P2		(1 << 2)

/* @def PIOC_AIMDR_P1
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P1		(1 << 1)

/* @def PIOC_AIMDR_P0
* @brief Additional Interrupt Modes Disable. */
#define PIOC_AIMDR_P0		(1 << 0)

/* --- PIOC_AIMMR values -------------------------------------------- */


/* @def PIOC_AIMMR_P31
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P31		(1 << 31)

/* @def PIOC_AIMMR_P30
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P30		(1 << 30)

/* @def PIOC_AIMMR_P29
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P29		(1 << 29)

/* @def PIOC_AIMMR_P28
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P28		(1 << 28)

/* @def PIOC_AIMMR_P27
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P27		(1 << 27)

/* @def PIOC_AIMMR_P26
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P26		(1 << 26)

/* @def PIOC_AIMMR_P25
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P25		(1 << 25)

/* @def PIOC_AIMMR_P24
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P24		(1 << 24)

/* @def PIOC_AIMMR_P23
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P23		(1 << 23)

/* @def PIOC_AIMMR_P22
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P22		(1 << 22)

/* @def PIOC_AIMMR_P21
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P21		(1 << 21)

/* @def PIOC_AIMMR_P20
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P20		(1 << 20)

/* @def PIOC_AIMMR_P19
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P19		(1 << 19)

/* @def PIOC_AIMMR_P18
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P18		(1 << 18)

/* @def PIOC_AIMMR_P17
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P17		(1 << 17)

/* @def PIOC_AIMMR_P16
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P16		(1 << 16)

/* @def PIOC_AIMMR_P15
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P15		(1 << 15)

/* @def PIOC_AIMMR_P14
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P14		(1 << 14)

/* @def PIOC_AIMMR_P13
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P13		(1 << 13)

/* @def PIOC_AIMMR_P12
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P12		(1 << 12)

/* @def PIOC_AIMMR_P11
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P11		(1 << 11)

/* @def PIOC_AIMMR_P10
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P10		(1 << 10)

/* @def PIOC_AIMMR_P9
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P9		(1 << 9)

/* @def PIOC_AIMMR_P8
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P8		(1 << 8)

/* @def PIOC_AIMMR_P7
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P7		(1 << 7)

/* @def PIOC_AIMMR_P6
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P6		(1 << 6)

/* @def PIOC_AIMMR_P5
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P5		(1 << 5)

/* @def PIOC_AIMMR_P4
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P4		(1 << 4)

/* @def PIOC_AIMMR_P3
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P3		(1 << 3)

/* @def PIOC_AIMMR_P2
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P2		(1 << 2)

/* @def PIOC_AIMMR_P1
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P1		(1 << 1)

/* @def PIOC_AIMMR_P0
* @brief Peripheral CD Status. */
#define PIOC_AIMMR_P0		(1 << 0)

/* --- PIOC_ESR values ---------------------------------------------- */


/* @def PIOC_ESR_P31
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P31		(1 << 31)

/* @def PIOC_ESR_P30
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P30		(1 << 30)

/* @def PIOC_ESR_P29
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P29		(1 << 29)

/* @def PIOC_ESR_P28
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P28		(1 << 28)

/* @def PIOC_ESR_P27
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P27		(1 << 27)

/* @def PIOC_ESR_P26
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P26		(1 << 26)

/* @def PIOC_ESR_P25
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P25		(1 << 25)

/* @def PIOC_ESR_P24
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P24		(1 << 24)

/* @def PIOC_ESR_P23
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P23		(1 << 23)

/* @def PIOC_ESR_P22
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P22		(1 << 22)

/* @def PIOC_ESR_P21
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P21		(1 << 21)

/* @def PIOC_ESR_P20
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P20		(1 << 20)

/* @def PIOC_ESR_P19
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P19		(1 << 19)

/* @def PIOC_ESR_P18
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P18		(1 << 18)

/* @def PIOC_ESR_P17
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P17		(1 << 17)

/* @def PIOC_ESR_P16
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P16		(1 << 16)

/* @def PIOC_ESR_P15
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P15		(1 << 15)

/* @def PIOC_ESR_P14
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P14		(1 << 14)

/* @def PIOC_ESR_P13
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P13		(1 << 13)

/* @def PIOC_ESR_P12
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P12		(1 << 12)

/* @def PIOC_ESR_P11
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P11		(1 << 11)

/* @def PIOC_ESR_P10
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P10		(1 << 10)

/* @def PIOC_ESR_P9
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P9		(1 << 9)

/* @def PIOC_ESR_P8
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P8		(1 << 8)

/* @def PIOC_ESR_P7
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P7		(1 << 7)

/* @def PIOC_ESR_P6
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P6		(1 << 6)

/* @def PIOC_ESR_P5
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P5		(1 << 5)

/* @def PIOC_ESR_P4
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P4		(1 << 4)

/* @def PIOC_ESR_P3
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P3		(1 << 3)

/* @def PIOC_ESR_P2
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P2		(1 << 2)

/* @def PIOC_ESR_P1
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P1		(1 << 1)

/* @def PIOC_ESR_P0
* @brief Edge Interrupt Selection. */
#define PIOC_ESR_P0		(1 << 0)

/* --- PIOC_LSR values ---------------------------------------------- */


/* @def PIOC_LSR_P31
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P31		(1 << 31)

/* @def PIOC_LSR_P30
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P30		(1 << 30)

/* @def PIOC_LSR_P29
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P29		(1 << 29)

/* @def PIOC_LSR_P28
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P28		(1 << 28)

/* @def PIOC_LSR_P27
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P27		(1 << 27)

/* @def PIOC_LSR_P26
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P26		(1 << 26)

/* @def PIOC_LSR_P25
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P25		(1 << 25)

/* @def PIOC_LSR_P24
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P24		(1 << 24)

/* @def PIOC_LSR_P23
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P23		(1 << 23)

/* @def PIOC_LSR_P22
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P22		(1 << 22)

/* @def PIOC_LSR_P21
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P21		(1 << 21)

/* @def PIOC_LSR_P20
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P20		(1 << 20)

/* @def PIOC_LSR_P19
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P19		(1 << 19)

/* @def PIOC_LSR_P18
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P18		(1 << 18)

/* @def PIOC_LSR_P17
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P17		(1 << 17)

/* @def PIOC_LSR_P16
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P16		(1 << 16)

/* @def PIOC_LSR_P15
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P15		(1 << 15)

/* @def PIOC_LSR_P14
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P14		(1 << 14)

/* @def PIOC_LSR_P13
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P13		(1 << 13)

/* @def PIOC_LSR_P12
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P12		(1 << 12)

/* @def PIOC_LSR_P11
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P11		(1 << 11)

/* @def PIOC_LSR_P10
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P10		(1 << 10)

/* @def PIOC_LSR_P9
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P9		(1 << 9)

/* @def PIOC_LSR_P8
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P8		(1 << 8)

/* @def PIOC_LSR_P7
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P7		(1 << 7)

/* @def PIOC_LSR_P6
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P6		(1 << 6)

/* @def PIOC_LSR_P5
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P5		(1 << 5)

/* @def PIOC_LSR_P4
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P4		(1 << 4)

/* @def PIOC_LSR_P3
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P3		(1 << 3)

/* @def PIOC_LSR_P2
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P2		(1 << 2)

/* @def PIOC_LSR_P1
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P1		(1 << 1)

/* @def PIOC_LSR_P0
* @brief Level Interrupt Selection. */
#define PIOC_LSR_P0		(1 << 0)

/* --- PIOC_ELSR values --------------------------------------------- */


/* @def PIOC_ELSR_P31
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P31		(1 << 31)

/* @def PIOC_ELSR_P30
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P30		(1 << 30)

/* @def PIOC_ELSR_P29
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P29		(1 << 29)

/* @def PIOC_ELSR_P28
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P28		(1 << 28)

/* @def PIOC_ELSR_P27
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P27		(1 << 27)

/* @def PIOC_ELSR_P26
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P26		(1 << 26)

/* @def PIOC_ELSR_P25
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P25		(1 << 25)

/* @def PIOC_ELSR_P24
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P24		(1 << 24)

/* @def PIOC_ELSR_P23
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P23		(1 << 23)

/* @def PIOC_ELSR_P22
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P22		(1 << 22)

/* @def PIOC_ELSR_P21
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P21		(1 << 21)

/* @def PIOC_ELSR_P20
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P20		(1 << 20)

/* @def PIOC_ELSR_P19
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P19		(1 << 19)

/* @def PIOC_ELSR_P18
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P18		(1 << 18)

/* @def PIOC_ELSR_P17
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P17		(1 << 17)

/* @def PIOC_ELSR_P16
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P16		(1 << 16)

/* @def PIOC_ELSR_P15
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P15		(1 << 15)

/* @def PIOC_ELSR_P14
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P14		(1 << 14)

/* @def PIOC_ELSR_P13
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P13		(1 << 13)

/* @def PIOC_ELSR_P12
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P12		(1 << 12)

/* @def PIOC_ELSR_P11
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P11		(1 << 11)

/* @def PIOC_ELSR_P10
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P10		(1 << 10)

/* @def PIOC_ELSR_P9
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P9		(1 << 9)

/* @def PIOC_ELSR_P8
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P8		(1 << 8)

/* @def PIOC_ELSR_P7
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P7		(1 << 7)

/* @def PIOC_ELSR_P6
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P6		(1 << 6)

/* @def PIOC_ELSR_P5
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P5		(1 << 5)

/* @def PIOC_ELSR_P4
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P4		(1 << 4)

/* @def PIOC_ELSR_P3
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P3		(1 << 3)

/* @def PIOC_ELSR_P2
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P2		(1 << 2)

/* @def PIOC_ELSR_P1
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P1		(1 << 1)

/* @def PIOC_ELSR_P0
* @brief Edge/Level Interrupt source selection. */
#define PIOC_ELSR_P0		(1 << 0)

/* --- PIOC_FELLSR values ------------------------------------------- */


/* @def PIOC_FELLSR_P31
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P31		(1 << 31)

/* @def PIOC_FELLSR_P30
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P30		(1 << 30)

/* @def PIOC_FELLSR_P29
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P29		(1 << 29)

/* @def PIOC_FELLSR_P28
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P28		(1 << 28)

/* @def PIOC_FELLSR_P27
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P27		(1 << 27)

/* @def PIOC_FELLSR_P26
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P26		(1 << 26)

/* @def PIOC_FELLSR_P25
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P25		(1 << 25)

/* @def PIOC_FELLSR_P24
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P24		(1 << 24)

/* @def PIOC_FELLSR_P23
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P23		(1 << 23)

/* @def PIOC_FELLSR_P22
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P22		(1 << 22)

/* @def PIOC_FELLSR_P21
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P21		(1 << 21)

/* @def PIOC_FELLSR_P20
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P20		(1 << 20)

/* @def PIOC_FELLSR_P19
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P19		(1 << 19)

/* @def PIOC_FELLSR_P18
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P18		(1 << 18)

/* @def PIOC_FELLSR_P17
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P17		(1 << 17)

/* @def PIOC_FELLSR_P16
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P16		(1 << 16)

/* @def PIOC_FELLSR_P15
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P15		(1 << 15)

/* @def PIOC_FELLSR_P14
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P14		(1 << 14)

/* @def PIOC_FELLSR_P13
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P13		(1 << 13)

/* @def PIOC_FELLSR_P12
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P12		(1 << 12)

/* @def PIOC_FELLSR_P11
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P11		(1 << 11)

/* @def PIOC_FELLSR_P10
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P10		(1 << 10)

/* @def PIOC_FELLSR_P9
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P9		(1 << 9)

/* @def PIOC_FELLSR_P8
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P8		(1 << 8)

/* @def PIOC_FELLSR_P7
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P7		(1 << 7)

/* @def PIOC_FELLSR_P6
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P6		(1 << 6)

/* @def PIOC_FELLSR_P5
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P5		(1 << 5)

/* @def PIOC_FELLSR_P4
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P4		(1 << 4)

/* @def PIOC_FELLSR_P3
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P3		(1 << 3)

/* @def PIOC_FELLSR_P2
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P2		(1 << 2)

/* @def PIOC_FELLSR_P1
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P1		(1 << 1)

/* @def PIOC_FELLSR_P0
* @brief Falling Edge/Low Level Interrupt Selection. */
#define PIOC_FELLSR_P0		(1 << 0)

/* --- PIOC_REHLSR values ------------------------------------------- */


/* @def PIOC_REHLSR_P31
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P31		(1 << 31)

/* @def PIOC_REHLSR_P30
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P30		(1 << 30)

/* @def PIOC_REHLSR_P29
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P29		(1 << 29)

/* @def PIOC_REHLSR_P28
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P28		(1 << 28)

/* @def PIOC_REHLSR_P27
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P27		(1 << 27)

/* @def PIOC_REHLSR_P26
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P26		(1 << 26)

/* @def PIOC_REHLSR_P25
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P25		(1 << 25)

/* @def PIOC_REHLSR_P24
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P24		(1 << 24)

/* @def PIOC_REHLSR_P23
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P23		(1 << 23)

/* @def PIOC_REHLSR_P22
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P22		(1 << 22)

/* @def PIOC_REHLSR_P21
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P21		(1 << 21)

/* @def PIOC_REHLSR_P20
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P20		(1 << 20)

/* @def PIOC_REHLSR_P19
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P19		(1 << 19)

/* @def PIOC_REHLSR_P18
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P18		(1 << 18)

/* @def PIOC_REHLSR_P17
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P17		(1 << 17)

/* @def PIOC_REHLSR_P16
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P16		(1 << 16)

/* @def PIOC_REHLSR_P15
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P15		(1 << 15)

/* @def PIOC_REHLSR_P14
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P14		(1 << 14)

/* @def PIOC_REHLSR_P13
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P13		(1 << 13)

/* @def PIOC_REHLSR_P12
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P12		(1 << 12)

/* @def PIOC_REHLSR_P11
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P11		(1 << 11)

/* @def PIOC_REHLSR_P10
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P10		(1 << 10)

/* @def PIOC_REHLSR_P9
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P9		(1 << 9)

/* @def PIOC_REHLSR_P8
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P8		(1 << 8)

/* @def PIOC_REHLSR_P7
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P7		(1 << 7)

/* @def PIOC_REHLSR_P6
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P6		(1 << 6)

/* @def PIOC_REHLSR_P5
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P5		(1 << 5)

/* @def PIOC_REHLSR_P4
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P4		(1 << 4)

/* @def PIOC_REHLSR_P3
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P3		(1 << 3)

/* @def PIOC_REHLSR_P2
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P2		(1 << 2)

/* @def PIOC_REHLSR_P1
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P1		(1 << 1)

/* @def PIOC_REHLSR_P0
* @brief Rising Edge /High Level Interrupt Selection. */
#define PIOC_REHLSR_P0		(1 << 0)

/* --- PIOC_FRLHSR values ------------------------------------------- */


/* @def PIOC_FRLHSR_P31
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P31		(1 << 31)

/* @def PIOC_FRLHSR_P30
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P30		(1 << 30)

/* @def PIOC_FRLHSR_P29
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P29		(1 << 29)

/* @def PIOC_FRLHSR_P28
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P28		(1 << 28)

/* @def PIOC_FRLHSR_P27
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P27		(1 << 27)

/* @def PIOC_FRLHSR_P26
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P26		(1 << 26)

/* @def PIOC_FRLHSR_P25
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P25		(1 << 25)

/* @def PIOC_FRLHSR_P24
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P24		(1 << 24)

/* @def PIOC_FRLHSR_P23
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P23		(1 << 23)

/* @def PIOC_FRLHSR_P22
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P22		(1 << 22)

/* @def PIOC_FRLHSR_P21
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P21		(1 << 21)

/* @def PIOC_FRLHSR_P20
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P20		(1 << 20)

/* @def PIOC_FRLHSR_P19
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P19		(1 << 19)

/* @def PIOC_FRLHSR_P18
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P18		(1 << 18)

/* @def PIOC_FRLHSR_P17
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P17		(1 << 17)

/* @def PIOC_FRLHSR_P16
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P16		(1 << 16)

/* @def PIOC_FRLHSR_P15
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P15		(1 << 15)

/* @def PIOC_FRLHSR_P14
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P14		(1 << 14)

/* @def PIOC_FRLHSR_P13
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P13		(1 << 13)

/* @def PIOC_FRLHSR_P12
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P12		(1 << 12)

/* @def PIOC_FRLHSR_P11
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P11		(1 << 11)

/* @def PIOC_FRLHSR_P10
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P10		(1 << 10)

/* @def PIOC_FRLHSR_P9
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P9		(1 << 9)

/* @def PIOC_FRLHSR_P8
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P8		(1 << 8)

/* @def PIOC_FRLHSR_P7
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P7		(1 << 7)

/* @def PIOC_FRLHSR_P6
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P6		(1 << 6)

/* @def PIOC_FRLHSR_P5
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P5		(1 << 5)

/* @def PIOC_FRLHSR_P4
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P4		(1 << 4)

/* @def PIOC_FRLHSR_P3
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P3		(1 << 3)

/* @def PIOC_FRLHSR_P2
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P2		(1 << 2)

/* @def PIOC_FRLHSR_P1
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P1		(1 << 1)

/* @def PIOC_FRLHSR_P0
* @brief Edge /Level Interrupt Source Selection. */
#define PIOC_FRLHSR_P0		(1 << 0)

/* --- PIOC_LOCKSR values ------------------------------------------- */


/* @def PIOC_LOCKSR_P31
* @brief Lock Status. */
#define PIOC_LOCKSR_P31		(1 << 31)

/* @def PIOC_LOCKSR_P30
* @brief Lock Status. */
#define PIOC_LOCKSR_P30		(1 << 30)

/* @def PIOC_LOCKSR_P29
* @brief Lock Status. */
#define PIOC_LOCKSR_P29		(1 << 29)

/* @def PIOC_LOCKSR_P28
* @brief Lock Status. */
#define PIOC_LOCKSR_P28		(1 << 28)

/* @def PIOC_LOCKSR_P27
* @brief Lock Status. */
#define PIOC_LOCKSR_P27		(1 << 27)

/* @def PIOC_LOCKSR_P26
* @brief Lock Status. */
#define PIOC_LOCKSR_P26		(1 << 26)

/* @def PIOC_LOCKSR_P25
* @brief Lock Status. */
#define PIOC_LOCKSR_P25		(1 << 25)

/* @def PIOC_LOCKSR_P24
* @brief Lock Status. */
#define PIOC_LOCKSR_P24		(1 << 24)

/* @def PIOC_LOCKSR_P23
* @brief Lock Status. */
#define PIOC_LOCKSR_P23		(1 << 23)

/* @def PIOC_LOCKSR_P22
* @brief Lock Status. */
#define PIOC_LOCKSR_P22		(1 << 22)

/* @def PIOC_LOCKSR_P21
* @brief Lock Status. */
#define PIOC_LOCKSR_P21		(1 << 21)

/* @def PIOC_LOCKSR_P20
* @brief Lock Status. */
#define PIOC_LOCKSR_P20		(1 << 20)

/* @def PIOC_LOCKSR_P19
* @brief Lock Status. */
#define PIOC_LOCKSR_P19		(1 << 19)

/* @def PIOC_LOCKSR_P18
* @brief Lock Status. */
#define PIOC_LOCKSR_P18		(1 << 18)

/* @def PIOC_LOCKSR_P17
* @brief Lock Status. */
#define PIOC_LOCKSR_P17		(1 << 17)

/* @def PIOC_LOCKSR_P16
* @brief Lock Status. */
#define PIOC_LOCKSR_P16		(1 << 16)

/* @def PIOC_LOCKSR_P15
* @brief Lock Status. */
#define PIOC_LOCKSR_P15		(1 << 15)

/* @def PIOC_LOCKSR_P14
* @brief Lock Status. */
#define PIOC_LOCKSR_P14		(1 << 14)

/* @def PIOC_LOCKSR_P13
* @brief Lock Status. */
#define PIOC_LOCKSR_P13		(1 << 13)

/* @def PIOC_LOCKSR_P12
* @brief Lock Status. */
#define PIOC_LOCKSR_P12		(1 << 12)

/* @def PIOC_LOCKSR_P11
* @brief Lock Status. */
#define PIOC_LOCKSR_P11		(1 << 11)

/* @def PIOC_LOCKSR_P10
* @brief Lock Status. */
#define PIOC_LOCKSR_P10		(1 << 10)

/* @def PIOC_LOCKSR_P9
* @brief Lock Status. */
#define PIOC_LOCKSR_P9		(1 << 9)

/* @def PIOC_LOCKSR_P8
* @brief Lock Status. */
#define PIOC_LOCKSR_P8		(1 << 8)

/* @def PIOC_LOCKSR_P7
* @brief Lock Status. */
#define PIOC_LOCKSR_P7		(1 << 7)

/* @def PIOC_LOCKSR_P6
* @brief Lock Status. */
#define PIOC_LOCKSR_P6		(1 << 6)

/* @def PIOC_LOCKSR_P5
* @brief Lock Status. */
#define PIOC_LOCKSR_P5		(1 << 5)

/* @def PIOC_LOCKSR_P4
* @brief Lock Status. */
#define PIOC_LOCKSR_P4		(1 << 4)

/* @def PIOC_LOCKSR_P3
* @brief Lock Status. */
#define PIOC_LOCKSR_P3		(1 << 3)

/* @def PIOC_LOCKSR_P2
* @brief Lock Status. */
#define PIOC_LOCKSR_P2		(1 << 2)

/* @def PIOC_LOCKSR_P1
* @brief Lock Status. */
#define PIOC_LOCKSR_P1		(1 << 1)

/* @def PIOC_LOCKSR_P0
* @brief Lock Status. */
#define PIOC_LOCKSR_P0		(1 << 0)

/* --- PIOC_WPMR values --------------------------------------------- */


/* @def PIOC_WPMR_WPKEY
* @brief Write Protect KEY */
#define PIOC_WPMR_WPKEY_SHIFT		8
#define PIOC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pioc_wpmr_wpkey WPKEY
* @brief Write Protect KEY
@{*/
/*@}*/

/* @def PIOC_WPMR_WPEN
* @brief Write Protect Enable */
#define PIOC_WPMR_WPEN		(1 << 0)

/* --- PIOC_WPSR values --------------------------------------------- */


/* @def PIOC_WPSR_WPVSRC
* @brief Write Protect Violation Source */
#define PIOC_WPSR_WPVSRC_SHIFT		8
#define PIOC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pioc_wpsr_wpvsrc WPVSRC
* @brief Write Protect Violation Source
@{*/
/*@}*/

/* @def PIOC_WPSR_WPVS
* @brief Write Protect Violation Status */
#define PIOC_WPSR_WPVS		(1 << 0)

/* --- PIOC_SCHMITT values ------------------------------------------ */


/* @def PIOC_SCHMITT_SCHMITT31
* @brief  */
#define PIOC_SCHMITT_SCHMITT31		(1 << 31)

/* @def PIOC_SCHMITT_SCHMITT30
* @brief  */
#define PIOC_SCHMITT_SCHMITT30		(1 << 30)

/* @def PIOC_SCHMITT_SCHMITT29
* @brief  */
#define PIOC_SCHMITT_SCHMITT29		(1 << 29)

/* @def PIOC_SCHMITT_SCHMITT28
* @brief  */
#define PIOC_SCHMITT_SCHMITT28		(1 << 28)

/* @def PIOC_SCHMITT_SCHMITT27
* @brief  */
#define PIOC_SCHMITT_SCHMITT27		(1 << 27)

/* @def PIOC_SCHMITT_SCHMITT26
* @brief  */
#define PIOC_SCHMITT_SCHMITT26		(1 << 26)

/* @def PIOC_SCHMITT_SCHMITT25
* @brief  */
#define PIOC_SCHMITT_SCHMITT25		(1 << 25)

/* @def PIOC_SCHMITT_SCHMITT24
* @brief  */
#define PIOC_SCHMITT_SCHMITT24		(1 << 24)

/* @def PIOC_SCHMITT_SCHMITT23
* @brief  */
#define PIOC_SCHMITT_SCHMITT23		(1 << 23)

/* @def PIOC_SCHMITT_SCHMITT22
* @brief  */
#define PIOC_SCHMITT_SCHMITT22		(1 << 22)

/* @def PIOC_SCHMITT_SCHMITT21
* @brief  */
#define PIOC_SCHMITT_SCHMITT21		(1 << 21)

/* @def PIOC_SCHMITT_SCHMITT20
* @brief  */
#define PIOC_SCHMITT_SCHMITT20		(1 << 20)

/* @def PIOC_SCHMITT_SCHMITT19
* @brief  */
#define PIOC_SCHMITT_SCHMITT19		(1 << 19)

/* @def PIOC_SCHMITT_SCHMITT18
* @brief  */
#define PIOC_SCHMITT_SCHMITT18		(1 << 18)

/* @def PIOC_SCHMITT_SCHMITT17
* @brief  */
#define PIOC_SCHMITT_SCHMITT17		(1 << 17)

/* @def PIOC_SCHMITT_SCHMITT16
* @brief  */
#define PIOC_SCHMITT_SCHMITT16		(1 << 16)

/* @def PIOC_SCHMITT_SCHMITT15
* @brief  */
#define PIOC_SCHMITT_SCHMITT15		(1 << 15)

/* @def PIOC_SCHMITT_SCHMITT14
* @brief  */
#define PIOC_SCHMITT_SCHMITT14		(1 << 14)

/* @def PIOC_SCHMITT_SCHMITT13
* @brief  */
#define PIOC_SCHMITT_SCHMITT13		(1 << 13)

/* @def PIOC_SCHMITT_SCHMITT12
* @brief  */
#define PIOC_SCHMITT_SCHMITT12		(1 << 12)

/* @def PIOC_SCHMITT_SCHMITT11
* @brief  */
#define PIOC_SCHMITT_SCHMITT11		(1 << 11)

/* @def PIOC_SCHMITT_SCHMITT10
* @brief  */
#define PIOC_SCHMITT_SCHMITT10		(1 << 10)

/* @def PIOC_SCHMITT_SCHMITT9
* @brief  */
#define PIOC_SCHMITT_SCHMITT9		(1 << 9)

/* @def PIOC_SCHMITT_SCHMITT8
* @brief  */
#define PIOC_SCHMITT_SCHMITT8		(1 << 8)

/* @def PIOC_SCHMITT_SCHMITT7
* @brief  */
#define PIOC_SCHMITT_SCHMITT7		(1 << 7)

/* @def PIOC_SCHMITT_SCHMITT6
* @brief  */
#define PIOC_SCHMITT_SCHMITT6		(1 << 6)

/* @def PIOC_SCHMITT_SCHMITT5
* @brief  */
#define PIOC_SCHMITT_SCHMITT5		(1 << 5)

/* @def PIOC_SCHMITT_SCHMITT4
* @brief  */
#define PIOC_SCHMITT_SCHMITT4		(1 << 4)

/* @def PIOC_SCHMITT_SCHMITT3
* @brief  */
#define PIOC_SCHMITT_SCHMITT3		(1 << 3)

/* @def PIOC_SCHMITT_SCHMITT2
* @brief  */
#define PIOC_SCHMITT_SCHMITT2		(1 << 2)

/* @def PIOC_SCHMITT_SCHMITT1
* @brief  */
#define PIOC_SCHMITT_SCHMITT1		(1 << 1)

/* @def PIOC_SCHMITT_SCHMITT0
* @brief  */
#define PIOC_SCHMITT_SCHMITT0		(1 << 0)

/* --- PIOC_PCMR values --------------------------------------------- */


/* @def PIOC_PCMR_FRSTS
* @brief Parallel Capture Mode First Sample */
#define PIOC_PCMR_FRSTS		(1 << 11)

/* @def PIOC_PCMR_HALFS
* @brief Parallel Capture Mode Half Sampling */
#define PIOC_PCMR_HALFS		(1 << 10)

/* @def PIOC_PCMR_ALWYS
* @brief Parallel Capture Mode Always Sampling */
#define PIOC_PCMR_ALWYS		(1 << 9)

/* @def PIOC_PCMR_DSIZE
* @brief Parallel Capture Mode Data Size */
#define PIOC_PCMR_DSIZE_SHIFT		4
#define PIOC_PCMR_DSIZE_MASK		0x03
/** @defgroup pioc_pcmr_dsize DSIZE
* @brief Parallel Capture Mode Data Size
@{*/
/*@}*/

/* @def PIOC_PCMR_PCEN
* @brief Parallel Capture Mode Enable */
#define PIOC_PCMR_PCEN		(1 << 0)

/* --- PIOC_PCIER values -------------------------------------------- */


/* @def PIOC_PCIER_RXBUFF
* @brief Reception Buffer Full Interrupt Enable */
#define PIOC_PCIER_RXBUFF		(1 << 3)

/* @def PIOC_PCIER_ENDRX
* @brief End of Reception Transfer Interrupt Enable */
#define PIOC_PCIER_ENDRX		(1 << 2)

/* @def PIOC_PCIER_OVRE
* @brief Parallel Capture Mode Overrun Error Interrupt Enable */
#define PIOC_PCIER_OVRE		(1 << 1)

/* @def PIOC_PCIER_DRDY
* @brief Parallel Capture Mode Data Ready Interrupt Enable */
#define PIOC_PCIER_DRDY		(1 << 0)

/* --- PIOC_PCIDR values -------------------------------------------- */


/* @def PIOC_PCIDR_RXBUFF
* @brief Reception Buffer Full Interrupt Disable */
#define PIOC_PCIDR_RXBUFF		(1 << 3)

/* @def PIOC_PCIDR_ENDRX
* @brief End of Reception Transfer Interrupt Disable */
#define PIOC_PCIDR_ENDRX		(1 << 2)

/* @def PIOC_PCIDR_OVRE
* @brief Parallel Capture Mode Overrun Error Interrupt Disable */
#define PIOC_PCIDR_OVRE		(1 << 1)

/* @def PIOC_PCIDR_DRDY
* @brief Parallel Capture Mode Data Ready Interrupt Disable */
#define PIOC_PCIDR_DRDY		(1 << 0)

/* --- PIOC_PCIMR values -------------------------------------------- */


/* @def PIOC_PCIMR_RXBUFF
* @brief Reception Buffer Full Interrupt Mask */
#define PIOC_PCIMR_RXBUFF		(1 << 3)

/* @def PIOC_PCIMR_ENDRX
* @brief End of Reception Transfer Interrupt Mask */
#define PIOC_PCIMR_ENDRX		(1 << 2)

/* @def PIOC_PCIMR_OVRE
* @brief Parallel Capture Mode Overrun Error Interrupt Mask */
#define PIOC_PCIMR_OVRE		(1 << 1)

/* @def PIOC_PCIMR_DRDY
* @brief Parallel Capture Mode Data Ready Interrupt Mask */
#define PIOC_PCIMR_DRDY		(1 << 0)

/* --- PIOC_PCISR values -------------------------------------------- */


/* @def PIOC_PCISR_RXBUFF
* @brief Reception Buffer Full */
#define PIOC_PCISR_RXBUFF		(1 << 3)

/* @def PIOC_PCISR_ENDRX
* @brief End of Reception Transfer. */
#define PIOC_PCISR_ENDRX		(1 << 2)

/* @def PIOC_PCISR_OVRE
* @brief Parallel Capture Mode Overrun Error. */
#define PIOC_PCISR_OVRE		(1 << 1)

/* @def PIOC_PCISR_DRDY
* @brief Parallel Capture Mode Data Ready */
#define PIOC_PCISR_DRDY		(1 << 0)

/* --- PIOC_PCRHR values -------------------------------------------- */


/* @def PIOC_PCRHR_RDATA
* @brief Parallel Capture Mode Reception Data. */
#define PIOC_PCRHR_RDATA_SHIFT		0
#define PIOC_PCRHR_RDATA_MASK		0xffffffff
/** @defgroup pioc_pcrhr_rdata RDATA
* @brief Parallel Capture Mode Reception Data.
@{*/
/*@}*/

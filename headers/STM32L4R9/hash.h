#pragma once 

/* --- HASH: Hash processor ----------------------------------------- */

/** @defgroup hash_registers Hash processor Register
@{*/

/** HASH_CR control register **/
#define HASH_CR			MMIO32(HASH_BASE + 0x00)
/** HASH_DIN data input register **/
#define HASH_DIN			MMIO32(HASH_BASE + 0x04)
/** HASH_STR start register **/
#define HASH_STR			MMIO32(HASH_BASE + 0x08)
/** HASH_HR0 digest registers **/
#define HASH_HR0			MMIO32(HASH_BASE + 0x0c)
/** HASH_IMR interrupt enable register **/
#define HASH_IMR			MMIO32(HASH_BASE + 0x20)
/** HASH_SR status register **/
#define HASH_SR			MMIO32(HASH_BASE + 0x24)
/** HASH_CSR0 context swap registers **/
#define HASH_CSR0			MMIO32(HASH_BASE + 0xf8)
/** HASH_CSR1 context swap registers **/
#define HASH_CSR1			MMIO32(HASH_BASE + 0xfc)
/** HASH_CSR2 context swap registers **/
#define HASH_CSR2			MMIO32(HASH_BASE + 0x100)
/** HASH_CSR3 context swap registers **/
#define HASH_CSR3			MMIO32(HASH_BASE + 0x104)
/** HASH_CSR4 context swap registers **/
#define HASH_CSR4			MMIO32(HASH_BASE + 0x108)
/** HASH_CSR5 context swap registers **/
#define HASH_CSR5			MMIO32(HASH_BASE + 0x10c)
/** HASH_CSR6 context swap registers **/
#define HASH_CSR6			MMIO32(HASH_BASE + 0x110)
/** HASH_CSR7 context swap registers **/
#define HASH_CSR7			MMIO32(HASH_BASE + 0x114)
/** HASH_CSR8 context swap registers **/
#define HASH_CSR8			MMIO32(HASH_BASE + 0x118)
/** HASH_CSR9 context swap registers **/
#define HASH_CSR9			MMIO32(HASH_BASE + 0x11c)
/** HASH_CSR10 context swap registers **/
#define HASH_CSR10			MMIO32(HASH_BASE + 0x120)
/** HASH_CSR11 context swap registers **/
#define HASH_CSR11			MMIO32(HASH_BASE + 0x124)
/** HASH_CSR12 context swap registers **/
#define HASH_CSR12			MMIO32(HASH_BASE + 0x128)
/** HASH_CSR13 context swap registers **/
#define HASH_CSR13			MMIO32(HASH_BASE + 0x12c)
/** HASH_CSR14 context swap registers **/
#define HASH_CSR14			MMIO32(HASH_BASE + 0x130)
/** HASH_CSR15 context swap registers **/
#define HASH_CSR15			MMIO32(HASH_BASE + 0x134)
/** HASH_CSR16 context swap registers **/
#define HASH_CSR16			MMIO32(HASH_BASE + 0x138)
/** HASH_CSR17 context swap registers **/
#define HASH_CSR17			MMIO32(HASH_BASE + 0x13c)
/** HASH_CSR18 context swap registers **/
#define HASH_CSR18			MMIO32(HASH_BASE + 0x140)
/** HASH_CSR19 context swap registers **/
#define HASH_CSR19			MMIO32(HASH_BASE + 0x144)
/** HASH_CSR20 context swap registers **/
#define HASH_CSR20			MMIO32(HASH_BASE + 0x148)
/** HASH_CSR21 context swap registers **/
#define HASH_CSR21			MMIO32(HASH_BASE + 0x14c)
/** HASH_CSR22 context swap registers **/
#define HASH_CSR22			MMIO32(HASH_BASE + 0x150)
/** HASH_CSR23 context swap registers **/
#define HASH_CSR23			MMIO32(HASH_BASE + 0x154)
/** HASH_CSR24 context swap registers **/
#define HASH_CSR24			MMIO32(HASH_BASE + 0x158)
/** HASH_CSR25 context swap registers **/
#define HASH_CSR25			MMIO32(HASH_BASE + 0x15c)
/** HASH_CSR26 context swap registers **/
#define HASH_CSR26			MMIO32(HASH_BASE + 0x160)
/** HASH_CSR27 context swap registers **/
#define HASH_CSR27			MMIO32(HASH_BASE + 0x164)
/** HASH_CSR28 context swap registers **/
#define HASH_CSR28			MMIO32(HASH_BASE + 0x168)
/** HASH_CSR29 context swap registers **/
#define HASH_CSR29			MMIO32(HASH_BASE + 0x16c)
/** HASH_CSR30 context swap registers **/
#define HASH_CSR30			MMIO32(HASH_BASE + 0x170)
/** HASH_CSR31 context swap registers **/
#define HASH_CSR31			MMIO32(HASH_BASE + 0x174)
/** HASH_CSR32 context swap registers **/
#define HASH_CSR32			MMIO32(HASH_BASE + 0x178)
/** HASH_CSR33 context swap registers **/
#define HASH_CSR33			MMIO32(HASH_BASE + 0x17c)
/** HASH_CSR34 context swap registers **/
#define HASH_CSR34			MMIO32(HASH_BASE + 0x180)
/** HASH_CSR35 context swap registers **/
#define HASH_CSR35			MMIO32(HASH_BASE + 0x184)
/** HASH_CSR36 context swap registers **/
#define HASH_CSR36			MMIO32(HASH_BASE + 0x188)
/** HASH_CSR37 context swap registers **/
#define HASH_CSR37			MMIO32(HASH_BASE + 0x18c)
/** HASH_CSR38 context swap registers **/
#define HASH_CSR38			MMIO32(HASH_BASE + 0x190)
/** HASH_CSR39 context swap registers **/
#define HASH_CSR39			MMIO32(HASH_BASE + 0x194)
/** HASH_CSR40 context swap registers **/
#define HASH_CSR40			MMIO32(HASH_BASE + 0x198)
/** HASH_CSR41 context swap registers **/
#define HASH_CSR41			MMIO32(HASH_BASE + 0x19c)
/** HASH_CSR42 context swap registers **/
#define HASH_CSR42			MMIO32(HASH_BASE + 0x1a0)
/** HASH_CSR43 context swap registers **/
#define HASH_CSR43			MMIO32(HASH_BASE + 0x1a4)
/** HASH_CSR44 context swap registers **/
#define HASH_CSR44			MMIO32(HASH_BASE + 0x1a8)
/** HASH_CSR45 context swap registers **/
#define HASH_CSR45			MMIO32(HASH_BASE + 0x1ac)
/** HASH_CSR46 context swap registers **/
#define HASH_CSR46			MMIO32(HASH_BASE + 0x1b0)
/** HASH_CSR47 context swap registers **/
#define HASH_CSR47			MMIO32(HASH_BASE + 0x1b4)
/** HASH_CSR48 context swap registers **/
#define HASH_CSR48			MMIO32(HASH_BASE + 0x1b8)
/** HASH_CSR49 context swap registers **/
#define HASH_CSR49			MMIO32(HASH_BASE + 0x1bc)
/** HASH_CSR50 context swap registers **/
#define HASH_CSR50			MMIO32(HASH_BASE + 0x1c0)
/** HASH_CSR51 context swap registers **/
#define HASH_CSR51			MMIO32(HASH_BASE + 0x1c4)
/** HASH_CSR52 context swap registers **/
#define HASH_CSR52			MMIO32(HASH_BASE + 0x1c8)
/** HASH_CSR53 context swap registers **/
#define HASH_CSR53			MMIO32(HASH_BASE + 0x1cc)
/** HASH_HASH_HR0 HASH digest register **/
#define HASH_HASH_HR0			MMIO32(HASH_BASE + 0x310)
/** HASH_HASH_HR1 read-only **/
#define HASH_HASH_HR1			MMIO32(HASH_BASE + 0x314)
/** HASH_HASH_HR2 read-only **/
#define HASH_HASH_HR2			MMIO32(HASH_BASE + 0x318)
/** HASH_HASH_HR3 read-only **/
#define HASH_HASH_HR3			MMIO32(HASH_BASE + 0x31c)
/** HASH_HASH_HR4 read-only **/
#define HASH_HASH_HR4			MMIO32(HASH_BASE + 0x320)
/** HASH_HASH_HR5 read-only **/
#define HASH_HASH_HR5			MMIO32(HASH_BASE + 0x324)
/** HASH_HASH_HR6 read-only **/
#define HASH_HASH_HR6			MMIO32(HASH_BASE + 0x328)
/** HASH_HASH_HR7 read-only **/
#define HASH_HASH_HR7			MMIO32(HASH_BASE + 0x32c)

/**@}*/


/** @defgroup hash_cr CR control register
@{*/

/** HASH_CR_ALGO1 ALGO **/
#define HASH_CR_ALGO1		(1 << 18)
/** HASH_CR_LKEY Long key selection **/
#define HASH_CR_LKEY		(1 << 16)
/** HASH_CR_MDMAT Multiple DMA Transfers **/
#define HASH_CR_MDMAT		(1 << 13)
/** HASH_CR_DINNE DIN not empty **/
#define HASH_CR_DINNE		(1 << 12)

#define HASH_CR_NBW_SHIFT		8
#define HASH_CR_NBW_MASK		0x0f
/** @defgroup hash_cr_nbw NBW Number of words already pushed
@{*/
/**@}*/

/** HASH_CR_ALGO0 Algorithm selection **/
#define HASH_CR_ALGO0		(1 << 7)
/** HASH_CR_MODE Mode selection **/
#define HASH_CR_MODE		(1 << 6)

#define HASH_CR_DATATYPE_SHIFT		4
#define HASH_CR_DATATYPE_MASK		0x03
/** @defgroup hash_cr_datatype DATATYPE Data type selection
@{*/
/**@}*/

/** HASH_CR_DMAE DMA enable **/
#define HASH_CR_DMAE		(1 << 3)
/** HASH_CR_INIT Initialize message digest calculation **/
#define HASH_CR_INIT		(1 << 2)

/**@}*/

/** @defgroup hash_din DIN data input register
@{*/


#define HASH_DIN_DATAIN_SHIFT		0
#define HASH_DIN_DATAIN_MASK		0xffffffff
/** @defgroup hash_din_datain DATAIN Data input
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_str STR start register
@{*/

/** HASH_STR_DCAL Digest calculation **/
#define HASH_STR_DCAL		(1 << 8)

#define HASH_STR_NBLW_SHIFT		0
#define HASH_STR_NBLW_MASK		0x1f
/** @defgroup hash_str_nblw NBLW Number of valid bits in the last word of the message
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hr0 HR0 digest registers
@{*/


#define HASH_HR0_H0_SHIFT		0
#define HASH_HR0_H0_MASK		0xffffffff
/** @defgroup hash_hr0_h0 H0 H0
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_imr IMR interrupt enable register
@{*/

/** HASH_IMR_DCIE Digest calculation completion interrupt enable **/
#define HASH_IMR_DCIE		(1 << 1)
/** HASH_IMR_DINIE Data input interrupt enable **/
#define HASH_IMR_DINIE		(1 << 0)

/**@}*/

/** @defgroup hash_sr SR status register
@{*/

/** HASH_SR_BUSY Busy bit **/
#define HASH_SR_BUSY		(1 << 3)
/** HASH_SR_DMAS DMA Status **/
#define HASH_SR_DMAS		(1 << 2)
/** HASH_SR_DCIS Digest calculation completion interrupt status **/
#define HASH_SR_DCIS		(1 << 1)
/** HASH_SR_DINIS Data input interrupt status **/
#define HASH_SR_DINIS		(1 << 0)

/**@}*/

/** @defgroup hash_csr0 CSR0 context swap registers
@{*/


#define HASH_CSR0_CSR0_SHIFT		0
#define HASH_CSR0_CSR0_MASK		0xffffffff
/** @defgroup hash_csr0_csr0 CSR0 CSR0
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr1 CSR1 context swap registers
@{*/


#define HASH_CSR1_CSR1_SHIFT		0
#define HASH_CSR1_CSR1_MASK		0xffffffff
/** @defgroup hash_csr1_csr1 CSR1 CSR1
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr2 CSR2 context swap registers
@{*/


#define HASH_CSR2_CSR2_SHIFT		0
#define HASH_CSR2_CSR2_MASK		0xffffffff
/** @defgroup hash_csr2_csr2 CSR2 CSR2
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr3 CSR3 context swap registers
@{*/


#define HASH_CSR3_CSR3_SHIFT		0
#define HASH_CSR3_CSR3_MASK		0xffffffff
/** @defgroup hash_csr3_csr3 CSR3 CSR3
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr4 CSR4 context swap registers
@{*/


#define HASH_CSR4_CSR4_SHIFT		0
#define HASH_CSR4_CSR4_MASK		0xffffffff
/** @defgroup hash_csr4_csr4 CSR4 CSR4
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr5 CSR5 context swap registers
@{*/


#define HASH_CSR5_CSR5_SHIFT		0
#define HASH_CSR5_CSR5_MASK		0xffffffff
/** @defgroup hash_csr5_csr5 CSR5 CSR5
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr6 CSR6 context swap registers
@{*/


#define HASH_CSR6_CSR6_SHIFT		0
#define HASH_CSR6_CSR6_MASK		0xffffffff
/** @defgroup hash_csr6_csr6 CSR6 CSR6
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr7 CSR7 context swap registers
@{*/


#define HASH_CSR7_CSR7_SHIFT		0
#define HASH_CSR7_CSR7_MASK		0xffffffff
/** @defgroup hash_csr7_csr7 CSR7 CSR7
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr8 CSR8 context swap registers
@{*/


#define HASH_CSR8_CSR8_SHIFT		0
#define HASH_CSR8_CSR8_MASK		0xffffffff
/** @defgroup hash_csr8_csr8 CSR8 CSR8
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr9 CSR9 context swap registers
@{*/


#define HASH_CSR9_CSR9_SHIFT		0
#define HASH_CSR9_CSR9_MASK		0xffffffff
/** @defgroup hash_csr9_csr9 CSR9 CSR9
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr10 CSR10 context swap registers
@{*/


#define HASH_CSR10_CSR10_SHIFT		0
#define HASH_CSR10_CSR10_MASK		0xffffffff
/** @defgroup hash_csr10_csr10 CSR10 CSR10
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr11 CSR11 context swap registers
@{*/


#define HASH_CSR11_CSR11_SHIFT		0
#define HASH_CSR11_CSR11_MASK		0xffffffff
/** @defgroup hash_csr11_csr11 CSR11 CSR11
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr12 CSR12 context swap registers
@{*/


#define HASH_CSR12_CSR12_SHIFT		0
#define HASH_CSR12_CSR12_MASK		0xffffffff
/** @defgroup hash_csr12_csr12 CSR12 CSR12
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr13 CSR13 context swap registers
@{*/


#define HASH_CSR13_CSR13_SHIFT		0
#define HASH_CSR13_CSR13_MASK		0xffffffff
/** @defgroup hash_csr13_csr13 CSR13 CSR13
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr14 CSR14 context swap registers
@{*/


#define HASH_CSR14_CSR14_SHIFT		0
#define HASH_CSR14_CSR14_MASK		0xffffffff
/** @defgroup hash_csr14_csr14 CSR14 CSR14
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr15 CSR15 context swap registers
@{*/


#define HASH_CSR15_CSR15_SHIFT		0
#define HASH_CSR15_CSR15_MASK		0xffffffff
/** @defgroup hash_csr15_csr15 CSR15 CSR15
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr16 CSR16 context swap registers
@{*/


#define HASH_CSR16_CSR16_SHIFT		0
#define HASH_CSR16_CSR16_MASK		0xffffffff
/** @defgroup hash_csr16_csr16 CSR16 CSR16
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr17 CSR17 context swap registers
@{*/


#define HASH_CSR17_CSR17_SHIFT		0
#define HASH_CSR17_CSR17_MASK		0xffffffff
/** @defgroup hash_csr17_csr17 CSR17 CSR17
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr18 CSR18 context swap registers
@{*/


#define HASH_CSR18_CSR18_SHIFT		0
#define HASH_CSR18_CSR18_MASK		0xffffffff
/** @defgroup hash_csr18_csr18 CSR18 CSR18
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr19 CSR19 context swap registers
@{*/


#define HASH_CSR19_CSR19_SHIFT		0
#define HASH_CSR19_CSR19_MASK		0xffffffff
/** @defgroup hash_csr19_csr19 CSR19 CSR19
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr20 CSR20 context swap registers
@{*/


#define HASH_CSR20_CSR20_SHIFT		0
#define HASH_CSR20_CSR20_MASK		0xffffffff
/** @defgroup hash_csr20_csr20 CSR20 CSR20
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr21 CSR21 context swap registers
@{*/


#define HASH_CSR21_CSR21_SHIFT		0
#define HASH_CSR21_CSR21_MASK		0xffffffff
/** @defgroup hash_csr21_csr21 CSR21 CSR21
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr22 CSR22 context swap registers
@{*/


#define HASH_CSR22_CSR22_SHIFT		0
#define HASH_CSR22_CSR22_MASK		0xffffffff
/** @defgroup hash_csr22_csr22 CSR22 CSR22
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr23 CSR23 context swap registers
@{*/


#define HASH_CSR23_CSR23_SHIFT		0
#define HASH_CSR23_CSR23_MASK		0xffffffff
/** @defgroup hash_csr23_csr23 CSR23 CSR23
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr24 CSR24 context swap registers
@{*/


#define HASH_CSR24_CSR24_SHIFT		0
#define HASH_CSR24_CSR24_MASK		0xffffffff
/** @defgroup hash_csr24_csr24 CSR24 CSR24
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr25 CSR25 context swap registers
@{*/


#define HASH_CSR25_CSR25_SHIFT		0
#define HASH_CSR25_CSR25_MASK		0xffffffff
/** @defgroup hash_csr25_csr25 CSR25 CSR25
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr26 CSR26 context swap registers
@{*/


#define HASH_CSR26_CSR26_SHIFT		0
#define HASH_CSR26_CSR26_MASK		0xffffffff
/** @defgroup hash_csr26_csr26 CSR26 CSR26
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr27 CSR27 context swap registers
@{*/


#define HASH_CSR27_CSR27_SHIFT		0
#define HASH_CSR27_CSR27_MASK		0xffffffff
/** @defgroup hash_csr27_csr27 CSR27 CSR27
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr28 CSR28 context swap registers
@{*/


#define HASH_CSR28_CSR28_SHIFT		0
#define HASH_CSR28_CSR28_MASK		0xffffffff
/** @defgroup hash_csr28_csr28 CSR28 CSR28
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr29 CSR29 context swap registers
@{*/


#define HASH_CSR29_CSR29_SHIFT		0
#define HASH_CSR29_CSR29_MASK		0xffffffff
/** @defgroup hash_csr29_csr29 CSR29 CSR29
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr30 CSR30 context swap registers
@{*/


#define HASH_CSR30_CSR30_SHIFT		0
#define HASH_CSR30_CSR30_MASK		0xffffffff
/** @defgroup hash_csr30_csr30 CSR30 CSR30
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr31 CSR31 context swap registers
@{*/


#define HASH_CSR31_CSR31_SHIFT		0
#define HASH_CSR31_CSR31_MASK		0xffffffff
/** @defgroup hash_csr31_csr31 CSR31 CSR31
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr32 CSR32 context swap registers
@{*/


#define HASH_CSR32_CSR32_SHIFT		0
#define HASH_CSR32_CSR32_MASK		0xffffffff
/** @defgroup hash_csr32_csr32 CSR32 CSR32
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr33 CSR33 context swap registers
@{*/


#define HASH_CSR33_CSR33_SHIFT		0
#define HASH_CSR33_CSR33_MASK		0xffffffff
/** @defgroup hash_csr33_csr33 CSR33 CSR33
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr34 CSR34 context swap registers
@{*/


#define HASH_CSR34_CSR34_SHIFT		0
#define HASH_CSR34_CSR34_MASK		0xffffffff
/** @defgroup hash_csr34_csr34 CSR34 CSR34
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr35 CSR35 context swap registers
@{*/


#define HASH_CSR35_CSR35_SHIFT		0
#define HASH_CSR35_CSR35_MASK		0xffffffff
/** @defgroup hash_csr35_csr35 CSR35 CSR35
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr36 CSR36 context swap registers
@{*/


#define HASH_CSR36_CSR36_SHIFT		0
#define HASH_CSR36_CSR36_MASK		0xffffffff
/** @defgroup hash_csr36_csr36 CSR36 CSR36
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr37 CSR37 context swap registers
@{*/


#define HASH_CSR37_CSR37_SHIFT		0
#define HASH_CSR37_CSR37_MASK		0xffffffff
/** @defgroup hash_csr37_csr37 CSR37 CSR37
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr38 CSR38 context swap registers
@{*/


#define HASH_CSR38_CSR38_SHIFT		0
#define HASH_CSR38_CSR38_MASK		0xffffffff
/** @defgroup hash_csr38_csr38 CSR38 CSR38
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr39 CSR39 context swap registers
@{*/


#define HASH_CSR39_CSR39_SHIFT		0
#define HASH_CSR39_CSR39_MASK		0xffffffff
/** @defgroup hash_csr39_csr39 CSR39 CSR39
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr40 CSR40 context swap registers
@{*/


#define HASH_CSR40_CSR40_SHIFT		0
#define HASH_CSR40_CSR40_MASK		0xffffffff
/** @defgroup hash_csr40_csr40 CSR40 CSR40
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr41 CSR41 context swap registers
@{*/


#define HASH_CSR41_CSR41_SHIFT		0
#define HASH_CSR41_CSR41_MASK		0xffffffff
/** @defgroup hash_csr41_csr41 CSR41 CSR41
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr42 CSR42 context swap registers
@{*/


#define HASH_CSR42_CSR42_SHIFT		0
#define HASH_CSR42_CSR42_MASK		0xffffffff
/** @defgroup hash_csr42_csr42 CSR42 CSR42
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr43 CSR43 context swap registers
@{*/


#define HASH_CSR43_CSR43_SHIFT		0
#define HASH_CSR43_CSR43_MASK		0xffffffff
/** @defgroup hash_csr43_csr43 CSR43 CSR43
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr44 CSR44 context swap registers
@{*/


#define HASH_CSR44_CSR44_SHIFT		0
#define HASH_CSR44_CSR44_MASK		0xffffffff
/** @defgroup hash_csr44_csr44 CSR44 CSR44
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr45 CSR45 context swap registers
@{*/


#define HASH_CSR45_CSR45_SHIFT		0
#define HASH_CSR45_CSR45_MASK		0xffffffff
/** @defgroup hash_csr45_csr45 CSR45 CSR45
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr46 CSR46 context swap registers
@{*/


#define HASH_CSR46_CSR46_SHIFT		0
#define HASH_CSR46_CSR46_MASK		0xffffffff
/** @defgroup hash_csr46_csr46 CSR46 CSR46
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr47 CSR47 context swap registers
@{*/


#define HASH_CSR47_CSR47_SHIFT		0
#define HASH_CSR47_CSR47_MASK		0xffffffff
/** @defgroup hash_csr47_csr47 CSR47 CSR47
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr48 CSR48 context swap registers
@{*/


#define HASH_CSR48_CSR48_SHIFT		0
#define HASH_CSR48_CSR48_MASK		0xffffffff
/** @defgroup hash_csr48_csr48 CSR48 CSR48
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr49 CSR49 context swap registers
@{*/


#define HASH_CSR49_CSR49_SHIFT		0
#define HASH_CSR49_CSR49_MASK		0xffffffff
/** @defgroup hash_csr49_csr49 CSR49 CSR49
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr50 CSR50 context swap registers
@{*/


#define HASH_CSR50_CSR50_SHIFT		0
#define HASH_CSR50_CSR50_MASK		0xffffffff
/** @defgroup hash_csr50_csr50 CSR50 CSR50
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr51 CSR51 context swap registers
@{*/


#define HASH_CSR51_CSR51_SHIFT		0
#define HASH_CSR51_CSR51_MASK		0xffffffff
/** @defgroup hash_csr51_csr51 CSR51 CSR51
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr52 CSR52 context swap registers
@{*/


#define HASH_CSR52_CSR52_SHIFT		0
#define HASH_CSR52_CSR52_MASK		0xffffffff
/** @defgroup hash_csr52_csr52 CSR52 CSR52
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_csr53 CSR53 context swap registers
@{*/


#define HASH_CSR53_CSR53_SHIFT		0
#define HASH_CSR53_CSR53_MASK		0xffffffff
/** @defgroup hash_csr53_csr53 CSR53 CSR53
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr0 HASHHR0 HASH digest register
@{*/


#define HASH_HASH_HR0_H0_SHIFT		0
#define HASH_HASH_HR0_H0_MASK		0xffffffff
/** @defgroup hash_hash_hr0_h0 H0 H0
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr1 HASHHR1 read-only
@{*/


#define HASH_HASH_HR1_H1_SHIFT		0
#define HASH_HASH_HR1_H1_MASK		0xffffffff
/** @defgroup hash_hash_hr1_h1 H1 H1
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr2 HASHHR2 read-only
@{*/


#define HASH_HASH_HR2_H2_SHIFT		0
#define HASH_HASH_HR2_H2_MASK		0xffffffff
/** @defgroup hash_hash_hr2_h2 H2 H2
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr3 HASHHR3 read-only
@{*/


#define HASH_HASH_HR3_H3_SHIFT		0
#define HASH_HASH_HR3_H3_MASK		0xffffffff
/** @defgroup hash_hash_hr3_h3 H3 H3
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr4 HASHHR4 read-only
@{*/


#define HASH_HASH_HR4_H4_SHIFT		0
#define HASH_HASH_HR4_H4_MASK		0xffffffff
/** @defgroup hash_hash_hr4_h4 H4 H4
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr5 HASHHR5 read-only
@{*/


#define HASH_HASH_HR5_H5_SHIFT		0
#define HASH_HASH_HR5_H5_MASK		0xffffffff
/** @defgroup hash_hash_hr5_h5 H5 H5
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr6 HASHHR6 read-only
@{*/


#define HASH_HASH_HR6_H6_SHIFT		0
#define HASH_HASH_HR6_H6_MASK		0xffffffff
/** @defgroup hash_hash_hr6_h6 H6 H6
@{*/
/**@}*/


/**@}*/

/** @defgroup hash_hash_hr7 HASHHR7 read-only
@{*/


#define HASH_HASH_HR7_H7_SHIFT		0
#define HASH_HASH_HR7_H7_MASK		0xffffffff
/** @defgroup hash_hash_hr7_h7 H7 H7
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- TRAM: TrustRAM ----------------------------------------------- */

/** @defgroup tram_registers TrustRAM Register
@{*/

/** TRAM_CTRLA Control **/
#define TRAM_CTRLA			MMIO32(TRAM_BASE + 0x00)
/** TRAM_INTENCLR Interrupt Enable Clear **/
#define TRAM_INTENCLR			MMIO32(TRAM_BASE + 0x04)
/** TRAM_INTENSET Interrupt Enable Set **/
#define TRAM_INTENSET			MMIO32(TRAM_BASE + 0x05)
/** TRAM_INTFLAG Interrupt Flag Status and Clear **/
#define TRAM_INTFLAG			MMIO32(TRAM_BASE + 0x06)
/** TRAM_STATUS Status **/
#define TRAM_STATUS			MMIO32(TRAM_BASE + 0x07)
/** TRAM_SYNCBUSY Synchronization Busy Status **/
#define TRAM_SYNCBUSY			MMIO32(TRAM_BASE + 0x08)
/** TRAM_DSCC Data Scramble Control **/
#define TRAM_DSCC			MMIO32(TRAM_BASE + 0x0c)
/** TRAM_PERMW Permutation Write **/
#define TRAM_PERMW			MMIO32(TRAM_BASE + 0x10)
/** TRAM_PERMR Permutation Read **/
#define TRAM_PERMR			MMIO32(TRAM_BASE + 0x11)
/** TRAM_RAM[0] TrustRAM **/
#define TRAM_RAM[0]			MMIO32(TRAM_BASE + 0x100)
/** TRAM_RAM[1] TrustRAM **/
#define TRAM_RAM[1]			MMIO32(TRAM_BASE + 0x104)
/** TRAM_RAM[2] TrustRAM **/
#define TRAM_RAM[2]			MMIO32(TRAM_BASE + 0x108)
/** TRAM_RAM[3] TrustRAM **/
#define TRAM_RAM[3]			MMIO32(TRAM_BASE + 0x10c)
/** TRAM_RAM[4] TrustRAM **/
#define TRAM_RAM[4]			MMIO32(TRAM_BASE + 0x110)
/** TRAM_RAM[5] TrustRAM **/
#define TRAM_RAM[5]			MMIO32(TRAM_BASE + 0x114)
/** TRAM_RAM[6] TrustRAM **/
#define TRAM_RAM[6]			MMIO32(TRAM_BASE + 0x118)
/** TRAM_RAM[7] TrustRAM **/
#define TRAM_RAM[7]			MMIO32(TRAM_BASE + 0x11c)
/** TRAM_RAM[8] TrustRAM **/
#define TRAM_RAM[8]			MMIO32(TRAM_BASE + 0x120)
/** TRAM_RAM[9] TrustRAM **/
#define TRAM_RAM[9]			MMIO32(TRAM_BASE + 0x124)
/** TRAM_RAM[10] TrustRAM **/
#define TRAM_RAM[10]			MMIO32(TRAM_BASE + 0x128)
/** TRAM_RAM[11] TrustRAM **/
#define TRAM_RAM[11]			MMIO32(TRAM_BASE + 0x12c)
/** TRAM_RAM[12] TrustRAM **/
#define TRAM_RAM[12]			MMIO32(TRAM_BASE + 0x130)
/** TRAM_RAM[13] TrustRAM **/
#define TRAM_RAM[13]			MMIO32(TRAM_BASE + 0x134)
/** TRAM_RAM[14] TrustRAM **/
#define TRAM_RAM[14]			MMIO32(TRAM_BASE + 0x138)
/** TRAM_RAM[15] TrustRAM **/
#define TRAM_RAM[15]			MMIO32(TRAM_BASE + 0x13c)
/** TRAM_RAM[16] TrustRAM **/
#define TRAM_RAM[16]			MMIO32(TRAM_BASE + 0x140)
/** TRAM_RAM[17] TrustRAM **/
#define TRAM_RAM[17]			MMIO32(TRAM_BASE + 0x144)
/** TRAM_RAM[18] TrustRAM **/
#define TRAM_RAM[18]			MMIO32(TRAM_BASE + 0x148)
/** TRAM_RAM[19] TrustRAM **/
#define TRAM_RAM[19]			MMIO32(TRAM_BASE + 0x14c)
/** TRAM_RAM[20] TrustRAM **/
#define TRAM_RAM[20]			MMIO32(TRAM_BASE + 0x150)
/** TRAM_RAM[21] TrustRAM **/
#define TRAM_RAM[21]			MMIO32(TRAM_BASE + 0x154)
/** TRAM_RAM[22] TrustRAM **/
#define TRAM_RAM[22]			MMIO32(TRAM_BASE + 0x158)
/** TRAM_RAM[23] TrustRAM **/
#define TRAM_RAM[23]			MMIO32(TRAM_BASE + 0x15c)
/** TRAM_RAM[24] TrustRAM **/
#define TRAM_RAM[24]			MMIO32(TRAM_BASE + 0x160)
/** TRAM_RAM[25] TrustRAM **/
#define TRAM_RAM[25]			MMIO32(TRAM_BASE + 0x164)
/** TRAM_RAM[26] TrustRAM **/
#define TRAM_RAM[26]			MMIO32(TRAM_BASE + 0x168)
/** TRAM_RAM[27] TrustRAM **/
#define TRAM_RAM[27]			MMIO32(TRAM_BASE + 0x16c)
/** TRAM_RAM[28] TrustRAM **/
#define TRAM_RAM[28]			MMIO32(TRAM_BASE + 0x170)
/** TRAM_RAM[29] TrustRAM **/
#define TRAM_RAM[29]			MMIO32(TRAM_BASE + 0x174)
/** TRAM_RAM[30] TrustRAM **/
#define TRAM_RAM[30]			MMIO32(TRAM_BASE + 0x178)
/** TRAM_RAM[31] TrustRAM **/
#define TRAM_RAM[31]			MMIO32(TRAM_BASE + 0x17c)
/** TRAM_RAM[32] TrustRAM **/
#define TRAM_RAM[32]			MMIO32(TRAM_BASE + 0x180)
/** TRAM_RAM[33] TrustRAM **/
#define TRAM_RAM[33]			MMIO32(TRAM_BASE + 0x184)
/** TRAM_RAM[34] TrustRAM **/
#define TRAM_RAM[34]			MMIO32(TRAM_BASE + 0x188)
/** TRAM_RAM[35] TrustRAM **/
#define TRAM_RAM[35]			MMIO32(TRAM_BASE + 0x18c)
/** TRAM_RAM[36] TrustRAM **/
#define TRAM_RAM[36]			MMIO32(TRAM_BASE + 0x190)
/** TRAM_RAM[37] TrustRAM **/
#define TRAM_RAM[37]			MMIO32(TRAM_BASE + 0x194)
/** TRAM_RAM[38] TrustRAM **/
#define TRAM_RAM[38]			MMIO32(TRAM_BASE + 0x198)
/** TRAM_RAM[39] TrustRAM **/
#define TRAM_RAM[39]			MMIO32(TRAM_BASE + 0x19c)
/** TRAM_RAM[40] TrustRAM **/
#define TRAM_RAM[40]			MMIO32(TRAM_BASE + 0x1a0)
/** TRAM_RAM[41] TrustRAM **/
#define TRAM_RAM[41]			MMIO32(TRAM_BASE + 0x1a4)
/** TRAM_RAM[42] TrustRAM **/
#define TRAM_RAM[42]			MMIO32(TRAM_BASE + 0x1a8)
/** TRAM_RAM[43] TrustRAM **/
#define TRAM_RAM[43]			MMIO32(TRAM_BASE + 0x1ac)
/** TRAM_RAM[44] TrustRAM **/
#define TRAM_RAM[44]			MMIO32(TRAM_BASE + 0x1b0)
/** TRAM_RAM[45] TrustRAM **/
#define TRAM_RAM[45]			MMIO32(TRAM_BASE + 0x1b4)
/** TRAM_RAM[46] TrustRAM **/
#define TRAM_RAM[46]			MMIO32(TRAM_BASE + 0x1b8)
/** TRAM_RAM[47] TrustRAM **/
#define TRAM_RAM[47]			MMIO32(TRAM_BASE + 0x1bc)
/** TRAM_RAM[48] TrustRAM **/
#define TRAM_RAM[48]			MMIO32(TRAM_BASE + 0x1c0)
/** TRAM_RAM[49] TrustRAM **/
#define TRAM_RAM[49]			MMIO32(TRAM_BASE + 0x1c4)
/** TRAM_RAM[50] TrustRAM **/
#define TRAM_RAM[50]			MMIO32(TRAM_BASE + 0x1c8)
/** TRAM_RAM[51] TrustRAM **/
#define TRAM_RAM[51]			MMIO32(TRAM_BASE + 0x1cc)
/** TRAM_RAM[52] TrustRAM **/
#define TRAM_RAM[52]			MMIO32(TRAM_BASE + 0x1d0)
/** TRAM_RAM[53] TrustRAM **/
#define TRAM_RAM[53]			MMIO32(TRAM_BASE + 0x1d4)
/** TRAM_RAM[54] TrustRAM **/
#define TRAM_RAM[54]			MMIO32(TRAM_BASE + 0x1d8)
/** TRAM_RAM[55] TrustRAM **/
#define TRAM_RAM[55]			MMIO32(TRAM_BASE + 0x1dc)
/** TRAM_RAM[56] TrustRAM **/
#define TRAM_RAM[56]			MMIO32(TRAM_BASE + 0x1e0)
/** TRAM_RAM[57] TrustRAM **/
#define TRAM_RAM[57]			MMIO32(TRAM_BASE + 0x1e4)
/** TRAM_RAM[58] TrustRAM **/
#define TRAM_RAM[58]			MMIO32(TRAM_BASE + 0x1e8)
/** TRAM_RAM[59] TrustRAM **/
#define TRAM_RAM[59]			MMIO32(TRAM_BASE + 0x1ec)
/** TRAM_RAM[60] TrustRAM **/
#define TRAM_RAM[60]			MMIO32(TRAM_BASE + 0x1f0)
/** TRAM_RAM[61] TrustRAM **/
#define TRAM_RAM[61]			MMIO32(TRAM_BASE + 0x1f4)
/** TRAM_RAM[62] TrustRAM **/
#define TRAM_RAM[62]			MMIO32(TRAM_BASE + 0x1f8)
/** TRAM_RAM[63] TrustRAM **/
#define TRAM_RAM[63]			MMIO32(TRAM_BASE + 0x1fc)

/**@}*/


/** @defgroup tram_ctrla CTRLA Control
@{*/

/** TRAM_CTRLA_SILACC Silent Access **/
#define TRAM_CTRLA_SILACC		(1 << 7)
/** TRAM_CTRLA_DRP Data Remanence Prevention **/
#define TRAM_CTRLA_DRP		(1 << 6)
/** TRAM_CTRLA_TAMPERS Tamper Erase **/
#define TRAM_CTRLA_TAMPERS		(1 << 4)
/** TRAM_CTRLA_ENABLE Enable **/
#define TRAM_CTRLA_ENABLE		(1 << 1)
/** TRAM_CTRLA_SWRST Software Reset **/
#define TRAM_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup tram_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** TRAM_INTENCLR_DRP Data Remanence Prevention Ended Interrupt Enable **/
#define TRAM_INTENCLR_DRP		(1 << 1)
/** TRAM_INTENCLR_ERR TrustRAM Readout Error Interrupt Enable **/
#define TRAM_INTENCLR_ERR		(1 << 0)

/**@}*/

/** @defgroup tram_intenset INTENSET Interrupt Enable Set
@{*/

/** TRAM_INTENSET_DRP Data Remanence Prevention Ended Interrupt Enable **/
#define TRAM_INTENSET_DRP		(1 << 1)
/** TRAM_INTENSET_ERR TrustRAM Readout Error Interrupt Enable **/
#define TRAM_INTENSET_ERR		(1 << 0)

/**@}*/

/** @defgroup tram_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** TRAM_INTFLAG_DRP Data Remanence Prevention Ended **/
#define TRAM_INTFLAG_DRP		(1 << 1)
/** TRAM_INTFLAG_ERR TrustRAM Readout Error **/
#define TRAM_INTFLAG_ERR		(1 << 0)

/**@}*/

/** @defgroup tram_status STATUS Status
@{*/

/** TRAM_STATUS_DRP Data Remanence Prevention Ongoing **/
#define TRAM_STATUS_DRP		(1 << 1)
/** TRAM_STATUS_RAMINV RAM Inversion Bit **/
#define TRAM_STATUS_RAMINV		(1 << 0)

/**@}*/

/** @defgroup tram_syncbusy SYNCBUSY Synchronization Busy Status
@{*/

/** TRAM_SYNCBUSY_ENABLE Enable Busy **/
#define TRAM_SYNCBUSY_ENABLE		(1 << 1)
/** TRAM_SYNCBUSY_SWRST Software Reset Busy **/
#define TRAM_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup tram_dscc DSCC Data Scramble Control
@{*/

/** TRAM_DSCC_DSCEN Data Scramble Enable **/
#define TRAM_DSCC_DSCEN		(1 << 31)

#define TRAM_DSCC_DSCKEY_SHIFT		0
#define TRAM_DSCC_DSCKEY_MASK		0x3fffffff
/** @defgroup tram_dscc_dsckey DSCKEY Data Scramble Key
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_permw PERMW Permutation Write
@{*/


#define TRAM_PERMW_DATA_SHIFT		0
#define TRAM_PERMW_DATA_MASK		0x07
/** @defgroup tram_permw_data DATA Permutation Scrambler Data Input
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_permr PERMR Permutation Read
@{*/


#define TRAM_PERMR_DATA_SHIFT		0
#define TRAM_PERMR_DATA_MASK		0x07
/** @defgroup tram_permr_data DATA Permutation Scrambler Data Output
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[0] RAM[0] TrustRAM
@{*/


#define TRAM_RAM[0]_DATA_SHIFT		0
#define TRAM_RAM[0]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[0]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[1] RAM[1] TrustRAM
@{*/


#define TRAM_RAM[1]_DATA_SHIFT		0
#define TRAM_RAM[1]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[1]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[2] RAM[2] TrustRAM
@{*/


#define TRAM_RAM[2]_DATA_SHIFT		0
#define TRAM_RAM[2]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[2]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[3] RAM[3] TrustRAM
@{*/


#define TRAM_RAM[3]_DATA_SHIFT		0
#define TRAM_RAM[3]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[3]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[4] RAM[4] TrustRAM
@{*/


#define TRAM_RAM[4]_DATA_SHIFT		0
#define TRAM_RAM[4]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[4]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[5] RAM[5] TrustRAM
@{*/


#define TRAM_RAM[5]_DATA_SHIFT		0
#define TRAM_RAM[5]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[5]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[6] RAM[6] TrustRAM
@{*/


#define TRAM_RAM[6]_DATA_SHIFT		0
#define TRAM_RAM[6]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[6]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[7] RAM[7] TrustRAM
@{*/


#define TRAM_RAM[7]_DATA_SHIFT		0
#define TRAM_RAM[7]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[7]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[8] RAM[8] TrustRAM
@{*/


#define TRAM_RAM[8]_DATA_SHIFT		0
#define TRAM_RAM[8]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[8]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[9] RAM[9] TrustRAM
@{*/


#define TRAM_RAM[9]_DATA_SHIFT		0
#define TRAM_RAM[9]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[9]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[10] RAM[10] TrustRAM
@{*/


#define TRAM_RAM[10]_DATA_SHIFT		0
#define TRAM_RAM[10]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[10]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[11] RAM[11] TrustRAM
@{*/


#define TRAM_RAM[11]_DATA_SHIFT		0
#define TRAM_RAM[11]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[11]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[12] RAM[12] TrustRAM
@{*/


#define TRAM_RAM[12]_DATA_SHIFT		0
#define TRAM_RAM[12]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[12]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[13] RAM[13] TrustRAM
@{*/


#define TRAM_RAM[13]_DATA_SHIFT		0
#define TRAM_RAM[13]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[13]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[14] RAM[14] TrustRAM
@{*/


#define TRAM_RAM[14]_DATA_SHIFT		0
#define TRAM_RAM[14]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[14]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[15] RAM[15] TrustRAM
@{*/


#define TRAM_RAM[15]_DATA_SHIFT		0
#define TRAM_RAM[15]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[15]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[16] RAM[16] TrustRAM
@{*/


#define TRAM_RAM[16]_DATA_SHIFT		0
#define TRAM_RAM[16]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[16]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[17] RAM[17] TrustRAM
@{*/


#define TRAM_RAM[17]_DATA_SHIFT		0
#define TRAM_RAM[17]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[17]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[18] RAM[18] TrustRAM
@{*/


#define TRAM_RAM[18]_DATA_SHIFT		0
#define TRAM_RAM[18]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[18]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[19] RAM[19] TrustRAM
@{*/


#define TRAM_RAM[19]_DATA_SHIFT		0
#define TRAM_RAM[19]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[19]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[20] RAM[20] TrustRAM
@{*/


#define TRAM_RAM[20]_DATA_SHIFT		0
#define TRAM_RAM[20]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[20]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[21] RAM[21] TrustRAM
@{*/


#define TRAM_RAM[21]_DATA_SHIFT		0
#define TRAM_RAM[21]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[21]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[22] RAM[22] TrustRAM
@{*/


#define TRAM_RAM[22]_DATA_SHIFT		0
#define TRAM_RAM[22]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[22]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[23] RAM[23] TrustRAM
@{*/


#define TRAM_RAM[23]_DATA_SHIFT		0
#define TRAM_RAM[23]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[23]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[24] RAM[24] TrustRAM
@{*/


#define TRAM_RAM[24]_DATA_SHIFT		0
#define TRAM_RAM[24]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[24]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[25] RAM[25] TrustRAM
@{*/


#define TRAM_RAM[25]_DATA_SHIFT		0
#define TRAM_RAM[25]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[25]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[26] RAM[26] TrustRAM
@{*/


#define TRAM_RAM[26]_DATA_SHIFT		0
#define TRAM_RAM[26]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[26]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[27] RAM[27] TrustRAM
@{*/


#define TRAM_RAM[27]_DATA_SHIFT		0
#define TRAM_RAM[27]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[27]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[28] RAM[28] TrustRAM
@{*/


#define TRAM_RAM[28]_DATA_SHIFT		0
#define TRAM_RAM[28]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[28]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[29] RAM[29] TrustRAM
@{*/


#define TRAM_RAM[29]_DATA_SHIFT		0
#define TRAM_RAM[29]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[29]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[30] RAM[30] TrustRAM
@{*/


#define TRAM_RAM[30]_DATA_SHIFT		0
#define TRAM_RAM[30]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[30]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[31] RAM[31] TrustRAM
@{*/


#define TRAM_RAM[31]_DATA_SHIFT		0
#define TRAM_RAM[31]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[31]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[32] RAM[32] TrustRAM
@{*/


#define TRAM_RAM[32]_DATA_SHIFT		0
#define TRAM_RAM[32]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[32]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[33] RAM[33] TrustRAM
@{*/


#define TRAM_RAM[33]_DATA_SHIFT		0
#define TRAM_RAM[33]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[33]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[34] RAM[34] TrustRAM
@{*/


#define TRAM_RAM[34]_DATA_SHIFT		0
#define TRAM_RAM[34]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[34]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[35] RAM[35] TrustRAM
@{*/


#define TRAM_RAM[35]_DATA_SHIFT		0
#define TRAM_RAM[35]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[35]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[36] RAM[36] TrustRAM
@{*/


#define TRAM_RAM[36]_DATA_SHIFT		0
#define TRAM_RAM[36]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[36]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[37] RAM[37] TrustRAM
@{*/


#define TRAM_RAM[37]_DATA_SHIFT		0
#define TRAM_RAM[37]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[37]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[38] RAM[38] TrustRAM
@{*/


#define TRAM_RAM[38]_DATA_SHIFT		0
#define TRAM_RAM[38]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[38]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[39] RAM[39] TrustRAM
@{*/


#define TRAM_RAM[39]_DATA_SHIFT		0
#define TRAM_RAM[39]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[39]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[40] RAM[40] TrustRAM
@{*/


#define TRAM_RAM[40]_DATA_SHIFT		0
#define TRAM_RAM[40]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[40]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[41] RAM[41] TrustRAM
@{*/


#define TRAM_RAM[41]_DATA_SHIFT		0
#define TRAM_RAM[41]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[41]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[42] RAM[42] TrustRAM
@{*/


#define TRAM_RAM[42]_DATA_SHIFT		0
#define TRAM_RAM[42]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[42]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[43] RAM[43] TrustRAM
@{*/


#define TRAM_RAM[43]_DATA_SHIFT		0
#define TRAM_RAM[43]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[43]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[44] RAM[44] TrustRAM
@{*/


#define TRAM_RAM[44]_DATA_SHIFT		0
#define TRAM_RAM[44]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[44]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[45] RAM[45] TrustRAM
@{*/


#define TRAM_RAM[45]_DATA_SHIFT		0
#define TRAM_RAM[45]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[45]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[46] RAM[46] TrustRAM
@{*/


#define TRAM_RAM[46]_DATA_SHIFT		0
#define TRAM_RAM[46]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[46]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[47] RAM[47] TrustRAM
@{*/


#define TRAM_RAM[47]_DATA_SHIFT		0
#define TRAM_RAM[47]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[47]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[48] RAM[48] TrustRAM
@{*/


#define TRAM_RAM[48]_DATA_SHIFT		0
#define TRAM_RAM[48]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[48]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[49] RAM[49] TrustRAM
@{*/


#define TRAM_RAM[49]_DATA_SHIFT		0
#define TRAM_RAM[49]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[49]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[50] RAM[50] TrustRAM
@{*/


#define TRAM_RAM[50]_DATA_SHIFT		0
#define TRAM_RAM[50]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[50]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[51] RAM[51] TrustRAM
@{*/


#define TRAM_RAM[51]_DATA_SHIFT		0
#define TRAM_RAM[51]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[51]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[52] RAM[52] TrustRAM
@{*/


#define TRAM_RAM[52]_DATA_SHIFT		0
#define TRAM_RAM[52]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[52]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[53] RAM[53] TrustRAM
@{*/


#define TRAM_RAM[53]_DATA_SHIFT		0
#define TRAM_RAM[53]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[53]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[54] RAM[54] TrustRAM
@{*/


#define TRAM_RAM[54]_DATA_SHIFT		0
#define TRAM_RAM[54]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[54]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[55] RAM[55] TrustRAM
@{*/


#define TRAM_RAM[55]_DATA_SHIFT		0
#define TRAM_RAM[55]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[55]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[56] RAM[56] TrustRAM
@{*/


#define TRAM_RAM[56]_DATA_SHIFT		0
#define TRAM_RAM[56]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[56]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[57] RAM[57] TrustRAM
@{*/


#define TRAM_RAM[57]_DATA_SHIFT		0
#define TRAM_RAM[57]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[57]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[58] RAM[58] TrustRAM
@{*/


#define TRAM_RAM[58]_DATA_SHIFT		0
#define TRAM_RAM[58]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[58]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[59] RAM[59] TrustRAM
@{*/


#define TRAM_RAM[59]_DATA_SHIFT		0
#define TRAM_RAM[59]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[59]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[60] RAM[60] TrustRAM
@{*/


#define TRAM_RAM[60]_DATA_SHIFT		0
#define TRAM_RAM[60]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[60]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[61] RAM[61] TrustRAM
@{*/


#define TRAM_RAM[61]_DATA_SHIFT		0
#define TRAM_RAM[61]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[61]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[62] RAM[62] TrustRAM
@{*/


#define TRAM_RAM[62]_DATA_SHIFT		0
#define TRAM_RAM[62]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[62]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

/** @defgroup tram_ram[63] RAM[63] TrustRAM
@{*/


#define TRAM_RAM[63]_DATA_SHIFT		0
#define TRAM_RAM[63]_DATA_MASK		0xffffffff
/** @defgroup tram_ram[63]_data DATA Trust RAM Data
@{*/
/**@}*/


/**@}*/

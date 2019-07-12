#pragma once 

/* --- MATRIX: AHB Bus Matrix --------------------------------------- */

/** @defgroup matrix_registers AHB Bus Matrix Register
@{*/

/** MATRIX_MATRIX_MCFG[0] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[0]			MMIO32(MATRIX_BASE + 0x00)
/** MATRIX_MATRIX_MCFG[1] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[1]			MMIO32(MATRIX_BASE + 0x04)
/** MATRIX_MATRIX_MCFG[2] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[2]			MMIO32(MATRIX_BASE + 0x08)
/** MATRIX_MATRIX_MCFG[3] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[3]			MMIO32(MATRIX_BASE + 0x0c)
/** MATRIX_MATRIX_MCFG[4] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[4]			MMIO32(MATRIX_BASE + 0x10)
/** MATRIX_MATRIX_MCFG[5] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[5]			MMIO32(MATRIX_BASE + 0x14)
/** MATRIX_MATRIX_MCFG[6] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[6]			MMIO32(MATRIX_BASE + 0x18)
/** MATRIX_MATRIX_MCFG[7] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[7]			MMIO32(MATRIX_BASE + 0x1c)
/** MATRIX_MATRIX_MCFG[8] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[8]			MMIO32(MATRIX_BASE + 0x20)
/** MATRIX_MATRIX_MCFG[9] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[9]			MMIO32(MATRIX_BASE + 0x24)
/** MATRIX_MATRIX_MCFG[10] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[10]			MMIO32(MATRIX_BASE + 0x28)
/** MATRIX_MATRIX_MCFG[11] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[11]			MMIO32(MATRIX_BASE + 0x2c)
/** MATRIX_MATRIX_MCFG[12] Master Configuration Register 0 **/
#define MATRIX_MATRIX_MCFG[12]			MMIO32(MATRIX_BASE + 0x30)
/** MATRIX_MATRIX_SCFG[0] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[0]			MMIO32(MATRIX_BASE + 0x40)
/** MATRIX_MATRIX_SCFG[1] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[1]			MMIO32(MATRIX_BASE + 0x44)
/** MATRIX_MATRIX_SCFG[2] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[2]			MMIO32(MATRIX_BASE + 0x48)
/** MATRIX_MATRIX_SCFG[3] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[3]			MMIO32(MATRIX_BASE + 0x4c)
/** MATRIX_MATRIX_SCFG[4] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[4]			MMIO32(MATRIX_BASE + 0x50)
/** MATRIX_MATRIX_SCFG[5] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[5]			MMIO32(MATRIX_BASE + 0x54)
/** MATRIX_MATRIX_SCFG[6] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[6]			MMIO32(MATRIX_BASE + 0x58)
/** MATRIX_MATRIX_SCFG[7] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[7]			MMIO32(MATRIX_BASE + 0x5c)
/** MATRIX_MATRIX_SCFG[8] Slave Configuration Register 0 **/
#define MATRIX_MATRIX_SCFG[8]			MMIO32(MATRIX_BASE + 0x60)
/** MATRIX_MATRIX_PR[0]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0x80)
/** MATRIX_MATRIX_PR[0]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0x84)
/** MATRIX_MATRIX_PR[1]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0x88)
/** MATRIX_MATRIX_PR[1]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0x8c)
/** MATRIX_MATRIX_PR[2]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0x90)
/** MATRIX_MATRIX_PR[2]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0x94)
/** MATRIX_MATRIX_PR[3]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0x98)
/** MATRIX_MATRIX_PR[3]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0x9c)
/** MATRIX_MATRIX_PR[4]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0xa0)
/** MATRIX_MATRIX_PR[4]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0xa4)
/** MATRIX_MATRIX_PR[5]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0xa8)
/** MATRIX_MATRIX_PR[5]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0xac)
/** MATRIX_MATRIX_PR[6]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0xb0)
/** MATRIX_MATRIX_PR[6]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0xb4)
/** MATRIX_MATRIX_PR[7]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0xb8)
/** MATRIX_MATRIX_PR[7]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0xbc)
/** MATRIX_MATRIX_PR[8]_MATRIX_PRAS Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS			MMIO32(MATRIX_BASE + 0xc0)
/** MATRIX_MATRIX_PR[8]_MATRIX_PRBS Priority Register B for Slave 0 **/
#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS			MMIO32(MATRIX_BASE + 0xc4)
/** MATRIX_MATRIX_MRCR Master Remap Control Register **/
#define MATRIX_MATRIX_MRCR			MMIO32(MATRIX_BASE + 0x100)
/** MATRIX_CCFG_CAN0 CAN0 Configuration Register **/
#define MATRIX_CCFG_CAN0			MMIO32(MATRIX_BASE + 0x110)
/** MATRIX_CCFG_SYSIO System I/O Configuration Register **/
#define MATRIX_CCFG_SYSIO			MMIO32(MATRIX_BASE + 0x114)
/** MATRIX_CCFG_PCCR Peripheral Clock Configuration Register **/
#define MATRIX_CCFG_PCCR			MMIO32(MATRIX_BASE + 0x118)
/** MATRIX_CCFG_DYNCKG Dynamic Clock Gating Register **/
#define MATRIX_CCFG_DYNCKG			MMIO32(MATRIX_BASE + 0x11c)
/** MATRIX_CCFG_SMCNFCS SMC NAND Flash Chip Select Configuration Register **/
#define MATRIX_CCFG_SMCNFCS			MMIO32(MATRIX_BASE + 0x124)
/** MATRIX_MATRIX_WPMR Write Protection Mode Register **/
#define MATRIX_MATRIX_WPMR			MMIO32(MATRIX_BASE + 0x1e4)
/** MATRIX_MATRIX_WPSR Write Protection Status Register **/
#define MATRIX_MATRIX_WPSR			MMIO32(MATRIX_BASE + 0x1e8)

/**@}*/


/** @defgroup matrix_matrix_mcfg[0] MATRIXMCFG[0] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[0]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[0]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[0]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[1] MATRIXMCFG[1] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[1]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[1]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[1]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[2] MATRIXMCFG[2] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[2]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[2]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[2]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[3] MATRIXMCFG[3] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[3]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[3]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[3]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[4] MATRIXMCFG[4] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[4]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[4]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[4]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[5] MATRIXMCFG[5] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[5]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[5]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[5]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[6] MATRIXMCFG[6] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[6]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[6]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[6]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[7] MATRIXMCFG[7] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[7]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[7]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[7]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[8] MATRIXMCFG[8] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[8]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[8]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[8]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[9] MATRIXMCFG[9] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[9]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[9]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[9]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[10] MATRIXMCFG[10] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[10]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[10]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[10]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[11] MATRIXMCFG[11] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[11]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[11]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[11]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[12] MATRIXMCFG[12] Master Configuration Register 0
@{*/


#define MATRIX_MATRIX_MCFG[12]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[12]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[12]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[0] MATRIXSCFG[0] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[0]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[0]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[0]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[0]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[0]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[0]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[0]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[0]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[0]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[1] MATRIXSCFG[1] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[1]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[1]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[1]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[1]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[1]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[1]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[1]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[1]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[1]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[2] MATRIXSCFG[2] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[2]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[2]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[2]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[2]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[2]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[2]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[2]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[2]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[2]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[3] MATRIXSCFG[3] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[3]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[3]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[3]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[3]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[3]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[3]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[3]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[3]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[3]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[4] MATRIXSCFG[4] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[4]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[4]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[4]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[4]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[4]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[4]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[4]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[4]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[4]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[5] MATRIXSCFG[5] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[5]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[5]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[5]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[5]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[5]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[5]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[5]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[5]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[5]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[6] MATRIXSCFG[6] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[6]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[6]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[6]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[6]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[6]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[6]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[6]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[6]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[6]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[7] MATRIXSCFG[7] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[7]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[7]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[7]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[7]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[7]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[7]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[7]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[7]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[7]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[8] MATRIXSCFG[8] Slave Configuration Register 0
@{*/


#define MATRIX_MATRIX_SCFG[8]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[8]_FIXED_DEFMSTR_MASK		0x0f
/** @defgroup matrix_matrix_scfg[8]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[8]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[8]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[8]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[8]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[8]_SLOT_CYCLE_MASK		0x1ff
/** @defgroup matrix_matrix_scfg[8]_slot_cycle SLOTCYCLE Maximum Bus Grant Duration for Masters
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[0]_matrix_pras MATRIXPR[0]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[0]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[0]_matrix_prbs MATRIXPR[0]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[0]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[0]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[1]_matrix_pras MATRIXPR[1]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[1]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[1]_matrix_prbs MATRIXPR[1]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[1]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[1]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[2]_matrix_pras MATRIXPR[2]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[2]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[2]_matrix_prbs MATRIXPR[2]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[2]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[2]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[3]_matrix_pras MATRIXPR[3]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[3]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[3]_matrix_prbs MATRIXPR[3]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[3]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[3]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[4]_matrix_pras MATRIXPR[4]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[4]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[4]_matrix_prbs MATRIXPR[4]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[4]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[4]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[5]_matrix_pras MATRIXPR[5]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[5]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[5]_matrix_prbs MATRIXPR[5]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[5]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[5]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[6]_matrix_pras MATRIXPR[6]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[6]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[6]_matrix_prbs MATRIXPR[6]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[6]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[6]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[7]_matrix_pras MATRIXPR[7]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[7]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[7]_matrix_prbs MATRIXPR[7]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[7]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[7]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[8]_matrix_pras MATRIXPR[8]MATRIXPRAS Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M7PR_SHIFT		28
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M7PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m7pr M7PR Master 7 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M6PR_SHIFT		24
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M6PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m6pr M6PR Master 6 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M5PR_SHIFT		20
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M4PR_SHIFT		16
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M3PR_SHIFT		12
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M2PR_SHIFT		8
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M1PR_SHIFT		4
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M0PR_SHIFT		0
#define MATRIX_MATRIX_PR[8]_MATRIX_PRAS_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_pras_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pr[8]_matrix_prbs MATRIXPR[8]MATRIXPRBS Priority Register B for Slave 0
@{*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M12PR_SHIFT		16
#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M12PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_prbs_m12pr M12PR Master 12 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M10PR_SHIFT		8
#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M10PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_prbs_m10pr M10PR Master 10 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M9PR_SHIFT		4
#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M9PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_prbs_m9pr M9PR Master 9 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M8PR_SHIFT		0
#define MATRIX_MATRIX_PR[8]_MATRIX_PRBS_M8PR_MASK		0x03
/** @defgroup matrix_matrix_pr[8]_matrix_prbs_m8pr M8PR Master 8 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mrcr MATRIXMRCR Master Remap Control Register
@{*/

/** MATRIX_MATRIX_MRCR_RCB12 Remap Command Bit for Master 12 **/
#define MATRIX_MATRIX_MRCR_RCB12		(1 << 12)
/** MATRIX_MATRIX_MRCR_RCB10 Remap Command Bit for Master 10 **/
#define MATRIX_MATRIX_MRCR_RCB10		(1 << 10)
/** MATRIX_MATRIX_MRCR_RCB9 Remap Command Bit for Master 9 **/
#define MATRIX_MATRIX_MRCR_RCB9		(1 << 9)
/** MATRIX_MATRIX_MRCR_RCB8 Remap Command Bit for Master 8 **/
#define MATRIX_MATRIX_MRCR_RCB8		(1 << 8)
/** MATRIX_MATRIX_MRCR_RCB7 Remap Command Bit for Master 7 **/
#define MATRIX_MATRIX_MRCR_RCB7		(1 << 7)
/** MATRIX_MATRIX_MRCR_RCB6 Remap Command Bit for Master 6 **/
#define MATRIX_MATRIX_MRCR_RCB6		(1 << 6)
/** MATRIX_MATRIX_MRCR_RCB5 Remap Command Bit for Master 5 **/
#define MATRIX_MATRIX_MRCR_RCB5		(1 << 5)
/** MATRIX_MATRIX_MRCR_RCB4 Remap Command Bit for Master 4 **/
#define MATRIX_MATRIX_MRCR_RCB4		(1 << 4)
/** MATRIX_MATRIX_MRCR_RCB3 Remap Command Bit for Master 3 **/
#define MATRIX_MATRIX_MRCR_RCB3		(1 << 3)
/** MATRIX_MATRIX_MRCR_RCB2 Remap Command Bit for Master 2 **/
#define MATRIX_MATRIX_MRCR_RCB2		(1 << 2)
/** MATRIX_MATRIX_MRCR_RCB1 Remap Command Bit for Master 1 **/
#define MATRIX_MATRIX_MRCR_RCB1		(1 << 1)
/** MATRIX_MATRIX_MRCR_RCB0 Remap Command Bit for Master 0 **/
#define MATRIX_MATRIX_MRCR_RCB0		(1 << 0)

/**@}*/

/** @defgroup matrix_ccfg_can0 CCFGCAN0 CAN0 Configuration Register
@{*/


#define MATRIX_CCFG_CAN0_CAN0DMABA_SHIFT		16
#define MATRIX_CCFG_CAN0_CAN0DMABA_MASK		0xffff
/** @defgroup matrix_ccfg_can0_can0dmaba CAN0DMABA CAN0 DMA Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_ccfg_sysio CCFGSYSIO System I/O Configuration Register
@{*/

/** MATRIX_CCFG_SYSIO_SYSIO12 PB12 or ERASE Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO12		(1 << 12)
/** MATRIX_CCFG_SYSIO_SYSIO7 PB7 or TCK/SWCLK Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO7		(1 << 7)
/** MATRIX_CCFG_SYSIO_SYSIO6 PB6 or TMS/SWDIO Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO6		(1 << 6)
/** MATRIX_CCFG_SYSIO_SYSIO5 PB5 or TDO/TRACESWO Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO5		(1 << 5)
/** MATRIX_CCFG_SYSIO_SYSIO4 PB4 or TDI Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO4		(1 << 4)

/**@}*/

/** @defgroup matrix_ccfg_pccr CCFGPCCR Peripheral Clock Configuration Register
@{*/

/** MATRIX_CCFG_PCCR_I2SC1CC I2SC1 Clock Configuration **/
#define MATRIX_CCFG_PCCR_I2SC1CC		(1 << 22)
/** MATRIX_CCFG_PCCR_I2SC0CC I2SC0 Clock Configuration **/
#define MATRIX_CCFG_PCCR_I2SC0CC		(1 << 21)
/** MATRIX_CCFG_PCCR_TC0CC TC0 Clock Configuration **/
#define MATRIX_CCFG_PCCR_TC0CC		(1 << 20)

/**@}*/

/** @defgroup matrix_ccfg_dynckg CCFGDYNCKG Dynamic Clock Gating Register
@{*/

/** MATRIX_CCFG_DYNCKG_EFCCKG EFC Dynamic Clock Gating Enable **/
#define MATRIX_CCFG_DYNCKG_EFCCKG		(1 << 2)
/** MATRIX_CCFG_DYNCKG_BRIDCKG Bridge Dynamic Clock Gating Enable **/
#define MATRIX_CCFG_DYNCKG_BRIDCKG		(1 << 1)
/** MATRIX_CCFG_DYNCKG_MATCKG MATRIX Dynamic Clock Gating **/
#define MATRIX_CCFG_DYNCKG_MATCKG		(1 << 0)

/**@}*/

/** @defgroup matrix_ccfg_smcnfcs CCFGSMCNFCS SMC NAND Flash Chip Select Configuration Register
@{*/

/** MATRIX_CCFG_SMCNFCS_SDRAMEN SDRAM Enable **/
#define MATRIX_CCFG_SMCNFCS_SDRAMEN		(1 << 4)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS3 SMC NAND Flash Chip Select 3 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS3		(1 << 3)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS2 SMC NAND Flash Chip Select 2 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS2		(1 << 2)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS1 SMC NAND Flash Chip Select 1 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS1		(1 << 1)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS0 SMC NAND Flash Chip Select 0 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS0		(1 << 0)

/**@}*/

/** @defgroup matrix_matrix_wpmr MATRIXWPMR Write Protection Mode Register
@{*/


#define MATRIX_MATRIX_WPMR_WPKEY_SHIFT		8
#define MATRIX_MATRIX_WPMR_WPKEY_MASK		0xffffff
/** @defgroup matrix_matrix_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** MATRIX_MATRIX_WPMR_WPEN Write Protection Enable **/
#define MATRIX_MATRIX_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup matrix_matrix_wpsr MATRIXWPSR Write Protection Status Register
@{*/


#define MATRIX_MATRIX_WPSR_WPVSRC_SHIFT		8
#define MATRIX_MATRIX_WPSR_WPVSRC_MASK		0xffff
/** @defgroup matrix_matrix_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** MATRIX_MATRIX_WPSR_WPVS Write Protection Violation Status **/
#define MATRIX_MATRIX_WPSR_WPVS		(1 << 0)

/**@}*/

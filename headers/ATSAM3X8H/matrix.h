#pragma once 

/* --- MATRIX: AHB Bus Matrix --------------------------------------- */

/** @defgroup matrix_registers AHB Bus Matrix Register
@{*/

/** MATRIX_MATRIX_MCFG[0] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[0]			MMIO32(MATRIX_BASE + 0x00)
/** MATRIX_MATRIX_MCFG[1] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[1]			MMIO32(MATRIX_BASE + 0x04)
/** MATRIX_MATRIX_MCFG[2] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[2]			MMIO32(MATRIX_BASE + 0x08)
/** MATRIX_MATRIX_MCFG[3] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[3]			MMIO32(MATRIX_BASE + 0x0c)
/** MATRIX_MATRIX_MCFG[4] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[4]			MMIO32(MATRIX_BASE + 0x10)
/** MATRIX_MATRIX_MCFG[5] Master Configuration Register **/
#define MATRIX_MATRIX_MCFG[5]			MMIO32(MATRIX_BASE + 0x14)
/** MATRIX_MATRIX_SCFG[0] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[0]			MMIO32(MATRIX_BASE + 0x40)
/** MATRIX_MATRIX_SCFG[1] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[1]			MMIO32(MATRIX_BASE + 0x44)
/** MATRIX_MATRIX_SCFG[2] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[2]			MMIO32(MATRIX_BASE + 0x48)
/** MATRIX_MATRIX_SCFG[3] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[3]			MMIO32(MATRIX_BASE + 0x4c)
/** MATRIX_MATRIX_SCFG[4] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[4]			MMIO32(MATRIX_BASE + 0x50)
/** MATRIX_MATRIX_SCFG[5] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[5]			MMIO32(MATRIX_BASE + 0x54)
/** MATRIX_MATRIX_SCFG[6] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[6]			MMIO32(MATRIX_BASE + 0x58)
/** MATRIX_MATRIX_SCFG[7] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[7]			MMIO32(MATRIX_BASE + 0x5c)
/** MATRIX_MATRIX_SCFG[8] Slave Configuration Register **/
#define MATRIX_MATRIX_SCFG[8]			MMIO32(MATRIX_BASE + 0x60)
/** MATRIX_MATRIX_PRAS0 Priority Register A for Slave 0 **/
#define MATRIX_MATRIX_PRAS0			MMIO32(MATRIX_BASE + 0x80)
/** MATRIX_MATRIX_PRAS1 Priority Register A for Slave 1 **/
#define MATRIX_MATRIX_PRAS1			MMIO32(MATRIX_BASE + 0x88)
/** MATRIX_MATRIX_PRAS2 Priority Register A for Slave 2 **/
#define MATRIX_MATRIX_PRAS2			MMIO32(MATRIX_BASE + 0x90)
/** MATRIX_MATRIX_PRAS3 Priority Register A for Slave 3 **/
#define MATRIX_MATRIX_PRAS3			MMIO32(MATRIX_BASE + 0x98)
/** MATRIX_MATRIX_PRAS4 Priority Register A for Slave 4 **/
#define MATRIX_MATRIX_PRAS4			MMIO32(MATRIX_BASE + 0xa0)
/** MATRIX_MATRIX_PRAS5 Priority Register A for Slave 5 **/
#define MATRIX_MATRIX_PRAS5			MMIO32(MATRIX_BASE + 0xa8)
/** MATRIX_MATRIX_PRAS6 Priority Register A for Slave 6 **/
#define MATRIX_MATRIX_PRAS6			MMIO32(MATRIX_BASE + 0xb0)
/** MATRIX_MATRIX_PRAS7 Priority Register A for Slave 7 **/
#define MATRIX_MATRIX_PRAS7			MMIO32(MATRIX_BASE + 0xb8)
/** MATRIX_MATRIX_PRAS8 Priority Register A for Slave 8 **/
#define MATRIX_MATRIX_PRAS8			MMIO32(MATRIX_BASE + 0xc0)
/** MATRIX_MATRIX_MRCR Master Remap Control Register **/
#define MATRIX_MATRIX_MRCR			MMIO32(MATRIX_BASE + 0x100)
/** MATRIX_CCFG_SYSIO System I/O Configuration register **/
#define MATRIX_CCFG_SYSIO			MMIO32(MATRIX_BASE + 0x114)
/** MATRIX_MATRIX_WPMR Write Protect Mode Register **/
#define MATRIX_MATRIX_WPMR			MMIO32(MATRIX_BASE + 0x1e4)
/** MATRIX_MATRIX_WPSR Write Protect Status Register **/
#define MATRIX_MATRIX_WPSR			MMIO32(MATRIX_BASE + 0x1e8)

/**@}*/


/** @defgroup matrix_matrix_mcfg[0] MATRIXMCFG[0] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[0]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[0]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[0]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[1] MATRIXMCFG[1] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[1]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[1]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[1]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[2] MATRIXMCFG[2] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[2]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[2]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[2]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[3] MATRIXMCFG[3] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[3]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[3]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[3]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[4] MATRIXMCFG[4] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[4]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[4]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[4]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mcfg[5] MATRIXMCFG[5] Master Configuration Register
@{*/


#define MATRIX_MATRIX_MCFG[5]_ULBT_SHIFT		0
#define MATRIX_MATRIX_MCFG[5]_ULBT_MASK		0x07
/** @defgroup matrix_matrix_mcfg[5]_ulbt ULBT Undefined Length Burst Type
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[0] MATRIXSCFG[0] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[0]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[0]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[0]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[0]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[0]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[0]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[0]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[0]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[0]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[0]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[0]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[0]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[1] MATRIXSCFG[1] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[1]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[1]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[1]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[1]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[1]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[1]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[1]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[1]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[1]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[1]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[1]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[1]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[2] MATRIXSCFG[2] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[2]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[2]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[2]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[2]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[2]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[2]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[2]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[2]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[2]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[2]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[2]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[2]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[3] MATRIXSCFG[3] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[3]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[3]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[3]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[3]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[3]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[3]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[3]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[3]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[3]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[3]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[3]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[3]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[4] MATRIXSCFG[4] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[4]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[4]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[4]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[4]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[4]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[4]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[4]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[4]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[4]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[4]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[4]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[4]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[5] MATRIXSCFG[5] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[5]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[5]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[5]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[5]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[5]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[5]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[5]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[5]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[5]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[5]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[5]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[5]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[6] MATRIXSCFG[6] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[6]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[6]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[6]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[6]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[6]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[6]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[6]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[6]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[6]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[6]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[6]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[6]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[7] MATRIXSCFG[7] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[7]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[7]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[7]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[7]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[7]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[7]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[7]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[7]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[7]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[7]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[7]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[7]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_scfg[8] MATRIXSCFG[8] Slave Configuration Register
@{*/


#define MATRIX_MATRIX_SCFG[8]_ARBT_SHIFT		24
#define MATRIX_MATRIX_SCFG[8]_ARBT_MASK		0x03
/** @defgroup matrix_matrix_scfg[8]_arbt ARBT Arbitration Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[8]_FIXED_DEFMSTR_SHIFT		18
#define MATRIX_MATRIX_SCFG[8]_FIXED_DEFMSTR_MASK		0x07
/** @defgroup matrix_matrix_scfg[8]_fixed_defmstr FIXEDDEFMSTR Fixed Default Master
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[8]_DEFMSTR_TYPE_SHIFT		16
#define MATRIX_MATRIX_SCFG[8]_DEFMSTR_TYPE_MASK		0x03
/** @defgroup matrix_matrix_scfg[8]_defmstr_type DEFMSTRTYPE Default Master Type
@{*/
/**@}*/


#define MATRIX_MATRIX_SCFG[8]_SLOT_CYCLE_SHIFT		0
#define MATRIX_MATRIX_SCFG[8]_SLOT_CYCLE_MASK		0xff
/** @defgroup matrix_matrix_scfg[8]_slot_cycle SLOTCYCLE Maximum Number of Allowed Cycles for a Burst
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras0 MATRIXPRAS0 Priority Register A for Slave 0
@{*/


#define MATRIX_MATRIX_PRAS0_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS0_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS0_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS0_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS0_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS0_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS0_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS0_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS0_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS0_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS0_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS0_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras0_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras1 MATRIXPRAS1 Priority Register A for Slave 1
@{*/


#define MATRIX_MATRIX_PRAS1_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS1_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS1_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS1_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS1_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS1_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS1_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS1_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS1_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS1_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS1_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS1_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras1_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras2 MATRIXPRAS2 Priority Register A for Slave 2
@{*/


#define MATRIX_MATRIX_PRAS2_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS2_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS2_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS2_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS2_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS2_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS2_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS2_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS2_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS2_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS2_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS2_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras2_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras3 MATRIXPRAS3 Priority Register A for Slave 3
@{*/


#define MATRIX_MATRIX_PRAS3_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS3_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS3_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS3_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS3_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS3_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS3_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS3_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS3_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS3_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS3_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS3_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras3_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras4 MATRIXPRAS4 Priority Register A for Slave 4
@{*/


#define MATRIX_MATRIX_PRAS4_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS4_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS4_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS4_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS4_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS4_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS4_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS4_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS4_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS4_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS4_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS4_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras4_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras5 MATRIXPRAS5 Priority Register A for Slave 5
@{*/


#define MATRIX_MATRIX_PRAS5_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS5_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS5_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS5_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS5_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS5_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS5_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS5_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS5_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS5_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS5_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS5_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras5_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras6 MATRIXPRAS6 Priority Register A for Slave 6
@{*/


#define MATRIX_MATRIX_PRAS6_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS6_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS6_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS6_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS6_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS6_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS6_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS6_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS6_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS6_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS6_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS6_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras6_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras7 MATRIXPRAS7 Priority Register A for Slave 7
@{*/


#define MATRIX_MATRIX_PRAS7_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS7_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS7_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS7_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS7_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS7_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS7_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS7_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS7_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS7_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS7_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS7_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras7_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_pras8 MATRIXPRAS8 Priority Register A for Slave 8
@{*/


#define MATRIX_MATRIX_PRAS8_M5PR_SHIFT		20
#define MATRIX_MATRIX_PRAS8_M5PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m5pr M5PR Master 5 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS8_M4PR_SHIFT		16
#define MATRIX_MATRIX_PRAS8_M4PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m4pr M4PR Master 4 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS8_M3PR_SHIFT		12
#define MATRIX_MATRIX_PRAS8_M3PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m3pr M3PR Master 3 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS8_M2PR_SHIFT		8
#define MATRIX_MATRIX_PRAS8_M2PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m2pr M2PR Master 2 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS8_M1PR_SHIFT		4
#define MATRIX_MATRIX_PRAS8_M1PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m1pr M1PR Master 1 Priority
@{*/
/**@}*/


#define MATRIX_MATRIX_PRAS8_M0PR_SHIFT		0
#define MATRIX_MATRIX_PRAS8_M0PR_MASK		0x03
/** @defgroup matrix_matrix_pras8_m0pr M0PR Master 0 Priority
@{*/
/**@}*/


/**@}*/

/** @defgroup matrix_matrix_mrcr MATRIXMRCR Master Remap Control Register
@{*/

/** MATRIX_MATRIX_MRCR_RCB5 Remap Command Bit for AHB Master 5 **/
#define MATRIX_MATRIX_MRCR_RCB5		(1 << 6)

#define MATRIX_MATRIX_MRCR_RCB4_SHIFT		4
#define MATRIX_MATRIX_MRCR_RCB4_MASK		0x03
/** @defgroup matrix_matrix_mrcr_rcb4 RCB4 Remap Command Bit for AHB Master 4
@{*/
/**@}*/

/** MATRIX_MATRIX_MRCR_RCB3 Remap Command Bit for AHB Master 3 **/
#define MATRIX_MATRIX_MRCR_RCB3		(1 << 3)
/** MATRIX_MATRIX_MRCR_RCB2 Remap Command Bit for AHB Master 2 **/
#define MATRIX_MATRIX_MRCR_RCB2		(1 << 2)
/** MATRIX_MATRIX_MRCR_RCB1 Remap Command Bit for AHB Master 1 **/
#define MATRIX_MATRIX_MRCR_RCB1		(1 << 1)
/** MATRIX_MATRIX_MRCR_RCB0 Remap Command Bit for AHB Master 0 **/
#define MATRIX_MATRIX_MRCR_RCB0		(1 << 0)

/**@}*/

/** @defgroup matrix_ccfg_sysio CCFGSYSIO System I/O Configuration register
@{*/

/** MATRIX_CCFG_SYSIO_SYSIO12 PC0 or ERASE Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO12		(1 << 12)

/**@}*/

/** @defgroup matrix_matrix_wpmr MATRIXWPMR Write Protect Mode Register
@{*/


#define MATRIX_MATRIX_WPMR_WPKEY_SHIFT		8
#define MATRIX_MATRIX_WPMR_WPKEY_MASK		0xffffff
/** @defgroup matrix_matrix_wpmr_wpkey WPKEY Write Protect KEY (Write-only)
@{*/
/**@}*/

/** MATRIX_MATRIX_WPMR_WPEN Write Protect ENable **/
#define MATRIX_MATRIX_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup matrix_matrix_wpsr MATRIXWPSR Write Protect Status Register
@{*/


#define MATRIX_MATRIX_WPSR_WPVSRC_SHIFT		8
#define MATRIX_MATRIX_WPSR_WPVSRC_MASK		0xffff
/** @defgroup matrix_matrix_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** MATRIX_MATRIX_WPSR_WPVS Write Protect Violation Status **/
#define MATRIX_MATRIX_WPSR_WPVS		(1 << 0)

/**@}*/

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
/** MATRIX_CCFG_SYSIO System I/O Configuration register **/
#define MATRIX_CCFG_SYSIO			MMIO32(MATRIX_BASE + 0x114)
/** MATRIX_CCFG_SMCNFCS SMC Chip Select NAND Flash Assignment Register **/
#define MATRIX_CCFG_SMCNFCS			MMIO32(MATRIX_BASE + 0x11c)
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

/** @defgroup matrix_matrix_pras0 MATRIXPRAS0 Priority Register A for Slave 0
@{*/


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

/** @defgroup matrix_ccfg_sysio CCFGSYSIO System I/O Configuration register
@{*/

/** MATRIX_CCFG_SYSIO_SYSIO12 PB12 or ERASE Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO12		(1 << 12)
/** MATRIX_CCFG_SYSIO_SYSIO11 PB11 or DDP Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO11		(1 << 11)
/** MATRIX_CCFG_SYSIO_SYSIO10 PB10 or DDM Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO10		(1 << 10)
/** MATRIX_CCFG_SYSIO_SYSIO7 PB7 or TCK/SWCLK Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO7		(1 << 7)
/** MATRIX_CCFG_SYSIO_SYSIO6 PB6 or TMS/SWDIO Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO6		(1 << 6)
/** MATRIX_CCFG_SYSIO_SYSIO5 PB5 or TDO/TRACESWO Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO5		(1 << 5)
/** MATRIX_CCFG_SYSIO_SYSIO4 PB4 or TDI Assignment **/
#define MATRIX_CCFG_SYSIO_SYSIO4		(1 << 4)

/**@}*/

/** @defgroup matrix_ccfg_smcnfcs CCFGSMCNFCS SMC Chip Select NAND Flash Assignment Register
@{*/

/** MATRIX_CCFG_SMCNFCS_SMC_NFCS3 SMC NAND Flash Chip Select 3 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS3		(1 << 3)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS2 SMC NAND Flash Chip Select 2 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS2		(1 << 2)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS1 SMC NAND Flash Chip Select 1 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS1		(1 << 1)
/** MATRIX_CCFG_SMCNFCS_SMC_NFCS0 SMC NAND Flash Chip Select 0 Assignment **/
#define MATRIX_CCFG_SMCNFCS_SMC_NFCS0		(1 << 0)

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

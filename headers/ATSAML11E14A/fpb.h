#pragma once 

/* --- FPB: Flash Patch and Breakpoint ------------------------------ */

/** @defgroup fpb_registers Flash Patch and Breakpoint Register
@{*/

/** FPB_FP_CTRL Flash Patch Control Register **/
#define FPB_FP_CTRL			MMIO32(FPB_BASE + 0x00)
/** FPB_FP_REMAP Flash Patch Remap Register **/
#define FPB_FP_REMAP			MMIO32(FPB_BASE + 0x04)
/** FPB_FP_COMP[0] Flash Patch Comparator Register n **/
#define FPB_FP_COMP[0]			MMIO32(FPB_BASE + 0x08)
/** FPB_FP_COMP_BREAKPOINT_MODE[0] Flash Patch Comparator Register n **/
#define FPB_FP_COMP_BREAKPOINT_MODE[0]			MMIO32(FPB_BASE + 0x08)
/** FPB_FP_COMP[1] Flash Patch Comparator Register n **/
#define FPB_FP_COMP[1]			MMIO32(FPB_BASE + 0x0c)
/** FPB_FP_COMP_BREAKPOINT_MODE[1] Flash Patch Comparator Register n **/
#define FPB_FP_COMP_BREAKPOINT_MODE[1]			MMIO32(FPB_BASE + 0x0c)
/** FPB_FP_COMP[2] Flash Patch Comparator Register n **/
#define FPB_FP_COMP[2]			MMIO32(FPB_BASE + 0x10)
/** FPB_FP_COMP_BREAKPOINT_MODE[2] Flash Patch Comparator Register n **/
#define FPB_FP_COMP_BREAKPOINT_MODE[2]			MMIO32(FPB_BASE + 0x10)
/** FPB_FP_COMP[3] Flash Patch Comparator Register n **/
#define FPB_FP_COMP[3]			MMIO32(FPB_BASE + 0x14)
/** FPB_FP_COMP_BREAKPOINT_MODE[3] Flash Patch Comparator Register n **/
#define FPB_FP_COMP_BREAKPOINT_MODE[3]			MMIO32(FPB_BASE + 0x14)
/** FPB_FP_LAR FPB Software Lock Access Register **/
#define FPB_FP_LAR			MMIO32(FPB_BASE + 0xfb0)
/** FPB_FP_LSR FPB Software Lock Status Register **/
#define FPB_FP_LSR			MMIO32(FPB_BASE + 0xfb4)
/** FPB_FP_DEVARCH FPB Device Architecture Register **/
#define FPB_FP_DEVARCH			MMIO32(FPB_BASE + 0xfbc)
/** FPB_FP_DEVTYPE FPB Device Type Register **/
#define FPB_FP_DEVTYPE			MMIO32(FPB_BASE + 0xfcc)
/** FPB_FP_PIDR4 FP Peripheral Identification Register 4 **/
#define FPB_FP_PIDR4			MMIO32(FPB_BASE + 0xfd0)
/** FPB_FP_PIDR5 FP Peripheral Identification Register 5 **/
#define FPB_FP_PIDR5			MMIO32(FPB_BASE + 0xfd4)
/** FPB_FP_PIDR6 FP Peripheral Identification Register 6 **/
#define FPB_FP_PIDR6			MMIO32(FPB_BASE + 0xfd8)
/** FPB_FP_PIDR7 FP Peripheral Identification Register 7 **/
#define FPB_FP_PIDR7			MMIO32(FPB_BASE + 0xfdc)
/** FPB_FP_PIDR0 FP Peripheral Identification Register 0 **/
#define FPB_FP_PIDR0			MMIO32(FPB_BASE + 0xfe0)
/** FPB_FP_PIDR1 FP Peripheral Identification Register 1 **/
#define FPB_FP_PIDR1			MMIO32(FPB_BASE + 0xfe4)
/** FPB_FP_PIDR2 FP Peripheral Identification Register 2 **/
#define FPB_FP_PIDR2			MMIO32(FPB_BASE + 0xfe8)
/** FPB_FP_PIDR3 FP Peripheral Identification Register 3 **/
#define FPB_FP_PIDR3			MMIO32(FPB_BASE + 0xfec)
/** FPB_FP_CIDR0 FP Component Identification Register 0 **/
#define FPB_FP_CIDR0			MMIO32(FPB_BASE + 0xff0)
/** FPB_FP_CIDR1 FP Component Identification Register 1 **/
#define FPB_FP_CIDR1			MMIO32(FPB_BASE + 0xff4)
/** FPB_FP_CIDR2 FP Component Identification Register 2 **/
#define FPB_FP_CIDR2			MMIO32(FPB_BASE + 0xff8)
/** FPB_FP_CIDR3 FP Component Identification Register 3 **/
#define FPB_FP_CIDR3			MMIO32(FPB_BASE + 0xffc)

/**@}*/


/** @defgroup fpb_fp_ctrl FPCTRL Flash Patch Control Register
@{*/


#define FPB_FP_CTRL_REV_SHIFT		28
#define FPB_FP_CTRL_REV_MASK		0x0f
/** @defgroup fpb_fp_ctrl_rev REV Revision
@{*/
/**@}*/


#define FPB_FP_CTRL_NUM_CODE_1_SHIFT		12
#define FPB_FP_CTRL_NUM_CODE_1_MASK		0x07
/** @defgroup fpb_fp_ctrl_num_code_1 NUMCODE1 Number of implemented code comparators bits [6:4]
@{*/
/**@}*/


#define FPB_FP_CTRL_NUM_LIT_SHIFT		8
#define FPB_FP_CTRL_NUM_LIT_MASK		0x0f
/** @defgroup fpb_fp_ctrl_num_lit NUMLIT Number of literal comparators
@{*/
/**@}*/


#define FPB_FP_CTRL_NUM_CODE_SHIFT		4
#define FPB_FP_CTRL_NUM_CODE_MASK		0x0f
/** @defgroup fpb_fp_ctrl_num_code NUMCODE Number of implemented code comparators bits [3:0]
@{*/
/**@}*/

/** FPB_FP_CTRL_KEY FP_CTRL write-enable key **/
#define FPB_FP_CTRL_KEY		(1 << 1)
/** FPB_FP_CTRL_ENABLE Flash Patch global enable **/
#define FPB_FP_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_remap FPREMAP Flash Patch Remap Register
@{*/

/** FPB_FP_REMAP_RMPSPT Remap supported **/
#define FPB_FP_REMAP_RMPSPT		(1 << 29)

#define FPB_FP_REMAP_REMAP_SHIFT		5
#define FPB_FP_REMAP_REMAP_MASK		0xffffff
/** @defgroup fpb_fp_remap_remap REMAP Remap address
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_comp[0] FPCOMP[0] Flash Patch Comparator Register n
@{*/

/** FPB_FP_COMP[0]_FE Flash Patch enable **/
#define FPB_FP_COMP[0]_FE		(1 << 31)

#define FPB_FP_COMP[0]_FPADDR_SHIFT		2
#define FPB_FP_COMP[0]_FPADDR_MASK		0x7ffffff
/** @defgroup fpb_fp_comp[0]_fpaddr FPADDR Flash Patch address
@{*/
/**@}*/

/** FPB_FP_COMP[0]_BE Breakpoint enable **/
#define FPB_FP_COMP[0]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp_breakpoint_mode[0] FPCOMPBREAKPOINTMODE[0] Flash Patch Comparator Register n
@{*/


#define FPB_FP_COMP_BREAKPOINT_MODE[0]_BPADDR_SHIFT		1
#define FPB_FP_COMP_BREAKPOINT_MODE[0]_BPADDR_MASK		0x7fffffff
/** @defgroup fpb_fp_comp_breakpoint_mode[0]_bpaddr BPADDR Breakpoint address
@{*/
/**@}*/

/** FPB_FP_COMP_BREAKPOINT_MODE[0]_BE Breakpoint enable **/
#define FPB_FP_COMP_BREAKPOINT_MODE[0]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp[1] FPCOMP[1] Flash Patch Comparator Register n
@{*/

/** FPB_FP_COMP[1]_FE Flash Patch enable **/
#define FPB_FP_COMP[1]_FE		(1 << 31)

#define FPB_FP_COMP[1]_FPADDR_SHIFT		2
#define FPB_FP_COMP[1]_FPADDR_MASK		0x7ffffff
/** @defgroup fpb_fp_comp[1]_fpaddr FPADDR Flash Patch address
@{*/
/**@}*/

/** FPB_FP_COMP[1]_BE Breakpoint enable **/
#define FPB_FP_COMP[1]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp_breakpoint_mode[1] FPCOMPBREAKPOINTMODE[1] Flash Patch Comparator Register n
@{*/


#define FPB_FP_COMP_BREAKPOINT_MODE[1]_BPADDR_SHIFT		1
#define FPB_FP_COMP_BREAKPOINT_MODE[1]_BPADDR_MASK		0x7fffffff
/** @defgroup fpb_fp_comp_breakpoint_mode[1]_bpaddr BPADDR Breakpoint address
@{*/
/**@}*/

/** FPB_FP_COMP_BREAKPOINT_MODE[1]_BE Breakpoint enable **/
#define FPB_FP_COMP_BREAKPOINT_MODE[1]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp[2] FPCOMP[2] Flash Patch Comparator Register n
@{*/

/** FPB_FP_COMP[2]_FE Flash Patch enable **/
#define FPB_FP_COMP[2]_FE		(1 << 31)

#define FPB_FP_COMP[2]_FPADDR_SHIFT		2
#define FPB_FP_COMP[2]_FPADDR_MASK		0x7ffffff
/** @defgroup fpb_fp_comp[2]_fpaddr FPADDR Flash Patch address
@{*/
/**@}*/

/** FPB_FP_COMP[2]_BE Breakpoint enable **/
#define FPB_FP_COMP[2]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp_breakpoint_mode[2] FPCOMPBREAKPOINTMODE[2] Flash Patch Comparator Register n
@{*/


#define FPB_FP_COMP_BREAKPOINT_MODE[2]_BPADDR_SHIFT		1
#define FPB_FP_COMP_BREAKPOINT_MODE[2]_BPADDR_MASK		0x7fffffff
/** @defgroup fpb_fp_comp_breakpoint_mode[2]_bpaddr BPADDR Breakpoint address
@{*/
/**@}*/

/** FPB_FP_COMP_BREAKPOINT_MODE[2]_BE Breakpoint enable **/
#define FPB_FP_COMP_BREAKPOINT_MODE[2]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp[3] FPCOMP[3] Flash Patch Comparator Register n
@{*/

/** FPB_FP_COMP[3]_FE Flash Patch enable **/
#define FPB_FP_COMP[3]_FE		(1 << 31)

#define FPB_FP_COMP[3]_FPADDR_SHIFT		2
#define FPB_FP_COMP[3]_FPADDR_MASK		0x7ffffff
/** @defgroup fpb_fp_comp[3]_fpaddr FPADDR Flash Patch address
@{*/
/**@}*/

/** FPB_FP_COMP[3]_BE Breakpoint enable **/
#define FPB_FP_COMP[3]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_comp_breakpoint_mode[3] FPCOMPBREAKPOINTMODE[3] Flash Patch Comparator Register n
@{*/


#define FPB_FP_COMP_BREAKPOINT_MODE[3]_BPADDR_SHIFT		1
#define FPB_FP_COMP_BREAKPOINT_MODE[3]_BPADDR_MASK		0x7fffffff
/** @defgroup fpb_fp_comp_breakpoint_mode[3]_bpaddr BPADDR Breakpoint address
@{*/
/**@}*/

/** FPB_FP_COMP_BREAKPOINT_MODE[3]_BE Breakpoint enable **/
#define FPB_FP_COMP_BREAKPOINT_MODE[3]_BE		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_lar FPLAR FPB Software Lock Access Register
@{*/


#define FPB_FP_LAR_KEY_SHIFT		0
#define FPB_FP_LAR_KEY_MASK		0xffffffff
/** @defgroup fpb_fp_lar_key KEY Lock access control
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_lsr FPLSR FPB Software Lock Status Register
@{*/

/** FPB_FP_LSR_nTT Not thirty-two bit **/
#define FPB_FP_LSR_nTT		(1 << 2)
/** FPB_FP_LSR_SLK Software Lock status **/
#define FPB_FP_LSR_SLK		(1 << 1)
/** FPB_FP_LSR_SLI Software Lock implemented **/
#define FPB_FP_LSR_SLI		(1 << 0)

/**@}*/

/** @defgroup fpb_fp_devarch FPDEVARCH FPB Device Architecture Register
@{*/


#define FPB_FP_DEVARCH_ARCHITECT_SHIFT		21
#define FPB_FP_DEVARCH_ARCHITECT_MASK		0x7ff
/** @defgroup fpb_fp_devarch_architect ARCHITECT Architect
@{*/
/**@}*/

/** FPB_FP_DEVARCH_PRESENT DEVARCH Present **/
#define FPB_FP_DEVARCH_PRESENT		(1 << 20)

#define FPB_FP_DEVARCH_REVISION_SHIFT		16
#define FPB_FP_DEVARCH_REVISION_MASK		0x0f
/** @defgroup fpb_fp_devarch_revision REVISION Revision
@{*/
/**@}*/


#define FPB_FP_DEVARCH_ARCHVER_SHIFT		12
#define FPB_FP_DEVARCH_ARCHVER_MASK		0x0f
/** @defgroup fpb_fp_devarch_archver ARCHVER Architecture Version
@{*/
/**@}*/


#define FPB_FP_DEVARCH_ARCHPART_SHIFT		0
#define FPB_FP_DEVARCH_ARCHPART_MASK		0xfff
/** @defgroup fpb_fp_devarch_archpart ARCHPART Architecture Part
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_devtype FPDEVTYPE FPB Device Type Register
@{*/


#define FPB_FP_DEVTYPE_SUB_SHIFT		4
#define FPB_FP_DEVTYPE_SUB_MASK		0x0f
/** @defgroup fpb_fp_devtype_sub SUB Sub-type
@{*/
/**@}*/


#define FPB_FP_DEVTYPE_MAJOR_SHIFT		0
#define FPB_FP_DEVTYPE_MAJOR_MASK		0x0f
/** @defgroup fpb_fp_devtype_major MAJOR Major type
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_pidr4 FPPIDR4 FP Peripheral Identification Register 4
@{*/


#define FPB_FP_PIDR4_SIZE_SHIFT		4
#define FPB_FP_PIDR4_SIZE_MASK		0x0f
/** @defgroup fpb_fp_pidr4_size SIZE 4KB count
@{*/
/**@}*/


#define FPB_FP_PIDR4_DES_2_SHIFT		0
#define FPB_FP_PIDR4_DES_2_MASK		0x0f
/** @defgroup fpb_fp_pidr4_des_2 DES2 JEP106 continuation code
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_pidr5 FPPIDR5 FP Peripheral Identification Register 5
@{*/


/**@}*/

/** @defgroup fpb_fp_pidr6 FPPIDR6 FP Peripheral Identification Register 6
@{*/


/**@}*/

/** @defgroup fpb_fp_pidr7 FPPIDR7 FP Peripheral Identification Register 7
@{*/


/**@}*/

/** @defgroup fpb_fp_pidr0 FPPIDR0 FP Peripheral Identification Register 0
@{*/


#define FPB_FP_PIDR0_PART_0_SHIFT		0
#define FPB_FP_PIDR0_PART_0_MASK		0xff
/** @defgroup fpb_fp_pidr0_part_0 PART0 Part number bits[7:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_pidr1 FPPIDR1 FP Peripheral Identification Register 1
@{*/


#define FPB_FP_PIDR1_DES_0_SHIFT		4
#define FPB_FP_PIDR1_DES_0_MASK		0x0f
/** @defgroup fpb_fp_pidr1_des_0 DES0 JEP106 identification code bits [3:0]
@{*/
/**@}*/


#define FPB_FP_PIDR1_PART_1_SHIFT		0
#define FPB_FP_PIDR1_PART_1_MASK		0x0f
/** @defgroup fpb_fp_pidr1_part_1 PART1 Part number bits[11:8]
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_pidr2 FPPIDR2 FP Peripheral Identification Register 2
@{*/


#define FPB_FP_PIDR2_REVISION_SHIFT		4
#define FPB_FP_PIDR2_REVISION_MASK		0x0f
/** @defgroup fpb_fp_pidr2_revision REVISION Component revision
@{*/
/**@}*/

/** FPB_FP_PIDR2_JEDEC JEDEC assignee value is used **/
#define FPB_FP_PIDR2_JEDEC		(1 << 3)

#define FPB_FP_PIDR2_DES_1_SHIFT		0
#define FPB_FP_PIDR2_DES_1_MASK		0x07
/** @defgroup fpb_fp_pidr2_des_1 DES1 JEP106 identification code bits[6:4]
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_pidr3 FPPIDR3 FP Peripheral Identification Register 3
@{*/


#define FPB_FP_PIDR3_REVAND_SHIFT		4
#define FPB_FP_PIDR3_REVAND_MASK		0x0f
/** @defgroup fpb_fp_pidr3_revand REVAND RevAnd
@{*/
/**@}*/


#define FPB_FP_PIDR3_CMOD_SHIFT		0
#define FPB_FP_PIDR3_CMOD_MASK		0x0f
/** @defgroup fpb_fp_pidr3_cmod CMOD Customer Modified
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_cidr0 FPCIDR0 FP Component Identification Register 0
@{*/


#define FPB_FP_CIDR0_PRMBL_0_SHIFT		0
#define FPB_FP_CIDR0_PRMBL_0_MASK		0xff
/** @defgroup fpb_fp_cidr0_prmbl_0 PRMBL0 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_cidr1 FPCIDR1 FP Component Identification Register 1
@{*/


#define FPB_FP_CIDR1_CLASS_SHIFT		4
#define FPB_FP_CIDR1_CLASS_MASK		0x0f
/** @defgroup fpb_fp_cidr1_class CLASS CoreSight component class
@{*/
/**@}*/


#define FPB_FP_CIDR1_PRMBL_1_SHIFT		0
#define FPB_FP_CIDR1_PRMBL_1_MASK		0x0f
/** @defgroup fpb_fp_cidr1_prmbl_1 PRMBL1 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_cidr2 FPCIDR2 FP Component Identification Register 2
@{*/


#define FPB_FP_CIDR2_PRMBL_2_SHIFT		0
#define FPB_FP_CIDR2_PRMBL_2_MASK		0xff
/** @defgroup fpb_fp_cidr2_prmbl_2 PRMBL2 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup fpb_fp_cidr3 FPCIDR3 FP Component Identification Register 3
@{*/


#define FPB_FP_CIDR3_PRMBL_3_SHIFT		0
#define FPB_FP_CIDR3_PRMBL_3_MASK		0xff
/** @defgroup fpb_fp_cidr3_prmbl_3 PRMBL3 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

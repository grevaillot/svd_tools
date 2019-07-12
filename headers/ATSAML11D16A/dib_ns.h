#pragma once 

/* --- DIB_NS: Debug Identification Block --------------------------- */

/** @defgroup dib_ns_registers Debug Identification Block Register
@{*/

/** DIB_NS_DLAR SCS Software Lock Access Register **/
#define DIB_NS_DLAR			MMIO32(DIB_NS_BASE + 0x00)
/** DIB_NS_DLSR SCS Software Lock Status Register **/
#define DIB_NS_DLSR			MMIO32(DIB_NS_BASE + 0x04)
/** DIB_NS_DAUTHSTATUS Debug Authentication Status Register **/
#define DIB_NS_DAUTHSTATUS			MMIO32(DIB_NS_BASE + 0x08)
/** DIB_NS_DDEVARCH SCS Device Architecture Register **/
#define DIB_NS_DDEVARCH			MMIO32(DIB_NS_BASE + 0x0c)
/** DIB_NS_DDEVTYPE SCS Device Type Register **/
#define DIB_NS_DDEVTYPE			MMIO32(DIB_NS_BASE + 0x1c)
/** DIB_NS_DPIDR4 SCS Peripheral Identification Register 4 **/
#define DIB_NS_DPIDR4			MMIO32(DIB_NS_BASE + 0x20)
/** DIB_NS_DPIDR5 SCS Peripheral Identification Register 5 **/
#define DIB_NS_DPIDR5			MMIO32(DIB_NS_BASE + 0x24)
/** DIB_NS_DPIDR6 SCS Peripheral Identification Register 6 **/
#define DIB_NS_DPIDR6			MMIO32(DIB_NS_BASE + 0x28)
/** DIB_NS_DPIDR7 SCS Peripheral Identification Register 7 **/
#define DIB_NS_DPIDR7			MMIO32(DIB_NS_BASE + 0x2c)
/** DIB_NS_DPIDR0 SCS Peripheral Identification Register 0 **/
#define DIB_NS_DPIDR0			MMIO32(DIB_NS_BASE + 0x30)
/** DIB_NS_DPIDR1 SCS Peripheral Identification Register 1 **/
#define DIB_NS_DPIDR1			MMIO32(DIB_NS_BASE + 0x34)
/** DIB_NS_DPIDR2 SCS Peripheral Identification Register 2 **/
#define DIB_NS_DPIDR2			MMIO32(DIB_NS_BASE + 0x38)
/** DIB_NS_DPIDR3 SCS Peripheral Identification Register 3 **/
#define DIB_NS_DPIDR3			MMIO32(DIB_NS_BASE + 0x3c)
/** DIB_NS_DCIDR0 SCS Component Identification Register 0 **/
#define DIB_NS_DCIDR0			MMIO32(DIB_NS_BASE + 0x40)
/** DIB_NS_DCIDR1 SCS Component Identification Register 1 **/
#define DIB_NS_DCIDR1			MMIO32(DIB_NS_BASE + 0x44)
/** DIB_NS_DCIDR2 SCS Component Identification Register 2 **/
#define DIB_NS_DCIDR2			MMIO32(DIB_NS_BASE + 0x48)
/** DIB_NS_DCIDR3 SCS Component Identification Register 3 **/
#define DIB_NS_DCIDR3			MMIO32(DIB_NS_BASE + 0x4c)

/**@}*/


/** @defgroup dib_ns_dlar DLAR SCS Software Lock Access Register
@{*/


#define DIB_NS_DLAR_KEY_SHIFT		0
#define DIB_NS_DLAR_KEY_MASK		0xffffffff
/** @defgroup dib_ns_dlar_key KEY Lock access control
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dlsr DLSR SCS Software Lock Status Register
@{*/

/** DIB_NS_DLSR_nTT Not thirty-two bit **/
#define DIB_NS_DLSR_nTT		(1 << 2)
/** DIB_NS_DLSR_SLK Software Lock status **/
#define DIB_NS_DLSR_SLK		(1 << 1)
/** DIB_NS_DLSR_SLI Software Lock implemented **/
#define DIB_NS_DLSR_SLI		(1 << 0)

/**@}*/

/** @defgroup dib_ns_dauthstatus DAUTHSTATUS Debug Authentication Status Register
@{*/


#define DIB_NS_DAUTHSTATUS_SNID_SHIFT		6
#define DIB_NS_DAUTHSTATUS_SNID_MASK		0x03
/** @defgroup dib_ns_dauthstatus_snid SNID 
@{*/
/**@}*/


#define DIB_NS_DAUTHSTATUS_SID_SHIFT		4
#define DIB_NS_DAUTHSTATUS_SID_MASK		0x03
/** @defgroup dib_ns_dauthstatus_sid SID 
@{*/
/**@}*/

/** DIB_NS_DAUTHSTATUS_NSNID  **/
#define DIB_NS_DAUTHSTATUS_NSNID		(1 << 2)
/** DIB_NS_DAUTHSTATUS_NSID  **/
#define DIB_NS_DAUTHSTATUS_NSID		(1 << 0)

/**@}*/

/** @defgroup dib_ns_ddevarch DDEVARCH SCS Device Architecture Register
@{*/


#define DIB_NS_DDEVARCH_ARCHITECT_SHIFT		21
#define DIB_NS_DDEVARCH_ARCHITECT_MASK		0x7ff
/** @defgroup dib_ns_ddevarch_architect ARCHITECT Architect
@{*/
/**@}*/

/** DIB_NS_DDEVARCH_PRESENT DEVARCH Present **/
#define DIB_NS_DDEVARCH_PRESENT		(1 << 20)

#define DIB_NS_DDEVARCH_REVISION_SHIFT		16
#define DIB_NS_DDEVARCH_REVISION_MASK		0x0f
/** @defgroup dib_ns_ddevarch_revision REVISION Revision
@{*/
/**@}*/


#define DIB_NS_DDEVARCH_ARCHVER_SHIFT		12
#define DIB_NS_DDEVARCH_ARCHVER_MASK		0x0f
/** @defgroup dib_ns_ddevarch_archver ARCHVER Architecture Version
@{*/
/**@}*/


#define DIB_NS_DDEVARCH_ARCHPART_SHIFT		0
#define DIB_NS_DDEVARCH_ARCHPART_MASK		0xfff
/** @defgroup dib_ns_ddevarch_archpart ARCHPART Architecture Part
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_ddevtype DDEVTYPE SCS Device Type Register
@{*/


#define DIB_NS_DDEVTYPE_SUB_SHIFT		4
#define DIB_NS_DDEVTYPE_SUB_MASK		0x0f
/** @defgroup dib_ns_ddevtype_sub SUB Sub-type
@{*/
/**@}*/


#define DIB_NS_DDEVTYPE_MAJOR_SHIFT		0
#define DIB_NS_DDEVTYPE_MAJOR_MASK		0x0f
/** @defgroup dib_ns_ddevtype_major MAJOR Major type
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dpidr4 DPIDR4 SCS Peripheral Identification Register 4
@{*/


#define DIB_NS_DPIDR4_SIZE_SHIFT		4
#define DIB_NS_DPIDR4_SIZE_MASK		0x0f
/** @defgroup dib_ns_dpidr4_size SIZE 4KB count
@{*/
/**@}*/


#define DIB_NS_DPIDR4_DES_2_SHIFT		0
#define DIB_NS_DPIDR4_DES_2_MASK		0x0f
/** @defgroup dib_ns_dpidr4_des_2 DES2 JEP106 continuation code
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dpidr5 DPIDR5 SCS Peripheral Identification Register 5
@{*/


/**@}*/

/** @defgroup dib_ns_dpidr6 DPIDR6 SCS Peripheral Identification Register 6
@{*/


/**@}*/

/** @defgroup dib_ns_dpidr7 DPIDR7 SCS Peripheral Identification Register 7
@{*/


/**@}*/

/** @defgroup dib_ns_dpidr0 DPIDR0 SCS Peripheral Identification Register 0
@{*/


#define DIB_NS_DPIDR0_PART_0_SHIFT		0
#define DIB_NS_DPIDR0_PART_0_MASK		0xff
/** @defgroup dib_ns_dpidr0_part_0 PART0 Part number bits[7:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dpidr1 DPIDR1 SCS Peripheral Identification Register 1
@{*/


#define DIB_NS_DPIDR1_DES_0_SHIFT		4
#define DIB_NS_DPIDR1_DES_0_MASK		0x0f
/** @defgroup dib_ns_dpidr1_des_0 DES0 JEP106 identification code bits [3:0]
@{*/
/**@}*/


#define DIB_NS_DPIDR1_PART_1_SHIFT		0
#define DIB_NS_DPIDR1_PART_1_MASK		0x0f
/** @defgroup dib_ns_dpidr1_part_1 PART1 Part number bits[11:8]
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dpidr2 DPIDR2 SCS Peripheral Identification Register 2
@{*/


#define DIB_NS_DPIDR2_REVISION_SHIFT		4
#define DIB_NS_DPIDR2_REVISION_MASK		0x0f
/** @defgroup dib_ns_dpidr2_revision REVISION Component revision
@{*/
/**@}*/

/** DIB_NS_DPIDR2_JEDEC JEDEC assignee value is used **/
#define DIB_NS_DPIDR2_JEDEC		(1 << 3)

#define DIB_NS_DPIDR2_DES_1_SHIFT		0
#define DIB_NS_DPIDR2_DES_1_MASK		0x07
/** @defgroup dib_ns_dpidr2_des_1 DES1 JEP106 identification code bits[6:4]
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dpidr3 DPIDR3 SCS Peripheral Identification Register 3
@{*/


#define DIB_NS_DPIDR3_REVAND_SHIFT		4
#define DIB_NS_DPIDR3_REVAND_MASK		0x0f
/** @defgroup dib_ns_dpidr3_revand REVAND RevAnd
@{*/
/**@}*/


#define DIB_NS_DPIDR3_CMOD_SHIFT		0
#define DIB_NS_DPIDR3_CMOD_MASK		0x0f
/** @defgroup dib_ns_dpidr3_cmod CMOD Customer Modified
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dcidr0 DCIDR0 SCS Component Identification Register 0
@{*/


#define DIB_NS_DCIDR0_PRMBL_0_SHIFT		0
#define DIB_NS_DCIDR0_PRMBL_0_MASK		0xff
/** @defgroup dib_ns_dcidr0_prmbl_0 PRMBL0 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dcidr1 DCIDR1 SCS Component Identification Register 1
@{*/


#define DIB_NS_DCIDR1_CLASS_SHIFT		4
#define DIB_NS_DCIDR1_CLASS_MASK		0x0f
/** @defgroup dib_ns_dcidr1_class CLASS CoreSight component class
@{*/
/**@}*/


#define DIB_NS_DCIDR1_PRMBL_1_SHIFT		0
#define DIB_NS_DCIDR1_PRMBL_1_MASK		0x0f
/** @defgroup dib_ns_dcidr1_prmbl_1 PRMBL1 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dcidr2 DCIDR2 SCS Component Identification Register 2
@{*/


#define DIB_NS_DCIDR2_PRMBL_2_SHIFT		0
#define DIB_NS_DCIDR2_PRMBL_2_MASK		0xff
/** @defgroup dib_ns_dcidr2_prmbl_2 PRMBL2 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dib_ns_dcidr3 DCIDR3 SCS Component Identification Register 3
@{*/


#define DIB_NS_DCIDR3_PRMBL_3_SHIFT		0
#define DIB_NS_DCIDR3_PRMBL_3_MASK		0xff
/** @defgroup dib_ns_dcidr3_prmbl_3 PRMBL3 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- DWT: Data Watchpoint and Trace ------------------------------- */

/** @defgroup dwt_registers Data Watchpoint and Trace Register
@{*/

/** DWT_DWT_CTRL DWT Control Register **/
#define DWT_DWT_CTRL			MMIO32(DWT_BASE + 0x00)
/** DWT_DWT_PCSR DWT Program Counter Sample Register **/
#define DWT_DWT_PCSR			MMIO32(DWT_BASE + 0x1c)
/** DWT_COMPARATOR[0]_DWT_COMP DWT Comparator Register n **/
#define DWT_COMPARATOR[0]_DWT_COMP			MMIO32(DWT_BASE + 0x20)
/** DWT_COMPARATOR[0]_DWT_FUNCTION DWT Function Register x **/
#define DWT_COMPARATOR[0]_DWT_FUNCTION			MMIO32(DWT_BASE + 0x28)
/** DWT_COMPARATOR[1]_DWT_COMP DWT Comparator Register n **/
#define DWT_COMPARATOR[1]_DWT_COMP			MMIO32(DWT_BASE + 0x30)
/** DWT_COMPARATOR[1]_DWT_FUNCTION DWT Function Register x **/
#define DWT_COMPARATOR[1]_DWT_FUNCTION			MMIO32(DWT_BASE + 0x38)
/** DWT_DWT_LAR DWT Software Lock Access Register **/
#define DWT_DWT_LAR			MMIO32(DWT_BASE + 0xfb0)
/** DWT_DWT_LSR DWT Software Lock Status Register **/
#define DWT_DWT_LSR			MMIO32(DWT_BASE + 0xfb4)
/** DWT_DWT_DEVARCH DWT Device Architecture Register **/
#define DWT_DWT_DEVARCH			MMIO32(DWT_BASE + 0xfbc)
/** DWT_DWT_DEVTYPE DWT Device Type Register **/
#define DWT_DWT_DEVTYPE			MMIO32(DWT_BASE + 0xfcc)
/** DWT_DWT_PIDR4 DWT Peripheral Identification Register 4 **/
#define DWT_DWT_PIDR4			MMIO32(DWT_BASE + 0xfd0)
/** DWT_DWT_PIDR5 DWT Peripheral Identification Register 5 **/
#define DWT_DWT_PIDR5			MMIO32(DWT_BASE + 0xfd4)
/** DWT_DWT_PIDR6 DWT Peripheral Identification Register 6 **/
#define DWT_DWT_PIDR6			MMIO32(DWT_BASE + 0xfd8)
/** DWT_DWT_PIDR7 DWT Peripheral Identification Register 7 **/
#define DWT_DWT_PIDR7			MMIO32(DWT_BASE + 0xfdc)
/** DWT_DWT_PIDR0 DWT Peripheral Identification Register 0 **/
#define DWT_DWT_PIDR0			MMIO32(DWT_BASE + 0xfe0)
/** DWT_DWT_PIDR1 DWT Peripheral Identification Register 1 **/
#define DWT_DWT_PIDR1			MMIO32(DWT_BASE + 0xfe4)
/** DWT_DWT_PIDR2 DWT Peripheral Identification Register 2 **/
#define DWT_DWT_PIDR2			MMIO32(DWT_BASE + 0xfe8)
/** DWT_DWT_PIDR3 DWT Peripheral Identification Register 3 **/
#define DWT_DWT_PIDR3			MMIO32(DWT_BASE + 0xfec)
/** DWT_DWT_CIDR0 DWT Component Identification Register 0 **/
#define DWT_DWT_CIDR0			MMIO32(DWT_BASE + 0xff0)
/** DWT_DWT_CIDR1 DWT Component Identification Register 1 **/
#define DWT_DWT_CIDR1			MMIO32(DWT_BASE + 0xff4)
/** DWT_DWT_CIDR2 DWT Component Identification Register 2 **/
#define DWT_DWT_CIDR2			MMIO32(DWT_BASE + 0xff8)
/** DWT_DWT_CIDR3 DWT Component Identification Register 3 **/
#define DWT_DWT_CIDR3			MMIO32(DWT_BASE + 0xffc)

/**@}*/


/** @defgroup dwt_dwt_ctrl DWTCTRL DWT Control Register
@{*/


#define DWT_DWT_CTRL_NUMCOMP_SHIFT		28
#define DWT_DWT_CTRL_NUMCOMP_MASK		0x0f
/** @defgroup dwt_dwt_ctrl_numcomp NUMCOMP Number of comparators
@{*/
/**@}*/

/** DWT_DWT_CTRL_NOTRCPKT No trace packets **/
#define DWT_DWT_CTRL_NOTRCPKT		(1 << 27)
/** DWT_DWT_CTRL_NOEXTTRIG No external triggers **/
#define DWT_DWT_CTRL_NOEXTTRIG		(1 << 26)
/** DWT_DWT_CTRL_NOCYCCNT No cycle count **/
#define DWT_DWT_CTRL_NOCYCCNT		(1 << 25)
/** DWT_DWT_CTRL_NOPRFCNT No profile counters **/
#define DWT_DWT_CTRL_NOPRFCNT		(1 << 24)
/** DWT_DWT_CTRL_CYCDISS Cycle counter disabled secure **/
#define DWT_DWT_CTRL_CYCDISS		(1 << 23)
/** DWT_DWT_CTRL_CYCEVTENA Cycle event enable **/
#define DWT_DWT_CTRL_CYCEVTENA		(1 << 22)
/** DWT_DWT_CTRL_FOLDEVTENA Fold event enable **/
#define DWT_DWT_CTRL_FOLDEVTENA		(1 << 21)
/** DWT_DWT_CTRL_LSUEVTENA LSU event enable **/
#define DWT_DWT_CTRL_LSUEVTENA		(1 << 20)
/** DWT_DWT_CTRL_SLEEPEVTENA Sleep event enable **/
#define DWT_DWT_CTRL_SLEEPEVTENA		(1 << 19)
/** DWT_DWT_CTRL_EXCEVTENA Exception event enable **/
#define DWT_DWT_CTRL_EXCEVTENA		(1 << 18)
/** DWT_DWT_CTRL_CPIEVTENA CPI event enable **/
#define DWT_DWT_CTRL_CPIEVTENA		(1 << 17)
/** DWT_DWT_CTRL_EXCTRCENA Exception trace enable **/
#define DWT_DWT_CTRL_EXCTRCENA		(1 << 16)
/** DWT_DWT_CTRL_PCSAMPLENA PC sample enable **/
#define DWT_DWT_CTRL_PCSAMPLENA		(1 << 12)

#define DWT_DWT_CTRL_SYNCTAP_SHIFT		10
#define DWT_DWT_CTRL_SYNCTAP_MASK		0x03
/** @defgroup dwt_dwt_ctrl_synctap SYNCTAP Synchronization tap
@{*/
/**@}*/

/** DWT_DWT_CTRL_CYCTAP Cycle count tap **/
#define DWT_DWT_CTRL_CYCTAP		(1 << 9)

#define DWT_DWT_CTRL_POSTINIT_SHIFT		5
#define DWT_DWT_CTRL_POSTINIT_MASK		0x0f
/** @defgroup dwt_dwt_ctrl_postinit POSTINIT POSTCNT initial
@{*/
/**@}*/


#define DWT_DWT_CTRL_POSTPRESET_SHIFT		1
#define DWT_DWT_CTRL_POSTPRESET_MASK		0x0f
/** @defgroup dwt_dwt_ctrl_postpreset POSTPRESET POSTCNT preset
@{*/
/**@}*/

/** DWT_DWT_CTRL_CYCCNTENA CYCCNT enable **/
#define DWT_DWT_CTRL_CYCCNTENA		(1 << 0)

/**@}*/

/** @defgroup dwt_dwt_pcsr DWTPCSR DWT Program Counter Sample Register
@{*/


#define DWT_DWT_PCSR_EIASAMPLE_SHIFT		0
#define DWT_DWT_PCSR_EIASAMPLE_MASK		0xffffffff
/** @defgroup dwt_dwt_pcsr_eiasample EIASAMPLE Executed instruction address sample
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comparator[0]_dwt_comp COMPARATOR[0]DWTCOMP DWT Comparator Register n
@{*/


#define DWT_COMPARATOR[0]_DWT_COMP_VALUE_SHIFT		0
#define DWT_COMPARATOR[0]_DWT_COMP_VALUE_MASK		0xffffffff
/** @defgroup dwt_comparator[0]_dwt_comp_value VALUE Cycle/PC/data value or data address
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comparator[0]_dwt_function COMPARATOR[0]DWTFUNCTION DWT Function Register x
@{*/


#define DWT_COMPARATOR[0]_DWT_FUNCTION_ID_SHIFT		27
#define DWT_COMPARATOR[0]_DWT_FUNCTION_ID_MASK		0x1f
/** @defgroup dwt_comparator[0]_dwt_function_id ID Identify capability
@{*/
/**@}*/

/** DWT_COMPARATOR[0]_DWT_FUNCTION_MATCHED Comparator matched **/
#define DWT_COMPARATOR[0]_DWT_FUNCTION_MATCHED		(1 << 24)

#define DWT_COMPARATOR[0]_DWT_FUNCTION_DATAVSIZE_SHIFT		10
#define DWT_COMPARATOR[0]_DWT_FUNCTION_DATAVSIZE_MASK		0x03
/** @defgroup dwt_comparator[0]_dwt_function_datavsize DATAVSIZE Data value size
@{*/
/**@}*/


#define DWT_COMPARATOR[0]_DWT_FUNCTION_ACTION_SHIFT		4
#define DWT_COMPARATOR[0]_DWT_FUNCTION_ACTION_MASK		0x03
/** @defgroup dwt_comparator[0]_dwt_function_action ACTION Action on match
@{*/
/**@}*/


#define DWT_COMPARATOR[0]_DWT_FUNCTION_MATCH_SHIFT		0
#define DWT_COMPARATOR[0]_DWT_FUNCTION_MATCH_MASK		0x0f
/** @defgroup dwt_comparator[0]_dwt_function_match MATCH Match type
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comparator[1]_dwt_comp COMPARATOR[1]DWTCOMP DWT Comparator Register n
@{*/


#define DWT_COMPARATOR[1]_DWT_COMP_VALUE_SHIFT		0
#define DWT_COMPARATOR[1]_DWT_COMP_VALUE_MASK		0xffffffff
/** @defgroup dwt_comparator[1]_dwt_comp_value VALUE Cycle/PC/data value or data address
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comparator[1]_dwt_function COMPARATOR[1]DWTFUNCTION DWT Function Register x
@{*/


#define DWT_COMPARATOR[1]_DWT_FUNCTION_ID_SHIFT		27
#define DWT_COMPARATOR[1]_DWT_FUNCTION_ID_MASK		0x1f
/** @defgroup dwt_comparator[1]_dwt_function_id ID Identify capability
@{*/
/**@}*/

/** DWT_COMPARATOR[1]_DWT_FUNCTION_MATCHED Comparator matched **/
#define DWT_COMPARATOR[1]_DWT_FUNCTION_MATCHED		(1 << 24)

#define DWT_COMPARATOR[1]_DWT_FUNCTION_DATAVSIZE_SHIFT		10
#define DWT_COMPARATOR[1]_DWT_FUNCTION_DATAVSIZE_MASK		0x03
/** @defgroup dwt_comparator[1]_dwt_function_datavsize DATAVSIZE Data value size
@{*/
/**@}*/


#define DWT_COMPARATOR[1]_DWT_FUNCTION_ACTION_SHIFT		4
#define DWT_COMPARATOR[1]_DWT_FUNCTION_ACTION_MASK		0x03
/** @defgroup dwt_comparator[1]_dwt_function_action ACTION Action on match
@{*/
/**@}*/


#define DWT_COMPARATOR[1]_DWT_FUNCTION_MATCH_SHIFT		0
#define DWT_COMPARATOR[1]_DWT_FUNCTION_MATCH_MASK		0x0f
/** @defgroup dwt_comparator[1]_dwt_function_match MATCH Match type
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_lar DWTLAR DWT Software Lock Access Register
@{*/


#define DWT_DWT_LAR_KEY_SHIFT		0
#define DWT_DWT_LAR_KEY_MASK		0xffffffff
/** @defgroup dwt_dwt_lar_key KEY Lock access control
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_lsr DWTLSR DWT Software Lock Status Register
@{*/

/** DWT_DWT_LSR_nTT Not thirty-two bit **/
#define DWT_DWT_LSR_nTT		(1 << 2)
/** DWT_DWT_LSR_SLK Software Lock status **/
#define DWT_DWT_LSR_SLK		(1 << 1)
/** DWT_DWT_LSR_SLI Software Lock implemented **/
#define DWT_DWT_LSR_SLI		(1 << 0)

/**@}*/

/** @defgroup dwt_dwt_devarch DWTDEVARCH DWT Device Architecture Register
@{*/


#define DWT_DWT_DEVARCH_ARCHITECT_SHIFT		21
#define DWT_DWT_DEVARCH_ARCHITECT_MASK		0x7ff
/** @defgroup dwt_dwt_devarch_architect ARCHITECT Architect
@{*/
/**@}*/

/** DWT_DWT_DEVARCH_PRESENT DEVARCH Present **/
#define DWT_DWT_DEVARCH_PRESENT		(1 << 20)

#define DWT_DWT_DEVARCH_REVISION_SHIFT		16
#define DWT_DWT_DEVARCH_REVISION_MASK		0x0f
/** @defgroup dwt_dwt_devarch_revision REVISION Revision
@{*/
/**@}*/


#define DWT_DWT_DEVARCH_ARCHVER_SHIFT		12
#define DWT_DWT_DEVARCH_ARCHVER_MASK		0x0f
/** @defgroup dwt_dwt_devarch_archver ARCHVER Architecture Version
@{*/
/**@}*/


#define DWT_DWT_DEVARCH_ARCHPART_SHIFT		0
#define DWT_DWT_DEVARCH_ARCHPART_MASK		0xfff
/** @defgroup dwt_dwt_devarch_archpart ARCHPART Architecture Part
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_devtype DWTDEVTYPE DWT Device Type Register
@{*/


#define DWT_DWT_DEVTYPE_SUB_SHIFT		4
#define DWT_DWT_DEVTYPE_SUB_MASK		0x0f
/** @defgroup dwt_dwt_devtype_sub SUB Sub-type
@{*/
/**@}*/


#define DWT_DWT_DEVTYPE_MAJOR_SHIFT		0
#define DWT_DWT_DEVTYPE_MAJOR_MASK		0x0f
/** @defgroup dwt_dwt_devtype_major MAJOR Major type
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_pidr4 DWTPIDR4 DWT Peripheral Identification Register 4
@{*/


#define DWT_DWT_PIDR4_SIZE_SHIFT		4
#define DWT_DWT_PIDR4_SIZE_MASK		0x0f
/** @defgroup dwt_dwt_pidr4_size SIZE 4KB count
@{*/
/**@}*/


#define DWT_DWT_PIDR4_DES_2_SHIFT		0
#define DWT_DWT_PIDR4_DES_2_MASK		0x0f
/** @defgroup dwt_dwt_pidr4_des_2 DES2 JEP106 continuation code
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_pidr5 DWTPIDR5 DWT Peripheral Identification Register 5
@{*/


/**@}*/

/** @defgroup dwt_dwt_pidr6 DWTPIDR6 DWT Peripheral Identification Register 6
@{*/


/**@}*/

/** @defgroup dwt_dwt_pidr7 DWTPIDR7 DWT Peripheral Identification Register 7
@{*/


/**@}*/

/** @defgroup dwt_dwt_pidr0 DWTPIDR0 DWT Peripheral Identification Register 0
@{*/


#define DWT_DWT_PIDR0_PART_0_SHIFT		0
#define DWT_DWT_PIDR0_PART_0_MASK		0xff
/** @defgroup dwt_dwt_pidr0_part_0 PART0 Part number bits[7:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_pidr1 DWTPIDR1 DWT Peripheral Identification Register 1
@{*/


#define DWT_DWT_PIDR1_DES_0_SHIFT		4
#define DWT_DWT_PIDR1_DES_0_MASK		0x0f
/** @defgroup dwt_dwt_pidr1_des_0 DES0 JEP106 identification code bits [3:0]
@{*/
/**@}*/


#define DWT_DWT_PIDR1_PART_1_SHIFT		0
#define DWT_DWT_PIDR1_PART_1_MASK		0x0f
/** @defgroup dwt_dwt_pidr1_part_1 PART1 Part number bits[11:8]
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_pidr2 DWTPIDR2 DWT Peripheral Identification Register 2
@{*/


#define DWT_DWT_PIDR2_REVISION_SHIFT		4
#define DWT_DWT_PIDR2_REVISION_MASK		0x0f
/** @defgroup dwt_dwt_pidr2_revision REVISION Component revision
@{*/
/**@}*/

/** DWT_DWT_PIDR2_JEDEC JEDEC assignee value is used **/
#define DWT_DWT_PIDR2_JEDEC		(1 << 3)

#define DWT_DWT_PIDR2_DES_1_SHIFT		0
#define DWT_DWT_PIDR2_DES_1_MASK		0x07
/** @defgroup dwt_dwt_pidr2_des_1 DES1 JEP106 identification code bits[6:4]
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_pidr3 DWTPIDR3 DWT Peripheral Identification Register 3
@{*/


#define DWT_DWT_PIDR3_REVAND_SHIFT		4
#define DWT_DWT_PIDR3_REVAND_MASK		0x0f
/** @defgroup dwt_dwt_pidr3_revand REVAND RevAnd
@{*/
/**@}*/


#define DWT_DWT_PIDR3_CMOD_SHIFT		0
#define DWT_DWT_PIDR3_CMOD_MASK		0x0f
/** @defgroup dwt_dwt_pidr3_cmod CMOD Customer Modified
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_cidr0 DWTCIDR0 DWT Component Identification Register 0
@{*/


#define DWT_DWT_CIDR0_PRMBL_0_SHIFT		0
#define DWT_DWT_CIDR0_PRMBL_0_MASK		0xff
/** @defgroup dwt_dwt_cidr0_prmbl_0 PRMBL0 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_cidr1 DWTCIDR1 DWT Component Identification Register 1
@{*/


#define DWT_DWT_CIDR1_CLASS_SHIFT		4
#define DWT_DWT_CIDR1_CLASS_MASK		0x0f
/** @defgroup dwt_dwt_cidr1_class CLASS CoreSight component class
@{*/
/**@}*/


#define DWT_DWT_CIDR1_PRMBL_1_SHIFT		0
#define DWT_DWT_CIDR1_PRMBL_1_MASK		0x0f
/** @defgroup dwt_dwt_cidr1_prmbl_1 PRMBL1 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_cidr2 DWTCIDR2 DWT Component Identification Register 2
@{*/


#define DWT_DWT_CIDR2_PRMBL_2_SHIFT		0
#define DWT_DWT_CIDR2_PRMBL_2_MASK		0xff
/** @defgroup dwt_dwt_cidr2_prmbl_2 PRMBL2 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_dwt_cidr3 DWTCIDR3 DWT Component Identification Register 3
@{*/


#define DWT_DWT_CIDR3_PRMBL_3_SHIFT		0
#define DWT_DWT_CIDR3_PRMBL_3_MASK		0xff
/** @defgroup dwt_dwt_cidr3_prmbl_3 PRMBL3 CoreSight component identification preamble
@{*/
/**@}*/


/**@}*/

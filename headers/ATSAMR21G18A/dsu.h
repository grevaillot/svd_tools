#pragma once 

/* --- DSU: Device Service Unit ------------------------------------- */

/** @defgroup dsu_registers Device Service Unit Register
@{*/

/** DSU_CTRL Control **/
#define DSU_CTRL			MMIO32(DSU_BASE + 0x00)
/** DSU_STATUSA Status A **/
#define DSU_STATUSA			MMIO32(DSU_BASE + 0x01)
/** DSU_STATUSB Status B **/
#define DSU_STATUSB			MMIO32(DSU_BASE + 0x02)
/** DSU_ADDR Address **/
#define DSU_ADDR			MMIO32(DSU_BASE + 0x04)
/** DSU_LENGTH Length **/
#define DSU_LENGTH			MMIO32(DSU_BASE + 0x08)
/** DSU_DATA Data **/
#define DSU_DATA			MMIO32(DSU_BASE + 0x0c)
/** DSU_DCC0 Debug Communication Channel n **/
#define DSU_DCC0			MMIO32(DSU_BASE + 0x10)
/** DSU_DCC1 Debug Communication Channel n **/
#define DSU_DCC1			MMIO32(DSU_BASE + 0x14)
/** DSU_DID Device Identification **/
#define DSU_DID			MMIO32(DSU_BASE + 0x18)
/** DSU_ENTRY0 Coresight ROM Table Entry n **/
#define DSU_ENTRY0			MMIO32(DSU_BASE + 0x1000)
/** DSU_ENTRY1 Coresight ROM Table Entry n **/
#define DSU_ENTRY1			MMIO32(DSU_BASE + 0x1004)
/** DSU_END Coresight ROM Table End **/
#define DSU_END			MMIO32(DSU_BASE + 0x1008)
/** DSU_MEMTYPE Coresight ROM Table Memory Type **/
#define DSU_MEMTYPE			MMIO32(DSU_BASE + 0x1fcc)
/** DSU_PID4 Peripheral Identification 4 **/
#define DSU_PID4			MMIO32(DSU_BASE + 0x1fd0)
/** DSU_PID0 Peripheral Identification 0 **/
#define DSU_PID0			MMIO32(DSU_BASE + 0x1fe0)
/** DSU_PID1 Peripheral Identification 1 **/
#define DSU_PID1			MMIO32(DSU_BASE + 0x1fe4)
/** DSU_PID2 Peripheral Identification 2 **/
#define DSU_PID2			MMIO32(DSU_BASE + 0x1fe8)
/** DSU_PID3 Peripheral Identification 3 **/
#define DSU_PID3			MMIO32(DSU_BASE + 0x1fec)
/** DSU_CID0 Component Identification 0 **/
#define DSU_CID0			MMIO32(DSU_BASE + 0x1ff0)
/** DSU_CID1 Component Identification 1 **/
#define DSU_CID1			MMIO32(DSU_BASE + 0x1ff4)
/** DSU_CID2 Component Identification 2 **/
#define DSU_CID2			MMIO32(DSU_BASE + 0x1ff8)
/** DSU_CID3 Component Identification 3 **/
#define DSU_CID3			MMIO32(DSU_BASE + 0x1ffc)

/**@}*/


/** @defgroup dsu_ctrl CTRL Control
@{*/

/** DSU_CTRL_CE Chip Erase **/
#define DSU_CTRL_CE		(1 << 4)
/** DSU_CTRL_MBIST Memory Built-In Self-Test **/
#define DSU_CTRL_MBIST		(1 << 3)
/** DSU_CTRL_CRC 32-bit Cyclic Redundancy Check **/
#define DSU_CTRL_CRC		(1 << 2)
/** DSU_CTRL_SWRST Software Reset **/
#define DSU_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup dsu_statusa STATUSA Status A
@{*/

/** DSU_STATUSA_PERR Protection Error **/
#define DSU_STATUSA_PERR		(1 << 4)
/** DSU_STATUSA_FAIL Failure **/
#define DSU_STATUSA_FAIL		(1 << 3)
/** DSU_STATUSA_BERR Bus Error **/
#define DSU_STATUSA_BERR		(1 << 2)
/** DSU_STATUSA_CRSTEXT CPU Reset Phase Extension **/
#define DSU_STATUSA_CRSTEXT		(1 << 1)
/** DSU_STATUSA_DONE Done **/
#define DSU_STATUSA_DONE		(1 << 0)

/**@}*/

/** @defgroup dsu_statusb STATUSB Status B
@{*/

/** DSU_STATUSB_HPE Hot-Plugging Enable **/
#define DSU_STATUSB_HPE		(1 << 4)
/** DSU_STATUSB_DCCD1 Debug Communication Channel 1 Dirty **/
#define DSU_STATUSB_DCCD1		(1 << 3)
/** DSU_STATUSB_DCCD0 Debug Communication Channel 0 Dirty **/
#define DSU_STATUSB_DCCD0		(1 << 2)
/** DSU_STATUSB_DBGPRES Debugger Present **/
#define DSU_STATUSB_DBGPRES		(1 << 1)
/** DSU_STATUSB_PROT Protected **/
#define DSU_STATUSB_PROT		(1 << 0)

/**@}*/

/** @defgroup dsu_addr ADDR Address
@{*/


#define DSU_ADDR_ADDR_SHIFT		2
#define DSU_ADDR_ADDR_MASK		0x3fffffff
/** @defgroup dsu_addr_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_length LENGTH Length
@{*/


#define DSU_LENGTH_LENGTH_SHIFT		2
#define DSU_LENGTH_LENGTH_MASK		0x3fffffff
/** @defgroup dsu_length_length LENGTH Length
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_data DATA Data
@{*/


#define DSU_DATA_DATA_SHIFT		0
#define DSU_DATA_DATA_MASK		0xffffffff
/** @defgroup dsu_data_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_dcc0 DCC0 Debug Communication Channel n
@{*/


#define DSU_DCC0_DATA_SHIFT		0
#define DSU_DCC0_DATA_MASK		0xffffffff
/** @defgroup dsu_dcc0_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_dcc1 DCC1 Debug Communication Channel n
@{*/


#define DSU_DCC1_DATA_SHIFT		0
#define DSU_DCC1_DATA_MASK		0xffffffff
/** @defgroup dsu_dcc1_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_did DID Device Identification
@{*/


#define DSU_DID_PROCESSOR_SHIFT		28
#define DSU_DID_PROCESSOR_MASK		0x0f
/** @defgroup dsu_did_processor PROCESSOR Processor
@{*/
/**@}*/


#define DSU_DID_FAMILY_SHIFT		23
#define DSU_DID_FAMILY_MASK		0x1f
/** @defgroup dsu_did_family FAMILY Product Family
@{*/
/**@}*/


#define DSU_DID_SERIES_SHIFT		16
#define DSU_DID_SERIES_MASK		0x3f
/** @defgroup dsu_did_series SERIES Product Series
@{*/
/**@}*/


#define DSU_DID_DIE_SHIFT		12
#define DSU_DID_DIE_MASK		0x0f
/** @defgroup dsu_did_die DIE Die Identification
@{*/
/**@}*/


#define DSU_DID_REVISION_SHIFT		8
#define DSU_DID_REVISION_MASK		0x0f
/** @defgroup dsu_did_revision REVISION Revision
@{*/
/**@}*/


#define DSU_DID_DEVSEL_SHIFT		0
#define DSU_DID_DEVSEL_MASK		0xff
/** @defgroup dsu_did_devsel DEVSEL Device Select
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_entry0 ENTRY0 Coresight ROM Table Entry n
@{*/


#define DSU_ENTRY0_ADDOFF_SHIFT		12
#define DSU_ENTRY0_ADDOFF_MASK		0xfffff
/** @defgroup dsu_entry0_addoff ADDOFF Address Offset
@{*/
/**@}*/

/** DSU_ENTRY0_FMT Format **/
#define DSU_ENTRY0_FMT		(1 << 1)
/** DSU_ENTRY0_EPRES Entry Present **/
#define DSU_ENTRY0_EPRES		(1 << 0)

/**@}*/

/** @defgroup dsu_entry1 ENTRY1 Coresight ROM Table Entry n
@{*/


#define DSU_ENTRY1_ADDOFF_SHIFT		12
#define DSU_ENTRY1_ADDOFF_MASK		0xfffff
/** @defgroup dsu_entry1_addoff ADDOFF Address Offset
@{*/
/**@}*/

/** DSU_ENTRY1_FMT Format **/
#define DSU_ENTRY1_FMT		(1 << 1)
/** DSU_ENTRY1_EPRES Entry Present **/
#define DSU_ENTRY1_EPRES		(1 << 0)

/**@}*/

/** @defgroup dsu_end END Coresight ROM Table End
@{*/


#define DSU_END_END_SHIFT		0
#define DSU_END_END_MASK		0xffffffff
/** @defgroup dsu_end_end END End Marker
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_memtype MEMTYPE Coresight ROM Table Memory Type
@{*/

/** DSU_MEMTYPE_SMEMP System Memory Present **/
#define DSU_MEMTYPE_SMEMP		(1 << 0)

/**@}*/

/** @defgroup dsu_pid4 PID4 Peripheral Identification 4
@{*/


#define DSU_PID4_FKBC_SHIFT		4
#define DSU_PID4_FKBC_MASK		0x0f
/** @defgroup dsu_pid4_fkbc FKBC 4KB Count
@{*/
/**@}*/


#define DSU_PID4_JEPCC_SHIFT		0
#define DSU_PID4_JEPCC_MASK		0x0f
/** @defgroup dsu_pid4_jepcc JEPCC JEP-106 Continuation Code
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_pid0 PID0 Peripheral Identification 0
@{*/


#define DSU_PID0_PARTNBL_SHIFT		0
#define DSU_PID0_PARTNBL_MASK		0xff
/** @defgroup dsu_pid0_partnbl PARTNBL Part Number Low
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_pid1 PID1 Peripheral Identification 1
@{*/


#define DSU_PID1_JEPIDCL_SHIFT		4
#define DSU_PID1_JEPIDCL_MASK		0x0f
/** @defgroup dsu_pid1_jepidcl JEPIDCL Low part of the JEP-106 Identity Code
@{*/
/**@}*/


#define DSU_PID1_PARTNBH_SHIFT		0
#define DSU_PID1_PARTNBH_MASK		0x0f
/** @defgroup dsu_pid1_partnbh PARTNBH Part Number High
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_pid2 PID2 Peripheral Identification 2
@{*/


#define DSU_PID2_REVISION_SHIFT		4
#define DSU_PID2_REVISION_MASK		0x0f
/** @defgroup dsu_pid2_revision REVISION Revision Number
@{*/
/**@}*/

/** DSU_PID2_JEPU JEP-106 Identity Code is used **/
#define DSU_PID2_JEPU		(1 << 3)

#define DSU_PID2_JEPIDCH_SHIFT		0
#define DSU_PID2_JEPIDCH_MASK		0x07
/** @defgroup dsu_pid2_jepidch JEPIDCH JEP-106 Identity Code High
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_pid3 PID3 Peripheral Identification 3
@{*/


#define DSU_PID3_REVAND_SHIFT		4
#define DSU_PID3_REVAND_MASK		0x0f
/** @defgroup dsu_pid3_revand REVAND Revision Number
@{*/
/**@}*/


#define DSU_PID3_CUSMOD_SHIFT		0
#define DSU_PID3_CUSMOD_MASK		0x0f
/** @defgroup dsu_pid3_cusmod CUSMOD ARM CUSMOD
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_cid0 CID0 Component Identification 0
@{*/


#define DSU_CID0_PREAMBLEB0_SHIFT		0
#define DSU_CID0_PREAMBLEB0_MASK		0xff
/** @defgroup dsu_cid0_preambleb0 PREAMBLEB0 Preamble Byte 0
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_cid1 CID1 Component Identification 1
@{*/


#define DSU_CID1_CCLASS_SHIFT		4
#define DSU_CID1_CCLASS_MASK		0x0f
/** @defgroup dsu_cid1_cclass CCLASS Component Class
@{*/
/**@}*/


#define DSU_CID1_PREAMBLE_SHIFT		0
#define DSU_CID1_PREAMBLE_MASK		0x0f
/** @defgroup dsu_cid1_preamble PREAMBLE Preamble
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_cid2 CID2 Component Identification 2
@{*/


#define DSU_CID2_PREAMBLEB2_SHIFT		0
#define DSU_CID2_PREAMBLEB2_MASK		0xff
/** @defgroup dsu_cid2_preambleb2 PREAMBLEB2 Preamble Byte 2
@{*/
/**@}*/


/**@}*/

/** @defgroup dsu_cid3 CID3 Component Identification 3
@{*/


#define DSU_CID3_PREAMBLEB3_SHIFT		0
#define DSU_CID3_PREAMBLEB3_MASK		0xff
/** @defgroup dsu_cid3_preambleb3 PREAMBLEB3 Preamble Byte 3
@{*/
/**@}*/


/**@}*/

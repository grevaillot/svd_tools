#pragma once 

/* --- DMAC: Direct Memory Access Controller ------------------------ */

/** @defgroup dmac_registers Direct Memory Access Controller Register
@{*/

/** DMAC_CTRL Control **/
#define DMAC_CTRL			MMIO32(DMAC_BASE + 0x00)
/** DMAC_CRCCTRL CRC Control **/
#define DMAC_CRCCTRL			MMIO32(DMAC_BASE + 0x02)
/** DMAC_CRCDATAIN CRC Data Input **/
#define DMAC_CRCDATAIN			MMIO32(DMAC_BASE + 0x04)
/** DMAC_CRCCHKSUM CRC Checksum **/
#define DMAC_CRCCHKSUM			MMIO32(DMAC_BASE + 0x08)
/** DMAC_CRCSTATUS CRC Status **/
#define DMAC_CRCSTATUS			MMIO32(DMAC_BASE + 0x0c)
/** DMAC_DBGCTRL Debug Control **/
#define DMAC_DBGCTRL			MMIO32(DMAC_BASE + 0x0d)
/** DMAC_QOSCTRL QOS Control **/
#define DMAC_QOSCTRL			MMIO32(DMAC_BASE + 0x0e)
/** DMAC_SWTRIGCTRL Software Trigger Control **/
#define DMAC_SWTRIGCTRL			MMIO32(DMAC_BASE + 0x10)
/** DMAC_PRICTRL0 Priority Control 0 **/
#define DMAC_PRICTRL0			MMIO32(DMAC_BASE + 0x14)
/** DMAC_INTPEND Interrupt Pending **/
#define DMAC_INTPEND			MMIO32(DMAC_BASE + 0x20)
/** DMAC_INTSTATUS Interrupt Status **/
#define DMAC_INTSTATUS			MMIO32(DMAC_BASE + 0x24)
/** DMAC_BUSYCH Busy Channels **/
#define DMAC_BUSYCH			MMIO32(DMAC_BASE + 0x28)
/** DMAC_PENDCH Pending Channels **/
#define DMAC_PENDCH			MMIO32(DMAC_BASE + 0x2c)
/** DMAC_ACTIVE Active Channel and Levels **/
#define DMAC_ACTIVE			MMIO32(DMAC_BASE + 0x30)
/** DMAC_BASEADDR Descriptor Memory Section Base Address **/
#define DMAC_BASEADDR			MMIO32(DMAC_BASE + 0x34)
/** DMAC_WRBADDR Write-Back Memory Section Base Address **/
#define DMAC_WRBADDR			MMIO32(DMAC_BASE + 0x38)
/** DMAC_CHID Channel ID **/
#define DMAC_CHID			MMIO32(DMAC_BASE + 0x3f)
/** DMAC_CHCTRLA Channel Control A **/
#define DMAC_CHCTRLA			MMIO32(DMAC_BASE + 0x40)
/** DMAC_CHCTRLB Channel Control B **/
#define DMAC_CHCTRLB			MMIO32(DMAC_BASE + 0x44)
/** DMAC_CHINTENCLR Channel Interrupt Enable Clear **/
#define DMAC_CHINTENCLR			MMIO32(DMAC_BASE + 0x4c)
/** DMAC_CHINTENSET Channel Interrupt Enable Set **/
#define DMAC_CHINTENSET			MMIO32(DMAC_BASE + 0x4d)
/** DMAC_CHINTFLAG Channel Interrupt Flag Status and Clear **/
#define DMAC_CHINTFLAG			MMIO32(DMAC_BASE + 0x4e)
/** DMAC_CHSTATUS Channel Status **/
#define DMAC_CHSTATUS			MMIO32(DMAC_BASE + 0x4f)

/**@}*/


/** @defgroup dmac_ctrl CTRL Control
@{*/

/** DMAC_CTRL_LVLEN3 Priority Level 3 Enable **/
#define DMAC_CTRL_LVLEN3		(1 << 11)
/** DMAC_CTRL_LVLEN2 Priority Level 2 Enable **/
#define DMAC_CTRL_LVLEN2		(1 << 10)
/** DMAC_CTRL_LVLEN1 Priority Level 1 Enable **/
#define DMAC_CTRL_LVLEN1		(1 << 9)
/** DMAC_CTRL_LVLEN0 Priority Level 0 Enable **/
#define DMAC_CTRL_LVLEN0		(1 << 8)
/** DMAC_CTRL_CRCENABLE CRC Enable **/
#define DMAC_CTRL_CRCENABLE		(1 << 2)
/** DMAC_CTRL_DMAENABLE DMA Enable **/
#define DMAC_CTRL_DMAENABLE		(1 << 1)
/** DMAC_CTRL_SWRST Software Reset **/
#define DMAC_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup dmac_crcctrl CRCCTRL CRC Control
@{*/


#define DMAC_CRCCTRL_CRCSRC_SHIFT		8
#define DMAC_CRCCTRL_CRCSRC_MASK		0x3f
/** @defgroup dmac_crcctrl_crcsrc CRCSRC CRC Input Source
@{*/
/**@}*/


#define DMAC_CRCCTRL_CRCPOLY_SHIFT		2
#define DMAC_CRCCTRL_CRCPOLY_MASK		0x03
/** @defgroup dmac_crcctrl_crcpoly CRCPOLY CRC Polynomial Type
@{*/
/**@}*/


#define DMAC_CRCCTRL_CRCBEATSIZE_SHIFT		0
#define DMAC_CRCCTRL_CRCBEATSIZE_MASK		0x03
/** @defgroup dmac_crcctrl_crcbeatsize CRCBEATSIZE CRC Beat Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_crcdatain CRCDATAIN CRC Data Input
@{*/


#define DMAC_CRCDATAIN_CRCDATAIN_SHIFT		0
#define DMAC_CRCDATAIN_CRCDATAIN_MASK		0xffffffff
/** @defgroup dmac_crcdatain_crcdatain CRCDATAIN CRC Data Input
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_crcchksum CRCCHKSUM CRC Checksum
@{*/


#define DMAC_CRCCHKSUM_CRCCHKSUM_SHIFT		0
#define DMAC_CRCCHKSUM_CRCCHKSUM_MASK		0xffffffff
/** @defgroup dmac_crcchksum_crcchksum CRCCHKSUM CRC Checksum
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_crcstatus CRCSTATUS CRC Status
@{*/

/** DMAC_CRCSTATUS_CRCZERO CRC Zero **/
#define DMAC_CRCSTATUS_CRCZERO		(1 << 1)
/** DMAC_CRCSTATUS_CRCBUSY CRC Module Busy **/
#define DMAC_CRCSTATUS_CRCBUSY		(1 << 0)

/**@}*/

/** @defgroup dmac_dbgctrl DBGCTRL Debug Control
@{*/

/** DMAC_DBGCTRL_DBGRUN Debug Run **/
#define DMAC_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

/** @defgroup dmac_qosctrl QOSCTRL QOS Control
@{*/


#define DMAC_QOSCTRL_DQOS_SHIFT		4
#define DMAC_QOSCTRL_DQOS_MASK		0x03
/** @defgroup dmac_qosctrl_dqos DQOS Data Transfer Quality of Service
@{*/
/**@}*/


#define DMAC_QOSCTRL_FQOS_SHIFT		2
#define DMAC_QOSCTRL_FQOS_MASK		0x03
/** @defgroup dmac_qosctrl_fqos FQOS Fetch Quality of Service
@{*/
/**@}*/


#define DMAC_QOSCTRL_WRBQOS_SHIFT		0
#define DMAC_QOSCTRL_WRBQOS_MASK		0x03
/** @defgroup dmac_qosctrl_wrbqos WRBQOS Write-Back Quality of Service
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_swtrigctrl SWTRIGCTRL Software Trigger Control
@{*/

/** DMAC_SWTRIGCTRL_SWTRIG11 Channel 11 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG11		(1 << 11)
/** DMAC_SWTRIGCTRL_SWTRIG10 Channel 10 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG10		(1 << 10)
/** DMAC_SWTRIGCTRL_SWTRIG9 Channel 9 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG9		(1 << 9)
/** DMAC_SWTRIGCTRL_SWTRIG8 Channel 8 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG8		(1 << 8)
/** DMAC_SWTRIGCTRL_SWTRIG7 Channel 7 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG7		(1 << 7)
/** DMAC_SWTRIGCTRL_SWTRIG6 Channel 6 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG6		(1 << 6)
/** DMAC_SWTRIGCTRL_SWTRIG5 Channel 5 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG5		(1 << 5)
/** DMAC_SWTRIGCTRL_SWTRIG4 Channel 4 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG4		(1 << 4)
/** DMAC_SWTRIGCTRL_SWTRIG3 Channel 3 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG3		(1 << 3)
/** DMAC_SWTRIGCTRL_SWTRIG2 Channel 2 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG2		(1 << 2)
/** DMAC_SWTRIGCTRL_SWTRIG1 Channel 1 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG1		(1 << 1)
/** DMAC_SWTRIGCTRL_SWTRIG0 Channel 0 Software Trigger **/
#define DMAC_SWTRIGCTRL_SWTRIG0		(1 << 0)

/**@}*/

/** @defgroup dmac_prictrl0 PRICTRL0 Priority Control 0
@{*/

/** DMAC_PRICTRL0_RRLVLEN3 Level 3 Round-Robin Scheduling Enable **/
#define DMAC_PRICTRL0_RRLVLEN3		(1 << 31)

#define DMAC_PRICTRL0_LVLPRI3_SHIFT		24
#define DMAC_PRICTRL0_LVLPRI3_MASK		0x0f
/** @defgroup dmac_prictrl0_lvlpri3 LVLPRI3 Level 3 Channel Priority Number
@{*/
/**@}*/

/** DMAC_PRICTRL0_RRLVLEN2 Level 2 Round-Robin Scheduling Enable **/
#define DMAC_PRICTRL0_RRLVLEN2		(1 << 23)

#define DMAC_PRICTRL0_LVLPRI2_SHIFT		16
#define DMAC_PRICTRL0_LVLPRI2_MASK		0x0f
/** @defgroup dmac_prictrl0_lvlpri2 LVLPRI2 Level 2 Channel Priority Number
@{*/
/**@}*/

/** DMAC_PRICTRL0_RRLVLEN1 Level 1 Round-Robin Scheduling Enable **/
#define DMAC_PRICTRL0_RRLVLEN1		(1 << 15)

#define DMAC_PRICTRL0_LVLPRI1_SHIFT		8
#define DMAC_PRICTRL0_LVLPRI1_MASK		0x0f
/** @defgroup dmac_prictrl0_lvlpri1 LVLPRI1 Level 1 Channel Priority Number
@{*/
/**@}*/

/** DMAC_PRICTRL0_RRLVLEN0 Level 0 Round-Robin Scheduling Enable **/
#define DMAC_PRICTRL0_RRLVLEN0		(1 << 7)

#define DMAC_PRICTRL0_LVLPRI0_SHIFT		0
#define DMAC_PRICTRL0_LVLPRI0_MASK		0x0f
/** @defgroup dmac_prictrl0_lvlpri0 LVLPRI0 Level 0 Channel Priority Number
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_intpend INTPEND Interrupt Pending
@{*/

/** DMAC_INTPEND_PEND Pending **/
#define DMAC_INTPEND_PEND		(1 << 15)
/** DMAC_INTPEND_BUSY Busy **/
#define DMAC_INTPEND_BUSY		(1 << 14)
/** DMAC_INTPEND_FERR Fetch Error **/
#define DMAC_INTPEND_FERR		(1 << 13)
/** DMAC_INTPEND_SUSP Channel Suspend **/
#define DMAC_INTPEND_SUSP		(1 << 10)
/** DMAC_INTPEND_TCMPL Transfer Complete **/
#define DMAC_INTPEND_TCMPL		(1 << 9)
/** DMAC_INTPEND_TERR Transfer Error **/
#define DMAC_INTPEND_TERR		(1 << 8)

#define DMAC_INTPEND_ID_SHIFT		0
#define DMAC_INTPEND_ID_MASK		0x0f
/** @defgroup dmac_intpend_id ID Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_intstatus INTSTATUS Interrupt Status
@{*/

/** DMAC_INTSTATUS_CHINT11 Channel 11 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT11		(1 << 11)
/** DMAC_INTSTATUS_CHINT10 Channel 10 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT10		(1 << 10)
/** DMAC_INTSTATUS_CHINT9 Channel 9 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT9		(1 << 9)
/** DMAC_INTSTATUS_CHINT8 Channel 8 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT8		(1 << 8)
/** DMAC_INTSTATUS_CHINT7 Channel 7 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT7		(1 << 7)
/** DMAC_INTSTATUS_CHINT6 Channel 6 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT6		(1 << 6)
/** DMAC_INTSTATUS_CHINT5 Channel 5 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT5		(1 << 5)
/** DMAC_INTSTATUS_CHINT4 Channel 4 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT4		(1 << 4)
/** DMAC_INTSTATUS_CHINT3 Channel 3 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT3		(1 << 3)
/** DMAC_INTSTATUS_CHINT2 Channel 2 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT2		(1 << 2)
/** DMAC_INTSTATUS_CHINT1 Channel 1 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT1		(1 << 1)
/** DMAC_INTSTATUS_CHINT0 Channel 0 Pending Interrupt **/
#define DMAC_INTSTATUS_CHINT0		(1 << 0)

/**@}*/

/** @defgroup dmac_busych BUSYCH Busy Channels
@{*/

/** DMAC_BUSYCH_BUSYCH11 Busy Channel 11 **/
#define DMAC_BUSYCH_BUSYCH11		(1 << 11)
/** DMAC_BUSYCH_BUSYCH10 Busy Channel 10 **/
#define DMAC_BUSYCH_BUSYCH10		(1 << 10)
/** DMAC_BUSYCH_BUSYCH9 Busy Channel 9 **/
#define DMAC_BUSYCH_BUSYCH9		(1 << 9)
/** DMAC_BUSYCH_BUSYCH8 Busy Channel 8 **/
#define DMAC_BUSYCH_BUSYCH8		(1 << 8)
/** DMAC_BUSYCH_BUSYCH7 Busy Channel 7 **/
#define DMAC_BUSYCH_BUSYCH7		(1 << 7)
/** DMAC_BUSYCH_BUSYCH6 Busy Channel 6 **/
#define DMAC_BUSYCH_BUSYCH6		(1 << 6)
/** DMAC_BUSYCH_BUSYCH5 Busy Channel 5 **/
#define DMAC_BUSYCH_BUSYCH5		(1 << 5)
/** DMAC_BUSYCH_BUSYCH4 Busy Channel 4 **/
#define DMAC_BUSYCH_BUSYCH4		(1 << 4)
/** DMAC_BUSYCH_BUSYCH3 Busy Channel 3 **/
#define DMAC_BUSYCH_BUSYCH3		(1 << 3)
/** DMAC_BUSYCH_BUSYCH2 Busy Channel 2 **/
#define DMAC_BUSYCH_BUSYCH2		(1 << 2)
/** DMAC_BUSYCH_BUSYCH1 Busy Channel 1 **/
#define DMAC_BUSYCH_BUSYCH1		(1 << 1)
/** DMAC_BUSYCH_BUSYCH0 Busy Channel 0 **/
#define DMAC_BUSYCH_BUSYCH0		(1 << 0)

/**@}*/

/** @defgroup dmac_pendch PENDCH Pending Channels
@{*/

/** DMAC_PENDCH_PENDCH11 Pending Channel 11 **/
#define DMAC_PENDCH_PENDCH11		(1 << 11)
/** DMAC_PENDCH_PENDCH10 Pending Channel 10 **/
#define DMAC_PENDCH_PENDCH10		(1 << 10)
/** DMAC_PENDCH_PENDCH9 Pending Channel 9 **/
#define DMAC_PENDCH_PENDCH9		(1 << 9)
/** DMAC_PENDCH_PENDCH8 Pending Channel 8 **/
#define DMAC_PENDCH_PENDCH8		(1 << 8)
/** DMAC_PENDCH_PENDCH7 Pending Channel 7 **/
#define DMAC_PENDCH_PENDCH7		(1 << 7)
/** DMAC_PENDCH_PENDCH6 Pending Channel 6 **/
#define DMAC_PENDCH_PENDCH6		(1 << 6)
/** DMAC_PENDCH_PENDCH5 Pending Channel 5 **/
#define DMAC_PENDCH_PENDCH5		(1 << 5)
/** DMAC_PENDCH_PENDCH4 Pending Channel 4 **/
#define DMAC_PENDCH_PENDCH4		(1 << 4)
/** DMAC_PENDCH_PENDCH3 Pending Channel 3 **/
#define DMAC_PENDCH_PENDCH3		(1 << 3)
/** DMAC_PENDCH_PENDCH2 Pending Channel 2 **/
#define DMAC_PENDCH_PENDCH2		(1 << 2)
/** DMAC_PENDCH_PENDCH1 Pending Channel 1 **/
#define DMAC_PENDCH_PENDCH1		(1 << 1)
/** DMAC_PENDCH_PENDCH0 Pending Channel 0 **/
#define DMAC_PENDCH_PENDCH0		(1 << 0)

/**@}*/

/** @defgroup dmac_active ACTIVE Active Channel and Levels
@{*/


#define DMAC_ACTIVE_BTCNT_SHIFT		16
#define DMAC_ACTIVE_BTCNT_MASK		0xffff
/** @defgroup dmac_active_btcnt BTCNT Active Channel Block Transfer Count
@{*/
/**@}*/

/** DMAC_ACTIVE_ABUSY Active Channel Busy **/
#define DMAC_ACTIVE_ABUSY		(1 << 15)

#define DMAC_ACTIVE_ID_SHIFT		8
#define DMAC_ACTIVE_ID_MASK		0x1f
/** @defgroup dmac_active_id ID Active Channel ID
@{*/
/**@}*/

/** DMAC_ACTIVE_LVLEX3 Level 3 Channel Trigger Request Executing **/
#define DMAC_ACTIVE_LVLEX3		(1 << 3)
/** DMAC_ACTIVE_LVLEX2 Level 2 Channel Trigger Request Executing **/
#define DMAC_ACTIVE_LVLEX2		(1 << 2)
/** DMAC_ACTIVE_LVLEX1 Level 1 Channel Trigger Request Executing **/
#define DMAC_ACTIVE_LVLEX1		(1 << 1)
/** DMAC_ACTIVE_LVLEX0 Level 0 Channel Trigger Request Executing **/
#define DMAC_ACTIVE_LVLEX0		(1 << 0)

/**@}*/

/** @defgroup dmac_baseaddr BASEADDR Descriptor Memory Section Base Address
@{*/


#define DMAC_BASEADDR_BASEADDR_SHIFT		0
#define DMAC_BASEADDR_BASEADDR_MASK		0xffffffff
/** @defgroup dmac_baseaddr_baseaddr BASEADDR Descriptor Memory Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_wrbaddr WRBADDR Write-Back Memory Section Base Address
@{*/


#define DMAC_WRBADDR_WRBADDR_SHIFT		0
#define DMAC_WRBADDR_WRBADDR_MASK		0xffffffff
/** @defgroup dmac_wrbaddr_wrbaddr WRBADDR Write-Back Memory Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_chid CHID Channel ID
@{*/


#define DMAC_CHID_ID_SHIFT		0
#define DMAC_CHID_ID_MASK		0x0f
/** @defgroup dmac_chid_id ID Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_chctrla CHCTRLA Channel Control A
@{*/

/** DMAC_CHCTRLA_ENABLE Channel Enable **/
#define DMAC_CHCTRLA_ENABLE		(1 << 1)
/** DMAC_CHCTRLA_SWRST Channel Software Reset **/
#define DMAC_CHCTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup dmac_chctrlb CHCTRLB Channel Control B
@{*/


#define DMAC_CHCTRLB_CMD_SHIFT		24
#define DMAC_CHCTRLB_CMD_MASK		0x03
/** @defgroup dmac_chctrlb_cmd CMD Software Command
@{*/
/**@}*/


#define DMAC_CHCTRLB_TRIGACT_SHIFT		22
#define DMAC_CHCTRLB_TRIGACT_MASK		0x03
/** @defgroup dmac_chctrlb_trigact TRIGACT Trigger Action
@{*/
/**@}*/


#define DMAC_CHCTRLB_TRIGSRC_SHIFT		8
#define DMAC_CHCTRLB_TRIGSRC_MASK		0x3f
/** @defgroup dmac_chctrlb_trigsrc TRIGSRC Trigger Source
@{*/
/**@}*/


#define DMAC_CHCTRLB_LVL_SHIFT		5
#define DMAC_CHCTRLB_LVL_MASK		0x03
/** @defgroup dmac_chctrlb_lvl LVL Channel Arbitration Level
@{*/
/**@}*/

/** DMAC_CHCTRLB_EVOE Channel Event Output Enable **/
#define DMAC_CHCTRLB_EVOE		(1 << 4)
/** DMAC_CHCTRLB_EVIE Channel Event Input Enable **/
#define DMAC_CHCTRLB_EVIE		(1 << 3)

#define DMAC_CHCTRLB_EVACT_SHIFT		0
#define DMAC_CHCTRLB_EVACT_MASK		0x07
/** @defgroup dmac_chctrlb_evact EVACT Event Input Action
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_chintenclr CHINTENCLR Channel Interrupt Enable Clear
@{*/

/** DMAC_CHINTENCLR_SUSP Channel Suspend Interrupt Enable **/
#define DMAC_CHINTENCLR_SUSP		(1 << 2)
/** DMAC_CHINTENCLR_TCMPL Channel Transfer Complete Interrupt Enable **/
#define DMAC_CHINTENCLR_TCMPL		(1 << 1)
/** DMAC_CHINTENCLR_TERR Channel Transfer Error Interrupt Enable **/
#define DMAC_CHINTENCLR_TERR		(1 << 0)

/**@}*/

/** @defgroup dmac_chintenset CHINTENSET Channel Interrupt Enable Set
@{*/

/** DMAC_CHINTENSET_SUSP Channel Suspend Interrupt Enable **/
#define DMAC_CHINTENSET_SUSP		(1 << 2)
/** DMAC_CHINTENSET_TCMPL Channel Transfer Complete Interrupt Enable **/
#define DMAC_CHINTENSET_TCMPL		(1 << 1)
/** DMAC_CHINTENSET_TERR Channel Transfer Error Interrupt Enable **/
#define DMAC_CHINTENSET_TERR		(1 << 0)

/**@}*/

/** @defgroup dmac_chintflag CHINTFLAG Channel Interrupt Flag Status and Clear
@{*/

/** DMAC_CHINTFLAG_SUSP Channel Suspend **/
#define DMAC_CHINTFLAG_SUSP		(1 << 2)
/** DMAC_CHINTFLAG_TCMPL Channel Transfer Complete **/
#define DMAC_CHINTFLAG_TCMPL		(1 << 1)
/** DMAC_CHINTFLAG_TERR Channel Transfer Error **/
#define DMAC_CHINTFLAG_TERR		(1 << 0)

/**@}*/

/** @defgroup dmac_chstatus CHSTATUS Channel Status
@{*/

/** DMAC_CHSTATUS_FERR Channel Fetch Error **/
#define DMAC_CHSTATUS_FERR		(1 << 2)
/** DMAC_CHSTATUS_BUSY Channel Busy **/
#define DMAC_CHSTATUS_BUSY		(1 << 1)
/** DMAC_CHSTATUS_PEND Channel Pending **/
#define DMAC_CHSTATUS_PEND		(1 << 0)

/**@}*/
